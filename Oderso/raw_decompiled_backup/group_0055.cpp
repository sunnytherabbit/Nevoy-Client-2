#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1804d29a0
void Unwind_1804d29a0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 400);
  return;
}

// Unwind@1804d29f0
void Unwind_1804d29f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x280);
  return;
}

// Unwind@1804d2a40
void Unwind_1804d2a40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  return;
}

// Unwind@1804d2a90
void Unwind_1804d2a90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x228);
  return;
}

// Unwind@1804d2ae0
void Unwind_1804d2ae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1e0);
  return;
}

// Unwind@1804d2b30
void Unwind_1804d2b30(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x1e0);
  return;
}

// Unwind@1804d2b80
void Unwind_1804d2b80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x280);
  return;
}

// Unwind@1804d2bd0
void Unwind_1804d2bd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  return;
}

// Unwind@1804d2c20
void Unwind_1804d2c20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x280);
  return;
}

// Unwind@1804d2c70
void Unwind_1804d2c70(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x180);
  func_0x18001deb0(param_2 + 0x1c0);
  func_0x18001deb0(param_2 + 0x1d0);
  func_0x1800565c0(param_2 + 0x250);
  func_0x180001e70(param_2 + 0x140);
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1804d2d00
void Unwind_1804d2d00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x280);
  return;
}

// Unwind@1804d2d50
void Unwind_1804d2d50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x280);
  return;
}

// func_0x1804d2da0
int64_t func_0x1804d2da0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16a38) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x16a38) = 1;
    *(uint32_t *)(lVal_1 + 0x16a30) = 0x581df3d8;
    *(uint16_t *)(lVal_1 + 0x16a34) = 0x189;
    func_0x180673140(&LAB_1804fc350);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16a30;
}

// func_0x1804d2e20
void func_0x1804d2e20(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 5) == '\x01') {
    *param_1 = *param_1 ^ 0x377b9db1;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x89;
    *(uint8_t *)((int64_t)param_1 + 5) = 0;
  }
  return;
}

// func_0x1804d2e40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1804d2e40(void)
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
  uint8_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806d531d;
  uStack_24 = _UNK_1806d5321;
  uStack_20 = _UNK_1806d5325;
  uStack_1c = _UNK_1806d5329;
  local_38 = _DAT_1806d530d;
  uStack_34 = _UNK_1806d5311;
  uStack_30 = _UNK_1806d5315;
  uStack_2c = _UNK_1806d5319;
  local_18 = 0x19;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16ae4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x16ae4) = 1;
    func_0x180086ce0(lVal_1 + 0x16ac1,&local_38);
    func_0x180673140(&LAB_1804fc3e0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16ac1;
}

// Unwind@1804d2ef0
void Unwind_1804d2ef0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16ae4) = 0;
  return;
}

// func_0x1804d2f20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1804d2f20(void)
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
  uStack_28 = _UNK_1806d533e;
  uStack_24 = _UNK_1806d5342;
  uStack_20 = _UNK_1806d5346;
  local_38 = _DAT_1806d532e;
  uStack_34 = _UNK_1806d5332;
  uStack_30 = _UNK_1806d5336;
  local_2c = _DAT_1806d533a;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16b04) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x16b04) = 1;
    func_0x18008fba0(lVal_1 + 0x16ae5,&local_38);
    func_0x180673140(&LAB_1804fc410);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16ae5;
}

// Unwind@1804d2fc0
void Unwind_1804d2fc0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16b04) = 0;
  return;
}

// func_0x1804d2ff0
int64_t func_0x1804d2ff0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16b24) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x16b24) = 1;
    *(uint8_t *)(lVal_1 + 0x16b20) = 1;
    *(uint64_t *)(lVal_1 + 0x16b18) = 0x939030d4b9914064;
    func_0x180673140(&LAB_1804fc470);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16b18;
}

// func_0x1804d3070
void func_0x1804d3070(uint64_t *param_1)
{
  if (*(char *)(param_1 + 1) == '\x01') {
    *param_1 = *param_1 ^ 0x93e357bddfff2f27;
    *(uint8_t *)(param_1 + 1) = 0;
  }
  return;
}

// func_0x1804d3090
int64_t func_0x1804d3090(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16b34) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x16b34) = 1;
    *(uint8_t *)(lVal_1 + 0x16b30) = 1;
    *(uint64_t *)(lVal_1 + 0x16b28) = 0xabacbccc11f74c7c;
    func_0x180673140(&LAB_1804fc490);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16b28;
}

// func_0x1804d3110
void func_0x1804d3110(uint64_t *param_1)
{
  if (*(char *)(param_1 + 1) == '\x01') {
    *param_1 = *param_1 ^ 0xabdfdba57799233f;
    *(uint8_t *)(param_1 + 1) = 0;
  }
  return;
}

// func_0x1804d3130
uint64_t func_0x1804d3130(uint64_t param_1,uint64_t *param_2)
{
  func_ptr_t fnPtr_1;
  uint32_t uVal_2;
  uint64_t uVal_3;
  uint8_t auStack_48 [40];
  uint64_t *local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  local_18 = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  local_20 = param_2;
  uVal_2 = func_0x180678230();
  func_0x1800a6340(param_1,uVal_2,&local_20);
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_48)) {
    return param_1;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_48);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_3 = (*fnPtr_1)();
  return uVal_3;
}

// func_0x1804d31a0
uint8_t (*func_0x1804d31a0(uint8_t (*param_1)[16],uint64_t param_2))[16]
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint8_t (*pArr16_3)[16];
  
  *param_1 = ZEXT816(0);
  iVal_2 = func_0x180087380(0,param_2,0);
  if (iVal_2 == 0) {
    return param_1;
  }
  func_0x180087670("directory_iterator::directory_iterator",iVal_2,param_2);
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_3 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_3;
}

// Unwind@1804d31f0
void Unwind_1804d31f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x1804d3210
uint8_t (*func_0x1804d3210(uint8_t (*param_1)[16],int64_t param_2))[16]
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  
  *param_1 = ZEXT816(0);
  pLong_3 = *(int64_t **)(param_2 + 8);
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
  return param_1;
}

// func_0x1804d3250
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1804d3250(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806d534a;
  uStack_24 = _UNK_1806d534e;
  uStack_20 = _UNK_1806d5352;
  uStack_1c = CONCAT13(0x7a,(int3)_UNK_1806d5356);
  uStack_18 = CONCAT13(uStack_18._3_1_,0x9343a9);
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16b60) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x16b60) = 1;
    func_0x18007cb80(lVal_1 + 0x16b49,&local_28);
    func_0x180673140(&LAB_1804fc510);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16b49;
}

// Unwind@1804d32f0
void Unwind_1804d32f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16b60) = 0;
  return;
}

// func_0x1804d3320
void func_0x1804d3320(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint32_t *param_4, int64_t **param_5)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  int64_t *pLong_6;
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  int64_t **local_68;
  int64_t *local_60;
  int64_t local_58 [3];
  uint64_t local_40;
  uint64_t local_38;
  uint32_t *local_30;
  uint64_t *local_28;
  uint64_t local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  local_60 = param_5[2];
  local_68 = param_5;
  if (&DAT_0000000f < param_5[3]) {
    local_68 = (int64_t **)*param_5;
  }
  local_38 = 0xddd;
  local_30 = &local_88;
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
      if (0x1f < (uint64_t)((local_58[0] + -8) - lVal_4)) goto LAB_1804d3434;
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
LAB_1804d3434:
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

// Unwind@1804d3440
void Unwind_1804d3440(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1804d3470
void Unwind_1804d3470(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xd0));
  return;
}

// func_0x1804d34a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1804d34a0(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806d535d;
  uStack_24 = _UNK_1806d5361;
  uStack_20 = _UNK_1806d5365;
  uStack_1c = _UNK_1806d5369;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16b74) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x16b74) = 1;
    func_0x18007d150(lVal_1 + 0x16b61,&local_28);
    func_0x180673140(&LAB_1804fc540);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16b61;
}

// Unwind@1804d3540
void Unwind_1804d3540(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16b74) = 0;
  return;
}

// func_0x1804d3570
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804d3570(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c3df4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c3df0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c3df8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c3dfc;
    *param_1 = auArr_1;
    param_1[1][0] = 0;
  }
  return;
}

// func_0x1804d3590
int64_t func_0x1804d3590(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16b80) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x16b80) = 1;
    *(uint64_t *)(lVal_1 + 0x16b78) = 0x1594e2ca4239e45;
    func_0x180673140(&LAB_1804fc560);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16b78;
}

// func_0x1804d3610
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804d3610(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 7) == '\x01') {
    *param_1 = (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 5) << 8,*(uint32_t *)param_1) |
               (uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20) ^ SUB168(_DAT_1806be6e0,0);
  }
  return;
}

// func_0x1804d3650
void func_0x1804d3650(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint32_t *param_4, int64_t **param_5,uint32_t *param_6,uint32_t *param_7,int64_t **param_8)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  int64_t *pLong_6;
  uint32_t local_c0;
  uint32_t uStack_bc;
  uint32_t uStack_b8;
  uint32_t uStack_b4;
  uint32_t local_b0;
  uint32_t uStack_ac;
  uint32_t uStack_a8;
  uint32_t uStack_a4;
  int64_t **local_a0;
  int64_t *local_98;
  uint32_t local_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  uint32_t uStack_84;
  uint32_t local_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  int64_t **local_70;
  int64_t *local_68;
  int64_t local_60 [3];
  uint64_t local_48;
  uint64_t local_40;
  uint32_t *local_38;
  uint64_t *local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_c0 = *param_3;
  uStack_bc = param_3[1];
  uStack_b8 = param_3[2];
  uStack_b4 = param_3[3];
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  local_98 = param_5[2];
  local_a0 = param_5;
  if (&DAT_0000000f < param_5[3]) {
    local_a0 = (int64_t **)*param_5;
  }
  local_90 = *param_6;
  uStack_8c = param_6[1];
  uStack_88 = param_6[2];
  uStack_84 = param_6[3];
  local_80 = *param_7;
  uStack_7c = param_7[1];
  uStack_78 = param_7[2];
  uStack_74 = param_7[3];
  local_68 = param_8[2];
  local_70 = param_8;
  if (&DAT_0000000f < param_8[3]) {
    local_70 = (int64_t **)*param_8;
  }
  local_40 = 0xdddddd;
  local_38 = &local_c0;
  local_30 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_30 = (uint64_t *)*param_2;
  }
  local_28 = param_2[2];
  func_0x18063ff10(local_60,&local_30,&local_40);
  func_0x180116b80(param_1,local_60);
  if (0xf < local_48) {
    uVal_3 = local_48 + 1;
    lVal_4 = local_60[0];
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(local_60[0] + -8);
      if (0x1f < (uint64_t)((local_60[0] + -8) - lVal_4)) goto LAB_1804d3801;
      uVal_3 = local_48 + 0x28;
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
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_5))) goto LAB_1804d3801;
      pLong_6 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_5,pLong_6);
  }
  param_5[2] = (int64_t *)0x0;
  param_5[3] = (int64_t *)&DAT_0000000f;
  *(uint8_t *)param_5 = 0;
  pLong_1 = param_8[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *param_8;
    pLong_6 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_5 = pLong_2;
    if ((int64_t *)0xfff < pLong_6) {
      pLong_5 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_5))) {
LAB_1804d3801:
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

// Unwind@1804d3810
void Unwind_1804d3810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x88);
  return;
}

// Unwind@1804d3840
void Unwind_1804d3840(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x110));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x128));
  return;
}

// func_0x1804d3880
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1804d3880(void)
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
  uStack_28 = UNK_1806d537d;
  uStack_27 = _UNK_1806d537e;
  uStack_23 = _UNK_1806d5382;
  local_38 = _DAT_1806d536d;
  uStack_34 = _UNK_1806d5371;
  uStack_30 = _UNK_1806d5375;
  uStack_2c = _UNK_1806d5379;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16b9c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x16b9c) = 1;
    func_0x1800904a0(lVal_1 + 0x16b81,&local_38);
    func_0x180673140(&LAB_1804fc590);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16b81;
}

// Unwind@1804d3920
void Unwind_1804d3920(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16b9c) = 0;
  return;
}

// Unwind@1804d6300
void Unwind_1804d6300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1804d6350
void Unwind_1804d6350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1804d63a0
void Unwind_1804d63a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1804d63f0
void Unwind_1804d63f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1804d6440
void Unwind_1804d6440(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1804d6490
void Unwind_1804d6490(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1804d64e0
void Unwind_1804d64e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1804d6530
void Unwind_1804d6530(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1804d6580
void Unwind_1804d6580(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1804d65d0
void Unwind_1804d65d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1804d6620
void Unwind_1804d6620(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1804d6670
void Unwind_1804d6670(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  func_0x180037f80(*(uint64_t *)(param_2 + 0x148));
  return;
}

// Unwind@1804d66c0
void Unwind_1804d66c0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x80);
  func_0x1800565c0(param_2 + 0x90);
  return;
}

// Unwind@1804d6710
void Unwind_1804d6710(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1804d6750
void Unwind_1804d6750(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1804d6790
void Unwind_1804d6790(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@1804d67e0
void Unwind_1804d67e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1804d6820
void Unwind_1804d6820(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1804d6860
void Unwind_1804d6860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1804d68a0
void Unwind_1804d68a0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x40);
  func_0x18001deb0(param_2 + 0x70);
  func_0x18001deb0(param_2 + 0x80);
  func_0x1800565c0(param_2 + 0x90);
  func_0x180001e70(param_2 + 0xb0);
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1804d6910
void Unwind_1804d6910(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@1804d6960
void Unwind_1804d6960(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(*(uint64_t *)(param_2 + 0x148));
  return;
}

// Unwind@1804d69b0
void Unwind_1804d69b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0xf0);
  return;
}

// Unwind@1804d69f0
void Unwind_1804d69f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1804d6a30
void Unwind_1804d6a30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// func_0x1804d6b70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1804d6b70(uint64_t *param_1)
{
  uint64_t *pU64_1;
  char *_Str;
  uint *_Str_00;
  uint64_t *pU64_2;
  size_t sz_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [24];
  uint64_t *local_60;
  uint8_t local_58 [16];
  size_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16c78) == '\0') {
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_5 + 0x16c78) = 1;
    *(uint64_t *)(lVal_5 + 0x16c70) = 0x151dcbc7996ba94;
    func_0x180673140(&LAB_1804fc860);
  }
  lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_5 + 0x16c70);
  if (*(char *)(lVal_5 + 0x16c77) == '\x01') {
    *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_5 + 0x16c75) << 8,*(uint32_t *)pU64_1) |
              (uint64_t)*(byte *)(lVal_5 + 0x16c74) << 0x20) ^ SUB168(_DAT_1806b69a0,0);
  }
  local_58 = (uint8_t  [16])0x0;
  sz_3 = strlen((char *)pU64_1);
  if ((int64_t)sz_3 < 0) {
    func_0x18007ba70();
LAB_1804d71aa:
    func_0x18007ba70();
LAB_1804d71b0:
    func_0x18007ba70();
  }
  else {
    if (sz_3 < 0x10) {
      pU64_6 = local_58;
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
      local_58._0_8_ = pU64_6;
    }
    local_48 = sz_3;
    local_40 = uVal_7;
    func_0x1806aa960(pU64_6,pU64_1,sz_3);
    pU64_6[sz_3] = 0;
    local_88._8_8_ = _UNK_1806d538e;
    local_88._0_8_ = _DAT_1806d5386;
    local_78._0_8_ = 0xb22e4b16897b0ab;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x16c94) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x16c94) = 1;
      func_0x18007d9e0(lVal_5 + 0x16c79,local_88);
      func_0x180673140(&LAB_1804fc890);
    }
    _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x16c79);
    func_0x1801c0df0(_Str);
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_3 = strlen(_Str);
    if ((int64_t)sz_3 < 0) goto LAB_1804d71aa;
    if (sz_3 < 0x10) {
      pU64_6 = local_a8;
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
      local_a8._0_8_ = pU64_6;
    }
    local_98._8_8_ = uVal_7;
    local_98._0_8_ = sz_3;
    func_0x1806aa960(pU64_6,_Str,sz_3);
    pU64_6[sz_3] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x16ca0) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x16ca0) = 1;
      *(uint64_t *)(lVal_5 + 0x16c98) = 0x151f2a17b96b6ac;
      func_0x180673140(&LAB_1804fc8c0);
    }
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_5 + 0x16c98);
    if (*(char *)(lVal_5 + 0x16c9f) == '\x01') {
      *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_5 + 0x16c9d) << 8,*(uint32_t *)pU64_1) |
                (uint64_t)*(byte *)(lVal_5 + 0x16c9c) << 0x20) ^ SUB168(_DAT_1806b69a0,0);
    }
    local_78._0_16_ = (uint8_t  [16])0x0;
    local_88 = (uint8_t  [16])0x0;
    sz_3 = strlen((char *)pU64_1);
    if ((int64_t)sz_3 < 0) goto LAB_1804d71b0;
    if (sz_3 < 0x10) {
      pU64_6 = local_88;
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
      local_88._0_8_ = pU64_6;
    }
    local_78._8_8_ = uVal_7;
    local_78._0_8_ = sz_3;
    func_0x1806aa960(pU64_6,pU64_1,sz_3);
    pU64_6[sz_3] = 0;
    pU64_6 = local_58;
    func_0x1804c9aa0(param_1,local_88,local_a8,pU64_6);
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_7 = local_78._8_8_ + 1;
      lVal_5 = local_88._0_8_;
      if (0xfff < uVal_7) {
        lVal_5 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_5)) goto LAB_1804d71bc;
        uVal_7 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_7);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_7 = local_98._8_8_ + 1;
      lVal_5 = local_a8._0_8_;
      if (0xfff < uVal_7) {
        lVal_5 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_5)) goto LAB_1804d71bc;
        uVal_7 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_7);
    }
    if (0xf < local_40) {
      uVal_7 = local_40 + 1;
      lVal_5 = local_58._0_8_;
      if (0xfff < uVal_7) {
        lVal_5 = *(int64_t *)(local_58._0_8_ + -8);
        if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_5)) goto LAB_1804d71bc;
        uVal_7 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_7);
    }
    *param_1 = &PTR_LAB_1806cfe20;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x16cac) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x16cac) = 1;
      *(uint8_t *)(lVal_5 + 0x16ca8) = 1;
      *(uint32_t *)(lVal_5 + 0x16ca4) = 0xa9827605;
      func_0x180673140(&LAB_1804fc8f0);
    }
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint *)(lVal_5 + 0x16ca4);
    if (*(char *)(lVal_5 + 0x16ca8) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0xa9f11975;
      *(uint8_t *)(lVal_5 + 0x16ca8) = 0;
    }
    local_58 = (uint8_t  [16])0x0;
    sz_3 = strlen((char *)_Str_00);
    local_60 = param_1;
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
        local_58._0_8_ = pU64_6;
      }
      pU64_2 = local_60;
      local_48 = sz_3;
      local_40 = uVal_7;
      func_0x1806aa960(pU64_6,_Str_00,sz_3);
      pU64_6[sz_3] = 0;
      func_0x180084770(pU64_2 + 0xd,local_58);
      pU64_2 = local_60;
      if (0xf < local_40) {
        uVal_7 = local_40 + 1;
        lVal_5 = local_58._0_8_;
        if (0xfff < uVal_7) {
          lVal_5 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_5)) goto LAB_1804d71bc;
          uVal_7 = local_40 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_7);
      }
      return pU64_2;
    }
  }
  func_0x18007ba70();
