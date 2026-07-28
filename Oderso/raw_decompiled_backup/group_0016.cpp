#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x180171200
uint32_t * func_0x180171200(uint32_t *param_1,uint64_t *param_2,uint64_t *param_3)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint64_t *pU64_10;
  
  uVal_1 = param_3[2];
  if (0xf < (uint64_t)param_3[3]) {
    param_3 = (uint64_t *)*param_3;
  }
  lVal_2 = param_2[2];
  if ((uint64_t)(param_2[3] - lVal_2) < uVal_1) {
    param_2 = (uint64_t *)func_0x180082950(param_2,uVal_1,param_3,param_3,uVal_1);
  }
  else {
    param_2[2] = lVal_2 + uVal_1;
    pU64_10 = param_2;
    if (0xf < (uint64_t)param_2[3]) {
      pU64_10 = (uint64_t *)*param_2;
    }
    func_0x1806aa960((uint8_t *)(lVal_2 + (int64_t)pU64_10),param_3,uVal_1);
    *(uint8_t *)((int64_t)pU64_10 + lVal_2 + uVal_1) = 0;
  }
  uVal_3 = *(uint32_t *)param_2;
  uVal_4 = *(uint32_t *)((int64_t)param_2 + 4);
  uVal_5 = *(uint32_t *)(param_2 + 1);
  uVal_6 = *(uint32_t *)((int64_t)param_2 + 0xc);
  uVal_7 = *(uint32_t *)((int64_t)param_2 + 0x14);
  uVal_8 = *(uint32_t *)(param_2 + 3);
  uVal_9 = *(uint32_t *)((int64_t)param_2 + 0x1c);
  param_1[4] = *(uint32_t *)(param_2 + 2);
  param_1[5] = uVal_7;
  param_1[6] = uVal_8;
  param_1[7] = uVal_9;
  *param_1 = uVal_3;
  param_1[1] = uVal_4;
  param_1[2] = uVal_5;
  param_1[3] = uVal_6;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(uint8_t *)param_2 = 0;
  return param_1;
}

// func_0x1801712a0
int64_t func_0x1801712a0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5048) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5048) = 1;
    *(uint32_t *)(lVal_1 + 0x5040) = 0x14631b49;
    *(uint16_t *)(lVal_1 + 0x5044) = 0x145;
    func_0x180673140(&LAB_1801b5f30);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5040;
}

// func_0x180171320
void func_0x180171320(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 5) == '\x01') {
    *param_1 = *param_1 ^ 0x730d6b67;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x45;
    *(uint8_t *)((int64_t)param_1 + 5) = 0;
  }
  return;
}

// func_0x180171340
int64_t func_0x180171340(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5054) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5054) = 1;
    *(uint8_t *)(lVal_1 + 0x5052) = 1;
    *(uint32_t *)(lVal_1 + 0x504c) = 0x1a66384a;
    *(uint16_t *)(lVal_1 + 0x5050) = 0xa92b;
    func_0x180673140(&LAB_1801b5f60);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x504c;
}

// func_0x1801713d0
void func_0x1801713d0(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0x730d6b67;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x45;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0xa9;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x1801713f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1801713f0(void)
{
  int64_t lVal_1;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  undefined3 uStack_28;
  uint32_t uStack_25;
  uint32_t uStack_21;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = _UNK_1806b98f7;
  uStack_25 = _UNK_1806b98fa;
  uStack_21 = _UNK_1806b98fe;
  local_38 = _DAT_1806b98e7;
  uStack_34 = _UNK_1806b98eb;
  uStack_30 = _UNK_1806b98ef;
  uStack_2c = _UNK_1806b98f3;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x507c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x507c) = 1;
    func_0x18007c9b0(lVal_1 + 0x505d,&local_38);
    func_0x180673140(&LAB_1801b5fc0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x505d;
}

// Unwind@180171490
void Unwind_180171490(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x507c) = 0;
  return;
}

// func_0x1801714c0
void func_0x1801714c0(uint64_t param_1,uint param_2,uint64_t param_3,byte *param_4,int param_5)
{
  byte bFlag_4;
  uint uVal_1;
  uint uVal_2;
  int iVal_3;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint64_t uVal_8;
  uint uVal_9;
  int iVal_10;
  int iVal_11;
  uint uVal_12;
  bool bFlag_13;
  uint8_t local_74;
  int local_70;
  
  func_0x18068b2f8(0xffffff89,param_1);
  func_0x18068b2f8(0x50,param_1);
  func_0x18068b2f8(0x4e,param_1);
  func_0x18068b2f8(0x47,param_1);
  func_0x18068b2f8(0xd,param_1);
  func_0x18068b2f8(10,param_1);
  func_0x18068b2f8(0x1a,param_1);
  func_0x18068b2f8(10,param_1);
  uVal_9 = 0;
  func_0x18068b2f8(0,param_1);
  func_0x18068b2f8(0,param_1);
  func_0x18068b2f8(0,param_1);
  func_0x18068b2f8(0xd,param_1);
  func_0x18068b2f8(0x49,param_1);
  func_0x18068b2f8(0x48,param_1);
  func_0x18068b2f8(0x44,param_1);
  func_0x18068b2f8(0x52,param_1);
  func_0x18068b2f8(param_2 >> 0x18,param_1);
  uVal_7 = param_2 >> 0x18 ^ 0x575e51f5;
  uVal_12 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  uVal_7 = param_2 >> 0x10 & 0xff;
  func_0x18068b2f8(uVal_7,param_1);
  uVal_7 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4) ^ uVal_7;
  uVal_12 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  uVal_7 = param_2 >> 8 & 0xff;
  func_0x18068b2f8(uVal_7,param_1);
  uVal_7 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4) ^ uVal_7;
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  local_74 = (uint8_t)param_2;
  func_0x18068b2f8(local_74,param_1);
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4) ^ param_2 & 0xff;
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  uVal_8 = param_3 >> 0x18 & 0xff;
  func_0x18068b2f8(uVal_8,param_1);
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4) ^ (uint)uVal_8;
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  uVal_8 = param_3 >> 0x10 & 0xff;
  func_0x18068b2f8(uVal_8,param_1);
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4) ^ (uint)uVal_8;
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  bFlag_4 = (byte)(param_3 >> 8);
  func_0x18068b2f8(bFlag_4,param_1);
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4) ^ (uint)bFlag_4;
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  local_70._0_1_ = (byte)param_3;
  func_0x18068b2f8(param_3 & 0xff,param_1);
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4) ^
          (uint)(byte)local_70;
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  func_0x18068b2f8(8,param_1);
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf ^ 8) * 4);
  uVal_12 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  uVal_7 = (uint)(param_5 != 0) * 4 + 2;
  func_0x18068b2f8(uVal_7,param_1);
  uVal_7 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf ^ uVal_7) * 4);
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  func_0x18068b2f8(0,param_1);
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  func_0x18068b2f8(0,param_1);
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  func_0x18068b2f8(0,param_1);
  uVal_7 = uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4);
  iVal_10 = ((param_5 != 0) + 3) * param_2;
  uVal_7 = ~(uVal_7 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_7 & 0xf) * 4));
  func_0x18068b2f8(uVal_7 >> 0x18,param_1);
  func_0x18068b2f8(uVal_7 >> 0x10 & 0xff,param_1);
  func_0x18068b2f8(uVal_7 >> 8 & 0xff,param_1);
  func_0x18068b2f8(uVal_7 & 0xff,param_1);
  local_70 = (int)param_3;
  uVal_7 = (iVal_10 + 6) * local_70 + 6;
  func_0x18068b2f8(uVal_7 >> 0x18,param_1);
  func_0x18068b2f8(uVal_7 >> 0x10 & 0xff,param_1);
  func_0x18068b2f8(uVal_7 >> 8 & 0xff,param_1);
  func_0x18068b2f8(uVal_7 & 0xff,param_1);
  func_0x18068b2f8(0x49,param_1);
  func_0x18068b2f8(0x44,param_1);
  func_0x18068b2f8(0x41,param_1);
  func_0x18068b2f8(0x54,param_1);
  func_0x18068b2f8(0x78,param_1);
  uVal_7 = 1;
  func_0x18068b2f8(1,param_1);
  if (local_70 == 0) {
    uVal_12 = 0x13e5812d;
  }
  else {
    uVal_5 = iVal_10 + 1U & 0xff;
    uVal_1 = iVal_10 + 1U >> 8 & 0xff;
    uVal_6 = -iVal_10 - 2U & 0xff;
    uVal_2 = -iVal_10 - 2U >> 8 & 0xff;
    uVal_7 = 1;
    uVal_12 = 0x13e5812d;
    uVal_9 = 0;
    iVal_3 = 0;
    do {
      bFlag_13 = iVal_3 == local_70 + -1;
      func_0x18068b2f8(bFlag_13,param_1);
      uVal_12 = uVal_12 >> 4 ^
               *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf ^ (uint)bFlag_13) * 4);
      func_0x18068b2f8(uVal_5,param_1);
      uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4) ^ uVal_5;
      uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4);
      func_0x18068b2f8(uVal_1,param_1);
      uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4) ^ uVal_1;
      uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4);
      func_0x18068b2f8(uVal_6,param_1);
      uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4) ^ uVal_6;
      uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4);
      func_0x18068b2f8(uVal_2,param_1);
      uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4) ^ uVal_2;
      uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4);
      uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4);
      func_0x18068b2f8(0,param_1);
      uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4);
      uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4);
      uVal_9 = uVal_9 + uVal_7;
      for (iVal_11 = iVal_10; uVal_9 = uVal_9 % 0xfff1, iVal_11 != 0; iVal_11 = iVal_11 + -1) {
        func_0x18068b2f8(*param_4,param_1);
        uVal_12 = uVal_12 ^ *param_4;
        uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4);
        uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4);
        uVal_7 = (uVal_7 + *param_4) % 0xfff1;
        uVal_9 = uVal_9 + uVal_7;
        param_4 = param_4 + 1;
      }
      iVal_3 = iVal_3 + 1;
    } while (iVal_3 != local_70);
  }
  func_0x18068b2f8(uVal_9 >> 8,param_1);
  uVal_12 = uVal_9 >> 8 ^ uVal_12;
  uVal_12 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4);
  func_0x18068b2f8(uVal_9 & 0xff,param_1);
  uVal_9 = uVal_12 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_12 & 0xf) * 4) ^ uVal_9 & 0xff;
  uVal_9 = uVal_9 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_9 & 0xf) * 4);
  func_0x18068b2f8(uVal_7 >> 8,param_1);
  uVal_9 = uVal_9 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_9 & 0xf) * 4) ^ uVal_7 >> 8;
  uVal_9 = uVal_9 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_9 & 0xf) * 4);
  func_0x18068b2f8(uVal_7 & 0xff,param_1);
  uVal_9 = uVal_9 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_9 & 0xf) * 4) ^ uVal_7 & 0xff;
  uVal_9 = uVal_9 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_9 & 0xf) * 4);
  uVal_9 = ~(uVal_9 >> 4 ^ *(uint *)(&DAT_1806b9910 + (uint64_t)(uVal_9 & 0xf) * 4));
  func_0x18068b2f8(uVal_9 >> 0x18,param_1);
  func_0x18068b2f8(uVal_9 >> 0x10 & 0xff,param_1);
  func_0x18068b2f8(uVal_9 >> 8 & 0xff,param_1);
  func_0x18068b2f8(uVal_9 & 0xff,param_1);
  func_0x18068b2f8(0,param_1);
  func_0x18068b2f8(0,param_1);
  func_0x18068b2f8(0,param_1);
  func_0x18068b2f8(0,param_1);
  func_0x18068b2f8(0x49,param_1);
  func_0x18068b2f8(0x45,param_1);
  func_0x18068b2f8(0x4e,param_1);
  func_0x18068b2f8(0x44,param_1);
  func_0x18068b2f8(0xae,param_1);
  func_0x18068b2f8(0x42,param_1);
  func_0x18068b2f8(0x60,param_1);
  func_0x18068b2f8(0x82,param_1);
  return;
}

// func_0x180171cb0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180171cb0(void)
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
  uint32_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806b9960;
  uStack_24 = _UNK_1806b9964;
  uStack_20 = _UNK_1806b9968;
  uStack_1c = _UNK_1806b996c;
  local_38 = _DAT_1806b9950;
  uStack_34 = _UNK_1806b9954;
  uStack_30 = _UNK_1806b9958;
  uStack_2c = _UNK_1806b995c;
  local_18 = 0x850812a4;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x50a4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x50a4) = 1;
    func_0x180086790(lVal_1 + 0x507d,&local_38);
    func_0x180673140(&LAB_1801b5ff0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x507d;
}

// Unwind@180171d60
void Unwind_180171d60(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x50a4) = 0;
  return;
}

// func_0x180171d90
int64_t func_0x180171d90(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x50b0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x50b0) = 1;
    *(uint32_t *)(lVal_1 + 0x50a8) = 0x20df7f45;
    *(uint16_t *)(lVal_1 + 0x50ac) = 0x159;
    func_0x180673140(&LAB_1801b6020);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x50a8;
}

// func_0x180171e10
void func_0x180171e10(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 5) == '\x01') {
    *param_1 = *param_1 ^ 0x47b10f6b;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x59;
    *(uint8_t *)((int64_t)param_1 + 5) = 0;
  }
  return;
}

// func_0x180171e30
int64_t func_0x180171e30(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x50bc) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x50bc) = 1;
    *(uint8_t *)(lVal_1 + 0x50ba) = 1;
    *(uint32_t *)(lVal_1 + 0x50b4) = 0x37d04c46;
    *(uint16_t *)(lVal_1 + 0x50b8) = 0x2f3c;
    func_0x180673140(&LAB_1801b6050);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x50b4;
}

// func_0x180171ec0
void func_0x180171ec0(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0x47b10f6b;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x59;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0x2f;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x180171ee0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180171ee0(void)
{
  int64_t lVal_1;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  undefined3 uStack_28;
  uint32_t uStack_25;
  uint32_t uStack_21;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = _UNK_1806b9984;
  uStack_25 = _UNK_1806b9987;
  uStack_21 = _UNK_1806b998b;
  local_38 = _DAT_1806b9974;
  uStack_34 = _UNK_1806b9978;
  uStack_30 = _UNK_1806b997c;
  uStack_2c = _UNK_1806b9980;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x50e4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x50e4) = 1;
    func_0x18007c9b0(lVal_1 + 0x50c5,&local_38);
    func_0x180673140(&LAB_1801b60b0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x50c5;
}

// Unwind@180171f80
void Unwind_180171f80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x50e4) = 0;
  return;
}

// func_0x180171fb0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180171fb0(void)
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
  uint32_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806b999f;
  uStack_24 = _UNK_1806b99a3;
  uStack_20 = _UNK_1806b99a7;
  uStack_1c = _UNK_1806b99ab;
  local_38 = _DAT_1806b998f;
  uStack_34 = _UNK_1806b9993;
  uStack_30 = _UNK_1806b9997;
  uStack_2c = _UNK_1806b999b;
  local_18 = 0x8bbce69c;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x510c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x510c) = 1;
    func_0x180086790(lVal_1 + 0x50e5,&local_38);
    func_0x180673140(&LAB_1801b60e0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x50e5;
}

// Unwind@180172060
void Unwind_180172060(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x510c) = 0;
  return;
}

// func_0x180172090
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180172090(void)
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
  local_28 = _DAT_1806b99c3;
  uStack_24 = _UNK_1806b99c7;
  uStack_20 = _UNK_1806b99cb;
  uStack_1c = _UNK_1806b99cf;
  local_38 = _DAT_1806b99b3;
  uStack_34 = _UNK_1806b99b7;
  uStack_30 = _UNK_1806b99bb;
  uStack_2c = _UNK_1806b99bf;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5130) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5130) = 1;
    func_0x18008f8e0(lVal_1 + 0x510d,&local_38);
    func_0x180673140(&LAB_1801b6110);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x510d;
}

// Unwind@180172130
void Unwind_180172130(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5130) = 0;
  return;
}

// func_0x180172160
int64_t func_0x180172160(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x513c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x513c) = 1;
    *(uint8_t *)(lVal_1 + 0x513a) = 1;
    *(uint32_t *)(lVal_1 + 0x5134) = 0x1694ed91;
    *(uint16_t *)(lVal_1 + 0x5138) = 0xff01;
    func_0x180673140(&LAB_1801b6140);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5134;
}

// func_0x1801721f0
void func_0x1801721f0(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0x79e787bf;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x6f;
    *(byte *)((int64_t)param_1 + 5) = ~*(byte *)((int64_t)param_1 + 5);
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x180172210
int64_t func_0x180172210(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5148) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5148) = 1;
    *(uint32_t *)(lVal_1 + 0x5140) = 0x1682c092;
    *(uint16_t *)(lVal_1 + 0x5144) = 0x16f;
    func_0x180673140(&LAB_1801b6170);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5140;
}

// func_0x180172290
void func_0x180172290(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 5) == '\x01') {
    *param_1 = *param_1 ^ 0x79e787bf;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x6f;
    *(uint8_t *)((int64_t)param_1 + 5) = 0;
  }
  return;
}

// func_0x1801722b0
void func_0x1801722b0(int64_t *param_1)
{
  uint uVal_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  char *fnPtr_6;
  char *fnPtr_7;
  uint8_t auStack_68 [32];
  uint32_t local_48 [2];
  uint8_t **local_40;
  uint8_t local_38 [40];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  lVal_4 = func_0x18008b2b0(param_1 + 1);
  if (lVal_4 == 0) {
    lVal_4 = (int64_t)*(int *)(*param_1 + 4);
    uVal_3 = *(uint *)((int64_t)param_1 + lVal_4 + 0x10) & 0x15 |
            (uint)(*(int64_t *)((int64_t)param_1 + lVal_4 + 0x48) == 0) << 2 | 2;
    *(uint *)((int64_t)param_1 + lVal_4 + 0x10) = uVal_3;
    uVal_1 = *(uint *)((int64_t)param_1 + lVal_4 + 0x14);
    uVal_5 = (uint64_t)uVal_1;
    uVal_3 = uVal_3 & uVal_1;
    if (uVal_3 != 0) goto LAB_180172329;
  }
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_68)) {
    return;
  }
  uVal_5 = local_10;
  uVal_3 = func_0x180673080();
LAB_180172329:
  fnPtr_7 = "ios_base::failbit set";
  if ((uVal_5 & 2) == 0) {
    fnPtr_7 = "ios_base::eofbit set";
  }
  fnPtr_6 = "ios_base::badbit set";
  if ((uVal_3 & 4) == 0) {
    fnPtr_6 = fnPtr_7;
  }
  local_48[0] = 1;
  local_40 = &PTR_vftable_1806b0968;
  func_0x180096770(local_38,fnPtr_6,local_48);
  func_0x18067a120(local_38,&DAT_180768ca8);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x180172390
void func_0x180172390(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint64_t param_4)
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
  local_40 = 0xcd;
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

// Unwind@180172450
void Unwind_180172450(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x48);
  return;
}

// func_0x180172480
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180172480(void)
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
  uint64_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806b99e3;
  uStack_24 = _UNK_1806b99e7;
  uStack_20 = _UNK_1806b99eb;
  uStack_1c = _UNK_1806b99ef;
  local_38 = _DAT_1806b99d3;
  uStack_34 = _UNK_1806b99d7;
  uStack_30 = _UNK_1806b99db;
  uStack_2c = _UNK_1806b99df;
  local_18 = 0xe1d46cae390c98f1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5174) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5174) = 1;
    func_0x1801b39d0(lVal_1 + 0x5149,&local_38);
    func_0x180673140(&LAB_1801b61a0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5149;
}

// Unwind@180172530
void Unwind_180172530(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5174) = 0;
  return;
}

// func_0x180172560
void func_0x180172560(int64_t param_1)
{
  int64_t lVal_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t *pLong_6;
  
  uVal_5 = *(uint64_t *)(param_1 + 0x58);
  if (0xf < uVal_5) {
    lVal_1 = *(int64_t *)(param_1 + 0x40);
    uVal_3 = uVal_5 + 1;
    lVal_4 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) goto LAB_1801726f3;
      uVal_3 = uVal_5 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0xf;
  *(uint8_t *)(param_1 + 0x40) = 0;
  uVal_5 = *(uint64_t *)(param_1 + 0x38);
  if (0xf < uVal_5) {
    lVal_1 = *(int64_t *)(param_1 + 0x20);
    uVal_3 = uVal_5 + 1;
    lVal_4 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) goto LAB_1801726f3;
      uVal_3 = uVal_5 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0xf;
  *(uint8_t *)(param_1 + 0x20) = 0;
  pLong_6 = *(int64_t **)(param_1 + 8);
  if (pLong_6 != (int64_t *)0x0) {
    pLong_2 = *(int64_t **)(param_1 + 0x10);
    if (pLong_6 == pLong_2) {
      uVal_5 = *(int64_t *)(param_1 + 0x18) - (int64_t)pLong_6;
    }
    else {
      do {
        uVal_5 = pLong_6[3];
        if (0xf < uVal_5) {
          lVal_1 = *pLong_6;
          uVal_3 = uVal_5 + 1;
          lVal_4 = lVal_1;
          if (0xfff < uVal_3) {
            lVal_4 = *(int64_t *)(lVal_1 + -8);
            if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) goto LAB_1801726f3;
            uVal_3 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_3);
        }
        pLong_6[2] = 0;
        pLong_6[3] = 0xf;
        *(uint8_t *)pLong_6 = 0;
        pLong_6 = pLong_6 + 4;
      } while (pLong_6 != pLong_2);
      pLong_6 = *(int64_t **)*(uint8_t (*)[16])(param_1 + 8);
      uVal_5 = *(int64_t *)(param_1 + 0x18) - (int64_t)pLong_6;
    }
    if (0xfff < uVal_5) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_6 + (-8 - (int64_t)(int64_t *)pLong_6[-1]))) {
LAB_1801726f3:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
      pLong_6 = (int64_t *)pLong_6[-1];
    }
    thunk_FUN_180695dd0(pLong_6,uVal_5);
    *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  return;
}

// func_0x180172700
void func_0x180172700(int64_t param_1,uint64_t *param_2)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint32_t *pU64_3;
  uint uVal_4;
  size_t _Size;
  uint64_t uVal_5;
  uint64_t uVal_6;
  func_ptr_t fnPtr_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  int iVal_11;
  uint64_t *pU64_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  uint64_t *pU64_15;
  int64_t lVal_16;
  uint64_t *pU64_17;
  int64_t *pLong_18;
  int64_t lVal_19;
  uint64_t *pU64_20;
  uint64_t local_a8 [2];
  int64_t local_98;
  int64_t *plStack_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  int64_t local_60;
  int64_t *local_58;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  uStack_80 = (int64_t *)local_88;
  local_88 = (uint8_t  [8])&DAT_28d478d88fb3dcdf;
  DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
  if (DAT_180840a60 == 0) {
    DAT_180840a68 = 0;
  }
  pU64_12 = (uint64_t *)func_0x180126090(DAT_180840a60);
  pU64_17 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    pU64_17 = (uint64_t *)*param_2;
  }
  _Size = param_2[2];
  pU64_15 = pU64_12;
  if (0xf < (uint64_t)pU64_12[3]) {
    pU64_15 = (uint64_t *)*pU64_12;
  }
  if ((pU64_12[2] != _Size) ||
     ((_Size != 0 && (iVal_11 = memcmp(pU64_15,pU64_17,_Size), iVal_11 != 0)))) {
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_18083f8e0) && (func_0x180672ec0(&DAT_18083f8e0), DAT_18083f8e0 == -1))
    {
      DAT_18083f8d8 = (func_ptr_t )func_0x18011caa0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f8e0);
    }
    (*DAT_18083f8d8)(&local_60,0x5d);
    local_88 = (uint8_t  [8])&DAT_28d478d88fb3dcdf;
    DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
    if (DAT_180840a60 == 0) {
      DAT_180840a68 = 0;
    }
    lVal_14 = *(int64_t *)(DAT_180840a60 + 0x10);
    pLong_18 = (int64_t *)
              (*(int64_t *)(lVal_14 + 0x48) +
              (uint64_t)
              (((uint)(*(int *)(lVal_14 + 0x50) - (int)*(int64_t *)(lVal_14 + 0x48)) >> 3) - 1 &
              0xb845379) * 8);
    lVal_14 = *(int64_t *)(lVal_14 + 0x68);
    do {
      lVal_19 = *pLong_18 * 0x20;
      pLong_18 = (int64_t *)(lVal_14 + lVal_19);
    } while (*(int *)(lVal_14 + 8 + lVal_19) != 0xb845379);
    lVal_14 = *(int64_t *)(lVal_19 + 0x10 + lVal_14);
    uVal_4 = *(uint *)(*(int64_t *)
                       (*(int64_t *)(lVal_14 + 8) +
                       (uint64_t)((*(uint *)(DAT_180840a60 + 0x18) & 0x3f800) >> 8)) +
                     (uint64_t)(*(uint *)(DAT_180840a60 + 0x18) & 0x7ff) * 4);
    pU64_3 = (uint32_t *)
             (*(int64_t *)(*(int64_t *)(lVal_14 + 0x50) + (uint64_t)((uVal_4 & 0x3ff80) >> 4)) +
              0xb8 + (uint64_t)(uVal_4 & 0x7f) * 0x250);
    uVal_8 = pU64_3[1];
    uVal_9 = pU64_3[2];
    uVal_10 = pU64_3[3];
    *(uint32_t *)(local_60 + 0x30) = *pU64_3;
    *(uint32_t *)(local_60 + 0x34) = uVal_8;
    *(uint32_t *)(local_60 + 0x38) = uVal_9;
    *(uint32_t *)(local_60 + 0x3c) = uVal_10;
    func_0x180111fb0(*(uint64_t *)(local_60 + 0x40),param_2);
    if ((*(char *)(param_1 + 0x8e) == '\x01') &&
       (pU64_17 = *(uint64_t **)(local_60 + 0x40), pU64_17 != pU64_12)) {
      uVal_5 = pU64_12[0xe];
      if ((uint64_t)pU64_12[0xf] < 0x10) {
        pU64_15 = pU64_12 + 0xc;
        uVal_13 = pU64_17[0xf];
      }
      else {
        pU64_15 = (uint64_t *)pU64_12[0xc];
        uVal_13 = pU64_17[0xf];
      }
      if (uVal_13 < uVal_5) {
        func_0x18007bba0(pU64_17 + 0xc,uVal_5);
      }
      else {
        pU64_20 = pU64_17 + 0xc;
        if (0xf < uVal_13) {
          pU64_20 = (uint64_t *)pU64_17[0xc];
        }
        pU64_17[0xe] = uVal_5;
        func_0x1806aa960(pU64_20,pU64_15,uVal_5);
        *(uint8_t *)((int64_t)pU64_20 + uVal_5) = 0;
      }
    }
    pU64_17 = *(uint64_t **)(local_60 + 0x40);
    if (pU64_17 != pU64_12) {
      uVal_5 = pU64_12[6];
      if ((uint64_t)pU64_12[7] < 0x10) {
        pU64_15 = pU64_12 + 4;
        uVal_13 = pU64_17[7];
      }
      else {
        pU64_15 = (uint64_t *)pU64_12[4];
        uVal_13 = pU64_17[7];
      }
      if (uVal_13 < uVal_5) {
        func_0x18007bba0(pU64_17 + 4,uVal_5);
      }
      else {
        pU64_20 = pU64_17 + 4;
        if (0xf < uVal_13) {
          pU64_20 = (uint64_t *)pU64_17[4];
        }
        pU64_17[6] = uVal_5;
        func_0x1806aa960(pU64_20,pU64_15,uVal_5);
        *(uint8_t *)((int64_t)pU64_20 + uVal_5) = 0;
      }
    }
    pU64_17 = *(uint64_t **)(local_60 + 0x40);
    if (pU64_17 != pU64_12) {
      uVal_5 = pU64_12[10];
      if ((uint64_t)pU64_12[0xb] < 0x10) {
        pU64_15 = pU64_12 + 8;
        uVal_13 = pU64_17[0xb];
      }
      else {
        pU64_15 = (uint64_t *)pU64_12[8];
        uVal_13 = pU64_17[0xb];
      }
      if (uVal_13 < uVal_5) {
        func_0x18007bba0(pU64_17 + 8,uVal_5);
      }
      else {
        pU64_20 = pU64_17 + 8;
        if (0xf < uVal_13) {
          pU64_20 = (uint64_t *)pU64_17[8];
        }
        pU64_17[10] = uVal_5;
        func_0x1806aa960(pU64_20,pU64_15,uVal_5);
        *(uint8_t *)((int64_t)pU64_20 + uVal_5) = 0;
      }
    }
    pU64_17 = (uint64_t *)(local_60 + 0x50);
    if (pU64_17 != param_2) {
      uVal_5 = param_2[2];
      if (0xf < (uint64_t)param_2[3]) {
        param_2 = (uint64_t *)*param_2;
      }
      if (*(uint64_t *)(local_60 + 0x68) < uVal_5) {
        func_0x18007bba0(pU64_17,uVal_5);
      }
      else {
        if (0xf < *(uint64_t *)(local_60 + 0x68)) {
          pU64_17 = *(uint64_t **)(local_60 + 0x50);
        }
        *(uint64_t *)(local_60 + 0x60) = uVal_5;
        func_0x1806aa960(pU64_17,param_2,uVal_5);
        *(uint8_t *)((int64_t)pU64_17 + uVal_5) = 0;
      }
    }
    pU64_17 = (uint64_t *)(local_60 + 0x70);
    if (pU64_17 != pU64_12) {
      uVal_5 = pU64_12[2];
      if (0xf < (uint64_t)pU64_12[3]) {
        pU64_12 = (uint64_t *)*pU64_12;
      }
      if (*(uint64_t *)(local_60 + 0x88) < uVal_5) {
        func_0x18007bba0(pU64_17,uVal_5);
      }
      else {
        if (0xf < *(uint64_t *)(local_60 + 0x88)) {
          pU64_17 = *(uint64_t **)(local_60 + 0x70);
        }
        *(uint64_t *)(local_60 + 0x80) = uVal_5;
        func_0x1806aa960(pU64_17,pU64_12,uVal_5);
        *(uint8_t *)((int64_t)pU64_17 + uVal_5) = 0;
      }
    }
    (**(func_ptr_t *)(*(int64_t *)DAT_180840a58[0x39] + 0x20))((int64_t *)DAT_180840a58[0x39],local_60)
    ;
    func_0x1801745e0(local_88);
    lVal_14 = *(int64_t *)(local_60 + 0x40);
    pLong_18 = (int64_t *)(lVal_14 + 0x40);
    if (pLong_18 == (int64_t *)local_88) {
      uVal_5 = CONCAT44(uStack_6c,uStack_70);
      if (0xf < uVal_5) {
        uVal_13 = uVal_5 + 1;
        lVal_14 = (int64_t)local_88;
        if (0xfff < uVal_13) {
          lVal_14 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_14)) goto LAB_180172e90;
          uVal_13 = uVal_5 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_14,uVal_13);
      }
    }
    else {
      uVal_5 = *(uint64_t *)(lVal_14 + 0x58);
      if (0xf < uVal_5) {
        lVal_19 = *pLong_18;
        uVal_13 = uVal_5 + 1;
        lVal_16 = lVal_19;
        if (0xfff < uVal_13) {
          lVal_16 = *(int64_t *)(lVal_19 + -8);
          if (0x1f < (uint64_t)((lVal_19 + -8) - lVal_16)) {
LAB_180172e90:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_13 = uVal_5 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_16,uVal_13);
      }
      *(uint32_t *)(lVal_14 + 0x50) = local_78;
      *(uint32_t *)(lVal_14 + 0x54) = uStack_74;
      *(uint32_t *)(lVal_14 + 0x58) = uStack_70;
      *(uint32_t *)(lVal_14 + 0x5c) = uStack_6c;
      *(uint32_t *)pLong_18 = local_88._0_4_;
      *(uint32_t *)(lVal_14 + 0x44) = local_88._4_4_;
      *(uint32_t *)(lVal_14 + 0x48) = (uint32_t)uStack_80;
      *(uint32_t *)(lVal_14 + 0x4c) = uStack_80._4_4_;
    }
    if (local_58 == (int64_t *)0x0) {
      plStack_90 = (int64_t *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
      UNLOCK();
      plStack_90 = local_58;
    }
    local_98 = local_60;
    local_49 = 1;
    lVal_14 = func_0x18011b530(DAT_180840a58[0x35]);
    uVal_6 = *(uint64_t *)(lVal_14 + 0x50);
    pLong_18 = *(int64_t **)
               (*(int64_t *)
                 (*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70) + 0x318);
    local_88 = (uint8_t  [8])0x18bc2701792c2388;
    local_49 = 1;
    (**(func_ptr_t *)(*pLong_18 + 0xf0))(pLong_18,local_a8,0);
    pLong_18 = *(int64_t **)(local_60 + 0x20);
    fnPtr_7 = *(func_ptr_t *)(*pLong_18 + 8);
    if (plStack_90 == (int64_t *)0x0) {
      uStack_80 = (int64_t *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_90 + 1) = *(int *)(plStack_90 + 1) + 1;
      UNLOCK();
      uStack_80 = plStack_90;
    }
    local_88 = (uint8_t  [8])local_98;
    (*fnPtr_7)(pLong_18,local_a8[0],uVal_6,local_88);
    pLong_18 = plStack_90;
    if (plStack_90 != (int64_t *)0x0) {
      LOCK();
      pLong_1 = plStack_90 + 1;
      *(int *)pLong_1 = *(int *)pLong_1 + -1;
      UNLOCK();
      if (*(int *)pLong_1 == 0) {
        (**(func_ptr_t *)*plStack_90)(plStack_90);
        LOCK();
        pInt_2 = (int *)((int64_t)pLong_18 + 0xc);
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (*pInt_2 == 0) {
          (**(func_ptr_t *)(*pLong_18 + 8))(pLong_18);
        }
      }
    }
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_18 = local_58 + 1;
      *(int *)pLong_18 = *(int *)pLong_18 + -1;
      UNLOCK();
      if (*(int *)pLong_18 == 0) {
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
  return;
}

// Unwind@180172ea0
void Unwind_180172ea0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x7f) == '\x01') {
    func_0x18001deb0(param_2 + 0x30);
  }
  return;
}

// Unwind@180172ee0
void Unwind_180172ee0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x68);
  return;
}

// Unwind@180172f20
void Unwind_180172f20(void)
{
  func_0x180672f60(&DAT_18083f8e0);
  return;
}

// Unwind@180172f60
void Unwind_180172f60(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x30);
  *(uint8_t *)(param_2 + 0x7f) = 0;
  return;
}

// func_0x180172fa0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180172fa0(void)
{
  int64_t lVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5190) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5190) = 1;
    uVal_4 = _UNK_1806b634c;
    uVal_3 = _UNK_1806b6348;
    uVal_2 = _UNK_1806b6344;
    *(uint32_t *)(lVal_1 + 0x5180) = _DAT_1806b6340;
    *(uint32_t *)(lVal_1 + 0x5184) = uVal_2;
    *(uint32_t *)(lVal_1 + 0x5188) = uVal_3;
    *(uint32_t *)(lVal_1 + 0x518c) = uVal_4;
    func_0x180673140(&LAB_1801b61d0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5180;
}

