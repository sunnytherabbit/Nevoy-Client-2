#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1803616c0
void Unwind_1803616c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  *(uint8_t *)(param_2 + 0x18d) = 0;
  return;
}

// Unwind@180361700
void Unwind_180361700(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x18d);
  func_0x180001e70(param_2 + 0x110);
  *(uint8_t *)(param_2 + 399) = uVal_1;
  return;
}

// Unwind@180361750
void Unwind_180361750(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 399) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1803617b0
void Unwind_1803617b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  *(uint8_t *)(param_2 + 0x18c) = 0;
  return;
}

// Unwind@1803617f0
void Unwind_1803617f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x18c);
  func_0x180001e70(param_2 + 0x140);
  *(uint8_t *)(param_2 + 0x18e) = uVal_1;
  return;
}

// Unwind@180361840
void Unwind_180361840(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x18e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1803618a0
void Unwind_1803618a0(uint64_t param_1,int64_t param_2)
{
  func_0x180361d80(param_2 + 0x140);
  return;
}

// Unwind@1803618e0
void Unwind_1803618e0(uint64_t param_1,int64_t param_2)
{
  func_0x180361db0(param_2 + 0x140);
  return;
}

// Unwind@180361920
void Unwind_180361920(uint64_t param_1,int64_t param_2)
{
  func_0x180361d80(param_2 + 0x140);
  return;
}

// Unwind@180361960
void Unwind_180361960(uint64_t param_1,int64_t param_2)
{
  func_0x180361de0(param_2 + 0x140);
  return;
}

// Unwind@1803619a0
void Unwind_1803619a0(uint64_t param_1,int64_t param_2)
{
  func_0x180361e10(param_2 + 0x140);
  return;
}

// Unwind@1803619e0
void Unwind_1803619e0(uint64_t param_1,int64_t param_2)
{
  func_0x180361ea0(param_2 + 0x140);
  return;
}

// Unwind@180361a20
void Unwind_180361a20(uint64_t param_1,int64_t param_2)
{
  func_0x180361f00(param_2 + 0x140);
  return;
}

// Unwind@180361a60
void Unwind_180361a60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x108);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@180361ac0
void Unwind_180361ac0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x108);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@180361b20
void Unwind_180361b20(uint64_t param_1,int64_t param_2)
{
  func_0x180361f30(*(uint64_t *)(param_2 + 0x138));
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x178));
  return;
}

// Unwind@180361b70
void Unwind_180361b70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10b3c) = 0;
  return;
}

// Unwind@180361bc0
void Unwind_180361bc0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x180),0xe0);
  return;
}

// Unwind@180361c00
void Unwind_180361c00(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x180),0xd0);
  return;
}

// Unwind@180361c40
void Unwind_180361c40(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x180),0xe0);
  return;
}

// Unwind@180361c80
void Unwind_180361c80(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x180),0x108);
  return;
}

// Unwind@180361cc0
void Unwind_180361cc0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x180),0xf8);
  return;
}

// Unwind@180361d00
void Unwind_180361d00(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x180),0x130);
  return;
}

// Unwind@180361d40
void Unwind_180361d40(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x180),0xf0);
  return;
}

// func_0x180361d80
void func_0x180361d80(int64_t *param_1)
{
  int64_t lVal_1;
  
  lVal_1 = *param_1;
  if (lVal_1 != 0) {
    func_0x18036e5e0(lVal_1);
    thunk_FUN_180695dd0(lVal_1,0xe0);
    return;
  }
  return;
}

// func_0x180361db0
void func_0x180361db0(int64_t *param_1)
{
  int64_t lVal_1;
  
  lVal_1 = *param_1;
  if (lVal_1 != 0) {
    func_0x18036e5e0(lVal_1);
    thunk_FUN_180695dd0(lVal_1,0xd0);
    return;
  }
  return;
}

// func_0x180361de0
void func_0x180361de0(int64_t *param_1)
{
  int64_t lVal_1;
  
  lVal_1 = *param_1;
  if (lVal_1 != 0) {
    func_0x18036e5e0(lVal_1);
    thunk_FUN_180695dd0(lVal_1,0x108);
    return;
  }
  return;
}

// func_0x180361e10
void func_0x180361e10(int64_t *param_1)
{
  uint64_t *pU64_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  pU64_1 = (uint64_t *)*param_1;
  if (pU64_1 == (uint64_t *)0x0) {
    return;
  }
  *pU64_1 = &PTR_LAB_1806c5950;
  lVal_2 = pU64_1[0x1c];
  if (lVal_2 != 0) {
    uVal_4 = pU64_1[0x1e] - lVal_2;
    lVal_3 = lVal_2;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(pU64_1 + 0x1c) = ZEXT816(0);
    pU64_1[0x1e] = 0;
  }
  func_0x18036e5e0(pU64_1);
  thunk_FUN_180695dd0(pU64_1,0xf8);
  return;
}

// func_0x180361ea0
void func_0x180361ea0(int64_t *param_1)
{
  uint64_t *pU64_1;
  
  pU64_1 = (uint64_t *)*param_1;
  if (pU64_1 != (uint64_t *)0x0) {
    *pU64_1 = &PTR_LAB_1806c59a0;
    func_0x1800822d0(pU64_1 + 0x22);
    func_0x1800822d0(pU64_1 + 0x1e);
    func_0x1800822d0(pU64_1 + 0x1a);
    func_0x18036e5e0(pU64_1);
    thunk_FUN_180695dd0(pU64_1,0x130);
    return;
  }
  return;
}

// func_0x180361f00
void func_0x180361f00(int64_t *param_1)
{
  int64_t lVal_1;
  
  lVal_1 = *param_1;
  if (lVal_1 != 0) {
    func_0x18036e5e0(lVal_1);
    thunk_FUN_180695dd0(lVal_1,0xf0);
    return;
  }
  return;
}

// func_0x180361f30
void func_0x180361f30(uint8_t (*param_1)[16])
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t *pLong_4;
  
  pLong_4 = *(int64_t **)*param_1;
  if (pLong_4 != (int64_t *)0x0) {
    pLong_1 = *(int64_t **)(*param_1 + 8);
    if (pLong_4 == pLong_1) {
      uVal_3 = *(int64_t *)param_1[1] - (int64_t)pLong_4;
    }
    else {
      do {
        lVal_2 = *pLong_4;
        if (lVal_2 != 0) {
          func_0x18036e5e0(lVal_2);
          thunk_FUN_180695dd0(lVal_2,0xb8);
        }
        pLong_4 = pLong_4 + 1;
      } while (pLong_4 != pLong_1);
      pLong_4 = *(int64_t **)*param_1;
      uVal_3 = *(int64_t *)param_1[1] - (int64_t)pLong_4;
    }
    if (0xfff < uVal_3) {
      if (0x1f < (uint64_t)((int64_t)pLong_4 + (-8 - (int64_t)(int64_t *)pLong_4[-1]))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_3 + 0x27;
      pLong_4 = (int64_t *)pLong_4[-1];
    }
    thunk_FUN_180695dd0(pLong_4,uVal_3);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// Unwind@1803622b0
void Unwind_1803622b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10bec) = 0;
  return;
}

// Unwind@180362ab0
void Unwind_180362ab0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x68);
  return;
}

// func_0x180362f90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180362f90(uint64_t param_1,float *param_2,float *param_3,float *param_4)
{
  int64_t *pLong_1;
  float fVal_2;
  uint32_t *pU64_3;
  uint8_t (*pArr16_4)[16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  float fVal_11;
  float fVal_12;
  float fVal_13;
  uint32_t uVal_14;
  uint32_t uVal_15;
  uint32_t uVal_16;
  uint32_t uVal_17;
  uint32_t uVal_18;
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
  int64_t lVal_29;
  int64_t lVal_30;
  uint64_t uVal_31;
  uint32_t *pU64_32;
  int64_t lVal_33;
  uint64_t uVal_34;
  uint64_t uVal_35;
  float fVal_36;
  float fVal_37;
  float fVal_38;
  float fVal_39;
  float fVal_40;
  float fVal_41;
  float fVal_42;
  float fVal_43;
  float fVal_44;
  float fVal_45;
  float fVal_46;
  float fVal_47;
  float fVal_48;
  float fVal_49;
  float fVal_50;
  float fVal_51;
  uint8_t auArr_52 [16];
  uint64_t local_138;
  uint64_t uStack_130;
  uint32_t local_128;
  uint32_t uStack_124;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  uint32_t local_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t uStack_10c;
  uint32_t local_108;
  uint32_t uStack_104;
  uint32_t uStack_100;
  uint32_t uStack_fc;
  float local_f8;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float local_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float local_d4;
  float local_d0;
  uint8_t local_cc [16];
  uint32_t local_bc;
  
  lVal_29 = func_0x180129cf0(DAT_180840a58);
  *(uint8_t *)(lVal_29 + 0x78) = 1;
  lVal_33 = *(int64_t *)(lVal_29 + 0x60);
  uVal_35 = *(uint64_t *)(lVal_29 + 0x58);
  lVal_30 = *(int64_t *)(lVal_29 + 0x48);
  uVal_34 = *(uint64_t *)(lVal_29 + 0x50) - 1;
  pU64_3 = *(uint32_t **)(lVal_30 + (lVal_33 + -1 + uVal_35 & uVal_34) * 8);
  if (*(uint64_t *)(lVal_29 + 0x50) <= lVal_33 + 1U) {
    func_0x1800f0d80(lVal_29 + 0x40,1);
    lVal_30 = *(int64_t *)(lVal_29 + 0x48);
    lVal_33 = *(int64_t *)(lVal_29 + 0x60);
    uVal_35 = *(uint64_t *)(lVal_29 + 0x58);
    uVal_34 = *(int64_t *)(lVal_29 + 0x50) - 1;
  }
  *(uint64_t *)(lVal_29 + 0x58) = uVal_35 & uVal_34;
  uVal_35 = (uVal_35 & uVal_34) + lVal_33;
  uVal_34 = uVal_34 & uVal_35;
  pU64_32 = *(uint32_t **)(lVal_30 + uVal_34 * 8);
  if (pU64_32 == (uint32_t *)0x0) {
    uVal_31 = func_0x180672de0(0x40);
    *(uint64_t *)(*(int64_t *)(lVal_29 + 0x48) + uVal_34 * 8) = uVal_31;
    pU64_32 = *(uint32_t **)
               (*(int64_t *)(lVal_29 + 0x48) + (*(int64_t *)(lVal_29 + 0x50) - 1U & uVal_35) * 8);
  }
  uVal_14 = *pU64_3;
  uVal_15 = pU64_3[1];
  uVal_16 = pU64_3[2];
  uVal_17 = pU64_3[3];
  uVal_18 = pU64_3[4];
  uVal_19 = pU64_3[5];
  uVal_20 = pU64_3[6];
  uVal_21 = pU64_3[7];
  uVal_22 = pU64_3[8];
  uVal_23 = pU64_3[9];
  uVal_24 = pU64_3[10];
  uVal_25 = pU64_3[0xb];
  uVal_26 = pU64_3[0xd];
  uVal_27 = pU64_3[0xe];
  uVal_28 = pU64_3[0xf];
  pU64_32[0xc] = pU64_3[0xc];
  pU64_32[0xd] = uVal_26;
  pU64_32[0xe] = uVal_27;
  pU64_32[0xf] = uVal_28;
  pU64_32[8] = uVal_22;
  pU64_32[9] = uVal_23;
  pU64_32[10] = uVal_24;
  pU64_32[0xb] = uVal_25;
  pU64_32[4] = uVal_18;
  pU64_32[5] = uVal_19;
  pU64_32[6] = uVal_20;
  pU64_32[7] = uVal_21;
  *pU64_32 = uVal_14;
  pU64_32[1] = uVal_15;
  pU64_32[2] = uVal_16;
  pU64_32[3] = uVal_17;
  lVal_33 = *(int64_t *)(lVal_29 + 0x60);
  *(int64_t *)(lVal_29 + 0x60) = lVal_33 + 1;
  fVal_42 = param_3[2] - param_4[2];
  fVal_45 = param_3[1] - param_4[1];
  fVal_36 = *param_3 - *param_4;
  pArr16_4 = *(uint8_t (**)[16])
             (*(int64_t *)(lVal_29 + 0x48) +
             (*(int64_t *)(lVal_29 + 0x50) - 1U & lVal_33 + *(int64_t *)(lVal_29 + 0x58)) * 8);
  auArr_52._4_4_ =
       fVal_36 * *(float *)(*pArr16_4 + 4) + fVal_45 * *(float *)(pArr16_4[1] + 4) +
       *(float *)(pArr16_4[2] + 4) * fVal_42 + *(float *)(pArr16_4[3] + 4);
  auArr_52._0_4_ =
       fVal_36 * *(float *)*pArr16_4 + fVal_45 * *(float *)pArr16_4[1] + *(float *)pArr16_4[2] * fVal_42 +
       *(float *)pArr16_4[3];
  auArr_52._8_4_ =
       fVal_36 * *(float *)(*pArr16_4 + 8) + fVal_45 * *(float *)(pArr16_4[1] + 8) +
       *(float *)(pArr16_4[2] + 8) * fVal_42 + *(float *)(pArr16_4[3] + 8);
  auArr_52._12_4_ =
       fVal_36 * *(float *)(*pArr16_4 + 0xc) + fVal_45 * *(float *)(pArr16_4[1] + 0xc) +
       *(float *)(pArr16_4[2] + 0xc) * fVal_42 + *(float *)(pArr16_4[3] + 0xc);
  pArr16_4[3] = auArr_52;
  if (*(char *)((int64_t)param_3 + 0x45) == '\x01') {
    fVal_36 = *param_2;
    fVal_42 = param_2[1];
    fVal_45 = param_2[2];
    fVal_40 = param_2[3];
    fVal_51 = fVal_42 * fVal_42 + fVal_45 * fVal_45;
    local_f8 = DAT_1806b26b4 - (fVal_51 + fVal_51);
    fVal_51 = fVal_45 * fVal_45 + fVal_36 * fVal_36;
    local_d4 = fVal_42 * fVal_45 - fVal_36 * fVal_40;
    local_d4 = local_d4 + local_d4;
    fVal_46 = fVal_42 * fVal_42 + fVal_36 * fVal_36;
    local_d0 = DAT_1806b26b4 - (fVal_46 + fVal_46);
    auArr_52 = blendps(ZEXT416((uint)(fVal_36 * fVal_42 + fVal_45 * fVal_40)),_DAT_1806b67f0,0xc);
    auArr_52 = insertps(auArr_52,ZEXT416((uint)(fVal_36 * fVal_45 - fVal_42 * fVal_40)),0x10);
    auArr_52 = insertps(auArr_52,ZEXT416((uint)(fVal_36 * fVal_42 - fVal_45 * fVal_40)),0x30);
    local_f4 = auArr_52._0_4_ * _DAT_1806b6800;
    fStack_f0 = auArr_52._4_4_ * _UNK_1806b6804;
    fStack_ec = auArr_52._8_4_ * _UNK_1806b6808;
    fStack_e8 = auArr_52._12_4_ * _UNK_1806b680c;
    auArr_52 = blendps(ZEXT416((uint)(DAT_1806b26b4 - (fVal_51 + fVal_51))),_DAT_1806b67f0,0xc);
    auArr_52 = insertps(auArr_52,ZEXT416((uint)(fVal_42 * fVal_45 + fVal_36 * fVal_40)),0x10);
    auArr_52 = insertps(auArr_52,ZEXT416((uint)(fVal_42 * fVal_40 + fVal_36 * fVal_45)),0x30);
    local_e4 = auArr_52._0_4_ * _DAT_1806b6810;
    fStack_e0 = auArr_52._4_4_ * _UNK_1806b6814;
    fStack_dc = auArr_52._8_4_ * _UNK_1806b6818;
    fStack_d8 = auArr_52._12_4_ * _UNK_1806b681c;
    local_cc = ZEXT816(0);
    local_bc = 0x3f800000;
    func_0x1801bbe70(&local_138,pArr16_4,&local_f8);
    *(uint32_t *)pArr16_4[3] = local_108;
    *(uint32_t *)(pArr16_4[3] + 4) = uStack_104;
    *(uint32_t *)(pArr16_4[3] + 8) = uStack_100;
    *(uint32_t *)(pArr16_4[3] + 0xc) = uStack_fc;
    *(uint32_t *)pArr16_4[2] = local_118;
    *(uint32_t *)(pArr16_4[2] + 4) = uStack_114;
    *(uint32_t *)(pArr16_4[2] + 8) = uStack_110;
    *(uint32_t *)(pArr16_4[2] + 0xc) = uStack_10c;
    *(uint32_t *)pArr16_4[1] = local_128;
    *(uint32_t *)(pArr16_4[1] + 4) = uStack_124;
    *(uint32_t *)(pArr16_4[1] + 8) = uStack_120;
    *(uint32_t *)(pArr16_4[1] + 0xc) = uStack_11c;
    *(uint32_t *)*pArr16_4 = (uint32_t)local_138;
    *(uint32_t *)(*pArr16_4 + 4) = local_138._4_4_;
    *(uint32_t *)(*pArr16_4 + 8) = (uint32_t)uStack_130;
    *(uint32_t *)(*pArr16_4 + 0xc) = uStack_130._4_4_;
  }
  if (*(char *)((int64_t)param_3 + 0x46) == '\x01') {
    fVal_36 = *(float *)pArr16_4[1];
    fVal_45 = *(float *)(pArr16_4[1] + 4);
    fVal_40 = *(float *)(pArr16_4[1] + 8);
    fVal_2 = *(float *)(pArr16_4[1] + 0xc);
    fVal_42 = *(float *)pArr16_4[2];
    fVal_11 = *(float *)(pArr16_4[2] + 4);
    fVal_12 = *(float *)(pArr16_4[2] + 8);
    fVal_13 = *(float *)(pArr16_4[2] + 0xc);
    fVal_37 = *(float *)*pArr16_4 * 0.0;
    fVal_38 = *(float *)(*pArr16_4 + 4) * 0.0;
    fVal_39 = *(float *)(*pArr16_4 + 8) * 0.0;
    fVal_41 = *(float *)(*pArr16_4 + 0xc) * 0.0;
    fVal_51 = _DAT_1806bed90 * *(float *)*pArr16_4 + fVal_36 * 0.0 + fVal_42 * 0.0;
    fVal_46 = _UNK_1806bed94 * *(float *)(*pArr16_4 + 4) + fVal_45 * 0.0 + fVal_11 * 0.0;
    fVal_43 = _UNK_1806bed98 * *(float *)(*pArr16_4 + 8) + fVal_40 * 0.0 + fVal_12 * 0.0;
    fVal_44 = _UNK_1806bed9c * *(float *)(*pArr16_4 + 0xc) + fVal_2 * 0.0 + fVal_13 * 0.0;
    fVal_47 = (fVal_37 - fVal_36 * _DAT_1806bedb0) + fVal_42;
    fVal_48 = (fVal_38 - fVal_45 * _UNK_1806bedb4) + fVal_11;
    fVal_49 = (fVal_39 - fVal_40 * _UNK_1806bedb8) + fVal_12;
    fVal_50 = (fVal_41 - fVal_2 * _UNK_1806bedbc) + fVal_13;
    fVal_42 = (fVal_37 - fVal_36) - fVal_42 * _DAT_1806bedb0;
    fVal_45 = (fVal_38 - fVal_45) - fVal_11 * _UNK_1806bedb4;
    fVal_40 = (fVal_39 - fVal_40) - fVal_12 * _UNK_1806bedb8;
    fVal_36 = (fVal_41 - fVal_2) - fVal_13 * _UNK_1806bedbc;
    auArr_7._4_4_ = fVal_46;
    auArr_7._0_4_ = fVal_51;
    auArr_7._8_4_ = fVal_43;
    auArr_7._12_4_ = fVal_44;
    *pArr16_4 = auArr_7;
    auArr_10._4_4_ = fVal_48;
    auArr_10._0_4_ = fVal_47;
    auArr_10._8_4_ = fVal_49;
    auArr_10._12_4_ = fVal_50;
    pArr16_4[1] = auArr_10;
    auArr_5._4_4_ = fVal_45;
    auArr_5._0_4_ = fVal_42;
    auArr_5._8_4_ = fVal_40;
    auArr_5._12_4_ = fVal_36;
    pArr16_4[2] = auArr_5;
    fVal_2 = param_3[0x10];
    fVal_42 = fVal_42 * fVal_2;
    fVal_45 = fVal_45 * fVal_2;
    fVal_40 = fVal_40 * fVal_2;
    fVal_36 = fVal_36 * fVal_2;
    fVal_51 = fVal_51 * (float)((uint)fVal_2 ^ _DAT_1806af1a0);
    fVal_46 = fVal_46 * (float)((uint)fVal_2 ^ _UNK_1806af1a4);
    fVal_43 = fVal_43 * (float)((uint)fVal_2 ^ _UNK_1806af1a8);
    fVal_44 = fVal_44 * (float)((uint)fVal_2 ^ _UNK_1806af1ac);
    fVal_47 = (float)((uint)fVal_2 ^ _DAT_1806af1a0) * fVal_47;
    fVal_48 = (float)((uint)fVal_2 ^ _UNK_1806af1a4) * fVal_48;
    fVal_49 = (float)((uint)fVal_2 ^ _UNK_1806af1a8) * fVal_49;
    fVal_50 = (float)((uint)fVal_2 ^ _UNK_1806af1ac) * fVal_50;
  }
  else {
    fVal_36 = param_3[0x10];
    fVal_51 = *(float *)*pArr16_4 * fVal_36;
    fVal_46 = *(float *)(*pArr16_4 + 4) * fVal_36;
    fVal_43 = *(float *)(*pArr16_4 + 8) * fVal_36;
    fVal_44 = *(float *)(*pArr16_4 + 0xc) * fVal_36;
    fVal_47 = (float)(_DAT_1806af1a0 ^ (uint)fVal_36) * *(float *)pArr16_4[1];
    fVal_48 = (float)(_UNK_1806af1a4 ^ (uint)fVal_36) * *(float *)(pArr16_4[1] + 4);
    fVal_49 = (float)(_UNK_1806af1a8 ^ (uint)fVal_36) * *(float *)(pArr16_4[1] + 8);
    fVal_50 = (float)(_UNK_1806af1ac ^ (uint)fVal_36) * *(float *)(pArr16_4[1] + 0xc);
    fVal_42 = *(float *)pArr16_4[2] * fVal_36;
    fVal_45 = *(float *)(pArr16_4[2] + 4) * fVal_36;
    fVal_40 = *(float *)(pArr16_4[2] + 8) * fVal_36;
    fVal_36 = *(float *)(pArr16_4[2] + 0xc) * fVal_36;
  }
  auArr_8._4_4_ = fVal_46;
  auArr_8._0_4_ = fVal_51;
  auArr_8._8_4_ = fVal_43;
  auArr_8._12_4_ = fVal_44;
  *pArr16_4 = auArr_8;
  auArr_9._4_4_ = fVal_48;
  auArr_9._0_4_ = fVal_47;
  auArr_9._8_4_ = fVal_49;
  auArr_9._12_4_ = fVal_50;
  pArr16_4[1] = auArr_9;
  auArr_6._4_4_ = fVal_45;
  auArr_6._0_4_ = fVal_42;
  auArr_6._8_4_ = fVal_40;
  auArr_6._12_4_ = fVal_36;
  pArr16_4[2] = auArr_6;
  if (*(char *)(param_3 + 0x11) == '\x01') {
    uStack_130 = *(uint64_t *)(param_3 + 8);
    if (*(uint64_t *)(param_3 + 10) < 0x10) {
      local_138 = param_3 + 4;
    }
    else {
      local_138 = *(float **)(param_3 + 4);
    }
    func_0x18012ab00(param_1,&local_138,DAT_1806b26b4,0);
  }
  func_0x1800cf9c0();
  uVal_31 = func_0x1800cf960();
  func_0x18012ade0(param_1,uVal_31,param_3 + 4);
  *(uint8_t *)(lVal_29 + 0x78) = 1;
  pLong_1 = (int64_t *)(lVal_29 + 0x60);
  *pLong_1 = *pLong_1 + -1;
  if (*pLong_1 == 0) {
    *(uint64_t *)(lVal_29 + 0x58) = 0;
  }
  return;
}

// func_0x1803684c0
uint64_t * func_0x1803684c0(int64_t **param_1,uint64_t *param_2,uint64_t *param_3)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  uint64_t *pU64_4;
  int64_t *local_78;
  int local_6c;
  uint64_t local_68;
  char *local_60;
  uint64_t local_58;
  uint64_t local_50;
  char *local_48;
  uint64_t local_40;
  wchar_t *local_38;
  int64_t *local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_50 = &local_48;
  local_48 = (char *)0x1e00000001;
  local_38 = L"Windows.Media.Core.MediaSource";
  local_78 = (int64_t *)0x0;
  local_68 = CONCAT44(local_68._4_4_,0x181f);
  local_60 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/base.h";
  local_58 = 0;
  func_0x180091e10(&local_6c,&local_50,&DAT_1806c72d0,&local_78);
  if (local_6c < 0) {
    iVal_3 = func_0x180090aa0(local_6c,&local_68);
  }
  else {
    local_30 = local_78;
    local_50 = (char **)0x0;
    (**(func_ptr_t *)*local_78)(local_78,&DAT_1806b067c,&local_50);
    local_68 = (int64_t)local_50;
    if (local_50 == (char **)0x0) {
      local_68 = 0;
      local_50 = (char **)0xb99;
      local_48 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/Windows.Media.Core.h"
      ;
      local_40 = 0;
      iVal_3 = (**(func_ptr_t *)(*local_30 + 0x68))(local_30,*(uint64_t *)*param_3,&local_68);
      if (-1 < iVal_3) {
        *param_2 = local_68;
        goto joined_r0x000180368658;
      }
      goto LAB_180368676;
    }
    func_0x180091220(&local_68);
    LOCK();
    param_1[1] = (int64_t *)((int64_t)param_1[1] + 1);
    UNLOCK();
    LOCK();
    pLong_1 = *param_1;
    if (pLong_1 == (int64_t *)0x0) {
      *param_1 = local_30;
    }
    UNLOCK();
    if (pLong_1 == (int64_t *)0x0) {
      local_30 = (int64_t *)0x0;
      InterlockedPushEntrySList((PSLIST_HEADER)&DAT_18083eb70,(PSLIST_ENTRY)(param_1 + 2));
    }
    local_68 = 0;
    local_50 = (char **)CONCAT44(local_50._4_4_,0xb99);
    local_48 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/Windows.Media.Core.h"
    ;
    local_40 = 0;
    iVal_3 = (**(func_ptr_t *)(**param_1 + 0x68))(*param_1,*(uint64_t *)*param_3,&local_68);
    if (-1 < iVal_3) {
      *param_2 = local_68;
      LOCK();
      param_1[1] = (int64_t *)((int64_t)param_1[1] + -1);
      UNLOCK();
joined_r0x000180368658:
      if (local_30 != (int64_t *)0x0) {
        func_0x180091220(&local_30);
      }
      return param_2;
    }
  }
  iVal_3 = func_0x180090aa0(iVal_3,&local_50);
LAB_180368676:
  func_0x180090aa0(iVal_3,&local_50);
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_4 = (uint64_t *)(*fnPtr_2)();
  return pU64_4;
}

// Unwind@180368690
void Unwind_180368690(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  LOCK();
  pLong_1 = (int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  *pLong_1 = *pLong_1 + -1;
  UNLOCK();
  return;
}

// Unwind@1803686c0
void Unwind_1803686c0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x78) != 0) {
    func_0x180091220(param_2 + 0x78);
  }
  return;
}