LAB_1804d71bc:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1804d71c0
void Unwind_1804d71c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1804d71f0
void Unwind_1804d71f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1804d7220
void Unwind_1804d7220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1804d7250
void Unwind_1804d7250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1804d7280
void Unwind_1804d7280(uint64_t param_1,int64_t param_2)
{
  func_0x1804c9cc0(*(uint64_t *)(param_2 + 0x68));
  return;
}

// Unwind@1804d72b0
void Unwind_1804d72b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16c94) = 0;
  return;
}

// Unwind@1804d7b90
void Unwind_1804d7b90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1804d7bf0
void Unwind_1804d7bf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1804d7c50
void Unwind_1804d7c50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1804d7cb0
void Unwind_1804d7cb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1804d7d10
void Unwind_1804d7d10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16cd0) = 0;
  return;
}

// Unwind@1804d7d80
void Unwind_1804d7d80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16cf8) = 0;
  return;
}

// Unwind@1804d7df0
void Unwind_1804d7df0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16d1c) = 0;
  return;
}

// Unwind@1804d7e60
void Unwind_1804d7e60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// func_0x1804d7ec0
void func_0x1804d7ec0(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6)
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
  local_40 = 0x999d;
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

// Unwind@1804d7fa0
void Unwind_1804d7fa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// Unwind@1804d84b0
void Unwind_1804d84b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  func_0x180037f80(*(uint64_t *)(param_2 + 0x48));
  return;
}

// Unwind@1804d84f0
void Unwind_1804d84f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// func_0x1804d8520
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1804d8520(uint64_t *param_1)
{
  char *fnPtr_1;
  uint *_Str;
  int64_t lVal_2;
  size_t sz_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint8_t *pU64_6;
  uint32_t *pU64_7;
  uint64_t uVal_8;
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  undefined3 uStack_78;
  uint32_t uStack_75;
  uint32_t uStack_71;
  uint32_t uStack_6d;
  uint8_t uStack_69;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint8_t local_58 [8];
  uint64_t uStack_50;
  uint8_t local_48;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_58._4_4_ = _UNK_1806d540a;
  local_58._0_4_ = _DAT_1806d5406;
  uStack_50._0_4_ = _UNK_1806d540e;
  uStack_50._4_4_ = _UNK_1806d5412;
  local_68._4_4_ = _UNK_1806d53fa;
  local_68._0_4_ = _DAT_1806d53f6;
  uStack_60._0_4_ = _UNK_1806d53fe;
  uStack_60._4_4_ = _UNK_1806d5402;
  local_48 = 0x73;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16d58) == '\0') {
    lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_4 + 0x16d58) = 1;
    func_0x180086ce0(lVal_4 + 0x16d35,local_68);
    func_0x180673140(&LAB_1804fca30);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x16d35);
  func_0x1800f3620(fnPtr_1);
  _local_58 = ZEXT816(0);
  _local_68 = ZEXT816(0);
  sz_3 = strlen(fnPtr_1);
  if ((int64_t)sz_3 < 0) {
    func_0x18007ba70();
LAB_1804d89b3:
    func_0x18007ba70();
  }
  else {
    if (sz_3 < 0x10) {
      pU64_6 = local_68;
      uVal_8 = 0xf;
    }
    else {
      uVal_5 = sz_3 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_5) {
        uVal_8 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        pU64_6 = (uint8_t *)func_0x180672de0(uVal_8 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_8 + 0x28);
        pU64_6 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_6 + -8) = lVal_4;
      }
      local_68 = (uint8_t  [8])pU64_6;
    }
    uStack_50 = uVal_8;
    local_58 = (uint8_t  [8])sz_3;
    func_0x1806aa960(pU64_6,fnPtr_1,sz_3);
    pU64_6[sz_3] = 0;
    uStack_78 = _UNK_1806d5427;
    uStack_75 = _UNK_1806d542a;
    uStack_71 = _UNK_1806d542e;
    uStack_6d = _UNK_1806d5432;
    local_88 = _DAT_1806d5417;
    uStack_84 = _UNK_1806d541b;
    uStack_80 = _UNK_1806d541f;
    uStack_7c = _UNK_1806d5423;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x16d7c) == '\0') {
      lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_4 + 0x16d7c) = 1;
      func_0x18007ce20(lVal_4 + 0x16d59,&local_88);
      func_0x180673140(&LAB_1804fca60);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x16d59);
    func_0x1802e48b0(fnPtr_1);
    local_98 = ZEXT816(0);
    local_a8 = ZEXT816(0);
    sz_3 = strlen(fnPtr_1);
    if ((int64_t)sz_3 < 0) goto LAB_1804d89b3;
    if (sz_3 < 0x10) {
      pU64_6 = local_a8;
      uVal_8 = 0xf;
    }
    else {
      uVal_5 = sz_3 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_5) {
        uVal_8 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        pU64_6 = (uint8_t *)func_0x180672de0(uVal_8 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_8 + 0x28);
        pU64_6 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_6 + -8) = lVal_4;
      }
      local_a8._0_8_ = pU64_6;
    }
    local_98._8_8_ = uVal_8;
    local_98._0_8_ = sz_3;
    func_0x1806aa960(pU64_6,fnPtr_1,sz_3);
    pU64_6[sz_3] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x16d88) == '\0') {
      lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_4 + 0x16d88) = 1;
      *(uint8_t *)(lVal_4 + 0x16d86) = 1;
      *(uint32_t *)(lVal_4 + 0x16d80) = 0xa0192a17;
      *(uint16_t *)(lVal_4 + 0x16d84) = 0xb3d4;
      func_0x180673140(&LAB_1804fca90);
    }
    lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_4 + 0x16d80);
    if (*(char *)(lVal_4 + 0x16d86) == '\x01') {
      *_Str = *_Str ^ 0xc77d4573;
      *(byte *)(lVal_4 + 0x16d84) = *(byte *)(lVal_4 + 0x16d84) ^ 0xb1;
      *(byte *)(lVal_4 + 0x16d85) = *(byte *)(lVal_4 + 0x16d85) ^ 0xb3;
      *(uint8_t *)(lVal_4 + 0x16d86) = 0;
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    sz_3 = strlen((char *)_Str);
    if (-1 < (int64_t)sz_3) {
      if (sz_3 < 0x10) {
        pU64_7 = &local_88;
        uVal_8 = 0xf;
      }
      else {
        uVal_5 = sz_3 | 0xf;
        uVal_8 = 0x16;
        if (0x16 < uVal_5) {
          uVal_8 = uVal_5;
        }
        if (uVal_5 < 0xfff) {
          pU64_7 = (uint32_t *)func_0x180672de0(uVal_8 + 1);
        }
        else {
          lVal_4 = func_0x180672de0(uVal_8 + 0x28);
          pU64_7 = (uint32_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_7 + -2) = lVal_4;
        }
        local_88 = SUB84(pU64_7,0);
        uStack_84 = (uint32_t)((uint64_t)pU64_7 >> 0x20);
      }
      uStack_78 = (undefined3)sz_3;
      uStack_75 = (uint32_t)(sz_3 >> 0x18);
      uStack_71._0_1_ = (uint8_t)(sz_3 >> 0x38);
      uStack_71._1_3_ = (undefined3)uVal_8;
      uStack_6d = (uint32_t)(uVal_8 >> 0x18);
      uStack_69 = (uint8_t)(uVal_8 >> 0x38);
      func_0x1806aa960(pU64_7,_Str,sz_3);
      *(uint8_t *)((int64_t)pU64_7 + sz_3) = 0;
      func_0x1804c9aa0(param_1,&local_88,local_a8,local_68);
      uVal_8 = CONCAT17(uStack_69,CONCAT43(uStack_6d,uStack_71._1_3_));
      if (0xf < uVal_8) {
        lVal_2 = CONCAT44(uStack_84,local_88);
        uVal_5 = uVal_8 + 1;
        lVal_4 = lVal_2;
        if (0xfff < uVal_5) {
          lVal_4 = *(int64_t *)(lVal_2 + -8);
          if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1804d89bf;
          uVal_5 = uVal_8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_4,uVal_5);
      }
      if (0xf < (uint64_t)local_98._8_8_) {
        uVal_8 = local_98._8_8_ + 1;
        lVal_4 = local_a8._0_8_;
        if (0xfff < uVal_8) {
          lVal_4 = *(int64_t *)(local_a8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_4)) goto LAB_1804d89bf;
          uVal_8 = local_98._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_4,uVal_8);
      }
      if (0xf < uStack_50) {
        uVal_8 = uStack_50 + 1;
        lVal_4 = (int64_t)local_68;
        if (0xfff < uVal_8) {
          lVal_4 = *(int64_t *)((int64_t)local_68 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_68 + -8) - lVal_4)) goto LAB_1804d89bf;
          uVal_8 = uStack_50 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_4,uVal_8);
      }
      *param_1 = &PTR_LAB_1806cfe60;
      return param_1;
    }
  }
  func_0x18007ba70();
LAB_1804d89bf:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1804d89d0
void Unwind_1804d89d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1804d8a00
void Unwind_1804d8a00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1804d8a30
void Unwind_1804d8a30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1804d8a60
void Unwind_1804d8a60(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16d58) = 0;
  return;
}

// Unwind@1804d8aa0
void Unwind_1804d8aa0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16d7c) = 0;
  return;
}

// Unwind@1804db000
void Unwind_1804db000(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  return;
}

// Unwind@1804db050
void Unwind_1804db050(void)
{
  func_0x180672f60(&DAT_180841760);
  return;
}

// Unwind@1804db0a0
void Unwind_1804db0a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2b7) = 0;
  return;
}

// Unwind@1804db100
void Unwind_1804db100(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x2b7) == '\x01') {
    func_0x180001e70(param_2 + 0xa0);
  }
  return;
}

// Unwind@1804db160
void Unwind_1804db160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2b6) = 0;
  return;
}

// Unwind@1804db1c0
void Unwind_1804db1c0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x2b6) == '\x01') {
    func_0x180001e70(param_2 + 0xc0);
  }
  return;
}

// Unwind@1804db220
void Unwind_1804db220(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1804db250
void Unwind_1804db250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  return;
}

// Unwind@1804db2a0
void Unwind_1804db2a0(uint64_t param_1,int64_t param_2)
{
  func_0x1800bffd0(param_2 + 0x160);
  return;
}

// Unwind@1804db2f0
void Unwind_1804db2f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1804db340
void Unwind_1804db340(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  *(uint8_t *)(param_2 + 0x2b3) = 0;
  return;
}

// Unwind@1804db3a0
void Unwind_1804db3a0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x2b3) == '\x01') {
    func_0x180001e70(param_2 + 0xe0);
  }
  return;
}

// Unwind@1804db400
void Unwind_1804db400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  return;
}

// Unwind@1804db450
void Unwind_1804db450(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2b5) = 0;
  return;
}

// Unwind@1804db4b0
void Unwind_1804db4b0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x2b5) == '\x01') {
    func_0x180001e70(param_2 + 0x100);
  }
  return;
}

// Unwind@1804db510
void Unwind_1804db510(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2b4) = 0;
  return;
}

// Unwind@1804db570
void Unwind_1804db570(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x2b4) == '\x01') {
    func_0x180001e70(param_2 + 0x120);
  }
  return;
}

// Unwind@1804db5d0
void Unwind_1804db5d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1804db600
void Unwind_1804db600(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  return;
}

// Unwind@1804db650
void Unwind_1804db650(uint64_t param_1,int64_t param_2)
{
  func_0x1800bffd0(param_2 + 0x160);
  return;
}

// Unwind@1804db6a0
void Unwind_1804db6a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  return;
}

// Unwind@1804db6f0
void Unwind_1804db6f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16db0) = 0;
  *(uint8_t *)(param_2 + 0x2b7) = 1;
  return;
}

// Unwind@1804db760
void Unwind_1804db760(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16dc8) = 0;
  *(uint8_t *)(param_2 + 0x2b6) = 1;
  return;
}

// Unwind@1804db7d0
void Unwind_1804db7d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16dec) = 0;
  return;
}

// Unwind@1804db830
void Unwind_1804db830(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16e2c) = 0;
  *(uint8_t *)(param_2 + 0x2b5) = 1;
  return;
}

// Unwind@1804db8a0
void Unwind_1804db8a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16e48) = 0;
  *(uint8_t *)(param_2 + 0x2b4) = 1;
  return;
}

// Unwind@1804db910
void Unwind_1804db910(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16e68) = 0;
  return;
}

// Unwind@1804db970
void Unwind_1804db970(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1804db9c0
void Unwind_1804db9c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1804dccb0
void Unwind_1804dccb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1804dccf0
void Unwind_1804dccf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1804dcd30
void Unwind_1804dcd30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1804dcd70
void Unwind_1804dcd70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1804dcdb0
void Unwind_1804dcdb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  func_0x180037f80(*(uint64_t *)(param_2 + 0x78));
  return;
}

// Unwind@1804dcdf0
void Unwind_1804dcdf0(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(*(uint64_t *)(param_2 + 0x78));
  return;
}

// Unwind@1804dce30
void Unwind_1804dce30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1804dce70
void Unwind_1804dce70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1804dceb0
void Unwind_1804dceb0(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(*(uint64_t *)(param_2 + 0x78));
  return;
}

// Unwind@1804dcef0
void Unwind_1804dcef0(void)
{
  func_0x180672f60(&DAT_180841790);
  return;
}