// func_0x180173020
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180173020(uint8_t (*param_1)[16])
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
    *param_1 = auArr_2 ^ _DAT_1806b6350;
  }
  return;
}

// func_0x180173070
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180173070(void)
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
  local_28 = _DAT_1806b9a0b;
  uStack_24 = _UNK_1806b9a0f;
  uStack_20 = _UNK_1806b9a13;
  uStack_1c = _UNK_1806b9a17;
  local_38 = _DAT_1806b99fb;
  uStack_34 = _UNK_1806b99ff;
  uStack_30 = _UNK_1806b9a03;
  uStack_2c = _UNK_1806b9a07;
  local_18 = 0x3926;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x51b4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x51b4) = 1;
    func_0x1800f15f0(lVal_1 + 0x5191,&local_38);
    func_0x180673140(&LAB_1801b6200);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5191;
}

// Unwind@180173120
void Unwind_180173120(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x51b4) = 0;
  return;
}

// func_0x180173150
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180173150(void)
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
  uint32_t uStack_1f;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = UNK_1806b9a4d;
  uStack_27 = _UNK_1806b9a4e;
  uStack_23 = _UNK_1806b9a52;
  uStack_1f = _UNK_1806b9a56;
  uStack_38 = _DAT_1806b9a3d;
  uStack_34 = _UNK_1806b9a41;
  uStack_30 = _UNK_1806b9a45;
  uStack_2c = _UNK_1806b9a49;
  local_48 = _DAT_1806b9a2d;
  uStack_44 = _UNK_1806b9a31;
  uStack_40 = _UNK_1806b9a35;
  uStack_3c = _UNK_1806b9a39;
  local_58 = _DAT_1806b9a1d;
  uStack_54 = _UNK_1806b9a21;
  uStack_50 = _UNK_1806b9a25;
  uStack_4c = _UNK_1806b9a29;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x51f4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x51f4) = 1;
    func_0x1801b4920(lVal_1 + 0x51b5,&local_58);
    func_0x180673140(&LAB_1801b6230);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x51b5;
}

// Unwind@180173210
void Unwind_180173210(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x51f4) = 0;
  return;
}

// func_0x180173240
uint64_t func_0x180173240(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  uVal_1 = *param_2;
  lVal_3 = (*(uint64_t *)(param_1 + 0x30) & uVal_1) * 0x10;
  lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_3);
  if (lVal_2 == *(int64_t *)(param_1 + 8)) {
    return 0;
  }
  if (uVal_1 != *(uint64_t *)(lVal_2 + 0x10)) {
    do {
      if (lVal_2 == *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_3)) {
        return 0;
      }
      lVal_2 = *(int64_t *)(lVal_2 + 8);
    } while (uVal_1 != *(uint64_t *)(lVal_2 + 0x10));
  }
  return CONCAT71((int7)((uint64_t)lVal_2 >> 8),lVal_2 != 0);
}

// func_0x180173290
int64_t func_0x180173290(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  int64_t lVal_4;
  
  uVal_1 = *param_2;
  lVal_4 = (*(uint64_t *)(param_1 + 0x30) & uVal_1) * 0x10;
  lVal_3 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_4);
  if (lVal_3 != *(int64_t *)(param_1 + 8)) {
    if (uVal_1 != *(uint64_t *)(lVal_3 + 0x10)) {
      do {
        if (lVal_3 == *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_4)) goto LAB_1801732d8;
        lVal_3 = *(int64_t *)(lVal_3 + 8);
      } while (uVal_1 != *(uint64_t *)(lVal_3 + 0x10));
    }
    return lVal_3 + 0x40;
  }
LAB_1801732d8:
  func_0x1806744f0("invalid unordered_map<K, T> key");
  fnPtr_2 = (func_ptr_t )swi(3);
  lVal_3 = (*fnPtr_2)();
  return lVal_3;
}

// func_0x1801732f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1801732f0(void)
{
  int64_t lVal_1;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint8_t uStack_28;
  uint32_t uStack_27;
  uint32_t uStack_23;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = UNK_1806b9a6a;
  uStack_27 = _UNK_1806b9a6b;
  uStack_23 = _UNK_1806b9a6f;
  local_38 = _DAT_1806b9a5a;
  uStack_34 = _UNK_1806b9a5e;
  uStack_30 = _UNK_1806b9a62;
  uStack_2c = _UNK_1806b9a66;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5210) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5210) = 1;
    func_0x1800904a0(lVal_1 + 0x51f5,&local_38);
    func_0x180673140(&LAB_1801b69a0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x51f5;
}

// Unwind@180173390
void Unwind_180173390(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5210) = 0;
  return;
}

// func_0x1801733c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1801733c0(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806b9a73;
  uStack_24 = _UNK_1806b9a77;
  uStack_20 = _UNK_1806b9a7b;
  uStack_1c = _UNK_1806b9a7f;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5224) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5224) = 1;
    func_0x18007d150(lVal_1 + 0x5211,&local_28);
    func_0x180673140(&LAB_1801b69d0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5211;
}

// Unwind@180173460
void Unwind_180173460(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5224) = 0;
  return;
}

// func_0x180173490
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180173490(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6364;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6360;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6368;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b636c;
    *param_1 = auArr_1;
    param_1[1][0] = 0;
  }
  return;
}

// func_0x1801734b0
int64_t func_0x1801734b0(int64_t param_1)
{
  uint uVal_1;
  uint uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t *pLong_7;
  
  lVal_3 = *(int64_t *)(param_1 + 0x10);
  uVal_1 = *(uint *)(param_1 + 0x18);
  pLong_7 = (int64_t *)
           (*(int64_t *)(lVal_3 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_3 + 0x50) - *(int64_t *)(lVal_3 + 0x48)) >> 3) - 1U
           & 0xdeb6534f) * 8);
  lVal_4 = *(int64_t *)(lVal_3 + 0x68);
  do {
    if (*pLong_7 == -1) {
      return 0;
    }
    lVal_6 = *pLong_7 * 0x20;
    pLong_7 = (int64_t *)(lVal_4 + lVal_6);
  } while (*(int *)(lVal_4 + 8 + lVal_6) != -0x2149acb1);
  if ((*(int64_t *)(lVal_3 + 0x70) != lVal_4 + lVal_6) &&
     (lVal_3 = *(int64_t *)(lVal_4 + lVal_6 + 0x10), lVal_3 != 0)) {
    uVal_5 = (uint64_t)((uVal_1 & 0x3ffff) >> 0xb);
    if ((uVal_5 < (uint64_t)(*(int64_t *)(lVal_3 + 0x10) - *(int64_t *)(lVal_3 + 8) >> 3)) &&
       ((lVal_4 = *(int64_t *)(*(int64_t *)(lVal_3 + 8) + uVal_5 * 8), lVal_4 != 0 &&
        (uVal_2 = *(uint *)(lVal_4 + (uint64_t)(uVal_1 & 0x7ff) * 4),
        (uVal_1 & 0xfffc0000 ^ uVal_2) < 0x3ffff)))) {
      return (uint64_t)(uVal_2 & 0x7f) * 0xb0 +
             *(int64_t *)(*(int64_t *)(lVal_3 + 0x50) + (uint64_t)((uVal_2 & 0x3ff80) >> 4));
    }
  }
  return 0;
}

// func_0x180173580
int64_t func_0x180173580(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5230) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5230) = 1;
    *(uint8_t *)(lVal_1 + 0x522e) = 1;
    *(uint32_t *)(lVal_1 + 0x5228) = 0x2cc7e85c;
    *(uint16_t *)(lVal_1 + 0x522c) = 0x79ba;
    func_0x180673140(&LAB_1801b69f0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5228;
}

// func_0x180173610
void func_0x180173610(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0x579b9527;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 199;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0x79;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x180173630
uint64_t func_0x180173630(uint64_t param_1,uint64_t *param_2,int64_t **param_3,int64_t **param_4, int64_t **param_5)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t **ptr2_Long_3;
  int64_t **ptr2_Long_4;
  int64_t *pLong_5;
  int64_t *pLong_6;
  int64_t **local_88;
  int64_t *local_80;
  int64_t **local_78;
  int64_t *local_70;
  int64_t **local_68;
  int64_t *local_60;
  uint64_t local_58;
  int64_t ***local_50;
  uint64_t *local_48;
  uint64_t local_40;
  int64_t **local_38;
  int64_t **local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_80 = param_3[2];
  local_88 = param_3;
  if (&DAT_0000000f < param_3[3]) {
    local_88 = (int64_t **)*param_3;
  }
  local_70 = param_4[2];
  local_78 = param_4;
  if (&DAT_0000000f < param_4[3]) {
    local_78 = (int64_t **)*param_4;
  }
  local_60 = param_5[2];
  local_68 = param_5;
  if (&DAT_0000000f < param_5[3]) {
    local_68 = (int64_t **)*param_5;
  }
  local_58 = 0xddd;
  local_50 = &local_88;
  local_48 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_48 = (uint64_t *)*param_2;
  }
  local_40 = param_2[2];
  local_38 = param_4;
  local_30 = param_3;
  func_0x18063ff10(param_1,&local_48,&local_58);
  ptr2_Long_4 = local_30;
  ptr2_Long_3 = local_38;
  pLong_1 = local_30[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *local_30;
    pLong_6 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_5 = pLong_2;
    if ((int64_t *)0xfff < pLong_6) {
      pLong_5 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_5))) goto LAB_1801737d2;
      pLong_6 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_5,pLong_6);
  }
  ptr2_Long_4[2] = (int64_t *)0x0;
  ptr2_Long_4[3] = (int64_t *)&DAT_0000000f;
  *(uint8_t *)ptr2_Long_4 = 0;
  pLong_1 = ptr2_Long_3[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *ptr2_Long_3;
    pLong_6 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_5 = pLong_2;
    if ((int64_t *)0xfff < pLong_6) {
      pLong_5 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_5))) goto LAB_1801737d2;
      pLong_6 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_5,pLong_6);
  }
  ptr2_Long_3[2] = (int64_t *)0x0;
  ptr2_Long_3[3] = (int64_t *)&DAT_0000000f;
  *(uint8_t *)ptr2_Long_3 = 0;
  pLong_1 = param_5[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *param_5;
    pLong_6 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_5 = pLong_2;
    if ((int64_t *)0xfff < pLong_6) {
      pLong_5 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_5))) {
LAB_1801737d2:
        do {
          invalidInstructionException();
        } while( true );
      }
      pLong_6 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_5,pLong_6);
  }
  return param_1;
}

// Unwind@1801737e0
void Unwind_1801737e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x78));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x70));
  func_0x180001e70(*(uint64_t *)(param_2 + 0xd0));
  return;
}

// func_0x180173820
int64_t func_0x180173820(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x525c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x525c) = 1;
    *(uint8_t *)(lVal_1 + 0x5258) = 1;
    *(uint64_t *)(lVal_1 + 0x5250) = 0x83f37848a22ed29c;
    func_0x180673140(&LAB_1801b6a80);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5250;
}

// func_0x1801738a0
void func_0x1801738a0(uint64_t *param_1)
{
  if (*(char *)(param_1 + 1) == '\x01') {
    *param_1 = *param_1 ^ 0x83af0533df55afe7;
    *(uint8_t *)(param_1 + 1) = 0;
  }
  return;
}

// func_0x1801738c0
int64_t func_0x1801738c0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5268) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5268) = 1;
    *(uint32_t *)(lVal_1 + 0x5260) = 0xe4a7b95;
    *(uint16_t *)(lVal_1 + 0x5264) = 0x1e3;
    func_0x180673140(&LAB_1801b6aa0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5260;
}

// func_0x180173940
void func_0x180173940(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 5) == '\x01') {
    *param_1 = *param_1 ^ 0x6f2d0fbb;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xe3;
    *(uint8_t *)((int64_t)param_1 + 5) = 0;
  }
  return;
}

// func_0x180173960
int64_t func_0x180173960(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5274) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5274) = 1;
    *(uint32_t *)(lVal_1 + 0x526c) = 0x8437f95;
    *(uint16_t *)(lVal_1 + 0x5270) = 0x1e3;
    func_0x180673140(&LAB_1801b6ad0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x526c;
}

// func_0x1801739e0
int64_t func_0x1801739e0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5280) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5280) = 1;
    *(uint32_t *)(lVal_1 + 0x5278) = 0x85d6595;
    *(uint16_t *)(lVal_1 + 0x527c) = 0x1e3;
    func_0x180673140(&LAB_1801b6b00);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5278;
}

// func_0x180173a60
int64_t func_0x180173a60(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x528c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x528c) = 1;
    *(uint8_t *)(lVal_1 + 0x528a) = 1;
    *(uint32_t *)(lVal_1 + 0x5284) = 0xa5d6595;
    *(uint16_t *)(lVal_1 + 0x5288) = 0xfb84;
    func_0x180673140(&LAB_1801b6b30);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5284;
}

// func_0x180173af0
void func_0x180173af0(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0x6f2d0fbb;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xe3;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0xfb;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x180173b10
int64_t func_0x180173b10(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5298) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5298) = 1;
    *(uint32_t *)(lVal_1 + 0x5290) = 0x1d496795;
    *(uint16_t *)(lVal_1 + 0x5294) = 0x1e3;
    func_0x180673140(&LAB_1801b6b60);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5290;
}

// func_0x180173b90
int64_t func_0x180173b90(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x52a4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x52a4) = 1;
    *(uint32_t *)(lVal_1 + 0x529c) = 0x17596495;
    *(uint16_t *)(lVal_1 + 0x52a0) = 0x1e3;
    func_0x180673140(&LAB_1801b6b90);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x529c;
}

// func_0x180173c10
int64_t func_0x180173c10(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x52b0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x52b0) = 1;
    *(uint64_t *)(lVal_1 + 0x52a8) = 0x175c06a64d86226;
    func_0x180673140(&LAB_1801b6bc0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x52a8;
}

// func_0x180173c90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180173c90(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 7) == '\x01') {
    *param_1 = (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 5) << 8,*(uint32_t *)param_1) |
               (uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20) ^ SUB168(_DAT_1806b6370,0);
  }
  return;
}

// func_0x180173cd0
void func_0x180173cd0(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,int64_t **param_4, int64_t **param_5,int64_t **param_6)
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
  int64_t **local_90;
  int64_t *local_88;
  int64_t **local_80;
  int64_t *local_78;
  int64_t local_70 [3];
  uint64_t local_58;
  uint64_t local_50;
  uint32_t *local_48;
  uint64_t *local_40;
  uint64_t local_38;
  int64_t **local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_b0 = *param_3;
  uStack_ac = param_3[1];
  uStack_a8 = param_3[2];
  uStack_a4 = param_3[3];
  local_98 = param_4[2];
  local_a0 = param_4;
  if (&DAT_0000000f < param_4[3]) {
    local_a0 = (int64_t **)*param_4;
  }
  local_88 = param_5[2];
  local_90 = param_5;
  if (&DAT_0000000f < param_5[3]) {
    local_90 = (int64_t **)*param_5;
  }
  local_78 = param_6[2];
  local_80 = param_6;
  if (&DAT_0000000f < param_6[3]) {
    local_80 = (int64_t **)*param_6;
  }
  local_50 = 0xdddd;
  local_48 = &local_b0;
  local_40 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_40 = (uint64_t *)*param_2;
  }
  local_38 = param_2[2];
  local_30 = param_4;
  func_0x18063ff10(local_70,&local_40,&local_50);
  func_0x180116b80(param_1,local_70);
  ptr2_Long_3 = local_30;
  if (0xf < local_58) {
    uVal_4 = local_58 + 1;
    lVal_5 = local_70[0];
    if (0xfff < uVal_4) {
      lVal_5 = *(int64_t *)(local_70[0] + -8);
      if (0x1f < (uint64_t)((local_70[0] + -8) - lVal_5)) goto LAB_180173ed1;
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
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_6))) goto LAB_180173ed1;
      pLong_7 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_6,pLong_7);
  }
  ptr2_Long_3[2] = (int64_t *)0x0;
  ptr2_Long_3[3] = (int64_t *)&DAT_0000000f;
  *(uint8_t *)ptr2_Long_3 = 0;
  pLong_1 = param_5[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *param_5;
    pLong_7 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_6 = pLong_2;
    if ((int64_t *)0xfff < pLong_7) {
      pLong_6 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_6))) goto LAB_180173ed1;
      pLong_7 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_6,pLong_7);
  }
  param_5[2] = (int64_t *)0x0;
  param_5[3] = (int64_t *)&DAT_0000000f;
  *(uint8_t *)param_5 = 0;
  pLong_1 = param_6[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *param_6;
    pLong_7 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_6 = pLong_2;
    if ((int64_t *)0xfff < pLong_7) {
      pLong_6 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_6))) {
LAB_180173ed1:
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

// Unwind@180173ee0
void Unwind_180173ee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// Unwind@180173f10
void Unwind_180173f10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xa8));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x100));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x108));
  return;
}

// func_0x180173f50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180173f50(void)
{
  int64_t lVal_1;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint8_t uStack_28;
  uint32_t uStack_27;
  uint32_t uStack_23;
  uint32_t uStack_1f;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = UNK_1806b9a93;
  uStack_27 = _UNK_1806b9a94;
  uStack_23 = _UNK_1806b9a98;
  uStack_1f = _UNK_1806b9a9c;
  local_38 = _DAT_1806b9a83;
  uStack_34 = _UNK_1806b9a87;
  uStack_30 = _UNK_1806b9a8b;
  uStack_2c = _UNK_1806b9a8f;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x52d8) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x52d8) = 1;
    func_0x18007cc40(lVal_1 + 0x52b9,&local_38);
    func_0x180673140(&LAB_1801b6c20);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x52b9;
}

// Unwind@180173ff0
void Unwind_180173ff0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x52d8) = 0;
  return;
}

// func_0x180174020
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180174020(void)
{
  int64_t lVal_1;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = _UNK_1806b9ac0;
  uStack_24 = _UNK_1806b9ac4;
  uStack_20 = _UNK_1806b9ac8;
  uStack_38 = _DAT_1806b9ab0;
  uStack_34 = _UNK_1806b9ab4;
  uStack_30 = _UNK_1806b9ab8;
  local_2c = _DAT_1806b9abc;
  local_48 = _DAT_1806b9aa0;
  uStack_44 = _UNK_1806b9aa4;
  uStack_40 = _UNK_1806b9aa8;
  uStack_3c = _UNK_1806b9aac;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5308) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5308) = 1;
    func_0x1801b1b20(lVal_1 + 0x52d9,&local_48);
    func_0x180673140(&LAB_1801b6c50);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x52d9;
}

// Unwind@1801740d0
void Unwind_1801740d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5308) = 0;
  return;
}

// func_0x180174100
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180174100(void)
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
  undefined7 uStack_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806b9afc;
  uStack_24 = _UNK_1806b9b00;
  uStack_20 = _UNK_1806b9b04;
  local_38 = _DAT_1806b9aec;
  uStack_34 = _UNK_1806b9af0;
  uStack_30 = _UNK_1806b9af4;
  uStack_2c = _UNK_1806b9af8;
  local_48 = _DAT_1806b9adc;
  uStack_44 = _UNK_1806b9ae0;
  uStack_40 = _UNK_1806b9ae4;
  uStack_3c = _UNK_1806b9ae8;
  local_58 = _DAT_1806b9acc;
  uStack_54 = _UNK_1806b9ad0;
  uStack_50 = _UNK_1806b9ad4;
  uStack_4c = _UNK_1806b9ad8;
  uStack_1c = CONCAT13(0x50,(int3)_UNK_1806b9b08);
  uStack_18 = 0xf99bf5e25cdd77;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5354) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5354) = 1;
    func_0x1801b24b0(lVal_1 + 0x5309,&local_58);
    func_0x180673140(&LAB_1801b6c80);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5309;
}

// Unwind@1801741d0
void Unwind_1801741d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5354) = 0;
  return;
}

// func_0x180174200
void func_0x180174200(int64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = param_1[0x17];
  if (0xf < uVal_1) {
    lVal_2 = param_1[0x14];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_180174414;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0xf;
  *(uint8_t *)(param_1 + 0x14) = 0;
  uVal_1 = param_1[0x13];
  if (0xf < uVal_1) {
    lVal_2 = param_1[0x10];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_180174414;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0xf;
  *(uint8_t *)(param_1 + 0x10) = 0;
  uVal_1 = param_1[0xf];
  if (0xf < uVal_1) {
    lVal_2 = param_1[0xc];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_180174414;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0xf;
  *(uint8_t *)(param_1 + 0xc) = 0;
  uVal_1 = param_1[0xb];
  if (0xf < uVal_1) {
    lVal_2 = param_1[8];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_180174414;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(uint8_t *)(param_1 + 8) = 0;
  uVal_1 = param_1[7];
  if (0xf < uVal_1) {
    lVal_2 = param_1[4];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_180174414;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(uint8_t *)(param_1 + 4) = 0;
  uVal_1 = param_1[3];
  if (0xf < uVal_1) {
    lVal_2 = *param_1;
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_180174414:
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

// func_0x180174420
void func_0x180174420(uint8_t (*param_1)[16])
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
        uVal_5 = *(uint64_t *)(lVal_6 + 0x20);
        if (0xf < uVal_5) {
          lVal_2 = *(int64_t *)(lVal_6 + 8);
          uVal_3 = uVal_5 + 1;
          lVal_4 = lVal_2;
          if (0xfff < uVal_3) {
            lVal_4 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_180174503;
            uVal_3 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_3);
        }
        *(uint64_t *)(lVal_6 + 0x18) = 0;
        *(uint64_t *)(lVal_6 + 0x20) = 0xf;
        *(uint8_t *)(lVal_6 + 8) = 0;
        lVal_6 = lVal_6 + 0x38;
      } while (lVal_6 != lVal_1);
      lVal_6 = *(int64_t *)*param_1;
      uVal_5 = *(int64_t *)param_1[1] - lVal_6;
    }
    if (0xfff < uVal_5) {
      if (0x1f < (uint64_t)((lVal_6 + -8) - *(int64_t *)(lVal_6 + -8))) {
LAB_180174503:
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

// func_0x180174510
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180174510(void)
{
  int64_t lVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5370) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5370) = 1;
    uVal_4 = _UNK_1806b638c;
    uVal_3 = _UNK_1806b6388;
    uVal_2 = _UNK_1806b6384;
    *(uint32_t *)(lVal_1 + 0x5360) = _DAT_1806b6380;
    *(uint32_t *)(lVal_1 + 0x5364) = uVal_2;
    *(uint32_t *)(lVal_1 + 0x5368) = uVal_3;
    *(uint32_t *)(lVal_1 + 0x536c) = uVal_4;
    func_0x180673140(&LAB_1801b6cc0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5360;
}

// func_0x180174590
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180174590(uint8_t (*param_1)[16])
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
    *param_1 = auArr_2 ^ _DAT_1806b6390;
  }
  return;
}

// func_0x1801745e0
uint8_t (*func_0x1801745e0(uint8_t (*param_1)[16]))[16]
{
  func_ptr_t fnPtr_1;
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint uVal_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  size_t sz_18;
  int64_t lVal_19;
  uint8_t (*pArr16_20)[16];
  char local_78;
  char local_77;
  char local_76;
  char local_75;
  char local_74;
  char local_73;
  char local_72;
  char local_71;
  uint8_t local_70;
  char local_6f;
  char local_6e;
  char local_6d;
  char local_6c;
  uint8_t local_6b;
  char local_6a;
  char local_69;
  char local_68;
  char local_67;
  uint8_t local_66;
  char local_65;
  char local_64;
  char local_63;
  char local_62;
  uint8_t local_61;
  char local_60;
  char local_5f;
  char local_5e;
  char local_5d;
  char local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  char local_58;
  char local_57;
  char local_56;
  char local_55;
  char local_4a;
  char local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVal_2 = func_0x18068cf88();
  uVal_3 = func_0x18068cf88();
  uVal_4 = func_0x18068cf88();
  uVal_15 = func_0x18068cf88();
  uVal_5 = func_0x18068cf88();
  uVal_16 = func_0x18068cf88();
  uVal_6 = func_0x18068cf88();
  uVal_17 = func_0x18068cf88();
  uVal_7 = func_0x18068cf88();
  uVal_8 = func_0x18068cf88();
  uVal_9 = func_0x18068cf88();
  uVal_10 = func_0x18068cf88();
  uVal_11 = func_0x18068cf88();
  uVal_12 = func_0x18068cf88();
  uVal_13 = func_0x18068cf88();
  uVal_14 = func_0x18068cf88();
  local_55 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_14 & 0xf];
  local_56 = s_0123456789abcdefghijklmnopqrstuv_18083c910[(uVal_14 & 0xff) >> 4];
  local_57 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_13 & 0xf];
  local_58 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_13 >> 4 & 0xf];
  local_59 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_12 & 0xf];
  local_5a = s_0123456789abcdefghijklmnopqrstuv_18083c910[((uint64_t)uVal_12 & 0xff) >> 4];
  local_5b = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_11 & 0xf];
  local_5c = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_11 >> 4 & 0xf];
  local_5d = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_10 & 0xf];
  local_5e = s_0123456789abcdefghijklmnopqrstuv_18083c910[((uint64_t)uVal_10 & 0xff) >> 4];
  local_5f = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_9 & 0xf];
  local_60 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_9 >> 4 & 0xf];
  local_62 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_8 & 0xf];
  local_63 = s_0123456789abcdefghijklmnopqrstuv_18083c910[((uint64_t)uVal_8 & 0xff) >> 4];
  local_64 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_7 & 0xf];
  local_65 = s_0123456789abcdefghijklmnopqrstuv_18083c910[(uint64_t)(uVal_7 >> 4 & 3) + 8];
  local_67 = s_0123456789abcdefghijklmnopqrstuv_18083c910[(uint)uVal_17 & 0xf];
  local_68 = s_0123456789abcdefghijklmnopqrstuv_18083c910[(uVal_17 & 0xff) >> 4];
  local_69 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_6 & 0xf];
  local_6c = s_0123456789abcdefghijklmnopqrstuv_18083c910[(uint)uVal_16 & 0xf];
  local_6d = s_0123456789abcdefghijklmnopqrstuv_18083c910[(uVal_16 & 0xff) >> 4];
  local_6e = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_5 & 0xf];
  local_6f = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_5 >> 4 & 0xf];
  local_71 = s_0123456789abcdefghijklmnopqrstuv_18083c910[(uint)uVal_15 & 0xf];
  local_72 = s_0123456789abcdefghijklmnopqrstuv_18083c910[(uVal_15 & 0xff) >> 4];
  local_73 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_4 & 0xf];
  local_74 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_4 >> 4 & 0xf];
  local_75 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_3 & 0xf];
  local_76 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_3 >> 4 & 0xf];
  local_77 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_2 & 0xf];
  local_78 = s_0123456789abcdefghijklmnopqrstuv_18083c910[uVal_2 >> 4 & 0xf];
  local_6a = s_0123456789abcdefghijklmnopqrstuv_18083c910[4];
  local_61 = 0x2d;
  local_66 = 0x2d;
  local_6b = 0x2d;
  local_70 = 0x2d;
  *param_1 = ZEXT816(0);
  local_4a = local_65;
  local_49 = local_68;
  sz_18 = strlen(&local_78);
  if ((int64_t)sz_18 < 0) {
    func_0x18007ba70();
    fnPtr_1 = (func_ptr_t )swi(3);
    pArr16_20 = (uint8_t (*)[16])(*fnPtr_1)();
    return pArr16_20;
  }
  uVal_15 = 0xf;
  pArr16_20 = param_1;
  if (0xf < sz_18) {
    uVal_16 = sz_18 | 0xf;
    uVal_15 = 0x16;
    if (0x16 < uVal_16) {
      uVal_15 = uVal_16;
    }
    if (uVal_16 < 0xfff) {
      pArr16_20 = (uint8_t (*)[16])func_0x180672de0(uVal_15 + 1);
    }
    else {
      lVal_19 = func_0x180672de0(uVal_15 + 0x28);
      pArr16_20 = (uint8_t (*)[16])(lVal_19 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pArr16_20[-1] + 8) = lVal_19;
    }
    *(uint8_t (**)[16])*param_1 = pArr16_20;
  }
  *(size_t *)param_1[1] = sz_18;
  *(uint64_t *)(param_1[1] + 8) = uVal_15;
  func_0x1806aa960(pArr16_20,&local_78,sz_18);
  (*pArr16_20)[sz_18] = 0;
  uVal_15 = *(uint64_t *)param_1[1];
  pArr16_20 = param_1;
  if (uVal_15 < 0x24) {
    uVal_17 = 0x24 - uVal_15;
    uVal_16 = *(uint64_t *)(param_1[1] + 8);
    if (uVal_16 - uVal_15 < uVal_17) {
      func_0x180089e90(param_1,uVal_17,uVal_17,uVal_17,0);
      return param_1;
    }
    *(uint64_t *)param_1[1] = 0x24;
    if (0xf < uVal_16) {
      pArr16_20 = *(uint8_t (**)[16])*param_1;
    }
    func_0x1806ab010(*pArr16_20 + uVal_15,0);
  }
  else {
    *(uint64_t *)param_1[1] = 0x24;
    if (0xf < *(uint64_t *)(param_1[1] + 8)) {
      pArr16_20 = *(uint8_t (**)[16])*param_1;
    }
  }
  pArr16_20[2][4] = 0;
  return param_1;
}

// Unwind@1801749a0
void Unwind_1801749a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x60));
  return;
}

// func_0x1801749e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801749e0(uint64_t *param_1)
{
  char *fnPtr_1;
  uint64_t *pU64_2;
  byte *pU8_3;
  uint *_Str;
  uint8_t uVal_4;
  func_ptr_t fnPtr_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint64_t *pU64_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t **ptr2_U64_12;
  uint64_t *pU64_13;
  uint64_t ***ptr3_U64_14;
  uint8_t *pU64_15;
  uint8_t *pU64_16;
  uint64_t ***ptr3_U64_17;
  uint8_t *pU64_18;
  uint64_t uVal_19;
  uint32_t uVal_20;
  uint64_t in_stack_fffffffffffffd18;
  uint32_t uVal_23;
  uint64_t uVal_21;
  uint32_t *pU64_22;
  uint64_t in_stack_fffffffffffffd20;
  uint32_t uVal_25;
  uint64_t uVal_24;
  uint uVal_26;
  uint8_t **local_2b8;
  uint64_t *local_2b0;
  uint8_t ***local_280;
  uint8_t **local_278;
  uint64_t *local_270;
  uint8_t ***local_240;
  uint32_t local_238;
  uint32_t uStack_234;
  uint32_t uStack_230;
  uint32_t uStack_22c;
  uint32_t local_228;
  uint32_t uStack_224;
  uint32_t uStack_220;
  uint32_t uStack_21c;
  uint8_t local_218 [56];
  uint64_t local_1e0;
  uint8_t local_1d8 [56];
  uint64_t local_1a0;
  uint8_t local_198 [56];
  uint64_t local_160;
  uint8_t local_158 [56];
  uint64_t local_120;
  uint8_t local_118 [56];
  uint64_t local_e0;
  uint64_t local_d8;
  undefined7 uStack_d0;
  uint8_t uStack_c9;
  uint16_t uStack_c8;
  undefined5 uStack_c6;
  uint64_t *local_c0;
  uint64_t ***local_b8;
  uint32_t uStack_b0;
  uint16_t uStack_ac;
  uint16_t uStack_aa;
  uint32_t uStack_a8;
  uint16_t uStack_a4;
  uint16_t uStack_a2;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint8_t local_98 [16];
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint8_t local_78;
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
  
  uVal_25 = (uint32_t)((uint64_t)in_stack_fffffffffffffd20 >> 0x20);
  uVal_23 = (uint32_t)((uint64_t)in_stack_fffffffffffffd18 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  local_88._4_4_ = _UNK_1806b9b27;
  local_88._0_4_ = _DAT_1806b9b23;
  uStack_80._0_4_ = _UNK_1806b9b2b;
  uStack_80._4_4_ = _UNK_1806b9b2f;
  local_98._8_8_ = _UNK_1806b9b1b;
  local_98._0_8_ = _DAT_1806b9b13;
  local_78 = 0xdd;
  local_c0 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5394) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x5394) = 1;
    func_0x180086ce0(lVal_11 + 0x5371,local_98);
    func_0x180673140(&LAB_1801b6cf0);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x5371);
  func_0x1801bf040(fnPtr_1);
  _local_88 = (uint8_t  [16])0x0;
  local_98 = (uint8_t  [16])0x0;
  sz_9 = strlen(fnPtr_1);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
LAB_1801765a3:
    local_61 = 1;
    func_0x18007ba70();
LAB_1801765b0:
    local_67 = 1;
    func_0x18007ba70();
LAB_1801765bd:
    local_69 = 1;
    func_0x18007ba70();
LAB_1801765ca:
    local_68 = 1;
    func_0x18007ba70();
LAB_1801765d7:
    local_6b = 1;
    func_0x18007ba70();
LAB_1801765e4:
    local_6a = 1;
    func_0x18007ba70();
LAB_1801765f1:
    local_6c = 1;
    func_0x18007ba70();
LAB_1801765fe:
    local_62 = 1;
    func_0x18007ba70();
LAB_18017660b:
    local_63 = 1;
    func_0x18007ba70();
LAB_180176618:
    local_6d = 1;
    func_0x18007ba70();
LAB_180176625:
    local_64 = 1;
    func_0x18007ba70();