// func_0x1803686f0
uint64_t * func_0x1803686f0(int64_t **param_1,uint64_t *param_2,uint64_t *param_3)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  uint64_t *pU64_4;
  int64_t *local_78;
  int local_6c;
  uint64_t local_68;
  char *local_60;
  uint64_t local_58;
  uint64_t local_50;
  char *local_48;
  uint64_t local_40;
  wchar_t *local_38;
  int64_t *local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_50 = &local_48;
  local_48 = (char *)0x1600000001;
  local_38 = L"Windows.Foundation.Uri";
  local_78 = (int64_t *)0x0;
  local_68 = CONCAT44(local_68._4_4_,0x181f);
  local_60 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/base.h";
  local_58 = 0;
  func_0x180091e10(&local_6c,&local_50,&DAT_1806c72e0,&local_78);
  if (local_6c < 0) {
    iVal_3 = func_0x180090aa0(local_6c,&local_68);
  }
  else {
    local_30 = local_78;
    local_50 = (char **)0x0;
    (**(func_ptr_t *)*local_78)(local_78,&DAT_1806b067c,&local_50);
    local_68 = (int64_t)local_50;
    if (local_50 == (char **)0x0) {
      local_68 = 0;
      local_50 = (char **)0x93d;
      local_48 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/Windows.Foundation.h"
      ;
      local_40 = 0;
      iVal_3 = (**(func_ptr_t *)(*local_30 + 0x30))(local_30,*(uint64_t *)*param_3,&local_68);
      if (-1 < iVal_3) {
        *param_2 = local_68;
        goto joined_r0x000180368888;
      }
      goto LAB_1803688a6;
    }
    func_0x180091220(&local_68);
    LOCK();
    param_1[1] = (int64_t *)((int64_t)param_1[1] + 1);
    UNLOCK();
    LOCK();
    pLong_1 = *param_1;
    if (pLong_1 == (int64_t *)0x0) {
      *param_1 = local_30;
    }
    UNLOCK();
    if (pLong_1 == (int64_t *)0x0) {
      local_30 = (int64_t *)0x0;
      InterlockedPushEntrySList((PSLIST_HEADER)&DAT_18083eb70,(PSLIST_ENTRY)(param_1 + 2));
    }
    local_68 = 0;
    local_50 = (char **)CONCAT44(local_50._4_4_,0x93d);
    local_48 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/Windows.Foundation.h"
    ;
    local_40 = 0;
    iVal_3 = (**(func_ptr_t *)(**param_1 + 0x30))(*param_1,*(uint64_t *)*param_3,&local_68);
    if (-1 < iVal_3) {
      *param_2 = local_68;
      LOCK();
      param_1[1] = (int64_t *)((int64_t)param_1[1] + -1);
      UNLOCK();
joined_r0x000180368888:
      if (local_30 != (int64_t *)0x0) {
        func_0x180091220(&local_30);
      }
      return param_2;
    }
  }
  iVal_3 = func_0x180090aa0(iVal_3,&local_50);
LAB_1803688a6:
  func_0x180090aa0(iVal_3,&local_50);
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_4 = (uint64_t *)(*fnPtr_2)();
  return pU64_4;
}

// Unwind@1803688c0
void Unwind_1803688c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  LOCK();
  pLong_1 = (int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  *pLong_1 = *pLong_1 + -1;
  UNLOCK();
  return;
}

// Unwind@1803688f0
void Unwind_1803688f0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x78) != 0) {
    func_0x180091220(param_2 + 0x78);
  }
  return;
}

// func_0x180368920
uint64_t func_0x180368920(int64_t *param_1,uint64_t param_2,func_ptr_t *param_3)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  uint64_t uVal_3;
  uint64_t local_80;
  char *local_78;
  uint64_t local_70;
  uint64_t *local_68;
  uint64_t local_60 [2];
  wchar_t *local_50;
  uint64_t *local_48;
  int64_t *local_40;
  int local_34;
  uint64_t *local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_68 = local_60;
  local_60[0] = 0x2c00000001;
  local_50 = L"Windows.Media.Playback.BackgroundMediaPlayer";
  local_48 = (uint64_t *)0x0;
  local_80 = (uint64_t *)CONCAT44(local_80._4_4_,0x181f);
  local_78 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/base.h";
  local_70 = 0;
  func_0x180091e10(&local_34,&local_68,&DAT_1806c72f0,&local_48);
  if (local_34 < 0) {
    func_0x180090aa0(local_34,&local_80);
    fnPtr_2 = (func_ptr_t )swi(3);
    uVal_3 = (*fnPtr_2)();
    return uVal_3;
  }
  local_30 = local_48;
  if (local_48 != (uint64_t *)0x0) {
    local_68 = (uint64_t *)0x0;
    (**(func_ptr_t *)*local_48)(local_48,&DAT_1806b067c,&local_68);
    local_80 = local_68;
    if (local_68 != (uint64_t *)0x0) {
      func_0x180091220(&local_80);
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
      LOCK();
      lVal_1 = *param_1;
      if (lVal_1 == 0) {
        *param_1 = (int64_t)local_30;
      }
      UNLOCK();
      if (lVal_1 == 0) {
        local_30 = (uint64_t *)0x0;
        InterlockedPushEntrySList((PSLIST_HEADER)&DAT_18083eb70,(PSLIST_ENTRY)(param_1 + 2));
      }
      local_40 = param_1;
      (**param_3)(param_2,param_1);
      LOCK();
      local_40[1] = local_40[1] + -1;
      UNLOCK();
      goto LAB_180368a32;
    }
  }
  (**param_3)(param_2,&local_30);
LAB_180368a32:
  if (local_30 != (uint64_t *)0x0) {
    func_0x180091220(&local_30);
  }
  return param_2;
}

// Unwind@180368a60
void Unwind_180368a60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  LOCK();
  pLong_1 = (int64_t *)(*(int64_t *)(param_2 + 0x68) + 8);
  *pLong_1 = *pLong_1 + -1;
  UNLOCK();
  return;
}

// Unwind@180368a90
void Unwind_180368a90(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x78) != 0) {
    func_0x180091220(param_2 + 0x78);
  }
  return;
}

// func_0x180368b50
uint64_t * func_0x180368b50(int64_t **param_1,uint64_t *param_2,uint64_t *param_3)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  uint64_t *pU64_4;
  int64_t *local_78;
  int local_6c;
  uint64_t local_68;
  char *local_60;
  uint64_t local_58;
  uint64_t local_50;
  char *local_48;
  uint64_t local_40;
  wchar_t *local_38;
  int64_t *local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_50 = &local_48;
  local_48 = (char *)0x2800000001;
  local_38 = L"Windows.Media.Playback.MediaPlaybackItem";
  local_78 = (int64_t *)0x0;
  local_68 = CONCAT44(local_68._4_4_,0x181f);
  local_60 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/base.h";
  local_58 = 0;
  func_0x180091e10(&local_6c,&local_50,&DAT_1806c7310,&local_78);
  if (local_6c < 0) {
    iVal_3 = func_0x180090aa0(local_6c,&local_68);
  }
  else {
    local_30 = local_78;
    local_50 = (char **)0x0;
    (**(func_ptr_t *)*local_78)(local_78,&DAT_1806b067c,&local_50);
    local_68 = (int64_t)local_50;
    if (local_50 == (char **)0x0) {
      local_68 = 0;
      local_50 = (char **)0xaee;
      local_48 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/Windows.Media.Playback.h"
      ;
      local_40 = 0;
      iVal_3 = (**(func_ptr_t *)(*local_30 + 0x30))(local_30,*(uint64_t *)*param_3,&local_68);
      if (-1 < iVal_3) {
        *param_2 = local_68;
        goto joined_r0x000180368ce8;
      }
      goto LAB_180368d06;
    }
    func_0x180091220(&local_68);
    LOCK();
    param_1[1] = (int64_t *)((int64_t)param_1[1] + 1);
    UNLOCK();
    LOCK();
    pLong_1 = *param_1;
    if (pLong_1 == (int64_t *)0x0) {
      *param_1 = local_30;
    }
    UNLOCK();
    if (pLong_1 == (int64_t *)0x0) {
      local_30 = (int64_t *)0x0;
      InterlockedPushEntrySList((PSLIST_HEADER)&DAT_18083eb70,(PSLIST_ENTRY)(param_1 + 2));
    }
    local_68 = 0;
    local_50 = (char **)CONCAT44(local_50._4_4_,0xaee);
    local_48 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/Windows.Media.Playback.h"
    ;
    local_40 = 0;
    iVal_3 = (**(func_ptr_t *)(**param_1 + 0x30))(*param_1,*(uint64_t *)*param_3,&local_68);
    if (-1 < iVal_3) {
      *param_2 = local_68;
      LOCK();
      param_1[1] = (int64_t *)((int64_t)param_1[1] + -1);
      UNLOCK();
joined_r0x000180368ce8:
      if (local_30 != (int64_t *)0x0) {
        func_0x180091220(&local_30);
      }
      return param_2;
    }
  }
  iVal_3 = func_0x180090aa0(iVal_3,&local_50);
LAB_180368d06:
  func_0x180090aa0(iVal_3,&local_50);
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_4 = (uint64_t *)(*fnPtr_2)();
  return pU64_4;
}

// Unwind@180368d20
void Unwind_180368d20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  LOCK();
  pLong_1 = (int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  *pLong_1 = *pLong_1 + -1;
  UNLOCK();
  return;
}

// Unwind@180368d50
void Unwind_180368d50(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x78) != 0) {
    func_0x180091220(param_2 + 0x78);
  }
  return;
}

// func_0x180369750
void func_0x180369750(void)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_48 [40];
  uint8_t **local_20;
  uint8_t local_18 [16];
  uint64_t local_8;
  
  local_8 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  local_18 = ZEXT816(0);
  local_20 = &PTR_FUN_1806c7548;
  func_0x18067a120(&local_20,&DAT_1807c60a0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180369820
void func_0x180369820(uint8_t (**param_1)[16],uint64_t *param_2)
{
  uint32_t uVal_1;
  uint64_t uVal_2;
  uint8_t (*pArr16_3)[16];
  uint8_t (*pArr16_4)[16];
  int64_t lVal_5;
  uint8_t (*pArr16_6)[16];
  uint8_t (*pArr16_7)[16];
  uint64_t uVal_8;
  uint8_t (*pArr16_9)[16];
  uint8_t (*pArr16_10)[16];
  
  uVal_2 = *param_2;
  if (0x492492492492492 < uVal_2) {
LAB_1803699be:
    func_0x18007ba90();
    goto LAB_1803699c3;
  }
  pArr16_3 = *param_1;
  pArr16_4 = param_1[1];
  if (uVal_2 == 0) {
    pArr16_9 = (uint8_t (*)[16])0x0;
    pArr16_6 = *param_1;
    pArr16_7 = param_1[1];
    pArr16_10 = pArr16_9;
    if (pArr16_6 == pArr16_7) goto LAB_1803698a1;
LAB_1803698d0:
    do {
      *pArr16_9 = ZEXT816(0);
      *(uint64_t *)pArr16_9[1] = 0;
      uVal_1 = *(uint32_t *)(*pArr16_6 + 8);
      *(uint64_t *)*pArr16_9 = *(uint64_t *)*pArr16_6;
      *(uint32_t *)(*pArr16_9 + 8) = uVal_1;
      uVal_1 = *(uint32_t *)(pArr16_6[1] + 4);
      *(uint64_t *)(*pArr16_9 + 0xc) = *(uint64_t *)(*pArr16_6 + 0xc);
      *(uint32_t *)(pArr16_9[1] + 4) = uVal_1;
      *(uint32_t *)(pArr16_9[1] + 8) = *(uint32_t *)(pArr16_6[1] + 8);
      *(uint32_t *)(pArr16_9[1] + 0xc) = *(uint32_t *)(pArr16_6[1] + 0xc);
      *(uint32_t *)pArr16_9[2] = *(uint32_t *)pArr16_6[2];
      *(uint32_t *)(pArr16_9[2] + 4) = *(uint32_t *)(pArr16_6[2] + 4);
      *(uint32_t *)(pArr16_9[2] + 8) = *(uint32_t *)(pArr16_6[2] + 8);
      *(uint32_t *)(pArr16_9[2] + 0xc) = *(uint32_t *)(pArr16_6[2] + 0xc);
      *(uint32_t *)pArr16_9[3] = *(uint32_t *)pArr16_6[3];
      *(uint32_t *)(pArr16_9[3] + 4) = *(uint32_t *)(pArr16_6[3] + 4);
      pArr16_9 = (uint8_t (*)[16])(pArr16_9[3] + 8);
      pArr16_6 = (uint8_t (*)[16])(pArr16_6[3] + 8);
    } while (pArr16_6 != pArr16_7);
    pArr16_6 = *param_1;
    uVal_2 = *param_2;
    pArr16_9 = pArr16_10;
  }
  else {
    if (uVal_2 < 0x4a) {
      pArr16_9 = (uint8_t (*)[16])func_0x180672de0(uVal_2 * 0x38);
      pArr16_6 = *param_1;
      pArr16_7 = param_1[1];
      pArr16_10 = pArr16_9;
      if (pArr16_6 != pArr16_7) goto LAB_1803698d0;
    }
    else {
      if (uVal_2 == 0x492492492492492) goto LAB_1803699be;
      lVal_5 = func_0x180672de0(uVal_2 * 0x38 + 0x27);
      pArr16_9 = (uint8_t (*)[16])(lVal_5 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pArr16_9[-1] + 8) = lVal_5;
      pArr16_6 = *param_1;
      pArr16_7 = param_1[1];
      pArr16_10 = pArr16_9;
      if (pArr16_6 != pArr16_7) goto LAB_1803698d0;
    }
LAB_1803698a1:
    uVal_2 = *param_2;
  }
  if (pArr16_6 != (uint8_t (*)[16])0x0) {
    uVal_8 = (int64_t)param_1[2] - (int64_t)pArr16_6;
    pArr16_7 = pArr16_6;
    if (0xfff < uVal_8) {
      pArr16_7 = *(uint8_t (**)[16])(pArr16_6[-1] + 8);
      if (0x1f < (uint64_t)((int64_t)pArr16_6 + (-8 - (int64_t)pArr16_7))) {
LAB_1803699c3:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_8 = uVal_8 + 0x27;
    }
    thunk_FUN_180695dd0(pArr16_7,uVal_8);
  }
  *param_1 = pArr16_9;
  param_1[1] = (uint8_t (*)[16])(((int64_t)pArr16_4 - (int64_t)pArr16_3) + (int64_t)pArr16_9);
  param_1[2] = (uint8_t (*)[16])(uVal_2 * 0x38 + (int64_t)pArr16_9);
  return;
}

// func_0x180369b60
int64_t ** func_0x180369b60(int64_t **param_1,int64_t *param_2,float param_3)
{
  func_ptr_t fnPtr_1;
  uint8_t auArr_2 [16];
  int iVal_3;
  int iVal_4;
  int iVal_5;
  uint uVal_6;
  uint64_t uVal_7;
  char *fnPtr_8;
  int64_t lVal_9;
  int64_t lVal_10;
  int64_t **ptr2_Long_11;
  uint uVal_12;
  uint uVal_13;
  uint8_t *pU64_14;
  uint64_t uVal_15;
  short *pSize_16;
  uint uVal_17;
  uint64_t uVal_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  uint64_t uVal_21;
  int iVal_22;
  uint uVal_23;
  uint8_t in_register_00001244 [12];
  uint8_t auStack_e8 [32];
  uint64_t local_c8;
  uint32_t *local_c0;
  uint uStack_b8;
  uint64_t uStack_b0;
  uint uStack_9c;
  int64_t **pplStack_98;
  int64_t *plStack_90;
  uint64_t local_88;
  uint32_t local_80;
  uint8_t local_7c;
  uint32_t local_7b;
  undefined7 uStack_77;
  uint32_t local_70;
  uint32_t uStack_6c;
  uint8_t local_68;
  undefined7 uStack_67;
  uint64_t local_60;
  
  auArr_2._4_12_ = in_register_00001244;
  auArr_2._0_4_ = param_3;
  local_60 = DAT_18083cf40 ^ (uint64_t)auStack_e8;
  iVal_5 = func_0x1806823d0((double)param_3);
  uVal_12 = (uint)(iVal_5 != 0);
  if (0x7f7fffff < ((uint)param_3 & 0x7fffffff)) {
    local_80 = 0x8000;
    local_7c = 0x20;
    uStack_77 = 0xffffffff000000;
    local_7b = 0;
    pU64_14 = &DAT_18075fded;
    if (NAN(param_3)) {
      pU64_14 = &DAT_18075f3fa;
    }
    local_c8 = 4 - (uint64_t)(iVal_5 == 0);
    local_68 = SUB81(pU64_14,0);
    uStack_67 = (undefined7)((uint64_t)pU64_14 >> 8);
    local_c0 = &local_70;
    local_70 = uVal_12;
    func_0x18036a520(param_1,param_2,&local_80);
    goto LAB_18036a0c0;
  }
  uVal_7 = func_0x180641020(auArr_2._0_8_);
  uVal_6 = (uint)uVal_7;
  uVal_13 = 0x1f;
  if ((uVal_6 | 1) != 0) {
    for (; (uVal_6 | 1) >> uVal_13 == 0; uVal_13 = uVal_13 - 1) {
    }
  }
  uVal_19 = (uVal_7 & 0xffffffff) + *(int64_t *)(&DAT_1806afa50 + (uint64_t)uVal_13 * 8);
  iVal_3 = (int)(uVal_7 >> 0x20);
  iVal_4 = (int)(uVal_19 >> 0x20);
  local_88 = uVal_7;
  if (iVal_3 + iVal_4 + 3U < 0xb) {
    local_70 = 0x8000;
    uStack_67 = 0xffffffff000000;
    uStack_6c = 0x20;
    local_68 = 0;
    local_c0 = &local_70;
    uStack_b0 = 0;
    local_c8 = CONCAT71(local_c8._1_7_,0x2e);
    uStack_b8 = uVal_12;
    func_0x18036a110(param_1,param_2,&local_88,uVal_19 >> 0x20);
    goto LAB_18036a0c0;
  }
  iVal_22 = iVal_3 + iVal_4;
  uStack_9c = (iVal_3 + iVal_4) - 1;
  uVal_13 = 1 - iVal_22;
  if (0 < iVal_22) {
    uVal_13 = uStack_9c;
  }
  uVal_21 = (uint64_t)uVal_13;
  uVal_20 = (uint64_t)((99 < (int)uVal_13) + 4 + (uint)(iVal_4 != 1) + uVal_12 + iVal_4);
  lVal_10 = param_2[1];
  uVal_15 = param_2[2];
  uVal_18 = lVal_10 + uVal_20;
  pplStack_98 = param_1;
  if (uVal_15 < uVal_18) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_10 = param_2[1];
    uVal_15 = param_2[2];
    uVal_18 = lVal_10 + uVal_20;
    if (uVal_18 <= uVal_15) goto LAB_180369d38;
LAB_180369ddf:
    (*(func_ptr_t )param_2[3])(param_2);
  }
  else {
LAB_180369d38:
    param_2[1] = uVal_18;
    if (*param_2 != 0) {
      fnPtr_8 = (char *)(*param_2 + lVal_10);
      if (iVal_5 != 0) {
        *fnPtr_8 = '-';
        fnPtr_8 = fnPtr_8 + 1;
      }
      if (iVal_4 == 1) {
        *fnPtr_8 = (char)uVal_7 + '0';
        pSize_16 = (short *)(fnPtr_8 + 1);
      }
      else {
        uVal_12 = iVal_4 + 1;
        if (uVal_6 < 100) {
          uVal_19 = uVal_7 & 0xffffffff;
          uVal_17 = uVal_12;
          if (uVal_6 < 10) goto LAB_18036a04f;
LAB_180369dbb:
          *(uint16_t *)(fnPtr_8 + (uVal_17 - 2)) =
               *(uint16_t *)(&DAT_1806afb50 + (uint64_t)uVal_6 * 2);
        }
        else {
          uVal_18 = (uint64_t)uVal_12;
          do {
            uVal_17 = (int)uVal_18 - 2;
            uVal_18 = (uint64_t)uVal_17;
            uVal_23 = (uint)uVal_7;
            uVal_15 = uVal_7 & 0xffffffff;
            uVal_19 = uVal_15 / 100;
            uVal_6 = (uint)uVal_19;
            uVal_7 = uVal_15 / 100;
            *(uint16_t *)(fnPtr_8 + uVal_18) =
                 *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(uVal_23 + (int)uVal_7 * -100) * 2);
          } while (9999 < uVal_23);
          if (9 < (uint)(uVal_15 / 100)) goto LAB_180369dbb;
LAB_18036a04f:
          fnPtr_8[uVal_17 - 1] = (byte)uVal_19 | 0x30;
        }
        pSize_16 = (short *)(fnPtr_8 + (int)uVal_12);
        *fnPtr_8 = fnPtr_8[1];
        fnPtr_8[1] = '.';
      }
      *pSize_16 = (ushort)(iVal_22 < 1) * 0x200 + 0x2b65;
      if ((int)uVal_13 < 100) {
        pSize_16 = pSize_16 + 1;
      }
      else {
        *(char *)(pSize_16 + 1) = (char)(uVal_21 / 100) + '0';
        pSize_16 = (short *)((int64_t)pSize_16 + 3);
        uVal_21 = (uint64_t)(uVal_13 % 100);
      }
      *pSize_16 = *(short *)(&DAT_1806afb50 + uVal_21 * 2);
      *pplStack_98 = param_2;
      param_1 = pplStack_98;
      goto LAB_18036a0c0;
    }
    if (uVal_15 < uVal_18 + uVal_20) goto LAB_180369ddf;
  }
  param_1 = pplStack_98;
  if (iVal_5 != 0) {
    lVal_10 = param_2[1];
    uVal_18 = lVal_10 + 1;
    if ((uint64_t)param_2[2] < uVal_18) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_10 = param_2[1];
      uVal_18 = lVal_10 + 1;
    }
    param_2[1] = uVal_18;
    *(uint8_t *)(*param_2 + lVal_10) = 0x2d;
  }
  if (iVal_4 == 1) {
    uVal_12 = 1;
    if (uVal_6 < 100) {
      uVal_19 = uVal_7 & 0xffffffff;
      uVal_13 = uVal_6;
    }
    else {
      uVal_18 = 1;
      do {
        uVal_12 = (int)uVal_18 - 2;
        uVal_18 = (uint64_t)uVal_12;
        uVal_13 = (uint)uVal_7;
        uVal_15 = uVal_7 & 0xffffffff;
        uVal_19 = uVal_15 / 100;
        uVal_6 = (uint)uVal_19;
        uVal_7 = uVal_15 / 100;
        *(uint16_t *)((int64_t)&local_70 + uVal_18) =
             *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(uVal_13 + (int)uVal_7 * -100) * 2);
      } while (9999 < uVal_13);
      uVal_13 = (uint)(uVal_15 / 100);
    }
    if (uVal_13 < 10) {
      *(byte *)((int64_t)&local_70 + (uint64_t)(uVal_12 - 1)) = (byte)uVal_19 | 0x30;
      lVal_10 = (int64_t)&local_70 + 1;
    }
    else {
      *(uint16_t *)((int64_t)&local_70 + (uint64_t)(uVal_12 - 2)) =
           *(uint16_t *)(&DAT_1806afb50 + (uint64_t)uVal_6 * 2);
      lVal_10 = (int64_t)&local_70 + 1;
    }
  }
  else {
    lVal_10 = (int64_t)&local_70 + ((int64_t)uVal_19 >> 0x20) + 1;
    lVal_9 = lVal_10;
    if (iVal_4 < 3) {
      uVal_19 = uVal_7 & 0xffffffff;
    }
    else {
      uVal_12 = (iVal_4 - 1U >> 1) + 1;
      do {
        iVal_5 = (int)uVal_7;
        uVal_19 = (uVal_7 & 0xffffffff) / 100;
        uVal_7 = (uVal_7 & 0xffffffff) / 100;
        *(uint16_t *)(lVal_9 + -2) =
             *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(uint)(iVal_5 + (int)uVal_7 * -100) * 2);
        lVal_9 = lVal_9 + -2;
        uVal_12 = uVal_12 - 1;
      } while (1 < uVal_12);
    }
    uVal_7 = uVal_19;
    if ((iVal_4 - 1U & 1) != 0) {
      uVal_7 = uVal_19 / 10;
      *(byte *)(lVal_9 + -1) = (char)uVal_19 + ((char)(uVal_19 / 10) + (char)(uVal_19 / 10)) * -5 | 0x30
      ;
      lVal_9 = lVal_9 + -1;
    }
    *(uint8_t *)(lVal_9 + -1) = 0x2e;
    uVal_12 = 1;
    uVal_13 = (uint)uVal_7;
    if (99 < uVal_13) {
      uVal_18 = 1;
      uVal_19 = uVal_7;
      do {
        uVal_15 = uVal_19;
        uVal_12 = (int)uVal_18 - 2;
        uVal_18 = (uint64_t)uVal_12;
        uVal_7 = uVal_15 / 100;
        *(uint16_t *)(lVal_9 + -2 + uVal_18) =
             *(uint16_t *)
              (&DAT_1806afb50 + (uint64_t)((uint)uVal_15 + (int)(uVal_15 / 100) * -100) * 2);
        uVal_19 = uVal_15 / 100;
      } while (9999 < (uint)uVal_15);
      uVal_13 = (uint)(uVal_15 / 100);
    }
    if (uVal_13 < 10) {
      *(byte *)(lVal_9 + -2 + (uint64_t)(uVal_12 - 1)) = (byte)uVal_7 | 0x30;
    }
    else {
      *(uint16_t *)(lVal_9 + -2 + (uint64_t)(uVal_12 - 2)) =
           *(uint16_t *)(&DAT_1806afb50 + uVal_7 * 2);
    }
  }
  func_0x1800b1e50(&plStack_90,&local_70,lVal_10,param_2);
  lVal_10 = plStack_90[1];
  uVal_7 = lVal_10 + 1;
  if ((uint64_t)plStack_90[2] < uVal_7) {
    (*(func_ptr_t )plStack_90[3])(plStack_90);
    lVal_10 = plStack_90[1];
    uVal_7 = lVal_10 + 1;
  }
  plStack_90[1] = uVal_7;
  *(uint8_t *)(*plStack_90 + lVal_10) = 0x65;
  func_0x18036a3b0(&local_70,uStack_9c,plStack_90);
  *param_1 = (int64_t *)CONCAT44(uStack_6c,local_70);
LAB_18036a0c0:
  if (DAT_18083cf40 == (local_60 ^ (uint64_t)auStack_e8)) {
    return param_1;
  }
  func_0x180673080(local_60 ^ (uint64_t)auStack_e8);
  fnPtr_1 = (func_ptr_t )swi(3);
  ptr2_Long_11 = (int64_t **)(*fnPtr_1)();
  return ptr2_Long_11;
}

// func_0x18036a110
uint64_t func_0x18036a110(uint64_t param_1,uint64_t param_2,uint *param_3,int param_4,uint64_t param_5, uint *param_6,int param_7)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint uVal_3;
  int iVal_4;
  uint64_t uVal_5;
  uint8_t auStack_98 [32];
  int64_t local_78;
  uint32_t **local_70;
  uint32_t *local_60;
  uint *local_58;
  int *local_50;
  uint *local_48;
  uint *local_40;
  int *local_38;
  uint *local_30;
  uint8_t local_25;
  uint local_24;
  uint local_20;
  int local_1c;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  uVal_3 = param_3[1];
  local_20 = uVal_3 + param_4;
  local_78 = (int64_t)(int)((param_4 + 1) - (uint)(param_7 == 0));
  local_58 = param_3;
  local_1c = param_4;
  if (-1 < (int64_t)(int)uVal_3) {
    local_78 = (int)uVal_3 + local_78;
    local_24 = param_6[3] - local_20;
    if ((*param_6 & 0x2000) != 0) {
      local_78 = local_78 + 1;
      if ((*param_6 & 7) == 2 || 0 < (int)local_24) {
        if (0 < (int)local_24) {
          local_78 = local_78 + (uint64_t)local_24;
        }
      }
      else {
        local_24 = 0;
      }
    }
    local_60 = &param_7;
    local_50 = &local_1c;
    local_48 = (uint *)&local_25;
    local_40 = param_6;
    local_38 = (int *)&param_5;
    local_30 = &local_24;
    local_70 = &local_60;
    func_0x18036a7f0(param_1,param_2,param_6,local_78);
    goto LAB_18036a2a7;
  }
  if (0 < (int)local_20) {
    local_24 = param_6[3] - param_4 & (int)(*param_6 << 0x12) >> 0x1f;
    uVal_5 = (uint64_t)local_24;
    if ((int)local_24 < 1) {
      uVal_5 = 0;
    }
    local_78 = uVal_5 + 1 + local_78;
    local_60 = &param_7;
    local_50 = &local_1c;
    local_48 = &local_20;
    local_40 = (uint *)&param_5;
    local_38 = (int *)&local_25;
    local_30 = &local_24;
    local_70 = &local_60;
    func_0x18036abf0(param_1);
    goto LAB_18036a2a7;
  }
  local_24 = -local_20;
  if (param_4 == 0) {
    uVal_3 = param_6[3];
    if (SBORROW4(uVal_3,local_24) != (int)(uVal_3 + local_20) < 0 && -1 < (int)uVal_3) {
      local_24 = uVal_3;
    }
    if (local_24 != 0) goto LAB_18036a302;
    local_25 = (uint8_t)((*param_6 & 0x2000) >> 0xd);
    iVal_4 = 2 - (uint)((*param_6 & 0x2000) == 0);
    uVal_3 = 0;
  }
  else {
LAB_18036a302:
    local_25 = 1;
    iVal_4 = 2;
    uVal_3 = local_24;
  }
  local_78 = (uint64_t)(uVal_3 + iVal_4) + local_78;
  local_60 = &param_7;
  local_58 = (uint *)&local_25;
  local_50 = (int *)&param_5;
  local_48 = &local_24;
  local_38 = &local_1c;
  local_70 = &local_60;
  local_40 = param_3;
  func_0x18036afb0(param_1);