// func_0x1804dd020
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1804dd020(uint64_t *param_1)
{
  uint64_t *pU64_1;
  char *_Str;
  uint *_Str_00;
  short sz_2;
  short sz_3;
  short sz_4;
  short sz_5;
  short sz_6;
  short sz_7;
  short sz_8;
  short sz_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint8_t auArr_12 [16];
  int64_t lVal_13;
  int64_t lVal_14;
  uint32_t uVal_15;
  uint32_t uVal_16;
  uint32_t uVal_17;
  uint64_t uVal_18;
  uint64_t *pU64_19;
  size_t sz_20;
  int64_t lVal_21;
  uint64_t uVal_22;
  int64_t lVal_23;
  uint8_t *pU64_24;
  uint64_t uVal_25;
  int64_t lVal_26;
  int64_t lVal_27;
  int64_t lVal_28;
  int64_t lVal_29;
  int64_t lVal_30;
  int64_t lVal_31;
  int64_t lVal_32;
  int64_t lVal_33;
  uint64_t uVal_34;
  uint64_t uVal_36;
  uint8_t auArr_35 [16];
  uint64_t uVal_37;
  uint64_t uVal_38;
  uint64_t uVal_39;
  uint64_t uVal_41;
  uint8_t auArr_40 [16];
  uint64_t uVal_42;
  uint64_t uVal_45;
  uint8_t auArr_43 [16];
  uint8_t auArr_44 [16];
  uint8_t auArr_46 [16];
  uint8_t auArr_47 [16];
  uint8_t auArr_48 [16];
  uint8_t auArr_49 [16];
  uint8_t local_138 [16];
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t local_108 [24];
  uint64_t *local_f0;
  uint8_t local_e8 [16];
  size_t local_d8;
  uint64_t local_d0;
  uint64_t local_c0;
  
  local_c0 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16ecc) == '\0') {
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_23 + 0x16ecc) = 1;
    *(uint64_t *)(lVal_23 + 0x16ec0) = 0x5625efa06590aa94;
    *(uint16_t *)(lVal_23 + 0x16ec8) = 0x1cf;
    func_0x180673140(&LAB_1804fcdf0);
  }
  lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_23 + 0x16ec0);
  if (*(char *)(lVal_23 + 0x16ec9) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0xb5181c509f9d9cf;
    *(byte *)(lVal_23 + 0x16ec8) = *(byte *)(lVal_23 + 0x16ec8) ^ 0xcf;
    *(uint8_t *)(lVal_23 + 0x16ec9) = 0;
  }
  local_e8 = (uint8_t  [16])0x0;
  sz_20 = strlen((char *)pU64_1);
  if ((int64_t)sz_20 < 0) {
    func_0x18007ba70();
LAB_1804dd861:
    func_0x18007ba70();
LAB_1804dd867:
    func_0x18007ba70();
  }
  else {
    if (sz_20 < 0x10) {
      pU64_24 = local_e8;
      uVal_25 = 0xf;
    }
    else {
      uVal_22 = sz_20 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_22) {
        uVal_25 = uVal_22;
      }
      if (uVal_22 < 0xfff) {
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        lVal_23 = func_0x180672de0(uVal_25 + 0x28);
        pU64_24 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_23;
      }
      local_e8._0_8_ = pU64_24;
    }
    local_d8 = sz_20;
    local_d0 = uVal_25;
    func_0x1806aa960(pU64_24,pU64_1,sz_20);
    pU64_24[sz_20] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x16f2c) == '\0') {
      lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_23 + 0x16f2c) = 1;
      *(uint8_t *)(lVal_23 + 0x16f2a) = 1;
      uVal_17 = _UNK_1806d54bc;
      uVal_16 = _UNK_1806d54b8;
      uVal_15 = _UNK_1806d54b4;
      *(uint32_t *)(lVal_23 + 0x16ecd) = _DAT_1806d54b0;
      *(uint32_t *)(lVal_23 + 0x16ed1) = uVal_15;
      *(uint32_t *)(lVal_23 + 0x16ed5) = uVal_16;
      *(uint32_t *)(lVal_23 + 0x16ed9) = uVal_17;
      uVal_17 = _UNK_1806d54cc;
      uVal_16 = _UNK_1806d54c8;
      uVal_15 = _UNK_1806d54c4;
      *(uint32_t *)(lVal_23 + 0x16edd) = _DAT_1806d54c0;
      *(uint32_t *)(lVal_23 + 0x16ee1) = uVal_15;
      *(uint32_t *)(lVal_23 + 0x16ee5) = uVal_16;
      *(uint32_t *)(lVal_23 + 0x16ee9) = uVal_17;
      uVal_17 = _UNK_1806d54dc;
      uVal_16 = _UNK_1806d54d8;
      uVal_15 = _UNK_1806d54d4;
      *(uint32_t *)(lVal_23 + 0x16eed) = _DAT_1806d54d0;
      *(uint32_t *)(lVal_23 + 0x16ef1) = uVal_15;
      *(uint32_t *)(lVal_23 + 0x16ef5) = uVal_16;
      *(uint32_t *)(lVal_23 + 0x16ef9) = uVal_17;
      uVal_17 = _UNK_1806d54ec;
      uVal_16 = _UNK_1806d54e8;
      uVal_15 = _UNK_1806d54e4;
      *(uint32_t *)(lVal_23 + 0x16efd) = _DAT_1806d54e0;
      *(uint32_t *)(lVal_23 + 0x16f01) = uVal_15;
      *(uint32_t *)(lVal_23 + 0x16f05) = uVal_16;
      *(uint32_t *)(lVal_23 + 0x16f09) = uVal_17;
      uVal_17 = _UNK_1806d54fc;
      uVal_16 = _UNK_1806d54f8;
      uVal_15 = _UNK_1806d54f4;
      *(uint32_t *)(lVal_23 + 0x16f0d) = _DAT_1806d54f0;
      *(uint32_t *)(lVal_23 + 0x16f11) = uVal_15;
      *(uint32_t *)(lVal_23 + 0x16f15) = uVal_16;
      *(uint32_t *)(lVal_23 + 0x16f19) = uVal_17;
      uVal_18 = _UNK_1806d5505;
      *(uint64_t *)(lVal_23 + 0x16f1a) = CONCAT53(_UNK_1806d5500,_DAT_1806d54fd);
      *(uint64_t *)(lVal_23 + 0x16f22) = uVal_18;
      func_0x180673140(&LAB_1804fce20);
    }
    lVal_14 = _UNK_1806bb038;
    lVal_13 = _DAT_1806bb030;
    auArr_12 = _DAT_1806bb020;
    uVal_11 = _UNK_1806bb018;
    uVal_10 = _DAT_1806bb010;
    uVal_22 = _UNK_1806b2c98;
    uVal_25 = _DAT_1806b2c90;
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (char *)(lVal_23 + 0x16ecd);
    if (*(char *)(lVal_23 + 0x16f2a) == '\x01') {
      lVal_21 = 0;
      lVal_26 = _DAT_1806bafe0;
      lVal_27 = _UNK_1806bafe8;
      lVal_28 = _DAT_1806baff0;
      lVal_29 = _UNK_1806baff8;
      lVal_30 = _DAT_1806bb000;
      lVal_31 = _UNK_1806bb008;
      lVal_32 = _DAT_1806aeb30;
      lVal_33 = _UNK_1806aeb38;
      do {
        uVal_37 = lVal_32 << 3 & uVal_10;
        uVal_38 = lVal_33 << 3 & uVal_11;
        uVal_42 = lVal_30 << 3 & uVal_10;
        uVal_45 = lVal_31 << 3 & uVal_11;
        uVal_39 = lVal_28 << 3 & uVal_10;
        uVal_41 = lVal_29 << 3 & uVal_11;
        uVal_34 = lVal_26 << 3 & uVal_10;
        uVal_36 = lVal_27 << 3 & uVal_11;
        auArr_47._0_8_ = uVal_25 >> uVal_34;
        auArr_47._8_8_ = uVal_22 >> uVal_34;
        auArr_35._0_8_ = uVal_25 >> uVal_36;
        auArr_35._8_8_ = uVal_22 >> uVal_36;
        auArr_35 = pblendw(auArr_35,auArr_47,0xf);
        auArr_49._0_8_ = uVal_25 >> uVal_39;
        auArr_49._8_8_ = uVal_22 >> uVal_39;
        auArr_48._0_8_ = uVal_25 >> uVal_41;
        auArr_48._8_8_ = uVal_22 >> uVal_41;
        auArr_49 = pblendw(auArr_48,auArr_49,0xf);
        auArr_44._0_8_ = uVal_25 >> uVal_42;
        auArr_44._8_8_ = uVal_22 >> uVal_42;
        auArr_46._0_8_ = uVal_25 >> uVal_45;
        auArr_46._8_8_ = uVal_22 >> uVal_45;
        auArr_47 = pblendw(auArr_46,auArr_44,0xf);
        auArr_40._0_8_ = uVal_25 >> uVal_37;
        auArr_40._8_8_ = uVal_22 >> uVal_37;
        auArr_43._0_8_ = uVal_25 >> uVal_38;
        auArr_43._8_8_ = uVal_22 >> uVal_38;
        auArr_44 = pblendw(auArr_43,auArr_40,0xf);
        auArr_44 = packusdw(auArr_44 & auArr_12,auArr_47 & auArr_12);
        auArr_35 = packusdw(auArr_49 & auArr_12,auArr_35 & auArr_12);
        auArr_35 = packusdw(auArr_44,auArr_35);
        sz_2 = auArr_35._0_2_;
        sz_3 = auArr_35._2_2_;
        sz_4 = auArr_35._4_2_;
        sz_5 = auArr_35._6_2_;
        sz_6 = auArr_35._8_2_;
        sz_7 = auArr_35._10_2_;
        sz_8 = auArr_35._12_2_;
        sz_9 = auArr_35._14_2_;
        *(uint64_t *)(_Str + lVal_21) =
             *(uint64_t *)(_Str + lVal_21) ^
             CONCAT17((0 < sz_9) * (sz_9 < 0xff) * auArr_35[14] - (0xff < sz_9),
                      CONCAT16((0 < sz_8) * (sz_8 < 0xff) * auArr_35[12] - (0xff < sz_8),
                               CONCAT15((0 < sz_7) * (sz_7 < 0xff) * auArr_35[10] - (0xff < sz_7),
                                        CONCAT14((0 < sz_6) * (sz_6 < 0xff) * auArr_35[8] -
                                                 (0xff < sz_6),
                                                 CONCAT13((0 < sz_5) * (sz_5 < 0xff) * auArr_35[6]
                                                          - (0xff < sz_5),
                                                          CONCAT12((0 < sz_4) * (sz_4 < 0xff) *
                                                                   auArr_35[4] - (0xff < sz_4),
                                                                   CONCAT11((0 < sz_3) *
                                                                            (sz_3 < 0xff) *
                                                                            auArr_35[2] -
                                                                            (0xff < sz_3),
                                                                            (0 < sz_2) *
                                                                            (sz_2 < 0xff) *
                                                                            auArr_35[0] -
                                                                            (0xff < sz_2))))))));
        lVal_21 = lVal_21 + 8;
        lVal_32 = lVal_32 + lVal_13;
        lVal_33 = lVal_33 + lVal_14;
        lVal_30 = lVal_30 + lVal_13;
        lVal_31 = lVal_31 + lVal_14;
        lVal_28 = lVal_28 + lVal_13;
        lVal_29 = lVal_29 + lVal_14;
        lVal_26 = lVal_26 + lVal_13;
        lVal_27 = lVal_27 + lVal_14;
      } while (lVal_21 != 0x58);
      *(byte *)(lVal_23 + 0x16f25) = *(byte *)(lVal_23 + 0x16f25) ^ 0xcf;
      *(byte *)(lVal_23 + 0x16f26) = *(byte *)(lVal_23 + 0x16f26) ^ 0xd9;
      *(byte *)(lVal_23 + 0x16f27) = *(byte *)(lVal_23 + 0x16f27) ^ 0xf9;
      *(byte *)(lVal_23 + 0x16f28) = *(byte *)(lVal_23 + 0x16f28) ^ 9;
      *(byte *)(lVal_23 + 0x16f29) = *(byte *)(lVal_23 + 0x16f29) ^ 0xc5;
      *(uint8_t *)(lVal_23 + 0x16f2a) = 0;
    }
    local_128 = (uint8_t  [16])0x0;
    local_138 = (uint8_t  [16])0x0;
    sz_20 = strlen(_Str);
    if ((int64_t)sz_20 < 0) goto LAB_1804dd861;
    if (sz_20 < 0x10) {
      pU64_24 = local_138;
      uVal_25 = 0xf;
    }
    else {
      uVal_22 = sz_20 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_22) {
        uVal_25 = uVal_22;
      }
      if (uVal_22 < 0xfff) {
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        lVal_23 = func_0x180672de0(uVal_25 + 0x28);
        pU64_24 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_23;
      }
      local_138._0_8_ = pU64_24;
    }
    local_128._8_8_ = uVal_25;
    local_128._0_8_ = sz_20;
    func_0x1806aa960(pU64_24,_Str,sz_20);
    pU64_24[sz_20] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x16f38) == '\0') {
      lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_23 + 0x16f38) = 1;
      *(uint8_t *)(lVal_23 + 0x16f36) = 1;
      *(uint32_t *)(lVal_23 + 94000) = 0x6a9cb3aa;
      *(uint16_t *)(lVal_23 + 0x16f34) = 0x81b1;
      func_0x180673140(&LAB_1804fce70);
    }
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint *)(lVal_23 + 94000);
    if (*(char *)(lVal_23 + 0x16f36) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0x9f9d9cf;
      *(byte *)(lVal_23 + 0x16f34) = *(byte *)(lVal_23 + 0x16f34) ^ 0xc5;
      *(byte *)(lVal_23 + 0x16f35) = *(byte *)(lVal_23 + 0x16f35) ^ 0x81;
      *(uint8_t *)(lVal_23 + 0x16f36) = 0;
    }
    local_108._0_16_ = (uint8_t  [16])0x0;
    local_118 = (uint8_t  [16])0x0;
    sz_20 = strlen((char *)_Str_00);
    if ((int64_t)sz_20 < 0) goto LAB_1804dd867;
    if (sz_20 < 0x10) {
      pU64_24 = local_118;
      uVal_25 = 0xf;
    }
    else {
      uVal_22 = sz_20 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_22) {
        uVal_25 = uVal_22;
      }
      if (uVal_22 < 0xfff) {
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        lVal_23 = func_0x180672de0(uVal_25 + 0x28);
        pU64_24 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_23;
      }
      local_118._0_8_ = pU64_24;
    }
    local_108._8_8_ = uVal_25;
    local_108._0_8_ = sz_20;
    func_0x1806aa960(pU64_24,_Str_00,sz_20);
    pU64_24[sz_20] = 0;
    pU64_24 = local_e8;
    func_0x1804c9aa0(param_1,local_118,local_138,pU64_24);
    if (0xf < (uint64_t)local_108._8_8_) {
      uVal_25 = local_108._8_8_ + 1;
      lVal_23 = local_118._0_8_;
      if (0xfff < uVal_25) {
        lVal_23 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_23)) goto LAB_1804dd873;
        uVal_25 = local_108._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_25);
    }
    if (0xf < (uint64_t)local_128._8_8_) {
      uVal_25 = local_128._8_8_ + 1;
      lVal_23 = local_138._0_8_;
      if (0xfff < uVal_25) {
        lVal_23 = *(int64_t *)(local_138._0_8_ + -8);
        if (0x1f < (uint64_t)((local_138._0_8_ + -8) - lVal_23)) goto LAB_1804dd873;
        uVal_25 = local_128._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_25);
    }
    if (0xf < local_d0) {
      uVal_25 = local_d0 + 1;
      lVal_23 = local_e8._0_8_;
      if (0xfff < uVal_25) {
        lVal_23 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_23)) goto LAB_1804dd873;
        uVal_25 = local_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_25);
    }
    *param_1 = &PTR_LAB_1806cfea0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x16f4c) == '\0') {
      lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_23 + 0x16f4c) = 1;
      *(uint64_t *)(lVal_23 + 0x16f40) = 0x33f26003c7987700;
      *(uint16_t *)(lVal_23 + 0x16f48) = 0x175;
      func_0x180673140(&LAB_1804fcea0);
    }
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_23 + 0x16f40);
    if (*(char *)(lVal_23 + 0x16f49) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x47910569a9f11975;
      *(byte *)(lVal_23 + 0x16f48) = *(byte *)(lVal_23 + 0x16f48) ^ 0x75;
      *(uint8_t *)(lVal_23 + 0x16f49) = 0;
    }
    local_e8 = (uint8_t  [16])0x0;
    sz_20 = strlen((char *)pU64_1);
    local_f0 = param_1;
    if (-1 < (int64_t)sz_20) {
      uVal_25 = 0xf;
      if (0xf < sz_20) {
        uVal_22 = sz_20 | 0xf;
        uVal_25 = 0x16;
        if (0x16 < uVal_22) {
          uVal_25 = uVal_22;
        }
        if (uVal_22 < 0xfff) {
          pU64_24 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
        }
        else {
          lVal_23 = func_0x180672de0(uVal_25 + 0x28);
          pU64_24 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_24 + -8) = lVal_23;
        }
        local_e8._0_8_ = pU64_24;
      }
      pU64_19 = local_f0;
      local_d8 = sz_20;
      local_d0 = uVal_25;
      func_0x1806aa960(pU64_24,pU64_1,sz_20);
      pU64_24[sz_20] = 0;
      func_0x180084770(pU64_19 + 0xd,local_e8);
      pU64_19 = local_f0;
      if (0xf < local_d0) {
        uVal_25 = local_d0 + 1;
        lVal_23 = local_e8._0_8_;
        if (0xfff < uVal_25) {
          lVal_23 = *(int64_t *)(local_e8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_23)) goto LAB_1804dd873;
          uVal_25 = local_d0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_23,uVal_25);
      }
      return pU64_19;
    }
  }
  func_0x18007ba70();