LAB_180176632:
    local_6e = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_9 < 0x10) {
      pU64_16 = local_98;
      uVal_19 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_10) {
        uVal_19 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_11;
      }
      local_98._0_8_ = pU64_16;
    }
    local_88 = (uint8_t  [8])sz_9;
    uStack_80 = uVal_19;
    func_0x1806aa960(pU64_16,fnPtr_1,sz_9);
    pU64_16[sz_9] = 0;
    pU64_16 = local_98;
    func_0x1801c2ba0(local_c0,0,0,pU64_16);
    if (0xf < uStack_80) {
      uVal_19 = uStack_80 + 1;
      lVal_11 = local_98._0_8_;
      if (0xfff < uVal_19) {
        lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_18017659c;
        uVal_19 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_19);
    }
    *local_c0 = &PTR_LAB_1806b75b0;
    pU64_13 = local_c0 + 0x10;
    *(uint32_t *)(local_c0 + 0x10) = 5;
    *(uint8_t *)((int64_t)local_c0 + 0x84) = 1;
    uVal_7 = _UNK_1806b63ac;
    uVal_6 = _UNK_1806b63a8;
    uVal_20 = _UNK_1806b63a4;
    *(uint32_t *)(local_c0 + 0x11) = _DAT_1806b63a0;
    *(uint32_t *)((int64_t)local_c0 + 0x8c) = uVal_20;
    *(uint32_t *)(local_c0 + 0x12) = uVal_6;
    *(uint32_t *)((int64_t)local_c0 + 0x94) = uVal_7;
    uVal_7 = _UNK_1806b63bc;
    uVal_6 = _UNK_1806b63b8;
    uVal_20 = _UNK_1806b63b4;
    *(uint32_t *)(local_c0 + 0x13) = _DAT_1806b63b0;
    *(uint32_t *)((int64_t)local_c0 + 0x9c) = uVal_20;
    *(uint32_t *)(local_c0 + 0x14) = uVal_6;
    *(uint32_t *)((int64_t)local_c0 + 0xa4) = uVal_7;
    local_c0[0x15] = DAT_1806b63c0;
    *(uint32_t *)(local_c0 + 0x16) = 0x3f000000;
    local_1e0 = 0;
    if (DAT_18083f7c0 == (uint64_t *)0x0) {
      uVal_20 = 5;
    }
    else {
      local_1e0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_218);
      uVal_20 = *(uint32_t *)pU64_13;
    }
    local_b8 = _DAT_1806b9b34;
    uStack_b0 = (uint32_t)_UNK_1806b9b3c;
    uStack_ac = (uint16_t)((uint64_t)_UNK_1806b9b3c >> 0x20);
    uStack_aa = 0x67c4;
    uStack_a8 = 0xf0c6afe4;
    uStack_a4 = 0xcdce;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x53ac) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x53ac) = 1;
      func_0x18007cab0(lVal_11 + 0x5395,&local_b8);
      func_0x180673140(&LAB_1801b6d20);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x5395);
    func_0x1801bf070(fnPtr_1);
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_1);
    if ((int64_t)sz_9 < 0) goto LAB_1801765a3;
    uVal_19 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_10) {
        uVal_19 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_61 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_61 = 1;
        lVal_11 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_11;
      }
      local_98._0_8_ = pU64_16;
    }
    uStack_80 = uVal_19;
    local_88 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_16,fnPtr_1,sz_9);
    pU64_16[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x53b8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x53b8) = 1;
      *(uint64_t *)(lVal_11 + 0x53b0) = 0x1abbed0fac7a6d5;
      func_0x180673140(&LAB_1801b6d50);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x53b0);
    if (*(char *)(lVal_11 + 0x53b7) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_11 + 0x53b5) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_11 + 0x53b4) << 0x20) ^ SUB168(_DAT_1806b5ce0,0);
    }
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_b8 = (uint64_t ***)0x0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_1801765b0;
    if (sz_9 < 0x10) {
      ptr3_U64_17 = &local_b8;
      uVal_19 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_10) {
        uVal_19 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_67 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_19 + 1);
        local_b8 = ptr3_U64_17;
      }
      else {
        local_67 = 1;
        ptr2_U64_12 = (uint64_t **)func_0x180672de0(uVal_19 + 0x28);
        ptr3_U64_17 = (uint64_t ***)((int64_t)ptr2_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_17[-1] = ptr2_U64_12;
        local_b8 = ptr3_U64_17;
      }
    }
    uStack_a8 = (uint32_t)sz_9;
    uStack_a4 = (uint16_t)(sz_9 >> 0x20);
    uStack_a2 = (uint16_t)(sz_9 >> 0x30);
    uStack_a0 = (uint32_t)uVal_19;
    uStack_9c = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr3_U64_17,pU64_2,sz_9);
    *(uint8_t *)((int64_t)ptr3_U64_17 + sz_9) = 0;
    uVal_21 = CONCAT44(uVal_23,uVal_20);
    uVal_26 = 0;
    ptr3_U64_17 = &local_b8;
    pU64_16 = local_98;
    func_0x1801ccff0(local_c0,ptr3_U64_17,pU64_16,pU64_13,uVal_21,CONCAT44(uVal_25,1),0x20,local_218,0);
    uVal_19 = CONCAT44(uStack_9c,uStack_a0);
    if (0xf < uVal_19) {
      uVal_10 = uVal_19 + 1;
      ptr3_U64_14 = local_b8;
      if (0xfff < uVal_10) {
        ptr3_U64_14 = (uint64_t ***)local_b8[-1];
        if (0x1f < (uint64_t)((int64_t)local_b8 + (-8 - (int64_t)ptr3_U64_14))) goto LAB_18017659c;
        uVal_10 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_14,uVal_10);
    }
    if (0xf < uStack_80) {
      uVal_19 = uStack_80 + 1;
      lVal_11 = local_98._0_8_;
      if (0xfff < uVal_19) {
        lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_18017659c;
        uVal_19 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_19);
    }
    local_1a0 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_1a0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_1d8);
    }
    pU64_18 = (uint8_t *)((int64_t)local_c0 + 0x84);
    uVal_4 = *pU64_18;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x53bc) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x53bc) = 1;
      *(uint16_t *)(lVal_11 + 0x53b9) = 0x1d5;
      func_0x180673140(&LAB_1801b6d80);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_3 = (byte *)(lVal_11 + 0x53b9);
    if (*(char *)(lVal_11 + 0x53ba) == '\x01') {
      *pU8_3 = *pU8_3 ^ 0xd5;
      *(uint8_t *)(lVal_11 + 0x53ba) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_3);
    if ((int64_t)sz_9 < 0) goto LAB_1801765bd;
    uVal_19 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_10) {
        uVal_19 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_69 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_69 = 1;
        lVal_11 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_11;
      }
      local_98._0_8_ = pU64_16;
    }
    uStack_80 = uVal_19;
    local_88 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_16,pU8_3,sz_9);
    pU64_16[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x53d0) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x53d0) = 1;
      *(uint64_t *)(lVal_11 + 0x53c0) = 0xf449bb7b928d9893;
      *(uint32_t *)(lVal_11 + 0x53c8) = 0x839d96bc;
      *(uint16_t *)(lVal_11 + 0x53cc) = 0x11f;
      func_0x180673140(&LAB_1801b6da0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x53c0);
    if (*(char *)(lVal_11 + 0x53cd) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x91219b1ff7f5f1d5;
      *(uint *)(lVal_11 + 0x53c8) = *(uint *)(lVal_11 + 0x53c8) ^ 0xf7f5f1d5;
      *(byte *)(lVal_11 + 0x53cc) = *(byte *)(lVal_11 + 0x53cc) ^ 0x1f;
      *(uint8_t *)(lVal_11 + 0x53cd) = 0;
    }
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_b8 = (uint64_t ***)0x0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_1801765ca;
    uVal_19 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_10) {
        uVal_19 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_68 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_19 + 1);
        local_b8 = ptr3_U64_17;
      }
      else {
        local_68 = 1;
        ptr2_U64_12 = (uint64_t **)func_0x180672de0(uVal_19 + 0x28);
        ptr3_U64_17 = (uint64_t ***)((int64_t)ptr2_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_17[-1] = ptr2_U64_12;
        local_b8 = ptr3_U64_17;
      }
    }
    uStack_a8 = (uint32_t)sz_9;
    uStack_a4 = (uint16_t)(sz_9 >> 0x20);
    uStack_a2 = (uint16_t)(sz_9 >> 0x30);
    uStack_a0 = (uint32_t)uVal_19;
    uStack_9c = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr3_U64_17,pU64_2,sz_9);
    *(uint8_t *)((int64_t)ptr3_U64_17 + sz_9) = 0;
    pU64_16 = local_1d8;
    uVal_21 = CONCAT71((int7)((uint64_t)uVal_21 >> 8),uVal_4);
    ptr3_U64_17 = &local_b8;
    pU64_15 = local_98;
    func_0x1801ccd70(local_c0,ptr3_U64_17,pU64_15,pU64_18,uVal_21,pU64_16,uVal_26 & 0xffffff00);
    uVal_25 = (uint32_t)((uint64_t)pU64_16 >> 0x20);
    uVal_23 = (uint32_t)((uint64_t)uVal_21 >> 0x20);
    uVal_19 = CONCAT44(uStack_9c,uStack_a0);
    if (0xf < uVal_19) {
      uVal_10 = uVal_19 + 1;
      ptr3_U64_14 = local_b8;
      if (0xfff < uVal_10) {
        ptr3_U64_14 = (uint64_t ***)local_b8[-1];
        if (0x1f < (uint64_t)((int64_t)local_b8 + (-8 - (int64_t)ptr3_U64_14))) goto LAB_18017659c;
        uVal_10 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_14,uVal_10);
    }
    if (0xf < uStack_80) {
      uVal_19 = uStack_80 + 1;
      lVal_11 = local_98._0_8_;
      if (0xfff < uVal_19) {
        lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_18017659c;
        uVal_19 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_19);
    }
    local_2b8 = &PTR_LAB_1806bab20;
    local_2b0 = local_c0;
    local_280 = &local_2b8;
    uVal_20 = *(uint32_t *)(local_c0 + 0x11);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x53d4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x53d4) = 1;
      *(uint16_t *)(lVal_11 + 0x53d1) = 0x10d;
      func_0x180673140(&LAB_1801b6dd0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_3 = (byte *)(lVal_11 + 0x53d1);
    if (*(char *)(lVal_11 + 0x53d2) == '\x01') {
      *pU8_3 = *pU8_3 ^ 0xd;
      *(uint8_t *)(lVal_11 + 0x53d2) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_3);
    if ((int64_t)sz_9 < 0) goto LAB_1801765d7;
    uVal_19 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_10) {
        uVal_19 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6b = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_6b = 1;
        lVal_11 = func_0x180672de0(uVal_19 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_98._0_8_ = pU64_15;
    }
    uStack_80 = uVal_19;
    local_88 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_15,pU8_3,sz_9);
    pU64_15[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x53e4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x53e4) = 1;
      *(uint64_t *)(lVal_11 + 0x53d8) = 0xc151a364a39f354;
      *(uint32_t *)(lVal_11 + 0x53e0) = 0x149bd62;
      func_0x180673140(&LAB_1801b6df0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x53d8);
    if (*(char *)(lVal_11 + 0x53e3) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x656173452549d30d;
      *(uint *)(lVal_11 + 0x53e0) =
           (*(uint *)(lVal_11 + 0x53e0) & 0xffff | (uint)*(byte *)(lVal_11 + 0x53e2) << 0x10) ^
           SUB164(_DAT_1806b5cf0,0);
    }
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_b8 = (uint64_t ***)0x0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_1801765e4;
    uVal_19 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_10) {
        uVal_19 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6a = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_19 + 1);
        local_b8 = ptr3_U64_17;
      }
      else {
        local_6a = 1;
        ptr2_U64_12 = (uint64_t **)func_0x180672de0(uVal_19 + 0x28);
        ptr3_U64_17 = (uint64_t ***)((int64_t)ptr2_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_17[-1] = ptr2_U64_12;
        local_b8 = ptr3_U64_17;
      }
    }
    pU64_8 = local_c0;
    pU64_13 = local_c0 + 0x11;
    uStack_a8 = (uint32_t)sz_9;
    uStack_a4 = (uint16_t)(sz_9 >> 0x20);
    uStack_a2 = (uint16_t)(sz_9 >> 0x30);
    uStack_a0 = (uint32_t)uVal_19;
    uStack_9c = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr3_U64_17,pU64_2,sz_9);
    *(uint8_t *)((int64_t)ptr3_U64_17 + sz_9) = 0;
    uVal_21 = CONCAT44(uVal_23,uVal_20);
    uVal_24 = CONCAT44(uVal_25,0xc2c00000);
    ptr3_U64_17 = &local_b8;
    pU64_16 = local_98;
    func_0x1801cd2e0(pU64_8,ptr3_U64_17,pU64_16,pU64_13,uVal_21,uVal_24,0x43aa0000,&local_2b8,0);
    uVal_25 = (uint32_t)((uint64_t)uVal_24 >> 0x20);
    uVal_23 = (uint32_t)((uint64_t)uVal_21 >> 0x20);
    uVal_19 = CONCAT44(uStack_9c,uStack_a0);
    if (0xf < uVal_19) {
      uVal_10 = uVal_19 + 1;
      ptr3_U64_14 = local_b8;
      if (0xfff < uVal_10) {
        ptr3_U64_14 = (uint64_t ***)local_b8[-1];
        if (0x1f < (uint64_t)((int64_t)local_b8 + (-8 - (int64_t)ptr3_U64_14))) goto LAB_18017659c;
        uVal_10 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_14,uVal_10);
    }
    if (0xf < uStack_80) {
      uVal_19 = uStack_80 + 1;
      lVal_11 = local_98._0_8_;
      if (0xfff < uVal_19) {
        lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_18017659c;
        uVal_19 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_19);
    }
    local_278 = &PTR_LAB_1806bab50;
    local_270 = local_c0;
    local_240 = &local_278;
    uVal_20 = *(uint32_t *)((int64_t)local_c0 + 0x8c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x53e8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x53e8) = 1;
      *(uint16_t *)(lVal_11 + 0x53e5) = 0x1c5;
      func_0x180673140(&LAB_1801b6e20);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_3 = (byte *)(lVal_11 + 0x53e5);
    if (*(char *)(lVal_11 + 0x53e6) == '\x01') {
      *pU8_3 = *pU8_3 ^ 0xc5;
      *(uint8_t *)(lVal_11 + 0x53e6) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_3);
    if ((int64_t)sz_9 < 0) goto LAB_1801765f1;
    uVal_19 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_10) {
        uVal_19 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6c = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_6c = 1;
        lVal_11 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_11;
      }
      local_98._0_8_ = pU64_16;
    }
    uStack_80 = uVal_19;
    local_88 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_16,pU8_3,sz_9);
    pU64_16[sz_9] = 0;
    local_d8 = _DAT_1806b9b4a;
    uStack_d0 = (undefined7)_UNK_1806b9b52;
    uStack_c9 = 0xcf;
    uStack_c8 = 0x15aa;
    uStack_c6 = 0xc7cbe4d2b3;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5404) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5404) = 1;
      func_0x18007d3c0(lVal_11 + 0x53e9,&local_d8);
      func_0x180673140(&LAB_1801b6e40);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x53e9);
    func_0x1801bf0d0(fnPtr_1);
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_b8 = (uint64_t ***)0x0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    sz_9 = strlen(fnPtr_1);
    if ((int64_t)sz_9 < 0) goto LAB_1801765fe;
    uVal_19 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_10) {
        uVal_19 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_62 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_19 + 1);
        local_b8 = ptr3_U64_17;
      }
      else {
        local_62 = 1;
        ptr2_U64_12 = (uint64_t **)func_0x180672de0(uVal_19 + 0x28);
        ptr3_U64_17 = (uint64_t ***)((int64_t)ptr2_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_17[-1] = ptr2_U64_12;
        local_b8 = ptr3_U64_17;
      }
    }
    pU64_13 = local_c0;
    lVal_11 = (int64_t)local_c0 + 0x8c;
    uStack_a8 = (uint32_t)sz_9;
    uStack_a4 = (uint16_t)(sz_9 >> 0x20);
    uStack_a2 = (uint16_t)(sz_9 >> 0x30);
    uStack_a0 = (uint32_t)uVal_19;
    uStack_9c = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr3_U64_17,fnPtr_1,sz_9);
    *(uint8_t *)((int64_t)ptr3_U64_17 + sz_9) = 0;
    uVal_26 = 0x42800000;
    ptr3_U64_17 = &local_b8;
    pU64_16 = local_98;
    func_0x1801cd2e0(pU64_13,ptr3_U64_17,pU64_16,lVal_11,CONCAT44(uVal_23,uVal_20),
                  CONCAT44(uVal_25,0xc3000000),0x42800000,&local_278,0);
    uVal_19 = CONCAT44(uStack_9c,uStack_a0);
    if (0xf < uVal_19) {
      uVal_10 = uVal_19 + 1;
      ptr3_U64_14 = local_b8;
      if (0xfff < uVal_10) {
        ptr3_U64_14 = (uint64_t ***)local_b8[-1];
        if (0x1f < (uint64_t)((int64_t)local_b8 + (-8 - (int64_t)ptr3_U64_14))) goto LAB_18017659c;
        uVal_10 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_14,uVal_10);
    }
    if (0xf < uStack_80) {
      uVal_19 = uStack_80 + 1;
      lVal_11 = local_98._0_8_;
      if (0xfff < uVal_19) {
        lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_18017659c;
        uVal_19 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_19);
    }
    local_160 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_160 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_198);
    }
    pU64_13 = local_c0 + 0x12;
    local_238 = *(uint32_t *)pU64_13;
    uStack_234 = *(uint32_t *)((int64_t)local_c0 + 0x94);
    uStack_230 = *(uint32_t *)(local_c0 + 0x13);
    uStack_22c = *(uint32_t *)((int64_t)local_c0 + 0x9c);
    local_b8 = _DAT_1806b9b61;
    uStack_b0 = (uint32_t)_UNK_1806b9b69;
    uStack_ac = (uint16_t)((uint64_t)_UNK_1806b9b69 >> 0x20);
    uStack_aa = (uint16_t)((uint64_t)_UNK_1806b9b69 >> 0x30);
    uStack_a8 = 0x45dada5b;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x541c) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x541c) = 1;
      func_0x18007cfc0(lVal_11 + 0x5405,&local_b8);
      func_0x180673140(&LAB_1801b6e70);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x5405);
    func_0x1801bf150(fnPtr_1);
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_1);
    if ((int64_t)sz_9 < 0) goto LAB_18017660b;
    uVal_19 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_10) {
        uVal_19 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_63 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_63 = 1;
        lVal_11 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_11;
      }
      local_98._0_8_ = pU64_16;
    }
    uStack_80 = uVal_19;
    local_88 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_16,fnPtr_1,sz_9);
    pU64_16[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5428) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5428) = 1;
      *(uint8_t *)(lVal_11 + 0x5426) = 1;
      *(uint32_t *)(lVal_11 + 0x5420) = 0x2ac5de76;
      *(uint16_t *)(lVal_11 + 0x5424) = 0x2b4b;
      func_0x180673140(&LAB_1801b6ea0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_11 + 0x5420);
    if (*(char *)(lVal_11 + 0x5426) == '\x01') {
      *_Str = *_Str ^ 0x45a9b135;
      *(byte *)(lVal_11 + 0x5424) = *(byte *)(lVal_11 + 0x5424) ^ 0x39;
      *(byte *)(lVal_11 + 0x5425) = *(byte *)(lVal_11 + 0x5425) ^ 0x2b;
      *(uint8_t *)(lVal_11 + 0x5426) = 0;
    }
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_b8 = (uint64_t ***)0x0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    sz_9 = strlen((char *)_Str);
    if ((int64_t)sz_9 < 0) goto LAB_180176618;
    uVal_19 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_10) {
        uVal_19 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6d = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_19 + 1);
        local_b8 = ptr3_U64_17;
      }
      else {
        local_6d = 1;
        ptr2_U64_12 = (uint64_t **)func_0x180672de0(uVal_19 + 0x28);
        ptr3_U64_17 = (uint64_t ***)((int64_t)ptr2_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_17[-1] = ptr2_U64_12;
        local_b8 = ptr3_U64_17;
      }
    }
    uStack_a8 = (uint32_t)sz_9;
    uStack_a4 = (uint16_t)(sz_9 >> 0x20);
    uStack_a2 = (uint16_t)(sz_9 >> 0x30);
    uStack_a0 = (uint32_t)uVal_19;
    uStack_9c = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr3_U64_17,_Str,sz_9);
    *(uint8_t *)((int64_t)ptr3_U64_17 + sz_9) = 0;
    uVal_26 = uVal_26 & 0xffffff00;
    ptr3_U64_17 = &local_b8;
    pU64_16 = local_98;
    func_0x1801cd600(local_c0,ptr3_U64_17,pU64_16,pU64_13,&local_238,local_198,uVal_26);
    uVal_19 = CONCAT44(uStack_9c,uStack_a0);
    if (0xf < uVal_19) {
      uVal_10 = uVal_19 + 1;
      ptr3_U64_14 = local_b8;
      if (0xfff < uVal_10) {
        ptr3_U64_14 = (uint64_t ***)local_b8[-1];
        if (0x1f < (uint64_t)((int64_t)local_b8 + (-8 - (int64_t)ptr3_U64_14))) goto LAB_18017659c;
        uVal_10 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_14,uVal_10);
    }
    if (0xf < uStack_80) {
      uVal_19 = uStack_80 + 1;
      lVal_11 = local_98._0_8_;
      if (0xfff < uVal_19) {
        lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_18017659c;
        uVal_19 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_19);
    }
    local_120 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_120 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_158);
    }
    pU64_13 = local_c0 + 0x14;
    local_228 = *(uint32_t *)pU64_13;
    uStack_224 = *(uint32_t *)((int64_t)local_c0 + 0xa4);
    uStack_220 = *(uint32_t *)(local_c0 + 0x15);
    uStack_21c = *(uint32_t *)((int64_t)local_c0 + 0xac);
    uStack_a8 = _UNK_1806b9b85;
    uStack_a4 = (uint16_t)_UNK_1806b9b89;
    uStack_a2 = (uint16_t)((uint)_UNK_1806b9b89 >> 0x10);
    uStack_a0 = _UNK_1806b9b8d;
    local_b8 = _DAT_1806b9b75;
    uStack_b0 = _UNK_1806b9b7d;
    uStack_ac = (uint16_t)_DAT_1806b9b81;
    uStack_aa = (uint16_t)((uint)_DAT_1806b9b81 >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5448) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5448) = 1;
      func_0x18008fba0(lVal_11 + 0x5429,&local_b8);
      func_0x180673140(&LAB_1801b6ed0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x5429);
    func_0x1801bf170(fnPtr_1);
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_1);
    if ((int64_t)sz_9 < 0) goto LAB_180176625;
    uVal_19 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_10) {
        uVal_19 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_64 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_64 = 1;
        lVal_11 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_11;
      }
      local_98._0_8_ = pU64_16;
    }
    uStack_80 = uVal_19;
    local_88 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_16,fnPtr_1,sz_9);
    pU64_16[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5460) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5460) = 1;
      *(uint8_t *)(lVal_11 + 0x545e) = 1;
      *(uint64_t *)(lVal_11 + 0x5450) = 0xc7da634eb549440a;
      *(uint32_t *)(lVal_11 + 0x5458) = 0xb6515e26;
      *(uint16_t *)(lVal_11 + 0x545c) = 0xd55;
      func_0x180673140(&LAB_1801b6f00);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x5450);
    if (*(char *)(lVal_11 + 0x545e) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xe7bf0d27d93d3145;
      *(uint *)(lVal_11 + 0x5458) = *(uint *)(lVal_11 + 0x5458) ^ 0xd93d3145;
      *(byte *)(lVal_11 + 0x545c) = *(byte *)(lVal_11 + 0x545c) ^ 0x27;
      *(byte *)(lVal_11 + 0x545d) = *(byte *)(lVal_11 + 0x545d) ^ 0xd;
      *(uint8_t *)(lVal_11 + 0x545e) = 0;
    }
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_b8 = (uint64_t ***)0x0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_180176632;
    uVal_19 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_10) {
        uVal_19 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6e = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_19 + 1);
        local_b8 = ptr3_U64_17;
      }
      else {
        local_6e = 1;
        ptr2_U64_12 = (uint64_t **)func_0x180672de0(uVal_19 + 0x28);
        ptr3_U64_17 = (uint64_t ***)((int64_t)ptr2_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_17[-1] = ptr2_U64_12;
        local_b8 = ptr3_U64_17;
      }
    }
    uStack_a8 = (uint32_t)sz_9;
    uStack_a4 = (uint16_t)(sz_9 >> 0x20);
    uStack_a2 = (uint16_t)(sz_9 >> 0x30);
    uStack_a0 = (uint32_t)uVal_19;
    uStack_9c = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr3_U64_17,pU64_2,sz_9);
    *(uint8_t *)((int64_t)ptr3_U64_17 + sz_9) = 0;
    pU64_16 = local_158;
    pU64_22 = &local_228;
    ptr3_U64_17 = &local_b8;
    pU64_18 = local_98;
    func_0x1801cd600(local_c0,ptr3_U64_17,pU64_18,pU64_13,pU64_22,pU64_16,uVal_26 & 0xffffff00);
    uVal_25 = (uint32_t)((uint64_t)pU64_16 >> 0x20);
    uVal_23 = (uint32_t)((uint64_t)pU64_22 >> 0x20);
    uVal_19 = CONCAT44(uStack_9c,uStack_a0);
    if (0xf < uVal_19) {
      uVal_10 = uVal_19 + 1;
      ptr3_U64_14 = local_b8;
      if (0xfff < uVal_10) {
        ptr3_U64_14 = (uint64_t ***)local_b8[-1];
        if (0x1f < (uint64_t)((int64_t)local_b8 + (-8 - (int64_t)ptr3_U64_14))) goto LAB_18017659c;
        uVal_10 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_14,uVal_10);
    }
    if (0xf < uStack_80) {
      uVal_19 = uStack_80 + 1;
      lVal_11 = local_98._0_8_;
      if (0xfff < uVal_19) {
        lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_18017659c;
        uVal_19 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_19);
    }
    local_e0 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_e0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_118);
    }
    pU64_13 = local_c0 + 0x16;
    uVal_20 = *(uint32_t *)pU64_13;
    local_88._4_4_ = _UNK_1806b9ba5;
    local_88._0_4_ = _DAT_1806b9ba1;
    uStack_80._0_4_ = _UNK_1806b9ba9;
    uStack_80._4_4_ = _UNK_1806b9bad;
    local_98._8_8_ = _UNK_1806b9b99;
    local_98._0_8_ = _DAT_1806b9b91;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5484) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5484) = 1;
      func_0x18008f8e0(lVal_11 + 0x5461,local_98);
      func_0x180673140(&LAB_1801b6f30);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x5461);
    func_0x1801bf1c0(fnPtr_1);
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_b8 = (uint64_t ***)0x0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    sz_9 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_9) {
      uVal_19 = 0xf;
      if (0xf < sz_9) {
        uVal_10 = sz_9 | 0xf;
        uVal_19 = 0x16;
        if (0x16 < uVal_10) {
          uVal_19 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          local_66 = 1;
          ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_19 + 1);
          local_b8 = ptr3_U64_17;
        }
        else {
          local_66 = 1;
          ptr2_U64_12 = (uint64_t **)func_0x180672de0(uVal_19 + 0x28);
          ptr3_U64_17 = (uint64_t ***)((int64_t)ptr2_U64_12 + 0x27U & 0xffffffffffffffe0);
          ptr3_U64_17[-1] = ptr2_U64_12;
          local_b8 = ptr3_U64_17;
        }
      }
      uStack_a8 = (uint32_t)sz_9;
      uStack_a4 = (uint16_t)(sz_9 >> 0x20);
      uStack_a2 = (uint16_t)(sz_9 >> 0x30);
      uStack_a0 = (uint32_t)uVal_19;
      uStack_9c = (uint32_t)(uVal_19 >> 0x20);
      func_0x1806aa960(ptr3_U64_17,fnPtr_1,sz_9);
      *(uint8_t *)((int64_t)ptr3_U64_17 + sz_9) = 0;
      local_d8 = _DAT_1806b9bb1;
      uStack_d0 = (undefined7)_UNK_1806b9bb9;
      uStack_c9 = (uint8_t)((uint64_t)_UNK_1806b9bb9 >> 0x38);
      uStack_c8 = 0x776e;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x5498) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0x5498) = 1;
        func_0x18007c170(lVal_11 + 0x5485,&local_d8);
        func_0x180673140(&LAB_1801b6f60);
      }
      fnPtr_1 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5485)
      ;
      func_0x1801bf1a0(fnPtr_1);
      local_98 = (uint8_t  [16])0x0;
      sz_9 = strlen(fnPtr_1);
      if (-1 < (int64_t)sz_9) {
        uVal_19 = 0xf;
        if (0xf < sz_9) {
          uVal_10 = sz_9 | 0xf;
          uVal_19 = 0x16;
          if (0x16 < uVal_10) {
            uVal_19 = uVal_10;
          }
          if (uVal_10 < 0xfff) {
            local_65 = 1;
            pU64_18 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
          }
          else {
            local_65 = 1;
            lVal_11 = func_0x180672de0(uVal_19 + 0x28);
            pU64_18 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_18 + -8) = lVal_11;
          }
          local_98._0_8_ = pU64_18;
        }
        local_88 = (uint8_t  [8])sz_9;
        uStack_80 = uVal_19;
        func_0x1806aa960(pU64_18,fnPtr_1,sz_9);
        pU64_18[sz_9] = 0;
        func_0x1801cd2e0(local_c0,local_98,&local_b8,pU64_13,CONCAT44(uVal_23,uVal_20),
                      CONCAT44(uVal_25,0x3dcccccd),0x40000000,local_118,0);
        if (0xf < uStack_80) {
          uVal_19 = uStack_80 + 1;
          lVal_11 = local_98._0_8_;
          if (0xfff < uVal_19) {
            lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
            if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_18017659c;
            uVal_19 = uStack_80 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_19);
        }
        uVal_19 = CONCAT44(uStack_9c,uStack_a0);
        if (0xf < uVal_19) {
          uVal_10 = uVal_19 + 1;
          ptr3_U64_17 = local_b8;
          if (0xfff < uVal_10) {
            ptr3_U64_17 = (uint64_t ***)local_b8[-1];
            if (0x1f < (uint64_t)((int64_t)local_b8 + (-8 - (int64_t)ptr3_U64_17))) {
LAB_18017659c:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_10 = uVal_19 + 0x28;
          }
          thunk_FUN_180695dd0(ptr3_U64_17,uVal_10);
        }
        return local_c0;
      }
      goto LAB_18017664c;
    }
  }
  local_66 = 1;
  func_0x18007ba70();
LAB_18017664c:
  local_65 = 1;
  func_0x18007ba70();
  fnPtr_5 = (func_ptr_t )swi(3);
  pU64_13 = (uint64_t *)(*fnPtr_5)();
  return pU64_13;
}

// Unwind@180176660
void Unwind_180176660(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x128);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xf0));
    *(uint64_t *)(param_2 + 0x128) = 0;
  }
  return;
}

// Unwind@1801766c0
void Unwind_1801766c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x53ac) = 0;
  *(uint8_t *)(param_2 + 0x2a7) = 1;
  return;
}

// Unwind@180176720
void Unwind_180176720(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x168);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x130));
    *(uint64_t *)(param_2 + 0x168) = 0;
  }
  return;
}

// Unwind@180176790
void Unwind_180176790(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1a8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x170));
    *(uint64_t *)(param_2 + 0x1a8) = 0;
  }
  return;
}

// Unwind@180176800
void Unwind_180176800(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x541c) = 0;
  *(uint8_t *)(param_2 + 0x2a5) = 1;
  return;
}

// Unwind@180176860
void Unwind_180176860(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1e8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1b0));
    *(uint64_t *)(param_2 + 0x1e8) = 0;
  }
  return;
}

// Unwind@1801768d0
void Unwind_1801768d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5448) = 0;
  *(uint8_t *)(param_2 + 0x2a4) = 1;
  return;
}

// Unwind@180176930
void Unwind_180176930(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x228);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f0));
    *(uint64_t *)(param_2 + 0x228) = 0;
  }
  return;
}

// Unwind@1801769a0
void Unwind_1801769a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5484) = 0;
  *(uint8_t *)(param_2 + 0x2a2) = 1;
  return;
}

// Unwind@180176a00
void Unwind_180176a00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@180176a50
void Unwind_180176a50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x2a1) = 0;
  return;
}

// Unwind@180176aa0
void Unwind_180176aa0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2a1);
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2a7) = uVal_1;
  return;
}

// Unwind@180176af0
void Unwind_180176af0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2a7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x128), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xf0));
    *(uint64_t *)(param_2 + 0x128) = 0;
  }
  return;
}

// Unwind@180176b60
void Unwind_180176b60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x2a0) = 0;
  return;
}

// Unwind@180176bb0
void Unwind_180176bb0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2a0);
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x29f) = uVal_1;
  return;
}

// Unwind@180176c00
void Unwind_180176c00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x29f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x168), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x130));
    *(uint64_t *)(param_2 + 0x168) = 0;
  }
  return;
}

// Unwind@180176c70
void Unwind_180176c70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x29e) = 0;
  return;
}

// Unwind@180176cc0
void Unwind_180176cc0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x29e);
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x29d) = uVal_1;
  return;
}

// Unwind@180176d10
void Unwind_180176d10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x29d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@180176d80
void Unwind_180176d80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x2a6) = 0;
  return;
}

// Unwind@180176dd0
void Unwind_180176dd0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2a6);
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x29c) = uVal_1;
  return;
}

// Unwind@180176e20
void Unwind_180176e20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x29c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@180176e90
void Unwind_180176e90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x29b) = 0;
  return;
}

// Unwind@180176ee0
void Unwind_180176ee0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x29b);
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2a5) = uVal_1;
  return;
}

// Unwind@180176f30
void Unwind_180176f30(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2a5) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1a8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x170));
    *(uint64_t *)(param_2 + 0x1a8) = 0;
  }
  return;
}

// Unwind@180176fa0
void Unwind_180176fa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x29a) = 0;
  return;
}

// Unwind@180176ff0
void Unwind_180176ff0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x29a);
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2a4) = uVal_1;
  return;
}

// Unwind@180177040
void Unwind_180177040(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2a4) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1e8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1b0));
    *(uint64_t *)(param_2 + 0x1e8) = 0;
  }
  return;
}

// Unwind@1801770b0
void Unwind_1801770b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2a3) = 0;
  return;
}

// Unwind@180177100
void Unwind_180177100(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2a3);
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x2a2) = uVal_1;
  return;
}

// Unwind@180177150
void Unwind_180177150(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2a2) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x228), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f0));
    *(uint64_t *)(param_2 + 0x228) = 0;
  }
  return;
}

// Unwind@1801771c0
void Unwind_1801771c0(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x248));
  return;
}

// Unwind@180177210
void Unwind_180177210(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5394) = 0;
  return;
}

// Unwind@180177270
void Unwind_180177270(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5404) = 0;
  *(uint8_t *)(param_2 + 0x2a6) = 1;
  return;
}

// Unwind@1801772d0
void Unwind_1801772d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5498) = 0;
  *(uint8_t *)(param_2 + 0x2a3) = 1;
  return;
}

// Unwind@1801775f0
void Unwind_1801775f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x54c4) = 0;
  return;
}

