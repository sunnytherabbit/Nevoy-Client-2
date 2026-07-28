#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1803fcaa0
void Unwind_1803fcaa0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fcad0
void Unwind_1803fcad0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fcb00
void Unwind_1803fcb00(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x118);
  return;
}

// func_0x1803fcb40
void func_0x1803fcb40(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(200);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce190;
  pLong_10 = local_58 + 2;
  func_0x180185460(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x5a015ee9;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x5a015ee8 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x5a015ee9) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x5a015ee8 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x5a015eea)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fcd00
void Unwind_1803fcd00(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fcd30
void Unwind_1803fcd30(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fcd60
void Unwind_1803fcd60(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),200);
  return;
}

// func_0x1803fcda0
void func_0x1803fcda0(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x98);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce090;
  pLong_10 = local_58 + 2;
  func_0x180194640(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x15161080;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x1516107f < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x15161080) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x1516107f < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x15161081)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fcf60
void Unwind_1803fcf60(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fcf90
void Unwind_1803fcf90(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fcfc0
void Unwind_1803fcfc0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x98);
  return;
}

// func_0x1803fd000
void func_0x1803fd000(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0xb0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce0d0;
  pLong_10 = local_58 + 2;
  func_0x1801e20d0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x985f8a8e;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (-0x67a07573 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x67a07572) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x67a07573 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x67a07571)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fd1c0
void Unwind_1803fd1c0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fd1f0
void Unwind_1803fd1f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fd220
void Unwind_1803fd220(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xb0);
  return;
}

// func_0x1803fd260
void func_0x1803fd260(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(200);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce190;
  pLong_10 = local_58 + 2;
  func_0x18011dba0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x62399752;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x62399751 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x62399752) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x62399751 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x62399753)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fd420
void Unwind_1803fd420(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fd450
void Unwind_1803fd450(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fd480
void Unwind_1803fd480(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),200);
  return;
}

// func_0x1803fd4c0
void func_0x1803fd4c0(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x110);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce470;
  pLong_10 = local_58 + 2;
  func_0x180219990(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xeca0cfba;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (-0x135f3047 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x135f3046) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x135f3047 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x135f3045)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fd680
void Unwind_1803fd680(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fd6b0
void Unwind_1803fd6b0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fd6e0
void Unwind_1803fd6e0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x110);
  return;
}

// func_0x1803fd720
void func_0x1803fd720(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x160);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce2d0;
  pLong_10 = local_58 + 2;
  func_0x18014f210(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xc26e6318;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (-0x3d919ce9 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x3d919ce8) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x3d919ce9 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x3d919ce7)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fd8e0
void Unwind_1803fd8e0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fd910
void Unwind_1803fd910(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fd940
void Unwind_1803fd940(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x160);
  return;
}

// func_0x1803fd980
void func_0x1803fd980(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x178);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce3d0;
  pLong_10 = local_58 + 2;
  func_0x18031e130(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x9794bd4f;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (-0x686b42b2 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x686b42b1) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x686b42b2 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x686b42b0)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fdb40
void Unwind_1803fdb40(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fdb70
void Unwind_1803fdb70(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fdba0
void Unwind_1803fdba0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x178);
  return;
}

// func_0x1803fdbe0
void func_0x1803fdbe0(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x160);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce2d0;
  pLong_10 = local_58 + 2;
  func_0x18020d4c0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xd04fdcc6;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (-0x2fb0233b < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x2fb0233a) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x2fb0233b < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x2fb02339)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fdda0
void Unwind_1803fdda0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fddd0
void Unwind_1803fddd0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fde00
void Unwind_1803fde00(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x160);
  return;
}

// func_0x1803fde40
void func_0x1803fde40(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x168);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce310;
  pLong_10 = local_58 + 2;
  func_0x180412630(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x29de856;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x29de855 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x29de856) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x29de855 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x29de857)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fe000
void Unwind_1803fe000(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fe030
void Unwind_1803fe030(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fe060
void Unwind_1803fe060(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x168);
  return;
}

// func_0x1803fe0a0
void func_0x1803fe0a0(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x188);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce0f0;
  pLong_10 = local_58 + 2;
  func_0x18032ce60(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xedc91ac8;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (-0x1236e539 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x1236e538) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x1236e539 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x1236e537)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fe260
void Unwind_1803fe260(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fe290
void Unwind_1803fe290(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fe2c0
void Unwind_1803fe2c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x188);
  return;
}

// func_0x1803fe300
void func_0x1803fe300(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x138);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce490;
  pLong_10 = local_58 + 2;
  func_0x1801f2430(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xe6f8ac8e;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (-0x19075373 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x19075372) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x19075373 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x19075371)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fe4c0
void Unwind_1803fe4c0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fe4f0
void Unwind_1803fe4f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fe520
void Unwind_1803fe520(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x138);
  return;
}

// func_0x1803fe560
void func_0x1803fe560(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x1d0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce4b0;
  pLong_10 = local_58 + 2;
  func_0x1802c5a20(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x9835d5a9;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (-0x67ca2a58 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x67ca2a57) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x67ca2a58 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x67ca2a56)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fe720
void Unwind_1803fe720(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fe750
void Unwind_1803fe750(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fe780
void Unwind_1803fe780(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x1d0);
  return;
}

// func_0x1803fe7c0
void func_0x1803fe7c0(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x110);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce470;
  pLong_10 = local_58 + 2;
  func_0x180149a30(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x47de571b;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x47de571a < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x47de571b) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x47de571a < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x47de571c)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fe980
void Unwind_1803fe980(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fe9b0
void Unwind_1803fe9b0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fe9e0
void Unwind_1803fe9e0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x110);
  return;
}

// func_0x1803fea20
void func_0x1803fea20(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0xf0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce2b0;
  pLong_10 = local_58 + 2;
  func_0x1801f8fc0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x6bbfd10;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x6bbfd0f < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x6bbfd10) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x6bbfd0f < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x6bbfd11)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803febe0
void Unwind_1803febe0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fec10
void Unwind_1803fec10(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fec40
void Unwind_1803fec40(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xf0);
  return;
}

// func_0x1803fec80
void func_0x1803fec80(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x338);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce4d0;
  pLong_10 = local_58 + 2;
  func_0x1801a0e40(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x635df1;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x635df0 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x635df1) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x635df0 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x635df2)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803fee40
void Unwind_1803fee40(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fee70
void Unwind_1803fee70(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803feea0
void Unwind_1803feea0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x338);
  return;
}

// func_0x1803feee0
void func_0x1803feee0(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x148);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce4f0;
  pLong_10 = local_58 + 2;
  func_0x180404ac0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x2c63b0d5;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x2c63b0d4 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x2c63b0d5) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x2c63b0d4 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x2c63b0d6)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803ff0a0
void Unwind_1803ff0a0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803ff0d0
void Unwind_1803ff0d0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803ff100
void Unwind_1803ff100(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x148);
  return;
}

// func_0x1803ff140
void func_0x1803ff140(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x160);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce2d0;
  pLong_10 = local_58 + 2;
  func_0x18041e380(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x15060861;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x15060860 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x15060861) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x15060860 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x15060862)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803ff300
void Unwind_1803ff300(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803ff330
void Unwind_1803ff330(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803ff360
void Unwind_1803ff360(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x160);
  return;
}

// func_0x1803ff3a0
void func_0x1803ff3a0(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x158);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce510;
  pLong_10 = local_58 + 2;
  func_0x1802ce320(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xa990272b;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (-0x566fd8d6 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x566fd8d5) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x566fd8d6 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x566fd8d4)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803ff560
void Unwind_1803ff560(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803ff590
void Unwind_1803ff590(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803ff5c0
void Unwind_1803ff5c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x158);
  return;
}

// func_0x1803ff600
void func_0x1803ff600(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0xf0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce2b0;
  pLong_10 = local_58 + 2;
  func_0x1802079f0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xe27f342a;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (-0x1d80cbd7 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x1d80cbd6) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x1d80cbd7 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x1d80cbd5)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803ff7c0
void Unwind_1803ff7c0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803ff7f0
void Unwind_1803ff7f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803ff820
void Unwind_1803ff820(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xf0);
  return;
}

// func_0x1803ff860
void func_0x1803ff860(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0xf0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce2b0;
  pLong_10 = local_58 + 2;
  func_0x180429900(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x186001d9;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x186001d8 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x186001d9) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x186001d8 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x186001da)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803ffa20
void Unwind_1803ffa20(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803ffa50
void Unwind_1803ffa50(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803ffa80
void Unwind_1803ffa80(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xf0);
  return;
}

// func_0x1803ffac0
void func_0x1803ffac0(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0xe0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce210;
  pLong_10 = local_58 + 2;
  func_0x18031f290(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xbb77a2cf;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (-0x44885d32 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x44885d31) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x44885d32 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x44885d30)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803ffc80
void Unwind_1803ffc80(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803ffcb0
void Unwind_1803ffcb0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803ffce0
void Unwind_1803ffce0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xe0);
  return;
}

// func_0x1803ffd20
void func_0x1803ffd20(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x178);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce3d0;
  pLong_10 = local_58 + 2;
  func_0x180341050(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x726e899c;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x726e899b < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x726e899c) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x726e899b < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x726e899d)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1803ffee0
void Unwind_1803ffee0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fff10
void Unwind_1803fff10(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fff40
void Unwind_1803fff40(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x178);
  return;
}

// func_0x1803fff80
void func_0x1803fff80(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x730);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce530;
  pLong_10 = local_58 + 2;
  func_0x1801c4e80(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x3553bee4;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x3553bee3 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x3553bee4) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x3553bee3 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x3553bee5)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@180400140
void Unwind_180400140(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@180400170
void Unwind_180400170(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1804001a0
void Unwind_1804001a0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x730);
  return;
}

// func_0x1804001e0
void func_0x1804001e0(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x1e0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce550;
  pLong_10 = local_58 + 2;
  func_0x1803138e0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xbb5f80fd;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (-0x44a07f04 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x44a07f03) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x44a07f04 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x44a07f02)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1804003a0
void Unwind_1804003a0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1804003d0
void Unwind_1804003d0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@180400400
void Unwind_180400400(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x1e0);
  return;
}

// func_0x180400440
void func_0x180400440(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x110);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce470;
  pLong_10 = local_58 + 2;
  func_0x18019a5d0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x518dd3cb;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x518dd3ca < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x518dd3cb) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x518dd3ca < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x518dd3cc)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@180400600
void Unwind_180400600(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@180400630
void Unwind_180400630(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@180400660
void Unwind_180400660(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x110);
  return;
}

// func_0x1804006a0
void func_0x1804006a0(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0xf0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce2b0;
  pLong_10 = local_58 + 2;
  func_0x1802f4ea0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x2279d8cb;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x2279d8ca < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x2279d8cb) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x2279d8ca < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x2279d8cc)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@180400860
void Unwind_180400860(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@180400890
void Unwind_180400890(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1804008c0
void Unwind_1804008c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xf0);
  return;
}

// func_0x180400900
void func_0x180400900(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x1a0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce290;
  pLong_10 = local_58 + 2;
  func_0x1802039a0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x7fb7f0a9;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x7fb7f0a8 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x7fb7f0a9) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x7fb7f0a8 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x7fb7f0aa)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@180400ac0
void Unwind_180400ac0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@180400af0
void Unwind_180400af0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@180400b20
void Unwind_180400b20(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x1a0);
  return;
}

// func_0x180400b60
void func_0x180400b60(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x158);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce510;
  pLong_10 = local_58 + 2;
  func_0x180415790(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xbc977c14;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (-0x436883ed < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x436883ec) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x436883ed < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x436883eb)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@180400d20
void Unwind_180400d20(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@180400d50
void Unwind_180400d50(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@180400d80
void Unwind_180400d80(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x158);
  return;
}

// func_0x180400dc0
void func_0x180400dc0(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x180);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce570;
  pLong_10 = local_58 + 2;
  func_0x1802f1630(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x3e2513cf;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0x3e2513ce < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x3e2513cf) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x3e2513ce < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x3e2513d0)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@180400f80
void Unwind_180400f80(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@180400fb0
void Unwind_180400fb0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@180400fe0
void Unwind_180400fe0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x180);
  return;
}

// func_0x180401020
void func_0x180401020(int64_t *param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint uVal_12;
  int64_t local_80;
  uint local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = (int64_t *)func_0x180672de0(0x158);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce510;
  pLong_10 = local_58 + 2;
  func_0x180241380(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xad61c8;
  LOCK();
  *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = local_58;
  local_68._0_8_ = pLong_10;
  lVal_4 = *param_1;
  lVal_11 = *(int64_t *)(lVal_4 + 8);
  uVal_12 = 0;
  lVal_8 = lVal_4;
  lVal_5 = lVal_11;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    do {
      lVal_11 = lVal_5;
      iVal_3 = *(int *)(lVal_11 + 0x20);
      if (0xad61c7 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0xad61c8) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0xad61c7 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0xad61c9)) {
    if (local_58 != (int64_t *)0x0) {
      LOCK();
      pLong_10 = local_58 + 1;
      *(int *)pLong_10 = *(int *)pLong_10 + -1;
      UNLOCK();
      if (*(int *)pLong_10 == 0) {
        (**(func_ptr_t *)*local_58)(local_58);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
    }
  }
  else {
    if (param_1[1] == 0x492492492492492) {
      func_0x1800a17e0();
      fnPtr_6 = (func_ptr_t )swi(3);
      (*fnPtr_6)();
      return;
    }
    pLong_9 = (int64_t *)func_0x180672de0(0x38);
    *(uint32_t *)(pLong_9 + 4) = local_70[0];
    pLong_9[5] = (int64_t)pLong_10;
    pLong_9[6] = (int64_t)pLong_7;
    *pLong_9 = lVal_4;
    pLong_9[1] = lVal_4;
    pLong_9[2] = lVal_4;
    *(uint16_t *)(pLong_9 + 3) = 0;
    local_80 = lVal_11;
    local_78 = uVal_12;
    func_0x1800a1550(param_1,&local_80,pLong_9);
  }
  func_0x1804497e0(param_1 + 4,local_70,&local_50);
  pLong_7 = local_48;
  if (local_48 != (int64_t *)0x0) {
    LOCK();
    pLong_10 = local_48 + 1;
    *(int *)pLong_10 = *(int *)pLong_10 + -1;
    UNLOCK();
    if (*(int *)pLong_10 == 0) {
      (**(func_ptr_t *)*local_48)(local_48);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  return;
}

// Unwind@1804011e0
void Unwind_1804011e0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@180401210
void Unwind_180401210(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@180401240
void Unwind_180401240(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x158);
  return;
}

// func_0x180401280
uint8_t (*func_0x180401280(int64_t *param_1,uint8_t (*param_2)[16],int64_t *param_3))[16]
{
  int *pInt_1;
  uint64_t *pU64_2;
  func_ptr_t fnPtr_3;
  int64_t *pLong_4;
  uint uVal_5;
  uint8_t *pU64_6;
  int iVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t *pU64_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint8_t (*pArr16_13)[16];
  uint8_t *_Buf1;
  uint8_t *pU64_14;
  uint *pU64_15;
  uint64_t uVal_16;
  uint64_t *pU64_17;
  uint64_t *pU64_18;
  bool bFlag_19;
  uint local_128;
  uint32_t uStack_124;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  uint32_t local_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t uStack_10c;
  uint8_t (*local_f8)[16];
  int64_t *local_f0;
  uint local_e8;
  uint32_t uStack_e4;
  uint32_t uStack_e0;
  uint32_t uStack_dc;
  uint64_t local_d8;
  uint64_t uStack_d0;
  uint8_t local_c8 [16];
  uint64_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8 [16];
  uint64_t local_98;
  uint64_t local_90;
  uint8_t local_88 [16];
  uint8_t local_78 [24];
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  lVal_11 = *param_3;
  uVal_12 = param_3[1];
  local_a8 = ZEXT816(0);
  local_90 = 0xf;
  if ((int64_t)uVal_12 < 0) {
    func_0x18007ba70();
    goto LAB_180401774;
  }
  if (uVal_12 < 0x10) {
    pU64_14 = local_a8;
    if (uVal_12 != 0) goto LAB_180401325;
  }
  else {
    uVal_8 = uVal_12 | 0xf;
    uVal_16 = 0x16;
    if (0x16 < uVal_8) {
      uVal_16 = uVal_8;
    }
    if (uVal_8 < 0xfff) {
      pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
    }
    else {
      lVal_9 = func_0x180672de0(uVal_16 + 0x28);
      pU64_14 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_14 + -8) = lVal_9;
    }
    local_a8._0_8_ = pU64_14;
    local_90 = uVal_16;
LAB_180401325:
    uVal_16 = 0;
    do {
      iVal_7 = tolower((int)*(char *)(lVal_11 + uVal_16));
      pU64_14[uVal_16] = (char)iVal_7;
      uVal_16 = uVal_16 + 1;
    } while (uVal_12 != uVal_16);
  }
  local_98 = uVal_12;
  pU64_14[uVal_12] = 0;
  uVal_12 = local_98;
  local_78._0_16_ = ZEXT816(0);
  local_88 = ZEXT816(0);
  if (local_90 < 0x10) {
    pArr16_13 = &local_a8;
  }
  else {
    pArr16_13 = (uint8_t (*)[16])local_a8._0_8_;
  }
  if ((int64_t)local_98 < 0) {
LAB_180401774:
    func_0x18007ba70();
    fnPtr_3 = (func_ptr_t )swi(3);
    pArr16_13 = (uint8_t (*)[16])(*fnPtr_3)();
    return pArr16_13;
  }
  local_f8 = param_2;
  if (local_98 < 0x10) {
    local_78._8_8_ = 0xf;
    local_78._0_8_ = local_98;
    local_88 = *pArr16_13;
    uVal_16 = 0xf;
  }
  else {
    uVal_8 = local_98 | 0xf;
    uVal_16 = 0x16;
    if (0x16 < uVal_8) {
      uVal_16 = uVal_8;
    }
    if (uVal_8 < 0xfff) {
      uVal_8 = func_0x180672de0(uVal_16 + 1);
    }
    else {
      lVal_11 = func_0x180672de0(uVal_16 + 0x28);
      uVal_8 = lVal_11 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_8 - 8) = lVal_11;
    }
    local_88._0_8_ = uVal_8;
    local_78._8_8_ = uVal_16;
    local_78._0_8_ = uVal_12;
    func_0x1806aa960(uVal_8,pArr16_13,uVal_12 + 1);
  }
  pU64_2 = (uint64_t *)*param_1;
  pU64_10 = (uint64_t *)*pU64_2;
  local_f0 = param_1;
LAB_180401410:
  pU64_18 = pU64_2;
  if (pU64_10 != pU64_2) {
    (**(func_ptr_t *)(*(int64_t *)pU64_10[5] + 0x18))((int64_t *)pU64_10[5],&local_e8);
    uVal_16 = uStack_d0;
    uVal_12 = local_d8;
    uVal_5 = local_e8;
    local_118 = (uint32_t)local_d8;
    uStack_114 = local_d8._4_4_;
    uStack_110 = (uint32_t)uStack_d0;
    uStack_10c = uStack_d0._4_4_;
    local_128 = local_e8;
    uStack_124 = uStack_e4;
    uStack_120 = uStack_e0;
    uStack_11c = uStack_dc;
    local_d8 = 0;
    uStack_d0 = 0xf;
    local_e8 = local_e8 & 0xffffff00;
    local_c8 = ZEXT816(0);
    pU64_15 = &local_128;
    if (0xf < uVal_16) {
      pU64_15 = (uint *)CONCAT44(uStack_e4,uVal_5);
    }
    local_b0 = 0xf;
    if ((int64_t)uVal_12 < 0) {
      func_0x18007ba70();
      goto LAB_18040176c;
    }
    if (uVal_12 < 0x10) {
      pU64_14 = local_c8;
      if (uVal_12 != 0) goto LAB_1804014e5;
    }
    else {
      uVal_8 = uVal_12 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_8) {
        uVal_16 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_14;
      local_b0 = uVal_16;
LAB_1804014e5:
      uVal_16 = 0;
      do {
        iVal_7 = tolower((int)*(char *)((int64_t)pU64_15 + uVal_16));
        pU64_14[uVal_16] = (char)iVal_7;
        uVal_16 = uVal_16 + 1;
      } while (uVal_12 != uVal_16);
    }
    local_b8 = uVal_12;
    pU64_14[uVal_12] = 0;
    uVal_12 = CONCAT44(uStack_10c,uStack_110);
    if (0xf < uVal_12) {
      lVal_9 = CONCAT44(uStack_124,local_128);
      uVal_16 = uVal_12 + 1;
      lVal_11 = lVal_9;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(lVal_9 + -8);
        if (0x1f < (uint64_t)((lVal_9 + -8) - lVal_11)) goto LAB_18040176c;
        uVal_16 = uVal_12 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    if (0xf < uStack_d0) {
      lVal_9 = CONCAT44(uStack_e4,local_e8);
      uVal_12 = uStack_d0 + 1;
      lVal_11 = lVal_9;
      if (0xfff < uVal_12) {
        lVal_11 = *(int64_t *)(lVal_9 + -8);
        if (0x1f < (uint64_t)((lVal_9 + -8) - lVal_11)) goto LAB_18040176c;
        uVal_12 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_12);
    }
    uVal_12 = local_b0;
    uVal_16 = local_78._8_8_;
    pU64_14 = local_88;
    if (0xf < (uint64_t)local_78._8_8_) {
      pU64_14 = (uint8_t *)local_88._0_8_;
    }
    pU64_6 = (uint8_t *)local_c8._0_8_;
    _Buf1 = local_c8;
    if (0xf < local_b0) {
      _Buf1 = (uint8_t *)local_c8._0_8_;
    }
    if (local_b8 == local_78._0_8_) {
      if (local_78._0_8_ == 0) {
        bFlag_19 = true;
      }
      else {
        iVal_7 = memcmp(_Buf1,pU64_14,local_78._0_8_);
        bFlag_19 = iVal_7 == 0;
      }
    }
    else {
      bFlag_19 = false;
    }
    if (0xf < uVal_12) {
      uVal_8 = uVal_12 + 1;
      pU64_14 = pU64_6;
      if (0xfff < uVal_8) {
        pU64_14 = *(uint8_t **)(pU64_6 + -8);
        if ((uint8_t *)0x1f < pU64_6 + (-8 - (int64_t)pU64_14)) goto LAB_18040176c;
        uVal_8 = uVal_12 + 0x28;
      }
      thunk_FUN_180695dd0(pU64_14,uVal_8);
    }
    pU64_18 = pU64_10;
    if (bFlag_19) goto LAB_180401694;
    pU64_18 = (uint64_t *)pU64_10[2];
    pU64_17 = pU64_10;
    if (*(char *)((int64_t)(uint64_t *)pU64_10[2] + 0x19) == '\0') {
      do {
        pU64_10 = pU64_18;
        pU64_18 = (uint64_t *)*pU64_10;
      } while (*(char *)((int64_t)(uint64_t *)*pU64_10 + 0x19) == '\0');
    }
    else {
      do {
        pU64_10 = (uint64_t *)pU64_17[1];
        if (*(char *)((int64_t)pU64_10 + 0x19) != '\0') break;
        bFlag_19 = pU64_17 == (uint64_t *)pU64_10[2];
        pU64_17 = pU64_10;
      } while (bFlag_19);
    }
    goto LAB_180401410;
  }
LAB_180401694:
  pLong_4 = local_f0;
  pArr16_13 = local_f8;
  if (0xf < uVal_16) {
    uVal_12 = uVal_16 + 1;
    lVal_11 = local_88._0_8_;
    if (0xfff < uVal_12) {
      lVal_11 = *(int64_t *)(local_88._0_8_ + -8);
      if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_11)) goto LAB_18040176c;
      uVal_12 = uVal_16 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_12);
  }
  if (pU64_18 == (uint64_t *)*pLong_4) {
    *pArr16_13 = ZEXT816(0);
  }
  else {
    *pArr16_13 = ZEXT816(0);
    if (pU64_18[6] != 0) {
      LOCK();
      pInt_1 = (int *)(pU64_18[6] + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
    }
    *(uint64_t *)*pArr16_13 = pU64_18[5];
    *(uint64_t *)(*pArr16_13 + 8) = pU64_18[6];
  }
  if (0xf < local_90) {
    uVal_12 = local_90 + 1;
    lVal_11 = local_a8._0_8_;
    if (0xfff < uVal_12) {
      lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
      if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) {
LAB_18040176c:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_12 = local_90 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_12);
  }
  return pArr16_13;
}

// Unwind@180401780
void Unwind_180401780(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1804017c0
void Unwind_1804017c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@180401800
void Unwind_180401800(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x180401850
uint8_t (*func_0x180401850(int64_t *param_1,uint8_t (*param_2)[16],int param_3))[16]
{
  int *pInt_1;
  char ch_2;
  char ch_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  int64_t lVal_7;
  uint8_t (*pArr16_8)[16];
  uint64_t uVal_9;
  int64_t lVal_10;
  
  if (*(char *)(param_1 + 2) != '\0') {
    lVal_7 = *param_1;
    lVal_4 = *(int64_t *)(lVal_7 + 8);
    ch_2 = *(char *)(lVal_4 + 0x19);
    lVal_10 = lVal_7;
    lVal_5 = lVal_4;
    ch_3 = ch_2;
    while (ch_3 == '\0') {
      if (param_3 <= *(int *)(lVal_5 + 0x20)) {
        lVal_10 = lVal_5;
      }
      lVal_5 = *(int64_t *)(lVal_5 + (uint64_t)(*(int *)(lVal_5 + 0x20) < param_3) * 0x10);
      ch_3 = *(char *)(lVal_5 + 0x19);
    }
    if ((*(char *)(lVal_10 + 0x19) == '\0') && (*(int *)(lVal_10 + 0x20) <= param_3)) {
      while (ch_2 == '\0') {
        if (param_3 <= *(int *)(lVal_4 + 0x20)) {
          lVal_7 = lVal_4;
        }
        lVal_4 = *(int64_t *)(lVal_4 + (uint64_t)(*(int *)(lVal_4 + 0x20) < param_3) * 0x10);
        ch_2 = *(char *)(lVal_4 + 0x19);
      }
      if ((*(char *)(lVal_7 + 0x19) == '\0') && (*(int *)(lVal_7 + 0x20) <= param_3)) {
        *param_2 = ZEXT816(0);
        if (*(int64_t *)(lVal_7 + 0x30) == 0) {
          uVal_9 = 0;
        }
        else {
          LOCK();
          pInt_1 = (int *)(*(int64_t *)(lVal_7 + 0x30) + 8);
          *pInt_1 = *pInt_1 + 1;
          UNLOCK();
          uVal_9 = *(uint64_t *)(lVal_7 + 0x30);
        }
        *(uint64_t *)*param_2 = *(uint64_t *)(lVal_7 + 0x28);
        *(uint64_t *)(*param_2 + 8) = uVal_9;
        return param_2;
      }
      func_0x1806744f0("invalid map<K, T> key");
      fnPtr_6 = (func_ptr_t )swi(3);
      pArr16_8 = (uint8_t (*)[16])(*fnPtr_6)();
      return pArr16_8;
    }
  }
  *param_2 = ZEXT816(0);
  return param_2;
}

// func_0x180401930
void func_0x180401930(int64_t *param_1,uint64_t param_2)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 3));
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    pU64_6 = pU64_5;
    if (pU64_6 == pU64_1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 3));
      return;
    }
    pLong_4 = (int64_t *)pU64_6[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_6[5];
        goto LAB_1804019b4;
      }
    }
    else {
LAB_1804019b4:
      (**(func_ptr_t *)(*pLong_4 + 0x38))(pLong_4,param_2);
    }
    pU64_2 = (uint64_t *)pU64_6[2];
    if (*(char *)((int64_t)(uint64_t *)pU64_6[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@180401a10
void Unwind_180401a10(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x28));
  return;
}

// func_0x180401a40
void func_0x180401a40(int64_t *param_1,uint64_t param_2)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 3));
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    pU64_6 = pU64_5;
    if (pU64_6 == pU64_1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 3));
      return;
    }
    pLong_4 = (int64_t *)pU64_6[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_6[5];
        goto LAB_180401ac4;
      }
    }
    else {
LAB_180401ac4:
      (**(func_ptr_t *)(*pLong_4 + 0x40))(pLong_4,param_2);
    }
    pU64_2 = (uint64_t *)pU64_6[2];
    if (*(char *)((int64_t)(uint64_t *)pU64_6[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@180401b20
void Unwind_180401b20(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x28));
  return;
}

// func_0x180401b50
void func_0x180401b50(int64_t *param_1,uint32_t param_2,uint32_t param_3,uint64_t param_4)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  uint64_t *pU64_4;
  bool bFlag_5;
  PSRWLOCK SRWLock;
  uint64_t uVal_6;
  
  uVal_6 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  SRWLock = (PSRWLOCK)(param_1 + 3);
  AcquireSRWLockShared(SRWLock);
  pU64_1 = (uint64_t *)*param_1;
  pU64_3 = (uint64_t *)*pU64_1;
  do {
    while( true ) {
      pU64_4 = pU64_3;
      if (pU64_4 == pU64_1) {
        ReleaseSRWLockShared(SRWLock);
        return;
      }
      (**(func_ptr_t *)(*(int64_t *)pU64_4[5] + 0x48))
                ((int64_t *)pU64_4[5],param_2,param_3,param_4,SRWLock,uVal_6);
      pU64_2 = (uint64_t *)pU64_4[2];
      if (*(char *)((int64_t)(uint64_t *)pU64_4[2] + 0x19) != '\0') break;
      do {
        pU64_3 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_3;
      } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
    }
    do {
      pU64_3 = (uint64_t *)pU64_4[1];
      if (*(char *)((int64_t)pU64_3 + 0x19) != '\0') break;
      bFlag_5 = pU64_4 == (uint64_t *)pU64_3[2];
      pU64_4 = pU64_3;
    } while (bFlag_5);
  } while( true );
}

