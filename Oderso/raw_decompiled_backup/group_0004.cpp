#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x180085300
void func_0x180085300(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  uint8_t *pU64_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  
  uVal_10 = 0xfffffffffffffffe;
  uVal_9 = *param_2;
  if (uVal_9 >> 0x3c != 0) {
LAB_180085485:
    func_0x18007ba90();
    goto LAB_18008548a;
  }
  uVal_1 = *param_1;
  uVal_2 = param_1[1];
  if (uVal_9 == 0) {
    uVal_9 = 0;
    pU64_8 = (uint8_t *)*param_1;
    pU64_6 = (uint8_t *)param_1[1];
    if (pU64_8 == pU64_6) goto LAB_180085392;
LAB_1800853b3:
    lVal_5 = 0;
    do {
      *(uint8_t *)(uVal_9 + lVal_5) = pU64_8[lVal_5];
      *(uint64_t *)(uVal_9 + 8 + lVal_5) = *(uint64_t *)(pU64_8 + lVal_5 + 8);
      pU64_8[lVal_5] = 0;
      *(uint64_t *)(pU64_8 + lVal_5 + 8) = 0;
      lVal_4 = lVal_5 + 0x10;
      lVal_5 = lVal_5 + 0x10;
    } while (pU64_8 + lVal_4 != pU64_6);
    pU64_8 = (uint8_t *)*param_1;
    uVal_3 = *param_2;
  }
  else {
    if (uVal_9 < 0x100) {
      uVal_9 = func_0x180672de0();
      pU64_8 = (uint8_t *)*param_1;
      pU64_6 = (uint8_t *)param_1[1];
      if (pU64_8 != pU64_6) goto LAB_1800853b3;
    }
    else {
      if (0xffffffffffffffd < uVal_9) goto LAB_180085485;
      lVal_5 = func_0x180672de0();
      uVal_9 = lVal_5 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_9 - 8) = lVal_5;
      pU64_8 = (uint8_t *)*param_1;
      pU64_6 = (uint8_t *)param_1[1];
      if (pU64_8 != pU64_6) goto LAB_1800853b3;
    }
LAB_180085392:
    uVal_3 = *param_2;
  }
  if (pU64_8 != (uint8_t *)0x0) {
    pU64_6 = (uint8_t *)param_1[1];
    if (pU64_8 != pU64_6) {
      do {
        func_0x180084c70(pU64_8 + 8,*pU64_8,param_3,param_4,uVal_10);
        pU64_8 = pU64_8 + 0x10;
      } while (pU64_8 != pU64_6);
      pU64_8 = (uint8_t *)*param_1;
    }
    uVal_7 = param_1[2] - (int64_t)pU64_8;
    pU64_6 = pU64_8;
    if (0xfff < uVal_7) {
      pU64_6 = *(uint8_t **)(pU64_8 + -8);
      if ((uint8_t *)0x1f < pU64_8 + (-8 - (int64_t)pU64_6)) {
LAB_18008548a:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
    }
    thunk_FUN_180695dd0(pU64_6,uVal_7);
  }
  *param_1 = uVal_9;
  param_1[1] = (uVal_2 - uVal_1) + uVal_9;
  param_1[2] = uVal_3 * 0x10 + uVal_9;
  return;
}

// Unwind@180085490
void Unwind_180085490(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800854b0
void func_0x1800854b0(uint64_t *param_1)
{
  uint8_t *pU64_1;
  uint8_t *pU64_2;
  
  pU64_1 = (uint8_t *)param_1[1];
  for (pU64_2 = (uint8_t *)*param_1; pU64_2 != pU64_1; pU64_2 = pU64_2 + 0x10) {
    func_0x180084c70(pU64_2 + 8,*pU64_2);
  }
  return;
}

// Unwind@180085500
void Unwind_180085500(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180085520
uint8_t * func_0x180085520(uint64_t *param_1,uint8_t *param_2,uint8_t *param_3)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint8_t *pU64_8;
  uint64_t uVal_9;
  
  uVal_1 = *param_1;
  uVal_9 = ((int64_t)(param_1[1] - uVal_1) >> 4) + 1;
  uVal_6 = (int64_t)(param_1[2] - uVal_1) >> 4;
  uVal_3 = (uVal_6 >> 1) + uVal_6;
  if (uVal_3 <= uVal_9) {
    uVal_3 = uVal_9;
  }
  if (0xfffffffffffffff - (uVal_6 >> 1) < uVal_6) {
    uVal_3 = 0xfffffffffffffff;
  }
  if (uVal_3 >> 0x3c != 0) {
LAB_18008578f:
    func_0x18007ba90();
    goto LAB_180085794;
  }
  if (uVal_3 == 0) {
    uVal_6 = 0;
  }
  else if (uVal_3 < 0x100) {
    uVal_6 = func_0x180672de0();
  }
  else {
    if (0xffffffffffffffd < uVal_3) goto LAB_18008578f;
    lVal_4 = func_0x180672de0(uVal_3 * 0x10 + 0x27);
    uVal_6 = lVal_4 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_6 - 8) = lVal_4;
  }
  param_2[uVal_6 - uVal_1] = *param_3;
  *(uint64_t *)(param_2 + ((uVal_6 + 8) - uVal_1)) = *(uint64_t *)(param_3 + 8);
  *param_3 = 0;
  *(uint64_t *)(param_3 + 8) = 0;
  pU64_8 = (uint8_t *)*param_1;
  pU64_5 = (uint8_t *)param_1[1];
  if (param_2 == pU64_5) {
    if (pU64_8 != param_2) {
      lVal_4 = 0;
      do {
        *(uint8_t *)(uVal_6 + lVal_4) = pU64_8[lVal_4];
        *(uint64_t *)(uVal_6 + 8 + lVal_4) = *(uint64_t *)(pU64_8 + lVal_4 + 8);
        pU64_8[lVal_4] = 0;
        *(uint64_t *)(pU64_8 + lVal_4 + 8) = 0;
        lVal_2 = lVal_4 + 0x10;
        lVal_4 = lVal_4 + 0x10;
      } while (pU64_8 + lVal_2 != param_2);
      goto LAB_1800856f1;
    }
  }
  else {
    if (pU64_8 != param_2) {
      lVal_4 = 0;
      do {
        *(uint8_t *)(uVal_6 + lVal_4) = pU64_8[lVal_4];
        *(uint64_t *)(uVal_6 + 8 + lVal_4) = *(uint64_t *)(pU64_8 + lVal_4 + 8);
        pU64_8[lVal_4] = 0;
        *(uint64_t *)(pU64_8 + lVal_4 + 8) = 0;
        lVal_2 = lVal_4 + 0x10;
        lVal_4 = lVal_4 + 0x10;
      } while (pU64_8 + lVal_2 != param_2);
      pU64_5 = (uint8_t *)param_1[1];
    }
    if (param_2 != pU64_5) {
      lVal_4 = 0;
      do {
        param_2[lVal_4 + (uVal_6 - uVal_1) + 0x10] = param_2[lVal_4];
        *(uint64_t *)(param_2 + lVal_4 + (uVal_6 - uVal_1) + 0x18) =
             *(uint64_t *)(param_2 + lVal_4 + 8);
        param_2[lVal_4] = 0;
        *(uint64_t *)(param_2 + lVal_4 + 8) = 0;
        lVal_2 = lVal_4 + 0x10;
        lVal_4 = lVal_4 + 0x10;
      } while (param_2 + lVal_2 != pU64_5);
    }
LAB_1800856f1:
    pU64_8 = (uint8_t *)*param_1;
  }
  if (pU64_8 != (uint8_t *)0x0) {
    pU64_5 = (uint8_t *)param_1[1];
    if (pU64_8 != pU64_5) {
      do {
        func_0x180084c70(pU64_8 + 8,*pU64_8);
        pU64_8 = pU64_8 + 0x10;
      } while (pU64_8 != pU64_5);
      pU64_8 = (uint8_t *)*param_1;
    }
    uVal_7 = param_1[2] - (int64_t)pU64_8;
    pU64_5 = pU64_8;
    if (0xfff < uVal_7) {
      pU64_5 = *(uint8_t **)(pU64_8 + -8);
      if ((uint8_t *)0x1f < pU64_8 + (-8 - (int64_t)pU64_5)) {
LAB_180085794:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
    }
    thunk_FUN_180695dd0(pU64_5,uVal_7);
  }
  *param_1 = uVal_6;
  param_1[1] = uVal_9 * 0x10 + uVal_6;
  param_1[2] = uVal_3 * 0x10 + uVal_6;
  return param_2 + (uVal_6 - uVal_1);
}

// Unwind@1800857a0
void Unwind_1800857a0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800857c0
void func_0x1800857c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint8_t *pU64_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  
  uVal_6 = 0xfffffffffffffffe;
  lVal_2 = *(int64_t *)(param_1 + 8);
  if (lVal_2 == 0) {
    return;
  }
  pU64_5 = *(uint8_t **)(param_1 + 0x18);
  pU64_1 = *(uint8_t **)(param_1 + 0x20);
  if (pU64_5 != pU64_1) {
    do {
      func_0x180084c70(pU64_5 + 8,*pU64_5,param_3,param_4,uVal_6);
      pU64_5 = pU64_5 + 0x10;
    } while (pU64_5 != pU64_1);
    lVal_2 = *(int64_t *)(param_1 + 8);
  }
  uVal_4 = *(int64_t *)(param_1 + 0x10) * 0x10;
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
  return;
}

// Unwind@180085850
void Unwind_180085850(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180085870
void func_0x180085870(uint64_t param_1,uint64_t param_2,int64_t *param_3)
{
  char ch_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  ch_1 = *(char *)((int64_t)param_3 + 0x19);
  do {
    if (ch_1 != '\0') {
      return;
    }
    func_0x180085870(param_1,param_2,param_3[2]);
    pLong_2 = (int64_t *)*param_3;
    func_0x180084c70(param_3 + 9,*(uint8_t *)(param_3 + 8));
    uVal_3 = param_3[7];
    if (0xf < uVal_3) {
      lVal_4 = param_3[4];
      uVal_5 = uVal_3 + 1;
      lVal_6 = lVal_4;
      if (0xfff < uVal_5) {
        lVal_6 = *(int64_t *)(lVal_4 + -8);
        if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_6)) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_5 = uVal_3 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_5);
    }
    param_3[6] = 0;
    param_3[7] = 0xf;
    *(uint8_t *)(param_3 + 4) = 0;
    thunk_FUN_180695dd0(param_3,0x50);
    ch_1 = *(char *)((int64_t)pLong_2 + 0x19);
    param_3 = pLong_2;
  } while( true );
}

// Unwind@180085940
void Unwind_180085940(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180085960
void func_0x180085960(uint8_t (*param_1)[16],uint64_t param_2,uint64_t param_3, uint64_t param_4)
{
  uint64_t uVal_1;
  uint8_t *pU64_2;
  uint8_t *pU64_3;
  uint64_t uVal_4;
  
  uVal_4 = 0xfffffffffffffffe;
  pU64_2 = *(uint8_t **)*param_1;
  if (pU64_2 != (uint8_t *)0x0) {
    pU64_3 = *(uint8_t **)(*param_1 + 8);
    if (pU64_2 != pU64_3) {
      do {
        func_0x180084c70(pU64_2 + 8,*pU64_2,param_3,param_4,uVal_4);
        pU64_2 = pU64_2 + 0x10;
      } while (pU64_2 != pU64_3);
      pU64_2 = *(uint8_t **)*param_1;
    }
    uVal_1 = *(int64_t *)param_1[1] - (int64_t)pU64_2;
    pU64_3 = pU64_2;
    if (0xfff < uVal_1) {
      pU64_3 = *(uint8_t **)(pU64_2 + -8);
      if ((uint8_t *)0x1f < pU64_2 + (-8 - (int64_t)pU64_3)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_1 = uVal_1 + 0x27;
    }
    thunk_FUN_180695dd0(pU64_3,uVal_1);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// Unwind@180085a00
void Unwind_180085a00(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180085a50
void func_0x180085a50(uint64_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t *param_4)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  uVal_5 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (param_2 >> 0x3b != 0) {
      func_0x18007c0d0();
LAB_180085af4:
      func_0x18007ba90();
      fnPtr_1 = (func_ptr_t )swi(3);
      (*fnPtr_1)();
      return;
    }
    lVal_4 = param_2 * 0x20;
    if (param_2 < 0x80) {
      uVal_3 = func_0x180672de0(lVal_4);
    }
    else {
      if (param_2 == 0x7ffffffffffffff) goto LAB_180085af4;
      lVal_2 = func_0x180672de0(lVal_4 + 0x27);
      uVal_3 = lVal_2 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_3 - 8) = lVal_2;
    }
    *param_1 = uVal_3;
    param_1[1] = uVal_3;
    param_1[2] = lVal_4 + uVal_3;
    uVal_3 = func_0x180085b30(*param_3,*param_4,uVal_3,param_1,param_1,uVal_5);
    param_1[1] = uVal_3;
  }
  return;
}

// Unwind@180085b00
void Unwind_180085b00(uint64_t param_1,int64_t param_2)
{
  func_0x1800809f0(param_2 + 0x20);
  return;
}

// func_0x180085b30
uint8_t (*func_0x180085b30(uint64_t *param_1,uint64_t *param_2,uint8_t (*param_3)[16]))[16]
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint8_t (*pArr16_8)[16];
  uint64_t uVal_9;
  uint64_t *pU64_10;
  
  while( true ) {
    if (param_1 == param_2) {
      return param_3;
    }
    param_3[1] = ZEXT816(0);
    *param_3 = ZEXT816(0);
    pU64_10 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_10 = (uint64_t *)*param_1;
    }
    uVal_1 = param_1[2];
    if ((int64_t)uVal_1 < 0) break;
    if (uVal_1 < 0x10) {
      *(uint64_t *)param_3[1] = uVal_1;
      *(uint64_t *)(param_3[1] + 8) = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_10 + 4);
      uVal_4 = *(uint32_t *)(pU64_10 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_10 + 0xc);
      *(uint32_t *)*param_3 = *(uint32_t *)pU64_10;
      *(uint32_t *)(*param_3 + 4) = uVal_3;
      *(uint32_t *)(*param_3 + 8) = uVal_4;
      *(uint32_t *)(*param_3 + 0xc) = uVal_5;
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
      *(uint64_t *)*param_3 = uVal_6;
      *(uint64_t *)param_3[1] = uVal_1;
      *(uint64_t *)(param_3[1] + 8) = uVal_9;
      func_0x1806aa960(uVal_6,pU64_10,uVal_1 + 1);
    }
    param_3 = param_3 + 2;
    param_1 = param_1 + 4;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_8 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_8;
}

// Unwind@180085c50
void Unwind_180085c50(uint64_t param_1,int64_t param_2)
{
  func_0x180080ae0(param_2 + 0x20);
  return;
}

// func_0x180086790
void func_0x180086790(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x24] = 1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  return;
}

// func_0x180086960
void func_0x180086960(char *param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint64_t *pU64_3;
  int64_t *pLong_4;
  uint8_t local_80 [56];
  uint8_t local_48 [32];
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 != '\x03') {
    local_28 = func_0x1800833d0();
    func_0x180083260(local_48,"type must be string, but is ",&local_28);
    func_0x180082f00(local_80,0x12e,local_48,param_1);
    func_0x18067a120(local_80,&DAT_180768700);
    fnPtr_2 = (func_ptr_t )swi(3);
    (*fnPtr_2)();
    return;
  }
  pLong_4 = *(int64_t **)(param_1 + 8);
  if (param_2 != pLong_4) {
    uVal_1 = pLong_4[2];
    if (0xf < (uint64_t)pLong_4[3]) {
      pLong_4 = (int64_t *)*pLong_4;
    }
    if ((uint64_t)param_2[3] < uVal_1) {
      func_0x18007bba0(param_2,uVal_1);
      return;
    }
    pU64_3 = param_2;
    if (0xf < (uint64_t)param_2[3]) {
      pU64_3 = (uint64_t *)*param_2;
    }
    param_2[2] = uVal_1;
    func_0x1806aa960(pU64_3,pLong_4,uVal_1);
    *(uint8_t *)((int64_t)pU64_3 + uVal_1) = 0;
  }
  return;
}

// Unwind@180086a30
void Unwind_180086a30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x180086af0
void func_0x180086af0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x29] = 1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  return;
}

// func_0x180086ce0
void func_0x180086ce0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x21] = 1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  return;
}

// func_0x180086e20
void func_0x180086e20(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x26] = 1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  return;
}

// func_0x1800871a0
uint64_t * func_0x1800871a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4, uint64_t param_5,int64_t param_6)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  uVal_4 = param_1[2];
  uVal_3 = 0x7fffffffffffffff;
  if ((uVal_4 ^ 0x7fffffffffffffff) < param_2) {
    func_0x18007ba70();
    goto LAB_180087342;
  }
  param_2 = param_2 + uVal_4;
  uVal_1 = param_1[3];
  if (((int64_t)param_2 < 0) || ((uVal_1 >> 1 ^ 0x7fffffffffffffff) < uVal_1)) {
LAB_1800871f4:
    lVal_2 = func_0x180672de0(uVal_3 + 0x28);
    uVal_5 = lVal_2 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_5 - 8) = lVal_2;
  }
  else {
    uVal_3 = (uVal_1 >> 1) + uVal_1;
    if (uVal_3 < (param_2 | 0xf)) {
      uVal_3 = param_2 | 0xf;
    }
    if (uVal_3 == 0xffffffffffffffff) {
      uVal_5 = 0;
      uVal_3 = 0xffffffffffffffff;
    }
    else {
      if (0xfff < uVal_3 + 1) {
        if (uVal_3 + 1 < 0xffffffffffffffd9) goto LAB_1800871f4;
        func_0x18007ba90();
      }
      uVal_5 = func_0x180672de0();
    }
  }
  param_1[2] = param_2;
  param_1[3] = uVal_3;
  if (uVal_1 < 0x10) {
    func_0x1806aa960(uVal_5,param_1,param_4);
    func_0x1806aa960(uVal_5 + param_4,param_5,param_6);
    func_0x1806aa960(uVal_5 + param_4 + param_6,param_4 + (int64_t)param_1,(uVal_4 - param_4) + 1);
  }
  else {
    uVal_3 = *param_1;
    func_0x1806aa960(uVal_5,uVal_3,param_4);
    func_0x1806aa960(uVal_5 + param_4,param_5,param_6);
    func_0x1806aa960(uVal_5 + param_4 + param_6,param_4 + uVal_3,(uVal_4 - param_4) + 1);
    uVal_4 = uVal_1 + 1;
    uVal_6 = uVal_3;
    if (0xfff < uVal_4) {
      uVal_6 = *(uint64_t *)(uVal_3 - 8);
      if (0x1f < (uVal_3 - 8) - uVal_6) {
LAB_180087342:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(uVal_6,uVal_4);
  }
  *param_1 = uVal_5;
  return param_1;
}

// func_0x180087380
int func_0x180087380(uint64_t *param_1,uint8_t (*param_2)[16],uint32_t param_3)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  int iVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint64_t *pU64_8;
  uint64_t uVal_9;
  uint8_t local_2c8 [16];
  uint8_t local_2b8 [16];
  uint64_t local_2a8;
  uint8_t local_2a0 [592];
  uint8_t local_50;
  int local_4c;
  uint64_t *local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_2b8 = ZEXT816(0);
  local_2c8 = ZEXT816(0);
  uVal_7 = *(uint64_t *)param_2[1];
  if (7 < *(uint64_t *)(param_2[1] + 8)) {
    param_2 = *(uint8_t (**)[16])*param_2;
  }
  if (uVal_7 < 0x7fffffffffffffff) {
    if (uVal_7 < 8) {
      local_2b8._8_8_ = 7;
      local_2b8._0_8_ = uVal_7;
      local_2c8 = *param_2;
    }
    else {
      uVal_5 = uVal_7 | 7;
      if (0x7ffffffffffffffe < uVal_5) goto LAB_1800875b7;
      uVal_9 = 10;
      if (10 < uVal_5) {
        uVal_9 = uVal_5;
      }
      if (uVal_5 < 0x7ff) {
        uVal_5 = func_0x180672de0(uVal_9 * 2 + 2);
      }
      else {
        if (0x7fffffffffffffeb < uVal_5) goto LAB_1800875b7;
        lVal_6 = func_0x180672de0(uVal_9 * 2 + 0x29);
        uVal_5 = lVal_6 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_5 - 8) = lVal_6;
      }
      local_2c8._0_8_ = uVal_5;
      local_2b8._8_8_ = uVal_9;
      local_2b8._0_8_ = uVal_7;
      func_0x1806aa960(uVal_5,param_2,uVal_7 * 2 + 2);
    }
    local_2a8 = 0xffffffffffffffff;
    iVal_4 = func_0x180087840(local_2c8,param_3,&local_2a8,local_2a0);
    if (iVal_4 == 0) {
      local_50 = 1;
      local_4c = 0;
      local_40 = (uint64_t *)func_0x180672de0(0x58);
      local_40[1] = 0x100000001;
      *local_40 = &PTR_LAB_1806b0130;
      pU64_8 = local_40 + 2;
      func_0x180088bb0(pU64_8,local_2c8,param_3);
      *param_1 = pU64_8;
      pLong_3 = (int64_t *)param_1[1];
      param_1[1] = local_40;
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
    }
    else {
      local_4c = 0;
      if (iVal_4 != 0x12) {
        local_4c = iVal_4;
      }
      local_50 = 0;
    }
    iVal_4 = local_4c;
    func_0x180677eb0(local_2a8);
    if (7 < (uint64_t)local_2b8._8_8_) {
      uVal_7 = local_2b8._8_8_ * 2 + 2;
      lVal_6 = local_2c8._0_8_;
      if (0xfff < uVal_7) {
        lVal_6 = *(int64_t *)(local_2c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_2c8._0_8_ + -8) - lVal_6)) goto LAB_1800875bc;
        uVal_7 = local_2b8._8_8_ * 2 + 0x29;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_7);
    }
    return iVal_4;
  }
  func_0x18007ba70();
LAB_1800875b7:
  func_0x18007ba90();
LAB_1800875bc:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1800875c0
void Unwind_1800875c0(uint64_t param_1,int64_t param_2)
{
  func_0x180677eb0(*(uint64_t *)(param_2 + 0x40));
  func_0x1800565c0(param_2 + 0x20);
  return;
}

// Unwind@180087600
void Unwind_180087600(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x2a8),0x58);
  return;
}

// Unwind@180087640
void Unwind_180087640(uint64_t param_1,int64_t param_2)
{
  func_0x1800877d0(param_2 + 0x20);
  return;
}

// func_0x180087670
void func_0x180087670(char *param_1,uint32_t param_2,uint64_t param_3)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  uint8_t local_f0 [136];
  uint32_t local_68 [2];
  uint8_t **local_60;
  uint8_t local_58 [16];
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_60 = &PTR_PTR_FUN_1806b00d8;
  local_58 = ZEXT816(0);
  local_68[0] = param_2;
  uVal_2 = strlen(param_1);
  if ((int64_t)uVal_2 < 0) {
    uVal_2 = func_0x18007ba70();
  }
  if (uVal_2 < 0x10) {
    pU64_5 = local_58;
    uVal_6 = 0xf;
  }
  else {
    uVal_3 = uVal_2 | 0xf;
    uVal_6 = 0x16;
    if (0x16 < uVal_3) {
      uVal_6 = uVal_3;
    }
    if (uVal_3 < 0xfff) {
      pU64_5 = (uint8_t *)func_0x180672de0(uVal_6 + 1);
    }
    else {
      lVal_4 = func_0x180672de0(uVal_6 + 0x28);
      pU64_5 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_5 + -8) = lVal_4;
    }
    local_58._0_8_ = pU64_5;
  }
  local_48 = uVal_2;
  local_40 = uVal_6;
  func_0x1806aa960(pU64_5,param_1,uVal_2);
  pU64_5[uVal_2] = 0;
  func_0x180089120(local_f0,local_58,param_3,local_68);
  func_0x18067a120(local_f0,&DAT_1807687e8);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180087760
void Unwind_180087760(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_2 + 0xd8);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0xc0);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  return;
}

// func_0x1800877d0
void func_0x1800877d0(int64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  func_0x180677eb0(param_1[4]);
  uVal_1 = param_1[3];
  if (7 < uVal_1) {
    lVal_2 = *param_1;
    uVal_3 = uVal_1 * 2 + 2;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 * 2 + 0x29;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[2] = 0;
  param_1[3] = 7;
  *(uint16_t *)param_1 = 0;
  return;
}

// func_0x180087840
uint64_t func_0x180087840(uint8_t (*param_1)[16],uint64_t param_2,uint64_t *param_3, int64_t param_4)
{
  uint64_t uVal_1;
  uint8_t auArr_2 [16];
  int iVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint8_t (*pArr16_9)[16];
  uint8_t *local_88;
  uint64_t local_80;
  uint8_t local_68 [16];
  uint8_t local_58 [16];
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  pArr16_9 = param_1;
  if (7 < *(uint64_t *)(param_1[1] + 8)) {
    pArr16_9 = *(uint8_t (**)[16])*param_1;
  }
  uVal_4 = func_0x18068e050(pArr16_9);
  if (uVal_4 == 0) {
    return 2;
  }
  if (uVal_4 != *(uint64_t *)param_1[1]) {
    return 2;
  }
  local_58 = ZEXT816(0);
  local_68 = ZEXT816(0);
  if (0x7ffffffffffffffe < uVal_4) {
    func_0x18007ba70();
LAB_180087a8f:
    func_0x18007ba90();
LAB_180087a94:
    do {
      invalidInstructionException();
    } while( true );
  }
  local_58._0_8_ = uVal_4;
  if (uVal_4 < 8) {
    local_58._8_8_ = 7;
    local_68 = *pArr16_9;
  }
  else {
    uVal_7 = uVal_4 | 7;
    if (0x7ffffffffffffffe < uVal_7) goto LAB_180087a8f;
    uVal_8 = 10;
    if (10 < uVal_7) {
      uVal_8 = uVal_7;
    }
    if (uVal_7 < 0x7ff) {
      uVal_7 = func_0x180672de0(uVal_8 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVal_7) goto LAB_180087a8f;
      lVal_5 = func_0x180672de0(uVal_8 * 2 + 0x29);
      uVal_7 = lVal_5 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_7 - 8) = lVal_5;
    }
    local_68._0_8_ = uVal_7;
    local_58._8_8_ = uVal_8;
    func_0x1806aa960(uVal_7,pArr16_9,uVal_4 * 2 + 2);
  }
  local_88 = &DAT_1807614ec;
  local_80 = 1;
  func_0x180087bd0(param_1,&local_88);
  if (7 < *(uint64_t *)(param_1[1] + 8)) {
    param_1 = *(uint8_t (**)[16])*param_1;
  }
  uVal_4 = func_0x180677e20(param_1,param_3,param_4);
  iVal_3 = (int)uVal_4;
  auArr_2 = local_68;
  if (iVal_3 == 5) {
    uVal_4 = 0x12;
    if ((param_2 & 2) == 0) {
      uVal_4 = 5;
    }
  }
  else if (iVal_3 == 2) {
    if ((uint64_t)local_58._8_8_ < 8) {
      pU64_6 = local_68;
    }
    else {
      pU64_6 = (uint8_t *)local_68._0_8_;
    }
    iVal_3 = func_0x180677ed0(pU64_6,&local_88,3,0xffffffff);
    uVal_4 = (uint64_t)((uint)(iVal_3 == 0) << 4 | 2);
    auArr_2 = local_68;
  }
  else if (iVal_3 == 0) {
    uVal_1 = *param_3;
    while (uVal_4 = 0, auArr_2 = local_68, *(short *)(param_4 + 0x2c) == 0x2e) {
      if (((*(short *)(param_4 + 0x2e) != 0) &&
          ((*(short *)(param_4 + 0x2e) != 0x2e || (*(short *)(param_4 + 0x30) != 0)))) ||
         (uVal_4 = func_0x180678210(uVal_1,param_4), auArr_2 = local_68, (int)uVal_4 != 0)) break;
    }
  }
  if (7 < (uint64_t)local_58._8_8_) {
    local_68._0_8_ = auArr_2._0_8_;
    uVal_7 = local_58._8_8_ * 2 + 2;
    if (0xfff < uVal_7) {
      if (0x1f < (uint64_t)((local_68._0_8_ + -8) - *(int64_t *)(local_68._0_8_ + -8)))
      goto LAB_180087a94;
      uVal_7 = local_58._8_8_ * 2 + 0x29;
      local_68._0_8_ = *(int64_t *)(local_68._0_8_ + -8);
    }
    uVal_4 = uVal_4 & 0xffffffff;
    lVal_5 = local_68._0_8_;
    local_68 = auArr_2;
    thunk_FUN_180695dd0(lVal_5,uVal_7);
  }
  return uVal_4;
}

// Unwind@180087aa0
void Unwind_180087aa0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x40);
  return;
}

// func_0x180087ae0
uint8_t (*func_0x180087ae0(uint8_t (*param_1)[16],uint64_t *param_2))[16]
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint8_t (*pArr16_8)[16];
  uint64_t uVal_9;
  
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  uVal_1 = param_2[2];
  if (7 < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  if (uVal_1 < 0x7fffffffffffffff) {
    if (uVal_1 < 8) {
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = 7;
      uVal_3 = *(uint32_t *)((int64_t)param_2 + 4);
      uVal_4 = *(uint32_t *)(param_2 + 1);
      uVal_5 = *(uint32_t *)((int64_t)param_2 + 0xc);
      *(uint32_t *)*param_1 = *(uint32_t *)param_2;
      *(uint32_t *)(*param_1 + 4) = uVal_3;
      *(uint32_t *)(*param_1 + 8) = uVal_4;
      *(uint32_t *)(*param_1 + 0xc) = uVal_5;
    }
    else {
      uVal_6 = uVal_1 | 7;
      if (0x7ffffffffffffffe < uVal_6) goto LAB_180087bc9;
      uVal_9 = 10;
      if (10 < uVal_6) {
        uVal_9 = uVal_6;
      }
      if (uVal_6 < 0x7ff) {
        uVal_6 = func_0x180672de0(uVal_9 * 2 + 2);
      }
      else {
        if (0x7fffffffffffffeb < uVal_6) goto LAB_180087bc9;
        lVal_7 = func_0x180672de0(uVal_9 * 2 + 0x29);
        uVal_6 = lVal_7 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_6 - 8) = lVal_7;
      }
      *(uint64_t *)*param_1 = uVal_6;
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = uVal_9;
      func_0x1806aa960(uVal_6,param_2,uVal_1 * 2 + 2);
    }
    return param_1;
  }
  func_0x18007ba70();
LAB_180087bc9:
  func_0x18007ba90();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_8 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_8;
}

// func_0x180087bd0
uint64_t func_0x180087bd0(uint64_t param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint8_t *pU64_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint8_t local_58 [16];
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVal_3 = *param_2;
  uVal_5 = param_2[1];
  local_58 = ZEXT816(0);
  if (0x7ffffffffffffffe < uVal_5) {
    func_0x18007ba70();
LAB_180087d17:
    func_0x18007ba90();
LAB_180087d1c:
    do {
      invalidInstructionException();
    } while( true );
  }
  if (uVal_5 < 8) {
    pU64_4 = local_58;
    uVal_6 = 7;
  }
  else {
    uVal_1 = uVal_5 | 7;
    if (0x7ffffffffffffffe < uVal_1) goto LAB_180087d17;
    uVal_6 = 10;
    if (10 < uVal_1) {
      uVal_6 = uVal_1;
    }
    if (uVal_1 < 0x7ff) {
      pU64_4 = (uint8_t *)func_0x180672de0(uVal_6 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVal_1) goto LAB_180087d17;
      lVal_2 = func_0x180672de0(uVal_6 * 2 + 0x29);
      pU64_4 = (uint8_t *)(lVal_2 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_4 + -8) = lVal_2;
    }
    local_58._0_8_ = pU64_4;
  }
  local_48 = uVal_5;
  local_40 = uVal_6;
  func_0x1806aa960(pU64_4,uVal_3,uVal_5 * 2);
  *(uint16_t *)(pU64_4 + uVal_5 * 2) = 0;
  uVal_3 = func_0x180087d50(param_1,local_58);
  if (7 < local_40) {
    uVal_5 = local_40 * 2 + 2;
    lVal_2 = local_58._0_8_;
    if (0xfff < uVal_5) {
      if (0x1f < (uint64_t)((local_58._0_8_ + -8) - *(int64_t *)(local_58._0_8_ + -8)))
      goto LAB_180087d1c;
      uVal_5 = local_40 * 2 + 0x29;
      lVal_2 = *(int64_t *)(local_58._0_8_ + -8);
    }
    thunk_FUN_180695dd0(lVal_2,uVal_5);
  }
  return uVal_3;
}

// Unwind@180087d20
void Unwind_180087d20(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x20);
  return;
}

