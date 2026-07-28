#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x18043d930
void func_0x18043d930(int64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  
  lVal_3 = *(int64_t *)(param_1 + 0x40);
  if (lVal_3 != 0) {
    uVal_6 = *(int64_t *)(param_1 + 0x50) - lVal_3;
    lVal_5 = lVal_3;
    if (0xfff < uVal_6) {
      lVal_5 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_6 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_6);
    *(uint8_t (*)[16])(param_1 + 0x40) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x50) = 0;
  }
  _guard_check_icall(param_1 + 0x20);
  pLong_4 = *(int64_t **)(param_1 + 0x18);
  if (pLong_4 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = pLong_4 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)(*pLong_4 + 8))();
    }
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  pLong_4 = *(int64_t **)(param_1 + 8);
  if (pLong_4 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = pLong_4 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*pLong_4)(pLong_4);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00018043d9e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
        return;
      }
    }
  }
  return;
}

// Unwind@18043d9f0
void Unwind_18043d9f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18043da10
void Unwind_18043da10(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18043da30
void func_0x18043da30(uint8_t (*param_1)[16],int64_t param_2,uint64_t *param_3)
{
  int *pInt_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint8_t auArr_4 [16];
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  uint64_t uVal_9;
  uint8_t local_b8 [16];
  uint64_t local_a8;
  uint8_t local_98 [16];
  uint64_t *local_88;
  uint64_t *local_80;
  uint64_t local_78;
  int64_t *plStack_70;
  uint64_t local_68;
  uint8_t local_58 [16];
  uint64_t local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_3[1] == 0) {
    pLong_8 = (int64_t *)0x0;
  }
  else {
    LOCK();
    pInt_1 = (int *)(param_3[1] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    pLong_8 = (int64_t *)param_3[1];
  }
  uVal_9 = *param_3;
  uVal_7 = param_3[2];
  local_88 = param_3;
  local_68 = uVal_7;
  local_78 = uVal_9;
  plStack_70 = pLong_8;
  local_80 = (uint64_t *)func_0x180672de0(0x1c8);
  local_80[1] = 0x100000001;
  *local_80 = &PTR_FUN_1806cd9b0;
  pU64_6 = local_80 + 2;
  if (pLong_8 == (int64_t *)0x0) {
    local_58._8_8_ = 0;
    local_58._0_8_ = uVal_9;
  }
  else {
    LOCK();
    *(int *)(pLong_8 + 1) = *(int *)(pLong_8 + 1) + 1;
    UNLOCK();
    local_58._8_8_ = plStack_70;
    local_58._0_8_ = local_78;
    local_48 = local_68;
    uVal_7 = local_68;
    uVal_9 = local_78;
    if (plStack_70 != (int64_t *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = *(int *)(plStack_70 + 1) + 1;
      UNLOCK();
      pLong_8 = plStack_70;
      goto LAB_18043db10;
    }
  }
  pLong_8 = (int64_t *)0x0;
  local_48 = uVal_7;
LAB_18043db10:
  local_b8._8_8_ = pLong_8;
  local_b8._0_8_ = uVal_9;
  local_a8 = local_48;
  func_0x18043dec0(pU64_6,param_2,local_b8);
  pU64_5 = local_80;
  local_80[2] = &PTR_LAB_1806cd9d0;
  local_80[0x38] = 0;
  if (pLong_8 != (int64_t *)0x0) {
    LOCK();
    pLong_2 = pLong_8 + 1;
    *(int *)pLong_2 = *(int *)pLong_2 + -1;
    UNLOCK();
    if (*(int *)pLong_2 == 0) {
      (**(func_ptr_t *)*pLong_8)(pLong_8);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_8 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_8 + 8))(pLong_8);
      }
    }
  }
  pLong_8 = plStack_70;
  if (plStack_70 != (int64_t *)0x0) {
    LOCK();
    pLong_2 = plStack_70 + 1;
    *(int *)pLong_2 = *(int *)pLong_2 + -1;
    UNLOCK();
    if (*(int *)pLong_2 == 0) {
      (**(func_ptr_t *)*plStack_70)(plStack_70);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_8 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_8 + 8))(pLong_8);
      }
    }
  }
  *(uint64_t **)*param_1 = pU64_6;
  pLong_8 = *(int64_t **)(*param_1 + 8);
  *(uint64_t **)(*param_1 + 8) = pU64_5;
  if (pLong_8 != (int64_t *)0x0) {
    LOCK();
    pLong_2 = pLong_8 + 1;
    *(int *)pLong_2 = *(int *)pLong_2 + -1;
    UNLOCK();
    if (*(int *)pLong_2 == 0) {
      (**(func_ptr_t *)*pLong_8)(pLong_8);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_8 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_8 + 8))(pLong_8);
      }
    }
  }
  if (param_2 != 2) {
    uVal_3 = *(uint64_t *)*param_1;
    auArr_4 = *param_1;
    local_98 = ZEXT816(0);
    if (*(int64_t *)(*param_1 + 8) != 0) {
      LOCK();
      pInt_1 = (int *)(*(int64_t *)(*param_1 + 8) + 0xc);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
      local_98 = auArr_4;
    }
    func_0x18043dd50(uVal_3,local_98);
  }
  pLong_8 = (int64_t *)local_88[1];
  if (pLong_8 != (int64_t *)0x0) {
    LOCK();
    pLong_2 = pLong_8 + 1;
    *(int *)pLong_2 = *(int *)pLong_2 + -1;
    UNLOCK();
    if (*(int *)pLong_2 == 0) {
      (**(func_ptr_t *)*pLong_8)(pLong_8);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_8 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_8 + 8))(pLong_8);
      }
    }
  }
  return;
}

// Unwind@18043dc30
void Unwind_18043dc30(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x80);
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x58),0x1c8);
  return;
}

// Unwind@18043dc70
void Unwind_18043dc70(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x60);
  return;
}

// Unwind@18043dcb0
void Unwind_18043dcb0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x50));
  return;
}

// func_0x18043dcf0
void func_0x18043dcf0(int64_t **param_1)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  
  pLong_2 = *param_1;
  if (pLong_2 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = pLong_2 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)(*pLong_2 + 8))(pLong_2);
    }
  }
  *param_1 = (int64_t *)0x0;
  return;
}

// Unwind@18043dd30
void Unwind_18043dd30(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18043dd50
void func_0x18043dd50(int64_t param_1,uint64_t *param_2)
{
  int *pInt_1;
  int64_t *pLong_2;
  uint64_t *pU64_3;
  uint64_t uVal_4;
  
  pLong_2 = (int64_t *)param_2[1];
  if (pLong_2 == (int64_t *)0x0) {
    uVal_4 = 0;
  }
  else {
    uVal_4 = *param_2;
    LOCK();
    *(int *)((int64_t)pLong_2 + 0xc) = *(int *)((int64_t)pLong_2 + 0xc) + 1;
    UNLOCK();
  }
  pU64_3 = (uint64_t *)func_0x180672de0(0xd0);
  *(uint32_t *)(pU64_3 + 1) = 1;
  *(uint32_t *)(pU64_3 + 2) = 3;
  *(uint8_t (*)[16])(pU64_3 + 3) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_3 + 5) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_3 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_3 + 9) = ZEXT816(0);
  pU64_3[0xb] = 0;
  *(uint8_t (*)[16])(pU64_3 + 0xd) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_3 + 0xf) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_3 + 0x11) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_3 + 0x13) = ZEXT816(0);
  pU64_3[0x15] = 0xffffffff;
  *(uint32_t *)(pU64_3 + 0xc) = 2;
  *(uint8_t *)(pU64_3 + 0x16) = 0;
  pU64_3[0x17] = 0;
  *pU64_3 = &PTR_LAB_1806cdaa0;
  *(uint8_t (*)[16])(pU64_3 + 0x18) = ZEXT816(0);
  if (pLong_2 != (int64_t *)0x0) {
    pU64_3[0x18] = uVal_4;
    pU64_3[0x19] = pLong_2;
    LOCK();
    *(int *)((int64_t)pLong_2 + 0xc) = *(int *)((int64_t)pLong_2 + 0xc) + 1;
    UNLOCK();
  }
  *(uint64_t **)(param_1 + 0x80) = pU64_3;
  func_0x18043f840(*(uint64_t *)(param_1 + 0x78),pU64_3);
  if (pLong_2 != (int64_t *)0x0) {
    LOCK();
    pInt_1 = (int *)((int64_t)pLong_2 + 0xc);
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (*pInt_1 == 0) {
      (**(func_ptr_t *)(*pLong_2 + 8))();
    }
  }
  pLong_2 = (int64_t *)param_2[1];
  if (pLong_2 != (int64_t *)0x0) {
    LOCK();
    pInt_1 = (int *)((int64_t)pLong_2 + 0xc);
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (*pInt_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00018043de64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(func_ptr_t *)(*pLong_2 + 8))();
      return;
    }
  }
  return;
}

// Unwind@18043de70
void Unwind_18043de70(uint64_t param_1,int64_t param_2)
{
  int *pInt_1;
  int64_t *pLong_2;
  
  if (*(int64_t *)(param_2 + 0x30) != 0) {
    LOCK();
    pInt_1 = (int *)(*(int64_t *)(param_2 + 0x30) + 0xc);
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (*pInt_1 == 0) {
      (**(func_ptr_t *)(**(int64_t **)(param_2 + 0x30) + 8))();
    }
  }
  pLong_2 = *(int64_t **)(*(int64_t *)(param_2 + 0x28) + 8);
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

// func_0x18043dec0
uint64_t * func_0x18043dec0(uint64_t *param_1,int64_t param_2,uint64_t *param_3)
{
  int *pInt_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t *pLong_5;
  
  *param_1 = &PTR_FUN_1806cd9e0;
  *(uint32_t *)(param_1 + 1) = 0;
  *(uint16_t *)((int64_t)param_1 + 0xc) = 0;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 9) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0xb) = ZEXT816(0);
  param_1[0xd] = 0xffffffff;
  *(uint32_t *)(param_1 + 4) = 2;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  if (param_3[1] == 0) {
    pLong_5 = (int64_t *)0x0;
  }
  else {
    LOCK();
    pInt_1 = (int *)(param_3[1] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    pLong_5 = (int64_t *)param_3[1];
  }
  uVal_3 = *param_3;
  uVal_4 = param_3[2];
  *(uint8_t (*)[16])(param_1 + 0x17) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x15) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x13) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x11) = ZEXT816(0);
  param_1[0x19] = 0;
  *(uint8_t (*)[16])(param_1 + 0x21) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x1f) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x1d) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x1b) = ZEXT816(0);
  *(uint32_t *)(param_1 + 0x23) = 0xffffffff;
  *(uint32_t *)(param_1 + 0x1a) = 2;
  *(uint8_t (*)[16])((int64_t)param_1 + 0x11c) = ZEXT816(0);
  *(uint32_t *)((int64_t)param_1 + 300) = 0;
  if (pLong_5 == (int64_t *)0x0) {
    param_1[0x24] = uVal_3;
    param_1[0x25] = 0;
    param_1[0x26] = uVal_4;
    *(uint32_t *)(param_1 + 0x27) = 0;
  }
  else {
    LOCK();
    *(int *)(pLong_5 + 1) = *(int *)(pLong_5 + 1) + 1;
    UNLOCK();
    param_1[0x24] = uVal_3;
    param_1[0x25] = pLong_5;
    param_1[0x26] = uVal_4;
    *(uint32_t *)(param_1 + 0x27) = 0;
    LOCK();
    pLong_2 = pLong_5 + 1;
    *(int *)pLong_2 = *(int *)pLong_2 + -1;
    UNLOCK();
    if (*(int *)pLong_2 == 0) {
      (**(func_ptr_t *)*pLong_5)(pLong_5);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_5 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_5 + 8))(pLong_5);
      }
    }
  }
  *(uint8_t (*)[16])(param_1 + 0x2a) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x28) = ZEXT816(0);
  param_1[0x2c] = param_1;
  *(uint16_t *)(param_1 + 0x2d) = 0;
  param_1[0xf] = param_2;
  if (param_2 != 2) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  pLong_5 = (int64_t *)param_3[1];
  if (pLong_5 != (int64_t *)0x0) {
    LOCK();
    pLong_2 = pLong_5 + 1;
    *(int *)pLong_2 = *(int *)pLong_2 + -1;
    UNLOCK();
    if (*(int *)pLong_2 == 0) {
      (**(func_ptr_t *)*pLong_5)(pLong_5);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_5 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_5 + 8))(pLong_5);
      }
    }
  }
  return param_1;
}

// Unwind@18043e290
void Unwind_18043e290(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@18043e2d0
void Unwind_18043e2d0(uint64_t param_1,int64_t param_2)
{
  func_0x180676070(*(uint64_t *)(param_2 + 0x60));
  return;
}

// Unwind@18043e3b0
void Unwind_18043e3b0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18043e3d0
void func_0x18043e3d0(uint64_t *param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  
  *param_1 = &PTR_FUN_1806cd9e0;
  pLong_3 = (int64_t *)param_1[0xf];
  if (pLong_3 != (int64_t *)0x2) {
    LOCK();
    pLong_1 = pLong_3 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)(*pLong_3 + 8))();
    }
  }
  lVal_4 = param_1[0x29];
  if (lVal_4 != 0) {
    uVal_6 = param_1[0x2b] - lVal_4;
    lVal_5 = lVal_4;
    if (0xfff < uVal_6) {
      lVal_5 = *(int64_t *)(lVal_4 + -8);
      if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_5)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_6 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_6);
    *(uint8_t (*)[16])(param_1 + 0x29) = ZEXT816(0);
    param_1[0x2b] = 0;
  }
  pLong_3 = (int64_t *)param_1[0x25];
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
  pLong_3 = (int64_t *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x00018043e4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(func_ptr_t *)(*pLong_3 + 8))(pLong_3);
        return;
      }
    }
  }
  return;
}