// Unwind@180401c20
void Unwind_180401c20(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x20));
  return;
}

// func_0x180401c50
void func_0x180401c50(int64_t *param_1,uint32_t param_2,uint32_t param_3,uint64_t param_4)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 3));
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    if (pU64_5 == pU64_1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 3));
      return;
    }
    pLong_4 = (int64_t *)pU64_5[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_5[5];
        goto LAB_180401cd4;
      }
    }
    else {
LAB_180401cd4:
      (**(func_ptr_t *)(*pLong_4 + 0x50))(pLong_4,param_2,param_3,param_4);
    }
    pU64_2 = (uint64_t *)pU64_5[2];
    pU64_6 = pU64_5;
    if (*(char *)((int64_t)(uint64_t *)pU64_5[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)(uint64_t *)*pU64_5 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@180401d30
void Unwind_180401d30(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x28));
  return;
}

// func_0x180401d60
void func_0x180401d60(int64_t *param_1,uint64_t param_2)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 3));
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    pU64_6 = pU64_5;
    if (pU64_6 == pU64_1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 3));
      return;
    }
    pLong_4 = (int64_t *)pU64_6[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_6[5];
        goto LAB_180401de4;
      }
    }
    else {
LAB_180401de4:
      (**(func_ptr_t *)(*pLong_4 + 0x68))(pLong_4,param_2);
    }
    pU64_2 = (uint64_t *)pU64_6[2];
    if (*(char *)((int64_t)(uint64_t *)pU64_6[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@180401e40
void Unwind_180401e40(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x28));
  return;
}

// func_0x180401e70
void func_0x180401e70(int64_t *param_1,uint64_t param_2)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 3));
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    pU64_6 = pU64_5;
    if (pU64_6 == pU64_1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 3));
      return;
    }
    pLong_4 = (int64_t *)pU64_6[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_6[5];
        goto LAB_180401ef4;
      }
    }
    else {
LAB_180401ef4:
      (**(func_ptr_t *)(*pLong_4 + 0x70))(pLong_4,param_2);
    }
    pU64_2 = (uint64_t *)pU64_6[2];
    if (*(char *)((int64_t)(uint64_t *)pU64_6[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@180401f50
void Unwind_180401f50(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x28));
  return;
}

// func_0x180401f80
void func_0x180401f80(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  PSRWLOCK SRWLock;
  uint64_t uVal_8;
  
  uVal_8 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  SRWLock = (PSRWLOCK)(param_1 + 3);
  AcquireSRWLockShared(SRWLock);
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    if (pU64_5 == pU64_1) {
      ReleaseSRWLockShared(SRWLock);
      return;
    }
    pLong_4 = (int64_t *)pU64_5[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_5[5];
        goto LAB_180402004;
      }
    }
    else {
LAB_180402004:
      (**(func_ptr_t *)(*pLong_4 + 0xb0))(pLong_4,param_2,param_3,param_4,SRWLock,uVal_8);
    }
    pU64_2 = (uint64_t *)pU64_5[2];
    pU64_6 = pU64_5;
    if (*(char *)((int64_t)(uint64_t *)pU64_5[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)(uint64_t *)*pU64_5 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@180402060
void Unwind_180402060(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x20));
  return;
}

// func_0x180402090
void func_0x180402090(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  PSRWLOCK SRWLock;
  uint64_t uVal_8;
  
  uVal_8 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  SRWLock = (PSRWLOCK)(param_1 + 3);
  AcquireSRWLockShared(SRWLock);
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    if (pU64_5 == pU64_1) {
      ReleaseSRWLockShared(SRWLock);
      return;
    }
    pLong_4 = (int64_t *)pU64_5[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_5[5];
        goto LAB_180402114;
      }
    }
    else {
LAB_180402114:
      (**(func_ptr_t *)(*pLong_4 + 0xa8))(pLong_4,param_2,param_3,param_4,SRWLock,uVal_8);
    }
    pU64_2 = (uint64_t *)pU64_5[2];
    pU64_6 = pU64_5;
    if (*(char *)((int64_t)(uint64_t *)pU64_5[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)(uint64_t *)*pU64_5 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@180402170
void Unwind_180402170(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x20));
  return;
}

// func_0x1804021a0
void func_0x1804021a0(int64_t *param_1,uint64_t param_2)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 3));
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    pU64_6 = pU64_5;
    if (pU64_6 == pU64_1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 3));
      return;
    }
    pLong_4 = (int64_t *)pU64_6[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_6[5];
        goto LAB_180402224;
      }
    }
    else {
LAB_180402224:
      (**(func_ptr_t *)(*pLong_4 + 0xc0))(pLong_4,param_2);
    }
    pU64_2 = (uint64_t *)pU64_6[2];
    if (*(char *)((int64_t)(uint64_t *)pU64_6[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@180402280
void Unwind_180402280(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x28));
  return;
}

// func_0x1804022b0
void func_0x1804022b0(int64_t *param_1,uint64_t param_2)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 3));
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    pU64_6 = pU64_5;
    if (pU64_6 == pU64_1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 3));
      return;
    }
    pLong_4 = (int64_t *)pU64_6[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_6[5];
        goto LAB_180402334;
      }
    }
    else {
LAB_180402334:
      (**(func_ptr_t *)(*pLong_4 + 200))(pLong_4,param_2);
    }
    pU64_2 = (uint64_t *)pU64_6[2];
    if (*(char *)((int64_t)(uint64_t *)pU64_6[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@180402390
void Unwind_180402390(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x28));
  return;
}

// func_0x1804023c0
void func_0x1804023c0(int64_t *param_1)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 3));
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    pU64_6 = pU64_5;
    if (pU64_6 == pU64_1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 3));
      return;
    }
    pLong_4 = (int64_t *)pU64_6[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_6[5];
        goto LAB_180402434;
      }
    }
    else {
LAB_180402434:
      (**(func_ptr_t *)(*pLong_4 + 0x78))();
    }
    pU64_2 = (uint64_t *)pU64_6[2];
    if (*(char *)((int64_t)(uint64_t *)pU64_6[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@180402490
void Unwind_180402490(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x20));
  return;
}

// func_0x1804024c0
void func_0x1804024c0(int64_t *param_1,uint64_t param_2)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 3));
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    pU64_6 = pU64_5;
    if (pU64_6 == pU64_1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 3));
      return;
    }
    pLong_4 = (int64_t *)pU64_6[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_6[5];
        goto LAB_180402544;
      }
    }
    else {
LAB_180402544:
      (**(func_ptr_t *)(*pLong_4 + 0x80))(pLong_4,param_2);
    }
    pU64_2 = (uint64_t *)pU64_6[2];
    if (*(char *)((int64_t)(uint64_t *)pU64_6[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@1804025a0
void Unwind_1804025a0(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x28));
  return;
}

// func_0x1804025d0
void func_0x1804025d0(int64_t *param_1,uint32_t param_2,uint64_t param_3)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    pU64_1 = (uint64_t *)*param_1;
    pU64_5 = (uint64_t *)*pU64_1;
joined_r0x0001804025ec:
    pU64_6 = pU64_5;
    if (pU64_6 != pU64_1) {
      pLong_4 = (int64_t *)pU64_6[5];
      if (*(char *)(pLong_4 + 8) == '\0') {
        ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
        if (ch_3 != '\0') {
          pLong_4 = (int64_t *)pU64_6[5];
          goto LAB_180402623;
        }
      }
      else {
LAB_180402623:
        (**(func_ptr_t *)(*pLong_4 + 0xd8))(pLong_4,param_2,param_3);
      }
      pU64_2 = (uint64_t *)pU64_6[2];
      if (*(char *)((int64_t)(uint64_t *)pU64_6[2] + 0x19) == '\0') {
        do {
          pU64_5 = pU64_2;
          pU64_2 = (uint64_t *)*pU64_5;
        } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
      }
      else {
        do {
          pU64_5 = (uint64_t *)pU64_6[1];
          if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
          bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
          pU64_6 = pU64_5;
        } while (bFlag_7);
      }
      goto joined_r0x0001804025ec;
    }
  }
  return;
}

// func_0x180402680
void func_0x180402680(int64_t *param_1,uint32_t param_2,uint32_t param_3,uint64_t param_4)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 3));
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    pU64_6 = pU64_5;
    if (pU64_6 == pU64_1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 3));
      return;
    }
    (**(func_ptr_t *)(*(int64_t *)pU64_6[5] + 0xe8))((int64_t *)pU64_6[5],param_2,param_3);
    pLong_4 = (int64_t *)pU64_6[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_6[5];
        goto LAB_180402717;
      }
    }
    else {
LAB_180402717:
      (**(func_ptr_t *)(*pLong_4 + 0xf0))(pLong_4,param_2,param_3,param_4);
    }
    pU64_2 = (uint64_t *)pU64_6[2];
    if (*(char *)((int64_t)(uint64_t *)pU64_6[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@180402780
void Unwind_180402780(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x28));
  return;
}

// func_0x1804027b0
void func_0x1804027b0(int64_t *param_1,uint32_t param_2,uint32_t param_3,uint64_t param_4)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 3));
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    pU64_6 = pU64_5;
    if (pU64_6 == pU64_1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 3));
      return;
    }
    (**(func_ptr_t *)(*(int64_t *)pU64_6[5] + 0xf8))((int64_t *)pU64_6[5],param_2,param_3);
    pLong_4 = (int64_t *)pU64_6[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_6[5];
        goto LAB_180402847;
      }
    }
    else {
LAB_180402847:
      (**(func_ptr_t *)(*pLong_4 + 0x100))(pLong_4,param_2,param_3,param_4);
    }
    pU64_2 = (uint64_t *)pU64_6[2];
    if (*(char *)((int64_t)(uint64_t *)pU64_6[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@1804028b0
void Unwind_1804028b0(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x28));
  return;
}

// func_0x1804028e0
void func_0x1804028e0(int64_t *param_1,uint64_t param_2)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 3));
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    pU64_6 = pU64_5;
    if (pU64_6 == pU64_1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 3));
      return;
    }
    pLong_4 = (int64_t *)pU64_6[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_6[5];
        goto LAB_180402964;
      }
    }
    else {
LAB_180402964:
      (**(func_ptr_t *)(*pLong_4 + 0x108))(pLong_4,param_2);
    }
    pU64_2 = (uint64_t *)pU64_6[2];
    if (*(char *)((int64_t)(uint64_t *)pU64_6[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@1804029c0
void Unwind_1804029c0(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x28));
  return;
}

// func_0x1804029f0
void func_0x1804029f0(int64_t *param_1,uint64_t param_2)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  bool bFlag_7;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 3));
  pU64_1 = (uint64_t *)*param_1;
  pU64_5 = (uint64_t *)*pU64_1;
  do {
    pU64_6 = pU64_5;
    if (pU64_6 == pU64_1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 3));
      return;
    }
    pLong_4 = (int64_t *)pU64_6[5];
    if (*(char *)(pLong_4 + 8) == '\0') {
      ch_3 = (**(func_ptr_t *)(*pLong_4 + 0xb8))();
      if (ch_3 != '\0') {
        pLong_4 = (int64_t *)pU64_6[5];
        goto LAB_180402a74;
      }
    }
    else {
LAB_180402a74:
      (**(func_ptr_t *)(*pLong_4 + 0x118))(pLong_4,param_2);
    }
    pU64_2 = (uint64_t *)pU64_6[2];
    if (*(char *)((int64_t)(uint64_t *)pU64_6[2] + 0x19) == '\0') {
      do {
        pU64_5 = pU64_2;
        pU64_2 = (uint64_t *)*pU64_5;
      } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
    }
    else {
      do {
        pU64_5 = (uint64_t *)pU64_6[1];
        if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
        bFlag_7 = pU64_6 == (uint64_t *)pU64_5[2];
        pU64_6 = pU64_5;
      } while (bFlag_7);
    }
  } while( true );
}

// Unwind@180402ad0
void Unwind_180402ad0(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x28));
  return;
}

// func_0x180402b00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180402b00(uint64_t *param_1,uint64_t *param_2)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint32_t uVal_3;
  uint64_t *pU64_4;
  func_ptr_t fnPtr_5;
  uint8_t auArr_6 [16];
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint8_t auArr_12 [16];
  char *_Str;
  char ch_13;
  char ch_14;
  uint64_t *pU64_15;
  int64_t lVal_16;
  uint8_t *pU64_17;
  uint64_t uVal_18;
  size_t sz_19;
  uint64_t uVal_20;
  int64_t lVal_21;
  uint64_t *pU64_22;
  int64_t *pLong_23;
  uint64_t *pU64_24;
  uint64_t *pU64_25;
  int64_t lVal_26;
  uint8_t *pU64_27;
  uint8_t *pU64_28;
  bool bFlag_29;
  uint8_t auArr_30 [16];
  uint8_t local_168 [32];
  uint64_t local_148;
  int64_t *local_140;
  uint64_t *local_138;
  char *local_130;
  uint8_t (*local_128)[16];
  PSRWLOCK local_120;
  uint8_t local_118 [16];
  uint8_t local_108 [24];
  int64_t *local_f0;
  uint8_t local_e8 [16];
  uint8_t local_d8 [16];
  uint8_t *local_c8;
  uint64_t uStack_c0;
  uint64_t local_b8;
  uint64_t uStack_b0;
  uint8_t local_a8;
  uint8_t local_a1;
  uint64_t local_a0;
  
  local_a0 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 2) == '\x01') {
    local_120 = (PSRWLOCK)(param_1 + 3);
    AcquireSRWLockShared(local_120);
    auArr_12 = _DAT_1806c9050;
    uVal_11 = _UNK_1806c904c;
    uVal_10 = _UNK_1806c9048;
    uVal_9 = _UNK_1806c9044;
    uVal_8 = _DAT_1806c9040;
    uVal_7 = DAT_1806ae650;
    auArr_6 = _DAT_1806ae110;
    local_138 = (uint64_t *)*param_1;
    pU64_15 = (uint64_t *)*local_138;
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    local_130 = (char *)(lVal_16 + 0x13ff1);
    local_128 = (uint8_t (*)[16])(lVal_16 + 0x14020);
LAB_180402bd0:
    if (pU64_15 != local_138) {
      lVal_16 = pU64_15[5];
      if (*(char *)(lVal_16 + 0x40) == '\x01') {
        local_c8 = &DAT_28d478d88fb3dcdf;
        DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
        if (DAT_180840a60 == 0) {
          DAT_180840a68 = 0;
          lVal_21 = param_2[2];
joined_r0x000180402d6b:
          if (lVal_21 == 0) goto LAB_1804039a0;
        }
        else {
          local_c8 = (uint8_t *)0x186e75fd59d743a9;
          if (*(int64_t *)(*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70)
              == 0) {
            lVal_21 = param_2[2];
            goto joined_r0x000180402d6b;
          }
        }
        pU64_25 = *(uint64_t **)(lVal_16 + 0x70);
        for (pU64_22 = *(uint64_t **)(lVal_16 + 0x68); pU64_22 != pU64_25; pU64_22 = pU64_22 + 4) {
          uVal_18 = param_2[2];
          if (uVal_18 == 0) {
LAB_180402e14:
            lVal_16 = *(int64_t *)
                      (*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70);
            if (*(int64_t *)(lVal_16 + 0x430) == 0) {
              local_c8 = (uint8_t *)0x185dd108334994f2;
              lVal_21 = 0x400;
              uVal_18 = pU64_22[2];
              uVal_20 = pU64_22[3];
            }
            else {
              local_c8 = &DAT_18615f6ca6ec3ae1;
              lVal_21 = 0x420;
              uVal_18 = pU64_22[2];
              uVal_20 = pU64_22[3];
            }
            pU64_24 = pU64_22;
            if (0xf < uVal_20) {
              pU64_24 = (uint64_t *)*pU64_22;
            }
            uVal_20 = *(uint64_t *)(lVal_21 + 0x10 + lVal_16);
            if (*(uint64_t *)(lVal_21 + 0x18 + lVal_16) < 0x10) {
              lVal_21 = lVal_21 + lVal_16;
            }
            else {
              lVal_21 = *(int64_t *)(lVal_21 + lVal_16);
            }
            if ((uVal_18 <= uVal_20) &&
               ((uVal_18 == 0 ||
                (lVal_26 = uVal_20 + lVal_21, lVal_16 = thunk_FUN_180676d20(lVal_21,lVal_26,pU64_24),
                lVal_16 != lVal_26 && lVal_16 - lVal_21 != -1)))) {
LAB_18040305e:
              pLong_23 = (int64_t *)pU64_15[5];
              if (*(char *)(pLong_23 + 8) == '\0') goto LAB_180403677;
              *(uint8_t *)(pLong_23 + 8) = 0;
              func_0x1801dbc50(pLong_23);
              local_e8 = ZEXT816(0);
              local_d8 = ZEXT816(0xf) << 0x40;
              local_c8 = &DAT_28d478d88fb3dcdf;
              DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
              local_f0 = pLong_23;
              if (DAT_180840a60 == 0) {
                DAT_180840a68 = 0;
joined_r0x000180403217:
                if (local_d8._0_8_ == 0) goto LAB_18040321d;
              }
              else {
                local_c8 = (uint8_t *)0x186e75fd59d743a9;
                if (*(int64_t *)
                     (*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70) == 0)
                goto joined_r0x000180403217;
              }
              pU64_22 = (uint64_t *)pLong_23[0xd];
              pU64_25 = (uint64_t *)pLong_23[0xe];
              goto LAB_180403344;
            }
          }
          else {
            if ((uint64_t)pU64_22[3] < 0x10) {
              pU64_24 = pU64_22;
              if ((uint64_t)param_2[3] < 0x10) goto LAB_180402daa;
LAB_180402dce:
              pU64_4 = (uint64_t *)*param_2;
              uVal_20 = pU64_22[2];
            }
            else {
              pU64_24 = (uint64_t *)*pU64_22;
              if (0xf < (uint64_t)param_2[3]) goto LAB_180402dce;
LAB_180402daa:
              uVal_20 = pU64_22[2];
              pU64_4 = param_2;
            }
            if (uVal_20 <= uVal_18) {
              if ((uVal_20 == 0) ||
                 (lVal_16 = thunk_FUN_180676d20(pU64_4,uVal_18 + (int64_t)pU64_4,pU64_24),
                 lVal_16 != uVal_18 + (int64_t)pU64_4 && lVal_16 - (int64_t)pU64_4 != -1))
              goto LAB_18040305e;
              if (param_2[2] == 0) goto LAB_180402e14;
            }
          }
        }
      }
      goto LAB_1804039a0;
    }
    ReleaseSRWLockShared(local_120);
  }
  return;
