#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x1804490d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804490d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9524;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9520;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9528;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c952c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x5dad8b05;
    param_1[1][4] = param_1[1][4] ^ 0xc5;
    param_1[1][5] = param_1[1][5] ^ 0xb1;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x180449130
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180449130(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806c9534;
    uVal_3 = param_1[2] ^ _UNK_1806c9538;
    uVal_4 = param_1[3] ^ _UNK_1806c953c;
    *param_1 = *param_1 ^ _DAT_1806c9530;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806c9540;
  }
  return;
}

// func_0x180449220
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180449220(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806c9554;
    uVal_3 = param_1[2] ^ _UNK_1806c9558;
    uVal_4 = param_1[3] ^ _UNK_1806c955c;
    *param_1 = *param_1 ^ _DAT_1806c9550;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806c9560;
  }
  return;
}

// func_0x1804493a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804493a0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c9574;
    uVal_2 = param_1[2] ^ _UNK_1806c9578;
    uVal_3 = param_1[3] ^ _UNK_1806c957c;
    *param_1 = *param_1 ^ _DAT_1806c9570;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806c9580,0);
  }
  return;
}

// func_0x180449410
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180449410(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9594;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9590;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9598;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c959c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xa9af1f9f19e1b389;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x19e1b389;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x180449470
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180449470(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806c95ac;
  uVal_9 = _UNK_1806c95a8;
  uVal_8 = _UNK_1806c95a4;
  uVal_7 = _DAT_1806c95a0;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c95a4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c95a0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c95a8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c95ac;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0xf5;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x1804494d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804494d0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806c95bc;
  uVal_9 = _UNK_1806c95b8;
  uVal_8 = _UNK_1806c95b4;
  uVal_7 = _DAT_1806c95b0;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c95b4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c95b0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c95b8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c95bc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x5d;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x180449530
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180449530(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c95c4;
    uVal_2 = param_1[2] ^ _UNK_1806c95c8;
    uVal_3 = param_1[3] ^ _UNK_1806c95cc;
    *param_1 = *param_1 ^ _DAT_1806c95c0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806c95d0,0);
  }
  return;
}

// func_0x1804495b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804495b0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c95e4;
    uVal_2 = param_1[2] ^ _UNK_1806c95e8;
    uVal_3 = param_1[3] ^ _UNK_1806c95ec;
    *param_1 = *param_1 ^ _DAT_1806c95e0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806c95f0,0);
  }
  return;
}

// func_0x180449660
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180449660(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c9604;
    uVal_2 = param_1[2] ^ _UNK_1806c9608;
    uVal_3 = param_1[3] ^ _UNK_1806c960c;
    *param_1 = *param_1 ^ _DAT_1806c9600;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806c9610,0);
  }
  return;
}

// func_0x1804496e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804496e0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c9624;
    uVal_2 = param_1[2] ^ _UNK_1806c9628;
    uVal_3 = param_1[3] ^ _UNK_1806c962c;
    *param_1 = *param_1 ^ _DAT_1806c9620;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806c9630,0);
  }
  return;
}

// func_0x180449760
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180449760(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c9644;
    uVal_2 = param_1[2] ^ _UNK_1806c9648;
    uVal_3 = param_1[3] ^ _UNK_1806c964c;
    *param_1 = *param_1 ^ _DAT_1806c9640;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x872d5f4385792575;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806c9650,0);
  }
  return;
}

// func_0x1804497e0
int64_t * func_0x1804497e0(int64_t *param_1,int64_t *param_2,int64_t *param_3)
{
  int *pInt_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  func_ptr_t fnPtr_4;
  byte bFlag_5;
  char ch_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t lVal_9;
  uint uVal_10;
  int64_t local_68;
  uint local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVal_8 = *param_1;
  local_58 = param_1;
  pLong_7 = (int64_t *)func_0x180672de0(0x30);
  *(uint8_t (*)[16])(pLong_7 + 4) = ZEXT816(0);
  uVal_10 = 0;
  if (param_3[1] == 0) {
    lVal_9 = 0;
  }
  else {
    LOCK();
    pInt_1 = (int *)(param_3[1] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    lVal_9 = param_3[1];
  }
  pLong_7[4] = *param_3;
  pLong_7[5] = lVal_9;
  *pLong_7 = lVal_8;
  pLong_7[1] = lVal_8;
  pLong_7[2] = lVal_8;
  *(uint16_t *)(pLong_7 + 3) = 0;
  lVal_8 = *param_1;
  lVal_9 = *(int64_t *)(lVal_8 + 8);
  lVal_3 = lVal_9;
  local_50 = pLong_7;
  if (*(char *)(lVal_9 + 0x19) == '\0') {
    do {
      lVal_9 = lVal_3;
      bFlag_5 = func_0x180449a00(param_1,lVal_9 + 0x20,pLong_7 + 4);
      if (bFlag_5 == 0) {
        lVal_8 = lVal_9;
      }
      lVal_3 = *(int64_t *)(lVal_9 + (uint64_t)bFlag_5 * 0x10);
    } while (*(char *)(lVal_3 + 0x19) == '\0');
    uVal_10 = (uint)(bFlag_5 ^ 1);
    ch_6 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_6 = *(char *)(lVal_8 + 0x19);
  }
  if ((ch_6 == '\0') && (ch_6 = func_0x180449a00(param_1,pLong_7 + 4,lVal_8 + 0x20), ch_6 == '\0')) {
    *param_2 = lVal_8;
    *(uint8_t *)(param_2 + 1) = 0;
    pLong_7 = (int64_t *)pLong_7[5];
    if (pLong_7 != (int64_t *)0x0) {
      LOCK();
      pLong_2 = pLong_7 + 1;
      *(int *)pLong_2 = *(int *)pLong_2 + -1;
      UNLOCK();
      if (*(int *)pLong_2 == 0) {
        (**(func_ptr_t *)*pLong_7)(pLong_7);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
    if (local_50 != (int64_t *)0x0) {
      thunk_FUN_180695dd0(local_50,0x30);
    }
  }
  else {
    if (param_1[1] == 0x555555555555555) {
      func_0x1800a17e0();
      fnPtr_4 = (func_ptr_t )swi(3);
      pLong_7 = (int64_t *)(*fnPtr_4)();
      return pLong_7;
    }
    local_68 = lVal_9;
    local_60 = uVal_10;
    lVal_8 = func_0x1800a1550(param_1,&local_68,pLong_7);
    *param_2 = lVal_8;
    *(uint8_t *)(param_2 + 1) = 1;
  }
  return param_2;
}

// Unwind@180449960
void Unwind_180449960(uint64_t param_1,int64_t param_2)
{
  func_0x1804499a0(param_2 + 0x30);
  return;
}

// func_0x1804499a0
void func_0x1804499a0(int64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  
  if (*(int64_t *)(param_1 + 8) != 0) {
    pLong_3 = *(int64_t **)(*(int64_t *)(param_1 + 8) + 0x28);
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
    if (*(int64_t *)(param_1 + 8) != 0) {
      thunk_FUN_180695dd0(*(int64_t *)(param_1 + 8),0x30);
      return;
    }
  }
  return;
}

// func_0x180449a00
bool func_0x180449a00(uint64_t param_1,int64_t **param_2,int64_t **param_3)
{
  bool bFlag_1;
  int iVal_2;
  uint64_t ***ptr3_U64_3;
  uint64_t ***_Buf1;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t ***local_88 [2];
  uint64_t local_78;
  uint64_t local_70;
  uint64_t ***local_68 [2];
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  (**(func_ptr_t *)(**param_3 + 8))(*param_3,local_68);
  (**(func_ptr_t *)(**param_2 + 8))(*param_2,local_88);
  uVal_5 = local_50;
  ptr3_U64_3 = local_68;
  if (0xf < local_50) {
    ptr3_U64_3 = local_68[0];
  }
  _Buf1 = local_88;
  if (0xf < local_70) {
    _Buf1 = local_88[0];
  }
  uVal_4 = local_78;
  if (local_58 < local_78) {
    uVal_4 = local_58;
  }
  iVal_2 = memcmp(_Buf1,ptr3_U64_3,uVal_4);
  if (0xf < local_70) {
    uVal_5 = local_70 + 1;
    ptr3_U64_3 = local_88[0];
    if (0xfff < uVal_5) {
      ptr3_U64_3 = (uint64_t ***)local_88[0][-1];
      if (0x1f < (uint64_t)((int64_t)local_88[0] + (-8 - (int64_t)ptr3_U64_3))) goto LAB_180449b13;
      uVal_5 = local_70 + 0x28;
    }
    thunk_FUN_180695dd0(ptr3_U64_3,uVal_5);
    uVal_5 = local_50;
  }
  if (0xf < uVal_5) {
    uVal_4 = uVal_5 + 1;
    ptr3_U64_3 = local_68[0];
    if (0xfff < uVal_4) {
      ptr3_U64_3 = (uint64_t ***)local_68[0][-1];
      if (0x1f < (uint64_t)((int64_t)local_68[0] + (-8 - (int64_t)ptr3_U64_3))) {
LAB_180449b13:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_5 + 0x28;
    }
    thunk_FUN_180695dd0(ptr3_U64_3,uVal_4);
  }
  bFlag_1 = iVal_2 < 0;
  if (iVal_2 == 0) {
    bFlag_1 = local_78 < local_58;
  }
  return bFlag_1;
}

// Unwind@180449b20
void Unwind_180449b20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x18044a2b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044a2b0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806c966c;
  uVal_9 = _UNK_1806c9668;
  uVal_8 = _UNK_1806c9664;
  uVal_7 = _DAT_1806c9660;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9664;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9660;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9668;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c966c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x33;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x18044a2e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044a2e0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2c9c;
  uVal_9 = _UNK_1806b2c98;
  uVal_8 = _UNK_1806b2c94;
  uVal_7 = _DAT_1806b2c90;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2c9c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806b68f0,0);
  }
  return;
}

// func_0x18044a330
int64_t ** func_0x18044a330(int64_t param_1,int64_t **param_2,int64_t **param_3)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t **ptr2_Long_3;
  int64_t *pLong_4;
  int64_t **ptr2_Long_5;
  uint64_t uVal_6;
  int64_t *pLong_7;
  int64_t *pLong_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  int64_t **ptr2_Long_13;
  int64_t **ptr2_Long_14;
  int64_t **ptr2_Long_15;
  int64_t local_58;
  
  if (param_2 == param_3) {
    return param_3;
  }
  pLong_1 = param_2[4];
  if (param_2[5] < (int64_t *)0x10) {
    ptr2_Long_5 = param_2 + 2;
    local_58 = *(int64_t *)(param_1 + 0x18);
    if (pLong_1 == (int64_t *)0x0) goto LAB_18044a3a6;
LAB_18044a36f:
    uVal_6 = (uint64_t)((uint)pLong_1 & 3);
    if (pLong_1 < (int64_t *)0x4) {
      uVal_9 = 0xcbf29ce484222325;
      uVal_12 = 0;
    }
    else {
      uVal_9 = 0xcbf29ce484222325;
      uVal_12 = 0;
      do {
        uVal_9 = ((uint64_t)*(byte *)((int64_t)ptr2_Long_5 + uVal_12 + 3) ^
                ((uint64_t)*(byte *)((int64_t)ptr2_Long_5 + uVal_12 + 2) ^
                ((uint64_t)*(byte *)((int64_t)ptr2_Long_5 + uVal_12 + 1) ^
                (*(byte *)((int64_t)ptr2_Long_5 + uVal_12) ^ uVal_9) * 0x100000001b3) * 0x100000001b3) *
                0x100000001b3) * 0x100000001b3;
        uVal_12 = uVal_12 + 4;
      } while (((uint64_t)pLong_1 & 0xfffffffffffffffc) != uVal_12);
      if (uVal_6 == 0) goto LAB_18044a437;
    }
    uVal_11 = 0;
    do {
      uVal_9 = (*(byte *)((int64_t)ptr2_Long_5 + uVal_11 + uVal_12) ^ uVal_9) * 0x100000001b3;
      uVal_11 = uVal_11 + 1;
    } while (uVal_6 != uVal_11);
  }
  else {
    ptr2_Long_5 = (int64_t **)param_2[2];
    local_58 = *(int64_t *)(param_1 + 0x18);
    if (pLong_1 != (int64_t *)0x0) goto LAB_18044a36f;
LAB_18044a3a6:
    uVal_9 = 0xcbf29ce484222325;
  }
LAB_18044a437:
  uVal_2 = *(uint64_t *)(param_1 + 8);
  ptr2_Long_5 = (int64_t **)param_2[1];
  lVal_10 = (uVal_9 & *(uint64_t *)(param_1 + 0x30)) * 0x10;
  ptr2_Long_3 = *(int64_t ***)(local_58 + lVal_10);
  ptr2_Long_15 = *(int64_t ***)(local_58 + 8 + lVal_10);
  ptr2_Long_14 = param_2;
  if (ptr2_Long_3 == param_2) {
    do {
      ptr2_Long_13 = (int64_t **)*ptr2_Long_14;
      pLong_1 = ptr2_Long_14[5];
      if (&DAT_0000000f < pLong_1) {
        pLong_4 = ptr2_Long_14[2];
        pLong_8 = (int64_t *)((int64_t)pLong_1 + 1);
        pLong_7 = pLong_4;
        if ((int64_t *)0xfff < pLong_8) {
          pLong_7 = (int64_t *)pLong_4[-1];
          if (0x1f < (uint64_t)((int64_t)pLong_4 + (-8 - (int64_t)pLong_7))) goto LAB_18044a765;
          pLong_8 = pLong_1 + 5;
        }
        thunk_FUN_180695dd0(pLong_7,pLong_8);
      }
      ptr2_Long_14[4] = (int64_t *)0x0;
      ptr2_Long_14[5] = (int64_t *)&DAT_0000000f;
      *(uint8_t *)(ptr2_Long_14 + 2) = 0;
      thunk_FUN_180695dd0(ptr2_Long_14,0x38);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_14 == ptr2_Long_15) goto LAB_18044a569;
      ptr2_Long_14 = ptr2_Long_13;
    } while (ptr2_Long_13 != param_3);
    *(int64_t ***)(local_58 + lVal_10) = ptr2_Long_13;
  }
  else {
    do {
      ptr2_Long_13 = (int64_t **)*ptr2_Long_14;
      pLong_1 = ptr2_Long_14[5];
      if (&DAT_0000000f < pLong_1) {
        pLong_4 = ptr2_Long_14[2];
        pLong_8 = (int64_t *)((int64_t)pLong_1 + 1);
        pLong_7 = pLong_4;
        if ((int64_t *)0xfff < pLong_8) {
          pLong_7 = (int64_t *)pLong_4[-1];
          if (0x1f < (uint64_t)((int64_t)pLong_4 + (-8 - (int64_t)pLong_7))) {
LAB_18044a765:
            do {
              invalidInstructionException();
            } while( true );
          }
          pLong_8 = pLong_1 + 5;
        }
        thunk_FUN_180695dd0(pLong_7,pLong_8);
      }
      ptr2_Long_14[4] = (int64_t *)0x0;
      ptr2_Long_14[5] = (int64_t *)&DAT_0000000f;
      *(uint8_t *)(ptr2_Long_14 + 2) = 0;
      thunk_FUN_180695dd0(ptr2_Long_14,0x38);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_14 == ptr2_Long_15) goto LAB_18044a569;
      ptr2_Long_14 = ptr2_Long_13;
    } while (ptr2_Long_13 != param_3);
  }
LAB_18044a745:
  *ptr2_Long_5 = (int64_t *)ptr2_Long_13;
  ptr2_Long_13[1] = (int64_t *)ptr2_Long_5;
  return param_3;