// func_0x180087d50
uint ** func_0x180087d50(uint **param_1,uint **param_2)
{
  uint **ptr2_U64_1;
  uint **ptr2_U64_2;
  uint uVal_3;
  uint *pU64_4;
  func_ptr_t fnPtr_5;
  char ch_6;
  uint *pU64_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint **ptr2_U64_10;
  uint **ptr2_U64_11;
  uint64_t uVal_12;
  short sz_13;
  uint uVal_14;
  short sz_15;
  uint **ptr2_U64_16;
  uint64_t uVal_17;
  uint **ptr2_U64_18;
  uint64_t uVal_19;
  uint **ptr2_U64_20;
  
  ch_6 = func_0x180088220(param_2);
  if (ch_6 != '\0') goto LAB_180087d72;
  ptr2_U64_10 = param_1;
  if (&DAT_00000007 < param_1[3]) {
    ptr2_U64_10 = (uint **)*param_1;
  }
  pU64_7 = param_1[2];
  ptr2_U64_11 = param_2;
  if (&DAT_00000007 < param_2[3]) {
    ptr2_U64_11 = (uint **)*param_2;
  }
  pU64_4 = param_2[2];
  ptr2_U64_1 = (uint **)((int64_t)ptr2_U64_10 + (int64_t)pU64_7 * 2);
  ptr2_U64_16 = ptr2_U64_10;
  if (1 < (int64_t)pU64_7) {
    uVal_3 = *(uint *)ptr2_U64_10;
    if ((uVal_3 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      ptr2_U64_16 = (uint **)((int64_t)ptr2_U64_10 + 4);
    }
    else if (((short)uVal_3 == 0x5c) || ((uVal_3 & 0xffff) == 0x2f)) {
      uVal_14 = uVal_3 >> 0x10;
      sz_13 = (short)(uVal_3 >> 0x10);
      if (pU64_7 < (uint *)0x4) {
        if (pU64_7 != (uint *)0x2) goto LAB_180087ea7;
      }
      else if (((*(short *)((int64_t)ptr2_U64_10 + 6) == 0x5c) ||
               (*(short *)((int64_t)ptr2_U64_10 + 6) == 0x2f)) &&
              ((pU64_7 == (uint *)0x4 ||
               ((*(short *)(ptr2_U64_10 + 1) != 0x2f && (*(short *)(ptr2_U64_10 + 1) != 0x5c)))))) {
        ptr2_U64_20 = (uint **)((int64_t)ptr2_U64_10 + 6);
        ptr2_U64_16 = ptr2_U64_20;
        if ((sz_13 == 0x2f) || (uVal_14 == 0x5c)) {
          sz_15 = *(short *)((int64_t)ptr2_U64_10 + 4);
          if ((sz_15 != 0x2e) && (sz_15 != 0x3f)) {
            if (uVal_14 != 0x3f) goto LAB_180087ea7;
            goto LAB_180087f17;
          }
        }
        else {
          ptr2_U64_16 = ptr2_U64_10;
          if (uVal_14 == 0x3f) {
            sz_15 = *(short *)((int64_t)ptr2_U64_10 + 4);
LAB_180087f17:
            ptr2_U64_16 = ptr2_U64_20;
            if (sz_15 != 0x3f) {
              ptr2_U64_16 = ptr2_U64_10;
            }
          }
        }
      }
      else {
LAB_180087ea7:
        if ((((sz_13 == 0x5c) || (ptr2_U64_16 = ptr2_U64_10, uVal_14 == 0x2f)) &&
            (ptr2_U64_16 = ptr2_U64_10, *(short *)((int64_t)ptr2_U64_10 + 4) != 0x2f)) &&
           ((*(short *)((int64_t)ptr2_U64_10 + 4) != 0x5c &&
            (ptr2_U64_20 = (uint **)((int64_t)ptr2_U64_10 + 6), ptr2_U64_16 = ptr2_U64_20,
            pU64_7 != (uint *)0x3)))) {
          lVal_9 = (int64_t)pU64_7 * 2 + -6;
          do {
            ptr2_U64_16 = ptr2_U64_20;
            if ((*(short *)ptr2_U64_20 == 0x2f) || (*(short *)ptr2_U64_20 == 0x5c)) break;
            ptr2_U64_20 = (uint **)((int64_t)ptr2_U64_20 + 2);
            lVal_9 = lVal_9 + -2;
            ptr2_U64_16 = ptr2_U64_1;
          } while (lVal_9 != 0);
        }
      }
    }
  }
  ptr2_U64_2 = (uint **)((int64_t)ptr2_U64_11 + (int64_t)pU64_4 * 2);
  ptr2_U64_20 = ptr2_U64_11;
  if (1 < (int64_t)pU64_4) {
    uVal_3 = *(uint *)ptr2_U64_11;
    if ((uVal_3 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      ptr2_U64_18 = (uint **)((int64_t)ptr2_U64_11 + 4);
LAB_180087f9a:
      uVal_19 = (int64_t)ptr2_U64_18 - (int64_t)ptr2_U64_11 >> 1;
      uVal_17 = (int64_t)ptr2_U64_16 - (int64_t)ptr2_U64_10 >> 1;
      uVal_12 = uVal_17;
      if (uVal_19 < uVal_17) {
        uVal_12 = uVal_19;
      }
      uVal_8 = thunk_FUN_180676f20(ptr2_U64_10,ptr2_U64_11,uVal_12);
      if ((uVal_17 != uVal_19) || (ptr2_U64_20 = ptr2_U64_18, uVal_8 != uVal_12)) {
LAB_180087d72:
        if (param_1 == param_2) {
          return param_1;
        }
        pU64_7 = param_2[2];
        if (&DAT_00000007 < param_2[3]) {
          param_2 = (uint **)*param_2;
        }
        if (param_1[3] < pU64_7) {
          func_0x180088340(param_1,pU64_7);
          return param_1;
        }
        ptr2_U64_10 = param_1;
        if (&DAT_00000007 < param_1[3]) {
          ptr2_U64_10 = (uint **)*param_1;
        }
        param_1[2] = pU64_7;
        func_0x1806aa960(ptr2_U64_10,param_2,(int64_t)pU64_7 * 2);
        *(short *)((int64_t)ptr2_U64_10 + (int64_t)pU64_7 * 2) = 0;
        return param_1;
      }
    }
    else if (((short)uVal_3 == 0x5c) || ((uVal_3 & 0xffff) == 0x2f)) {
      uVal_14 = uVal_3 >> 0x10;
      sz_13 = (short)(uVal_3 >> 0x10);
      if (pU64_4 < (uint *)0x4) {
        if (pU64_4 != (uint *)0x2) goto LAB_18008816f;
      }
      else if (((*(short *)((int64_t)ptr2_U64_11 + 6) == 0x5c) ||
               (*(short *)((int64_t)ptr2_U64_11 + 6) == 0x2f)) &&
              ((pU64_4 == (uint *)0x4 ||
               ((*(short *)(ptr2_U64_11 + 1) != 0x2f && (*(short *)(ptr2_U64_11 + 1) != 0x5c)))))) {
        ptr2_U64_18 = (uint **)((int64_t)ptr2_U64_11 + 6);
        if ((sz_13 == 0x2f) || (uVal_14 == 0x5c)) {
          sz_15 = *(short *)((int64_t)ptr2_U64_11 + 4);
          if ((sz_15 == 0x2e) || (sz_15 == 0x3f)) goto LAB_180087f9a;
          if (uVal_14 != 0x3f) goto LAB_18008816f;
        }
        else {
          if (uVal_14 != 0x3f) goto LAB_180087f30;
          sz_15 = *(short *)((int64_t)ptr2_U64_11 + 4);
        }
        ptr2_U64_20 = ptr2_U64_18;
        if (sz_15 != 0x3f) {
          ptr2_U64_20 = ptr2_U64_11;
        }
LAB_180088200:
        ptr2_U64_18 = ptr2_U64_20;
        if (ptr2_U64_11 != ptr2_U64_20) goto LAB_180087f9a;
      }
      else {
LAB_18008816f:
        if ((((sz_13 == 0x5c) || (uVal_14 == 0x2f)) && (*(short *)((int64_t)ptr2_U64_11 + 4) != 0x2f))
           && (*(short *)((int64_t)ptr2_U64_11 + 4) != 0x5c)) {
          ptr2_U64_20 = (uint **)((int64_t)ptr2_U64_11 + 6);
          ptr2_U64_18 = ptr2_U64_20;
          if (pU64_4 != (uint *)0x3) {
            lVal_9 = (int64_t)pU64_4 * 2 + -6;
            do {
              if ((*(short *)ptr2_U64_20 == 0x2f) || (*(short *)ptr2_U64_20 == 0x5c)) goto LAB_180088200;
              ptr2_U64_20 = (uint **)((int64_t)ptr2_U64_20 + 2);
              lVal_9 = lVal_9 + -2;
              ptr2_U64_18 = ptr2_U64_2;
            } while (lVal_9 != 0);
          }
          goto LAB_180087f9a;
        }
      }
    }
  }
LAB_180087f30:
  if ((ptr2_U64_20 == ptr2_U64_2) || ((*(short *)ptr2_U64_20 != 0x5c && (*(short *)ptr2_U64_20 != 0x2f)))) {
    if (ptr2_U64_16 == ptr2_U64_1) {
      if ((int64_t)pU64_7 * 2 < 5) goto LAB_1800880f8;
    }
    else if ((*(short *)((int64_t)ptr2_U64_1 + -2) == 0x2f) ||
            (*(short *)((int64_t)ptr2_U64_1 + -2) == 0x5c)) goto LAB_1800880f8;
    pU64_7 = param_1[2];
    if (pU64_7 < param_1[3]) {
      param_1[2] = (uint *)((int64_t)pU64_7 + 1);
      ptr2_U64_10 = param_1;
      if (&DAT_00000007 < param_1[3]) {
        ptr2_U64_10 = (uint **)*param_1;
      }
      *(short *)((int64_t)ptr2_U64_10 + (int64_t)pU64_7 * 2) = 0x5c;
      *(uint16_t *)((int64_t)ptr2_U64_10 + (int64_t)pU64_7 * 2 + 2) = 0;
    }
    else {
      func_0x180088470(param_1,1);
    }
  }
  else {
    pU64_7 = (uint *)((int64_t)ptr2_U64_16 - (int64_t)ptr2_U64_10 >> 1);
    if (param_1[2] < pU64_7) {
      func_0x1800801d0();
      fnPtr_5 = (func_ptr_t )swi(3);
      ptr2_U64_10 = (uint **)(*fnPtr_5)();
      return ptr2_U64_10;
    }
    param_1[2] = pU64_7;
    ptr2_U64_10 = param_1;
    if (&DAT_00000007 < param_1[3]) {
      ptr2_U64_10 = (uint **)*param_1;
    }
    *(uint16_t *)((int64_t)ptr2_U64_10 + ((int64_t)ptr2_U64_16 - (int64_t)ptr2_U64_10)) = 0;
  }
LAB_1800880f8:
  uVal_12 = (int64_t)ptr2_U64_2 - (int64_t)ptr2_U64_20 >> 1;
  pU64_7 = param_1[2];
  if ((uint64_t)((int64_t)param_1[3] - (int64_t)pU64_7) < uVal_12) {
    func_0x1800885f0(param_1,uVal_12);
  }
  else {
    param_1[2] = (uint *)(uVal_12 + (int64_t)pU64_7);
    ptr2_U64_10 = param_1;
    if (&DAT_00000007 < param_1[3]) {
      ptr2_U64_10 = (uint **)*param_1;
    }
    func_0x1806aa960((short *)((int64_t)ptr2_U64_10 + (int64_t)pU64_7 * 2),ptr2_U64_20,
                  (int64_t)ptr2_U64_2 - (int64_t)ptr2_U64_20);
    *(short *)((int64_t)ptr2_U64_10 + (int64_t)(uint *)(uVal_12 + (int64_t)pU64_7) * 2) = 0;
  }
  return param_1;
}

// func_0x180088220
uint64_t func_0x180088220(uint **param_1)
{
  short sz_1;
  uint uVal_2;
  uint *pU64_3;
  uint3 uVal_4;
  uint uVal_5;
  uint64_t uVal_6;
  short sz_7;
  
  pU64_3 = param_1[2];
  if (&DAT_00000007 < param_1[3]) {
    param_1 = (uint **)*param_1;
  }
  if ((uint *)0x1 < pU64_3) {
    uVal_5 = (*(uint *)param_1 & 0xffffffdf) - 0x3a0041;
    if (uVal_5 < 0x1a) {
      if (2 < (int64_t)pU64_3) {
        sz_7 = *(short *)((int64_t)param_1 + 4);
        return (uint64_t)CONCAT11((char)((ushort)sz_7 >> 8),sz_7 == 0x2f || sz_7 == 0x5c);
      }
    }
    else if (1 < (int64_t)pU64_3) {
      uVal_2 = *(uint *)param_1;
      uVal_4 = (uint3)(uVal_5 >> 8);
      uVal_6 = CONCAT71((uint7)uVal_4,1);
      if ((uVal_2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
        return uVal_6;
      }
      if (((short)uVal_2 == 0x5c) || ((uVal_2 & 0xffff) == 0x2f)) {
        uVal_5 = uVal_2 >> 0x10;
        sz_7 = (short)(uVal_2 >> 0x10);
        if (pU64_3 < (uint *)0x4) {
          if (pU64_3 == (uint *)0x2) {
            return 0;
          }
        }
        else if (((*(short *)((int64_t)param_1 + 6) == 0x5c) ||
                 (*(short *)((int64_t)param_1 + 6) == 0x2f)) &&
                ((pU64_3 == (uint *)0x4 ||
                 ((*(short *)(param_1 + 1) != 0x2f && (*(short *)(param_1 + 1) != 0x5c)))))) {
          if ((sz_7 != 0x2f) && (uVal_5 != 0x5c)) {
            if (uVal_5 != 0x3f) {
              return 0;
            }
            return (uint64_t)CONCAT31(uVal_4,*(short *)((int64_t)param_1 + 4) == 0x3f);
          }
          sz_1 = *(short *)((int64_t)param_1 + 4);
          if (sz_1 == 0x2e) {
            return uVal_6;
          }
          if (sz_1 == 0x3f) {
            return uVal_6;
          }
          if (uVal_5 == 0x3f) {
            return (uint64_t)CONCAT31(uVal_4,sz_1 == 0x3f);
          }
        }
        if ((sz_7 == 0x5c) || (uVal_5 == 0x2f)) {
          sz_7 = *(short *)((int64_t)param_1 + 4);
          return (uint64_t)CONCAT11((char)((ushort)sz_7 >> 8),sz_7 != 0x2f && sz_7 != 0x5c);
        }
      }
    }
  }
  return 0;
}

// func_0x180088340
uint64_t * func_0x180088340(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  if (param_2 < 0x7fffffffffffffff) {
    uVal_3 = param_2 | 7;
    if (uVal_3 < 0x7fffffffffffffff) {
      uVal_1 = param_1[3];
      if (uVal_1 <= 0x7ffffffffffffffe - (uVal_1 >> 1)) {
        uVal_6 = (uVal_1 >> 1) + uVal_1;
        if (uVal_6 < uVal_3) {
          uVal_6 = uVal_3;
        }
        uVal_3 = uVal_6 + 1;
        if (-1 < (int64_t)uVal_3) {
          if (uVal_3 < 0x800) {
            uVal_3 = func_0x180672de0(uVal_3 * 2);
          }
          else {
            if (0x7fffffffffffffec < uVal_3) goto LAB_18008845c;
            lVal_4 = func_0x180672de0(uVal_3 * 2 + 0x27);
            uVal_3 = lVal_4 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_3 - 8) = lVal_4;
          }
          param_1[2] = param_2;
          param_1[3] = uVal_6;
          func_0x1806aa960(uVal_3,param_4,param_2 * 2);
          *(uint16_t *)(uVal_3 + param_2 * 2) = 0;
          if (7 < uVal_1) {
            uVal_2 = *param_1;
            uVal_6 = uVal_1 * 2 + 2;
            uVal_5 = uVal_2;
            if (0xfff < uVal_6) {
              uVal_5 = *(uint64_t *)(uVal_2 - 8);
              if (0x1f < (uVal_2 - 8) - uVal_5) goto LAB_180088466;
              uVal_6 = uVal_1 * 2 + 0x29;
            }
            thunk_FUN_180695dd0(uVal_5,uVal_6);
          }
          *param_1 = uVal_3;
          return param_1;
        }
      }
    }
LAB_18008845c:
    func_0x18007ba90();
  }
  func_0x18007ba70();
LAB_180088466:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x180088470
uint64_t * func_0x180088470(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint16_t param_4)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  uVal_5 = param_1[2];
  if (param_2 <= 0x7ffffffffffffffe - uVal_5) {
    param_2 = param_2 + uVal_5;
    uVal_3 = param_2 | 7;
    if (uVal_3 < 0x7fffffffffffffff) {
      uVal_1 = param_1[3];
      if (uVal_1 <= 0x7ffffffffffffffe - (uVal_1 >> 1)) {
        uVal_6 = (uVal_1 >> 1) + uVal_1;
        if (uVal_6 < uVal_3) {
          uVal_6 = uVal_3;
        }
        uVal_3 = uVal_6 + 1;
        if (-1 < (int64_t)uVal_3) {
          if (uVal_3 == 0) {
            uVal_3 = 0;
            param_1[2] = param_2;
            param_1[3] = uVal_6;
          }
          else if (uVal_3 < 0x800) {
            uVal_3 = func_0x180672de0(uVal_3 * 2);
            param_1[2] = param_2;
            param_1[3] = uVal_6;
          }
          else {
            if (0x7fffffffffffffec < uVal_3) goto LAB_1800885df;
            lVal_2 = func_0x180672de0(uVal_3 * 2 + 0x27);
            uVal_3 = lVal_2 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_3 - 8) = lVal_2;
            param_1[2] = param_2;
            param_1[3] = uVal_6;
          }
          if (uVal_1 < 8) {
            func_0x1806aa960(uVal_3,param_1,uVal_5 * 2);
            *(uint16_t *)(uVal_3 + uVal_5 * 2) = param_4;
            *(uint16_t *)(uVal_3 + 2 + uVal_5 * 2) = 0;
          }
          else {
            uVal_6 = *param_1;
            func_0x1806aa960(uVal_3,uVal_6,uVal_5 * 2);
            *(uint16_t *)(uVal_3 + uVal_5 * 2) = param_4;
            *(uint16_t *)(uVal_3 + 2 + uVal_5 * 2) = 0;
            uVal_5 = uVal_1 * 2 + 2;
            uVal_4 = uVal_6;
            if (0xfff < uVal_5) {
              uVal_4 = *(uint64_t *)(uVal_6 - 8);
              if (0x1f < (uVal_6 - 8) - uVal_4) goto LAB_1800885e9;
              uVal_5 = uVal_1 * 2 + 0x29;
            }
            thunk_FUN_180695dd0(uVal_4,uVal_5);
          }
          *param_1 = uVal_3;
          return param_1;
        }
      }
    }
LAB_1800885df:
    func_0x18007ba90();
  }
  func_0x18007ba70();
LAB_1800885e9:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x1800885f0
uint64_t * func_0x1800885f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, int64_t param_5)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  uVal_4 = param_1[2];
  if (param_2 <= 0x7ffffffffffffffe - uVal_4) {
    uVal_3 = param_2 + uVal_4 | 7;
    if (uVal_3 < 0x7fffffffffffffff) {
      uVal_1 = param_1[3];
      if (uVal_1 <= 0x7ffffffffffffffe - (uVal_1 >> 1)) {
        uVal_5 = (uVal_1 >> 1) + uVal_1;
        if (uVal_5 < uVal_3) {
          uVal_5 = uVal_3;
        }
        uVal_3 = uVal_5 + 1;
        if (-1 < (int64_t)uVal_3) {
          if (uVal_3 == 0) {
            uVal_3 = 0;
          }
          else if (uVal_3 < 0x800) {
            uVal_3 = func_0x180672de0(uVal_3 * 2);
          }
          else {
            if (0x7fffffffffffffec < uVal_3) goto LAB_18008876c;
            lVal_2 = func_0x180672de0(uVal_3 * 2 + 0x27);
            uVal_3 = lVal_2 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_3 - 8) = lVal_2;
          }
          param_1[2] = param_2 + uVal_4;
          param_1[3] = uVal_5;
          if (uVal_1 < 8) {
            func_0x1806aa960(uVal_3,param_1,uVal_4 * 2);
            lVal_2 = uVal_3 + uVal_4 * 2;
            func_0x1806aa960(lVal_2,param_4,param_5 * 2);
            *(uint16_t *)(lVal_2 + param_5 * 2) = 0;
          }
          else {
            uVal_5 = *param_1;
            func_0x1806aa960(uVal_3,uVal_5,uVal_4 * 2);
            lVal_2 = uVal_3 + uVal_4 * 2;
            func_0x1806aa960(lVal_2,param_4,param_5 * 2);
            *(uint16_t *)(lVal_2 + param_5 * 2) = 0;
            uVal_4 = uVal_1 * 2 + 2;
            uVal_6 = uVal_5;
            if (0xfff < uVal_4) {
              uVal_6 = *(uint64_t *)(uVal_5 - 8);
              if (0x1f < (uVal_5 - 8) - uVal_6) goto LAB_180088776;
              uVal_4 = uVal_1 * 2 + 0x29;
            }
            thunk_FUN_180695dd0(uVal_6,uVal_4);
          }
          *param_1 = uVal_3;
          return param_1;
        }
      }
    }
LAB_18008876c:
    func_0x18007ba90();
  }
  func_0x18007ba70();
LAB_180088776:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x180088790
uint8_t (*func_0x180088790(uint64_t param_1,uint8_t (*param_2)[16],uint32_t param_3))[16]
{
  func_ptr_t fnPtr_1;
  HLOCAL pVoid_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t (*pArr16_6)[16];
  uint64_t uVal_7;
  HLOCAL local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_48 = (HLOCAL)0x0;
  uVal_3 = func_0x180678e40(param_3,&local_48);
  pVoid_2 = local_48;
  local_40 = uVal_3;
  if (uVal_3 == 0 || local_48 == (HLOCAL)0x0) {
    *(uint64_t *)(*param_2 + 8) = 0;
    *(uint64_t *)param_2[1] = 0xd;
    *(uint64_t *)(param_2[1] + 8) = 0xf;
    *(uint64_t *)*param_2 = 0x206e776f6e6b6e75;
    *(uint64_t *)(*param_2 + 5) = 0x726f727265206e77;
  }
  else {
    param_2[1] = ZEXT816(0);
    *param_2 = ZEXT816(0);
    if ((int64_t)uVal_3 < 0) {
      func_0x18007ba70();
      fnPtr_1 = (func_ptr_t )swi(3);
      pArr16_6 = (uint8_t (*)[16])(*fnPtr_1)();
      return pArr16_6;
    }
    uVal_7 = 0xf;
    pArr16_6 = param_2;
    if (0xf < uVal_3) {
      uVal_4 = uVal_3 | 0xf;
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
      *(uint8_t (**)[16])*param_2 = pArr16_6;
    }
    *(uint64_t *)param_2[1] = uVal_3;
    *(uint64_t *)(param_2[1] + 8) = uVal_7;
    func_0x1806aa960(pArr16_6,pVoid_2,uVal_3);
    (*pArr16_6)[uVal_3] = 0;
  }
  LocalFree(local_48);
  return param_2;
}

// Unwind@1800888c0
void Unwind_1800888c0(uint64_t param_1,int64_t param_2)
{
  LocalFree(*(HLOCAL *)(param_2 + 0x20));
  return;
}

// Unwind@180088950
void Unwind_180088950(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180088970
uint64_t func_0x180088970(int64_t param_1,int *param_2,int param_3)
{
  return CONCAT71((int7)((uint64_t)*(int64_t *)(param_2 + 2) >> 8),
                  *param_2 == param_3 &&
                  *(int64_t *)(param_1 + 8) == *(int64_t *)(*(int64_t *)(param_2 + 2) + 8));
}

// func_0x180088990
uint64_t func_0x180088990(int64_t *param_1,uint32_t param_2,int *param_3)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t auStack_48 [40];
  int local_20 [2];
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  (**(func_ptr_t *)(*param_1 + 0x18))(param_1,local_20,param_2);
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_48)) {
    return CONCAT71((int7)((uint64_t)*(int64_t *)(local_18 + 8) >> 8),
                    *(int64_t *)(local_18 + 8) == *(int64_t *)(*(int64_t *)(param_3 + 2) + 8) &&
                    local_20[0] == *param_3);
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_48);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_2 = (*fnPtr_1)();
  return uVal_2;
}

// func_0x180088a00
uint64_t func_0x180088a00(uint64_t param_1,uint64_t param_2)
{
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x10);
  }
  return param_1;
}

// func_0x180088a30
char * func_0x180088a30(void)
{
  return "generic";
}

// func_0x180088a40
uint8_t (*func_0x180088a40(uint64_t param_1,uint8_t (*param_2)[16],uint32_t param_3))[16]
{
  func_ptr_t fnPtr_1;
  char *_Str;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  
  _Str = (char *)func_0x1806740a0(param_3);
  *param_2 = ZEXT816(0);
  sz_2 = strlen(_Str);
  if (-1 < (int64_t)sz_2) {
    uVal_6 = 0xf;
    pArr16_5 = param_2;
    if (0xf < sz_2) {
      uVal_3 = sz_2 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_3) {
        uVal_6 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        pArr16_5 = (uint8_t (*)[16])func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_6 + 0x28);
        pArr16_5 = (uint8_t (*)[16])(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_5[-1] + 8) = lVal_4;
      }
      *(uint8_t (**)[16])*param_2 = pArr16_5;
    }
    *(size_t *)param_2[1] = sz_2;
    *(uint64_t *)(param_2[1] + 8) = uVal_6;
    func_0x1806aa960(pArr16_5,_Str,sz_2);
    (*pArr16_5)[sz_2] = 0;
    return param_2;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_5 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_5;
}

// func_0x180088b00
uint32_t * func_0x180088b00(uint64_t param_1,uint32_t *param_2,uint32_t param_3)
{
  *param_2 = param_3;
  *(uint64_t *)(param_2 + 2) = param_1;
  return param_2;
}

// func_0x180088b90
void func_0x180088b90(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x000180088b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x10))(param_1,1);
  return;
}

// func_0x180088ba0
uint64_t func_0x180088ba0(void)
{
  return 0;
}

// func_0x180088bb0
uint8_t (*func_0x180088bb0(uint8_t (*param_1)[16],uint8_t (*param_2)[16]))[16]
{
  uint8_t (*pArr16_1)[16];
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  
  param_1[2] = ZEXT816(0);
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[3] = 0;
  pArr16_1 = param_1 + 2;
  *(uint64_t *)(param_1[3] + 8) = 7;
  uVal_2 = *(uint64_t *)param_2[2];
  *(uint64_t *)param_2[2] = 0xffffffffffffffff;
  *(uint64_t *)param_1[4] = uVal_2;
  if (pArr16_1 != param_2) {
    uVal_3 = *(uint64_t *)(param_1[3] + 8);
    if (7 < uVal_3) {
      lVal_11 = *(int64_t *)*pArr16_1;
      uVal_12 = uVal_3 * 2 + 2;
      if (0xfff < uVal_12) {
        if (0x1f < (uint64_t)((lVal_11 + -8) - *(int64_t *)(lVal_11 + -8))) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_12 = uVal_3 * 2 + 0x29;
        lVal_11 = *(int64_t *)(lVal_11 + -8);
      }
      thunk_FUN_180695dd0(lVal_11,uVal_12);
    }
    *(uint64_t *)param_1[3] = 0;
    *(uint64_t *)(param_1[3] + 8) = 7;
    *(uint16_t *)param_1[2] = 0;
    uVal_4 = *(uint32_t *)*param_2;
    uVal_5 = *(uint32_t *)(*param_2 + 4);
    uVal_6 = *(uint32_t *)(*param_2 + 8);
    uVal_7 = *(uint32_t *)(*param_2 + 0xc);
    uVal_8 = *(uint32_t *)(param_2[1] + 4);
    uVal_9 = *(uint32_t *)(param_2[1] + 8);
    uVal_10 = *(uint32_t *)(param_2[1] + 0xc);
    *(uint32_t *)param_1[3] = *(uint32_t *)param_2[1];
    *(uint32_t *)(param_1[3] + 4) = uVal_8;
    *(uint32_t *)(param_1[3] + 8) = uVal_9;
    *(uint32_t *)(param_1[3] + 0xc) = uVal_10;
    *(uint32_t *)*pArr16_1 = uVal_4;
    *(uint32_t *)(param_1[2] + 4) = uVal_5;
    *(uint32_t *)(param_1[2] + 8) = uVal_6;
    *(uint32_t *)(param_1[2] + 0xc) = uVal_7;
    *(uint64_t *)param_2[1] = 0;
    *(uint64_t *)(param_2[1] + 8) = 7;
    *(uint16_t *)*param_2 = 0;
  }
  func_0x180088ce0(param_1,param_2[2] + 8);
  return param_1;
}

// Unwind@180088cb0
void Unwind_180088cb0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x28);
  func_0x180677eb0(*(uint64_t *)(lVal_1 + 0x40));
  func_0x180088f50(lVal_1);
  return;
}

// func_0x180088ce0
void func_0x180088ce0(uint64_t *param_1,uint32_t *param_2)
{
  uint64_t *pU64_1;
  short *pSize_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  uint64_t *pU64_8;
  uint64_t *pU64_9;
  uint64_t uVal_10;
  uint8_t *pU64_11;
  uint8_t local_68 [16];
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  *(uint32_t *)(param_1 + 2) = *param_2;
  *(uint32_t *)((int64_t)param_1 + 0x14) = param_2[9];
  *(uint32_t *)((int64_t)param_1 + 0x1c) = 6;
  if ((*(byte *)((int64_t)param_2 + 1) & 4) == 0) {
    param_1[1] = CONCAT44(param_2[7],param_2[8]);
    *param_1 = *(uint64_t *)(param_2 + 5);
    *(uint32_t *)((int64_t)param_1 + 0x1c) = 0x2e;
  }
  uVal_3 = func_0x18068e050(param_2 + 0xb);
  local_68 = ZEXT816(0);
  if (uVal_3 < 0x7fffffffffffffff) {
    if (uVal_3 < 8) {
      pU64_11 = local_68;
      uVal_10 = 7;
LAB_180088de3:
      pU64_1 = param_1 + 4;
      local_58 = uVal_3;
      local_50 = uVal_10;
      func_0x1806aa960(pU64_11,param_2 + 0xb,uVal_3 * 2);
      *(uint16_t *)(pU64_11 + uVal_3 * 2) = 0;
      pU64_9 = pU64_1;
      if (7 < (uint64_t)param_1[7]) {
        pU64_9 = (uint64_t *)param_1[4];
      }
      lVal_5 = (int64_t)pU64_9 + param_1[6] * 2;
      lVal_6 = func_0x180088fc0(pU64_9,lVal_5);
      while (lVal_7 = lVal_6, lVal_5 != lVal_6) {
        pSize_2 = (short *)(lVal_5 + -2);
        lVal_7 = lVal_5;
        if ((*pSize_2 == 0x5c) || (lVal_5 = lVal_5 + -2, *pSize_2 == 0x2f)) break;
      }
      uVal_3 = lVal_7 - (int64_t)pU64_9 >> 1;
      if (uVal_3 <= (uint64_t)param_1[6]) {
        param_1[6] = uVal_3;
        pU64_8 = pU64_1;
        if (7 < (uint64_t)param_1[7]) {
          pU64_8 = (uint64_t *)param_1[4];
        }
        *(uint16_t *)((int64_t)pU64_8 + (lVal_7 - (int64_t)pU64_9)) = 0;
        func_0x180087d50(pU64_1,local_68);
        if (7 < local_50) {
          uVal_3 = local_50 * 2 + 2;
          lVal_5 = local_68._0_8_;
          if (0xfff < uVal_3) {
            lVal_5 = *(int64_t *)(local_68._0_8_ + -8);
            if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_5)) goto LAB_180088ee8;
            uVal_3 = local_50 * 2 + 0x29;
          }
          thunk_FUN_180695dd0(lVal_5,uVal_3);
        }
        return;
      }
      goto LAB_180088edd;
    }
    uVal_4 = uVal_3 | 7;
    if (uVal_4 < 0x7fffffffffffffff) {
      uVal_10 = 10;
      if (10 < uVal_4) {
        uVal_10 = uVal_4;
      }
      if (uVal_4 < 0x7ff) {
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_10 * 2 + 2);
      }
      else {
        if (0x7fffffffffffffeb < uVal_4) goto LAB_180088ee3;
        lVal_5 = func_0x180672de0(uVal_10 * 2 + 0x29);
        pU64_11 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_5;
      }
      local_68._0_8_ = pU64_11;
      goto LAB_180088de3;
    }
  }
  else {
    func_0x18007ba70();
LAB_180088edd:
    func_0x1800801d0();
  }
LAB_180088ee3:
  func_0x18007ba90();
LAB_180088ee8:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180088ef0
void Unwind_180088ef0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180088f10
void Unwind_180088f10(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x20);
  return;
}

// func_0x180088f50
void func_0x180088f50(int64_t param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_1 + 0x38);
  if (7 < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0x20);
    uVal_3 = uVal_1 * 2 + 2;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 * 2 + 0x29;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 7;
  *(uint16_t *)(param_1 + 0x20) = 0;
  return;
}

// func_0x180088fc0
void func_0x180088fc0(uint *param_1,uint *param_2)
{
  uint *pU64_1;
  uint uVal_2;
  uint *pU64_3;
  short sz_4;
  uint uVal_5;
  int64_t lVal_6;
  short sz_7;
  
  lVal_6 = (int64_t)param_2 - (int64_t)param_1;
  pU64_3 = param_1;
  if (lVal_6 >> 1 < 2) goto LAB_1800890d4;
  uVal_2 = *param_1;
  if ((uVal_2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    pU64_3 = param_1 + 1;
    goto LAB_1800890d4;
  }
  if (((short)uVal_2 != 0x5c) && ((uVal_2 & 0xffff) != 0x2f)) goto LAB_1800890d4;
  uVal_5 = uVal_2 >> 0x10;
  sz_4 = (short)(uVal_2 >> 0x10);
  if ((uint64_t)(lVal_6 >> 1) < 4) {
    if (lVal_6 == 4) goto LAB_1800890d4;
  }
  else if (((*(short *)((int64_t)param_1 + 6) == 0x5c) ||
           (*(short *)((int64_t)param_1 + 6) == 0x2f)) &&
          ((lVal_6 == 8 || ((*(short *)(param_1 + 2) != 0x2f && (*(short *)(param_1 + 2) != 0x5c)))))
          ) {
    pU64_1 = (uint *)((int64_t)param_1 + 6);
    pU64_3 = pU64_1;
    if ((sz_4 == 0x2f) || (uVal_5 == 0x5c)) {
      sz_7 = *(short *)(param_1 + 1);
      if ((sz_7 == 0x2e) || (sz_7 == 0x3f)) goto LAB_1800890d4;
      if (uVal_5 != 0x3f) goto LAB_180089068;
    }
    else {
      pU64_3 = param_1;
      if (uVal_5 != 0x3f) goto LAB_1800890d4;
      sz_7 = *(short *)(param_1 + 1);
    }
    pU64_3 = param_1;
    if (sz_7 == 0x3f) {
      pU64_3 = pU64_1;
    }
    goto LAB_1800890d4;
  }
LAB_180089068:
  if ((((sz_4 == 0x5c) || (pU64_3 = param_1, uVal_5 == 0x2f)) &&
      (pU64_3 = param_1, *(short *)(param_1 + 1) != 0x2f)) &&
     ((*(short *)(param_1 + 1) != 0x5c &&
      (pU64_3 = (uint *)((int64_t)param_1 + 6), pU64_3 != param_2)))) {
    while (*(short *)pU64_3 != 0x2f) {
      if ((*(short *)pU64_3 == 0x5c) || (pU64_3 = (uint *)((int64_t)pU64_3 + 2), pU64_3 == param_2)
         ) break;
    }
  }
LAB_1800890d4:
  for (; (pU64_3 != param_2 && ((*(short *)pU64_3 == 0x5c || (*(short *)pU64_3 == 0x2f))));
      pU64_3 = (uint *)((int64_t)pU64_3 + 2)) {
  }
  return;
}

// func_0x180089120
uint64_t * func_0x180089120(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint8_t (*param_4)[16])
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  char *local_68;
  size_t local_60;
  uint64_t *local_58;
  uint64_t *local_50;
  uint8_t local_48 [16];
  uint64_t local_38;
  uint64_t local_30;
  uint64_t *local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_48 = *param_4;
  func_0x180089820(*(uint32_t *)*param_4,local_48,param_2);
  *param_1 = &PTR_LAB_1806b0150;
  local_58 = param_1 + 5;
  local_28 = param_1;
  func_0x180087ae0(local_58,param_3);
  local_50 = local_28 + 9;
  *(uint8_t (*)[16])(local_28 + 9) = ZEXT816(0);
  local_28[0xb] = 0;
  local_28[0xc] = 7;
  pU64_1 = local_28 + 0xd;
  local_48 = ZEXT816(0);
  local_38 = 0;
  local_30 = 7;
  local_68 = "Unknown exception";
  if ((char *)local_28[1] != (char *)0x0) {
    local_68 = (char *)local_28[1];
  }
  local_60 = strlen(local_68);
  func_0x1800893e0(pU64_1,&local_68,param_3,local_48);
  pU64_1 = local_28;
  if (7 < local_30) {
    uVal_2 = local_30 * 2 + 2;
    lVal_3 = local_48._0_8_;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(local_48._0_8_ + -8);
      if (0x1f < (uint64_t)((local_48._0_8_ + -8) - lVal_3)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = local_30 * 2 + 0x29;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  return pU64_1;
}

// Unwind@180089230
void Unwind_180089230(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x40);
  func_0x1800565c0(*(uint64_t *)(param_2 + 0x38));
  func_0x1800565c0(*(uint64_t *)(param_2 + 0x30));
  return;
}

// Unwind@180089270
void Unwind_180089270(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x60);
  *pU64_1 = std::exception::vftable;
  func_0x18067b490(pU64_1 + 1);
  return;
}

