#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x1802e13a0
int64_t * func_0x1802e13a0(int64_t param_1,uint param_2)
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
    if (*pLong_5 == -1) goto LAB_1802e1409;
    lVal_6 = *pLong_5 * 0x20;
    pLong_5 = (int64_t *)(lVal_3 + lVal_6);
  } while (*(uint *)(lVal_3 + 8 + lVal_6) != param_2);
  if (*(int64_t *)(param_1 + 0x70) == lVal_3 + lVal_6) {
LAB_1802e1409:
    local_38 = ZEXT816(0);
    local_3c = param_2;
    pLong_5 = (int64_t *)func_0x180672de0(0x78);
    pLong_5[1] = 0x100000001;
    *pLong_5 = (int64_t)&PTR_FUN_1806b5a60;
    if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x1c39c) < DAT_18083fd30) {
      func_0x180672ec0(&DAT_18083fd30);
      if (DAT_18083fd30 == -1) {
        func_0x1802e1970(&DAT_18083fd18);
        _Init_thread_footer(&DAT_18083fd30);
      }
    }
    local_38._0_8_ = pLong_5 + 2;
    *(uint8_t (*)[16])(pLong_5 + 7) = ZEXT816(0);
    *(uint8_t (*)[16])(pLong_5 + 5) = ZEXT816(0);
    *(uint8_t (*)[16])(pLong_5 + 3) = ZEXT816(0);
    pLong_5[9] = (int64_t)&DAT_18083fd18;
    *(uint8_t *)(pLong_5 + 10) = 1;
    pLong_5[0xb] = 0x3ffff;
    pLong_5[2] = (int64_t)&PTR_LAB_1806c2660;
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

// Unwind@1802e1570
void Unwind_1802e1570(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x50);
  return;
}

// Catch_All@1802e1860
void Catch_All_1802e1860(uint64_t param_1,int64_t param_2)
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

// func_0x1802e1970
void func_0x1802e1970(int *param_1)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083fd38) {
    func_0x180672ec0(&DAT_18083fd38);
    if (DAT_18083fd38 == -1) {
      DAT_18083fd34 = DAT_18083f31c;
      DAT_18083f31c = DAT_18083f31c + 1;
      _Init_thread_footer(&DAT_18083fd38);
    }
  }
  *param_1 = DAT_18083fd34;
  param_1[1] = -0x1478c1ca;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  return;
}

// func_0x1802e1a00
int64_t func_0x1802e1a00(int64_t param_1,uint64_t param_2)
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
        lVal_2 = func_0x180672de0(0x1e27);
        uVal_4 = lVal_2 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_4 - 8) = lVal_2;
        *(uint64_t *)(*pLong_1 + local_58 * 8) = uVal_4;
        uVal_4 = local_58 + 1;
      } while (uVal_3 != uVal_4);
      lVal_5 = *pLong_1;
    }
  }
  return (uint64_t)((uint)param_2 & 0x7f) * 0x3c + *(int64_t *)(lVal_5 + uVal_6 * 8);
}

// Catch_All@1802e1b10
void Catch_All_1802e1b10(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  func_0x18012ead0(*(uint64_t *)(param_2 + 0x38),*(uint64_t *)(param_2 + 0x30));
  func_0x18067a120(0,0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1802e1ca0
uint32_t * func_0x1802e1ca0(uint64_t param_1,uint32_t *param_2,uint64_t param_3,uint64_t param_4, uint32_t *param_5)
{
  uint32_t uVal_1;
  uint32_t *pU64_2;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  func_0x18012c2c0(param_1,&local_30,param_3,param_4,0);
  pU64_2 = (uint32_t *)func_0x1802e1a00(param_1,CONCAT44(uStack_24,uStack_28) + -1);
  *pU64_2 = *param_5;
  pU64_2[1] = param_5[1];
  pU64_2[2] = param_5[2];
  pU64_2[3] = param_5[3];
  pU64_2[4] = param_5[4];
  pU64_2[5] = param_5[5];
  pU64_2[6] = param_5[6];
  *(uint8_t *)(pU64_2 + 0xd) = 0;
  if (*(char *)(param_5 + 0xd) == '\x01') {
    *(uint8_t (*)[16])(pU64_2 + 7) = ZEXT816(0);
    *(uint64_t *)(pU64_2 + 0xb) = 0;
    uVal_1 = param_5[9];
    *(uint64_t *)(pU64_2 + 7) = *(uint64_t *)(param_5 + 7);
    pU64_2[9] = uVal_1;
    uVal_1 = param_5[0xc];
    *(uint64_t *)(pU64_2 + 10) = *(uint64_t *)(param_5 + 10);
    pU64_2[0xc] = uVal_1;
    *(uint8_t *)(pU64_2 + 0xd) = 1;
  }
  pU64_2[0xe] = param_5[0xe];
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  return param_2;
}

// Catch_All@1802e1d80
void Catch_All_1802e1d80(uint64_t param_1,int64_t param_2)
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

// Unwind@1802e1e70
void Unwind_1802e1e70(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1802e1e90
void func_0x1802e1e90(int64_t param_1,int64_t param_2)
{
  uint8_t (*pArr16_1)[16];
  int64_t lVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint8_t local_31;
  int64_t local_30;
  
  uVal_5 = param_2 + 0x7fU >> 7;
  pArr16_1 = (uint8_t (*)[16])(param_1 + 0x50);
  lVal_2 = *(int64_t *)(param_1 + 0x50);
  lVal_3 = *(int64_t *)(param_1 + 0x58);
  uVal_7 = lVal_3 - lVal_2 >> 3;
  uVal_8 = uVal_5;
  if (uVal_5 < uVal_7) {
    do {
      lVal_2 = *(int64_t *)(*(int64_t *)*pArr16_1 + uVal_8 * 8);
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) goto LAB_1802e1ff1;
      thunk_FUN_180695dd0(lVal_3,0x1e27);
      uVal_8 = uVal_8 + 1;
    } while (uVal_7 != uVal_8);
    lVal_2 = *(int64_t *)(param_1 + 0x50);
    lVal_3 = *(int64_t *)(param_1 + 0x58);
    uVal_7 = lVal_3 - lVal_2 >> 3;
  }
  lVal_6 = uVal_5 - uVal_7;
  if (uVal_7 <= uVal_5) {
    lVal_4 = lVal_3;
    if (uVal_7 <= uVal_5 && lVal_6 != 0) {
      if (uVal_5 <= (uint64_t)(*(int64_t *)(param_1 + 0x60) - lVal_2 >> 3)) {
        lVal_4 = lVal_3 + lVal_6 * 8;
        func_0x1806ab010(lVal_3,0,lVal_6 * 8);
        *(int64_t *)(param_1 + 0x58) = lVal_4;
        lVal_2 = *(int64_t *)(param_1 + 0x60);
        if (lVal_4 == lVal_2) {
          return;
        }
        goto LAB_1802e1f65;
      }
      func_0x18007bf80(pArr16_1,uVal_5,&local_31);
      lVal_4 = *(int64_t *)(param_1 + 0x58);
    }
    lVal_2 = *(int64_t *)(param_1 + 0x60);
    if (lVal_4 == lVal_2) {
      return;
    }
  }
  else {
    lVal_4 = lVal_2 + uVal_5 * 8;
    *(int64_t *)(param_1 + 0x58) = lVal_4;
    lVal_2 = *(int64_t *)(param_1 + 0x60);
    if (lVal_4 == lVal_2) {
      return;
    }
  }
LAB_1802e1f65:
  lVal_3 = *(int64_t *)*pArr16_1;
  if (lVal_3 == lVal_4) {
    if (lVal_4 != 0) {
      uVal_8 = lVal_2 - lVal_4;
      if (0xfff < uVal_8) {
        lVal_3 = *(int64_t *)(lVal_3 + -8);
        if (0x1f < (lVal_4 - lVal_3) - 8U) {
LAB_1802e1ff1:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_8 = uVal_8 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_3,uVal_8);
      *pArr16_1 = ZEXT816(0);
      *(uint64_t *)(param_1 + 0x60) = 0;
    }
  }
  else {
    local_30 = lVal_4 - lVal_3 >> 3;
    func_0x18007fe80(pArr16_1,&local_30);
  }
  return;
}

// func_0x1802e2d10
int64_t func_0x1802e2d10(uint64_t *param_1,uint64_t param_2,uint32_t *param_3,uint8_t *param_4)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  
  uVal_5 = *param_1;
  uVal_9 = ((int64_t)(param_1[1] - uVal_5) >> 4) + 1;
  uVal_6 = (int64_t)(param_1[2] - uVal_5) >> 4;
  uVal_2 = (uVal_6 >> 1) + uVal_6;
  if (uVal_2 <= uVal_9) {
    uVal_2 = uVal_9;
  }
  if (0xfffffffffffffff - (uVal_6 >> 1) < uVal_6) {
    uVal_2 = 0xfffffffffffffff;
  }
  if (uVal_2 >> 0x3c != 0) {
LAB_1802e2f5a:
    func_0x18007ba90();
    goto LAB_1802e2f5f;
  }
  lVal_10 = uVal_2 * 0x10;
  if (uVal_2 == 0) {
    uVal_2 = 0;
  }
  else if (uVal_2 < 0x100) {
    uVal_2 = func_0x180672de0(lVal_10);
  }
  else {
    if (0xffffffffffffffd < uVal_2) goto LAB_1802e2f5a;
    lVal_3 = func_0x180672de0(lVal_10 + 0x27);
    uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_2 - 8) = lVal_3;
  }
  lVal_3 = param_2 - uVal_5;
  *(uint32_t *)(uVal_2 + lVal_3) = *param_3;
  *(uint32_t *)(uVal_2 + 4 + lVal_3) = param_3[1];
  *(uint32_t *)(uVal_2 + 8 + lVal_3) = param_3[2];
  *(uint8_t *)(uVal_2 + 0xc + lVal_3) = *param_4;
  *(uint8_t *)(uVal_2 + 0xd + lVal_3) = param_4[4];
  uVal_6 = *param_1;
  uVal_5 = param_1[1];
  if (param_2 == uVal_5) {
    if (uVal_6 != param_2) {
      lVal_4 = 0;
      do {
        *(uint32_t *)(uVal_2 + lVal_4) = *(uint32_t *)(uVal_6 + lVal_4);
        *(uint32_t *)(uVal_2 + 4 + lVal_4) = *(uint32_t *)(uVal_6 + 4 + lVal_4);
        *(uint32_t *)(uVal_2 + 8 + lVal_4) = *(uint32_t *)(uVal_6 + 8 + lVal_4);
        *(uint8_t *)(uVal_2 + 0xc + lVal_4) = *(uint8_t *)(uVal_6 + 0xc + lVal_4);
        *(uint8_t *)(uVal_2 + 0xd + lVal_4) = *(uint8_t *)(uVal_6 + 0xd + lVal_4);
        lVal_7 = uVal_6 + lVal_4;
        lVal_4 = lVal_4 + 0x10;
      } while (lVal_7 + 0x10U != param_2);
      goto LAB_1802e2ef9;
    }
  }
  else {
    if (uVal_6 != param_2) {
      lVal_4 = 0;
      do {
        *(uint32_t *)(uVal_2 + lVal_4) = *(uint32_t *)(uVal_6 + lVal_4);
        *(uint32_t *)(uVal_2 + 4 + lVal_4) = *(uint32_t *)(uVal_6 + 4 + lVal_4);
        *(uint32_t *)(uVal_2 + 8 + lVal_4) = *(uint32_t *)(uVal_6 + 8 + lVal_4);
        *(uint16_t *)(uVal_2 + 0xc + lVal_4) = *(uint16_t *)(uVal_6 + 0xc + lVal_4);
        lVal_7 = uVal_6 + lVal_4;
        lVal_4 = lVal_4 + 0x10;
      } while (lVal_7 + 0x10U != param_2);
      uVal_5 = param_1[1];
    }
    if (param_2 != uVal_5) {
      lVal_4 = lVal_3 + uVal_2;
      lVal_7 = 0;
      do {
        *(uint32_t *)(lVal_4 + 0x10 + lVal_7) = *(uint32_t *)(param_2 + lVal_7);
        *(uint32_t *)(lVal_4 + 0x14 + lVal_7) = *(uint32_t *)(param_2 + 4 + lVal_7);
        *(uint32_t *)(lVal_4 + 0x18 + lVal_7) = *(uint32_t *)(param_2 + 8 + lVal_7);
        *(uint16_t *)(lVal_4 + 0x1c + lVal_7) = *(uint16_t *)(param_2 + 0xc + lVal_7);
        lVal_1 = param_2 + lVal_7;
        lVal_7 = lVal_7 + 0x10;
      } while (lVal_1 + 0x10U != uVal_5);
    }
LAB_1802e2ef9:
    uVal_6 = *param_1;
  }
  if (uVal_6 != 0) {
    uVal_8 = param_1[2] - uVal_6;
    uVal_5 = uVal_6;
    if (0xfff < uVal_8) {
      uVal_5 = *(uint64_t *)(uVal_6 - 8);
      if (0x1f < (uVal_6 - 8) - uVal_5) {
LAB_1802e2f5f:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_8 = uVal_8 + 0x27;
    }
    thunk_FUN_180695dd0(uVal_5,uVal_8);
  }
  *param_1 = uVal_2;
  param_1[1] = uVal_9 * 0x10 + uVal_2;
  param_1[2] = lVal_10 + uVal_2;
  return lVal_3 + uVal_2;
}

// func_0x1802e31c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e31c0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cbc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x89f52b3945a9b135;
    param_1[1][8] = param_1[1][8] ^ 0x35;
    param_1[1][9] = param_1[1][9] ^ 0xb1;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x1802e31f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e31f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ca4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ca0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ca8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xe9b5b3b1c77d4573;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xc77d4573;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xb1;
    param_1[1][0xd] = param_1[1][0xd] ^ 0xb3;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x1802e3230
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3230(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b4eb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b4eb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b4eb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b4ebc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xffc3978bc98f5399;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1802e3260
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3260(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bedd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bedd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bedd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806beddc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x6709d1a1f5f5e985;
    param_1[1][8] = param_1[1][8] ^ 0x85;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x1802e3290
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3290(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae4d4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae4d0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae4d8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae4dc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xc5;
    param_1[1][1] = param_1[1][1] ^ 0x73;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e32b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e32b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6894;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6890;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6898;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b689c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x971941d90d7fe737;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1802e32e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e32e0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b4eb4;
    uVal_2 = param_1[2] ^ _UNK_1806b4eb8;
    uVal_3 = param_1[3] ^ _UNK_1806b4ebc;
    *param_1 = *param_1 ^ _DAT_1806b4eb0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b2700,0);
  }
  return;
}

// func_0x1802e3320
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3320(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2db4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2db0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2db8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dbc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x73;
    param_1[1][1] = param_1[1][1] ^ 0x53;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e3340
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3340(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2dc4;
    uVal_2 = param_1[2] ^ _UNK_1806b2dc8;
    uVal_3 = param_1[3] ^ _UNK_1806b2dcc;
    *param_1 = *param_1 ^ _DAT_1806b2dc0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b6650,0);
  }
  return;
}

// func_0x1802e33b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e33b0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2ccc;
  uVal_9 = _UNK_1806b2cc8;
  uVal_8 = _UNK_1806b2cc4;
  uVal_7 = _DAT_1806b2cc0;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2ccc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xf9913b87;
    param_1[2][4] = param_1[2][4] ^ 0x45;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x1802e3420
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3420(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b68ac;
  uVal_9 = _UNK_1806b68a8;
  uVal_8 = _UNK_1806b68a4;
  uVal_7 = _DAT_1806b68a0;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b68a4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b68a0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b68a8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b68ac;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x53;
    param_1[2][1] = param_1[2][1] ^ 0x93;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x1802e3480
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3480(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2df4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2df0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2df8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dfc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xcd15890f1fef9f7d;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x1fef9f7d;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xf;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1802e34c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e34c0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e1c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x7b6501a9;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e34e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e34e0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806aebbc;
  uVal_9 = _UNK_1806aebb8;
  uVal_8 = _UNK_1806aebb4;
  uVal_7 = _DAT_1806aebb0;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aebb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aebb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aebb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aebbc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806bede0,0);
  }
  return;
}

// func_0x1802e3530
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3530(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e8c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xdd55518f;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e3550
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3550(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806aeedc;
  uVal_9 = _UNK_1806aeed8;
  uVal_8 = _UNK_1806aeed4;
  uVal_7 = _DAT_1806aeed0;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeed4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeed0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeed8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeedc;
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

// func_0x1802e3580
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3580(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806bedf4;
    uVal_2 = param_1[2] ^ _UNK_1806bedf8;
    uVal_3 = param_1[3] ^ _UNK_1806bedfc;
    *param_1 = *param_1 ^ _DAT_1806bedf0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806bee00,0);
  }
  return;
}

// func_0x1802e35c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e35c0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bee14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bee10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bee18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bee1c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xdff77dcf6f49fdeb;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x6f49fdeb;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x1802e35f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e35f0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806bee24;
    uVal_2 = param_1[2] ^ _UNK_1806bee28;
    uVal_3 = param_1[3] ^ _UNK_1806bee2c;
    *param_1 = *param_1 ^ _DAT_1806bee20;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x95db052fc5cb6335;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806bee30,0);
  }
  return;
}

// func_0x1802e3640
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3640(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806bee44;
    uVal_2 = param_1[2] ^ _UNK_1806bee48;
    uVal_3 = param_1[3] ^ _UNK_1806bee4c;
    *param_1 = *param_1 ^ _DAT_1806bee40;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x61a7ddf587214d1b;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806be850,0);
  }
  return;
}

