#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@18040b330
void Unwind_18040b330(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x120);
  return;
}

// Unwind@18040b3b0
void Unwind_18040b3b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800d0dd0(param_2 + 0xc0);
  return;
}

// Unwind@18040b430
void Unwind_18040b430(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xe0);
  return;
}

// Unwind@18040b4b0
void Unwind_18040b4b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@18040b530
void Unwind_18040b530(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@18040b5b0
void Unwind_18040b5b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@18040b630
void Unwind_18040b630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x48);
  return;
}

// Unwind@18040b6b0
void Unwind_18040b6b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@18040b730
void Unwind_18040b730(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18040b7b0
void Unwind_18040b7b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@18040b830
void Unwind_18040b830(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x48);
  return;
}

// Unwind@18040b8b0
void Unwind_18040b8b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// func_0x18040b930
uint8_t (*func_0x18040b930(uint8_t (*param_1)[16],uint64_t *param_2,char *param_3))[16]
{
  uint64_t uVal_1;
  uint64_t *pU64_2;
  uint64_t uVal_3;
  func_ptr_t fnPtr_4;
  size_t sz_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  uint8_t (*pArr16_9)[16];
  uint64_t uVal_10;
  
  uVal_1 = param_2[2];
  sz_5 = strlen(param_3);
  uVal_8 = 0x7fffffffffffffff;
  if ((uVal_1 ^ 0x7fffffffffffffff) < sz_5) {
    func_0x18007ba70();
    fnPtr_4 = (func_ptr_t )swi(3);
    pArr16_9 = (uint8_t (*)[16])(*fnPtr_4)();
    return pArr16_9;
  }
  pU64_2 = (uint64_t *)*param_2;
  uVal_3 = param_2[3];
  *param_1 = ZEXT816(0);
  uVal_10 = sz_5 + uVal_1;
  uVal_6 = 0xf;
  pArr16_9 = param_1;
  if (uVal_10 < 0x10) goto LAB_18040b9f1;
  if ((int64_t)uVal_10 < 0) {
LAB_18040b9bd:
    lVal_7 = func_0x180672de0(uVal_8 + 0x28);
    pArr16_9 = (uint8_t (*)[16])(lVal_7 + 0x27U & 0xffffffffffffffe0);
    *(int64_t *)(pArr16_9[-1] + 8) = lVal_7;
    uVal_6 = uVal_8;
  }
  else {
    uVal_6 = uVal_10 | 0xf;
    uVal_8 = 0x16;
    if (0x16 < uVal_6) {
      uVal_8 = uVal_6;
    }
    if (0xffe < uVal_6) goto LAB_18040b9bd;
    pArr16_9 = (uint8_t (*)[16])func_0x180672de0(uVal_8 + 1);
    uVal_6 = uVal_8;
  }
  *(uint8_t (**)[16])*param_1 = pArr16_9;
LAB_18040b9f1:
  if (0xf < uVal_3) {
    param_2 = pU64_2;
  }
  *(uint64_t *)param_1[1] = uVal_10;
  *(uint64_t *)(param_1[1] + 8) = uVal_6;
  func_0x1806aa960(pArr16_9,param_2,uVal_1);
  func_0x1806aa960(*pArr16_9 + uVal_1,param_3,sz_5);
  (*pArr16_9)[uVal_10] = 0;
  return param_1;
}

// Unwind@18040c060
void Unwind_18040c060(uint64_t param_1,int64_t param_2)
{
  func_0x18040c180(param_2 + 0x28);
  return;
}

// Unwind@18040c0c0
void Unwind_18040c0c0(uint64_t param_1,int64_t param_2)
{
  func_0x18040c180(param_2 + 0x28);
  return;
}

// Unwind@18040c120
void Unwind_18040c120(uint64_t param_1,int64_t param_2)
{
  func_0x18040c180(param_2 + 0x28);
  return;
}

// func_0x18040c180
void func_0x18040c180(int64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    uVal_1 = param_1[3];
    if (0xf < uVal_1) {
      lVal_2 = *param_1;
      uVal_3 = uVal_1 + 1;
      if (0xfff < uVal_3) {
        if (0x1f < (uint64_t)((lVal_2 + -8) - *(int64_t *)(lVal_2 + -8))) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_3 = uVal_1 + 0x28;
        lVal_2 = *(int64_t *)(lVal_2 + -8);
      }
      thunk_FUN_180695dd0(lVal_2,uVal_3);
    }
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(uint8_t *)param_1 = 0;
  }
  return;
}

// Unwind@18040cd90
void Unwind_18040cd90(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  if (*(char *)(param_2 + 0x127) == '\0') {
    pU64_1 = *(uint64_t **)(param_2 + 0x118);
    do {
      pU64_1 = pU64_1 + -4;
      func_0x180001e70(pU64_1);
    } while (pU64_1 != &DAT_1808408e0);
  }
  func_0x180672f60(&DAT_180840960);
  return;
}

// Unwind@18040ce30
void Unwind_18040ce30(uint64_t param_1,int64_t param_2)
{
  func_0x18040c180(param_2 + 0xd0);
  return;
}

// Unwind@18040cea0
void Unwind_18040cea0(uint64_t param_1,int64_t param_2)
{
  func_0x18040c180(param_2 + 0xd0);
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18040cf20
void Unwind_18040cf20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18040cf90
void Unwind_18040cf90(uint64_t param_1,int64_t param_2)
{
  func_0x18040c180(param_2 + 0xd0);
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18040d010
void Unwind_18040d010(uint64_t param_1,int64_t param_2)
{
  func_0x18040c180(param_2 + 0xd0);
  return;
}

// Unwind@18040d080
void Unwind_18040d080(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14370) = 0;
  return;
}

// Unwind@18040d100
void Unwind_18040d100(uint64_t param_1,int64_t param_2)
{
  func_0x18040c180(param_2 + 0xd0);
  return;
}

// Unwind@18040d170
void Unwind_18040d170(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1438c) = 0;
  return;
}

// Unwind@18040d1f0
void Unwind_18040d1f0(uint64_t param_1,int64_t param_2)
{
  func_0x18040c180(param_2 + 0xd0);
  return;
}

// func_0x18040d260
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x18040d260(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cca0f;
  uStack_24 = _UNK_1806cca13;
  uStack_20 = _UNK_1806cca17;
  uStack_1c = _UNK_1806cca1b;
  local_18 = 0xb3e9e8f233ca9d50;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x142f8) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x142f8) = 1;
    func_0x18007d9e0(lVal_1 + 0x142dd,&local_28);
    func_0x180673140(&LAB_1804361d0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x142dd;
}

// Unwind@18040d300
void Unwind_18040d300(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x142f8) = 0;
  return;
}

// func_0x18040d330
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x18040d330(void)
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
  uStack_28 = _UNK_1806cca37;
  uStack_24 = _UNK_1806cca3b;
  uStack_20 = _UNK_1806cca3f;
  local_38 = _DAT_1806cca27;
  uStack_34 = _UNK_1806cca2b;
  uStack_30 = _UNK_1806cca2f;
  local_2c = _DAT_1806cca33;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x14318) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x14318) = 1;
    func_0x18008fba0(lVal_1 + 0x142f9,&local_38);
    func_0x180673140(&LAB_180436200);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x142f9;
}

// Unwind@18040d3d0
void Unwind_18040d3d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14318) = 0;
  return;
}

// func_0x18040d400
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x18040d400(void)
{
  int64_t lVal_1;
  uint32_t local_38;
  uint32_t uStack_34;
  uint16_t uStack_30;
  uint16_t local_2e;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint32_t uStack_26;
  uint32_t uStack_22;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = _UNK_1806cca53;
  uStack_26 = _UNK_1806cca55;
  uStack_22 = _UNK_1806cca59;
  local_38 = _DAT_1806cca43;
  uStack_34 = _UNK_1806cca47;
  uStack_30 = _UNK_1806cca4b;
  local_2e = _DAT_1806cca4d;
  uStack_2c = _UNK_1806cca4f;
  uStack_2a = _UNK_1806cca51;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x14334) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x14334) = 1;
    func_0x1800d9840(lVal_1 + 0x14319,&local_38);
    func_0x180673140(&LAB_180436230);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14319;
}

// Unwind@18040d4a0
void Unwind_18040d4a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14334) = 0;
  return;
}

// func_0x18040d4d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x18040d4d0(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  undefined7 uStack_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cca5d;
  uStack_24 = _UNK_1806cca61;
  uStack_20 = _UNK_1806cca65;
  uStack_1c = CONCAT13(0xd1,(int3)_UNK_1806cca69);
  uStack_18 = 0x2784cfa4fa5166;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x14350) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x14350) = 1;
    func_0x18007d3c0(lVal_1 + 0x14335,&local_28);
    func_0x180673140(&LAB_180436260);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14335;
}

// Unwind@18040d570
void Unwind_18040d570(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14350) = 0;
  return;
}

// func_0x18040d7d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18040d7d0(uint64_t *param_1)
{
  uint *pU64_1;
  char *fnPtr_2;
  uint64_t *pU64_3;
  uint8_t *pU64_4;
  uint8_t uVal_5;
  func_ptr_t fnPtr_6;
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint64_t *pU64_11;
  size_t sz_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  uint64_t uVal_15;
  uint64_t ***ptr3_U64_16;
  uint64_t *pU64_17;
  uint64_t ****ptr4_U64_18;
  uint8_t *pU64_19;
  uint64_t ****ptr4_U64_20;
  uint64_t uVal_21;
  uint uVal_22;
  uint uVal_23;
  uint uVal_24;
  uint uVal_25;
  uint uVal_26;
  uint uVal_27;
  uint uVal_28;
  uint32_t uVal_29;
  uint64_t in_stack_fffffffffffffd28;
  uint32_t uVal_32;
  uint64_t uVal_30;
  uint32_t *pU64_31;
  uint64_t in_stack_fffffffffffffd30;
  uint32_t uVal_34;
  uint8_t ***ptr3_U64_33;
  uint uVal_35;
  uint8_t **local_2a8;
  uint64_t *local_2a0;
  uint8_t ***local_270;
  uint8_t **local_268;
  uint64_t *local_260;
  uint8_t ***local_230;
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
  uint8_t local_d8 [16];
  uint32_t local_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint8_t uStack_b8;
  uint32_t uStack_b7;
  uint32_t uStack_b3;
  uint64_t *local_a0;
  uint64_t ****local_98;
  undefined6 uStack_90;
  uint8_t uStack_8a;
  uint8_t uStack_89;
  uint8_t uStack_88;
  uint16_t uStack_87;
  undefined3 uStack_85;
  uint16_t uStack_82;
  uint64_t uStack_80;
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
  
  uVal_34 = (uint32_t)((uint64_t)in_stack_fffffffffffffd30 >> 0x20);
  uVal_32 = (uint32_t)((uint64_t)in_stack_fffffffffffffd28 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  uStack_b8 = UNK_1806ccaca;
  uStack_b7 = _UNK_1806ccacb;
  uStack_b3 = _UNK_1806ccacf;
  local_c8 = _DAT_1806ccaba;
  uStack_c4 = _UNK_1806ccabe;
  uStack_c0 = _UNK_1806ccac2;
  uStack_bc = _UNK_1806ccac6;
  local_d8._8_8_ = _UNK_1806ccab2;
  local_d8._0_8_ = _DAT_1806ccaaa;
  local_a0 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x143b8) == '\0') {
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_14 + 0x143b8) = 1;
    func_0x180086af0(lVal_14 + 0x1438d,local_d8);
    func_0x180673140(&LAB_1804362f0);
  }
  uVal_28 = _UNK_1806b2d7c;
  uVal_25 = _UNK_1806b2d78;
  uVal_23 = _UNK_1806b2d74;
  uVal_35 = _DAT_1806b2d70;
  lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_14 + 0x1438d);
  if (*(char *)(lVal_14 + 0x143b6) == '\x01') {
    uVal_22 = *(uint *)(lVal_14 + 0x14391) ^ _UNK_1806b2d74;
    uVal_24 = *(uint *)(lVal_14 + 0x14395) ^ _UNK_1806b2d78;
    uVal_26 = *(uint *)(lVal_14 + 0x14399) ^ _UNK_1806b2d7c;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2d70;
    *(uint *)(lVal_14 + 0x14391) = uVal_22;
    *(uint *)(lVal_14 + 0x14395) = uVal_24;
    *(uint *)(lVal_14 + 0x14399) = uVal_26;
    auArr_7._4_4_ = *(uint *)(lVal_14 + 0x143a1) ^ uVal_23;
    auArr_7._0_4_ = *(uint *)(lVal_14 + 0x1439d) ^ uVal_35;
    auArr_7._8_4_ = *(uint *)(lVal_14 + 0x143a5) ^ uVal_25;
    auArr_7._12_4_ = *(uint *)(lVal_14 + 0x143a9) ^ uVal_28;
    *(uint8_t (*)[16])(lVal_14 + 0x1439d) = auArr_7;
    *(uint64_t *)(lVal_14 + 0x143ad) = *(uint64_t *)(lVal_14 + 0x143ad) ^ SUB168(_DAT_1806b5c20,0);
    *(byte *)(lVal_14 + 0x143b5) = *(byte *)(lVal_14 + 0x143b5) ^ 0x87;
    *(uint8_t *)(lVal_14 + 0x143b6) = 0;
  }
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  local_d8 = (uint8_t  [16])0x0;
  sz_12 = strlen((char *)pU64_1);
  if ((int64_t)sz_12 < 0) {
    func_0x18007ba70();
LAB_18040f485:
    local_61 = 1;
    func_0x18007ba70();
LAB_18040f492:
    local_68 = 1;
    func_0x18007ba70();
LAB_18040f49f:
    local_62 = 1;
    func_0x18007ba70();
LAB_18040f4ac:
    local_69 = 1;
    func_0x18007ba70();
LAB_18040f4b9:
    local_63 = 1;
    func_0x18007ba70();
LAB_18040f4c6:
    local_6a = 1;
    func_0x18007ba70();
LAB_18040f4d3:
    local_64 = 1;
    func_0x18007ba70();
LAB_18040f4e0:
    local_6b = 1;
    func_0x18007ba70();
LAB_18040f4ed:
    local_65 = 1;
    func_0x18007ba70();
LAB_18040f4fa:
    local_6c = 1;
    func_0x18007ba70();
LAB_18040f507:
    local_66 = 1;
    func_0x18007ba70();
LAB_18040f514:
    local_6d = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_12 < 0x10) {
      pU64_19 = local_d8;
      uVal_21 = 0xf;
    }
    else {
      uVal_13 = sz_12 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_13) {
        uVal_21 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        pU64_19 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
      }
      else {
        lVal_14 = func_0x180672de0(uVal_21 + 0x28);
        pU64_19 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_19;
    }
    local_c8 = (uint32_t)sz_12;
    uStack_c4 = (uint32_t)(sz_12 >> 0x20);
    uStack_c0 = (uint32_t)uVal_21;
    uStack_bc = (uint32_t)(uVal_21 >> 0x20);
    func_0x1806aa960(pU64_19,pU64_1,sz_12);
    pU64_19[sz_12] = 0;
    pU64_19 = local_d8;
    func_0x1801c2ba0(local_a0,0,0,pU64_19);
    uVal_21 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_21) {
      uVal_13 = uVal_21 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_18040f47e;
        uVal_13 = uVal_21 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_13);
    }
    *local_a0 = &PTR_LAB_1806c9c90;
    *(uint32_t *)(local_a0 + 0x10) = 0x41200000;
    *(uint16_t *)((int64_t)local_a0 + 0x84) = 0x101;
    *(uint8_t *)((int64_t)local_a0 + 0x86) = 1;
    uVal_10 = _UNK_1806c90dc;
    uVal_9 = _UNK_1806c90d8;
    uVal_29 = _UNK_1806c90d4;
    pU64_31 = (uint32_t *)((int64_t)local_a0 + 0x8c);
    *(uint32_t *)(local_a0 + 0x11) = _DAT_1806c90d0;
    *(uint32_t *)((int64_t)local_a0 + 0x8c) = uVal_29;
    *(uint32_t *)(local_a0 + 0x12) = uVal_9;
    *(uint32_t *)((int64_t)local_a0 + 0x94) = uVal_10;
    local_a0[0x13] = DAT_1806b28f0;
    *(uint32_t *)(local_a0 + 0x14) = 0xbf800000;
    *(uint8_t (*)[16])((int64_t)local_a0 + 0xb4) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])((int64_t)local_a0 + 0xa4) = (uint8_t  [16])0x0;
    *(uint32_t *)((int64_t)local_a0 + 0xc4) = 0;
    *(uint32_t *)(local_a0 + 0x18) = 0xffffffff;
    local_1e0 = 0;
    uVal_29 = DAT_1806b5c70;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_1e0 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_218);
      uVal_29 = *pU64_31;
    }
    local_98 = _DAT_1806ccad3;
    uStack_90 = (undefined6)_UNK_1806ccadb;
    uStack_8a = (uint8_t)((uint64_t)_UNK_1806ccadb >> 0x30);
    uStack_89 = 0xf4;
    uStack_88 = 0xb0;
    uStack_87 = 0xf595;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x143d0) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x143d0) = 1;
      func_0x18007cb80(lVal_14 + 0x143b9,&local_98);
      func_0x180673140(&LAB_180436320);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x143b9);
    func_0x18044a770(fnPtr_2);
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen(fnPtr_2);
    if ((int64_t)sz_12 < 0) goto LAB_18040f485;
    uVal_21 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_13) {
        uVal_21 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_61 = 1;
        pU64_19 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
      }
      else {
        local_61 = 1;
        lVal_14 = func_0x180672de0(uVal_21 + 0x28);
        pU64_19 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_19;
    }
    local_c8 = (uint32_t)sz_12;
    uStack_c4 = (uint32_t)(sz_12 >> 0x20);
    uStack_c0 = (uint32_t)uVal_21;
    uStack_bc = (uint32_t)(uVal_21 >> 0x20);
    func_0x1806aa960(pU64_19,fnPtr_2,sz_12);
    pU64_19[sz_12] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x143e8) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x143e8) = 1;
      *(uint8_t *)(lVal_14 + 0x143e4) = 1;
      *(uint64_t *)(lVal_14 + 0x143d8) = 0xe172bb6d98999e96;
      *(uint32_t *)(lVal_14 + 0x143e0) = 0xf79194b0;
      func_0x180673140(&LAB_180436350);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_14 + 0x143d8);
    if (*(char *)(lVal_14 + 0x143e4) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x91219b1ff7f5f1d5;
      *(uint *)(lVal_14 + 0x143e0) = *(uint *)(lVal_14 + 0x143e0) ^ 0xf7f5f1d5;
      *(uint8_t *)(lVal_14 + 0x143e4) = 0;
    }
    uStack_88 = 0;
    uStack_87 = 0;
    uStack_85 = 0;
    uStack_82 = 0;
    uStack_80 = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    sz_12 = strlen((char *)pU64_3);
    if ((int64_t)sz_12 < 0) goto LAB_18040f492;
    if (sz_12 < 0x10) {
      ptr4_U64_20 = &local_98;
      uVal_21 = 0xf;
    }
    else {
      uVal_13 = sz_12 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_13) {
        uVal_21 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_68 = 1;
        ptr4_U64_20 = (uint64_t ****)func_0x180672de0(uVal_21 + 1);
        local_98 = ptr4_U64_20;
      }
      else {
        local_68 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_21 + 0x28);
        ptr4_U64_20 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_20[-1] = ptr3_U64_16;
        local_98 = ptr4_U64_20;
      }
    }
    uStack_88 = (uint8_t)sz_12;
    uStack_87 = (uint16_t)(sz_12 >> 8);
    uStack_85 = (undefined3)(sz_12 >> 0x18);
    uStack_82 = (uint16_t)(sz_12 >> 0x30);
    uStack_80 = uVal_21;
    func_0x1806aa960(ptr4_U64_20,pU64_3,sz_12);
    *(uint8_t *)((int64_t)ptr4_U64_20 + sz_12) = 0;
    uVal_30 = CONCAT44(uVal_32,uVal_29);
    uVal_21 = CONCAT44(uVal_34,0x3f800000);
    ptr4_U64_20 = &local_98;
    pU64_19 = local_d8;
    func_0x1801cd2e0(local_a0,ptr4_U64_20,pU64_19,pU64_31,uVal_30,uVal_21,0x40a00000,local_218,0);
    uVal_32 = (uint32_t)((uint64_t)uVal_30 >> 0x20);
    if (0xf < uStack_80) {
      uVal_13 = uStack_80 + 1;
      ptr4_U64_18 = local_98;
      if (0xfff < uVal_13) {
        ptr4_U64_18 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_18)))
        goto LAB_18040f47e;
        uVal_13 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_18,uVal_13);
    }
    uVal_13 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_13) {
      uVal_15 = uVal_13 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_15) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_18040f47e;
        uVal_15 = uVal_13 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_15);
    }
    local_1a0 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_1a0 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_1d8);
    }
    pU64_17 = local_a0 + 0x12;
    uVal_34 = *(uint32_t *)pU64_17;
    local_98 = _DAT_1806ccae6;
    uStack_90 = (undefined6)_UNK_1806ccaee;
    uStack_8a = (uint8_t)((uint64_t)_UNK_1806ccaee >> 0x30);
    uStack_89 = (uint8_t)((uint64_t)_UNK_1806ccaee >> 0x38);
    uStack_88 = 0x78;
    uStack_87 = 0x28a1;
    uStack_85 = 0x1c2c51;
    uStack_82 = 0x650f;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14404) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x14404) = 1;
      func_0x18007d9e0(lVal_14 + 0x143e9,&local_98);
      func_0x180673140(&LAB_180436380);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x143e9);
    func_0x18036fea0(fnPtr_2);
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen(fnPtr_2);
    if ((int64_t)sz_12 < 0) goto LAB_18040f49f;
    uVal_13 = 0xf;
    if (0xf < sz_12) {
      uVal_15 = sz_12 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_15) {
        uVal_13 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_62 = 1;
        pU64_19 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        local_62 = 1;
        lVal_14 = func_0x180672de0(uVal_13 + 0x28);
        pU64_19 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_19;
    }
    local_c8 = (uint32_t)sz_12;
    uStack_c4 = (uint32_t)(sz_12 >> 0x20);
    uStack_c0 = (uint32_t)uVal_13;
    uStack_bc = (uint32_t)(uVal_13 >> 0x20);
    func_0x1806aa960(pU64_19,fnPtr_2,sz_12);
    pU64_19[sz_12] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14414) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x14414) = 1;
      *(uint64_t *)(lVal_14 + 0x14408) = 0xc151237503db25e;
      *(uint32_t *)(lVal_14 + 0x14410) = 0x149bd62;
      func_0x180673140(&LAB_1804363b0);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_14 + 0x14408);
    if (*(char *)(lVal_14 + 0x14413) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x656173452549d30d;
      *(uint *)(lVal_14 + 0x14410) =
           (*(uint *)(lVal_14 + 0x14410) & 0xffff | (uint)*(byte *)(lVal_14 + 0x14412) << 0x10) ^
           SUB164(_DAT_1806b5cf0,0);
    }
    uStack_88 = 0;
    uStack_87 = 0;
    uStack_85 = 0;
    uStack_82 = 0;
    uStack_80 = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    sz_12 = strlen((char *)pU64_3);
    if ((int64_t)sz_12 < 0) goto LAB_18040f4ac;
    uVal_13 = 0xf;
    if (0xf < sz_12) {
      uVal_15 = sz_12 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_15) {
        uVal_13 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_69 = 1;
        ptr4_U64_20 = (uint64_t ****)func_0x180672de0(uVal_13 + 1);
        local_98 = ptr4_U64_20;
      }
      else {
        local_69 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_13 + 0x28);
        ptr4_U64_20 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_20[-1] = ptr3_U64_16;
        local_98 = ptr4_U64_20;
      }
    }
    uStack_88 = (uint8_t)sz_12;
    uStack_87 = (uint16_t)(sz_12 >> 8);
    uStack_85 = (undefined3)(sz_12 >> 0x18);
    uStack_82 = (uint16_t)(sz_12 >> 0x30);
    uStack_80 = uVal_13;
    func_0x1806aa960(ptr4_U64_20,pU64_3,sz_12);
    *(uint8_t *)((int64_t)ptr4_U64_20 + sz_12) = 0;
    uVal_35 = 0x3f800000;
    ptr4_U64_20 = &local_98;
    pU64_19 = local_d8;
    func_0x1801cd2e0(local_a0,ptr4_U64_20,pU64_19,pU64_17,CONCAT44(uVal_32,uVal_34),
                  uVal_21 & 0xffffffff00000000,0x3f800000,local_1d8,0);
    if (0xf < uStack_80) {
      uVal_21 = uStack_80 + 1;
      ptr4_U64_18 = local_98;
      if (0xfff < uVal_21) {
        ptr4_U64_18 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_18)))
        goto LAB_18040f47e;
        uVal_21 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_18,uVal_21);
    }
    uVal_21 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_21) {
      uVal_13 = uVal_21 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_18040f47e;
        uVal_13 = uVal_21 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_13);
    }
    local_160 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_160 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_198);
    }
    pU64_4 = (uint8_t *)((int64_t)local_a0 + 0x85);
    uVal_5 = *pU64_4;
    local_c8 = _DAT_1806ccb0e;
    uStack_c4 = _UNK_1806ccb12;
    uStack_c0 = _UNK_1806ccb16;
    local_d8._8_8_ = _UNK_1806ccb06;
    local_d8._0_8_ = _DAT_1806ccafe;
    uStack_bc = CONCAT31(0xcfa2d7,(char)_UNK_1806ccb1a);
    uStack_b8 = 0xb1;
    uStack_b7 = 0x81d5ad16;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1443c) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x1443c) = 1;
      func_0x1801b1390(lVal_14 + 0x14415,local_d8);
      func_0x180673140(&LAB_1804363e0);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x14415);
    func_0x18036f9d0(fnPtr_2);
    uStack_88 = 0;
    uStack_87 = 0;
    uStack_85 = 0;
    uStack_82 = 0;
    uStack_80 = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    sz_12 = strlen(fnPtr_2);
    if ((int64_t)sz_12 < 0) goto LAB_18040f4b9;
    uVal_21 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_13) {
        uVal_21 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_63 = 1;
        ptr4_U64_20 = (uint64_t ****)func_0x180672de0(uVal_21 + 1);
        local_98 = ptr4_U64_20;
      }
      else {
        local_63 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_21 + 0x28);
        ptr4_U64_20 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_20[-1] = ptr3_U64_16;
        local_98 = ptr4_U64_20;
      }
    }
    uStack_88 = (uint8_t)sz_12;
    uStack_87 = (uint16_t)(sz_12 >> 8);
    uStack_85 = (undefined3)(sz_12 >> 0x18);
    uStack_82 = (uint16_t)(sz_12 >> 0x30);
    uStack_80 = uVal_21;
    func_0x1806aa960(ptr4_U64_20,fnPtr_2,sz_12);
    *(uint8_t *)((int64_t)ptr4_U64_20 + sz_12) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1444c) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x1444c) = 1;
      *(uint64_t *)(lVal_14 + 0x14440) = 0x9aa8cde6cab61287;
      *(uint32_t *)(lVal_14 + 0x14448) = 0x1d517ab;
      func_0x180673140(&LAB_180436410);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_14 + 0x14440);
    if (*(char *)(lVal_14 + 0x1444b) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xefc7bf81a1d573c5;
      *(uint *)(lVal_14 + 0x14448) =
           (*(uint *)(lVal_14 + 0x14448) & 0xffff | (uint)*(byte *)(lVal_14 + 0x1444a) << 0x10) ^
           SUB164(_DAT_1806be670,0);
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen((char *)pU64_3);
    if ((int64_t)sz_12 < 0) goto LAB_18040f4c6;
    uVal_21 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_13) {
        uVal_21 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_6a = 1;
        pU64_19 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
      }
      else {
        local_6a = 1;
        lVal_14 = func_0x180672de0(uVal_21 + 0x28);
        pU64_19 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_19;
    }
    local_c8 = (uint32_t)sz_12;
    uStack_c4 = (uint32_t)(sz_12 >> 0x20);
    uStack_c0 = (uint32_t)uVal_21;
    uStack_bc = (uint32_t)(uVal_21 >> 0x20);
    func_0x1806aa960(pU64_19,pU64_3,sz_12);
    pU64_19[sz_12] = 0;
    uVal_35 = uVal_35 & 0xffffff00;
    pU64_19 = local_d8;
    ptr4_U64_20 = &local_98;
    func_0x1801ccd70(local_a0,pU64_19,ptr4_U64_20,pU64_4,uVal_5,local_198,uVal_35);
    uVal_21 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_21) {
      uVal_13 = uVal_21 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_18040f47e;
        uVal_13 = uVal_21 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_13);
    }
    if (0xf < uStack_80) {
      uVal_21 = uStack_80 + 1;
      ptr4_U64_18 = local_98;
      if (0xfff < uVal_21) {
        ptr4_U64_18 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_18)))
        goto LAB_18040f47e;
        uVal_21 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_18,uVal_21);
    }
    local_120 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_120 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_158);
    }
    pU64_4 = (uint8_t *)((int64_t)local_a0 + 0x84);
    uVal_5 = *pU64_4;
    local_c8 = _DAT_1806ccb33;
    uStack_c4 = _UNK_1806ccb37;
    uStack_c0 = _UNK_1806ccb3b;
    uStack_bc = _UNK_1806ccb3f;
    local_d8._8_8_ = _UNK_1806ccb2b;
    local_d8._0_8_ = _DAT_1806ccb23;
    uStack_b8 = 0x59;
    uStack_b7 = 0x502ecad8;
    uStack_b3 = CONCAT13(uStack_b3._3_1_,0x899245);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14478) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x14478) = 1;
      func_0x1801b39d0(lVal_14 + 0x1444d,local_d8);
      func_0x180673140(&LAB_180436440);
    }
    uVal_22 = _UNK_1806b2cbc;
    uVal_28 = _UNK_1806b2cb8;
    uVal_25 = _UNK_1806b2cb4;
    uVal_23 = _DAT_1806b2cb0;
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_14 + 0x1444d);
    if (*(char *)(lVal_14 + 0x14475) == '\x01') {
      uVal_24 = *(uint *)(lVal_14 + 0x14451) ^ _UNK_1806b2cb4;
      uVal_26 = *(uint *)(lVal_14 + 0x14455) ^ _UNK_1806b2cb8;
      uVal_27 = *(uint *)(lVal_14 + 0x14459) ^ _UNK_1806b2cbc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2cb0;
      *(uint *)(lVal_14 + 0x14451) = uVal_24;
      *(uint *)(lVal_14 + 0x14455) = uVal_26;
      *(uint *)(lVal_14 + 0x14459) = uVal_27;
      auArr_8._4_4_ = *(uint *)(lVal_14 + 0x14461) ^ uVal_25;
      auArr_8._0_4_ = *(uint *)(lVal_14 + 0x1445d) ^ uVal_23;
      auArr_8._8_4_ = *(uint *)(lVal_14 + 0x14465) ^ uVal_28;
      auArr_8._12_4_ = *(uint *)(lVal_14 + 0x14469) ^ uVal_22;
      *(uint8_t (*)[16])(lVal_14 + 0x1445d) = auArr_8;
      *(uint64_t *)(lVal_14 + 0x1446d) = *(uint64_t *)(lVal_14 + 0x1446d) ^ SUB168(_DAT_1806b54e0,0)
      ;
      *(uint8_t *)(lVal_14 + 0x14475) = 0;
    }
    uStack_88 = 0;
    uStack_87 = 0;
    uStack_85 = 0;
    uStack_82 = 0;
    uStack_80 = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    sz_12 = strlen((char *)pU64_1);
    if ((int64_t)sz_12 < 0) goto LAB_18040f4d3;
    uVal_21 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_13) {
        uVal_21 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_64 = 1;
        ptr4_U64_20 = (uint64_t ****)func_0x180672de0(uVal_21 + 1);
        local_98 = ptr4_U64_20;
      }
      else {
        local_64 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_21 + 0x28);
        ptr4_U64_20 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_20[-1] = ptr3_U64_16;
        local_98 = ptr4_U64_20;
      }
    }
    uStack_88 = (uint8_t)sz_12;
    uStack_87 = (uint16_t)(sz_12 >> 8);
    uStack_85 = (undefined3)(sz_12 >> 0x18);
    uStack_82 = (uint16_t)(sz_12 >> 0x30);
    uStack_80 = uVal_21;
    func_0x1806aa960(ptr4_U64_20,pU64_1,sz_12);
    *(uint8_t *)((int64_t)ptr4_U64_20 + sz_12) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14490) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x14490) = 1;
      *(uint8_t *)(lVal_14 + 0x1448c) = 1;
      *(uint64_t *)(lVal_14 + 0x14480) = 0xee9a7f5226c0dd76;
      *(uint32_t *)(lVal_14 + 0x14488) = 0x45ccdd52;
      func_0x180673140(&LAB_180436470);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_14 + 0x14480);
    if (*(char *)(lVal_14 + 0x1448c) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x89f52b3945a9b135;
      *(uint *)(lVal_14 + 0x14488) = *(uint *)(lVal_14 + 0x14488) ^ 0x45a9b135;
      *(uint8_t *)(lVal_14 + 0x1448c) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen((char *)pU64_3);
    if ((int64_t)sz_12 < 0) goto LAB_18040f4e0;
    uVal_21 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_13) {
        uVal_21 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_6b = 1;
        pU64_19 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
      }
      else {
        local_6b = 1;
        lVal_14 = func_0x180672de0(uVal_21 + 0x28);
        pU64_19 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_19;
    }
    local_c8 = (uint32_t)sz_12;
    uStack_c4 = (uint32_t)(sz_12 >> 0x20);
    uStack_c0 = (uint32_t)uVal_21;
    uStack_bc = (uint32_t)(uVal_21 >> 0x20);
    func_0x1806aa960(pU64_19,pU64_3,sz_12);
    pU64_19[sz_12] = 0;
    uVal_35 = uVal_35 & 0xffffff00;
    pU64_19 = local_d8;
    ptr4_U64_20 = &local_98;
    func_0x1801ccd70(local_a0,pU64_19,ptr4_U64_20,pU64_4,uVal_5,local_158,uVal_35);
    uVal_21 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_21) {
      uVal_13 = uVal_21 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_18040f47e;
        uVal_13 = uVal_21 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_13);
    }
    if (0xf < uStack_80) {
      uVal_21 = uStack_80 + 1;
      ptr4_U64_18 = local_98;
      if (0xfff < uVal_21) {
        ptr4_U64_18 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_18)))
        goto LAB_18040f47e;
        uVal_21 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_18,uVal_21);
    }
    local_e0 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_e0 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_118);
    }
    pU64_4 = (uint8_t *)((int64_t)local_a0 + 0x86);
    uVal_5 = *pU64_4;
    local_98 = _DAT_1806ccb4b;
    uStack_90 = (undefined6)_UNK_1806ccb53;
    uStack_8a = 0xda;
    uStack_89 = 0x9e;
    uStack_88 = 0x27;
    uStack_87 = 0x5358;
    uStack_85 = 0xd54bd;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x144a8) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x144a8) = 1;
      func_0x18007cab0(lVal_14 + 0x14491,&local_98);
      func_0x180673140(&LAB_1804364a0);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x14491);
    func_0x18036e8f0(fnPtr_2);
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen(fnPtr_2);
    if ((int64_t)sz_12 < 0) goto LAB_18040f4ed;
    uVal_21 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_13) {
        uVal_21 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_65 = 1;
        pU64_19 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
      }
      else {
        local_65 = 1;
        lVal_14 = func_0x180672de0(uVal_21 + 0x28);
        pU64_19 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_19;
    }
    local_c8 = (uint32_t)sz_12;
    uStack_c4 = (uint32_t)(sz_12 >> 0x20);
    uStack_c0 = (uint32_t)uVal_21;
    uStack_bc = (uint32_t)(uVal_21 >> 0x20);
    func_0x1806aa960(pU64_19,fnPtr_2,sz_12);
    pU64_19[sz_12] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x144bc) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x144bc) = 1;
      *(uint64_t *)(lVal_14 + 0x144b0) = 0x94db634ebb44540e;
      *(uint16_t *)(lVal_14 + 0x144b8) = 0x145;
      func_0x180673140(&LAB_1804364d0);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_14 + 0x144b0);
    if (*(char *)(lVal_14 + 0x144b9) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xe7bf0d27d93d3145;
      *(byte *)(lVal_14 + 0x144b8) = *(byte *)(lVal_14 + 0x144b8) ^ 0x45;
      *(uint8_t *)(lVal_14 + 0x144b9) = 0;
    }
    uStack_88 = 0;
    uStack_87 = 0;
    uStack_85 = 0;
    uStack_82 = 0;
    uStack_80 = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    sz_12 = strlen((char *)pU64_3);
    if ((int64_t)sz_12 < 0) goto LAB_18040f4fa;
    uVal_21 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_13) {
        uVal_21 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_6c = 1;
        ptr4_U64_20 = (uint64_t ****)func_0x180672de0(uVal_21 + 1);
        local_98 = ptr4_U64_20;
      }
      else {
        local_6c = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_21 + 0x28);
        ptr4_U64_20 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_20[-1] = ptr3_U64_16;
        local_98 = ptr4_U64_20;
      }
    }
    uStack_88 = (uint8_t)sz_12;
    uStack_87 = (uint16_t)(sz_12 >> 8);
    uStack_85 = (undefined3)(sz_12 >> 0x18);
    uStack_82 = (uint16_t)(sz_12 >> 0x30);
    uStack_80 = uVal_21;
    func_0x1806aa960(ptr4_U64_20,pU64_3,sz_12);
    *(uint8_t *)((int64_t)ptr4_U64_20 + sz_12) = 0;
    uVal_35 = uVal_35 & 0xffffff00;
    ptr4_U64_20 = &local_98;
    pU64_19 = local_d8;
    func_0x1801ccd70(local_a0,ptr4_U64_20,pU64_19,pU64_4,uVal_5,local_118,uVal_35);
    if (0xf < uStack_80) {
      uVal_21 = uStack_80 + 1;
      ptr4_U64_18 = local_98;
      if (0xfff < uVal_21) {
        ptr4_U64_18 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_18)))
        goto LAB_18040f47e;
        uVal_21 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_18,uVal_21);
    }
    uVal_21 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_21) {
      uVal_13 = uVal_21 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_18040f47e;
        uVal_13 = uVal_21 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_13);
    }
    local_2a8 = &PTR_LAB_1806b5930;
    local_2a0 = local_a0;
    local_270 = &local_2a8;
    local_228 = *(uint32_t *)((int64_t)local_a0 + 0x94);
    uStack_224 = *(uint32_t *)(local_a0 + 0x13);
    uStack_220 = *(uint32_t *)((int64_t)local_a0 + 0x9c);
    uStack_21c = *(uint32_t *)(local_a0 + 0x14);
    local_98 = _DAT_1806ba23c;
    uStack_90 = (undefined6)_UNK_1806ba244;
    uStack_8a = (uint8_t)((uint64_t)_UNK_1806ba244 >> 0x30);
    uStack_89 = (uint8_t)((uint64_t)_UNK_1806ba244 >> 0x38);
    uStack_88 = 0x1d;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x144d0) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x144d0) = 1;
      func_0x18007d2b0(lVal_14 + 0x144bd,&local_98);
      func_0x180673140(&LAB_180436500);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_14 + 0x144bd);
    if (*(char *)(lVal_14 + 0x144ce) == '\x01') {
      uVal_23 = *(uint *)(lVal_14 + 0x144c1) ^ _UNK_1806b2d84;
      uVal_25 = *(uint *)(lVal_14 + 0x144c5) ^ _UNK_1806b2d88;
      uVal_28 = *(uint *)(lVal_14 + 0x144c9) ^ _UNK_1806b2d8c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d80;
      *(uint *)(lVal_14 + 0x144c1) = uVal_23;
      *(uint *)(lVal_14 + 0x144c5) = uVal_25;
      *(uint *)(lVal_14 + 0x144c9) = uVal_28;
      *(byte *)(lVal_14 + 0x144cd) = *(byte *)(lVal_14 + 0x144cd) ^ 0x1d;
      *(uint8_t *)(lVal_14 + 0x144ce) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen((char *)pU64_1);
    if ((int64_t)sz_12 < 0) goto LAB_18040f507;
    uVal_21 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_13) {
        uVal_21 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_66 = 1;
        pU64_19 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
      }
      else {
        local_66 = 1;
        lVal_14 = func_0x180672de0(uVal_21 + 0x28);
        pU64_19 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_19;
    }
    local_c8 = (uint32_t)sz_12;
    uStack_c4 = (uint32_t)(sz_12 >> 0x20);
    uStack_c0 = (uint32_t)uVal_21;
    uStack_bc = (uint32_t)(uVal_21 >> 0x20);
    func_0x1806aa960(pU64_19,pU64_1,sz_12);
    pU64_19[sz_12] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x144dc) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x144dc) = 1;
      *(uint8_t *)(lVal_14 + 0x144da) = 1;
      *(uint32_t *)(lVal_14 + 0x144d4) = 0x6421185e;
      *(uint16_t *)(lVal_14 + 0x144d8) = 0x3cd;
      func_0x180673140(&LAB_180436530);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_14 + 0x144d4);
    if (*(char *)(lVal_14 + 0x144da) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xb4d771d;
      *(byte *)(lVal_14 + 0x144d8) = *(byte *)(lVal_14 + 0x144d8) ^ 0xbf;
      *(byte *)(lVal_14 + 0x144d9) = *(byte *)(lVal_14 + 0x144d9) ^ 3;
      *(uint8_t *)(lVal_14 + 0x144da) = 0;
    }
    uStack_88 = 0;
    uStack_87 = 0;
    uStack_85 = 0;
    uStack_82 = 0;
    uStack_80 = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    sz_12 = strlen((char *)pU64_1);
    if ((int64_t)sz_12 < 0) goto LAB_18040f514;
    uVal_21 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_13) {
        uVal_21 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_6d = 1;
        ptr4_U64_20 = (uint64_t ****)func_0x180672de0(uVal_21 + 1);
        local_98 = ptr4_U64_20;
      }
      else {
        local_6d = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_21 + 0x28);
        ptr4_U64_20 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_20[-1] = ptr3_U64_16;
        local_98 = ptr4_U64_20;
      }
    }
    pU64_17 = local_a0;
    lVal_14 = (int64_t)local_a0 + 0x94;
    uStack_88 = (uint8_t)sz_12;
    uStack_87 = (uint16_t)(sz_12 >> 8);
    uStack_85 = (undefined3)(sz_12 >> 0x18);
    uStack_82 = (uint16_t)(sz_12 >> 0x30);
    uStack_80 = uVal_21;
    func_0x1806aa960(ptr4_U64_20,pU64_1,sz_12);
    *(uint8_t *)((int64_t)ptr4_U64_20 + sz_12) = 0;
    ptr3_U64_33 = &local_2a8;
    pU64_31 = &local_228;
    ptr4_U64_20 = &local_98;
    pU64_19 = local_d8;
    func_0x1801cd600(pU64_17,ptr4_U64_20,pU64_19,lVal_14,pU64_31,ptr3_U64_33,uVal_35 & 0xffffff00);
    uVal_32 = (uint32_t)((uint64_t)pU64_31 >> 0x20);
    if (0xf < uStack_80) {
      uVal_21 = uStack_80 + 1;
      ptr4_U64_18 = local_98;
      if (0xfff < uVal_21) {
        ptr4_U64_18 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_18)))
        goto LAB_18040f47e;
        uVal_21 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_18,uVal_21);
    }
    uVal_21 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_21) {
      uVal_13 = uVal_21 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_18040f47e;
        uVal_13 = uVal_21 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_13);
    }
    local_268 = &PTR_LAB_1806b5930;
    local_260 = local_a0;
    local_230 = &local_268;
    uVal_34 = *(uint32_t *)(local_a0 + 0x11);
    local_98 = _DAT_1806ccb61;
    uStack_90 = (undefined6)_UNK_1806ccb69;
    uStack_8a = (uint8_t)((uint64_t)_UNK_1806ccb69 >> 0x30);
    uStack_89 = 0xb0;
    uStack_88 = 0x59;
    uStack_87 = 0xcf9a;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x144f4) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x144f4) = 1;
      func_0x18007cb80(lVal_14 + 0x144dd,&local_98);
      func_0x180673140(&LAB_180436560);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x144dd);
    func_0x1801bf220(fnPtr_2);
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen(fnPtr_2);
    if (-1 < (int64_t)sz_12) {
      uVal_21 = 0xf;
      if (0xf < sz_12) {
        uVal_13 = sz_12 | 0xf;
        uVal_21 = 0x16;
        if (0x16 < uVal_13) {
          uVal_21 = uVal_13;
        }
        if (uVal_13 < 0xfff) {
          local_67 = 1;
          pU64_19 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
        }
        else {
          local_67 = 1;
          lVal_14 = func_0x180672de0(uVal_21 + 0x28);
          pU64_19 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_19 + -8) = lVal_14;
        }
        local_d8._0_8_ = pU64_19;
      }
      local_c8 = (uint32_t)sz_12;
      uStack_c4 = (uint32_t)(sz_12 >> 0x20);
      uStack_c0 = (uint32_t)uVal_21;
      uStack_bc = (uint32_t)(uVal_21 >> 0x20);
      func_0x1806aa960(pU64_19,fnPtr_2,sz_12);
      pU64_19[sz_12] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x14504) == '\0') {
        lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_14 + 0x14504) = 1;
        *(uint8_t *)(lVal_14 + 0x14500) = 1;
        *(uint64_t *)(lVal_14 + 0x144f8) = 0xd9ea9bd27aae9362;
        func_0x180673140(&LAB_180436590);
      }
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_3 = (uint64_t *)(lVal_14 + 0x144f8);
      if (*(char *)(lVal_14 + 0x14500) == '\x01') {
        *pU64_3 = *pU64_3 ^ 0xd993efbb19cfe32d;
        *(uint8_t *)(lVal_14 + 0x14500) = 0;
      }
      local_98 = (uint64_t ****)0x0;
      uStack_90 = 0;
      uStack_8a = 0;
      uStack_89 = 0;
      sz_12 = strlen((char *)pU64_3);
      if (-1 < (int64_t)sz_12) {
        uVal_21 = 0xf;
        if (0xf < sz_12) {
          uVal_13 = sz_12 | 0xf;
          uVal_21 = 0x16;
          if (0x16 < uVal_13) {
            uVal_21 = uVal_13;
          }
          if (uVal_13 < 0xfff) {
            local_6e = 1;
            ptr4_U64_20 = (uint64_t ****)func_0x180672de0(uVal_21 + 1);
            local_98 = ptr4_U64_20;
          }
          else {
            local_6e = 1;
            ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_21 + 0x28);
            ptr4_U64_20 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
            ptr4_U64_20[-1] = ptr3_U64_16;
            local_98 = ptr4_U64_20;
          }
        }
        pU64_11 = local_a0;
        pU64_17 = local_a0 + 0x11;
        uStack_88 = (uint8_t)sz_12;
        uStack_87 = (uint16_t)(sz_12 >> 8);
        uStack_85 = (undefined3)(sz_12 >> 0x18);
        uStack_82 = (uint16_t)(sz_12 >> 0x30);
        uStack_80 = uVal_21;
        func_0x1806aa960(ptr4_U64_20,pU64_3,sz_12);
        *(uint8_t *)((int64_t)ptr4_U64_20 + sz_12) = 0;
        func_0x1801cd2e0(pU64_11,&local_98,local_d8,pU64_17,CONCAT44(uVal_32,uVal_34),
                      (uint64_t)ptr3_U64_33 & 0xffffffff00000000,0x3f800000,&local_268,0);
        if (0xf < uStack_80) {
          uVal_21 = uStack_80 + 1;
          ptr4_U64_20 = local_98;
          if (0xfff < uVal_21) {
            ptr4_U64_20 = (uint64_t ****)local_98[-1];
            if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_20)))
            goto LAB_18040f47e;
            uVal_21 = uStack_80 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_20,uVal_21);
        }
        uVal_21 = CONCAT44(uStack_bc,uStack_c0);
        if (0xf < uVal_21) {
          uVal_13 = uVal_21 + 1;
          lVal_14 = local_d8._0_8_;
          if (0xfff < uVal_13) {
            lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) {
LAB_18040f47e:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_13 = uVal_21 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_14,uVal_13);
        }
        return local_a0;
      }
      goto LAB_18040f52e;
    }
  }
  local_67 = 1;
  func_0x18007ba70();