// func_0x1800892a0
void func_0x1800892a0(uint64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  *param_1 = &PTR_LAB_1806b0150;
  uVal_1 = param_1[0x10];
  if (0xf < uVal_1) {
    lVal_2 = param_1[0xd];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1800893da;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0xf;
  *(uint8_t *)(param_1 + 0xd) = 0;
  uVal_1 = param_1[0xc];
  if (7 < uVal_1) {
    lVal_2 = param_1[9];
    uVal_3 = uVal_1 * 2 + 2;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1800893da;
      uVal_3 = uVal_1 * 2 + 0x29;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  *(uint16_t *)(param_1 + 9) = 0;
  uVal_1 = param_1[8];
  if (7 < uVal_1) {
    lVal_2 = param_1[5];
    uVal_3 = uVal_1 * 2 + 2;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_1800893da:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 * 2 + 0x29;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[7] = 0;
  param_1[8] = 7;
  *(uint16_t *)(param_1 + 5) = 0;
  *param_1 = std::exception::vftable;
  func_0x18067b490(param_1 + 1);
  return;
}

// func_0x1800893e0
uint8_t (*func_0x1800893e0(uint8_t (*param_1)[16],uint64_t *param_2,uint64_t *param_3,uint64_t *param_4))[16]
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint32_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t (*pArr16_6)[16];
  uint8_t (*pArr16_7)[16];
  uint64_t uVal_8;
  uint64_t *local_a8;
  uint64_t local_a0;
  uint64_t *local_98;
  uint64_t local_90;
  uint8_t (*local_88 [2])[16];
  uint64_t local_78;
  uint64_t local_70;
  uint8_t (*local_68 [2])[16];
  uint64_t local_58;
  uint64_t local_50;
  uint8_t local_41;
  uint8_t (*local_40)[16];
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  local_40 = param_1;
  uVal_3 = func_0x180678230();
  local_a0 = param_3[2];
  if (7 < (uint64_t)param_3[3]) {
    param_3 = (uint64_t *)*param_3;
  }
  local_a8 = param_3;
  func_0x180089ba0(local_88,uVal_3,&local_a8,local_68);
  local_90 = param_4[2];
  if (7 < (uint64_t)param_4[3]) {
    param_4 = (uint64_t *)*param_4;
  }
  local_98 = param_4;
  func_0x180089ba0(local_68,uVal_3,&local_98,&local_41);
  uVal_5 = param_2[1];
  uVal_8 = local_58 + uVal_5 + local_78 + (uint64_t)(local_58 != 0) * 4 + 4;
  lVal_1 = *(int64_t *)local_40[1];
  uVal_4 = *(uint64_t *)(local_40[1] + 8);
  if (uVal_4 < uVal_8) {
    func_0x180082810(local_40,uVal_8 - lVal_1);
    *(int64_t *)local_40[1] = lVal_1;
    uVal_5 = param_2[1];
    uVal_4 = *(uint64_t *)(local_40[1] + 8);
  }
  uVal_2 = *param_2;
  if (uVal_4 - lVal_1 < uVal_5) {
    func_0x180082950(local_40,uVal_5,uVal_5,uVal_2,uVal_5);
  }
  else {
    *(uint64_t *)local_40[1] = lVal_1 + uVal_5;
    pArr16_6 = local_40;
    if (0xf < uVal_4) {
      pArr16_6 = *(uint8_t (**)[16])*local_40;
    }
    func_0x1806aa960(*pArr16_6 + lVal_1,uVal_2);
    (*pArr16_6)[lVal_1 + uVal_5] = 0;
  }
  lVal_1 = *(int64_t *)local_40[1];
  uVal_5 = *(uint64_t *)(local_40[1] + 8);
  if (uVal_5 - lVal_1 < 3) {
    func_0x180082950(local_40,3,uVal_5,&DAT_180760e5e,3);
  }
  else {
    *(int64_t *)local_40[1] = lVal_1 + 3;
    pArr16_6 = local_40;
    if (0xf < uVal_5) {
      pArr16_6 = *(uint8_t (**)[16])*local_40;
    }
    *(uint32_t *)(*pArr16_6 + lVal_1) = 0x22203a;
  }
  pArr16_6 = (uint8_t (*)[16])local_88;
  if (0xf < local_70) {
    pArr16_6 = local_88[0];
  }
  lVal_1 = *(int64_t *)local_40[1];
  uVal_5 = *(uint64_t *)(local_40[1] + 8);
  if (uVal_5 - lVal_1 < local_78) {
    func_0x180082950(local_40,local_78,local_78,pArr16_6,local_78);
  }
  else {
    *(uint64_t *)local_40[1] = lVal_1 + local_78;
    pArr16_7 = local_40;
    if (0xf < uVal_5) {
      pArr16_7 = *(uint8_t (**)[16])*local_40;
    }
    func_0x1806aa960(*pArr16_7 + lVal_1,pArr16_6);
    (*pArr16_7)[lVal_1 + local_78] = 0;
  }
  if (local_58 != 0) {
    lVal_1 = *(int64_t *)local_40[1];
    uVal_5 = *(uint64_t *)(local_40[1] + 8);
    if (uVal_5 - lVal_1 < 4) {
      func_0x180082950(local_40,4,uVal_5,&DAT_180760e62,4);
    }
    else {
      *(int64_t *)local_40[1] = lVal_1 + 4;
      pArr16_6 = local_40;
      if (0xf < uVal_5) {
        pArr16_6 = *(uint8_t (**)[16])*local_40;
      }
      *(uint32_t *)(*pArr16_6 + lVal_1) = 0x22202c22;
      (*pArr16_6)[lVal_1 + 4] = 0;
    }
    pArr16_6 = (uint8_t (*)[16])local_68;
    if (0xf < local_50) {
      pArr16_6 = local_68[0];
    }
    lVal_1 = *(int64_t *)local_40[1];
    uVal_5 = *(uint64_t *)(local_40[1] + 8);
    if (uVal_5 - lVal_1 < local_58) {
      func_0x180082950(local_40,local_58,local_58,pArr16_6,local_58);
    }
    else {
      *(uint64_t *)local_40[1] = lVal_1 + local_58;
      pArr16_7 = local_40;
      if (0xf < uVal_5) {
        pArr16_7 = *(uint8_t (**)[16])*local_40;
      }
      func_0x1806aa960(*pArr16_7 + lVal_1,pArr16_6);
      (*pArr16_7)[lVal_1 + local_58] = 0;
    }
  }
  uVal_5 = *(uint64_t *)local_40[1];
  uVal_4 = *(uint64_t *)(local_40[1] + 8);
  if (uVal_5 < uVal_4) {
    *(uint64_t *)local_40[1] = uVal_5 + 1;
    pArr16_6 = local_40;
    if (0xf < uVal_4) {
      pArr16_6 = *(uint8_t (**)[16])*local_40;
    }
    *(uint16_t *)(*pArr16_6 + uVal_5) = 0x22;
  }
  else {
    func_0x18008c590(local_40,1,uVal_4,0x22);
  }
  if (0xf < local_50) {
    uVal_5 = local_50 + 1;
    pArr16_6 = local_68[0];
    if (0xfff < uVal_5) {
      pArr16_6 = *(uint8_t (**)[16])((int64_t)local_68[0][-1] + 8);
      if (0x1f < (uint64_t)((int64_t)local_68[0] + (-8 - (int64_t)pArr16_6))) goto LAB_18008976b;
      uVal_5 = local_50 + 0x28;
    }
    thunk_FUN_180695dd0(pArr16_6,uVal_5);
  }
  pArr16_6 = local_40;
  if (0xf < local_70) {
    uVal_5 = local_70 + 1;
    pArr16_7 = local_88[0];
    if (0xfff < uVal_5) {
      pArr16_7 = *(uint8_t (**)[16])((int64_t)local_88[0][-1] + 8);
      if (0x1f < (uint64_t)((int64_t)local_88[0] + (-8 - (int64_t)pArr16_7))) {
LAB_18008976b:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = local_70 + 0x28;
    }
    thunk_FUN_180695dd0(pArr16_7,uVal_5);
  }
  return pArr16_6;
}

// Unwind@180089770
void Unwind_180089770(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1800897a0
void Unwind_1800897a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800897d0
void Unwind_1800897d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x98));
  return;
}

// func_0x180089820
uint64_t * func_0x180089820(uint64_t *param_1,uint32_t *param_2,uint8_t (*param_3)[16])
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t ****ptr4_U64_7;
  uint64_t uVal_8;
  uint8_t local_88 [16];
  uint8_t local_78 [16];
  uint64_t ****local_68;
  uint8_t local_60;
  uint64_t ****local_58 [3];
  uint64_t local_40;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  
  local_88 = ZEXT816(0);
  local_78 = ZEXT816(0);
  uVal_6 = *(uint64_t *)param_3[1];
  if (0xf < *(uint64_t *)(param_3[1] + 8)) {
    param_3 = *(uint8_t (**)[16])*param_3;
  }
  if (-1 < (int64_t)uVal_6) {
    if (uVal_6 < 0x10) {
      local_78._8_8_ = 0xf;
      local_78._0_8_ = uVal_6;
      local_88 = *param_3;
    }
    else {
      uVal_4 = uVal_6 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_4) {
        uVal_8 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        uVal_4 = func_0x180672de0(uVal_8 + 1);
      }
      else {
        lVal_5 = func_0x180672de0(uVal_8 + 0x28);
        uVal_4 = lVal_5 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_4 - 8) = lVal_5;
      }
      local_88._0_8_ = uVal_4;
      local_78._8_8_ = uVal_8;
      local_78._0_8_ = uVal_6;
      func_0x1806aa960(uVal_4,param_3,uVal_6 + 1);
    }
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    func_0x1800899a0(local_58,&local_38,local_88);
    local_68 = local_58;
    if (0xf < local_40) {
      local_68 = local_58[0];
    }
    *param_1 = std::exception::vftable;
    *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
    local_60 = 1;
    func_0x18067b3f0(&local_68,param_1 + 1);
    *param_1 = std::runtime_error::vftable;
    if (0xf < local_40) {
      uVal_6 = local_40 + 1;
      ptr4_U64_7 = local_58[0];
      if (0xfff < uVal_6) {
        ptr4_U64_7 = (uint64_t ****)local_58[0][-1];
        if (0x1f < (uint64_t)((int64_t)local_58[0] + (-8 - (int64_t)ptr4_U64_7)))
        goto LAB_18008999a;
        uVal_6 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_7,uVal_6);
    }
    *param_1 = std::_System_error::vftable;
    uVal_1 = param_2[1];
    uVal_2 = param_2[2];
    uVal_3 = param_2[3];
    *(uint32_t *)(param_1 + 3) = *param_2;
    *(uint32_t *)((int64_t)param_1 + 0x1c) = uVal_1;
    *(uint32_t *)(param_1 + 4) = uVal_2;
    *(uint32_t *)((int64_t)param_1 + 0x24) = uVal_3;
    return param_1;
  }
  func_0x18007ba70();
LAB_18008999a:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x1800899a0
uint32_t * func_0x1800899a0(uint32_t *param_1,uint32_t *param_2,uint64_t *param_3)
{
  int64_t lVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint64_t uVal_9;
  uint64_t *****ptr5_U64_10;
  uint64_t *pU64_11;
  uint64_t *****local_58 [2];
  uint64_t local_48;
  uint64_t local_40;
  uint64_t *local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVal_1 = param_3[2];
  local_38 = param_3;
  if (lVal_1 != 0) {
    uVal_9 = param_3[3];
    if (uVal_9 - lVal_1 < 2) {
      func_0x180082950(param_3,2,uVal_9,&DAT_18076106c,2);
    }
    else {
      param_3[2] = lVal_1 + 2;
      if (0xf < uVal_9) {
        param_3 = (uint64_t *)*param_3;
      }
      *(uint16_t *)((int64_t)param_3 + lVal_1) = 0x203a;
      *(uint8_t *)((int64_t)param_3 + lVal_1 + 2) = 0;
    }
  }
  (**(func_ptr_t *)(**(int64_t **)(param_2 + 2) + 0x10))(*(int64_t **)(param_2 + 2),local_58,*param_2);
  ptr5_U64_10 = local_58;
  if (0xf < local_40) {
    ptr5_U64_10 = local_58[0];
  }
  lVal_1 = local_38[2];
  if ((uint64_t)(local_38[3] - lVal_1) < local_48) {
    func_0x180082950(local_38,local_48,local_48,ptr5_U64_10,local_48);
  }
  else {
    local_38[2] = lVal_1 + local_48;
    pU64_11 = local_38;
    if (0xf < (uint64_t)local_38[3]) {
      pU64_11 = (uint64_t *)*local_38;
    }
    func_0x1806aa960(lVal_1 + (int64_t)pU64_11,ptr5_U64_10);
    *(uint8_t *)((int64_t)pU64_11 + lVal_1 + local_48) = 0;
  }
  if (0xf < local_40) {
    uVal_9 = local_40 + 1;
    ptr5_U64_10 = local_58[0];
    if (0xfff < uVal_9) {
      ptr5_U64_10 = (uint64_t *****)local_58[0][-1];
      if (0x1f < (uint64_t)((int64_t)local_58[0] + (-8 - (int64_t)ptr5_U64_10))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_9 = local_40 + 0x28;
    }
    thunk_FUN_180695dd0(ptr5_U64_10,uVal_9);
  }
  uVal_2 = *(uint32_t *)local_38;
  uVal_3 = *(uint32_t *)((int64_t)local_38 + 4);
  uVal_4 = *(uint32_t *)(local_38 + 1);
  uVal_5 = *(uint32_t *)((int64_t)local_38 + 0xc);
  uVal_6 = *(uint32_t *)((int64_t)local_38 + 0x14);
  uVal_7 = *(uint32_t *)(local_38 + 3);
  uVal_8 = *(uint32_t *)((int64_t)local_38 + 0x1c);
  param_1[4] = *(uint32_t *)(local_38 + 2);
  param_1[5] = uVal_6;
  param_1[6] = uVal_7;
  param_1[7] = uVal_8;
  *param_1 = uVal_2;
  param_1[1] = uVal_3;
  param_1[2] = uVal_4;
  param_1[3] = uVal_5;
  return param_1;
}

// Unwind@180089b00
void Unwind_180089b00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@180089b30
void Unwind_180089b30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x50));
  return;
}

// func_0x180089b60
uint64_t * func_0x180089b60(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = std::exception::vftable;
  func_0x18067b490(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x28);
  }
  return param_1;
}

// func_0x180089ba0
uint8_t (*func_0x180089ba0(uint8_t (*param_1)[16],uint32_t param_2,uint64_t *param_3))[16]
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint uVal_8;
  
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  uVal_4 = param_3[1];
  if (uVal_4 == 0) {
    return param_1;
  }
  if (uVal_4 >> 0x1f == 0) {
    uVal_8 = 0;
    uVal_4 = func_0x1806783d0(param_2,*param_3,uVal_4,0,0);
    if (uVal_4 >> 0x20 == 0) {
      uVal_7 = (uint64_t)(int)uVal_4;
      uVal_1 = *(uint64_t *)param_1[1];
      uVal_6 = uVal_7 - uVal_1;
      pArr16_5 = param_1;
      if (uVal_7 < uVal_1 || uVal_6 == 0) {
        *(uint64_t *)param_1[1] = uVal_7;
        if (0xf < *(uint64_t *)(param_1[1] + 8)) {
          pArr16_5 = *(uint8_t (**)[16])*param_1;
        }
LAB_180089cbf:
        (*pArr16_5)[uVal_7] = 0;
        uVal_1 = *(uint64_t *)(param_1[1] + 8);
      }
      else {
        uVal_2 = *(uint64_t *)(param_1[1] + 8);
        if (uVal_6 <= uVal_2 - uVal_1) {
          *(uint64_t *)param_1[1] = uVal_7;
          if (0xf < uVal_2) {
            pArr16_5 = *(uint8_t (**)[16])*param_1;
          }
          func_0x1806ab010(*pArr16_5 + uVal_1,0);
          goto LAB_180089cbf;
        }
        func_0x180089e90(param_1,uVal_6,uVal_6,uVal_6,uVal_8 & 0xffffff00);
        uVal_1 = *(uint64_t *)(param_1[1] + 8);
      }
      pArr16_5 = param_1;
      if (0xf < uVal_1) {
        pArr16_5 = *(uint8_t (**)[16])*param_1;
      }
      uVal_4 = func_0x1806783d0(param_2,*param_3,*(uint32_t *)(param_3 + 1),pArr16_5,(int)uVal_4);
      uVal_4 = uVal_4 >> 0x20;
      if (uVal_4 == 0) {
        return param_1;
      }
      goto LAB_180089ce6;
    }
  }
  else {
    func_0x180089d20(0x16);
  }
  uVal_4 = func_0x180089e40();
LAB_180089ce6:
  func_0x180089e40(uVal_4 & 0xffffffff);
  fnPtr_3 = (func_ptr_t )swi(3);
  pArr16_5 = (uint8_t (*)[16])(*fnPtr_3)();
  return pArr16_5;
}

// Unwind@180089cf0
void Unwind_180089cf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x30));
  return;
}

// func_0x180089d20
void func_0x180089d20(uint32_t param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_68 [32];
  uint32_t local_48 [2];
  uint8_t **local_40;
  uint8_t local_38 [40];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  local_40 = &PTR_vftable_1806b0120;
  local_48[0] = param_1;
  func_0x180089d70(local_38,local_48);
  func_0x18067a120(local_38,&DAT_180768818);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180089d70
uint64_t * func_0x180089d70(uint64_t *param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t ***ptr3_U64_4;
  uint64_t ***local_58;
  uint8_t local_50;
  uint64_t ***local_48 [3];
  uint64_t local_30;
  
  uVal_1 = *param_2;
  pLong_2 = (int64_t *)param_2[1];
  (**(func_ptr_t *)(*pLong_2 + 0x10))(pLong_2,local_48,*(uint32_t *)param_2);
  local_58 = local_48;
  if (0xf < local_30) {
    local_58 = local_48[0];
  }
  *param_1 = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  local_50 = 1;
  func_0x18067b3f0(&local_58,param_1 + 1);
  *param_1 = std::runtime_error::vftable;
  if (0xf < local_30) {
    uVal_3 = local_30 + 1;
    ptr3_U64_4 = local_48[0];
    if (0xfff < uVal_3) {
      ptr3_U64_4 = (uint64_t ***)local_48[0][-1];
      if (0x1f < (uint64_t)((int64_t)local_48[0] + (-8 - (int64_t)ptr3_U64_4))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = local_30 + 0x28;
    }
    thunk_FUN_180695dd0(ptr3_U64_4,uVal_3);
  }
  param_1[3] = uVal_1;
  param_1[4] = pLong_2;
  *param_1 = std::system_error::vftable;
  return param_1;
}

// func_0x180089e40
void func_0x180089e40(uint32_t param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_68 [32];
  uint32_t local_48 [2];
  uint8_t **local_40;
  uint8_t local_38 [40];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  local_40 = &PTR_PTR_FUN_1806b00d8;
  local_48[0] = param_1;
  func_0x180089d70(local_38,local_48);
  func_0x18067a120(local_38,&DAT_180768818);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180089e90
uint64_t * func_0x180089e90(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4, uint8_t param_5)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  uVal_3 = param_1[2];
  uVal_4 = 0x7fffffffffffffff;
  if ((uVal_3 ^ 0x7fffffffffffffff) < param_2) {
    func_0x18007ba70();
    goto LAB_180089ff9;
  }
  param_2 = param_2 + uVal_3;
  uVal_1 = param_1[3];
  if (((int64_t)param_2 < 0) || ((uVal_1 >> 1 ^ 0x7fffffffffffffff) < uVal_1)) {
LAB_180089ee4:
    lVal_2 = func_0x180672de0(uVal_4 + 0x28);
    uVal_5 = lVal_2 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_5 - 8) = lVal_2;
  }
  else {
    uVal_4 = (uVal_1 >> 1) + uVal_1;
    if (uVal_4 < (param_2 | 0xf)) {
      uVal_4 = param_2 | 0xf;
    }
    if (uVal_4 == 0xffffffffffffffff) {
      uVal_5 = 0;
      uVal_4 = 0xffffffffffffffff;
    }
    else {
      if (0xfff < uVal_4 + 1) {
        if (uVal_4 + 1 < 0xffffffffffffffd9) goto LAB_180089ee4;
        func_0x18007ba90();
      }
      uVal_5 = func_0x180672de0();
    }
  }
  param_1[2] = param_2;
  param_1[3] = uVal_4;
  if (uVal_1 < 0x10) {
    func_0x1806aa960(uVal_5,param_1,uVal_3);
    func_0x1806ab010(uVal_3 + uVal_5,param_5,param_4);
    *(uint8_t *)(param_4 + uVal_3 + uVal_5) = 0;
  }
  else {
    uVal_4 = *param_1;
    func_0x1806aa960(uVal_5,uVal_4,uVal_3);
    func_0x1806ab010(uVal_3 + uVal_5,param_5,param_4);
    *(uint8_t *)(param_4 + uVal_3 + uVal_5) = 0;
    uVal_3 = uVal_1 + 1;
    uVal_6 = uVal_4;
    if (0xfff < uVal_3) {
      uVal_6 = *(uint64_t *)(uVal_4 - 8);
      if (0x1f < (uVal_4 - 8) - uVal_6) {
LAB_180089ff9:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(uVal_6,uVal_3);
  }
  *param_1 = uVal_5;
  return param_1;
}

// func_0x18008a030
int * func_0x18008a030(int64_t param_1,int *param_2,uint64_t param_3)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  int *pInt_3;
  int iVal_4;
  int64_t lVal_5;
  uint8_t auStack_58 [40];
  uint8_t local_30 [16];
  uint local_20;
  int local_1c;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  if (((uint)param_3 & ~*(uint *)(param_1 + 0x1c)) == 0) {
    param_2[2] = 0;
    local_20 = *(uint *)(param_1 + 0x10);
    iVal_2 = 0x16d;
    if ((local_20 & 1) == 0) {
      iVal_2 = 0x1ff;
    }
    param_2[1] = iVal_2;
    if ((local_20 & 0x400) != 0) {
      local_1c = *(int *)(param_1 + 0x14);
joined_r0x00018008a129:
      if (local_1c == -0x5ffffff4) {
        iVal_4 = 4;
        goto LAB_18008a148;
      }
      if (local_1c == -0x5ffffffd) {
        iVal_4 = 10;
        goto LAB_18008a148;
      }
    }
  }
  else {
    if (*(uint64_t *)(param_1 + 0x38) < 8) {
      lVal_5 = param_1 + 0x20;
    }
    else {
      lVal_5 = *(int64_t *)(param_1 + 0x20);
    }
    iVal_2 = func_0x180677ed0(lVal_5,local_30,param_3,
                          -(uint)((*(uint *)(param_1 + 0x1c) & 2) == 0) | *(uint *)(param_1 + 0x10))
    ;
    param_2[2] = iVal_2;
    if (iVal_2 != 0) {
      param_2[1] = 0xffff;
      iVal_4 = 1;
      if (iVal_2 < 0x7b) {
        if ((iVal_2 - 2U < 0x3f) &&
           ((0x4008000000000003U >> ((uint64_t)(iVal_2 - 2U) & 0x3f) & 1) != 0)) goto LAB_18008a148;
      }
      else if (((iVal_2 == 0x7b) || (iVal_2 == 0xa1)) || (iVal_2 == 0x10b)) goto LAB_18008a148;
      iVal_4 = 0;
      goto LAB_18008a148;
    }
    iVal_2 = 0x16d;
    if ((local_20 & 1) == 0) {
      iVal_2 = 0x1ff;
    }
    param_2[1] = iVal_2;
    if ((local_20 & 0x400) != 0) goto joined_r0x00018008a129;
  }
  iVal_4 = 3 - (uint)((local_20 & 0x10) == 0);
LAB_18008a148:
  *param_2 = iVal_4;
  if (DAT_18083cf40 != (local_10 ^ (uint64_t)auStack_58)) {
    func_0x180673080(local_10 ^ (uint64_t)auStack_58);
    fnPtr_1 = (func_ptr_t )swi(3);
    pInt_3 = (int *)(*fnPtr_1)();
    return pInt_3;
  }
  return param_2;
}

// func_0x18008a1a0
uint64_t * func_0x18008a1a0(uint64_t *param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  uVal_6 = param_1[2];
  if (param_2 <= 0x7ffffffffffffffe - uVal_6) {
    param_2 = param_2 + uVal_6;
    uVal_3 = param_2 | 7;
    if (uVal_3 < 0x7fffffffffffffff) {
      uVal_1 = param_1[3];
      if (uVal_1 <= 0x7ffffffffffffffe - (uVal_1 >> 1)) {
        uVal_5 = (uVal_1 >> 1) + uVal_1;
        if (uVal_5 < uVal_3) {
          uVal_5 = uVal_3;
        }
        uVal_3 = uVal_5 + 1;
        if (-1 < (int64_t)uVal_3) {
          if (uVal_3 == 0) {
            uVal_3 = 0;
            param_1[2] = param_2;
            param_1[3] = uVal_5;
          }
          else if (uVal_3 < 0x800) {
            uVal_3 = func_0x180672de0(uVal_3 * 2);
            param_1[2] = param_2;
            param_1[3] = uVal_5;
          }
          else {
            if (0x7fffffffffffffec < uVal_3) goto LAB_18008a2f5;
            lVal_2 = func_0x180672de0(uVal_3 * 2 + 0x27);
            uVal_3 = lVal_2 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_3 - 8) = lVal_2;
            param_1[2] = param_2;
            param_1[3] = uVal_5;
          }
          if (uVal_1 < 8) {
            func_0x1806aa960(uVal_3,param_1,uVal_6 * 2 + 2);
          }
          else {
            uVal_5 = *param_1;
            func_0x1806aa960(uVal_3,uVal_5,uVal_6 * 2 + 2);
            uVal_6 = uVal_1 * 2 + 2;
            uVal_4 = uVal_5;
            if (0xfff < uVal_6) {
              uVal_4 = *(uint64_t *)(uVal_5 - 8);
              if (0x1f < (uVal_5 - 8) - uVal_4) goto LAB_18008a2ff;
              uVal_6 = uVal_1 * 2 + 0x29;
            }
            thunk_FUN_180695dd0(uVal_4,uVal_6);
          }
          *param_1 = uVal_3;
          return param_1;
        }
      }
    }
LAB_18008a2f5:
    func_0x18007ba90();
  }
  func_0x18007ba70();
LAB_18008a2ff:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18008a340
void func_0x18008a340(char *param_1,uint32_t *param_2,uint64_t param_3)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  uint8_t local_f0 [136];
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint8_t local_58 [16];
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = ZEXT816(0);
  uVal_2 = strlen(param_1);
  if ((int64_t)uVal_2 < 0) {
    uVal_2 = func_0x18007ba70();
  }
  if (uVal_2 < 0x10) {
    pU64_5 = local_58;
    uVal_6 = 0xf;
  }
  else {
    uVal_3 = uVal_2 | 0xf;
    uVal_6 = 0x16;
    if (0x16 < uVal_3) {
      uVal_6 = uVal_3;
    }
    if (uVal_3 < 0xfff) {
      pU64_5 = (uint8_t *)func_0x180672de0(uVal_6 + 1);
    }
    else {
      lVal_4 = func_0x180672de0(uVal_6 + 0x28);
      pU64_5 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_5 + -8) = lVal_4;
    }
    local_58._0_8_ = pU64_5;
  }
  local_48 = uVal_2;
  local_40 = uVal_6;
  func_0x1806aa960(pU64_5,param_1,uVal_2);
  pU64_5[uVal_2] = 0;
  func_0x180089120(local_f0,local_58,param_3,&local_68);
  func_0x18067a120(local_f0,&DAT_1807687e8);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18008a420
void Unwind_18008a420(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_2 + 0xd8);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0xc0);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  return;
}

// func_0x18008a490
uint8_t (*func_0x18008a490(uint8_t (*param_1)[16],uint32_t param_2,uint64_t *param_3))[16]
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint uVal_8;
  
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  uVal_4 = param_3[1];
  if (uVal_4 == 0) {
    return param_1;
  }
  if (uVal_4 >> 0x1f == 0) {
    uVal_8 = 0;
    uVal_4 = func_0x1806782b0(param_2,*param_3,uVal_4,0,0);
    if (uVal_4 >> 0x20 == 0) {
      uVal_7 = (uint64_t)(int)uVal_4;
      uVal_1 = *(uint64_t *)param_1[1];
      uVal_6 = uVal_7 - uVal_1;
      pArr16_5 = param_1;
      if (uVal_7 < uVal_1 || uVal_6 == 0) {
        *(uint64_t *)param_1[1] = uVal_7;
        if (0xf < *(uint64_t *)(param_1[1] + 8)) {
          pArr16_5 = *(uint8_t (**)[16])*param_1;
        }
LAB_18008a5af:
        (*pArr16_5)[uVal_7] = 0;
        uVal_1 = *(uint64_t *)(param_1[1] + 8);
      }
      else {
        uVal_2 = *(uint64_t *)(param_1[1] + 8);
        if (uVal_6 <= uVal_2 - uVal_1) {
          *(uint64_t *)param_1[1] = uVal_7;
          if (0xf < uVal_2) {
            pArr16_5 = *(uint8_t (**)[16])*param_1;
          }
          func_0x1806ab010(*pArr16_5 + uVal_1,0);
          goto LAB_18008a5af;
        }
        func_0x180089e90(param_1,uVal_6,uVal_6,uVal_6,uVal_8 & 0xffffff00);
        uVal_1 = *(uint64_t *)(param_1[1] + 8);
      }
      pArr16_5 = param_1;
      if (0xf < uVal_1) {
        pArr16_5 = *(uint8_t (**)[16])*param_1;
      }
      uVal_4 = func_0x1806782b0(param_2,*param_3,*(uint32_t *)(param_3 + 1),pArr16_5,(int)uVal_4);
      uVal_4 = uVal_4 >> 0x20;
      if (uVal_4 == 0) {
        return param_1;
      }
      goto LAB_18008a5d6;
    }
  }
  else {
    func_0x180089d20(0x16);
  }
  uVal_4 = func_0x180089e40();
LAB_18008a5d6:
  func_0x180089e40(uVal_4 & 0xffffffff);
  fnPtr_3 = (func_ptr_t )swi(3);
  pArr16_5 = (uint8_t (*)[16])(*fnPtr_3)();
  return pArr16_5;
}

// Unwind@18008a5e0
void Unwind_18008a5e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x30));
  return;
}

// func_0x18008a760
void func_0x18008a760(int64_t param_1)
{
  int *pInt_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t *pLong_7;
  
  func_0x18008ab40(param_1 + 0x2a0);
  func_0x18008ad20(param_1 + 0x260);
  lVal_6 = *(int64_t *)(param_1 + 0x210);
  if (lVal_6 != 0) {
    uVal_5 = *(int64_t *)(param_1 + 0x220) - lVal_6;
    lVal_4 = lVal_6;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_6 + -8);
      if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) goto LAB_18008a9b6;
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
    *(uint8_t (*)[16])(param_1 + 0x210) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x220) = 0;
  }
  lVal_6 = *(int64_t *)(param_1 + 0x1e0);
  if (lVal_6 != 0) {
    lVal_4 = *(int64_t *)(param_1 + 0x1e8);
    if (lVal_6 != lVal_4) {
      do {
        func_0x18008ae20(lVal_6);
        lVal_6 = lVal_6 + 0x90;
      } while (lVal_6 != lVal_4);
      lVal_6 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 0x1e0);
    }
    uVal_5 = *(int64_t *)(param_1 + 0x1f0) - lVal_6;
    lVal_4 = lVal_6;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_6 + -8);
      if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) goto LAB_18008a9b6;
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
    *(uint8_t (*)[16])(param_1 + 0x1e0) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x1f0) = 0;
  }
  uVal_5 = *(uint64_t *)(param_1 + 0x148);
  if (0xf < uVal_5) {
    lVal_6 = *(int64_t *)(param_1 + 0x130);
    uVal_3 = uVal_5 + 1;
    lVal_4 = lVal_6;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_6 + -8);
      if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) goto LAB_18008a9b6;
      uVal_3 = uVal_5 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x140) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0xf;
  *(uint8_t *)(param_1 + 0x130) = 0;
  uVal_5 = *(uint64_t *)(param_1 + 0x128);
  if (0xf < uVal_5) {
    lVal_6 = *(int64_t *)(param_1 + 0x110);
    uVal_3 = uVal_5 + 1;
    lVal_4 = lVal_6;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_6 + -8);
      if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) goto LAB_18008a9b6;
      uVal_3 = uVal_5 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0xf;
  *(uint8_t *)(param_1 + 0x110) = 0;
  pLong_7 = *(int64_t **)(param_1 + 0xf0);
  if (pLong_7 != (int64_t *)0x0) {
    pLong_2 = *(int64_t **)(param_1 + 0xf8);
    if (pLong_7 == pLong_2) {
      uVal_5 = *(int64_t *)(param_1 + 0x100) - (int64_t)pLong_7;
    }
    else {
      do {
        uVal_5 = pLong_7[3];
        if (0xf < uVal_5) {
          lVal_6 = *pLong_7;
          uVal_3 = uVal_5 + 1;
          lVal_4 = lVal_6;
          if (0xfff < uVal_3) {
            lVal_4 = *(int64_t *)(lVal_6 + -8);
            if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) goto LAB_18008a9b6;
            uVal_3 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_3);
        }
        pLong_7[2] = 0;
        pLong_7[3] = 0xf;
        *(uint8_t *)pLong_7 = 0;
        pLong_7 = pLong_7 + 4;
      } while (pLong_7 != pLong_2);
      pLong_7 = *(int64_t **)*(uint8_t (*)[16])(param_1 + 0xf0);
      uVal_5 = *(int64_t *)(param_1 + 0x100) - (int64_t)pLong_7;
    }
    if (0xfff < uVal_5) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_7 + (-8 - (int64_t)(int64_t *)pLong_7[-1])))
      goto LAB_18008a9b6;
      uVal_5 = uVal_5 + 0x27;
      pLong_7 = (int64_t *)pLong_7[-1];
    }
    thunk_FUN_180695dd0(pLong_7,uVal_5);
    *(uint8_t (*)[16])(param_1 + 0xf0) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x100) = 0;
  }
  uVal_5 = *(uint64_t *)(param_1 + 0xe8);
  if (0xf < uVal_5) {
    lVal_6 = *(int64_t *)(param_1 + 0xd0);
    uVal_3 = uVal_5 + 1;
    lVal_4 = lVal_6;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_6 + -8);
      if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) goto LAB_18008a9b6;
      uVal_3 = uVal_5 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 0xe8) = 0xf;
  *(uint8_t *)(param_1 + 0xd0) = 0;
  uVal_5 = *(uint64_t *)(param_1 + 0x78);
  if (0xf < uVal_5) {
    lVal_6 = *(int64_t *)(param_1 + 0x60);
    uVal_3 = uVal_5 + 1;
    lVal_4 = lVal_6;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_6 + -8);
      if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) goto LAB_18008a9b6;
      uVal_3 = uVal_5 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0xf;
  *(uint8_t *)(param_1 + 0x60) = 0;
  uVal_5 = *(uint64_t *)(param_1 + 0x40);
  if (0xf < uVal_5) {
    lVal_6 = *(int64_t *)(param_1 + 0x28);
    uVal_3 = uVal_5 + 1;
    lVal_4 = lVal_6;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_6 + -8);
      if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) {
LAB_18008a9b6:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_5 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0xf;
  *(uint8_t *)(param_1 + 0x28) = 0;
  pLong_7 = *(int64_t **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00018008ab2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        return;
      }
    }
  }
  return;
}

// func_0x18008ab40
void func_0x18008ab40(uint8_t (*param_1)[16])
{
  uint8_t *pU64_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  
  pU64_1 = *(uint8_t **)param_1[7];
  if (&DAT_0000000f < pU64_1) {
    lVal_2 = *(int64_t *)(param_1[5] + 8);
    pU64_6 = pU64_1 + 1;
    lVal_5 = lVal_2;
    if ((uint8_t *)0xfff < pU64_6) {
      lVal_5 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)(lVal_2 + (-8 - lVal_5))) goto LAB_18008ad11;
      pU64_6 = pU64_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_5,pU64_6);
  }
  *(uint64_t *)(param_1[6] + 8) = 0;
  *(uint8_t **)param_1[7] = &DAT_0000000f;
  param_1[5][8] = 0;
  pU64_1 = *(uint8_t **)param_1[5];
  if (&DAT_0000000f < pU64_1) {
    lVal_2 = *(int64_t *)(param_1[3] + 8);
    pU64_6 = pU64_1 + 1;
    lVal_5 = lVal_2;
    if ((uint8_t *)0xfff < pU64_6) {
      lVal_5 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)(lVal_2 + (-8 - lVal_5))) goto LAB_18008ad11;
      pU64_6 = pU64_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_5,pU64_6);
  }
  *(uint64_t *)(param_1[4] + 8) = 0;
  *(uint8_t **)param_1[5] = &DAT_0000000f;
  param_1[3][8] = 0;
  pU64_1 = *(uint8_t **)param_1[3];
  if (&DAT_0000000f < pU64_1) {
    lVal_2 = *(int64_t *)(param_1[1] + 8);
    pU64_6 = pU64_1 + 1;
    lVal_5 = lVal_2;
    if ((uint8_t *)0xfff < pU64_6) {
      lVal_5 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)(lVal_2 + (-8 - lVal_5))) goto LAB_18008ad11;
      pU64_6 = pU64_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_5,pU64_6);
  }
  *(uint64_t *)(param_1[2] + 8) = 0;
  *(uint8_t **)param_1[3] = &DAT_0000000f;
  param_1[1][8] = 0;
  pLong_8 = *(int64_t **)*param_1;
  if (pLong_8 != (int64_t *)0x0) {
    pLong_3 = *(int64_t **)(*param_1 + 8);
    if (pLong_8 == pLong_3) {
      uVal_7 = *(int64_t *)param_1[1] - (int64_t)pLong_8;
    }
    else {
      do {
        uVal_7 = pLong_8[3];
        if (0xf < uVal_7) {
          lVal_2 = *pLong_8;
          uVal_4 = uVal_7 + 1;
          lVal_5 = lVal_2;
          if (0xfff < uVal_4) {
            lVal_5 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_5)) goto LAB_18008ad11;
            uVal_4 = uVal_7 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_5,uVal_4);
        }
        pLong_8[2] = 0;
        pLong_8[3] = 0xf;
        *(uint8_t *)pLong_8 = 0;
        pLong_8 = pLong_8 + 4;
      } while (pLong_8 != pLong_3);
      pLong_8 = *(int64_t **)*param_1;
      uVal_7 = *(int64_t *)param_1[1] - (int64_t)pLong_8;
    }
    if (0xfff < uVal_7) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_8 + (-8 - (int64_t)(int64_t *)pLong_8[-1]))) {
LAB_18008ad11:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
      pLong_8 = (int64_t *)pLong_8[-1];
    }
    thunk_FUN_180695dd0(pLong_8,uVal_7);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// func_0x18008ad20
void func_0x18008ad20(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  
  lVal_1 = *(int64_t *)(param_1 + 0x18);
  if (lVal_1 != 0) {
    uVal_6 = *(int64_t *)(param_1 + 0x28) - lVal_1;
    lVal_5 = lVal_1;
    if (0xfff < uVal_6) {
      lVal_5 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_5)) {
LAB_18008ae19:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_6 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_6);
    *(uint8_t (*)[16])(param_1 + 0x18) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x28) = 0;
  }
  pU64_2 = *(uint64_t **)(param_1 + 8);
  *(uint64_t *)pU64_2[1] = 0;
  pU64_2 = (uint64_t *)*pU64_2;
  do {
    if (pU64_2 == (uint64_t *)0x0) {
      thunk_FUN_180695dd0(*(uint64_t *)(param_1 + 8),0x38);
      return;
    }
    pU64_3 = (uint64_t *)*pU64_2;
    uVal_6 = pU64_2[5];
    if (0xf < uVal_6) {
      lVal_1 = pU64_2[2];
      uVal_4 = uVal_6 + 1;
      lVal_5 = lVal_1;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(lVal_1 + -8);
        if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_5)) goto LAB_18008ae19;
        uVal_4 = uVal_6 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    pU64_2[4] = 0;
    pU64_2[5] = 0xf;
    *(uint8_t *)(pU64_2 + 2) = 0;
    thunk_FUN_180695dd0(pU64_2,0x38);
    pU64_2 = pU64_3;
  } while( true );
}