// Unwind@18043e4c0
void Unwind_18043e4c0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18043e4e0
void func_0x18043e4e0(uint64_t param_1,int64_t *param_2)
{
  int64_t **ptr2_Long_1;
  int64_t *pLong_2;
  func_ptr_t fnPtr_3;
  int iVal_4;
  uint uVal_5;
  DWORD DVar6;
  int64_t **ptr2_Long_7;
  int64_t *pLong_8;
  
  pLong_8 = (int64_t *)(param_1 + 0x18);
  iVal_4 = func_0x180675fe0(pLong_8);
  if (iVal_4 == 0) {
    if (*(int *)(param_1 + 100) != 0x7fffffff) {
      ptr2_Long_1 = *(int64_t ***)(param_1 + 0x68);
      if (ptr2_Long_1 != (int64_t **)0x0) {
        if (*ptr2_Long_1 == param_2) {
          pLong_2 = ptr2_Long_1[1];
          *(int64_t **)(param_1 + 0x68) = pLong_2;
          ptr2_Long_7 = (int64_t **)0x0;
        }
        else {
          do {
            ptr2_Long_7 = ptr2_Long_1;
            ptr2_Long_1 = (int64_t **)ptr2_Long_7[1];
            if (ptr2_Long_1 == (int64_t **)0x0) goto LAB_18043e5a7;
          } while (*ptr2_Long_1 != param_2);
          pLong_2 = ptr2_Long_1[1];
          ptr2_Long_7[1] = pLong_2;
        }
        if (pLong_2 == (int64_t *)0x0) {
          *(int64_t ***)(param_1 + 0x70) = ptr2_Long_7;
        }
        thunk_FUN_180695dd0(ptr2_Long_1,0x10);
LAB_18043e5a7:
        LOCK();
        *(uint32_t *)(param_2 + 2) = 2;
        UNLOCK();
        LOCK();
        pLong_2 = param_2 + 1;
        *(int *)pLong_2 = *(int *)pLong_2 + -1;
        UNLOCK();
        if (*(int *)pLong_2 == 0) {
          (**(func_ptr_t *)(*param_2 + 8))(param_2);
        }
LAB_18043e5c7:
        func_0x180676070(pLong_8);
        return;
      }
      func_0x180676070(pLong_8);
      LOCK();
      uVal_5 = *(uint *)(param_2 + 2);
      if (uVal_5 == 0) {
        *(int *)(param_2 + 2) = 1;
        uVal_5 = 0;
      }
      UNLOCK();
      if (uVal_5 < 4) {
        return;
      }
      param_1 = (uint64_t)uVal_5;
      DVar6 = GetCurrentThreadId();
      if (uVal_5 == DVar6) {
        return;
      }
      LOCK();
      iVal_4 = *(int *)(param_2 + 2);
      *(int *)(param_2 + 2) = 2;
      UNLOCK();
      if (iVal_4 == 3) {
        return;
      }
      pLong_8 = param_2 + 0xc;
      iVal_4 = func_0x180675fe0(pLong_8);
      if (iVal_4 == 0) {
        if (*(int *)((int64_t)param_2 + 0xac) != 0x7fffffff) {
          if (*(char *)(param_2 + 0x16) == '\0') {
            do {
              func_0x180675600(param_2 + 3,pLong_8);
            } while (*(char *)(param_2 + 0x16) != '\x01');
          }
          goto LAB_18043e5c7;
        }
        goto LAB_18043e631;
      }
      goto LAB_18043e616;
    }
  }
  else {
LAB_18043e616:
    func_0x180674150(5);
  }
  *(uint32_t *)(param_1 + 100) = 0x7ffffffe;
  func_0x180674150(6);
LAB_18043e631:
  *(uint32_t *)((int64_t)param_2 + 0xac) = 0x7ffffffe;
  func_0x180674150(6);
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// Unwind@18043e650
void Unwind_18043e650(uint64_t param_1,int64_t param_2)
{
  func_0x180676070(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x18043e680
void func_0x18043e680(func_ptr_t UNRECOVERED_JUMPTABLE,uint64_t param_2,int param_3)
{
  int *pInt_1;
  int64_t *pLong_2;
  func_ptr_t fnPtr_3;
  int iVal_4;
  uint64_t *pU64_5;
  int64_t *pLong_6;
  char *local_70;
  uint8_t local_68;
  uint8_t **local_60;
  uint8_t local_58 [16];
  uint8_t local_48 [24];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_3 == -1) {
                    /* WARNING: Could not recover jumptable at 0x00018043e6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2);
    return;
  }
  func_0x18043e8a0(&DAT_180840990,&local_60);
  pLong_2 = DAT_180840998;
  if (DAT_180840998[1] == 0) {
    pLong_6 = (int64_t *)0x0;
  }
  else {
    LOCK();
    pInt_1 = (int *)(DAT_180840998[1] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    pLong_6 = (int64_t *)pLong_2[1];
  }
  local_48._0_8_ = *pLong_2;
  local_48._8_8_ = pLong_6;
  if ((uint64_t *)local_48._0_8_ == (uint64_t *)0x0) {
    pU64_5 = (uint64_t *)func_0x180672de0(0x28);
    *pU64_5 = 0;
    pU64_5[1] = &LAB_18043e980;
    pU64_5[2] = pU64_5;
    pU64_5[3] = UNRECOVERED_JUMPTABLE;
    pU64_5[4] = param_2;
    iVal_4 = func_0x180673e60(pU64_5);
    if (iVal_4 != 0) {
      func_0x180673ef0(pU64_5);
      thunk_FUN_180695dd0(pU64_5,0x28);
      local_60 = std::exception::vftable;
      local_58 = ZEXT816(0);
      local_70 = "Fail to schedule the chore!";
      local_68 = 1;
      func_0x18067b3f0(&local_70,local_58);
      local_60 = std::runtime_error::vftable;
      func_0x18067a120(&local_60,&DAT_18077f2c0);
      fnPtr_3 = (func_ptr_t )swi(3);
      (*fnPtr_3)();
      return;
    }
  }
  else {
    (***(func_ptr_t **)local_48._0_8_)(local_48._0_8_,UNRECOVERED_JUMPTABLE,param_2);
  }
  if (pLong_6 != (int64_t *)0x0) {
    LOCK();
    pLong_2 = pLong_6 + 1;
    *(int *)pLong_2 = *(int *)pLong_2 + -1;
    UNLOCK();
    if (*(int *)pLong_2 == 0) {
      (**(func_ptr_t *)*pLong_6)(pLong_6);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_6 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_6 + 8))(pLong_6);
      }
    }
  }
  return;
}

// Unwind@18043e7d0
void Unwind_18043e7d0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x50);
  return;
}

// Unwind@18043e800
void Unwind_18043e800(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18043e880
void Unwind_18043e880(uint64_t param_1,int64_t param_2)
{
  func_0x18043eaa0(param_2 + 0x28);
  return;
}

// func_0x18043e8a0
void func_0x18043e8a0(LPINIT_ONCE param_1)
{
  func_ptr_t fnPtr_1;
  BOOL BVar2;
  int local_c;
  
  BVar2 = InitOnceBeginInitialize(param_1,0,&local_c,(LPVOID *)0x0);
  if (BVar2 == 0) {
    do {
      invalidInstructionException();
    } while( true );
  }
  if (local_c != 0) {
    if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x1c39c) < DAT_1808409b0) {
      func_0x180672ec0(&DAT_1808409b0);
      if (DAT_1808409b0 == -1) {
        func_0x1806731d0(&LAB_18043e940);
        _Init_thread_footer(&DAT_1808409b0);
      }
    }
    DAT_180840998 = &DAT_1808409a0;
    BVar2 = InitOnceComplete(param_1,0,(LPVOID)0x0);
    if (BVar2 == 0) {
      func_0x180678e30();
      fnPtr_1 = (func_ptr_t )swi(3);
      (*fnPtr_1)();
      return;
    }
  }
  return;
}

// Unwind@18043e9c0
void Unwind_18043e9c0(uint64_t param_1,int64_t param_2)
{
  func_0x18043ea00(param_2 + 0x28);
  return;
}

// Unwind@18043e9e0
void Unwind_18043e9e0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18043ea00
void func_0x18043ea00(int64_t *param_1)
{
  int64_t lVal_1;
  
  lVal_1 = *param_1;
  if (lVal_1 != 0) {
    func_0x180673ef0(lVal_1);
    thunk_FUN_180695dd0(lVal_1,0x28);
    return;
  }
  return;
}

// Unwind@18043ea40
void Unwind_18043ea40(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18043ea60
void func_0x18043ea60(void)
{
  func_0x180673ef0();
  return;
}

// Unwind@18043ea80
void Unwind_18043ea80(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18043eaa0
void func_0x18043eaa0(int64_t **param_1)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  
  pLong_1 = *param_1;
  if (pLong_1 != (int64_t *)0x0) {
    pLong_2 = (int64_t *)pLong_1[7];
    if (pLong_2 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != pLong_1);
    }
    thunk_FUN_180695dd0(pLong_1,0x40);
    return;
  }
  return;
}

// func_0x18043eb40
void func_0x18043eb40(int64_t param_1,int64_t *param_2)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *local_30;
  int64_t *local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  (**(func_ptr_t *)(*param_2 + 0x10))(param_2,&local_30);
  if ((*(int *)(param_1 + 8) == 4) && (*(char *)(param_2 + 4) == '\0')) {
    if (*(int64_t *)(param_1 + 0x10) == 0) {
      (**(func_ptr_t *)(*local_30 + 8))
                (local_30,CONCAT71((int7)((uint64_t)*local_30 >> 8),1),0,0,local_30 + 2);
    }
    else {
      (**(func_ptr_t *)(*local_30 + 8))(local_30,1,1,1,param_1 + 0x10);
    }
    (**(func_ptr_t *)*param_2)(param_2,1);
  }
  else {
    func_0x18043ec40(local_30,param_2);
  }
  if (local_28 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_28 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_28)(local_28);
      LOCK();
      pInt_2 = (int *)((int64_t)local_28 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_28 + 8))(local_28);
      }
    }
  }
  return;
}

// Unwind@18043ec10
void Unwind_18043ec10(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x28);
  return;
}

// func_0x18043ec40
void func_0x18043ec40(int64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  uint32_t uVal_2;
  uint8_t **local_68;
  int64_t local_60;
  uint8_t ***local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  _guard_check_icall(param_1 + 0x160,1);
  if (*(int64_t *)(param_2 + 0x10) != 0) {
    if (*(int *)(param_2 + 0x24) == -1) {
      uVal_2 = 0xffffffff;
    }
    else {
      *(uint32_t *)(param_2 + 0x24) = 0x10;
      uVal_2 = 0x10;
    }
    local_68 = &PTR_LAB_1806cda20;
    local_30 = &local_68;
    local_60 = param_2;
    pU64_1 = (uint64_t *)func_0x180672de0(0x40);
    *pU64_1 = &PTR_LAB_1806cda20;
    pU64_1[1] = param_2;
    pU64_1[7] = pU64_1;
    func_0x18043e680(&LAB_18043e820,pU64_1,uVal_2);
    if (local_30 != (uint8_t ***)0x0) {
      (*(func_ptr_t )(*local_30)[4])(local_30,local_30 != &local_68);
    }
    return;
  }
  func_0x18043ed50(param_1,param_2);
  return;
}

// Unwind@18043ed10
void Unwind_18043ed10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// func_0x18043ed50
void func_0x18043ed50(int64_t param_1)
{
  func_0x18043f680(param_1 + 0x88);
  return;
}

// Catch@18043ed80
uint64_t Catch_18043ed80(void)
{
  return 0x18043ed74;
}

// Catch_All@18043eda0
uint64_t Catch_All_18043eda0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  if (*(int64_t *)(*(int64_t *)(param_2 + 0x38) + 0x10) == 0) {
    *(uint8_t (*)[16])(param_2 + 0x20) = ZEXT816(0);
    lVal_1 = param_2 + 0x20;
    func_0x180674aa0(lVal_1);
    func_0x180674bf0(lVal_1);
    func_0x18043f130(*(uint64_t *)(param_2 + 0x38),lVal_1);
    func_0x180674ab0(param_2 + 0x20);
  }
  return 0x18043ed74;
}

// Catch@18043ee00
uint64_t Catch_18043ee00(void)
{
  return 0x18043ed74;
}

// Unwind@18043ee20
void Unwind_18043ee20(uint64_t param_1,int64_t param_2)
{
  func_0x180674ab0(param_2 + 0x20);
  return;
}

// Unwind@18043efd0
void Unwind_18043efd0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x98);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x60));
  }
  func_0x180038830(param_2 + 0xa0);
  return;
}

// Catch_All@18043f020
uint8_t * Catch_All_18043f020(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  
  uVal_2 = *(uint64_t *)(param_2 + 0xb8);
  *(uint8_t (*)[16])(param_2 + 0xa0) = ZEXT816(0);
  lVal_1 = param_2 + 0xa0;
  func_0x180674aa0(lVal_1);
  func_0x180674bf0(lVal_1);
  func_0x18043f130(uVal_2,lVal_1);
  func_0x180674ab0(param_2 + 0xa0);
  return &LAB_18043ef8f;
}

// Unwind@18043f080
void Unwind_18043f080(uint64_t param_1,int64_t param_2)
{
  func_0x180674ab0(param_2 + 0xa0);
  return;
}

// Unwind@18043f0b0
void Unwind_18043f0b0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0xb8);
  return;
}

// Unwind@18043f0e0
void Unwind_18043f0e0(uint64_t param_1,int64_t param_2)
{
  _guard_check_icall(param_2 + 0x20);
  return;
}

// Unwind@18043f110
void Unwind_18043f110(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18043f130
uint32_t func_0x18043f130(int64_t *param_1,uint64_t param_2)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint32_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  int64_t *pLong_7;
  int64_t *local_68;
  int64_t *local_60;
  int64_t local_58;
  uint8_t local_50 [16];
  int64_t local_40;
  int64_t *local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_58 = param_1[0x28];
  local_50 = ZEXT816(0);
  local_40 = 0;
  lVal_6 = param_1[0x2a] - param_1[0x29];
  if (lVal_6 != 0) {
    uVal_4 = param_1[0x2a] - param_1[0x29] >> 3;
    if (uVal_4 >> 0x3d != 0) {
      func_0x18007c0d0();
      goto LAB_18043f2c1;
    }
    if (uVal_4 < 0x200) {
      uVal_4 = func_0x180672de0(lVal_6);
    }
    else {
      lVal_5 = func_0x180672de0(lVal_6 + 0x27);
      uVal_4 = lVal_5 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_4 - 8) = lVal_5;
    }
    local_50._0_8_ = uVal_4;
    local_40 = lVal_6 + uVal_4;
    lVal_6 = param_1[0x2a] - param_1[0x29];
    func_0x1806aa960(uVal_4,param_1[0x29],lVal_6);
    local_50._8_8_ = lVal_6 + uVal_4;
  }
  local_38 = (int64_t *)func_0x180672de0(0x48);
  local_38[1] = 0x100000001;
  *local_38 = (int64_t)&PTR_FUN_1806cda80;
  pLong_7 = local_38 + 2;
  func_0x18043f470(pLong_7,param_2,&local_58);
  local_60 = local_38;
  local_68 = pLong_7;
  uVal_3 = (**(func_ptr_t *)(*param_1 + 8))(param_1,1,1,0,&local_68);
  pLong_7 = local_60;
  if (local_60 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_60 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_60)(local_60);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  if (local_50._0_8_ != 0) {
    uVal_4 = local_40 - local_50._0_8_;
    lVal_6 = local_50._0_8_;
    if (0xfff < uVal_4) {
      lVal_6 = *(int64_t *)(local_50._0_8_ + -8);
      if (0x1f < (uint64_t)((local_50._0_8_ + -8) - lVal_6)) {
LAB_18043f2c1:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_6,uVal_4);
  }
  return uVal_3;
}

// Unwind@18043f2d0
void Unwind_18043f2d0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x30);
  return;
}

// Unwind@18043f300
void Unwind_18043f300(uint64_t param_1,int64_t param_2)
{
  func_0x18009e380(param_2 + 0x40);
  return;
}

// Unwind@18043f330
void Unwind_18043f330(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x60),0x48);
  return;
}

// func_0x18043f400
void func_0x18043f400(int64_t param_1,char param_2)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  
  pLong_3 = *(int64_t **)(param_1 + 0x18);
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
  if (param_2 != '\0') {
    thunk_FUN_180695dd0(param_1,0x20);
    return;
  }
  return;
}

// func_0x18043f460
void func_0x18043f460(int64_t param_1)
{
  func_0x18043f5a0(param_1 + 0x10);
  return;
}

// func_0x18043f470
uint32_t * func_0x18043f470(uint32_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint32_t *pU64_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  
  uVal_6 = 0xfffffffffffffffe;
  *param_1 = 0;
  pU64_4 = param_1 + 2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  func_0x180674b10(pU64_4);
  *(uint64_t *)(param_1 + 6) = *param_3;
  *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0xc) = 0;
  lVal_5 = param_3[2] - param_3[1];
  if (lVal_5 != 0) {
    uVal_2 = (int64_t)(param_3[2] - param_3[1]) >> 3;
    if (uVal_2 >> 0x3d != 0) {
      func_0x18007c0d0();
      fnPtr_1 = (func_ptr_t )swi(3);
      pU64_4 = (uint32_t *)(*fnPtr_1)();
      return pU64_4;
    }
    if (uVal_2 < 0x200) {
      uVal_2 = func_0x180672de0(lVal_5);
    }
    else {
      lVal_3 = func_0x180672de0(lVal_5 + 0x27);
      uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_2 - 8) = lVal_3;
    }
    *(uint64_t *)(param_1 + 8) = uVal_2;
    *(uint64_t *)(param_1 + 10) = uVal_2;
    *(uint64_t *)(param_1 + 0xc) = lVal_5 + uVal_2;
    lVal_5 = param_3[2] - param_3[1];
    func_0x1806aa960(uVal_2,param_3[1],lVal_5,param_4,pU64_4,uVal_6);
    *(uint64_t *)(param_1 + 10) = lVal_5 + uVal_2;
  }
  return param_1;
}

// Unwind@18043f560
void Unwind_18043f560(uint64_t param_1,int64_t param_2)
{
  func_0x180674ab0(*(uint64_t *)(param_2 + 0x20));
  return;
}

// func_0x18043f5a0
void func_0x18043f5a0(int *param_1)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  if (*param_1 == 0) {
    _guard_check_icall();
    fnPtr_2 = (func_ptr_t )swi(3);
    (*fnPtr_2)();
    return;
  }
  lVal_1 = *(int64_t *)(param_1 + 8);
  if (lVal_1 != 0) {
    uVal_4 = *(int64_t *)(param_1 + 0xc) - lVal_1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0xc) = 0;
  }
  func_0x180674ab0(param_1 + 2);
  return;
}

// Unwind@18043f630
void Unwind_18043f630(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18043f680
void func_0x18043f680(int64_t param_1,int64_t *param_2,int param_3)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint64_t *pU64_3;
  uint8_t local_40 [24];
  int64_t *local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (param_3 == -1) {
    local_28 = param_2;
    (**(func_ptr_t *)(*param_2 + 8))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00018043f6e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(func_ptr_t *)*local_28)(local_28,1);
    return;
  }
  pU64_3 = *(uint64_t **)(param_1 + 0xa8);
  if (pU64_3 != (uint64_t *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018043f6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(func_ptr_t *)*pU64_3)(pU64_3,&LAB_18043f7a0,param_2);
    return;
  }
  pU64_3 = (uint64_t *)func_0x180672de0(0x28);
  *pU64_3 = 0;
  pU64_3[1] = &LAB_18043e980;
  pU64_3[2] = pU64_3;
  pU64_3[3] = &LAB_18043f7a0;
  pU64_3[4] = param_2;
  iVal_2 = func_0x180673e60(pU64_3);
  if (iVal_2 == 0) {
    return;
  }
  func_0x18043ea60(pU64_3);
  thunk_FUN_180695dd0(pU64_3,0x28);
  func_0x1800d9790(local_40,"Fail to schedule the chore!");
  func_0x18067a120(local_40,&DAT_18077f2c0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18043f770
void Unwind_18043f770(uint64_t param_1,int64_t param_2)
{
  (**(func_ptr_t *)**(uint64_t **)(param_2 + 0x40))(*(uint64_t **)(param_2 + 0x40),1);
  return;
}

// Unwind@18043f7e0
void Unwind_18043f7e0(uint64_t param_1,int64_t param_2)
{
  (**(func_ptr_t *)**(uint64_t **)(param_2 + 0x20))(*(uint64_t **)(param_2 + 0x20),1);
  return;
}

// func_0x18043f840
void func_0x18043f840(int64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  int64_t *pLong_3;
  
  LOCK();
  *(uint32_t *)(param_2 + 0x10) = 0;
  UNLOCK();
  LOCK();
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  UNLOCK();
  *(int64_t *)(param_2 + 0xb8) = param_1;
  if (*(int *)(param_1 + 0x10) != 0) {
LAB_18043f89a:
    func_0x18043fac0(param_2);
    return;
  }
  iVal_2 = func_0x180675fe0(param_1 + 0x18);
  if (iVal_2 == 0) {
    if (*(int *)(param_1 + 100) != 0x7fffffff) {
      if (*(int *)(param_1 + 0x10) == 0) {
        pLong_3 = (int64_t *)func_0x180672de0(0x10);
        *pLong_3 = param_2;
        pLong_3[1] = 0;
        if (*(int64_t *)(param_1 + 0x68) == 0) {
          *(int64_t **)(param_1 + 0x68) = pLong_3;
        }
        else {
          *(int64_t **)(*(int64_t *)(param_1 + 0x70) + 8) = pLong_3;
        }
        *(int64_t **)(param_1 + 0x70) = pLong_3;
        func_0x180676070(param_1 + 0x18);
        return;
      }
      func_0x180676070(param_1 + 0x18);
      goto LAB_18043f89a;
    }
  }
  else {
    func_0x180674150(5);
  }
  *(uint32_t *)(param_1 + 100) = 0x7ffffffe;
  func_0x180674150(6);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18043f910
void Unwind_18043f910(uint64_t param_1,int64_t param_2)
{
  func_0x180676070(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@18043fa10
void Unwind_18043fa10(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x30);
  return;
}

// func_0x18043fac0
uint64_t func_0x18043fac0(int64_t *param_1)
{
  int64_t *pLong_1;
  uint uVal_2;
  func_ptr_t fnPtr_3;
  DWORD DVar4;
  int iVal_5;
  uint64_t uVal_6;
  bool bFlag_7;
  
  DVar4 = GetCurrentThreadId();
  LOCK();
  uVal_2 = *(uint *)(param_1 + 2);
  bFlag_7 = uVal_2 == 0;
  if (bFlag_7) {
    *(DWORD *)(param_1 + 2) = DVar4;
    uVal_2 = 0;
  }
  uVal_6 = (uint64_t)uVal_2;
  UNLOCK();
  if (bFlag_7) {
    (**(func_ptr_t *)(*param_1 + 0x10))(param_1);
    LOCK();
    uVal_2 = *(uint *)(param_1 + 2);
    if (DVar4 == uVal_2) {
      *(int *)(param_1 + 2) = 3;
      uVal_2 = DVar4;
    }
    uVal_6 = (uint64_t)uVal_2;
    UNLOCK();
    if (uVal_2 == 2) {
      iVal_5 = func_0x180675fe0(param_1 + 0xc);
      if (iVal_5 == 0) {
        if (*(int *)((int64_t)param_1 + 0xac) != 0x7fffffff) {
          *(uint8_t *)(param_1 + 0x16) = 1;
          func_0x180676070(param_1 + 0xc);
          uVal_6 = func_0x180675650(param_1 + 3);
          goto LAB_18043fb27;
        }
      }
      else {
        func_0x180674150(5);
      }
      *(uint32_t *)((int64_t)param_1 + 0xac) = 0x7ffffffe;
      func_0x180674150(6);
      fnPtr_3 = (func_ptr_t )swi(3);
      uVal_6 = (*fnPtr_3)();
      return uVal_6;
    }
  }
LAB_18043fb27:
  LOCK();
  pLong_1 = param_1 + 1;
  *(int *)pLong_1 = *(int *)pLong_1 + -1;
  UNLOCK();
  if (*(int *)pLong_1 != 0) {
    return uVal_6;
  }
                    /* WARNING: Could not recover jumptable at 0x00018043fb39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVal_6 = (**(func_ptr_t *)(*param_1 + 8))(param_1);
  return uVal_6;
}

// Unwind@18043fc90
void Unwind_18043fc90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xa8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x70));
  }
  return;
}

// Catch@18043fcd0
uint8_t * Catch_18043fcd0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 200) + 8);
  (**(func_ptr_t *)(*pLong_1 + 8))(pLong_1,1,0,0,pLong_1 + 2);
  return &LAB_18043fc53;
}

// Catch@18043fd20
uint8_t * Catch_18043fd20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 200) + 8);
  (**(func_ptr_t *)(*pLong_1 + 8))(pLong_1,1,0,0,pLong_1 + 2);
  return &LAB_18043fc53;
}

// Catch_All@18043fd70
uint8_t * Catch_All_18043fd70(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  
  uVal_2 = *(uint64_t *)(*(int64_t *)(param_2 + 200) + 8);
  *(uint8_t (*)[16])(param_2 + 0xb0) = ZEXT816(0);
  lVal_1 = param_2 + 0xb0;
  func_0x180674aa0(lVal_1);
  func_0x180674bf0(lVal_1);
  func_0x18043f130(uVal_2,lVal_1);
  func_0x180674ab0(param_2 + 0xb0);
  return &LAB_18043fc53;
}

// Unwind@18043fdd0
void Unwind_18043fdd0(uint64_t param_1,int64_t param_2)
{
  func_0x180674ab0(param_2 + 0xb0);
  return;
}

// Unwind@18043fe80
void Unwind_18043fe80(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18043ff20
void Unwind_18043ff20(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18043ff40
void func_0x18043ff40(int64_t param_1,uint8_t param_2)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  
  *(uint8_t *)(param_1 + 0x170) = param_2;
  lVal_1 = param_1 + 0x20;
  iVal_3 = func_0x180675fe0(lVal_1);
  if (iVal_3 == 0) {
    if (*(int *)(param_1 + 0x6c) != 0x7fffffff) {
      if (*(int *)(param_1 + 8) == 4) {
        func_0x180676070(lVal_1);
        return;
      }
      *(uint32_t *)(param_1 + 8) = 3;
      func_0x180676070(lVal_1);
      iVal_3 = func_0x180675fe0(param_1 + 0xd0);
      if (iVal_3 == 0) {
        if (*(int *)(param_1 + 0x11c) != 0x7fffffff) {
          if (*(int *)(param_1 + 0x138) < 2) {
            *(uint32_t *)(param_1 + 0x138) = 2;
          }
          func_0x180675650(param_1 + 0x88);
          func_0x180676070(param_1 + 0xd0);
          lVal_1 = *(int64_t *)(param_1 + 0x70);
          *(uint64_t *)(param_1 + 0x70) = 0;
          while (lVal_1 != 0) {
            lVal_1 = *(int64_t *)(lVal_1 + 8);
            func_0x18043eb40(param_1);
          }
          return;
        }
        goto LAB_180440026;
      }
      goto LAB_18044000b;
    }
  }
  else {
LAB_18044000b:
    func_0x180674150(5);
  }
  *(uint32_t *)(param_1 + 0x6c) = 0x7ffffffe;
  func_0x180674150(6);
LAB_180440026:
  *(uint32_t *)(param_1 + 0x11c) = 0x7ffffffe;
  func_0x180674150(6);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x180440040
uint64_t func_0x180440040(int64_t param_1,int64_t *param_2)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  uint8_t uVal_3;
  uint64_t uVal_4;
  uint64_t unaff_RBX;
  int64_t lVal_5;
  
  lVal_5 = *(int64_t *)(param_1 + 8) + 0x160;
  _guard_check_icall(lVal_5);
  if ((int64_t *)param_2[7] != (int64_t *)0x0) {
    uVal_3 = (**(func_ptr_t *)(*(int64_t *)param_2[7] + 0x10))();
    _guard_check_icall(lVal_5);
    pLong_1 = (int64_t *)param_2[7];
    if (pLong_1 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != param_2);
    }
    return CONCAT71((int7)((uint64_t)unaff_RBX >> 8),uVal_3) & 0xffffffff;
  }
  func_0x180674610();
  fnPtr_2 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_2)();
  return uVal_4;
}

// Unwind@1804400c0
void Unwind_1804400c0(uint64_t param_1,int64_t param_2)
{
  _guard_check_icall(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@1804400f0
void Unwind_1804400f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = (int64_t *)(*(int64_t **)(param_2 + 0x30))[7];
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x30));
  }
  return;
}

// Unwind@180440130
void Unwind_180440130(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180440150
int64_t func_0x180440150(int64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
  int64_t local_68 [7];
  int64_t *local_30;
  uint64_t *local_28;
  uint64_t *local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = (int64_t *)0x0;
  pU64_1 = *(uint64_t **)(param_2 + 0x38);
  if (pU64_1 != (uint64_t *)0x0) {
    local_30 = (int64_t *)(**(func_ptr_t *)*pU64_1)(pU64_1,local_68);
  }
  *(uint64_t *)(param_1 + 0x38) = 0;
  local_20 = (uint64_t *)func_0x180672de0(0x48);
  *local_20 = &PTR_LAB_1806cdaf0;
  local_20[8] = 0;
  if (local_30 == (int64_t *)0x0) {
    *(uint64_t **)(param_1 + 0x38) = local_20;
  }
  else {
    local_28 = local_20 + 1;
    uVal_2 = (**(func_ptr_t *)*local_30)();
    local_20[8] = uVal_2;
    *(uint64_t **)(param_1 + 0x38) = local_20;
    if (local_30 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_30 + 0x20))(local_30,local_30 != local_68);
    }
  }
  return param_1;
}

// Unwind@180440200
void Unwind_180440200(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@180440230
void Unwind_180440230(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x68) + 0x40);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))
              (pLong_1,CONCAT71((int7)((uint64_t)*(int64_t **)(param_2 + 0x60) >> 8),
                               pLong_1 != *(int64_t **)(param_2 + 0x60)));
    *(uint64_t *)(*(int64_t *)(param_2 + 0x68) + 0x40) = 0;
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x68),0x48);
  return;
}

// Unwind@180440280
void Unwind_180440280(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@180440320
void Unwind_180440320(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x28) + 0x40);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))
              (pLong_1,CONCAT71((int7)((uint64_t)*(int64_t **)(param_2 + 0x20) >> 8),
                               pLong_1 != *(int64_t **)(param_2 + 0x20)));
    *(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x40) = 0;
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x28),0x48);
  return;
}

// Catch_All@180440460
uint8_t * Catch_All_180440460(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  *(uint8_t (*)[16])(param_2 + 0x20) = ZEXT816(0);
  lVal_1 = param_2 + 0x20;
  func_0x180674aa0(lVal_1);
  func_0x180674bf0(lVal_1);
  func_0x18043d340(*(uint64_t *)(param_2 + 0x30),lVal_1,0);
  return &LAB_180440446;
}

// func_0x1804404b0
uint64_t func_0x1804404b0(uint64_t param_1,uint64_t param_2)
{
  func_0x1804404e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x120);
  }
  return param_1;
}

// func_0x1804404e0
void func_0x1804404e0(uint64_t *param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  func_ptr_t fnPtr_4;
  
  *param_1 = &PTR_FUN_1806cd980;
  if (param_1[0x22] != 0) {
    func_0x180440620();
    pLong_3 = (int64_t *)param_1[0x23];
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
    *param_1 = &PTR_LAB_1806cd8f0;
    pLong_3 = (int64_t *)param_1[0x21];
    if (pLong_3 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,pLong_3 != param_1 + 0x1a);
      param_1[0x21] = 0;
    }
    *param_1 = &PTR_LAB_1806cd920;
    if ((*(char *)((int64_t)param_1 + 0xc1) == '\x01') && (*(int *)((int64_t)param_1 + 0xbc) == 0)
       ) {
      func_0x180675780(param_1 + 4);
    }
    func_0x180674ab0(param_1 + 2);
    return;
  }
  func_0x1804405e0();
  fnPtr_4 = (func_ptr_t )swi(3);
  (*fnPtr_4)();
  return;
}

// Unwind@1804405c0
void Unwind_1804405c0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1804405e0
void func_0x1804405e0(void)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_48 [32];
  uint8_t local_28 [24];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x1800ae690(local_28,"This function cannot be called on a default constructed task");
  func_0x18067a120(local_28,&DAT_1807d9dd0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180440620
uint64_t func_0x180440620(uint8_t *param_1)
{
  uint8_t *pU64_1;
  uint8_t *pU64_2;
  char ch_3;
  int *pInt_4;
  func_ptr_t fnPtr_5;
  int iVal_6;
  uint64_t uVal_7;
  uint8_t local_48 [16];
  uint8_t *local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  ch_3 = param_1[0xc];
  pU64_1 = param_1 + 0x88;
  pU64_2 = param_1 + 0xd0;
  iVal_6 = func_0x180675fe0(pU64_2);
  if (ch_3 == '\x01') {
    if (iVal_6 == 0) {
      if (*(int *)(param_1 + 0x11c) != 0x7fffffff) {
        iVal_6 = *(int *)(param_1 + 0x138);
        while (iVal_6 < 2) {
          func_0x180675600(pU64_1,pU64_2);
          iVal_6 = *(int *)(param_1 + 0x138);
        }
LAB_180440734:
        func_0x180676070(pU64_2);
LAB_18044073c:
        pInt_4 = *(int **)(param_1 + 0x10);
        if (pInt_4 == (int *)0x0) {
          return (uint64_t)((*(int *)(param_1 + 8) == 4) + 1);
        }
        if (*pInt_4 == 0) {
          LOCK();
          *pInt_4 = 1;
          UNLOCK();
        }
        param_1 = local_48;
        func_0x18043d250(param_1,pInt_4 + 2);
        func_0x18043d210(param_1);
        goto LAB_180440782;
      }
    }
    else {
LAB_180440782:
      func_0x180674150(5);
    }
LAB_18044078c:
    *(uint32_t *)(param_1 + 0x11c) = 0x7ffffffe;
    func_0x180674150(6);
  }
  else {
    local_38 = param_1;
    if (iVal_6 == 0) {
      if (*(int *)(param_1 + 0x11c) == 0x7fffffff) goto LAB_1804407ac;
      iVal_6 = *(int *)(param_1 + 0x138);
      while (iVal_6 < 2) {
        func_0x180675600(pU64_1,pU64_2);
        iVal_6 = *(int *)(param_1 + 0x138);
      }
      func_0x180676070(pU64_2);
      param_1 = local_38;
      if (local_38[0xd] != '\x01') goto LAB_18044073c;
      iVal_6 = func_0x180675fe0(pU64_2);
      if (iVal_6 == 0) {
        if (*(int *)(param_1 + 0x11c) != 0x7fffffff) {
          iVal_6 = *(int *)(param_1 + 0x138);
          while (iVal_6 < 2) {
            func_0x180675600(pU64_1,pU64_2);
            iVal_6 = *(int *)(param_1 + 0x138);
          }
          goto LAB_180440734;
        }
        goto LAB_18044078c;
      }
      goto LAB_180440782;
    }
  }
  func_0x180674150(5);
LAB_1804407ac:
  *(uint32_t *)(param_1 + 0x11c) = 0x7ffffffe;
  func_0x180674150(6);
  fnPtr_5 = (func_ptr_t )swi(3);
  uVal_7 = (*fnPtr_5)();
  return uVal_7;
}

// Catch@1804407d0
uint64_t Catch_1804407d0(void)
{
  return 0x1804406ec;
}

// Catch@180440800
uint64_t Catch_180440800(void)
{
  return 0x1804406ec;
}

// Catch_All@180440830
uint64_t Catch_All_180440830(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x40) + 0x10);
  if (lVal_1 == 0) {
    *(uint8_t (*)[16])(param_2 + 0x30) = ZEXT816(0);
    lVal_1 = param_2 + 0x30;
    func_0x180674aa0(lVal_1);
    func_0x180674bf0(lVal_1);
    func_0x18043f130(*(uint64_t *)(param_2 + 0x40),lVal_1);
    func_0x180674ab0(param_2 + 0x30);
    lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x40) + 0x10);
  }
  func_0x1804408e0(lVal_1);
  return 0x1804406ec;
}

// Unwind@1804408b0
void Unwind_1804408b0(uint64_t param_1,int64_t param_2)
{
  func_0x180674ab0(param_2 + 0x30);
  return;
}

// func_0x1804408e0
void func_0x1804408e0(int *param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_48 [40];
  uint8_t local_20 [16];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  if (*param_1 == 0) {
    LOCK();
    *param_1 = 1;
    UNLOCK();
  }
  func_0x18043d250(local_20,param_1 + 2);
  func_0x18043d210(local_20);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1804409d0
void Unwind_1804409d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1804409f0
void Unwind_1804409f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x180440a10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180440a10(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806c926c;
  uVal_9 = _UNK_1806c9268;
  uVal_8 = _UNK_1806c9264;
  uVal_7 = _DAT_1806c9260;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9264;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9260;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9268;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c926c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0xe3;
    param_1[2][1] = param_1[2][1] ^ 0x5d;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x180440a40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180440a40(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c9244;
    uVal_2 = param_1[2] ^ _UNK_1806c9248;
    uVal_3 = param_1[3] ^ _UNK_1806c924c;
    *param_1 = *param_1 ^ _DAT_1806c9240;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806c9270,0);
  }
  return;
}

// Unwind@180441130
void Unwind_180441130(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x80);
  return;
}

// Unwind@180441170
void Unwind_180441170(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x50);
  return;
}

// Unwind@1804411b0
void Unwind_1804411b0(void)
{
  func_0x180676070(&DAT_180840a98);
  return;
}

// Unwind@180441200
void Unwind_180441200(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180441230
void Unwind_180441230(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x80);
  return;
}

// func_0x180441270
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441270(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9284;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9280;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9288;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c928c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x93;
    param_1[1][1] = param_1[1][1] ^ 0xdf;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x180441290
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441290(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9284;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9280;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9288;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c928c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xddebdf93;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1804412b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804412b0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c9294;
    uVal_2 = param_1[2] ^ _UNK_1806c9298;
    uVal_3 = param_1[3] ^ _UNK_1806c929c;
    *param_1 = *param_1 ^ _DAT_1806c9290;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806c92a0,0);
  }
  return;
}

// func_0x1804412f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804412f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c92b4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c92b0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c92b8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c92bc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xeb6d7749;
    param_1[1][4] = param_1[1][4] ^ 0xb5;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x180441320
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441320(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c92c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c92c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c92c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c92cc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x65;
    param_1[1][1] = param_1[1][1] ^ 0x6f;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x180441340
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441340(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c92d4;
    uVal_2 = param_1[2] ^ _UNK_1806c92d8;
    uVal_3 = param_1[3] ^ _UNK_1806c92dc;
    *param_1 = *param_1 ^ _DAT_1806c92d0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806c92e0,0);
  }
  return;
}

// func_0x180441390
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441390(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806c92fc;
  uVal_9 = _UNK_1806c92f8;
  uVal_8 = _UNK_1806c92f4;
  uVal_7 = _DAT_1806c92f0;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c92f4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c92f0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c92f8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c92fc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xdb5dd5b3;
    param_1[2][4] = param_1[2][4] ^ 0x5b;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x1804413d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804413d0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c9304;
    uVal_2 = param_1[2] ^ _UNK_1806c9308;
    uVal_3 = param_1[3] ^ _UNK_1806c930c;
    *param_1 = *param_1 ^ _DAT_1806c9300;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806c9310,0);
  }
  return;
}

// func_0x180441410
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441410(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c9324;
    uVal_2 = param_1[2] ^ _UNK_1806c9328;
    uVal_3 = param_1[3] ^ _UNK_1806c932c;
    *param_1 = *param_1 ^ _DAT_1806c9320;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x573939c725ab85d1;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806c9330,0);
  }
  return;
}

// func_0x180441460
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441460(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9344;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9340;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9348;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c934c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x91;
    param_1[1][1] = param_1[1][1] ^ 0xd1;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x180441480
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441480(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c9354;
    uVal_2 = param_1[2] ^ _UNK_1806c9358;
    uVal_3 = param_1[3] ^ _UNK_1806c935c;
    *param_1 = *param_1 ^ _DAT_1806c9350;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806c9360,0);
  }
  return;
}

// func_0x1804414c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804414c0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9374;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9370;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9378;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c937c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x55eb917d;
    param_1[1][4] = param_1[1][4] ^ 0x65;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1804414f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804414f0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c9384;
    uVal_2 = param_1[2] ^ _UNK_1806c9388;
    uVal_3 = param_1[3] ^ _UNK_1806c938c;
    *param_1 = *param_1 ^ _DAT_1806c9380;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806c9390,0);
  }
  return;
}

// func_0x180441540
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441540(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c93a4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c93a0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c93a8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c93ac;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xc1;
    param_1[1][1] = param_1[1][1] ^ 0x59;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x180441560
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441560(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c93b4;
    uVal_2 = param_1[2] ^ _UNK_1806c93b8;
    uVal_3 = param_1[3] ^ _UNK_1806c93bc;
    *param_1 = *param_1 ^ _DAT_1806c93b0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806c93c0,0);
  }
  return;
}

// func_0x1804415a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804415a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c93d4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c93d0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c93d8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c93dc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xb93f6f29a591499d;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xa591499d;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x1804415d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804415d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c93e4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c93e0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c93e8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c93ec;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x59099f8b6fa34bbd;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x6fa34bbd;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x180441600
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441600(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806c93fc;
  uVal_9 = _UNK_1806c93f8;
  uVal_8 = _UNK_1806c93f4;
  uVal_7 = _DAT_1806c93f0;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c93f4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c93f0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c93f8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c93fc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xa9dd039f;
    param_1[2][4] = param_1[2][4] ^ 0xd9;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x180441640
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441640(uint8_t (*param_1)[16])
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
  if (param_1[2][2] == '\x01') {
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
    param_1[2][1] = param_1[2][1] ^ 0xb1;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x180441750
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441750(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2de4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2de0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2de8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dec;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x9b4dbd9f;
    param_1[1][4] = param_1[1][4] ^ 0xcd;
    param_1[1][5] = param_1[1][5] ^ 0xb9;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x180441780
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441780(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2684;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2680;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2688;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b268c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xc169d3a1093b4331;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x93b4331;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x1804417e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804417e0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b4ebc;
  uVal_9 = _UNK_1806b4eb8;
  uVal_8 = _UNK_1806b4eb4;
  uVal_7 = _DAT_1806b4eb0;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b4eb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b4eb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b4eb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b4ebc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x99;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x180441860
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441860(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2dd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2dd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2dd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2ddc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x81e15bed;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x180441880
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441880(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b68a4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b68a0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b68a8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b68ac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x8183fda96f799353;
    param_1[1][8] = param_1[1][8] ^ 0x53;
    param_1[1][9] = param_1[1][9] ^ 0x93;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x1804418b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804418b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b68b4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b68b0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b68b8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b68bc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x4bd1a9a9;
    param_1[1][4] = param_1[1][4] ^ 0x75;
    param_1[1][5] = param_1[1][5] ^ 0xc9;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1804418e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804418e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aebb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aebb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aebb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aebbc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x55d5cd91afbf43e9;
    param_1[1][8] = param_1[1][8] ^ 0xe9;
    param_1[1][9] = param_1[1][9] ^ 0x43;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x180441930
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441930(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2e3c;
  uVal_9 = _UNK_1806b2e38;
  uVal_8 = _UNK_1806b2e34;
  uVal_7 = _DAT_1806b2e30;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e3c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0xd3;
    param_1[2][1] = param_1[2][1] ^ 0x1f;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x180441980
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441980(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e8c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x8f;
    param_1[1][1] = param_1[1][1] ^ 0x51;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1804419a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804419a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aed44;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aed40;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aed48;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aed4c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xdbaf4383c59f19cf;
    param_1[1][8] = param_1[1][8] ^ 0xcf;
    param_1[1][9] = param_1[1][9] ^ 0x19;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x1804419d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804419d0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2cf4;
    uVal_2 = param_1[2] ^ _UNK_1806b2cf8;
    uVal_3 = param_1[3] ^ _UNK_1806b2cfc;
    *param_1 = *param_1 ^ _DAT_1806b2cf0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b27a0,0);
  }
  return;
}

// func_0x180441a10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441a10(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c3644;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c3640;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c3648;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c364c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xcf2529af23519919;
    param_1[1][8] = param_1[1][8] ^ 0x19;
    param_1[1][9] = param_1[1][9] ^ 0x99;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x180441a60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441a60(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aedb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aedb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aedb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aedbc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x77965d7;
    param_1[1][4] = param_1[1][4] ^ 0xed;
    param_1[1][5] = param_1[1][5] ^ 0x21;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x180441a90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441a90(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806aedcc;
  uVal_9 = _UNK_1806aedc8;
  uVal_8 = _UNK_1806aedc4;
  uVal_7 = _DAT_1806aedc0;
  if (param_1[2][4] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aedc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aedc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aedc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aedcc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xdfff2f27;
    param_1[2][4] = 0;
  }
  return;
}

// func_0x180441ae0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441ae0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d3c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x1b253f8d;
    param_1[1][4] = param_1[1][4] ^ 0xeb;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x180441b10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441b10(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9404;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9400;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9408;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c940c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xa9fd3505;
    param_1[1][4] = param_1[1][4] ^ 0xcf;
    param_1[1][5] = param_1[1][5] ^ 0xc1;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x180441b40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180441b40(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6924;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6920;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6928;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b692c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x85296fdf;
    param_1[1][4] = param_1[1][4] ^ 0x79;
    param_1[1][5] = param_1[1][5] ^ 0x41;
    param_1[1][6] = 0;
  }
  return;
}

// Unwind@180442ec0
void Unwind_180442ec0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@180442f00
void Unwind_180442f00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@180442f40
void Unwind_180442f40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@180442f80
void Unwind_180442f80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@180442fc0
void Unwind_180442fc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180443000
void Unwind_180443000(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180443040
void Unwind_180443040(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180443080
void Unwind_180443080(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1804430c0
void Unwind_1804430c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180443100
void Unwind_180443100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180443140
void Unwind_180443140(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0xf0);
  return;
}

// Unwind@180443180
void Unwind_180443180(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1804431c0
void Unwind_1804431c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@180443200
void Unwind_180443200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180443240
void Unwind_180443240(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180443260
void Unwind_180443260(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x151ec) = 0;
  return;
}

// Unwind@1804432b0
void Unwind_1804432b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1520c) = 0;
  return;
}

// Unwind@180443300
void Unwind_180443300(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1523c) = 0;
  return;
}

// Unwind@180443350
void Unwind_180443350(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15268) = 0;
  return;
}

// Unwind@1804433a0
void Unwind_1804433a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15290) = 0;
  return;
}

// Unwind@1804433f0
void Unwind_1804433f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// func_0x180443510
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180443510(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9444;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9440;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9448;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c944c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xaf2bbdcfdd8b63c7;
    param_1[1][8] = param_1[1][8] ^ 199;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x180443570
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180443570(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9454;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9450;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9458;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c945c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xb37998f9df7c989;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x9df7c989;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x8f;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x180443610
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180443610(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9464;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9460;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9468;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c946c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x1dc54129e317d903;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1804436a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804436a0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806c947c;
  uVal_9 = _UNK_1806c9478;
  uVal_8 = _UNK_1806c9474;
  uVal_7 = _DAT_1806c9470;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9474;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9470;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9478;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c947c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806c9480,0);
  }
  return;
}

// Unwind@180443730
void Unwind_180443730(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180443750
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180443750(void)
{
  uint64_t *pU64_1;
  int iVal_2;
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
  uint8_t auArr_14 [16];
  uint uVal_15;
  uint uVal_16;
  uint uVal_17;
  uint uVal_18;
  uint uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  int64_t *pLong_23;
  char ch_24;
  size_t sz_25;
  uint64_t uVal_26;
  uint64_t uVal_27;
  int64_t lVal_28;
  uint8_t (*pArr16_29)[16];
  uint8_t (**ptr2_Arr16_30)[16];
  int64_t ******ptr6_Long_31;
  char *fnPtr_32;
  char *fnPtr_33;
  uint64_t uVal_34;
  int64_t lVal_35;
  uint32_t *pU64_36;
  uint8_t (*pArr16_37)[16];
  uint64_t uVal_38;
  int64_t *pLong_39;
  int64_t lVal_40;
  int64_t *******ptr7_Long_41;
  uint *pU64_42;
  uint *pU64_43;
  uint *pU64_44;
  uint8_t *pU64_45;
  uint64_t uVal_46;
  uint8_t (*pArr16_47)[16];
  int64_t *******ptr7_Long_48;
  bool bFlag_49;
  uint uVal_50;
  uint64_t in_stack_fffffffffffffa28;
  uint32_t uVal_51;
  uint8_t local_5c8 [32];
  uint8_t local_5a8 [32];
  uint8_t local_588 [32];
  uint8_t local_568 [48];
  uint32_t local_538;
  uint32_t uStack_534;
  uint32_t uStack_530;
  uint32_t uStack_52c;
  uint32_t local_528;
  uint32_t uStack_524;
  uint32_t uStack_520;
  uint32_t uStack_51c;
  uint32_t local_518;
  uint32_t uStack_514;
  uint32_t uStack_510;
  uint32_t uStack_50c;
  uint32_t local_508;
  uint32_t uStack_504;
  uint32_t uStack_500;
  uint32_t uStack_4fc;
  uint32_t local_4f8;
  uint32_t uStack_4f4;
  uint32_t uStack_4f0;
  uint32_t uStack_4ec;
  uint32_t local_4e8;
  uint32_t uStack_4e4;
  uint32_t uStack_4e0;
  uint32_t uStack_4dc;
  uint32_t local_4d8;
  uint32_t uStack_4d4;
  uint32_t uStack_4d0;
  uint32_t uStack_4cc;
  uint32_t local_4c8;
  uint32_t uStack_4c4;
  uint32_t uStack_4c0;
  uint32_t uStack_4bc;
  uint8_t local_4b8 [16];
  uint8_t local_4a8 [16];
  uint8_t local_498 [16];
  uint8_t local_488 [16];
  uint8_t local_478 [16];
  uint8_t local_468 [16];
  uint8_t local_458 [16];
  uint8_t local_448 [16];
  uint8_t local_438 [16];
  uint8_t local_428 [16];
  uint8_t local_418 [16];
  uint8_t local_408 [16];
  uint8_t local_3f8 [16];
  uint8_t local_3e8 [16];
  FILE *local_3d8;
  char *local_3d0;
  int64_t local_3c8;
  uint *local_3c0;
  char *local_3b8;
  char *local_3b0;
  char *local_3a8;
  char *local_3a0;
  int64_t local_398;
  int64_t local_390;
  uint8_t (*local_388)[16];
  uint8_t (*pauStack_380)[16];
  uint32_t local_378;
  uint32_t uStack_374;
  uint32_t uStack_370;
  uint32_t uStack_36c;
  uint8_t (*local_368)[16];
  uint8_t (*pauStack_360)[16];
  uint32_t local_358;
  int iStack_354;
  uint32_t uStack_350;
  uint32_t uStack_34c;
  uint64_t local_348;
  uint32_t uStack_340;
  uint32_t uStack_33c;
  uint32_t uStack_338;
  uint32_t uStack_334;
  uint32_t uStack_330;
  uint32_t uStack_32c;
  uint8_t local_328;
  int64_t *******local_310;
  uint8_t local_300 [168];
  int64_t *******local_258;
  uint64_t local_250;
  uint64_t local_240;
  uint64_t local_238;
  int iStack_230;
  uint16_t uStack_22c;
  uint8_t uStack_22a;
  uint32_t uStack_229;
  uint8_t uStack_225;
  uint16_t uStack_224;
  uint8_t uStack_222;
  uint32_t uStack_221;
  uint8_t uStack_21d;
  uint16_t uStack_21c;
  uint8_t uStack_21a;
  uint8_t uStack_219;
  uint32_t uStack_218;
  uint16_t uStack_214;
  uint16_t uStack_212;
  uint32_t uStack_210;
  uint32_t uStack_20c;
  uint32_t local_208;
  uint32_t uStack_204;
  uint32_t uStack_200;
  uint16_t uStack_1fc;
  uint8_t uStack_1fa;
  uint8_t uStack_1f9;
  undefined6 uStack_1f8;
  uint64_t auStack_1f0 [13];
  uint8_t **local_188 [12];
  char local_128 [8];
  int64_t *local_120;
  uint8_t local_118 [16];
  uint8_t local_108 [40];
  uint64_t local_e0;
  uint8_t local_d8 [16];
  uint8_t local_c8 [16];
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint local_90;
  uint8_t local_89;
  uint8_t local_88;
  uint8_t local_87;
  uint8_t local_86;
  uint8_t local_85;
  uint8_t local_84;
  uint8_t local_83;
  uint8_t local_82;
  uint8_t local_81;
  uint64_t local_80;
  
  uVal_51 = (uint32_t)((uint64_t)in_stack_fffffffffffffa28 >> 0x20);
  local_80 = 0xfffffffffffffffe;
  uStack_225 = (uint8_t)_UNK_1806cde31;
  uStack_224 = (uint16_t)((uint)_UNK_1806cde31 >> 8);
  uStack_222 = (uint8_t)((uint)_UNK_1806cde31 >> 0x18);
  uStack_221 = _UNK_1806cde35;
  local_238._0_4_ = _DAT_1806cde1e;
  local_238._4_4_ = _UNK_1806cde22;
  iStack_230 = _UNK_1806cde26;
  uStack_22c = (uint16_t)_UNK_1806cde2a;
  uStack_22a = (uint8_t)((uint)_UNK_1806cde2a >> 0x10);
  uStack_229._0_1_ = (uint8_t)((uint)_UNK_1806cde2a >> 0x18);
  uStack_229 = CONCAT31(_UNK_1806cde2e,(uint8_t)uStack_229);
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x152b0) == '\0') {
    lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_28 + 0x152b0) = 1;
    func_0x18007c9b0(lVal_28 + 0x15291,&local_238);
    func_0x180673140(&LAB_180448f10);
  }
  fnPtr_32 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                    + 0x15291);
  func_0x180448f40(fnPtr_32);
  uStack_225 = 0;
  uStack_224 = 0;
  uStack_222 = 0;
  uStack_221 = SUB164(ZEXT816(0),7);
  uStack_21d = 0;
  uStack_21c = 0;
  uStack_21a = 0;
  uStack_219 = 0;
  local_238._0_4_ = 0;
  local_238._4_4_ = 0;
  iStack_230 = 0;
  uStack_22c = 0;
  uStack_22a = 0;
  uStack_229 = 0;
  sz_25 = strlen(fnPtr_32);
  if (-1 < (int64_t)sz_25) {
    if (sz_25 < 0x10) {
      pU64_43 = (uint *)&local_238;
      uVal_46 = 0xf;
    }
    else {
      uVal_26 = sz_25 | 0xf;
      uVal_46 = 0x16;
      if (0x16 < uVal_26) {
        uVal_46 = uVal_26;
      }
      if (uVal_26 < 0xfff) {
        pU64_43 = (uint *)func_0x180672de0(uVal_46 + 1);
      }
      else {
        lVal_28 = func_0x180672de0(uVal_46 + 0x28);
        pU64_43 = (uint *)(lVal_28 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_43 + 0xfffffffffffffffe) = lVal_28;
      }
      local_238._0_4_ = (uint)pU64_43;
      local_238._4_4_ = (uint32_t)((uint64_t)pU64_43 >> 0x20);
    }
    uStack_229._1_3_ = (undefined3)sz_25;
    uStack_225 = (uint8_t)(sz_25 >> 0x18);
    uStack_224 = (uint16_t)(sz_25 >> 0x20);
    uStack_222 = (uint8_t)(sz_25 >> 0x30);
    uStack_221._0_1_ = (uint8_t)(sz_25 >> 0x38);
    uStack_221._1_3_ = (undefined3)uVal_46;
    uStack_21d = (uint8_t)(uVal_46 >> 0x18);
    uStack_21c = (uint16_t)(uVal_46 >> 0x20);
    uStack_21a = (uint8_t)(uVal_46 >> 0x30);
    uStack_219 = (uint8_t)(uVal_46 >> 0x38);
    func_0x1806aa960(pU64_43,fnPtr_32,sz_25);
    *(uint8_t *)((int64_t)pU64_43 + sz_25) = 0;
    pU64_43 = (uint *)&local_238;
    func_0x18045fe90(pU64_43);
    uVal_46 = CONCAT17(uStack_219,
                      CONCAT16(uStack_21a,CONCAT24(uStack_21c,CONCAT13(uStack_21d,uStack_221._1_3_))
                              ));
    if (0xf < uVal_46) {
      lVal_35 = CONCAT44(local_238._4_4_,(uint)local_238);
      uVal_26 = uVal_46 + 1;
      lVal_28 = lVal_35;
      if (0xfff < uVal_26) {
        lVal_28 = *(int64_t *)(lVal_35 + -8);
        if (0x1f < (uint64_t)((lVal_35 + -8) - lVal_28)) goto LAB_180446c79;
        uVal_26 = uVal_46 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_28,uVal_26);
    }
    uVal_27 = func_0x180129e40(DAT_180840a58);
    lVal_28 = func_0x18010ce60(uVal_27,0x37);
    func_0x18010ce00(*(uint64_t *)(lVal_28 + 8));
    if (*(int *)(lVal_28 + 0x18) == 0) {
      local_208 = _DAT_1806cde69;
      uStack_204 = _UNK_1806cde6d;
      uStack_200 = _UNK_1806cde71;
      uStack_1fc = (uint16_t)_UNK_1806cde75;
      uStack_218 = _DAT_1806cde59;
      uStack_214 = (uint16_t)_UNK_1806cde5d;
      uStack_212 = (uint16_t)((uint)_UNK_1806cde5d >> 0x10);
      uStack_210 = _UNK_1806cde61;
      uStack_20c = _UNK_1806cde65;
      uStack_225 = (uint8_t)((uint)_DAT_1806cde49 >> 0x18);
      uStack_224 = (uint16_t)_UNK_1806cde4d;
      uStack_222 = (uint8_t)((uint)_UNK_1806cde4d >> 0x10);
      uStack_221._1_3_ = (undefined3)_UNK_1806cde51;
      uStack_221 = CONCAT31(uStack_221._1_3_,(char)((uint)_UNK_1806cde4d >> 0x18));
      uStack_21d = (uint8_t)((uint)_UNK_1806cde51 >> 0x18);
      uStack_21c = (uint16_t)_UNK_1806cde55;
      uStack_21a = (uint8_t)((uint)_UNK_1806cde55 >> 0x10);
      uStack_219 = (uint8_t)((uint)_UNK_1806cde55 >> 0x18);
      local_238._0_4_ = _DAT_1806cde39;
      local_238._4_4_ = _UNK_1806cde3d;
      iStack_230 = _UNK_1806cde41;
      uStack_22c = (uint16_t)_UNK_1806cde45;
      uStack_22a = (uint8_t)((uint)_UNK_1806cde45 >> 0x10);
      uStack_229._0_1_ = (uint8_t)((uint)_UNK_1806cde45 >> 0x18);
      uStack_229 = CONCAT31((int3)_DAT_1806cde49,(uint8_t)uStack_229);
      uStack_1fa = 0xc3;
      uStack_1f9 = 0x2b;
      uStack_1f8 = 0x571658495e9e;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x152f8) == '\0') {
        lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_28 + 0x152f8) = 1;
        func_0x180210ce0(lVal_28 + 0x152b1,&local_238);
        func_0x180673140(&LAB_180448f90);
      }
      uVal_22 = _UNK_1806c34bc;
      uVal_21 = _UNK_1806c34b8;
      uVal_20 = _UNK_1806c34b4;
      uVal_19 = _DAT_1806c34b0;
      lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pArr16_37 = (uint8_t (*)[16])(lVal_28 + 0x152b1);
      if (*(char *)(lVal_28 + 0x152f7) == '\x01') {
        auArr_6._4_4_ = *(uint *)(lVal_28 + 0x152b5) ^ _UNK_1806c34b4;
        auArr_6._0_4_ = *(uint *)*pArr16_37 ^ _DAT_1806c34b0;
        auArr_6._8_4_ = *(uint *)(lVal_28 + 0x152b9) ^ _UNK_1806c34b8;
        auArr_6._12_4_ = *(uint *)(lVal_28 + 0x152bd) ^ _UNK_1806c34bc;
        *pArr16_37 = auArr_6;
        auArr_10._4_4_ = *(uint *)(lVal_28 + 0x152c5) ^ uVal_20;
        auArr_10._0_4_ = *(uint *)(lVal_28 + 0x152c1) ^ uVal_19;
        auArr_10._8_4_ = *(uint *)(lVal_28 + 0x152c9) ^ uVal_21;
        auArr_10._12_4_ = *(uint *)(lVal_28 + 0x152cd) ^ uVal_22;
        *(uint8_t (*)[16])(lVal_28 + 0x152c1) = auArr_10;
        auArr_13._4_4_ = *(uint *)(lVal_28 + 0x152d5) ^ uVal_20;
        auArr_13._0_4_ = *(uint *)(lVal_28 + 0x152d1) ^ uVal_19;
        auArr_13._8_4_ = *(uint *)(lVal_28 + 0x152d9) ^ uVal_21;
        auArr_13._12_4_ = *(uint *)(lVal_28 + 0x152dd) ^ uVal_22;
        *(uint8_t (*)[16])(lVal_28 + 0x152d1) = auArr_13;
        auArr_14._4_4_ = *(uint *)(lVal_28 + 0x152e5) ^ uVal_20;
        auArr_14._0_4_ = *(uint *)(lVal_28 + 0x152e1) ^ uVal_19;
        auArr_14._8_4_ = *(uint *)(lVal_28 + 0x152e9) ^ uVal_21;
        auArr_14._12_4_ = *(uint *)(lVal_28 + 0x152ed) ^ uVal_22;
        *(uint8_t (*)[16])(lVal_28 + 0x152e1) = auArr_14;
        *(uint *)(lVal_28 + 0x152f1) = *(uint *)(lVal_28 + 0x152f1) ^ 0x333b31e9;
        *(byte *)(lVal_28 + 0x152f5) = *(byte *)(lVal_28 + 0x152f5) ^ 0x37;
        *(byte *)(lVal_28 + 0x152f6) = *(byte *)(lVal_28 + 0x152f6) ^ 0x57;
        *(uint8_t *)(lVal_28 + 0x152f7) = 0;
      }
      local_108._0_16_ = ZEXT816(0);
      local_118 = ZEXT816(0);
      sz_25 = strlen((char *)pArr16_37);
      if ((int64_t)sz_25 < 0) goto LAB_180446c74;
      uVal_46 = 0xf;
      pArr16_47 = &local_118;
      if (0xf < sz_25) {
        uVal_26 = sz_25 | 0xf;
        uVal_46 = 0x16;
        if (0x16 < uVal_26) {
          uVal_46 = uVal_26;
        }
        if (uVal_26 < 0xfff) {
          pArr16_47 = (uint8_t (*)[16])func_0x180672de0(uVal_46 + 1);
        }
        else {
          pArr16_29 = (uint8_t (*)[16])func_0x180672de0(uVal_46 + 0x28);
          pArr16_47 = (uint8_t (*)[16])
                     ((uint64_t)((int64_t)(pArr16_29 + 2) + 7U) & 0xffffffffffffffe0);
          *(uint8_t (**)[16])((int64_t)pArr16_47[-1] + 8) = pArr16_29;
        }
        local_118._0_8_ = pArr16_47;
      }
      local_108._8_8_ = uVal_46;
      local_108._0_8_ = sz_25;
      func_0x1806aa960(pArr16_47,pArr16_37,sz_25);
      *(uint8_t *)((int64_t)*pArr16_47 + sz_25) = 0;
      local_368 = (uint8_t (*)[16])&DAT_18076021e;
      pauStack_360 = (uint8_t (*)[16])0x3;
      local_238._0_4_ = 0xd;
      local_238._4_4_ = 0;
      iStack_230 = (int)&local_368;
      uStack_22c = (uint16_t)((uint64_t)&local_368 >> 0x20);
      uStack_22a = (uint8_t)((uint64_t)&local_368 >> 0x30);
      uStack_229._0_1_ = (uint8_t)((uint64_t)&local_368 >> 0x38);
      local_388 = &local_118;
      if (0xf < (uint64_t)local_108._8_8_) {
        local_388 = (uint8_t (*)[16])local_118._0_8_;
      }
      pauStack_380 = (uint8_t (*)[16])local_108._0_8_;
      func_0x18063ff10(&local_348,&local_388,&local_238);
      func_0x18045fe90(&local_348);
      uVal_46 = CONCAT44(uStack_32c,uStack_330);
      if (0xf < uVal_46) {
        lVal_35 = CONCAT44(local_348._4_4_,(uint)local_348);
        uVal_26 = uVal_46 + 1;
        lVal_28 = lVal_35;
        if (0xfff < uVal_26) {
          lVal_28 = *(int64_t *)(lVal_35 + -8);
          if (0x1f < (uint64_t)((lVal_35 + -8) - lVal_28)) goto LAB_180446c79;
          uVal_26 = uVal_46 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_28,uVal_26);
      }
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_330 = 0xf;
      uStack_32c = 0;
      local_348._0_4_ = (uint)local_348 & 0xffffff00;
      if (0xf < (uint64_t)local_108._8_8_) {
        uVal_46 = local_108._8_8_ + 1;
        lVal_28 = local_118._0_8_;
        if (0xfff < uVal_46) {
          lVal_28 = *(int64_t *)(local_118._0_8_ + -8);
          if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_28)) goto LAB_180446c79;
          uVal_46 = local_108._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_28,uVal_46);
      }
    }
    if (DAT_1808408b2 == '\x01') {
      local_208._3_1_ = (uint8_t)_UNK_1806cdeb2;
      local_208 = CONCAT13(local_208._3_1_,_UNK_1806cdeaf);
      uStack_204._3_1_ = (uint8_t)_UNK_1806cdeb6;
      uStack_204 = CONCAT13(uStack_204._3_1_,(int3)((uint)_UNK_1806cdeb2 >> 8));
      uStack_200._3_1_ = (uint8_t)_UNK_1806cdeba;
      uStack_200 = CONCAT13(uStack_200._3_1_,(int3)((uint)_UNK_1806cdeb6 >> 8));
      uStack_1fc = (uint16_t)((uint)_UNK_1806cdeba >> 8);
      uStack_1fa = (uint8_t)((uint)_UNK_1806cdeba >> 0x18);
      uStack_218 = _DAT_1806cde9f;
      uStack_214 = (uint16_t)_UNK_1806cdea3;
      uStack_212 = (uint16_t)((uint)_UNK_1806cdea3 >> 0x10);
      uStack_210 = _UNK_1806cdea7;
      uStack_20c = _UNK_1806cdeab;
      uStack_225 = (uint8_t)((uint)_DAT_1806cde8f >> 0x18);
      uStack_224 = (uint16_t)_UNK_1806cde93;
      uStack_222 = (uint8_t)((uint)_UNK_1806cde93 >> 0x10);
      uStack_221._1_3_ = (undefined3)_UNK_1806cde97;
      uStack_221 = CONCAT31(uStack_221._1_3_,(char)((uint)_UNK_1806cde93 >> 0x18));
      uStack_21d = (uint8_t)((uint)_UNK_1806cde97 >> 0x18);
      uStack_21c = (uint16_t)_UNK_1806cde9b;
      uStack_21a = (uint8_t)((uint)_UNK_1806cde9b >> 0x10);
      uStack_219 = (uint8_t)((uint)_UNK_1806cde9b >> 0x18);
      local_238._0_4_ = _DAT_1806cde7f;
      local_238._4_4_ = _UNK_1806cde83;
      iStack_230 = _UNK_1806cde87;
      uStack_22c = (uint16_t)_UNK_1806cde8b;
      uStack_22a = (uint8_t)((uint)_UNK_1806cde8b >> 0x10);
      uStack_229._0_1_ = (uint8_t)((uint)_UNK_1806cde8b >> 0x18);
      uStack_229 = CONCAT31((int3)_DAT_1806cde8f,(uint8_t)uStack_229);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x1533c) == '\0') {
        lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_28 + 0x1533c) = 1;
        func_0x1801b7c70(lVal_28 + 0x152f9,&local_238);
        func_0x180673140(&LAB_180448fd0);
      }
      uVal_22 = _UNK_1806c949c;
      uVal_21 = _UNK_1806c9498;
      uVal_20 = _UNK_1806c9494;
      uVal_19 = _DAT_1806c9490;
      lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pArr16_37 = (uint8_t (*)[16])(lVal_28 + 0x152f9);
      if (*(char *)(lVal_28 + 0x15338) == '\x01') {
        auArr_4._4_4_ = *(uint *)(lVal_28 + 0x152fd) ^ _UNK_1806c9494;
        auArr_4._0_4_ = *(uint *)*pArr16_37 ^ _DAT_1806c9490;
        auArr_4._8_4_ = *(uint *)(lVal_28 + 0x15301) ^ _UNK_1806c9498;
        auArr_4._12_4_ = *(uint *)(lVal_28 + 0x15305) ^ _UNK_1806c949c;
        *pArr16_37 = auArr_4;
        auArr_7._4_4_ = *(uint *)(lVal_28 + 0x1530d) ^ uVal_20;
        auArr_7._0_4_ = *(uint *)(lVal_28 + 0x15309) ^ uVal_19;
        auArr_7._8_4_ = *(uint *)(lVal_28 + 0x15311) ^ uVal_21;
        auArr_7._12_4_ = *(uint *)(lVal_28 + 0x15315) ^ uVal_22;
        *(uint8_t (*)[16])(lVal_28 + 0x15309) = auArr_7;
        auArr_11._4_4_ = *(uint *)(lVal_28 + 0x1531d) ^ uVal_20;
        auArr_11._0_4_ = *(uint *)(lVal_28 + 0x15319) ^ uVal_19;
        auArr_11._8_4_ = *(uint *)(lVal_28 + 0x15321) ^ uVal_21;
        auArr_11._12_4_ = *(uint *)(lVal_28 + 0x15325) ^ uVal_22;
        *(uint8_t (*)[16])(lVal_28 + 0x15319) = auArr_11;
        *(uint64_t *)(lVal_28 + 0x15329) =
             CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_28 + 0x15329) >> 0x20) ^ _UNK_1806c94a4,
                      (uint)*(uint64_t *)(lVal_28 + 0x15329) ^ _DAT_1806c94a0);
        *(byte *)(lVal_28 + 0x15331) = *(byte *)(lVal_28 + 0x15331) ^ 0xd9;
        *(byte *)(lVal_28 + 0x15332) = *(byte *)(lVal_28 + 0x15332) ^ 0x69;
        *(byte *)(lVal_28 + 0x15333) = *(byte *)(lVal_28 + 0x15333) ^ 0xbf;
        *(byte *)(lVal_28 + 0x15334) = *(byte *)(lVal_28 + 0x15334) ^ 0xcf;
        *(byte *)(lVal_28 + 0x15335) = *(byte *)(lVal_28 + 0x15335) ^ 0x45;
        *(byte *)(lVal_28 + 0x15336) = *(byte *)(lVal_28 + 0x15336) ^ 0x8f;
        *(byte *)(lVal_28 + 0x15337) = *(byte *)(lVal_28 + 0x15337) ^ 3;
        *(uint8_t *)(lVal_28 + 0x15338) = 0;
      }
      local_108._0_16_ = ZEXT816(0);
      local_118 = ZEXT816(0);
      sz_25 = strlen((char *)pArr16_37);
      if ((int64_t)sz_25 < 0) goto LAB_180446c74;
      uVal_46 = 0xf;
      pArr16_47 = &local_118;
      if (0xf < sz_25) {
        uVal_26 = sz_25 | 0xf;
        uVal_46 = 0x16;
        if (0x16 < uVal_26) {
          uVal_46 = uVal_26;
        }
        if (uVal_26 < 0xfff) {
          pArr16_47 = (uint8_t (*)[16])func_0x180672de0(uVal_46 + 1);
        }
        else {
          pArr16_29 = (uint8_t (*)[16])func_0x180672de0(uVal_46 + 0x28);
          pArr16_47 = (uint8_t (*)[16])
                     ((uint64_t)((int64_t)(pArr16_29 + 2) + 7U) & 0xffffffffffffffe0);
          *(uint8_t (**)[16])((int64_t)pArr16_47[-1] + 8) = pArr16_29;
        }
        local_118._0_8_ = pArr16_47;
      }
      local_108._8_8_ = uVal_46;
      local_108._0_8_ = sz_25;
      func_0x1806aa960(pArr16_47,pArr16_37,sz_25);
      *(uint8_t *)((int64_t)*pArr16_47 + sz_25) = 0;
      local_368 = (uint8_t (*)[16])&DAT_18076021e;
      pauStack_360 = (uint8_t (*)[16])0x3;
      local_238._0_4_ = 0xd;
      local_238._4_4_ = 0;
      iStack_230 = (int)&local_368;
      uStack_22c = (uint16_t)((uint64_t)&local_368 >> 0x20);
      uStack_22a = (uint8_t)((uint64_t)&local_368 >> 0x30);
      uStack_229._0_1_ = (uint8_t)((uint64_t)&local_368 >> 0x38);
      local_388 = &local_118;
      if (0xf < (uint64_t)local_108._8_8_) {
        local_388 = (uint8_t (*)[16])local_118._0_8_;
      }
      pauStack_380 = (uint8_t (*)[16])local_108._0_8_;
      func_0x18063ff10(&local_348,&local_388,&local_238);
      func_0x18045fe90(&local_348);
      uVal_46 = CONCAT44(uStack_32c,uStack_330);
      if (0xf < uVal_46) {
        lVal_35 = CONCAT44(local_348._4_4_,(uint)local_348);
        uVal_26 = uVal_46 + 1;
        lVal_28 = lVal_35;
        if (0xfff < uVal_26) {
          lVal_28 = *(int64_t *)(lVal_35 + -8);
          if (0x1f < (uint64_t)((lVal_35 + -8) - lVal_28)) goto LAB_180446c79;
          uVal_26 = uVal_46 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_28,uVal_26);
      }
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_330 = 0xf;
      uStack_32c = 0;
      local_348._0_4_ = (uint)local_348 & 0xffffff00;
      if (0xf < (uint64_t)local_108._8_8_) {
        uVal_46 = local_108._8_8_ + 1;
        lVal_28 = local_118._0_8_;
        if (0xfff < uVal_46) {
          lVal_28 = *(int64_t *)(local_118._0_8_ + -8);
          if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_28)) goto LAB_180446c79;
          uVal_46 = local_108._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_28,uVal_46);
      }
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x15350) == '\0') {
      lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_28 + 0x15350) = 1;
      *(uint64_t *)(lVal_28 + 0x15340) = 0x9d67c13a8eaf76ff;
      *(uint32_t *)(lVal_28 + 0x15348) = 0xbdf02d9f;
      *(uint16_t *)(lVal_28 + 0x1534c) = 0x15b;
      func_0x180673140(&LAB_180449010);
    }
    lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_28 + 0x15340);
    if (*(char *)(lVal_28 + 0x1534d) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xaf3baf5be5c303a9;
      *(uint *)(lVal_28 + 0x15348) = *(uint *)(lVal_28 + 0x15348) ^ 0xe5c303a9;
      *(byte *)(lVal_28 + 0x1534c) = *(byte *)(lVal_28 + 0x1534c) ^ 0x5b;
      *(uint8_t *)(lVal_28 + 0x1534d) = 0;
    }
    uStack_225 = 0;
    uStack_224 = 0;
    uStack_222 = 0;
    uStack_221 = SUB164(ZEXT816(0),7);
    uStack_21d = 0;
    uStack_21c = 0;
    uStack_21a = 0;
    uStack_219 = 0;
    local_238._0_4_ = 0;
    local_238._4_4_ = 0;
    iStack_230 = 0;
    uStack_22c = 0;
    uStack_22a = 0;
    uStack_229 = 0;
    sz_25 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_25) {
      uVal_46 = 0xf;
      if (0xf < sz_25) {
        uVal_26 = sz_25 | 0xf;
        uVal_46 = 0x16;
        if (0x16 < uVal_26) {
          uVal_46 = uVal_26;
        }
        if (uVal_26 < 0xfff) {
          pU64_43 = (uint *)func_0x180672de0(uVal_46 + 1);
        }
        else {
          lVal_28 = func_0x180672de0(uVal_46 + 0x28);
          pU64_43 = (uint *)(lVal_28 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_43 + 0xfffffffffffffffe) = lVal_28;
        }
        local_238._0_4_ = (uint)pU64_43;
        local_238._4_4_ = (uint32_t)((uint64_t)pU64_43 >> 0x20);
      }
      uStack_229._1_3_ = (undefined3)sz_25;
      uStack_225 = (uint8_t)(sz_25 >> 0x18);
      uStack_224 = (uint16_t)(sz_25 >> 0x20);
      uStack_222 = (uint8_t)(sz_25 >> 0x30);
      uStack_221._0_1_ = (uint8_t)(sz_25 >> 0x38);
      uStack_221._1_3_ = (undefined3)uVal_46;
      uStack_21d = (uint8_t)(uVal_46 >> 0x18);
      uStack_21c = (uint16_t)(uVal_46 >> 0x20);
      uStack_21a = (uint8_t)(uVal_46 >> 0x30);
      uStack_219 = (uint8_t)(uVal_46 >> 0x38);
      func_0x1806aa960(pU64_43,pU64_1,sz_25);
      *(uint8_t *)((int64_t)pU64_43 + sz_25) = 0;
      pU64_43 = (uint *)func_0x1800becb0();
      uVal_46 = *(uint64_t *)(pU64_43 + 4);
      if (0xf < *(uint64_t *)(pU64_43 + 6)) {
        pU64_43 = *(uint **)pU64_43;
      }
      lVal_28 = CONCAT17((uint8_t)uStack_221,
                        CONCAT16(uStack_222,
                                 CONCAT24(uStack_224,CONCAT13(uStack_225,uStack_229._1_3_))));
      uVal_26 = CONCAT17(uStack_219,
                        CONCAT16(uStack_21a,
                                 CONCAT24(uStack_21c,CONCAT13(uStack_21d,uStack_221._1_3_))));
      if (uVal_26 - lVal_28 < uVal_46) {
        ptr2_Arr16_30 = (uint8_t (**)[16])func_0x1800871a0(&local_238,uVal_46,lVal_28,0,pU64_43,uVal_46);
        uVal_51 = (uint32_t)((uint64_t)pU64_43 >> 0x20);
      }
      else {
        lVal_35 = uVal_46 + lVal_28;
        uStack_229._1_3_ = (undefined3)lVal_35;
        uStack_225 = (uint8_t)((uint64_t)lVal_35 >> 0x18);
        uStack_224 = (uint16_t)((uint64_t)lVal_35 >> 0x20);
        uStack_222 = (uint8_t)((uint64_t)lVal_35 >> 0x30);
        uStack_221._0_1_ = (uint8_t)((uint64_t)lVal_35 >> 0x38);
        uVal_34 = uVal_46;
        if (uVal_26 < 0x10) {
          pU64_42 = (uint *)&local_238;
          if (pU64_42 < (uint *)(uVal_46 + (int64_t)pU64_43)) goto LAB_180443fd7;
        }
        else {
          pU64_42 = (uint *)CONCAT44(local_238._4_4_,(uint)local_238);
          if (pU64_42 < (uint *)(uVal_46 + (int64_t)pU64_43)) {
LAB_180443fd7:
            if ((pU64_43 <= (uint *)((int64_t)pU64_42 + lVal_28)) &&
               (uVal_34 = (int64_t)pU64_42 - (int64_t)pU64_43,
               pU64_42 < pU64_43 || (int64_t)pU64_42 - (int64_t)pU64_43 == 0)) {
              uVal_34 = 0;
            }
          }
        }
        func_0x1806aa960(uVal_46 + (int64_t)pU64_42,pU64_42,lVal_28 + 1);
        func_0x1806aa960(pU64_42,pU64_43,uVal_34);
        func_0x1806aa960(uVal_34 + (int64_t)pU64_42,(int64_t)pU64_43 + uVal_46 + uVal_34,uVal_46 - uVal_34
                     );
        ptr2_Arr16_30 = (uint8_t (**)[16])&local_238;
      }
      local_368 = *ptr2_Arr16_30;
      pauStack_360 = ptr2_Arr16_30[1];
      local_358 = *(uint32_t *)(ptr2_Arr16_30 + 2);
      iStack_354 = *(int *)((int64_t)ptr2_Arr16_30 + 0x14);
      uStack_350 = *(uint32_t *)(ptr2_Arr16_30 + 3);
      uStack_34c = *(uint32_t *)((int64_t)ptr2_Arr16_30 + 0x1c);
      ptr2_Arr16_30[2] = (uint8_t (*)[16])0x0;
      ptr2_Arr16_30[3] = (uint8_t (*)[16])&DAT_0000000f;
      *(uint8_t *)ptr2_Arr16_30 = 0;
      uVal_46 = CONCAT17(uStack_219,
                        CONCAT16(uStack_21a,
                                 CONCAT24(uStack_21c,CONCAT13(uStack_21d,uStack_221._1_3_))));
      if (0xf < uVal_46) {
        lVal_35 = CONCAT44(local_238._4_4_,(uint)local_238);
        uVal_26 = uVal_46 + 1;
        lVal_28 = lVal_35;
        if (0xfff < uVal_26) {
          lVal_28 = *(int64_t *)(lVal_35 + -8);
          if (0x1f < (uint64_t)((lVal_35 + -8) - lVal_28)) goto LAB_180446c79;
          uVal_26 = uVal_46 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_28,uVal_26);
      }
      ch_24 = func_0x1800be560((uint8_t (*)[16])&local_368,1);
      if (ch_24 == '\0') {
        uStack_225 = (uint8_t)((uint)_DAT_1806cdece >> 0x18);
        uStack_224 = (uint16_t)_UNK_1806cded2;
        uStack_222 = (uint8_t)((uint)_UNK_1806cded2 >> 0x10);
        uStack_221._1_3_ = (undefined3)_UNK_1806cded6;
        uStack_221 = CONCAT31(uStack_221._1_3_,(char)((uint)_UNK_1806cded2 >> 0x18));
        uStack_21d = (uint8_t)((uint)_UNK_1806cded6 >> 0x18);
        uStack_21c = (uint16_t)_UNK_1806cdeda;
        uStack_21a = (uint8_t)((uint)_UNK_1806cdeda >> 0x10);
        uStack_219 = (uint8_t)((uint)_UNK_1806cdeda >> 0x18);
        local_238._0_4_ = _DAT_1806cdebe;
        local_238._4_4_ = _UNK_1806cdec2;
        iStack_230 = _UNK_1806cdec6;
        uStack_22c = (uint16_t)_UNK_1806cdeca;
        uStack_22a = (uint8_t)((uint)_UNK_1806cdeca >> 0x10);
        uStack_229._0_1_ = (uint8_t)((uint)_UNK_1806cdeca >> 0x18);
        uStack_229 = CONCAT31((int3)_DAT_1806cdece,(uint8_t)uStack_229);
        uStack_218 = CONCAT31(uStack_218._1_3_,0x37);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x15374) == '\0') {
          lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_28 + 0x15374) = 1;
          func_0x180086ce0(lVal_28 + 0x15351,&local_238);
          func_0x180673140(&LAB_180449040);
        }
        fnPtr_32 = (char *)(*(int64_t *)
                            ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                          0x15351);
        func_0x180449070(fnPtr_32);
        uStack_338 = 0;
        uStack_334 = 0;
        uStack_330 = 0;
        uStack_32c = 0;
        local_348._0_4_ = 0;
        local_348._4_4_ = 0;
        uStack_340 = 0;
        uStack_33c = 0;
        sz_25 = strlen(fnPtr_32);
        if ((int64_t)sz_25 < 0) goto LAB_180446c81;
        pU64_43 = (uint *)&local_348;
        uVal_46 = 0xf;
        pU64_42 = pU64_43;
        if (0xf < sz_25) {
          uVal_26 = sz_25 | 0xf;
          uVal_46 = 0x16;
          if (0x16 < uVal_26) {
            uVal_46 = uVal_26;
          }
          if (uVal_26 < 0xfff) {
            pU64_42 = (uint *)func_0x180672de0(uVal_46 + 1);
          }
          else {
            lVal_28 = func_0x180672de0(uVal_46 + 0x28);
            pU64_42 = (uint *)(lVal_28 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_42 + 0xfffffffffffffffe) = lVal_28;
          }
          local_348._0_4_ = (uint)pU64_42;
          local_348._4_4_ = (uint32_t)((uint64_t)pU64_42 >> 0x20);
        }
        uStack_338 = (uint32_t)sz_25;
        uStack_334 = (uint32_t)(sz_25 >> 0x20);
        uStack_330 = (uint32_t)uVal_46;
        uStack_32c = (uint32_t)(uVal_46 >> 0x20);
        func_0x1806aa960(pU64_42,fnPtr_32,sz_25);
        *(uint8_t *)((int64_t)pU64_42 + sz_25) = 0;
        local_388 = (uint8_t (*)[16])&DAT_18076021e;
        pauStack_380 = (uint8_t (*)[16])0x3;
        local_118._8_8_ = &local_388;
        local_118._0_8_ = 0xd;
        uStack_b0._4_4_ = uStack_334;
        uStack_b0._0_4_ = uStack_338;
        if (0xf < CONCAT44(uStack_32c,uStack_330)) {
          pU64_43 = (uint *)CONCAT44(local_348._4_4_,(uint)local_348);
        }
        local_b8 = (uint8_t  [8])pU64_43;
        func_0x18063ff10(&local_238,local_b8,local_118);
        func_0x18045fe90(&local_238);
        uVal_46 = CONCAT17(uStack_219,
                          CONCAT16(uStack_21a,
                                   CONCAT24(uStack_21c,CONCAT13(uStack_21d,uStack_221._1_3_))));
        if (0xf < uVal_46) {
          lVal_35 = CONCAT44(local_238._4_4_,(uint)local_238);
          uVal_26 = uVal_46 + 1;
          lVal_28 = lVal_35;
          if (0xfff < uVal_26) {
            lVal_28 = *(int64_t *)(lVal_35 + -8);
            if (0x1f < (uint64_t)((lVal_35 + -8) - lVal_28)) goto LAB_180446c79;
            uVal_26 = uVal_46 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_28,uVal_26);
        }
        uStack_229 = uStack_229 & 0xff;
        uStack_225 = 0;
        uStack_224 = 0;
        uStack_222 = 0;
        uStack_221 = 0xf00;
        uStack_21d = 0;
        uStack_21c = 0;
        uStack_21a = 0;
        uStack_219 = 0;
        local_238._0_4_ = (uint)local_238 & 0xffffff00;
        uVal_46 = CONCAT44(uStack_32c,uStack_330);
        if (0xf < uVal_46) {
          pArr16_37 = (uint8_t (*)[16])CONCAT44(local_348._4_4_,(uint)local_348);
joined_r0x0001804443a7:
          uVal_26 = uVal_46 + 1;
          pArr16_47 = pArr16_37;
          if (0xfff < uVal_26) {
            pArr16_47 = *(uint8_t (**)[16])((int64_t)(pArr16_37 + -1) + 8);
            if ((uint8_t *)0x1f < (uint8_t *)((int64_t)pArr16_37 + (-8 - (int64_t)pArr16_47)))
            goto LAB_180446c79;
            uVal_26 = uVal_46 + 0x28;
          }
          thunk_FUN_180695dd0(pArr16_47,uVal_26);
        }
LAB_180444cd0:
        uVal_46 = CONCAT44(uStack_34c,uStack_350);
        if (0xf < uVal_46) {
          uVal_26 = uVal_46 + 1;
          pArr16_37 = local_368;
          if (0xfff < uVal_26) {
            pArr16_37 = *(uint8_t (**)[16])(local_368[-1] + 8);
            if (0x1f < (uint64_t)((int64_t)local_368 + (-8 - (int64_t)pArr16_37)))
            goto LAB_180446c79;
            uVal_26 = uVal_46 + 0x28;
          }
          thunk_FUN_180695dd0(pArr16_37,uVal_26);
        }
        return;
      }
      local_238._0_4_ = _DAT_1806cdedf;
      local_238._4_4_ = _UNK_1806cdee3;
      iStack_230 = _UNK_1806cdee7;
      uStack_22c = (uint16_t)_UNK_1806cdeeb;
      uStack_22a = 0x9a;
      uStack_229 = 0xdee12b7b;
      uStack_225 = 0x32;
      uStack_224 = 0xb1ab;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x1538c) == '\0') {
        lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_28 + 0x1538c) = 1;
        func_0x18007cab0(lVal_28 + 0x15375,&local_238);
        func_0x180673140(&LAB_1804490a0);
      }
      fnPtr_32 = (char *)(*(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                        0x15375);
      func_0x1804490d0(fnPtr_32);
      uStack_225 = 0;
      uStack_224 = 0;
      uStack_222 = 0;
      uStack_221 = SUB164(ZEXT816(0),7);
      uStack_21d = 0;
      uStack_21c = 0;
      uStack_21a = 0;
      uStack_219 = 0;
      local_238._0_4_ = 0;
      local_238._4_4_ = 0;
      iStack_230 = 0;
      uStack_22c = 0;
      uStack_22a = 0;
      uStack_229 = 0;
      sz_25 = strlen(fnPtr_32);
      if ((int64_t)sz_25 < 0) {
        func_0x18007ba70();
LAB_180446c81:
        func_0x18007ba70();
LAB_180446c87:
        func_0x18007ba70();
LAB_180446c8d:
        func_0x18007ba70();
LAB_180446c93:
        func_0x18007ba70();
LAB_180446c99:
        func_0x18007ba70();
LAB_180446c9f:
        func_0x18007ba70();
LAB_180446ca5:
        local_81 = 1;
        func_0x18007ba70();
LAB_180446cb2:
        local_86 = 1;
        func_0x18007ba70();
LAB_180446cbf:
        func_0x18007ba70();
LAB_180446cc5:
        func_0x18007ba70();
LAB_180446ccb:
        local_82 = 1;
        func_0x18007ba70();
LAB_180446cd8:
        func_0x18007ba70();
      }
      else {
        if (sz_25 < 0x10) {
          pU64_43 = (uint *)&local_238;
          uVal_46 = 0xf;
        }
        else {
          uVal_26 = sz_25 | 0xf;
          uVal_46 = 0x16;
          if (0x16 < uVal_26) {
            uVal_46 = uVal_26;
          }
          if (uVal_26 < 0xfff) {
            pU64_43 = (uint *)func_0x180672de0(uVal_46 + 1);
          }
          else {
            lVal_28 = func_0x180672de0(uVal_46 + 0x28);
            pU64_43 = (uint *)(lVal_28 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_43 + 0xfffffffffffffffe) = lVal_28;
          }
          local_238._0_4_ = (uint)pU64_43;
          local_238._4_4_ = (uint32_t)((uint64_t)pU64_43 >> 0x20);
        }
        uStack_229._1_3_ = (undefined3)sz_25;
        uStack_225 = (uint8_t)(sz_25 >> 0x18);
        uStack_224 = (uint16_t)(sz_25 >> 0x20);
        uStack_222 = (uint8_t)(sz_25 >> 0x30);
        uStack_221._0_1_ = (uint8_t)(sz_25 >> 0x38);
        uStack_221._1_3_ = (undefined3)uVal_46;
        uStack_21d = (uint8_t)(uVal_46 >> 0x18);
        uStack_21c = (uint16_t)(uVal_46 >> 0x20);
        uStack_21a = (uint8_t)(uVal_46 >> 0x30);
        uStack_219 = (uint8_t)(uVal_46 >> 0x38);
        func_0x1806aa960(pU64_43,fnPtr_32,sz_25);
        *(uint8_t *)((int64_t)pU64_43 + sz_25) = 0;
        uVal_46 = CONCAT44(iStack_354,local_358);
        pArr16_37 = (uint8_t (*)[16])&local_368;
        if (0xf < CONCAT44(uStack_34c,uStack_350)) {
          pArr16_37 = local_368;
        }
        lVal_28 = CONCAT17((uint8_t)uStack_221,
                          CONCAT16(uStack_222,
                                   CONCAT24(uStack_224,CONCAT13(uStack_225,uStack_229._1_3_))));
        uVal_26 = CONCAT17(uStack_219,
                          CONCAT16(uStack_21a,
                                   CONCAT24(uStack_21c,CONCAT13(uStack_21d,uStack_221._1_3_))));
        if (uVal_26 - lVal_28 < uVal_46) {
          ptr2_Arr16_30 = (uint8_t (**)[16])func_0x1800871a0(&local_238,uVal_46,lVal_28,0,pArr16_37,uVal_46)
          ;
          uVal_51 = (uint32_t)((uint64_t)pArr16_37 >> 0x20);
        }
        else {
          lVal_35 = lVal_28 + uVal_46;
          uStack_229._1_3_ = (undefined3)lVal_35;
          uStack_225 = (uint8_t)((uint64_t)lVal_35 >> 0x18);
          uStack_224 = (uint16_t)((uint64_t)lVal_35 >> 0x20);
          uStack_222 = (uint8_t)((uint64_t)lVal_35 >> 0x30);
          uStack_221._0_1_ = (uint8_t)((uint64_t)lVal_35 >> 0x38);
          uVal_34 = uVal_46;
          if (uVal_26 < 0x10) {
            pArr16_47 = (uint8_t (*)[16])&local_238;
            if (pArr16_47 < (uint8_t (*)[16])(*pArr16_37 + uVal_46)) goto LAB_180444473;
          }
          else {
            pArr16_47 = (uint8_t (*)[16])CONCAT44(local_238._4_4_,(uint)local_238);
            if (pArr16_47 < (uint8_t (*)[16])(*pArr16_37 + uVal_46)) {
LAB_180444473:
              if ((pArr16_37 <= (uint8_t (*)[16])(*pArr16_47 + lVal_28)) &&
                 (uVal_34 = (int64_t)pArr16_47 - (int64_t)pArr16_37,
                 pArr16_47 < pArr16_37 || (int64_t)pArr16_47 - (int64_t)pArr16_37 == 0)) {
                uVal_34 = 0;
              }
            }
          }
          func_0x1806aa960(*pArr16_47 + uVal_46,pArr16_47,lVal_28 + 1);
          func_0x1806aa960(pArr16_47,pArr16_37,uVal_34);
          func_0x1806aa960(*pArr16_47 + uVal_34,*pArr16_37 + uVal_34 + uVal_46,uVal_46 - uVal_34);
          ptr2_Arr16_30 = (uint8_t (**)[16])&local_238;
        }
        local_388 = *ptr2_Arr16_30;
        pauStack_380 = ptr2_Arr16_30[1];
        local_378 = *(uint32_t *)(ptr2_Arr16_30 + 2);
        uStack_374 = *(uint32_t *)((int64_t)ptr2_Arr16_30 + 0x14);
        uStack_370 = *(uint32_t *)(ptr2_Arr16_30 + 3);
        uStack_36c = *(uint32_t *)((int64_t)ptr2_Arr16_30 + 0x1c);
        ptr2_Arr16_30[2] = (uint8_t (*)[16])0x0;
        ptr2_Arr16_30[3] = (uint8_t (*)[16])0xf;
        *(uint8_t *)ptr2_Arr16_30 = 0;
        uVal_46 = CONCAT17(uStack_219,
                          CONCAT16(uStack_21a,
                                   CONCAT24(uStack_21c,CONCAT13(uStack_21d,uStack_221._1_3_))));
        if (0xf < uVal_46) {
          lVal_35 = CONCAT44(local_238._4_4_,(uint)local_238);
          uVal_26 = uVal_46 + 1;
          lVal_28 = lVal_35;
          if (0xfff < uVal_26) {
            lVal_28 = *(int64_t *)(lVal_35 + -8);
            if (0x1f < (uint64_t)((lVal_35 + -8) - lVal_28)) goto LAB_180446c79;
            uVal_26 = uVal_46 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_28,uVal_26);
        }
        ch_24 = func_0x1800be560((uint8_t (*)[16])&local_388,0);
        if (ch_24 == '\0') {
          uStack_225 = (uint8_t)_UNK_1806cdf08;
          uStack_224 = (uint16_t)((uint)_UNK_1806cdf08 >> 8);
          uStack_222 = (uint8_t)((uint)_UNK_1806cdf08 >> 0x18);
          uStack_221 = _UNK_1806cdf0c;
          uStack_21d = (uint8_t)_UNK_1806cdf10;
          uStack_21c = (uint16_t)((uint)_UNK_1806cdf10 >> 8);
          uStack_21a = (uint8_t)((uint)_UNK_1806cdf10 >> 0x18);
          local_238._0_4_ = _DAT_1806cdef5;
          local_238._4_4_ = _UNK_1806cdef9;
          iStack_230 = _UNK_1806cdefd;
          uStack_22c = (uint16_t)_UNK_1806cdf01;
          uStack_22a = (uint8_t)((uint)_UNK_1806cdf01 >> 0x10);
          uStack_229._0_1_ = (uint8_t)((uint)_UNK_1806cdf01 >> 0x18);
          uStack_229 = CONCAT31(_UNK_1806cdf05,(uint8_t)uStack_229);
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x153b0
                       ) == '\0') {
LAB_180446b1f:
            lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_28 + 0x153b0) = 1;
            func_0x18007ce20(lVal_28 + 0x1538d,&local_238);
            func_0x180673140(&LAB_180449100);
          }
          fnPtr_32 = (char *)(*(int64_t *)
                              ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                            0x1538d);
          func_0x180449130(fnPtr_32);
          uStack_338 = 0;
          uStack_334 = 0;
          uStack_330 = 0;
          uStack_32c = 0;
          local_348._0_4_ = 0;
          local_348._4_4_ = 0;
          uStack_340 = 0;
          uStack_33c = 0;
          sz_25 = strlen(fnPtr_32);
          if (-1 < (int64_t)sz_25) {
            ptr7_Long_41 = (int64_t *******)&local_348;
            uVal_46 = 0xf;
            ptr7_Long_48 = ptr7_Long_41;
            if (0xf < sz_25) {
              uVal_26 = sz_25 | 0xf;
              uVal_46 = 0x16;
              if (0x16 < uVal_26) {
                uVal_46 = uVal_26;
              }
              if (uVal_26 < 0xfff) {
                ptr7_Long_48 = (int64_t *******)func_0x180672de0(uVal_46 + 1);
              }
              else {
                ptr6_Long_31 = (int64_t ******)func_0x180672de0(uVal_46 + 0x28);
                ptr7_Long_48 =
                     (int64_t *******)((int64_t)ptr6_Long_31 + 0x27U & 0xffffffffffffffe0);
                ptr7_Long_48[-1] = ptr6_Long_31;
              }
              local_348._0_4_ = (uint)ptr7_Long_48;
              local_348._4_4_ = (uint32_t)((uint64_t)ptr7_Long_48 >> 0x20);
            }
            uStack_338 = (uint32_t)sz_25;
            uStack_334 = (uint32_t)(sz_25 >> 0x20);
            uStack_330 = (uint32_t)uVal_46;
            uStack_32c = (uint32_t)(uVal_46 >> 0x20);
            func_0x1806aa960(ptr7_Long_48,fnPtr_32,sz_25);
            *(uint8_t *)((int64_t)ptr7_Long_48 + sz_25) = 0;
            uStack_b0 = 3;
            local_b8 = (uint8_t  [8])&DAT_18076021e;
            local_118._8_8_ = local_b8;
            local_118._0_8_ = 0xd;
            local_250 = CONCAT44(uStack_334,uStack_338);
            if (0xf < CONCAT44(uStack_32c,uStack_330)) {
              ptr7_Long_41 = (int64_t *******)CONCAT44(local_348._4_4_,(uint)local_348);
            }
            local_258 = ptr7_Long_41;
            func_0x18063ff10(&local_238,&local_258,local_118);
            func_0x18045fe90(&local_238);
            uVal_46 = CONCAT17(uStack_219,
                              CONCAT16(uStack_21a,
                                       CONCAT24(uStack_21c,CONCAT13(uStack_21d,uStack_221._1_3_))));
            if (0xf < uVal_46) {
              lVal_35 = CONCAT44(local_238._4_4_,(uint)local_238);
              uVal_26 = uVal_46 + 1;
              lVal_28 = lVal_35;
              if (0xfff < uVal_26) {
                lVal_28 = *(int64_t *)(lVal_35 + -8);
                if (0x1f < (uint64_t)((lVal_35 + -8) - lVal_28)) goto LAB_180446c79;
                uVal_26 = uVal_46 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_28,uVal_26);
            }
            uStack_229 = uStack_229 & 0xff;
            uStack_225 = 0;
            uStack_224 = 0;
            uStack_222 = 0;
            uStack_221 = 0xf00;
            uStack_21d = 0;
            uStack_21c = 0;
            uStack_21a = 0;
            uStack_219 = 0;
            local_238._0_4_ = (uint)local_238 & 0xffffff00;
            uVal_46 = CONCAT44(uStack_32c,uStack_330);
            if (0xf < uVal_46) {
              lVal_35 = CONCAT44(local_348._4_4_,(uint)local_348);
              uVal_26 = uVal_46 + 1;
              lVal_28 = lVal_35;
              if (0xfff < uVal_26) {
                lVal_28 = *(int64_t *)(lVal_35 + -8);
                if (0x1f < (uint64_t)((lVal_35 + -8) - lVal_28)) goto LAB_180446c79;
                uVal_26 = uVal_46 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_28,uVal_26);
            }
LAB_180444c8b:
            uVal_46 = CONCAT44(uStack_36c,uStack_370);
            pArr16_37 = local_388;
            if (0xf < uVal_46) goto joined_r0x0001804443a7;
            goto LAB_180444cd0;
          }
          goto LAB_180446c8d;
        }
        local_128[0] = '\0';
        local_120 = (int64_t *)0x0;
        pArr16_37 = (uint8_t (*)[16])&local_388;
        if (0xf < CONCAT44(uStack_36c,uStack_370)) {
          pArr16_37 = local_388;
        }
        uVal_46 = CONCAT44(uVal_51,1);
        pU64_43 = (uint *)&local_238;
        func_0x1800a64e0(pU64_43,pArr16_37,0x20,0x40,uVal_46);
        local_e0 = 0;
        local_d8._0_8_ = pU64_43;
        local_d8._8_8_ =
             *(uint64_t *)
              ((int64_t)auStack_1f0 +
              (int64_t)*(int *)(CONCAT44(local_238._4_4_,(uint)local_238) + 4));
        func_0x1800a6a30(&local_348,local_d8,local_118,1,uVal_46 & 0xffffffffffffff00);
        ptr7_Long_41 = (int64_t *******)&local_348;
        func_0x1800a6c00(ptr7_Long_41,0,local_128);
        func_0x1800a7830(local_300);
        if (local_310 != (int64_t *******)0x0) {
          (*(func_ptr_t )(*local_310)[4])(local_310,local_310 != ptr7_Long_41);
        }
        *(uint8_t ***)
         ((int64_t)&local_238 + (int64_t)*(int *)(CONCAT44(local_238._4_4_,(uint)local_238) + 4))
             = &PTR_LAB_1806b0178;
        iVal_2 = *(int *)(CONCAT44(local_238._4_4_,(uint)local_238) + 4);
        *(int *)((int64_t)&local_240 + (int64_t)iVal_2 + 4) = iVal_2 + -0xb0;
        func_0x18008b1c0((int64_t)&uStack_229 + 1);
        local_188[0] = &PTR_LAB_1806b0288;
        func_0x180673810(local_188);
        if ((local_128[0] != '\x01') || (local_120[1] == 0)) {
LAB_180444a51:
          uStack_225 = (uint8_t)_UNK_1806cdf4d;
          uStack_224 = (uint16_t)((uint)_UNK_1806cdf4d >> 8);
          uStack_222 = (uint8_t)((uint)_UNK_1806cdf4d >> 0x18);
          uStack_221 = _UNK_1806cdf51;
          uStack_21d = (uint8_t)_UNK_1806cdf55;
          uStack_21c = (uint16_t)((uint)_UNK_1806cdf55 >> 8);
          uStack_21a = (uint8_t)((uint)_UNK_1806cdf55 >> 0x18);
          local_238._0_4_ = _DAT_1806cdf3a;
          local_238._4_4_ = _UNK_1806cdf3e;
          iStack_230 = _UNK_1806cdf42;
          uStack_22c = (uint16_t)_UNK_1806cdf46;
          uStack_22a = (uint8_t)((uint)_UNK_1806cdf46 >> 0x10);
          uStack_229._0_1_ = (uint8_t)((uint)_UNK_1806cdf46 >> 0x18);
          uStack_229 = CONCAT31(_UNK_1806cdf4a,(uint8_t)uStack_229);
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15410
                       ) == '\0') {
            lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_28 + 0x15410) = 1;
            func_0x18007ce20(lVal_28 + 0x153ed,&local_238);
            func_0x180673140(&LAB_1804491f0);
          }
          fnPtr_32 = (char *)(*(int64_t *)
                              ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                            0x153ed);
          func_0x180449220(fnPtr_32);
          uStack_338 = 0;
          uStack_334 = 0;
          uStack_330 = 0;
          uStack_32c = 0;
          local_348._0_4_ = 0;
          local_348._4_4_ = 0;
          uStack_340 = 0;
          uStack_33c = 0;
          sz_25 = strlen(fnPtr_32);
          if (-1 < (int64_t)sz_25) {
            uVal_46 = 0xf;
            ptr7_Long_48 = ptr7_Long_41;
            if (0xf < sz_25) {
              uVal_26 = sz_25 | 0xf;
              uVal_46 = 0x16;
              if (0x16 < uVal_26) {
                uVal_46 = uVal_26;
              }
              if (uVal_26 < 0xfff) {
                ptr7_Long_48 = (int64_t *******)func_0x180672de0(uVal_46 + 1);
              }
              else {
                ptr6_Long_31 = (int64_t ******)func_0x180672de0(uVal_46 + 0x28);
                ptr7_Long_48 =
                     (int64_t *******)((int64_t)ptr6_Long_31 + 0x27U & 0xffffffffffffffe0);
                ptr7_Long_48[-1] = ptr6_Long_31;
              }
              local_348._0_4_ = (uint)ptr7_Long_48;
              local_348._4_4_ = (uint32_t)((uint64_t)ptr7_Long_48 >> 0x20);
            }
            uStack_338 = (uint32_t)sz_25;
            uStack_334 = (uint32_t)(sz_25 >> 0x20);
            uStack_330 = (uint32_t)uVal_46;
            uStack_32c = (uint32_t)(uVal_46 >> 0x20);
            func_0x1806aa960(ptr7_Long_48,fnPtr_32,sz_25);
            *(uint8_t *)((int64_t)ptr7_Long_48 + sz_25) = 0;
            uStack_b0 = 3;
            local_b8 = (uint8_t  [8])&DAT_18076021e;
            local_118._8_8_ = local_b8;
            local_118._0_8_ = 0xd;
            local_250 = CONCAT44(uStack_334,uStack_338);
            if (0xf < CONCAT44(uStack_32c,uStack_330)) {
              ptr7_Long_41 = (int64_t *******)CONCAT44(local_348._4_4_,(uint)local_348);
            }
            local_258 = ptr7_Long_41;
            func_0x18063ff10(&local_238,&local_258,local_118);
            func_0x18045fe90(&local_238);
LAB_180444bd0:
            uVal_46 = CONCAT17(uStack_219,
                              CONCAT16(uStack_21a,
                                       CONCAT24(uStack_21c,CONCAT13(uStack_21d,uStack_221._1_3_))));
            if (0xf < uVal_46) {
              lVal_35 = CONCAT44(local_238._4_4_,(uint)local_238);
              uVal_26 = uVal_46 + 1;
              lVal_28 = lVal_35;
              if (0xfff < uVal_26) {
                lVal_28 = *(int64_t *)(lVal_35 + -8);
                if (0x1f < (uint64_t)((lVal_35 + -8) - lVal_28)) goto LAB_180446c79;
                uVal_26 = uVal_46 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_28,uVal_26);
            }
            uStack_229 = uStack_229 & 0xff;
            uStack_225 = 0;
            uStack_224 = 0;
            uStack_222 = 0;
            uStack_221 = 0xf00;
            uStack_21d = 0;
            uStack_21c = 0;
            uStack_21a = 0;
            uStack_219 = 0;
            local_238._0_4_ = (uint)local_238 & 0xffffff00;
            uVal_46 = CONCAT44(uStack_32c,uStack_330);
            if (0xf < uVal_46) {
              lVal_35 = CONCAT44(local_348._4_4_,(uint)local_348);
              uVal_26 = uVal_46 + 1;
              lVal_28 = lVal_35;
              if (0xfff < uVal_26) {
                lVal_28 = *(int64_t *)(lVal_35 + -8);
                if (0x1f < (uint64_t)((lVal_35 + -8) - lVal_28)) goto LAB_180446c79;
                uVal_26 = uVal_46 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_28,uVal_26);
            }
LAB_180444c77:
            func_0x180084c70(&local_120,local_128[0]);
            goto LAB_180444c8b;
          }
          goto LAB_180446c93;
        }
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x153ec) == '\0') {
          lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_28 + 0x153ec) = 1;
          *(uint8_t *)(lVal_28 + 0x153ea) = 1;
          *(uint64_t *)(lVal_28 + 0x153e0) = 0xcb620a0f1e45003c;
          *(uint16_t *)(lVal_28 + 0x153e8) = 0x6122;
          func_0x180673140(&LAB_1804491c0);
        }
        lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_1 = (uint64_t *)(lVal_28 + 0x153e0);
        if (*(char *)(lVal_28 + 0x153ea) == '\x01') {
          *pU64_1 = *pU64_1 ^ 0xa703637d7b316151;
          *(byte *)(lVal_28 + 0x153e8) = *(byte *)(lVal_28 + 0x153e8) ^ 0x51;
          *(byte *)(lVal_28 + 0x153e9) = *(byte *)(lVal_28 + 0x153e9) ^ 0x61;
          *(uint8_t *)(lVal_28 + 0x153ea) = 0;
        }
        uStack_225 = 0;
        uStack_224 = 0;
        uStack_222 = 0;
        uStack_221 = SUB164(ZEXT816(0),7);
        uStack_21d = 0;
        uStack_21c = 0;
        uStack_21a = 0;
        uStack_219 = 0;
        local_238._0_4_ = 0;
        local_238._4_4_ = 0;
        iStack_230 = 0;
        uStack_22c = 0;
        uStack_22a = 0;
        uStack_229 = 0;
        sz_25 = strlen((char *)pU64_1);
        if ((int64_t)sz_25 < 0) goto LAB_180446cc5;
        uVal_46 = 0xf;
        if (0xf < sz_25) {
          uVal_26 = sz_25 | 0xf;
          uVal_46 = 0x16;
          if (0x16 < uVal_26) {
            uVal_46 = uVal_26;
          }
          if (uVal_26 < 0xfff) {
            pU64_43 = (uint *)func_0x180672de0(uVal_46 + 1);
          }
          else {
            lVal_28 = func_0x180672de0(uVal_46 + 0x28);
            pU64_43 = (uint *)(lVal_28 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_43 + 0xfffffffffffffffe) = lVal_28;
          }
          local_238._0_4_ = (uint)pU64_43;
          local_238._4_4_ = (uint32_t)((uint64_t)pU64_43 >> 0x20);
        }
        uStack_229._1_3_ = (undefined3)sz_25;
        uStack_225 = (uint8_t)(sz_25 >> 0x18);
        uStack_224 = (uint16_t)(sz_25 >> 0x20);
        uStack_222 = (uint8_t)(sz_25 >> 0x30);
        uStack_221._0_1_ = (uint8_t)(sz_25 >> 0x38);
        uStack_221._1_3_ = (undefined3)uVal_46;
        uStack_21d = (uint8_t)(uVal_46 >> 0x18);
        uStack_21c = (uint16_t)(uVal_46 >> 0x20);
        uStack_21a = (uint8_t)(uVal_46 >> 0x30);
        uStack_219 = (uint8_t)(uVal_46 >> 0x38);
        func_0x1806aa960(pU64_43,pU64_1,sz_25);
        *(uint8_t *)((int64_t)pU64_43 + sz_25) = 0;
        bFlag_49 = true;
        if (local_128[0] == '\x01') {
          lVal_28 = func_0x1800a5e70(local_120,&local_238);
          bFlag_49 = lVal_28 == *local_120;
        }
        uVal_46 = CONCAT17(uStack_219,
                          CONCAT16(uStack_21a,
                                   CONCAT24(uStack_21c,CONCAT13(uStack_21d,uStack_221._1_3_))));
        if (0xf < uVal_46) {
          lVal_35 = CONCAT44(local_238._4_4_,(uint)local_238);
          uVal_26 = uVal_46 + 1;
          lVal_28 = lVal_35;
          if (0xfff < uVal_26) {
            lVal_28 = *(int64_t *)(lVal_35 + -8);
            if (0x1f < (uint64_t)((lVal_35 + -8) - lVal_28)) goto LAB_180446c79;
            uVal_26 = uVal_46 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_28,uVal_26);
        }
        if (bFlag_49) goto LAB_180444a51;
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x15424) == '\0') {
          lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_28 + 0x15424) = 1;
          *(uint8_t *)(lVal_28 + 0x15422) = 1;
          *(uint64_t *)(lVal_28 + 0x15418) = 0x7d1e40b938c590e4;
          *(uint16_t *)(lVal_28 + 0x15420) = 0xf1fa;
          func_0x180673140(&LAB_180449280);
        }
        lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_1 = (uint64_t *)(lVal_28 + 0x15418);
        if (*(char *)(lVal_28 + 0x15422) == '\x01') {
          *pU64_1 = *pU64_1 ^ 0x117f29cb5db1f189;
          *(byte *)(lVal_28 + 0x15420) = *(byte *)(lVal_28 + 0x15420) ^ 0x89;
          *(byte *)(lVal_28 + 0x15421) = *(byte *)(lVal_28 + 0x15421) ^ 0xf1;
          *(uint8_t *)(lVal_28 + 0x15422) = 0;
        }
        local_4a8 = ZEXT816(0);
        local_4b8 = ZEXT816(0);
        sz_25 = strlen((char *)pU64_1);
        if (-1 < (int64_t)sz_25) {
          if (sz_25 < 0x10) {
            pU64_45 = local_4b8;
            uVal_46 = 0xf;
          }
          else {
            uVal_26 = sz_25 | 0xf;
            uVal_46 = 0x16;
            if (0x16 < uVal_26) {
              uVal_46 = uVal_26;
            }
            if (uVal_26 < 0xfff) {
              pU64_45 = (uint8_t *)func_0x180672de0(uVal_46 + 1);
            }
            else {
              lVal_28 = func_0x180672de0(uVal_46 + 0x28);
              pU64_45 = (uint8_t *)(lVal_28 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_45 + -8) = lVal_28;
            }
            local_4b8._0_8_ = pU64_45;
          }
          local_4a8._8_8_ = uVal_46;
          local_4a8._0_8_ = sz_25;
          func_0x1806aa960(pU64_45,pU64_1,sz_25);
          pU64_45[sz_25] = 0;
          fnPtr_32 = (char *)func_0x180056aa0(local_128,local_4b8);
          uVal_22 = _UNK_1806c94dc;
          uVal_21 = _UNK_1806c94d8;
          uVal_20 = _UNK_1806c94d4;
          uVal_19 = _DAT_1806c94d0;
          if (*fnPtr_32 != '\x02') {
            uStack_225 = (uint8_t)((uint)_DAT_1806cdf69 >> 0x18);
            uStack_224 = (uint16_t)_UNK_1806cdf6d;
            uStack_222 = (uint8_t)((uint)_UNK_1806cdf6d >> 0x10);
            uStack_221._1_3_ = (undefined3)_UNK_1806cdf71;
            uStack_221 = CONCAT31(uStack_221._1_3_,(char)((uint)_UNK_1806cdf6d >> 0x18));
            uStack_21d = (uint8_t)((uint)_UNK_1806cdf71 >> 0x18);
            uStack_21c = (uint16_t)_UNK_1806cdf75;
            local_238._0_4_ = _DAT_1806cdf59;
            local_238._4_4_ = _UNK_1806cdf5d;
            iStack_230 = _UNK_1806cdf61;
            uStack_22c = (uint16_t)_UNK_1806cdf65;
            uStack_22a = (uint8_t)((uint)_UNK_1806cdf65 >> 0x10);
            uStack_229._0_1_ = (uint8_t)((uint)_UNK_1806cdf65 >> 0x18);
            uStack_229 = CONCAT31((int3)_DAT_1806cdf69,(uint8_t)uStack_229);
            uStack_21a = 0x2a;
            uStack_219 = 0x83;
            uStack_218 = 0xd4a4d70b;
            uStack_214 = 0x438b;
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x1544c) == '\0') {
              lVal_28 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_28 + 0x1544c) = 1;
              func_0x180086e20(lVal_28 + 0x15425,&local_238);
              func_0x180673140(&LAB_1804492b0);
            }
            uVal_22 = _UNK_1806c94cc;
            uVal_21 = _UNK_1806c94c8;
            uVal_20 = _UNK_1806c94c4;
            uVal_19 = _DAT_1806c94c0;
            lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            pArr16_37 = (uint8_t (*)[16])(lVal_28 + 0x15425);
            if (*(char *)(lVal_28 + 0x1544b) == '\x01') {
              auArr_9._4_4_ = *(uint *)(lVal_28 + 0x15429) ^ _UNK_1806c94c4;
              auArr_9._0_4_ = *(uint *)*pArr16_37 ^ _DAT_1806c94c0;
              auArr_9._8_4_ = *(uint *)(lVal_28 + 0x1542d) ^ _UNK_1806c94c8;
              auArr_9._12_4_ = *(uint *)(lVal_28 + 0x15431) ^ _UNK_1806c94cc;
              *pArr16_37 = auArr_9;
              auArr_12._4_4_ = *(uint *)(lVal_28 + 0x15439) ^ uVal_20;
              auArr_12._0_4_ = *(uint *)(lVal_28 + 0x15435) ^ uVal_19;
              auArr_12._8_4_ = *(uint *)(lVal_28 + 0x1543d) ^ uVal_21;
              auArr_12._12_4_ = *(uint *)(lVal_28 + 0x15441) ^ uVal_22;
              *(uint8_t (*)[16])(lVal_28 + 0x15435) = auArr_12;
              *(uint *)(lVal_28 + 0x15445) = *(uint *)(lVal_28 + 0x15445) ^ 0xbbd7bd25;
              *(byte *)(lVal_28 + 0x15449) = *(byte *)(lVal_28 + 0x15449) ^ 0xe5;
              *(byte *)(lVal_28 + 0x1544a) = *(byte *)(lVal_28 + 0x1544a) ^ 0x43;
              *(uint8_t *)(lVal_28 + 0x1544b) = 0;
            }
            uStack_338 = 0;
            uStack_334 = 0;
            uStack_330 = 0;
            uStack_32c = 0;
            local_348._0_4_ = 0;
            local_348._4_4_ = 0;
            uStack_340 = 0;
            uStack_33c = 0;
            sz_25 = strlen((char *)pArr16_37);
            if ((int64_t)sz_25 < 0) goto LAB_180446d0a;
            ptr7_Long_41 = (int64_t *******)&local_348;
            uVal_46 = 0xf;
            ptr7_Long_48 = ptr7_Long_41;
            if (0xf < sz_25) {
              uVal_26 = sz_25 | 0xf;
              uVal_46 = 0x16;
              if (0x16 < uVal_26) {
                uVal_46 = uVal_26;
              }
              if (uVal_26 < 0xfff) {
                ptr7_Long_48 = (int64_t *******)func_0x180672de0(uVal_46 + 1);
              }
              else {
                ptr6_Long_31 = (int64_t ******)func_0x180672de0(uVal_46 + 0x28);
                ptr7_Long_48 =
                     (int64_t *******)((int64_t)ptr6_Long_31 + 0x27U & 0xffffffffffffffe0);
                ptr7_Long_48[-1] = ptr6_Long_31;
              }
              local_348._0_4_ = (uint)ptr7_Long_48;
              local_348._4_4_ = (uint32_t)((uint64_t)ptr7_Long_48 >> 0x20);
            }
            uStack_338 = (uint32_t)sz_25;
            uStack_334 = (uint32_t)(sz_25 >> 0x20);
            uStack_330 = (uint32_t)uVal_46;
            uStack_32c = (uint32_t)(uVal_46 >> 0x20);
            func_0x1806aa960(ptr7_Long_48,pArr16_37,sz_25);
            *(uint8_t *)((int64_t)ptr7_Long_48 + sz_25) = 0;
            uStack_b0 = 3;
            local_b8 = (uint8_t  [8])&DAT_18076021e;
            local_118._8_8_ = local_b8;
            local_118._0_8_ = 0xd;
            local_250 = CONCAT44(uStack_334,uStack_338);
            if (0xf < CONCAT44(uStack_32c,uStack_330)) {
              ptr7_Long_41 = (int64_t *******)CONCAT44(local_348._4_4_,(uint)local_348);
            }
            local_258 = ptr7_Long_41;
            func_0x18063ff10(&local_238,&local_258,local_118);
            func_0x18045fe90(&local_238);
            goto LAB_180444bd0;
          }
          local_118._8_8_ = 0;
          local_118._0_8_ = fnPtr_32;
          local_3c8 = -0x8000000000000000;
          local_108._8_8_ = 0x8000000000000000;
          local_108._0_8_ = **(uint64_t **)(fnPtr_32 + 8);
          if (*fnPtr_32 == '\x02') {
            local_398 = *(int64_t *)(*(int64_t *)(fnPtr_32 + 8) + 8);
LAB_18044500f:
            local_390 = 0;
          }
          else {
            if (*fnPtr_32 != '\x01') {
              local_398 = 0;
              local_3c8 = 1;
              goto LAB_18044500f;
            }
            local_390 = **(int64_t **)(fnPtr_32 + 8);
            local_398 = 0;
          }
          lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          pU64_43 = (uint *)(lVal_28 + 0x15450);
          local_3c0 = (uint *)(lVal_28 + 0x1545c);
          pU64_42 = (uint *)(lVal_28 + 0x15468);
          local_3d0 = (char *)(lVal_28 + 0x15471);
          local_3b8 = (char *)(lVal_28 + 0x15489);
          local_3a8 = (char *)(lVal_28 + 0x154cd);
          local_3a0 = (char *)(lVal_28 + 0x154f1);
          local_3b0 = (char *)(lVal_28 + 0x154a9);
          uVal_50 = (uint)DAT_1806c94e0;
          uVal_46 = (uint64_t)DAT_1806c94e0 >> 0x20;
          local_90 = 0;
          fnPtr_33 = fnPtr_32;
          while (fnPtr_33 == fnPtr_32) {
            if (*fnPtr_33 == '\x01') {
              if (local_118._8_8_ == local_390) goto LAB_180446816;
            }
            else if (*fnPtr_33 == '\x02') {
              if (local_108._0_8_ == local_398) {
LAB_180446816:
                if ((local_90 & 1) == 0) {
                  local_4c8 = PTR_DAT_1806b75a0._0_4_;
                  uStack_4c4 = PTR_DAT_1806b75a0._4_4_;
                  uStack_4c0 = _UNK_1806b75a8;
                  uStack_4bc = _UNK_1806b75ac;
                  uVal_27 = func_0x180448e40();
                  func_0x180449760(uVal_27);
                  func_0x180001060(&local_348,uVal_27);
                  func_0x18023e880(&local_238,&local_348,&local_4c8);
                  func_0x18045fe90(&local_238);
                  func_0x180001e70(&local_238);
                  func_0x180001e70(&local_348);
                }
                goto LAB_180444c77;
              }
            }
            else if (local_108._8_8_ == local_3c8) goto LAB_180446816;
            fnPtr_33 = (char *)func_0x180083d00(local_118);
            if (*fnPtr_33 == '\x01') {
              if (*(char *)(*(int64_t *)
                             ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                           0x15458) == '\0') {
                lVal_35 = *(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                *(uint8_t *)(lVal_35 + 0x15458) = 1;
                *(uint32_t *)(lVal_35 + 0x15450) = 0x924c483b;
                *(uint16_t *)(lVal_35 + 0x15454) = 0x175;
                func_0x180673140(&LAB_1804492e0);
                ch_24 = *(char *)(lVal_28 + 0x15455);
              }
              else {
                ch_24 = *(char *)(lVal_28 + 0x15455);
              }
              if (ch_24 == '\x01') {
                *pU64_43 = *pU64_43 ^ 0xf7212955;
                *(byte *)(lVal_28 + 0x15454) = *(byte *)(lVal_28 + 0x15454) ^ 0x75;
                *(uint8_t *)(lVal_28 + 0x15455) = 0;
              }
              uStack_225 = 0;
              uStack_224 = 0;
              uStack_222 = 0;
              uStack_221 = SUB164(ZEXT816(0),7);
              uStack_21d = 0;
              uStack_21c = 0;
              uStack_21a = 0;
              uStack_219 = 0;
              local_238._0_4_ = 0;
              local_238._4_4_ = 0;
              iStack_230 = 0;
              uStack_22c = 0;
              uStack_22a = 0;
              uStack_229 = 0;
              sz_25 = strlen((char *)pU64_43);
              if ((int64_t)sz_25 < 0) goto LAB_180446c87;
              uVal_26 = 0xf;
              pU64_44 = (uint *)&local_238;
              if (0xf < sz_25) {
                uVal_34 = sz_25 | 0xf;
                uVal_26 = 0x16;
                if (0x16 < uVal_34) {
                  uVal_26 = uVal_34;
                }
                if (uVal_34 < 0xfff) {
                  pU64_44 = (uint *)func_0x180672de0(uVal_26 + 1);
                }
                else {
                  lVal_35 = func_0x180672de0(uVal_26 + 0x28);
                  pU64_44 = (uint *)(lVal_35 + 0x27U & 0xffffffffffffffe0);
                  *(int64_t *)(pU64_44 + 0xfffffffffffffffe) = lVal_35;
                }
                local_238._0_4_ = (uint)pU64_44;
                local_238._4_4_ = (uint32_t)((uint64_t)pU64_44 >> 0x20);
              }
              uStack_229._1_3_ = (undefined3)sz_25;
              uStack_225 = (uint8_t)(sz_25 >> 0x18);
              uStack_224 = (uint16_t)(sz_25 >> 0x20);
              uStack_222 = (uint8_t)(sz_25 >> 0x30);
              uStack_221._0_1_ = (uint8_t)(sz_25 >> 0x38);
              uStack_221._1_3_ = (undefined3)uVal_26;
              uStack_21d = (uint8_t)(uVal_26 >> 0x18);
              uStack_21c = (uint16_t)(uVal_26 >> 0x20);
              uStack_21a = (uint8_t)(uVal_26 >> 0x30);
              uStack_219 = (uint8_t)(uVal_26 >> 0x38);
              func_0x1806aa960(pU64_44,pU64_43,sz_25);
              *(uint8_t *)((int64_t)pU64_44 + sz_25) = 0;
              bFlag_49 = true;
              if ((*fnPtr_33 == '\x01') &&
                 (lVal_35 = func_0x1800a5e70(*(uint64_t *)(fnPtr_33 + 8),&local_238),
                 lVal_35 != **(int64_t **)(fnPtr_33 + 8))) {
                if (*(char *)(*(int64_t *)
                               ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                             0x15464) == '\0') {
                  lVal_35 = *(int64_t *)
                            ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                  *(uint8_t *)(lVal_35 + 0x15464) = 1;
                  *(uint32_t *)(lVal_35 + 0x1545c) = 0x9f554825;
                  *(uint16_t *)(lVal_35 + 0x15460) = 0x175;
                  func_0x180673140(&LAB_180449310);
                  ch_24 = *(char *)((int64_t)local_3c0 + 5);
                }
                else {
                  ch_24 = *(char *)((int64_t)local_3c0 + 5);
                }
                if (ch_24 == '\x01') {
                  *local_3c0 = *local_3c0 ^ 0xf7212955;
                  *(byte *)(local_3c0 + 1) = *(byte *)(local_3c0 + 1) ^ 0x75;
                  *(uint8_t *)((int64_t)local_3c0 + 5) = 0;
                }
                uStack_338 = 0;
                uStack_334 = 0;
                uStack_330 = 0;
                uStack_32c = 0;
                local_348._0_4_ = 0;
                local_348._4_4_ = 0;
                uStack_340 = 0;
                uStack_33c = 0;
                sz_25 = strlen((char *)local_3c0);
                if ((int64_t)sz_25 < 0) goto LAB_180446cbf;
                uVal_26 = 0xf;
                pU64_44 = (uint *)&local_348;
                if (0xf < sz_25) {
                  uVal_34 = sz_25 | 0xf;
                  uVal_26 = 0x16;
                  if (0x16 < uVal_34) {
                    uVal_26 = uVal_34;
                  }
                  if (uVal_34 < 0xfff) {
                    pU64_44 = (uint *)func_0x180672de0(uVal_26 + 1);
                  }
                  else {
                    lVal_35 = func_0x180672de0(uVal_26 + 0x28);
                    pU64_44 = (uint *)(lVal_35 + 0x27U & 0xffffffffffffffe0);
                    *(int64_t *)(pU64_44 + 0xfffffffffffffffe) = lVal_35;
                  }
                  local_348._0_4_ = (uint)pU64_44;
                  local_348._4_4_ = (uint32_t)((uint64_t)pU64_44 >> 0x20);
                }
                uStack_338 = (uint32_t)sz_25;
                uStack_334 = (uint32_t)(sz_25 >> 0x20);
                uStack_330 = (uint32_t)uVal_26;
                uStack_32c = (uint32_t)(uVal_26 >> 0x20);
                func_0x1806aa960(pU64_44,local_3c0,sz_25);
                *(uint8_t *)((int64_t)pU64_44 + sz_25) = 0;
                bFlag_49 = true;
                if (*fnPtr_33 == '\x01') {
                  lVal_35 = func_0x1800a5e70(*(uint64_t *)(fnPtr_33 + 8),&local_348);
                  bFlag_49 = lVal_35 == **(int64_t **)(fnPtr_33 + 8);
                }
                uVal_26 = CONCAT44(uStack_32c,uStack_330);
                if (0xf < uVal_26) {
                  lVal_40 = CONCAT44(local_348._4_4_,(uint)local_348);
                  uVal_34 = uVal_26 + 1;
                  lVal_35 = lVal_40;
                  if (0xfff < uVal_34) {
                    lVal_35 = *(int64_t *)(lVal_40 + -8);
                    if (0x1f < (uint64_t)((lVal_40 + -8) - lVal_35)) goto LAB_180446c79;
                    uVal_34 = uVal_26 + 0x28;
                  }
                  thunk_FUN_180695dd0(lVal_35,uVal_34);
                }
              }
              uVal_26 = CONCAT17(uStack_219,
                                CONCAT16(uStack_21a,
                                         CONCAT24(uStack_21c,CONCAT13(uStack_21d,uStack_221._1_3_)))
                               );
              if (0xf < uVal_26) {
                lVal_40 = CONCAT44(local_238._4_4_,(uint)local_238);
                uVal_34 = uVal_26 + 1;
                lVal_35 = lVal_40;
                if (0xfff < uVal_34) {
                  lVal_35 = *(int64_t *)(lVal_40 + -8);
                  if (0x1f < (uint64_t)((lVal_40 + -8) - lVal_35)) goto LAB_180446c79;
                  uVal_34 = uVal_26 + 0x28;
                }
                thunk_FUN_180695dd0(lVal_35,uVal_34);
              }
              if (!bFlag_49) {
                if (*(char *)(*(int64_t *)
                               ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                             0x15470) == '\0') {
                  lVal_35 = *(int64_t *)
                            ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                  *(uint8_t *)(lVal_35 + 0x15470) = 1;
                  *(uint32_t *)(lVal_35 + 0x15468) = 0x7fef1c31;
                  *(uint16_t *)(lVal_35 + 0x1546c) = 0x191;
                  func_0x180673140(&LAB_180449340);
                  ch_24 = *(char *)(lVal_28 + 0x1546d);
                }
                else {
                  ch_24 = *(char *)(lVal_28 + 0x1546d);
                }
                if (ch_24 == '\x01') {
                  *pU64_42 = *pU64_42 ^ 0x179b7d41;
                  *(byte *)(lVal_28 + 0x1546c) = *(byte *)(lVal_28 + 0x1546c) ^ 0x91;
                  *(uint8_t *)(lVal_28 + 0x1546d) = 0;
                }
                uStack_225 = 0;
                uStack_224 = 0;
                uStack_222 = 0;
                uStack_221 = SUB164(ZEXT816(0),7);
                uStack_21d = 0;
                uStack_21c = 0;
                uStack_21a = 0;
                uStack_219 = 0;
                local_238._0_4_ = 0;
                local_238._4_4_ = 0;
                iStack_230 = 0;
                uStack_22c = 0;
                uStack_22a = 0;
                uStack_229 = 0;
                sz_25 = strlen((char *)pU64_42);
                if ((int64_t)sz_25 < 0) goto LAB_180446c9f;
                uVal_26 = 0xf;
                pU64_44 = (uint *)&local_238;
                if (0xf < sz_25) {
                  uVal_34 = sz_25 | 0xf;
                  uVal_26 = 0x16;
                  if (0x16 < uVal_34) {
                    uVal_26 = uVal_34;
                  }
                  if (uVal_34 < 0xfff) {
                    pU64_44 = (uint *)func_0x180672de0(uVal_26 + 1);
                  }
                  else {
                    lVal_35 = func_0x180672de0(uVal_26 + 0x28);
                    pU64_44 = (uint *)(lVal_35 + 0x27U & 0xffffffffffffffe0);
                    *(int64_t *)(pU64_44 + 0xfffffffffffffffe) = lVal_35;
                  }
                  local_238._0_4_ = (uint)pU64_44;
                  local_238._4_4_ = (uint32_t)((uint64_t)pU64_44 >> 0x20);
                }
                uStack_229._1_3_ = (undefined3)sz_25;
                uStack_225 = (uint8_t)(sz_25 >> 0x18);
                uStack_224 = (uint16_t)(sz_25 >> 0x20);
                uStack_222 = (uint8_t)(sz_25 >> 0x30);
                uStack_221._0_1_ = (uint8_t)(sz_25 >> 0x38);
                uStack_221._1_3_ = (undefined3)uVal_26;
                uStack_21d = (uint8_t)(uVal_26 >> 0x18);
                uStack_21c = (uint16_t)(uVal_26 >> 0x20);
                uStack_21a = (uint8_t)(uVal_26 >> 0x30);
                uStack_219 = (uint8_t)(uVal_26 >> 0x38);
                func_0x1806aa960(pU64_44,pU64_42,sz_25);
                *(uint8_t *)((int64_t)pU64_44 + sz_25) = 0;
                uVal_27 = func_0x18010ffb0(fnPtr_33,&local_238);
                _local_b8 = ZEXT816(0);
                local_a8 = 0;
                local_a0 = 0xf;
                func_0x180086960(uVal_27,local_b8);
                uVal_26 = CONCAT17(uStack_219,
                                  CONCAT16(uStack_21a,
                                           CONCAT24(uStack_21c,CONCAT13(uStack_21d,uStack_221._1_3_)
                                                   )));
                if (0xf < uVal_26) {
                  lVal_40 = CONCAT44(local_238._4_4_,(uint)local_238);
                  uVal_34 = uVal_26 + 1;
                  lVal_35 = lVal_40;
                  if (0xfff < uVal_34) {
                    lVal_35 = *(int64_t *)(lVal_40 + -8);
                    if (0x1f < (uint64_t)((lVal_40 + -8) - lVal_35)) goto LAB_180446c79;
                    uVal_34 = uVal_26 + 0x28;
                  }
                  thunk_FUN_180695dd0(lVal_35,uVal_34);
                }
                uVal_26 = local_a8;
                local_498 = ZEXT816(0);
                local_488 = ZEXT816(0);
                pArr16_37 = (uint8_t (*)[16])local_b8;
                if (0xf < local_a0) {
                  pArr16_37 = (uint8_t (*)[16])local_b8;
                }
                if ((int64_t)local_a8 < 0) goto LAB_180446c99;
                if (local_a8 < 0x10) {
                  local_488._8_8_ = 0xf;
                  local_488._0_8_ = local_a8;
                  local_498 = *pArr16_37;
                }
                else {
                  uVal_38 = local_a8 | 0xf;
                  uVal_34 = 0x16;
                  if (0x16 < uVal_38) {
                    uVal_34 = uVal_38;
                  }
                  if (uVal_38 < 0xfff) {
                    uVal_38 = func_0x180672de0(uVal_34 + 1);
                  }
                  else {
                    lVal_35 = func_0x180672de0(uVal_34 + 0x28);
                    uVal_38 = lVal_35 + 0x27U & 0xffffffffffffffe0;
                    *(int64_t *)(uVal_38 - 8) = lVal_35;
                  }
                  local_498._0_8_ = uVal_38;
                  local_488._8_8_ = uVal_34;
                  local_488._0_8_ = uVal_26;
                  func_0x1806aa960(uVal_38,pArr16_37,uVal_26 + 1);
                }
                local_468 = ZEXT816(0);
                local_478 = ZEXT816(0);
                uVal_26 = CONCAT44(iStack_354,local_358);
                pArr16_37 = (uint8_t (*)[16])&local_368;
                if (0xf < CONCAT44(uStack_34c,uStack_350)) {
                  pArr16_37 = local_368;
                }
                if (iStack_354 < 0) goto LAB_180446cb2;
                if (uVal_26 < 0x10) {
                  local_468._8_8_ = 0xf;
                  local_468._0_8_ = uVal_26;
                  local_478 = *pArr16_37;
                }
                else {
                  uVal_38 = uVal_26 | 0xf;
                  uVal_34 = 0x16;
                  if (0x16 < uVal_38) {
                    uVal_34 = uVal_38;
                  }
                  if (uVal_38 < 0xfff) {
                    local_86 = 1;
                    uVal_38 = func_0x180672de0(uVal_34 + 1);
                  }
                  else {
                    local_86 = 1;
                    lVal_35 = func_0x180672de0(uVal_34 + 0x28);
                    uVal_38 = lVal_35 + 0x27U & 0xffffffffffffffe0;
                    *(int64_t *)(uVal_38 - 8) = lVal_35;
                  }
                  local_478._0_8_ = uVal_38;
                  local_468._8_8_ = uVal_34;
                  local_468._0_8_ = uVal_26;
                  func_0x1806aa960(uVal_38,pArr16_37,uVal_26 + 1);
                }
                local_348._0_4_ = _DAT_1806cdf7f;
                local_348._4_4_ = _UNK_1806cdf83;
                uStack_340 = _UNK_1806cdf87;
                uStack_33c._0_3_ = (undefined3)_UNK_1806cdf8b;
                uStack_33c = CONCAT13(0x3f,(undefined3)uStack_33c);
                uStack_338 = CONCAT13(uStack_338._3_1_,0x4597a8);
                if (*(char *)(*(int64_t *)
                               ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                             0x15488) == '\0') {
                  lVal_35 = *(int64_t *)
                            ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                  *(uint8_t *)(lVal_35 + 0x15488) = 1;
                  func_0x18007cb80(lVal_35 + 0x15471,&local_348);
                  func_0x180673140(&LAB_180449370);
                }
                fnPtr_33 = local_3d0;
                func_0x1804493a0(local_3d0);
                uStack_225 = 0;
                uStack_224 = 0;
                uStack_222 = 0;
                uStack_221 = SUB164(ZEXT816(0),7);
                uStack_21d = 0;
                uStack_21c = 0;
                uStack_21a = 0;
                uStack_219 = 0;
                local_238._0_4_ = 0;
                local_238._4_4_ = 0;
                iStack_230 = 0;
                uStack_22c = 0;
                uStack_22a = 0;
                uStack_229 = 0;
                sz_25 = strlen(fnPtr_33);
                if ((int64_t)sz_25 < 0) goto LAB_180446ca5;
                uVal_26 = 0xf;
                pU64_44 = (uint *)&local_238;
                if (0xf < sz_25) {
                  uVal_34 = sz_25 | 0xf;
                  uVal_26 = 0x16;
                  if (0x16 < uVal_34) {
                    uVal_26 = uVal_34;
                  }
                  if (uVal_34 < 0xfff) {
                    local_81 = 1;
                    pU64_44 = (uint *)func_0x180672de0(uVal_26 + 1);
                  }
                  else {
                    local_81 = 1;
                    lVal_35 = func_0x180672de0(uVal_26 + 0x28);
                    pU64_44 = (uint *)(lVal_35 + 0x27U & 0xffffffffffffffe0);
                    *(int64_t *)(pU64_44 + 0xfffffffffffffffe) = lVal_35;
                  }
                  local_238._0_4_ = (uint)pU64_44;
                  local_238._4_4_ = (uint32_t)((uint64_t)pU64_44 >> 0x20);
                }
                uStack_229._1_3_ = (undefined3)sz_25;
                uStack_225 = (uint8_t)(sz_25 >> 0x18);
                uStack_224 = (uint16_t)(sz_25 >> 0x20);
                uStack_222 = (uint8_t)(sz_25 >> 0x30);
                uStack_221._0_1_ = (uint8_t)(sz_25 >> 0x38);
                uStack_221._1_3_ = (undefined3)uVal_26;
                uStack_21d = (uint8_t)(uVal_26 >> 0x18);
                uStack_21c = (uint16_t)(uVal_26 >> 0x20);
                uStack_21a = (uint8_t)(uVal_26 >> 0x30);
                uStack_219 = (uint8_t)(uVal_26 >> 0x38);
                func_0x1806aa960(pU64_44,local_3d0,sz_25);
                *(uint8_t *)((int64_t)pU64_44 + sz_25) = 0;
                func_0x180056840(&local_258,&local_238,local_478,local_498);
                uVal_26 = CONCAT17(uStack_219,
                                  CONCAT16(uStack_21a,
                                           CONCAT24(uStack_21c,CONCAT13(uStack_21d,uStack_221._1_3_)
                                                   )));
                if (0xf < uVal_26) {
                  lVal_40 = CONCAT44(local_238._4_4_,(uint)local_238);
                  uVal_34 = uVal_26 + 1;
                  lVal_35 = lVal_40;
                  if (0xfff < uVal_34) {
                    lVal_35 = *(int64_t *)(lVal_40 + -8);
                    if (0x1f < (uint64_t)((lVal_40 + -8) - lVal_35)) goto LAB_180446c79;
                    uVal_34 = uVal_26 + 0x28;
                  }
                  thunk_FUN_180695dd0(lVal_35,uVal_34);
                }
                ch_24 = func_0x1800be560(&local_258,0);
                uVal_26 = local_a8;
                if (ch_24 == '\0') {
                  local_458 = ZEXT816(0);
                  local_448 = ZEXT816(0);
                  pArr16_37 = (uint8_t (*)[16])local_b8;
                  if (0xf < local_a0) {
                    pArr16_37 = (uint8_t (*)[16])local_b8;
                  }
                  if ((int64_t)local_a8 < 0) goto LAB_180446cd8;
                  if (local_a8 < 0x10) {
                    local_448._8_8_ = 0xf;
                    local_448._0_8_ = local_a8;
                    local_458 = *pArr16_37;
                  }
                  else {
                    uVal_38 = local_a8 | 0xf;
                    uVal_34 = 0x16;
                    if (0x16 < uVal_38) {
                      uVal_34 = uVal_38;
                    }
                    if (uVal_38 < 0xfff) {
                      uVal_38 = func_0x180672de0(uVal_34 + 1);
                    }
                    else {
                      lVal_35 = func_0x180672de0(uVal_34 + 0x28);
                      uVal_38 = lVal_35 + 0x27U & 0xffffffffffffffe0;
                      *(int64_t *)(uVal_38 - 8) = lVal_35;
                    }
                    local_458._0_8_ = uVal_38;
                    local_448._8_8_ = uVal_34;
                    local_448._0_8_ = uVal_26;
                    func_0x1806aa960(uVal_38,pArr16_37,uVal_26 + 1);
                  }
                  local_538 = PTR_DAT_1806b6f30._0_4_;
                  uStack_534 = PTR_DAT_1806b6f30._4_4_;
                  uStack_530 = _UNK_1806b6f38;
                  uStack_52c = _UNK_1806b6f3c;
                  uStack_225 = (uint8_t)((uint)_UNK_1806cdfa2 >> 0x18);
                  uStack_224 = (uint16_t)_UNK_1806cdfa6;
                  uStack_222 = (uint8_t)((uint)_UNK_1806cdfa6 >> 0x10);
                  uStack_221._1_3_ = (undefined3)_UNK_1806cdfaa;
                  uStack_221 = CONCAT31(uStack_221._1_3_,(char)((uint)_UNK_1806cdfa6 >> 0x18));
                  uStack_21d = (uint8_t)((uint)_UNK_1806cdfaa >> 0x18);
                  local_238._0_4_ = _DAT_1806cdf92;
                  local_238._4_4_ = _UNK_1806cdf96;
                  iStack_230 = _UNK_1806cdf9a;
                  uStack_22c = (uint16_t)_DAT_1806cdf9e;
                  uStack_22a = (uint8_t)((uint)_DAT_1806cdf9e >> 0x10);
                  uStack_229._0_1_ = (uint8_t)((uint)_DAT_1806cdf9e >> 0x18);
                  uStack_229 = CONCAT31((int3)_UNK_1806cdfa2,(uint8_t)uStack_229);
                  if (*(char *)(*(int64_t *)
                                 ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                               0x154a8) == '\0') {
                    lVal_35 = *(int64_t *)
                              ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                    *(uint8_t *)(lVal_35 + 0x154a8) = 1;
                    func_0x18008fba0(lVal_35 + 0x15489,&local_238);
                    func_0x180673140(&LAB_1804493e0);
                  }
                  fnPtr_33 = local_3b8;
                  func_0x180449410(local_3b8);
                  uStack_338 = 0;
                  uStack_334 = 0;
                  uStack_330 = 0;
                  uStack_32c = 0;
                  local_348._0_4_ = 0;
                  local_348._4_4_ = 0;
                  uStack_340 = 0;
                  uStack_33c = 0;
                  sz_25 = strlen(fnPtr_33);
                  if ((int64_t)sz_25 < 0) goto LAB_180446ccb;
                  uVal_26 = 0xf;
                  pU64_44 = (uint *)&local_348;
                  if (0xf < sz_25) {
                    uVal_34 = sz_25 | 0xf;
                    uVal_26 = 0x16;
                    if (0x16 < uVal_34) {
                      uVal_26 = uVal_34;
                    }
                    if (uVal_34 < 0xfff) {
                      local_82 = 1;
                      pU64_44 = (uint *)func_0x180672de0(uVal_26 + 1);
                    }
                    else {
                      local_82 = 1;
                      lVal_35 = func_0x180672de0(uVal_26 + 0x28);
                      pU64_44 = (uint *)(lVal_35 + 0x27U & 0xffffffffffffffe0);
                      *(int64_t *)(pU64_44 + 0xfffffffffffffffe) = lVal_35;
                    }
                    local_348._0_4_ = (uint)pU64_44;
                    local_348._4_4_ = (uint32_t)((uint64_t)pU64_44 >> 0x20);
                  }
                  uStack_338 = (uint32_t)sz_25;
                  uStack_334 = (uint32_t)(sz_25 >> 0x20);
                  uStack_330 = (uint32_t)uVal_26;
                  uStack_32c = (uint32_t)(uVal_26 >> 0x20);
                  func_0x1806aa960(pU64_44,local_3b8,sz_25);
                  *(uint8_t *)((int64_t)pU64_44 + sz_25) = 0;
                  func_0x18041e2a0(&local_238,&local_348,&local_538,local_458);
                  func_0x18045fe90(&local_238);
LAB_180445f59:
                  uVal_26 = CONCAT17(uStack_219,
                                    CONCAT16(uStack_21a,
                                             CONCAT24(uStack_21c,
                                                      CONCAT13(uStack_21d,uStack_221._1_3_))));
                  if (0xf < uVal_26) {
                    lVal_40 = CONCAT44(local_238._4_4_,(uint)local_238);
                    uVal_34 = uVal_26 + 1;
                    lVal_35 = lVal_40;
                    if (0xfff < uVal_34) {
                      lVal_35 = *(int64_t *)(lVal_40 + -8);
                      if (0x1f < (uint64_t)((lVal_40 + -8) - lVal_35)) goto LAB_180446c79;
                      uVal_34 = uVal_26 + 0x28;
                    }
                    thunk_FUN_180695dd0(lVal_35,uVal_34);
                  }
                  uStack_229 = uStack_229 & 0xff;
                  uStack_225 = 0;
                  uStack_224 = 0;
                  uStack_222 = 0;
                  uStack_221 = 0xf00;
                  uStack_21d = 0;
                  uStack_21c = 0;
                  uStack_21a = 0;
                  uStack_219 = 0;
                  local_238._0_4_ = (uint)local_238 & 0xffffff00;
                  uVal_26 = CONCAT44(uStack_32c,uStack_330);
                  if (0xf < uVal_26) {
                    lVal_35 = CONCAT44(local_348._4_4_,(uint)local_348);
joined_r0x000180445fde:
                    uVal_34 = uVal_26 + 1;
                    lVal_40 = lVal_35;
                    if (0xfff < uVal_34) {
                      lVal_40 = *(int64_t *)(lVal_35 + -8);
                      if (0x1f < (uint64_t)((lVal_35 + -8) - lVal_40)) goto LAB_180446c79;
                      uVal_34 = uVal_26 + 0x28;
                    }
                    uVal_26 = thunk_FUN_180695dd0(lVal_40,uVal_34);
                  }
LAB_180446438:
                  local_90 = (uint)CONCAT71((int7)(uVal_26 >> 8),1);
                }
                else {
                  ptr7_Long_41 = (int64_t *******)&local_258;
                  if (0xf < local_240) {
                    ptr7_Long_41 = local_258;
                  }
                  fopen_s(&local_3d8,(char *)ptr7_Long_41,"rb");
                  uVal_26 = local_a8;
                  if (local_3d8 == (FILE *)0x0) {
                    local_438 = ZEXT816(0);
                    local_428 = ZEXT816(0);
                    pArr16_37 = (uint8_t (*)[16])local_b8;
                    if (0xf < local_a0) {
                      pArr16_37 = (uint8_t (*)[16])local_b8;
                    }
                    if (-1 < (int64_t)local_a8) {
                      if (local_a8 < 0x10) {
                        local_428._8_8_ = 0xf;
                        local_428._0_8_ = local_a8;
                        local_438 = *pArr16_37;
                      }
                      else {
                        uVal_38 = local_a8 | 0xf;
                        uVal_34 = 0x16;
                        if (0x16 < uVal_38) {
                          uVal_34 = uVal_38;
                        }
                        if (uVal_38 < 0xfff) {
                          uVal_38 = func_0x180672de0(uVal_34 + 1);
                        }
                        else {
                          lVal_35 = func_0x180672de0(uVal_34 + 0x28);
                          uVal_38 = lVal_35 + 0x27U & 0xffffffffffffffe0;
                          *(int64_t *)(uVal_38 - 8) = lVal_35;
                        }
                        local_438._0_8_ = uVal_38;
                        local_428._8_8_ = uVal_34;
                        local_428._0_8_ = uVal_26;
                        func_0x1806aa960(uVal_38,pArr16_37,uVal_26 + 1);
                      }
                      local_528 = PTR_DAT_1806b6f30._0_4_;
                      uStack_524 = PTR_DAT_1806b6f30._4_4_;
                      uStack_520 = _UNK_1806b6f38;
                      uStack_51c = _UNK_1806b6f3c;
                      uStack_225 = (uint8_t)((uint)_DAT_1806cdfbe >> 0x18);
                      uStack_224 = (uint16_t)_UNK_1806cdfc2;
                      uStack_222 = (uint8_t)((uint)_UNK_1806cdfc2 >> 0x10);
                      uStack_221._1_3_ = (undefined3)_UNK_1806cdfc6;
                      uStack_221 = CONCAT31(uStack_221._1_3_,(char)((uint)_UNK_1806cdfc2 >> 0x18));
                      uStack_21d = (uint8_t)((uint)_UNK_1806cdfc6 >> 0x18);
                      uStack_21c = (uint16_t)_UNK_1806cdfca;
                      uStack_21a = (uint8_t)((uint)_UNK_1806cdfca >> 0x10);
                      uStack_219 = (uint8_t)((uint)_UNK_1806cdfca >> 0x18);
                      local_238._0_4_ = _DAT_1806cdfae;
                      local_238._4_4_ = _UNK_1806cdfb2;
                      iStack_230 = _UNK_1806cdfb6;
                      uStack_22c = (uint16_t)_UNK_1806cdfba;
                      uStack_22a = (uint8_t)((uint)_UNK_1806cdfba >> 0x10);
                      uStack_229._0_1_ = (uint8_t)((uint)_UNK_1806cdfba >> 0x18);
                      uStack_229 = CONCAT31((int3)_DAT_1806cdfbe,(uint8_t)uStack_229);
                      uStack_218 = CONCAT31(uStack_218._1_3_,0xf5);
                      if (*(char *)(*(int64_t *)
                                     ((int64_t)ThreadLocalStoragePointer +
                                     (uint64_t)_tls_index * 8) + 0x154cc) == '\0') {
                        lVal_35 = *(int64_t *)
                                  ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                        *(uint8_t *)(lVal_35 + 0x154cc) = 1;
                        func_0x180086ce0(lVal_35 + 0x154a9,&local_238);
                        func_0x180673140(&LAB_180449440);
                      }
                      fnPtr_33 = local_3b0;
                      func_0x180449470(local_3b0);
                      uStack_338 = 0;
                      uStack_334 = 0;
                      uStack_330 = 0;
                      uStack_32c = 0;
                      local_348._0_4_ = 0;
                      local_348._4_4_ = 0;
                      uStack_340 = 0;
                      uStack_33c = 0;
                      sz_25 = strlen(fnPtr_33);
                      if (-1 < (int64_t)sz_25) {
                        uVal_26 = 0xf;
                        pU64_44 = (uint *)&local_348;
                        if (0xf < sz_25) {
                          uVal_34 = sz_25 | 0xf;
                          uVal_26 = 0x16;
                          if (0x16 < uVal_34) {
                            uVal_26 = uVal_34;
                          }
                          if (uVal_34 < 0xfff) {
                            local_83 = 1;
                            pU64_44 = (uint *)func_0x180672de0(uVal_26 + 1);
                          }
                          else {
                            local_83 = 1;
                            lVal_35 = func_0x180672de0(uVal_26 + 0x28);
                            pU64_44 = (uint *)(lVal_35 + 0x27U & 0xffffffffffffffe0);
                            *(int64_t *)(pU64_44 + 0xfffffffffffffffe) = lVal_35;
                          }
                          local_348._0_4_ = (uint)pU64_44;
                          local_348._4_4_ = (uint32_t)((uint64_t)pU64_44 >> 0x20);
                        }
                        uStack_338 = (uint32_t)sz_25;
                        uStack_334 = (uint32_t)(sz_25 >> 0x20);
                        uStack_330 = (uint32_t)uVal_26;
                        uStack_32c = (uint32_t)(uVal_26 >> 0x20);
                        func_0x1806aa960(pU64_44,local_3b0,sz_25);
                        *(uint8_t *)((int64_t)pU64_44 + sz_25) = 0;
                        func_0x18041e2a0(&local_238,&local_348,&local_528,local_438);
                        func_0x18045fe90(&local_238);
                        goto LAB_180445f59;
                      }
                      goto LAB_180446ce4;
                    }
                    goto LAB_180446cf1;
                  }
                  local_208 = SUB164(ZEXT816(0),5);
                  uStack_204 = 0;
                  uStack_200 = uStack_200 & 0xff000000;
                  uStack_218 = 0;
                  uStack_214 = 0;
                  uStack_212 = 0;
                  uStack_210 = 0;
                  uStack_20c = 0;
                  uStack_225 = 0;
                  uStack_224 = 0;
                  uStack_222 = 0;
                  uStack_221 = SUB164(ZEXT816(0),7);
                  uStack_21d = 0;
                  uStack_21c = 0;
                  uStack_21a = 0;
                  uStack_219 = 0;
                  local_238._0_4_ = 0;
                  local_238._4_4_ = 0;
                  iStack_230 = 0;
                  uStack_22c = 0;
                  uStack_22a = 0;
                  uStack_229 = 0;
                  sz_25 = fread_s(&local_238,0x3b,1,0x3b,local_3d8);
                  uVal_26 = local_a8;
                  if (sz_25 != 0x3b) {
                    local_418 = ZEXT816(0);
                    local_408 = ZEXT816(0);
                    pArr16_37 = (uint8_t (*)[16])local_b8;
                    if (0xf < local_a0) {
                      pArr16_37 = (uint8_t (*)[16])local_b8;
                    }
                    if (-1 < (int64_t)local_a8) {
                      if (local_a8 < 0x10) {
                        local_408._8_8_ = 0xf;
                        local_408._0_8_ = local_a8;
                        local_418 = *pArr16_37;
                      }
                      else {
                        uVal_38 = local_a8 | 0xf;
                        uVal_34 = 0x16;
                        if (0x16 < uVal_38) {
                          uVal_34 = uVal_38;
                        }
                        if (uVal_38 < 0xfff) {
                          uVal_38 = func_0x180672de0(uVal_34 + 1);
                        }
                        else {
                          lVal_35 = func_0x180672de0(uVal_34 + 0x28);
                          uVal_38 = lVal_35 + 0x27U & 0xffffffffffffffe0;
                          *(int64_t *)(uVal_38 - 8) = lVal_35;
                        }
                        local_418._0_8_ = uVal_38;
                        local_408._8_8_ = uVal_34;
                        local_408._0_8_ = uVal_26;
                        func_0x1806aa960(uVal_38,pArr16_37,uVal_26 + 1);
                      }
                      local_518 = PTR_DAT_1806b6f30._0_4_;
                      uStack_514 = PTR_DAT_1806b6f30._4_4_;
                      uStack_510 = _UNK_1806b6f38;
                      uStack_50c = _UNK_1806b6f3c;
                      uStack_338 = _DAT_1806cdfdf;
                      uStack_334 = _UNK_1806cdfe3;
                      uStack_330 = _UNK_1806cdfe7;
                      uStack_32c = _UNK_1806cdfeb;
                      local_348._0_4_ = _DAT_1806cdfcf;
                      local_348._4_4_ = _UNK_1806cdfd3;
                      uStack_340 = _UNK_1806cdfd7;
                      uStack_33c = _UNK_1806cdfdb;
                      local_328 = 0x5d;
                      if (*(char *)(*(int64_t *)
                                     ((int64_t)ThreadLocalStoragePointer +
                                     (uint64_t)_tls_index * 8) + 0x154f0) == '\0') {
                        lVal_35 = *(int64_t *)
                                  ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                        *(uint8_t *)(lVal_35 + 0x154f0) = 1;
                        func_0x180086ce0(lVal_35 + 0x154cd,&local_348);
                        func_0x180673140(&LAB_1804494a0);
                      }
                      fnPtr_33 = local_3a8;
                      func_0x1804494d0(local_3a8);
                      local_c8 = ZEXT816(0);
                      local_d8 = ZEXT816(0);
                      sz_25 = strlen(fnPtr_33);
                      if (-1 < (int64_t)sz_25) {
                        uVal_26 = 0xf;
                        pU64_45 = local_d8;
                        if (0xf < sz_25) {
                          uVal_34 = sz_25 | 0xf;
                          uVal_26 = 0x16;
                          if (0x16 < uVal_34) {
                            uVal_26 = uVal_34;
                          }
                          if (uVal_34 < 0xfff) {
                            local_84 = 1;
                            pU64_45 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
                          }
                          else {
                            local_84 = 1;
                            lVal_35 = func_0x180672de0(uVal_26 + 0x28);
                            pU64_45 = (uint8_t *)(lVal_35 + 0x27U & 0xffffffffffffffe0);
                            *(int64_t *)(pU64_45 + -8) = lVal_35;
                          }
                          local_d8._0_8_ = pU64_45;
                        }
                        local_c8._8_8_ = uVal_26;
                        local_c8._0_8_ = sz_25;
                        func_0x1806aa960(pU64_45,local_3a8,sz_25);
                        pU64_45[sz_25] = 0;
                        func_0x18041e2a0(&local_348,local_d8,&local_518,local_418);
                        func_0x18045fe90(&local_348);
LAB_180446391:
                        uVal_26 = CONCAT44(uStack_32c,uStack_330);
                        if (0xf < uVal_26) {
                          lVal_40 = CONCAT44(local_348._4_4_,(uint)local_348);
                          uVal_34 = uVal_26 + 1;
                          lVal_35 = lVal_40;
                          if (0xfff < uVal_34) {
                            lVal_35 = *(int64_t *)(lVal_40 + -8);
                            if (0x1f < (uint64_t)((lVal_40 + -8) - lVal_35)) goto LAB_180446c79;
                            uVal_34 = uVal_26 + 0x28;
                          }
                          thunk_FUN_180695dd0(lVal_35,uVal_34);
                        }
                        uStack_338 = 0;
                        uStack_334 = 0;
                        uStack_330 = 0xf;
                        uStack_32c = 0;
                        local_348._0_4_ = (uint)local_348 & 0xffffff00;
                        uVal_26 = local_c8._8_8_;
                        if (0xf < (uint64_t)local_c8._8_8_) {
                          lVal_35 = local_d8._0_8_;
                          goto joined_r0x000180445fde;
                        }
                        goto LAB_180446438;
                      }
                      goto LAB_180446cf7;
                    }
                    goto LAB_180446d04;
                  }
                  func_0x18068a690(local_3d8);
                  uVal_26 = local_a8;
                  if (CONCAT44(local_238._4_4_,(uint)local_238) != 0xa11da1a) {
                    local_3f8 = ZEXT816(0);
                    local_3e8 = ZEXT816(0);
                    pArr16_37 = (uint8_t (*)[16])local_b8;
                    if (0xf < local_a0) {
                      pArr16_37 = (uint8_t (*)[16])local_b8;
                    }
                    if (-1 < (int64_t)local_a8) {
                      if (local_a8 < 0x10) {
                        local_3e8._8_8_ = 0xf;
                        local_3e8._0_8_ = local_a8;
                        local_3f8 = *pArr16_37;
                      }
                      else {
                        uVal_38 = local_a8 | 0xf;
                        uVal_34 = 0x16;
                        if (0x16 < uVal_38) {
                          uVal_34 = uVal_38;
                        }
                        if (uVal_38 < 0xfff) {
                          uVal_38 = func_0x180672de0(uVal_34 + 1);
                        }
                        else {
                          lVal_35 = func_0x180672de0(uVal_34 + 0x28);
                          uVal_38 = lVal_35 + 0x27U & 0xffffffffffffffe0;
                          *(int64_t *)(uVal_38 - 8) = lVal_35;
                        }
                        local_3f8._0_8_ = uVal_38;
                        local_3e8._8_8_ = uVal_34;
                        local_3e8._0_8_ = uVal_26;
                        func_0x1806aa960(uVal_38,pArr16_37,uVal_26 + 1);
                      }
                      local_508 = PTR_DAT_1806b6f30._0_4_;
                      uStack_504 = PTR_DAT_1806b6f30._4_4_;
                      uStack_500 = _UNK_1806b6f38;
                      uStack_4fc = _UNK_1806b6f3c;
                      local_348._0_4_ = _DAT_1806cdff0;
                      local_348._4_4_ = _UNK_1806cdff4;
                      uStack_340 = _UNK_1806cdff8;
                      uStack_33c._0_3_ = (undefined3)_UNK_1806cdffc;
                      uStack_33c = CONCAT13(0x40,(undefined3)uStack_33c);
                      uStack_338 = 0xe7c5915e;
                      uStack_334 = CONCAT13(uStack_334._3_1_,0xcdb036);
                      if (*(char *)(*(int64_t *)
                                     ((int64_t)ThreadLocalStoragePointer +
                                     (uint64_t)_tls_index * 8) + 0x1550c) == '\0') {
                        lVal_35 = *(int64_t *)
                                  ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                        *(uint8_t *)(lVal_35 + 0x1550c) = 1;
                        func_0x18007d3c0(lVal_35 + 0x154f1,&local_348);
                        func_0x180673140(&LAB_180449500);
                      }
                      fnPtr_33 = local_3a0;
                      func_0x180449530(local_3a0);
                      local_c8 = ZEXT816(0);
                      local_d8 = ZEXT816(0);
                      sz_25 = strlen(fnPtr_33);
                      if (-1 < (int64_t)sz_25) {
                        uVal_26 = 0xf;
                        pU64_45 = local_d8;
                        if (0xf < sz_25) {
                          uVal_34 = sz_25 | 0xf;
                          uVal_26 = 0x16;
                          if (0x16 < uVal_34) {
                            uVal_26 = uVal_34;
                          }
                          if (uVal_34 < 0xfff) {
                            local_85 = 1;
                            pU64_45 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
                          }
                          else {
                            local_85 = 1;
                            lVal_35 = func_0x180672de0(uVal_26 + 0x28);
                            pU64_45 = (uint8_t *)(lVal_35 + 0x27U & 0xffffffffffffffe0);
                            *(int64_t *)(pU64_45 + -8) = lVal_35;
                          }
                          local_d8._0_8_ = pU64_45;
                        }
                        local_c8._8_8_ = uVal_26;
                        local_c8._0_8_ = sz_25;
                        func_0x1806aa960(pU64_45,local_3a0,sz_25);
                        pU64_45[sz_25] = 0;
                        func_0x18041e2a0(&local_348,local_d8,&local_508,local_3f8);
                        func_0x18045fe90(&local_348);
                        goto LAB_180446391;
                      }
                      goto LAB_180446d10;
                    }
                    goto LAB_180446d1d;
                  }
                  if (iStack_230 != 0x27) {
                    func_0x1800ba170(local_5c8,local_b8);
                    local_4f8 = PTR_DAT_1806b6f30._0_4_;
                    uStack_4f4 = PTR_DAT_1806b6f30._4_4_;
                    uStack_4f0 = _UNK_1806b6f38;
                    uStack_4ec = _UNK_1806b6f3c;
                    local_87 = 1;
                    uVal_27 = func_0x180448af0();
                    func_0x1804495b0(uVal_27);
                    local_87 = 1;
                    func_0x180001060(local_d8,uVal_27);
                    func_0x18041e2a0(&local_348,local_d8,&local_4f8,local_5c8);
                    func_0x18045fe90(&local_348);
                    func_0x180001e70(&local_348);
                    uVal_26 = func_0x180001e70(local_d8);
                    goto LAB_180446438;
                  }
                  uStack_338 = 0;
                  uStack_334 = 0;
                  uStack_330 = 0;
                  uStack_32c = 0;
                  local_348._0_4_ = 0;
                  local_348._4_4_ = 0;
                  uStack_340 = 0;
                  uStack_33c = 0;
                  pU64_36 = (uint32_t *)func_0x180672de0(0x30);
                  local_348._0_4_ = (uint)pU64_36;
                  local_348._4_4_ = (uint32_t)((uint64_t)pU64_36 >> 0x20);
                  uStack_338 = 0x27;
                  uStack_334 = 0;
                  uStack_330 = 0x2f;
                  uStack_32c = 0;
                  *(uint64_t *)((int64_t)pU64_36 + 0x1f) =
                       CONCAT35((undefined3)local_208,CONCAT41(uStack_20c,uStack_210._3_1_));
                  pU64_36[4] = CONCAT13(uStack_219,CONCAT12(uStack_21a,uStack_21c));
                  pU64_36[5] = uStack_218;
                  pU64_36[6] = CONCAT22(uStack_212,uStack_214);
                  pU64_36[7] = uStack_210;
                  *pU64_36 = CONCAT13((uint8_t)uStack_229,CONCAT12(uStack_22a,uStack_22c));
                  pU64_36[1] = CONCAT13(uStack_225,uStack_229._1_3_);
                  pU64_36[2] = CONCAT13((uint8_t)uStack_221,CONCAT12(uStack_222,uStack_224));
                  pU64_36[3] = CONCAT13(uStack_21d,uStack_221._1_3_);
                  *(uint8_t *)((int64_t)pU64_36 + 0x27) = 0;
                  pArr16_37 = (uint8_t (*)[16])func_0x180448bc0();
                  if (pArr16_37[2][8] == '\x01') {
                    uVal_15 = *(uint *)pArr16_37[1];
                    uVal_16 = *(uint *)(pArr16_37[1] + 4);
                    uVal_17 = *(uint *)(pArr16_37[1] + 8);
                    uVal_18 = *(uint *)(pArr16_37[1] + 0xc);
                    auArr_5._4_4_ = *(uint *)(*pArr16_37 + 4) ^ uVal_20;
                    auArr_5._0_4_ = *(uint *)*pArr16_37 ^ uVal_19;
                    auArr_5._8_4_ = *(uint *)(*pArr16_37 + 8) ^ uVal_21;
                    auArr_5._12_4_ = *(uint *)(*pArr16_37 + 0xc) ^ uVal_22;
                    *pArr16_37 = auArr_5;
                    auArr_8._4_4_ = uVal_16 ^ uVal_20;
                    auArr_8._0_4_ = uVal_15 ^ uVal_19;
                    auArr_8._8_4_ = uVal_17 ^ uVal_21;
                    auArr_8._12_4_ = uVal_18 ^ uVal_22;
                    pArr16_37[1] = auArr_8;
                    *(uint64_t *)pArr16_37[2] =
                         CONCAT44((uint)((uint64_t)*(uint64_t *)pArr16_37[2] >> 0x20) ^
                                  (uint)uVal_46,(uint)*(uint64_t *)pArr16_37[2] ^ uVal_50);
                    pArr16_37[2][8] = 0;
                  }
                  func_0x180001060(local_d8,pArr16_37);
                  ch_24 = func_0x180034ae0(&local_348,local_d8);
                  func_0x180001e70(local_d8);
                  if (ch_24 == '\0') {
                    func_0x1800ba170(local_5a8,local_b8);
                    local_4e8 = PTR_DAT_1806b6f30._0_4_;
                    uStack_4e4 = PTR_DAT_1806b6f30._4_4_;
                    uStack_4e0 = _UNK_1806b6f38;
                    uStack_4dc = _UNK_1806b6f3c;
                    local_88 = 1;
                    uVal_27 = func_0x180448ca0();
                    func_0x180449660(uVal_27);
                    local_88 = 1;
                    func_0x180001060(local_588,uVal_27);
                    func_0x18041e2a0(local_d8,local_588,&local_4e8,local_5a8);
                    func_0x18045fe90(local_d8);
LAB_1804465c5:
                    func_0x180001e70(local_d8);
                    uVal_27 = func_0x180001e70(local_588);
                    local_90 = (uint)CONCAT71((int7)((uint64_t)uVal_27 >> 8),1);
                  }
                  else if (CONCAT35((undefined3)uStack_200,CONCAT41(uStack_204,local_208._3_1_)) !=
                           0x19) {
                    func_0x1800ba170(local_568,local_b8);
                    local_4d8 = PTR_DAT_1806b6f30._0_4_;
                    uStack_4d4 = PTR_DAT_1806b6f30._4_4_;
                    uStack_4d0 = _UNK_1806b6f38;
                    uStack_4cc = _UNK_1806b6f3c;
                    local_89 = 1;
                    uVal_27 = func_0x180448d70();
                    func_0x1804496e0(uVal_27);
                    local_89 = 1;
                    func_0x180001060(local_588,uVal_27);
                    func_0x18041e2a0(local_d8,local_588,&local_4d8,local_568);
                    func_0x18045fe90(local_d8);
                    goto LAB_1804465c5;
                  }
                  func_0x180001e70(&local_348);
                }
                if (0xf < local_240) {
                  uVal_26 = local_240 + 1;
                  ptr7_Long_41 = local_258;
                  if (0xfff < uVal_26) {
                    ptr7_Long_41 = (int64_t *******)local_258[-1];
                    if (0x1f < (uint64_t)((int64_t)local_258 + (-8 - (int64_t)ptr7_Long_41)))
                    goto LAB_180446c79;
                    uVal_26 = local_240 + 0x28;
                  }
                  thunk_FUN_180695dd0(ptr7_Long_41,uVal_26);
                }
                if (0xf < local_a0) {
                  uVal_26 = local_a0 + 1;
                  lVal_35 = (int64_t)local_b8;
                  if (0xfff < uVal_26) {
                    lVal_35 = *(int64_t *)((int64_t)local_b8 + -8);
                    if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_35)) goto LAB_180446c79;
                    uVal_26 = local_a0 + 0x28;
                  }
                  thunk_FUN_180695dd0(lVal_35,uVal_26);
                }
              }
            }
            fnPtr_33 = (char *)local_118._0_8_;
            if (*(char *)local_118._0_8_ == '\x02') {
              local_108._0_8_ = local_108._0_8_ + 0x10;
            }
            else if (*(char *)local_118._0_8_ == '\x01') {
              pLong_23 = *(int64_t **)(local_118._8_8_ + 0x10);
              if (*(char *)((int64_t)*(int64_t **)(local_118._8_8_ + 0x10) + 0x19) == '\0') {
                do {
                  pLong_39 = pLong_23;
                  pLong_23 = (int64_t *)*pLong_39;
                } while (*(char *)((int64_t)(int64_t *)*pLong_39 + 0x19) == '\0');
LAB_18044653c:
                local_118._8_8_ = pLong_39;
              }
              else {
                do {
                  pLong_39 = *(int64_t **)(local_118._8_8_ + 8);
                  if (*(char *)((int64_t)pLong_39 + 0x19) != '\0') goto LAB_18044653c;
                  bFlag_49 = (int64_t *)local_118._8_8_ == (int64_t *)pLong_39[2];
                  local_118._8_8_ = pLong_39;
                } while (bFlag_49);
              }
            }
            else {
              local_108._8_8_ = local_108._8_8_ + 1;
            }
          }
          func_0x180001060(&local_348,"cannot compare iterators of different containers");
          func_0x180083e30(&local_238,0xd4,&local_348,fnPtr_33);
          func_0x18067a120(&local_238,&DAT_180768740);
          goto LAB_180446b1f;
        }
      }
      func_0x18007ba70();
LAB_180446ce4:
      local_83 = 1;
      func_0x18007ba70();
LAB_180446cf1:
      func_0x18007ba70();
LAB_180446cf7:
      local_84 = 1;
      func_0x18007ba70();
LAB_180446d04:
      func_0x18007ba70();
LAB_180446d0a:
      func_0x18007ba70();
LAB_180446d10:
      local_85 = 1;
      func_0x18007ba70();
LAB_180446d1d:
      func_0x18007ba70();
      fnPtr_3 = (func_ptr_t )swi(3);
      (*fnPtr_3)();
      return;
    }
  }
LAB_180446c74:
  func_0x18007ba70();
LAB_180446c79:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180446d30
void Unwind_180446d30(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x154cc) = 0;
  *(uint8_t *)(param_2 + 0x575) = 1;
  return;
}

// Unwind@180446da0
void Unwind_180446da0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1550c) = 0;
  *(uint8_t *)(param_2 + 0x573) = 1;
  return;
}

// Unwind@180446e10
void Unwind_180446e10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x154f0) = 0;
  *(uint8_t *)(param_2 + 0x574) = 1;
  return;
}

// Unwind@180446e80
void Unwind_180446e80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1544c) = 0;
  return;
}

// Unwind@180446ef0
void Unwind_180446ef0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x154a8) = 0;
  *(uint8_t *)(param_2 + 0x576) = 1;
  return;
}

// Unwind@180446f60
void Unwind_180446f60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15488) = 0;
  *(uint8_t *)(param_2 + 0x577) = 1;
  return;
}

// Unwind@180446fd0
void Unwind_180446fd0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15410) = 0;
  return;
}

// Unwind@180447040
void Unwind_180447040(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x153b0) = 0;
  return;
}

// Unwind@1804470b0
void Unwind_1804470b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x152f8) = 0;
  return;
}

// Unwind@180447120
void Unwind_180447120(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15374) = 0;
  return;
}

// Unwind@180447190
void Unwind_180447190(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1538c) = 0;
  return;
}

// Unwind@180447200
void Unwind_180447200(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1533c) = 0;
  return;
}

// Unwind@180447270
void Unwind_180447270(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x152b0) = 0;
  return;
}

// Unwind@1804472e0
void Unwind_1804472e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x520);
  return;
}

// Unwind@180447340
void Unwind_180447340(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  *(uint8_t *)(param_2 + 0x56f) = 0;
  return;
}

// Unwind@1804473a0
void Unwind_1804473a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x520);
  return;
}

// Unwind@180447400
void Unwind_180447400(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x56f) == '\x01') {
    func_0x180001e70(param_2 + 0x90);
  }
  return;
}

// Unwind@180447460
void Unwind_180447460(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  *(uint8_t *)(param_2 + 0x570) = 0;
  return;
}

// Unwind@1804474c0
void Unwind_1804474c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@180447520
void Unwind_180447520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@180447580
void Unwind_180447580(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x570) == '\x01') {
    func_0x180001e70(param_2 + 0x50);
  }
  return;
}

// Unwind@1804475e0
void Unwind_1804475e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x520);
  *(uint8_t *)(param_2 + 0x571) = 0;
  return;
}

// Unwind@180447640
void Unwind_180447640(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@1804476a0
void Unwind_1804476a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@180447700
void Unwind_180447700(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@180447760
void Unwind_180447760(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@1804477c0
void Unwind_1804477c0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x571) == '\x01') {
    func_0x180001e70(param_2 + 0x30);
  }
  return;
}

// Unwind@180447820
void Unwind_180447820(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x520);
  *(uint8_t *)(param_2 + 0x573) = 0;
  return;
}

// Unwind@180447880
void Unwind_180447880(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@1804478e0
void Unwind_1804478e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@180447940
void Unwind_180447940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@1804479a0
void Unwind_1804479a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@180447a00
void Unwind_180447a00(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x573) == '\x01') {
    func_0x180001e70(param_2 + 0x200);
  }
  return;
}

// Unwind@180447a70
void Unwind_180447a70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x520);
  *(uint8_t *)(param_2 + 0x574) = 0;
  return;
}

// Unwind@180447ad0
void Unwind_180447ad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@180447b30
void Unwind_180447b30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x575) = 0;
  return;
}

// Unwind@180447b90
void Unwind_180447b90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@180447bf0
void Unwind_180447bf0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x574) == '\x01') {
    func_0x180001e70(param_2 + 0x1e0);
  }
  return;
}

// Unwind@180447c60
void Unwind_180447c60(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x575) == '\x01') {
    func_0x180001e70(param_2 + 0x1c0);
  }
  return;
}

// Unwind@180447cd0
void Unwind_180447cd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  *(uint8_t *)(param_2 + 0x577) = 0;
  return;
}

// Unwind@180447d30
void Unwind_180447d30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x540);
  return;
}

// Unwind@180447d90
void Unwind_180447d90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x576) = 0;
  return;
}

// Unwind@180447df0
void Unwind_180447df0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@180447e50
void Unwind_180447e50(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180447e90
void Unwind_180447e90(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180447ed0
void Unwind_180447ed0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@180447f30
void Unwind_180447f30(uint64_t param_1,int64_t param_2)
{
  func_0x1800a7510(param_2 + 0x2b0);
  return;
}

// Unwind@180447f90
void Unwind_180447f90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@180447ff0
void Unwind_180447ff0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x576) == '\x01') {
    func_0x180001e70(param_2 + 0x1a0);
  }
  return;
}

// Unwind@180448060
void Unwind_180448060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@1804480c0
void Unwind_1804480c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@180448120
void Unwind_180448120(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x577);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x180);
  }
  *(char *)(param_2 + 0x572) = ch_1;
  return;
}

// Unwind@180448190
void Unwind_180448190(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@1804481f0
void Unwind_1804481f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@180448250
void Unwind_180448250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@1804482b0
void Unwind_1804482b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800573d0(param_2 + 0x3c0);
  return;
}

// Unwind@180448310
void Unwind_180448310(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@180448370
void Unwind_180448370(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Catch@1804483d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t Catch_1804483d0(uint64_t param_1,int64_t param_2)
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint8_t (*pArr16_14)[16];
  
  uVal_9 = _UNK_1806b6f3c;
  uVal_8 = _UNK_1806b6f38;
  uVal_7 = PTR_DAT_1806b6f30._4_4_;
  *(uint32_t *)(param_2 + 0xb0) = PTR_DAT_1806b6f30._0_4_;
  *(uint32_t *)(param_2 + 0xb4) = uVal_7;
  *(uint32_t *)(param_2 + 0xb8) = uVal_8;
  *(uint32_t *)(param_2 + 0xbc) = uVal_9;
  pArr16_14 = (uint8_t (*)[16])func_0x180448a10();
  uVal_13 = _UNK_1806c94bc;
  uVal_12 = _UNK_1806c94b8;
  uVal_11 = _UNK_1806c94b4;
  uVal_10 = _DAT_1806c94b0;
  if (pArr16_14[2][6] == '\x01') {
    uVal_3 = *(uint *)pArr16_14[1];
    uVal_4 = *(uint *)(pArr16_14[1] + 4);
    uVal_5 = *(uint *)(pArr16_14[1] + 8);
    uVal_6 = *(uint *)(pArr16_14[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*pArr16_14 + 4) ^ _UNK_1806c94b4;
    auArr_1._0_4_ = *(uint *)*pArr16_14 ^ _DAT_1806c94b0;
    auArr_1._8_4_ = *(uint *)(*pArr16_14 + 8) ^ _UNK_1806c94b8;
    auArr_1._12_4_ = *(uint *)(*pArr16_14 + 0xc) ^ _UNK_1806c94bc;
    *pArr16_14 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_11;
    auArr_2._0_4_ = uVal_3 ^ uVal_10;
    auArr_2._8_4_ = uVal_5 ^ uVal_12;
    auArr_2._12_4_ = uVal_6 ^ uVal_13;
    pArr16_14[1] = auArr_2;
    *(uint *)pArr16_14[2] = *(uint *)pArr16_14[2] ^ 0xad45f141;
    pArr16_14[2][4] = pArr16_14[2][4] ^ 0x5b;
    pArr16_14[2][5] = pArr16_14[2][5] ^ 0x21;
    pArr16_14[2][6] = 0;
  }
  func_0x180001060(param_2 + 0x3a0,pArr16_14);
  func_0x18023e880(param_2 + 0x540,param_2 + 0x3a0,param_2 + 0xb0);
  func_0x18045fe90(param_2 + 0x540);
  func_0x180001e70(param_2 + 0x540);
  func_0x180001e70(param_2 + 0x3a0);
  return 0x180444c77;
}

// Unwind@1804484c0
void Unwind_1804484c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x540);
  return;
}

// Unwind@180448520
void Unwind_180448520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3a0);
  return;
}

// Unwind@180448580
void Unwind_180448580(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x572) == '\x01') {
    func_0x180001e70(param_2 + 0x160);
  }
  return;
}

// Unwind@1804485f0
void Unwind_1804485f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4e0);
  return;
}

// Unwind@180448650
void Unwind_180448650(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3a0);
  return;
}

// Unwind@1804486b0
void Unwind_1804486b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@180448710
void Unwind_180448710(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4e0);
  return;
}

// Unwind@180448770
void Unwind_180448770(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@1804487d0
void Unwind_1804487d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@180448830
void Unwind_180448830(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x540);
  return;
}

// Unwind@180448890
void Unwind_180448890(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@1804488f0
void Unwind_1804488f0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x4d0);
  return;
}

// Unwind@180448950
void Unwind_180448950(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@1804489b0
void Unwind_1804489b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  return;
}

// func_0x180448a10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180448a10(void)
{
  int64_t lVal_1;
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
  local_28 = _DAT_1806cdf24;
  uStack_24 = _UNK_1806cdf28;
  uStack_20 = _UNK_1806cdf2c;
  uStack_1c = (uint16_t)_UNK_1806cdf30;
  local_38 = _DAT_1806cdf14;
  uStack_34 = _UNK_1806cdf18;
  uStack_30 = _UNK_1806cdf1c;
  uStack_2c = _UNK_1806cdf20;
  uStack_1a = 0xd9f2;
  uStack_18 = 0x2135c2369b6f;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               87000) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 87000) = 1;
    func_0x180086e20(lVal_1 + 0x153b1,&local_38);
    func_0x180673140(&LAB_180449190);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x153b1;
}

// Unwind@180448ac0
void Unwind_180448ac0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 87000) = 0;
  return;
}

// func_0x180448af0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180448af0(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  undefined7 uStack_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806ce007;
  uStack_24 = _UNK_1806ce00b;
  uStack_20 = _UNK_1806ce00f;
  uStack_1c = CONCAT13(0x5c,(int3)_UNK_1806ce013);
  uStack_18 = 0xbd94600915873e;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15528) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15528) = 1;
    func_0x18007d3c0(lVal_1 + 0x1550d,&local_28);
    func_0x180673140(&LAB_180449580);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1550d;
}

// Unwind@180448b90
void Unwind_180448b90(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15528) = 0;
  return;
}

// func_0x180448bc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180448bc0(void)
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
  local_28 = _DAT_1806ce02e;
  uStack_24 = _UNK_1806ce032;
  uStack_20 = _UNK_1806ce036;
  uStack_1c = _UNK_1806ce03a;
  local_38 = _DAT_1806ce01e;
  uStack_34 = _UNK_1806ce022;
  uStack_30 = _UNK_1806ce026;
  uStack_2c = _UNK_1806ce02a;
  local_18 = 0x719f9264710e1166;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15554) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15554) = 1;
    func_0x1801b39d0(lVal_1 + 0x15529,&local_38);
    func_0x180673140(&LAB_180449600);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15529;
}

// Unwind@180448c70
void Unwind_180448c70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15554) = 0;
  return;
}

// func_0x180448ca0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180448ca0(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  undefined7 uStack_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806ce046;
  uStack_24 = _UNK_1806ce04a;
  uStack_20 = _UNK_1806ce04e;
  uStack_1c = CONCAT13(0xd4,(int3)_UNK_1806ce052);
  uStack_18 = 0x3b104e53336fe0;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15570) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15570) = 1;
    func_0x18007d3c0(lVal_1 + 0x15555,&local_28);
    func_0x180673140(&LAB_180449630);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15555;
}

// Unwind@180448d40
void Unwind_180448d40(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15570) = 0;
  return;
}

// func_0x180448d70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180448d70(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  undefined7 uStack_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806ce05d;
  uStack_24 = _UNK_1806ce061;
  uStack_20 = _UNK_1806ce065;
  uStack_1c = CONCAT13(0x32,(int3)_UNK_1806ce069);
  uStack_18 = 0x2318aef9ad4588;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1558c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x1558c) = 1;
    func_0x18007d3c0(lVal_1 + 0x15571,&local_28);
    func_0x180673140(&LAB_1804496b0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15571;
}

// Unwind@180448e10
void Unwind_180448e10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1558c) = 0;
  return;
}

// func_0x180448e40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180448e40(void)
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
  uStack_28 = _UNK_1806ce084;
  uStack_25 = _UNK_1806ce087;
  uStack_21 = _UNK_1806ce08b;
  local_38 = _DAT_1806ce074;
  uStack_34 = _UNK_1806ce078;
  uStack_30 = _UNK_1806ce07c;
  uStack_2c = _UNK_1806ce080;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x155ac) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x155ac) = 1;
    func_0x18007c9b0(lVal_1 + 0x1558d,&local_38);
    func_0x180673140(&LAB_180449730);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1558d;
}

// Unwind@180448ee0
void Unwind_180448ee0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x155ac) = 0;
  return;
}

// func_0x180448f40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180448f40(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806c94f4;
    uVal_2 = param_1[2] ^ _UNK_1806c94f8;
    uVal_3 = param_1[3] ^ _UNK_1806c94fc;
    *param_1 = *param_1 ^ _DAT_1806c94f0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x29ff8fad7d41310f;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806c9500,0);
  }
  return;
}

// func_0x180449070
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180449070(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806c951c;
  uVal_9 = _UNK_1806c9518;
  uVal_8 = _UNK_1806c9514;
  uVal_7 = _DAT_1806c9510;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806c9514;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806c9510;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806c9518;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806c951c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x37;
    param_1[2][1] = 0;
  }
  return;
}