// func_0x180177eb0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180177eb0(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint *pU64_1;
  byte *_Str_00;
  func_ptr_t fnPtr_2;
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  size_t sz_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t uVal_13;
  uint64_t *pU64_14;
  uint8_t *pU64_15;
  uint8_t *pU64_16;
  uint64_t uVal_17;
  uint8_t local_f8 [56];
  uint64_t local_c0;
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  uint32_t uStack_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t local_8c;
  uint32_t uStack_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint64_t *local_58;
  uint64_t *local_50;
  uint8_t local_42;
  uint8_t local_41;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  uStack_88 = _UNK_1806b9c08;
  uStack_84 = _UNK_1806b9c0c;
  uStack_80 = _UNK_1806b9c10;
  uStack_98 = _DAT_1806b9bf8;
  uStack_94 = _UNK_1806b9bfc;
  uStack_90 = _UNK_1806b9c00;
  local_8c = _DAT_1806b9c04;
  local_a8._4_4_ = _UNK_1806b9bec;
  local_a8._0_4_ = _DAT_1806b9be8;
  uStack_a0._0_4_ = _UNK_1806b9bf0;
  uStack_a0._4_4_ = _UNK_1806b9bf4;
  local_b8._4_4_ = _UNK_1806b9bdc;
  local_b8._0_4_ = _DAT_1806b9bd8;
  uStack_b0._0_4_ = _UNK_1806b9be0;
  uStack_b0._4_4_ = _UNK_1806b9be4;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5504) == '\0') {
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_12 + 0x5504) = 1;
    func_0x1801b6ff0(lVal_12 + 0x54c5,local_b8);
    func_0x180673140(&LAB_1801b71a0);
  }
  uVal_9 = _UNK_1806b2c9c;
  uVal_8 = _UNK_1806b2c98;
  uVal_7 = _UNK_1806b2c94;
  uVal_6 = _DAT_1806b2c90;
  lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_12 + 0x54c5);
  if (*(char *)(lVal_12 + 0x5501) == '\x01') {
    auArr_3._4_4_ = *(uint *)(lVal_12 + 0x54c9) ^ _UNK_1806b2c94;
    auArr_3._0_4_ = *(uint *)*_Str ^ _DAT_1806b2c90;
    auArr_3._8_4_ = *(uint *)(lVal_12 + 0x54cd) ^ _UNK_1806b2c98;
    auArr_3._12_4_ = *(uint *)(lVal_12 + 0x54d1) ^ _UNK_1806b2c9c;
    *_Str = auArr_3;
    auArr_4._4_4_ = *(uint *)(lVal_12 + 0x54d9) ^ uVal_7;
    auArr_4._0_4_ = *(uint *)(lVal_12 + 0x54d5) ^ uVal_6;
    auArr_4._8_4_ = *(uint *)(lVal_12 + 0x54dd) ^ uVal_8;
    auArr_4._12_4_ = *(uint *)(lVal_12 + 0x54e1) ^ uVal_9;
    *(uint8_t (*)[16])(lVal_12 + 0x54d5) = auArr_4;
    auArr_5._4_4_ = *(uint *)(lVal_12 + 0x54e9) ^ uVal_7;
    auArr_5._0_4_ = *(uint *)(lVal_12 + 0x54e5) ^ uVal_6;
    auArr_5._8_4_ = *(uint *)(lVal_12 + 0x54ed) ^ uVal_8;
    auArr_5._12_4_ = *(uint *)(lVal_12 + 0x54f1) ^ uVal_9;
    *(uint8_t (*)[16])(lVal_12 + 0x54e5) = auArr_5;
    *(uint64_t *)(lVal_12 + 0x54f5) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_12 + 0x54f5) >> 0x20) ^ _UNK_1806b63e4,
                  (uint)*(uint64_t *)(lVal_12 + 0x54f5) ^ _DAT_1806b63e0);
    *(byte *)(lVal_12 + 0x54fd) = *(byte *)(lVal_12 + 0x54fd) ^ 0xcf;
    *(byte *)(lVal_12 + 0x54fe) = *(byte *)(lVal_12 + 0x54fe) ^ 0xd9;
    *(byte *)(lVal_12 + 0x54ff) = *(byte *)(lVal_12 + 0x54ff) ^ 0xf9;
    *(byte *)(lVal_12 + 0x5500) = *(byte *)(lVal_12 + 0x5500) ^ 9;
    *(uint8_t *)(lVal_12 + 0x5501) = 0;
  }
  _local_a8 = ZEXT816(0);
  _local_b8 = ZEXT816(0);
  sz_10 = strlen((char *)_Str);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
LAB_180178701:
    func_0x18007ba70();
LAB_180178707:
    func_0x18007ba70();
  }
  else {
    if (sz_10 < 0x10) {
      uVal_17 = 0xf;
      pU64_15 = local_b8;
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
      local_b8 = (uint8_t  [8])pU64_15;
    }
    local_a8 = (uint8_t  [8])sz_10;
    uStack_a0 = uVal_17;
    func_0x1806aa960(pU64_15,_Str,sz_10);
    pU64_15[sz_10] = 0;
    func_0x1801c2ba0(param_1,0,0,local_b8);
    if (0xf < uStack_a0) {
      uVal_17 = uStack_a0 + 1;
      lVal_12 = (int64_t)local_b8;
      if (0xfff < uVal_17) {
        lVal_12 = *(int64_t *)((int64_t)local_b8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_12)) goto LAB_1801786f9;
        uVal_17 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_17);
    }
    *param_1 = &PTR_LAB_1806b76e0;
    *(uint8_t (*)[16])(param_1 + 0x12) = ZEXT816(0);
    *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
    *(uint32_t *)(param_1 + 0x13) = 0xffffffff;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5510) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5510) = 1;
      *(uint8_t *)(lVal_12 + 0x550e) = 1;
      *(uint32_t *)(lVal_12 + 0x5508) = 0xc79e6b33;
      *(uint16_t *)(lVal_12 + 0x550c) = 0x51d;
      func_0x180673140(&LAB_1801b71e0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0x5508);
    if (*(char *)(lVal_12 + 0x550e) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xa9f11975;
      *(byte *)(lVal_12 + 0x550c) = *(byte *)(lVal_12 + 0x550c) ^ 0x69;
      *(byte *)(lVal_12 + 0x550d) = *(byte *)(lVal_12 + 0x550d) ^ 5;
      *(uint8_t *)(lVal_12 + 0x550e) = 0;
    }
    local_58 = param_1 + 0x10;
    _local_a8 = ZEXT816(0);
    _local_b8 = ZEXT816(0);
    sz_10 = strlen((char *)pU64_1);
    local_50 = param_1;
    if ((int64_t)sz_10 < 0) goto LAB_180178701;
    uVal_17 = 0xf;
    pU64_15 = local_b8;
    if (0xf < sz_10) {
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
      local_b8 = (uint8_t  [8])pU64_15;
    }
    pU64_14 = local_58;
    uStack_a0 = uVal_17;
    local_a8 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_15,pU64_1,sz_10);
    pU64_15[sz_10] = 0;
    uVal_13 = func_0x1801d3650(pU64_14,local_b8,0);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x551c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x551c) = 1;
      *(uint32_t *)(lVal_12 + 0x5514) = 0xc2927837;
      *(uint16_t *)(lVal_12 + 0x5518) = 0x169;
      func_0x180673140(&LAB_1801b7210);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0x5514);
    if (*(char *)(lVal_12 + 0x5519) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xa9f11975;
      *(byte *)(lVal_12 + 0x5518) = *(byte *)(lVal_12 + 0x5518) ^ 0x69;
      *(uint8_t *)(lVal_12 + 0x5519) = 0;
    }
    local_68 = ZEXT816(0);
    local_78 = ZEXT816(0);
    sz_10 = strlen((char *)pU64_1);
    if ((int64_t)sz_10 < 0) goto LAB_180178707;
    if (sz_10 < 0x10) {
      pU64_15 = local_78;
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
      local_78._0_8_ = pU64_15;
    }
    local_68._8_8_ = uVal_17;
    local_68._0_8_ = sz_10;
    func_0x1806aa960(pU64_15,pU64_1,sz_10);
    pU64_15[sz_10] = 0;
    pU64_15 = local_78;
    func_0x1801d3650(uVal_13,pU64_15,1);
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_17 = local_68._8_8_ + 1;
      lVal_12 = local_78._0_8_;
      if (0xfff < uVal_17) {
        lVal_12 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_12)) goto LAB_1801786f9;
        uVal_17 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_17);
    }
    if (0xf < uStack_a0) {
      uVal_17 = uStack_a0 + 1;
      lVal_12 = (int64_t)local_b8;
      if (0xfff < uVal_17) {
        lVal_12 = *(int64_t *)((int64_t)local_b8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_12)) goto LAB_1801786f9;
        uVal_17 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_17);
    }
    local_c0 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_c0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_f8);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5520) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5520) = 1;
      *(uint16_t *)(lVal_12 + 0x551d) = 0x175;
      func_0x180673140(&LAB_1801b7240);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (byte *)(lVal_12 + 0x551d);
    if (*(char *)(lVal_12 + 0x551e) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0x75;
      *(uint8_t *)(lVal_12 + 0x551e) = 0;
    }
    _local_b8 = ZEXT816(0);
    sz_10 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_10) {
      uVal_17 = 0xf;
      pU64_16 = local_b8;
      if (0xf < sz_10) {
        uVal_11 = sz_10 | 0xf;
        uVal_17 = 0x16;
        if (0x16 < uVal_11) {
          uVal_17 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          local_42 = 1;
          pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
        }
        else {
          local_42 = 1;
          lVal_12 = func_0x180672de0(uVal_17 + 0x28);
          pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_16 + -8) = lVal_12;
        }
        local_b8 = (uint8_t  [8])pU64_16;
      }
      uStack_a0 = uVal_17;
      local_a8 = (uint8_t  [8])sz_10;
      func_0x1806aa960(pU64_16,_Str_00,sz_10);
      pU64_16[sz_10] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x552c) == '\0') {
        lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_12 + 0x552c) = 1;
        *(uint32_t *)(lVal_12 + 0x5524) = 0xb0293a38;
        *(uint16_t *)(lVal_12 + 0x5528) = 0x137;
        func_0x180673140(&LAB_1801b7260);
      }
      pU64_14 = local_50;
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_12 + 0x5524);
      if (*(char *)(lVal_12 + 0x5529) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0xd54d5575;
        *(byte *)(lVal_12 + 0x5528) = *(byte *)(lVal_12 + 0x5528) ^ 0x37;
        *(uint8_t *)(lVal_12 + 0x5529) = 0;
      }
      local_78 = ZEXT816(0);
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
            local_41 = 1;
            pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
          }
          else {
            local_41 = 1;
            lVal_12 = func_0x180672de0(uVal_17 + 0x28);
            pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_15 + -8) = lVal_12;
          }
          local_78._0_8_ = pU64_15;
          pU64_14 = local_50;
        }
        local_68._0_8_ = sz_10;
        local_68._8_8_ = uVal_17;
        func_0x1806aa960(pU64_15,pU64_1,sz_10);
        pU64_15[sz_10] = 0;
        func_0x1801d3a80(pU64_14,local_78,local_b8,local_58,0,local_f8,0);
        if (0xf < (uint64_t)local_68._8_8_) {
          uVal_17 = local_68._8_8_ + 1;
          lVal_12 = local_78._0_8_;
          if (0xfff < uVal_17) {
            lVal_12 = *(int64_t *)(local_78._0_8_ + -8);
            if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_12)) goto LAB_1801786f9;
            uVal_17 = local_68._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_17);
        }
        pU64_14 = local_50;
        if (0xf < uStack_a0) {
          uVal_17 = uStack_a0 + 1;
          lVal_12 = (int64_t)local_b8;
          if (0xfff < uVal_17) {
            lVal_12 = *(int64_t *)((int64_t)local_b8 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_12)) {
LAB_1801786f9:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_17 = uStack_a0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_17);
        }
        return pU64_14;
      }
      goto LAB_180178717;
    }
  }
  local_42 = 1;
  func_0x18007ba70();
LAB_180178717:
  local_41 = 1;
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_14 = (uint64_t *)(*fnPtr_2)();
  return pU64_14;
}

// Unwind@180178730
void Unwind_180178730(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@180178780
void Unwind_180178780(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1801787c0
void Unwind_1801787c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180178800
void Unwind_180178800(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180178840
void Unwind_180178840(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  *(uint8_t *)(param_2 + 0xf7) = 0;
  return;
}

// Unwind@180178880
void Unwind_180178880(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0xf7);
  func_0x180001e70(param_2 + 0x80);
  *(uint8_t *)(param_2 + 0xf6) = uVal_1;
  return;
}

// Unwind@1801788c0
void Unwind_1801788c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0xf6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@180178910
void Unwind_180178910(uint64_t param_1,int64_t param_2)
{
  func_0x1800822d0(*(uint64_t *)(param_2 + 0xe0));
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0xe8));
  return;
}

// Unwind@180178950
void Unwind_180178950(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5504) = 0;
  return;
}

// Unwind@180178c40
void Unwind_180178c40(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5554) = 0;
  return;
}