// func_0x18008ae20
void func_0x18008ae20(int64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = param_1[0x11];
  if (0xf < uVal_1) {
    lVal_2 = param_1[0xe];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18008af26;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0xf;
  *(uint8_t *)(param_1 + 0xe) = 0;
  uVal_1 = param_1[0xd];
  if (0xf < uVal_1) {
    lVal_2 = param_1[10];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18008af26;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  *(uint8_t *)(param_1 + 10) = 0;
  uVal_1 = param_1[3];
  if (0xf < uVal_1) {
    lVal_2 = *param_1;
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_18008af26:
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

// func_0x18008af30
uint64_t * func_0x18008af30(uint64_t *param_1,uint64_t param_2,uint64_t *param_3)
{
  int *pInt_1;
  int64_t *pLong_2;
  uint64_t *pU64_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t uVal_13;
  
  uVal_11 = *param_1;
  uVal_13 = ((int64_t)(param_1[1] - uVal_11) >> 4) + 1;
  uVal_8 = (int64_t)(param_1[2] - uVal_11) >> 4;
  uVal_6 = (uVal_8 >> 1) + uVal_8;
  if (uVal_6 <= uVal_13) {
    uVal_6 = uVal_13;
  }
  if (0xfffffffffffffff - (uVal_8 >> 1) < uVal_8) {
    uVal_6 = 0xfffffffffffffff;
  }
  if (uVal_6 >> 0x3c != 0) {
LAB_18008b1b1:
    func_0x18007ba90();
    goto LAB_18008b1b6;
  }
  lVal_12 = uVal_6 * 0x10;
  if (uVal_6 == 0) {
    uVal_6 = 0;
  }
  else if (uVal_6 < 0x100) {
    uVal_6 = func_0x180672de0(lVal_12);
  }
  else {
    if (0xffffffffffffffd < uVal_6) goto LAB_18008b1b1;
    lVal_7 = func_0x180672de0(lVal_12 + 0x27);
    uVal_6 = lVal_7 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_6 - 8) = lVal_7;
  }
  lVal_7 = param_2 - uVal_11;
  pU64_3 = (uint64_t *)(uVal_6 + lVal_7);
  *(uint8_t (*)[16])(uVal_6 + lVal_7) = ZEXT816(0);
  if (param_3[1] != 0) {
    LOCK();
    pInt_1 = (int *)(param_3[1] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
  }
  *pU64_3 = *param_3;
  pU64_3[1] = param_3[1];
  uVal_8 = *param_1;
  uVal_11 = param_1[1];
  if (param_2 == uVal_11) {
    if (uVal_8 != param_2) {
      lVal_7 = 0;
      do {
        *(uint8_t (*)[16])(uVal_6 + lVal_7) = ZEXT816(0);
        *(uint64_t *)(uVal_6 + lVal_7) = *(uint64_t *)(uVal_8 + lVal_7);
        *(uint64_t *)(uVal_6 + 8 + lVal_7) = *(uint64_t *)(uVal_8 + 8 + lVal_7);
        *(uint8_t (*)[16])(uVal_8 + lVal_7) = ZEXT816(0);
        lVal_9 = uVal_8 + lVal_7;
        lVal_7 = lVal_7 + 0x10;
      } while (lVal_9 + 0x10U != param_2);
      goto LAB_18008b0ec;
    }
  }
  else {
    if (uVal_8 != param_2) {
      lVal_9 = 0;
      do {
        *(uint8_t (*)[16])(uVal_6 + lVal_9) = ZEXT816(0);
        *(uint64_t *)(uVal_6 + lVal_9) = *(uint64_t *)(uVal_8 + lVal_9);
        *(uint64_t *)(uVal_6 + 8 + lVal_9) = *(uint64_t *)(uVal_8 + 8 + lVal_9);
        *(uint8_t (*)[16])(uVal_8 + lVal_9) = ZEXT816(0);
        lVal_10 = uVal_8 + lVal_9;
        lVal_9 = lVal_9 + 0x10;
      } while (lVal_10 + 0x10U != param_2);
      uVal_11 = param_1[1];
    }
    if (param_2 != uVal_11) {
      lVal_9 = lVal_7 + uVal_6 + 0x10;
      lVal_10 = 0;
      do {
        *(uint8_t (*)[16])(lVal_9 + lVal_10) = ZEXT816(0);
        *(uint64_t *)(lVal_9 + lVal_10) = *(uint64_t *)(param_2 + lVal_10);
        *(uint64_t *)(lVal_7 + uVal_6 + 0x18 + lVal_10) = *(uint64_t *)(param_2 + 8 + lVal_10);
        *(uint8_t (*)[16])(param_2 + lVal_10) = ZEXT816(0);
        lVal_4 = param_2 + lVal_10;
        lVal_10 = lVal_10 + 0x10;
      } while (lVal_4 + 0x10U != uVal_11);
    }
LAB_18008b0ec:
    uVal_8 = *param_1;
  }
  if (uVal_8 != 0) {
    uVal_11 = param_1[1];
    if (uVal_8 == uVal_11) {
      uVal_11 = param_1[2] - uVal_8;
    }
    else {
      do {
        pLong_5 = *(int64_t **)(uVal_8 + 8);
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
        uVal_8 = uVal_8 + 0x10;
      } while (uVal_8 != uVal_11);
      uVal_8 = *param_1;
      uVal_11 = param_1[2] - uVal_8;
    }
    if (0xfff < uVal_11) {
      if (0x1f < (uVal_8 - 8) - *(uint64_t *)(uVal_8 - 8)) {
LAB_18008b1b6:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_11 = uVal_11 + 0x27;
      uVal_8 = *(uint64_t *)(uVal_8 - 8);
    }
    thunk_FUN_180695dd0(uVal_8,uVal_11);
  }
  *param_1 = uVal_6;
  param_1[1] = uVal_13 * 0x10 + uVal_6;
  param_1[2] = lVal_12 + uVal_6;
  return pU64_3;
}

// func_0x18008b1c0
void func_0x18008b1c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  char ch_1;
  int iVal_2;
  int64_t lVal_3;
  uint64_t *pU64_4;
  uint64_t uVal_5;
  
  uVal_5 = 0xfffffffffffffffe;
  *param_1 = &PTR_LAB_1806b0190;
  if ((param_1[0x10] == 0) || (*(uint64_t **)(int64_t *)param_1[3] != param_1 + 0xe)) {
    ch_1 = *(char *)((int64_t)param_1 + 0x7c);
  }
  else {
    iVal_2 = *(int *)(param_1 + 0x12);
    lVal_3 = param_1[0x11];
    *(int64_t *)param_1[3] = lVal_3;
    *(int64_t *)param_1[7] = lVal_3;
    *(int *)param_1[10] = iVal_2 - (int)lVal_3;
    ch_1 = *(char *)((int64_t)param_1 + 0x7c);
  }
  if (ch_1 == '\x01') {
    func_0x18008b2b0(param_1);
  }
  *param_1 = &PTR_LAB_1806b0210;
  lVal_3 = param_1[0xc];
  if (lVal_3 != 0) {
    if ((*(int64_t **)(lVal_3 + 8) != (int64_t *)0x0) &&
       (pU64_4 = (uint64_t *)(**(func_ptr_t *)(**(int64_t **)(lVal_3 + 8) + 0x10))(),
       pU64_4 != (uint64_t *)0x0)) {
      (**(func_ptr_t *)*pU64_4)(pU64_4,1,(func_ptr_t *)*pU64_4,param_4,uVal_5);
    }
    thunk_FUN_180695dd0(lVal_3,0x10);
    return;
  }
  return;
}

// Unwind@18008b280
void Unwind_18008b280(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18008b2b0
int64_t * func_0x18008b2b0(int64_t *param_1)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  uint8_t auStack_78 [32];
  int64_t *local_58;
  int64_t local_50;
  uint8_t local_48 [32];
  uint8_t local_28 [8];
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  if (param_1[0x10] == 0) {
    pLong_4 = (int64_t *)0x0;
    goto LAB_18008b3ba;
  }
  if (*(int64_t **)param_1[3] == param_1 + 0xe) {
    iVal_2 = *(int *)(param_1 + 0x12);
    pLong_4 = (int64_t *)param_1[0x11];
    *(int64_t **)param_1[3] = pLong_4;
    *(int64_t **)param_1[7] = pLong_4;
    *(int *)param_1[10] = iVal_2 - (int)pLong_4;
    lVal_5 = param_1[0xd];
  }
  else {
    lVal_5 = param_1[0xd];
  }
  pLong_6 = param_1;
  if ((lVal_5 != 0) && (*(char *)((int64_t)param_1 + 0x71) == '\x01')) {
    iVal_2 = (**(func_ptr_t *)(*param_1 + 0x18))(param_1,0xffffffff);
    if (iVal_2 == -1) {
LAB_18008b399:
      pLong_6 = (int64_t *)0x0;
    }
    else {
      local_58 = &local_50;
      iVal_2 = (**(func_ptr_t *)(*(int64_t *)param_1[0xd] + 0x40))
                        ((int64_t *)param_1[0xd],(int64_t)param_1 + 0x74,local_48,local_28);
      if (iVal_2 == 3) {
        *(uint8_t *)((int64_t)param_1 + 0x71) = 0;
      }
      else {
        if (iVal_2 != 1) {
          if (iVal_2 != 0) goto LAB_18008b399;
          *(uint8_t *)((int64_t)param_1 + 0x71) = 0;
        }
        lVal_5 = local_50 - (int64_t)local_48;
        if (((lVal_5 != 0) && (lVal_3 = func_0x1806837b8(local_48,1,lVal_5,param_1[0x10]), lVal_5 != lVal_3)
            ) || (*(char *)((int64_t)param_1 + 0x71) != '\0')) goto LAB_18008b399;
      }
    }
  }
  iVal_2 = func_0x18068a690(param_1[0x10]);
  pLong_4 = (int64_t *)0x0;
  if (iVal_2 == 0) {
    pLong_4 = pLong_6;
  }
LAB_18008b3ba:
  *(uint8_t *)((int64_t)param_1 + 0x7c) = 0;
  *(uint8_t *)((int64_t)param_1 + 0x71) = 0;
  param_1[3] = (int64_t)(param_1 + 1);
  param_1[4] = (int64_t)(param_1 + 2);
  param_1[7] = (int64_t)(param_1 + 5);
  param_1[8] = (int64_t)(param_1 + 6);
  param_1[10] = (int64_t)(param_1 + 9);
  param_1[0xb] = (int64_t)param_1 + 0x4c;
  param_1[9] = 0;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  param_1[0x10] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x74) = DAT_18083eb3c;
  param_1[0xd] = 0;
  if (DAT_18083cf40 == (local_20 ^ (uint64_t)auStack_78)) {
    return pLong_4;
  }
  func_0x180673080(local_20 ^ (uint64_t)auStack_78);
  fnPtr_1 = (func_ptr_t )swi(3);
  pLong_4 = (int64_t *)(*fnPtr_1)();
  return pLong_4;
}

// Unwind@18008baa0
void Unwind_18008baa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// func_0x18008c310
void func_0x18008c310(void)
{
  return;
}

// func_0x18008c4e0
uint64_t func_0x18008c4e0(uint64_t param_1)
{
  return param_1;
}

// func_0x18008c590
uint64_t * func_0x18008c590(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint8_t param_4)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  uVal_3 = param_1[2];
  uVal_4 = 0x7fffffffffffffff;
  if ((uVal_3 ^ 0x7fffffffffffffff) < param_2) {
    func_0x18007ba70();
    goto LAB_18008c6db;
  }
  param_2 = param_2 + uVal_3;
  uVal_1 = param_1[3];
  if (((int64_t)param_2 < 0) || ((uVal_1 >> 1 ^ 0x7fffffffffffffff) < uVal_1)) {
LAB_18008c5e3:
    lVal_2 = func_0x180672de0(uVal_4 + 0x28);
    uVal_6 = lVal_2 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_6 - 8) = lVal_2;
  }
  else {
    uVal_4 = (uVal_1 >> 1) + uVal_1;
    if (uVal_4 < (param_2 | 0xf)) {
      uVal_4 = param_2 | 0xf;
    }
    if (uVal_4 == 0xffffffffffffffff) {
      uVal_6 = 0;
      uVal_4 = 0xffffffffffffffff;
    }
    else {
      if (0xfff < uVal_4 + 1) {
        if (uVal_4 + 1 < 0xffffffffffffffd9) goto LAB_18008c5e3;
        func_0x18007ba90();
      }
      uVal_6 = func_0x180672de0();
    }
  }
  param_1[2] = param_2;
  param_1[3] = uVal_4;
  if (uVal_1 < 0x10) {
    func_0x1806aa960(uVal_6,param_1,uVal_3);
    *(uint8_t *)(uVal_6 + uVal_3) = param_4;
    *(uint8_t *)(uVal_6 + 1 + uVal_3) = 0;
  }
  else {
    uVal_4 = *param_1;
    func_0x1806aa960(uVal_6,uVal_4,uVal_3);
    *(uint8_t *)(uVal_6 + uVal_3) = param_4;
    *(uint8_t *)(uVal_6 + 1 + uVal_3) = 0;
    uVal_3 = uVal_1 + 1;
    uVal_5 = uVal_4;
    if (0xfff < uVal_3) {
      uVal_5 = *(uint64_t *)(uVal_4 - 8);
      if (0x1f < (uVal_4 - 8) - uVal_5) {
LAB_18008c6db:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(uVal_5,uVal_3);
  }
  *param_1 = uVal_6;
  return param_1;
}

// func_0x18008c6e0
int64_t * func_0x18008c6e0(int64_t param_1)
{
  uint64_t uVal_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  undefined1 *pU64_4;
  int64_t *pLong_5;
  uint8_t local_a8 [104];
  int64_t *local_40;
  uint8_t local_34 [4];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  func_0x180673560(local_34,0);
  pLong_2 = DAT_18083eb48;
  if (DAT_18083eb20 == 0) {
    func_0x180673560(local_a8,0);
    if (DAT_18083eb20 == 0) {
      DAT_18083eb20 = (int64_t)DAT_180841fc0 + 1;
      DAT_180841fc0 = (int)DAT_18083eb20;
    }
    func_0x1806735b0(local_a8);
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_18083eb20 < *(uint64_t *)(lVal_3 + 0x18)) goto LAB_18008c770;
  }
  else {
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_18083eb20 < *(uint64_t *)(lVal_3 + 0x18)) {
LAB_18008c770:
      pLong_5 = *(int64_t **)(*(int64_t *)(lVal_3 + 0x10) + DAT_18083eb20 * 8);
      if (pLong_5 != (int64_t *)0x0) goto LAB_18008c81e;
    }
  }
  uVal_1 = DAT_18083eb20;
  if ((((*(char *)(lVal_3 + 0x24) != '\x01') ||
       (lVal_3 = func_0x180673c90(), *(uint64_t *)(lVal_3 + 0x18) <= uVal_1)) ||
      (pLong_5 = *(int64_t **)(*(int64_t *)(lVal_3 + 0x10) + uVal_1 * 8), pLong_5 == (int64_t *)0x0))
     && (pLong_5 = pLong_2, pLong_2 == (int64_t *)0x0)) {
    local_40 = (int64_t *)func_0x180672de0(0x10);
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (lVal_3 == 0) {
      pU64_4 = &DAT_180761155;
    }
    else {
      pU64_4 = (undefined1 *)(lVal_3 + 0x30);
      if (*(undefined1 **)(lVal_3 + 0x28) != (undefined1 *)0x0) {
        pU64_4 = *(undefined1 **)(lVal_3 + 0x28);
      }
    }
    func_0x18008c920(local_a8,pU64_4);
    pLong_2 = local_40;
    *(uint32_t *)(local_40 + 1) = 0;
    *local_40 = (int64_t)std::codecvt<char,char,struct__Mbstatet>::vftable;
    func_0x18008ca70(local_a8);
    func_0x180673910(pLong_2);
    pLong_5 = local_40;
    (**(func_ptr_t *)(*local_40 + 8))(local_40);
    DAT_18083eb48 = pLong_5;
  }
LAB_18008c81e:
  func_0x1806735b0(local_34);
  return pLong_5;
}

// Unwind@18008c840
void Unwind_18008c840(uint64_t param_1,int64_t param_2)
{
  func_0x1806735b0(param_2 + 0x94);
  return;
}

// Unwind@18008c870
void Unwind_18008c870(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x88),0x10);
  return;
}

// Unwind@18008c8a0
void Unwind_18008c8a0(uint64_t param_1,int64_t param_2)
{
  (**(func_ptr_t *)**(uint64_t **)(param_2 + 0x88))(*(uint64_t **)(param_2 + 0x88),1);
  return;
}

// func_0x18008c8d0
void func_0x18008c8d0(void)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_48 [40];
  uint8_t **local_20;
  char *local_18;
  uint64_t local_10;
  uint64_t local_8;
  
  local_8 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  local_10 = 0;
  local_18 = "bad cast";
  local_20 = std::bad_cast::vftable;
  func_0x18067a120(&local_20,&DAT_180768860);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18008c920
int64_t func_0x18008c920(int64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  
  func_0x180673560(param_1,0);
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint8_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint8_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint16_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(uint16_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint8_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(uint8_t *)(param_1 + 0x60) = 0;
  if (param_2 != 0) {
    func_0x180673950(param_1,param_2);
    return param_1;
  }
  func_0x180674520("bad locale name");
  fnPtr_1 = (func_ptr_t )swi(3);
  lVal_2 = (*fnPtr_1)();
  return lVal_2;
}

// Unwind@18008c9c0
void Unwind_18008c9c0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x20);
  if (*(int64_t *)(lVal_1 + 0x58) != 0) {
    thunk_FUN_180695dd0();
  }
  *(uint64_t *)(lVal_1 + 0x58) = 0;
  if (*(int64_t *)(lVal_1 + 0x48) != 0) {
    thunk_FUN_180695dd0();
  }
  *(uint64_t *)(lVal_1 + 0x48) = 0;
  if (*(int64_t *)(lVal_1 + 0x38) != 0) {
    thunk_FUN_180695dd0();
  }
  *(uint64_t *)(lVal_1 + 0x38) = 0;
  if (*(int64_t *)(lVal_1 + 0x28) != 0) {
    thunk_FUN_180695dd0();
  }
  *(uint64_t *)(lVal_1 + 0x28) = 0;
  if (*(int64_t *)(lVal_1 + 0x18) != 0) {
    thunk_FUN_180695dd0();
  }
  *(uint64_t *)(lVal_1 + 0x18) = 0;
  if (*(int64_t *)(lVal_1 + 8) != 0) {
    thunk_FUN_180695dd0();
  }
  *(uint64_t *)(lVal_1 + 8) = 0;
  func_0x1806735b0(lVal_1);
  return;
}

// func_0x18008ca70
void func_0x18008ca70(int64_t param_1)
{
  func_0x180673a10();
  if (*(int64_t *)(param_1 + 0x58) != 0) {
    thunk_FUN_180695dd0();
  }
  *(uint64_t *)(param_1 + 0x58) = 0;
  if (*(int64_t *)(param_1 + 0x48) != 0) {
    thunk_FUN_180695dd0();
  }
  *(uint64_t *)(param_1 + 0x48) = 0;
  if (*(int64_t *)(param_1 + 0x38) != 0) {
    thunk_FUN_180695dd0();
  }
  *(uint64_t *)(param_1 + 0x38) = 0;
  if (*(int64_t *)(param_1 + 0x28) != 0) {
    thunk_FUN_180695dd0();
  }
  *(uint64_t *)(param_1 + 0x28) = 0;
  if (*(int64_t *)(param_1 + 0x18) != 0) {
    thunk_FUN_180695dd0();
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if (*(int64_t *)(param_1 + 8) != 0) {
    thunk_FUN_180695dd0();
  }
  *(uint64_t *)(param_1 + 8) = 0;
  func_0x1806735b0(param_1);
  return;
}

// Unwind@18008cb20
void Unwind_18008cb20(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18008cb40
void func_0x18008cb40(int64_t param_1)
{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}

// func_0x18008cb50
int64_t func_0x18008cb50(int64_t param_1)
{
  int *pInt_1;
  int64_t lVal_2;
  
  LOCK();
  pInt_1 = (int *)(param_1 + 8);
  *pInt_1 = *pInt_1 + -1;
  UNLOCK();
  lVal_2 = 0;
  if (*pInt_1 == 0) {
    lVal_2 = param_1;
  }
  return lVal_2;
}

// func_0x18008cbd0
void func_0x18008cbd0(void)
{
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18008cc70
void Unwind_18008cc70(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18008cce0
void Unwind_18008cce0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18008cd00
void func_0x18008cd00(char *param_1,uint32_t param_2)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  uint8_t local_f0 [136];
  uint32_t local_68 [2];
  uint8_t **local_60;
  uint8_t local_58 [16];
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_60 = &PTR_PTR_FUN_1806b00d8;
  local_58 = ZEXT816(0);
  local_68[0] = param_2;
  uVal_2 = strlen(param_1);
  if ((int64_t)uVal_2 < 0) {
    uVal_2 = func_0x18007ba70();
  }
  if (uVal_2 < 0x10) {
    pU64_5 = local_58;
    uVal_6 = 0xf;
  }
  else {
    uVal_3 = uVal_2 | 0xf;
    uVal_6 = 0x16;
    if (0x16 < uVal_3) {
      uVal_6 = uVal_3;
    }
    if (uVal_3 < 0xfff) {
      pU64_5 = (uint8_t *)func_0x180672de0(uVal_6 + 1);
    }
    else {
      lVal_4 = func_0x180672de0(uVal_6 + 0x28);
      pU64_5 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_5 + -8) = lVal_4;
    }
    local_58._0_8_ = pU64_5;
  }
  local_48 = uVal_2;
  local_40 = uVal_6;
  func_0x1806aa960(pU64_5,param_1,uVal_2);
  pU64_5[uVal_2] = 0;
  func_0x18008ce40(local_f0,local_58,local_68);
  func_0x18067a120(local_f0,&DAT_1807687e8);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18008cde0
void Unwind_18008cde0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_2 + 0xd8);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0xc0);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  return;
}

// func_0x18008ce40
uint64_t * func_0x18008ce40(uint64_t *param_1,uint64_t param_2,uint32_t *param_3)
{
  uint64_t *pU64_1;
  func_ptr_t fnPtr_2;
  size_t sz_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t *pU64_6;
  uint64_t *pU64_7;
  char *_Str;
  uint64_t uVal_8;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint64_t *local_68;
  uint64_t *local_60;
  uint64_t *local_58;
  uint64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  func_0x180089820(local_78,&local_78,param_2);
  *param_1 = &PTR_LAB_1806b0150;
  pU64_7 = param_1 + 5;
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  param_1[7] = 0;
  param_1[8] = 7;
  local_68 = param_1 + 9;
  *(uint8_t (*)[16])(param_1 + 9) = ZEXT816(0);
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  pU64_1 = param_1 + 1;
  _Str = "Unknown exception";
  if ((char *)param_1[1] != (char *)0x0) {
    _Str = (char *)param_1[1];
  }
  *(uint8_t (*)[16])(param_1 + 0xd) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0xf) = ZEXT816(0);
  sz_3 = strlen(_Str);
  if (-1 < (int64_t)sz_3) {
    uVal_8 = 0xf;
    pU64_6 = param_1 + 0xd;
    if (0xf < sz_3) {
      uVal_4 = sz_3 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_4) {
        uVal_8 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        local_60 = pU64_7;
        local_58 = pU64_1;
        local_50 = param_1;
        pU64_6 = (uint64_t *)func_0x180672de0(uVal_8 + 1);
      }
      else {
        local_60 = pU64_7;
        local_58 = pU64_1;
        local_50 = param_1;
        lVal_5 = func_0x180672de0(uVal_8 + 0x28);
        pU64_6 = (uint64_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
        pU64_6[-1] = lVal_5;
      }
      param_1[0xd] = pU64_6;
      param_1 = local_50;
    }
    param_1[0xf] = sz_3;
    param_1[0x10] = uVal_8;
    func_0x1806aa960(pU64_6,_Str,sz_3);
    *(uint8_t *)((int64_t)pU64_6 + sz_3) = 0;
    return param_1;
  }
  local_60 = pU64_7;
  local_58 = pU64_1;
  local_50 = param_1;
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_7 = (uint64_t *)(*fnPtr_2)();
  return pU64_7;
}

// Unwind@18008cfa0
void Unwind_18008cfa0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(*(uint64_t *)(param_2 + 0x30));
  func_0x1800565c0(*(uint64_t *)(param_2 + 0x38));
  **(uint64_t **)(param_2 + 0x48) = std::exception::vftable;
  func_0x18067b490(*(uint64_t *)(param_2 + 0x40));
  return;
}

// func_0x18008d000
int64_t func_0x18008d000(uint64_t *param_1,uint64_t param_2,uint32_t *param_3,uint8_t *param_4, uint64_t *param_5)
{
  int64_t lVal_1;
  uint8_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  
  uVal_6 = *param_1;
  uVal_12 = ((int64_t)(param_1[1] - uVal_6) >> 3) * -0x5555555555555555 + 1;
  uVal_7 = ((int64_t)(param_1[2] - uVal_6) >> 3) * -0x5555555555555555;
  uVal_11 = 0xaaaaaaaaaaaaaaa - (uVal_7 >> 1);
  uVal_10 = (uVal_7 >> 1) + uVal_7;
  if (uVal_10 <= uVal_12) {
    uVal_10 = uVal_12;
  }
  if (uVal_11 <= uVal_7 && uVal_7 - uVal_11 != 0) {
    uVal_10 = 0xaaaaaaaaaaaaaaa;
  }
  if (0xaaaaaaaaaaaaaaa < uVal_10) {
LAB_18008d2d5:
    func_0x18007ba90();
    goto LAB_18008d2da;
  }
  if (uVal_10 == 0) {
    uVal_7 = 0;
  }
  else if (uVal_10 < 0xab) {
    uVal_7 = func_0x180672de0(uVal_10 * 0x18);
  }
  else {
    if (uVal_10 == 0xaaaaaaaaaaaaaaa) goto LAB_18008d2d5;
    lVal_4 = func_0x180672de0(uVal_10 * 0x18 + 0x27);
    uVal_7 = lVal_4 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_7 - 8) = lVal_4;
  }
  lVal_4 = param_2 - uVal_6;
  uVal_3 = *param_5;
  uVal_2 = *param_4;
  *(uint32_t *)(uVal_7 + lVal_4) = *param_3;
  *(uint32_t *)(uVal_7 + 4 + lVal_4) = param_3[1];
  *(uint32_t *)(uVal_7 + 8 + lVal_4) = param_3[2];
  *(uint8_t *)(uVal_7 + 0xc + lVal_4) = uVal_2;
  *(uint64_t *)(uVal_7 + 0x10 + lVal_4) = uVal_3;
  uVal_11 = *param_1;
  uVal_6 = param_1[1];
  if (param_2 == uVal_6) {
    if (uVal_11 != param_2) {
      lVal_5 = 0;
      do {
        *(uint64_t *)(uVal_7 + lVal_5) = 0;
        *(uint32_t *)(uVal_7 + 8 + lVal_5) = 0;
        *(uint32_t *)(uVal_7 + lVal_5) = *(uint32_t *)(uVal_11 + lVal_5);
        *(uint32_t *)(uVal_7 + 4 + lVal_5) = *(uint32_t *)(uVal_11 + 4 + lVal_5);
        *(uint32_t *)(uVal_7 + 8 + lVal_5) = *(uint32_t *)(uVal_11 + 8 + lVal_5);
        *(uint8_t *)(uVal_7 + 0xc + lVal_5) = *(uint8_t *)(uVal_11 + 0xc + lVal_5);
        *(uint64_t *)(uVal_7 + 0x10 + lVal_5) = *(uint64_t *)(uVal_11 + 0x10 + lVal_5);
        lVal_8 = uVal_11 + lVal_5;
        lVal_5 = lVal_5 + 0x18;
      } while (lVal_8 + 0x18U != param_2);
      goto LAB_18008d266;
    }
  }
  else {
    if (uVal_11 != param_2) {
      lVal_5 = 0;
      do {
        *(uint64_t *)(uVal_7 + lVal_5) = 0;
        *(uint32_t *)(uVal_7 + 8 + lVal_5) = 0;
        *(uint32_t *)(uVal_7 + lVal_5) = *(uint32_t *)(uVal_11 + lVal_5);
        *(uint32_t *)(uVal_7 + 4 + lVal_5) = *(uint32_t *)(uVal_11 + 4 + lVal_5);
        *(uint32_t *)(uVal_7 + 8 + lVal_5) = *(uint32_t *)(uVal_11 + 8 + lVal_5);
        *(uint8_t *)(uVal_7 + 0xc + lVal_5) = *(uint8_t *)(uVal_11 + 0xc + lVal_5);
        *(uint64_t *)(uVal_7 + 0x10 + lVal_5) = *(uint64_t *)(uVal_11 + 0x10 + lVal_5);
        lVal_8 = uVal_11 + lVal_5;
        lVal_5 = lVal_5 + 0x18;
      } while (lVal_8 + 0x18U != param_2);
      uVal_6 = param_1[1];
    }
    if (param_2 != uVal_6) {
      lVal_5 = lVal_4 + uVal_7;
      lVal_8 = 0;
      do {
        *(uint64_t *)(lVal_5 + 0x18 + lVal_8) = 0;
        *(uint32_t *)(lVal_5 + 0x20 + lVal_8) = 0;
        *(uint32_t *)(lVal_5 + 0x18 + lVal_8) = *(uint32_t *)(param_2 + lVal_8);
        *(uint32_t *)(lVal_5 + 0x1c + lVal_8) = *(uint32_t *)(param_2 + 4 + lVal_8);
        *(uint32_t *)(lVal_5 + 0x20 + lVal_8) = *(uint32_t *)(param_2 + 8 + lVal_8);
        *(uint8_t *)(lVal_5 + 0x24 + lVal_8) = *(uint8_t *)(param_2 + 0xc + lVal_8);
        *(uint64_t *)(lVal_5 + 0x28 + lVal_8) = *(uint64_t *)(param_2 + 0x10 + lVal_8);
        lVal_1 = param_2 + lVal_8;
        lVal_8 = lVal_8 + 0x18;
      } while (lVal_1 + 0x18U != uVal_6);
    }
LAB_18008d266:
    uVal_11 = *param_1;
  }
  if (uVal_11 != 0) {
    uVal_9 = param_1[2] - uVal_11;
    uVal_6 = uVal_11;
    if (0xfff < uVal_9) {
      uVal_6 = *(uint64_t *)(uVal_11 - 8);
      if (0x1f < (uVal_11 - 8) - uVal_6) {
LAB_18008d2da:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_9 = uVal_9 + 0x27;
    }
    thunk_FUN_180695dd0(uVal_6,uVal_9);
  }
  *param_1 = uVal_7;
  param_1[1] = uVal_7 + uVal_12 * 0x18;
  param_1[2] = uVal_7 + uVal_10 * 0x18;
  return lVal_4 + uVal_7;
}

// func_0x18008d2e0
void func_0x18008d2e0(uint64_t *param_1,uint32_t *param_2,uint64_t param_3)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  pU64_2 = (uint64_t *)*param_1;
  if ((uint64_t)((param_1[2] - (int64_t)pU64_2 >> 3) * -0x5555555555555555) < param_3) {
    func_0x18008d690(param_1,param_3);
    pU64_1 = (uint64_t *)*param_1;
    uVal_4 = param_3;
    if ((param_3 & 1) != 0) {
      *pU64_1 = 0;
      *(uint32_t *)(pU64_1 + 1) = 0;
      *(uint32_t *)pU64_1 = *param_2;
      *(uint32_t *)((int64_t)pU64_1 + 4) = param_2[1];
      *(uint32_t *)(pU64_1 + 1) = param_2[2];
      *(uint8_t *)((int64_t)pU64_1 + 0xc) = *(uint8_t *)(param_2 + 3);
      pU64_1[2] = *(uint64_t *)(param_2 + 4);
      pU64_1 = pU64_1 + 3;
      param_2 = param_2 + 6;
      uVal_4 = param_3 - 1;
    }
    if (param_3 != 1) {
      do {
        *pU64_1 = 0;
        *(uint32_t *)(pU64_1 + 1) = 0;
        *(uint32_t *)pU64_1 = *param_2;
        *(uint32_t *)((int64_t)pU64_1 + 4) = param_2[1];
        *(uint32_t *)(pU64_1 + 1) = param_2[2];
        *(uint8_t *)((int64_t)pU64_1 + 0xc) = *(uint8_t *)(param_2 + 3);
        pU64_1[2] = *(uint64_t *)(param_2 + 4);
        pU64_1[3] = 0;
        *(uint32_t *)(pU64_1 + 4) = 0;
        *(uint32_t *)(pU64_1 + 3) = param_2[6];
        *(uint32_t *)((int64_t)pU64_1 + 0x1c) = param_2[7];
        *(uint32_t *)(pU64_1 + 4) = param_2[8];
        *(uint8_t *)((int64_t)pU64_1 + 0x24) = *(uint8_t *)(param_2 + 9);
        pU64_1[5] = *(uint64_t *)(param_2 + 10);
        pU64_1 = pU64_1 + 6;
        param_2 = param_2 + 0xc;
        uVal_4 = uVal_4 - 2;
      } while (uVal_4 != 0);
    }
  }
  else {
    pU64_1 = (uint64_t *)param_1[1];
    lVal_5 = (int64_t)pU64_1 - (int64_t)pU64_2 >> 3;
    uVal_4 = lVal_5 * -0x5555555555555555;
    if (uVal_4 < param_3) {
      if (pU64_2 != pU64_1) {
        do {
          *(uint32_t *)pU64_2 = *param_2;
          *(uint32_t *)((int64_t)pU64_2 + 4) = param_2[1];
          *(uint32_t *)(pU64_2 + 1) = param_2[2];
          *(uint32_t *)((int64_t)pU64_2 + 0x14) = param_2[5];
          *(uint64_t *)((int64_t)pU64_2 + 0xc) = *(uint64_t *)(param_2 + 3);
          pU64_2 = pU64_2 + 3;
          param_2 = param_2 + 6;
          pU64_1 = (uint64_t *)param_1[1];
        } while (pU64_2 != pU64_1);
      }
      uVal_3 = param_3 + lVal_5 * 0x5555555555555555;
      if (uVal_3 != 0) {
        if ((uVal_3 & 1) != 0) {
          *pU64_1 = 0;
          *(uint32_t *)(pU64_1 + 1) = 0;
          *(uint32_t *)pU64_1 = *param_2;
          *(uint32_t *)((int64_t)pU64_1 + 4) = param_2[1];
          *(uint32_t *)(pU64_1 + 1) = param_2[2];
          *(uint8_t *)((int64_t)pU64_1 + 0xc) = *(uint8_t *)(param_2 + 3);
          pU64_1[2] = *(uint64_t *)(param_2 + 4);
          pU64_1 = pU64_1 + 3;
          param_2 = param_2 + 6;
          uVal_3 = uVal_3 - 1;
        }
        if (param_3 != uVal_4 + 1) {
          do {
            *pU64_1 = 0;
            *(uint32_t *)(pU64_1 + 1) = 0;
            *(uint32_t *)pU64_1 = *param_2;
            *(uint32_t *)((int64_t)pU64_1 + 4) = param_2[1];
            *(uint32_t *)(pU64_1 + 1) = param_2[2];
            *(uint8_t *)((int64_t)pU64_1 + 0xc) = *(uint8_t *)(param_2 + 3);
            pU64_1[2] = *(uint64_t *)(param_2 + 4);
            pU64_1[3] = 0;
            *(uint32_t *)(pU64_1 + 4) = 0;
            *(uint32_t *)(pU64_1 + 3) = param_2[6];
            *(uint32_t *)((int64_t)pU64_1 + 0x1c) = param_2[7];
            *(uint32_t *)(pU64_1 + 4) = param_2[8];
            *(uint8_t *)((int64_t)pU64_1 + 0x24) = *(uint8_t *)(param_2 + 9);
            pU64_1[5] = *(uint64_t *)(param_2 + 10);
            pU64_1 = pU64_1 + 6;
            param_2 = param_2 + 0xc;
            uVal_3 = uVal_3 - 2;
          } while (uVal_3 != 0);
        }
      }
    }
    else {
      pU64_1 = pU64_2 + param_3 * 3;
      if (param_3 != 0) {
        uVal_4 = param_3;
        if ((param_3 & 1) != 0) {
          *(uint32_t *)pU64_2 = *param_2;
          *(uint32_t *)((int64_t)pU64_2 + 4) = param_2[1];
          *(uint32_t *)(pU64_2 + 1) = param_2[2];
          *(uint64_t *)((int64_t)pU64_2 + 0xc) = *(uint64_t *)(param_2 + 3);
          *(uint32_t *)((int64_t)pU64_2 + 0x14) = param_2[5];
          pU64_2 = pU64_2 + 3;
          param_2 = param_2 + 6;
          uVal_4 = param_3 - 1;
        }
        if (param_3 != 1) {
          lVal_5 = 0;
          do {
            *(uint32_t *)((int64_t)pU64_2 + lVal_5) = *(uint32_t *)((int64_t)param_2 + lVal_5);
            *(uint32_t *)((int64_t)pU64_2 + lVal_5 + 4) =
                 *(uint32_t *)((int64_t)param_2 + lVal_5 + 4);
            *(uint32_t *)((int64_t)pU64_2 + lVal_5 + 8) =
                 *(uint32_t *)((int64_t)param_2 + lVal_5 + 8);
            *(uint64_t *)((int64_t)pU64_2 + lVal_5 + 0xc) =
                 *(uint64_t *)((int64_t)param_2 + lVal_5 + 0xc);
            *(uint32_t *)((int64_t)pU64_2 + lVal_5 + 0x14) =
                 *(uint32_t *)((int64_t)param_2 + lVal_5 + 0x14);
            *(uint32_t *)((int64_t)pU64_2 + lVal_5 + 0x18) =
                 *(uint32_t *)((int64_t)param_2 + lVal_5 + 0x18);
            *(uint32_t *)((int64_t)pU64_2 + lVal_5 + 0x1c) =
                 *(uint32_t *)((int64_t)param_2 + lVal_5 + 0x1c);
            *(uint32_t *)((int64_t)pU64_2 + lVal_5 + 0x20) =
                 *(uint32_t *)((int64_t)param_2 + lVal_5 + 0x20);
            *(uint64_t *)((int64_t)pU64_2 + lVal_5 + 0x24) =
                 *(uint64_t *)((int64_t)param_2 + lVal_5 + 0x24);
            *(uint32_t *)((int64_t)pU64_2 + lVal_5 + 0x2c) =
                 *(uint32_t *)((int64_t)param_2 + lVal_5 + 0x2c);
            lVal_5 = lVal_5 + 0x30;
            uVal_4 = uVal_4 - 2;
          } while (uVal_4 != 0);
        }
      }
    }
  }
  param_1[1] = pU64_1;
  return;
}