// func_0x1802e36c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e36c0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bee54;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bee50;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bee58;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bee5c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x1dc5cf41;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e36e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e36e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aea14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aea10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aea18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aea1c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x8d;
    param_1[1][1] = param_1[1][1] ^ 0xf5;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e3700
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3700(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806bee64;
    uVal_2 = param_1[2] ^ _UNK_1806bee68;
    uVal_3 = param_1[3] ^ _UNK_1806bee6c;
    *param_1 = *param_1 ^ _DAT_1806bee60;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806bee70,0);
  }
  return;
}

// func_0x1802e3740
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3740(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aef44;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aef40;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aef48;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aef4c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x67;
    param_1[1][1] = param_1[1][1] ^ 0x75;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e3760
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3760(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bea34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bea30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bea38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bea3c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x7765a7895dd951e3;
    param_1[1][8] = param_1[1][8] ^ 0xe3;
    param_1[1][9] = param_1[1][9] ^ 0x51;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x1802e3790
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3790(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806bee84;
    uVal_2 = param_1[2] ^ _UNK_1806bee88;
    uVal_3 = param_1[3] ^ _UNK_1806bee8c;
    *param_1 = *param_1 ^ _DAT_1806bee80;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0xd3e3114549e7b7b3;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806bee90,0);
  }
  return;
}

// func_0x1802e37e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e37e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806beea4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806beea0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806beea8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806beeac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xdb3f9129e75119e9;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xe75119e9;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x1802e3810
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3810(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806beeb4;
    uVal_2 = param_1[2] ^ _UNK_1806beeb8;
    uVal_3 = param_1[3] ^ _UNK_1806beebc;
    *param_1 = *param_1 ^ _DAT_1806beeb0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806ae1c0,0);
  }
  return;
}

// func_0x1802e3850
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3850(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806beec4;
    uVal_2 = param_1[2] ^ _UNK_1806beec8;
    uVal_3 = param_1[3] ^ _UNK_1806beecc;
    *param_1 = *param_1 ^ _DAT_1806beec0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x3137030b2137eb3b;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806beed0,0);
  }
  return;
}

// func_0x1802e38a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e38a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806beee4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806beee0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806beee8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806beeec;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xed;
    param_1[1][1] = param_1[1][1] ^ 0xf3;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e38c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e38c0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806beef4;
    uVal_2 = param_1[2] ^ _UNK_1806beef8;
    uVal_3 = param_1[3] ^ _UNK_1806beefc;
    *param_1 = *param_1 ^ _DAT_1806beef0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806bef00,0);
  }
  return;
}

// func_0x1802e3910
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3910(uint8_t (*param_1)[16])
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
  if (param_1[2][0] == '\x01') {
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
    param_1[2][0] = 0;
  }
  return;
}

// func_0x1802e3940
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3940(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d6c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xd54d5575;
    param_1[1][4] = param_1[1][4] ^ 0x37;
    param_1[1][5] = param_1[1][5] ^ 0xd7;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1802e39a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e39a0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2914;
    uVal_2 = param_1[2] ^ _UNK_1806b2918;
    uVal_3 = param_1[3] ^ _UNK_1806b291c;
    *param_1 = *param_1 ^ _DAT_1806b2910;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b26f0,0);
  }
  return;
}

// func_0x1802e39e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e39e0(uint8_t (*param_1)[16])
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
  if (param_1[2][1] == '\x01') {
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
    param_1[2][0] = param_1[2][0] ^ 0x75;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x1802e3a10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3a10(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d8c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xb4d771d;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e3a30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3a30(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5604;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5600;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5608;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b560c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xd3c78945;
    param_1[1][4] = param_1[1][4] ^ 0x73;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1802e3a60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3a60(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2c9c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x9f9d9cf;
    param_1[1][4] = param_1[1][4] ^ 0xc5;
    param_1[1][5] = param_1[1][5] ^ 0x81;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1802e3a90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3a90(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b54c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b54c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b54c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b54cc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x2549d30d;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e3ab0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3ab0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2db4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2db0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2db8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dbc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x39e3c19bbb935373;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1802e3ae0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3ae0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cdc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x8f4359cd;
    param_1[1][4] = param_1[1][4] ^ 0x61;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1802e3b10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3b10(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d1c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x91219b1ff7f5f1d5;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xf7f5f1d5;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x1f;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1802e3b50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3b50(uint8_t (*param_1)[16])
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
  if (param_1[2][4] == '\x01') {
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
    param_1[2][4] = 0;
  }
  return;
}

// func_0x1802e3b80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3b80(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae4d4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae4d0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae4d8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae4dc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xefc7bf81a1d573c5;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xa1d573c5;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x81;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1802e3bc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3bc0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2d8c;
  uVal_9 = _UNK_1806b2d88;
  uVal_8 = _UNK_1806b2d84;
  uVal_7 = _DAT_1806b2d80;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d8c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x1d;
    param_1[2][1] = param_1[2][1] ^ 0x77;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x1802e3c80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3c80(uint8_t (*param_1)[16])
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
  if (param_1[2][1] == '\x01') {
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
    param_1[2][0] = param_1[2][0] ^ 0x35;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x1802e3d60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e3d60(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e3c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xa37d1fd3;
    param_1[1][4] = param_1[1][4] ^ 0xbd;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1802e4080
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4080(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bef14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bef10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bef18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bef1c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xe1;
    param_1[1][1] = param_1[1][1] ^ 0x7d;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e40d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e40d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae374;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae370;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae378;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae37c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x73;
    param_1[1][1] = param_1[1][1] ^ 0x15;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e40f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e40f0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806bef24;
    uVal_2 = param_1[2] ^ _UNK_1806bef28;
    uVal_3 = param_1[3] ^ _UNK_1806bef2c;
    *param_1 = *param_1 ^ _DAT_1806bef20;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806bef30,0);
  }
  return;
}

// func_0x1802e4130
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4130(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aef84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aef80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aef88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aef8c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x3b;
    param_1[1][1] = param_1[1][1] ^ 0x89;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e41e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e41e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bef44;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bef40;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bef48;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bef4c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x27ada77def277b71;
    param_1[1][8] = param_1[1][8] ^ 0x71;
    param_1[1][9] = param_1[1][9] ^ 0x7b;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x1802e4210
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4210(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bef54;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bef50;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bef58;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bef5c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x77;
    param_1[1][1] = param_1[1][1] ^ 0x11;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e4230
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4230(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bef54;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bef50;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bef58;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bef5c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xbd251177;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e4250
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4250(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bef64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bef60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bef68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bef6c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x97;
    param_1[1][1] = param_1[1][1] ^ 0x5f;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e4270
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4270(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bef64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bef60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bef68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bef6c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x69815f97;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e4290
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4290(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806bef74;
    uVal_2 = param_1[2] ^ _UNK_1806bef78;
    uVal_3 = param_1[3] ^ _UNK_1806bef7c;
    *param_1 = *param_1 ^ _DAT_1806bef70;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806bef80,0);
  }
  return;
}

// func_0x1802e42d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e42d0(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806b54c4;
    uVal_3 = param_1[2] ^ _UNK_1806b54c8;
    uVal_4 = param_1[3] ^ _UNK_1806b54cc;
    *param_1 = *param_1 ^ _DAT_1806b54c0;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806bef90;
  }
  return;
}

// func_0x1802e43a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e43a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e44;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e40;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e48;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e4c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x3b7577db115f355b;
    param_1[1][8] = param_1[1][8] ^ 0x5b;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x1802e4510
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4510(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2eb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2eb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2eb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2ebc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x4711e7eb;
    param_1[1][4] = param_1[1][4] ^ 199;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1802e4540
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4540(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bb2f4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bb2f0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bb2f8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bb2fc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xb2f6bcb;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e4560
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4560(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aebd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aebd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aebd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aebdc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xb5d9db1d;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e4580
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4580(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aec34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aec30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aec38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aec3c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x67;
    param_1[1][1] = param_1[1][1] ^ 0x6b;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e45a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e45a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aec34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aec30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aec38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aec3c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x730d6b67;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e45c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e45c0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806aefbc;
  uVal_9 = _UNK_1806aefb8;
  uVal_8 = _UNK_1806aefb4;
  uVal_7 = _DAT_1806aefb0;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aefb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aefb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aefb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aefbc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806befa0,0);
  }
  return;
}

// func_0x1802e4610
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4610(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806befb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806befb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806befb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806befbc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x298149372f5715f9;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x2f5715f9;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x37;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1802e4650
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4650(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806befc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806befc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806befc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806befcc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x5185477d;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e4670
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4670(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806befcc;
  uVal_9 = _UNK_1806befc8;
  uVal_8 = _UNK_1806befc4;
  uVal_7 = _DAT_1806befc0;
  if (param_1[2][4] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806befc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806befc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806befc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806befcc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x5185477d;
    param_1[2][4] = 0;
  }
  return;
}

// func_0x1802e46a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e46a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806befd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806befd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806befd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806befdc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x918bf945;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e46c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e46c0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806befe4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806befe0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806befe8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806befec;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x21;
    param_1[1][1] = param_1[1][1] ^ 99;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e46e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e46e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806befe4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806befe0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806befe8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806befec;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x79ed6321;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e4700
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4700(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806beff4;
    uVal_3 = param_1[2] ^ _UNK_1806beff8;
    uVal_4 = param_1[3] ^ _UNK_1806beffc;
    *param_1 = *param_1 ^ _DAT_1806beff0;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806bf000;
  }
  return;
}

// func_0x1802e4760
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4760(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bf014;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bf010;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bf018;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bf01c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x5f;
    param_1[1][1] = param_1[1][1] ^ 0x5b;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e4780
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4780(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bf014;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bf010;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bf018;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bf01c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xcb815b5f;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e47a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e47a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bf024;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bf020;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bf028;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bf02c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xe7;
    param_1[1][1] = param_1[1][1] ^ 0x17;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e47c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e47c0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bf024;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bf020;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bf028;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bf02c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x2be717e7;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e47e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e47e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bf034;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bf030;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bf038;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bf03c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x8d;
    param_1[1][1] = param_1[1][1] ^ 0xd3;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e4800
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4800(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bf034;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bf030;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bf038;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bf03c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x27f5d38d;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e4820
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4820(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ca4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ca0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ca8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cac;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xc77d4573;
    param_1[1][4] = param_1[1][4] ^ 0xb1;
    param_1[1][5] = param_1[1][5] ^ 0xb3;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1802e4880
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4880(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2d6c;
  uVal_9 = _UNK_1806b2d68;
  uVal_8 = _UNK_1806b2d64;
  uVal_7 = _DAT_1806b2d60;
  if (param_1[2][4] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d6c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xd54d5575;
    param_1[2][4] = 0;
  }
  return;
}

// func_0x1802e48b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e48b0(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806b2ca4;
    uVal_3 = param_1[2] ^ _UNK_1806b2ca8;
    uVal_4 = param_1[3] ^ _UNK_1806b2cac;
    *param_1 = *param_1 ^ _DAT_1806b2ca0;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806b6450;
  }
  return;
}

// func_0x1802e4910
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4910(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d74;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d70;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d78;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d7c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x93a3c787;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e4930
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4930(uint8_t (*param_1)[16])
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
  if (param_1[2][3] == '\x01') {
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
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806be370,0);
  }
  return;
}

// func_0x1802e4980
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4980(uint8_t (*param_1)[16])
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
  if (param_1[2][3] == '\x01') {
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
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806b5c40,0);
  }
  return;
}

// func_0x1802e49d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e49d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b54c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b54c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b54c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b54cc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xd;
    param_1[1][1] = param_1[1][1] ^ 0xd3;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802e49f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e49f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6894;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6890;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6898;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b689c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xd7fe737;
    param_1[1][4] = param_1[1][4] ^ 0xd9;
    param_1[1][5] = param_1[1][5] ^ 0x41;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1802e4a20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4a20(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2914;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2910;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2918;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b291c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xeb279b691ff3fb37;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1802e4a50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4a50(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5b04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5b00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5b08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b5b0c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xe569d1dd;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e4a70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4a70(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d1c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xf7f5f1d5;
    param_1[1][4] = param_1[1][4] ^ 0x1f;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1802e4aa0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4aa0(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806b6494;
    uVal_3 = param_1[2] ^ _UNK_1806b6498;
    uVal_4 = param_1[3] ^ _UNK_1806b649c;
    *param_1 = *param_1 ^ _DAT_1806b6490;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806bb160;
  }
  return;
}

// func_0x1802e4b00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4b00(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d8c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xbb2103bf0b4d771d;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xb4d771d;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xbf;
    param_1[1][0xd] = param_1[1][0xd] ^ 3;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x1802e4b40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4b40(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b4eb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b4eb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b4eb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b4ebc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xffc3978bc98f5399;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xc98f5399;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x1802e4b70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4b70(uint8_t (*param_1)[16])
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
  if (param_1[2][0] == '\x01') {
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
    param_1[2][0] = 0;
  }
  return;
}

// func_0x1802e4bd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4bd0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2ccc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xf9913b87;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e4bf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4bf0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6164;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6160;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6168;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b616c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x7d0149afab056bdd;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1802e4c20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4c20(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2ddc;
  uVal_9 = _UNK_1806b2dd8;
  uVal_8 = _UNK_1806b2dd4;
  uVal_7 = _DAT_1806b2dd0;
  if (param_1[2][4] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2dd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2dd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2dd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2ddc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x81e15bed;
    param_1[2][4] = 0;
  }
  return;
}

// func_0x1802e4c80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4c80(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2dec;
  uVal_9 = _UNK_1806b2de8;
  uVal_8 = _UNK_1806b2de4;
  uVal_7 = _DAT_1806b2de0;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2de4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2de0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2de8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dec;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x9b4dbd9f;
    param_1[2][4] = param_1[2][4] ^ 0xcd;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x1802e4cc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4cc0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2664;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2660;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2668;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b266c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x7599e56d;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1802e4ce0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4ce0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2df4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2df0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2df8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dfc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xcd15890f1fef9f7d;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x1fef9f7d;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x1802e4d10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4d10(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2cd4;
    uVal_2 = param_1[2] ^ _UNK_1806b2cd8;
    uVal_3 = param_1[3] ^ _UNK_1806b2cdc;
    *param_1 = *param_1 ^ _DAT_1806b2cd0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b5bb0,0);
  }
  return;
}

// func_0x1802e4d50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4d50(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806ae4d4;
    uVal_2 = param_1[2] ^ _UNK_1806ae4d8;
    uVal_3 = param_1[3] ^ _UNK_1806ae4dc;
    *param_1 = *param_1 ^ _DAT_1806ae4d0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806be670,0);
  }
  return;
}

// func_0x1802e4dc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4dc0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806be3d4;
    uVal_2 = param_1[2] ^ _UNK_1806be3d8;
    uVal_3 = param_1[3] ^ _UNK_1806be3dc;
    *param_1 = *param_1 ^ _DAT_1806be3d0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806ae830,0);
  }
  return;
}