// func_0x180178c80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180178c80(uint64_t *param_1)
{
  uint *pU64_1;
  uint8_t (*pArr16_2)[16];
  uint32_t *pU64_3;
  uint32_t uVal_4;
  func_ptr_t fnPtr_5;
  uint uVal_6;
  uint64_t uVal_7;
  size_t sz_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t *pU64_11;
  uint8_t *pU64_12;
  uint8_t *pU64_13;
  uint64_t uVal_14;
  uint uVal_19;
  uint uVal_20;
  uint8_t auArr_15 [16];
  uint8_t auArr_16 [16];
  uint8_t auArr_17 [16];
  uint8_t auArr_18 [16];
  uint uVal_21;
  uint uVal_22;
  uint uVal_23;
  uint uVal_24;
  uint32_t uVal_25;
  uint8_t local_2d8 [56];
  uint64_t local_2a0;
  uint8_t local_298 [56];
  uint64_t local_260;
  uint8_t local_258 [56];
  uint64_t local_220;
  uint8_t local_218 [56];
  uint64_t local_1e0;
  uint8_t local_1d8 [56];
  uint64_t local_1a0;
  uint8_t local_198 [56];
  uint64_t local_160;
  uint8_t local_158 [56];
  uint64_t local_120;
  uint8_t local_118 [56];
  uint64_t local_e0;
  uint64_t local_d8;
  uint64_t uStack_d0;
  uint8_t local_c8 [16];
  uint8_t local_b8 [24];
  uint64_t *local_a0;
  uint8_t local_98 [16];
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint8_t uStack_7c;
  uint16_t uStack_7b;
  uint8_t uStack_79;
  uint8_t uStack_78;
  uint16_t uStack_77;
  uint8_t uStack_75;
  uint8_t uStack_74;
  uint16_t uStack_73;
  uint8_t uStack_71;
  uint8_t uStack_70;
  uint16_t uStack_6f;
  uint8_t uStack_6d;
  uint8_t uStack_6c;
  uint8_t local_60;
  uint8_t local_5f;
  uint8_t local_5e;
  uint8_t local_5d;
  uint8_t local_5c;
  uint8_t local_5b;
  uint8_t local_5a;
  uint8_t local_59;
  uint8_t local_58;
  uint8_t local_57;
  uint8_t local_56;
  uint8_t local_55;
  uint8_t local_54;
  uint8_t local_53;
  uint8_t local_52;
  uint8_t local_51;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_88 = _DAT_1806b9c37;
  uStack_84 = _UNK_1806b9c3b;
  uStack_80 = _UNK_1806b9c3f;
  uStack_7c = (uint8_t)_UNK_1806b9c43;
  uStack_7b = (uint16_t)((uint)_UNK_1806b9c43 >> 8);
  local_98._8_8_ = _UNK_1806b9c2f;
  local_98._0_8_ = _DAT_1806b9c27;
  uStack_79 = 100;
  uStack_78 = 0xbf;
  uStack_77 = 0x90ad;
  uStack_75 = 0x66;
  uStack_74 = 0xab;
  uStack_73 = 0x51f2;
  local_a0 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5580) == '\0') {
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_10 + 0x5580) = 1;
    func_0x1801b72f0(lVal_10 + 0x5555,local_98);
    func_0x180673140(&LAB_1801b7410);
  }
  uVal_6 = _UNK_1806b2c9c;
  uVal_21 = _UNK_1806b2c98;
  uVal_20 = _UNK_1806b2c94;
  uVal_19 = _DAT_1806b2c90;
  lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_10 + 0x5555);
  if (*(char *)(lVal_10 + 0x557c) == '\x01') {
    uVal_22 = *(uint *)(lVal_10 + 0x5559) ^ _UNK_1806b2c94;
    uVal_23 = *(uint *)(lVal_10 + 0x555d) ^ _UNK_1806b2c98;
    uVal_24 = *(uint *)(lVal_10 + 0x5561) ^ _UNK_1806b2c9c;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2c90;
    *(uint *)(lVal_10 + 0x5559) = uVal_22;
    *(uint *)(lVal_10 + 0x555d) = uVal_23;
    *(uint *)(lVal_10 + 0x5561) = uVal_24;
    *(uint *)(lVal_10 + 0x5565) = *(uint *)(lVal_10 + 0x5565) ^ uVal_19;
    *(uint *)(lVal_10 + 0x5569) = *(uint *)(lVal_10 + 0x5569) ^ uVal_20;
    *(uint *)(lVal_10 + 0x556d) = *(uint *)(lVal_10 + 0x556d) ^ uVal_21;
    *(uint *)(lVal_10 + 0x5571) = *(uint *)(lVal_10 + 0x5571) ^ uVal_6;
    *(uint *)(lVal_10 + 0x5575) = *(uint *)(lVal_10 + 0x5575) ^ 0x9f9d9cf;
    *(byte *)(lVal_10 + 0x5579) = *(byte *)(lVal_10 + 0x5579) ^ 0xc5;
    *(byte *)(lVal_10 + 0x557a) = *(byte *)(lVal_10 + 0x557a) ^ 0x81;
    *(byte *)(lVal_10 + 0x557b) = *(byte *)(lVal_10 + 0x557b) ^ 0x51;
    *(uint8_t *)(lVal_10 + 0x557c) = 0;
  }
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_7b = 0;
  uStack_79 = 0;
  local_98 = (uint8_t  [16])0x0;
  sz_8 = strlen((char *)pU64_1);
  if ((int64_t)sz_8 < 0) {
    func_0x18007ba70();
LAB_18017afed:
    local_51 = 1;
    func_0x18007ba70();
LAB_18017affa:
    local_5d = 1;
    func_0x18007ba70();
LAB_18017b007:
    local_52 = 1;
    func_0x18007ba70();
LAB_18017b014:
    local_5e = 1;
    func_0x18007ba70();
LAB_18017b021:
    local_53 = 1;
    func_0x18007ba70();
LAB_18017b02e:
    local_5f = 1;
    func_0x18007ba70();
LAB_18017b03b:
    local_54 = 1;
    func_0x18007ba70();
LAB_18017b048:
    local_60 = 1;
    func_0x18007ba70();
LAB_18017b055:
    local_56 = 1;
    func_0x18007ba70();
LAB_18017b062:
    local_55 = 1;
    func_0x18007ba70();
LAB_18017b06f:
    local_58 = 1;
    func_0x18007ba70();
LAB_18017b07c:
    local_57 = 1;
    func_0x18007ba70();
LAB_18017b089:
    local_5a = 1;
    func_0x18007ba70();
LAB_18017b096:
    local_59 = 1;
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
    uStack_7c = (uint8_t)(uVal_14 >> 0x20);
    uStack_7b = (uint16_t)(uVal_14 >> 0x28);
    uStack_79 = (uint8_t)(uVal_14 >> 0x38);
    func_0x1806aa960(pU64_13,pU64_1,sz_8);
    pU64_13[sz_8] = 0;
    pU64_13 = local_98;
    func_0x1801c2ba0(local_a0,0,4,pU64_13);
    uVal_14 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
    if (0xf < uVal_14) {
      uVal_9 = uVal_14 + 1;
      lVal_10 = local_98._0_8_;
      if (0xfff < uVal_9) {
        lVal_10 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_9 = uVal_14 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_9);
    }
    *local_a0 = &PTR_LAB_1806b7810;
    pU64_11 = local_a0 + 0x10;
    *(uint8_t (*)[16])(local_a0 + 0x10) = (uint8_t  [16])0x0;
    uVal_7 = _UNK_1806b2888;
    local_a0[0x12] = _DAT_1806b2880;
    local_a0[0x13] = uVal_7;
    local_2a0 = 0;
    if (DAT_18083f7c0 == (uint64_t *)0x0) {
      uVal_25 = 0;
    }
    else {
      local_2a0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_2d8);
      uVal_25 = *(uint32_t *)pU64_11;
    }
    uStack_78 = (uint8_t)_UNK_1806b9c6e;
    uStack_77 = (uint16_t)((uint3)_UNK_1806b9c6e >> 8);
    uStack_75 = (uint8_t)_UNK_1806b9c71;
    uStack_74 = (uint8_t)((uint)_UNK_1806b9c71 >> 8);
    uStack_73 = (uint16_t)((uint)_UNK_1806b9c71 >> 0x10);
    uStack_71 = (uint8_t)_UNK_1806b9c75;
    uStack_70 = (uint8_t)((uint)_UNK_1806b9c75 >> 8);
    uStack_6f = (uint16_t)((uint)_UNK_1806b9c75 >> 0x10);
    local_88 = _DAT_1806b9c5e;
    uStack_84 = _UNK_1806b9c62;
    uStack_80 = _UNK_1806b9c66;
    uStack_7c = (uint8_t)_UNK_1806b9c6a;
    uStack_7b = (uint16_t)((uint)_UNK_1806b9c6a >> 8);
    uStack_79 = (uint8_t)((uint)_UNK_1806b9c6a >> 0x18);
    local_98._8_8_ = _UNK_1806b9c56;
    local_98._0_8_ = _DAT_1806b9c4e;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x55b0) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x55b0) = 1;
      func_0x1801b3830(lVal_10 + 0x5581,local_98);
      func_0x180673140(&LAB_1801b7440);
    }
    uVal_6 = _UNK_1806b4e8c;
    uVal_21 = _UNK_1806b4e88;
    uVal_20 = _UNK_1806b4e84;
    uVal_19 = _DAT_1806b4e80;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_10 + 0x5581);
    if (*(char *)(lVal_10 + 0x55ac) == '\x01') {
      uVal_22 = *(uint *)(lVal_10 + 0x5585) ^ _UNK_1806b4e84;
      uVal_23 = *(uint *)(lVal_10 + 0x5589) ^ _UNK_1806b4e88;
      uVal_24 = *(uint *)(lVal_10 + 0x558d) ^ _UNK_1806b4e8c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b4e80;
      *(uint *)(lVal_10 + 0x5585) = uVal_22;
      *(uint *)(lVal_10 + 0x5589) = uVal_23;
      *(uint *)(lVal_10 + 0x558d) = uVal_24;
      *(uint *)(lVal_10 + 0x5591) = *(uint *)(lVal_10 + 0x5591) ^ uVal_19;
      *(uint *)(lVal_10 + 0x5595) = *(uint *)(lVal_10 + 0x5595) ^ uVal_20;
      *(uint *)(lVal_10 + 0x5599) = *(uint *)(lVal_10 + 0x5599) ^ uVal_21;
      *(uint *)(lVal_10 + 0x559d) = *(uint *)(lVal_10 + 0x559d) ^ uVal_6;
      *(uint64_t *)(lVal_10 + 0x55a1) = *(uint64_t *)(lVal_10 + 0x55a1) ^ SUB168(_DAT_1806b63f0,0);
      *(byte *)(lVal_10 + 0x55a9) = *(byte *)(lVal_10 + 0x55a9) ^ 0x75;
      *(byte *)(lVal_10 + 0x55aa) = *(byte *)(lVal_10 + 0x55aa) ^ 0x19;
      *(byte *)(lVal_10 + 0x55ab) = *(byte *)(lVal_10 + 0x55ab) ^ 0xf1;
      *(uint8_t *)(lVal_10 + 0x55ac) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_18017afed;
    if (sz_8 < 0x10) {
      pU64_12 = local_c8;
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
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_51 = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_12 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_10;
      }
      local_c8._0_8_ = pU64_12;
    }
    local_b8._8_8_ = uVal_14;
    local_b8._0_8_ = sz_8;
    func_0x1806aa960(pU64_12,pU64_1,sz_8);
    pU64_12[sz_8] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x55d0) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x55d0) = 1;
      uVal_7 = _UNK_1806b6408;
      *(uint64_t *)(lVal_10 + 0x55c0) = _DAT_1806b6400;
      *(uint64_t *)(lVal_10 + 0x55c8) = uVal_7;
      func_0x180673140(&LAB_1801b7470);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_2 = (uint8_t (*)[16])(lVal_10 + 0x55c0);
    if (*(char *)(lVal_10 + 0x55cf) == '\x01') {
      uVal_4 = *(uint32_t *)(lVal_10 + 0x55c8);
      auArr_15 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_4 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_4 >> 0x10),uVal_4)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_10 + 0x55cd) >> 8)),
                                                 (char)((uint)uVal_4 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_10 + 0x55cd),(char)uVal_4)
                                       )),_DAT_1806ae110);
      auArr_15._8_8_ =
           auArr_15._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_10 + 0x55cc) << 0x20;
      auArr_15 = pblendw(auArr_15,*pArr16_2,0xf);
      *pArr16_2 = auArr_15 ^ _DAT_1806b5220;
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    local_98 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pArr16_2);
    if ((int64_t)sz_8 < 0) goto LAB_18017affa;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_5d = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_5d = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_10;
      }
      local_98._0_8_ = pU64_13;
    }
    local_88 = (uint32_t)sz_8;
    uStack_84 = (uint32_t)(sz_8 >> 0x20);
    uStack_80 = (uint32_t)uVal_14;
    uStack_7c = (uint8_t)(uVal_14 >> 0x20);
    uStack_7b = (uint16_t)(uVal_14 >> 0x28);
    uStack_79 = (uint8_t)(uVal_14 >> 0x38);
    func_0x1806aa960(pU64_13,pArr16_2,sz_8);
    pU64_13[sz_8] = 0;
    pU64_13 = local_98;
    pU64_12 = local_c8;
    func_0x1801cd2e0(local_a0,pU64_13,pU64_12,pU64_11,uVal_25,0,0x3f800000,local_2d8,0);
    uVal_14 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
    if (0xf < uVal_14) {
      uVal_9 = uVal_14 + 1;
      lVal_10 = local_98._0_8_;
      if (0xfff < uVal_9) {
        lVal_10 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_9 = uVal_14 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_9);
    }
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_14 = local_b8._8_8_ + 1;
      lVal_10 = local_c8._0_8_;
      if (0xfff < uVal_14) {
        lVal_10 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_14 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_14);
    }
    local_260 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_260 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_298);
    }
    pU64_3 = (uint32_t *)((int64_t)local_a0 + 0x84);
    uVal_25 = *pU64_3;
    uStack_78 = (uint8_t)_UNK_1806b9c99;
    uStack_77 = (uint16_t)((uint3)_UNK_1806b9c99 >> 8);
    uStack_75 = (uint8_t)_UNK_1806b9c9c;
    uStack_74 = (uint8_t)((uint)_UNK_1806b9c9c >> 8);
    uStack_73 = (uint16_t)((uint)_UNK_1806b9c9c >> 0x10);
    uStack_71 = (uint8_t)_UNK_1806b9ca0;
    uStack_70 = (uint8_t)((uint)_UNK_1806b9ca0 >> 8);
    uStack_6f = (uint16_t)((uint)_UNK_1806b9ca0 >> 0x10);
    local_88 = _DAT_1806b9c89;
    uStack_84 = _UNK_1806b9c8d;
    uStack_80 = _UNK_1806b9c91;
    uStack_7c = (uint8_t)_UNK_1806b9c95;
    uStack_7b = (uint16_t)((uint)_UNK_1806b9c95 >> 8);
    uStack_79 = (uint8_t)((uint)_UNK_1806b9c95 >> 0x18);
    local_98._8_8_ = _UNK_1806b9c81;
    local_98._0_8_ = _DAT_1806b9c79;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5600) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5600) = 1;
      func_0x1801b3830(lVal_10 + 0x55d1,local_98);
      func_0x180673140(&LAB_1801b74a0);
    }
    uVal_6 = _UNK_1806b2d6c;
    uVal_21 = _UNK_1806b2d68;
    uVal_20 = _UNK_1806b2d64;
    uVal_19 = _DAT_1806b2d60;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_10 + 0x55d1);
    if (*(char *)(lVal_10 + 0x55fc) == '\x01') {
      uVal_22 = *(uint *)(lVal_10 + 0x55d5) ^ _UNK_1806b2d64;
      uVal_23 = *(uint *)(lVal_10 + 0x55d9) ^ _UNK_1806b2d68;
      uVal_24 = *(uint *)(lVal_10 + 0x55dd) ^ _UNK_1806b2d6c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d60;
      *(uint *)(lVal_10 + 0x55d5) = uVal_22;
      *(uint *)(lVal_10 + 0x55d9) = uVal_23;
      *(uint *)(lVal_10 + 0x55dd) = uVal_24;
      *(uint *)(lVal_10 + 0x55e1) = *(uint *)(lVal_10 + 0x55e1) ^ uVal_19;
      *(uint *)(lVal_10 + 0x55e5) = *(uint *)(lVal_10 + 0x55e5) ^ uVal_20;
      *(uint *)(lVal_10 + 0x55e9) = *(uint *)(lVal_10 + 0x55e9) ^ uVal_21;
      *(uint *)(lVal_10 + 0x55ed) = *(uint *)(lVal_10 + 0x55ed) ^ uVal_6;
      *(uint64_t *)(lVal_10 + 0x55f1) = *(uint64_t *)(lVal_10 + 0x55f1) ^ SUB168(_DAT_1806b6410,0);
      *(byte *)(lVal_10 + 0x55f9) = *(byte *)(lVal_10 + 0x55f9) ^ 0x75;
      *(byte *)(lVal_10 + 0x55fa) = *(byte *)(lVal_10 + 0x55fa) ^ 0x55;
      *(byte *)(lVal_10 + 0x55fb) = *(byte *)(lVal_10 + 0x55fb) ^ 0x4d;
      *(uint8_t *)(lVal_10 + 0x55fc) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_18017b007;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_52 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_52 = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_12 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_10;
      }
      local_c8._0_8_ = pU64_12;
    }
    local_b8._8_8_ = uVal_14;
    local_b8._0_8_ = sz_8;
    func_0x1806aa960(pU64_12,pU64_1,sz_8);
    pU64_12[sz_8] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5620) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5620) = 1;
      uVal_7 = _UNK_1806b6428;
      *(uint64_t *)(lVal_10 + 0x5610) = _DAT_1806b6420;
      *(uint64_t *)(lVal_10 + 0x5618) = uVal_7;
      func_0x180673140(&LAB_1801b74d0);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_2 = (uint8_t (*)[16])(lVal_10 + 0x5610);
    if (*(char *)(lVal_10 + 0x561f) == '\x01') {
      uVal_4 = *(uint32_t *)(lVal_10 + 0x5618);
      auArr_15 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_4 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_4 >> 0x10),uVal_4)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_10 + 0x561d) >> 8)),
                                                 (char)((uint)uVal_4 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_10 + 0x561d),(char)uVal_4)
                                       )),_DAT_1806ae110);
      auArr_16._0_8_ = auArr_15._0_8_;
      auArr_16._8_8_ =
           auArr_15._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_10 + 0x561c) << 0x20;
      auArr_15 = pblendw(auArr_16,*pArr16_2,0xf);
      *pArr16_2 = auArr_15 ^ _DAT_1806b6430;
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    local_98 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pArr16_2);
    if ((int64_t)sz_8 < 0) goto LAB_18017b014;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_5e = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_5e = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_10;
      }
      local_98._0_8_ = pU64_13;
    }
    local_88 = (uint32_t)sz_8;
    uStack_84 = (uint32_t)(sz_8 >> 0x20);
    uStack_80 = (uint32_t)uVal_14;
    uStack_7c = (uint8_t)(uVal_14 >> 0x20);
    uStack_7b = (uint16_t)(uVal_14 >> 0x28);
    uStack_79 = (uint8_t)(uVal_14 >> 0x38);
    func_0x1806aa960(pU64_13,pArr16_2,sz_8);
    pU64_13[sz_8] = 0;
    pU64_13 = local_98;
    pU64_12 = local_c8;
    func_0x1801cd2e0(local_a0,pU64_13,pU64_12,pU64_3,uVal_25,0,0x3f800000,local_298,0);
    uVal_14 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
    if (0xf < uVal_14) {
      uVal_9 = uVal_14 + 1;
      lVal_10 = local_98._0_8_;
      if (0xfff < uVal_9) {
        lVal_10 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_9 = uVal_14 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_9);
    }
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_14 = local_b8._8_8_ + 1;
      lVal_10 = local_c8._0_8_;
      if (0xfff < uVal_14) {
        lVal_10 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_14 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_14);
    }
    local_220 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_220 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_258);
    }
    pU64_11 = local_a0 + 0x11;
    uVal_25 = *(uint32_t *)pU64_11;
    uStack_78 = (uint8_t)_UNK_1806b9cc4;
    uStack_77 = (uint16_t)((uint)_UNK_1806b9cc4 >> 8);
    uStack_75 = (uint8_t)((uint)_UNK_1806b9cc4 >> 0x18);
    uStack_74 = (uint8_t)_UNK_1806b9cc8;
    uStack_73 = (uint16_t)((uint)_UNK_1806b9cc8 >> 8);
    uStack_71 = (uint8_t)((uint)_UNK_1806b9cc8 >> 0x18);
    uStack_70 = (uint8_t)_UNK_1806b9ccc;
    uStack_6f = (uint16_t)((uint)_UNK_1806b9ccc >> 8);
    uStack_6d = (uint8_t)((uint)_UNK_1806b9ccc >> 0x18);
    local_88 = _DAT_1806b9cb4;
    uStack_84 = _UNK_1806b9cb8;
    uStack_80 = _UNK_1806b9cbc;
    uStack_7c = (uint8_t)_DAT_1806b9cc0;
    uStack_7b = (uint16_t)((uint)_DAT_1806b9cc0 >> 8);
    uStack_79 = (uint8_t)((uint)_DAT_1806b9cc0 >> 0x18);
    local_98._8_8_ = _UNK_1806b9cac;
    local_98._0_8_ = _DAT_1806b9ca4;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5650) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5650) = 1;
      func_0x1801b1b20(lVal_10 + 0x5621,local_98);
      func_0x180673140(&LAB_1801b7500);
    }
    uVal_6 = _UNK_1806b2cac;
    uVal_21 = _UNK_1806b2ca8;
    uVal_20 = _UNK_1806b2ca4;
    uVal_19 = _DAT_1806b2ca0;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_10 + 0x5621);
    if (*(char *)(lVal_10 + 0x564d) == '\x01') {
      uVal_22 = *(uint *)(lVal_10 + 0x5625) ^ _UNK_1806b2ca4;
      uVal_23 = *(uint *)(lVal_10 + 0x5629) ^ _UNK_1806b2ca8;
      uVal_24 = *(uint *)(lVal_10 + 0x562d) ^ _UNK_1806b2cac;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2ca0;
      *(uint *)(lVal_10 + 0x5625) = uVal_22;
      *(uint *)(lVal_10 + 0x5629) = uVal_23;
      *(uint *)(lVal_10 + 0x562d) = uVal_24;
      *(uint *)(lVal_10 + 0x5631) = *(uint *)(lVal_10 + 0x5631) ^ uVal_19;
      *(uint *)(lVal_10 + 0x5635) = *(uint *)(lVal_10 + 0x5635) ^ uVal_20;
      *(uint *)(lVal_10 + 0x5639) = *(uint *)(lVal_10 + 0x5639) ^ uVal_21;
      *(uint *)(lVal_10 + 0x563d) = *(uint *)(lVal_10 + 0x563d) ^ uVal_6;
      *(uint64_t *)(lVal_10 + 0x5641) = *(uint64_t *)(lVal_10 + 0x5641) ^ SUB168(_DAT_1806b5c10,0);
      *(byte *)(lVal_10 + 0x5649) = *(byte *)(lVal_10 + 0x5649) ^ 0x73;
      *(byte *)(lVal_10 + 0x564a) = *(byte *)(lVal_10 + 0x564a) ^ 0x45;
      *(byte *)(lVal_10 + 0x564b) = *(byte *)(lVal_10 + 0x564b) ^ 0x7d;
      *(byte *)(lVal_10 + 0x564c) = *(byte *)(lVal_10 + 0x564c) ^ 199;
      *(uint8_t *)(lVal_10 + 0x564d) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_18017b021;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_53 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_53 = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_12 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_10;
      }
      local_c8._0_8_ = pU64_12;
    }
    local_b8._8_8_ = uVal_14;
    local_b8._0_8_ = sz_8;
    func_0x1806aa960(pU64_12,pU64_1,sz_8);
    pU64_12[sz_8] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5670) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5670) = 1;
      uVal_7 = _UNK_1806b6448;
      *(uint64_t *)(lVal_10 + 0x5660) = _DAT_1806b6440;
      *(uint64_t *)(lVal_10 + 0x5668) = uVal_7;
      func_0x180673140(&LAB_1801b7530);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_2 = (uint8_t (*)[16])(lVal_10 + 0x5660);
    if (*(char *)(lVal_10 + 0x566f) == '\x01') {
      uVal_4 = *(uint32_t *)(lVal_10 + 0x5668);
      auArr_15 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_4 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_4 >> 0x10),uVal_4)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_10 + 0x566d) >> 8)),
                                                 (char)((uint)uVal_4 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_10 + 0x566d),(char)uVal_4)
                                       )),_DAT_1806ae110);
      auArr_17._0_8_ = auArr_15._0_8_;
      auArr_17._8_8_ =
           auArr_15._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_10 + 0x566c) << 0x20;
      auArr_15 = pblendw(auArr_17,*pArr16_2,0xf);
      *pArr16_2 = auArr_15 ^ _DAT_1806b6450;
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    local_98 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pArr16_2);
    if ((int64_t)sz_8 < 0) goto LAB_18017b02e;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_5f = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_5f = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_10;
      }
      local_98._0_8_ = pU64_13;
    }
    local_88 = (uint32_t)sz_8;
    uStack_84 = (uint32_t)(sz_8 >> 0x20);
    uStack_80 = (uint32_t)uVal_14;
    uStack_7c = (uint8_t)(uVal_14 >> 0x20);
    uStack_7b = (uint16_t)(uVal_14 >> 0x28);
    uStack_79 = (uint8_t)(uVal_14 >> 0x38);
    func_0x1806aa960(pU64_13,pArr16_2,sz_8);
    pU64_13[sz_8] = 0;
    pU64_13 = local_98;
    pU64_12 = local_c8;
    func_0x1801cd2e0(local_a0,pU64_13,pU64_12,pU64_11,uVal_25,0,0x3f800000,local_258,0);
    uVal_14 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
    if (0xf < uVal_14) {
      uVal_9 = uVal_14 + 1;
      lVal_10 = local_98._0_8_;
      if (0xfff < uVal_9) {
        lVal_10 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_9 = uVal_14 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_9);
    }
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_14 = local_b8._8_8_ + 1;
      lVal_10 = local_c8._0_8_;
      if (0xfff < uVal_14) {
        lVal_10 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_14 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_14);
    }
    local_1e0 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_1e0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_218);
    }
    pU64_3 = (uint32_t *)((int64_t)local_a0 + 0x8c);
    uVal_25 = *pU64_3;
    uStack_78 = (uint8_t)_UNK_1806b9cf0;
    uStack_77 = (uint16_t)((uint)_UNK_1806b9cf0 >> 8);
    uStack_75 = (uint8_t)((uint)_UNK_1806b9cf0 >> 0x18);
    uStack_74 = (uint8_t)_UNK_1806b9cf4;
    uStack_73 = (uint16_t)((uint)_UNK_1806b9cf4 >> 8);
    uStack_71 = (uint8_t)((uint)_UNK_1806b9cf4 >> 0x18);
    uStack_70 = (uint8_t)_UNK_1806b9cf8;
    uStack_6f = (uint16_t)((uint)_UNK_1806b9cf8 >> 8);
    uStack_6d = (uint8_t)((uint)_UNK_1806b9cf8 >> 0x18);
    local_88 = _DAT_1806b9ce0;
    uStack_84 = _UNK_1806b9ce4;
    uStack_80 = _UNK_1806b9ce8;
    uStack_7c = (uint8_t)_DAT_1806b9cec;
    uStack_7b = (uint16_t)((uint)_DAT_1806b9cec >> 8);
    uStack_79 = (uint8_t)((uint)_DAT_1806b9cec >> 0x18);
    local_98._8_8_ = _UNK_1806b9cd8;
    local_98._0_8_ = _DAT_1806b9cd0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x56a0) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x56a0) = 1;
      func_0x1801b1b20(lVal_10 + 0x5671,local_98);
      func_0x180673140(&LAB_1801b7560);
    }
    uVal_6 = _UNK_1806b5b0c;
    uVal_21 = _UNK_1806b5b08;
    uVal_20 = _UNK_1806b5b04;
    uVal_19 = _DAT_1806b5b00;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_10 + 0x5671);
    if (*(char *)(lVal_10 + 0x569d) == '\x01') {
      uVal_22 = *(uint *)(lVal_10 + 0x5675) ^ _UNK_1806b5b04;
      uVal_23 = *(uint *)(lVal_10 + 0x5679) ^ _UNK_1806b5b08;
      uVal_24 = *(uint *)(lVal_10 + 0x567d) ^ _UNK_1806b5b0c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b5b00;
      *(uint *)(lVal_10 + 0x5675) = uVal_22;
      *(uint *)(lVal_10 + 0x5679) = uVal_23;
      *(uint *)(lVal_10 + 0x567d) = uVal_24;
      *(uint *)(lVal_10 + 0x5681) = *(uint *)(lVal_10 + 0x5681) ^ uVal_19;
      *(uint *)(lVal_10 + 0x5685) = *(uint *)(lVal_10 + 0x5685) ^ uVal_20;
      *(uint *)(lVal_10 + 0x5689) = *(uint *)(lVal_10 + 0x5689) ^ uVal_21;
      *(uint *)(lVal_10 + 0x568d) = *(uint *)(lVal_10 + 0x568d) ^ uVal_6;
      *(uint64_t *)(lVal_10 + 0x5691) = *(uint64_t *)(lVal_10 + 0x5691) ^ SUB168(_DAT_1806b5b10,0);
      *(byte *)(lVal_10 + 0x5699) = *(byte *)(lVal_10 + 0x5699) ^ 0xdd;
      *(byte *)(lVal_10 + 0x569a) = *(byte *)(lVal_10 + 0x569a) ^ 0xd1;
      *(byte *)(lVal_10 + 0x569b) = *(byte *)(lVal_10 + 0x569b) ^ 0x69;
      *(byte *)(lVal_10 + 0x569c) = *(byte *)(lVal_10 + 0x569c) ^ 0xe5;
      *(uint8_t *)(lVal_10 + 0x569d) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_18017b03b;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_54 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_54 = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_12 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_10;
      }
      local_c8._0_8_ = pU64_12;
    }
    local_b8._8_8_ = uVal_14;
    local_b8._0_8_ = sz_8;
    func_0x1806aa960(pU64_12,pU64_1,sz_8);
    pU64_12[sz_8] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x56c0) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x56c0) = 1;
      uVal_7 = _UNK_1806b6468;
      *(uint64_t *)(lVal_10 + 0x56b0) = _DAT_1806b6460;
      *(uint64_t *)(lVal_10 + 0x56b8) = uVal_7;
      func_0x180673140(&LAB_1801b7590);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_2 = (uint8_t (*)[16])(lVal_10 + 0x56b0);
    if (*(char *)(lVal_10 + 0x56bf) == '\x01') {
      uVal_4 = *(uint32_t *)(lVal_10 + 0x56b8);
      auArr_15 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_4 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_4 >> 0x10),uVal_4)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_10 + 0x56bd) >> 8)),
                                                 (char)((uint)uVal_4 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_10 + 0x56bd),(char)uVal_4)
                                       )),_DAT_1806ae110);
      auArr_18._0_8_ = auArr_15._0_8_;
      auArr_18._8_8_ =
           auArr_15._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_10 + 0x56bc) << 0x20;
      auArr_15 = pblendw(auArr_18,*pArr16_2,0xf);
      *pArr16_2 = auArr_15 ^ _DAT_1806b6470;
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    local_98 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pArr16_2);
    if ((int64_t)sz_8 < 0) goto LAB_18017b048;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_60 = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_60 = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_10;
      }
      local_98._0_8_ = pU64_13;
    }
    local_88 = (uint32_t)sz_8;
    uStack_84 = (uint32_t)(sz_8 >> 0x20);
    uStack_80 = (uint32_t)uVal_14;
    uStack_7c = (uint8_t)(uVal_14 >> 0x20);
    uStack_7b = (uint16_t)(uVal_14 >> 0x28);
    uStack_79 = (uint8_t)(uVal_14 >> 0x38);
    func_0x1806aa960(pU64_13,pArr16_2,sz_8);
    pU64_13[sz_8] = 0;
    pU64_13 = local_98;
    pU64_12 = local_c8;
    func_0x1801cd2e0(local_a0,pU64_13,pU64_12,pU64_3,uVal_25,0,0x3f800000,local_218,0);
    uVal_14 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
    if (0xf < uVal_14) {
      uVal_9 = uVal_14 + 1;
      lVal_10 = local_98._0_8_;
      if (0xfff < uVal_9) {
        lVal_10 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_9 = uVal_14 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_9);
    }
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_14 = local_b8._8_8_ + 1;
      lVal_10 = local_c8._0_8_;
      if (0xfff < uVal_14) {
        lVal_10 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_14 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_14);
    }
    local_1a0 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_1a0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_1d8);
    }
    pU64_11 = local_a0 + 0x12;
    uVal_25 = *(uint32_t *)pU64_11;
    uStack_78 = (uint8_t)_UNK_1806b9d1c;
    uStack_77 = (uint16_t)((uint)_UNK_1806b9d1c >> 8);
    uStack_75 = (uint8_t)((uint)_UNK_1806b9d1c >> 0x18);
    uStack_74 = (uint8_t)_UNK_1806b9d20;
    uStack_73 = (uint16_t)((uint)_UNK_1806b9d20 >> 8);
    uStack_71 = (uint8_t)((uint)_UNK_1806b9d20 >> 0x18);
    uStack_70 = (uint8_t)_UNK_1806b9d24;
    uStack_6f = (uint16_t)((uint)_UNK_1806b9d24 >> 8);
    uStack_6d = (uint8_t)((uint)_UNK_1806b9d24 >> 0x18);
    local_88 = _DAT_1806b9d0c;
    uStack_84 = _UNK_1806b9d10;
    uStack_80 = _UNK_1806b9d14;
    uStack_7c = (uint8_t)_DAT_1806b9d18;
    uStack_7b = (uint16_t)((uint)_DAT_1806b9d18 >> 8);
    uStack_79 = (uint8_t)((uint)_DAT_1806b9d18 >> 0x18);
    local_98._8_8_ = _UNK_1806b9d04;
    local_98._0_8_ = _DAT_1806b9cfc;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x56f0) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x56f0) = 1;
      func_0x1801b1b20(lVal_10 + 0x56c1,local_98);
      func_0x180673140(&LAB_1801b75c0);
    }
    uVal_6 = _UNK_1806b2d7c;
    uVal_21 = _UNK_1806b2d78;
    uVal_20 = _UNK_1806b2d74;
    uVal_19 = _DAT_1806b2d70;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_10 + 0x56c1);
    if (*(char *)(lVal_10 + 0x56ed) == '\x01') {
      uVal_22 = *(uint *)(lVal_10 + 0x56c5) ^ _UNK_1806b2d74;
      uVal_23 = *(uint *)(lVal_10 + 0x56c9) ^ _UNK_1806b2d78;
      uVal_24 = *(uint *)(lVal_10 + 0x56cd) ^ _UNK_1806b2d7c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d70;
      *(uint *)(lVal_10 + 0x56c5) = uVal_22;
      *(uint *)(lVal_10 + 0x56c9) = uVal_23;
      *(uint *)(lVal_10 + 0x56cd) = uVal_24;
      *(uint *)(lVal_10 + 0x56d1) = *(uint *)(lVal_10 + 0x56d1) ^ uVal_19;
      *(uint *)(lVal_10 + 0x56d5) = *(uint *)(lVal_10 + 0x56d5) ^ uVal_20;
      *(uint *)(lVal_10 + 0x56d9) = *(uint *)(lVal_10 + 0x56d9) ^ uVal_21;
      *(uint *)(lVal_10 + 0x56dd) = *(uint *)(lVal_10 + 0x56dd) ^ uVal_6;
      *(uint64_t *)(lVal_10 + 0x56e1) = *(uint64_t *)(lVal_10 + 0x56e1) ^ SUB168(_DAT_1806b5c20,0);
      *(byte *)(lVal_10 + 0x56e9) = *(byte *)(lVal_10 + 0x56e9) ^ 0x87;
      *(byte *)(lVal_10 + 0x56ea) = *(byte *)(lVal_10 + 0x56ea) ^ 199;
      *(byte *)(lVal_10 + 0x56eb) = *(byte *)(lVal_10 + 0x56eb) ^ 0xa3;
      *(byte *)(lVal_10 + 0x56ec) = *(byte *)(lVal_10 + 0x56ec) ^ 0x93;
      *(uint8_t *)(lVal_10 + 0x56ed) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_18017b055;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_56 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_56 = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_12 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_10;
      }
      local_c8._0_8_ = pU64_12;
    }
    local_b8._8_8_ = uVal_14;
    local_b8._0_8_ = sz_8;
    func_0x1806aa960(pU64_12,pU64_1,sz_8);
    pU64_12[sz_8] = 0;
    local_d8 = _DAT_1806b9d28;
    uStack_d0 = _UNK_1806b9d30;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5704) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5704) = 1;
      func_0x18007d150(lVal_10 + 0x56f1,&local_d8);
      func_0x180673140(&LAB_1801b75f0);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_10 + 0x56f1);
    if (*(char *)(lVal_10 + 0x5701) == '\x01') {
      uVal_19 = *(uint *)(lVal_10 + 0x56f5) ^ _UNK_1806b2d74;
      uVal_20 = *(uint *)(lVal_10 + 0x56f9) ^ _UNK_1806b2d78;
      uVal_21 = *(uint *)(lVal_10 + 0x56fd) ^ _UNK_1806b2d7c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d70;
      *(uint *)(lVal_10 + 0x56f5) = uVal_19;
      *(uint *)(lVal_10 + 0x56f9) = uVal_20;
      *(uint *)(lVal_10 + 0x56fd) = uVal_21;
      *(uint8_t *)(lVal_10 + 0x5701) = 0;
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    local_98 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_18017b062;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_55 = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_55 = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_10;
      }
      local_98._0_8_ = pU64_13;
    }
    local_88 = (uint32_t)sz_8;
    uStack_84 = (uint32_t)(sz_8 >> 0x20);
    uStack_80 = (uint32_t)uVal_14;
    uStack_7c = (uint8_t)(uVal_14 >> 0x20);
    uStack_7b = (uint16_t)(uVal_14 >> 0x28);
    uStack_79 = (uint8_t)(uVal_14 >> 0x38);
    func_0x1806aa960(pU64_13,pU64_1,sz_8);
    pU64_13[sz_8] = 0;
    pU64_13 = local_98;
    pU64_12 = local_c8;
    func_0x1801cd2e0(local_a0,pU64_13,pU64_12,pU64_11,uVal_25,0x3f000000,0x40400000,local_1d8,0);
    uVal_14 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
    if (0xf < uVal_14) {
      uVal_9 = uVal_14 + 1;
      lVal_10 = local_98._0_8_;
      if (0xfff < uVal_9) {
        lVal_10 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_9 = uVal_14 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_9);
    }
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_14 = local_b8._8_8_ + 1;
      lVal_10 = local_c8._0_8_;
      if (0xfff < uVal_14) {
        lVal_10 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_14 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_14);
    }
    local_160 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_160 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_198);
    }
    pU64_3 = (uint32_t *)((int64_t)local_a0 + 0x94);
    uVal_25 = *pU64_3;
    uStack_78 = (uint8_t)_UNK_1806b9d58;
    uStack_77 = (uint16_t)((uint)_UNK_1806b9d58 >> 8);
    uStack_75 = (uint8_t)((uint)_UNK_1806b9d58 >> 0x18);
    uStack_74 = (uint8_t)_UNK_1806b9d5c;
    uStack_73 = (uint16_t)((uint)_UNK_1806b9d5c >> 8);
    uStack_71 = (uint8_t)((uint)_UNK_1806b9d5c >> 0x18);
    uStack_70 = (uint8_t)_UNK_1806b9d60;
    uStack_6f = (uint16_t)((uint)_UNK_1806b9d60 >> 8);
    uStack_6d = (uint8_t)((uint)_UNK_1806b9d60 >> 0x18);
    local_88 = _DAT_1806b9d48;
    uStack_84 = _UNK_1806b9d4c;
    uStack_80 = _UNK_1806b9d50;
    uStack_7c = (uint8_t)_DAT_1806b9d54;
    uStack_7b = (uint16_t)((uint)_DAT_1806b9d54 >> 8);
    uStack_79 = (uint8_t)((uint)_DAT_1806b9d54 >> 0x18);
    local_98._8_8_ = _UNK_1806b9d40;
    local_98._0_8_ = _DAT_1806b9d38;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5734) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5734) = 1;
      func_0x1801b1b20(lVal_10 + 0x5705,local_98);
      func_0x180673140(&LAB_1801b7610);
    }
    uVal_6 = _UNK_1806b2d1c;
    uVal_21 = _UNK_1806b2d18;
    uVal_20 = _UNK_1806b2d14;
    uVal_19 = _DAT_1806b2d10;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_10 + 0x5705);
    if (*(char *)(lVal_10 + 0x5731) == '\x01') {
      uVal_22 = *(uint *)(lVal_10 + 0x5709) ^ _UNK_1806b2d14;
      uVal_23 = *(uint *)(lVal_10 + 0x570d) ^ _UNK_1806b2d18;
      uVal_24 = *(uint *)(lVal_10 + 0x5711) ^ _UNK_1806b2d1c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d10;
      *(uint *)(lVal_10 + 0x5709) = uVal_22;
      *(uint *)(lVal_10 + 0x570d) = uVal_23;
      *(uint *)(lVal_10 + 0x5711) = uVal_24;
      *(uint *)(lVal_10 + 0x5715) = *(uint *)(lVal_10 + 0x5715) ^ uVal_19;
      *(uint *)(lVal_10 + 0x5719) = *(uint *)(lVal_10 + 0x5719) ^ uVal_20;
      *(uint *)(lVal_10 + 0x571d) = *(uint *)(lVal_10 + 0x571d) ^ uVal_21;
      *(uint *)(lVal_10 + 0x5721) = *(uint *)(lVal_10 + 0x5721) ^ uVal_6;
      *(uint64_t *)(lVal_10 + 0x5725) = *(uint64_t *)(lVal_10 + 0x5725) ^ SUB168(_DAT_1806b5c30,0);
      *(byte *)(lVal_10 + 0x572d) = *(byte *)(lVal_10 + 0x572d) ^ 0xd5;
      *(byte *)(lVal_10 + 0x572e) = *(byte *)(lVal_10 + 0x572e) ^ 0xf1;
      *(byte *)(lVal_10 + 0x572f) = *(byte *)(lVal_10 + 0x572f) ^ 0xf5;
      *(byte *)(lVal_10 + 0x5730) = *(byte *)(lVal_10 + 0x5730) ^ 0xf7;
      *(uint8_t *)(lVal_10 + 0x5731) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_18017b06f;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_58 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_58 = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_12 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_10;
      }
      local_c8._0_8_ = pU64_12;
    }
    local_b8._8_8_ = uVal_14;
    local_b8._0_8_ = sz_8;
    func_0x1806aa960(pU64_12,pU64_1,sz_8);
    pU64_12[sz_8] = 0;
    local_d8 = _DAT_1806b9d64;
    uStack_d0 = _UNK_1806b9d6c;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5748) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5748) = 1;
      func_0x18007d150(lVal_10 + 0x5735,&local_d8);
      func_0x180673140(&LAB_1801b7640);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_10 + 0x5735);
    if (*(char *)(lVal_10 + 0x5745) == '\x01') {
      uVal_19 = *(uint *)(lVal_10 + 0x5739) ^ _UNK_1806b2d14;
      uVal_20 = *(uint *)(lVal_10 + 0x573d) ^ _UNK_1806b2d18;
      uVal_21 = *(uint *)(lVal_10 + 0x5741) ^ _UNK_1806b2d1c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d10;
      *(uint *)(lVal_10 + 0x5739) = uVal_19;
      *(uint *)(lVal_10 + 0x573d) = uVal_20;
      *(uint *)(lVal_10 + 0x5741) = uVal_21;
      *(uint8_t *)(lVal_10 + 0x5745) = 0;
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    local_98 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_18017b07c;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_57 = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_57 = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_10;
      }
      local_98._0_8_ = pU64_13;
    }
    local_88 = (uint32_t)sz_8;
    uStack_84 = (uint32_t)(sz_8 >> 0x20);
    uStack_80 = (uint32_t)uVal_14;
    uStack_7c = (uint8_t)(uVal_14 >> 0x20);
    uStack_7b = (uint16_t)(uVal_14 >> 0x28);
    uStack_79 = (uint8_t)(uVal_14 >> 0x38);
    func_0x1806aa960(pU64_13,pU64_1,sz_8);
    pU64_13[sz_8] = 0;
    pU64_13 = local_98;
    pU64_12 = local_c8;
    func_0x1801cd2e0(local_a0,pU64_13,pU64_12,pU64_3,uVal_25,0x3f000000,0x40400000,local_198,0);
    uVal_14 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
    if (0xf < uVal_14) {
      uVal_9 = uVal_14 + 1;
      lVal_10 = local_98._0_8_;
      if (0xfff < uVal_9) {
        lVal_10 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_9 = uVal_14 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_9);
    }
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_14 = local_b8._8_8_ + 1;
      lVal_10 = local_c8._0_8_;
      if (0xfff < uVal_14) {
        lVal_10 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_14 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_14);
    }
    local_120 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_120 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_158);
    }
    pU64_3 = (uint32_t *)((int64_t)local_a0 + 0x9c);
    uVal_25 = *pU64_3;
    uStack_78 = UNK_1806b9d94;
    uStack_77 = (uint16_t)_UNK_1806b9d95;
    uStack_75 = (uint8_t)((uint)_UNK_1806b9d95 >> 0x10);
    uStack_74 = (uint8_t)((uint)_UNK_1806b9d95 >> 0x18);
    uStack_73 = (uint16_t)_UNK_1806b9d99;
    uStack_71 = (uint8_t)((uint)_UNK_1806b9d99 >> 0x10);
    uStack_70 = (uint8_t)((uint)_UNK_1806b9d99 >> 0x18);
    uStack_6f = (uint16_t)_UNK_1806b9d9d;
    uStack_6d = (uint8_t)((uint)_UNK_1806b9d9d >> 0x10);
    uStack_6c = (uint8_t)((uint)_UNK_1806b9d9d >> 0x18);
    local_88 = _DAT_1806b9d84;
    uStack_84 = _UNK_1806b9d88;
    uStack_80 = _UNK_1806b9d8c;
    uStack_7c = (uint8_t)_UNK_1806b9d90;
    uStack_7b = (uint16_t)((uint)_UNK_1806b9d90 >> 8);
    uStack_79 = (uint8_t)((uint)_UNK_1806b9d90 >> 0x18);
    local_98._8_8_ = _UNK_1806b9d7c;
    local_98._0_8_ = _DAT_1806b9d74;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5778) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5778) = 1;
      func_0x1801b2300(lVal_10 + 0x5749,local_98);
      func_0x180673140(&LAB_1801b7660);
    }
    uVal_6 = _UNK_1806b54cc;
    uVal_21 = _UNK_1806b54c8;
    uVal_20 = _UNK_1806b54c4;
    uVal_19 = _DAT_1806b54c0;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_10 + 0x5749);
    if (*(char *)(lVal_10 + 0x5776) == '\x01') {
      uVal_22 = *(uint *)(lVal_10 + 0x574d) ^ _UNK_1806b54c4;
      uVal_23 = *(uint *)(lVal_10 + 0x5751) ^ _UNK_1806b54c8;
      uVal_24 = *(uint *)(lVal_10 + 0x5755) ^ _UNK_1806b54cc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b54c0;
      *(uint *)(lVal_10 + 0x574d) = uVal_22;
      *(uint *)(lVal_10 + 0x5751) = uVal_23;
      *(uint *)(lVal_10 + 0x5755) = uVal_24;
      *(uint *)(lVal_10 + 0x5759) = *(uint *)(lVal_10 + 0x5759) ^ uVal_19;
      *(uint *)(lVal_10 + 0x575d) = *(uint *)(lVal_10 + 0x575d) ^ uVal_20;
      *(uint *)(lVal_10 + 0x5761) = *(uint *)(lVal_10 + 0x5761) ^ uVal_21;
      *(uint *)(lVal_10 + 0x5765) = *(uint *)(lVal_10 + 0x5765) ^ uVal_6;
      *(uint64_t *)(lVal_10 + 0x5769) = *(uint64_t *)(lVal_10 + 0x5769) ^ SUB168(_DAT_1806b6480,0);
      *(byte *)(lVal_10 + 0x5771) = *(byte *)(lVal_10 + 0x5771) ^ 0xd;
      *(byte *)(lVal_10 + 0x5772) = *(byte *)(lVal_10 + 0x5772) ^ 0xd3;
      *(byte *)(lVal_10 + 0x5773) = *(byte *)(lVal_10 + 0x5773) ^ 0x49;
      *(byte *)(lVal_10 + 0x5774) = *(byte *)(lVal_10 + 0x5774) ^ 0x25;
      *(byte *)(lVal_10 + 0x5775) = *(byte *)(lVal_10 + 0x5775) ^ 0x45;
      *(uint8_t *)(lVal_10 + 0x5776) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_18017b089;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_5a = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_5a = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_12 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_10;
      }
      local_c8._0_8_ = pU64_12;
    }
    local_b8._8_8_ = uVal_14;
    local_b8._0_8_ = sz_8;
    func_0x1806aa960(pU64_12,pU64_1,sz_8);
    pU64_12[sz_8] = 0;
    local_d8 = _DAT_1806b9da1;
    uStack_d0 = _UNK_1806b9da9;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x578c) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x578c) = 1;
      func_0x18007d150(lVal_10 + 0x5779,&local_d8);
      func_0x180673140(&LAB_1801b7690);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_10 + 0x5779);
    if (*(char *)(lVal_10 + 0x5789) == '\x01') {
      uVal_19 = *(uint *)(lVal_10 + 0x577d) ^ _UNK_1806b54c4;
      uVal_20 = *(uint *)(lVal_10 + 0x5781) ^ _UNK_1806b54c8;
      uVal_21 = *(uint *)(lVal_10 + 0x5785) ^ _UNK_1806b54cc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b54c0;
      *(uint *)(lVal_10 + 0x577d) = uVal_19;
      *(uint *)(lVal_10 + 0x5781) = uVal_20;
      *(uint *)(lVal_10 + 0x5785) = uVal_21;
      *(uint8_t *)(lVal_10 + 0x5789) = 0;
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    local_98 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_18017b096;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_59 = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_59 = 1;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_10;
      }
      local_98._0_8_ = pU64_13;
    }
    local_88 = (uint32_t)sz_8;
    uStack_84 = (uint32_t)(sz_8 >> 0x20);
    uStack_80 = (uint32_t)uVal_14;
    uStack_7c = (uint8_t)(uVal_14 >> 0x20);
    uStack_7b = (uint16_t)(uVal_14 >> 0x28);
    uStack_79 = (uint8_t)(uVal_14 >> 0x38);
    func_0x1806aa960(pU64_13,pU64_1,sz_8);
    pU64_13[sz_8] = 0;
    pU64_13 = local_98;
    pU64_12 = local_c8;
    func_0x1801cd2e0(local_a0,pU64_13,pU64_12,pU64_3,uVal_25,0x3f000000,0x40400000,local_158,0);
    uVal_14 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
    if (0xf < uVal_14) {
      uVal_9 = uVal_14 + 1;
      lVal_10 = local_98._0_8_;
      if (0xfff < uVal_9) {
        lVal_10 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_9 = uVal_14 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_9);
    }
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_14 = local_b8._8_8_ + 1;
      lVal_10 = local_c8._0_8_;
      if (0xfff < uVal_14) {
        lVal_10 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
        uVal_14 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_14);
    }
    local_e0 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_e0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_118);
    }
    pU64_11 = local_a0 + 0x13;
    uVal_25 = *(uint32_t *)pU64_11;
    uStack_78 = UNK_1806b9dd1;
    uStack_77 = (uint16_t)_UNK_1806b9dd2;
    uStack_75 = (uint8_t)((uint)_UNK_1806b9dd2 >> 0x10);
    uStack_74 = (uint8_t)((uint)_UNK_1806b9dd2 >> 0x18);
    uStack_73 = (uint16_t)_UNK_1806b9dd6;
    uStack_71 = (uint8_t)((uint)_UNK_1806b9dd6 >> 0x10);
    uStack_70 = (uint8_t)((uint)_UNK_1806b9dd6 >> 0x18);
    uStack_6f = (uint16_t)_UNK_1806b9dda;
    uStack_6d = (uint8_t)((uint)_UNK_1806b9dda >> 0x10);
    uStack_6c = (uint8_t)((uint)_UNK_1806b9dda >> 0x18);
    local_88 = _DAT_1806b9dc1;
    uStack_84 = _UNK_1806b9dc5;
    uStack_80 = _UNK_1806b9dc9;
    uStack_7c = (uint8_t)_UNK_1806b9dcd;
    uStack_7b = (uint16_t)((uint)_UNK_1806b9dcd >> 8);
    uStack_79 = (uint8_t)((uint)_UNK_1806b9dcd >> 0x18);
    local_98._8_8_ = _UNK_1806b9db9;
    local_98._0_8_ = _DAT_1806b9db1;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x57bc) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x57bc) = 1;
      func_0x1801b2300(lVal_10 + 0x578d,local_98);
      func_0x180673140(&LAB_1801b76b0);
    }
    uVal_6 = _UNK_1806ae4dc;
    uVal_21 = _UNK_1806ae4d8;
    uVal_20 = _UNK_1806ae4d4;
    uVal_19 = _DAT_1806ae4d0;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_10 + 0x578d);
    if (*(char *)(lVal_10 + 0x57ba) == '\x01') {
      uVal_22 = *(uint *)(lVal_10 + 0x5791) ^ _UNK_1806ae4d4;
      uVal_23 = *(uint *)(lVal_10 + 0x5795) ^ _UNK_1806ae4d8;
      uVal_24 = *(uint *)(lVal_10 + 0x5799) ^ _UNK_1806ae4dc;
      *pU64_1 = *pU64_1 ^ _DAT_1806ae4d0;
      *(uint *)(lVal_10 + 0x5791) = uVal_22;
      *(uint *)(lVal_10 + 0x5795) = uVal_23;
      *(uint *)(lVal_10 + 0x5799) = uVal_24;
      *(uint *)(lVal_10 + 0x579d) = *(uint *)(lVal_10 + 0x579d) ^ uVal_19;
      *(uint *)(lVal_10 + 0x57a1) = *(uint *)(lVal_10 + 0x57a1) ^ uVal_20;
      *(uint *)(lVal_10 + 0x57a5) = *(uint *)(lVal_10 + 0x57a5) ^ uVal_21;
      *(uint *)(lVal_10 + 0x57a9) = *(uint *)(lVal_10 + 0x57a9) ^ uVal_6;
      *(uint64_t *)(lVal_10 + 0x57ad) = *(uint64_t *)(lVal_10 + 0x57ad) ^ SUB168(_DAT_1806b54d0,0);
      *(byte *)(lVal_10 + 0x57b5) = *(byte *)(lVal_10 + 0x57b5) ^ 0xc5;
      *(byte *)(lVal_10 + 0x57b6) = *(byte *)(lVal_10 + 0x57b6) ^ 0x73;
      *(byte *)(lVal_10 + 0x57b7) = *(byte *)(lVal_10 + 0x57b7) ^ 0xd5;
      *(byte *)(lVal_10 + 0x57b8) = *(byte *)(lVal_10 + 0x57b8) ^ 0xa1;
      *(byte *)(lVal_10 + 0x57b9) = *(byte *)(lVal_10 + 0x57b9) ^ 0x81;
      *(uint8_t *)(lVal_10 + 0x57ba) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_8) {
      uVal_14 = 0xf;
      if (0xf < sz_8) {
        uVal_9 = sz_8 | 0xf;
        uVal_14 = 0x16;
        if (0x16 < uVal_9) {
          uVal_14 = uVal_9;
        }
        if (uVal_9 < 0xfff) {
          local_5c = 1;
          pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
        }
        else {
          local_5c = 1;
          lVal_10 = func_0x180672de0(uVal_14 + 0x28);
          pU64_12 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_12 + -8) = lVal_10;
        }
        local_c8._0_8_ = pU64_12;
      }
      local_b8._8_8_ = uVal_14;
      local_b8._0_8_ = sz_8;
      func_0x1806aa960(pU64_12,pU64_1,sz_8);
      pU64_12[sz_8] = 0;
      local_d8 = _DAT_1806b9dde;
      uStack_d0 = _UNK_1806b9de6;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x57d0) == '\0') {
        lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_10 + 0x57d0) = 1;
        func_0x18007d150(lVal_10 + 0x57bd,&local_d8);
        func_0x180673140(&LAB_1801b76e0);
      }
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_10 + 0x57bd);
      if (*(char *)(lVal_10 + 0x57cd) == '\x01') {
        uVal_19 = *(uint *)(lVal_10 + 0x57c1) ^ _UNK_1806ae4d4;
        uVal_20 = *(uint *)(lVal_10 + 0x57c5) ^ _UNK_1806ae4d8;
        uVal_21 = *(uint *)(lVal_10 + 0x57c9) ^ _UNK_1806ae4dc;
        *pU64_1 = *pU64_1 ^ _DAT_1806ae4d0;
        *(uint *)(lVal_10 + 0x57c1) = uVal_19;
        *(uint *)(lVal_10 + 0x57c5) = uVal_20;
        *(uint *)(lVal_10 + 0x57c9) = uVal_21;
        *(uint8_t *)(lVal_10 + 0x57cd) = 0;
      }
      local_98 = (uint8_t  [16])0x0;
      sz_8 = strlen((char *)pU64_1);
      if (-1 < (int64_t)sz_8) {
        uVal_14 = 0xf;
        if (0xf < sz_8) {
          uVal_9 = sz_8 | 0xf;
          uVal_14 = 0x16;
          if (0x16 < uVal_9) {
            uVal_14 = uVal_9;
          }
          if (uVal_9 < 0xfff) {
            local_5b = 1;
            pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
          }
          else {
            local_5b = 1;
            lVal_10 = func_0x180672de0(uVal_14 + 0x28);
            pU64_13 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_13 + -8) = lVal_10;
          }
          local_98._0_8_ = pU64_13;
        }
        local_88 = (uint32_t)sz_8;
        uStack_84 = (uint32_t)(sz_8 >> 0x20);
        uStack_80 = (uint32_t)uVal_14;
        uStack_7c = (uint8_t)(uVal_14 >> 0x20);
        uStack_7b = (uint16_t)(uVal_14 >> 0x28);
        uStack_79 = (uint8_t)(uVal_14 >> 0x38);
        func_0x1806aa960(pU64_13,pU64_1,sz_8);
        pU64_13[sz_8] = 0;
        func_0x1801cd2e0(local_a0,local_98,local_c8,pU64_11,uVal_25,0x3f000000,0x40400000,local_118,0);
        uVal_14 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
        if (0xf < uVal_14) {
          uVal_9 = uVal_14 + 1;
          lVal_10 = local_98._0_8_;
          if (0xfff < uVal_9) {
            lVal_10 = *(int64_t *)(local_98._0_8_ + -8);
            if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_10)) goto LAB_18017afe6;
            uVal_9 = uVal_14 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_10,uVal_9);
        }
        if (0xf < (uint64_t)local_b8._8_8_) {
          uVal_14 = local_b8._8_8_ + 1;
          lVal_10 = local_c8._0_8_;
          if (0xfff < uVal_14) {
            lVal_10 = *(int64_t *)(local_c8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_10)) {
LAB_18017afe6:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_14 = local_b8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_10,uVal_14);
        }
        return local_a0;
      }
      goto LAB_18017b0b0;
    }
  }
  local_5c = 1;
  func_0x18007ba70();