LAB_18036a2a7:
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_98)) {
    return param_1;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_98);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_2 = (*fnPtr_1)();
  return uVal_2;
}

// func_0x18036a3b0
int64_t ** func_0x18036a3b0(int64_t **param_1,uint param_2,int64_t *param_3)
{
  uint8_t uVal_1;
  char ch_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint uVal_6;
  
  uVal_5 = (uint64_t)param_2;
  lVal_3 = param_3[1];
  uVal_4 = lVal_3 + 1;
  if ((int)param_2 < 0) {
    if ((uint64_t)param_3[2] < uVal_4) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_3 = param_3[1];
      uVal_4 = lVal_3 + 1;
    }
    param_3[1] = uVal_4;
    *(uint8_t *)(*param_3 + lVal_3) = 0x2d;
    param_2 = -param_2;
    uVal_5 = (uint64_t)param_2;
    if (param_2 < 100) goto LAB_18036a4ac;
  }
  else {
    if ((uint64_t)param_3[2] < uVal_4) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_3 = param_3[1];
      uVal_4 = lVal_3 + 1;
    }
    param_3[1] = uVal_4;
    *(uint8_t *)(*param_3 + lVal_3) = 0x2b;
    if (param_2 < 100) goto LAB_18036a4ac;
  }
  uVal_6 = (int)(uVal_5 / 100) + (int)(uVal_5 / 100);
  if (999 < (uint)uVal_5) {
    uVal_1 = (&DAT_1806afb50)[uVal_6];
    lVal_3 = param_3[1];
    uVal_4 = lVal_3 + 1;
    if ((uint64_t)param_3[2] < uVal_4) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_3 = param_3[1];
      uVal_4 = lVal_3 + 1;
    }
    param_3[1] = uVal_4;
    *(uint8_t *)(*param_3 + lVal_3) = uVal_1;
  }
  ch_2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          [uVal_6];
  lVal_3 = param_3[1];
  uVal_4 = lVal_3 + 1;
  if ((uint64_t)param_3[2] < uVal_4) {
    (*(func_ptr_t )param_3[3])(param_3);
    lVal_3 = param_3[1];
    uVal_4 = lVal_3 + 1;
  }
  param_2 = (uint)uVal_5 + (int)(uVal_5 / 100) * -100;
  param_3[1] = uVal_4;
  *(char *)(*param_3 + lVal_3) = ch_2;
LAB_18036a4ac:
  uVal_1 = (&DAT_1806afb50)[(uint64_t)param_2 * 2];
  lVal_3 = param_3[1];
  uVal_4 = lVal_3 + 1;
  if ((uint64_t)param_3[2] < uVal_4) {
    (*(func_ptr_t )param_3[3])(param_3);
    lVal_3 = param_3[1];
    uVal_4 = lVal_3 + 1;
  }
  param_3[1] = uVal_4;
  *(uint8_t *)(*param_3 + lVal_3) = uVal_1;
  ch_2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          [(uint64_t)param_2 * 2];
  lVal_3 = param_3[1];
  uVal_4 = lVal_3 + 1;
  if ((uint64_t)param_3[2] < uVal_4) {
    (*(func_ptr_t )param_3[3])(param_3);
    lVal_3 = param_3[1];
    uVal_4 = lVal_3 + 1;
  }
  param_3[1] = uVal_4;
  *(char *)(*param_3 + lVal_3) = ch_2;
  *param_1 = param_3;
  return param_1;
}

// func_0x18036a520
void func_0x18036a520(int64_t **param_1,int64_t *param_2,uint *param_3,int64_t param_4, uint64_t param_5,int *param_6)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint32_t *pU64_3;
  uint32_t *pU64_4;
  int iVal_5;
  int64_t lVal_6;
  func_ptr_t fnPtr_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint32_t uVal_14;
  int64_t lVal_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  int64_t lVal_18;
  uint64_t uVal_19;
  int64_t lVal_20;
  uint64_t uVal_21;
  uint64_t uVal_22;
  uint64_t uVal_23;
  uint64_t uVal_24;
  uint8_t auStack_88 [32];
  int64_t **local_68;
  int64_t local_60;
  uint *local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  uVal_23 = 0;
  if (param_5 <= param_3[2]) {
    uVal_23 = param_3[2] - param_5;
  }
  uVal_24 = uVal_23 >> ((&DAT_180761149)[*param_3 >> 3 & 7] & 0x3f);
  uVal_21 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVal_23;
  local_68 = param_1;
  if ((uint64_t)param_2[2] < uVal_21) {
    (*(func_ptr_t )param_2[3])(param_2,uVal_21);
  }
  if (uVal_24 != 0) {
    func_0x1800b57e0(&local_50,param_2,uVal_24,param_3);
    param_2 = local_50;
  }
  iVal_5 = *param_6;
  if (iVal_5 != 0) {
    lVal_15 = param_2[1];
    uVal_21 = lVal_15 + 1;
    if ((uint64_t)param_2[2] < uVal_21) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_15 = param_2[1];
      uVal_21 = lVal_15 + 1;
    }
    param_2[1] = uVal_21;
    *(char *)(*param_2 + lVal_15) = (char)(0x202b2d00 >> ((byte)(iVal_5 << 3) & 0x1f));
  }
  local_60 = uVal_23 - uVal_24;
  lVal_15 = *(int64_t *)(param_6 + 2);
  lVal_17 = param_2[1];
  lVal_18 = 0;
  local_58 = param_3;
  do {
    uVal_19 = 3 - lVal_18;
    uVal_21 = param_2[2];
    if (uVal_21 < uVal_19 + lVal_17) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_17 = param_2[1];
      uVal_21 = param_2[2];
    }
    uVal_16 = uVal_21 - lVal_17;
    if (uVal_19 <= uVal_21 - lVal_17) {
      uVal_16 = uVal_19;
    }
    if (uVal_16 != 0) {
      lVal_1 = lVal_18 + lVal_15;
      lVal_6 = *param_2;
      lVal_2 = lVal_6 + lVal_17;
      if ((uVal_16 < 4) || ((uint64_t)(lVal_2 - lVal_1) < 0x20)) {
        uVal_21 = 0;
LAB_18036a68e:
        uVal_22 = uVal_21;
        for (uVal_19 = uVal_16 & 3; uVal_19 != 0; uVal_19 = uVal_19 - 1) {
          *(uint8_t *)(lVal_2 + uVal_22) = *(uint8_t *)(lVal_1 + uVal_22);
          uVal_22 = uVal_22 + 1;
        }
        if (uVal_21 - uVal_16 < 0xfffffffffffffffd) {
          lVal_17 = lVal_17 + lVal_6;
          lVal_1 = lVal_18 + lVal_15 + 3;
          do {
            *(uint8_t *)(lVal_17 + uVal_22) = *(uint8_t *)(lVal_1 + -3 + uVal_22);
            *(uint8_t *)(lVal_17 + 1 + uVal_22) = *(uint8_t *)(lVal_1 + -2 + uVal_22);
            *(uint8_t *)(lVal_17 + 2 + uVal_22) = *(uint8_t *)(lVal_1 + -1 + uVal_22);
            *(uint8_t *)(lVal_17 + 3 + uVal_22) = *(uint8_t *)(lVal_1 + uVal_22);
            uVal_22 = uVal_22 + 4;
          } while (uVal_16 != uVal_22);
        }
      }
      else if (uVal_16 < 0x20) {
        uVal_19 = 0;
LAB_18036a760:
        uVal_21 = uVal_16 & 0xfffffffffffffffc;
        do {
          *(uint32_t *)(lVal_2 + uVal_19) = *(uint32_t *)(lVal_1 + uVal_19);
          uVal_19 = uVal_19 + 4;
        } while (uVal_21 != uVal_19);
        if (uVal_16 != uVal_21) goto LAB_18036a68e;
      }
      else {
        uVal_21 = uVal_16 & 0xffffffffffffffe0;
        lVal_20 = lVal_15 + 0x10 + lVal_18;
        uVal_19 = 0;
        do {
          pU64_4 = (uint32_t *)(lVal_20 + -0x10 + uVal_19);
          uVal_8 = pU64_4[1];
          uVal_9 = pU64_4[2];
          uVal_10 = pU64_4[3];
          pU64_3 = (uint32_t *)(lVal_20 + uVal_19);
          uVal_11 = *pU64_3;
          uVal_12 = pU64_3[1];
          uVal_13 = pU64_3[2];
          uVal_14 = pU64_3[3];
          pU64_3 = (uint32_t *)(lVal_6 + lVal_17 + uVal_19);
          *pU64_3 = *pU64_4;
          pU64_3[1] = uVal_8;
          pU64_3[2] = uVal_9;
          pU64_3[3] = uVal_10;
          pU64_3 = (uint32_t *)(lVal_6 + lVal_17 + 0x10 + uVal_19);
          *pU64_3 = uVal_11;
          pU64_3[1] = uVal_12;
          pU64_3[2] = uVal_13;
          pU64_3[3] = uVal_14;
          uVal_19 = uVal_19 + 0x20;
        } while (uVal_21 != uVal_19);
        if (uVal_16 != uVal_21) {
          uVal_19 = uVal_21;
          if ((uVal_16 & 0x1c) == 0) goto LAB_18036a68e;
          goto LAB_18036a760;
        }
      }
      lVal_17 = param_2[1];
    }
    lVal_17 = lVal_17 + uVal_16;
    param_2[1] = lVal_17;
    lVal_18 = lVal_18 + uVal_16;
    if (lVal_18 == 3) {
      if (uVal_23 != uVal_24) {
        func_0x1800b57e0(&local_50,param_2,local_60,local_58);
        param_2 = local_50;
      }
      *local_68 = param_2;
      if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_88)) {
        return;
      }
      func_0x180673080(local_48 ^ (uint64_t)auStack_88);
      fnPtr_7 = (func_ptr_t )swi(3);
      (*fnPtr_7)();
      return;
    }
  } while( true );
}

// func_0x18036a7f0
int64_t * func_0x18036a7f0(int64_t *param_1,int64_t param_2,uint *param_3,int64_t param_4,uint64_t param_5, uint64_t param_6)
{
  func_ptr_t fnPtr_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t auStack_68 [40];
  int64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_3 = 0;
  if (param_5 <= param_3[2]) {
    uVal_3 = param_3[2] - param_5;
  }
  uVal_5 = uVal_3 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_4 = param_4 + *(int64_t *)(param_2 + 8) + (*param_3 >> 0xf & 7) * uVal_3;
  if (*(uint64_t *)(param_2 + 0x10) < uVal_4) {
    (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_4);
  }
  if (uVal_5 != 0) {
    func_0x1800b57e0(&local_40,param_2,uVal_5,param_3);
    param_2 = local_40;
  }
  func_0x18036a900(param_6,&local_40,param_2);
  if (uVal_3 != uVal_5) {
    func_0x1800b57e0(&local_40,local_40,uVal_3 - uVal_5,param_3);
  }
  *param_1 = local_40;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  pLong_2 = (int64_t *)(*fnPtr_1)();
  return pLong_2;
}

// func_0x18036a900
int64_t ** func_0x18036a900(int **param_1,int64_t **param_2,int64_t *param_3)
{
  uint8_t uVal_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  int64_t **ptr2_Long_4;
  uint64_t uVal_5;
  int iVal_6;
  uint8_t auStack_58 [40];
  int64_t *local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  iVal_6 = **param_1;
  if (iVal_6 != 0) {
    lVal_3 = param_3[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_3[2] < uVal_5) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_3 = param_3[1];
      uVal_5 = lVal_3 + 1;
    }
    param_3[1] = uVal_5;
    *(char *)(*param_3 + lVal_3) = (char)(0x202b2d00 >> ((byte)(iVal_6 << 3) & 0x1f));
  }
  iVal_6 = param_1[1][1];
  func_0x18036aa60(&local_30,param_3,*param_1[1],*param_1[2]);
  if (0 < iVal_6) {
    do {
      lVal_3 = local_30[1];
      uVal_5 = lVal_3 + 1;
      if ((uint64_t)local_30[2] < uVal_5) {
        (*(func_ptr_t )local_30[3])(local_30);
        lVal_3 = local_30[1];
        uVal_5 = lVal_3 + 1;
      }
      local_30[1] = uVal_5;
      *(uint8_t *)(*local_30 + lVal_3) = 0x30;
      iVal_6 = iVal_6 + -1;
    } while (iVal_6 != 0);
  }
  if ((*(byte *)((int64_t)param_1[4] + 1) & 0x20) != 0) {
    uVal_1 = *(uint8_t *)param_1[5];
    lVal_3 = local_30[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)local_30[2] < uVal_5) {
      (*(func_ptr_t )local_30[3])(local_30);
      lVal_3 = local_30[1];
      uVal_5 = lVal_3 + 1;
    }
    local_30[1] = uVal_5;
    *(uint8_t *)(*local_30 + lVal_3) = uVal_1;
    iVal_6 = *param_1[6];
    if (0 < iVal_6) {
      do {
        lVal_3 = local_30[1];
        uVal_5 = lVal_3 + 1;
        if ((uint64_t)local_30[2] < uVal_5) {
          (*(func_ptr_t )local_30[3])(local_30);
          lVal_3 = local_30[1];
          uVal_5 = lVal_3 + 1;
        }
        local_30[1] = uVal_5;
        *(uint8_t *)(*local_30 + lVal_3) = 0x30;
        iVal_6 = iVal_6 + -1;
      } while (iVal_6 != 0);
    }
  }
  *param_2 = local_30;
  if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_58)) {
    return param_2;
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_58);
  fnPtr_2 = (func_ptr_t )swi(3);
  ptr2_Long_4 = (int64_t **)(*fnPtr_2)();
  return ptr2_Long_4;
}

// func_0x18036aa60
int64_t ** func_0x18036aa60(int64_t **param_1,int64_t *param_2,uint param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint uVal_2;
  int64_t lVal_3;
  int64_t **ptr2_Long_5;
  byte bFlag_6;
  uint uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint8_t auStack_68 [46];
  uint16_t local_3a [5];
  uint64_t local_30;
  uint64_t uVal_4;
  
  uVal_4 = param_4 & 0xffffffff;
  uVal_7 = (uint)param_4;
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  lVal_3 = param_2[1];
  uVal_9 = lVal_3 + (param_4 & 0xffffffff);
  bFlag_6 = (byte)param_3;
  if ((uint64_t)param_2[2] < uVal_9) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_3 = param_2[1];
    uVal_9 = (param_4 & 0xffffffff) + lVal_3;
    if (uVal_9 <= (uint64_t)param_2[2]) goto LAB_18036aaac;
  }
  else {
LAB_18036aaac:
    param_2[1] = uVal_9;
    if (*param_2 != 0) {
      lVal_3 = *param_2 + lVal_3;
      uVal_9 = (uint64_t)param_3;
      if (param_3 < 100) {
        if (9 < param_3) goto LAB_18036ab07;
LAB_18036abb5:
        *(byte *)(lVal_3 + (uint64_t)(uVal_7 - 1)) = bFlag_6 | 0x30;
      }
      else {
        do {
          uVal_8 = uVal_9;
          uVal_7 = (int)uVal_4 - 2;
          uVal_4 = (uint64_t)uVal_7;
          bFlag_6 = (byte)(uVal_8 / 100);
          param_3 = (uint)(uVal_8 / 100);
          *(uint16_t *)(lVal_3 + uVal_4) =
               *(uint16_t *)
                (&DAT_1806afb50 + (uint64_t)((uint)uVal_8 + (int)(uVal_8 / 100) * -100) * 2);
          uVal_9 = uVal_8 / 100;
        } while (9999 < (uint)uVal_8);
        if ((uint)(uVal_8 / 100) < 10) goto LAB_18036abb5;
LAB_18036ab07:
        *(uint16_t *)(lVal_3 + (uint64_t)(uVal_7 - 2)) =
             *(uint16_t *)(&DAT_1806afb50 + (uint64_t)param_3 * 2);
      }
      *param_1 = param_2;
      goto LAB_18036abc0;
    }
  }
  uVal_9 = (uint64_t)param_3;
  if (param_3 < 100) {
    uVal_2 = uVal_7;
    if (9 < param_3) goto LAB_18036ab64;
LAB_18036ab84:
    *(byte *)((int64_t)local_3a + (uint64_t)(uVal_2 - 1)) = bFlag_6 | 0x30;
  }
  else {
    do {
      uVal_8 = uVal_9;
      uVal_2 = (int)uVal_4 - 2;
      uVal_4 = (uint64_t)uVal_2;
      bFlag_6 = (byte)(uVal_8 / 100);
      param_3 = (uint)(uVal_8 / 100);
      *(uint16_t *)((int64_t)local_3a + uVal_4) =
           *(uint16_t *)
            (&DAT_1806afb50 + (uint64_t)((uint)uVal_8 + (int)(uVal_8 / 100) * -100) * 2);
      uVal_9 = uVal_8 / 100;
    } while (9999 < (uint)uVal_8);
    if ((uint)(uVal_8 / 100) < 10) goto LAB_18036ab84;
LAB_18036ab64:
    *(uint16_t *)((int64_t)local_3a + (uint64_t)(uVal_2 - 2)) =
         *(uint16_t *)(&DAT_1806afb50 + (uint64_t)param_3 * 2);
  }
  func_0x1800b1e50(param_1,local_3a,(int64_t)local_3a + (int64_t)(int)uVal_7,param_2);
LAB_18036abc0:
  if (DAT_18083cf40 != (local_30 ^ (uint64_t)auStack_68)) {
    func_0x180673080(local_30 ^ (uint64_t)auStack_68);
    fnPtr_1 = (func_ptr_t )swi(3);
    ptr2_Long_5 = (int64_t **)(*fnPtr_1)();
    return ptr2_Long_5;
  }
  return param_1;
}

// func_0x18036abf0
int64_t ** func_0x18036abf0(int64_t **param_1,int64_t *param_2,uint *param_3,int64_t param_4,uint64_t param_5, int **param_6)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  int64_t **ptr2_Long_3;
  uint64_t uVal_4;
  int iVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  uint8_t auStack_88 [32];
  int local_68;
  uint8_t local_60;
  int *local_58;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  uVal_4 = 0;
  if (param_5 <= param_3[2]) {
    uVal_4 = param_3[2] - param_5;
  }
  uVal_7 = uVal_4 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_6 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVal_4;
  if ((uint64_t)param_2[2] < uVal_6) {
    (*(func_ptr_t )param_2[3])(param_2,uVal_6);
  }
  if (uVal_7 != 0) {
    func_0x1800b57e0(&local_48,param_2,uVal_7,param_3);
    param_2 = local_48;
  }
  iVal_5 = **param_6;
  if (iVal_5 != 0) {
    lVal_2 = param_2[1];
    uVal_6 = lVal_2 + 1;
    if ((uint64_t)param_2[2] < uVal_6) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_2 = param_2[1];
      uVal_6 = lVal_2 + 1;
    }
    param_2[1] = uVal_6;
    *(char *)(*param_2 + lVal_2) = (char)(0x202b2d00 >> ((byte)(iVal_5 << 3) & 0x1f));
  }
  local_58 = param_6[5];
  local_60 = *(uint8_t *)param_6[4];
  local_68 = *param_6[3];
  func_0x18036ada0(&local_48,param_2,*param_6[1],*param_6[2]);
  pLong_8 = local_48;
  iVal_5 = *param_6[6];
  if (0 < iVal_5) {
    do {
      lVal_2 = pLong_8[1];
      uVal_6 = lVal_2 + 1;
      if ((uint64_t)pLong_8[2] < uVal_6) {
        (*(func_ptr_t )pLong_8[3])(pLong_8);
        lVal_2 = pLong_8[1];
        uVal_6 = lVal_2 + 1;
      }
      pLong_8[1] = uVal_6;
      *(uint8_t *)(*pLong_8 + lVal_2) = 0x30;
      iVal_5 = iVal_5 + -1;
    } while (iVal_5 != 0);
  }
  if (uVal_4 != uVal_7) {
    func_0x1800b57e0(&local_48,pLong_8,uVal_4 - uVal_7,param_3);
    pLong_8 = local_48;
  }
  *param_1 = pLong_8;
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_88)) {
    return param_1;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_88);
  fnPtr_1 = (func_ptr_t )swi(3);
  ptr2_Long_3 = (int64_t **)(*fnPtr_1)();
  return ptr2_Long_3;
}

// func_0x18036ada0
uint64_t func_0x18036ada0(uint64_t param_1,uint64_t param_2,uint param_3,uint64_t param_4,uint param_5, char param_6)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  int64_t lVal_12;
  uint8_t auStack_68 [45];
  uint16_t local_3b;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_7 = (uint)param_4;
  if (param_6 != '\0') {
    uVal_6 = (uint64_t)param_5;
    lVal_11 = (int64_t)&local_3b + (int64_t)(int)uVal_7 + 1;
    uVal_7 = uVal_7 - param_5;
    lVal_12 = lVal_11;
    if ((int)uVal_7 < 2) {
      uVal_9 = (uint64_t)param_3;
    }
    else {
      uVal_8 = (uVal_7 >> 1) + 1;
      do {
        uVal_9 = (uint64_t)param_3 / 100;
        *(uint16_t *)(lVal_12 + -2) =
             *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(param_3 % 100) * 2);
        lVal_12 = lVal_12 + -2;
        uVal_8 = uVal_8 - 1;
        param_3 = param_3 / 100;
      } while (1 < uVal_8);
    }
    if ((uVal_7 & 1) != 0) {
      *(byte *)(lVal_12 + -1) = (char)uVal_9 + ((char)(uVal_9 / 10) + (char)(uVal_9 / 10)) * -5 | 0x30;
      lVal_12 = lVal_12 + -1;
      uVal_9 = uVal_9 / 10;
    }
    *(char *)(lVal_12 + -1) = param_6;
    lVal_2 = -1 - (int64_t)(int)param_5;
    uVal_7 = (uint)uVal_9;
    uVal_3 = uVal_9;
    uVal_8 = uVal_7;
    if (99 < uVal_7) {
      do {
        uVal_10 = uVal_3;
        param_5 = (int)uVal_6 - 2;
        uVal_6 = (uint64_t)param_5;
        uVal_9 = uVal_10 / 100;
        uVal_7 = (uint)uVal_9;
        *(uint16_t *)(lVal_12 + uVal_6 + lVal_2) =
             *(uint16_t *)
              (&DAT_1806afb50 + (uint64_t)((uint)uVal_10 + (int)(uVal_10 / 100) * -100) * 2);
        uVal_3 = uVal_10 / 100;
      } while (9999 < (uint)uVal_10);
      uVal_8 = (uint)(uVal_10 / 100);
    }
    if (uVal_8 < 10) {
      *(byte *)(lVal_12 + (uint64_t)(param_5 - 1) + lVal_2) = (byte)uVal_9 | 0x30;
    }
    else {
      *(uint16_t *)(lVal_12 + (uint64_t)(param_5 - 2) + lVal_2) =
           *(uint16_t *)(&DAT_1806afb50 + (uint64_t)uVal_7 * 2);
    }
    goto LAB_18036af6f;
  }
  if (param_3 < 100) {
    uVal_6 = (uint64_t)param_3;
    uVal_8 = uVal_7;
    if (param_3 < 10) goto LAB_18036af5b;
LAB_18036af12:
    *(uint16_t *)((int64_t)&local_3b + (uint64_t)(uVal_8 - 2)) =
         *(uint16_t *)(&DAT_1806afb50 + uVal_6 * 2);
  }
  else {
    param_4 = param_4 & 0xffffffff;
    do {
      uVal_4 = param_3;
      uVal_8 = (int)param_4 - 2;
      param_4 = (uint64_t)uVal_8;
      uVal_6 = (uint64_t)uVal_4 / 100;
      *(uint16_t *)((int64_t)&local_3b + param_4) =
           *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(uVal_4 % 100) * 2);
      param_3 = uVal_4 / 100;
    } while (9999 < uVal_4);
    if (9 < uVal_4 / 100) goto LAB_18036af12;
LAB_18036af5b:
    *(byte *)((int64_t)&local_3b + (uint64_t)(uVal_8 - 1)) = (byte)uVal_6 | 0x30;
  }
  lVal_11 = (int64_t)&local_3b + (int64_t)(int)uVal_7;
LAB_18036af6f:
  func_0x1800b1e50(param_1,&local_3b,lVal_11,param_2);
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_5 = (*fnPtr_1)();
  return uVal_5;
}

// func_0x18036afb0
int64_t * func_0x18036afb0(int64_t *param_1,int64_t param_2,uint *param_3,int64_t param_4,uint64_t param_5, uint64_t param_6)
{
  func_ptr_t fnPtr_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t auStack_68 [40];
  int64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_3 = 0;
  if (param_5 <= param_3[2]) {
    uVal_3 = param_3[2] - param_5;
  }
  uVal_5 = uVal_3 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_4 = param_4 + *(int64_t *)(param_2 + 8) + (*param_3 >> 0xf & 7) * uVal_3;
  if (*(uint64_t *)(param_2 + 0x10) < uVal_4) {
    (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_4);
  }
  if (uVal_5 != 0) {
    func_0x1800b57e0(&local_40,param_2,uVal_5,param_3);
    param_2 = local_40;
  }
  func_0x18036b0c0(param_6,&local_40,param_2);
  if (uVal_3 != uVal_5) {
    func_0x1800b57e0(&local_40,local_40,uVal_3 - uVal_5,param_3);
  }
  *param_1 = local_40;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  pLong_2 = (int64_t *)(*fnPtr_1)();
  return pLong_2;
}

// func_0x18036b0c0
int64_t ** func_0x18036b0c0(int **param_1,int64_t **param_2,int64_t *param_3)
{
  uint8_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int iVal_4;
  
  iVal_4 = **param_1;
  if (iVal_4 != 0) {
    lVal_2 = param_3[1];
    uVal_3 = lVal_2 + 1;
    if ((uint64_t)param_3[2] < uVal_3) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_2 = param_3[1];
      uVal_3 = lVal_2 + 1;
    }
    param_3[1] = uVal_3;
    *(char *)(*param_3 + lVal_2) = (char)(0x202b2d00 >> ((byte)(iVal_4 << 3) & 0x1f));
  }
  lVal_2 = param_3[1];
  uVal_3 = lVal_2 + 1;
  if ((uint64_t)param_3[2] < uVal_3) {
    (*(func_ptr_t )param_3[3])(param_3);
    lVal_2 = param_3[1];
    uVal_3 = lVal_2 + 1;
  }
  param_3[1] = uVal_3;
  *(uint8_t *)(*param_3 + lVal_2) = 0x30;
  if (*(char *)param_1[1] == '\0') {
    *param_2 = param_3;
  }
  else {
    uVal_1 = *(uint8_t *)param_1[2];
    lVal_2 = param_3[1];
    uVal_3 = lVal_2 + 1;
    if ((uint64_t)param_3[2] < uVal_3) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_2 = param_3[1];
      uVal_3 = lVal_2 + 1;
    }
    param_3[1] = uVal_3;
    *(uint8_t *)(*param_3 + lVal_2) = uVal_1;
    iVal_4 = *param_1[3];
    if (0 < iVal_4) {
      do {
        lVal_2 = param_3[1];
        uVal_3 = lVal_2 + 1;
        if ((uint64_t)param_3[2] < uVal_3) {
          (*(func_ptr_t )param_3[3])(param_3);
          lVal_2 = param_3[1];
          uVal_3 = lVal_2 + 1;
        }
        param_3[1] = uVal_3;
        *(uint8_t *)(*param_3 + lVal_2) = 0x30;
        iVal_4 = iVal_4 + -1;
      } while (iVal_4 != 0);
    }
    func_0x18036aa60(param_2,param_3,*param_1[4],*param_1[5]);
  }
  return param_2;
}