LAB_18044a569:
  if (ptr2_Long_3 == param_2) {
    *(uint64_t *)(local_58 + lVal_10) = uVal_2;
    *(uint64_t *)(local_58 + 8 + lVal_10) = uVal_2;
  }
  else {
    *(int64_t ***)(local_58 + 8 + lVal_10) = ptr2_Long_5;
  }
  while (ptr2_Long_13 != param_3) {
    if (ptr2_Long_13[5] < (int64_t *)0x10) {
      ptr2_Long_3 = ptr2_Long_13 + 2;
      pLong_1 = ptr2_Long_13[4];
    }
    else {
      ptr2_Long_3 = (int64_t **)ptr2_Long_13[2];
      pLong_1 = ptr2_Long_13[4];
    }
    uVal_9 = 0xcbf29ce484222325;
    if (pLong_1 != (int64_t *)0x0) {
      uVal_6 = (uint64_t)((uint)pLong_1 & 3);
      if (pLong_1 < (int64_t *)0x4) {
        uVal_12 = 0;
        uVal_9 = 0xcbf29ce484222325;
      }
      else {
        uVal_12 = 0;
        uVal_9 = 0xcbf29ce484222325;
        do {
          uVal_9 = ((uint64_t)*(byte *)((int64_t)ptr2_Long_3 + uVal_12 + 3) ^
                  ((uint64_t)*(byte *)((int64_t)ptr2_Long_3 + uVal_12 + 2) ^
                  ((uint64_t)*(byte *)((int64_t)ptr2_Long_3 + uVal_12 + 1) ^
                  (*(byte *)((int64_t)ptr2_Long_3 + uVal_12) ^ uVal_9) * 0x100000001b3) * 0x100000001b3)
                  * 0x100000001b3) * 0x100000001b3;
          uVal_12 = uVal_12 + 4;
        } while (((uint64_t)pLong_1 & 0xfffffffffffffffc) != uVal_12);
        if (uVal_6 == 0) goto LAB_18044a657;
      }
      uVal_11 = 0;
      do {
        uVal_9 = (*(byte *)((int64_t)ptr2_Long_3 + uVal_11 + uVal_12) ^ uVal_9) * 0x100000001b3;
        uVal_11 = uVal_11 + 1;
      } while (uVal_6 != uVal_11);
    }
LAB_18044a657:
    lVal_10 = (uVal_9 & *(uint64_t *)(param_1 + 0x30)) * 0x10;
    ptr2_Long_3 = *(int64_t ***)(local_58 + 8 + lVal_10);
    ptr2_Long_15 = ptr2_Long_13;
    while( true ) {
      ptr2_Long_13 = (int64_t **)*ptr2_Long_15;
      pLong_1 = ptr2_Long_15[5];
      if (&DAT_0000000f < pLong_1) {
        pLong_4 = ptr2_Long_15[2];
        pLong_8 = (int64_t *)((int64_t)pLong_1 + 1);
        pLong_7 = pLong_4;
        if ((int64_t *)0xfff < pLong_8) {
          pLong_7 = (int64_t *)pLong_4[-1];
          if (0x1f < (uint64_t)((int64_t)pLong_4 + (-8 - (int64_t)pLong_7))) goto LAB_18044a765;
          pLong_8 = pLong_1 + 5;
        }
        thunk_FUN_180695dd0(pLong_7,pLong_8);
      }
      ptr2_Long_15[4] = (int64_t *)0x0;
      ptr2_Long_15[5] = (int64_t *)&DAT_0000000f;
      *(uint8_t *)(ptr2_Long_15 + 2) = 0;
      thunk_FUN_180695dd0(ptr2_Long_15,0x38);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_15 == ptr2_Long_3) break;
      ptr2_Long_15 = ptr2_Long_13;
      if (ptr2_Long_13 == param_3) {
        *(int64_t ***)(local_58 + lVal_10) = ptr2_Long_13;
        goto LAB_18044a745;
      }
    }
    *(uint64_t *)(local_58 + lVal_10) = uVal_2;
    *(uint64_t *)(local_58 + 8 + lVal_10) = uVal_2;
  }
  goto LAB_18044a745;
}

// func_0x18044a770
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044a770(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2d14;
    uVal_2 = param_1[2] ^ _UNK_1806b2d18;
    uVal_3 = param_1[3] ^ _UNK_1806b2d1c;
    *param_1 = *param_1 ^ _DAT_1806b2d10;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b5c40,0);
  }
  return;
}

// func_0x18044a7b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044a7b0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b6494;
    uVal_2 = param_1[2] ^ _UNK_1806b6498;
    uVal_3 = param_1[3] ^ _UNK_1806b649c;
    *param_1 = *param_1 ^ _DAT_1806b6490;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806c9670,0);
  }
  return;
}

// func_0x18044a800
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044a800(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af154;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af150;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af158;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af15c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xb39d8d9f5faff50f;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x18044a830
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044a830(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af164;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af160;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af168;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af16c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xa943db0b319b81ab;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x319b81ab;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x18044a860
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044a860(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af274;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af270;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af278;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af27c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xf56f05ebe3257dfb;
    param_1[1][8] = param_1[1][8] ^ 0xfb;
    param_1[1][9] = param_1[1][9] ^ 0x7d;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x18044a890
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044a890(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806af284;
    uVal_2 = param_1[2] ^ _UNK_1806af288;
    uVal_3 = param_1[3] ^ _UNK_1806af28c;
    *param_1 = *param_1 ^ _DAT_1806af280;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806c9680,0);
  }
  return;
}

// func_0x18044a8e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044a8e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9694;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9690;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9698;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c969c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xb373b3395d3b0745;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x5d3b0745;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x39;
    param_1[1][0xd] = param_1[1][0xd] ^ 0xb3;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x18044a920
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044a920(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c96a4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c96a0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c96a8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c96ac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xabcb91c1b3e91597;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x18044a950
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044a950(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b6164;
    uVal_2 = param_1[2] ^ _UNK_1806b6168;
    uVal_3 = param_1[3] ^ _UNK_1806b616c;
    *param_1 = *param_1 ^ _DAT_1806b6160;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b6660,0);
  }
  return;
}

// func_0x18044a990
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044a990(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2cac;
  uVal_9 = _UNK_1806b2ca8;
  uVal_8 = _UNK_1806b2ca4;
  uVal_7 = _DAT_1806b2ca0;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ca4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ca0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ca8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cac;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806b69b0,0);
  }
  return;
}

// func_0x18044a9e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044a9e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae4d4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae4d0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae4d8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae4dc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xa1d573c5;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x18044aa00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044aa00(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6494;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6490;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6498;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b649c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xd93d3145;
    param_1[1][4] = param_1[1][4] ^ 0x27;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18044aa60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044aa60(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2ccc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xc9771b45f9913b87;
    param_1[1][8] = param_1[1][8] ^ 0x87;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x18044aa90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044aa90(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae524;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae520;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae528;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae52c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x297d914f;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x18044aab0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044aab0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b54cc;
  uVal_9 = _UNK_1806b54c8;
  uVal_8 = _UNK_1806b54c4;
  uVal_7 = _DAT_1806b54c0;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b54c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b54c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b54c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b54cc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x2549d30d;
    param_1[2][4] = param_1[2][4] ^ 0x45;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x18044ab70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044ab70(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b6164;
    uVal_2 = param_1[2] ^ _UNK_1806b6168;
    uVal_3 = param_1[3] ^ _UNK_1806b616c;
    *param_1 = *param_1 ^ _DAT_1806b6160;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806c8f10,0);
  }
  return;
}

// func_0x18044abc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044abc0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b5b04;
    uVal_2 = param_1[2] ^ _UNK_1806b5b08;
    uVal_3 = param_1[3] ^ _UNK_1806b5b0c;
    *param_1 = *param_1 ^ _DAT_1806b5b00;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x750729cbe569d1dd;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806be370,0);
  }
  return;
}

// func_0x18044ac10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044ac10(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2914;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2910;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2918;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b291c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x37;
    param_1[1][1] = param_1[1][1] ^ 0xfb;
    param_1[1][2] = 0;
  }
  return;
}

// Unwind@18044b970
void Unwind_18044b970(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  if (*(char *)(param_2 + 0x67) == '\0') {
    pU64_1 = *(uint64_t **)(param_2 + 0x58);
    do {
      pU64_1 = pU64_1 + -4;
      func_0x180001e70(pU64_1);
    } while (pU64_1 != &DAT_180840810);
  }
  return;
}

// Unwind@18044b9c0
void Unwind_18044b9c0(void)
{
  func_0x1803f1b50(&DAT_1808400a0);
  return;
}

// Unwind@18044ba00
void Unwind_18044ba00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x13228) = 0;
  *(uint8_t *)(param_2 + 0x67) = 0;
  *(uint64_t **)(param_2 + 0x58) = &DAT_180840830;
  return;
}

// Unwind@18044ba60
void Unwind_18044ba60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x13258) = 0;
  *(uint8_t *)(param_2 + 0x67) = 0;
  *(uint64_t **)(param_2 + 0x58) = &DAT_180840850;
  return;
}

// func_0x18044bb40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044bb40(uint64_t *param_1,uint64_t param_2,float *param_3)
{
  uint64_t uVal_1;
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint64_t uVal_4;
  float fVal_7;
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  float fVal_8;
  float fVal_11;
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  float fVal_12;
  float fVal_13;
  float fVal_14;
  float fVal_15;
  float fVal_16;
  float fVal_17;
  float fVal_19;
  uint8_t auArr_18 [16];
  float fVal_20;
  
  auArr_9 = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 1) = auArr_9;
  *param_1 = &PTR_LAB_1806cfb80;
  *(uint8_t (*)[16])(param_1 + 4) = auArr_9;
  *(uint8_t (*)[16])(param_1 + 6) = auArr_9;
  *(uint8_t (*)[16])(param_1 + 8) = auArr_9;
  *(uint8_t (*)[16])(param_1 + 10) = auArr_9;
  *(uint8_t (*)[16])(param_1 + 0xc) = auArr_9;
  *(uint8_t (*)[16])(param_1 + 0xe) = auArr_9;
  *(uint8_t (*)[16])(param_1 + 0x10) = auArr_9;
  *(uint8_t (*)[16])(param_1 + 0x12) = auArr_9;
  *(uint8_t (*)[16])(param_1 + 0x14) = auArr_9;
  *(uint8_t (*)[16])(param_1 + 0x16) = auArr_9;
  *(uint8_t (*)[16])(param_1 + 0x18) = auArr_9;
  *(uint8_t (*)[16])(param_1 + 0x1a) = auArr_9;
  *(uint64_t *)((int64_t)param_1 + 0xdd) = 0;
  param_1[3] = param_2;
  fVal_12 = *param_3;
  auArr_5._0_8_ = CONCAT44(0,fVal_12);
  auArr_5._8_8_ = 0;
  *(float *)(param_1 + 1) = fVal_12;
  fVal_7 = param_3[1];
  *(float *)((int64_t)param_1 + 0xc) = fVal_7;
  auArr_9 = insertps(ZEXT416((uint)fVal_12),ZEXT416((uint)fVal_7),0x10);
  fVal_8 = auArr_9._0_4_;
  fVal_11 = auArr_9._4_4_;
  fVal_13 = _DAT_1806ce910 + fVal_8;
  fVal_14 = _UNK_1806ce914 + fVal_11;
  fVal_15 = _UNK_1806ce918 + fVal_8;
  fVal_16 = _UNK_1806ce91c + fVal_11;
  fVal_17 = (float)DAT_1806ce920;
  uVal_4 = (uint64_t)DAT_1806ce920 >> 0x20;
  *(float *)(param_1 + 0xc) = fVal_13;
  *(float *)((int64_t)param_1 + 100) = fVal_14;
  *(float *)(param_1 + 0xd) = fVal_17 + fVal_8;
  *(float *)((int64_t)param_1 + 0x6c) = (float)uVal_4 + fVal_11;
  *(float *)(param_1 + 4) = fVal_13;
  *(float *)((int64_t)param_1 + 0x24) = fVal_14;
  *(float *)(param_1 + 5) = fVal_15;
  *(float *)((int64_t)param_1 + 0x2c) = fVal_16;
  param_1[0xe] = CONCAT44((float)((uint64_t)DAT_1806ce930 >> 0x20) + fVal_11,
                          (float)DAT_1806ce930 + fVal_8);
  fVal_17 = _DAT_1806ce940 + fVal_8;
  fVal_13 = _UNK_1806ce944 + fVal_11;
  fVal_14 = _UNK_1806ce948 + fVal_8;
  fVal_16 = _UNK_1806ce94c + fVal_11;
  *(float *)(param_1 + 6) = DAT_1806b67b4 + fVal_12;
  auArr_2._4_4_ = fVal_13;
  auArr_2._0_4_ = fVal_17;
  auArr_2._8_4_ = fVal_14;
  auArr_2._12_4_ = fVal_16;
  uVal_1 = extractps(auArr_2,3);
  *(uint64_t *)((int64_t)param_1 + 0x34) = uVal_1;
  auArr_3._4_4_ = fVal_13;
  auArr_3._0_4_ = fVal_17;
  auArr_3._8_4_ = fVal_14;
  auArr_3._12_4_ = fVal_16;
  *(uint8_t (*)[16])(param_1 + 0xf) = auArr_3;
  param_1[0x11] =
       CONCAT44((float)((uint64_t)DAT_1806ce950 >> 0x20) + fVal_11,(float)DAT_1806ce950 + fVal_8);
  *(float *)(param_1 + 7) = fVal_15;
  *(float *)(param_1 + 0x12) = fVal_15;
  auArr_9 = insertps(ZEXT416((uint)fVal_7),auArr_5,0x10);
  fVal_13 = auArr_9._0_4_ + _DAT_1806ce960;
  fVal_14 = auArr_9._4_4_ + _UNK_1806ce964;
  fVal_15 = auArr_9._0_4_ + _UNK_1806ce968;
  fVal_16 = auArr_9._4_4_ + _UNK_1806ce96c;
  *(float *)((int64_t)param_1 + 0x94) = fVal_13;
  *(float *)(param_1 + 0x13) = fVal_17;
  *(float *)((int64_t)param_1 + 0x9c) = DAT_1806ce970 + fVal_7;
  param_1[0x14] = CONCAT44(fVal_15,fVal_14);
  *(float *)((int64_t)param_1 + 0x3c) = fVal_13;
  *(float *)(param_1 + 8) = fVal_14;
  *(float *)((int64_t)param_1 + 0x44) = fVal_15;
  *(float *)(param_1 + 9) = fVal_16;
  auArr_18._4_4_ = 0;
  auArr_18._0_4_ = fVal_12;
  auArr_18._8_4_ = fVal_16;
  auArr_18._12_4_ = fVal_16;
  auArr_9 = insertps(auArr_18,ZEXT416((uint)fVal_7),0x10);
  fVal_16 = auArr_9._0_4_ + _DAT_1806ce980;
  fVal_17 = auArr_9._4_4_ + _UNK_1806ce984;
  fVal_19 = auArr_9._8_4_ + _UNK_1806ce988;
  fVal_20 = auArr_9._4_4_ + _UNK_1806ce98c;
  *(float *)((int64_t)param_1 + 0x4c) = DAT_1806ce974 + fVal_7;
  fVal_12 = fVal_8 + _DAT_1806ce990;
  fVal_13 = fVal_11 + _UNK_1806ce994;
  fVal_14 = fVal_8 + _UNK_1806ce998;
  fVal_15 = fVal_11 + _UNK_1806ce99c;
  fVal_8 = fVal_8 + _DAT_1806ce9a0;
  fVal_11 = fVal_11 + _UNK_1806ce9a4;
  *(float *)(param_1 + 0x15) = fVal_16;
  *(float *)((int64_t)param_1 + 0xac) = fVal_17;
  *(float *)(param_1 + 0x16) = fVal_19;
  *(float *)((int64_t)param_1 + 0xb4) = fVal_20;
  param_1[10] = CONCAT44(fVal_11,fVal_8);
  auArr_9._4_4_ = fVal_13;
  auArr_9._0_4_ = fVal_12;
  auArr_9._8_4_ = fVal_14;
  auArr_9._12_4_ = fVal_15;
  *(uint8_t (*)[16])(param_1 + 0x17) = auArr_9;
  auArr_10._8_8_ = 0;
  auArr_10._0_8_ = param_1[1];
  auArr_6._8_8_ = param_1[1];
  auArr_6._0_8_ = auArr_5._0_8_;
  auArr_9 = insertps(auArr_6,ZEXT416((uint)fVal_7),0x10);
  fVal_12 = auArr_9._0_4_ + _DAT_1806ce9b0;
  fVal_7 = auArr_9._4_4_ + _UNK_1806ce9b4;
  fVal_8 = auArr_9._8_4_ + _UNK_1806ce9b8;
  fVal_11 = auArr_9._12_4_ + _UNK_1806ce9bc;
  *(float *)(param_1 + 0xc) = fVal_8;
  *(float *)((int64_t)param_1 + 100) = fVal_11;
  *(float *)(param_1 + 0x19) = fVal_12;
  *(float *)((int64_t)param_1 + 0xcc) = fVal_7;
  *(float *)(param_1 + 0x1a) = fVal_8;
  *(float *)((int64_t)param_1 + 0xd4) = fVal_11;
  auArr_9 = insertps(auArr_10,*(uint32_t *)((int64_t)param_1 + 0xc),0x10);
  param_1[0x1b] = CONCAT44(auArr_9._4_4_ + _UNK_1806ce9c4,auArr_9._0_4_ + _DAT_1806ce9c0);
  return;
}

// Unwind@18044c9a0
void Unwind_18044c9a0(void)
{
  func_0x180672f60(&DAT_180840a40);
  return;
}