LAB_18040f52e:
  local_6e = 1;
  func_0x18007ba70();
  fnPtr_6 = (func_ptr_t )swi(3);
  pU64_17 = (uint64_t *)(*fnPtr_6)();
  return pU64_17;
}

// Unwind@18040f540
void Unwind_18040f540(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x118);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xe0));
    *(uint64_t *)(param_2 + 0x118) = 0;
  }
  return;
}

// Unwind@18040f5a0
void Unwind_18040f5a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x143d0) = 0;
  *(uint8_t *)(param_2 + 0x297) = 1;
  return;
}

// Unwind@18040f600
void Unwind_18040f600(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x158);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x120));
    *(uint64_t *)(param_2 + 0x158) = 0;
  }
  return;
}

// Unwind@18040f670
void Unwind_18040f670(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14404) = 0;
  *(uint8_t *)(param_2 + 0x296) = 1;
  return;
}

// Unwind@18040f6d0
void Unwind_18040f6d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x198);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x160));
    *(uint64_t *)(param_2 + 0x198) = 0;
  }
  return;
}

// Unwind@18040f740
void Unwind_18040f740(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1443c) = 0;
  *(uint8_t *)(param_2 + 0x295) = 1;
  return;
}

// Unwind@18040f7a0
void Unwind_18040f7a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1d8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1a0));
    *(uint64_t *)(param_2 + 0x1d8) = 0;
  }
  return;
}

// Unwind@18040f810
void Unwind_18040f810(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14478) = 0;
  *(uint8_t *)(param_2 + 0x294) = 1;
  return;
}

// Unwind@18040f870
void Unwind_18040f870(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x218);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1e0));
    *(uint64_t *)(param_2 + 0x218) = 0;
  }
  return;
}

// Unwind@18040f8e0
void Unwind_18040f8e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x144a8) = 0;
  *(uint8_t *)(param_2 + 0x293) = 1;
  return;
}

// Unwind@18040f940
void Unwind_18040f940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  return;
}

// Unwind@18040f990
void Unwind_18040f990(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x290) = 0;
  return;
}

// Unwind@18040f9e0
void Unwind_18040f9e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x290);
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x297) = uVal_1;
  return;
}

// Unwind@18040fa30
void Unwind_18040fa30(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x297) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x118), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xe0));
    *(uint64_t *)(param_2 + 0x118) = 0;
  }
  return;
}

// Unwind@18040faa0
void Unwind_18040faa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x28f) = 0;
  return;
}

// Unwind@18040faf0
void Unwind_18040faf0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x28f);
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x296) = uVal_1;
  return;
}

// Unwind@18040fb40
void Unwind_18040fb40(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x296) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x158), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x120));
    *(uint64_t *)(param_2 + 0x158) = 0;
  }
  return;
}

// Unwind@18040fbb0
void Unwind_18040fbb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x28e) = 0;
  return;
}

// Unwind@18040fc00
void Unwind_18040fc00(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x28e);
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x295) = uVal_1;
  return;
}

// Unwind@18040fc50
void Unwind_18040fc50(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x295) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x198), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x160));
    *(uint64_t *)(param_2 + 0x198) = 0;
  }
  return;
}

// Unwind@18040fcc0
void Unwind_18040fcc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x28d) = 0;
  return;
}

// Unwind@18040fd10
void Unwind_18040fd10(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x28d);
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x294) = uVal_1;
  return;
}

// Unwind@18040fd60
void Unwind_18040fd60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x294) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1d8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1a0));
    *(uint64_t *)(param_2 + 0x1d8) = 0;
  }
  return;
}

// Unwind@18040fdd0
void Unwind_18040fdd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x28c) = 0;
  return;
}

// Unwind@18040fe20
void Unwind_18040fe20(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x28c);
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x293) = uVal_1;
  return;
}

// Unwind@18040fe70
void Unwind_18040fe70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x293) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x218), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1e0));
    *(uint64_t *)(param_2 + 0x218) = 0;
  }
  return;
}

// Unwind@18040fee0
void Unwind_18040fee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x28b) = 0;
  return;
}

// Unwind@18040ff30
void Unwind_18040ff30(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x28b);
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x292) = uVal_1;
  return;
}

// Unwind@18040ff80
void Unwind_18040ff80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x292) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@18040fff0
void Unwind_18040fff0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x28a) = 0;
  return;
}

// Unwind@180410040
void Unwind_180410040(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x28a);
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x291) = uVal_1;
  return;
}

// Unwind@180410090
void Unwind_180410090(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x291) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@180410100
void Unwind_180410100(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 600);
  func_0x1800822d0(lVal_1 + 0xa8);
  func_0x1801c49a0(lVal_1);
  return;
}

// Unwind@180410160
void Unwind_180410160(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x143b8) = 0;
  return;
}

// Unwind@1804101c0
void Unwind_1804101c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x144d0) = 0;
  *(uint8_t *)(param_2 + 0x292) = 1;
  return;
}

// Unwind@180410220
void Unwind_180410220(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x144f4) = 0;
  *(uint8_t *)(param_2 + 0x291) = 1;
  return;
}

// Unwind@180410530
void Unwind_180410530(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1452c) = 0;
  return;
}

// Unwind@180411870
void Unwind_180411870(void)
{
  func_0x180672f60(&DAT_180840978);
  return;
}

// Unwind@180411950
void Unwind_180411950(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180411a30
void Unwind_180411a30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@180411b10
void Unwind_180411b10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@180411bf0
void Unwind_180411bf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180411cd0
void Unwind_180411cd0(uint64_t param_1,int64_t param_2)
{
  func_0x180438440(param_2 + 0x170);
  return;
}

// Unwind@180411db0
void Unwind_180411db0(void)
{
  func_0x180672f60(&DAT_180840968);
  return;
}

// Unwind@180411e90
void Unwind_180411e90(uint64_t param_1,int64_t param_2)
{
  func_0x1804125a0(param_2 + 0x120);
  return;
}

// func_0x180411f70
uint8_t (*func_0x180411f70(uint8_t (*param_1)[16],int64_t **param_2))[16]
{
  int *pInt_1;
  uint64_t *_Str;
  float fVal_2;
  uint uVal_3;
  int64_t *pLong_4;
  func_ptr_t fnPtr_5;
  int64_t **ptr2_Long_6;
  uint8_t uVal_7;
  uint32_t uVal_8;
  int64_t *pLong_9;
  size_t sz_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint8_t (*pArr16_13)[16];
  int64_t lVal_14;
  uint8_t *pU64_15;
  uint8_t *pU64_16;
  uint8_t (*pArr16_17)[16];
  uint64_t uVal_18;
  uint8_t local_d8 [32];
  uint8_t local_b8 [32];
  uint8_t local_98 [16];
  uint8_t local_88 [24];
  uint local_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
  uint64_t local_60;
  uint64_t uStack_58;
  uint8_t (*local_50)[16];
  int64_t **local_48;
  uint8_t (*local_40)[16];
  uint8_t local_32;
  uint8_t local_31;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_50 = param_1 + 1;
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[2] = 0;
  *(uint8_t **)(param_1[2] + 8) = &DAT_0000000f;
  param_1[4][8] = 1;
  local_48 = param_2;
  local_40 = param_1;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840988) && (func_0x180672ec0(&DAT_180840988), DAT_180840988 == -1)) {
    DAT_180840980 = func_0x18023f3d0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_180840988);
    param_1 = local_40;
    param_2 = local_48;
  }
  param_1[3][0] = *(uint8_t *)(*param_2 + 8);
  uVal_8 = (**(func_ptr_t *)(**param_2 + 0x20))();
  pArr16_13 = local_40;
  ptr2_Long_6 = local_48;
  *(uint32_t *)(local_40[3] + 4) = uVal_8;
  if (local_48[1] == (int64_t *)0x0) {
    pLong_9 = (int64_t *)0x0;
  }
  else {
    LOCK();
    pLong_9 = local_48[1] + 1;
    *(int *)pLong_9 = *(int *)pLong_9 + 1;
    UNLOCK();
    pLong_9 = local_48[1];
  }
  *(int64_t **)*local_40 = *local_48;
  pLong_4 = *(int64_t **)(*local_40 + 8);
  *(int64_t **)(*local_40 + 8) = pLong_9;
  if (pLong_4 != (int64_t *)0x0) {
    LOCK();
    pLong_9 = pLong_4 + 1;
    *(int *)pLong_9 = *(int *)pLong_9 + -1;
    UNLOCK();
    if (*(int *)pLong_9 == 0) {
      (**(func_ptr_t *)*pLong_4)(pLong_4);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
      }
    }
  }
  *(int64_t **)pArr16_13[4] = *ptr2_Long_6 + 2;
  uVal_7 = (**(func_ptr_t *)(**ptr2_Long_6 + 0xa0))();
  local_40[4][9] = uVal_7;
  if ((*(int *)(local_40[3] + 4) == 0) || (*(char *)(DAT_180840980 + 0x86) == '\0')) {
    (**(func_ptr_t *)(**local_48 + 8))(*local_48,(uint8_t (*)[16])&local_70);
    pArr16_17 = local_40;
    pArr16_13 = local_50;
    if (local_50 != (uint8_t (*)[16])&local_70) {
      pU64_16 = *(uint8_t **)(local_40[2] + 8);
      if (&DAT_0000000f < pU64_16) {
        lVal_11 = *(int64_t *)*local_50;
        pU64_15 = pU64_16 + 1;
        lVal_14 = lVal_11;
        if ((uint8_t *)0xfff < pU64_15) {
          lVal_14 = *(int64_t *)(lVal_11 + -8);
          if (0x1f < (uint64_t)(lVal_11 + (-8 - lVal_14))) goto LAB_18041246e;
          pU64_15 = pU64_16 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_14,pU64_15);
      }
      *(uint32_t *)pArr16_13[1] = (uint32_t)local_60;
      *(uint32_t *)(pArr16_13[1] + 4) = local_60._4_4_;
      *(uint32_t *)(pArr16_13[1] + 8) = (uint32_t)uStack_58;
      *(uint32_t *)(pArr16_13[1] + 0xc) = uStack_58._4_4_;
      *(uint *)*pArr16_13 = local_70;
      *(uint32_t *)(*pArr16_13 + 4) = uStack_6c;
      *(uint32_t *)(*pArr16_13 + 8) = uStack_68;
      *(uint32_t *)(*pArr16_13 + 0xc) = uStack_64;
      goto LAB_180412356;
    }
    if (uStack_58 < 0x10) goto LAB_180412356;
    lVal_11 = CONCAT44(uStack_6c,local_70);
    uVal_18 = uStack_58;
  }
  else {
    func_0x1802ccf40(local_d8);
    local_32 = 1;
    (**(func_ptr_t *)(**local_48 + 8))(*local_48,local_b8);
    uVal_3 = *(uint *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x14538);
    if ((uVal_3 & 1) == 0) {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint *)(lVal_11 + 0x14538) = uVal_3 | 1;
      *(uint8_t *)(lVal_11 + 0x14535) = 1;
      *(uint64_t *)(lVal_11 + 0x1452d) = 0xede0e64e86752cf4;
      func_0x180673140(&LAB_180436610);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint64_t *)(lVal_11 + 0x1452d);
    if (*(char *)(lVal_11 + 0x14535) == '\x01') {
      *_Str = *_Str ^ 0xedbd9b35dd55518f;
      *(uint8_t *)(lVal_11 + 0x14535) = 0;
    }
    local_88._0_16_ = ZEXT816(0);
    local_98 = ZEXT816(0);
    sz_10 = strlen((char *)_Str);
    if ((int64_t)sz_10 < 0) {
      local_31 = 1;
      func_0x18007ba70();
      fnPtr_5 = (func_ptr_t )swi(3);
      pArr16_13 = (uint8_t (*)[16])(*fnPtr_5)();
      return pArr16_13;
    }
    if (sz_10 < 0x10) {
      pU64_16 = local_98;
      uVal_18 = 0xf;
    }
    else {
      uVal_12 = sz_10 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_31 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_31 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_16 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_11;
      }
      local_98._0_8_ = pU64_16;
    }
    local_88._8_8_ = uVal_18;
    local_88._0_8_ = sz_10;
    func_0x1806aa960(pU64_16,_Str,sz_10);
    pU64_16[sz_10] = 0;
    func_0x180056840((uint8_t (*)[16])&local_70,local_98,local_b8,local_d8);
    pArr16_17 = local_40;
    pArr16_13 = local_50;
    if (local_50 == (uint8_t (*)[16])&local_70) {
      if (0xf < uStack_58) {
        lVal_14 = CONCAT44(uStack_6c,local_70);
        uVal_18 = uStack_58 + 1;
        lVal_11 = lVal_14;
        if (0xfff < uVal_18) {
          lVal_11 = *(int64_t *)(lVal_14 + -8);
          if (0x1f < (uint64_t)((lVal_14 + -8) - lVal_11)) goto LAB_18041246e;
          uVal_18 = uStack_58 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_18);
      }
    }
    else {
      pU64_16 = *(uint8_t **)(local_40[2] + 8);
      if (&DAT_0000000f < pU64_16) {
        lVal_11 = *(int64_t *)*local_50;
        pU64_15 = pU64_16 + 1;
        lVal_14 = lVal_11;
        if ((uint8_t *)0xfff < pU64_15) {
          lVal_14 = *(int64_t *)(lVal_11 + -8);
          if (0x1f < (uint64_t)(lVal_11 + (-8 - lVal_14))) goto LAB_18041246e;
          pU64_15 = pU64_16 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_14,pU64_15);
      }
      *(uint32_t *)pArr16_13[1] = (uint32_t)local_60;
      *(uint32_t *)(pArr16_13[1] + 4) = local_60._4_4_;
      *(uint32_t *)(pArr16_13[1] + 8) = (uint32_t)uStack_58;
      *(uint32_t *)(pArr16_13[1] + 0xc) = uStack_58._4_4_;
      *(uint *)*pArr16_13 = local_70;
      *(uint32_t *)(*pArr16_13 + 4) = uStack_6c;
      *(uint32_t *)(*pArr16_13 + 8) = uStack_68;
      *(uint32_t *)(*pArr16_13 + 0xc) = uStack_64;
    }
    local_60 = 0;
    uStack_58 = 0xf;
    local_70 = local_70 & 0xffffff00;
    if ((uint64_t)local_88._8_8_ < 0x10) goto LAB_180412356;
    lVal_11 = local_98._0_8_;
    uVal_18 = local_88._8_8_;
  }
  uVal_12 = uVal_18 + 1;
  lVal_14 = lVal_11;
  if (0xfff < uVal_12) {
    lVal_14 = *(int64_t *)(lVal_11 + -8);
    if (0x1f < (uint64_t)((lVal_11 + -8) - lVal_14)) {
LAB_18041246e:
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_12 = uVal_18 + 0x28;
  }
  thunk_FUN_180695dd0(lVal_14,uVal_12);
LAB_180412356:
  if (pArr16_17[3][0] == '\0') {
    fVal_2 = **(float **)pArr16_17[4];
    if ((((fVal_2 == 0.0) && (!NAN(fVal_2))) && (fVal_2 = (*(float **)pArr16_17[4])[1], fVal_2 == 0.0))
       && (!NAN(fVal_2))) {
      pArr16_17[4][8] = 0;
    }
  }
  if (pArr16_17[4][9] == '\0') {
    pArr16_17[4][8] = 0;
  }
  uVal_8 = func_0x1800cd3b0(pArr16_13,DAT_1806b26b4,3);
  pArr16_13 = local_40;
  *(uint32_t *)(local_40[3] + 8) = uVal_8;
  pLong_9 = local_48[1];
  if (pLong_9 != (int64_t *)0x0) {
    LOCK();
    pLong_4 = pLong_9 + 1;
    *(int *)pLong_4 = *(int *)pLong_4 + -1;
    UNLOCK();
    if (*(int *)pLong_4 == 0) {
      (**(func_ptr_t *)*pLong_9)(pLong_9);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_9 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_9 + 8))(pLong_9);
      }
    }
  }
  return pArr16_13;
}

// Unwind@180412480
void Unwind_180412480(void)
{
  func_0x180672f60(&DAT_180840988);
  return;
}

// Unwind@1804124b0
void Unwind_1804124b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  *(uint8_t *)(param_2 + 199) = 0;
  return;
}

// Unwind@1804124e0
void Unwind_1804124e0(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 199);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x40);
  }
  *(char *)(param_2 + 0xc6) = ch_1;
  return;
}

// Unwind@180412520
void Unwind_180412520(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0xc6) == '\x01') {
    func_0x180001e70(param_2 + 0x20);
  }
  return;
}

// Unwind@180412560
void Unwind_180412560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xa8));
  func_0x18001deb0(*(uint64_t *)(param_2 + 0xb8));
  func_0x18001deb0(*(uint64_t *)(param_2 + 0xb0));
  return;
}

// func_0x1804125a0
void func_0x1804125a0(int64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  
  uVal_3 = *(uint64_t *)(param_1 + 0x28);
  if (0xf < uVal_3) {
    lVal_4 = *(int64_t *)(param_1 + 0x10);
    uVal_6 = uVal_3 + 1;
    lVal_7 = lVal_4;
    if (0xfff < uVal_6) {
      lVal_7 = *(int64_t *)(lVal_4 + -8);
      if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_3 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_6);
  }
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0xf;
  *(uint8_t *)(param_1 + 0x10) = 0;
  pLong_5 = *(int64_t **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00018041261f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(func_ptr_t *)(*pLong_5 + 8))(pLong_5);
        return;
      }
    }
  }
  return;
}