// func_0x1802e4e00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4e00(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d74;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d70;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d78;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d7c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x47abcda593a3c787;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1802e4e30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802e4e30(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d1c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x91219b1ff7f5f1d5;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xf7f5f1d5;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x1f;
    param_1[1][0xd] = param_1[1][0xd] ^ 0x9b;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x1802e5290
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802e5290(uint64_t *param_1)
{
  uint *pU64_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  uint64_t *pU64_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  uint32_t *pU64_7;
  char *fnPtr_8;
  uint32_t uVal_9;
  func_ptr_t fnPtr_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint32_t uVal_14;
  uint32_t uVal_15;
  uint64_t uVal_16;
  uint64_t *pU64_17;
  size_t sz_18;
  uint64_t uVal_19;
  int64_t lVal_20;
  uint64_t **ptr2_U64_21;
  uint64_t *pU64_22;
  uint64_t ***ptr3_U64_23;
  uint8_t *pU64_24;
  uint64_t ***ptr3_U64_25;
  uint64_t uVal_26;
  uint uVal_27;
  uint uVal_28;
  uint uVal_29;
  uint uVal_30;
  uint64_t in_stack_fffffffffffffc70;
  uint32_t uVal_31;
  uint uVal_32;
  uint8_t local_370 [56];
  uint64_t local_338;
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
  uint8_t local_e8 [16];
  uint32_t local_d8;
  uint32_t uStack_d4;
  uint32_t uStack_d0;
  uint16_t uStack_cc;
  uint8_t uStack_ca;
  uint8_t uStack_c9;
  uint16_t uStack_c8;
  uint8_t uStack_c6;
  uint8_t uStack_c5;
  uint16_t uStack_c4;
  uint8_t uStack_c2;
  uint8_t uStack_c1;
  uint16_t uStack_c0;
  uint8_t uStack_be;
  uint8_t uStack_bd;
  uint16_t uStack_bc;
  uint16_t uStack_ba;
  uint16_t uStack_b8;
  uint32_t uStack_b6;
  uint32_t uStack_b2;
  uint64_t ***local_a8;
  uint16_t uStack_a0;
  uint32_t uStack_9e;
  uint8_t uStack_9a;
  uint8_t uStack_99;
  uint16_t uStack_98;
  uint32_t uStack_96;
  uint8_t uStack_92;
  uint8_t uStack_91;
  uint16_t uStack_90;
  uint8_t uStack_8e;
  undefined5 uStack_8d;
  uint64_t *local_80;
  uint8_t local_74;
  uint8_t local_73;
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
  
  uVal_31 = (uint32_t)((uint64_t)in_stack_fffffffffffffc70 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  uStack_b8 = _UNK_1806c5ba0;
  uStack_b6 = _UNK_1806c5ba2;
  uStack_b2 = _UNK_1806c5ba6;
  uStack_c8 = (uint16_t)_DAT_1806c5b90;
  uStack_c6 = (uint8_t)((uint)_DAT_1806c5b90 >> 0x10);
  uStack_c5 = (uint8_t)((uint)_DAT_1806c5b90 >> 0x18);
  uStack_c4 = (uint16_t)_UNK_1806c5b94;
  uStack_c2 = (uint8_t)((uint)_UNK_1806c5b94 >> 0x10);
  uStack_c1 = (uint8_t)((uint)_UNK_1806c5b94 >> 0x18);
  uStack_c0 = _UNK_1806c5b98;
  uStack_be = (uint8_t)_DAT_1806c5b9a;
  uStack_bd = (uint8_t)((ushort)_DAT_1806c5b9a >> 8);
  uStack_bc = _UNK_1806c5b9c;
  uStack_ba = _UNK_1806c5b9e;
  local_d8 = _DAT_1806c5b80;
  uStack_d4 = _UNK_1806c5b84;
  uStack_d0 = _UNK_1806c5b88;
  uStack_cc = (uint16_t)_UNK_1806c5b8c;
  uStack_ca = (uint8_t)((uint)_UNK_1806c5b8c >> 0x10);
  uStack_c9 = (uint8_t)((uint)_UNK_1806c5b8c >> 0x18);
  local_e8._8_8_ = _UNK_1806c5b78;
  local_e8._0_8_ = _DAT_1806c5b70;
  local_80 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xd4b4) == '\0') {
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_20 + 0xd4b4) = 1;
    func_0x1802d9b30(lVal_20 + 0xd479,local_e8);
    func_0x180673140(&LAB_180363690);
  }
  uVal_13 = _UNK_1806b5b0c;
  uVal_12 = _UNK_1806b5b08;
  uVal_11 = _UNK_1806b5b04;
  uVal_32 = _DAT_1806b5b00;
  lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_20 + 0xd479);
  if (*(char *)(lVal_20 + 0xd4b3) == '\x01') {
    uVal_27 = *(uint *)(lVal_20 + 0xd47d) ^ _UNK_1806b5b04;
    uVal_28 = *(uint *)(lVal_20 + 0xd481) ^ _UNK_1806b5b08;
    uVal_29 = *(uint *)(lVal_20 + 0xd485) ^ _UNK_1806b5b0c;
    *pU64_1 = *pU64_1 ^ _DAT_1806b5b00;
    *(uint *)(lVal_20 + 0xd47d) = uVal_27;
    *(uint *)(lVal_20 + 0xd481) = uVal_28;
    *(uint *)(lVal_20 + 0xd485) = uVal_29;
    *(uint *)(lVal_20 + 0xd489) = *(uint *)(lVal_20 + 0xd489) ^ uVal_32;
    *(uint *)(lVal_20 + 0xd48d) = *(uint *)(lVal_20 + 0xd48d) ^ uVal_11;
    *(uint *)(lVal_20 + 0xd491) = *(uint *)(lVal_20 + 0xd491) ^ uVal_12;
    *(uint *)(lVal_20 + 0xd495) = *(uint *)(lVal_20 + 0xd495) ^ uVal_13;
    *(uint *)(lVal_20 + 0xd499) = *(uint *)(lVal_20 + 0xd499) ^ uVal_32;
    *(uint *)(lVal_20 + 0xd49d) = *(uint *)(lVal_20 + 0xd49d) ^ uVal_11;
    *(uint *)(lVal_20 + 0xd4a1) = *(uint *)(lVal_20 + 0xd4a1) ^ uVal_12;
    *(uint *)(lVal_20 + 0xd4a5) = *(uint *)(lVal_20 + 0xd4a5) ^ uVal_13;
    *(uint64_t *)(lVal_20 + 0xd4a9) = *(uint64_t *)(lVal_20 + 0xd4a9) ^ SUB168(_DAT_1806b5b10,0);
    *(byte *)(lVal_20 + 0xd4b1) = *(byte *)(lVal_20 + 0xd4b1) ^ 0xdd;
    *(byte *)(lVal_20 + 0xd4b2) = *(byte *)(lVal_20 + 0xd4b2) ^ 0xd1;
    *(uint8_t *)(lVal_20 + 0xd4b3) = 0;
  }
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  local_e8 = (uint8_t  [16])0x0;
  sz_18 = strlen((char *)pU64_1);
  if ((int64_t)sz_18 < 0) {
    func_0x18007ba70();
LAB_1802e8233:
    func_0x18007ba70();
LAB_1802e8239:
    local_61 = 1;
    func_0x18007ba70();
LAB_1802e8246:
    local_6a = 1;
    func_0x18007ba70();
LAB_1802e8253:
    local_62 = 1;
    func_0x18007ba70();
LAB_1802e8260:
    local_6b = 1;
    func_0x18007ba70();
LAB_1802e826d:
    local_63 = 1;
    func_0x18007ba70();
LAB_1802e827a:
    local_6c = 1;
    func_0x18007ba70();
LAB_1802e8287:
    local_64 = 1;
    func_0x18007ba70();
LAB_1802e8294:
    local_6d = 1;
    func_0x18007ba70();
LAB_1802e82a1:
    local_65 = 1;
    func_0x18007ba70();
LAB_1802e82ae:
    local_6e = 1;
    func_0x18007ba70();
LAB_1802e82bb:
    local_66 = 1;
    func_0x18007ba70();
LAB_1802e82c8:
    local_6f = 1;
    func_0x18007ba70();
LAB_1802e82d5:
    local_67 = 1;
    func_0x18007ba70();
LAB_1802e82e2:
    local_70 = 1;
    func_0x18007ba70();
LAB_1802e82ef:
    local_68 = 1;
    func_0x18007ba70();
LAB_1802e82fc:
    local_71 = 1;
    func_0x18007ba70();
LAB_1802e8309:
    local_73 = 1;
    func_0x18007ba70();
LAB_1802e8316:
    local_72 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_18 < 0x10) {
      pU64_24 = local_e8;
      uVal_26 = 0xf;
    }
    else {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        lVal_20 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_20;
      }
      local_e8._0_8_ = pU64_24;
    }
    local_d8 = (uint32_t)sz_18;
    uStack_d4 = (uint32_t)(sz_18 >> 0x20);
    uStack_d0 = (uint32_t)uVal_26;
    uStack_cc = (uint16_t)(uVal_26 >> 0x20);
    uStack_ca = (uint8_t)(uVal_26 >> 0x30);
    uStack_c9 = (uint8_t)(uVal_26 >> 0x38);
    func_0x1806aa960(pU64_24,pU64_1,sz_18);
    pU64_24[sz_18] = 0;
    pU64_24 = local_e8;
    func_0x180132ee0(local_80,0,4,pU64_24);
    uVal_26 = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT24(uStack_cc,uStack_d0)));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      lVal_20 = local_e8._0_8_;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_20)) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    pU64_17 = local_80;
    *local_80 = &PTR_LAB_1806c3e60;
    *(uint32_t *)(local_80 + 0x16) = 0x3f800000;
    uVal_15 = _UNK_1806c3fcc;
    uVal_14 = _UNK_1806c3fc8;
    uVal_9 = _UNK_1806c3fc4;
    *(uint32_t *)((int64_t)local_80 + 0xb4) = _DAT_1806c3fc0;
    *(uint32_t *)(local_80 + 0x17) = uVal_9;
    *(uint32_t *)((int64_t)local_80 + 0xbc) = uVal_14;
    *(uint32_t *)(local_80 + 0x18) = uVal_15;
    uVal_16 = _UNK_1806c3fd8;
    *(uint64_t *)((int64_t)local_80 + 0xc4) = _DAT_1806c3fd0;
    *(uint64_t *)((int64_t)local_80 + 0xcc) = uVal_16;
    *(uint32_t *)((int64_t)local_80 + 0xd4) = 0xd;
    *(uint8_t *)(local_80 + 0x22) = 0;
    *(uint16_t *)(local_80 + 0x23) = 0;
    *(uint8_t *)((int64_t)local_80 + 0x29c) = 0;
    *(uint8_t *)(local_80 + 0x6c) = 0;
    *(uint16_t *)(local_80 + 0x6d) = 0;
    pU64_22 = local_80 + 0x71;
    *(uint8_t *)((int64_t)local_80 + 0x4ec) = 0;
    *(uint8_t *)(local_80 + 0xb6) = 0;
    *(uint16_t *)(local_80 + 0xb7) = 0;
    pU64_2 = local_80 + 0xbb;
    *(uint8_t *)((int64_t)local_80 + 0x73c) = 0;
    *(uint8_t *)(local_80 + 0x100) = 0;
    *(uint16_t *)(local_80 + 0x101) = 0;
    pU64_3 = local_80 + 0x105;
    *(uint8_t *)((int64_t)local_80 + 0x98c) = 0;
    *(uint8_t *)(local_80 + 0x14a) = 0;
    *(uint16_t *)(local_80 + 0x14b) = 0;
    pU64_4 = local_80 + 0x14f;
    *(uint8_t *)((int64_t)local_80 + 0xbdc) = 0;
    *(uint8_t *)(local_80 + 0x194) = 0;
    *(uint16_t *)(local_80 + 0x195) = 0;
    pU64_5 = local_80 + 0x199;
    *(uint8_t *)((int64_t)local_80 + 0xe2c) = 0;
    *(uint8_t *)(local_80 + 0x1de) = 0;
    *(uint16_t *)(local_80 + 0x1df) = 0;
    *(uint8_t *)((int64_t)local_80 + 0x107c) = 0;
    *(uint8_t *)(local_80 + 0x228) = 0;
    *(uint16_t *)(local_80 + 0x229) = 0;
    *(uint8_t *)((int64_t)local_80 + 0x12cc) = 0;
    *(uint8_t (*)[16])(local_80 + 0x1d) = ZEXT816(0);
    *(uint8_t (*)[16])(local_80 + 0x1b) = ZEXT816(0);
    local_80[0x1f] = 0;
    *(uint8_t (*)[16])(local_80 + 0x24) = ZEXT816(0);
    *(uint16_t *)(local_80 + 0x26) = 0;
    func_0x1806ab010(local_80 + 0x27,0,0x12e);
    *(uint8_t (*)[16])(pU64_17 + 0x4d) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x4f) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x51) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x54) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x56) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x58) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x5a) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x5c) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x5e) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_17 + 0x2fc) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x62) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 100) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x66) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x68) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x6e) = ZEXT816(0);
    *(uint16_t *)(pU64_17 + 0x70) = 0;
    func_0x1806ab010(pU64_22,0,0x12e);
    *(uint8_t (*)[16])(pU64_17 + 0x97) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x99) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x9b) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x9e) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xa0) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xa2) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xa4) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xa6) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xa8) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_17 + 0x54c) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xac) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xae) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xb0) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xb2) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xb8) = ZEXT816(0);
    *(uint16_t *)(pU64_17 + 0xba) = 0;
    func_0x1806ab010(pU64_2,0,0x12e);
    *(uint8_t (*)[16])(pU64_17 + 0xe1) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xe3) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xe5) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xe8) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xea) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xec) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xee) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xf0) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xf2) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_17 + 0x79c) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xf6) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xf8) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xfa) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0xfc) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x102) = ZEXT816(0);
    *(uint16_t *)(pU64_17 + 0x104) = 0;
    func_0x1806ab010(pU64_3,0,0x12e);
    *(uint8_t (*)[16])(pU64_17 + 299) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x12d) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x12f) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x132) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x134) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x136) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x138) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x13a) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x13c) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_17 + 0x9ec) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x140) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x142) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x144) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x146) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x14c) = ZEXT816(0);
    *(uint16_t *)(pU64_17 + 0x14e) = 0;
    func_0x1806ab010(pU64_4,0,0x12e);
    *(uint8_t (*)[16])(pU64_17 + 0x175) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x177) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x179) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x17c) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x17e) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x180) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x182) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x184) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x186) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_17 + 0xc3c) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x18a) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x18c) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x18e) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 400) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x196) = ZEXT816(0);
    *(uint16_t *)(pU64_17 + 0x198) = 0;
    func_0x1806ab010(pU64_5,0,0x12e);
    *(uint8_t (*)[16])(pU64_17 + 0x1bf) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x1c1) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x1c3) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x1c6) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x1c8) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x1ca) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x1cc) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x1ce) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x1d0) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_17 + 0xe8c) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x1d4) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x1d6) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x1d8) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x1da) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x1e0) = ZEXT816(0);
    *(uint16_t *)(pU64_17 + 0x1e2) = 0;
    func_0x1806ab010(pU64_17 + 0x1e3,0,0x12e);
    *(uint8_t (*)[16])(pU64_17 + 0x209) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x20b) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x20d) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x210) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x212) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x214) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x216) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x218) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x21a) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_17 + 0x10dc) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x21e) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x220) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x222) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x224) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x22a) = ZEXT816(0);
    *(uint16_t *)(pU64_17 + 0x22c) = 0;
    func_0x1806ab010(pU64_17 + 0x22d,0,0x12e);
    *(uint8_t (*)[16])(pU64_17 + 0x253) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x255) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 599) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x25a) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x25c) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x25e) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x260) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x262) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x264) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_17 + 0x132c) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x268) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x26a) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x26c) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x26e) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x270) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x272) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x274) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x276) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x278) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x27a) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_17 + 0x27c) = ZEXT816(0);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd4c4) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd4c4) = 1;
      *(uint8_t *)(lVal_20 + 0xd4c0) = 1;
      *(uint64_t *)(lVal_20 + 0xd4b8) = 0x47cfa8c9f1c2a9e2;
      func_0x180673140(&LAB_1803636d0);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_6 = (uint64_t *)(lVal_20 + 0xd4b8);
    if (*(char *)(lVal_20 + 0xd4c0) == '\x01') {
      *pU64_6 = *pU64_6 ^ 0x47abcda593a3c787;
      *(uint8_t *)(lVal_20 + 0xd4c0) = 0;
    }
    local_f0 = local_80 + 0x1b;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    uStack_c9 = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_18 = strlen((char *)pU64_6);
    if ((int64_t)sz_18 < 0) goto LAB_1802e8233;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        lVal_20 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_20;
      }
      local_e8._0_8_ = pU64_24;
    }
    local_d8 = (uint32_t)sz_18;
    uStack_d4 = (uint32_t)(sz_18 >> 0x20);
    uStack_d0 = (uint32_t)uVal_26;
    uStack_cc = (uint16_t)(uVal_26 >> 0x20);
    uStack_ca = (uint8_t)(uVal_26 >> 0x30);
    uStack_c9 = (uint8_t)(uVal_26 >> 0x38);
    func_0x1806aa960(pU64_24,pU64_6,sz_18);
    pU64_24[sz_18] = 0;
    pU64_24 = local_e8;
    func_0x1801d4c30(local_80,pU64_24);
    uVal_26 = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT24(uStack_cc,uStack_d0)));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      lVal_20 = local_e8._0_8_;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_20)) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    local_338 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_338 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_370);
    }
    pU64_22 = local_80 + 0x16;
    uVal_9 = *(uint32_t *)pU64_22;
    local_d8 = _DAT_1806c5bba;
    uStack_d4 = _UNK_1806c5bbe;
    uStack_d0 = _UNK_1806c5bc2;
    uStack_cc = (uint16_t)_UNK_1806c5bc6;
    local_e8._8_8_ = _UNK_1806c5bb2;
    local_e8._0_8_ = _DAT_1806c5baa;
    uStack_ca = 0x57;
    uStack_c9 = 0x51;
    uStack_c8 = 0xab3d;
    uStack_c6 = 0x7d;
    uStack_c5 = 0x1d;
    uStack_c4 = 0x7375;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd4ec) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd4ec) = 1;
      func_0x180086e20(lVal_20 + 0xd4c5,local_e8);
      func_0x180673140(&LAB_1803636f0);
    }
    uVal_13 = _UNK_1806b54cc;
    uVal_12 = _UNK_1806b54c8;
    uVal_11 = _UNK_1806b54c4;
    uVal_32 = _DAT_1806b54c0;
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_20 + 0xd4c5);
    if (*(char *)(lVal_20 + 0xd4eb) == '\x01') {
      uVal_27 = *(uint *)(lVal_20 + 0xd4c9) ^ _UNK_1806b54c4;
      uVal_28 = *(uint *)(lVal_20 + 0xd4cd) ^ _UNK_1806b54c8;
      uVal_29 = *(uint *)(lVal_20 + 0xd4d1) ^ _UNK_1806b54cc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b54c0;
      *(uint *)(lVal_20 + 0xd4c9) = uVal_27;
      *(uint *)(lVal_20 + 0xd4cd) = uVal_28;
      *(uint *)(lVal_20 + 0xd4d1) = uVal_29;
      *(uint *)(lVal_20 + 0xd4d5) = *(uint *)(lVal_20 + 0xd4d5) ^ uVal_32;
      *(uint *)(lVal_20 + 0xd4d9) = *(uint *)(lVal_20 + 0xd4d9) ^ uVal_11;
      *(uint *)(lVal_20 + 0xd4dd) = *(uint *)(lVal_20 + 0xd4dd) ^ uVal_12;
      *(uint *)(lVal_20 + 0xd4e1) = *(uint *)(lVal_20 + 0xd4e1) ^ uVal_13;
      *(uint *)(lVal_20 + 0xd4e5) = *(uint *)(lVal_20 + 0xd4e5) ^ 0x2549d30d;
      *(byte *)(lVal_20 + 0xd4e9) = *(byte *)(lVal_20 + 0xd4e9) ^ 0x45;
      *(byte *)(lVal_20 + 0xd4ea) = *(byte *)(lVal_20 + 0xd4ea) ^ 0x73;
      *(uint8_t *)(lVal_20 + 0xd4eb) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    local_a8 = (uint64_t ***)0x0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_1802e8239;
    if (sz_18 < 0x10) {
      ptr3_U64_25 = &local_a8;
      uVal_26 = 0xf;
    }
    else {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_61 = 1;
        ptr3_U64_25 = (uint64_t ***)func_0x180672de0(uVal_26 + 1);
        local_a8 = ptr3_U64_25;
      }
      else {
        local_61 = 1;
        ptr2_U64_21 = (uint64_t **)func_0x180672de0(uVal_26 + 0x28);
        ptr3_U64_25 = (uint64_t ***)((int64_t)ptr2_U64_21 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_25[-1] = ptr2_U64_21;
        local_a8 = ptr3_U64_25;
      }
    }
    uStack_98 = (uint16_t)sz_18;
    uStack_96 = (uint32_t)(sz_18 >> 0x10);
    uStack_92 = (uint8_t)(sz_18 >> 0x30);
    uStack_91 = (uint8_t)(sz_18 >> 0x38);
    uStack_90 = (uint16_t)uVal_26;
    uStack_8e = (uint8_t)(uVal_26 >> 0x10);
    uStack_8d = (undefined5)(uVal_26 >> 0x18);
    func_0x1806aa960(ptr3_U64_25,pU64_1,sz_18);
    *(uint8_t *)((int64_t)ptr3_U64_25 + sz_18) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd4f8) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd4f8) = 1;
      *(uint8_t *)(lVal_20 + 0xd4f6) = 1;
      *(uint32_t *)(lVal_20 + 0xd4f0) = 0x4928b05e;
      *(uint16_t *)(lVal_20 + 0xd4f4) = 0x7320;
      func_0x180673140(&LAB_180363720);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_20 + 0xd4f0);
    if (*(char *)(lVal_20 + 0xd4f6) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x2549d30d;
      *(byte *)(lVal_20 + 0xd4f4) = *(byte *)(lVal_20 + 0xd4f4) ^ 0x45;
      *(byte *)(lVal_20 + 0xd4f5) = *(byte *)(lVal_20 + 0xd4f5) ^ 0x73;
      *(uint8_t *)(lVal_20 + 0xd4f6) = 0;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    uStack_c9 = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_1802e8246;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_6a = 1;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_6a = 1;
        lVal_20 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_20;
      }
      local_e8._0_8_ = pU64_24;
    }
    local_d8 = (uint32_t)sz_18;
    uStack_d4 = (uint32_t)(sz_18 >> 0x20);
    uStack_d0 = (uint32_t)uVal_26;
    uStack_cc = (uint16_t)(uVal_26 >> 0x20);
    uStack_ca = (uint8_t)(uVal_26 >> 0x30);
    uStack_c9 = (uint8_t)(uVal_26 >> 0x38);
    func_0x1806aa960(pU64_24,pU64_1,sz_18);
    pU64_24[sz_18] = 0;
    uVal_32 = 0x40a00000;
    pU64_24 = local_e8;
    ptr3_U64_25 = &local_a8;
    func_0x1801cd2e0(local_80,pU64_24,ptr3_U64_25,pU64_22,uVal_9,CONCAT44(uVal_31,0x3dcccccd),0x40a00000,
                  local_370,0);
    uVal_26 = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT24(uStack_cc,uStack_d0)));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      lVal_20 = local_e8._0_8_;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_20)) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    uVal_26 = CONCAT53(uStack_8d,CONCAT12(uStack_8e,uStack_90));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      ptr3_U64_23 = local_a8;
      if (0xfff < uVal_19) {
        ptr3_U64_23 = (uint64_t ***)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr3_U64_23))) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_23,uVal_19);
    }
    local_2f8 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_2f8 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_330);
    }
    pU64_7 = (uint32_t *)((int64_t)local_80 + 0xb4);
    uVal_31 = *pU64_7;
    local_a8 = _DAT_1806c5bd0;
    uStack_a0 = (uint16_t)_UNK_1806c5bd8;
    uStack_9e = (uint32_t)((uint64_t)_UNK_1806c5bd8 >> 0x10);
    uStack_9a = 0xa8;
    uStack_99 = 0x9b;
    uStack_98 = 0x4e5;
    uStack_96 = 0xbfe9d5bc;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd510) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd510) = 1;
      func_0x18007cab0(lVal_20 + 0xd4f9,&local_a8);
      func_0x180673140(&LAB_180363750);
    }
    fnPtr_8 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xd4f9);
    func_0x18036e8c0(fnPtr_8);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    uStack_c9 = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_18 = strlen(fnPtr_8);
    if ((int64_t)sz_18 < 0) goto LAB_1802e8253;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_62 = 1;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_62 = 1;
        lVal_20 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_20;
      }
      local_e8._0_8_ = pU64_24;
    }
    local_d8 = (uint32_t)sz_18;
    uStack_d4 = (uint32_t)(sz_18 >> 0x20);
    uStack_d0 = (uint32_t)uVal_26;
    uStack_cc = (uint16_t)(uVal_26 >> 0x20);
    uStack_ca = (uint8_t)(uVal_26 >> 0x30);
    uStack_c9 = (uint8_t)(uVal_26 >> 0x38);
    func_0x1806aa960(pU64_24,fnPtr_8,sz_18);
    pU64_24[sz_18] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd51c) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd51c) = 1;
      *(uint8_t *)(lVal_20 + 0xd51a) = 1;
      *(uint32_t *)(lVal_20 + 0xd514) = 0xceba1b96;
      *(uint16_t *)(lVal_20 + 0xd518) = 0xbff5;
      func_0x180673140(&LAB_180363780);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_20 + 0xd514);
    if (*(char *)(lVal_20 + 0xd51a) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xa1d573c5;
      *(byte *)(lVal_20 + 0xd518) = *(byte *)(lVal_20 + 0xd518) ^ 0x81;
      *(byte *)(lVal_20 + 0xd519) = *(byte *)(lVal_20 + 0xd519) ^ 0xbf;
      *(uint8_t *)(lVal_20 + 0xd51a) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    local_a8 = (uint64_t ***)0x0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_1802e8260;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_6b = 1;
        ptr3_U64_25 = (uint64_t ***)func_0x180672de0(uVal_26 + 1);
        local_a8 = ptr3_U64_25;
      }
      else {
        local_6b = 1;
        ptr2_U64_21 = (uint64_t **)func_0x180672de0(uVal_26 + 0x28);
        ptr3_U64_25 = (uint64_t ***)((int64_t)ptr2_U64_21 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_25[-1] = ptr2_U64_21;
        local_a8 = ptr3_U64_25;
      }
    }
    uStack_98 = (uint16_t)sz_18;
    uStack_96 = (uint32_t)(sz_18 >> 0x10);
    uStack_92 = (uint8_t)(sz_18 >> 0x30);
    uStack_91 = (uint8_t)(sz_18 >> 0x38);
    uStack_90 = (uint16_t)uVal_26;
    uStack_8e = (uint8_t)(uVal_26 >> 0x10);
    uStack_8d = (undefined5)(uVal_26 >> 0x18);
    func_0x1806aa960(ptr3_U64_25,pU64_1,sz_18);
    *(uint8_t *)((int64_t)ptr3_U64_25 + sz_18) = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    ptr3_U64_25 = &local_a8;
    pU64_24 = local_e8;
    func_0x1801d3800(local_80,ptr3_U64_25,pU64_24,pU64_7,uVal_31,local_330,uVal_32);
    uVal_26 = CONCAT53(uStack_8d,CONCAT12(uStack_8e,uStack_90));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      ptr3_U64_23 = local_a8;
      if (0xfff < uVal_19) {
        ptr3_U64_23 = (uint64_t ***)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr3_U64_23))) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_23,uVal_19);
    }
    uVal_26 = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT24(uStack_cc,uStack_d0)));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      lVal_20 = local_e8._0_8_;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_20)) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    local_2b8 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_2b8 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_2f0);
    }
    uVal_31 = *(uint32_t *)(local_80 + 0x17);
    uStack_98 = _UNK_1806c5bf6;
    uStack_96 = _UNK_1806c5bf8;
    uStack_92 = (uint8_t)_UNK_1806c5bfc;
    uStack_91 = (uint8_t)((uint)_UNK_1806c5bfc >> 8);
    uStack_90 = (uint16_t)((uint)_UNK_1806c5bfc >> 0x10);
    local_a8 = _DAT_1806c5be6;
    uStack_a0 = _UNK_1806c5bee;
    uStack_9e = _DAT_1806c5bf0;
    uStack_9a = (uint8_t)_UNK_1806c5bf4;
    uStack_99 = (uint8_t)((ushort)_UNK_1806c5bf4 >> 8);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd538) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd538) = 1;
      func_0x1800d9840(lVal_20 + 0xd51d,&local_a8);
      func_0x180673140(&LAB_1803637b0);
    }
    fnPtr_8 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xd51d);
    func_0x1802e31c0(fnPtr_8);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    uStack_c9 = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_18 = strlen(fnPtr_8);
    if ((int64_t)sz_18 < 0) goto LAB_1802e826d;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_63 = 1;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_63 = 1;
        lVal_20 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_20;
      }
      local_e8._0_8_ = pU64_24;
    }
    local_d8 = (uint32_t)sz_18;
    uStack_d4 = (uint32_t)(sz_18 >> 0x20);
    uStack_d0 = (uint32_t)uVal_26;
    uStack_cc = (uint16_t)(uVal_26 >> 0x20);
    uStack_ca = (uint8_t)(uVal_26 >> 0x30);
    uStack_c9 = (uint8_t)(uVal_26 >> 0x38);
    func_0x1806aa960(pU64_24,fnPtr_8,sz_18);
    pU64_24[sz_18] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd544) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd544) = 1;
      *(uint32_t *)(lVal_20 + 0xd53c) = 0x27c4de77;
      *(uint16_t *)(lVal_20 + 0xd540) = 0x139;
      func_0x180673140(&LAB_1803637e0);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_20 + 0xd53c);
    if (*(char *)(lVal_20 + 0xd541) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x45a9b135;
      *(byte *)(lVal_20 + 0xd540) = *(byte *)(lVal_20 + 0xd540) ^ 0x39;
      *(uint8_t *)(lVal_20 + 0xd541) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    local_a8 = (uint64_t ***)0x0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_1802e827a;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_6c = 1;
        ptr3_U64_25 = (uint64_t ***)func_0x180672de0(uVal_26 + 1);
        local_a8 = ptr3_U64_25;
      }
      else {
        local_6c = 1;
        ptr2_U64_21 = (uint64_t **)func_0x180672de0(uVal_26 + 0x28);
        ptr3_U64_25 = (uint64_t ***)((int64_t)ptr2_U64_21 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_25[-1] = ptr2_U64_21;
        local_a8 = ptr3_U64_25;
      }
    }
    pU64_2 = local_80;
    pU64_22 = local_80 + 0x17;
    uStack_98 = (uint16_t)sz_18;
    uStack_96 = (uint32_t)(sz_18 >> 0x10);
    uStack_92 = (uint8_t)(sz_18 >> 0x30);
    uStack_91 = (uint8_t)(sz_18 >> 0x38);
    uStack_90 = (uint16_t)uVal_26;
    uStack_8e = (uint8_t)(uVal_26 >> 0x10);
    uStack_8d = (undefined5)(uVal_26 >> 0x18);
    func_0x1806aa960(ptr3_U64_25,pU64_1,sz_18);
    *(uint8_t *)((int64_t)ptr3_U64_25 + sz_18) = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    ptr3_U64_25 = &local_a8;
    pU64_24 = local_e8;
    func_0x1801d3800(pU64_2,ptr3_U64_25,pU64_24,pU64_22,uVal_31,local_2f0,uVal_32);
    uVal_26 = CONCAT53(uStack_8d,CONCAT12(uStack_8e,uStack_90));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      ptr3_U64_23 = local_a8;
      if (0xfff < uVal_19) {
        ptr3_U64_23 = (uint64_t ***)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr3_U64_23))) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_23,uVal_19);
    }
    uVal_26 = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT24(uStack_cc,uStack_d0)));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      lVal_20 = local_e8._0_8_;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_20)) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    local_278 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_278 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_2b0);
    }
    uVal_31 = *(uint32_t *)((int64_t)local_80 + 0xbc);
    local_a8 = _DAT_1806c5c00;
    uStack_a0 = (uint16_t)_UNK_1806c5c08;
    uStack_9e = (uint32_t)((uint64_t)_UNK_1806c5c08 >> 0x10);
    uStack_9a = 0xca;
    uStack_99 = 0x94;
    uStack_98 = 0x4665;
    uStack_96 = 0xd4fad54;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd55c) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd55c) = 1;
      func_0x18007cab0(lVal_20 + 0xd545,&local_a8);
      func_0x180673140(&LAB_180363810);
    }
    fnPtr_8 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xd545);
    func_0x18036e8f0(fnPtr_8);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    uStack_c9 = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_18 = strlen(fnPtr_8);
    if ((int64_t)sz_18 < 0) goto LAB_1802e8287;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_64 = 1;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_64 = 1;
        lVal_20 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_20;
      }
      local_e8._0_8_ = pU64_24;
    }
    local_d8 = (uint32_t)sz_18;
    uStack_d4 = (uint32_t)(sz_18 >> 0x20);
    uStack_d0 = (uint32_t)uVal_26;
    uStack_cc = (uint16_t)(uVal_26 >> 0x20);
    uStack_ca = (uint8_t)(uVal_26 >> 0x30);
    uStack_c9 = (uint8_t)(uVal_26 >> 0x38);
    func_0x1806aa960(pU64_24,fnPtr_8,sz_18);
    pU64_24[sz_18] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd568) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd568) = 1;
      *(uint8_t *)(lVal_20 + 0xd566) = 1;
      *(uint32_t *)(lVal_20 + 0xd560) = 0xac5e5e03;
      *(uint16_t *)(lVal_20 + 0xd564) = 0xd54;
      func_0x180673140(&LAB_180363840);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_20 + 0xd560);
    if (*(char *)(lVal_20 + 0xd566) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xd93d3145;
      *(byte *)(lVal_20 + 0xd564) = *(byte *)(lVal_20 + 0xd564) ^ 0x27;
      *(byte *)(lVal_20 + 0xd565) = *(byte *)(lVal_20 + 0xd565) ^ 0xd;
      *(uint8_t *)(lVal_20 + 0xd566) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    local_a8 = (uint64_t ***)0x0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_1802e8294;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_6d = 1;
        ptr3_U64_25 = (uint64_t ***)func_0x180672de0(uVal_26 + 1);
        local_a8 = ptr3_U64_25;
      }
      else {
        local_6d = 1;
        ptr2_U64_21 = (uint64_t **)func_0x180672de0(uVal_26 + 0x28);
        ptr3_U64_25 = (uint64_t ***)((int64_t)ptr2_U64_21 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_25[-1] = ptr2_U64_21;
        local_a8 = ptr3_U64_25;
      }
    }
    pU64_22 = local_80;
    lVal_20 = (int64_t)local_80 + 0xbc;
    uStack_98 = (uint16_t)sz_18;
    uStack_96 = (uint32_t)(sz_18 >> 0x10);
    uStack_92 = (uint8_t)(sz_18 >> 0x30);
    uStack_91 = (uint8_t)(sz_18 >> 0x38);
    uStack_90 = (uint16_t)uVal_26;
    uStack_8e = (uint8_t)(uVal_26 >> 0x10);
    uStack_8d = (undefined5)(uVal_26 >> 0x18);
    func_0x1806aa960(ptr3_U64_25,pU64_1,sz_18);
    *(uint8_t *)((int64_t)ptr3_U64_25 + sz_18) = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    ptr3_U64_25 = &local_a8;
    pU64_24 = local_e8;
    func_0x1801d3800(pU64_22,ptr3_U64_25,pU64_24,lVal_20,uVal_31,local_2b0,uVal_32);
    uVal_26 = CONCAT53(uStack_8d,CONCAT12(uStack_8e,uStack_90));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      ptr3_U64_23 = local_a8;
      if (0xfff < uVal_19) {
        ptr3_U64_23 = (uint64_t ***)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr3_U64_23))) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_23,uVal_19);
    }
    uVal_26 = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT24(uStack_cc,uStack_d0)));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      lVal_20 = local_e8._0_8_;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_20)) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    local_238 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_238 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_270);
    }
    uVal_31 = *(uint32_t *)(local_80 + 0x18);
    uStack_98 = _UNK_1806c5c26;
    uStack_96 = _UNK_1806c5c28;
    uStack_92 = (uint8_t)_UNK_1806c5c2c;
    uStack_91 = (uint8_t)((uint)_UNK_1806c5c2c >> 8);
    uStack_90 = (uint16_t)((uint)_UNK_1806c5c2c >> 0x10);
    local_a8 = _DAT_1806c5c16;
    uStack_a0 = _UNK_1806c5c1e;
    uStack_9e = _DAT_1806c5c20;
    uStack_9a = (uint8_t)_UNK_1806c5c24;
    uStack_99 = (uint8_t)((ushort)_UNK_1806c5c24 >> 8);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd584) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd584) = 1;
      func_0x1800d9840(lVal_20 + 0xd569,&local_a8);
      func_0x180673140(&LAB_180363870);
    }
    fnPtr_8 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xd569);
    func_0x18036e920(fnPtr_8);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    uStack_c9 = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_18 = strlen(fnPtr_8);
    if ((int64_t)sz_18 < 0) goto LAB_1802e82a1;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_65 = 1;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_65 = 1;
        lVal_20 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_20;
      }
      local_e8._0_8_ = pU64_24;
    }
    local_d8 = (uint32_t)sz_18;
    uStack_d4 = (uint32_t)(sz_18 >> 0x20);
    uStack_d0 = (uint32_t)uVal_26;
    uStack_cc = (uint16_t)(uVal_26 >> 0x20);
    uStack_ca = (uint8_t)(uVal_26 >> 0x30);
    uStack_c9 = (uint8_t)(uVal_26 >> 0x38);
    func_0x1806aa960(pU64_24,fnPtr_8,sz_18);
    pU64_24[sz_18] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd590) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd590) = 1;
      *(uint32_t *)(lVal_20 + 0xd588) = 0x7f2b1251;
      *(uint16_t *)(lVal_20 + 0xd58c) = 0x1bf;
      func_0x180673140(&LAB_1803638a0);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_20 + 0xd588);
    if (*(char *)(lVal_20 + 0xd58d) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xb4d771d;
      *(byte *)(lVal_20 + 0xd58c) = *(byte *)(lVal_20 + 0xd58c) ^ 0xbf;
      *(uint8_t *)(lVal_20 + 0xd58d) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    local_a8 = (uint64_t ***)0x0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_1802e82ae;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_6e = 1;
        ptr3_U64_25 = (uint64_t ***)func_0x180672de0(uVal_26 + 1);
        local_a8 = ptr3_U64_25;
      }
      else {
        local_6e = 1;
        ptr2_U64_21 = (uint64_t **)func_0x180672de0(uVal_26 + 0x28);
        ptr3_U64_25 = (uint64_t ***)((int64_t)ptr2_U64_21 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_25[-1] = ptr2_U64_21;
        local_a8 = ptr3_U64_25;
      }
    }
    pU64_2 = local_80;
    pU64_22 = local_80 + 0x18;
    uStack_98 = (uint16_t)sz_18;
    uStack_96 = (uint32_t)(sz_18 >> 0x10);
    uStack_92 = (uint8_t)(sz_18 >> 0x30);
    uStack_91 = (uint8_t)(sz_18 >> 0x38);
    uStack_90 = (uint16_t)uVal_26;
    uStack_8e = (uint8_t)(uVal_26 >> 0x10);
    uStack_8d = (undefined5)(uVal_26 >> 0x18);
    func_0x1806aa960(ptr3_U64_25,pU64_1,sz_18);
    *(uint8_t *)((int64_t)ptr3_U64_25 + sz_18) = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    ptr3_U64_25 = &local_a8;
    pU64_24 = local_e8;
    func_0x1801d3800(pU64_2,ptr3_U64_25,pU64_24,pU64_22,uVal_31,local_270,uVal_32);
    uVal_26 = CONCAT53(uStack_8d,CONCAT12(uStack_8e,uStack_90));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      ptr3_U64_23 = local_a8;
      if (0xfff < uVal_19) {
        ptr3_U64_23 = (uint64_t ***)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr3_U64_23))) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_23,uVal_19);
    }
    uVal_26 = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT24(uStack_cc,uStack_d0)));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      lVal_20 = local_e8._0_8_;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_20)) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    local_1f8 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_1f8 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_230);
    }
    uVal_31 = *(uint32_t *)((int64_t)local_80 + 0xc4);
    uStack_98 = (uint16_t)((uint)_UNK_1806c5c3f >> 8);
    uStack_96._1_3_ = (undefined3)_UNK_1806c5c43;
    uStack_96 = CONCAT31(uStack_96._1_3_,(char)((uint)_UNK_1806c5c3f >> 0x18));
    uStack_92 = (uint8_t)((uint)_UNK_1806c5c43 >> 0x18);
    uStack_91 = (uint8_t)_UNK_1806c5c47;
    uStack_90 = (uint16_t)((uint)_UNK_1806c5c47 >> 8);
    uStack_8e = (uint8_t)((uint)_UNK_1806c5c47 >> 0x18);
    local_a8 = _DAT_1806c5c30;
    uStack_a0 = (uint16_t)_UNK_1806c5c38;
    uStack_9e = (uint32_t)(CONCAT43(_DAT_1806c5c3b,_UNK_1806c5c38) >> 0x10);
    uStack_9a = (uint8_t)((uint)_DAT_1806c5c3b >> 0x18);
    uStack_99 = UNK_1806c5c3f;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd5b0) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd5b0) = 1;
      func_0x18007c9b0(lVal_20 + 0xd591,&local_a8);
      func_0x180673140(&LAB_1803638d0);
    }
    fnPtr_8 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xd591);
    func_0x1801bd840(fnPtr_8);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    uStack_c9 = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_18 = strlen(fnPtr_8);
    if ((int64_t)sz_18 < 0) goto LAB_1802e82bb;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_66 = 1;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_66 = 1;
        lVal_20 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_20;
      }
      local_e8._0_8_ = pU64_24;
    }
    local_d8 = (uint32_t)sz_18;
    uStack_d4 = (uint32_t)(sz_18 >> 0x20);
    uStack_d0 = (uint32_t)uVal_26;
    uStack_cc = (uint16_t)(uVal_26 >> 0x20);
    uStack_ca = (uint8_t)(uVal_26 >> 0x30);
    uStack_c9 = (uint8_t)(uVal_26 >> 0x38);
    func_0x1806aa960(pU64_24,fnPtr_8,sz_18);
    pU64_24[sz_18] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd5bc) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd5bc) = 1;
      *(uint8_t *)(lVal_20 + 0xd5ba) = 1;
      *(uint32_t *)(lVal_20 + 0xd5b4) = 0x71a88a7f;
      *(uint16_t *)(lVal_20 + 0xd5b8) = 0xefcf;
      func_0x180673140(&LAB_180363900);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_20 + 0xd5b4);
    if (*(char *)(lVal_20 + 0xd5ba) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x19cfe32d;
      *(byte *)(lVal_20 + 0xd5b8) = *(byte *)(lVal_20 + 0xd5b8) ^ 0xbb;
      *(byte *)(lVal_20 + 0xd5b9) = *(byte *)(lVal_20 + 0xd5b9) ^ 0xef;
      *(uint8_t *)(lVal_20 + 0xd5ba) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    local_a8 = (uint64_t ***)0x0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_1802e82c8;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_6f = 1;
        ptr3_U64_25 = (uint64_t ***)func_0x180672de0(uVal_26 + 1);
        local_a8 = ptr3_U64_25;
      }
      else {
        local_6f = 1;
        ptr2_U64_21 = (uint64_t **)func_0x180672de0(uVal_26 + 0x28);
        ptr3_U64_25 = (uint64_t ***)((int64_t)ptr2_U64_21 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_25[-1] = ptr2_U64_21;
        local_a8 = ptr3_U64_25;
      }
    }
    pU64_22 = local_80;
    lVal_20 = (int64_t)local_80 + 0xc4;
    uStack_98 = (uint16_t)sz_18;
    uStack_96 = (uint32_t)(sz_18 >> 0x10);
    uStack_92 = (uint8_t)(sz_18 >> 0x30);
    uStack_91 = (uint8_t)(sz_18 >> 0x38);
    uStack_90 = (uint16_t)uVal_26;
    uStack_8e = (uint8_t)(uVal_26 >> 0x10);
    uStack_8d = (undefined5)(uVal_26 >> 0x18);
    func_0x1806aa960(ptr3_U64_25,pU64_1,sz_18);
    *(uint8_t *)((int64_t)ptr3_U64_25 + sz_18) = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    ptr3_U64_25 = &local_a8;
    pU64_24 = local_e8;
    func_0x1801d3800(pU64_22,ptr3_U64_25,pU64_24,lVal_20,uVal_31,local_230,uVal_32);
    uVal_26 = CONCAT53(uStack_8d,CONCAT12(uStack_8e,uStack_90));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      ptr3_U64_23 = local_a8;
      if (0xfff < uVal_19) {
        ptr3_U64_23 = (uint64_t ***)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr3_U64_23))) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_23,uVal_19);
    }
    uVal_26 = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT24(uStack_cc,uStack_d0)));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      lVal_20 = local_e8._0_8_;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_20)) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    local_1b8 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_1b8 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_1f0);
    }
    uVal_31 = *(uint32_t *)(local_80 + 0x19);
    uStack_c8 = (uint16_t)_UNK_1806c5c6b;
    uStack_c6 = (uint8_t)((uint)_UNK_1806c5c6b >> 0x10);
    uStack_c5 = (uint8_t)((uint)_UNK_1806c5c6b >> 0x18);
    uStack_c4 = (uint16_t)_UNK_1806c5c6f;
    uStack_c2 = (uint8_t)((uint)_UNK_1806c5c6f >> 0x10);
    uStack_c1 = (uint8_t)((uint)_UNK_1806c5c6f >> 0x18);
    uStack_c0 = (uint16_t)_UNK_1806c5c73;
    uStack_be = (uint8_t)((uint)_UNK_1806c5c73 >> 0x10);
    uStack_bd = (uint8_t)((uint)_UNK_1806c5c73 >> 0x18);
    local_d8 = _DAT_1806c5c5b;
    uStack_d4 = _UNK_1806c5c5f;
    uStack_d0 = _UNK_1806c5c63;
    uStack_cc = (uint16_t)_DAT_1806c5c67;
    uStack_ca = (uint8_t)((uint)_DAT_1806c5c67 >> 0x10);
    uStack_c9 = (uint8_t)((uint)_DAT_1806c5c67 >> 0x18);
    local_e8._8_8_ = _UNK_1806c5c53;
    local_e8._0_8_ = _DAT_1806c5c4b;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd5ec) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd5ec) = 1;
      func_0x1801b1b20(lVal_20 + 0xd5bd,local_e8);
      func_0x180673140(&LAB_180363930);
    }
    uVal_27 = _UNK_1806b560c;
    uVal_13 = _UNK_1806b5608;
    uVal_12 = _UNK_1806b5604;
    uVal_11 = _DAT_1806b5600;
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_20 + 0xd5bd);
    if (*(char *)(lVal_20 + 0xd5e9) == '\x01') {
      uVal_28 = *(uint *)(lVal_20 + 0xd5c1) ^ _UNK_1806b5604;
      uVal_29 = *(uint *)(lVal_20 + 0xd5c5) ^ _UNK_1806b5608;
      uVal_30 = *(uint *)(lVal_20 + 0xd5c9) ^ _UNK_1806b560c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b5600;
      *(uint *)(lVal_20 + 0xd5c1) = uVal_28;
      *(uint *)(lVal_20 + 0xd5c5) = uVal_29;
      *(uint *)(lVal_20 + 0xd5c9) = uVal_30;
      *(uint *)(lVal_20 + 0xd5cd) = *(uint *)(lVal_20 + 0xd5cd) ^ uVal_11;
      *(uint *)(lVal_20 + 0xd5d1) = *(uint *)(lVal_20 + 0xd5d1) ^ uVal_12;
      *(uint *)(lVal_20 + 0xd5d5) = *(uint *)(lVal_20 + 0xd5d5) ^ uVal_13;
      *(uint *)(lVal_20 + 0xd5d9) = *(uint *)(lVal_20 + 0xd5d9) ^ uVal_27;
      *(uint64_t *)(lVal_20 + 0xd5dd) = *(uint64_t *)(lVal_20 + 0xd5dd) ^ SUB168(_DAT_1806b5b60,0);
      *(byte *)(lVal_20 + 0xd5e5) = *(byte *)(lVal_20 + 0xd5e5) ^ 0x45;
      *(byte *)(lVal_20 + 0xd5e6) = *(byte *)(lVal_20 + 0xd5e6) ^ 0x89;
      *(byte *)(lVal_20 + 0xd5e7) = *(byte *)(lVal_20 + 0xd5e7) ^ 199;
      *(byte *)(lVal_20 + 0xd5e8) = *(byte *)(lVal_20 + 0xd5e8) ^ 0xd3;
      *(uint8_t *)(lVal_20 + 0xd5e9) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    local_a8 = (uint64_t ***)0x0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_1802e82d5;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_67 = 1;
        ptr3_U64_25 = (uint64_t ***)func_0x180672de0(uVal_26 + 1);
        local_a8 = ptr3_U64_25;
      }
      else {
        local_67 = 1;
        ptr2_U64_21 = (uint64_t **)func_0x180672de0(uVal_26 + 0x28);
        ptr3_U64_25 = (uint64_t ***)((int64_t)ptr2_U64_21 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_25[-1] = ptr2_U64_21;
        local_a8 = ptr3_U64_25;
      }
    }
    uStack_98 = (uint16_t)sz_18;
    uStack_96 = (uint32_t)(sz_18 >> 0x10);
    uStack_92 = (uint8_t)(sz_18 >> 0x30);
    uStack_91 = (uint8_t)(sz_18 >> 0x38);
    uStack_90 = (uint16_t)uVal_26;
    uStack_8e = (uint8_t)(uVal_26 >> 0x10);
    uStack_8d = (undefined5)(uVal_26 >> 0x18);
    func_0x1806aa960(ptr3_U64_25,pU64_1,sz_18);
    *(uint8_t *)((int64_t)ptr3_U64_25 + sz_18) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd5f4) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd5f4) = 1;
      *(uint32_t *)(lVal_20 + 0xd5f0) = 0x1c7f910;
      func_0x180673140(&LAB_180363960);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_20 + 0xd5f0);
    if (*(char *)(lVal_20 + 0xd5f3) == '\x01') {
      *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_20 + 0xd5f2) << 0x10) ^
                SUB164(_DAT_1806b26e0,0);
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    uStack_c9 = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_1802e82e2;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_70 = 1;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_70 = 1;
        lVal_20 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_20;
      }
      local_e8._0_8_ = pU64_24;
    }
    pU64_2 = local_80;
    pU64_22 = local_80 + 0x19;
    local_d8 = (uint32_t)sz_18;
    uStack_d4 = (uint32_t)(sz_18 >> 0x20);
    uStack_d0 = (uint32_t)uVal_26;
    uStack_cc = (uint16_t)(uVal_26 >> 0x20);
    uStack_ca = (uint8_t)(uVal_26 >> 0x30);
    uStack_c9 = (uint8_t)(uVal_26 >> 0x38);
    func_0x1806aa960(pU64_24,pU64_1,sz_18);
    pU64_24[sz_18] = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    pU64_24 = local_e8;
    ptr3_U64_25 = &local_a8;
    func_0x1801d3800(pU64_2,pU64_24,ptr3_U64_25,pU64_22,uVal_31,local_1f0,uVal_32);
    uVal_26 = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT24(uStack_cc,uStack_d0)));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      lVal_20 = local_e8._0_8_;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_20)) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    uVal_26 = CONCAT53(uStack_8d,CONCAT12(uStack_8e,uStack_90));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      ptr3_U64_23 = local_a8;
      if (0xfff < uVal_19) {
        ptr3_U64_23 = (uint64_t ***)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr3_U64_23))) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_23,uVal_19);
    }
    local_178 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_178 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_1b0);
    }
    uVal_31 = *(uint32_t *)((int64_t)local_80 + 0xcc);
    uStack_c8 = _UNK_1806c5c97;
    uStack_c6 = (uint8_t)_UNK_1806c5c99;
    uStack_c5 = (uint8_t)((uint)_UNK_1806c5c99 >> 8);
    uStack_c4 = (uint16_t)((uint)_UNK_1806c5c99 >> 0x10);
    uStack_c2 = (uint8_t)_UNK_1806c5c9d;
    uStack_c1 = (uint8_t)((uint)_UNK_1806c5c9d >> 8);
    uStack_c0 = (uint16_t)((uint)_UNK_1806c5c9d >> 0x10);
    uStack_be = (uint8_t)_UNK_1806c5ca1;
    uStack_bd = (uint8_t)((uint)_UNK_1806c5ca1 >> 8);
    uStack_bc = (uint16_t)((uint)_UNK_1806c5ca1 >> 0x10);
    local_d8 = _DAT_1806c5c87;
    uStack_d4 = _UNK_1806c5c8b;
    uStack_d0 = _UNK_1806c5c8f;
    uStack_cc = _UNK_1806c5c93;
    uStack_ca = (uint8_t)_DAT_1806c5c95;
    uStack_c9 = (uint8_t)((ushort)_DAT_1806c5c95 >> 8);
    local_e8._8_8_ = _UNK_1806c5c7f;
    local_e8._0_8_ = _DAT_1806c5c77;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd624) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd624) = 1;
      func_0x1801ba020(lVal_20 + 0xd5f5,local_e8);
      func_0x180673140(&LAB_180363990);
    }
    uVal_27 = _UNK_1806b291c;
    uVal_13 = _UNK_1806b2918;
    uVal_12 = _UNK_1806b2914;
    uVal_11 = _DAT_1806b2910;
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_20 + 0xd5f5);
    if (*(char *)(lVal_20 + 0xd623) == '\x01') {
      uVal_28 = *(uint *)(lVal_20 + 0xd5f9) ^ _UNK_1806b2914;
      uVal_29 = *(uint *)(lVal_20 + 0xd5fd) ^ _UNK_1806b2918;
      uVal_30 = *(uint *)(lVal_20 + 0xd601) ^ _UNK_1806b291c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2910;
      *(uint *)(lVal_20 + 0xd5f9) = uVal_28;
      *(uint *)(lVal_20 + 0xd5fd) = uVal_29;
      *(uint *)(lVal_20 + 0xd601) = uVal_30;
      *(uint *)(lVal_20 + 0xd605) = *(uint *)(lVal_20 + 0xd605) ^ uVal_11;
      *(uint *)(lVal_20 + 0xd609) = *(uint *)(lVal_20 + 0xd609) ^ uVal_12;
      *(uint *)(lVal_20 + 0xd60d) = *(uint *)(lVal_20 + 0xd60d) ^ uVal_13;
      *(uint *)(lVal_20 + 0xd611) = *(uint *)(lVal_20 + 0xd611) ^ uVal_27;
      *(uint64_t *)(lVal_20 + 0xd615) = *(uint64_t *)(lVal_20 + 0xd615) ^ SUB168(_DAT_1806c3460,0);
      *(byte *)(lVal_20 + 0xd61d) = *(byte *)(lVal_20 + 0xd61d) ^ 0x37;
      *(byte *)(lVal_20 + 0xd61e) = *(byte *)(lVal_20 + 0xd61e) ^ 0xfb;
      *(byte *)(lVal_20 + 0xd61f) = *(byte *)(lVal_20 + 0xd61f) ^ 0xf3;
      *(byte *)(lVal_20 + 0xd620) = *(byte *)(lVal_20 + 0xd620) ^ 0x1f;
      *(byte *)(lVal_20 + 0xd621) = *(byte *)(lVal_20 + 0xd621) ^ 0x69;
      *(byte *)(lVal_20 + 0xd622) = *(byte *)(lVal_20 + 0xd622) ^ 0x9b;
      *(uint8_t *)(lVal_20 + 0xd623) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    local_a8 = (uint64_t ***)0x0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_1802e82ef;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_68 = 1;
        ptr3_U64_25 = (uint64_t ***)func_0x180672de0(uVal_26 + 1);
        local_a8 = ptr3_U64_25;
      }
      else {
        local_68 = 1;
        ptr2_U64_21 = (uint64_t **)func_0x180672de0(uVal_26 + 0x28);
        ptr3_U64_25 = (uint64_t ***)((int64_t)ptr2_U64_21 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_25[-1] = ptr2_U64_21;
        local_a8 = ptr3_U64_25;
      }
    }
    uStack_98 = (uint16_t)sz_18;
    uStack_96 = (uint32_t)(sz_18 >> 0x10);
    uStack_92 = (uint8_t)(sz_18 >> 0x30);
    uStack_91 = (uint8_t)(sz_18 >> 0x38);
    uStack_90 = (uint16_t)uVal_26;
    uStack_8e = (uint8_t)(uVal_26 >> 0x10);
    uStack_8d = (undefined5)(uVal_26 >> 0x18);
    func_0x1806aa960(ptr3_U64_25,pU64_1,sz_18);
    *(uint8_t *)((int64_t)ptr3_U64_25 + sz_18) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd630) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd630) = 1;
      *(uint32_t *)(lVal_20 + 0xd628) = 0x71849473;
      *(uint16_t *)(lVal_20 + 0xd62c) = 0x169;
      func_0x180673140(&LAB_1803639c0);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_20 + 0xd628);
    if (*(char *)(lVal_20 + 0xd62d) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x1ff3fb37;
      *(byte *)(lVal_20 + 0xd62c) = *(byte *)(lVal_20 + 0xd62c) ^ 0x69;
      *(uint8_t *)(lVal_20 + 0xd62d) = 0;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    uStack_c9 = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_1802e82fc;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_71 = 1;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_71 = 1;
        lVal_20 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_20;
      }
      local_e8._0_8_ = pU64_24;
    }
    pU64_22 = local_80;
    lVal_20 = (int64_t)local_80 + 0xcc;
    local_d8 = (uint32_t)sz_18;
    uStack_d4 = (uint32_t)(sz_18 >> 0x20);
    uStack_d0 = (uint32_t)uVal_26;
    uStack_cc = (uint16_t)(uVal_26 >> 0x20);
    uStack_ca = (uint8_t)(uVal_26 >> 0x30);
    uStack_c9 = (uint8_t)(uVal_26 >> 0x38);
    func_0x1806aa960(pU64_24,pU64_1,sz_18);
    pU64_24[sz_18] = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    pU64_24 = local_e8;
    ptr3_U64_25 = &local_a8;
    func_0x1801d3800(pU64_22,pU64_24,ptr3_U64_25,lVal_20,uVal_31,local_1b0,uVal_32);
    uVal_26 = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT24(uStack_cc,uStack_d0)));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      lVal_20 = local_e8._0_8_;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_20)) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    uVal_26 = CONCAT53(uStack_8d,CONCAT12(uStack_8e,uStack_90));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      ptr3_U64_23 = local_a8;
      if (0xfff < uVal_19) {
        ptr3_U64_23 = (uint64_t ***)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr3_U64_23))) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_23,uVal_19);
    }
    local_138 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_138 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_170);
    }
    uVal_31 = *(uint32_t *)(local_80 + 0x1a);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd680) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd680) = 1;
      *(uint8_t *)(lVal_20 + 0xd67d) = 1;
      uVal_15 = _UNK_1806c5cb1;
      uVal_14 = _UNK_1806c5cad;
      uVal_9 = _UNK_1806c5ca9;
      *(uint32_t *)(lVal_20 + 0xd631) = _DAT_1806c5ca5;
      *(uint32_t *)(lVal_20 + 0xd635) = uVal_9;
      *(uint32_t *)(lVal_20 + 0xd639) = uVal_14;
      *(uint32_t *)(lVal_20 + 0xd63d) = uVal_15;
      uVal_15 = _UNK_1806c5cc1;
      uVal_14 = _UNK_1806c5cbd;
      uVal_9 = _UNK_1806c5cb9;
      *(uint32_t *)(lVal_20 + 0xd641) = _DAT_1806c5cb5;
      *(uint32_t *)(lVal_20 + 0xd645) = uVal_9;
      *(uint32_t *)(lVal_20 + 0xd649) = uVal_14;
      *(uint32_t *)(lVal_20 + 0xd64d) = uVal_15;
      uVal_15 = _UNK_1806c5cd1;
      uVal_14 = _UNK_1806c5ccd;
      uVal_9 = _UNK_1806c5cc9;
      *(uint32_t *)(lVal_20 + 0xd651) = _DAT_1806c5cc5;
      *(uint32_t *)(lVal_20 + 0xd655) = uVal_9;
      *(uint32_t *)(lVal_20 + 0xd659) = uVal_14;
      *(uint32_t *)(lVal_20 + 0xd65d) = uVal_15;
      uVal_15 = _DAT_1806c5ce1;
      uVal_14 = _UNK_1806c5cdd;
      uVal_9 = _UNK_1806c5cd9;
      *(uint32_t *)(lVal_20 + 0xd661) = _DAT_1806c5cd5;
      *(uint32_t *)(lVal_20 + 0xd665) = uVal_9;
      *(uint32_t *)(lVal_20 + 0xd669) = uVal_14;
      *(uint32_t *)(lVal_20 + 0xd66d) = uVal_15;
      uVal_16 = _UNK_1806c5ce9;
      *(uint64_t *)(lVal_20 + 0xd66d) = CONCAT44(_UNK_1806c5ce5,_DAT_1806c5ce1);
      *(uint64_t *)(lVal_20 + 0xd675) = uVal_16;
      func_0x180673140(&LAB_1803639f0);
    }
    uVal_27 = _UNK_1806af24c;
    uVal_13 = _UNK_1806af248;
    uVal_12 = _UNK_1806af244;
    uVal_11 = _DAT_1806af240;
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_20 + 0xd631);
    if (*(char *)(lVal_20 + 0xd67d) == '\x01') {
      uVal_28 = *(uint *)(lVal_20 + 0xd635) ^ _UNK_1806af244;
      uVal_29 = *(uint *)(lVal_20 + 0xd639) ^ _UNK_1806af248;
      uVal_30 = *(uint *)(lVal_20 + 0xd63d) ^ _UNK_1806af24c;
      *pU64_1 = *pU64_1 ^ _DAT_1806af240;
      *(uint *)(lVal_20 + 0xd635) = uVal_28;
      *(uint *)(lVal_20 + 0xd639) = uVal_29;
      *(uint *)(lVal_20 + 0xd63d) = uVal_30;
      *(uint *)(lVal_20 + 0xd641) = *(uint *)(lVal_20 + 0xd641) ^ uVal_11;
      *(uint *)(lVal_20 + 0xd645) = *(uint *)(lVal_20 + 0xd645) ^ uVal_12;
      *(uint *)(lVal_20 + 0xd649) = *(uint *)(lVal_20 + 0xd649) ^ uVal_13;
      *(uint *)(lVal_20 + 0xd64d) = *(uint *)(lVal_20 + 0xd64d) ^ uVal_27;
      *(uint *)(lVal_20 + 0xd651) = *(uint *)(lVal_20 + 0xd651) ^ uVal_11;
      *(uint *)(lVal_20 + 0xd655) = *(uint *)(lVal_20 + 0xd655) ^ uVal_12;
      *(uint *)(lVal_20 + 0xd659) = *(uint *)(lVal_20 + 0xd659) ^ uVal_13;
      *(uint *)(lVal_20 + 0xd65d) = *(uint *)(lVal_20 + 0xd65d) ^ uVal_27;
      *(uint *)(lVal_20 + 0xd661) = *(uint *)(lVal_20 + 0xd661) ^ uVal_11;
      *(uint *)(lVal_20 + 0xd665) = *(uint *)(lVal_20 + 0xd665) ^ uVal_12;
      *(uint *)(lVal_20 + 0xd669) = *(uint *)(lVal_20 + 0xd669) ^ uVal_13;
      *(uint *)(lVal_20 + 0xd66d) = *(uint *)(lVal_20 + 0xd66d) ^ uVal_27;
      *(uint64_t *)(lVal_20 + 0xd671) = *(uint64_t *)(lVal_20 + 0xd671) ^ SUB168(_DAT_1806be380,0);
      *(byte *)(lVal_20 + 0xd679) = *(byte *)(lVal_20 + 0xd679) ^ 0x35;
      *(byte *)(lVal_20 + 0xd67a) = *(byte *)(lVal_20 + 0xd67a) ^ 0x15;
      *(byte *)(lVal_20 + 0xd67b) = *(byte *)(lVal_20 + 0xd67b) ^ 0x67;
      *(byte *)(lVal_20 + 0xd67c) = *(byte *)(lVal_20 + 0xd67c) ^ 99;
      *(uint8_t *)(lVal_20 + 0xd67d) = 0;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    uStack_c9 = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_1802e8309;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_73 = 1;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_73 = 1;
        lVal_20 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_20;
      }
      local_e8._0_8_ = pU64_24;
    }
    local_d8 = (uint32_t)sz_18;
    uStack_d4 = (uint32_t)(sz_18 >> 0x20);
    uStack_d0 = (uint32_t)uVal_26;
    uStack_cc = (uint16_t)(uVal_26 >> 0x20);
    uStack_ca = (uint8_t)(uVal_26 >> 0x30);
    uStack_c9 = (uint8_t)(uVal_26 >> 0x38);
    func_0x1806aa960(pU64_24,pU64_1,sz_18);
    pU64_24[sz_18] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd694) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd694) = 1;
      *(uint64_t *)(lVal_20 + 0xd688) = 0x9411ca0210127465;
      *(uint32_t *)(lVal_20 + 0xd690) = 0x1677e56;
      func_0x180673140(&LAB_180363a30);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_6 = (uint64_t *)(lVal_20 + 0xd688);
    if (*(char *)(lVal_20 + 0xd693) == '\x01') {
      *pU64_6 = *pU64_6 ^ 0xf553e56763671535;
      *(uint *)(lVal_20 + 0xd690) =
           (*(uint *)(lVal_20 + 0xd690) & 0xffff | (uint)*(byte *)(lVal_20 + 0xd692) << 0x10) ^
           SUB164(_DAT_1806b6980,0);
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    local_a8 = (uint64_t ***)0x0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_18 = strlen((char *)pU64_6);
    if ((int64_t)sz_18 < 0) goto LAB_1802e8316;
    uVal_26 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_19) {
        uVal_26 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_72 = 1;
        ptr3_U64_25 = (uint64_t ***)func_0x180672de0(uVal_26 + 1);
        local_a8 = ptr3_U64_25;
      }
      else {
        local_72 = 1;
        ptr2_U64_21 = (uint64_t **)func_0x180672de0(uVal_26 + 0x28);
        ptr3_U64_25 = (uint64_t ***)((int64_t)ptr2_U64_21 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_25[-1] = ptr2_U64_21;
        local_a8 = ptr3_U64_25;
      }
    }
    pU64_2 = local_80;
    pU64_22 = local_80 + 0x1a;
    uStack_98 = (uint16_t)sz_18;
    uStack_96 = (uint32_t)(sz_18 >> 0x10);
    uStack_92 = (uint8_t)(sz_18 >> 0x30);
    uStack_91 = (uint8_t)(sz_18 >> 0x38);
    uStack_90 = (uint16_t)uVal_26;
    uStack_8e = (uint8_t)(uVal_26 >> 0x10);
    uStack_8d = (undefined5)(uVal_26 >> 0x18);
    func_0x1806aa960(ptr3_U64_25,pU64_6,sz_18);
    *(uint8_t *)((int64_t)ptr3_U64_25 + sz_18) = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    ptr3_U64_25 = &local_a8;
    pU64_24 = local_e8;
    func_0x1801d3800(pU64_2,ptr3_U64_25,pU64_24,pU64_22,uVal_31,local_170,uVal_32);
    uVal_26 = CONCAT53(uStack_8d,CONCAT12(uStack_8e,uStack_90));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      ptr3_U64_23 = local_a8;
      if (0xfff < uVal_19) {
        ptr3_U64_23 = (uint64_t ***)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr3_U64_23))) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_23,uVal_19);
    }
    uVal_26 = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT24(uStack_cc,uStack_d0)));
    if (0xf < uVal_26) {
      uVal_19 = uVal_26 + 1;
      lVal_20 = local_e8._0_8_;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_20)) goto LAB_1802e822b;
        uVal_19 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    local_f8 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_f8 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_130);
    }
    uVal_31 = *(uint32_t *)((int64_t)local_80 + 0xd4);
    uStack_c8 = (uint16_t)_UNK_1806c5d11;
    uStack_c6 = (uint8_t)((uint3)_UNK_1806c5d11 >> 0x10);
    uStack_c5 = (uint8_t)_UNK_1806c5d14;
    uStack_c4 = (uint16_t)((uint)_UNK_1806c5d14 >> 8);
    uStack_c2 = (uint8_t)((uint)_UNK_1806c5d14 >> 0x18);
    uStack_c1 = (uint8_t)_UNK_1806c5d18;
    uStack_c0 = (uint16_t)((uint)_UNK_1806c5d18 >> 8);
    uStack_be = (uint8_t)((uint)_UNK_1806c5d18 >> 0x18);
    local_d8 = _DAT_1806c5d01;
    uStack_d4 = _UNK_1806c5d05;
    uStack_d0 = _UNK_1806c5d09;
    uStack_cc = (uint16_t)_UNK_1806c5d0d;
    uStack_ca = (uint8_t)((uint)_UNK_1806c5d0d >> 0x10);
    uStack_c9 = (uint8_t)((uint)_UNK_1806c5d0d >> 0x18);
    local_e8._8_8_ = _UNK_1806c5cf9;
    local_e8._0_8_ = _DAT_1806c5cf1;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd6c4) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xd6c4) = 1;
      func_0x1801b3830(lVal_20 + 0xd695,local_e8);
      func_0x180673140(&LAB_180363a60);
    }
    uVal_27 = _UNK_1806b4ebc;
    uVal_13 = _UNK_1806b4eb8;
    uVal_12 = _UNK_1806b4eb4;
    uVal_11 = _DAT_1806b4eb0;
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_20 + 0xd695);
    if (*(char *)(lVal_20 + 0xd6c0) == '\x01') {
      uVal_28 = *(uint *)(lVal_20 + 0xd699) ^ _UNK_1806b4eb4;
      uVal_29 = *(uint *)(lVal_20 + 0xd69d) ^ _UNK_1806b4eb8;
      uVal_30 = *(uint *)(lVal_20 + 0xd6a1) ^ _UNK_1806b4ebc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b4eb0;
      *(uint *)(lVal_20 + 0xd699) = uVal_28;
      *(uint *)(lVal_20 + 0xd69d) = uVal_29;
      *(uint *)(lVal_20 + 0xd6a1) = uVal_30;
      *(uint *)(lVal_20 + 0xd6a5) = *(uint *)(lVal_20 + 0xd6a5) ^ uVal_11;
      *(uint *)(lVal_20 + 0xd6a9) = *(uint *)(lVal_20 + 0xd6a9) ^ uVal_12;
      *(uint *)(lVal_20 + 0xd6ad) = *(uint *)(lVal_20 + 0xd6ad) ^ uVal_13;
      *(uint *)(lVal_20 + 0xd6b1) = *(uint *)(lVal_20 + 0xd6b1) ^ uVal_27;
      *(uint64_t *)(lVal_20 + 0xd6b5) = *(uint64_t *)(lVal_20 + 0xd6b5) ^ SUB168(_DAT_1806b5b70,0);
      *(byte *)(lVal_20 + 0xd6bd) = *(byte *)(lVal_20 + 0xd6bd) ^ 0x99;
      *(byte *)(lVal_20 + 0xd6be) = *(byte *)(lVal_20 + 0xd6be) ^ 0x53;
      *(byte *)(lVal_20 + 0xd6bf) = *(byte *)(lVal_20 + 0xd6bf) ^ 0x8f;
      *(uint8_t *)(lVal_20 + 0xd6c0) = 0;
    }
    local_a8 = (uint64_t ***)0x0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_18 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_18) {
      uVal_26 = 0xf;
      if (0xf < sz_18) {
        uVal_19 = sz_18 | 0xf;
        uVal_26 = 0x16;
        if (0x16 < uVal_19) {
          uVal_26 = uVal_19;
        }
        if (uVal_19 < 0xfff) {
          local_69 = 1;
          ptr3_U64_25 = (uint64_t ***)func_0x180672de0(uVal_26 + 1);
          local_a8 = ptr3_U64_25;
        }
        else {
          local_69 = 1;
          ptr2_U64_21 = (uint64_t **)func_0x180672de0(uVal_26 + 0x28);
          ptr3_U64_25 = (uint64_t ***)((int64_t)ptr2_U64_21 + 0x27U & 0xffffffffffffffe0);
          ptr3_U64_25[-1] = ptr2_U64_21;
          local_a8 = ptr3_U64_25;
        }
      }
      uStack_98 = (uint16_t)sz_18;
      uStack_96 = (uint32_t)(sz_18 >> 0x10);
      uStack_92 = (uint8_t)(sz_18 >> 0x30);
      uStack_91 = (uint8_t)(sz_18 >> 0x38);
      uStack_90 = (uint16_t)uVal_26;
      uStack_8e = (uint8_t)(uVal_26 >> 0x10);
      uStack_8d = (undefined5)(uVal_26 >> 0x18);
      func_0x1806aa960(ptr3_U64_25,pU64_1,sz_18);
      *(uint8_t *)((int64_t)ptr3_U64_25 + sz_18) = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xd6d0) == '\0') {
        lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_20 + 0xd6d0) = 1;
        *(uint64_t *)(lVal_20 + 0xd6c8) = 0x1c3e3e8ace336ca;
        func_0x180673140(&LAB_180363a90);
      }
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_6 = (uint64_t *)(lVal_20 + 0xd6c8);
      if (*(char *)(lVal_20 + 0xd6cf) == '\x01') {
        *pU64_6 = (CONCAT44((uint)*(ushort *)(lVal_20 + 0xd6cd) << 8,*(uint32_t *)pU64_6) |
                  (uint64_t)*(byte *)(lVal_20 + 0xd6cc) << 0x20) ^ SUB168(_DAT_1806c3470,0);
      }
      local_e8 = (uint8_t  [16])0x0;
      sz_18 = strlen((char *)pU64_6);
      if (-1 < (int64_t)sz_18) {
        uVal_26 = 0xf;
        if (0xf < sz_18) {
          uVal_19 = sz_18 | 0xf;
          uVal_26 = 0x16;
          if (0x16 < uVal_19) {
            uVal_26 = uVal_19;
          }
          if (uVal_19 < 0xfff) {
            local_74 = 1;
            pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
          }
          else {
            local_74 = 1;
            lVal_20 = func_0x180672de0(uVal_26 + 0x28);
            pU64_24 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_24 + -8) = lVal_20;
          }
          local_e8._0_8_ = pU64_24;
        }
        pU64_22 = local_80;
        lVal_20 = (int64_t)local_80 + 0xd4;
        local_d8 = (uint32_t)sz_18;
        uStack_d4 = (uint32_t)(sz_18 >> 0x20);
        uStack_d0 = (uint32_t)uVal_26;
        uStack_cc = (uint16_t)(uVal_26 >> 0x20);
        uStack_ca = (uint8_t)(uVal_26 >> 0x30);
        uStack_c9 = (uint8_t)(uVal_26 >> 0x38);
        func_0x1806aa960(pU64_24,pU64_6,sz_18);
        pU64_24[sz_18] = 0;
        func_0x1801d3800(pU64_22,local_e8,&local_a8,lVal_20,uVal_31,local_130,uVal_32 & 0xffffff00);
        uVal_26 = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT24(uStack_cc,uStack_d0)));
        if (0xf < uVal_26) {
          uVal_19 = uVal_26 + 1;
          lVal_20 = local_e8._0_8_;
          if (0xfff < uVal_19) {
            lVal_20 = *(int64_t *)(local_e8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_20)) goto LAB_1802e822b;
            uVal_19 = uVal_26 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_20,uVal_19);
        }
        uVal_26 = CONCAT53(uStack_8d,CONCAT12(uStack_8e,uStack_90));
        if (0xf < uVal_26) {
          uVal_19 = uVal_26 + 1;
          ptr3_U64_25 = local_a8;
          if (0xfff < uVal_19) {
            ptr3_U64_25 = (uint64_t ***)local_a8[-1];
            if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr3_U64_25))) {
LAB_1802e822b:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_19 = uVal_26 + 0x28;
          }
          thunk_FUN_180695dd0(ptr3_U64_25,uVal_19);
        }
        return local_80;
      }
      goto LAB_1802e8330;
    }
  }
  local_69 = 1;
  func_0x18007ba70();
