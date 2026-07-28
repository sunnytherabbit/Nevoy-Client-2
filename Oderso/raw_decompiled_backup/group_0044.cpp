#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1803f3560
void Unwind_1803f3560(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xb8);
  return;
}

// func_0x1803f35a0
void func_0x1803f35a0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x1f0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce170;
  pLong_10 = local_58 + 2;
  func_0x1802501f0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x9c9ba6cf;
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
      if (-0x63645932 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x63645931) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x63645932 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x63645930)) {
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

// Unwind@1803f3760
void Unwind_1803f3760(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f3790
void Unwind_1803f3790(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f37c0
void Unwind_1803f37c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x1f0);
  return;
}

// func_0x1803f3800
void func_0x1803f3800(int64_t *param_1)
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
  func_0x1801e6000(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xfb93fa73;
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
      if (-0x46c058e < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x46c058d) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x46c058e < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x46c058c)) {
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

// Unwind@1803f39c0
void Unwind_1803f39c0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f39f0
void Unwind_1803f39f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f3a20
void Unwind_1803f3a20(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x98);
  return;
}

// func_0x1803f3a60
void func_0x1803f3a60(int64_t *param_1)
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
  func_0x180130570(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x14d41eea;
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
      if (0x14d41ee9 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x14d41eea) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x14d41ee9 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x14d41eeb)) {
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

// Unwind@1803f3c20
void Unwind_1803f3c20(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f3c50
void Unwind_1803f3c50(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f3c80
void Unwind_1803f3c80(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),200);
  return;
}

// func_0x1803f3cc0
void func_0x1803f3cc0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x1630);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce1b0;
  pLong_10 = local_58 + 2;
  func_0x180156800(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xdef80e5;
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
      if (0xdef80e4 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0xdef80e5) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0xdef80e4 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0xdef80e6)) {
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

// Unwind@1803f3e80
void Unwind_1803f3e80(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f3eb0
void Unwind_1803f3eb0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f3ee0
void Unwind_1803f3ee0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x1630);
  return;
}

// func_0x1803f3f20
void func_0x1803f3f20(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xb8);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce150;
  pLong_10 = local_58 + 2;
  func_0x1801afdc0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xdf7769f;
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
      if (0xdf7769e < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0xdf7769f) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0xdf7769e < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0xdf776a0)) {
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

// Unwind@1803f40e0
void Unwind_1803f40e0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f4110
void Unwind_1803f4110(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f4140
void Unwind_1803f4140(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xb8);
  return;
}

// func_0x1803f4180
void func_0x1803f4180(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xa8);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce1d0;
  pLong_10 = local_58 + 2;
  func_0x18021f300(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x81560f66;
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
      if (-0x7ea9f09b < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x7ea9f09a) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x7ea9f09b < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x7ea9f099)) {
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

// Unwind@1803f4340
void Unwind_1803f4340(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f4370
void Unwind_1803f4370(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f43a0
void Unwind_1803f43a0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xa8);
  return;
}

// func_0x1803f43e0
void func_0x1803f43e0(int64_t *param_1)
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
  func_0x180241f60(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x457089f1;
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
      if (0x457089f0 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x457089f1) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x457089f0 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x457089f2)) {
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

// Unwind@1803f45a0
void Unwind_1803f45a0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f45d0
void Unwind_1803f45d0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f4600
void Unwind_1803f4600(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x98);
  return;
}

// func_0x1803f4640
void func_0x1803f4640(int64_t *param_1)
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
  func_0x180248800(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xf7b4c2c9;
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
      if (-0x84b3d38 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x84b3d37) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x84b3d38 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x84b3d36)) {
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

// Unwind@1803f4800
void Unwind_1803f4800(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f4830
void Unwind_1803f4830(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f4860
void Unwind_1803f4860(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xb0);
  return;
}

// func_0x1803f48a0
void func_0x1803f48a0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x90);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce1f0;
  pLong_10 = local_58 + 2;
  func_0x1801c2930(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x832f8b60;
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
      if (-0x7cd074a1 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x7cd074a0) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x7cd074a1 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x7cd0749f)) {
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

// Unwind@1803f4a60
void Unwind_1803f4a60(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f4a90
void Unwind_1803f4a90(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f4ac0
void Unwind_1803f4ac0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x90);
  return;
}

// func_0x1803f4b00
void func_0x1803f4b00(int64_t *param_1)
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
  func_0x1801edba0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x381d190f;
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
      if (0x381d190e < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x381d190f) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x381d190e < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x381d1910)) {
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

// Unwind@1803f4cc0
void Unwind_1803f4cc0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f4cf0
void Unwind_1803f4cf0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f4d20
void Unwind_1803f4d20(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xe0);
  return;
}