// func_0x180412630
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180412630(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  char *_Str_00;
  uint64_t *_Str_01;
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
  uint8_t uVal_13;
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
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = _DAT_1806ccba7;
  uStack_64 = _UNK_1806ccbab;
  uStack_60 = _UNK_1806ccbaf;
  uStack_5c = _UNK_1806ccbb3;
  local_78._4_4_ = _UNK_1806ccb9b;
  local_78._0_4_ = _DAT_1806ccb97;
  uStack_70._0_4_ = _UNK_1806ccb9f;
  uStack_70._4_4_ = _UNK_1806ccba3;
  local_88._4_4_ = _UNK_1806ccb8b;
  local_88._0_4_ = _DAT_1806ccb87;
  uStack_80._0_4_ = _UNK_1806ccb8f;
  uStack_80._4_4_ = _UNK_1806ccb93;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x14570) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x14570) = 1;
    func_0x1801b4680(lVal_11 + 0x1453c,local_88);
    func_0x180673140(&LAB_180438560);
  }
  uVal_7 = _UNK_1806b2d6c;
  uVal_6 = _UNK_1806b2d68;
  uVal_5 = _UNK_1806b2d64;
  uVal_4 = _DAT_1806b2d60;
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_11 + 0x1453c);
  if (*(char *)(lVal_11 + 0x1456c) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_11 + 0x14540) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(lVal_11 + 0x14544) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(lVal_11 + 0x14548) ^ _UNK_1806b2d6c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_11 + 0x14550) ^ uVal_5;
    auArr_2._0_4_ = *(uint *)(lVal_11 + 0x1454c) ^ uVal_4;
    auArr_2._8_4_ = *(uint *)(lVal_11 + 0x14554) ^ uVal_6;
    auArr_2._12_4_ = *(uint *)(lVal_11 + 0x14558) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_11 + 0x1454c) = auArr_2;
    auArr_3._4_4_ = *(uint *)(lVal_11 + 0x14560) ^ uVal_5;
    auArr_3._0_4_ = *(uint *)(lVal_11 + 0x1455c) ^ uVal_4;
    auArr_3._8_4_ = *(uint *)(lVal_11 + 0x14564) ^ uVal_6;
    auArr_3._12_4_ = *(uint *)(lVal_11 + 0x14568) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_11 + 0x1455c) = auArr_3;
    *(uint8_t *)(lVal_11 + 0x1456c) = 0;
  }
  _local_78 = ZEXT816(0);
  _local_88 = ZEXT816(0);
  sz_9 = strlen((char *)_Str);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
LAB_180412b82:
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
    local_78 = (uint8_t  [8])sz_9;
    uStack_70 = uVal_14;
    func_0x1806aa960(pU64_12,_Str,sz_9);
    pU64_12[sz_9] = 0;
    pU64_12 = local_88;
    func_0x18014fe60(param_1,0,0,pU64_12);
    if (0xf < uStack_70) {
      uVal_14 = uStack_70 + 1;
      lVal_11 = (int64_t)local_88;
      if (0xfff < uVal_14) {
        lVal_11 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_11)) goto LAB_180412b96;
        uVal_14 = uStack_70 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_14);
    }
    *param_1 = &PTR_LAB_1806c9dc0;
    *(uint8_t *)(param_1 + 0x29) = 1;
    *(uint64_t *)((int64_t)param_1 + 0x14c) = 0;
    local_c0 = 0;
    local_90 = param_1;
    if (DAT_180840048 == (uint64_t *)0x0) {
      uVal_13 = 1;
    }
    else {
      local_c0 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_f8);
      uVal_13 = *(uint8_t *)(param_1 + 0x29);
    }
    local_78._4_4_ = _UNK_1806ccbcb;
    local_78._0_4_ = _DAT_1806ccbc7;
    uStack_70._0_4_ = _UNK_1806ccbcf;
    uStack_70._4_4_ = _UNK_1806ccbd3;
    local_88._4_4_ = _UNK_1806ccbbb;
    local_88._0_4_ = _DAT_1806ccbb7;
    uStack_80._0_4_ = _UNK_1806ccbbf;
    uStack_80._4_4_ = _UNK_1806ccbc3;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14594) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x14594) = 1;
      func_0x18008f8e0(lVal_11 + 0x14571,local_88);
      func_0x180673140(&LAB_180438590);
    }
    _Str_00 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14571)
    ;
    func_0x1801c21f0(_Str_00);
    local_b8 = ZEXT816(0);
    sz_9 = strlen(_Str_00);
    if ((int64_t)sz_9 < 0) goto LAB_180412b82;
    if (sz_9 < 0x10) {
      uVal_14 = 0xf;
      pU64_15 = local_b8;
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
                 0x145a4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x145a4) = 1;
      *(uint8_t *)(lVal_11 + 0x145a2) = 1;
      *(uint64_t *)(lVal_11 + 0x14598) = 0x8cc1da91b0122d20;
      *(uint16_t *)(lVal_11 + 0x145a0) = 0x451e;
      func_0x180673140(&LAB_1804385c0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_01 = (uint64_t *)(lVal_11 + 0x14598);
    if (*(char *)(lVal_11 + 0x145a2) == '\x01') {
      *_Str_01 = *_Str_01 ^ 0xe9b5b3b1c77d4573;
      *(byte *)(lVal_11 + 0x145a0) = *(byte *)(lVal_11 + 0x145a0) ^ 0x73;
      *(byte *)(lVal_11 + 0x145a1) = *(byte *)(lVal_11 + 0x145a1) ^ 0x45;
      *(uint8_t *)(lVal_11 + 0x145a2) = 0;
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
      local_78 = (uint8_t  [8])sz_9;
      uStack_70 = uVal_14;
      func_0x1806aa960(pU64_12,_Str_01,sz_9);
      pU64_12[sz_9] = 0;
      func_0x1801ccd70(local_90,local_88,local_b8,param_1 + 0x29,uVal_13,local_f8,0);
      if (0xf < uStack_70) {
        uVal_14 = uStack_70 + 1;
        lVal_11 = (int64_t)local_88;
        if (0xfff < uVal_14) {
          lVal_11 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_11)) goto LAB_180412b96;
          uVal_14 = uStack_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_14);
      }
      pU64_8 = local_90;
      if (0xf < local_a0) {
        uVal_14 = local_a0 + 1;
        lVal_11 = local_b8._0_8_;
        if (0xfff < uVal_14) {
          lVal_11 = *(int64_t *)(local_b8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_11)) goto LAB_180412b96;
          uVal_14 = local_a0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_14);
      }
      return pU64_8;
    }
  }
  local_4a = 1;
  func_0x18007ba70();
LAB_180412b96:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180412ba0
void Unwind_180412ba0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@180412bf0
void Unwind_180412bf0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14594) = 0;
  *(uint8_t *)(param_2 + 0xef) = 1;
  return;
}

// Unwind@180412c40
void Unwind_180412c40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@180412c80
void Unwind_180412c80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  *(uint8_t *)(param_2 + 0xee) = 0;
  return;
}

// Unwind@180412cc0
void Unwind_180412cc0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0xee);
  func_0x180001e70(param_2 + 0x80);
  *(uint8_t *)(param_2 + 0xef) = uVal_1;
  return;
}

// Unwind@180412d00
void Unwind_180412d00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0xef) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@180412d60
void Unwind_180412d60(uint64_t param_1,int64_t param_2)
{
  func_0x180154cc0(*(uint64_t *)(param_2 + 0xa8));
  return;
}

// Unwind@180412da0
void Unwind_180412da0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14570) = 0;
  return;
}

// Unwind@1804130a0
void Unwind_1804130a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x145d0) = 0;
  return;
}

// Unwind@180413890
void Unwind_180413890(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1804144b0
void Unwind_1804144b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180414530
void Unwind_180414530(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1804145b0
void Unwind_1804145b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180414630
void Unwind_180414630(uint64_t param_1,int64_t param_2)
{
  func_0x1801a0760(param_2 + 0x90);
  return;
}

// Unwind@1804146b0
void Unwind_1804146b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180414730
void Unwind_180414730(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1804147b0
void Unwind_1804147b0(uint64_t param_1,int64_t param_2)
{
  func_0x18015fd20(param_2 + 0x90);
  return;
}

// Unwind@180414830
void Unwind_180414830(uint64_t param_1,int64_t param_2)
{
  func_0x1801a07d0(param_2 + 0x78);
  return;
}

// Unwind@1804148b0
void Unwind_1804148b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@180414930
void Unwind_180414930(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1462c) = 0;
  return;
}

// Unwind@1804149c0
void Unwind_1804149c0(uint64_t param_1,int64_t param_2)
{
  func_0x18015fd20(param_2 + 0x90);
  return;
}

// Unwind@180415090
void Unwind_180415090(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1804150d0
void Unwind_1804150d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xa8));
  return;
}

// Unwind@180415110
void Unwind_180415110(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// func_0x180415150
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180415150(uint64_t *param_1)
{
  char *_Str;
  size_t sz_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint8_t *pU64_4;
  uint64_t uVal_5;
  uint8_t local_58 [8];
  uint64_t uStack_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_58._4_4_ = _UNK_1806ccc01;
  local_58._0_4_ = _DAT_1806ccbfd;
  uStack_50._0_4_ = _UNK_1806ccc05;
  uStack_50._4_4_ = _UNK_1806ccc09;
  local_48 = CONCAT44(local_48._4_4_,0x98aa9a2);
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1468c) == '\0') {
    lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_3 + 0x1468c) = 1;
    func_0x18007cfc0(lVal_3 + 0x14675,local_58);
    func_0x180673140(&LAB_180438820);
  }
  _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14675);
  func_0x1801c21d0(_Str);
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
    local_48 = sz_1;
    local_40 = uVal_5;
    func_0x1806aa960(pU64_4,_Str,sz_1);
    pU64_4[sz_1] = 0;
    func_0x1801c2ba0(param_1,0,1,local_58);
    if (0xf < local_40) {
      uVal_5 = local_40 + 1;
      lVal_3 = (int64_t)local_58;
      if (0xfff < uVal_5) {
        lVal_3 = *(int64_t *)((int64_t)local_58 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_58 + -8) - lVal_3)) goto LAB_1804152f7;
        uVal_5 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_3,uVal_5);
    }
    *param_1 = &PTR_LAB_1806c9f30;
    return param_1;
  }
  func_0x18007ba70();
LAB_1804152f7:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180415300
void Unwind_180415300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180415330
void Unwind_180415330(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1468c) = 0;
  return;
}

// Unwind@180415610
void Unwind_180415610(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x146b4) = 0;
  return;
}

// func_0x180415790
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180415790(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint8_t auArr_1 [16];
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
  uint8_t local_78 [8];
  uint64_t uStack_70;
  size_t local_68;
  uint64_t uStack_60;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  undefined5 uStack_48;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_58 = _DAT_1806ccc44;
  uStack_54 = _UNK_1806ccc48;
  uStack_50 = _UNK_1806ccc4c;
  local_68 = CONCAT44(_UNK_1806ccc38,_DAT_1806ccc34);
  uStack_60 = CONCAT44(_UNK_1806ccc40,_UNK_1806ccc3c);
  local_78._4_4_ = _UNK_1806ccc28;
  local_78._0_4_ = _DAT_1806ccc24;
  uStack_70._0_4_ = _UNK_1806ccc2c;
  uStack_70._4_4_ = _UNK_1806ccc30;
  uStack_4c = CONCAT31(0x6538ed,(char)_UNK_1806ccc50);
  uStack_48 = 0xc57d98f9a8;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x146ec) == '\0') {
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_10 + 0x146ec) = 1;
    func_0x1801b94b0(lVal_10 + 0x146b5,local_78);
    func_0x180673140(&LAB_1804388b0);
  }
  uVal_7 = _UNK_1806b2c9c;
  uVal_6 = _UNK_1806b2c98;
  uVal_5 = _UNK_1806b2c94;
  uVal_4 = _DAT_1806b2c90;
  lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_10 + 0x146b5);
  if (*(char *)(lVal_10 + 0x146ea) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_10 + 0x146b9) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(lVal_10 + 0x146bd) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(lVal_10 + 0x146c1) ^ _UNK_1806b2c9c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_10 + 0x146c9) ^ uVal_5;
    auArr_2._0_4_ = *(uint *)(lVal_10 + 0x146c5) ^ uVal_4;
    auArr_2._8_4_ = *(uint *)(lVal_10 + 0x146cd) ^ uVal_6;
    auArr_2._12_4_ = *(uint *)(lVal_10 + 0x146d1) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_10 + 0x146c5) = auArr_2;
    auArr_3._4_4_ = *(uint *)(lVal_10 + 0x146d9) ^ uVal_5;
    auArr_3._0_4_ = *(uint *)(lVal_10 + 0x146d5) ^ uVal_4;
    auArr_3._8_4_ = *(uint *)(lVal_10 + 0x146dd) ^ uVal_6;
    auArr_3._12_4_ = *(uint *)(lVal_10 + 0x146e1) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_10 + 0x146d5) = auArr_3;
    *(uint *)(lVal_10 + 0x146e5) = *(uint *)(lVal_10 + 0x146e5) ^ 0x9f9d9cf;
    *(byte *)(lVal_10 + 0x146e9) = *(byte *)(lVal_10 + 0x146e9) ^ 0xc5;
    *(uint8_t *)(lVal_10 + 0x146ea) = 0;
  }
  _local_78 = ZEXT816(0);
  sz_8 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_8) {
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
      local_78 = (uint8_t  [8])pU64_11;
    }
    local_68 = sz_8;
    uStack_60 = uVal_12;
    func_0x1806aa960(pU64_11,_Str,sz_8);
    pU64_11[sz_8] = 0;
    func_0x18014fe60(param_1,0,0,local_78);
    if (0xf < uStack_60) {
      uVal_12 = uStack_60 + 1;
      lVal_10 = (int64_t)local_78;
      if (0xfff < uVal_12) {
        lVal_10 = *(int64_t *)((int64_t)local_78 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_10)) goto LAB_180415987;
        uVal_12 = uStack_60 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_12);
    }
    *param_1 = &PTR_LAB_1806ca060;
    return param_1;
  }
  func_0x18007ba70();
LAB_180415987:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180415990
void Unwind_180415990(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1804159c0
void Unwind_1804159c0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x146ec) = 0;
  return;
}

// Unwind@180415e80
void Unwind_180415e80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1804167f0
void Unwind_1804167f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180416830
void Unwind_180416830(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180416870
void Unwind_180416870(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x68));
  return;
}

// Unwind@1804168b0
void Unwind_1804168b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// func_0x1804168f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1804168f0(uint64_t *param_1)
{
  uint8_t (*pArr16_1)[16];
  uint *pU64_2;
  func_ptr_t fnPtr_3;
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
  uint uVal_14;
  uint uVal_15;
  uint uVal_16;
  uint uVal_17;
  uint32_t uVal_18;
  uint32_t uVal_19;
  uint32_t uVal_20;
  size_t sz_21;
  uint64_t uVal_22;
  int64_t lVal_23;
  uint64_t uVal_24;
  uint64_t *pU64_25;
  uint8_t *pU64_26;
  uint8_t *pU64_27;
  uint64_t uVal_28;
  uint8_t local_f8 [56];
  uint64_t local_c0;
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint64_t *local_58;
  uint64_t *local_50;
  uint8_t local_42;
  uint8_t local_41;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_88 = _DAT_1806ccc89;
  uStack_84 = _UNK_1806ccc8d;
  uStack_80 = _UNK_1806ccc91;
  uStack_7c = _UNK_1806ccc95;
  local_98 = _DAT_1806ccc79;
  uStack_94 = _UNK_1806ccc7d;
  uStack_90 = _UNK_1806ccc81;
  uStack_8c = _UNK_1806ccc85;
  local_a8._4_4_ = _UNK_1806ccc6d;
  local_a8._0_4_ = _DAT_1806ccc69;
  uStack_a0._0_4_ = _UNK_1806ccc71;
  uStack_a0._4_4_ = _UNK_1806ccc75;
  local_b8._4_4_ = _UNK_1806ccc5d;
  local_b8._0_4_ = _DAT_1806ccc59;
  uStack_b0._0_4_ = _UNK_1806ccc61;
  uStack_b0._4_4_ = _UNK_1806ccc65;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x147a8) == '\0') {
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_23 + 0x147a8) = 1;
    func_0x1801b4030(lVal_23 + 0x14765,local_b8);
    func_0x180673140(&LAB_180438a00);
  }
  uVal_17 = _UNK_1806b2c9c;
  uVal_16 = _UNK_1806b2c98;
  uVal_15 = _UNK_1806b2c94;
  uVal_14 = _DAT_1806b2c90;
  lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pArr16_1 = (uint8_t (*)[16])(lVal_23 + 0x14765);
  if (*(char *)(lVal_23 + 0x147a5) == '\x01') {
    auArr_4._4_4_ = *(uint *)(lVal_23 + 0x14769) ^ _UNK_1806b2c94;
    auArr_4._0_4_ = *(uint *)*pArr16_1 ^ _DAT_1806b2c90;
    auArr_4._8_4_ = *(uint *)(lVal_23 + 0x1476d) ^ _UNK_1806b2c98;
    auArr_4._12_4_ = *(uint *)(lVal_23 + 0x14771) ^ _UNK_1806b2c9c;
    *pArr16_1 = auArr_4;
    auArr_8._4_4_ = *(uint *)(lVal_23 + 0x14779) ^ uVal_15;
    auArr_8._0_4_ = *(uint *)(lVal_23 + 0x14775) ^ uVal_14;
    auArr_8._8_4_ = *(uint *)(lVal_23 + 0x1477d) ^ uVal_16;
    auArr_8._12_4_ = *(uint *)(lVal_23 + 0x14781) ^ uVal_17;
    *(uint8_t (*)[16])(lVal_23 + 0x14775) = auArr_8;
    auArr_10._4_4_ = *(uint *)(lVal_23 + 0x14789) ^ uVal_15;
    auArr_10._0_4_ = *(uint *)(lVal_23 + 0x14785) ^ uVal_14;
    auArr_10._8_4_ = *(uint *)(lVal_23 + 0x1478d) ^ uVal_16;
    auArr_10._12_4_ = *(uint *)(lVal_23 + 0x14791) ^ uVal_17;
    *(uint8_t (*)[16])(lVal_23 + 0x14785) = auArr_10;
    auArr_12._4_4_ = *(uint *)(lVal_23 + 0x14799) ^ uVal_15;
    auArr_12._0_4_ = *(uint *)(lVal_23 + 0x14795) ^ uVal_14;
    auArr_12._8_4_ = *(uint *)(lVal_23 + 0x1479d) ^ uVal_16;
    auArr_12._12_4_ = *(uint *)(lVal_23 + 0x147a1) ^ uVal_17;
    *(uint8_t (*)[16])(lVal_23 + 0x14795) = auArr_12;
    *(uint8_t *)(lVal_23 + 0x147a5) = 0;
  }
  _local_a8 = ZEXT816(0);
  _local_b8 = ZEXT816(0);
  sz_21 = strlen((char *)pArr16_1);
  if ((int64_t)sz_21 < 0) {
    func_0x18007ba70();
LAB_1804171d3:
    func_0x18007ba70();
LAB_1804171d9:
    func_0x18007ba70();
  }
  else {
    if (sz_21 < 0x10) {
      uVal_28 = 0xf;
      pU64_26 = local_b8;
    }
    else {
      uVal_22 = sz_21 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_22) {
        uVal_28 = uVal_22;
      }
      if (uVal_22 < 0xfff) {
        pU64_26 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
      }
      else {
        lVal_23 = func_0x180672de0(uVal_28 + 0x28);
        pU64_26 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_26 + -8) = lVal_23;
      }
      local_b8 = (uint8_t  [8])pU64_26;
    }
    local_a8 = (uint8_t  [8])sz_21;
    uStack_a0 = uVal_28;
    func_0x1806aa960(pU64_26,pArr16_1,sz_21);
    pU64_26[sz_21] = 0;
    func_0x1801c2ba0(param_1,0,0,local_b8);
    if (0xf < uStack_a0) {
      uVal_28 = uStack_a0 + 1;
      lVal_23 = (int64_t)local_b8;
      if (0xfff < uVal_28) {
        lVal_23 = *(int64_t *)((int64_t)local_b8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_23)) goto LAB_1804171cb;
        uVal_28 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_28);
    }
    *param_1 = &PTR_LAB_1806ca1d0;
    *(uint32_t *)(param_1 + 0x10) = 0;
    *(uint8_t (*)[16])(param_1 + 0x13) = ZEXT816(0);
    *(uint8_t (*)[16])(param_1 + 0x11) = ZEXT816(0);
    *(uint32_t *)(param_1 + 0x14) = 0xffffffff;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x147b4) == '\0') {
      lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_23 + 0x147b4) = 1;
      *(uint8_t *)(lVal_23 + 0x147b2) = 1;
      *(uint32_t *)(lVal_23 + 0x147ac) = 0xca9f7833;
      *(uint16_t *)(lVal_23 + 0x147b0) = 0x510;
      func_0x180673140(&LAB_180438a40);
    }
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_23 + 0x147ac);
    if (*(char *)(lVal_23 + 0x147b2) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xa9f11975;
      *(byte *)(lVal_23 + 0x147b0) = *(byte *)(lVal_23 + 0x147b0) ^ 0x69;
      *(byte *)(lVal_23 + 0x147b1) = *(byte *)(lVal_23 + 0x147b1) ^ 5;
      *(uint8_t *)(lVal_23 + 0x147b2) = 0;
    }
    local_58 = param_1 + 0x11;
    _local_a8 = ZEXT816(0);
    _local_b8 = ZEXT816(0);
    sz_21 = strlen((char *)pU64_2);
    local_50 = param_1;
    if ((int64_t)sz_21 < 0) goto LAB_1804171d3;
    uVal_28 = 0xf;
    pU64_26 = local_b8;
    if (0xf < sz_21) {
      uVal_22 = sz_21 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_22) {
        uVal_28 = uVal_22;
      }
      if (uVal_22 < 0xfff) {
        pU64_26 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
      }
      else {
        lVal_23 = func_0x180672de0(uVal_28 + 0x28);
        pU64_26 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_26 + -8) = lVal_23;
      }
      local_b8 = (uint8_t  [8])pU64_26;
    }
    pU64_25 = local_58;
    uStack_a0 = uVal_28;
    local_a8 = (uint8_t  [8])sz_21;
    func_0x1806aa960(pU64_26,pU64_2,sz_21);
    pU64_26[sz_21] = 0;
    uVal_24 = func_0x1801d3650(pU64_25,local_b8,0);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x147c0) == '\0') {
      lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_23 + 0x147c0) = 1;
      *(uint32_t *)(lVal_23 + 0x147b8) = 0xdd827833;
      *(uint16_t *)(lVal_23 + 0x147bc) = 0x169;
      func_0x180673140(&LAB_180438a70);
    }
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_23 + 0x147b8);
    if (*(char *)(lVal_23 + 0x147bd) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xa9f11975;
      *(byte *)(lVal_23 + 0x147bc) = *(byte *)(lVal_23 + 0x147bc) ^ 0x69;
      *(uint8_t *)(lVal_23 + 0x147bd) = 0;
    }
    local_68 = ZEXT816(0);
    local_78 = ZEXT816(0);
    sz_21 = strlen((char *)pU64_2);
    if ((int64_t)sz_21 < 0) goto LAB_1804171d9;
    if (sz_21 < 0x10) {
      pU64_26 = local_78;
      uVal_28 = 0xf;
    }
    else {
      uVal_22 = sz_21 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_22) {
        uVal_28 = uVal_22;
      }
      if (uVal_22 < 0xfff) {
        pU64_26 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
      }
      else {
        lVal_23 = func_0x180672de0(uVal_28 + 0x28);
        pU64_26 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_26 + -8) = lVal_23;
      }
      local_78._0_8_ = pU64_26;
    }
    local_68._8_8_ = uVal_28;
    local_68._0_8_ = sz_21;
    func_0x1806aa960(pU64_26,pU64_2,sz_21);
    pU64_26[sz_21] = 0;
    pU64_26 = local_78;
    func_0x1801d3650(uVal_24,pU64_26,1);
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_28 = local_68._8_8_ + 1;
      lVal_23 = local_78._0_8_;
      if (0xfff < uVal_28) {
        lVal_23 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_23)) goto LAB_1804171cb;
        uVal_28 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_28);
    }
    if (0xf < uStack_a0) {
      uVal_28 = uStack_a0 + 1;
      lVal_23 = (int64_t)local_b8;
      if (0xfff < uVal_28) {
        lVal_23 = *(int64_t *)((int64_t)local_b8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_23)) goto LAB_1804171cb;
        uVal_28 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_28);
    }
    local_c0 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_c0 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_f8);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14824) == '\0') {
      lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_23 + 0x14824) = 1;
      uVal_20 = _UNK_1806ccca5;
      uVal_19 = _UNK_1806ccca1;
      uVal_18 = _UNK_1806ccc9d;
      *(uint32_t *)(lVal_23 + 0x147c1) = _DAT_1806ccc99;
      *(uint32_t *)(lVal_23 + 0x147c5) = uVal_18;
      *(uint32_t *)(lVal_23 + 0x147c9) = uVal_19;
      *(uint32_t *)(lVal_23 + 0x147cd) = uVal_20;
      uVal_20 = _UNK_1806cccb5;
      uVal_19 = _UNK_1806cccb1;
      uVal_18 = _UNK_1806cccad;
      *(uint32_t *)(lVal_23 + 0x147d1) = _DAT_1806ccca9;
      *(uint32_t *)(lVal_23 + 0x147d5) = uVal_18;
      *(uint32_t *)(lVal_23 + 0x147d9) = uVal_19;
      *(uint32_t *)(lVal_23 + 0x147dd) = uVal_20;
      uVal_20 = _UNK_1806cccc5;
      uVal_19 = _UNK_1806cccc1;
      uVal_18 = _UNK_1806cccbd;
      *(uint32_t *)(lVal_23 + 0x147e1) = _DAT_1806cccb9;
      *(uint32_t *)(lVal_23 + 0x147e5) = uVal_18;
      *(uint32_t *)(lVal_23 + 0x147e9) = uVal_19;
      *(uint32_t *)(lVal_23 + 0x147ed) = uVal_20;
      uVal_20 = _UNK_1806cccd5;
      uVal_19 = _UNK_1806cccd1;
      uVal_18 = _UNK_1806ccccd;
      *(uint32_t *)(lVal_23 + 0x147f1) = _DAT_1806cccc9;
      *(uint32_t *)(lVal_23 + 0x147f5) = uVal_18;
      *(uint32_t *)(lVal_23 + 0x147f9) = uVal_19;
      *(uint32_t *)(lVal_23 + 0x147fd) = uVal_20;
      uVal_20 = _UNK_1806ccce5;
      uVal_19 = _UNK_1806ccce1;
      uVal_18 = _UNK_1806cccdd;
      *(uint32_t *)(lVal_23 + 0x14801) = _DAT_1806cccd9;
      *(uint32_t *)(lVal_23 + 0x14805) = uVal_18;
      *(uint32_t *)(lVal_23 + 0x14809) = uVal_19;
      *(uint32_t *)(lVal_23 + 0x1480d) = uVal_20;
      uVal_20 = _UNK_1806cccf5;
      uVal_19 = _UNK_1806cccf1;
      uVal_18 = _UNK_1806ccced;
      *(uint32_t *)(lVal_23 + 0x14811) = _DAT_1806ccce9;
      *(uint32_t *)(lVal_23 + 0x14815) = uVal_18;
      *(uint32_t *)(lVal_23 + 0x14819) = uVal_19;
      *(uint32_t *)(lVal_23 + 0x1481d) = uVal_20;
      *(uint16_t *)(lVal_23 + 0x14821) = 0x175;
      func_0x180673140(&LAB_180438aa0);
    }
    uVal_17 = _UNK_1806b2d6c;
    uVal_16 = _UNK_1806b2d68;
    uVal_15 = _UNK_1806b2d64;
    uVal_14 = _DAT_1806b2d60;
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_1 = (uint8_t (*)[16])(lVal_23 + 0x147c1);
    if (*(char *)(lVal_23 + 0x14822) == '\x01') {
      auArr_5._4_4_ = *(uint *)(lVal_23 + 0x147c5) ^ _UNK_1806b2d64;
      auArr_5._0_4_ = *(uint *)*pArr16_1 ^ _DAT_1806b2d60;
      auArr_5._8_4_ = *(uint *)(lVal_23 + 0x147c9) ^ _UNK_1806b2d68;
      auArr_5._12_4_ = *(uint *)(lVal_23 + 0x147cd) ^ _UNK_1806b2d6c;
      *pArr16_1 = auArr_5;
      auArr_9._4_4_ = *(uint *)(lVal_23 + 0x147d5) ^ uVal_15;
      auArr_9._0_4_ = *(uint *)(lVal_23 + 0x147d1) ^ uVal_14;
      auArr_9._8_4_ = *(uint *)(lVal_23 + 0x147d9) ^ uVal_16;
      auArr_9._12_4_ = *(uint *)(lVal_23 + 0x147dd) ^ uVal_17;
      *(uint8_t (*)[16])(lVal_23 + 0x147d1) = auArr_9;
      auArr_11._4_4_ = *(uint *)(lVal_23 + 0x147e5) ^ uVal_15;
      auArr_11._0_4_ = *(uint *)(lVal_23 + 0x147e1) ^ uVal_14;
      auArr_11._8_4_ = *(uint *)(lVal_23 + 0x147e9) ^ uVal_16;
      auArr_11._12_4_ = *(uint *)(lVal_23 + 0x147ed) ^ uVal_17;
      *(uint8_t (*)[16])(lVal_23 + 0x147e1) = auArr_11;
      auArr_13._4_4_ = *(uint *)(lVal_23 + 0x147f5) ^ uVal_15;
      auArr_13._0_4_ = *(uint *)(lVal_23 + 0x147f1) ^ uVal_14;
      auArr_13._8_4_ = *(uint *)(lVal_23 + 0x147f9) ^ uVal_16;
      auArr_13._12_4_ = *(uint *)(lVal_23 + 0x147fd) ^ uVal_17;
      *(uint8_t (*)[16])(lVal_23 + 0x147f1) = auArr_13;
      auArr_6._4_4_ = *(uint *)(lVal_23 + 0x14805) ^ uVal_15;
      auArr_6._0_4_ = *(uint *)(lVal_23 + 0x14801) ^ uVal_14;
      auArr_6._8_4_ = *(uint *)(lVal_23 + 0x14809) ^ uVal_16;
      auArr_6._12_4_ = *(uint *)(lVal_23 + 0x1480d) ^ uVal_17;
      *(uint8_t (*)[16])(lVal_23 + 0x14801) = auArr_6;
      auArr_7._4_4_ = *(uint *)(lVal_23 + 0x14815) ^ uVal_15;
      auArr_7._0_4_ = *(uint *)(lVal_23 + 0x14811) ^ uVal_14;
      auArr_7._8_4_ = *(uint *)(lVal_23 + 0x14819) ^ uVal_16;
      auArr_7._12_4_ = *(uint *)(lVal_23 + 0x1481d) ^ uVal_17;
      *(uint8_t (*)[16])(lVal_23 + 0x14811) = auArr_7;
      *(byte *)(lVal_23 + 0x14821) = *(byte *)(lVal_23 + 0x14821) ^ 0x75;
      *(uint8_t *)(lVal_23 + 0x14822) = 0;
    }
    _local_b8 = ZEXT816(0);
    sz_21 = strlen((char *)pArr16_1);
    if (-1 < (int64_t)sz_21) {
      uVal_28 = 0xf;
      pU64_27 = local_b8;
      if (0xf < sz_21) {
        uVal_22 = sz_21 | 0xf;
        uVal_28 = 0x16;
        if (0x16 < uVal_22) {
          uVal_28 = uVal_22;
        }
        if (uVal_22 < 0xfff) {
          local_42 = 1;
          pU64_27 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
        }
        else {
          local_42 = 1;
          lVal_23 = func_0x180672de0(uVal_28 + 0x28);
          pU64_27 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_27 + -8) = lVal_23;
        }
        local_b8 = (uint8_t  [8])pU64_27;
      }
      uStack_a0 = uVal_28;
      local_a8 = (uint8_t  [8])sz_21;
      func_0x1806aa960(pU64_27,pArr16_1,sz_21);
      pU64_27[sz_21] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x14830) == '\0') {
        lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_23 + 0x14830) = 1;
        *(uint32_t *)(lVal_23 + 0x14828) = 0xb0293a38;
        *(uint16_t *)(lVal_23 + 0x1482c) = 0x137;
        func_0x180673140(&LAB_180438af0);
      }
      pU64_25 = local_50;
      lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint *)(lVal_23 + 0x14828);
      if (*(char *)(lVal_23 + 0x1482d) == '\x01') {
        *pU64_2 = *pU64_2 ^ 0xd54d5575;
        *(byte *)(lVal_23 + 0x1482c) = *(byte *)(lVal_23 + 0x1482c) ^ 0x37;
        *(uint8_t *)(lVal_23 + 0x1482d) = 0;
      }
      local_78 = ZEXT816(0);
      sz_21 = strlen((char *)pU64_2);
      if (-1 < (int64_t)sz_21) {
        uVal_28 = 0xf;
        if (0xf < sz_21) {
          uVal_22 = sz_21 | 0xf;
          uVal_28 = 0x16;
          if (0x16 < uVal_22) {
            uVal_28 = uVal_22;
          }
          if (uVal_22 < 0xfff) {
            local_41 = 1;
            pU64_26 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
          }
          else {
            local_41 = 1;
            lVal_23 = func_0x180672de0(uVal_28 + 0x28);
            pU64_26 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_26 + -8) = lVal_23;
          }
          local_78._0_8_ = pU64_26;
          pU64_25 = local_50;
        }
        local_68._0_8_ = sz_21;
        local_68._8_8_ = uVal_28;
        func_0x1806aa960(pU64_26,pU64_2,sz_21);
        pU64_26[sz_21] = 0;
        func_0x1801d3a80(pU64_25,local_78,local_b8,local_58,0,local_f8,0);
        if (0xf < (uint64_t)local_68._8_8_) {
          uVal_28 = local_68._8_8_ + 1;
          lVal_23 = local_78._0_8_;
          if (0xfff < uVal_28) {
            lVal_23 = *(int64_t *)(local_78._0_8_ + -8);
            if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_23)) goto LAB_1804171cb;
            uVal_28 = local_68._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_23,uVal_28);
        }
        pU64_25 = local_50;
        if (0xf < uStack_a0) {
          uVal_28 = uStack_a0 + 1;
          lVal_23 = (int64_t)local_b8;
          if (0xfff < uVal_28) {
            lVal_23 = *(int64_t *)((int64_t)local_b8 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_23)) {
LAB_1804171cb:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_28 = uStack_a0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_23,uVal_28);
        }
        return pU64_25;
      }
      goto LAB_1804171e9;
    }
  }
  local_42 = 1;
  func_0x18007ba70();
