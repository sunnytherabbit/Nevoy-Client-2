#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@18034a5f0
void Unwind_18034a5f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x284) = 0;
  return;
}

// Unwind@18034a640
void Unwind_18034a640(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x284);
  func_0x180001e70(param_2 + 0x240);
  *(uint8_t *)(param_2 + 0x28f) = 0;
  *(uint8_t *)(param_2 + 0x28e) = uVal_1;
  return;
}

// Unwind@18034a6a0
void Unwind_18034a6a0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x28e);
  ch_2 = *(char *)(param_2 + 0x28f);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x1b0);
  }
  *(char *)(param_2 + 0x28d) = ch_2;
  *(byte *)(param_2 + 0x28c) = bFlag_1 & 1;
  return;
}

// Unwind@18034a710
void Unwind_18034a710(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x28c);
  if (*(char *)(param_2 + 0x28d) == '\x01') {
    func_0x180001e70(param_2 + 0x150);
  }
  *(byte *)(param_2 + 0x28b) = bFlag_1 & 1;
  return;
}

// Unwind@18034a770
void Unwind_18034a770(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x28b);
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x296) = uVal_1;
  return;
}

// Unwind@18034a7c0
void Unwind_18034a7c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x296) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
  }
  return;
}

// Unwind@18034a820
void Unwind_18034a820(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x283) = 0;
  return;
}

// Unwind@18034a870
void Unwind_18034a870(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x283);
  func_0x180001e70(param_2 + 0x240);
  *(uint8_t *)(param_2 + 0x28a) = 0;
  *(uint8_t *)(param_2 + 0x289) = uVal_1;
  return;
}

// Unwind@18034a8d0
void Unwind_18034a8d0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x289);
  ch_2 = *(char *)(param_2 + 0x28a);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x1d0);
  }
  *(char *)(param_2 + 0x288) = ch_2;
  *(byte *)(param_2 + 0x287) = bFlag_1 & 1;
  return;
}

// Unwind@18034a940
void Unwind_18034a940(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x287);
  if (*(char *)(param_2 + 0x288) == '\x01') {
    func_0x180001e70(param_2 + 0x170);
  }
  *(byte *)(param_2 + 0x286) = bFlag_1 & 1;
  return;
}

// Unwind@18034a9a0
void Unwind_18034a9a0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x286);
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x295) = uVal_1;
  return;
}

// Unwind@18034a9f0
void Unwind_18034a9f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x295) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
  }
  return;
}

// Unwind@18034aa50
void Unwind_18034aa50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1014c) = 0;
  *(uint8_t *)(param_2 + 0x297) = 1;
  return;
}

// Unwind@18034aab0
void Unwind_18034aab0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10194) = 0;
  *(uint8_t *)(param_2 + 0x296) = 1;
  return;
}

// Unwind@18034ab10
void Unwind_18034ab10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x101f0) = 0;
  *(uint8_t *)(param_2 + 0x295) = 1;
  return;
}

// Unwind@18034ad60
void Unwind_18034ad60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x68);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x30));
  }
  return;
}

// func_0x18034add0
void func_0x18034add0(int64_t param_1)
{
  uint32_t *pU64_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint32_t *pU64_4;
  
  lVal_2 = func_0x1800cf950();
  if (lVal_2 != 0) {
    if (*(int64_t *)(param_1 + 0xb0) == 0) {
      uVal_3 = func_0x180672de0(0x250);
      func_0x1806ab010(uVal_3,0,0x250);
      *(uint64_t *)(param_1 + 0xb0) = uVal_3;
      func_0x1800feb00(uVal_3);
      if (*(int64_t *)(param_1 + 0x80) != *(int64_t *)(param_1 + 0x88)) goto LAB_18034ae16;
    }
    else {
      func_0x1800feb00();
      if (*(int64_t *)(param_1 + 0x80) != *(int64_t *)(param_1 + 0x88)) {
LAB_18034ae16:
        func_0x180107830(lVal_2,4,0,0);
        pU64_1 = *(uint32_t **)(param_1 + 0x88);
        for (pU64_4 = *(uint32_t **)(param_1 + 0x80); pU64_4 != pU64_1; pU64_4 = pU64_4 + 0xe) {
          func_0x180108220(lVal_2,pU64_4 + 6);
          func_0x180107cc0(lVal_2,*pU64_4,pU64_4[1],pU64_4[2]);
          func_0x180108220(lVal_2,pU64_4 + 10);
          func_0x180107cc0(lVal_2,pU64_4[3],pU64_4[4],pU64_4[5]);
        }
        func_0x180108350(lVal_2,*(uint64_t *)(param_1 + 0xb0));
        return;
      }
    }
  }
  return;
}

// func_0x18034aef0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x18034aef0(int64_t param_1)
{
  uint uVal_1;
  int64_t lVal_2;
  uint64_t *****ptr5_U64_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  float fVal_10;
  uint32_t unaff_XMM6_Db;
  float local_4c;
  uint64_t *****local_48 [2];
  uint64_t local_38;
  uint64_t local_30;
  
  lVal_2 = *(int64_t *)(param_1 + 0x10);
  pLong_4 = (int64_t *)
           (*(int64_t *)(lVal_2 + 0x48) +
           (uint64_t)
           (((uint)(*(int *)(lVal_2 + 0x50) - (int)*(int64_t *)(lVal_2 + 0x48)) >> 3) - 1 &
           0x18f957af) * 8);
  lVal_2 = *(int64_t *)(lVal_2 + 0x68);
  do {
    lVal_5 = *pLong_4 * 0x20;
    pLong_4 = (int64_t *)(lVal_2 + lVal_5);
  } while (*(int *)(lVal_2 + 8 + lVal_5) != 0x18f957af);
  lVal_2 = *(int64_t *)(lVal_5 + 0x10 + lVal_2);
  uVal_1 = *(uint *)(*(int64_t *)
                     (*(int64_t *)(lVal_2 + 8) +
                     (uint64_t)((*(uint *)(param_1 + 0x18) & 0x3f800) >> 8)) +
                   (uint64_t)(*(uint *)(param_1 + 0x18) & 0x7ff) * 4);
  local_4c = (float)*(int64_t *)
                     (*(int64_t *)
                       (*(int64_t *)(lVal_2 + 0x50) + (uint64_t)((uVal_1 & 0x3ff80) >> 4)) +
                     (uint64_t)(uVal_1 & 0x7f) * 8) + _DAT_1806c3b00;
  func_0x18034b0f0(local_48,&local_4c);
  ptr5_U64_3 = local_48;
  if (0xf < local_30) {
    ptr5_U64_3 = local_48[0];
  }
  if (local_38 == 0) {
    unaff_XMM6_Db = 0;
    fVal_10 = DAT_1806c3b04;
    goto joined_r0x00018034afdf;
  }
  uVal_6 = (uint64_t)((uint)local_38 & 3);
  if (local_38 < 4) {
    uVal_7 = 0xcbf29ce484222325;
    uVal_9 = 0;
LAB_18034b041:
    uVal_8 = 0;
    do {
      uVal_7 = (*(byte *)((int64_t)ptr5_U64_3 + uVal_8 + uVal_9) ^ uVal_7) * 0x100000001b3;
      uVal_8 = uVal_8 + 1;
    } while (uVal_6 != uVal_8);
  }
  else {
    uVal_7 = 0xcbf29ce484222325;
    uVal_9 = 0;
    do {
      uVal_7 = ((uint64_t)*(byte *)((int64_t)ptr5_U64_3 + uVal_9 + 3) ^
              ((uint64_t)*(byte *)((int64_t)ptr5_U64_3 + uVal_9 + 2) ^
              ((uint64_t)*(byte *)((int64_t)ptr5_U64_3 + uVal_9 + 1) ^
              (*(byte *)((int64_t)ptr5_U64_3 + uVal_9) ^ uVal_7) * 0x100000001b3) * 0x100000001b3) *
              0x100000001b3) * 0x100000001b3;
      uVal_9 = uVal_9 + 4;
    } while ((local_38 & 0xfffffffffffffffc) != uVal_9);
    if (uVal_6 != 0) goto LAB_18034b041;
  }
  fVal_10 = (float)((int)uVal_7 + (int)(uVal_7 / 1000) * -1000) * _DAT_1806be6b4;
joined_r0x00018034afdf:
  if (0xf < local_30) {
    uVal_6 = local_30 + 1;
    ptr5_U64_3 = local_48[0];
    if (0xfff < uVal_6) {
      ptr5_U64_3 = (uint64_t *****)local_48[0][-1];
      if (0x1f < (uint64_t)((int64_t)local_48[0] + (-8 - (int64_t)ptr5_U64_3))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = local_30 + 0x28;
    }
    thunk_FUN_180695dd0(ptr5_U64_3,uVal_6);
  }
  return CONCAT44(unaff_XMM6_Db,fVal_10 / _DAT_1806be5c0);
}

// func_0x18034b0f0
uint8_t (*func_0x18034b0f0(uint8_t (*param_1)[16],uint32_t *param_2))[16]
{
  func_ptr_t fnPtr_1;
  uint8_t *pU64_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t (*pArr16_6)[16];
  uint64_t uVal_7;
  uint8_t *local_258;
  uint64_t local_250;
  uint64_t local_248;
  func_ptr_t local_240;
  uint8_t local_238 [504];
  uint8_t local_40 [8];
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_250 = 0;
  local_240 = func_0x1800b02d0;
  local_258 = local_238;
  local_248 = 500;
  func_0x180369b60(local_40,&local_258,*param_2);
  uVal_3 = local_250;
  pU64_2 = local_258;
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  if (-1 < (int64_t)local_250) {
    uVal_7 = 0xf;
    pArr16_6 = param_1;
    if (0xf < local_250) {
      uVal_4 = local_250 | 0xf;
      uVal_7 = 0x16;
      if (0x16 < uVal_4) {
        uVal_7 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        pArr16_6 = (uint8_t (*)[16])func_0x180672de0(uVal_7 + 1);
      }
      else {
        lVal_5 = func_0x180672de0(uVal_7 + 0x28);
        pArr16_6 = (uint8_t (*)[16])(lVal_5 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_6[-1] + 8) = lVal_5;
      }
      *(uint8_t (**)[16])*param_1 = pArr16_6;
    }
    *(uint64_t *)param_1[1] = uVal_3;
    *(uint64_t *)(param_1[1] + 8) = uVal_7;
    func_0x1806aa960(pArr16_6,pU64_2,uVal_3);
    (*pArr16_6)[uVal_3] = 0;
    if (local_258 != local_238) {
      thunk_FUN_180695dd0();
    }
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_6 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_6;
}

// Unwind@18034b210
void Unwind_18034b210(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x20) != param_2 + 0x40) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x18034b250
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18034b250(int64_t param_1,uint64_t *param_2,uint64_t param_3,float *param_4, float param_5)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int iVal_4;
  int iVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  uint8_t auArr_9 [16];
  uint8_t in_XMM1 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  uint8_t auArr_12 [16];
  float fVal_13;
  float fVal_14;
  uint8_t auArr_15 [16];
  uint64_t local_a0;
  uint64_t uStack_98;
  uint64_t local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint64_t local_78;
  uint8_t *local_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  int64_t local_58;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  auArr_10._4_12_ = in_XMM1._4_12_;
  auArr_10._0_4_ = (float)*(int *)(param_2 + 1) - *(float *)(param_1 + 0xa0);
  fVal_13 = ((float)(int)*param_2 - (float)*(uint64_t *)(param_1 + 0x98)) - (param_5 + param_5);
  fVal_14 = ((float)(int)(*param_2 >> 0x20) -
           (float)((uint64_t)*(uint64_t *)(param_1 + 0x98) >> 0x20)) - (param_5 + param_5);
  auArr_11 = insertps(auArr_10,ZEXT416((uint)(DAT_1806b26b4 + fVal_13)),0x10);
  auArr_15._0_8_ =
       CONCAT44(param_5 * _UNK_1806c3b14 + auArr_11._4_4_,param_5 * _DAT_1806c3b10 + auArr_11._0_4_);
  auArr_15._8_4_ = _UNK_1806c3b18 * 0.0 + auArr_11._8_4_;
  auArr_15._12_4_ = _UNK_1806c3b1c * 0.0 + auArr_11._12_4_;
  local_a0 = CONCAT44(fVal_14,fVal_13);
  auArr_11._4_4_ = fVal_14;
  auArr_11._0_4_ = fVal_13;
  auArr_11._8_8_ = 0;
  auArr_11 = blendps(auArr_15,auArr_11,2);
  local_90 = CONCAT44(param_5 * DAT_1806b55e0 + auArr_11._0_4_ + DAT_1806b28f0._4_4_,
                      param_5 * DAT_1806b55e0 + auArr_11._4_4_ + (float)DAT_1806b28f0);
  local_68._4_4_ = param_4[1] * _UNK_1806c3b24;
  local_68._0_4_ = *param_4 * _DAT_1806c3b20;
  uStack_60._0_4_ = param_4[2] * _UNK_1806c3b28;
  uStack_60._4_4_ = param_4[3] * _UNK_1806c3b2c;
  uStack_98 = auArr_15._0_8_;
  func_0x18034b8c0(param_1,&local_a0,local_68);
  _local_68 = ZEXT816(0);
  local_58 = 0;
  uVal_1 = func_0x180127530(param_3);
  auArr_12._4_4_ = 0;
  auArr_12._0_4_ = *(uint *)(param_2 + 1);
  auArr_12._8_4_ = *(uint *)(param_2 + 1);
  auArr_12._12_4_ = 0;
  auArr_9._8_4_ = 0;
  auArr_9._0_8_ = *param_2;
  auArr_9._12_4_ = (int)*param_2;
  auArr_11 = pblendw(auArr_9,auArr_12,0x30);
  local_88 = _DAT_1806c3b30 + (float)auArr_11._0_4_;
  fStack_84 = _UNK_1806c3b34 + (float)auArr_11._4_4_;
  fStack_80 = _UNK_1806c3b38 + (float)auArr_11._8_4_;
  fStack_7c = _UNK_1806c3b3c + (float)auArr_11._12_4_;
  local_78 = CONCAT44((float)auArr_11._8_4_ + _UNK_1806c3b44,(float)auArr_11._4_4_ + _DAT_1806c3b40);
  local_70 = &DAT_28d478d88fb3dcdf;
  DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
  if (DAT_180840a60 == 0) {
    DAT_180840a68 = 0;
  }
  uVal_2 = func_0x180125e40(DAT_180840a60);
  func_0x180128160(uVal_1,param_3,uVal_2,param_2,&local_88,local_68);
  lVal_6 = (int64_t)local_68;
  if (local_68 != (uint8_t  [8])uStack_60) {
    func_0x18034b8c0(param_1,local_68,param_4);
    iVal_4 = SUB164(_local_68,8);
    iVal_5 = SUB164(_local_68,0);
    for (uVal_8 = 1; uVal_3 = (uStack_60 - (int64_t)local_68 >> 3) * -0x5555555555555555,
        lVal_6 = (int64_t)local_68, uVal_8 <= uVal_3 && uVal_3 - uVal_8 != 0;
        uVal_8 = (uint64_t)((int)uVal_8 + 1)) {
      lVal_6 = (int64_t)local_68 + uVal_8 * 0x18;
      func_0x18034b540(&local_88,param_4,
                    (float)(int)uVal_8 / (float)(((uint)(iVal_4 - iVal_5) >> 3) * 0x55555558));
      func_0x18034b8c0(param_1,lVal_6,&local_88);
    }
  }
  if (lVal_6 != 0) {
    uVal_8 = local_58 - lVal_6;
    lVal_7 = lVal_6;
    if (0xfff < uVal_8) {
      lVal_7 = *(int64_t *)(lVal_6 + -8);
      if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_7)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_8 = uVal_8 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_8);
  }
  return;
}

// Unwind@18034b500
void Unwind_18034b500(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x70);
  return;
}