// func_0x18008d690
void func_0x18008d690(uint8_t (*param_1)[16],uint64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVal_1 = *(int64_t *)*param_1;
    uVal_3 = *(int64_t *)param_1[1] - lVal_1;
    uVal_6 = ((int64_t)uVal_3 >> 3) * -0x5555555555555555;
    uVal_5 = 0xaaaaaaaaaaaaaaa - (uVal_6 >> 1);
    uVal_4 = (uVal_6 >> 1) + uVal_6;
    if (uVal_4 <= param_2) {
      uVal_4 = param_2;
    }
    if (uVal_5 <= uVal_6 && uVal_6 - uVal_5 != 0) {
      uVal_4 = 0xaaaaaaaaaaaaaaa;
    }
    if (lVal_1 != 0) {
      lVal_2 = lVal_1;
      if (0xfff < uVal_3) {
        lVal_2 = *(int64_t *)(lVal_1 + -8);
        if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_18008d7a3;
        uVal_3 = uVal_3 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_2,uVal_3);
      *param_1 = ZEXT816(0);
      *(uint64_t *)param_1[1] = 0;
    }
    if (uVal_4 < 0xaaaaaaaaaaaaaab) {
      if (uVal_4 == 0) {
        uVal_3 = 0;
LAB_18008d77c:
        *(uint64_t *)*param_1 = uVal_3;
        *(uint64_t *)(*param_1 + 8) = uVal_3;
        *(uint64_t *)param_1[1] = uVal_3 + uVal_4 * 0x18;
        return;
      }
      if (uVal_4 < 0xab) {
        uVal_3 = func_0x180672de0(uVal_4 * 0x18);
        goto LAB_18008d77c;
      }
      if (uVal_4 != 0xaaaaaaaaaaaaaaa) {
        lVal_1 = func_0x180672de0(uVal_4 * 0x18 + 0x27);
        uVal_3 = lVal_1 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_3 - 8) = lVal_1;
        goto LAB_18008d77c;
      }
    }
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_18008d7a3:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18008d7b0
void func_0x18008d7b0(uint64_t param_1,uint64_t param_2,int64_t *param_3)
{
  char ch_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  
  ch_1 = *(char *)((int64_t)param_3 + 0x19);
  while (ch_1 == '\0') {
    func_0x18008d7b0(param_1,param_2,param_3[2]);
    pLong_2 = (int64_t *)*param_3;
    pLong_3 = (int64_t *)param_3[5];
    if (pLong_3 != (int64_t *)0x0) {
      if (*pLong_3 != 0) {
        func_0x18063eee0();
      }
      thunk_FUN_180695dd0(pLong_3,0x10);
    }
    thunk_FUN_180695dd0(param_3,0x30);
    param_3 = pLong_2;
    ch_1 = *(char *)((int64_t)pLong_2 + 0x19);
  }
  return;
}

// func_0x18008f8e0
void func_0x18008f8e0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x20] = 1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  return;
}

// func_0x18008fa60
void func_0x18008fa60(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x1e] = 1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  return;
}

// func_0x18008fba0
void func_0x18008fba0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x1c] = 1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  return;
}

// func_0x1800904a0
void func_0x1800904a0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x19] = 1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  return;
}

// func_0x180090820
uint64_t func_0x180090820(int64_t *param_1,uint64_t param_2,func_ptr_t *param_3)
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
  local_60[0] = 0x3200000001;
  local_50 = L"Windows.Storage.Streams.InMemoryRandomAccessStream";
  local_48 = (uint64_t *)0x0;
  local_80 = (uint64_t *)CONCAT44(local_80._4_4_,0x181f);
  local_78 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/base.h";
  local_70 = 0;
  func_0x1800913f0(&local_34,&local_68,&DAT_1806b066c,&local_48);
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
      goto LAB_180090932;
    }
  }
  (**param_3)(param_2,&local_30);
LAB_180090932:
  if (local_30 != (uint64_t *)0x0) {
    func_0x180091220(&local_30);
  }
  return param_2;
}

// Unwind@180090960
void Unwind_180090960(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  LOCK();
  pLong_1 = (int64_t *)(*(int64_t *)(param_2 + 0x68) + 8);
  *pLong_1 = *pLong_1 + -1;
  UNLOCK();
  return;
}

// Unwind@180090990
void Unwind_180090990(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x78) != 0) {
    func_0x180091220(param_2 + 0x78);
  }
  return;
}

// Unwind@180090a70
void Unwind_180090a70(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x38) != 0) {
    func_0x180091220(param_2 + 0x38);
  }
  return;
}

// func_0x180090aa0
void func_0x180090aa0(uint param_1,uint32_t *param_2)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint8_t *pU64_3;
  uint64_t unaff_retaddr;
  uint8_t auStack_1b8 [32];
  uint local_198;
  uint8_t local_188 [24];
  uint8_t local_170 [24];
  uint8_t local_158 [24];
  uint8_t local_140 [24];
  uint8_t local_128 [24];
  uint8_t local_110 [24];
  uint8_t local_f8 [24];
  uint8_t local_e0 [24];
  uint8_t local_c8 [24];
  uint8_t local_b0 [24];
  uint8_t local_98 [24];
  uint8_t local_80 [24];
  uint8_t local_68 [24];
  uint8_t local_50 [24];
  uint8_t **local_38;
  char *local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  pU64_3 = (uint8_t *)(uint64_t)param_1;
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_1b8;
  if (DAT_18083e5a0 != (func_ptr_t )0x0) {
    local_198 = param_1;
    (*DAT_18083e5a0)(*param_2,*(uint64_t *)(param_2 + 2),*(uint64_t *)(param_2 + 4),
                     unaff_retaddr);
  }
  if ((int)param_1 < -0x7ffefef2) {
    switch(param_1) {
    case 0x8000000b:
      pU64_3 = local_b0;
      func_0x180090de0(pU64_3);
      func_0x18067a120(pU64_3,&DAT_1807689e0);
      goto LAB_180090b2e;
    default:
switchD_180090b0a_caseD_e:
      if ((int)pU64_3 == -0x7fffbfff) goto LAB_180090d72;
      if ((int)pU64_3 == -0x7fffbffe) {
        pU64_3 = local_c8;
        func_0x180090df0(pU64_3);
        func_0x18067a120(pU64_3,&DAT_180768a20);
        goto LAB_180090c14;
      }
    case 0x8000000f:
    case 0x80000010:
    case 0x80000011:
    case 0x80000012:
    case 0x80000013:
    case 0x80000014:
    case 0x80000015:
    case 0x80000016:
    case 0x80000017:
switchD_180090b0a_caseD_8000000f:
      func_0x180090eb0(local_188,(uint64_t)pU64_3 & 0xffffffff);
      func_0x18067a120(local_188,&DAT_180768bf8);
    case 0x8000000e:
      func_0x180090e30(local_128);
      func_0x18067a120(local_128,&DAT_180768b20);
    case 0x8000000c:
      func_0x180090e20(local_110);
      func_0x18067a120(local_110,&DAT_180768ae0);
    case 0x8000000d:
      func_0x180090e40(local_140);
      func_0x18067a120(local_140,&DAT_180768b60);
    case 0x80000018:
      func_0x180090e50(local_158);
      func_0x18067a120(local_158,&DAT_180768ba0);
    }
LAB_180090cea:
    func_0x180090da0(local_50);
    func_0x18067a120(local_50,&DAT_1807688e0);
LAB_180090d0c:
    func_0x180090dd0(local_98);
    func_0x18067a120(local_98,&DAT_1807689a0);
LAB_180090d2e:
    func_0x180090db0(local_68);
    func_0x18067a120(local_68,&DAT_180768920);
  }
  else {
LAB_180090b2e:
    iVal_2 = (int)pU64_3;
    if (-0x7ff8fffc < iVal_2) {
      if (iVal_2 < -0x7ff8ffa9) {
        if (iVal_2 != -0x7ff8fffb) {
          if (iVal_2 != -0x7ff8fff2) goto switchD_180090b0a_caseD_8000000f;
          local_28 = 0;
          local_30 = "bad allocation";
          local_38 = std::bad_alloc::vftable;
          func_0x18067a120(&local_38,&DAT_180768880);
          goto LAB_180090b98;
        }
        goto LAB_180090cea;
      }
LAB_180090c14:
      if ((int)pU64_3 != -0x7ff8ffa9) {
        if ((int)pU64_3 == -0x7ff8fb39) {
          pU64_3 = local_170;
          func_0x180090e60(pU64_3);
          func_0x18067a120(pU64_3,&DAT_180768be0);
        }
        goto switchD_180090b0a_caseD_8000000f;
      }
      goto LAB_180090d0c;
    }
LAB_180090b98:
    if (iVal_2 == -0x7ffefef2) goto LAB_180090d2e;
    if (iVal_2 != -0x7ffbfeef) {
      if (iVal_2 == -0x7ffbfeac) {
        pU64_3 = local_f8;
        func_0x180090e10(pU64_3);
        func_0x18067a120(pU64_3,&DAT_180768aa0);
        goto switchD_180090b0a_caseD_e;
      }
      goto switchD_180090b0a_caseD_8000000f;
    }
  }
  func_0x180090e00(local_e0);
  func_0x18067a120(local_e0,&DAT_180768a60);
LAB_180090d72:
  func_0x180090dc0(local_80);
  func_0x18067a120(local_80,&DAT_180768960);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180090da0
void func_0x180090da0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180090eb0(param_1,0x80070005,param_3,param_3);
  return;
}

// func_0x180090db0
void func_0x180090db0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180090eb0(param_1,0x8001010e,param_3,param_3);
  return;
}

// func_0x180090dc0
void func_0x180090dc0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180090eb0(param_1,0x80004001,param_3,param_3);
  return;
}

// func_0x180090dd0
void func_0x180090dd0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180090eb0(param_1,0x80070057,param_3,param_3);
  return;
}

// func_0x180090de0
void func_0x180090de0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180090eb0(param_1,0x8000000b,param_3,param_3);
  return;
}

// func_0x180090df0
void func_0x180090df0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180090eb0(param_1,0x80004002,param_3,param_3);
  return;
}

// func_0x180090e00
void func_0x180090e00(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180090eb0(param_1,0x80040111,param_3,param_3);
  return;
}

// func_0x180090e10
void func_0x180090e10(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180090eb0(param_1,0x80040154,param_3,param_3);
  return;
}

// func_0x180090e20
void func_0x180090e20(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180090eb0(param_1,0x8000000c,param_3,param_3);
  return;
}

// func_0x180090e30
void func_0x180090e30(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180090eb0(param_1,0x8000000e,param_3,param_3);
  return;
}

// func_0x180090e40
void func_0x180090e40(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180090eb0(param_1,0x8000000d,param_3,param_3);
  return;
}

// func_0x180090e50
void func_0x180090e50(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180090eb0(param_1,0x80000018,param_3,param_3);
  return;
}

// func_0x180090e60
void func_0x180090e60(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180090eb0(param_1,0x800704c7,param_3,param_3);
  return;
}

// func_0x180090eb0
int64_t * func_0x180090eb0(int64_t *param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t **ptr2_Long_1;
  int *pInt_2;
  int64_t lVal_3;
  uint64_t *pU64_4;
  int64_t *pLong_5;
  uint uVal_6;
  int iVal_7;
  LPVOID lpMem;
  HANDLE hHeap;
  uint16_t *pU64_8;
  uint uVal_9;
  int64_t *pLong_10;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = 0;
  *(uint32_t *)(param_1 + 1) = 0xaabbccdd;
  *(uint32_t *)((int64_t)param_1 + 0xc) = param_2;
  ptr2_Long_1 = (int64_t **)(param_1 + 2);
  param_1[2] = 0;
  local_58 = (int64_t *)0x0;
  Ordinal_200(0,&local_58);
  if (local_58 == (int64_t *)0x0) {
    if (ptr2_Long_1 != &local_60) {
      pLong_5 = *ptr2_Long_1;
      pLong_10 = (int64_t *)0x0;
      goto joined_r0x000180090fdc;
    }
    pLong_10 = *ptr2_Long_1;
LAB_180090f53:
    if (pLong_10 == (int64_t *)0x0) {
LAB_180091011:
      local_50 = (int64_t *)0x0;
      if ((local_58 == (int64_t *)0x0) ||
         ((**(func_ptr_t *)(*local_58 + 0x28))(local_58,&local_50), local_50 == (int64_t *)0x0)) {
        func_0x180091140(param_1,param_2,0,param_4);
      }
      else {
        uVal_6 = Ordinal_7();
        pLong_10 = local_50;
        uVal_9 = 0;
        if (uVal_6 != 0) {
          pU64_8 = (uint16_t *)((int64_t)local_50 + (uint64_t)uVal_6 * 2);
          do {
            pU64_8 = pU64_8 + -1;
            iVal_7 = func_0x18068bd28(*pU64_8);
            uVal_9 = uVal_6;
            if (iVal_7 == 0) break;
            uVal_6 = uVal_6 - 1;
            uVal_9 = 0;
          } while (uVal_6 != 0);
        }
        lpMem = (LPVOID)func_0x180091240(pLong_10,uVal_9);
        func_0x180091140(param_1,param_2,lpMem,param_4);
        if (lpMem != (LPVOID)0x0) {
          LOCK();
          pInt_2 = (int *)((int64_t)lpMem + 0x18);
          iVal_7 = *pInt_2;
          *pInt_2 = *pInt_2 + -1;
          UNLOCK();
          if (iVal_7 == 1) {
            hHeap = GetProcessHeap();
            HeapFree(hHeap,0,lpMem);
          }
          else if (iVal_7 < 1) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
      }
      if (local_50 != (int64_t *)0x0) {
        Ordinal_6();
      }
      goto LAB_180091097;
    }
    lVal_3 = *param_1;
  }
  else {
    local_50 = (int64_t *)0x0;
    (**(func_ptr_t *)*local_58)(local_58,&DAT_1806b063c,&local_50);
    local_60 = local_50;
    if (ptr2_Long_1 != &local_60) {
      pLong_5 = *ptr2_Long_1;
      pLong_10 = local_50;
joined_r0x000180090fdc:
      if (pLong_5 != (int64_t *)0x0) {
        func_0x180091220(ptr2_Long_1);
      }
      *ptr2_Long_1 = pLong_10;
      goto LAB_180090f53;
    }
    pLong_10 = *ptr2_Long_1;
    if (local_50 == (int64_t *)0x0) goto LAB_180090f53;
    func_0x180091220();
    if (pLong_10 == (int64_t *)0x0) goto LAB_180091011;
    pLong_10 = *ptr2_Long_1;
    lVal_3 = *param_1;
  }
  if (lVal_3 != 0) {
    Ordinal_6();
    *param_1 = 0;
  }
  (**(func_ptr_t *)(*pLong_10 + 0x20))(pLong_10,param_1);
  pU64_4 = (uint64_t *)param_1[2];
  if (pU64_4 != (uint64_t *)0x0) {
    local_50 = (int64_t *)0x0;
    (**(func_ptr_t *)*pU64_4)(pU64_4,&DAT_1806b064c,&local_50);
    if (local_50 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_50 + 0x28))(local_50,0);
      func_0x180091220(&local_50);
    }
  }
LAB_180091097:
  if (local_58 != (int64_t *)0x0) {
    func_0x180091220(&local_58);
  }
  return param_1;
}

// Unwind@180091120
void Unwind_180091120(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180091140
void func_0x180091140(int64_t param_1,uint32_t param_2,uint64_t param_3,uint32_t *param_4)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint64_t unaff_retaddr;
  uint64_t *local_30;
  int64_t local_28;
  int64_t local_20;
  
  RoOriginateLanguageException(param_2,param_3,0);
  if (DAT_18083e5a0 != (func_ptr_t )0x0) {
    (*DAT_18083e5a0)(*param_4,*(uint64_t *)(param_4 + 2),*(uint64_t *)(param_4 + 4),
                     unaff_retaddr,param_2);
  }
  local_30 = (uint64_t *)0x0;
  Ordinal_200(0,&local_30);
  pLong_1 = (int64_t *)(param_1 + 0x10);
  if (local_30 == (uint64_t *)0x0) {
    if (pLong_1 == &local_28) {
      return;
    }
    lVal_2 = 0;
  }
  else {
    local_20 = 0;
    (**(func_ptr_t *)*local_30)(local_30,&DAT_1806b063c,&local_20);
    local_28 = local_20;
    lVal_2 = local_20;
    if (pLong_1 == &local_28) {
      if (local_20 != 0) {
        func_0x180091220(&local_28);
      }
      goto LAB_1800911fc;
    }
  }
  if (*pLong_1 != 0) {
    func_0x180091220(pLong_1);
  }
  *pLong_1 = lVal_2;
LAB_1800911fc:
  if (local_30 != (uint64_t *)0x0) {
    func_0x180091220(&local_30);
  }
  return;
}

// func_0x180091220
void func_0x180091220(int64_t **param_1)
{
  int64_t *pLong_1;
  
  pLong_1 = *param_1;
  *param_1 = (int64_t *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000180091230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*pLong_1 + 0x10))(pLong_1);
  return;
}

// func_0x180091240
uint32_t * func_0x180091240(int64_t param_1,uint param_2)
{
  func_ptr_t fnPtr_1;
  HANDLE hHeap;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  uint64_t uVal_4;
  uint8_t auStack_68 [40];
  uint8_t **local_40;
  char *local_38;
  uint64_t local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  if (param_2 == 0) {
    pU64_2 = (uint32_t *)0x0;
LAB_1800912ea:
    if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_68)) {
      return pU64_2;
    }
    func_0x180673080(local_28 ^ (uint64_t)auStack_68);
  }
  else {
    uVal_4 = (uint64_t)param_2;
    if (param_2 < 0x7ffffff0) {
      hHeap = GetProcessHeap();
      pU64_2 = (uint32_t *)HeapAlloc(hHeap,0,uVal_4 * 2 + 0x20);
      if (pU64_2 == (uint32_t *)0x0) goto LAB_18009133a;
      *pU64_2 = 0;
      pU64_2[1] = param_2;
      pU64_3 = pU64_2 + 7;
      *(uint32_t **)(pU64_2 + 4) = pU64_3;
      LOCK();
      pU64_2[6] = 1;
      UNLOCK();
      *(uint16_t *)((int64_t)pU64_2 + uVal_4 * 2 + 0x1c) = 0;
      if (param_1 == 0) {
        func_0x1806ab010(pU64_3,0,uVal_4 * 2);
        pU64_3 = (uint32_t *)func_0x1806823dc();
        *pU64_3 = 0x16;
        func_0x180684970();
      }
      else {
        func_0x1806aa960(pU64_3,param_1,uVal_4 * 2);
      }
      goto LAB_1800912ea;
    }
  }
  func_0x180091370(&local_40,"length");
  func_0x18067a120(&local_40,&DAT_180768c60);
LAB_18009133a:
  local_30 = 0;
  local_38 = "bad allocation";
  local_40 = std::bad_alloc::vftable;
  func_0x18067a120(&local_40,&DAT_180768880);
  fnPtr_1 = (func_ptr_t )swi(3);
  pU64_2 = (uint32_t *)(*fnPtr_1)();
  return pU64_2;
}

// func_0x180091370
uint64_t * func_0x180091370(uint64_t *param_1,uint64_t param_2)
{
  func_ptr_t fnPtr_1;
  uint64_t *pU64_2;
  uint8_t auStack_48 [40];
  uint64_t local_20;
  uint8_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  *param_1 = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  local_18 = 1;
  local_20 = param_2;
  func_0x18067b3f0(&local_20,param_1 + 1);
  *param_1 = std::invalid_argument::vftable;
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_48)) {
    return param_1;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_48);
  fnPtr_1 = (func_ptr_t )swi(3);
  pU64_2 = (uint64_t *)(*fnPtr_1)();
  return pU64_2;
}

// func_0x1800913f0
int * func_0x1800913f0(int *param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4)
{
  LPCWSTR pWStr_1;
  uint64_t *pU64_2;
  int64_t lVal_3;
  uint8_t auArr_4 [16];
  int iVal_5;
  HMODULE pHnd_6;
  FARPROC pFn_7;
  uint64_t uVal_8;
  LPCWSTR pWStr_9;
  int64_t lVal_10;
  INT_PTR IVar11;
  uint8_t *pU64_12;
  uint64_t uVal_13;
  uint64_t uVal_14;
  LPCWSTR pWStr_15;
  uint64_t in_stack_ffffffffffffff68;
  int64_t local_88;
  uint8_t *local_80;
  int local_74;
  int64_t local_70;
  uint8_t local_68 [16];
  uint8_t local_58 [16];
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (DAT_18083e5a8 == (func_ptr_t )0x0) {
    local_74 = RoGetActivationFactory(*param_2,param_3,param_4);
    if (local_74 == -0x7ffbfe10) {
      pHnd_6 = LoadLibraryExW(L"combase.dll",(HANDLE)0x0,0x1000);
      pFn_7 = GetProcAddress(pHnd_6,"CoIncrementMTAUsage");
      if (pFn_7 == (FARPROC)0x0) {
        *param_1 = -0x7ffbfe10;
        return param_1;
      }
      (*pFn_7)(local_68);
      local_74 = RoGetActivationFactory(*param_2,param_3,param_4);
    }
    if (local_74 == 0) {
      *param_1 = 0;
    }
    else {
      local_70 = 0;
      uVal_13 = 0;
      Ordinal_200(0,&local_70);
      local_58 = ZEXT816(0);
      local_68 = ZEXT816(0);
      lVal_10 = *param_2;
      uVal_14 = 7;
      pWStr_15 = (LPCWSTR)local_68;
      if (lVal_10 == 0) {
        pU64_12 = &DAT_1807614ee;
      }
      else {
        pU64_12 = *(uint8_t **)(lVal_10 + 0x10);
        uVal_13 = (uint64_t)*(uint *)(lVal_10 + 4);
        if (7 < uVal_13) {
          uVal_8 = uVal_13 | 7;
          uVal_14 = 10;
          if (10 < uVal_8) {
            uVal_14 = uVal_8;
          }
          local_80 = pU64_12;
          if (uVal_8 < 0x7ff) {
            pWStr_15 = (LPCWSTR)func_0x180672de0(uVal_14 * 2 + 2);
          }
          else {
            lVal_10 = func_0x180672de0(uVal_14 * 2 + 0x29);
            pWStr_15 = (LPCWSTR)(lVal_10 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pWStr_15 + -4) = lVal_10;
          }
          local_68._0_8_ = pWStr_15;
          pU64_12 = local_80;
        }
      }
      local_58._0_8_ = uVal_13;
      local_58._8_8_ = uVal_14;
      func_0x1806aa960(pWStr_15,pU64_12,uVal_13 * 2);
      pWStr_15[uVal_13] = L'\0';
      while (local_58._0_8_ != 0) {
        pWStr_15 = (LPCWSTR)local_68;
        if (7 < (uint64_t)local_58._8_8_) {
          pWStr_15 = (LPCWSTR)local_68._0_8_;
        }
        pWStr_1 = pWStr_15 + local_58._0_8_;
        pWStr_9 = (LPCWSTR)thunk_FUN_1806768a0(pWStr_15,pWStr_1,0x2e);
        if ((pWStr_9 == pWStr_1) || (lVal_10 = (int64_t)pWStr_9 - (int64_t)pWStr_15, lVal_10 == -2))
        break;
        uVal_14 = lVal_10 >> 1;
        uVal_13 = uVal_14 - local_58._0_8_;
        pWStr_15 = (LPCWSTR)local_68;
        if (uVal_14 < (uint64_t)local_58._0_8_ || uVal_13 == 0) {
          local_58._0_8_ = uVal_14;
          if (7 < (uint64_t)local_58._8_8_) {
            pWStr_15 = (LPCWSTR)local_68._0_8_;
          }
LAB_18009166b:
          *(uint16_t *)((int64_t)pWStr_15 + lVal_10) = 0;
        }
        else {
          if (uVal_13 <= (uint64_t)(local_58._8_8_ - local_58._0_8_)) {
            if (7 < (uint64_t)local_58._8_8_) {
              pWStr_15 = (LPCWSTR)local_68._0_8_;
            }
            pWStr_1 = pWStr_15 + local_58._0_8_;
            lVal_3 = local_58._0_8_ * -2;
            local_58._0_8_ = uVal_14;
            func_0x1806ab010(pWStr_1,0,lVal_10 + lVal_3);
            goto LAB_18009166b;
          }
          in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffffffff0000;
          func_0x1800918c0(local_68,uVal_13,local_58._8_8_,uVal_13,in_stack_ffffffffffffff68);
        }
        uVal_14 = local_58._0_8_;
        if ((uint64_t)(local_58._8_8_ - local_58._0_8_) < 4) {
          in_stack_ffffffffffffff68 = 0;
          func_0x1800885f0(local_68);
          auArr_4 = local_68;
        }
        else {
          pWStr_15 = (LPCWSTR)local_68;
          if (7 < (uint64_t)local_58._8_8_) {
            pWStr_15 = (LPCWSTR)local_68._0_8_;
          }
          pU64_2 = (uint64_t *)(pWStr_15 + local_58._0_8_);
          local_58._0_8_ = local_58._0_8_ + 4;
          *pU64_2 = 0x6c006c0064002e;
          pWStr_15[uVal_14 + 4] = L'\0';
          auArr_4 = local_68;
        }
        local_68._0_8_ = local_68;
        if (7 < (uint64_t)local_58._8_8_) {
          local_68._0_8_ = auArr_4._0_8_;
        }
        pWStr_15 = (LPCWSTR)local_68._0_8_;
        local_68 = auArr_4;
        pHnd_6 = LoadLibraryExW(pWStr_15,(HANDLE)0x0,0x1000);
        uVal_14 = local_58._0_8_ - 4;
        if ((uint64_t)local_58._0_8_ < 4) {
          if ((uint64_t)(local_58._8_8_ - local_58._0_8_) < 0xfffffffffffffffc) {
            in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffffffff0000;
            func_0x1800918c0(local_68,0xfffffffffffffffc);
          }
          else {
            pWStr_15 = (LPCWSTR)local_68;
            if (7 < (uint64_t)local_58._8_8_) {
              pWStr_15 = (LPCWSTR)local_68._0_8_;
            }
            pWStr_1 = pWStr_15 + local_58._0_8_;
            local_58._0_8_ = uVal_14;
            func_0x1806ab010(pWStr_1,0,0xfffffffffffffff8);
            pWStr_15[uVal_14] = L'\0';
          }
        }
        else {
          pWStr_15 = (LPCWSTR)local_68;
          if (7 < (uint64_t)local_58._8_8_) {
            pWStr_15 = (LPCWSTR)local_68._0_8_;
          }
          local_58._0_8_ = uVal_14;
          pWStr_15[uVal_14] = L'\0';
        }
        if (pHnd_6 != (HMODULE)0x0) {
          pFn_7 = GetProcAddress(pHnd_6,"DllGetActivationFactory");
          if (pFn_7 != (FARPROC)0x0) {
            local_88 = 0;
            IVar11 = (*pFn_7)(*param_2,&local_88);
            if ((int)IVar11 == 0) {
              *param_4 = local_88;
              *param_1 = 0;
              goto joined_r0x00018009188e;
            }
            if (local_88 != 0) {
              func_0x180091220(&local_88);
            }
          }
          FreeLibrary(pHnd_6);
        }
      }
      Ordinal_201(0,local_70);
      *param_1 = local_74;
joined_r0x00018009188e:
      if (7 < (uint64_t)local_58._8_8_) {
        uVal_14 = local_58._8_8_ * 2 + 2;
        lVal_10 = local_68._0_8_;
        if (0xfff < uVal_14) {
          lVal_10 = *(int64_t *)(local_68._0_8_ + -8);
          if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_10)) {
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_14 = local_58._8_8_ * 2 + 0x29;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_14);
      }
      if (local_70 != 0) {
        func_0x180091220(&local_70);
      }
    }
  }
  else {
    iVal_5 = (*DAT_18083e5a8)(*param_2,param_3,param_4);
    *param_1 = iVal_5;
  }
  return param_1;
}

// Unwind@1800918a0
void Unwind_1800918a0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800918c0
uint64_t * func_0x1800918c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, ushort param_5)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint uVal_5;
  uint uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint8_t auArr_11 [16];
  uint8_t auArr_12 [16];
  uint8_t auArr_13 [16];
  
  uVal_9 = param_1[2];
  if (param_2 <= 0x7ffffffffffffffe - uVal_9) {
    uVal_2 = param_2 + uVal_9 | 7;
    if (uVal_2 < 0x7fffffffffffffff) {
      uVal_8 = param_1[3];
      if (uVal_8 <= 0x7ffffffffffffffe - (uVal_8 >> 1)) {
        uVal_10 = (uVal_8 >> 1) + uVal_8;
        if (uVal_10 < uVal_2) {
          uVal_10 = uVal_2;
        }
        uVal_2 = uVal_10 + 1;
        if (-1 < (int64_t)uVal_2) {
          if (uVal_2 == 0) {
            uVal_2 = 0;
          }
          else if (uVal_2 < 0x800) {
            uVal_2 = func_0x180672de0(uVal_2 * 2);
          }
          else {
            if (0x7fffffffffffffec < uVal_2) goto LAB_180091bb6;
            lVal_1 = func_0x180672de0(uVal_2 * 2 + 0x27);
            uVal_2 = lVal_1 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_2 - 8) = lVal_1;
          }
          param_1[2] = param_2 + uVal_9;
          param_1[3] = uVal_10;
          uVal_5 = (uint)param_5;
          uVal_6 = (uint)param_4;
          if (uVal_8 < 8) {
            func_0x1806aa960(uVal_2,param_1,uVal_9 * 2);
            lVal_1 = uVal_2 + uVal_9 * 2;
            if (param_4 != 0) {
              lVal_4 = lVal_1;
              uVal_8 = param_4;
              if (3 < param_4) {
                if (param_4 < 0x10) {
                  uVal_10 = 0;
                }
                else {
                  uVal_10 = param_4 & 0xfffffffffffffff0;
                  auArr_12 = pshuflw(ZEXT416(uVal_5),ZEXT416(uVal_5),0);
                  auArr_13._0_8_ = auArr_12._0_8_;
                  auArr_13._8_4_ = auArr_12._0_4_;
                  auArr_13._12_4_ = auArr_12._4_4_;
                  lVal_4 = uVal_2 + uVal_9 * 2;
                  uVal_9 = 0;
                  do {
                    *(uint8_t (*)[16])(lVal_4 + uVal_9 * 2) = auArr_13;
                    *(uint8_t (*)[16])(lVal_4 + 0x10 + uVal_9 * 2) = auArr_13;
                    uVal_9 = uVal_9 + 0x10;
                  } while (uVal_10 != uVal_9);
                  if (param_4 == uVal_10) goto LAB_180091b7c;
                  if ((param_4 & 0xc) == 0) {
                    lVal_4 = lVal_1 + uVal_10 * 2;
                    uVal_8 = (uint64_t)(uVal_6 & 0xf);
                    goto LAB_180091b63;
                  }
                }
                uVal_9 = param_4 & 0xfffffffffffffffc;
                lVal_4 = lVal_1 + uVal_9 * 2;
                uVal_8 = (uint64_t)(uVal_6 & 3);
                auArr_12 = pshuflw(ZEXT416(uVal_5),ZEXT416(uVal_5),0);
                do {
                  *(int64_t *)(lVal_1 + uVal_10 * 2) = auArr_12._0_8_;
                  uVal_10 = uVal_10 + 4;
                } while (uVal_9 != uVal_10);
                if (param_4 == uVal_9) goto LAB_180091b7c;
              }
LAB_180091b63:
              uVal_9 = 0;
              do {
                *(ushort *)(lVal_4 + uVal_9 * 2) = param_5;
                uVal_9 = uVal_9 + 1;
              } while (uVal_8 != uVal_9);
            }
LAB_180091b7c:
            *(uint16_t *)(lVal_1 + param_4 * 2) = 0;
            goto LAB_180091b82;
          }
          uVal_10 = *param_1;
          func_0x1806aa960(uVal_2,uVal_10,uVal_9 * 2);
          lVal_1 = uVal_2 + uVal_9 * 2;
          if (param_4 != 0) {
            lVal_4 = lVal_1;
            uVal_7 = param_4;
            if (3 < param_4) {
              if (param_4 < 0x10) {
                uVal_3 = 0;
              }
              else {
                uVal_3 = param_4 & 0xfffffffffffffff0;
                auArr_12 = pshuflw(ZEXT416(uVal_5),ZEXT416(uVal_5),0);
                auArr_11._0_8_ = auArr_12._0_8_;
                auArr_11._8_4_ = auArr_12._0_4_;
                auArr_11._12_4_ = auArr_12._4_4_;
                lVal_4 = uVal_2 + uVal_9 * 2;
                uVal_9 = 0;
                do {
                  *(uint8_t (*)[16])(lVal_4 + uVal_9 * 2) = auArr_11;
                  *(uint8_t (*)[16])(lVal_4 + 0x10 + uVal_9 * 2) = auArr_11;
                  uVal_9 = uVal_9 + 0x10;
                } while (uVal_3 != uVal_9);
                if (param_4 == uVal_3) goto LAB_180091a9c;
                if ((param_4 & 0xc) == 0) {
                  lVal_4 = lVal_1 + uVal_3 * 2;
                  uVal_7 = (uint64_t)(uVal_6 & 0xf);
                  goto LAB_180091a83;
                }
              }
              uVal_9 = param_4 & 0xfffffffffffffffc;
              lVal_4 = lVal_1 + uVal_9 * 2;
              uVal_7 = (uint64_t)(uVal_6 & 3);
              auArr_12 = pshuflw(ZEXT416(uVal_5),ZEXT416(uVal_5),0);
              do {
                *(int64_t *)(lVal_1 + uVal_3 * 2) = auArr_12._0_8_;
                uVal_3 = uVal_3 + 4;
              } while (uVal_9 != uVal_3);
              if (param_4 == uVal_9) goto LAB_180091a9c;
            }
LAB_180091a83:
            uVal_9 = 0;
            do {
              *(ushort *)(lVal_4 + uVal_9 * 2) = param_5;
              uVal_9 = uVal_9 + 1;
            } while (uVal_7 != uVal_9);
          }
LAB_180091a9c:
          *(uint16_t *)(lVal_1 + param_4 * 2) = 0;
          uVal_9 = uVal_8 * 2 + 2;
          uVal_7 = uVal_10;
          if (0xfff < uVal_9) {
            uVal_7 = *(uint64_t *)(uVal_10 - 8);
            if (0x1f < (uVal_10 - 8) - uVal_7) goto LAB_180091bc0;
            uVal_9 = uVal_8 * 2 + 0x29;
          }
          thunk_FUN_180695dd0(uVal_7,uVal_9);
LAB_180091b82:
          *param_1 = uVal_2;
          return param_1;
        }
      }
    }
LAB_180091bb6:
    func_0x18007ba90();
  }
  func_0x18007ba70();
LAB_180091bc0:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x180091be0
uint64_t * func_0x180091be0(int64_t **param_1,uint64_t *param_2,uint64_t *param_3)
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
  local_48 = (char *)0x2200000001;
  local_38 = L"Windows.Storage.Streams.DataWriter";
  local_78 = (int64_t *)0x0;
  local_68 = CONCAT44(local_68._4_4_,0x181f);
  local_60 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/base.h";
  local_58 = 0;
  func_0x180091e10(&local_6c,&local_50,&DAT_1806b068c,&local_78);
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
      local_50 = (char **)0x450;
      local_48 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/windows.Storage.Streams.h"
      ;
      local_40 = 0;
      iVal_3 = (**(func_ptr_t *)(*local_30 + 0x30))(local_30,*(uint64_t *)*param_3,&local_68);
      if (-1 < iVal_3) {
        *param_2 = local_68;
        goto joined_r0x000180091d78;
      }
      goto LAB_180091d96;
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
    local_50 = (char **)CONCAT44(local_50._4_4_,0x450);
    local_48 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/windows.Storage.Streams.h"
    ;
    local_40 = 0;
    iVal_3 = (**(func_ptr_t *)(**param_1 + 0x30))(*param_1,*(uint64_t *)*param_3,&local_68);
    if (-1 < iVal_3) {
      *param_2 = local_68;
      LOCK();
      param_1[1] = (int64_t *)((int64_t)param_1[1] + -1);
      UNLOCK();
joined_r0x000180091d78:
      if (local_30 != (int64_t *)0x0) {
        func_0x180091220(&local_30);
      }
      return param_2;
    }
  }
  iVal_3 = func_0x180090aa0(iVal_3,&local_50);
LAB_180091d96:
  func_0x180090aa0(iVal_3,&local_50);
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_4 = (uint64_t *)(*fnPtr_2)();
  return pU64_4;
}

// Unwind@180091db0
void Unwind_180091db0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  LOCK();
  pLong_1 = (int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  *pLong_1 = *pLong_1 + -1;
  UNLOCK();
  return;
}