LAB_1804dd873:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1804dd880
void Unwind_1804dd880(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1804dd930
void Unwind_1804dd930(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1804dd9e0
void Unwind_1804dd9e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1804dda90
void Unwind_1804dda90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1804ddb40
void Unwind_1804ddb40(uint64_t param_1,int64_t param_2)
{
  func_0x1804c9cc0(*(uint64_t *)(param_2 + 0x68));
  return;
}

// Unwind@1804dde30
void Unwind_1804dde30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1804de290
void Unwind_1804de290(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  func_0x180037f80(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@1804de2d0
void Unwind_1804de2d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// func_0x1804de3f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1804de3f0(uint64_t *param_1)
{
  byte *pU8_1;
  char *_Str;
  uint *_Str_00;
  int64_t lVal_2;
  uint64_t *pU64_3;
  size_t sz_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint32_t *pU64_7;
  uint8_t *pU64_8;
  uint64_t uVal_9;
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  undefined3 uStack_78;
  undefined5 uStack_75;
  uint64_t uStack_70;
  uint64_t *local_60;
  uint8_t local_58 [16];
  size_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16f6c) == '\0') {
    lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_6 + 0x16f6c) = 1;
    *(uint16_t *)(lVal_6 + 0x16f69) = 0x175;
    func_0x180673140(&LAB_1804fcf30);
  }
  lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU8_1 = (byte *)(lVal_6 + 0x16f69);
  if (*(char *)(lVal_6 + 0x16f6a) == '\x01') {
    *pU8_1 = *pU8_1 ^ 0x75;
    *(uint8_t *)(lVal_6 + 0x16f6a) = 0;
  }
  local_58 = ZEXT816(0);
  sz_4 = strlen((char *)pU8_1);
  if ((int64_t)sz_4 < 0) {
    func_0x18007ba70();
LAB_1804de9c6:
    func_0x18007ba70();
LAB_1804de9cc:
    func_0x18007ba70();
  }
  else {
    if (sz_4 < 0x10) {
      pU64_8 = local_58;
      uVal_9 = 0xf;
    }
    else {
      uVal_5 = sz_4 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_5) {
        uVal_9 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
      }
      else {
        lVal_6 = func_0x180672de0(uVal_9 + 0x28);
        pU64_8 = (uint8_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_8 + -8) = lVal_6;
      }
      local_58._0_8_ = pU64_8;
    }
    local_48 = sz_4;
    local_40 = uVal_9;
    func_0x1806aa960(pU64_8,pU8_1,sz_4);
    pU64_8[sz_4] = 0;
    local_88 = _DAT_1806d550d;
    uStack_84 = _UNK_1806d5511;
    uStack_80 = _UNK_1806d5515;
    uStack_7c = CONCAT13(0xb9,(int3)_UNK_1806d5519);
    uStack_78 = 0x4d2611;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x16f84) == '\0') {
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_6 + 0x16f84) = 1;
      func_0x18007cb80(lVal_6 + 0x16f6d,&local_88);
      func_0x180673140(&LAB_1804fcf50);
    }
    _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x16f6d);
    func_0x18036f870(_Str);
    local_98 = ZEXT816(0);
    local_a8 = ZEXT816(0);
    sz_4 = strlen(_Str);
    if ((int64_t)sz_4 < 0) goto LAB_1804de9c6;
    if (sz_4 < 0x10) {
      pU64_8 = local_a8;
      uVal_9 = 0xf;
    }
    else {
      uVal_5 = sz_4 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_5) {
        uVal_9 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
      }
      else {
        lVal_6 = func_0x180672de0(uVal_9 + 0x28);
        pU64_8 = (uint8_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_8 + -8) = lVal_6;
      }
      local_a8._0_8_ = pU64_8;
    }
    local_98._8_8_ = uVal_9;
    local_98._0_8_ = sz_4;
    func_0x1806aa960(pU64_8,_Str,sz_4);
    pU64_8[sz_4] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x16f90) == '\0') {
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_6 + 0x16f90) = 1;
      *(uint32_t *)(lVal_6 + 0x16f88) = 0xa521301d;
      *(uint16_t *)(lVal_6 + 0x16f8c) = 0x137;
      func_0x180673140(&LAB_1804fcf80);
    }
    lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint *)(lVal_6 + 0x16f88);
    if (*(char *)(lVal_6 + 0x16f8d) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0xd54d5575;
      *(byte *)(lVal_6 + 0x16f8c) = *(byte *)(lVal_6 + 0x16f8c) ^ 0x37;
      *(uint8_t *)(lVal_6 + 0x16f8d) = 0;
    }
    uStack_78 = 0;
    uStack_75 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    sz_4 = strlen((char *)_Str_00);
    if ((int64_t)sz_4 < 0) goto LAB_1804de9cc;
    if (sz_4 < 0x10) {
      pU64_7 = &local_88;
      uVal_9 = 0xf;
    }
    else {
      uVal_5 = sz_4 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_5) {
        uVal_9 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        pU64_7 = (uint32_t *)func_0x180672de0(uVal_9 + 1);
      }
      else {
        lVal_6 = func_0x180672de0(uVal_9 + 0x28);
        pU64_7 = (uint32_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_7 + -2) = lVal_6;
      }
      local_88 = SUB84(pU64_7,0);
      uStack_84 = (uint32_t)((uint64_t)pU64_7 >> 0x20);
    }
    uStack_78 = (undefined3)sz_4;
    uStack_75 = (undefined5)(sz_4 >> 0x18);
    uStack_70 = uVal_9;
    func_0x1806aa960(pU64_7,_Str_00,sz_4);
    *(uint8_t *)((int64_t)pU64_7 + sz_4) = 0;
    pU64_8 = local_58;
    func_0x1804c9aa0(param_1,&local_88,local_a8,pU64_8);
    if (0xf < uStack_70) {
      lVal_2 = CONCAT44(uStack_84,local_88);
      uVal_9 = uStack_70 + 1;
      lVal_6 = lVal_2;
      if (0xfff < uVal_9) {
        lVal_6 = *(int64_t *)(lVal_2 + -8);
        if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_6)) goto LAB_1804de9d8;
        uVal_9 = uStack_70 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_9);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_9 = local_98._8_8_ + 1;
      lVal_6 = local_a8._0_8_;
      if (0xfff < uVal_9) {
        lVal_6 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_6)) goto LAB_1804de9d8;
        uVal_9 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_9);
    }
    if (0xf < local_40) {
      uVal_9 = local_40 + 1;
      lVal_6 = local_58._0_8_;
      if (0xfff < uVal_9) {
        lVal_6 = *(int64_t *)(local_58._0_8_ + -8);
        if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_6)) goto LAB_1804de9d8;
        uVal_9 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_9);
    }
    *param_1 = &PTR_LAB_1806cfee0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x16f98) == '\0') {
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_6 + 0x16f98) = 1;
      *(uint8_t *)(lVal_6 + 0x16f94) = 1;
      *(uint16_t *)(lVal_6 + 0x16f92) = 0x451b;
      func_0x180673140(&LAB_1804fcfb0);
    }
    lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_1 = (byte *)(lVal_6 + 0x16f92);
    if (*(char *)(lVal_6 + 0x16f94) == '\x01') {
      *pU8_1 = *pU8_1 ^ 0x73;
      *(byte *)(lVal_6 + 0x16f93) = *(byte *)(lVal_6 + 0x16f93) ^ 0x45;
      *(uint8_t *)(lVal_6 + 0x16f94) = 0;
    }
    local_58 = ZEXT816(0);
    sz_4 = strlen((char *)pU8_1);
    local_60 = param_1;
    if (-1 < (int64_t)sz_4) {
      uVal_9 = 0xf;
      if (0xf < sz_4) {
        uVal_5 = sz_4 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_5) {
          uVal_9 = uVal_5;
        }
        if (uVal_5 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_6 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_6;
        }
        local_58._0_8_ = pU64_8;
      }
      pU64_3 = local_60;
      local_48 = sz_4;
      local_40 = uVal_9;
      func_0x1806aa960(pU64_8,pU8_1,sz_4);
      pU64_8[sz_4] = 0;
      func_0x180084770(pU64_3 + 0xd,local_58);
      pU64_3 = local_60;
      if (0xf < local_40) {
        uVal_9 = local_40 + 1;
        lVal_6 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_6 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_6)) goto LAB_1804de9d8;
          uVal_9 = local_40 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_6,uVal_9);
      }
      return pU64_3;
    }
  }
  func_0x18007ba70();
LAB_1804de9d8:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1804de9e0
void Unwind_1804de9e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1804dea10
void Unwind_1804dea10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1804dea40
void Unwind_1804dea40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1804dea70
void Unwind_1804dea70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1804deaa0
void Unwind_1804deaa0(uint64_t param_1,int64_t param_2)
{
  func_0x1804c9cc0(*(uint64_t *)(param_2 + 0x68));
  return;
}

// Unwind@1804dead0
void Unwind_1804dead0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16f84) = 0;
  return;
}

// Unwind@1804df180
void Unwind_1804df180(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1804df1c0
void Unwind_1804df1c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  *(uint8_t *)(param_2 + 0xb6) = 0;
  return;
}

// Unwind@1804df210
void Unwind_1804df210(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0xb6);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x70);
  }
  *(char *)(param_2 + 0xb7) = ch_1;
  return;
}

// Unwind@1804df260
void Unwind_1804df260(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0xb7) == '\x01') {
    func_0x180001e70(param_2 + 0x50);
  }
  return;
}

// func_0x1804df2b0
void func_0x1804df2b0(uint64_t param_1,uint64_t *param_2,int64_t **param_3,uint32_t *param_4, uint32_t *param_5,int64_t **param_6)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t **ptr2_Long_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  int64_t *pLong_7;
  int64_t **local_a8;
  int64_t *local_a0;
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
  int64_t local_68 [3];
  uint64_t local_50;
  uint64_t local_48;
  int64_t ***local_40;
  uint64_t *local_38;
  uint64_t local_30;
  int64_t **local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_a0 = param_3[2];
  local_a8 = param_3;
  if (&DAT_0000000f < param_3[3]) {
    local_a8 = (int64_t **)*param_3;
  }
  local_98 = *param_4;
  uStack_94 = param_4[1];
  uStack_90 = param_4[2];
  uStack_8c = param_4[3];
  local_88 = *param_5;
  uStack_84 = param_5[1];
  uStack_80 = param_5[2];
  uStack_7c = param_5[3];
  local_70 = param_6[2];
  local_78 = param_6;
  if (&DAT_0000000f < param_6[3]) {
    local_78 = (int64_t **)*param_6;
  }
  local_48 = 0xdddd;
  local_40 = &local_a8;
  local_38 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_38 = (uint64_t *)*param_2;
  }
  local_30 = param_2[2];
  local_28 = param_3;
  func_0x18063ff10(local_68,&local_38,&local_48);
  func_0x180116b80(param_1,local_68);
  ptr2_Long_3 = local_28;
  if (0xf < local_50) {
    uVal_4 = local_50 + 1;
    lVal_5 = local_68[0];
    if (0xfff < uVal_4) {
      lVal_5 = *(int64_t *)(local_68[0] + -8);
      if (0x1f < (uint64_t)((local_68[0] + -8) - lVal_5)) goto LAB_1804df43b;
      uVal_4 = local_50 + 0x28;
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
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_6))) goto LAB_1804df43b;
      pLong_7 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_6,pLong_7);
  }
  ptr2_Long_3[2] = (int64_t *)0x0;
  ptr2_Long_3[3] = (int64_t *)&DAT_0000000f;
  *(uint8_t *)ptr2_Long_3 = 0;
  pLong_1 = param_6[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *param_6;
    pLong_7 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_6 = pLong_2;
    if ((int64_t *)0xfff < pLong_7) {
      pLong_6 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_6))) {
LAB_1804df43b:
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

// Unwind@1804df440
void Unwind_1804df440(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1804df470
void Unwind_1804df470(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xa0));
  func_0x180001e70(*(uint64_t *)(param_2 + 0xf8));
  return;
}