LAB_180403344:
  if (pU64_22 == pU64_25) goto LAB_18040321d;
  if (local_d8._0_8_ == 0) {
LAB_1804033d5:
    lVal_16 = *(int64_t *)(*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70);
    if (*(int64_t *)(lVal_16 + 0x430) == 0) {
      local_c8 = (uint8_t *)0x185dd108334994f2;
      lVal_21 = 0x400;
      uVal_18 = pU64_22[2];
      uVal_20 = pU64_22[3];
    }
    else {
      local_c8 = &DAT_18615f6ca6ec3ae1;
      lVal_21 = 0x420;
      uVal_18 = pU64_22[2];
      uVal_20 = pU64_22[3];
    }
    pU64_24 = pU64_22;
    if (0xf < uVal_20) {
      pU64_24 = (uint64_t *)*pU64_22;
    }
    uVal_20 = *(uint64_t *)(lVal_21 + 0x10 + lVal_16);
    if (*(uint64_t *)(lVal_21 + 0x18 + lVal_16) < 0x10) {
      lVal_21 = lVal_21 + lVal_16;
    }
    else {
      lVal_21 = *(int64_t *)(lVal_21 + lVal_16);
    }
    if ((uVal_18 <= uVal_20) &&
       ((uVal_18 == 0 ||
        (lVal_26 = uVal_20 + lVal_21, lVal_16 = thunk_FUN_180676d20(lVal_21,lVal_26,pU64_24),
        lVal_16 != lVal_26 && lVal_16 - lVal_21 != -1)))) {
LAB_18040361e:
      pLong_23 = local_f0;
      goto LAB_180403626;
    }
  }
  else {
    if ((uint64_t)pU64_22[3] < 0x10) {
      pU64_24 = pU64_22;
      if ((uint64_t)local_d8._8_8_ < 0x10) goto LAB_18040336b;
LAB_18040338e:
      uVal_18 = pU64_22[2];
      pU64_28 = (uint8_t *)local_e8._0_8_;
    }
    else {
      pU64_24 = (uint64_t *)*pU64_22;
      if (0xf < (uint64_t)local_d8._8_8_) goto LAB_18040338e;
LAB_18040336b:
      pU64_28 = local_e8;
      uVal_18 = pU64_22[2];
    }
    if (uVal_18 <= (uint64_t)local_d8._0_8_) {
      if ((uVal_18 == 0) ||
         (pU64_27 = pU64_28 + local_d8._0_8_,
         pU64_17 = (uint8_t *)thunk_FUN_180676d20(pU64_28,pU64_27,pU64_24),
         pU64_17 != pU64_27 && (int64_t)pU64_17 - (int64_t)pU64_28 != -1)) goto LAB_18040361e;
      if (local_d8._0_8_ == 0) goto LAB_1804033d5;
    }
  }
  pU64_22 = pU64_22 + 4;
  goto LAB_180403344;
LAB_18040321d:
  pLong_23 = local_f0;
  (**(func_ptr_t *)(*local_f0 + 0x10))(local_f0,&local_c8);
  ch_13 = func_0x180052940(&local_c8);
  ch_14 = '\x01';
  if (ch_13 == '\0') {
    (**(func_ptr_t *)(*pLong_23 + 0x18))(pLong_23,local_118);
    ch_14 = func_0x180052a50(local_118);
    if (0xf < (uint64_t)local_108._8_8_) {
      uVal_18 = local_108._8_8_ + 1;
      lVal_16 = local_118._0_8_;
      if (0xfff < uVal_18) {
        lVal_16 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_16)) {
LAB_180403ab1:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_18 = local_108._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_18);
    }
  }
  if (0xf < uStack_b0) {
    uVal_18 = uStack_b0 + 1;
    pU64_28 = local_c8;
    if (0xfff < uVal_18) {
      pU64_28 = *(uint8_t **)(local_c8 + -8);
      if ((uint8_t *)0x1f < local_c8 + (-8 - (int64_t)pU64_28)) goto LAB_180403ab1;
      uVal_18 = uStack_b0 + 0x28;
    }
    thunk_FUN_180695dd0(pU64_28,uVal_18);
  }
  if (ch_14 == '\0') {
    if (0xf < (uint64_t)local_d8._8_8_) {
      uVal_18 = local_d8._8_8_ + 1;
      lVal_16 = local_e8._0_8_;
      if (0xfff < uVal_18) {
        lVal_16 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_16)) goto LAB_180403ab1;
        uVal_18 = local_d8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_18);
    }
    func_0x1801dc7a0(pLong_23,0);
  }
  else {
LAB_180403626:
    if (0xf < (uint64_t)local_d8._8_8_) {
      uVal_18 = local_d8._8_8_ + 1;
      lVal_16 = local_e8._0_8_;
      if (0xfff < uVal_18) {
        lVal_16 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_16)) goto LAB_180403ab1;
        uVal_18 = local_d8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_18);
    }
    func_0x1801dc7a0(pLong_23,0);
  }
  (**(func_ptr_t *)(*pLong_23 + 0x60))(pLong_23);
LAB_180403677:
  if (DAT_18083a188 == '\x01') {
    (**(func_ptr_t *)(*(int64_t *)pU64_15[5] + 0x10))((int64_t *)pU64_15[5],local_168);
    local_b8 = CONCAT44(_UNK_1806cc8ef,_DAT_1806cc8eb);
    uStack_b0 = CONCAT44(_UNK_1806cc8f7,_UNK_1806cc8f3);
    local_c8 = _DAT_1806cc8db;
    uStack_c0 = _UNK_1806cc8e3;
    local_a8 = 0x33;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14014) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14014) = 1;
      func_0x180086ce0(lVal_16 + 0x13ff1,&local_c8);
      func_0x180673140(&LAB_180435b00);
    }
    _Str = local_130;
    func_0x18044a2b0(local_130);
    local_108._0_16_ = ZEXT816(0);
    local_118 = ZEXT816(0);
    sz_19 = strlen(_Str);
    if (-1 < (int64_t)sz_19) {
      uVal_18 = 0xf;
      pU64_28 = local_118;
      if (0xf < sz_19) {
        uVal_20 = sz_19 | 0xf;
        uVal_18 = 0x16;
        if (0x16 < uVal_20) {
          uVal_18 = uVal_20;
        }
        if (uVal_20 < 0xfff) {
          local_a1 = 1;
          pU64_28 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
        }
        else {
          local_a1 = 1;
          lVal_16 = func_0x180672de0(uVal_18 + 0x28);
          pU64_28 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_16;
        }
        local_118._0_8_ = pU64_28;
      }
      local_108._8_8_ = uVal_18;
      local_108._0_8_ = sz_19;
      func_0x1806aa960(pU64_28,local_130,sz_19);
      pU64_28[sz_19] = 0;
      func_0x18004d690(&local_c8,local_118,local_168);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x14030) == '\0') {
        lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_16 + 0x14030) = 1;
        *(uint32_t *)(lVal_16 + 0x14020) = uVal_8;
        *(uint32_t *)(lVal_16 + 0x14024) = uVal_9;
        *(uint32_t *)(lVal_16 + 0x14028) = uVal_10;
        *(uint32_t *)(lVal_16 + 0x1402c) = uVal_11;
        func_0x180673140(&LAB_180435b30);
        ch_13 = (*local_128)[0xf];
      }
      else {
        ch_13 = (*local_128)[0xf];
      }
      if (ch_13 == '\x01') {
        uVal_3 = *(uint32_t *)(*local_128 + 8);
        auArr_30 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_3 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_3 >> 0x10),uVal_3)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (*local_128 + 0xd) >> 8)),
                                                  (char)((uint)uVal_3 >> 8)),
                                          CONCAT11((char)*(uint16_t *)(*local_128 + 0xd),
                                                   (char)uVal_3))),auArr_6);
        auArr_30._8_8_ =
             auArr_30._8_8_ & 0xffff00ffffffff | (uint64_t)(byte)(*local_128)[0xc] << 0x20;
        auArr_30 = pblendw(auArr_30,*local_128,0xf);
        *local_128 = auArr_30 ^ auArr_12;
      }
      local_d8 = ZEXT816(0);
      local_e8 = ZEXT816(0);
      sz_19 = strlen((char *)local_128);
      if (-1 < (int64_t)sz_19) {
        uVal_18 = 0xf;
        pU64_28 = local_e8;
        if (0xf < sz_19) {
          uVal_20 = sz_19 | 0xf;
          uVal_18 = 0x16;
          if (0x16 < uVal_20) {
            uVal_18 = uVal_20;
          }
          if (uVal_20 < 0xfff) {
            pU64_28 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
          }
          else {
            lVal_16 = func_0x180672de0(uVal_18 + 0x28);
            pU64_28 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_28 + -8) = lVal_16;
          }
          local_e8._0_8_ = pU64_28;
        }
        local_d8._8_8_ = uVal_18;
        local_d8._0_8_ = sz_19;
        func_0x1806aa960(pU64_28,local_128,sz_19);
        pU64_28[sz_19] = 0;
        func_0x180460b20(&DAT_180840a48,&local_148,local_e8,&local_c8,1);
        if (0xf < (uint64_t)local_d8._8_8_) {
          uVal_18 = local_d8._8_8_ + 1;
          lVal_16 = local_e8._0_8_;
          if (0xfff < uVal_18) {
            lVal_16 = *(int64_t *)(local_e8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_16)) goto LAB_180403ab1;
            uVal_18 = local_d8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_16,uVal_18);
        }
        if (0xf < uStack_b0) {
          uVal_18 = uStack_b0 + 1;
          pU64_28 = local_c8;
          if (0xfff < uVal_18) {
            pU64_28 = *(uint8_t **)(local_c8 + -8);
            if ((uint8_t *)0x1f < local_c8 + (-8 - (int64_t)pU64_28)) goto LAB_180403ab1;
            uVal_18 = uStack_b0 + 0x28;
          }
          thunk_FUN_180695dd0(pU64_28,uVal_18);
        }
        local_b8 = 0;
        uStack_b0 = 0xf;
        local_c8 = (uint8_t *)((uint64_t)local_c8 & 0xffffffffffffff00);
        if (0xf < (uint64_t)local_108._8_8_) {
          uVal_18 = local_108._8_8_ + 1;
          lVal_16 = local_118._0_8_;
          if (0xfff < uVal_18) {
            lVal_16 = *(int64_t *)(local_118._0_8_ + -8);
            if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_16)) goto LAB_180403ab1;
            uVal_18 = local_108._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_16,uVal_18);
        }
        func_0x1800cc7c0(local_148,uVal_7);
        pLong_23 = local_140;
        if (local_140 != (int64_t *)0x0) {
          LOCK();
          pLong_1 = local_140 + 1;
          *(int *)pLong_1 = *(int *)pLong_1 + -1;
          UNLOCK();
          if (*(int *)pLong_1 == 0) {
            (**(func_ptr_t *)*local_140)(local_140);
            LOCK();
            pInt_2 = (int *)((int64_t)pLong_23 + 0xc);
            *pInt_2 = *pInt_2 + -1;
            UNLOCK();
            if (*pInt_2 == 0) {
              (**(func_ptr_t *)(*pLong_23 + 8))(pLong_23);
            }
          }
        }
        goto LAB_1804039a0;
      }
      func_0x18007ba70();
    }
    local_a1 = 1;
    func_0x18007ba70();
    fnPtr_5 = (func_ptr_t )swi(3);
    (*fnPtr_5)();
    return;
  }
LAB_1804039a0:
  pU64_22 = (uint64_t *)pU64_15[2];
  pU64_25 = pU64_15;
  if (*(char *)((int64_t)(uint64_t *)pU64_15[2] + 0x19) == '\0') {
    do {
      pU64_15 = pU64_22;
      pU64_22 = (uint64_t *)*pU64_15;
    } while (*(char *)((int64_t)(uint64_t *)*pU64_15 + 0x19) == '\0');
  }
  else {
    do {
      pU64_15 = (uint64_t *)pU64_25[1];
      if (*(char *)((int64_t)pU64_15 + 0x19) != '\0') break;
      bFlag_29 = pU64_25 == (uint64_t *)pU64_15[2];
      pU64_25 = pU64_15;
    } while (bFlag_29);
  }
  goto LAB_180402bd0;
}

// Unwind@180403ad0
void Unwind_180403ad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180403b50
void Unwind_180403b50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@180403bd0
void Unwind_180403bd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@180403c50
void Unwind_180403c50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14014) = 0;
  *(uint8_t *)(param_2 + 0xf7) = 1;
  return;
}

// Unwind@180403ce0
void Unwind_180403ce0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@180403d60
void Unwind_180403d60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@180403de0
void Unwind_180403de0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  *(uint8_t *)(param_2 + 0xf7) = 0;
  return;
}

// Unwind@180403e60
void Unwind_180403e60(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0xf7) == '\x01') {
    func_0x180001e70(param_2 + 0x30);
  }
  return;
}

// Unwind@180403ee0
void Unwind_180403ee0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x50);
  return;
}

// Unwind@180403f60
void Unwind_180403f60(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x78));
  return;
}

// func_0x180404050
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180404050(uint64_t *param_1)
{
  char *_Str;
  uint8_t auArr_1 [16];
  size_t sz_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  uint8_t local_68 [4];
  uint8_t auStack_64 [4];
  uint64_t uStack_60;
  size_t local_58;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint8_t local_39;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_58 = CONCAT44(_UNK_1806cc910,_DAT_1806cc90c);
  uStack_50 = _UNK_1806cc914;
  auStack_64 = (uint8_t  [4])_UNK_1806cc900;
  local_68 = (uint8_t  [4])_DAT_1806cc8fc;
  uStack_60._0_4_ = _UNK_1806cc904;
  uStack_60._4_4_ = _UNK_1806cc908;
  uStack_4c = CONCAT13(0x66,(int3)_UNK_1806cc918);
  uStack_48 = CONCAT13(uStack_48._3_1_,0xf9bdaa);
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x14058) == '\0') {
    lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_3 + 0x14058) = 1;
    func_0x1801b30c0(lVal_3 + 0x14031,local_68);
    func_0x180673140(&LAB_180435bf0);
  }
  _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14031);
  func_0x18044a2e0(_Str);
  _local_68 = ZEXT816(0);
  sz_2 = strlen(_Str);
  if (-1 < (int64_t)sz_2) {
    if (sz_2 < 0x10) {
      pU64_5 = local_68;
      uVal_6 = 0xf;
    }
    else {
      uVal_4 = sz_2 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_4) {
        uVal_6 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        pU64_5 = (uint8_t *)func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_6 + 0x28);
        pU64_5 = (uint8_t *)(lVal_3 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_5 + -8) = lVal_3;
      }
      _local_68 = (int64_t)pU64_5;
    }
    uStack_50 = (uint32_t)uVal_6;
    uStack_4c = (uint32_t)(uVal_6 >> 0x20);
    local_58 = sz_2;
    func_0x1806aa960(pU64_5,_Str,sz_2);
    pU64_5[sz_2] = 0;
    func_0x1801c2ba0(param_1,0,4,local_68);
    uVal_6 = CONCAT44(uStack_4c,uStack_50);
    if (0xf < uVal_6) {
      uVal_4 = uVal_6 + 1;
      lVal_3 = _local_68;
      if (0xfff < uVal_4) {
        lVal_3 = *(int64_t *)(_local_68 + -8);
        if (0x1f < (uint64_t)((_local_68 + -8) - lVal_3)) goto LAB_180404226;
        uVal_4 = uVal_6 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_3,uVal_4);
    }
    *param_1 = &PTR_LAB_1806c9a00;
    auArr_1._12_4_ = 0;
    auArr_1._0_12_ = _auStack_64;
    _local_68 = auArr_1 << 0x20;
    func_0x180112d50(param_1 + 0x10,local_68,&local_39);
    return param_1;
  }
  func_0x18007ba70();
LAB_180404226:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180404230
void Unwind_180404230(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@180404260
void Unwind_180404260(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@180404290
void Unwind_180404290(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14058) = 0;
  return;
}

// Unwind@180404570
void Unwind_180404570(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14084) = 0;
  return;
}

// Unwind@180404910
void Unwind_180404910(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x180404960
void func_0x180404960(int64_t param_1)
{
  uint32_t *pU64_1;
  uint64_t *pU64_2;
  int64_t lVal_3;
  uint32_t *pU64_4;
  uint64_t *pU64_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  int64_t lVal_8;
  uint32_t *pU64_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  
  if (*(uint64_t *)(param_1 + 0x10) != 0) {
    pU64_2 = *(uint64_t **)(param_1 + 8);
    if (*(uint64_t *)(param_1 + 0x10) < *(uint64_t *)(param_1 + 0x38) >> 3) {
      func_0x18044a330(param_1,*pU64_2);
      return;
    }
    *(uint64_t *)pU64_2[1] = 0;
    pU64_2 = (uint64_t *)*pU64_2;
    while (pU64_2 != (uint64_t *)0x0) {
      pU64_5 = (uint64_t *)*pU64_2;
      uVal_10 = pU64_2[5];
      if (0xf < uVal_10) {
        lVal_3 = pU64_2[2];
        uVal_11 = uVal_10 + 1;
        lVal_8 = lVal_3;
        if (0xfff < uVal_11) {
          lVal_8 = *(int64_t *)(lVal_3 + -8);
          if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_8)) {
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_11 = uVal_10 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_8,uVal_11);
      }
      pU64_2[4] = 0;
      pU64_2[5] = 0xf;
      *(uint8_t *)(pU64_2 + 2) = 0;
      thunk_FUN_180695dd0(pU64_2,0x38);
      pU64_2 = pU64_5;
    }
    lVal_3 = *(int64_t *)(param_1 + 8);
    *(int64_t *)lVal_3 = lVal_3;
    *(int64_t *)(lVal_3 + 8) = lVal_3;
    *(uint64_t *)(param_1 + 0x10) = 0;
    pU64_9 = *(uint32_t **)(param_1 + 0x18);
    pU64_4 = *(uint32_t **)(param_1 + 0x20);
    if (pU64_9 != pU64_4) {
      uVal_6 = *(uint32_t *)(param_1 + 8);
      uVal_7 = *(uint32_t *)(param_1 + 0xc);
      uVal_10 = (int64_t)pU64_4 + (-8 - (int64_t)pU64_9);
      if (0x17 < uVal_10) {
        uVal_10 = (uVal_10 >> 3) + 1;
        uVal_11 = uVal_10 & 0xfffffffffffffffc;
        uVal_12 = 0;
        do {
          pU64_1 = pU64_9 + uVal_12 * 2;
          *pU64_1 = uVal_6;
          pU64_1[1] = uVal_7;
          pU64_1[2] = uVal_6;
          pU64_1[3] = uVal_7;
          pU64_1 = pU64_9 + uVal_12 * 2 + 4;
          *pU64_1 = uVal_6;
          pU64_1[1] = uVal_7;
          pU64_1[2] = uVal_6;
          pU64_1[3] = uVal_7;
          uVal_12 = uVal_12 + 4;
        } while (uVal_11 != uVal_12);
        pU64_9 = pU64_9 + uVal_11 * 2;
        if (uVal_10 == uVal_11) {
          return;
        }
      }
      do {
        *pU64_9 = uVal_6;
        pU64_9[1] = uVal_7;
        pU64_9 = pU64_9 + 2;
      } while (pU64_9 != pU64_4);
    }
  }
  return;
}