// func_0x18036b340
int64_t func_0x18036b340(uint8_t (**param_1)[16],uint8_t (*param_2)[16],uint64_t *param_3, uint32_t *param_4)
{
  uint32_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint8_t (*pArr16_4)[16];
  uint8_t (*pArr16_5)[16];
  uint32_t *pU64_6;
  uint8_t (*pArr16_7)[16];
  uint8_t (*pArr16_8)[16];
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  
  pArr16_5 = *param_1;
  uVal_9 = ((int64_t)param_1[1] - (int64_t)pArr16_5 >> 3) * 0x6db6db6db6db6db7 + 1;
  uVal_10 = ((int64_t)param_1[2] - (int64_t)pArr16_5 >> 3) * 0x6db6db6db6db6db7;
  uVal_11 = 0x492492492492492 - (uVal_10 >> 1);
  uVal_2 = (uVal_10 >> 1) + uVal_10;
  if (uVal_2 <= uVal_9) {
    uVal_2 = uVal_9;
  }
  if (uVal_11 <= uVal_10 && uVal_10 - uVal_11 != 0) {
    uVal_2 = 0x492492492492492;
  }
  if (0x492492492492492 < uVal_2) {
LAB_18036b748:
    func_0x18007ba90();
    goto LAB_18036b74d;
  }
  if (uVal_2 == 0) {
    pArr16_8 = (uint8_t (*)[16])0x0;
  }
  else if (uVal_2 < 0x4a) {
    pArr16_8 = (uint8_t (*)[16])func_0x180672de0();
  }
  else {
    if (uVal_2 == 0x492492492492492) goto LAB_18036b748;
    lVal_3 = func_0x180672de0(uVal_2 * 0x38 + 0x27);
    pArr16_8 = (uint8_t (*)[16])(lVal_3 + 0x27U & 0xffffffffffffffe0);
    *(int64_t *)(pArr16_8[-1] + 8) = lVal_3;
  }
  lVal_3 = (int64_t)param_2 - (int64_t)pArr16_5;
  *(uint8_t (*)[16])((int64_t)pArr16_8 + lVal_3) = ZEXT816(0);
  *(uint64_t *)((int64_t)pArr16_8 + lVal_3 + 0x10) = 0;
  uVal_1 = *(uint32_t *)(param_3 + 1);
  *(uint64_t *)((int64_t)pArr16_8 + lVal_3) = *param_3;
  *(uint32_t *)((int64_t)pArr16_8 + lVal_3 + 8) = uVal_1;
  uVal_1 = *(uint32_t *)((int64_t)param_3 + 0x14);
  *(uint64_t *)((int64_t)pArr16_8 + lVal_3 + 0xc) = *(uint64_t *)((int64_t)param_3 + 0xc);
  *(uint32_t *)((int64_t)pArr16_8 + lVal_3 + 0x14) = uVal_1;
  *(uint32_t *)((int64_t)pArr16_8 + lVal_3 + 0x18) = *param_4;
  *(uint32_t *)((int64_t)pArr16_8 + lVal_3 + 0x1c) = param_4[1];
  *(uint32_t *)((int64_t)pArr16_8 + lVal_3 + 0x20) = param_4[2];
  *(uint32_t *)((int64_t)pArr16_8 + lVal_3 + 0x24) = param_4[3];
  *(uint32_t *)((int64_t)pArr16_8 + lVal_3 + 0x28) = param_4[4];
  *(uint32_t *)((int64_t)pArr16_8 + lVal_3 + 0x2c) = param_4[5];
  *(uint32_t *)((int64_t)pArr16_8 + lVal_3 + 0x30) = param_4[6];
  *(uint32_t *)((int64_t)pArr16_8 + lVal_3 + 0x34) = param_4[7];
  pArr16_7 = *param_1;
  pArr16_5 = param_1[1];
  if (param_2 == pArr16_5) {
    pArr16_5 = pArr16_8;
    if (pArr16_7 != param_2) {
      do {
        *pArr16_5 = ZEXT816(0);
        *(uint64_t *)pArr16_5[1] = 0;
        uVal_1 = *(uint32_t *)(*pArr16_7 + 8);
        *(uint64_t *)*pArr16_5 = *(uint64_t *)*pArr16_7;
        *(uint32_t *)(*pArr16_5 + 8) = uVal_1;
        uVal_1 = *(uint32_t *)(pArr16_7[1] + 4);
        *(uint64_t *)(*pArr16_5 + 0xc) = *(uint64_t *)(*pArr16_7 + 0xc);
        *(uint32_t *)(pArr16_5[1] + 4) = uVal_1;
        *(uint32_t *)(pArr16_5[1] + 8) = *(uint32_t *)(pArr16_7[1] + 8);
        *(uint32_t *)(pArr16_5[1] + 0xc) = *(uint32_t *)(pArr16_7[1] + 0xc);
        *(uint32_t *)pArr16_5[2] = *(uint32_t *)pArr16_7[2];
        *(uint32_t *)(pArr16_5[2] + 4) = *(uint32_t *)(pArr16_7[2] + 4);
        *(uint32_t *)(pArr16_5[2] + 8) = *(uint32_t *)(pArr16_7[2] + 8);
        *(uint32_t *)(pArr16_5[2] + 0xc) = *(uint32_t *)(pArr16_7[2] + 0xc);
        *(uint32_t *)pArr16_5[3] = *(uint32_t *)pArr16_7[3];
        *(uint32_t *)(pArr16_5[3] + 4) = *(uint32_t *)(pArr16_7[3] + 4);
        pArr16_7 = (uint8_t (*)[16])(pArr16_7[3] + 8);
        pArr16_5 = (uint8_t (*)[16])(pArr16_5[3] + 8);
      } while (pArr16_7 != param_2);
      goto LAB_18036b6e2;
    }
  }
  else {
    pArr16_4 = pArr16_8;
    if (pArr16_7 != param_2) {
      do {
        *pArr16_4 = ZEXT816(0);
        *(uint64_t *)pArr16_4[1] = 0;
        uVal_1 = *(uint32_t *)(*pArr16_7 + 8);
        *(uint64_t *)*pArr16_4 = *(uint64_t *)*pArr16_7;
        *(uint32_t *)(*pArr16_4 + 8) = uVal_1;
        uVal_1 = *(uint32_t *)(pArr16_7[1] + 4);
        *(uint64_t *)(*pArr16_4 + 0xc) = *(uint64_t *)(*pArr16_7 + 0xc);
        *(uint32_t *)(pArr16_4[1] + 4) = uVal_1;
        *(uint32_t *)(pArr16_4[1] + 8) = *(uint32_t *)(pArr16_7[1] + 8);
        *(uint32_t *)(pArr16_4[1] + 0xc) = *(uint32_t *)(pArr16_7[1] + 0xc);
        *(uint32_t *)pArr16_4[2] = *(uint32_t *)pArr16_7[2];
        *(uint32_t *)(pArr16_4[2] + 4) = *(uint32_t *)(pArr16_7[2] + 4);
        *(uint32_t *)(pArr16_4[2] + 8) = *(uint32_t *)(pArr16_7[2] + 8);
        *(uint32_t *)(pArr16_4[2] + 0xc) = *(uint32_t *)(pArr16_7[2] + 0xc);
        *(uint32_t *)pArr16_4[3] = *(uint32_t *)pArr16_7[3];
        *(uint32_t *)(pArr16_4[3] + 4) = *(uint32_t *)(pArr16_7[3] + 4);
        pArr16_7 = (uint8_t (*)[16])(pArr16_7[3] + 8);
        pArr16_4 = (uint8_t (*)[16])(pArr16_4[3] + 8);
      } while (pArr16_7 != param_2);
      pArr16_5 = param_1[1];
    }
    if (param_2 != pArr16_5) {
      pU64_6 = (uint32_t *)((int64_t)pArr16_8 + lVal_3 + 0x6c);
      do {
        *(uint8_t (*)[16])(pU64_6 + -0xd) = ZEXT816(0);
        *(uint64_t *)(pU64_6 + -9) = 0;
        uVal_1 = *(uint32_t *)(*param_2 + 8);
        *(uint64_t *)(pU64_6 + -0xd) = *(uint64_t *)*param_2;
        pU64_6[-0xb] = uVal_1;
        uVal_1 = *(uint32_t *)(param_2[1] + 4);
        *(uint64_t *)(pU64_6 + -10) = *(uint64_t *)(*param_2 + 0xc);
        pU64_6[-8] = uVal_1;
        pU64_6[-7] = *(uint32_t *)(param_2[1] + 8);
        pU64_6[-6] = *(uint32_t *)(param_2[1] + 0xc);
        pU64_6[-5] = *(uint32_t *)param_2[2];
        pU64_6[-4] = *(uint32_t *)(param_2[2] + 4);
        pU64_6[-3] = *(uint32_t *)(param_2[2] + 8);
        pU64_6[-2] = *(uint32_t *)(param_2[2] + 0xc);
        pU64_6[-1] = *(uint32_t *)param_2[3];
        *pU64_6 = *(uint32_t *)(param_2[3] + 4);
        param_2 = (uint8_t (*)[16])(param_2[3] + 8);
        pU64_6 = pU64_6 + 0xe;
      } while (param_2 != pArr16_5);
    }
LAB_18036b6e2:
    pArr16_7 = *param_1;
  }
  if (pArr16_7 != (uint8_t (*)[16])0x0) {
    uVal_10 = (int64_t)param_1[2] - (int64_t)pArr16_7;
    pArr16_5 = pArr16_7;
    if (0xfff < uVal_10) {
      pArr16_5 = *(uint8_t (**)[16])(pArr16_7[-1] + 8);
      if (0x1f < (uint64_t)((int64_t)pArr16_7 + (-8 - (int64_t)pArr16_5))) {
LAB_18036b74d:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_10 = uVal_10 + 0x27;
    }
    thunk_FUN_180695dd0(pArr16_5,uVal_10);
  }
  *param_1 = pArr16_8;
  param_1[1] = (uint8_t (*)[16])(uVal_9 * 0x38 + (int64_t)pArr16_8);
  param_1[2] = (uint8_t (*)[16])(uVal_2 * 0x38 + (int64_t)pArr16_8);
  return lVal_3 + (int64_t)pArr16_8;
}

// func_0x18036b7c0
void func_0x18036b7c0(uint8_t (**param_1)[16],uint64_t *param_2)
{
  uint32_t uVal_1;
  uint64_t uVal_2;
  uint8_t (*pArr16_3)[16];
  uint8_t (*pArr16_4)[16];
  int64_t lVal_5;
  uint8_t (*pArr16_6)[16];
  uint8_t (*pArr16_7)[16];
  uint64_t uVal_8;
  uint8_t (*pArr16_9)[16];
  uint8_t (*pArr16_10)[16];
  
  uVal_2 = *param_2;
  if (0x666666666666666 < uVal_2) {
LAB_18036b943:
    func_0x18007ba90();
    goto LAB_18036b948;
  }
  pArr16_3 = *param_1;
  pArr16_4 = param_1[1];
  if (uVal_2 == 0) {
    pArr16_9 = (uint8_t (*)[16])0x0;
    pArr16_6 = *param_1;
    pArr16_7 = param_1[1];
    pArr16_10 = pArr16_9;
    if (pArr16_6 == pArr16_7) goto LAB_18036b849;
LAB_18036b880:
    do {
      *pArr16_9 = ZEXT816(0);
      *(uint64_t *)pArr16_9[1] = 0;
      uVal_1 = *(uint32_t *)(*pArr16_6 + 8);
      *(uint64_t *)*pArr16_9 = *(uint64_t *)*pArr16_6;
      *(uint32_t *)(*pArr16_9 + 8) = uVal_1;
      uVal_1 = *(uint32_t *)(pArr16_6[1] + 4);
      *(uint64_t *)(*pArr16_9 + 0xc) = *(uint64_t *)(*pArr16_6 + 0xc);
      *(uint32_t *)(pArr16_9[1] + 4) = uVal_1;
      *(uint32_t *)(pArr16_9[1] + 8) = *(uint32_t *)(pArr16_6[1] + 8);
      *(uint32_t *)(pArr16_9[1] + 0xc) = *(uint32_t *)(pArr16_6[1] + 0xc);
      *(uint32_t *)pArr16_9[2] = *(uint32_t *)pArr16_6[2];
      *(uint32_t *)(pArr16_9[2] + 4) = *(uint32_t *)(pArr16_6[2] + 4);
      pArr16_9 = (uint8_t (*)[16])(pArr16_9[2] + 8);
      pArr16_6 = (uint8_t (*)[16])(pArr16_6[2] + 8);
    } while (pArr16_6 != pArr16_7);
    pArr16_6 = *param_1;
    uVal_2 = *param_2;
    pArr16_9 = pArr16_10;
  }
  else {
    if (uVal_2 < 0x67) {
      pArr16_9 = (uint8_t (*)[16])func_0x180672de0(uVal_2 * 0x28);
      pArr16_6 = *param_1;
      pArr16_7 = param_1[1];
      pArr16_10 = pArr16_9;
      if (pArr16_6 != pArr16_7) goto LAB_18036b880;
    }
    else {
      if (uVal_2 == 0x666666666666666) goto LAB_18036b943;
      lVal_5 = func_0x180672de0(uVal_2 * 0x28 + 0x27);
      pArr16_9 = (uint8_t (*)[16])(lVal_5 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pArr16_9[-1] + 8) = lVal_5;
      pArr16_6 = *param_1;
      pArr16_7 = param_1[1];
      pArr16_10 = pArr16_9;
      if (pArr16_6 != pArr16_7) goto LAB_18036b880;
    }
LAB_18036b849:
    uVal_2 = *param_2;
  }
  if (pArr16_6 != (uint8_t (*)[16])0x0) {
    uVal_8 = (int64_t)param_1[2] - (int64_t)pArr16_6;
    pArr16_7 = pArr16_6;
    if (0xfff < uVal_8) {
      pArr16_7 = *(uint8_t (**)[16])(pArr16_6[-1] + 8);
      if (0x1f < (uint64_t)((int64_t)pArr16_6 + (-8 - (int64_t)pArr16_7))) {
LAB_18036b948:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_8 = uVal_8 + 0x27;
    }
    thunk_FUN_180695dd0(pArr16_7,uVal_8);
  }
  *param_1 = pArr16_9;
  param_1[1] = (uint8_t (*)[16])(((int64_t)pArr16_4 - (int64_t)pArr16_3) + (int64_t)pArr16_9);
  param_1[2] = (uint8_t (*)[16])((int64_t)pArr16_9 + uVal_2 * 0x28);
  return;
}

// func_0x18036ba50
int64_t func_0x18036ba50(uint8_t (**param_1)[16],uint8_t (*param_2)[16],uint64_t *param_3, uint32_t *param_4)
{
  uint32_t uVal_1;
  int64_t lVal_2;
  uint8_t (*pArr16_3)[16];
  uint8_t (*pArr16_4)[16];
  uint64_t uVal_5;
  uint8_t (*pArr16_6)[16];
  uint64_t uVal_7;
  uint8_t (*pArr16_8)[16];
  uint64_t uVal_9;
  uint64_t uVal_10;
  
  pArr16_4 = *param_1;
  uVal_10 = ((int64_t)param_1[1] - (int64_t)pArr16_4 >> 3) * -0x3333333333333333 + 1;
  uVal_5 = ((int64_t)param_1[2] - (int64_t)pArr16_4 >> 3) * -0x3333333333333333;
  uVal_9 = 0x666666666666666 - (uVal_5 >> 1);
  uVal_7 = (uVal_5 >> 1) + uVal_5;
  if (uVal_7 <= uVal_10) {
    uVal_7 = uVal_10;
  }
  if (uVal_9 <= uVal_5 && uVal_5 - uVal_9 != 0) {
    uVal_7 = 0x666666666666666;
  }
  if (0x666666666666666 < uVal_7) {
LAB_18036bd85:
    func_0x18007ba90();
    goto LAB_18036bd8a;
  }
  if (uVal_7 == 0) {
    pArr16_8 = (uint8_t (*)[16])0x0;
  }
  else if (uVal_7 < 0x67) {
    pArr16_8 = (uint8_t (*)[16])func_0x180672de0(uVal_7 * 0x28);
  }
  else {
    if (uVal_7 == 0x666666666666666) goto LAB_18036bd85;
    lVal_2 = func_0x180672de0(uVal_7 * 0x28 + 0x27);
    pArr16_8 = (uint8_t (*)[16])(lVal_2 + 0x27U & 0xffffffffffffffe0);
    *(int64_t *)(pArr16_8[-1] + 8) = lVal_2;
  }
  lVal_2 = (int64_t)param_2 - (int64_t)pArr16_4;
  *(uint8_t (*)[16])((int64_t)pArr16_8 + lVal_2) = ZEXT816(0);
  *(uint64_t *)((int64_t)pArr16_8 + lVal_2 + 0x10) = 0;
  uVal_1 = *(uint32_t *)(param_3 + 1);
  *(uint64_t *)((int64_t)pArr16_8 + lVal_2) = *param_3;
  *(uint32_t *)((int64_t)pArr16_8 + lVal_2 + 8) = uVal_1;
  uVal_1 = *(uint32_t *)((int64_t)param_3 + 0x14);
  *(uint64_t *)((int64_t)pArr16_8 + lVal_2 + 0xc) = *(uint64_t *)((int64_t)param_3 + 0xc);
  *(uint32_t *)((int64_t)pArr16_8 + lVal_2 + 0x14) = uVal_1;
  *(uint32_t *)((int64_t)pArr16_8 + lVal_2 + 0x18) = *param_4;
  *(uint32_t *)((int64_t)pArr16_8 + lVal_2 + 0x1c) = param_4[1];
  *(uint32_t *)((int64_t)pArr16_8 + lVal_2 + 0x20) = param_4[2];
  *(uint32_t *)((int64_t)pArr16_8 + lVal_2 + 0x24) = param_4[3];
  pArr16_6 = *param_1;
  pArr16_4 = param_1[1];
  if (param_2 == pArr16_4) {
    pArr16_4 = pArr16_8;
    if (pArr16_6 != param_2) {
      do {
        *pArr16_4 = ZEXT816(0);
        *(uint64_t *)pArr16_4[1] = 0;
        uVal_1 = *(uint32_t *)(*pArr16_6 + 8);
        *(uint64_t *)*pArr16_4 = *(uint64_t *)*pArr16_6;
        *(uint32_t *)(*pArr16_4 + 8) = uVal_1;
        uVal_1 = *(uint32_t *)(pArr16_6[1] + 4);
        *(uint64_t *)(*pArr16_4 + 0xc) = *(uint64_t *)(*pArr16_6 + 0xc);
        *(uint32_t *)(pArr16_4[1] + 4) = uVal_1;
        *(uint32_t *)(pArr16_4[1] + 8) = *(uint32_t *)(pArr16_6[1] + 8);
        *(uint32_t *)(pArr16_4[1] + 0xc) = *(uint32_t *)(pArr16_6[1] + 0xc);
        *(uint32_t *)pArr16_4[2] = *(uint32_t *)pArr16_6[2];
        *(uint32_t *)(pArr16_4[2] + 4) = *(uint32_t *)(pArr16_6[2] + 4);
        pArr16_6 = (uint8_t (*)[16])(pArr16_6[2] + 8);
        pArr16_4 = (uint8_t (*)[16])(pArr16_4[2] + 8);
      } while (pArr16_6 != param_2);
      goto LAB_18036bd16;
    }
  }
  else {
    pArr16_3 = pArr16_8;
    if (pArr16_6 != param_2) {
      do {
        *pArr16_3 = ZEXT816(0);
        *(uint64_t *)pArr16_3[1] = 0;
        uVal_1 = *(uint32_t *)(*pArr16_6 + 8);
        *(uint64_t *)*pArr16_3 = *(uint64_t *)*pArr16_6;
        *(uint32_t *)(*pArr16_3 + 8) = uVal_1;
        uVal_1 = *(uint32_t *)(pArr16_6[1] + 4);
        *(uint64_t *)(*pArr16_3 + 0xc) = *(uint64_t *)(*pArr16_6 + 0xc);
        *(uint32_t *)(pArr16_3[1] + 4) = uVal_1;
        *(uint32_t *)(pArr16_3[1] + 8) = *(uint32_t *)(pArr16_6[1] + 8);
        *(uint32_t *)(pArr16_3[1] + 0xc) = *(uint32_t *)(pArr16_6[1] + 0xc);
        *(uint32_t *)pArr16_3[2] = *(uint32_t *)pArr16_6[2];
        *(uint32_t *)(pArr16_3[2] + 4) = *(uint32_t *)(pArr16_6[2] + 4);
        pArr16_6 = (uint8_t (*)[16])(pArr16_6[2] + 8);
        pArr16_3 = (uint8_t (*)[16])(pArr16_3[2] + 8);
      } while (pArr16_6 != param_2);
      pArr16_4 = param_1[1];
    }
    if (param_2 != pArr16_4) {
      pArr16_6 = (uint8_t (*)[16])(lVal_2 + (int64_t)pArr16_8);
      do {
        pArr16_3 = (uint8_t (*)[16])(pArr16_6[2] + 8);
        *pArr16_3 = ZEXT816(0);
        *(uint64_t *)(pArr16_6[3] + 8) = 0;
        uVal_1 = *(uint32_t *)(*param_2 + 8);
        *(uint64_t *)*pArr16_3 = *(uint64_t *)*param_2;
        *(uint32_t *)pArr16_6[3] = uVal_1;
        uVal_1 = *(uint32_t *)(param_2[1] + 4);
        *(uint64_t *)(pArr16_6[3] + 4) = *(uint64_t *)(*param_2 + 0xc);
        *(uint32_t *)(pArr16_6[3] + 0xc) = uVal_1;
        *(uint32_t *)pArr16_6[4] = *(uint32_t *)(param_2[1] + 8);
        *(uint32_t *)(pArr16_6[4] + 4) = *(uint32_t *)(param_2[1] + 0xc);
        *(uint32_t *)(pArr16_6[4] + 8) = *(uint32_t *)param_2[2];
        *(uint32_t *)(pArr16_6[4] + 0xc) = *(uint32_t *)(param_2[2] + 4);
        param_2 = (uint8_t (*)[16])(param_2[2] + 8);
        pArr16_6 = pArr16_3;
      } while (param_2 != pArr16_4);
    }
LAB_18036bd16:
    pArr16_6 = *param_1;
  }
  if (pArr16_6 != (uint8_t (*)[16])0x0) {
    uVal_5 = (int64_t)param_1[2] - (int64_t)pArr16_6;
    pArr16_4 = pArr16_6;
    if (0xfff < uVal_5) {
      pArr16_4 = *(uint8_t (**)[16])(pArr16_6[-1] + 8);
      if (0x1f < (uint64_t)((int64_t)pArr16_6 + (-8 - (int64_t)pArr16_4))) {
LAB_18036bd8a:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(pArr16_4,uVal_5);
  }
  *param_1 = pArr16_8;
  param_1[1] = (uint8_t (*)[16])((int64_t)pArr16_8 + uVal_10 * 0x28);
  param_1[2] = (uint8_t (*)[16])((int64_t)pArr16_8 + uVal_7 * 0x28);
  return lVal_2 + (int64_t)pArr16_8;
}

// func_0x18036bde0
void func_0x18036bde0(uint64_t *param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  
  uVal_9 = *param_2;
  if (uVal_9 < 0x38e38e38e38e38f) {
    uVal_1 = *param_1;
    uVal_2 = param_1[1];
    if (uVal_9 == 0) {
      uVal_9 = 0;
    }
    else if (uVal_9 < 0x39) {
      uVal_9 = func_0x180672de0(uVal_9 * 0x48);
    }
    else {
      if (uVal_9 == 0x38e38e38e38e38e) goto LAB_18036bfba;
      lVal_4 = func_0x180672de0(uVal_9 * 0x48 + 0x27);
      uVal_9 = lVal_4 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_9 - 8) = lVal_4;
    }
    uVal_11 = *param_2;
    uVal_8 = *param_1;
    uVal_7 = param_1[1];
    uVal_10 = uVal_9;
    if (uVal_8 != uVal_7) {
      do {
        func_0x18036c0d0(uVal_10,uVal_8);
        uVal_8 = uVal_8 + 0x48;
        uVal_10 = uVal_10 + 0x48;
      } while (uVal_8 != uVal_7);
      uVal_11 = *param_2;
      uVal_8 = *param_1;
    }
    if (uVal_8 != 0) {
      uVal_7 = param_1[1];
      if (uVal_8 == uVal_7) {
        uVal_7 = param_1[2] - uVal_8;
      }
      else {
        do {
          uVal_10 = *(uint64_t *)(uVal_8 + 0x28);
          if (0xf < uVal_10) {
            lVal_4 = *(int64_t *)(uVal_8 + 0x10);
            uVal_5 = uVal_10 + 1;
            lVal_6 = lVal_4;
            if (0xfff < uVal_5) {
              lVal_6 = *(int64_t *)(lVal_4 + -8);
              if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_6)) goto LAB_18036bfb8;
              uVal_5 = uVal_10 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_6,uVal_5);
          }
          *(uint64_t *)(uVal_8 + 0x20) = 0;
          *(uint64_t *)(uVal_8 + 0x28) = 0xf;
          *(uint8_t *)(uVal_8 + 0x10) = 0;
          uVal_8 = uVal_8 + 0x48;
        } while (uVal_8 != uVal_7);
        uVal_8 = *param_1;
        uVal_7 = param_1[2] - uVal_8;
      }
      if (0xfff < uVal_7) {
        if (0x1f < (uVal_8 - 8) - *(uint64_t *)(uVal_8 - 8)) {
LAB_18036bfb8:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_7 = uVal_7 + 0x27;
        uVal_8 = *(uint64_t *)(uVal_8 - 8);
      }
      thunk_FUN_180695dd0(uVal_8,uVal_7);
    }
    *param_1 = uVal_9;
    param_1[1] = (uVal_2 - uVal_1) + uVal_9;
    param_1[2] = uVal_9 + uVal_11 * 0x48;
    return;
  }
LAB_18036bfba:
  func_0x18007ba90();
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// Unwind@18036bfc0
void Unwind_18036bfc0(uint64_t param_1,int64_t param_2)
{
  func_0x18036c050(param_2 + 0x28);
  func_0x18036c000(param_2 + 0x40);
  return;
}

// func_0x18036c000
void func_0x18036c000(int64_t param_1)
{
  LPVOID lpMem;
  uint64_t uVal_1;
  BOOL BVar2;
  DWORD DVar3;
  uint32_t uVal_4;
  uint32_t *pU64_5;
  
  lpMem = *(LPVOID *)(param_1 + 8);
  if (lpMem == (LPVOID)0x0) {
    return;
  }
  uVal_1 = *(int64_t *)(param_1 + 0x10) * 0x48;
  if (uVal_1 < 0x1000) {
    if ((lpMem != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_180842c78,0,lpMem), BVar2 == 0)) {
      DVar3 = GetLastError();
      uVal_4 = func_0x18068244c(DVar3);
      pU64_5 = (uint32_t *)func_0x1806823dc();
      *pU64_5 = uVal_4;
    }
    return;
  }
  if (0x1f < (uint64_t)((int64_t)lpMem + (-8 - *(int64_t *)((int64_t)lpMem + -8)))) {
    do {
      invalidInstructionException();
    } while( true );
  }
  thunk_FUN_180695dd0(*(int64_t *)((int64_t)lpMem + -8),uVal_1 + 0x27);
  return;
}

// func_0x18036c050
void func_0x18036c050(int64_t *param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  
  lVal_6 = *param_1;
  lVal_1 = param_1[1];
  do {
    if (lVal_6 == lVal_1) {
      return;
    }
    uVal_2 = *(uint64_t *)(lVal_6 + 0x28);
    if (0xf < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_6 + 0x10);
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
    *(uint64_t *)(lVal_6 + 0x20) = 0;
    *(uint64_t *)(lVal_6 + 0x28) = 0xf;
    *(uint8_t *)(lVal_6 + 0x10) = 0;
    lVal_6 = lVal_6 + 0x48;
  } while( true );
}

// func_0x18036c0d0
uint32_t * func_0x18036c0d0(uint32_t *param_1,uint32_t *param_2)
{
  uint32_t uVal_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint32_t *pU64_8;
  uint64_t uVal_9;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
  uVal_2 = *(uint64_t *)(param_2 + 8);
  if (*(uint64_t *)(param_2 + 10) < 0x10) {
    pU64_8 = param_2 + 4;
  }
  else {
    pU64_8 = *(uint32_t **)(param_2 + 4);
  }
  if (-1 < (int64_t)uVal_2) {
    if (uVal_2 < 0x10) {
      *(uint64_t *)(param_1 + 8) = uVal_2;
      *(uint64_t *)(param_1 + 10) = 0xf;
      uVal_1 = pU64_8[1];
      uVal_4 = pU64_8[2];
      uVal_5 = pU64_8[3];
      param_1[4] = *pU64_8;
      param_1[5] = uVal_1;
      param_1[6] = uVal_4;
      param_1[7] = uVal_5;
    }
    else {
      uVal_6 = uVal_2 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_6) {
        uVal_9 = uVal_6;
      }
      if (uVal_6 < 0xfff) {
        uVal_6 = func_0x180672de0(uVal_9 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_9 + 0x28);
        uVal_6 = lVal_7 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_6 - 8) = lVal_7;
      }
      *(uint64_t *)(param_1 + 4) = uVal_6;
      *(uint64_t *)(param_1 + 8) = uVal_2;
      *(uint64_t *)(param_1 + 10) = uVal_9;
      func_0x1806aa960(uVal_6,pU64_8,uVal_2 + 1);
    }
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    uVal_1 = *(uint32_t *)((int64_t)param_2 + 0x43);
    param_1[0x10] = param_2[0x10];
    *(uint32_t *)((int64_t)param_1 + 0x43) = uVal_1;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_3 = (func_ptr_t )swi(3);
  pU64_8 = (uint32_t *)(*fnPtr_3)();
  return pU64_8;
}

// func_0x18036c5c0
void func_0x18036c5c0(uint64_t *param_1,uint64_t *param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  
  uVal_5 = *param_2;
  if (uVal_5 >> 0x3b != 0) {
LAB_18036c70d:
    func_0x18007ba90();
    goto LAB_18036c712;
  }
  uVal_2 = *param_1;
  uVal_3 = param_1[1];
  if (uVal_5 == 0) {
    uVal_9 = 0;
    uVal_6 = *param_1;
    uVal_5 = param_1[1];
    if (uVal_6 == uVal_5) goto LAB_18036c640;
LAB_18036c661:
    lVal_4 = 0;
    do {
      *(uint64_t *)(uVal_9 + lVal_4) = *(uint64_t *)(uVal_6 + lVal_4);
      *(uint32_t *)(uVal_9 + 8 + lVal_4) = *(uint32_t *)(uVal_6 + 8 + lVal_4);
      *(uint32_t *)(uVal_9 + 0x10 + lVal_4) = *(uint32_t *)(uVal_6 + 0x10 + lVal_4);
      *(uint32_t *)(uVal_9 + 0x14 + lVal_4) = *(uint32_t *)(uVal_6 + 0x14 + lVal_4);
      *(uint32_t *)(uVal_9 + 0x18 + lVal_4) = *(uint32_t *)(uVal_6 + 0x18 + lVal_4);
      lVal_1 = uVal_6 + lVal_4;
      lVal_4 = lVal_4 + 0x20;
    } while (lVal_1 + 0x20U != uVal_5);
    uVal_6 = *param_1;
    uVal_5 = *param_2;
  }
  else {
    if (uVal_5 < 0x80) {
      uVal_9 = func_0x180672de0(uVal_5 * 0x20);
      uVal_6 = *param_1;
      uVal_5 = param_1[1];
      if (uVal_6 != uVal_5) goto LAB_18036c661;
    }
    else {
      if (uVal_5 == 0x7ffffffffffffff) goto LAB_18036c70d;
      lVal_4 = func_0x180672de0(uVal_5 * 0x20 + 0x27);
      uVal_9 = lVal_4 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_9 - 8) = lVal_4;
      uVal_6 = *param_1;
      uVal_5 = param_1[1];
      if (uVal_6 != uVal_5) goto LAB_18036c661;
    }
LAB_18036c640:
    uVal_5 = *param_2;
  }
  if (uVal_6 != 0) {
    uVal_8 = param_1[2] - uVal_6;
    uVal_7 = uVal_6;
    if (0xfff < uVal_8) {
      uVal_7 = *(uint64_t *)(uVal_6 - 8);
      if (0x1f < (uVal_6 - 8) - uVal_7) {
LAB_18036c712:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_8 = uVal_8 + 0x27;
    }
    thunk_FUN_180695dd0(uVal_7,uVal_8);
  }
  *param_1 = uVal_9;
  param_1[1] = (uVal_3 - uVal_2) + uVal_9;
  param_1[2] = uVal_5 * 0x20 + uVal_9;
  return;
}

// func_0x18036c8b0
int64_t func_0x18036c8b0(uint64_t *param_1,uint64_t param_2,uint32_t *param_3,uint32_t *param_4, uint64_t *param_5)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  
  uVal_5 = *param_1;
  uVal_8 = ((int64_t)(param_1[1] - uVal_5) >> 5) + 1;
  uVal_10 = (int64_t)(param_1[2] - uVal_5) >> 5;
  uVal_2 = (uVal_10 >> 1) + uVal_10;
  if (uVal_2 <= uVal_8) {
    uVal_2 = uVal_8;
  }
  if (0x7ffffffffffffff - (uVal_10 >> 1) < uVal_10) {
    uVal_2 = 0x7ffffffffffffff;
  }
  if (uVal_2 >> 0x3b != 0) {
LAB_18036cafa:
    func_0x18007ba90();
    goto LAB_18036caff;
  }
  lVal_9 = uVal_2 * 0x20;
  if (uVal_2 == 0) {
    uVal_2 = 0;
  }
  else if (uVal_2 < 0x80) {
    uVal_2 = func_0x180672de0(lVal_9);
  }
  else {
    if (uVal_2 == 0x7ffffffffffffff) goto LAB_18036cafa;
    lVal_3 = func_0x180672de0(lVal_9 + 0x27);
    uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_2 - 8) = lVal_3;
  }
  lVal_3 = param_2 - uVal_5;
  *(uint64_t *)(uVal_2 + lVal_3) = *param_5;
  *(uint32_t *)(uVal_2 + 8 + lVal_3) = *param_4;
  *(uint32_t *)(uVal_2 + 0x10 + lVal_3) = *param_3;
  *(uint32_t *)(uVal_2 + 0x14 + lVal_3) = param_3[1];
  *(uint32_t *)(uVal_2 + 0x18 + lVal_3) = param_3[2];
  uVal_10 = *param_1;
  uVal_5 = param_1[1];
  if (param_2 == uVal_5) {
    if (uVal_10 != param_2) {
      lVal_4 = 0;
      do {
        *(uint64_t *)(uVal_2 + lVal_4) = *(uint64_t *)(uVal_10 + lVal_4);
        *(uint32_t *)(uVal_2 + 8 + lVal_4) = *(uint32_t *)(uVal_10 + 8 + lVal_4);
        *(uint32_t *)(uVal_2 + 0x10 + lVal_4) = *(uint32_t *)(uVal_10 + 0x10 + lVal_4);
        *(uint32_t *)(uVal_2 + 0x14 + lVal_4) = *(uint32_t *)(uVal_10 + 0x14 + lVal_4);
        *(uint32_t *)(uVal_2 + 0x18 + lVal_4) = *(uint32_t *)(uVal_10 + 0x18 + lVal_4);
        lVal_6 = uVal_10 + lVal_4;
        lVal_4 = lVal_4 + 0x20;
      } while (lVal_6 + 0x20U != param_2);
      goto LAB_18036ca99;
    }
  }
  else {
    if (uVal_10 != param_2) {
      lVal_4 = 0;
      do {
        *(uint64_t *)(uVal_2 + lVal_4) = *(uint64_t *)(uVal_10 + lVal_4);
        *(uint32_t *)(uVal_2 + 8 + lVal_4) = *(uint32_t *)(uVal_10 + 8 + lVal_4);
        *(uint32_t *)(uVal_2 + 0x10 + lVal_4) = *(uint32_t *)(uVal_10 + 0x10 + lVal_4);
        *(uint32_t *)(uVal_2 + 0x14 + lVal_4) = *(uint32_t *)(uVal_10 + 0x14 + lVal_4);
        *(uint32_t *)(uVal_2 + 0x18 + lVal_4) = *(uint32_t *)(uVal_10 + 0x18 + lVal_4);
        lVal_6 = uVal_10 + lVal_4;
        lVal_4 = lVal_4 + 0x20;
      } while (lVal_6 + 0x20U != param_2);
      uVal_5 = param_1[1];
    }
    if (param_2 != uVal_5) {
      lVal_4 = lVal_3 + uVal_2;
      lVal_6 = 0;
      do {
        *(uint64_t *)(lVal_4 + 0x20 + lVal_6) = *(uint64_t *)(param_2 + lVal_6);
        *(uint32_t *)(lVal_4 + 0x28 + lVal_6) = *(uint32_t *)(param_2 + 8 + lVal_6);
        *(uint32_t *)(lVal_4 + 0x30 + lVal_6) = *(uint32_t *)(param_2 + 0x10 + lVal_6);
        *(uint32_t *)(lVal_4 + 0x34 + lVal_6) = *(uint32_t *)(param_2 + 0x14 + lVal_6);
        *(uint32_t *)(lVal_4 + 0x38 + lVal_6) = *(uint32_t *)(param_2 + 0x18 + lVal_6);
        lVal_1 = param_2 + lVal_6;
        lVal_6 = lVal_6 + 0x20;
      } while (lVal_1 + 0x20U != uVal_5);
    }
LAB_18036ca99:
    uVal_10 = *param_1;
  }
  if (uVal_10 != 0) {
    uVal_7 = param_1[2] - uVal_10;
    uVal_5 = uVal_10;
    if (0xfff < uVal_7) {
      uVal_5 = *(uint64_t *)(uVal_10 - 8);
      if (0x1f < (uVal_10 - 8) - uVal_5) {
LAB_18036caff:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
    }
    thunk_FUN_180695dd0(uVal_5,uVal_7);
  }
  *param_1 = uVal_2;
  param_1[1] = uVal_8 * 0x20 + uVal_2;
  param_1[2] = lVal_9 + uVal_2;
  return lVal_3 + uVal_2;
}