// func_0x1804df4a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1804df4a0(uint64_t *param_1)
{
  char *fnPtr_1;
  uint64_t *_Str;
  uint *_Str_00;
  uint8_t auArr_2 [12];
  uint64_t *pU64_3;
  uint8_t auArr_4 [16];
  size_t sz_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint8_t *pU64_8;
  uint64_t uVal_9;
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint8_t auStack_78 [4];
  uint8_t auStack_74 [4];
  uint64_t uStack_70;
  uint64_t *local_60;
  uint8_t local_58 [8];
  uint64_t uStack_50;
  uint8_t auStack_48 [8];
  uint64_t uStack_40;
  uint64_t local_38;
  
  auArr_4 = _auStack_48;
  local_38 = 0xfffffffffffffffe;
  auStack_48._4_4_ = _UNK_1806d5534;
  auStack_48._0_4_ = _UNK_1806d5530;
  uStack_40._4_4_ = auArr_4._12_4_;
  uStack_40._0_4_ = _UNK_1806d5538;
  local_58._4_4_ = _UNK_1806d5524;
  local_58._0_4_ = _DAT_1806d5520;
  uStack_50._0_4_ = _UNK_1806d5528;
  uStack_50._4_4_ = _DAT_1806d552c;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x16fe0) == '\0') {
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_7 + 0x16fe0) = 1;
    func_0x18008fba0(lVal_7 + 0x16fc1,local_58);
    func_0x180673140(&LAB_1804fd030);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x16fc1);
  func_0x1801c0d20(fnPtr_1);
  _local_58 = ZEXT816(0);
  _auStack_48 = _local_58;
  sz_5 = strlen(fnPtr_1);
  if ((int64_t)sz_5 < 0) {
    func_0x18007ba70();
LAB_1804dfac5:
    func_0x18007ba70();
LAB_1804dfacb:
    func_0x18007ba70();
  }
  else {
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
      local_58 = (uint8_t  [8])pU64_8;
    }
    uStack_40 = uVal_9;
    auStack_48 = (uint8_t  [8])sz_5;
    func_0x1806aa960(pU64_8,fnPtr_1,sz_5);
    auArr_2 = _auStack_74;
    pU64_8[sz_5] = 0;
    auStack_74 = (uint8_t  [4])_UNK_1806d5550;
    auStack_78 = (uint8_t  [4])_UNK_1806d554c;
    uStack_70._4_4_ = auArr_2._8_4_;
    uStack_70._0_4_ = _UNK_1806d5554;
    uStack_80._4_4_ = _DAT_1806d5548;
    uStack_80._0_4_ = _UNK_1806d5544;
    local_88 = (uint8_t  [8])_DAT_1806d553c;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x17000) == '\0') {
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_7 + 0x17000) = 1;
      func_0x18008fba0(lVal_7 + 0x16fe1,local_88);
      func_0x180673140(&LAB_1804fd060);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x16fe1);
    func_0x1801c0d20(fnPtr_1);
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_5 = strlen(fnPtr_1);
    if ((int64_t)sz_5 < 0) goto LAB_1804dfac5;
    if (sz_5 < 0x10) {
      pU64_8 = local_a8;
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
      local_a8._0_8_ = pU64_8;
    }
    local_98._8_8_ = uVal_9;
    local_98._0_8_ = sz_5;
    func_0x1806aa960(pU64_8,fnPtr_1,sz_5);
    pU64_8[sz_5] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x17014) == '\0') {
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_7 + 0x17014) = 1;
      *(uint8_t *)(lVal_7 + 0x17012) = 1;
      *(uint64_t *)(lVal_7 + 0x17008) = 0xa30aa344b03b3c1d;
      *(uint16_t *)(lVal_7 + 0x17010) = 0x5506;
      func_0x180673140(&LAB_1804fd090);
    }
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint64_t *)(lVal_7 + 0x17008);
    if (*(char *)(lVal_7 + 0x17012) == '\x01') {
      *_Str = *_Str ^ 0xd76bd737d54d5575;
      *(byte *)(lVal_7 + 0x17010) = *(byte *)(lVal_7 + 0x17010) ^ 0x75;
      *(byte *)(lVal_7 + 0x17011) = *(byte *)(lVal_7 + 0x17011) ^ 0x55;
      *(uint8_t *)(lVal_7 + 0x17012) = 0;
    }
    _auStack_78 = (uint8_t  [16])0x0;
    _local_88 = (uint8_t  [16])0x0;
    sz_5 = strlen((char *)_Str);
    if ((int64_t)sz_5 < 0) goto LAB_1804dfacb;
    if (sz_5 < 0x10) {
      pU64_8 = local_88;
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
      local_88 = (uint8_t  [8])pU64_8;
    }
    uStack_70 = uVal_9;
    _auStack_78 = sz_5;
    func_0x1806aa960(pU64_8,_Str,sz_5);
    pU64_8[sz_5] = 0;
    pU64_8 = local_58;
    func_0x1804c9aa0(param_1,local_88,local_a8,pU64_8);
    if (0xf < uStack_70) {
      uVal_9 = uStack_70 + 1;
      lVal_7 = (int64_t)local_88;
      if (0xfff < uVal_9) {
        lVal_7 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_7)) goto LAB_1804dfad7;
        uVal_9 = uStack_70 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_9);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_9 = local_98._8_8_ + 1;
      lVal_7 = local_a8._0_8_;
      if (0xfff < uVal_9) {
        lVal_7 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_7)) goto LAB_1804dfad7;
        uVal_9 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_9);
    }
    if (0xf < uStack_40) {
      uVal_9 = uStack_40 + 1;
      lVal_7 = (int64_t)local_58;
      if (0xfff < uVal_9) {
        lVal_7 = *(int64_t *)((int64_t)local_58 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_58 + -8) - lVal_7)) goto LAB_1804dfad7;
        uVal_9 = uStack_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_9);
    }
    *param_1 = &PTR_LAB_1806cff30;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1701c) == '\0') {
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_7 + 0x1701c) = 1;
      *(uint32_t *)(lVal_7 + 0x17018) = 0x17d361b;
      func_0x180673140(&LAB_1804fd0c0);
    }
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint *)(lVal_7 + 0x17018);
    if (*(char *)(lVal_7 + 0x1701b) == '\x01') {
      *_Str_00 = (*_Str_00 & 0xffff | (uint)*(byte *)(lVal_7 + 0x1701a) << 0x10) ^
                 SUB164(_DAT_1806b69b0,0);
    }
    _local_58 = (uint8_t  [16])0x0;
    sz_5 = strlen((char *)_Str_00);
    local_60 = param_1;
    if (-1 < (int64_t)sz_5) {
      uVal_9 = 0xf;
      if (0xf < sz_5) {
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
        local_58 = (uint8_t  [8])pU64_8;
      }
      pU64_3 = local_60;
      auStack_48 = (uint8_t  [8])sz_5;
      uStack_40 = uVal_9;
      func_0x1806aa960(pU64_8,_Str_00,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180084770(pU64_3 + 0xd,local_58);
      pU64_3 = local_60;
      if (0xf < uStack_40) {
        uVal_9 = uStack_40 + 1;
        lVal_7 = (int64_t)local_58;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)((int64_t)local_58 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_58 + -8) - lVal_7)) goto LAB_1804dfad7;
          uVal_9 = uStack_40 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      return pU64_3;
    }
  }
  func_0x18007ba70();
LAB_1804dfad7:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1804dfae0
void Unwind_1804dfae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1804dfb10
void Unwind_1804dfb10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1804dfb40
void Unwind_1804dfb40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1804dfb70
void Unwind_1804dfb70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1804dfba0
void Unwind_1804dfba0(uint64_t param_1,int64_t param_2)
{
  func_0x1804c9cc0(*(uint64_t *)(param_2 + 0x68));
  return;
}

// Unwind@1804dfbd0
void Unwind_1804dfbd0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16fe0) = 0;
  return;
}

// Unwind@1804dfc10
void Unwind_1804dfc10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17000) = 0;
  return;
}

// Unwind@1804e11f0
void Unwind_1804e11f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1709c) = 0;
  return;
}

// Unwind@1804e1240
void Unwind_1804e1240(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17084) = 0;
  *(uint8_t *)(param_2 + 0x20e) = 1;
  return;
}

// Unwind@1804e1290
void Unwind_1804e1290(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17060) = 0;
  *(uint8_t *)(param_2 + 0x20f) = 1;
  return;
}

// Unwind@1804e12e0
void Unwind_1804e12e0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x158),1);
  return;
}

// Unwind@1804e1320
void Unwind_1804e1320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1e0);
  return;
}

// Unwind@1804e1360
void Unwind_1804e1360(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1e0);
  return;
}

// Unwind@1804e13a0
void Unwind_1804e13a0(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  if (*(int *)(param_2 + 0x1c8) == 0) {
    return;
  }
  func_0x18068d0ec();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1804e13e0
void Unwind_1804e13e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1e0);
  *(uint8_t *)(param_2 + 0x20e) = 0;
  return;
}

// Unwind@1804e1420
void Unwind_1804e1420(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  *(uint8_t *)(param_2 + 0x20f) = 0;
  return;
}

// Unwind@1804e1460
void Unwind_1804e1460(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x20e) == '\x01') {
    func_0x180001e70(param_2 + 0x1a0);
  }
  return;
}

// Unwind@1804e14b0
void Unwind_1804e14b0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1804e14e0
void Unwind_1804e14e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1e0);
  return;
}

// Unwind@1804e1520
void Unwind_1804e1520(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x20f);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x180);
  }
  *(char *)(param_2 + 0x20d) = ch_1;
  return;
}

// Unwind@1804e1570
void Unwind_1804e1570(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x20d) == '\x01') {
    func_0x180001e70(param_2 + 0x160);
  }
  return;
}

// Unwind@1804e15c0
void Unwind_1804e15c0(uint64_t param_1,int64_t param_2)
{
  func_0x1800bffd0(param_2 + 0x38);
  return;
}

// Unwind@1804e29b0
void Unwind_1804e29b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  func_0x180037f80(*(uint64_t *)(param_2 + 0x58));
  return;
}

// Unwind@1804e2a00
void Unwind_1804e2a00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1804e2a40
void Unwind_1804e2a40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1804e2a80
void Unwind_1804e2a80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1804e2ac0
void Unwind_1804e2ac0(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(*(uint64_t *)(param_2 + 0x58));
  return;
}

// Unwind@1804e2b00
void Unwind_1804e2b00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1804e2b40
void Unwind_1804e2b40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1804e2b80
void Unwind_1804e2b80(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(*(uint64_t *)(param_2 + 0x58));
  return;
}

// func_0x1804e2da0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1804e2da0(uint64_t *param_1)
{
  uint64_t *_Str;
  uint *pU64_1;
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  size_t sz_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  uint8_t *pU64_9;
  uint64_t uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint8_t local_a8 [16];
  size_t local_98;
  uint64_t local_90;
  uint8_t local_88 [16];
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  size_t local_58;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  undefined6 uStack_48;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x170c8) == '\0') {
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_7 + 0x170c8) = 1;
    *(uint64_t *)(lVal_7 + 0x170c0) = 0x1b58dd4aa1c2b4f;
    func_0x180673140(&LAB_1804fd8a0);
  }
  lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint64_t *)(lVal_7 + 0x170c0);
  if (*(char *)(lVal_7 + 0x170c7) == '\x01') {
    *_Str = (CONCAT44((uint)*(ushort *)(lVal_7 + 0x170c5) << 8,*(uint32_t *)_Str) |
            (uint64_t)*(byte *)(lVal_7 + 0x170c4) << 0x20) ^ SUB168(_DAT_1806ae200,0);
  }
  local_a8 = (uint8_t  [16])0x0;
  sz_6 = strlen((char *)_Str);
  if ((int64_t)sz_6 < 0) {
    func_0x18007ba70();
LAB_1804e3288:
    func_0x18007ba70();
  }
  else {
    if (sz_6 < 0x10) {
      pU64_9 = local_a8;
      uVal_10 = 0xf;
    }
    else {
      uVal_8 = sz_6 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_8) {
        uVal_10 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        pU64_9 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_10 + 0x28);
        pU64_9 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_9 + -8) = lVal_7;
      }
      local_a8._0_8_ = pU64_9;
    }
    local_98 = sz_6;
    local_90 = uVal_10;
    func_0x1806aa960(pU64_9,_Str,sz_6);
    pU64_9[sz_6] = 0;
    local_58 = CONCAT44(_UNK_1806d55b7,_DAT_1806d55b3);
    uStack_50 = _UNK_1806d55bb;
    uStack_4c = (uint16_t)_UNK_1806d55bf;
    local_68._8_8_ = _UNK_1806d55ab;
    local_68._0_8_ = _DAT_1806d55a3;
    uStack_4a = 0x8495;
    uStack_48 = 0xb3d4ab08211c;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x170f0) == '\0') {
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_7 + 0x170f0) = 1;
      func_0x180086e20(lVal_7 + 0x170c9,local_68);
      func_0x180673140(&LAB_1804fd8d0);
    }
    uVal_5 = _UNK_1806b2cac;
    uVal_4 = _UNK_1806b2ca8;
    uVal_3 = _UNK_1806b2ca4;
    uVal_2 = _DAT_1806b2ca0;
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_7 + 0x170c9);
    if (*(char *)(lVal_7 + 0x170ef) == '\x01') {
      uVal_11 = *(uint *)(lVal_7 + 0x170cd) ^ _UNK_1806b2ca4;
      uVal_12 = *(uint *)(lVal_7 + 0x170d1) ^ _UNK_1806b2ca8;
      uVal_13 = *(uint *)(lVal_7 + 0x170d5) ^ _UNK_1806b2cac;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2ca0;
      *(uint *)(lVal_7 + 0x170cd) = uVal_11;
      *(uint *)(lVal_7 + 0x170d1) = uVal_12;
      *(uint *)(lVal_7 + 0x170d5) = uVal_13;
      *(uint *)(lVal_7 + 0x170d9) = *(uint *)(lVal_7 + 0x170d9) ^ uVal_2;
      *(uint *)(lVal_7 + 0x170dd) = *(uint *)(lVal_7 + 0x170dd) ^ uVal_3;
      *(uint *)(lVal_7 + 0x170e1) = *(uint *)(lVal_7 + 0x170e1) ^ uVal_4;
      *(uint *)(lVal_7 + 0x170e5) = *(uint *)(lVal_7 + 0x170e5) ^ uVal_5;
      *(uint *)(lVal_7 + 0x170e9) = *(uint *)(lVal_7 + 0x170e9) ^ 0xc77d4573;
      *(byte *)(lVal_7 + 0x170ed) = *(byte *)(lVal_7 + 0x170ed) ^ 0xb1;
      *(byte *)(lVal_7 + 0x170ee) = *(byte *)(lVal_7 + 0x170ee) ^ 0xb3;
      *(uint8_t *)(lVal_7 + 0x170ef) = 0;
    }
    local_78 = (uint8_t  [16])0x0;
    local_88 = (uint8_t  [16])0x0;
    sz_6 = strlen((char *)pU64_1);
    if ((int64_t)sz_6 < 0) goto LAB_1804e3288;
    if (sz_6 < 0x10) {
      pU64_9 = local_88;
      uVal_10 = 0xf;
    }
    else {
      uVal_8 = sz_6 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_8) {
        uVal_10 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        pU64_9 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_10 + 0x28);
        pU64_9 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_9 + -8) = lVal_7;
      }
      local_88._0_8_ = pU64_9;
    }
    local_78._8_8_ = uVal_10;
    local_78._0_8_ = sz_6;
    func_0x1806aa960(pU64_9,pU64_1,sz_6);
    pU64_9[sz_6] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x170fc) == '\0') {
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_7 + 0x170fc) = 1;
      *(uint32_t *)(lVal_7 + 0x170f4) = 0xac1e2c1d;
      *(uint16_t *)(lVal_7 + 0x170f8) = 0x1b1;
      func_0x180673140(&LAB_1804fd900);
    }
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_7 + 0x170f4);
    if (*(char *)(lVal_7 + 0x170f9) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xc77d4573;
      *(byte *)(lVal_7 + 0x170f8) = *(byte *)(lVal_7 + 0x170f8) ^ 0xb1;
      *(uint8_t *)(lVal_7 + 0x170f9) = 0;
    }
    local_68 = (uint8_t  [16])0x0;
    sz_6 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_6) {
      if (sz_6 < 0x10) {
        pU64_9 = local_68;
        uVal_10 = 0xf;
      }
      else {
        uVal_8 = sz_6 | 0xf;
        uVal_10 = 0x16;
        if (0x16 < uVal_8) {
          uVal_10 = uVal_8;
        }
        if (uVal_8 < 0xfff) {
          pU64_9 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_10 + 0x28);
          pU64_9 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_9 + -8) = lVal_7;
        }
        local_68._0_8_ = pU64_9;
      }
      uStack_50 = (uint32_t)uVal_10;
      uStack_4c = (uint16_t)(uVal_10 >> 0x20);
      uStack_4a = (uint16_t)(uVal_10 >> 0x30);
      local_58 = sz_6;
      func_0x1806aa960(pU64_9,pU64_1,sz_6);
      pU64_9[sz_6] = 0;
      func_0x1804c9aa0(param_1,local_68,local_88,local_a8);
      uVal_10 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
      if (0xf < uVal_10) {
        uVal_8 = uVal_10 + 1;
        lVal_7 = local_68._0_8_;
        if (0xfff < uVal_8) {
          lVal_7 = *(int64_t *)(local_68._0_8_ + -8);
          if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_7)) goto LAB_1804e3294;
          uVal_8 = uVal_10 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_8);
      }
      if (0xf < (uint64_t)local_78._8_8_) {
        uVal_10 = local_78._8_8_ + 1;
        lVal_7 = local_88._0_8_;
        if (0xfff < uVal_10) {
          lVal_7 = *(int64_t *)(local_88._0_8_ + -8);
          if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_7)) goto LAB_1804e3294;
          uVal_10 = local_78._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_10);
      }
      if (0xf < local_90) {
        uVal_10 = local_90 + 1;
        lVal_7 = local_a8._0_8_;
        if (0xfff < uVal_10) {
          lVal_7 = *(int64_t *)(local_a8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_7)) goto LAB_1804e3294;
          uVal_10 = local_90 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_10);
      }
      *param_1 = &PTR_LAB_1806cff70;
      return param_1;
    }
  }
  func_0x18007ba70();
LAB_1804e3294:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1804e32a0
void Unwind_1804e32a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1804e32d0
void Unwind_1804e32d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1804e3300
void Unwind_1804e3300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1804e3330
void Unwind_1804e3330(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x170f0) = 0;
  return;
}

// Unwind@1804e40c0
void Unwind_1804e40c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@1804e4110
void Unwind_1804e4110(void)
{
  func_0x180672f60(&DAT_180841800);
  return;
}

// Unwind@1804e4160
void Unwind_1804e4160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  return;
}

// Unwind@1804e41b0
void Unwind_1804e41b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1804e4200
void Unwind_1804e4200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x227) = 0;
  return;
}

// Unwind@1804e4250
void Unwind_1804e4250(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x227) == '\x01') {
    func_0x180001e70(param_2 + 400);
  }
  return;
}

// Unwind@1804e42a0
void Unwind_1804e42a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@1804e42f0
void Unwind_1804e42f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1804e4320
void Unwind_1804e4320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@1804e4370
void Unwind_1804e4370(uint64_t param_1,int64_t param_2)
{
  func_0x1800bffd0(param_2 + 0x40);
  return;
}