LAB_1802e8330:
  local_74 = 1;
  func_0x18007ba70();
  fnPtr_10 = (func_ptr_t )swi(3);
  pU64_22 = (uint64_t *)(*fnPtr_10)();
  return pU64_22;
}

// Unwind@1802e8340
void Unwind_1802e8340(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x80);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x48));
    *(int64_t **)(param_2 + 0x80) = (int64_t *)0x0;
  }
  return;
}

// Unwind@1802e83a0
void Unwind_1802e83a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd4ec) = 0;
  *(uint8_t *)(param_2 + 0x357) = 1;
  return;
}

// Unwind@1802e8400
void Unwind_1802e8400(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xc0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x88));
    *(uint64_t *)(param_2 + 0xc0) = 0;
  }
  return;
}

// Unwind@1802e8460
void Unwind_1802e8460(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd510) = 0;
  *(uint8_t *)(param_2 + 0x356) = 1;
  return;
}

// Unwind@1802e84c0
void Unwind_1802e84c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x100);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 200));
    *(uint64_t *)(param_2 + 0x100) = 0;
  }
  return;
}

// Unwind@1802e8520
void Unwind_1802e8520(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd538) = 0;
  *(uint8_t *)(param_2 + 0x355) = 1;
  return;
}

// Unwind@1802e8580
void Unwind_1802e8580(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x140);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x108));
    *(uint64_t *)(param_2 + 0x140) = 0;
  }
  return;
}