LAB_1804171e9:
  local_41 = 1;
  func_0x18007ba70();
  fnPtr_3 = (func_ptr_t )swi(3);
  pU64_25 = (uint64_t *)(*fnPtr_3)();
  return pU64_25;
}

// Unwind@180417200
void Unwind_180417200(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@180417250
void Unwind_180417250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180417290
void Unwind_180417290(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1804172d0
void Unwind_1804172d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180417310
void Unwind_180417310(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  *(uint8_t *)(param_2 + 0xf7) = 0;
  return;
}

// Unwind@180417350
void Unwind_180417350(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0xf7);
  func_0x180001e70(param_2 + 0x80);
  *(uint8_t *)(param_2 + 0xf6) = uVal_1;
  return;
}

// Unwind@180417390
void Unwind_180417390(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0xf6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@1804173e0
void Unwind_1804173e0(uint64_t param_1,int64_t param_2)
{
  func_0x1800822d0(*(uint64_t *)(param_2 + 0xe0));
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0xe8));
  return;
}

// Unwind@180417420
void Unwind_180417420(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x147a8) = 0;
  return;
}

// Unwind@180417720
void Unwind_180417720(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14860) = 0;
  return;
}

// Unwind@1804178d0
void Unwind_1804178d0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x30);
  return;
}

// Unwind@180417a50
void Unwind_180417a50(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x30);
  return;
}

// Unwind@180417bf0
void Unwind_180417bf0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x30);
  return;
}

// func_0x180417c20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180417c20(uint64_t *param_1)
{
  uint *pU64_1;
  uint64_t *pU64_2;
  char *fnPtr_3;
  uint8_t *pU64_4;
  uint8_t (*_Str)[16];
  uint8_t uVal_5;
  uint32_t uVal_6;
  func_ptr_t fnPtr_7;
  uint uVal_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint64_t ***ptr3_U64_13;
  uint64_t *pU64_14;
  uint8_t *pU64_15;
  uint64_t ****ptr4_U64_16;
  uint64_t ****ptr4_U64_17;
  uint64_t uVal_18;
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint8_t auArr_19 [16];
  uint uVal_23;
  uint uVal_24;
  uint uVal_25;
  uint8_t **local_370;
  uint64_t *local_368;
  uint8_t ***local_338;
  uint8_t local_330 [56];
  uint64_t local_2f8;
  uint8_t local_2f0 [56];
  uint64_t local_2b8;
  uint8_t local_2b0 [56];
  uint64_t local_278;
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
  uint64_t ****local_e8;
  undefined5 uStack_e0;
  undefined3 uStack_db;
  undefined5 uStack_d8;
  undefined3 uStack_d3;
  uint64_t uStack_d0;
  uint8_t local_c8 [16];
  uint32_t local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint16_t uStack_ac;
  uint8_t uStack_aa;
  uint32_t uStack_a9;
  uint8_t uStack_a5;
  uint16_t uStack_a4;
  uint8_t uStack_a2;
  uint32_t uStack_a1;
  uint8_t uStack_9d;
  uint32_t uStack_9c;
  uint32_t local_98;
  uint64_t *local_90;
  uint64_t ****local_88;
  uint16_t uStack_80;
  uint32_t uStack_7e;
  uint16_t uStack_7a;
  uint16_t uStack_78;
  uint16_t uStack_76;
  uint16_t uStack_74;
  uint16_t uStack_72;
  uint16_t uStack_70;
  undefined6 uStack_6e;
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
  uStack_a9._1_3_ = (uint3)_DAT_1806ccd30;
  uStack_a5 = (uint8_t)((uint)_DAT_1806ccd30 >> 0x18);
  uStack_a4 = (uint16_t)_UNK_1806ccd34;
  uStack_a2 = (uint8_t)((uint)_UNK_1806ccd34 >> 0x10);
  uStack_a1._1_3_ = (undefined3)_UNK_1806ccd38;
  uStack_a1 = CONCAT31(uStack_a1._1_3_,(char)((uint)_UNK_1806ccd34 >> 0x18));
  uStack_9d = (uint8_t)((uint)_UNK_1806ccd38 >> 0x18);
  uStack_9c = _UNK_1806ccd3c;
  local_b8 = _DAT_1806ccd20;
  uStack_b4 = _UNK_1806ccd24;
  uStack_b0 = _UNK_1806ccd28;
  uStack_ac = (uint16_t)_UNK_1806ccd2c;
  uStack_aa = (uint8_t)((uint)_UNK_1806ccd2c >> 0x10);
  uStack_a9._0_1_ = (uint8_t)((uint)_UNK_1806ccd2c >> 0x18);
  local_c8._8_8_ = _UNK_1806ccd18;
  local_c8._0_8_ = _DAT_1806ccd10;
  local_98 = 0x994bca7;
  local_90 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x14898) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x14898) = 1;
    func_0x18012b270(lVal_11 + 0x14861,local_c8);
    func_0x180673140(&LAB_180438b80);
  }
  uVal_8 = _UNK_1806b2c9c;
  uVal_22 = _UNK_1806b2c98;
  uVal_21 = _UNK_1806b2c94;
  uVal_20 = _DAT_1806b2c90;
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_11 + 0x14861);
  if (*(char *)(lVal_11 + 0x14895) == '\x01') {
    uVal_23 = *(uint *)(lVal_11 + 0x14865) ^ _UNK_1806b2c94;
    uVal_24 = *(uint *)(lVal_11 + 0x14869) ^ _UNK_1806b2c98;
    uVal_25 = *(uint *)(lVal_11 + 0x1486d) ^ _UNK_1806b2c9c;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2c90;
    *(uint *)(lVal_11 + 0x14865) = uVal_23;
    *(uint *)(lVal_11 + 0x14869) = uVal_24;
    *(uint *)(lVal_11 + 0x1486d) = uVal_25;
    *(uint *)(lVal_11 + 0x14871) = *(uint *)(lVal_11 + 0x14871) ^ uVal_20;
    *(uint *)(lVal_11 + 0x14875) = *(uint *)(lVal_11 + 0x14875) ^ uVal_21;
    *(uint *)(lVal_11 + 0x14879) = *(uint *)(lVal_11 + 0x14879) ^ uVal_22;
    *(uint *)(lVal_11 + 0x1487d) = *(uint *)(lVal_11 + 0x1487d) ^ uVal_8;
    *(uint *)(lVal_11 + 0x14881) = *(uint *)(lVal_11 + 0x14881) ^ uVal_20;
    *(uint *)(lVal_11 + 0x14885) = *(uint *)(lVal_11 + 0x14885) ^ uVal_21;
    *(uint *)(lVal_11 + 0x14889) = *(uint *)(lVal_11 + 0x14889) ^ uVal_22;
    *(uint *)(lVal_11 + 0x1488d) = *(uint *)(lVal_11 + 0x1488d) ^ uVal_8;
    *(uint *)(lVal_11 + 0x14891) = *(uint *)(lVal_11 + 0x14891) ^ 0x9f9d9cf;
    *(uint8_t *)(lVal_11 + 0x14895) = 0;
  }
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_aa = 0;
  uStack_a9 = (uint)uStack_a9._1_3_ << 8;
  local_c8 = (uint8_t  [16])0x0;
  sz_9 = strlen((char *)pU64_1);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
LAB_18041a92b:
    func_0x18007ba70();
LAB_18041a931:
    func_0x18007ba70();
LAB_18041a937:
    func_0x18007ba70();
LAB_18041a93d:
    local_4a = 1;
    func_0x18007ba70();
LAB_18041a94a:
    local_49 = 1;
    func_0x18007ba70();
LAB_18041a957:
    local_4b = 1;
    func_0x18007ba70();
LAB_18041a964:
    local_56 = 1;
    func_0x18007ba70();
LAB_18041a971:
    local_4c = 1;
    func_0x18007ba70();
LAB_18041a97e:
    local_57 = 1;
    func_0x18007ba70();
LAB_18041a98b:
    local_4d = 1;
    func_0x18007ba70();
LAB_18041a998:
    local_58 = 1;
    func_0x18007ba70();
LAB_18041a9a5:
    local_4e = 1;
    func_0x18007ba70();
LAB_18041a9b2:
    local_59 = 1;
    func_0x18007ba70();
LAB_18041a9bf:
    local_4f = 1;
    func_0x18007ba70();
LAB_18041a9cc:
    local_5a = 1;
    func_0x18007ba70();
LAB_18041a9d9:
    local_50 = 1;
    func_0x18007ba70();
LAB_18041a9e6:
    local_5b = 1;
    func_0x18007ba70();
LAB_18041a9f3:
    local_51 = 1;
    func_0x18007ba70();
LAB_18041aa00:
    local_5c = 1;
    func_0x18007ba70();
LAB_18041aa0d:
    local_53 = 1;
    func_0x18007ba70();