// func_0x1803f4d60
void func_0x1803f4d60(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x7c0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce230;
  pLong_10 = local_58 + 2;
  func_0x180420050(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xc3bb665c;
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
      if (-0x3c4499a5 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x3c4499a4) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x3c4499a5 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x3c4499a3)) {
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

// Unwind@1803f4f20
void Unwind_1803f4f20(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f4f50
void Unwind_1803f4f50(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f4f80
void Unwind_1803f4f80(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x7c0);
  return;
}

// func_0x1803f4fc0
void func_0x1803f4fc0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x140);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce250;
  pLong_10 = local_58 + 2;
  func_0x180424ef0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x9e4392c2;
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
      if (-0x61bc6d3f < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x61bc6d3e) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x61bc6d3f < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x61bc6d3d)) {
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

// Unwind@1803f5180
void Unwind_1803f5180(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f51b0
void Unwind_1803f51b0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f51e0
void Unwind_1803f51e0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x140);
  return;
}

// func_0x1803f5220
void func_0x1803f5220(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x380);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce270;
  pLong_10 = local_58 + 2;
  func_0x1802f7580(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xc88d55d1;
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
      if (-0x3772aa30 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x3772aa2f) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x3772aa30 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x3772aa2e)) {
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

// Unwind@1803f53e0
void Unwind_1803f53e0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f5410
void Unwind_1803f5410(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f5440
void Unwind_1803f5440(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x380);
  return;
}

// func_0x1803f5480
void func_0x1803f5480(int64_t *param_1)
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
  func_0x18031b4d0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x1dce1e68;
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
      if (0x1dce1e67 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x1dce1e68) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x1dce1e67 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x1dce1e69)) {
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

// Unwind@1803f5640
void Unwind_1803f5640(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f5670
void Unwind_1803f5670(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f56a0
void Unwind_1803f56a0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xb0);
  return;
}

// func_0x1803f56e0
void func_0x1803f56e0(int64_t *param_1)
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
  func_0x1802ac240(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x6ab8a6d0;
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
      if (0x6ab8a6cf < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x6ab8a6d0) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x6ab8a6cf < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x6ab8a6d1)) {
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

// Unwind@1803f58a0
void Unwind_1803f58a0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f58d0
void Unwind_1803f58d0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f5900
void Unwind_1803f5900(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x1a0);
  return;
}

// func_0x1803f5940
void func_0x1803f5940(int64_t *param_1)
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
  func_0x1802cfa50(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x3b857255;
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
      if (0x3b857254 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x3b857255) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x3b857254 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x3b857256)) {
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

// Unwind@1803f5b00
void Unwind_1803f5b00(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f5b30
void Unwind_1803f5b30(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f5b60
void Unwind_1803f5b60(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xf0);
  return;
}

// func_0x1803f5ba0
void func_0x1803f5ba0(int64_t *param_1)
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
  func_0x1801f0cc0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x691f6eb9;
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
      if (0x691f6eb8 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x691f6eb9) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x691f6eb8 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x691f6eba)) {
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

// Unwind@1803f5d60
void Unwind_1803f5d60(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f5d90
void Unwind_1803f5d90(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f5dc0
void Unwind_1803f5dc0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x98);
  return;
}

// func_0x1803f5e00
void func_0x1803f5e00(int64_t *param_1)
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
  func_0x1801914f0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xb84ed695;
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
      if (-0x47b1296c < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x47b1296b) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x47b1296c < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x47b1296a)) {
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

// Unwind@1803f5fc0
void Unwind_1803f5fc0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f5ff0
void Unwind_1803f5ff0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f6020
void Unwind_1803f6020(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x160);
  return;
}