// Unwind@180091de0
void Unwind_180091de0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x78) != 0) {
    func_0x180091220(param_2 + 0x78);
  }
  return;
}

// func_0x180091e10
int * func_0x180091e10(int *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *pU64_1;
  int64_t lVal_2;
  uint8_t auArr_3 [16];
  int iVal_4;
  int iVal_5;
  HMODULE pHnd_6;
  FARPROC pFn_7;
  uint64_t uVal_8;
  LPCWSTR pWStr_9;
  int64_t lVal_10;
  INT_PTR IVar11;
  uint8_t *pU64_12;
  uint64_t uVal_13;
  bool bFlag_14;
  uint64_t uVal_15;
  LPCWSTR pWStr_16;
  LPCWSTR pWStr_17;
  uint64_t in_stack_ffffffffffffff68;
  int64_t local_78;
  uint64_t *local_70;
  uint8_t local_68 [16];
  uint8_t local_58 [16];
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (DAT_18083e5a8 == (func_ptr_t )0x0) {
    iVal_4 = RoGetActivationFactory(*param_2,param_3,param_4);
    if (iVal_4 == -0x7ffbfe10) {
      pHnd_6 = LoadLibraryExW(L"combase.dll",(HANDLE)0x0,0x1000);
      pFn_7 = GetProcAddress(pHnd_6,"CoIncrementMTAUsage");
      if (pFn_7 == (FARPROC)0x0) {
        *param_1 = -0x7ffbfe10;
        return param_1;
      }
      (*pFn_7)(local_68);
      iVal_4 = RoGetActivationFactory(*param_2,param_3,param_4);
    }
    if (iVal_4 == 0) {
      *param_1 = 0;
    }
    else {
      local_78 = 0;
      uVal_13 = 0;
      Ordinal_200(0,&local_78);
      local_58 = ZEXT816(0);
      local_68 = ZEXT816(0);
      lVal_10 = *param_2;
      uVal_15 = 7;
      pWStr_16 = (LPCWSTR)local_68;
      if (lVal_10 == 0) {
        pU64_12 = &DAT_1807614ee;
      }
      else {
        pU64_12 = *(uint8_t **)(lVal_10 + 0x10);
        uVal_13 = (uint64_t)*(uint *)(lVal_10 + 4);
        if (7 < uVal_13) {
          uVal_8 = uVal_13 | 7;
          uVal_15 = 10;
          if (10 < uVal_8) {
            uVal_15 = uVal_8;
          }
          if (uVal_8 < 0x7ff) {
            pWStr_16 = (LPCWSTR)func_0x180672de0(uVal_15 * 2 + 2);
          }
          else {
            lVal_10 = func_0x180672de0(uVal_15 * 2 + 0x29);
            pWStr_16 = (LPCWSTR)(lVal_10 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pWStr_16 + -4) = lVal_10;
          }
          local_68._0_8_ = pWStr_16;
        }
      }
      local_58._0_8_ = uVal_13;
      local_58._8_8_ = uVal_15;
      func_0x1806aa960(pWStr_16,pU64_12,uVal_13 * 2);
      pWStr_16[uVal_13] = L'\0';
      do {
        do {
          if (local_58._0_8_ == 0) {
LAB_18009225e:
            Ordinal_201(0,local_78);
            *param_1 = iVal_4;
            goto LAB_18009226e;
          }
          pWStr_16 = (LPCWSTR)local_68;
          if (7 < (uint64_t)local_58._8_8_) {
            pWStr_16 = (LPCWSTR)local_68._0_8_;
          }
          pWStr_17 = pWStr_16 + local_58._0_8_;
          pWStr_9 = (LPCWSTR)thunk_FUN_1806768a0(pWStr_16,pWStr_17,0x2e);
          if ((pWStr_9 == pWStr_17) || (lVal_10 = (int64_t)pWStr_9 - (int64_t)pWStr_16, lVal_10 == -2))
          goto LAB_18009225e;
          uVal_15 = lVal_10 >> 1;
          uVal_13 = uVal_15 - local_58._0_8_;
          pWStr_16 = (LPCWSTR)local_68;
          if (uVal_15 < (uint64_t)local_58._0_8_ || uVal_13 == 0) {
            local_58._0_8_ = uVal_15;
            if (7 < (uint64_t)local_58._8_8_) {
              pWStr_16 = (LPCWSTR)local_68._0_8_;
            }
LAB_18009208b:
            *(uint16_t *)((int64_t)pWStr_16 + lVal_10) = 0;
          }
          else {
            if (uVal_13 <= (uint64_t)(local_58._8_8_ - local_58._0_8_)) {
              if (7 < (uint64_t)local_58._8_8_) {
                pWStr_16 = (LPCWSTR)local_68._0_8_;
              }
              pWStr_9 = pWStr_16 + local_58._0_8_;
              lVal_2 = local_58._0_8_ * -2;
              local_58._0_8_ = uVal_15;
              func_0x1806ab010(pWStr_9,0,lVal_10 + lVal_2);
              goto LAB_18009208b;
            }
            in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffffffff0000;
            func_0x1800918c0(local_68,uVal_13,local_58._8_8_,uVal_13,in_stack_ffffffffffffff68);
          }
          uVal_15 = local_58._0_8_;
          if ((uint64_t)(local_58._8_8_ - local_58._0_8_) < 4) {
            in_stack_ffffffffffffff68 = 0;
            func_0x1800885f0(local_68);
            auArr_3 = local_68;
          }
          else {
            pWStr_16 = (LPCWSTR)local_68;
            if (7 < (uint64_t)local_58._8_8_) {
              pWStr_16 = (LPCWSTR)local_68._0_8_;
            }
            pU64_1 = (uint64_t *)(pWStr_16 + local_58._0_8_);
            local_58._0_8_ = local_58._0_8_ + 4;
            *pU64_1 = 0x6c006c0064002e;
            pWStr_16[uVal_15 + 4] = L'\0';
            auArr_3 = local_68;
          }
          local_68._0_8_ = local_68;
          if (7 < (uint64_t)local_58._8_8_) {
            local_68._0_8_ = auArr_3._0_8_;
          }
          pWStr_16 = (LPCWSTR)local_68._0_8_;
          local_68 = auArr_3;
          pHnd_6 = LoadLibraryExW(pWStr_16,(HANDLE)0x0,0x1000);
          uVal_15 = local_58._0_8_ - 4;
          if ((uint64_t)local_58._0_8_ < 4) {
            if ((uint64_t)(local_58._8_8_ - local_58._0_8_) < 0xfffffffffffffffc) {
              in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffffffff0000;
              func_0x1800918c0(local_68,0xfffffffffffffffc);
            }
            else {
              pWStr_16 = (LPCWSTR)local_68;
              if (7 < (uint64_t)local_58._8_8_) {
                pWStr_16 = (LPCWSTR)local_68._0_8_;
              }
              pWStr_9 = pWStr_16 + local_58._0_8_;
              local_58._0_8_ = uVal_15;
              func_0x1806ab010(pWStr_9,0,0xfffffffffffffff8);
              pWStr_16[uVal_15] = L'\0';
            }
          }
          else {
            pWStr_16 = (LPCWSTR)local_68;
            if (7 < (uint64_t)local_58._8_8_) {
              pWStr_16 = (LPCWSTR)local_68._0_8_;
            }
            local_58._0_8_ = uVal_15;
            pWStr_16[uVal_15] = L'\0';
          }
        } while (pHnd_6 == (HMODULE)0x0);
        pFn_7 = GetProcAddress(pHnd_6,"DllGetActivationFactory");
        if (pFn_7 == (FARPROC)0x0) {
          bFlag_14 = false;
LAB_180091fa5:
          FreeLibrary(pHnd_6);
        }
        else {
          local_70 = (uint64_t *)0x0;
          IVar11 = (*pFn_7)(*param_2,&local_70);
          bFlag_14 = false;
          if ((int)IVar11 == 0) {
            iVal_5 = (**(func_ptr_t *)*local_70)(local_70,param_3,param_4);
            bFlag_14 = false;
            if (iVal_5 == 0) {
              *param_1 = 0;
              bFlag_14 = true;
              pHnd_6 = (HMODULE)0x0;
            }
          }
          if (local_70 != (uint64_t *)0x0) {
            func_0x180091220();
          }
          if (pHnd_6 != (HMODULE)0x0) goto LAB_180091fa5;
        }
      } while (!bFlag_14);
LAB_18009226e:
      if (7 < (uint64_t)local_58._8_8_) {
        uVal_15 = local_58._8_8_ * 2 + 2;
        lVal_10 = local_68._0_8_;
        if (0xfff < uVal_15) {
          lVal_10 = *(int64_t *)(local_68._0_8_ + -8);
          if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_10)) {
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_15 = local_58._8_8_ * 2 + 0x29;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_15);
      }
      if (local_78 != 0) {
        func_0x180091220(&local_78);
      }
    }
  }
  else {
    iVal_4 = (*DAT_18083e5a8)(*param_2,param_3,param_4);
    *param_1 = iVal_4;
  }
  return param_1;
}

// Unwind@1800922d0
void Unwind_1800922d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800922f0
uint64_t func_0x1800922f0(int64_t **param_1)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint64_t uVal_3;
  uint8_t auStack_68 [40];
  uint local_40 [2];
  char *local_38;
  uint64_t local_30;
  uint32_t local_28 [2];
  char *local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  iVal_2 = func_0x1800923d0();
  if (iVal_2 == 0) {
    iVal_2 = func_0x1800924b0(param_1,0xffffffff);
  }
  if (iVal_2 == 2) {
    local_40[0] = 0x1407;
    local_38 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/Windows.Foundation.h"
    ;
    local_30 = 0;
    func_0x180092a20(local_28,local_40);
    iVal_2 = func_0x18067a120(local_28,&DAT_180768be0);
  }
  else {
    local_40[0] = 0;
    local_28[0] = 0x172;
    local_20 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\Windows.Foundation.h"
    ;
    local_18 = 0;
    iVal_2 = (**(func_ptr_t *)(**param_1 + 0x40))(*param_1,local_40);
    if (-1 < iVal_2) {
      if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_68)) {
        return (uint64_t)local_40[0];
      }
      goto LAB_1800923c1;
    }
  }
  func_0x180090aa0(iVal_2,local_28);
LAB_1800923c1:
  func_0x180673080(local_10 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_3 = (*fnPtr_1)();
  return uVal_3;
}

// func_0x1800923d0
uint64_t func_0x1800923d0(uint64_t *param_1)
{
  func_ptr_t fnPtr_1;
  int64_t *pLong_2;
  int iVal_3;
  uint64_t uVal_4;
  uint64_t local_38;
  char *local_30;
  uint64_t local_28;
  int64_t *local_20;
  uint local_14;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_14 = 0;
  local_38 = (int64_t *)0x0;
  iVal_3 = (***(func_ptr_t **)(uint64_t *)*param_1)((uint64_t *)*param_1,&DAT_1806b069c,&local_38);
  pLong_2 = local_38;
  local_20 = local_38;
  local_38 = (int64_t *)CONCAT44(local_38._4_4_,0xaf);
  local_30 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\Windows.Foundation.h"
  ;
  local_28 = 0;
  if (iVal_3 < 0) {
    iVal_3 = func_0x180090aa0(iVal_3,&local_38);
  }
  else {
    local_38 = (int64_t *)CONCAT44(local_38._4_4_,0xb1);
    local_30 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\Windows.Foundation.h"
    ;
    local_28 = 0;
    iVal_3 = (**(func_ptr_t *)(*pLong_2 + 0x38))(pLong_2,&local_14);
    if (-1 < iVal_3) {
      if (local_20 != (int64_t *)0x0) {
        func_0x180091220(&local_20);
      }
      return (uint64_t)local_14;
    }
  }
  func_0x180090aa0(iVal_3,&local_38);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_1)();
  return uVal_4;
}

// Unwind@180092480
void Unwind_180092480(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x38) != 0) {
    func_0x180091220(param_2 + 0x38);
  }
  return;
}

// func_0x1800924b0
uint64_t func_0x1800924b0(int64_t **param_1,DWORD param_2)
{
  uint uVal_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  uint64_t *pU64_4;
  uint64_t uVal_5;
  uint64_t *local_60;
  uint64_t *local_58;
  uint32_t local_50 [2];
  char *local_48;
  uint64_t local_40;
  HANDLE local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_50[0] = 0x13f4;
  local_48 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\Windows.Foundation.h"
  ;
  local_40 = 0;
  local_38 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  if (local_38 == (HANDLE)0x0) {
    iVal_3 = func_0x1800929f0(local_50);
  }
  else {
    pU64_4 = (uint64_t *)func_0x180672de0(0x20);
    *(uint32_t *)(pU64_4 + 1) = 1;
    local_58 = pU64_4 + 2;
    pU64_4[2] = local_38;
    *(uint32_t *)(pU64_4 + 3) = 0;
    LOCK();
    DAT_18083eba0 = DAT_18083eba0 + 1;
    UNLOCK();
    *pU64_4 = &PTR_LAB_1806b06b0;
    local_50[0] = 0x14f;
    local_48 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\Windows.Foundation.h"
    ;
    local_40 = 0;
    local_60 = pU64_4;
    iVal_3 = (**(func_ptr_t *)(**param_1 + 0x30))(*param_1,pU64_4);
    if (-1 < iVal_3) {
      WaitForSingleObject((HANDLE)pU64_4[2],param_2);
      uVal_1 = *(uint *)(pU64_4 + 3);
      func_0x180091220(&local_60);
      return (uint64_t)uVal_1;
    }
  }
  func_0x180090aa0(iVal_3,local_50);
  fnPtr_2 = (func_ptr_t )swi(3);
  uVal_5 = (*fnPtr_2)();
  return uVal_5;
}

// Unwind@1800925b0
void Unwind_1800925b0(uint64_t param_1,int64_t param_2)
{
  CloseHandle(*(HANDLE *)(param_2 + 0x50));
  return;
}

// Unwind@1800925e0
void Unwind_1800925e0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x28) != 0) {
    func_0x180091220(param_2 + 0x28);
  }
  return;
}

// func_0x1800926d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x1800926d0(uint64_t param_1,uint8_t (*param_2)[16],int64_t **param_3,int64_t *param_4, uint8_t (*param_5)[16])
{
  uint64_t uVal_1;
  int64_t *pLong_2;
  IUnknown *local_30;
  void *local_28;
  
  if (((*param_5 == *param_2) || (*param_2 == _DAT_1806aeb80)) || (*param_2 == _DAT_1806aeb90)) {
    *param_3 = param_4;
    func_0x180092840();
    uVal_1 = 0;
  }
  else if (*param_2 == _DAT_1806aeba0) {
    pLong_2 = (int64_t *)func_0x180672e30(0x20,&PTR_1806df710);
    if (pLong_2 == (int64_t *)0x0) {
      uVal_1 = 0x8007000e;
      *param_3 = (int64_t *)0x0;
    }
    else {
      *pLong_2 = (int64_t)&PTR_LAB_1806b06e0;
      pLong_2[1] = 0;
      local_30 = (IUnknown *)0x0;
      CoCreateFreeThreadedMarshaler((LPUNKNOWN)0x0,&local_30);
      if (local_30 == (IUnknown *)0x0) {
        pLong_2[2] = 0;
      }
      else {
        local_28 = (void *)0x0;
        (*local_30->lpVtbl->QueryInterface)(local_30,(IID *)&DAT_1806b06d0,&local_28);
        pLong_2[2] = (int64_t)local_28;
        if (local_30 != (IUnknown *)0x0) {
          func_0x180091220(&local_30);
        }
      }
      *(uint32_t *)(pLong_2 + 3) = 1;
      if ((int64_t *)pLong_2[1] != param_4) {
        if ((int64_t *)pLong_2[1] != (int64_t *)0x0) {
          func_0x180091220(pLong_2 + 1);
        }
        pLong_2[1] = (int64_t)param_4;
        if (param_4 != (int64_t *)0x0) {
          (**(func_ptr_t *)(*param_4 + 8))();
        }
      }
      uVal_1 = 0;
      *param_3 = pLong_2;
    }
  }
  else {
    *param_3 = (int64_t *)0x0;
    uVal_1 = 0x80004002;
  }
  return uVal_1;
}

// func_0x180092840
int func_0x180092840(int *param_1)
{
  int iVal_1;
  
  LOCK();
  iVal_1 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  return iVal_1 + 1;
}

// func_0x1800929c0
void func_0x1800929c0(int *param_1)
{
  int iVal_1;
  
  LOCK();
  iVal_1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  if (iVal_1 == 1) {
    return;
  }
  if (0 < iVal_1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x1800929f0
void func_0x1800929f0(uint64_t param_1)
{
  func_ptr_t fnPtr_1;
  DWORD DVar2;
  DWORD DVar3;
  
  DVar3 = GetLastError();
  DVar2 = DVar3 & 0xffff | 0x80070000;
  if ((int)DVar3 < 1) {
    DVar2 = DVar3;
  }
  func_0x180090aa0(DVar2,param_1);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180092a20
uint64_t * func_0x180092a20(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = 0;
  param_1[1] = 0x800704c7aabbccdd;
  param_1[2] = 0;
  func_0x180091140(param_1,0x800704c7,0,param_2);
  return param_1;
}

// func_0x180092a60
uint64_t func_0x180092a60(int64_t **param_1)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint64_t uVal_3;
  uint8_t auStack_68 [40];
  uint local_40 [2];
  char *local_38;
  uint64_t local_30;
  uint32_t local_28 [2];
  char *local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  iVal_2 = func_0x1800923d0();
  if (iVal_2 == 0) {
    iVal_2 = func_0x180092b40(param_1,0xffffffff);
  }
  if (iVal_2 == 2) {
    local_40[0] = 0x1407;
    local_38 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/Windows.Foundation.h"
    ;
    local_30 = 0;
    func_0x180092a20(local_28,local_40);
    iVal_2 = func_0x18067a120(local_28,&DAT_180768be0);
  }
  else {
    local_40[0] = local_40[0] & 0xffffff00;
    local_28[0] = 0x172;
    local_20 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\Windows.Foundation.h"
    ;
    local_18 = 0;
    iVal_2 = (**(func_ptr_t *)(**param_1 + 0x40))(*param_1,local_40);
    if (-1 < iVal_2) {
      if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_68)) {
        return (uint64_t)(byte)local_40[0];
      }
      goto LAB_180092b2f;
    }
  }
  func_0x180090aa0(iVal_2,local_28);
LAB_180092b2f:
  func_0x180673080(local_10 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_3 = (*fnPtr_1)();
  return uVal_3;
}

// func_0x180092b40
uint64_t func_0x180092b40(int64_t **param_1,DWORD param_2)
{
  uint uVal_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  uint64_t *pU64_4;
  uint64_t uVal_5;
  uint64_t *local_60;
  uint64_t *local_58;
  uint32_t local_50 [2];
  char *local_48;
  uint64_t local_40;
  HANDLE local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_50[0] = 0x13f4;
  local_48 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\Windows.Foundation.h"
  ;
  local_40 = 0;
  local_38 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  if (local_38 == (HANDLE)0x0) {
    iVal_3 = func_0x1800929f0(local_50);
  }
  else {
    pU64_4 = (uint64_t *)func_0x180672de0(0x20);
    *(uint32_t *)(pU64_4 + 1) = 1;
    local_58 = pU64_4 + 2;
    pU64_4[2] = local_38;
    *(uint32_t *)(pU64_4 + 3) = 0;
    LOCK();
    DAT_18083eba0 = DAT_18083eba0 + 1;
    UNLOCK();
    *pU64_4 = &PTR_LAB_1806b0740;
    local_50[0] = 0x14f;
    local_48 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\Windows.Foundation.h"
    ;
    local_40 = 0;
    local_60 = pU64_4;
    iVal_3 = (**(func_ptr_t *)(**param_1 + 0x30))(*param_1,pU64_4);
    if (-1 < iVal_3) {
      WaitForSingleObject((HANDLE)pU64_4[2],param_2);
      uVal_1 = *(uint *)(pU64_4 + 3);
      func_0x180091220(&local_60);
      return (uint64_t)uVal_1;
    }
  }
  func_0x180090aa0(iVal_3,local_50);
  fnPtr_2 = (func_ptr_t )swi(3);
  uVal_5 = (*fnPtr_2)();
  return uVal_5;
}

// Unwind@180092c40
void Unwind_180092c40(uint64_t param_1,int64_t param_2)
{
  CloseHandle(*(HANDLE *)(param_2 + 0x50));
  return;
}

// Unwind@180092c70
void Unwind_180092c70(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x28) != 0) {
    func_0x180091220(param_2 + 0x28);
  }
  return;
}

// func_0x180092cd0
uint64_t * func_0x180092cd0(int64_t **param_1,uint64_t *param_2,uint64_t *param_3)
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
  local_48 = (char *)0x3300000001;
  local_38 = L"Windows.Storage.Streams.RandomAccessStreamReference";
  local_78 = (int64_t *)0x0;
  local_68 = CONCAT44(local_68._4_4_,0x181f);
  local_60 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/base.h";
  local_58 = 0;
  func_0x180091e10(&local_6c,&local_50,&DAT_1806b0770,&local_78);
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
      local_50 = (char **)0x630;
      local_48 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/windows.Storage.Streams.h"
      ;
      local_40 = 0;
      iVal_3 = (**(func_ptr_t *)(*local_30 + 0x40))(local_30,*(uint64_t *)*param_3,&local_68);
      if (-1 < iVal_3) {
        *param_2 = local_68;
        goto joined_r0x000180092e68;
      }
      goto LAB_180092e86;
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
    local_50 = (char **)CONCAT44(local_50._4_4_,0x630);
    local_48 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/windows.Storage.Streams.h"
    ;
    local_40 = 0;
    iVal_3 = (**(func_ptr_t *)(**param_1 + 0x40))(*param_1,*(uint64_t *)*param_3,&local_68);
    if (-1 < iVal_3) {
      *param_2 = local_68;
      LOCK();
      param_1[1] = (int64_t *)((int64_t)param_1[1] + -1);
      UNLOCK();
joined_r0x000180092e68:
      if (local_30 != (int64_t *)0x0) {
        func_0x180091220(&local_30);
      }
      return param_2;
    }
  }
  iVal_3 = func_0x180090aa0(iVal_3,&local_50);
LAB_180092e86:
  func_0x180090aa0(iVal_3,&local_50);
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_4 = (uint64_t *)(*fnPtr_2)();
  return pU64_4;
}

// Unwind@180092ea0
void Unwind_180092ea0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  LOCK();
  pLong_1 = (int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  *pLong_1 = *pLong_1 + -1;
  UNLOCK();
  return;
}

// Unwind@180092ed0
void Unwind_180092ed0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x78) != 0) {
    func_0x180091220(param_2 + 0x78);
  }
  return;
}

// func_0x180092f00
uint64_t func_0x180092f00(int64_t *param_1,uint64_t param_2,func_ptr_t *param_3)
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
  local_60[0] = 0x3100000001;
  local_50 = L"Windows.ApplicationModel.DataTransfer.DataPackage";
  local_48 = (uint64_t *)0x0;
  local_80 = (uint64_t *)CONCAT44(local_80._4_4_,0x181f);
  local_78 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/base.h";
  local_70 = 0;
  func_0x1800913f0(&local_34,&local_68,&DAT_1806b066c,&local_48);
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
      goto LAB_180093012;
    }
  }
  (**param_3)(param_2,&local_30);
LAB_180093012:
  if (local_30 != (uint64_t *)0x0) {
    func_0x180091220(&local_30);
  }
  return param_2;
}

// Unwind@180093040
void Unwind_180093040(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  LOCK();
  pLong_1 = (int64_t *)(*(int64_t *)(param_2 + 0x68) + 8);
  *pLong_1 = *pLong_1 + -1;
  UNLOCK();
  return;
}

// Unwind@180093070
void Unwind_180093070(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x78) != 0) {
    func_0x180091220(param_2 + 0x78);
  }
  return;
}

// Unwind@180093150
void Unwind_180093150(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x38) != 0) {
    func_0x180091220(param_2 + 0x38);
  }
  return;
}

// func_0x180093190
void func_0x180093190(int64_t **param_1,uint64_t *param_2)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  uint64_t local_78;
  char *local_70;
  uint64_t local_68;
  int64_t **local_60;
  int64_t *local_58;
  int local_4c;
  uint64_t local_48;
  char *local_40;
  uint64_t local_38;
  wchar_t *local_30;
  int64_t *local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_48 = &local_40;
  local_40 = (char *)0x2f00000001;
  local_30 = L"Windows.ApplicationModel.DataTransfer.Clipboard";
  local_58 = (int64_t *)0x0;
  local_78 = CONCAT44(local_78._4_4_,0x181f);
  local_70 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/base.h";
  local_68 = 0;
  func_0x180091e10(&local_4c,&local_48,&DAT_1806b0790,&local_58);
  if (local_4c < 0) {
    iVal_3 = func_0x180090aa0(local_4c,&local_78);
  }
  else {
    local_28 = local_58;
    local_48 = (char **)0x0;
    (**(func_ptr_t *)*local_58)(local_58,&DAT_1806b067c,&local_48);
    local_78 = (int64_t)local_48;
    if (local_48 == (char **)0x0) {
      local_48 = (char **)0xf7;
      local_40 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/windows.ApplicationModel.DataTransfer.h"
      ;
      local_38 = 0;
      iVal_3 = (**(func_ptr_t *)(*local_28 + 0x38))(local_28,*(uint64_t *)*param_2);
      if (-1 < iVal_3) goto LAB_1800932d8;
      goto LAB_18009330e;
    }
    func_0x180091220(&local_78);
    LOCK();
    param_1[1] = (int64_t *)((int64_t)param_1[1] + 1);
    UNLOCK();
    LOCK();
    pLong_1 = *param_1;
    if (pLong_1 == (int64_t *)0x0) {
      *param_1 = local_28;
    }
    UNLOCK();
    if (pLong_1 == (int64_t *)0x0) {
      local_28 = (int64_t *)0x0;
      InterlockedPushEntrySList((PSLIST_HEADER)&DAT_18083eb70,(PSLIST_ENTRY)(param_1 + 2));
    }
    local_48 = (char **)CONCAT44(local_48._4_4_,0xf7);
    local_40 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/windows.ApplicationModel.DataTransfer.h"
    ;
    local_38 = 0;
    iVal_3 = (**(func_ptr_t *)(**param_1 + 0x38))(*param_1,*(uint64_t *)*param_2);
    if (-1 < iVal_3) {
      LOCK();
      param_1[1] = (int64_t *)((int64_t)param_1[1] + -1);
      UNLOCK();
LAB_1800932d8:
      if (local_28 != (int64_t *)0x0) {
        func_0x180091220(&local_28);
      }
      return;
    }
  }
  local_60 = param_1;
  iVal_3 = func_0x180090aa0(iVal_3,&local_48);
LAB_18009330e:
  func_0x180090aa0(iVal_3,&local_48);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// Unwind@180093320
void Unwind_180093320(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  LOCK();
  pLong_1 = (int64_t *)(*(int64_t *)(param_2 + 0x38) + 8);
  *pLong_1 = *pLong_1 + -1;
  UNLOCK();
  return;
}

// Unwind@180093350
void Unwind_180093350(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x70) != 0) {
    func_0x180091220(param_2 + 0x70);
  }
  return;
}

// func_0x180093380
void func_0x180093380(int64_t *param_1,func_ptr_t *param_2)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  uint64_t local_78;
  char *local_70;
  uint64_t local_68;
  uint64_t *local_60;
  uint64_t local_58 [2];
  wchar_t *local_48;
  uint64_t *local_40;
  int64_t *local_38;
  int local_2c;
  uint64_t *local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_60 = local_58;
  local_58[0] = 0x2f00000001;
  local_48 = L"Windows.ApplicationModel.DataTransfer.Clipboard";
  local_40 = (uint64_t *)0x0;
  local_78 = (uint64_t *)CONCAT44(local_78._4_4_,0x181f);
  local_70 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/base.h";
  local_68 = 0;
  func_0x180091e10(&local_2c,&local_60,&DAT_1806b0790,&local_40);
  if (local_2c < 0) {
    func_0x180090aa0(local_2c,&local_78);
    fnPtr_2 = (func_ptr_t )swi(3);
    (*fnPtr_2)();
    return;
  }
  local_28 = local_40;
  if (local_40 != (uint64_t *)0x0) {
    local_60 = (uint64_t *)0x0;
    (**(func_ptr_t *)*local_40)(local_40,&DAT_1806b067c,&local_60);
    local_78 = local_60;
    if (local_60 != (uint64_t *)0x0) {
      func_0x180091220(&local_78);
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
      LOCK();
      lVal_1 = *param_1;
      if (lVal_1 == 0) {
        *param_1 = (int64_t)local_28;
      }
      UNLOCK();
      if (lVal_1 == 0) {
        local_28 = (uint64_t *)0x0;
        InterlockedPushEntrySList((PSLIST_HEADER)&DAT_18083eb70,(PSLIST_ENTRY)(param_1 + 2));
      }
      local_38 = param_1;
      (**param_2)(param_1);
      LOCK();
      local_38[1] = local_38[1] + -1;
      UNLOCK();
      goto LAB_180093488;
    }
  }
  (**param_2)(&local_28);
LAB_180093488:
  if (local_28 != (uint64_t *)0x0) {
    func_0x180091220(&local_28);
  }
  return;
}

// Unwind@1800934b0
void Unwind_1800934b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  LOCK();
  pLong_1 = (int64_t *)(*(int64_t *)(param_2 + 0x60) + 8);
  *pLong_1 = *pLong_1 + -1;
  UNLOCK();
  return;
}

// Unwind@1800934e0
void Unwind_1800934e0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x70) != 0) {
    func_0x180091220(param_2 + 0x70);
  }
  return;
}

// func_0x1800935b0
void func_0x1800935b0(uint64_t *param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t *pU64_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  *param_1 = &PTR_LAB_1806b07a0;
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    lVal_2 = *(int64_t *)param_1[8];
    lVal_4 = 0x58;
    if (lVal_2 == 0) {
      lVal_2 = *(int64_t *)param_1[7];
      lVal_4 = 0x50;
    }
    lVal_1 = *(int64_t *)param_1[3];
    uVal_5 = (**(int **)((int64_t)param_1 + lVal_4) + lVal_2) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_5) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_5);
  }
  *(uint64_t *)param_1[3] = 0;
  *(uint64_t *)param_1[7] = 0;
  *(uint32_t *)param_1[10] = 0;
  *(uint64_t *)param_1[4] = 0;
  *(uint64_t *)param_1[8] = 0;
  *(uint32_t *)param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfe;
  *param_1 = &PTR_LAB_1806b0210;
  lVal_2 = param_1[0xc];
  if (lVal_2 != 0) {
    if (*(int64_t **)(lVal_2 + 8) != (int64_t *)0x0) {
      pU64_3 = (uint64_t *)(**(func_ptr_t *)(**(int64_t **)(lVal_2 + 8) + 0x10))();
      if (pU64_3 != (uint64_t *)0x0) {
        (**(func_ptr_t *)*pU64_3)(pU64_3,1);
      }
    }
    thunk_FUN_180695dd0(lVal_2,0x10);
    return;
  }
  return;
}

// func_0x180093c60
uint8_t (*func_0x180093c60(uint8_t (*param_1)[16],uint64_t param_2,uint32_t *param_3))[16]
{
  uint32_t *pU64_1;
  uint64_t *pU64_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  func_ptr_t fnPtr_5;
  char ch_6;
  uint8_t (*pArr16_7)[16];
  uint64_t *pU64_8;
  int64_t lVal_9;
  uint8_t auStack_108 [32];
  uint8_t local_e8 [8];
  uint32_t uStack_e0;
  uint32_t uStack_dc;
  uint8_t local_d8 [8];
  uint32_t uStack_d0;
  uint32_t uStack_cc;
  uint64_t local_c8;
  uint32_t *local_c0;
  uint32_t *local_b8;
  uint64_t local_a8;
  uint64_t uStack_a0;
  uint8_t local_98 [8];
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint64_t local_88;
  uint32_t *local_80;
  uint32_t *local_78;
  uint8_t local_68 [16];
  uint8_t local_58 [16];
  uint64_t local_48;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_108;
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  pU64_2 = *(uint64_t **)(param_3 + 0xc);
  pU64_8 = pU64_2;
  if (0xf < (uint64_t)pU64_2[3]) {
    pU64_8 = (uint64_t *)*pU64_2;
  }
  pU64_1 = param_3 + 0xc;
  lVal_3 = pU64_2[2];
  if (*(char *)(param_3 + 10) == '\x01') {
    local_c8 = *(uint64_t *)(param_3 + 8);
    local_a8._0_4_ = *param_3;
    local_a8._4_4_ = param_3[1];
    uStack_a0._0_4_ = param_3[2];
    uStack_a0._4_4_ = param_3[3];
    local_98._0_4_ = param_3[4];
    local_98._4_4_ = param_3[5];
    uStack_90 = param_3[6];
    uStack_8c = param_3[7];
  }
  else {
    func_0x180094370(&local_a8,pU64_1,param_3 + 0x16);
    *(uint64_t *)(param_3 + 8) = local_88;
    param_3[4] = local_98._0_4_;
    param_3[5] = local_98._4_4_;
    param_3[6] = uStack_90;
    param_3[7] = uStack_8c;
    *param_3 = (uint32_t)local_a8;
    param_3[1] = local_a8._4_4_;
    param_3[2] = (uint32_t)uStack_a0;
    param_3[3] = uStack_a0._4_4_;
    *(uint8_t *)(param_3 + 10) = 1;
    local_c8 = local_88;
  }
  uStack_d0 = uStack_90;
  local_d8 = (uint8_t  [8])CONCAT44(local_98._4_4_,local_98._0_4_);
  uStack_cc = uStack_8c;
  uStack_e0 = (uint32_t)uStack_a0;
  local_e8 = (uint8_t  [8])local_a8;
  uStack_dc = uStack_a0._4_4_;
  local_88 = local_c8;
  local_98 = (uint8_t  [8])CONCAT44(local_98._4_4_,local_98._0_4_);
  if ((uStack_a0 == (int64_t)pU64_8 + lVal_3) && ((char)local_c8 == '\0')) {
    lVal_9 = 0;
    ch_6 = '\x01';
    pU64_2 = *(uint64_t **)(param_3 + 0xc);
    uVal_4 = pU64_2[3];
  }
  else {
    lVal_9 = 0;
    local_80 = param_3;
    local_78 = param_3;
    do {
      do {
        lVal_9 = lVal_9 + 1;
        func_0x180094000(&local_a8);
      } while (uStack_a0 != (int64_t)pU64_8 + lVal_3);
    } while ((char)local_88 != '\0');
    ch_6 = *(char *)(param_3 + 10);
    pU64_2 = *(uint64_t **)(param_3 + 0xc);
    uVal_4 = pU64_2[3];
  }
  pU64_8 = pU64_2;
  if (0xf < uVal_4) {
    pU64_8 = (uint64_t *)*pU64_2;
  }
  uStack_a0 = (int64_t)pU64_8 + pU64_2[2];
  _local_98 = ZEXT816(0);
  local_88 = local_88 & 0xffffffffffffff00;
  local_a8 = pU64_1;
  if (ch_6 == '\0') {
    local_80 = param_3;
    local_78 = param_3;
    func_0x180094370(local_e8,pU64_1,param_3 + 0x16);
    *(uint64_t *)(param_3 + 8) = local_c8;
    param_3[4] = local_d8._0_4_;
    param_3[5] = local_d8._4_4_;
    param_3[6] = uStack_d0;
    param_3[7] = uStack_cc;
    *param_3 = local_e8._0_4_;
    param_3[1] = local_e8._4_4_;
    param_3[2] = uStack_e0;
    param_3[3] = uStack_dc;
    *(uint8_t *)(param_3 + 10) = 1;
    local_48 = local_c8;
  }
  else {
    local_48 = *(uint64_t *)(param_3 + 8);
    local_e8._0_4_ = *param_3;
    local_e8._4_4_ = param_3[1];
    uStack_e0 = param_3[2];
    uStack_dc = param_3[3];
    local_d8._0_4_ = param_3[4];
    local_d8._4_4_ = param_3[5];
    uStack_d0 = param_3[6];
    uStack_cc = param_3[7];
    local_80 = param_3;
    local_78 = param_3;
  }
  local_58._8_4_ = uStack_d0;
  local_58._0_8_ = CONCAT44(local_d8._4_4_,local_d8._0_4_);
  local_58._12_4_ = uStack_cc;
  local_68._8_4_ = uStack_e0;
  local_68._0_8_ = CONCAT44(local_e8._4_4_,local_e8._0_4_);
  local_68._12_4_ = uStack_dc;
  local_c8 = local_48;
  local_d8 = (uint8_t  [8])CONCAT44(local_d8._4_4_,local_d8._0_4_);
  local_e8 = (uint8_t  [8])CONCAT44(local_e8._4_4_,local_e8._0_4_);
  local_c0 = param_3;
  local_b8 = param_3;
  func_0x180093ed0(param_1,lVal_9,local_e8,&local_a8);
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_108)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_108);
  fnPtr_5 = (func_ptr_t )swi(3);
  pArr16_7 = (uint8_t (*)[16])(*fnPtr_5)();
  return pArr16_7;
}