// func_0x18044ca00
uint64_t func_0x18044ca00(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x69701e82);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18044ca90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18044ca90(uint64_t *param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4)
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  *param_1 = &PTR_LAB_1806cfbb0;
  uVal_3 = _UNK_1806ce9ec;
  uVal_2 = _UNK_1806ce9e8;
  uVal_1 = _UNK_1806ce9e4;
  *(uint32_t *)(param_1 + 3) = _DAT_1806ce9e0;
  *(uint32_t *)((int64_t)param_1 + 0x1c) = uVal_1;
  *(uint32_t *)(param_1 + 4) = uVal_2;
  *(uint32_t *)((int64_t)param_1 + 0x24) = uVal_3;
  *(uint8_t *)(param_1 + 5) = 0;
  *(uint32_t *)(param_1 + 1) = *param_2;
  *(uint32_t *)((int64_t)param_1 + 0xc) = param_2[1];
  param_1[2] = DAT_1806c9060;
  *(uint32_t *)(param_1 + 3) = param_3;
  *(uint32_t *)((int64_t)param_1 + 0x24) = param_4;
  return;
}

// func_0x18044cae0
void func_0x18044cae0(int64_t param_1,double param_2)
{
  float fVal_1;
  
  fVal_1 = (float)param_2 * *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x24) +
          *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x20) = fVal_1;
  *(float *)(param_1 + 0x1c) = fVal_1;
  *(float *)(param_1 + 0x10) = fVal_1 + fVal_1;
  *(float *)(param_1 + 0x14) = fVal_1 + fVal_1;
  if (*(float *)(param_1 + 0x18) <= fVal_1) {
    *(uint8_t *)(param_1 + 0x28) = 1;
  }
  return;
}

// Unwind@18044cdb0
void Unwind_18044cdb0(void)
{
  func_0x180672f60(&DAT_180840cc0);
  return;
}

// func_0x18044ce10
uint64_t * func_0x18044ce10(int64_t param_1,uint64_t *param_2)
{
  *param_2 = *(uint64_t *)(param_1 + 8);
  return param_2;
}

// func_0x18044ce20
uint32_t func_0x18044ce20(int64_t param_1)
{
  return *(uint32_t *)(param_1 + 0x1c);
}

// Unwind@18044d620
void Unwind_18044d620(void)
{
  func_0x180672f60(&DAT_180840cd0);
  return;
}

// func_0x18044d680
uint64_t func_0x18044d680(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x70);
}

// func_0x18044d690
uint64_t * func_0x18044d690(int64_t param_1,uint64_t *param_2)
{
  *param_2 = CONCAT44((float)((uint64_t)*(uint64_t *)(param_1 + 0x10) >> 0x20) *
                      DAT_1806b28a0._4_4_ + (float)((uint64_t)*(uint64_t *)(param_1 + 8) >> 0x20)
                      ,(float)*(uint64_t *)(param_1 + 0x10) * (float)DAT_1806b28a0 +
                       (float)*(uint64_t *)(param_1 + 8));
  return param_2;
}

// Unwind@18044df70
void Unwind_18044df70(void)
{
  func_0x180672f60(&DAT_180840ce0);
  return;
}

// func_0x18044dfc0
uint8_t func_0x18044dfc0(int64_t param_1)
{
  return *(uint8_t *)(param_1 + 0x92);
}

// func_0x18044dfe0
void func_0x18044dfe0(int64_t param_1)
{
  if (*(char *)(param_1 + 0x30) == '\0') {
    *(uint64_t *)(param_1 + 0x28) = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x70);
    *(uint8_t *)(param_1 + 0x30) = 1;
  }
  return;
}

// func_0x18044e000
uint32_t func_0x18044e000(int64_t param_1)
{
  return *(uint32_t *)(param_1 + 0x48);
}

// func_0x18044e010
float func_0x18044e010(int64_t param_1)
{
  return *(float *)(param_1 + 0x48) * DAT_1806b67dc;
}

// func_0x18044e020
void func_0x18044e020(uint64_t *param_1,uint64_t param_2,uint32_t *param_3,uint64_t *param_4, uint32_t param_5)
{
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  *param_1 = &PTR_LAB_1806cfc10;
  param_1[4] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x25) = 0;
  param_1[3] = param_2;
  param_1[4] = *param_4;
  *(uint32_t *)(param_1 + 1) = *param_3;
  *(uint32_t *)((int64_t)param_1 + 0xc) = param_3[1];
  *(uint32_t *)(param_1 + 5) = param_5;
  param_1[2] = DAT_1806cea80;
  return;
}

// Unwind@18044e770
void Unwind_18044e770(void)
{
  func_0x180672f60(&DAT_180840cf0);
  return;
}

// func_0x18044e830
void func_0x18044e830(uint64_t param_1,uint64_t *param_2,ushort param_3,uint32_t param_4, float param_5,uint8_t param_6,int param_7)
{
  func_ptr_t fnPtr_1;
  float fVal_2;
  float fVal_3;
  float fVal_4;
  float fVal_5;
  uint32_t uVal_6;
  float fVal_7;
  float fVal_8;
  uint8_t auStack_128 [32];
  float local_108;
  uint32_t local_100;
  uint8_t local_f8;
  uint64_t local_f0;
  uint32_t local_e8;
  uint32_t local_e4;
  uint64_t local_e0;
  
  fVal_3 = DAT_1806b28b0;
  fVal_2 = DAT_1806aeae0;
  local_e0 = DAT_18083cf40 ^ (uint64_t)auStack_128;
  fVal_4 = DAT_1806aeae4 * param_5;
  fVal_7 = DAT_1806b28b0 / (float)(uint)param_3;
  fVal_8 = 0.0;
  do {
    fVal_5 = (float)func_0x18068afa0(fVal_8 + (float)param_7,fVal_3);
    uVal_6 = func_0x18068dd00(fVal_5 * fVal_2);
    local_e4 = func_0x18068a470(fVal_5 * fVal_2);
    local_f0 = CONCAT44((float)((uint64_t)*param_2 >> 0x20) - fVal_4,(float)*param_2 - fVal_4);
    local_f8 = param_6;
    local_108 = param_5;
    local_100 = param_4;
    local_e8 = uVal_6;
    func_0x18062a030(&DAT_180841960,param_1,&local_f0,&local_e8);
    fVal_8 = fVal_8 + fVal_7;
  } while (fVal_8 < fVal_3);
  if (DAT_18083cf40 == (local_e0 ^ (uint64_t)auStack_128)) {
    return;
  }
  func_0x180673080(local_e0 ^ (uint64_t)auStack_128);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18044ea10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18044ea10(uint64_t *param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint8_t (*pArr16_3)[16];
  int64_t lVal_4;
  int64_t *pLong_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint64_t *pU64_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  int64_t local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_1 = &PTR_LAB_1806cfc60;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  param_1[3] = 0;
  uVal_8 = _UNK_1806ceabc;
  uVal_7 = _UNK_1806ceab8;
  uVal_6 = _UNK_1806ceab4;
  *(uint32_t *)(param_1 + 4) = _DAT_1806ceab0;
  *(uint32_t *)((int64_t)param_1 + 0x24) = uVal_6;
  *(uint32_t *)(param_1 + 5) = uVal_7;
  *(uint32_t *)((int64_t)param_1 + 0x2c) = uVal_8;
  uVal_8 = _UNK_1806ceacc;
  uVal_7 = _UNK_1806ceac8;
  uVal_6 = _UNK_1806ceac4;
  *(uint32_t *)(param_1 + 6) = _DAT_1806ceac0;
  *(uint32_t *)((int64_t)param_1 + 0x34) = uVal_6;
  *(uint32_t *)(param_1 + 7) = uVal_7;
  *(uint32_t *)((int64_t)param_1 + 0x3c) = uVal_8;
  *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 10) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0xc) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0xe) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
  *(uint64_t *)((int64_t)param_1 + 0x8e) = 0;
  pU64_9 = (uint64_t *)func_0x180672de0(0x68);
  pU64_9[1] = 0x100000001;
  *pU64_9 = &PTR_FUN_1806d5b30;
  DAT_1808419e0 = pU64_9 + 2;
  pU64_9[2] = &PTR_LAB_1806cfbe0;
  *(uint8_t *)(pU64_9 + 8) = 0;
  *(uint8_t *)(pU64_9 + 10) = 0;
  pU64_9[6] = 0;
  *(uint16_t *)(pU64_9 + 0xc) = 0;
  pU64_9[5] = param_1;
  pU64_9[0xb] = DAT_1806cea00;
  uVal_8 = _UNK_1806ceadc;
  uVal_7 = _UNK_1806cead8;
  uVal_6 = _UNK_1806cead4;
  *(uint32_t *)(pU64_9 + 3) = _DAT_1806cead0;
  *(uint32_t *)((int64_t)pU64_9 + 0x1c) = uVal_6;
  *(uint32_t *)(pU64_9 + 4) = uVal_7;
  *(uint32_t *)((int64_t)pU64_9 + 0x24) = uVal_8;
  pLong_5 = DAT_1808419e8;
  if (DAT_1808419e8 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = DAT_1808419e8 + 1;
    DAT_1808419e8 = pU64_9;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    pU64_9 = DAT_1808419e8;
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*pLong_5)(pLong_5);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_5 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      pU64_9 = DAT_1808419e8;
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_5 + 8))(pLong_5);
        pU64_9 = DAT_1808419e8;
      }
    }
  }
  DAT_1808419e8 = pU64_9;
  uVal_10 = func_0x1800576d0();
  param_1[8] = uVal_10;
  if (DAT_180841a1a == '\0') {
    func_0x180634800((uint8_t (*)[16])&local_48);
    pArr16_3 = (uint8_t (*)[16])(param_1 + 1);
    if (pArr16_3 == (uint8_t (*)[16])&local_48) {
      lVal_12 = CONCAT44(uStack_44,local_48);
      if (lVal_12 != 0) {
        if (lVal_12 == CONCAT44(uStack_3c,uStack_40)) {
          uVal_11 = local_38 - lVal_12;
        }
        else {
          do {
            pLong_5 = *(int64_t **)(lVal_12 + 0x40);
            if (pLong_5 != (int64_t *)0x0) {
              (**(func_ptr_t *)(*pLong_5 + 0x20))(pLong_5,(int64_t *)(lVal_12 + 8) != pLong_5);
              *(uint64_t *)(lVal_12 + 0x40) = 0;
            }
            lVal_12 = lVal_12 + 0x48;
          } while (lVal_12 != CONCAT44(uStack_3c,uStack_40));
          lVal_12 = CONCAT44(uStack_44,local_48);
          uVal_11 = local_38 - lVal_12;
        }
        if (0xfff < uVal_11) {
          if (0x1f < (uint64_t)((lVal_12 + -8) - *(int64_t *)(lVal_12 + -8))) goto LAB_18044ecbb;
          uVal_11 = uVal_11 + 0x27;
          lVal_12 = *(int64_t *)(lVal_12 + -8);
        }
        thunk_FUN_180695dd0(lVal_12,uVal_11);
      }
    }
    else {
      lVal_12 = *(int64_t *)*pArr16_3;
      if (lVal_12 != 0) {
        lVal_4 = param_1[2];
        if (lVal_12 == lVal_4) {
          uVal_11 = param_1[3] - lVal_12;
        }
        else {
          do {
            pLong_5 = *(int64_t **)(lVal_12 + 0x40);
            if (pLong_5 != (int64_t *)0x0) {
              (**(func_ptr_t *)(*pLong_5 + 0x20))(pLong_5,(int64_t *)(lVal_12 + 8) != pLong_5);
              *(uint64_t *)(lVal_12 + 0x40) = 0;
            }
            lVal_12 = lVal_12 + 0x48;
          } while (lVal_12 != lVal_4);
          lVal_12 = *(int64_t *)*pArr16_3;
          uVal_11 = param_1[3] - lVal_12;
        }
        if (0xfff < uVal_11) {
          if (0x1f < (uint64_t)((lVal_12 + -8) - *(int64_t *)(lVal_12 + -8))) {
LAB_18044ecbb:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_11 = uVal_11 + 0x27;
          lVal_12 = *(int64_t *)(lVal_12 + -8);
        }
        thunk_FUN_180695dd0(lVal_12,uVal_11);
        *pArr16_3 = ZEXT816(0);
        param_1[3] = 0;
      }
      *(uint32_t *)(param_1 + 1) = local_48;
      *(uint32_t *)((int64_t)param_1 + 0xc) = uStack_44;
      *(uint32_t *)(param_1 + 2) = uStack_40;
      *(uint32_t *)((int64_t)param_1 + 0x14) = uStack_3c;
      param_1[3] = local_38;
    }
    uVal_10 = func_0x1800576d0();
    param_1[9] = uVal_10;
  }
  uVal_10 = func_0x1800576d0();
  param_1[0xc] = uVal_10;
  return param_1;
}

// Unwind@18044ecc0
void Unwind_18044ecc0(uint64_t param_1,int64_t param_2)
{
  func_0x18044ecf0(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x18044ecf0
void func_0x18044ecf0(uint8_t (*param_1)[16])
{
  int64_t lVal_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  lVal_4 = *(int64_t *)*param_1;
  if (lVal_4 != 0) {
    lVal_1 = *(int64_t *)(*param_1 + 8);
    if (lVal_4 == lVal_1) {
      uVal_3 = *(int64_t *)param_1[1] - lVal_4;
    }
    else {
      do {
        pLong_2 = *(int64_t **)(lVal_4 + 0x40);
        if (pLong_2 != (int64_t *)0x0) {
          (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,(int64_t *)(lVal_4 + 8) != pLong_2);
          *(uint64_t *)(lVal_4 + 0x40) = 0;
        }
        lVal_4 = lVal_4 + 0x48;
      } while (lVal_4 != lVal_1);
      lVal_4 = *(int64_t *)*param_1;
      uVal_3 = *(int64_t *)param_1[1] - lVal_4;
    }
    if (0xfff < uVal_3) {
      if (0x1f < (uint64_t)((lVal_4 + -8) - *(int64_t *)(lVal_4 + -8))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_3 + 0x27;
      lVal_4 = *(int64_t *)(lVal_4 + -8);
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// Unwind@1804575b0
void Unwind_1804575b0(void)
{
  func_0x180672f60(&DAT_180840d00);
  return;
}

// Unwind@180457690
void Unwind_180457690(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2a0);
  return;
}

// Unwind@180457770
void Unwind_180457770(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180457850
void Unwind_180457850(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180457930
void Unwind_180457930(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180457a10
void Unwind_180457a10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180457af0
void Unwind_180457af0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180457bd0
void Unwind_180457bd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180457cb0
void Unwind_180457cb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180457d90
void Unwind_180457d90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(int64_t *)(param_2 + 0xa0) = param_2 + 0x230;
  return;
}

// Unwind@180457e70
void Unwind_180457e70(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  
  uVal_1 = *(uint64_t *)(param_2 + 0xa0);
  func_0x180001e70(param_2 + 0x2d0);
  *(uint64_t *)(param_2 + 0xb0) = uVal_1;
  return;
}

// Unwind@180457f50
void Unwind_180457f50(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  
  uVal_1 = *(uint64_t *)(param_2 + 0xb0);
  func_0x180001e70(param_2 + 0x2a0);
  *(uint64_t *)(param_2 + 0x98) = uVal_1;
  return;
}

// Unwind@180458030
void Unwind_180458030(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  
  uVal_1 = *(uint64_t *)(param_2 + 0x98);
  func_0x180001e70(param_2 + 0x130);
  *(uint64_t *)(param_2 + 0xa8) = uVal_1;
  return;
}

// Unwind@180458110
void Unwind_180458110(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0xa8);
  while (param_2 + 0x1b0 != lVal_1) {
    lVal_1 = lVal_1 + -0x40;
    func_0x1801b3cd0(lVal_1);
  }
  return;
}

// Unwind@180458200
void Unwind_180458200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1804582e0
void Unwind_1804582e0(uint64_t param_1,int64_t param_2)
{
  func_0x18045bcf0(param_2 + 0x1b0);
  return;
}

// Unwind@1804583c0
void Unwind_1804583c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@1804584a0
void Unwind_1804584a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180458580
void Unwind_180458580(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x108);
  while (param_2 + 0x1b0 != lVal_1) {
    lVal_1 = lVal_1 + -0x20;
    func_0x180001e70(lVal_1);
  }
  return;
}

// Unwind@180458670
void Unwind_180458670(uint64_t param_1,int64_t param_2)
{
  func_0x18045bf10(param_2 + 0x1b0);
  return;
}

// Unwind@180458750
void Unwind_180458750(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180458830
void Unwind_180458830(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180458910
void Unwind_180458910(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@1804589f0
void Unwind_1804589f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180458ad0
void Unwind_180458ad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180458bb0
void Unwind_180458bb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180458c90
void Unwind_180458c90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180458d70
void Unwind_180458d70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180458e50
void Unwind_180458e50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180458f30
void Unwind_180458f30(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  pLong_3 = *(int64_t **)(param_2 + 0x100);
  do {
    if ((int64_t *)(param_2 + 0x1b0) == pLong_3) {
      return;
    }
    uVal_1 = pLong_3[-1];
    if (0xf < uVal_1) {
      lVal_2 = pLong_3[-4];
      uVal_4 = uVal_1 + 1;
      lVal_5 = lVal_2;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(lVal_2 + -8);
        if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_5)) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_4 = uVal_1 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    pLong_3[-2] = 0;
    pLong_3[-1] = 0xf;
    *(uint8_t *)(pLong_3 + -4) = 0;
    pLong_3 = pLong_3 + -4;
  } while( true );
}

// Unwind@180459080
void Unwind_180459080(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  pLong_3 = *(int64_t **)(param_2 + 0xf8);
  do {
    if ((int64_t *)(param_2 + 0x130) == pLong_3) {
      return;
    }
    uVal_1 = pLong_3[-1];
    if (0xf < uVal_1) {
      lVal_2 = pLong_3[-4];
      uVal_4 = uVal_1 + 1;
      lVal_5 = lVal_2;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(lVal_2 + -8);
        if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_5)) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_4 = uVal_1 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    pLong_3[-2] = 0;
    pLong_3[-1] = 0xf;
    *(uint8_t *)(pLong_3 + -4) = 0;
    pLong_3 = pLong_3 + -4;
  } while( true );
}

// Unwind@1804591c0
void Unwind_1804591c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  return;
}

// Unwind@1804592a0
void Unwind_1804592a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x307) = 0;
  return;
}

// Unwind@180459380
void Unwind_180459380(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x307);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x70);
  }
  *(char *)(param_2 + 0x306) = ch_1;
  return;
}