// func_0x180404ac0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180404ac0(uint64_t *param_1)
{
  char *fnPtr_1;
  byte *pU8_2;
  uint *pU64_3;
  uint32_t *pU64_4;
  uint64_t *pU64_5;
  uint8_t (*_Str)[16];
  uint8_t uVal_6;
  func_ptr_t fnPtr_7;
  int64_t lVal_8;
  uint8_t auArr_9 [16];
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  size_t sz_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  uint64_t *pU64_19;
  uint8_t *pU64_20;
  uint8_t *pU64_21;
  uint8_t *pU64_22;
  uint64_t uVal_23;
  uint8_t auArr_24 [16];
  uint8_t auArr_25 [16];
  uint uVal_26;
  uint uVal_27;
  uint uVal_28;
  uint64_t in_stack_fffffffffffffa10;
  uint32_t uVal_29;
  uint uVal_30;
  uint8_t local_5c8 [56];
  uint64_t local_590;
  uint8_t local_588 [56];
  uint64_t local_550;
  uint8_t local_548 [56];
  uint64_t local_510;
  uint8_t local_508 [56];
  uint64_t local_4d0;
  uint8_t local_4c8 [56];
  uint64_t local_490;
  uint8_t local_488 [56];
  uint64_t local_450;
  uint8_t local_448 [56];
  uint64_t local_410;
  uint8_t local_408 [56];
  uint64_t local_3d0;
  uint8_t local_3c8 [56];
  uint64_t local_390;
  uint8_t local_388 [56];
  uint64_t local_350;
  uint8_t local_348 [56];
  uint64_t local_310;
  uint8_t local_308 [56];
  uint64_t local_2d0;
  uint8_t local_2c8 [56];
  uint64_t local_290;
  uint8_t local_288 [56];
  uint64_t local_250;
  uint8_t local_248;
  undefined7 uStack_247;
  undefined7 uStack_240;
  uint32_t uStack_239;
  undefined5 uStack_235;
  uint64_t uStack_230;
  int64_t local_220 [7];
  int64_t *local_1e8;
  uint8_t local_1d8 [16];
  uint8_t local_1c8 [16];
  uint8_t local_1b8 [16];
  uint8_t local_1a8 [16];
  uint64_t *local_198;
  uint64_t *local_190;
  uint8_t local_188 [16];
  uint8_t local_178 [16];
  uint8_t local_168;
  undefined7 uStack_167;
  undefined5 uStack_160;
  uint16_t uStack_15b;
  uint8_t uStack_159;
  undefined5 uStack_158;
  uint16_t uStack_153;
  uint8_t uStack_151;
  uint64_t uStack_150;
  int64_t local_140 [7];
  int64_t *local_108;
  uint8_t local_f8 [8];
  uint64_t uStack_f0;
  uint8_t local_e8 [4];
  uint8_t auStack_e4 [4];
  uint64_t uStack_e0;
  uint32_t local_d8;
  uint32_t uStack_d4;
  uint32_t uStack_d0;
  uint32_t uStack_cc;
  uint32_t local_c8;
  int64_t *local_98;
  uint64_t *local_80;
  uint8_t local_77;
  uint8_t local_76;
  uint8_t local_75;
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
  
  uVal_29 = (uint32_t)((uint64_t)in_stack_fffffffffffffa10 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  uStack_f0 = _UNK_1806cc93a;
  local_f8 = (uint8_t  [8])_DAT_1806cc932;
  local_e8 = (uint8_t  [4])0xc70f2a1e;
  local_80 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1409c) == '\0') {
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_16 + 0x1409c) = 1;
    func_0x18007cfc0(lVal_16 + 0x14085,local_f8);
    func_0x180673140(&LAB_180435c80);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x14085);
  func_0x18036f8b0(fnPtr_1);
  _local_e8 = (uint8_t  [16])0x0;
  _local_f8 = (uint8_t  [16])0x0;
  sz_14 = strlen(fnPtr_1);
  if ((int64_t)sz_14 < 0) {
    func_0x18007ba70();
LAB_180407ad7:
    local_68 = 1;
    func_0x18007ba70();
LAB_180407ae4:
    local_67 = 1;
    func_0x18007ba70();
LAB_180407af1:
    local_6a = 1;
    func_0x18007ba70();
LAB_180407afe:
    local_69 = 1;
    func_0x18007ba70();
LAB_180407b0b:
    local_62 = 1;
    func_0x18007ba70();
LAB_180407b18:
    local_61 = 1;
    func_0x18007ba70();
LAB_180407b25:
    local_6c = 1;
    func_0x18007ba70();
LAB_180407b32:
    local_6b = 1;
    func_0x18007ba70();
LAB_180407b3f:
    local_6e = 1;
    func_0x18007ba70();
LAB_180407b4c:
    local_6d = 1;
    func_0x18007ba70();
LAB_180407b59:
    local_70 = 1;
    func_0x18007ba70();
LAB_180407b66:
    local_6f = 1;
    func_0x18007ba70();
LAB_180407b73:
    local_63 = 1;
    func_0x18007ba70();
LAB_180407b80:
    local_71 = 1;
    func_0x18007ba70();
LAB_180407b8d:
    local_64 = 1;
    func_0x18007ba70();
LAB_180407b9a:
    local_72 = 1;
    func_0x18007ba70();
LAB_180407ba7:
    local_75 = 1;
    func_0x18007ba70();
LAB_180407bb4:
    local_74 = 1;
    func_0x18007ba70();
LAB_180407bc1:
    local_73 = 1;
    func_0x18007ba70();
LAB_180407bce:
    local_66 = 1;
    func_0x18007ba70();
LAB_180407bdb:
    local_65 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_14 < 0x10) {
      pU64_21 = local_f8;
      uVal_23 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_16;
      }
      local_f8 = (uint8_t  [8])pU64_21;
    }
    _local_e8 = sz_14;
    uStack_e0 = uVal_23;
    func_0x1806aa960(pU64_21,fnPtr_1,sz_14);
    pU64_21[sz_14] = 0;
    pU64_21 = local_f8;
    func_0x18018c570(local_80,0,0,pU64_21);
    if (0xf < uStack_e0) {
      uVal_23 = uStack_e0 + 1;
      lVal_16 = (int64_t)local_f8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)((int64_t)local_f8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_f8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    *local_80 = &PTR_LAB_1806c9b30;
    pU64_19 = local_80 + 0x1a;
    local_80[0x1a] = (uint64_t)DAT_1806b26b4;
    *(uint8_t *)(local_80 + 0x1b) = 0;
    local_198 = local_80 + 0x1c;
    auArr_24 = ZEXT816(0);
    *(uint8_t (*)[16])(local_80 + 0x1e) = auArr_24;
    *(uint8_t (*)[16])(local_80 + 0x1c) = auArr_24;
    *(uint32_t *)(local_80 + 0x1f) = 0xffffffff;
    *(uint16_t *)(local_80 + 0x20) = 0x101;
    *(uint8_t *)((int64_t)local_80 + 0x102) = 1;
    local_190 = local_80 + 0x21;
    *(uint8_t (*)[16])(local_80 + 0x23) = auArr_24;
    *(uint8_t (*)[16])(local_80 + 0x21) = auArr_24;
    *(uint32_t *)(local_80 + 0x24) = 0xffffffff;
    *(uint8_t *)(local_80 + 0x25) = 1;
    *(uint64_t *)((int64_t)local_80 + 300) = DAT_1806c9060;
    local_590 = 0;
    uVal_30 = DAT_1806b26b4;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_590 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_5c8);
      uVal_30 = *(uint *)pU64_19;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x140a0) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x140a0) = 1;
      *(uint16_t *)(lVal_16 + 0x1409d) = 0x1dd;
      func_0x180673140(&LAB_180435cb0);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_16 + 0x1409d);
    if (*(char *)(lVal_16 + 0x1409e) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xdd;
      *(uint8_t *)(lVal_16 + 0x1409e) = 0;
    }
    _local_e8 = (uint8_t  [16])0x0;
    _local_f8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_180407ad7;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_68 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_68 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_16;
      }
      local_f8 = (uint8_t  [8])pU64_21;
    }
    uStack_e0 = uVal_23;
    _local_e8 = sz_14;
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x140ac) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x140ac) = 1;
      *(uint32_t *)(lVal_16 + 0x140a4) = 0x8013b88e;
      *(uint16_t *)(lVal_16 + 0x140a8) = 0x1cb;
      func_0x180673140(&LAB_180435cd0);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_16 + 0x140a4);
    if (*(char *)(lVal_16 + 0x140a9) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xe569d1dd;
      *(byte *)(lVal_16 + 0x140a8) = *(byte *)(lVal_16 + 0x140a8) ^ 0xcb;
      *(uint8_t *)(lVal_16 + 0x140a9) = 0;
    }
    uStack_158 = 0;
    uStack_153 = 0;
    uStack_151 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_167 = 0;
    uStack_160 = 0;
    uStack_15b = 0;
    uStack_159 = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_180407ae4;
    if (sz_14 < 0x10) {
      pU64_21 = &local_168;
      uVal_23 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_67 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_67 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_16;
      }
      local_168 = SUB81(pU64_21,0);
      uStack_167 = (undefined7)((uint64_t)pU64_21 >> 8);
    }
    uStack_158 = (undefined5)sz_14;
    uStack_153 = (uint16_t)(sz_14 >> 0x28);
    uStack_151 = (uint8_t)(sz_14 >> 0x38);
    uStack_150 = uVal_23;
    func_0x1806aa960(pU64_21,pU64_3,sz_14);
    pU64_21[sz_14] = 0;
    uVal_23 = CONCAT44(uVal_29,0x3f000000);
    pU64_21 = &local_168;
    pU64_20 = local_f8;
    func_0x1801cd2e0(local_80,pU64_21,pU64_20,pU64_19,uVal_30,uVal_23,0x40000000,local_5c8,0);
    if (0xf < uStack_150) {
      lVal_8 = CONCAT71(uStack_167,local_168);
      uVal_15 = uStack_150 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_15 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    if (0xf < uStack_e0) {
      uVal_15 = uStack_e0 + 1;
      lVal_16 = (int64_t)local_f8;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)((int64_t)local_f8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_f8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_15 = uStack_e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    local_550 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_550 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_588);
    }
    pU64_4 = (uint32_t *)((int64_t)local_80 + 0xd4);
    uVal_29 = *pU64_4;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x140b0) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x140b0) = 1;
      *(uint16_t *)(lVal_16 + 0x140ad) = 0x187;
      func_0x180673140(&LAB_180435d00);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_16 + 0x140ad);
    if (*(char *)(lVal_16 + 0x140ae) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x87;
      *(uint8_t *)(lVal_16 + 0x140ae) = 0;
    }
    _local_e8 = (uint8_t  [16])0x0;
    _local_f8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_180407af1;
    uVal_15 = 0xf;
    if (0xf < sz_14) {
      uVal_17 = sz_14 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_17) {
        uVal_15 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_6a = 1;
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_6a = 1;
        lVal_16 = func_0x180672de0(uVal_15 + 0x28);
        pU64_20 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_16;
      }
      local_f8 = (uint8_t  [8])pU64_20;
    }
    uStack_e0 = uVal_15;
    _local_e8 = sz_14;
    func_0x1806aa960(pU64_20,pU8_2,sz_14);
    pU64_20[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x140c4) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x140c4) = 1;
      *(uint8_t *)(lVal_16 + 0x140c0) = 1;
      *(uint64_t *)(lVal_16 + 0x140b8) = 0x47cca3ccf7c7a6d7;
      func_0x180673140(&LAB_180435d20);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_16 + 0x140b8);
    if (*(char *)(lVal_16 + 0x140c0) == '\x01') {
      *pU64_5 = *pU64_5 ^ 0x47abcda593a3c787;
      *(uint8_t *)(lVal_16 + 0x140c0) = 0;
    }
    uStack_158 = 0;
    uStack_153 = 0;
    uStack_151 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_167 = 0;
    uStack_160 = 0;
    uStack_15b = 0;
    uStack_159 = 0;
    sz_14 = strlen((char *)pU64_5);
    if ((int64_t)sz_14 < 0) goto LAB_180407afe;
    uVal_15 = 0xf;
    if (0xf < sz_14) {
      uVal_17 = sz_14 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_17) {
        uVal_15 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_69 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_69 = 1;
        lVal_16 = func_0x180672de0(uVal_15 + 0x28);
        pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_16;
      }
      local_168 = SUB81(pU64_21,0);
      uStack_167 = (undefined7)((uint64_t)pU64_21 >> 8);
    }
    uStack_158 = (undefined5)sz_14;
    uStack_153 = (uint16_t)(sz_14 >> 0x28);
    uStack_151 = (uint8_t)(sz_14 >> 0x38);
    uStack_150 = uVal_15;
    func_0x1806aa960(pU64_21,pU64_5,sz_14);
    pU64_21[sz_14] = 0;
    uVal_30 = 0x40a00000;
    pU64_21 = &local_168;
    pU64_20 = local_f8;
    func_0x1801cd2e0(local_80,pU64_21,pU64_20,pU64_4,uVal_29,uVal_23 & 0xffffffff00000000,0x40a00000,
                  local_588,0);
    if (0xf < uStack_150) {
      lVal_8 = CONCAT71(uStack_167,local_168);
      uVal_23 = uStack_150 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    if (0xf < uStack_e0) {
      uVal_23 = uStack_e0 + 1;
      lVal_16 = (int64_t)local_f8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)((int64_t)local_f8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_f8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    local_510 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_510 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_548);
    }
    pU64_19 = local_80 + 0x1b;
    uVal_6 = *(uint8_t *)pU64_19;
    local_d8 = _DAT_1806cc966;
    uStack_d4 = _UNK_1806cc96a;
    uStack_d0 = _UNK_1806cc96e;
    uStack_cc = _UNK_1806cc972;
    auStack_e4 = (uint8_t  [4])_UNK_1806cc95a;
    local_e8 = (uint8_t  [4])_DAT_1806cc956;
    uStack_e0._0_4_ = _UNK_1806cc95e;
    uStack_e0._4_4_ = _UNK_1806cc962;
    uStack_f0 = _UNK_1806cc94e;
    local_f8 = (uint8_t  [8])_DAT_1806cc946;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x140f8) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x140f8) = 1;
      func_0x1801b4680(lVal_16 + 0x140c5,local_f8);
      func_0x180673140(&LAB_180435d40);
    }
    uVal_13 = _UNK_1806b2d1c;
    uVal_12 = _UNK_1806b2d18;
    uVal_11 = _UNK_1806b2d14;
    uVal_10 = _DAT_1806b2d10;
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_16 + 0x140c5);
    if (*(char *)(lVal_16 + 0x140f5) == '\x01') {
      uVal_26 = *(uint *)(lVal_16 + 0x140c9) ^ _UNK_1806b2d14;
      uVal_27 = *(uint *)(lVal_16 + 0x140cd) ^ _UNK_1806b2d18;
      uVal_28 = *(uint *)(lVal_16 + 0x140d1) ^ _UNK_1806b2d1c;
      *pU64_3 = *pU64_3 ^ _DAT_1806b2d10;
      *(uint *)(lVal_16 + 0x140c9) = uVal_26;
      *(uint *)(lVal_16 + 0x140cd) = uVal_27;
      *(uint *)(lVal_16 + 0x140d1) = uVal_28;
      *(uint *)(lVal_16 + 0x140d5) = *(uint *)(lVal_16 + 0x140d5) ^ uVal_10;
      *(uint *)(lVal_16 + 0x140d9) = *(uint *)(lVal_16 + 0x140d9) ^ uVal_11;
      *(uint *)(lVal_16 + 0x140dd) = *(uint *)(lVal_16 + 0x140dd) ^ uVal_12;
      *(uint *)(lVal_16 + 0x140e1) = *(uint *)(lVal_16 + 0x140e1) ^ uVal_13;
      *(uint *)(lVal_16 + 0x140e5) = *(uint *)(lVal_16 + 0x140e5) ^ uVal_10;
      *(uint *)(lVal_16 + 0x140e9) = *(uint *)(lVal_16 + 0x140e9) ^ uVal_11;
      *(uint *)(lVal_16 + 0x140ed) = *(uint *)(lVal_16 + 0x140ed) ^ uVal_12;
      *(uint *)(lVal_16 + 0x140f1) = *(uint *)(lVal_16 + 0x140f1) ^ uVal_13;
      *(uint8_t *)(lVal_16 + 0x140f5) = 0;
    }
    uStack_158 = 0;
    uStack_153 = 0;
    uStack_151 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_167 = 0;
    uStack_160 = 0;
    uStack_15b = 0;
    uStack_159 = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_180407b0b;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_62 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_62 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_16;
      }
      local_168 = SUB81(pU64_21,0);
      uStack_167 = (undefined7)((uint64_t)pU64_21 >> 8);
    }
    uStack_158 = (undefined5)sz_14;
    uStack_153 = (uint16_t)(sz_14 >> 0x28);
    uStack_151 = (uint8_t)(sz_14 >> 0x38);
    uStack_150 = uVal_23;
    func_0x1806aa960(pU64_21,pU64_3,sz_14);
    pU64_21[sz_14] = 0;
    local_248 = (uint8_t)_DAT_1806cc976;
    uStack_247 = (undefined7)((uint64_t)_DAT_1806cc976 >> 8);
    uStack_240 = (undefined7)_UNK_1806cc97e;
    uStack_239 = 0xf582a1fe;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14110) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14110) = 1;
      func_0x18007cb80(lVal_16 + 0x140f9,&local_248);
      func_0x180673140(&LAB_180435d70);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x140f9);
    func_0x18044a770(fnPtr_1);
    _local_e8 = (uint8_t  [16])0x0;
    _local_f8 = (uint8_t  [16])0x0;
    sz_14 = strlen(fnPtr_1);
    if ((int64_t)sz_14 < 0) goto LAB_180407b18;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_61 = 1;
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_61 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_20 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_16;
      }
      local_f8 = (uint8_t  [8])pU64_20;
    }
    uStack_e0 = uVal_23;
    _local_e8 = sz_14;
    func_0x1806aa960(pU64_20,fnPtr_1,sz_14);
    pU64_20[sz_14] = 0;
    uVal_30 = uVal_30 & 0xffffff00;
    func_0x1801ccd70(local_80,local_f8,&local_168,pU64_19,uVal_6,local_548,uVal_30);
    if (0xf < uStack_e0) {
      uVal_23 = uStack_e0 + 1;
      lVal_16 = (int64_t)local_f8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)((int64_t)local_f8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_f8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    if (0xf < uStack_150) {
      lVal_8 = CONCAT71(uStack_167,local_168);
      uVal_23 = uStack_150 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    local_4d0 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_4d0 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_508);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14124) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14124) = 1;
      *(uint64_t *)(lVal_16 + 0x14118) = 0x110f1c3f4c3bbc45;
      *(uint32_t *)(lVal_16 + 0x14120) = 0x149bf6c;
      func_0x180673140(&LAB_180435da0);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_16 + 0x14118);
    if (*(char *)(lVal_16 + 0x14123) == '\x01') {
      *pU64_5 = *pU64_5 ^ 0x656173452549d30d;
      *(uint *)(lVal_16 + 0x14120) =
           (*(uint *)(lVal_16 + 0x14120) & 0xffff | (uint)*(byte *)(lVal_16 + 0x14122) << 0x10) ^
           SUB164(_DAT_1806b5cf0,0);
    }
    uStack_235 = 0;
    uStack_230 = 0;
    local_248 = 0;
    uStack_247 = 0;
    uStack_240 = 0;
    uStack_239 = 0;
    sz_14 = strlen((char *)pU64_5);
    if ((int64_t)sz_14 < 0) goto LAB_180407b25;
    if (sz_14 < 0x10) {
      pU64_21 = &local_248;
      uVal_23 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_6c = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_6c = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_16;
      }
      local_248 = SUB81(pU64_21,0);
      uStack_247 = (undefined7)((uint64_t)pU64_21 >> 8);
    }
    uStack_235 = (undefined5)(sz_14 >> 0x18);
    uStack_230 = uVal_23;
    func_0x1806aa960(pU64_21,pU64_5,sz_14);
    pU64_21[sz_14] = 0;
    func_0x1801d2eb0(local_f8,&local_248,0,local_508);
    pU64_21 = local_f8;
    uVal_18 = func_0x1801d30b0(local_198,pU64_21);
    local_490 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_490 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_4c8);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14134) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14134) = 1;
      *(uint64_t *)(lVal_16 + 0x14128) = 0x900102c513bb65b;
      *(uint16_t *)(lVal_16 + 0x14130) = 0x10d;
      func_0x180673140(&LAB_180435dd0);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_16 + 0x14128);
    if (*(char *)(lVal_16 + 0x14131) == '\x01') {
      *pU64_5 = *pU64_5 ^ 0x656173452549d30d;
      *(byte *)(lVal_16 + 0x14130) = *(byte *)(lVal_16 + 0x14130) ^ 0xd;
      *(uint8_t *)(lVal_16 + 0x14131) = 0;
    }
    local_178 = (uint8_t  [16])0x0;
    local_188 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU64_5);
    if ((int64_t)sz_14 < 0) goto LAB_180407b32;
    if (sz_14 < 0x10) {
      pU64_20 = local_188;
      uVal_23 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_6b = 1;
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_6b = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_20 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_16;
      }
      local_188._0_8_ = pU64_20;
    }
    local_178._8_8_ = uVal_23;
    local_178._0_8_ = sz_14;
    func_0x1806aa960(pU64_20,pU64_5,sz_14);
    pU64_20[sz_14] = 0;
    func_0x1801d2eb0(&local_168,local_188,1,local_4c8);
    pU64_20 = &local_168;
    func_0x1801d30b0(uVal_18,pU64_20);
    if (local_108 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_108 + 0x20))(local_108,local_108 != local_140);
      local_108 = (int64_t *)0x0;
    }
    if (0xf < uStack_150) {
      lVal_8 = CONCAT71(uStack_167,local_168);
      uVal_23 = uStack_150 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    uStack_158 = 0;
    uStack_153 = 0;
    uStack_151 = 0;
    uStack_150 = 0xf;
    local_168 = 0;
    if (0xf < (uint64_t)local_178._8_8_) {
      uVal_23 = local_178._8_8_ + 1;
      lVal_16 = local_188._0_8_;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(local_188._0_8_ + -8);
        if (0x1f < (uint64_t)((local_188._0_8_ + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = local_178._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    if (local_98 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_98 + 0x20))(local_98,local_98 != (int64_t *)&uStack_d0);
      local_98 = (int64_t *)0x0;
    }
    if (0xf < uStack_e0) {
      uVal_23 = uStack_e0 + 1;
      lVal_16 = (int64_t)local_f8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)((int64_t)local_f8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_f8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    _local_e8 = ZEXT816(0xf) << 0x40;
    auArr_24[15] = 0;
    auArr_24._0_15_ = stack0xffffffffffffff09;
    _local_f8 = auArr_24 << 8;
    if (0xf < uStack_230) {
      lVal_8 = CONCAT71(uStack_247,local_248);
      uVal_23 = uStack_230 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_230 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    local_450 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_450 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_488);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14138) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14138) = 1;
      *(uint16_t *)(lVal_16 + 0x14135) = 0x1c5;
      func_0x180673140(&LAB_180435e00);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_16 + 0x14135);
    if (*(char *)(lVal_16 + 0x14136) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xc5;
      *(uint8_t *)(lVal_16 + 0x14136) = 0;
    }
    _local_e8 = (uint8_t  [16])0x0;
    _local_f8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_180407b3f;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_6e = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_6e = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_16;
      }
      local_f8 = (uint8_t  [8])pU64_21;
    }
    uStack_e0 = uVal_23;
    _local_e8 = sz_14;
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14150) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14150) = 1;
      *(uint8_t *)(lVal_16 + 0x1414c) = 1;
      *(uint64_t *)(lVal_16 + 0x14140) = 0x9ba6cbefc4bc018a;
      *(uint32_t *)(lVal_16 + 0x14148) = 0xa1bb1cac;
      func_0x180673140(&LAB_180435e20);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_16 + 0x14140);
    if (*(char *)(lVal_16 + 0x1414c) == '\x01') {
      *pU64_5 = *pU64_5 ^ 0xefc7bf81a1d573c5;
      *(uint *)(lVal_16 + 0x14148) = *(uint *)(lVal_16 + 0x14148) ^ 0xa1d573c5;
      *(uint8_t *)(lVal_16 + 0x1414c) = 0;
    }
    uStack_158 = 0;
    uStack_153 = 0;
    uStack_151 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_167 = 0;
    uStack_160 = 0;
    uStack_15b = 0;
    uStack_159 = 0;
    sz_14 = strlen((char *)pU64_5);
    if ((int64_t)sz_14 < 0) goto LAB_180407b4c;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_6d = 1;
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_6d = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_20 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_16;
      }
      local_168 = SUB81(pU64_20,0);
      uStack_167 = (undefined7)((uint64_t)pU64_20 >> 8);
    }
    uStack_158 = (undefined5)sz_14;
    uStack_153 = (uint16_t)(sz_14 >> 0x28);
    uStack_151 = (uint8_t)(sz_14 >> 0x38);
    uStack_150 = uVal_23;
    func_0x1806aa960(pU64_20,pU64_5,sz_14);
    pU64_20[sz_14] = 0;
    uVal_30 = uVal_30 & 0xffffff00;
    pU64_21 = &local_168;
    pU64_20 = local_f8;
    func_0x1801d3a80(local_80,pU64_21,pU64_20,local_198,0,local_488,uVal_30);
    if (0xf < uStack_150) {
      lVal_8 = CONCAT71(uStack_167,local_168);
      uVal_23 = uStack_150 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    if (0xf < uStack_e0) {
      uVal_23 = uStack_e0 + 1;
      lVal_16 = (int64_t)local_f8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)((int64_t)local_f8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_f8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    local_410 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_410 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_448);
    }
    pU64_19 = local_80 + 0x20;
    uVal_6 = *(uint8_t *)pU64_19;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14170) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14170) = 1;
      uVal_18 = _UNK_1806c9078;
      *(uint64_t *)(lVal_16 + 0x14160) = _DAT_1806c9070;
      *(uint64_t *)(lVal_16 + 0x14168) = uVal_18;
      func_0x180673140(&LAB_180435e50);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_16 + 0x14160);
    if (*(char *)(lVal_16 + 0x1416f) == '\x01') {
      uVal_29 = *(uint32_t *)(lVal_16 + 0x14168);
      auArr_24 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_29 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_29 >> 0x10),uVal_29)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_16 + 0x1416d) >> 8)),
                                                 (char)((uint)uVal_29 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_16 + 0x1416d),
                                                 (char)uVal_29))),_DAT_1806ae110);
      auArr_25._0_8_ = auArr_24._0_8_;
      auArr_25._8_8_ =
           auArr_24._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_16 + 0x1416c) << 0x20;
      auArr_24 = pblendw(auArr_25,*_Str,0xf);
      *_Str = auArr_24 ^ _DAT_1806b6870;
    }
    _local_e8 = (uint8_t  [16])0x0;
    _local_f8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)_Str);
    if ((int64_t)sz_14 < 0) goto LAB_180407b59;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_70 = 1;
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_70 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_20 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_16;
      }
      local_f8 = (uint8_t  [8])pU64_20;
    }
    uStack_e0 = uVal_23;
    _local_e8 = sz_14;
    func_0x1806aa960(pU64_20,_Str,sz_14);
    pU64_20[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1417c) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x1417c) = 1;
      *(uint8_t *)(lVal_16 + 0x1417a) = 1;
      *(uint32_t *)(lVal_16 + 0x14174) = 0x2ac4c374;
      *(uint16_t *)(lVal_16 + 0x14178) = 0x2b4b;
      func_0x180673140(&LAB_180435e80);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_16 + 0x14174);
    if (*(char *)(lVal_16 + 0x1417a) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x45a9b135;
      *(byte *)(lVal_16 + 0x14178) = *(byte *)(lVal_16 + 0x14178) ^ 0x39;
      *(byte *)(lVal_16 + 0x14179) = *(byte *)(lVal_16 + 0x14179) ^ 0x2b;
      *(uint8_t *)(lVal_16 + 0x1417a) = 0;
    }
    uStack_158 = 0;
    uStack_153 = 0;
    uStack_151 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_167 = 0;
    uStack_160 = 0;
    uStack_15b = 0;
    uStack_159 = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_180407b66;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_6f = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_6f = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_16;
      }
      local_168 = SUB81(pU64_21,0);
      uStack_167 = (undefined7)((uint64_t)pU64_21 >> 8);
    }
    uStack_158 = (undefined5)sz_14;
    uStack_153 = (uint16_t)(sz_14 >> 0x28);
    uStack_151 = (uint8_t)(sz_14 >> 0x38);
    uStack_150 = uVal_23;
    func_0x1806aa960(pU64_21,pU64_3,sz_14);
    pU64_21[sz_14] = 0;
    uVal_30 = uVal_30 & 0xffffff00;
    pU64_21 = &local_168;
    pU64_20 = local_f8;
    func_0x1801ccd70(local_80,pU64_21,pU64_20,pU64_19,uVal_6,local_448,uVal_30);
    if (0xf < uStack_150) {
      lVal_8 = CONCAT71(uStack_167,local_168);
      uVal_23 = uStack_150 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    if (0xf < uStack_e0) {
      uVal_23 = uStack_e0 + 1;
      lVal_16 = (int64_t)local_f8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)((int64_t)local_f8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_f8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    local_3d0 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_3d0 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_408);
    }
    pU64_22 = (uint8_t *)((int64_t)local_80 + 0x101);
    uVal_6 = *pU64_22;
    local_168 = (uint8_t)_DAT_1806cc989;
    uStack_167 = (undefined7)((uint64_t)_DAT_1806cc989 >> 8);
    uStack_160 = (undefined5)_UNK_1806cc991;
    uStack_15b = (uint16_t)((uint64_t)_UNK_1806cc991 >> 0x28);
    uStack_159 = 0x8e;
    uStack_158 = 0x49b855112b;
    uStack_153 = 0xbf69;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14198) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14198) = 1;
      func_0x18007d3c0(lVal_16 + 0x1417d,&local_168);
      func_0x180673140(&LAB_180435eb0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x1417d);
    func_0x18044a7b0(fnPtr_1);
    _local_e8 = (uint8_t  [16])0x0;
    _local_f8 = (uint8_t  [16])0x0;
    sz_14 = strlen(fnPtr_1);
    if ((int64_t)sz_14 < 0) goto LAB_180407b73;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_63 = 1;
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_63 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_20 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_16;
      }
      local_f8 = (uint8_t  [8])pU64_20;
    }
    uStack_e0 = uVal_23;
    _local_e8 = sz_14;
    func_0x1806aa960(pU64_20,fnPtr_1,sz_14);
    pU64_20[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x141ac) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x141ac) = 1;
      *(uint8_t *)(lVal_16 + 0x141aa) = 1;
      *(uint64_t *)(lVal_16 + 0x141a0) = 0x89de6507b7545008;
      *(uint16_t *)(lVal_16 + 0x141a8) = 0x3121;
      func_0x180673140(&LAB_180435ee0);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_16 + 0x141a0);
    if (*(char *)(lVal_16 + 0x141aa) == '\x01') {
      *pU64_5 = *pU64_5 ^ 0xe7bf0d27d93d3145;
      *(byte *)(lVal_16 + 0x141a8) = *(byte *)(lVal_16 + 0x141a8) ^ 0x45;
      *(byte *)(lVal_16 + 0x141a9) = *(byte *)(lVal_16 + 0x141a9) ^ 0x31;
      *(uint8_t *)(lVal_16 + 0x141aa) = 0;
    }
    uStack_158 = 0;
    uStack_153 = 0;
    uStack_151 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_167 = 0;
    uStack_160 = 0;
    uStack_15b = 0;
    uStack_159 = 0;
    sz_14 = strlen((char *)pU64_5);
    if ((int64_t)sz_14 < 0) goto LAB_180407b80;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_71 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_71 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_16;
      }
      local_168 = SUB81(pU64_21,0);
      uStack_167 = (undefined7)((uint64_t)pU64_21 >> 8);
    }
    uStack_158 = (undefined5)sz_14;
    uStack_153 = (uint16_t)(sz_14 >> 0x28);
    uStack_151 = (uint8_t)(sz_14 >> 0x38);
    uStack_150 = uVal_23;
    func_0x1806aa960(pU64_21,pU64_5,sz_14);
    pU64_21[sz_14] = 0;
    uVal_30 = uVal_30 & 0xffffff00;
    pU64_21 = &local_168;
    pU64_20 = local_f8;
    func_0x1801ccd70(local_80,pU64_21,pU64_20,pU64_22,uVal_6,local_408,uVal_30);
    if (0xf < uStack_150) {
      lVal_8 = CONCAT71(uStack_167,local_168);
      uVal_23 = uStack_150 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    if (0xf < uStack_e0) {
      uVal_23 = uStack_e0 + 1;
      lVal_16 = (int64_t)local_f8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)((int64_t)local_f8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_f8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    local_390 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_390 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_3c8);
    }
    pU64_22 = (uint8_t *)((int64_t)local_80 + 0x102);
    uVal_6 = *pU64_22;
    local_168 = (uint8_t)_DAT_1806cc9a0;
    uStack_167 = (undefined7)((uint64_t)_DAT_1806cc9a0 >> 8);
    uStack_160 = (undefined5)_UNK_1806cc9a8;
    uStack_15b = 0x476c;
    uStack_159 = 0xdd;
    uStack_158 = 0xbf6f231675;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x141c4) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x141c4) = 1;
      func_0x18007cd50(lVal_16 + 0x141ad,&local_168);
      func_0x180673140(&LAB_180435f10);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x141ad);
    func_0x1801bf490(fnPtr_1);
    _local_e8 = (uint8_t  [16])0x0;
    _local_f8 = (uint8_t  [16])0x0;
    sz_14 = strlen(fnPtr_1);
    if ((int64_t)sz_14 < 0) goto LAB_180407b8d;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_64 = 1;
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_64 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_20 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_16;
      }
      local_f8 = (uint8_t  [8])pU64_20;
    }
    uStack_e0 = uVal_23;
    _local_e8 = sz_14;
    func_0x1806aa960(pU64_20,fnPtr_1,sz_14);
    pU64_20[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x141d4) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x141d4) = 1;
      *(uint8_t *)(lVal_16 + 0x141d0) = 1;
      *(uint64_t *)(lVal_16 + 0x141c8) = 0xbb456dde632b1152;
      func_0x180673140(&LAB_180435f40);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_16 + 0x141c8);
    if (*(char *)(lVal_16 + 0x141d0) == '\x01') {
      *pU64_5 = *pU64_5 ^ 0xbb2103bf0b4d771d;
      *(uint8_t *)(lVal_16 + 0x141d0) = 0;
    }
    uStack_158 = 0;
    uStack_153 = 0;
    uStack_151 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_167 = 0;
    uStack_160 = 0;
    uStack_15b = 0;
    uStack_159 = 0;
    sz_14 = strlen((char *)pU64_5);
    if ((int64_t)sz_14 < 0) goto LAB_180407b9a;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_72 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_72 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_16;
      }
      local_168 = SUB81(pU64_21,0);
      uStack_167 = (undefined7)((uint64_t)pU64_21 >> 8);
    }
    uStack_158 = (undefined5)sz_14;
    uStack_153 = (uint16_t)(sz_14 >> 0x28);
    uStack_151 = (uint8_t)(sz_14 >> 0x38);
    uStack_150 = uVal_23;
    func_0x1806aa960(pU64_21,pU64_5,sz_14);
    pU64_21[sz_14] = 0;
    uVal_30 = uVal_30 & 0xffffff00;
    func_0x1801ccd70(local_80,&local_168,local_f8,pU64_22,uVal_6,local_3c8,uVal_30);
    pU64_21 = local_188;
    if (0xf < uStack_150) {
      lVal_8 = CONCAT71(uStack_167,local_168);
      uVal_23 = uStack_150 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    if (0xf < uStack_e0) {
      uVal_23 = uStack_e0 + 1;
      lVal_16 = (int64_t)local_f8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)((int64_t)local_f8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_f8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    local_350 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_350 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_388);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x141e0) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x141e0) = 1;
      *(uint32_t *)(lVal_16 + 0x141d8) = 0x7ca18c63;
      *(uint16_t *)(lVal_16 + 0x141dc) = 0x1bb;
      func_0x180673140(&LAB_180435f60);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_16 + 0x141d8);
    if (*(char *)(lVal_16 + 0x141dd) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x19cfe32d;
      *(byte *)(lVal_16 + 0x141dc) = *(byte *)(lVal_16 + 0x141dc) ^ 0xbb;
      *(uint8_t *)(lVal_16 + 0x141dd) = 0;
    }
    local_178 = (uint8_t  [16])0x0;
    local_188 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_180407ba7;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_75 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_75 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_16;
      }
      local_188._0_8_ = pU64_21;
    }
    local_178._8_8_ = uVal_23;
    local_178._0_8_ = sz_14;
    func_0x1806aa960(pU64_21,pU64_3,sz_14);
    pU64_21[sz_14] = 0;
    func_0x1801d2eb0(local_f8,local_188,0,local_388);
    pU64_21 = local_f8;
    uVal_18 = func_0x1801d30b0(local_190,pU64_21);
    local_310 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_310 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_348);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x141f4) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x141f4) = 1;
      *(uint64_t *)(lVal_16 + 0x141e8) = 0x3e1d2716b0b5ec15;
      *(uint32_t *)(lVal_16 + 0x141f0) = 0x1c7ec22;
      func_0x180673140(&LAB_180435f90);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_16 + 0x141e8);
    if (*(char *)(lVal_16 + 0x141f3) == '\x01') {
      *pU64_5 = *pU64_5 ^ 0x5f694973d3c78945;
      *(uint *)(lVal_16 + 0x141f0) =
           (*(uint *)(lVal_16 + 0x141f0) & 0xffff | (uint)*(byte *)(lVal_16 + 0x141f2) << 0x10) ^
           SUB164(_DAT_1806b26e0,0);
    }
    local_1c8 = (uint8_t  [16])0x0;
    local_1d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU64_5);
    if ((int64_t)sz_14 < 0) goto LAB_180407bb4;
    if (sz_14 < 0x10) {
      pU64_20 = local_1d8;
      uVal_23 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_74 = 1;
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_74 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_20 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_16;
      }
      local_1d8._0_8_ = pU64_20;
    }
    local_1c8._8_8_ = uVal_23;
    local_1c8._0_8_ = sz_14;
    func_0x1806aa960(pU64_20,pU64_5,sz_14);
    pU64_20[sz_14] = 0;
    func_0x1801d2eb0(&local_168,local_1d8,1,local_348);
    pU64_20 = &local_168;
    uVal_18 = func_0x1801d30b0(uVal_18,pU64_20);
    local_2d0 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_2d0 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_308);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14204) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14204) = 1;
      *(uint64_t *)(lVal_16 + 0x141f8) = 0x824bf20b7e818e73;
      *(uint32_t *)(lVal_16 + 0x14200) = 0x1f38243;
      func_0x180673140(&LAB_180435fc0);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_16 + 0x141f8);
    if (*(char *)(lVal_16 + 0x14203) == '\x01') {
      *pU64_5 = *pU64_5 ^ 0xeb279b691ff3fb37;
      *(uint *)(lVal_16 + 0x14200) =
           (*(uint *)(lVal_16 + 0x14200) & 0xffff | (uint)*(byte *)(lVal_16 + 0x14202) << 0x10) ^
           SUB164(_DAT_1806b26f0,0);
    }
    local_1a8 = (uint8_t  [16])0x0;
    local_1b8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU64_5);
    if ((int64_t)sz_14 < 0) goto LAB_180407bc1;
    if (sz_14 < 0x10) {
      pU64_22 = local_1b8;
      uVal_23 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_73 = 1;
        pU64_22 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_73 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_22 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_22 + -8) = lVal_16;
      }
      local_1b8._0_8_ = pU64_22;
    }
    local_1a8._8_8_ = uVal_23;
    local_1a8._0_8_ = sz_14;
    func_0x1806aa960(pU64_22,pU64_5,sz_14);
    pU64_22[sz_14] = 0;
    func_0x1801d2eb0(&local_248,local_1b8,2,local_308);
    func_0x1801d30b0(uVal_18,&local_248);
    if (local_1e8 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_1e8 + 0x20))(local_1e8,local_1e8 != local_220);
      local_1e8 = (int64_t *)0x0;
    }
    if (0xf < uStack_230) {
      lVal_8 = CONCAT71(uStack_247,local_248);
      uVal_23 = uStack_230 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_230 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    uStack_239 = uStack_239 & 0xff;
    uStack_235 = 0;
    uStack_230 = 0xf;
    local_248 = 0;
    if (0xf < (uint64_t)local_1a8._8_8_) {
      uVal_23 = local_1a8._8_8_ + 1;
      lVal_16 = local_1b8._0_8_;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(local_1b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_1b8._0_8_ + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = local_1a8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    if (local_108 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_108 + 0x20))(local_108,local_108 != local_140);
      local_108 = (int64_t *)0x0;
    }
    if (0xf < uStack_150) {
      lVal_8 = CONCAT71(uStack_167,local_168);
      uVal_23 = uStack_150 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    uStack_158 = 0;
    uStack_153 = 0;
    uStack_151 = 0;
    uStack_150 = 0xf;
    local_168 = 0;
    if (0xf < (uint64_t)local_1c8._8_8_) {
      uVal_23 = local_1c8._8_8_ + 1;
      lVal_16 = local_1d8._0_8_;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(local_1d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_1d8._0_8_ + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = local_1c8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    if (local_98 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_98 + 0x20))(local_98,local_98 != (int64_t *)&uStack_d0);
      local_98 = (int64_t *)0x0;
    }
    if (0xf < uStack_e0) {
      uVal_23 = uStack_e0 + 1;
      lVal_16 = (int64_t)local_f8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)((int64_t)local_f8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_f8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    _local_e8 = ZEXT816(0xf) << 0x40;
    auArr_9[15] = 0;
    auArr_9._0_15_ = stack0xffffffffffffff09;
    _local_f8 = auArr_9 << 8;
    if (0xf < (uint64_t)local_178._8_8_) {
      uVal_23 = local_178._8_8_ + 1;
      lVal_16 = local_188._0_8_;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(local_188._0_8_ + -8);
        if (0x1f < (uint64_t)((local_188._0_8_ + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = local_178._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    local_290 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_290 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_2c8);
    }
    local_d8 = _DAT_1806cc9d5;
    uStack_d4 = _UNK_1806cc9d9;
    uStack_d0 = _UNK_1806cc9dd;
    uStack_cc = _UNK_1806cc9e1;
    auStack_e4 = (uint8_t  [4])_UNK_1806cc9c9;
    local_e8 = (uint8_t  [4])_DAT_1806cc9c5;
    uStack_e0._0_4_ = _UNK_1806cc9cd;
    uStack_e0._4_4_ = _UNK_1806cc9d1;
    uStack_f0 = _UNK_1806cc9bd;
    local_f8 = (uint8_t  [8])_DAT_1806cc9b5;
    local_c8 = 0x630a7041;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1423c) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x1423c) = 1;
      func_0x18012b270(lVal_16 + 0x14205,local_f8);
      func_0x180673140(&LAB_180435ff0);
    }
    uVal_13 = _UNK_1806af24c;
    uVal_12 = _UNK_1806af248;
    uVal_11 = _UNK_1806af244;
    uVal_10 = _DAT_1806af240;
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_16 + 0x14205);
    if (*(char *)(lVal_16 + 0x14239) == '\x01') {
      uVal_26 = *(uint *)(lVal_16 + 0x14209) ^ _UNK_1806af244;
      uVal_27 = *(uint *)(lVal_16 + 0x1420d) ^ _UNK_1806af248;
      uVal_28 = *(uint *)(lVal_16 + 0x14211) ^ _UNK_1806af24c;
      *pU64_3 = *pU64_3 ^ _DAT_1806af240;
      *(uint *)(lVal_16 + 0x14209) = uVal_26;
      *(uint *)(lVal_16 + 0x1420d) = uVal_27;
      *(uint *)(lVal_16 + 0x14211) = uVal_28;
      *(uint *)(lVal_16 + 0x14215) = *(uint *)(lVal_16 + 0x14215) ^ uVal_10;
      *(uint *)(lVal_16 + 0x14219) = *(uint *)(lVal_16 + 0x14219) ^ uVal_11;
      *(uint *)(lVal_16 + 0x1421d) = *(uint *)(lVal_16 + 0x1421d) ^ uVal_12;
      *(uint *)(lVal_16 + 0x14221) = *(uint *)(lVal_16 + 0x14221) ^ uVal_13;
      *(uint *)(lVal_16 + 0x14225) = *(uint *)(lVal_16 + 0x14225) ^ uVal_10;
      *(uint *)(lVal_16 + 0x14229) = *(uint *)(lVal_16 + 0x14229) ^ uVal_11;
      *(uint *)(lVal_16 + 0x1422d) = *(uint *)(lVal_16 + 0x1422d) ^ uVal_12;
      *(uint *)(lVal_16 + 0x14231) = *(uint *)(lVal_16 + 0x14231) ^ uVal_13;
      *(uint *)(lVal_16 + 0x14235) = *(uint *)(lVal_16 + 0x14235) ^ 0x63671535;
      *(uint8_t *)(lVal_16 + 0x14239) = 0;
    }
    uStack_158 = 0;
    uStack_153 = 0;
    uStack_151 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_167 = 0;
    uStack_160 = 0;
    uStack_15b = 0;
    uStack_159 = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_180407bce;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_66 = 1;
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_66 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_20 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_16;
      }
      local_168 = SUB81(pU64_20,0);
      uStack_167 = (undefined7)((uint64_t)pU64_20 >> 8);
    }
    uStack_158 = (undefined5)sz_14;
    uStack_153 = (uint16_t)(sz_14 >> 0x28);
    uStack_151 = (uint8_t)(sz_14 >> 0x38);
    uStack_150 = uVal_23;
    func_0x1806aa960(pU64_20,pU64_3,sz_14);
    pU64_20[sz_14] = 0;
    local_248 = (uint8_t)_DAT_1806cc9e9;
    uStack_247 = (undefined7)((uint64_t)_DAT_1806cc9e9 >> 8);
    uStack_240 = (undefined7)_UNK_1806cc9f1;
    uStack_239 = 0x676c5499;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14254) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14254) = 1;
      func_0x18007cb80(lVal_16 + 0x1423d,&local_248);
      func_0x180673140(&LAB_180436030);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x1423d);
    func_0x1801c17d0(fnPtr_1);
    _local_e8 = (uint8_t  [16])0x0;
    _local_f8 = (uint8_t  [16])0x0;
    sz_14 = strlen(fnPtr_1);
    if ((int64_t)sz_14 < 0) goto LAB_180407bdb;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_15) {
        uVal_23 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_65 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_65 = 1;
        lVal_16 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_16;
      }
      local_f8 = (uint8_t  [8])pU64_21;
    }
    uStack_e0 = uVal_23;
    _local_e8 = sz_14;
    func_0x1806aa960(pU64_21,fnPtr_1,sz_14);
    pU64_21[sz_14] = 0;
    uVal_30 = uVal_30 & 0xffffff00;
    pU64_21 = local_f8;
    pU64_20 = &local_168;
    func_0x1801d3a80(local_80,pU64_21,pU64_20,local_190,0,local_2c8,uVal_30);
    if (0xf < uStack_e0) {
      uVal_23 = uStack_e0 + 1;
      lVal_16 = (int64_t)local_f8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)((int64_t)local_f8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_f8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    if (0xf < uStack_150) {
      lVal_8 = CONCAT71(uStack_167,local_168);
      uVal_23 = uStack_150 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_23) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_180407ad0;
        uVal_23 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_23);
    }
    local_250 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_250 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_288);
    }
    pU64_19 = local_80 + 0x25;
    uVal_6 = *(uint8_t *)pU64_19;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x14258) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x14258) = 1;
      *(uint16_t *)(lVal_16 + 0x14255) = 0x199;
      func_0x180673140(&LAB_180436060);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_16 + 0x14255);
    if (*(char *)(lVal_16 + 0x14256) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x99;
      *(uint8_t *)(lVal_16 + 0x14256) = 0;
    }
    _local_f8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if (-1 < (int64_t)sz_14) {
      uVal_23 = 0xf;
      if (0xf < sz_14) {
        uVal_15 = sz_14 | 0xf;
        uVal_23 = 0x16;
        if (0x16 < uVal_15) {
          uVal_23 = uVal_15;
        }
        if (uVal_15 < 0xfff) {
          local_77 = 1;
          pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
        }
        else {
          local_77 = 1;
          lVal_16 = func_0x180672de0(uVal_23 + 0x28);
          pU64_21 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_21 + -8) = lVal_16;
        }
        local_f8 = (uint8_t  [8])pU64_21;
      }
      uStack_e0 = uVal_23;
      _local_e8 = sz_14;
      func_0x1806aa960(pU64_21,pU8_2,sz_14);
      pU64_21[sz_14] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x1426c) == '\0') {
        lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_16 + 0x1426c) = 1;
        *(uint64_t *)(lVal_16 + 0x14260) = 0x9de3f2eca8e232dd;
        *(uint32_t *)(lVal_16 + 0x14268) = 0x18f21f8;
        func_0x180673140(&LAB_180436080);
      }
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_5 = (uint64_t *)(lVal_16 + 0x14260);
      if (*(char *)(lVal_16 + 0x1426b) == '\x01') {
        *pU64_5 = *pU64_5 ^ 0xffc3978bc98f5399;
        *(uint *)(lVal_16 + 0x14268) =
             (*(uint *)(lVal_16 + 0x14268) & 0xffff | (uint)*(byte *)(lVal_16 + 0x1426a) << 0x10) ^
             SUB164(_DAT_1806b2700,0);
      }
      local_168 = 0;
      uStack_167 = 0;
      uStack_160 = 0;
      uStack_15b = 0;
      uStack_159 = 0;
      sz_14 = strlen((char *)pU64_5);
      if (-1 < (int64_t)sz_14) {
        uVal_23 = 0xf;
        if (0xf < sz_14) {
          uVal_15 = sz_14 | 0xf;
          uVal_23 = 0x16;
          if (0x16 < uVal_15) {
            uVal_23 = uVal_15;
          }
          if (uVal_15 < 0xfff) {
            local_76 = 1;
            pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
          }
          else {
            local_76 = 1;
            lVal_16 = func_0x180672de0(uVal_23 + 0x28);
            pU64_20 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_20 + -8) = lVal_16;
          }
          local_168 = SUB81(pU64_20,0);
          uStack_167 = (undefined7)((uint64_t)pU64_20 >> 8);
        }
        uStack_158 = (undefined5)sz_14;
        uStack_153 = (uint16_t)(sz_14 >> 0x28);
        uStack_151 = (uint8_t)(sz_14 >> 0x38);
        uStack_150 = uVal_23;
        func_0x1806aa960(pU64_20,pU64_5,sz_14);
        pU64_20[sz_14] = 0;
        func_0x1801ccd70(local_80,&local_168,local_f8,pU64_19,uVal_6,local_288,uVal_30 & 0xffffff00);
        if (0xf < uStack_150) {
          lVal_8 = CONCAT71(uStack_167,local_168);
          uVal_23 = uStack_150 + 1;
          lVal_16 = lVal_8;
          if (0xfff < uVal_23) {
            lVal_16 = *(int64_t *)(lVal_8 + -8);
            if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_180407ad0;
            uVal_23 = uStack_150 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_16,uVal_23);
        }
        if (0xf < uStack_e0) {
          uVal_23 = uStack_e0 + 1;
          lVal_16 = (int64_t)local_f8;
          if (0xfff < uVal_23) {
            lVal_16 = *(int64_t *)((int64_t)local_f8 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_f8 + -8) - lVal_16)) {
LAB_180407ad0:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_23 = uStack_e0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_16,uVal_23);
        }
        return local_80;
      }
      goto LAB_180407bf5;
    }
  }
  local_77 = 1;
  func_0x18007ba70();