// func_0x1803f6060
void func_0x1803f6060(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xb8);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce150;
  pLong_10 = local_58 + 2;
  func_0x1804168f0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x645ba14b;
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
      if (0x645ba14a < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x645ba14b) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x645ba14a < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x645ba14c)) {
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

// Unwind@1803f6220
void Unwind_1803f6220(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f6250
void Unwind_1803f6250(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f6280
void Unwind_1803f6280(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xb8);
  return;
}

// func_0x1803f62c0
void func_0x1803f62c0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x2c8);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce2f0;
  pLong_10 = local_58 + 2;
  func_0x1802fc040(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x377269be;
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
      if (0x377269bd < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x377269be) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x377269bd < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x377269bf)) {
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

// Unwind@1803f6480
void Unwind_1803f6480(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f64b0
void Unwind_1803f64b0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f64e0
void Unwind_1803f64e0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x2c8);
  return;
}

// func_0x1803f6520
void func_0x1803f6520(int64_t *param_1)
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
  func_0x180347d80(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x6dd07ffd;
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
      if (0x6dd07ffc < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x6dd07ffd) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x6dd07ffc < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x6dd07ffe)) {
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

// Unwind@1803f66e0
void Unwind_1803f66e0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f6710
void Unwind_1803f6710(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f6740
void Unwind_1803f6740(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x98);
  return;
}

// func_0x1803f6780
void func_0x1803f6780(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xa8);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce1d0;
  pLong_10 = local_58 + 2;
  func_0x1802c1ee0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x86a7223f;
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
      if (-0x7958ddc2 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x7958ddc1) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x7958ddc2 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x7958ddc0)) {
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

// Unwind@1803f6940
void Unwind_1803f6940(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f6970
void Unwind_1803f6970(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f69a0
void Unwind_1803f69a0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xa8);
  return;
}

// func_0x1803f69e0
void func_0x1803f69e0(int64_t *param_1)
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
  func_0x18020a2d0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x166c1661;
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
      if (0x166c1660 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x166c1661) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x166c1660 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x166c1662)) {
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

// Unwind@1803f6ba0
void Unwind_1803f6ba0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f6bd0
void Unwind_1803f6bd0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f6c00
void Unwind_1803f6c00(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x168);
  return;
}

// func_0x1803f6c40
void func_0x1803f6c40(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xa8);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce1d0;
  pLong_10 = local_58 + 2;
  func_0x180165110(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xa3f21cc0;
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
      if (-0x5c0de341 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x5c0de340) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x5c0de341 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x5c0de33f)) {
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

// Unwind@1803f6e00
void Unwind_1803f6e00(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f6e30
void Unwind_1803f6e30(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f6e60
void Unwind_1803f6e60(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xa8);
  return;
}

// func_0x1803f6ea0
void func_0x1803f6ea0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xa0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce110;
  pLong_10 = local_58 + 2;
  func_0x18018d820(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x90ef0f2;
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
      if (0x90ef0f1 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x90ef0f2) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x90ef0f1 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x90ef0f3)) {
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

// Unwind@1803f7060
void Unwind_1803f7060(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f7090
void Unwind_1803f7090(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f70c0
void Unwind_1803f70c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xa0);
  return;
}

// func_0x1803f7100
void func_0x1803f7100(int64_t *param_1)
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
  func_0x18018f510(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xf0894a07;
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
      if (-0xf76b5fa < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0xf76b5f9) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0xf76b5fa < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0xf76b5f8)) {
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

// Unwind@1803f72c0
void Unwind_1803f72c0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f72f0
void Unwind_1803f72f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f7320
void Unwind_1803f7320(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x160);
  return;
}

// func_0x1803f7360
void func_0x1803f7360(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x1400);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce330;
  pLong_10 = local_58 + 2;
  func_0x1802e5290(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x69701e82;
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
      if (0x69701e81 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x69701e82) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x69701e81 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x69701e83)) {
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

// Unwind@1803f7520
void Unwind_1803f7520(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f7550
void Unwind_1803f7550(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f7580
void Unwind_1803f7580(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x1400);
  return;
}

// func_0x1803f75c0
void func_0x1803f75c0(int64_t *param_1)
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
  func_0x1802f3390(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x10403d4d;
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
      if (0x10403d4c < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x10403d4d) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x10403d4c < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x10403d4e)) {
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

// Unwind@1803f7780
void Unwind_1803f7780(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f77b0
void Unwind_1803f77b0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f77e0
void Unwind_1803f77e0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xb0);
  return;
}

// func_0x1803f7820
void func_0x1803f7820(int64_t *param_1)
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
  func_0x1803455d0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xea93f505;
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
      if (-0x156c0afc < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x156c0afb) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x156c0afc < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x156c0afa)) {
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

// Unwind@1803f79e0
void Unwind_1803f79e0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f7a10
void Unwind_1803f7a10(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f7a40
void Unwind_1803f7a40(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xf0);
  return;
}

// func_0x1803f7a80
void func_0x1803f7a80(int64_t *param_1)
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
  func_0x180360610(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x102f9b45;
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
      if (0x102f9b44 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x102f9b45) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x102f9b44 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x102f9b46)) {
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

// Unwind@1803f7c40
void Unwind_1803f7c40(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f7c70
void Unwind_1803f7c70(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f7ca0
void Unwind_1803f7ca0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),200);
  return;
}