// Unwind@1802e85f0
void Unwind_1802e85f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd55c) = 0;
  *(uint8_t *)(param_2 + 0x354) = 1;
  return;
}

// Unwind@1802e8650
void Unwind_1802e8650(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x180);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x148));
    *(uint64_t *)(param_2 + 0x180) = 0;
  }
  return;
}

// Unwind@1802e86c0
void Unwind_1802e86c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd584) = 0;
  *(uint8_t *)(param_2 + 0x353) = 1;
  return;
}

// Unwind@1802e8720
void Unwind_1802e8720(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1c0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x188));
    *(uint64_t *)(param_2 + 0x1c0) = 0;
  }
  return;
}

// Unwind@1802e8790
void Unwind_1802e8790(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd5b0) = 0;
  *(uint8_t *)(param_2 + 0x352) = 1;
  return;
}

// Unwind@1802e87f0
void Unwind_1802e87f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x200);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c8));
    *(uint64_t *)(param_2 + 0x200) = 0;
  }
  return;
}

// Unwind@1802e8860
void Unwind_1802e8860(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd5ec) = 0;
  *(uint8_t *)(param_2 + 0x351) = 1;
  return;
}

// Unwind@1802e88c0
void Unwind_1802e88c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x240);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x208));
    *(uint64_t *)(param_2 + 0x240) = 0;
  }
  return;
}