LAB_180407bf5:
  local_76 = 1;
  func_0x18007ba70();
  fnPtr_7 = (func_ptr_t )swi(3);
  pU64_19 = (uint64_t *)(*fnPtr_7)();
  return pU64_19;
}

// Unwind@180407c10
void Unwind_180407c10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x88);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@180407c70
void Unwind_180407c70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 200);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@180407cd0
void Unwind_180407cd0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x108);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@180407d30
void Unwind_180407d30(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x140f8) = 0;
  *(uint8_t *)(param_2 + 0x5b6) = 1;
  return;
}

// Unwind@180407d90
void Unwind_180407d90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x148);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@180407e00
void Unwind_180407e00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x188);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@180407e70
void Unwind_180407e70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@180407ee0
void Unwind_180407ee0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x208);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1d0));
    *(uint64_t *)(param_2 + 0x208) = 0;
  }
  return;
}

// Unwind@180407f50
void Unwind_180407f50(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x248);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x210));
    *(uint64_t *)(param_2 + 0x248) = 0;
  }
  return;
}

// Unwind@180407fc0
void Unwind_180407fc0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14198) = 0;
  *(uint8_t *)(param_2 + 0x5b5) = 1;
  return;
}

// Unwind@180408020
void Unwind_180408020(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x288);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x250));
    *(uint64_t *)(param_2 + 0x288) = 0;
  }
  return;
}

