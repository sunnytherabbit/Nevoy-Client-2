#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@18050a6e0
void Unwind_18050a6e0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18050a7c0
void Unwind_18050a7c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// func_0x18050a8d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18050a8d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  
  uVal_10 = _UNK_1806b5e3c;
  uVal_9 = _UNK_1806b5e38;
  uVal_8 = _UNK_1806b5e34;
  uVal_7 = _DAT_1806b5e30;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5e34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5e30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5e38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b5e3c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806b5c50,0);
  }
  return;
}

// Unwind@18050beb0
void Unwind_18050beb0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17cd0) = 0;
  return;
}

// Unwind@18050bfa0
void Unwind_18050bfa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18050c080
void Unwind_18050c080(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18050c160
void Unwind_18050c160(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18050c240
void Unwind_18050c240(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18050d8f0
void Unwind_18050d8f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17cf8) = 0;
  return;
}

// Unwind@18050d9e0
void Unwind_18050d9e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18050dac0
void Unwind_18050dac0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18050dba0
void Unwind_18050dba0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18050dc80
void Unwind_18050dc80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// func_0x18050dd90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18050dd90(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  
  uVal_10 = _UNK_1806b2e8c;
  uVal_9 = _UNK_1806b2e88;
  uVal_8 = _UNK_1806b2e84;
  uVal_7 = _DAT_1806b2e80;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e8c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xdd55518f;
    param_1[2][4] = param_1[2][4] ^ 0x35;
    param_1[2][5] = 0;
  }
  return;
}

// Unwind@18050f3a0
void Unwind_18050f3a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18050f480
void Unwind_18050f480(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18050f560
void Unwind_18050f560(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18050f640
void Unwind_18050f640(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180510d40
void Unwind_180510d40(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17dc0) = 0;
  return;
}

// Unwind@180510e30
void Unwind_180510e30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180510f10
void Unwind_180510f10(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180510ff0
void Unwind_180510ff0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@1805110d0
void Unwind_1805110d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180512790
void Unwind_180512790(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17dec) = 0;
  return;
}

// Unwind@180512880
void Unwind_180512880(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180512960
void Unwind_180512960(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180512a40
void Unwind_180512a40(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180512b20
void Unwind_180512b20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1805141d0
void Unwind_1805141d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17e20) = 0;
  return;
}

// Unwind@1805142c0
void Unwind_1805142c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1805143a0
void Unwind_1805143a0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180514480
void Unwind_180514480(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180514560
void Unwind_180514560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180515c50
void Unwind_180515c50(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17e64) = 0;
  return;
}

// Unwind@180515d40
void Unwind_180515d40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180515e20
void Unwind_180515e20(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180515f00
void Unwind_180515f00(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180515fe0
void Unwind_180515fe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1805176a0
void Unwind_1805176a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17e9c) = 0;
  return;
}

// Unwind@180517790
void Unwind_180517790(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180517870
void Unwind_180517870(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180517950
void Unwind_180517950(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180517a30
void Unwind_180517a30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180519100
void Unwind_180519100(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17ed8) = 0;
  return;
}

// Unwind@1805191f0
void Unwind_1805191f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1805192d0
void Unwind_1805192d0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@1805193b0
void Unwind_1805193b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180519490
void Unwind_180519490(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18051ab60
void Unwind_18051ab60(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17f10) = 0;
  return;
}

// Unwind@18051ac50
void Unwind_18051ac50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18051ad30
void Unwind_18051ad30(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@18051ae10
void Unwind_18051ae10(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@18051aef0
void Unwind_18051aef0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18051c5a0
void Unwind_18051c5a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17f34) = 0;
  return;
}

// Unwind@18051c690
void Unwind_18051c690(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18051c770
void Unwind_18051c770(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18051c850
void Unwind_18051c850(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18051c930
void Unwind_18051c930(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// func_0x18051ca40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18051ca40(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806b52e4;
    uVal_3 = param_1[2] ^ _UNK_1806b52e8;
    uVal_4 = param_1[3] ^ _UNK_1806b52ec;
    *param_1 = *param_1 ^ _DAT_1806b52e0;
    param_1[1] = uVal_2;
    param_1[2] = uVal_3;
    param_1[3] = uVal_4;
    uVal_2 = param_1[6];
    auArr_1 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)(uVal_2 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVal_2 >> 0x10),uVal_2)) >> 0x20),
                                                  (char)((ushort)*(uint16_t *)
                                                                  ((int64_t)param_1 + 0x1d) >> 8)),
                                              (char)(uVal_2 >> 8)),
                                     CONCAT11((char)*(uint16_t *)((int64_t)param_1 + 0x1d),
                                              (char)uVal_2))),_DAT_1806ae110);
    auArr_1._8_8_ = auArr_1._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(param_1 + 7) << 0x20;
    auArr_1 = pblendw(auArr_1,*(uint8_t (*)[16])(param_1 + 4),0xf);
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806cf5b0;
  }
  return;
}