// Unwind@1802e8930
void Unwind_1802e8930(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd624) = 0;
  *(uint8_t *)(param_2 + 0x350) = 1;
  return;
}

// Unwind@1802e8990
void Unwind_1802e8990(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x280);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x248));
    *(uint64_t *)(param_2 + 0x280) = 0;
  }
  return;
}

// Unwind@1802e8a00
void Unwind_1802e8a00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2c0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x288));
    *(uint64_t *)(param_2 + 0x2c0) = 0;
  }
  return;
}

// Unwind@1802e8a70
void Unwind_1802e8a70(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd6c4) = 0;
  *(uint8_t *)(param_2 + 0x34f) = 1;
  return;
}

// Unwind@1802e8ad0
void Unwind_1802e8ad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  return;
}

// Unwind@1802e8b20
void Unwind_1802e8b20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  return;
}

// Unwind@1802e8b70
void Unwind_1802e8b70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  *(uint8_t *)(param_2 + 0x34e) = 0;
  return;
}

// Unwind@1802e8bc0
void Unwind_1802e8bc0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x34e);
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x357) = uVal_1;
  return;
}

// Unwind@1802e8c10
void Unwind_1802e8c10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x357) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x80), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x48));
    *(int64_t **)(param_2 + 0x80) = (int64_t *)0x0;
  }
  return;
}