// func_0x1803f7ce0
void func_0x1803f7ce0(int64_t *param_1)
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
  func_0x180240430(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x1cba189a;
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
      if (0x1cba1899 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x1cba189a) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x1cba1899 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x1cba189b)) {
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

// Unwind@1803f7ea0
void Unwind_1803f7ea0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f7ed0
void Unwind_1803f7ed0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f7f00
void Unwind_1803f7f00(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x98);
  return;
}

// func_0x1803f7f40
void func_0x1803f7f40(int64_t *param_1)
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
  func_0x1802452c0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xd9013c8;
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
      if (0xd9013c7 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0xd9013c8) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0xd9013c7 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0xd9013c9)) {
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

// Unwind@1803f8100
void Unwind_1803f8100(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f8130
void Unwind_1803f8130(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f8160
void Unwind_1803f8160(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x98);
  return;
}

// func_0x1803f81a0
void func_0x1803f81a0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xb8);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce150;
  pLong_10 = local_58 + 2;
  func_0x180245d30(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xd618c45e;
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
      if (-0x29e73ba3 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x29e73ba2) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x29e73ba3 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x29e73ba1)) {
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

// Unwind@1803f8360
void Unwind_1803f8360(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f8390
void Unwind_1803f8390(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f83c0
void Unwind_1803f83c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xb8);
  return;
}

// func_0x1803f8400
void func_0x1803f8400(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x6d0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce350;
  pLong_10 = local_58 + 2;
  func_0x1801380b0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x262c6901;
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
      if (0x262c6900 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x262c6901) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x262c6900 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x262c6902)) {
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

// Unwind@1803f85c0
void Unwind_1803f85c0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f85f0
void Unwind_1803f85f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f8620
void Unwind_1803f8620(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x6d0);
  return;
}

// func_0x1803f8660
void func_0x1803f8660(int64_t *param_1)
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
  func_0x18014d640(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xd51a9351;
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
      if (-0x2ae56cb0 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x2ae56caf) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x2ae56cb0 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x2ae56cae)) {
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

// Unwind@1803f8820
void Unwind_1803f8820(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f8850
void Unwind_1803f8850(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f8880
void Unwind_1803f8880(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x98);
  return;
}

// func_0x1803f88c0
void func_0x1803f88c0(int64_t *param_1)
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
  func_0x1801749e0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x2602eae8;
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
      if (0x2602eae7 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x2602eae8) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x2602eae7 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x2602eae9)) {
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

// Unwind@1803f8a80
void Unwind_1803f8a80(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f8ab0
void Unwind_1803f8ab0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f8ae0
void Unwind_1803f8ae0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),200);
  return;
}