LAB_18041aa1a:
    local_52 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_9 < 0x10) {
      pU64_15 = local_c8;
      uVal_18 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8 = (uint32_t)sz_9;
    uStack_b4 = (uint32_t)(sz_9 >> 0x20);
    uStack_b0 = (uint32_t)uVal_18;
    uStack_ac = (uint16_t)(uVal_18 >> 0x20);
    uStack_aa = (uint8_t)(uVal_18 >> 0x30);
    uStack_a9._0_1_ = (uint8_t)(uVal_18 >> 0x38);
    func_0x1806aa960(pU64_15,pU64_1,sz_9);
    pU64_15[sz_9] = 0;
    pU64_15 = local_c8;
    func_0x1801c2ba0(local_90,0,0,pU64_15);
    uVal_18 = CONCAT17((uint8_t)uStack_a9,CONCAT16(uStack_aa,CONCAT24(uStack_ac,uStack_b0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    *local_90 = &PTR_LAB_1806ca300;
    *(uint32_t *)(local_90 + 0x10) = 0x1010101;
    *(uint32_t *)((int64_t)local_90 + 0x83) = 0x1010101;
    *(uint8_t (*)[16])(local_90 + 0x13) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(local_90 + 0x11) = (uint8_t  [16])0x0;
    *(uint32_t *)(local_90 + 0x14) = 0xffffffff;
    *(uint16_t *)(local_90 + 0x15) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x148a4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x148a4) = 1;
      *(uint32_t *)(lVal_11 + 0x1489c) = 0xc59d6c33;
      *(uint16_t *)(lVal_11 + 0x148a0) = 0x169;
      func_0x180673140(&LAB_180438bc0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x1489c);
    if (*(char *)(lVal_11 + 0x148a1) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xa9f11975;
      *(byte *)(lVal_11 + 0x148a0) = *(byte *)(lVal_11 + 0x148a0) ^ 0x69;
      *(uint8_t *)(lVal_11 + 0x148a1) = 0;
    }
    local_f0 = local_90 + 0x11;
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    uStack_a9 = uStack_a9 & 0xffffff00;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_18041a92b;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8 = (uint32_t)sz_9;
    uStack_b4 = (uint32_t)(sz_9 >> 0x20);
    uStack_b0 = (uint32_t)uVal_18;
    uStack_ac = (uint16_t)(uVal_18 >> 0x20);
    uStack_aa = (uint8_t)(uVal_18 >> 0x30);
    uStack_a9._0_1_ = (uint8_t)(uVal_18 >> 0x38);
    func_0x1806aa960(pU64_15,pU64_1,sz_9);
    pU64_15[sz_9] = 0;
    pU64_15 = local_c8;
    uVal_12 = func_0x1801d3650(local_f0,pU64_15,0);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x148b4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x148b4) = 1;
      *(uint8_t *)(lVal_11 + 0x148b2) = 1;
      *(uint64_t *)(lVal_11 + 0x148a8) = 0x2bff6a49cc9c783b;
      *(uint16_t *)(lVal_11 + 0x148b0) = 0x190c;
      func_0x180673140(&LAB_180438bf0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x148a8);
    if (*(char *)(lVal_11 + 0x148b2) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x47910569a9f11975;
      *(byte *)(lVal_11 + 0x148b0) = *(byte *)(lVal_11 + 0x148b0) ^ 0x75;
      *(byte *)(lVal_11 + 0x148b1) = *(byte *)(lVal_11 + 0x148b1) ^ 0x19;
      *(uint8_t *)(lVal_11 + 0x148b2) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7a = 0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_18041a931;
    if (sz_9 < 0x10) {
      ptr4_U64_16 = &local_88;
      uVal_18 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_88 = ptr4_U64_16;
      }
      else {
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_16;
      }
    }
    uStack_78 = (uint16_t)sz_9;
    uStack_76 = (uint16_t)(sz_9 >> 0x10);
    uStack_74 = (uint16_t)(sz_9 >> 0x20);
    uStack_72 = (uint16_t)(sz_9 >> 0x30);
    uStack_70 = (uint16_t)uVal_18;
    uStack_6e = (undefined6)(uVal_18 >> 0x10);
    func_0x1806aa960(ptr4_U64_16,pU64_2,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_9) = 0;
    ptr4_U64_16 = &local_88;
    uVal_12 = func_0x1801d3650(uVal_12,ptr4_U64_16,1);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x148c4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x148c4) = 1;
      *(uint64_t *)(lVal_11 + 0x148b8) = 0x23f4690bc8827031;
      *(uint16_t *)(lVal_11 + 0x148c0) = 0x175;
      func_0x180673140(&LAB_180438c20);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x148b8);
    if (*(char *)(lVal_11 + 0x148c1) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x47910569a9f11975;
      *(byte *)(lVal_11 + 0x148c0) = *(byte *)(lVal_11 + 0x148c0) ^ 0x75;
      *(uint8_t *)(lVal_11 + 0x148c1) = 0;
    }
    uStack_d8 = 0;
    uStack_d3 = 0;
    uStack_d0 = 0;
    local_e8 = (uint64_t ****)0x0;
    uStack_e0 = 0;
    uStack_db = 0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_18041a937;
    if (sz_9 < 0x10) {
      ptr4_U64_17 = &local_e8;
      uVal_18 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_e8 = ptr4_U64_17;
      }
      else {
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_13;
        local_e8 = ptr4_U64_17;
      }
    }
    uStack_d8 = (undefined5)sz_9;
    uStack_d3 = (undefined3)(sz_9 >> 0x28);
    uStack_d0 = uVal_18;
    func_0x1806aa960(ptr4_U64_17,pU64_2,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_9) = 0;
    func_0x1801d3650(uVal_12,&local_e8,2);
    if (0xf < uStack_d0) {
      uVal_18 = uStack_d0 + 1;
      ptr4_U64_17 = local_e8;
      if (0xfff < uVal_18) {
        ptr4_U64_17 = (uint64_t ****)local_e8[-1];
        if (0x1f < (uint64_t)((int64_t)local_e8 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18041a923;
        uVal_18 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_18);
    }
    uVal_18 = CONCAT62(uStack_6e,uStack_70);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_10) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_10);
    }
    uVal_18 = CONCAT17((uint8_t)uStack_a9,CONCAT16(uStack_aa,CONCAT24(uStack_ac,uStack_b0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_2f8 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_2f8 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_330);
    }
    local_b8 = _DAT_1806ccd54;
    uStack_b4 = _UNK_1806ccd58;
    uStack_b0 = _UNK_1806ccd5c;
    uStack_ac = (uint16_t)_UNK_1806ccd60;
    uStack_aa = (uint8_t)((uint)_UNK_1806ccd60 >> 0x10);
    local_c8._8_8_ = _UNK_1806ccd4c;
    local_c8._0_8_ = _DAT_1806ccd44;
    uStack_a9 = 0x2c3905a4;
    uStack_a5 = 0xac;
    uStack_a4 = 0xb352;
    uStack_a2 = 0x6b;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x148f0) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x148f0) = 1;
      func_0x1801b72f0(lVal_11 + 0x148c5,local_c8);
      func_0x180673140(&LAB_180438c50);
    }
    uVal_8 = _UNK_1806b2d6c;
    uVal_22 = _UNK_1806b2d68;
    uVal_21 = _UNK_1806b2d64;
    uVal_20 = _DAT_1806b2d60;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x148c5);
    if (*(char *)(lVal_11 + 0x148ec) == '\x01') {
      uVal_23 = *(uint *)(lVal_11 + 0x148c9) ^ _UNK_1806b2d64;
      uVal_24 = *(uint *)(lVal_11 + 0x148cd) ^ _UNK_1806b2d68;
      uVal_25 = *(uint *)(lVal_11 + 0x148d1) ^ _UNK_1806b2d6c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d60;
      *(uint *)(lVal_11 + 0x148c9) = uVal_23;
      *(uint *)(lVal_11 + 0x148cd) = uVal_24;
      *(uint *)(lVal_11 + 0x148d1) = uVal_25;
      *(uint *)(lVal_11 + 0x148d5) = *(uint *)(lVal_11 + 0x148d5) ^ uVal_20;
      *(uint *)(lVal_11 + 0x148d9) = *(uint *)(lVal_11 + 0x148d9) ^ uVal_21;
      *(uint *)(lVal_11 + 0x148dd) = *(uint *)(lVal_11 + 0x148dd) ^ uVal_22;
      *(uint *)(lVal_11 + 0x148e1) = *(uint *)(lVal_11 + 0x148e1) ^ uVal_8;
      *(uint *)(lVal_11 + 0x148e5) = *(uint *)(lVal_11 + 0x148e5) ^ 0xd54d5575;
      *(byte *)(lVal_11 + 0x148e9) = *(byte *)(lVal_11 + 0x148e9) ^ 0x37;
      *(byte *)(lVal_11 + 0x148ea) = *(byte *)(lVal_11 + 0x148ea) ^ 0xd7;
      *(byte *)(lVal_11 + 0x148eb) = *(byte *)(lVal_11 + 0x148eb) ^ 0x6b;
      *(uint8_t *)(lVal_11 + 0x148ec) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7a = 0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_18041a93d;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_4a = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_88 = ptr4_U64_16;
      }
      else {
        local_4a = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_16;
      }
    }
    uStack_78 = (uint16_t)sz_9;
    uStack_76 = (uint16_t)(sz_9 >> 0x10);
    uStack_74 = (uint16_t)(sz_9 >> 0x20);
    uStack_72 = (uint16_t)(sz_9 >> 0x30);
    uStack_70 = (uint16_t)uVal_18;
    uStack_6e = (undefined6)(uVal_18 >> 0x10);
    func_0x1806aa960(ptr4_U64_16,pU64_1,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_9) = 0;
    local_e8 = _DAT_1806ccd6b;
    uStack_e0 = (undefined5)_UNK_1806ccd73;
    uStack_db = (undefined3)((uint64_t)_UNK_1806ccd73 >> 0x28);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14904) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x14904) = 1;
      func_0x18007d150(lVal_11 + 0x148f1,&local_e8);
      func_0x180673140(&LAB_180438c80);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x148f1);
    if (*(char *)(lVal_11 + 0x14901) == '\x01') {
      uVal_20 = *(uint *)(lVal_11 + 0x148f5) ^ _UNK_1806b2d64;
      uVal_21 = *(uint *)(lVal_11 + 0x148f9) ^ _UNK_1806b2d68;
      uVal_22 = *(uint *)(lVal_11 + 0x148fd) ^ _UNK_1806b2d6c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d60;
      *(uint *)(lVal_11 + 0x148f5) = uVal_20;
      *(uint *)(lVal_11 + 0x148f9) = uVal_21;
      *(uint *)(lVal_11 + 0x148fd) = uVal_22;
      *(uint8_t *)(lVal_11 + 0x14901) = 0;
    }
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    uStack_a9 = uStack_a9 & 0xffffff00;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_18041a94a;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_49 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_49 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8 = (uint32_t)sz_9;
    uStack_b4 = (uint32_t)(sz_9 >> 0x20);
    uStack_b0 = (uint32_t)uVal_18;
    uStack_ac = (uint16_t)(uVal_18 >> 0x20);
    uStack_aa = (uint8_t)(uVal_18 >> 0x30);
    uStack_a9._0_1_ = (uint8_t)(uVal_18 >> 0x38);
    func_0x1806aa960(pU64_15,pU64_1,sz_9);
    pU64_15[sz_9] = 0;
    pU64_15 = local_c8;
    ptr4_U64_16 = &local_88;
    func_0x1801d3a80(local_90,pU64_15,ptr4_U64_16,local_f0,0,local_330,0);
    uVal_18 = CONCAT17((uint8_t)uStack_a9,CONCAT16(uStack_aa,CONCAT24(uStack_ac,uStack_b0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    uVal_18 = CONCAT62(uStack_6e,uStack_70);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_10) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_10);
    }
    local_2b8 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_2b8 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_2f0);
    }
    pU64_14 = local_90 + 0x10;
    uVal_5 = *(uint8_t *)pU64_14;
    local_b8 = _DAT_1806ccd8b;
    uStack_b4 = _UNK_1806ccd8f;
    uStack_b0 = _UNK_1806ccd93;
    uStack_ac = (uint16_t)_UNK_1806ccd97;
    uStack_aa = (uint8_t)((uint)_UNK_1806ccd97 >> 0x10);
    local_c8._8_8_ = _UNK_1806ccd83;
    local_c8._0_8_ = _DAT_1806ccd7b;
    uStack_a9 = 0x7d360388;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1492c) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x1492c) = 1;
      func_0x1801b30c0(lVal_11 + 0x14905,local_c8);
      func_0x180673140(&LAB_180438ca0);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x14905);
    func_0x18044a990(fnPtr_3);
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7a = 0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_18041a957;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_4b = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_88 = ptr4_U64_16;
      }
      else {
        local_4b = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_16;
      }
    }
    uStack_78 = (uint16_t)sz_9;
    uStack_76 = (uint16_t)(sz_9 >> 0x10);
    uStack_74 = (uint16_t)(sz_9 >> 0x20);
    uStack_72 = (uint16_t)(sz_9 >> 0x30);
    uStack_70 = (uint16_t)uVal_18;
    uStack_6e = (undefined6)(uVal_18 >> 0x10);
    func_0x1806aa960(ptr4_U64_16,fnPtr_3,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_9) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1493c) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x1493c) = 1;
      *(uint8_t *)(lVal_11 + 0x1493a) = 1;
      *(uint64_t *)(lVal_11 + 0x14930) = 0x85d4d0c2e70d243e;
      *(uint16_t *)(lVal_11 + 0x14938) = 0x4516;
      func_0x180673140(&LAB_180438cd0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x14930);
    if (*(char *)(lVal_11 + 0x1493a) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xe9b5b3b1c77d4573;
      *(byte *)(lVal_11 + 0x14938) = *(byte *)(lVal_11 + 0x14938) ^ 0x73;
      *(byte *)(lVal_11 + 0x14939) = *(byte *)(lVal_11 + 0x14939) ^ 0x45;
      *(uint8_t *)(lVal_11 + 0x1493a) = 0;
    }
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    uStack_a9 = uStack_a9 & 0xffffff00;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_18041a964;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_56 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_56 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8 = (uint32_t)sz_9;
    uStack_b4 = (uint32_t)(sz_9 >> 0x20);
    uStack_b0 = (uint32_t)uVal_18;
    uStack_ac = (uint16_t)(uVal_18 >> 0x20);
    uStack_aa = (uint8_t)(uVal_18 >> 0x30);
    uStack_a9._0_1_ = (uint8_t)(uVal_18 >> 0x38);
    func_0x1806aa960(pU64_15,pU64_2,sz_9);
    pU64_15[sz_9] = 0;
    pU64_15 = local_c8;
    ptr4_U64_16 = &local_88;
    func_0x1801ccd70(local_90,pU64_15,ptr4_U64_16,pU64_14,uVal_5,local_2f0,0);
    uVal_18 = CONCAT17((uint8_t)uStack_a9,CONCAT16(uStack_aa,CONCAT24(uStack_ac,uStack_b0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    uVal_18 = CONCAT62(uStack_6e,uStack_70);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_10) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_10);
    }
    local_278 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_278 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_2b0);
    }
    pU64_4 = (uint8_t *)((int64_t)local_90 + 0x82);
    uVal_5 = *pU64_4;
    local_88 = _DAT_1806ccd9e;
    uStack_80 = (uint16_t)_UNK_1806ccda6;
    uStack_7e = (uint32_t)((uint64_t)_UNK_1806ccda6 >> 0x10);
    uStack_7a = (uint16_t)((uint64_t)_UNK_1806ccda6 >> 0x30);
    uStack_78 = 0xd1b8;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14950) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x14950) = 1;
      func_0x18007c170(lVal_11 + 0x1493d,&local_88);
      func_0x180673140(&LAB_180438d00);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x1493d);
    func_0x1801be7b0(fnPtr_3);
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    uStack_a9 = uStack_a9 & 0xffffff00;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_18041a971;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_4c = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4c = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8 = (uint32_t)sz_9;
    uStack_b4 = (uint32_t)(sz_9 >> 0x20);
    uStack_b0 = (uint32_t)uVal_18;
    uStack_ac = (uint16_t)(uVal_18 >> 0x20);
    uStack_aa = (uint8_t)(uVal_18 >> 0x30);
    uStack_a9._0_1_ = (uint8_t)(uVal_18 >> 0x38);
    func_0x1806aa960(pU64_15,fnPtr_3,sz_9);
    pU64_15[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14960) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x14960) = 1;
      *(uint64_t *)(lVal_11 + 0x14958) = 0x1074cac8404b099;
      func_0x180673140(&LAB_180438d30);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x14958);
    if (*(char *)(lVal_11 + 0x1495f) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_11 + 0x1495d) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_11 + 0x1495c) << 0x20) ^ SUB168(_DAT_1806b5230,0);
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7a = 0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_18041a97e;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_57 = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_88 = ptr4_U64_16;
      }
      else {
        local_57 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_16;
      }
    }
    uStack_78 = (uint16_t)sz_9;
    uStack_76 = (uint16_t)(sz_9 >> 0x10);
    uStack_74 = (uint16_t)(sz_9 >> 0x20);
    uStack_72 = (uint16_t)(sz_9 >> 0x30);
    uStack_70 = (uint16_t)uVal_18;
    uStack_6e = (undefined6)(uVal_18 >> 0x10);
    func_0x1806aa960(ptr4_U64_16,pU64_2,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_9) = 0;
    ptr4_U64_16 = &local_88;
    pU64_15 = local_c8;
    func_0x1801ccd70(local_90,ptr4_U64_16,pU64_15,pU64_4,uVal_5,local_2b0,0);
    uVal_18 = CONCAT62(uStack_6e,uStack_70);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_10) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_10);
    }
    uVal_18 = CONCAT17((uint8_t)uStack_a9,CONCAT16(uStack_aa,CONCAT24(uStack_ac,uStack_b0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_238 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_238 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_270);
    }
    pU64_4 = (uint8_t *)((int64_t)local_90 + 0x83);
    uVal_5 = *pU64_4;
    uStack_a5 = (uint8_t)((uint)_DAT_1806ccdd0 >> 0x18);
    uStack_a4 = (uint16_t)_UNK_1806ccdd4;
    uStack_a2 = (uint8_t)((uint)_UNK_1806ccdd4 >> 0x10);
    uStack_a1._1_3_ = (undefined3)_UNK_1806ccdd8;
    uStack_a1 = CONCAT31(uStack_a1._1_3_,(char)((uint)_UNK_1806ccdd4 >> 0x18));
    uStack_9d = (uint8_t)((uint)_UNK_1806ccdd8 >> 0x18);
    uStack_9c = _UNK_1806ccddc;
    local_b8 = _DAT_1806ccdc0;
    uStack_b4 = _UNK_1806ccdc4;
    uStack_b0 = _UNK_1806ccdc8;
    uStack_ac = (uint16_t)_UNK_1806ccdcc;
    uStack_aa = (uint8_t)((uint)_UNK_1806ccdcc >> 0x10);
    uStack_a9._0_1_ = (uint8_t)((uint)_UNK_1806ccdcc >> 0x18);
    uStack_a9 = CONCAT31((int3)_DAT_1806ccdd0,(uint8_t)uStack_a9);
    local_c8._8_8_ = _UNK_1806ccdb8;
    local_c8._0_8_ = _DAT_1806ccdb0;
    local_98 = CONCAT31(local_98._1_3_,0x87);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14994) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x14994) = 1;
      func_0x1802148a0(lVal_11 + 0x14961,local_c8);
      func_0x180673140(&LAB_180438d60);
    }
    uVal_8 = _UNK_1806b2d7c;
    uVal_22 = _UNK_1806b2d78;
    uVal_21 = _UNK_1806b2d74;
    uVal_20 = _DAT_1806b2d70;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x14961);
    if (*(char *)(lVal_11 + 0x14992) == '\x01') {
      uVal_23 = *(uint *)(lVal_11 + 0x14965) ^ _UNK_1806b2d74;
      uVal_24 = *(uint *)(lVal_11 + 0x14969) ^ _UNK_1806b2d78;
      uVal_25 = *(uint *)(lVal_11 + 0x1496d) ^ _UNK_1806b2d7c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d70;
      *(uint *)(lVal_11 + 0x14965) = uVal_23;
      *(uint *)(lVal_11 + 0x14969) = uVal_24;
      *(uint *)(lVal_11 + 0x1496d) = uVal_25;
      *(uint *)(lVal_11 + 0x14971) = *(uint *)(lVal_11 + 0x14971) ^ uVal_20;
      *(uint *)(lVal_11 + 0x14975) = *(uint *)(lVal_11 + 0x14975) ^ uVal_21;
      *(uint *)(lVal_11 + 0x14979) = *(uint *)(lVal_11 + 0x14979) ^ uVal_22;
      *(uint *)(lVal_11 + 0x1497d) = *(uint *)(lVal_11 + 0x1497d) ^ uVal_8;
      *(uint *)(lVal_11 + 0x14981) = *(uint *)(lVal_11 + 0x14981) ^ uVal_20;
      *(uint *)(lVal_11 + 0x14985) = *(uint *)(lVal_11 + 0x14985) ^ uVal_21;
      *(uint *)(lVal_11 + 0x14989) = *(uint *)(lVal_11 + 0x14989) ^ uVal_22;
      *(uint *)(lVal_11 + 0x1498d) = *(uint *)(lVal_11 + 0x1498d) ^ uVal_8;
      *(byte *)(lVal_11 + 0x14991) = *(byte *)(lVal_11 + 0x14991) ^ 0x87;
      *(uint8_t *)(lVal_11 + 0x14992) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7a = 0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_18041a98b;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_4d = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_88 = ptr4_U64_16;
      }
      else {
        local_4d = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_16;
      }
    }
    uStack_78 = (uint16_t)sz_9;
    uStack_76 = (uint16_t)(sz_9 >> 0x10);
    uStack_74 = (uint16_t)(sz_9 >> 0x20);
    uStack_72 = (uint16_t)(sz_9 >> 0x30);
    uStack_70 = (uint16_t)uVal_18;
    uStack_6e = (undefined6)(uVal_18 >> 0x10);
    func_0x1806aa960(ptr4_U64_16,pU64_1,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_9) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x149a8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x149a8) = 1;
      *(uint8_t *)(lVal_11 + 0x149a4) = 1;
      *(uint64_t *)(lVal_11 + 0x14998) = 0x258bbfc0f4cdb2cf;
      *(uint32_t *)(lVal_11 + 0x149a0) = 0x93d0b5e6;
      func_0x180673140(&LAB_180438da0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x14998);
    if (*(char *)(lVal_11 + 0x149a4) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_11 + 0x149a0) = *(uint *)(lVal_11 + 0x149a0) ^ 0x93a3c787;
      *(uint8_t *)(lVal_11 + 0x149a4) = 0;
    }
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    uStack_a9 = uStack_a9 & 0xffffff00;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_18041a998;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_58 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_58 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8 = (uint32_t)sz_9;
    uStack_b4 = (uint32_t)(sz_9 >> 0x20);
    uStack_b0 = (uint32_t)uVal_18;
    uStack_ac = (uint16_t)(uVal_18 >> 0x20);
    uStack_aa = (uint8_t)(uVal_18 >> 0x30);
    uStack_a9._0_1_ = (uint8_t)(uVal_18 >> 0x38);
    func_0x1806aa960(pU64_15,pU64_2,sz_9);
    pU64_15[sz_9] = 0;
    pU64_15 = local_c8;
    ptr4_U64_16 = &local_88;
    func_0x1801ccd70(local_90,pU64_15,ptr4_U64_16,pU64_4,uVal_5,local_270,0);
    uVal_18 = CONCAT17((uint8_t)uStack_a9,CONCAT16(uStack_aa,CONCAT24(uStack_ac,uStack_b0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    uVal_18 = CONCAT62(uStack_6e,uStack_70);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_10) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_10);
    }
    local_1f8 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_1f8 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_230);
    }
    pU64_4 = (uint8_t *)((int64_t)local_90 + 0x81);
    uVal_5 = *pU64_4;
    uStack_78 = _UNK_1806ccdf1;
    uStack_76 = (uint16_t)_UNK_1806ccdf3;
    uStack_74 = (uint16_t)((uint)_UNK_1806ccdf3 >> 0x10);
    uStack_72 = (uint16_t)_UNK_1806ccdf7;
    uStack_70 = (uint16_t)((uint)_UNK_1806ccdf7 >> 0x10);
    local_88 = _DAT_1806ccde1;
    uStack_80 = _UNK_1806ccde9;
    uStack_7e = _DAT_1806ccdeb;
    uStack_7a = _UNK_1806ccdef;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x149c4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x149c4) = 1;
      func_0x1800d9840(lVal_11 + 0x149a9,&local_88);
      func_0x180673140(&LAB_180438dd0);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x149a9);
    func_0x1800f2c80(fnPtr_3);
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    uStack_a9 = uStack_a9 & 0xffffff00;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_18041a9a5;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_4e = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4e = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8 = (uint32_t)sz_9;
    uStack_b4 = (uint32_t)(sz_9 >> 0x20);
    uStack_b0 = (uint32_t)uVal_18;
    uStack_ac = (uint16_t)(uVal_18 >> 0x20);
    uStack_aa = (uint8_t)(uVal_18 >> 0x30);
    uStack_a9._0_1_ = (uint8_t)(uVal_18 >> 0x38);
    func_0x1806aa960(pU64_15,fnPtr_3,sz_9);
    pU64_15[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x149d0) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x149d0) = 1;
      *(uint64_t *)(lVal_11 + 0x149c8) = 0x121e26b9e879087;
      func_0x180673140(&LAB_180438e00);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x149c8);
    if (*(char *)(lVal_11 + 0x149cf) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_11 + 0x149cd) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_11 + 0x149cc) << 0x20) ^ SUB168(_DAT_1806bb3a0,0);
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7a = 0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_18041a9b2;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_59 = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_88 = ptr4_U64_16;
      }
      else {
        local_59 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_16;
      }
    }
    uStack_78 = (uint16_t)sz_9;
    uStack_76 = (uint16_t)(sz_9 >> 0x10);
    uStack_74 = (uint16_t)(sz_9 >> 0x20);
    uStack_72 = (uint16_t)(sz_9 >> 0x30);
    uStack_70 = (uint16_t)uVal_18;
    uStack_6e = (undefined6)(uVal_18 >> 0x10);
    func_0x1806aa960(ptr4_U64_16,pU64_2,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_9) = 0;
    ptr4_U64_16 = &local_88;
    pU64_15 = local_c8;
    func_0x1801ccd70(local_90,ptr4_U64_16,pU64_15,pU64_4,uVal_5,local_230,0);
    uVal_18 = CONCAT62(uStack_6e,uStack_70);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_10) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_10);
    }
    uVal_18 = CONCAT17((uint8_t)uStack_a9,CONCAT16(uStack_aa,CONCAT24(uStack_ac,uStack_b0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_1b8 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_1b8 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_1f0);
    }
    pU64_4 = (uint8_t *)((int64_t)local_90 + 0x84);
    uVal_5 = *pU64_4;
    local_88 = _DAT_1806ccdfb;
    uStack_80 = (uint16_t)_UNK_1806cce03;
    uStack_7e = (uint32_t)((uint64_t)_UNK_1806cce03 >> 0x10);
    uStack_7a = (uint16_t)((uint64_t)_UNK_1806cce03 >> 0x30);
    uStack_78 = 0xbe6c;
    uStack_76 = 0x252c;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x149e8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x149e8) = 1;
      func_0x18007cfc0(lVal_11 + 0x149d1,&local_88);
      func_0x180673140(&LAB_180438e30);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x149d1);
    func_0x1802e3a90(fnPtr_3);
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    uStack_a9 = uStack_a9 & 0xffffff00;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_18041a9bf;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_4f = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4f = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8 = (uint32_t)sz_9;
    uStack_b4 = (uint32_t)(sz_9 >> 0x20);
    uStack_b0 = (uint32_t)uVal_18;
    uStack_ac = (uint16_t)(uVal_18 >> 0x20);
    uStack_aa = (uint8_t)(uVal_18 >> 0x30);
    uStack_a9._0_1_ = (uint8_t)(uVal_18 >> 0x38);
    func_0x1806aa960(pU64_15,fnPtr_3,sz_9);
    pU64_15[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x149fc) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x149fc) = 1;
      *(uint8_t *)(lVal_11 + 0x149fa) = 1;
      *(uint64_t *)(lVal_11 + 0x149f0) = 0x8001d65482ca744;
      *(uint16_t *)(lVal_11 + 0x149f8) = 0xd368;
      func_0x180673140(&LAB_180438e60);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x149f0);
    if (*(char *)(lVal_11 + 0x149fa) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x656173452549d30d;
      *(byte *)(lVal_11 + 0x149f8) = *(byte *)(lVal_11 + 0x149f8) ^ 0xd;
      *(byte *)(lVal_11 + 0x149f9) = *(byte *)(lVal_11 + 0x149f9) ^ 0xd3;
      *(uint8_t *)(lVal_11 + 0x149fa) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7a = 0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_18041a9cc;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_5a = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_88 = ptr4_U64_16;
      }
      else {
        local_5a = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_16;
      }
    }
    uStack_78 = (uint16_t)sz_9;
    uStack_76 = (uint16_t)(sz_9 >> 0x10);
    uStack_74 = (uint16_t)(sz_9 >> 0x20);
    uStack_72 = (uint16_t)(sz_9 >> 0x30);
    uStack_70 = (uint16_t)uVal_18;
    uStack_6e = (undefined6)(uVal_18 >> 0x10);
    func_0x1806aa960(ptr4_U64_16,pU64_2,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_9) = 0;
    ptr4_U64_16 = &local_88;
    pU64_15 = local_c8;
    func_0x1801ccd70(local_90,ptr4_U64_16,pU64_15,pU64_4,uVal_5,local_1f0,0);
    uVal_18 = CONCAT62(uStack_6e,uStack_70);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_10) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_10);
    }
    uVal_18 = CONCAT17((uint8_t)uStack_a9,CONCAT16(uStack_aa,CONCAT24(uStack_ac,uStack_b0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_178 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_178 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_1b0);
    }
    pU64_4 = (uint8_t *)((int64_t)local_90 + 0x85);
    uVal_5 = *pU64_4;
    local_88 = _DAT_1806cce0f;
    uStack_80 = (uint16_t)_UNK_1806cce17;
    uStack_7e = (uint32_t)((uint64_t)_UNK_1806cce17 >> 0x10);
    uStack_7a = (uint16_t)((uint64_t)_UNK_1806cce17 >> 0x30);
    uStack_78 = 0x3ae5;
    uStack_76 = 0xa191;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14a14) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x14a14) = 1;
      func_0x18007cfc0(lVal_11 + 0x149fd,&local_88);
      func_0x180673140(&LAB_180438e90);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x149fd);
    func_0x18044a9e0(fnPtr_3);
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    uStack_a9 = uStack_a9 & 0xffffff00;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_18041a9d9;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_50 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_50 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8 = (uint32_t)sz_9;
    uStack_b4 = (uint32_t)(sz_9 >> 0x20);
    uStack_b0 = (uint32_t)uVal_18;
    uStack_ac = (uint16_t)(uVal_18 >> 0x20);
    uStack_aa = (uint8_t)(uVal_18 >> 0x30);
    uStack_a9._0_1_ = (uint8_t)(uVal_18 >> 0x38);
    func_0x1806aa960(pU64_15,fnPtr_3,sz_9);
    pU64_15[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14a24) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x14a24) = 1;
      *(uint8_t *)(lVal_11 + 0x14a20) = 1;
      *(uint64_t *)(lVal_11 + 0x14a18) = 0xef83f6a1ccb0078c;
      func_0x180673140(&LAB_180438ec0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x14a18);
    if (*(char *)(lVal_11 + 0x14a20) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xefc7bf81a1d573c5;
      *(uint8_t *)(lVal_11 + 0x14a20) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7a = 0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_18041a9e6;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_5b = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_88 = ptr4_U64_16;
      }
      else {
        local_5b = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_16;
      }
    }
    uStack_78 = (uint16_t)sz_9;
    uStack_76 = (uint16_t)(sz_9 >> 0x10);
    uStack_74 = (uint16_t)(sz_9 >> 0x20);
    uStack_72 = (uint16_t)(sz_9 >> 0x30);
    uStack_70 = (uint16_t)uVal_18;
    uStack_6e = (undefined6)(uVal_18 >> 0x10);
    func_0x1806aa960(ptr4_U64_16,pU64_2,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_9) = 0;
    ptr4_U64_16 = &local_88;
    pU64_15 = local_c8;
    func_0x1801ccd70(local_90,ptr4_U64_16,pU64_15,pU64_4,uVal_5,local_1b0,0);
    uVal_18 = CONCAT62(uStack_6e,uStack_70);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_10) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_10);
    }
    uVal_18 = CONCAT17((uint8_t)uStack_a9,CONCAT16(uStack_aa,CONCAT24(uStack_ac,uStack_b0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_138 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_138 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_170);
    }
    pU64_4 = (uint8_t *)((int64_t)local_90 + 0x86);
    uVal_5 = *pU64_4;
    local_b8 = _DAT_1806cce33;
    uStack_b4 = _UNK_1806cce37;
    uStack_b0 = _UNK_1806cce3b;
    uStack_ac = (uint16_t)_UNK_1806cce3f;
    local_c8._8_8_ = _UNK_1806cce2b;
    local_c8._0_8_ = _DAT_1806cce23;
    uStack_aa = 0x81;
    uStack_a9 = 0xc19158ec;
    uStack_a5 = 0x24;
    uStack_a4 = 0x2b4a;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14a4c) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x14a4c) = 1;
      func_0x180086e20(lVal_11 + 0x14a25,local_c8);
      func_0x180673140(&LAB_180438ee0);
    }
    uVal_8 = _UNK_1806b2cbc;
    uVal_22 = _UNK_1806b2cb8;
    uVal_21 = _UNK_1806b2cb4;
    uVal_20 = _DAT_1806b2cb0;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x14a25);
    if (*(char *)(lVal_11 + 0x14a4b) == '\x01') {
      uVal_23 = *(uint *)(lVal_11 + 0x14a29) ^ _UNK_1806b2cb4;
      uVal_24 = *(uint *)(lVal_11 + 0x14a2d) ^ _UNK_1806b2cb8;
      uVal_25 = *(uint *)(lVal_11 + 0x14a31) ^ _UNK_1806b2cbc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2cb0;
      *(uint *)(lVal_11 + 0x14a29) = uVal_23;
      *(uint *)(lVal_11 + 0x14a2d) = uVal_24;
      *(uint *)(lVal_11 + 0x14a31) = uVal_25;
      *(uint *)(lVal_11 + 0x14a35) = *(uint *)(lVal_11 + 0x14a35) ^ uVal_20;
      *(uint *)(lVal_11 + 0x14a39) = *(uint *)(lVal_11 + 0x14a39) ^ uVal_21;
      *(uint *)(lVal_11 + 0x14a3d) = *(uint *)(lVal_11 + 0x14a3d) ^ uVal_22;
      *(uint *)(lVal_11 + 0x14a41) = *(uint *)(lVal_11 + 0x14a41) ^ uVal_8;
      *(uint *)(lVal_11 + 0x14a45) = *(uint *)(lVal_11 + 0x14a45) ^ 0x45a9b135;
      *(byte *)(lVal_11 + 0x14a49) = *(byte *)(lVal_11 + 0x14a49) ^ 0x39;
      *(byte *)(lVal_11 + 0x14a4a) = *(byte *)(lVal_11 + 0x14a4a) ^ 0x2b;
      *(uint8_t *)(lVal_11 + 0x14a4b) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7a = 0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_18041a9f3;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_51 = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_88 = ptr4_U64_16;
      }
      else {
        local_51 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_16;
      }
    }
    uStack_78 = (uint16_t)sz_9;
    uStack_76 = (uint16_t)(sz_9 >> 0x10);
    uStack_74 = (uint16_t)(sz_9 >> 0x20);
    uStack_72 = (uint16_t)(sz_9 >> 0x30);
    uStack_70 = (uint16_t)uVal_18;
    uStack_6e = (undefined6)(uVal_18 >> 0x10);
    func_0x1806aa960(ptr4_U64_16,pU64_1,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_9) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14a60) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x14a60) = 1;
      uVal_12 = _UNK_1806c9148;
      *(uint64_t *)(lVal_11 + 0x14a50) = _DAT_1806c9140;
      *(uint64_t *)(lVal_11 + 0x14a58) = uVal_12;
      func_0x180673140(&LAB_180438f10);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_11 + 0x14a50);
    if (*(char *)(lVal_11 + 0x14a5f) == '\x01') {
      uVal_6 = *(uint32_t *)(lVal_11 + 0x14a58);
      auArr_19 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_6 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_6 >> 0x10),uVal_6)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_11 + 0x14a5d) >> 8)),
                                                 (char)((uint)uVal_6 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_11 + 0x14a5d),(char)uVal_6
                                                ))),_DAT_1806ae110);
      auArr_19._8_8_ =
           auArr_19._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_11 + 0x14a5c) << 0x20;
      auArr_19 = pblendw(auArr_19,*_Str,0xf);
      *_Str = auArr_19 ^ _DAT_1806b6870;
    }
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    uStack_a9 = uStack_a9 & 0xffffff00;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)_Str);
    if ((int64_t)sz_9 < 0) goto LAB_18041aa00;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_5c = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_5c = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8 = (uint32_t)sz_9;
    uStack_b4 = (uint32_t)(sz_9 >> 0x20);
    uStack_b0 = (uint32_t)uVal_18;
    uStack_ac = (uint16_t)(uVal_18 >> 0x20);
    uStack_aa = (uint8_t)(uVal_18 >> 0x30);
    uStack_a9._0_1_ = (uint8_t)(uVal_18 >> 0x38);
    func_0x1806aa960(pU64_15,_Str,sz_9);
    pU64_15[sz_9] = 0;
    pU64_15 = local_c8;
    ptr4_U64_16 = &local_88;
    func_0x1801ccd70(local_90,pU64_15,ptr4_U64_16,pU64_4,uVal_5,local_170,0);
    uVal_18 = CONCAT17((uint8_t)uStack_a9,CONCAT16(uStack_aa,CONCAT24(uStack_ac,uStack_b0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    uVal_18 = CONCAT62(uStack_6e,uStack_70);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_10) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_10);
    }
    local_f8 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_f8 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_130);
    }
    pU64_14 = local_90 + 0x15;
    uVal_5 = *(uint8_t *)pU64_14;
    local_88 = _DAT_1806cce49;
    uStack_80 = (uint16_t)_UNK_1806cce51;
    uStack_7e = (uint32_t)((uint64_t)_UNK_1806cce51 >> 0x10);
    uStack_7a = 0x93d1;
    uStack_78 = 0x5428;
    uStack_76 = 0xad53;
    uStack_74 = 0xd54;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14a78) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x14a78) = 1;
      func_0x18007cab0(lVal_11 + 0x14a61,&local_88);
      func_0x180673140(&LAB_180438f40);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x14a61);
    func_0x18036e8f0(fnPtr_3);
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    uStack_a9 = uStack_a9 & 0xffffff00;
    local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_18041aa0d;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_53 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_53 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8 = (uint32_t)sz_9;
    uStack_b4 = (uint32_t)(sz_9 >> 0x20);
    uStack_b0 = (uint32_t)uVal_18;
    uStack_ac = (uint16_t)(uVal_18 >> 0x20);
    uStack_aa = (uint8_t)(uVal_18 >> 0x30);
    uStack_a9._0_1_ = (uint8_t)(uVal_18 >> 0x38);
    func_0x1806aa960(pU64_15,fnPtr_3,sz_9);
    pU64_15[sz_9] = 0;
    local_e8 = _DAT_1806cce5f;
    uStack_e0 = (undefined5)_UNK_1806cce67;
    uStack_db = 0x8acb63;
    uStack_d8 = 0x27aa495f20;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14a90) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x14a90) = 1;
      func_0x18007cd50(lVal_11 + 0x14a79,&local_e8);
      func_0x180673140(&LAB_180438f70);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x14a79);
    func_0x18044aa00(fnPtr_3);
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7a = 0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_18041aa1a;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_52 = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_88 = ptr4_U64_16;
      }
      else {
        local_52 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_16;
      }
    }
    uStack_78 = (uint16_t)sz_9;
    uStack_76 = (uint16_t)(sz_9 >> 0x10);
    uStack_74 = (uint16_t)(sz_9 >> 0x20);
    uStack_72 = (uint16_t)(sz_9 >> 0x30);
    uStack_70 = (uint16_t)uVal_18;
    uStack_6e = (undefined6)(uVal_18 >> 0x10);
    func_0x1806aa960(ptr4_U64_16,fnPtr_3,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_9) = 0;
    ptr4_U64_16 = &local_88;
    pU64_15 = local_c8;
    func_0x1801ccd70(local_90,ptr4_U64_16,pU64_15,pU64_14,uVal_5,local_130,0);
    uVal_18 = CONCAT62(uStack_6e,uStack_70);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_10) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_10);
    }
    uVal_18 = CONCAT17((uint8_t)uStack_a9,CONCAT16(uStack_aa,CONCAT24(uStack_ac,uStack_b0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_c8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_18041a923;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_370 = &PTR_LAB_1806ce590;
    local_368 = local_90;
    local_338 = &local_370;
    uVal_5 = *(uint8_t *)((int64_t)local_90 + 0xa9);
    uStack_a5 = (uint8_t)_UNK_1806cce97;
    uStack_a4 = (uint16_t)((uint)_UNK_1806cce97 >> 8);
    uStack_a2 = (uint8_t)((uint)_UNK_1806cce97 >> 0x18);
    uStack_a1 = _UNK_1806cce9b;
    local_b8 = _DAT_1806cce84;
    uStack_b4 = _UNK_1806cce88;
    uStack_b0 = _UNK_1806cce8c;
    uStack_ac = (uint16_t)_UNK_1806cce90;
    uStack_aa = (uint8_t)((uint)_UNK_1806cce90 >> 0x10);
    uStack_a9._0_1_ = (uint8_t)((uint)_UNK_1806cce90 >> 0x18);
    uStack_a9 = CONCAT31(_UNK_1806cce94,(uint8_t)uStack_a9);
    local_c8._8_8_ = _UNK_1806cce7c;
    local_c8._0_8_ = _DAT_1806cce74;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14ac0) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x14ac0) = 1;
      func_0x1801b3830(lVal_11 + 0x14a91,local_c8);
      func_0x180673140(&LAB_180438fa0);
    }
    uVal_8 = _UNK_1806b2d8c;
    uVal_22 = _UNK_1806b2d88;
    uVal_21 = _UNK_1806b2d84;
    uVal_20 = _DAT_1806b2d80;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x14a91);
    if (*(char *)(lVal_11 + 0x14abc) == '\x01') {
      uVal_23 = *(uint *)(lVal_11 + 0x14a95) ^ _UNK_1806b2d84;
      uVal_24 = *(uint *)(lVal_11 + 0x14a99) ^ _UNK_1806b2d88;
      uVal_25 = *(uint *)(lVal_11 + 0x14a9d) ^ _UNK_1806b2d8c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d80;
      *(uint *)(lVal_11 + 0x14a95) = uVal_23;
      *(uint *)(lVal_11 + 0x14a99) = uVal_24;
      *(uint *)(lVal_11 + 0x14a9d) = uVal_25;
      *(uint *)(lVal_11 + 0x14aa1) = *(uint *)(lVal_11 + 0x14aa1) ^ uVal_20;
      *(uint *)(lVal_11 + 0x14aa5) = *(uint *)(lVal_11 + 0x14aa5) ^ uVal_21;
      *(uint *)(lVal_11 + 0x14aa9) = *(uint *)(lVal_11 + 0x14aa9) ^ uVal_22;
      *(uint *)(lVal_11 + 0x14aad) = *(uint *)(lVal_11 + 0x14aad) ^ uVal_8;
      *(uint64_t *)(lVal_11 + 0x14ab1) = *(uint64_t *)(lVal_11 + 0x14ab1) ^ SUB168(_DAT_1806b5b50,0)
      ;
      *(byte *)(lVal_11 + 0x14ab9) = *(byte *)(lVal_11 + 0x14ab9) ^ 0x1d;
      *(byte *)(lVal_11 + 0x14aba) = *(byte *)(lVal_11 + 0x14aba) ^ 0x77;
      *(byte *)(lVal_11 + 0x14abb) = *(byte *)(lVal_11 + 0x14abb) ^ 0x4d;
      *(uint8_t *)(lVal_11 + 0x14abc) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7a = 0;
    sz_9 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_9) {
      uVal_18 = 0xf;
      if (0xf < sz_9) {
        uVal_10 = sz_9 | 0xf;
        uVal_18 = 0x16;
        if (0x16 < uVal_10) {
          uVal_18 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          local_55 = 1;
          ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
          local_88 = ptr4_U64_16;
        }
        else {
          local_55 = 1;
          ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
          ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
          ptr4_U64_16[-1] = ptr3_U64_13;
          local_88 = ptr4_U64_16;
        }
      }
      uStack_78 = (uint16_t)sz_9;
      uStack_76 = (uint16_t)(sz_9 >> 0x10);
      uStack_74 = (uint16_t)(sz_9 >> 0x20);
      uStack_72 = (uint16_t)(sz_9 >> 0x30);
      uStack_70 = (uint16_t)uVal_18;
      uStack_6e = (undefined6)(uVal_18 >> 0x10);
      func_0x1806aa960(ptr4_U64_16,pU64_1,sz_9);
      *(uint8_t *)((int64_t)ptr4_U64_16 + sz_9) = 0;
      local_e8 = _DAT_1806cce9f;
      uStack_e0 = (undefined5)_UNK_1806ccea7;
      uStack_db = 0xd6556d;
      uStack_d8 = 0xbf78391978;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x14ad8) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0x14ad8) = 1;
        func_0x18007cd50(lVal_11 + 0x14ac1,&local_e8);
        func_0x180673140(&LAB_180438fd0);
      }
      fnPtr_3 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14ac1
                       );
      func_0x1801bf490(fnPtr_3);
      local_c8 = (uint8_t  [16])0x0;
      sz_9 = strlen(fnPtr_3);
      if (-1 < (int64_t)sz_9) {
        uVal_18 = 0xf;
        if (0xf < sz_9) {
          uVal_10 = sz_9 | 0xf;
          uVal_18 = 0x16;
          if (0x16 < uVal_10) {
            uVal_18 = uVal_10;
          }
          if (uVal_10 < 0xfff) {
            local_54 = 1;
            pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
          }
          else {
            local_54 = 1;
            lVal_11 = func_0x180672de0(uVal_18 + 0x28);
            pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_15 + -8) = lVal_11;
          }
          local_c8._0_8_ = pU64_15;
        }
        pU64_14 = local_90;
        lVal_11 = (int64_t)local_90 + 0xa9;
        local_b8 = (uint32_t)sz_9;
        uStack_b4 = (uint32_t)(sz_9 >> 0x20);
        uStack_b0 = (uint32_t)uVal_18;
        uStack_ac = (uint16_t)(uVal_18 >> 0x20);
        uStack_aa = (uint8_t)(uVal_18 >> 0x30);
        uStack_a9._0_1_ = (uint8_t)(uVal_18 >> 0x38);
        func_0x1806aa960(pU64_15,fnPtr_3,sz_9);
        pU64_15[sz_9] = 0;
        func_0x1801ccd70(pU64_14,local_c8,&local_88,lVal_11,uVal_5,&local_370,0);
        uVal_18 = CONCAT17((uint8_t)uStack_a9,CONCAT16(uStack_aa,CONCAT24(uStack_ac,uStack_b0)));
        if (0xf < uVal_18) {
          uVal_10 = uVal_18 + 1;
          lVal_11 = local_c8._0_8_;
          if (0xfff < uVal_10) {
            lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) goto LAB_18041a923;
            uVal_10 = uVal_18 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_10);
        }
        uVal_18 = CONCAT62(uStack_6e,uStack_70);
        if (0xf < uVal_18) {
          uVal_10 = uVal_18 + 1;
          ptr4_U64_16 = local_88;
          if (0xfff < uVal_10) {
            ptr4_U64_16 = (uint64_t ****)local_88[-1];
            if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16))) {
LAB_18041a923:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_10 = uVal_18 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_16,uVal_10);
        }
        return local_90;
      }
      goto LAB_18041aa34;
    }
  }
  local_55 = 1;
  func_0x18007ba70();
LAB_18041aa34:
  local_54 = 1;
  func_0x18007ba70();
  fnPtr_7 = (func_ptr_t )swi(3);
  pU64_14 = (uint64_t *)(*fnPtr_7)();
  return pU64_14;
}

// Unwind@18041aa50
void Unwind_18041aa50(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xb0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x78));
    *(uint64_t *)(param_2 + 0xb0) = 0;
  }
  return;
}

// Unwind@18041aaa0
void Unwind_18041aaa0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x148f0) = 0;
  *(uint8_t *)(param_2 + 0x35e) = 1;
  return;
}

// Unwind@18041aaf0
void Unwind_18041aaf0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xf0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xb8));
    *(uint64_t *)(param_2 + 0xf0) = 0;
  }
  return;
}

// Unwind@18041ab40
void Unwind_18041ab40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1492c) = 0;
  *(uint8_t *)(param_2 + 0x35d) = 1;
  return;
}

// Unwind@18041ab90
void Unwind_18041ab90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x130);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xf8));
    *(uint64_t *)(param_2 + 0x130) = 0;
  }
  return;
}

// Unwind@18041abf0
void Unwind_18041abf0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14950) = 0;
  *(uint8_t *)(param_2 + 0x35c) = 1;
  return;
}

// Unwind@18041ac40
void Unwind_18041ac40(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x170);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x138));
    *(uint64_t *)(param_2 + 0x170) = 0;
  }
  return;
}

// Unwind@18041aca0
void Unwind_18041aca0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14994) = 0;
  *(uint8_t *)(param_2 + 0x35b) = 1;
  return;
}

// Unwind@18041acf0
void Unwind_18041acf0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1b0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x178));
    *(uint64_t *)(param_2 + 0x1b0) = 0;
  }
  return;
}

// Unwind@18041ad50
void Unwind_18041ad50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x149c4) = 0;
  *(uint8_t *)(param_2 + 0x35a) = 1;
  return;
}

// Unwind@18041ada0
void Unwind_18041ada0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1f0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1b8));
    *(uint64_t *)(param_2 + 0x1f0) = 0;
  }
  return;
}

// Unwind@18041ae00
void Unwind_18041ae00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x149e8) = 0;
  *(uint8_t *)(param_2 + 0x359) = 1;
  return;
}

// Unwind@18041ae50
void Unwind_18041ae50(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x230);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f8));
    *(uint64_t *)(param_2 + 0x230) = 0;
  }
  return;
}

// Unwind@18041aeb0
void Unwind_18041aeb0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14a14) = 0;
  *(uint8_t *)(param_2 + 0x358) = 1;
  return;
}

// Unwind@18041af00
void Unwind_18041af00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x270);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x238));
    *(uint64_t *)(param_2 + 0x270) = 0;
  }
  return;
}

// Unwind@18041af60
void Unwind_18041af60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14a4c) = 0;
  *(uint8_t *)(param_2 + 0x357) = 1;
  return;
}

// Unwind@18041afb0
void Unwind_18041afb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2b0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x278));
    *(uint64_t *)(param_2 + 0x2b0) = 0;
  }
  return;
}

// Unwind@18041b010
void Unwind_18041b010(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14a78) = 0;
  *(uint8_t *)(param_2 + 0x355) = 1;
  return;
}

// Unwind@18041b060
void Unwind_18041b060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  return;
}

// Unwind@18041b0a0
void Unwind_18041b0a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2c0);
  return;
}

// Unwind@18041b0e0
void Unwind_18041b0e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  return;
}

// Unwind@18041b120
void Unwind_18041b120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  return;
}

// Unwind@18041b160
void Unwind_18041b160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x35f) = 0;
  return;
}

// Unwind@18041b1a0
void Unwind_18041b1a0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x35f);
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x35e) = uVal_1;
  return;
}

// Unwind@18041b1f0
void Unwind_18041b1f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x35e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x78));
    *(uint64_t *)(param_2 + 0xb0) = 0;
  }
  return;
}

// Unwind@18041b250
void Unwind_18041b250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x352) = 0;
  return;
}

// Unwind@18041b290
void Unwind_18041b290(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x352);
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x35d) = uVal_1;
  return;
}

// Unwind@18041b2e0
void Unwind_18041b2e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x35d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xb8));
    *(uint64_t *)(param_2 + 0xf0) = 0;
  }
  return;
}

// Unwind@18041b340
void Unwind_18041b340(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x351) = 0;
  return;
}

// Unwind@18041b380
void Unwind_18041b380(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x351);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x35c) = uVal_1;
  return;
}

// Unwind@18041b3d0
void Unwind_18041b3d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x35c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x130), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xf8));
    *(uint64_t *)(param_2 + 0x130) = 0;
  }
  return;
}

// Unwind@18041b430
void Unwind_18041b430(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x350) = 0;
  return;
}

// Unwind@18041b470
void Unwind_18041b470(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x350);
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x35b) = uVal_1;
  return;
}

// Unwind@18041b4c0
void Unwind_18041b4c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x35b) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x170), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x138));
    *(uint64_t *)(param_2 + 0x170) = 0;
  }
  return;
}

// Unwind@18041b520
void Unwind_18041b520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x34f) = 0;
  return;
}

// Unwind@18041b560
void Unwind_18041b560(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x34f);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x35a) = uVal_1;
  return;
}

// Unwind@18041b5b0
void Unwind_18041b5b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x35a) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1b0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x178));
    *(uint64_t *)(param_2 + 0x1b0) = 0;
  }
  return;
}

// Unwind@18041b610
void Unwind_18041b610(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x34e) = 0;
  return;
}

// Unwind@18041b650
void Unwind_18041b650(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x34e);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x359) = uVal_1;
  return;
}

// Unwind@18041b6a0
void Unwind_18041b6a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x359) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1f0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1b8));
    *(uint64_t *)(param_2 + 0x1f0) = 0;
  }
  return;
}

// Unwind@18041b700
void Unwind_18041b700(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x34d) = 0;
  return;
}

// Unwind@18041b740
void Unwind_18041b740(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x34d);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x358) = uVal_1;
  return;
}

// Unwind@18041b790
void Unwind_18041b790(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x358) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x230), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f8));
    *(uint64_t *)(param_2 + 0x230) = 0;
  }
  return;
}

// Unwind@18041b7f0
void Unwind_18041b7f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x34c) = 0;
  return;
}

// Unwind@18041b830
void Unwind_18041b830(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x34c);
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x357) = uVal_1;
  return;
}

// Unwind@18041b880
void Unwind_18041b880(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x357) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x270), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x238));
    *(uint64_t *)(param_2 + 0x270) = 0;
  }
  return;
}

// Unwind@18041b8e0
void Unwind_18041b8e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x356) = 0;
  return;
}

// Unwind@18041b920
void Unwind_18041b920(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x356);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x355) = uVal_1;
  return;
}

// Unwind@18041b970
void Unwind_18041b970(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x355) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2b0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x278));
    *(uint64_t *)(param_2 + 0x2b0) = 0;
  }
  return;
}

// Unwind@18041b9d0
void Unwind_18041b9d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x354) = 0;
  return;
}

// Unwind@18041ba10
void Unwind_18041ba10(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x354);
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x353) = uVal_1;
  return;
}

// Unwind@18041ba60
void Unwind_18041ba60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x353) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x70), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x38));
    *(uint64_t *)(param_2 + 0x70) = 0;
  }
  return;
}

// Unwind@18041bac0
void Unwind_18041bac0(uint64_t param_1,int64_t param_2)
{
  func_0x1800822d0(*(uint64_t *)(param_2 + 0x2b8));
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x318));
  return;
}

// Unwind@18041bb10
void Unwind_18041bb10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14898) = 0;
  return;
}

// Unwind@18041bb60
void Unwind_18041bb60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14904) = 0;
  *(uint8_t *)(param_2 + 0x35f) = 1;
  return;
}

// Unwind@18041bbb0
void Unwind_18041bbb0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14a90) = 0;
  *(uint8_t *)(param_2 + 0x356) = 1;
  return;
}