// Unwind@1802e8c80
void Unwind_1802e8c80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x34d) = 0;
  return;
}

// Unwind@1802e8cd0
void Unwind_1802e8cd0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x34d);
  func_0x180001e70(param_2 + 0x2d0);
  *(uint8_t *)(param_2 + 0x356) = uVal_1;
  return;
}

// Unwind@1802e8d20
void Unwind_1802e8d20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x356) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xc0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x88));
    *(uint64_t *)(param_2 + 0xc0) = 0;
  }
  return;
}

// Unwind@1802e8d90
void Unwind_1802e8d90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x34c) = 0;
  return;
}

// Unwind@1802e8de0
void Unwind_1802e8de0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x34c);
  func_0x180001e70(param_2 + 0x2d0);
  *(uint8_t *)(param_2 + 0x355) = uVal_1;
  return;
}

// Unwind@1802e8e30
void Unwind_1802e8e30(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x355) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x100), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 200));
    *(uint64_t *)(param_2 + 0x100) = 0;
  }
  return;
}

// Unwind@1802e8ea0
void Unwind_1802e8ea0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x34b) = 0;
  return;
}

// Unwind@1802e8ef0
void Unwind_1802e8ef0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x34b);
  func_0x180001e70(param_2 + 0x2d0);
  *(uint8_t *)(param_2 + 0x354) = uVal_1;
  return;
}

// Unwind@1802e8f40
void Unwind_1802e8f40(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x354) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x140), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x108));
    *(uint64_t *)(param_2 + 0x140) = 0;
  }
  return;
}

// Unwind@1802e8fb0
void Unwind_1802e8fb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x34a) = 0;
  return;
}

// Unwind@1802e9000
void Unwind_1802e9000(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x34a);
  func_0x180001e70(param_2 + 0x2d0);
  *(uint8_t *)(param_2 + 0x353) = uVal_1;
  return;
}

// Unwind@1802e9050
void Unwind_1802e9050(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x353) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x180), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x148));
    *(uint64_t *)(param_2 + 0x180) = 0;
  }
  return;
}

// Unwind@1802e90c0
void Unwind_1802e90c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x349) = 0;
  return;
}

// Unwind@1802e9110
void Unwind_1802e9110(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x349);
  func_0x180001e70(param_2 + 0x2d0);
  *(uint8_t *)(param_2 + 0x352) = uVal_1;
  return;
}

// Unwind@1802e9160
void Unwind_1802e9160(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x352) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x188));
    *(uint64_t *)(param_2 + 0x1c0) = 0;
  }
  return;
}

// Unwind@1802e91d0
void Unwind_1802e91d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  *(uint8_t *)(param_2 + 0x348) = 0;
  return;
}

// Unwind@1802e9220
void Unwind_1802e9220(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x348);
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x351) = uVal_1;
  return;
}

// Unwind@1802e9270
void Unwind_1802e9270(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x351) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c8));
    *(uint64_t *)(param_2 + 0x200) = 0;
  }
  return;
}

// Unwind@1802e92e0
void Unwind_1802e92e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  *(uint8_t *)(param_2 + 0x347) = 0;
  return;
}

// Unwind@1802e9330
void Unwind_1802e9330(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x347);
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x350) = uVal_1;
  return;
}

// Unwind@1802e9380
void Unwind_1802e9380(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x350) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x240), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x208));
    *(uint64_t *)(param_2 + 0x240) = 0;
  }
  return;
}

// Unwind@1802e93f0
void Unwind_1802e93f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x346) = 0;
  return;
}

// Unwind@1802e9440
void Unwind_1802e9440(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x346);
  func_0x180001e70(param_2 + 0x2d0);
  *(uint8_t *)(param_2 + 0x345) = uVal_1;
  return;
}

// Unwind@1802e9490
void Unwind_1802e9490(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x345) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x280), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x248));
    *(uint64_t *)(param_2 + 0x280) = 0;
  }
  return;
}

// Unwind@1802e9500
void Unwind_1802e9500(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  *(uint8_t *)(param_2 + 0x344) = 0;
  return;
}

// Unwind@1802e9550
void Unwind_1802e9550(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x344);
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x34f) = uVal_1;
  return;
}

// Unwind@1802e95a0
void Unwind_1802e95a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x34f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2c0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x288));
    *(uint64_t *)(param_2 + 0x2c0) = 0;
  }
  return;
}

// Unwind@1802e9610
void Unwind_1802e9610(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x338);
  func_0x18001deb0(pU64_1 + 0x26b);
  func_0x1800fe9f0(pU64_1 + 0x221);
  func_0x1800fe9f0(pU64_1 + 0x1d7);
  func_0x1800fe9f0(pU64_1 + 0x18d);
  func_0x1800fe9f0(pU64_1 + 0x143);
  func_0x1800fe9f0(pU64_1 + 0xf9);
  func_0x1800fe9f0(pU64_1 + 0xaf);
  func_0x1800fe9f0(pU64_1 + 0x65);
  func_0x1800fe9f0(*(uint64_t *)(param_2 + 0x2c8));
  *pU64_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(pU64_1 + 0x12);
  func_0x1801c49a0(pU64_1);
  return;
}

// Unwind@1802e96f0
void Unwind_1802e96f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd4b4) = 0;
  return;
}

// func_0x1802e9750
void func_0x1802e9750(uint64_t *param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  
  *param_1 = &PTR_LAB_1806c3e60;
  pLong_3 = (int64_t *)param_1[0x26c];
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
  func_0x1800fe9f0(param_1 + 0x221);
  func_0x1800fe9f0(param_1 + 0x1d7);
  func_0x1800fe9f0(param_1 + 0x18d);
  func_0x1800fe9f0(param_1 + 0x143);
  func_0x1800fe9f0(param_1 + 0xf9);
  func_0x1800fe9f0(param_1 + 0xaf);
  func_0x1800fe9f0(param_1 + 0x65);
  func_0x1800fe9f0(param_1 + 0x1b);
  *param_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(param_1 + 0x12);
  func_0x1801c49a0(param_1);
  return;
}

// Unwind@1802e9ad0
void Unwind_1802e9ad0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd6fc) = 0;
  return;
}

// Unwind@1802e9fb0
void Unwind_1802e9fb0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x30);
  func_0x18001deb0(param_2 + 0x20);
  return;
}

// func_0x1802ea000
void func_0x1802ea000(int64_t param_1,byte param_2)
{
  func_0x180071bf0(*(uint32_t *)(param_1 + 0xb4 + (uint64_t)param_2 * 4));
  return;
}

// func_0x1802ea010
uint8_t * func_0x1802ea010(void)
{
  return &DAT_28d0f803f34a0611;
}

// func_0x1802ea080
void func_0x1802ea080(int64_t param_1,int64_t *param_2)
{
  int *pInt_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  
  if (*param_2 != 0) {
    if (*(int64_t **)(param_1 + 0x1358) != (int64_t *)0x0) {
      (**(func_ptr_t *)(**(int64_t **)(param_1 + 0x1358) + 8))();
    }
    if (param_2[1] == 0) {
      lVal_4 = 0;
    }
    else {
      LOCK();
      pInt_1 = (int *)(param_2[1] + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
      lVal_4 = param_2[1];
    }
    *(int64_t *)(param_1 + 0x1358) = *param_2;
    pLong_3 = *(int64_t **)(param_1 + 0x1360);
    *(int64_t *)(param_1 + 0x1360) = lVal_4;
    if (pLong_3 != (int64_t *)0x0) {
      LOCK();
      pLong_2 = pLong_3 + 1;
      *(int *)pLong_2 = *(int *)pLong_2 + -1;
      UNLOCK();
      if (*(int *)pLong_2 == 0) {
        (**(func_ptr_t *)*pLong_3)(pLong_3);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_3 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001802ea0f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(func_ptr_t *)(*pLong_3 + 8))(pLong_3);
          return;
        }
      }
    }
  }
  return;
}

// func_0x1802ea110
int64_t func_0x1802ea110(int64_t param_1)
{
  return param_1 + 0xd8;
}

// func_0x1802ea120
int64_t func_0x1802ea120(int64_t param_1)
{
  return param_1 + 0x328;
}

// func_0x1802ea130
int64_t func_0x1802ea130(int64_t param_1)
{
  return param_1 + 0x578;
}

// func_0x1802ea140
int64_t func_0x1802ea140(int64_t param_1)
{
  return param_1 + 0x7c8;
}

// func_0x1802ea150
int64_t func_0x1802ea150(int64_t param_1)
{
  return param_1 + 0xa18;
}

// func_0x1802ea160
int64_t func_0x1802ea160(int64_t param_1)
{
  return param_1 + 0xc68;
}

// func_0x1802ea170
int64_t func_0x1802ea170(int64_t param_1)
{
  return param_1 + 0xeb8;
}

// func_0x1802ea180
uint64_t func_0x1802ea180(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x1368);
}

// func_0x1802ea190
uint64_t func_0x1802ea190(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x1370);
}

// func_0x1802ea1a0
uint64_t func_0x1802ea1a0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x1378);
}

// func_0x1802ea1b0
uint64_t func_0x1802ea1b0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x1380);
}

// func_0x1802ea1c0
uint64_t func_0x1802ea1c0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 5000);
}

// func_0x1802ea1d0
uint64_t func_0x1802ea1d0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x1390);
}

// func_0x1802ea1e0
uint64_t func_0x1802ea1e0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x1398);
}

// func_0x1802ea1f0
uint64_t func_0x1802ea1f0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x13a0);
}

// func_0x1802ea200
uint64_t func_0x1802ea200(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x13a8);
}

// func_0x1802ea210
uint64_t func_0x1802ea210(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x13b0);
}

// func_0x1802ea220
uint64_t func_0x1802ea220(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x13b8);
}

// func_0x1802ea230
uint64_t func_0x1802ea230(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x13c0);
}

// func_0x1802ea240
uint64_t func_0x1802ea240(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x13c8);
}

// func_0x1802ea250
uint64_t func_0x1802ea250(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x13d0);
}

// func_0x1802ea260
uint64_t func_0x1802ea260(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x13d8);
}

// func_0x1802ea270
uint64_t func_0x1802ea270(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x13e0);
}

// func_0x1802ea280
uint64_t func_0x1802ea280(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x13e8);
}

// Unwind@1802efdb0
void Unwind_1802efdb0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802efe30
void Unwind_1802efe30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802efeb0
void Unwind_1802efeb0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802eff30
void Unwind_1802eff30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802effb0
void Unwind_1802effb0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd744) = 0;
  return;
}