// func_0x1803f8b20
void func_0x1803f8b20(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xd0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce370;
  pLong_10 = local_58 + 2;
  func_0x1801899c0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x7f711010;
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
      if (0x7f71100f < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x7f711010) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x7f71100f < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x7f711011)) {
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

// Unwind@1803f8ce0
void Unwind_1803f8ce0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f8d10
void Unwind_1803f8d10(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f8d40
void Unwind_1803f8d40(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xd0);
  return;
}

// func_0x1803f8d80
void func_0x1803f8d80(int64_t *param_1)
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
  func_0x180193330(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xd33b9cf5;
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
      if (-0x2cc4630c < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x2cc4630b) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x2cc4630c < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x2cc4630a)) {
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

// Unwind@1803f8f40
void Unwind_1803f8f40(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f8f70
void Unwind_1803f8f70(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f8fa0
void Unwind_1803f8fa0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x160);
  return;
}

// func_0x1803f8fe0
void func_0x1803f8fe0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xd8);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce390;
  pLong_10 = local_58 + 2;
  func_0x18040d7d0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x3e7e33d2;
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
      if (0x3e7e33d1 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x3e7e33d2) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x3e7e33d1 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x3e7e33d3)) {
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

// Unwind@1803f91a0
void Unwind_1803f91a0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f91d0
void Unwind_1803f91d0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f9200
void Unwind_1803f9200(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xd8);
  return;
}

// func_0x1803f9240
void func_0x1803f9240(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xa8);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce1d0;
  pLong_10 = local_58 + 2;
  func_0x1803404a0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x344f6742;
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
      if (0x344f6741 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x344f6742) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x344f6741 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x344f6743)) {
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

// Unwind@1803f9400
void Unwind_1803f9400(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f9430
void Unwind_1803f9430(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f9460
void Unwind_1803f9460(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xa8);
  return;
}

// func_0x1803f94a0
void func_0x1803f94a0(int64_t *param_1)
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
  func_0x1802bea40(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x4d79930f;
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
      if (0x4d79930e < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x4d79930f) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x4d79930e < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x4d799310)) {
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

// Unwind@1803f9660
void Unwind_1803f9660(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f9690
void Unwind_1803f9690(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f96c0
void Unwind_1803f96c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),200);
  return;
}

// func_0x1803f9700
void func_0x1803f9700(int64_t *param_1)
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
  func_0x1801e52f0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x82aa25fe;
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
      if (-0x7d55da03 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x7d55da02) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x7d55da03 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x7d55da01)) {
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

// Unwind@1803f98c0
void Unwind_1803f98c0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f98f0
void Unwind_1803f98f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f9920
void Unwind_1803f9920(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x98);
  return;
}

// func_0x1803f9960
void func_0x1803f9960(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x108);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce3b0;
  pLong_10 = local_58 + 2;
  func_0x180181170(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x44d6b09e;
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
      if (0x44d6b09d < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x44d6b09e) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x44d6b09d < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x44d6b09f)) {
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

// Unwind@1803f9b20
void Unwind_1803f9b20(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f9b50
void Unwind_1803f9b50(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f9b80
void Unwind_1803f9b80(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x108);
  return;
}

// func_0x1803f9bc0
void func_0x1803f9bc0(int64_t *param_1)
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
  func_0x18017c4a0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x5ba58168;
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
      if (0x5ba58167 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x5ba58168) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x5ba58167 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x5ba58169)) {
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

// Unwind@1803f9d80
void Unwind_1803f9d80(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803f9db0
void Unwind_1803f9db0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803f9de0
void Unwind_1803f9de0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x178);
  return;
}

// func_0x1803f9e20
void func_0x1803f9e20(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xb8);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce150;
  pLong_10 = local_58 + 2;
  func_0x180195270(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x1f52325;
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
      if (0x1f52324 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x1f52325) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x1f52324 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x1f52326)) {
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

// Unwind@1803f9fe0
void Unwind_1803f9fe0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fa010
void Unwind_1803fa010(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fa040
void Unwind_1803fa040(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xb8);
  return;
}

// func_0x1803fa080
void func_0x1803fa080(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x300);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce3f0;
  pLong_10 = local_58 + 2;
  func_0x1801a2840(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x1d756bcb;
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
      if (0x1d756bca < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x1d756bcb) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x1d756bca < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x1d756bcc)) {
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

// Unwind@1803fa240
void Unwind_1803fa240(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fa270
void Unwind_1803fa270(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fa2a0
void Unwind_1803fa2a0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x300);
  return;
}

// func_0x1803fa2e0
void func_0x1803fa2e0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xd0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce370;
  pLong_10 = local_58 + 2;
  func_0x180404050(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xaff22f60;
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
      if (-0x500dd0a1 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x500dd0a0) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x500dd0a1 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x500dd09f)) {
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

// Unwind@1803fa4a0
void Unwind_1803fa4a0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fa4d0
void Unwind_1803fa4d0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fa500
void Unwind_1803fa500(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xd0);
  return;
}