// Unwind@180459460
void Unwind_180459460(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x306) == '\x01') {
    func_0x180001e70(param_2 + 0x50);
  }
  return;
}

// Unwind@180459540
void Unwind_180459540(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  return;
}

// Unwind@180459620
void Unwind_180459620(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  return;
}

// Unwind@180459700
void Unwind_180459700(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  return;
}

// Unwind@1804597e0
void Unwind_1804597e0(uint64_t param_1,int64_t param_2)
{
  func_0x18045bf10(param_2 + 0x130);
  return;
}

// Unwind@1804598c0
void Unwind_1804598c0(uint64_t param_1,int64_t param_2)
{
  func_0x18045bf10(param_2 + 0x1b0);
  return;
}

// Unwind@1804599a0
void Unwind_1804599a0(uint64_t param_1,int64_t param_2)
{
  func_0x18045c070(param_2 + 0x110);
  return;
}

// Unwind@180459a80
void Unwind_180459a80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180459b60
void Unwind_180459b60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180459c40
void Unwind_180459c40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180459d20
void Unwind_180459d20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180459e00
void Unwind_180459e00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180459ee0
void Unwind_180459ee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180459fc0
void Unwind_180459fc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@18045a0a0
void Unwind_18045a0a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@18045a180
void Unwind_18045a180(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0x130);
  return;
}

// Unwind@18045a260
void Unwind_18045a260(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0xd8);
  while (param_2 + 0x1b0 != lVal_1) {
    lVal_1 = lVal_1 + -0x20;
    func_0x180001e70(lVal_1);
  }
  return;
}

// Unwind@18045a350
void Unwind_18045a350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18045a430
void Unwind_18045a430(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18045a510
void Unwind_18045a510(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18045a5f0
void Unwind_18045a5f0(uint64_t param_1,int64_t param_2)
{
  func_0x18045c160(param_2 + 0x1b0);
  return;
}

// Unwind@18045a6d0
void Unwind_18045a6d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2a0);
  return;
}

// Unwind@18045a7b0
void Unwind_18045a7b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@18045a890
void Unwind_18045a890(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@18045a970
void Unwind_18045a970(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x156d8) = 0;
  return;
}

// Unwind@18045aa50
void Unwind_18045aa50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@18045ab30
void Unwind_18045ab30(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15778) = 0;
  return;
}

// Unwind@18045ac10
void Unwind_18045ac10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1578c) = 0;
  return;
}

// Unwind@18045acf0
void Unwind_18045acf0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x157a0) = 0;
  return;
}

// func_0x18045add0
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18045add0(int64_t param_1)
{
  float fVal_1;
  func_ptr_t fnPtr_2;
  char ch_3;
  float fVal_4;
  uint uVal_5;
  uint uVal_6;
  int iVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint uVal_11;
  float fVal_12;
  float fVal_13;
  float fVal_14;
  uint8_t auStack_1468 [32];
  float local_1448;
  float local_1440;
  uint8_t local_1438;
  uint64_t local_1428;
  float local_1420;
  float local_141c;
  uint local_1418 [2];
  float fStack_1410;
  uint auStack_140c [1246];
  uint32_t local_94;
  uint64_t local_90;
  uint64_t uStack_38;
  
  uStack_38 = 0x18045ade2;
  local_90 = DAT_18083cf40 ^ (uint64_t)auStack_1468;
  if ((*(char *)(param_1 + 0x92) == '\0') && (DAT_180841a19 == '\0')) {
    ch_3 = func_0x180057f30(*(uint64_t *)(param_1 + 0x40),
                          ((uint64_t)(uint)DAT_180841a12 - (uint64_t)((uint)DAT_180841a12 * 8)) +
                          0x32);
    if (ch_3 != '\0') {
      uVal_8 = func_0x1800576d0();
      *(uint64_t *)(param_1 + 0x40) = uVal_8;
      local_1418[1] = std::_Random_device();
      local_94 = 0xffffffff;
      lVal_10 = 3;
      uVal_5 = local_1418[1];
      while( true ) {
        uVal_9 = ((uint64_t)((uVal_5 >> 0x1e ^ uVal_5) * 0x6c078965) + lVal_10) - 2;
        fVal_4 = (float)uVal_9;
        (&local_141c)[lVal_10] = fVal_4;
        if (lVal_10 == 0x271) break;
        uVal_5 = (((uint)(uVal_9 >> 0x1e) & 3 ^ (uint)fVal_4) * 0x6c078965 + (int)lVal_10) - 1;
        local_1418[lVal_10] = uVal_5;
        lVal_10 = lVal_10 + 2;
      }
      local_1418[0] = 0x270;
      fVal_4 = *(float *)(param_1 + 0x28);
      uVal_11 = (uint)DAT_180841a12;
      uVal_5 = func_0x1800ac880(local_1418);
      fVal_1 = *(float *)(param_1 + 0x20);
      uVal_6 = func_0x1800ac880(local_1418);
      fVal_12 = DAT_1806b676c * (float)uVal_11;
      fVal_13 = (float)uVal_11 * DAT_1806c39c0;
      fVal_14 = (float)(uVal_5 >> 8) * DAT_1806cec40 * DAT_1806beca0 + DAT_1806b55e0;
      local_141c = *(float *)(param_1 + 0x24) + _DAT_1806b67c4;
      local_1420 = (float)(uVal_6 >> 8) * DAT_1806cec40 * fVal_4 + 0.0 + fVal_1;
      if (uVal_11 == 5) {
        iVal_7 = func_0x1800ac880(local_1418);
      }
      else {
        uVal_6 = uVal_11 * -2 + 10;
        uVal_5 = func_0x1800ac880(local_1418);
        lVal_10 = (uint64_t)uVal_5 * (uint64_t)uVal_6;
        if (((uint)lVal_10 <= uVal_11 * -2 + 9) &&
           (uVal_5 = (uVal_11 * 2 - 10) % uVal_6, (uint)lVal_10 < uVal_5)) {
          do {
            uVal_11 = func_0x1800ac880(local_1418);
            lVal_10 = (uint64_t)uVal_11 * (uint64_t)uVal_6;
          } while ((uint)lVal_10 < uVal_5);
        }
        iVal_7 = (int)((uint64_t)lVal_10 >> 0x20);
      }
      fVal_12 = fVal_12 + fVal_14;
      uVal_5 = func_0x1800ac880(local_1418);
      fVal_13 = fVal_13 + (float)(uVal_5 >> 8) * DAT_1806cec40 * DAT_1806b613c + DAT_1806cea70;
      if (iVal_7 == 0) {
        local_1448 = fVal_13 + DAT_1806b67d8;
        local_1440 = (float)((uint)local_1440 & 0xffffff00);
        func_0x18062a180(&DAT_180841960,param_1,&local_1420,fVal_12);
      }
      else {
        local_1428 = DAT_1806b2900;
        local_1438 = 0;
        local_1448 = fVal_12;
        local_1440 = fVal_13;
        func_0x18062a030(&DAT_180841960,param_1,&local_1420,&local_1428);
      }
    }
  }
  if (DAT_18083cf40 == (local_90 ^ (uint64_t)auStack_1468)) {
    return;
  }
  func_0x180673080(local_90 ^ (uint64_t)auStack_1468);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x18045b0e0
void func_0x18045b0e0(int64_t param_1)
{
  int *pInt_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  func_ptr_t fnPtr_4;
  uint8_t (*pArr16_5)[16];
  int64_t lVal_6;
  int64_t lVal_7;
  int64_t lVal_8;
  byte bFlag_9;
  int64_t local_48;
  uint64_t local_40;
  int64_t *local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if ((DAT_180841a19 == '\0') &&
     (*(uint64_t *)(param_1 + 0x58) <
      (uint64_t)
      ((*(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8) >> 3) * -0x71c71c71c71c71c7))) {
    bFlag_9 = *(byte *)(param_1 + 0x91) | *(byte *)(param_1 + 0x92);
    if (*(byte *)(param_1 + 0x90) == bFlag_9) {
      if (bFlag_9 != 0) {
        return;
      }
    }
    else {
      *(byte *)(param_1 + 0x90) = bFlag_9;
      lVal_6 = func_0x1800576d0();
      if (bFlag_9 != 0) {
        *(int64_t *)(param_1 + 0x50) =
             *(int64_t *)(param_1 + 0x50) + (lVal_6 - *(int64_t *)(param_1 + 0x48));
        return;
      }
      *(int64_t *)(param_1 + 0x48) = lVal_6;
    }
    lVal_6 = *(int64_t *)(param_1 + 0x50);
    lVal_7 = func_0x1800576d0();
    lVal_7 = (lVal_7 + lVal_6) - *(int64_t *)(param_1 + 0x48);
    lVal_6 = *(int64_t *)(*(int64_t *)(param_1 + 8) + *(int64_t *)(param_1 + 0x58) * 0x48);
    if (lVal_6 == 0 || lVal_6 <= lVal_7) {
      pLong_2 = (int64_t *)(*(int64_t *)(param_1 + 8) + *(int64_t *)(param_1 + 0x58) * 0x48);
      pLong_3 = (int64_t *)pLong_2[8];
      local_48 = param_1;
      if (pLong_3 == (int64_t *)0x0) {
        func_0x180674610();
        fnPtr_4 = (func_ptr_t )swi(3);
        (*fnPtr_4)();
        return;
      }
      (**(func_ptr_t *)(*pLong_3 + 0x10))(pLong_3,&local_40,&local_48);
      pArr16_5 = DAT_1808419b8;
      if (DAT_1808419b8 == DAT_1808419c0) {
        func_0x1804f5bf0(&DAT_1808419b0,DAT_1808419b8,&local_40);
        if (local_38 != (int64_t *)0x0) {
          LOCK();
          pLong_3 = local_38 + 1;
          *(int *)pLong_3 = *(int *)pLong_3 + -1;
          UNLOCK();
          if (*(int *)pLong_3 == 0) {
            (**(func_ptr_t *)*local_38)(local_38);
            LOCK();
            pInt_1 = (int *)((int64_t)local_38 + 0xc);
            *pInt_1 = *pInt_1 + -1;
            UNLOCK();
            if (*pInt_1 == 0) {
              (**(func_ptr_t *)(*local_38 + 8))(local_38);
            }
          }
        }
      }
      else {
        *DAT_1808419b8 = ZEXT816(0);
        *(uint64_t *)*pArr16_5 = local_40;
        *(int64_t **)(*pArr16_5 + 8) = local_38;
        DAT_1808419b8 = DAT_1808419b8 + 1;
      }
      *(int64_t *)(param_1 + 0x58) = *(int64_t *)(param_1 + 0x58) + 1;
      lVal_8 = func_0x1800576d0();
      lVal_6 = *pLong_2;
      lVal_7 = lVal_7 - lVal_6;
      if (lVal_6 == 0) {
        lVal_7 = 0;
      }
      *(int64_t *)(param_1 + 0x48) = lVal_7 + lVal_8;
      *(uint64_t *)(param_1 + 0x50) = 0;
    }
  }
  return;
}

// Unwind@18045b260
void Unwind_18045b260(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x28);
  return;
}