LAB_18017b0b0:
  local_5b = 1;
  func_0x18007ba70();
  fnPtr_5 = (func_ptr_t )swi(3);
  pU64_11 = (uint64_t *)(*fnPtr_5)();
  return pU64_11;
}

// Unwind@18017b0c0
void Unwind_18017b0c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x88);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@18017b120
void Unwind_18017b120(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x55b0) = 0;
  *(uint8_t *)(param_2 + 0x2d7) = 1;
  return;
}

// Unwind@18017b180
void Unwind_18017b180(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 200);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@18017b1e0
void Unwind_18017b1e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5600) = 0;
  *(uint8_t *)(param_2 + 0x2d6) = 1;
  return;
}

// Unwind@18017b240
void Unwind_18017b240(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x108);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@18017b2a0
void Unwind_18017b2a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5650) = 0;
  *(uint8_t *)(param_2 + 0x2d5) = 1;
  return;
}

// Unwind@18017b300
void Unwind_18017b300(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x148);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@18017b360
void Unwind_18017b360(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x56a0) = 0;
  *(uint8_t *)(param_2 + 0x2d4) = 1;
  return;
}

// Unwind@18017b3c0
void Unwind_18017b3c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x188);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@18017b420
void Unwind_18017b420(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x56f0) = 0;
  *(uint8_t *)(param_2 + 0x2d2) = 1;
  return;
}

// Unwind@18017b480
void Unwind_18017b480(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@18017b4e0
void Unwind_18017b4e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5734) = 0;
  *(uint8_t *)(param_2 + 0x2d0) = 1;
  return;
}

// Unwind@18017b540
void Unwind_18017b540(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x208);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1d0));
    *(uint64_t *)(param_2 + 0x208) = 0;
  }
  return;
}

// Unwind@18017b5a0
void Unwind_18017b5a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5778) = 0;
  *(uint8_t *)(param_2 + 0x2ce) = 1;
  return;
}

// Unwind@18017b600
void Unwind_18017b600(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x248);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x210));
    *(uint64_t *)(param_2 + 0x248) = 0;
  }
  return;
}

// Unwind@18017b660
void Unwind_18017b660(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x57bc) = 0;
  *(uint8_t *)(param_2 + 0x2cc) = 1;
  return;
}

// Unwind@18017b6c0
void Unwind_18017b6c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  return;
}

// Unwind@18017b700
void Unwind_18017b700(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  *(uint8_t *)(param_2 + 0x2cb) = 0;
  return;
}

// Unwind@18017b750
void Unwind_18017b750(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2cb);
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x2d7) = uVal_1;
  return;
}

// Unwind@18017b7a0
void Unwind_18017b7a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2d7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@18017b800
void Unwind_18017b800(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  *(uint8_t *)(param_2 + 0x2ca) = 0;
  return;
}

// Unwind@18017b850
void Unwind_18017b850(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2ca);
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x2d6) = uVal_1;
  return;
}

// Unwind@18017b8a0
void Unwind_18017b8a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2d6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@18017b900
void Unwind_18017b900(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  *(uint8_t *)(param_2 + 0x2c9) = 0;
  return;
}

// Unwind@18017b950
void Unwind_18017b950(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2c9);
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x2d5) = uVal_1;
  return;
}

// Unwind@18017b9a0
void Unwind_18017b9a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2d5) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@18017ba10
void Unwind_18017ba10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  *(uint8_t *)(param_2 + 0x2c8) = 0;
  return;
}

// Unwind@18017ba60
void Unwind_18017ba60(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2c8);
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x2d4) = uVal_1;
  return;
}

// Unwind@18017bab0
void Unwind_18017bab0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2d4) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@18017bb20
void Unwind_18017bb20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  *(uint8_t *)(param_2 + 0x2d3) = 0;
  return;
}

// Unwind@18017bb70
void Unwind_18017bb70(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2d3);
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x2d2) = uVal_1;
  return;
}

// Unwind@18017bbc0
void Unwind_18017bbc0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2d2) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x188), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@18017bc30
void Unwind_18017bc30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  *(uint8_t *)(param_2 + 0x2d1) = 0;
  return;
}

// Unwind@18017bc80
void Unwind_18017bc80(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2d1);
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x2d0) = uVal_1;
  return;
}

// Unwind@18017bcd0
void Unwind_18017bcd0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2d0) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@18017bd40
void Unwind_18017bd40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  *(uint8_t *)(param_2 + 0x2cf) = 0;
  return;
}

// Unwind@18017bd90
void Unwind_18017bd90(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2cf);
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x2ce) = uVal_1;
  return;
}

// Unwind@18017bde0
void Unwind_18017bde0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2ce) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x208), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1d0));
    *(uint64_t *)(param_2 + 0x208) = 0;
  }
  return;
}

// Unwind@18017be50
void Unwind_18017be50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  *(uint8_t *)(param_2 + 0x2cd) = 0;
  return;
}

// Unwind@18017bea0
void Unwind_18017bea0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2cd);
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x2cc) = uVal_1;
  return;
}

// Unwind@18017bef0
void Unwind_18017bef0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2cc) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x248), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x210));
    *(uint64_t *)(param_2 + 0x248) = 0;
  }
  return;
}

// Unwind@18017bf60
void Unwind_18017bf60(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x288));
  return;
}

// Unwind@18017bfa0
void Unwind_18017bfa0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5580) = 0;
  return;
}

// Unwind@18017bff0
void Unwind_18017bff0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5704) = 0;
  *(uint8_t *)(param_2 + 0x2d3) = 1;
  return;
}

// Unwind@18017c050
void Unwind_18017c050(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5748) = 0;
  *(uint8_t *)(param_2 + 0x2d1) = 1;
  return;
}

// Unwind@18017c0b0
void Unwind_18017c0b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x578c) = 0;
  *(uint8_t *)(param_2 + 0x2cf) = 1;
  return;
}

// Unwind@18017c110
void Unwind_18017c110(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x57d0) = 0;
  *(uint8_t *)(param_2 + 0x2cd) = 1;
  return;
}

// Unwind@18017c2d0
void Unwind_18017c2d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x57e4) = 0;
  return;
}

// Unwind@18017c460
void Unwind_18017c460(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5804) = 0;
  return;
}