// func_0x1803fa540
void func_0x1803fa540(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x90);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce1f0;
  pLong_10 = local_58 + 2;
  func_0x180415150(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x2c0d81de;
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
      if (0x2c0d81dd < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x2c0d81de) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x2c0d81dd < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x2c0d81df)) {
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

// Unwind@1803fa700
void Unwind_1803fa700(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fa730
void Unwind_1803fa730(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fa760
void Unwind_1803fa760(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x90);
  return;
}

// func_0x1803fa7a0
void func_0x1803fa7a0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xa8);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce1d0;
  pLong_10 = local_58 + 2;
  func_0x180242db0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xb736418e;
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
      if (-0x48c9be73 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x48c9be72) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x48c9be73 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x48c9be71)) {
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

// Unwind@1803fa960
void Unwind_1803fa960(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fa990
void Unwind_1803fa990(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fa9c0
void Unwind_1803fa9c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xa8);
  return;
}

// func_0x1803faa00
void func_0x1803faa00(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xc0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce130;
  pLong_10 = local_58 + 2;
  func_0x180243e70(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xf4099e28;
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
      if (-0xbf661d9 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0xbf661d8) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0xbf661d9 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0xbf661d7)) {
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

// Unwind@1803fabc0
void Unwind_1803fabc0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fabf0
void Unwind_1803fabf0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fac20
void Unwind_1803fac20(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xc0);
  return;
}

// func_0x1803fac60
void func_0x1803fac60(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x90);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce1f0;
  pLong_10 = local_58 + 2;
  func_0x1801e7090(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x7e37aa74;
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
      if (0x7e37aa73 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x7e37aa74) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x7e37aa73 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x7e37aa75)) {
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

// Unwind@1803fae20
void Unwind_1803fae20(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fae50
void Unwind_1803fae50(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fae80
void Unwind_1803fae80(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x90);
  return;
}

// func_0x1803faec0
void func_0x1803faec0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xd0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce370;
  pLong_10 = local_58 + 2;
  func_0x1801e7620(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x3804214e;
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
      if (0x3804214d < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x3804214e) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x3804214d < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x3804214f)) {
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

// Unwind@1803fb080
void Unwind_1803fb080(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fb0b0
void Unwind_1803fb0b0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fb0e0
void Unwind_1803fb0e0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xd0);
  return;
}

// func_0x1803fb120
void func_0x1803fb120(int64_t *param_1)
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
  func_0x180177eb0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x4316cdce;
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
      if (0x4316cdcd < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x4316cdce) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x4316cdcd < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x4316cdcf)) {
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

// Unwind@1803fb2e0
void Unwind_1803fb2e0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fb310
void Unwind_1803fb310(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fb340
void Unwind_1803fb340(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xb0);
  return;
}

// func_0x1803fb380
void func_0x1803fb380(int64_t *param_1)
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
  func_0x180188f20(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x9fa63926;
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
      if (-0x6059c6db < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x6059c6da) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x6059c6db < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x6059c6d9)) {
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

// Unwind@1803fb540
void Unwind_1803fb540(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fb570
void Unwind_1803fb570(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fb5a0
void Unwind_1803fb5a0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x98);
  return;
}

// func_0x1803fb5e0
void func_0x1803fb5e0(int64_t *param_1)
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
  func_0x1802c0340(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xda43a497;
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
      if (-0x25bc5b6a < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x25bc5b69) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x25bc5b6a < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x25bc5b68)) {
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

// Unwind@1803fb7a0
void Unwind_1803fb7a0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fb7d0
void Unwind_1803fb7d0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fb800
void Unwind_1803fb800(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xb0);
  return;
}