// Unwind@18041bc00
void Unwind_18041bc00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14ac0) = 0;
  *(uint8_t *)(param_2 + 0x353) = 1;
  return;
}

// Unwind@18041bc50
void Unwind_18041bc50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14ad8) = 0;
  *(uint8_t *)(param_2 + 0x354) = 1;
  return;
}

// Unwind@18041bf60
void Unwind_18041bf60(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14b0c) = 0;
  return;
}

// func_0x18041bfa0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18041bfa0(int64_t param_1,int64_t param_2,int64_t param_3)
{
  uint64_t *pU64_1;
  uint *pU64_2;
  char *_Str;
  uint8_t uVal_3;
  uint32_t uVal_4;
  func_ptr_t fnPtr_5;
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  uint8_t auArr_12 [16];
  short sz_13;
  uint16_t uVal_14;
  short sz_15;
  ushort uVal_16;
  int iVal_17;
  uint8_t *pU64_18;
  uint64_t uVal_19;
  int64_t lVal_20;
  uint64_t uVal_21;
  int64_t lVal_22;
  int64_t lVal_23;
  int64_t lVal_24;
  int64_t lVal_25;
  size_t sz_26;
  uint64_t uVal_27;
  void *_Buf1;
  uint64_t *pU64_28;
  uint64_t *pU64_29;
  uint64_t uVal_30;
  uint8_t *pU64_31;
  uint8_t (*pArr16_32)[16];
  bool bFlag_33;
  float fVal_34;
  uint uVal_36;
  uint uVal_37;
  uint8_t auArr_35 [16];
  uint uVal_38;
  uint8_t *local_158;
  uint64_t uStack_150;
  uint8_t *local_148;
  uint64_t uStack_140;
  uint64_t local_138;
  uint8_t *local_130;
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint64_t local_108;
  int64_t local_100;
  uint64_t local_f8;
  uint8_t *local_f0;
  uint8_t *local_e8;
  size_t local_e0;
  int64_t local_d8;
  int64_t local_d0;
  uint8_t local_c8 [8];
  uint64_t uStack_c0;
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  uint8_t local_a8 [4];
  uint8_t auStack_a4 [12];
  uint64_t local_98;
  uint64_t local_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint8_t local_78 [23];
  uint8_t local_61;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    return;
  }
  if (*(int64_t **)(param_2 + 8) == (int64_t *)0x0) {
    return;
  }
  pU64_29 = (uint64_t *)((uint64_t)*(byte *)(param_3 + 0x40) * 0x20 + param_3);
  local_100 = **(int64_t **)(param_2 + 8);
  local_d0 = param_1;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14b1c) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0x14b1c) = 1;
      *(uint64_t *)(lVal_20 + 0x14b10) = 0x3aa44588170968cf;
      *(uint32_t *)(lVal_20 + 0x14b18) = 0x16571c8;
      func_0x180673140(&LAB_180439060);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_20 + 0x14b10);
    if (*(char *)(lVal_20 + 0x14b1b) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x57fb21ed7b6501a9;
      *(uint *)(lVal_20 + 0x14b18) =
           (*(uint *)(lVal_20 + 0x14b18) & 0xffff | (uint)*(byte *)(lVal_20 + 0x14b1a) << 0x10) ^
           SUB164(_DAT_1806becc0,0);
    }
    _local_a8 = (uint8_t  [16])0x0;
    pU64_18 = (uint8_t *)strlen((char *)pU64_1);
    if (-1 < (int64_t)pU64_18) {
      uVal_30 = 0xf;
      pU64_31 = local_a8;
      if ((uint8_t *)0xf < pU64_18) {
        uVal_19 = (uint64_t)pU64_18 | 0xf;
        uVal_30 = 0x16;
        if (0x16 < uVal_19) {
          uVal_30 = uVal_19;
        }
        if (uVal_19 < 0xfff) {
          pU64_31 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
        }
        else {
          lVal_20 = func_0x180672de0(uVal_30 + 0x28);
          pU64_31 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_31 + -8) = lVal_20;
        }
        _local_a8 = pU64_31;
      }
      local_98 = pU64_18;
      local_90 = uVal_30;
      func_0x1806aa960(pU64_31,pU64_1,pU64_18);
      param_1 = local_d0;
      pU64_31[(int64_t)pU64_18] = 0;
      uVal_30 = local_90;
      pU64_18 = _local_a8;
      pU64_31 = local_a8;
      if (0xf < local_90) {
        pU64_31 = _local_a8;
      }
      if (*(uint64_t *)(local_100 + 0xf0) < 0x10) {
        _Buf1 = (void *)(local_100 + 0xd8);
        if (*(uint8_t **)(local_100 + 0xe8) == local_98) goto LAB_18041c159;
LAB_18041c16a:
        bFlag_33 = false;
      }
      else {
        _Buf1 = *(void **)(local_100 + 0xd8);
        if (*(uint8_t **)(local_100 + 0xe8) != local_98) goto LAB_18041c16a;
LAB_18041c159:
        if ((local_98 != (uint8_t *)0x0) &&
           (iVal_17 = memcmp(_Buf1,pU64_31,(size_t)local_98), iVal_17 != 0)) goto LAB_18041c16a;
        bFlag_33 = *(int64_t *)(param_2 + 0x10) != 0;
      }
      if (0xf < uVal_30) {
        uVal_19 = uVal_30 + 1;
        pU64_31 = pU64_18;
        if (0xfff < uVal_19) {
          pU64_31 = *(uint8_t **)(pU64_18 + -8);
          if ((uint8_t *)0x1f < pU64_18 + (-8 - (int64_t)pU64_31)) goto LAB_18041daf1;
          uVal_19 = uVal_30 + 0x28;
        }
        thunk_FUN_180695dd0(pU64_31,uVal_19);
      }
      if (bFlag_33) {
        uVal_21 = *(uint64_t *)(param_2 + 0x10);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x14b2c) == '\0') {
          lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_20 + 0x14b2c) = 1;
          *(uint64_t *)(lVal_20 + 0x14b20) = 0xbf0aa6d0805fc430;
          *(uint16_t *)(lVal_20 + 0x14b28) = 0x15d;
          func_0x180673140(&LAB_180439090);
        }
        lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_1 = (uint64_t *)(lVal_20 + 0x14b20);
        if (*(char *)(lVal_20 + 0x14b29) == '\x01') {
          *pU64_1 = *pU64_1 ^ 0xdb63d3a5df2fa55d;
          *(byte *)(lVal_20 + 0x14b28) = *(byte *)(lVal_20 + 0x14b28) ^ 0x5d;
          *(uint8_t *)(lVal_20 + 0x14b29) = 0;
        }
        _local_a8 = (uint8_t  [16])0x0;
        pU64_18 = (uint8_t *)strlen((char *)pU64_1);
        if ((int64_t)pU64_18 < 0) goto LAB_18041daec;
        if (pU64_18 < (uint8_t *)0x10) {
          pU64_31 = local_a8;
          uVal_30 = 0xf;
        }
        else {
          uVal_19 = (uint64_t)pU64_18 | 0xf;
          uVal_30 = 0x16;
          if (0x16 < uVal_19) {
            uVal_30 = uVal_19;
          }
          if (uVal_19 < 0xfff) {
            pU64_31 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
          }
          else {
            lVal_20 = func_0x180672de0(uVal_30 + 0x28);
            pU64_31 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_31 + -8) = lVal_20;
          }
          _local_a8 = pU64_31;
        }
        local_98 = pU64_18;
        local_90 = uVal_30;
        func_0x1806aa960(pU64_31,pU64_1,pU64_18);
        pU64_31[(int64_t)pU64_18] = 0;
        lVal_20 = func_0x1801074b0(uVal_21,local_a8);
        param_1 = local_d0;
        if (0xf < local_90) {
          uVal_30 = local_90 + 1;
          lVal_22 = (int64_t)_local_a8;
          if (0xfff < uVal_30) {
            lVal_22 = *(int64_t *)((int64_t)_local_a8 + -8);
            if (0x1f < (uint64_t)(((int64_t)_local_a8 + -8) - lVal_22)) goto LAB_18041daf1;
            uVal_30 = local_90 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_22,uVal_30);
        }
        if (lVal_20 != 0) {
          _local_a8 = &DAT_28d478d88fb3dcdf;
          DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
          if (DAT_180840a60 == 0) {
            DAT_180840a68 = 0;
          }
          uVal_21 = func_0x1801221f0(DAT_180840a60);
          lVal_22 = func_0x1801195b0(uVal_21);
          if (lVal_22 != 0) {
            lVal_23 = func_0x18011ae60(lVal_22);
            _local_a8 = (uint8_t *)lVal_20;
            uVal_30 = func_0x1801270c0(local_a8);
            param_1 = local_d0;
            lVal_24 = (uVal_30 & *(uint64_t *)(lVal_23 + 0x30)) * 0x10;
            lVal_25 = *(int64_t *)(*(int64_t *)(lVal_23 + 0x18) + 8 + lVal_24);
            if (lVal_25 != *(int64_t *)(lVal_23 + 8)) {
              if (_local_a8 != (uint8_t *)*(int64_t *)(lVal_25 + 0x10)) {
                do {
                  if (lVal_25 == *(int64_t *)(*(int64_t *)(lVal_23 + 0x18) + lVal_24))
                  goto LAB_18041c4c3;
                  lVal_25 = *(int64_t *)(lVal_25 + 8);
                } while (_local_a8 != (uint8_t *)*(int64_t *)(lVal_25 + 0x10));
              }
              lVal_25 = func_0x18011ae60(lVal_22);
              _local_a8 = (uint8_t *)lVal_20;
              uVal_30 = func_0x1801270c0(local_a8);
              lVal_23 = (uVal_30 & *(uint64_t *)(lVal_25 + 0x30)) * 0x10;
              lVal_22 = *(int64_t *)(*(int64_t *)(lVal_25 + 0x18) + 8 + lVal_23);
              if (lVal_22 == *(int64_t *)(lVal_25 + 8)) {
LAB_18041daf3:
                func_0x1806744f0("invalid unordered_map<K, T> key");
                goto LAB_18041daff;
              }
              if (_local_a8 != (uint8_t *)*(int64_t *)(lVal_22 + 0x10)) {
                do {
                  if (lVal_22 == *(int64_t *)(*(int64_t *)(lVal_25 + 0x18) + lVal_23))
                  goto LAB_18041daf3;
                  lVal_22 = *(int64_t *)(lVal_22 + 8);
                } while (_local_a8 != (uint8_t *)*(int64_t *)(lVal_22 + 0x10));
              }
              if (*(int64_t *)(lVal_22 + 0x18) != 0) {
                uVal_3 = *(uint8_t *)(*(int64_t *)(lVal_22 + 0x18) + 0x2c);
                local_158 = PTR_DAT_1806c9878;
                uStack_150 = _UNK_1806c9880;
                uVal_21 = func_0x18041e1e0();
                uVal_21 = func_0x18041e270(uVal_21);
                func_0x180001060(local_88,uVal_21);
                func_0x18041e140(local_a8,local_88,&local_158,
                              CONCAT71((int7)((uint64_t)lVal_20 >> 8),uVal_3) & 0xffffffff);
                func_0x180106950(pU64_29,local_a8);
                func_0x180001e70(local_a8);
                func_0x180001e70(local_88);
              }
            }
          }
        }
      }
      goto LAB_18041c4c3;
    }
    goto LAB_18041daec;
  }
LAB_18041c4c3:
  local_d8 = param_2;
  if (((*(char *)(param_1 + 0x82) == '\x01') && (sz_13 = func_0x180118160(param_2), 0 < sz_13)) &&
     (sz_13 = func_0x180117d70(param_2), 0 < sz_13)) {
    uVal_14 = func_0x180118160(param_2);
    local_108 = (uint8_t *)CONCAT62(local_108._2_6_,uVal_14);
    sz_13 = func_0x180118160(param_2);
    sz_15 = func_0x180117d70(param_2);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14b60) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0x14b60) = 1;
      uVal_21 = _UNK_1806c9168;
      *(uint64_t *)(lVal_20 + 0x14b50) = _DAT_1806c9160;
      *(uint64_t *)(lVal_20 + 0x14b58) = uVal_21;
      func_0x180673140(&LAB_1804390f0);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_32 = (uint8_t (*)[16])(lVal_20 + 0x14b50);
    if (*(char *)(lVal_20 + 0x14b5f) == '\x01') {
      uVal_4 = *(uint32_t *)(lVal_20 + 0x14b58);
      auArr_35 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_4 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_4 >> 0x10),uVal_4)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_20 + 0x14b5d) >> 8)),
                                                 (char)((uint)uVal_4 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_20 + 0x14b5d),(char)uVal_4
                                                ))),_DAT_1806ae110);
      auArr_35._8_8_ =
           auArr_35._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_20 + 0x14b5c) << 0x20;
      auArr_35 = pblendw(auArr_35,*pArr16_32,0xf);
      *pArr16_32 = auArr_35 ^ _DAT_1806b2930;
    }
    _local_b8 = (uint8_t  [16])0x0;
    _local_c8 = (uint8_t  [16])0x0;
    sz_26 = strlen((char *)pArr16_32);
    if ((int64_t)sz_26 < 0) goto LAB_18041daec;
    uVal_30 = 0xf;
    pU64_18 = local_c8;
    if (0xf < sz_26) {
      uVal_19 = sz_26 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_19) {
        uVal_30 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        lVal_20 = func_0x180672de0(uVal_30 + 0x28);
        pU64_18 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_20;
      }
      local_c8 = (uint8_t  [8])pU64_18;
    }
    uStack_b0 = uVal_30;
    local_b8 = (uint8_t  [8])sz_26;
    func_0x1806aa960(pU64_18,pArr16_32,sz_26);
    pU64_18[sz_26] = 0;
    local_a8 = (uint8_t  [4])((int)sz_13 - (int)sz_15);
    local_98 = (uint8_t *)CONCAT44(local_98._4_4_,(int)(short)local_108);
    local_f8 = 0x11;
    local_f0 = local_a8;
    local_e8 = local_c8;
    if (0xf < uStack_b0) {
      local_e8 = (uint8_t *)local_c8;
    }
    local_e0 = (size_t)local_b8;
    func_0x18063ff10(local_88,&local_e8,&local_f8);
    param_1 = local_d0;
    pU64_18 = local_88;
    if (0xf < (uint64_t)local_78._8_8_) {
      pU64_18 = (uint8_t *)local_88;
    }
    lVal_20 = pU64_29[2];
    if ((uint64_t)(pU64_29[3] - lVal_20) < (uint64_t)local_78._0_8_) {
      func_0x180082950(pU64_29,local_78._0_8_,local_78._0_8_,pU64_18,local_78._0_8_);
      param_2 = local_d8;
    }
    else {
      pU64_29[2] = lVal_20 + local_78._0_8_;
      pU64_28 = pU64_29;
      if (0xf < (uint64_t)pU64_29[3]) {
        pU64_28 = (uint64_t *)*pU64_29;
      }
      func_0x1806aa960(lVal_20 + (int64_t)pU64_28,pU64_18);
      *(uint8_t *)((int64_t)pU64_28 + lVal_20 + local_78._0_8_) = 0;
      param_2 = local_d8;
    }
    local_d8 = param_2;
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_30 = local_78._8_8_ + 1;
      lVal_20 = (int64_t)local_88;
      if (0xfff < uVal_30) {
        lVal_20 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_20)) goto LAB_18041daf1;
        uVal_30 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_30);
    }
    local_78._0_16_ = ZEXT816(0xf) << 0x40;
    auArr_6[15] = 0;
    auArr_6._0_15_ = stack0xffffffffffffff79;
    _local_88 = auArr_6 << 8;
    if (0xf < uStack_b0) {
      uVal_30 = uStack_b0 + 1;
      lVal_20 = (int64_t)local_c8;
      if (0xfff < uVal_30) {
        lVal_20 = *(int64_t *)((int64_t)local_c8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_c8 + -8) - lVal_20)) goto LAB_18041daf1;
        uVal_30 = uStack_b0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_30);
    }
  }
  if (*(char *)(param_1 + 0x83) == '\x01') {
    _local_a8 = (uint8_t *)0x189fdf423046c40e;
    if (*(int64_t *)(local_100 + 0x1c8) == 0) goto LAB_18041cd5a;
    local_88 = (uint8_t  [8])0x189fdf423046c40e;
    fVal_34 = (float)func_0x18012b1f0(*(uint64_t *)(local_100 + 0x1c8));
    local_c8._4_4_ = _UNK_1806cced1;
    local_c8._0_4_ = _DAT_1806ccecd;
    uStack_c0._0_4_ = _UNK_1806cced5;
    uStack_c0._4_4_ = _UNK_1806cced9;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14b74) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0x14b74) = 1;
      func_0x18007d150(lVal_20 + 0x14b61,local_c8);
      func_0x180673140(&LAB_180439120);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_20 + 0x14b61);
    if (*(char *)(lVal_20 + 0x14b71) == '\x01') {
      uVal_36 = *(uint *)(lVal_20 + 0x14b65) ^ _UNK_1806aed64;
      uVal_37 = *(uint *)(lVal_20 + 0x14b69) ^ _UNK_1806aed68;
      uVal_38 = *(uint *)(lVal_20 + 0x14b6d) ^ _UNK_1806aed6c;
      *pU64_2 = *pU64_2 ^ _DAT_1806aed60;
      *(uint *)(lVal_20 + 0x14b65) = uVal_36;
      *(uint *)(lVal_20 + 0x14b69) = uVal_37;
      *(uint *)(lVal_20 + 0x14b6d) = uVal_38;
      *(uint8_t *)(lVal_20 + 0x14b71) = 0;
    }
    _local_88 = ZEXT816(0);
    local_78._0_16_ = _local_88;
    sz_26 = strlen((char *)pU64_2);
    if (-1 < (int64_t)sz_26) {
      fVal_34 = fVal_34 * DAT_1806aeae4;
      uVal_30 = 0xf;
      pU64_18 = local_88;
      if (0xf < sz_26) {
        uVal_19 = sz_26 | 0xf;
        uVal_30 = 0x16;
        if (0x16 < uVal_19) {
          uVal_30 = uVal_19;
        }
        if (uVal_19 < 0xfff) {
          pU64_18 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
        }
        else {
          lVal_20 = func_0x180672de0(uVal_30 + 0x28);
          pU64_18 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_18 + -8) = lVal_20;
        }
        local_88 = (uint8_t  [8])pU64_18;
      }
      local_78._0_8_ = sz_26;
      local_78._8_8_ = uVal_30;
      func_0x1806aa960(pU64_18,pU64_2,sz_26);
      pU64_18[sz_26] = 0;
      local_f8 = CONCAT44(local_f8._4_4_,fVal_34);
      uStack_c0 = &local_f8;
      local_c8 = (uint8_t  [8])0x9;
      local_e8 = local_88;
      if (0xf < (uint64_t)local_78._8_8_) {
        local_e8 = (uint8_t *)local_88;
      }
      local_e0 = local_78._0_8_;
      func_0x18063ff10(local_a8,&local_e8,local_c8);
      lVal_20 = local_100;
      pU64_18 = local_a8;
      if (0xf < local_90) {
        pU64_18 = _local_a8;
      }
      lVal_22 = pU64_29[2];
      if ((uint8_t *)(pU64_29[3] - lVal_22) < local_98) {
        func_0x180082950(pU64_29,local_98,local_98,pU64_18,local_98);
      }
      else {
        pU64_31 = local_98 + lVal_22;
        pU64_29[2] = pU64_31;
        pU64_28 = pU64_29;
        if (0xf < (uint64_t)pU64_29[3]) {
          pU64_28 = (uint64_t *)*pU64_29;
        }
        func_0x1806aa960(lVal_22 + (int64_t)pU64_28,pU64_18);
        *(uint8_t *)((int64_t)pU64_28 + (int64_t)pU64_31) = 0;
      }
      if (0xf < local_90) {
        uVal_30 = local_90 + 1;
        lVal_22 = (int64_t)_local_a8;
        if (0xfff < uVal_30) {
          lVal_22 = *(int64_t *)((int64_t)_local_a8 + -8);
          if (0x1f < (uint64_t)(((int64_t)_local_a8 + -8) - lVal_22)) goto LAB_18041daf1;
          uVal_30 = local_90 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_22,uVal_30);
      }
      local_98 = (uint8_t *)0x0;
      local_90 = 0xf;
      auArr_7[15] = 0;
      auArr_7._0_15_ = stack0xffffffffffffff59;
      _local_a8 = auArr_7 << 8;
      if (0xf < (uint64_t)local_78._8_8_) {
        uVal_30 = local_78._8_8_ + 1;
        lVal_22 = (int64_t)local_88;
        if (0xfff < uVal_30) {
          lVal_22 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_22)) goto LAB_18041daf1;
          uVal_30 = local_78._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_22,uVal_30);
      }
      local_88 = (uint8_t  [8])0x189fdf423046c40e;
      fVal_34 = (float)func_0x18012b210(*(uint64_t *)(lVal_20 + 0x1c8));
      uStack_c0 = _UNK_1806ccee5;
      local_c8 = (uint8_t  [8])_DAT_1806ccedd;
      local_b8._0_4_ = 0x2900f77e;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x14b8c) == '\0') {
        lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_20 + 0x14b8c) = 1;
        func_0x18007cfc0(lVal_20 + 0x14b75,local_c8);
        func_0x180673140(&LAB_180439140);
      }
      _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x14b75);
      func_0x18044aa90(_Str);
      local_78._0_16_ = (uint8_t  [16])0x0;
      _local_88 = (uint8_t  [16])0x0;
      sz_26 = strlen(_Str);
      if (-1 < (int64_t)sz_26) {
        fVal_34 = fVal_34 * DAT_1806aeae4;
        uVal_30 = 0xf;
        pU64_18 = local_88;
        if (0xf < sz_26) {
          uVal_19 = sz_26 | 0xf;
          uVal_30 = 0x16;
          if (0x16 < uVal_19) {
            uVal_30 = uVal_19;
          }
          if (uVal_19 < 0xfff) {
            pU64_18 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
          }
          else {
            lVal_20 = func_0x180672de0(uVal_30 + 0x28);
            pU64_18 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_18 + -8) = lVal_20;
          }
          local_88 = (uint8_t  [8])pU64_18;
        }
        local_78._8_8_ = uVal_30;
        local_78._0_8_ = sz_26;
        func_0x1806aa960(pU64_18,_Str,sz_26);
        pU64_18[sz_26] = 0;
        local_f8 = CONCAT44(local_f8._4_4_,fVal_34);
        uStack_c0 = &local_f8;
        local_c8 = (uint8_t  [8])0x9;
        local_e8 = local_88;
        if (0xf < (uint64_t)local_78._8_8_) {
          local_e8 = (uint8_t *)local_88;
        }
        local_e0 = local_78._0_8_;
        func_0x18063ff10(local_a8,&local_e8,local_c8);
        param_1 = local_d0;
        param_2 = local_d8;
        pU64_18 = local_a8;
        if (0xf < local_90) {
          pU64_18 = _local_a8;
        }
        lVal_20 = pU64_29[2];
        if ((uint8_t *)(pU64_29[3] - lVal_20) < local_98) {
          func_0x180082950(pU64_29,local_98,local_98,pU64_18,local_98);
        }
        else {
          pU64_31 = local_98 + lVal_20;
          pU64_29[2] = pU64_31;
          pU64_28 = pU64_29;
          if (0xf < (uint64_t)pU64_29[3]) {
            pU64_28 = (uint64_t *)*pU64_29;
          }
          func_0x1806aa960(lVal_20 + (int64_t)pU64_28,pU64_18);
          *(uint8_t *)((int64_t)pU64_28 + (int64_t)pU64_31) = 0;
          param_2 = local_d8;
        }
        if (0xf < local_90) {
          uVal_30 = local_90 + 1;
          lVal_20 = (int64_t)_local_a8;
          if (0xfff < uVal_30) {
            lVal_20 = *(int64_t *)((int64_t)_local_a8 + -8);
            if (0x1f < (uint64_t)(((int64_t)_local_a8 + -8) - lVal_20)) goto LAB_18041daf1;
            uVal_30 = local_90 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_20,uVal_30);
        }
        local_98 = (uint8_t *)0x0;
        local_90 = 0xf;
        auArr_8[15] = 0;
        auArr_8._0_15_ = stack0xffffffffffffff59;
        _local_a8 = auArr_8 << 8;
        if (0xf < (uint64_t)local_78._8_8_) {
          uVal_30 = local_78._8_8_ + 1;
          lVal_20 = (int64_t)local_88;
          if (0xfff < uVal_30) {
            lVal_20 = *(int64_t *)((int64_t)local_88 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_20)) goto LAB_18041daf1;
            uVal_30 = local_78._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_20,uVal_30);
        }
        goto LAB_18041cd5a;
      }
    }
  }
  else {
LAB_18041cd5a:
    if ((*(char *)(param_1 + 0x81) == '\x01') && (uVal_36 = func_0x1801181d0(param_2), uVal_36 < 4)) {
      uVal_30 = (uint64_t)uVal_36;
      local_108 = (&PTR_s_Common_1806c15a0)[uVal_30 * 2];
      local_138 = *(uint64_t *)(&DAT_1806c15a8 + uVal_30 * 0x10);
      local_130 = (&PTR_DAT_1806bf530)[uVal_30 * 2];
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x14b98) == '\0') {
        lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_20 + 0x14b98) = 1;
        *(uint8_t *)(lVal_20 + 0x14b96) = 1;
        *(uint32_t *)(lVal_20 + 0x14b90) = 0x886724b;
        *(uint16_t *)(lVal_20 + 0x14b94) = 0x45da;
        func_0x180673140(&LAB_180439170);
      }
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint *)(lVal_20 + 0x14b90);
      if (*(char *)(lVal_20 + 0x14b96) == '\x01') {
        *pU64_2 = *pU64_2 ^ 0x73fb0941;
        *(byte *)(lVal_20 + 0x14b94) = *(byte *)(lVal_20 + 0x14b94) ^ 0xa7;
        *(byte *)(lVal_20 + 0x14b95) = *(byte *)(lVal_20 + 0x14b95) ^ 0x45;
        *(uint8_t *)(lVal_20 + 0x14b96) = 0;
      }
      _local_b8 = (uint8_t  [16])0x0;
      _local_c8 = (uint8_t  [16])0x0;
      sz_26 = strlen((char *)pU64_2);
      if ((int64_t)sz_26 < 0) goto LAB_18041daec;
      uVal_30 = 0xf;
      pU64_18 = local_c8;
      if (0xf < sz_26) {
        uVal_19 = sz_26 | 0xf;
        uVal_30 = 0x16;
        if (0x16 < uVal_19) {
          uVal_30 = uVal_19;
        }
        if (uVal_19 < 0xfff) {
          pU64_18 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
        }
        else {
          lVal_20 = func_0x180672de0(uVal_30 + 0x28);
          pU64_18 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_18 + -8) = lVal_20;
        }
        local_c8 = (uint8_t  [8])pU64_18;
      }
      uStack_b0 = uVal_30;
      local_b8 = (uint8_t  [8])sz_26;
      func_0x1806aa960(pU64_18,pU64_2,sz_26);
      pU64_18[sz_26] = 0;
      auStack_a4._4_8_ = 3;
      _local_a8 = local_130;
      local_98 = local_108;
      local_90 = local_138;
      local_f8 = 0xdd;
      local_f0 = local_a8;
      local_e8 = local_c8;
      if (0xf < uStack_b0) {
        local_e8 = (uint8_t *)local_c8;
      }
      local_e0 = (size_t)local_b8;
      func_0x18063ff10(local_88,&local_e8,&local_f8);
      param_1 = local_d0;
      pU64_18 = local_88;
      if (0xf < (uint64_t)local_78._8_8_) {
        pU64_18 = (uint8_t *)local_88;
      }
      lVal_20 = pU64_29[2];
      if ((uint64_t)(pU64_29[3] - lVal_20) < (uint64_t)local_78._0_8_) {
        func_0x180082950(pU64_29,local_78._0_8_,local_78._0_8_,pU64_18,local_78._0_8_);
      }
      else {
        lVal_22 = lVal_20 + local_78._0_8_;
        pU64_29[2] = lVal_22;
        pU64_28 = pU64_29;
        if (0xf < (uint64_t)pU64_29[3]) {
          pU64_28 = (uint64_t *)*pU64_29;
        }
        func_0x1806aa960(lVal_20 + (int64_t)pU64_28,pU64_18);
        *(uint8_t *)((int64_t)pU64_28 + lVal_22) = 0;
        param_2 = local_d8;
      }
      if (0xf < (uint64_t)local_78._8_8_) {
        uVal_30 = local_78._8_8_ + 1;
        lVal_20 = (int64_t)local_88;
        if (0xfff < uVal_30) {
          lVal_20 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_20)) goto LAB_18041daf1;
          uVal_30 = local_78._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_20,uVal_30);
      }
      local_78._0_16_ = ZEXT816(0xf) << 0x40;
      auArr_9[15] = 0;
      auArr_9._0_15_ = stack0xffffffffffffff79;
      _local_88 = auArr_9 << 8;
      if (0xf < uStack_b0) {
        uVal_30 = uStack_b0 + 1;
        lVal_20 = (int64_t)local_c8;
        if (0xfff < uVal_30) {
          lVal_20 = *(int64_t *)((int64_t)local_c8 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_c8 + -8) - lVal_20)) goto LAB_18041daf1;
          uVal_30 = uStack_b0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_20,uVal_30);
      }
    }
    if (*(char *)(param_1 + 0x84) == '\x01') {
      local_128 = (uint8_t  [16])0x0;
      local_118 = (uint8_t  [16])0x0;
      uVal_30 = *(uint64_t *)(local_100 + 0x138);
      if (*(uint64_t *)(local_100 + 0x140) < 0x10) {
        pArr16_32 = (uint8_t (*)[16])(local_100 + 0x128);
      }
      else {
        pArr16_32 = *(uint8_t (**)[16])(local_100 + 0x128);
      }
      if ((int64_t)uVal_30 < 0) goto LAB_18041daec;
      if (uVal_30 < 0x10) {
        local_118._8_8_ = 0xf;
        local_118._0_8_ = uVal_30;
        local_128 = *pArr16_32;
      }
      else {
        uVal_27 = uVal_30 | 0xf;
        uVal_19 = 0x16;
        if (0x16 < uVal_27) {
          uVal_19 = uVal_27;
        }
        if (uVal_27 < 0xfff) {
          uVal_27 = func_0x180672de0(uVal_19 + 1);
        }
        else {
          lVal_20 = func_0x180672de0(uVal_19 + 0x28);
          uVal_27 = lVal_20 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_27 - 8) = lVal_20;
        }
        local_128._0_8_ = uVal_27;
        local_118._8_8_ = uVal_19;
        local_118._0_8_ = uVal_30;
        func_0x1806aa960(uVal_27,pArr16_32,uVal_30 + 1);
      }
      local_148 = PTR_DAT_1806ca430;
      uStack_140 = _UNK_1806ca438;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x14ba4) == '\0') {
        lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_20 + 0x14ba4) = 1;
        *(uint8_t *)(lVal_20 + 0x14ba2) = 1;
        *(uint32_t *)(lVal_20 + 0x14b9c) = 0xc6ee5ccd;
        *(uint16_t *)(lVal_20 + 0x14ba0) = 0x7dcc;
        func_0x180673140(&LAB_1804391a0);
      }
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint *)(lVal_20 + 0x14b9c);
      if (*(char *)(lVal_20 + 0x14ba2) == '\x01') {
        *pU64_2 = *pU64_2 ^ 0xbd9327c7;
        *(byte *)(lVal_20 + 0x14ba0) = *(byte *)(lVal_20 + 0x14ba0) ^ 0xb1;
        *(byte *)(lVal_20 + 0x14ba1) = *(byte *)(lVal_20 + 0x14ba1) ^ 0x7d;
        *(uint8_t *)(lVal_20 + 0x14ba2) = 0;
      }
      local_78._0_16_ = (uint8_t  [16])0x0;
      _local_88 = (uint8_t  [16])0x0;
      sz_26 = strlen((char *)pU64_2);
      if ((int64_t)sz_26 < 0) {
LAB_18041daff:
        local_61 = 1;
        func_0x18007ba70();
        fnPtr_5 = (func_ptr_t )swi(3);
        (*fnPtr_5)();
        return;
      }
      if (sz_26 < 0x10) {
        pU64_18 = local_88;
        uVal_30 = 0xf;
      }
      else {
        uVal_19 = sz_26 | 0xf;
        uVal_30 = 0x16;
        if (0x16 < uVal_19) {
          uVal_30 = uVal_19;
        }
        if (uVal_19 < 0xfff) {
          local_61 = 1;
          pU64_18 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
        }
        else {
          local_61 = 1;
          lVal_20 = func_0x180672de0(uVal_30 + 0x28);
          pU64_18 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_18 + -8) = lVal_20;
        }
        local_88 = (uint8_t  [8])pU64_18;
      }
      local_78._8_8_ = uVal_30;
      local_78._0_8_ = sz_26;
      func_0x1806aa960(pU64_18,pU64_2,sz_26);
      pU64_18[sz_26] = 0;
      func_0x18041e2a0(local_a8,local_88,&local_148,local_128);
      param_1 = local_d0;
      pU64_18 = local_a8;
      if (0xf < local_90) {
        pU64_18 = _local_a8;
      }
      lVal_20 = pU64_29[2];
      if ((uint8_t *)(pU64_29[3] - lVal_20) < local_98) {
        func_0x180082950(pU64_29,local_98,local_98,pU64_18,local_98);
      }
      else {
        pU64_31 = local_98 + lVal_20;
        pU64_29[2] = pU64_31;
        pU64_28 = pU64_29;
        if (0xf < (uint64_t)pU64_29[3]) {
          pU64_28 = (uint64_t *)*pU64_29;
        }
        func_0x1806aa960(lVal_20 + (int64_t)pU64_28,pU64_18);
        *(uint8_t *)((int64_t)pU64_28 + (int64_t)pU64_31) = 0;
        param_2 = local_d8;
      }
      if (0xf < local_90) {
        uVal_30 = local_90 + 1;
        lVal_20 = (int64_t)_local_a8;
        if (0xfff < uVal_30) {
          lVal_20 = *(int64_t *)((int64_t)_local_a8 + -8);
          if (0x1f < (uint64_t)(((int64_t)_local_a8 + -8) - lVal_20)) goto LAB_18041daf1;
          uVal_30 = local_90 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_20,uVal_30);
      }
      local_98 = (uint8_t *)0x0;
      local_90 = 0xf;
      auArr_10[15] = 0;
      auArr_10._0_15_ = stack0xffffffffffffff59;
      _local_a8 = auArr_10 << 8;
      if (0xf < (uint64_t)local_78._8_8_) {
        uVal_30 = local_78._8_8_ + 1;
        lVal_20 = (int64_t)local_88;
        if (0xfff < uVal_30) {
          lVal_20 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_20)) goto LAB_18041daf1;
          uVal_30 = local_78._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_20,uVal_30);
      }
    }
    if (*(char *)(param_1 + 0x85) == '\x01') {
      _local_a8 = (uint8_t *)0x2912f5be528b5a91;
      if ((*(int64_t **)(local_100 + 0x178) == (int64_t *)0x0) ||
         (**(int64_t **)(local_100 + 0x178) == 0)) {
        uVal_36 = (uint)*(short *)(local_100 + 0xaa);
      }
      else {
        uVal_16 = func_0x180127fe0();
        uVal_36 = (uint)uVal_16;
      }
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x14bb4) == '\0') {
        lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_20 + 0x14bb4) = 1;
        *(uint8_t *)(lVal_20 + 0x14bb2) = 1;
        *(uint64_t *)(lVal_20 + 0x14ba8) = 0xe2310ff572363011;
        *(uint16_t *)(lVal_20 + 0x14bb0) = 0x4b66;
        func_0x180673140(&LAB_1804391d0);
      }
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_20 + 0x14ba8);
      if (*(char *)(lVal_20 + 0x14bb2) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x991135b13b4b4b1b;
        *(byte *)(lVal_20 + 0x14bb0) = *(byte *)(lVal_20 + 0x14bb0) ^ 0x1b;
        *(byte *)(lVal_20 + 0x14bb1) = *(byte *)(lVal_20 + 0x14bb1) ^ 0x4b;
        *(uint8_t *)(lVal_20 + 0x14bb2) = 0;
      }
      _local_b8 = (uint8_t  [16])0x0;
      _local_c8 = (uint8_t  [16])0x0;
      sz_26 = strlen((char *)pU64_1);
      if ((int64_t)sz_26 < 0) goto LAB_18041daec;
      uVal_30 = 0xf;
      pU64_18 = local_c8;
      if (0xf < sz_26) {
        uVal_19 = sz_26 | 0xf;
        uVal_30 = 0x16;
        if (0x16 < uVal_19) {
          uVal_30 = uVal_19;
        }
        if (uVal_19 < 0xfff) {
          pU64_18 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
        }
        else {
          lVal_20 = func_0x180672de0(uVal_30 + 0x28);
          pU64_18 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_18 + -8) = lVal_20;
        }
        local_c8 = (uint8_t  [8])pU64_18;
      }
      uStack_b0 = uVal_30;
      local_b8 = (uint8_t  [8])sz_26;
      func_0x1806aa960(pU64_18,pU64_1,sz_26);
      pU64_18[sz_26] = 0;
      auStack_a4._4_8_ = 3;
      _local_a8 = &DAT_1807607b3;
      local_98 = (uint8_t *)CONCAT44(local_98._4_4_,uVal_36);
      local_f8 = 0x1d;
      local_f0 = local_a8;
      local_e8 = local_c8;
      if (0xf < uStack_b0) {
        local_e8 = (uint8_t *)local_c8;
      }
      local_e0 = (size_t)local_b8;
      func_0x18063ff10(local_88,&local_e8,&local_f8);
      param_1 = local_d0;
      param_2 = local_d8;
      pU64_18 = local_88;
      if (0xf < (uint64_t)local_78._8_8_) {
        pU64_18 = (uint8_t *)local_88;
      }
      lVal_20 = pU64_29[2];
      if ((uint64_t)(pU64_29[3] - lVal_20) < (uint64_t)local_78._0_8_) {
        func_0x180082950(pU64_29,local_78._0_8_,local_78._0_8_,pU64_18,local_78._0_8_);
      }
      else {
        lVal_22 = lVal_20 + local_78._0_8_;
        pU64_29[2] = lVal_22;
        pU64_28 = pU64_29;
        if (0xf < (uint64_t)pU64_29[3]) {
          pU64_28 = (uint64_t *)*pU64_29;
        }
        func_0x1806aa960(lVal_20 + (int64_t)pU64_28,pU64_18);
        *(uint8_t *)((int64_t)pU64_28 + lVal_22) = 0;
        param_2 = local_d8;
      }
      if (0xf < (uint64_t)local_78._8_8_) {
        uVal_30 = local_78._8_8_ + 1;
        lVal_20 = (int64_t)local_88;
        if (0xfff < uVal_30) {
          lVal_20 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_20)) goto LAB_18041daf1;
          uVal_30 = local_78._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_20,uVal_30);
      }
      local_78._0_16_ = ZEXT816(0xf) << 0x40;
      auArr_11[15] = 0;
      auArr_11._0_15_ = stack0xffffffffffffff79;
      _local_88 = auArr_11 << 8;
      if (0xf < uStack_b0) {
        uVal_30 = uStack_b0 + 1;
        lVal_20 = (int64_t)local_c8;
        if (0xfff < uVal_30) {
          lVal_20 = *(int64_t *)((int64_t)local_c8 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_c8 + -8) - lVal_20)) goto LAB_18041daf1;
          uVal_30 = uStack_b0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_20,uVal_30);
      }
    }
    if (*(char *)(param_1 + 0x86) != '\x01') {
      return;
    }
    if (*(int64_t *)(param_2 + 0x10) == 0) {
      uVal_21 = 0;
    }
    else {
      uVal_21 = *(uint64_t *)(*(int64_t *)(param_2 + 0x10) + 0x10);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14bc8) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0x14bc8) = 1;
      *(uint64_t *)(lVal_20 + 0x14bb8) = 0x682d0b3cbe30803d;
      *(uint32_t *)(lVal_20 + 0x14bc0) = 0xec3ed350;
      *(uint16_t *)(lVal_20 + 0x14bc4) = 0x141;
      func_0x180673140(&LAB_180439200);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_20 + 0x14bb8);
    if (*(char *)(lVal_20 + 0x14bc5) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x9592b41c54dfb37;
      *(uint *)(lVal_20 + 0x14bc0) = *(uint *)(lVal_20 + 0x14bc0) ^ 0xc54dfb37;
      *(byte *)(lVal_20 + 0x14bc4) = *(byte *)(lVal_20 + 0x14bc4) ^ 0x41;
      *(uint8_t *)(lVal_20 + 0x14bc5) = 0;
    }
    _local_c8 = (uint8_t  [16])0x0;
    sz_26 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_26) {
      uVal_30 = 0xf;
      pU64_18 = local_c8;
      if (0xf < sz_26) {
        uVal_19 = sz_26 | 0xf;
        uVal_30 = 0x16;
        if (0x16 < uVal_19) {
          uVal_30 = uVal_19;
        }
        if (uVal_19 < 0xfff) {
          pU64_18 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
        }
        else {
          lVal_20 = func_0x180672de0(uVal_30 + 0x28);
          pU64_18 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_18 + -8) = lVal_20;
        }
        local_c8 = (uint8_t  [8])pU64_18;
      }
      local_b8 = (uint8_t  [8])sz_26;
      uStack_b0 = uVal_30;
      func_0x1806aa960(pU64_18,pU64_1,sz_26);
      pU64_18[sz_26] = 0;
      auStack_a4._4_8_ = 3;
      _local_a8 = &DAT_1807607b3;
      local_f8 = 0x4d;
      local_f0 = local_a8;
      local_e8 = local_c8;
      if (0xf < uStack_b0) {
        local_e8 = (uint8_t *)local_c8;
      }
      local_e0 = (size_t)local_b8;
      local_98 = (uint8_t *)uVal_21;
      func_0x18063ff10(local_88,&local_e8,&local_f8);
      pU64_18 = local_88;
      if (0xf < (uint64_t)local_78._8_8_) {
        pU64_18 = (uint8_t *)local_88;
      }
      lVal_20 = pU64_29[2];
      if ((uint64_t)(pU64_29[3] - lVal_20) < (uint64_t)local_78._0_8_) {
        func_0x180082950(pU64_29,local_78._0_8_,local_78._0_8_,pU64_18,local_78._0_8_);
      }
      else {
        lVal_22 = lVal_20 + local_78._0_8_;
        pU64_29[2] = lVal_22;
        if (0xf < (uint64_t)pU64_29[3]) {
          pU64_29 = (uint64_t *)*pU64_29;
        }
        func_0x1806aa960(lVal_20 + (int64_t)pU64_29,pU64_18);
        *(uint8_t *)((int64_t)pU64_29 + lVal_22) = 0;
      }
      if (0xf < (uint64_t)local_78._8_8_) {
        uVal_30 = local_78._8_8_ + 1;
        lVal_20 = (int64_t)local_88;
        if (0xfff < uVal_30) {
          lVal_20 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_20)) goto LAB_18041daf1;
          uVal_30 = local_78._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_20,uVal_30);
      }
      local_78._0_16_ = ZEXT816(0xf) << 0x40;
      auArr_12[15] = 0;
      auArr_12._0_15_ = stack0xffffffffffffff79;
      _local_88 = auArr_12 << 8;
      if (uStack_b0 < 0x10) {
        return;
      }
      uVal_30 = uStack_b0 + 1;
      lVal_20 = (int64_t)local_c8;
      if (uVal_30 < 0x1000) {
LAB_18041d869:
        thunk_FUN_180695dd0(lVal_20,uVal_30);
        return;
      }
      lVal_20 = *(int64_t *)((int64_t)local_c8 + -8);
      if ((uint64_t)(((int64_t)local_c8 + -8) - lVal_20) < 0x20) {
        uVal_30 = uStack_b0 + 0x28;
        goto LAB_18041d869;
      }
      goto LAB_18041daf1;
    }
  }