// func_0x18045b290
void func_0x18045b290(int64_t param_1,uint32_t param_2)
{
  func_ptr_t fnPtr_1;
  byte bFlag_2;
  uint32_t uVal_3;
  int64_t **ptr2_Long_4;
  uint64_t *pU64_5;
  byte bFlag_6;
  char ch_7;
  uint64_t *pU64_8;
  int64_t **ptr2_Long_9;
  uint8_t auStack_68 [32];
  uint8_t local_48 [4];
  float local_44;
  uint64_t local_40;
  
  pU64_5 = DAT_1808419b8;
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  bFlag_6 = *(byte *)(param_1 + 0x93);
  if (((bFlag_6 | DAT_180841a19) & 1) == 0) {
    pU64_8 = DAT_1808419b0;
    if (DAT_1808419b0 == DAT_1808419b8) {
      bFlag_6 = 0;
      ch_7 = *(char *)(param_1 + 0x92);
      bFlag_2 = 0;
      goto joined_r0x00018045b3cb;
    }
    do {
      func_0x180634770(*pU64_8);
      pU64_8 = pU64_8 + 2;
    } while (pU64_8 != pU64_5);
    bFlag_6 = *(byte *)(param_1 + 0x93);
  }
  ch_7 = *(char *)(param_1 + 0x92);
  bFlag_2 = DAT_180841a19;
joined_r0x00018045b3cb:
  if (((ch_7 == '\0') && (bFlag_2 == 0)) && ((bFlag_6 & 1) == 0)) {
    (**(func_ptr_t *)(*DAT_1808419e0 + 8))(DAT_1808419e0,param_2);
    if (DAT_1808419f0 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*DAT_1808419f0 + 8))(DAT_1808419f0,param_2);
    }
    if (DAT_180841a00 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*DAT_180841a00 + 8))(DAT_180841a00,param_2);
    }
    func_0x18044ce10(DAT_1808419e0,local_48);
    ptr2_Long_4 = DAT_180841988;
    ptr2_Long_9 = DAT_180841980;
    if (local_44 < *(float *)(param_1 + 0x2c) / DAT_1806b6550) {
      for (; ptr2_Long_9 != ptr2_Long_4; ptr2_Long_9 = ptr2_Long_9 + 2) {
        ch_7 = (**(func_ptr_t *)(**ptr2_Long_9 + 0x20))();
        if (ch_7 == '\x02') {
          func_0x18062af40(*ptr2_Long_9);
        }
      }
    }
  }
  uVal_3 = DAT_1806b26b4;
  func_0x1800cf900(DAT_1806b26b4,DAT_1806b26b4,DAT_1806b26b4,DAT_1806b26b4);
  (**(func_ptr_t *)(*DAT_1808419e0 + 0x10))();
  func_0x1800cf900(uVal_3,uVal_3,uVal_3,uVal_3);
  ptr2_Long_4 = DAT_180841988;
  for (ptr2_Long_9 = DAT_180841980; ptr2_Long_9 != ptr2_Long_4; ptr2_Long_9 = ptr2_Long_9 + 2) {
    if (((*(char *)(param_1 + 0x92) == '\0') && (DAT_180841a19 == 0)) &&
       (*(char *)(param_1 + 0x93) == '\0')) {
      (**(func_ptr_t *)(**ptr2_Long_9 + 8))(*ptr2_Long_9,param_2);
    }
    (**(func_ptr_t *)(**ptr2_Long_9 + 0x10))();
  }
  func_0x1800cf900(DAT_1806b26b4,DAT_1806b26b4,DAT_1806b26b4,DAT_1806b26b4);
  if (DAT_180841a00 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*DAT_180841a00 + 0x10))();
  }
  func_0x1800cf900(DAT_1806b26b4,DAT_1806b26b4,DAT_1806b26b4,DAT_1806b26b4);
  ptr2_Long_4 = DAT_1808419a0;
  for (ptr2_Long_9 = DAT_180841998; ptr2_Long_9 != ptr2_Long_4; ptr2_Long_9 = ptr2_Long_9 + 2) {
    if (((*(char *)(param_1 + 0x92) == '\0') && (DAT_180841a19 == 0)) &&
       (*(char *)(param_1 + 0x93) == '\0')) {
      (**(func_ptr_t *)(**ptr2_Long_9 + 8))(*ptr2_Long_9,param_2);
    }
    (**(func_ptr_t *)(**ptr2_Long_9 + 0x10))();
  }
  func_0x1800cf900(DAT_1806b26b4,DAT_1806b26b4,DAT_1806b26b4,DAT_1806b26b4);
  ptr2_Long_4 = DAT_180841970;
  for (ptr2_Long_9 = DAT_180841968; ptr2_Long_9 != ptr2_Long_4; ptr2_Long_9 = ptr2_Long_9 + 2) {
    if (((*(char *)(param_1 + 0x92) == '\0') && (DAT_180841a19 == 0)) &&
       (*(char *)(param_1 + 0x93) == '\0')) {
      (**(func_ptr_t *)(**ptr2_Long_9 + 8))(*ptr2_Long_9,param_2);
    }
    (**(func_ptr_t *)(**ptr2_Long_9 + 0x10))();
  }
  func_0x1800cf900(DAT_1806b26b4,DAT_1806b26b4,DAT_1806b26b4,DAT_1806b26b4);
  ptr2_Long_4 = DAT_1808419d0;
  for (ptr2_Long_9 = DAT_1808419c8; ptr2_Long_9 != ptr2_Long_4; ptr2_Long_9 = ptr2_Long_9 + 2) {
    if (((*(char *)(param_1 + 0x92) == '\0') && (DAT_180841a19 == 0)) &&
       (*(char *)(param_1 + 0x93) == '\0')) {
      (**(func_ptr_t *)(**ptr2_Long_9 + 8))(*ptr2_Long_9,param_2);
    }
    (**(func_ptr_t *)(**ptr2_Long_9 + 0x10))();
  }
  func_0x1800cf900(DAT_1806b26b4,DAT_1806b26b4,DAT_1806b26b4,DAT_1806b26b4);
  if (DAT_1808419f0 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*DAT_1808419f0 + 0x10))();
  }
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_68)) {
    return;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18045b630
void func_0x18045b630(void)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint8_t (*pArr16_7)[16];
  char ch_8;
  uint8_t (*pArr16_9)[16];
  uint64_t uVal_10;
  
  if (DAT_1808419b8 != DAT_1808419b0) {
    uVal_10 = 0;
    do {
      pArr16_9 = DAT_1808419b0;
      ch_8 = (**(func_ptr_t *)(**(int64_t **)DAT_1808419b0[uVal_10] + 0x10))();
      if (ch_8 != '\0') {
        (**(func_ptr_t *)(**(int64_t **)pArr16_9[uVal_10] + 0x18))();
        pArr16_7 = DAT_1808419b8;
        pArr16_9 = pArr16_9 + uVal_10 + 1;
        if (pArr16_9 == DAT_1808419b8) {
          pLong_3 = *(int64_t **)(DAT_1808419b8[-1] + 8);
        }
        else {
          do {
            uVal_4 = *(uint32_t *)(*pArr16_9 + 4);
            uVal_5 = *(uint32_t *)(*pArr16_9 + 8);
            uVal_6 = *(uint32_t *)(*pArr16_9 + 0xc);
            *pArr16_9 = ZEXT816(0);
            pLong_3 = *(int64_t **)(pArr16_9[-1] + 8);
            *(uint32_t *)pArr16_9[-1] = *(uint32_t *)*pArr16_9;
            *(uint32_t *)(pArr16_9[-1] + 4) = uVal_4;
            *(uint32_t *)(pArr16_9[-1] + 8) = uVal_5;
            *(uint32_t *)(pArr16_9[-1] + 0xc) = uVal_6;
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
            pArr16_9 = pArr16_9 + 1;
          } while (pArr16_9 != pArr16_7);
          pLong_3 = *(int64_t **)(DAT_1808419b8[-1] + 8);
        }
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
        DAT_1808419b8 = DAT_1808419b8 + -1;
      }
      uVal_10 = uVal_10 + 1;
    } while (uVal_10 < (uint64_t)((int64_t)DAT_1808419b8 - (int64_t)DAT_1808419b0 >> 4));
  }
  if (DAT_180841988 != DAT_180841980) {
    uVal_10 = 0;
    do {
      pArr16_9 = DAT_180841980;
      ch_8 = (**(func_ptr_t *)(**(int64_t **)DAT_180841980[uVal_10] + 0x18))();
      pArr16_7 = DAT_180841988;
      if (ch_8 != '\0') {
        pArr16_9 = pArr16_9 + uVal_10 + 1;
        if (pArr16_9 == DAT_180841988) {
          pLong_3 = *(int64_t **)(DAT_180841988[-1] + 8);
        }
        else {
          do {
            uVal_4 = *(uint32_t *)(*pArr16_9 + 4);
            uVal_5 = *(uint32_t *)(*pArr16_9 + 8);
            uVal_6 = *(uint32_t *)(*pArr16_9 + 0xc);
            *pArr16_9 = ZEXT816(0);
            pLong_3 = *(int64_t **)(pArr16_9[-1] + 8);
            *(uint32_t *)pArr16_9[-1] = *(uint32_t *)*pArr16_9;
            *(uint32_t *)(pArr16_9[-1] + 4) = uVal_4;
            *(uint32_t *)(pArr16_9[-1] + 8) = uVal_5;
            *(uint32_t *)(pArr16_9[-1] + 0xc) = uVal_6;
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
            pArr16_9 = pArr16_9 + 1;
          } while (pArr16_9 != pArr16_7);
          pLong_3 = *(int64_t **)(DAT_180841988[-1] + 8);
        }
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
        DAT_180841988 = DAT_180841988 + -1;
      }
      uVal_10 = uVal_10 + 1;
    } while (uVal_10 < (uint64_t)((int64_t)DAT_180841988 - (int64_t)DAT_180841980 >> 4));
  }
  if (DAT_1808419a0 != DAT_180841998) {
    uVal_10 = 0;
    do {
      pArr16_9 = DAT_180841998;
      ch_8 = func_0x18062efa0(*(uint64_t *)DAT_180841998[uVal_10]);
      if ((ch_8 != '\0') ||
         (ch_8 = (**(func_ptr_t *)(**(int64_t **)pArr16_9[uVal_10] + 0x18))(), ch_8 != '\0')) {
        pArr16_7 = DAT_1808419a0;
        pArr16_9 = pArr16_9 + uVal_10 + 1;
        if (pArr16_9 == DAT_1808419a0) {
          pLong_3 = *(int64_t **)(DAT_1808419a0[-1] + 8);
        }
        else {
          do {
            uVal_4 = *(uint32_t *)(*pArr16_9 + 4);
            uVal_5 = *(uint32_t *)(*pArr16_9 + 8);
            uVal_6 = *(uint32_t *)(*pArr16_9 + 0xc);
            *pArr16_9 = ZEXT816(0);
            pLong_3 = *(int64_t **)(pArr16_9[-1] + 8);
            *(uint32_t *)pArr16_9[-1] = *(uint32_t *)*pArr16_9;
            *(uint32_t *)(pArr16_9[-1] + 4) = uVal_4;
            *(uint32_t *)(pArr16_9[-1] + 8) = uVal_5;
            *(uint32_t *)(pArr16_9[-1] + 0xc) = uVal_6;
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
            pArr16_9 = pArr16_9 + 1;
          } while (pArr16_9 != pArr16_7);
          pLong_3 = *(int64_t **)(DAT_1808419a0[-1] + 8);
        }
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
        DAT_1808419a0 = DAT_1808419a0 + -1;
      }
      uVal_10 = uVal_10 + 1;
    } while (uVal_10 < (uint64_t)((int64_t)DAT_1808419a0 - (int64_t)DAT_180841998 >> 4));
  }
  if (DAT_180841970 != DAT_180841968) {
    uVal_10 = 0;
    do {
      pArr16_9 = DAT_180841968;
      ch_8 = (**(func_ptr_t *)(**(int64_t **)DAT_180841968[uVal_10] + 0x18))();
      pArr16_7 = DAT_180841970;
      if (ch_8 != '\0') {
        pArr16_9 = pArr16_9 + uVal_10 + 1;
        if (pArr16_9 == DAT_180841970) {
          pLong_3 = *(int64_t **)(DAT_180841970[-1] + 8);
        }
        else {
          do {
            uVal_4 = *(uint32_t *)(*pArr16_9 + 4);
            uVal_5 = *(uint32_t *)(*pArr16_9 + 8);
            uVal_6 = *(uint32_t *)(*pArr16_9 + 0xc);
            *pArr16_9 = ZEXT816(0);
            pLong_3 = *(int64_t **)(pArr16_9[-1] + 8);
            *(uint32_t *)pArr16_9[-1] = *(uint32_t *)*pArr16_9;
            *(uint32_t *)(pArr16_9[-1] + 4) = uVal_4;
            *(uint32_t *)(pArr16_9[-1] + 8) = uVal_5;
            *(uint32_t *)(pArr16_9[-1] + 0xc) = uVal_6;
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
            pArr16_9 = pArr16_9 + 1;
          } while (pArr16_9 != pArr16_7);
          pLong_3 = *(int64_t **)(DAT_180841970[-1] + 8);
        }
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
        DAT_180841970 = DAT_180841970 + -1;
      }
      uVal_10 = uVal_10 + 1;
    } while (uVal_10 < (uint64_t)((int64_t)DAT_180841970 - (int64_t)DAT_180841968 >> 4));
  }
  if (DAT_1808419d0 != DAT_1808419c8) {
    uVal_10 = 0;
    do {
      pArr16_9 = DAT_1808419c8;
      ch_8 = (**(func_ptr_t *)(**(int64_t **)DAT_1808419c8[uVal_10] + 0x18))();
      pArr16_7 = DAT_1808419d0;
      if (ch_8 != '\0') {
        pArr16_9 = pArr16_9 + uVal_10 + 1;
        if (pArr16_9 == DAT_1808419d0) {
          pLong_3 = *(int64_t **)(DAT_1808419d0[-1] + 8);
        }
        else {
          do {
            uVal_4 = *(uint32_t *)(*pArr16_9 + 4);
            uVal_5 = *(uint32_t *)(*pArr16_9 + 8);
            uVal_6 = *(uint32_t *)(*pArr16_9 + 0xc);
            *pArr16_9 = ZEXT816(0);
            pLong_3 = *(int64_t **)(pArr16_9[-1] + 8);
            *(uint32_t *)pArr16_9[-1] = *(uint32_t *)*pArr16_9;
            *(uint32_t *)(pArr16_9[-1] + 4) = uVal_4;
            *(uint32_t *)(pArr16_9[-1] + 8) = uVal_5;
            *(uint32_t *)(pArr16_9[-1] + 0xc) = uVal_6;
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
            pArr16_9 = pArr16_9 + 1;
          } while (pArr16_9 != pArr16_7);
          pLong_3 = *(int64_t **)(DAT_1808419d0[-1] + 8);
        }
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
        DAT_1808419d0 = DAT_1808419d0 + -1;
      }
      uVal_10 = uVal_10 + 1;
    } while (uVal_10 < (uint64_t)((int64_t)DAT_1808419d0 - (int64_t)DAT_1808419c8 >> 4));
  }
  return;
}

// func_0x18045bba0
uint8_t (*func_0x18045bba0(uint8_t (*param_1)[16],ushort param_2))[16]
{
  func_ptr_t fnPtr_1;
  uint uVal_2;
  uint uVal_3;
  int64_t lVal_5;
  uint uVal_6;
  uint64_t uVal_7;
  uint8_t (*pArr16_8)[16];
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint16_t auStack_26 [3];
  uint64_t uVal_4;
  
  uVal_6 = (uint)param_2;
  uVal_2 = 0x1f;
  if ((param_2 | 1) != 0) {
    for (; (param_2 | 1) >> uVal_2 == 0; uVal_2 = uVal_2 - 1) {
    }
  }
  uVal_9 = *(int64_t *)(&DAT_1806afa50 + (uint64_t)uVal_2 * 8) + (uint64_t)param_2;
  uVal_4 = uVal_9 >> 0x20;
  uVal_2 = (uint)(uVal_9 >> 0x20);
  uVal_9 = (int64_t)uVal_9 >> 0x20;
  uVal_11 = (uint64_t)param_2;
  if (param_2 < 100) {
    uVal_10 = (uint64_t)uVal_6;
    uVal_3 = uVal_2;
  }
  else {
    do {
      uVal_7 = uVal_11;
      uVal_3 = (int)uVal_4 - 2;
      uVal_4 = (uint64_t)uVal_3;
      uVal_10 = uVal_7 / 100;
      *(uint16_t *)((int64_t)auStack_26 + uVal_4) =
           *(uint16_t *)
            (&DAT_1806afb50 + (uint64_t)((uint)uVal_7 + (int)(uVal_7 / 100) * -100) * 2);
      uVal_11 = uVal_7 / 100;
    } while (9999 < (uint)uVal_7);
    uVal_6 = (uint)(uVal_7 / 100);
  }
  if (uVal_6 < 10) {
    *(byte *)((int64_t)auStack_26 + (uint64_t)(uVal_3 - 1)) = (byte)uVal_10 | 0x30;
  }
  else {
    *(uint16_t *)((int64_t)auStack_26 + (uint64_t)(uVal_3 - 2)) =
         *(uint16_t *)(&DAT_1806afb50 + uVal_10 * 2);
  }
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  if (uVal_9 == 0) {
    *(uint64_t *)(param_1[1] + 8) = 0xf;
  }
  else {
    if ((int64_t)uVal_9 < 0) {
      func_0x18007ba70();
      fnPtr_1 = (func_ptr_t )swi(3);
      pArr16_8 = (uint8_t (*)[16])(*fnPtr_1)();
      return pArr16_8;
    }
    uVal_11 = 0xf;
    pArr16_8 = param_1;
    if (0xf < uVal_2) {
      uVal_4 = uVal_9 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_4) {
        uVal_11 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        pArr16_8 = (uint8_t (*)[16])func_0x180672de0(uVal_11 + 1);
      }
      else {
        lVal_5 = func_0x180672de0(uVal_11 + 0x28);
        pArr16_8 = (uint8_t (*)[16])(lVal_5 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_8[-1] + 8) = lVal_5;
      }
      *(uint8_t (**)[16])*param_1 = pArr16_8;
    }
    *(uint64_t *)param_1[1] = uVal_9;
    *(uint64_t *)(param_1[1] + 8) = uVal_11;
    func_0x1806aa960(pArr16_8,auStack_26,uVal_9);
    (*pArr16_8)[uVal_9] = 0;
  }
  return param_1;
}

// func_0x18045bcf0
void func_0x18045bcf0(int64_t *param_1)
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
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18045bf04;
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
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18045bf04;
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
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18045bf04;
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
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18045bf04;
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
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18045bf04;
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
LAB_18045bf04:
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