// func_0x18017c4a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18017c4a0(uint64_t *param_1)
{
  char *fnPtr_1;
  uint *pU64_2;
  uint64_t *pU64_3;
  uint8_t (*pArr16_4)[16];
  uint8_t *pU64_5;
  byte *_Str;
  uint32_t *pU64_6;
  uint8_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  int64_t lVal_10;
  func_ptr_t fnPtr_11;
  uint uVal_12;
  uint uVal_13;
  uint uVal_14;
  uint uVal_15;
  uint64_t uVal_16;
  size_t sz_17;
  uint64_t uVal_18;
  uint64_t ***ptr3_U64_19;
  uint8_t ****ptr4_U64_20;
  uint64_t *pU64_21;
  uint64_t ****ptr4_U64_22;
  uint8_t *****ptr5_U64_23;
  uint64_t ****ptr4_U64_24;
  uint64_t ****ptr4_U64_25;
  uint8_t *****ptr5_U64_26;
  uint64_t ****ptr4_U64_27;
  uint64_t uVal_28;
  uint uVal_31;
  uint uVal_32;
  uint uVal_33;
  uint8_t auArr_29 [16];
  uint8_t auArr_30 [16];
  uint64_t uVal_34;
  uint32_t uVal_35;
  uint8_t **local_348;
  uint64_t *local_340;
  uint8_t ***local_310;
  uint8_t **local_308;
  uint64_t *local_300;
  uint8_t ***local_2d0;
  uint8_t **local_2c8;
  uint64_t *local_2c0;
  uint8_t ***local_290;
  uint8_t **local_288;
  uint64_t *local_280;
  uint8_t ***local_250;
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
  uint64_t ****local_108;
  undefined5 uStack_100;
  undefined3 uStack_fb;
  uint16_t uStack_f8;
  undefined3 uStack_f6;
  undefined3 uStack_f3;
  uint64_t uStack_f0;
  uint64_t ****local_e8;
  undefined3 uStack_e0;
  uint16_t uStack_dd;
  uint16_t uStack_db;
  uint8_t uStack_d9;
  uint8_t uStack_d8;
  uint16_t uStack_d7;
  uint16_t uStack_d5;
  uint16_t uStack_d3;
  uint8_t uStack_d1;
  uint8_t uStack_d0;
  uint16_t uStack_cf;
  uint16_t uStack_cd;
  undefined3 uStack_cb;
  uint8_t ****local_c8;
  undefined7 uStack_c0;
  uint32_t uStack_b9;
  uint8_t uStack_b5;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint16_t uStack_ac;
  uint16_t uStack_aa;
  undefined6 uStack_a8;
  uint16_t uStack_a2;
  uint8_t *****local_90;
  uint64_t ****local_88;
  undefined3 uStack_80;
  uint32_t uStack_7d;
  uint32_t uStack_79;
  uint32_t uStack_75;
  uint32_t uStack_71;
  undefined5 uStack_6d;
  uint64_t *local_68;
  uint8_t local_5d;
  uint8_t local_5c;
  uint8_t local_5b;
  uint8_t local_5a;
  uint8_t local_59;
  uint8_t local_58;
  uint8_t local_57;
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
  
  local_48 = 0xfffffffffffffffe;
  local_c8 = _DAT_1806b9e1a;
  uStack_c0 = (undefined7)_UNK_1806b9e22;
  uStack_b9 = 0xf9b1ac7f;
  local_68 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x581c) == '\0') {
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_10 + 0x581c) = 1;
    func_0x18007cb80(lVal_10 + 0x5805,&local_c8);
    func_0x180673140(&LAB_1801b7760);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x5805);
  func_0x1801be770(fnPtr_1);
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_aa = 0;
  local_c8 = (uint8_t ****)0x0;
  uStack_c0 = 0;
  uStack_b9 = 0;
  sz_17 = strlen(fnPtr_1);
  if ((int64_t)sz_17 < 0) {
    func_0x18007ba70();
LAB_18017ed39:
    local_54 = 1;
    func_0x18007ba70();
LAB_18017ed46:
    local_49 = 1;
    func_0x18007ba70();
LAB_18017ed53:
    local_53 = 1;
    func_0x18007ba70();
LAB_18017ed60:
    local_56 = 1;
    func_0x18007ba70();
LAB_18017ed6d:
    local_4a = 1;
    func_0x18007ba70();
LAB_18017ed7a:
    local_55 = 1;
    func_0x18007ba70();
LAB_18017ed87:
    local_58 = 1;
    func_0x18007ba70();
LAB_18017ed94:
    local_4b = 1;
    func_0x18007ba70();
LAB_18017eda1:
    local_57 = 1;
    func_0x18007ba70();
LAB_18017edae:
    local_4c = 1;
    func_0x18007ba70();
LAB_18017edbb:
    local_59 = 1;
    func_0x18007ba70();
LAB_18017edc8:
    local_4e = 1;
    func_0x18007ba70();
LAB_18017edd5:
    local_4d = 1;
    func_0x18007ba70();
LAB_18017ede2:
    local_4f = 1;
    func_0x18007ba70();
LAB_18017edef:
    local_5a = 1;
    func_0x18007ba70();
LAB_18017edfc:
    local_5b = 1;
    func_0x18007ba70();
LAB_18017ee09:
    local_50 = 1;
    func_0x18007ba70();
LAB_18017ee16:
    local_51 = 1;
    func_0x18007ba70();
LAB_18017ee23:
    local_5c = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_17 < 0x10) {
      ptr5_U64_26 = &local_c8;
      uVal_28 = 0xf;
    }
    else {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        ptr5_U64_26 = (uint8_t *****)func_0x180672de0(uVal_28 + 1);
        local_c8 = (uint8_t ****)ptr5_U64_26;
      }
      else {
        ptr4_U64_20 = (uint8_t ****)func_0x180672de0(uVal_28 + 0x28);
        ptr5_U64_26 = (uint8_t *****)((int64_t)ptr4_U64_20 + 0x27U & 0xffffffffffffffe0);
        ptr5_U64_26[-1] = ptr4_U64_20;
        local_c8 = (uint8_t ****)ptr5_U64_26;
      }
    }
    uStack_b9._1_3_ = (undefined3)sz_17;
    uStack_b5 = (uint8_t)(sz_17 >> 0x18);
    uStack_b4 = (uint32_t)(sz_17 >> 0x20);
    uStack_b0 = (uint32_t)uVal_28;
    uStack_ac = (uint16_t)(uVal_28 >> 0x20);
    uStack_aa = (uint16_t)(uVal_28 >> 0x30);
    func_0x1806aa960(ptr5_U64_26,fnPtr_1,sz_17);
    *(uint8_t *)((int64_t)ptr5_U64_26 + sz_17) = 0;
    func_0x18014fe60(local_68,0,0,&local_c8);
    uVal_28 = CONCAT26(uStack_aa,CONCAT24(uStack_ac,uStack_b0));
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr5_U64_26 = (uint8_t *****)local_c8;
      if (0xfff < uVal_18) {
        ptr5_U64_26 = (uint8_t *****)local_c8[-1];
        if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr5_U64_26)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr5_U64_26,uVal_18);
    }
    *local_68 = &PTR_LAB_1806b7940;
    *(uint32_t *)(local_68 + 0x29) = 0x1000000;
    *(uint64_t *)((int64_t)local_68 + 0x14c) = 0;
    *(uint8_t *)((int64_t)local_68 + 0x154) = 0;
    *(uint8_t (*)[16])(local_68 + 0x2b) = (uint8_t  [16])0x0;
    local_348 = &PTR_LAB_1806babb0;
    local_340 = local_68;
    local_310 = &local_348;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5828) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5828) = 1;
      *(uint8_t *)(lVal_10 + 0x5826) = 1;
      *(uint32_t *)(lVal_10 + 0x5820) = 0xb51c3120;
      *(uint16_t *)(lVal_10 + 0x5824) = 0xb3c5;
      func_0x180673140(&LAB_1801b7790);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_10 + 0x5820);
    if (*(char *)(lVal_10 + 0x5826) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xc77d4573;
      *(byte *)(lVal_10 + 0x5824) = *(byte *)(lVal_10 + 0x5824) ^ 0xb1;
      *(byte *)(lVal_10 + 0x5825) = *(byte *)(lVal_10 + 0x5825) ^ 0xb3;
      *(uint8_t *)(lVal_10 + 0x5826) = 0;
    }
    uStack_75 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7d = 0;
    uStack_79 = 0;
    sz_17 = strlen((char *)pU64_2);
    if ((int64_t)sz_17 < 0) goto LAB_18017ed39;
    if (sz_17 < 0x10) {
      ptr4_U64_24 = &local_88;
      uVal_28 = 0xf;
    }
    else {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_54 = 1;
        ptr4_U64_24 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_88 = ptr4_U64_24;
      }
      else {
        local_54 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_24 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_24[-1] = ptr3_U64_19;
        local_88 = ptr4_U64_24;
      }
    }
    uStack_79._1_3_ = (undefined3)sz_17;
    uStack_75 = (uint32_t)(sz_17 >> 0x18);
    uStack_71._0_1_ = (uint8_t)(sz_17 >> 0x38);
    uStack_71._1_3_ = (undefined3)uVal_28;
    uStack_6d = (undefined5)(uVal_28 >> 0x18);
    func_0x1806aa960(ptr4_U64_24,pU64_2,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_24 + sz_17) = 0;
    local_c8 = (uint8_t ****)&PTR_LAB_1806bab80;
    uStack_c0 = SUB87(local_68,0);
    uStack_b9._0_1_ = (uint8_t)((uint64_t)local_68 >> 0x38);
    local_90 = &local_c8;
    uStack_d8 = (uint8_t)((uint)_DAT_1806b9e3a >> 0x18);
    uStack_d7 = (uint16_t)_UNK_1806b9e3e;
    uStack_d5 = (uint16_t)((uint)_UNK_1806b9e3e >> 0x10);
    uStack_d3 = (uint16_t)_UNK_1806b9e42;
    uStack_d1 = (uint8_t)((uint)_UNK_1806b9e42 >> 0x10);
    uStack_d0 = (uint8_t)((uint)_UNK_1806b9e42 >> 0x18);
    uStack_cf = (uint16_t)_UNK_1806b9e46;
    uStack_cd = (uint16_t)((uint)_UNK_1806b9e46 >> 0x10);
    local_e8 = _DAT_1806b9e2d;
    uStack_e0 = (undefined3)_UNK_1806b9e35;
    uStack_dd = (uint16_t)((uint5)_UNK_1806b9e35 >> 0x18);
    uStack_db = (uint16_t)_DAT_1806b9e3a;
    uStack_d9 = (uint8_t)((uint)_DAT_1806b9e3a >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5848) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5848) = 1;
      func_0x18007cc40(lVal_10 + 0x5829,&local_e8);
      func_0x180673140(&LAB_1801b77c0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x5829);
    func_0x1801bf2b0(fnPtr_1);
    uStack_f8 = 0;
    uStack_f6 = 0;
    uStack_f3 = 0;
    uStack_f0 = 0;
    local_108 = (uint64_t ****)0x0;
    uStack_100 = 0;
    uStack_fb = 0;
    sz_17 = strlen(fnPtr_1);
    if ((int64_t)sz_17 < 0) goto LAB_18017ed46;
    if (sz_17 < 0x10) {
      ptr4_U64_24 = &local_108;
      uVal_28 = 0xf;
    }
    else {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_49 = 1;
        ptr4_U64_24 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_108 = ptr4_U64_24;
      }
      else {
        local_49 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_24 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_24[-1] = ptr3_U64_19;
        local_108 = ptr4_U64_24;
      }
    }
    uStack_f8 = (uint16_t)sz_17;
    uStack_f6 = (undefined3)(sz_17 >> 0x10);
    uStack_f3 = (undefined3)(sz_17 >> 0x28);
    uStack_f0 = uVal_28;
    func_0x1806aa960(ptr4_U64_24,fnPtr_1,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_24 + sz_17) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5854) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5854) = 1;
      *(uint8_t *)(lVal_10 + 0x5852) = 1;
      *(uint32_t *)(lVal_10 + 0x584c) = 0xb51c3120;
      *(uint16_t *)(lVal_10 + 0x5850) = 0xb3c5;
      func_0x180673140(&LAB_1801b77f0);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_10 + 0x584c);
    if (*(char *)(lVal_10 + 0x5852) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xc77d4573;
      *(byte *)(lVal_10 + 0x5850) = *(byte *)(lVal_10 + 0x5850) ^ 0xb1;
      *(byte *)(lVal_10 + 0x5851) = *(byte *)(lVal_10 + 0x5851) ^ 0xb3;
      *(uint8_t *)(lVal_10 + 0x5852) = 0;
    }
    uStack_d8 = 0;
    uStack_d7 = 0;
    uStack_d5 = 0;
    uStack_d3 = 0;
    uStack_d1 = 0;
    uStack_d0 = 0;
    uStack_cf = 0;
    uStack_cd = 0;
    uStack_cb = 0;
    local_e8 = (uint64_t ****)0x0;
    uStack_e0 = 0;
    uStack_dd = 0;
    uStack_db = 0;
    uStack_d9 = 0;
    sz_17 = strlen((char *)pU64_2);
    if ((int64_t)sz_17 < 0) goto LAB_18017ed53;
    if (sz_17 < 0x10) {
      ptr4_U64_24 = &local_e8;
      uVal_28 = 0xf;
    }
    else {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_53 = 1;
        ptr4_U64_24 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_e8 = ptr4_U64_24;
      }
      else {
        local_53 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_24 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_24[-1] = ptr3_U64_19;
        local_e8 = ptr4_U64_24;
      }
    }
    uStack_d8 = (uint8_t)sz_17;
    uStack_d7 = (uint16_t)(sz_17 >> 8);
    uStack_d5 = (uint16_t)(sz_17 >> 0x18);
    uStack_d3 = (uint16_t)(sz_17 >> 0x28);
    uStack_d1 = (uint8_t)(sz_17 >> 0x38);
    uStack_d0 = (uint8_t)uVal_28;
    uStack_cf = (uint16_t)(uVal_28 >> 8);
    uStack_cd = (uint16_t)(uVal_28 >> 0x18);
    uStack_cb = (undefined3)(uVal_28 >> 0x28);
    func_0x1806aa960(ptr4_U64_24,pU64_2,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_24 + sz_17) = 0;
    ptr4_U64_24 = &local_88;
    ptr4_U64_25 = &local_e8;
    ptr4_U64_27 = &local_108;
    func_0x1801ccb00(local_68,ptr4_U64_25,ptr4_U64_27,&local_c8,ptr4_U64_24,&local_348,0);
    uVal_28 = CONCAT35(uStack_cb,CONCAT23(uStack_cd,CONCAT21(uStack_cf,uStack_d0)));
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr4_U64_22 = local_e8;
      if (0xfff < uVal_18) {
        ptr4_U64_22 = (uint64_t ****)local_e8[-1];
        if (0x1f < (uint64_t)((int64_t)local_e8 + (-8 - (int64_t)ptr4_U64_22)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_22,uVal_18);
    }
    if (0xf < uStack_f0) {
      uVal_28 = uStack_f0 + 1;
      ptr4_U64_22 = local_108;
      if (0xfff < uVal_28) {
        ptr4_U64_22 = (uint64_t ****)local_108[-1];
        if (0x1f < (uint64_t)((int64_t)local_108 + (-8 - (int64_t)ptr4_U64_22)))
        goto LAB_18017ed32;
        uVal_28 = uStack_f0 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_22,uVal_28);
    }
    if (local_90 != (uint8_t *****)0x0) {
      (*(func_ptr_t )(*local_90)[4])(local_90,local_90 != &local_c8);
    }
    uVal_28 = CONCAT53(uStack_6d,uStack_71._1_3_);
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr4_U64_22 = local_88;
      if (0xfff < uVal_18) {
        ptr4_U64_22 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_22)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_22,uVal_18);
    }
    local_308 = &PTR_LAB_1806bac10;
    local_300 = local_68;
    local_2d0 = &local_308;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5860) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5860) = 1;
      *(uint32_t *)(lVal_10 + 0x5858) = 0x879a8586;
      *(uint16_t *)(lVal_10 + 0x585c) = 0x11f;
      func_0x180673140(&LAB_1801b7820);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_10 + 0x5858);
    if (*(char *)(lVal_10 + 0x585d) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xf7f5f1d5;
      *(byte *)(lVal_10 + 0x585c) = *(byte *)(lVal_10 + 0x585c) ^ 0x1f;
      *(uint8_t *)(lVal_10 + 0x585d) = 0;
    }
    uStack_75 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7d = 0;
    uStack_79 = 0;
    sz_17 = strlen((char *)pU64_2);
    if ((int64_t)sz_17 < 0) goto LAB_18017ed60;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_56 = 1;
        ptr4_U64_24 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_88 = ptr4_U64_24;
      }
      else {
        local_56 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_24 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_24[-1] = ptr3_U64_19;
        local_88 = ptr4_U64_24;
      }
    }
    uStack_79._1_3_ = (undefined3)sz_17;
    uStack_75 = (uint32_t)(sz_17 >> 0x18);
    uStack_71._0_1_ = (uint8_t)(sz_17 >> 0x38);
    uStack_71._1_3_ = (undefined3)uVal_28;
    uStack_6d = (undefined5)(uVal_28 >> 0x18);
    func_0x1806aa960(ptr4_U64_24,pU64_2,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_24 + sz_17) = 0;
    local_c8 = (uint8_t ****)&PTR_LAB_1806babe0;
    uStack_c0 = SUB87(local_68,0);
    uStack_b9._0_1_ = (uint8_t)((uint64_t)local_68 >> 0x38);
    local_90 = &local_c8;
    uStack_d8 = (uint8_t)((uint)_UNK_1806b9e59 >> 8);
    uStack_d7 = (uint16_t)((uint)_UNK_1806b9e59 >> 0x10);
    uStack_d5 = (uint16_t)_UNK_1806b9e5d;
    uStack_d3 = (uint16_t)((uint)_UNK_1806b9e5d >> 0x10);
    uStack_d1 = (uint8_t)_UNK_1806b9e61;
    uStack_d0 = (uint8_t)((uint)_UNK_1806b9e61 >> 8);
    uStack_cf = (uint16_t)((uint)_UNK_1806b9e61 >> 0x10);
    local_e8 = _DAT_1806b9e4a;
    uStack_e0 = _UNK_1806b9e52;
    uStack_dd = (uint16_t)_DAT_1806b9e55;
    uStack_db = (uint16_t)((uint)_DAT_1806b9e55 >> 0x10);
    uStack_d9 = UNK_1806b9e59;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5880) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5880) = 1;
      func_0x18007c9b0(lVal_10 + 0x5861,&local_e8);
      func_0x180673140(&LAB_1801b7850);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x5861);
    func_0x1801bf370(fnPtr_1);
    uStack_f8 = 0;
    uStack_f6 = 0;
    uStack_f3 = 0;
    uStack_f0 = 0;
    local_108 = (uint64_t ****)0x0;
    uStack_100 = 0;
    uStack_fb = 0;
    sz_17 = strlen(fnPtr_1);
    if ((int64_t)sz_17 < 0) goto LAB_18017ed6d;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_4a = 1;
        ptr4_U64_27 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_108 = ptr4_U64_27;
      }
      else {
        local_4a = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_27 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_27[-1] = ptr3_U64_19;
        local_108 = ptr4_U64_27;
      }
    }
    uStack_f8 = (uint16_t)sz_17;
    uStack_f6 = (undefined3)(sz_17 >> 0x10);
    uStack_f3 = (undefined3)(sz_17 >> 0x28);
    uStack_f0 = uVal_28;
    func_0x1806aa960(ptr4_U64_27,fnPtr_1,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_27 + sz_17) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x588c) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x588c) = 1;
      *(uint32_t *)(lVal_10 + 0x5884) = 0x879a8586;
      *(uint16_t *)(lVal_10 + 0x5888) = 0x11f;
      func_0x180673140(&LAB_1801b7880);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_10 + 0x5884);
    if (*(char *)(lVal_10 + 0x5889) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xf7f5f1d5;
      *(byte *)(lVal_10 + 0x5888) = *(byte *)(lVal_10 + 0x5888) ^ 0x1f;
      *(uint8_t *)(lVal_10 + 0x5889) = 0;
    }
    uStack_d8 = 0;
    uStack_d7 = 0;
    uStack_d5 = 0;
    uStack_d3 = 0;
    uStack_d1 = 0;
    uStack_d0 = 0;
    uStack_cf = 0;
    uStack_cd = 0;
    uStack_cb = 0;
    local_e8 = (uint64_t ****)0x0;
    uStack_e0 = 0;
    uStack_dd = 0;
    uStack_db = 0;
    uStack_d9 = 0;
    sz_17 = strlen((char *)pU64_2);
    if ((int64_t)sz_17 < 0) goto LAB_18017ed7a;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_55 = 1;
        ptr4_U64_25 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_e8 = ptr4_U64_25;
      }
      else {
        local_55 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_25 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_25[-1] = ptr3_U64_19;
        local_e8 = ptr4_U64_25;
      }
    }
    uStack_d8 = (uint8_t)sz_17;
    uStack_d7 = (uint16_t)(sz_17 >> 8);
    uStack_d5 = (uint16_t)(sz_17 >> 0x18);
    uStack_d3 = (uint16_t)(sz_17 >> 0x28);
    uStack_d1 = (uint8_t)(sz_17 >> 0x38);
    uStack_d0 = (uint8_t)uVal_28;
    uStack_cf = (uint16_t)(uVal_28 >> 8);
    uStack_cd = (uint16_t)(uVal_28 >> 0x18);
    uStack_cb = (undefined3)(uVal_28 >> 0x28);
    func_0x1806aa960(ptr4_U64_25,pU64_2,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_25 + sz_17) = 0;
    ptr4_U64_24 = &local_88;
    ptr4_U64_25 = &local_e8;
    ptr4_U64_27 = &local_108;
    func_0x1801ccb00(local_68,ptr4_U64_25,ptr4_U64_27,&local_c8,ptr4_U64_24,&local_308,0);
    uVal_28 = CONCAT35(uStack_cb,CONCAT23(uStack_cd,CONCAT21(uStack_cf,uStack_d0)));
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr4_U64_22 = local_e8;
      if (0xfff < uVal_18) {
        ptr4_U64_22 = (uint64_t ****)local_e8[-1];
        if (0x1f < (uint64_t)((int64_t)local_e8 + (-8 - (int64_t)ptr4_U64_22)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_22,uVal_18);
    }
    if (0xf < uStack_f0) {
      uVal_28 = uStack_f0 + 1;
      ptr4_U64_22 = local_108;
      if (0xfff < uVal_28) {
        ptr4_U64_22 = (uint64_t ****)local_108[-1];
        if (0x1f < (uint64_t)((int64_t)local_108 + (-8 - (int64_t)ptr4_U64_22)))
        goto LAB_18017ed32;
        uVal_28 = uStack_f0 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_22,uVal_28);
    }
    if (local_90 != (uint8_t *****)0x0) {
      (*(func_ptr_t )(*local_90)[4])(local_90,local_90 != &local_c8);
    }
    uVal_28 = CONCAT53(uStack_6d,uStack_71._1_3_);
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr4_U64_22 = local_88;
      if (0xfff < uVal_18) {
        ptr4_U64_22 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_22)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_22,uVal_18);
    }
    local_210 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_210 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_248);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5898) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5898) = 1;
      *(uint8_t *)(lVal_10 + 0x5896) = 1;
      *(uint32_t *)(lVal_10 + 0x5890) = 0x20dad467;
      *(uint16_t *)(lVal_10 + 0x5894) = 0x2b4d;
      func_0x180673140(&LAB_1801b78b0);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_10 + 0x5890);
    if (*(char *)(lVal_10 + 0x5896) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x45a9b135;
      *(byte *)(lVal_10 + 0x5894) = *(byte *)(lVal_10 + 0x5894) ^ 0x39;
      *(byte *)(lVal_10 + 0x5895) = *(byte *)(lVal_10 + 0x5895) ^ 0x2b;
      *(uint8_t *)(lVal_10 + 0x5896) = 0;
    }
    uStack_75 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7d = 0;
    uStack_79 = 0;
    sz_17 = strlen((char *)pU64_2);
    if ((int64_t)sz_17 < 0) goto LAB_18017ed87;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_58 = 1;
        ptr4_U64_24 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_88 = ptr4_U64_24;
      }
      else {
        local_58 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_24 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_24[-1] = ptr3_U64_19;
        local_88 = ptr4_U64_24;
      }
    }
    uStack_79._1_3_ = (undefined3)sz_17;
    uStack_75 = (uint32_t)(sz_17 >> 0x18);
    uStack_71._0_1_ = (uint8_t)(sz_17 >> 0x38);
    uStack_71._1_3_ = (undefined3)uVal_28;
    uStack_6d = (undefined5)(uVal_28 >> 0x18);
    func_0x1806aa960(ptr4_U64_24,pU64_2,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_24 + sz_17) = 0;
    local_c8 = (uint8_t ****)&PTR_LAB_1806bac40;
    uStack_c0 = SUB87(local_68,0);
    uStack_b9._0_1_ = (uint8_t)((uint64_t)local_68 >> 0x38);
    local_90 = &local_c8;
    local_e8 = _DAT_1806b9e65;
    uStack_e0 = (undefined3)_UNK_1806b9e6d;
    uStack_dd = (uint16_t)((uint64_t)_UNK_1806b9e6d >> 0x18);
    uStack_db = 0x8544;
    uStack_d9 = 0xfe;
    uStack_d8 = 0x54;
    uStack_d7 = 0xcac5;
    uStack_d5 = 0x392d;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x58b0) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x58b0) = 1;
      func_0x18007cd50(lVal_10 + 0x5899,&local_e8);
      func_0x180673140(&LAB_1801b78e0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x5899);
    func_0x18012bde0(fnPtr_1);
    uStack_f8 = 0;
    uStack_f6 = 0;
    uStack_f3 = 0;
    uStack_f0 = 0;
    local_108 = (uint64_t ****)0x0;
    uStack_100 = 0;
    uStack_fb = 0;
    sz_17 = strlen(fnPtr_1);
    if ((int64_t)sz_17 < 0) goto LAB_18017ed94;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_4b = 1;
        ptr4_U64_27 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_108 = ptr4_U64_27;
      }
      else {
        local_4b = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_27 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_27[-1] = ptr3_U64_19;
        local_108 = ptr4_U64_27;
      }
    }
    uStack_f8 = (uint16_t)sz_17;
    uStack_f6 = (undefined3)(sz_17 >> 0x10);
    uStack_f3 = (undefined3)(sz_17 >> 0x28);
    uStack_f0 = uVal_28;
    func_0x1806aa960(ptr4_U64_27,fnPtr_1,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_27 + sz_17) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x58bc) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x58bc) = 1;
      *(uint8_t *)(lVal_10 + 0x58ba) = 1;
      *(uint32_t *)(lVal_10 + 0x58b4) = 0x20dad467;
      *(uint16_t *)(lVal_10 + 0x58b8) = 0x2b4d;
      func_0x180673140(&LAB_1801b7910);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_10 + 0x58b4);
    if (*(char *)(lVal_10 + 0x58ba) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x45a9b135;
      *(byte *)(lVal_10 + 0x58b8) = *(byte *)(lVal_10 + 0x58b8) ^ 0x39;
      *(byte *)(lVal_10 + 0x58b9) = *(byte *)(lVal_10 + 0x58b9) ^ 0x2b;
      *(uint8_t *)(lVal_10 + 0x58ba) = 0;
    }
    uStack_d8 = 0;
    uStack_d7 = 0;
    uStack_d5 = 0;
    uStack_d3 = 0;
    uStack_d1 = 0;
    uStack_d0 = 0;
    uStack_cf = 0;
    uStack_cd = 0;
    uStack_cb = 0;
    local_e8 = (uint64_t ****)0x0;
    uStack_e0 = 0;
    uStack_dd = 0;
    uStack_db = 0;
    uStack_d9 = 0;
    sz_17 = strlen((char *)pU64_2);
    if ((int64_t)sz_17 < 0) goto LAB_18017eda1;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_57 = 1;
        ptr4_U64_25 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_e8 = ptr4_U64_25;
      }
      else {
        local_57 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_25 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_25[-1] = ptr3_U64_19;
        local_e8 = ptr4_U64_25;
      }
    }
    uStack_d8 = (uint8_t)sz_17;
    uStack_d7 = (uint16_t)(sz_17 >> 8);
    uStack_d5 = (uint16_t)(sz_17 >> 0x18);
    uStack_d3 = (uint16_t)(sz_17 >> 0x28);
    uStack_d1 = (uint8_t)(sz_17 >> 0x38);
    uStack_d0 = (uint8_t)uVal_28;
    uStack_cf = (uint16_t)(uVal_28 >> 8);
    uStack_cd = (uint16_t)(uVal_28 >> 0x18);
    uStack_cb = (undefined3)(uVal_28 >> 0x28);
    func_0x1806aa960(ptr4_U64_25,pU64_2,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_25 + sz_17) = 0;
    ptr4_U64_24 = &local_88;
    ptr5_U64_26 = &local_c8;
    ptr4_U64_25 = ptr4_U64_24;
    func_0x1801ccb00(local_68,&local_e8,&local_108,ptr5_U64_26,ptr4_U64_24,local_248,0);
    uVal_28 = CONCAT35(uStack_cb,CONCAT23(uStack_cd,CONCAT21(uStack_cf,uStack_d0)));
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr4_U64_27 = local_e8;
      if (0xfff < uVal_18) {
        ptr4_U64_27 = (uint64_t ****)local_e8[-1];
        if (0x1f < (uint64_t)((int64_t)local_e8 + (-8 - (int64_t)ptr4_U64_27)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_27,uVal_18);
    }
    if (0xf < uStack_f0) {
      uVal_28 = uStack_f0 + 1;
      ptr4_U64_27 = local_108;
      if (0xfff < uVal_28) {
        ptr4_U64_27 = (uint64_t ****)local_108[-1];
        if (0x1f < (uint64_t)((int64_t)local_108 + (-8 - (int64_t)ptr4_U64_27)))
        goto LAB_18017ed32;
        uVal_28 = uStack_f0 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_27,uVal_28);
    }
    if (local_90 != (uint8_t *****)0x0) {
      (*(func_ptr_t )(*local_90)[4])(local_90,local_90 != ptr5_U64_26);
    }
    uVal_28 = CONCAT53(uStack_6d,uStack_71._1_3_);
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr4_U64_27 = local_88;
      if (0xfff < uVal_18) {
        ptr4_U64_27 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_27)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_27,uVal_18);
    }
    local_1d0 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_1d0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_208);
    }
    pU64_21 = local_68 + 0x29;
    uVal_7 = *(uint8_t *)pU64_21;
    uStack_b5 = (uint8_t)((uint)_DAT_1806b9e8a >> 0x18);
    uStack_b4 = _UNK_1806b9e8e;
    uStack_b0 = _UNK_1806b9e92;
    uStack_ac = (uint16_t)_UNK_1806b9e96;
    uStack_aa = (uint16_t)((uint)_UNK_1806b9e96 >> 0x10);
    local_c8 = (uint8_t ****)_DAT_1806b9e7a;
    uStack_c0 = (undefined7)_UNK_1806b9e82;
    uStack_b9._0_1_ = (uint8_t)((uint64_t)_UNK_1806b9e82 >> 0x38);
    uStack_b9 = CONCAT31((int3)_DAT_1806b9e8a,(uint8_t)uStack_b9);
    uStack_a8 = 0x6855bc5a562c;
    uStack_a2 = 0xe7db;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x58e8) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x58e8) = 1;
      func_0x1801b39d0(lVal_10 + 0x58bd,&local_c8);
      func_0x180673140(&LAB_1801b7940);
    }
    uVal_15 = _UNK_1806b649c;
    uVal_14 = _UNK_1806b6498;
    uVal_13 = _UNK_1806b6494;
    uVal_12 = _DAT_1806b6490;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_10 + 0x58bd);
    if (*(char *)(lVal_10 + 0x58e5) == '\x01') {
      uVal_31 = *(uint *)(lVal_10 + 0x58c1) ^ _UNK_1806b6494;
      uVal_32 = *(uint *)(lVal_10 + 0x58c5) ^ _UNK_1806b6498;
      uVal_33 = *(uint *)(lVal_10 + 0x58c9) ^ _UNK_1806b649c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b6490;
      *(uint *)(lVal_10 + 0x58c1) = uVal_31;
      *(uint *)(lVal_10 + 0x58c5) = uVal_32;
      *(uint *)(lVal_10 + 0x58c9) = uVal_33;
      *(uint *)(lVal_10 + 0x58cd) = *(uint *)(lVal_10 + 0x58cd) ^ uVal_12;
      *(uint *)(lVal_10 + 0x58d1) = *(uint *)(lVal_10 + 0x58d1) ^ uVal_13;
      *(uint *)(lVal_10 + 0x58d5) = *(uint *)(lVal_10 + 0x58d5) ^ uVal_14;
      *(uint *)(lVal_10 + 0x58d9) = *(uint *)(lVal_10 + 0x58d9) ^ uVal_15;
      *(uint64_t *)(lVal_10 + 0x58dd) = *(uint64_t *)(lVal_10 + 0x58dd) ^ SUB168(_DAT_1806b64a0,0);
      *(uint8_t *)(lVal_10 + 0x58e5) = 0;
    }
    uStack_75 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7d = 0;
    uStack_79 = 0;
    sz_17 = strlen((char *)pU64_2);
    if ((int64_t)sz_17 < 0) goto LAB_18017edae;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_4c = 1;
        ptr4_U64_24 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_88 = ptr4_U64_24;
      }
      else {
        local_4c = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_24 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_24[-1] = ptr3_U64_19;
        local_88 = ptr4_U64_24;
      }
    }
    uStack_79._1_3_ = (undefined3)sz_17;
    uStack_75 = (uint32_t)(sz_17 >> 0x18);
    uStack_71._0_1_ = (uint8_t)(sz_17 >> 0x38);
    uStack_71._1_3_ = (undefined3)uVal_28;
    uStack_6d = (undefined5)(uVal_28 >> 0x18);
    func_0x1806aa960(ptr4_U64_24,pU64_2,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_24 + sz_17) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5900) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5900) = 1;
      *(uint8_t *)(lVal_10 + 0x58fe) = 1;
      *(uint64_t *)(lVal_10 + 0x58f0) = 0xc7d16207a9524516;
      *(uint32_t *)(lVal_10 + 0x58f8) = 0xb7584720;
      *(uint16_t *)(lVal_10 + 0x58fc) = 0xd53;
      func_0x180673140(&LAB_1801b7970);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_10 + 0x58f0);
    if (*(char *)(lVal_10 + 0x58fe) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xe7bf0d27d93d3145;
      *(uint *)(lVal_10 + 0x58f8) = *(uint *)(lVal_10 + 0x58f8) ^ 0xd93d3145;
      *(byte *)(lVal_10 + 0x58fc) = *(byte *)(lVal_10 + 0x58fc) ^ 0x27;
      *(byte *)(lVal_10 + 0x58fd) = *(byte *)(lVal_10 + 0x58fd) ^ 0xd;
      *(uint8_t *)(lVal_10 + 0x58fe) = 0;
    }
    uStack_b5 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    local_c8 = (uint8_t ****)0x0;
    uStack_c0 = 0;
    uStack_b9 = 0;
    sz_17 = strlen((char *)pU64_3);
    if ((int64_t)sz_17 < 0) goto LAB_18017edbb;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_59 = 1;
        ptr5_U64_26 = (uint8_t *****)func_0x180672de0(uVal_28 + 1);
        local_c8 = (uint8_t ****)ptr5_U64_26;
      }
      else {
        local_59 = 1;
        ptr4_U64_20 = (uint8_t ****)func_0x180672de0(uVal_28 + 0x28);
        ptr5_U64_26 = (uint8_t *****)((int64_t)ptr4_U64_20 + 0x27U & 0xffffffffffffffe0);
        ptr5_U64_26[-1] = ptr4_U64_20;
        local_c8 = (uint8_t ****)ptr5_U64_26;
      }
    }
    uStack_b9._1_3_ = (undefined3)sz_17;
    uStack_b5 = (uint8_t)(sz_17 >> 0x18);
    uStack_b4 = (uint32_t)(sz_17 >> 0x20);
    uStack_b0 = (uint32_t)uVal_28;
    uStack_ac = (uint16_t)(uVal_28 >> 0x20);
    uStack_aa = (uint16_t)(uVal_28 >> 0x30);
    func_0x1806aa960(ptr5_U64_26,pU64_3,sz_17);
    *(uint8_t *)((int64_t)ptr5_U64_26 + sz_17) = 0;
    uVal_34 = CONCAT71((int7)((uint64_t)ptr4_U64_25 >> 8),uVal_7);
    ptr5_U64_26 = &local_c8;
    ptr4_U64_24 = &local_88;
    func_0x1801ccd70(local_68,ptr5_U64_26,ptr4_U64_24,pU64_21,uVal_34,local_208,0);
    uVal_28 = CONCAT26(uStack_aa,CONCAT24(uStack_ac,uStack_b0));
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr5_U64_23 = (uint8_t *****)local_c8;
      if (0xfff < uVal_18) {
        ptr5_U64_23 = (uint8_t *****)local_c8[-1];
        if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr5_U64_23)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr5_U64_23,uVal_18);
    }
    uVal_28 = CONCAT53(uStack_6d,uStack_71._1_3_);
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr4_U64_25 = local_88;
      if (0xfff < uVal_18) {
        ptr4_U64_25 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_25)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_25,uVal_18);
    }
    local_2c8 = &PTR_LAB_1806bac70;
    local_2c0 = local_68;
    local_290 = &local_2c8;
    uVal_7 = *(uint8_t *)((int64_t)local_68 + 0x149);
    uStack_b5 = (uint8_t)((uint)_DAT_1806b9eb2 >> 0x18);
    uStack_b4 = _UNK_1806b9eb6;
    uStack_b0 = _UNK_1806b9eba;
    uStack_ac = (uint16_t)_UNK_1806b9ebe;
    local_c8 = (uint8_t ****)_DAT_1806b9ea2;
    uStack_c0 = (undefined7)_UNK_1806b9eaa;
    uStack_b9._0_1_ = (uint8_t)((uint64_t)_UNK_1806b9eaa >> 0x38);
    uStack_b9 = CONCAT31((int3)_DAT_1806b9eb2,(uint8_t)uStack_b9);
    uStack_aa = 0xd001;
    uStack_a8 = 0x3db6e211b74;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5928) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5928) = 1;
      func_0x180086e20(lVal_10 + 0x5901,&local_c8);
      func_0x180673140(&LAB_1801b79a0);
    }
    uVal_15 = _UNK_1806b2d8c;
    uVal_14 = _UNK_1806b2d88;
    uVal_13 = _UNK_1806b2d84;
    uVal_12 = _DAT_1806b2d80;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_10 + 0x5901);
    if (*(char *)(lVal_10 + 0x5927) == '\x01') {
      uVal_31 = *(uint *)(lVal_10 + 0x5905) ^ _UNK_1806b2d84;
      uVal_32 = *(uint *)(lVal_10 + 0x5909) ^ _UNK_1806b2d88;
      uVal_33 = *(uint *)(lVal_10 + 0x590d) ^ _UNK_1806b2d8c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b2d80;
      *(uint *)(lVal_10 + 0x5905) = uVal_31;
      *(uint *)(lVal_10 + 0x5909) = uVal_32;
      *(uint *)(lVal_10 + 0x590d) = uVal_33;
      *(uint *)(lVal_10 + 0x5911) = *(uint *)(lVal_10 + 0x5911) ^ uVal_12;
      *(uint *)(lVal_10 + 0x5915) = *(uint *)(lVal_10 + 0x5915) ^ uVal_13;
      *(uint *)(lVal_10 + 0x5919) = *(uint *)(lVal_10 + 0x5919) ^ uVal_14;
      *(uint *)(lVal_10 + 0x591d) = *(uint *)(lVal_10 + 0x591d) ^ uVal_15;
      *(uint *)(lVal_10 + 0x5921) = *(uint *)(lVal_10 + 0x5921) ^ 0xb4d771d;
      *(byte *)(lVal_10 + 0x5925) = *(byte *)(lVal_10 + 0x5925) ^ 0xbf;
      *(byte *)(lVal_10 + 0x5926) = *(byte *)(lVal_10 + 0x5926) ^ 3;
      *(uint8_t *)(lVal_10 + 0x5927) = 0;
    }
    uStack_75 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7d = 0;
    uStack_79 = 0;
    sz_17 = strlen((char *)pU64_2);
    if ((int64_t)sz_17 < 0) goto LAB_18017edc8;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_4e = 1;
        ptr4_U64_24 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_88 = ptr4_U64_24;
      }
      else {
        local_4e = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_24 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_24[-1] = ptr3_U64_19;
        local_88 = ptr4_U64_24;
      }
    }
    uStack_79._1_3_ = (undefined3)sz_17;
    uStack_75 = (uint32_t)(sz_17 >> 0x18);
    uStack_71._0_1_ = (uint8_t)(sz_17 >> 0x38);
    uStack_71._1_3_ = (undefined3)uVal_28;
    uStack_6d = (undefined5)(uVal_28 >> 0x18);
    func_0x1806aa960(ptr4_U64_24,pU64_2,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_24 + sz_17) = 0;
    local_108 = _DAT_1806b9ec8;
    uStack_100 = (undefined5)_UNK_1806b9ed0;
    uStack_fb = 0xc94523;
    uStack_f8 = 0x107c;
    uStack_f6 = 0xbf6522;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5940) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5940) = 1;
      func_0x18007cd50(lVal_10 + 0x5929,&local_108);
      func_0x180673140(&LAB_1801b79d0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x5929);
    func_0x1801bf490(fnPtr_1);
    uStack_b5 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    local_c8 = (uint8_t ****)0x0;
    uStack_c0 = 0;
    uStack_b9 = 0;
    sz_17 = strlen(fnPtr_1);
    if ((int64_t)sz_17 < 0) goto LAB_18017edd5;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_4d = 1;
        ptr5_U64_26 = (uint8_t *****)func_0x180672de0(uVal_28 + 1);
        local_c8 = (uint8_t ****)ptr5_U64_26;
      }
      else {
        local_4d = 1;
        ptr4_U64_20 = (uint8_t ****)func_0x180672de0(uVal_28 + 0x28);
        ptr5_U64_26 = (uint8_t *****)((int64_t)ptr4_U64_20 + 0x27U & 0xffffffffffffffe0);
        ptr5_U64_26[-1] = ptr4_U64_20;
        local_c8 = (uint8_t ****)ptr5_U64_26;
      }
    }
    pU64_21 = local_68;
    lVal_10 = (int64_t)local_68 + 0x149;
    uStack_b9._1_3_ = (undefined3)sz_17;
    uStack_b5 = (uint8_t)(sz_17 >> 0x18);
    uStack_b4 = (uint32_t)(sz_17 >> 0x20);
    uStack_b0 = (uint32_t)uVal_28;
    uStack_ac = (uint16_t)(uVal_28 >> 0x20);
    uStack_aa = (uint16_t)(uVal_28 >> 0x30);
    func_0x1806aa960(ptr5_U64_26,fnPtr_1,sz_17);
    *(uint8_t *)((int64_t)ptr5_U64_26 + sz_17) = 0;
    uVal_34 = CONCAT71((int7)((uint64_t)uVal_34 >> 8),uVal_7);
    ptr5_U64_26 = &local_c8;
    ptr4_U64_24 = &local_88;
    func_0x1801ccd70(pU64_21,ptr5_U64_26,ptr4_U64_24,lVal_10,uVal_34,&local_2c8,0);
    uVal_28 = CONCAT26(uStack_aa,CONCAT24(uStack_ac,uStack_b0));
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr5_U64_23 = (uint8_t *****)local_c8;
      if (0xfff < uVal_18) {
        ptr5_U64_23 = (uint8_t *****)local_c8[-1];
        if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr5_U64_23)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr5_U64_23,uVal_18);
    }
    uVal_28 = CONCAT53(uStack_6d,uStack_71._1_3_);
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr4_U64_25 = local_88;
      if (0xfff < uVal_18) {
        ptr4_U64_25 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_25)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_25,uVal_18);
    }
    local_288 = &PTR_LAB_1806bac70;
    local_280 = local_68;
    local_250 = &local_288;
    uVal_7 = *(uint8_t *)((int64_t)local_68 + 0x14a);
    uStack_b5 = (uint8_t)((uint)_DAT_1806b9eed >> 0x18);
    uStack_b4 = _UNK_1806b9ef1;
    uStack_b0 = _UNK_1806b9ef5;
    uStack_ac = (uint16_t)_UNK_1806b9ef9;
    uStack_aa = (uint16_t)((uint)_UNK_1806b9ef9 >> 0x10);
    local_c8 = (uint8_t ****)_DAT_1806b9edd;
    uStack_c0 = (undefined7)_UNK_1806b9ee5;
    uStack_b9._0_1_ = (uint8_t)((uint64_t)_UNK_1806b9ee5 >> 0x38);
    uStack_b9 = CONCAT31((int3)_DAT_1806b9eed,(uint8_t)uStack_b9);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5964) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5964) = 1;
      func_0x18008f8e0(lVal_10 + 0x5941,&local_c8);
      func_0x180673140(&LAB_1801b7a00);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x5941);
    func_0x1801bf4f0(fnPtr_1);
    uStack_75 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7d = 0;
    uStack_79 = 0;
    sz_17 = strlen(fnPtr_1);
    if ((int64_t)sz_17 < 0) goto LAB_18017ede2;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_4f = 1;
        ptr4_U64_24 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_88 = ptr4_U64_24;
      }
      else {
        local_4f = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_24 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_24[-1] = ptr3_U64_19;
        local_88 = ptr4_U64_24;
      }
    }
    uStack_79._1_3_ = (undefined3)sz_17;
    uStack_75 = (uint32_t)(sz_17 >> 0x18);
    uStack_71._0_1_ = (uint8_t)(sz_17 >> 0x38);
    uStack_71._1_3_ = (undefined3)uVal_28;
    uStack_6d = (undefined5)(uVal_28 >> 0x18);
    func_0x1806aa960(ptr4_U64_24,fnPtr_1,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_24 + sz_17) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5980) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5980) = 1;
      uVal_16 = _UNK_1806b64b8;
      *(uint64_t *)(lVal_10 + 0x5970) = _DAT_1806b64b0;
      *(uint64_t *)(lVal_10 + 0x5978) = uVal_16;
      func_0x180673140(&LAB_1801b7a30);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_4 = (uint8_t (*)[16])(lVal_10 + 0x5970);
    if (*(char *)(lVal_10 + 0x597f) == '\x01') {
      uVal_35 = *(uint32_t *)(lVal_10 + 0x5978);
      auArr_29 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_35 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_35 >> 0x10),uVal_35)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_10 + 0x597d) >> 8)),
                                                 (char)((uint)uVal_35 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_10 + 0x597d),(char)uVal_35
                                                ))),_DAT_1806ae110);
      auArr_29._8_8_ =
           auArr_29._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_10 + 0x597c) << 0x20;
      auArr_29 = pblendw(auArr_29,*pArr16_4,0xf);
      *pArr16_4 = auArr_29 ^ _DAT_1806b64c0;
    }
    uStack_b5 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    local_c8 = (uint8_t ****)0x0;
    uStack_c0 = 0;
    uStack_b9 = 0;
    sz_17 = strlen((char *)pArr16_4);
    if ((int64_t)sz_17 < 0) goto LAB_18017edef;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_5a = 1;
        ptr5_U64_26 = (uint8_t *****)func_0x180672de0(uVal_28 + 1);
        local_c8 = (uint8_t ****)ptr5_U64_26;
      }
      else {
        local_5a = 1;
        ptr4_U64_20 = (uint8_t ****)func_0x180672de0(uVal_28 + 0x28);
        ptr5_U64_26 = (uint8_t *****)((int64_t)ptr4_U64_20 + 0x27U & 0xffffffffffffffe0);
        ptr5_U64_26[-1] = ptr4_U64_20;
        local_c8 = (uint8_t ****)ptr5_U64_26;
      }
    }
    pU64_21 = local_68;
    lVal_10 = (int64_t)local_68 + 0x14a;
    uStack_b9._1_3_ = (undefined3)sz_17;
    uStack_b5 = (uint8_t)(sz_17 >> 0x18);
    uStack_b4 = (uint32_t)(sz_17 >> 0x20);
    uStack_b0 = (uint32_t)uVal_28;
    uStack_ac = (uint16_t)(uVal_28 >> 0x20);
    uStack_aa = (uint16_t)(uVal_28 >> 0x30);
    func_0x1806aa960(ptr5_U64_26,pArr16_4,sz_17);
    *(uint8_t *)((int64_t)ptr5_U64_26 + sz_17) = 0;
    uVal_34 = CONCAT71((int7)((uint64_t)uVal_34 >> 8),uVal_7);
    ptr5_U64_26 = &local_c8;
    ptr4_U64_24 = &local_88;
    func_0x1801ccd70(pU64_21,ptr5_U64_26,ptr4_U64_24,lVal_10,uVal_34,&local_288,0);
    uVal_28 = CONCAT26(uStack_aa,CONCAT24(uStack_ac,uStack_b0));
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr5_U64_23 = (uint8_t *****)local_c8;
      if (0xfff < uVal_18) {
        ptr5_U64_23 = (uint8_t *****)local_c8[-1];
        if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr5_U64_23)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr5_U64_23,uVal_18);
    }
    uVal_28 = CONCAT53(uStack_6d,uStack_71._1_3_);
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr4_U64_25 = local_88;
      if (0xfff < uVal_18) {
        ptr4_U64_25 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_25)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_25,uVal_18);
    }
    local_190 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_190 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_1c8);
    }
    pU64_5 = (uint8_t *)((int64_t)local_68 + 0x14b);
    uVal_7 = *pU64_5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5984) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5984) = 1;
      *(uint16_t *)(lVal_10 + 0x5981) = 0x145;
      func_0x180673140(&LAB_1801b7a60);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (byte *)(lVal_10 + 0x5981);
    if (*(char *)(lVal_10 + 0x5982) == '\x01') {
      *_Str = *_Str ^ 0x45;
      *(uint8_t *)(lVal_10 + 0x5982) = 0;
    }
    uStack_b5 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    local_c8 = (uint8_t ****)0x0;
    uStack_c0 = 0;
    uStack_b9 = 0;
    sz_17 = strlen((char *)_Str);
    if ((int64_t)sz_17 < 0) goto LAB_18017edfc;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_5b = 1;
        ptr5_U64_26 = (uint8_t *****)func_0x180672de0(uVal_28 + 1);
        local_c8 = (uint8_t ****)ptr5_U64_26;
      }
      else {
        local_5b = 1;
        ptr4_U64_20 = (uint8_t ****)func_0x180672de0(uVal_28 + 0x28);
        ptr5_U64_26 = (uint8_t *****)((int64_t)ptr4_U64_20 + 0x27U & 0xffffffffffffffe0);
        ptr5_U64_26[-1] = ptr4_U64_20;
        local_c8 = (uint8_t ****)ptr5_U64_26;
      }
    }
    uStack_b9._1_3_ = (undefined3)sz_17;
    uStack_b5 = (uint8_t)(sz_17 >> 0x18);
    uStack_b4 = (uint32_t)(sz_17 >> 0x20);
    uStack_b0 = (uint32_t)uVal_28;
    uStack_ac = (uint16_t)(uVal_28 >> 0x20);
    uStack_aa = (uint16_t)(uVal_28 >> 0x30);
    func_0x1806aa960(ptr5_U64_26,_Str,sz_17);
    *(uint8_t *)((int64_t)ptr5_U64_26 + sz_17) = 0;
    local_108 = _DAT_1806b9efd;
    uStack_100 = (undefined5)_UNK_1806b9f05;
    uStack_fb = (undefined3)((uint64_t)_UNK_1806b9f05 >> 0x28);
    uStack_f8 = 0x8936;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5998) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x5998) = 1;
      func_0x18007c170(lVal_10 + 0x5985,&local_108);
      func_0x180673140(&LAB_1801b7a80);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x5985);
    func_0x1801bf520(fnPtr_1);
    uStack_75 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7d = 0;
    uStack_79 = 0;
    sz_17 = strlen(fnPtr_1);
    if ((int64_t)sz_17 < 0) goto LAB_18017ee09;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_50 = 1;
        ptr4_U64_24 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_88 = ptr4_U64_24;
      }
      else {
        local_50 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_24 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_24[-1] = ptr3_U64_19;
        local_88 = ptr4_U64_24;
      }
    }
    uStack_79._1_3_ = (undefined3)sz_17;
    uStack_75 = (uint32_t)(sz_17 >> 0x18);
    uStack_71._0_1_ = (uint8_t)(sz_17 >> 0x38);
    uStack_71._1_3_ = (undefined3)uVal_28;
    uStack_6d = (undefined5)(uVal_28 >> 0x18);
    func_0x1806aa960(ptr4_U64_24,fnPtr_1,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_24 + sz_17) = 0;
    uVal_34 = CONCAT71((int7)((uint64_t)uVal_34 >> 8),uVal_7);
    ptr4_U64_24 = &local_88;
    ptr5_U64_26 = &local_c8;
    func_0x1801ccd70(local_68,ptr4_U64_24,ptr5_U64_26,pU64_5,uVal_34,local_1c8,0);
    uVal_35 = (uint32_t)((uint64_t)uVal_34 >> 0x20);
    uVal_28 = CONCAT53(uStack_6d,uStack_71._1_3_);
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr4_U64_25 = local_88;
      if (0xfff < uVal_18) {
        ptr4_U64_25 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_25)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_25,uVal_18);
    }
    uVal_28 = CONCAT26(uStack_aa,CONCAT24(uStack_ac,uStack_b0));
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr5_U64_23 = (uint8_t *****)local_c8;
      if (0xfff < uVal_18) {
        ptr5_U64_23 = (uint8_t *****)local_c8[-1];
        if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr5_U64_23)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr5_U64_23,uVal_18);
    }
    local_150 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_150 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_188);
    }
    pU64_6 = (uint32_t *)((int64_t)local_68 + 0x14c);
    uVal_8 = *pU64_6;
    uStack_b5 = (uint8_t)((uint)_DAT_1806b9f1f >> 0x18);
    uStack_b4 = _UNK_1806b9f23;
    uStack_b0 = _UNK_1806b9f27;
    uStack_ac = (uint16_t)_UNK_1806b9f2b;
    uStack_aa = (uint16_t)((uint)_UNK_1806b9f2b >> 0x10);
    local_c8 = (uint8_t ****)_DAT_1806b9f0f;
    uStack_c0 = (undefined7)_UNK_1806b9f17;
    uStack_b9._0_1_ = (uint8_t)((uint64_t)_UNK_1806b9f17 >> 0x38);
    uStack_b9 = CONCAT31((int3)_DAT_1806b9f1f,(uint8_t)uStack_b9);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x59bc) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x59bc) = 1;
      func_0x18008f8e0(lVal_10 + 0x5999,&local_c8);
      func_0x180673140(&LAB_1801b7ab0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x5999);
    func_0x1801bf540(fnPtr_1);
    uStack_75 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7d = 0;
    uStack_79 = 0;
    sz_17 = strlen(fnPtr_1);
    if ((int64_t)sz_17 < 0) goto LAB_18017ee16;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_51 = 1;
        ptr4_U64_24 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
        local_88 = ptr4_U64_24;
      }
      else {
        local_51 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
        ptr4_U64_24 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_24[-1] = ptr3_U64_19;
        local_88 = ptr4_U64_24;
      }
    }
    uStack_79._1_3_ = (undefined3)sz_17;
    uStack_75 = (uint32_t)(sz_17 >> 0x18);
    uStack_71._0_1_ = (uint8_t)(sz_17 >> 0x38);
    uStack_71._1_3_ = (undefined3)uVal_28;
    uStack_6d = (undefined5)(uVal_28 >> 0x18);
    func_0x1806aa960(ptr4_U64_24,fnPtr_1,sz_17);
    *(uint8_t *)((int64_t)ptr4_U64_24 + sz_17) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x59d0) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x59d0) = 1;
      uVal_34 = _UNK_1806b64d8;
      *(uint64_t *)(lVal_10 + 0x59c0) = _DAT_1806b64d0;
      *(uint64_t *)(lVal_10 + 0x59c8) = uVal_34;
      func_0x180673140(&LAB_1801b7ae0);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_4 = (uint8_t (*)[16])(lVal_10 + 0x59c0);
    if (*(char *)(lVal_10 + 0x59cf) == '\x01') {
      uVal_9 = *(uint32_t *)(lVal_10 + 0x59c8);
      auArr_29 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_9 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_9 >> 0x10),uVal_9)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_10 + 0x59cd) >> 8)),
                                                 (char)((uint)uVal_9 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_10 + 0x59cd),(char)uVal_9)
                                       )),_DAT_1806ae110);
      auArr_30._0_8_ = auArr_29._0_8_;
      auArr_30._8_8_ =
           auArr_29._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_10 + 0x59cc) << 0x20;
      auArr_29 = pblendw(auArr_30,*pArr16_4,0xf);
      *pArr16_4 = auArr_29 ^ _DAT_1806b5250;
    }
    uStack_b5 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    local_c8 = (uint8_t ****)0x0;
    uStack_c0 = 0;
    uStack_b9 = 0;
    sz_17 = strlen((char *)pArr16_4);
    if ((int64_t)sz_17 < 0) goto LAB_18017ee23;
    uVal_28 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_5c = 1;
        ptr5_U64_26 = (uint8_t *****)func_0x180672de0(uVal_28 + 1);
        local_c8 = (uint8_t ****)ptr5_U64_26;
      }
      else {
        local_5c = 1;
        ptr4_U64_20 = (uint8_t ****)func_0x180672de0(uVal_28 + 0x28);
        ptr5_U64_26 = (uint8_t *****)((int64_t)ptr4_U64_20 + 0x27U & 0xffffffffffffffe0);
        ptr5_U64_26[-1] = ptr4_U64_20;
        local_c8 = (uint8_t ****)ptr5_U64_26;
      }
    }
    uStack_b9._1_3_ = (undefined3)sz_17;
    uStack_b5 = (uint8_t)(sz_17 >> 0x18);
    uStack_b4 = (uint32_t)(sz_17 >> 0x20);
    uStack_b0 = (uint32_t)uVal_28;
    uStack_ac = (uint16_t)(uVal_28 >> 0x20);
    uStack_aa = (uint16_t)(uVal_28 >> 0x30);
    func_0x1806aa960(ptr5_U64_26,pArr16_4,sz_17);
    *(uint8_t *)((int64_t)ptr5_U64_26 + sz_17) = 0;
    uVal_34 = CONCAT44(uVal_35,uVal_8);
    ptr5_U64_26 = &local_c8;
    ptr4_U64_24 = &local_88;
    func_0x1801d3800(local_68,ptr5_U64_26,ptr4_U64_24,pU64_6,uVal_34,local_188,0);
    uVal_35 = (uint32_t)((uint64_t)uVal_34 >> 0x20);
    uVal_28 = CONCAT26(uStack_aa,CONCAT24(uStack_ac,uStack_b0));
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr5_U64_23 = (uint8_t *****)local_c8;
      if (0xfff < uVal_18) {
        ptr5_U64_23 = (uint8_t *****)local_c8[-1];
        if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr5_U64_23)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr5_U64_23,uVal_18);
    }
    uVal_28 = CONCAT53(uStack_6d,uStack_71._1_3_);
    if (0xf < uVal_28) {
      uVal_18 = uVal_28 + 1;
      ptr4_U64_25 = local_88;
      if (0xfff < uVal_18) {
        ptr4_U64_25 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_25)))
        goto LAB_18017ed32;
        uVal_18 = uVal_28 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_25,uVal_18);
    }
    local_110 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_110 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_148);
    }
    pU64_21 = local_68 + 0x2a;
    uVal_8 = *(uint32_t *)pU64_21;
    uStack_75 = _UNK_1806b9f42;
    uStack_71 = _UNK_1806b9f46;
    local_88 = _DAT_1806b9f2f;
    uStack_80 = _UNK_1806b9f37;
    uStack_7d = _DAT_1806b9f3a;
    uStack_79 = _UNK_1806b9f3e;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x59f0) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x59f0) = 1;
      func_0x18007c9b0(lVal_10 + 0x59d1,&local_88);
      func_0x180673140(&LAB_1801b7b10);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x59d1);
    func_0x1801bf570(fnPtr_1);
    local_c8 = (uint8_t ****)0x0;
    uStack_c0 = 0;
    uStack_b9 = uStack_b9 & 0xffffff00;
    sz_17 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_17) {
      uVal_28 = 0xf;
      if (0xf < sz_17) {
        uVal_18 = sz_17 | 0xf;
        uVal_28 = 0x16;
        if (0x16 < uVal_18) {
          uVal_28 = uVal_18;
        }
        if (uVal_18 < 0xfff) {
          local_52 = 1;
          ptr5_U64_26 = (uint8_t *****)func_0x180672de0(uVal_28 + 1);
          local_c8 = (uint8_t ****)ptr5_U64_26;
        }
        else {
          local_52 = 1;
          ptr4_U64_20 = (uint8_t ****)func_0x180672de0(uVal_28 + 0x28);
          ptr5_U64_26 = (uint8_t *****)((int64_t)ptr4_U64_20 + 0x27U & 0xffffffffffffffe0);
          ptr5_U64_26[-1] = ptr4_U64_20;
          local_c8 = (uint8_t ****)ptr5_U64_26;
        }
      }
      uStack_b9._1_3_ = (undefined3)sz_17;
      uStack_b5 = (uint8_t)(sz_17 >> 0x18);
      uStack_b4 = (uint32_t)(sz_17 >> 0x20);
      uStack_b0 = (uint32_t)uVal_28;
      uStack_ac = (uint16_t)(uVal_28 >> 0x20);
      uStack_aa = (uint16_t)(uVal_28 >> 0x30);
      func_0x1806aa960(ptr5_U64_26,fnPtr_1,sz_17);
      *(uint8_t *)((int64_t)ptr5_U64_26 + sz_17) = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x5a04) == '\0') {
        lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_10 + 0x5a04) = 1;
        *(uint8_t *)(lVal_10 + 0x5a02) = 1;
        *(uint64_t *)(lVal_10 + 0x59f8) = 0x9038c51306147067;
        *(uint16_t *)(lVal_10 + 0x5a00) = 0x154c;
        func_0x180673140(&LAB_1801b7b40);
      }
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_3 = (uint64_t *)(lVal_10 + 0x59f8);
      if (*(char *)(lVal_10 + 0x5a02) == '\x01') {
        *pU64_3 = *pU64_3 ^ 0xf553e56763671535;
        *(byte *)(lVal_10 + 0x5a00) = *(byte *)(lVal_10 + 0x5a00) ^ 0x35;
        *(byte *)(lVal_10 + 0x5a01) = *(byte *)(lVal_10 + 0x5a01) ^ 0x15;
        *(uint8_t *)(lVal_10 + 0x5a02) = 0;
      }
      local_88 = (uint64_t ****)0x0;
      uStack_80 = 0;
      uStack_7d = 0;
      uStack_79 = uStack_79 & 0xffffff00;
      sz_17 = strlen((char *)pU64_3);
      if (-1 < (int64_t)sz_17) {
        uVal_28 = 0xf;
        if (0xf < sz_17) {
          uVal_18 = sz_17 | 0xf;
          uVal_28 = 0x16;
          if (0x16 < uVal_18) {
            uVal_28 = uVal_18;
          }
          if (uVal_18 < 0xfff) {
            local_5d = 1;
            ptr4_U64_24 = (uint64_t ****)func_0x180672de0(uVal_28 + 1);
            local_88 = ptr4_U64_24;
          }
          else {
            local_5d = 1;
            ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_28 + 0x28);
            ptr4_U64_24 = (uint64_t ****)((int64_t)ptr3_U64_19 + 0x27U & 0xffffffffffffffe0);
            ptr4_U64_24[-1] = ptr3_U64_19;
            local_88 = ptr4_U64_24;
          }
        }
        uStack_79._1_3_ = (undefined3)sz_17;
        uStack_75 = (uint32_t)(sz_17 >> 0x18);
        uStack_71._0_1_ = (uint8_t)(sz_17 >> 0x38);
        uStack_71._1_3_ = (undefined3)uVal_28;
        uStack_6d = (undefined5)(uVal_28 >> 0x18);
        func_0x1806aa960(ptr4_U64_24,pU64_3,sz_17);
        *(uint8_t *)((int64_t)ptr4_U64_24 + sz_17) = 0;
        func_0x1801d3800(local_68,&local_88,&local_c8,pU64_21,CONCAT44(uVal_35,uVal_8),local_148,0);
        uVal_28 = CONCAT53(uStack_6d,uStack_71._1_3_);
        if (0xf < uVal_28) {
          uVal_18 = uVal_28 + 1;
          ptr4_U64_24 = local_88;
          if (0xfff < uVal_18) {
            ptr4_U64_24 = (uint64_t ****)local_88[-1];
            if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_24)))
            goto LAB_18017ed32;
            uVal_18 = uVal_28 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_24,uVal_18);
        }
        uVal_28 = CONCAT26(uStack_aa,CONCAT24(uStack_ac,uStack_b0));
        if (0xf < uVal_28) {
          uVal_18 = uVal_28 + 1;
          ptr5_U64_26 = (uint8_t *****)local_c8;
          if (0xfff < uVal_18) {
            ptr5_U64_26 = (uint8_t *****)local_c8[-1];
            if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr5_U64_26))) {
LAB_18017ed32:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_18 = uVal_28 + 0x28;
          }
          thunk_FUN_180695dd0(ptr5_U64_26,uVal_18);
        }
        return local_68;
      }
      goto LAB_18017ee3d;
    }
  }
  local_52 = 1;
  func_0x18007ba70();