// Unwind@1804e43b0
void Unwind_1804e43b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  func_0x1800d5f50(param_2 + 0x1d0);
  return;
}

// Unwind@1804e4400
void Unwind_1804e4400(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17138) = 0;
  *(uint8_t *)(param_2 + 0x227) = 1;
  return;
}

// Unwind@1804e4460
void Unwind_1804e4460(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17168) = 0;
  return;
}

// func_0x1804e44c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1804e44c0(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint *_Str_00;
  uint64_t *_Str_01;
  uint32_t uVal_1;
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint64_t uVal_6;
  size_t sz_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint8_t *pU64_10;
  uint64_t uVal_11;
  uint uVal_13;
  uint uVal_14;
  uint8_t auArr_12 [16];
  uint uVal_15;
  uint8_t local_a8 [16];
  size_t local_98;
  uint64_t local_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  size_t local_78;
  uint32_t local_70;
  uint32_t uStack_6c;
  undefined3 uStack_68;
  uint32_t uStack_65;
  uint32_t uStack_61;
  uint8_t local_58 [16];
  uint8_t local_48 [16];
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x17180) == '\0') {
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_8 + 0x17180) = 1;
    uVal_6 = _UNK_1806cf248;
    *(uint64_t *)(lVal_8 + 0x17170) = _DAT_1806cf240;
    *(uint64_t *)(lVal_8 + 0x17178) = uVal_6;
    func_0x180673140(&LAB_1804fd9e0);
  }
  lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_8 + 0x17170);
  if (*(char *)(lVal_8 + 0x1717f) == '\x01') {
    uVal_1 = *(uint32_t *)(lVal_8 + 0x17178);
    auArr_12 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((uint
                                                  )uVal_1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_1 >> 0x10),uVal_1)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_8 + 0x1717d) >> 8)),
                                               (char)((uint)uVal_1 >> 8)),
                                      CONCAT11((char)*(uint16_t *)(lVal_8 + 0x1717d),(char)uVal_1)))
                     ,_DAT_1806ae110);
    auArr_12._8_8_ = auArr_12._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_8 + 0x1717c) << 0x20
    ;
    auArr_12 = pblendw(auArr_12,*_Str,0xf);
    *_Str = auArr_12 ^ _DAT_1806b6430;
  }
  local_a8 = (uint8_t  [16])0x0;
  sz_7 = strlen((char *)_Str);
  if ((int64_t)sz_7 < 0) {
    func_0x18007ba70();
LAB_1804e49c7:
    func_0x18007ba70();
  }
  else {
    if (sz_7 < 0x10) {
      pU64_10 = local_a8;
      uVal_11 = 0xf;
    }
    else {
      uVal_9 = sz_7 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_9) {
        uVal_11 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        pU64_10 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_11 + 0x28);
        pU64_10 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_10 + -8) = lVal_8;
      }
      local_a8._0_8_ = pU64_10;
    }
    local_98 = sz_7;
    local_90 = uVal_11;
    func_0x1806aa960(pU64_10,_Str,sz_7);
    pU64_10[sz_7] = 0;
    uStack_68 = _UNK_1806d5636;
    uStack_65 = _UNK_1806d5639;
    uStack_61 = _UNK_1806d563d;
    local_78 = CONCAT44(_UNK_1806d562a,_DAT_1806d5626);
    local_70 = _UNK_1806d562e;
    uStack_6c = _UNK_1806d5632;
    local_88._4_4_ = _UNK_1806d561a;
    local_88._0_4_ = _DAT_1806d5616;
    uStack_80._0_4_ = _UNK_1806d561e;
    uStack_80._4_4_ = _UNK_1806d5622;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x171b0) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x171b0) = 1;
      func_0x1801b3830(lVal_8 + 0x17181,local_88);
      func_0x180673140(&LAB_1804fda10);
    }
    uVal_5 = _UNK_1806b2d6c;
    uVal_4 = _UNK_1806b2d68;
    uVal_3 = _UNK_1806b2d64;
    uVal_2 = _DAT_1806b2d60;
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint *)(lVal_8 + 0x17181);
    if (*(char *)(lVal_8 + 0x171ac) == '\x01') {
      uVal_13 = *(uint *)(lVal_8 + 0x17185) ^ _UNK_1806b2d64;
      uVal_14 = *(uint *)(lVal_8 + 0x17189) ^ _UNK_1806b2d68;
      uVal_15 = *(uint *)(lVal_8 + 0x1718d) ^ _UNK_1806b2d6c;
      *_Str_00 = *_Str_00 ^ _DAT_1806b2d60;
      *(uint *)(lVal_8 + 0x17185) = uVal_13;
      *(uint *)(lVal_8 + 0x17189) = uVal_14;
      *(uint *)(lVal_8 + 0x1718d) = uVal_15;
      *(uint *)(lVal_8 + 0x17191) = *(uint *)(lVal_8 + 0x17191) ^ uVal_2;
      *(uint *)(lVal_8 + 0x17195) = *(uint *)(lVal_8 + 0x17195) ^ uVal_3;
      *(uint *)(lVal_8 + 0x17199) = *(uint *)(lVal_8 + 0x17199) ^ uVal_4;
      *(uint *)(lVal_8 + 0x1719d) = *(uint *)(lVal_8 + 0x1719d) ^ uVal_5;
      *(uint64_t *)(lVal_8 + 0x171a1) =
           CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_8 + 0x171a1) >> 0x20) ^ _UNK_1806b6414,
                    (uint)*(uint64_t *)(lVal_8 + 0x171a1) ^ _DAT_1806b6410);
      *(byte *)(lVal_8 + 0x171a9) = *(byte *)(lVal_8 + 0x171a9) ^ 0x75;
      *(byte *)(lVal_8 + 0x171aa) = *(byte *)(lVal_8 + 0x171aa) ^ 0x55;
      *(byte *)(lVal_8 + 0x171ab) = *(byte *)(lVal_8 + 0x171ab) ^ 0x4d;
      *(uint8_t *)(lVal_8 + 0x171ac) = 0;
    }
    local_58 = ZEXT816(0);
    local_48 = local_58;
    sz_7 = strlen((char *)_Str_00);
    if ((int64_t)sz_7 < 0) goto LAB_1804e49c7;
    if (sz_7 < 0x10) {
      pU64_10 = local_58;
      uVal_11 = 0xf;
    }
    else {
      uVal_9 = sz_7 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_9) {
        uVal_11 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        pU64_10 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_11 + 0x28);
        pU64_10 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_10 + -8) = lVal_8;
      }
      local_58._0_8_ = pU64_10;
    }
    local_48._8_8_ = uVal_11;
    local_48._0_8_ = sz_7;
    func_0x1806aa960(pU64_10,_Str_00,sz_7);
    pU64_10[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x171c4) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x171c4) = 1;
      *(uint64_t *)(lVal_8 + 0x171b8) = 0xb606b645ba233405;
      *(uint16_t *)(lVal_8 + 0x171c0) = 0x175;
      func_0x180673140(&LAB_1804fda40);
    }
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_01 = (uint64_t *)(lVal_8 + 0x171b8);
    if (*(char *)(lVal_8 + 0x171c1) == '\x01') {
      *_Str_01 = *_Str_01 ^ 0xd76bd737d54d5575;
      *(byte *)(lVal_8 + 0x171c0) = *(byte *)(lVal_8 + 0x171c0) ^ 0x75;
      *(uint8_t *)(lVal_8 + 0x171c1) = 0;
    }
    _local_88 = ZEXT816(0);
    sz_7 = strlen((char *)_Str_01);
    if (-1 < (int64_t)sz_7) {
      if (sz_7 < 0x10) {
        pU64_10 = local_88;
        uVal_11 = 0xf;
      }
      else {
        uVal_9 = sz_7 | 0xf;
        uVal_11 = 0x16;
        if (0x16 < uVal_9) {
          uVal_11 = uVal_9;
        }
        if (uVal_9 < 0xfff) {
          pU64_10 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
        }
        else {
          lVal_8 = func_0x180672de0(uVal_11 + 0x28);
          pU64_10 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_10 + -8) = lVal_8;
        }
        local_88 = (uint8_t  [8])pU64_10;
      }
      local_70 = (uint32_t)uVal_11;
      uStack_6c = (uint32_t)(uVal_11 >> 0x20);
      local_78 = sz_7;
      func_0x1806aa960(pU64_10,_Str_01,sz_7);
      pU64_10[sz_7] = 0;
      func_0x1804c9aa0(param_1,local_88,local_58,local_a8);
      uVal_11 = CONCAT44(uStack_6c,local_70);
      if (0xf < uVal_11) {
        uVal_9 = uVal_11 + 1;
        lVal_8 = (int64_t)local_88;
        if (0xfff < uVal_9) {
          lVal_8 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_8)) goto LAB_1804e49d3;
          uVal_9 = uVal_11 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_8,uVal_9);
      }
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_11 = local_48._8_8_ + 1;
        lVal_8 = local_58._0_8_;
        if (0xfff < uVal_11) {
          lVal_8 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_8)) goto LAB_1804e49d3;
          uVal_11 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_8,uVal_11);
      }
      if (0xf < local_90) {
        uVal_11 = local_90 + 1;
        lVal_8 = local_a8._0_8_;
        if (0xfff < uVal_11) {
          lVal_8 = *(int64_t *)(local_a8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_8)) goto LAB_1804e49d3;
          uVal_11 = local_90 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_8,uVal_11);
      }
      *param_1 = &PTR_LAB_1806cffb0;
      return param_1;
    }
  }
  func_0x18007ba70();
LAB_1804e49d3:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1804e49e0
void Unwind_1804e49e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1804e4a10
void Unwind_1804e4a10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1804e4a40
void Unwind_1804e4a40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1804e4a70
void Unwind_1804e4a70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x171b0) = 0;
  return;
}

// Unwind@1804e52d0
void Unwind_1804e52d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1804e5310
void Unwind_1804e5310(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1804e5350
void Unwind_1804e5350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1804e5390
void Unwind_1804e5390(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  *(uint8_t *)(param_2 + 0xd7) = 0;
  return;
}

// Unwind@1804e53d0
void Unwind_1804e53d0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0xd7) == '\x01') {
    func_0x180001e70(param_2 + 0x40);
  }
  return;
}

// Unwind@1804e5420
void Unwind_1804e5420(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x171fc) = 0;
  *(uint8_t *)(param_2 + 0xd7) = 1;
  return;
}

// func_0x1804e5480
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1804e5480(uint64_t *param_1)
{
  byte *_Str;
  uint *_Str_00;
  uint64_t *pU64_1;
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint64_t uVal_12;
  uint64_t *pU64_13;
  size_t sz_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  uint8_t *pU64_17;
  uint64_t uVal_18;
  uint uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [24];
  uint64_t *local_60;
  uint8_t local_58 [16];
  size_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x17200) == '\0') {
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_16 + 0x17200) = 1;
    *(uint16_t *)(lVal_16 + 0x171fd) = 0x1cf;
    func_0x180673140(&LAB_1804fdad0);
  }
  lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (byte *)(lVal_16 + 0x171fd);
  if (*(char *)(lVal_16 + 0x171fe) == '\x01') {
    *_Str = *_Str ^ 0xcf;
    *(uint8_t *)(lVal_16 + 0x171fe) = 0;
  }
  local_58 = (uint8_t  [16])0x0;
  sz_14 = strlen((char *)_Str);
  if ((int64_t)sz_14 < 0) {
    func_0x18007ba70();
LAB_1804e5b36:
    func_0x18007ba70();
LAB_1804e5b3c:
    func_0x18007ba70();
  }
  else {
    if (sz_14 < 0x10) {
      pU64_17 = local_58;
      uVal_18 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_15) {
        uVal_18 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_16 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_16;
      }
      local_58._0_8_ = pU64_17;
    }
    local_48 = sz_14;
    local_40 = uVal_18;
    func_0x1806aa960(pU64_17,_Str,sz_14);
    pU64_17[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x17250) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x17250) = 1;
      *(uint8_t *)(lVal_16 + 0x1724c) = 1;
      uVal_11 = _UNK_1806d5671;
      uVal_10 = _UNK_1806d566d;
      uVal_9 = _UNK_1806d5669;
      *(uint32_t *)(lVal_16 + 0x17201) = _DAT_1806d5665;
      *(uint32_t *)(lVal_16 + 0x17205) = uVal_9;
      *(uint32_t *)(lVal_16 + 0x17209) = uVal_10;
      *(uint32_t *)(lVal_16 + 0x1720d) = uVal_11;
      uVal_11 = _UNK_1806d5681;
      uVal_10 = _UNK_1806d567d;
      uVal_9 = _UNK_1806d5679;
      *(uint32_t *)(lVal_16 + 0x17211) = _DAT_1806d5675;
      *(uint32_t *)(lVal_16 + 0x17215) = uVal_9;
      *(uint32_t *)(lVal_16 + 0x17219) = uVal_10;
      *(uint32_t *)(lVal_16 + 0x1721d) = uVal_11;
      uVal_11 = _UNK_1806d5691;
      uVal_10 = _UNK_1806d568d;
      uVal_9 = _UNK_1806d5689;
      *(uint32_t *)(lVal_16 + 0x17221) = _DAT_1806d5685;
      *(uint32_t *)(lVal_16 + 0x17225) = uVal_9;
      *(uint32_t *)(lVal_16 + 0x17229) = uVal_10;
      *(uint32_t *)(lVal_16 + 0x1722d) = uVal_11;
      uVal_11 = _UNK_1806d56a1;
      uVal_10 = _UNK_1806d569d;
      uVal_9 = _UNK_1806d5699;
      *(uint32_t *)(lVal_16 + 0x17231) = _DAT_1806d5695;
      *(uint32_t *)(lVal_16 + 0x17235) = uVal_9;
      *(uint32_t *)(lVal_16 + 0x17239) = uVal_10;
      *(uint32_t *)(lVal_16 + 0x1723d) = uVal_11;
      uVal_12 = _UNK_1806d56a8;
      *(uint64_t *)(lVal_16 + 0x1723c) =
           CONCAT35(_UNK_1806d56a5,CONCAT41(_UNK_1806d56a1,DAT_1806d56a0));
      *(uint64_t *)(lVal_16 + 0x17244) = uVal_12;
      func_0x180673140(&LAB_1804fdaf0);
    }
    uVal_8 = _UNK_1806b2c9c;
    uVal_7 = _UNK_1806b2c98;
    uVal_6 = _UNK_1806b2c94;
    uVal_5 = _DAT_1806b2c90;
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint *)(lVal_16 + 0x17201);
    if (*(char *)(lVal_16 + 0x1724c) == '\x01') {
      uVal_19 = *(uint *)(lVal_16 + 0x17205) ^ _UNK_1806b2c94;
      uVal_20 = *(uint *)(lVal_16 + 0x17209) ^ _UNK_1806b2c98;
      uVal_21 = *(uint *)(lVal_16 + 0x1720d) ^ _UNK_1806b2c9c;
      *_Str_00 = *_Str_00 ^ _DAT_1806b2c90;
      *(uint *)(lVal_16 + 0x17205) = uVal_19;
      *(uint *)(lVal_16 + 0x17209) = uVal_20;
      *(uint *)(lVal_16 + 0x1720d) = uVal_21;
      auArr_2._4_4_ = *(uint *)(lVal_16 + 0x17215) ^ uVal_6;
      auArr_2._0_4_ = *(uint *)(lVal_16 + 0x17211) ^ uVal_5;
      auArr_2._8_4_ = *(uint *)(lVal_16 + 0x17219) ^ uVal_7;
      auArr_2._12_4_ = *(uint *)(lVal_16 + 0x1721d) ^ uVal_8;
      *(uint8_t (*)[16])(lVal_16 + 0x17211) = auArr_2;
      auArr_3._4_4_ = *(uint *)(lVal_16 + 0x17225) ^ uVal_6;
      auArr_3._0_4_ = *(uint *)(lVal_16 + 0x17221) ^ uVal_5;
      auArr_3._8_4_ = *(uint *)(lVal_16 + 0x17229) ^ uVal_7;
      auArr_3._12_4_ = *(uint *)(lVal_16 + 0x1722d) ^ uVal_8;
      *(uint8_t (*)[16])(lVal_16 + 0x17221) = auArr_3;
      auArr_4._4_4_ = *(uint *)(lVal_16 + 0x17235) ^ uVal_6;
      auArr_4._0_4_ = *(uint *)(lVal_16 + 0x17231) ^ uVal_5;
      auArr_4._8_4_ = *(uint *)(lVal_16 + 0x17239) ^ uVal_7;
      auArr_4._12_4_ = *(uint *)(lVal_16 + 0x1723d) ^ uVal_8;
      *(uint8_t (*)[16])(lVal_16 + 0x17231) = auArr_4;
      *(uint64_t *)(lVal_16 + 0x17241) = *(uint64_t *)(lVal_16 + 0x17241) ^ SUB168(_DAT_1806b63e0,0)
      ;
      *(byte *)(lVal_16 + 0x17249) = *(byte *)(lVal_16 + 0x17249) ^ 0xcf;
      *(byte *)(lVal_16 + 0x1724a) = *(byte *)(lVal_16 + 0x1724a) ^ 0xd9;
      *(byte *)(lVal_16 + 0x1724b) = *(byte *)(lVal_16 + 0x1724b) ^ 0xf9;
      *(uint8_t *)(lVal_16 + 0x1724c) = 0;
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)_Str_00);
    if ((int64_t)sz_14 < 0) goto LAB_1804e5b36;
    if (sz_14 < 0x10) {
      pU64_17 = local_a8;
      uVal_18 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_15) {
        uVal_18 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_16 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_16;
      }
      local_a8._0_8_ = pU64_17;
    }
    local_98._8_8_ = uVal_18;
    local_98._0_8_ = sz_14;
    func_0x1806aa960(pU64_17,_Str_00,sz_14);
    pU64_17[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x17264) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x17264) = 1;
      *(uint64_t *)(lVal_16 + 0x17258) = 0x6538f3a07098b5bf;
      *(uint32_t *)(lVal_16 + 0x17260) = 0x1f9b6a9;
      func_0x180673140(&LAB_1804fdb30);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_16 + 0x17258);
    if (*(char *)(lVal_16 + 0x17263) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xb5181c509f9d9cf;
      *(uint *)(lVal_16 + 0x17260) =
           (*(uint *)(lVal_16 + 0x17260) & 0xffff | (uint)*(byte *)(lVal_16 + 0x17262) << 0x10) ^
           SUB164(_DAT_1806b68f0,0);
    }
    local_78._0_16_ = (uint8_t  [16])0x0;
    local_88 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1804e5b3c;
    if (sz_14 < 0x10) {
      pU64_17 = local_88;
      uVal_18 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_15) {
        uVal_18 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_16 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_16;
      }
      local_88._0_8_ = pU64_17;
    }
    local_78._8_8_ = uVal_18;
    local_78._0_8_ = sz_14;
    func_0x1806aa960(pU64_17,pU64_1,sz_14);
    pU64_17[sz_14] = 0;
    pU64_17 = local_58;
    func_0x1804c9aa0(param_1,local_88,local_a8,pU64_17);
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_18 = local_78._8_8_ + 1;
      lVal_16 = local_88._0_8_;
      if (0xfff < uVal_18) {
        lVal_16 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_16)) goto LAB_1804e5b48;
        uVal_18 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_18);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_18 = local_98._8_8_ + 1;
      lVal_16 = local_a8._0_8_;
      if (0xfff < uVal_18) {
        lVal_16 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_16)) goto LAB_1804e5b48;
        uVal_18 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_18);
    }
    if (0xf < local_40) {
      uVal_18 = local_40 + 1;
      lVal_16 = local_58._0_8_;
      if (0xfff < uVal_18) {
        lVal_16 = *(int64_t *)(local_58._0_8_ + -8);
        if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_16)) goto LAB_1804e5b48;
        uVal_18 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_18);
    }
    *param_1 = &PTR_LAB_1806cfff0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x17274) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x17274) = 1;
      *(uint64_t *)(lVal_16 + 0x17268) = 0x2efd770cd0907505;
      *(uint32_t *)(lVal_16 + 0x17270) = 0x1f16d06;
      func_0x180673140(&LAB_1804fdb60);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_16 + 0x17268);
    if (*(char *)(lVal_16 + 0x17273) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x47910569a9f11975;
      *(uint *)(lVal_16 + 0x17270) =
           (*(uint *)(lVal_16 + 0x17270) & 0xffff | (uint)*(byte *)(lVal_16 + 0x17272) << 0x10) ^
           SUB164(_DAT_1806b6630,0);
    }
    local_58 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU64_1);
    local_60 = param_1;
    if (-1 < (int64_t)sz_14) {
      uVal_18 = 0xf;
      if (0xf < sz_14) {
        uVal_15 = sz_14 | 0xf;
        uVal_18 = 0x16;
        if (0x16 < uVal_15) {
          uVal_18 = uVal_15;
        }
        if (uVal_15 < 0xfff) {
          pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
        }
        else {
          lVal_16 = func_0x180672de0(uVal_18 + 0x28);
          pU64_17 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_17 + -8) = lVal_16;
        }
        local_58._0_8_ = pU64_17;
      }
      pU64_13 = local_60;
      local_48 = sz_14;
      local_40 = uVal_18;
      func_0x1806aa960(pU64_17,pU64_1,sz_14);
      pU64_17[sz_14] = 0;
      func_0x180084770(pU64_13 + 0xd,local_58);
      pU64_13 = local_60;
      if (0xf < local_40) {
        uVal_18 = local_40 + 1;
        lVal_16 = local_58._0_8_;
        if (0xfff < uVal_18) {
          lVal_16 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_16)) goto LAB_1804e5b48;
          uVal_18 = local_40 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_16,uVal_18);
      }
      return pU64_13;
    }
  }
  func_0x18007ba70();