// func_0x18034b540
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18034b540(uint8_t (*param_1)[16],uint *param_2)
{
  uint uVal_1;
  uint32_t uVal_2;
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  float fVal_5;
  uint8_t in_XMM2 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [12];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  uint8_t auArr_12 [16];
  float fVal_13;
  uint8_t auArr_14 [16];
  uint8_t auArr_15 [16];
  uint8_t auArr_16 [12];
  float fVal_17;
  uint8_t auArr_18 [16];
  uint8_t auArr_19 [12];
  
  auArr_7 = ZEXT812(0);
  fVal_5 = in_XMM2._0_4_;
  if (0.0 <= fVal_5) {
    auArr_7._4_8_ = 0;
    auArr_7._0_4_ = fVal_5;
  }
  auArr_8._0_4_ = auArr_7._0_4_ * DAT_1806c3b50;
  auArr_8._4_8_ = auArr_7._4_8_;
  auArr_8._12_4_ = 0;
  auArr_8 = blendvps(auArr_8,_DAT_1806c3b60,ZEXT416(-(uint)(DAT_1806b26b4 < fVal_5)));
  uVal_2 = (uint32_t)((uint64_t)param_1 >> 0x20);
  uVal_1 = (uint)auArr_8._0_4_;
  auArr_9._4_12_ = in_XMM2._4_12_;
  if (uVal_1 < 6) {
    auArr_3._0_4_ = fVal_5 * DAT_1806c3b50 - (float)(int)auArr_8._0_4_;
    auArr_3._4_12_ = auArr_9._4_12_;
                    /* WARNING: Could not recover jumptable at 0x00018034b5cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(func_ptr_t )(&DAT_1806c83c8 + *(int *)(&DAT_1806c83c8 + CONCAT44(uVal_2,uVal_1) * 4)))(auArr_3._0_8_)
    ;
    return;
  }
  fVal_13 = DAT_1806c3b80 + fVal_5;
  if (DAT_1806b26b4 <= DAT_1806c3b80 + fVal_5) {
    fVal_13 = DAT_1806b26b4;
  }
  auArr_16 = ZEXT812(0);
  if (0.0 <= fVal_13) {
    auArr_16._4_8_ = 0;
    auArr_16._0_4_ = fVal_13;
  }
  auArr_10._0_4_ = auArr_16._0_4_ * DAT_1806c3b50;
  auArr_10._4_8_ = auArr_16._4_8_;
  auArr_10._12_4_ = 0;
  auArr_8 = blendvps(auArr_10,_DAT_1806c3b60,ZEXT416(-(uint)(DAT_1806b26b4 < fVal_13)));
  if ((uint)(int)auArr_8._0_4_ < 6) {
                    /* WARNING: Could not recover jumptable at 0x00018034b695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(func_ptr_t )(&DAT_1806c83e0 + *(int *)(&DAT_1806c83e0 + CONCAT44(uVal_2,(int)auArr_8._0_4_) * 4)))
              (&DAT_1806c83e0 + *(int *)(&DAT_1806c83e0 + CONCAT44(uVal_2,(int)auArr_8._0_4_) * 4));
    return;
  }
  fVal_13 = fVal_5 + _DAT_1806c3b84;
  if (DAT_1806b26b4 <= fVal_5 + _DAT_1806c3b84) {
    fVal_13 = DAT_1806b26b4;
  }
  auArr_19 = ZEXT812(0);
  if (0.0 <= fVal_13) {
    auArr_19._4_8_ = 0;
    auArr_19._0_4_ = fVal_13;
  }
  auArr_12._0_4_ = auArr_19._0_4_ * DAT_1806c3b50;
  auArr_12._4_8_ = auArr_19._4_8_;
  auArr_12._12_4_ = 0;
  auArr_8 = blendvps(auArr_12,_DAT_1806c3b60,ZEXT416(-(uint)(DAT_1806b26b4 < fVal_13)));
  uVal_1 = (uint)auArr_8._0_4_;
  if (uVal_1 < 6) {
    auArr_9._0_4_ = fVal_13 * DAT_1806c3b50 - (float)(int)auArr_8._0_4_;
                    /* WARNING: Could not recover jumptable at 0x00018034b787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(func_ptr_t )(&DAT_1806c83f8 + *(int *)(&DAT_1806c83f8 + CONCAT44(uVal_2,uVal_1) * 4)))
              (&DAT_1806c83f8 + *(int *)(&DAT_1806c83f8 + CONCAT44(uVal_2,uVal_1) * 4),0,auArr_9._0_8_)
    ;
    return;
  }
  auArr_9 = insertps(_DAT_1806c3b90,ZEXT816(0),0x20);
  auArr_10 = blendps(auArr_9,ZEXT816(0),3);
  auArr_18 = blendps(ZEXT416(param_2[1]),_DAT_1806b2900,0xe);
  fVal_17 = auArr_18._0_4_;
  auArr_11._8_8_ = 0;
  auArr_11._0_8_ = *(uint64_t *)(param_2 + 2);
  auArr_9 = insertps(_DAT_1806c3b90,ZEXT816(0),0x20);
  auArr_9 = blendps(auArr_9,ZEXT816(0),3);
  auArr_8 = insertps(ZEXT816(0),auArr_11,0x73);
  auArr_12 = insertps(auArr_11,ZEXT416((uint)DAT_1806b26b4),0x10);
  fVal_5 = auArr_12._0_4_;
  auArr_8 = blendps(auArr_8,ZEXT816(0),3);
  auArr_14 = blendps(ZEXT416(*param_2),_DAT_1806b2900,0xe);
  fVal_13 = auArr_14._0_4_;
  auArr_15._0_4_ = fVal_13 * auArr_8._0_4_ + fVal_17 * auArr_10._0_4_ + fVal_5 * auArr_9._0_4_;
  auArr_15._4_4_ = fVal_13 * auArr_8._4_4_ + fVal_17 * auArr_10._4_4_ + fVal_5 * auArr_9._4_4_;
  auArr_15._8_4_ = fVal_13 * auArr_8._8_4_ + fVal_17 * auArr_10._8_4_ + fVal_5 * auArr_9._8_4_;
  auArr_15._12_4_ =
       auArr_14._4_4_ * auArr_8._12_4_ + auArr_18._4_4_ * auArr_10._12_4_ +
       auArr_12._4_4_ * auArr_9._12_4_;
  auArr_14._4_4_ = DAT_1806b26b4;
  auArr_14._0_4_ = DAT_1806b26b4;
  auArr_14._8_4_ = DAT_1806b26b4;
  auArr_14._12_4_ = DAT_1806b26b4;
  auArr_9 = blendps(auArr_14,auArr_15,2);
  auArr_6._4_4_ = auArr_15._8_4_;
  auArr_6._0_4_ = auArr_15._0_4_;
  auArr_6._8_4_ = auArr_15._8_4_;
  auArr_6._12_4_ = auArr_15._12_4_;
  auArr_9 = maxps(auArr_6,auArr_9);
  fVal_5 = auArr_9._4_4_;
  auArr_18._4_4_ = fVal_5;
  auArr_18._0_4_ = fVal_5;
  auArr_18._8_4_ = auArr_9._12_4_;
  auArr_18._12_4_ = auArr_9._12_4_;
  if (fVal_5 <= auArr_9._0_4_) {
    auArr_18._0_4_ = auArr_9._0_4_;
  }
  auArr_9 = blendps(auArr_18,_DAT_1806b2900,0xe);
  auArr_4._0_4_ = auArr_9._0_4_;
  auArr_4._4_4_ = auArr_4._0_4_;
  auArr_4._8_4_ = auArr_4._0_4_;
  auArr_4._12_4_ = auArr_9._4_4_;
  auArr_9 = divps(auArr_15,auArr_4);
  *param_1 = auArr_9;
  return;
}

// func_0x18034b8c0
void func_0x18034b8c0(int64_t param_1,uint8_t (*param_2)[16],uint64_t *param_3)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  func_ptr_t fnPtr_4;
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t (*pArr16_10)[16];
  uint64_t *pU64_11;
  uint32_t *pU64_12;
  uint8_t auArr_13 [16];
  uint8_t auStack_a8 [32];
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint uStack_74;
  uint32_t uStack_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint64_t uStack_60;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_a8;
  lVal_1 = param_1 + 0x80;
  local_68 = *(uint32_t *)param_3;
  uStack_64 = *(uint32_t *)((int64_t)param_3 + 4);
  uStack_50 = *(uint32_t *)(param_3 + 1);
  uStack_4c = *(uint32_t *)((int64_t)param_3 + 0xc);
  uStack_60 = param_3[1];
  local_88 = *(uint32_t *)*param_2;
  uStack_84 = *(uint32_t *)(*param_2 + 4);
  uStack_80 = *(uint32_t *)(*param_2 + 8);
  uStack_7c = *(uint32_t *)(*param_2 + 0xc);
  pU64_12 = *(uint32_t **)(param_1 + 0x88);
  uStack_70 = uStack_80;
  if (pU64_12 == *(uint32_t **)(param_1 + 0x90)) {
    uStack_74 = uStack_84;
    local_58 = local_68;
    uStack_54 = uStack_64;
    func_0x18036b340(lVal_1,pU64_12,&local_88,&local_68);
    pArr16_10 = *(uint8_t (**)[16])(param_1 + 0x88);
  }
  else {
    *pU64_12 = local_88;
    pU64_12[1] = uStack_84;
    pU64_12[2] = uStack_80;
    pU64_12[3] = uStack_7c;
    pU64_12[5] = uStack_84;
    pU64_12[6] = uStack_80;
    pU64_12[6] = local_68;
    pU64_12[7] = uStack_64;
    pU64_12[8] = uStack_50;
    pU64_12[9] = uStack_4c;
    pU64_12[10] = local_68;
    pU64_12[0xb] = uStack_64;
    pU64_12[0xc] = uStack_50;
    pU64_12[0xd] = uStack_4c;
    pArr16_10 = (uint8_t (*)[16])(*(int64_t *)(param_1 + 0x88) + 0x38);
    *(uint8_t (**)[16])(param_1 + 0x88) = pArr16_10;
  }
  local_68 = *(uint32_t *)param_3;
  uStack_64 = *(uint32_t *)(uint64_t *)((int64_t)param_3 + 4);
  uStack_50 = *(uint32_t *)(param_3 + 1);
  uVal_2 = *(uint64_t *)((int64_t)param_3 + 4);
  uStack_4c = *(uint32_t *)((int64_t)param_3 + 0xc);
  uStack_60 = param_3[1];
  uStack_74 = *(uint *)(*param_2 + 8);
  uStack_78 = *(uint32_t *)param_2[1];
  auArr_13 = insertps(*param_2,ZEXT416(uStack_74),0x20);
  local_88 = auArr_13._0_4_;
  uStack_84 = auArr_13._4_4_;
  uStack_80 = auArr_13._8_4_;
  if (pArr16_10 == *(uint8_t (**)[16])(param_1 + 0x90)) {
    uStack_7c = local_88;
    local_58 = local_68;
    uStack_54 = uStack_64;
    func_0x18036b340(lVal_1,uStack_78,&local_88,&local_68);
    pU64_11 = *(uint64_t **)(param_1 + 0x88);
  }
  else {
    *pArr16_10 = ZEXT816(0);
    *(uint64_t *)pArr16_10[1] = 0;
    *(int64_t *)*pArr16_10 = auArr_13._0_8_;
    *(uint32_t *)(*pArr16_10 + 8) = uStack_80;
    auArr_13._4_4_ = 0;
    auArr_13._0_4_ = uStack_74;
    auArr_13._8_4_ = uStack_74;
    auArr_13._12_4_ = 0;
    auArr_13 = insertps(auArr_13,local_68,0x30);
    *(uint64_t *)(*pArr16_10 + 0xc) = CONCAT44(uStack_78,local_88);
    *(int64_t *)(pArr16_10[1] + 4) = auArr_13._8_8_;
    *(uint32_t *)(pArr16_10[1] + 0xc) = uStack_64;
    *(uint32_t *)pArr16_10[2] = uStack_50;
    *(uint32_t *)(pArr16_10[2] + 4) = uStack_4c;
    *(uint32_t *)(pArr16_10[2] + 8) = local_68;
    *(uint64_t *)(pArr16_10[2] + 0xc) = uVal_2;
    *(uint32_t *)(pArr16_10[3] + 4) = uStack_4c;
    pU64_11 = (uint64_t *)(*(int64_t *)(param_1 + 0x88) + 0x38);
    *(uint64_t **)(param_1 + 0x88) = pU64_11;
  }
  local_68 = *(uint32_t *)param_3;
  uStack_64 = *(uint32_t *)((int64_t)param_3 + 4);
  uStack_50 = *(uint32_t *)(param_3 + 1);
  uStack_4c = *(uint32_t *)((int64_t)param_3 + 0xc);
  uStack_60 = param_3[1];
  uVal_2 = *(uint64_t *)*param_2;
  local_88 = (uint32_t)uVal_2;
  uStack_80 = *(uint32_t *)(*param_2 + 8);
  uStack_74 = *(uint *)(param_2[1] + 4);
  uStack_84 = (uint32_t)((uint64_t)uVal_2 >> 0x20);
  if (pU64_11 == *(uint64_t **)(param_1 + 0x90)) {
    uStack_7c = local_88;
    uStack_78 = uStack_84;
    local_58 = local_68;
    uStack_54 = uStack_64;
    func_0x18036b340(lVal_1,local_88,&local_88,&local_68);
    pU64_12 = *(uint32_t **)(param_1 + 0x88);
  }
  else {
    *pU64_11 = uVal_2;
    *(uint32_t *)(pU64_11 + 1) = uStack_80;
    *(uint64_t *)((int64_t)pU64_11 + 0xc) = uVal_2;
    *(uint *)((int64_t)pU64_11 + 0x14) = uStack_74;
    *(uint32_t *)(pU64_11 + 3) = local_68;
    *(uint32_t *)((int64_t)pU64_11 + 0x1c) = uStack_64;
    *(uint32_t *)(pU64_11 + 4) = uStack_50;
    *(uint32_t *)((int64_t)pU64_11 + 0x24) = uStack_4c;
    *(uint32_t *)(pU64_11 + 5) = local_68;
    *(uint32_t *)((int64_t)pU64_11 + 0x2c) = uStack_64;
    *(uint32_t *)(pU64_11 + 6) = uStack_50;
    *(uint32_t *)((int64_t)pU64_11 + 0x34) = uStack_4c;
    pU64_12 = (uint32_t *)(*(int64_t *)(param_1 + 0x88) + 0x38);
    *(uint32_t **)(param_1 + 0x88) = pU64_12;
  }
  local_68 = *(uint32_t *)param_3;
  uStack_64 = *(uint32_t *)((int64_t)param_3 + 4);
  uStack_50 = *(uint32_t *)(param_3 + 1);
  uStack_4c = *(uint32_t *)((int64_t)param_3 + 0xc);
  uStack_60 = param_3[1];
  local_88 = *(uint32_t *)*param_2;
  uStack_84 = *(uint32_t *)param_2[1];
  uVal_2 = *(uint64_t *)(*param_2 + 8);
  uStack_80 = (uint32_t)uVal_2;
  uStack_7c = (uint32_t)((uint64_t)uVal_2 >> 0x20);
  uStack_74 = uStack_80;
  if (pU64_12 == *(uint32_t **)(param_1 + 0x90)) {
    uStack_78 = uStack_84;
    local_58 = local_68;
    uStack_54 = uStack_64;
    func_0x18036b340(lVal_1,uStack_84,&local_88,&local_68);
    pU64_12 = *(uint32_t **)(param_1 + 0x88);
  }
  else {
    *pU64_12 = local_88;
    pU64_12[1] = uStack_84;
    *(uint64_t *)(pU64_12 + 2) = uVal_2;
    pU64_12[4] = uStack_84;
    pU64_12[5] = uStack_80;
    pU64_12[6] = local_68;
    pU64_12[7] = uStack_64;
    pU64_12[8] = uStack_50;
    pU64_12[9] = uStack_4c;
    pU64_12[10] = local_68;
    pU64_12[0xb] = uStack_64;
    pU64_12[0xc] = uStack_50;
    pU64_12[0xd] = uStack_4c;
    pU64_12 = (uint32_t *)(*(int64_t *)(param_1 + 0x88) + 0x38);
    *(uint32_t **)(param_1 + 0x88) = pU64_12;
  }
  uStack_60 = param_3[1];
  uStack_50 = (uint32_t)uStack_60;
  uStack_4c = (uint32_t)((uint64_t)uStack_60 >> 0x20);
  local_88 = *(uint32_t *)*param_2;
  uStack_80 = *(uint32_t *)(*param_2 + 8);
  uVal_2 = *param_3;
  local_68 = (uint32_t)uVal_2;
  uStack_64 = *(uint32_t *)((int64_t)param_3 + 4);
  uVal_3 = *(uint64_t *)param_2[1];
  uStack_84 = (uint32_t)uVal_3;
  uStack_74 = *(uint *)(param_2[1] + 4);
  if (pU64_12 == *(uint32_t **)(param_1 + 0x90)) {
    uStack_7c = local_88;
    uStack_78 = uStack_84;
    local_58 = local_68;
    uStack_54 = uStack_64;
    func_0x18036b340(lVal_1,local_68,&local_88,&local_68);
    pU64_11 = *(uint64_t **)(param_1 + 0x88);
  }
  else {
    *pU64_12 = local_88;
    pU64_12[1] = uStack_84;
    pU64_12[2] = uStack_80;
    pU64_12[3] = local_88;
    auArr_8._8_4_ = local_68;
    auArr_8._0_8_ = uVal_3;
    auArr_8._12_4_ = (int)((uint64_t)uVal_2 >> 0x20);
    *(uint8_t (*)[16])(pU64_12 + 4) = auArr_8;
    *(uint64_t *)(pU64_12 + 8) = uStack_60;
    pU64_12[10] = local_68;
    pU64_12[0xb] = uStack_64;
    *(uint64_t *)(pU64_12 + 0xc) = uStack_60;
    pU64_11 = (uint64_t *)(*(int64_t *)(param_1 + 0x88) + 0x38);
    *(uint64_t **)(param_1 + 0x88) = pU64_11;
  }
  local_68 = *(uint32_t *)param_3;
  uStack_64 = *(uint32_t *)((int64_t)param_3 + 4);
  uStack_50 = *(uint32_t *)(param_3 + 1);
  uStack_4c = *(uint32_t *)((int64_t)param_3 + 0xc);
  uStack_60 = param_3[1];
  auArr_13 = *(uint8_t (*)[16])(*param_2 + 4);
  uStack_84 = auArr_13._0_4_;
  uStack_80 = auArr_13._4_4_;
  local_88 = auArr_13._8_4_;
  uStack_78 = auArr_13._12_4_;
  if (pU64_11 == *(uint64_t **)(param_1 + 0x90)) {
    uStack_7c = local_88;
    uStack_74 = uStack_80;
    local_58 = local_68;
    uStack_54 = uStack_64;
    func_0x18036b340(lVal_1,uStack_84,&local_88,&local_68);
    pU64_12 = *(uint32_t **)(param_1 + 0x88);
  }
  else {
    uVal_2 = extractps(auArr_13,2);
    *pU64_11 = uVal_2;
    *(uint8_t (*)[16])((int64_t)pU64_11 + 4) = auArr_13;
    uVal_2 = extractps(auArr_13,1);
    *(uint64_t *)((int64_t)pU64_11 + 0x14) = uVal_2;
    *(uint32_t *)(pU64_11 + 3) = local_68;
    *(uint32_t *)((int64_t)pU64_11 + 0x1c) = uStack_64;
    *(uint32_t *)(pU64_11 + 4) = uStack_50;
    *(uint32_t *)((int64_t)pU64_11 + 0x24) = uStack_4c;
    *(uint32_t *)(pU64_11 + 5) = local_68;
    *(uint32_t *)((int64_t)pU64_11 + 0x2c) = uStack_64;
    *(uint32_t *)(pU64_11 + 6) = uStack_50;
    *(uint32_t *)((int64_t)pU64_11 + 0x34) = uStack_4c;
    pU64_12 = (uint32_t *)(*(int64_t *)(param_1 + 0x88) + 0x38);
    *(uint32_t **)(param_1 + 0x88) = pU64_12;
  }
  local_68 = *(uint32_t *)param_3;
  uStack_64 = *(uint32_t *)((int64_t)param_3 + 4);
  uStack_50 = *(uint32_t *)(param_3 + 1);
  uStack_4c = *(uint32_t *)((int64_t)param_3 + 0xc);
  uStack_60 = param_3[1];
  local_88 = *(uint32_t *)(*param_2 + 0xc);
  uVal_2 = *(uint64_t *)(*param_2 + 4);
  uStack_74 = *(uint *)(param_2[1] + 4);
  uStack_84 = (uint32_t)uVal_2;
  uStack_80 = (uint32_t)((uint64_t)uVal_2 >> 0x20);
  uStack_78 = uStack_84;
  if (pU64_12 == *(uint32_t **)(param_1 + 0x90)) {
    uStack_7c = local_88;
    local_58 = local_68;
    uStack_54 = uStack_64;
    func_0x18036b340(lVal_1,local_88,&local_88,&local_68);
    pU64_11 = *(uint64_t **)(param_1 + 0x88);
  }
  else {
    *pU64_12 = local_88;
    *(uint64_t *)(pU64_12 + 1) = uVal_2;
    pU64_12[3] = local_88;
    pU64_12[4] = uStack_84;
    pU64_12[5] = uStack_74;
    pU64_12[6] = local_68;
    pU64_12[7] = uStack_64;
    pU64_12[8] = uStack_50;
    pU64_12[9] = uStack_4c;
    pU64_12[10] = local_68;
    pU64_12[0xb] = uStack_64;
    pU64_12[0xc] = uStack_50;
    pU64_12[0xd] = uStack_4c;
    pU64_11 = (uint64_t *)(*(int64_t *)(param_1 + 0x88) + 0x38);
    *(uint64_t **)(param_1 + 0x88) = pU64_11;
  }
  local_68 = *(uint32_t *)param_3;
  uStack_64 = *(uint32_t *)((int64_t)param_3 + 4);
  uStack_50 = *(uint32_t *)(param_3 + 1);
  uStack_4c = *(uint32_t *)((int64_t)param_3 + 0xc);
  uStack_60 = param_3[1];
  uVal_2 = *(uint64_t *)*param_2;
  uStack_84 = (uint32_t)((uint64_t)uVal_2 >> 0x20);
  uStack_80 = *(uint32_t *)(param_2[1] + 4);
  uStack_7c = *(uint32_t *)(*param_2 + 0xc);
  local_88 = (uint32_t)uVal_2;
  if (pU64_11 == *(uint64_t **)(param_1 + 0x90)) {
    uStack_78 = uStack_84;
    uStack_74 = uStack_80;
    local_58 = local_68;
    uStack_54 = uStack_64;
    func_0x18036b340(lVal_1,uStack_84,&local_88,&local_68);
    pU64_12 = *(uint32_t **)(param_1 + 0x88);
  }
  else {
    *pU64_11 = uVal_2;
    *(uint32_t *)(pU64_11 + 1) = uStack_80;
    *(uint32_t *)((int64_t)pU64_11 + 0xc) = uStack_7c;
    *(uint32_t *)(pU64_11 + 2) = uStack_84;
    *(uint32_t *)((int64_t)pU64_11 + 0x14) = uStack_80;
    *(uint32_t *)(pU64_11 + 3) = local_68;
    *(uint32_t *)((int64_t)pU64_11 + 0x1c) = uStack_64;
    *(uint32_t *)(pU64_11 + 4) = uStack_50;
    *(uint32_t *)((int64_t)pU64_11 + 0x24) = uStack_4c;
    *(uint32_t *)(pU64_11 + 5) = local_68;
    *(uint32_t *)((int64_t)pU64_11 + 0x2c) = uStack_64;
    *(uint32_t *)(pU64_11 + 6) = uStack_50;
    *(uint32_t *)((int64_t)pU64_11 + 0x34) = uStack_4c;
    pU64_12 = (uint32_t *)(*(int64_t *)(param_1 + 0x88) + 0x38);
    *(uint32_t **)(param_1 + 0x88) = pU64_12;
  }
  local_68 = *(uint32_t *)param_3;
  uStack_64 = *(uint32_t *)((int64_t)param_3 + 4);
  uStack_50 = *(uint32_t *)(param_3 + 1);
  uStack_4c = *(uint32_t *)((int64_t)param_3 + 0xc);
  uStack_60 = param_3[1];
  uVal_2 = *(uint64_t *)*param_2;
  local_88 = (uint32_t)uVal_2;
  uStack_84 = *(uint32_t *)(*param_2 + 4);
  uVal_3 = *(uint64_t *)param_2[1];
  uStack_80 = *(uint32_t *)(param_2[1] + 4);
  uStack_78 = (uint32_t)uVal_3;
  if (pU64_12 == *(uint32_t **)(param_1 + 0x90)) {
    uStack_7c = local_88;
    uStack_74 = uStack_80;
    local_58 = local_68;
    uStack_54 = uStack_64;
    func_0x18036b340(lVal_1,local_88,&local_88,&local_68);
    pU64_12 = *(uint32_t **)(param_1 + 0x88);
  }
  else {
    *pU64_12 = local_88;
    auArr_5._4_4_ = (int)((uint64_t)uVal_3 >> 0x20);
    auArr_5._0_4_ = (int)((uint64_t)uVal_2 >> 0x20);
    auArr_5._8_4_ = local_88;
    auArr_5._12_4_ = uStack_78;
    *(uint8_t (*)[16])(pU64_12 + 1) = auArr_5;
    pU64_12[5] = uStack_80;
    pU64_12[6] = local_68;
    pU64_12[7] = uStack_64;
    pU64_12[8] = uStack_50;
    pU64_12[9] = uStack_4c;
    pU64_12[10] = local_68;
    pU64_12[0xb] = uStack_64;
    pU64_12[0xc] = uStack_50;
    pU64_12[0xd] = uStack_4c;
    pU64_12 = (uint32_t *)(*(int64_t *)(param_1 + 0x88) + 0x38);
    *(uint32_t **)(param_1 + 0x88) = pU64_12;
  }
  uStack_60 = param_3[1];
  uStack_50 = (uint32_t)uStack_60;
  uStack_4c = (uint32_t)((uint64_t)uStack_60 >> 0x20);
  uStack_84 = *(uint32_t *)(*param_2 + 4);
  local_88 = *(uint32_t *)(*param_2 + 0xc);
  uVal_2 = *param_3;
  local_68 = (uint32_t)uVal_2;
  uStack_64 = *(uint32_t *)((int64_t)param_3 + 4);
  uVal_3 = *(uint64_t *)param_2[1];
  uStack_78 = (uint32_t)uVal_3;
  uStack_80 = *(uint32_t *)(param_2[1] + 4);
  if (pU64_12 == *(uint32_t **)(param_1 + 0x90)) {
    uStack_7c = local_88;
    uStack_74 = uStack_80;
    local_58 = local_68;
    uStack_54 = uStack_64;
    func_0x18036b340(lVal_1,local_68,&local_88,&local_68);
    pU64_12 = *(uint32_t **)(param_1 + 0x88);
  }
  else {
    *pU64_12 = local_88;
    pU64_12[1] = uStack_84;
    pU64_12[2] = uStack_80;
    pU64_12[3] = local_88;
    auArr_9._8_4_ = local_68;
    auArr_9._0_8_ = uVal_3;
    auArr_9._12_4_ = (int)((uint64_t)uVal_2 >> 0x20);
    *(uint8_t (*)[16])(pU64_12 + 4) = auArr_9;
    *(uint64_t *)(pU64_12 + 8) = uStack_60;
    pU64_12[10] = local_68;
    pU64_12[0xb] = uStack_64;
    *(uint64_t *)(pU64_12 + 0xc) = uStack_60;
    pU64_12 = (uint32_t *)(*(int64_t *)(param_1 + 0x88) + 0x38);
    *(uint32_t **)(param_1 + 0x88) = pU64_12;
  }
  uStack_60 = param_3[1];
  uStack_50 = (uint32_t)uStack_60;
  uStack_4c = (uint32_t)((uint64_t)uStack_60 >> 0x20);
  local_88 = *(uint32_t *)(*param_2 + 0xc);
  uVal_2 = *param_3;
  local_68 = (uint32_t)uVal_2;
  uStack_64 = *(uint32_t *)((int64_t)param_3 + 4);
  uVal_3 = *(uint64_t *)param_2[1];
  uStack_84 = (uint32_t)uVal_3;
  uStack_80 = *(uint32_t *)(param_2[1] + 4);
  uStack_7c = *(uint32_t *)*param_2;
  if (pU64_12 == *(uint32_t **)(param_1 + 0x90)) {
    uStack_78 = uStack_84;
    uStack_74 = uStack_80;
    local_58 = local_68;
    uStack_54 = uStack_64;
    func_0x18036b340(lVal_1,local_68,&local_88,&local_68);
    pU64_11 = *(uint64_t **)(param_1 + 0x88);
  }
  else {
    *pU64_12 = local_88;
    pU64_12[1] = uStack_84;
    pU64_12[2] = uStack_80;
    pU64_12[3] = uStack_7c;
    auArr_7._8_4_ = local_68;
    auArr_7._0_8_ = uVal_3;
    auArr_7._12_4_ = (int)((uint64_t)uVal_2 >> 0x20);
    *(uint8_t (*)[16])(pU64_12 + 4) = auArr_7;
    *(uint64_t *)(pU64_12 + 8) = uStack_60;
    pU64_12[10] = local_68;
    pU64_12[0xb] = uStack_64;
    *(uint64_t *)(pU64_12 + 0xc) = uStack_60;
    pU64_11 = (uint64_t *)(*(int64_t *)(param_1 + 0x88) + 0x38);
    *(uint64_t **)(param_1 + 0x88) = pU64_11;
  }
  local_68 = *(uint32_t *)param_3;
  uStack_64 = *(uint32_t *)((int64_t)param_3 + 4);
  uStack_50 = *(uint32_t *)(param_3 + 1);
  uStack_4c = *(uint32_t *)((int64_t)param_3 + 0xc);
  uStack_60 = param_3[1];
  auArr_13 = *(uint8_t (*)[16])(*param_2 + 8);
  uStack_74 = auArr_13._0_4_;
  local_88 = auArr_13._4_4_;
  uStack_84 = auArr_13._8_4_;
  uStack_80 = auArr_13._12_4_;
  uStack_7c = local_88;
  uStack_78 = uStack_84;
  local_58 = local_68;
  uStack_54 = uStack_64;
  if (pU64_11 == *(uint64_t **)(param_1 + 0x90)) {
    func_0x18036b340(lVal_1,uStack_74,&local_88,&local_68);
  }
  else {
    *pU64_11 = auArr_13._4_8_;
    auArr_6._4_4_ = local_88;
    auArr_6._0_4_ = uStack_80;
    auArr_6._8_4_ = uStack_84;
    auArr_6._12_4_ = uStack_74;
    *(uint8_t (*)[16])(pU64_11 + 1) = auArr_6;
    *(uint32_t *)(pU64_11 + 3) = local_68;
    *(uint32_t *)((int64_t)pU64_11 + 0x1c) = uStack_64;
    *(uint32_t *)(pU64_11 + 4) = uStack_50;
    *(uint32_t *)((int64_t)pU64_11 + 0x24) = uStack_4c;
    *(uint32_t *)(pU64_11 + 5) = local_68;
    *(uint32_t *)((int64_t)pU64_11 + 0x2c) = uStack_64;
    *(uint32_t *)(pU64_11 + 6) = uStack_50;
    *(uint32_t *)((int64_t)pU64_11 + 0x34) = uStack_4c;
    *(int64_t *)(param_1 + 0x88) = *(int64_t *)(param_1 + 0x88) + 0x38;
  }
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_a8)) {
    return;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_a8);
  fnPtr_4 = (func_ptr_t )swi(3);
  (*fnPtr_4)();
  return;
}

// func_0x18034c080
/* WARNING: Removing unreachable block (ram,0x00018034c48b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x00018034c48b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18034c080(uint64_t *param_1)
{
  char *_Str;
  uint64_t *_Str_00;
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  size_t sz_4;
  uint64_t **ptr2_U64_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t ***ptr3_U64_8;
  uint8_t *pU64_9;
  uint64_t uVal_10;
  uint8_t local_88 [16];
  size_t local_78;
  uint64_t local_70;
  uint64_t *local_60;
  uint64_t ***local_58;
  undefined7 uStack_50;
  uint8_t uStack_49;
  undefined7 uStack_48;
  uint8_t uStack_41;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_58 = (uint64_t ***)_DAT_1806c7626;
  uStack_50 = (undefined7)_UNK_1806c762e;
  uStack_49 = 0x67;
  uStack_48 = 0x51f2ab6690aaa6;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x10238) == '\0') {
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_7 + 0x10238) = 1;
    func_0x18007d3c0(lVal_7 + 0x1021d,&local_58);
    func_0x180673140(&LAB_18036b1e0);
  }
  _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1021d);
  func_0x1801c0b00(_Str);
  local_58 = (uint64_t ***)0x0;
  uStack_50 = 0;
  uStack_49 = 0;
  sz_4 = strlen(_Str);
  if ((int64_t)sz_4 < 0) {
    func_0x18007ba70();
  }
  else {
    if (sz_4 < 0x10) {
      ptr3_U64_8 = &local_58;
      uVal_10 = 0xf;
    }
    else {
      uVal_6 = sz_4 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_6) {
        uVal_10 = uVal_6;
      }
      if (uVal_6 < 0xfff) {
        ptr3_U64_8 = (uint64_t ***)func_0x180672de0(uVal_10 + 1);
        local_58 = ptr3_U64_8;
      }
      else {
        ptr2_U64_5 = (uint64_t **)func_0x180672de0(uVal_10 + 0x28);
        ptr3_U64_8 = (uint64_t ***)((int64_t)ptr2_U64_5 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_8[-1] = ptr2_U64_5;
        local_58 = ptr3_U64_8;
      }
    }
    uStack_48 = (undefined7)sz_4;
    uStack_41 = (uint8_t)(sz_4 >> 0x38);
    local_40 = uVal_10;
    func_0x1806aa960(ptr3_U64_8,_Str,sz_4);
    *(uint8_t *)((int64_t)ptr3_U64_8 + sz_4) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1024c) == '\0') {
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_7 + 0x1024c) = 1;
      *(uint64_t *)(lVal_7 + 0x10240) = 0x6438f2ac6595b68c;
      *(uint32_t *)(lVal_7 + 0x10248) = 0x1f9aaa1;
      func_0x180673140(&LAB_18036b210);
    }
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint64_t *)(lVal_7 + 0x10240);
    if (*(char *)(lVal_7 + 0x1024b) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0xb5181c509f9d9cf;
      *(uint *)(lVal_7 + 0x10248) =
           (*(uint *)(lVal_7 + 0x10248) & 0xffff | (uint)*(byte *)(lVal_7 + 0x1024a) << 0x10) ^
           SUB164(_DAT_1806b68f0,0);
    }
    local_88 = (uint8_t  [16])0x0;
    sz_4 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_4) {
      if (sz_4 < 0x10) {
        pU64_9 = local_88;
        uVal_10 = 0xf;
      }
      else {
        uVal_6 = sz_4 | 0xf;
        uVal_10 = 0x16;
        if (0x16 < uVal_6) {
          uVal_10 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_9 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_10 + 0x28);
          pU64_9 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_9 + -8) = lVal_7;
        }
        local_88._0_8_ = pU64_9;
      }
      local_78 = sz_4;
      local_70 = uVal_10;
      func_0x1806aa960(pU64_9,_Str_00,sz_4);
      pU64_9[sz_4] = 0;
      func_0x180348cd0(param_1,local_88,&local_58);
      if (0xf < local_70) {
        uVal_10 = local_70 + 1;
        lVal_7 = local_88._0_8_;
        if (0xfff < uVal_10) {
          lVal_7 = *(int64_t *)(local_88._0_8_ + -8);
          if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_7)) goto LAB_18034c489;
          uVal_10 = local_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_10);
      }
      if (0xf < local_40) {
        uVal_10 = local_40 + 1;
        ptr3_U64_8 = local_58;
        if (0xfff < uVal_10) {
          ptr3_U64_8 = (uint64_t ***)local_58[-1];
          if (0x1f < (uint64_t)((int64_t)local_58 + (-8 - (int64_t)ptr3_U64_8)))
          goto LAB_18034c489;
          uVal_10 = local_40 + 0x28;
        }
        thunk_FUN_180695dd0(ptr3_U64_8,uVal_10);
      }
      *param_1 = &PTR_LAB_1806c5810;
      uVal_3 = _UNK_1806b288c;
      uVal_2 = _UNK_1806b2888;
      uVal_1 = _UNK_1806b2884;
      *(uint32_t *)(param_1 + 0x17) = _DAT_1806b2880;
      *(uint32_t *)((int64_t)param_1 + 0xbc) = uVal_1;
      *(uint32_t *)(param_1 + 0x18) = uVal_2;
      *(uint32_t *)((int64_t)param_1 + 0xc4) = uVal_3;
      *(uint32_t *)(param_1 + 0x19) = 6;
      *(uint8_t *)((int64_t)param_1 + 0xcc) = 0;
      local_58 = (uint64_t ***)0x1f4;
      local_60 = param_1;
      if ((uint64_t)(((int64_t)(param_1[0x12] - param_1[0x10]) >> 3) * 0x6db6db6db6db6db7) < 500)
      {
        func_0x180369820(param_1 + 0x10,&local_58);
      }
      return local_60;
    }
  }
  func_0x18007ba70();
LAB_18034c489:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18034c4a0
void Unwind_18034c4a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18034c4d0
void Unwind_18034c4d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@18034c500
void Unwind_18034c500(uint64_t param_1,int64_t param_2)
{
  func_0x18036e5e0(*(uint64_t *)(param_2 + 0x48));
  return;
}

// Unwind@18034c530
void Unwind_18034c530(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10238) = 0;
  return;
}

// Unwind@18034d310
void Unwind_18034d310(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  *(uint8_t *)(param_2 + 0x1d3) = 0;
  return;
}

// Unwind@18034d350
void Unwind_18034d350(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1d3);
  func_0x180001e70(param_2 + 400);
  *(uint8_t *)(param_2 + 0x1dd) = 0;
  *(uint8_t *)(param_2 + 0x1dc) = uVal_1;
  return;
}

// Unwind@18034d3a0
void Unwind_18034d3a0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x1dc);
  ch_2 = *(char *)(param_2 + 0x1dd);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x120);
  }
  *(char *)(param_2 + 0x1db) = ch_2;
  *(byte *)(param_2 + 0x1da) = bFlag_1 & 1;
  return;
}

// Unwind@18034d400
void Unwind_18034d400(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x1da);
  if (*(char *)(param_2 + 0x1db) == '\x01') {
    func_0x180001e70(param_2 + 0xe0);
  }
  *(byte *)(param_2 + 0x1d9) = bFlag_1 & 1;
  return;
}

// Unwind@18034d450
void Unwind_18034d450(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1d9);
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x1df) = uVal_1;
  return;
}

// Unwind@18034d4a0
void Unwind_18034d4a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1df) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
  }
  return;
}

// Unwind@18034d4f0
void Unwind_18034d4f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  *(uint8_t *)(param_2 + 0x1d2) = 0;
  return;
}

// Unwind@18034d530
void Unwind_18034d530(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1d2);
  func_0x180001e70(param_2 + 400);
  *(uint8_t *)(param_2 + 0x1d8) = 0;
  *(uint8_t *)(param_2 + 0x1d7) = uVal_1;
  return;
}

// Unwind@18034d580
void Unwind_18034d580(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x1d7);
  ch_2 = *(char *)(param_2 + 0x1d8);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x140);
  }
  *(char *)(param_2 + 0x1d6) = ch_2;
  *(byte *)(param_2 + 0x1d5) = bFlag_1 & 1;
  return;
}

// Unwind@18034d5e0
void Unwind_18034d5e0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x1d5);
  if (*(char *)(param_2 + 0x1d6) == '\x01') {
    func_0x180001e70(param_2 + 0x100);
  }
  *(byte *)(param_2 + 0x1d4) = bFlag_1 & 1;
  return;
}

// Unwind@18034d640
void Unwind_18034d640(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1d4);
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x1de) = uVal_1;
  return;
}

// Unwind@18034d690
void Unwind_18034d690(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1de) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
  }
  return;
}

// Unwind@18034d6e0
void Unwind_18034d6e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1026c) = 0;
  *(uint8_t *)(param_2 + 0x1df) = 1;
  return;
}

// Unwind@18034d730
void Unwind_18034d730(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x102b8) = 0;
  *(uint8_t *)(param_2 + 0x1de) = 1;
  return;
}

// func_0x18034d9c0
void func_0x18034d9c0(uint8_t (*param_1)[16])
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
        uVal_5 = *(uint64_t *)(lVal_6 + 0x28);
        if (0xf < uVal_5) {
          lVal_2 = *(int64_t *)(lVal_6 + 0x10);
          uVal_3 = uVal_5 + 1;
          lVal_4 = lVal_2;
          if (0xfff < uVal_3) {
            lVal_4 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18034daa3;
            uVal_3 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_3);
        }
        *(uint64_t *)(lVal_6 + 0x20) = 0;
        *(uint64_t *)(lVal_6 + 0x28) = 0xf;
        *(uint8_t *)(lVal_6 + 0x10) = 0;
        lVal_6 = lVal_6 + 0x48;
      } while (lVal_6 != lVal_1);
      lVal_6 = *(int64_t *)*param_1;
      uVal_5 = *(int64_t *)param_1[1] - lVal_6;
    }
    if (0xfff < uVal_5) {
      if (0x1f < (uint64_t)((lVal_6 + -8) - *(int64_t *)(lVal_6 + -8))) {
LAB_18034daa3:
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

// func_0x18034dab0
void func_0x18034dab0(int64_t param_1)
{
  uint32_t *pU64_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint32_t *pU64_4;
  
  lVal_2 = func_0x1800cf950();
  if (lVal_2 != 0) {
    if (*(int64_t *)(param_1 + 0xa8) == 0) {
      uVal_3 = func_0x180672de0(0x250);
      func_0x1806ab010(uVal_3,0,0x250);
      *(uint64_t *)(param_1 + 0xa8) = uVal_3;
      func_0x1800feb00(uVal_3);
      if (*(int64_t *)(param_1 + 0x50) != *(int64_t *)(param_1 + 0x58)) goto LAB_18034daf0;
    }
    else {
      func_0x1800feb00();
      if (*(int64_t *)(param_1 + 0x50) != *(int64_t *)(param_1 + 0x58)) {
LAB_18034daf0:
        func_0x180107830(lVal_2,1,0,0);
        pU64_1 = *(uint32_t **)(param_1 + 0x58);
        for (pU64_4 = *(uint32_t **)(param_1 + 0x50); pU64_4 != pU64_1; pU64_4 = pU64_4 + 10) {
          func_0x180108220(lVal_2,pU64_4 + 6);
          func_0x180107cc0(lVal_2,*pU64_4,pU64_4[4],pU64_4[2]);
          func_0x180107cc0(lVal_2,*pU64_4,pU64_4[1],pU64_4[2]);
          func_0x180107cc0(lVal_2,*pU64_4,pU64_4[1],pU64_4[5]);
          func_0x180107cc0(lVal_2,*pU64_4,pU64_4[4],pU64_4[5]);
          func_0x180107cc0(lVal_2,pU64_4[3],pU64_4[4],pU64_4[2]);
          func_0x180107cc0(lVal_2,pU64_4[3],pU64_4[1],pU64_4[2]);
          func_0x180107cc0(lVal_2,*pU64_4,pU64_4[1],pU64_4[2]);
          func_0x180107cc0(lVal_2,*pU64_4,pU64_4[4],pU64_4[2]);
          func_0x180107cc0(lVal_2,pU64_4[3],pU64_4[4],pU64_4[5]);
          func_0x180107cc0(lVal_2,pU64_4[3],pU64_4[1],pU64_4[5]);
          func_0x180107cc0(lVal_2,pU64_4[3],pU64_4[1],pU64_4[2]);
          func_0x180107cc0(lVal_2,pU64_4[3],pU64_4[4],pU64_4[2]);
          func_0x180107cc0(lVal_2,*pU64_4,pU64_4[4],pU64_4[5]);
          func_0x180107cc0(lVal_2,*pU64_4,pU64_4[1],pU64_4[5]);
          func_0x180107cc0(lVal_2,pU64_4[3],pU64_4[1],pU64_4[5]);
          func_0x180107cc0(lVal_2,pU64_4[3],pU64_4[4],pU64_4[5]);
          func_0x180107cc0(lVal_2,*pU64_4,pU64_4[4],pU64_4[2]);
          func_0x180107cc0(lVal_2,*pU64_4,pU64_4[4],pU64_4[5]);
          func_0x180107cc0(lVal_2,pU64_4[3],pU64_4[4],pU64_4[5]);
          func_0x180107cc0(lVal_2,pU64_4[3],pU64_4[4],pU64_4[2]);
          func_0x180107cc0(lVal_2,*pU64_4,pU64_4[1],pU64_4[2]);
          func_0x180107cc0(lVal_2,pU64_4[3],pU64_4[1],pU64_4[2]);
          func_0x180107cc0(lVal_2,pU64_4[3],pU64_4[1],pU64_4[5]);
          func_0x180107cc0(lVal_2,*pU64_4,pU64_4[1],pU64_4[5]);
        }
        func_0x180108350(lVal_2,*(uint64_t *)(param_1 + 0xa8));
        return;
      }
    }
  }
  return;
}

// func_0x18034ddc0
/* WARNING: Removing unreachable block (ram,0x00018034e214) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x00018034e214) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18034ddc0(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint64_t *_Str_00;
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  size_t sz_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint8_t *pU64_14;
  uint64_t uVal_15;
  uint8_t local_a8 [16];
  size_t local_98;
  uint64_t local_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  size_t local_78;
  uint64_t uStack_70;
  uint32_t uStack_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  undefined3 uStack_58;
  uint32_t uStack_55;
  uint32_t uStack_51;
  uint64_t *local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  uStack_58 = _UNK_1806c76a9;
  uStack_55 = _UNK_1806c76ac;
  uStack_51 = _UNK_1806c76b0;
  uStack_68 = _DAT_1806c7699;
  uStack_64 = _UNK_1806c769d;
  uStack_60 = _UNK_1806c76a1;
  uStack_5c = _UNK_1806c76a5;
  local_78 = CONCAT44(_UNK_1806c768d,_DAT_1806c7689);
  uStack_70 = CONCAT44(_UNK_1806c7695,_UNK_1806c7691);
  local_88._4_4_ = _UNK_1806c767d;
  local_88._0_4_ = _DAT_1806c7679;
  uStack_80._0_4_ = _UNK_1806c7681;
  uStack_80._4_4_ = _UNK_1806c7685;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1031c) == '\0') {
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_13 + 0x1031c) = 1;
    func_0x1801b2720(lVal_13 + 0x102dd,local_88);
    func_0x180673140(&LAB_18036b750);
  }
  uVal_7 = _UNK_1806b2c9c;
  uVal_6 = _UNK_1806b2c98;
  uVal_5 = _UNK_1806b2c94;
  uVal_4 = _DAT_1806b2c90;
  lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_13 + 0x102dd);
  if (*(char *)(lVal_13 + 0x10318) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_13 + 0x102e1) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(lVal_13 + 0x102e5) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(lVal_13 + 0x102e9) ^ _UNK_1806b2c9c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_13 + 0x102f1) ^ uVal_5;
    auArr_2._0_4_ = *(uint *)(lVal_13 + 0x102ed) ^ uVal_4;
    auArr_2._8_4_ = *(uint *)(lVal_13 + 0x102f5) ^ uVal_6;
    auArr_2._12_4_ = *(uint *)(lVal_13 + 0x102f9) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_13 + 0x102ed) = auArr_2;
    auArr_3._4_4_ = *(uint *)(lVal_13 + 0x10301) ^ uVal_5;
    auArr_3._0_4_ = *(uint *)(lVal_13 + 0x102fd) ^ uVal_4;
    auArr_3._8_4_ = *(uint *)(lVal_13 + 0x10305) ^ uVal_6;
    auArr_3._12_4_ = *(uint *)(lVal_13 + 0x10309) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_13 + 0x102fd) = auArr_3;
    *(uint64_t *)(lVal_13 + 0x1030d) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_13 + 0x1030d) >> 0x20) ^ _UNK_1806b63e4,
                  (uint)*(uint64_t *)(lVal_13 + 0x1030d) ^ _DAT_1806b63e0);
    *(byte *)(lVal_13 + 0x10315) = *(byte *)(lVal_13 + 0x10315) ^ 0xcf;
    *(byte *)(lVal_13 + 0x10316) = *(byte *)(lVal_13 + 0x10316) ^ 0xd9;
    *(byte *)(lVal_13 + 0x10317) = *(byte *)(lVal_13 + 0x10317) ^ 0xf9;
    *(uint8_t *)(lVal_13 + 0x10318) = 0;
  }
  _local_88 = ZEXT816(0);
  sz_11 = strlen((char *)_Str);
  if ((int64_t)sz_11 < 0) {
    func_0x18007ba70();
  }
  else {
    if (sz_11 < 0x10) {
      pU64_14 = local_88;
      uVal_15 = 0xf;
    }
    else {
      uVal_12 = sz_11 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_12) {
        uVal_15 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        lVal_13 = func_0x180672de0(uVal_15 + 0x28);
        pU64_14 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_13;
      }
      local_88 = (uint8_t  [8])pU64_14;
    }
    local_78 = sz_11;
    uStack_70 = uVal_15;
    func_0x1806aa960(pU64_14,_Str,sz_11);
    pU64_14[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1032c) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x1032c) = 1;
      *(uint8_t *)(lVal_13 + 0x1032a) = 1;
      *(uint64_t *)(lVal_13 + 0x10320) = 0x6a1cf5ad6e90bc87;
      *(uint16_t *)(lVal_13 + 0x10328) = 0xd9bf;
      func_0x180673140(&LAB_18036b790);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint64_t *)(lVal_13 + 0x10320);
    if (*(char *)(lVal_13 + 0x1032a) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0xb5181c509f9d9cf;
      *(byte *)(lVal_13 + 0x10328) = *(byte *)(lVal_13 + 0x10328) ^ 0xcf;
      *(byte *)(lVal_13 + 0x10329) = *(byte *)(lVal_13 + 0x10329) ^ 0xd9;
      *(uint8_t *)(lVal_13 + 0x1032a) = 0;
    }
    local_a8 = ZEXT816(0);
    sz_11 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_11) {
      if (sz_11 < 0x10) {
        pU64_14 = local_a8;
        uVal_15 = 0xf;
      }
      else {
        uVal_12 = sz_11 | 0xf;
        uVal_15 = 0x16;
        if (0x16 < uVal_12) {
          uVal_15 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          pU64_14 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
        }
        else {
          lVal_13 = func_0x180672de0(uVal_15 + 0x28);
          pU64_14 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_14 + -8) = lVal_13;
        }
        local_a8._0_8_ = pU64_14;
      }
      local_98 = sz_11;
      local_90 = uVal_15;
      func_0x1806aa960(pU64_14,_Str_00,sz_11);
      pU64_14[sz_11] = 0;
      func_0x180348cd0(param_1,local_a8,local_88);
      if (0xf < local_90) {
        uVal_15 = local_90 + 1;
        lVal_13 = local_a8._0_8_;
        if (0xfff < uVal_15) {
          lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_18034e212;
          uVal_15 = local_90 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_13,uVal_15);
      }
      if (0xf < uStack_70) {
        uVal_15 = uStack_70 + 1;
        lVal_13 = (int64_t)local_88;
        if (0xfff < uVal_15) {
          lVal_13 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_13)) goto LAB_18034e212;
          uVal_15 = uStack_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_13,uVal_15);
      }
      *param_1 = &PTR_LAB_1806c58b0;
      uVal_10 = _UNK_1806c3bac;
      uVal_9 = _UNK_1806c3ba8;
      uVal_8 = _UNK_1806c3ba4;
      *(uint32_t *)(param_1 + 0x17) = _DAT_1806c3ba0;
      *(uint32_t *)((int64_t)param_1 + 0xbc) = uVal_8;
      *(uint32_t *)(param_1 + 0x18) = uVal_9;
      *(uint32_t *)((int64_t)param_1 + 0xc4) = uVal_10;
      uVal_10 = _UNK_1806c3bbc;
      uVal_9 = _UNK_1806c3bb8;
      uVal_8 = _UNK_1806c3bb4;
      *(uint32_t *)(param_1 + 0x19) = _DAT_1806c3bb0;
      *(uint32_t *)((int64_t)param_1 + 0xcc) = uVal_8;
      *(uint32_t *)(param_1 + 0x1a) = uVal_9;
      *(uint32_t *)((int64_t)param_1 + 0xd4) = uVal_10;
      *(uint8_t *)(param_1 + 0x1b) = 0;
      local_88 = (uint8_t  [8])0x64;
      local_40 = param_1;
      if ((uint64_t)(((int64_t)(param_1[0xc] - param_1[10]) >> 3) * -0x3333333333333333) < 100) {
        func_0x18036b7c0(param_1 + 10,local_88);
      }
      return local_40;
    }
  }
  func_0x18007ba70();
LAB_18034e212:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18034e220
void Unwind_18034e220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18034e250
void Unwind_18034e250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@18034e280
void Unwind_18034e280(uint64_t param_1,int64_t param_2)
{
  func_0x18036e5e0(*(uint64_t *)(param_2 + 0x88));
  return;
}

// Unwind@18034e2b0
void Unwind_18034e2b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1031c) = 0;
  return;
}

// Unwind@18034f0d0
void Unwind_18034f0d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  *(uint8_t *)(param_2 + 0x1e3) = 0;
  return;
}

// Unwind@18034f110
void Unwind_18034f110(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1e3);
  func_0x180001e70(param_2 + 0x1a0);
  *(uint8_t *)(param_2 + 0x1ed) = 0;
  *(uint8_t *)(param_2 + 0x1ec) = uVal_1;
  return;
}

// Unwind@18034f160
void Unwind_18034f160(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x1ec);
  ch_2 = *(char *)(param_2 + 0x1ed);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x120);
  }
  *(char *)(param_2 + 0x1eb) = ch_2;
  *(byte *)(param_2 + 0x1ea) = bFlag_1 & 1;
  return;
}

// Unwind@18034f1c0
void Unwind_18034f1c0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x1ea);
  if (*(char *)(param_2 + 0x1eb) == '\x01') {
    func_0x180001e70(param_2 + 0xe0);
  }
  *(byte *)(param_2 + 0x1e9) = bFlag_1 & 1;
  return;
}

// Unwind@18034f210
void Unwind_18034f210(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1e9);
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x1ef) = uVal_1;
  return;
}

// Unwind@18034f260
void Unwind_18034f260(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1ef) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
  }
  return;
}

// Unwind@18034f2b0
void Unwind_18034f2b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x1e2) = 0;
  return;
}

// Unwind@18034f2f0
void Unwind_18034f2f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1e2);
  func_0x180001e70(param_2 + 0x1a0);
  *(uint8_t *)(param_2 + 0x1e8) = 0;
  *(uint8_t *)(param_2 + 0x1e7) = uVal_1;
  return;
}

// Unwind@18034f340
void Unwind_18034f340(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x1e7);
  ch_2 = *(char *)(param_2 + 0x1e8);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x140);
  }
  *(char *)(param_2 + 0x1e6) = ch_2;
  *(byte *)(param_2 + 0x1e5) = bFlag_1 & 1;
  return;
}

// Unwind@18034f3a0
void Unwind_18034f3a0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x1e5);
  if (*(char *)(param_2 + 0x1e6) == '\x01') {
    func_0x180001e70(param_2 + 0x100);
  }
  *(byte *)(param_2 + 0x1e4) = bFlag_1 & 1;
  return;
}

// Unwind@18034f400
void Unwind_18034f400(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1e4);
  func_0x180001e70(param_2 + 0x1c0);
  *(uint8_t *)(param_2 + 0x1ee) = uVal_1;
  return;
}

// Unwind@18034f450
void Unwind_18034f450(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1ee) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
  }
  return;
}

// Unwind@18034f4a0
void Unwind_18034f4a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1034c) = 0;
  *(uint8_t *)(param_2 + 0x1ef) = 1;
  return;
}

// Unwind@18034f4f0
void Unwind_18034f4f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x103a0) = 0;
  *(uint8_t *)(param_2 + 0x1ee) = 1;
  return;
}

// func_0x18034fc00
/* WARNING: Removing unreachable block (ram,0x0001803501b6) */
/* WARNING: Removing unreachable block (ram,0x0001803501bc) */
/* WARNING: Removing unreachable block (ram,0x0001803501c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x0001803501b6) */
/* WARNING: Removing unreachable block (ram,0x0001803501bc) */
/* WARNING: Removing unreachable block (ram,0x0001803501c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18034fc00(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint64_t *_Str_00;
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  size_t sz_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint8_t *pU64_13;
  uint64_t uVal_14;
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  undefined3 uStack_58;
  uint32_t uStack_55;
  uint32_t uStack_51;
  uint32_t uStack_4d;
  uint64_t *local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  uStack_58 = _UNK_1806c771a;
  uStack_55 = _UNK_1806c771d;
  uStack_51 = _UNK_1806c7721;
  uStack_4d = _UNK_1806c7725;
  local_68 = _DAT_1806c770a;
  uStack_64 = _UNK_1806c770e;
  uStack_60 = _UNK_1806c7712;
  uStack_5c = _UNK_1806c7716;
  local_78._4_4_ = _UNK_1806c76fe;
  local_78._0_4_ = _DAT_1806c76fa;
  uStack_70._0_4_ = _UNK_1806c7702;
  uStack_70._4_4_ = _UNK_1806c7706;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x103f8) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x103f8) = 1;
    func_0x1801bb2b0(lVal_11 + 0x103c5,local_78);
    func_0x180673140(&LAB_18036bd90);
  }
  uVal_9 = _UNK_1806b2c9c;
  uVal_8 = _UNK_1806b2c98;
  uVal_7 = _UNK_1806b2c94;
  uVal_6 = _DAT_1806b2c90;
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_11 + 0x103c5);
  if (*(char *)(lVal_11 + 0x103f4) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_11 + 0x103c9) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(lVal_11 + 0x103cd) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(lVal_11 + 0x103d1) ^ _UNK_1806b2c9c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_11 + 0x103d9) ^ uVal_7;
    auArr_2._0_4_ = *(uint *)(lVal_11 + 0x103d5) ^ uVal_6;
    auArr_2._8_4_ = *(uint *)(lVal_11 + 0x103dd) ^ uVal_8;
    auArr_2._12_4_ = *(uint *)(lVal_11 + 0x103e1) ^ uVal_9;
    *(uint8_t (*)[16])(lVal_11 + 0x103d5) = auArr_2;
    *(uint64_t *)(lVal_11 + 0x103e5) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_11 + 0x103e5) >> 0x20) ^ _UNK_1806b63e4,
                  (uint)*(uint64_t *)(lVal_11 + 0x103e5) ^ _DAT_1806b63e0);
    *(byte *)(lVal_11 + 0x103ed) = *(byte *)(lVal_11 + 0x103ed) ^ 0xcf;
    *(byte *)(lVal_11 + 0x103ee) = *(byte *)(lVal_11 + 0x103ee) ^ 0xd9;
    *(byte *)(lVal_11 + 0x103ef) = *(byte *)(lVal_11 + 0x103ef) ^ 0xf9;
    *(byte *)(lVal_11 + 0x103f0) = *(byte *)(lVal_11 + 0x103f0) ^ 9;
    *(byte *)(lVal_11 + 0x103f1) = *(byte *)(lVal_11 + 0x103f1) ^ 0xc5;
    *(byte *)(lVal_11 + 0x103f2) = *(byte *)(lVal_11 + 0x103f2) ^ 0x81;
    *(byte *)(lVal_11 + 0x103f3) = *(byte *)(lVal_11 + 0x103f3) ^ 0x51;
    *(uint8_t *)(lVal_11 + 0x103f4) = 0;
  }
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  _local_78 = ZEXT816(0);
  sz_10 = strlen((char *)_Str);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
  }
  else {
    if (sz_10 < 0x10) {
      pU64_13 = local_78;
      uVal_14 = 0xf;
    }
    else {
      uVal_12 = sz_10 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_12) {
        uVal_14 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_11;
      }
      local_78 = (uint8_t  [8])pU64_13;
    }
    local_68 = (uint32_t)sz_10;
    uStack_64 = (uint32_t)(sz_10 >> 0x20);
    uStack_60 = (uint32_t)uVal_14;
    uStack_5c = (uint32_t)(uVal_14 >> 0x20);
    func_0x1806aa960(pU64_13,_Str,sz_10);
    pU64_13[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1040c) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x1040c) = 1;
      *(uint8_t *)(lVal_11 + 0x10408) = 1;
      *(uint64_t *)(lVal_11 + 0x10400) = 0xb39f5a4599bb682;
      func_0x180673140(&LAB_18036bdc0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint64_t *)(lVal_11 + 0x10400);
    if (*(char *)(lVal_11 + 0x10408) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0xb5181c509f9d9cf;
      *(uint8_t *)(lVal_11 + 0x10408) = 0;
    }
    local_88 = ZEXT816(0);
    local_98 = ZEXT816(0);
    sz_10 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_10) {
      if (sz_10 < 0x10) {
        pU64_13 = local_98;
        uVal_14 = 0xf;
      }
      else {
        uVal_12 = sz_10 | 0xf;
        uVal_14 = 0x16;
        if (0x16 < uVal_12) {
          uVal_14 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
        }
        else {
          lVal_11 = func_0x180672de0(uVal_14 + 0x28);
          pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_13 + -8) = lVal_11;
        }
        local_98._0_8_ = pU64_13;
      }
      local_88._0_8_ = sz_10;
      local_88._8_8_ = uVal_14;
      func_0x1806aa960(pU64_13,_Str_00,sz_10);
      pU64_13[sz_10] = 0;
      func_0x180348cd0(param_1,local_98,local_78);
      if (0xf < (uint64_t)local_88._8_8_) {
        uVal_14 = local_88._8_8_ + 1;
        lVal_11 = local_98._0_8_;
        if (0xfff < uVal_14) {
          lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
          if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_1803501b4;
          uVal_14 = local_88._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_14);
      }
      uVal_14 = CONCAT44(uStack_5c,uStack_60);
      if (0xf < uVal_14) {
        uVal_12 = uVal_14 + 1;
        lVal_11 = (int64_t)local_78;
        if (0xfff < uVal_12) {
          lVal_11 = *(int64_t *)((int64_t)local_78 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_11)) goto LAB_1803501b4;
          uVal_12 = uVal_14 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_12);
      }
      *param_1 = &PTR_LAB_1806c5900;
      uVal_5 = _UNK_1806c3c0c;
      uVal_4 = _UNK_1806c3c08;
      uVal_3 = _UNK_1806c3c04;
      *(uint32_t *)(param_1 + 0x17) = _DAT_1806c3c00;
      *(uint32_t *)((int64_t)param_1 + 0xbc) = uVal_3;
      *(uint32_t *)(param_1 + 0x18) = uVal_4;
      *(uint32_t *)((int64_t)param_1 + 0xc4) = uVal_5;
      uVal_5 = _UNK_1806be66c;
      uVal_4 = _UNK_1806be668;
      uVal_3 = _UNK_1806be664;
      *(uint32_t *)(param_1 + 0x19) = _DAT_1806be660;
      *(uint32_t *)((int64_t)param_1 + 0xcc) = uVal_3;
      *(uint32_t *)(param_1 + 0x1a) = uVal_4;
      *(uint32_t *)((int64_t)param_1 + 0xd4) = uVal_5;
      *(uint8_t *)(param_1 + 0x1b) = 1;
      uVal_5 = _UNK_1806bafdc;
      uVal_4 = _UNK_1806bafd8;
      uVal_3 = _UNK_1806bafd4;
      *(uint32_t *)((int64_t)param_1 + 0xdc) = _DAT_1806bafd0;
      *(uint32_t *)(param_1 + 0x1c) = uVal_3;
      *(uint32_t *)((int64_t)param_1 + 0xe4) = uVal_4;
      *(uint32_t *)(param_1 + 0x1d) = uVal_5;
      *(uint8_t *)((int64_t)param_1 + 0xec) = 1;
      uVal_5 = _UNK_1806b288c;
      uVal_4 = _UNK_1806b2888;
      uVal_3 = _UNK_1806b2884;
      *(uint32_t *)(param_1 + 0x1e) = _DAT_1806b2880;
      *(uint32_t *)((int64_t)param_1 + 0xf4) = uVal_3;
      *(uint32_t *)(param_1 + 0x1f) = uVal_4;
      *(uint32_t *)((int64_t)param_1 + 0xfc) = uVal_5;
      *(uint8_t *)(param_1 + 0x20) = 1;
      local_78 = (uint8_t  [8])0x96;
      local_40 = param_1;
      if ((uint64_t)(((int64_t)(param_1[0xc] - param_1[10]) >> 3) * -0x3333333333333333) < 0x96) {
        func_0x18036b7c0(param_1 + 10,local_78);
      }
      local_78 = (uint8_t  [8])0xf;
      if ((uint64_t)(((int64_t)(local_40[0xf] - local_40[0xd]) >> 3) * -0x71c71c71c71c71c7) < 0xf)
      {
        func_0x18036bde0(local_40 + 0xd,local_78);
      }
      local_78 = (uint8_t  [8])0xf;
      if ((uint64_t)(((int64_t)(local_40[0x12] - local_40[0x10]) >> 3) * 0x6db6db6db6db6db7) < 0xf
         ) {
        func_0x180369820(local_40 + 0x10,local_78);
      }
      return local_40;
    }
  }
  func_0x18007ba70();
LAB_1803501b4:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1803501d0
void Unwind_1803501d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180350200
void Unwind_180350200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180350230
void Unwind_180350230(uint64_t param_1,int64_t param_2)
{
  func_0x18036e5e0(*(uint64_t *)(param_2 + 0x78));
  return;
}

// Unwind@180350260
void Unwind_180350260(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x103f8) = 0;
  return;
}

// Unwind@1803531b0
void Unwind_1803531b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x450);
  *(uint8_t *)(param_2 + 0x485) = 0;
  return;
}

// Unwind@1803531f0
void Unwind_1803531f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x485);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4a8) = 0;
  *(uint8_t *)(param_2 + 0x4a7) = uVal_1;
  return;
}

// Unwind@180353240
void Unwind_180353240(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x4a7);
  ch_2 = *(char *)(param_2 + 0x4a8);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 800);
  }
  *(char *)(param_2 + 0x4a6) = ch_2;
  *(byte *)(param_2 + 0x4a5) = bFlag_1 & 1;
  return;
}

// Unwind@1803532a0
void Unwind_1803532a0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x4a5);
  if (*(char *)(param_2 + 0x4a6) == '\x01') {
    func_0x180001e70(param_2 + 0x240);
  }
  *(byte *)(param_2 + 0x4a4) = bFlag_1 & 1;
  return;
}

// Unwind@180353300
void Unwind_180353300(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4a4);
  func_0x180001e70(param_2 + 0x410);
  *(uint8_t *)(param_2 + 0x4af) = uVal_1;
  return;
}

// Unwind@180353350
void Unwind_180353350(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4af) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
  }
  return;
}

// Unwind@1803533a0
void Unwind_1803533a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x450);
  *(uint8_t *)(param_2 + 0x484) = 0;
  return;
}

// Unwind@1803533e0
void Unwind_1803533e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x484);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4a3) = 0;
  *(uint8_t *)(param_2 + 0x4a2) = uVal_1;
  return;
}

// Unwind@180353430
void Unwind_180353430(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x4a2);
  ch_2 = *(char *)(param_2 + 0x4a3);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x340);
  }
  *(char *)(param_2 + 0x4a1) = ch_2;
  *(byte *)(param_2 + 0x4a0) = bFlag_1 & 1;
  return;
}

// Unwind@180353490
void Unwind_180353490(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x4a0);
  if (*(char *)(param_2 + 0x4a1) == '\x01') {
    func_0x180001e70(param_2 + 0x260);
  }
  *(byte *)(param_2 + 0x49f) = bFlag_1 & 1;
  return;
}

// Unwind@1803534f0
void Unwind_1803534f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x49f);
  func_0x180001e70(param_2 + 0x410);
  *(uint8_t *)(param_2 + 0x4ae) = uVal_1;
  return;
}

// Unwind@180353540
void Unwind_180353540(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4ae) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
  }
  return;
}

// Unwind@180353590
void Unwind_180353590(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x450);
  *(uint8_t *)(param_2 + 0x483) = 0;
  return;
}

// Unwind@1803535d0
void Unwind_1803535d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x483);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x49e) = 0;
  *(uint8_t *)(param_2 + 0x49d) = uVal_1;
  return;
}

// Unwind@180353620
void Unwind_180353620(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x49d);
  ch_2 = *(char *)(param_2 + 0x49e);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x360);
  }
  *(char *)(param_2 + 0x49c) = ch_2;
  *(byte *)(param_2 + 0x49b) = bFlag_1 & 1;
  return;
}

// Unwind@180353680
void Unwind_180353680(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x49b);
  if (*(char *)(param_2 + 0x49c) == '\x01') {
    func_0x180001e70(param_2 + 0x280);
  }
  *(byte *)(param_2 + 0x49a) = bFlag_1 & 1;
  return;
}

// Unwind@1803536e0
void Unwind_1803536e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x49a);
  func_0x180001e70(param_2 + 0x410);
  *(uint8_t *)(param_2 + 0x4ad) = uVal_1;
  return;
}

// Unwind@180353730
void Unwind_180353730(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4ad) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
  }
  return;
}

// Unwind@180353780
void Unwind_180353780(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x450);
  *(uint8_t *)(param_2 + 0x482) = 0;
  return;
}

// Unwind@1803537c0
void Unwind_1803537c0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x482);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x499) = 0;
  *(uint8_t *)(param_2 + 0x498) = uVal_1;
  return;
}

// Unwind@180353810
void Unwind_180353810(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x498);
  ch_2 = *(char *)(param_2 + 0x499);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x380);
  }
  *(char *)(param_2 + 0x497) = ch_2;
  *(byte *)(param_2 + 0x496) = bFlag_1 & 1;
  return;
}

// Unwind@180353870
void Unwind_180353870(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x496);
  if (*(char *)(param_2 + 0x497) == '\x01') {
    func_0x180001e70(param_2 + 0x2a0);
  }
  *(byte *)(param_2 + 0x495) = bFlag_1 & 1;
  return;
}

// Unwind@1803538d0
void Unwind_1803538d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x495);
  func_0x180001e70(param_2 + 0x410);
  *(uint8_t *)(param_2 + 0x4ac) = uVal_1;
  return;
}

// Unwind@180353920
void Unwind_180353920(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4ac) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x138), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x100));
  }
  return;
}

// Unwind@180353980
void Unwind_180353980(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x450);
  *(uint8_t *)(param_2 + 0x481) = 0;
  return;
}

// Unwind@1803539c0
void Unwind_1803539c0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x481);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x494) = 0;
  *(uint8_t *)(param_2 + 0x493) = uVal_1;
  return;
}

// Unwind@180353a10
void Unwind_180353a10(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x493);
  ch_2 = *(char *)(param_2 + 0x494);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x3a0);
  }
  *(char *)(param_2 + 0x492) = ch_2;
  *(byte *)(param_2 + 0x491) = bFlag_1 & 1;
  return;
}

// Unwind@180353a70
void Unwind_180353a70(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x491);
  if (*(char *)(param_2 + 0x492) == '\x01') {
    func_0x180001e70(param_2 + 0x2c0);
  }
  *(byte *)(param_2 + 0x490) = bFlag_1 & 1;
  return;
}

// Unwind@180353ad0
void Unwind_180353ad0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x490);
  func_0x180001e70(param_2 + 0x410);
  *(uint8_t *)(param_2 + 0x4ab) = uVal_1;
  return;
}

// Unwind@180353b20
void Unwind_180353b20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4ab) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x178), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x140));
  }
  return;
}

// Unwind@180353b80
void Unwind_180353b80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x450);
  *(uint8_t *)(param_2 + 0x480) = 0;
  return;
}

// Unwind@180353bc0
void Unwind_180353bc0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x480);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x48f) = 0;
  *(uint8_t *)(param_2 + 0x48e) = uVal_1;
  return;
}

// Unwind@180353c10
void Unwind_180353c10(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x48e);
  ch_2 = *(char *)(param_2 + 0x48f);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x3c0);
  }
  *(char *)(param_2 + 0x48d) = ch_2;
  *(byte *)(param_2 + 0x48c) = bFlag_1 & 1;
  return;
}

// Unwind@180353c70
void Unwind_180353c70(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x48c);
  if (*(char *)(param_2 + 0x48d) == '\x01') {
    func_0x180001e70(param_2 + 0x2e0);
  }
  *(byte *)(param_2 + 0x48b) = bFlag_1 & 1;
  return;
}

// Unwind@180353cd0
void Unwind_180353cd0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x48b);
  func_0x180001e70(param_2 + 0x410);
  *(uint8_t *)(param_2 + 0x4aa) = uVal_1;
  return;
}

// Unwind@180353d20
void Unwind_180353d20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4aa) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1b8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x180));
  }
  return;
}

// Unwind@180353d80
void Unwind_180353d80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x450);
  *(uint8_t *)(param_2 + 0x47f) = 0;
  return;
}

// Unwind@180353dc0
void Unwind_180353dc0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x47f);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x48a) = 0;
  *(uint8_t *)(param_2 + 0x489) = uVal_1;
  return;
}

// Unwind@180353e10
void Unwind_180353e10(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x489);
  ch_2 = *(char *)(param_2 + 0x48a);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x3e0);
  }
  *(char *)(param_2 + 0x488) = ch_2;
  *(byte *)(param_2 + 0x487) = bFlag_1 & 1;
  return;
}

// Unwind@180353e70
void Unwind_180353e70(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x487);
  if (*(char *)(param_2 + 0x488) == '\x01') {
    func_0x180001e70(param_2 + 0x300);
  }
  *(byte *)(param_2 + 0x486) = bFlag_1 & 1;
  return;
}

// Unwind@180353ed0
void Unwind_180353ed0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x486);
  func_0x180001e70(param_2 + 0x410);
  *(uint8_t *)(param_2 + 0x4a9) = uVal_1;
  return;
}

// Unwind@180353f20
void Unwind_180353f20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4a9) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1f8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c0));
  }
  return;
}

// Unwind@180353f80
void Unwind_180353f80(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10424) = 0;
  *(uint8_t *)(param_2 + 0x4af) = 1;
  return;
}

// Unwind@180353fd0
void Unwind_180353fd0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10460) = 0;
  *(uint8_t *)(param_2 + 0x4ae) = 1;
  return;
}

// Unwind@180354020
void Unwind_180354020(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x104a0) = 0;
  *(uint8_t *)(param_2 + 0x4ad) = 1;
  return;
}

// Unwind@180354070
void Unwind_180354070(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x104dc) = 0;
  *(uint8_t *)(param_2 + 0x4ac) = 1;
  return;
}

// Unwind@1803540c0
void Unwind_1803540c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10514) = 0;
  *(uint8_t *)(param_2 + 0x4ab) = 1;
  return;
}

// Unwind@180354110
void Unwind_180354110(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1055c) = 0;
  *(uint8_t *)(param_2 + 0x4aa) = 1;
  return;
}

// Unwind@180354160
void Unwind_180354160(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10598) = 0;
  *(uint8_t *)(param_2 + 0x4a9) = 1;
  return;
}

// Unwind@180354db0
void Unwind_180354db0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// func_0x180354f40
/* WARNING: Removing unreachable block (ram,0x0001803554a6) */
/* WARNING: Removing unreachable block (ram,0x0001803554ac) */
/* WARNING: Removing unreachable block (ram,0x0001803554b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x0001803554a6) */
/* WARNING: Removing unreachable block (ram,0x0001803554ac) */
/* WARNING: Removing unreachable block (ram,0x0001803554b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180354f40(uint64_t *param_1)
{
  uint8_t (*pArr16_1)[16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  size_t sz_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  uint8_t *pU64_16;
  uint64_t uVal_17;
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint8_t local_98 [16];
  uint8_t local_88 [24];
  uint64_t *local_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint8_t local_58 [8];
  uint64_t uStack_50;
  uint64_t local_48;
  uint64_t *local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_58._4_4_ = _UNK_1806c77dc;
  local_58._0_4_ = _DAT_1806c77d8;
  uStack_50._0_4_ = _UNK_1806c77e0;
  uStack_50._4_4_ = _UNK_1806c77e4;
  local_68._4_4_ = _UNK_1806c77cc;
  local_68._0_4_ = _DAT_1806c77c8;
  uStack_60._0_4_ = _UNK_1806c77d0;
  uStack_60._4_4_ = _UNK_1806c77d4;
  local_48 = 0xb78f8a96796f9bc;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x105e8) == '\0') {
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_15 + 0x105e8) = 1;
    func_0x1801b39d0(lVal_15 + 0x105bd,local_68);
    func_0x180673140(&LAB_18036c570);
  }
  uVal_12 = _UNK_1806b2c9c;
  uVal_11 = _UNK_1806b2c98;
  uVal_10 = _UNK_1806b2c94;
  uVal_9 = _DAT_1806b2c90;
  lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pArr16_1 = (uint8_t (*)[16])(lVal_15 + 0x105bd);
  if (*(char *)(lVal_15 + 0x105e5) == '\x01') {
    auArr_2._4_4_ = *(uint *)(lVal_15 + 0x105c1) ^ _UNK_1806b2c94;
    auArr_2._0_4_ = *(uint *)*pArr16_1 ^ _DAT_1806b2c90;
    auArr_2._8_4_ = *(uint *)(lVal_15 + 0x105c5) ^ _UNK_1806b2c98;
    auArr_2._12_4_ = *(uint *)(lVal_15 + 0x105c9) ^ _UNK_1806b2c9c;
    *pArr16_1 = auArr_2;
    auArr_4._4_4_ = *(uint *)(lVal_15 + 0x105d1) ^ uVal_10;
    auArr_4._0_4_ = *(uint *)(lVal_15 + 0x105cd) ^ uVal_9;
    auArr_4._8_4_ = *(uint *)(lVal_15 + 0x105d5) ^ uVal_11;
    auArr_4._12_4_ = *(uint *)(lVal_15 + 0x105d9) ^ uVal_12;
    *(uint8_t (*)[16])(lVal_15 + 0x105cd) = auArr_4;
    *(uint64_t *)(lVal_15 + 0x105dd) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_15 + 0x105dd) >> 0x20) ^ _UNK_1806b63e4,
                  (uint)*(uint64_t *)(lVal_15 + 0x105dd) ^ _DAT_1806b63e0);
    *(uint8_t *)(lVal_15 + 0x105e5) = 0;
  }
  _local_58 = ZEXT816(0);
  _local_68 = ZEXT816(0);
  sz_13 = strlen((char *)pArr16_1);
  if ((int64_t)sz_13 < 0) {
    func_0x18007ba70();
  }
  else {
    if (sz_13 < 0x10) {
      pU64_16 = local_68;
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
      local_68 = (uint8_t  [8])pU64_16;
    }
    uStack_50 = uVal_17;
    local_58 = (uint8_t  [8])sz_13;
    func_0x1806aa960(pU64_16,pArr16_1,sz_13);
    pU64_16[sz_13] = 0;
    local_a8 = _DAT_1806c77f0;
    uStack_a4 = _UNK_1806c77f4;
    uStack_a0 = _UNK_1806c77f8;
    uStack_9c = _UNK_1806c77fc;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x105fc) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x105fc) = 1;
      func_0x18007d150(lVal_15 + 0x105e9,&local_a8);
      func_0x180673140(&LAB_18036c5a0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_1 = (uint8_t (*)[16])(lVal_15 + 0x105e9);
    if (*(char *)(lVal_15 + 0x105f9) == '\x01') {
      auArr_3._4_4_ = *(uint *)(lVal_15 + 0x105ed) ^ _UNK_1806b2c94;
      auArr_3._0_4_ = *(uint *)*pArr16_1 ^ _DAT_1806b2c90;
      auArr_3._8_4_ = *(uint *)(lVal_15 + 0x105f1) ^ _UNK_1806b2c98;
      auArr_3._12_4_ = *(uint *)(lVal_15 + 0x105f5) ^ _UNK_1806b2c9c;
      *pArr16_1 = auArr_3;
      *(uint8_t *)(lVal_15 + 0x105f9) = 0;
    }
    local_88._0_16_ = ZEXT816(0);
    local_98 = ZEXT816(0);
    sz_13 = strlen((char *)pArr16_1);
    if (-1 < (int64_t)sz_13) {
      if (sz_13 < 0x10) {
        pU64_16 = local_98;
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
        local_98._0_8_ = pU64_16;
      }
      local_88._0_8_ = sz_13;
      local_88._8_8_ = uVal_17;
      func_0x1806aa960(pU64_16,pArr16_1,sz_13);
      pU64_16[sz_13] = 0;
      func_0x180348cd0(param_1,local_98,local_68);
      if (0xf < (uint64_t)local_88._8_8_) {
        uVal_17 = local_88._8_8_ + 1;
        lVal_15 = local_98._0_8_;
        if (0xfff < uVal_17) {
          lVal_15 = *(int64_t *)(local_98._0_8_ + -8);
          if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_15)) goto LAB_1803554a4;
          uVal_17 = local_88._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_17);
      }
      if (0xf < uStack_50) {
        uVal_17 = uStack_50 + 1;
        lVal_15 = (int64_t)local_68;
        if (0xfff < uVal_17) {
          lVal_15 = *(int64_t *)((int64_t)local_68 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_68 + -8) - lVal_15)) goto LAB_1803554a4;
          uVal_17 = uStack_50 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_17);
      }
      *param_1 = &PTR_LAB_1806c5950;
      uVal_8 = _UNK_1806b288c;
      uVal_7 = _UNK_1806b2888;
      uVal_6 = _UNK_1806b2884;
      uVal_5 = _DAT_1806b2880;
      *(uint32_t *)(param_1 + 0x17) = _DAT_1806b2880;
      *(uint32_t *)((int64_t)param_1 + 0xbc) = uVal_6;
      *(uint32_t *)(param_1 + 0x18) = uVal_7;
      *(uint32_t *)((int64_t)param_1 + 0xc4) = uVal_8;
      *(uint8_t *)(param_1 + 0x19) = 1;
      *(uint32_t *)((int64_t)param_1 + 0xcc) = uVal_5;
      *(uint32_t *)(param_1 + 0x1a) = uVal_6;
      *(uint32_t *)((int64_t)param_1 + 0xd4) = uVal_7;
      *(uint32_t *)(param_1 + 0x1b) = uVal_8;
      local_70 = param_1 + 0x1c;
      *(uint8_t (*)[16])(param_1 + 0x1c) = ZEXT816(0);
      param_1[0x1e] = 0;
      local_68 = (uint8_t  [8])0x12c;
      local_40 = param_1;
      if ((uint64_t)(((int64_t)(param_1[0x12] - param_1[0x10]) >> 3) * 0x6db6db6db6db6db7) < 300)
      {
        func_0x180369820(param_1 + 0x10,local_68);
      }
      local_68 = (uint8_t  [8])0x32;
      if ((uint64_t)(((int64_t)(local_40[0xf] - local_40[0xd]) >> 3) * -0x71c71c71c71c71c7) < 0x32
         ) {
        func_0x18036bde0(local_40 + 0xd,local_68);
      }
      local_68 = (uint8_t  [8])0x32;
      if ((uint64_t)((int64_t)(local_40[0x1e] - local_40[0x1c]) >> 5) < 0x32) {
        func_0x18036c5c0(local_70,local_68);
      }
      return local_40;
    }
  }
  func_0x18007ba70();
LAB_1803554a4:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1803554c0
void Unwind_1803554c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1803554f0
void Unwind_1803554f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180355520
void Unwind_180355520(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x58));
  func_0x18036e5e0(*(uint64_t *)(param_2 + 0x88));
  return;
}

// Unwind@180355560
void Unwind_180355560(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x105e8) = 0;
  return;
}

// Unwind@1803555a0
void Unwind_1803555a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x105fc) = 0;
  return;
}

// Unwind@180356a60
void Unwind_180356a60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x27d) = 0;
  return;
}

// Unwind@180356aa0
void Unwind_180356aa0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x27d);
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x28b) = 0;
  *(uint8_t *)(param_2 + 0x28a) = uVal_1;
  return;
}

// Unwind@180356af0
void Unwind_180356af0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x28a);
  ch_2 = *(char *)(param_2 + 0x28b);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x180);
  }
  *(char *)(param_2 + 0x289) = ch_2;
  *(byte *)(param_2 + 0x288) = bFlag_1 & 1;
  return;
}

// Unwind@180356b50
void Unwind_180356b50(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x288);
  if (*(char *)(param_2 + 0x289) == '\x01') {
    func_0x180001e70(param_2 + 0x120);
  }
  *(byte *)(param_2 + 0x287) = bFlag_1 & 1;
  return;
}

// Unwind@180356bb0
void Unwind_180356bb0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x287);
  func_0x180001e70(param_2 + 0x1f0);
  *(uint8_t *)(param_2 + 0x28f) = uVal_1;
  return;
}

// Unwind@180356c00
void Unwind_180356c00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x28f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
  }
  return;
}

// Unwind@180356c50
void Unwind_180356c50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1f0);
  *(uint8_t *)(param_2 + 0x27c) = 0;
  return;
}

// Unwind@180356c90
void Unwind_180356c90(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x27c);
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x286) = 0;
  *(uint8_t *)(param_2 + 0x285) = uVal_1;
  return;
}

// Unwind@180356ce0
void Unwind_180356ce0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x285);
  ch_2 = *(char *)(param_2 + 0x286);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x1a0);
  }
  *(char *)(param_2 + 0x284) = ch_2;
  *(byte *)(param_2 + 0x283) = bFlag_1 & 1;
  return;
}

// Unwind@180356d40
void Unwind_180356d40(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x283);
  if (*(char *)(param_2 + 0x284) == '\x01') {
    func_0x180001e70(param_2 + 0x140);
  }
  *(byte *)(param_2 + 0x28e) = bFlag_1 & 1;
  return;
}

// Unwind@180356da0
void Unwind_180356da0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x28e);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x28d) = uVal_1;
  return;
}

// Unwind@180356df0
void Unwind_180356df0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x28d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
  }
  return;
}

// Unwind@180356e40
void Unwind_180356e40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x27b) = 0;
  return;
}

// Unwind@180356e80
void Unwind_180356e80(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x27b);
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x282) = 0;
  *(uint8_t *)(param_2 + 0x281) = uVal_1;
  return;
}

// Unwind@180356ed0
void Unwind_180356ed0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x281);
  ch_2 = *(char *)(param_2 + 0x282);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x1c0);
  }
  *(char *)(param_2 + 0x280) = ch_2;
  *(byte *)(param_2 + 0x27f) = bFlag_1 & 1;
  return;
}

// Unwind@180356f30
void Unwind_180356f30(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x27f);
  if (*(char *)(param_2 + 0x280) == '\x01') {
    func_0x180001e70(param_2 + 0x160);
  }
  *(byte *)(param_2 + 0x27e) = bFlag_1 & 1;
  return;
}

// Unwind@180356f90
void Unwind_180356f90(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x27e);
  func_0x180001e70(param_2 + 0x1f0);
  *(uint8_t *)(param_2 + 0x28c) = uVal_1;
  return;
}

// Unwind@180356fe0
void Unwind_180356fe0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x28c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
  }
  return;
}

// Unwind@180357030
void Unwind_180357030(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10614) = 0;
  *(uint8_t *)(param_2 + 0x28f) = 1;
  return;
}

// Unwind@180357080
void Unwind_180357080(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10668) = 0;
  *(uint8_t *)(param_2 + 0x28d) = 1;
  return;
}

// Unwind@1803570d0
void Unwind_1803570d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1067c) = 0;
  *(uint8_t *)(param_2 + 0x28e) = 1;
  return;
}

// Unwind@180357120
void Unwind_180357120(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x106b0) = 0;
  *(uint8_t *)(param_2 + 0x28c) = 1;
  return;
}

// Unwind@180357250
void Unwind_180357250(void)
{
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18083ffe0);
  return;
}

// Unwind@1803576f0
void Unwind_1803576f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// func_0x1803577b0
void func_0x1803577b0(int *param_1)
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
  uint64_t *pU64_3;
  int local_24;
  uint64_t local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (DAT_180840b28 == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_18083ffe0);
    local_20 = &DAT_28d478d88fb3dcdf;
    DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
    if (DAT_180840a60 == 0) {
      DAT_180840a68 = 0;
    }
    local_24 = func_0x180125010(DAT_180840a60);
    pU64_1 = DAT_18083ff40;
    if (DAT_18083ff38 != DAT_18083ff40) {
      pU64_3 = DAT_18083ff38;
      do {
        if (((*(int *)(pU64_3 + 2) == *param_1) && (*(int *)((int64_t)pU64_3 + 0x14) == param_1[1])
            ) && (*(int *)(pU64_3 + 3) == param_1[2])) {
          uVal_2 = (uint64_t)local_24;
          if (*pU64_3 == uVal_2) {
            *(int *)(pU64_3 + 1) = *(int *)(pU64_3 + 1) + 1;
          }
          else if (*pU64_3 < uVal_2) {
            *(uint32_t *)(pU64_3 + 1) = 1;
            *pU64_3 = uVal_2;
          }
          goto LAB_1803578fb;
        }
        pU64_3 = pU64_3 + 4;
      } while (pU64_3 != DAT_18083ff40);
    }
    local_20 = (uint8_t *)CONCAT44(local_20._4_4_,1);
    if (DAT_18083ff40 == DAT_18083ff48) {
      func_0x18036d0d0(&DAT_18083ff38,DAT_18083ff40,param_1,&local_20,&local_24);
    }
    else {
      *DAT_18083ff40 = (int64_t)local_24;
      *(uint32_t *)(pU64_1 + 1) = 1;
      *(int *)(pU64_1 + 2) = *param_1;
      *(int *)((int64_t)pU64_1 + 0x14) = param_1[1];
      *(int *)(pU64_1 + 3) = param_1[2];
      DAT_18083ff40 = DAT_18083ff40 + 4;
    }
LAB_1803578fb:
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18083ffe0);
  }
  return;
}

// Unwind@180357920
void Unwind_180357920(void)
{
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18083ffe0);
  return;
}

// func_0x180357950
void func_0x180357950(void)
{
  uint64_t *pU64_1;
  int iVal_2;
  uint64_t *pU64_3;
  uint64_t uVal_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_18083ffe0);
  if (DAT_18083ff38 != DAT_18083ff40) {
    DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
    if (DAT_180840a60 == 0) {
      DAT_180840a68 = 0;
    }
    iVal_2 = func_0x180125010(DAT_180840a60);
    if (DAT_18083ff40 != DAT_18083ff38) {
      uVal_4 = 0;
      pU64_3 = DAT_18083ff40;
      pU64_5 = DAT_18083ff38;
      do {
        if ((uint64_t)pU64_5[uVal_4 * 4] < (uint64_t)(int64_t)(iVal_2 + -200)) {
          pU64_6 = pU64_5 + uVal_4 * 4 + 4;
          pU64_1 = pU64_3;
          for (; pU64_6 != pU64_3; pU64_6 = pU64_6 + 4) {
            *(uint32_t *)(pU64_6 + -2) = *(uint32_t *)(pU64_6 + 2);
            *(uint64_t *)((int64_t)pU64_6 + -0xc) = *(uint64_t *)((int64_t)pU64_6 + 0x14);
            *(uint32_t *)(pU64_6 + -3) = *(uint32_t *)(pU64_6 + 1);
            pU64_6[-4] = *pU64_6;
            pU64_1 = DAT_18083ff40;
            pU64_5 = DAT_18083ff38;
          }
          pU64_3 = pU64_1 + -4;
          DAT_18083ff40 = pU64_3;
        }
        uVal_4 = uVal_4 + 1;
      } while (uVal_4 < (uint64_t)((int64_t)pU64_3 - (int64_t)pU64_5 >> 5));
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18083ffe0);
  return;
}

// Unwind@180357ac0
void Unwind_180357ac0(void)
{
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18083ffe0);
  return;
}

// func_0x180357af0
/* WARNING: Removing unreachable block (ram,0x000180357f7d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x000180357f7d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180357af0(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint *_Str_00;
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  size_t sz_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint8_t *pU64_13;
  uint64_t uVal_14;
  uint8_t local_98 [16];
  size_t local_88;
  uint64_t local_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  size_t local_68;
  uint32_t local_60;
  uint32_t uStack_5c;
  undefined3 uStack_58;
  uint32_t uStack_55;
  uint32_t uStack_51;
  uint64_t *local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  uStack_58 = _UNK_1806c7896;
  uStack_55 = _UNK_1806c7899;
  uStack_51 = _UNK_1806c789d;
  local_68 = CONCAT44(_UNK_1806c788a,_DAT_1806c7886);
  local_60 = _UNK_1806c788e;
  uStack_5c = _UNK_1806c7892;
  local_78._4_4_ = _UNK_1806c787a;
  local_78._0_4_ = _DAT_1806c7876;
  uStack_70._0_4_ = _UNK_1806c787e;
  uStack_70._4_4_ = _UNK_1806c7882;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x10704) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x10704) = 1;
    func_0x1801b3830(lVal_11 + 0x106d5,local_78);
    func_0x180673140(&LAB_18036d330);
  }
  uVal_9 = _UNK_1806b5b0c;
  uVal_8 = _UNK_1806b5b08;
  uVal_7 = _UNK_1806b5b04;
  uVal_6 = _DAT_1806b5b00;
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_11 + 0x106d5);
  if (*(char *)(lVal_11 + 0x10700) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_11 + 0x106d9) ^ _UNK_1806b5b04;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b5b00;
    auArr_1._8_4_ = *(uint *)(lVal_11 + 0x106dd) ^ _UNK_1806b5b08;
    auArr_1._12_4_ = *(uint *)(lVal_11 + 0x106e1) ^ _UNK_1806b5b0c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_11 + 0x106e9) ^ uVal_7;
    auArr_2._0_4_ = *(uint *)(lVal_11 + 0x106e5) ^ uVal_6;
    auArr_2._8_4_ = *(uint *)(lVal_11 + 0x106ed) ^ uVal_8;
    auArr_2._12_4_ = *(uint *)(lVal_11 + 0x106f1) ^ uVal_9;
    *(uint8_t (*)[16])(lVal_11 + 0x106e5) = auArr_2;
    *(uint64_t *)(lVal_11 + 0x106f5) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_11 + 0x106f5) >> 0x20) ^ _UNK_1806b5b14,
                  (uint)*(uint64_t *)(lVal_11 + 0x106f5) ^ _DAT_1806b5b10);
    *(byte *)(lVal_11 + 0x106fd) = *(byte *)(lVal_11 + 0x106fd) ^ 0xdd;
    *(byte *)(lVal_11 + 0x106fe) = *(byte *)(lVal_11 + 0x106fe) ^ 0xd1;
    *(byte *)(lVal_11 + 0x106ff) = *(byte *)(lVal_11 + 0x106ff) ^ 0x69;
    *(uint8_t *)(lVal_11 + 0x10700) = 0;
  }
  _local_78 = ZEXT816(0);
  sz_10 = strlen((char *)_Str);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
  }
  else {
    if (sz_10 < 0x10) {
      pU64_13 = local_78;
      uVal_14 = 0xf;
    }
    else {
      uVal_12 = sz_10 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_12) {
        uVal_14 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_11;
      }
      local_78 = (uint8_t  [8])pU64_13;
    }
    local_60 = (uint32_t)uVal_14;
    uStack_5c = (uint32_t)(uVal_14 >> 0x20);
    local_68 = sz_10;
    func_0x1806aa960(pU64_13,_Str,sz_10);
    pU64_13[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x10710) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x10710) = 1;
      *(uint32_t *)(lVal_11 + 0x10708) = 0x801dbe93;
      *(uint16_t *)(lVal_11 + 0x1070c) = 0x1cb;
      func_0x180673140(&LAB_18036d360);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint *)(lVal_11 + 0x10708);
    if (*(char *)(lVal_11 + 0x1070d) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0xe569d1dd;
      *(byte *)(lVal_11 + 0x1070c) = *(byte *)(lVal_11 + 0x1070c) ^ 0xcb;
      *(uint8_t *)(lVal_11 + 0x1070d) = 0;
    }
    local_98 = ZEXT816(0);
    sz_10 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_10) {
      if (sz_10 < 0x10) {
        pU64_13 = local_98;
        uVal_14 = 0xf;
      }
      else {
        uVal_12 = sz_10 | 0xf;
        uVal_14 = 0x16;
        if (0x16 < uVal_12) {
          uVal_14 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
        }
        else {
          lVal_11 = func_0x180672de0(uVal_14 + 0x28);
          pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_13 + -8) = lVal_11;
        }
        local_98._0_8_ = pU64_13;
      }
      local_88 = sz_10;
      local_80 = uVal_14;
      func_0x1806aa960(pU64_13,_Str_00,sz_10);
      pU64_13[sz_10] = 0;
      func_0x180348cd0(param_1,local_98,local_78);
      if (0xf < local_80) {
        uVal_14 = local_80 + 1;
        lVal_11 = local_98._0_8_;
        if (0xfff < uVal_14) {
          lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
          if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_180357f7b;
          uVal_14 = local_80 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_14);
      }
      uVal_14 = CONCAT44(uStack_5c,local_60);
      if (0xf < uVal_14) {
        uVal_12 = uVal_14 + 1;
        lVal_11 = (int64_t)local_78;
        if (0xfff < uVal_12) {
          lVal_11 = *(int64_t *)((int64_t)local_78 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_11)) goto LAB_180357f7b;
          uVal_12 = uVal_14 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_12);
      }
      *param_1 = &PTR_LAB_1806c59a0;
      *(uint16_t *)(param_1 + 0x17) = 0x101;
      uVal_5 = _UNK_1806b288c;
      uVal_4 = _UNK_1806b2888;
      uVal_3 = _UNK_1806b2884;
      *(uint32_t *)((int64_t)param_1 + 0xbc) = _DAT_1806b2880;
      *(uint32_t *)(param_1 + 0x18) = uVal_3;
      *(uint32_t *)((int64_t)param_1 + 0xc4) = uVal_4;
      *(uint32_t *)(param_1 + 0x19) = uVal_5;
      *(uint8_t (*)[16])(param_1 + 0x1c) = ZEXT816(0);
      *(uint8_t (*)[16])(param_1 + 0x1a) = ZEXT816(0);
      *(uint32_t *)(param_1 + 0x1d) = 0xffffffff;
      *(uint8_t (*)[16])(param_1 + 0x20) = ZEXT816(0);
      *(uint8_t (*)[16])(param_1 + 0x1e) = ZEXT816(0);
      *(uint32_t *)(param_1 + 0x21) = 0xffffffff;
      *(uint8_t (*)[16])(param_1 + 0x24) = ZEXT816(0);
      *(uint8_t (*)[16])(param_1 + 0x22) = ZEXT816(0);
      *(uint32_t *)(param_1 + 0x25) = 0xffffffff;
      local_78 = (uint8_t  [8])0x32;
      local_40 = param_1;
      if ((uint64_t)(((int64_t)(param_1[0xf] - param_1[0xd]) >> 3) * -0x71c71c71c71c71c7) < 0x32)
      {
        func_0x18036bde0(param_1 + 0xd,local_78);
      }
      return local_40;
    }
  }
  func_0x18007ba70();
LAB_180357f7b:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180357f90
void Unwind_180357f90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180357fc0
void Unwind_180357fc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180357ff0
void Unwind_180357ff0(uint64_t param_1,int64_t param_2)
{
  func_0x1800822d0(*(uint64_t *)(param_2 + 0x38));
  func_0x1800822d0(*(uint64_t *)(param_2 + 0x30));
  func_0x1800822d0(*(uint64_t *)(param_2 + 0x28));
  func_0x18036e5e0(*(uint64_t *)(param_2 + 0x98));
  return;
}

// Unwind@180358040
void Unwind_180358040(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10704) = 0;
  return;
}

// Unwind@18035b710
void Unwind_18035b710(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x3fb) = 0;
  return;
}

// Unwind@18035b750
void Unwind_18035b750(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3fb);
  func_0x180001e70(param_2 + 0x3b0);
  *(uint8_t *)(param_2 + 0x418) = 0;
  *(uint8_t *)(param_2 + 0x417) = uVal_1;
  return;
}

// Unwind@18035b7a0
void Unwind_18035b7a0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x417);
  ch_2 = *(char *)(param_2 + 0x418);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x2a0);
  }
  *(char *)(param_2 + 0x416) = ch_2;
  *(byte *)(param_2 + 0x415) = bFlag_1 & 1;
  return;
}

// Unwind@18035b800
void Unwind_18035b800(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x415);
  if (*(char *)(param_2 + 0x416) == '\x01') {
    func_0x180001e70(param_2 + 0x1e0);
  }
  *(byte *)(param_2 + 0x41f) = bFlag_1 & 1;
  return;
}

// Unwind@18035b860
void Unwind_18035b860(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x41f);
  func_0x180001e70(param_2 + 0x3d0);
  *(uint8_t *)(param_2 + 0x41e) = uVal_1;
  return;
}

// Unwind@18035b8b0
void Unwind_18035b8b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x41e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
  }
  return;
}

// Unwind@18035b900
void Unwind_18035b900(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x3fa) = 0;
  return;
}

// Unwind@18035b940
void Unwind_18035b940(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3fa);
  func_0x180001e70(param_2 + 0x3b0);
  *(uint8_t *)(param_2 + 0x414) = 0;
  *(uint8_t *)(param_2 + 0x413) = uVal_1;
  return;
}

// Unwind@18035b990
void Unwind_18035b990(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x413);
  ch_2 = *(char *)(param_2 + 0x414);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x2c0);
  }
  *(char *)(param_2 + 0x412) = ch_2;
  *(byte *)(param_2 + 0x411) = bFlag_1 & 1;
  return;
}

// Unwind@18035b9f0
void Unwind_18035b9f0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x411);
  if (*(char *)(param_2 + 0x412) == '\x01') {
    func_0x180001e70(param_2 + 0x200);
  }
  *(byte *)(param_2 + 0x410) = bFlag_1 & 1;
  return;
}

// Unwind@18035ba50
void Unwind_18035ba50(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x410);
  func_0x180001e70(param_2 + 0x3d0);
  *(uint8_t *)(param_2 + 0x41d) = uVal_1;
  return;
}

// Unwind@18035baa0
void Unwind_18035baa0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x41d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
  }
  return;
}

// Unwind@18035baf0
void Unwind_18035baf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3d0);
  *(uint8_t *)(param_2 + 0x3f9) = 0;
  return;
}

// Unwind@18035bb30
void Unwind_18035bb30(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3f9);
  func_0x180001e70(param_2 + 0x3b0);
  *(uint8_t *)(param_2 + 0x40f) = 0;
  *(uint8_t *)(param_2 + 0x40e) = uVal_1;
  return;
}

// Unwind@18035bb80
void Unwind_18035bb80(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x40e);
  ch_2 = *(char *)(param_2 + 0x40f);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x2e0);
  }
  *(char *)(param_2 + 0x40d) = ch_2;
  *(byte *)(param_2 + 0x40c) = bFlag_1 & 1;
  return;
}

// Unwind@18035bbe0
void Unwind_18035bbe0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x40c);
  if (*(char *)(param_2 + 0x40d) == '\x01') {
    func_0x180001e70(param_2 + 0x220);
  }
  *(byte *)(param_2 + 0x40b) = bFlag_1 & 1;
  return;
}

// Unwind@18035bc40
void Unwind_18035bc40(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x40b);
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x40a) = uVal_1;
  return;
}

// Unwind@18035bc90
void Unwind_18035bc90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x40a) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
  }
  return;
}

// Unwind@18035bce0
void Unwind_18035bce0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3b0);
  return;
}

// Unwind@18035bd20
void Unwind_18035bd20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3d0);
  return;
}

// Unwind@18035bd60
void Unwind_18035bd60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@18035bda0
void Unwind_18035bda0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x3f8) = 0;
  return;
}

// Unwind@18035bde0
void Unwind_18035bde0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3f8);
  func_0x180001e70(param_2 + 0x3b0);
  *(uint8_t *)(param_2 + 0x409) = 0;
  *(uint8_t *)(param_2 + 0x408) = uVal_1;
  return;
}

// Unwind@18035be30
void Unwind_18035be30(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x408);
  ch_2 = *(char *)(param_2 + 0x409);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x300);
  }
  *(char *)(param_2 + 0x407) = ch_2;
  *(byte *)(param_2 + 0x406) = bFlag_1 & 1;
  return;
}

// Unwind@18035be90
void Unwind_18035be90(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x406);
  if (*(char *)(param_2 + 0x407) == '\x01') {
    func_0x180001e70(param_2 + 0x240);
  }
  *(byte *)(param_2 + 0x405) = bFlag_1 & 1;
  return;
}

// Unwind@18035bef0
void Unwind_18035bef0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x405);
  func_0x180001e70(param_2 + 0x3d0);
  *(uint8_t *)(param_2 + 0x41c) = uVal_1;
  return;
}

// Unwind@18035bf40
void Unwind_18035bf40(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x41c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x138), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x100));
  }
  return;
}

// Unwind@18035bfa0
void Unwind_18035bfa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3b0);
  return;
}

// Unwind@18035bfe0
void Unwind_18035bfe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3d0);
  return;
}

// Unwind@18035c020
void Unwind_18035c020(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@18035c060
void Unwind_18035c060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x3f7) = 0;
  return;
}

// Unwind@18035c0a0
void Unwind_18035c0a0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3f7);
  func_0x180001e70(param_2 + 0x3b0);
  *(uint8_t *)(param_2 + 0x404) = 0;
  *(uint8_t *)(param_2 + 0x403) = uVal_1;
  return;
}

// Unwind@18035c0f0
void Unwind_18035c0f0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x403);
  ch_2 = *(char *)(param_2 + 0x404);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 800);
  }
  *(char *)(param_2 + 0x402) = ch_2;
  *(byte *)(param_2 + 0x401) = bFlag_1 & 1;
  return;
}

// Unwind@18035c150
void Unwind_18035c150(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x401);
  if (*(char *)(param_2 + 0x402) == '\x01') {
    func_0x180001e70(param_2 + 0x260);
  }
  *(byte *)(param_2 + 0x400) = bFlag_1 & 1;
  return;
}

// Unwind@18035c1b0
void Unwind_18035c1b0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x400);
  func_0x180001e70(param_2 + 0x3d0);
  *(uint8_t *)(param_2 + 0x41b) = uVal_1;
  return;
}

// Unwind@18035c200
void Unwind_18035c200(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x41b) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x178), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x140));
  }
  return;
}

// Unwind@18035c260
void Unwind_18035c260(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3d0);
  return;
}

// Unwind@18035c2a0
void Unwind_18035c2a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@18035c2e0
void Unwind_18035c2e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x3f6) = 0;
  return;
}

// Unwind@18035c320
void Unwind_18035c320(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3f6);
  func_0x180001e70(param_2 + 0x3b0);
  *(uint8_t *)(param_2 + 0x3ff) = 0;
  *(uint8_t *)(param_2 + 0x3fe) = uVal_1;
  return;
}

// Unwind@18035c370
void Unwind_18035c370(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x3fe);
  ch_2 = *(char *)(param_2 + 0x3ff);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x340);
  }
  *(char *)(param_2 + 0x3fd) = ch_2;
  *(byte *)(param_2 + 0x3fc) = bFlag_1 & 1;
  return;
}

// Unwind@18035c3d0
void Unwind_18035c3d0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x3fc);
  if (*(char *)(param_2 + 0x3fd) == '\x01') {
    func_0x180001e70(param_2 + 0x280);
  }
  *(byte *)(param_2 + 0x41a) = bFlag_1 & 1;
  return;
}

// Unwind@18035c430
void Unwind_18035c430(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x41a);
  func_0x180001e70(param_2 + 0x3d0);
  *(uint8_t *)(param_2 + 0x419) = uVal_1;
  return;
}

// Unwind@18035c480
void Unwind_18035c480(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x419) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1b8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x180));
  }
  return;
}

// Unwind@18035c4e0
void Unwind_18035c4e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10738) = 0;
  *(uint8_t *)(param_2 + 0x41e) = 1;
  return;
}

// Unwind@18035c530
void Unwind_18035c530(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10750) = 0;
  *(uint8_t *)(param_2 + 0x41f) = 1;
  return;
}

// Unwind@18035c580
void Unwind_18035c580(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1078c) = 0;
  *(uint8_t *)(param_2 + 0x41d) = 1;
  return;
}

// Unwind@18035c5d0
void Unwind_18035c5d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10840) = 0;
  *(uint8_t *)(param_2 + 0x41c) = 1;
  return;
}

// Unwind@18035c620
void Unwind_18035c620(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x108dc) = 0;
  *(uint8_t *)(param_2 + 0x41b) = 1;
  return;
}

// Unwind@18035c670
void Unwind_18035c670(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10950) = 0;
  *(uint8_t *)(param_2 + 0x419) = 1;
  return;
}

// Unwind@18035c6c0
void Unwind_18035c6c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10968) = 0;
  *(uint8_t *)(param_2 + 0x41a) = 1;
  return;
}

// Unwind@18035da90
void Unwind_18035da90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@18035db70
void Unwind_18035db70(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x150);
  return;
}

// Unwind@18035dc50
void Unwind_18035dc50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x175) = 0;
  return;
}

// Unwind@18035dd30
void Unwind_18035dd30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x176) = 0;
  return;
}

// Unwind@18035de10
void Unwind_18035de10(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x175) == '\x01') {
    func_0x180001e70(param_2 + 0x90);
  }
  return;
}

// Unwind@18035def0
void Unwind_18035def0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x176) == '\x01') {
    func_0x180001e70(param_2 + 0x70);
  }
  return;
}

// Unwind@18035dfd0
void Unwind_18035dfd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@18035e0b0
void Unwind_18035e0b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// func_0x18035e190
/* WARNING: Removing unreachable block (ram,0x00018035e5f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x00018035e5f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18035e190(uint64_t *param_1)
{
  uint *_Str;
  uint64_t *_Str_00;
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
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
  uint8_t local_98 [16];
  size_t local_88;
  uint64_t local_80;
  uint8_t local_78 [16];
  size_t local_68;
  uint64_t uStack_60;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint64_t *local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_58 = _DAT_1806c7a34;
  uStack_54 = _UNK_1806c7a38;
  uStack_50 = _UNK_1806c7a3c;
  uStack_4c = _UNK_1806c7a40;
  local_68 = CONCAT44(_UNK_1806c7a28,_DAT_1806c7a24);
  uStack_60 = CONCAT44(_UNK_1806c7a30,_UNK_1806c7a2c);
  local_78._8_8_ = _UNK_1806c7a1c;
  local_78._0_8_ = _DAT_1806c7a14;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x10a30) == '\0') {
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_10 + 0x10a30) = 1;
    func_0x1801b4680(lVal_10 + 0x109fd,local_78);
    func_0x180673140(&LAB_18036def0);
  }
  uVal_7 = _UNK_1806b2c9c;
  uVal_6 = _UNK_1806b2c98;
  uVal_5 = _UNK_1806b2c94;
  uVal_4 = _DAT_1806b2c90;
  lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint *)(lVal_10 + 0x109fd);
  if (*(char *)(lVal_10 + 0x10a2d) == '\x01') {
    uVal_13 = *(uint *)(lVal_10 + 0x10a01) ^ _UNK_1806b2c94;
    uVal_14 = *(uint *)(lVal_10 + 0x10a05) ^ _UNK_1806b2c98;
    uVal_15 = *(uint *)(lVal_10 + 0x10a09) ^ _UNK_1806b2c9c;
    *_Str = *_Str ^ _DAT_1806b2c90;
    *(uint *)(lVal_10 + 0x10a01) = uVal_13;
    *(uint *)(lVal_10 + 0x10a05) = uVal_14;
    *(uint *)(lVal_10 + 0x10a09) = uVal_15;
    *(uint *)(lVal_10 + 0x10a0d) = *(uint *)(lVal_10 + 0x10a0d) ^ uVal_4;
    *(uint *)(lVal_10 + 0x10a11) = *(uint *)(lVal_10 + 0x10a11) ^ uVal_5;
    *(uint *)(lVal_10 + 0x10a15) = *(uint *)(lVal_10 + 0x10a15) ^ uVal_6;
    *(uint *)(lVal_10 + 0x10a19) = *(uint *)(lVal_10 + 0x10a19) ^ uVal_7;
    *(uint *)(lVal_10 + 0x10a1d) = *(uint *)(lVal_10 + 0x10a1d) ^ uVal_4;
    *(uint *)(lVal_10 + 0x10a21) = *(uint *)(lVal_10 + 0x10a21) ^ uVal_5;
    *(uint *)(lVal_10 + 0x10a25) = *(uint *)(lVal_10 + 0x10a25) ^ uVal_6;
    *(uint *)(lVal_10 + 0x10a29) = *(uint *)(lVal_10 + 0x10a29) ^ uVal_7;
    *(uint8_t *)(lVal_10 + 0x10a2d) = 0;
  }
  local_78 = (uint8_t  [16])0x0;
  sz_8 = strlen((char *)_Str);
  if ((int64_t)sz_8 < 0) {
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
    uStack_60 = uVal_12;
    func_0x1806aa960(pU64_11,_Str,sz_8);
    pU64_11[sz_8] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x10a44) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x10a44) = 1;
      *(uint64_t *)(lVal_10 + 0x10a38) = 0x7924f5a67c8bad9c;
      *(uint32_t *)(lVal_10 + 0x10a40) = 0x1f9aaaa;
      func_0x180673140(&LAB_18036df20);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint64_t *)(lVal_10 + 0x10a38);
    if (*(char *)(lVal_10 + 0x10a43) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0xb5181c509f9d9cf;
      *(uint *)(lVal_10 + 0x10a40) =
           (*(uint *)(lVal_10 + 0x10a40) & 0xffff | (uint)*(byte *)(lVal_10 + 0x10a42) << 0x10) ^
           SUB164(_DAT_1806b68f0,0);
    }
    local_98 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_8) {
      if (sz_8 < 0x10) {
        pU64_11 = local_98;
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
        local_98._0_8_ = pU64_11;
      }
      local_88 = sz_8;
      local_80 = uVal_12;
      func_0x1806aa960(pU64_11,_Str_00,sz_8);
      pU64_11[sz_8] = 0;
      func_0x180348cd0(param_1,local_98,local_78);
      if (0xf < local_80) {
        uVal_12 = local_80 + 1;
        lVal_10 = local_98._0_8_;
        if (0xfff < uVal_12) {
          lVal_10 = *(int64_t *)(local_98._0_8_ + -8);
          if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_10)) goto LAB_18035e5f2;
          uVal_12 = local_80 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_12);
      }
      if (0xf < uStack_60) {
        uVal_12 = uStack_60 + 1;
        lVal_10 = local_78._0_8_;
        if (0xfff < uVal_12) {
          lVal_10 = *(int64_t *)(local_78._0_8_ + -8);
          if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_10)) goto LAB_18035e5f2;
          uVal_12 = uStack_60 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_12);
      }
      *param_1 = &PTR_LAB_1806c59f0;
      uVal_3 = _UNK_1806b288c;
      uVal_2 = _UNK_1806b2888;
      uVal_1 = _UNK_1806b2884;
      *(uint32_t *)(param_1 + 0x17) = _DAT_1806b2880;
      *(uint32_t *)((int64_t)param_1 + 0xbc) = uVal_1;
      *(uint32_t *)(param_1 + 0x18) = uVal_2;
      *(uint32_t *)((int64_t)param_1 + 0xc4) = uVal_3;
      uVal_3 = _UNK_1806b607c;
      uVal_2 = _UNK_1806b6078;
      uVal_1 = _UNK_1806b6074;
      *(uint32_t *)(param_1 + 0x19) = _DAT_1806b6070;
      *(uint32_t *)((int64_t)param_1 + 0xcc) = uVal_1;
      *(uint32_t *)(param_1 + 0x1a) = uVal_2;
      *(uint32_t *)((int64_t)param_1 + 0xd4) = uVal_3;
      uVal_3 = _UNK_1806c3d2c;
      uVal_2 = _UNK_1806c3d28;
      uVal_1 = _UNK_1806c3d24;
      *(uint32_t *)(param_1 + 0x1b) = _DAT_1806c3d20;
      *(uint32_t *)((int64_t)param_1 + 0xdc) = uVal_1;
      *(uint32_t *)(param_1 + 0x1c) = uVal_2;
      *(uint32_t *)((int64_t)param_1 + 0xe4) = uVal_3;
      *(uint8_t *)(param_1 + 0x1d) = 0;
      local_78._0_8_ = 500;
      local_40 = param_1;
      if ((uint64_t)(((int64_t)(param_1[0x12] - param_1[0x10]) >> 3) * 0x6db6db6db6db6db7) < 500)
      {
        func_0x180369820(param_1 + 0x10,local_78);
      }
      return local_40;
    }
  }
  func_0x18007ba70();
LAB_18035e5f2:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18035e600
void Unwind_18035e600(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18035e630
void Unwind_18035e630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@18035e660
void Unwind_18035e660(uint64_t param_1,int64_t param_2)
{
  func_0x18036e5e0(*(uint64_t *)(param_2 + 0x78));
  return;
}

// Unwind@18035e690
void Unwind_18035e690(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10a30) = 0;
  return;
}

// Unwind@18035fae0
void Unwind_18035fae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x27d) = 0;
  return;
}

// Unwind@18035fb20
void Unwind_18035fb20(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x27d);
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x28c) = 0;
  *(uint8_t *)(param_2 + 0x28b) = uVal_1;
  return;
}

// Unwind@18035fb70
void Unwind_18035fb70(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x28b);
  ch_2 = *(char *)(param_2 + 0x28c);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 400);
  }
  *(char *)(param_2 + 0x28a) = ch_2;
  *(byte *)(param_2 + 0x289) = bFlag_1 & 1;
  return;
}

// Unwind@18035fbd0
void Unwind_18035fbd0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x289);
  if (*(char *)(param_2 + 0x28a) == '\x01') {
    func_0x180001e70(param_2 + 0x130);
  }
  *(byte *)(param_2 + 0x288) = bFlag_1 & 1;
  return;
}

// Unwind@18035fc30
void Unwind_18035fc30(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x288);
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x28f) = uVal_1;
  return;
}

// Unwind@18035fc80
void Unwind_18035fc80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x28f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
  }
  return;
}

// Unwind@18035fcd0
void Unwind_18035fcd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x27c) = 0;
  return;
}

// Unwind@18035fd10
void Unwind_18035fd10(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x27c);
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x287) = 0;
  *(uint8_t *)(param_2 + 0x286) = uVal_1;
  return;
}

// Unwind@18035fd60
void Unwind_18035fd60(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x286);
  ch_2 = *(char *)(param_2 + 0x287);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x1b0);
  }
  *(char *)(param_2 + 0x285) = ch_2;
  *(byte *)(param_2 + 0x284) = bFlag_1 & 1;
  return;
}

// Unwind@18035fdc0
void Unwind_18035fdc0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x284);
  if (*(char *)(param_2 + 0x285) == '\x01') {
    func_0x180001e70(param_2 + 0x150);
  }
  *(byte *)(param_2 + 0x283) = bFlag_1 & 1;
  return;
}

// Unwind@18035fe20
void Unwind_18035fe20(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x283);
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x28e) = uVal_1;
  return;
}

// Unwind@18035fe70
void Unwind_18035fe70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x28e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
  }
  return;
}

// Unwind@18035fec0
void Unwind_18035fec0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x27b) = 0;
  return;
}

// Unwind@18035ff00
void Unwind_18035ff00(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x27b);
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x282) = 0;
  *(uint8_t *)(param_2 + 0x281) = uVal_1;
  return;
}

// Unwind@18035ff50
void Unwind_18035ff50(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x281);
  ch_2 = *(char *)(param_2 + 0x282);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 0x1d0);
  }
  *(char *)(param_2 + 0x280) = ch_2;
  *(byte *)(param_2 + 0x27f) = bFlag_1 & 1;
  return;
}

// Unwind@18035ffb0
void Unwind_18035ffb0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x27f);
  if (*(char *)(param_2 + 0x280) == '\x01') {
    func_0x180001e70(param_2 + 0x170);
  }
  *(byte *)(param_2 + 0x27e) = bFlag_1 & 1;
  return;
}

// Unwind@180360010
void Unwind_180360010(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x27e);
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x28d) = uVal_1;
  return;
}

// Unwind@180360060
void Unwind_180360060(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x28d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
  }
  return;
}

// Unwind@1803600b0
void Unwind_1803600b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10a64) = 0;
  *(uint8_t *)(param_2 + 0x28f) = 1;
  return;
}

// Unwind@180360100
void Unwind_180360100(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10aac) = 0;
  *(uint8_t *)(param_2 + 0x28e) = 1;
  return;
}

// Unwind@180360150
void Unwind_180360150(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10af4) = 0;
  *(uint8_t *)(param_2 + 0x28d) = 1;
  return;
}

// Unwind@180360590
void Unwind_180360590(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x40);
  return;
}

// func_0x180360610
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180360610(uint64_t *param_1)
{
  char *fnPtr_1;
  uint8_t (*_Str)[16];
  uint64_t *pU64_2;
  uint8_t uVal_3;
  int64_t **ptr2_Long_4;
  func_ptr_t fnPtr_5;
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint32_t uVal_13;
  uint32_t uVal_14;
  uint8_t uVal_15;
  size_t sz_16;
  uint64_t uVal_17;
  int64_t lVal_18;
  uint64_t *pU64_19;
  int64_t lVal_20;
  int64_t *pLong_21;
  uint32_t *pU64_22;
  uint8_t *pU64_23;
  int64_t **ptr2_Long_24;
  uint32_t uVal_25;
  uint64_t uVal_26;
  uint64_t in_stack_fffffffffffffe50;
  uint32_t uVal_28;
  uint64_t uVal_27;
  uint8_t local_188 [56];
  uint64_t local_150;
  uint8_t local_148 [56];
  uint64_t local_110;
  uint8_t local_108 [56];
  uint64_t local_d0;
  uint8_t local_c8 [8];
  uint64_t uStack_c0;
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  uint64_t *local_a0;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint16_t uStack_8c;
  uint16_t uStack_8a;
  uint16_t uStack_88;
  uint16_t uStack_86;
  uint16_t uStack_84;
  uint16_t uStack_82;
  uint16_t uStack_80;
  uint16_t uStack_7e;
  uint16_t uStack_7c;
  uint16_t uStack_7a;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint16_t local_68;
  uint64_t *local_60;
  uint64_t local_58;
  uint8_t local_4c;
  uint8_t local_4b;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  uVal_28 = (uint32_t)((uint64_t)in_stack_fffffffffffffe50 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  uStack_88 = _UNK_1806c7ab2;
  uStack_86 = (uint16_t)_UNK_1806c7ab4;
  uStack_84 = (uint16_t)((uint)_UNK_1806c7ab4 >> 0x10);
  uStack_82 = (uint16_t)_UNK_1806c7ab8;
  uStack_80 = (uint16_t)((uint)_UNK_1806c7ab8 >> 0x10);
  uStack_7e = (uint16_t)_UNK_1806c7abc;
  uStack_7c = (uint16_t)((uint)_UNK_1806c7abc >> 0x10);
  local_98 = _DAT_1806c7aa2;
  uStack_94 = _UNK_1806c7aa6;
  uStack_90 = _UNK_1806c7aaa;
  uStack_8c = _UNK_1806c7aae;
  uStack_8a = _DAT_1806c7ab0;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x10b3c) == '\0') {
    lVal_18 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_18 + 0x10b3c) = 1;
    func_0x18008fa60(lVal_18 + 0x10b1d,&local_98);
    func_0x180673140(&LAB_18036e0d0);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x10b1d);
  local_60 = param_1;
  func_0x1803717d0(fnPtr_1);
  uStack_88 = 0;
  uStack_86 = 0;
  uStack_84 = 0;
  uStack_82 = 0;
  uStack_80 = 0;
  uStack_7e = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_8a = 0;
  sz_16 = strlen(fnPtr_1);
  if ((int64_t)sz_16 < 0) {
    func_0x18007ba70();
LAB_180361506:
    local_49 = 1;
    func_0x18007ba70();
LAB_180361513:
    local_4b = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_16 < 0x10) {
      pU64_22 = &local_98;
      uVal_26 = 0xf;
    }
    else {
      uVal_17 = sz_16 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_17) {
        uVal_26 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        pU64_22 = (uint32_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        lVal_18 = func_0x180672de0(uVal_26 + 0x28);
        pU64_22 = (uint32_t *)(lVal_18 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_22 + -2) = lVal_18;
      }
      local_98 = SUB84(pU64_22,0);
      uStack_94 = (uint32_t)((uint64_t)pU64_22 >> 0x20);
    }
    uStack_88 = (uint16_t)sz_16;
    uStack_86 = (uint16_t)(sz_16 >> 0x10);
    uStack_84 = (uint16_t)(sz_16 >> 0x20);
    uStack_82 = (uint16_t)(sz_16 >> 0x30);
    uStack_80 = (uint16_t)uVal_26;
    uStack_7e = (uint16_t)(uVal_26 >> 0x10);
    uStack_7c = (uint16_t)(uVal_26 >> 0x20);
    uStack_7a = (uint16_t)(uVal_26 >> 0x30);
    func_0x1806aa960(pU64_22,fnPtr_1,sz_16);
    *(uint8_t *)((int64_t)pU64_22 + sz_16) = 0;
    pU64_19 = local_60;
    pU64_22 = &local_98;
    func_0x1801c2ba0(local_60,0,0,pU64_22);
    uVal_26 = CONCAT26(uStack_7a,CONCAT24(uStack_7c,CONCAT22(uStack_7e,uStack_80)));
    if (0xf < uVal_26) {
      lVal_20 = CONCAT44(uStack_94,local_98);
      uVal_17 = uVal_26 + 1;
      lVal_18 = lVal_20;
      if (0xfff < uVal_17) {
        lVal_18 = *(int64_t *)(lVal_20 + -8);
        if (0x1f < (uint64_t)((lVal_20 + -8) - lVal_18)) goto LAB_1803614ff;
        uVal_17 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_18,uVal_17);
    }
    *pU64_19 = &PTR_LAB_1806c5a40;
    uVal_14 = _UNK_1806c3d5c;
    uVal_13 = _UNK_1806c3d58;
    uVal_25 = _UNK_1806c3d54;
    *(uint32_t *)(pU64_19 + 0x10) = _DAT_1806c3d50;
    *(uint32_t *)((int64_t)pU64_19 + 0x84) = uVal_25;
    *(uint32_t *)(pU64_19 + 0x11) = uVal_13;
    *(uint32_t *)((int64_t)pU64_19 + 0x8c) = uVal_14;
    *(uint16_t *)(pU64_19 + 0x12) = 0x101;
    local_a0 = pU64_19 + 0x14;
    *(uint8_t (*)[16])((int64_t)pU64_19 + 0x94) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_19 + 0xa4) = ZEXT816(0);
    *(uint32_t *)((int64_t)pU64_19 + 0xb4) = 0;
    local_150 = 0;
    if (DAT_18083fd98 == (uint64_t *)0x0) {
      uVal_25 = 10;
    }
    else {
      local_150 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_188);
      uVal_25 = *(uint32_t *)(pU64_19 + 0x10);
    }
    local_78 = _DAT_1806c7ae0;
    uStack_74 = _UNK_1806c7ae4;
    uStack_70 = _UNK_1806c7ae8;
    uStack_6c = _UNK_1806c7aec;
    uStack_88 = (uint16_t)_DAT_1806c7ad0;
    uStack_86 = (uint16_t)((uint)_DAT_1806c7ad0 >> 0x10);
    uStack_84 = (uint16_t)_UNK_1806c7ad4;
    uStack_82 = (uint16_t)((uint)_UNK_1806c7ad4 >> 0x10);
    uStack_80 = (uint16_t)_UNK_1806c7ad8;
    uStack_7e = (uint16_t)((uint)_UNK_1806c7ad8 >> 0x10);
    uStack_7c = (uint16_t)_UNK_1806c7adc;
    uStack_7a = (uint16_t)((uint)_UNK_1806c7adc >> 0x10);
    local_98 = _DAT_1806c7ac0;
    uStack_94 = _UNK_1806c7ac4;
    uStack_90 = _UNK_1806c7ac8;
    uStack_8c = (uint16_t)_UNK_1806c7acc;
    uStack_8a = (uint16_t)((uint)_UNK_1806c7acc >> 0x10);
    local_68 = 0x8936;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x10b70) == '\0') {
      lVal_18 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_18 + 0x10b70) = 1;
      func_0x1802d74e0(lVal_18 + 0x10b3d,&local_98);
      func_0x180673140(&LAB_18036e100);
    }
    uVal_12 = _UNK_1806b560c;
    uVal_11 = _UNK_1806b5608;
    uVal_10 = _UNK_1806b5604;
    uVal_9 = _DAT_1806b5600;
    lVal_18 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_18 + 0x10b3d);
    if (*(char *)(lVal_18 + 0x10b6f) == '\x01') {
      auArr_6._4_4_ = *(uint *)(lVal_18 + 0x10b41) ^ _UNK_1806b5604;
      auArr_6._0_4_ = *(uint *)*_Str ^ _DAT_1806b5600;
      auArr_6._8_4_ = *(uint *)(lVal_18 + 0x10b45) ^ _UNK_1806b5608;
      auArr_6._12_4_ = *(uint *)(lVal_18 + 0x10b49) ^ _UNK_1806b560c;
      *_Str = auArr_6;
      auArr_7._4_4_ = *(uint *)(lVal_18 + 0x10b51) ^ uVal_10;
      auArr_7._0_4_ = *(uint *)(lVal_18 + 0x10b4d) ^ uVal_9;
      auArr_7._8_4_ = *(uint *)(lVal_18 + 0x10b55) ^ uVal_11;
      auArr_7._12_4_ = *(uint *)(lVal_18 + 0x10b59) ^ uVal_12;
      *(uint8_t (*)[16])(lVal_18 + 0x10b4d) = auArr_7;
      auArr_8._4_4_ = *(uint *)(lVal_18 + 0x10b61) ^ uVal_10;
      auArr_8._0_4_ = *(uint *)(lVal_18 + 0x10b5d) ^ uVal_9;
      auArr_8._8_4_ = *(uint *)(lVal_18 + 0x10b65) ^ uVal_11;
      auArr_8._12_4_ = *(uint *)(lVal_18 + 0x10b69) ^ uVal_12;
      *(uint8_t (*)[16])(lVal_18 + 0x10b5d) = auArr_8;
      *(ushort *)(lVal_18 + 0x10b6d) = *(ushort *)(lVal_18 + 0x10b6d) ^ 0x8945;
      *(uint8_t *)(lVal_18 + 0x10b6f) = 0;
    }
    _local_b8 = ZEXT816(0);
    _local_c8 = ZEXT816(0);
    sz_16 = strlen((char *)_Str);
    if ((int64_t)sz_16 < 0) goto LAB_180361506;
    if (sz_16 < 0x10) {
      pU64_23 = local_c8;
      uVal_26 = 0xf;
    }
    else {
      uVal_17 = sz_16 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_17) {
        uVal_26 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_49 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_49 = 1;
        lVal_18 = func_0x180672de0(uVal_26 + 0x28);
        pU64_23 = (uint8_t *)(lVal_18 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_18;
      }
      local_c8 = (uint8_t  [8])pU64_23;
    }
    uStack_b0 = uVal_26;
    local_b8 = (uint8_t  [8])sz_16;
    func_0x1806aa960(pU64_23,_Str,sz_16);
    pU64_23[sz_16] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x10b88) == '\0') {
      lVal_18 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_18 + 0x10b88) = 1;
      *(uint64_t *)(lVal_18 + 0x10b78) = 0x3e1b6918b0a8e507;
      *(uint32_t *)(lVal_18 + 0x10b80) = 0xa0b2e021;
      *(uint16_t *)(lVal_18 + 0x10b84) = 0x173;
      func_0x180673140(&LAB_18036e140);
    }
    lVal_18 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_18 + 0x10b78);
    if (*(char *)(lVal_18 + 0x10b85) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x5f694973d3c78945;
      *(uint *)(lVal_18 + 0x10b80) = *(uint *)(lVal_18 + 0x10b80) ^ 0xd3c78945;
      *(byte *)(lVal_18 + 0x10b84) = *(byte *)(lVal_18 + 0x10b84) ^ 0x73;
      *(uint8_t *)(lVal_18 + 0x10b85) = 0;
    }
    uStack_88 = 0;
    uStack_86 = 0;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_8a = 0;
    sz_16 = strlen((char *)pU64_2);
    if ((int64_t)sz_16 < 0) goto LAB_180361513;
    uVal_26 = 0xf;
    if (0xf < sz_16) {
      uVal_17 = sz_16 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_17) {
        uVal_26 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_4b = 1;
        pU64_22 = (uint32_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_4b = 1;
        lVal_18 = func_0x180672de0(uVal_26 + 0x28);
        pU64_22 = (uint32_t *)(lVal_18 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_22 + -2) = lVal_18;
      }
      local_98 = SUB84(pU64_22,0);
      uStack_94 = (uint32_t)((uint64_t)pU64_22 >> 0x20);
    }
    uStack_88 = (uint16_t)sz_16;
    uStack_86 = (uint16_t)(sz_16 >> 0x10);
    uStack_84 = (uint16_t)(sz_16 >> 0x20);
    uStack_82 = (uint16_t)(sz_16 >> 0x30);
    uStack_80 = (uint16_t)uVal_26;
    uStack_7e = (uint16_t)(uVal_26 >> 0x10);
    uStack_7c = (uint16_t)(uVal_26 >> 0x20);
    uStack_7a = (uint16_t)(uVal_26 >> 0x30);
    func_0x1806aa960(pU64_22,pU64_2,sz_16);
    *(uint8_t *)((int64_t)pU64_22 + sz_16) = 0;
    uVal_27 = CONCAT44(uVal_28,1);
    pU64_22 = &local_98;
    pU64_23 = local_c8;
    func_0x1801ccff0(local_60,pU64_22,pU64_23,pU64_19 + 0x10,uVal_25,uVal_27,0x14,local_188,0);
    pU64_19 = local_60;
    uVal_28 = (uint32_t)((uint64_t)uVal_27 >> 0x20);
    uVal_26 = CONCAT26(uStack_7a,CONCAT24(uStack_7c,CONCAT22(uStack_7e,uStack_80)));
    if (0xf < uVal_26) {
      lVal_20 = CONCAT44(uStack_94,local_98);
      uVal_17 = uVal_26 + 1;
      lVal_18 = lVal_20;
      if (0xfff < uVal_17) {
        lVal_18 = *(int64_t *)(lVal_20 + -8);
        if (0x1f < (uint64_t)((lVal_20 + -8) - lVal_18)) goto LAB_1803614ff;
        uVal_17 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_18,uVal_17);
    }
    if (0xf < uStack_b0) {
      uVal_26 = uStack_b0 + 1;
      lVal_18 = (int64_t)local_c8;
      if (0xfff < uVal_26) {
        lVal_18 = *(int64_t *)((int64_t)local_c8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_c8 + -8) - lVal_18)) goto LAB_1803614ff;
        uVal_26 = uStack_b0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_18,uVal_26);
    }
    local_110 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_110 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_148);
      pU64_19 = local_60;
    }
    auArr_6 = _local_b8;
    uVal_25 = *(uint32_t *)(pU64_19 + 0x11);
    local_b8._4_4_ = _UNK_1806c7b06;
    local_b8._0_4_ = _UNK_1806c7b02;
    uStack_b0._4_4_ = auArr_6._12_4_;
    uStack_b0._0_4_ = _UNK_1806c7b0a;
    local_c8._4_4_ = _UNK_1806c7af6;
    local_c8._0_4_ = _DAT_1806c7af2;
    uStack_c0._0_4_ = _UNK_1806c7afa;
    uStack_c0._4_4_ = _DAT_1806c7afe;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x10ba8) == '\0') {
      lVal_18 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_18 + 0x10ba8) = 1;
      func_0x18008fba0(lVal_18 + 0x10b89,local_c8);
      func_0x180673140(&LAB_18036e170);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x10b89);
    func_0x180371810(fnPtr_1);
    uStack_88 = 0;
    uStack_86 = 0;
    uStack_84 = 0;
    uStack_82 = 0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_8a = 0;
    sz_16 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_16) {
      uVal_26 = 0xf;
      if (0xf < sz_16) {
        uVal_17 = sz_16 | 0xf;
        uVal_26 = 0x16;
        if (0x16 < uVal_17) {
          uVal_26 = uVal_17;
        }
        if (uVal_17 < 0xfff) {
          local_4a = 1;
          pU64_22 = (uint32_t *)func_0x180672de0(uVal_26 + 1);
        }
        else {
          local_4a = 1;
          lVal_18 = func_0x180672de0(uVal_26 + 0x28);
          pU64_22 = (uint32_t *)(lVal_18 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_22 + -2) = lVal_18;
        }
        local_98 = SUB84(pU64_22,0);
        uStack_94 = (uint32_t)((uint64_t)pU64_22 >> 0x20);
      }
      uStack_88 = (uint16_t)sz_16;
      uStack_86 = (uint16_t)(sz_16 >> 0x10);
      uStack_84 = (uint16_t)(sz_16 >> 0x20);
      uStack_82 = (uint16_t)(sz_16 >> 0x30);
      uStack_80 = (uint16_t)uVal_26;
      uStack_7e = (uint16_t)(uVal_26 >> 0x10);
      uStack_7c = (uint16_t)(uVal_26 >> 0x20);
      uStack_7a = (uint16_t)(uVal_26 >> 0x30);
      func_0x1806aa960(pU64_22,fnPtr_1,sz_16);
      *(uint8_t *)((int64_t)pU64_22 + sz_16) = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x10bc0) == '\0') {
        lVal_18 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_18 + 0x10bc0) = 1;
        *(uint64_t *)(lVal_18 + 0x10bb0) = 0xcb4fe80c6d959e65;
        *(uint32_t *)(lVal_18 + 0x10bb8) = 0x7a879a45;
        *(uint16_t *)(lVal_18 + 0x10bbc) = 0x169;
        func_0x180673140(&LAB_18036e1a0);
      }
      lVal_18 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint64_t *)(lVal_18 + 0x10bb0);
      if (*(char *)(lVal_18 + 0x10bbd) == '\x01') {
        *pU64_2 = *pU64_2 ^ 0xeb279b691ff3fb37;
        *(uint *)(lVal_18 + 0x10bb8) = *(uint *)(lVal_18 + 0x10bb8) ^ 0x1ff3fb37;
        *(byte *)(lVal_18 + 0x10bbc) = *(byte *)(lVal_18 + 0x10bbc) ^ 0x69;
        *(uint8_t *)(lVal_18 + 0x10bbd) = 0;
      }
      _local_b8 = ZEXT816(0);
      _local_c8 = ZEXT816(0);
      sz_16 = strlen((char *)pU64_2);
      if (-1 < (int64_t)sz_16) {
        uVal_26 = 0xf;
        if (0xf < sz_16) {
          uVal_17 = sz_16 | 0xf;
          uVal_26 = 0x16;
          if (0x16 < uVal_17) {
            uVal_26 = uVal_17;
          }
          if (uVal_17 < 0xfff) {
            local_4c = 1;
            pU64_23 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
          }
          else {
            local_4c = 1;
            lVal_18 = func_0x180672de0(uVal_26 + 0x28);
            pU64_23 = (uint8_t *)(lVal_18 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_23 + -8) = lVal_18;
          }
          local_c8 = (uint8_t  [8])pU64_23;
        }
        local_b8 = (uint8_t  [8])sz_16;
        uStack_b0 = uVal_26;
        func_0x1806aa960(pU64_23,pU64_2,sz_16);
        pU64_23[sz_16] = 0;
        func_0x1801ccff0(local_60,local_c8,&local_98,pU64_19 + 0x11,uVal_25,CONCAT44(uVal_28,1),0x28,
                      local_148,0);
        if (0xf < uStack_b0) {
          uVal_26 = uStack_b0 + 1;
          lVal_18 = (int64_t)local_c8;
          if (0xfff < uVal_26) {
            lVal_18 = *(int64_t *)((int64_t)local_c8 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_c8 + -8) - lVal_18)) goto LAB_1803614ff;
            uVal_26 = uStack_b0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_18,uVal_26);
        }
        uVal_26 = CONCAT26(uStack_7a,CONCAT24(uStack_7c,CONCAT22(uStack_7e,uStack_80)));
        if (0xf < uVal_26) {
          lVal_20 = CONCAT44(uStack_94,local_98);
          uVal_17 = uVal_26 + 1;
          lVal_18 = lVal_20;
          if (0xfff < uVal_17) {
            lVal_18 = *(int64_t *)(lVal_20 + -8);
            if (0x1f < (uint64_t)((lVal_20 + -8) - lVal_18)) goto LAB_1803614ff;
            uVal_17 = uVal_26 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_18,uVal_17);
        }
        local_58 = func_0x180672de0(0xe0);
        func_0x180348770(local_58);
        local_98 = (uint32_t)local_58;
        uStack_94 = (uint32_t)((uint64_t)local_58 >> 0x20);
        pU64_19 = (uint64_t *)local_60[0x15];
        if (pU64_19 == (uint64_t *)local_60[0x16]) {
          func_0x18036e1d0(local_a0,pU64_19,&local_98);
        }
        else {
          local_98 = 0;
          uStack_94 = 0;
          *pU64_19 = local_58;
          local_60[0x15] = local_60[0x15] + 8;
        }
        lVal_18 = CONCAT44(uStack_94,local_98);
        if (lVal_18 != 0) {
          func_0x18036e5e0(lVal_18);
          thunk_FUN_180695dd0(lVal_18,0xe0);
        }
        local_58 = func_0x180672de0(0xd0);
        func_0x18034c080(local_58);
        local_98 = (uint32_t)local_58;
        uStack_94 = (uint32_t)((uint64_t)local_58 >> 0x20);
        pU64_19 = (uint64_t *)local_60[0x15];
        if (pU64_19 == (uint64_t *)local_60[0x16]) {
          func_0x18036e1d0(local_a0,pU64_19,&local_98);
        }
        else {
          local_98 = 0;
          uStack_94 = 0;
          *pU64_19 = local_58;
          local_60[0x15] = local_60[0x15] + 8;
        }
        lVal_18 = CONCAT44(uStack_94,local_98);
        if (lVal_18 != 0) {
          func_0x18036e5e0(lVal_18);
          thunk_FUN_180695dd0(lVal_18,0xd0);
        }
        local_58 = func_0x180672de0(0xe0);
        func_0x18034ddc0(local_58);
        local_98 = (uint32_t)local_58;
        uStack_94 = (uint32_t)((uint64_t)local_58 >> 0x20);
        pU64_19 = (uint64_t *)local_60[0x15];
        if (pU64_19 == (uint64_t *)local_60[0x16]) {
          func_0x18036e1d0(local_a0,pU64_19,&local_98);
        }
        else {
          local_98 = 0;
          uStack_94 = 0;
          *pU64_19 = local_58;
          local_60[0x15] = local_60[0x15] + 8;
        }
        lVal_18 = CONCAT44(uStack_94,local_98);
        if (lVal_18 != 0) {
          func_0x18036e5e0(lVal_18);
          thunk_FUN_180695dd0(lVal_18,0xe0);
        }
        local_58 = func_0x180672de0(0x108);
        func_0x18034fc00(local_58);
        local_98 = (uint32_t)local_58;
        uStack_94 = (uint32_t)((uint64_t)local_58 >> 0x20);
        pU64_19 = (uint64_t *)local_60[0x15];
        if (pU64_19 == (uint64_t *)local_60[0x16]) {
          func_0x18036e1d0(local_a0,pU64_19,&local_98);
        }
        else {
          local_98 = 0;
          uStack_94 = 0;
          *pU64_19 = local_58;
          local_60[0x15] = local_60[0x15] + 8;
        }
        lVal_18 = CONCAT44(uStack_94,local_98);
        if (lVal_18 != 0) {
          func_0x18036e5e0(lVal_18);
          thunk_FUN_180695dd0(lVal_18,0x108);
        }
        local_58 = func_0x180672de0(0xf8);
        func_0x180354f40(local_58);
        local_98 = (uint32_t)local_58;
        uStack_94 = (uint32_t)((uint64_t)local_58 >> 0x20);
        pU64_19 = (uint64_t *)local_60[0x15];
        if (pU64_19 == (uint64_t *)local_60[0x16]) {
          func_0x18036e1d0(local_a0,pU64_19,&local_98);
        }
        else {
          local_98 = 0;
          uStack_94 = 0;
          *pU64_19 = local_58;
          local_60[0x15] = local_60[0x15] + 8;
        }
        pU64_19 = (uint64_t *)CONCAT44(uStack_94,local_98);
        if (pU64_19 != (uint64_t *)0x0) {
          *pU64_19 = &PTR_LAB_1806c5950;
          lVal_18 = pU64_19[0x1c];
          if (lVal_18 != 0) {
            uVal_26 = pU64_19[0x1e] - lVal_18;
            lVal_20 = lVal_18;
            if (0xfff < uVal_26) {
              lVal_20 = *(int64_t *)(lVal_18 + -8);
              if (0x1f < (uint64_t)((lVal_18 + -8) - lVal_20)) {
LAB_1803614ff:
                do {
                  invalidInstructionException();
                } while( true );
              }
              uVal_26 = uVal_26 + 0x27;
            }
            thunk_FUN_180695dd0(lVal_20,uVal_26);
            *(uint8_t (*)[16])(pU64_19 + 0x1c) = ZEXT816(0);
            pU64_19[0x1e] = 0;
          }
          func_0x18036e5e0(pU64_19);
          thunk_FUN_180695dd0(pU64_19,0xf8);
        }
        local_58 = func_0x180672de0(0x130);
        func_0x180357af0(local_58);
        local_98 = (uint32_t)local_58;
        uStack_94 = (uint32_t)((uint64_t)local_58 >> 0x20);
        pU64_19 = (uint64_t *)local_60[0x15];
        if (pU64_19 == (uint64_t *)local_60[0x16]) {
          func_0x18036e1d0(local_a0,pU64_19,&local_98);
          pU64_19 = (uint64_t *)CONCAT44(uStack_94,local_98);
          if (pU64_19 != (uint64_t *)0x0) {
            *pU64_19 = &PTR_LAB_1806c59a0;
            func_0x1800822d0(pU64_19 + 0x22);
            func_0x1800822d0(pU64_19 + 0x1e);
            func_0x1800822d0(pU64_19 + 0x1a);
            func_0x18036e5e0(pU64_19);
            thunk_FUN_180695dd0(pU64_19,0x130);
          }
        }
        else {
          *pU64_19 = local_58;
          local_60[0x15] = local_60[0x15] + 8;
        }
        local_58 = func_0x180672de0(0xf0);
        func_0x18035e190(local_58);
        local_98 = (uint32_t)local_58;
        uStack_94 = (uint32_t)((uint64_t)local_58 >> 0x20);
        pU64_19 = (uint64_t *)local_60[0x15];
        if (pU64_19 == (uint64_t *)local_60[0x16]) {
          func_0x18036e1d0(local_a0,pU64_19,&local_98);
          pU64_19 = local_60;
          lVal_18 = CONCAT44(uStack_94,local_98);
          if (lVal_18 != 0) {
            func_0x18036e5e0(lVal_18);
            thunk_FUN_180695dd0(lVal_18,0xf0);
          }
        }
        else {
          *pU64_19 = local_58;
          local_60[0x15] = local_60[0x15] + 8;
          pU64_19 = local_60;
        }
        ptr2_Long_4 = (int64_t **)pU64_19[0x15];
        for (ptr2_Long_24 = (int64_t **)pU64_19[0x14]; ptr2_Long_24 != ptr2_Long_4; ptr2_Long_24 = ptr2_Long_24 + 1) {
          pLong_21 = *ptr2_Long_24;
          uVal_3 = *(uint8_t *)((int64_t)pLong_21 + 0xa4);
          local_d0 = 0;
          if (DAT_18083fd98 != (uint64_t *)0x0) {
            local_d0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_108);
            pLong_21 = *ptr2_Long_24;
          }
          if (*(char *)(pLong_21 + 9) == '\x01') {
            uVal_15 = (**(func_ptr_t *)(*pLong_21 + 8))(pLong_21);
            pLong_21 = *ptr2_Long_24;
          }
          else {
            uVal_15 = 0;
          }
          func_0x1801ccd70(local_60,pLong_21 + 1,pLong_21 + 5,pLong_21 + 9,uVal_15,local_108,uVal_3);
          (**(func_ptr_t *)**ptr2_Long_24)(*ptr2_Long_24,local_60);
        }
        return local_60;
      }
      goto LAB_18036152d;
    }
  }
  local_4a = 1;
  func_0x18007ba70();
LAB_18036152d:
  local_4c = 1;
  func_0x18007ba70();
  fnPtr_5 = (func_ptr_t )swi(3);
  pU64_19 = (uint64_t *)(*fnPtr_5)();
  return pU64_19;
}

// Unwind@180361540
void Unwind_180361540(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x88);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@180361590
void Unwind_180361590(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10b70) = 0;
  *(uint8_t *)(param_2 + 399) = 1;
  return;
}

// Unwind@1803615e0
void Unwind_1803615e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 200);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@180361630
void Unwind_180361630(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10ba8) = 0;
  *(uint8_t *)(param_2 + 0x18e) = 1;
  return;
}

// Unwind@180361680
void Unwind_180361680(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}