// func_0x18036cb10
int64_t func_0x18036cb10(uint64_t *param_1,uint64_t param_2,uint32_t *param_3,uint32_t *param_4, uint32_t *param_5,uint32_t *param_6,uint8_t *param_7,uint8_t *param_8, uint8_t *param_9)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  uint32_t uVal_4;
  uint64_t uVal_5;
  func_ptr_t fnPtr_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  int64_t lVal_17;
  uint64_t uVal_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  uint64_t uVal_21;
  
  uVal_21 = *param_1;
  uVal_19 = ((int64_t)(param_1[1] - uVal_21) >> 3) * -0x71c71c71c71c71c7 + 1;
  uVal_15 = ((int64_t)(param_1[2] - uVal_21) >> 3) * -0x71c71c71c71c71c7;
  uVal_18 = 0x38e38e38e38e38e - (uVal_15 >> 1);
  uVal_20 = (uVal_15 >> 1) + uVal_15;
  if (uVal_20 <= uVal_19) {
    uVal_20 = uVal_19;
  }
  if (uVal_18 <= uVal_15 && uVal_15 - uVal_18 != 0) {
    uVal_20 = 0x38e38e38e38e38e;
  }
  if (0x38e38e38e38e38e < uVal_20) {
LAB_18036cfa4:
    func_0x18007ba90();
    fnPtr_6 = (func_ptr_t )swi(3);
    lVal_13 = (*fnPtr_6)();
    return lVal_13;
  }
  if (uVal_20 == 0) {
    uVal_15 = 0;
  }
  else if (uVal_20 < 0x39) {
    uVal_15 = func_0x180672de0(uVal_20 * 0x48);
  }
  else {
    if (uVal_20 == 0x38e38e38e38e38e) goto LAB_18036cfa4;
    lVal_13 = func_0x180672de0(uVal_20 * 0x48 + 0x27);
    uVal_15 = lVal_13 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_15 - 8) = lVal_13;
  }
  lVal_16 = param_2 - uVal_21;
  lVal_13 = uVal_15 + lVal_16;
  *(uint32_t *)(uVal_15 + lVal_16) = *param_3;
  *(uint32_t *)(uVal_15 + 4 + lVal_16) = param_3[1];
  *(uint32_t *)(uVal_15 + 8 + lVal_16) = param_3[2];
  *(uint8_t (*)[16])(uVal_15 + 0x20 + lVal_16) = ZEXT816(0);
  *(uint8_t (*)[16])(uVal_15 + 0x10 + lVal_16) = ZEXT816(0);
  uVal_4 = *param_4;
  uVal_7 = param_4[1];
  uVal_8 = param_4[2];
  uVal_9 = param_4[3];
  uVal_10 = param_4[5];
  uVal_11 = param_4[6];
  uVal_12 = param_4[7];
  pU64_2 = (uint32_t *)(uVal_15 + 0x20 + lVal_16);
  *pU64_2 = param_4[4];
  pU64_2[1] = uVal_10;
  pU64_2[2] = uVal_11;
  pU64_2[3] = uVal_12;
  pU64_2 = (uint32_t *)(uVal_15 + 0x10 + lVal_16);
  *pU64_2 = uVal_4;
  pU64_2[1] = uVal_7;
  pU64_2[2] = uVal_8;
  pU64_2[3] = uVal_9;
  *(uint64_t *)(param_4 + 4) = 0;
  *(uint64_t *)(param_4 + 6) = 0xf;
  *(uint8_t *)param_4 = 0;
  *(uint32_t *)(uVal_15 + 0x30 + lVal_16) = *param_5;
  *(uint32_t *)(uVal_15 + 0x34 + lVal_16) = param_5[1];
  *(uint32_t *)(uVal_15 + 0x38 + lVal_16) = param_5[2];
  *(uint32_t *)(uVal_15 + 0x3c + lVal_16) = param_5[3];
  *(uint32_t *)(uVal_15 + 0x40 + lVal_16) = *param_6;
  *(uint8_t *)(uVal_15 + 0x44 + lVal_16) = *param_7;
  *(uint8_t *)(uVal_15 + 0x45 + lVal_16) = *param_8;
  *(uint8_t *)(uVal_15 + 0x46 + lVal_16) = *param_9;
  uVal_21 = *param_1;
  uVal_18 = param_1[1];
  uVal_5 = uVal_15;
  if (param_2 == uVal_18) {
    for (; uVal_21 != param_2; uVal_21 = uVal_21 + 0x48) {
      func_0x18036c0d0(uVal_5,uVal_21);
      uVal_5 = uVal_5 + 0x48;
    }
  }
  else {
    if (uVal_21 != param_2) {
      lVal_17 = 0;
      do {
        *(uint32_t *)(uVal_15 + lVal_17) = *(uint32_t *)(uVal_21 + lVal_17);
        *(uint32_t *)(uVal_15 + 4 + lVal_17) = *(uint32_t *)(uVal_21 + 4 + lVal_17);
        *(uint32_t *)(uVal_15 + 8 + lVal_17) = *(uint32_t *)(uVal_21 + 8 + lVal_17);
        *(uint8_t (*)[16])(uVal_15 + 0x20 + lVal_17) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_15 + 0x10 + lVal_17) = ZEXT816(0);
        pU64_2 = (uint32_t *)(uVal_21 + 0x10 + lVal_17);
        uVal_4 = *pU64_2;
        uVal_7 = pU64_2[1];
        uVal_8 = pU64_2[2];
        uVal_9 = pU64_2[3];
        pU64_2 = (uint32_t *)(uVal_21 + 0x20 + lVal_17);
        uVal_10 = pU64_2[1];
        uVal_11 = pU64_2[2];
        uVal_12 = pU64_2[3];
        pU64_3 = (uint32_t *)(uVal_15 + 0x20 + lVal_17);
        *pU64_3 = *pU64_2;
        pU64_3[1] = uVal_10;
        pU64_3[2] = uVal_11;
        pU64_3[3] = uVal_12;
        pU64_2 = (uint32_t *)(uVal_15 + 0x10 + lVal_17);
        *pU64_2 = uVal_4;
        pU64_2[1] = uVal_7;
        pU64_2[2] = uVal_8;
        pU64_2[3] = uVal_9;
        *(uint64_t *)(uVal_21 + 0x20 + lVal_17) = 0;
        *(uint64_t *)(uVal_21 + 0x28 + lVal_17) = 0xf;
        *(uint8_t *)(uVal_21 + 0x10 + lVal_17) = 0;
        *(uint32_t *)(uVal_15 + 0x30 + lVal_17) = *(uint32_t *)(uVal_21 + 0x30 + lVal_17);
        *(uint32_t *)(uVal_15 + 0x34 + lVal_17) = *(uint32_t *)(uVal_21 + 0x34 + lVal_17);
        *(uint32_t *)(uVal_15 + 0x38 + lVal_17) = *(uint32_t *)(uVal_21 + 0x38 + lVal_17);
        *(uint32_t *)(uVal_15 + 0x3c + lVal_17) = *(uint32_t *)(uVal_21 + 0x3c + lVal_17);
        uVal_4 = *(uint32_t *)(uVal_21 + 0x43 + lVal_17);
        *(uint32_t *)(uVal_15 + 0x40 + lVal_17) = *(uint32_t *)(uVal_21 + 0x40 + lVal_17);
        *(uint32_t *)(uVal_15 + 0x43 + lVal_17) = uVal_4;
        lVal_1 = uVal_21 + lVal_17;
        lVal_17 = lVal_17 + 0x48;
      } while (lVal_1 + 0x48U != param_2);
      uVal_18 = param_1[1];
    }
    if (param_2 != uVal_18) {
      lVal_17 = 0;
      do {
        *(uint32_t *)(lVal_13 + 0x48 + lVal_17) = *(uint32_t *)(param_2 + lVal_17);
        *(uint32_t *)(lVal_13 + 0x4c + lVal_17) = *(uint32_t *)(param_2 + 4 + lVal_17);
        *(uint32_t *)(lVal_13 + 0x50 + lVal_17) = *(uint32_t *)(param_2 + 8 + lVal_17);
        *(uint8_t (*)[16])(lVal_13 + 0x68 + lVal_17) = ZEXT816(0);
        *(uint8_t (*)[16])(lVal_13 + 0x58 + lVal_17) = ZEXT816(0);
        pU64_2 = (uint32_t *)(param_2 + 0x10 + lVal_17);
        uVal_4 = *pU64_2;
        uVal_7 = pU64_2[1];
        uVal_8 = pU64_2[2];
        uVal_9 = pU64_2[3];
        pU64_2 = (uint32_t *)(param_2 + 0x20 + lVal_17);
        uVal_10 = pU64_2[1];
        uVal_11 = pU64_2[2];
        uVal_12 = pU64_2[3];
        pU64_3 = (uint32_t *)(lVal_13 + 0x68 + lVal_17);
        *pU64_3 = *pU64_2;
        pU64_3[1] = uVal_10;
        pU64_3[2] = uVal_11;
        pU64_3[3] = uVal_12;
        pU64_2 = (uint32_t *)(lVal_13 + 0x58 + lVal_17);
        *pU64_2 = uVal_4;
        pU64_2[1] = uVal_7;
        pU64_2[2] = uVal_8;
        pU64_2[3] = uVal_9;
        *(uint64_t *)(param_2 + 0x20 + lVal_17) = 0;
        *(uint64_t *)(param_2 + 0x28 + lVal_17) = 0xf;
        *(uint8_t *)(param_2 + 0x10 + lVal_17) = 0;
        *(uint32_t *)(lVal_13 + 0x78 + lVal_17) = *(uint32_t *)(param_2 + 0x30 + lVal_17);
        *(uint32_t *)(lVal_13 + 0x7c + lVal_17) = *(uint32_t *)(param_2 + 0x34 + lVal_17);
        *(uint32_t *)(lVal_13 + 0x80 + lVal_17) = *(uint32_t *)(param_2 + 0x38 + lVal_17);
        *(uint32_t *)(lVal_13 + 0x84 + lVal_17) = *(uint32_t *)(param_2 + 0x3c + lVal_17);
        uVal_4 = *(uint32_t *)(param_2 + 0x43 + lVal_17);
        *(uint32_t *)(lVal_13 + 0x88 + lVal_17) = *(uint32_t *)(param_2 + 0x40 + lVal_17);
        *(uint32_t *)(lVal_13 + 0x8b + lVal_17) = uVal_4;
        lVal_1 = param_2 + lVal_17;
        lVal_17 = lVal_17 + 0x48;
      } while (lVal_1 + 0x48U != uVal_18);
    }
  }
  uVal_21 = *param_1;
  if (uVal_21 != 0) {
    uVal_18 = param_1[1];
    if (uVal_21 == uVal_18) {
      uVal_18 = param_1[2] - uVal_21;
    }
    else {
      do {
        uVal_5 = *(uint64_t *)(uVal_21 + 0x28);
        if (0xf < uVal_5) {
          lVal_13 = *(int64_t *)(uVal_21 + 0x10);
          uVal_14 = uVal_5 + 1;
          lVal_17 = lVal_13;
          if (0xfff < uVal_14) {
            lVal_17 = *(int64_t *)(lVal_13 + -8);
            if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_17)) goto LAB_18036cfa2;
            uVal_14 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_17,uVal_14);
        }
        *(uint64_t *)(uVal_21 + 0x20) = 0;
        *(uint64_t *)(uVal_21 + 0x28) = 0xf;
        *(uint8_t *)(uVal_21 + 0x10) = 0;
        uVal_21 = uVal_21 + 0x48;
      } while (uVal_21 != uVal_18);
      uVal_21 = *param_1;
      uVal_18 = param_1[2] - uVal_21;
    }
    if (0xfff < uVal_18) {
      if (0x1f < (uVal_21 - 8) - *(uint64_t *)(uVal_21 - 8)) {
LAB_18036cfa2:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_18 = uVal_18 + 0x27;
      uVal_21 = *(uint64_t *)(uVal_21 - 8);
    }
    thunk_FUN_180695dd0(uVal_21,uVal_18);
  }
  *param_1 = uVal_15;
  param_1[1] = uVal_15 + uVal_19 * 0x48;
  param_1[2] = uVal_15 + uVal_20 * 0x48;
  return uVal_15 + lVal_16;
}

// Unwind@18036cfb0
void Unwind_18036cfb0(uint64_t param_1,int64_t param_2)
{
  func_0x18036c050(param_2 + 0x50);
  func_0x18036cff0(param_2 + 0x28);
  return;
}

// func_0x18036cff0
void func_0x18036cff0(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  lVal_4 = *(int64_t *)(param_1 + 8);
  if (lVal_4 == 0) {
    return;
  }
  lVal_6 = *(int64_t *)(param_1 + 0x18);
  lVal_1 = *(int64_t *)(param_1 + 0x20);
  if (lVal_6 != lVal_1) {
    do {
      uVal_5 = *(uint64_t *)(lVal_6 + 0x28);
      if (0xf < uVal_5) {
        lVal_4 = *(int64_t *)(lVal_6 + 0x10);
        uVal_2 = uVal_5 + 1;
        lVal_3 = lVal_4;
        if (0xfff < uVal_2) {
          lVal_3 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_3)) goto LAB_18036d0bf;
          uVal_2 = uVal_5 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_3,uVal_2);
      }
      *(uint64_t *)(lVal_6 + 0x20) = 0;
      *(uint64_t *)(lVal_6 + 0x28) = 0xf;
      *(uint8_t *)(lVal_6 + 0x10) = 0;
      lVal_6 = lVal_6 + 0x48;
    } while (lVal_6 != lVal_1);
    lVal_4 = *(int64_t *)(param_1 + 8);
  }
  uVal_5 = *(int64_t *)(param_1 + 0x10) * 0x48;
  lVal_6 = lVal_4;
  if (0xfff < uVal_5) {
    lVal_6 = *(int64_t *)(lVal_4 + -8);
    if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_6)) {
LAB_18036d0bf:
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_5 = uVal_5 + 0x27;
  }
  thunk_FUN_180695dd0(lVal_6,uVal_5);
  return;
}

// func_0x18036d0d0
int64_t func_0x18036d0d0(uint64_t *param_1,uint64_t param_2,uint32_t *param_3,uint32_t *param_4, int *param_5)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  
  uVal_5 = *param_1;
  uVal_8 = ((int64_t)(param_1[1] - uVal_5) >> 5) + 1;
  uVal_10 = (int64_t)(param_1[2] - uVal_5) >> 5;
  uVal_2 = (uVal_10 >> 1) + uVal_10;
  if (uVal_2 <= uVal_8) {
    uVal_2 = uVal_8;
  }
  if (0x7ffffffffffffff - (uVal_10 >> 1) < uVal_10) {
    uVal_2 = 0x7ffffffffffffff;
  }
  if (uVal_2 >> 0x3b != 0) {
LAB_18036d31a:
    func_0x18007ba90();
    goto LAB_18036d31f;
  }
  lVal_9 = uVal_2 * 0x20;
  if (uVal_2 == 0) {
    uVal_2 = 0;
  }
  else if (uVal_2 < 0x80) {
    uVal_2 = func_0x180672de0(lVal_9);
  }
  else {
    if (uVal_2 == 0x7ffffffffffffff) goto LAB_18036d31a;
    lVal_3 = func_0x180672de0(lVal_9 + 0x27);
    uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_2 - 8) = lVal_3;
  }
  lVal_3 = param_2 - uVal_5;
  *(int64_t *)(uVal_2 + lVal_3) = (int64_t)*param_5;
  *(uint32_t *)(uVal_2 + 8 + lVal_3) = *param_4;
  *(uint32_t *)(uVal_2 + 0x10 + lVal_3) = *param_3;
  *(uint32_t *)(uVal_2 + 0x14 + lVal_3) = param_3[1];
  *(uint32_t *)(uVal_2 + 0x18 + lVal_3) = param_3[2];
  uVal_10 = *param_1;
  uVal_5 = param_1[1];
  if (param_2 == uVal_5) {
    if (uVal_10 != param_2) {
      lVal_4 = 0;
      do {
        *(uint64_t *)(uVal_2 + lVal_4) = *(uint64_t *)(uVal_10 + lVal_4);
        *(uint32_t *)(uVal_2 + 8 + lVal_4) = *(uint32_t *)(uVal_10 + 8 + lVal_4);
        *(uint32_t *)(uVal_2 + 0x10 + lVal_4) = *(uint32_t *)(uVal_10 + 0x10 + lVal_4);
        *(uint32_t *)(uVal_2 + 0x14 + lVal_4) = *(uint32_t *)(uVal_10 + 0x14 + lVal_4);
        *(uint32_t *)(uVal_2 + 0x18 + lVal_4) = *(uint32_t *)(uVal_10 + 0x18 + lVal_4);
        lVal_6 = uVal_10 + lVal_4;
        lVal_4 = lVal_4 + 0x20;
      } while (lVal_6 + 0x20U != param_2);
      goto LAB_18036d2b9;
    }
  }
  else {
    if (uVal_10 != param_2) {
      lVal_4 = 0;
      do {
        *(uint64_t *)(uVal_2 + lVal_4) = *(uint64_t *)(uVal_10 + lVal_4);
        *(uint32_t *)(uVal_2 + 8 + lVal_4) = *(uint32_t *)(uVal_10 + 8 + lVal_4);
        *(uint32_t *)(uVal_2 + 0x10 + lVal_4) = *(uint32_t *)(uVal_10 + 0x10 + lVal_4);
        *(uint32_t *)(uVal_2 + 0x14 + lVal_4) = *(uint32_t *)(uVal_10 + 0x14 + lVal_4);
        *(uint32_t *)(uVal_2 + 0x18 + lVal_4) = *(uint32_t *)(uVal_10 + 0x18 + lVal_4);
        lVal_6 = uVal_10 + lVal_4;
        lVal_4 = lVal_4 + 0x20;
      } while (lVal_6 + 0x20U != param_2);
      uVal_5 = param_1[1];
    }
    if (param_2 != uVal_5) {
      lVal_4 = lVal_3 + uVal_2;
      lVal_6 = 0;
      do {
        *(uint64_t *)(lVal_4 + 0x20 + lVal_6) = *(uint64_t *)(param_2 + lVal_6);
        *(uint32_t *)(lVal_4 + 0x28 + lVal_6) = *(uint32_t *)(param_2 + 8 + lVal_6);
        *(uint32_t *)(lVal_4 + 0x30 + lVal_6) = *(uint32_t *)(param_2 + 0x10 + lVal_6);
        *(uint32_t *)(lVal_4 + 0x34 + lVal_6) = *(uint32_t *)(param_2 + 0x14 + lVal_6);
        *(uint32_t *)(lVal_4 + 0x38 + lVal_6) = *(uint32_t *)(param_2 + 0x18 + lVal_6);
        lVal_1 = param_2 + lVal_6;
        lVal_6 = lVal_6 + 0x20;
      } while (lVal_1 + 0x20U != uVal_5);
    }
LAB_18036d2b9:
    uVal_10 = *param_1;
  }
  if (uVal_10 != 0) {
    uVal_7 = param_1[2] - uVal_10;
    uVal_5 = uVal_10;
    if (0xfff < uVal_7) {
      uVal_5 = *(uint64_t *)(uVal_10 - 8);
      if (0x1f < (uVal_10 - 8) - uVal_5) {
LAB_18036d31f:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
    }
    thunk_FUN_180695dd0(uVal_5,uVal_7);
  }
  *param_1 = uVal_2;
  param_1[1] = uVal_8 * 0x20 + uVal_2;
  param_1[2] = lVal_9 + uVal_2;
  return lVal_3 + uVal_2;
}