// Unwind@180408090
void Unwind_180408090(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x141c4) = 0;
  *(uint8_t *)(param_2 + 0x5b4) = 1;
  return;
}

// Unwind@1804080f0
void Unwind_1804080f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x290));
    *(uint64_t *)(param_2 + 0x2c8) = 0;
  }
  return;
}

// Unwind@180408160
void Unwind_180408160(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x308);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2d0));
    *(uint64_t *)(param_2 + 0x308) = 0;
  }
  return;
}

// Unwind@1804081d0
void Unwind_1804081d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x348);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x310));
    *(uint64_t *)(param_2 + 0x348) = 0;
  }
  return;
}

// Unwind@180408240
void Unwind_180408240(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x388);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x350));
    *(uint64_t *)(param_2 + 0x388) = 0;
  }
  return;
}

// Unwind@1804082b0
void Unwind_1804082b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1423c) = 0;
  *(uint8_t *)(param_2 + 0x5b2) = 1;
  return;
}

// Unwind@180408310
void Unwind_180408310(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x3c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x390));
    *(uint64_t *)(param_2 + 0x3c8) = 0;
  }
  return;
}

// Unwind@180408380
void Unwind_180408380(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x520);
  return;
}

// Unwind@1804083d0
void Unwind_1804083d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4b0);
  *(uint8_t *)(param_2 + 0x5b1) = 0;
  return;
}

// Unwind@180408420
void Unwind_180408420(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x5b1);
  func_0x180001e70(param_2 + 0x520);
  *(uint8_t *)(param_2 + 0x5b0) = uVal_1;
  return;
}

// Unwind@180408470
void Unwind_180408470(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5b0) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1804084e0
void Unwind_1804084e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4b0);
  *(uint8_t *)(param_2 + 0x5af) = 0;
  return;
}

// Unwind@180408530
void Unwind_180408530(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x5af);
  func_0x180001e70(param_2 + 0x520);
  *(uint8_t *)(param_2 + 0x5ae) = uVal_1;
  return;
}

// Unwind@180408580
void Unwind_180408580(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5ae) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1804085f0
void Unwind_1804085f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x520);
  *(uint8_t *)(param_2 + 0x5b7) = 0;
  return;
}

// Unwind@180408640
void Unwind_180408640(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x5b7);
  func_0x180001e70(param_2 + 0x4b0);
  *(uint8_t *)(param_2 + 0x5b6) = uVal_1;
  return;
}

// Unwind@180408690
void Unwind_180408690(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5b6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@180408700
void Unwind_180408700(uint64_t param_1,int64_t param_2)
{
  func_0x180188250(param_2 + 0x4b0);
  return;
}

// Unwind@180408750
void Unwind_180408750(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x5ad) = 0;
  return;
}

// Unwind@1804087a0
void Unwind_1804087a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5ad) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x188), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@180408810
void Unwind_180408810(uint64_t param_1,int64_t param_2)
{
  func_0x180188250(param_2 + 0x520);
  return;
}

// Unwind@180408860
void Unwind_180408860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3d0);
  *(uint8_t *)(param_2 + 0x5ac) = 0;
  return;
}

// Unwind@1804088b0
void Unwind_1804088b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5ac) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@180408920
void Unwind_180408920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4b0);
  *(uint8_t *)(param_2 + 0x5ab) = 0;
  return;
}

// Unwind@180408970
void Unwind_180408970(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x5ab);
  func_0x180001e70(param_2 + 0x520);
  *(uint8_t *)(param_2 + 0x5aa) = uVal_1;
  return;
}

// Unwind@1804089c0
void Unwind_1804089c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5aa) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@180408a30
void Unwind_180408a30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4b0);
  *(uint8_t *)(param_2 + 0x5a9) = 0;
  return;
}

// Unwind@180408a80
void Unwind_180408a80(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x5a9);
  func_0x180001e70(param_2 + 0x520);
  *(uint8_t *)(param_2 + 0x5a8) = uVal_1;
  return;
}

// Unwind@180408ad0
void Unwind_180408ad0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5a8) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x208), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1d0));
    *(uint64_t *)(param_2 + 0x208) = 0;
  }
  return;
}

// Unwind@180408b40
void Unwind_180408b40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4b0);
  *(uint8_t *)(param_2 + 0x5a7) = 0;
  return;
}

// Unwind@180408b90
void Unwind_180408b90(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x5a7);
  func_0x180001e70(param_2 + 0x520);
  *(uint8_t *)(param_2 + 0x5b5) = uVal_1;
  return;
}

// Unwind@180408be0
void Unwind_180408be0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5b5) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x248), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x210));
    *(uint64_t *)(param_2 + 0x248) = 0;
  }
  return;
}

// Unwind@180408c50
void Unwind_180408c50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4b0);
  *(uint8_t *)(param_2 + 0x5a6) = 0;
  return;
}

// Unwind@180408ca0
void Unwind_180408ca0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x5a6);
  func_0x180001e70(param_2 + 0x520);
  *(uint8_t *)(param_2 + 0x5b4) = uVal_1;
  return;
}

// Unwind@180408cf0
void Unwind_180408cf0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5b4) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x288), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x250));
    *(uint64_t *)(param_2 + 0x288) = 0;
  }
  return;
}

// Unwind@180408d60
void Unwind_180408d60(uint64_t param_1,int64_t param_2)
{
  func_0x180188250(param_2 + 0x3d0);
  return;
}

// Unwind@180408db0
void Unwind_180408db0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x460);
  *(uint8_t *)(param_2 + 0x5a5) = 0;
  return;
}

// Unwind@180408e00
void Unwind_180408e00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5a5) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x348), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x310));
    *(uint64_t *)(param_2 + 0x348) = 0;
  }
  return;
}

// Unwind@180408e70
void Unwind_180408e70(uint64_t param_1,int64_t param_2)
{
  func_0x180188250(param_2 + 0x4b0);
  return;
}

// Unwind@180408ec0
void Unwind_180408ec0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x440);
  *(uint8_t *)(param_2 + 0x5a4) = 0;
  return;
}

// Unwind@180408f10
void Unwind_180408f10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5a4) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x308), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2d0));
    *(uint64_t *)(param_2 + 0x308) = 0;
  }
  return;
}

// Unwind@180408f80
void Unwind_180408f80(uint64_t param_1,int64_t param_2)
{
  func_0x180188250(param_2 + 0x520);
  return;
}

// Unwind@180408fd0
void Unwind_180408fd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x490);
  *(uint8_t *)(param_2 + 0x5a3) = 0;
  return;
}

// Unwind@180409020
void Unwind_180409020(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5a3) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x290));
    *(uint64_t *)(param_2 + 0x2c8) = 0;
  }
  return;
}

// Unwind@180409090
void Unwind_180409090(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x520);
  *(uint8_t *)(param_2 + 0x5b3) = 0;
  return;
}

// Unwind@1804090e0
void Unwind_1804090e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x5b3);
  func_0x180001e70(param_2 + 0x4b0);
  *(uint8_t *)(param_2 + 0x5b2) = uVal_1;
  return;
}

// Unwind@180409130
void Unwind_180409130(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5b2) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x388), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x350));
    *(uint64_t *)(param_2 + 0x388) = 0;
  }
  return;
}

// Unwind@1804091a0
void Unwind_1804091a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4b0);
  *(uint8_t *)(param_2 + 0x5a2) = 0;
  return;
}

// Unwind@1804091f0
void Unwind_1804091f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x5a2);
  func_0x180001e70(param_2 + 0x520);
  *(uint8_t *)(param_2 + 0x5a1) = uVal_1;
  return;
}

// Unwind@180409240
void Unwind_180409240(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5a1) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x3c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x390));
    *(uint64_t *)(param_2 + 0x3c8) = 0;
  }
  return;
}

// Unwind@1804092b0
void Unwind_1804092b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800822d0(*(uint64_t *)(param_2 + 0x488));
  func_0x1800822d0(*(uint64_t *)(param_2 + 0x480));
  func_0x18018ce50(*(uint64_t *)(param_2 + 0x598));
  return;
}

// Unwind@180409310
void Unwind_180409310(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1409c) = 0;
  return;
}

// Unwind@180409370
void Unwind_180409370(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14110) = 0;
  *(uint8_t *)(param_2 + 0x5b7) = 1;
  return;
}

// Unwind@1804093d0
void Unwind_1804093d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14254) = 0;
  *(uint8_t *)(param_2 + 0x5b3) = 1;
  return;
}

// Unwind@1804096d0
void Unwind_1804096d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14294) = 0;
  return;
}

// Unwind@180409920
void Unwind_180409920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x180409950
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180409950(int64_t param_1,int64_t param_2,float param_3,float param_4,uint64_t *param_5 )
{
  int *pInt_1;
  uint64_t *pU64_2;
  func_ptr_t fnPtr_3;
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint32_t uVal_14;
  uint32_t uVal_15;
  uint32_t uVal_16;
  uint32_t uVal_17;
  uint32_t uVal_18;
  uint32_t uVal_19;
  uint32_t uVal_20;
  uint uVal_21;
  uint8_t auArr_22 [16];
  uint8_t auArr_23 [12];
  float fVal_24;
  float fVal_25;
  float fVal_26;
  float fVal_27;
  char *fnPtr_28;
  char ch_29;
  short sz_30;
  short sz_31;
  short sz_32;
  uint32_t uVal_33;
  int64_t lVal_34;
  uint64_t uVal_35;
  uint32_t *pU64_36;
  int64_t lVal_37;
  size_t sz_38;
  int64_t lVal_39;
  uint8_t (*pArr16_40)[16];
  uint64_t uVal_41;
  uint64_t *pU64_42;
  uint32_t extraout_var;
  uint64_t uVal_43;
  uint64_t uVal_44;
  uint64_t uVal_45;
  uint64_t *******ptr7_U64_46;
  uint8_t (*pArr16_47)[16];
  int64_t *pLong_48;
  uint64_t *******ptr7_U64_49;
  uint64_t ******ptr6_U64_50;
  int64_t *pLong_51;
  int iVal_52;
  uint64_t uVal_53;
  uint32_t *pU64_54;
  int64_t lVal_55;
  char *fnPtr_56;
  uint64_t uVal_57;
  uint8_t *pU64_58;
  bool bFlag_59;
  float fVal_60;
  uint8_t auArr_61 [16];
  uint8_t auArr_62 [16];
  float fVal_63;
  float fVal_64;
  float fVal_67;
  float fVal_68;
  float fVal_69;
  float fVal_70;
  uint8_t auArr_65 [16];
  float fVal_71;
  float fVal_72;
  float fVal_73;
  float fVal_74;
  uint8_t auArr_75 [16];
  float fVal_76;
  float fVal_77;
  float fVal_78;
  float fVal_79;
  float fVal_80;
  float fVal_81;
  float fVal_82;
  float fVal_83;
  float fVal_84;
  float fVal_85;
  uint8_t auArr_86 [16];
  uint8_t auArr_87 [16];
  float fVal_88;
  uint64_t in_stack_fffffffffffffe38;
  uint64_t uVal_89;
  uint in_stack_fffffffffffffe40;
  uint32_t uVal_90;
  float local_1b0;
  float local_1ac;
  uint32_t local_1a8;
  uint32_t local_1a4;
  int64_t local_1a0 [2];
  int64_t local_190;
  uint64_t local_188;
  int64_t local_180;
  uint local_178;
  uint32_t uStack_174;
  uint32_t uStack_170;
  uint32_t uStack_16c;
  uint64_t ******local_168;
  uint64_t ******ppppppuStack_160;
  uint64_t *******local_158 [2];
  uint64_t local_148;
  uint64_t uStack_140;
  int64_t local_138;
  int local_12c;
  uint8_t local_128 [16];
  uint64_t local_118;
  int64_t *plStack_110;
  uint32_t local_108;
  uint32_t uStack_104;
  uint32_t uStack_100;
  uint32_t uStack_fc;
  uint32_t uStack_f8;
  uint32_t uStack_f4;
  uint8_t auStack_f0 [16];
  uint64_t local_e0;
  uint64_t local_d8;
  uint8_t local_c8 [4];
  uint32_t uStack_c4;
  uint64_t uStack_c0;
  uint64_t local_b8;
  uint64_t uStack_b0;
  short local_a2;
  uint64_t local_a0;
  uint64_t extraout_XMM0_Qb;
  uint8_t auArr_66 [16];
  
  local_a0 = 0xfffffffffffffffe;
  if (*(char *)(param_5 + 8) == '\0') {
    if (*(int64_t **)(param_2 + 8) == (int64_t *)0x0) {
      lVal_37 = 0;
    }
    else {
      lVal_37 = **(int64_t **)(param_2 + 8);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x142b4) == '\0') {
      lVal_39 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_39 + 0x142b4) = 1;
      *(uint64_t *)(lVal_39 + 0x142a8) = 0xcc1e1e746e054027;
      *(uint32_t *)(lVal_39 + 0x142b0) = 0x16b4035;
      func_0x180673140(&LAB_180436140);
    }
    lVal_39 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_39 + 0x142a8);
    if (*(char *)(lVal_39 + 0x142b3) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xad7941110d6b2541;
      *(uint *)(lVal_39 + 0x142b0) =
           (*(uint *)(lVal_39 + 0x142b0) & 0xffff | (uint)*(byte *)(lVal_39 + 0x142b2) << 0x10) ^
           SUB164(_DAT_1806bb2d0,0);
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    sz_38 = strlen((char *)pU64_2);
    if (-1 < (int64_t)sz_38) {
      if (sz_38 < 0x10) {
        pU64_54 = &local_108;
        uVal_53 = 0xf;
      }
      else {
        uVal_57 = sz_38 | 0xf;
        uVal_53 = 0x16;
        if (0x16 < uVal_57) {
          uVal_53 = uVal_57;
        }
        if (uVal_57 < 0xfff) {
          pU64_54 = (uint32_t *)func_0x180672de0(uVal_53 + 1);
        }
        else {
          lVal_39 = func_0x180672de0(uVal_53 + 0x28);
          pU64_54 = (uint32_t *)(lVal_39 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_54 + -2) = lVal_39;
        }
        local_108 = SUB84(pU64_54,0);
        uStack_104 = (uint32_t)((uint64_t)pU64_54 >> 0x20);
      }
      uStack_f8 = (uint32_t)sz_38;
      uStack_f4 = (uint32_t)(sz_38 >> 0x20);
      auStack_f0._0_8_ = uVal_53;
      func_0x1806aa960(pU64_54,pU64_2,sz_38);
      *(uint8_t *)((int64_t)pU64_54 + sz_38) = 0;
      uVal_53 = CONCAT44(uStack_f4,uStack_f8);
      uVal_57 = auStack_f0._0_8_;
      if (*(uint64_t *)(lVal_37 + 0xe8) < uVal_53) {
        bFlag_59 = false;
      }
      else {
        if ((uint64_t)auStack_f0._0_8_ < 0x10) {
          pU64_54 = &local_108;
          if (*(uint64_t *)(lVal_37 + 0xf0) < 0x10) goto LAB_180409aff;
LAB_180409b16:
          lVal_39 = *(int64_t *)(lVal_37 + 0xd8);
        }
        else {
          pU64_54 = (uint32_t *)CONCAT44(uStack_104,local_108);
          if (0xf < *(uint64_t *)(lVal_37 + 0xf0)) goto LAB_180409b16;
LAB_180409aff:
          lVal_39 = lVal_37 + 0xd8;
        }
        iVal_52 = memcmp((void *)(lVal_39 + (*(uint64_t *)(lVal_37 + 0xe8) - uVal_53)),pU64_54,uVal_53);
        bFlag_59 = iVal_52 == 0;
      }
      if (0xf < uVal_57) {
        lVal_39 = CONCAT44(uStack_104,local_108);
        uVal_53 = uVal_57 + 1;
        lVal_37 = lVal_39;
        if (0xfff < uVal_53) {
          lVal_37 = *(int64_t *)(lVal_39 + -8);
          if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_37)) goto LAB_18040b225;
          uVal_53 = uVal_57 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_37,uVal_53);
      }
      goto LAB_180409b69;
    }
LAB_18040b220:
    func_0x18007ba70();
    goto LAB_18040b225;
  }
  bFlag_59 = false;