// Unwind@1802f0040
void Unwind_1802f0040(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f00c0
void Unwind_1802f00c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f0140
void Unwind_1802f0140(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd760) = 0;
  return;
}

// Unwind@1802f01d0
void Unwind_1802f01d0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f0250
void Unwind_1802f0250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f02d0
void Unwind_1802f02d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd784) = 0;
  return;
}

// Unwind@1802f0360
void Unwind_1802f0360(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f03e0
void Unwind_1802f03e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f0460
void Unwind_1802f0460(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd7b4) = 0;
  return;
}

// Unwind@1802f04f0
void Unwind_1802f04f0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f0570
void Unwind_1802f0570(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f05f0
void Unwind_1802f05f0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f0670
void Unwind_1802f0670(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f06f0
void Unwind_1802f06f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd7ec) = 0;
  return;
}

// Unwind@1802f0780
void Unwind_1802f0780(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f0800
void Unwind_1802f0800(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f0880
void Unwind_1802f0880(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f0900
void Unwind_1802f0900(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f0980
void Unwind_1802f0980(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f0a00
void Unwind_1802f0a00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f0a80
void Unwind_1802f0a80(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f0b00
void Unwind_1802f0b00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f0b80
void Unwind_1802f0b80(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f0c00
void Unwind_1802f0c00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f0c80
void Unwind_1802f0c80(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f0d00
void Unwind_1802f0d00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f0d80
void Unwind_1802f0d80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd870) = 0;
  return;
}

// Unwind@1802f0e10
void Unwind_1802f0e10(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f0e90
void Unwind_1802f0e90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f0f10
void Unwind_1802f0f10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd888) = 0;
  return;
}

// Unwind@1802f0fa0
void Unwind_1802f0fa0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f1020
void Unwind_1802f1020(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f10a0
void Unwind_1802f10a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd89c) = 0;
  return;
}

// Unwind@1802f1130
void Unwind_1802f1130(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f11b0
void Unwind_1802f11b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f1230
void Unwind_1802f1230(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1802f12b0
void Unwind_1802f12b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1802f1330
void Unwind_1802f1330(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0xf0);
  return;
}

// func_0x1802f1630
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802f1630(uint64_t *param_1)
{
  uint64_t *pU64_1;
  char *_Str;
  byte *_Str_00;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  size_t sz_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint64_t *pU64_8;
  uint32_t *pU64_9;
  uint8_t *pU64_10;
  uint64_t uVal_11;
  uint8_t uVal_12;
  uint8_t **local_130;
  uint64_t *local_128;
  uint8_t ***local_f8;
  uint8_t local_f0 [56];
  uint64_t local_b8;
  uint64_t *local_b0;
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint16_t uStack_9c;
  uint16_t uStack_9a;
  uint16_t uStack_98;
  uint32_t uStack_96;
  uint16_t uStack_92;
  uint16_t uStack_90;
  uint32_t uStack_8e;
  uint16_t uStack_8a;
  uint64_t *local_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint8_t local_68 [20];
  uint8_t local_54;
  uint8_t local_53;
  uint8_t local_52;
  uint8_t local_51;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_80 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xd8b0) == '\0') {
    lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_6 + 0xd8b0) = 1;
    *(uint64_t *)(lVal_6 + 0xd8a0) = 0x7828e0a9798ab08b;
    *(uint32_t *)(lVal_6 + 0xd8a8) = 0x5aa99aef;
    *(uint16_t *)(lVal_6 + 0xd8ac) = 0x1c5;
    func_0x180673140(&LAB_180363e30);
  }
  lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_6 + 0xd8a0);
  if (*(char *)(lVal_6 + 0xd8ad) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0xb5181c509f9d9cf;
    *(uint *)(lVal_6 + 0xd8a8) = *(uint *)(lVal_6 + 0xd8a8) ^ 0x9f9d9cf;
    *(byte *)(lVal_6 + 0xd8ac) = *(byte *)(lVal_6 + 0xd8ac) ^ 0xc5;
    *(uint8_t *)(lVal_6 + 0xd8ad) = 0;
  }
  _local_78 = ZEXT816(0);
  sz_4 = strlen((char *)pU64_1);
  if ((int64_t)sz_4 < 0) {
    func_0x18007ba70();
LAB_1802f1fc2:
    local_51 = 1;
    func_0x18007ba70();
LAB_1802f1fcf:
    local_52 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_4 < 0x10) {
      pU64_10 = local_78;
      uVal_11 = 0xf;
    }
    else {
      uVal_5 = sz_4 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_5) {
        uVal_11 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        pU64_10 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
      }
      else {
        lVal_6 = func_0x180672de0(uVal_11 + 0x28);
        pU64_10 = (uint8_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_10 + -8) = lVal_6;
      }
      local_78 = (uint8_t  [8])pU64_10;
    }
    local_68._0_8_ = sz_4;
    local_68._8_8_ = uVal_11;
    func_0x1806aa960(pU64_10,pU64_1,sz_4);
    pU64_10[sz_4] = 0;
    pU64_10 = local_78;
    func_0x18014fe60(local_80,0,0,pU64_10);
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_11 = local_68._8_8_ + 1;
      lVal_6 = (int64_t)local_78;
      if (0xfff < uVal_11) {
        lVal_6 = *(int64_t *)((int64_t)local_78 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_6)) goto LAB_1802f1fbb;
        uVal_11 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_11);
    }
    *local_80 = &PTR_LAB_1806c3ff0;
    pU64_8 = local_80 + 0x29;
    *(uint8_t *)(local_80 + 0x29) = 1;
    local_b0 = local_80 + 0x2a;
    *(uint8_t (*)[16])(local_80 + 0x2c) = ZEXT816(0);
    *(uint8_t (*)[16])(local_80 + 0x2a) = ZEXT816(0);
    *(uint32_t *)(local_80 + 0x2d) = 0xffffffff;
    local_b8 = 0;
    if (DAT_18083fd98 == (uint64_t *)0x0) {
      uVal_12 = 1;
    }
    else {
      local_b8 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_f0);
      uVal_12 = *(uint8_t *)pU64_8;
    }
    uStack_98 = _UNK_1806c5e06;
    uStack_96 = _UNK_1806c5e08;
    uStack_92 = (uint16_t)_UNK_1806c5e0c;
    uStack_90 = (uint16_t)((uint)_UNK_1806c5e0c >> 0x10);
    uStack_8e = _UNK_1806c5e10;
    local_a8 = _DAT_1806c5df6;
    uStack_a4 = _UNK_1806c5dfa;
    uStack_a0 = _UNK_1806c5dfe;
    uStack_9c = _UNK_1806c5e02;
    uStack_9a = _DAT_1806c5e04;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd8d0) == '\0') {
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_6 + 0xd8d0) = 1;
      func_0x18008fa60(lVal_6 + 0xd8b1,&local_a8);
      func_0x180673140(&LAB_180363e60);
    }
    _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xd8b1);
    func_0x1802188e0(_Str);
    local_68._0_16_ = ZEXT816(0);
    _local_78 = ZEXT816(0);
    sz_4 = strlen(_Str);
    if ((int64_t)sz_4 < 0) goto LAB_1802f1fc2;
    uVal_11 = 0xf;
    if (0xf < sz_4) {
      uVal_5 = sz_4 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_5) {
        uVal_11 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        local_51 = 1;
        pU64_10 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
      }
      else {
        local_51 = 1;
        lVal_6 = func_0x180672de0(uVal_11 + 0x28);
        pU64_10 = (uint8_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_10 + -8) = lVal_6;
      }
      local_78 = (uint8_t  [8])pU64_10;
    }
    local_68._8_8_ = uVal_11;
    local_68._0_8_ = sz_4;
    func_0x1806aa960(pU64_10,_Str,sz_4);
    pU64_10[sz_4] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd8e4) == '\0') {
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_6 + 0xd8e4) = 1;
      *(uint8_t *)(lVal_6 + 0xd8e2) = 1;
      *(uint64_t *)(lVal_6 + 0xd8d8) = 0x17d2251dc1967027;
      *(uint16_t *)(lVal_6 + 0xd8e0) = 0x1926;
      func_0x180673140(&LAB_180363e90);
    }
    lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_6 + 0xd8d8);
    if (*(char *)(lVal_6 + 0xd8e2) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x47910569a9f11975;
      *(byte *)(lVal_6 + 0xd8e0) = *(byte *)(lVal_6 + 0xd8e0) ^ 0x75;
      *(byte *)(lVal_6 + 0xd8e1) = *(byte *)(lVal_6 + 0xd8e1) ^ 0x19;
      *(uint8_t *)(lVal_6 + 0xd8e2) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_92 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    sz_4 = strlen((char *)pU64_1);
    if ((int64_t)sz_4 < 0) goto LAB_1802f1fcf;
    if (sz_4 < 0x10) {
      pU64_9 = &local_a8;
      uVal_11 = 0xf;
    }
    else {
      uVal_5 = sz_4 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_5) {
        uVal_11 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        local_52 = 1;
        pU64_9 = (uint32_t *)func_0x180672de0(uVal_11 + 1);
      }
      else {
        local_52 = 1;
        lVal_6 = func_0x180672de0(uVal_11 + 0x28);
        pU64_9 = (uint32_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_9 + -2) = lVal_6;
      }
      local_a8 = SUB84(pU64_9,0);
      uStack_a4 = (uint32_t)((uint64_t)pU64_9 >> 0x20);
    }
    uStack_98 = (uint16_t)sz_4;
    uStack_96 = (uint32_t)(sz_4 >> 0x10);
    uStack_92 = (uint16_t)(sz_4 >> 0x30);
    uStack_90 = (uint16_t)uVal_11;
    uStack_8e = (uint32_t)(uVal_11 >> 0x10);
    uStack_8a = (uint16_t)(uVal_11 >> 0x30);
    func_0x1806aa960(pU64_9,pU64_1,sz_4);
    *(uint8_t *)((int64_t)pU64_9 + sz_4) = 0;
    func_0x1801ccd70(local_80,&local_a8,local_78,pU64_8,uVal_12,local_f0,0);
    pU64_8 = local_b0;
    uVal_11 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_11) {
      lVal_3 = CONCAT44(uStack_a4,local_a8);
      uVal_5 = uVal_11 + 1;
      lVal_6 = lVal_3;
      if (0xfff < uVal_5) {
        lVal_6 = *(int64_t *)(lVal_3 + -8);
        if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_6)) goto LAB_1802f1fbb;
        uVal_5 = uVal_11 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_5);
    }
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_11 = local_68._8_8_ + 1;
      lVal_6 = (int64_t)local_78;
      if (0xfff < uVal_11) {
        lVal_6 = *(int64_t *)((int64_t)local_78 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_6)) goto LAB_1802f1fbb;
        uVal_11 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_11);
    }
    local_68._8_8_ = 0xf;
    local_68._0_8_ = 1;
    stack0xffffffffffffff89 = SUB1615(ZEXT816(0),1);
    local_78[0] = 0x2d;
    pU64_10 = local_78;
    uVal_7 = func_0x1801d3650(pU64_8,pU64_10,0);
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    uStack_98 = 1;
    uStack_96 = 0;
    uStack_92 = 0;
    uStack_90 = 0xf;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = 0x7c;
    pU64_9 = &local_a8;
    func_0x1801d3650(uVal_7,pU64_9,1);
    uVal_11 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_11) {
      lVal_3 = CONCAT44(uStack_a4,local_a8);
      uVal_5 = uVal_11 + 1;
      lVal_6 = lVal_3;
      if (0xfff < uVal_5) {
        lVal_6 = *(int64_t *)(lVal_3 + -8);
        if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_6)) goto LAB_1802f1fbb;
        uVal_5 = uVal_11 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_5);
    }
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_11 = local_68._8_8_ + 1;
      lVal_6 = (int64_t)local_78;
      if (0xfff < uVal_11) {
        lVal_6 = *(int64_t *)((int64_t)local_78 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_6)) goto LAB_1802f1fbb;
        uVal_11 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_11);
    }
    local_130 = &PTR_LAB_1806bac70;
    local_128 = local_80;
    local_f8 = &local_130;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd8e8) == '\0') {
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_6 + 0xd8e8) = 1;
      *(uint16_t *)(lVal_6 + 0xd8e5) = 0x173;
      func_0x180673140(&LAB_180363ec0);
    }
    lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (byte *)(lVal_6 + 0xd8e5);
    if (*(char *)(lVal_6 + 0xd8e6) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0x73;
      *(uint8_t *)(lVal_6 + 0xd8e6) = 0;
    }
    _local_78 = ZEXT816(0);
    sz_4 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_4) {
      uVal_11 = 0xf;
      if (0xf < sz_4) {
        uVal_5 = sz_4 | 0xf;
        uVal_11 = 0x16;
        if (0x16 < uVal_5) {
          uVal_11 = uVal_5;
        }
        if (uVal_5 < 0xfff) {
          local_54 = 1;
          pU64_10 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
        }
        else {
          local_54 = 1;
          lVal_6 = func_0x180672de0(uVal_11 + 0x28);
          pU64_10 = (uint8_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_10 + -8) = lVal_6;
        }
        local_78 = (uint8_t  [8])pU64_10;
      }
      local_68._8_8_ = uVal_11;
      local_68._0_8_ = sz_4;
      func_0x1806aa960(pU64_10,_Str_00,sz_4);
      pU64_10[sz_4] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xd8fc) == '\0') {
        lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_6 + 0xd8fc) = 1;
        *(uint8_t *)(lVal_6 + 0xd8fa) = 1;
        *(uint64_t *)(lVal_6 + 0xd8f0) = 0x86c1d2c3a60d2020;
        *(uint16_t *)(lVal_6 + 0xd8f8) = 0x4501;
        func_0x180673140(&LAB_180363ee0);
      }
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_6 + 0xd8f0);
      if (*(char *)(lVal_6 + 0xd8fa) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0xe9b5b3b1c77d4573;
        *(byte *)(lVal_6 + 0xd8f8) = *(byte *)(lVal_6 + 0xd8f8) ^ 0x73;
        *(byte *)(lVal_6 + 0xd8f9) = *(byte *)(lVal_6 + 0xd8f9) ^ 0x45;
        *(uint8_t *)(lVal_6 + 0xd8fa) = 0;
      }
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_9a = 0;
      sz_4 = strlen((char *)pU64_1);
      if (-1 < (int64_t)sz_4) {
        uVal_11 = 0xf;
        if (0xf < sz_4) {
          uVal_5 = sz_4 | 0xf;
          uVal_11 = 0x16;
          if (0x16 < uVal_5) {
            uVal_11 = uVal_5;
          }
          if (uVal_5 < 0xfff) {
            local_53 = 1;
            pU64_9 = (uint32_t *)func_0x180672de0(uVal_11 + 1);
          }
          else {
            local_53 = 1;
            lVal_6 = func_0x180672de0(uVal_11 + 0x28);
            pU64_9 = (uint32_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_9 + -2) = lVal_6;
          }
          local_a8 = SUB84(pU64_9,0);
          uStack_a4 = (uint32_t)((uint64_t)pU64_9 >> 0x20);
        }
        uStack_98 = (uint16_t)sz_4;
        uStack_96 = (uint32_t)(sz_4 >> 0x10);
        uStack_92 = (uint16_t)(sz_4 >> 0x30);
        uStack_90 = (uint16_t)uVal_11;
        uStack_8e = (uint32_t)(uVal_11 >> 0x10);
        uStack_8a = (uint16_t)(uVal_11 >> 0x30);
        func_0x1806aa960(pU64_9,pU64_1,sz_4);
        *(uint8_t *)((int64_t)pU64_9 + sz_4) = 0;
        func_0x1801d3a80(local_80,&local_a8,local_78,local_b0,0,&local_130,0);
        uVal_11 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
        if (0xf < uVal_11) {
          lVal_3 = CONCAT44(uStack_a4,local_a8);
          uVal_5 = uVal_11 + 1;
          lVal_6 = lVal_3;
          if (0xfff < uVal_5) {
            lVal_6 = *(int64_t *)(lVal_3 + -8);
            if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_6)) goto LAB_1802f1fbb;
            uVal_5 = uVal_11 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_6,uVal_5);
        }
        if (0xf < (uint64_t)local_68._8_8_) {
          uVal_11 = local_68._8_8_ + 1;
          lVal_6 = (int64_t)local_78;
          if (0xfff < uVal_11) {
            lVal_6 = *(int64_t *)((int64_t)local_78 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_6)) {
LAB_1802f1fbb:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_11 = local_68._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_6,uVal_11);
        }
        return local_80;
      }
      goto LAB_1802f1fe9;
    }
  }
  local_54 = 1;
  func_0x18007ba70();
LAB_1802f1fe9:
  local_53 = 1;
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_8 = (uint64_t *)(*fnPtr_2)();
  return pU64_8;
}

// Unwind@1802f2000
void Unwind_1802f2000(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xb0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x78));
    *(uint64_t *)(param_2 + 0xb0) = 0;
  }
  return;
}

// Unwind@1802f2060
void Unwind_1802f2060(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd8d0) = 0;
  *(uint8_t *)(param_2 + 0x117) = 1;
  return;
}

// Unwind@1802f20c0
void Unwind_1802f20c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1802f2100
void Unwind_1802f2100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  *(uint8_t *)(param_2 + 0x116) = 0;
  return;
}

// Unwind@1802f2150
void Unwind_1802f2150(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x116);
  func_0x180001e70(param_2 + 0xf0);
  *(uint8_t *)(param_2 + 0x117) = uVal_1;
  return;
}

// Unwind@1802f21a0
void Unwind_1802f21a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x117) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x78));
    *(uint64_t *)(param_2 + 0xb0) = 0;
  }
  return;
}

// Unwind@1802f2200
void Unwind_1802f2200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}