// func_0x18036d8c0
int64_t func_0x18036d8c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8, uint64_t param_9)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint32_t *pU64_3;
  uint32_t *pU64_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  func_ptr_t fnPtr_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  int64_t lVal_14;
  int64_t lVal_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  uint64_t uVal_21;
  
  uVal_21 = *param_1;
  uVal_20 = ((int64_t)(param_1[1] - uVal_21) >> 3) * -0x71c71c71c71c71c7 + 1;
  uVal_17 = ((int64_t)(param_1[2] - uVal_21) >> 3) * -0x71c71c71c71c71c7;
  uVal_19 = 0x38e38e38e38e38e - (uVal_17 >> 1);
  uVal_18 = (uVal_17 >> 1) + uVal_17;
  if (uVal_18 <= uVal_20) {
    uVal_18 = uVal_20;
  }
  if (uVal_19 <= uVal_17 && uVal_17 - uVal_19 != 0) {
    uVal_18 = 0x38e38e38e38e38e;
  }
  if (0x38e38e38e38e38e < uVal_18) {
LAB_18036dd0a:
    func_0x18007ba90();
    fnPtr_7 = (func_ptr_t )swi(3);
    lVal_14 = (*fnPtr_7)();
    return lVal_14;
  }
  if (uVal_18 == 0) {
    uVal_17 = 0;
  }
  else if (uVal_18 < 0x39) {
    uVal_17 = func_0x180672de0(uVal_18 * 0x48);
  }
  else {
    if (uVal_18 == 0x38e38e38e38e38e) goto LAB_18036dd0a;
    lVal_14 = func_0x180672de0(uVal_18 * 0x48 + 0x27);
    uVal_17 = lVal_14 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_17 - 8) = lVal_14;
  }
  lVal_14 = uVal_17 + (param_2 - uVal_21);
  lVal_1 = uVal_17 + (param_2 - uVal_21);
  func_0x18036dd90(lVal_14,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  uVal_21 = *param_1;
  uVal_19 = param_1[1];
  uVal_6 = uVal_17;
  if (param_2 == uVal_19) {
    for (; uVal_21 != param_2; uVal_21 = uVal_21 + 0x48) {
      func_0x18036c0d0(uVal_6,uVal_21);
      uVal_6 = uVal_6 + 0x48;
    }
  }
  else {
    if (uVal_21 != param_2) {
      lVal_15 = 0;
      do {
        *(uint32_t *)(uVal_17 + lVal_15) = *(uint32_t *)(uVal_21 + lVal_15);
        *(uint32_t *)(uVal_17 + 4 + lVal_15) = *(uint32_t *)(uVal_21 + 4 + lVal_15);
        *(uint32_t *)(uVal_17 + 8 + lVal_15) = *(uint32_t *)(uVal_21 + 8 + lVal_15);
        *(uint8_t (*)[16])(uVal_17 + 0x20 + lVal_15) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_17 + 0x10 + lVal_15) = ZEXT816(0);
        pU64_3 = (uint32_t *)(uVal_21 + 0x10 + lVal_15);
        uVal_5 = *pU64_3;
        uVal_8 = pU64_3[1];
        uVal_9 = pU64_3[2];
        uVal_10 = pU64_3[3];
        pU64_3 = (uint32_t *)(uVal_21 + 0x20 + lVal_15);
        uVal_11 = pU64_3[1];
        uVal_12 = pU64_3[2];
        uVal_13 = pU64_3[3];
        pU64_4 = (uint32_t *)(uVal_17 + 0x20 + lVal_15);
        *pU64_4 = *pU64_3;
        pU64_4[1] = uVal_11;
        pU64_4[2] = uVal_12;
        pU64_4[3] = uVal_13;
        pU64_3 = (uint32_t *)(uVal_17 + 0x10 + lVal_15);
        *pU64_3 = uVal_5;
        pU64_3[1] = uVal_8;
        pU64_3[2] = uVal_9;
        pU64_3[3] = uVal_10;
        *(uint64_t *)(uVal_21 + 0x20 + lVal_15) = 0;
        *(uint64_t *)(uVal_21 + 0x28 + lVal_15) = 0xf;
        *(uint8_t *)(uVal_21 + 0x10 + lVal_15) = 0;
        *(uint32_t *)(uVal_17 + 0x30 + lVal_15) = *(uint32_t *)(uVal_21 + 0x30 + lVal_15);
        *(uint32_t *)(uVal_17 + 0x34 + lVal_15) = *(uint32_t *)(uVal_21 + 0x34 + lVal_15);
        *(uint32_t *)(uVal_17 + 0x38 + lVal_15) = *(uint32_t *)(uVal_21 + 0x38 + lVal_15);
        *(uint32_t *)(uVal_17 + 0x3c + lVal_15) = *(uint32_t *)(uVal_21 + 0x3c + lVal_15);
        uVal_5 = *(uint32_t *)(uVal_21 + 0x43 + lVal_15);
        *(uint32_t *)(uVal_17 + 0x40 + lVal_15) = *(uint32_t *)(uVal_21 + 0x40 + lVal_15);
        *(uint32_t *)(uVal_17 + 0x43 + lVal_15) = uVal_5;
        lVal_2 = uVal_21 + lVal_15;
        lVal_15 = lVal_15 + 0x48;
      } while (lVal_2 + 0x48U != param_2);
      uVal_19 = param_1[1];
    }
    if (param_2 != uVal_19) {
      lVal_15 = 0;
      do {
        *(uint32_t *)(lVal_1 + 0x48 + lVal_15) = *(uint32_t *)(param_2 + lVal_15);
        *(uint32_t *)(lVal_1 + 0x4c + lVal_15) = *(uint32_t *)(param_2 + 4 + lVal_15);
        *(uint32_t *)(lVal_1 + 0x50 + lVal_15) = *(uint32_t *)(param_2 + 8 + lVal_15);
        *(uint8_t (*)[16])(lVal_1 + 0x68 + lVal_15) = ZEXT816(0);
        *(uint8_t (*)[16])(lVal_1 + 0x58 + lVal_15) = ZEXT816(0);
        pU64_3 = (uint32_t *)(param_2 + 0x10 + lVal_15);
        uVal_5 = *pU64_3;
        uVal_8 = pU64_3[1];
        uVal_9 = pU64_3[2];
        uVal_10 = pU64_3[3];
        pU64_3 = (uint32_t *)(param_2 + 0x20 + lVal_15);
        uVal_11 = pU64_3[1];
        uVal_12 = pU64_3[2];
        uVal_13 = pU64_3[3];
        pU64_4 = (uint32_t *)(lVal_1 + 0x68 + lVal_15);
        *pU64_4 = *pU64_3;
        pU64_4[1] = uVal_11;
        pU64_4[2] = uVal_12;
        pU64_4[3] = uVal_13;
        pU64_3 = (uint32_t *)(lVal_1 + 0x58 + lVal_15);
        *pU64_3 = uVal_5;
        pU64_3[1] = uVal_8;
        pU64_3[2] = uVal_9;
        pU64_3[3] = uVal_10;
        *(uint64_t *)(param_2 + 0x20 + lVal_15) = 0;
        *(uint64_t *)(param_2 + 0x28 + lVal_15) = 0xf;
        *(uint8_t *)(param_2 + 0x10 + lVal_15) = 0;
        *(uint32_t *)(lVal_1 + 0x78 + lVal_15) = *(uint32_t *)(param_2 + 0x30 + lVal_15);
        *(uint32_t *)(lVal_1 + 0x7c + lVal_15) = *(uint32_t *)(param_2 + 0x34 + lVal_15);
        *(uint32_t *)(lVal_1 + 0x80 + lVal_15) = *(uint32_t *)(param_2 + 0x38 + lVal_15);
        *(uint32_t *)(lVal_1 + 0x84 + lVal_15) = *(uint32_t *)(param_2 + 0x3c + lVal_15);
        uVal_5 = *(uint32_t *)(param_2 + 0x43 + lVal_15);
        *(uint32_t *)(lVal_1 + 0x88 + lVal_15) = *(uint32_t *)(param_2 + 0x40 + lVal_15);
        *(uint32_t *)(lVal_1 + 0x8b + lVal_15) = uVal_5;
        lVal_2 = param_2 + lVal_15;
        lVal_15 = lVal_15 + 0x48;
      } while (lVal_2 + 0x48U != uVal_19);
    }
  }
  uVal_21 = *param_1;
  if (uVal_21 != 0) {
    uVal_19 = param_1[1];
    if (uVal_21 == uVal_19) {
      uVal_19 = param_1[2] - uVal_21;
    }
    else {
      do {
        uVal_6 = *(uint64_t *)(uVal_21 + 0x28);
        if (0xf < uVal_6) {
          lVal_1 = *(int64_t *)(uVal_21 + 0x10);
          uVal_16 = uVal_6 + 1;
          lVal_15 = lVal_1;
          if (0xfff < uVal_16) {
            lVal_15 = *(int64_t *)(lVal_1 + -8);
            if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_15)) goto LAB_18036dd08;
            uVal_16 = uVal_6 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_15,uVal_16);
        }
        *(uint64_t *)(uVal_21 + 0x20) = 0;
        *(uint64_t *)(uVal_21 + 0x28) = 0xf;
        *(uint8_t *)(uVal_21 + 0x10) = 0;
        uVal_21 = uVal_21 + 0x48;
      } while (uVal_21 != uVal_19);
      uVal_21 = *param_1;
      uVal_19 = param_1[2] - uVal_21;
    }
    if (0xfff < uVal_19) {
      if (0x1f < (uVal_21 - 8) - *(uint64_t *)(uVal_21 - 8)) {
LAB_18036dd08:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_19 = uVal_19 + 0x27;
      uVal_21 = *(uint64_t *)(uVal_21 - 8);
    }
    thunk_FUN_180695dd0(uVal_21,uVal_19);
  }
  *param_1 = uVal_17;
  param_1[1] = uVal_17 + uVal_20 * 0x48;
  param_1[2] = uVal_17 + uVal_18 * 0x48;
  return lVal_14;
}

// Unwind@18036dd10
void Unwind_18036dd10(uint64_t param_1,int64_t param_2)
{
  func_0x18036cff0(param_2 + 0x48);
  return;
}

// Unwind@18036dd50
void Unwind_18036dd50(uint64_t param_1,int64_t param_2)
{
  func_0x18036c050(param_2 + 0x70);
  return;
}

// func_0x18036dd90
uint32_t * func_0x18036dd90(uint32_t *param_1,uint32_t *param_2,uint64_t *param_3,uint32_t *param_4, uint32_t *param_5,uint8_t *param_6,uint8_t *param_7,uint8_t *param_8)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint32_t *pU64_8;
  uint64_t uVal_9;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
  uVal_1 = param_3[2];
  if (0xf < (uint64_t)param_3[3]) {
    param_3 = (uint64_t *)*param_3;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      *(uint64_t *)(param_1 + 8) = uVal_1;
      *(uint64_t *)(param_1 + 10) = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)param_3 + 4);
      uVal_4 = *(uint32_t *)(param_3 + 1);
      uVal_5 = *(uint32_t *)((int64_t)param_3 + 0xc);
      param_1[4] = *(uint32_t *)param_3;
      param_1[5] = uVal_3;
      param_1[6] = uVal_4;
      param_1[7] = uVal_5;
    }
    else {
      uVal_6 = uVal_1 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_6) {
        uVal_9 = uVal_6;
      }
      if (uVal_6 < 0xfff) {
        uVal_6 = func_0x180672de0(uVal_9 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_9 + 0x28);
        uVal_6 = lVal_7 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_6 - 8) = lVal_7;
      }
      *(uint64_t *)(param_1 + 4) = uVal_6;
      *(uint64_t *)(param_1 + 8) = uVal_1;
      *(uint64_t *)(param_1 + 10) = uVal_9;
      func_0x1806aa960(uVal_6,param_3,uVal_1 + 1);
    }
    param_1[0xc] = *param_4;
    param_1[0xd] = param_4[1];
    param_1[0xe] = param_4[2];
    param_1[0xf] = param_4[3];
    param_1[0x10] = *param_5;
    *(uint8_t *)(param_1 + 0x11) = *param_6;
    *(uint8_t *)((int64_t)param_1 + 0x45) = *param_7;
    *(uint8_t *)((int64_t)param_1 + 0x46) = *param_8;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_8 = (uint32_t *)(*fnPtr_2)();
  return pU64_8;
}

// func_0x18036e1d0
int64_t * func_0x18036e1d0(int64_t **param_1,int64_t *param_2,uint64_t *param_3)
{
  int64_t *pLong_1;
  uint32_t *pU64_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  int64_t *pLong_15;
  int64_t *pLong_16;
  int64_t *pLong_17;
  int64_t *pLong_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  uint64_t uVal_21;
  uint64_t uVal_22;
  
  pLong_17 = *param_1;
  uVal_21 = ((int64_t)param_1[1] - (int64_t)pLong_17 >> 3) + 1;
  uVal_13 = (int64_t)param_1[2] - (int64_t)pLong_17 >> 3;
  uVal_22 = (uVal_13 >> 1) + uVal_13;
  if (uVal_22 <= uVal_21) {
    uVal_22 = uVal_21;
  }
  if (0x1fffffffffffffff - (uVal_13 >> 1) < uVal_13) {
    uVal_22 = 0x1fffffffffffffff;
  }
  if (uVal_22 >> 0x3d != 0) {
LAB_18036e5d8:
    func_0x18007ba90();
    goto LAB_18036e5dd;
  }
  if (uVal_22 == 0) {
    pLong_18 = (int64_t *)0x0;
  }
  else if (uVal_22 < 0x200) {
    pLong_18 = (int64_t *)func_0x180672de0(uVal_22 * 8);
  }
  else {
    if (0x1ffffffffffffffb < uVal_22) goto LAB_18036e5d8;
    lVal_14 = func_0x180672de0(uVal_22 * 8 + 0x27);
    pLong_18 = (int64_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
    pLong_18[-1] = lVal_14;
  }
  lVal_14 = (int64_t)param_2 - (int64_t)pLong_17;
  pLong_1 = (int64_t *)((int64_t)pLong_18 + lVal_14);
  uVal_3 = *param_3;
  *param_3 = 0;
  *(uint64_t *)((int64_t)pLong_18 + lVal_14) = uVal_3;
  pLong_15 = *param_1;
  pLong_16 = param_1[1];
  if (param_2 == pLong_16) {
    if (pLong_15 != param_2) {
      uVal_13 = (int64_t)param_2 + (-8 - (int64_t)pLong_15);
      pLong_17 = pLong_18;
      if ((uVal_13 < 0x98) ||
         ((pLong_15 < (int64_t *)((int64_t)pLong_18 + (uVal_13 & 0xfffffffffffffff8) + 8) &&
          (pLong_18 < (int64_t *)((int64_t)pLong_15 + (uVal_13 & 0xfffffffffffffff8) + 8))))) {
LAB_18036e3f0:
        do {
          lVal_14 = *pLong_15;
          *pLong_15 = 0;
          *pLong_17 = lVal_14;
          pLong_15 = pLong_15 + 1;
          pLong_17 = pLong_17 + 1;
        } while (pLong_15 != param_2);
      }
      else {
        uVal_13 = (uVal_13 >> 3) + 1;
        uVal_19 = uVal_13 & 0xfffffffffffffffc;
        uVal_20 = 0;
        do {
          pLong_17 = pLong_15 + uVal_20;
          uVal_5 = *(uint32_t *)pLong_17;
          uVal_6 = *(uint32_t *)((int64_t)pLong_17 + 4);
          uVal_7 = *(uint32_t *)(pLong_17 + 1);
          uVal_8 = *(uint32_t *)((int64_t)pLong_17 + 0xc);
          pLong_17 = pLong_15 + uVal_20 + 2;
          uVal_9 = *(uint32_t *)pLong_17;
          uVal_10 = *(uint32_t *)((int64_t)pLong_17 + 4);
          uVal_11 = *(uint32_t *)(pLong_17 + 1);
          uVal_12 = *(uint32_t *)((int64_t)pLong_17 + 0xc);
          *(uint8_t (*)[16])(pLong_15 + uVal_20) = ZEXT816(0);
          *(uint8_t (*)[16])(pLong_15 + uVal_20 + 2) = ZEXT816(0);
          pLong_17 = pLong_18 + uVal_20;
          *(uint32_t *)pLong_17 = uVal_5;
          *(uint32_t *)((int64_t)pLong_17 + 4) = uVal_6;
          *(uint32_t *)(pLong_17 + 1) = uVal_7;
          *(uint32_t *)((int64_t)pLong_17 + 0xc) = uVal_8;
          pLong_17 = pLong_18 + uVal_20 + 2;
          *(uint32_t *)pLong_17 = uVal_9;
          *(uint32_t *)((int64_t)pLong_17 + 4) = uVal_10;
          *(uint32_t *)(pLong_17 + 1) = uVal_11;
          *(uint32_t *)((int64_t)pLong_17 + 0xc) = uVal_12;
          uVal_20 = uVal_20 + 4;
        } while (uVal_19 != uVal_20);
        pLong_15 = pLong_15 + uVal_19;
        pLong_17 = pLong_18 + uVal_19;
        if (uVal_13 != uVal_19) goto LAB_18036e3f0;
      }
      goto LAB_18036e40a;
    }
  }
  else {
    if (pLong_15 != param_2) {
      uVal_13 = (int64_t)param_2 + (-8 - (int64_t)pLong_15);
      pLong_16 = pLong_18;
      if ((uVal_13 < 0x98) ||
         ((pLong_15 < (int64_t *)((int64_t)pLong_18 + (uVal_13 & 0xfffffffffffffff8) + 8) &&
          (pLong_18 < (int64_t *)((int64_t)pLong_15 + (uVal_13 & 0xfffffffffffffff8) + 8))))) {
LAB_18036e300:
        do {
          lVal_4 = *pLong_15;
          *pLong_15 = 0;
          *pLong_16 = lVal_4;
          pLong_15 = pLong_15 + 1;
          pLong_16 = pLong_16 + 1;
        } while (pLong_15 != param_2);
      }
      else {
        uVal_13 = (uVal_13 >> 3) + 1;
        uVal_19 = uVal_13 & 0xfffffffffffffffc;
        uVal_20 = 0;
        do {
          pLong_16 = pLong_15 + uVal_20;
          uVal_5 = *(uint32_t *)pLong_16;
          uVal_6 = *(uint32_t *)((int64_t)pLong_16 + 4);
          uVal_7 = *(uint32_t *)(pLong_16 + 1);
          uVal_8 = *(uint32_t *)((int64_t)pLong_16 + 0xc);
          pLong_16 = pLong_15 + uVal_20 + 2;
          uVal_9 = *(uint32_t *)pLong_16;
          uVal_10 = *(uint32_t *)((int64_t)pLong_16 + 4);
          uVal_11 = *(uint32_t *)(pLong_16 + 1);
          uVal_12 = *(uint32_t *)((int64_t)pLong_16 + 0xc);
          *(uint8_t (*)[16])(pLong_15 + uVal_20) = ZEXT816(0);
          *(uint8_t (*)[16])(pLong_15 + uVal_20 + 2) = ZEXT816(0);
          pLong_16 = pLong_18 + uVal_20;
          *(uint32_t *)pLong_16 = uVal_5;
          *(uint32_t *)((int64_t)pLong_16 + 4) = uVal_6;
          *(uint32_t *)(pLong_16 + 1) = uVal_7;
          *(uint32_t *)((int64_t)pLong_16 + 0xc) = uVal_8;
          pLong_16 = pLong_18 + uVal_20 + 2;
          *(uint32_t *)pLong_16 = uVal_9;
          *(uint32_t *)((int64_t)pLong_16 + 4) = uVal_10;
          *(uint32_t *)(pLong_16 + 1) = uVal_11;
          *(uint32_t *)((int64_t)pLong_16 + 0xc) = uVal_12;
          uVal_20 = uVal_20 + 4;
        } while (uVal_19 != uVal_20);
        pLong_15 = pLong_15 + uVal_19;
        pLong_16 = pLong_18 + uVal_19;
        if (uVal_13 != uVal_19) goto LAB_18036e300;
      }
      pLong_16 = param_1[1];
    }
    if (param_2 != pLong_16) {
      uVal_13 = (int64_t)pLong_16 + (-8 - (int64_t)param_2);
      pLong_15 = pLong_1;
      if ((0x107 < uVal_13) &&
         (((int64_t *)
           ((int64_t)pLong_18 +
           (int64_t)param_2 + ((uVal_13 & 0xfffffffffffffff8) - (int64_t)pLong_17) + 0x10) <=
           param_2 ||
          ((int64_t)param_2 + (uVal_13 & 0xfffffffffffffff8) + 8 <=
           (uint64_t)((int64_t)pLong_18 + lVal_14 + 8))))) {
        uVal_13 = (uVal_13 >> 3) + 1;
        uVal_19 = uVal_13 & 0xfffffffffffffffc;
        uVal_20 = 0;
        do {
          pLong_17 = param_2 + uVal_20;
          uVal_5 = *(uint32_t *)pLong_17;
          uVal_6 = *(uint32_t *)((int64_t)pLong_17 + 4);
          uVal_7 = *(uint32_t *)(pLong_17 + 1);
          uVal_8 = *(uint32_t *)((int64_t)pLong_17 + 0xc);
          pLong_17 = param_2 + uVal_20 + 2;
          uVal_9 = *(uint32_t *)pLong_17;
          uVal_10 = *(uint32_t *)((int64_t)pLong_17 + 4);
          uVal_11 = *(uint32_t *)(pLong_17 + 1);
          uVal_12 = *(uint32_t *)((int64_t)pLong_17 + 0xc);
          *(uint8_t (*)[16])(param_2 + uVal_20) = ZEXT816(0);
          *(uint8_t (*)[16])(param_2 + uVal_20 + 2) = ZEXT816(0);
          pU64_2 = (uint32_t *)((int64_t)pLong_18 + uVal_20 * 8 + lVal_14 + 8);
          *pU64_2 = uVal_5;
          pU64_2[1] = uVal_6;
          pU64_2[2] = uVal_7;
          pU64_2[3] = uVal_8;
          pU64_2 = (uint32_t *)((int64_t)pLong_18 + uVal_20 * 8 + lVal_14 + 0x18);
          *pU64_2 = uVal_9;
          pU64_2[1] = uVal_10;
          pU64_2[2] = uVal_11;
          pU64_2[3] = uVal_12;
          uVal_20 = uVal_20 + 4;
        } while (uVal_19 != uVal_20);
        param_2 = param_2 + uVal_19;
        pLong_15 = pLong_1 + uVal_19;
        if (uVal_13 == uVal_19) goto LAB_18036e40a;
      }
      do {
        lVal_14 = *param_2;
        *param_2 = 0;
        pLong_15[1] = lVal_14;
        param_2 = param_2 + 1;
        pLong_15 = pLong_15 + 1;
      } while (param_2 != pLong_16);
    }
LAB_18036e40a:
    pLong_15 = *param_1;
  }
  if (pLong_15 != (int64_t *)0x0) {
    pLong_17 = param_1[1];
    if (pLong_15 == pLong_17) {
      uVal_13 = (int64_t)param_1[2] - (int64_t)pLong_15;
    }
    else {
      do {
        lVal_14 = *pLong_15;
        if (lVal_14 != 0) {
          func_0x18036e5e0(lVal_14);
          thunk_FUN_180695dd0(lVal_14,0xb8);
        }
        pLong_15 = pLong_15 + 1;
      } while (pLong_15 != pLong_17);
      pLong_15 = *param_1;
      uVal_13 = (int64_t)param_1[2] - (int64_t)pLong_15;
    }
    if (0xfff < uVal_13) {
      if (0x1f < (uint64_t)((int64_t)pLong_15 + (-8 - (int64_t)(int64_t *)pLong_15[-1]))) {
LAB_18036e5dd:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_13 = uVal_13 + 0x27;
      pLong_15 = (int64_t *)pLong_15[-1];
    }
    thunk_FUN_180695dd0(pLong_15,uVal_13);
  }
  *param_1 = pLong_18;
  param_1[1] = pLong_18 + uVal_21;
  param_1[2] = pLong_18 + uVal_22;
  return pLong_1;
}

// func_0x18036e5e0
void func_0x18036e5e0(uint64_t *param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  *param_1 = &PTR_FUN_1806c5860;
  lVal_6 = param_1[0x16];
  if (lVal_6 != 0) {
    func_0x1800fe9f0(lVal_6);
    thunk_FUN_180695dd0(lVal_6,0x250);
  }
  lVal_6 = param_1[0x15];
  if (lVal_6 != 0) {
    func_0x1800fe9f0(lVal_6);
    thunk_FUN_180695dd0(lVal_6,0x250);
  }
  lVal_6 = param_1[0x10];
  if (lVal_6 != 0) {
    uVal_5 = param_1[0x12] - lVal_6;
    lVal_4 = lVal_6;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_6 + -8);
      if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) goto LAB_18036e857;
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
    *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
    param_1[0x12] = 0;
  }
  lVal_6 = param_1[0xd];
  if (lVal_6 != 0) {
    lVal_4 = param_1[0xe];
    if (lVal_6 == lVal_4) {
      uVal_5 = param_1[0xf] - lVal_6;
    }
    else {
      do {
        uVal_5 = *(uint64_t *)(lVal_6 + 0x28);
        if (0xf < uVal_5) {
          lVal_1 = *(int64_t *)(lVal_6 + 0x10);
          uVal_2 = uVal_5 + 1;
          lVal_3 = lVal_1;
          if (0xfff < uVal_2) {
            lVal_3 = *(int64_t *)(lVal_1 + -8);
            if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_18036e857;
            uVal_2 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_3,uVal_2);
        }
        *(uint64_t *)(lVal_6 + 0x20) = 0;
        *(uint64_t *)(lVal_6 + 0x28) = 0xf;
        *(uint8_t *)(lVal_6 + 0x10) = 0;
        lVal_6 = lVal_6 + 0x48;
      } while (lVal_6 != lVal_4);
      lVal_6 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 0xd);
      uVal_5 = param_1[0xf] - lVal_6;
    }
    if (0xfff < uVal_5) {
      if (0x1f < (uint64_t)((lVal_6 + -8) - *(int64_t *)(lVal_6 + -8))) goto LAB_18036e857;
      uVal_5 = uVal_5 + 0x27;
      lVal_6 = *(int64_t *)(lVal_6 + -8);
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
    *(uint8_t (*)[16])(param_1 + 0xd) = ZEXT816(0);
    param_1[0xf] = 0;
  }
  lVal_6 = param_1[10];
  if (lVal_6 != 0) {
    uVal_5 = param_1[0xc] - lVal_6;
    lVal_4 = lVal_6;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_6 + -8);
      if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) goto LAB_18036e857;
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
    *(uint8_t (*)[16])(param_1 + 10) = ZEXT816(0);
    param_1[0xc] = 0;
  }
  uVal_5 = param_1[8];
  if (0xf < uVal_5) {
    lVal_6 = param_1[5];
    uVal_2 = uVal_5 + 1;
    lVal_4 = lVal_6;
    if (0xfff < uVal_2) {
      lVal_4 = *(int64_t *)(lVal_6 + -8);
      if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) goto LAB_18036e857;
      uVal_2 = uVal_5 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_2);
  }
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(uint8_t *)(param_1 + 5) = 0;
  uVal_5 = param_1[4];
  if (0xf < uVal_5) {
    lVal_6 = param_1[1];
    uVal_2 = uVal_5 + 1;
    lVal_4 = lVal_6;
    if (0xfff < uVal_2) {
      lVal_4 = *(int64_t *)(lVal_6 + -8);
      if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) {
LAB_18036e857:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = uVal_5 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_2);
  }
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(uint8_t *)(param_1 + 1) = 0;
  return;
}

// func_0x18036e8c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036e8c0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae4d4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae4d0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae4d8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae4dc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xa1d573c5;
    param_1[1][4] = param_1[1][4] ^ 0x81;
    param_1[1][5] = param_1[1][5] ^ 0xbf;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x18036e8f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036e8f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6494;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6490;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6498;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b649c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xd93d3145;
    param_1[1][4] = param_1[1][4] ^ 0x27;
    param_1[1][5] = param_1[1][5] ^ 0xd;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x18036e920
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036e920(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d8c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xbb2103bf0b4d771d;
    param_1[1][8] = param_1[1][8] ^ 0x1d;
    param_1[1][9] = param_1[1][9] ^ 0x77;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x18036ea00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ea00(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c3d74;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c3d70;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c3d78;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c3d7c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x69c17b8f8ff5cdb1;
    param_1[1][8] = param_1[1][8] ^ 0xb1;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x18036ea30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ea30(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806c3d84;
    uVal_3 = param_1[2] ^ _UNK_1806c3d88;
    uVal_4 = param_1[3] ^ _UNK_1806c3d8c;
    *param_1 = *param_1 ^ _DAT_1806c3d80;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806c3d90;
  }
  return;
}

// func_0x18036ea90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ea90(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c3da4;
    uVal_2 = param_1[2] ^ _UNK_1806c3da8;
    uVal_3 = param_1[3] ^ _UNK_1806c3dac;
    *param_1 = *param_1 ^ _DAT_1806c3da0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806c3db0,0);
  }
  return;
}

// func_0x18036eae0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036eae0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c3dc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c3dc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c3dc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c3dcc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xa38da5c5;
    param_1[1][4] = param_1[1][4] ^ 0x33;
    param_1[1][5] = param_1[1][5] ^ 0x49;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x18036eb10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036eb10(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c3dd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c3dd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c3dd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c3ddc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xa14561fb;
    param_1[1][4] = param_1[1][4] ^ 0x43;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18036eb40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036eb40(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b4eb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b4eb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b4eb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b4ebc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xc98f5399;
    param_1[1][4] = param_1[1][4] ^ 0x8b;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18036eb70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036eb70(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d6c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x75;
    param_1[1][1] = param_1[1][1] ^ 0x55;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x18036eb90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036eb90(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2d74;
    uVal_2 = param_1[2] ^ _UNK_1806b2d78;
    uVal_3 = param_1[3] ^ _UNK_1806b2d7c;
    *param_1 = *param_1 ^ _DAT_1806b2d70;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806b5ce0,0);
  }
  return;
}

// func_0x18036ebe0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ebe0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2cc4;
    uVal_2 = param_1[2] ^ _UNK_1806b2cc8;
    uVal_3 = param_1[3] ^ _UNK_1806b2ccc;
    *param_1 = *param_1 ^ _DAT_1806b2cc0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806b6770,0);
  }
  return;
}