LAB_1804e5b48:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1804e5b50
void Unwind_1804e5b50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1804e5b80
void Unwind_1804e5b80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1804e5bb0
void Unwind_1804e5bb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1804e5be0
void Unwind_1804e5be0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1804e5c10
void Unwind_1804e5c10(uint64_t param_1,int64_t param_2)
{
  func_0x1804c9cc0(*(uint64_t *)(param_2 + 0x68));
  return;
}

// Unwind@1804e6760
void Unwind_1804e6760(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x1b7) = 0;
  return;
}

// Unwind@1804e67d0
void Unwind_1804e67d0(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x1b7);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x130);
  }
  *(char *)(param_2 + 0x1b6) = ch_1;
  return;
}

// Unwind@1804e6850
void Unwind_1804e6850(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x1b6);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x110);
  }
  *(char *)(param_2 + 0x1b5) = ch_1;
  return;
}

// Unwind@1804e68d0
void Unwind_1804e68d0(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x1b5);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0xf0);
  }
  *(char *)(param_2 + 0x1b4) = ch_1;
  return;
}

// Unwind@1804e6950
void Unwind_1804e6950(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x1b4) == '\x01') {
    func_0x180001e70(param_2 + 0xd0);
  }
  return;
}

// Unwind@1804e69c0
void Unwind_1804e69c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@1804e6a30
void Unwind_1804e6a30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  return;
}

// func_0x1804e6aa0
void func_0x1804e6aa0(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,int64_t **param_4, uint32_t *param_5,int64_t **param_6,uint32_t *param_7,int64_t **param_8, uint32_t *param_9,uint64_t param_10,uint32_t *param_11,int64_t **param_12)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t **ptr2_Long_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  int64_t *pLong_7;
  uint32_t local_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t uStack_10c;
  int64_t **local_108;
  int64_t *local_100;
  uint32_t local_f8;
  uint32_t uStack_f4;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  int64_t **local_e8;
  int64_t *local_e0;
  uint32_t local_d8;
  uint32_t uStack_d4;
  uint32_t uStack_d0;
  uint32_t uStack_cc;
  int64_t **local_c8;
  int64_t *local_c0;
  uint32_t local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint64_t local_a8;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  int64_t **local_88;
  int64_t *local_80;
  int64_t local_78 [3];
  uint64_t local_60;
  uint64_t local_58;
  uint32_t *local_50;
  uint64_t *local_48;
  uint64_t local_40;
  int64_t **local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_118 = *param_3;
  uStack_114 = param_3[1];
  uStack_110 = param_3[2];
  uStack_10c = param_3[3];
  local_100 = param_4[2];
  local_108 = param_4;
  if (&DAT_0000000f < param_4[3]) {
    local_108 = (int64_t **)*param_4;
  }
  local_f8 = *param_5;
  uStack_f4 = param_5[1];
  uStack_f0 = param_5[2];
  uStack_ec = param_5[3];
  local_e0 = param_6[2];
  local_e8 = param_6;
  if (&DAT_0000000f < param_6[3]) {
    local_e8 = (int64_t **)*param_6;
  }
  local_d8 = *param_7;
  uStack_d4 = param_7[1];
  uStack_d0 = param_7[2];
  uStack_cc = param_7[3];
  local_c0 = param_8[2];
  local_c8 = param_8;
  if (&DAT_0000000f < param_8[3]) {
    local_c8 = (int64_t **)*param_8;
  }
  local_b8 = *param_9;
  uStack_b4 = param_9[1];
  uStack_b0 = param_9[2];
  uStack_ac = param_9[3];
  local_a8 = param_10;
  local_98 = *param_11;
  uStack_94 = param_11[1];
  uStack_90 = param_11[2];
  uStack_8c = param_11[3];
  local_80 = param_12[2];
  local_88 = param_12;
  if (&DAT_0000000f < param_12[3]) {
    local_88 = (int64_t **)*param_12;
  }
  local_58 = 0xdd3ddddddd;
  local_50 = &local_118;
  local_48 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_48 = (uint64_t *)*param_2;
  }
  local_40 = param_2[2];
  local_38 = param_4;
  func_0x18063ff10(local_78,&local_48,&local_58);
  func_0x180116b80(param_1,local_78);
  ptr2_Long_3 = local_38;
  if (0xf < local_60) {
    uVal_4 = local_60 + 1;
    lVal_5 = local_78[0];
    if (0xfff < uVal_4) {
      lVal_5 = *(int64_t *)(local_78[0] + -8);
      if (0x1f < (uint64_t)((local_78[0] + -8) - lVal_5)) goto LAB_1804e6d71;
      uVal_4 = local_60 + 0x28;
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
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_6))) goto LAB_1804e6d71;
      pLong_7 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_6,pLong_7);
  }
  ptr2_Long_3[2] = (int64_t *)0x0;
  ptr2_Long_3[3] = (int64_t *)&DAT_0000000f;
  *(uint8_t *)ptr2_Long_3 = 0;
  pLong_1 = param_6[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *param_6;
    pLong_7 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_6 = pLong_2;
    if ((int64_t *)0xfff < pLong_7) {
      pLong_6 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_6))) goto LAB_1804e6d71;
      pLong_7 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_6,pLong_7);
  }
  param_6[2] = (int64_t *)0x0;
  param_6[3] = (int64_t *)&DAT_0000000f;
  *(uint8_t *)param_6 = 0;
  pLong_1 = param_8[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *param_8;
    pLong_7 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_6 = pLong_2;
    if ((int64_t *)0xfff < pLong_7) {
      pLong_6 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_6))) goto LAB_1804e6d71;
      pLong_7 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_6,pLong_7);
  }
  param_8[2] = (int64_t *)0x0;
  param_8[3] = (int64_t *)&DAT_0000000f;
  *(uint8_t *)param_8 = 0;
  pLong_1 = param_12[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *param_12;
    pLong_7 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_6 = pLong_2;
    if ((int64_t *)0xfff < pLong_7) {
      pLong_6 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_6))) {
LAB_1804e6d71:
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

// Unwind@1804e6d80
void Unwind_1804e6d80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1804e6db0
void Unwind_1804e6db0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x100));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x168));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x178));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x198));
  return;
}

// func_0x1804e6e10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1804e6e10(uint64_t *param_1)
{
  uint64_t *_Str;
  char *_Str_00;
  uint *_Str_01;
  int64_t lVal_1;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  uint32_t *pU64_6;
  uint64_t uVal_7;
  uint8_t local_98 [16];
  size_t local_88;
  uint64_t local_80;
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  undefined5 uStack_48;
  undefined3 uStack_43;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x172ec) == '\0') {
    lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_4 + 0x172ec) = 1;
    *(uint8_t *)(lVal_4 + 0x172ea) = 1;
    *(uint64_t *)(lVal_4 + 0x172e0) = 0x6e36e0b67a9cb4f3;
    *(uint16_t *)(lVal_4 + 0x172e8) = 0xd9f1;
    func_0x180673140(&LAB_1804fdc20);
  }
  lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint64_t *)(lVal_4 + 0x172e0);
  if (*(char *)(lVal_4 + 0x172ea) == '\x01') {
    *_Str = *_Str ^ 0xb5181c509f9d9cf;
    *(byte *)(lVal_4 + 0x172e8) = *(byte *)(lVal_4 + 0x172e8) ^ 0xcf;
    *(byte *)(lVal_4 + 0x172e9) = *(byte *)(lVal_4 + 0x172e9) ^ 0xd9;
    *(uint8_t *)(lVal_4 + 0x172ea) = 0;
  }
  local_98 = ZEXT816(0);
  sz_2 = strlen((char *)_Str);
  if ((int64_t)sz_2 < 0) {
    func_0x18007ba70();
LAB_1804e72a1:
    func_0x18007ba70();
  }
  else {
    if (sz_2 < 0x10) {
      pU64_5 = local_98;
      uVal_7 = 0xf;
    }
    else {
      uVal_3 = sz_2 | 0xf;
      uVal_7 = 0x16;
      if (0x16 < uVal_3) {
        uVal_7 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        pU64_5 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_7 + 0x28);
        pU64_5 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_5 + -8) = lVal_4;
      }
      local_98._0_8_ = pU64_5;
    }
    local_88 = sz_2;
    local_80 = uVal_7;
    func_0x1806aa960(pU64_5,_Str,sz_2);
    pU64_5[sz_2] = 0;
    local_58 = _DAT_1806d584b;
    uStack_54 = _UNK_1806d584f;
    uStack_50 = _UNK_1806d5853;
    uStack_4c = CONCAT31(0x7834ec,(char)_UNK_1806d5857);
    uStack_48 = 0xc56c9eb8bc;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x17304) == '\0') {
      lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_4 + 0x17304) = 1;
      func_0x18007cd50(lVal_4 + 0x172ed,&local_58);
      func_0x180673140(&LAB_1804fdc50);
    }
    _Str_00 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x172ed)
    ;
    func_0x1802188b0(_Str_00);
    local_68 = ZEXT816(0);
    local_78 = ZEXT816(0);
    sz_2 = strlen(_Str_00);
    if ((int64_t)sz_2 < 0) goto LAB_1804e72a1;
    if (sz_2 < 0x10) {
      pU64_5 = local_78;
      uVal_7 = 0xf;
    }
    else {
      uVal_3 = sz_2 | 0xf;
      uVal_7 = 0x16;
      if (0x16 < uVal_3) {
        uVal_7 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        pU64_5 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_7 + 0x28);
        pU64_5 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_5 + -8) = lVal_4;
      }
      local_78._0_8_ = pU64_5;
    }
    local_68._8_8_ = uVal_7;
    local_68._0_8_ = sz_2;
    func_0x1806aa960(pU64_5,_Str_00,sz_2);
    pU64_5[sz_2] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x17310) == '\0') {
      lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_4 + 0x17310) = 1;
      *(uint8_t *)(lVal_4 + 0x1730c) = 1;
      *(uint32_t *)(lVal_4 + 0x17308) = 0x980b8bc;
      func_0x180673140(&LAB_1804fdc80);
    }
    lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_01 = (uint *)(lVal_4 + 0x17308);
    if (*(char *)(lVal_4 + 0x1730c) == '\x01') {
      *_Str_01 = *_Str_01 ^ 0x9f9d9cf;
      *(uint8_t *)(lVal_4 + 0x1730c) = 0;
    }
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    sz_2 = strlen((char *)_Str_01);
    if (-1 < (int64_t)sz_2) {
      if (sz_2 < 0x10) {
        pU64_6 = &local_58;
        uVal_7 = 0xf;
      }
      else {
        uVal_3 = sz_2 | 0xf;
        uVal_7 = 0x16;
        if (0x16 < uVal_3) {
          uVal_7 = uVal_3;
        }
        if (uVal_3 < 0xfff) {
          pU64_6 = (uint32_t *)func_0x180672de0(uVal_7 + 1);
        }
        else {
          lVal_4 = func_0x180672de0(uVal_7 + 0x28);
          pU64_6 = (uint32_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_6 + -2) = lVal_4;
        }
        local_58 = SUB84(pU64_6,0);
        uStack_54 = (uint32_t)((uint64_t)pU64_6 >> 0x20);
      }
      uStack_48 = (undefined5)sz_2;
      uStack_43 = (undefined3)(sz_2 >> 0x28);
      local_40 = uVal_7;
      func_0x1806aa960(pU64_6,_Str_01,sz_2);
      *(uint8_t *)((int64_t)pU64_6 + sz_2) = 0;
      func_0x1804c9aa0(param_1,&local_58,local_78,local_98);
      if (0xf < local_40) {
        lVal_1 = CONCAT44(uStack_54,local_58);
        uVal_7 = local_40 + 1;
        lVal_4 = lVal_1;
        if (0xfff < uVal_7) {
          lVal_4 = *(int64_t *)(lVal_1 + -8);
          if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) goto LAB_1804e72ad;
          uVal_7 = local_40 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_4,uVal_7);
      }
      if (0xf < (uint64_t)local_68._8_8_) {
        uVal_7 = local_68._8_8_ + 1;
        lVal_4 = local_78._0_8_;
        if (0xfff < uVal_7) {
          lVal_4 = *(int64_t *)(local_78._0_8_ + -8);
          if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_4)) goto LAB_1804e72ad;
          uVal_7 = local_68._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_4,uVal_7);
      }
      if (0xf < local_80) {
        uVal_7 = local_80 + 1;
        lVal_4 = local_98._0_8_;
        if (0xfff < uVal_7) {
          lVal_4 = *(int64_t *)(local_98._0_8_ + -8);
          if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_4)) goto LAB_1804e72ad;
          uVal_7 = local_80 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_4,uVal_7);
      }
      *param_1 = &PTR_LAB_1806d0050;
      return param_1;
    }
  }
  func_0x18007ba70();