// func_0x180093ed0
void func_0x180093ed0(uint64_t *param_1,uint64_t param_2,uint32_t *param_3,uint32_t *param_4)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint32_t local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint64_t local_88;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint64_t local_48;
  uint64_t *local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (param_2 >> 0x3b != 0) {
      func_0x18007c0d0();
LAB_180093fc9:
      func_0x18007ba90();
      fnPtr_1 = (func_ptr_t )swi(3);
      (*fnPtr_1)();
      return;
    }
    lVal_4 = param_2 * 0x20;
    if (param_2 < 0x80) {
      uVal_3 = func_0x180672de0(lVal_4);
    }
    else {
      if (param_2 == 0x7ffffffffffffff) goto LAB_180093fc9;
      lVal_2 = func_0x180672de0(lVal_4 + 0x27);
      uVal_3 = lVal_2 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_3 - 8) = lVal_2;
    }
    *param_1 = uVal_3;
    param_1[1] = uVal_3;
    param_1[2] = lVal_4 + uVal_3;
    local_b8 = *param_4;
    uStack_b4 = param_4[1];
    uStack_b0 = param_4[2];
    uStack_ac = param_4[3];
    local_a8 = param_4[4];
    uStack_a4 = param_4[5];
    uStack_a0 = param_4[6];
    uStack_9c = param_4[7];
    local_98 = param_4[8];
    uStack_94 = param_4[9];
    uStack_90 = param_4[10];
    uStack_8c = param_4[0xb];
    local_88 = *(uint64_t *)(param_4 + 0xc);
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    local_68 = param_3[4];
    uStack_64 = param_3[5];
    uStack_60 = param_3[6];
    uStack_5c = param_3[7];
    local_58 = param_3[8];
    uStack_54 = param_3[9];
    uStack_50 = param_3[10];
    uStack_4c = param_3[0xb];
    local_48 = *(uint64_t *)(param_3 + 0xc);
    local_38 = param_1;
    uVal_3 = func_0x1800941c0(&local_78,&local_b8,local_58,param_1);
    param_1[1] = uVal_3;
  }
  return;
}

// Unwind@180093fd0
void Unwind_180093fd0(uint64_t param_1,int64_t param_2)
{
  func_0x1800809f0(param_2 + 0xa0);
  return;
}

// func_0x180094000
int64_t ** func_0x180094000(int64_t **param_1)
{
  uint32_t uVal_1;
  uint64_t *pU64_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int64_t *pLong_5;
  int64_t *pLong_6;
  uint64_t *pU64_7;
  int64_t *pLong_8;
  char ch_9;
  int64_t *pLong_10;
  int64_t *pLong_11;
  uint64_t *pU64_12;
  int64_t *pLong_13;
  uint8_t local_45;
  undefined3 uStack_44;
  uint64_t *pU64_14;
  
  pU64_2 = (uint64_t *)param_1[5][6];
  pU64_12 = pU64_2;
  if (0xf < (uint64_t)pU64_2[3]) {
    pU64_12 = (uint64_t *)*pU64_2;
  }
  pLong_10 = *param_1;
  pLong_4 = param_1[2];
  pU64_14 = (uint64_t *)*pLong_10;
  pU64_7 = pU64_14;
  if (0xf < (uint64_t)pU64_14[3]) {
    pU64_7 = (uint64_t *)*pU64_14;
  }
  lVal_3 = pU64_2[2];
  pLong_8 = (int64_t *)((int64_t)pU64_7 + pU64_14[2]);
  param_1[1] = pLong_4;
  if (pLong_8 == pLong_4) {
    *(uint8_t *)(param_1 + 4) = 0;
    pLong_8 = param_1[3];
    ch_9 = '\0';
    pLong_6 = pLong_4;
  }
  else {
    pLong_4 = param_1[3];
    param_1[1] = pLong_4;
    if (pLong_8 == pLong_4) {
      *(uint8_t *)(param_1 + 4) = 1;
      param_1[2] = pLong_4;
      param_1[3] = pLong_4;
      ch_9 = '\x01';
      pLong_8 = pLong_4;
      pLong_6 = pLong_4;
    }
    else {
      pLong_4 = (int64_t *)thunk_FUN_180676d20(pLong_4,pLong_8,pLong_10 + 1,1);
      pLong_8 = (int64_t *)((uint64_t)(pLong_4 != pLong_8) + (int64_t)pLong_4);
      param_1[2] = pLong_4;
      param_1[3] = pLong_8;
      pLong_10 = *param_1;
      ch_9 = *(char *)(param_1 + 4);
      pLong_6 = param_1[1];
    }
  }
  uVal_1 = *(uint32_t *)((int64_t)param_1 + 0x21);
  uStack_44 = (undefined3)((uint)*(uint32_t *)((int64_t)param_1 + 0x24) >> 8);
  if (pLong_6 == (int64_t *)((int64_t)pU64_12 + lVal_3) && ch_9 == '\0') {
    ch_9 = '\0';
  }
  else if (pLong_6 == pLong_4) {
    pLong_5 = pLong_4;
    pLong_11 = pLong_4;
    do {
      pLong_4 = pLong_8;
      pU64_2 = (uint64_t *)*pLong_10;
      pU64_14 = pU64_2;
      if (0xf < (uint64_t)pU64_2[3]) {
        pU64_14 = (uint64_t *)*pU64_2;
      }
      pLong_13 = (int64_t *)((int64_t)pU64_14 + pU64_2[2]);
      pLong_8 = pLong_4;
      if (pLong_13 == pLong_11) {
        ch_9 = '\0';
        pLong_6 = pLong_5;
joined_r0x000180094108:
        pLong_4 = pLong_5;
        if ((pLong_11 == (int64_t *)((int64_t)pU64_12 + lVal_3)) && (ch_9 == '\0')) {
          ch_9 = '\0';
          break;
        }
      }
      else {
        pLong_6 = pLong_4;
        pLong_11 = pLong_4;
        if (pLong_13 != pLong_4) {
          pLong_5 = (int64_t *)thunk_FUN_180676d20(pLong_4,pLong_13,pLong_10 + 1,1);
          pLong_8 = (int64_t *)((uint64_t)(pLong_5 != pLong_13) + (int64_t)pLong_5);
          goto joined_r0x000180094108;
        }
        ch_9 = '\x01';
      }
      pLong_5 = pLong_4;
    } while (pLong_11 == pLong_4);
  }
  *param_1 = pLong_10;
  param_1[1] = pLong_6;
  param_1[2] = pLong_4;
  param_1[3] = pLong_8;
  *(char *)(param_1 + 4) = ch_9;
  local_45 = (uint8_t)((uint)uVal_1 >> 0x18);
  *(uint *)((int64_t)param_1 + 0x24) = CONCAT31(uStack_44,local_45);
  *(uint32_t *)((int64_t)param_1 + 0x21) = uVal_1;
  return param_1;
}

// func_0x1800941c0
uint8_t (*func_0x1800941c0(uint32_t *param_1,int64_t param_2,uint8_t (*param_3)[16],uint64_t param_4))[16]
{
  char ch_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint8_t (*pArr16_7)[16];
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint8_t *pU64_10;
  uint32_t local_d8;
  uint32_t uStack_d4;
  uint32_t uStack_d0;
  uint32_t uStack_cc;
  uint32_t local_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint32_t local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint64_t local_a8;
  uint8_t (*local_a0)[16];
  uint8_t (*local_98)[16];
  uint64_t local_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_a8 = *(uint64_t *)(param_1 + 0xc);
  local_d8 = *param_1;
  uStack_d4 = param_1[1];
  uStack_d0 = param_1[2];
  uStack_cc = param_1[3];
  local_c8 = param_1[4];
  uStack_c4 = param_1[5];
  uStack_c0 = param_1[6];
  uStack_bc = param_1[7];
  local_b8 = param_1[8];
  uStack_b4 = param_1[9];
  uStack_b0 = param_1[10];
  uStack_ac = param_1[0xb];
  lVal_2 = *(int64_t *)(param_2 + 8);
  ch_1 = *(char *)(param_2 + 0x20);
  local_a0 = param_3;
  local_98 = param_3;
  local_90 = param_4;
  while ((lVal_4 = CONCAT44(uStack_cc,uStack_d0), lVal_4 != lVal_2 || ((char)local_b8 != ch_1))) {
    _local_88 = ZEXT816(0);
    _local_78 = ZEXT816(0);
    uVal_8 = CONCAT44(uStack_c4,local_c8) - lVal_4;
    if (uVal_8 == 0) {
      _local_78 = ZEXT816(0xf) << 0x40;
    }
    else {
      if ((int64_t)uVal_8 < 0) {
        func_0x18007ba70();
        fnPtr_3 = (func_ptr_t )swi(3);
        pArr16_7 = (uint8_t (*)[16])(*fnPtr_3)();
        return pArr16_7;
      }
      uVal_9 = 0xf;
      pU64_10 = local_88;
      if (0xf < uVal_8) {
        uVal_5 = uVal_8 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_5) {
          uVal_9 = uVal_5;
        }
        if (uVal_5 < 0xfff) {
          pU64_10 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_6 = func_0x180672de0(uVal_9 + 0x28);
          pU64_10 = (uint8_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_10 + -8) = lVal_6;
        }
        local_88 = (uint8_t  [8])pU64_10;
      }
      uStack_70 = uVal_9;
      local_78 = (uint8_t  [8])uVal_8;
      func_0x1806aa960(pU64_10,lVal_4,uVal_8);
      pU64_10[uVal_8] = 0;
      param_3 = local_98;
    }
    param_3[1] = ZEXT816(0);
    *param_3 = ZEXT816(0);
    *(uint32_t *)*param_3 = local_88._0_4_;
    *(uint32_t *)(*param_3 + 4) = local_88._4_4_;
    *(uint32_t *)(*param_3 + 8) = (uint32_t)uStack_80;
    *(uint32_t *)(*param_3 + 0xc) = uStack_80._4_4_;
    *(uint32_t *)param_3[1] = local_78._0_4_;
    *(uint32_t *)(param_3[1] + 4) = local_78._4_4_;
    *(uint32_t *)(param_3[1] + 8) = (uint32_t)uStack_70;
    *(uint32_t *)(param_3[1] + 0xc) = uStack_70._4_4_;
    param_3 = param_3 + 2;
    local_98 = param_3;
    func_0x180094000(&local_d8);
  }
  return param_3;
}

// Unwind@180094330
void Unwind_180094330(uint64_t param_1,int64_t param_2)
{
  func_0x180080ae0(param_2 + 0x58);
  return;
}

// func_0x180094370
int64_t ** func_0x180094370(int64_t **param_1,int64_t **param_2)
{
  uint32_t uVal_1;
  int64_t lVal_2;
  int64_t **ptr2_Long_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  int64_t *pLong_6;
  int64_t **ptr2_Long_7;
  int64_t **ptr2_Long_8;
  int64_t **ptr2_Long_9;
  char ch_10;
  int64_t **ptr2_Long_11;
  int64_t **ptr2_Long_12;
  int64_t **ptr2_Long_13;
  int64_t **ptr2_Long_14;
  uint8_t local_45;
  undefined3 uStack_44;
  
  ptr2_Long_7 = (int64_t **)*param_2;
  ptr2_Long_13 = (int64_t **)*ptr2_Long_7;
  pLong_6 = ptr2_Long_7[3];
  ptr2_Long_11 = ptr2_Long_7;
  if (&DAT_0000000f < pLong_6) {
    ptr2_Long_11 = ptr2_Long_13;
  }
  if (*(char *)(param_2 + 4) == '\0') {
    lVal_2 = (int64_t)ptr2_Long_7[2];
    pLong_6 = (int64_t *)
             thunk_FUN_180676d20(ptr2_Long_11,(int64_t *)(lVal_2 + (int64_t)ptr2_Long_11),param_2 + 1,1);
    param_2[2] = pLong_6;
    param_2[3] = (int64_t *)
                 ((uint64_t)(pLong_6 != (int64_t *)(lVal_2 + (int64_t)ptr2_Long_11)) + (int64_t)pLong_6
                 );
    *(uint8_t *)(param_2 + 4) = 1;
    ptr2_Long_7 = (int64_t **)*param_2;
    ptr2_Long_13 = (int64_t **)*ptr2_Long_7;
    pLong_6 = ptr2_Long_7[3];
  }
  uVal_1 = *(uint32_t *)((int64_t)param_2 + 0x14);
  uVal_4 = *(uint32_t *)(param_2 + 3);
  uVal_5 = *(uint32_t *)((int64_t)param_2 + 0x1c);
  *(uint32_t *)(param_1 + 2) = *(uint32_t *)(param_2 + 2);
  *(uint32_t *)((int64_t)param_1 + 0x14) = uVal_1;
  *(uint32_t *)(param_1 + 3) = uVal_4;
  *(uint32_t *)((int64_t)param_1 + 0x1c) = uVal_5;
  *param_1 = (int64_t *)param_2;
  param_1[1] = (int64_t *)ptr2_Long_11;
  if (pLong_6 < (int64_t *)0x10) {
    ptr2_Long_13 = ptr2_Long_7;
  }
  *(uint8_t *)(param_1 + 4) = 0;
  pLong_6 = ptr2_Long_7[2];
  ptr2_Long_7 = (int64_t **)param_1[2];
  ptr2_Long_8 = (int64_t **)param_1[3];
  uVal_1 = *(uint32_t *)((int64_t)param_1 + 0x21);
  uStack_44 = (undefined3)((uint)*(uint32_t *)((int64_t)param_1 + 0x24) >> 8);
  if (ptr2_Long_11 == ptr2_Long_7 && ptr2_Long_11 != (int64_t **)((int64_t)ptr2_Long_13 + (int64_t)pLong_6)) {
    ch_10 = '\0';
    ptr2_Long_3 = ptr2_Long_7;
    ptr2_Long_12 = ptr2_Long_11;
    do {
      ptr2_Long_9 = ptr2_Long_3;
      ptr2_Long_3 = (int64_t **)*param_2;
      ptr2_Long_14 = ptr2_Long_3;
      if ((int64_t *)0xf < ptr2_Long_3[3]) {
        ptr2_Long_14 = (int64_t **)*ptr2_Long_3;
      }
      ptr2_Long_14 = (int64_t **)((int64_t)ptr2_Long_14 + (int64_t)ptr2_Long_3[2]);
      if (ptr2_Long_14 == ptr2_Long_12) {
        ch_10 = '\0';
LAB_1800944c5:
        if (ch_10 == '\0' && ptr2_Long_12 == (int64_t **)((int64_t)ptr2_Long_13 + (int64_t)pLong_6)) {
          ch_10 = '\0';
          break;
        }
      }
      else {
        ptr2_Long_9 = ptr2_Long_8;
        ptr2_Long_12 = ptr2_Long_8;
        if (ptr2_Long_14 != ptr2_Long_8) {
          ptr2_Long_7 = (int64_t **)thunk_FUN_180676d20(ptr2_Long_8,ptr2_Long_14,param_2 + 1,1);
          ptr2_Long_8 = (int64_t **)((uint64_t)(ptr2_Long_7 != ptr2_Long_14) + (int64_t)ptr2_Long_7);
          ptr2_Long_11 = ptr2_Long_7;
          goto LAB_1800944c5;
        }
        ch_10 = '\x01';
        ptr2_Long_7 = ptr2_Long_8;
        ptr2_Long_11 = ptr2_Long_8;
      }
      ptr2_Long_3 = ptr2_Long_11;
    } while (ptr2_Long_12 == ptr2_Long_11);
  }
  else {
    ch_10 = '\0';
    ptr2_Long_9 = ptr2_Long_11;
  }
  *param_1 = (int64_t *)param_2;
  param_1[1] = (int64_t *)ptr2_Long_9;
  param_1[2] = (int64_t *)ptr2_Long_7;
  param_1[3] = (int64_t *)ptr2_Long_8;
  *(char *)(param_1 + 4) = ch_10;
  local_45 = (uint8_t)((uint)uVal_1 >> 0x18);
  *(uint *)((int64_t)param_1 + 0x24) = CONCAT31(uStack_44,local_45);
  *(uint32_t *)((int64_t)param_1 + 0x21) = uVal_1;
  return param_1;
}

// func_0x180094590
uint8_t (*func_0x180094590(uint8_t (*param_1)[16],uint64_t param_2))[16]
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  byte bFlag_5;
  uint uVal_6;
  uint8_t *pU64_7;
  byte *pU8_8;
  uint8_t (*pArr16_9)[16];
  uint64_t uVal_10;
  uint16_t uStack_4a;
  byte abStack_48 [21];
  uint8_t local_33 [11];
  
  uVal_6 = (uint)param_2;
  if ((int)uVal_6 < 0) {
    uVal_10 = (uint64_t)-uVal_6;
    lVal_4 = 0x14;
    if (-uVal_6 < 10) {
LAB_18009460b:
      abStack_48[lVal_4] = (byte)uVal_10 | 0x30;
    }
    else {
      lVal_4 = 0x15;
      uVal_3 = uVal_10;
      do {
        lVal_2 = lVal_4;
        uVal_6 = (uint)uVal_3;
        uVal_10 = uVal_3 / 100;
        *(uint16_t *)(abStack_48 + lVal_2 + -2) =
             *(uint16_t *)(&DAT_1806b0846 + (uint64_t)(uVal_6 + (int)(uVal_3 / 100) * -100) * 2);
        lVal_4 = lVal_2 + -2;
        uVal_3 = uVal_10;
      } while (999 < uVal_6);
      if (99 < uVal_6) {
        lVal_4 = lVal_2 + -3;
        goto LAB_18009460b;
      }
    }
    bFlag_5 = 0x2d;
LAB_1800946fd:
    abStack_48[lVal_4 + -1] = bFlag_5;
    param_1[1] = ZEXT816(0);
    *param_1 = ZEXT816(0);
    if (lVal_4 == 0x16) {
      *(uint64_t *)(param_1[1] + 8) = 0xf;
      return param_1;
    }
    pU8_8 = abStack_48 + lVal_4 + -1;
    pU64_7 = local_33 + -(int64_t)pU8_8;
  }
  else {
    if (uVal_6 < 10) {
      abStack_48[20] = (byte)param_2 | 0x30;
      pU8_8 = abStack_48 + 0x14;
    }
    else {
      lVal_4 = 0x15;
      do {
        lVal_2 = lVal_4;
        uVal_6 = (uint)param_2;
        uVal_10 = param_2 & 0xffffffff;
        param_2 = uVal_10 / 100;
        *(uint16_t *)(abStack_48 + lVal_2 + -2) =
             *(uint16_t *)(&DAT_1806b0846 + (uint64_t)(uVal_6 + (int)(uVal_10 / 100) * -100) * 2);
        lVal_4 = lVal_2 + -2;
      } while (999 < uVal_6);
      if (99 < uVal_6) {
        bFlag_5 = (byte)param_2 | 0x30;
        goto LAB_1800946fd;
      }
      pU8_8 = abStack_48 + lVal_2 + -2;
    }
    *param_1 = ZEXT816(0);
    pU64_7 = local_33 + -(int64_t)pU8_8;
  }
  if (-1 < (int64_t)pU64_7) {
    uVal_10 = 0xf;
    pArr16_9 = param_1;
    if ((uint8_t *)0xf < pU64_7) {
      uVal_3 = (uint64_t)pU64_7 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_3) {
        uVal_10 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        pArr16_9 = (uint8_t (*)[16])func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_10 + 0x28);
        pArr16_9 = (uint8_t (*)[16])(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_9[-1] + 8) = lVal_4;
      }
      *(uint8_t (**)[16])*param_1 = pArr16_9;
    }
    *(uint8_t **)param_1[1] = pU64_7;
    *(uint64_t *)(param_1[1] + 8) = uVal_10;
    func_0x1806aa960(pArr16_9,pU8_8,pU64_7);
    (*pArr16_9)[(int64_t)pU64_7] = 0;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_9 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_9;
}

// func_0x180094870
uint8_t (*func_0x180094870(uint8_t (*param_1)[16],uint64_t param_2,uint64_t *param_3,uint64_t *param_4))[16]
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint8_t (*pArr16_13)[16];
  uint8_t *pU64_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  uVal_15 = param_3[2];
  uVal_2 = param_4[2];
  uVal_1 = uVal_2 + uVal_15;
  if ((uint64_t)param_4[3] <= (uint64_t)param_3[3] && uVal_2 <= param_3[3] - uVal_15) {
    uVal_4 = *(uint32_t *)param_3;
    uVal_5 = *(uint32_t *)((int64_t)param_3 + 4);
    uVal_6 = *(uint32_t *)(param_3 + 1);
    uVal_7 = *(uint32_t *)((int64_t)param_3 + 0xc);
    uVal_8 = *(uint32_t *)((int64_t)param_3 + 0x14);
    uVal_9 = *(uint32_t *)(param_3 + 3);
    uVal_10 = *(uint32_t *)((int64_t)param_3 + 0x1c);
    *(uint32_t *)param_1[1] = *(uint32_t *)(param_3 + 2);
    *(uint32_t *)(param_1[1] + 4) = uVal_8;
    *(uint32_t *)(param_1[1] + 8) = uVal_9;
    *(uint32_t *)(param_1[1] + 0xc) = uVal_10;
    *(uint32_t *)*param_1 = uVal_4;
    *(uint32_t *)(*param_1 + 4) = uVal_5;
    *(uint32_t *)(*param_1 + 8) = uVal_6;
    *(uint32_t *)(*param_1 + 0xc) = uVal_7;
    param_3[2] = 0;
    param_3[3] = 0xf;
    *(uint8_t *)param_3 = 0;
    pArr16_13 = param_1;
    if (0xf < *(uint64_t *)(param_1[1] + 8)) {
      pArr16_13 = *(uint8_t (**)[16])*param_1;
    }
    param_3 = param_4;
    if (0xf < (uint64_t)param_4[3]) {
      param_3 = (uint64_t *)*param_4;
    }
    pU64_14 = *pArr16_13 + uVal_15;
    uVal_15 = uVal_2 + 1;
LAB_1800949b2:
    func_0x1806aa960(pU64_14,param_3,uVal_15);
    *(uint64_t *)param_1[1] = uVal_1;
    return param_1;
  }
  if (uVal_15 <= param_4[3] - uVal_2) {
    uVal_4 = *(uint32_t *)param_4;
    uVal_5 = *(uint32_t *)((int64_t)param_4 + 4);
    uVal_6 = *(uint32_t *)(param_4 + 1);
    uVal_7 = *(uint32_t *)((int64_t)param_4 + 0xc);
    uVal_8 = *(uint32_t *)((int64_t)param_4 + 0x14);
    uVal_9 = *(uint32_t *)(param_4 + 3);
    uVal_10 = *(uint32_t *)((int64_t)param_4 + 0x1c);
    *(uint32_t *)param_1[1] = *(uint32_t *)(param_4 + 2);
    *(uint32_t *)(param_1[1] + 4) = uVal_8;
    *(uint32_t *)(param_1[1] + 8) = uVal_9;
    *(uint32_t *)(param_1[1] + 0xc) = uVal_10;
    *(uint32_t *)*param_1 = uVal_4;
    *(uint32_t *)(*param_1 + 4) = uVal_5;
    *(uint32_t *)(*param_1 + 8) = uVal_6;
    *(uint32_t *)(*param_1 + 0xc) = uVal_7;
    param_4[2] = 0;
    param_4[3] = 0xf;
    *(uint8_t *)param_4 = 0;
    pU64_14 = *(uint8_t **)*param_1;
    func_0x1806aa960(pU64_14 + uVal_15,pU64_14,uVal_2 + 1);
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
    goto LAB_1800949b2;
  }
  uVal_16 = 0x7fffffffffffffff;
  if ((uVal_15 ^ 0x7fffffffffffffff) < uVal_2) {
    func_0x18007ba70();
    fnPtr_3 = (func_ptr_t )swi(3);
    pArr16_13 = (uint8_t (*)[16])(*fnPtr_3)();
    return pArr16_13;
  }
  if (-1 < (int64_t)uVal_1) {
    uVal_11 = uVal_1 | 0xf;
    uVal_16 = 0x16;
    if (0x16 < uVal_11) {
      uVal_16 = uVal_11;
    }
    if (uVal_11 < 0xfff) {
      uVal_11 = func_0x180672de0(uVal_16 + 1);
      goto LAB_1800949d0;
    }
  }
  lVal_12 = func_0x180672de0(uVal_16 + 0x28);
  uVal_11 = lVal_12 + 0x27U & 0xffffffffffffffe0;
  *(int64_t *)(uVal_11 - 8) = lVal_12;
LAB_1800949d0:
  *(uint64_t *)*param_1 = uVal_11;
  *(uint64_t *)param_1[1] = uVal_1;
  *(uint64_t *)(param_1[1] + 8) = uVal_16;
  if (0xf < (uint64_t)param_3[3]) {
    param_3 = (uint64_t *)*param_3;
  }
  func_0x1806aa960(uVal_11,param_3,uVal_15);
  if (0xf < (uint64_t)param_4[3]) {
    param_4 = (uint64_t *)*param_4;
  }
  func_0x1806aa960(uVal_11 + uVal_15,param_4,uVal_2 + 1);
  return param_1;
}

// func_0x180094a60
uint64_t func_0x180094a60(short **param_1,int *param_2)
{
  int64_t lVal_1;
  short **ptr2_Size_2;
  uint8_t auArr_3 [16];
  short **ptr2_Size_4;
  int iVal_5;
  uint64_t uVal_6;
  uint8_t *pU64_7;
  short *pSize_8;
  short **ptr2_Size_9;
  int iVal_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint8_t local_68 [16];
  int64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_1[2] == (short *)0x0) {
    *param_2 = 3;
    *(uint8_t ***)(param_2 + 2) = &PTR_PTR_FUN_1806b00d8;
    uVal_11 = 0;
LAB_180094d5b:
    return uVal_11 & 0xffffffffffffff01;
  }
  *param_2 = 0;
  *(uint8_t ***)(param_2 + 2) = &PTR_PTR_FUN_1806b00d8;
  local_68 = ZEXT816(0);
  local_58 = 0;
  local_50 = 7;
  pSize_8 = param_1[2];
  if (&DAT_00000007 < pSize_8) {
    func_0x18008a1a0(local_68);
    pSize_8 = param_1[2];
  }
  local_58 = 0;
  if (&DAT_00000007 < param_1[3]) {
    param_1 = (short **)*param_1;
  }
  ptr2_Size_2 = (short **)((int64_t)param_1 + (int64_t)pSize_8 * 2);
  ptr2_Size_4 = (short **)func_0x180088fc0(param_1,ptr2_Size_2);
  if (((ptr2_Size_4 != param_1) && (4 < (int64_t)ptr2_Size_2 - (int64_t)ptr2_Size_4)) &&
     ((*(uint *)ptr2_Size_4 & 0xffffffdf) - 0x3a0041 < 0x1a)) {
    if (*(short *)((int64_t)ptr2_Size_4 + 4) == 0x2f) {
      ptr2_Size_4 = (short **)((int64_t)ptr2_Size_4 + 4);
    }
    if (*(short *)((int64_t)ptr2_Size_4 + 4) == 0x5c) {
      ptr2_Size_4 = (short **)((int64_t)ptr2_Size_4 + 4);
    }
  }
  uVal_11 = (int64_t)ptr2_Size_4 - (int64_t)param_1 >> 1;
  if (local_50 - local_58 < uVal_11) {
    func_0x1800885f0(local_68,uVal_11,(int64_t)ptr2_Size_4 - (int64_t)param_1,param_1,uVal_11);
  }
  else {
    lVal_12 = uVal_11 + local_58;
    if (local_50 < 8) {
      pU64_7 = local_68;
    }
    else {
      pU64_7 = (uint8_t *)local_68._0_8_;
    }
    lVal_1 = local_58 * 2;
    local_58 = lVal_12;
    func_0x1806aa960(pU64_7 + lVal_1,param_1);
    *(uint16_t *)(pU64_7 + lVal_12 * 2) = 0;
  }
  uVal_6 = 0;
  uVal_11 = 0;
  do {
    iVal_10 = (int)uVal_6;
    ptr2_Size_9 = ptr2_Size_4;
LAB_180094bc0:
    do {
      do {
        iVal_5 = (int)uVal_6;
        ptr2_Size_4 = ptr2_Size_9;
        if (ptr2_Size_9 == ptr2_Size_2) {
          if (iVal_10 == 0) {
            iVal_10 = iVal_5;
          }
          if (iVal_5 == 0) {
            iVal_10 = iVal_5;
          }
          *param_2 = iVal_10;
          *(uint8_t ***)(param_2 + 2) = &PTR_PTR_FUN_1806b00d8;
          if (7 < local_50) {
            uVal_6 = local_50 * 2 + 2;
            pU64_7 = (uint8_t *)local_68._0_8_;
            if (0xfff < uVal_6) {
              if ((uint8_t *)0x1f <
                  (uint8_t *)
                  (local_68._0_8_ + (-8 - (int64_t)*(uint8_t **)(local_68._0_8_ + -8)))) {
                do {
                  invalidInstructionException();
                } while( true );
              }
              uVal_6 = local_50 * 2 + 0x29;
              pU64_7 = *(uint8_t **)(local_68._0_8_ + -8);
            }
            thunk_FUN_180695dd0(pU64_7,uVal_6);
          }
          goto LAB_180094d5b;
        }
        do {
          if ((*(short *)ptr2_Size_4 != 0x5c) && (*(short *)ptr2_Size_4 != 0x2f)) break;
          ptr2_Size_4 = (short **)((int64_t)ptr2_Size_4 + 2);
        } while (ptr2_Size_4 != ptr2_Size_2);
        for (; ((ptr2_Size_4 != ptr2_Size_2 && (*(short *)ptr2_Size_4 != 0x2f)) && (*(short *)ptr2_Size_4 != 0x5c));
            ptr2_Size_4 = (short **)((int64_t)ptr2_Size_4 + 2)) {
        }
        uVal_11 = (int64_t)ptr2_Size_4 - (int64_t)ptr2_Size_9 >> 1;
        if (local_50 - local_58 < uVal_11) {
          func_0x1800885f0(local_68,uVal_11,(int64_t)ptr2_Size_4 - (int64_t)ptr2_Size_9,ptr2_Size_9,uVal_11);
          auArr_3 = local_68;
        }
        else {
          lVal_12 = uVal_11 + local_58;
          pU64_7 = local_68;
          if (7 < local_50) {
            pU64_7 = (uint8_t *)local_68._0_8_;
          }
          lVal_1 = local_58 * 2;
          local_58 = lVal_12;
          func_0x1806aa960(pU64_7 + lVal_1,ptr2_Size_9);
          *(uint16_t *)(pU64_7 + lVal_12 * 2) = 0;
          auArr_3 = local_68;
        }
        local_68._0_8_ = local_68;
        if (7 < local_50) {
          local_68._0_8_ = auArr_3._0_8_;
        }
        pU64_7 = (uint8_t *)local_68._0_8_;
        local_68 = auArr_3;
        uVal_11 = func_0x180678910(pU64_7);
        uVal_6 = uVal_11 >> 0x20;
        ptr2_Size_9 = ptr2_Size_4;
      } while (uVal_6 == 0);
      iVal_5 = (int)(uVal_11 >> 0x20);
      if (iVal_5 < 0x7b) {
        if ((0x3e < iVal_5 - 2U) ||
           ((0x4008000000000003U >> ((uint64_t)(iVal_5 - 2U) & 0x3f) & 1) == 0)) break;
        goto LAB_180094bc0;
      }
    } while (((iVal_5 == 0x7b) || (iVal_5 == 0xa1)) || (iVal_5 == 0x10b));
  } while( true );
}

// Unwind@180094d70
void Unwind_180094d70(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x30);
  return;
}

// func_0x180094db0
void func_0x180094db0(uint param_1,int64_t *param_2)
{
  byte bFlag_1;
  ushort uVal_2;
  ushort uVal_3;
  uint uVal_4;
  uint *pU64_5;
  int64_t lVal_6;
  int64_t lVal_7;
  uint uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  int64_t lVal_12;
  byte bFlag_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  uint64_t uVal_17;
  byte *pU8_18;
  byte bFlag_19;
  byte *pU8_20;
  byte *pU8_21;
  bool bFlag_22;
  
  if (1 < param_1) {
    pU64_5 = (uint *)param_2[8];
    uVal_14 = (uint64_t)(param_1 - 2 >> 1);
    uVal_17 = uVal_14;
joined_r0x000180094e1f:
    do {
      uVal_9 = uVal_14 * 2 + 1;
      if (uVal_9 < param_1) {
        lVal_11 = *param_2;
        lVal_16 = param_2[4];
        if (uVal_14 * 2 + 2 < (uint64_t)param_1) {
          uVal_15 = (uint64_t)*(uint *)(lVal_16 + (uint64_t)pU64_5[uVal_9] * 4);
          uVal_10 = (uint64_t)*(uint *)(lVal_16 + (uint64_t)pU64_5[uVal_14 * 2 + 2] * 4);
          uVal_2 = *(ushort *)(lVal_11 + 0x1c + uVal_15);
          uVal_3 = *(ushort *)(lVal_11 + 0x1c + uVal_10);
          pU8_20 = (byte *)(uVal_15 + lVal_11 + 0x2e);
          uVal_4 = (uint)uVal_3;
          if ((uint)uVal_2 < (uint)uVal_3) {
            uVal_4 = (uint)uVal_2;
          }
          pU8_21 = (byte *)(lVal_11 + uVal_15 + (uint64_t)uVal_4 + 0x2e);
          if (uVal_4 == 0) {
            bFlag_22 = false;
          }
          else {
            pU8_18 = (byte *)(uVal_10 + lVal_11 + 0x2e);
            do {
              bFlag_1 = *pU8_20;
              bFlag_13 = bFlag_1 + 0x20;
              if (0x19 < (byte)(bFlag_1 + 0xbf)) {
                bFlag_13 = bFlag_1;
              }
              bFlag_1 = *pU8_18;
              bFlag_19 = bFlag_1 + 0x20;
              if (0x19 < (byte)(bFlag_1 + 0xbf)) {
                bFlag_19 = bFlag_1;
              }
              if (bFlag_13 != bFlag_19) break;
              pU8_20 = pU8_20 + 1;
              pU8_18 = pU8_18 + 1;
              bFlag_19 = bFlag_13;
            } while (pU8_20 < pU8_21);
            bFlag_22 = bFlag_13 < bFlag_19;
          }
          if (pU8_20 == pU8_21) {
            bFlag_22 = uVal_2 < uVal_3;
          }
          uVal_10 = (uint64_t)bFlag_22;
        }
        else {
          uVal_10 = 0;
        }
        uVal_10 = uVal_10 + uVal_9;
        uVal_4 = pU64_5[uVal_14];
        uVal_9 = (uint64_t)*(uint *)(lVal_16 + (uint64_t)uVal_4 * 4);
        uVal_15 = (uint64_t)*(uint *)(lVal_16 + (uint64_t)pU64_5[uVal_10] * 4);
        uVal_2 = *(ushort *)(lVal_11 + 0x1c + uVal_9);
        uVal_3 = *(ushort *)(lVal_11 + 0x1c + uVal_15);
        pU8_20 = (byte *)(lVal_11 + uVal_9 + 0x2e);
        uVal_8 = (uint)uVal_3;
        if ((uint)uVal_2 < (uint)uVal_3) {
          uVal_8 = (uint)uVal_2;
        }
        pU8_21 = (byte *)((uint64_t)uVal_8 + lVal_11 + uVal_9 + 0x2e);
        if (uVal_8 == 0) {
          bFlag_22 = true;
        }
        else {
          pU8_18 = (byte *)(lVal_11 + uVal_15 + 0x2e);
          do {
            bFlag_1 = *pU8_20;
            bFlag_13 = bFlag_1 + 0x20;
            if (0x19 < (byte)(bFlag_1 + 0xbf)) {
              bFlag_13 = bFlag_1;
            }
            bFlag_1 = *pU8_18;
            bFlag_19 = bFlag_1 + 0x20;
            if (0x19 < (byte)(bFlag_1 + 0xbf)) {
              bFlag_19 = bFlag_1;
            }
            if (bFlag_13 != bFlag_19) break;
            pU8_20 = pU8_20 + 1;
            pU8_18 = pU8_18 + 1;
            bFlag_19 = bFlag_13;
          } while (pU8_20 < pU8_21);
          bFlag_22 = bFlag_19 <= bFlag_13;
        }
        if (pU8_20 == pU8_21) {
          bFlag_22 = uVal_3 <= uVal_2;
        }
        if (!bFlag_22) {
          pU64_5[uVal_14] = pU64_5[uVal_10];
          pU64_5[uVal_10] = uVal_4;
          uVal_14 = uVal_10;
          goto joined_r0x000180094e1f;
        }
      }
      bFlag_22 = uVal_17 != 0;
      uVal_14 = uVal_17 - 1;
      uVal_17 = uVal_14;
    } while (bFlag_22);
    uVal_14 = (uint64_t)(param_1 - 1);
    do {
      uVal_4 = pU64_5[uVal_14];
      pU64_5[uVal_14] = *pU64_5;
      *pU64_5 = uVal_4;
      if (1 < uVal_14) {
        uVal_17 = 1;
        lVal_11 = 0;
        lVal_16 = 0;
        do {
          lVal_6 = *param_2;
          lVal_7 = param_2[4];
          if (lVal_11 + 2U < uVal_14) {
            uVal_9 = (uint64_t)*(uint *)(lVal_7 + (uint64_t)pU64_5[uVal_17] * 4);
            uVal_10 = (uint64_t)*(uint *)(lVal_7 + (uint64_t)pU64_5[lVal_11 + 2] * 4);
            uVal_2 = *(ushort *)(lVal_6 + 0x1c + uVal_9);
            uVal_3 = *(ushort *)(lVal_6 + 0x1c + uVal_10);
            pU8_20 = (byte *)(lVal_6 + uVal_9 + 0x2e);
            uVal_8 = (uint)uVal_3;
            if ((uint)uVal_2 < (uint)uVal_3) {
              uVal_8 = (uint)uVal_2;
            }
            pU8_21 = (byte *)(lVal_6 + uVal_9 + (uint64_t)uVal_8 + 0x2e);
            if (uVal_8 == 0) {
              bFlag_22 = false;
            }
            else {
              pU8_18 = (byte *)(uVal_10 + lVal_6 + 0x2e);
              do {
                bFlag_1 = *pU8_20;
                bFlag_13 = bFlag_1 + 0x20;
                if (0x19 < (byte)(bFlag_1 + 0xbf)) {
                  bFlag_13 = bFlag_1;
                }
                bFlag_1 = *pU8_18;
                bFlag_19 = bFlag_1 + 0x20;
                if (0x19 < (byte)(bFlag_1 + 0xbf)) {
                  bFlag_19 = bFlag_1;
                }
                if (bFlag_13 != bFlag_19) break;
                pU8_20 = pU8_20 + 1;
                pU8_18 = pU8_18 + 1;
                bFlag_19 = bFlag_13;
              } while (pU8_20 < pU8_21);
              bFlag_22 = bFlag_13 < bFlag_19;
            }
            if (pU8_20 == pU8_21) {
              bFlag_22 = uVal_2 < uVal_3;
            }
            uVal_9 = (uint64_t)bFlag_22;
          }
          else {
            uVal_9 = 0;
          }
          lVal_12 = uVal_9 + uVal_17;
          uVal_17 = (uint64_t)*(uint *)(lVal_7 + (uint64_t)uVal_4 * 4);
          uVal_9 = (uint64_t)*(uint *)(lVal_7 + (uint64_t)pU64_5[lVal_12] * 4);
          uVal_2 = *(ushort *)(lVal_6 + 0x1c + uVal_17);
          uVal_3 = *(ushort *)(lVal_6 + 0x1c + uVal_9);
          pU8_20 = (byte *)(lVal_6 + uVal_17 + 0x2e);
          uVal_8 = (uint)uVal_3;
          if ((uint)uVal_2 < (uint)uVal_3) {
            uVal_8 = (uint)uVal_2;
          }
          pU8_21 = (byte *)((uint64_t)uVal_8 + lVal_6 + uVal_17 + 0x2e);
          if (uVal_8 == 0) {
            bFlag_22 = true;
          }
          else {
            pU8_18 = (byte *)(lVal_6 + uVal_9 + 0x2e);
            do {
              bFlag_1 = *pU8_20;
              bFlag_13 = bFlag_1 + 0x20;
              if (0x19 < (byte)(bFlag_1 + 0xbf)) {
                bFlag_13 = bFlag_1;
              }
              bFlag_1 = *pU8_18;
              bFlag_19 = bFlag_1 + 0x20;
              if (0x19 < (byte)(bFlag_1 + 0xbf)) {
                bFlag_19 = bFlag_1;
              }
              if (bFlag_13 != bFlag_19) break;
              pU8_20 = pU8_20 + 1;
              pU8_18 = pU8_18 + 1;
              bFlag_19 = bFlag_13;
            } while (pU8_20 < pU8_21);
            bFlag_22 = bFlag_19 <= bFlag_13;
          }
          if (pU8_20 == pU8_21) {
            bFlag_22 = uVal_3 <= uVal_2;
          }
          if (bFlag_22) break;
          pU64_5[lVal_16] = pU64_5[lVal_12];
          pU64_5[lVal_12] = uVal_4;
          lVal_11 = lVal_12 * 2;
          uVal_17 = lVal_12 * 2 + 1;
          lVal_16 = lVal_12;
        } while (uVal_17 < uVal_14);
      }
      uVal_14 = uVal_14 - 1;
    } while ((int)uVal_14 != 0);
  }
  return;
}