// func_0x1803fb840
void func_0x1803fb840(int64_t *param_1)
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
  func_0x1802d4da0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xdbcfee85;
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
      if (-0x2430117c < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x2430117b) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x2430117c < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x2430117a)) {
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

// Unwind@1803fba00
void Unwind_1803fba00(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fba30
void Unwind_1803fba30(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fba60
void Unwind_1803fba60(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x98);
  return;
}

// func_0x1803fbaa0
void func_0x1803fbaa0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xc0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce130;
  pLong_10 = local_58 + 2;
  func_0x1801dd4b0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0xedfb4916;
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
      if (-0x1204b6eb < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x1204b6ea) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x1204b6eb < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x1204b6e9)) {
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

// Unwind@1803fbc60
void Unwind_1803fbc60(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fbc90
void Unwind_1803fbc90(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fbcc0
void Unwind_1803fbcc0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xc0);
  return;
}

// func_0x1803fbd00
void func_0x1803fbd00(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x90);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce1f0;
  pLong_10 = local_58 + 2;
  func_0x180136cd0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x6f3618df;
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
      if (0x6f3618de < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x6f3618df) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x6f3618de < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x6f3618e0)) {
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

// Unwind@1803fbec0
void Unwind_1803fbec0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fbef0
void Unwind_1803fbef0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fbf20
void Unwind_1803fbf20(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x90);
  return;
}

// func_0x1803fbf60
void func_0x1803fbf60(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x5c8);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce410;
  pLong_10 = local_58 + 2;
  func_0x1803d65c0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x6af12654;
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
      if (0x6af12653 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x6af12654) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x6af12653 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x6af12655)) {
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

// Unwind@1803fc120
void Unwind_1803fc120(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fc150
void Unwind_1803fc150(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fc180
void Unwind_1803fc180(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x5c8);
  return;
}

// func_0x1803fc1c0
void func_0x1803fc1c0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xd0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce370;
  pLong_10 = local_58 + 2;
  func_0x18024b340(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x566237b7;
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
      if (0x566237b6 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x566237b7) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x566237b6 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x566237b8)) {
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

// Unwind@1803fc380
void Unwind_1803fc380(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fc3b0
void Unwind_1803fc3b0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fc3e0
void Unwind_1803fc3e0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xd0);
  return;
}

// func_0x1803fc420
void func_0x1803fc420(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0xa0);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce110;
  pLong_10 = local_58 + 2;
  func_0x1802d3fd0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x67fad4a0;
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
      if (0x67fad49f < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x67fad4a0) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x67fad49f < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x67fad4a1)) {
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

// Unwind@1803fc5e0
void Unwind_1803fc5e0(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fc610
void Unwind_1803fc610(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fc640
void Unwind_1803fc640(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xa0);
  return;
}

// func_0x1803fc680
void func_0x1803fc680(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x130);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce430;
  pLong_10 = local_58 + 2;
  func_0x1801fc680(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x851f88c5;
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
      if (-0x7ae0773c < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < -0x7ae0773b) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(-0x7ae0773c < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < -0x7ae0773a)) {
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

// Unwind@1803fc840
void Unwind_1803fc840(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(param_2 + 0x38);
  return;
}

// Unwind@1803fc870
void Unwind_1803fc870(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1803fc8a0
void Unwind_1803fc8a0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x130);
  return;
}

// func_0x1803fc8e0
void func_0x1803fc8e0(int64_t *param_1)
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
  local_58 = (int64_t *)func_0x180672de0(0x118);
  local_58[1] = 0x100000001;
  *local_58 = (int64_t)&PTR_FUN_1806ce450;
  pLong_10 = local_58 + 2;
  func_0x180223cc0(pLong_10);
  pLong_7 = local_58;
  local_48 = local_58;
  local_70[0] = 0x5b7aefc2;
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
      if (0x5b7aefc1 < iVal_3) {
        lVal_8 = lVal_11;
      }
      lVal_5 = *(int64_t *)(lVal_11 + (uint64_t)(iVal_3 < 0x5b7aefc2) * 0x10);
    } while (*(char *)(lVal_5 + 0x19) == '\0');
    uVal_12 = (uint)(0x5b7aefc1 < iVal_3);
    ch_2 = *(char *)(lVal_8 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_4 + 0x19);
  }
  local_50 = pLong_10;
  if ((ch_2 == '\0') && (*(int *)(lVal_8 + 0x20) < 0x5b7aefc3)) {
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