// Unwind@18051e080
void Unwind_18051e080(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18051e160
void Unwind_18051e160(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18051e240
void Unwind_18051e240(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18051e320
void Unwind_18051e320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18051fa30
void Unwind_18051fa30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18051fb10
void Unwind_18051fb10(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18051fbf0
void Unwind_18051fbf0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18051fcd0
void Unwind_18051fcd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1805213d0
void Unwind_1805213d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1805214b0
void Unwind_1805214b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180521590
void Unwind_180521590(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180521670
void Unwind_180521670(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180522d50
void Unwind_180522d50(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x180a0) = 0;
  return;
}

// Unwind@180522e40
void Unwind_180522e40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180522f20
void Unwind_180522f20(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180523000
void Unwind_180523000(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@1805230e0
void Unwind_1805230e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// func_0x1805231f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1805231f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  
  uVal_10 = _UNK_1806aeeac;
  uVal_9 = _UNK_1806aeea8;
  uVal_8 = _UNK_1806aeea4;
  uVal_7 = _DAT_1806aeea0;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeea4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeea0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeea8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeeac;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x7d7f3d23;
    param_1[2][4] = param_1[2][4] ^ 0x7d;
    param_1[2][5] = 0;
  }
  return;
}

// Unwind@1805247c0
void Unwind_1805247c0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x180bc) = 0;
  return;
}

// Unwind@1805248b0
void Unwind_1805248b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180524990
void Unwind_180524990(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180524a70
void Unwind_180524a70(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180524b50
void Unwind_180524b50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// func_0x180524c60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180524c60(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2ee4;
    uVal_2 = param_1[2] ^ _UNK_1806b2ee8;
    uVal_3 = param_1[3] ^ _UNK_1806b2eec;
    *param_1 = *param_1 ^ _DAT_1806b2ee0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806cf5c0,0);
  }
  return;
}

// Unwind@180526260
void Unwind_180526260(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x180f8) = 0;
  return;
}

// Unwind@180526350
void Unwind_180526350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180526430
void Unwind_180526430(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180526510
void Unwind_180526510(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@1805265f0
void Unwind_1805265f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180527cc0
void Unwind_180527cc0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x18130) = 0;
  return;
}

// Unwind@180527db0
void Unwind_180527db0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180527e90
void Unwind_180527e90(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180527f70
void Unwind_180527f70(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180528050
void Unwind_180528050(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180529860
void Unwind_180529860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180529940
void Unwind_180529940(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180529a20
void Unwind_180529a20(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180529b00
void Unwind_180529b00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18052b1c0
void Unwind_18052b1c0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x181ac) = 0;
  return;
}

// Unwind@18052b2b0
void Unwind_18052b2b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18052b390
void Unwind_18052b390(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18052b470
void Unwind_18052b470(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18052b550
void Unwind_18052b550(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// func_0x18052b660
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18052b660(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c36c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c36c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c36c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c36cc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x769f7ebeb59dbd3;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xeb59dbd3;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xeb;
    param_1[1][0xd] = 0;
  }
  return;
}

// Unwind@18052cdc0
void Unwind_18052cdc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18052cea0
void Unwind_18052cea0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18052cf80
void Unwind_18052cf80(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18052d060
void Unwind_18052d060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18052e750
void Unwind_18052e750(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x18260) = 0;
  return;
}

// Unwind@18052e840
void Unwind_18052e840(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18052e920
void Unwind_18052e920(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@18052ea00
void Unwind_18052ea00(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@18052eae0
void Unwind_18052eae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180530190
void Unwind_180530190(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1827c) = 0;
  return;
}

// Unwind@180530280
void Unwind_180530280(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180530360
void Unwind_180530360(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180530440
void Unwind_180530440(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180530520
void Unwind_180530520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// func_0x180530630
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180530630(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b65f4;
    uVal_2 = param_1[2] ^ _UNK_1806b65f8;
    uVal_3 = param_1[3] ^ _UNK_1806b65fc;
    *param_1 = *param_1 ^ _DAT_1806b65f0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806c8550,0);
  }
  return;
}

// Unwind@180531e70
void Unwind_180531e70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180531f50
void Unwind_180531f50(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180532030
void Unwind_180532030(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180532110
void Unwind_180532110(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180533800
void Unwind_180533800(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x18360) = 0;
  return;
}

// Unwind@1805338f0
void Unwind_1805338f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1805339d0
void Unwind_1805339d0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180533ab0
void Unwind_180533ab0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180533b90
void Unwind_180533b90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180535230
void Unwind_180535230(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x18384) = 0;
  return;
}

// Unwind@180535320
void Unwind_180535320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180535400
void Unwind_180535400(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@1805354e0
void Unwind_1805354e0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@1805355c0
void Unwind_1805355c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// func_0x1805356d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1805356d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  
  uVal_10 = _UNK_1806c86dc;
  uVal_9 = _UNK_1806c86d8;
  uVal_8 = _UNK_1806c86d4;
  uVal_7 = _DAT_1806c86d0;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c86d4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c86d0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c86d8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c86dc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x6b;
    param_1[2][1] = 0;
  }
  return;
}

// Unwind@180536cb0
void Unwind_180536cb0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x183c0) = 0;
  return;
}

// Unwind@180536da0
void Unwind_180536da0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180536e80
void Unwind_180536e80(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180536f60
void Unwind_180536f60(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180537040
void Unwind_180537040(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180538860
void Unwind_180538860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180538940
void Unwind_180538940(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180538a20
void Unwind_180538a20(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180538b00
void Unwind_180538b00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18053a200
void Unwind_18053a200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18053a2e0
void Unwind_18053a2e0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18053a3c0
void Unwind_18053a3c0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18053a4a0
void Unwind_18053a4a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18053bbc0
void Unwind_18053bbc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18053bca0
void Unwind_18053bca0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18053bd80
void Unwind_18053bd80(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18053be60
void Unwind_18053be60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18053d690
void Unwind_18053d690(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18053d770
void Unwind_18053d770(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18053d850
void Unwind_18053d850(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18053d930
void Unwind_18053d930(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18053f010
void Unwind_18053f010(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x185a4) = 0;
  return;
}

// Unwind@18053f100
void Unwind_18053f100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18053f1e0
void Unwind_18053f1e0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@18053f2c0
void Unwind_18053f2c0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@18053f3a0
void Unwind_18053f3a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180540cc0
void Unwind_180540cc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180540da0
void Unwind_180540da0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180540e80
void Unwind_180540e80(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180540f60
void Unwind_180540f60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1805428f0
void Unwind_1805428f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1805429d0
void Unwind_1805429d0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180542ab0
void Unwind_180542ab0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180542b90
void Unwind_180542b90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1805442d0
void Unwind_1805442d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1805443b0
void Unwind_1805443b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180544490
void Unwind_180544490(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180544570
void Unwind_180544570(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180545c60
void Unwind_180545c60(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x18814) = 0;
  return;
}

// Unwind@180545d50
void Unwind_180545d50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180545e30
void Unwind_180545e30(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180545f10
void Unwind_180545f10(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@180545ff0
void Unwind_180545ff0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1805476f0
void Unwind_1805476f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1805477d0
void Unwind_1805477d0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@1805478b0
void Unwind_1805478b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180547990
void Unwind_180547990(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180549070
void Unwind_180549070(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x188d0) = 0;
  return;
}

// Unwind@180549160
void Unwind_180549160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180549240
void Unwind_180549240(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180549320
void Unwind_180549320(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180549400
void Unwind_180549400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// func_0x180549510
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180549510(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  
  uVal_10 = _UNK_1806b693c;
  uVal_9 = _UNK_1806b6938;
  uVal_8 = _UNK_1806b6934;
  uVal_7 = _DAT_1806b6930;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6934;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6930;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6938;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b693c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xc961f7a9;
    param_1[2][4] = param_1[2][4] ^ 0x91;
    param_1[2][5] = 0;
  }
  return;
}

// Unwind@18054aaf0
void Unwind_18054aaf0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x188fc) = 0;
  return;
}

// Unwind@18054abe0
void Unwind_18054abe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18054acc0
void Unwind_18054acc0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18054ada0
void Unwind_18054ada0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18054ae80
void Unwind_18054ae80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18054c550
void Unwind_18054c550(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x18948) = 0;
  return;
}

// Unwind@18054c640
void Unwind_18054c640(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@18054c720
void Unwind_18054c720(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x170);
  return;
}

// Unwind@18054c800
void Unwind_18054c800(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x170);
  return;
}

// Unwind@18054c8e0
void Unwind_18054c8e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18054dfb0
void Unwind_18054dfb0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x18980) = 0;
  return;
}

// Unwind@18054e0a0
void Unwind_18054e0a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18054e180
void Unwind_18054e180(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@18054e260
void Unwind_18054e260(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@18054e340
void Unwind_18054e340(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18054f9f0
void Unwind_18054f9f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x189a0) = 0;
  return;
}

// Unwind@18054fae0
void Unwind_18054fae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18054fbc0
void Unwind_18054fbc0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18054fca0
void Unwind_18054fca0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18054fd80
void Unwind_18054fd80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// func_0x18054fe90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18054fe90(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806be484;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806be480;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806be488;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806be48c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x8bbdb3af1b4949a3;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x1b4949a3;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xaf;
    param_1[1][0xd] = 0;
  }
  return;
}

// Unwind@1805514a0
void Unwind_1805514a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180551580
void Unwind_180551580(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180551660
void Unwind_180551660(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180551740
void Unwind_180551740(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1805530b0
void Unwind_1805530b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180553190
void Unwind_180553190(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180553270
void Unwind_180553270(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180553350
void Unwind_180553350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180554a80
void Unwind_180554a80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180554b60
void Unwind_180554b60(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180554c40
void Unwind_180554c40(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180554d20
void Unwind_180554d20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180556650
void Unwind_180556650(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180556730
void Unwind_180556730(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180556810
void Unwind_180556810(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@1805568f0
void Unwind_1805568f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1805581f0
void Unwind_1805581f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1805582d0
void Unwind_1805582d0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@1805583b0
void Unwind_1805583b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180558490
void Unwind_180558490(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180559bd0
void Unwind_180559bd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180559cb0
void Unwind_180559cb0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180559d90
void Unwind_180559d90(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180559e70
void Unwind_180559e70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18055b590
void Unwind_18055b590(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x18fcc) = 0;
  return;
}

// Unwind@18055b680
void Unwind_18055b680(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18055b760
void Unwind_18055b760(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@18055b840
void Unwind_18055b840(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@18055b920
void Unwind_18055b920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18055cff0
void Unwind_18055cff0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x19004) = 0;
  return;
}

// Unwind@18055d0e0
void Unwind_18055d0e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18055d1c0
void Unwind_18055d1c0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@18055d2a0
void Unwind_18055d2a0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// Unwind@18055d380
void Unwind_18055d380(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18055eaa0
void Unwind_18055eaa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18055eb80
void Unwind_18055eb80(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18055ec60
void Unwind_18055ec60(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@18055ed40
void Unwind_18055ed40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180560480
void Unwind_180560480(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180560560
void Unwind_180560560(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180560640
void Unwind_180560640(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@180560720
void Unwind_180560720(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180562050
void Unwind_180562050(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}