LAB_18041daec:
  func_0x18007ba70();
LAB_18041daf1:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18041db10
void Unwind_18041db10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14b8c) = 0;
  return;
}

// Unwind@18041db70
void Unwind_18041db70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14b74) = 0;
  return;
}

// Unwind@18041dbd0
void Unwind_18041dbd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@18041dc10
void Unwind_18041dc10(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18041dc40
void Unwind_18041dc40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18041dc90
void Unwind_18041dc90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18041dce0
void Unwind_18041dce0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18041dd10
void Unwind_18041dd10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18041dd60
void Unwind_18041dd60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@18041dda0
void Unwind_18041dda0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@18041dde0
void Unwind_18041dde0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18041de30
void Unwind_18041de30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18041de80
void Unwind_18041de80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@18041dec0
void Unwind_18041dec0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@18041df00
void Unwind_18041df00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18041df40
void Unwind_18041df40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18041df80
void Unwind_18041df80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18041dfd0
void Unwind_18041dfd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18041e020
void Unwind_18041e020(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18041e060
void Unwind_18041e060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18041e0a0
void Unwind_18041e0a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x127) = 0;
  return;
}

// Unwind@18041e0f0
void Unwind_18041e0f0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x127) == '\x01') {
    func_0x180001e70(param_2 + 0x60);
  }
  return;
}

// func_0x18041e140
uint64_t func_0x18041e140(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,char param_4)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t auStack_78 [40];
  uint64_t *local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint32_t *local_38;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  int local_20;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  local_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  local_20 = (int)param_4;
  local_40 = 0x1d;
  local_38 = &local_30;
  local_50 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_50 = (uint64_t *)*param_2;
  }
  local_48 = param_2[2];
  func_0x18063ff10(param_1,&local_50,&local_40);
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_78)) {
    return param_1;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_78);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_2 = (*fnPtr_1)();
  return uVal_2;
}

// func_0x18041e1e0
int64_t func_0x18041e1e0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x14b40) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x14b40) = 1;
    *(uint64_t *)(lVal_1 + 0x14b30) = 0xf853820c8c44722d;
    *(uint32_t *)(lVal_1 + 0x14b38) = 0xa242291d;
    *(uint16_t *)(lVal_1 + 0x14b3c) = 0x16f;
    func_0x180673140(&LAB_1804390c0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14b30;
}

// func_0x18041e270
void func_0x18041e270(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xd) == '\x01') {
    *param_1 = *param_1 ^ 0x9d3fe36fdf390927;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) ^ 0xdf390927;
    *(byte *)((int64_t)param_1 + 0xc) = *(byte *)((int64_t)param_1 + 0xc) ^ 0x6f;
    *(uint8_t *)((int64_t)param_1 + 0xd) = 0;
  }
  return;
}

// func_0x18041e2a0
uint64_t func_0x18041e2a0(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,int64_t **param_4)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  int64_t *pLong_4;
  uint32_t local_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  int64_t **local_50;
  int64_t *local_48;
  uint64_t local_40;
  uint32_t *local_38;
  uint64_t *local_30;
  uint64_t local_28;
  int64_t **local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_60 = *param_3;
  uStack_5c = param_3[1];
  uStack_58 = param_3[2];
  uStack_54 = param_3[3];
  local_48 = param_4[2];
  local_50 = param_4;
  if (&DAT_0000000f < param_4[3]) {
    local_50 = (int64_t **)*param_4;
  }
  local_40 = 0xdd;
  local_38 = &local_60;
  local_30 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_30 = (uint64_t *)*param_2;
  }
  local_28 = param_2[2];
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

// Unwind@18041e360
void Unwind_18041e360(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x68));
  return;
}

// func_0x18041e380
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18041e380(uint64_t *param_1)
{
  char *fnPtr_1;
  uint8_t (*_Str)[16];
  uint64_t *pU64_2;
  uint8_t uVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  size_t sz_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  uint64_t *pU64_17;
  int64_t lVal_18;
  uint *pU64_19;
  int64_t *pLong_20;
  uint8_t *pU64_21;
  uint64_t uVal_22;
  uint8_t local_f8 [56];
  uint64_t local_c0;
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint64_t local_98;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint64_t *local_58;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  uStack_88._3_1_ = (uint8_t)_UNK_1806ccf04;
  uStack_88 = CONCAT13(uStack_88._3_1_,_UNK_1806ccf01);
  uStack_84._3_1_ = (uint8_t)_UNK_1806ccf08;
  uStack_84 = CONCAT13(uStack_84._3_1_,(int3)((uint)_UNK_1806ccf04 >> 8));
  local_98._0_4_ = _DAT_1806ccef1;
  local_98._4_4_ = _UNK_1806ccef5;
  uStack_90 = _UNK_1806ccef9;
  uStack_8c = _UNK_1806ccefd;
  local_58 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x14be8) == '\0') {
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_16 + 0x14be8) = 1;
    func_0x18007c9b0(lVal_16 + 0x14bc9,&local_98);
    func_0x180673140(&LAB_180439230);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x14bc9);
  func_0x1801c0c70(fnPtr_1);
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_98._0_4_ = 0;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  sz_14 = strlen(fnPtr_1);
  if ((int64_t)sz_14 < 0) {
    func_0x18007ba70();
LAB_18041ecd2:
    func_0x18007ba70();
LAB_18041ecd8:
    func_0x18007ba70();
  }
  else {
    if (sz_14 < 0x10) {
      pU64_19 = (uint *)&local_98;
      uVal_22 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_15) {
        uVal_22 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        pU64_19 = (uint *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        lVal_16 = func_0x180672de0(uVal_22 + 0x28);
        pU64_19 = (uint *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + 0xfffffffffffffffe) = lVal_16;
      }
      local_98._0_4_ = (uint)pU64_19;
      local_98._4_4_ = (uint32_t)((uint64_t)pU64_19 >> 0x20);
    }
    uStack_88 = (uint32_t)sz_14;
    uStack_84 = (uint32_t)(sz_14 >> 0x20);
    uStack_80 = (uint32_t)uVal_22;
    uStack_7c = (uint32_t)(uVal_22 >> 0x20);
    func_0x1806aa960(pU64_19,fnPtr_1,sz_14);
    *(uint8_t *)((int64_t)pU64_19 + sz_14) = 0;
    pU64_19 = (uint *)&local_98;
    func_0x18014fe60(local_58,0,0,pU64_19);
    uVal_22 = CONCAT44(uStack_7c,uStack_80);
    if (0xf < uVal_22) {
      lVal_5 = CONCAT44(local_98._4_4_,(uint)local_98);
      uVal_15 = uVal_22 + 1;
      lVal_16 = lVal_5;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)(lVal_5 + -8);
        if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_16)) goto LAB_18041ecca;
        uVal_15 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    *local_58 = &PTR_LAB_1806ca440;
    *(uint8_t *)(local_58 + 0x29) = 1;
    lVal_16 = local_58[0x1e];
    pLong_4 = *(int64_t **)(lVal_16 + -0x10);
    if (pLong_4 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_4 + 0x20))(pLong_4,pLong_4 != (int64_t *)(lVal_16 + -0x48));
      *(uint64_t *)(lVal_16 + -0x10) = 0;
    }
    uVal_22 = *(uint64_t *)(lVal_16 + -0x58);
    if (0xf < uVal_22) {
      lVal_5 = *(int64_t *)(lVal_16 + -0x70);
      uVal_15 = uVal_22 + 1;
      lVal_18 = lVal_5;
      if (0xfff < uVal_15) {
        lVal_18 = *(int64_t *)(lVal_5 + -8);
        if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_18)) goto LAB_18041ecca;
        uVal_15 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_18,uVal_15);
    }
    *(uint64_t *)(lVal_16 + -0x60) = 0;
    *(uint64_t *)(lVal_16 + -0x58) = 0xf;
    *(uint8_t *)(lVal_16 + -0x70) = 0;
    local_58[0x1e] = local_58[0x1e] + -0x70;
    uStack_78 = _DAT_1806c6e85;
    uStack_74 = _UNK_1806c6e89;
    uStack_70 = _UNK_1806c6e8d;
    uStack_88 = _DAT_1806c6e75;
    uStack_84 = _UNK_1806c6e79;
    uStack_80 = _UNK_1806c6e7d;
    uStack_7c = _UNK_1806c6e81;
    local_98._0_4_ = _DAT_1806c6e65;
    local_98._4_4_ = _UNK_1806c6e69;
    uStack_90 = _UNK_1806c6e6d;
    uStack_8c = _UNK_1806c6e71;
    uStack_6c = CONCAT13(0x2e,(int3)_UNK_1806c6e91);
    uStack_68 = CONCAT13(uStack_68._3_1_,0xa3a0e9);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14c20) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14c20) = 1;
      func_0x1801b4360(lVal_16 + 0x14be9,&local_98);
      func_0x180673140(&LAB_180439260);
    }
    uVal_13 = _UNK_1806b2d7c;
    uVal_12 = _UNK_1806b2d78;
    uVal_11 = _UNK_1806b2d74;
    uVal_10 = _DAT_1806b2d70;
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_16 + 0x14be9);
    if (*(char *)(lVal_16 + 0x14c1c) == '\x01') {
      auArr_7._4_4_ = *(uint *)(lVal_16 + 0x14bed) ^ _UNK_1806b2d74;
      auArr_7._0_4_ = *(uint *)*_Str ^ _DAT_1806b2d70;
      auArr_7._8_4_ = *(uint *)(lVal_16 + 0x14bf1) ^ _UNK_1806b2d78;
      auArr_7._12_4_ = *(uint *)(lVal_16 + 0x14bf5) ^ _UNK_1806b2d7c;
      *_Str = auArr_7;
      auArr_8._4_4_ = *(uint *)(lVal_16 + 0x14bfd) ^ uVal_11;
      auArr_8._0_4_ = *(uint *)(lVal_16 + 0x14bf9) ^ uVal_10;
      auArr_8._8_4_ = *(uint *)(lVal_16 + 0x14c01) ^ uVal_12;
      auArr_8._12_4_ = *(uint *)(lVal_16 + 0x14c05) ^ uVal_13;
      *(uint8_t (*)[16])(lVal_16 + 0x14bf9) = auArr_8;
      auArr_9._4_4_ = *(uint *)(lVal_16 + 0x14c0d) ^ uVal_11;
      auArr_9._0_4_ = *(uint *)(lVal_16 + 0x14c09) ^ uVal_10;
      auArr_9._8_4_ = *(uint *)(lVal_16 + 0x14c11) ^ uVal_12;
      auArr_9._12_4_ = *(uint *)(lVal_16 + 0x14c15) ^ uVal_13;
      *(uint8_t (*)[16])(lVal_16 + 0x14c09) = auArr_9;
      *(ushort *)(lVal_16 + 0x14c19) = *(ushort *)(lVal_16 + 0x14c19) ^ 0xc787;
      *(byte *)(lVal_16 + 0x14c1b) = *(byte *)(lVal_16 + 0x14c1b) ^ 0xa3;
      *(uint8_t *)(lVal_16 + 0x14c1c) = 0;
    }
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    local_98._0_4_ = 0;
    local_98._4_4_ = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    sz_14 = strlen((char *)_Str);
    if ((int64_t)sz_14 < 0) goto LAB_18041ecd2;
    uVal_22 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_15) {
        uVal_22 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        pU64_19 = (uint *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        lVal_16 = func_0x180672de0(uVal_22 + 0x28);
        pU64_19 = (uint *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + 0xfffffffffffffffe) = lVal_16;
      }
      local_98._0_4_ = (uint)pU64_19;
      local_98._4_4_ = (uint32_t)((uint64_t)pU64_19 >> 0x20);
    }
    uStack_88 = (uint32_t)sz_14;
    uStack_84 = (uint32_t)(sz_14 >> 0x20);
    uStack_80 = (uint32_t)uVal_22;
    uStack_7c = (uint32_t)(uVal_22 >> 0x20);
    func_0x1806aa960(pU64_19,_Str,sz_14);
    *(uint8_t *)((int64_t)pU64_19 + sz_14) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14c38) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14c38) = 1;
      *(uint8_t *)(lVal_16 + 0x14c36) = 1;
      *(uint64_t *)(lVal_16 + 0x14c28) = 0x33d3a8d1b3c7a8ca;
      *(uint32_t *)(lVal_16 + 0x14c30) = 0xe3dab3a7;
      *(uint16_t *)(lVal_16 + 0x14c34) = 0xcdc0;
      func_0x180673140(&LAB_1804392a0);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_16 + 0x14c28);
    if (*(char *)(lVal_16 + 0x14c36) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_16 + 0x14c30) = *(uint *)(lVal_16 + 0x14c30) ^ 0x93a3c787;
      *(byte *)(lVal_16 + 0x14c34) = *(byte *)(lVal_16 + 0x14c34) ^ 0xa5;
      *(byte *)(lVal_16 + 0x14c35) = *(byte *)(lVal_16 + 0x14c35) ^ 0xcd;
      *(uint8_t *)(lVal_16 + 0x14c36) = 0;
    }
    local_a8 = ZEXT816(0);
    local_b8 = ZEXT816(0);
    sz_14 = strlen((char *)pU64_2);
    if ((int64_t)sz_14 < 0) goto LAB_18041ecd8;
    if (sz_14 < 0x10) {
      uVal_22 = 0xf;
      pU64_21 = local_b8;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_15) {
        uVal_22 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        lVal_16 = func_0x180672de0(uVal_22 + 0x28);
        pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_16;
      }
      local_b8._0_8_ = pU64_21;
    }
    local_a8._8_8_ = uVal_22;
    local_a8._0_8_ = sz_14;
    func_0x1806aa960(pU64_21,pU64_2,sz_14);
    pU64_21[sz_14] = 0;
    lVal_16 = func_0x1801cf6b0(local_58,local_b8);
    pLong_4 = (int64_t *)(lVal_16 + 0x20);
    pLong_20 = &local_98;
    if (pLong_4 != pLong_20) {
      uVal_22 = *(uint64_t *)(lVal_16 + 0x38);
      if (0xf < uVal_22) {
        lVal_5 = *pLong_4;
        uVal_15 = uVal_22 + 1;
        lVal_18 = lVal_5;
        if (0xfff < uVal_15) {
          lVal_18 = *(int64_t *)(lVal_5 + -8);
          if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_18)) goto LAB_18041ecca;
          uVal_15 = uVal_22 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_18,uVal_15);
      }
      *(uint32_t *)(lVal_16 + 0x30) = uStack_88;
      *(uint32_t *)(lVal_16 + 0x34) = uStack_84;
      *(uint32_t *)(lVal_16 + 0x38) = uStack_80;
      *(uint32_t *)(lVal_16 + 0x3c) = uStack_7c;
      *(uint *)pLong_4 = (uint)local_98;
      *(uint32_t *)(lVal_16 + 0x24) = local_98._4_4_;
      *(uint32_t *)(lVal_16 + 0x28) = uStack_90;
      *(uint32_t *)(lVal_16 + 0x2c) = uStack_8c;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0xf;
      uStack_7c = 0;
      local_98._0_4_ = (uint)local_98 & 0xffffff00;
    }
    if (0xf < (uint64_t)local_a8._8_8_) {
      uVal_22 = local_a8._8_8_ + 1;
      lVal_16 = local_b8._0_8_;
      if (0xfff < uVal_22) {
        lVal_16 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_16)) goto LAB_18041ecca;
        uVal_22 = local_a8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_22);
    }
    uVal_22 = CONCAT44(uStack_7c,uStack_80);
    if (0xf < uVal_22) {
      lVal_5 = CONCAT44(local_98._4_4_,(uint)local_98);
      uVal_15 = uVal_22 + 1;
      lVal_16 = lVal_5;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)(lVal_5 + -8);
        if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_16)) goto LAB_18041ecca;
        uVal_15 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    local_c0 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_c0 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_f8);
    }
    pU64_17 = local_58 + 0x29;
    uVal_3 = *(uint8_t *)pU64_17;
    uStack_88 = _DAT_1806ccf1c;
    uStack_84 = _UNK_1806ccf20;
    uStack_80 = _UNK_1806ccf24;
    local_98._0_4_ = _DAT_1806ccf0c;
    local_98._4_4_ = _UNK_1806ccf10;
    uStack_90 = _UNK_1806ccf14;
    uStack_8c = _UNK_1806ccf18;
    uStack_7c = CONCAT31(0x64107,(char)_UNK_1806ccf28);
    uStack_78 = 0x5726bf62;
    uStack_74 = CONCAT31(uStack_74._1_3_,0x45);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14c60) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14c60) = 1;
      func_0x1801b1390(lVal_16 + 0x14c39,&local_98);
      func_0x180673140(&LAB_1804392d0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x14c39);
    func_0x18044aab0(fnPtr_1);
    local_b8 = ZEXT816(0);
    sz_14 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_14) {
      uVal_22 = 0xf;
      pU64_21 = local_b8;
      if (0xf < sz_14) {
        uVal_15 = sz_14 | 0xf;
        uVal_22 = 0x16;
        if (0x16 < uVal_15) {
          uVal_22 = uVal_15;
        }
        if (uVal_15 < 0xfff) {
          local_49 = 1;
          pU64_21 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
        }
        else {
          local_49 = 1;
          lVal_16 = func_0x180672de0(uVal_22 + 0x28);
          pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_21 + -8) = lVal_16;
        }
        local_b8._0_8_ = pU64_21;
      }
      local_a8._8_8_ = uVal_22;
      local_a8._0_8_ = sz_14;
      func_0x1806aa960(pU64_21,fnPtr_1,sz_14);
      pU64_21[sz_14] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x14c78) == '\0') {
        lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_16 + 0x14c78) = 1;
        *(uint8_t *)(lVal_16 + 0x14c74) = 1;
        *(uint64_t *)(lVal_16 + 0x14c68) = 0xa0253204826ba4f;
        *(uint32_t *)(lVal_16 + 0x14c70) = 0x253bbc61;
        func_0x180673140(&LAB_180439300);
      }
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint64_t *)(lVal_16 + 0x14c68);
      if (*(char *)(lVal_16 + 0x14c74) == '\x01') {
        *pU64_2 = *pU64_2 ^ 0x656173452549d30d;
        *(uint *)(lVal_16 + 0x14c70) = *(uint *)(lVal_16 + 0x14c70) ^ 0x2549d30d;
        *(uint8_t *)(lVal_16 + 0x14c74) = 0;
      }
      local_98._0_4_ = 0;
      local_98._4_4_ = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      sz_14 = strlen((char *)pU64_2);
      if (-1 < (int64_t)sz_14) {
        uVal_22 = 0xf;
        if (0xf < sz_14) {
          uVal_15 = sz_14 | 0xf;
          uVal_22 = 0x16;
          if (0x16 < uVal_15) {
            uVal_22 = uVal_15;
          }
          if (uVal_15 < 0xfff) {
            local_4a = 1;
            pLong_20 = (int64_t *)func_0x180672de0(uVal_22 + 1);
          }
          else {
            local_4a = 1;
            lVal_16 = func_0x180672de0(uVal_22 + 0x28);
            pLong_20 = (int64_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
            pLong_20[-1] = lVal_16;
          }
          local_98._0_4_ = (uint)pLong_20;
          local_98._4_4_ = (uint32_t)((uint64_t)pLong_20 >> 0x20);
        }
        uStack_88 = (uint32_t)sz_14;
        uStack_84 = (uint32_t)(sz_14 >> 0x20);
        uStack_80 = (uint32_t)uVal_22;
        uStack_7c = (uint32_t)(uVal_22 >> 0x20);
        func_0x1806aa960(pLong_20,pU64_2,sz_14);
        *(uint8_t *)((int64_t)pLong_20 + sz_14) = 0;
        func_0x1801ccd70(local_58,&local_98,local_b8,pU64_17,uVal_3,local_f8,0);
        uVal_22 = CONCAT44(uStack_7c,uStack_80);
        if (0xf < uVal_22) {
          lVal_5 = CONCAT44(local_98._4_4_,(uint)local_98);
          uVal_15 = uVal_22 + 1;
          lVal_16 = lVal_5;
          if (0xfff < uVal_15) {
            lVal_16 = *(int64_t *)(lVal_5 + -8);
            if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_16)) goto LAB_18041ecca;
            uVal_15 = uVal_22 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_16,uVal_15);
        }
        if (0xf < (uint64_t)local_a8._8_8_) {
          uVal_22 = local_a8._8_8_ + 1;
          lVal_16 = local_b8._0_8_;
          if (0xfff < uVal_22) {
            lVal_16 = *(int64_t *)(local_b8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_16)) {
LAB_18041ecca:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_22 = local_a8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_16,uVal_22);
        }
        return local_58;
      }
      goto LAB_18041ece8;
    }
  }
  local_49 = 1;
  func_0x18007ba70();
LAB_18041ece8:
  local_4a = 1;
  func_0x18007ba70();
  fnPtr_6 = (func_ptr_t )swi(3);
  pU64_17 = (uint64_t *)(*fnPtr_6)();
  return pU64_17;
}

// Unwind@18041ed00
void Unwind_18041ed00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@18041ed50
void Unwind_18041ed50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14c60) = 0;
  *(uint8_t *)(param_2 + 0xef) = 1;
  return;
}

// Unwind@18041eda0
void Unwind_18041eda0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18041ede0
void Unwind_18041ede0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18041ee20
void Unwind_18041ee20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18041ee60
void Unwind_18041ee60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  *(uint8_t *)(param_2 + 0xee) = 0;
  return;
}

// Unwind@18041eea0
void Unwind_18041eea0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0xee);
  func_0x180001e70(param_2 + 0x80);
  *(uint8_t *)(param_2 + 0xef) = uVal_1;
  return;
}

// Unwind@18041eee0
void Unwind_18041eee0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0xef) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@18041ef40
void Unwind_18041ef40(uint64_t param_1,int64_t param_2)
{
  func_0x180154cc0(*(uint64_t *)(param_2 + 0xe0));
  return;
}

// Unwind@18041ef80
void Unwind_18041ef80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14be8) = 0;
  return;
}

// Unwind@18041efd0
void Unwind_18041efd0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14c20) = 0;
  return;
}

// Unwind@18041fa60
void Unwind_18041fa60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@18041fac0
void Unwind_18041fac0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@18041fb20
void Unwind_18041fb20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@180420010
void Unwind_180420010(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x48));
  return;
}