// func_0x18045bf10
void func_0x18045bf10(int64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = param_1[0xf];
  if (0xf < uVal_1) {
    lVal_2 = param_1[0xc];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18045c060;
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
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18045c060;
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
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18045c060;
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
LAB_18045c060:
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

// func_0x18045c070
void func_0x18045c070(uint8_t (*param_1)[16])
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t *pLong_6;
  
  pLong_6 = *(int64_t **)*param_1;
  if (pLong_6 != (int64_t *)0x0) {
    pLong_1 = *(int64_t **)(*param_1 + 8);
    if (pLong_6 == pLong_1) {
      uVal_5 = *(int64_t *)param_1[1] - (int64_t)pLong_6;
    }
    else {
      do {
        uVal_5 = pLong_6[3];
        if (0xf < uVal_5) {
          lVal_2 = *pLong_6;
          uVal_3 = uVal_5 + 1;
          lVal_4 = lVal_2;
          if (0xfff < uVal_3) {
            lVal_4 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18045c151;
            uVal_3 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_3);
        }
        pLong_6[2] = 0;
        pLong_6[3] = 0xf;
        *(uint8_t *)pLong_6 = 0;
        pLong_6 = pLong_6 + 6;
      } while (pLong_6 != pLong_1);
      pLong_6 = *(int64_t **)*param_1;
      uVal_5 = *(int64_t *)param_1[1] - (int64_t)pLong_6;
    }
    if (0xfff < uVal_5) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_6 + (-8 - (int64_t)(int64_t *)pLong_6[-1]))) {
LAB_18045c151:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
      pLong_6 = (int64_t *)pLong_6[-1];
    }
    thunk_FUN_180695dd0(pLong_6,uVal_5);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// func_0x18045c160
void func_0x18045c160(int64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = param_1[7];
  if (0xf < uVal_1) {
    lVal_2 = param_1[4];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18045c20a;
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
LAB_18045c20a:
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

// Unwind@18045c390
void Unwind_18045c390(void)
{
  func_0x180672f60(&DAT_180840d10);
  return;
}

// func_0x18045c3c0
void func_0x18045c3c0(int64_t param_1,uint8_t param_2)
{
  *(uint8_t *)(param_1 + 0x91) = param_2;
  return;
}

// func_0x18045c3d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18045c3d0(int64_t param_1)
{
  uint64_t uVal_1;
  int64_t lVal_3;
  float fVal_4;
  int64_t lVal_2;
  
  *(uint8_t *)(param_1 + 0x93) = 1;
  lVal_3 = 10000;
  if (DAT_180841a17 == '\0') {
    lVal_3 = 25000;
  }
  lVal_2 = 0;
  if (DAT_180841a16 == '\0') {
    lVal_2 = lVal_3;
  }
  uVal_1 = lVal_2 + DAT_180841960;
  if ((int64_t)uVal_1 < 0) {
    fVal_4 = (float)((uint64_t)((uint)uVal_1 & 1) | uVal_1 >> 1);
    fVal_4 = fVal_4 + fVal_4;
  }
  else {
    fVal_4 = (float)uVal_1;
  }
  uVal_1 = (uint64_t)(fVal_4 * *(float *)(&DAT_1806cfcd0 + (uint64_t)DAT_180841a12 * 4));
  DAT_180841960 =
       (int64_t)
       (fVal_4 * *(float *)(&DAT_1806cfcd0 + (uint64_t)DAT_180841a12 * 4) - _DAT_1806ae420) &
       (int64_t)uVal_1 >> 0x3f | uVal_1;
  return;
}

// func_0x18045c460
void func_0x18045c460(int64_t param_1,uint8_t param_2)
{
  *(uint8_t *)(param_1 + 0x92) = param_2;
  *(uint32_t *)(param_1 + 0x88) = 0;
  return;
}

// func_0x18045c480
void func_0x18045c480(int64_t param_1,uint64_t param_2)
{
  *(uint64_t *)(param_1 + 0x78) = param_2;
  *(uint8_t *)(param_1 + 0x95) = 1;
  *(uint64_t *)(param_1 + 0x80) = 0;
  return;
}

// func_0x18045c4a0
void func_0x18045c4a0(int64_t param_1)
{
  *(uint64_t *)(param_1 + 0x80) = *(uint64_t *)(param_1 + 0x70);
  return;
}

// Unwind@18045d840
void Unwind_18045d840(void)
{
  func_0x180672f60(&DAT_180840d20);
  return;
}

// Unwind@18045d900
void Unwind_18045d900(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0xf8);
  while (param_2 + 0x50 != lVal_1) {
    lVal_1 = lVal_1 + -0x20;
    func_0x180001e70(lVal_1);
  }
  return;
}

// Unwind@18045d9e0
void Unwind_18045d9e0(uint64_t param_1,int64_t param_2)
{
  func_0x18045bf10(param_2 + 0x50);
  return;
}

// Unwind@18045daa0
void Unwind_18045daa0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0xd8);
  while (param_2 + 0x50 != lVal_1) {
    lVal_1 = lVal_1 + -0x20;
    func_0x180001e70(lVal_1);
  }
  return;
}

// Unwind@18045db80
void Unwind_18045db80(uint64_t param_1,int64_t param_2)
{
  func_0x18045c160(param_2 + 0x50);
  return;
}

// func_0x18045dc40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18045dc40(int64_t param_1)
{
  uint *pU64_1;
  uint64_t *_Str;
  uint8_t auArr_2 [16];
  float fVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  bool bFlag_6;
  char ch_7;
  size_t sz_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t *unaff_RBX;
  uint64_t *pU64_11;
  uint8_t *pU64_12;
  bool bFlag_13;
  uint64_t uVal_14;
  uint64_t local_1c8;
  uint64_t uStack_1c0;
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
  uint8_t local_188 [16];
  uint8_t local_178 [16];
  uint8_t local_168 [16];
  uint8_t local_158 [16];
  uint8_t local_148 [16];
  uint8_t local_138 [16];
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t local_108 [16];
  uint8_t local_f8 [16];
  uint8_t local_e8 [8];
  uint64_t uStack_e0;
  uint8_t local_d8 [24];
  uint64_t *local_c0;
  uint64_t *local_b8;
  float local_ac;
  uint64_t local_a8;
  uint64_t local_a0;
  
  pU64_11 = (uint64_t *)local_168;
  local_a0 = 0xfffffffffffffffe;
  local_a8 = func_0x1800cf950();
  local_198 = _DAT_1806cfd10;
  uStack_194 = _UNK_1806cfd14;
  uStack_190 = _UNK_1806cfd18;
  uStack_18c = _UNK_1806cfd1c;
  local_1a8 = _DAT_1806cfd00;
  uStack_1a4 = _UNK_1806cfd04;
  uStack_1a0 = _UNK_1806cfd08;
  uStack_19c = _UNK_1806cfd0c;
  local_1b8 = _DAT_1806cfcf0;
  uStack_1b4 = _UNK_1806cfcf4;
  uStack_1b0 = _UNK_1806cfcf8;
  uStack_1ac = _UNK_1806cfcfc;
  local_1c8 = _DAT_1806cfce0;
  uStack_1c0 = _UNK_1806cfce8;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15868) == '\0') {
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_10 + 0x15868) = 1;
    *(uint32_t *)(lVal_10 + 0x15860) = 0xa62a1ac8;
    *(uint16_t *)(lVal_10 + 0x15864) = 0x159;
    func_0x180673140(&LAB_1804f5f70);
  }
  lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_10 + 0x15860);
  if (*(char *)(lVal_10 + 0x15865) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0xdf597b8d;
    *(byte *)(lVal_10 + 0x15864) = *(byte *)(lVal_10 + 0x15864) ^ 0x59;
    *(uint8_t *)(lVal_10 + 0x15865) = 0;
  }
  local_178 = (uint8_t  [16])0x0;
  local_188 = (uint8_t  [16])0x0;
  sz_8 = strlen((char *)pU64_1);
  if ((int64_t)sz_8 < 0) {
    local_b8 = (uint64_t *)local_188;
    func_0x18007ba70();
LAB_18045e963:
    local_b8 = unaff_RBX;
    func_0x18007ba70();
LAB_18045e970:
    local_b8 = unaff_RBX;
    func_0x18007ba70();
LAB_18045e97d:
    local_b8 = unaff_RBX;
    func_0x18007ba70();
LAB_18045e98a:
    local_c0 = (uint64_t *)local_108;
    func_0x18007ba70();
  }
  else {
    if (sz_8 < 0x10) {
      pU64_12 = local_188;
      uVal_14 = 0xf;
    }
    else {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_b8 = (uint64_t *)local_188;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_b8 = (uint64_t *)local_188;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_12 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_10;
      }
      local_188._0_8_ = pU64_12;
    }
    local_178._8_8_ = uVal_14;
    local_178._0_8_ = sz_8;
    func_0x1806aa960(pU64_12,pU64_1,sz_8);
    pU64_12[sz_8] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x15878) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x15878) = 1;
      *(uint64_t *)(lVal_10 + 0x15870) = 0x1559338b22b14c3;
      func_0x180673140(&LAB_1804f5fa0);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint64_t *)(lVal_10 + 0x15870);
    if (*(char *)(lVal_10 + 0x15877) == '\x01') {
      *_Str = (CONCAT44((uint)*(ushort *)(lVal_10 + 0x15875) << 8,*(uint32_t *)_Str) |
              (uint64_t)*(byte *)(lVal_10 + 0x15874) << 0x20) ^ SUB168(_DAT_1806cec50,0);
    }
    local_158 = (uint8_t  [16])0x0;
    local_168 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)_Str);
    unaff_RBX = pU64_11;
    if ((int64_t)sz_8 < 0) goto LAB_18045e963;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      local_b8 = pU64_11;
      if (uVal_9 < 0xfff) {
        pU64_11 = (uint64_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        uVal_9 = func_0x180672de0(uVal_14 + 0x28);
        pU64_11 = (uint64_t *)(uVal_9 + 0x27 & 0xffffffffffffffe0);
        pU64_11[-1] = uVal_9;
      }
      local_168._0_8_ = pU64_11;
    }
    local_158._8_8_ = uVal_14;
    local_158._0_8_ = sz_8;
    func_0x1806aa960(pU64_11,_Str,sz_8);
    *(char *)((int64_t)pU64_11 + sz_8) = '\0';
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x15884) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x15884) = 1;
      *(uint32_t *)(lVal_10 + 0x1587c) = 0xbb2b1ac5;
      *(uint16_t *)(lVal_10 + 0x15880) = 0x159;
      func_0x180673140(&LAB_1804f5fd0);
    }
    unaff_RBX = (uint64_t *)local_148;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_10 + 0x1587c);
    if (*(char *)(lVal_10 + 0x15881) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xdf597b8d;
      *(byte *)(lVal_10 + 0x15880) = *(byte *)(lVal_10 + 0x15880) ^ 0x59;
      *(uint8_t *)(lVal_10 + 0x15881) = 0;
    }
    local_138 = (uint8_t  [16])0x0;
    local_148 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_18045e970;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      local_b8 = unaff_RBX;
      if (uVal_9 < 0xfff) {
        unaff_RBX = (uint64_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        uVal_9 = func_0x180672de0(uVal_14 + 0x28);
        unaff_RBX = (uint64_t *)(uVal_9 + 0x27 & 0xffffffffffffffe0);
        unaff_RBX[-1] = uVal_9;
      }
      local_148._0_8_ = unaff_RBX;
    }
    local_138._8_8_ = uVal_14;
    local_138._0_8_ = sz_8;
    func_0x1806aa960(unaff_RBX,pU64_1,sz_8);
    *(char *)((int64_t)unaff_RBX + sz_8) = '\0';
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x15894) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x15894) = 1;
      *(uint8_t *)(lVal_10 + 0x15890) = 1;
      *(uint64_t *)(lVal_10 + 0x15888) = 0xbb36962dbe370ec1;
      func_0x180673140(&LAB_1804f6000);
    }
    unaff_RBX = (uint64_t *)local_128;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_11 = (uint64_t *)(lVal_10 + 0x15888);
    if (*(char *)(lVal_10 + 0x15890) == '\x01') {
      *pU64_11 = *pU64_11 ^ 0xbb55ff59df597b8d;
      *(uint8_t *)(lVal_10 + 0x15890) = 0;
    }
    local_118 = (uint8_t  [16])0x0;
    local_128 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_11);
    if ((int64_t)sz_8 < 0) goto LAB_18045e97d;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      local_b8 = unaff_RBX;
      if (uVal_9 < 0xfff) {
        unaff_RBX = (uint64_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        uVal_9 = func_0x180672de0(uVal_14 + 0x28);
        unaff_RBX = (uint64_t *)(uVal_9 + 0x27 & 0xffffffffffffffe0);
        unaff_RBX[-1] = uVal_9;
      }
      local_128._0_8_ = unaff_RBX;
    }
    local_118._8_8_ = uVal_14;
    local_118._0_8_ = sz_8;
    func_0x1806aa960(unaff_RBX,pU64_11,sz_8);
    *(char *)((int64_t)unaff_RBX + sz_8) = '\0';
    local_ac = (float)func_0x1800cfa00();
    local_108._8_8_ = &local_ac;
    local_108._0_8_ = param_1;
    local_f8._8_8_ = &local_1c8;
    local_f8._0_8_ = local_188;
    local_e8 = (uint8_t  [8])&local_a8;
    func_0x1804f6020(local_108,0);
    func_0x1804f6020(local_108,1);
    func_0x1804f6020(local_108,2);
    pU64_12 = local_108;
    func_0x1804f6020(pU64_12,3);
    *(float *)(param_1 + 0xde8) = *(float *)(param_1 + 0xde8) + DAT_1806c3800;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x158a4) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x158a4) = 1;
      *(uint8_t *)(lVal_10 + 0x158a0) = 1;
      *(uint64_t *)(lVal_10 + 0x15898) = 0xf583723d1cccba83;
      func_0x180673140(&LAB_1804f6400);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    unaff_RBX = (uint64_t *)(lVal_10 + 0x15898);
    if (*(char *)(lVal_10 + 0x158a0) == '\x01') {
      *unaff_RBX = *unaff_RBX ^ 0xf5f1135169abdfd1;
      *(uint8_t *)(lVal_10 + 0x158a0) = 0;
    }
    local_108 = ZEXT816(0);
    local_f8 = local_108;
    sz_8 = strlen((char *)unaff_RBX);
    if ((int64_t)sz_8 < 0) goto LAB_18045e98a;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_c0 = (uint64_t *)local_108;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_c0 = (uint64_t *)local_108;
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_12 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_10;
      }
      local_108._0_8_ = pU64_12;
    }
    local_f8._8_8_ = uVal_14;
    local_f8._0_8_ = sz_8;
    func_0x1806aa960(pU64_12,unaff_RBX,sz_8);
    pU64_12[sz_8] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x158b4) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x158b4) = 1;
      *(uint8_t *)(lVal_10 + 0x158b0) = 1;
      *(uint64_t *)(lVal_10 + 0x158a8) = 0xf5967d380ecfb095;
      func_0x180673140(&LAB_1804f6420);
    }
    unaff_RBX = (uint64_t *)local_e8;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_11 = (uint64_t *)(lVal_10 + 0x158a8);
    if (*(char *)(lVal_10 + 0x158b0) == '\x01') {
      *pU64_11 = *pU64_11 ^ 0xf5f1135169abdfd1;
      *(uint8_t *)(lVal_10 + 0x158b0) = 0;
    }
    _local_e8 = ZEXT816(0);
    local_d8._0_16_ = _local_e8;
    sz_8 = strlen((char *)pU64_11);
    if (-1 < (int64_t)sz_8) {
      uVal_14 = 0xf;
      if (0xf < sz_8) {
        uVal_9 = sz_8 | 0xf;
        uVal_14 = 0x16;
        if (0x16 < uVal_9) {
          uVal_14 = uVal_9;
        }
        local_c0 = unaff_RBX;
        if (uVal_9 < 0xfff) {
          unaff_RBX = (uint64_t *)func_0x180672de0(uVal_14 + 1);
        }
        else {
          uVal_9 = func_0x180672de0(uVal_14 + 0x28);
          unaff_RBX = (uint64_t *)(uVal_9 + 0x27 & 0xffffffffffffffe0);
          unaff_RBX[-1] = uVal_9;
        }
        local_e8 = (uint8_t  [8])unaff_RBX;
      }
      local_d8._8_8_ = uVal_14;
      local_d8._0_8_ = sz_8;
      func_0x1806aa960(unaff_RBX,pU64_11,sz_8);
      uVal_5 = DAT_1806b6550;
      uVal_4 = DAT_1806b5ef4;
      fVal_3 = DAT_1806b55e4;
      *(char *)((int64_t)unaff_RBX + sz_8) = '\0';
      lVal_10 = 0;
      pU64_12 = local_108;
      bFlag_6 = true;
      do {
        bFlag_13 = bFlag_6;
        lVal_10 = lVal_10 * 0x250 + param_1 + 0x948;
        ch_7 = func_0x1800ff0e0(lVal_10);
        if (ch_7 != '\0') break;
        func_0x1800cd3b0(pU64_12,uVal_5,3);
        func_0x180107830(local_a8,2,0,0);
        func_0x180107cc0(local_a8,uVal_4,uVal_4,0);
        func_0x180107cc0(local_a8,uVal_4,local_ac + fVal_3);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8,uVal_4,local_ac + fVal_3);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180107cc0(local_a8);
        func_0x180108350(local_a8,lVal_10);
        lVal_10 = 1;
        pU64_12 = local_e8;
        bFlag_6 = false;
      } while (bFlag_13);
      if (0xf < (uint64_t)local_d8._8_8_) {
        uVal_14 = local_d8._8_8_ + 1;
        uVal_9 = (uint64_t)local_e8;
        if (0xfff < uVal_14) {
          uVal_9 = *(uint64_t *)((int64_t)local_e8 - 8);
          if (0x1f < ((int64_t)local_e8 - 8U) - uVal_9) goto LAB_18045e9a8;
          uVal_14 = local_d8._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(uVal_9,uVal_14);
      }
      local_d8._0_16_ = ZEXT816(0xf) << 0x40;
      auArr_2[15] = 0;
      auArr_2._0_15_ = stack0xffffffffffffff19;
      _local_e8 = auArr_2 << 8;
      if (0xf < (uint64_t)local_f8._8_8_) {
        uVal_14 = local_f8._8_8_ + 1;
        uVal_9 = local_108._0_8_;
        if (0xfff < uVal_14) {
          uVal_9 = *(uint64_t *)(local_108._0_8_ - 8);
          if (0x1f < (local_108._0_8_ - 8) - uVal_9) goto LAB_18045e9a8;
          uVal_14 = local_f8._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(uVal_9,uVal_14);
      }
      func_0x18045bf10(local_188);
      return;
    }
  }
  local_c0 = unaff_RBX;
  func_0x18007ba70();
LAB_18045e9a8:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18045e9b0
void Unwind_18045e9b0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x130);
  while (param_2 + 0x60 != lVal_1) {
    lVal_1 = lVal_1 + -0x20;
    func_0x180001e70(lVal_1);
  }
  return;
}