// func_0x1800951d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800951d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aebb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aebb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aebb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aebbc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xe9;
    param_1[1][1] = param_1[1][1] ^ 0x43;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1800951f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800951f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae544;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae540;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae548;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae54c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xa7;
    param_1[1][1] = param_1[1][1] ^ 0xe9;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x180095210
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095210(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806ae294;
    uVal_2 = param_1[2] ^ _UNK_1806ae298;
    uVal_3 = param_1[3] ^ _UNK_1806ae29c;
    *param_1 = *param_1 ^ _DAT_1806ae290;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x4bad89f9137bcf6f;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806aebc0,0);
  }
  return;
}

// func_0x180095260
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095260(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae294;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae290;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae298;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae29c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x137bcf6f;
    param_1[1][4] = param_1[1][4] ^ 0xf9;
    param_1[1][5] = param_1[1][5] ^ 0x89;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x180095290
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095290(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aebd4;
    uVal_2 = param_1[2] ^ _UNK_1806aebd8;
    uVal_3 = param_1[3] ^ _UNK_1806aebdc;
    *param_1 = *param_1 ^ _DAT_1806aebd0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806aebe0,0);
  }
  return;
}

// func_0x1800952d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800952d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aebf4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aebf0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aebf8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aebfc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x331b5f3be9257109;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xe9257109;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x3b;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x180095310
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095310(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aec04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aec00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aec08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aec0c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xe51fa977;
    param_1[1][4] = param_1[1][4] ^ 0x51;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x180095340
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095340(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806aec14;
    uVal_3 = param_1[2] ^ _UNK_1806aec18;
    uVal_4 = param_1[3] ^ _UNK_1806aec1c;
    *param_1 = *param_1 ^ _DAT_1806aec10;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806aec20;
  }
  return;
}

// func_0x1800953a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800953a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aec34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aec30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aec38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aec3c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x730d6b67;
    param_1[1][4] = param_1[1][4] ^ 0x45;
    param_1[1][5] = param_1[1][5] ^ 0xa9;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1800953d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800953d0(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806aec44;
    uVal_3 = param_1[2] ^ _UNK_1806aec48;
    uVal_4 = param_1[3] ^ _UNK_1806aec4c;
    *param_1 = *param_1 ^ _DAT_1806aec40;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806aec50;
  }
  return;
}

// func_0x180095430
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095430(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aec64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aec60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aec68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aec6c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x89812fa5;
    param_1[1][4] = param_1[1][4] ^ 0x3f;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x180095460
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095460(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aec74;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aec70;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aec78;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aec7c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xb1dfcd87;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x180095480
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095480(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae444;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae440;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae448;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae44c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x558bf9a58fbd6dbf;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x8fbd6dbf;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xa5;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1800954c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800954c0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806ae454;
    uVal_2 = param_1[2] ^ _UNK_1806ae458;
    uVal_3 = param_1[3] ^ _UNK_1806ae45c;
    *param_1 = *param_1 ^ _DAT_1806ae450;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x8719637309815153;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806ae8d0,0);
  }
  return;
}

// func_0x180095510
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095510(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aec84;
    uVal_2 = param_1[2] ^ _UNK_1806aec88;
    uVal_3 = param_1[3] ^ _UNK_1806aec8c;
    *param_1 = *param_1 ^ _DAT_1806aec80;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806aec90,0);
  }
  return;
}

// func_0x180095560
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095560(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aeca4;
    uVal_2 = param_1[2] ^ _UNK_1806aeca8;
    uVal_3 = param_1[3] ^ _UNK_1806aecac;
    *param_1 = *param_1 ^ _DAT_1806aeca0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0xc13963014d37c5d1;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806aecb0,0);
  }
  return;
}

// func_0x1800955b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800955b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aecc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aecc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aecc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeccc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x859903559ba1215d;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x9ba1215d;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x55;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1800955f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800955f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae314;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae310;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae318;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae31c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xcb7d8bc9058f5ba3;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x180095620
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095620(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aecd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aecd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aecd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aecdc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x1d0d9b93;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x180095640
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095640(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806aece4;
    uVal_3 = param_1[2] ^ _UNK_1806aece8;
    uVal_4 = param_1[3] ^ _UNK_1806aecec;
    *param_1 = *param_1 ^ _DAT_1806aece0;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806aecf0;
  }
  return;
}

// func_0x1800956a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800956a0(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806aed04;
    uVal_3 = param_1[2] ^ _UNK_1806aed08;
    uVal_4 = param_1[3] ^ _UNK_1806aed0c;
    *param_1 = *param_1 ^ _DAT_1806aed00;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806aed10;
  }
  return;
}

// func_0x180095700
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095700(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aed24;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aed20;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aed28;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aed2c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x33032df5;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x180095720
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095720(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aed34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aed30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aed38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aed3c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x97;
    param_1[1][1] = param_1[1][1] ^ 0x47;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x180095740
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095740(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aed44;
    uVal_2 = param_1[2] ^ _UNK_1806aed48;
    uVal_3 = param_1[3] ^ _UNK_1806aed4c;
    *param_1 = *param_1 ^ _DAT_1806aed40;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0xdbaf4383c59f19cf;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806aed50,0);
  }
  return;
}

// func_0x180095790
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095790(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aed44;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aed40;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aed48;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aed4c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xc59f19cf;
    param_1[1][4] = param_1[1][4] ^ 0x83;
    param_1[1][5] = param_1[1][5] ^ 0x43;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1800957c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800957c0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aed64;
    uVal_2 = param_1[2] ^ _UNK_1806aed68;
    uVal_3 = param_1[3] ^ _UNK_1806aed6c;
    *param_1 = *param_1 ^ _DAT_1806aed60;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806aed70,0);
  }
  return;
}

// func_0x180095800
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095800(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae524;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae520;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae528;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae52c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xd15b1b17297d914f;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x297d914f;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x17;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x180095840
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095840(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aed84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aed80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aed88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aed8c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xcb0b3da5;
    param_1[1][4] = param_1[1][4] ^ 0xc3;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x180095870
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095870(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806aed94;
    uVal_3 = param_1[2] ^ _UNK_1806aed98;
    uVal_4 = param_1[3] ^ _UNK_1806aed9c;
    *param_1 = *param_1 ^ _DAT_1806aed90;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806aeda0;
  }
  return;
}

// func_0x1800958d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800958d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae544;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae540;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae548;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae54c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x43d5e9a7;
    param_1[1][4] = param_1[1][4] ^ 0x69;
    param_1[1][5] = param_1[1][5] ^ 0x57;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x180095900
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095900(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806aedb4;
    uVal_3 = param_1[2] ^ _UNK_1806aedb8;
    uVal_4 = param_1[3] ^ _UNK_1806aedbc;
    *param_1 = *param_1 ^ _DAT_1806aedb0;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806ae560;
  }
  return;
}

// func_0x180095960
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095960(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aedc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aedc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aedc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aedcc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xdfff2f27;
    param_1[1][4] = param_1[1][4] ^ 0xbd;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x180095990
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180095990(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aedd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aedd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aedd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeddc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x893bd55d;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1800959b0
uint32_t * func_0x1800959b0(uint32_t *param_1,uint32_t *param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  *param_1 = *param_2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  lVal_2 = func_0x180672de0(0x50);
  *(int64_t *)lVal_2 = lVal_2;
  *(int64_t *)(lVal_2 + 8) = lVal_2;
  *(int64_t *)(param_1 + 2) = lVal_2;
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  *(uint64_t *)(param_1 + 10) = 0;
  *(uint64_t *)(param_1 + 0xc) = 7;
  *(uint64_t *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  pLong_3 = (int64_t *)func_0x180672de0(0x80);
  lVal_1 = *(int64_t *)(param_1 + 6);
  uVal_5 = *(int64_t *)(param_1 + 10) - lVal_1;
  if (uVal_5 != 0) {
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
  }
  *(int64_t **)(param_1 + 6) = pLong_3;
  *(int64_t **)(param_1 + 8) = pLong_3 + 0x10;
  *(int64_t **)(param_1 + 10) = pLong_3 + 0x10;
  *pLong_3 = lVal_2;
  pLong_3[1] = lVal_2;
  pLong_3[2] = lVal_2;
  pLong_3[3] = lVal_2;
  pLong_3[4] = lVal_2;
  pLong_3[5] = lVal_2;
  pLong_3[6] = lVal_2;
  pLong_3[7] = lVal_2;
  pLong_3[8] = lVal_2;
  pLong_3[9] = lVal_2;
  pLong_3[10] = lVal_2;
  pLong_3[0xb] = lVal_2;
  pLong_3[0xc] = lVal_2;
  pLong_3[0xd] = lVal_2;
  pLong_3[0xe] = lVal_2;
  pLong_3[0xf] = lVal_2;
  return param_1;
}

// Unwind@180095ad0
void Unwind_180095ad0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x30));
  func_0x180081c00(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x180095b10
void func_0x180095b10(int64_t *param_1,uint64_t param_2,uint64_t param_3)
{
  uint32_t *pU64_1;
  int64_t lVal_2;
  uint32_t *pU64_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_10;
  uint64_t uVal_9;
  uint32_t *pU64_11;
  
  uVal_10 = (uint32_t)((uint64_t)param_3 >> 0x20);
  uVal_8 = (uint32_t)param_3;
  pU64_11 = (uint32_t *)*param_1;
  pU64_3 = (uint32_t *)param_1[1];
  if (param_2 <= (uint64_t)((int64_t)pU64_3 - (int64_t)pU64_11 >> 3)) {
    if (pU64_11 == pU64_3) {
      return;
    }
    uVal_6 = ((int64_t)pU64_3 - (int64_t)pU64_11) - 8;
    if (0x17 < uVal_6) {
      uVal_6 = (uVal_6 >> 3) + 1;
      uVal_7 = uVal_6 & 0xfffffffffffffffc;
      uVal_9 = 0;
      do {
        pU64_1 = pU64_11 + uVal_9 * 2;
        *pU64_1 = uVal_8;
        pU64_1[1] = uVal_10;
        pU64_1[2] = uVal_8;
        pU64_1[3] = uVal_10;
        pU64_1 = pU64_11 + uVal_9 * 2 + 4;
        *pU64_1 = uVal_8;
        pU64_1[1] = uVal_10;
        pU64_1[2] = uVal_8;
        pU64_1[3] = uVal_10;
        uVal_9 = uVal_9 + 4;
      } while (uVal_7 != uVal_9);
      pU64_11 = pU64_11 + uVal_7 * 2;
      if (uVal_6 == uVal_7) {
        return;
      }
    }
    do {
      *pU64_11 = uVal_8;
      pU64_11[1] = uVal_10;
      pU64_11 = pU64_11 + 2;
    } while (pU64_11 != pU64_3);
    return;
  }
  if (param_2 >> 0x3d == 0) {
    lVal_2 = param_2 * 8;
    if (param_2 < 0x200) {
      pU64_11 = (uint32_t *)func_0x180672de0(lVal_2);
      lVal_4 = *param_1;
      uVal_6 = param_1[2] - lVal_4;
    }
    else {
      if (0x1ffffffffffffffb < param_2) goto LAB_180095cb6;
      lVal_4 = func_0x180672de0(lVal_2 + 0x27);
      pU64_11 = (uint32_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_11 + -2) = lVal_4;
      lVal_4 = *param_1;
      uVal_6 = param_1[2] - lVal_4;
    }
    if (uVal_6 != 0) {
      lVal_5 = lVal_4;
      if (0xfff < uVal_6) {
        lVal_5 = *(int64_t *)(lVal_4 + -8);
        if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_5)) goto LAB_180095cbb;
        uVal_6 = uVal_6 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_6);
    }
    *param_1 = (int64_t)pU64_11;
    pU64_3 = pU64_11 + param_2 * 2;
    param_1[1] = (int64_t)pU64_3;
    param_1[2] = (int64_t)pU64_3;
    if (0x17 < lVal_2 - 8U) {
      uVal_7 = (lVal_2 - 8U >> 3) + 1;
      uVal_6 = uVal_7 & 0xfffffffffffffffc;
      uVal_9 = 0;
      do {
        pU64_1 = pU64_11 + uVal_9 * 2;
        *pU64_1 = uVal_8;
        pU64_1[1] = uVal_10;
        pU64_1[2] = uVal_8;
        pU64_1[3] = uVal_10;
        pU64_1 = pU64_11 + uVal_9 * 2 + 4;
        *pU64_1 = uVal_8;
        pU64_1[1] = uVal_10;
        pU64_1[2] = uVal_8;
        pU64_1[3] = uVal_10;
        uVal_9 = uVal_9 + 4;
      } while (uVal_6 != uVal_9);
      pU64_11 = pU64_11 + uVal_6 * 2;
      if (uVal_7 == uVal_6) {
        return;
      }
    }
    do {
      *pU64_11 = uVal_8;
      pU64_11[1] = uVal_10;
      pU64_11 = pU64_11 + 2;
    } while (pU64_11 != pU64_3);
    return;
  }
LAB_180095cb6:
  func_0x18007ba90();
LAB_180095cbb:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x180095cc0
void func_0x180095cc0(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  lVal_1 = *(int64_t *)(param_1 + 8);
  if (lVal_1 != 0) {
    uVal_2 = *(uint64_t *)(lVal_1 + 0x48);
    if (0xf < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + 0x30);
      uVal_4 = uVal_2 + 1;
      lVal_5 = lVal_3;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(lVal_3 + -8);
        if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) goto LAB_180095d98;
        uVal_4 = uVal_2 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    *(uint64_t *)(lVal_1 + 0x40) = 0;
    *(uint64_t *)(lVal_1 + 0x48) = 0xf;
    *(uint8_t *)(lVal_1 + 0x30) = 0;
    uVal_2 = *(uint64_t *)(lVal_1 + 0x28);
    if (0xf < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + 0x10);
      uVal_4 = uVal_2 + 1;
      lVal_5 = lVal_3;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(lVal_3 + -8);
        if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) {
LAB_180095d98:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_4 = uVal_2 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    *(uint64_t *)(lVal_1 + 0x20) = 0;
    *(uint64_t *)(lVal_1 + 0x28) = 0xf;
    *(uint8_t *)(lVal_1 + 0x10) = 0;
    if (*(int64_t *)(param_1 + 8) != 0) {
      thunk_FUN_180695dd0(*(int64_t *)(param_1 + 8),0x50);
      return;
    }
  }
  return;
}

// func_0x180095da0
uint8_t (*func_0x180095da0(uint8_t (*param_1)[16],uint64_t *param_2,uint64_t *param_3))[16]
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint8_t (*pArr16_8)[16];
  uint64_t uVal_9;
  
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  uVal_1 = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  if ((int64_t)uVal_1 < 0) {
    func_0x18007ba70();
  }
  else {
    if (uVal_1 < 0x10) {
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)param_2 + 4);
      uVal_4 = *(uint32_t *)(param_2 + 1);
      uVal_5 = *(uint32_t *)((int64_t)param_2 + 0xc);
      *(uint32_t *)*param_1 = *(uint32_t *)param_2;
      *(uint32_t *)(*param_1 + 4) = uVal_3;
      *(uint32_t *)(*param_1 + 8) = uVal_4;
      *(uint32_t *)(*param_1 + 0xc) = uVal_5;
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
      *(uint64_t *)*param_1 = uVal_6;
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = uVal_9;
      func_0x1806aa960(uVal_6,param_2,uVal_1 + 1);
    }
    param_1[3] = ZEXT816(0);
    param_1[2] = ZEXT816(0);
    uVal_1 = param_3[2];
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
    if (-1 < (int64_t)uVal_1) {
      if (uVal_1 < 0x10) {
        *(uint64_t *)param_1[3] = uVal_1;
        *(uint64_t *)(param_1[3] + 8) = 0xf;
        uVal_3 = *(uint32_t *)((int64_t)param_3 + 4);
        uVal_4 = *(uint32_t *)(param_3 + 1);
        uVal_5 = *(uint32_t *)((int64_t)param_3 + 0xc);
        *(uint32_t *)param_1[2] = *(uint32_t *)param_3;
        *(uint32_t *)(param_1[2] + 4) = uVal_3;
        *(uint32_t *)(param_1[2] + 8) = uVal_4;
        *(uint32_t *)(param_1[2] + 0xc) = uVal_5;
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
        *(uint64_t *)param_1[2] = uVal_6;
        *(uint64_t *)param_1[3] = uVal_1;
        *(uint64_t *)(param_1[3] + 8) = uVal_9;
        func_0x1806aa960(uVal_6,param_3,uVal_1 + 1);
      }
      return param_1;
    }
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_8 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_8;
}

// Unwind@180095f20
void Unwind_180095f20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x180095f50
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
void func_0x180095f50(int64_t param_1,uint64_t param_2)
{
  int64_t **ptr2_Long_1;
  int64_t **ptr2_Long_2;
  int64_t *pLong_3;
  int64_t **ptr2_Long_4;
  int64_t **ptr2_Long_5;
  int64_t **ptr2_Long_6;
  int64_t *pLong_7;
  int64_t *pLong_8;
  func_ptr_t fnPtr_9;
  int64_t **ptr2_Long_10;
  int iVal_11;
  uint64_t uVal_12;
  byte bFlag_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  int64_t lVal_18;
  int64_t **ptr2_Long_19;
  
  if (0x800000000000000 < param_2) {
    func_0x1806744c0("invalid hash bucket count");
    fnPtr_9 = (func_ptr_t )swi(3);
    (*fnPtr_9)();
    return;
  }
  uVal_15 = param_2 - 1 | 1;
  lVal_18 = 0x3f;
  if (uVal_15 != 0) {
    for (; uVal_15 >> lVal_18 == 0; lVal_18 = lVal_18 + -1) {
    }
  }
  bFlag_13 = -((byte)lVal_18 ^ 0x3f);
  lVal_18 = 1L << (bFlag_13 & 0x3f);
  ptr2_Long_1 = *(int64_t ***)(param_1 + 8);
  func_0x180095b10(param_1 + 0x18,2L << (bFlag_13 & 0x3f),ptr2_Long_1);
  *(int64_t *)(param_1 + 0x30) = lVal_18 + -1;
  *(int64_t *)(param_1 + 0x38) = lVal_18;
  ptr2_Long_10 = (int64_t **)**(int64_t **)(param_1 + 8);
joined_r0x000180095fc4:
  do {
    if (ptr2_Long_10 == ptr2_Long_1) {
      return;
    }
    if (ptr2_Long_10[5] < (int64_t *)0x10) {
      ptr2_Long_2 = ptr2_Long_10 + 2;
      pLong_3 = ptr2_Long_10[4];
    }
    else {
      ptr2_Long_2 = (int64_t **)ptr2_Long_10[2];
      pLong_3 = ptr2_Long_10[4];
    }
    uVal_15 = 0xcbf29ce484222325;
    if (pLong_3 != (int64_t *)0x0) {
      uVal_15 = 0xcbf29ce484222325;
      uVal_12 = (uint64_t)((uint)pLong_3 & 3);
      if (pLong_3 < (int64_t *)0x4) {
        uVal_14 = 0;
      }
      else {
        uVal_14 = 0;
        do {
          uVal_15 = ((uint64_t)*(byte *)((int64_t)ptr2_Long_2 + uVal_14 + 3) ^
                   ((uint64_t)*(byte *)((int64_t)ptr2_Long_2 + uVal_14 + 2) ^
                   ((uint64_t)*(byte *)((int64_t)ptr2_Long_2 + uVal_14 + 1) ^
                   (*(byte *)((int64_t)ptr2_Long_2 + uVal_14) ^ uVal_15) * 0x100000001b3) * 0x100000001b3
                   ) * 0x100000001b3) * 0x100000001b3;
          uVal_14 = uVal_14 + 4;
        } while (((uint64_t)pLong_3 & 0xfffffffffffffffc) != uVal_14);
        if (uVal_12 == 0) goto LAB_1800960c6;
      }
      uVal_16 = 0;
      do {
        uVal_15 = (*(byte *)((int64_t)ptr2_Long_2 + uVal_16 + uVal_14) ^ uVal_15) * 0x100000001b3;
        uVal_16 = uVal_16 + 1;
      } while (uVal_12 != uVal_16);
    }
LAB_1800960c6:
    ptr2_Long_4 = (int64_t **)*ptr2_Long_10;
    lVal_18 = *(int64_t *)(param_1 + 0x18);
    lVal_17 = (uVal_15 & *(uint64_t *)(param_1 + 0x30)) * 0x10;
    ptr2_Long_5 = *(int64_t ***)(lVal_18 + lVal_17);
    if (ptr2_Long_5 == ptr2_Long_1) {
      *(int64_t ***)(lVal_18 + lVal_17) = ptr2_Long_10;
      *(int64_t ***)(lVal_18 + 8 + lVal_17) = ptr2_Long_10;
      ptr2_Long_10 = ptr2_Long_4;
    }
    else {
      ptr2_Long_19 = *(int64_t ***)(lVal_18 + 8 + lVal_17);
      if (ptr2_Long_19[5] < (int64_t *)0x10) {
        ptr2_Long_6 = ptr2_Long_19 + 2;
        pLong_7 = ptr2_Long_19[4];
      }
      else {
        ptr2_Long_6 = (int64_t **)ptr2_Long_19[2];
        pLong_7 = ptr2_Long_19[4];
      }
      if ((pLong_3 == pLong_7) &&
         ((pLong_3 == (int64_t *)0x0 ||
          (iVal_11 = memcmp(ptr2_Long_2,ptr2_Long_6,(size_t)pLong_3), iVal_11 == 0)))) {
        ptr2_Long_19 = (int64_t **)*ptr2_Long_19;
        if (ptr2_Long_19 != ptr2_Long_10) {
          pLong_3 = ptr2_Long_10[1];
          *pLong_3 = (int64_t)ptr2_Long_4;
          ptr2_Long_2 = (int64_t **)ptr2_Long_4[1];
          *ptr2_Long_2 = (int64_t *)ptr2_Long_19;
          pLong_7 = ptr2_Long_19[1];
          *pLong_7 = (int64_t)ptr2_Long_10;
          ptr2_Long_19[1] = (int64_t *)ptr2_Long_2;
          ptr2_Long_4[1] = pLong_3;
          ptr2_Long_10[1] = pLong_7;
        }
        *(int64_t ***)(lVal_18 + 8 + lVal_17) = ptr2_Long_10;
        ptr2_Long_10 = ptr2_Long_4;
      }
      else {
        do {
          if (ptr2_Long_5 == ptr2_Long_19) {
            pLong_3 = ptr2_Long_10[1];
            *pLong_3 = (int64_t)ptr2_Long_4;
            pLong_7 = ptr2_Long_4[1];
            *pLong_7 = (int64_t)ptr2_Long_19;
            pLong_8 = ptr2_Long_19[1];
            *pLong_8 = (int64_t)ptr2_Long_10;
            ptr2_Long_19[1] = pLong_7;
            ptr2_Long_4[1] = pLong_3;
            ptr2_Long_10[1] = pLong_8;
            *(int64_t ***)(lVal_18 + lVal_17) = ptr2_Long_10;
            ptr2_Long_10 = ptr2_Long_4;
            goto joined_r0x000180095fc4;
          }
          ptr2_Long_19 = (int64_t **)ptr2_Long_19[1];
          if (ptr2_Long_19[5] < (int64_t *)0x10) {
            ptr2_Long_6 = ptr2_Long_19 + 2;
            pLong_7 = ptr2_Long_19[4];
          }
          else {
            ptr2_Long_6 = (int64_t **)ptr2_Long_19[2];
            pLong_7 = ptr2_Long_19[4];
          }
        } while ((pLong_3 != pLong_7) ||
                ((pLong_3 != (int64_t *)0x0 &&
                 (iVal_11 = memcmp(ptr2_Long_2,ptr2_Long_6,(size_t)pLong_3), iVal_11 != 0))));
        pLong_3 = *ptr2_Long_19;
        pLong_7 = ptr2_Long_10[1];
        *pLong_7 = (int64_t)ptr2_Long_4;
        ptr2_Long_2 = (int64_t **)ptr2_Long_4[1];
        *ptr2_Long_2 = pLong_3;
        pLong_8 = (int64_t *)pLong_3[1];
        *pLong_8 = (int64_t)ptr2_Long_10;
        pLong_3[1] = (int64_t)ptr2_Long_2;
        ptr2_Long_4[1] = pLong_7;
        ptr2_Long_10[1] = pLong_8;
        ptr2_Long_10 = ptr2_Long_4;
      }
    }
  } while( true );
}

// func_0x180096260
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180096260(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aebd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aebd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aebd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aebdc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x938babc9b5d9db1d;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xb5d9db1d;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xc9;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1800962a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800962a0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aec64;
    uVal_2 = param_1[2] ^ _UNK_1806aec68;
    uVal_3 = param_1[3] ^ _UNK_1806aec6c;
    *param_1 = *param_1 ^ _DAT_1806aec60;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x49edfd3f89812fa5;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806aede0,0);
  }
  return;
}

// func_0x1800962f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800962f0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aedf4;
    uVal_2 = param_1[2] ^ _UNK_1806aedf8;
    uVal_3 = param_1[3] ^ _UNK_1806aedfc;
    *param_1 = *param_1 ^ _DAT_1806aedf0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806aee00,0);
  }
  return;
}

// func_0x180096340
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180096340(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806ae9d4;
    uVal_2 = param_1[2] ^ _UNK_1806ae9d8;
    uVal_3 = param_1[3] ^ _UNK_1806ae9dc;
    *param_1 = *param_1 ^ _DAT_1806ae9d0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0xbfe78f8f8debe1ed;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806aee10,0);
  }
  return;
}

// func_0x180096390
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180096390(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aee24;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aee20;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aee28;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aee2c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xf3d5254d7787b167;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x7787b167;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x4d;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1800963d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800963d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aee34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aee30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aee38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aee3c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xdf03b5cb4d61d7db;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x180096400
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180096400(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aee44;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aee40;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aee48;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aee4c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xfb319fab;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x180096420
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180096420(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806aee54;
    uVal_3 = param_1[2] ^ _UNK_1806aee58;
    uVal_4 = param_1[3] ^ _UNK_1806aee5c;
    *param_1 = *param_1 ^ _DAT_1806aee50;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806aee60;
  }
  return;
}

// Unwind@1800964d0
void Unwind_1800964d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800964f0
void func_0x1800964f0(int64_t param_1,uint64_t param_2,char param_3)
{
  func_ptr_t fnPtr_1;
  uint8_t uVal_2;
  uint uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  uint64_t *pU64_6;
  char *fnPtr_7;
  char *fnPtr_8;
  uint8_t local_68 [8];
  int64_t *local_60;
  uint32_t local_40 [2];
  uint8_t **local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
  *(uint32_t *)(param_1 + 0x18) = 0x201;
  *(uint64_t *)(param_1 + 0x20) = 6;
  *(uint8_t (*)[16])(param_1 + 0x38) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x28) = ZEXT816(0);
  lVal_4 = func_0x180672de0(0x10);
  local_60 = (int64_t *)func_0x180673ba0(1);
  *(int64_t **)(lVal_4 + 8) = local_60;
  *(int64_t *)(param_1 + 0x40) = lVal_4;
  *(uint64_t *)(param_1 + 0x48) = param_2;
  *(uint64_t *)(param_1 + 0x50) = 0;
  (**(func_ptr_t *)(*local_60 + 8))(local_60);
  pLong_5 = (int64_t *)func_0x180096a50(local_68);
  uVal_2 = (**(func_ptr_t *)(*pLong_5 + 0x40))(pLong_5,0x20);
  if (local_60 != (int64_t *)0x0) {
    pU64_6 = (uint64_t *)(**(func_ptr_t *)(*local_60 + 0x10))();
    if (pU64_6 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_6)(pU64_6,1);
    }
  }
  *(uint8_t *)(param_1 + 0x58) = uVal_2;
  if (*(int64_t *)(param_1 + 0x48) == 0) {
    uVal_3 = *(uint *)(param_1 + 0x10) & 0x13 | 4;
    *(uint *)(param_1 + 0x10) = uVal_3;
    uVal_3 = uVal_3 & *(uint *)(param_1 + 0x14);
    if (uVal_3 != 0) {
      fnPtr_8 = "ios_base::failbit set";
      if ((uVal_3 & 2) == 0) {
        fnPtr_8 = "ios_base::eofbit set";
      }
      fnPtr_7 = "ios_base::badbit set";
      if ((*(uint *)(param_1 + 0x14) & 4) == 0) {
        fnPtr_7 = fnPtr_8;
      }
      local_40[0] = 1;
      local_38 = &PTR_vftable_1806b0968;
      func_0x180096770(local_68,fnPtr_7,local_40);
      func_0x18067a120(local_68,&DAT_180768ca8);
      fnPtr_1 = (func_ptr_t )swi(3);
      (*fnPtr_1)();
      return;
    }
  }
  if (param_3 != '\0') {
    func_0x180673790(param_1);
  }
  return;
}

// Unwind@180096630
void Unwind_180096630(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  if (*(int64_t **)(param_2 + 0x28) != (int64_t *)0x0) {
    pU64_1 = (uint64_t *)(**(func_ptr_t *)(**(int64_t **)(param_2 + 0x28) + 0x10))();
    if (pU64_1 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_1)(pU64_1,1);
    }
  }
  return;
}

// Unwind@180096680
void Unwind_180096680(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800966b0
void func_0x1800966b0(int64_t param_1,uint param_2,char param_3)
{
  func_ptr_t fnPtr_1;
  char *fnPtr_2;
  uint uVal_3;
  uint64_t uVal_4;
  char *fnPtr_5;
  uint8_t auStack_68 [32];
  uint32_t local_48 [2];
  uint8_t **local_40;
  uint8_t local_38 [40];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_3 = (param_2 | *(uint *)(param_1 + 0x10)) & 0x17 |
          (uint)(*(int64_t *)(param_1 + 0x48) == 0) << 2;
  *(uint *)(param_1 + 0x10) = uVal_3;
  uVal_3 = uVal_3 & *(uint *)(param_1 + 0x14);
  uVal_4 = (uint64_t)uVal_3;
  if (uVal_3 == 0) {
    if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_68)) {
      return;
    }
  }
  else {
    if (param_3 == '\0') goto LAB_180096716;
    uVal_4 = 0;
    func_0x18067a120(0);
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_68);
LAB_180096716:
  fnPtr_2 = "ios_base::failbit set";
  if ((uVal_4 & 2) == 0) {
    fnPtr_2 = "ios_base::eofbit set";
  }
  fnPtr_5 = "ios_base::badbit set";
  if ((uVal_4 & 4) == 0) {
    fnPtr_5 = fnPtr_2;
  }
  local_48[0] = 1;
  local_40 = &PTR_vftable_1806b0968;
  func_0x180096770(local_38,fnPtr_5,local_48);
  func_0x18067a120(local_38,&DAT_180768ca8);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180096770
uint64_t * func_0x180096770(uint64_t *param_1,uint64_t param_2,uint32_t *param_3)
{
  func_ptr_t fnPtr_1;
  uint64_t *pU64_2;
  uint8_t auStack_48 [32];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  func_0x1800968f0(param_1,&local_28,param_2);
  *param_1 = std::ios_base::failure::vftable;
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_48)) {
    return param_1;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_48);
  fnPtr_1 = (func_ptr_t )swi(3);
  pU64_2 = (uint64_t *)(*fnPtr_1)();
  return pU64_2;
}

// func_0x1800967e0
char * func_0x1800967e0(void)
{
  return "iostream";
}

// func_0x1800967f0
uint8_t (*func_0x1800967f0(uint64_t param_1,uint8_t (*param_2)[16],int param_3))[16]
{
  func_ptr_t fnPtr_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t *pU64_5;
  char *_Str;
  size_t sz_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint8_t (*pArr16_9)[16];
  uint64_t uVal_10;
  
  if (param_3 == 1) {
    *(uint64_t *)(*param_2 + 8) = 0;
    pU64_5 = (uint32_t *)func_0x180672de0(0x20);
    *(uint32_t **)*param_2 = pU64_5;
    *(uint64_t *)param_2[1] = 0x15;
    *(uint64_t *)(param_2[1] + 8) = 0x1f;
    uVal_4 = s_iostream_stream_error_1806b0980._12_4_;
    uVal_3 = s_iostream_stream_error_1806b0980._8_4_;
    uVal_2 = s_iostream_stream_error_1806b0980._4_4_;
    *pU64_5 = s_iostream_stream_error_1806b0980._0_4_;
    pU64_5[1] = uVal_2;
    pU64_5[2] = uVal_3;
    pU64_5[3] = uVal_4;
    *(uint64_t *)((int64_t)pU64_5 + 0xd) = 0x726f727265206d61;
    *(uint8_t *)((int64_t)pU64_5 + 0x15) = 0;
  }
  else {
    _Str = (char *)func_0x1806740a0(param_3);
    *param_2 = ZEXT816(0);
    sz_6 = strlen(_Str);
    if ((int64_t)sz_6 < 0) {
      func_0x18007ba70();
      fnPtr_1 = (func_ptr_t )swi(3);
      pArr16_9 = (uint8_t (*)[16])(*fnPtr_1)();
      return pArr16_9;
    }
    uVal_10 = 0xf;
    pArr16_9 = param_2;
    if (0xf < sz_6) {
      uVal_7 = sz_6 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_7) {
        uVal_10 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        pArr16_9 = (uint8_t (*)[16])func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_10 + 0x28);
        pArr16_9 = (uint8_t (*)[16])(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_9[-1] + 8) = lVal_8;
      }
      *(uint8_t (**)[16])*param_2 = pArr16_9;
    }
    *(size_t *)param_2[1] = sz_6;
    *(uint64_t *)(param_2[1] + 8) = uVal_10;
    func_0x1806aa960(pArr16_9,_Str,sz_6);
    (*pArr16_9)[sz_6] = 0;
  }
  return param_2;
}