// func_0x18036ec30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ec30(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b4e84;
    uVal_2 = param_1[2] ^ _UNK_1806b4e88;
    uVal_3 = param_1[3] ^ _UNK_1806b4e8c;
    *param_1 = *param_1 ^ _DAT_1806b4e80;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806b5200,0);
  }
  return;
}

// func_0x18036ec80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ec80(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2dcc;
  uVal_9 = _UNK_1806b2dc8;
  uVal_8 = _UNK_1806b2dc4;
  uVal_7 = _DAT_1806b2dc0;
  if (param_1[2][4] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2dc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2dc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2dc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dcc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x6bad4799;
    param_1[2][4] = 0;
  }
  return;
}

// func_0x18036ece0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ece0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2dd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2dd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2dd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2ddc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x81e15bed;
    param_1[1][4] = param_1[1][4] ^ 0xb1;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18036ed10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ed10(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b68a4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b68a0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b68a8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b68ac;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x6f799353;
    param_1[1][4] = param_1[1][4] ^ 0xa9;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18036ed40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ed40(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae6f4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae6f0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae6f8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae6fc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x7b;
    param_1[1][1] = param_1[1][1] ^ 0x7b;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x18036ed60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ed60(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeaf4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeaf0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeaf8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeafc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xdb63d3a5df2fa55d;
    param_1[1][8] = param_1[1][8] ^ 0x5d;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x18036ed90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ed90(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aebb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aebb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aebb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aebbc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xafbf43e9;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x18036edb0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036edb0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e24;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e20;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e28;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e2c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x95ff2fcf;
    param_1[1][4] = param_1[1][4] ^ 0xed;
    param_1[1][5] = param_1[1][5] ^ 0x39;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x18036ede0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ede0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e24;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e20;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e28;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e2c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xf14339ed95ff2fcf;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x95ff2fcf;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x18036ee80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ee80(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b6a04;
    uVal_2 = param_1[2] ^ _UNK_1806b6a08;
    uVal_3 = param_1[3] ^ _UNK_1806b6a0c;
    *param_1 = *param_1 ^ _DAT_1806b6a00;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b5bc0,0);
  }
  return;
}

// func_0x18036ef40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ef40(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ce4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ce0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ce8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cec;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xe943fb13;
    param_1[1][4] = param_1[1][4] ^ 0xb3;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18036ef70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ef70(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b4e94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b4e90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b4e98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b4e9c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x377b9db1;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x18036ef90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ef90(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806ae514;
    uVal_2 = param_1[2] ^ _UNK_1806ae518;
    uVal_3 = param_1[3] ^ _UNK_1806ae51c;
    *param_1 = *param_1 ^ _DAT_1806ae510;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806bb170,0);
  }
  return;
}

// func_0x18036f010
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f010(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806c364c;
  uVal_9 = _UNK_1806c3648;
  uVal_8 = _UNK_1806c3644;
  uVal_7 = _DAT_1806c3640;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c3644;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c3640;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c3648;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c364c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x19;
    param_1[2][1] = param_1[2][1] ^ 0x99;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x18036f080
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f080(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806ae54c;
  uVal_9 = _UNK_1806ae548;
  uVal_8 = _UNK_1806ae544;
  uVal_7 = _DAT_1806ae540;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae544;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae540;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae548;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae54c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806b27e0,0);
  }
  return;
}

// func_0x18036f0d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f0d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aedd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aedd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aedd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeddc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x7638735893bd55d;
    param_1[1][8] = param_1[1][8] ^ 0x5d;
    param_1[1][9] = param_1[1][9] ^ 0xd5;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x18036f100
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f100(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e9c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xabdfdba57799233f;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x7799233f;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x18036f130
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f130(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae594;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae590;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae598;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae59c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xbd;
    param_1[1][1] = param_1[1][1] ^ 0xc9;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x18036f150
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f150(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806ae59c;
  uVal_9 = _UNK_1806ae598;
  uVal_8 = _UNK_1806ae594;
  uVal_7 = _DAT_1806ae590;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae594;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae590;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae598;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae59c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0xbd;
    param_1[2][1] = param_1[2][1] ^ 0xc9;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x18036f1f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f1f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5eb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5eb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5eb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b5ebc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x7dbbf511;
    param_1[1][4] = param_1[1][4] ^ 1;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18036f220
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f220(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aed04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aed00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aed08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aed0c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xbd9327c7;
    param_1[1][4] = param_1[1][4] ^ 0xb1;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18036f250
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f250(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806c365c;
  uVal_9 = _UNK_1806c3658;
  uVal_8 = _UNK_1806c3654;
  uVal_7 = _DAT_1806c3650;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c3654;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c3650;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c3658;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c365c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806c3de0,0);
  }
  return;
}

// func_0x18036f2a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f2a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c3df4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c3df0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c3df8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c3dfc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x991135b13b4b4b1b;
    param_1[1][8] = param_1[1][8] ^ 0x1b;
    param_1[1][9] = param_1[1][9] ^ 0x4b;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x18036f2d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f2d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d0c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xeb995df1ff715fd1;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xff715fd1;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x18036f300
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f300(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aeea4;
    uVal_2 = param_1[2] ^ _UNK_1806aeea8;
    uVal_3 = param_1[3] ^ _UNK_1806aeeac;
    *param_1 = *param_1 ^ _DAT_1806aeea0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806c3e00,0);
  }
  return;
}

// func_0x18036f370
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f370(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bb2f4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bb2f0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bb2f8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bb2fc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xcb;
    param_1[1][1] = param_1[1][1] ^ 0x6b;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x18036f3d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f3d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ee4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ee0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ee8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2eec;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xc94b2db3b5a3bf4d;
    param_1[1][8] = param_1[1][8] ^ 0x4d;
    param_1[1][9] = param_1[1][9] ^ 0xbf;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x18036f470
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f470(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae294;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae290;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae298;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae29c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x137bcf6f;
    param_1[1][4] = param_1[1][4] ^ 0xf9;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18036f4a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f4a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeeb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeeb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeeb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeebc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x1fa53b3f;
    param_1[1][4] = param_1[1][4] ^ 0xa7;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18036f4d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f4d0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2d44;
    uVal_2 = param_1[2] ^ _UNK_1806b2d48;
    uVal_3 = param_1[3] ^ _UNK_1806b2d4c;
    *param_1 = *param_1 ^ _DAT_1806b2d40;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b68d0,0);
  }
  return;
}

// func_0x18036f510
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f510(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c3e14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c3e10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c3e18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c3e1c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x95f78f4d;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x18036f530
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f530(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aec14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aec10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aec18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aec1c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xad63ed3d7549b775;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x7549b775;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x3d;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x18036f570
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f570(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806aec6c;
  uVal_9 = _UNK_1806aec68;
  uVal_8 = _UNK_1806aec64;
  uVal_7 = _DAT_1806aec60;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aec64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aec60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aec68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aec6c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0xa5;
    param_1[2][1] = param_1[2][1] ^ 0x2f;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x18036f5d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f5d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aec74;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aec70;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aec78;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aec7c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x87;
    param_1[1][1] = param_1[1][1] ^ 0xcd;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x18036f5f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f5f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c36c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c36c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c36c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c36cc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xd3;
    param_1[1][1] = param_1[1][1] ^ 0xdb;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x18036f610
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f610(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b66f4;
    uVal_2 = param_1[2] ^ _UNK_1806b66f8;
    uVal_3 = param_1[3] ^ _UNK_1806b66fc;
    *param_1 = *param_1 ^ _DAT_1806b66f0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b62f0,0);
  }
  return;
}

// func_0x18036f650
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f650(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806ae95c;
  uVal_9 = _UNK_1806ae958;
  uVal_8 = _UNK_1806ae954;
  uVal_7 = _DAT_1806ae950;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae954;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae950;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae958;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae95c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806c3e20,0);
  }
  return;
}

// func_0x18036f6a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f6a0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b631c;
  uVal_9 = _UNK_1806b6318;
  uVal_8 = _UNK_1806b6314;
  uVal_7 = _DAT_1806b6310;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6314;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6310;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6318;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b631c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806c3e30,0);
  }
  return;
}

// func_0x18036f720
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f720(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aedb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aedb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aedb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aedbc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xa31121ed077965d7;
    param_1[1][8] = param_1[1][8] ^ 0xd7;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x18036f750
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f750(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aed04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aed00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aed08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aed0c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xf7b7db1bd9327c7;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x18036f780
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f780(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c3654;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c3650;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c3658;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c365c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x779d037fcf83bfcb;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x18036f7b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f7b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d0c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xeb995df1ff715fd1;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x18036f7e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f7e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ed4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ed0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ed8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2edc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x9592b41c54dfb37;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x18036f810
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f810(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b68c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b68c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b68c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b68cc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xf6b2b971f8d9361;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x18036f840
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f840(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2854;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2850;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2858;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b285c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xf9a947ff85ef9dbf;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x18036f870
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f870(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2d64;
    uVal_2 = param_1[2] ^ _UNK_1806b2d68;
    uVal_3 = param_1[3] ^ _UNK_1806b2d6c;
    *param_1 = *param_1 ^ _DAT_1806b2d60;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b69c0,0);
  }
  return;
}

// func_0x18036f8b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f8b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ca4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ca0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ca8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cac;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xc77d4573;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x18036f8d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f8d0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b5b0c;
  uVal_9 = _UNK_1806b5b08;
  uVal_8 = _UNK_1806b5b04;
  uVal_7 = _DAT_1806b5b00;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5b04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5b00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5b08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b5b0c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xe569d1dd;
    param_1[2][4] = param_1[2][4] ^ 0xcb;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x18036f9d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036f9d0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806ae4dc;
  uVal_9 = _UNK_1806ae4d8;
  uVal_8 = _UNK_1806ae4d4;
  uVal_7 = _DAT_1806ae4d0;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae4d4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae4d0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae4d8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae4dc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xa1d573c5;
    param_1[2][4] = param_1[2][4] ^ 0x81;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x18036fa50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036fa50(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b6894;
    uVal_2 = param_1[2] ^ _UNK_1806b6898;
    uVal_3 = param_1[3] ^ _UNK_1806b689c;
    *param_1 = *param_1 ^ _DAT_1806b6890;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806ae7d0,0);
  }
  return;
}

// func_0x18036faa0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036faa0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2cbc;
  uVal_9 = _UNK_1806b2cb8;
  uVal_8 = _UNK_1806b2cb4;
  uVal_7 = _DAT_1806b2cb0;
  if (param_1[2][4] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cbc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x45a9b135;
    param_1[2][4] = 0;
  }
  return;
}

// func_0x18036fad0
void func_0x18036fad0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint32_t *param_4, uint64_t *param_5)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t *pU64_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  
  *param_1 = param_2;
  param_1[1] = 0;
  pU64_6 = (uint64_t *)func_0x180672de0(0x48);
  param_1[1] = pU64_6;
  *(uint32_t *)(pU64_6 + 4) = *param_4;
  *(uint8_t (*)[16])(pU64_6 + 5) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 7) = ZEXT816(0);
  uVal_1 = param_5[2];
  if (0xf < (uint64_t)param_5[3]) {
    param_5 = (uint64_t *)*param_5;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      pU64_6[7] = uVal_1;
      pU64_6[8] = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)param_5 + 4);
      uVal_4 = *(uint32_t *)(param_5 + 1);
      uVal_5 = *(uint32_t *)((int64_t)param_5 + 0xc);
      *(uint32_t *)(pU64_6 + 5) = *(uint32_t *)param_5;
      *(uint32_t *)((int64_t)pU64_6 + 0x2c) = uVal_3;
      *(uint32_t *)(pU64_6 + 6) = uVal_4;
      *(uint32_t *)((int64_t)pU64_6 + 0x34) = uVal_5;
    }
    else {
      uVal_7 = uVal_1 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_7) {
        uVal_9 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        uVal_7 = func_0x180672de0(uVal_9 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_9 + 0x28);
        uVal_7 = lVal_8 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_7 - 8) = lVal_8;
      }
      pU64_6[5] = uVal_7;
      pU64_6[7] = uVal_1;
      pU64_6[8] = uVal_9;
      func_0x1806aa960(uVal_7,param_5,uVal_1 + 1);
      pU64_6 = (uint64_t *)param_1[1];
    }
    *pU64_6 = param_3;
    *(uint64_t *)(param_1[1] + 8) = param_3;
    *(uint64_t *)(param_1[1] + 0x10) = param_3;
    *(uint8_t *)(param_1[1] + 0x18) = 0;
    *(uint8_t *)(param_1[1] + 0x19) = 0;
    return;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// Unwind@18036fc10
void Unwind_18036fc10(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x48);
  }
  return;
}

// Unwind@18036fc50
void Unwind_18036fc50(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x48);
  }
  return;
}

// func_0x18036fc90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036fc90(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d74;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d70;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d78;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d7c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x47abcda593a3c787;
    param_1[1][8] = param_1[1][8] ^ 0x87;
    param_1[1][9] = param_1[1][9] ^ 199;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x18036fcc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036fcc0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2d1c;
  uVal_9 = _UNK_1806b2d18;
  uVal_8 = _UNK_1806b2d14;
  uVal_7 = _DAT_1806b2d10;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d1c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0xd5;
    param_1[2][1] = param_1[2][1] ^ 0xf1;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x18036fcf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036fcf0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6494;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6490;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6498;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b649c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xe7bf0d27d93d3145;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xd93d3145;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x27;
    param_1[1][0xd] = param_1[1][0xd] ^ 0xd;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x18036fd60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036fd60(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b4eb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b4eb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b4eb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b4ebc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xffc3978bc98f5399;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xc98f5399;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x8b;
    param_1[1][0xd] = param_1[1][0xd] ^ 0x97;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x18036fda0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036fda0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806af25c;
  uVal_9 = _UNK_1806af258;
  uVal_8 = _UNK_1806af254;
  uVal_7 = _DAT_1806af250;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af254;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af250;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af258;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af25c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0xe7;
    param_1[2][1] = param_1[2][1] ^ 0x8b;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x18036fdd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036fdd0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2db4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2db0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2db8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dbc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xbb935373;
    param_1[1][4] = param_1[1][4] ^ 0x9b;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18036fe00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036fe00(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b6894;
    uVal_2 = param_1[2] ^ _UNK_1806b6898;
    uVal_3 = param_1[3] ^ _UNK_1806b689c;
    *param_1 = *param_1 ^ _DAT_1806b6890;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x971941d90d7fe737;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806b2720,0);
  }
  return;
}

// func_0x18036fe50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036fe50(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e0c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x7ba3590f;
    param_1[1][4] = param_1[1][4] ^ 0x95;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18036fe80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036fe80(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6a04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6a00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6a08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b6a0c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x15;
    param_1[1][1] = param_1[1][1] ^ 0xd7;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x18036fea0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036fea0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b54c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b54c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b54c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b54cc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x656173452549d30d;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x18036fed0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036fed0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae4d4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae4d0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae4d8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae4dc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xefc7bf81a1d573c5;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x18036ff00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ff00(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2914;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2910;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2918;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b291c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xeb279b691ff3fb37;
    param_1[1][8] = param_1[1][8] ^ 0x37;
    param_1[1][9] = param_1[1][9] ^ 0xfb;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x18036ff30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ff30(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6a04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6a00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6a08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b6a0c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x59bd715;
    param_1[1][4] = param_1[1][4] ^ 0xc5;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18036ff60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ff60(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2e4c;
  uVal_9 = _UNK_1806b2e48;
  uVal_8 = _UNK_1806b2e44;
  uVal_7 = _DAT_1806b2e40;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e44;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e40;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e48;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e4c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806b2e50,0);
  }
  return;
}

// func_0x18036ffb0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18036ffb0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2cbc;
  uVal_9 = _UNK_1806b2cb8;
  uVal_8 = _UNK_1806b2cb4;
  uVal_7 = _DAT_1806b2cb0;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cbc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x45a9b135;
    param_1[2][4] = param_1[2][4] ^ 0x39;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x180370020
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180370020(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d8c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xb4d771d;
    param_1[1][4] = param_1[1][4] ^ 0xbf;
    param_1[1][5] = param_1[1][5] ^ 3;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1803700f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803700f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6164;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6160;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6168;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b616c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x7d0149afab056bdd;
    param_1[1][8] = param_1[1][8] ^ 0xdd;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x180370150
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180370150(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e6c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xad7941110d6b2541;
    param_1[1][8] = param_1[1][8] ^ 0x41;
    param_1[1][9] = param_1[1][9] ^ 0x25;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x180370180
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180370180(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806aed3c;
  uVal_9 = _UNK_1806aed38;
  uVal_8 = _UNK_1806aed34;
  uVal_7 = _DAT_1806aed30;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aed34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aed30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aed38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aed3c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x97;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x1803701b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803701b0(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806aedf4;
    uVal_3 = param_1[2] ^ _UNK_1806aedf8;
    uVal_4 = param_1[3] ^ _UNK_1806aedfc;
    *param_1 = *param_1 ^ _DAT_1806aedf0;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806c3e40;
  }
  return;
}

// func_0x180370210
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180370210(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeee4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeee0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeee8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeeec;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xb5e3ff6f79e787bf;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x79e787bf;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x6f;
    param_1[1][0xd] = ~param_1[1][0xd];
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x180370250
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180370250(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c3e54;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c3e50;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c3e58;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c3e5c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x37;
    param_1[1][1] = param_1[1][1] ^ 0x71;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x180370270
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180370270(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae3a4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae3a0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae3a8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae3ac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x7f0965650969d1c5;
    param_1[1][8] = param_1[1][8] ^ 0xc5;
    param_1[1][9] = param_1[1][9] ^ 0xd1;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x1803702a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803702a0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806aef9c;
  uVal_9 = _UNK_1806aef98;
  uVal_8 = _UNK_1806aef94;
  uVal_7 = _DAT_1806aef90;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aef94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aef90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aef98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aef9c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x533949bf;
    param_1[2][4] = param_1[2][4] ^ 0xc3;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x1803702e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803702e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af244;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af240;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af248;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af24c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xf553e56763671535;
    param_1[1][8] = param_1[1][8] ^ 0x35;
    param_1[1][9] = param_1[1][9] ^ 0x15;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x180370310
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180370310(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2e2c;
  uVal_9 = _UNK_1806b2e28;
  uVal_8 = _UNK_1806b2e24;
  uVal_7 = _DAT_1806b2e20;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e24;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e20;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e28;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e2c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = 0;
  }
  return;
}

// func_0x180370340
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180370340(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b4e8c;
  uVal_9 = _UNK_1806b4e88;
  uVal_8 = _UNK_1806b4e84;
  uVal_7 = _DAT_1806b4e80;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b4e84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b4e80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b4e88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b4e8c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xa9f11975;
    param_1[2][4] = param_1[2][4] ^ 0x69;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x180370380
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180370380(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d6c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xd76bd737d54d5575;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xd54d5575;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x37;
    param_1[1][0xd] = param_1[1][0xd] ^ 0xd7;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x1803703c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803703c0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e8c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xdd55518f;
    param_1[1][4] = param_1[1][4] ^ 0x35;
    param_1[1][5] = param_1[1][5] ^ 0x9b;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1803703f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803703f0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806aeafc;
  uVal_9 = _UNK_1806aeaf8;
  uVal_8 = _UNK_1806aeaf4;
  uVal_7 = _DAT_1806aeaf0;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeaf4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeaf0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeaf8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeafc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = 0;
  }
  return;
}

// func_0x180370420
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180370420(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d74;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d70;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d78;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d7c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x47abcda593a3c787;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x93a3c787;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xa5;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x180370650
void func_0x180370650(uint64_t param_1,char param_2)
{
  if (param_2 != '\0') {
    thunk_FUN_180695dd0(param_1,0x18);
    return;
  }
  return;
}

// func_0x180370660
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180370660(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806b2d14;
    uVal_3 = param_1[2] ^ _UNK_1806b2d18;
    uVal_4 = param_1[3] ^ _UNK_1806b2d1c;
    *param_1 = *param_1 ^ _DAT_1806b2d10;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806be310;
  }
  return;
}

// func_0x180370740
int64_t * func_0x180370740(int64_t param_1,uint param_2)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int64_t *pLong_5;
  int64_t lVal_6;
  int64_t local_68 [2];
  uint8_t *local_58;
  uint64_t local_50;
  uint32_t local_48;
  uint8_t local_44;
  uint local_3c;
  uint8_t local_38 [16];
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  pLong_5 = (int64_t *)
           (*(int64_t *)(param_1 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(param_1 + 0x50) - *(int64_t *)(param_1 + 0x48)) >> 3) -
            1U & param_2) * 8);
  lVal_3 = *(int64_t *)(param_1 + 0x68);
  do {
    if (*pLong_5 == -1) goto LAB_1803707a9;
    lVal_6 = *pLong_5 * 0x20;
    pLong_5 = (int64_t *)(lVal_3 + lVal_6);
  } while (*(uint *)(lVal_3 + 8 + lVal_6) != param_2);
  if (*(int64_t *)(param_1 + 0x70) == lVal_3 + lVal_6) {
LAB_1803707a9:
    local_38 = ZEXT816(0);
    local_3c = param_2;
    pLong_5 = (int64_t *)func_0x180672de0(0x78);
    pLong_5[1] = 0x100000001;
    *pLong_5 = (int64_t)&PTR_FUN_1806b5a60;
    if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x1c39c) < DAT_180840000) {
      func_0x180672ec0(&DAT_180840000);
      if (DAT_180840000 == -1) {
        func_0x180370db0(&DAT_18083ffe8);
        _Init_thread_footer(&DAT_180840000);
      }
    }
    local_38._0_8_ = pLong_5 + 2;
    *(uint8_t (*)[16])(pLong_5 + 7) = ZEXT816(0);
    *(uint8_t (*)[16])(pLong_5 + 5) = ZEXT816(0);
    *(uint8_t (*)[16])(pLong_5 + 3) = ZEXT816(0);
    pLong_5[9] = (int64_t)&DAT_18083ffe8;
    *(uint8_t *)(pLong_5 + 10) = 1;
    pLong_5[0xb] = 0x3ffff;
    pLong_5[2] = (int64_t)&PTR_LAB_1806c80d0;
    *(uint8_t (*)[16])(pLong_5 + 0xc) = ZEXT816(0);
    pLong_5[0xe] = 0;
    local_38._8_8_ = pLong_5;
    func_0x18012cbe0(param_1 + 0x48,local_68,&local_3c,local_38);
    local_58 = &LAB_18012d200;
    local_48 = 0xf987f04e;
    local_50 = 0;
    local_44 = 3;
    local_68[0] = param_1;
    (**(func_ptr_t *)(*(int64_t *)local_38._0_8_ + 0x28))(local_38._0_8_,local_68);
    pLong_4 = (int64_t *)local_38._8_8_;
    pLong_5 = (int64_t *)local_38._0_8_;
    if ((int64_t *)local_38._8_8_ != (int64_t *)0x0) {
      LOCK();
      pLong_1 = (int64_t *)(local_38._8_8_ + 8);
      *(int *)pLong_1 = *(int *)pLong_1 + -1;
      UNLOCK();
      if (*(int *)pLong_1 == 0) {
        (***(func_ptr_t **)local_38._8_8_)(local_38._8_8_);
        LOCK();
        pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (*pInt_2 == 0) {
          (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
        }
      }
    }
  }
  else {
    pLong_5 = *(int64_t **)(lVal_3 + lVal_6 + 0x10);
  }
  return pLong_5;
}

// Unwind@180370910
void Unwind_180370910(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x50);
  return;
}

// Catch_All@180370ca0
void Catch_All_180370ca0(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  *(uint64_t *)(param_2 + 0x40) = *(uint64_t *)(param_2 + 0x58);
  *(int64_t *)(param_2 + 0x48) = *(int64_t *)(param_2 + 0x60) + -1;
  *(uint32_t *)(param_2 + 0x30) = *(uint32_t *)(param_2 + 0x58);
  *(uint32_t *)(param_2 + 0x34) = *(uint32_t *)(param_2 + 0x5c);
  *(uint32_t *)(param_2 + 0x38) = *(uint32_t *)(param_2 + 0x60);
  *(uint32_t *)(param_2 + 0x3c) = *(uint32_t *)(param_2 + 100);
  func_0x18012bf50(*(uint64_t *)(param_2 + 0x50),param_2 + 0x30,param_2 + 0x40);
  func_0x18067a120(0,0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180370db0
void func_0x180370db0(int *param_1)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_180840008) {
    func_0x180672ec0(&DAT_180840008);
    if (DAT_180840008 == -1) {
      DAT_180840004 = DAT_18083f31c;
      DAT_18083f31c = DAT_18083f31c + 1;
      _Init_thread_footer(&DAT_180840008);
    }
  }
  *param_1 = DAT_180840004;
  param_1[1] = -0x448da142;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  return;
}

// func_0x180370f70
int64_t func_0x180370f70(int64_t param_1,uint64_t param_2)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t local_60;
  uint64_t local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVal_6 = param_2 >> 7;
  lVal_5 = *(int64_t *)(param_1 + 0x50);
  lVal_2 = *(int64_t *)(param_1 + 0x58);
  uVal_4 = lVal_2 - lVal_5 >> 3;
  if (uVal_4 <= uVal_6) {
    pLong_1 = (int64_t *)(param_1 + 0x50);
    local_60 = 0;
    if (uVal_6 < (uint64_t)(*(int64_t *)(param_1 + 0x60) - lVal_5 >> 3)) {
      lVal_5 = (uVal_6 + 1) - uVal_4;
      func_0x1806ab010(lVal_2,0,lVal_5 * 8);
      lVal_2 = lVal_2 + lVal_5 * 8;
      *(int64_t *)(param_1 + 0x58) = lVal_2;
    }
    else {
      func_0x18012ca10(pLong_1,uVal_6 + 1,&local_60);
      lVal_2 = *(int64_t *)(param_1 + 0x58);
    }
    lVal_5 = *pLong_1;
    uVal_3 = lVal_2 - lVal_5 >> 3;
    local_50 = pLong_1;
    if (uVal_4 < uVal_3) {
      do {
        local_58 = uVal_4;
        lVal_2 = func_0x180672de0(0x3027);
        uVal_4 = lVal_2 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_4 - 8) = lVal_2;
        *(uint64_t *)(*pLong_1 + local_58 * 8) = uVal_4;
        uVal_4 = local_58 + 1;
      } while (uVal_3 != uVal_4);
      lVal_5 = *pLong_1;
    }
  }
  return (uint64_t)(((uint)param_2 & 0x7f) * 0x60) + *(int64_t *)(lVal_5 + uVal_6 * 8);
}