LAB_1804e72ad:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1804e72b0
void Unwind_1804e72b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1804e72e0
void Unwind_1804e72e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1804e7310
void Unwind_1804e7310(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1804e7340
void Unwind_1804e7340(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17304) = 0;
  return;
}

// Unwind@1804e7ac0
void Unwind_1804e7ac0(void)
{
  func_0x180672f60(&DAT_18083f900);
  return;
}

// Unwind@1804e7b10
void Unwind_1804e7b10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1804e7b50
void Unwind_1804e7b50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1804e7b90
void Unwind_1804e7b90(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x50);
  return;
}

// Unwind@1804e7bd0
void Unwind_1804e7bd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x1804e7c10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1804e7c10(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint *pU64_1;
  uint64_t *_Str_00;
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  uint64_t *pU64_12;
  size_t sz_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  uint8_t *pU64_16;
  uint64_t uVal_17;
  uint uVal_18;
  uint uVal_19;
  uint uVal_20;
  uint8_t local_c8 [16];
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint16_t local_48;
  uint64_t *local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_58 = _DAT_1806d5890;
  uStack_54 = _UNK_1806d5894;
  uStack_50 = _UNK_1806d5898;
  uStack_4c = _UNK_1806d589c;
  local_68 = _DAT_1806d5880;
  uStack_64 = _UNK_1806d5884;
  uStack_60 = _UNK_1806d5888;
  uStack_5c = _UNK_1806d588c;
  local_78._4_4_ = _UNK_1806d5874;
  local_78._0_4_ = _DAT_1806d5870;
  uStack_70._0_4_ = _UNK_1806d5878;
  uStack_70._4_4_ = _UNK_1806d587c;
  local_88._4_4_ = _UNK_1806d5864;
  local_88._0_4_ = _DAT_1806d5860;
  uStack_80._0_4_ = _UNK_1806d5868;
  uStack_80._4_4_ = _UNK_1806d586c;
  local_48 = 0xd180;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x17374) == '\0') {
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_15 + 0x17374) = 1;
    func_0x18012b460(lVal_15 + 0x17331,local_88);
    func_0x180673140(&LAB_1804fdcd0);
  }
  uVal_11 = _UNK_1806b5b0c;
  uVal_10 = _UNK_1806b5b08;
  uVal_9 = _UNK_1806b5b04;
  uVal_8 = _DAT_1806b5b00;
  lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_15 + 0x17331);
  if (*(char *)(lVal_15 + 0x17373) == '\x01') {
    auArr_2._4_4_ = *(uint *)(lVal_15 + 0x17335) ^ _UNK_1806b5b04;
    auArr_2._0_4_ = *(uint *)*_Str ^ _DAT_1806b5b00;
    auArr_2._8_4_ = *(uint *)(lVal_15 + 0x17339) ^ _UNK_1806b5b08;
    auArr_2._12_4_ = *(uint *)(lVal_15 + 0x1733d) ^ _UNK_1806b5b0c;
    *_Str = auArr_2;
    auArr_4._4_4_ = *(uint *)(lVal_15 + 0x17345) ^ uVal_9;
    auArr_4._0_4_ = *(uint *)(lVal_15 + 0x17341) ^ uVal_8;
    auArr_4._8_4_ = *(uint *)(lVal_15 + 0x17349) ^ uVal_10;
    auArr_4._12_4_ = *(uint *)(lVal_15 + 0x1734d) ^ uVal_11;
    *(uint8_t (*)[16])(lVal_15 + 0x17341) = auArr_4;
    auArr_6._4_4_ = *(uint *)(lVal_15 + 0x17355) ^ uVal_9;
    auArr_6._0_4_ = *(uint *)(lVal_15 + 0x17351) ^ uVal_8;
    auArr_6._8_4_ = *(uint *)(lVal_15 + 0x17359) ^ uVal_10;
    auArr_6._12_4_ = *(uint *)(lVal_15 + 0x1735d) ^ uVal_11;
    *(uint8_t (*)[16])(lVal_15 + 0x17351) = auArr_6;
    auArr_7._4_4_ = *(uint *)(lVal_15 + 0x17365) ^ uVal_9;
    auArr_7._0_4_ = *(uint *)(lVal_15 + 0x17361) ^ uVal_8;
    auArr_7._8_4_ = *(uint *)(lVal_15 + 0x17369) ^ uVal_10;
    auArr_7._12_4_ = *(uint *)(lVal_15 + 0x1736d) ^ uVal_11;
    *(uint8_t (*)[16])(lVal_15 + 0x17361) = auArr_7;
    *(ushort *)(lVal_15 + 0x17371) = *(ushort *)(lVal_15 + 0x17371) ^ 0xd1dd;
    *(uint8_t *)(lVal_15 + 0x17373) = 0;
  }
  local_c8 = ZEXT816(0);
  local_b8 = local_c8;
  sz_13 = strlen((char *)_Str);
  if ((int64_t)sz_13 < 0) {
    func_0x18007ba70();
LAB_1804e82fe:
    func_0x18007ba70();
LAB_1804e8304:
    func_0x18007ba70();
  }
  else {
    if (sz_13 < 0x10) {
      pU64_16 = local_c8;
      uVal_17 = 0xf;
    }
    else {
      uVal_14 = sz_13 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_14) {
        uVal_17 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        lVal_15 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_15;
      }
      local_c8._0_8_ = pU64_16;
    }
    local_b8._8_8_ = uVal_17;
    local_b8._0_8_ = sz_13;
    func_0x1806aa960(pU64_16,_Str,sz_13);
    pU64_16[sz_13] = 0;
    local_58._3_1_ = (uint8_t)_UNK_1806d58d5;
    local_58 = CONCAT13(local_58._3_1_,_UNK_1806d58d2);
    uStack_54._3_1_ = (uint8_t)_UNK_1806d58d9;
    uStack_54 = CONCAT13(uStack_54._3_1_,(int3)((uint)_UNK_1806d58d5 >> 8));
    local_68 = _DAT_1806d58c2;
    uStack_64 = _UNK_1806d58c6;
    uStack_60 = _UNK_1806d58ca;
    uStack_5c = _UNK_1806d58ce;
    local_78._4_4_ = _UNK_1806d58b6;
    local_78._0_4_ = _DAT_1806d58b2;
    uStack_70._0_4_ = _UNK_1806d58ba;
    uStack_70._4_4_ = _UNK_1806d58be;
    uStack_80 = _UNK_1806d58aa;
    local_88 = (uint8_t  [8])_DAT_1806d58a2;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x173b4) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x173b4) = 1;
      func_0x1801b2720(lVal_15 + 0x17375,local_88);
      func_0x180673140(&LAB_1804fdd10);
    }
    uVal_11 = _UNK_1806b5b0c;
    uVal_10 = _UNK_1806b5b08;
    uVal_9 = _UNK_1806b5b04;
    uVal_8 = _DAT_1806b5b00;
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_15 + 0x17375);
    if (*(char *)(lVal_15 + 0x173b0) == '\x01') {
      uVal_18 = *(uint *)(lVal_15 + 0x17379) ^ _UNK_1806b5b04;
      uVal_19 = *(uint *)(lVal_15 + 0x1737d) ^ _UNK_1806b5b08;
      uVal_20 = *(uint *)(lVal_15 + 0x17381) ^ _UNK_1806b5b0c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b5b00;
      *(uint *)(lVal_15 + 0x17379) = uVal_18;
      *(uint *)(lVal_15 + 0x1737d) = uVal_19;
      *(uint *)(lVal_15 + 0x17381) = uVal_20;
      auArr_3._4_4_ = *(uint *)(lVal_15 + 0x17389) ^ uVal_9;
      auArr_3._0_4_ = *(uint *)(lVal_15 + 0x17385) ^ uVal_8;
      auArr_3._8_4_ = *(uint *)(lVal_15 + 0x1738d) ^ uVal_10;
      auArr_3._12_4_ = *(uint *)(lVal_15 + 0x17391) ^ uVal_11;
      *(uint8_t (*)[16])(lVal_15 + 0x17385) = auArr_3;
      auArr_5._4_4_ = *(uint *)(lVal_15 + 0x17399) ^ uVal_9;
      auArr_5._0_4_ = *(uint *)(lVal_15 + 0x17395) ^ uVal_8;
      auArr_5._8_4_ = *(uint *)(lVal_15 + 0x1739d) ^ uVal_10;
      auArr_5._12_4_ = *(uint *)(lVal_15 + 0x173a1) ^ uVal_11;
      *(uint8_t (*)[16])(lVal_15 + 0x17395) = auArr_5;
      *(uint64_t *)(lVal_15 + 0x173a5) = *(uint64_t *)(lVal_15 + 0x173a5) ^ SUB168(_DAT_1806b5b10,0)
      ;
      *(byte *)(lVal_15 + 0x173ad) = *(byte *)(lVal_15 + 0x173ad) ^ 0xdd;
      *(byte *)(lVal_15 + 0x173ae) = *(byte *)(lVal_15 + 0x173ae) ^ 0xd1;
      *(byte *)(lVal_15 + 0x173af) = *(byte *)(lVal_15 + 0x173af) ^ 0x69;
      *(uint8_t *)(lVal_15 + 0x173b0) = 0;
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_1);
    if ((int64_t)sz_13 < 0) goto LAB_1804e82fe;
    if (sz_13 < 0x10) {
      pU64_16 = local_a8;
      uVal_17 = 0xf;
    }
    else {
      uVal_14 = sz_13 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_14) {
        uVal_17 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        lVal_15 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_15;
      }
      local_a8._0_8_ = pU64_16;
    }
    local_98._8_8_ = uVal_17;
    local_98._0_8_ = sz_13;
    func_0x1806aa960(pU64_16,pU64_1,sz_13);
    pU64_16[sz_13] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x173c4) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x173c4) = 1;
      *(uint64_t *)(lVal_15 + 0x173b8) = 0x1c7348a68001b2ae;
      *(uint32_t *)(lVal_15 + 0x173c0) = 0x169b0be;
      func_0x180673140(&LAB_1804fdd50);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint64_t *)(lVal_15 + 0x173b8);
    if (*(char *)(lVal_15 + 0x173c3) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0x750729cbe569d1dd;
      *(uint *)(lVal_15 + 0x173c0) =
           (*(uint *)(lVal_15 + 0x173c0) & 0xffff | (uint)*(byte *)(lVal_15 + 0x173c2) << 0x10) ^
           SUB164(_DAT_1806be370,0);
    }
    _local_78 = (uint8_t  [16])0x0;
    _local_88 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)_Str_00);
    if ((int64_t)sz_13 < 0) goto LAB_1804e8304;
    if (sz_13 < 0x10) {
      pU64_16 = local_88;
      uVal_17 = 0xf;
    }
    else {
      uVal_14 = sz_13 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_14) {
        uVal_17 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        lVal_15 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_15;
      }
      local_88 = (uint8_t  [8])pU64_16;
    }
    uStack_70 = uVal_17;
    local_78 = (uint8_t  [8])sz_13;
    func_0x1806aa960(pU64_16,_Str_00,sz_13);
    pU64_16[sz_13] = 0;
    pU64_16 = local_88;
    func_0x1804c9aa0(param_1,pU64_16,local_a8,local_c8);
    if (0xf < uStack_70) {
      uVal_17 = uStack_70 + 1;
      lVal_15 = (int64_t)local_88;
      if (0xfff < uVal_17) {
        lVal_15 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_15)) goto LAB_1804e8310;
        uVal_17 = uStack_70 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_17);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_17 = local_98._8_8_ + 1;
      lVal_15 = local_a8._0_8_;
      if (0xfff < uVal_17) {
        lVal_15 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_15)) goto LAB_1804e8310;
        uVal_17 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_17);
    }
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_17 = local_b8._8_8_ + 1;
      lVal_15 = local_c8._0_8_;
      if (0xfff < uVal_17) {
        lVal_15 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_15)) goto LAB_1804e8310;
        uVal_17 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_17);
    }
    *param_1 = &PTR_LAB_1806d0090;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x173d0) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x173d0) = 1;
      *(uint8_t *)(lVal_15 + 0x173ce) = 1;
      *(uint32_t *)(lVal_15 + 0x173c8) = 0xf6cba4f4;
      *(uint16_t *)(lVal_15 + 0x173cc) = 0xcdc8;
      func_0x180673140(&LAB_1804fdd80);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_15 + 0x173c8);
    if (*(char *)(lVal_15 + 0x173ce) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x93a3c787;
      *(byte *)(lVal_15 + 0x173cc) = *(byte *)(lVal_15 + 0x173cc) ^ 0xa5;
      *(byte *)(lVal_15 + 0x173cd) = *(byte *)(lVal_15 + 0x173cd) ^ 0xcd;
      *(uint8_t *)(lVal_15 + 0x173ce) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_1);
    local_40 = param_1;
    if (-1 < (int64_t)sz_13) {
      uVal_17 = 0xf;
      if (0xf < sz_13) {
        uVal_14 = sz_13 | 0xf;
        uVal_17 = 0x16;
        if (0x16 < uVal_14) {
          uVal_17 = uVal_14;
        }
        if (uVal_14 < 0xfff) {
          pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
        }
        else {
          lVal_15 = func_0x180672de0(uVal_17 + 0x28);
          pU64_16 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_16 + -8) = lVal_15;
        }
        local_88 = (uint8_t  [8])pU64_16;
      }
      pU64_12 = local_40;
      local_78 = (uint8_t  [8])sz_13;
      uStack_70 = uVal_17;
      func_0x1806aa960(pU64_16,pU64_1,sz_13);
      pU64_16[sz_13] = 0;
      func_0x180084770(pU64_12 + 0xd,local_88);
      pU64_12 = local_40;
      if (0xf < uStack_70) {
        uVal_17 = uStack_70 + 1;
        lVal_15 = (int64_t)local_88;
        if (0xfff < uVal_17) {
          lVal_15 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_15)) goto LAB_1804e8310;
          uVal_17 = uStack_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_17);
      }
      return pU64_12;
    }
  }
  func_0x18007ba70();
LAB_1804e8310:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1804e8320
void Unwind_1804e8320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1804e8350
void Unwind_1804e8350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1804e8380
void Unwind_1804e8380(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1804e83b0
void Unwind_1804e83b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1804e83e0
void Unwind_1804e83e0(uint64_t param_1,int64_t param_2)
{
  func_0x1804c9cc0(*(uint64_t *)(param_2 + 0xa8));
  return;
}

// Unwind@1804e8410
void Unwind_1804e8410(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17374) = 0;
  return;
}

// Unwind@1804e8450
void Unwind_1804e8450(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x173b4) = 0;
  return;
}

// Unwind@1804eb7d0
void Unwind_1804eb7d0(void)
{
  func_0x180672f60(&DAT_180841810);
  return;
}

// Unwind@1804eb810
void Unwind_1804eb810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  return;
}

// Unwind@1804eb850
void Unwind_1804eb850(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}