LAB_18017ee3d:
  local_5d = 1;
  func_0x18007ba70();
  fnPtr_11 = (func_ptr_t )swi(3);
  pU64_21 = (uint64_t *)(*fnPtr_11)();
  return pU64_21;
}

// Unwind@18017ee50
void Unwind_18017ee50(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x178);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x140));
    *(uint64_t *)(param_2 + 0x178) = 0;
  }
  return;
}

// Unwind@18017eeb0
void Unwind_18017eeb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1b8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x180));
    *(uint64_t *)(param_2 + 0x1b8) = 0;
  }
  return;
}

// Unwind@18017ef10
void Unwind_18017ef10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x58e8) = 0;
  *(uint8_t *)(param_2 + 0x33c) = 1;
  return;
}

// Unwind@18017ef60
void Unwind_18017ef60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1f8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c0));
    *(uint64_t *)(param_2 + 0x1f8) = 0;
  }
  return;
}

// Unwind@18017efc0
void Unwind_18017efc0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x238);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x200));
    *(uint64_t *)(param_2 + 0x238) = 0;
  }
  return;
}

// Unwind@18017f020
void Unwind_18017f020(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x59bc) = 0;
  *(uint8_t *)(param_2 + 0x337) = 1;
  return;
}

// Unwind@18017f070
void Unwind_18017f070(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x278);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x240));
    *(uint64_t *)(param_2 + 0x278) = 0;
  }
  return;
}

// Unwind@18017f0d0
void Unwind_18017f0d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x59f0) = 0;
  *(uint8_t *)(param_2 + 0x336) = 1;
  return;
}

// Unwind@18017f120
void Unwind_18017f120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2c0);
  return;
}

// Unwind@18017f160
void Unwind_18017f160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2a0);
  *(uint8_t *)(param_2 + 0x335) = 0;
  return;
}

// Unwind@18017f1a0
void Unwind_18017f1a0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x335);
  func_0x180001e70(param_2 + 0x280);
  *(uint8_t *)(param_2 + 0x33f) = uVal_1;
  return;
}

// Unwind@18017f1f0
void Unwind_18017f1f0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  int64_t *pLong_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x33f);
  pLong_2 = *(int64_t **)(param_2 + 0x2f8);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != (int64_t *)(param_2 + 0x2c0));
  }
  func_0x180001e70(param_2 + 0x300);
  *(byte *)(param_2 + 0x334) = bFlag_1 & 1;
  return;
}

// Unwind@18017f260
void Unwind_18017f260(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x334) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@18017f2c0
void Unwind_18017f2c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2a0);
  *(uint8_t *)(param_2 + 0x333) = 0;
  return;
}

// Unwind@18017f300
void Unwind_18017f300(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x333);
  func_0x180001e70(param_2 + 0x280);
  *(uint8_t *)(param_2 + 0x33e) = uVal_1;
  return;
}

// Unwind@18017f350
void Unwind_18017f350(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  int64_t *pLong_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x33e);
  pLong_2 = *(int64_t **)(param_2 + 0x2f8);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != (int64_t *)(param_2 + 0x2c0));
  }
  func_0x180001e70(param_2 + 0x300);
  *(byte *)(param_2 + 0x332) = bFlag_1 & 1;
  return;
}

// Unwind@18017f3c0
void Unwind_18017f3c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x332) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@18017f420
void Unwind_18017f420(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2a0);
  *(uint8_t *)(param_2 + 0x331) = 0;
  return;
}

// Unwind@18017f460
void Unwind_18017f460(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x331);
  func_0x180001e70(param_2 + 0x280);
  *(uint8_t *)(param_2 + 0x33d) = uVal_1;
  return;
}

// Unwind@18017f4b0
void Unwind_18017f4b0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  int64_t *pLong_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x33d);
  pLong_2 = *(int64_t **)(param_2 + 0x2f8);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != (int64_t *)(param_2 + 0x2c0));
  }
  func_0x180001e70(param_2 + 0x300);
  *(byte *)(param_2 + 0x330) = bFlag_1 & 1;
  return;
}

// Unwind@18017f520
void Unwind_18017f520(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x330) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x178), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x140));
    *(uint64_t *)(param_2 + 0x178) = 0;
  }
  return;
}

// Unwind@18017f580
void Unwind_18017f580(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2c0);
  *(uint8_t *)(param_2 + 0x32f) = 0;
  return;
}

// Unwind@18017f5c0
void Unwind_18017f5c0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x32f);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x33c) = uVal_1;
  return;
}

// Unwind@18017f610
void Unwind_18017f610(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x33c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1b8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x180));
    *(uint64_t *)(param_2 + 0x1b8) = 0;
  }
  return;
}

// Unwind@18017f670
void Unwind_18017f670(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2c0);
  *(uint8_t *)(param_2 + 0x33b) = 0;
  return;
}

// Unwind@18017f6b0
void Unwind_18017f6b0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x33b);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x33a) = uVal_1;
  return;
}

// Unwind@18017f700
void Unwind_18017f700(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x33a) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@18017f760
void Unwind_18017f760(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2c0);
  *(uint8_t *)(param_2 + 0x32e) = 0;
  return;
}

// Unwind@18017f7a0
void Unwind_18017f7a0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x32e);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x339) = uVal_1;
  return;
}

// Unwind@18017f7f0
void Unwind_18017f7f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x339) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x138), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x100));
    *(uint64_t *)(param_2 + 0x138) = 0;
  }
  return;
}

// Unwind@18017f850
void Unwind_18017f850(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x338) = 0;
  return;
}

// Unwind@18017f890
void Unwind_18017f890(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x338);
  func_0x180001e70(param_2 + 0x2c0);
  *(uint8_t *)(param_2 + 0x32d) = uVal_1;
  return;
}

// Unwind@18017f8e0
void Unwind_18017f8e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x32d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1f8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c0));
    *(uint64_t *)(param_2 + 0x1f8) = 0;
  }
  return;
}

// Unwind@18017f940
void Unwind_18017f940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2c0);
  *(uint8_t *)(param_2 + 0x32c) = 0;
  return;
}

// Unwind@18017f980
void Unwind_18017f980(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x32c);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x337) = uVal_1;
  return;
}

// Unwind@18017f9d0
void Unwind_18017f9d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x337) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x238), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x200));
    *(uint64_t *)(param_2 + 0x238) = 0;
  }
  return;
}

// Unwind@18017fa30
void Unwind_18017fa30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x32b) = 0;
  return;
}

// Unwind@18017fa70
void Unwind_18017fa70(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x32b);
  func_0x180001e70(param_2 + 0x2c0);
  *(uint8_t *)(param_2 + 0x336) = uVal_1;
  return;
}

// Unwind@18017fac0
void Unwind_18017fac0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x336) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x278), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x240));
    *(uint64_t *)(param_2 + 0x278) = 0;
  }
  return;
}

// Unwind@18017fb20
void Unwind_18017fb20(uint64_t param_1,int64_t param_2)
{
  func_0x180154cc0(*(uint64_t *)(param_2 + 800));
  return;
}

// Unwind@18017fb60
void Unwind_18017fb60(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x581c) = 0;
  return;
}

// Unwind@18017fbb0
void Unwind_18017fbb0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5848) = 0;
  *(uint8_t *)(param_2 + 0x33f) = 1;
  return;
}

// Unwind@18017fc00
void Unwind_18017fc00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5880) = 0;
  *(uint8_t *)(param_2 + 0x33e) = 1;
  return;
}

// Unwind@18017fc50
void Unwind_18017fc50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x58b0) = 0;
  *(uint8_t *)(param_2 + 0x33d) = 1;
  return;
}

// Unwind@18017fca0
void Unwind_18017fca0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5928) = 0;
  *(uint8_t *)(param_2 + 0x33a) = 1;
  return;
}

// Unwind@18017fcf0
void Unwind_18017fcf0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5940) = 0;
  *(uint8_t *)(param_2 + 0x33b) = 1;
  return;
}

// Unwind@18017fd40
void Unwind_18017fd40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5964) = 0;
  *(uint8_t *)(param_2 + 0x339) = 1;
  return;
}

// Unwind@18017fd90
void Unwind_18017fd90(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5998) = 0;
  *(uint8_t *)(param_2 + 0x338) = 1;
  return;
}

// Unwind@180180090
void Unwind_180180090(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5a2c) = 0;
  return;
}

// Unwind@180180280
void Unwind_180180280(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x60);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x28));
  }
  return;
}

// Unwind@180180680
void Unwind_180180680(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180180fb0
void Unwind_180180fb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x98);
  return;
}

// Unwind@180180ff0
void Unwind_180180ff0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180181030
void Unwind_180181030(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180181070
void Unwind_180181070(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1801810b0
void Unwind_1801810b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x98);
  return;
}

// Unwind@1801810f0
void Unwind_1801810f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180181130
void Unwind_180181130(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xb8));
  return;
}

// func_0x180181170
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180181170(uint64_t *param_1)
{
  uint *pU64_1;
  byte *pU8_2;
  uint64_t *pU64_3;
  func_ptr_t fnPtr_4;
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint32_t uVal_7;
  uint32_t uVal_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint64_t *pU64_13;
  uint8_t *pU64_14;
  uint8_t *pU64_15;
  uint64_t uVal_16;
  uint uVal_17;
  uint uVal_18;
  uint uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint32_t uVal_23;
  uint64_t in_stack_fffffffffffffdb8;
  uint32_t uVal_25;
  uint64_t *pU64_24;
  uint64_t in_stack_fffffffffffffdc0;
  uint32_t uVal_26;
  uint uVal_27;
  uint64_t local_218;
  uint64_t uStack_210;
  uint64_t local_208;
  uint64_t uStack_200;
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
  uint8_t local_e8;
  uint64_t *local_d8;
  uint64_t *local_d0;
  uint8_t local_c8 [16];
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  uint32_t uStack_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  undefined3 uStack_98;
  uint32_t uStack_95;
  uint32_t uStack_91;
  uint32_t uStack_8d;
  uint64_t *local_80;
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint8_t local_58;
  uint8_t local_57;
  uint8_t local_56;
  uint8_t local_55;
  uint8_t local_54;
  uint8_t local_53;
  uint8_t local_52;
  uint8_t local_51;
  uint64_t local_50;
  
  uVal_26 = (uint32_t)((uint64_t)in_stack_fffffffffffffdc0 >> 0x20);
  uVal_25 = (uint32_t)((uint64_t)in_stack_fffffffffffffdb8 >> 0x20);
  local_50 = 0xfffffffffffffffe;
  uStack_98 = _UNK_1806b9f90;
  uStack_95 = _UNK_1806b9f93;
  uStack_91 = _UNK_1806b9f97;
  uStack_8d = _UNK_1806b9f9b;
  uStack_a8 = _DAT_1806b9f80;
  uStack_a4 = _UNK_1806b9f84;
  uStack_a0 = _UNK_1806b9f88;
  uStack_9c = _UNK_1806b9f8c;
  local_b8._4_4_ = _UNK_1806b9f74;
  local_b8._0_4_ = _DAT_1806b9f70;
  uStack_b0._0_4_ = _UNK_1806b9f78;
  uStack_b0._4_4_ = _UNK_1806b9f7c;
  local_c8._8_8_ = _UNK_1806b9f68;
  local_c8._0_8_ = _DAT_1806b9f60;
  local_80 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5ab8) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x5ab8) = 1;
    func_0x1801b7c70(lVal_11 + 0x5a75,local_c8);
    func_0x180673140(&LAB_1801b7e30);
  }
  uVal_22 = _UNK_1806b2cac;
  uVal_20 = _UNK_1806b2ca8;
  uVal_18 = _UNK_1806b2ca4;
  uVal_27 = _DAT_1806b2ca0;
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_11 + 0x5a75);
  if (*(char *)(lVal_11 + 0x5ab4) == '\x01') {
    uVal_17 = *(uint *)(lVal_11 + 0x5a79) ^ _UNK_1806b2ca4;
    uVal_19 = *(uint *)(lVal_11 + 0x5a7d) ^ _UNK_1806b2ca8;
    uVal_21 = *(uint *)(lVal_11 + 0x5a81) ^ _UNK_1806b2cac;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2ca0;
    *(uint *)(lVal_11 + 0x5a79) = uVal_17;
    *(uint *)(lVal_11 + 0x5a7d) = uVal_19;
    *(uint *)(lVal_11 + 0x5a81) = uVal_21;
    auArr_5._4_4_ = *(uint *)(lVal_11 + 0x5a89) ^ uVal_18;
    auArr_5._0_4_ = *(uint *)(lVal_11 + 0x5a85) ^ uVal_27;
    auArr_5._8_4_ = *(uint *)(lVal_11 + 0x5a8d) ^ uVal_20;
    auArr_5._12_4_ = *(uint *)(lVal_11 + 0x5a91) ^ uVal_22;
    *(uint8_t (*)[16])(lVal_11 + 0x5a85) = auArr_5;
    auArr_6._4_4_ = *(uint *)(lVal_11 + 0x5a99) ^ uVal_18;
    auArr_6._0_4_ = *(uint *)(lVal_11 + 0x5a95) ^ uVal_27;
    auArr_6._8_4_ = *(uint *)(lVal_11 + 0x5a9d) ^ uVal_20;
    auArr_6._12_4_ = *(uint *)(lVal_11 + 0x5aa1) ^ uVal_22;
    *(uint8_t (*)[16])(lVal_11 + 0x5a95) = auArr_6;
    *(uint64_t *)(lVal_11 + 0x5aa5) = *(uint64_t *)(lVal_11 + 0x5aa5) ^ SUB168(_DAT_1806b5c10,0);
    *(byte *)(lVal_11 + 0x5aad) = *(byte *)(lVal_11 + 0x5aad) ^ 0x73;
    *(byte *)(lVal_11 + 0x5aae) = *(byte *)(lVal_11 + 0x5aae) ^ 0x45;
    *(byte *)(lVal_11 + 0x5aaf) = *(byte *)(lVal_11 + 0x5aaf) ^ 0x7d;
    *(byte *)(lVal_11 + 0x5ab0) = *(byte *)(lVal_11 + 0x5ab0) ^ 199;
    *(byte *)(lVal_11 + 0x5ab1) = *(byte *)(lVal_11 + 0x5ab1) ^ 0xb1;
    *(byte *)(lVal_11 + 0x5ab2) = *(byte *)(lVal_11 + 0x5ab2) ^ 0xb3;
    *(byte *)(lVal_11 + 0x5ab3) = *(byte *)(lVal_11 + 0x5ab3) ^ 0xb5;
    *(uint8_t *)(lVal_11 + 0x5ab4) = 0;
  }
  _local_b8 = (uint8_t  [16])0x0;
  local_c8 = (uint8_t  [16])0x0;
  sz_9 = strlen((char *)pU64_1);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
LAB_1801825b0:
    local_53 = 1;
    func_0x18007ba70();
LAB_1801825bd:
    local_52 = 1;
    func_0x18007ba70();
LAB_1801825ca:
    local_55 = 1;
    func_0x18007ba70();
LAB_1801825d7:
    local_54 = 1;
    func_0x18007ba70();
LAB_1801825e4:
    local_56 = 1;
    func_0x18007ba70();
LAB_1801825f1:
    local_51 = 1;
    func_0x18007ba70();
LAB_1801825fe:
    func_0x18007ba70();
LAB_180182604:
    func_0x18007ba70();
  }
  else {
    if (sz_9 < 0x10) {
      pU64_15 = local_c8;
      uVal_16 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8 = (uint8_t  [8])sz_9;
    uStack_b0 = uVal_16;
    func_0x1806aa960(pU64_15,pU64_1,sz_9);
    pU64_15[sz_9] = 0;
    pU64_15 = local_c8;
    func_0x1801c2ba0(local_80,0,0,pU64_15);
    if (0xf < uStack_b0) {
      uVal_16 = uStack_b0 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_1801825a9;
        uVal_16 = uStack_b0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    *local_80 = &PTR_LAB_1806b7ab0;
    uVal_8 = _UNK_1806b288c;
    uVal_7 = _UNK_1806b2888;
    uVal_23 = _UNK_1806b2884;
    pU64_13 = local_80 + 0x10;
    *(uint32_t *)(local_80 + 0x10) = _DAT_1806b2880;
    *(uint32_t *)((int64_t)local_80 + 0x84) = uVal_23;
    *(uint32_t *)(local_80 + 0x11) = uVal_7;
    *(uint32_t *)((int64_t)local_80 + 0x8c) = uVal_8;
    *(uint8_t (*)[16])(local_80 + 0x12) = ZEXT416(DAT_1806ae7b0);
    *(uint32_t *)(local_80 + 0x14) = 0x3f4ccccd;
    local_d0 = local_80 + 0x15;
    *(uint8_t (*)[16])(local_80 + 0x17) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(local_80 + 0x15) = (uint8_t  [16])0x0;
    *(uint32_t *)(local_80 + 0x18) = 0xffffffff;
    local_d8 = local_80 + 0x19;
    *(uint8_t (*)[16])(local_80 + 0x19) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(local_80 + 0x1b) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(local_80 + 0x1d) = (uint8_t  [16])0x0;
    local_1c0 = 0;
    uVal_23 = DAT_1806b26b4;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_1c0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_1f8);
      uVal_23 = *(uint32_t *)pU64_13;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5abc) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5abc) = 1;
      *(uint16_t *)(lVal_11 + 0x5ab9) = 0x1dd;
      func_0x180673140(&LAB_1801b7e70);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_11 + 0x5ab9);
    if (*(char *)(lVal_11 + 0x5aba) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xdd;
      *(uint8_t *)(lVal_11 + 0x5aba) = 0;
    }
    _local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_2);
    if ((int64_t)sz_9 < 0) goto LAB_1801825b0;
    uVal_16 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_53 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_53 = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_15;
    }
    uStack_b0 = uVal_16;
    local_b8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_15,pU8_2,sz_9);
    pU64_15[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5ac8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5ac8) = 1;
      *(uint32_t *)(lVal_11 + 0x5ac0) = 0x8013b88e;
      *(uint16_t *)(lVal_11 + 0x5ac4) = 0x1cb;
      func_0x180673140(&LAB_1801b7e90);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x5ac0);
    if (*(char *)(lVal_11 + 0x5ac5) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xe569d1dd;
      *(byte *)(lVal_11 + 0x5ac4) = *(byte *)(lVal_11 + 0x5ac4) ^ 0xcb;
      *(uint8_t *)(lVal_11 + 0x5ac5) = 0;
    }
    local_68 = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_1801825bd;
    if (sz_9 < 0x10) {
      pU64_15 = local_78;
      uVal_16 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_52 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_52 = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_78._0_8_ = pU64_15;
    }
    local_68._8_8_ = uVal_16;
    local_68._0_8_ = sz_9;
    func_0x1806aa960(pU64_15,pU64_1,sz_9);
    pU64_15[sz_9] = 0;
    uVal_27 = 0x40000000;
    pU64_15 = local_78;
    pU64_14 = local_c8;
    func_0x1801cd2e0(local_80,pU64_15,pU64_14,pU64_13,CONCAT44(uVal_25,uVal_23),
                  CONCAT44(uVal_26,0x3f000000),0x40000000,local_1f8,0);
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_16 = local_68._8_8_ + 1;
      lVal_11 = local_78._0_8_;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_11)) goto LAB_1801825a9;
        uVal_16 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    if (0xf < uStack_b0) {
      uVal_16 = uStack_b0 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_1801825a9;
        uVal_16 = uStack_b0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    local_180 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_180 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_1b8);
    }
    pU64_13 = (uint64_t *)((int64_t)local_80 + 0x84);
    local_218 = *pU64_13;
    uStack_210 = *(uint64_t *)((int64_t)local_80 + 0x8c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5acc) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5acc) = 1;
      *(uint16_t *)(lVal_11 + 0x5ac9) = 0x187;
      func_0x180673140(&LAB_1801b7ec0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_11 + 0x5ac9);
    if (*(char *)(lVal_11 + 0x5aca) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x87;
      *(uint8_t *)(lVal_11 + 0x5aca) = 0;
    }
    _local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_2);
    if ((int64_t)sz_9 < 0) goto LAB_1801825ca;
    uVal_16 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_55 = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_55 = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_14;
    }
    uStack_b0 = uVal_16;
    local_b8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_14,pU8_2,sz_9);
    pU64_14[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5adc) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5adc) = 1;
      *(uint64_t *)(lVal_11 + 0x5ad0) = 0x2bc4ae85e7dba2d3;
      *(uint32_t *)(lVal_11 + 0x5ad8) = 0x1a3b5e8;
      func_0x180673140(&LAB_1801b7ee0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_11 + 0x5ad0);
    if (*(char *)(lVal_11 + 0x5adb) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_11 + 0x5ad8) =
           (*(uint *)(lVal_11 + 0x5ad8) & 0xffff | (uint)*(byte *)(lVal_11 + 0x5ada) << 0x10) ^
           SUB164(_DAT_1806b6500,0);
    }
    local_68 = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_3);
    if ((int64_t)sz_9 < 0) goto LAB_1801825d7;
    uVal_16 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_54 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_54 = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_78._0_8_ = pU64_15;
    }
    local_68._8_8_ = uVal_16;
    local_68._0_8_ = sz_9;
    func_0x1806aa960(pU64_15,pU64_3,sz_9);
    pU64_15[sz_9] = 0;
    uVal_27 = uVal_27 & 0xffffff00;
    pU64_15 = local_78;
    pU64_14 = local_c8;
    func_0x1801cd600(local_80,pU64_15,pU64_14,pU64_13,&local_218,local_1b8,uVal_27);
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_16 = local_68._8_8_ + 1;
      lVal_11 = local_78._0_8_;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_11)) goto LAB_1801825a9;
        uVal_16 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    if (0xf < uStack_b0) {
      uVal_16 = uStack_b0 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_1801825a9;
        uVal_16 = uStack_b0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    local_140 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_140 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_178);
    }
    pU64_13 = (uint64_t *)((int64_t)local_80 + 0x94);
    local_208 = *pU64_13;
    uStack_200 = *(uint64_t *)((int64_t)local_80 + 0x9c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5ae0) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5ae0) = 1;
      *(uint16_t *)(lVal_11 + 0x5add) = 0x1d5;
      func_0x180673140(&LAB_1801b7f10);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_11 + 0x5add);
    if (*(char *)(lVal_11 + 0x5ade) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xd5;
      *(uint8_t *)(lVal_11 + 0x5ade) = 0;
    }
    _local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_2);
    if ((int64_t)sz_9 < 0) goto LAB_1801825e4;
    uVal_16 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_56 = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_56 = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_14;
    }
    uStack_b0 = uVal_16;
    local_b8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_14,pU8_2,sz_9);
    pU64_14[sz_9] = 0;
    local_f8 = _DAT_1806b9f9f;
    uStack_f0 = _UNK_1806b9fa7;
    local_e8 = 0xd5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5af4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5af4) = 1;
      func_0x18007d2b0(lVal_11 + 0x5ae1,&local_f8);
      func_0x180673140(&LAB_1801b7f30);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x5ae1);
    if (*(char *)(lVal_11 + 0x5af2) == '\x01') {
      uVal_18 = *(uint *)(lVal_11 + 0x5ae5) ^ _UNK_1806b2d14;
      uVal_20 = *(uint *)(lVal_11 + 0x5ae9) ^ _UNK_1806b2d18;
      uVal_22 = *(uint *)(lVal_11 + 0x5aed) ^ _UNK_1806b2d1c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d10;
      *(uint *)(lVal_11 + 0x5ae5) = uVal_18;
      *(uint *)(lVal_11 + 0x5ae9) = uVal_20;
      *(uint *)(lVal_11 + 0x5aed) = uVal_22;
      *(byte *)(lVal_11 + 0x5af1) = *(byte *)(lVal_11 + 0x5af1) ^ 0xd5;
      *(uint8_t *)(lVal_11 + 0x5af2) = 0;
    }
    local_68 = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_1801825f1;
    uVal_16 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_51 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_51 = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_78._0_8_ = pU64_15;
    }
    local_68._8_8_ = uVal_16;
    local_68._0_8_ = sz_9;
    func_0x1806aa960(pU64_15,pU64_1,sz_9);
    pU64_15[sz_9] = 0;
    pU64_24 = &local_208;
    uVal_27 = uVal_27 & 0xffffff00;
    pU64_15 = local_78;
    pU64_14 = local_c8;
    func_0x1801cd600(local_80,pU64_15,pU64_14,pU64_13,pU64_24,local_178,uVal_27);
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_16 = local_68._8_8_ + 1;
      lVal_11 = local_78._0_8_;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_11)) goto LAB_1801825a9;
        uVal_16 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    if (0xf < uStack_b0) {
      uVal_16 = uStack_b0 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_1801825a9;
        uVal_16 = uStack_b0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5b04) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5b04) = 1;
      *(uint8_t *)(lVal_11 + 0x5b02) = 1;
      *(uint64_t *)(lVal_11 + 0x5af8) = 0xb0020654a3dbc43;
      *(uint16_t *)(lVal_11 + 0x5b00) = 0xd37e;
      func_0x180673140(&LAB_1801b7f60);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_11 + 0x5af8);
    if (*(char *)(lVal_11 + 0x5b02) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x656173452549d30d;
      *(byte *)(lVal_11 + 0x5b00) = *(byte *)(lVal_11 + 0x5b00) ^ 0xd;
      *(byte *)(lVal_11 + 0x5b01) = *(byte *)(lVal_11 + 0x5b01) ^ 0xd3;
      *(uint8_t *)(lVal_11 + 0x5b02) = 0;
    }
    _local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_3);
    if ((int64_t)sz_9 < 0) goto LAB_1801825fe;
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
      local_c8._0_8_ = pU64_14;
    }
    uStack_b0 = uVal_16;
    local_b8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_14,pU64_3,sz_9);
    pU64_14[sz_9] = 0;
    pU64_14 = local_c8;
    uVal_12 = func_0x1801d3650(local_d0,pU64_14,0);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5b14) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5b14) = 1;
      *(uint8_t *)(lVal_11 + 0x5b12) = 1;
      *(uint64_t *)(lVal_11 + 0x5b08) = 0xd142b4423bc40;
      *(uint16_t *)(lVal_11 + 0x5b10) = 0xd37e;
      func_0x180673140(&LAB_1801b7f90);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_11 + 0x5b08);
    if (*(char *)(lVal_11 + 0x5b12) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x656173452549d30d;
      *(byte *)(lVal_11 + 0x5b10) = *(byte *)(lVal_11 + 0x5b10) ^ 0xd;
      *(byte *)(lVal_11 + 0x5b11) = *(byte *)(lVal_11 + 0x5b11) ^ 0xd3;
      *(uint8_t *)(lVal_11 + 0x5b12) = 0;
    }
    local_68 = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_3);
    if ((int64_t)sz_9 < 0) goto LAB_180182604;
    uVal_16 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_78._0_8_ = pU64_15;
    }
    local_68._8_8_ = uVal_16;
    local_68._0_8_ = sz_9;
    func_0x1806aa960(pU64_15,pU64_3,sz_9);
    pU64_15[sz_9] = 0;
    pU64_15 = local_78;
    func_0x1801d3650(uVal_12,pU64_15,1);
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_16 = local_68._8_8_ + 1;
      lVal_11 = local_78._0_8_;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_11)) goto LAB_1801825a9;
        uVal_16 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    if (0xf < uStack_b0) {
      uVal_16 = uStack_b0 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_1801825a9;
        uVal_16 = uStack_b0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    local_100 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_100 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_138);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5b18) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5b18) = 1;
      *(uint16_t *)(lVal_11 + 0x5b15) = 0x1c5;
      func_0x180673140(&LAB_1801b7fc0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_11 + 0x5b15);
    if (*(char *)(lVal_11 + 0x5b16) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xc5;
      *(uint8_t *)(lVal_11 + 0x5b16) = 0;
    }
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_2);
    if (-1 < (int64_t)sz_9) {
      uVal_16 = 0xf;
      if (0xf < sz_9) {
        uVal_10 = sz_9 | 0xf;
        uVal_16 = 0x16;
        if (0x16 < uVal_10) {
          uVal_16 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          local_58 = 1;
          pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
        }
        else {
          local_58 = 1;
          lVal_11 = func_0x180672de0(uVal_16 + 0x28);
          pU64_14 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_14 + -8) = lVal_11;
        }
        local_c8._0_8_ = pU64_14;
      }
      uStack_b0 = uVal_16;
      local_b8 = (uint8_t  [8])sz_9;
      func_0x1806aa960(pU64_14,pU8_2,sz_9);
      pU64_14[sz_9] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x5b24) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0x5b24) = 1;
        *(uint32_t *)(lVal_11 + 0x5b1c) = 0xd5bb1c83;
        *(uint16_t *)(lVal_11 + 0x5b20) = 0x181;
        func_0x180673140(&LAB_1801b7fe0);
      }
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_11 + 0x5b1c);
      if (*(char *)(lVal_11 + 0x5b21) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0xa1d573c5;
        *(byte *)(lVal_11 + 0x5b20) = *(byte *)(lVal_11 + 0x5b20) ^ 0x81;
        *(uint8_t *)(lVal_11 + 0x5b21) = 0;
      }
      local_78 = (uint8_t  [16])0x0;
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
            local_57 = 1;
            pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
          }
          else {
            local_57 = 1;
            lVal_11 = func_0x180672de0(uVal_16 + 0x28);
            pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_15 + -8) = lVal_11;
          }
          local_78._0_8_ = pU64_15;
        }
        local_68._0_8_ = sz_9;
        local_68._8_8_ = uVal_16;
        func_0x1806aa960(pU64_15,pU64_1,sz_9);
        pU64_15[sz_9] = 0;
        func_0x1801d3a80(local_80,local_78,local_c8,local_d0,(uint64_t)pU64_24 & 0xffffffff00000000,
                      local_138,uVal_27 & 0xffffff00);
        if (0xf < (uint64_t)local_68._8_8_) {
          uVal_16 = local_68._8_8_ + 1;
          lVal_11 = local_78._0_8_;
          if (0xfff < uVal_16) {
            lVal_11 = *(int64_t *)(local_78._0_8_ + -8);
            if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_11)) goto LAB_1801825a9;
            uVal_16 = local_68._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_16);
        }
        if (0xf < uStack_b0) {
          uVal_16 = uStack_b0 + 1;
          lVal_11 = local_c8._0_8_;
          if (0xfff < uVal_16) {
            lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) {
LAB_1801825a9:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_16 = uStack_b0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_16);
        }
        return local_80;
      }
      goto LAB_180182617;
    }
  }
  local_58 = 1;
  func_0x18007ba70();
LAB_180182617:
  local_57 = 1;
  func_0x18007ba70();
  fnPtr_4 = (func_ptr_t )swi(3);
  pU64_13 = (uint64_t *)(*fnPtr_4)();
  return pU64_13;
}

// Unwind@180182630
void Unwind_180182630(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xa8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x70));
    *(uint64_t *)(param_2 + 0xa8) = 0;
  }
  return;
}

// Unwind@180182690
void Unwind_180182690(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xe8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xb0));
    *(uint64_t *)(param_2 + 0xe8) = 0;
  }
  return;
}

// Unwind@1801826f0
void Unwind_1801826f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x128);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xf0));
    *(uint64_t *)(param_2 + 0x128) = 0;
  }
  return;
}

// Unwind@180182750
void Unwind_180182750(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x168);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x130));
    *(uint64_t *)(param_2 + 0x168) = 0;
  }
  return;
}

// Unwind@1801827b0
void Unwind_1801827b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1801827f0
void Unwind_1801827f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1f0);
  *(uint8_t *)(param_2 + 0x216) = 0;
  return;
}

// Unwind@180182840
void Unwind_180182840(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x216);
  func_0x180001e70(param_2 + 0x1a0);
  *(uint8_t *)(param_2 + 0x215) = uVal_1;
  return;
}

// Unwind@180182890
void Unwind_180182890(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x215) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xa8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x70));
    *(uint64_t *)(param_2 + 0xa8) = 0;
  }
  return;
}

// Unwind@1801828f0
void Unwind_1801828f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1f0);
  *(uint8_t *)(param_2 + 0x214) = 0;
  return;
}

// Unwind@180182940
void Unwind_180182940(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x214);
  func_0x180001e70(param_2 + 0x1a0);
  *(uint8_t *)(param_2 + 0x213) = uVal_1;
  return;
}

// Unwind@180182990
void Unwind_180182990(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x213) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xe8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xb0));
    *(uint64_t *)(param_2 + 0xe8) = 0;
  }
  return;
}

// Unwind@1801829f0
void Unwind_1801829f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1f0);
  *(uint8_t *)(param_2 + 0x217) = 0;
  return;
}