LAB_180409b69:
  lVal_34 = func_0x180129cf0(DAT_180840a58);
  *(uint8_t *)(lVal_34 + 0x78) = 1;
  lVal_37 = *(int64_t *)(lVal_34 + 0x60);
  uVal_57 = *(uint64_t *)(lVal_34 + 0x58);
  lVal_39 = *(int64_t *)(lVal_34 + 0x48);
  uVal_53 = *(uint64_t *)(lVal_34 + 0x50) - 1;
  pU64_54 = *(uint32_t **)(lVal_39 + (lVal_37 + -1 + uVal_57 & uVal_53) * 8);
  if (*(uint64_t *)(lVal_34 + 0x50) <= lVal_37 + 1U) {
    func_0x1800f0d80(lVal_34 + 0x40,1);
    lVal_39 = *(int64_t *)(lVal_34 + 0x48);
    lVal_37 = *(int64_t *)(lVal_34 + 0x60);
    uVal_57 = *(uint64_t *)(lVal_34 + 0x58);
    uVal_53 = *(int64_t *)(lVal_34 + 0x50) - 1;
  }
  *(uint64_t *)(lVal_34 + 0x58) = uVal_57 & uVal_53;
  uVal_57 = (uVal_57 & uVal_53) + lVal_37;
  uVal_53 = uVal_53 & uVal_57;
  pU64_36 = *(uint32_t **)(lVal_39 + uVal_53 * 8);
  if (pU64_36 == (uint32_t *)0x0) {
    uVal_35 = func_0x180672de0(0x40);
    *(uint64_t *)(*(int64_t *)(lVal_34 + 0x48) + uVal_53 * 8) = uVal_35;
    pU64_36 = *(uint32_t **)
               (*(int64_t *)(lVal_34 + 0x48) + (*(int64_t *)(lVal_34 + 0x50) - 1U & uVal_57) * 8);
  }
  uVal_33 = *pU64_54;
  uVal_90 = pU64_54[1];
  uVal_8 = pU64_54[2];
  uVal_9 = pU64_54[3];
  uVal_10 = pU64_54[4];
  uVal_11 = pU64_54[5];
  uVal_12 = pU64_54[6];
  uVal_13 = pU64_54[7];
  uVal_14 = pU64_54[8];
  uVal_15 = pU64_54[9];
  uVal_16 = pU64_54[10];
  uVal_17 = pU64_54[0xb];
  uVal_18 = pU64_54[0xd];
  uVal_19 = pU64_54[0xe];
  uVal_20 = pU64_54[0xf];
  pU64_36[0xc] = pU64_54[0xc];
  pU64_36[0xd] = uVal_18;
  pU64_36[0xe] = uVal_19;
  pU64_36[0xf] = uVal_20;
  pU64_36[8] = uVal_14;
  pU64_36[9] = uVal_15;
  pU64_36[10] = uVal_16;
  pU64_36[0xb] = uVal_17;
  pU64_36[4] = uVal_10;
  pU64_36[5] = uVal_11;
  pU64_36[6] = uVal_12;
  pU64_36[7] = uVal_13;
  *pU64_36 = uVal_33;
  pU64_36[1] = uVal_90;
  pU64_36[2] = uVal_8;
  pU64_36[3] = uVal_9;
  lVal_37 = *(int64_t *)(lVal_34 + 0x60);
  *(int64_t *)(lVal_34 + 0x60) = lVal_37 + 1;
  pArr16_40 = *(uint8_t (**)[16])
              (*(int64_t *)(lVal_34 + 0x48) +
              (*(int64_t *)(lVal_34 + 0x50) - 1U & lVal_37 + *(int64_t *)(lVal_34 + 0x58)) * 8);
  if (bFlag_59) {
    fVal_79 = *(float *)(param_1 + 0xd0);
    fVal_60 = DAT_1806b6758 * fVal_79;
    param_3 = DAT_1806b55e4 * fVal_79 + param_3;
    param_4 = fVal_79 * DAT_1806bb220 + param_4;
    auArr_65 = *pArr16_40;
    fVal_63 = auArr_65._0_4_;
    fVal_67 = auArr_65._4_4_;
    fVal_69 = auArr_65._8_4_;
    fVal_70 = auArr_65._12_4_;
    fVal_79 = *(float *)(*pArr16_40 + 0xc);
    fVal_64 = *(float *)pArr16_40[1];
    fVal_68 = *(float *)(pArr16_40[1] + 4);
    fVal_81 = *(float *)(pArr16_40[1] + 8);
    auArr_87 = pArr16_40[1];
    fVal_76 = auArr_87._0_4_;
    fVal_77 = auArr_87._4_4_;
    fVal_78 = auArr_87._8_4_;
    fVal_80 = auArr_87._12_4_;
    fVal_82 = *(float *)pArr16_40[2];
    fVal_83 = *(float *)(pArr16_40[2] + 4);
    fVal_84 = *(float *)(pArr16_40[2] + 8);
    fVal_85 = *(float *)(pArr16_40[2] + 0xc);
    auArr_4._4_4_ = *(float *)(pArr16_40[3] + 4) +
                   param_3 * fVal_67 + param_4 * fVal_77 + _UNK_1806b6054 * fVal_83;
    auArr_4._0_4_ = *(float *)pArr16_40[3] +
                   param_3 * fVal_63 + param_4 * fVal_76 + _DAT_1806b6050 * fVal_82;
    auArr_4._8_4_ = *(float *)(pArr16_40[3] + 8) +
                   param_3 * fVal_69 + param_4 * fVal_78 + _UNK_1806b6058 * fVal_84;
    auArr_4._12_4_ =
         *(float *)(pArr16_40[3] + 0xc) +
         param_3 * fVal_70 + param_4 * fVal_80 + _UNK_1806b605c * fVal_85;
    pArr16_40[3] = auArr_4;
    fVal_27 = _UNK_1806b60cc;
    fVal_26 = _UNK_1806b60c8;
    fVal_25 = _UNK_1806b60c4;
    fVal_24 = _DAT_1806b60c0;
    fVal_71 = (fVal_76 * 0.0 - _DAT_1806b6060 * fVal_63) + fVal_82 * _DAT_1806b6060;
    fVal_72 = (fVal_77 * 0.0 - _UNK_1806b6064 * fVal_67) + fVal_83 * _UNK_1806b6064;
    fVal_73 = (fVal_78 * 0.0 - _UNK_1806b6068 * fVal_69) + fVal_84 * _UNK_1806b6068;
    fVal_74 = (fVal_80 * 0.0 - _UNK_1806b606c * fVal_70) + fVal_85 * _UNK_1806b606c;
    fVal_63 = _DAT_1806b6090 * fVal_63 + _DAT_1806b6070 * fVal_76 + fVal_82 * _DAT_1806b6090;
    fVal_67 = _UNK_1806b6094 * fVal_67 + _UNK_1806b6074 * fVal_77 + fVal_83 * _UNK_1806b6094;
    fVal_69 = _UNK_1806b6098 * fVal_69 + _UNK_1806b6078 * fVal_78 + fVal_84 * _UNK_1806b6098;
    fVal_70 = _UNK_1806b609c * fVal_70 + _UNK_1806b607c * fVal_80 + fVal_85 * _UNK_1806b609c;
    auArr_65 = blendps(auArr_65,auArr_87,8);
    fVal_64 = auArr_65._0_4_ * _DAT_1806b60b0 + fVal_64 * _DAT_1806b6080 + fVal_82 * _DAT_1806b60a0;
    fVal_68 = auArr_65._4_4_ * _UNK_1806b60b4 + fVal_68 * _UNK_1806b6084 + fVal_83 * _UNK_1806b60a4;
    auArr_66._0_8_ = CONCAT44(fVal_68,fVal_64);
    auArr_66._8_4_ =
         auArr_65._8_4_ * _UNK_1806b60b8 + fVal_81 * _UNK_1806b6088 + fVal_84 * _UNK_1806b60a8;
    auArr_66._12_4_ =
         auArr_65._12_4_ * _UNK_1806b60bc + fVal_79 * _UNK_1806b608c + fVal_85 * _UNK_1806b60ac;
    fVal_64 = _DAT_1806b60d0 * fVal_64;
    fVal_68 = _UNK_1806b60d4 * fVal_68;
    fVal_79 = _UNK_1806b60d8 * auArr_66._8_4_;
    fVal_81 = _UNK_1806b60dc * auArr_66._12_4_;
    auArr_75._0_4_ = _DAT_1806b60e0 * fVal_63;
    auArr_75._4_4_ = _UNK_1806b60e4 * fVal_67;
    auArr_75._8_4_ = _UNK_1806b60e8 * fVal_69;
    auArr_75._12_4_ = _UNK_1806b60ec * fVal_70;
    auArr_7._4_4_ = ((auArr_75._4_4_ + fVal_68) - fVal_72 * _UNK_1806b60c4) * fVal_60;
    auArr_7._0_4_ = ((auArr_75._0_4_ + fVal_64) - fVal_71 * _DAT_1806b60c0) * fVal_60;
    auArr_7._8_4_ = ((auArr_75._8_4_ + fVal_79) - fVal_73 * _UNK_1806b60c8) * fVal_60;
    auArr_7._12_4_ = ((auArr_75._12_4_ + fVal_81) - fVal_74 * _UNK_1806b60cc) * fVal_60;
    *pArr16_40 = auArr_7;
    fVal_85 = fVal_72 * _UNK_1806b6104;
    fVal_76 = fVal_73 * _UNK_1806b6108;
    fVal_77 = fVal_74 * _UNK_1806b610c;
    auArr_86._8_4_ = auArr_66._8_4_;
    auArr_86._0_8_ = auArr_66._0_8_;
    auArr_86._12_4_ = auArr_66._12_4_;
    auArr_5._4_4_ = fVal_67;
    auArr_5._0_4_ = fVal_63;
    auArr_5._8_4_ = fVal_69;
    auArr_5._12_4_ = fVal_70;
    auArr_87 = blendps(auArr_86,auArr_5,10);
    fVal_78 = auArr_87._4_4_ * _UNK_1806b6114;
    fVal_80 = auArr_87._8_4_ * _UNK_1806b6118;
    fVal_88 = auArr_87._12_4_ * _UNK_1806b611c;
    auArr_6._4_4_ = fVal_67;
    auArr_6._0_4_ = fVal_63;
    auArr_6._8_4_ = fVal_69;
    auArr_6._12_4_ = fVal_70;
    auArr_65 = blendps(auArr_66,auArr_6,5);
    fVal_82 = _UNK_1806b6104 * auArr_65._4_4_;
    fVal_83 = _UNK_1806b6108 * auArr_65._8_4_;
    fVal_84 = _UNK_1806b610c * auArr_65._12_4_;
    *(float *)pArr16_40[1] =
         ((auArr_87._0_4_ * _DAT_1806b6110 - _DAT_1806b6100 * auArr_65._0_4_) -
         fVal_71 * _DAT_1806b6100) * fVal_60;
    *(float *)(pArr16_40[1] + 4) = ((fVal_78 - fVal_82) - fVal_85) * fVal_60;
    *(float *)(pArr16_40[1] + 8) = ((fVal_80 - fVal_83) - fVal_76) * fVal_60;
    *(float *)(pArr16_40[1] + 0xc) = ((fVal_88 - fVal_84) - fVal_77) * fVal_60;
    fVal_72 = fVal_72 * _UNK_1806b6124;
    fVal_73 = fVal_73 * _UNK_1806b6128;
    fVal_74 = fVal_74 * _UNK_1806b612c;
    auArr_87._4_4_ = fVal_68;
    auArr_87._0_4_ = fVal_64;
    auArr_87._8_4_ = fVal_79;
    auArr_87._12_4_ = fVal_81;
    auArr_87 = blendps(auArr_75,auArr_87,5);
    *(float *)pArr16_40[2] =
         ((auArr_87._0_4_ - auArr_65._0_4_ * fVal_24) + fVal_71 * _DAT_1806b6120) * fVal_60;
    *(float *)(pArr16_40[2] + 4) = ((auArr_87._4_4_ - auArr_65._4_4_ * fVal_25) + fVal_72) * fVal_60;
    *(float *)(pArr16_40[2] + 8) = ((auArr_87._8_4_ - auArr_65._8_4_ * fVal_26) + fVal_73) * fVal_60;
    *(float *)(pArr16_40[2] + 0xc) = ((auArr_87._12_4_ - auArr_65._12_4_ * fVal_27) + fVal_74) * fVal_60;
  }
  else {
    fVal_79 = *(float *)(*pArr16_40 + 4);
    fVal_64 = *(float *)(*pArr16_40 + 8);
    fVal_68 = *(float *)(*pArr16_40 + 0xc);
    fVal_81 = *(float *)pArr16_40[1];
    fVal_82 = *(float *)(pArr16_40[1] + 4);
    fVal_83 = *(float *)(pArr16_40[1] + 8);
    fVal_84 = *(float *)(pArr16_40[1] + 0xc);
    auArr_65._4_4_ =
         param_3 * fVal_79 + param_4 * fVal_82 + *(float *)(pArr16_40[2] + 4) * 0.0 +
         *(float *)(pArr16_40[3] + 4);
    auArr_65._0_4_ =
         param_3 * *(float *)*pArr16_40 + param_4 * fVal_81 + *(float *)pArr16_40[2] * 0.0 +
         *(float *)pArr16_40[3];
    auArr_65._8_4_ =
         param_3 * fVal_64 + param_4 * fVal_83 + *(float *)(pArr16_40[2] + 8) * 0.0 +
         *(float *)(pArr16_40[3] + 8);
    auArr_65._12_4_ =
         param_3 * fVal_68 + param_4 * fVal_84 + *(float *)(pArr16_40[2] + 0xc) * 0.0 +
         *(float *)(pArr16_40[3] + 0xc);
    pArr16_40[3] = auArr_65;
    fVal_85 = *(float *)(param_1 + 0xd0);
    *(float *)*pArr16_40 = *(float *)*pArr16_40 * fVal_85;
    *(float *)(*pArr16_40 + 4) = fVal_79 * fVal_85;
    *(float *)(*pArr16_40 + 8) = fVal_64 * fVal_85;
    *(float *)(*pArr16_40 + 0xc) = fVal_68 * fVal_85;
    *(float *)pArr16_40[1] = fVal_85 * fVal_81;
    *(float *)(pArr16_40[1] + 4) = fVal_85 * fVal_82;
    *(float *)(pArr16_40[1] + 8) = fVal_85 * fVal_83;
    *(float *)(pArr16_40[1] + 0xc) = fVal_85 * fVal_84;
  }
  lVal_37 = func_0x1800cf950();
  if (*(char *)(param_5 + 8) == '\x01') {
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x142c8) == '\0') {
      lVal_39 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_39 + 0x142c8) = 1;
      *(uint64_t *)(lVal_39 + 0x142b8) = 0x745c4fb23369829f;
      *(uint32_t *)(lVal_39 + 0x142c0) = 0x687892c4;
      *(uint16_t *)(lVal_39 + 0x142c4) = 0x1c7;
      func_0x180673140(&LAB_180436170);
    }
    lVal_39 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_39 + 0x142b8);
    if (*(char *)(lVal_39 + 0x142c5) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x7393dc74711e7eb;
      *(uint *)(lVal_39 + 0x142c0) = *(uint *)(lVal_39 + 0x142c0) ^ 0x4711e7eb;
      *(byte *)(lVal_39 + 0x142c4) = *(byte *)(lVal_39 + 0x142c4) ^ 199;
      *(uint8_t *)(lVal_39 + 0x142c5) = 0;
    }
    _local_c8 = ZEXT816(0);
    sz_38 = strlen((char *)pU64_2);
    if ((int64_t)sz_38 < 0) goto LAB_18040b220;
    if (sz_38 < 0x10) {
      pU64_58 = local_c8;
      uVal_53 = 0xf;
    }
    else {
      uVal_57 = sz_38 | 0xf;
      uVal_53 = 0x16;
      if (0x16 < uVal_57) {
        uVal_53 = uVal_57;
      }
      if (uVal_57 < 0xfff) {
        pU64_58 = (uint8_t *)func_0x180672de0(uVal_53 + 1);
      }
      else {
        lVal_39 = func_0x180672de0(uVal_53 + 0x28);
        pU64_58 = (uint8_t *)(lVal_39 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_58 + -8) = lVal_39;
      }
      _local_c8 = (uint8_t (*)[16])pU64_58;
    }
    local_b8 = sz_38;
    uStack_b0 = uVal_53;
    func_0x1806aa960(pU64_58,pU64_2,sz_38);
    pU64_58[sz_38] = 0;
    uVal_53 = param_5[2];
    pU64_42 = param_5;
    if (0xf < (uint64_t)param_5[3]) {
      pU64_42 = (uint64_t *)*param_5;
    }
    if (uStack_b0 - local_b8 < uVal_53) {
      pArr16_40 = (uint8_t (*)[16])func_0x180082950(local_c8,uVal_53,uVal_53,pU64_42,uVal_53);
    }
    else {
      sz_38 = local_b8 + uVal_53;
      pArr16_40 = (uint8_t (*)[16])local_c8;
      pArr16_47 = pArr16_40;
      if (0xf < uStack_b0) {
        pArr16_47 = _local_c8;
      }
      pU64_58 = *pArr16_47 + local_b8;
      local_b8 = sz_38;
      func_0x1806aa960(pU64_58,pU64_42);
      (*pArr16_47)[sz_38] = 0;
    }
    auArr_23 = *(uint8_t (*)[12])*pArr16_40;
    auArr_65 = *pArr16_40;
    uVal_21 = *(uint *)pArr16_40[1];
    uVal_53 = *(uint64_t *)pArr16_40[1];
    pLong_51 = *(int64_t **)(pArr16_40[1] + 8);
    *(uint64_t *)pArr16_40[1] = 0;
    *(uint64_t *)(pArr16_40[1] + 8) = 0xf;
    (*pArr16_40)[0] = 0;
    local_128._0_8_ = auArr_23._0_8_;
    fnPtr_28 = (char *)local_128._0_8_;
    fnPtr_56 = local_128;
    if (&DAT_0000000f < pLong_51) {
      fnPtr_56 = (char *)local_128._0_8_;
    }
    local_108 = 0;
    auStack_f0 = ZEXT816(0);
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    local_128 = auArr_65;
    local_118 = uVal_53;
    plStack_110 = pLong_51;
    if ((int64_t)uVal_53 < 0) {
      func_0x18007ba70();
      fnPtr_3 = (func_ptr_t )swi(3);
      (*fnPtr_3)();
      return;
    }
    if (uVal_53 < 0x10) {
      auStack_f0._8_8_ = 0xf;
      auStack_f0._0_8_ = uVal_53;
      func_0x1806aa960(&uStack_100,fnPtr_56);
      *(uint8_t *)((int64_t)&uStack_100 + uVal_53) = 0;
      if (uVal_53 != 0) goto LAB_18040a69f;
      local_d8 = 0xaf63bd4c8601b7df;
      local_e0 = 0;
    }
    else {
      uVal_41 = uVal_53 | 0xf;
      uVal_57 = 0x16;
      if (0x16 < uVal_41) {
        uVal_57 = uVal_41;
      }
      local_138 = lVal_37;
      if (uVal_41 < 0xfff) {
        uVal_41 = func_0x180672de0(uVal_57 + 1);
      }
      else {
        lVal_37 = func_0x180672de0(uVal_57 + 0x28);
        uVal_41 = lVal_37 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_41 - 8) = lVal_37;
      }
      uStack_100 = (uint32_t)uVal_41;
      uStack_fc = (uint32_t)(uVal_41 >> 0x20);
      auStack_f0._8_8_ = uVal_57;
      auStack_f0._0_8_ = uVal_53;
      func_0x1806aa960(uVal_41,fnPtr_56);
      *(uint8_t *)(uVal_41 + uVal_53) = 0;
      lVal_37 = local_138;