// Catch_All@180371080
void Catch_All_180371080(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  func_0x18012ead0(*(uint64_t *)(param_2 + 0x38),*(uint64_t *)(param_2 + 0x30));
  func_0x18067a120(0,0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180371350
void Unwind_180371350(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180371370
void func_0x180371370(int64_t param_1,uint64_t param_2)
{
  uint8_t (*pArr16_1)[16];
  int64_t *pLong_2;
  int64_t lVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint8_t local_41;
  int64_t local_40;
  
  uVal_8 = *(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x20) >> 2;
  uVal_10 = param_2;
  if (param_2 < uVal_8) {
    do {
      if (*(uint *)(*(int64_t *)(param_1 + 0x20) + uVal_10 * 4) < 0xfffc0000) {
        lVal_3 = *(int64_t *)(*(int64_t *)(param_1 + 0x50) + (uVal_10 >> 7) * 8);
        uVal_9 = (uint64_t)(((uint)uVal_10 & 0x7f) * 0x60);
        pLong_2 = *(int64_t **)(lVal_3 + 0x58 + uVal_9);
        if (pLong_2 != (int64_t *)0x0) {
          lVal_4 = *pLong_2;
          if (lVal_4 != 0) {
            uVal_6 = pLong_2[2] - lVal_4;
            lVal_7 = lVal_4;
            if (0xfff < uVal_6) {
              lVal_7 = *(int64_t *)(lVal_4 + -8);
              if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_180371595;
              uVal_6 = uVal_6 + 0x27;
            }
            thunk_FUN_180695dd0(lVal_7,uVal_6);
          }
          thunk_FUN_180695dd0(pLong_2,0x28);
        }
        lVal_3 = *(int64_t *)(lVal_3 + uVal_9 + 0x50);
        if (lVal_3 != 0) {
          thunk_FUN_180695dd0(lVal_3,8);
        }
      }
      uVal_10 = uVal_10 + 1;
    } while (uVal_8 != uVal_10);
  }
  uVal_8 = param_2 + 0x7f >> 7;
  pArr16_1 = (uint8_t (*)[16])(param_1 + 0x50);
  lVal_3 = *(int64_t *)(param_1 + 0x50);
  lVal_4 = *(int64_t *)(param_1 + 0x58);
  uVal_9 = lVal_4 - lVal_3 >> 3;
  uVal_10 = uVal_8;
  if (uVal_8 < uVal_9) {
    do {
      lVal_3 = *(int64_t *)(*(int64_t *)*pArr16_1 + uVal_10 * 8);
      lVal_4 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_4)) goto LAB_180371595;
      thunk_FUN_180695dd0(lVal_4,0x3027);
      uVal_10 = uVal_10 + 1;
    } while (uVal_9 != uVal_10);
    lVal_3 = *(int64_t *)(param_1 + 0x50);
    lVal_4 = *(int64_t *)(param_1 + 0x58);
    uVal_9 = lVal_4 - lVal_3 >> 3;
  }
  lVal_7 = uVal_8 - uVal_9;
  if (uVal_9 <= uVal_8) {
    lVal_5 = lVal_4;
    if (uVal_9 <= uVal_8 && lVal_7 != 0) {
      if (uVal_8 <= (uint64_t)(*(int64_t *)(param_1 + 0x60) - lVal_3 >> 3)) {
        lVal_5 = lVal_4 + lVal_7 * 8;
        func_0x1806ab010(lVal_4,0,lVal_7 * 8);
        *(int64_t *)(param_1 + 0x58) = lVal_5;
        lVal_3 = *(int64_t *)(param_1 + 0x60);
        if (lVal_5 == lVal_3) {
          return;
        }
        goto LAB_180371505;
      }
      func_0x18007bf80(pArr16_1,uVal_8,&local_41);
      lVal_5 = *(int64_t *)(param_1 + 0x58);
    }
    lVal_3 = *(int64_t *)(param_1 + 0x60);
    if (lVal_5 == lVal_3) {
      return;
    }
  }
  else {
    lVal_5 = lVal_3 + uVal_8 * 8;
    *(int64_t *)(param_1 + 0x58) = lVal_5;
    lVal_3 = *(int64_t *)(param_1 + 0x60);
    if (lVal_5 == lVal_3) {
      return;
    }
  }
LAB_180371505:
  lVal_4 = *(int64_t *)*pArr16_1;
  if (lVal_4 == lVal_5) {
    if (lVal_5 != 0) {
      uVal_10 = lVal_3 - lVal_5;
      if (0xfff < uVal_10) {
        lVal_4 = *(int64_t *)(lVal_4 + -8);
        if (0x1f < (lVal_5 - lVal_4) - 8U) {
LAB_180371595:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_10 = uVal_10 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_4,uVal_10);
      *pArr16_1 = ZEXT816(0);
      *(uint64_t *)(param_1 + 0x60) = 0;
    }
  }
  else {
    local_40 = lVal_5 - lVal_4 >> 3;
    func_0x18007fe80(pArr16_1,&local_40);
  }
  return;
}

// func_0x1803715a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803715a0(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806b2cb4;
    uVal_3 = param_1[2] ^ _UNK_1806b2cb8;
    uVal_4 = param_1[3] ^ _UNK_1806b2cbc;
    *param_1 = *param_1 ^ _DAT_1806b2cb0;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806b6870;
  }
  return;
}

// func_0x180371640
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180371640(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b649c;
  uVal_9 = _UNK_1806b6498;
  uVal_8 = _UNK_1806b6494;
  uVal_7 = _DAT_1806b6490;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6494;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6490;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6498;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b649c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806b5ca0,0);
  }
  return;
}

// func_0x180371710
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180371710(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af254;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af250;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af258;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af25c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x851d8be7;
    param_1[1][4] = param_1[1][4] ^ 0xaf;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x180371790
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180371790(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b54c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b54c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b54c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b54cc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x656173452549d30d;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x2549d30d;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x45;
    param_1[1][0xd] = param_1[1][0xd] ^ 0x73;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x1803717d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803717d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2da4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2da0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2da8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xd993efbb19cfe32d;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x19cfe32d;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xbb;
    param_1[1][0xd] = param_1[1][0xd] ^ 0xef;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x180371810
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180371810(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2914;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2910;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2918;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b291c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xeb279b691ff3fb37;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x1ff3fb37;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x180371f00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180371f00(uint64_t *param_1)
{
  uint64_t *pU64_1;
  uint8_t (*_Str)[16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint8_t *pU64_12;
  uint64_t uVal_13;
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  size_t local_a8;
  uint64_t uStack_a0;
  uint32_t uStack_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint8_t uStack_88;
  uint32_t uStack_87;
  uint32_t uStack_83;
  uint32_t uStack_7f;
  uint8_t local_78 [16];
  size_t local_68;
  uint64_t local_60;
  uint8_t local_58 [16];
  uint8_t local_48 [16];
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x10bfc) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x10bfc) = 1;
    *(uint8_t *)(lVal_11 + 0x10bf8) = 1;
    *(uint64_t *)(lVal_11 + 0x10bf0) = 0x4795a8c2f2ceaebb;
    func_0x180673140(&LAB_18042ba50);
  }
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_11 + 0x10bf0);
  if (*(char *)(lVal_11 + 0x10bf8) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0x47abcda593a3c787;
    *(uint8_t *)(lVal_11 + 0x10bf8) = 0;
  }
  local_78 = ZEXT816(0);
  sz_9 = strlen((char *)pU64_1);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
LAB_180372405:
    func_0x18007ba70();
  }
  else {
    if (sz_9 < 0x10) {
      pU64_12 = local_78;
      uVal_13 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_10) {
        uVal_13 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_13 + 0x28);
        pU64_12 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_11;
      }
      local_78._0_8_ = pU64_12;
    }
    local_68 = sz_9;
    local_60 = uVal_13;
    func_0x1806aa960(pU64_12,pU64_1,sz_9);
    pU64_12[sz_9] = 0;
    uStack_88 = UNK_1806ca9a0;
    uStack_87 = _UNK_1806ca9a1;
    uStack_83 = _UNK_1806ca9a5;
    uStack_7f = _UNK_1806ca9a9;
    uStack_98 = _DAT_1806ca990;
    uStack_94 = _UNK_1806ca994;
    uStack_90 = _UNK_1806ca998;
    uStack_8c = _UNK_1806ca99c;
    local_a8 = CONCAT44(_UNK_1806ca984,_DAT_1806ca980);
    uStack_a0 = CONCAT44(_UNK_1806ca98c,_UNK_1806ca988);
    local_b8._4_4_ = _UNK_1806ca974;
    local_b8._0_4_ = _DAT_1806ca970;
    uStack_b0._0_4_ = _UNK_1806ca978;
    uStack_b0._4_4_ = _UNK_1806ca97c;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x10c3c) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x10c3c) = 1;
      func_0x1801b4920(lVal_11 + 0x10bfd,local_b8);
      func_0x180673140(&LAB_18042ba70);
    }
    uVal_8 = _UNK_1806b2d7c;
    uVal_7 = _UNK_1806b2d78;
    uVal_6 = _UNK_1806b2d74;
    uVal_5 = _DAT_1806b2d70;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_11 + 0x10bfd);
    if (*(char *)(lVal_11 + 0x10c3a) == '\x01') {
      auArr_2._4_4_ = *(uint *)(lVal_11 + 0x10c01) ^ _UNK_1806b2d74;
      auArr_2._0_4_ = *(uint *)*_Str ^ _DAT_1806b2d70;
      auArr_2._8_4_ = *(uint *)(lVal_11 + 0x10c05) ^ _UNK_1806b2d78;
      auArr_2._12_4_ = *(uint *)(lVal_11 + 0x10c09) ^ _UNK_1806b2d7c;
      *_Str = auArr_2;
      auArr_3._4_4_ = *(uint *)(lVal_11 + 0x10c11) ^ uVal_6;
      auArr_3._0_4_ = *(uint *)(lVal_11 + 0x10c0d) ^ uVal_5;
      auArr_3._8_4_ = *(uint *)(lVal_11 + 0x10c15) ^ uVal_7;
      auArr_3._12_4_ = *(uint *)(lVal_11 + 0x10c19) ^ uVal_8;
      *(uint8_t (*)[16])(lVal_11 + 0x10c0d) = auArr_3;
      auArr_4._4_4_ = *(uint *)(lVal_11 + 0x10c21) ^ uVal_6;
      auArr_4._0_4_ = *(uint *)(lVal_11 + 0x10c1d) ^ uVal_5;
      auArr_4._8_4_ = *(uint *)(lVal_11 + 0x10c25) ^ uVal_7;
      auArr_4._12_4_ = *(uint *)(lVal_11 + 0x10c29) ^ uVal_8;
      *(uint8_t (*)[16])(lVal_11 + 0x10c1d) = auArr_4;
      *(uint64_t *)(lVal_11 + 0x10c2d) =
           CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_11 + 0x10c2d) >> 0x20) ^ _UNK_1806b5c24,
                    (uint)*(uint64_t *)(lVal_11 + 0x10c2d) ^ _DAT_1806b5c20);
      *(byte *)(lVal_11 + 0x10c35) = *(byte *)(lVal_11 + 0x10c35) ^ 0x87;
      *(byte *)(lVal_11 + 0x10c36) = *(byte *)(lVal_11 + 0x10c36) ^ 199;
      *(byte *)(lVal_11 + 0x10c37) = *(byte *)(lVal_11 + 0x10c37) ^ 0xa3;
      *(byte *)(lVal_11 + 0x10c38) = *(byte *)(lVal_11 + 0x10c38) ^ 0x93;
      *(byte *)(lVal_11 + 0x10c39) = *(byte *)(lVal_11 + 0x10c39) ^ 0xa5;
      *(uint8_t *)(lVal_11 + 0x10c3a) = 0;
    }
    local_48 = ZEXT816(0);
    local_58 = ZEXT816(0);
    sz_9 = strlen((char *)_Str);
    if ((int64_t)sz_9 < 0) goto LAB_180372405;
    if (sz_9 < 0x10) {
      uVal_13 = 0xf;
      pU64_12 = local_58;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_10) {
        uVal_13 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_13 + 0x28);
        pU64_12 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_11;
      }
      local_58._0_8_ = pU64_12;
    }
    local_48._8_8_ = uVal_13;
    local_48._0_8_ = sz_9;
    func_0x1806aa960(pU64_12,_Str,sz_9);
    pU64_12[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x10c50) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x10c50) = 1;
      *(uint64_t *)(lVal_11 + 0x10c40) = 0x34d8a2d7f0d7a2f4;
      *(uint32_t *)(lVal_11 + 0x10c48) = 0xe1caa6ef;
      *(uint16_t *)(lVal_11 + 0x10c4c) = 0x1a5;
      func_0x180673140(&LAB_18042bab0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_11 + 0x10c40);
    if (*(char *)(lVal_11 + 0x10c4d) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_11 + 0x10c48) = *(uint *)(lVal_11 + 0x10c48) ^ 0x93a3c787;
      *(byte *)(lVal_11 + 0x10c4c) = *(byte *)(lVal_11 + 0x10c4c) ^ 0xa5;
      *(uint8_t *)(lVal_11 + 0x10c4d) = 0;
    }
    _local_b8 = ZEXT816(0);
    sz_9 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_9) {
      if (sz_9 < 0x10) {
        pU64_12 = local_b8;
        uVal_13 = 0xf;
      }
      else {
        uVal_10 = sz_9 | 0xf;
        uVal_13 = 0x16;
        if (0x16 < uVal_10) {
          uVal_13 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          pU64_12 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
        }
        else {
          lVal_11 = func_0x180672de0(uVal_13 + 0x28);
          pU64_12 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_12 + -8) = lVal_11;
        }
        local_b8 = (uint8_t  [8])pU64_12;
      }
      local_a8 = sz_9;
      uStack_a0 = uVal_13;
      func_0x1806aa960(pU64_12,pU64_1,sz_9);
      pU64_12[sz_9] = 0;
      func_0x1804c9aa0(param_1,local_b8,local_58,local_78);
      if (0xf < uStack_a0) {
        uVal_13 = uStack_a0 + 1;
        lVal_11 = (int64_t)local_b8;
        if (0xfff < uVal_13) {
          lVal_11 = *(int64_t *)((int64_t)local_b8 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_11)) goto LAB_180372411;
          uVal_13 = uStack_a0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_13);
      }
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_13 = local_48._8_8_ + 1;
        lVal_11 = local_58._0_8_;
        if (0xfff < uVal_13) {
          lVal_11 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_11)) goto LAB_180372411;
          uVal_13 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_13);
      }
      if (0xf < local_60) {
        uVal_13 = local_60 + 1;
        lVal_11 = local_78._0_8_;
        if (0xfff < uVal_13) {
          lVal_11 = *(int64_t *)(local_78._0_8_ + -8);
          if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_11)) goto LAB_180372411;
          uVal_13 = local_60 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_13);
      }
      *param_1 = &PTR_LAB_1806c96d0;
      return param_1;
    }
  }
  func_0x18007ba70();
LAB_180372411:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180372420
void Unwind_180372420(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180372450
void Unwind_180372450(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180372480
void Unwind_180372480(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1803724b0
void Unwind_1803724b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10c3c) = 0;
  return;
}

// Unwind@1803748e0
void Unwind_1803748e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@180374930
void Unwind_180374930(void)
{
  func_0x180672f60(&DAT_180840098);
  return;
}

// Unwind@180374980
void Unwind_180374980(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x210);
  return;
}

// Unwind@1803749d0
void Unwind_1803749d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@180374a20
void Unwind_180374a20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  return;
}

// Unwind@180374a70
void Unwind_180374a70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@180374ac0
void Unwind_180374ac0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@180374b10
void Unwind_180374b10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@180374b60
void Unwind_180374b60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  return;
}

// Unwind@180374bb0
void Unwind_180374bb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@180374c00
void Unwind_180374c00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  *(uint8_t *)(param_2 + 0x296) = 0;
  return;
}

// Unwind@180374c50
void Unwind_180374c50(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x296) == '\x01') {
    func_0x180001e70(param_2 + 0x150);
  }
  return;
}

// Unwind@180374ca0
void Unwind_180374ca0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@180374cf0
void Unwind_180374cf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x297) = 0;
  return;
}

// Unwind@180374d40
void Unwind_180374d40(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x297) == '\x01') {
    func_0x180001e70(param_2 + 0x170);
  }
  return;
}

// Unwind@180374d90
void Unwind_180374d90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  return;
}

// Unwind@180374de0
void Unwind_180374de0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@180374e30
void Unwind_180374e30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x210);
  return;
}

// Unwind@180374e80
void Unwind_180374e80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10df8) = 0;
  return;
}

// Unwind@180374ee0
void Unwind_180374ee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@180374f30
void Unwind_180374f30(uint64_t param_1,int64_t param_2)
{
  func_0x1800bffd0(param_2 + 0x28);
  return;
}

// Unwind@180374f70
void Unwind_180374f70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10ccc) = 0;
  return;
}

// Unwind@180374fd0
void Unwind_180374fd0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10d5c) = 0;
  return;
}

// Unwind@180375030
void Unwind_180375030(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10d94) = 0;
  *(uint8_t *)(param_2 + 0x297) = 1;
  return;
}

// Unwind@180375090
void Unwind_180375090(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@1803750e0
void Unwind_1803750e0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180375110
uint64_t func_0x180375110(int64_t *param_1)
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
      if (0x2f90efc5 < *(int *)(lVal_6 + 0x20)) {
        lVal_11 = lVal_6;
      }
      lVal_6 = *(int64_t *)(lVal_6 + (uint64_t)(*(int *)(lVal_6 + 0x20) < 0x2f90efc6) * 0x10);
      ch_4 = *(char *)(lVal_6 + 0x19);
    }
    if ((*(char *)(lVal_11 + 0x19) == '\0') && (*(int *)(lVal_11 + 0x20) < 0x2f90efc7)) {
      while (ch_3 == '\0') {
        if (0x2f90efc5 < *(int *)(lVal_5 + 0x20)) {
          lVal_10 = lVal_5;
        }
        lVal_5 = *(int64_t *)(lVal_5 + (uint64_t)(*(int *)(lVal_5 + 0x20) < 0x2f90efc6) * 0x10);
        ch_3 = *(char *)(lVal_5 + 0x19);
      }
      if ((*(char *)(lVal_10 + 0x19) != '\0') || (0x2f90efc6 < *(int *)(lVal_10 + 0x20))) {
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

// func_0x180375210
uint8_t (*func_0x180375210(int64_t param_1,uint8_t (*param_2)[16]))[16]
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint8_t (*pArr16_3)[16];
  
  *param_2 = ZEXT816(0);
  *(uint64_t *)param_2[1] = 0;
  *(uint64_t *)(param_2[1] + 8) = 0xf;
  if (((*(uint *)(param_1 + 0x78) & 0x22) == 2) ||
     (uVal_2 = **(uint64_t **)(param_1 + 0x48), uVal_2 == 0)) {
    if ((*(uint *)(param_1 + 0x78) & 4) != 0) {
      return param_2;
    }
    if (**(int64_t **)(param_1 + 0x40) == 0) {
      return param_2;
    }
    uVal_2 = **(int64_t **)(param_1 + 0x40) + (int64_t)**(int **)(param_1 + 0x58);
    lVal_1 = **(int64_t **)(param_1 + 0x20);
  }
  else {
    if (uVal_2 < *(uint64_t *)(param_1 + 0x70)) {
      uVal_2 = *(uint64_t *)(param_1 + 0x70);
    }
    lVal_1 = **(int64_t **)(param_1 + 0x28);
  }
  if (lVal_1 != 0) {
    uVal_2 = uVal_2 - lVal_1;
    if (uVal_2 < 0x10) {
      *(uint64_t *)param_2[1] = uVal_2;
      pArr16_3 = param_2;
      func_0x1806aa960(param_2,lVal_1,uVal_2,lVal_1,param_2,0xfffffffffffffffe);
      *(uint8_t *)((int64_t)param_2 + uVal_2) = 0;
      param_2 = pArr16_3;
    }
    else {
      func_0x18007bba0(param_2,uVal_2);
    }
  }
  return param_2;
}

// Unwind@1803752e0
void Unwind_1803752e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x20));
  return;
}

// func_0x180375310
void func_0x180375310(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 5) == '\x01') {
    *param_1 = *param_1 ^ 0x6f799353;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xa9;
    *(uint8_t *)((int64_t)param_1 + 5) = 0;
  }
  return;
}

// func_0x180375330
void func_0x180375330(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0x6f799353;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xa9;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0xfd;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// Unwind@1803764f0
void Unwind_1803764f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x180);
  func_0x1800565c0(param_2 + 0x30);
  return;
}

// Unwind@180376540
void Unwind_180376540(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180376580
void Unwind_180376580(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@1803765c0
void Unwind_1803765c0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 400);
  return;
}

// Unwind@180376610
void Unwind_180376610(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@180376650
void Unwind_180376650(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1803766a0
void Unwind_1803766a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1803766f0
void Unwind_1803766f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@180376740
void Unwind_180376740(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b8);
  return;
}

// Unwind@180376790
void Unwind_180376790(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x50);
  func_0x18001deb0(param_2 + 0x120);
  func_0x18001deb0(param_2 + 0x180);
  func_0x1800565c0(param_2 + 0x30);
  func_0x180001e70(param_2 + 0x80);
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@180376810
void Unwind_180376810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  func_0x180037f80(*(uint64_t *)(param_2 + 0x158));
  return;
}

// func_0x180376860
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180376860(uint64_t *param_1)
{
  uint64_t *pU64_1;
  uint *_Str;
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  size_t sz_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint8_t *pU64_9;
  uint64_t uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint8_t local_b8 [16];
  size_t local_a8;
  uint64_t uStack_a0;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint16_t uStack_8c;
  uint16_t uStack_8a;
  undefined6 uStack_88;
  uint8_t local_78 [16];
  size_t local_68;
  uint64_t local_60;
  uint8_t local_58 [16];
  uint8_t local_48 [16];
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x10e60) == '\0') {
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_8 + 0x10e60) = 1;
    *(uint64_t *)(lVal_8 + 0x10e50) = 0x132746a2811cb0e1;
    *(uint32_t *)(lVal_8 + 0x10e58) = 0xdb0cbdb4;
    *(uint16_t *)(lVal_8 + 0x10e5c) = 0x1cb;
    func_0x180673140(&LAB_18042bf30);
  }
  lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_8 + 0x10e50);
  if (*(char *)(lVal_8 + 0x10e5d) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0x750729cbe569d1dd;
    *(uint *)(lVal_8 + 0x10e58) = *(uint *)(lVal_8 + 0x10e58) ^ 0xe569d1dd;
    *(byte *)(lVal_8 + 0x10e5c) = *(byte *)(lVal_8 + 0x10e5c) ^ 0xcb;
    *(uint8_t *)(lVal_8 + 0x10e5d) = 0;
  }
  local_78 = ZEXT816(0);
  sz_6 = strlen((char *)pU64_1);
  if ((int64_t)sz_6 < 0) {
    func_0x18007ba70();
LAB_180376d7c:
    func_0x18007ba70();
  }
  else {
    if (sz_6 < 0x10) {
      pU64_9 = local_78;
      uVal_10 = 0xf;
    }
    else {
      uVal_7 = sz_6 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_7) {
        uVal_10 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        pU64_9 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_10 + 0x28);
        pU64_9 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_9 + -8) = lVal_8;
      }
      local_78._0_8_ = pU64_9;
    }
    local_68 = sz_6;
    local_60 = uVal_10;
    func_0x1806aa960(pU64_9,pU64_1,sz_6);
    pU64_9[sz_6] = 0;
    local_98 = _DAT_1806caabc;
    uStack_94 = _UNK_1806caac0;
    uStack_90 = _UNK_1806caac4;
    uStack_8c = (uint16_t)_UNK_1806caac8;
    local_a8 = CONCAT44(_UNK_1806caab0,_DAT_1806caaac);
    uStack_a0 = CONCAT44(_UNK_1806caab8,_UNK_1806caab4);
    local_b8._8_8_ = _UNK_1806caaa4;
    local_b8._0_8_ = _DAT_1806caa9c;
    uStack_8a = 0x16e;
    uStack_88 = 0x29af8b1cbe8e;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x10e98) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x10e98) = 1;
      func_0x1801b5990(lVal_8 + 0x10e61,local_b8);
      func_0x180673140(&LAB_18042bf60);
    }
    uVal_5 = _UNK_1806b5b0c;
    uVal_4 = _UNK_1806b5b08;
    uVal_3 = _UNK_1806b5b04;
    uVal_2 = _DAT_1806b5b00;
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_8 + 0x10e61);
    if (*(char *)(lVal_8 + 0x10e97) == '\x01') {
      uVal_11 = *(uint *)(lVal_8 + 0x10e65) ^ _UNK_1806b5b04;
      uVal_12 = *(uint *)(lVal_8 + 0x10e69) ^ _UNK_1806b5b08;
      uVal_13 = *(uint *)(lVal_8 + 0x10e6d) ^ _UNK_1806b5b0c;
      *_Str = *_Str ^ _DAT_1806b5b00;
      *(uint *)(lVal_8 + 0x10e65) = uVal_11;
      *(uint *)(lVal_8 + 0x10e69) = uVal_12;
      *(uint *)(lVal_8 + 0x10e6d) = uVal_13;
      *(uint *)(lVal_8 + 0x10e71) = *(uint *)(lVal_8 + 0x10e71) ^ uVal_2;
      *(uint *)(lVal_8 + 0x10e75) = *(uint *)(lVal_8 + 0x10e75) ^ uVal_3;
      *(uint *)(lVal_8 + 0x10e79) = *(uint *)(lVal_8 + 0x10e79) ^ uVal_4;
      *(uint *)(lVal_8 + 0x10e7d) = *(uint *)(lVal_8 + 0x10e7d) ^ uVal_5;
      *(uint *)(lVal_8 + 0x10e81) = *(uint *)(lVal_8 + 0x10e81) ^ uVal_2;
      *(uint *)(lVal_8 + 0x10e85) = *(uint *)(lVal_8 + 0x10e85) ^ uVal_3;
      *(uint *)(lVal_8 + 0x10e89) = *(uint *)(lVal_8 + 0x10e89) ^ uVal_4;
      *(uint *)(lVal_8 + 0x10e8d) = *(uint *)(lVal_8 + 0x10e8d) ^ uVal_5;
      *(uint *)(lVal_8 + 0x10e91) = *(uint *)(lVal_8 + 0x10e91) ^ 0xe569d1dd;
      *(byte *)(lVal_8 + 0x10e95) = *(byte *)(lVal_8 + 0x10e95) ^ 0xcb;
      *(byte *)(lVal_8 + 0x10e96) = *(byte *)(lVal_8 + 0x10e96) ^ 0x29;
      *(uint8_t *)(lVal_8 + 0x10e97) = 0;
    }
    local_48 = (uint8_t  [16])0x0;
    local_58 = (uint8_t  [16])0x0;
    sz_6 = strlen((char *)_Str);
    if ((int64_t)sz_6 < 0) goto LAB_180376d7c;
    if (sz_6 < 0x10) {
      uVal_10 = 0xf;
      pU64_9 = local_58;
    }
    else {
      uVal_7 = sz_6 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_7) {
        uVal_10 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        pU64_9 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_10 + 0x28);
        pU64_9 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_9 + -8) = lVal_8;
      }
      local_58._0_8_ = pU64_9;
    }
    local_48._8_8_ = uVal_10;
    local_48._0_8_ = sz_6;
    func_0x1806aa960(pU64_9,_Str,sz_6);
    pU64_9[sz_6] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x10ea8) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x10ea8) = 1;
      *(uint64_t *)(lVal_8 + 0x10ea0) = 0x1075da28d1db4ae;
      func_0x180673140(&LAB_18042bfa0);
    }
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_8 + 0x10ea0);
    if (*(char *)(lVal_8 + 0x10ea7) == '\x01') {
      *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_8 + 0x10ea5) << 8,*(uint32_t *)pU64_1) |
                (uint64_t)*(byte *)(lVal_8 + 0x10ea4) << 0x20) ^ SUB168(_DAT_1806b5230,0);
    }
    local_b8 = (uint8_t  [16])0x0;
    sz_6 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_6) {
      if (sz_6 < 0x10) {
        pU64_9 = local_b8;
        uVal_10 = 0xf;
      }
      else {
        uVal_7 = sz_6 | 0xf;
        uVal_10 = 0x16;
        if (0x16 < uVal_7) {
          uVal_10 = uVal_7;
        }
        if (uVal_7 < 0xfff) {
          pU64_9 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
        }
        else {
          lVal_8 = func_0x180672de0(uVal_10 + 0x28);
          pU64_9 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_9 + -8) = lVal_8;
        }
        local_b8._0_8_ = pU64_9;
      }
      local_a8 = sz_6;
      uStack_a0 = uVal_10;
      func_0x1806aa960(pU64_9,pU64_1,sz_6);
      pU64_9[sz_6] = 0;
      func_0x1804c9aa0(param_1,local_b8,local_58,local_78);
      if (0xf < uStack_a0) {
        uVal_10 = uStack_a0 + 1;
        lVal_8 = local_b8._0_8_;
        if (0xfff < uVal_10) {
          lVal_8 = *(int64_t *)(local_b8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_8)) goto LAB_180376d88;
          uVal_10 = uStack_a0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_8,uVal_10);
      }
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_10 = local_48._8_8_ + 1;
        lVal_8 = local_58._0_8_;
        if (0xfff < uVal_10) {
          lVal_8 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_8)) goto LAB_180376d88;
          uVal_10 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_8,uVal_10);
      }
      if (0xf < local_60) {
        uVal_10 = local_60 + 1;
        lVal_8 = local_78._0_8_;
        if (0xfff < uVal_10) {
          lVal_8 = *(int64_t *)(local_78._0_8_ + -8);
          if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_8)) goto LAB_180376d88;
          uVal_10 = local_60 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_8,uVal_10);
      }
      *param_1 = &PTR_LAB_1806c9710;
      return param_1;
    }
  }
  func_0x18007ba70();
LAB_180376d88:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180376d90
void Unwind_180376d90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180376dc0
void Unwind_180376dc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180376df0
void Unwind_180376df0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180376e20
void Unwind_180376e20(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10e98) = 0;
  return;
}

// Unwind@180379250
void Unwind_180379250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2f0);
  return;
}

// Unwind@1803792a0
void Unwind_1803792a0(void)
{
  func_0x180672f60(&DAT_1808400d8);
  return;
}

// Unwind@1803792f0
void Unwind_1803792f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180379340
void Unwind_180379340(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@180379390
void Unwind_180379390(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  return;
}

// Unwind@1803793e0
void Unwind_1803793e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}