// Unwind@18045ea50
void Unwind_18045ea50(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  pLong_3 = *(int64_t **)(param_2 + 0x128);
  do {
    if ((int64_t *)(param_2 + 0xe0) == pLong_3) {
      return;
    }
    uVal_1 = pLong_3[-1];
    if (0xf < uVal_1) {
      lVal_2 = pLong_3[-4];
      uVal_4 = uVal_1 + 1;
      lVal_5 = lVal_2;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(lVal_2 + -8);
        if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_5)) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_4 = uVal_1 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    pLong_3[-2] = 0;
    pLong_3[-1] = 0xf;
    *(uint8_t *)(pLong_3 + -4) = 0;
    pLong_3 = pLong_3 + -4;
  } while( true );
}

// Unwind@18045eb40
void Unwind_18045eb40(uint64_t param_1,int64_t param_2)
{
  func_0x18045c160(param_2 + 0xe0);
  return;
}

// Unwind@18045ebc0
void Unwind_18045ebc0(uint64_t param_1,int64_t param_2)
{
  func_0x18045bf10(param_2 + 0x60);
  return;
}

// Unwind@18045f380
void Unwind_18045f380(void)
{
  func_0x180672f60(&DAT_180840d30);
  return;
}

// Unwind@18045f3c0
void Unwind_18045f3c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18045f400
void Unwind_18045f400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18045f440
void Unwind_18045f440(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@18045f550
void Unwind_18045f550(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x30);
  func_0x18001deb0(param_2 + 0x20);
  return;
}

// Unwind@18045f580
void Unwind_18045f580(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x40),0xa8);
  return;
}

// func_0x18045f5b0
void func_0x18045f5b0(int64_t **param_1)
{
  int64_t *pLong_1;
  
  pLong_1 = *param_1;
  if (pLong_1 != (int64_t *)0x0) {
    if (*pLong_1 != 0) {
      func_0x18063eee0();
    }
    thunk_FUN_180695dd0(pLong_1,0x10);
    return;
  }
  return;
}

// Unwind@18045fb20
void Unwind_18045fb20(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18045fb50
int64_t func_0x18045fb50(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xd41a9fe69c75f80) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x4868b1db66e453f3) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18045fbf4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x4868b1db66e453f3);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18045fc1a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x4868b1db66e453f3);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x2e8ce229U) + -0xb;
  }
LAB_18045fbf4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18045fc1a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18045fc30
uint8_t func_0x18045fc30(void)
{
  uint8_t *pU64_1;
  
  if (DAT_180840a50 != 0) {
    pU64_1 = (uint8_t *)func_0x18011b6e0();
    return *pU64_1;
  }
  return 0;
}

// func_0x18045fc60
uint8_t func_0x18045fc60(uint param_1)
{
  if (0xff < param_1) {
    return 0;
  }
  return (&DAT_180840d34)[param_1];
}

// func_0x18045fc80
uint8_t func_0x18045fc80(uint param_1)
{
  if (4 < param_1) {
    return 0;
  }
  return (&DAT_180840f34)[param_1];
}

// func_0x18045fca0
uint8_t func_0x18045fca0(void)
{
  return DAT_180840f34;
}

// func_0x18045fcb0
uint8_t func_0x18045fcb0(void)
{
  return DAT_180840f35;
}

// func_0x18045fcc0
uint8_t func_0x18045fcc0(uint param_1)
{
  if (0x17 < param_1) {
    return 0;
  }
  return (&DAT_180840f3c)[param_1];
}

// func_0x18045fce0
uint8_t func_0x18045fce0(uint param_1)
{
  if (1 < param_1) {
    return 0;
  }
  return (&DAT_180840f54)[param_1];
}

// func_0x18045fd00
uint64_t * func_0x18045fd00(uint64_t *param_1)
{
  *param_1 = DAT_180840f58;
  return param_1;
}

// func_0x18045fd10
uint64_t * func_0x18045fd10(uint64_t *param_1)
{
  *param_1 = DAT_180840f60;
  return param_1;
}

// func_0x18045fd20
void func_0x18045fd20(int64_t param_1,uint8_t param_2)
{
  *(uint8_t *)(param_1 + 0xa0) = param_2;
  *(uint8_t *)(param_1 + 0xa1) = 1;
  return;
}

// func_0x18045fd30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x18045fd30(uint64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  
  lVal_1 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
  if (lVal_1 == 0) {
    _DAT_180840a60 = ZEXT816(0);
    return 0;
  }
  DAT_180840a60 = lVal_1;
  uVal_2 = func_0x180116a30(param_1);
  if (uVal_2 != DAT_180840a60) {
    return uVal_2;
  }
  DAT_180840a68 = param_1;
  uVal_3 = func_0x1806760f0();
  uVal_2 = func_0x1806760d0();
  if (uVal_3 == 24000000) {
    _DAT_180840af8 = uVal_2 * 0x29 + (int64_t)(uVal_2 * 2) / 3;
    return uVal_2 * -0x5555555555555554;
  }
  if (uVal_3 == 10000000) {
    _DAT_180840af8 = uVal_2 * 100;
    return uVal_2;
  }
  if ((uVal_2 | uVal_3) >> 0x20 == 0) {
    uVal_4 = (uVal_2 & 0xffffffff) / (uVal_3 & 0xffffffff);
    uVal_2 = (uVal_2 & 0xffffffff) % (uVal_3 & 0xffffffff);
  }
  else {
    uVal_4 = (int64_t)uVal_2 / (int64_t)uVal_3;
    uVal_2 = (int64_t)uVal_2 % (int64_t)uVal_3;
  }
  uVal_2 = uVal_2 * 1000000000;
  if ((uVal_2 | uVal_3) >> 0x20 == 0) {
    uVal_2 = (uVal_2 & 0xffffffff) / (uVal_3 & 0xffffffff);
  }
  else {
    uVal_2 = (int64_t)uVal_2 / (int64_t)uVal_3;
  }
  _DAT_180840af8 = uVal_2 + uVal_4 * 1000000000;
  return uVal_2;
}

// func_0x18045fe90
void func_0x18045fe90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVal_1;
  
  uVal_1 = 0xfffffffffffffffe;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180840a90);
  func_0x180084770(&DAT_180840a78,param_1,param_3,param_4,uVal_1);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180840a90);
  return;
}

// Unwind@18045fee0
void Unwind_18045fee0(void)
{
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180840a90);
  return;
}

// func_0x18045ff10
uint64_t func_0x18045ff10(void)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  uint64_t uVal_4;
  uint64_t extraout_RAX;
  int64_t lVal_5;
  int64_t *pLong_6;
  int64_t *pLong_7;
  
  if (*(int64_t *)(DAT_180840a58 + 0x648) == 0) {
    return SUB168(ZEXT816(0x28d0f8d6a40bdc93) * ZEXT816(0xfa3cb7d98cf6a14d),0);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180840a90);
  pLong_7 = DAT_180840a80;
  pLong_6 = DAT_180840a78;
  if (DAT_180840a78 != DAT_180840a80) {
    do {
      func_0x180116b80(*(uint64_t *)(DAT_180840a58 + 0x648),pLong_6);
      pLong_3 = DAT_180840a80;
      pLong_6 = pLong_6 + 4;
    } while (pLong_6 != pLong_7);
    pLong_7 = DAT_180840a78;
    if (DAT_180840a78 != DAT_180840a80) {
      do {
        uVal_1 = pLong_7[3];
        if (0xf < uVal_1) {
          lVal_2 = *pLong_7;
          uVal_4 = uVal_1 + 1;
          lVal_5 = lVal_2;
          if (0xfff < uVal_4) {
            lVal_5 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_5)) {
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_4 = uVal_1 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_5,uVal_4);
        }
        pLong_7[2] = 0;
        pLong_7[3] = 0xf;
        *(uint8_t *)pLong_7 = 0;
        pLong_7 = pLong_7 + 4;
      } while (pLong_7 != pLong_3);
      DAT_180840a80 = DAT_180840a78;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180840a90);
  return extraout_RAX;
}

// Unwind@1804600b0
void Unwind_1804600b0(void)
{
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180840a90);
  return;
}

// func_0x1804600f0
uint32_t func_0x1804600f0(int64_t param_1)
{
  return *(uint32_t *)(param_1 + 0xdc);
}

// func_0x180460100
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180460100(int64_t param_1,int64_t param_2)
{
  char *fnPtr_1;
  uint uVal_2;
  uint uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  func_ptr_t fnPtr_6;
  int iVal_7;
  size_t sz_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  int64_t lVal_11;
  uint64_t *pU64_12;
  int64_t lVal_13;
  char ch_14;
  uint *pU64_15;
  uint8_t *pU64_16;
  uint *pU64_17;
  uint64_t uVal_18;
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint8_t uStack_98;
  uint32_t uStack_97;
  uint32_t uStack_93;
  uint32_t uStack_8f;
  uint8_t local_88 [16];
  size_t local_78;
  uint64_t local_70;
  uint local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint16_t uStack_5c;
  uint16_t local_5a;
  uint16_t uStack_58;
  uint32_t uStack_56;
  uint16_t uStack_52;
  uint16_t uStack_50;
  uint32_t uStack_4e;
  uint16_t uStack_4a;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(int64_t *)(param_1 + 0x18) == 0) {
    return;
  }
  uStack_58 = _UNK_1806d019d;
  uStack_56 = _UNK_1806d019f;
  uStack_52 = (uint16_t)_UNK_1806d01a3;
  uStack_50 = (uint16_t)((uint)_UNK_1806d01a3 >> 0x10);
  uStack_4e = _UNK_1806d01a7;
  local_68 = _DAT_1806d018d;
  uStack_64 = _UNK_1806d0191;
  uStack_60 = _UNK_1806d0195;
  uStack_5c = _UNK_1806d0199;
  local_5a = _DAT_1806d019b;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x158d4) == '\0') {
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_10 + 0x158d4) = 1;
    func_0x18008fa60(lVal_10 + 0x158b5,&local_68);
    func_0x180673140(&LAB_1804f65f0);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x158b5);
  func_0x1804fe7f0(fnPtr_1);
  local_88 = ZEXT816(0);
  sz_8 = strlen(fnPtr_1);
  if ((int64_t)sz_8 < 0) {
    func_0x18007ba70();
LAB_180460689:
    func_0x18007ba70();
LAB_18046068f:
    do {
      invalidInstructionException();
    } while( true );
  }
  uVal_18 = 0xf;
  pU64_16 = local_88;
  if (0xf < sz_8) {
    uVal_9 = sz_8 | 0xf;
    uVal_18 = 0x16;
    if (0x16 < uVal_9) {
      uVal_18 = uVal_9;
    }
    if (uVal_9 < 0xfff) {
      pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
    }
    else {
      lVal_10 = func_0x180672de0(uVal_18 + 0x28);
      pU64_16 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_16 + -8) = lVal_10;
    }
    local_88._0_8_ = pU64_16;
  }
  local_78 = sz_8;
  local_70 = uVal_18;
  func_0x1806aa960(pU64_16,fnPtr_1,sz_8);
  pU64_16[sz_8] = 0;
  uVal_18 = local_70;
  pU64_16 = local_88;
  if (0xf < local_70) {
    pU64_16 = (uint8_t *)local_88._0_8_;
  }
  if (DAT_18083cd20 < 0x10) {
    pU64_12 = &DAT_18083cd08;
    if (DAT_18083cd18 != local_78) goto LAB_180460270;
LAB_180460257:
    if ((local_78 != 0) && (iVal_7 = memcmp(pU64_12,pU64_16,local_78), iVal_7 != 0))
    goto LAB_180460270;
    ch_14 = '\0';
  }
  else {
    pU64_12 = DAT_18083cd08;
    if (DAT_18083cd18 == local_78) goto LAB_180460257;
LAB_180460270:
    uStack_98 = UNK_1806d01bb;
    uStack_97 = _UNK_1806d01bc;
    uStack_93 = _UNK_1806d01c0;
    uStack_8f = _UNK_1806d01c4;
    local_a8 = _DAT_1806d01ab;
    uStack_a4 = _UNK_1806d01af;
    uStack_a0 = _UNK_1806d01b3;
    uStack_9c = _UNK_1806d01b7;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x158f4) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x158f4) = 1;
      func_0x18007cc40(lVal_10 + 0x158d5,&local_a8);
      func_0x180673140(&LAB_1804f6620);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x158d5);
    func_0x1804fe830(fnPtr_1);
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_5a = 0;
    sz_8 = strlen(fnPtr_1);
    if ((int64_t)sz_8 < 0) goto LAB_180460689;
    uVal_18 = 0xf;
    pU64_17 = &local_68;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_9) {
        uVal_18 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        pU64_17 = (uint *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_10 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -2) = lVal_10;
      }
      local_68 = (uint)pU64_17;
      uStack_64 = (uint32_t)((uint64_t)pU64_17 >> 0x20);
    }
    uStack_58 = (uint16_t)sz_8;
    uStack_56 = (uint32_t)(sz_8 >> 0x10);
    uStack_52 = (uint16_t)(sz_8 >> 0x30);
    uStack_50 = (uint16_t)uVal_18;
    uStack_4e = (uint32_t)(uVal_18 >> 0x10);
    uStack_4a = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(pU64_17,fnPtr_1,sz_8);
    *(uint8_t *)((int64_t)pU64_17 + sz_8) = 0;
    pU64_17 = (uint *)CONCAT44(uStack_64,local_68);
    uVal_9 = CONCAT26(uStack_4a,CONCAT42(uStack_4e,uStack_50));
    pU64_15 = &local_68;
    if (0xf < uVal_9) {
      pU64_15 = pU64_17;
    }
    sz_8 = CONCAT26(uStack_52,CONCAT42(uStack_56,uStack_58));
    pU64_12 = DAT_18083cd08;
    if (DAT_18083cd20 < 0x10) {
      pU64_12 = &DAT_18083cd08;
    }
    ch_14 = DAT_180840b28;
    if ((DAT_18083cd18 == sz_8) &&
       ((sz_8 == 0 || (iVal_7 = memcmp(pU64_12,pU64_15,sz_8), ch_14 = DAT_180840b28, iVal_7 == 0)))
       ) {
      ch_14 = '\0';
    }
    uVal_18 = local_70;
    if (0xf < uVal_9) {
      uVal_18 = uVal_9 + 1;
      pU64_15 = pU64_17;
      if (0xfff < uVal_18) {
        pU64_15 = *(uint **)(pU64_17 + -2);
        if (0x1f < (uint64_t)((int64_t)pU64_17 + (-8 - (int64_t)pU64_15))) goto LAB_18046068f;
        uVal_18 = uVal_9 + 0x28;
      }
      thunk_FUN_180695dd0(pU64_15,uVal_18);
      uVal_18 = local_70;
    }
  }
  if (0xf < uVal_18) {
    uVal_9 = uVal_18 + 1;
    lVal_10 = local_88._0_8_;
    if (0xfff < uVal_9) {
      lVal_10 = *(int64_t *)(local_88._0_8_ + -8);
      if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_10)) goto LAB_18046068f;
      uVal_9 = uVal_18 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_10,uVal_9);
  }
  if (ch_14 != '\0') {
    lVal_10 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x10);
    lVal_11 = func_0x1804f6650(lVal_10,0x85b93800);
    lVal_13 = *(int64_t *)(lVal_11 + 0x28) - *(int64_t *)(lVal_11 + 0x20);
    if (lVal_13 != 0) {
      uVal_3 = *(uint *)(*(int64_t *)(lVal_11 + 0x28) + -4);
      lVal_13 = lVal_13 >> 2;
      while (0xfffbffff < uVal_3) {
        if (lVal_13 == 1) {
          return;
        }
        uVal_3 = *(uint *)(*(int64_t *)(lVal_11 + 0x20) + -8 + lVal_13 * 4);
        lVal_13 = lVal_13 + -1;
      }
      while( true ) {
        uVal_3 = *(uint *)(*(int64_t *)(lVal_11 + 0x20) + -4 + lVal_13 * 4);
        uVal_18 = (uint64_t)((uVal_3 & 0x3ffff) >> 0xb);
        if ((uVal_18 < (uint64_t)(*(int64_t *)(lVal_10 + 0xe8) - *(int64_t *)(lVal_10 + 0xe0) >> 3))
           && (lVal_4 = *(int64_t *)(*(int64_t *)(lVal_10 + 0xe0) + uVal_18 * 8), lVal_4 != 0)) {
          uVal_2 = *(uint *)(lVal_4 + (uint64_t)(uVal_3 & 0x7ff) * 4);
          if ((((uVal_2 ^ uVal_3 & 0xfffc0000) < 0x3ffff) &&
              ((((uint64_t)(uVal_2 & 0x3ffff) < *(uint64_t *)(lVal_10 + 0x120) &&
                (uVal_18 < (uint64_t)(*(int64_t *)(lVal_11 + 0x10) - *(int64_t *)(lVal_11 + 8) >> 3)
                )) && (lVal_4 = *(int64_t *)(*(int64_t *)(lVal_11 + 8) + uVal_18 * 8), lVal_4 != 0))))
             && ((uVal_2 = *(uint *)(lVal_4 + (uint64_t)(uVal_3 & 0x7ff) * 4),
                 (uVal_3 & 0xfffc0000 ^ uVal_2) < 0x3ffff &&
                 (lVal_4 = *(int64_t *)
                           (*(int64_t *)
                             (*(int64_t *)(lVal_11 + 0x50) + (uint64_t)((uVal_2 & 0x3ff80) >> 4)) +
                           (uint64_t)(uVal_2 & 0x7f) * 8), lVal_4 != 0)))) {
            local_68 = local_68 & 0xffffff00;
            local_88._0_8_ = lVal_4;
            pLong_5 = *(int64_t **)(param_2 + 0x38);
            if (pLong_5 == (int64_t *)0x0) {
              func_0x180674610();
              fnPtr_6 = (func_ptr_t )swi(3);
              (*fnPtr_6)();
              return;
            }
            (**(func_ptr_t *)(*pLong_5 + 0x10))(pLong_5,local_88,&local_68);
          }
        }
        lVal_13 = lVal_13 + -1;
        if (lVal_13 == 0) break;
        while (0xfffbffff < *(uint *)(*(int64_t *)(lVal_11 + 0x20) + -4 + lVal_13 * 4)) {
          lVal_13 = lVal_13 + -1;
          if (lVal_13 == 0) {
            return;
          }
        }
      }
    }
  }
  return;
}