// func_0x180420050
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180420050(uint64_t *param_1)
{
  char *fnPtr_1;
  byte *pU8_2;
  uint8_t *pU64_3;
  uint8_t (*_Str)[16];
  uint64_t *pU64_4;
  uint *pU64_5;
  uint32_t uVal_6;
  func_ptr_t fnPtr_7;
  uint64_t uVal_8;
  uint64_t *pU64_9;
  size_t sz_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t uVal_13;
  uint64_t *pU64_14;
  uint8_t *pU64_15;
  uint64_t uVal_16;
  uint8_t *pU64_17;
  uint8_t uVal_18;
  uint uVal_20;
  uint8_t auArr_19 [16];
  uint uVal_21;
  uint32_t uVal_23;
  uint64_t uVal_22;
  uint8_t ***ptr3_U64_24;
  uint in_stack_fffffffffffffc98;
  uint uVal_25;
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
  uint8_t **local_248;
  uint64_t *local_240;
  uint8_t ***local_210;
  uint64_t local_208;
  uint64_t uStack_200;
  uint64_t local_1f8;
  uint64_t uStack_1f0;
  uint8_t local_1e8 [56];
  uint64_t local_1b0;
  uint8_t local_1a8 [56];
  uint64_t local_170;
  uint8_t local_168 [56];
  uint64_t local_130;
  uint8_t local_128 [56];
  uint64_t local_f0;
  uint64_t local_e8;
  uint64_t uStack_e0;
  uint32_t local_d8;
  uint8_t local_c8 [16];
  uint8_t local_b8 [24];
  uint64_t *local_a0;
  uint8_t local_98 [16];
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint8_t local_78;
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
  
  local_60 = 0xfffffffffffffffe;
  local_88._4_4_ = _UNK_1806ccf45;
  local_88._0_4_ = _DAT_1806ccf41;
  uStack_80._0_4_ = _UNK_1806ccf49;
  uStack_80._4_4_ = _UNK_1806ccf4d;
  local_98._8_8_ = _UNK_1806ccf39;
  local_98._0_8_ = _DAT_1806ccf31;
  local_78 = 0x73;
  local_a0 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x14ce8) == '\0') {
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_12 + 0x14ce8) = 1;
    func_0x180086ce0(lVal_12 + 0x14cc5,local_98);
    func_0x180673140(&LAB_1804393d0);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x14cc5);
  func_0x1800f3620(fnPtr_1);
  _local_88 = (uint8_t  [16])0x0;
  local_98 = (uint8_t  [16])0x0;
  sz_10 = strlen(fnPtr_1);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
LAB_1804223a5:
    local_64 = 1;
    func_0x18007ba70();
LAB_1804223b2:
    local_61 = 1;
    func_0x18007ba70();
LAB_1804223bf:
    local_66 = 1;
    func_0x18007ba70();
LAB_1804223cc:
    local_65 = 1;
    func_0x18007ba70();
LAB_1804223d9:
    local_68 = 1;
    func_0x18007ba70();
LAB_1804223e6:
    local_67 = 1;
    func_0x18007ba70();
LAB_1804223f3:
    local_6a = 1;
    func_0x18007ba70();
LAB_180422400:
    local_69 = 1;
    func_0x18007ba70();
LAB_18042240d:
    local_6b = 1;
    func_0x18007ba70();
LAB_18042241a:
    local_62 = 1;
    func_0x18007ba70();
LAB_180422427:
    local_6d = 1;
    func_0x18007ba70();
LAB_180422434:
    local_6c = 1;
    func_0x18007ba70();
LAB_180422441:
    local_6f = 1;
    func_0x18007ba70();
LAB_18042244e:
    local_6e = 1;
    func_0x18007ba70();
LAB_18042245b:
    local_71 = 1;
    func_0x18007ba70();
LAB_180422468:
    local_70 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_10 < 0x10) {
      pU64_15 = local_98;
      uVal_16 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_98._0_8_ = pU64_15;
    }
    local_88 = (uint8_t  [8])sz_10;
    uStack_80 = uVal_16;
    func_0x1806aa960(pU64_15,fnPtr_1,sz_10);
    pU64_15[sz_10] = 0;
    pU64_15 = local_98;
    func_0x1801c2ba0(local_a0,0,0,pU64_15);
    if (0xf < uStack_80) {
      uVal_16 = uStack_80 + 1;
      lVal_12 = local_98._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    pU64_9 = local_a0;
    *local_a0 = &PTR_LAB_1806ca5b0;
    pU64_14 = local_a0 + 0x10;
    *(uint16_t *)(local_a0 + 0x10) = 0;
    *(uint8_t *)((int64_t)local_a0 + 0x82) = 1;
    uVal_8 = _UNK_1806b6698;
    uVal_22 = _DAT_1806b6690;
    *(uint64_t *)((int64_t)local_a0 + 0x84) = _DAT_1806b6690;
    *(uint64_t *)((int64_t)local_a0 + 0x8c) = uVal_8;
    *(uint64_t *)((int64_t)local_a0 + 0x94) = (uint64_t)DAT_1806b26b4;
    *(uint32_t *)((int64_t)local_a0 + 0x9c) = 0;
    *(uint8_t *)(local_a0 + 0x14) = 1;
    *(uint64_t *)((int64_t)local_a0 + 0xa4) = uVal_22;
    *(uint64_t *)((int64_t)local_a0 + 0xac) = uVal_8;
    *(uint32_t *)((int64_t)local_a0 + 0xb4) = 0x3f400000;
    *(uint8_t *)(local_a0 + 0x17) = 0;
    *(uint8_t (*)[16])(local_a0 + 0x19) = ZEXT816(0);
    *(uint8_t *)(local_a0 + 0x1f) = 0;
    *(uint8_t (*)[16])(local_a0 + 0x21) = ZEXT816(0);
    uVal_18 = 0;
    func_0x1806ab010(local_a0 + 0x24,0,0x120);
    *(uint8_t (*)[16])(pU64_9 + 0x4b) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_9 + 0x4e) = ZEXT816(0);
    *(uint8_t *)((int64_t)pU64_9 + 0x284) = 0;
    *(uint8_t (*)[16])(pU64_9 + 0x5f) = ZEXT816(0);
    pU64_9[0x61] = 0;
    *(uint8_t (*)[16])(pU64_9 + 99) = ZEXT816(0);
    *(uint8_t *)(pU64_9 + 0x69) = 0;
    *(uint8_t (*)[16])(pU64_9 + 0x6b) = ZEXT816(0);
    func_0x1806ab010(pU64_9 + 0x6e,0,0x120);
    *(uint8_t (*)[16])(pU64_9 + 0x95) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_9 + 0x98) = ZEXT816(0);
    *(uint8_t *)((int64_t)pU64_9 + 0x4d4) = 0;
    *(uint8_t (*)[16])(pU64_9 + 0xa9) = ZEXT816(0);
    pU64_9[0xab] = 0;
    *(uint8_t (*)[16])(pU64_9 + 0xad) = ZEXT816(0);
    *(uint8_t *)(pU64_9 + 0xb3) = 0;
    *(uint8_t (*)[16])(pU64_9 + 0xb5) = ZEXT816(0);
    func_0x1806ab010(pU64_9 + 0xb8,0,0x120);
    *(uint8_t (*)[16])(pU64_9 + 0xdf) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_9 + 0xe2) = ZEXT816(0);
    *(uint8_t *)((int64_t)pU64_9 + 0x724) = 0;
    *(uint8_t (*)[16])(pU64_9 + 0xf3) = ZEXT816(0);
    pU64_9[0xf5] = 0;
    local_1b0 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_1b0 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_1e8);
      uVal_18 = *(uint8_t *)pU64_14;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14cec) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14cec) = 1;
      *(uint16_t *)(lVal_12 + 0x14ce9) = 0x1dd;
      func_0x180673140(&LAB_180439400);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_12 + 0x14ce9);
    if (*(char *)(lVal_12 + 0x14cea) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xdd;
      *(uint8_t *)(lVal_12 + 0x14cea) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU8_2);
    if ((int64_t)sz_10 < 0) goto LAB_1804223a5;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_64 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_64 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_98._0_8_ = pU64_15;
    }
    uStack_80 = uVal_16;
    local_88 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_15,pU8_2,sz_10);
    pU64_15[sz_10] = 0;
    local_e8 = _DAT_1806ccf52;
    uStack_e0 = _UNK_1806ccf5a;
    local_d8 = 0xe51ababe;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14d04) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14d04) = 1;
      func_0x18007cfc0(lVal_12 + 0x14ced,&local_e8);
      func_0x180673140(&LAB_180439420);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x14ced);
    func_0x1802e4a50(fnPtr_1);
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1804223b2;
    if (sz_10 < 0x10) {
      pU64_15 = local_c8;
      uVal_16 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_61 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_61 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8._8_8_ = uVal_16;
    local_b8._0_8_ = sz_10;
    func_0x1806aa960(pU64_15,fnPtr_1,sz_10);
    pU64_15[sz_10] = 0;
    in_stack_fffffffffffffc98 = in_stack_fffffffffffffc98 & 0xffffff00;
    pU64_15 = local_c8;
    pU64_17 = local_98;
    func_0x1801ccd70(local_a0,pU64_15,pU64_17,pU64_14,uVal_18,local_1e8,in_stack_fffffffffffffc98);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_16 = local_b8._8_8_ + 1;
      lVal_12 = local_c8._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    if (0xf < uStack_80) {
      uVal_16 = uStack_80 + 1;
      lVal_12 = local_98._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    local_170 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_170 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_1a8);
    }
    pU64_3 = (uint8_t *)((int64_t)local_a0 + 0x81);
    uVal_18 = *pU64_3;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14d20) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14d20) = 1;
      uVal_22 = _UNK_1806c9198;
      *(uint64_t *)(lVal_12 + 0x14d10) = _DAT_1806c9190;
      *(uint64_t *)(lVal_12 + 0x14d18) = uVal_22;
      func_0x180673140(&LAB_180439450);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_12 + 0x14d10);
    if (*(char *)(lVal_12 + 0x14d1f) == '\x01') {
      uVal_23 = *(uint32_t *)(lVal_12 + 0x14d18);
      auArr_19 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_23 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_23 >> 0x10),uVal_23)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_12 + 0x14d1d) >> 8)),
                                                 (char)((uint)uVal_23 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_12 + 0x14d1d),
                                                 (char)uVal_23))),_DAT_1806ae110);
      auArr_19._8_8_ =
           auArr_19._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_12 + 0x14d1c) << 0x20;
      auArr_19 = pblendw(auArr_19,*_Str,0xf);
      *_Str = auArr_19 ^ _DAT_1806bb110;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)_Str);
    if ((int64_t)sz_10 < 0) goto LAB_1804223bf;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_66 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_66 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_98._0_8_ = pU64_17;
    }
    uStack_80 = uVal_16;
    local_88 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_17,_Str,sz_10);
    pU64_17[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14d34) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14d34) = 1;
      *(uint8_t *)(lVal_12 + 0x14d30) = 1;
      *(uint64_t *)(lVal_12 + 0x14d28) = 0x47dca2c7fdcaa6d5;
      func_0x180673140(&LAB_180439480);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_12 + 0x14d28);
    if (*(char *)(lVal_12 + 0x14d30) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x47abcda593a3c787;
      *(uint8_t *)(lVal_12 + 0x14d30) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_4);
    if ((int64_t)sz_10 < 0) goto LAB_1804223cc;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_65 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_65 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8._8_8_ = uVal_16;
    local_b8._0_8_ = sz_10;
    func_0x1806aa960(pU64_15,pU64_4,sz_10);
    pU64_15[sz_10] = 0;
    in_stack_fffffffffffffc98 = in_stack_fffffffffffffc98 & 0xffffff00;
    pU64_15 = local_c8;
    pU64_17 = local_98;
    func_0x1801ccd70(local_a0,pU64_15,pU64_17,pU64_3,uVal_18,local_1a8,in_stack_fffffffffffffc98);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_16 = local_b8._8_8_ + 1;
      lVal_12 = local_c8._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    if (0xf < uStack_80) {
      uVal_16 = uStack_80 + 1;
      lVal_12 = local_98._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    local_130 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_130 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_168);
    }
    pU64_3 = (uint8_t *)((int64_t)local_a0 + 0x82);
    uVal_18 = *pU64_3;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14d38) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14d38) = 1;
      *(uint16_t *)(lVal_12 + 0x14d35) = 0x1d5;
      func_0x180673140(&LAB_1804394a0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_12 + 0x14d35);
    if (*(char *)(lVal_12 + 0x14d36) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xd5;
      *(uint8_t *)(lVal_12 + 0x14d36) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU8_2);
    if ((int64_t)sz_10 < 0) goto LAB_1804223d9;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_68 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_68 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_98._0_8_ = pU64_17;
    }
    uStack_80 = uVal_16;
    local_88 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_17,pU8_2,sz_10);
    pU64_17[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14d4c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14d4c) = 1;
      *(uint8_t *)(lVal_12 + 0x14d48) = 1;
      *(uint64_t *)(lVal_12 + 0x14d40) = 0x9144f5769b81849a;
      func_0x180673140(&LAB_1804394c0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_12 + 0x14d40);
    if (*(char *)(lVal_12 + 0x14d48) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x91219b1ff7f5f1d5;
      *(uint8_t *)(lVal_12 + 0x14d48) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_4);
    if ((int64_t)sz_10 < 0) goto LAB_1804223e6;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_67 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_67 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8._8_8_ = uVal_16;
    local_b8._0_8_ = sz_10;
    func_0x1806aa960(pU64_15,pU64_4,sz_10);
    pU64_15[sz_10] = 0;
    in_stack_fffffffffffffc98 = in_stack_fffffffffffffc98 & 0xffffff00;
    pU64_15 = local_c8;
    pU64_17 = local_98;
    func_0x1801ccd70(local_a0,pU64_15,pU64_17,pU64_3,uVal_18,local_168,in_stack_fffffffffffffc98);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_16 = local_b8._8_8_ + 1;
      lVal_12 = local_c8._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    if (0xf < uStack_80) {
      uVal_16 = uStack_80 + 1;
      lVal_12 = local_98._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    local_348 = &PTR_LAB_1806ce5c0;
    local_340 = local_a0;
    local_310 = &local_348;
    local_208 = *(uint64_t *)((int64_t)local_a0 + 0x84);
    uStack_200 = *(uint64_t *)((int64_t)local_a0 + 0x8c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14d50) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14d50) = 1;
      *(uint16_t *)(lVal_12 + 0x14d4d) = 0x10d;
      func_0x180673140(&LAB_1804394e0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_12 + 0x14d4d);
    if (*(char *)(lVal_12 + 0x14d4e) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xd;
      *(uint8_t *)(lVal_12 + 0x14d4e) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU8_2);
    if ((int64_t)sz_10 < 0) goto LAB_1804223f3;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_6a = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_6a = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_98._0_8_ = pU64_17;
    }
    uStack_80 = uVal_16;
    local_88 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_17,pU8_2,sz_10);
    pU64_17[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14d68) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14d68) = 1;
      *(uint8_t *)(lVal_12 + 0x14d66) = 1;
      *(uint64_t *)(lVal_12 + 0x14d58) = 0x45041d2c493da642;
      *(uint32_t *)(lVal_12 + 0x14d60) = 0x4a25bc6e;
      *(uint16_t *)(lVal_12 + 0x14d64) = 0x7337;
      func_0x180673140(&LAB_180439500);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_12 + 0x14d58);
    if (*(char *)(lVal_12 + 0x14d66) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x656173452549d30d;
      *(uint *)(lVal_12 + 0x14d60) = *(uint *)(lVal_12 + 0x14d60) ^ 0x2549d30d;
      *(byte *)(lVal_12 + 0x14d64) = *(byte *)(lVal_12 + 0x14d64) ^ 0x45;
      *(byte *)(lVal_12 + 0x14d65) = *(byte *)(lVal_12 + 0x14d65) ^ 0x73;
      *(uint8_t *)(lVal_12 + 0x14d66) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_4);
    if ((int64_t)sz_10 < 0) goto LAB_180422400;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_69 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_69 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_c8._0_8_ = pU64_15;
    }
    pU64_9 = local_a0;
    lVal_12 = (int64_t)local_a0 + 0x84;
    local_b8._8_8_ = uVal_16;
    local_b8._0_8_ = sz_10;
    func_0x1806aa960(pU64_15,pU64_4,sz_10);
    pU64_15[sz_10] = 0;
    ptr3_U64_24 = &local_348;
    pU64_14 = &local_208;
    pU64_15 = local_c8;
    pU64_17 = local_98;
    func_0x1801cd600(pU64_9,pU64_15,pU64_17,lVal_12,pU64_14,ptr3_U64_24,
                  in_stack_fffffffffffffc98 & 0xffffff00);
    uVal_23 = (uint32_t)((uint64_t)pU64_14 >> 0x20);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_16 = local_b8._8_8_ + 1;
      lVal_12 = local_c8._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    if (0xf < uStack_80) {
      uVal_16 = uStack_80 + 1;
      lVal_12 = local_98._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    local_308 = &PTR_LAB_1806bae80;
    local_300 = local_a0;
    local_2d0 = &local_308;
    uVal_6 = *(uint32_t *)((int64_t)local_a0 + 0x94);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14d6c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14d6c) = 1;
      *(uint16_t *)(lVal_12 + 0x14d69) = 0x1c5;
      func_0x180673140(&LAB_180439530);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_12 + 0x14d69);
    if (*(char *)(lVal_12 + 0x14d6a) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xc5;
      *(uint8_t *)(lVal_12 + 0x14d6a) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU8_2);
    if ((int64_t)sz_10 < 0) goto LAB_18042240d;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_6b = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_6b = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_98._0_8_ = pU64_17;
    }
    uStack_80 = uVal_16;
    local_88 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_17,pU8_2,sz_10);
    pU64_17[sz_10] = 0;
    local_e8 = _DAT_1806ccf66;
    uStack_e0 = _UNK_1806ccf6e;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14d80) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14d80) = 1;
      func_0x18007d150(lVal_12 + 0x14d6d,&local_e8);
      func_0x180673140(&LAB_180439550);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint *)(lVal_12 + 0x14d6d);
    if (*(char *)(lVal_12 + 0x14d7d) == '\x01') {
      uVal_25 = *(uint *)(lVal_12 + 0x14d71) ^ _UNK_1806ae4d4;
      uVal_20 = *(uint *)(lVal_12 + 0x14d75) ^ _UNK_1806ae4d8;
      uVal_21 = *(uint *)(lVal_12 + 0x14d79) ^ _UNK_1806ae4dc;
      *pU64_5 = *pU64_5 ^ _DAT_1806ae4d0;
      *(uint *)(lVal_12 + 0x14d71) = uVal_25;
      *(uint *)(lVal_12 + 0x14d75) = uVal_20;
      *(uint *)(lVal_12 + 0x14d79) = uVal_21;
      *(uint8_t *)(lVal_12 + 0x14d7d) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_5);
    if ((int64_t)sz_10 < 0) goto LAB_18042241a;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_62 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_62 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_c8._0_8_ = pU64_15;
    }
    pU64_14 = local_a0;
    lVal_12 = (int64_t)local_a0 + 0x94;
    local_b8._8_8_ = uVal_16;
    local_b8._0_8_ = sz_10;
    func_0x1806aa960(pU64_15,pU64_5,sz_10);
    pU64_15[sz_10] = 0;
    uVal_22 = CONCAT44(uVal_23,uVal_6);
    uVal_16 = (uint64_t)ptr3_U64_24 & 0xffffffff00000000;
    pU64_15 = local_c8;
    pU64_17 = local_98;
    func_0x1801cd2e0(pU64_14,pU64_15,pU64_17,lVal_12,uVal_22,uVal_16,0x3f800000,&local_308,0);
    uVal_23 = (uint32_t)((uint64_t)uVal_22 >> 0x20);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_11 = local_b8._8_8_ + 1;
      lVal_12 = local_c8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_11 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    if (0xf < uStack_80) {
      uVal_11 = uStack_80 + 1;
      lVal_12 = local_98._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_11 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_2c8 = &PTR_LAB_1806bae80;
    local_2c0 = local_a0;
    local_290 = &local_2c8;
    uVal_6 = *(uint32_t *)(local_a0 + 0x13);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14d84) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14d84) = 1;
      *(uint16_t *)(lVal_12 + 0x14d81) = 0x135;
      func_0x180673140(&LAB_180439570);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_12 + 0x14d81);
    if (*(char *)(lVal_12 + 0x14d82) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x35;
      *(uint8_t *)(lVal_12 + 0x14d82) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU8_2);
    if ((int64_t)sz_10 < 0) goto LAB_180422427;
    uVal_11 = 0xf;
    if (0xf < sz_10) {
      uVal_13 = sz_10 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_13) {
        uVal_11 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_6d = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
      }
      else {
        local_6d = 1;
        lVal_12 = func_0x180672de0(uVal_11 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_98._0_8_ = pU64_17;
    }
    uStack_80 = uVal_11;
    local_88 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_17,pU8_2,sz_10);
    pU64_17[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14d98) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14d98) = 1;
      *(uint64_t *)(lVal_12 + 0x14d88) = 0xa990455029ddc47a;
      *(uint32_t *)(lVal_12 + 0x14d90) = 0x20d3d846;
      *(uint16_t *)(lVal_12 + 0x14d94) = 0x139;
      func_0x180673140(&LAB_180439590);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_12 + 0x14d88);
    if (*(char *)(lVal_12 + 0x14d95) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x89f52b3945a9b135;
      *(uint *)(lVal_12 + 0x14d90) = *(uint *)(lVal_12 + 0x14d90) ^ 0x45a9b135;
      *(byte *)(lVal_12 + 0x14d94) = *(byte *)(lVal_12 + 0x14d94) ^ 0x39;
      *(uint8_t *)(lVal_12 + 0x14d95) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_4);
    if ((int64_t)sz_10 < 0) goto LAB_180422434;
    uVal_11 = 0xf;
    if (0xf < sz_10) {
      uVal_13 = sz_10 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_13) {
        uVal_11 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_6c = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
      }
      else {
        local_6c = 1;
        lVal_12 = func_0x180672de0(uVal_11 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_c8._0_8_ = pU64_15;
    }
    pU64_9 = local_a0;
    pU64_14 = local_a0 + 0x13;
    local_b8._8_8_ = uVal_11;
    local_b8._0_8_ = sz_10;
    func_0x1806aa960(pU64_15,pU64_4,sz_10);
    pU64_15[sz_10] = 0;
    uVal_25 = 0x3e800000;
    pU64_15 = local_c8;
    pU64_17 = local_98;
    func_0x1801cd2e0(pU64_9,pU64_15,pU64_17,pU64_14,CONCAT44(uVal_23,uVal_6),uVal_16 & 0xffffffff00000000,
                  0x3e800000,&local_2c8,0);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_16 = local_b8._8_8_ + 1;
      lVal_12 = local_c8._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    if (0xf < uStack_80) {
      uVal_16 = uStack_80 + 1;
      lVal_12 = local_98._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    local_f0 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_f0 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_128);
    }
    pU64_14 = local_a0 + 0x14;
    uVal_18 = *(uint8_t *)pU64_14;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14d9c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14d9c) = 1;
      *(uint16_t *)(lVal_12 + 0x14d99) = 0x145;
      func_0x180673140(&LAB_1804395c0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_12 + 0x14d99);
    if (*(char *)(lVal_12 + 0x14d9a) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x45;
      *(uint8_t *)(lVal_12 + 0x14d9a) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU8_2);
    if ((int64_t)sz_10 < 0) goto LAB_180422441;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_6f = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_6f = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_98._0_8_ = pU64_17;
    }
    uStack_80 = uVal_16;
    local_88 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_17,pU8_2,sz_10);
    pU64_17[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14dac) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14dac) = 1;
      *(uint8_t *)(lVal_12 + 0x14da8) = 1;
      *(uint64_t *)(lVal_12 + 0x14da0) = 0xe7c66c4bab58470a;
      func_0x180673140(&LAB_1804395e0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_12 + 0x14da0);
    if (*(char *)(lVal_12 + 0x14da8) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0xe7bf0d27d93d3145;
      *(uint8_t *)(lVal_12 + 0x14da8) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_4);
    if ((int64_t)sz_10 < 0) goto LAB_18042244e;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_6e = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_6e = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8._8_8_ = uVal_16;
    local_b8._0_8_ = sz_10;
    func_0x1806aa960(pU64_15,pU64_4,sz_10);
    pU64_15[sz_10] = 0;
    uVal_25 = uVal_25 & 0xffffff00;
    pU64_15 = local_c8;
    pU64_17 = local_98;
    func_0x1801ccd70(local_a0,pU64_15,pU64_17,pU64_14,uVal_18,local_128,uVal_25);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_16 = local_b8._8_8_ + 1;
      lVal_12 = local_c8._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    if (0xf < uStack_80) {
      uVal_16 = uStack_80 + 1;
      lVal_12 = local_98._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    local_288 = &PTR_LAB_1806ce5f0;
    local_280 = local_a0;
    local_250 = &local_288;
    local_1f8 = *(uint64_t *)((int64_t)local_a0 + 0xa4);
    uStack_1f0 = *(uint64_t *)((int64_t)local_a0 + 0xac);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14db0) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14db0) = 1;
      *(uint16_t *)(lVal_12 + 0x14dad) = 0x11d;
      func_0x180673140(&LAB_180439600);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_12 + 0x14dad);
    if (*(char *)(lVal_12 + 0x14dae) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x1d;
      *(uint8_t *)(lVal_12 + 0x14dae) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU8_2);
    if ((int64_t)sz_10 < 0) goto LAB_18042245b;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_71 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_71 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_98._0_8_ = pU64_17;
    }
    uStack_80 = uVal_16;
    local_88 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_17,pU8_2,sz_10);
    pU64_17[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14dc8) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14dc8) = 1;
      *(uint8_t *)(lVal_12 + 0x14dc6) = 1;
      *(uint64_t *)(lVal_12 + 0x14db8) = 0x9b5862d379280152;
      *(uint32_t *)(lVal_12 + 0x14dc0) = 0x6421187e;
      *(uint16_t *)(lVal_12 + 0x14dc4) = 0x3cd;
      func_0x180673140(&LAB_180439620);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_12 + 0x14db8);
    if (*(char *)(lVal_12 + 0x14dc6) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0xbb2103bf0b4d771d;
      *(uint *)(lVal_12 + 0x14dc0) = *(uint *)(lVal_12 + 0x14dc0) ^ 0xb4d771d;
      *(byte *)(lVal_12 + 0x14dc4) = *(byte *)(lVal_12 + 0x14dc4) ^ 0xbf;
      *(byte *)(lVal_12 + 0x14dc5) = *(byte *)(lVal_12 + 0x14dc5) ^ 3;
      *(uint8_t *)(lVal_12 + 0x14dc6) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_4);
    if ((int64_t)sz_10 < 0) goto LAB_180422468;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_70 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_70 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_c8._0_8_ = pU64_15;
    }
    pU64_9 = local_a0;
    lVal_12 = (int64_t)local_a0 + 0xa4;
    local_b8._8_8_ = uVal_16;
    local_b8._0_8_ = sz_10;
    func_0x1806aa960(pU64_15,pU64_4,sz_10);
    pU64_15[sz_10] = 0;
    ptr3_U64_24 = &local_288;
    pU64_14 = &local_1f8;
    pU64_15 = local_c8;
    pU64_17 = local_98;
    func_0x1801cd600(pU64_9,pU64_15,pU64_17,lVal_12,pU64_14,ptr3_U64_24,uVal_25 & 0xffffff00);
    uVal_23 = (uint32_t)((uint64_t)pU64_14 >> 0x20);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_16 = local_b8._8_8_ + 1;
      lVal_12 = local_c8._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    if (0xf < uStack_80) {
      uVal_16 = uStack_80 + 1;
      lVal_12 = local_98._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
        uVal_16 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    local_248 = &PTR_LAB_1806b5990;
    local_240 = local_a0;
    local_210 = &local_248;
    uVal_6 = *(uint32_t *)((int64_t)local_a0 + 0xb4);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14dcc) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x14dcc) = 1;
      *(uint16_t *)(lVal_12 + 0x14dc9) = 0x12d;
      func_0x180673140(&LAB_180439650);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_12 + 0x14dc9);
    if (*(char *)(lVal_12 + 0x14dca) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x2d;
      *(uint8_t *)(lVal_12 + 0x14dca) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU8_2);
    if (-1 < (int64_t)sz_10) {
      uVal_16 = 0xf;
      if (0xf < sz_10) {
        uVal_11 = sz_10 | 0xf;
        uVal_16 = 0x16;
        if (0x16 < uVal_11) {
          uVal_16 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          local_72 = 1;
          pU64_17 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
        }
        else {
          local_72 = 1;
          lVal_12 = func_0x180672de0(uVal_16 + 0x28);
          pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_17 + -8) = lVal_12;
        }
        local_98._0_8_ = pU64_17;
      }
      uStack_80 = uVal_16;
      local_88 = (uint8_t  [8])sz_10;
      func_0x1806aa960(pU64_17,pU8_2,sz_10);
      pU64_17[sz_10] = 0;
      local_e8 = _DAT_1806ccf76;
      uStack_e0 = _UNK_1806ccf7e;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x14de0) == '\0') {
        lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_12 + 0x14de0) = 1;
        func_0x18007d150(lVal_12 + 0x14dcd,&local_e8);
        func_0x180673140(&LAB_180439670);
      }
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_5 = (uint *)(lVal_12 + 0x14dcd);
      if (*(char *)(lVal_12 + 0x14ddd) == '\x01') {
        uVal_25 = *(uint *)(lVal_12 + 0x14dd1) ^ _UNK_1806b2da4;
        uVal_20 = *(uint *)(lVal_12 + 0x14dd5) ^ _UNK_1806b2da8;
        uVal_21 = *(uint *)(lVal_12 + 0x14dd9) ^ _UNK_1806b2dac;
        *pU64_5 = *pU64_5 ^ _DAT_1806b2da0;
        *(uint *)(lVal_12 + 0x14dd1) = uVal_25;
        *(uint *)(lVal_12 + 0x14dd5) = uVal_20;
        *(uint *)(lVal_12 + 0x14dd9) = uVal_21;
        *(uint8_t *)(lVal_12 + 0x14ddd) = 0;
      }
      local_c8 = (uint8_t  [16])0x0;
      sz_10 = strlen((char *)pU64_5);
      if (-1 < (int64_t)sz_10) {
        uVal_16 = 0xf;
        if (0xf < sz_10) {
          uVal_11 = sz_10 | 0xf;
          uVal_16 = 0x16;
          if (0x16 < uVal_11) {
            uVal_16 = uVal_11;
          }
          if (uVal_11 < 0xfff) {
            local_63 = 1;
            pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
          }
          else {
            local_63 = 1;
            lVal_12 = func_0x180672de0(uVal_16 + 0x28);
            pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_15 + -8) = lVal_12;
          }
          local_c8._0_8_ = pU64_15;
        }
        pU64_14 = local_a0;
        lVal_12 = (int64_t)local_a0 + 0xb4;
        local_b8._0_8_ = sz_10;
        local_b8._8_8_ = uVal_16;
        func_0x1806aa960(pU64_15,pU64_5,sz_10);
        pU64_15[sz_10] = 0;
        func_0x1801cd2e0(pU64_14,local_c8,local_98,lVal_12,CONCAT44(uVal_23,uVal_6),
                      (uint64_t)ptr3_U64_24 & 0xffffffff00000000,0x3f800000,&local_248,0);
        if (0xf < (uint64_t)local_b8._8_8_) {
          uVal_16 = local_b8._8_8_ + 1;
          lVal_12 = local_c8._0_8_;
          if (0xfff < uVal_16) {
            lVal_12 = *(int64_t *)(local_c8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_12)) goto LAB_18042239e;
            uVal_16 = local_b8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_16);
        }
        if (0xf < uStack_80) {
          uVal_16 = uStack_80 + 1;
          lVal_12 = local_98._0_8_;
          if (0xfff < uVal_16) {
            lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
            if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) {
LAB_18042239e:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_16 = uStack_80 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_16);
        }
        return local_a0;
      }
      goto LAB_180422482;
    }
  }
  local_72 = 1;
  func_0x18007ba70();
LAB_180422482:
  local_63 = 1;
  func_0x18007ba70();
  fnPtr_7 = (func_ptr_t )swi(3);
  pU64_14 = (uint64_t *)(*fnPtr_7)();
  return pU64_14;
}

// Unwind@180422490
void Unwind_180422490(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1e8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1b0));
    *(uint64_t *)(param_2 + 0x1e8) = 0;
  }
  return;
}

// Unwind@180422500
void Unwind_180422500(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x228);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f0));
    *(uint64_t *)(param_2 + 0x228) = 0;
  }
  return;
}

// Unwind@180422570
void Unwind_180422570(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x268);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x230));
    *(uint64_t *)(param_2 + 0x268) = 0;
  }
  return;
}

// Unwind@1804225e0
void Unwind_1804225e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2a8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x270));
    *(uint64_t *)(param_2 + 0x2a8) = 0;
  }
  return;
}

// Unwind@180422650
void Unwind_180422650(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  return;
}

// Unwind@1804226a0
void Unwind_1804226a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  *(uint8_t *)(param_2 + 0x337) = 0;
  return;
}