LAB_18040a69f:
      uVal_57 = (uint64_t)(uVal_21 & 7);
      if (uVal_53 - 1 < 7) {
        local_e0 = 0xcbf29ce484222325;
LAB_18040a74e:
        uVal_53 = 0;
        do {
          local_e0 = local_e0 * 0x100000001b3 ^ (int64_t)fnPtr_56[uVal_53];
          uVal_53 = uVal_53 + 1;
        } while (uVal_57 != uVal_53);
      }
      else {
        uVal_53 = uVal_53 & 0x7ffffffffffffff8;
        local_e0 = 0xcbf29ce484222325;
        do {
          local_e0 = (((((((local_e0 * 0x100000001b3 ^ (int64_t)*fnPtr_56) * 0x100000001b3 ^
                          (int64_t)fnPtr_56[1]) * 0x100000001b3 ^ (int64_t)fnPtr_56[2]) *
                         0x100000001b3 ^ (int64_t)fnPtr_56[3]) * 0x100000001b3 ^
                       (int64_t)fnPtr_56[4]) * 0x100000001b3 ^ (int64_t)fnPtr_56[5]) * 0x100000001b3
                     ^ (int64_t)fnPtr_56[6]) * 0x100000001b3 ^ (int64_t)fnPtr_56[7];
          fnPtr_56 = fnPtr_56 + 8;
          uVal_53 = uVal_53 - 8;
        } while (uVal_53 != 0);
        if (uVal_57 != 0) goto LAB_18040a74e;
      }
      local_d8 = ((uint64_t)(byte)local_108 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ local_e0;
    }
    if (&DAT_0000000f < pLong_51) {
      pLong_48 = (int64_t *)((int64_t)pLong_51 + 1);
      fnPtr_56 = fnPtr_28;
      if ((int64_t *)0xfff < pLong_48) {
        fnPtr_56 = *(char **)(fnPtr_28 + -8);
        if ((char *)0x1f < fnPtr_28 + (-8 - (int64_t)fnPtr_56)) goto LAB_18040b225;
        pLong_48 = pLong_51 + 5;
      }
      thunk_FUN_180695dd0(fnPtr_56,pLong_48);
    }
    if (0xf < uStack_b0) {
      uVal_53 = uStack_b0 + 1;
      lVal_39 = (int64_t)_local_c8;
      if (0xfff < uVal_53) {
        lVal_39 = *(int64_t *)((int64_t)_local_c8 + -8);
        if (0x1f < (uint64_t)(((int64_t)_local_c8 + -8) - lVal_39)) goto LAB_18040b225;
        uVal_53 = uStack_b0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_39,uVal_53);
    }
    func_0x18011b920(DAT_180840a50,local_c8);
    uVal_33 = 0;
    func_0x180101570((int64_t)_local_c8 + 0x18,local_128,&local_108,0,0,
                  in_stack_fffffffffffffe40 & 0xffffff00);
    pLong_51 = uStack_c0;
    if (uStack_c0 != (int64_t *)0x0) {
      LOCK();
      pLong_48 = uStack_c0 + 1;
      *(int *)pLong_48 = *(int *)pLong_48 + -1;
      UNLOCK();
      if (*(int *)pLong_48 == 0) {
        (**(func_ptr_t *)*uStack_c0)(uStack_c0);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_51 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_51 + 8))(pLong_51);
        }
      }
    }
    func_0x180107830(lVal_37,1,0,0);
    func_0x180108220(lVal_37,param_5 + 6);
    func_0x180107e20(lVal_37);
    func_0x180107e20(lVal_37);
    func_0x180107e20(lVal_37);
    uVal_90 = *(uint32_t *)((int64_t)param_5 + 0x24);
    uVal_89 = CONCAT44(uVal_33,*(float *)(param_5 + 4) + *(float *)(param_5 + 5));
    func_0x180107e20(lVal_37);
    uVal_35 = local_128._0_8_;
    uVal_43 = func_0x1800cf980();
    uVal_44 = func_0x1800cf950();
    uVal_45 = func_0x1800cf960();
    thunk_FUN_18011b3c0(uVal_45,uVal_44,uVal_43,uVal_35,uVal_89,uVal_90);
    pLong_48 = plStack_110;
    *(uint8_t *)(lVal_34 + 0x78) = 1;
    pLong_51 = (int64_t *)(lVal_34 + 0x60);
    *pLong_51 = *pLong_51 + -1;
    if (*pLong_51 == 0) {
      *(uint64_t *)(lVal_34 + 0x58) = 0;
    }
    if (plStack_110 != (int64_t *)0x0) {
      LOCK();
      pLong_51 = plStack_110 + 1;
      *(int *)pLong_51 = *(int *)pLong_51 + -1;
      UNLOCK();
      if (*(int *)pLong_51 == 0) {
        (**(func_ptr_t *)*plStack_110)(plStack_110);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_48 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_48 + 8))(pLong_48);
        }
      }
    }
    pLong_51 = (int64_t *)local_128._8_8_;
    if ((int64_t *)local_128._8_8_ != (int64_t *)0x0) {
      LOCK();
      pLong_48 = (int64_t *)(local_128._8_8_ + 8);
      *(int *)pLong_48 = *(int *)pLong_48 + -1;
      UNLOCK();
      if (*(int *)pLong_48 == 0) {
        (***(func_ptr_t **)local_128._8_8_)(local_128._8_8_);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_51 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_51 + 8))(pLong_51);
        }
      }
    }
    if ((uint64_t)auStack_f0._8_8_ < 0x10) {
      return;
    }
    lVal_37 = CONCAT44(uStack_fc,uStack_100);
    uVal_53 = auStack_f0._8_8_;
  }
  else {
    sz_30 = func_0x180118160(param_2);
    sz_31 = func_0x180117d70(param_2);
    sz_32 = func_0x180118160(param_2);
    iVal_52 = (int)(((float)((int)sz_30 - (int)sz_31) / (float)(int)sz_32) * DAT_1806b613c);
    local_a2 = func_0x180118160(param_2);
    local_1a8 = 0;
    local_1ac = DAT_1806b26b4;
    if (iVal_52 < 0x47) {
      local_1b0 = DAT_1806b26b4;
      if (iVal_52 < 0x29) {
        local_1ac = 0.0;
        if (iVal_52 < 0xb) {
          local_1a8 = DAT_1806c9098;
        }
        local_1b0 = *(float *)(&DAT_1806c9090 + (uint64_t)(10 < iVal_52) * 4);
      }
    }
    else {
      local_1b0 = 0.0;
    }
    local_1a4 = 0x3f800000;
    if (*(int64_t **)(param_2 + 8) == (int64_t *)0x0) {
      lVal_39 = 0;
    }
    else {
      lVal_39 = **(int64_t **)(param_2 + 8);
    }
    local_138 = param_1;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x142dc) == '\0') {
      lVal_55 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_55 + 0x142dc) = 1;
      *(uint64_t *)(lVal_55 + 0x142d0) = 0x72d8864846398461;
      *(uint32_t *)(lVal_55 + 0x142d8) = 0x1578473;
      func_0x180673140(&LAB_1804361a0);
    }
    lVal_55 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_55 + 0x142d0);
    if (*(char *)(lVal_55 + 0x142db) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x13bfd92d2557e107;
      *(uint *)(lVal_55 + 0x142d8) =
           (*(uint *)(lVal_55 + 0x142d8) & 0xffff | (uint)*(byte *)(lVal_55 + 0x142da) << 0x10) ^
           SUB164(_DAT_1806c90a0,0);
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_12c = iVal_52;
    sz_38 = strlen((char *)pU64_2);
    if ((int64_t)sz_38 < 0) goto LAB_18040b220;
    local_180 = param_2;
    if (sz_38 < 0x10) {
      pU64_54 = &local_108;
      uVal_53 = 0xf;
    }
    else {
      uVal_57 = sz_38 | 0xf;
      uVal_53 = 0x16;
      if (0x16 < uVal_57) {
        uVal_53 = uVal_57;
      }
      if (uVal_57 < 0xfff) {
        pU64_54 = (uint32_t *)func_0x180672de0(uVal_53 + 1);
      }
      else {
        lVal_55 = func_0x180672de0(uVal_53 + 0x28);
        pU64_54 = (uint32_t *)(lVal_55 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_54 + -2) = lVal_55;
      }
      local_108 = SUB84(pU64_54,0);
      uStack_104 = (uint32_t)((uint64_t)pU64_54 >> 0x20);
    }
    uStack_f8 = (uint32_t)sz_38;
    uStack_f4 = (uint32_t)(sz_38 >> 0x20);
    auStack_f0._0_8_ = uVal_53;
    func_0x1806aa960(pU64_54,pU64_2,sz_38);
    *(uint8_t *)((int64_t)pU64_54 + sz_38) = 0;
    uVal_57 = auStack_f0._0_8_;
    pU64_54 = (uint32_t *)CONCAT44(uStack_104,local_108);
    uVal_53 = CONCAT44(uStack_f4,uStack_f8);
    if (*(uint64_t *)(lVal_39 + 0xe8) < uVal_53) {
      bFlag_59 = false;
      if (0xf < (uint64_t)auStack_f0._0_8_) goto LAB_18040a3bc;
LAB_18040a26e:
      if (!bFlag_59) goto LAB_18040a3f9;
LAB_18040a277:
      uVal_35 = *(uint64_t *)(DAT_180840a58 + 0x1b8);
      uVal_43 = func_0x18011a780(uVal_35);
      func_0x180108330(lVal_37);
      lVal_55 = 0;
      func_0x1801079e0(lVal_37,1,0,0);
      sz_30 = local_a2;
      lVal_39 = local_180;
      uStack_100 = 0;
      local_108 = 0;
      uStack_104 = 0;
      if (*(int64_t **)(local_180 + 8) != (int64_t *)0x0) {
        lVal_55 = **(int64_t **)(local_180 + 8);
      }
      local_128._0_8_ = 0x2912f5be528b5a91;
      uVal_44 = func_0x180128100(**(uint64_t **)(lVal_55 + 0x178));
      in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffffffffff00;
      func_0x180129670(uVal_43,lVal_37,uVal_44,&local_108,in_stack_fffffffffffffe38);
      pU64_42 = (uint64_t *)func_0x18011a720(uVal_35);
      uVal_35 = *pU64_42;
      uVal_43 = func_0x1800cf9c0();
      uVal_44 = func_0x1800cf960();
      func_0x18011b3c0(uVal_44,lVal_37,uVal_43,uVal_35);
      lVal_55 = local_138;
    }
    else {
      pU64_36 = &local_108;
      if (0xf < (uint64_t)auStack_f0._0_8_) {
        pU64_36 = pU64_54;
      }
      if (*(uint64_t *)(lVal_39 + 0xf0) < 0x10) {
        lVal_55 = lVal_39 + 0xd8;
      }
      else {
        lVal_55 = *(int64_t *)(lVal_39 + 0xd8);
      }
      iVal_52 = memcmp((void *)(lVal_55 + (*(uint64_t *)(lVal_39 + 0xe8) - uVal_53)),pU64_36,uVal_53);
      bFlag_59 = iVal_52 == 0;
      if (uVal_57 < 0x10) goto LAB_18040a26e;
LAB_18040a3bc:
      uVal_53 = uVal_57 + 1;
      pU64_36 = pU64_54;
      if (0xfff < uVal_53) {
        pU64_36 = *(uint32_t **)(pU64_54 + -2);
        if (0x1f < (uint64_t)((int64_t)pU64_54 + (-8 - (int64_t)pU64_36))) goto LAB_18040b225;
        uVal_53 = uVal_57 + 0x28;
      }
      thunk_FUN_180695dd0(pU64_36,uVal_53);
      if (bFlag_59) goto LAB_18040a277;
LAB_18040a3f9:
      lVal_39 = local_180;
      local_108 = 0;
      uStack_104 = 0;
      in_stack_fffffffffffffe38 = 0;
      func_0x1800d0f50(local_180,&local_108);
      ch_29 = func_0x180118c60(lVal_39);
      sz_30 = local_a2;
      lVal_55 = local_138;
      if (ch_29 != '\0') {
        local_108 = 0;
        uStack_104 = 0;
        in_stack_fffffffffffffe38 = 1;
        func_0x1800d0f50(lVal_39,&local_108);
      }
    }
    if ((sz_30 < 1) || (*(char *)(lVal_55 + 0x128) == '\0')) {
      local_128 = ZEXT816(0);
      local_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      auStack_f0._0_8_ = 0xf;
      local_118 = 0;
      plStack_110 = (int64_t *)&DAT_0000000f;
      if (0 < sz_30) {
        iVal_52 = *(int *)(lVal_55 + 0x120);
        goto joined_r0x00018040a609;
      }
    }
    else {
      sz_30 = func_0x180117d70(lVal_39);
      if (0 < sz_30) {
        func_0x180107830(lVal_37,1,0,0,in_stack_fffffffffffffe38);
        func_0x1801081a0(lVal_37);
        func_0x180107cc0(lVal_37);
        func_0x180107cc0(lVal_37);
        func_0x180107cc0(lVal_37);
        func_0x180107cc0(lVal_37);
        sz_30 = func_0x180118160(lVal_39);
        sz_31 = func_0x180117d70(lVal_39);
        sz_32 = func_0x180118160(lVal_39);
        fVal_64 = DAT_1806b26b4;
        fVal_68 = (float)((int)sz_30 - (int)sz_31) / (float)(int)sz_32;
        fVal_79 = DAT_1806b26b4;
        if (fVal_68 <= DAT_1806b26b4) {
          fVal_79 = fVal_68;
        }
        auArr_61._0_8_ = func_0x18068afa0(fVal_79 / DAT_1806ae650);
        auArr_61._8_8_ = extraout_XMM0_Qb;
        auArr_62._4_12_ = auArr_61._4_12_;
        fVal_79 = (float)auArr_61._0_8_ / DAT_1806b6144;
        if ((uint)(int)fVal_79 < 5) {
          auArr_62._0_4_ = (fVal_79 - (float)(int)fVal_79) + DAT_1806ae7b0 + fVal_64;
                    /* WARNING: Could not recover jumptable at 0x00018040a5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(func_ptr_t )(&DAT_1806ce824 +
                    *(int *)(&DAT_1806ce824 + CONCAT44(extraout_var,(int)fVal_79) * 4)))
                    (auArr_62._0_8_,fVal_64 - (fVal_79 - (float)(int)fVal_79));
          return;
        }
        func_0x1801081a0(lVal_37);
        func_0x180107cc0(lVal_37);
        func_0x180107cc0(lVal_37);
        func_0x180107cc0(lVal_37);
        func_0x180107cc0(lVal_37);
        uVal_35 = func_0x1800cf970();
        uVal_43 = func_0x1800cf950();
        uVal_44 = func_0x1800cf960();
        func_0x18011b260(uVal_44,uVal_43,uVal_35);
      }
      auStack_f0._0_8_ = 0xf;
      iVal_52 = *(int *)(lVal_55 + 0x120);
joined_r0x00018040a609:
      if (iVal_52 == 2) {
        local_108 = 0;
        uStack_104 = 0;
        local_128 = ZEXT816(0);
        uStack_f4 = 0;
        uStack_f8 = 0;
        uStack_fc = 0;
        uStack_100 = 0;
        plStack_110 = (int64_t *)&DAT_0000000f;
        local_118 = 0;
        if (*(int *)(lVal_55 + 0xf8) == 0) {
          sz_30 = func_0x180118160(lVal_39);
          sz_31 = func_0x180117d70(lVal_39);
          func_0x180038c30(local_c8,(int)sz_30 - (int)sz_31);
          uVal_33 = func_0x180118160(lVal_39);
          func_0x1800d8d40(local_1a0,uVal_33);
          if ((local_b8 + local_190) - 5 < 0xfffffffffffffffa) {
            func_0x18040b930(local_158,local_c8,&DAT_180761114);
            func_0x180171200(&local_178,local_158,local_1a0);
          }
          else {
            func_0x18040b930(local_158,local_c8,&DAT_180760cd6);
            func_0x180171200(&local_178,local_158,local_1a0);
          }
          func_0x180034b40(&local_108,&local_178);
          func_0x180001e70(&local_178);
          func_0x180001e70(local_158);
          if (0xf < local_188) {
            uVal_53 = local_188 + 1;
            lVal_37 = local_1a0[0];
            if (0xfff < uVal_53) {
              lVal_37 = *(int64_t *)(local_1a0[0] + -8);
              if (0x1f < (uint64_t)((local_1a0[0] + -8) - lVal_37)) goto LAB_18040b225;
              uVal_53 = local_188 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_37,uVal_53);
          }
          if (0xf < uStack_b0) {
            local_1a0[0] = (int64_t)_local_c8;
            local_188 = uStack_b0;
            goto joined_r0x00018040afbc;
          }
        }
        else {
          uVal_33 = func_0x180118160(lVal_39);
          func_0x1800d8d40(local_1a0,uVal_33);
          sz_30 = func_0x180118160(lVal_39);
          sz_31 = func_0x180117d70(lVal_39);
          ptr7_U64_46 = local_158;
          func_0x180038c30(ptr7_U64_46,(int)sz_30 - (int)sz_31);
          uVal_53 = local_148;
          if (uStack_140 == local_148) {
            ptr7_U64_46 = (uint64_t *******)func_0x180082950(local_158,1);
          }
          else {
            local_148 = local_148 + 1;
            ptr7_U64_49 = ptr7_U64_46;
            if (0xf < uStack_140) {
              ptr7_U64_49 = local_158[0];
            }
            *(uint16_t *)((int64_t)ptr7_U64_49 + uVal_53) = 0x2f;
          }
          local_178 = *(uint *)ptr7_U64_46;
          uStack_174 = *(uint32_t *)((int64_t)ptr7_U64_46 + 4);
          uStack_170 = *(uint32_t *)(ptr7_U64_46 + 1);
          uStack_16c = *(uint32_t *)((int64_t)ptr7_U64_46 + 0xc);
          local_168 = ptr7_U64_46[2];
          ppppppuStack_160 = ptr7_U64_46[3];
          ptr7_U64_46[2] = (uint64_t ******)0x0;
          ptr7_U64_46[3] = (uint64_t ******)0xf;
          *(uint8_t *)ptr7_U64_46 = 0;
          func_0x180094870(local_c8);
          if (0xf < (uint64_t)auStack_f0._0_8_) {
            lVal_39 = CONCAT44(uStack_104,local_108);
            uVal_53 = auStack_f0._0_8_ + 1;
            lVal_37 = lVal_39;
            if (0xfff < uVal_53) {
              lVal_37 = *(int64_t *)(lVal_39 + -8);
              if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_37)) goto LAB_18040b225;
              uVal_53 = auStack_f0._0_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_37,uVal_53);
          }
          uStack_f8 = (uint32_t)local_b8;
          uStack_f4 = local_b8._4_4_;
          auStack_f0._0_8_ = uStack_b0;
          local_108 = local_c8;
          uStack_104 = uStack_c4;
          uStack_100 = (uint32_t)uStack_c0;
          uStack_fc = uStack_c0._4_4_;
          local_b8 = 0;
          uStack_b0 = 0xf;
          auArr_22[15] = 0;
          auArr_22._0_15_ = stack0xffffffffffffff39;
          _local_c8 = auArr_22 << 8;
          if ((uint64_t ******)0xf < ppppppuStack_160) {
            lVal_39 = CONCAT44(uStack_174,local_178);
            ptr6_U64_50 = (uint64_t ******)((int64_t)ppppppuStack_160 + 1);
            lVal_37 = lVal_39;
            if ((uint64_t ******)0xfff < ptr6_U64_50) {
              lVal_37 = *(int64_t *)(lVal_39 + -8);
              if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_37)) goto LAB_18040b225;
              ptr6_U64_50 = ppppppuStack_160 + 5;
            }
            thunk_FUN_180695dd0(lVal_37,ptr6_U64_50);
          }
          local_168 = (uint64_t ******)0x0;
          ppppppuStack_160 = (uint64_t ******)0xf;
          local_178 = local_178 & 0xffffff00;
          if (0xf < uStack_140) {
            uVal_53 = uStack_140 + 1;
            ptr7_U64_46 = local_158[0];
            if (0xfff < uVal_53) {
              ptr7_U64_46 = (uint64_t *******)local_158[0][-1];
              if ((uint8_t *)0x1f <
                  (uint8_t *)((int64_t)local_158[0] + (-8 - (int64_t)ptr7_U64_46)))
              goto LAB_18040b225;
              uVal_53 = uStack_140 + 0x28;
            }
            thunk_FUN_180695dd0(ptr7_U64_46,uVal_53);
          }
          if (0xf < local_188) {
joined_r0x00018040afbc:
            uVal_53 = local_188 + 1;
            if (0xfff < uVal_53) {
              if (0x1f < (uint64_t)((local_1a0[0] + -8) - *(int64_t *)(local_1a0[0] + -8)))
              goto LAB_18040b225;
              uVal_53 = local_188 + 0x28;
              local_1a0[0] = *(int64_t *)(local_1a0[0] + -8);
            }
            thunk_FUN_180695dd0(local_1a0[0],uVal_53);
          }
        }
        func_0x18018ce30(lVal_55);
        func_0x18018ce30(lVal_55);
        fVal_79 = (float)func_0x1800cd3b0(&local_108);
        uStack_c4 = 0x41700000;
        local_c8 = (uint8_t  [4])(fVal_79 * DAT_1806b2860 + _DAT_1806c3d40);
        func_0x1800d00e0(local_c8,&local_108,&local_1b0);
      }
      else {
        local_108 = 0;
        uStack_104 = 0;
        uStack_f4 = 0;
        uStack_f8 = 0;
        local_128 = ZEXT816(0);
        uStack_fc = 0;
        uStack_100 = 0;
        plStack_110 = (int64_t *)&DAT_0000000f;
        local_118 = 0;
        if (iVal_52 == 1) {
          pArr16_40 = (uint8_t (*)[16])local_c8;
          func_0x180038c30(pArr16_40,local_12c);
          sz_38 = local_b8;
          if (uStack_b0 == local_b8) {
            pArr16_40 = (uint8_t (*)[16])func_0x180082950(local_c8,1);
          }
          else {
            local_b8 = local_b8 + 1;
            pArr16_47 = pArr16_40;
            if (0xf < uStack_b0) {
              pArr16_47 = _local_c8;
            }
            *(uint16_t *)(*pArr16_47 + sz_38) = 0x25;
          }
          auArr_65 = *pArr16_40;
          uVal_53 = *(uint64_t *)pArr16_40[1];
          pLong_51 = *(int64_t **)(pArr16_40[1] + 8);
          *(uint64_t *)pArr16_40[1] = 0;
          *(uint64_t *)(pArr16_40[1] + 8) = 0xf;
          (*pArr16_40)[0] = 0;
          if (&DAT_0000000f < plStack_110) {
            pLong_48 = (int64_t *)((int64_t)plStack_110 + 1);
            lVal_37 = local_128._0_8_;
            if ((int64_t *)0xfff < pLong_48) {
              lVal_37 = *(int64_t *)(local_128._0_8_ + -8);
              if (0x1f < (uint64_t)((local_128._0_8_ + -8) - lVal_37)) goto LAB_18040b225;
              pLong_48 = plStack_110 + 5;
            }
            thunk_FUN_180695dd0(lVal_37,pLong_48);
          }
          local_128 = auArr_65;
          local_118 = uVal_53;
          plStack_110 = pLong_51;
          if (0xf < uStack_b0) {
            uVal_53 = uStack_b0 + 1;
            lVal_37 = (int64_t)_local_c8;
            if (0xfff < uVal_53) {
              lVal_37 = *(int64_t *)((int64_t)_local_c8 + -8);
              if (0x1f < (uint64_t)(((int64_t)_local_c8 + -8) - lVal_37)) goto LAB_18040b225;
              uVal_53 = uStack_b0 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_37,uVal_53);
          }
          func_0x18018ce30(lVal_55);
          func_0x18018ce30(lVal_55);
          fVal_79 = (float)func_0x1800cd3b0(local_128);
          uStack_c4 = 0x41700000;
          local_c8 = (uint8_t  [4])(fVal_79 * DAT_1806b2860 + _DAT_1806c3d40);
          func_0x1800d00e0(local_c8,local_128,&local_1b0);
        }
      }
    }
    func_0x1800cfa30();
    *(uint8_t *)(lVal_34 + 0x78) = 1;
    pLong_51 = (int64_t *)(lVal_34 + 0x60);
    *pLong_51 = *pLong_51 + -1;
    if (*pLong_51 == 0) {
      *(uint64_t *)(lVal_34 + 0x58) = 0;
      if (plStack_110 <= &DAT_0000000f) goto LAB_18040b076;
LAB_18040b097:
      pLong_51 = (int64_t *)((int64_t)plStack_110 + 1);
      lVal_37 = local_128._0_8_;
      if ((int64_t *)0xfff < pLong_51) {
        lVal_37 = *(int64_t *)(local_128._0_8_ + -8);
        if (0x1f < (uint64_t)((local_128._0_8_ + -8) - lVal_37)) goto LAB_18040b225;
        pLong_51 = plStack_110 + 5;
      }
      thunk_FUN_180695dd0(lVal_37,pLong_51);
    }
    else {
      if (&DAT_0000000f < plStack_110) goto LAB_18040b097;
LAB_18040b076:
    }
    if ((uint64_t)auStack_f0._0_8_ < 0x10) {
      return;
    }
    lVal_37 = CONCAT44(uStack_104,local_108);
    uVal_53 = auStack_f0._0_8_;
  }
  uVal_57 = uVal_53 + 1;
  if (0xfff < uVal_57) {
    if (0x1f < (uint64_t)((lVal_37 + -8) - *(int64_t *)(lVal_37 + -8))) {
LAB_18040b225:
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_57 = uVal_53 + 0x28;
    lVal_37 = *(int64_t *)(lVal_37 + -8);
  }
  thunk_FUN_180695dd0(lVal_37,uVal_57);
  return;
}

// Unwind@18040b230
void Unwind_18040b230(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18040b2b0
void Unwind_18040b2b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}