// Unwind@1804606a0
void Unwind_1804606a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x158f4) = 0;
  return;
}

// Unwind@1804606f0
void Unwind_1804606f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x158d4) = 0;
  return;
}

// Unwind@180460740
void Unwind_180460740(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x180460780
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x180460780(void)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t **ptr2_Long_7;
  int64_t **ptr2_Long_8;
  int64_t *pLong_9;
  int64_t lVal_10;
  int64_t lVal_11;
  HMODULE pHnd_12;
  int64_t *pLong_13;
  uint64_t uVal_14;
  uint64_t local_50;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t local_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840f78) && (func_0x180672ec0(&DAT_180840f78), DAT_180840f78 == -1)) {
    lVal_10 = func_0x18045fb50(&DAT_180840f80);
    if (lVal_10 == 0) {
      DAT_180840f70 = (int64_t *)0x0;
    }
    else {
      DAT_180840f70 = (int64_t *)(lVal_10 + *(int *)(lVal_10 + 3) + 7);
    }
    _Init_thread_footer(&DAT_180840f78);
  }
  if (DAT_180840f70 != (int64_t *)0x0) {
    DAT_180840a48 = *(int64_t *)(*DAT_180840f70 + 8);
  }
  if (DAT_180840a48 == 0) {
    return 0;
  }
  DAT_180840a50 = func_0x18011ad40();
  if (DAT_180840a50 == 0) {
    return 0;
  }
  uVal_6 = func_0x18011ada0(DAT_180840a48);
  DAT_180840a70 = func_0x180116e80(uVal_6);
  if (DAT_180840a70 == 0) {
    return 0;
  }
  ptr2_Long_7 = (int64_t **)func_0x18011bb60(DAT_180840a50);
  uVal_5 = 0;
  if (ptr2_Long_7[1] == (int64_t *)0x0) {
    return 0;
  }
  pLong_1 = *ptr2_Long_7;
  pLong_13 = (int64_t *)pLong_1[1];
  pLong_9 = pLong_13;
  if (*(char *)((int64_t)pLong_13 + 0x19) == '\0') {
    do {
      pLong_13 = pLong_9;
      pLong_9 = (int64_t *)*pLong_13;
    } while (*(char *)((int64_t)(int64_t *)*pLong_13 + 0x19) == '\0');
    uVal_5 = 1;
    pLong_9 = pLong_13;
    uVal_4 = 1;
    if (*(char *)((int64_t)pLong_13 + 0x19) == '\0') goto LAB_18046088a;
LAB_180460890:
    if (ptr2_Long_7[1] == (int64_t *)0x492492492492492) {
      func_0x1800a17e0();
      goto LAB_180460a58;
    }
    ptr2_Long_8 = (int64_t **)func_0x180672de0(0x38);
    *(uint8_t *)(ptr2_Long_8 + 4) = 0;
    *(uint8_t (*)[16])(ptr2_Long_8 + 5) = ZEXT816(0);
    *ptr2_Long_8 = pLong_1;
    ptr2_Long_8[1] = pLong_1;
    ptr2_Long_8[2] = pLong_1;
    *(uint16_t *)(ptr2_Long_8 + 3) = 0;
    local_50 = pLong_13;
    uStack_48 = uVal_5;
    pLong_9 = (int64_t *)func_0x1800a1550(ptr2_Long_7,&local_50,ptr2_Long_8);
  }
  else {
    pLong_9 = pLong_1;
    uVal_4 = 0;
    if (*(char *)((int64_t)pLong_1 + 0x19) != '\0') goto LAB_180460890;
LAB_18046088a:
    uVal_5 = uVal_4;
    if (*(char *)(pLong_9 + 4) != '\0') goto LAB_180460890;
  }
  DAT_180840a58 = pLong_9[5];
  if (DAT_180840a58 == 0) {
    return 0;
  }
  local_50 = (int64_t *)0x0;
  GetModuleHandleExA(6,&LAB_180460ac0,(HMODULE *)&local_50);
  _DAT_180840b18 = (HMODULE)local_50;
  lVal_10 = func_0x18011ace0(DAT_180840a48);
  if (*(int64_t *)(lVal_10 + 0x78) != 0) {
    return 1;
  }
  func_0x180074650(&local_50);
  lVal_10 = func_0x18011ace0(DAT_180840a48);
  pLong_1 = (int64_t *)(lVal_10 + 0x68);
  if (pLong_1 == &local_50) {
    uVal_2 = CONCAT44(uStack_34,uStack_38);
    if (uVal_2 < 0x10) {
      return 1;
    }
    uVal_14 = uVal_2 + 1;
    pHnd_12 = (HMODULE)local_50;
    if (0xfff < uVal_14) {
      pHnd_12 = *(HMODULE *)((int64_t)local_50 + -8);
      if (0x1f < (uint64_t)((int64_t)local_50 + (-8 - (int64_t)pHnd_12))) {
LAB_180460a58:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_14 = uVal_2 + 0x28;
    }
    thunk_FUN_180695dd0(pHnd_12,uVal_14);
    return 1;
  }
  uVal_2 = *(uint64_t *)(lVal_10 + 0x80);
  if (0xf < uVal_2) {
    lVal_3 = *pLong_1;
    uVal_14 = uVal_2 + 1;
    lVal_11 = lVal_3;
    if (0xfff < uVal_14) {
      lVal_11 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_11)) goto LAB_180460a58;
      uVal_14 = uVal_2 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_14);
  }
  *(uint32_t *)(lVal_10 + 0x78) = local_40;
  *(uint32_t *)(lVal_10 + 0x7c) = uStack_3c;
  *(uint32_t *)(lVal_10 + 0x80) = uStack_38;
  *(uint32_t *)(lVal_10 + 0x84) = uStack_34;
  *(uint32_t *)pLong_1 = (uint32_t)local_50;
  *(uint32_t *)(lVal_10 + 0x6c) = local_50._4_4_;
  *(uint32_t *)(lVal_10 + 0x70) = uStack_48;
  *(uint32_t *)(lVal_10 + 0x74) = uStack_44;
  return 1;
}

// Unwind@180460a60
void Unwind_180460a60(void)
{
  func_0x180672f60(&DAT_180840f78);
  return;
}

// Unwind@180460a90
void Unwind_180460a90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// func_0x180460b20
uint64_t * func_0x180460b20(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4, uint8_t param_5)
{
  uint8_t (*pArr16_1)[16];
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint64_t *pU64_5;
  uint8_t local_39;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_39 = param_5;
  pU64_5 = (uint64_t *)func_0x180672de0(0x80);
  pU64_5[1] = 0x100000001;
  *pU64_5 = &PTR_LAB_1806d5b50;
  func_0x1804fe870(pU64_5 + 2,param_3,param_4,&local_39);
  *param_2 = pU64_5 + 2;
  param_2[1] = pU64_5;
  pArr16_1 = *(uint8_t (**)[16])(param_1 + 0xc0);
  if (pArr16_1 == *(uint8_t (**)[16])(param_1 + 200)) {
    func_0x18008af30(param_1 + 0xb8,pArr16_1,param_2);
  }
  else {
    *pArr16_1 = ZEXT816(0);
    LOCK();
    *(int *)(pU64_5 + 1) = *(int *)(pU64_5 + 1) + 1;
    UNLOCK();
    uVal_2 = *(uint32_t *)((int64_t)param_2 + 4);
    uVal_3 = *(uint32_t *)(param_2 + 1);
    uVal_4 = *(uint32_t *)((int64_t)param_2 + 0xc);
    *(uint32_t *)*pArr16_1 = *(uint32_t *)param_2;
    *(uint32_t *)(*pArr16_1 + 4) = uVal_2;
    *(uint32_t *)(*pArr16_1 + 8) = uVal_3;
    *(uint32_t *)(*pArr16_1 + 0xc) = uVal_4;
    *(int64_t *)(param_1 + 0xc0) = *(int64_t *)(param_1 + 0xc0) + 0x10;
  }
  return param_2;
}

// Unwind@180460bf0
void Unwind_180460bf0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x30));
  return;
}

// Unwind@180460c20
void Unwind_180460c20(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x28),0x80);
  return;
}

// Unwind@180469920
void Unwind_180469920(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x28);
  return;
}

// Unwind@180469a40
void Unwind_180469a40(void)
{
  func_0x180672f60(&DAT_180841298);
  return;
}

// Unwind@18046b5b0
void Unwind_18046b5b0(void)
{
  func_0x180672f60(&DAT_180841490);
  return;
}

// Unwind@18046b680
void Unwind_18046b680(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18046b750
void Unwind_18046b750(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18046b820
void Unwind_18046b820(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@18046b8f0
void Unwind_18046b8f0(uint64_t param_1,int64_t param_2)
{
  func_0x1801a0760(param_2 + 0xf0);
  return;
}

// Unwind@18046b9c0
void Unwind_18046b9c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@18046ba90
void Unwind_18046ba90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18046bb60
void Unwind_18046bb60(uint64_t param_1,int64_t param_2)
{
  func_0x18015fd20(param_2 + 0xf0);
  return;
}

// Unwind@18046bc30
void Unwind_18046bc30(uint64_t param_1,int64_t param_2)
{
  func_0x1801a07d0(param_2 + 0x58);
  return;
}

// Unwind@18046bd00
void Unwind_18046bd00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@18046bdd0
void Unwind_18046bdd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@18046bea0
void Unwind_18046bea0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x38);
  return;
}

// Unwind@18046bf70
void Unwind_18046bf70(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0x70);
  return;
}

// Unwind@18046c040
void Unwind_18046c040(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@18046c110
void Unwind_18046c110(void)
{
  func_0x180672f60(&DAT_180841480);
  return;
}

// Unwind@18046c1e0
void Unwind_18046c1e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@18046c2b0
void Unwind_18046c2b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1644c) = 0;
  return;
}

// Unwind@18046c390
void Unwind_18046c390(uint64_t param_1,int64_t param_2)
{
  func_0x18015fd20(param_2 + 0xf0);
  return;
}

// Unwind@18046c650
void Unwind_18046c650(void)
{
  func_0x180672f60(&DAT_180841100);
  return;
}

// Unwind@18046c690
void Unwind_18046c690(void)
{
  func_0x180672f60(&DAT_180841110);
  return;
}

// Unwind@18046c6d0
void Unwind_18046c6d0(void)
{
  func_0x180672f60(&DAT_180841120);
  return;
}

// Unwind@18046d670
void Unwind_18046d670(void)
{
  func_0x180672f60(&DAT_180841338);
  return;
}

// Unwind@18046d6c0
void Unwind_18046d6c0(void)
{
  func_0x180672f60(&DAT_180841328);
  return;
}

// Unwind@18046d710
void Unwind_18046d710(void)
{
  func_0x180672f60(&DAT_180841318);
  return;
}

// Unwind@18046d760
void Unwind_18046d760(void)
{
  func_0x180672f60(&DAT_180841308);
  return;
}

// Unwind@18046d7b0
void Unwind_18046d7b0(void)
{
  func_0x180672f60(&DAT_1808412f8);
  return;
}

// Unwind@18046d800
void Unwind_18046d800(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1601c) = 0;
  return;
}

// Unwind@18046d860
void Unwind_18046d860(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1605c) = 0;
  return;
}

// Unwind@18046d8c0
void Unwind_18046d8c0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16048) = 0;
  return;
}

// Unwind@18046d920
void Unwind_18046d920(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16030) = 0;
  return;
}

// Unwind@18046d980
void Unwind_18046d980(uint64_t param_1,int64_t param_2)
{
  int *pInt_1;
  int64_t *pLong_2;
  
  func_0x18001deb0(param_2 + 0x60);
  pLong_2 = *(int64_t **)(param_2 + 0x48);
  if (pLong_2 != (int64_t *)0x0) {
    LOCK();
    pInt_1 = (int *)((int64_t)pLong_2 + 0xc);
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (*pInt_1 == 0) {
      (**(func_ptr_t *)(*pLong_2 + 8))();
    }
  }
  return;
}

// Unwind@18046d9e0
void Unwind_18046d9e0(uint64_t param_1,int64_t param_2)
{
  int *pInt_1;
  int64_t *pLong_2;
  
  func_0x18001deb0(param_2 + 0x30);
  pLong_2 = *(int64_t **)(param_2 + 0x58);
  if (pLong_2 != (int64_t *)0x0) {
    LOCK();
    pInt_1 = (int *)((int64_t)pLong_2 + 0xc);
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (*pInt_1 == 0) {
      (**(func_ptr_t *)(*pLong_2 + 8))();
    }
  }
  return;
}

// Unwind@18046da40
void Unwind_18046da40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18046da80
void Unwind_18046da80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18046dac0
void Unwind_18046dac0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18046db00
void Unwind_18046db00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18046db40
void Unwind_18046db40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18046db80
void Unwind_18046db80(uint64_t param_1,int64_t param_2)
{
  int *pInt_1;
  int64_t *pLong_2;
  
  func_0x18001deb0(param_2 + 0xa0);
  pLong_2 = *(int64_t **)(param_2 + 0x88);
  if (pLong_2 != (int64_t *)0x0) {
    LOCK();
    pInt_1 = (int *)((int64_t)pLong_2 + 0xc);
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (*pInt_1 == 0) {
      (**(func_ptr_t *)(*pLong_2 + 8))();
    }
  }
  return;
}

// Unwind@18046dd20
void Unwind_18046dd20(void)
{
  func_0x180672f60(&DAT_1808412d8);
  return;
}

// Unwind@18046e5b0
void Unwind_18046e5b0(void)
{
  func_0x180672f60(&DAT_180841650);
  return;
}

// Unwind@18046e740
void Unwind_18046e740(void)
{
  func_0x180672f60(&DAT_1808414a0);
  return;
}

// Unwind@18046eda0
void Unwind_18046eda0(void)
{
  func_0x180672f60(&DAT_1808412b8);
  return;
}

// Unwind@18046f260
void Unwind_18046f260(void)
{
  func_0x180672f60(&DAT_180841288);
  return;
}

// Unwind@18046f9f0
void Unwind_18046f9f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0xa8);
  return;
}

// Unwind@18046fa30
void Unwind_18046fa30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18046fa70
void Unwind_18046fa70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18046fab0
void Unwind_18046fab0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x80);
  return;
}

// Unwind@18046faf0
void Unwind_18046faf0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0xf8) != 0) {
    (**(func_ptr_t *)(param_2 + 0xf0))();
  }
  return;
}

// Unwind@18046fb30
void Unwind_18046fb30(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xa8);
  return;
}

// Unwind@18046fb70
void Unwind_18046fb70(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x50);
  return;
}

// Unwind@18046fbb0
void Unwind_18046fbb0(uint64_t param_1,int64_t param_2)
{
  func_0x1804a06f0(param_2 + 0xa8);
  return;
}

// Unwind@18046fbf0
void Unwind_18046fbf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18046fc30
void Unwind_18046fc30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18046fc70
void Unwind_18046fc70(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x80);
  return;
}

// Unwind@18046fcb0
void Unwind_18046fcb0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0xf8) != 0) {
    (**(func_ptr_t *)(param_2 + 0xf0))();
  }
  return;
}

// Unwind@18046fcf0
void Unwind_18046fcf0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xa8);
  return;
}

// Unwind@18046fd30
void Unwind_18046fd30(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18046fd60
void Unwind_18046fd60(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18046fe80
void Unwind_18046fe80(void)
{
  func_0x180672f60(&DAT_180841468);
  return;
}

// Unwind@180470660
void Unwind_180470660(void)
{
  func_0x180672f60(&DAT_1808416e0);
  return;
}
