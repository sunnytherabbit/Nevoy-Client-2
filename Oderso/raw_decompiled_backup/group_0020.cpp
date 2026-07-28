#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1801c41d0
void Unwind_1801c41d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xb0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x78));
    *(uint64_t *)(param_2 + 0xb0) = 0;
  }
  return;
}

// Unwind@1801c4220
void Unwind_1801c4220(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xf0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xb8));
    *(uint64_t *)(param_2 + 0xf0) = 0;
  }
  return;
}

// Unwind@1801c4270
void Unwind_1801c4270(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x741c) = 0;
  *(uint8_t *)(param_2 + 0x26f) = 1;
  return;
}

// Unwind@1801c42c0
void Unwind_1801c42c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x130);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xf8));
    *(uint64_t *)(param_2 + 0x130) = 0;
  }
  return;
}

// Unwind@1801c4320
void Unwind_1801c4320(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7460) = 0;
  *(uint8_t *)(param_2 + 0x26e) = 1;
  return;
}

// Unwind@1801c4370
void Unwind_1801c4370(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x170);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x138));
    *(uint64_t *)(param_2 + 0x170) = 0;
  }
  return;
}

// Unwind@1801c43d0
void Unwind_1801c43d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  *(uint8_t *)(param_2 + 0x26c) = 0;
  return;
}

// Unwind@1801c4410
void Unwind_1801c4410(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x26c);
  func_0x180001e70(param_2 + 0x210);
  *(uint8_t *)(param_2 + 0x26b) = uVal_1;
  return;
}

// Unwind@1801c4460
void Unwind_1801c4460(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x26b) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x70), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x38));
    *(uint64_t *)(param_2 + 0x70) = 0;
  }
  return;
}

// Unwind@1801c44c0
void Unwind_1801c44c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  *(uint8_t *)(param_2 + 0x26a) = 0;
  return;
}

// Unwind@1801c4500
void Unwind_1801c4500(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x26a);
  func_0x180001e70(param_2 + 0x210);
  *(uint8_t *)(param_2 + 0x269) = uVal_1;
  return;
}

// Unwind@1801c4550
void Unwind_1801c4550(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x269) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x78));
    *(uint64_t *)(param_2 + 0xb0) = 0;
  }
  return;
}

// Unwind@1801c45b0
void Unwind_1801c45b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x210);
  *(uint8_t *)(param_2 + 0x268) = 0;
  return;
}

// Unwind@1801c45f0
void Unwind_1801c45f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x268);
  func_0x180001e70(param_2 + 0x1d0);
  *(uint8_t *)(param_2 + 0x26f) = uVal_1;
  return;
}

// Unwind@1801c4640
void Unwind_1801c4640(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x26f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xb8));
    *(uint64_t *)(param_2 + 0xf0) = 0;
  }
  return;
}

// Unwind@1801c46a0
void Unwind_1801c46a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x210);
  *(uint8_t *)(param_2 + 0x267) = 0;
  return;
}

// Unwind@1801c46e0
void Unwind_1801c46e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x267);
  func_0x180001e70(param_2 + 0x1d0);
  *(uint8_t *)(param_2 + 0x26e) = uVal_1;
  return;
}

// Unwind@1801c4730
void Unwind_1801c4730(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x26e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x130), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xf8));
    *(uint64_t *)(param_2 + 0x130) = 0;
  }
  return;
}

// Unwind@1801c4790
void Unwind_1801c4790(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x210);
  *(uint8_t *)(param_2 + 0x266) = 0;
  return;
}

// Unwind@1801c47d0
void Unwind_1801c47d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x266);
  func_0x180001e70(param_2 + 0x1b0);
  *(uint8_t *)(param_2 + 0x26d) = uVal_1;
  return;
}

// Unwind@1801c4820
void Unwind_1801c4820(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  int64_t *pLong_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x26d);
  pLong_2 = *(int64_t **)(param_2 + 0x208);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != (int64_t *)(param_2 + 0x1d0));
  }
  func_0x180001e70(param_2 + 400);
  *(byte *)(param_2 + 0x265) = bFlag_1 & 1;
  return;
}

// Unwind@1801c4890
void Unwind_1801c4890(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x265) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x170), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x138));
    *(uint64_t *)(param_2 + 0x170) = 0;
  }
  return;
}

// Unwind@1801c48f0
void Unwind_1801c48f0(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(*(uint64_t *)(param_2 + 0x188));
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x180));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x178));
  return;
}

// Unwind@1801c4950
void Unwind_1801c4950(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x74c8) = 0;
  *(uint8_t *)(param_2 + 0x26d) = 1;
  return;
}

// func_0x1801c49a0
void func_0x1801c49a0(uint64_t *param_1)
{
  uint8_t (*pArr16_1)[16];
  int64_t lVal_2;
  int64_t *pLong_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t *pLong_7;
  
  *param_1 = &PTR_FUN_1806bb7a0;
  pArr16_1 = (uint8_t (*)[16])(param_1 + 9);
  pLong_7 = (int64_t *)param_1[9];
  pLong_3 = (int64_t *)param_1[10];
  if (pLong_7 != pLong_3) {
    do {
      lVal_2 = *pLong_7;
      if (lVal_2 != 0) {
        func_0x1801d4ce0(lVal_2);
        thunk_FUN_180695dd0(lVal_2,0x178);
        pLong_3 = (int64_t *)param_1[10];
      }
      pLong_7 = pLong_7 + 1;
    } while (pLong_7 != pLong_3);
    pLong_7 = *(int64_t **)*pArr16_1;
    if (pLong_7 != pLong_3) {
      param_1[10] = pLong_7;
    }
  }
  pLong_3 = (int64_t *)param_1[0xd];
  if (pLong_3 != (int64_t *)0x0) {
    pLong_7 = (int64_t *)param_1[0xe];
    if (pLong_3 == pLong_7) {
      uVal_6 = param_1[0xf] - (int64_t)pLong_3;
    }
    else {
      do {
        uVal_6 = pLong_3[3];
        if (0xf < uVal_6) {
          lVal_2 = *pLong_3;
          uVal_4 = uVal_6 + 1;
          lVal_5 = lVal_2;
          if (0xfff < uVal_4) {
            lVal_5 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_5)) goto LAB_1801c4a96;
            uVal_4 = uVal_6 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_5,uVal_4);
        }
        pLong_3[2] = 0;
        pLong_3[3] = 0xf;
        *(uint8_t *)pLong_3 = 0;
        pLong_3 = pLong_3 + 4;
      } while (pLong_3 != pLong_7);
      pLong_3 = *(int64_t **)*(uint8_t (*)[16])(param_1 + 0xd);
      uVal_6 = param_1[0xf] - (int64_t)pLong_3;
    }
    if (0xfff < uVal_6) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_3 + (-8 - (int64_t)(int64_t *)pLong_3[-1])))
      goto LAB_1801c4a96;
      uVal_6 = uVal_6 + 0x27;
      pLong_3 = (int64_t *)pLong_3[-1];
    }
    thunk_FUN_180695dd0(pLong_3,uVal_6);
    *(uint8_t (*)[16])(param_1 + 0xd) = ZEXT816(0);
    param_1[0xf] = 0;
    pLong_7 = *(int64_t **)*pArr16_1;
  }
  if (pLong_7 != (int64_t *)0x0) {
    uVal_6 = param_1[0xb] - (int64_t)pLong_7;
    pLong_3 = pLong_7;
    if (0xfff < uVal_6) {
      pLong_3 = (int64_t *)pLong_7[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_7 + (-8 - (int64_t)pLong_3))) goto LAB_1801c4a96;
      uVal_6 = uVal_6 + 0x27;
    }
    thunk_FUN_180695dd0(pLong_3,uVal_6);
    *pArr16_1 = ZEXT816(0);
    param_1[0xb] = 0;
  }
  uVal_6 = param_1[7];
  if (0xf < uVal_6) {
    lVal_2 = param_1[4];
    uVal_4 = uVal_6 + 1;
    lVal_5 = lVal_2;
    if (0xfff < uVal_4) {
      lVal_5 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_5)) {
LAB_1801c4a96:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_6 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_4);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(uint8_t *)(param_1 + 4) = 0;
  return;
}

// Unwind@1801c4e40
void Unwind_1801c4e40(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6f44) = 0;
  return;
}

// func_0x1801c4e80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801c4e80(uint64_t *param_1)
{
  uint *pU64_1;
  char *fnPtr_2;
  uint64_t *pU64_3;
  uint32_t *pU64_4;
  byte *pU8_5;
  uint8_t (*_Str)[16];
  uint64_t *pU64_6;
  uint8_t uVal_7;
  uint32_t uVal_8;
  func_ptr_t fnPtr_9;
  short sz_10;
  short sz_11;
  short sz_12;
  short sz_13;
  short sz_14;
  short sz_15;
  short sz_16;
  short sz_17;
  uint64_t uVal_18;
  uint64_t uVal_19;
  uint uVal_20;
  int64_t lVal_21;
  int64_t lVal_22;
  uint64_t *pU64_23;
  size_t sz_24;
  uint64_t uVal_25;
  uint64_t ***ptr3_U64_26;
  int64_t lVal_27;
  int64_t lVal_28;
  uint64_t *pU64_29;
  uint64_t ****ptr4_U64_30;
  uint64_t ****ptr4_U64_31;
  uint8_t *pU64_32;
  uint8_t *pU64_33;
  uint8_t *pU64_34;
  uint64_t ****ptr4_U64_35;
  int64_t *pLong_36;
  uint64_t uVal_37;
  uint uVal_41;
  int64_t lVal_38;
  uint uVal_42;
  uint uVal_43;
  uint uVal_45;
  int64_t lVal_44;
  uint uVal_46;
  uint uVal_47;
  uint8_t auArr_39 [16];
  uint8_t auArr_40 [16];
  int64_t lVal_48;
  int64_t lVal_49;
  int64_t lVal_50;
  int64_t lVal_51;
  int64_t lVal_52;
  int64_t lVal_53;
  uint64_t uVal_54;
  uint64_t uVal_56;
  uint8_t auArr_55 [16];
  uint64_t uVal_57;
  uint64_t uVal_58;
  uint64_t uVal_59;
  uint64_t uVal_61;
  uint8_t auArr_60 [16];
  uint64_t uVal_62;
  uint64_t uVal_65;
  uint8_t auArr_63 [16];
  uint8_t auArr_64 [16];
  uint8_t auArr_66 [16];
  uint8_t auArr_67 [16];
  uint8_t auArr_68 [16];
  uint8_t auArr_69 [16];
  uint64_t uVal_70;
  uint32_t uVal_71;
  uint32_t uVal_73;
  uint64_t uVal_72;
  uint in_stack_fffffffffffffa88;
  uint uVal_74;
  uint8_t **local_558;
  uint64_t *local_550;
  uint8_t ***local_520;
  uint8_t **local_518;
  uint64_t *local_510;
  uint8_t ***local_4e0;
  uint8_t **local_4d8;
  uint64_t *local_4d0;
  uint8_t ***local_4a0;
  uint8_t **local_498;
  uint64_t *local_490;
  uint8_t ***local_460;
  uint64_t local_458;
  uint64_t uStack_450;
  uint64_t local_448;
  uint64_t uStack_440;
  uint8_t local_438 [56];
  uint64_t local_400;
  uint8_t local_3f8 [56];
  uint64_t local_3c0;
  uint8_t local_3b8 [56];
  uint64_t local_380;
  uint8_t local_378 [56];
  uint64_t local_340;
  uint8_t local_338 [56];
  uint64_t local_300;
  uint8_t local_2f8 [56];
  uint64_t local_2c0;
  uint8_t local_2b8 [56];
  uint64_t local_280;
  uint8_t local_278 [56];
  uint64_t local_240;
  uint8_t local_238 [56];
  uint64_t local_200;
  uint8_t local_1f8 [56];
  uint64_t local_1c0;
  uint64_t *local_1b8;
  uint64_t *local_1b0;
  uint64_t ****local_1a8;
  uint8_t uStack_1a0;
  uint32_t uStack_19f;
  uint32_t uStack_19b;
  uint32_t uStack_197;
  uint32_t uStack_193;
  undefined7 uStack_18f;
  uint64_t ****local_188;
  undefined7 uStack_180;
  uint8_t uStack_179;
  uint16_t uStack_178;
  uint8_t uStack_176;
  undefined5 uStack_175;
  uint64_t uStack_170;
  uint8_t local_168 [8];
  uint64_t uStack_160;
  uint32_t local_158;
  uint32_t uStack_154;
  uint16_t uStack_150;
  uint16_t uStack_14e;
  uint16_t uStack_14c;
  uint16_t uStack_14a;
  uint16_t uStack_148;
  uint16_t uStack_146;
  uint16_t uStack_144;
  uint16_t uStack_142;
  uint16_t uStack_140;
  uint16_t uStack_13e;
  uint16_t uStack_13c;
  uint16_t uStack_13a;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t *local_120;
  uint64_t ****local_118;
  undefined7 uStack_110;
  uint8_t uStack_109;
  uint32_t uStack_108;
  uint32_t uStack_104;
  uint64_t uStack_100;
  uint8_t local_ed;
  uint8_t local_ec;
  uint8_t local_eb;
  uint8_t local_ea;
  uint8_t local_e9;
  uint8_t local_e8;
  uint8_t local_e7;
  uint8_t local_e6;
  uint8_t local_e5;
  uint8_t local_e4;
  uint8_t local_e3;
  uint8_t local_e2;
  uint8_t local_e1;
  uint8_t local_e0;
  uint8_t local_df;
  uint8_t local_de;
  uint8_t local_dd;
  uint8_t local_dc;
  uint8_t local_db;
  uint8_t local_da;
  uint8_t local_d9;
  uint8_t local_d8;
  uint8_t local_d7;
  uint8_t local_d6;
  uint8_t local_d5;
  uint8_t local_d4;
  uint8_t local_d3;
  uint8_t local_d2;
  uint8_t local_d1;
  uint64_t local_d0;
  
  local_d0 = 0xfffffffffffffffe;
  uStack_148 = _UNK_1806bcee3;
  uStack_146 = (uint16_t)_UNK_1806bcee5;
  uStack_144 = (uint16_t)((uint)_UNK_1806bcee5 >> 0x10);
  uStack_142 = (uint16_t)_UNK_1806bcee9;
  uStack_140 = (uint16_t)((uint)_UNK_1806bcee9 >> 0x10);
  local_158 = _DAT_1806bced3;
  uStack_154 = _UNK_1806bced7;
  uStack_150 = _UNK_1806bcedb;
  uStack_14e = _DAT_1806bcedd;
  uStack_14c = _UNK_1806bcedf;
  uStack_14a = _UNK_1806bcee1;
  uStack_160 = _UNK_1806bcecb;
  local_168 = (uint8_t  [8])_DAT_1806bcec3;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x6f70) == '\0') {
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_27 + 0x6f70) = 1;
    func_0x18012b7b0(lVal_27 + 0x6f45,local_168);
    func_0x180673140(&LAB_18020e740);
  }
  uVal_20 = _UNK_1806b2d1c;
  uVal_46 = _UNK_1806b2d18;
  uVal_43 = _UNK_1806b2d14;
  uVal_74 = _DAT_1806b2d10;
  lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_27 + 0x6f45);
  if (*(char *)(lVal_27 + 0x6f6f) == '\x01') {
    uVal_41 = *(uint *)(lVal_27 + 0x6f49) ^ _UNK_1806b2d14;
    uVal_42 = *(uint *)(lVal_27 + 0x6f4d) ^ _UNK_1806b2d18;
    uVal_45 = *(uint *)(lVal_27 + 0x6f51) ^ _UNK_1806b2d1c;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2d10;
    *(uint *)(lVal_27 + 0x6f49) = uVal_41;
    *(uint *)(lVal_27 + 0x6f4d) = uVal_42;
    *(uint *)(lVal_27 + 0x6f51) = uVal_45;
    *(uint *)(lVal_27 + 0x6f55) = *(uint *)(lVal_27 + 0x6f55) ^ uVal_74;
    *(uint *)(lVal_27 + 0x6f59) = *(uint *)(lVal_27 + 0x6f59) ^ uVal_43;
    *(uint *)(lVal_27 + 0x6f5d) = *(uint *)(lVal_27 + 0x6f5d) ^ uVal_46;
    *(uint *)(lVal_27 + 0x6f61) = *(uint *)(lVal_27 + 0x6f61) ^ uVal_20;
    *(uint64_t *)(lVal_27 + 0x6f65) = *(uint64_t *)(lVal_27 + 0x6f65) ^ SUB168(_DAT_1806b5c30,0);
    *(byte *)(lVal_27 + 0x6f6d) = *(byte *)(lVal_27 + 0x6f6d) ^ 0xd5;
    *(byte *)(lVal_27 + 0x6f6e) = *(byte *)(lVal_27 + 0x6f6e) ^ 0xf1;
    *(uint8_t *)(lVal_27 + 0x6f6f) = 0;
  }
  local_158 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_14e = 0;
  uStack_14c = 0;
  uStack_14a = 0;
  _local_168 = (uint8_t  [16])0x0;
  local_120 = param_1;
  sz_24 = strlen((char *)pU64_1);
  if ((int64_t)sz_24 < 0) {
    func_0x18007ba70();
LAB_1801c8b93:
    local_e1 = 1;
    func_0x18007ba70();
LAB_1801c8ba0:
    local_d1 = 1;
    func_0x18007ba70();
LAB_1801c8bad:
    local_e0 = 1;
    func_0x18007ba70();
LAB_1801c8bba:
    local_d2 = 1;
    func_0x18007ba70();
LAB_1801c8bc7:
    local_e2 = 1;
    func_0x18007ba70();
LAB_1801c8bd4:
    local_e3 = 1;
    func_0x18007ba70();
LAB_1801c8be1:
    local_d3 = 1;
    func_0x18007ba70();
LAB_1801c8bee:
    local_d5 = 1;
    func_0x18007ba70();
LAB_1801c8bfb:
    local_d4 = 1;
    func_0x18007ba70();
LAB_1801c8c08:
    local_d6 = 1;
    func_0x18007ba70();
LAB_1801c8c15:
    local_e4 = 1;
    func_0x18007ba70();
LAB_1801c8c22:
    local_d7 = 1;
    func_0x18007ba70();
LAB_1801c8c2f:
    local_e5 = 1;
    func_0x18007ba70();
LAB_1801c8c3c:
    local_d8 = 1;
    func_0x18007ba70();
LAB_1801c8c49:
    local_e6 = 1;
    func_0x18007ba70();
LAB_1801c8c56:
    local_d9 = 1;
    func_0x18007ba70();
LAB_1801c8c63:
    local_e7 = 1;
    func_0x18007ba70();
LAB_1801c8c70:
    local_e8 = 1;
    func_0x18007ba70();
LAB_1801c8c7d:
    local_da = 1;
    func_0x18007ba70();
LAB_1801c8c8a:
    local_db = 1;
    func_0x18007ba70();
LAB_1801c8c97:
    local_e9 = 1;
    func_0x18007ba70();
LAB_1801c8ca4:
    local_ea = 1;
    func_0x18007ba70();
LAB_1801c8cb1:
    local_dc = 1;
    func_0x18007ba70();
LAB_1801c8cbe:
    local_dd = 1;
    func_0x18007ba70();
LAB_1801c8ccb:
    local_eb = 1;
    func_0x18007ba70();
LAB_1801c8cd8:
    local_de = 1;
    func_0x18007ba70();
LAB_1801c8ce5:
    local_ec = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_24 < 0x10) {
      pU64_34 = local_168;
      uVal_37 = 0xf;
    }
    else {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        pU64_34 = (uint8_t *)func_0x180672de0(uVal_37 + 1);
      }
      else {
        lVal_27 = func_0x180672de0(uVal_37 + 0x28);
        pU64_34 = (uint8_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_34 + -8) = lVal_27;
      }
      local_168 = (uint8_t  [8])pU64_34;
    }
    local_158 = (uint32_t)sz_24;
    uStack_154 = (uint32_t)(sz_24 >> 0x20);
    uStack_150 = (uint16_t)uVal_37;
    uStack_14e = (uint16_t)(uVal_37 >> 0x10);
    uStack_14c = (uint16_t)(uVal_37 >> 0x20);
    uStack_14a = (uint16_t)(uVal_37 >> 0x30);
    func_0x1806aa960(pU64_34,pU64_1,sz_24);
    pU64_34[sz_24] = 0;
    pU64_29 = local_120;
    func_0x180132ee0(local_120,0,0,local_168);
    uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      lVal_27 = (int64_t)local_168;
      if (0xfff < uVal_25) {
        lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_27,uVal_25);
    }
    *pU64_29 = &PTR_LAB_1806bb4f0;
    uVal_8 = _UNK_1806bafcc;
    uVal_73 = _UNK_1806bafc8;
    uVal_71 = _UNK_1806bafc4;
    *(uint32_t *)(pU64_29 + 0x16) = _DAT_1806bafc0;
    *(uint32_t *)((int64_t)pU64_29 + 0xb4) = uVal_71;
    *(uint32_t *)(pU64_29 + 0x17) = uVal_73;
    *(uint32_t *)((int64_t)pU64_29 + 0xbc) = uVal_8;
    *(uint8_t *)(pU64_29 + 0x18) = 0;
    uVal_8 = _UNK_1806b5b2c;
    uVal_73 = _UNK_1806b5b28;
    uVal_71 = _UNK_1806b5b24;
    *(uint32_t *)((int64_t)pU64_29 + 0xc4) = _DAT_1806b5b20;
    *(uint32_t *)(pU64_29 + 0x19) = uVal_71;
    *(uint32_t *)((int64_t)pU64_29 + 0xcc) = uVal_73;
    *(uint32_t *)(pU64_29 + 0x1a) = uVal_8;
    *(uint8_t *)((int64_t)pU64_29 + 0xd4) = 0;
    uVal_70 = _UNK_1806bafd8;
    pU64_29[0x1b] = _DAT_1806bafd0;
    pU64_29[0x1c] = uVal_70;
    *(uint16_t *)(pU64_29 + 0x1d) = 0x101;
    *(uint32_t *)((int64_t)pU64_29 + 0xec) = 0x41000000;
    func_0x1806ab010(pU64_29 + 0x1f,0,0x120);
    *(uint8_t (*)[16])(pU64_29 + 0x46) = (uint8_t  [16])0x0;
    *(uint8_t *)(pU64_29 + 0x4c) = 0;
    *(uint8_t (*)[16])(pU64_29 + 0x4e) = (uint8_t  [16])0x0;
    func_0x1806ab010(pU64_29 + 0x51,0,0x120);
    *(uint8_t (*)[16])(pU64_29 + 0x78) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(pU64_29 + 0x7b) = (uint8_t  [16])0x0;
    *(uint8_t *)((int64_t)pU64_29 + 0x3ec) = 0;
    *(uint8_t (*)[16])(pU64_29 + 0x8c) = (uint8_t  [16])0x0;
    pU64_29[0x8e] = 0;
    *(uint8_t (*)[16])(pU64_29 + 0x90) = (uint8_t  [16])0x0;
    *(uint8_t *)(pU64_29 + 0x96) = 0;
    *(uint8_t (*)[16])(pU64_29 + 0x98) = (uint8_t  [16])0x0;
    func_0x1806ab010(pU64_29 + 0x9b,0,0x120);
    *(uint8_t (*)[16])(pU64_29 + 0xc2) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(pU64_29 + 0xc5) = (uint8_t  [16])0x0;
    *(uint8_t *)((int64_t)pU64_29 + 0x63c) = 0;
    *(uint8_t (*)[16])(pU64_29 + 0xd6) = (uint8_t  [16])0x0;
    pU64_29[0xd8] = 0;
    local_1b8 = pU64_29 + 0xd9;
    auArr_39._12_4_ = 0;
    auArr_39._0_12_ = stack0xfffffffffffffe9c;
    _local_168 = auArr_39 << 0x20;
    ptr4_U64_35 = &local_118;
    func_0x180214ef0(local_1b8,local_168,ptr4_U64_35);
    local_1b0 = local_120 + 0xe1;
    *(uint8_t (*)[16])(local_120 + 0xe1) = (uint8_t  [16])0x0;
    local_120[0xe3] = 0;
    local_400 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_400 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_438);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6f7c) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x6f7c) = 1;
      *(uint8_t *)(lVal_27 + 0x6f7a) = 1;
      *(uint32_t *)(lVal_27 + 0x6f74) = 0x442cbf4e;
      *(uint16_t *)(lVal_27 + 0x6f78) = 0x7337;
      func_0x180673140(&LAB_18020e770);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_27 + 0x6f74);
    if (*(char *)(lVal_27 + 0x6f7a) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x2549d30d;
      *(byte *)(lVal_27 + 0x6f78) = *(byte *)(lVal_27 + 0x6f78) ^ 0x45;
      *(byte *)(lVal_27 + 0x6f79) = *(byte *)(lVal_27 + 0x6f79) ^ 0x73;
      *(uint8_t *)(lVal_27 + 0x6f7a) = 0;
    }
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen((char *)pU64_1);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8b93;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_e1 = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_118 = ptr4_U64_35;
      }
      else {
        local_e1 = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_118 = ptr4_U64_35;
      }
    }
    uStack_108 = (uint32_t)sz_24;
    uStack_104 = (uint32_t)(sz_24 >> 0x20);
    uStack_100 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,pU64_1,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    uStack_160 = local_120;
    local_168 = (uint8_t  [8])&PTR_LAB_1806bdf30;
    uStack_130 = (int64_t *)local_168;
    uStack_197 = _UNK_1806bcefe;
    uStack_193 = _UNK_1806bcf02;
    local_1a8 = _DAT_1806bceed;
    uStack_1a0 = UNK_1806bcef5;
    uStack_19f = _DAT_1806bcef6;
    uStack_19b = _UNK_1806bcefa;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6f98) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x6f98) = 1;
      func_0x1800904a0(lVal_27 + 0x6f7d,&local_1a8);
      func_0x180673140(&LAB_18020e7a0);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x6f7d);
    func_0x180215050(fnPtr_2);
    uStack_178 = 0;
    uStack_176 = 0;
    uStack_175 = 0;
    uStack_170 = 0;
    local_188 = (uint64_t ****)0x0;
    uStack_180 = 0;
    uStack_179 = 0;
    sz_24 = strlen(fnPtr_2);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8ba0;
    if (sz_24 < 0x10) {
      ptr4_U64_35 = &local_188;
      uVal_37 = 0xf;
    }
    else {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_d1 = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_188 = ptr4_U64_35;
      }
      else {
        local_d1 = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_188 = ptr4_U64_35;
      }
    }
    uStack_178 = (uint16_t)sz_24;
    uStack_176 = (uint8_t)(sz_24 >> 0x10);
    uStack_175 = (undefined5)(sz_24 >> 0x18);
    uStack_170 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,fnPtr_2,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6fb0) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x6fb0) = 1;
      *(uint64_t *)(lVal_27 + 0x6fa0) = 0xd025337442cbf4e;
      *(uint32_t *)(lVal_27 + 0x6fa8) = 0x5622bd78;
      *(uint16_t *)(lVal_27 + 0x6fac) = 0x145;
      func_0x180673140(&LAB_18020e7d0);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_27 + 0x6fa0);
    if (*(char *)(lVal_27 + 0x6fad) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x656173452549d30d;
      *(uint *)(lVal_27 + 0x6fa8) = *(uint *)(lVal_27 + 0x6fa8) ^ 0x2549d30d;
      *(byte *)(lVal_27 + 0x6fac) = *(byte *)(lVal_27 + 0x6fac) ^ 0x45;
      *(uint8_t *)(lVal_27 + 0x6fad) = 0;
    }
    uStack_197 = 0;
    uStack_193 = 0;
    uStack_18f = 0;
    local_1a8 = (uint64_t ****)0x0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_19b = 0;
    sz_24 = strlen((char *)pU64_3);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8bad;
    if (sz_24 < 0x10) {
      ptr4_U64_35 = &local_1a8;
      uVal_37 = 0xf;
    }
    else {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_e0 = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_1a8 = ptr4_U64_35;
      }
      else {
        local_e0 = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_1a8 = ptr4_U64_35;
      }
    }
    uStack_197 = (uint32_t)(sz_24 >> 8);
    uStack_193._3_1_ = (uint8_t)uVal_37;
    uStack_18f = (undefined7)(uVal_37 >> 8);
    func_0x1806aa960(ptr4_U64_35,pU64_3,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    ptr4_U64_35 = &local_118;
    in_stack_fffffffffffffa88 = in_stack_fffffffffffffa88 & 0xffffff00;
    pLong_36 = (int64_t *)local_168;
    ptr4_U64_31 = ptr4_U64_35;
    func_0x1801ccb00(local_120,&local_1a8,&local_188,pLong_36,ptr4_U64_35,local_438,
                  in_stack_fffffffffffffa88);
    uVal_37 = CONCAT71(uStack_18f,uStack_193._3_1_);
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      ptr4_U64_30 = local_1a8;
      if (0xfff < uVal_25) {
        ptr4_U64_30 = (uint64_t ****)local_1a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_1a8 + (-8 - (int64_t)ptr4_U64_30)))
        goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_30,uVal_25);
    }
    if (0xf < uStack_170) {
      uVal_37 = uStack_170 + 1;
      ptr4_U64_30 = local_188;
      if (0xfff < uVal_37) {
        ptr4_U64_30 = (uint64_t ****)local_188[-1];
        if (0x1f < (uint64_t)((int64_t)local_188 + (-8 - (int64_t)ptr4_U64_30)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_170 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_30,uVal_37);
    }
    if (uStack_130 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*uStack_130 + 0x20))(uStack_130,uStack_130 != pLong_36);
    }
    if (0xf < uStack_100) {
      uVal_37 = uStack_100 + 1;
      ptr4_U64_30 = local_118;
      if (0xfff < uVal_37) {
        ptr4_U64_30 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_30)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_30,uVal_37);
    }
    local_3c0 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_3c0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_3f8);
    }
    pU64_34 = (uint8_t *)((int64_t)local_120 + 0xb1);
    uVal_7 = *pU64_34;
    uStack_148 = (uint16_t)_DAT_1806bcf26;
    uStack_146 = (uint16_t)((uint)_DAT_1806bcf26 >> 0x10);
    uStack_144 = (uint16_t)_UNK_1806bcf2a;
    uStack_142 = (uint16_t)((uint)_UNK_1806bcf2a >> 0x10);
    uStack_140 = (uint16_t)_UNK_1806bcf2e;
    uStack_13e = (uint16_t)((uint)_UNK_1806bcf2e >> 0x10);
    uStack_13c = (uint16_t)_UNK_1806bcf32;
    uStack_13a = (uint16_t)((uint)_UNK_1806bcf32 >> 0x10);
    local_158 = _DAT_1806bcf16;
    uStack_154 = _UNK_1806bcf1a;
    uStack_150 = (uint16_t)_UNK_1806bcf1e;
    uStack_14e = (uint16_t)((uint)_UNK_1806bcf1e >> 0x10);
    uStack_14c = (uint16_t)_UNK_1806bcf22;
    uStack_14a = (uint16_t)((uint)_UNK_1806bcf22 >> 0x10);
    uStack_160 = _UNK_1806bcf0e;
    local_168 = (uint8_t  [8])_DAT_1806bcf06;
    uStack_138 = 0xefa3daf8cea707b6;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6fec) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x6fec) = 1;
      func_0x18012b940(lVal_27 + 0x6fb1,local_168);
      func_0x180673140(&LAB_18020e800);
    }
    uVal_20 = _UNK_1806ae4dc;
    uVal_46 = _UNK_1806ae4d8;
    uVal_43 = _UNK_1806ae4d4;
    uVal_74 = _DAT_1806ae4d0;
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_27 + 0x6fb1);
    if (*(char *)(lVal_27 + 0x6fe9) == '\x01') {
      uVal_41 = *(uint *)(lVal_27 + 0x6fb5) ^ _UNK_1806ae4d4;
      uVal_42 = *(uint *)(lVal_27 + 0x6fb9) ^ _UNK_1806ae4d8;
      uVal_45 = *(uint *)(lVal_27 + 0x6fbd) ^ _UNK_1806ae4dc;
      *pU64_1 = *pU64_1 ^ _DAT_1806ae4d0;
      *(uint *)(lVal_27 + 0x6fb5) = uVal_41;
      *(uint *)(lVal_27 + 0x6fb9) = uVal_42;
      *(uint *)(lVal_27 + 0x6fbd) = uVal_45;
      *(uint *)(lVal_27 + 0x6fc1) = *(uint *)(lVal_27 + 0x6fc1) ^ uVal_74;
      *(uint *)(lVal_27 + 0x6fc5) = *(uint *)(lVal_27 + 0x6fc5) ^ uVal_43;
      *(uint *)(lVal_27 + 0x6fc9) = *(uint *)(lVal_27 + 0x6fc9) ^ uVal_46;
      *(uint *)(lVal_27 + 0x6fcd) = *(uint *)(lVal_27 + 0x6fcd) ^ uVal_20;
      *(uint *)(lVal_27 + 0x6fd1) = *(uint *)(lVal_27 + 0x6fd1) ^ uVal_74;
      *(uint *)(lVal_27 + 0x6fd5) = *(uint *)(lVal_27 + 0x6fd5) ^ uVal_43;
      *(uint *)(lVal_27 + 0x6fd9) = *(uint *)(lVal_27 + 0x6fd9) ^ uVal_46;
      *(uint *)(lVal_27 + 0x6fdd) = *(uint *)(lVal_27 + 0x6fdd) ^ uVal_20;
      *(uint64_t *)(lVal_27 + 0x6fe1) = *(uint64_t *)(lVal_27 + 0x6fe1) ^ SUB168(_DAT_1806b54d0,0);
      *(uint8_t *)(lVal_27 + 0x6fe9) = 0;
    }
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen((char *)pU64_1);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8bba;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_d2 = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_118 = ptr4_U64_35;
      }
      else {
        local_d2 = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_118 = ptr4_U64_35;
      }
    }
    uStack_108 = (uint32_t)sz_24;
    uStack_104 = (uint32_t)(sz_24 >> 0x20);
    uStack_100 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,pU64_1,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6ff8) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x6ff8) = 1;
      *(uint64_t *)(lVal_27 + 0x6ff0) = 0x1c7daf5c0b10390;
      func_0x180673140(&LAB_18020e840);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_27 + 0x6ff0);
    if (*(char *)(lVal_27 + 0x6ff7) == '\x01') {
      *pU64_3 = (CONCAT44((uint)*(ushort *)(lVal_27 + 0x6ff5) << 8,*(uint32_t *)pU64_3) |
                (uint64_t)*(byte *)(lVal_27 + 0x6ff4) << 0x20) ^ SUB168(_DAT_1806ae220,0);
    }
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14e = 0;
    uStack_14c = 0;
    uStack_14a = 0;
    _local_168 = (uint8_t  [16])0x0;
    sz_24 = strlen((char *)pU64_3);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8bc7;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_e2 = 1;
        pLong_36 = (int64_t *)func_0x180672de0(uVal_37 + 1);
      }
      else {
        local_e2 = 1;
        lVal_27 = func_0x180672de0(uVal_37 + 0x28);
        pLong_36 = (int64_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
        pLong_36[-1] = lVal_27;
      }
      local_168 = (uint8_t  [8])pLong_36;
    }
    local_158 = (uint32_t)sz_24;
    uStack_154 = (uint32_t)(sz_24 >> 0x20);
    uStack_150 = (uint16_t)uVal_37;
    uStack_14e = (uint16_t)(uVal_37 >> 0x10);
    uStack_14c = (uint16_t)(uVal_37 >> 0x20);
    uStack_14a = (uint16_t)(uVal_37 >> 0x30);
    func_0x1806aa960(pLong_36,pU64_3,sz_24);
    *(uint8_t *)((int64_t)pLong_36 + sz_24) = 0;
    uVal_70 = CONCAT71((int7)((uint64_t)ptr4_U64_31 >> 8),uVal_7);
    in_stack_fffffffffffffa88 = in_stack_fffffffffffffa88 & 0xffffff00;
    pU64_32 = local_168;
    ptr4_U64_35 = &local_118;
    func_0x1801ccd70(local_120,pU64_32,ptr4_U64_35,pU64_34,uVal_70,local_3f8,in_stack_fffffffffffffa88);
    uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      lVal_27 = (int64_t)local_168;
      if (0xfff < uVal_25) {
        lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_27,uVal_25);
    }
    if (0xf < uStack_100) {
      uVal_37 = uStack_100 + 1;
      ptr4_U64_31 = local_118;
      if (0xfff < uVal_37) {
        ptr4_U64_31 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_31)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_31,uVal_37);
    }
    local_380 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_380 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_3b8);
    }
    pU64_34 = (uint8_t *)((int64_t)local_120 + 0xb2);
    uVal_7 = *pU64_34;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7058) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x7058) = 1;
      *(uint8_t *)(lVal_27 + 0x7054) = 1;
      uVal_8 = _UNK_1806bcf4a;
      uVal_73 = _UNK_1806bcf46;
      uVal_71 = _UNK_1806bcf42;
      *(uint32_t *)(lVal_27 + 0x6ff9) = _DAT_1806bcf3e;
      *(uint32_t *)(lVal_27 + 0x6ffd) = uVal_71;
      *(uint32_t *)(lVal_27 + 0x7001) = uVal_73;
      *(uint32_t *)(lVal_27 + 0x7005) = uVal_8;
      uVal_8 = _UNK_1806bcf5a;
      uVal_73 = _UNK_1806bcf56;
      uVal_71 = _UNK_1806bcf52;
      *(uint32_t *)(lVal_27 + 0x7009) = _DAT_1806bcf4e;
      *(uint32_t *)(lVal_27 + 0x700d) = uVal_71;
      *(uint32_t *)(lVal_27 + 0x7011) = uVal_73;
      *(uint32_t *)(lVal_27 + 0x7015) = uVal_8;
      uVal_8 = _UNK_1806bcf6a;
      uVal_73 = _UNK_1806bcf66;
      uVal_71 = _UNK_1806bcf62;
      *(uint32_t *)(lVal_27 + 0x7019) = _DAT_1806bcf5e;
      *(uint32_t *)(lVal_27 + 0x701d) = uVal_71;
      *(uint32_t *)(lVal_27 + 0x7021) = uVal_73;
      *(uint32_t *)(lVal_27 + 0x7025) = uVal_8;
      uVal_8 = _UNK_1806bcf7a;
      uVal_73 = _UNK_1806bcf76;
      uVal_71 = _UNK_1806bcf72;
      *(uint32_t *)(lVal_27 + 0x7029) = _DAT_1806bcf6e;
      *(uint32_t *)(lVal_27 + 0x702d) = uVal_71;
      *(uint32_t *)(lVal_27 + 0x7031) = uVal_73;
      *(uint32_t *)(lVal_27 + 0x7035) = uVal_8;
      uVal_8 = _UNK_1806bcf8a;
      uVal_73 = _UNK_1806bcf86;
      uVal_71 = _UNK_1806bcf82;
      *(uint32_t *)(lVal_27 + 0x7039) = _DAT_1806bcf7e;
      *(uint32_t *)(lVal_27 + 0x703d) = uVal_71;
      *(uint32_t *)(lVal_27 + 0x7041) = uVal_73;
      *(uint32_t *)(lVal_27 + 0x7045) = uVal_8;
      uVal_72 = _UNK_1806bcf91;
      *(uint64_t *)(lVal_27 + 0x7044) =
           CONCAT35(_UNK_1806bcf8e,CONCAT41(_UNK_1806bcf8a,DAT_1806bcf89));
      *(uint64_t *)(lVal_27 + 0x704c) = uVal_72;
      func_0x180673140(&LAB_18020e870);
    }
    lVal_22 = _UNK_1806bb038;
    lVal_21 = _DAT_1806bb030;
    auArr_39 = _DAT_1806bb020;
    uVal_25 = _UNK_1806bb018;
    uVal_37 = _DAT_1806bb010;
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    fnPtr_2 = (char *)(lVal_27 + 0x6ff9);
    if (*(char *)(lVal_27 + 0x7054) == '\x01') {
      lVal_28 = 0;
      uVal_18 = CONCAT44(_UNK_1806b2cb4,_DAT_1806b2cb0);
      uVal_19 = CONCAT44(_UNK_1806b2cbc,_UNK_1806b2cb8);
      lVal_38 = _DAT_1806bafe0;
      lVal_44 = _UNK_1806bafe8;
      lVal_48 = _DAT_1806baff0;
      lVal_49 = _UNK_1806baff8;
      lVal_50 = _DAT_1806bb000;
      lVal_51 = _UNK_1806bb008;
      lVal_52 = _DAT_1806aeb30;
      lVal_53 = _UNK_1806aeb38;
      do {
        uVal_57 = lVal_52 << 3 & uVal_37;
        uVal_58 = lVal_53 << 3 & uVal_25;
        uVal_62 = lVal_50 << 3 & uVal_37;
        uVal_65 = lVal_51 << 3 & uVal_25;
        uVal_59 = lVal_48 << 3 & uVal_37;
        uVal_61 = lVal_49 << 3 & uVal_25;
        uVal_54 = lVal_38 << 3 & uVal_37;
        uVal_56 = lVal_44 << 3 & uVal_25;
        auArr_67._0_8_ = uVal_18 >> uVal_54;
        auArr_67._8_8_ = uVal_19 >> uVal_54;
        auArr_55._0_8_ = uVal_18 >> uVal_56;
        auArr_55._8_8_ = uVal_19 >> uVal_56;
        auArr_55 = pblendw(auArr_55,auArr_67,0xf);
        auArr_69._0_8_ = uVal_18 >> uVal_59;
        auArr_69._8_8_ = uVal_19 >> uVal_59;
        auArr_68._0_8_ = uVal_18 >> uVal_61;
        auArr_68._8_8_ = uVal_19 >> uVal_61;
        auArr_69 = pblendw(auArr_68,auArr_69,0xf);
        auArr_64._0_8_ = uVal_18 >> uVal_62;
        auArr_64._8_8_ = uVal_19 >> uVal_62;
        auArr_66._0_8_ = uVal_18 >> uVal_65;
        auArr_66._8_8_ = uVal_19 >> uVal_65;
        auArr_67 = pblendw(auArr_66,auArr_64,0xf);
        auArr_60._0_8_ = uVal_18 >> uVal_57;
        auArr_60._8_8_ = uVal_19 >> uVal_57;
        auArr_63._0_8_ = uVal_18 >> uVal_58;
        auArr_63._8_8_ = uVal_19 >> uVal_58;
        auArr_64 = pblendw(auArr_63,auArr_60,0xf);
        auArr_64 = packusdw(auArr_64 & auArr_39,auArr_67 & auArr_39);
        auArr_55 = packusdw(auArr_69 & auArr_39,auArr_55 & auArr_39);
        auArr_55 = packusdw(auArr_64,auArr_55);
        sz_10 = auArr_55._0_2_;
        sz_11 = auArr_55._2_2_;
        sz_12 = auArr_55._4_2_;
        sz_13 = auArr_55._6_2_;
        sz_14 = auArr_55._8_2_;
        sz_15 = auArr_55._10_2_;
        sz_16 = auArr_55._12_2_;
        sz_17 = auArr_55._14_2_;
        *(uint64_t *)(fnPtr_2 + lVal_28) =
             *(uint64_t *)(fnPtr_2 + lVal_28) ^
             CONCAT17((0 < sz_17) * (sz_17 < 0xff) * auArr_55[14] - (0xff < sz_17),
                      CONCAT16((0 < sz_16) * (sz_16 < 0xff) * auArr_55[12] - (0xff < sz_16),
                               CONCAT15((0 < sz_15) * (sz_15 < 0xff) * auArr_55[10] -
                                        (0xff < sz_15),
                                        CONCAT14((0 < sz_14) * (sz_14 < 0xff) * auArr_55[8] -
                                                 (0xff < sz_14),
                                                 CONCAT13((0 < sz_13) * (sz_13 < 0xff) *
                                                          auArr_55[6] - (0xff < sz_13),
                                                          CONCAT12((0 < sz_12) * (sz_12 < 0xff) *
                                                                   auArr_55[4] - (0xff < sz_12),
                                                                   CONCAT11((0 < sz_11) *
                                                                            (sz_11 < 0xff) *
                                                                            auArr_55[2] -
                                                                            (0xff < sz_11),
                                                                            (0 < sz_10) *
                                                                            (sz_10 < 0xff) *
                                                                            auArr_55[0] -
                                                                            (0xff < sz_10))))))));
        lVal_28 = lVal_28 + 8;
        lVal_52 = lVal_52 + lVal_21;
        lVal_53 = lVal_53 + lVal_22;
        lVal_50 = lVal_50 + lVal_21;
        lVal_51 = lVal_51 + lVal_22;
        lVal_48 = lVal_48 + lVal_21;
        lVal_49 = lVal_49 + lVal_22;
        lVal_38 = lVal_38 + lVal_21;
        lVal_44 = lVal_44 + lVal_22;
      } while (lVal_28 != 0x58);
      *(byte *)(lVal_27 + 0x7051) = *(byte *)(lVal_27 + 0x7051) ^ 0x35;
      *(byte *)(lVal_27 + 0x7052) = *(byte *)(lVal_27 + 0x7052) ^ 0xb1;
      *(byte *)(lVal_27 + 0x7053) = *(byte *)(lVal_27 + 0x7053) ^ 0xa9;
      *(uint8_t *)(lVal_27 + 0x7054) = 0;
    }
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14e = 0;
    uStack_14c = 0;
    uStack_14a = 0;
    _local_168 = (uint8_t  [16])0x0;
    sz_24 = strlen(fnPtr_2);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8bd4;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_e3 = 1;
        pU64_32 = (uint8_t *)func_0x180672de0(uVal_37 + 1);
      }
      else {
        local_e3 = 1;
        lVal_27 = func_0x180672de0(uVal_37 + 0x28);
        pU64_32 = (uint8_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_32 + -8) = lVal_27;
      }
      local_168 = (uint8_t  [8])pU64_32;
    }
    local_158 = (uint32_t)sz_24;
    uStack_154 = (uint32_t)(sz_24 >> 0x20);
    uStack_150 = (uint16_t)uVal_37;
    uStack_14e = (uint16_t)(uVal_37 >> 0x10);
    uStack_14c = (uint16_t)(uVal_37 >> 0x20);
    uStack_14a = (uint16_t)(uVal_37 >> 0x30);
    func_0x1806aa960(pU64_32,fnPtr_2,sz_24);
    pU64_32[sz_24] = 0;
    local_188 = _DAT_1806bcf99;
    uStack_180 = (undefined7)_UNK_1806bcfa1;
    uStack_179 = (uint8_t)((uint64_t)_UNK_1806bcfa1 >> 0x38);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x706c) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x706c) = 1;
      func_0x18007d150(lVal_27 + 0x7059,&local_188);
      func_0x180673140(&LAB_18020e8c0);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_27 + 0x7059);
    if (*(char *)(lVal_27 + 0x7069) == '\x01') {
      uVal_74 = *(uint *)(lVal_27 + 0x705d) ^ _UNK_1806b2cb4;
      uVal_43 = *(uint *)(lVal_27 + 0x7061) ^ _UNK_1806b2cb8;
      uVal_46 = *(uint *)(lVal_27 + 0x7065) ^ _UNK_1806b2cbc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2cb0;
      *(uint *)(lVal_27 + 0x705d) = uVal_74;
      *(uint *)(lVal_27 + 0x7061) = uVal_43;
      *(uint *)(lVal_27 + 0x7065) = uVal_46;
      *(uint8_t *)(lVal_27 + 0x7069) = 0;
    }
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen((char *)pU64_1);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8be1;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_d3 = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_118 = ptr4_U64_35;
      }
      else {
        local_d3 = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_118 = ptr4_U64_35;
      }
    }
    uStack_108 = (uint32_t)sz_24;
    uStack_104 = (uint32_t)(sz_24 >> 0x20);
    uStack_100 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,pU64_1,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    uVal_70 = CONCAT71((int7)((uint64_t)uVal_70 >> 8),uVal_7);
    in_stack_fffffffffffffa88 = in_stack_fffffffffffffa88 & 0xffffff00;
    ptr4_U64_35 = &local_118;
    pU64_32 = local_168;
    func_0x1801ccd70(local_120,ptr4_U64_35,pU64_32,pU64_34,uVal_70,local_3b8,in_stack_fffffffffffffa88);
    if (0xf < uStack_100) {
      uVal_37 = uStack_100 + 1;
      ptr4_U64_31 = local_118;
      if (0xfff < uVal_37) {
        ptr4_U64_31 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_31)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_31,uVal_37);
    }
    uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      lVal_27 = (int64_t)local_168;
      if (0xfff < uVal_25) {
        lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_27,uVal_25);
    }
    local_340 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_340 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_378);
    }
    pU64_34 = (uint8_t *)((int64_t)local_120 + 0xb3);
    uVal_7 = *pU64_34;
    local_158 = _DAT_1806bcfb9;
    uStack_154 = _UNK_1806bcfbd;
    uStack_150 = (uint16_t)_UNK_1806bcfc1;
    uStack_14e = (uint16_t)((uint)_UNK_1806bcfc1 >> 0x10);
    uStack_14c = (uint16_t)_UNK_1806bcfc5;
    uStack_160 = _UNK_1806bcfb1;
    local_168 = (uint8_t  [8])_DAT_1806bcfa9;
    uStack_14a = 0xc7dc;
    uStack_148 = 0x5421;
    uStack_146 = 0xb851;
    uStack_144 = 0xd5e;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7094) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x7094) = 1;
      func_0x180086e20(lVal_27 + 0x706d,local_168);
      func_0x180673140(&LAB_18020e8e0);
    }
    uVal_20 = _UNK_1806b649c;
    uVal_46 = _UNK_1806b6498;
    uVal_43 = _UNK_1806b6494;
    uVal_74 = _DAT_1806b6490;
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_27 + 0x706d);
    if (*(char *)(lVal_27 + 0x7093) == '\x01') {
      uVal_41 = *(uint *)(lVal_27 + 0x7071) ^ _UNK_1806b6494;
      uVal_42 = *(uint *)(lVal_27 + 0x7075) ^ _UNK_1806b6498;
      uVal_45 = *(uint *)(lVal_27 + 0x7079) ^ _UNK_1806b649c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b6490;
      *(uint *)(lVal_27 + 0x7071) = uVal_41;
      *(uint *)(lVal_27 + 0x7075) = uVal_42;
      *(uint *)(lVal_27 + 0x7079) = uVal_45;
      *(uint *)(lVal_27 + 0x707d) = *(uint *)(lVal_27 + 0x707d) ^ uVal_74;
      *(uint *)(lVal_27 + 0x7081) = *(uint *)(lVal_27 + 0x7081) ^ uVal_43;
      *(uint *)(lVal_27 + 0x7085) = *(uint *)(lVal_27 + 0x7085) ^ uVal_46;
      *(uint *)(lVal_27 + 0x7089) = *(uint *)(lVal_27 + 0x7089) ^ uVal_20;
      *(uint *)(lVal_27 + 0x708d) = *(uint *)(lVal_27 + 0x708d) ^ 0xd93d3145;
      *(byte *)(lVal_27 + 0x7091) = *(byte *)(lVal_27 + 0x7091) ^ 0x27;
      *(byte *)(lVal_27 + 0x7092) = *(byte *)(lVal_27 + 0x7092) ^ 0xd;
      *(uint8_t *)(lVal_27 + 0x7093) = 0;
    }
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen((char *)pU64_1);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8bee;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_d5 = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_118 = ptr4_U64_35;
      }
      else {
        local_d5 = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_118 = ptr4_U64_35;
      }
    }
    uStack_108 = (uint32_t)sz_24;
    uStack_104 = (uint32_t)(sz_24 >> 0x20);
    uStack_100 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,pU64_1,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    local_188 = _DAT_1806bcfcf;
    uStack_180 = (undefined7)_UNK_1806bcfd7;
    uStack_179 = (uint8_t)((uint64_t)_UNK_1806bcfd7 >> 0x38);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x70a8) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x70a8) = 1;
      func_0x18007d150(lVal_27 + 0x7095,&local_188);
      func_0x180673140(&LAB_18020e910);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_27 + 0x7095);
    if (*(char *)(lVal_27 + 0x70a5) == '\x01') {
      uVal_74 = *(uint *)(lVal_27 + 0x7099) ^ _UNK_1806b6494;
      uVal_43 = *(uint *)(lVal_27 + 0x709d) ^ _UNK_1806b6498;
      uVal_46 = *(uint *)(lVal_27 + 0x70a1) ^ _UNK_1806b649c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b6490;
      *(uint *)(lVal_27 + 0x7099) = uVal_74;
      *(uint *)(lVal_27 + 0x709d) = uVal_43;
      *(uint *)(lVal_27 + 0x70a1) = uVal_46;
      *(uint8_t *)(lVal_27 + 0x70a5) = 0;
    }
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14e = 0;
    uStack_14c = 0;
    uStack_14a = 0;
    _local_168 = (uint8_t  [16])0x0;
    sz_24 = strlen((char *)pU64_1);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8bfb;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_d4 = 1;
        pU64_32 = (uint8_t *)func_0x180672de0(uVal_37 + 1);
      }
      else {
        local_d4 = 1;
        lVal_27 = func_0x180672de0(uVal_37 + 0x28);
        pU64_32 = (uint8_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_32 + -8) = lVal_27;
      }
      local_168 = (uint8_t  [8])pU64_32;
    }
    local_158 = (uint32_t)sz_24;
    uStack_154 = (uint32_t)(sz_24 >> 0x20);
    uStack_150 = (uint16_t)uVal_37;
    uStack_14e = (uint16_t)(uVal_37 >> 0x10);
    uStack_14c = (uint16_t)(uVal_37 >> 0x20);
    uStack_14a = (uint16_t)(uVal_37 >> 0x30);
    func_0x1806aa960(pU64_32,pU64_1,sz_24);
    pU64_32[sz_24] = 0;
    pU64_32 = local_378;
    uVal_70 = CONCAT71((int7)((uint64_t)uVal_70 >> 8),uVal_7);
    pU64_33 = local_168;
    ptr4_U64_35 = &local_118;
    func_0x1801ccd70(local_120,pU64_33,ptr4_U64_35,pU64_34,uVal_70,pU64_32,
                  in_stack_fffffffffffffa88 & 0xffffff00);
    uVal_73 = (uint32_t)((uint64_t)pU64_32 >> 0x20);
    uVal_71 = (uint32_t)((uint64_t)uVal_70 >> 0x20);
    uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      lVal_27 = (int64_t)local_168;
      if (0xfff < uVal_25) {
        lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_27,uVal_25);
    }
    if (0xf < uStack_100) {
      uVal_37 = uStack_100 + 1;
      ptr4_U64_31 = local_118;
      if (0xfff < uVal_37) {
        ptr4_U64_31 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_31)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_31,uVal_37);
    }
    local_558 = &PTR_LAB_1806bdf60;
    local_550 = local_120;
    local_520 = &local_558;
    uVal_8 = *(uint32_t *)((int64_t)local_120 + 0xb4);
    local_118 = _DAT_1806bcfdf;
    uStack_110 = (undefined7)_UNK_1806bcfe7;
    uStack_109 = (uint8_t)((uint64_t)_UNK_1806bcfe7 >> 0x38);
    uStack_108 = 0x642e126e;
    uStack_104 = 0xbb5267d1;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x70c4) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x70c4) = 1;
      func_0x18007d9e0(lVal_27 + 0x70a9,&local_118);
      func_0x180673140(&LAB_18020e930);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x70a9);
    func_0x1802150b0(fnPtr_2);
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14e = 0;
    uStack_14c = 0;
    uStack_14a = 0;
    _local_168 = (uint8_t  [16])0x0;
    sz_24 = strlen(fnPtr_2);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8c08;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_d6 = 1;
        pU64_33 = (uint8_t *)func_0x180672de0(uVal_37 + 1);
      }
      else {
        local_d6 = 1;
        lVal_27 = func_0x180672de0(uVal_37 + 0x28);
        pU64_33 = (uint8_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_33 + -8) = lVal_27;
      }
      local_168 = (uint8_t  [8])pU64_33;
    }
    local_158 = (uint32_t)sz_24;
    uStack_154 = (uint32_t)(sz_24 >> 0x20);
    uStack_150 = (uint16_t)uVal_37;
    uStack_14e = (uint16_t)(uVal_37 >> 0x10);
    uStack_14c = (uint16_t)(uVal_37 >> 0x20);
    uStack_14a = (uint16_t)(uVal_37 >> 0x30);
    func_0x1806aa960(pU64_33,fnPtr_2,sz_24);
    pU64_33[sz_24] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x70d8) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x70d8) = 1;
      *(uint64_t *)(lVal_27 + 0x70c8) = 0xdf0166cb6a290748;
      *(uint32_t *)(lVal_27 + 0x70d0) = 0x722c1b78;
      *(uint16_t *)(lVal_27 + 0x70d4) = 0x1bf;
      func_0x180673140(&LAB_18020e960);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_27 + 0x70c8);
    if (*(char *)(lVal_27 + 0x70d5) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xbb2103bf0b4d771d;
      *(uint *)(lVal_27 + 0x70d0) = *(uint *)(lVal_27 + 0x70d0) ^ 0xb4d771d;
      *(byte *)(lVal_27 + 0x70d4) = *(byte *)(lVal_27 + 0x70d4) ^ 0xbf;
      *(uint8_t *)(lVal_27 + 0x70d5) = 0;
    }
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen((char *)pU64_3);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8c15;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_e4 = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_118 = ptr4_U64_35;
      }
      else {
        local_e4 = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_118 = ptr4_U64_35;
      }
    }
    pU64_29 = local_120;
    lVal_27 = (int64_t)local_120 + 0xb4;
    uStack_108 = (uint32_t)sz_24;
    uStack_104 = (uint32_t)(sz_24 >> 0x20);
    uStack_100 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,pU64_3,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    uVal_70 = CONCAT44(uVal_71,uVal_8);
    uVal_72 = CONCAT44(uVal_73,1);
    ptr4_U64_35 = &local_118;
    pU64_34 = local_168;
    func_0x1801ccff0(pU64_29,ptr4_U64_35,pU64_34,lVal_27,uVal_70,uVal_72,10,&local_558,0);
    uVal_73 = (uint32_t)((uint64_t)uVal_72 >> 0x20);
    uVal_71 = (uint32_t)((uint64_t)uVal_70 >> 0x20);
    if (0xf < uStack_100) {
      uVal_37 = uStack_100 + 1;
      ptr4_U64_31 = local_118;
      if (0xfff < uVal_37) {
        ptr4_U64_31 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_31)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_31,uVal_37);
    }
    uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      lVal_27 = (int64_t)local_168;
      if (0xfff < uVal_25) {
        lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_27,uVal_25);
    }
    local_300 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_300 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_338);
    }
    pU64_29 = local_120 + 0x17;
    uVal_8 = *(uint32_t *)pU64_29;
    local_118 = _DAT_1806bcff7;
    uStack_110 = (undefined7)_UNK_1806bcfff;
    uStack_109 = (uint8_t)((uint64_t)_UNK_1806bcfff >> 0x38);
    uStack_108 = 0x19aa9058;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x70f0) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x70f0) = 1;
      func_0x18007cfc0(lVal_27 + 0x70d9,&local_118);
      func_0x180673140(&LAB_18020e990);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x70d9);
    func_0x180215110(fnPtr_2);
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14e = 0;
    uStack_14c = 0;
    uStack_14a = 0;
    _local_168 = (uint8_t  [16])0x0;
    sz_24 = strlen(fnPtr_2);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8c22;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_d7 = 1;
        pU64_34 = (uint8_t *)func_0x180672de0(uVal_37 + 1);
      }
      else {
        local_d7 = 1;
        lVal_27 = func_0x180672de0(uVal_37 + 0x28);
        pU64_34 = (uint8_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_34 + -8) = lVal_27;
      }
      local_168 = (uint8_t  [8])pU64_34;
    }
    local_158 = (uint32_t)sz_24;
    uStack_154 = (uint32_t)(sz_24 >> 0x20);
    uStack_150 = (uint16_t)uVal_37;
    uStack_14e = (uint16_t)(uVal_37 >> 0x10);
    uStack_14c = (uint16_t)(uVal_37 >> 0x20);
    uStack_14a = (uint16_t)(uVal_37 >> 0x30);
    func_0x1806aa960(pU64_34,fnPtr_2,sz_24);
    pU64_34[sz_24] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7100) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x7100) = 1;
      *(uint64_t *)(lVal_27 + 0x70f8) = 0x1939cce70ab827f;
      func_0x180673140(&LAB_18020e9c0);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_27 + 0x70f8);
    if (*(char *)(lVal_27 + 0x70ff) == '\x01') {
      *pU64_3 = (CONCAT44((uint)*(ushort *)(lVal_27 + 0x70fd) << 8,*(uint32_t *)pU64_3) |
                (uint64_t)*(byte *)(lVal_27 + 0x70fc) << 0x20) ^ SUB168(_DAT_1806ae240,0);
    }
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen((char *)pU64_3);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8c2f;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_e5 = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_118 = ptr4_U64_35;
      }
      else {
        local_e5 = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_118 = ptr4_U64_35;
      }
    }
    uStack_108 = (uint32_t)sz_24;
    uStack_104 = (uint32_t)(sz_24 >> 0x20);
    uStack_100 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,pU64_3,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    uVal_70 = CONCAT44(uVal_71,uVal_8);
    uVal_72 = CONCAT44(uVal_73,1);
    ptr4_U64_35 = &local_118;
    pU64_34 = local_168;
    func_0x1801ccff0(local_120,ptr4_U64_35,pU64_34,pU64_29,uVal_70,uVal_72,5,local_338,0);
    uVal_73 = (uint32_t)((uint64_t)uVal_72 >> 0x20);
    uVal_71 = (uint32_t)((uint64_t)uVal_70 >> 0x20);
    if (0xf < uStack_100) {
      uVal_37 = uStack_100 + 1;
      ptr4_U64_31 = local_118;
      if (0xfff < uVal_37) {
        ptr4_U64_31 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_31)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_31,uVal_37);
    }
    uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      lVal_27 = (int64_t)local_168;
      if (0xfff < uVal_25) {
        lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_27,uVal_25);
    }
    local_2c0 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_2c0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_2f8);
    }
    pU64_4 = (uint32_t *)((int64_t)local_120 + 0xbc);
    uVal_8 = *pU64_4;
    local_118 = _DAT_1806bd00b;
    uStack_110 = (undefined7)_UNK_1806bd013;
    uStack_109 = (uint8_t)((uint64_t)_UNK_1806bd013 >> 0x38);
    uStack_108 = 0xd3b7e828;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7118) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x7118) = 1;
      func_0x18007cfc0(lVal_27 + 0x7101,&local_118);
      func_0x180673140(&LAB_18020e9f0);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7101);
    func_0x180215130(fnPtr_2);
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14e = 0;
    uStack_14c = 0;
    uStack_14a = 0;
    _local_168 = (uint8_t  [16])0x0;
    sz_24 = strlen(fnPtr_2);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8c3c;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_d8 = 1;
        pU64_34 = (uint8_t *)func_0x180672de0(uVal_37 + 1);
      }
      else {
        local_d8 = 1;
        lVal_27 = func_0x180672de0(uVal_37 + 0x28);
        pU64_34 = (uint8_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_34 + -8) = lVal_27;
      }
      local_168 = (uint8_t  [8])pU64_34;
    }
    local_158 = (uint32_t)sz_24;
    uStack_154 = (uint32_t)(sz_24 >> 0x20);
    uStack_150 = (uint16_t)uVal_37;
    uStack_14e = (uint16_t)(uVal_37 >> 0x10);
    uStack_14c = (uint16_t)(uVal_37 >> 0x20);
    uStack_14a = (uint16_t)(uVal_37 >> 0x30);
    func_0x1806aa960(pU64_34,fnPtr_2,sz_24);
    pU64_34[sz_24] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7124) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x7124) = 1;
      *(uint32_t *)(lVal_27 + 0x711c) = 0xb6bde016;
      *(uint16_t *)(lVal_27 + 0x7120) = 0x173;
      func_0x180673140(&LAB_18020ea20);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_27 + 0x711c);
    if (*(char *)(lVal_27 + 0x7121) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xd3c78945;
      *(byte *)(lVal_27 + 0x7120) = *(byte *)(lVal_27 + 0x7120) ^ 0x73;
      *(uint8_t *)(lVal_27 + 0x7121) = 0;
    }
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen((char *)pU64_1);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8c49;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_e6 = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_118 = ptr4_U64_35;
      }
      else {
        local_e6 = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_118 = ptr4_U64_35;
      }
    }
    uStack_108 = (uint32_t)sz_24;
    uStack_104 = (uint32_t)(sz_24 >> 0x20);
    uStack_100 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,pU64_1,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    uVal_74 = 0x43440000;
    ptr4_U64_35 = &local_118;
    pU64_34 = local_168;
    func_0x1801cd2e0(local_120,ptr4_U64_35,pU64_34,pU64_4,CONCAT44(uVal_71,uVal_8),
                  CONCAT44(uVal_73,0x42000000),0x43440000,local_2f8,0);
    if (0xf < uStack_100) {
      uVal_37 = uStack_100 + 1;
      ptr4_U64_31 = local_118;
      if (0xfff < uVal_37) {
        ptr4_U64_31 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_31)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_31,uVal_37);
    }
    uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      lVal_27 = (int64_t)local_168;
      if (0xfff < uVal_25) {
        lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_27,uVal_25);
    }
    local_280 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_280 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_2b8);
    }
    pU64_29 = local_120 + 0x18;
    uVal_7 = *(uint8_t *)pU64_29;
    local_118 = _DAT_1806bd01f;
    uStack_110 = (undefined7)_UNK_1806bd027;
    uStack_109 = 0x89;
    uStack_108 = 0x7a978958;
    uStack_104 = CONCAT13(uStack_104._3_1_,0x27e81b);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7140) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x7140) = 1;
      func_0x18007d3c0(lVal_27 + 0x7125,&local_118);
      func_0x180673140(&LAB_18020ea50);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7125);
    func_0x180215150(fnPtr_2);
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14e = 0;
    uStack_14c = 0;
    uStack_14a = 0;
    _local_168 = (uint8_t  [16])0x0;
    sz_24 = strlen(fnPtr_2);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8c56;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_d9 = 1;
        pU64_34 = (uint8_t *)func_0x180672de0(uVal_37 + 1);
      }
      else {
        local_d9 = 1;
        lVal_27 = func_0x180672de0(uVal_37 + 0x28);
        pU64_34 = (uint8_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_34 + -8) = lVal_27;
      }
      local_168 = (uint8_t  [8])pU64_34;
    }
    local_158 = (uint32_t)sz_24;
    uStack_154 = (uint32_t)(sz_24 >> 0x20);
    uStack_150 = (uint16_t)uVal_37;
    uStack_14e = (uint16_t)(uVal_37 >> 0x10);
    uStack_14c = (uint16_t)(uVal_37 >> 0x20);
    uStack_14a = (uint16_t)(uVal_37 >> 0x30);
    func_0x1806aa960(pU64_34,fnPtr_2,sz_24);
    pU64_34[sz_24] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7158) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x7158) = 1;
      *(uint8_t *)(lVal_27 + 0x7156) = 1;
      *(uint64_t *)(lVal_27 + 29000) = 0x8445bb0271869374;
      *(uint32_t *)(lVal_27 + 0x7150) = 0x6d969f45;
      *(uint16_t *)(lVal_27 + 0x7154) = 0x9b1a;
      func_0x180673140(&LAB_18020ea80);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_27 + 29000);
    if (*(char *)(lVal_27 + 0x7156) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xeb279b691ff3fb37;
      *(uint *)(lVal_27 + 0x7150) = *(uint *)(lVal_27 + 0x7150) ^ 0x1ff3fb37;
      *(byte *)(lVal_27 + 0x7154) = *(byte *)(lVal_27 + 0x7154) ^ 0x69;
      *(byte *)(lVal_27 + 0x7155) = *(byte *)(lVal_27 + 0x7155) ^ 0x9b;
      *(uint8_t *)(lVal_27 + 0x7156) = 0;
    }
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen((char *)pU64_3);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8c63;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_e7 = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_118 = ptr4_U64_35;
      }
      else {
        local_e7 = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_118 = ptr4_U64_35;
      }
    }
    uStack_108 = (uint32_t)sz_24;
    uStack_104 = (uint32_t)(sz_24 >> 0x20);
    uStack_100 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,pU64_3,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    uVal_74 = uVal_74 & 0xffffff00;
    ptr4_U64_35 = &local_118;
    pU64_34 = local_168;
    func_0x1801ccd70(local_120,ptr4_U64_35,pU64_34,pU64_29,uVal_7,local_2b8,uVal_74);
    if (0xf < uStack_100) {
      uVal_37 = uStack_100 + 1;
      ptr4_U64_31 = local_118;
      if (0xfff < uVal_37) {
        ptr4_U64_31 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_31)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_31,uVal_37);
    }
    uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      lVal_27 = (int64_t)local_168;
      if (0xfff < uVal_25) {
        lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_27,uVal_25);
    }
    local_518 = &PTR_LAB_1806bdf90;
    local_510 = local_120;
    local_4e0 = &local_518;
    local_458 = *(uint64_t *)((int64_t)local_120 + 0xc4);
    uStack_450 = *(uint64_t *)((int64_t)local_120 + 0xcc);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x715c) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x715c) = 1;
      *(uint16_t *)(lVal_27 + 0x7159) = 0x135;
      func_0x180673140(&LAB_18020eab0);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_5 = (byte *)(lVal_27 + 0x7159);
    if (*(char *)(lVal_27 + 0x715a) == '\x01') {
      *pU8_5 = *pU8_5 ^ 0x35;
      *(uint8_t *)(lVal_27 + 0x715a) = 0;
    }
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14e = 0;
    uStack_14c = 0;
    uStack_14a = 0;
    _local_168 = (uint8_t  [16])0x0;
    sz_24 = strlen((char *)pU8_5);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8c70;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_e8 = 1;
        pU64_34 = (uint8_t *)func_0x180672de0(uVal_37 + 1);
      }
      else {
        local_e8 = 1;
        lVal_27 = func_0x180672de0(uVal_37 + 0x28);
        pU64_34 = (uint8_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_34 + -8) = lVal_27;
      }
      local_168 = (uint8_t  [8])pU64_34;
    }
    local_158 = (uint32_t)sz_24;
    uStack_154 = (uint32_t)(sz_24 >> 0x20);
    uStack_150 = (uint16_t)uVal_37;
    uStack_14e = (uint16_t)(uVal_37 >> 0x10);
    uStack_14c = (uint16_t)(uVal_37 >> 0x20);
    uStack_14a = (uint16_t)(uVal_37 >> 0x30);
    func_0x1806aa960(pU64_34,pU8_5,sz_24);
    pU64_34[sz_24] = 0;
    local_188 = _DAT_1806bd036;
    uStack_180 = (undefined7)_UNK_1806bd03e;
    uStack_179 = 0x99;
    uStack_178 = 0x675a;
    uStack_176 = 0x67;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7174) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x7174) = 1;
      func_0x18007cb80(lVal_27 + 0x715d,&local_188);
      func_0x180673140(&LAB_18020ead0);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x715d);
    func_0x1801c17d0(fnPtr_2);
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen(fnPtr_2);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8c7d;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_da = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_118 = ptr4_U64_35;
      }
      else {
        local_da = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_118 = ptr4_U64_35;
      }
    }
    pU64_29 = local_120;
    lVal_27 = (int64_t)local_120 + 0xc4;
    uStack_108 = (uint32_t)sz_24;
    uStack_104 = (uint32_t)(sz_24 >> 0x20);
    uStack_100 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,fnPtr_2,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    uVal_74 = uVal_74 & 0xffffff00;
    ptr4_U64_35 = &local_118;
    pU64_34 = local_168;
    func_0x1801cd600(pU64_29,ptr4_U64_35,pU64_34,lVal_27,&local_458,&local_518,uVal_74);
    if (0xf < uStack_100) {
      uVal_37 = uStack_100 + 1;
      ptr4_U64_31 = local_118;
      if (0xfff < uVal_37) {
        ptr4_U64_31 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_31)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_31,uVal_37);
    }
    uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      lVal_27 = (int64_t)local_168;
      if (0xfff < uVal_25) {
        lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_27,uVal_25);
    }
    local_240 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_240 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_278);
    }
    pU64_32 = (uint8_t *)((int64_t)local_120 + 0xd4);
    uVal_7 = *pU64_32;
    uStack_148 = _UNK_1806bd069;
    uStack_146 = (uint16_t)_UNK_1806bd06b;
    uStack_144 = (uint16_t)((uint)_UNK_1806bd06b >> 0x10);
    uStack_142 = (uint16_t)_UNK_1806bd06f;
    uStack_140 = (uint16_t)((uint)_UNK_1806bd06f >> 0x10);
    uStack_13e = (uint16_t)_UNK_1806bd073;
    uStack_13c = (uint16_t)((uint)_UNK_1806bd073 >> 0x10);
    local_158 = _DAT_1806bd059;
    uStack_154 = _UNK_1806bd05d;
    uStack_150 = (uint16_t)_UNK_1806bd061;
    uStack_14e = (uint16_t)((uint)_UNK_1806bd061 >> 0x10);
    uStack_14c = _UNK_1806bd065;
    uStack_14a = _DAT_1806bd067;
    uStack_160 = _UNK_1806bd051;
    local_168 = (uint8_t  [8])_DAT_1806bd049;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x71a4) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x71a4) = 1;
      func_0x1801ba020(lVal_27 + 0x7175,local_168);
      func_0x180673140(&LAB_18020eb00);
    }
    uVal_41 = _UNK_1806b4ebc;
    uVal_20 = _UNK_1806b4eb8;
    uVal_46 = _UNK_1806b4eb4;
    uVal_43 = _DAT_1806b4eb0;
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_27 + 0x7175);
    if (*(char *)(lVal_27 + 0x71a3) == '\x01') {
      uVal_42 = *(uint *)(lVal_27 + 0x7179) ^ _UNK_1806b4eb4;
      uVal_45 = *(uint *)(lVal_27 + 0x717d) ^ _UNK_1806b4eb8;
      uVal_47 = *(uint *)(lVal_27 + 0x7181) ^ _UNK_1806b4ebc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b4eb0;
      *(uint *)(lVal_27 + 0x7179) = uVal_42;
      *(uint *)(lVal_27 + 0x717d) = uVal_45;
      *(uint *)(lVal_27 + 0x7181) = uVal_47;
      *(uint *)(lVal_27 + 0x7185) = *(uint *)(lVal_27 + 0x7185) ^ uVal_43;
      *(uint *)(lVal_27 + 0x7189) = *(uint *)(lVal_27 + 0x7189) ^ uVal_46;
      *(uint *)(lVal_27 + 0x718d) = *(uint *)(lVal_27 + 0x718d) ^ uVal_20;
      *(uint *)(lVal_27 + 0x7191) = *(uint *)(lVal_27 + 0x7191) ^ uVal_41;
      *(uint64_t *)(lVal_27 + 0x7195) = *(uint64_t *)(lVal_27 + 0x7195) ^ SUB168(_DAT_1806b5b70,0);
      *(byte *)(lVal_27 + 0x719d) = *(byte *)(lVal_27 + 0x719d) ^ 0x99;
      *(byte *)(lVal_27 + 0x719e) = *(byte *)(lVal_27 + 0x719e) ^ 0x53;
      *(byte *)(lVal_27 + 0x719f) = *(byte *)(lVal_27 + 0x719f) ^ 0x8f;
      *(byte *)(lVal_27 + 0x71a0) = *(byte *)(lVal_27 + 0x71a0) ^ 0xc9;
      *(byte *)(lVal_27 + 0x71a1) = *(byte *)(lVal_27 + 0x71a1) ^ 0x8b;
      *(byte *)(lVal_27 + 0x71a2) = *(byte *)(lVal_27 + 0x71a2) ^ 0x97;
      *(uint8_t *)(lVal_27 + 0x71a3) = 0;
    }
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen((char *)pU64_1);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8c8a;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_db = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_118 = ptr4_U64_35;
      }
      else {
        local_db = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_118 = ptr4_U64_35;
      }
    }
    uStack_108 = (uint32_t)sz_24;
    uStack_104 = (uint32_t)(sz_24 >> 0x20);
    uStack_100 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,pU64_1,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x71b8) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x71b8) = 1;
      *(uint64_t *)(lVal_27 + 0x71a8) = 0x97a0b7eea4e63fca;
      *(uint32_t *)(lVal_27 + 0x71b0) = 0xbae43dec;
      *(uint16_t *)(lVal_27 + 0x71b4) = 0x18b;
      func_0x180673140(&LAB_18020eb30);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_27 + 0x71a8);
    if (*(char *)(lVal_27 + 0x71b5) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xffc3978bc98f5399;
      *(uint *)(lVal_27 + 0x71b0) = *(uint *)(lVal_27 + 0x71b0) ^ 0xc98f5399;
      *(byte *)(lVal_27 + 0x71b4) = *(byte *)(lVal_27 + 0x71b4) ^ 0x8b;
      *(uint8_t *)(lVal_27 + 0x71b5) = 0;
    }
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14e = 0;
    uStack_14c = 0;
    uStack_14a = 0;
    _local_168 = (uint8_t  [16])0x0;
    sz_24 = strlen((char *)pU64_3);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8c97;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_e9 = 1;
        pU64_34 = (uint8_t *)func_0x180672de0(uVal_37 + 1);
      }
      else {
        local_e9 = 1;
        lVal_27 = func_0x180672de0(uVal_37 + 0x28);
        pU64_34 = (uint8_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_34 + -8) = lVal_27;
      }
      local_168 = (uint8_t  [8])pU64_34;
    }
    local_158 = (uint32_t)sz_24;
    uStack_154 = (uint32_t)(sz_24 >> 0x20);
    uStack_150 = (uint16_t)uVal_37;
    uStack_14e = (uint16_t)(uVal_37 >> 0x10);
    uStack_14c = (uint16_t)(uVal_37 >> 0x20);
    uStack_14a = (uint16_t)(uVal_37 >> 0x30);
    func_0x1806aa960(pU64_34,pU64_3,sz_24);
    pU64_34[sz_24] = 0;
    uVal_74 = uVal_74 & 0xffffff00;
    pU64_34 = local_168;
    ptr4_U64_35 = &local_118;
    func_0x1801ccd70(local_120,pU64_34,ptr4_U64_35,pU64_32,uVal_7,local_278,uVal_74);
    uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      lVal_27 = (int64_t)local_168;
      if (0xfff < uVal_25) {
        lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_27,uVal_25);
    }
    if (0xf < uStack_100) {
      uVal_37 = uStack_100 + 1;
      ptr4_U64_31 = local_118;
      if (0xfff < uVal_37) {
        ptr4_U64_31 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_31)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_31,uVal_37);
    }
    local_4d8 = &PTR_LAB_1806bdfc0;
    local_4d0 = local_120;
    local_4a0 = &local_4d8;
    local_448 = local_120[0x1b];
    uStack_440 = local_120[0x1c];
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x71bc) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x71bc) = 1;
      *(uint16_t *)(lVal_27 + 0x71b9) = 0x1e7;
      func_0x180673140(&LAB_18020eb60);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_5 = (byte *)(lVal_27 + 0x71b9);
    if (*(char *)(lVal_27 + 0x71ba) == '\x01') {
      *pU8_5 = *pU8_5 ^ 0xe7;
      *(uint8_t *)(lVal_27 + 0x71ba) = 0;
    }
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14e = 0;
    uStack_14c = 0;
    uStack_14a = 0;
    _local_168 = (uint8_t  [16])0x0;
    sz_24 = strlen((char *)pU8_5);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8ca4;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_ea = 1;
        pU64_34 = (uint8_t *)func_0x180672de0(uVal_37 + 1);
      }
      else {
        local_ea = 1;
        lVal_27 = func_0x180672de0(uVal_37 + 0x28);
        pU64_34 = (uint8_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_34 + -8) = lVal_27;
      }
      local_168 = (uint8_t  [8])pU64_34;
    }
    local_158 = (uint32_t)sz_24;
    uStack_154 = (uint32_t)(sz_24 >> 0x20);
    uStack_150 = (uint16_t)uVal_37;
    uStack_14e = (uint16_t)(uVal_37 >> 0x10);
    uStack_14c = (uint16_t)(uVal_37 >> 0x20);
    uStack_14a = (uint16_t)(uVal_37 >> 0x30);
    func_0x1806aa960(pU64_34,pU8_5,sz_24);
    pU64_34[sz_24] = 0;
    local_188 = _DAT_1806bd077;
    uStack_180 = (undefined7)_UNK_1806bd07f;
    uStack_179 = (uint8_t)((uint64_t)_UNK_1806bd07f >> 0x38);
    uStack_178 = 0x8b95;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x71d0) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x71d0) = 1;
      func_0x18007c170(lVal_27 + 0x71bd,&local_188);
      func_0x180673140(&LAB_18020eb80);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x71bd);
    func_0x1800b6960(fnPtr_2);
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen(fnPtr_2);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8cb1;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_dc = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_118 = ptr4_U64_35;
      }
      else {
        local_dc = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_118 = ptr4_U64_35;
      }
    }
    pU64_23 = local_120;
    pU64_6 = local_120 + 0x1b;
    uStack_108 = (uint32_t)sz_24;
    uStack_104 = (uint32_t)(sz_24 >> 0x20);
    uStack_100 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,fnPtr_2,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    pU64_29 = &local_448;
    uVal_74 = uVal_74 & 0xffffff00;
    ptr4_U64_35 = &local_118;
    pU64_34 = local_168;
    func_0x1801cd600(pU64_23,ptr4_U64_35,pU64_34,pU64_6,pU64_29,&local_4d8,uVal_74);
    if (0xf < uStack_100) {
      uVal_37 = uStack_100 + 1;
      ptr4_U64_31 = local_118;
      if (0xfff < uVal_37) {
        ptr4_U64_31 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_31)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_31,uVal_37);
    }
    uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      lVal_27 = (int64_t)local_168;
      if (0xfff < uVal_25) {
        lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_27,uVal_25);
    }
    local_200 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_200 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_238);
    }
    pU64_6 = local_120 + 0x1d;
    uVal_7 = *(uint8_t *)pU64_6;
    uStack_148 = (uint16_t)_DAT_1806bd0a9;
    uStack_146 = (uint16_t)((uint)_DAT_1806bd0a9 >> 0x10);
    uStack_144 = (uint16_t)_UNK_1806bd0ad;
    uStack_142 = (uint16_t)((uint)_UNK_1806bd0ad >> 0x10);
    uStack_140 = (uint16_t)_UNK_1806bd0b1;
    uStack_13e = (uint16_t)((uint)_UNK_1806bd0b1 >> 0x10);
    uStack_13c = (uint16_t)_UNK_1806bd0b5;
    uStack_13a = (uint16_t)((uint)_UNK_1806bd0b5 >> 0x10);
    local_158 = _DAT_1806bd099;
    uStack_154 = _UNK_1806bd09d;
    uStack_150 = (uint16_t)_UNK_1806bd0a1;
    uStack_14e = (uint16_t)((uint)_UNK_1806bd0a1 >> 0x10);
    uStack_14c = (uint16_t)_UNK_1806bd0a5;
    uStack_14a = (uint16_t)((uint)_UNK_1806bd0a5 >> 0x10);
    uStack_160 = _UNK_1806bd091;
    local_168 = (uint8_t  [8])_DAT_1806bd089;
    uStack_138 = 0x3993a0f6d2fd3a1e;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x720c) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x720c) = 1;
      func_0x18012b940(lVal_27 + 0x71d1,local_168);
      func_0x180673140(&LAB_18020ebb0);
    }
    uVal_41 = _UNK_1806b2dbc;
    uVal_20 = _UNK_1806b2db8;
    uVal_46 = _UNK_1806b2db4;
    uVal_43 = _DAT_1806b2db0;
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_27 + 0x71d1);
    if (*(char *)(lVal_27 + 0x7209) == '\x01') {
      uVal_42 = *(uint *)(lVal_27 + 0x71d5) ^ _UNK_1806b2db4;
      uVal_45 = *(uint *)(lVal_27 + 0x71d9) ^ _UNK_1806b2db8;
      uVal_47 = *(uint *)(lVal_27 + 0x71dd) ^ _UNK_1806b2dbc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2db0;
      *(uint *)(lVal_27 + 0x71d5) = uVal_42;
      *(uint *)(lVal_27 + 0x71d9) = uVal_45;
      *(uint *)(lVal_27 + 0x71dd) = uVal_47;
      *(uint *)(lVal_27 + 0x71e1) = *(uint *)(lVal_27 + 0x71e1) ^ uVal_43;
      *(uint *)(lVal_27 + 0x71e5) = *(uint *)(lVal_27 + 0x71e5) ^ uVal_46;
      *(uint *)(lVal_27 + 0x71e9) = *(uint *)(lVal_27 + 0x71e9) ^ uVal_20;
      *(uint *)(lVal_27 + 0x71ed) = *(uint *)(lVal_27 + 0x71ed) ^ uVal_41;
      *(uint *)(lVal_27 + 0x71f1) = *(uint *)(lVal_27 + 0x71f1) ^ uVal_43;
      *(uint *)(lVal_27 + 0x71f5) = *(uint *)(lVal_27 + 0x71f5) ^ uVal_46;
      *(uint *)(lVal_27 + 0x71f9) = *(uint *)(lVal_27 + 0x71f9) ^ uVal_20;
      *(uint *)(lVal_27 + 0x71fd) = *(uint *)(lVal_27 + 0x71fd) ^ uVal_41;
      *(uint64_t *)(lVal_27 + 0x7201) = *(uint64_t *)(lVal_27 + 0x7201) ^ SUB168(_DAT_1806bb040,0);
      *(uint8_t *)(lVal_27 + 0x7209) = 0;
    }
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen((char *)pU64_1);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8cbe;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_dd = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_118 = ptr4_U64_35;
      }
      else {
        local_dd = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_118 = ptr4_U64_35;
      }
    }
    uStack_108 = (uint32_t)sz_24;
    uStack_104 = (uint32_t)(sz_24 >> 0x20);
    uStack_100 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,pU64_1,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7220) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x7220) = 1;
      uVal_70 = _UNK_1806bb058;
      *(uint64_t *)(lVal_27 + 0x7210) = _DAT_1806bb050;
      *(uint64_t *)(lVal_27 + 0x7218) = uVal_70;
      func_0x180673140(&LAB_18020ebf0);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_27 + 0x7210);
    if (*(char *)(lVal_27 + 0x721f) == '\x01') {
      uVal_71 = *(uint32_t *)(lVal_27 + 0x7218);
      auArr_39 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_71 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_71 >> 0x10),uVal_71)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_27 + 0x721d) >> 8)),
                                                 (char)((uint)uVal_71 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_27 + 0x721d),(char)uVal_71
                                                ))),_DAT_1806ae110);
      auArr_40._0_8_ = auArr_39._0_8_;
      auArr_40._8_8_ =
           auArr_39._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_27 + 0x721c) << 0x20;
      auArr_39 = pblendw(auArr_40,*_Str,0xf);
      *_Str = auArr_39 ^ _DAT_1806bb060;
    }
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14e = 0;
    uStack_14c = 0;
    uStack_14a = 0;
    _local_168 = (uint8_t  [16])0x0;
    sz_24 = strlen((char *)_Str);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8ccb;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_eb = 1;
        pU64_34 = (uint8_t *)func_0x180672de0(uVal_37 + 1);
      }
      else {
        local_eb = 1;
        lVal_27 = func_0x180672de0(uVal_37 + 0x28);
        pU64_34 = (uint8_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_34 + -8) = lVal_27;
      }
      local_168 = (uint8_t  [8])pU64_34;
    }
    local_158 = (uint32_t)sz_24;
    uStack_154 = (uint32_t)(sz_24 >> 0x20);
    uStack_150 = (uint16_t)uVal_37;
    uStack_14e = (uint16_t)(uVal_37 >> 0x10);
    uStack_14c = (uint16_t)(uVal_37 >> 0x20);
    uStack_14a = (uint16_t)(uVal_37 >> 0x30);
    func_0x1806aa960(pU64_34,_Str,sz_24);
    pU64_34[sz_24] = 0;
    uVal_70 = CONCAT71((int7)((uint64_t)pU64_29 >> 8),uVal_7);
    uVal_74 = uVal_74 & 0xffffff00;
    pU64_34 = local_168;
    ptr4_U64_35 = &local_118;
    func_0x1801ccd70(local_120,pU64_34,ptr4_U64_35,pU64_6,uVal_70,local_238,uVal_74);
    uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      lVal_27 = (int64_t)local_168;
      if (0xfff < uVal_25) {
        lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_27,uVal_25);
    }
    if (0xf < uStack_100) {
      uVal_37 = uStack_100 + 1;
      ptr4_U64_31 = local_118;
      if (0xfff < uVal_37) {
        ptr4_U64_31 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_31)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_31,uVal_37);
    }
    local_1c0 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_1c0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_1f8);
    }
    pU64_32 = (uint8_t *)((int64_t)local_120 + 0xe9);
    uVal_7 = *pU64_32;
    uStack_138 = CONCAT44(_UNK_1806bd0f5,_UNK_1806bd0f1);
    uStack_130 = (int64_t *)CONCAT44(uStack_130._4_4_,_UNK_1806bd0f9);
    uStack_148 = (uint16_t)_DAT_1806bd0e1;
    uStack_146 = (uint16_t)((uint)_DAT_1806bd0e1 >> 0x10);
    uStack_144 = (uint16_t)_UNK_1806bd0e5;
    uStack_142 = (uint16_t)((uint)_UNK_1806bd0e5 >> 0x10);
    uStack_140 = (uint16_t)_UNK_1806bd0e9;
    uStack_13e = (uint16_t)((uint)_UNK_1806bd0e9 >> 0x10);
    uStack_13c = (uint16_t)_DAT_1806bd0ed;
    uStack_13a = (uint16_t)((uint)_DAT_1806bd0ed >> 0x10);
    local_158 = _DAT_1806bd0d1;
    uStack_154 = _UNK_1806bd0d5;
    uStack_150 = (uint16_t)_UNK_1806bd0d9;
    uStack_14e = (uint16_t)((uint)_UNK_1806bd0d9 >> 0x10);
    uStack_14c = (uint16_t)_UNK_1806bd0dd;
    uStack_14a = (uint16_t)((uint)_UNK_1806bd0dd >> 0x10);
    uStack_160 = _UNK_1806bd0c9;
    local_168 = (uint8_t  [8])_DAT_1806bd0c1;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7260) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x7260) = 1;
      func_0x1801b6ff0(lVal_27 + 0x7221,local_168);
      func_0x180673140(&LAB_18020ec20);
    }
    uVal_41 = _UNK_1806b689c;
    uVal_20 = _UNK_1806b6898;
    uVal_46 = _UNK_1806b6894;
    uVal_43 = _DAT_1806b6890;
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_27 + 0x7221);
    if (*(char *)(lVal_27 + 0x725d) == '\x01') {
      uVal_42 = *(uint *)(lVal_27 + 0x7225) ^ _UNK_1806b6894;
      uVal_45 = *(uint *)(lVal_27 + 0x7229) ^ _UNK_1806b6898;
      uVal_47 = *(uint *)(lVal_27 + 0x722d) ^ _UNK_1806b689c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b6890;
      *(uint *)(lVal_27 + 0x7225) = uVal_42;
      *(uint *)(lVal_27 + 0x7229) = uVal_45;
      *(uint *)(lVal_27 + 0x722d) = uVal_47;
      *(uint *)(lVal_27 + 0x7231) = *(uint *)(lVal_27 + 0x7231) ^ uVal_43;
      *(uint *)(lVal_27 + 0x7235) = *(uint *)(lVal_27 + 0x7235) ^ uVal_46;
      *(uint *)(lVal_27 + 0x7239) = *(uint *)(lVal_27 + 0x7239) ^ uVal_20;
      *(uint *)(lVal_27 + 0x723d) = *(uint *)(lVal_27 + 0x723d) ^ uVal_41;
      *(uint *)(lVal_27 + 0x7241) = *(uint *)(lVal_27 + 0x7241) ^ uVal_43;
      *(uint *)(lVal_27 + 0x7245) = *(uint *)(lVal_27 + 0x7245) ^ uVal_46;
      *(uint *)(lVal_27 + 0x7249) = *(uint *)(lVal_27 + 0x7249) ^ uVal_20;
      *(uint *)(lVal_27 + 0x724d) = *(uint *)(lVal_27 + 0x724d) ^ uVal_41;
      *(uint64_t *)(lVal_27 + 0x7251) = *(uint64_t *)(lVal_27 + 0x7251) ^ SUB168(_DAT_1806bb070,0);
      *(byte *)(lVal_27 + 0x7259) = *(byte *)(lVal_27 + 0x7259) ^ 0x37;
      *(byte *)(lVal_27 + 0x725a) = *(byte *)(lVal_27 + 0x725a) ^ 0xe7;
      *(byte *)(lVal_27 + 0x725b) = *(byte *)(lVal_27 + 0x725b) ^ 0x7f;
      *(byte *)(lVal_27 + 0x725c) = *(byte *)(lVal_27 + 0x725c) ^ 0xd;
      *(uint8_t *)(lVal_27 + 0x725d) = 0;
    }
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen((char *)pU64_1);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8cd8;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_de = 1;
        ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
        local_118 = ptr4_U64_35;
      }
      else {
        local_de = 1;
        ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
        ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_35[-1] = ptr3_U64_26;
        local_118 = ptr4_U64_35;
      }
    }
    uStack_108 = (uint32_t)sz_24;
    uStack_104 = (uint32_t)(sz_24 >> 0x20);
    uStack_100 = uVal_37;
    func_0x1806aa960(ptr4_U64_35,pU64_1,sz_24);
    *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7278) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x7278) = 1;
      *(uint8_t *)(lVal_27 + 0x7274) = 1;
      *(uint64_t *)(lVal_27 + 0x7268) = 0xfe3933bc741e8b67;
      *(uint32_t *)(lVal_27 + 0x7270) = 0xd118854;
      func_0x180673140(&LAB_18020ec60);
    }
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_27 + 0x7268);
    if (*(char *)(lVal_27 + 0x7274) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x971941d90d7fe737;
      *(uint *)(lVal_27 + 0x7270) = *(uint *)(lVal_27 + 0x7270) ^ 0xd7fe737;
      *(uint8_t *)(lVal_27 + 0x7274) = 0;
    }
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14e = 0;
    uStack_14c = 0;
    uStack_14a = 0;
    _local_168 = (uint8_t  [16])0x0;
    sz_24 = strlen((char *)pU64_3);
    if ((int64_t)sz_24 < 0) goto LAB_1801c8ce5;
    uVal_37 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_37 = 0x16;
      if (0x16 < uVal_25) {
        uVal_37 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_ec = 1;
        pU64_34 = (uint8_t *)func_0x180672de0(uVal_37 + 1);
      }
      else {
        local_ec = 1;
        lVal_27 = func_0x180672de0(uVal_37 + 0x28);
        pU64_34 = (uint8_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_34 + -8) = lVal_27;
      }
      local_168 = (uint8_t  [8])pU64_34;
    }
    local_158 = (uint32_t)sz_24;
    uStack_154 = (uint32_t)(sz_24 >> 0x20);
    uStack_150 = (uint16_t)uVal_37;
    uStack_14e = (uint16_t)(uVal_37 >> 0x10);
    uStack_14c = (uint16_t)(uVal_37 >> 0x20);
    uStack_14a = (uint16_t)(uVal_37 >> 0x30);
    func_0x1806aa960(pU64_34,pU64_3,sz_24);
    pU64_34[sz_24] = 0;
    pU64_34 = local_1f8;
    uVal_70 = CONCAT71((int7)((uint64_t)uVal_70 >> 8),uVal_7);
    pU64_33 = local_168;
    ptr4_U64_35 = &local_118;
    func_0x1801ccd70(local_120,pU64_33,ptr4_U64_35,pU64_32,uVal_70,pU64_34,uVal_74 & 0xffffff00);
    uVal_73 = (uint32_t)((uint64_t)pU64_34 >> 0x20);
    uVal_71 = (uint32_t)((uint64_t)uVal_70 >> 0x20);
    uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
    if (0xf < uVal_37) {
      uVal_25 = uVal_37 + 1;
      lVal_27 = (int64_t)local_168;
      if (0xfff < uVal_25) {
        lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
        uVal_25 = uVal_37 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_27,uVal_25);
    }
    if (0xf < uStack_100) {
      uVal_37 = uStack_100 + 1;
      ptr4_U64_31 = local_118;
      if (0xfff < uVal_37) {
        ptr4_U64_31 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_31)))
        goto LAB_1801c8b8c;
        uVal_37 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_31,uVal_37);
    }
    local_498 = &PTR_LAB_1806bdff0;
    local_490 = local_120;
    local_460 = &local_498;
    uVal_8 = *(uint32_t *)((int64_t)local_120 + 0xec);
    local_158 = _DAT_1806bd10d;
    uStack_154 = _UNK_1806bd111;
    uStack_150 = (uint16_t)_UNK_1806bd115;
    uStack_14e = (uint16_t)((uint)_UNK_1806bd115 >> 0x10);
    uStack_14c = (uint16_t)_UNK_1806bd119;
    uStack_160 = _UNK_1806bd105;
    local_168 = (uint8_t  [8])_DAT_1806bd0fd;
    uStack_14a = 0xa013;
    uStack_148 = 0x5ae4;
    uStack_146 = 0x96e5;
    uStack_144 = 0x1b37;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x72a0) == '\0') {
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_27 + 0x72a0) = 1;
      func_0x180086e20(lVal_27 + 0x7279,local_168);
      func_0x180673140(&LAB_18020ec90);
    }
    uVal_20 = _UNK_1806b2ccc;
    uVal_46 = _UNK_1806b2cc8;
    uVal_43 = _UNK_1806b2cc4;
    uVal_74 = _DAT_1806b2cc0;
    lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_27 + 0x7279);
    if (*(char *)(lVal_27 + 0x729f) == '\x01') {
      uVal_41 = *(uint *)(lVal_27 + 0x727d) ^ _UNK_1806b2cc4;
      uVal_42 = *(uint *)(lVal_27 + 0x7281) ^ _UNK_1806b2cc8;
      uVal_45 = *(uint *)(lVal_27 + 0x7285) ^ _UNK_1806b2ccc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2cc0;
      *(uint *)(lVal_27 + 0x727d) = uVal_41;
      *(uint *)(lVal_27 + 0x7281) = uVal_42;
      *(uint *)(lVal_27 + 0x7285) = uVal_45;
      *(uint *)(lVal_27 + 0x7289) = *(uint *)(lVal_27 + 0x7289) ^ uVal_74;
      *(uint *)(lVal_27 + 0x728d) = *(uint *)(lVal_27 + 0x728d) ^ uVal_43;
      *(uint *)(lVal_27 + 0x7291) = *(uint *)(lVal_27 + 0x7291) ^ uVal_46;
      *(uint *)(lVal_27 + 0x7295) = *(uint *)(lVal_27 + 0x7295) ^ uVal_20;
      *(uint *)(lVal_27 + 0x7299) = *(uint *)(lVal_27 + 0x7299) ^ 0xf9913b87;
      *(byte *)(lVal_27 + 0x729d) = *(byte *)(lVal_27 + 0x729d) ^ 0x45;
      *(byte *)(lVal_27 + 0x729e) = *(byte *)(lVal_27 + 0x729e) ^ 0x1b;
      *(uint8_t *)(lVal_27 + 0x729f) = 0;
    }
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    sz_24 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_24) {
      uVal_37 = 0xf;
      if (0xf < sz_24) {
        uVal_25 = sz_24 | 0xf;
        uVal_37 = 0x16;
        if (0x16 < uVal_25) {
          uVal_37 = uVal_25;
        }
        if (uVal_25 < 0xfff) {
          local_df = 1;
          ptr4_U64_35 = (uint64_t ****)func_0x180672de0(uVal_37 + 1);
          local_118 = ptr4_U64_35;
        }
        else {
          local_df = 1;
          ptr3_U64_26 = (uint64_t ***)func_0x180672de0(uVal_37 + 0x28);
          ptr4_U64_35 = (uint64_t ****)((int64_t)ptr3_U64_26 + 0x27U & 0xffffffffffffffe0);
          ptr4_U64_35[-1] = ptr3_U64_26;
          local_118 = ptr4_U64_35;
        }
      }
      uStack_108 = (uint32_t)sz_24;
      uStack_104 = (uint32_t)(sz_24 >> 0x20);
      uStack_100 = uVal_37;
      func_0x1806aa960(ptr4_U64_35,pU64_1,sz_24);
      *(uint8_t *)((int64_t)ptr4_U64_35 + sz_24) = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x72b4) == '\0') {
        lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_27 + 0x72b4) = 1;
        *(uint8_t *)(lVal_27 + 0x72b2) = 1;
        *(uint64_t *)(lVal_27 + 0x72a8) = 0xb31e686597fe58ce;
        *(uint16_t *)(lVal_27 + 0x72b0) = 0x3be2;
        func_0x180673140(&LAB_18020ecc0);
      }
      lVal_27 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_3 = (uint64_t *)(lVal_27 + 0x72a8);
      if (*(char *)(lVal_27 + 0x72b2) == '\x01') {
        *pU64_3 = *pU64_3 ^ 0xc9771b45f9913b87;
        *(byte *)(lVal_27 + 0x72b0) = *(byte *)(lVal_27 + 0x72b0) ^ 0x87;
        *(byte *)(lVal_27 + 0x72b1) = *(byte *)(lVal_27 + 0x72b1) ^ 0x3b;
        *(uint8_t *)(lVal_27 + 0x72b2) = 0;
      }
      _local_168 = (uint8_t  [16])0x0;
      sz_24 = strlen((char *)pU64_3);
      if (-1 < (int64_t)sz_24) {
        uVal_37 = 0xf;
        if (0xf < sz_24) {
          uVal_25 = sz_24 | 0xf;
          uVal_37 = 0x16;
          if (0x16 < uVal_25) {
            uVal_37 = uVal_25;
          }
          if (uVal_25 < 0xfff) {
            local_ed = 1;
            pU64_33 = (uint8_t *)func_0x180672de0(uVal_37 + 1);
          }
          else {
            local_ed = 1;
            lVal_27 = func_0x180672de0(uVal_37 + 0x28);
            pU64_33 = (uint8_t *)(lVal_27 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_33 + -8) = lVal_27;
          }
          local_168 = (uint8_t  [8])pU64_33;
        }
        pU64_29 = local_120;
        lVal_27 = (int64_t)local_120 + 0xec;
        local_158 = (uint32_t)sz_24;
        uStack_154 = (uint32_t)(sz_24 >> 0x20);
        uStack_150 = (uint16_t)uVal_37;
        uStack_14e = (uint16_t)(uVal_37 >> 0x10);
        uStack_14c = (uint16_t)(uVal_37 >> 0x20);
        uStack_14a = (uint16_t)(uVal_37 >> 0x30);
        func_0x1806aa960(pU64_33,pU64_3,sz_24);
        pU64_33[sz_24] = 0;
        func_0x1801cd2e0(pU64_29,local_168,&local_118,lVal_27,CONCAT44(uVal_71,uVal_8),
                      CONCAT44(uVal_73,0x40800000),0x42000000,&local_498,0);
        uVal_37 = CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,uStack_150)));
        if (0xf < uVal_37) {
          uVal_25 = uVal_37 + 1;
          lVal_27 = (int64_t)local_168;
          if (0xfff < uVal_25) {
            lVal_27 = *(int64_t *)((int64_t)local_168 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_27)) goto LAB_1801c8b8c;
            uVal_25 = uVal_37 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_27,uVal_25);
        }
        pU64_29 = local_120;
        if (0xf < uStack_100) {
          uVal_37 = uStack_100 + 1;
          ptr4_U64_35 = local_118;
          if (0xfff < uVal_37) {
            ptr4_U64_35 = (uint64_t ****)local_118[-1];
            if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_35))) {
LAB_1801c8b8c:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_37 = uStack_100 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_35,uVal_37);
        }
        return pU64_29;
      }
      goto LAB_1801c8cff;
    }
  }
  local_df = 1;
  func_0x18007ba70();
LAB_1801c8cff:
  local_ed = 1;
  func_0x18007ba70();
  fnPtr_9 = (func_ptr_t )swi(3);
  pU64_29 = (uint64_t *)(*fnPtr_9)();
  return pU64_29;
}

// Unwind@1801c8d10
void Unwind_1801c8d10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1a8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x170));
    *(uint64_t *)(param_2 + 0x1a8) = 0;
  }
  return;
}

// Unwind@1801c8df0
void Unwind_1801c8df0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1e8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1b0));
    *(uint64_t *)(param_2 + 0x1e8) = 0;
  }
  return;
}

// Unwind@1801c8ed0
void Unwind_1801c8ed0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6fec) = 0;
  *(uint8_t *)(param_2 + 0x4d6) = 1;
  return;
}

// Unwind@1801c8fb0
void Unwind_1801c8fb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x228);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f0));
    *(uint64_t *)(param_2 + 0x228) = 0;
  }
  return;
}

// Unwind@1801c9090
void Unwind_1801c9090(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x268);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x230));
    *(uint64_t *)(param_2 + 0x268) = 0;
  }
  return;
}

// Unwind@1801c9170
void Unwind_1801c9170(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7094) = 0;
  *(uint8_t *)(param_2 + 0x4d3) = 1;
  return;
}

// Unwind@1801c9250
void Unwind_1801c9250(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2a8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x270));
    *(uint64_t *)(param_2 + 0x2a8) = 0;
  }
  return;
}

// Unwind@1801c9330
void Unwind_1801c9330(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x70f0) = 0;
  *(uint8_t *)(param_2 + 0x4d1) = 1;
  return;
}

// Unwind@1801c9410
void Unwind_1801c9410(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2e8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2b0));
    *(uint64_t *)(param_2 + 0x2e8) = 0;
  }
  return;
}

// Unwind@1801c94f0
void Unwind_1801c94f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7118) = 0;
  *(uint8_t *)(param_2 + 0x4d0) = 1;
  return;
}

// Unwind@1801c95d0
void Unwind_1801c95d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x328);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2f0));
    *(uint64_t *)(param_2 + 0x328) = 0;
  }
  return;
}

// Unwind@1801c96b0
void Unwind_1801c96b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7140) = 0;
  *(uint8_t *)(param_2 + 0x4cf) = 1;
  return;
}

// Unwind@1801c9790
void Unwind_1801c9790(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x368);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x330));
    *(uint64_t *)(param_2 + 0x368) = 0;
  }
  return;
}

// Unwind@1801c9870
void Unwind_1801c9870(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x71a4) = 0;
  *(uint8_t *)(param_2 + 0x4cd) = 1;
  return;
}

// Unwind@1801c9950
void Unwind_1801c9950(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x3a8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x370));
    *(uint64_t *)(param_2 + 0x3a8) = 0;
  }
  return;
}

// Unwind@1801c9a30
void Unwind_1801c9a30(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x720c) = 0;
  *(uint8_t *)(param_2 + 0x4cb) = 1;
  return;
}

// Unwind@1801c9b10
void Unwind_1801c9b10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 1000);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x3b0));
    *(uint64_t *)(param_2 + 1000) = 0;
  }
  return;
}

// Unwind@1801c9bf0
void Unwind_1801c9bf0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7260) = 0;
  *(uint8_t *)(param_2 + 0x4ca) = 1;
  return;
}

// Unwind@1801c9cd0
void Unwind_1801c9cd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x440);
  return;
}

// Unwind@1801c9d90
void Unwind_1801c9d90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x400);
  *(uint8_t *)(param_2 + 0x4c8) = 0;
  return;
}

// Unwind@1801c9e60
void Unwind_1801c9e60(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4c8);
  func_0x180001e70(param_2 + 0x420);
  *(uint8_t *)(param_2 + 0x4d7) = uVal_1;
  return;
}

// Unwind@1801c9f30
void Unwind_1801c9f30(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  int64_t *pLong_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x4d7);
  pLong_2 = *(int64_t **)(param_2 + 0x478);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != (int64_t *)(param_2 + 0x440));
  }
  func_0x180001e70(param_2 + 0x490);
  *(byte *)(param_2 + 0x4c7) = bFlag_1 & 1;
  return;
}

// Unwind@1801ca030
void Unwind_1801ca030(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4c7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1a8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x170));
    *(uint64_t *)(param_2 + 0x1a8) = 0;
  }
  return;
}

// Unwind@1801ca120
void Unwind_1801ca120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x4c6) = 0;
  return;
}

// Unwind@1801ca1f0
void Unwind_1801ca1f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4c6);
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x4d6) = uVal_1;
  return;
}

// Unwind@1801ca2c0
void Unwind_1801ca2c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4d6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1e8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1b0));
    *(uint64_t *)(param_2 + 0x1e8) = 0;
  }
  return;
}

// Unwind@1801ca3b0
void Unwind_1801ca3b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x4d5) = 0;
  return;
}

// Unwind@1801ca480
void Unwind_1801ca480(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4d5);
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x4c5) = uVal_1;
  return;
}

// Unwind@1801ca550
void Unwind_1801ca550(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4c5) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x228), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f0));
    *(uint64_t *)(param_2 + 0x228) = 0;
  }
  return;
}

// Unwind@1801ca640
void Unwind_1801ca640(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x4d4) = 0;
  return;
}

// Unwind@1801ca710
void Unwind_1801ca710(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4d4);
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x4d3) = uVal_1;
  return;
}

// Unwind@1801ca7e0
void Unwind_1801ca7e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4d3) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x268), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x230));
    *(uint64_t *)(param_2 + 0x268) = 0;
  }
  return;
}

// Unwind@1801ca8d0
void Unwind_1801ca8d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x4c4) = 0;
  return;
}

// Unwind@1801ca9a0
void Unwind_1801ca9a0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4c4);
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x4d2) = uVal_1;
  return;
}

// Unwind@1801caa70
void Unwind_1801caa70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4d2) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1801cab50
void Unwind_1801cab50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x4c3) = 0;
  return;
}

// Unwind@1801cac20
void Unwind_1801cac20(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4c3);
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x4d1) = uVal_1;
  return;
}

// Unwind@1801cacf0
void Unwind_1801cacf0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4d1) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2a8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x270));
    *(uint64_t *)(param_2 + 0x2a8) = 0;
  }
  return;
}

// Unwind@1801cade0
void Unwind_1801cade0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x4c2) = 0;
  return;
}

// Unwind@1801caeb0
void Unwind_1801caeb0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4c2);
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x4d0) = uVal_1;
  return;
}

// Unwind@1801caf80
void Unwind_1801caf80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4d0) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2e8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2b0));
    *(uint64_t *)(param_2 + 0x2e8) = 0;
  }
  return;
}

// Unwind@1801cb070
void Unwind_1801cb070(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x4c1) = 0;
  return;
}

// Unwind@1801cb140
void Unwind_1801cb140(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4c1);
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x4cf) = uVal_1;
  return;
}

// Unwind@1801cb210
void Unwind_1801cb210(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4cf) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x328), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2f0));
    *(uint64_t *)(param_2 + 0x328) = 0;
  }
  return;
}

// Unwind@1801cb300
void Unwind_1801cb300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x4ce) = 0;
  return;
}

// Unwind@1801cb3d0
void Unwind_1801cb3d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4ce);
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x4c0) = uVal_1;
  return;
}

// Unwind@1801cb4a0
void Unwind_1801cb4a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4c0) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1801cb580
void Unwind_1801cb580(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x4bf) = 0;
  return;
}

// Unwind@1801cb650
void Unwind_1801cb650(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4bf);
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x4cd) = uVal_1;
  return;
}

// Unwind@1801cb720
void Unwind_1801cb720(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4cd) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x368), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x330));
    *(uint64_t *)(param_2 + 0x368) = 0;
  }
  return;
}

// Unwind@1801cb810
void Unwind_1801cb810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x4cc) = 0;
  return;
}

// Unwind@1801cb8e0
void Unwind_1801cb8e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4cc);
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x4be) = uVal_1;
  return;
}

// Unwind@1801cb9b0
void Unwind_1801cb9b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4be) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@1801cba90
void Unwind_1801cba90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x4bd) = 0;
  return;
}

// Unwind@1801cbb60
void Unwind_1801cbb60(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4bd);
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x4cb) = uVal_1;
  return;
}

// Unwind@1801cbc30
void Unwind_1801cbc30(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4cb) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x3a8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x370));
    *(uint64_t *)(param_2 + 0x3a8) = 0;
  }
  return;
}

// Unwind@1801cbd20
void Unwind_1801cbd20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x4bc) = 0;
  return;
}

// Unwind@1801cbdf0
void Unwind_1801cbdf0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4bc);
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x4ca) = uVal_1;
  return;
}

// Unwind@1801cbec0
void Unwind_1801cbec0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4ca) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 1000), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x3b0));
    *(uint64_t *)(param_2 + 1000) = 0;
  }
  return;
}

// Unwind@1801cbfb0
void Unwind_1801cbfb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x4bb) = 0;
  return;
}

// Unwind@1801cc080
void Unwind_1801cc080(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4bb);
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x4c9) = uVal_1;
  return;
}

// Unwind@1801cc150
void Unwind_1801cc150(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4c9) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@1801cc240
void Unwind_1801cc240(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x3f8));
  func_0x1801cd8c0(*(uint64_t *)(param_2 + 0x3f0));
  return;
}

// Unwind@1801cc310
void Unwind_1801cc310(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x488);
  func_0x1800fe9f0(pU64_1 + 0x8f);
  func_0x1800fe9f0(pU64_1 + 0x45);
  func_0x1800fec70(pU64_1 + 0x1e);
  *pU64_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(pU64_1 + 0x12);
  func_0x1801c49a0(pU64_1);
  return;
}

// Unwind@1801cc410
void Unwind_1801cc410(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6f70) = 0;
  return;
}

// Unwind@1801cc4e0
void Unwind_1801cc4e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6f98) = 0;
  *(uint8_t *)(param_2 + 0x4d7) = 1;
  return;
}

// Unwind@1801cc5c0
void Unwind_1801cc5c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x706c) = 0;
  *(uint8_t *)(param_2 + 0x4d5) = 1;
  return;
}

// Unwind@1801cc6a0
void Unwind_1801cc6a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x70a8) = 0;
  *(uint8_t *)(param_2 + 0x4d4) = 1;
  return;
}

// Unwind@1801cc780
void Unwind_1801cc780(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x70c4) = 0;
  *(uint8_t *)(param_2 + 0x4d2) = 1;
  return;
}

// Unwind@1801cc860
void Unwind_1801cc860(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7174) = 0;
  *(uint8_t *)(param_2 + 0x4ce) = 1;
  return;
}

// Unwind@1801cc940
void Unwind_1801cc940(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x71d0) = 0;
  *(uint8_t *)(param_2 + 0x4cc) = 1;
  return;
}

// Unwind@1801cca20
void Unwind_1801cca20(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x72a0) = 0;
  *(uint8_t *)(param_2 + 0x4c9) = 1;
  return;
}

// func_0x1801ccb00
void func_0x1801ccb00(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4, uint64_t param_5,int64_t *param_6,uint8_t param_7)
{
  uint64_t uVal_1;
  int64_t *pLong_2;
  uint64_t *pU64_3;
  uint64_t *pU64_4;
  int64_t local_88 [7];
  int64_t *local_50;
  uint64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  pU64_3 = (uint64_t *)func_0x180672de0(0x178);
  func_0x1806ab010(pU64_3,0,0x178);
  pU64_3[3] = 0xf;
  pU64_4 = pU64_3 + 4;
  *(uint8_t (*)[16])(pU64_3 + 4) = ZEXT816(0);
  pU64_3[6] = 0;
  pU64_3[7] = 0xf;
  *(uint8_t *)(pU64_3 + 0x12) = 0;
  *(uint8_t *)(pU64_3 + 0x24) = 0;
  *(uint8_t *)(pU64_3 + 0x2e) = 0;
  *(uint32_t *)(pU64_3 + 8) = 9;
  local_48 = pU64_3;
  if (pU64_4 != param_3) {
    uVal_1 = param_3[2];
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
    if (uVal_1 < 0x10) {
      pU64_3[6] = uVal_1;
      func_0x1806aa960(pU64_4,param_3,uVal_1);
      *(uint8_t *)((int64_t)pU64_3 + uVal_1 + 0x20) = 0;
    }
    else {
      func_0x18007bba0(pU64_4,uVal_1);
    }
  }
  func_0x1801d40e0(pU64_3 + 10,param_4);
  func_0x1801d3fc0(pU64_3 + 0x13,param_5);
  local_50 = (int64_t *)0x0;
  pU64_4 = (uint64_t *)param_6[7];
  if (pU64_4 != (uint64_t *)0x0) {
    local_50 = (int64_t *)(**(func_ptr_t *)*pU64_4)(pU64_4,local_88);
  }
  func_0x180210f40(local_88,pU64_3 + 0x26);
  if (local_50 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_50 + 0x20))(local_50,local_50 != local_88);
  }
  if (pU64_3 != param_2) {
    uVal_1 = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if ((uint64_t)pU64_3[3] < uVal_1) {
      func_0x18007bba0(pU64_3,uVal_1);
    }
    else {
      pU64_4 = pU64_3;
      if (0xf < (uint64_t)pU64_3[3]) {
        pU64_4 = (uint64_t *)*pU64_3;
      }
      pU64_3[2] = uVal_1;
      func_0x1806aa960(pU64_4,param_2,uVal_1);
      *(uint8_t *)((int64_t)pU64_4 + uVal_1) = 0;
    }
  }
  *(uint8_t *)(pU64_3 + 0x2e) = param_7;
  pU64_4 = *(uint64_t **)(param_1 + 0x50);
  if (pU64_4 == *(uint64_t **)(param_1 + 0x58)) {
    func_0x18007f260(param_1 + 0x48,pU64_4,&local_48);
  }
  else {
    *pU64_4 = pU64_3;
    *(int64_t *)(param_1 + 0x50) = *(int64_t *)(param_1 + 0x50) + 8;
  }
  pLong_2 = (int64_t *)param_6[7];
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != param_6);
  }
  return;
}

// Unwind@1801ccce0
void Unwind_1801ccce0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@1801ccd20
void Unwind_1801ccd20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0xd8) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0xd8));
  }
  return;
}

// func_0x1801ccd70
void func_0x1801ccd70(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4, uint8_t param_5,int64_t *param_6,uint8_t param_7)
{
  uint64_t uVal_1;
  int64_t *pLong_2;
  uint64_t *pU64_3;
  uint64_t *pU64_4;
  int64_t local_88 [7];
  int64_t *local_50;
  uint64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  pU64_3 = (uint64_t *)func_0x180672de0(0x178);
  func_0x1806ab010(pU64_3,0,0x178);
  pU64_3[3] = 0xf;
  pU64_4 = pU64_3 + 4;
  *(uint8_t (*)[16])(pU64_3 + 4) = ZEXT816(0);
  pU64_3[6] = 0;
  pU64_3[7] = 0xf;
  *(uint8_t *)(pU64_3 + 0x12) = 0;
  *(uint8_t *)(pU64_3 + 0x24) = 0;
  *(uint8_t *)(pU64_3 + 0x2e) = 0;
  *(uint32_t *)(pU64_3 + 8) = 5;
  local_48 = pU64_3;
  if (pU64_4 != param_3) {
    uVal_1 = param_3[2];
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
    if (uVal_1 < 0x10) {
      pU64_3[6] = uVal_1;
      func_0x1806aa960(pU64_4,param_3,uVal_1);
      *(uint8_t *)((int64_t)pU64_3 + uVal_1 + 0x20) = 0;
    }
    else {
      func_0x18007bba0(pU64_4,uVal_1);
    }
  }
  pU64_3[9] = param_4;
  if (*(char *)(pU64_3 + 0x12) == '\x06') {
    *(uint8_t *)(pU64_3 + 10) = param_5;
  }
  else {
    func_0x1801b3250();
    *(uint8_t *)(pU64_3 + 10) = param_5;
    *(uint8_t *)(pU64_3 + 0x12) = 6;
  }
  local_50 = (int64_t *)0x0;
  pU64_4 = (uint64_t *)param_6[7];
  if (pU64_4 != (uint64_t *)0x0) {
    local_50 = (int64_t *)(**(func_ptr_t *)*pU64_4)(pU64_4,local_88);
  }
  func_0x180210f40(local_88,pU64_3 + 0x26);
  if (local_50 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_50 + 0x20))(local_50,local_50 != local_88);
  }
  if (pU64_3 != param_2) {
    uVal_1 = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if ((uint64_t)pU64_3[3] < uVal_1) {
      func_0x18007bba0(pU64_3,uVal_1);
    }
    else {
      pU64_4 = pU64_3;
      if (0xf < (uint64_t)pU64_3[3]) {
        pU64_4 = (uint64_t *)*pU64_3;
      }
      pU64_3[2] = uVal_1;
      func_0x1806aa960(pU64_4,param_2,uVal_1);
      *(uint8_t *)((int64_t)pU64_4 + uVal_1) = 0;
    }
  }
  *(uint8_t *)(pU64_3 + 0x2e) = param_7;
  pU64_4 = *(uint64_t **)(param_1 + 0x50);
  if (pU64_4 == *(uint64_t **)(param_1 + 0x58)) {
    func_0x18007f260(param_1 + 0x48,pU64_4,&local_48);
  }
  else {
    *pU64_4 = pU64_3;
    *(int64_t *)(param_1 + 0x50) = *(int64_t *)(param_1 + 0x50) + 8;
  }
  pLong_2 = (int64_t *)param_6[7];
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != param_6);
  }
  return;
}

// Unwind@1801ccf60
void Unwind_1801ccf60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@1801ccfa0
void Unwind_1801ccfa0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0xd8) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0xd8));
  }
  return;
}

// func_0x1801ccff0
void func_0x1801ccff0(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,int64_t *param_8, uint8_t param_9)
{
  char ch_1;
  uint64_t uVal_2;
  int64_t *pLong_3;
  uint64_t *pU64_4;
  uint64_t *pU64_5;
  int64_t local_88 [7];
  int64_t *local_50;
  uint64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  pU64_4 = (uint64_t *)func_0x180672de0(0x178);
  func_0x1806ab010(pU64_4,0,0x178);
  pU64_4[3] = 0xf;
  pU64_5 = pU64_4 + 4;
  *(uint8_t (*)[16])(pU64_4 + 4) = ZEXT816(0);
  pU64_4[6] = 0;
  pU64_4[7] = 0xf;
  *(uint8_t *)(pU64_4 + 0x12) = 0;
  *(uint8_t *)(pU64_4 + 0x24) = 0;
  *(uint8_t *)(pU64_4 + 0x2e) = 0;
  *(uint32_t *)(pU64_4 + 8) = 3;
  local_48 = pU64_4;
  if (pU64_5 != param_3) {
    uVal_2 = param_3[2];
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
    if (uVal_2 < 0x10) {
      pU64_4[6] = uVal_2;
      func_0x1806aa960(pU64_5,param_3,uVal_2);
      *(uint8_t *)((int64_t)pU64_4 + uVal_2 + 0x20) = 0;
    }
    else {
      func_0x18007bba0(pU64_5,uVal_2);
    }
  }
  pU64_4[9] = param_4;
  if (*(char *)(pU64_4 + 0x12) == '\x04') {
    *(uint32_t *)(pU64_4 + 10) = param_5;
    ch_1 = *(char *)(pU64_4 + 0x1b);
  }
  else {
    func_0x1801b3250();
    *(uint32_t *)(pU64_4 + 10) = param_5;
    *(uint8_t *)(pU64_4 + 0x12) = 4;
    ch_1 = *(char *)(pU64_4 + 0x1b);
  }
  if (ch_1 == '\x04') {
    *(uint32_t *)(pU64_4 + 0x13) = param_6;
    ch_1 = *(char *)(pU64_4 + 0x24);
  }
  else {
    func_0x1801b3250();
    *(uint32_t *)(pU64_4 + 0x13) = param_6;
    *(uint8_t *)(pU64_4 + 0x1b) = 4;
    ch_1 = *(char *)(pU64_4 + 0x24);
  }
  if (ch_1 == '\x04') {
    *(uint32_t *)(pU64_4 + 0x1c) = param_7;
  }
  else {
    func_0x1801b3250();
    *(uint32_t *)(pU64_4 + 0x1c) = param_7;
    *(uint8_t *)(pU64_4 + 0x24) = 4;
  }
  local_50 = (int64_t *)0x0;
  pU64_5 = (uint64_t *)param_8[7];
  if (pU64_5 != (uint64_t *)0x0) {
    local_50 = (int64_t *)(**(func_ptr_t *)*pU64_5)(pU64_5,local_88);
  }
  func_0x180210f40(local_88,pU64_4 + 0x26);
  if (local_50 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_50 + 0x20))(local_50,local_50 != local_88);
  }
  if (pU64_4 != param_2) {
    uVal_2 = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if ((uint64_t)pU64_4[3] < uVal_2) {
      func_0x18007bba0(pU64_4,uVal_2);
    }
    else {
      pU64_5 = pU64_4;
      if (0xf < (uint64_t)pU64_4[3]) {
        pU64_5 = (uint64_t *)*pU64_4;
      }
      pU64_4[2] = uVal_2;
      func_0x1806aa960(pU64_5,param_2,uVal_2);
      *(uint8_t *)((int64_t)pU64_5 + uVal_2) = 0;
    }
  }
  *(uint8_t *)(pU64_4 + 0x2e) = param_9;
  pU64_5 = *(uint64_t **)(param_1 + 0x50);
  if (pU64_5 == *(uint64_t **)(param_1 + 0x58)) {
    func_0x18007f260(param_1 + 0x48,pU64_5,&local_48);
  }
  else {
    *pU64_5 = pU64_4;
    *(int64_t *)(param_1 + 0x50) = *(int64_t *)(param_1 + 0x50) + 8;
  }
  pLong_3 = (int64_t *)param_8[7];
  if (pLong_3 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,pLong_3 != param_8);
  }
  return;
}

// Unwind@1801cd250
void Unwind_1801cd250(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@1801cd290
void Unwind_1801cd290(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0xe8) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0xe8));
  }
  return;
}

// func_0x1801cd2e0
void func_0x1801cd2e0(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,int64_t *param_8, uint8_t param_9)
{
  char ch_1;
  uint64_t uVal_2;
  int64_t *pLong_3;
  uint64_t *pU64_4;
  uint64_t *pU64_5;
  int64_t local_98 [7];
  int64_t *local_60;
  uint64_t *local_58;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  pU64_4 = (uint64_t *)func_0x180672de0(0x178);
  func_0x1806ab010(pU64_4,0,0x178);
  pU64_4[3] = 0xf;
  pU64_5 = pU64_4 + 4;
  *(uint8_t (*)[16])(pU64_4 + 4) = ZEXT816(0);
  pU64_4[6] = 0;
  pU64_4[7] = 0xf;
  *(uint8_t *)(pU64_4 + 0x12) = 0;
  *(uint8_t *)(pU64_4 + 0x24) = 0;
  *(uint8_t *)(pU64_4 + 0x2e) = 0;
  local_58 = pU64_4;
  if (pU64_5 != param_3) {
    uVal_2 = param_3[2];
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
    if (uVal_2 < 0x10) {
      pU64_4[6] = uVal_2;
      func_0x1806aa960(pU64_5,param_3,uVal_2);
      *(uint8_t *)((int64_t)pU64_4 + uVal_2 + 0x20) = 0;
    }
    else {
      func_0x18007bba0(pU64_5,uVal_2);
    }
  }
  pU64_4[9] = param_4;
  if (*(char *)(pU64_4 + 0x12) == '\x01') {
    *(uint32_t *)(pU64_4 + 10) = param_5;
    ch_1 = *(char *)(pU64_4 + 0x1b);
  }
  else {
    func_0x1801b3250();
    *(uint32_t *)(pU64_4 + 10) = param_5;
    *(uint8_t *)(pU64_4 + 0x12) = 1;
    ch_1 = *(char *)(pU64_4 + 0x1b);
  }
  if (ch_1 == '\x01') {
    *(uint32_t *)(pU64_4 + 0x13) = param_6;
    ch_1 = *(char *)(pU64_4 + 0x24);
  }
  else {
    func_0x1801b3250();
    *(uint32_t *)(pU64_4 + 0x13) = param_6;
    *(uint8_t *)(pU64_4 + 0x1b) = 1;
    ch_1 = *(char *)(pU64_4 + 0x24);
  }
  if (ch_1 == '\x01') {
    *(uint32_t *)(pU64_4 + 0x1c) = param_7;
  }
  else {
    func_0x1801b3250();
    *(uint32_t *)(pU64_4 + 0x1c) = param_7;
    *(uint8_t *)(pU64_4 + 0x24) = 1;
  }
  local_60 = (int64_t *)0x0;
  pU64_5 = (uint64_t *)param_8[7];
  if (pU64_5 != (uint64_t *)0x0) {
    local_60 = (int64_t *)(**(func_ptr_t *)*pU64_5)(pU64_5,local_98);
  }
  func_0x180210f40(local_98,pU64_4 + 0x26);
  if (local_60 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_60 + 0x20))(local_60,local_60 != local_98);
  }
  if (pU64_4 != param_2) {
    uVal_2 = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if ((uint64_t)pU64_4[3] < uVal_2) {
      func_0x18007bba0(pU64_4,uVal_2);
    }
    else {
      pU64_5 = pU64_4;
      if (0xf < (uint64_t)pU64_4[3]) {
        pU64_5 = (uint64_t *)*pU64_4;
      }
      pU64_4[2] = uVal_2;
      func_0x1806aa960(pU64_5,param_2,uVal_2);
      *(uint8_t *)((int64_t)pU64_5 + uVal_2) = 0;
    }
  }
  *(uint8_t *)(pU64_4 + 0x2e) = param_9;
  pU64_5 = *(uint64_t **)(param_1 + 0x50);
  if (pU64_5 == *(uint64_t **)(param_1 + 0x58)) {
    func_0x18007f260(param_1 + 0x48,pU64_5,&local_58);
  }
  else {
    *pU64_5 = pU64_4;
    *(int64_t *)(param_1 + 0x50) = *(int64_t *)(param_1 + 0x50) + 8;
  }
  pLong_3 = (int64_t *)param_8[7];
  if (pLong_3 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,pLong_3 != param_8);
  }
  return;
}

// Unwind@1801cd560
void Unwind_1801cd560(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@1801cd5b0
void Unwind_1801cd5b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0xf8) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0xf8));
  }
  return;
}

// func_0x1801cd600
void func_0x1801cd600(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4, uint64_t *param_5,int64_t *param_6,uint8_t param_7)
{
  char ch_1;
  uint64_t uVal_2;
  int64_t *pLong_3;
  uint64_t *pU64_4;
  uint64_t *pU64_5;
  uint32_t uVal_6;
  int64_t local_88 [7];
  int64_t *local_50;
  uint64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  pU64_4 = (uint64_t *)func_0x180672de0(0x178);
  func_0x1806ab010(pU64_4,0,0x178);
  pU64_4[3] = 0xf;
  pU64_5 = pU64_4 + 4;
  *(uint8_t (*)[16])(pU64_4 + 4) = ZEXT816(0);
  pU64_4[6] = 0;
  pU64_4[7] = 0xf;
  *(uint8_t *)(pU64_4 + 0x12) = 0;
  *(uint8_t *)(pU64_4 + 0x24) = 0;
  *(uint8_t *)(pU64_4 + 0x2e) = 0;
  *(uint32_t *)(pU64_4 + 8) = 4;
  local_48 = pU64_4;
  if (pU64_5 != param_3) {
    uVal_2 = param_3[2];
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
    if (uVal_2 < 0x10) {
      pU64_4[6] = uVal_2;
      func_0x1806aa960(pU64_5,param_3,uVal_2);
      *(uint8_t *)((int64_t)pU64_4 + uVal_2 + 0x20) = 0;
      pU64_4[9] = param_4;
      ch_1 = *(char *)(pU64_4 + 0x12);
      goto joined_r0x0001801cd6ff;
    }
    func_0x18007bba0(pU64_5,uVal_2);
  }
  pU64_4[9] = param_4;
  ch_1 = *(char *)(pU64_4 + 0x12);
joined_r0x0001801cd6ff:
  if (ch_1 == '\x05') {
    pU64_4[10] = *param_5;
    *(uint32_t *)(pU64_4 + 0xb) = *(uint32_t *)(param_5 + 1);
    uVal_6 = *(uint32_t *)((int64_t)param_5 + 0xc);
  }
  else {
    func_0x1801b3250(pU64_4 + 10);
    pU64_4[10] = *param_5;
    *(uint32_t *)(pU64_4 + 0xb) = *(uint32_t *)(param_5 + 1);
    uVal_6 = *(uint32_t *)((int64_t)param_5 + 0xc);
    *(uint8_t *)(pU64_4 + 0x12) = 5;
  }
  *(uint32_t *)((int64_t)pU64_4 + 0x5c) = uVal_6;
  local_50 = (int64_t *)0x0;
  pU64_5 = (uint64_t *)param_6[7];
  if (pU64_5 != (uint64_t *)0x0) {
    local_50 = (int64_t *)(**(func_ptr_t *)*pU64_5)(pU64_5,local_88);
  }
  func_0x180210f40(local_88,pU64_4 + 0x26);
  if (local_50 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_50 + 0x20))(local_50,local_50 != local_88);
  }
  if (pU64_4 != param_2) {
    uVal_2 = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if ((uint64_t)pU64_4[3] < uVal_2) {
      func_0x18007bba0(pU64_4,uVal_2);
    }
    else {
      pU64_5 = pU64_4;
      if (0xf < (uint64_t)pU64_4[3]) {
        pU64_5 = (uint64_t *)*pU64_4;
      }
      pU64_4[2] = uVal_2;
      func_0x1806aa960(pU64_5,param_2,uVal_2);
      *(uint8_t *)((int64_t)pU64_5 + uVal_2) = 0;
    }
  }
  *(uint8_t *)(pU64_4 + 0x2e) = param_7;
  pU64_5 = *(uint64_t **)(param_1 + 0x50);
  if (pU64_5 == *(uint64_t **)(param_1 + 0x58)) {
    func_0x18007f260(param_1 + 0x48,pU64_5,&local_48);
  }
  else {
    *pU64_5 = pU64_4;
    *(int64_t *)(param_1 + 0x50) = *(int64_t *)(param_1 + 0x50) + 8;
  }
  pLong_3 = (int64_t *)param_6[7];
  if (pLong_3 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,pLong_3 != param_6);
  }
  return;
}

// Unwind@1801cd830
void Unwind_1801cd830(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@1801cd870
void Unwind_1801cd870(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0xd8) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0xd8));
  }
  return;
}

// func_0x1801cd8c0
void func_0x1801cd8c0(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  lVal_1 = *(int64_t *)(param_1 + 0x18);
  if (lVal_1 != 0) {
    uVal_5 = *(int64_t *)(param_1 + 0x28) - lVal_1;
    lVal_4 = lVal_1;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
    *(uint8_t (*)[16])(param_1 + 0x18) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x28) = 0;
  }
  pU64_2 = *(uint64_t **)(param_1 + 8);
  *(uint64_t *)pU64_2[1] = 0;
  pU64_2 = (uint64_t *)*pU64_2;
  while (pU64_2 != (uint64_t *)0x0) {
    pU64_3 = (uint64_t *)*pU64_2;
    lVal_1 = pU64_2[3];
    if (lVal_1 != 0) {
      func_0x1800fe9f0(lVal_1);
      thunk_FUN_180695dd0(lVal_1,0x250);
    }
    thunk_FUN_180695dd0(pU64_2,0x28);
    pU64_2 = pU64_3;
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_1 + 8),0x28);
  return;
}

// func_0x1801cd990
void func_0x1801cd990(uint64_t *param_1)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  *param_1 = &PTR_LAB_1806bb4f0;
  lVal_1 = param_1[0xe1];
  if (lVal_1 != 0) {
    uVal_5 = param_1[0xe3] - lVal_1;
    lVal_4 = lVal_1;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) goto LAB_1801cdb08;
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
    *(uint8_t (*)[16])(param_1 + 0xe1) = ZEXT816(0);
    param_1[0xe3] = 0;
  }
  lVal_1 = param_1[0xdc];
  if (lVal_1 != 0) {
    uVal_5 = param_1[0xde] - lVal_1;
    lVal_4 = lVal_1;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) {
LAB_1801cdb08:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
    *(uint8_t (*)[16])(param_1 + 0xdc) = ZEXT816(0);
    param_1[0xde] = 0;
  }
  pU64_2 = (uint64_t *)param_1[0xda];
  *(uint64_t *)pU64_2[1] = 0;
  pU64_2 = (uint64_t *)*pU64_2;
  while (pU64_2 != (uint64_t *)0x0) {
    pU64_3 = (uint64_t *)*pU64_2;
    lVal_1 = pU64_2[3];
    if (lVal_1 != 0) {
      func_0x1800fe9f0(lVal_1);
      thunk_FUN_180695dd0(lVal_1,0x250);
    }
    thunk_FUN_180695dd0(pU64_2,0x28);
    pU64_2 = pU64_3;
  }
  thunk_FUN_180695dd0(param_1[0xda],0x28);
  func_0x1800fe9f0(param_1 + 0x8f);
  func_0x1800fe9f0(param_1 + 0x45);
  func_0x1800fec70(param_1 + 0x1e);
  *param_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(param_1 + 0x12);
  func_0x1801c49a0(param_1);
  return;
}

// Unwind@1801cddc0
void Unwind_1801cddc0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x72d8) = 0;
  return;
}

// func_0x1801cde10
void func_0x1801cde10(int64_t param_1)
{
  uint32_t *pU64_1;
  uint64_t *pU64_2;
  int64_t lVal_3;
  uint32_t *pU64_4;
  uint64_t *pU64_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t *pU64_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  
  if (*(uint64_t *)(param_1 + 0x10) != 0) {
    pU64_2 = *(uint64_t **)(param_1 + 8);
    if (*(uint64_t *)(param_1 + 0x10) < *(uint64_t *)(param_1 + 0x38) >> 3) {
      func_0x180215230(param_1,*pU64_2);
      return;
    }
    *(uint64_t *)pU64_2[1] = 0;
    pU64_2 = (uint64_t *)*pU64_2;
    while (pU64_2 != (uint64_t *)0x0) {
      pU64_5 = (uint64_t *)*pU64_2;
      lVal_3 = pU64_2[3];
      if (lVal_3 != 0) {
        func_0x1800fe9f0(lVal_3);
        thunk_FUN_180695dd0(lVal_3,0x250);
      }
      thunk_FUN_180695dd0(pU64_2,0x28);
      pU64_2 = pU64_5;
    }
    lVal_3 = *(int64_t *)(param_1 + 8);
    *(int64_t *)lVal_3 = lVal_3;
    *(int64_t *)(lVal_3 + 8) = lVal_3;
    *(uint64_t *)(param_1 + 0x10) = 0;
    pU64_8 = *(uint32_t **)(param_1 + 0x18);
    pU64_4 = *(uint32_t **)(param_1 + 0x20);
    if (pU64_8 != pU64_4) {
      uVal_6 = *(uint32_t *)(param_1 + 8);
      uVal_7 = *(uint32_t *)(param_1 + 0xc);
      uVal_9 = (int64_t)pU64_4 + (-8 - (int64_t)pU64_8);
      if (0x17 < uVal_9) {
        uVal_9 = (uVal_9 >> 3) + 1;
        uVal_10 = uVal_9 & 0xfffffffffffffffc;
        uVal_11 = 0;
        do {
          pU64_1 = pU64_8 + uVal_11 * 2;
          *pU64_1 = uVal_6;
          pU64_1[1] = uVal_7;
          pU64_1[2] = uVal_6;
          pU64_1[3] = uVal_7;
          pU64_1 = pU64_8 + uVal_11 * 2 + 4;
          *pU64_1 = uVal_6;
          pU64_1[1] = uVal_7;
          pU64_1[2] = uVal_6;
          pU64_1[3] = uVal_7;
          uVal_11 = uVal_11 + 4;
        } while (uVal_10 != uVal_11);
        pU64_8 = pU64_8 + uVal_10 * 2;
        if (uVal_9 == uVal_10) {
          return;
        }
      }
      do {
        *pU64_8 = uVal_6;
        pU64_8[1] = uVal_7;
        pU64_8 = pU64_8 + 2;
      } while (pU64_8 != pU64_4);
    }
  }
  return;
}

// Unwind@1801ceb20
void Unwind_1801ceb20(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x72fc) = 0;
  return;
}

// func_0x1801ceb70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint32_t func_0x1801ceb70(int64_t param_1,uint64_t param_2)
{
  uint32_t *pU64_1;
  float fVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  int iVal_6;
  char ch_7;
  short sz_8;
  short sz_9;
  uint32_t uVal_10;
  int64_t lVal_11;
  int64_t lVal_12;
  uint64_t uVal_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  int64_t *pLong_16;
  uint8_t *pU64_17;
  uint64_t uVal_18;
  int iVal_19;
  int64_t lVal_20;
  int64_t lVal_21;
  int iVal_22;
  uint uVal_23;
  uint uVal_24;
  float fVal_25;
  float fVal_26;
  float fVal_27;
  float fVal_28;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  uint64_t local_f8;
  int local_ec;
  int local_e8;
  int local_e4;
  int64_t local_e0;
  int local_d4;
  uint32_t local_d0;
  int local_cc;
  uint8_t *local_c8;
  uint8_t *local_c0;
  uint8_t *local_b8;
  uint64_t local_b0;
  int64_t local_a8;
  uint64_t local_a0;
  
  local_a0 = 0xfffffffffffffffe;
  local_c8 = &DAT_28d478d88fb3dcdf;
  local_b0 = param_2;
  lVal_11 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
  DAT_180840a60 = lVal_11;
  if (lVal_11 == 0) {
    DAT_180840a68 = 0;
  }
  else {
    lVal_12 = func_0x180125e40(lVal_11);
    if (lVal_12 != 0) {
      local_a8 = param_1;
      uVal_13 = func_0x180126030(lVal_11);
      sz_8 = func_0x18012a230(uVal_13);
      uVal_13 = func_0x180126030(lVal_11);
      sz_9 = func_0x1801293f0(uVal_13);
      uVal_13 = local_b0;
      iVal_19 = (int)sz_8 - (int)sz_9;
      iVal_22 = iVal_19 + 0xf;
      if (-1 < iVal_19) {
        iVal_22 = iVal_19;
      }
      iVal_19 = (int)local_b0;
      iVal_6 = local_b0._4_4_;
      uVal_14 = func_0x1801288d0(lVal_12);
      lVal_15 = func_0x180129210(uVal_14,uVal_13);
      if ((lVal_15 != 0) &&
         ((*(char *)(local_a8 + 0xb2) != '\x01' || (ch_7 = func_0x18011a240(lVal_15), ch_7 == '\x02'))
         )) {
        lVal_20 = local_a8;
        lVal_21 = (int64_t)(iVal_22 >> 4);
        pLong_16 = (int64_t *)func_0x18011a2a0(lVal_15);
        lVal_15 = *pLong_16;
        if ((pLong_16[1] - lVal_15 >> 3) * 0x2e8ba2e8ba2e8ba3 - lVal_21 == 0) {
          for (; lVal_15 != pLong_16[1]; lVal_15 = lVal_15 + 0x58) {
            if (*(int *)(lVal_15 + 0x18) == -1) {
              return 0;
            }
          }
          iVal_22 = iVal_6 + 1;
          uVal_13 = func_0x1801288d0(lVal_12);
          lVal_15 = func_0x180129210(uVal_13,CONCAT44(iVal_22,iVal_19));
          if ((lVal_15 != 0) &&
             ((*(char *)(lVal_20 + 0xb2) != '\x01' ||
              (ch_7 = func_0x18011a240(lVal_15), lVal_20 = local_a8, ch_7 == '\x02')))) {
            pLong_16 = (int64_t *)func_0x18011a2a0(lVal_15);
            lVal_15 = *pLong_16;
            if ((pLong_16[1] - lVal_15 >> 3) * 0x2e8ba2e8ba2e8ba3 - lVal_21 == 0) {
              for (; lVal_15 != pLong_16[1]; lVal_15 = lVal_15 + 0x58) {
                if (*(int *)(lVal_15 + 0x18) == -1) {
                  return 0;
                }
              }
              iVal_19 = iVal_19 + 1;
              uVal_13 = func_0x1801288d0(lVal_12);
              lVal_15 = func_0x180129210(uVal_13,CONCAT44(iVal_6,iVal_19));
              if ((lVal_15 != 0) &&
                 ((*(char *)(lVal_20 + 0xb2) != '\x01' ||
                  (ch_7 = func_0x18011a240(lVal_15), lVal_20 = local_a8, ch_7 == '\x02')))) {
                pLong_16 = (int64_t *)func_0x18011a2a0(lVal_15);
                lVal_15 = *pLong_16;
                if ((pLong_16[1] - lVal_15 >> 3) * 0x2e8ba2e8ba2e8ba3 - lVal_21 == 0) {
                  for (; lVal_15 != pLong_16[1]; lVal_15 = lVal_15 + 0x58) {
                    if (*(int *)(lVal_15 + 0x18) == -1) {
                      return 0;
                    }
                  }
                  uVal_13 = func_0x1801288d0(lVal_12);
                  lVal_15 = func_0x180129210(uVal_13,CONCAT44(iVal_22,iVal_19));
                  if ((lVal_15 != 0) &&
                     ((*(char *)(lVal_20 + 0xb2) != '\x01' ||
                      (ch_7 = func_0x18011a240(lVal_15), lVal_20 = local_a8, ch_7 == '\x02')))) {
                    pLong_16 = (int64_t *)func_0x18011a2a0(lVal_15);
                    lVal_15 = *pLong_16;
                    if ((pLong_16[1] - lVal_15 >> 3) * 0x2e8ba2e8ba2e8ba3 - lVal_21 == 0) {
                      while( true ) {
                        if (lVal_15 == pLong_16[1]) {
                          lVal_15 = func_0x180672de0(0x8027);
                          local_c8 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
                          *(int64_t *)(local_c8 + -8) = lVal_15;
                          uVal_5 = _UNK_1806b288c;
                          uVal_4 = _UNK_1806b2888;
                          uVal_3 = _UNK_1806b2884;
                          uVal_10 = _DAT_1806b2880;
                          local_b8 = local_c8 + 0x8000;
                          lVal_15 = 0;
                          do {
                            *(uint8_t (*)[16])(local_c8 + lVal_15 + 0x10) = ZEXT816(0);
                            pU64_1 = (uint32_t *)(local_c8 + lVal_15);
                            *pU64_1 = uVal_10;
                            pU64_1[1] = uVal_3;
                            pU64_1[2] = uVal_4;
                            pU64_1[3] = uVal_5;
                            *(uint8_t (*)[16])(local_c8 + lVal_15 + 0x30) = ZEXT816(0);
                            pU64_1 = (uint32_t *)(local_c8 + lVal_15 + 0x20);
                            *pU64_1 = uVal_10;
                            pU64_1[1] = uVal_3;
                            pU64_1[2] = uVal_4;
                            pU64_1[3] = uVal_5;
                            *(uint8_t (*)[16])(local_c8 + lVal_15 + 0x50) = ZEXT816(0);
                            pU64_1 = (uint32_t *)(local_c8 + lVal_15 + 0x40);
                            *pU64_1 = uVal_10;
                            pU64_1[1] = uVal_3;
                            pU64_1[2] = uVal_4;
                            pU64_1[3] = uVal_5;
                            *(uint8_t (*)[16])(local_c8 + lVal_15 + 0x70) = ZEXT816(0);
                            pU64_1 = (uint32_t *)(local_c8 + lVal_15 + 0x60);
                            *pU64_1 = uVal_10;
                            pU64_1[1] = uVal_3;
                            pU64_1[2] = uVal_4;
                            pU64_1[3] = uVal_5;
                            *(uint8_t (*)[16])(local_c8 + lVal_15 + 0x90) = ZEXT816(0);
                            pU64_1 = (uint32_t *)(local_c8 + lVal_15 + 0x80);
                            *pU64_1 = uVal_10;
                            pU64_1[1] = uVal_3;
                            pU64_1[2] = uVal_4;
                            pU64_1[3] = uVal_5;
                            *(uint8_t (*)[16])(local_c8 + lVal_15 + 0xb0) = ZEXT816(0);
                            pU64_1 = (uint32_t *)(local_c8 + lVal_15 + 0xa0);
                            *pU64_1 = uVal_10;
                            pU64_1[1] = uVal_3;
                            pU64_1[2] = uVal_4;
                            pU64_1[3] = uVal_5;
                            *(uint8_t (*)[16])(local_c8 + lVal_15 + 0xd0) = ZEXT816(0);
                            pU64_1 = (uint32_t *)(local_c8 + lVal_15 + 0xc0);
                            *pU64_1 = uVal_10;
                            pU64_1[1] = uVal_3;
                            pU64_1[2] = uVal_4;
                            pU64_1[3] = uVal_5;
                            *(uint8_t (*)[16])(local_c8 + lVal_15 + 0xf0) = ZEXT816(0);
                            pU64_1 = (uint32_t *)(local_c8 + lVal_15 + 0xe0);
                            *pU64_1 = uVal_10;
                            pU64_1[1] = uVal_3;
                            pU64_1[2] = uVal_4;
                            pU64_1[3] = uVal_5;
                            lVal_15 = lVal_15 + 0x100;
                          } while (lVal_15 != 0x8000);
                          local_c0 = local_c8 + 0x8000;
                          iVal_22 = local_b0._4_4_ * 0x10 + 0x10;
                          local_d4 = (int)local_b0 * 0x10 + 0x10;
                          local_d0 = 0x140;
                          local_cc = iVal_22;
                          uVal_13 = func_0x180126030(lVal_11);
                          sz_8 = func_0x18012a230(uVal_13);
                          local_e8 = (int)sz_8;
                          local_ec = local_d4;
                          local_e4 = iVal_22;
                          uVal_10 = func_0x18011aec0(lVal_12,1,&local_ec,&local_d4,0x20,0x20,&local_c8,
                                                 ZEXT816(0));
                          if ((char)uVal_10 != '\0') {
                            uVal_13 = func_0x1800cf950();
                            lVal_11 = func_0x180672de0(0x250);
                            func_0x1806ab010(lVal_11,0,0x250);
                            local_e0 = lVal_11;
                            local_f8 = func_0x1800576d0();
                            local_e0 = 0;
                            local_100 = lVal_11;
                            func_0x1801d2080(lVal_20 + 0x6c8,&local_110,&local_b0,&local_100);
                            lVal_11 = local_100;
                            if (local_100 != 0) {
                              func_0x1800fe9f0(local_100);
                              thunk_FUN_180695dd0(lVal_11,0x250);
                            }
                            if (local_108 == '\x01') {
                              func_0x180107830(uVal_13,1,0x1000,0);
                              fVal_2 = DAT_1806b26b4;
                              for (uVal_23 = 0; uVal_23 < 0x20; uVal_23 = uVal_23 + 1) {
                                fVal_25 = (float)uVal_23;
                                fVal_26 = fVal_25 + fVal_2;
                                for (uVal_24 = 0; uVal_24 < 0x20; uVal_24 = uVal_24 + 1) {
                                  lVal_11 = (uint64_t)(uVal_24 << 5 | uVal_23) * 0x20;
                                  if (*(int64_t *)(local_c8 + lVal_11 + 0x10) != 0) {
                                    func_0x180108220(uVal_13,local_c8 + lVal_11);
                                    fVal_27 = (float)uVal_24;
                                    func_0x180107cc0(uVal_13,fVal_25,fVal_27,0);
                                    fVal_28 = fVal_27 + fVal_2;
                                    func_0x180107cc0(uVal_13,fVal_25,fVal_28);
                                    func_0x180107cc0(uVal_13,fVal_26,fVal_28);
                                    func_0x180107cc0(uVal_13,fVal_26,fVal_27);
                                  }
                                }
                              }
                              func_0x180108350(uVal_13,*(uint64_t *)(local_110 + 0x18));
                            }
                          }
                          if (local_c8 != (uint8_t *)0x0) {
                            uVal_18 = (int64_t)local_b8 - (int64_t)local_c8;
                            pU64_17 = local_c8;
                            if (0xfff < uVal_18) {
                              pU64_17 = *(uint8_t **)(local_c8 + -8);
                              if ((uint8_t *)0x1f < local_c8 + (-8 - (int64_t)pU64_17)) {
                                do {
                                  invalidInstructionException();
                                } while( true );
                              }
                              uVal_18 = uVal_18 + 0x27;
                            }
                            thunk_FUN_180695dd0(pU64_17,uVal_18);
                            return uVal_10;
                          }
                          return uVal_10;
                        }
                        if (*(int *)(lVal_15 + 0x18) == -1) break;
                        lVal_15 = lVal_15 + 0x58;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// Unwind@1801cf1f0
void Unwind_1801cf1f0(uint64_t param_1,int64_t param_2)
{
  func_0x1801d2400(param_2 + 0x58);
  return;
}

// Unwind@1801cf270
void Unwind_1801cf270(uint64_t param_1,int64_t param_2)
{
  func_0x1801d2400(param_2 + 0x78);
  return;
}

// Unwind@1801cf2f0
void Unwind_1801cf2f0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x90);
  return;
}

// func_0x1801cf6b0
uint64_t * func_0x1801cf6b0(int64_t param_1,uint64_t *param_2)
{
  int64_t *pLong_1;
  size_t _Size;
  uint64_t *pU64_2;
  int iVal_3;
  uint64_t *_Buf1;
  int64_t *pLong_4;
  
  pLong_4 = *(int64_t **)(param_1 + 0x48);
  pLong_1 = *(int64_t **)(param_1 + 0x50);
  if (pLong_4 != pLong_1) {
    _Size = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if (_Size == 0) {
      do {
        if (((uint64_t *)*pLong_4)[2] == 0) {
          return (uint64_t *)*pLong_4;
        }
        pLong_4 = pLong_4 + 1;
      } while (pLong_4 != pLong_1);
    }
    else {
      do {
        pU64_2 = (uint64_t *)*pLong_4;
        if (pU64_2[2] == _Size) {
          _Buf1 = pU64_2;
          if (0xf < (uint64_t)pU64_2[3]) {
            _Buf1 = (uint64_t *)*pU64_2;
          }
          iVal_3 = memcmp(_Buf1,param_2,_Size);
          if (iVal_3 == 0) {
            return pU64_2;
          }
        }
        pLong_4 = pLong_4 + 1;
      } while (pLong_4 != pLong_1);
    }
  }
  return (uint64_t *)0x0;
}

// Unwind@1801d1430
void Unwind_1801d1430(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1450);
  return;
}

// Unwind@1801d1510
void Unwind_1801d1510(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x1428);
  return;
}

// Unwind@1801d15f0
void Unwind_1801d15f0(uint64_t param_1,int64_t param_2)
{
  func_0x1800d0dd0(param_2 + 0x1450);
  return;
}

// Unwind@1801d16d0
void Unwind_1801d16d0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x30);
  return;
}

// Unwind@1801d17a0
void Unwind_1801d17a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1450);
  return;
}

// Unwind@1801d1880
void Unwind_1801d1880(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x1428);
  return;
}

// Unwind@1801d1960
void Unwind_1801d1960(uint64_t param_1,int64_t param_2)
{
  func_0x1800d0dd0(param_2 + 0x1450);
  return;
}

// Unwind@1801d1a40
void Unwind_1801d1a40(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x30);
  return;
}

// Unwind@1801d1b10
void Unwind_1801d1b10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7328) = 0;
  return;
}

// Unwind@1801d1bf0
void Unwind_1801d1bf0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7344) = 0;
  return;
}

// func_0x1801d1cd0
void func_0x1801d1cd0(int64_t param_1)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint32_t uVal_3;
  float fVal_4;
  uint32_t uVal_5;
  char ch_6;
  int64_t lVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  float fVal_12;
  float fVal_13;
  float fVal_14;
  float fVal_15;
  
  if (*(int64_t *)(param_1 + 0xf8) == *(int64_t *)(param_1 + 0x100)) {
    pLong_1 = (int64_t *)(param_1 + 0xf8);
    *(uint8_t *)(param_1 + 0xf0) = 1;
    func_0x180100560(param_1 + 0xf0,0);
    func_0x180100560(param_1 + 0xf0,1);
    lVal_8 = *(int64_t *)(param_1 + 0xf8);
    lVal_11 = *(int64_t *)(param_1 + 0x100);
    lVal_7 = lVal_11 - lVal_8;
    if ((uint64_t)((lVal_7 >> 2) * -0x5555555555555555) < 0x1001) {
      if (lVal_7 != 0xc000) {
        if ((uint64_t)((*(int64_t *)(param_1 + 0x108) - lVal_8 >> 2) * -0x5555555555555555) <
            0x1000) {
          func_0x18020ee80(pLong_1,0x1000);
        }
        else {
          func_0x1806ab010(lVal_11,0);
          *(int64_t *)(param_1 + 0x100) = (0xc000 - lVal_7) + lVal_11;
        }
      }
    }
    else {
      *(int64_t *)(param_1 + 0x100) = lVal_8 + 0xc000;
    }
    fVal_4 = DAT_1806b26b4;
    lVal_8 = 0;
    uVal_10 = 0;
    do {
      if ((int64_t)uVal_10 < 0) {
        fVal_12 = (float)((uint64_t)((uint)uVal_10 & 1) | uVal_10 >> 1);
        fVal_12 = fVal_12 + fVal_12;
      }
      else {
        fVal_12 = (float)uVal_10;
      }
      fVal_13 = fVal_12 + fVal_4;
      lVal_7 = 0;
      lVal_11 = lVal_8;
      do {
        fVal_14 = (float)(int)lVal_7;
        lVal_2 = *pLong_1;
        *(float *)(lVal_2 + lVal_11) = fVal_12;
        *(float *)(lVal_2 + 4 + lVal_11) = fVal_14;
        *(uint32_t *)(lVal_2 + 8 + lVal_11) = 0;
        fVal_15 = fVal_14 + fVal_4;
        lVal_2 = *pLong_1;
        *(float *)(lVal_2 + 0xc + lVal_11) = fVal_12;
        *(float *)(lVal_2 + 0x10 + lVal_11) = fVal_15;
        *(uint32_t *)(lVal_2 + 0x14 + lVal_11) = 0;
        lVal_2 = *pLong_1;
        *(float *)(lVal_2 + 0x18 + lVal_11) = fVal_13;
        *(float *)(lVal_2 + 0x1c + lVal_11) = fVal_15;
        *(uint32_t *)(lVal_2 + 0x20 + lVal_11) = 0;
        lVal_2 = *pLong_1;
        *(float *)(lVal_2 + 0x24 + lVal_11) = fVal_13;
        *(float *)(lVal_2 + 0x28 + lVal_11) = fVal_14;
        *(uint32_t *)(lVal_2 + 0x2c + lVal_11) = 0;
        lVal_7 = lVal_7 + 1;
        lVal_11 = lVal_11 + 0x600;
      } while (lVal_7 != 0x20);
      uVal_10 = uVal_10 + 1;
      lVal_8 = lVal_8 + 0x30;
    } while (uVal_10 != 0x20);
  }
  ch_6 = func_0x1800ff0e0(param_1 + 0x228);
  if (ch_6 == '\0') {
    uVal_9 = func_0x1800cf950();
    func_0x180107830(uVal_9,1,0,0);
    func_0x180107e20(uVal_9,0,0,0,0,0);
    fVal_4 = DAT_1806b26b4;
    func_0x180107e20(uVal_9,0,DAT_1806b26b4,0,0,0x3f800000);
    func_0x180107e20(uVal_9,fVal_4,fVal_4,0,0x3f800000,0x3f800000);
    func_0x180107e20(uVal_9,fVal_4,0,0,0x3f800000,0);
    func_0x180108350(uVal_9,param_1 + 0x228);
  }
  ch_6 = func_0x1800ff0e0(param_1 + 0x478);
  if (ch_6 == '\0') {
    uVal_9 = func_0x1800cf950();
    func_0x180107830(uVal_9,1,0,0);
    uVal_5 = DAT_1806b2860;
    func_0x180107e20(uVal_9,DAT_1806b2860,DAT_1806b2860,0,0,0);
    uVal_3 = DAT_1806aeae4;
    func_0x180107e20(uVal_9,uVal_5,DAT_1806aeae4,0,0,0x3e800000);
    func_0x180107e20(uVal_9,uVal_3,uVal_3,0,0x3e800000,0x3e800000);
    func_0x180107e20(uVal_9,uVal_3,uVal_5,0,0x3e800000,0);
    func_0x180108350(uVal_9,param_1 + 0x478);
  }
  return;
}

// func_0x1801d2080
/* WARNING: Removing unreachable block (ram,0x0001801d236f) */
/* WARNING: Removing unreachable block (ram,0x0001801d2378) */
/* WARNING: Removing unreachable block (ram,0x0001801d238d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x0001801d236f) */
/* WARNING: Removing unreachable block (ram,0x0001801d2378) */
/* WARNING: Removing unreachable block (ram,0x0001801d238d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801d2080(float *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4)
{
  int64_t *pLong_1;
  uint uVal_2;
  int iVal_3;
  uint64_t uVal_4;
  uint64_t *pU64_5;
  func_ptr_t fnPtr_6;
  uint64_t *pU64_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  uint64_t *pU64_15;
  float fVal_16;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qb;
  uint8_t auArr_17 [16];
  uint8_t auArr_18 [16];
  uint8_t auArr_19 [16];
  float fVal_20;
  float *pFloat_21;
  uint64_t uVal_22;
  
  uVal_22 = 0xfffffffffffffffe;
  uVal_9 = ((uint64_t)*(byte *)((int64_t)param_3 + 3) ^
          ((uint64_t)*(byte *)((int64_t)param_3 + 2) ^
          ((uint64_t)*(byte *)((int64_t)param_3 + 1) ^
          ((uint64_t)*(byte *)param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3 + 0x9e3779b9;
  uVal_13 = ((uint64_t)*(byte *)((int64_t)param_3 + 6) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 5) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 4) ^ 0xcbf29ce484222325) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3;
  uVal_12 = (uVal_9 >> 2) + uVal_9 * 0x40;
  uVal_9 = (*(byte *)((int64_t)param_3 + 7) ^ uVal_13) * 0x100000001b3 + 0x9e3779b9 + uVal_12 ^ uVal_9;
  pU64_15 = *(uint64_t **)(param_1 + 2);
  uVal_8 = *(uint64_t *)(param_1 + 6);
  lVal_10 = (*(uint64_t *)(param_1 + 0xc) & uVal_9) * 0x10;
  pU64_7 = *(uint64_t **)(uVal_8 + 8 + lVal_10);
  if (pU64_7 != pU64_15) {
    pLong_1 = (int64_t *)(uVal_8 + lVal_10);
    uVal_8 = (uint64_t)*(uint *)param_3;
    uVal_12 = (uint64_t)*(uint *)((int64_t)param_3 + 4);
    uVal_2 = *(uint *)(pU64_7 + 2);
    pU64_15 = pU64_7;
    while( true ) {
      if ((*(uint *)param_3 == uVal_2) &&
         (*(uint *)((int64_t)param_3 + 4) == *(uint *)((int64_t)pU64_15 + 0x14))) {
        *param_2 = pU64_15;
        *(uint8_t *)(param_2 + 1) = 0;
        return param_2;
      }
      if (pU64_15 == (uint64_t *)*pLong_1) break;
      pU64_15 = (uint64_t *)pU64_15[1];
      uVal_2 = *(uint *)(pU64_15 + 2);
    }
  }
  if (*(int64_t *)(param_1 + 4) == 0x666666666666666) {
    func_0x1806744c0("unordered_map/set too long");
    fnPtr_6 = (func_ptr_t )swi(3);
    pU64_7 = (uint64_t *)(*fnPtr_6)();
    return pU64_7;
  }
  pFloat_21 = param_1 + 2;
  pU64_7 = (uint64_t *)func_0x180672de0(0x28,uVal_8,uVal_12,uVal_13,pFloat_21);
  auArr_19._8_8_ = extraout_XMM0_Qb;
  auArr_19._0_8_ = extraout_XMM0_Qa;
  pU64_7[2] = *param_3;
  uVal_4 = *param_4;
  *param_4 = 0;
  pU64_7[3] = uVal_4;
  pU64_7[4] = param_4[1];
  uVal_8 = *(int64_t *)(param_1 + 4) + 1;
  auArr_17._4_12_ = auArr_19._4_12_;
  if ((int64_t)uVal_8 < 0) {
    fVal_16 = (float)((uint64_t)((uint)uVal_8 & 1) | uVal_8 >> 1);
    auArr_17._0_4_ = fVal_16 + fVal_16;
    fVal_16 = *param_1;
    uVal_8 = *(uint64_t *)(param_1 + 0xe);
    if (-1 < (int64_t)uVal_8) goto LAB_1801d2244;
LAB_1801d21fa:
    fVal_20 = (float)((uint64_t)((uint)uVal_8 & 1) | uVal_8 >> 1);
    fVal_20 = auArr_17._0_4_ / (fVal_20 + fVal_20);
    if (fVal_16 < fVal_20) {
LAB_1801d2259:
      auArr_18._4_12_ = auArr_17._4_12_;
      auArr_18._0_4_ = auArr_17._0_4_ / fVal_16;
      auArr_19 = roundss(auArr_18,auArr_18,10);
      uVal_13 = (uint64_t)auArr_19._0_4_;
      uVal_13 = (int64_t)(auArr_19._0_4_ - _DAT_1806ae420) & (int64_t)uVal_13 >> 0x3f | uVal_13;
      uVal_12 = 8;
      if (8 < uVal_13) {
        uVal_12 = uVal_13;
      }
      uVal_11 = uVal_8;
      if (uVal_8 < uVal_12) {
        uVal_11 = uVal_8 * 8;
        if (uVal_11 < uVal_12 || uVal_11 - uVal_12 == 0) {
          uVal_11 = uVal_12;
        }
        if (0x1ff < uVal_8) {
          uVal_11 = uVal_12;
        }
      }
      func_0x1802157d0(param_1,uVal_11,uVal_13,fVal_20,pFloat_21,pU64_7,uVal_22);
      pU64_15 = *(uint64_t **)(param_1 + 2);
      lVal_10 = (*(uint64_t *)(param_1 + 0xc) & uVal_9) * 0x10;
      pU64_5 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_10);
      if (pU64_5 != pU64_15) {
        iVal_3 = *(int *)(pU64_5 + 2);
        pU64_15 = pU64_5;
        while ((*(int *)(pU64_7 + 2) != iVal_3 ||
               (*(int *)((int64_t)pU64_7 + 0x14) != *(int *)((int64_t)pU64_15 + 0x14)))) {
          if (pU64_15 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_10)) goto LAB_1801d230e;
          pU64_15 = (uint64_t *)pU64_15[1];
          iVal_3 = *(int *)(pU64_15 + 2);
        }
        pU64_15 = (uint64_t *)*pU64_15;
      }
    }
  }
  else {
    auArr_17._0_4_ = (float)uVal_8;
    fVal_16 = *param_1;
    uVal_8 = *(uint64_t *)(param_1 + 0xe);
    if ((int64_t)uVal_8 < 0) goto LAB_1801d21fa;
LAB_1801d2244:
    fVal_20 = auArr_17._0_4_ / (float)uVal_8;
    if (fVal_16 < fVal_20) goto LAB_1801d2259;
  }
LAB_1801d230e:
  pU64_5 = (uint64_t *)pU64_15[1];
  *(int64_t *)(param_1 + 4) = *(int64_t *)(param_1 + 4) + 1;
  *pU64_7 = pU64_15;
  pU64_7[1] = pU64_5;
  *pU64_5 = pU64_7;
  pU64_15[1] = pU64_7;
  lVal_10 = *(int64_t *)(param_1 + 6);
  lVal_14 = (uVal_9 & *(uint64_t *)(param_1 + 0xc)) * 0x10;
  if (*(uint64_t **)(lVal_10 + lVal_14) == *(uint64_t **)(param_1 + 2)) {
    *(uint64_t **)(lVal_10 + lVal_14) = pU64_7;
  }
  else {
    if (*(uint64_t **)(lVal_10 + lVal_14) == pU64_15) {
      *(uint64_t **)(lVal_10 + lVal_14) = pU64_7;
      goto LAB_1801d235f;
    }
    if (*(uint64_t **)(lVal_10 + 8 + lVal_14) != pU64_5) goto LAB_1801d235f;
  }
  *(uint64_t **)(lVal_10 + 8 + lVal_14) = pU64_7;
LAB_1801d235f:
  *param_2 = pU64_7;
  *(uint8_t *)(param_2 + 1) = 1;
  return param_2;
}

// Unwind@1801d23c0
void Unwind_1801d23c0(uint64_t param_1,int64_t param_2)
{
  func_0x180215780(param_2 + 0x20);
  return;
}

// func_0x1801d2400
void func_0x1801d2400(int64_t *param_1)
{
  int64_t lVal_1;
  
  lVal_1 = *param_1;
  if (lVal_1 != 0) {
    func_0x1800fe9f0(lVal_1);
    thunk_FUN_180695dd0(lVal_1,0x250);
    return;
  }
  return;
}

// func_0x1801d2430
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801d2430(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint8_t auArr_1 [16];
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
  size_t sz_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  uint8_t *pU64_15;
  uint64_t uVal_16;
  uint8_t local_58 [16];
  size_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x7394) == '\0') {
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_14 + 0x7394) = 1;
    *(uint8_t *)(lVal_14 + 0x7391) = 1;
    uVal_11 = _UNK_1806bd192;
    uVal_10 = _UNK_1806bd18e;
    uVal_9 = _UNK_1806bd18a;
    *(uint32_t *)(lVal_14 + 0x7345) = _DAT_1806bd186;
    *(uint32_t *)(lVal_14 + 0x7349) = uVal_9;
    *(uint32_t *)(lVal_14 + 0x734d) = uVal_10;
    *(uint32_t *)(lVal_14 + 0x7351) = uVal_11;
    uVal_11 = _UNK_1806bd1a2;
    uVal_10 = _UNK_1806bd19e;
    uVal_9 = _UNK_1806bd19a;
    *(uint32_t *)(lVal_14 + 0x7355) = _DAT_1806bd196;
    *(uint32_t *)(lVal_14 + 0x7359) = uVal_9;
    *(uint32_t *)(lVal_14 + 0x735d) = uVal_10;
    *(uint32_t *)(lVal_14 + 0x7361) = uVal_11;
    uVal_11 = _UNK_1806bd1b2;
    uVal_10 = _UNK_1806bd1ae;
    uVal_9 = _UNK_1806bd1aa;
    *(uint32_t *)(lVal_14 + 0x7365) = _DAT_1806bd1a6;
    *(uint32_t *)(lVal_14 + 0x7369) = uVal_9;
    *(uint32_t *)(lVal_14 + 0x736d) = uVal_10;
    *(uint32_t *)(lVal_14 + 0x7371) = uVal_11;
    uVal_11 = _DAT_1806bd1c2;
    uVal_10 = _UNK_1806bd1be;
    uVal_9 = _UNK_1806bd1ba;
    *(uint32_t *)(lVal_14 + 0x7375) = _DAT_1806bd1b6;
    *(uint32_t *)(lVal_14 + 0x7379) = uVal_9;
    *(uint32_t *)(lVal_14 + 0x737d) = uVal_10;
    *(uint32_t *)(lVal_14 + 0x7381) = uVal_11;
    uVal_11 = _UNK_1806bd1ce;
    uVal_10 = _UNK_1806bd1ca;
    uVal_9 = _UNK_1806bd1c6;
    *(uint32_t *)(lVal_14 + 0x7381) = _DAT_1806bd1c2;
    *(uint32_t *)(lVal_14 + 0x7385) = uVal_9;
    *(uint32_t *)(lVal_14 + 0x7389) = uVal_10;
    *(uint32_t *)(lVal_14 + 0x738d) = uVal_11;
    func_0x180673140(&LAB_18020f030);
  }
  uVal_8 = _UNK_1806b5b0c;
  uVal_7 = _UNK_1806b5b08;
  uVal_6 = _UNK_1806b5b04;
  uVal_5 = _DAT_1806b5b00;
  lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_14 + 0x7345);
  if (*(char *)(lVal_14 + 0x7391) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_14 + 0x7349) ^ _UNK_1806b5b04;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b5b00;
    auArr_1._8_4_ = *(uint *)(lVal_14 + 0x734d) ^ _UNK_1806b5b08;
    auArr_1._12_4_ = *(uint *)(lVal_14 + 0x7351) ^ _UNK_1806b5b0c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_14 + 0x7359) ^ uVal_6;
    auArr_2._0_4_ = *(uint *)(lVal_14 + 0x7355) ^ uVal_5;
    auArr_2._8_4_ = *(uint *)(lVal_14 + 0x735d) ^ uVal_7;
    auArr_2._12_4_ = *(uint *)(lVal_14 + 0x7361) ^ uVal_8;
    *(uint8_t (*)[16])(lVal_14 + 0x7355) = auArr_2;
    auArr_3._4_4_ = *(uint *)(lVal_14 + 0x7369) ^ uVal_6;
    auArr_3._0_4_ = *(uint *)(lVal_14 + 0x7365) ^ uVal_5;
    auArr_3._8_4_ = *(uint *)(lVal_14 + 0x736d) ^ uVal_7;
    auArr_3._12_4_ = *(uint *)(lVal_14 + 0x7371) ^ uVal_8;
    *(uint8_t (*)[16])(lVal_14 + 0x7365) = auArr_3;
    auArr_4._4_4_ = *(uint *)(lVal_14 + 0x7379) ^ uVal_6;
    auArr_4._0_4_ = *(uint *)(lVal_14 + 0x7375) ^ uVal_5;
    auArr_4._8_4_ = *(uint *)(lVal_14 + 0x737d) ^ uVal_7;
    auArr_4._12_4_ = *(uint *)(lVal_14 + 0x7381) ^ uVal_8;
    *(uint8_t (*)[16])(lVal_14 + 0x7375) = auArr_4;
    *(uint64_t *)(lVal_14 + 0x7385) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_14 + 0x7385) >> 0x20) ^ _UNK_1806b5b14,
                  (uint)*(uint64_t *)(lVal_14 + 0x7385) ^ _DAT_1806b5b10);
    *(byte *)(lVal_14 + 0x738d) = *(byte *)(lVal_14 + 0x738d) ^ 0xdd;
    *(byte *)(lVal_14 + 0x738e) = *(byte *)(lVal_14 + 0x738e) ^ 0xd1;
    *(byte *)(lVal_14 + 0x738f) = *(byte *)(lVal_14 + 0x738f) ^ 0x69;
    *(byte *)(lVal_14 + 0x7390) = *(byte *)(lVal_14 + 0x7390) ^ 0xe5;
    *(uint8_t *)(lVal_14 + 0x7391) = 0;
  }
  local_58 = ZEXT816(0);
  sz_12 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_12) {
    if (sz_12 < 0x10) {
      pU64_15 = local_58;
      uVal_16 = 0xf;
    }
    else {
      uVal_13 = sz_12 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_13) {
        uVal_16 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_14 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_14;
      }
      local_58._0_8_ = pU64_15;
    }
    local_48 = sz_12;
    local_40 = uVal_16;
    func_0x1806aa960(pU64_15,_Str,sz_12);
    pU64_15[sz_12] = 0;
    func_0x1801c2ba0(param_1,0,1,local_58);
    if (0xf < local_40) {
      uVal_16 = local_40 + 1;
      lVal_14 = local_58._0_8_;
      if (0xfff < uVal_16) {
        lVal_14 = *(int64_t *)(local_58._0_8_ + -8);
        if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_14)) goto LAB_1801d2664;
        uVal_16 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_16);
    }
    *param_1 = &PTR_LAB_1806bb670;
    *(uint16_t *)(param_1 + 0x10) = 0;
    return param_1;
  }
  func_0x18007ba70();
LAB_1801d2664:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801d2670
void Unwind_1801d2670(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801d27f0
void Unwind_1801d27f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x73a8) = 0;
  return;
}

// Unwind@1801d2980
void Unwind_1801d2980(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x73c8) = 0;
  return;
}

// Unwind@1801d2a70
void Unwind_1801d2a70(void)
{
  func_0x180672f60(&DAT_18083f990);
  return;
}

// func_0x1801d2eb0
uint8_t (*func_0x1801d2eb0(uint8_t (*param_1)[16],uint8_t (*param_2)[16],uint8_t param_3, int64_t *param_4))[16]
{
  uint64_t uVal_1;
  uint64_t *pU64_2;
  int64_t *pLong_3;
  uint8_t (*pArr16_4)[16];
  int64_t *pLong_5;
  int64_t local_88 [7];
  int64_t *local_50;
  uint8_t *local_48;
  uint8_t (*local_40)[16];
  uint8_t (*local_38)[16];
  int64_t *local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  local_48 = param_1[2] + 8;
  local_40 = param_1 + 6;
  param_1[6] = ZEXT816(0);
  local_38 = param_1;
  local_30 = param_4;
  if (param_1 != param_2) {
    uVal_1 = *(uint64_t *)param_2[1];
    if (0xf < *(uint64_t *)(param_2[1] + 8)) {
      param_2 = *(uint8_t (**)[16])*param_2;
    }
    if (uVal_1 < 0x10) {
      *(uint64_t *)param_1[1] = uVal_1;
      func_0x1806aa960(param_1,param_2,uVal_1);
      (*param_1)[uVal_1] = 0;
    }
    else {
      func_0x18007bba0(param_1,uVal_1);
    }
  }
  local_38[2][0] = param_3;
  local_50 = (int64_t *)0x0;
  pU64_2 = (uint64_t *)local_30[7];
  if (pU64_2 != (uint64_t *)0x0) {
    local_50 = (int64_t *)(**(func_ptr_t *)*pU64_2)(pU64_2,local_88);
  }
  pLong_5 = local_30;
  pArr16_4 = local_38;
  func_0x180210f40(local_88,local_48);
  if (local_50 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_50 + 0x20))(local_50,local_50 != local_88);
  }
  pLong_3 = (int64_t *)pLong_5[7];
  if (pLong_3 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,pLong_3 != pLong_5);
  }
  return pArr16_4;
}

// Unwind@1801d2fd0
void Unwind_1801d2fd0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@1801d3010
void Unwind_1801d3010(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t *pLong_2;
  
  uVal_1 = *(uint64_t *)(param_2 + 0x70);
  pLong_2 = **(int64_t ***)(param_2 + 0x68);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != *(int64_t **)(param_2 + 0x60));
    **(uint64_t **)(param_2 + 0x68) = 0;
  }
  func_0x180001e70(uVal_1);
  pLong_2 = *(int64_t **)(*(int64_t *)(param_2 + 0x78) + 0x38);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != *(int64_t **)(param_2 + 0x78));
  }
  return;
}

// func_0x1801d3080
uint8_t func_0x1801d3080(int64_t param_1)
{
  return *(uint8_t *)(param_1 + 0x20);
}

// func_0x1801d3090
void func_0x1801d3090(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  
  if (*(int64_t **)(param_1 + 0x60) != (int64_t *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801d30a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(func_ptr_t *)(**(int64_t **)(param_1 + 0x60) + 0x10))();
    return;
  }
  func_0x180674610();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1801d30b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t * func_0x1801d30b0(int64_t *param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  char *fnPtr_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  bool bFlag_8;
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  uint8_t auArr_12 [16];
  uint8_t auArr_13 [16];
  int64_t local_98 [3];
  uint64_t local_80;
  byte local_78;
  int64_t local_70 [7];
  int64_t *local_38;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  func_0x1801d34e0(local_98);
  lVal_7 = *param_1;
  lVal_1 = param_1[1];
  if (lVal_7 != lVal_1) {
    uVal_6 = (lVal_1 - lVal_7) - 0x70;
    if (uVal_6 < 0x310) {
      bFlag_8 = false;
LAB_1801d33c0:
      do {
        bFlag_8 = (bool)(bFlag_8 | *(byte *)(lVal_7 + 0x20) == local_78);
        lVal_7 = lVal_7 + 0x70;
      } while (lVal_7 != lVal_1);
    }
    else {
      uVal_4 = uVal_6 / 0x70 + 1;
      if (uVal_6 < 0xd90) {
        uVal_2 = 0;
        bFlag_8 = false;
LAB_1801d32fd:
        uVal_6 = uVal_4 & 0xfffffffffffffff8;
        auArr_9 = ZEXT116(bFlag_8);
        auArr_10 = pshuflw(ZEXT216(CONCAT11(local_78,local_78)),ZEXT216(CONCAT11(local_78,local_78)),
                          0);
        lVal_3 = uVal_2 - uVal_6;
        fnPtr_5 = (char *)(lVal_7 + uVal_2 * 0x70 + 0x330);
        do {
          auArr_11[0] = -((char)*(uint32_t *)(fnPtr_5 + -0x310) == auArr_10[0]);
          auArr_11[1] = -(fnPtr_5[-0x2a0] == auArr_10[1]);
          auArr_11[2] = -(fnPtr_5[-0x230] == auArr_10[2]);
          auArr_11[3] = -(fnPtr_5[-0x1c0] == auArr_10[3]);
          auArr_11[4] = -(fnPtr_5[-0x150] == auArr_10[4]);
          auArr_11[5] = -(fnPtr_5[-0xe0] == auArr_10[5]);
          auArr_11[6] = -(fnPtr_5[-0x70] == auArr_10[6]);
          auArr_11[7] = -(*fnPtr_5 == auArr_10[7]);
          auArr_11[8] = -(auArr_10[8] == '\0');
          auArr_11[9] = -(auArr_10[9] == '\0');
          auArr_11[10] = -(auArr_10[10] == '\0');
          auArr_11[11] = -(auArr_10[11] == '\0');
          auArr_11[12] = -(auArr_10[12] == '\0');
          auArr_11[13] = -(auArr_10[13] == '\0');
          auArr_11[14] = -(auArr_10[14] == '\0');
          auArr_11[15] = -(auArr_10[15] == '\0');
          auArr_11 = pmovsxbw(auArr_11,auArr_11);
          auArr_9 = auArr_9 | auArr_11;
          fnPtr_5 = fnPtr_5 + 0x380;
          lVal_3 = lVal_3 + 8;
        } while (lVal_3 != 0);
        bFlag_8 = (_DAT_1806bb0c0 & auArr_9) != (uint8_t  [16])0x0;
        lVal_7 = uVal_6 * 0x70 + lVal_7;
        if (uVal_4 != uVal_6) goto LAB_1801d33c0;
      }
      else {
        uVal_2 = uVal_4 & 0xffffffffffffffe0;
        auArr_9 = (uint8_t  [16])0x0;
        auArr_10 = pshufb(ZEXT116(local_78),(uint8_t  [16])0x0);
        fnPtr_5 = (char *)(lVal_7 + 0xdb0);
        auArr_11 = (uint8_t  [16])0x0;
        uVal_6 = uVal_2;
        do {
          auArr_12[0] = -((char)*(uint32_t *)(fnPtr_5 + -0xd90) == auArr_10[0]);
          auArr_12[1] = -(fnPtr_5[-0xd20] == auArr_10[1]);
          auArr_12[2] = -(fnPtr_5[-0xcb0] == auArr_10[2]);
          auArr_12[3] = -(fnPtr_5[-0xc40] == auArr_10[3]);
          auArr_12[4] = -(fnPtr_5[-0xbd0] == auArr_10[4]);
          auArr_12[5] = -(fnPtr_5[-0xb60] == auArr_10[5]);
          auArr_12[6] = -(fnPtr_5[-0xaf0] == auArr_10[6]);
          auArr_12[7] = -(fnPtr_5[-0xa80] == auArr_10[7]);
          auArr_12[8] = -(fnPtr_5[-0xa10] == auArr_10[8]);
          auArr_12[9] = -(fnPtr_5[-0x9a0] == auArr_10[9]);
          auArr_12[10] = -(fnPtr_5[-0x930] == auArr_10[10]);
          auArr_12[11] = -(fnPtr_5[-0x8c0] == auArr_10[11]);
          auArr_12[12] = -(fnPtr_5[-0x850] == auArr_10[12]);
          auArr_12[13] = -(fnPtr_5[-0x7e0] == auArr_10[13]);
          auArr_12[14] = -(fnPtr_5[-0x770] == auArr_10[14]);
          auArr_12[15] = -(fnPtr_5[-0x700] == auArr_10[15]);
          auArr_11 = auArr_11 | auArr_12;
          auArr_13[0] = -((char)*(uint32_t *)(fnPtr_5 + -0x690) == auArr_10[0]);
          auArr_13[1] = -(fnPtr_5[-0x620] == auArr_10[1]);
          auArr_13[2] = -(fnPtr_5[-0x5b0] == auArr_10[2]);
          auArr_13[3] = -(fnPtr_5[-0x540] == auArr_10[3]);
          auArr_13[4] = -(fnPtr_5[-0x4d0] == auArr_10[4]);
          auArr_13[5] = -(fnPtr_5[-0x460] == auArr_10[5]);
          auArr_13[6] = -(fnPtr_5[-0x3f0] == auArr_10[6]);
          auArr_13[7] = -(fnPtr_5[-0x380] == auArr_10[7]);
          auArr_13[8] = -(fnPtr_5[-0x310] == auArr_10[8]);
          auArr_13[9] = -(fnPtr_5[-0x2a0] == auArr_10[9]);
          auArr_13[10] = -(fnPtr_5[-0x230] == auArr_10[10]);
          auArr_13[11] = -(fnPtr_5[-0x1c0] == auArr_10[11]);
          auArr_13[12] = -(fnPtr_5[-0x150] == auArr_10[12]);
          auArr_13[13] = -(fnPtr_5[-0xe0] == auArr_10[13]);
          auArr_13[14] = -(fnPtr_5[-0x70] == auArr_10[14]);
          auArr_13[15] = -(*fnPtr_5 == auArr_10[15]);
          auArr_9 = auArr_9 | auArr_13;
          fnPtr_5 = fnPtr_5 + 0xe00;
          uVal_6 = uVal_6 - 0x20;
        } while (uVal_6 != 0);
        auArr_9 = psllw(auArr_9 | auArr_11,7);
        bFlag_8 = (ushort)((ushort)(SUB161(auArr_9 >> 7,0) & 1) |
                         (ushort)(SUB161(auArr_9 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auArr_9 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auArr_9 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auArr_9 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auArr_9 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auArr_9 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auArr_9 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auArr_9 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auArr_9 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auArr_9 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auArr_9 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auArr_9 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auArr_9 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auArr_9 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auArr_9[15] >> 7) << 0xf) != 0;
        if (uVal_4 != uVal_2) {
          if ((uVal_4 & 0x18) == 0) {
            lVal_7 = lVal_7 + uVal_2 * 0x70;
            goto LAB_1801d33c0;
          }
          goto LAB_1801d32fd;
        }
      }
    }
    if (bFlag_8) goto LAB_1801d342e;
  }
  if (lVal_1 == param_1[2]) {
    func_0x18020f400(param_1,lVal_1,local_98);
    lVal_7 = param_1[1];
  }
  else {
    func_0x1801d34e0(lVal_1,local_98);
    lVal_7 = param_1[1] + 0x70;
    param_1[1] = lVal_7;
  }
  func_0x18020fa40(*param_1,lVal_7,(lVal_7 - *param_1 >> 4) * 0x6db6db6db6db6db7);
LAB_1801d342e:
  if (local_38 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_38 + 0x20))(local_38,local_38 != local_70);
    local_38 = (int64_t *)0x0;
  }
  if (0xf < local_80) {
    uVal_6 = local_80 + 1;
    lVal_7 = local_98[0];
    if (0xfff < uVal_6) {
      lVal_7 = *(int64_t *)(local_98[0] + -8);
      if (0x1f < (uint64_t)((local_98[0] + -8) - lVal_7)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = local_80 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_6);
  }
  return param_1;
}

// Unwind@1801d34b0
void Unwind_1801d34b0(uint64_t param_1,int64_t param_2)
{
  func_0x180188250(param_2 + 0x20);
  return;
}

// func_0x1801d34e0
uint8_t (*func_0x1801d34e0(uint8_t (*param_1)[16],uint64_t *param_2))[16]
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  uint8_t (*pArr16_9)[16];
  uint64_t *pU64_10;
  uint64_t uVal_11;
  
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  uVal_1 = param_2[2];
  pU64_10 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    pU64_10 = (uint64_t *)*param_2;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_10 + 4);
      uVal_4 = *(uint32_t *)(pU64_10 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_10 + 0xc);
      *(uint32_t *)*param_1 = *(uint32_t *)pU64_10;
      *(uint32_t *)(*param_1 + 4) = uVal_3;
      *(uint32_t *)(*param_1 + 8) = uVal_4;
      *(uint32_t *)(*param_1 + 0xc) = uVal_5;
    }
    else {
      uVal_6 = uVal_1 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_6) {
        uVal_11 = uVal_6;
      }
      if (uVal_6 < 0xfff) {
        uVal_6 = func_0x180672de0(uVal_11 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_11 + 0x28);
        uVal_6 = lVal_7 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_6 - 8) = lVal_7;
      }
      *(uint64_t *)*param_1 = uVal_6;
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = uVal_11;
      func_0x1806aa960(uVal_6,pU64_10,uVal_1 + 1);
    }
    param_1[2][0] = *(uint8_t *)(param_2 + 4);
    *(uint64_t *)param_1[6] = 0;
    if ((uint64_t *)param_2[0xc] != (uint64_t *)0x0) {
      uVal_8 = (***(func_ptr_t **)(uint64_t *)param_2[0xc])();
      *(uint64_t *)param_1[6] = uVal_8;
    }
    *(uint64_t *)(param_1[6] + 8) = param_2[0xd];
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_9 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_9;
}

// Unwind@1801d35f0
void Unwind_1801d35f0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  int64_t *pLong_2;
  
  lVal_1 = *(int64_t *)(param_2 + 0x28);
  pLong_2 = *(int64_t **)(lVal_1 + 0x60);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != *(int64_t **)(param_2 + 0x20));
    *(uint64_t *)(lVal_1 + 0x60) = 0;
  }
  func_0x180001e70(lVal_1);
  return;
}

// func_0x1801d3650
uint64_t func_0x1801d3650(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t unaff_RBX;
  int64_t local_d8 [3];
  uint64_t local_c0;
  int64_t local_b0 [7];
  int64_t *local_78;
  uint8_t local_68 [56];
  uint64_t local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = 0;
  if (DAT_18083f940 != (uint64_t *)0x0) {
    local_30 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_68);
    param_3 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),(char)param_3) & 0xffffffff;
  }
  func_0x1801d2eb0(local_d8,param_2,param_3,local_68);
  func_0x1801d30b0(param_1,local_d8);
  if (local_78 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_78 + 0x20))(local_78,local_78 != local_b0);
    local_78 = (int64_t *)0x0;
  }
  if (0xf < local_c0) {
    uVal_1 = local_c0 + 1;
    lVal_2 = local_d8[0];
    if (0xfff < uVal_1) {
      lVal_2 = *(int64_t *)(local_d8[0] + -8);
      if (0x1f < (uint64_t)((local_d8[0] + -8) - lVal_2)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_1 = local_c0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_1);
  }
  return param_1;
}

// Unwind@1801d3730
void Unwind_1801d3730(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 200);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
  }
  return;
}

// Unwind@1801d3770
void Unwind_1801d3770(uint64_t param_1,int64_t param_2)
{
  func_0x180188250(param_2 + 0x20);
  return;
}

// func_0x1801d37a0
int64_t func_0x1801d37a0(int64_t *param_1)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  
  uVal_3 = (uint64_t)*(int *)(param_1 + 3);
  uVal_4 = (param_1[1] - *param_1 >> 4) * 0x6db6db6db6db6db7;
  if (uVal_3 <= uVal_4 && uVal_4 - uVal_3 != 0) {
    return *param_1 + uVal_3 * 0x70;
  }
  func_0x18007f460();
  fnPtr_1 = (func_ptr_t )swi(3);
  lVal_2 = (*fnPtr_1)();
  return lVal_2;
}

// func_0x1801d37e0
int func_0x1801d37e0(int64_t *param_1)
{
  return (int)((uint64_t)(param_1[1] - *param_1) >> 4) * -0x49249249;
}

// func_0x1801d3800
void func_0x1801d3800(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4, uint32_t param_5,int64_t *param_6,uint8_t param_7)
{
  uint64_t uVal_1;
  int64_t *pLong_2;
  uint64_t *pU64_3;
  uint64_t *pU64_4;
  int64_t local_88 [7];
  int64_t *local_50;
  uint64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  pU64_3 = (uint64_t *)func_0x180672de0(0x178);
  func_0x1806ab010(pU64_3,0,0x178);
  pU64_3[3] = 0xf;
  pU64_4 = pU64_3 + 4;
  *(uint8_t (*)[16])(pU64_3 + 4) = ZEXT816(0);
  pU64_3[6] = 0;
  pU64_3[7] = 0xf;
  *(uint8_t *)(pU64_3 + 0x12) = 0;
  *(uint8_t *)(pU64_3 + 0x24) = 0;
  *(uint8_t *)(pU64_3 + 0x2e) = 0;
  *(uint32_t *)(pU64_3 + 8) = 8;
  local_48 = pU64_3;
  if (pU64_4 != param_3) {
    uVal_1 = param_3[2];
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
    if (uVal_1 < 0x10) {
      pU64_3[6] = uVal_1;
      func_0x1806aa960(pU64_4,param_3,uVal_1);
      *(uint8_t *)((int64_t)pU64_3 + uVal_1 + 0x20) = 0;
    }
    else {
      func_0x18007bba0(pU64_4,uVal_1);
    }
  }
  pU64_3[9] = param_4;
  if (*(char *)(pU64_3 + 0x12) == '\x04') {
    *(uint32_t *)(pU64_3 + 10) = param_5;
  }
  else {
    func_0x1801b3250();
    *(uint32_t *)(pU64_3 + 10) = param_5;
    *(uint8_t *)(pU64_3 + 0x12) = 4;
  }
  local_50 = (int64_t *)0x0;
  pU64_4 = (uint64_t *)param_6[7];
  if (pU64_4 != (uint64_t *)0x0) {
    local_50 = (int64_t *)(**(func_ptr_t *)*pU64_4)(pU64_4,local_88);
  }
  func_0x180210f40(local_88,pU64_3 + 0x26);
  if (local_50 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_50 + 0x20))(local_50,local_50 != local_88);
  }
  if (pU64_3 != param_2) {
    uVal_1 = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if ((uint64_t)pU64_3[3] < uVal_1) {
      func_0x18007bba0(pU64_3,uVal_1);
    }
    else {
      pU64_4 = pU64_3;
      if (0xf < (uint64_t)pU64_3[3]) {
        pU64_4 = (uint64_t *)*pU64_3;
      }
      pU64_3[2] = uVal_1;
      func_0x1806aa960(pU64_4,param_2,uVal_1);
      *(uint8_t *)((int64_t)pU64_4 + uVal_1) = 0;
    }
  }
  *(uint8_t *)(pU64_3 + 0x2e) = param_7;
  pU64_4 = *(uint64_t **)(param_1 + 0x50);
  if (pU64_4 == *(uint64_t **)(param_1 + 0x58)) {
    func_0x18007f260(param_1 + 0x48,pU64_4,&local_48);
  }
  else {
    *pU64_4 = pU64_3;
    *(int64_t *)(param_1 + 0x50) = *(int64_t *)(param_1 + 0x50) + 8;
  }
  pLong_2 = (int64_t *)param_6[7];
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != param_6);
  }
  return;
}

// Unwind@1801d39f0
void Unwind_1801d39f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@1801d3a30
void Unwind_1801d3a30(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0xd8) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0xd8));
  }
  return;
}

// func_0x1801d3a80
void func_0x1801d3a80(int64_t param_1,uint64_t *param_2,uint64_t *param_3,int64_t *param_4, int param_5,int64_t *param_6,uint8_t param_7)
{
  char ch_1;
  uint64_t uVal_2;
  int64_t *pLong_3;
  uint64_t *pU64_4;
  uint64_t *pU64_5;
  int64_t local_88 [7];
  int64_t *local_50;
  uint64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  pU64_4 = (uint64_t *)func_0x180672de0(0x178);
  func_0x1806ab010(pU64_4,0,0x178);
  pU64_4[3] = 0xf;
  pU64_5 = pU64_4 + 4;
  *(uint8_t (*)[16])(pU64_4 + 4) = ZEXT816(0);
  pU64_4[6] = 0;
  pU64_4[7] = 0xf;
  *(uint8_t *)(pU64_4 + 0x12) = 0;
  *(uint8_t *)(pU64_4 + 0x24) = 0;
  *(uint8_t *)(pU64_4 + 0x2e) = 0;
  *(uint32_t *)(pU64_4 + 8) = 7;
  local_48 = pU64_4;
  if (pU64_5 != param_3) {
    uVal_2 = param_3[2];
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
    if (uVal_2 < 0x10) {
      pU64_4[6] = uVal_2;
      func_0x1806aa960(pU64_5,param_3,uVal_2);
      *(uint8_t *)((int64_t)pU64_4 + uVal_2 + 0x20) = 0;
    }
    else {
      func_0x18007bba0(pU64_5,uVal_2);
    }
  }
  if ((param_5 < 0) || ((int)((uint64_t)(param_4[1] - *param_4) >> 4) * -0x49249249 <= param_5)) {
    param_5 = 0;
  }
  pU64_4[9] = param_4 + 3;
  *(int *)(param_4 + 3) = param_5;
  if (*(char *)(pU64_4 + 0x12) == '\x04') {
    *(int *)(pU64_4 + 10) = param_5;
    ch_1 = *(char *)(pU64_4 + 0x1b);
  }
  else {
    func_0x1801b3250();
    *(int *)(pU64_4 + 10) = param_5;
    *(uint8_t *)(pU64_4 + 0x12) = 4;
    ch_1 = *(char *)(pU64_4 + 0x1b);
  }
  if (ch_1 == '\x06') {
    *(uint8_t *)(pU64_4 + 0x13) = 0;
  }
  else {
    func_0x1801b3250();
    *(uint8_t *)(pU64_4 + 0x13) = 0;
    *(uint8_t *)(pU64_4 + 0x1b) = 6;
  }
  pU64_4[0x25] = param_4;
  local_50 = (int64_t *)0x0;
  pU64_5 = (uint64_t *)param_6[7];
  if (pU64_5 != (uint64_t *)0x0) {
    local_50 = (int64_t *)(**(func_ptr_t *)*pU64_5)(pU64_5,local_88);
  }
  func_0x180210f40(local_88,pU64_4 + 0x26);
  if (local_50 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_50 + 0x20))(local_50,local_50 != local_88);
  }
  if (pU64_4 != param_2) {
    uVal_2 = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if ((uint64_t)pU64_4[3] < uVal_2) {
      func_0x18007bba0(pU64_4,uVal_2);
    }
    else {
      pU64_5 = pU64_4;
      if (0xf < (uint64_t)pU64_4[3]) {
        pU64_5 = (uint64_t *)*pU64_4;
      }
      pU64_4[2] = uVal_2;
      func_0x1806aa960(pU64_5,param_2,uVal_2);
      *(uint8_t *)((int64_t)pU64_5 + uVal_2) = 0;
    }
  }
  *(uint8_t *)(pU64_4 + 0x2e) = param_7;
  pU64_5 = *(uint64_t **)(param_1 + 0x50);
  if (pU64_5 == *(uint64_t **)(param_1 + 0x58)) {
    func_0x18007f260(param_1 + 0x48,pU64_5,&local_48);
  }
  else {
    *pU64_5 = pU64_4;
    *(int64_t *)(param_1 + 0x50) = *(int64_t *)(param_1 + 0x50) + 8;
  }
  pLong_3 = (int64_t *)param_6[7];
  if (pLong_3 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,pLong_3 != param_6);
  }
  return;
}

// Unwind@1801d3cd0
void Unwind_1801d3cd0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@1801d3d10
void Unwind_1801d3d10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0xd8) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0xd8));
  }
  return;
}

// func_0x1801d3d60
void func_0x1801d3d60(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4, uint64_t param_5,int64_t *param_6,uint8_t param_7)
{
  uint64_t uVal_1;
  int64_t *pLong_2;
  uint64_t *pU64_3;
  uint64_t *pU64_4;
  int64_t local_88 [7];
  int64_t *local_50;
  uint64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  pU64_3 = (uint64_t *)func_0x180672de0(0x178);
  func_0x1806ab010(pU64_3,0,0x178);
  pU64_3[3] = 0xf;
  pU64_4 = pU64_3 + 4;
  *(uint8_t (*)[16])(pU64_3 + 4) = ZEXT816(0);
  pU64_3[6] = 0;
  pU64_3[7] = 0xf;
  *(uint8_t *)(pU64_3 + 0x12) = 0;
  *(uint8_t *)(pU64_3 + 0x24) = 0;
  *(uint8_t *)(pU64_3 + 0x2e) = 0;
  *(uint32_t *)(pU64_3 + 8) = 6;
  local_48 = pU64_3;
  if (pU64_4 != param_3) {
    uVal_1 = param_3[2];
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
    if (uVal_1 < 0x10) {
      pU64_3[6] = uVal_1;
      func_0x1806aa960(pU64_4,param_3,uVal_1);
      *(uint8_t *)((int64_t)pU64_3 + uVal_1 + 0x20) = 0;
    }
    else {
      func_0x18007bba0(pU64_4,uVal_1);
    }
  }
  pU64_3[9] = param_4;
  func_0x1801d3fc0(pU64_3 + 10,param_5);
  local_50 = (int64_t *)0x0;
  pU64_4 = (uint64_t *)param_6[7];
  if (pU64_4 != (uint64_t *)0x0) {
    local_50 = (int64_t *)(**(func_ptr_t *)*pU64_4)(pU64_4,local_88);
  }
  func_0x180210f40(local_88,pU64_3 + 0x26);
  if (local_50 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_50 + 0x20))(local_50,local_50 != local_88);
  }
  if (pU64_3 != param_2) {
    uVal_1 = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if ((uint64_t)pU64_3[3] < uVal_1) {
      func_0x18007bba0(pU64_3,uVal_1);
    }
    else {
      pU64_4 = pU64_3;
      if (0xf < (uint64_t)pU64_3[3]) {
        pU64_4 = (uint64_t *)*pU64_3;
      }
      pU64_3[2] = uVal_1;
      func_0x1806aa960(pU64_4,param_2,uVal_1);
      *(uint8_t *)((int64_t)pU64_4 + uVal_1) = 0;
    }
  }
  *(uint8_t *)(pU64_3 + 0x2e) = param_7;
  pU64_4 = *(uint64_t **)(param_1 + 0x50);
  if (pU64_4 == *(uint64_t **)(param_1 + 0x58)) {
    func_0x18007f260(param_1 + 0x48,pU64_4,&local_48);
  }
  else {
    *pU64_4 = pU64_3;
    *(int64_t *)(param_1 + 0x50) = *(int64_t *)(param_1 + 0x50) + 8;
  }
  pLong_2 = (int64_t *)param_6[7];
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != param_6);
  }
  return;
}

// Unwind@1801d3f30
void Unwind_1801d3f30(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@1801d3f70
void Unwind_1801d3f70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0xd8) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0xd8));
  }
  return;
}

// func_0x1801d3fc0
uint64_t ** func_0x1801d3fc0(uint64_t **param_1,uint64_t **param_2,uint64_t param_3)
{
  uint64_t *pU64_1;
  func_ptr_t fnPtr_2;
  uint64_t *pU64_3;
  uint64_t uVal_4;
  uint64_t **ptr2_U64_5;
  uint64_t *pU64_6;
  uint64_t *pU64_7;
  
  if (*(char *)(param_1 + 8) == '\a') {
    if (param_1 != param_2) {
      pU64_1 = param_2[2];
      if (&DAT_0000000f < param_2[3]) {
        param_2 = (uint64_t **)*param_2;
      }
      if (param_1[3] < pU64_1) {
        func_0x18007bba0(param_1,pU64_1,param_3,param_2);
      }
      else {
        ptr2_U64_5 = param_1;
        if (&DAT_0000000f < param_1[3]) {
          ptr2_U64_5 = (uint64_t **)*param_1;
        }
        param_1[2] = pU64_1;
        func_0x1806aa960(ptr2_U64_5,param_2,pU64_1);
        *(uint8_t *)((int64_t)ptr2_U64_5 + (int64_t)pU64_1) = 0;
      }
    }
  }
  else {
    pU64_1 = param_2[2];
    if ((uint64_t *)0xf < param_2[3]) {
      param_2 = (uint64_t **)*param_2;
    }
    if ((int64_t)pU64_1 < 0) {
      func_0x18007ba70();
      fnPtr_2 = (func_ptr_t )swi(3);
      ptr2_U64_5 = (uint64_t **)(*fnPtr_2)();
      return ptr2_U64_5;
    }
    if (&DAT_0000000f < pU64_1) {
      pU64_3 = (uint64_t *)((uint64_t)pU64_1 | 0xf);
      pU64_7 = (uint64_t *)0x16;
      if ((uint64_t *)0x16 < pU64_3) {
        pU64_7 = pU64_3;
      }
      if (pU64_3 < (uint64_t *)0xfff) {
        pU64_3 = (uint64_t *)func_0x180672de0((uint8_t *)((int64_t)pU64_7 + 1));
      }
      else {
        uVal_4 = func_0x180672de0(pU64_7 + 5);
        pU64_3 = (uint64_t *)(uVal_4 + 0x27 & 0xffffffffffffffe0);
        pU64_3[-1] = uVal_4;
      }
      func_0x1806aa960(pU64_3,param_2,(uint8_t *)((int64_t)pU64_1 + 1));
      pU64_6 = (uint64_t *)0x0;
    }
    else {
      pU64_3 = *param_2;
      pU64_6 = param_2[1];
      pU64_7 = (uint64_t *)&DAT_0000000f;
    }
    func_0x1801b3250(param_1);
    *param_1 = pU64_3;
    param_1[1] = pU64_6;
    param_1[2] = pU64_1;
    param_1[3] = pU64_7;
    *(uint8_t *)(param_1 + 8) = 7;
  }
  return param_1;
}

// func_0x1801d40e0
int64_t func_0x1801d40e0(int64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
  int64_t local_60 [7];
  int64_t *local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x40) == '\t') {
    local_28 = (int64_t *)0x0;
    pU64_1 = *(uint64_t **)(param_2 + 0x38);
    if (pU64_1 != (uint64_t *)0x0) {
      local_28 = (int64_t *)(**(func_ptr_t *)*pU64_1)(pU64_1,local_60);
    }
    func_0x180210f40(local_60,param_1);
    if (local_28 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_28 + 0x20))(local_28,local_28 != local_60);
    }
  }
  else {
    local_28 = (int64_t *)0x0;
    pU64_1 = *(uint64_t **)(param_2 + 0x38);
    if (pU64_1 != (uint64_t *)0x0) {
      local_28 = (int64_t *)(**(func_ptr_t *)*pU64_1)(pU64_1,local_60);
    }
    func_0x1801b3250(param_1);
    *(uint8_t *)(param_1 + 0x40) = 0xff;
    *(uint64_t *)(param_1 + 0x38) = 0;
    if (local_28 != (int64_t *)0x0) {
      if (local_28 == local_60) {
        uVal_2 = (**(func_ptr_t *)(*local_28 + 8))(local_28,param_1);
        *(uint64_t *)(param_1 + 0x38) = uVal_2;
        if (local_28 != (int64_t *)0x0) {
          (**(func_ptr_t *)(*local_28 + 0x20))(local_28,local_28 != local_60);
        }
      }
      else {
        *(int64_t **)(param_1 + 0x38) = local_28;
      }
    }
    *(uint8_t *)(param_1 + 0x40) = 9;
  }
  return param_1;
}

// Unwind@1801d41c0
void Unwind_1801d41c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x60);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x28));
  }
  return;
}

// Unwind@1801d4200
void Unwind_1801d4200(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x60);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x28));
  }
  return;
}

// func_0x1801d4240
void func_0x1801d4240(int64_t param_1)
{
  uint64_t *_Str;
  uint64_t *_Str_00;
  char ch_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  uint32_t *pU64_4;
  uint64_t *pU64_5;
  func_ptr_t fnPtr_6;
  int iVal_7;
  size_t sz_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  uint64_t *pU64_12;
  uint8_t *pU64_13;
  uint64_t uVal_14;
  uint8_t *pU64_15;
  uint64_t *pU64_16;
  int64_t *pLong_17;
  bool bFlag_18;
  uint8_t local_f8 [16];
  size_t local_e8;
  uint64_t local_e0;
  uint *local_d8;
  uint64_t *local_d0;
  uint8_t local_c8 [16];
  size_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8 [16];
  size_t local_98;
  uint64_t local_90;
  uint8_t local_88 [16];
  size_t local_78;
  uint64_t local_70;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  pLong_17 = *(int64_t **)(param_1 + 0x48);
  pLong_2 = *(int64_t **)(param_1 + 0x50);
  lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint64_t *)(lVal_3 + 0x74e8);
  _Str_00 = (uint64_t *)(lVal_3 + 0x74f8);
  local_d8 = (uint *)(lVal_3 + 0x7508);
  local_d0 = (uint64_t *)(lVal_3 + 0x7518);
LAB_1801d42c4:
  if (pLong_17 == pLong_2) {
    return;
  }
  pU64_16 = (uint64_t *)*pLong_17;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x74f4) == '\0') {
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_10 + 0x74f4) = 1;
    *(uint8_t *)(lVal_10 + 0x74f0) = 1;
    *(uint64_t *)(lVal_10 + 0x74e8) = 0x1365c6cb7f44e54c;
    func_0x180673140(&LAB_180211080);
    ch_1 = *(char *)(lVal_3 + 0x74f0);
  }
  else {
    ch_1 = *(char *)(lVal_3 + 0x74f0);
  }
  if (ch_1 == '\x01') {
    *_Str = *_Str ^ 0x1301a3a71d258b29;
    *(uint8_t *)(lVal_3 + 0x74f0) = 0;
  }
  local_c8 = ZEXT816(0);
  sz_8 = strlen((char *)_Str);
  if ((int64_t)sz_8 < 0) {
    func_0x18007ba70();
LAB_1801d4b4f:
    func_0x18007ba70();
LAB_1801d4b55:
    do {
      invalidInstructionException();
    } while( true );
  }
  uVal_14 = 0xf;
  pU64_15 = local_c8;
  if (0xf < sz_8) {
    uVal_9 = sz_8 | 0xf;
    uVal_14 = 0x16;
    if (0x16 < uVal_9) {
      uVal_14 = uVal_9;
    }
    if (uVal_9 < 0xfff) {
      pU64_15 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
    }
    else {
      lVal_10 = func_0x180672de0(uVal_14 + 0x28);
      pU64_15 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_15 + -8) = lVal_10;
    }
    local_c8._0_8_ = pU64_15;
  }
  local_b8 = sz_8;
  local_b0 = uVal_14;
  func_0x1806aa960(pU64_15,_Str,sz_8);
  pU64_15[sz_8] = 0;
  uVal_14 = local_b0;
  if (local_b0 < 0x10) {
    sz_8 = pU64_16[2];
    pU64_15 = local_c8;
    if ((uint64_t)pU64_16[3] < 0x10) goto LAB_1801d43bc;
LAB_1801d43e2:
    pU64_12 = (uint64_t *)*pU64_16;
    if (sz_8 == local_b8) goto LAB_1801d43ea;
LAB_1801d4403:
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7504) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x7504) = 1;
      *(uint8_t *)(lVal_10 + 0x7500) = 1;
      *(uint64_t *)(lVal_10 + 0x74f8) = 0x1364cfc57456e25f;
      func_0x180673140(&LAB_1802110a0);
      ch_1 = *(char *)(lVal_3 + 0x7500);
    }
    else {
      ch_1 = *(char *)(lVal_3 + 0x7500);
    }
    if (ch_1 == '\x01') {
      *_Str_00 = *_Str_00 ^ 0x1301a3a71d258b29;
      *(uint8_t *)(lVal_3 + 0x7500) = 0;
    }
    local_a8 = ZEXT816(0);
    sz_8 = strlen((char *)_Str_00);
    if ((int64_t)sz_8 < 0) goto LAB_1801d4b4f;
    uVal_14 = 0xf;
    pU64_15 = local_a8;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_15 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_10;
      }
      local_a8._0_8_ = pU64_15;
    }
    local_98 = sz_8;
    local_90 = uVal_14;
    func_0x1806aa960(pU64_15,_Str_00,sz_8);
    pU64_15[sz_8] = 0;
    uVal_9 = local_90;
    if (local_90 < 0x10) {
      sz_8 = pU64_16[2];
      pU64_15 = local_a8;
      if ((uint64_t)pU64_16[3] < 0x10) goto LAB_1801d44e3;
LAB_1801d4502:
      pU64_12 = (uint64_t *)*pU64_16;
      if (sz_8 == local_98) goto LAB_1801d450a;
LAB_1801d4523:
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x7510) != '\0') {
        if (*(char *)(local_d8 + 1) != '\x01') goto LAB_1801d4551;
LAB_1801d4650:
        *local_d8 = *local_d8 ^ 0x1d258b29;
        *(uint8_t *)(local_d8 + 1) = 0;
        local_88 = ZEXT816(0);
        uVal_14 = strlen((char *)local_d8);
        if (-1 < (int64_t)uVal_14) goto LAB_1801d466c;
LAB_1801d4b57:
        func_0x18007ba70();
        goto LAB_1801d4b5d;
      }
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x7510) = 1;
      *(uint8_t *)(lVal_10 + 0x750c) = 1;
      *(uint32_t *)(lVal_10 + 0x7508) = 0x1d5cee62;
      func_0x180673140(&LAB_1802110c0);
      if (*(char *)(local_d8 + 1) == '\x01') goto LAB_1801d4650;
LAB_1801d4551:
      local_88 = ZEXT816(0);
      uVal_14 = strlen((char *)local_d8);
      if ((int64_t)uVal_14 < 0) goto LAB_1801d4b57;
LAB_1801d466c:
      uVal_9 = 0xf;
      pU64_15 = local_88;
      if (0xf < uVal_14) {
        uVal_11 = uVal_14 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_11) {
          uVal_9 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          pU64_15 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_10 = func_0x180672de0(uVal_9 + 0x28);
          pU64_15 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_15 + -8) = lVal_10;
        }
        local_88._0_8_ = pU64_15;
      }
      local_78 = uVal_14;
      local_70 = uVal_9;
      func_0x1806aa960(pU64_15,local_d8,uVal_14);
      pU64_15[uVal_14] = 0;
      uVal_14 = local_70;
      if (local_70 < 0x10) {
        sz_8 = pU64_16[2];
        pU64_15 = local_88;
        if ((uint64_t)pU64_16[3] < 0x10) goto LAB_1801d4703;
LAB_1801d4722:
        pU64_12 = (uint64_t *)*pU64_16;
        if (sz_8 == local_78) goto LAB_1801d472a;
LAB_1801d4743:
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7524) == '\0') {
          lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_10 + 0x7524) = 1;
          *(uint8_t *)(lVal_10 + 0x7520) = 1;
          *(uint64_t *)(lVal_10 + 0x7518) = 0x1364cfc57456e27f;
          func_0x180673140(&LAB_1802110e0);
          if (*(char *)(local_d0 + 1) == '\x01') goto LAB_1801d47c4;
LAB_1801d4769:
          local_f8 = ZEXT816(0);
          uVal_14 = strlen((char *)local_d0);
        }
        else {
          if (*(char *)(local_d0 + 1) != '\x01') goto LAB_1801d4769;
LAB_1801d47c4:
          *local_d0 = *local_d0 ^ 0x1301a3a71d258b29;
          *(uint8_t *)(local_d0 + 1) = 0;
          local_f8 = ZEXT816(0);
          uVal_14 = strlen((char *)local_d0);
        }
        if ((int64_t)uVal_14 < 0) goto LAB_1801d4b63;
        uVal_9 = 0xf;
        pU64_15 = local_f8;
        if (0xf < uVal_14) {
          uVal_11 = uVal_14 | 0xf;
          uVal_9 = 0x16;
          if (0x16 < uVal_11) {
            uVal_9 = uVal_11;
          }
          if (uVal_11 < 0xfff) {
            pU64_15 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
          }
          else {
            lVal_10 = func_0x180672de0(uVal_9 + 0x28);
            pU64_15 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_15 + -8) = lVal_10;
          }
          local_f8._0_8_ = pU64_15;
        }
        local_e8 = uVal_14;
        local_e0 = uVal_9;
        func_0x1806aa960(pU64_15,local_d0,uVal_14);
        pU64_15[uVal_14] = 0;
        uVal_9 = local_e0;
        pU64_15 = (uint8_t *)local_f8._0_8_;
        pU64_13 = local_f8;
        if (0xf < local_e0) {
          pU64_13 = (uint8_t *)local_f8._0_8_;
        }
        pU64_12 = pU64_16;
        if (0xf < (uint64_t)pU64_16[3]) {
          pU64_12 = (uint64_t *)*pU64_16;
        }
        uVal_14 = local_70;
        if (pU64_16[2] == local_e8) {
          if (local_e8 == 0) {
            bFlag_18 = true;
          }
          else {
            iVal_7 = memcmp(pU64_12,pU64_13,local_e8);
            bFlag_18 = iVal_7 == 0;
            uVal_14 = local_70;
          }
        }
        else {
          bFlag_18 = false;
        }
        local_70 = uVal_14;
        if (0xf < uVal_9) {
          uVal_14 = uVal_9 + 1;
          pU64_13 = pU64_15;
          if (0xfff < uVal_14) {
            pU64_13 = *(uint8_t **)(pU64_15 + -8);
            if ((uint8_t *)0x1f < pU64_15 + (-8 - (int64_t)pU64_13)) goto LAB_1801d4b55;
            uVal_14 = uVal_9 + 0x28;
          }
          thunk_FUN_180695dd0(pU64_13,uVal_14);
          uVal_14 = local_70;
        }
      }
      else {
        sz_8 = pU64_16[2];
        pU64_15 = (uint8_t *)local_88._0_8_;
        if (0xf < (uint64_t)pU64_16[3]) goto LAB_1801d4722;
LAB_1801d4703:
        pU64_12 = pU64_16;
        if (sz_8 != local_78) goto LAB_1801d4743;
LAB_1801d472a:
        bFlag_18 = true;
        if ((local_78 != 0) && (iVal_7 = memcmp(pU64_12,pU64_15,local_78), iVal_7 != 0))
        goto LAB_1801d4743;
      }
      uVal_9 = local_90;
      if (0xf < uVal_14) {
        uVal_9 = uVal_14 + 1;
        lVal_10 = local_88._0_8_;
        if (0xfff < uVal_9) {
          lVal_10 = *(int64_t *)(local_88._0_8_ + -8);
          if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_10)) goto LAB_1801d4b55;
          uVal_9 = uVal_14 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_9);
        uVal_9 = local_90;
      }
    }
    else {
      sz_8 = pU64_16[2];
      pU64_15 = (uint8_t *)local_a8._0_8_;
      if (0xf < (uint64_t)pU64_16[3]) goto LAB_1801d4502;
LAB_1801d44e3:
      pU64_12 = pU64_16;
      if (sz_8 != local_98) goto LAB_1801d4523;
LAB_1801d450a:
      bFlag_18 = true;
      if ((local_98 != 0) && (iVal_7 = memcmp(pU64_12,pU64_15,local_98), iVal_7 != 0))
      goto LAB_1801d4523;
    }
    uVal_14 = local_b0;
    if (0xf < uVal_9) {
      uVal_14 = uVal_9 + 1;
      lVal_10 = local_a8._0_8_;
      if (0xfff < uVal_14) {
        lVal_10 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_10)) goto LAB_1801d4b55;
        uVal_14 = uVal_9 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_14);
      uVal_14 = local_b0;
    }
  }
  else {
    sz_8 = pU64_16[2];
    pU64_15 = (uint8_t *)local_c8._0_8_;
    if (0xf < (uint64_t)pU64_16[3]) goto LAB_1801d43e2;
LAB_1801d43bc:
    pU64_12 = pU64_16;
    if (sz_8 != local_b8) goto LAB_1801d4403;
LAB_1801d43ea:
    bFlag_18 = true;
    if ((local_b8 != 0) && (iVal_7 = memcmp(pU64_12,pU64_15,local_b8), iVal_7 != 0))
    goto LAB_1801d4403;
  }
  if (0xf < uVal_14) {
    uVal_9 = uVal_14 + 1;
    lVal_10 = local_c8._0_8_;
    if (0xfff < uVal_9) {
      lVal_10 = *(int64_t *)(local_c8._0_8_ + -8);
      if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_10)) goto LAB_1801d4b55;
      uVal_9 = uVal_14 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_10,uVal_9);
  }
  if (bFlag_18) {
switchD_1801d49d2_caseD_9:
    pLong_17 = pLong_17 + 1;
    goto LAB_1801d42c4;
  }
  switch(*(uint32_t *)(pU64_16 + 8)) {
  case 0:
    if (*(char *)(pU64_16 + 0x12) == '\x01') {
      *(uint32_t *)pU64_16[9] = *(uint32_t *)(pU64_16 + 10);
      pLong_17 = pLong_17 + 1;
      goto LAB_1801d42c4;
    }
    break;
  case 1:
    if (*(char *)(pU64_16 + 0x12) == '\x02') {
      *(uint64_t *)pU64_16[9] = pU64_16[10];
      pLong_17 = pLong_17 + 1;
      goto LAB_1801d42c4;
    }
    break;
  case 2:
    if (*(char *)(pU64_16 + 0x12) == '\x03') {
      *(uint64_t *)pU64_16[9] = pU64_16[10];
      pLong_17 = pLong_17 + 1;
      goto LAB_1801d42c4;
    }
    break;
  case 3:
  case 7:
  case 8:
    if (*(char *)(pU64_16 + 0x12) == '\x04') {
      *(uint32_t *)pU64_16[9] = *(uint32_t *)(pU64_16 + 10);
      pLong_17 = pLong_17 + 1;
      goto LAB_1801d42c4;
    }
    break;
  case 4:
    if (*(char *)(pU64_16 + 0x12) == '\x05') {
      pU64_4 = (uint32_t *)pU64_16[9];
      *pU64_4 = *(uint32_t *)(pU64_16 + 10);
      pU64_4[1] = *(uint32_t *)((int64_t)pU64_16 + 0x54);
      pU64_4[2] = *(uint32_t *)(pU64_16 + 0xb);
      pU64_4[3] = *(uint32_t *)((int64_t)pU64_16 + 0x5c);
      pLong_17 = pLong_17 + 1;
      goto LAB_1801d42c4;
    }
    break;
  case 5:
    if (*(char *)(pU64_16 + 0x12) == '\x06') {
      *(uint8_t *)pU64_16[9] = *(uint8_t *)(pU64_16 + 10);
      pLong_17 = pLong_17 + 1;
      goto LAB_1801d42c4;
    }
    break;
  case 6:
    if (*(char *)(pU64_16 + 0x12) != '\a') break;
    pU64_12 = pU64_16 + 10;
    pU64_5 = (uint64_t *)pU64_16[9];
    if (pU64_5 == pU64_12) goto switchD_1801d49d2_caseD_9;
    if (0xf < (uint64_t)pU64_16[0xd]) {
      pU64_12 = (uint64_t *)pU64_16[10];
    }
    uVal_14 = pU64_16[0xc];
    if ((uint64_t)pU64_5[3] < uVal_14) {
      func_0x18007bba0(pU64_5,uVal_14);
      goto switchD_1801d49d2_caseD_9;
    }
    pU64_16 = pU64_5;
    if (0xf < (uint64_t)pU64_5[3]) {
      pU64_16 = (uint64_t *)*pU64_5;
    }
    pU64_5[2] = uVal_14;
    func_0x1806aa960(pU64_16,pU64_12,uVal_14);
    *(uint8_t *)((int64_t)pU64_16 + uVal_14) = 0;
    pLong_17 = pLong_17 + 1;
    goto LAB_1801d42c4;
  default:
    goto switchD_1801d49d2_caseD_9;
  }
LAB_1801d4b5d:
  func_0x18011cb80();
LAB_1801d4b63:
  func_0x18007ba70();
  fnPtr_6 = (func_ptr_t )swi(3);
  (*fnPtr_6)();
  return;
}

// Unwind@1801d4b70
void Unwind_1801d4b70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@1801d4bb0
void Unwind_1801d4bb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1801d4bf0
void Unwind_1801d4bf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x1801d4c30
void func_0x1801d4c30(int64_t param_1,uint64_t *param_2)
{
  int64_t *pLong_1;
  size_t _Size;
  int iVal_2;
  uint64_t *_Buf1;
  int64_t *pLong_3;
  
  pLong_3 = *(int64_t **)(param_1 + 0x48);
  pLong_1 = *(int64_t **)(param_1 + 0x50);
  if (pLong_3 != pLong_1) {
    _Size = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if (_Size == 0) {
      do {
        if (*(int64_t *)(*pLong_3 + 0x10) == 0) {
LAB_1801d4cb3:
          func_0x1806aa960(pLong_3,pLong_3 + 1,(int64_t)pLong_1 - (int64_t)(pLong_3 + 1));
          *(int64_t *)(param_1 + 0x50) = *(int64_t *)(param_1 + 0x50) + -8;
          return;
        }
        pLong_3 = pLong_3 + 1;
      } while (pLong_3 != pLong_1);
    }
    else {
      do {
        _Buf1 = (uint64_t *)*pLong_3;
        if (_Buf1[2] == _Size) {
          if (0xf < (uint64_t)_Buf1[3]) {
            _Buf1 = (uint64_t *)*_Buf1;
          }
          iVal_2 = memcmp(_Buf1,param_2,_Size);
          if (iVal_2 == 0) goto LAB_1801d4cb3;
        }
        pLong_3 = pLong_3 + 1;
      } while (pLong_3 != pLong_1);
    }
  }
  return;
}

// func_0x1801d4ce0
void func_0x1801d4ce0(int64_t *param_1)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  pLong_1 = (int64_t *)param_1[0x2d];
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != param_1 + 0x26);
    param_1[0x2d] = 0;
  }
  func_0x1801b3250(param_1 + 0x1c);
  func_0x1801b3250(param_1 + 0x13);
  func_0x1801b3250(param_1 + 10);
  uVal_2 = param_1[7];
  if (0xf < uVal_2) {
    lVal_3 = param_1[4];
    uVal_4 = uVal_2 + 1;
    lVal_5 = lVal_3;
    if (0xfff < uVal_4) {
      lVal_5 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) goto LAB_1801d4dd5;
      uVal_4 = uVal_2 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_4);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(uint8_t *)(param_1 + 4) = 0;
  uVal_2 = param_1[3];
  if (0xf < uVal_2) {
    lVal_3 = *param_1;
    uVal_4 = uVal_2 + 1;
    lVal_5 = lVal_3;
    if (0xfff < uVal_4) {
      lVal_5 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) {
LAB_1801d4dd5:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_2 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(uint8_t *)param_1 = 0;
  return;
}

// Unwind@1801d4f50
void Unwind_1801d4f50(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7538) = 0;
  return;
}

// Unwind@1801d5c10
void Unwind_1801d5c10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801d5c50
void Unwind_1801d5c50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// Unwind@1801d5c90
void Unwind_1801d5c90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1801d5cd0
void Unwind_1801d5cd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801d5d10
void Unwind_1801d5d10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// Unwind@1801d5d50
void Unwind_1801d5d50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x1801d5d90
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
void func_0x1801d5d90(int64_t *param_1,char *param_2)
{
  byte bFlag_1;
  int64_t *pLong_2;
  uint32_t *pU64_3;
  uint64_t *pU64_4;
  func_ptr_t fnPtr_5;
  bool bFlag_6;
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  char ch_9;
  char ch_10;
  int iVal_11;
  uint32_t uVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  size_t sz_16;
  uint64_t uVal_17;
  uint8_t *pU64_18;
  uint64_t uVal_19;
  uint8_t uVal_20;
  int64_t lVal_21;
  int64_t *pLong_22;
  uint8_t (*pArr16_23)[16];
  uint8_t *pU64_24;
  int64_t lVal_25;
  uint8_t *pU64_26;
  uint8_t (*pArr16_27)[16];
  uint64_t *pU64_28;
  uint8_t (*pArr16_29)[16];
  uint64_t *pU64_30;
  uint *pU64_31;
  uint64_t *_Str;
  uint8_t (**ptr2_Arr16_32)[16];
  uint8_t (**ptr2_Arr16_33)[16];
  bool bFlag_34;
  uint8_t local_248 [32];
  int64_t local_228 [3];
  uint64_t local_210;
  char *local_1f0;
  uint8_t local_1e8 [8];
  uint8_t local_1e0 [8];
  uint8_t local_1d8 [8];
  uint8_t local_1d0 [8];
  uint8_t local_1c8 [8];
  uint8_t local_1c0 [8];
  uint8_t local_1b8 [8];
  uint8_t local_1b0 [8];
  uint8_t local_1a8 [8];
  uint32_t uStack_1a0;
  uint32_t uStack_19c;
  uint64_t local_198;
  uint64_t uStack_190;
  uint64_t local_180;
  uint64_t local_178;
  uint8_t (**local_170)[16];
  uint8_t (**local_168)[16];
  uint *local_160;
  uint64_t *local_158;
  uint *local_150;
  uint *local_148;
  uint *local_140;
  uint *local_138;
  char local_130 [8];
  int64_t *local_128;
  uint32_t local_11c;
  uint32_t local_118;
  uint32_t local_114;
  uint32_t local_110;
  uint32_t local_10c;
  uint32_t local_108;
  uint32_t local_104;
  int64_t *local_100;
  uint8_t local_f8 [16];
  uint64_t local_e8;
  uint64_t local_e0;
  char local_ca;
  char local_c9;
  uint8_t local_c8 [16];
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t (*local_88)[16];
  uint64_t local_80;
  
  local_80 = 0xfffffffffffffffe;
  (**(func_ptr_t *)(*param_1 + 0x10))(param_1,local_228);
  local_100 = param_1;
  if (*param_2 == '\x01') {
    lVal_13 = func_0x1800a5e70(*(uint64_t *)(param_2 + 8),local_228);
    bFlag_34 = lVal_13 != **(int64_t **)(param_2 + 8);
    bFlag_6 = bFlag_34;
    if (local_210 < 0x10) goto LAB_1801d5df5;
LAB_1801d5e12:
    uVal_19 = local_210 + 1;
    lVal_13 = local_228[0];
    if (0xfff < uVal_19) {
      lVal_13 = *(int64_t *)(local_228[0] + -8);
      if (0x1f < (uint64_t)((local_228[0] + -8) - lVal_13)) goto LAB_1801d8101;
      uVal_19 = local_210 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_13,uVal_19);
    if (bFlag_6) goto LAB_1801d5e57;
LAB_1801d784e:
    pLong_22 = (int64_t *)param_1[9];
    pLong_2 = (int64_t *)param_1[10];
    if (pLong_22 != pLong_2) {
      bFlag_1 = *(byte *)(param_1 + 8);
      do {
        lVal_13 = *pLong_22;
        switch(*(uint32_t *)(lVal_13 + 0x40)) {
        case 0:
          if (*(char *)(lVal_13 + 0x90) != '\x01') {
LAB_1801d80ef:
            func_0x18011cb80();
LAB_1801d80f5:
            func_0x18007ba70();
LAB_1801d80fb:
            func_0x18007ba70();
            goto LAB_1801d8101;
          }
          **(uint32_t **)(lVal_13 + 0x48) = *(uint32_t *)(lVal_13 + 0x50);
          break;
        case 1:
          if (*(char *)(lVal_13 + 0x90) != '\x02') goto LAB_1801d80ef;
          **(uint64_t **)(lVal_13 + 0x48) = *(uint64_t *)(lVal_13 + 0x50);
          break;
        case 2:
          if (*(char *)(lVal_13 + 0x90) != '\x03') goto LAB_1801d80ef;
          **(uint64_t **)(lVal_13 + 0x48) = *(uint64_t *)(lVal_13 + 0x50);
          break;
        case 3:
        case 7:
        case 8:
          if (*(char *)(lVal_13 + 0x90) != '\x04') goto LAB_1801d80ef;
          **(uint32_t **)(lVal_13 + 0x48) = *(uint32_t *)(lVal_13 + 0x50);
          break;
        case 4:
          if (*(char *)(lVal_13 + 0x90) != '\x05') goto LAB_1801d80ef;
          pU64_3 = *(uint32_t **)(lVal_13 + 0x48);
          *pU64_3 = *(uint32_t *)(lVal_13 + 0x50);
          pU64_3[1] = *(uint32_t *)(lVal_13 + 0x54);
          pU64_3[2] = *(uint32_t *)(lVal_13 + 0x58);
          pU64_3[3] = *(uint32_t *)(lVal_13 + 0x5c);
          break;
        case 5:
          if (*(char *)(lVal_13 + 0x90) != '\x06') goto LAB_1801d80ef;
          **(uint8_t **)(lVal_13 + 0x48) = *(uint8_t *)(lVal_13 + 0x50);
          break;
        case 6:
          if (*(char *)(lVal_13 + 0x90) != '\a') goto LAB_1801d80ef;
          pU64_30 = (uint64_t *)(lVal_13 + 0x50);
          pU64_4 = *(uint64_t **)(lVal_13 + 0x48);
          if (pU64_4 != pU64_30) {
            if (0xf < *(uint64_t *)(lVal_13 + 0x68)) {
              pU64_30 = *(uint64_t **)(lVal_13 + 0x50);
            }
            uVal_19 = *(uint64_t *)(lVal_13 + 0x60);
            if ((uint64_t)pU64_4[3] < uVal_19) {
              func_0x18007bba0(pU64_4,uVal_19);
            }
            else {
              pU64_28 = pU64_4;
              if (0xf < (uint64_t)pU64_4[3]) {
                pU64_28 = (uint64_t *)*pU64_4;
              }
              pU64_4[2] = uVal_19;
              func_0x1806aa960(pU64_28,pU64_30,uVal_19);
              *(uint8_t *)((int64_t)pU64_28 + uVal_19) = 0;
              param_1 = local_100;
            }
          }
        }
        func_0x1801d8910(lVal_13);
        pLong_22 = pLong_22 + 1;
      } while (pLong_22 != pLong_2);
      if (*(byte *)(param_1 + 8) != bFlag_1) {
        (**(func_ptr_t *)(*param_1 + 0x58 + (uint64_t)(*(byte *)(param_1 + 8) ^ 1) * 8))(param_1);
      }
    }
  }
  else {
    bFlag_6 = false;
    bFlag_34 = false;
    if (0xf < local_210) goto LAB_1801d5e12;
LAB_1801d5df5:
    if (!bFlag_34) goto LAB_1801d784e;
LAB_1801d5e57:
    (**(func_ptr_t *)(*param_1 + 0x10))(param_1,local_228);
    uVal_14 = func_0x18004d550(param_2,local_228);
    func_0x18009ff70(local_130,uVal_14);
    if (0xf < local_210) {
      uVal_19 = local_210 + 1;
      lVal_13 = local_228[0];
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)(local_228[0] + -8);
        if (0x1f < (uint64_t)((local_228[0] + -8) - lVal_13)) goto LAB_1801d8101;
        uVal_19 = local_210 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
    local_ca = local_130[0];
    if (local_130[0] != '\0') {
      local_c9 = *(char *)(param_1 + 8);
      ptr2_Arr16_33 = (uint8_t (**)[16])param_1[10];
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_31 = (uint *)(lVal_13 + 0x753c);
      _Str = (uint64_t *)(lVal_13 + 0x7548);
      local_150 = (uint *)(lVal_13 + 0x7558);
      local_148 = (uint *)(lVal_13 + 0x7564);
      local_140 = (uint *)(lVal_13 + 0x7570);
      local_138 = (uint *)(lVal_13 + 0x757c);
      local_168 = ptr2_Arr16_33;
      local_160 = pU64_31;
      local_158 = _Str;
      for (ptr2_Arr16_32 = (uint8_t (**)[16])param_1[9]; ptr2_Arr16_32 != ptr2_Arr16_33;
          ptr2_Arr16_32 = ptr2_Arr16_32 + 1) {
        pArr16_29 = *ptr2_Arr16_32;
        local_98 = ZEXT816(0);
        local_a8 = ZEXT816(0);
        pArr16_23 = pArr16_29;
        if (0xf < *(uint64_t *)(pArr16_29[1] + 8)) {
          pArr16_23 = *(uint8_t (**)[16])*pArr16_29;
        }
        uVal_19 = *(uint64_t *)pArr16_29[1];
        if ((int64_t)uVal_19 < 0) goto LAB_1801d80f5;
        local_88 = pArr16_29;
        if (uVal_19 < 0x10) {
          local_98._8_8_ = 0xf;
          local_98._0_8_ = uVal_19;
          local_a8 = *pArr16_23;
        }
        else {
          uVal_15 = uVal_19 | 0xf;
          uVal_17 = 0x16;
          if (0x16 < uVal_15) {
            uVal_17 = uVal_15;
          }
          if (uVal_15 < 0xfff) {
            uVal_15 = func_0x180672de0(uVal_17 + 1);
          }
          else {
            lVal_13 = func_0x180672de0(uVal_17 + 0x28);
            uVal_15 = lVal_13 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_15 - 8) = lVal_13;
          }
          local_a8._0_8_ = uVal_15;
          local_98._8_8_ = uVal_17;
          local_98._0_8_ = uVal_19;
          func_0x1806aa960(uVal_15,pArr16_23,uVal_19 + 1);
        }
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7544) == '\0') {
          lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_13 + 0x7544) = 1;
          *(uint8_t *)(lVal_13 + 0x7540) = 1;
          *(uint32_t *)(lVal_13 + 0x753c) = 0x51289a88;
          func_0x180673140(&LAB_180211120);
          ch_10 = *(char *)(pU64_31 + 1);
        }
        else {
          ch_10 = *(char *)(pU64_31 + 1);
        }
        if (ch_10 == '\x01') {
          *pU64_31 = *pU64_31 ^ 0x5151ffc3;
          *(uint8_t *)(pU64_31 + 1) = 0;
        }
        local_c8 = ZEXT816(0);
        sz_16 = strlen((char *)pU64_31);
        if ((int64_t)sz_16 < 0) goto LAB_1801d80fb;
        uVal_19 = 0xf;
        pU64_26 = local_c8;
        if (0xf < sz_16) {
          uVal_17 = sz_16 | 0xf;
          uVal_19 = 0x16;
          if (0x16 < uVal_17) {
            uVal_19 = uVal_17;
          }
          if (uVal_17 < 0xfff) {
            pU64_26 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
          }
          else {
            lVal_13 = func_0x180672de0(uVal_19 + 0x28);
            pU64_26 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_26 + -8) = lVal_13;
          }
          local_c8._0_8_ = pU64_26;
        }
        local_b8._8_8_ = uVal_19;
        local_b8._0_8_ = sz_16;
        func_0x1806aa960(pU64_26,pU64_31,sz_16);
        pU64_26[sz_16] = 0;
        pU64_26 = (uint8_t *)local_c8._0_8_;
        uVal_19 = local_b8._8_8_;
        pU64_18 = local_c8;
        if (0xf < (uint64_t)local_b8._8_8_) {
          pU64_18 = (uint8_t *)local_c8._0_8_;
        }
        pU64_24 = local_a8;
        if (0xf < (uint64_t)local_98._8_8_) {
          pU64_24 = (uint8_t *)local_a8._0_8_;
        }
        if (local_98._0_8_ == local_b8._0_8_) {
          if (local_b8._0_8_ == 0) {
            bFlag_6 = true;
            bFlag_34 = true;
            goto joined_r0x0001801d6186;
          }
          iVal_11 = memcmp(pU64_24,pU64_18,local_b8._0_8_);
          bFlag_34 = iVal_11 == 0;
          bFlag_6 = bFlag_34;
          if (0xf < uVal_19) goto LAB_1801d62f0;
LAB_1801d618c:
          if (!bFlag_34) goto LAB_1801d6194;
LAB_1801d632c:
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7554)
              == '\0') {
            lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_13 + 0x7554) = 1;
            *(uint8_t *)(lVal_13 + 0x7550) = 1;
            *(uint64_t *)(lVal_13 + 0x7548) = 0x9aba572912ab4ac;
            func_0x180673140(&LAB_180211140);
            ch_10 = *(char *)(_Str + 1);
          }
          else {
            ch_10 = *(char *)(_Str + 1);
          }
          if (ch_10 == '\x01') {
            *_Str = *_Str ^ 0x9cfcb1bf353d1c7;
            *(uint8_t *)(_Str + 1) = 0;
          }
          local_c8 = ZEXT816(0);
          sz_16 = strlen((char *)_Str);
          if ((int64_t)sz_16 < 0) {
            func_0x18007ba70();
LAB_1801d8109:
            func_0x18011cb80();
LAB_1801d810f:
            func_0x18011cb80();
LAB_1801d8115:
            func_0x18011cb80();
LAB_1801d811b:
            func_0x18011cb80();
LAB_1801d8121:
            func_0x18011cb80();
LAB_1801d8127:
            func_0x18011cb80();
LAB_1801d812d:
            func_0x18011cb80();
LAB_1801d8133:
            func_0x18011cb80();
LAB_1801d8139:
            fnPtr_5 = (func_ptr_t )swi(3);
            (*fnPtr_5)();
            return;
          }
          uVal_19 = 0xf;
          pU64_26 = local_c8;
          if (0xf < sz_16) {
            uVal_17 = sz_16 | 0xf;
            uVal_19 = 0x16;
            if (0x16 < uVal_17) {
              uVal_19 = uVal_17;
            }
            if (uVal_17 < 0xfff) {
              pU64_26 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
            }
            else {
              lVal_13 = func_0x180672de0(uVal_19 + 0x28);
              pU64_26 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_26 + -8) = lVal_13;
            }
            local_c8._0_8_ = pU64_26;
          }
          local_b8._8_8_ = uVal_19;
          local_b8._0_8_ = sz_16;
          func_0x1806aa960(pU64_26,_Str,sz_16);
          pU64_26[sz_16] = 0;
          if (0xf < (uint64_t)local_98._8_8_) {
            uVal_19 = local_98._8_8_ + 1;
            lVal_13 = local_a8._0_8_;
            if (0xfff < uVal_19) {
              lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
              if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801d8101;
              uVal_19 = local_98._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_13,uVal_19);
          }
          local_98._8_8_ = local_b8._8_8_;
          auArr_7 = local_c8;
          auArr_8 = local_b8;
          uVal_19 = local_98._8_8_;
          goto joined_r0x0001801d646e;
        }
        bFlag_6 = false;
        bFlag_34 = false;
joined_r0x0001801d6186:
        if ((uint64_t)local_b8._8_8_ < 0x10) goto LAB_1801d618c;
LAB_1801d62f0:
        uVal_17 = uVal_19 + 1;
        pU64_18 = pU64_26;
        if (0xfff < uVal_17) {
          pU64_18 = *(uint8_t **)(pU64_26 + -8);
          if ((uint8_t *)0x1f < pU64_26 + (-8 - (int64_t)pU64_18)) goto LAB_1801d8101;
          uVal_17 = uVal_19 + 0x28;
        }
        thunk_FUN_180695dd0(pU64_18,uVal_17);
        if (bFlag_6) goto LAB_1801d632c;
LAB_1801d6194:
        auArr_7 = local_a8;
        auArr_8 = local_98;
        uVal_19 = local_98._8_8_;
joined_r0x0001801d646e:
        local_98 = auArr_8;
        local_a8._0_8_ = local_a8;
        if (0xf < uVal_19) {
          local_a8._0_8_ = auArr_7._0_8_;
        }
        local_c8._0_8_ = local_a8._0_8_;
        local_a8 = auArr_7;
        if ((local_130[0] == '\x01') &&
           (lVal_13 = func_0x1801bc990(local_128,local_c8), lVal_13 != *local_128)) {
          pU64_26 = local_a8;
          if (0xf < (uint64_t)local_98._8_8_) {
            pU64_26 = (uint8_t *)local_a8._0_8_;
          }
          local_c8._0_8_ = pU64_26;
          uVal_14 = func_0x180135b10(local_130,local_c8);
          func_0x18009ff70(local_f8,uVal_14);
          if ((uint64_t)local_f8[0] == 0) {
            uVal_20 = 0;
            goto LAB_1801d6894;
          }
          local_170 = ptr2_Arr16_32;
          switch(*(uint32_t *)local_88[4]) {
          case 0:
            local_104 = 0;
            func_0x1801b1910(&DAT_1806b5270,local_f8,&local_104);
            **(uint32_t **)(local_88[4] + 8) = local_104;
            break;
          case 1:
            local_178 = 0;
            func_0x180211160(local_f8,&local_178);
            **(uint64_t **)(local_88[4] + 8) = local_178;
            break;
          case 2:
            local_180 = 0;
            func_0x180211250(local_f8,&local_180);
            **(uint64_t **)(local_88[4] + 8) = local_180;
            break;
          case 3:
          case 8:
            local_108 = 0;
            func_0x180112c00(&DAT_1806b5270,local_f8,&local_108);
            uVal_12 = local_108;
            goto LAB_1801d6857;
          case 4:
            func_0x18009ff70(local_1e8,local_f8);
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x7560) == '\0') {
              lVal_13 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_13 + 0x7560) = 1;
              *(uint8_t *)(lVal_13 + 0x755c) = 1;
              *(uint32_t *)(lVal_13 + 0x7558) = 0x6d2132bf;
              func_0x180673140(&LAB_180211310);
              ch_10 = *(char *)(local_150 + 1);
              pU64_31 = local_150;
            }
            else {
              ch_10 = *(char *)(local_150 + 1);
              pU64_31 = local_150;
            }
            if (ch_10 == '\x01') {
              *pU64_31 = *pU64_31 ^ 0x6d4557cd;
              *(uint8_t *)(pU64_31 + 1) = 0;
            }
            local_b8 = ZEXT816(0);
            local_c8 = ZEXT816(0);
            local_150 = pU64_31;
            sz_16 = strlen((char *)pU64_31);
            if ((int64_t)sz_16 < 0) {
              func_0x18007ba70();
              goto LAB_1801d8139;
            }
            uVal_19 = 0xf;
            pU64_26 = local_c8;
            if (0xf < sz_16) {
              uVal_17 = sz_16 | 0xf;
              uVal_19 = 0x16;
              if (0x16 < uVal_17) {
                uVal_19 = uVal_17;
              }
              if (uVal_17 < 0xfff) {
                pU64_26 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
              }
              else {
                lVal_13 = func_0x180672de0(uVal_19 + 0x28);
                pU64_26 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_26 + -8) = lVal_13;
              }
              local_c8._0_8_ = pU64_26;
              pU64_31 = local_150;
            }
            local_b8._0_8_ = sz_16;
            local_b8._8_8_ = uVal_19;
            func_0x1806aa960(pU64_26,pU64_31,sz_16);
            pU64_26[sz_16] = 0;
            uVal_14 = func_0x18004d550(local_1e8,local_c8);
            local_10c = 0;
            func_0x1801b1910(&DAT_1806b5270,uVal_14,&local_10c);
            **(uint32_t **)(local_88[4] + 8) = local_10c;
            if (0xf < (uint64_t)local_b8._8_8_) {
              uVal_19 = local_b8._8_8_ + 1;
              lVal_13 = local_c8._0_8_;
              if (0xfff < uVal_19) {
                lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
                if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801d8101;
                uVal_19 = local_b8._8_8_ + 0x28;
              }
              thunk_FUN_180695dd0(lVal_13,uVal_19);
            }
            func_0x180084c70(local_1e0,local_1e8[0]);
            func_0x18009ff70(local_1d8,local_f8);
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x756c) == '\0') {
              lVal_13 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_13 + 0x756c) = 1;
              *(uint8_t *)(lVal_13 + 0x756a) = 1;
              *(uint32_t *)(lVal_13 + 0x7564) = 0xcc04030c;
              *(uint16_t *)(lVal_13 + 0x7568) = 0xbfc7;
              func_0x180673140(&LAB_180211330);
              ch_10 = *(char *)((int64_t)local_148 + 6);
              pU64_31 = local_148;
            }
            else {
              ch_10 = *(char *)((int64_t)local_148 + 6);
              pU64_31 = local_148;
            }
            if (ch_10 == '\x01') {
              *pU64_31 = *pU64_31 ^ 0xa961716b;
              *(byte *)(pU64_31 + 1) = *(byte *)(pU64_31 + 1) ^ 0xa9;
              *(byte *)((int64_t)pU64_31 + 5) = *(byte *)((int64_t)pU64_31 + 5) ^ 0xbf;
              *(uint8_t *)((int64_t)pU64_31 + 6) = 0;
            }
            local_b8 = ZEXT816(0);
            local_c8 = ZEXT816(0);
            local_148 = pU64_31;
            sz_16 = strlen((char *)pU64_31);
            if ((int64_t)sz_16 < 0) {
              func_0x18007ba70();
              goto LAB_1801d8139;
            }
            uVal_19 = 0xf;
            pU64_26 = local_c8;
            if (0xf < sz_16) {
              uVal_17 = sz_16 | 0xf;
              uVal_19 = 0x16;
              if (0x16 < uVal_17) {
                uVal_19 = uVal_17;
              }
              if (uVal_17 < 0xfff) {
                pU64_26 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
              }
              else {
                lVal_13 = func_0x180672de0(uVal_19 + 0x28);
                pU64_26 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_26 + -8) = lVal_13;
              }
              local_c8._0_8_ = pU64_26;
              pU64_31 = local_148;
            }
            local_b8._0_8_ = sz_16;
            local_b8._8_8_ = uVal_19;
            func_0x1806aa960(pU64_26,pU64_31,sz_16);
            pU64_26[sz_16] = 0;
            uVal_14 = func_0x18004d550(local_1d8,local_c8);
            local_110 = 0;
            func_0x1801b1910(&DAT_1806b5270,uVal_14,&local_110);
            *(uint32_t *)(*(int64_t *)(local_88[4] + 8) + 4) = local_110;
            if (0xf < (uint64_t)local_b8._8_8_) {
              uVal_19 = local_b8._8_8_ + 1;
              lVal_13 = local_c8._0_8_;
              if (0xfff < uVal_19) {
                lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
                if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801d8101;
                uVal_19 = local_b8._8_8_ + 0x28;
              }
              thunk_FUN_180695dd0(lVal_13,uVal_19);
            }
            func_0x180084c70(local_1d0,local_1d8[0]);
            func_0x18009ff70(local_1c8,local_f8);
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x7578) == '\0') {
              lVal_13 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_13 + 0x7578) = 1;
              *(uint32_t *)(lVal_13 + 0x7570) = 0x882cb94b;
              *(uint16_t *)(lVal_13 + 0x7574) = 0x179;
              func_0x180673140(&LAB_180211360);
              ch_10 = *(char *)((int64_t)local_140 + 5);
              pU64_31 = local_140;
            }
            else {
              ch_10 = *(char *)((int64_t)local_140 + 5);
              pU64_31 = local_140;
            }
            if (ch_10 == '\x01') {
              *pU64_31 = *pU64_31 ^ 0xed59d529;
              *(byte *)(pU64_31 + 1) = *(byte *)(pU64_31 + 1) ^ 0x79;
              *(uint8_t *)((int64_t)pU64_31 + 5) = 0;
            }
            local_b8 = ZEXT816(0);
            local_c8 = ZEXT816(0);
            local_140 = pU64_31;
            sz_16 = strlen((char *)pU64_31);
            if ((int64_t)sz_16 < 0) {
              func_0x18007ba70();
              goto LAB_1801d8139;
            }
            uVal_19 = 0xf;
            pU64_26 = local_c8;
            if (0xf < sz_16) {
              uVal_17 = sz_16 | 0xf;
              uVal_19 = 0x16;
              if (0x16 < uVal_17) {
                uVal_19 = uVal_17;
              }
              if (uVal_17 < 0xfff) {
                pU64_26 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
              }
              else {
                lVal_13 = func_0x180672de0(uVal_19 + 0x28);
                pU64_26 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_26 + -8) = lVal_13;
              }
              local_c8._0_8_ = pU64_26;
              pU64_31 = local_140;
            }
            local_b8._8_8_ = uVal_19;
            local_b8._0_8_ = sz_16;
            func_0x1806aa960(pU64_26,pU64_31,sz_16);
            pU64_26[sz_16] = 0;
            uVal_14 = func_0x18004d550(local_1c8,local_c8);
            local_114 = 0;
            func_0x1801b1910(&DAT_1806b5270,uVal_14,&local_114);
            *(uint32_t *)(*(int64_t *)(local_88[4] + 8) + 8) = local_114;
            if (0xf < (uint64_t)local_b8._8_8_) {
              uVal_19 = local_b8._8_8_ + 1;
              lVal_13 = local_c8._0_8_;
              if (0xfff < uVal_19) {
                lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
                if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801d8101;
                uVal_19 = local_b8._8_8_ + 0x28;
              }
              thunk_FUN_180695dd0(lVal_13,uVal_19);
            }
            func_0x180084c70(local_1c0,local_1c8[0]);
            if (local_88[9][0] != '\x05') {
              func_0x18011cb80();
              goto LAB_1801d8139;
            }
            if ((*(float *)(local_88[5] + 0xc) != DAT_1806ae7b0) ||
               (NAN(*(float *)(local_88[5] + 0xc)) || NAN(DAT_1806ae7b0))) {
              func_0x18009ff70(local_1b8,local_f8);
              if (*(char *)(*(int64_t *)
                             ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                           0x7584) == '\0') {
                lVal_13 = *(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                *(uint8_t *)(lVal_13 + 0x7584) = 1;
                *(uint8_t *)(lVal_13 + 0x7582) = 1;
                *(uint32_t *)(lVal_13 + 0x757c) = 0x53d5b99c;
                *(uint16_t *)(lVal_13 + 0x7580) = 0xc30e;
                func_0x180673140(&LAB_180211390);
                ch_10 = *(char *)((int64_t)local_138 + 6);
                pU64_31 = local_138;
              }
              else {
                ch_10 = *(char *)((int64_t)local_138 + 6);
                pU64_31 = local_138;
              }
              if (ch_10 == '\x01') {
                *pU64_31 = *pU64_31 ^ 0x3ba5d5fd;
                *(byte *)(pU64_31 + 1) = *(byte *)(pU64_31 + 1) ^ 0x6f;
                *(byte *)((int64_t)pU64_31 + 5) = *(byte *)((int64_t)pU64_31 + 5) ^ 0xc3;
                *(uint8_t *)((int64_t)pU64_31 + 6) = 0;
              }
              local_b8 = ZEXT816(0);
              local_c8 = ZEXT816(0);
              local_138 = pU64_31;
              sz_16 = strlen((char *)pU64_31);
              if ((int64_t)sz_16 < 0) {
                func_0x18007ba70();
                goto LAB_1801d8139;
              }
              uVal_19 = 0xf;
              pU64_26 = local_c8;
              if (0xf < sz_16) {
                uVal_17 = sz_16 | 0xf;
                uVal_19 = 0x16;
                if (0x16 < uVal_17) {
                  uVal_19 = uVal_17;
                }
                if (uVal_17 < 0xfff) {
                  pU64_26 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
                }
                else {
                  lVal_13 = func_0x180672de0(uVal_19 + 0x28);
                  pU64_26 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
                  *(int64_t *)(pU64_26 + -8) = lVal_13;
                }
                local_c8._0_8_ = pU64_26;
                pU64_31 = local_138;
              }
              local_b8._8_8_ = uVal_19;
              local_b8._0_8_ = sz_16;
              func_0x1806aa960(pU64_26,pU64_31,sz_16);
              pU64_26[sz_16] = 0;
              uVal_14 = func_0x18004d550(local_1b8,local_c8);
              local_118 = 0;
              func_0x1801b1910(&DAT_1806b5270,uVal_14,&local_118);
              *(uint32_t *)(*(int64_t *)(local_88[4] + 8) + 0xc) = local_118;
              if (0xf < (uint64_t)local_b8._8_8_) {
                uVal_19 = local_b8._8_8_ + 1;
                lVal_13 = local_c8._0_8_;
                if (0xfff < uVal_19) {
                  lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
                  if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801d8101;
                  uVal_19 = local_b8._8_8_ + 0x28;
                }
                thunk_FUN_180695dd0(lVal_13,uVal_19);
              }
              func_0x180084c70(local_1b0,local_1b8[0]);
            }
            break;
          case 5:
            if (local_f8[0] != 4) {
              local_1f0 = "number";
              if (local_f8[0] < 10) {
                local_1f0 = (&PTR_LAB_1806be198)[local_f8[0]];
              }
              func_0x180083260(local_248,"type must be boolean, but is ",&local_1f0);
              func_0x180082f00(local_228,0x12e,local_248,local_f8);
              func_0x18067a120(local_228,&DAT_180768700);
              goto LAB_1801d8139;
            }
            **(uint8_t **)(local_88[4] + 8) = local_f8[8];
            break;
          case 6:
            _local_1a8 = ZEXT816(0);
            local_198 = 0;
            uStack_190 = 0xf;
            func_0x180086960(local_f8,local_1a8);
            pLong_22 = *(int64_t **)(local_88[4] + 8);
            if (pLong_22 == (int64_t *)local_1a8) {
              if (0xf < uStack_190) {
                uVal_19 = uStack_190 + 1;
                lVal_13 = (int64_t)local_1a8;
                if (0xfff < uVal_19) {
                  lVal_13 = *(int64_t *)((int64_t)local_1a8 + -8);
                  if (0x1f < (uint64_t)(((int64_t)local_1a8 + -8) - lVal_13)) goto LAB_1801d8101;
                  uVal_19 = uStack_190 + 0x28;
                }
                thunk_FUN_180695dd0(lVal_13,uVal_19);
              }
            }
            else {
              uVal_19 = pLong_22[3];
              if (0xf < uVal_19) {
                lVal_13 = *pLong_22;
                uVal_17 = uVal_19 + 1;
                lVal_21 = lVal_13;
                if (0xfff < uVal_17) {
                  lVal_21 = *(int64_t *)(lVal_13 + -8);
                  if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_21)) goto LAB_1801d8101;
                  uVal_17 = uVal_19 + 0x28;
                }
                thunk_FUN_180695dd0(lVal_21,uVal_17);
              }
              pLong_22[2] = 0;
              pLong_22[3] = 0xf;
              *(uint8_t *)pLong_22 = 0;
              *(uint32_t *)pLong_22 = local_1a8._0_4_;
              *(uint32_t *)((int64_t)pLong_22 + 4) = local_1a8._4_4_;
              *(uint32_t *)(pLong_22 + 1) = uStack_1a0;
              *(uint32_t *)((int64_t)pLong_22 + 0xc) = uStack_19c;
              *(uint32_t *)(pLong_22 + 2) = (uint32_t)local_198;
              *(uint32_t *)((int64_t)pLong_22 + 0x14) = local_198._4_4_;
              *(uint32_t *)(pLong_22 + 3) = (uint32_t)uStack_190;
              *(uint32_t *)((int64_t)pLong_22 + 0x1c) = uStack_190._4_4_;
            }
            break;
          case 7:
            local_11c = 0;
            func_0x180112c00(&DAT_1806b5270,local_f8,&local_11c);
            uVal_12 = local_11c;
LAB_1801d6857:
            **(uint32_t **)(local_88[4] + 8) = uVal_12;
          }
          func_0x1801d8910(local_88);
          pU64_31 = local_160;
          _Str = local_158;
          ptr2_Arr16_32 = local_170;
          ptr2_Arr16_33 = local_168;
          uVal_20 = local_f8[0];
LAB_1801d6894:
          func_0x180084c70(local_f8 + 8,uVal_20);
          goto LAB_1801d68a1;
        }
        switch(*(uint32_t *)local_88[4]) {
        case 0:
          if (local_88[9][0] != '\x01') goto LAB_1801d8133;
          **(uint32_t **)(local_88[4] + 8) = *(uint32_t *)local_88[5];
          break;
        case 1:
          if (local_88[9][0] != '\x02') goto LAB_1801d812d;
          **(uint64_t **)(local_88[4] + 8) = *(uint64_t *)local_88[5];
          break;
        case 2:
          if (local_88[9][0] != '\x03') goto LAB_1801d8127;
          **(uint64_t **)(local_88[4] + 8) = *(uint64_t *)local_88[5];
          break;
        case 3:
        case 8:
          if (local_88[9][0] != '\x04') goto LAB_1801d8109;
          goto LAB_1801d65c4;
        case 4:
          if (local_88[9][0] != '\x05') goto LAB_1801d8121;
          pU64_3 = *(uint32_t **)(local_88[4] + 8);
          *pU64_3 = *(uint32_t *)local_88[5];
          pU64_3[1] = *(uint32_t *)(local_88[5] + 4);
          pU64_3[2] = *(uint32_t *)(local_88[5] + 8);
          pU64_3[3] = *(uint32_t *)(local_88[5] + 0xc);
          break;
        case 5:
          if (local_88[9][0] != '\x06') goto LAB_1801d811b;
          **(uint8_t **)(local_88[4] + 8) = local_88[5][0];
          break;
        case 6:
          if (local_88[9][0] != '\a') goto LAB_1801d8115;
          pArr16_29 = local_88 + 5;
          pArr16_23 = *(uint8_t (**)[16])(local_88[4] + 8);
          if (pArr16_23 != pArr16_29) {
            if (0xf < *(uint64_t *)(local_88[6] + 8)) {
              pArr16_29 = *(uint8_t (**)[16])local_88[5];
            }
            pU64_26 = *(uint8_t **)local_88[6];
            if (*(uint8_t **)(pArr16_23[1] + 8) < pU64_26) {
              func_0x18007bba0(pArr16_23,pU64_26);
            }
            else {
              pArr16_27 = pArr16_23;
              if (&DAT_0000000f < *(uint8_t **)(pArr16_23[1] + 8)) {
                pArr16_27 = *(uint8_t (**)[16])*pArr16_23;
              }
              *(uint8_t **)pArr16_23[1] = pU64_26;
              func_0x1806aa960(pArr16_27,pArr16_29,pU64_26);
              (*pArr16_27)[(int64_t)pU64_26] = 0;
            }
          }
          break;
        case 7:
          if (local_88[9][0] != '\x04') goto LAB_1801d810f;
LAB_1801d65c4:
          **(uint32_t **)(local_88[4] + 8) = *(uint32_t *)local_88[5];
        }
        func_0x1801d8910(local_88);
LAB_1801d68a1:
        if (0xf < (uint64_t)local_98._8_8_) {
          uVal_19 = local_98._8_8_ + 1;
          lVal_13 = local_a8._0_8_;
          if (0xfff < uVal_19) {
            lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801d8101;
            uVal_19 = local_98._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_19);
        }
      }
      local_f8 = ZEXT816(0);
      local_e8 = 0;
      local_e0 = 0xf;
      local_a8._0_8_ = &DAT_28d478d88fb3dcdf;
      DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
      if (DAT_180840a60 == 0) {
        DAT_180840a68 = 0;
joined_r0x0001801d738d:
        if (local_e8 != 0) goto LAB_1801d7393;
      }
      else {
        local_a8._0_8_ = 0x186e75fd59d743a9;
        if (*(int64_t *)(*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70) ==
            0) goto joined_r0x0001801d738d;
LAB_1801d7393:
        pU64_4 = (uint64_t *)local_100[0xe];
        for (pU64_30 = (uint64_t *)local_100[0xd]; pU64_30 != pU64_4; pU64_30 = pU64_30 + 4) {
          if (local_e8 == 0) {
LAB_1801d7481:
            lVal_13 = *(int64_t *)
                      (*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70);
            if (*(int64_t *)(lVal_13 + 0x430) == 0) {
              local_a8._0_8_ = 0x185dd108334994f2;
              lVal_21 = 0x400;
              uVal_19 = pU64_30[2];
              uVal_17 = pU64_30[3];
            }
            else {
              local_a8._0_8_ = &DAT_18615f6ca6ec3ae1;
              lVal_21 = 0x420;
              uVal_19 = pU64_30[2];
              uVal_17 = pU64_30[3];
            }
            pU64_28 = pU64_30;
            if (0xf < uVal_17) {
              pU64_28 = (uint64_t *)*pU64_30;
            }
            uVal_17 = *(uint64_t *)(lVal_21 + 0x10 + lVal_13);
            if (*(uint64_t *)(lVal_21 + 0x18 + lVal_13) < 0x10) {
              lVal_21 = lVal_21 + lVal_13;
            }
            else {
              lVal_21 = *(int64_t *)(lVal_21 + lVal_13);
            }
            if ((uVal_19 <= uVal_17) &&
               ((uVal_19 == 0 ||
                (lVal_25 = uVal_17 + lVal_21, lVal_13 = thunk_FUN_180676d20(lVal_21,lVal_25,pU64_28),
                lVal_13 != lVal_25 && lVal_13 - lVal_21 != -1)))) goto LAB_1801d8081;
          }
          else {
            if ((uint64_t)pU64_30[3] < 0x10) {
              pU64_28 = pU64_30;
              if (local_e0 < 0x10) goto LAB_1801d7408;
LAB_1801d7434:
              uVal_19 = pU64_30[2];
              pU64_26 = (uint8_t *)local_f8._0_8_;
            }
            else {
              pU64_28 = (uint64_t *)*pU64_30;
              if (0xf < local_e0) goto LAB_1801d7434;
LAB_1801d7408:
              uVal_19 = pU64_30[2];
              pU64_26 = local_f8;
            }
            if (uVal_19 <= local_e8) {
              if (uVal_19 != 0) {
                pU64_24 = pU64_26 + local_e8;
                pU64_18 = (uint8_t *)thunk_FUN_180676d20(pU64_26,pU64_24,pU64_28);
                if (pU64_18 == pU64_24 || (int64_t)pU64_18 - (int64_t)pU64_26 == -1) {
                  if (local_e8 == 0) goto LAB_1801d7481;
                  goto LAB_1801d73d0;
                }
              }
LAB_1801d8081:
              param_1 = local_100;
              if (local_e0 < 0x10) goto LAB_1801d77f7;
              uVal_19 = local_e0 + 1;
              lVal_13 = local_f8._0_8_;
              if (0xfff < uVal_19) {
                lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
                if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) goto LAB_1801d8101;
                uVal_19 = local_e0 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_13,uVal_19);
              goto LAB_1801d77f7;
            }
          }
LAB_1801d73d0:
        }
      }
      param_1 = local_100;
      (**(func_ptr_t *)(*local_100 + 0x10))(local_100,local_a8);
      ch_10 = func_0x180052940(local_a8);
      ch_9 = '\x01';
      if (ch_10 == '\0') {
        (**(func_ptr_t *)(*param_1 + 0x18))(param_1,local_c8);
        ch_9 = func_0x180052a50(local_c8);
        if (0xf < (uint64_t)local_b8._8_8_) {
          uVal_19 = local_b8._8_8_ + 1;
          lVal_13 = local_c8._0_8_;
          if (0xfff < uVal_19) {
            lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801d8101;
            uVal_19 = local_b8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_19);
        }
      }
      if (0xf < (uint64_t)local_98._8_8_) {
        uVal_19 = local_98._8_8_ + 1;
        lVal_13 = local_a8._0_8_;
        if (0xfff < uVal_19) {
          lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801d8101;
          uVal_19 = local_98._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_13,uVal_19);
      }
      if (0xf < local_e0) {
        uVal_19 = local_e0 + 1;
        lVal_13 = local_f8._0_8_;
        if (0xfff < uVal_19) {
          lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) goto LAB_1801d8101;
          uVal_19 = local_e0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_13,uVal_19);
      }
      if (ch_9 == '\0') {
        ch_10 = *(char *)(param_1 + 8);
        if (ch_10 != local_c9) goto LAB_1801d7815;
      }
      else {
LAB_1801d77f7:
        *(uint8_t *)(param_1 + 8) = 0;
        ch_10 = '\0';
        if (local_c9 != '\0') {
LAB_1801d7815:
          if (ch_10 == '\0') {
            (**(func_ptr_t *)(*param_1 + 0x60))(param_1);
          }
          else {
            (**(func_ptr_t *)(*param_1 + 0x58))(param_1);
          }
        }
      }
    }
    func_0x180084c70(&local_128,local_130[0]);
    if (local_ca == '\0') goto LAB_1801d784e;
  }
  ch_10 = (**(func_ptr_t *)(*param_1 + 0x30))(param_1);
  if (ch_10 != '\0') {
    return;
  }
  if (*(char *)(param_1 + 8) != '\x01') {
    return;
  }
  *(uint8_t *)(param_1 + 8) = 0;
  func_0x1801dbc50(param_1);
  local_f8 = ZEXT816(0);
  local_e8 = 0;
  local_e0 = 0xf;
  local_a8._0_8_ = &DAT_28d478d88fb3dcdf;
  DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
  if (DAT_180840a60 == 0) {
    DAT_180840a68 = 0;
joined_r0x0001801d7be4:
    if (local_e8 != 0) goto LAB_1801d7bea;
  }
  else {
    local_a8._0_8_ = (uint8_t *)0x186e75fd59d743a9;
    if (*(int64_t *)(*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70) == 0)
    goto joined_r0x0001801d7be4;
LAB_1801d7bea:
    pU64_4 = (uint64_t *)local_100[0xe];
    for (pU64_30 = (uint64_t *)local_100[0xd]; pU64_30 != pU64_4; pU64_30 = pU64_30 + 4) {
      if (local_e8 == 0) {
LAB_1801d7ce1:
        lVal_13 = *(int64_t *)
                  (*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70);
        if (*(int64_t *)(lVal_13 + 0x430) == 0) {
          local_a8._0_8_ = (uint8_t *)0x185dd108334994f2;
          lVal_21 = 0x400;
          uVal_19 = pU64_30[2];
          uVal_17 = pU64_30[3];
        }
        else {
          local_a8._0_8_ = &DAT_18615f6ca6ec3ae1;
          lVal_21 = 0x420;
          uVal_19 = pU64_30[2];
          uVal_17 = pU64_30[3];
        }
        pU64_28 = pU64_30;
        if (0xf < uVal_17) {
          pU64_28 = (uint64_t *)*pU64_30;
        }
        uVal_17 = *(uint64_t *)(lVal_21 + 0x10 + lVal_13);
        if (*(uint64_t *)(lVal_21 + 0x18 + lVal_13) < 0x10) {
          lVal_21 = lVal_21 + lVal_13;
        }
        else {
          lVal_21 = *(int64_t *)(lVal_21 + lVal_13);
        }
        if ((uVal_19 <= uVal_17) &&
           ((pLong_22 = local_100, uVal_19 == 0 ||
            (lVal_25 = uVal_17 + lVal_21, lVal_13 = thunk_FUN_180676d20(lVal_21,lVal_25,pU64_28),
            pLong_22 = local_100, lVal_13 != lVal_25 && lVal_13 - lVal_21 != -1))))
        goto joined_r0x0001801d80e4;
      }
      else {
        if ((uint64_t)pU64_30[3] < 0x10) {
          pU64_28 = pU64_30;
          if (local_e0 < 0x10) goto LAB_1801d7c68;
LAB_1801d7c94:
          uVal_19 = pU64_30[2];
          pU64_26 = (uint8_t *)local_f8._0_8_;
        }
        else {
          pU64_28 = (uint64_t *)*pU64_30;
          if (0xf < local_e0) goto LAB_1801d7c94;
LAB_1801d7c68:
          uVal_19 = pU64_30[2];
          pU64_26 = local_f8;
        }
        if (uVal_19 <= local_e8) {
          pLong_22 = local_100;
          if ((uVal_19 == 0) ||
             (pU64_24 = pU64_26 + local_e8,
             pU64_18 = (uint8_t *)thunk_FUN_180676d20(pU64_26,pU64_24,pU64_28),
             pLong_22 = local_100, pU64_18 != pU64_24 && (int64_t)pU64_18 - (int64_t)pU64_26 != -1)
             ) goto joined_r0x0001801d80e4;
          if (local_e8 == 0) goto LAB_1801d7ce1;
        }
      }
    }
  }
  pLong_22 = local_100;
  (**(func_ptr_t *)(*local_100 + 0x10))(local_100,local_a8);
  ch_10 = func_0x180052940(local_a8);
  if (ch_10 == '\0') {
    (**(func_ptr_t *)(*pLong_22 + 0x18))(pLong_22,local_c8);
    func_0x180052a50(local_c8);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_19 = local_b8._8_8_ + 1;
      lVal_13 = local_c8._0_8_;
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801d8101;
        uVal_19 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
  }
  if (0xf < (uint64_t)local_98._8_8_) {
    uVal_19 = local_98._8_8_ + 1;
    pU64_26 = (uint8_t *)local_a8._0_8_;
    if (0xfff < uVal_19) {
      pU64_26 = *(uint8_t **)(local_a8._0_8_ + -8);
      if ((uint8_t *)0x1f < (uint8_t *)(local_a8._0_8_ + (-8 - (int64_t)pU64_26)))
      goto LAB_1801d8101;
      uVal_19 = local_98._8_8_ + 0x28;
    }
    thunk_FUN_180695dd0(pU64_26,uVal_19);
  }
joined_r0x0001801d80e4:
  if (0xf < local_e0) {
    uVal_19 = local_e0 + 1;
    lVal_13 = local_f8._0_8_;
    if (0xfff < uVal_19) {
      lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
      if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) {
LAB_1801d8101:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_19 = local_e0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_13,uVal_19);
  }
  func_0x1801dc7a0(pLong_22,0);
  (**(func_ptr_t *)(*pLong_22 + 0x60))(pLong_22);
  return;
}

// Unwind@1801d8140
void Unwind_1801d8140(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1801d8180
void Unwind_1801d8180(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1801d81c0
void Unwind_1801d81c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1801d8210
void Unwind_1801d8210(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x80);
  return;
}

// Unwind@1801d8250
void Unwind_1801d8250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1801d82a0
void Unwind_1801d82a0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x90);
  return;
}

// Unwind@1801d82e0
void Unwind_1801d82e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1801d8330
void Unwind_1801d8330(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0xa0);
  return;
}

// Unwind@1801d8370
void Unwind_1801d8370(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1801d83c0
void Unwind_1801d83c0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0xb0);
  return;
}

// Unwind@1801d8400
void Unwind_1801d8400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Catch@1801d8440
uint64_t Catch_1801d8440(void)
{
  return 0x1801d6864;
}

// Catch@1801d8480
uint8_t * Catch_1801d8480(uint64_t param_1,int64_t param_2)
{
  *(uint8_t ***)(param_2 + 0x1f0) = std::exception::vftable;
  func_0x18067b490(param_2 + 0x1f8);
  return &DAT_1801d718a;
}

// Unwind@1801d84e0
void Unwind_1801d84e0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x170);
  return;
}

// Unwind@1801d8530
void Unwind_1801d8530(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801d8560
void Unwind_1801d8560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@1801d85b0
void Unwind_1801d85b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1801d8600
void Unwind_1801d8600(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@1801d8650
void Unwind_1801d8650(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1801d86a0
void Unwind_1801d86a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@1801d86f0
void Unwind_1801d86f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801d8720
void Unwind_1801d8720(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801d8750
void Unwind_1801d8750(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801d8780
void Unwind_1801d8780(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801d87b0
void Unwind_1801d87b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801d87f0
void Unwind_1801d87f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  return;
}

// Unwind@1801d8840
void Unwind_1801d8840(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801d8870
void Unwind_1801d8870(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x138);
  return;
}

// Unwind@1801d88c0
void Unwind_1801d88c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  return;
}

// func_0x1801d8910
void func_0x1801d8910(int64_t param_1)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  int64_t lVal_4;
  int iVal_5;
  float fVal_6;
  double dVal_7;
  float fVal_8;
  float fVal_9;
  
  fVal_9 = DAT_1806b26b4;
  switch(*(uint32_t *)(param_1 + 0x40)) {
  case 0:
    if ((*(char *)(param_1 + 0x120) == '\x01') && (*(char *)(param_1 + 0xd8) == '\x01')) {
      fVal_9 = **(float **)(param_1 + 0x48);
      if (*(float *)(param_1 + 0xe0) <= fVal_9) {
        fVal_9 = *(float *)(param_1 + 0xe0);
      }
      if (fVal_9 <= *(float *)(param_1 + 0x98)) {
        fVal_9 = *(float *)(param_1 + 0x98);
      }
      **(float **)(param_1 + 0x48) = fVal_9;
      return;
    }
    break;
  case 1:
    if ((*(char *)(param_1 + 0x120) == '\x02') && (*(char *)(param_1 + 0xd8) == '\x02')) {
      dVal_7 = **(double **)(param_1 + 0x48);
      if (*(double *)(param_1 + 0xe0) <= dVal_7) {
        dVal_7 = *(double *)(param_1 + 0xe0);
      }
      if (dVal_7 <= *(double *)(param_1 + 0x98)) {
        dVal_7 = *(double *)(param_1 + 0x98);
      }
      **(double **)(param_1 + 0x48) = dVal_7;
      return;
    }
    break;
  case 2:
    if ((*(char *)(param_1 + 0x120) == '\x03') && (*(char *)(param_1 + 0xd8) == '\x03')) {
      lVal_1 = **(int64_t **)(param_1 + 0x48);
      lVal_4 = *(int64_t *)(param_1 + 0xe0);
      if (lVal_1 < *(int64_t *)(param_1 + 0xe0)) {
        lVal_4 = lVal_1;
      }
      if (lVal_4 < *(int64_t *)(param_1 + 0x98)) {
        lVal_4 = *(int64_t *)(param_1 + 0x98);
      }
      **(int64_t **)(param_1 + 0x48) = lVal_4;
      return;
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0x128) == '\x01') {
      if (*(char *)(param_1 + 0xd8) == '\x04') {
        iVal_5 = **(int **)(param_1 + 0x48);
        if (iVal_5 < *(int *)(param_1 + 0x98)) {
          iVal_5 = *(int *)(param_1 + 0x98);
        }
        **(int **)(param_1 + 0x48) = iVal_5;
        return;
      }
    }
    else if ((*(char *)(param_1 + 0x120) == '\x04') && (*(char *)(param_1 + 0xd8) == '\x04')) {
      iVal_5 = **(int **)(param_1 + 0x48);
      iVal_3 = *(int *)(param_1 + 0xe0);
      if (iVal_5 < *(int *)(param_1 + 0xe0)) {
        iVal_3 = iVal_5;
      }
      if (iVal_3 < *(int *)(param_1 + 0x98)) {
        iVal_3 = *(int *)(param_1 + 0x98);
      }
      **(int **)(param_1 + 0x48) = iVal_3;
      return;
    }
    break;
  case 4:
    fVal_8 = **(float **)(param_1 + 0x48);
    if (DAT_1806b26b4 <= fVal_8) {
      fVal_8 = DAT_1806b26b4;
    }
    fVal_6 = 0.0;
    if (fVal_8 <= 0.0) {
      fVal_8 = fVal_6;
    }
    **(float **)(param_1 + 0x48) = fVal_8;
    fVal_8 = *(float *)(*(int64_t *)(param_1 + 0x48) + 4);
    if (fVal_9 <= fVal_8) {
      fVal_8 = fVal_9;
    }
    if (fVal_8 <= 0.0) {
      fVal_8 = fVal_6;
    }
    *(float *)(*(int64_t *)(param_1 + 0x48) + 4) = fVal_8;
    fVal_8 = *(float *)(*(int64_t *)(param_1 + 0x48) + 8);
    if (fVal_9 <= fVal_8) {
      fVal_8 = fVal_9;
    }
    if (fVal_8 <= 0.0) {
      fVal_8 = fVal_6;
    }
    *(float *)(*(int64_t *)(param_1 + 0x48) + 8) = fVal_8;
    fVal_9 = *(float *)(*(int64_t *)(param_1 + 0x48) + 0xc);
    if ((fVal_9 != DAT_1806ae7b0) || (NAN(fVal_9) || NAN(DAT_1806ae7b0))) {
      if (DAT_1806b26b4 <= fVal_9) {
        fVal_9 = DAT_1806b26b4;
      }
      if (fVal_9 <= 0.0) {
        fVal_9 = fVal_6;
      }
      *(float *)(*(int64_t *)(param_1 + 0x48) + 0xc) = fVal_9;
    }
  default:
    return;
  case 7:
    iVal_3 = (int)((uint64_t)
                  ((*(int64_t **)(param_1 + 0x128))[1] - **(int64_t **)(param_1 + 0x128)) >> 4) *
            -0x49249249 + -1;
    iVal_5 = **(int **)(param_1 + 0x48);
    if (iVal_5 < iVal_3) {
      iVal_3 = iVal_5;
    }
    iVal_5 = 0;
    if (0 < iVal_3) {
      iVal_5 = iVal_3;
    }
    **(int **)(param_1 + 0x48) = iVal_5;
    return;
  }
  func_0x18011cb80();
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x1801d8b10
void func_0x1801d8b10(int64_t *param_1,char *param_2)
{
  uint *_Str;
  char ch_1;
  uint8_t (*pArr16_2)[16];
  uint64_t uVal_3;
  func_ptr_t fnPtr_4;
  bool bFlag_5;
  float fVal_6;
  uint *_Str_00;
  int iVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  size_t sz_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  int64_t lVal_13;
  uint64_t *****ptr5_U64_14;
  uint8_t *_Buf1;
  uint8_t *pU64_15;
  uint8_t (*pArr16_16)[16];
  uint64_t *_Str_01;
  uint8_t (**ptr2_Arr16_17)[16];
  uint64_t uVal_18;
  uint8_t *pU64_19;
  bool bFlag_20;
  uint8_t *local_160;
  uint8_t (**local_158)[16];
  uint64_t *****local_150 [3];
  uint64_t local_138;
  uint *local_130;
  uint *local_128;
  uint *local_120;
  uint *local_118;
  char *local_110;
  uint8_t local_108 [8];
  uint64_t local_100;
  uint8_t local_f8 [16];
  size_t local_e8;
  uint64_t uStack_e0;
  uint8_t local_d0 [8];
  uint64_t local_c8;
  uint64_t *local_c0;
  uint8_t local_b8 [16];
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  uint8_t local_98 [16];
  uint8_t local_88 [24];
  uint64_t local_70;
  
  local_f8._8_8_ = local_f8._0_8_;
  local_70 = 0xfffffffffffffffe;
  (**(func_ptr_t *)(*param_1 + 0x10))(param_1,local_150);
  local_f8._0_8_ = local_150;
  if (0xf < local_138) {
    local_f8._0_8_ = local_150[0];
  }
  if ((*param_2 == '\x01') &&
     (lVal_8 = func_0x1801bc990(*(uint64_t *)(param_2 + 8),local_f8),
     lVal_8 != **(int64_t **)(param_2 + 8))) {
    ptr5_U64_14 = local_150[0];
    if (local_138 < 0x10) {
      ptr5_U64_14 = local_150;
    }
    local_f8._0_8_ = ptr5_U64_14;
    func_0x1801bca90(param_2,local_f8);
  }
  fVal_6 = DAT_1806ae7b0;
  local_d0[0] = 0;
  local_c8 = 0;
  ptr2_Arr16_17 = (uint8_t (**)[16])param_1[9];
  local_158 = (uint8_t (**)[16])param_1[10];
  lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint *)(lVal_8 + 0x7588);
  _Str_01 = (uint64_t *)(lVal_8 + 0x7598);
  local_130 = (uint *)(lVal_8 + 0x75a8);
  local_128 = (uint *)(lVal_8 + 0x75b4);
  local_120 = (uint *)(lVal_8 + 0x75c0);
  local_118 = (uint *)(lVal_8 + 0x75cc);
  local_110 = param_2;
  local_c0 = _Str_01;
  do {
    if (ptr2_Arr16_17 == local_158) {
      ptr5_U64_14 = local_150[0];
      if (local_138 < 0x10) {
        ptr5_U64_14 = local_150;
      }
      local_b8._0_8_ = ptr5_U64_14;
      func_0x180136b00(local_110,local_f8,local_b8,local_d0);
      func_0x180084c70(&local_c8,local_d0[0]);
      if (0xf < local_138) {
        uVal_18 = local_138 + 1;
        ptr5_U64_14 = local_150[0];
        if (0xfff < uVal_18) {
          ptr5_U64_14 = (uint64_t *****)local_150[0][-1];
          if (0x1f < (uint64_t)((int64_t)local_150[0] + (-8 - (int64_t)ptr5_U64_14))) {
LAB_1801d98c9:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_18 = local_138 + 0x28;
        }
        thunk_FUN_180695dd0(ptr5_U64_14,uVal_18);
      }
      return;
    }
    pArr16_2 = *ptr2_Arr16_17;
    _local_a8 = ZEXT816(0);
    local_b8 = ZEXT816(0);
    pArr16_16 = pArr16_2;
    if (0xf < *(uint64_t *)(pArr16_2[1] + 8)) {
      pArr16_16 = *(uint8_t (**)[16])*pArr16_2;
    }
    uVal_18 = *(uint64_t *)pArr16_2[1];
    if ((int64_t)uVal_18 < 0) {
LAB_1801d98c3:
      func_0x18007ba70();
      goto LAB_1801d98c9;
    }
    if (uVal_18 < 0x10) {
      uStack_a0 = 0xf;
      local_a8 = (uint8_t  [8])uVal_18;
      local_b8 = *pArr16_16;
    }
    else {
      uVal_9 = uVal_18 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_9) {
        uVal_11 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        uVal_9 = func_0x180672de0(uVal_11 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_11 + 0x28);
        uVal_9 = lVal_12 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_9 - 8) = lVal_12;
      }
      local_b8._0_8_ = uVal_9;
      uStack_a0 = uVal_11;
      local_a8 = (uint8_t  [8])uVal_18;
      func_0x1806aa960(uVal_9,pArr16_16,uVal_18 + 1);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7590) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x7590) = 1;
      *(uint8_t *)(lVal_12 + 0x758c) = 1;
      *(uint32_t *)(lVal_12 + 0x7588) = 0x47327cb8;
      func_0x180673140(&LAB_1802113c0);
      ch_1 = *(char *)(lVal_8 + 0x758c);
    }
    else {
      ch_1 = *(char *)(lVal_8 + 0x758c);
    }
    if (ch_1 == '\x01') {
      *_Str = *_Str ^ 0x474b19f3;
      *(uint8_t *)(lVal_8 + 0x758c) = 0;
    }
    local_f8 = ZEXT816(0);
    sz_10 = strlen((char *)_Str);
    if ((int64_t)sz_10 < 0) {
      func_0x18007ba70();
      goto LAB_1801d98c3;
    }
    uVal_18 = 0xf;
    pU64_19 = local_f8;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_11) {
        uVal_18 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_19 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_18 + 0x28);
        pU64_19 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -8) = lVal_12;
      }
      local_f8._0_8_ = pU64_19;
    }
    local_e8 = sz_10;
    uStack_e0 = uVal_18;
    func_0x1806aa960(pU64_19,_Str,sz_10);
    pU64_19[sz_10] = 0;
    uVal_18 = uStack_e0;
    pU64_19 = (uint8_t *)local_f8._0_8_;
    pU64_15 = local_f8;
    if (0xf < uStack_e0) {
      pU64_15 = (uint8_t *)local_f8._0_8_;
    }
    _Buf1 = local_b8;
    if (0xf < uStack_a0) {
      _Buf1 = (uint8_t *)local_b8._0_8_;
    }
    if (local_a8 == (uint8_t  [8])local_e8) {
      if (local_e8 == 0) {
        bFlag_5 = true;
        bFlag_20 = true;
        goto joined_r0x0001801d8e07;
      }
      iVal_7 = memcmp(_Buf1,pU64_15,local_e8);
      bFlag_20 = iVal_7 == 0;
      bFlag_5 = bFlag_20;
      if (0xf < uVal_18) goto LAB_1801d8e20;
LAB_1801d8e09:
      if (!bFlag_20) goto LAB_1801d8f74;
LAB_1801d8e5d:
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x75a4) == '\0') {
        lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_12 + 0x75a4) = 1;
        *(uint8_t *)(lVal_12 + 0x75a0) = 1;
        *(uint64_t *)(lVal_12 + 0x7598) = 0x3955bd0ee39c1ac4;
        func_0x180673140(&LAB_1802113e0);
        ch_1 = *(char *)(_Str_01 + 1);
      }
      else {
        ch_1 = *(char *)(_Str_01 + 1);
      }
      if (ch_1 == '\x01') {
        *_Str_01 = *_Str_01 ^ 0x3931d36781e57faf;
        *(uint8_t *)(_Str_01 + 1) = 0;
      }
      local_f8 = ZEXT816(0);
      sz_10 = strlen((char *)_Str_01);
      if ((int64_t)sz_10 < 0) {
        func_0x18007ba70();
LAB_1801d98d1:
        func_0x18011cb80();
LAB_1801d98d7:
        func_0x18007ba70();
LAB_1801d98dd:
        func_0x18007ba70();
LAB_1801d98e3:
        func_0x18007ba70();
LAB_1801d98e9:
        func_0x18007ba70();
        fnPtr_4 = (func_ptr_t )swi(3);
        (*fnPtr_4)();
        return;
      }
      uVal_18 = 0xf;
      pU64_19 = local_f8;
      if (0xf < sz_10) {
        uVal_11 = sz_10 | 0xf;
        uVal_18 = 0x16;
        if (0x16 < uVal_11) {
          uVal_18 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          pU64_19 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
        }
        else {
          lVal_12 = func_0x180672de0(uVal_18 + 0x28);
          pU64_19 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_19 + -8) = lVal_12;
        }
        local_f8._0_8_ = pU64_19;
      }
      local_e8 = sz_10;
      uStack_e0 = uVal_18;
      func_0x1806aa960(pU64_19,_Str_01,sz_10);
      pU64_19[sz_10] = 0;
      if (0xf < uStack_a0) {
        uVal_18 = uStack_a0 + 1;
        lVal_12 = local_b8._0_8_;
        if (0xfff < uVal_18) {
          lVal_12 = *(int64_t *)(local_b8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_12)) goto LAB_1801d98c9;
          uVal_18 = uStack_a0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_12,uVal_18);
      }
      uStack_a0._0_4_ = (uint32_t)uStack_e0;
      local_a8 = (uint8_t  [8])local_e8;
      uStack_a0._4_4_ = uStack_e0._4_4_;
      local_b8 = local_f8;
      goto LAB_1801d8f74;
    }
    bFlag_5 = false;
    bFlag_20 = false;
joined_r0x0001801d8e07:
    if (uStack_e0 < 0x10) goto LAB_1801d8e09;
LAB_1801d8e20:
    uVal_11 = uVal_18 + 1;
    pU64_15 = pU64_19;
    if (0xfff < uVal_11) {
      pU64_15 = *(uint8_t **)(pU64_19 + -8);
      if ((uint8_t *)0x1f < pU64_19 + (-8 - (int64_t)pU64_15)) goto LAB_1801d98c9;
      uVal_11 = uVal_18 + 0x28;
    }
    thunk_FUN_180695dd0(pU64_15,uVal_11);
    if (bFlag_5) goto LAB_1801d8e5d;
LAB_1801d8f74:
    local_108[0] = 0;
    local_100 = 0;
    if (*(uint *)pArr16_2[4] < 9) {
      switch(*(uint *)pArr16_2[4]) {
      case 0:
        local_98._0_8_ = local_b8;
        if (0xf < uStack_a0) {
          local_98._0_8_ = local_b8._0_8_;
        }
        func_0x1801d9bd0(local_d0,local_f8,local_98,*(uint64_t *)(pArr16_2[4] + 8));
        _Str_01 = local_c0;
        break;
      case 1:
        local_98._0_8_ = local_b8;
        if (0xf < uStack_a0) {
          local_98._0_8_ = local_b8._0_8_;
        }
        func_0x1801d9d70(local_d0,local_f8,local_98,*(uint64_t *)(pArr16_2[4] + 8));
        _Str_01 = local_c0;
        break;
      case 2:
        local_98._0_8_ = local_b8;
        if (0xf < uStack_a0) {
          local_98._0_8_ = local_b8._0_8_;
        }
        func_0x1801d9f10(local_d0,local_f8,local_98,*(uint64_t *)(pArr16_2[4] + 8));
        _Str_01 = local_c0;
        break;
      default:
        local_98._0_8_ = local_b8;
        if (0xf < uStack_a0) {
          local_98._0_8_ = local_b8._0_8_;
        }
        func_0x1801da0b0(local_d0,local_f8,local_98,*(uint64_t *)(pArr16_2[4] + 8));
        _Str_01 = local_c0;
        break;
      case 4:
        uVal_3 = *(uint64_t *)(pArr16_2[4] + 8);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x75b0) == '\0') {
          lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_12 + 0x75b0) = 1;
          *(uint8_t *)(lVal_12 + 0x75ac) = 1;
          *(uint32_t *)(lVal_12 + 0x75a8) = 0xd179f643;
          func_0x180673140(&LAB_180211400);
          ch_1 = *(char *)(local_130 + 1);
        }
        else {
          ch_1 = *(char *)(local_130 + 1);
        }
        if (ch_1 == '\x01') {
          *local_130 = *local_130 ^ 0xd11d9331;
          *(uint8_t *)(local_130 + 1) = 0;
        }
        local_88._0_16_ = ZEXT816(0);
        local_98 = ZEXT816(0);
        sz_10 = strlen((char *)local_130);
        if ((int64_t)sz_10 < 0) goto LAB_1801d98e3;
        uVal_18 = 0xf;
        pU64_19 = local_98;
        if (0xf < sz_10) {
          uVal_11 = sz_10 | 0xf;
          uVal_18 = 0x16;
          if (0x16 < uVal_11) {
            uVal_18 = uVal_11;
          }
          if (uVal_11 < 0xfff) {
            pU64_19 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
          }
          else {
            lVal_12 = func_0x180672de0(uVal_18 + 0x28);
            pU64_19 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_19 + -8) = lVal_12;
          }
          local_98._0_8_ = pU64_19;
        }
        local_88._0_8_ = sz_10;
        local_88._8_8_ = uVal_18;
        func_0x1806aa960(pU64_19,local_130,sz_10);
        pU64_19[sz_10] = 0;
        func_0x180136960(local_108,local_f8,local_98,uVal_3);
        if (0xf < (uint64_t)local_88._8_8_) {
          uVal_18 = local_88._8_8_ + 1;
          lVal_12 = local_98._0_8_;
          if (0xfff < uVal_18) {
            lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
            if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_1801d98c9;
            uVal_18 = local_88._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_18);
        }
        lVal_12 = *(int64_t *)(pArr16_2[4] + 8);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x75bc) == '\0') {
          lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_13 + 0x75bc) = 1;
          *(uint8_t *)(lVal_13 + 0x75ba) = 1;
          *(uint32_t *)(lVal_13 + 0x75b4) = 0x4c14513a;
          *(uint16_t *)(lVal_13 + 0x75b8) = 0x1fe9;
          func_0x180673140(&LAB_180211420);
          ch_1 = *(char *)((int64_t)local_128 + 6);
        }
        else {
          ch_1 = *(char *)((int64_t)local_128 + 6);
        }
        if (ch_1 == '\x01') {
          *local_128 = *local_128 ^ 0x2971235d;
          *(byte *)(local_128 + 1) = *(byte *)(local_128 + 1) ^ 0x87;
          *(byte *)((int64_t)local_128 + 5) = *(byte *)((int64_t)local_128 + 5) ^ 0x1f;
          *(uint8_t *)((int64_t)local_128 + 6) = 0;
        }
        local_88._0_16_ = ZEXT816(0);
        local_98 = ZEXT816(0);
        sz_10 = strlen((char *)local_128);
        if ((int64_t)sz_10 < 0) goto LAB_1801d98dd;
        uVal_18 = 0xf;
        pU64_19 = local_98;
        if (0xf < sz_10) {
          uVal_11 = sz_10 | 0xf;
          uVal_18 = 0x16;
          if (0x16 < uVal_11) {
            uVal_18 = uVal_11;
          }
          if (uVal_11 < 0xfff) {
            pU64_19 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
          }
          else {
            lVal_13 = func_0x180672de0(uVal_18 + 0x28);
            pU64_19 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_19 + -8) = lVal_13;
          }
          local_98._0_8_ = pU64_19;
        }
        local_88._0_8_ = sz_10;
        local_88._8_8_ = uVal_18;
        func_0x1806aa960(pU64_19,local_128,sz_10);
        pU64_19[sz_10] = 0;
        func_0x180136960(local_108,local_f8,local_98,lVal_12 + 4);
        if (0xf < (uint64_t)local_88._8_8_) {
          uVal_18 = local_88._8_8_ + 1;
          lVal_12 = local_98._0_8_;
          if (0xfff < uVal_18) {
            lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
            if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_1801d98c9;
            uVal_18 = local_88._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_18);
        }
        lVal_12 = *(int64_t *)(pArr16_2[4] + 8);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x75c8) == '\0') {
          lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_13 + 0x75c8) = 1;
          *(uint32_t *)(lVal_13 + 0x75c0) = 0xfa7ed793;
          *(uint16_t *)(lVal_13 + 0x75c4) = 0x1c9;
          func_0x180673140(&LAB_180211450);
          ch_1 = *(char *)((int64_t)local_120 + 5);
        }
        else {
          ch_1 = *(char *)((int64_t)local_120 + 5);
        }
        if (ch_1 == '\x01') {
          *local_120 = *local_120 ^ 0x9f0bbbf1;
          *(byte *)(local_120 + 1) = *(byte *)(local_120 + 1) ^ 0xc9;
          *(uint8_t *)((int64_t)local_120 + 5) = 0;
        }
        local_88._0_16_ = ZEXT816(0);
        local_98 = ZEXT816(0);
        sz_10 = strlen((char *)local_120);
        if ((int64_t)sz_10 < 0) goto LAB_1801d98d7;
        uVal_18 = 0xf;
        pU64_19 = local_98;
        if (0xf < sz_10) {
          uVal_11 = sz_10 | 0xf;
          uVal_18 = 0x16;
          if (0x16 < uVal_11) {
            uVal_18 = uVal_11;
          }
          if (uVal_11 < 0xfff) {
            pU64_19 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
          }
          else {
            lVal_13 = func_0x180672de0(uVal_18 + 0x28);
            pU64_19 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_19 + -8) = lVal_13;
          }
          local_98._0_8_ = pU64_19;
        }
        local_88._8_8_ = uVal_18;
        local_88._0_8_ = sz_10;
        func_0x1806aa960(pU64_19,local_120,sz_10);
        pU64_19[sz_10] = 0;
        func_0x180136960(local_108,local_f8,local_98,lVal_12 + 8);
        _Str_00 = local_118;
        if (0xf < (uint64_t)local_88._8_8_) {
          uVal_18 = local_88._8_8_ + 1;
          lVal_12 = local_98._0_8_;
          if (0xfff < uVal_18) {
            lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
            if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_1801d98c9;
            uVal_18 = local_88._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_18);
        }
        if (pArr16_2[9][0] != '\x05') goto LAB_1801d98d1;
        if ((*(float *)(pArr16_2[5] + 0xc) != fVal_6) ||
           (NAN(*(float *)(pArr16_2[5] + 0xc)) || NAN(fVal_6))) {
          lVal_12 = *(int64_t *)(pArr16_2[4] + 8);
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x75d4)
              == '\0') {
            lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_13 + 0x75d4) = 1;
            *(uint8_t *)(lVal_13 + 0x75d2) = 1;
            *(uint32_t *)(lVal_13 + 0x75cc) = 0x710913e6;
            *(uint16_t *)(lVal_13 + 0x75d0) = 0xefb8;
            func_0x180673140(&LAB_180211480);
            ch_1 = *(char *)((int64_t)_Str_00 + 6);
          }
          else {
            ch_1 = *(char *)((int64_t)_Str_00 + 6);
          }
          if (ch_1 == '\x01') {
            *_Str_00 = *_Str_00 ^ 0x19797f87;
            *(byte *)(_Str_00 + 1) = *(byte *)(_Str_00 + 1) ^ 0xd9;
            *(byte *)((int64_t)_Str_00 + 5) = *(byte *)((int64_t)_Str_00 + 5) ^ 0xef;
            *(uint8_t *)((int64_t)_Str_00 + 6) = 0;
          }
          local_88._0_16_ = ZEXT816(0);
          local_98 = ZEXT816(0);
          sz_10 = strlen((char *)_Str_00);
          if ((int64_t)sz_10 < 0) goto LAB_1801d98e9;
          uVal_18 = 0xf;
          pU64_19 = local_98;
          if (0xf < sz_10) {
            uVal_11 = sz_10 | 0xf;
            uVal_18 = 0x16;
            if (0x16 < uVal_11) {
              uVal_18 = uVal_11;
            }
            if (uVal_11 < 0xfff) {
              pU64_19 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
            }
            else {
              lVal_13 = func_0x180672de0(uVal_18 + 0x28);
              pU64_19 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_19 + -8) = lVal_13;
            }
            local_98._0_8_ = pU64_19;
          }
          local_88._8_8_ = uVal_18;
          local_88._0_8_ = sz_10;
          func_0x1806aa960(pU64_19,local_118,sz_10);
          pU64_19[sz_10] = 0;
          func_0x180136960(local_108,local_f8,local_98,lVal_12 + 0xc);
          if (0xf < (uint64_t)local_88._8_8_) {
            uVal_18 = local_88._8_8_ + 1;
            lVal_12 = local_98._0_8_;
            if (0xfff < uVal_18) {
              lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
              if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_1801d98c9;
              uVal_18 = local_88._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_12,uVal_18);
          }
        }
        local_98._0_8_ = local_b8;
        if (0xf < uStack_a0) {
          local_98._0_8_ = local_b8._0_8_;
        }
        func_0x180136b00(local_d0,local_f8,local_98,local_108);
        _Str_01 = local_c0;
        break;
      case 5:
        local_98._0_8_ = local_b8;
        if (0xf < uStack_a0) {
          local_98._0_8_ = local_b8._0_8_;
        }
        func_0x1801da250(local_d0,local_f8,local_98,*(uint64_t *)(pArr16_2[4] + 8));
        _Str_01 = local_c0;
        break;
      case 6:
        local_98._0_8_ = *(uint64_t *)(pArr16_2[4] + 8);
        if (0xf < *(uint64_t *)(local_98._0_8_ + 0x18)) {
          local_98._0_8_ = *(uint64_t *)local_98._0_8_;
        }
        local_160 = local_b8;
        if (0xf < uStack_a0) {
          local_160 = (uint8_t *)local_b8._0_8_;
        }
        func_0x18018c230(local_d0,local_f8,&local_160,local_98);
        _Str_01 = local_c0;
        break;
      case 7:
        local_98._0_8_ = local_b8;
        if (0xf < uStack_a0) {
          local_98._0_8_ = local_b8._0_8_;
        }
        func_0x1801da0b0(local_d0,local_f8,local_98,*(uint64_t *)(pArr16_2[4] + 8));
        _Str_01 = local_c0;
      }
    }
    func_0x180084c70(&local_100,local_108[0]);
    if (0xf < uStack_a0) {
      uVal_18 = uStack_a0 + 1;
      lVal_12 = local_b8._0_8_;
      if (0xfff < uVal_18) {
        lVal_12 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_12)) goto LAB_1801d98c9;
        uVal_18 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_18);
    }
    ptr2_Arr16_17 = ptr2_Arr16_17 + 1;
  } while( true );
}

// Unwind@1801d98f0
void Unwind_1801d98f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1801d9940
void Unwind_1801d9940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1801d9990
void Unwind_1801d9990(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1801d99e0
void Unwind_1801d99e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1801d9a30
void Unwind_1801d9a30(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x80);
  return;
}

// Unwind@1801d9a80
void Unwind_1801d9a80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1801d9ad0
void Unwind_1801d9ad0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801d9b00
void Unwind_1801d9b00(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0xb8);
  return;
}

// Unwind@1801d9b50
void Unwind_1801d9b50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x38);
  return;
}

// Unwind@1801d9ba0
void Unwind_1801d9ba0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1801d9bd0
byte ** func_0x1801d9bd0(byte *param_1,byte **param_2,uint64_t param_3,uint64_t param_4)
{
  byte bFlag_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  byte **ptr2_Byte_4;
  uint8_t (*pArr16_5)[16];
  byte *pU8_6;
  byte *pU8_7;
  uint8_t local_98 [56];
  byte *local_60;
  uint8_t local_58;
  uint64_t local_40;
  uint8_t (*local_38)[16];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    *param_1 = 1;
    local_38 = (uint8_t (*)[16])func_0x180672de0(0x10);
    *local_38 = ZEXT816(0);
    lVal_3 = func_0x180672de0(0x50);
    *(int64_t *)lVal_3 = lVal_3;
    *(int64_t *)(lVal_3 + 8) = lVal_3;
    *(int64_t *)(lVal_3 + 0x10) = lVal_3;
    *(uint16_t *)(lVal_3 + 0x18) = 0x101;
    *(int64_t *)*local_38 = lVal_3;
    *(uint8_t (**)[16])(param_1 + 8) = local_38;
    pArr16_5 = local_38;
  }
  else {
    if (*param_1 != 1) {
      local_40 = func_0x1800833d0(param_1);
      func_0x180083260(&local_60,"cannot use emplace() with ",&local_40);
      func_0x180082f00(local_98,0x137,&local_60,param_1);
      func_0x18067a120(local_98,&DAT_180768700);
      fnPtr_2 = (func_ptr_t )swi(3);
      ptr2_Byte_4 = (byte **)(*fnPtr_2)();
      return ptr2_Byte_4;
    }
    pArr16_5 = *(uint8_t (**)[16])(param_1 + 8);
  }
  func_0x180215ad0(pArr16_5,&local_60,param_3,param_4);
  bFlag_1 = *param_1;
  pU8_6 = (byte *)(uint64_t)bFlag_1;
  if (bFlag_1 == 0) {
    pU8_7 = (byte *)0x1;
  }
  else if (bFlag_1 == 2) {
    pU8_6 = **(byte ***)(param_1 + 8);
    pU8_7 = (byte *)0x8000000000000000;
  }
  else if (bFlag_1 == 1) {
    pU8_7 = (byte *)0x8000000000000000;
    pU8_6 = (byte *)0x0;
  }
  else {
    pU8_6 = (byte *)0x0;
    pU8_7 = (byte *)0x0;
  }
  *param_2 = param_1;
  param_2[1] = local_60;
  param_2[2] = pU8_6;
  param_2[3] = pU8_7;
  *(uint8_t *)(param_2 + 4) = local_58;
  return param_2;
}

// Unwind@1801d9d10
void Unwind_1801d9d10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// Unwind@1801d9d40
void Unwind_1801d9d40(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x80),0x10);
  return;
}

// func_0x1801d9d70
byte ** func_0x1801d9d70(byte *param_1,byte **param_2,uint64_t param_3,uint64_t param_4)
{
  byte bFlag_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  byte **ptr2_Byte_4;
  uint8_t (*pArr16_5)[16];
  byte *pU8_6;
  byte *pU8_7;
  uint8_t local_98 [56];
  byte *local_60;
  uint8_t local_58;
  uint64_t local_40;
  uint8_t (*local_38)[16];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    *param_1 = 1;
    local_38 = (uint8_t (*)[16])func_0x180672de0(0x10);
    *local_38 = ZEXT816(0);
    lVal_3 = func_0x180672de0(0x50);
    *(int64_t *)lVal_3 = lVal_3;
    *(int64_t *)(lVal_3 + 8) = lVal_3;
    *(int64_t *)(lVal_3 + 0x10) = lVal_3;
    *(uint16_t *)(lVal_3 + 0x18) = 0x101;
    *(int64_t *)*local_38 = lVal_3;
    *(uint8_t (**)[16])(param_1 + 8) = local_38;
    pArr16_5 = local_38;
  }
  else {
    if (*param_1 != 1) {
      local_40 = func_0x1800833d0(param_1);
      func_0x180083260(&local_60,"cannot use emplace() with ",&local_40);
      func_0x180082f00(local_98,0x137,&local_60,param_1);
      func_0x18067a120(local_98,&DAT_180768700);
      fnPtr_2 = (func_ptr_t )swi(3);
      ptr2_Byte_4 = (byte **)(*fnPtr_2)();
      return ptr2_Byte_4;
    }
    pArr16_5 = *(uint8_t (**)[16])(param_1 + 8);
  }
  func_0x180215f50(pArr16_5,&local_60,param_3,param_4);
  bFlag_1 = *param_1;
  pU8_6 = (byte *)(uint64_t)bFlag_1;
  if (bFlag_1 == 0) {
    pU8_7 = (byte *)0x1;
  }
  else if (bFlag_1 == 2) {
    pU8_6 = **(byte ***)(param_1 + 8);
    pU8_7 = (byte *)0x8000000000000000;
  }
  else if (bFlag_1 == 1) {
    pU8_7 = (byte *)0x8000000000000000;
    pU8_6 = (byte *)0x0;
  }
  else {
    pU8_6 = (byte *)0x0;
    pU8_7 = (byte *)0x0;
  }
  *param_2 = param_1;
  param_2[1] = local_60;
  param_2[2] = pU8_6;
  param_2[3] = pU8_7;
  *(uint8_t *)(param_2 + 4) = local_58;
  return param_2;
}

// Unwind@1801d9eb0
void Unwind_1801d9eb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// Unwind@1801d9ee0
void Unwind_1801d9ee0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x80),0x10);
  return;
}

// func_0x1801d9f10
byte ** func_0x1801d9f10(byte *param_1,byte **param_2,uint64_t param_3,uint64_t param_4)
{
  byte bFlag_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  byte **ptr2_Byte_4;
  uint8_t (*pArr16_5)[16];
  byte *pU8_6;
  byte *pU8_7;
  uint8_t local_98 [56];
  byte *local_60;
  uint8_t local_58;
  uint64_t local_40;
  uint8_t (*local_38)[16];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    *param_1 = 1;
    local_38 = (uint8_t (*)[16])func_0x180672de0(0x10);
    *local_38 = ZEXT816(0);
    lVal_3 = func_0x180672de0(0x50);
    *(int64_t *)lVal_3 = lVal_3;
    *(int64_t *)(lVal_3 + 8) = lVal_3;
    *(int64_t *)(lVal_3 + 0x10) = lVal_3;
    *(uint16_t *)(lVal_3 + 0x18) = 0x101;
    *(int64_t *)*local_38 = lVal_3;
    *(uint8_t (**)[16])(param_1 + 8) = local_38;
    pArr16_5 = local_38;
  }
  else {
    if (*param_1 != 1) {
      local_40 = func_0x1800833d0(param_1);
      func_0x180083260(&local_60,"cannot use emplace() with ",&local_40);
      func_0x180082f00(local_98,0x137,&local_60,param_1);
      func_0x18067a120(local_98,&DAT_180768700);
      fnPtr_2 = (func_ptr_t )swi(3);
      ptr2_Byte_4 = (byte **)(*fnPtr_2)();
      return ptr2_Byte_4;
    }
    pArr16_5 = *(uint8_t (**)[16])(param_1 + 8);
  }
  func_0x1802163d0(pArr16_5,&local_60,param_3,param_4);
  bFlag_1 = *param_1;
  pU8_6 = (byte *)(uint64_t)bFlag_1;
  if (bFlag_1 == 0) {
    pU8_7 = (byte *)0x1;
  }
  else if (bFlag_1 == 2) {
    pU8_6 = **(byte ***)(param_1 + 8);
    pU8_7 = (byte *)0x8000000000000000;
  }
  else if (bFlag_1 == 1) {
    pU8_7 = (byte *)0x8000000000000000;
    pU8_6 = (byte *)0x0;
  }
  else {
    pU8_6 = (byte *)0x0;
    pU8_7 = (byte *)0x0;
  }
  *param_2 = param_1;
  param_2[1] = local_60;
  param_2[2] = pU8_6;
  param_2[3] = pU8_7;
  *(uint8_t *)(param_2 + 4) = local_58;
  return param_2;
}

// Unwind@1801da050
void Unwind_1801da050(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// Unwind@1801da080
void Unwind_1801da080(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x80),0x10);
  return;
}

// func_0x1801da0b0
byte ** func_0x1801da0b0(byte *param_1,byte **param_2,uint64_t param_3,uint64_t param_4)
{
  byte bFlag_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  byte **ptr2_Byte_4;
  uint8_t (*pArr16_5)[16];
  byte *pU8_6;
  byte *pU8_7;
  uint8_t local_98 [56];
  byte *local_60;
  uint8_t local_58;
  uint64_t local_40;
  uint8_t (*local_38)[16];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    *param_1 = 1;
    local_38 = (uint8_t (*)[16])func_0x180672de0(0x10);
    *local_38 = ZEXT816(0);
    lVal_3 = func_0x180672de0(0x50);
    *(int64_t *)lVal_3 = lVal_3;
    *(int64_t *)(lVal_3 + 8) = lVal_3;
    *(int64_t *)(lVal_3 + 0x10) = lVal_3;
    *(uint16_t *)(lVal_3 + 0x18) = 0x101;
    *(int64_t *)*local_38 = lVal_3;
    *(uint8_t (**)[16])(param_1 + 8) = local_38;
    pArr16_5 = local_38;
  }
  else {
    if (*param_1 != 1) {
      local_40 = func_0x1800833d0(param_1);
      func_0x180083260(&local_60,"cannot use emplace() with ",&local_40);
      func_0x180082f00(local_98,0x137,&local_60,param_1);
      func_0x18067a120(local_98,&DAT_180768700);
      fnPtr_2 = (func_ptr_t )swi(3);
      ptr2_Byte_4 = (byte **)(*fnPtr_2)();
      return ptr2_Byte_4;
    }
    pArr16_5 = *(uint8_t (**)[16])(param_1 + 8);
  }
  func_0x180216850(pArr16_5,&local_60,param_3,param_4);
  bFlag_1 = *param_1;
  pU8_6 = (byte *)(uint64_t)bFlag_1;
  if (bFlag_1 == 0) {
    pU8_7 = (byte *)0x1;
  }
  else if (bFlag_1 == 2) {
    pU8_6 = **(byte ***)(param_1 + 8);
    pU8_7 = (byte *)0x8000000000000000;
  }
  else if (bFlag_1 == 1) {
    pU8_7 = (byte *)0x8000000000000000;
    pU8_6 = (byte *)0x0;
  }
  else {
    pU8_6 = (byte *)0x0;
    pU8_7 = (byte *)0x0;
  }
  *param_2 = param_1;
  param_2[1] = local_60;
  param_2[2] = pU8_6;
  param_2[3] = pU8_7;
  *(uint8_t *)(param_2 + 4) = local_58;
  return param_2;
}

// Unwind@1801da1f0
void Unwind_1801da1f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// Unwind@1801da220
void Unwind_1801da220(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x80),0x10);
  return;
}

// func_0x1801da250
byte ** func_0x1801da250(byte *param_1,byte **param_2,uint64_t param_3,uint64_t param_4)
{
  byte bFlag_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  byte **ptr2_Byte_4;
  uint8_t (*pArr16_5)[16];
  byte *pU8_6;
  byte *pU8_7;
  uint8_t local_98 [56];
  byte *local_60;
  uint8_t local_58;
  uint64_t local_40;
  uint8_t (*local_38)[16];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    *param_1 = 1;
    local_38 = (uint8_t (*)[16])func_0x180672de0(0x10);
    *local_38 = ZEXT816(0);
    lVal_3 = func_0x180672de0(0x50);
    *(int64_t *)lVal_3 = lVal_3;
    *(int64_t *)(lVal_3 + 8) = lVal_3;
    *(int64_t *)(lVal_3 + 0x10) = lVal_3;
    *(uint16_t *)(lVal_3 + 0x18) = 0x101;
    *(int64_t *)*local_38 = lVal_3;
    *(uint8_t (**)[16])(param_1 + 8) = local_38;
    pArr16_5 = local_38;
  }
  else {
    if (*param_1 != 1) {
      local_40 = func_0x1800833d0(param_1);
      func_0x180083260(&local_60,"cannot use emplace() with ",&local_40);
      func_0x180082f00(local_98,0x137,&local_60,param_1);
      func_0x18067a120(local_98,&DAT_180768700);
      fnPtr_2 = (func_ptr_t )swi(3);
      ptr2_Byte_4 = (byte **)(*fnPtr_2)();
      return ptr2_Byte_4;
    }
    pArr16_5 = *(uint8_t (**)[16])(param_1 + 8);
  }
  func_0x180216cd0(pArr16_5,&local_60,param_3,param_4);
  bFlag_1 = *param_1;
  pU8_6 = (byte *)(uint64_t)bFlag_1;
  if (bFlag_1 == 0) {
    pU8_7 = (byte *)0x1;
  }
  else if (bFlag_1 == 2) {
    pU8_6 = **(byte ***)(param_1 + 8);
    pU8_7 = (byte *)0x8000000000000000;
  }
  else if (bFlag_1 == 1) {
    pU8_7 = (byte *)0x8000000000000000;
    pU8_6 = (byte *)0x0;
  }
  else {
    pU8_6 = (byte *)0x0;
    pU8_7 = (byte *)0x0;
  }
  *param_2 = param_1;
  param_2[1] = local_60;
  param_2[2] = pU8_6;
  param_2[3] = pU8_7;
  *(uint8_t *)(param_2 + 4) = local_58;
  return param_2;
}

// Unwind@1801da390
void Unwind_1801da390(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// Unwind@1801da3c0
void Unwind_1801da3c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x80),0x10);
  return;
}

// Unwind@1801daeb0
void Unwind_1801daeb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801daef0
void Unwind_1801daef0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// Unwind@1801daf30
void Unwind_1801daf30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1801daf70
void Unwind_1801daf70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801dafb0
void Unwind_1801dafb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// Unwind@1801daff0
void Unwind_1801daff0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1801dbad0
void Unwind_1801dbad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801dbb10
void Unwind_1801dbb10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// Unwind@1801dbb50
void Unwind_1801dbb50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1801dbb90
void Unwind_1801dbb90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}
