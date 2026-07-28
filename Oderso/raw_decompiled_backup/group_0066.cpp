#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x180693990
uint func_0x180693990(int64_t param_1,int64_t param_2)
{
  uint uVal_1;
  byte *pU8_2;
  
  if (*(int *)(param_2 + 8) != 0) {
    pU8_2 = (byte *)(*(int64_t *)(param_1 + 8) + (int64_t)*(int *)(param_2 + 8));
    uVal_1 = *pU8_2 & 0xf;
    return *(uint *)(pU8_2 + (-4 - (int64_t)(char)(&DAT_1806e3cf8)[uVal_1])) >>
           ((&DAT_1806e3d08)[uVal_1] & 0x1f);
  }
  return 0;
}

// func_0x180693c30
uint64_t func_0x180693c30(int **param_1,int64_t param_2,uint32_t *param_3)
{
  int *pInt_1;
  int64_t lVal_2;
  
  pInt_1 = *param_1;
  *param_3 = 0;
  if (*pInt_1 == -0x1f928c9d) {
    if (((pInt_1[6] == 4) && (pInt_1[8] + 0xe66cfae0U < 3)) &&
       (*(int64_t *)(pInt_1 + 10) == *(int64_t *)(param_2 + 0x28))) {
      *param_3 = 1;
    }
    if (((*pInt_1 == -0x1f928c9d) && (pInt_1[6] == 4)) &&
       ((pInt_1[8] + 0xe66cfae0U < 3 && (*(int64_t *)(pInt_1 + 0xc) == 0)))) {
      lVal_2 = func_0x180692390();
      *(uint32_t *)(lVal_2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}

// ExFilterRethrowFH4
/* Library Function - Single Match
    int __cdecl ExFilterRethrowFH4(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
   __ptr64,int,int * __ptr64)
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    int __cdecl ExFilterRethrowFH4(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
   __ptr64,int,int * __ptr64)
   
   Library: Visual Studio 2019 Release */
int __cdecl ExFilterRethrowFH4(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int param_3,int *param_4)
{
  int iVal_1;
  int64_t lVal_2;
  
  iVal_1 = func_0x180693c30(param_1,param_2,param_4);
  if (iVal_1 == 0) {
    lVal_2 = func_0x180692390();
    *(int *)(lVal_2 + 0x78) = param_3;
  }
  return iVal_1;
}

// func_0x180693cf0
uint8_t func_0x180693cf0(int64_t param_1,int *param_2)
{
  int iVal_1;
  uint64_t uVal_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int iVal_6;
  uint8_t uVal_7;
  int *pInt_8;
  int iVal_9;
  uint8_t local_res10;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVal_7 = 0;
  iVal_9 = 0;
  local_res10 = 0;
  if (0 < *param_2) {
    do {
      iVal_6 = *(int *)(*(int64_t *)(param_1 + 0x30) + 0xc);
      lVal_4 = func_0x18067b130();
      pInt_8 = (int *)((int64_t)iVal_6 + lVal_4 + 4);
      iVal_6 = *(int *)(*(int64_t *)(param_1 + 0x30) + 0xc);
      lVal_4 = func_0x18067b130();
      iVal_6 = *(int *)(lVal_4 + iVal_6);
      if (0 < iVal_6) {
        do {
          iVal_3 = *pInt_8;
          lVal_4 = func_0x18067b130();
          uVal_2 = *(uint64_t *)(param_1 + 0x30);
          iVal_1 = param_2[1];
          lVal_5 = func_0x18067b0f0();
          iVal_3 = func_0x180693f00(lVal_5 + (int64_t)iVal_9 * 0x14 + (int64_t)iVal_1,iVal_3 + lVal_4,uVal_2
                               );
          if (iVal_3 != 0) {
            local_res10 = 1;
            uVal_7 = 1;
            break;
          }
          iVal_6 = iVal_6 + -1;
          pInt_8 = pInt_8 + 1;
          uVal_7 = local_res10;
        } while (0 < iVal_6);
      }
      iVal_9 = iVal_9 + 1;
    } while (iVal_9 < *param_2);
  }
  return uVal_7;
}

// func_0x180693e00
uint64_t func_0x180693e00(int *param_1)
{
  int iVal_1;
  int64_t lVal_2;
  int iVal_3;
  
  iVal_3 = 0;
  if (0 < *param_1) {
    do {
      iVal_1 = param_1[1];
      lVal_2 = func_0x18067b0f0();
      if (*(int *)(lVal_2 + iVal_1 + 4 + (int64_t)iVal_3 * 0x14) == 0) {
        lVal_2 = 0;
      }
      else {
        iVal_1 = param_1[1];
        lVal_2 = func_0x18067b0f0();
        iVal_1 = *(int *)(lVal_2 + (int64_t)iVal_3 * 0x14 + 4 + (int64_t)iVal_1);
        lVal_2 = func_0x18067b0f0();
        lVal_2 = lVal_2 + iVal_1;
      }
      iVal_1 = func_0x18067b510(lVal_2 + 8,0x18083e140);
      if (iVal_1 == 0) {
        return 1;
      }
      iVal_3 = iVal_3 + 1;
    } while (iVal_3 < *param_1);
  }
  return 0;
}

// func_0x180693e90
void func_0x180693e90(void)
{
  func_0x1806946b0();
  return;
}

// func_0x180693ea0
uint32_t func_0x180693ea0(void)
{
  uint32_t uVal_1;
  int64_t lVal_2;
  
  uVal_1 = func_0x1806948e0();
  lVal_2 = func_0x180692390();
  *(uint32_t *)(lVal_2 + 0x78) = 0xfffffffe;
  return uVal_1;
}

// func_0x180693f00
uint64_t func_0x180693f00(byte *param_1,byte *param_2,uint *param_3)
{
  char ch_1;
  char ch_2;
  int iVal_3;
  uint uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  char *fnPtr_7;
  
  iVal_3 = *(int *)(param_1 + 4);
  if (iVal_3 == 0) {
    return 1;
  }
  lVal_5 = func_0x18067b0f0();
  if (lVal_5 + iVal_3 == 0) {
    return 1;
  }
  iVal_3 = *(int *)(param_1 + 4);
  if (iVal_3 == 0) {
    lVal_5 = 0;
  }
  else {
    lVal_5 = func_0x18067b0f0();
    lVal_5 = lVal_5 + iVal_3;
  }
  if (*(char *)(lVal_5 + 0x10) == '\0') {
    return 1;
  }
  if (((*param_1 & 0x80) != 0) && ((*param_2 & 0x10) != 0)) {
    return 1;
  }
  iVal_3 = *(int *)(param_1 + 4);
  if (iVal_3 == 0) {
    lVal_5 = 0;
  }
  else {
    lVal_5 = func_0x18067b0f0();
    lVal_5 = lVal_5 + iVal_3;
  }
  lVal_6 = func_0x18067b130();
  if (lVal_5 != *(int *)(param_2 + 4) + lVal_6) {
    iVal_3 = *(int *)(param_1 + 4);
    if (iVal_3 == 0) {
      lVal_5 = 0;
    }
    else {
      lVal_5 = func_0x18067b0f0();
      lVal_5 = lVal_5 + iVal_3;
    }
    iVal_3 = *(int *)(param_2 + 4);
    lVal_6 = func_0x18067b130();
    fnPtr_7 = (char *)(lVal_5 + 0x10);
    lVal_5 = ((int64_t)iVal_3 + 0x10 + lVal_6) - (int64_t)fnPtr_7;
    do {
      ch_1 = *fnPtr_7;
      ch_2 = fnPtr_7[lVal_5];
      if (ch_1 != ch_2) break;
      fnPtr_7 = fnPtr_7 + 1;
    } while (ch_2 != '\0');
    if (ch_1 != ch_2) {
      return 0;
    }
  }
  if ((((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
       ((uVal_4 = *param_3, (uVal_4 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
      (((uVal_4 & 4) == 0 || ((*param_1 & 4) != 0)))) &&
     (((uVal_4 & 2) == 0 || ((*param_1 & 2) != 0)))) {
    return 1;
  }
  return 0;
}

// func_0x180694030
uint64_t func_0x180694030(int64_t param_1,byte *param_2,uint *param_3)
{
  char ch_1;
  char ch_2;
  int iVal_3;
  uint uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  char *fnPtr_7;
  
  iVal_3 = *(int *)(param_1 + 8);
  if (iVal_3 == 0) {
    return 1;
  }
  lVal_5 = func_0x18067b0f0();
  if (lVal_5 + iVal_3 == 0) {
    return 1;
  }
  iVal_3 = *(int *)(param_1 + 8);
  if (iVal_3 == 0) {
    lVal_5 = 0;
  }
  else {
    lVal_5 = func_0x18067b0f0();
    lVal_5 = lVal_5 + iVal_3;
  }
  if (*(char *)(lVal_5 + 0x10) == '\0') {
    return 1;
  }
  if (((*(byte *)(param_1 + 4) & 0x80) != 0) && ((*param_2 & 0x10) != 0)) {
    return 1;
  }
  iVal_3 = *(int *)(param_1 + 8);
  if (iVal_3 == 0) {
    lVal_5 = 0;
  }
  else {
    lVal_5 = func_0x18067b0f0();
    lVal_5 = lVal_5 + iVal_3;
  }
  lVal_6 = func_0x18067b130();
  if (lVal_5 != *(int *)(param_2 + 4) + lVal_6) {
    iVal_3 = *(int *)(param_1 + 8);
    if (iVal_3 == 0) {
      lVal_5 = 0;
    }
    else {
      lVal_5 = func_0x18067b0f0();
      lVal_5 = lVal_5 + iVal_3;
    }
    iVal_3 = *(int *)(param_2 + 4);
    lVal_6 = func_0x18067b130();
    fnPtr_7 = (char *)(lVal_5 + 0x10);
    lVal_5 = ((int64_t)iVal_3 + 0x10 + lVal_6) - (int64_t)fnPtr_7;
    do {
      ch_1 = *fnPtr_7;
      ch_2 = fnPtr_7[lVal_5];
      if (ch_1 != ch_2) break;
      fnPtr_7 = fnPtr_7 + 1;
    } while (ch_2 != '\0');
    if (ch_1 != ch_2) {
      return 0;
    }
  }
  if ((((((*param_2 & 2) == 0) || ((*(byte *)(param_1 + 4) & 8) != 0)) &&
       ((uVal_4 = *param_3, (uVal_4 & 1) == 0 || ((*(byte *)(param_1 + 4) & 1) != 0)))) &&
      (((uVal_4 & 4) == 0 || ((*(byte *)(param_1 + 4) & 4) != 0)))) &&
     (((uVal_4 & 2) == 0 || ((*(byte *)(param_1 + 4) & 2) != 0)))) {
    return 1;
  }
  return 0;
}

// func_0x180694160
uint64_t func_0x180694160(int64_t param_1,int64_t *param_2,uint *param_3,byte *param_4)
{
  uint uVal_1;
  int iVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  uVal_1 = param_3[1];
  if ((uVal_1 != 0) && (lVal_3 = func_0x18067b0f0(), lVal_3 + (int)uVal_1 != 0)) {
    uVal_1 = param_3[1];
    if (uVal_1 == 0) {
      lVal_3 = 0;
    }
    else {
      lVal_3 = func_0x18067b0f0();
      lVal_3 = lVal_3 + (int)uVal_1;
    }
    uVal_6 = 0;
    if ((*(char *)(lVal_3 + 0x10) != '\0') && ((param_3[2] != 0 || ((int)*param_3 < 0)))) {
      uVal_1 = *param_3;
      if (-1 < (int)uVal_1) {
        param_2 = (int64_t *)((int64_t)(int)param_3[2] + *param_2);
      }
      if ((((char)uVal_1 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_1808425c0 != 0)) {
        lVal_3 = (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)();
        if ((lVal_3 == 0) || (param_2 == (int64_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVal_3;
        lVal_3 = func_0x18067a2b0(lVal_3,param_4 + 8);
        *param_2 = lVal_3;
      }
      else if ((uVal_1 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVal_2 = *(int *)(param_4 + 0x18);
          uVal_5 = uVal_6;
          if (iVal_2 != 0) {
            lVal_3 = func_0x18067b130();
            uVal_5 = lVal_3 + iVal_2;
          }
          lVal_3 = *(int64_t *)(param_1 + 0x28);
          if (uVal_5 == 0) {
            if ((lVal_3 == 0) || (param_2 == (int64_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            iVal_2 = *(int *)(param_4 + 0x14);
            uVal_4 = func_0x18067a2b0(lVal_3,param_4 + 8);
            func_0x1806aa960(param_2,uVal_4,(int64_t)iVal_2);
          }
          else {
            if (((lVal_3 == 0) || (param_2 == (int64_t *)0x0)) ||
               ((iVal_2 = *(int *)(param_4 + 0x18), iVal_2 == 0 ||
                (lVal_3 = func_0x18067b130(), lVal_3 + iVal_2 == 0)))) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVal_6 = (uint64_t)(((*param_4 & 4) != 0) + 1);
          }
        }
        else {
          if ((*(int64_t *)(param_1 + 0x28) == 0) || (param_2 == (int64_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          func_0x1806aa960(param_2,*(int64_t *)(param_1 + 0x28),(int64_t)*(int *)(param_4 + 0x14));
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVal_3 = func_0x18067a2b0(*param_2,param_4 + 8);
            *param_2 = lVal_3;
          }
        }
      }
      else {
        lVal_3 = *(int64_t *)(param_1 + 0x28);
        if ((lVal_3 == 0) || (param_2 == (int64_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVal_3;
        lVal_3 = func_0x18067a2b0(lVal_3,param_4 + 8);
        *param_2 = lVal_3;
      }
      return uVal_6;
    }
  }
  return 0;
}

// func_0x180694340
uint64_t func_0x180694340(int64_t param_1,int64_t *param_2,int64_t param_3,byte *param_4)
{
  int iVal_1;
  uint uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  iVal_1 = *(int *)(param_3 + 8);
  if ((iVal_1 != 0) && (lVal_3 = func_0x18067b0f0(), lVal_3 + iVal_1 != 0)) {
    iVal_1 = *(int *)(param_3 + 8);
    if (iVal_1 == 0) {
      lVal_3 = 0;
    }
    else {
      lVal_3 = func_0x18067b0f0();
      lVal_3 = lVal_3 + iVal_1;
    }
    uVal_6 = 0;
    if ((*(char *)(lVal_3 + 0x10) != '\0') &&
       ((*(uint *)(param_3 + 0xc) != 0 || (*(int *)(param_3 + 4) < 0)))) {
      uVal_2 = *(uint *)(param_3 + 4);
      if (-1 < (int)uVal_2) {
        param_2 = (int64_t *)((uint64_t)*(uint *)(param_3 + 0xc) + *param_2);
      }
      if ((((char)uVal_2 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_1808425c0 != 0)) {
        lVal_3 = (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)();
        if ((lVal_3 == 0) || (param_2 == (int64_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVal_3;
        lVal_3 = func_0x18067a2b0(lVal_3,param_4 + 8);
        *param_2 = lVal_3;
      }
      else if ((uVal_2 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVal_1 = *(int *)(param_4 + 0x18);
          uVal_5 = uVal_6;
          if (iVal_1 != 0) {
            lVal_3 = func_0x18067b130();
            uVal_5 = lVal_3 + iVal_1;
          }
          lVal_3 = *(int64_t *)(param_1 + 0x28);
          if (uVal_5 == 0) {
            if ((lVal_3 == 0) || (param_2 == (int64_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            iVal_1 = *(int *)(param_4 + 0x14);
            uVal_4 = func_0x18067a2b0(lVal_3,param_4 + 8);
            func_0x1806aa960(param_2,uVal_4,(int64_t)iVal_1);
          }
          else {
            if (((lVal_3 == 0) || (param_2 == (int64_t *)0x0)) ||
               ((iVal_1 = *(int *)(param_4 + 0x18), iVal_1 == 0 ||
                (lVal_3 = func_0x18067b130(), lVal_3 + iVal_1 == 0)))) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVal_6 = (uint64_t)(((*param_4 & 4) != 0) + 1);
          }
        }
        else {
          if ((*(int64_t *)(param_1 + 0x28) == 0) || (param_2 == (int64_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          func_0x1806aa960(param_2,*(int64_t *)(param_1 + 0x28),(int64_t)*(int *)(param_4 + 0x14));
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVal_3 = func_0x18067a2b0(*param_2,param_4 + 8);
            *param_2 = lVal_3;
          }
        }
      }
      else {
        lVal_3 = *(int64_t *)(param_1 + 0x28);
        if ((lVal_3 == 0) || (param_2 == (int64_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVal_3;
        lVal_3 = func_0x18067a2b0(lVal_3,param_4 + 8);
        *param_2 = lVal_3;
      }
      return uVal_6;
    }
  }
  return 0;
}

// func_0x180694530
void func_0x180694530(int64_t param_1,int64_t *param_2,int *param_3,int64_t param_4)
{
  int iVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  
  if (-1 < *param_3) {
    param_2 = (int64_t *)((int64_t)param_3[2] + *param_2);
  }
  iVal_1 = func_0x180694160();
  if (iVal_1 == 1) {
    uVal_2 = func_0x18067a2b0(*(uint64_t *)(param_1 + 0x28),param_4 + 8);
    iVal_1 = *(int *)(param_4 + 0x18);
    if (iVal_1 == 0) {
      lVal_3 = 0;
    }
    else {
      lVal_3 = func_0x18067b130();
      lVal_3 = lVal_3 + iVal_1;
    }
    func_0x180674e90(param_2,lVal_3,uVal_2);
  }
  else if (iVal_1 == 2) {
    uVal_2 = func_0x18067a2b0(*(uint64_t *)(param_1 + 0x28),param_4 + 8);
    iVal_1 = *(int *)(param_4 + 0x18);
    if (iVal_1 == 0) {
      lVal_3 = 0;
    }
    else {
      lVal_3 = func_0x18067b130();
      lVal_3 = lVal_3 + iVal_1;
    }
    func_0x180674ea0(param_2,lVal_3,uVal_2,1);
  }
  return;
}

// func_0x1806945f0
void func_0x1806945f0(int64_t param_1,int64_t *param_2,int64_t param_3,int64_t param_4)
{
  int iVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  
  if (-1 < *(int *)(param_3 + 4)) {
    param_2 = (int64_t *)((uint64_t)*(uint *)(param_3 + 0xc) + *param_2);
  }
  iVal_1 = func_0x180694340();
  if (iVal_1 == 1) {
    uVal_2 = func_0x18067a2b0(*(uint64_t *)(param_1 + 0x28),param_4 + 8);
    iVal_1 = *(int *)(param_4 + 0x18);
    if (iVal_1 == 0) {
      lVal_3 = 0;
    }
    else {
      lVal_3 = func_0x18067b130();
      lVal_3 = lVal_3 + iVal_1;
    }
    func_0x180674e90(param_2,lVal_3,uVal_2);
  }
  else if (iVal_1 == 2) {
    uVal_2 = func_0x18067a2b0(*(uint64_t *)(param_1 + 0x28),param_4 + 8);
    iVal_1 = *(int *)(param_4 + 0x18);
    if (iVal_1 == 0) {
      lVal_3 = 0;
    }
    else {
      lVal_3 = func_0x18067b130();
      lVal_3 = lVal_3 + iVal_1;
    }
    func_0x180674ea0(param_2,lVal_3,uVal_2,1);
  }
  return;
}

// func_0x1806946b0
uint64_t func_0x1806946b0(int *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,uint *param_5, int param_6,uint64_t param_7,byte param_8)
{
  uint uVal_1;
  int iVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  bool bFlag_5;
  uint64_t in_stack_ffffffffffffffa8;
  uint32_t uVal_6;
  uint64_t in_stack_ffffffffffffffb0;
  uint32_t uVal_7;
  
  uVal_6 = (uint32_t)((uint64_t)in_stack_ffffffffffffffa8 >> 0x20);
  uVal_7 = (uint32_t)((uint64_t)in_stack_ffffffffffffffb0 >> 0x20);
  __except_validate_context_record(param_3);
  lVal_3 = func_0x180692390();
  if ((*(int *)(lVal_3 + 0x40) == 0) && (iVal_2 = *param_1, iVal_2 != -0x1f928c9d)) {
    if (iVal_2 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bFlag_5 = *(int64_t *)(param_1 + 0x18) == 0x19930520;
        goto LAB_180694709;
      }
    }
    else {
      bFlag_5 = iVal_2 == -0x7fffffda;
LAB_180694709:
      if (bFlag_5) goto LAB_180694723;
    }
    if ((0x19930521 < (*param_5 & 0x1fffffff)) && ((*(byte *)(param_5 + 9) & 1) != 0)) {
      return 1;
    }
  }
LAB_180694723:
  if ((param_1[1] & 0x66U) == 0) {
    if ((param_5[3] == 0) &&
       ((((*param_5 & 0x1fffffff) < 0x19930521 || (uVal_1 = param_5[8], uVal_1 == 0)) ||
        (lVal_3 = func_0x18067b0f0(), lVal_3 + (int)uVal_1 == 0)))) {
      if ((*param_5 & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if ((*(byte *)(param_5 + 9) & 4) == 0) {
        return 1;
      }
    }
    if (((*param_1 == -0x1f928c9d) && (2 < (uint)param_1[6])) &&
       ((0x19930522 < (uint)param_1[8] &&
        ((iVal_2 = *(int *)(*(int64_t *)(param_1 + 0xc) + 8), iVal_2 != 0 &&
         (lVal_3 = func_0x18067b130(), lVal_3 + iVal_2 != 0)))))) {
      uVal_4 = (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         CONCAT44(uVal_7,(uint)param_8));
      return uVal_4;
    }
    func_0x180694b40(param_1,param_2,param_3,param_4,param_5,param_8,CONCAT44(uVal_6,param_6),param_7);
    return 1;
  }
  if (param_5[1] == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if ((param_1[1] & 0x20U) == 0) {
LAB_1806947bd:
    func_0x18067a8e0(param_2,param_4,param_5);
    return 1;
  }
  if (*param_1 == -0x7fffffda) {
    iVal_2 = func_0x180692820(param_5,param_4,*(uint64_t *)(param_4 + 0x20));
    if ((-2 < iVal_2) && (iVal_2 < (int)param_5[1])) {
      func_0x180693180(param_2,param_4,param_5,iVal_2);
      return 1;
    }
  }
  else {
    if (*param_1 != -0x7fffffd7) goto LAB_1806947bd;
    if ((-2 < param_1[0xe]) && (param_1[0xe] < (int)param_5[1])) {
      func_0x180693180(*(uint64_t *)(param_1 + 10),param_4,param_5);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x1806948e0
uint64_t func_0x1806948e0(int *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,byte *param_5, int param_6,uint64_t param_7,byte param_8)
{
  int iVal_1;
  int iVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint uVal_5;
  byte *pU8_6;
  bool bFlag_7;
  uint64_t in_stack_ffffffffffffff78;
  uint32_t uVal_8;
  uint64_t in_stack_ffffffffffffff80;
  uint32_t uVal_9;
  int local_68 [14];
  
  uVal_8 = (uint32_t)((uint64_t)in_stack_ffffffffffffff78 >> 0x20);
  uVal_9 = (uint32_t)((uint64_t)in_stack_ffffffffffffff80 >> 0x20);
  __except_validate_context_record(param_3);
  lVal_3 = func_0x180692390();
  if ((*(int *)(lVal_3 + 0x40) == 0) && (iVal_1 = *param_1, iVal_1 != -0x1f928c9d)) {
    if (iVal_1 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bFlag_7 = *(int64_t *)(param_1 + 0x18) == 0x19930520;
        goto LAB_18069493c;
      }
    }
    else {
      bFlag_7 = iVal_1 == -0x7fffffda;
LAB_18069493c:
      if (bFlag_7) goto LAB_180694947;
    }
    if ((*param_5 & 0x20) != 0) {
      return 1;
    }
  }
LAB_180694947:
  if ((param_1[1] & 0x66U) == 0) {
    func_0x180692d10(local_68,param_5,*(uint64_t *)(param_4 + 8));
    if ((local_68[0] != 0) || ((*param_5 & 0x40) != 0)) {
      if ((*param_1 == -0x1f928c9d) &&
         ((((2 < (uint)param_1[6] && (0x19930522 < (uint)param_1[8])) &&
           (iVal_1 = *(int *)(*(int64_t *)(param_1 + 0xc) + 8), iVal_1 != 0)) &&
          (lVal_3 = func_0x18067b130(), lVal_3 + iVal_1 != 0)))) {
        uVal_4 = (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           CONCAT44(uVal_9,(uint)param_8));
        return uVal_4;
      }
      func_0x1806950f0(param_1,param_2,param_3,param_4,param_5,param_8,CONCAT44(uVal_8,param_6),param_7)
      ;
    }
  }
  else if (((*(int *)(param_5 + 8) != 0) &&
           (pU8_6 = (byte *)(*(int64_t *)(param_4 + 8) + (int64_t)*(int *)(param_5 + 8)),
           uVal_5 = *pU8_6 & 0xf,
           *(uint *)(pU8_6 + (-4 - (int64_t)(char)(&DAT_1806e3cf8)[uVal_5])) >>
           ((&DAT_1806e3d08)[uVal_5] & 0x1f) != 0)) && (param_6 == 0)) {
    if ((param_1[1] & 0x20U) != 0) {
      if (*param_1 == -0x7fffffda) {
        iVal_1 = func_0x180692aa0(param_5,param_4,*(uint64_t *)(param_4 + 0x20));
        if ((-2 < iVal_1) && (iVal_2 = func_0x180693990(param_4,param_5), iVal_1 < iVal_2)) {
          func_0x180693540(param_2,param_4,param_5,iVal_1);
          return 1;
        }
LAB_180694b33:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*param_1 == -0x7fffffd7) {
        iVal_1 = param_1[0xe];
        if ((-2 < iVal_1) && (iVal_2 = func_0x180693990(param_4,param_5), iVal_1 < iVal_2)) {
          func_0x180693540(*(uint64_t *)(param_1 + 10),param_4,param_5,iVal_1);
          return 1;
        }
        goto LAB_180694b33;
      }
    }
    func_0x18067ad80(param_2,param_4,param_5);
  }
  return 1;
}

// func_0x180694b40
void func_0x180694b40(int *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,uint *param_5 ,char param_6,int param_7,uint64_t param_8)
{
  uint32_t *pU64_1;
  uint uVal_2;
  func_ptr_t fnPtr_3;
  char ch_4;
  int iVal_5;
  int iVal_6;
  int64_t lVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  int *pInt_10;
  uint uVal_11;
  uint64_t uVal_12;
  uint8_t auStack_138 [32];
  uint *local_118;
  uint64_t local_110;
  int local_108;
  uint64_t local_100;
  uint32_t *local_f8;
  int64_t local_f0;
  char local_e8;
  int local_d8;
  uint local_d4;
  uint64_t local_d0;
  int64_t *local_c8;
  uint32_t local_c0;
  int local_bc;
  uint64_t local_b8;
  int64_t local_b0;
  uint8_t local_a8 [8];
  uint *local_a0;
  uint64_t local_98;
  int64_t *local_90;
  uint local_88;
  uint local_78;
  uint32_t local_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  int iStack_64;
  uint32_t local_60;
  uint64_t local_58;
  
  local_58 = DAT_18083cf40 ^ (uint64_t)auStack_138;
  local_d0 = param_3;
  local_b8 = param_2;
  iVal_5 = func_0x1806927b0(param_5,param_4);
  local_d8 = iVal_5;
  func_0x18067aa10(param_2,param_4,param_5,&local_c8);
  iVal_6 = GetUnwindTryBlock(param_2,param_4,param_5);
  if (iVal_6 < iVal_5) {
    func_0x180692920(&local_c8,param_4,param_5,iVal_5);
    SetUnwindTryBlock(param_2,param_4,param_5,iVal_5);
  }
  else {
    iVal_5 = GetUnwindTryBlock(param_2,param_4,param_5);
    local_d8 = iVal_5;
  }
  if ((-2 < iVal_5) && (iVal_5 < (int)param_5[1])) {
    if ((*param_1 == -0x1f928c9d) &&
       (((param_1[6] == 4 && (param_1[8] + 0xe66cfae0U < 3)) && (*(int64_t *)(param_1 + 0xc) == 0))
       )) {
      lVal_7 = func_0x180692390();
      if (*(int64_t *)(lVal_7 + 0x20) == 0) goto LAB_180695068;
      lVal_7 = func_0x180692390();
      param_1 = *(int **)(lVal_7 + 0x20);
      lVal_7 = func_0x180692390();
      param_3 = *(uint64_t *)(lVal_7 + 0x28);
      local_d0 = param_3;
      func_0x18067b150(*(uint64_t *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(int64_t *)(param_1 + 0xc) == 0))))))
      goto LAB_1806950e1;
      lVal_7 = func_0x180692390();
      if (*(int64_t *)(lVal_7 + 0x38) != 0) {
        lVal_7 = func_0x180692390();
        uVal_9 = *(uint64_t *)(lVal_7 + 0x38);
        lVal_7 = func_0x180692390();
        *(uint64_t *)(lVal_7 + 0x38) = 0;
        ch_4 = func_0x180693cf0(param_1,uVal_9);
        iVal_5 = local_d8;
        if (ch_4 == '\0') {
          ch_4 = func_0x180693e00(uVal_9);
          if (ch_4 != '\0') {
            __DestructExceptionObject(param_1,1);
            func_0x1806749a0(&local_70);
            func_0x18067a120(&local_70,&DAT_180839808);
            fnPtr_3 = (func_ptr_t )swi(3);
            (*fnPtr_3)();
            return;
          }
          func_0x18068d0ec();
          fnPtr_3 = (func_ptr_t )swi(3);
          (*fnPtr_3)();
          return;
        }
      }
    }
    local_98 = *(uint64_t *)(param_4 + 8);
    local_a0 = param_5;
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if (param_5[3] != 0) {
        local_110 = (uint *)CONCAT44(local_110._4_4_,param_7);
        local_118 = param_5;
        func_0x18067ac40(&local_90,&local_a0,iVal_5,param_4);
        local_c8 = local_90;
        local_d4 = local_88;
        if (local_88 < local_78) {
          do {
            lVal_8 = local_90[1];
            lVal_7 = (int64_t)*(int *)(*local_90 + 0x10) + (uint64_t)local_88 * 0x14;
            local_bc = *(int *)(lVal_7 + lVal_8);
            if ((local_bc <= iVal_5) && (iVal_5 <= *(int *)(lVal_7 + 4 + lVal_8))) {
              local_c0 = *(uint32_t *)(lVal_7 + 8 + lVal_8);
              uVal_12 = 0;
              uVal_2 = *(uint *)(lVal_7 + 0xc + lVal_8);
              local_b0 = (int64_t)*(int *)(lVal_7 + 0x10 + lVal_8) + *(int64_t *)(param_4 + 8);
              param_2 = local_b8;
              local_d4 = local_88;
              if (uVal_2 != 0) {
                do {
                  pU64_1 = (uint32_t *)(local_b0 + uVal_12 * 0x14);
                  local_70 = *pU64_1;
                  uStack_6c = pU64_1[1];
                  uStack_68 = pU64_1[2];
                  iStack_64 = pU64_1[3];
                  local_60 = *(uint32_t *)(local_b0 + 0x10 + uVal_12 * 0x14);
                  iVal_5 = *(int *)(*(int64_t *)(param_1 + 0xc) + 0xc);
                  lVal_7 = func_0x18067b130();
                  pInt_10 = (int *)((int64_t)iVal_5 + lVal_7 + 4);
                  iVal_5 = *(int *)(*(int64_t *)(param_1 + 0xc) + 0xc);
                  lVal_7 = func_0x18067b130();
                  local_88 = local_d4;
                  local_90 = local_c8;
                  param_2 = local_b8;
                  for (iVal_5 = *(int *)(lVal_7 + iVal_5); local_d4 = local_88, local_c8 = local_90,
                      local_b8 = param_2, 0 < iVal_5; iVal_5 = iVal_5 + -1) {
                    iVal_6 = *pInt_10;
                    lVal_7 = func_0x18067b130();
                    lVal_7 = iVal_6 + lVal_7;
                    iVal_6 = func_0x180693f00(&local_70,lVal_7,*(uint64_t *)(param_1 + 0xc));
                    param_2 = local_b8;
                    if (iVal_6 != 0) {
                      uVal_9 = func_0x18067aa10(local_b8,param_4,param_5,local_a8);
                      if (lVal_7 != 0) {
                        func_0x180694530(param_1,uVal_9,&local_70,lVal_7);
                      }
                      lVal_8 = (int64_t)iStack_64;
                      lVal_7 = func_0x18067b0f0();
                      local_118 = (uint *)(lVal_7 + lVal_8);
                      local_e8 = param_6;
                      local_f8 = &local_70;
                      local_100 = CONCAT44(local_100._4_4_,local_c0);
                      local_108 = local_bc;
                      local_110 = param_5;
                      local_f0 = param_4;
                      func_0x18067ab10(param_2,param_1,local_d0,uVal_9);
                      local_90 = local_c8;
                      local_88 = local_d4;
                      iVal_5 = local_d8;
                      goto LAB_180694f36;
                    }
                    pInt_10 = pInt_10 + 1;
                    local_88 = local_d4;
                    local_90 = local_c8;
                  }
                  uVal_11 = (int)uVal_12 + 1;
                  uVal_12 = (uint64_t)uVal_11;
                  iVal_5 = local_d8;
                } while (uVal_11 != uVal_2);
              }
            }
LAB_180694f36:
            local_88 = local_88 + 1;
            local_d4 = local_88;
          } while (local_88 < local_78);
        }
      }
      lVal_7 = 0;
      if ((0x19930520 < (*param_5 & 0x1fffffff)) &&
         (((uVal_2 = param_5[8], uVal_2 != 0 && (lVal_8 = func_0x18067b0f0(), lVal_8 + (int)uVal_2 != 0)) ||
          (((*(byte *)(param_5 + 9) & 4) != 0 &&
           (ch_4 = func_0x18067a870(param_4,param_5), ch_4 == '\0')))))) {
        if ((*(byte *)(param_5 + 9) & 4) != 0) {
          lVal_7 = func_0x180692390();
          *(int **)(lVal_7 + 0x20) = param_1;
          lVal_7 = func_0x180692390();
          *(uint64_t *)(lVal_7 + 0x28) = local_d0;
          func_0x18068d0ec();
          fnPtr_3 = (func_ptr_t )swi(3);
          (*fnPtr_3)();
          return;
        }
        uVal_2 = param_5[8];
        if (uVal_2 != 0) {
          lVal_7 = func_0x18067b0f0();
          lVal_7 = (int)uVal_2 + lVal_7;
        }
        ch_4 = func_0x180693cf0(param_1,lVal_7);
        if (ch_4 == '\0') {
          uVal_9 = func_0x18067aa10(param_2,param_4,param_5,local_a8);
          local_e8 = param_6;
          local_f8 = (uint32_t *)0x0;
          local_100 = CONCAT44(local_100._4_4_,0xffffffff);
          local_108 = -1;
          local_110 = param_5;
          local_118 = (uint *)0x0;
          local_f0 = param_4;
          func_0x18067ab10(param_2,param_1,local_d0,uVal_9);
        }
      }
    }
    else if (param_5[3] != 0) {
      if (param_6 != '\0') goto LAB_1806950e1;
      local_100 = param_8;
      local_108 = param_7;
      local_110 = (uint *)CONCAT44(local_110._4_4_,iVal_5);
      local_118 = param_5;
      func_0x1806956a0(param_1,param_2,param_3,param_4);
    }
    lVal_7 = func_0x180692390();
    if (*(int64_t *)(lVal_7 + 0x38) == 0) {
LAB_180695068:
      func_0x180673080(local_58 ^ (uint64_t)auStack_138);
      return;
    }
  }
LAB_1806950e1:
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x1806950f0
void func_0x1806950f0(int *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,byte *param_5 ,char param_6,int param_7,uint64_t param_8)
{
  byte bFlag_1;
  uint32_t uVal_2;
  uint64_t uVal_3;
  func_ptr_t fnPtr_4;
  char ch_5;
  int iVal_6;
  int iVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint uVal_10;
  byte *pU8_11;
  byte *pU8_12;
  int64_t lVal_13;
  int *pInt_14;
  uint uVal_15;
  byte *pU8_16;
  uint32_t *pU64_17;
  uint8_t auStack_1a8 [32];
  byte *local_188;
  uint64_t local_180;
  int local_178;
  uint64_t local_170;
  uint8_t *local_168;
  int64_t local_160;
  char local_158;
  uint local_148;
  int local_144;
  uint64_t local_140;
  uint32_t local_138;
  int local_134;
  byte *local_130;
  int64_t local_128;
  uint64_t local_120;
  int64_t local_118;
  uint local_110;
  uint local_100;
  uint8_t local_f8 [8];
  uint8_t local_f0;
  uint16_t local_ef;
  uint8_t local_ed;
  uint32_t local_ec;
  uint32_t local_e8;
  uint32_t local_e4;
  int local_e0;
  uint32_t local_dc;
  uint64_t local_d8;
  uint64_t local_d0;
  uint local_c8 [2];
  int64_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  uint16_t local_af;
  uint8_t local_ad;
  uint64_t local_ac;
  uint64_t local_a4;
  uint32_t local_9c;
  uint8_t local_98 [16];
  int64_t local_88;
  uint32_t local_80;
  int local_78 [10];
  uint64_t local_50;
  
  local_50 = DAT_18083cf40 ^ (uint64_t)auStack_1a8;
  local_130 = param_5;
  local_140 = param_3;
  local_120 = param_2;
  iVal_6 = func_0x180693920(param_2,param_4,param_5);
  local_144 = iVal_6;
  if (-2 < iVal_6) {
    if (*(int *)(param_5 + 8) == 0) {
      uVal_10 = 0;
    }
    else {
      pU8_16 = (byte *)(*(int64_t *)(param_4 + 8) + (int64_t)*(int *)(param_5 + 8));
      uVal_10 = *pU8_16 & 0xf;
      uVal_10 = *(uint *)(pU8_16 + (-4 - (int64_t)(char)(&DAT_1806e3cf8)[uVal_10])) >>
               ((&DAT_1806e3d08)[uVal_10] & 0x1f);
    }
    if ((int)uVal_10 <= iVal_6) goto LAB_18069569a;
    if ((((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) &&
       (*(int64_t *)(param_1 + 0xc) == 0)) {
      lVal_8 = func_0x180692390();
      if (*(int64_t *)(lVal_8 + 0x20) == 0) goto LAB_180695633;
      lVal_8 = func_0x180692390();
      param_1 = *(int **)(lVal_8 + 0x20);
      lVal_8 = func_0x180692390();
      param_3 = *(uint64_t *)(lVal_8 + 0x28);
      local_140 = param_3;
      func_0x18067b150(*(uint64_t *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(int64_t *)(param_1 + 0xc) == 0))))))
      goto LAB_18069569a;
      lVal_8 = func_0x180692390();
      if (*(int64_t *)(lVal_8 + 0x38) != 0) {
        lVal_8 = func_0x180692390();
        uVal_3 = *(uint64_t *)(lVal_8 + 0x38);
        lVal_8 = func_0x180692390();
        *(uint64_t *)(lVal_8 + 0x38) = 0;
        ch_5 = func_0x180693cf0(param_1,uVal_3);
        param_3 = local_140;
        if (ch_5 == '\0') {
          ch_5 = func_0x180693e00(uVal_3);
          if (ch_5 != '\0') {
            __DestructExceptionObject(param_1,1);
            func_0x1806749a0(&local_118);
            func_0x18067a120(&local_118,&DAT_180839808);
            fnPtr_4 = (func_ptr_t )swi(3);
            (*fnPtr_4)();
            return;
          }
          func_0x18068d0ec();
          fnPtr_4 = (func_ptr_t )swi(3);
          (*fnPtr_4)();
          return;
        }
      }
    }
    func_0x180692d10(local_78,param_5,*(uint64_t *)(param_4 + 8));
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if (local_78[0] != 0) {
        local_180 = (byte *)CONCAT44(local_180._4_4_,param_7);
        local_188 = param_5;
        func_0x18067af70(&local_118,local_78,iVal_6,param_4);
        local_128 = local_118;
        local_148 = local_110;
        if (local_110 < local_100) {
          do {
            local_134 = *(int *)(local_118 + 0x18);
            if ((local_134 <= iVal_6) && (iVal_6 <= *(int *)(local_118 + 0x1c))) {
              local_138 = *(uint32_t *)(local_118 + 0x20);
              uVal_10 = 0;
              iVal_7 = *(int *)(local_118 + 0x24);
              local_88 = *(int64_t *)(param_4 + 8);
              local_c0 = 0;
              local_b8 = 0;
              local_b0 = 0;
              local_80 = **(uint32_t **)(param_4 + 0x10);
              local_ac = 0;
              local_a4 = 0;
              local_98 = ZEXT816(0);
              local_148 = local_110;
              if (iVal_7 == 0) {
                local_c8[0] = 0;
              }
              else {
                uVal_15 = *(byte *)(local_88 + iVal_7) & 0xf;
                local_c0 = (local_88 - (char)(&DAT_1806e3cf8)[uVal_15]) + (int64_t)iVal_7;
                local_c8[0] = *(uint *)(local_c0 + -4) >> ((&DAT_1806e3d08)[uVal_15] & 0x1f);
                local_b8 = local_c0;
                func_0x180692ff0(local_c8);
              }
              uVal_15 = local_c8[0];
              param_5 = local_130;
              if (local_c8[0] != 0) {
                do {
                  local_f0 = local_b0;
                  local_ef = local_af;
                  local_ed = local_ad;
                  local_ec = (uint32_t)local_ac;
                  local_e8 = local_ac._4_4_;
                  local_e4 = (uint32_t)local_a4;
                  local_e0 = local_a4._4_4_;
                  local_dc = local_9c;
                  local_d8 = local_98._0_8_;
                  local_d0 = local_98._8_8_;
                  iVal_6 = *(int *)(*(int64_t *)(param_1 + 0xc) + 0xc);
                  lVal_8 = func_0x18067b130();
                  pInt_14 = (int *)((int64_t)iVal_6 + lVal_8 + 4);
                  iVal_6 = *(int *)(*(int64_t *)(param_1 + 0xc) + 0xc);
                  lVal_8 = func_0x18067b130();
                  for (iVal_6 = *(int *)(lVal_8 + iVal_6); 0 < iVal_6; iVal_6 = iVal_6 + -1) {
                    iVal_7 = *pInt_14;
                    lVal_8 = func_0x18067b130();
                    lVal_8 = iVal_7 + lVal_8;
                    iVal_7 = func_0x180694030(&local_f0,lVal_8,*(uint64_t *)(param_1 + 0xc));
                    uVal_3 = local_120;
                    param_5 = local_130;
                    if (iVal_7 != 0) {
                      uVal_9 = func_0x18067af40(local_120,param_4,local_130,local_f8);
                      if (lVal_8 != 0) {
                        func_0x1806945f0(param_1,uVal_9,&local_f0,lVal_8);
                      }
                      lVal_13 = (int64_t)local_e0;
                      lVal_8 = func_0x18067b0f0();
                      local_188 = (byte *)(lVal_8 + lVal_13);
                      local_158 = param_6;
                      local_168 = &local_f0;
                      local_170 = CONCAT44(local_170._4_4_,local_138);
                      local_178 = local_134;
                      local_180 = param_5;
                      local_160 = param_4;
                      func_0x18067adc0(uVal_3,param_1,local_140,uVal_9);
                      local_118 = local_128;
                      local_110 = local_148;
                      iVal_6 = local_144;
                      goto LAB_18069548a;
                    }
                    pInt_14 = pInt_14 + 1;
                  }
                  func_0x180692ff0(local_c8);
                  uVal_10 = uVal_10 + 1;
                  local_118 = local_128;
                  param_5 = local_130;
                  local_110 = local_148;
                  iVal_6 = local_144;
                } while (uVal_10 != uVal_15);
              }
            }
LAB_18069548a:
            pU8_16 = *(byte **)(local_118 + 8);
            local_148 = local_110 + 1;
            lVal_8 = (int64_t)(char)(&DAT_1806e3cf8)[*pU8_16 & 0xf];
            bFlag_1 = (&DAT_1806e3d08)[*pU8_16 & 0xf];
            pU8_11 = pU8_16 + -lVal_8;
            uVal_10 = *(uint *)(pU8_11 + -4);
            *(byte **)(local_118 + 8) = pU8_11;
            *(uint *)(local_118 + 0x18) = uVal_10 >> (bFlag_1 & 0x1f);
            ch_5 = (&DAT_1806e3cf8)[*pU8_11 & 0xf];
            pU8_12 = pU8_16 + (-lVal_8 - (int64_t)ch_5);
            *(uint *)(local_118 + 0x1c) =
                 *(uint *)(pU8_12 + -4) >> ((&DAT_1806e3d08)[*pU8_11 & 0xf] & 0x1f);
            *(byte **)(local_118 + 8) = pU8_12;
            pU64_17 = (uint32_t *)
                      (pU8_16 +
                      ((-(int64_t)ch_5 - (int64_t)(char)(&DAT_1806e3cf8)[*pU8_12 & 0xf]) - lVal_8
                      ));
            *(uint *)(local_118 + 0x20) =
                 (uint)pU64_17[-1] >> ((&DAT_1806e3d08)[*pU8_12 & 0xf] & 0x1f);
            *(uint32_t **)(local_118 + 8) = pU64_17;
            uVal_2 = *pU64_17;
            *(uint32_t **)(local_118 + 8) = pU64_17 + 1;
            *(uint32_t *)(local_118 + 0x24) = uVal_2;
            local_110 = local_148;
          } while (local_148 < local_100);
        }
      }
      if (((*param_5 & 0x40) != 0) && (ch_5 = func_0x18067ad70(param_4,param_5), ch_5 == '\0')) {
        lVal_8 = func_0x180692390();
        *(int **)(lVal_8 + 0x20) = param_1;
        lVal_8 = func_0x180692390();
        *(uint64_t *)(lVal_8 + 0x28) = local_140;
        func_0x18068d0ec();
        fnPtr_4 = (func_ptr_t )swi(3);
        (*fnPtr_4)();
        return;
      }
    }
    else if (local_78[0] != 0) {
      if (param_6 != '\0') goto LAB_18069569a;
      local_170 = param_8;
      local_178 = param_7;
      local_180 = (byte *)CONCAT44(local_180._4_4_,iVal_6);
      local_188 = param_5;
      func_0x180695900(param_1,param_2,param_3,param_4);
    }
    lVal_8 = func_0x180692390();
    if (*(int64_t *)(lVal_8 + 0x38) == 0) {
LAB_180695633:
      func_0x180673080(local_50 ^ (uint64_t)auStack_1a8);
      return;
    }
  }
LAB_18069569a:
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x1806956a0
void func_0x1806956a0(int *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4, int64_t param_5,int param_6,uint32_t param_7,uint64_t param_8)
{
  int iVal_1;
  int iVal_2;
  PVOID pVoid_3;
  int iVal_4;
  int64_t lVal_5;
  PVOID pVoid_6;
  uint64_t uVal_7;
  byte *pU8_8;
  uint uVal_9;
  int *pInt_10;
  uint64_t in_stack_ffffffffffffff58;
  uint32_t uVal_11;
  uint8_t local_70 [8];
  int64_t local_68;
  uint64_t local_60;
  int64_t *local_58;
  uint local_50;
  uint local_40;
  
  if (*param_1 != -0x7ffffffd) {
    lVal_5 = func_0x180692390();
    if (*(int64_t *)(lVal_5 + 0x10) != 0) {
      lVal_5 = func_0x180692390();
      pVoid_3 = *(PVOID *)(lVal_5 + 0x10);
      pVoid_6 = EncodePointer((PVOID)0x0);
      if ((((pVoid_3 != pVoid_6) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) &&
         (iVal_4 = func_0x18067b3a0(param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_6),
         in_stack_ffffffffffffff58 = param_8, iVal_4 != 0)) {
        return;
      }
    }
    local_60 = *(uint64_t *)(param_4 + 8);
    local_68 = param_5;
    if (*(int *)(param_5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    func_0x18067ac40(&local_58,&local_68,param_6,param_4,param_5,param_7);
    uVal_9 = local_50;
    if (local_50 < local_40) {
      do {
        pInt_10 = (int *)((int64_t)*(int *)(*local_58 + 0x10) + (uint64_t)uVal_9 * 0x14 +
                         local_58[1]);
        iVal_4 = *pInt_10;
        if ((iVal_4 <= param_6) && (param_6 <= pInt_10[1])) {
          iVal_1 = pInt_10[2];
          pU8_8 = (byte *)(*(int64_t *)(param_4 + 8) + -0x14 +
                           (int64_t)pInt_10[4] + (uint64_t)(uint)pInt_10[3] * 0x14);
          iVal_2 = *(int *)(pU8_8 + 4);
          if ((iVal_2 != 0) && (lVal_5 = func_0x18067b0f0(), lVal_5 + iVal_2 != 0)) {
            iVal_2 = *(int *)(pU8_8 + 4);
            if (iVal_2 == 0) {
              lVal_5 = 0;
            }
            else {
              lVal_5 = func_0x18067b0f0();
              lVal_5 = lVal_5 + iVal_2;
            }
            if (*(char *)(lVal_5 + 0x10) != '\0') goto LAB_1806958ad;
          }
          uVal_11 = (uint32_t)((uint64_t)in_stack_ffffffffffffff58 >> 0x20);
          if ((*pU8_8 & 0x40) == 0) {
            uVal_7 = func_0x18067aa10(param_2,param_4,param_5,local_70);
            lVal_5 = func_0x18067b0f0();
            in_stack_ffffffffffffff58 = CONCAT44(uVal_11,iVal_4);
            func_0x18067ab10(param_2,param_1,param_3,uVal_7,*(int *)(pU8_8 + 0xc) + lVal_5,param_5,
                          in_stack_ffffffffffffff58,iVal_1,pU8_8,param_4,0);
          }
        }
LAB_1806958ad:
        uVal_9 = uVal_9 + 1;
      } while (uVal_9 < local_40);
    }
  }
  return;
}

// func_0x180695900
void func_0x180695900(int *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4, int64_t param_5,int param_6,uint32_t param_7,uint64_t param_8)
{
  byte bFlag_1;
  char ch_2;
  int iVal_3;
  uint32_t uVal_4;
  PVOID pVoid_5;
  byte *pU8_6;
  int iVal_7;
  int64_t lVal_8;
  PVOID pVoid_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  uint uVal_12;
  byte *pU8_13;
  byte *pU8_14;
  int64_t lVal_15;
  uint32_t *pU64_16;
  uint8_t auStack_178 [32];
  int64_t local_158;
  uint64_t local_150;
  uint64_t local_148;
  int local_140;
  uint8_t *local_138;
  int64_t local_130;
  uint8_t local_128;
  uint local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  int *local_f8;
  int64_t local_f0;
  uint local_e8;
  uint local_d8;
  uint8_t local_d0 [8];
  uint local_c8 [2];
  int64_t local_c0;
  int64_t local_b8;
  uint8_t local_b0 [4];
  uint64_t local_ac;
  uint64_t local_a4;
  uint8_t local_98 [16];
  int64_t local_88;
  uint32_t local_80;
  int local_78 [10];
  uint64_t local_50;
  
  local_50 = DAT_18083cf40 ^ (uint64_t)auStack_178;
  local_110 = param_8;
  local_108 = param_3;
  local_100 = param_2;
  local_f8 = param_1;
  if (*param_1 != -0x7ffffffd) {
    lVal_8 = func_0x180692390();
    if (*(int64_t *)(lVal_8 + 0x10) != 0) {
      lVal_8 = func_0x180692390();
      pVoid_5 = *(PVOID *)(lVal_8 + 0x10);
      pVoid_9 = EncodePointer((PVOID)0x0);
      if (((pVoid_5 != pVoid_9) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) {
        local_140 = param_6;
        local_148 = local_110;
        local_150 = CONCAT44(local_150._4_4_,param_7);
        local_158 = param_5;
        iVal_7 = func_0x18067b350(param_1,param_2,local_108,param_4);
        if (iVal_7 != 0) goto LAB_180695c49;
      }
    }
    func_0x180692d10(local_78,param_5,*(uint64_t *)(param_4 + 8));
    if (local_78[0] == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_150 = CONCAT44(local_150._4_4_,param_7);
    local_158 = param_5;
    func_0x18067af70(&local_f0,local_78,param_6,param_4);
    local_118 = local_e8;
    if (local_e8 < local_d8) {
      do {
        lVal_8 = 0;
        iVal_7 = *(int *)(local_f0 + 0x18);
        if ((iVal_7 <= param_6) && (param_6 <= *(int *)(local_f0 + 0x1c))) {
          iVal_3 = *(int *)(local_f0 + 0x24);
          local_88 = *(int64_t *)(param_4 + 8);
          local_110 = CONCAT44(local_110._4_4_,*(uint32_t *)(local_f0 + 0x20));
          local_80 = **(uint32_t **)(param_4 + 0x10);
          local_c0 = 0;
          local_b8 = 0;
          local_b0[0] = 0;
          local_ac = 0;
          local_a4 = 0;
          local_98 = ZEXT816(0);
          if (iVal_3 == 0) {
            local_c8[0] = 0;
          }
          else {
            uVal_12 = *(byte *)(iVal_3 + local_88) & 0xf;
            local_c0 = ((int64_t)iVal_3 - (int64_t)(char)(&DAT_1806e3cf8)[uVal_12]) + local_88;
            local_c8[0] = *(uint *)(local_c0 + -4) >> ((&DAT_1806e3d08)[uVal_12] & 0x1f);
            local_b8 = local_c0;
            func_0x180692ff0(local_c8);
          }
          func_0x180692e00(local_c8,0);
          func_0x180692e00(local_c8,local_c8[0] - 1);
          lVal_15 = (int64_t)local_ac._4_4_;
          if ((local_ac._4_4_ != 0) && (lVal_10 = func_0x18067b0f0(), lVal_10 + lVal_15 != 0)) {
            lVal_15 = (int64_t)local_ac._4_4_;
            if (local_ac._4_4_ != 0) {
              lVal_8 = func_0x18067b0f0();
              lVal_8 = lVal_8 + lVal_15;
            }
            if (*(char *)(lVal_8 + 0x10) != '\0') goto LAB_180695b86;
          }
          if ((local_ac & 0x40) == 0) {
            uVal_11 = func_0x18067af40(local_100,param_4,param_5,local_d0);
            lVal_8 = (int64_t)local_a4._4_4_;
            local_158 = func_0x18067b0f0();
            local_138 = local_b0;
            local_158 = local_158 + lVal_8;
            local_128 = 0;
            local_140 = (int)local_110;
            local_148 = CONCAT44(local_148._4_4_,iVal_7);
            local_150 = param_5;
            local_130 = param_4;
            func_0x18067adc0(local_100,local_f8,local_108,uVal_11);
          }
        }
LAB_180695b86:
        pU8_6 = *(byte **)(local_f0 + 8);
        lVal_8 = (int64_t)(char)(&DAT_1806e3cf8)[*pU8_6 & 0xf];
        bFlag_1 = (&DAT_1806e3d08)[*pU8_6 & 0xf];
        pU8_13 = pU8_6 + -lVal_8;
        uVal_12 = *(uint *)(pU8_13 + -4);
        *(byte **)(local_f0 + 8) = pU8_13;
        *(uint *)(local_f0 + 0x18) = uVal_12 >> (bFlag_1 & 0x1f);
        ch_2 = (&DAT_1806e3cf8)[*pU8_13 & 0xf];
        pU8_14 = pU8_6 + (-lVal_8 - (int64_t)ch_2);
        *(uint *)(local_f0 + 0x1c) =
             *(uint *)(pU8_14 + -4) >> ((&DAT_1806e3d08)[*pU8_13 & 0xf] & 0x1f);
        *(byte **)(local_f0 + 8) = pU8_14;
        pU64_16 = (uint32_t *)
                  (pU8_6 + ((-(int64_t)ch_2 - (int64_t)(char)(&DAT_1806e3cf8)[*pU8_14 & 0xf]) -
                            lVal_8));
        *(uint *)(local_f0 + 0x20) = (uint)pU64_16[-1] >> ((&DAT_1806e3d08)[*pU8_14 & 0xf] & 0x1f);
        *(uint32_t **)(local_f0 + 8) = pU64_16;
        uVal_4 = *pU64_16;
        *(uint32_t **)(local_f0 + 8) = pU64_16 + 1;
        local_118 = local_118 + 1;
        *(uint32_t *)(local_f0 + 0x24) = uVal_4;
      } while (local_118 < local_d8);
    }
  }
LAB_180695c49:
  func_0x180673080(local_50 ^ (uint64_t)auStack_178);
  return;
}

// func_0x180695c70
uint64_t func_0x180695c70(char *param_1,int64_t param_2,int64_t param_3)
{
  char ch_1;
  uint32_t *pU64_2;
  char *fnPtr_3;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      fnPtr_3 = param_1;
      do {
        ch_1 = fnPtr_3[param_3 - (int64_t)param_1];
        *fnPtr_3 = ch_1;
        fnPtr_3 = fnPtr_3 + 1;
        if (ch_1 == '\0') {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = '\0';
      pU64_2 = (uint32_t *)func_0x1806823dc();
      *pU64_2 = 0x22;
      func_0x180684970();
      return 0x22;
    }
    *param_1 = '\0';
  }
  pU64_2 = (uint32_t *)func_0x1806823dc();
  *pU64_2 = 0x16;
  func_0x180684970();
  return 0x16;
}

// func_0x180695cf0
uint32_t func_0x180695cf0(void)
{
  BOOL BVar1;
  uint uVal_2;
  uint64_t uVal_3;
  
  uVal_3 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_180842a80 + uVal_3 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVal_3 = (uint64_t)DAT_180842aa8;
      uVal_2 = DAT_180842aa8;
      while (uVal_2 != 0) {
        uVal_2 = (int)uVal_3 - 1;
        uVal_3 = (uint64_t)uVal_2;
        DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180842a80 + uVal_3 * 0x28));
        DAT_180842aa8 = DAT_180842aa8 - 1;
      }
      return 0;
    }
    DAT_180842aa8 = DAT_180842aa8 + 1;
    uVal_2 = (int)uVal_3 + 1;
    uVal_3 = (uint64_t)uVal_2;
  } while (uVal_2 == 0);
  return 1;
}

// func_0x180695d80
uint8_t func_0x180695d80(void)
{
  uint uVal_1;
  uint64_t uVal_2;
  
  uVal_2 = (uint64_t)DAT_180842aa8;
  if (DAT_180842aa8 != 0) {
    do {
      uVal_1 = (int)uVal_2 - 1;
      uVal_2 = (uint64_t)uVal_1;
      DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180842a80 + uVal_2 * 0x28));
      DAT_180842aa8 = DAT_180842aa8 - 1;
    } while (uVal_1 != 0);
  }
  return 1;
}

// func_0x180695dd0
void func_0x180695dd0(LPVOID param_1)
{
  uint32_t *pU64_1;
  BOOL BVar2;
  DWORD DVar3;
  uint32_t uVal_4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_180842c78,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVal_4 = func_0x18068244c(DVar3);
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = uVal_4;
  }
  return;
}

// _malloc_base
/* Library Function - Single Match
    _malloc_base
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    _malloc_base
   
   Library: Visual Studio 2019 Release */
LPVOID _malloc_base(uint64_t param_1)
{
  int iVal_1;
  LPVOID pVoid_2;
  uint32_t *pU64_3;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pVoid_2 = HeapAlloc(DAT_180842c78,0,param_1);
      if (pVoid_2 != (LPVOID)0x0) {
        return pVoid_2;
      }
      iVal_1 = func_0x1806a68f0();
    } while ((iVal_1 != 0) && (iVal_1 = func_0x180681550(param_1), iVal_1 != 0));
  }
  pU64_3 = (uint32_t *)func_0x1806823dc();
  *pU64_3 = 0xc;
  return (LPVOID)0x0;
}

// func_0x180695e90
void func_0x180695e90(UINT param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)
{
  bool bFlag_1;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bFlag_1 = param_1 == 0xc431;
LAB_180695edd:
          if (!bFlag_1) goto LAB_180695ee1;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_180695f1b;
        if (param_1 != 0xdeaa) {
          bFlag_1 = param_1 == 0xdeab;
          goto LAB_180695edd;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_180695ee1;
LAB_180695f1b:
    param_2 = param_2 & 8;
    goto LAB_180695ee1;
  }
  param_2 = 0;
LAB_180695ee1:
                    /* WARNING: Could not recover jumptable at 0x000180695ee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MultiByteToWideChar(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// func_0x180695f20
void func_0x180695f20(uint param_1,uint param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6, LPBOOL param_7,LPBOOL param_8)
{
  LPBOOL lpUsedDefaultChar;
  int iVal_1;
  DWORD dwFlags;
  LPBOOL pBool_2;
  bool bFlag_3;
  
  pBool_2 = (LPBOOL)0x0;
  dwFlags = 0;
  if (param_1 < 0xdead) {
    if (param_1 == 0xdeac) goto LAB_180695fc0;
    if (0xc433 < param_1) {
      if ((param_1 == 0xc435) || (param_1 == 0xd698)) goto LAB_180695fc0;
      iVal_1 = param_1 - 0xdeaa;
      goto LAB_180695fb1;
    }
    if ((((param_1 == 0xc433) || (param_1 == 0x2a)) || (param_1 == 0xc42c)) ||
       ((param_1 == 0xc42d || (param_1 == 0xc42e)))) goto LAB_180695fc0;
    bFlag_3 = param_1 == 0xc431;
  }
  else {
    if (((((param_1 == 0xdead) || (param_1 == 0xdeae)) || (param_1 == 0xdeaf)) ||
        ((param_1 == 0xdeb0 || (param_1 == 0xdeb1)))) ||
       ((param_1 == 0xdeb2 || (param_1 == 0xdeb3)))) goto LAB_180695fc0;
    iVal_1 = param_1 - 65000;
LAB_180695fb1:
    if (iVal_1 == 0) goto LAB_180695fc0;
    bFlag_3 = iVal_1 == 1;
  }
  if (!bFlag_3) {
    dwFlags = param_2 & 0xffffff7f;
  }
LAB_180695fc0:
  lpUsedDefaultChar = param_8;
  if ((param_1 - 65000 < 2) &&
     (lpUsedDefaultChar = pBool_2, param_7 = pBool_2, param_8 != (LPBOOL)0x0)) {
    *param_8 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000180695ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WideCharToMultiByte(param_1,dwFlags,param_3,param_4,param_5,param_6,(LPCSTR)param_7,
                      lpUsedDefaultChar);
  return;
}

// func_0x180696044
uint32_t func_0x180696044(void)
{
  if (DAT_18083d6a0 != 0xffffffff) {
    FlsFree(DAT_18083d6a0);
    DAT_18083d6a0 = 0xffffffff;
  }
  return 1;
}

// __vcrt_getptd
/* Library Function - Single Match
    __vcrt_getptd
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __vcrt_getptd
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __vcrt_getptd(void)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x1806960c8();
  if (lVal_1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x180696084
void func_0x180696084(void)
{
  PVOID pVoid_1;
  int64_t lVal_2;
  
  if (DAT_18083d6a0 == 0xffffffff) {
    pVoid_1 = (PVOID)0x0;
  }
  else {
    pVoid_1 = FlsGetValue(DAT_18083d6a0);
  }
  if (pVoid_1 != (PVOID)0xffffffffffffffff) {
    if (pVoid_1 == (PVOID)0x0) {
      lVal_2 = func_0x180696454();
      if (lVal_2 == 0) goto LAB_1806960c0;
    }
    return;
  }
LAB_1806960c0:
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x1806960c8
PVOID func_0x1806960c8(void)
{
  DWORD dwErrCode;
  PVOID pVoid_1;
  PVOID pVoid_2;
  
  pVoid_2 = (PVOID)0x0;
  if (DAT_180842ab8 == '\0') {
    dwErrCode = GetLastError();
    pVoid_1 = pVoid_2;
    if (DAT_18083d6a0 != 0xffffffff) {
      pVoid_1 = FlsGetValue(DAT_18083d6a0);
    }
    if ((pVoid_1 != (PVOID)0xffffffffffffffff) && (pVoid_2 = pVoid_1, pVoid_1 == (PVOID)0x0)) {
      pVoid_2 = (PVOID)func_0x180696454();
    }
    SetLastError(dwErrCode);
  }
  else {
    pVoid_1 = pVoid_2;
    if (DAT_18083d6a0 != 0xffffffff) {
      pVoid_1 = (PVOID)func_0x180696c70();
    }
    if ((pVoid_1 != (PVOID)0xffffffffffffffff) && (pVoid_2 = pVoid_1, pVoid_1 == (PVOID)0x0)) {
      pVoid_2 = (PVOID)func_0x180696454();
    }
  }
  return pVoid_2;
}

// func_0x180696158
void func_0x180696158(void)
{
  __acrt_ptd *p_Var1;
  
  if (DAT_18083d6a0 == 0xffffffff) {
    p_Var1 = (__acrt_ptd *)0x0;
  }
  else {
    p_Var1 = (__acrt_ptd *)FlsGetValue(DAT_18083d6a0);
  }
  if (p_Var1 != (__acrt_ptd *)0x0) {
    FlsSetValue(DAT_18083d6a0,(PVOID)0x0);
    destroy_ptd_array(p_Var1);
    func_0x180695dd0(p_Var1);
  }
  return;
}

// func_0x1806961a8
PVOID func_0x1806961a8(uint64_t param_1,int64_t param_2)
{
  PVOID pVoid_1;
  PVOID pVoid_2;
  
  pVoid_2 = (PVOID)0x0;
  pVoid_1 = pVoid_2;
  if (DAT_18083d6a0 != 0xffffffff) {
    pVoid_1 = FlsGetValue(DAT_18083d6a0);
  }
  if ((pVoid_1 != (PVOID)0xffffffffffffffff) &&
     ((pVoid_1 != (PVOID)0x0 || (pVoid_1 = (PVOID)func_0x180696454(), pVoid_1 != (PVOID)0x0)))) {
    pVoid_2 = (PVOID)(param_2 * 0x3c8 + (int64_t)pVoid_1);
  }
  return pVoid_2;
}

// replace_current_thread_locale_nolock
/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)
{
  uint8_t **ptr2_U64_1;
  
  if (*(int64_t *)(param_1 + 0x90) != 0) {
    __acrt_release_locale_ref();
    ptr2_U64_1 = *(uint8_t ***)(param_1 + 0x90);
    if (((ptr2_U64_1 != DAT_180842ac0) && (ptr2_U64_1 != &PTR_DAT_18083d6b0)) &&
       (*(int *)(ptr2_U64_1 + 2) == 0)) {
      __acrt_free_locale();
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    __acrt_add_locale_ref(param_2);
  }
  return;
}

// construct_ptd_array
/* Library Function - Single Match
    void __cdecl construct_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    void __cdecl construct_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void __cdecl construct_ptd_array(__acrt_ptd *param_1)
{
  uint8_t local_res10 [8];
  uint32_t local_res18 [2];
  uint32_t local_res20 [2];
  uint32_t local_38;
  uint32_t local_34;
  __acrt_ptd *local_30;
  uint64_t *local_28;
  __acrt_ptd **local_20;
  __acrt_ptd **local_18;
  uint64_t **local_10;
  
  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38 = 4;
  local_34 = 4;
  local_28 = &DAT_180842ac0;
  *(uint32_t *)(param_1 + 0x28) = 1;
  *(uint8_t **)param_1 = &DAT_1806e4b30;
  *(uint32_t *)(param_1 + 0x3a8) = 1;
  *(uint8_t **)(param_1 + 0x88) = &DAT_18083da30;
  *(uint16_t *)(param_1 + 0xbc) = 0x43;
  *(uint16_t *)(param_1 + 0x1c2) = 0x43;
  *(uint64_t *)(param_1 + 0x3a0) = 0;
  local_30 = param_1;
  operator()<>(local_res10,local_res20,&local_20,local_res18);
  operator()<>(local_res10,&local_34,&local_18,&local_38);
  return;
}

// destroy_ptd_array
/* Library Function - Single Match
    void __cdecl destroy_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    void __cdecl destroy_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void __cdecl destroy_ptd_array(__acrt_ptd *param_1)
{
  uint8_t local_res10 [8];
  uint32_t local_res18 [2];
  uint32_t local_res20 [2];
  uint32_t local_28;
  uint32_t local_24;
  __acrt_ptd *local_20;
  __acrt_ptd **local_18;
  __acrt_ptd **local_10;
  
  local_18 = &local_20;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_10 = &local_20;
  local_28 = 4;
  local_24 = 4;
  local_20 = param_1;
  if (*(uint8_t **)param_1 != &DAT_1806e4b30) {
    func_0x180695dd0(*(uint8_t **)param_1);
  }
  func_0x180695dd0(*(uint64_t *)(local_20 + 0x70));
  func_0x180695dd0(*(uint64_t *)(local_20 + 0x58));
  func_0x180695dd0(*(uint64_t *)(local_20 + 0x60));
  func_0x180695dd0(*(uint64_t *)(local_20 + 0x68));
  func_0x180695dd0(*(uint64_t *)(local_20 + 0x48));
  func_0x180695dd0(*(uint64_t *)(local_20 + 0x50));
  func_0x180695dd0(*(uint64_t *)(local_20 + 0x78));
  func_0x180695dd0(*(uint64_t *)(local_20 + 0x80));
  func_0x180695dd0(*(uint64_t *)(local_20 + 0x3c0));
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  operator()<>(local_res10,&local_24,&local_10,&local_28);
  return;
}

// func_0x180696454
__acrt_ptd * func_0x180696454(void)
{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  
  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_18083d6a0,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = (__acrt_ptd *)_calloc_base(1);
    if (lpFlsData != (__acrt_ptd *)0x0) {
      BVar1 = FlsSetValue(DAT_18083d6a0,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_18083d6a0,(PVOID)0x0);
        func_0x180695dd0(lpFlsData);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(lpFlsData);
        func_0x180695dd0(0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_18083d6a0,(PVOID)0x0);
    func_0x180695dd0(0);
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}

// operator()<>
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_0ae27a3a962d80f24befdcbee591983d>,class <lambda_8d0ee55de4b1038c4002e0adecdf1839> &
   __ptr64,class <lambda_dc504788e8f1664fe9b84e20bfb512f2> >(class
   <lambda_0ae27a3a962d80f24befdcbee591983d> && __ptr64,class
   <lambda_8d0ee55de4b1038c4002e0adecdf1839> & __ptr64,class
   <lambda_dc504788e8f1664fe9b84e20bfb512f2> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5>,class <lambda_876a65b173b8412d3a47c70a915b0cf4> &
   __ptr64,class <lambda_41932305e351933ebe8f8be3ed8bb5dc> >(class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5> && __ptr64,class
   <lambda_876a65b173b8412d3a47c70a915b0cf4> & __ptr64,class
   <lambda_41932305e351933ebe8f8be3ed8bb5dc> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_0ae27a3a962d80f24befdcbee591983d>,class <lambda_8d0ee55de4b1038c4002e0adecdf1839> &
   __ptr64,class <lambda_dc504788e8f1664fe9b84e20bfb512f2> >(class
   <lambda_0ae27a3a962d80f24befdcbee591983d> && __ptr64,class
   <lambda_8d0ee55de4b1038c4002e0adecdf1839> & __ptr64,class
   <lambda_dc504788e8f1664fe9b84e20bfb512f2> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5>,class <lambda_876a65b173b8412d3a47c70a915b0cf4> &
   __ptr64,class <lambda_41932305e351933ebe8f8be3ed8bb5dc> >(class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5> && __ptr64,class
   <lambda_876a65b173b8412d3a47c70a915b0cf4> & __ptr64,class
   <lambda_41932305e351933ebe8f8be3ed8bb5dc> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(uint64_t param_1,uint32_t *param_2,int64_t **param_3,uint32_t *param_4)
{
  FID_conflict___acrt_lock(*param_2);
  LOCK();
  **(int **)(**param_3 + 0x88) = **(int **)(**param_3 + 0x88) + 1;
  UNLOCK();
  FID_conflict___acrt_lock(*param_4);
  return;
}

// operator()<>
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf>,class <lambda_4466841279450cc726390878d4a41900> &
   __ptr64,class <lambda_341c25c0346d94847f1f3c463c57e077> >(class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf> && __ptr64,class
   <lambda_4466841279450cc726390878d4a41900> & __ptr64,class
   <lambda_341c25c0346d94847f1f3c463c57e077> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11>,class <lambda_92619d2358a28f41a33ba319515a20b9> &
   __ptr64,class <lambda_6992ecaafeb10aed2b74cb1fae11a551> >(class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11> && __ptr64,class
   <lambda_92619d2358a28f41a33ba319515a20b9> & __ptr64,class
   <lambda_6992ecaafeb10aed2b74cb1fae11a551> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf>,class <lambda_4466841279450cc726390878d4a41900> &
   __ptr64,class <lambda_341c25c0346d94847f1f3c463c57e077> >(class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf> && __ptr64,class
   <lambda_4466841279450cc726390878d4a41900> & __ptr64,class
   <lambda_341c25c0346d94847f1f3c463c57e077> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11>,class <lambda_92619d2358a28f41a33ba319515a20b9> &
   __ptr64,class <lambda_6992ecaafeb10aed2b74cb1fae11a551> >(class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11> && __ptr64,class
   <lambda_92619d2358a28f41a33ba319515a20b9> & __ptr64,class
   <lambda_6992ecaafeb10aed2b74cb1fae11a551> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(uint64_t param_1,uint32_t *param_2,uint64_t *param_3,uint32_t *param_4)
{
  FID_conflict___acrt_lock(*param_2);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_3,**(__crt_locale_data ***)param_3[1])
  ;
  FID_conflict___acrt_lock(*param_4);
  return;
}

// operator()<>
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_46352004c1216016012b18bd6f87e700>,class <lambda_3bd07e1a1191394380780325891bf33f> &
   __ptr64,class <lambda_334532d3f185bcaa59b5be82d7d22bff> >(class
   <lambda_46352004c1216016012b18bd6f87e700> && __ptr64,class
   <lambda_3bd07e1a1191394380780325891bf33f> & __ptr64,class
   <lambda_334532d3f185bcaa59b5be82d7d22bff> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_f2e299630e499de9f9a165e60fcd3db5>,class <lambda_2ae9d31cdba2644fcbeaf08da7c24588> &
   __ptr64,class <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> >(class
   <lambda_f2e299630e499de9f9a165e60fcd3db5> && __ptr64,class
   <lambda_2ae9d31cdba2644fcbeaf08da7c24588> & __ptr64,class
   <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_46352004c1216016012b18bd6f87e700>,class <lambda_3bd07e1a1191394380780325891bf33f> &
   __ptr64,class <lambda_334532d3f185bcaa59b5be82d7d22bff> >(class
   <lambda_46352004c1216016012b18bd6f87e700> && __ptr64,class
   <lambda_3bd07e1a1191394380780325891bf33f> & __ptr64,class
   <lambda_334532d3f185bcaa59b5be82d7d22bff> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_f2e299630e499de9f9a165e60fcd3db5>,class <lambda_2ae9d31cdba2644fcbeaf08da7c24588> &
   __ptr64,class <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> >(class
   <lambda_f2e299630e499de9f9a165e60fcd3db5> && __ptr64,class
   <lambda_2ae9d31cdba2644fcbeaf08da7c24588> & __ptr64,class
   <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(uint64_t param_1,uint32_t *param_2,int64_t **param_3,uint32_t *param_4)
{
  int iVal_1;
  int *pInt_2;
  
  FID_conflict___acrt_lock(*param_2);
  pInt_2 = *(int **)(**param_3 + 0x88);
  if (pInt_2 != (int *)0x0) {
    LOCK();
    iVal_1 = *pInt_2;
    *pInt_2 = *pInt_2 + -1;
    UNLOCK();
    if ((iVal_1 == 1) && (pInt_2 != (int *)&DAT_18083da30)) {
      func_0x180695dd0();
    }
  }
  FID_conflict___acrt_lock(*param_4);
  return;
}

// operator()<>
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_2d41944a1d46af3157314b8a01080d33>,class <lambda_8f455de75cd7d7f24b4096f044d8b9e6> &
   __ptr64,class <lambda_aa500f224e6afead328df44964fe2772> >(class
   <lambda_2d41944a1d46af3157314b8a01080d33> && __ptr64,class
   <lambda_8f455de75cd7d7f24b4096f044d8b9e6> & __ptr64,class
   <lambda_aa500f224e6afead328df44964fe2772> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095>,class <lambda_698284760c8add0bfb0756c19673e34b> &
   __ptr64,class <lambda_dfb8eca1e75fef3034a8fb18dd509707> >(class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095> && __ptr64,class
   <lambda_698284760c8add0bfb0756c19673e34b> & __ptr64,class
   <lambda_dfb8eca1e75fef3034a8fb18dd509707> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_2d41944a1d46af3157314b8a01080d33>,class <lambda_8f455de75cd7d7f24b4096f044d8b9e6> &
   __ptr64,class <lambda_aa500f224e6afead328df44964fe2772> >(class
   <lambda_2d41944a1d46af3157314b8a01080d33> && __ptr64,class
   <lambda_8f455de75cd7d7f24b4096f044d8b9e6> & __ptr64,class
   <lambda_aa500f224e6afead328df44964fe2772> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095>,class <lambda_698284760c8add0bfb0756c19673e34b> &
   __ptr64,class <lambda_dfb8eca1e75fef3034a8fb18dd509707> >(class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095> && __ptr64,class
   <lambda_698284760c8add0bfb0756c19673e34b> & __ptr64,class
   <lambda_dfb8eca1e75fef3034a8fb18dd509707> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(uint64_t param_1,uint32_t *param_2,uint64_t *param_3,uint32_t *param_4)
{
  FID_conflict___acrt_lock(*param_2);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_3,(__crt_locale_data *)0x0);
  FID_conflict___acrt_lock(*param_4);
  return;
}

// func_0x180696634
void func_0x180696634(int64_t param_1,int64_t *param_2)
{
  int64_t lVal_1;
  
  if ((*param_2 != DAT_180842ac0) && ((DAT_18083e070 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVal_1 = func_0x1806a0b9c();
    *param_2 = lVal_1;
  }
  return;
}

// func_0x180696668
void func_0x180696668(int64_t param_1,int64_t *param_2)
{
  int64_t lVal_1;
  
  if ((*param_2 != DAT_1808430c8) && ((DAT_18083e070 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVal_1 = func_0x180699084();
    *param_2 = lVal_1;
  }
  return;
}

// func_0x18069669c
void func_0x18069669c(int64_t param_1,int64_t *param_2,int64_t param_3)
{
  int64_t lVal_1;
  
  if ((*param_2 != (&DAT_180842ac0)[param_3]) && ((DAT_18083e070 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVal_1 = func_0x1806a0b9c();
    *param_2 = lVal_1;
  }
  return;
}

// func_0x1806966d4
void func_0x1806966d4(int64_t param_1,int64_t *param_2,int64_t param_3)
{
  int64_t lVal_1;
  
  if ((*param_2 != (&DAT_1808430c8)[param_3]) && ((DAT_18083e070 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVal_1 = func_0x180699084();
    *param_2 = lVal_1;
  }
  return;
}

// func_0x180696710
uint64_t func_0x180696710(short *param_1,int64_t param_2,int64_t param_3)
{
  short sz_1;
  uint32_t *pU64_2;
  short *pSize_3;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      pSize_3 = param_1;
      do {
        sz_1 = *(short *)((param_3 - (int64_t)param_1) + (int64_t)pSize_3);
        *pSize_3 = sz_1;
        pSize_3 = pSize_3 + 1;
        if (sz_1 == 0) {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
      pU64_2 = (uint32_t *)func_0x1806823dc();
      *pU64_2 = 0x22;
      func_0x180684970();
      return 0x22;
    }
    *param_1 = 0;
  }
  pU64_2 = (uint32_t *)func_0x1806823dc();
  *pU64_2 = 0x16;
  func_0x180684970();
  return 0x16;
}

// func_0x1806967a0
/* WARNING: Removing unreachable block (ram,0x00018069680d) */
/* WARNING: Removing unreachable block (ram,0x00018069680d) */
uint64_t func_0x1806967a0(ushort *param_1,ushort *param_2)
{
  ushort uVal_1;
  ushort uVal_2;
  uint uVal_3;
  uint64_t uVal_4;
  uint32_t *pU64_5;
  int64_t lVal_6;
  uint uVal_7;
  int64_t local_38;
  int64_t local_30;
  uint64_t uStack_28;
  char local_20;
  
  if (DAT_1808429bc != 0) {
    if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
      local_20 = '\0';
      if (DAT_1808429bc == 0) {
        local_30 = CONCAT44(PTR_PTR_DAT_18083d808._4_4_,PTR_PTR_DAT_18083d808._0_4_);
        uStack_28 = CONCAT44(PTR_DAT_18083d810._4_4_,PTR_DAT_18083d810._0_4_);
      }
      else {
        local_38 = __vcrt_getptd();
        local_30 = *(int64_t *)(local_38 + 0x90);
        uStack_28 = *(uint64_t *)(local_38 + 0x88);
        func_0x180696634(local_38,&local_30);
        func_0x180696668(local_38,&uStack_28);
        if ((*(uint *)(local_38 + 0x3a8) & 2) == 0) {
          *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) | 2;
          local_20 = '\x01';
        }
      }
      lVal_6 = local_30;
      if (*(int64_t *)(local_30 + 0x138) == 0) {
        uVal_3 = func_0x1806969a0(param_1,param_2);
      }
      else {
        do {
          uVal_1 = *param_1;
          param_1 = param_1 + 1;
          uVal_2 = *param_2;
          param_2 = param_2 + 1;
          uVal_3 = (uint)uVal_2;
          uVal_7 = (uint)uVal_1;
          if (uVal_1 != uVal_2) {
            if (uVal_1 < 0x100) {
              uVal_4 = (uint64_t)uVal_1 & 0xff;
              if (((&DAT_1806e4562)[uVal_4 * 2] & 1) != 0) {
                uVal_4 = (uint64_t)*(byte *)(uVal_4 + *(int64_t *)(lVal_6 + 0x110));
              }
              uVal_1 = (ushort)uVal_4;
            }
            else {
              uVal_1 = func_0x1806a692c(uVal_1,&local_30);
              lVal_6 = local_30;
            }
            uVal_3 = (uint)uVal_2;
            uVal_7 = (uint)uVal_1;
            if (uVal_1 != uVal_2) {
              if (uVal_2 < 0x100) {
                uVal_4 = (uint64_t)uVal_2 & 0xff;
                if (((&DAT_1806e4562)[uVal_4 * 2] & 1) != 0) {
                  uVal_4 = (uint64_t)*(byte *)(uVal_4 + *(int64_t *)(lVal_6 + 0x110));
                }
                uVal_2 = (ushort)uVal_4;
              }
              else {
                uVal_2 = func_0x1806a692c(uVal_2,&local_30);
                lVal_6 = local_30;
              }
              uVal_3 = (uint)uVal_2;
              uVal_7 = (uint)uVal_1;
            }
          }
          uVal_3 = uVal_7 - uVal_3;
        } while ((uVal_3 == 0) && (uVal_7 != 0));
      }
      if (local_20 != '\0') {
        *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
      }
      return (uint64_t)uVal_3;
    }
    pU64_5 = (uint32_t *)func_0x1806823dc();
    *pU64_5 = 0x16;
    func_0x180684970();
    return 0x7fffffff;
  }
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    do {
      uVal_1 = *param_1;
      uVal_3 = (uint)uVal_1;
      param_1 = param_1 + 1;
      uVal_2 = *param_2;
      param_2 = param_2 + 1;
      uVal_7 = (uint)uVal_2;
      if ((uint)uVal_1 != (uint)uVal_2) {
        uVal_3 = uVal_1 + 0x20;
        if (0x19 < uVal_1 - 0x41) {
          uVal_3 = (uint)uVal_1;
        }
        uVal_7 = uVal_2 + 0x20;
        if (0x19 < uVal_2 - 0x41) {
          uVal_7 = (uint)uVal_2;
        }
      }
    } while ((uVal_3 - uVal_7 == 0) && (uVal_3 != 0));
    return (uint64_t)(uVal_3 - uVal_7);
  }
  uVal_4 = func_0x180696a00();
  return uVal_4;
}

// func_0x1806969a0
void func_0x1806969a0(ushort *param_1,ushort *param_2)
{
  ushort uVal_1;
  ushort uVal_2;
  uint uVal_3;
  uint uVal_4;
  
  do {
    uVal_1 = *param_1;
    uVal_3 = (uint)uVal_1;
    param_1 = param_1 + 1;
    uVal_2 = *param_2;
    param_2 = param_2 + 1;
    uVal_4 = (uint)uVal_2;
    if ((uint)uVal_1 != (uint)uVal_2) {
      uVal_3 = uVal_1 + 0x20;
      if (0x19 < uVal_1 - 0x41) {
        uVal_3 = (uint)uVal_1;
      }
      uVal_4 = uVal_2 + 0x20;
      if (0x19 < uVal_2 - 0x41) {
        uVal_4 = (uint)uVal_2;
      }
    }
  } while ((uVal_3 == uVal_4) && (uVal_3 != 0));
  return;
}

// func_0x180696a00
uint64_t func_0x180696a00(int64_t param_1,int64_t param_2)
{
  uint32_t *pU64_1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x16;
    func_0x180684970();
  }
  return 0x7fffffff;
}

// func_0x180696a9c
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
uint64_t func_0x180696a9c(void)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  
  if (DAT_180877000 == (func_ptr_t )0xffffffffffffffff) {
    return 1;
  }
  fnPtr_1 = DAT_180877000;
  if ((DAT_180877000 == (func_ptr_t )0x0) &&
     (fnPtr_1 = (func_ptr_t )func_0x1806974fc(0,"AreFileApisANSI",&DAT_1806e76e8,&DAT_1806e76ec),
     fnPtr_1 == (func_ptr_t )0x0)) {
    return 1;
  }
  uVal_2 = (*fnPtr_1)();
  return uVal_2;
}

// func_0x180696ae8
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x180696ae8(uint64_t param_1,DWORD param_2,PCNZWCH param_3,int param_4,PCNZWCH param_5, int param_6,uint64_t param_7,uint64_t param_8,uint64_t param_9)
{
  LCID Locale;
  func_ptr_t fnPtr_1;
  
  fnPtr_1 = (func_ptr_t )func_0x1806976b0();
  if (fnPtr_1 == (func_ptr_t )0x0) {
    Locale = func_0x1806970ec(param_1,0);
    CompareStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*fnPtr_1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

// func_0x180696bac
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x180696bac(uint64_t param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint64_t local_res8;
  uint8_t local_28 [4];
  uint32_t local_24;
  uint32_t local_20 [2];
  uint64_t *local_18 [2];
  
  local_res8 = param_1;
  if (DAT_180877010 == (func_ptr_t )0xffffffffffffffff) {
LAB_180696c10:
    local_18[0] = &local_res8;
    local_24 = 4;
    local_20[0] = 4;
    func_0x1806976fc(local_28,local_20,local_18,&local_24);
  }
  else {
    fnPtr_1 = DAT_180877010;
    if (DAT_180877010 == (func_ptr_t )0x0) {
      fnPtr_1 = (func_ptr_t )func_0x1806974fc(2,"EnumSystemLocalesEx",&DAT_1806e76f8,&DAT_1806e7700);
      if (fnPtr_1 == (func_ptr_t )0x0) goto LAB_180696c10;
    }
    (*fnPtr_1)(local_res8,param_2,param_3,param_4);
  }
  return;
}

// API-MS-WIN-CORE-FIBERS-L1-1-0.DLL::FlsAlloc
DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)
{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000180696c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}

// API-MS-WIN-CORE-FIBERS-L1-1-0.DLL::FlsFree
BOOL __stdcall FlsFree(DWORD dwFlsIndex)
{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000180696c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsFree(dwFlsIndex);
  return BVar1;
}

// API-MS-WIN-CORE-FIBERS-L1-1-0.DLL::FlsGetValue
PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)
{
  PVOID pVoid_1;
  
                    /* WARNING: Could not recover jumptable at 0x000180696c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pVoid_1 = FlsGetValue(dwFlsIndex);
  return pVoid_1;
}

// API-MS-WIN-CORE-FIBERS-L1-1-0.DLL::FlsSetValue
BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)
{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000180696c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}

// func_0x180696c70
void func_0x180696c70(void)
{
                    /* WARNING: Could not recover jumptable at 0x000180696c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180877018)();
  return;
}

// func_0x180696c7c
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x180696c7c(uint64_t param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4, LPWSTR param_5,int param_6,uint64_t param_7)
{
  LCID Locale;
  func_ptr_t fnPtr_1;
  
  if (DAT_180877028 == (func_ptr_t )0xffffffffffffffff) {
LAB_180696d00:
    Locale = func_0x1806970ec(param_1,0);
    GetDateFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    fnPtr_1 = DAT_180877028;
    if (DAT_180877028 == (func_ptr_t )0x0) {
      fnPtr_1 = (func_ptr_t )func_0x1806974fc(5,"GetDateFormatEx",&DAT_1806e7708,&DAT_1806e7710);
      if (fnPtr_1 == (func_ptr_t )0x0) goto LAB_180696d00;
    }
    (*fnPtr_1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

// func_0x180696d44
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x180696d44(uint64_t param_1,LCTYPE param_2,LPWSTR param_3,int param_4)
{
  LCID Locale;
  func_ptr_t fnPtr_1;
  
  if (DAT_180877050 == (func_ptr_t )0xffffffffffffffff) {
LAB_180696da9:
    Locale = func_0x1806970ec(param_1,0);
    GetLocaleInfoW(Locale,param_2,param_3,param_4);
  }
  else {
    fnPtr_1 = DAT_180877050;
    if (DAT_180877050 == (func_ptr_t )0x0) {
      fnPtr_1 = (func_ptr_t )func_0x1806974fc(10,"GetLocaleInfoEx",&DAT_1806e7710,&DAT_1806e7718);
      if (fnPtr_1 == (func_ptr_t )0x0) goto LAB_180696da9;
    }
    (*fnPtr_1)(param_1,param_2,param_3,param_4);
  }
  return;
}

// func_0x180696dd8
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x180696dd8(uint64_t param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4, LPWSTR param_5,int param_6)
{
  LCID Locale;
  func_ptr_t fnPtr_1;
  
  if (DAT_180877068 == (func_ptr_t )0xffffffffffffffff) {
LAB_180696e4f:
    Locale = func_0x1806970ec(param_1,0);
    GetTimeFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    fnPtr_1 = DAT_180877068;
    if (DAT_180877068 == (func_ptr_t )0x0) {
      fnPtr_1 = (func_ptr_t )func_0x1806974fc(0xd,"GetTimeFormatEx",&DAT_1806e7718,&DAT_1806e7720);
      if (fnPtr_1 == (func_ptr_t )0x0) goto LAB_180696e4f;
    }
    (*fnPtr_1)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

// func_0x180696e90
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x180696e90(uint64_t param_1,uint32_t param_2)
{
  LCID LVar1;
  func_ptr_t fnPtr_2;
  
  if (DAT_180877070 == (func_ptr_t )0xffffffffffffffff) {
LAB_180696edf:
    LVar1 = GetUserDefaultLCID();
    func_0x180697064(LVar1,param_1,param_2,0);
  }
  else {
    fnPtr_2 = DAT_180877070;
    if (DAT_180877070 == (func_ptr_t )0x0) {
      fnPtr_2 = (func_ptr_t )func_0x1806974fc(0xe,"GetUserDefaultLocaleName",&DAT_1806e7720,&DAT_1806e7728);
      if (fnPtr_2 == (func_ptr_t )0x0) goto LAB_180696edf;
    }
    (*fnPtr_2)(param_1,param_2);
  }
  return;
}

// API-MS-WIN-CORE-SYNCH-L1-1-0.DLL::InitializeCriticalSectionEx
BOOL __stdcall InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection,DWORD dwSpinCount,DWORD Flags)
{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000180696f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitializeCriticalSectionEx(lpCriticalSection,dwSpinCount,Flags);
  return BVar1;
}

// func_0x180696f08
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x180696f08(uint64_t param_1)
{
  LCID Locale;
  func_ptr_t fnPtr_1;
  
  if (DAT_180877088 != (func_ptr_t )0xffffffffffffffff) {
    fnPtr_1 = DAT_180877088;
    if (DAT_180877088 == (func_ptr_t )0x0) {
      fnPtr_1 = (func_ptr_t )func_0x1806974fc(0x11,"IsValidLocaleName",&DAT_1806e7728,&DAT_1806e7730);
      if (fnPtr_1 == (func_ptr_t )0x0) goto LAB_180696f52;
    }
    (*fnPtr_1)(param_1);
    return;
  }
LAB_180696f52:
  Locale = func_0x1806970ec(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180696f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IsValidLocale(Locale,1);
  return;
}

// func_0x180696f70
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x180696f70(uint64_t param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5, int param_6,uint64_t param_7,uint64_t param_8,uint64_t param_9)
{
  LCID Locale;
  func_ptr_t fnPtr_1;
  
  if (DAT_180877090 == (func_ptr_t )0xffffffffffffffff) {
LAB_18069701b:
    Locale = func_0x1806970ec(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    fnPtr_1 = DAT_180877090;
    if (DAT_180877090 == (func_ptr_t )0x0) {
      fnPtr_1 = (func_ptr_t )func_0x1806974fc(0x12,"LCMapStringEx",&DAT_1806e7730,&DAT_1806e7738);
      if (fnPtr_1 == (func_ptr_t )0x0) goto LAB_18069701b;
    }
    (*fnPtr_1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

// func_0x180697064
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x180697064(uint32_t param_1,uint64_t param_2,uint32_t param_3,uint32_t param_4)
{
  func_ptr_t fnPtr_1;
  
  if (DAT_180877098 == (func_ptr_t )0xffffffffffffffff) {
LAB_1806970c9:
    func_0x1806a6ad0(param_1,param_2,param_3);
  }
  else {
    fnPtr_1 = DAT_180877098;
    if (DAT_180877098 == (func_ptr_t )0x0) {
      fnPtr_1 = (func_ptr_t )func_0x1806974fc(0x13,"LCIDToLocaleName",&DAT_1806e7738,&DAT_1806e7740);
      if (fnPtr_1 == (func_ptr_t )0x0) goto LAB_1806970c9;
    }
    (*fnPtr_1)(param_1,param_2,param_3,param_4);
  }
  return;
}

// func_0x1806970ec
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x1806970ec(uint64_t param_1,uint32_t param_2)
{
  func_ptr_t fnPtr_1;
  
  if (DAT_1808770a0 == (func_ptr_t )0xffffffffffffffff) {
LAB_18069713b:
    func_0x1806a6a28(param_1);
  }
  else {
    fnPtr_1 = DAT_1808770a0;
    if (DAT_1808770a0 == (func_ptr_t )0x0) {
      fnPtr_1 = (func_ptr_t )func_0x1806974fc(0x14,"LocaleNameToLCID",&DAT_1806e7740,&DAT_1806e7748);
      if (fnPtr_1 == (func_ptr_t )0x0) goto LAB_18069713b;
    }
    (*fnPtr_1)(param_1,param_2);
  }
  return;
}

// func_0x180697150
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
uint64_t func_0x180697150(uint32_t param_1)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  
  if (DAT_1808770c0 == (func_ptr_t )0xffffffffffffffff) {
    return 0;
  }
  fnPtr_1 = DAT_1808770c0;
  if ((DAT_1808770c0 == (func_ptr_t )0x0) &&
     (fnPtr_1 = (func_ptr_t )func_0x1806974fc(0x18,"RoInitialize",&DAT_1806e7748,&DAT_1806e774c),
     fnPtr_1 == (func_ptr_t )0x0)) {
    return 0;
  }
  uVal_2 = (*fnPtr_1)(param_1);
  return uVal_2;
}

// func_0x1806971a0
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x1806971a0(void)
{
  func_ptr_t fnPtr_1;
  
  if (DAT_1808770c8 != (func_ptr_t )0xffffffffffffffff) {
    fnPtr_1 = DAT_1808770c8;
    if ((DAT_1808770c8 == (func_ptr_t )0x0) &&
       (fnPtr_1 = (func_ptr_t )func_0x1806974fc(0x19,"RoUninitialize",&DAT_1806e774c,&DAT_1806e7750),
       fnPtr_1 == (func_ptr_t )0x0)) {
      return;
    }
    (*fnPtr_1)();
  }
  return;
}

// func_0x1806971e4
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x1806971e4(uint64_t param_1,uint32_t param_2)
{
  func_ptr_t fnPtr_1;
  
  if (DAT_1808770f8 != (func_ptr_t )0xffffffffffffffff) {
    fnPtr_1 = DAT_1808770f8;
    if (DAT_1808770f8 == (func_ptr_t )0x0) {
      fnPtr_1 = (func_ptr_t )func_0x1806974fc(0x1f,"SystemFunction036",&DAT_1806e7758,&PTR_u_ja_JP_1806e7760)
      ;
      if (fnPtr_1 == (func_ptr_t )0x0) goto LAB_18069723b;
    }
    (*fnPtr_1)(param_1,param_2);
    return;
  }
LAB_18069723b:
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x180697244
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
uint64_t func_0x180697244(uint64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  
  if (DAT_1808770d0 == (func_ptr_t )0xffffffffffffffff) {
    return 0xc0000225;
  }
  fnPtr_1 = DAT_1808770d0;
  if ((DAT_1808770d0 == (func_ptr_t )0x0) &&
     (fnPtr_1 = (func_ptr_t )func_0x1806974fc(0x1a,"AppPolicyGetProcessTerminationMethod",&DAT_1806e7750,
                                     &DAT_1806e7754), fnPtr_1 == (func_ptr_t )0x0)) {
    return 0xc0000225;
  }
  uVal_2 = (*fnPtr_1)(0xfffffffffffffffa,param_1);
  return uVal_2;
}

// func_0x1806972a0
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
uint64_t func_0x1806972a0(uint64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  
  if (DAT_1808770d8 == (func_ptr_t )0xffffffffffffffff) {
    return 0xc0000225;
  }
  fnPtr_1 = DAT_1808770d8;
  if ((DAT_1808770d8 == (func_ptr_t )0x0) &&
     (fnPtr_1 = (func_ptr_t )func_0x1806974fc(0x1b,"AppPolicyGetThreadInitializationType",&DAT_1806e7754,
                                     &DAT_1806e7758), fnPtr_1 == (func_ptr_t )0x0)) {
    return 0xc0000225;
  }
  uVal_2 = (*fnPtr_1)(0xfffffffffffffffa,param_1);
  return uVal_2;
}

// func_0x1806972fc
bool func_0x1806972fc(void)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x1806976b0();
  return lVal_1 != 0;
}

// func_0x180697310
void func_0x180697310(void)
{
  if (DAT_180877000 == 0) {
    func_0x1806974fc(0,"AreFileApisANSI",&DAT_1806e76e8,&DAT_1806e76ec);
  }
  func_0x1806976b0();
  if (DAT_180877010 == 0) {
    func_0x1806974fc(2,"EnumSystemLocalesEx",&DAT_1806e76f8,&DAT_1806e7700);
  }
  if (DAT_180877028 == 0) {
    func_0x1806974fc(5,"GetDateFormatEx",&DAT_1806e7708,&DAT_1806e7710);
  }
  if (DAT_180877050 == 0) {
    func_0x1806974fc(10,"GetLocaleInfoEx",&DAT_1806e7710,&DAT_1806e7718);
  }
  if (DAT_180877068 == 0) {
    func_0x1806974fc(0xd,"GetTimeFormatEx",&DAT_1806e7718,&DAT_1806e7720);
  }
  if (DAT_180877070 == 0) {
    func_0x1806974fc(0xe,"GetUserDefaultLocaleName",&DAT_1806e7720,&DAT_1806e7728);
  }
  if (DAT_180877088 == 0) {
    func_0x1806974fc(0x11,"IsValidLocaleName",&DAT_1806e7728,&DAT_1806e7730);
  }
  if (DAT_180877090 == 0) {
    func_0x1806974fc(0x12,"LCMapStringEx",&DAT_1806e7730,&DAT_1806e7738);
  }
  if (DAT_180877098 == 0) {
    func_0x1806974fc(0x13,"LCIDToLocaleName",&DAT_1806e7738,&DAT_1806e7740);
  }
  if (DAT_1808770a0 == 0) {
    func_0x1806974fc(0x14,"LocaleNameToLCID",&DAT_1806e7740,&DAT_1806e7748);
  }
  return;
}

// func_0x1806974b8
bool func_0x1806974b8(void)
{
  int64_t lVal_1;
  bool bFlag_2;
  
  if (DAT_180877018 == -1) {
    lVal_1 = 0;
  }
  else {
    bFlag_2 = DAT_180877018 == 0;
    if (!bFlag_2) goto LAB_1806974f2;
    lVal_1 = func_0x1806974fc(3,"FlsGetValue2",&DAT_1806e7700,&DAT_1806e7708);
  }
  bFlag_2 = lVal_1 == 0;
LAB_1806974f2:
  return !bFlag_2;
}

// func_0x1806974fc
FARPROC func_0x1806974fc(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)
{
  HMODULE pHnd_1;
  uint uVal_2;
  wchar_t *lpLibFileName;
  DWORD DVar3;
  int iVal_4;
  BOOL BVar5;
  HMODULE hLibModule;
  FARPROC pFn_6;
  FARPROC pFn_7;
  DWORD local_res18 [2];
  
  if (param_3 != param_4) {
    do {
      uVal_2 = *param_3;
      hLibModule = (HMODULE)(&DAT_180842ad0)[uVal_2];
      if (hLibModule == (HMODULE)0x0) {
        lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_datetime_l1_1_1_1806e7630)[uVal_2];
        hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
        if ((hLibModule != (HMODULE)0x0) ||
           ((((DVar3 = GetLastError(), DVar3 == 0x57 &&
              (iVal_4 = wcsncmp(lpLibFileName,L"api-ms-",7), iVal_4 != 0)) &&
             (iVal_4 = wcsncmp(lpLibFileName,L"ext-ms-",7), iVal_4 != 0)) &&
            (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0)))
           ) {
          LOCK();
          pHnd_1 = (HMODULE)(&DAT_180842ad0)[uVal_2];
          (&DAT_180842ad0)[uVal_2] = hLibModule;
          UNLOCK();
          if (pHnd_1 != (HMODULE)0x0) {
            FreeLibrary(hLibModule);
          }
          goto LAB_180697694;
        }
        LOCK();
        (&DAT_180842ad0)[uVal_2] = 0xffffffffffffffff;
        UNLOCK();
      }
      else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_180697694:
        pFn_7 = GetProcAddress(hLibModule,param_2);
        goto LAB_1806975ee;
      }
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
  }
  pFn_7 = (FARPROC)0x0;
LAB_1806975ee:
  FID_conflict___acrt_lock(0xe);
  local_res18[0] = 0;
  BVar5 = VirtualProtect(&DAT_180877000,0x100,4,local_res18);
  if (BVar5 != 0) {
    pFn_6 = pFn_7;
    if (pFn_7 == (FARPROC)0x0) {
      pFn_6 = (FARPROC)0xffffffffffffffff;
    }
    LOCK();
    (&DAT_180877000)[param_1] = pFn_6;
    UNLOCK();
    BVar5 = VirtualProtect(&DAT_180877000,0x100,2,local_res18);
    if (BVar5 != 0) {
      FID_conflict___acrt_lock(0xe);
      return pFn_7;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x1806976b0
int64_t func_0x1806976b0(void)
{
  int64_t lVal_1;
  
  if (DAT_180877008 == -1) {
    return 0;
  }
  if (DAT_180877008 != 0) {
    return DAT_180877008;
  }
  lVal_1 = func_0x1806974fc(1,"CompareStringEx",&DAT_1806e76f0,&DAT_1806e76f8);
  return lVal_1;
}

// func_0x1806976fc
BOOL func_0x1806976fc(uint64_t param_1,uint32_t *param_2,uint64_t *param_3,uint32_t *param_4)
{
  BOOL BVar1;
  
  FID_conflict___acrt_lock(*param_2);
  DAT_180842b88 = *(uint64_t *)*param_3;
  BVar1 = EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1806976e8,1);
  DAT_180842b88 = 0;
  FID_conflict___acrt_lock(*param_4);
  return BVar1;
}

// func_0x180697758
uint32_t * func_0x180697758(void)
{
  return &DAT_180842b94;
}

// func_0x180697760
uint32_t * func_0x180697760(void)
{
  return &DAT_180842b98;
}

// func_0x180697768
uint32_t * func_0x180697768(void)
{
  return &DAT_180842b90;
}

// func_0x180697770
uint64_t func_0x180697770(void)
{
  return DAT_180842ba0;
}

// FID_conflict:_get_daylight
/* Library Function - Multiple Matches With Different Base Names
    _get_daylight
    _get_dstbias
    _get_timezone
   
   Library: Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Different Base Names
    _get_daylight
    _get_dstbias
    _get_timezone
   
   Library: Visual Studio 2019 Release */
errno_t __cdecl FID_conflict__get_daylight(long *_Timezone)
{
  errno_t eVar1;
  uint32_t *pU64_2;
  
  if (_Timezone == (long *)0x0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    eVar1 = 0x16;
  }
  else {
    *_Timezone = DAT_180842b94;
    eVar1 = 0;
  }
  return eVar1;
}

// _get_dstbias
/* Library Function - Single Match
    _get_dstbias
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    _get_dstbias
   
   Library: Visual Studio 2019 Release */
errno_t __cdecl _get_dstbias(long *_Daylight_savings_bias)
{
  errno_t eVar1;
  uint32_t *pU64_2;
  
  if (_Daylight_savings_bias == (long *)0x0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    eVar1 = 0x16;
  }
  else {
    *_Daylight_savings_bias = DAT_180842b98;
    eVar1 = 0;
  }
  return eVar1;
}

// FID_conflict:_get_daylight
/* Library Function - Multiple Matches With Different Base Names
    _get_daylight
    _get_dstbias
    _get_timezone
   
   Library: Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Different Base Names
    _get_daylight
    _get_dstbias
    _get_timezone
   
   Library: Visual Studio 2019 Release */
errno_t __cdecl FID_conflict__get_daylight(long *_Timezone)
{
  errno_t eVar1;
  uint32_t *pU64_2;
  
  if (_Timezone == (long *)0x0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    eVar1 = 0x16;
  }
  else {
    *_Timezone = DAT_180842b90;
    eVar1 = 0;
  }
  return eVar1;
}

// func_0x180697808
uint64_t func_0x180697808(void)
{
  return DAT_180842ba8;
}

// _isindst
/* Library Function - Single Match
    _isindst
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _isindst
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
int __cdecl _isindst(tm *_Time)
{
  int iVal_1;
  
  FID_conflict___acrt_lock(6);
  iVal_1 = func_0x180698150(_Time);
  FID_conflict___acrt_lock(6);
  return iVal_1;
}

// __tzset
/* Library Function - Single Match
    __tzset
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __tzset
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __cdecl __tzset(void)
{
  if (DAT_180842bb4 == 0) {
    FID_conflict___acrt_lock(6);
    if (DAT_180842bb4 == 0) {
      func_0x180697e40();
      LOCK();
      DAT_180842bb4 = DAT_180842bb4 + 1;
      UNLOCK();
    }
    FID_conflict___acrt_lock(6);
    return;
  }
  return;
}

// tzset_os_copy_to_tzname
/* Library Function - Single Match
    void __cdecl tzset_os_copy_to_tzname(wchar_t const * __ptr64 const,wchar_t * __ptr64 const,char
   * __ptr64 const,unsigned int)
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    void __cdecl tzset_os_copy_to_tzname(wchar_t const * __ptr64 const,wchar_t * __ptr64 const,char
   * __ptr64 const,unsigned int)
   
   Library: Visual Studio 2019 Release */
void __cdecl tzset_os_copy_to_tzname(wchar_t *param_1,wchar_t *param_2,char *param_3,uint param_4)
{
  int iVal_1;
  
  iVal_1 = func_0x1806a06c0();
  if (iVal_1 == 0) {
    func_0x180695f20(param_4,0,param_1,0xffffffff,param_3,0x40,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// tzset_from_system_nolock
/* Library Function - Single Match
    void __cdecl tzset_from_system_nolock(void)
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    void __cdecl tzset_from_system_nolock(void)
   
   Library: Visual Studio 2019 Release */
void __cdecl tzset_from_system_nolock(void)
{
  errno_t eVar1;
  DWORD DVar2;
  UINT UVar3;
  char **ptr2_Char_4;
  wchar_t **ptr2_WStr_5;
  int *pInt_6;
  long *pLong_7;
  long lVal_8;
  int iVal_9;
  int local_res8 [2];
  long local_res10 [2];
  int local_res18 [2];
  
  ptr2_Char_4 = (char **)func_0x180697770();
  ptr2_WStr_5 = (wchar_t **)func_0x180697808();
  iVal_9 = 0;
  lVal_8 = 0;
  local_res8[0] = 0;
  local_res10[0] = 0;
  local_res18[0] = 0;
  eVar1 = FID_conflict__get_daylight(local_res8);
  if (((eVar1 == 0) && (eVar1 = FID_conflict__get_daylight(local_res10), eVar1 == 0)) &&
     (eVar1 = _get_dstbias(local_res18), eVar1 == 0)) {
    func_0x180695dd0(DAT_180842c70);
    DAT_180842c70 = 0;
    DVar2 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_180842bc0);
    if (DVar2 != 0xffffffff) {
      local_res8[0] = DAT_180842bc0 * 0x3c;
      DAT_180842bb0 = 1;
      if (DAT_180842c06 != 0) {
        local_res8[0] = DAT_180842c14 * 0x3c + local_res8[0];
      }
      if ((DAT_180842c5a != 0) && (DAT_180842c68 != 0)) {
        iVal_9 = (DAT_180842c68 - DAT_180842c14) * 0x3c;
        lVal_8 = 1;
      }
      local_res10[0] = lVal_8;
      local_res18[0] = iVal_9;
      func_0x1806ab010(*ptr2_WStr_5,0,0x80);
      func_0x1806ab010(ptr2_WStr_5[1],0,0x80);
      func_0x1806ab010(*ptr2_Char_4,0,0x40);
      func_0x1806ab010(ptr2_Char_4[1],0,0x40);
      UVar3 = ___lc_codepage_func();
      tzset_os_copy_to_tzname((wchar_t *)&DAT_180842bc4,*ptr2_WStr_5,*ptr2_Char_4,UVar3);
      tzset_os_copy_to_tzname((wchar_t *)&DAT_180842c18,ptr2_WStr_5[1],ptr2_Char_4[1],UVar3);
    }
    iVal_9 = local_res8[0];
    pInt_6 = (int *)func_0x180697768();
    lVal_8 = local_res10[0];
    *pInt_6 = iVal_9;
    pLong_7 = (long *)func_0x180697758();
    iVal_9 = local_res18[0];
    *pLong_7 = lVal_8;
    pInt_6 = (int *)func_0x180697760();
    *pInt_6 = iVal_9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// tzset_env_copy_to_tzname
/* Library Function - Single Match
    void __cdecl tzset_env_copy_to_tzname(wchar_t const * __ptr64 const,wchar_t * __ptr64 const,char
   * __ptr64 const,unsigned __int64)
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    void __cdecl tzset_env_copy_to_tzname(wchar_t const * __ptr64 const,wchar_t * __ptr64 const,char
   * __ptr64 const,unsigned __int64)
   
   Library: Visual Studio 2019 Release */
void __cdecl tzset_env_copy_to_tzname(wchar_t *param_1,wchar_t *param_2,char *param_3,__uint64 param_4)
{
  int iVal_1;
  uint64_t uVal_2;
  int64_t local_28;
  int64_t local_20;
  char local_10;
  
  iVal_1 = func_0x1806a06c0();
  if (iVal_1 == 0) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
    uVal_2 = 0xfde9;
    if (*(int *)(local_20 + 0xc) == 0xfde9) {
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVal_1 = func_0x180696a9c();
      if (iVal_1 == 0) {
        if (local_10 != '\0') {
          *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
        }
        uVal_2 = 1;
      }
      else {
        if (local_10 != '\0') {
          *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
        }
        uVal_2 = 0;
      }
    }
    func_0x180695f20(uVal_2,0,param_2,param_4 & 0xffffffff,param_3,0x3f,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// func_0x180697bc0



// func_0x180697bc0 - exception: 'ascii' codec can't encode character u'\uffd0' in position 2000: ordinal not in range(128)



// func_0x180697e40
void func_0x180697e40(void)
{
  int iVal_1;
  wchar_t *pWStr_2;
  wchar_t *pWStr_3;
  uint8_t auStack_248 [32];
  __uint64 local_228;
  __uint64 local_220;
  wchar_t local_218 [256];
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_248;
  pWStr_3 = (wchar_t *)0x0;
  DAT_18083d9d0 = 0xffffffff;
  DAT_180842bb0 = 0;
  DAT_18083d9c0 = 0xffffffff;
  local_228 = 0;
  iVal_1 = common_getenv_s<wchar_t>(&local_228,local_218,0x100,L"TZ");
  if (iVal_1 == 0) {
    pWStr_2 = local_218;
LAB_180697f41:
    if (*pWStr_2 != L'\0') {
      func_0x180697bc0(pWStr_2);
      goto LAB_180697eb9;
    }
  }
  else if (iVal_1 == 0x22) {
    pWStr_2 = (wchar_t *)_malloc_base(local_228 * 2);
    if (pWStr_2 == (wchar_t *)0x0) {
      pWStr_2 = (wchar_t *)0x0;
    }
    else {
      local_220 = 0;
      iVal_1 = common_getenv_s<wchar_t>(&local_220,pWStr_2,local_228,L"TZ");
      if (iVal_1 == 0) {
        func_0x180695dd0(0);
        pWStr_3 = pWStr_2;
        if (pWStr_2 == local_218) {
          pWStr_3 = (wchar_t *)0x0;
        }
        goto LAB_180697f41;
      }
    }
    func_0x180695dd0(pWStr_2);
  }
  tzset_from_system_nolock();
LAB_180697eb9:
  func_0x180695dd0(pWStr_3);
  func_0x180673080(local_18 ^ (uint64_t)auStack_248);
  return;
}

// cvtdate
/* Library Function - Single Match
    void __cdecl cvtdate(enum `anonymous namespace'::transition_type,enum
   A0x7639d0b4::date_type,int,int,int,int,int,int,int,int,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    void __cdecl cvtdate(enum `anonymous namespace'::transition_type,enum
   A0x7639d0b4::date_type,int,int,int,int,int,int,int,int,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __cdecl cvtdate(transition_type param_1,date_type param_2,int param_3,int param_4,int param_5,int param_6, int param_7,int param_8,int param_9,int param_10,int param_11)
{
  char ch_1;
  errno_t eVar2;
  int iVal_3;
  int64_t lVal_4;
  int iVal_5;
  int iVal_6;
  int local_res8 [2];
  
  local_res8[0] = 0;
  lVal_4 = (int64_t)param_4;
  ch_1 = __crt_time_is_leap_year<>(param_3);
  if (param_2 == 1) {
    if (ch_1 == '\0') {
      iVal_6 = (&FuncInfo_1806e7808.EHFlags)[lVal_4];
    }
    else {
      iVal_6 = *(int *)(&DAT_1806e7864 + lVal_4 * 4);
    }
    iVal_3 = param_3 + -1;
    iVal_5 = (((int)((iVal_3 >> 0x1f & 3U) + iVal_3) >> 2) + iVal_6 + 1 +
             ((param_3 + 299) / 400 - iVal_3 / 100) + param_3 * 0x16d + -0x63db) % 7;
    iVal_3 = (param_5 * 7 - iVal_5) + iVal_6 + 1 + param_6;
    iVal_6 = iVal_3 + -7;
    if (param_6 < iVal_5) {
      iVal_6 = iVal_3;
    }
    if (ch_1 == '\0') {
      iVal_3 = *(int *)(&DAT_1806e7830 + lVal_4 * 4);
    }
    else {
      iVal_3 = *(int *)(&DAT_1806e7868 + lVal_4 * 4);
    }
    if ((param_5 == 5) && (iVal_3 < iVal_6)) {
      iVal_6 = iVal_6 + -7;
    }
  }
  else {
    if (ch_1 == '\0') {
      iVal_6 = (&FuncInfo_1806e7808.EHFlags)[lVal_4];
    }
    else {
      iVal_6 = *(int *)(&DAT_1806e7864 + lVal_4 * 4);
    }
    iVal_6 = iVal_6 + param_7;
  }
  iVal_5 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
  iVal_3 = param_3;
  if (param_1 != 0) {
    DAT_18083d9d4 = iVal_6;
    DAT_18083d9d8 = iVal_5;
    eVar2 = _get_dstbias(local_res8);
    if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    DAT_18083d9d8 = DAT_18083d9d8 + local_res8[0] * 1000;
    iVal_6 = DAT_18083d9c4;
    iVal_3 = DAT_18083d9c0;
    iVal_5 = DAT_18083d9c8;
    DAT_18083d9d0 = param_3;
    if (DAT_18083d9d8 < 0) {
      DAT_18083d9d8 = DAT_18083d9d8 + 86400000;
      DAT_18083d9d4 = DAT_18083d9d4 + -1;
    }
    else if (86399999 < DAT_18083d9d8) {
      DAT_18083d9d8 = DAT_18083d9d8 + -86400000;
      DAT_18083d9d4 = DAT_18083d9d4 + 1;
    }
  }
  DAT_18083d9c8 = iVal_5;
  DAT_18083d9c4 = iVal_6;
  DAT_18083d9c0 = iVal_3;
  return;
}

// func_0x180698150
bool func_0x180698150(int *param_1)
{
  char ch_1;
  bool bFlag_2;
  errno_t eVar3;
  date_type dVal_4;
  int iVal_5;
  uint uVal_6;
  uint64_t uVal_7;
  int iVal_8;
  date_type dVal_9;
  date_type dVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint uVal_14;
  date_type dVal_15;
  int local_res10 [2];
  date_type dVal_16;
  
  local_res10[0] = 0;
  eVar3 = FID_conflict__get_daylight(local_res10);
  if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_res10[0] == 0) {
LAB_180698431:
    bFlag_2 = false;
  }
  else {
    iVal_8 = param_1[5];
    dVal_15 = 1;
    if ((iVal_8 != DAT_18083d9c0) || (iVal_8 != DAT_18083d9d0)) {
      dVal_9 = 0;
      if (DAT_180842bb0 == 0) {
        cvtdate(0,1,iVal_8,(iVal_8 < 0x6b) + 3,(0x6a < iVal_8) + 1,0,0,2,0,0,0);
        iVal_5 = param_1[5];
        uVal_14 = 0;
        uVal_6 = 0;
        uVal_13 = 0;
        uVal_12 = 2;
        dVal_4 = 5;
        if (0x6a < iVal_8) {
          dVal_4 = dVal_15;
        }
        dVal_10 = 0;
        uVal_11 = (0x6a < iVal_8) + 10;
        dVal_16 = 0;
      }
      else {
        if (DAT_180842c58 == 0) {
          cvtdate(0,1,iVal_8,(uint)DAT_180842c5a,(uint)DAT_180842c5e,(uint)DAT_180842c5c,0,
                  (uint)DAT_180842c60,(uint)DAT_180842c62,(uint)DAT_180842c64,(uint)DAT_180842c66);
          iVal_8 = param_1[5];
        }
        else {
          uVal_13 = (uint)DAT_180842c66;
          uVal_14 = (uint)DAT_180842c64;
          uVal_6 = (uint)DAT_180842c62;
          uVal_12 = (uint)DAT_180842c60;
          uVal_7 = (uint64_t)DAT_180842c5a;
          ch_1 = __crt_time_is_leap_year<>(iVal_8);
          if (ch_1 == '\0') {
            iVal_5 = (&FuncInfo_1806e7808.EHFlags)[uVal_7];
          }
          else {
            iVal_5 = *(int *)(&DAT_1806e7864 + uVal_7 * 4);
          }
          DAT_18083d9c4 = (uint)DAT_180842c5e + iVal_5;
          DAT_18083d9c8 = ((uVal_12 * 0x3c + uVal_6) * 0x3c + uVal_14) * 1000 + uVal_13;
          DAT_18083d9c0 = iVal_8;
        }
        uVal_11 = (uint)DAT_180842c06;
        uVal_12 = (uint)DAT_180842c0c;
        uVal_13 = (uint)DAT_180842c0e;
        uVal_6 = (uint)DAT_180842c10;
        uVal_14 = (uint)DAT_180842c12;
        if (DAT_180842c04 != 0) {
          dVal_10 = (date_type)DAT_180842c0a;
          dVal_4 = dVal_9;
          dVal_16 = dVal_9;
        }
        else {
          dVal_4 = (uint)DAT_180842c0a;
          dVal_16 = (uint)DAT_180842c08;
          dVal_10 = dVal_9;
        }
        dVal_15 = (date_type)(DAT_180842c04 == 0);
        iVal_5 = iVal_8;
      }
      cvtdate(1,dVal_15,iVal_5,uVal_11,dVal_4,dVal_16,dVal_10,uVal_12,uVal_13,uVal_6,uVal_14);
    }
    iVal_8 = param_1[7];
    if (DAT_18083d9c4 < DAT_18083d9d4) {
      if ((iVal_8 < DAT_18083d9c4) || (DAT_18083d9d4 < iVal_8)) goto LAB_180698431;
      if ((iVal_8 <= DAT_18083d9c4) || (DAT_18083d9d4 <= iVal_8)) {
LAB_1806983ff:
        iVal_5 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVal_8 == DAT_18083d9c4) {
          return DAT_18083d9c8 <= iVal_5;
        }
        return iVal_5 < DAT_18083d9d8;
      }
    }
    else if ((DAT_18083d9d4 <= iVal_8) && (iVal_8 <= DAT_18083d9c4)) {
      if ((iVal_8 <= DAT_18083d9d4) || (DAT_18083d9c4 <= iVal_8)) goto LAB_1806983ff;
      goto LAB_180698431;
    }
    bFlag_2 = true;
  }
  return bFlag_2;
}

// _calloc_base
/* Library Function - Single Match
    _calloc_base
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    _calloc_base
   
   Library: Visual Studio 2019 Release */
LPVOID _calloc_base(uint64_t param_1,uint64_t param_2)
{
  int iVal_1;
  LPVOID pVoid_2;
  uint32_t *pU64_3;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pVoid_2 = HeapAlloc(DAT_180842c78,8,dwBytes);
      if (pVoid_2 != (LPVOID)0x0) {
        return pVoid_2;
      }
      iVal_1 = func_0x1806a68f0();
    } while ((iVal_1 != 0) && (iVal_1 = func_0x180681550(dwBytes), iVal_1 != 0));
  }
  pU64_3 = (uint32_t *)func_0x1806823dc();
  *pU64_3 = 0xc;
  return (LPVOID)0x0;
}

// __acrt_GetLocaleInfoA
/* Library Function - Single Match
    __acrt_GetLocaleInfoA
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_GetLocaleInfoA
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_GetLocaleInfoA(uint64_t param_1,int param_2,uint64_t param_3,uint param_4,int64_t *param_5)
{
  int iVal_1;
  DWORD DVar2;
  int64_t lVal_3;
  uint8_t auStackY_108 [32];
  uint32_t local_d8 [4];
  uint8_t local_c8 [128];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStackY_108;
  *param_5 = 0;
  if (param_2 == 1) {
    iVal_1 = func_0x180698690(param_1,param_3,param_4,local_c8);
    if (iVal_1 != 0) {
      lVal_3 = _calloc_base((int64_t)iVal_1,1);
      *param_5 = lVal_3;
      func_0x180695dd0(0);
      if ((*param_5 != 0) && (iVal_1 = func_0x1806a6bc0(), iVal_1 != 0)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_180698659;
    }
    DVar2 = GetLastError();
    if (DVar2 != 0x7a) goto LAB_180698659;
    iVal_1 = func_0x180698690(param_1,param_3,param_4,0);
    if (iVal_1 == 0) goto LAB_180698659;
    lVal_3 = _calloc_base((int64_t)iVal_1,1);
    if (lVal_3 != 0) {
      iVal_1 = func_0x180698690(param_1,param_3,param_4,lVal_3);
      goto LAB_1806985c7;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        local_d8[0] = 0;
        iVal_1 = func_0x180696d44(param_3,param_4 | 0x20000000,local_d8,2);
        if (iVal_1 != 0) {
          *(uint8_t *)param_5 = (uint8_t)local_d8[0];
        }
      }
      goto LAB_180698659;
    }
    iVal_1 = func_0x180696d44(param_3,param_4,0,0);
    if (iVal_1 == 0) goto LAB_180698659;
    lVal_3 = _calloc_base((int64_t)iVal_1,2);
    if (lVal_3 != 0) {
      iVal_1 = func_0x180696d44(param_3,param_4,lVal_3,iVal_1);
LAB_1806985c7:
      if (iVal_1 != 0) {
        *param_5 = lVal_3;
        lVal_3 = 0;
      }
    }
  }
  func_0x180695dd0(lVal_3);
LAB_180698659:
  func_0x180673080(local_48 ^ (uint64_t)auStackY_108);
  return;
}

// func_0x180698690
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
void func_0x180698690(__crt_locale_pointers *param_1,uint64_t param_2,uint32_t param_3, uint64_t param_4,int param_5)
{
  uint32_t uVal_1;
  int64_t lVal_2;
  int iVal_3;
  uint64_t uVal_4;
  uint32_t *pU64_5;
  uint64_t uVal_6;
  uint8_t *pU64_7;
  uint8_t *pU64_8;
  uint8_t *pU64_9;
  uint8_t auStack_88 [64];
  uint32_t local_48 [2];
  int64_t local_40;
  int64_t local_38;
  char local_28;
  uint64_t local_20;
  
  pU64_7 = auStack_88;
  pU64_9 = auStack_88;
  pU64_8 = auStack_88;
  local_20 = DAT_18083cf40 ^ (uint64_t)local_48;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_1);
  uVal_1 = *(uint32_t *)(local_38 + 0xc);
  iVal_3 = func_0x180696d44(param_2,param_3,0,0);
  if (iVal_3 == 0) goto LAB_1806987d2;
  uVal_6 = (int64_t)iVal_3 * 2 + 0x10;
  uVal_6 = -(uint64_t)((uint64_t)((int64_t)iVal_3 * 2) < uVal_6) & uVal_6;
  if (uVal_6 == 0) {
    pU64_5 = (uint32_t *)0x0;
LAB_1806987ba:
    pU64_9 = pU64_8;
    if (pU64_5 == (uint32_t *)0x0) goto LAB_1806987d2;
  }
  else {
    if (uVal_6 < 0x401) {
      uVal_4 = uVal_6 + 0xf;
      if (uVal_4 <= uVal_6) {
        uVal_4 = 0xffffffffffffff0;
      }
      lVal_2 = -(uVal_4 & 0xfffffffffffffff0);
      pU64_8 = auStack_88 + lVal_2;
      pU64_7 = auStack_88 + lVal_2;
      pU64_5 = (uint32_t *)((int64_t)local_48 + lVal_2);
      if (pU64_5 == (uint32_t *)0x0) goto LAB_1806987ba;
      *pU64_5 = 0xcccc;
LAB_180698761:
      pU64_5 = pU64_5 + 4;
      pU64_8 = pU64_7;
    }
    else {
      pU64_5 = (uint32_t *)_malloc_base(uVal_6);
      pU64_8 = auStack_88;
      if (pU64_5 != (uint32_t *)0x0) {
        *pU64_5 = 0xdddd;
        goto LAB_180698761;
      }
    }
    if (pU64_5 == (uint32_t *)0x0) goto LAB_1806987ba;
    *(uint64_t *)(pU64_8 + -8) = 0x18069877a;
    iVal_3 = func_0x180696d44(param_2,param_3,pU64_5,iVal_3);
    if (iVal_3 == 0) goto LAB_1806987ba;
    *(uint64_t *)(pU64_8 + 0x38) = 0;
    *(uint64_t *)(pU64_8 + 0x30) = 0;
    *(int *)(pU64_8 + 0x28) = param_5;
    *(uint64_t *)(pU64_8 + 0x20) = -(uint64_t)(param_5 != 0) & param_4;
    *(uint64_t *)(pU64_8 + -8) = 0x1806987b4;
    func_0x180695f20(uVal_1,0,pU64_5,0xffffffff);
  }
  pU64_9 = pU64_8;
  if (pU64_5[-4] == 0xdddd) {
    *(uint64_t *)(pU64_8 + -8) = 0x1806987d2;
    func_0x180695dd0();
  }
LAB_1806987d2:
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
  uVal_6 = local_20 ^ (uint64_t)local_48;
  *(uint64_t *)(pU64_9 + -8) = 0x1806987f1;
  func_0x180673080(uVal_6);
  return;
}

// func_0x18069880c
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
void func_0x18069880c(__crt_locale_pointers *param_1,DWORD param_2,uint64_t param_3, uint32_t param_4,LPWORD param_5,int param_6,int param_7)
{
  int64_t lVal_1;
  int iVal_2;
  uint64_t uVal_3;
  uint32_t *lpSrcStr;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t *pU64_6;
  uint8_t *pU64_7;
  uint8_t *pU64_8;
  uint8_t auStack_88 [32];
  uint64_t local_68;
  uint32_t local_60;
  uint32_t local_58 [2];
  int64_t local_50;
  int64_t local_48;
  char local_38;
  uint64_t local_30;
  
  pU64_6 = auStack_88;
  pU64_8 = auStack_88;
  pU64_7 = auStack_88;
  local_30 = DAT_18083cf40 ^ (uint64_t)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(int *)(local_48 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVal_2 = func_0x180695e90(param_6,(-(param_7 != 0) & 8U) + 1,param_3,param_4);
  if (iVal_2 == 0) goto LAB_180698962;
  uVal_5 = (int64_t)iVal_2 * 2;
  uVal_4 = -(uint64_t)(uVal_5 < uVal_5 + 0x10) & uVal_5 + 0x10;
  if (uVal_4 == 0) {
    lpSrcStr = (uint32_t *)0x0;
LAB_18069894a:
    pU64_8 = pU64_7;
    if (lpSrcStr == (uint32_t *)0x0) goto LAB_180698962;
  }
  else {
    if (uVal_4 < 0x401) {
      uVal_3 = uVal_4 + 0xf;
      if (uVal_3 <= uVal_4) {
        uVal_3 = 0xffffffffffffff0;
      }
      lVal_1 = -(uVal_3 & 0xfffffffffffffff0);
      pU64_7 = auStack_88 + lVal_1;
      pU64_6 = auStack_88 + lVal_1;
      lpSrcStr = (uint32_t *)((int64_t)local_58 + lVal_1);
      if (lpSrcStr == (uint32_t *)0x0) goto LAB_18069894a;
      *lpSrcStr = 0xcccc;
LAB_1806988f8:
      lpSrcStr = lpSrcStr + 4;
      pU64_7 = pU64_6;
    }
    else {
      lpSrcStr = (uint32_t *)_malloc_base();
      pU64_7 = auStack_88;
      if (lpSrcStr != (uint32_t *)0x0) {
        *lpSrcStr = 0xdddd;
        goto LAB_1806988f8;
      }
    }
    if (lpSrcStr == (uint32_t *)0x0) goto LAB_18069894a;
    *(uint64_t *)(pU64_7 + -8) = 0x18069890e;
    func_0x1806ab010(lpSrcStr,0,uVal_5);
    *(int *)(pU64_7 + 0x28) = iVal_2;
    *(uint32_t **)(pU64_7 + 0x20) = lpSrcStr;
    *(uint64_t *)(pU64_7 + -8) = 0x18069892a;
    iVal_2 = func_0x180695e90(param_6,1,param_3,param_4);
    if (iVal_2 == 0) goto LAB_18069894a;
    *(uint64_t *)(pU64_7 + -8) = 0x180698944;
    GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVal_2,param_5);
  }
  pU64_8 = pU64_7;
  if (lpSrcStr[-4] == 0xdddd) {
    *(uint64_t *)(pU64_7 + -8) = 0x180698962;
    func_0x180695dd0();
  }
LAB_180698962:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  uVal_5 = local_30 ^ (uint64_t)local_58;
  *(uint64_t *)(pU64_8 + -8) = 0x180698981;
  func_0x180673080(uVal_5);
  return;
}

// __acrt_LCMapStringA
/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_LCMapStringA(__crt_locale_pointers *param_1,uint64_t param_2,uint32_t param_3, uint64_t param_4,uint32_t param_5,uint64_t param_6,uint32_t param_7, uint32_t param_8,uint32_t param_9)
{
  int64_t local_28;
  uint8_t local_20 [16];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  func_0x180698a34(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}

// func_0x180698a34
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
void func_0x180698a34(int64_t *param_1,uint64_t param_2,uint param_3,char *param_4,int param_5, uint64_t param_6,int param_7,int param_8,int param_9)
{
  int64_t lVal_1;
  int iVal_2;
  int iVal_3;
  size_t sz_4;
  uint64_t uVal_5;
  uint32_t *pU64_6;
  uint32_t *pU64_7;
  uint64_t uVal_8;
  uint8_t *pU64_9;
  uint8_t *pU64_10;
  uint8_t *pU64_11;
  uint8_t auStack_88 [32];
  uint64_t local_68;
  uint32_t local_60;
  uint32_t local_38 [2];
  uint64_t local_30;
  
  pU64_9 = auStack_88;
  pU64_10 = auStack_88;
  pU64_11 = auStack_88;
  local_30 = DAT_18083cf40 ^ (uint64_t)local_38;
  iVal_3 = param_5;
  if (0 < param_5) {
    sz_4 = __strncnt(param_4,(int64_t)param_5);
    iVal_2 = (int)sz_4;
    iVal_3 = iVal_2 + 1;
    if (param_5 <= iVal_2) {
      iVal_3 = iVal_2;
    }
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*param_1 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVal_2 = func_0x180695e90(param_8,(-(param_9 != 0) & 8U) + 1,param_4,iVal_3);
  pU64_6 = (uint32_t *)0x0;
  if (iVal_2 == 0) goto LAB_180698d3f;
  uVal_5 = (int64_t)iVal_2 * 2 + 0x10;
  uVal_5 = -(uint64_t)((uint64_t)((int64_t)iVal_2 * 2) < uVal_5) & uVal_5;
  pU64_11 = auStack_88;
  if (uVal_5 == 0) {
LAB_180698d25:
    if (pU64_6 == (uint32_t *)0x0) goto LAB_180698d3f;
  }
  else {
    if (uVal_5 < 0x401) {
      uVal_8 = uVal_5 + 0xf;
      if (uVal_8 <= uVal_5) {
        uVal_8 = 0xffffffffffffff0;
      }
      lVal_1 = -(uVal_8 & 0xfffffffffffffff0);
      pU64_9 = auStack_88 + lVal_1;
      pU64_6 = (uint32_t *)((int64_t)local_38 + lVal_1);
      pU64_11 = auStack_88 + lVal_1;
      if (pU64_6 == (uint32_t *)0x0) goto LAB_180698d25;
      *pU64_6 = 0xcccc;
LAB_180698b40:
      pU64_6 = pU64_6 + 4;
      pU64_10 = pU64_9;
    }
    else {
      pU64_6 = (uint32_t *)_malloc_base(uVal_5);
      if (pU64_6 != (uint32_t *)0x0) {
        *pU64_6 = 0xdddd;
        goto LAB_180698b40;
      }
    }
    pU64_11 = pU64_10;
    if (pU64_6 == (uint32_t *)0x0) goto LAB_180698d25;
    *(int *)(pU64_10 + 0x28) = iVal_2;
    *(uint32_t **)(pU64_10 + 0x20) = pU64_6;
    *(uint64_t *)(pU64_10 + -8) = 0x180698b6a;
    iVal_3 = func_0x180695e90(param_8,1,param_4,iVal_3);
    if (iVal_3 == 0) goto LAB_180698d25;
    *(uint64_t *)(pU64_10 + 0x40) = 0;
    *(uint64_t *)(pU64_10 + 0x38) = 0;
    *(uint64_t *)(pU64_10 + 0x30) = 0;
    *(uint32_t *)(pU64_10 + 0x28) = 0;
    *(uint64_t *)(pU64_10 + 0x20) = 0;
    *(uint64_t *)(pU64_10 + -8) = 0x180698b9d;
    iVal_3 = func_0x180696f70(param_2,param_3,pU64_6,iVal_2);
    pU64_7 = (uint32_t *)0x0;
    if (iVal_3 == 0) goto LAB_180698d25;
    if ((param_3 & 0x400) == 0) {
      uVal_5 = (int64_t)iVal_3 * 2 + 0x10;
      uVal_5 = -(uint64_t)((uint64_t)((int64_t)iVal_3 * 2) < uVal_5) & uVal_5;
      if (uVal_5 == 0) {
LAB_180698d08:
        if (pU64_7 != (uint32_t *)0x0) {
LAB_180698d0d:
          if (pU64_7[-4] == 0xdddd) {
            *(uint64_t *)(pU64_11 + -8) = 0x180698d1e;
            func_0x180695dd0();
          }
        }
      }
      else {
        if (uVal_5 < 0x401) {
          uVal_8 = uVal_5 + 0xf;
          if (uVal_8 <= uVal_5) {
            uVal_8 = 0xffffffffffffff0;
          }
          *(uint64_t *)(pU64_10 + -8) = 0x180698c40;
          lVal_1 = -(uVal_8 & 0xfffffffffffffff0);
          pU64_11 = pU64_10 + lVal_1;
          pU64_7 = (uint32_t *)(pU64_10 + lVal_1 + 0x50);
          if (pU64_7 == (uint32_t *)0x0) goto LAB_180698d2c;
          *pU64_7 = 0xcccc;
          pU64_10 = pU64_10 + lVal_1;
LAB_180698c6e:
          pU64_7 = pU64_7 + 4;
          pU64_11 = pU64_10;
        }
        else {
          *(uint64_t *)(pU64_10 + -8) = 0x180698c5e;
          pU64_7 = (uint32_t *)_malloc_base();
          if (pU64_7 != (uint32_t *)0x0) {
            *pU64_7 = 0xdddd;
            goto LAB_180698c6e;
          }
        }
        if (pU64_7 != (uint32_t *)0x0) {
          *(uint64_t *)(pU64_11 + 0x40) = 0;
          *(uint64_t *)(pU64_11 + 0x38) = 0;
          *(uint64_t *)(pU64_11 + 0x30) = 0;
          *(int *)(pU64_11 + 0x28) = iVal_3;
          *(uint32_t **)(pU64_11 + 0x20) = pU64_7;
          *(uint64_t *)(pU64_11 + -8) = 0x180698ca4;
          iVal_2 = func_0x180696f70(param_2,param_3,pU64_6,iVal_2);
          if (iVal_2 == 0) goto LAB_180698d08;
          *(uint64_t *)(pU64_11 + 0x38) = 0;
          *(uint64_t *)(pU64_11 + 0x30) = 0;
          if (param_7 == 0) {
            *(uint32_t *)(pU64_11 + 0x28) = 0;
            *(uint64_t *)(pU64_11 + 0x20) = 0;
            *(uint64_t *)(pU64_11 + -8) = 0x180698cd2;
            iVal_3 = func_0x180695f20(param_8,0,pU64_7,iVal_3);
            if (iVal_3 == 0) goto LAB_180698d08;
          }
          else {
            *(int *)(pU64_11 + 0x28) = param_7;
            *(uint64_t *)(pU64_11 + 0x20) = param_6;
            *(uint64_t *)(pU64_11 + -8) = 0x180698cec;
            iVal_3 = func_0x180695f20(param_8,0,pU64_7,iVal_3);
            if (iVal_3 == 0) goto LAB_180698d0d;
          }
          if (pU64_7[-4] == 0xdddd) {
            *(uint64_t *)(pU64_11 + -8) = 0x180698d03;
            func_0x180695dd0();
          }
        }
      }
    }
    else if (param_7 != 0) {
      if (iVal_3 <= param_7) {
        *(uint64_t *)(pU64_10 + 0x40) = 0;
        *(uint64_t *)(pU64_10 + 0x38) = 0;
        *(uint64_t *)(pU64_10 + 0x30) = 0;
        *(int *)(pU64_10 + 0x28) = param_7;
        *(uint64_t *)(pU64_10 + 0x20) = param_6;
        *(uint64_t *)(pU64_10 + -8) = 0x180698bf5;
        iVal_3 = func_0x180696f70(param_2,param_3,pU64_6,iVal_2);
        if (iVal_3 != 0) goto LAB_180698d2c;
      }
      goto LAB_180698d25;
    }
  }
LAB_180698d2c:
  if (pU64_6[-4] == 0xdddd) {
    *(uint64_t *)(pU64_11 + -8) = 0x180698d3d;
    func_0x180695dd0();
  }
LAB_180698d3f:
  uVal_5 = local_30 ^ (uint64_t)local_38;
  *(uint64_t *)(pU64_11 + -8) = 0x180698d4b;
  func_0x180673080(uVal_5);
  return;
}

// func_0x180698e54
void func_0x180698e54(void)
{
  int64_t lVal_1;
  DWORD DVar2;
  uint64_t uVal_3;
  HANDLE *ptr2_Void_4;
  int64_t lVal_5;
  uint *pU64_6;
  uint uVal_7;
  uint64_t uVal_8;
  _STARTUPINFOW local_78;
  
  func_0x1806ab010(&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  lVal_5 = 0;
  if ((local_78.cbReserved2 != 0) && ((uint *)local_78.lpReserved2 != (uint *)0x0)) {
    pU64_6 = (uint *)((int64_t)local_78.lpReserved2 + 4);
    ptr2_Void_4 = (HANDLE *)((int64_t)(int)*(uint *)local_78.lpReserved2 + (int64_t)pU64_6);
    uVal_7 = 0x2000;
    if ((int)*(uint *)local_78.lpReserved2 < 0x2000) {
      uVal_7 = *(uint *)local_78.lpReserved2;
    }
    __acrt_lowio_ensure_fh_exists(uVal_7);
    if ((int)DAT_180843080 < (int)uVal_7) {
      uVal_7 = DAT_180843080;
    }
    uVal_8 = (uint64_t)uVal_7;
    if (uVal_7 != 0) {
      do {
        if ((((*ptr2_Void_4 != (HANDLE)0xffffffffffffffff) && (*ptr2_Void_4 != (HANDLE)0xfffffffffffffffe))
            && ((*(byte *)pU64_6 & 1) != 0)) &&
           (((*(byte *)pU64_6 & 8) != 0 || (DVar2 = GetFileType(*ptr2_Void_4), DVar2 != 0)))) {
          uVal_3 = (uint64_t)((uint)lVal_5 & 0x3f);
          lVal_1 = (&DAT_180842c80)[lVal_5 >> 6];
          *(HANDLE *)(lVal_1 + 0x28 + uVal_3 * 0x48) = *ptr2_Void_4;
          *(byte *)(lVal_1 + 0x38 + uVal_3 * 0x48) = *(byte *)pU64_6;
        }
        lVal_5 = lVal_5 + 1;
        pU64_6 = (uint *)((int64_t)pU64_6 + 1);
        ptr2_Void_4 = ptr2_Void_4 + 1;
        uVal_8 = uVal_8 - 1;
      } while (uVal_8 != 0);
    }
  }
  return;
}

// func_0x180698f54
void func_0x180698f54(void)
{
  byte *pU8_1;
  int64_t lVal_2;
  DWORD DVar3;
  HANDLE hFile;
  uint64_t uVal_4;
  uint uVal_5;
  int64_t lVal_6;
  
  uVal_5 = 0;
  lVal_6 = 0;
  do {
    uVal_4 = (uint64_t)(uVal_5 & 0x3f);
    lVal_2 = (&DAT_180842c80)[(int64_t)(int)uVal_5 >> 6];
    if (*(int64_t *)(lVal_2 + 0x28 + uVal_4 * 0x48) + 2U < 2) {
      *(uint8_t *)(lVal_2 + 0x38 + uVal_4 * 0x48) = 0x81;
      if (uVal_5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVal_5 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if (1 < (int64_t)hFile + 1U) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(lVal_2 + 0x28 + uVal_4 * 0x48) = hFile;
          if ((DVar3 & 0xff) == 2) {
            pU8_1 = (byte *)(lVal_2 + 0x38 + uVal_4 * 0x48);
            *pU8_1 = *pU8_1 | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            pU8_1 = (byte *)(lVal_2 + 0x38 + uVal_4 * 0x48);
            *pU8_1 = *pU8_1 | 8;
          }
          goto LAB_180699032;
        }
      }
      pU8_1 = (byte *)(lVal_2 + 0x38 + uVal_4 * 0x48);
      *pU8_1 = *pU8_1 | 0x40;
      *(uint64_t *)(lVal_2 + 0x28 + uVal_4 * 0x48) = 0xfffffffffffffffe;
      if (DAT_1808425d0 != 0) {
        *(uint32_t *)(*(int64_t *)(lVal_6 + DAT_1808425d0) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pU8_1 = (byte *)(lVal_2 + 0x38 + uVal_4 * 0x48);
      *pU8_1 = *pU8_1 | 0x80;
    }
LAB_180699032:
    uVal_5 = uVal_5 + 1;
    lVal_6 = lVal_6 + 8;
    if (uVal_5 == 3) {
      return;
    }
  } while( true );
}

// func_0x180699084
void func_0x180699084(void)
{
  __acrt_ptd *p_Var1;
  
  p_Var1 = (__acrt_ptd *)__vcrt_getptd();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_1808430c8);
  return;
}

// __acrt_initialize_multibyte
/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
uint64_t __acrt_initialize_multibyte(void)
{
  uint64_t uVal_1;
  
  if (DAT_1808430d4 == '\0') {
    DAT_1808430c0 = &DAT_18083dd70;
    DAT_1808430c8 = &DAT_18083da30;
    DAT_1808430b8 = &DAT_18083dc60;
    uVal_1 = func_0x180696084();
    func_0x180699598(0xfffffffd,1,uVal_1,&DAT_1808430c8);
    DAT_1808430d4 = '\x01';
  }
  return 1;
}

// func_0x180699100
void func_0x180699100(int param_1,int64_t param_2)
{
  byte *pU8_1;
  byte bFlag_2;
  int iVal_3;
  uint uVal_4;
  BOOL BVar5;
  uint *pU64_6;
  uint8_t *pU64_7;
  int64_t lVal_8;
  byte *pU8_9;
  uint64_t uVal_10;
  byte *pU8_11;
  uint16_t *pU64_12;
  uint8_t *pU64_13;
  uint8_t *pU64_14;
  uint32_t uVal_15;
  uint uVal_16;
  uint uVal_17;
  byte *pU8_18;
  uint8_t auStack_68 [32];
  uint8_t local_48 [16];
  uint32_t local_38;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  local_48 = ZEXT816(0);
  local_38._0_1_ = '\0';
  local_38._1_1_ = '\0';
  local_38._2_1_ = '\0';
  local_38._3_1_ = '\0';
  uVal_4 = getSystemCP(param_1);
  pU64_13 = (uint8_t *)0x0;
  if (uVal_4 != 0) {
    pU64_6 = &DAT_18083de80;
    uVal_15 = 1;
    pU64_7 = pU64_13;
LAB_180699157:
    if (*pU64_6 != uVal_4) goto code_r0x00018069915f;
    func_0x1806ab010(param_2 + 0x18,0,0x101);
    pU8_18 = &DAT_18083de70;
    lVal_8 = 4;
    pU8_9 = &DAT_18083de90 + (int64_t)pU64_7 * 0x30;
    do {
      bFlag_2 = *pU8_9;
      pU8_11 = pU8_9;
      while ((bFlag_2 != 0 && (pU8_11[1] != 0))) {
        bFlag_2 = *pU8_11;
        uVal_17 = (uint)bFlag_2;
        if (bFlag_2 <= pU8_11[1]) {
          uVal_16 = (uint)bFlag_2;
          do {
            uVal_16 = uVal_16 + 1;
            if (0x100 < uVal_16) break;
            uVal_17 = uVal_17 + 1;
            pU8_1 = (byte *)((uint64_t)uVal_16 + 0x18 + param_2);
            *pU8_1 = *pU8_1 | *pU8_18;
          } while (uVal_17 <= pU8_11[1]);
        }
        pU8_11 = pU8_11 + 2;
        bFlag_2 = *pU8_11;
      }
      pU8_9 = pU8_9 + 8;
      pU8_18 = pU8_18 + 1;
      lVal_8 = lVal_8 + -1;
    } while (lVal_8 != 0);
    *(uint *)(param_2 + 4) = uVal_4;
    *(uint32_t *)(param_2 + 8) = 1;
    pU64_14 = PTR_u_ja_JP_1806e7760;
    if (((uVal_4 != 0x3a4) && (pU64_14 = PTR_u_zh_CN_1806e7768, uVal_4 != 0x3a8)) &&
       ((pU64_14 = PTR_u_ko_KR_1806e7770, uVal_4 != 0x3b5 && (pU64_14 = pU64_13, uVal_4 == 0x3b6)))) {
      pU64_14 = PTR_u_zh_TW_1806e7778;
    }
    *(uint8_t **)(param_2 + 0x220) = pU64_14;
    pU64_12 = (uint16_t *)(param_2 + 0xc);
    lVal_8 = 6;
    do {
      *pU64_12 = *(uint16_t *)
                  (((int64_t)pU64_7 * 0x30 - param_2) + 0x18083de78 + (int64_t)pU64_12);
      pU64_12 = pU64_12 + 1;
      lVal_8 = lVal_8 + -1;
    } while (lVal_8 != 0);
    goto LAB_18069938e;
  }
LAB_180699398:
  func_0x180699448(param_2);
LAB_1806993a2:
  func_0x180673080(local_30 ^ (uint64_t)auStack_68);
  return;
code_r0x00018069915f:
  uVal_17 = (int)pU64_7 + 1;
  pU64_7 = (uint8_t *)(uint64_t)uVal_17;
  pU64_6 = pU64_6 + 0xc;
  if (4 < uVal_17) goto code_r0x00018069916c;
  goto LAB_180699157;
code_r0x00018069916c:
  if ((uVal_4 == 65000) || (BVar5 = IsValidCodePage(uVal_4 & 0xffff), BVar5 == 0)) goto LAB_1806993a2;
  if (uVal_4 == 0xfde9) {
    *(uint64_t *)(param_2 + 4) = 0xfde9;
    *(uint64_t *)(param_2 + 0x220) = 0;
    *(uint32_t *)(param_2 + 0x18) = 0;
    *(uint16_t *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar5 = GetCPInfo(uVal_4,(LPCPINFO)local_48);
    if (BVar5 == 0) {
      if (DAT_1808430d0 == 0) goto LAB_1806993a2;
      goto LAB_180699398;
    }
    func_0x1806ab010(param_2 + 0x18,0,0x101);
    *(uint *)(param_2 + 4) = uVal_4;
    *(uint64_t *)(param_2 + 0x220) = 0;
    if (local_48._0_4_ == 2) {
      pU8_9 = local_48 + 6;
      bFlag_2 = local_48[6];
      while ((bFlag_2 != 0 && (pU8_9[1] != 0))) {
        bFlag_2 = *pU8_9;
        if ((uint)bFlag_2 <= (uint)pU8_9[1]) {
          uVal_4 = (uint)bFlag_2;
          uVal_10 = (uint64_t)(((uint)pU8_9[1] - (uint)bFlag_2) + 1);
          do {
            uVal_4 = uVal_4 + 1;
            pU8_18 = (byte *)((uint64_t)uVal_4 + 0x18 + param_2);
            *pU8_18 = *pU8_18 | 4;
            uVal_10 = uVal_10 - 1;
          } while (uVal_10 != 0);
        }
        pU8_9 = pU8_9 + 2;
        bFlag_2 = *pU8_9;
      }
      pU8_9 = (byte *)(param_2 + 0x1a);
      lVal_8 = 0xfe;
      do {
        *pU8_9 = *pU8_9 | 8;
        pU8_9 = pU8_9 + 1;
        lVal_8 = lVal_8 + -1;
      } while (lVal_8 != 0);
      iVal_3 = *(int *)(param_2 + 4);
      pU64_7 = PTR_u_ja_JP_1806e7760;
      if ((((iVal_3 != 0x3a4) && (pU64_7 = PTR_u_zh_CN_1806e7768, iVal_3 != 0x3a8)) &&
          (pU64_7 = PTR_u_ko_KR_1806e7770, iVal_3 != 0x3b5)) &&
         (pU64_7 = PTR_u_zh_TW_1806e7778, iVal_3 != 0x3b6)) {
        pU64_7 = pU64_13;
      }
      *(uint8_t **)(param_2 + 0x220) = pU64_7;
    }
    else {
      uVal_15 = 0;
    }
    *(uint32_t *)(param_2 + 8) = uVal_15;
  }
  pU64_12 = (uint16_t *)(param_2 + 0xc);
  for (lVal_8 = 6; lVal_8 != 0; lVal_8 = lVal_8 + -1) {
    *pU64_12 = 0;
    pU64_12 = pU64_12 + 1;
  }
LAB_18069938e:
  func_0x180699808(param_2);
  goto LAB_1806993a2;
}

// getSystemCP
/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
int __cdecl getSystemCP(int param_1)
{
  int64_t local_28;
  int64_t local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  DAT_1808430d0 = 0;
  if (param_1 == -2) {
    DAT_1808430d0 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_1808430d0 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_1808430d0 = 1;
    param_1 = *(UINT *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}

// func_0x180699448
void func_0x180699448(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint16_t *pU64_3;
  int64_t lVal_4;
  
  func_0x1806ab010(param_1 + 0x18,0,0x101);
  lVal_2 = 0;
  *(uint64_t *)(param_1 + 4) = 0;
  *(uint64_t *)(param_1 + 0x220) = 0;
  pU64_3 = (uint16_t *)(param_1 + 0xc);
  for (lVal_1 = 6; lVal_4 = lVal_2, lVal_1 != 0; lVal_1 = lVal_1 + -1) {
    *pU64_3 = 0;
    pU64_3 = pU64_3 + 1;
  }
  do {
    lVal_1 = lVal_4 + 1;
    *(undefined1 *)(param_1 + lVal_4 + 0x18) = (&DAT_18083da48)[lVal_4];
    lVal_4 = lVal_1;
  } while (lVal_1 < 0x101);
  do {
    lVal_1 = lVal_2 + 1;
    *(undefined1 *)(param_1 + lVal_2 + 0x119) = (&DAT_18083db49)[lVal_2];
    lVal_2 = lVal_1;
  } while (lVal_1 < 0x100);
  return;
}

// update_thread_multibyte_data_internal
/* Library Function - Single Match
    struct __crt_multibyte_data * __ptr64 __cdecl update_thread_multibyte_data_internal(struct
   __acrt_ptd * __ptr64 const,struct __crt_multibyte_data * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    struct __crt_multibyte_data * __ptr64 __cdecl update_thread_multibyte_data_internal(struct
   __acrt_ptd * __ptr64 const,struct __crt_multibyte_data * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
__crt_multibyte_data * __cdecl update_thread_multibyte_data_internal(__acrt_ptd *param_1,__crt_multibyte_data **param_2)
{
  int iVal_1;
  int *pInt_2;
  
  if (((*(uint *)(param_1 + 0x3a8) & DAT_18083e070) == 0) || (*(int64_t *)(param_1 + 0x90) == 0)) {
    FID_conflict___acrt_lock(5);
    pInt_2 = *(int **)(param_1 + 0x88);
    if (pInt_2 != (int *)*param_2) {
      if (pInt_2 != (int *)0x0) {
        LOCK();
        iVal_1 = *pInt_2;
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if ((iVal_1 == 1) && (pInt_2 != (int *)&DAT_18083da30)) {
          func_0x180695dd0();
        }
      }
      pInt_2 = (int *)*param_2;
      *(int **)(param_1 + 0x88) = pInt_2;
      LOCK();
      *pInt_2 = *pInt_2 + 1;
      UNLOCK();
    }
    FID_conflict___acrt_lock(5);
  }
  else {
    pInt_2 = *(int **)(param_1 + 0x88);
  }
  if (pInt_2 != (int *)0x0) {
    return (__crt_multibyte_data *)pInt_2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x180699598
int func_0x180699598(int param_1,char param_2,__acrt_ptd *param_3,__crt_multibyte_data **param_4)
{
  int iVal_1;
  uint64_t uVal_2;
  int *pInt_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t *pU64_12;
  int iVal_13;
  uint32_t *pU64_14;
  uint32_t *pU64_15;
  uint32_t *pU64_16;
  uint32_t *pU64_17;
  int64_t lVal_18;
  int64_t lVal_19;
  __acrt_ptd *local_res18;
  __crt_multibyte_data **local_res20;
  uint8_t local_268 [4];
  uint32_t local_264;
  uint32_t local_260 [2];
  __acrt_ptd **local_258;
  __crt_multibyte_data ***local_250;
  uint32_t local_248 [140];
  
  local_res18 = param_3;
  local_res20 = param_4;
  update_thread_multibyte_data_internal(param_3,param_4);
  iVal_13 = getSystemCP(param_1);
  if (iVal_13 == *(int *)(*(int64_t *)(local_res18 + 0x88) + 4)) {
    iVal_13 = 0;
  }
  else {
    pU64_14 = (uint32_t *)_malloc_base(0x228);
    if (pU64_14 == (uint32_t *)0x0) {
      func_0x180695dd0(0);
      iVal_13 = -1;
    }
    else {
      lVal_18 = 4;
      lVal_19 = 4;
      pU64_16 = *(uint32_t **)(local_res18 + 0x88);
      pU64_12 = local_248;
      do {
        pU64_17 = pU64_12;
        pU64_15 = pU64_16;
        uVal_4 = pU64_15[1];
        uVal_5 = pU64_15[2];
        uVal_6 = pU64_15[3];
        uVal_7 = pU64_15[4];
        uVal_8 = pU64_15[5];
        uVal_9 = pU64_15[6];
        uVal_10 = pU64_15[7];
        *pU64_17 = *pU64_15;
        pU64_17[1] = uVal_4;
        pU64_17[2] = uVal_5;
        pU64_17[3] = uVal_6;
        uVal_4 = pU64_15[8];
        uVal_5 = pU64_15[9];
        uVal_6 = pU64_15[10];
        uVal_11 = pU64_15[0xb];
        pU64_17[4] = uVal_7;
        pU64_17[5] = uVal_8;
        pU64_17[6] = uVal_9;
        pU64_17[7] = uVal_10;
        uVal_7 = pU64_15[0xc];
        uVal_8 = pU64_15[0xd];
        uVal_9 = pU64_15[0xe];
        uVal_10 = pU64_15[0xf];
        pU64_17[8] = uVal_4;
        pU64_17[9] = uVal_5;
        pU64_17[10] = uVal_6;
        pU64_17[0xb] = uVal_11;
        uVal_4 = pU64_15[0x10];
        uVal_5 = pU64_15[0x11];
        uVal_6 = pU64_15[0x12];
        uVal_11 = pU64_15[0x13];
        pU64_17[0xc] = uVal_7;
        pU64_17[0xd] = uVal_8;
        pU64_17[0xe] = uVal_9;
        pU64_17[0xf] = uVal_10;
        uVal_7 = pU64_15[0x14];
        uVal_8 = pU64_15[0x15];
        uVal_9 = pU64_15[0x16];
        uVal_10 = pU64_15[0x17];
        pU64_17[0x10] = uVal_4;
        pU64_17[0x11] = uVal_5;
        pU64_17[0x12] = uVal_6;
        pU64_17[0x13] = uVal_11;
        uVal_4 = pU64_15[0x18];
        uVal_5 = pU64_15[0x19];
        uVal_6 = pU64_15[0x1a];
        uVal_11 = pU64_15[0x1b];
        pU64_17[0x14] = uVal_7;
        pU64_17[0x15] = uVal_8;
        pU64_17[0x16] = uVal_9;
        pU64_17[0x17] = uVal_10;
        uVal_7 = pU64_15[0x1c];
        uVal_8 = pU64_15[0x1d];
        uVal_9 = pU64_15[0x1e];
        uVal_10 = pU64_15[0x1f];
        pU64_17[0x18] = uVal_4;
        pU64_17[0x19] = uVal_5;
        pU64_17[0x1a] = uVal_6;
        pU64_17[0x1b] = uVal_11;
        pU64_17[0x1c] = uVal_7;
        pU64_17[0x1d] = uVal_8;
        pU64_17[0x1e] = uVal_9;
        pU64_17[0x1f] = uVal_10;
        lVal_19 = lVal_19 + -1;
        pU64_16 = pU64_15 + 0x20;
        pU64_12 = pU64_17 + 0x20;
      } while (lVal_19 != 0);
      uVal_4 = pU64_15[0x21];
      uVal_5 = pU64_15[0x22];
      uVal_6 = pU64_15[0x23];
      uVal_7 = pU64_15[0x24];
      uVal_8 = pU64_15[0x25];
      uVal_9 = pU64_15[0x26];
      uVal_10 = pU64_15[0x27];
      uVal_2 = *(uint64_t *)(pU64_15 + 0x28);
      pU64_17[0x20] = pU64_15[0x20];
      pU64_17[0x21] = uVal_4;
      pU64_17[0x22] = uVal_5;
      pU64_17[0x23] = uVal_6;
      pU64_17[0x24] = uVal_7;
      pU64_17[0x25] = uVal_8;
      pU64_17[0x26] = uVal_9;
      pU64_17[0x27] = uVal_10;
      *(uint64_t *)(pU64_17 + 0x28) = uVal_2;
      pU64_16 = local_248;
      pU64_12 = pU64_14;
      do {
        pU64_17 = pU64_12;
        pU64_15 = pU64_16;
        uVal_4 = pU64_15[1];
        uVal_5 = pU64_15[2];
        uVal_6 = pU64_15[3];
        uVal_7 = pU64_15[4];
        uVal_8 = pU64_15[5];
        uVal_9 = pU64_15[6];
        uVal_10 = pU64_15[7];
        *pU64_17 = *pU64_15;
        pU64_17[1] = uVal_4;
        pU64_17[2] = uVal_5;
        pU64_17[3] = uVal_6;
        uVal_4 = pU64_15[8];
        uVal_5 = pU64_15[9];
        uVal_6 = pU64_15[10];
        uVal_11 = pU64_15[0xb];
        pU64_17[4] = uVal_7;
        pU64_17[5] = uVal_8;
        pU64_17[6] = uVal_9;
        pU64_17[7] = uVal_10;
        uVal_7 = pU64_15[0xc];
        uVal_8 = pU64_15[0xd];
        uVal_9 = pU64_15[0xe];
        uVal_10 = pU64_15[0xf];
        pU64_17[8] = uVal_4;
        pU64_17[9] = uVal_5;
        pU64_17[10] = uVal_6;
        pU64_17[0xb] = uVal_11;
        uVal_4 = pU64_15[0x10];
        uVal_5 = pU64_15[0x11];
        uVal_6 = pU64_15[0x12];
        uVal_11 = pU64_15[0x13];
        pU64_17[0xc] = uVal_7;
        pU64_17[0xd] = uVal_8;
        pU64_17[0xe] = uVal_9;
        pU64_17[0xf] = uVal_10;
        uVal_7 = pU64_15[0x14];
        uVal_8 = pU64_15[0x15];
        uVal_9 = pU64_15[0x16];
        uVal_10 = pU64_15[0x17];
        pU64_17[0x10] = uVal_4;
        pU64_17[0x11] = uVal_5;
        pU64_17[0x12] = uVal_6;
        pU64_17[0x13] = uVal_11;
        uVal_4 = pU64_15[0x18];
        uVal_5 = pU64_15[0x19];
        uVal_6 = pU64_15[0x1a];
        uVal_11 = pU64_15[0x1b];
        pU64_17[0x14] = uVal_7;
        pU64_17[0x15] = uVal_8;
        pU64_17[0x16] = uVal_9;
        pU64_17[0x17] = uVal_10;
        uVal_7 = pU64_15[0x1c];
        uVal_8 = pU64_15[0x1d];
        uVal_9 = pU64_15[0x1e];
        uVal_10 = pU64_15[0x1f];
        pU64_17[0x18] = uVal_4;
        pU64_17[0x19] = uVal_5;
        pU64_17[0x1a] = uVal_6;
        pU64_17[0x1b] = uVal_11;
        pU64_17[0x1c] = uVal_7;
        pU64_17[0x1d] = uVal_8;
        pU64_17[0x1e] = uVal_9;
        pU64_17[0x1f] = uVal_10;
        lVal_18 = lVal_18 + -1;
        pU64_16 = pU64_15 + 0x20;
        pU64_12 = pU64_17 + 0x20;
      } while (lVal_18 != 0);
      uVal_4 = pU64_15[0x21];
      uVal_5 = pU64_15[0x22];
      uVal_6 = pU64_15[0x23];
      uVal_7 = pU64_15[0x24];
      uVal_8 = pU64_15[0x25];
      uVal_9 = pU64_15[0x26];
      uVal_10 = pU64_15[0x27];
      uVal_2 = *(uint64_t *)(pU64_15 + 0x28);
      pU64_17[0x20] = pU64_15[0x20];
      pU64_17[0x21] = uVal_4;
      pU64_17[0x22] = uVal_5;
      pU64_17[0x23] = uVal_6;
      pU64_17[0x24] = uVal_7;
      pU64_17[0x25] = uVal_8;
      pU64_17[0x26] = uVal_9;
      pU64_17[0x27] = uVal_10;
      *(uint64_t *)(pU64_17 + 0x28) = uVal_2;
      *pU64_14 = 0;
      iVal_13 = func_0x180699100(iVal_13,pU64_14);
      if (iVal_13 == -1) {
        pU64_16 = (uint32_t *)func_0x1806823dc();
        *pU64_16 = 0x16;
        func_0x180695dd0(pU64_14);
        iVal_13 = -1;
      }
      else {
        if (param_2 == '\0') {
          func_0x180687318();
        }
        pInt_3 = *(int **)(local_res18 + 0x88);
        LOCK();
        iVal_1 = *pInt_3;
        *pInt_3 = *pInt_3 + -1;
        UNLOCK();
        if ((iVal_1 == 1) && (*(uint8_t **)(local_res18 + 0x88) != &DAT_18083da30)) {
          func_0x180695dd0();
        }
        *pU64_14 = 1;
        *(uint32_t **)(local_res18 + 0x88) = pU64_14;
        if ((DAT_18083e070 & *(uint *)(local_res18 + 0x3a8)) == 0) {
          local_258 = &local_res18;
          local_250 = &local_res20;
          local_264 = 5;
          local_260[0] = 5;
          func_0x180699a00(local_268,local_260,&local_258,&local_264);
          if (param_2 != '\0') {
            PTR_DAT_18083d810 = *local_res20;
          }
        }
        func_0x180695dd0(0);
      }
    }
  }
  return iVal_13;
}

// func_0x180699808
void func_0x180699808(int64_t param_1)
{
  byte bFlag_1;
  byte bFlag_2;
  BOOL BVar3;
  uint uVal_4;
  byte *pU8_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  byte *pU8_8;
  int64_t lVal_9;
  uint8_t auStack_788 [32];
  uint64_t local_768;
  uint64_t local_760;
  uint32_t local_758;
  uint32_t local_750;
  uint32_t local_748;
  uint8_t local_738 [16];
  uint32_t local_728;
  uint8_t local_718 [231];
  byte abStack_631 [25];
  uint8_t local_618 [231];
  byte abStack_531 [25];
  uint8_t local_518 [256];
  byte local_418 [1024];
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_788;
  local_728._0_1_ = '\0';
  local_728._1_1_ = '\0';
  local_728._2_1_ = '\0';
  local_728._3_1_ = '\0';
  local_738 = ZEXT816(0);
  if ((*(UINT *)(param_1 + 4) == 0xfde9) ||
     (BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),(LPCPINFO)local_738), BVar3 == 0)) {
    uVal_4 = 0;
    pU8_5 = (byte *)(param_1 + 0x19);
    do {
      if (uVal_4 - 0x41 < 0x1a) {
        *pU8_5 = *pU8_5 | 0x10;
        bFlag_2 = (char)uVal_4 + 0x20;
      }
      else if (uVal_4 - 0x61 < 0x1a) {
        *pU8_5 = *pU8_5 | 0x20;
        bFlag_2 = (char)uVal_4 - 0x20;
      }
      else {
        bFlag_2 = 0;
      }
      pU8_5[0x100] = bFlag_2;
      uVal_4 = uVal_4 + 1;
      pU8_5 = pU8_5 + 1;
    } while (uVal_4 < 0x100);
  }
  else {
    uVal_4 = 0;
    pU64_6 = local_718;
    lVal_9 = 0x100;
    do {
      *pU64_6 = (char)uVal_4;
      uVal_4 = uVal_4 + 1;
      pU64_6 = pU64_6 + 1;
    } while (uVal_4 < 0x100);
    pU8_5 = local_738 + 6;
    local_718[0] = 0x20;
    bFlag_2 = local_738[6];
    while (bFlag_2 != 0) {
      bFlag_1 = pU8_5[1];
      uVal_7 = (uint64_t)bFlag_2;
      while ((uVal_4 = (uint)uVal_7, uVal_4 <= bFlag_1 && (uVal_4 < 0x100))) {
        local_718[uVal_7] = 0x20;
        uVal_7 = (uint64_t)(uVal_4 + 1);
      }
      pU8_5 = pU8_5 + 2;
      bFlag_2 = *pU8_5;
    }
    local_758 = 0;
    local_760 = (uint8_t *)CONCAT44(local_760._4_4_,*(uint32_t *)(param_1 + 4));
    local_768 = local_418;
    func_0x18069880c(0,1,local_718,0x100);
    local_748 = 0;
    local_750 = *(uint32_t *)(param_1 + 4);
    local_760 = local_618;
    local_758 = 0x100;
    local_768._0_4_ = 0x100;
    __acrt_LCMapStringA(0,*(uint64_t *)(param_1 + 0x220),0x100,local_718);
    local_748 = 0;
    local_750 = *(uint32_t *)(param_1 + 4);
    local_760 = local_518;
    local_758 = 0x100;
    local_768 = (byte *)CONCAT44(local_768._4_4_,0x100);
    __acrt_LCMapStringA(0,*(uint64_t *)(param_1 + 0x220),0x200,local_718);
    pU8_8 = local_418;
    pU8_5 = (byte *)(param_1 + 0x19);
    do {
      if ((*pU8_8 & 1) == 0) {
        if ((*pU8_8 & 2) == 0) {
          bFlag_2 = 0;
        }
        else {
          *pU8_5 = *pU8_5 | 0x20;
          bFlag_2 = pU8_5[(int64_t)(abStack_531 + -param_1)];
        }
      }
      else {
        *pU8_5 = *pU8_5 | 0x10;
        bFlag_2 = pU8_5[(int64_t)(abStack_631 + -param_1)];
      }
      pU8_5[0x100] = bFlag_2;
      pU8_8 = pU8_8 + 2;
      pU8_5 = pU8_5 + 1;
      lVal_9 = lVal_9 + -1;
    } while (lVal_9 != 0);
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_788);
  return;
}

// func_0x180699a00
void func_0x180699a00(uint64_t param_1,uint32_t *param_2,int64_t **param_3,uint32_t *param_4)
{
  int iVal_1;
  int *pInt_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t *pU64_6;
  uint32_t *pU64_7;
  uint32_t *pU64_8;
  int64_t lVal_9;
  
  FID_conflict___acrt_lock(*param_2);
  pU64_6 = (uint32_t *)(*(int64_t *)(**param_3 + 0x88) + 0x18);
  if (DAT_1808430b8 == (uint32_t *)0x0) {
LAB_180699ab3:
    pU64_6 = (uint32_t *)func_0x1806823dc();
    *pU64_6 = 0x16;
    func_0x180684970();
  }
  else {
    if (pU64_6 == (uint32_t *)0x0) {
      func_0x1806ab010(DAT_1808430b8,0,0x101);
      goto LAB_180699ab3;
    }
    lVal_9 = 2;
    pU64_8 = DAT_1808430b8;
    do {
      uVal_3 = pU64_6[1];
      uVal_4 = pU64_6[2];
      uVal_5 = pU64_6[3];
      *pU64_8 = *pU64_6;
      pU64_8[1] = uVal_3;
      pU64_8[2] = uVal_4;
      pU64_8[3] = uVal_5;
      uVal_3 = pU64_6[5];
      uVal_4 = pU64_6[6];
      uVal_5 = pU64_6[7];
      pU64_8[4] = pU64_6[4];
      pU64_8[5] = uVal_3;
      pU64_8[6] = uVal_4;
      pU64_8[7] = uVal_5;
      uVal_3 = pU64_6[9];
      uVal_4 = pU64_6[10];
      uVal_5 = pU64_6[0xb];
      pU64_8[8] = pU64_6[8];
      pU64_8[9] = uVal_3;
      pU64_8[10] = uVal_4;
      pU64_8[0xb] = uVal_5;
      uVal_3 = pU64_6[0xd];
      uVal_4 = pU64_6[0xe];
      uVal_5 = pU64_6[0xf];
      pU64_8[0xc] = pU64_6[0xc];
      pU64_8[0xd] = uVal_3;
      pU64_8[0xe] = uVal_4;
      pU64_8[0xf] = uVal_5;
      uVal_3 = pU64_6[0x11];
      uVal_4 = pU64_6[0x12];
      uVal_5 = pU64_6[0x13];
      pU64_8[0x10] = pU64_6[0x10];
      pU64_8[0x11] = uVal_3;
      pU64_8[0x12] = uVal_4;
      pU64_8[0x13] = uVal_5;
      uVal_3 = pU64_6[0x15];
      uVal_4 = pU64_6[0x16];
      uVal_5 = pU64_6[0x17];
      pU64_8[0x14] = pU64_6[0x14];
      pU64_8[0x15] = uVal_3;
      pU64_8[0x16] = uVal_4;
      pU64_8[0x17] = uVal_5;
      uVal_3 = pU64_6[0x19];
      uVal_4 = pU64_6[0x1a];
      uVal_5 = pU64_6[0x1b];
      pU64_8[0x18] = pU64_6[0x18];
      pU64_8[0x19] = uVal_3;
      pU64_8[0x1a] = uVal_4;
      pU64_8[0x1b] = uVal_5;
      pU64_7 = pU64_8 + 0x20;
      uVal_3 = pU64_6[0x1d];
      uVal_4 = pU64_6[0x1e];
      uVal_5 = pU64_6[0x1f];
      pU64_8[0x1c] = pU64_6[0x1c];
      pU64_8[0x1d] = uVal_3;
      pU64_8[0x1e] = uVal_4;
      pU64_8[0x1f] = uVal_5;
      pU64_6 = pU64_6 + 0x20;
      lVal_9 = lVal_9 + -1;
      pU64_8 = pU64_7;
    } while (lVal_9 != 0);
    *(uint8_t *)pU64_7 = *(uint8_t *)pU64_6;
  }
  lVal_9 = 2;
  pU64_6 = (uint32_t *)(*(int64_t *)(**param_3 + 0x88) + 0x119);
  if (DAT_1808430c0 != (uint32_t *)0x0) {
    pU64_8 = DAT_1808430c0;
    if (pU64_6 != (uint32_t *)0x0) {
      do {
        uVal_3 = pU64_6[1];
        uVal_4 = pU64_6[2];
        uVal_5 = pU64_6[3];
        *pU64_8 = *pU64_6;
        pU64_8[1] = uVal_3;
        pU64_8[2] = uVal_4;
        pU64_8[3] = uVal_5;
        uVal_3 = pU64_6[5];
        uVal_4 = pU64_6[6];
        uVal_5 = pU64_6[7];
        pU64_8[4] = pU64_6[4];
        pU64_8[5] = uVal_3;
        pU64_8[6] = uVal_4;
        pU64_8[7] = uVal_5;
        uVal_3 = pU64_6[9];
        uVal_4 = pU64_6[10];
        uVal_5 = pU64_6[0xb];
        pU64_8[8] = pU64_6[8];
        pU64_8[9] = uVal_3;
        pU64_8[10] = uVal_4;
        pU64_8[0xb] = uVal_5;
        uVal_3 = pU64_6[0xd];
        uVal_4 = pU64_6[0xe];
        uVal_5 = pU64_6[0xf];
        pU64_8[0xc] = pU64_6[0xc];
        pU64_8[0xd] = uVal_3;
        pU64_8[0xe] = uVal_4;
        pU64_8[0xf] = uVal_5;
        uVal_3 = pU64_6[0x11];
        uVal_4 = pU64_6[0x12];
        uVal_5 = pU64_6[0x13];
        pU64_8[0x10] = pU64_6[0x10];
        pU64_8[0x11] = uVal_3;
        pU64_8[0x12] = uVal_4;
        pU64_8[0x13] = uVal_5;
        uVal_3 = pU64_6[0x15];
        uVal_4 = pU64_6[0x16];
        uVal_5 = pU64_6[0x17];
        pU64_8[0x14] = pU64_6[0x14];
        pU64_8[0x15] = uVal_3;
        pU64_8[0x16] = uVal_4;
        pU64_8[0x17] = uVal_5;
        uVal_3 = pU64_6[0x19];
        uVal_4 = pU64_6[0x1a];
        uVal_5 = pU64_6[0x1b];
        pU64_8[0x18] = pU64_6[0x18];
        pU64_8[0x19] = uVal_3;
        pU64_8[0x1a] = uVal_4;
        pU64_8[0x1b] = uVal_5;
        uVal_3 = pU64_6[0x1d];
        uVal_4 = pU64_6[0x1e];
        uVal_5 = pU64_6[0x1f];
        pU64_8[0x1c] = pU64_6[0x1c];
        pU64_8[0x1d] = uVal_3;
        pU64_8[0x1e] = uVal_4;
        pU64_8[0x1f] = uVal_5;
        pU64_6 = pU64_6 + 0x20;
        lVal_9 = lVal_9 + -1;
        pU64_8 = pU64_8 + 0x20;
      } while (lVal_9 != 0);
      goto LAB_180699b64;
    }
    func_0x1806ab010(DAT_1808430c0,0,0x100);
  }
  pU64_6 = (uint32_t *)func_0x1806823dc();
  *pU64_6 = 0x16;
  func_0x180684970();
LAB_180699b64:
  pInt_2 = *(int **)*param_3[1];
  LOCK();
  iVal_1 = *pInt_2;
  *pInt_2 = *pInt_2 + -1;
  UNLOCK();
  if ((iVal_1 == 1) && (*(uint8_t **)(uint64_t *)*param_3[1] != &DAT_18083da30)) {
    func_0x180695dd0(*(uint64_t *)*param_3[1]);
  }
  *(uint64_t *)*param_3[1] = *(uint64_t *)(**param_3 + 0x88);
  LOCK();
  **(int **)(**param_3 + 0x88) = **(int **)(**param_3 + 0x88) + 1;
  UNLOCK();
  FID_conflict___acrt_lock(*param_4);
  return;
}

// func_0x180699bd0
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
uint64_t func_0x180699bd0(func_ptr_t *param_1,func_ptr_t *param_2)
{
  func_ptr_t *ptr2_Char_1;
  char ch_2;
  func_ptr_t *ptr2_Char_3;
  
  ptr2_Char_3 = param_1;
  if (param_1 != param_2) {
    do {
      if ((*ptr2_Char_3 != (func_ptr_t )0x0) && (ch_2 = (**ptr2_Char_3)(), ch_2 == '\0')) break;
      ptr2_Char_3 = ptr2_Char_3 + 2;
    } while (ptr2_Char_3 != param_2);
    if (ptr2_Char_3 != param_2) {
      if (ptr2_Char_3 != param_1) {
        ptr2_Char_3 = ptr2_Char_3 + -1;
        do {
          if ((ptr2_Char_3[-1] != (func_ptr_t )0x0) && (*ptr2_Char_3 != (func_ptr_t )0x0)) {
            (**ptr2_Char_3)(0);
          }
          ptr2_Char_1 = ptr2_Char_3 + -1;
          ptr2_Char_3 = ptr2_Char_3 + -2;
        } while (ptr2_Char_1 != param_1);
      }
      return 0;
    }
  }
  return 1;
}

// func_0x180699c50
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
uint64_t func_0x180699c50(int64_t param_1,int64_t param_2)
{
  if (param_1 != param_2) {
    do {
      if (*(func_ptr_t *)(param_2 + -8) != (func_ptr_t )0x0) {
        (**(func_ptr_t *)(param_2 + -8))(0);
      }
      param_2 = param_2 + -0x10;
    } while (param_2 != param_1);
  }
  return 1;
}

// func_0x180699c90
void func_0x180699c90(uint64_t param_1)
{
  DAT_1808430d8 = param_1;
  return;
}

// func_0x180699ca0
uint64_t func_0x180699ca0(void)
{
  byte bFlag_1;
  
  bFlag_1 = (byte)DAT_18083cf40 & 0x3f;
  return CONCAT71((int7)(DAT_18083cf40 >> 8),
                  ((DAT_1808430d8 ^ DAT_18083cf40) >> bFlag_1 |
                  (DAT_1808430d8 ^ DAT_18083cf40) << 0x40 - bFlag_1) != 0);
}

// func_0x180699cc0
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
uint64_t func_0x180699cc0(uint64_t param_1)
{
  uint64_t uVal_1;
  byte bFlag_2;
  func_ptr_t fnPtr_3;
  
  bFlag_2 = (byte)DAT_18083cf40 & 0x3f;
  fnPtr_3 = (func_ptr_t )((DAT_1808430d8 ^ DAT_18083cf40) >> bFlag_2 |
                   (DAT_1808430d8 ^ DAT_18083cf40) << 0x40 - bFlag_2);
  if (fnPtr_3 == (func_ptr_t )0x0) {
    return 0;
  }
  uVal_1 = (*fnPtr_3)(param_1);
  return uVal_1;
}

// func_0x180699cf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x180699cf0(int64_t *param_1)
{
  char ch_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  
  ch_1 = func_0x180699db8();
  if (ch_1 != '\0') {
    pLong_2 = (int64_t *)func_0x18067e2c8(1);
    if (param_1 == pLong_2) {
      pLong_2 = &DAT_1808430e0;
    }
    else {
      pLong_2 = (int64_t *)func_0x18067e2c8(2);
      if (param_1 != pLong_2) {
        return 0;
      }
      pLong_2 = &DAT_1808430e8;
    }
    _DAT_1808425d8 = _DAT_1808425d8 + 1;
    if ((*(uint *)((int64_t)param_1 + 0x14) & 0x4c0) == 0) {
      LOCK();
      *(uint *)((int64_t)param_1 + 0x14) = *(uint *)((int64_t)param_1 + 0x14) | 0x282;
      UNLOCK();
      if (*pLong_2 == 0) {
        lVal_3 = _malloc_base(0x1000);
        *pLong_2 = lVal_3;
        func_0x180695dd0(0);
      }
      if (*pLong_2 == 0) {
        *(uint32_t *)(param_1 + 2) = 2;
        param_1[1] = (int64_t)param_1 + 0x1c;
        *param_1 = (int64_t)param_1 + 0x1c;
        *(uint32_t *)(param_1 + 4) = 2;
      }
      else {
        param_1[1] = *pLong_2;
        *param_1 = *pLong_2;
        *(uint32_t *)(param_1 + 2) = 0x1000;
        *(uint32_t *)(param_1 + 4) = 0x1000;
      }
      return 1;
    }
  }
  return 0;
}

// func_0x180699db8
bool func_0x180699db8(FILE *param_1)
{
  int iVal_1;
  FILE *pFn_2;
  bool bFlag_3;
  
  pFn_2 = (FILE *)func_0x18067e2c8(2);
  if (param_1 == pFn_2) {
    bFlag_3 = true;
  }
  else {
    pFn_2 = (FILE *)func_0x18067e2c8(1);
    if (param_1 == pFn_2) {
      iVal_1 = _fileno(param_1);
      iVal_1 = func_0x180684d5c(iVal_1);
      bFlag_3 = iVal_1 != 0;
    }
    else {
      bFlag_3 = false;
    }
  }
  return bFlag_3;
}

// func_0x180699e04
void func_0x180699e04(char param_1,uint64_t *param_2,uint64_t param_3)
{
  if ((param_1 != '\0') && ((*(uint *)((int64_t)param_2 + 0x14) >> 9 & 1) != 0)) {
    func_0x18068a9e8(param_2,param_3);
    LOCK();
    *(uint *)((int64_t)param_2 + 0x14) = *(uint *)((int64_t)param_2 + 0x14) & 0xfffffd7f;
    UNLOCK();
    *(uint32_t *)(param_2 + 4) = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  return;
}

// func_0x180699e44
int func_0x180699e44(void)
{
  int64_t lVal_1;
  int iVal_2;
  int iVal_3;
  int64_t lVal_4;
  int local_18;
  
  local_18 = 0;
  FID_conflict___acrt_lock(8);
  for (iVal_3 = 3; iVal_3 != DAT_1808425c8; iVal_3 = iVal_3 + 1) {
    lVal_4 = (int64_t)iVal_3;
    lVal_1 = *(int64_t *)(DAT_1808425d0 + lVal_4 * 8);
    if (lVal_1 != 0) {
      if (((*(uint *)(lVal_1 + 0x14) >> 0xd & 1) != 0) &&
         (iVal_2 = func_0x18068a690(*(uint64_t *)(DAT_1808425d0 + lVal_4 * 8)), iVal_2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(int64_t *)(DAT_1808425d0 + lVal_4 * 8) + 0x30));
      func_0x180695dd0(*(uint64_t *)(DAT_1808425d0 + lVal_4 * 8));
      *(uint64_t *)(DAT_1808425d0 + lVal_4 * 8) = 0;
    }
  }
  FID_conflict___acrt_lock(8);
  return local_18;
}

// __acrt_stdio_free_buffer_nolock
/* Library Function - Single Match
    __acrt_stdio_free_buffer_nolock
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_stdio_free_buffer_nolock
   
   Library: Visual Studio 2019 Release */
void __acrt_stdio_free_buffer_nolock(uint64_t *param_1)
{
  if (((*(uint *)((int64_t)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((int64_t)param_1 + 0x14) >> 6 & 1) != 0)) {
    func_0x180695dd0(param_1[1]);
    LOCK();
    *(uint *)((int64_t)param_1 + 0x14) = *(uint *)((int64_t)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(uint32_t *)(param_1 + 2) = 0;
  }
  return;
}

// func_0x180699f3c
uint64_t func_0x180699f3c(uint64_t *param_1,uint8_t *param_2,uint64_t param_3,int64_t param_4, int64_t param_5,int param_6,uint32_t param_7,uint64_t param_8,uint param_9, int64_t param_10)
{
  uint64_t uVal_1;
  int iVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint32_t uVal_5;
  uint uVal_6;
  int64_t lVal_7;
  uint64_t in_stack_ffffffffffffffe0;
  uint32_t uVal_8;
  
  if (param_2 == (uint8_t *)0x0) {
    *(uint8_t *)(param_10 + 0x30) = 1;
    *(uint32_t *)(param_10 + 0x2c) = 0x16;
  }
  else {
    if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
      if ((param_6 == 0x41) || (param_6 - 0x45U < 3)) {
        uVal_6 = 1;
      }
      else {
        uVal_6 = 0;
      }
      if (((param_8 & 8) == 0) && (uVal_1 = *param_1, ((uint)(uVal_1 >> 0x34) & 0x7ff) == 0x7ff)) {
        if ((uVal_1 & 0xfffffffffffff) == 0) {
          lVal_4 = 0;
        }
        else if (((int64_t)uVal_1 < 0) && ((uVal_1 & 0xfffffffffffff) == 0x8000000000000)) {
          lVal_4 = 0xc;
        }
        else {
          lVal_4 = (-(uint64_t)((uVal_1 & 0x8000000000000) != 0) & 0xfffffffffffffffc) + 8;
        }
        if (param_3 < 4U - ((int64_t)uVal_1 >> 0x3f)) {
          *param_2 = 0;
          return 0xc;
        }
        lVal_7 = -1;
        if ((int64_t)uVal_1 < 0) {
          *param_2 = 0x2d;
          param_2[1] = 0;
        }
        do {
          lVal_7 = lVal_7 + 1;
        } while ((&PTR_DAT_1806e7780)[(uint64_t)((uVal_6 ^ 1) * 2) + lVal_4][lVal_7] != '\0');
        iVal_2 = func_0x180695c70();
        if (iVal_2 == 0) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVal_5 = (uint32_t)(param_8 >> 4);
      param_9 = -(uint)((param_8 & 0x20) != 0) & param_9;
      uVal_8 = (uint32_t)((uint64_t)in_stack_ffffffffffffffe0 >> 0x20);
      if (param_6 != 0x41) {
        if (param_6 == 0x45) {
LAB_18069a189:
          uVal_3 = func_0x18069a408(param_1,param_2,param_3,param_4,param_5,param_7,uVal_6,
                                CONCAT44(uVal_8,uVal_5) & 0xffffffff00000001 | 2,param_9,param_10);
          return uVal_3;
        }
        if (param_6 == 0x46) {
LAB_18069a158:
          uVal_3 = func_0x18069ab08(param_1,param_2,param_3,param_4,param_5,param_7,param_9,param_10);
          return uVal_3;
        }
        if (param_6 != 0x47) {
          if (param_6 == 0x61) goto LAB_18069a1c3;
          if (param_6 == 0x65) goto LAB_18069a189;
          if (param_6 == 0x66) goto LAB_18069a158;
        }
        uVal_3 = func_0x18069abe0(param_1,param_2,param_3,param_4,param_5,param_7,uVal_6,
                              CONCAT44(uVal_8,uVal_5) & 0xffffffff00000001 | 2,param_9,param_10);
        return uVal_3;
      }
LAB_18069a1c3:
      uVal_3 = func_0x18069a624(param_1,param_2,param_3,param_4,param_5,param_7,uVal_6,
                            CONCAT44(uVal_8,uVal_5) & 0xffffffff00000001 | 2,param_9,param_10);
      return uVal_3;
    }
    *(uint8_t *)(param_10 + 0x30) = 1;
    *(uint32_t *)(param_10 + 0x2c) = 0x16;
  }
  func_0x180684b50(0,0,0,0,0,param_10);
  return 0x16;
}

// func_0x18069a224
uint64_t func_0x18069a224(uint8_t *param_1,uint64_t param_2,int param_3,char param_4,int param_5,int *param_6 ,byte param_7,int64_t param_8)
{
  int iVal_1;
  uint64_t uVal_2;
  uint8_t *pU64_3;
  int64_t lVal_4;
  int64_t lVal_5;
  
  iVal_1 = 0;
  if (0 < param_3) {
    iVal_1 = param_3;
  }
  if ((uint64_t)(int64_t)(iVal_1 + 9) < param_2) {
    if ((param_7 != 0) && (pU64_3 = param_1 + (*param_6 == 0x2d), 0 < param_3)) {
      lVal_4 = -1;
      do {
        lVal_5 = lVal_4;
        lVal_4 = lVal_5 + 1;
      } while (pU64_3[lVal_4] != '\0');
      func_0x1806aa960(pU64_3 + 1,pU64_3,lVal_5 + 2);
    }
    if (*param_6 == 0x2d) {
      *param_1 = 0x2d;
      param_1 = param_1 + 1;
    }
    if (0 < param_3) {
      *param_1 = param_1[1];
      param_1 = param_1 + 1;
      if (*(char *)(param_8 + 0x28) == '\0') {
        func_0x18067e970(param_8);
      }
      *param_1 = *(uint8_t *)**(uint64_t **)(*(int64_t *)(param_8 + 0x18) + 0xf8);
    }
    param_1 = param_1 + ((uint64_t)param_7 ^ 1) + (int64_t)param_3;
    iVal_1 = func_0x180695c70();
    if (iVal_1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4 != '\0') {
      *param_1 = 0x45;
    }
    if (**(char **)(param_6 + 2) != '0') {
      iVal_1 = param_6[1] + -1;
      if (iVal_1 < 0) {
        iVal_1 = -iVal_1;
        param_1[1] = 0x2d;
      }
      if (99 < iVal_1) {
        param_1[2] = param_1[2] + (char)(iVal_1 / 100);
        iVal_1 = iVal_1 % 100;
      }
      if (9 < iVal_1) {
        param_1[3] = param_1[3] + (char)(iVal_1 / 10);
        iVal_1 = iVal_1 % 10;
      }
      param_1[4] = param_1[4] + (char)iVal_1;
    }
    if ((param_5 == 2) && (param_1[2] == '0')) {
      func_0x1806aa960(param_1 + 2,param_1 + 3,3);
    }
    uVal_2 = 0;
  }
  else {
    *(uint8_t *)(param_8 + 0x30) = 1;
    *(uint32_t *)(param_8 + 0x2c) = 0x22;
    func_0x180684b50(0,0,0,0,0,param_8);
    uVal_2 = 0x22;
  }
  return uVal_2;
}

// func_0x18069a408
void func_0x18069a408(uint64_t *param_1,uint8_t *param_2,int64_t param_3,uint64_t param_4, uint64_t param_5,int param_6,uint8_t param_7,uint32_t param_8, uint32_t param_9,uint64_t param_10)
{
  uint32_t uVal_1;
  int iVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint8_t local_18 [16];
  
  local_18 = ZEXT816(0);
  uVal_1 = func_0x1806a7020(*param_1,param_6 + 1,1,local_18,param_4,param_5);
  lVal_3 = (param_3 - (uint64_t)(0 < param_6)) - (uint64_t)(local_18._0_4_ == 0x2d);
  if (param_3 == -1) {
    lVal_3 = -1;
  }
  uVal_4 = param_10;
  iVal_2 = func_0x1806a6e40(param_2 + (uint64_t)(0 < param_6) + (uint64_t)(local_18._0_4_ == 0x2d),
                        lVal_3,param_6 + 1,local_18,uVal_1,param_9,param_10);
  if (iVal_2 == 0) {
    func_0x18069a224(param_2,param_3,param_6,param_7,param_8,local_18,uVal_4 & 0xffffffffffffff00,
                  param_10);
  }
  else {
    *param_2 = 0;
  }
  return;
}

// should_round_up
/* Library Function - Single Match
    bool __cdecl should_round_up(double const * __ptr64 const,unsigned __int64,short,enum
   __acrt_rounding_mode)
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    bool __cdecl should_round_up(double const * __ptr64 const,unsigned __int64,short,enum
   __acrt_rounding_mode)
   
   Library: Visual Studio 2019 Release */
bool __cdecl should_round_up(double *param_1,__uint64 param_2,short param_3,__acrt_rounding_mode param_4)
{
  double dVal_1;
  ushort uVal_2;
  int iVal_3;
  byte bFlag_4;
  
  bFlag_4 = (byte)param_3;
  uVal_2 = (ushort)(((uint64_t)*param_1 & param_2 & 0xfffffffffffff) >> (bFlag_4 & 0x3f));
  if (param_4 == 0) {
    return 7 < uVal_2;
  }
  iVal_3 = fegetround();
  if (iVal_3 == 0) {
    dVal_1 = *param_1;
    uVal_2 = (ushort)(((uint64_t)dVal_1 & param_2 & 0xfffffffffffff) >> (bFlag_4 & 0x3f));
    if (8 < uVal_2) {
      return true;
    }
    if (7 < uVal_2) {
      if (((1L << (bFlag_4 & 0x3f)) - 1U & (uint64_t)dVal_1 & 0xfffffffffffff) == 0) {
        if (param_3 == 0x30) {
          bFlag_4 = ((uint64_t)dVal_1 & 0x7ff0000000000000) != 0;
        }
        else {
          bFlag_4 = (byte)(((uint64_t)dVal_1 >> 4 & param_2 & 0xffffffffffff) >> (bFlag_4 & 0x3f));
        }
        return (bool)(bFlag_4 & 1);
      }
      return true;
    }
  }
  else if (iVal_3 == 0x200) {
    if ((uVal_2 != 0) && (-1 < (int64_t)*param_1)) {
      return true;
    }
  }
  else {
    if (iVal_3 != 0x100) {
      return false;
    }
    if ((uVal_2 != 0) && ((int64_t)*param_1 < 0)) {
      return true;
    }
  }
  return false;
}

// func_0x18069a624
uint64_t func_0x18069a624(double *param_1,uint8_t *param_2,uint64_t param_3,uint64_t param_4, uint64_t param_5,uint param_6,byte param_7,uint32_t param_8, __acrt_rounding_mode param_9,int64_t param_10)
{
  bool bFlag_1;
  ushort uVal_2;
  uint64_t uVal_3;
  char *fnPtr_4;
  char *fnPtr_5;
  int64_t lVal_6;
  int64_t lVal_7;
  char ch_8;
  short sz_9;
  short sz_10;
  char *fnPtr_11;
  uint uVal_12;
  char *fnPtr_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  
  *param_2 = 0;
  uVal_12 = 0;
  if (-1 < (int)param_6) {
    uVal_12 = param_6;
  }
  if (param_3 <= (uint64_t)(int64_t)(int)(uVal_12 + 0xb)) {
    *(uint8_t *)(param_10 + 0x30) = 1;
    *(uint32_t *)(param_10 + 0x2c) = 0x22;
    func_0x180684b50(0,0,0,0,0,param_10);
    return 0x22;
  }
  if (((uint64_t)*param_1 >> 0x34 & 0x7ff) == 0x7ff) {
    uVal_3 = func_0x18069a408(param_1,param_2,param_3,param_4,param_5,uVal_12,0,param_8,param_9,param_10)
    ;
    if ((int)uVal_3 != 0) {
      *param_2 = 0;
      return uVal_3;
    }
    fnPtr_4 = (char *)func_0x1806a6d00(param_2,0x65);
    if (fnPtr_4 == (char *)0x0) {
      return 0;
    }
    *fnPtr_4 = (param_7 ^ 1) * ' ' + 'P';
    fnPtr_4[3] = '\0';
    return 0;
  }
  if ((int64_t)*param_1 < 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  fnPtr_4 = param_2 + 1;
  uVal_15 = 0x3ff;
  sz_10 = (ushort)(param_7 ^ 1) * 0x20 + 7;
  if (((uint64_t)*param_1 & 0x7ff0000000000000) == 0) {
    *param_2 = 0x30;
    uVal_15 = (uint64_t)(-(uint)(((uint64_t)*param_1 & 0xfffffffffffff) != 0) & 0x3fe);
  }
  else {
    *param_2 = 0x31;
  }
  fnPtr_11 = param_2 + 2;
  if (uVal_12 == 0) {
    ch_8 = '\0';
  }
  else {
    if (*(char *)(param_10 + 0x28) == '\0') {
      func_0x18067e970(param_10);
    }
    ch_8 = ***(char ***)(*(int64_t *)(param_10 + 0x18) + 0xf8);
  }
  *fnPtr_4 = ch_8;
  if (((uint64_t)*param_1 & 0xfffffffffffff) != 0) {
    sz_9 = 0x30;
    uVal_14 = 0xf000000000000;
    while (0 < (int)uVal_12) {
      uVal_2 = (short)(((uint64_t)*param_1 & uVal_14) >> ((byte)sz_9 & 0x3f)) + 0x30;
      if (0x39 < uVal_2) {
        uVal_2 = uVal_2 + sz_10;
      }
      *fnPtr_11 = (char)uVal_2;
      uVal_12 = uVal_12 - 1;
      fnPtr_11 = fnPtr_11 + 1;
      uVal_14 = uVal_14 >> 4;
      sz_9 = sz_9 + -4;
      if (sz_9 < 0) goto LAB_18069a876;
    }
    bFlag_1 = should_round_up(param_1,uVal_14,sz_9,param_9);
    fnPtr_13 = fnPtr_11;
    if (!bFlag_1) goto LAB_18069a89c;
    while( true ) {
      fnPtr_5 = fnPtr_13 + -1;
      ch_8 = *fnPtr_5;
      if ((ch_8 + 0xbaU & 0xdf) != 0) break;
      *fnPtr_5 = '0';
      fnPtr_13 = fnPtr_5;
    }
    if (fnPtr_5 == fnPtr_4) {
      fnPtr_13[-2] = fnPtr_13[-2] + '\x01';
    }
    else {
      if (ch_8 == '9') {
        ch_8 = (char)sz_10 + '9';
      }
      *fnPtr_5 = ch_8 + '\x01';
    }
  }
LAB_18069a876:
  if (0 < (int)uVal_12) {
    func_0x1806ab010(fnPtr_11,0x30,uVal_12);
    fnPtr_11 = fnPtr_11 + uVal_12;
  }
LAB_18069a89c:
  if (*fnPtr_4 == '\0') {
    fnPtr_11 = fnPtr_4;
  }
  *fnPtr_11 = (param_7 ^ 1) * ' ' + 'P';
  fnPtr_4 = fnPtr_11 + 2;
  uVal_12 = (uint)((uint64_t)*param_1 >> 0x34) & 0x7ff;
  lVal_6 = uVal_12 - uVal_15;
  lVal_7 = lVal_6;
  if (lVal_6 < 0) {
    lVal_7 = uVal_15 - uVal_12;
  }
  ch_8 = '+';
  if (lVal_6 < 0) {
    ch_8 = '-';
  }
  fnPtr_11[1] = ch_8;
  *fnPtr_4 = '0';
  fnPtr_13 = fnPtr_4;
  if (lVal_7 < 1000) {
LAB_18069a923:
    if (99 < lVal_7) goto LAB_18069a929;
LAB_18069a95c:
    if (lVal_7 < 10) goto LAB_18069a98d;
  }
  else {
    fnPtr_13 = fnPtr_11 + 3;
    *fnPtr_4 = (char)(lVal_7 / 1000) + '0';
    lVal_7 = lVal_7 % 1000;
    if (fnPtr_13 == fnPtr_4) goto LAB_18069a923;
LAB_18069a929:
    lVal_6 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVal_7),8) + lVal_7;
    lVal_6 = (lVal_6 >> 6) - (lVal_6 >> 0x3f);
    *fnPtr_13 = (char)lVal_6 + '0';
    fnPtr_13 = fnPtr_13 + 1;
    lVal_7 = lVal_7 + lVal_6 * -100;
    if (fnPtr_13 == fnPtr_4) goto LAB_18069a95c;
  }
  *fnPtr_13 = (char)(lVal_7 / 10) + '0';
  fnPtr_13 = fnPtr_13 + 1;
  lVal_7 = lVal_7 % 10;
LAB_18069a98d:
  *fnPtr_13 = (char)lVal_7 + '0';
  fnPtr_13[1] = '\0';
  return 0;
}

// func_0x18069a9b8
uint64_t func_0x18069a9b8(uint8_t *param_1,uint64_t param_2,int param_3,int *param_4,char param_5, int64_t param_6)
{
  uint8_t *pU64_1;
  bool bFlag_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  
  if ((param_5 != '\0') && (param_4[1] + -1 == param_3)) {
    *(uint16_t *)(param_1 + (int64_t)param_4[1] + -1 + (uint64_t)(*param_4 == 0x2d)) = 0x30;
  }
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    param_1 = param_1 + 1;
  }
  iVal_3 = param_4[1];
  if (iVal_3 < 1) {
    if ((iVal_3 == 0) && (**(char **)(param_4 + 2) == '0')) {
      bFlag_2 = true;
    }
    else {
      bFlag_2 = false;
    }
    if ((param_5 == '\0') || (!bFlag_2)) {
      lVal_5 = -1;
      do {
        lVal_4 = lVal_5;
        lVal_5 = lVal_4 + 1;
      } while (param_1[lVal_5] != '\0');
      func_0x1806aa960(param_1 + 1,param_1,lVal_4 + 2);
    }
    *param_1 = 0x30;
    param_1 = param_1 + 1;
  }
  else {
    param_1 = param_1 + iVal_3;
  }
  if (0 < param_3) {
    pU64_1 = param_1 + 1;
    lVal_5 = -1;
    do {
      lVal_4 = lVal_5;
      lVal_5 = lVal_4 + 1;
    } while (param_1[lVal_5] != '\0');
    func_0x1806aa960(pU64_1,param_1,lVal_4 + 2);
    if (*(char *)(param_6 + 0x28) == '\0') {
      func_0x18067e970(param_6);
    }
    *param_1 = *(uint8_t *)**(uint64_t **)(*(int64_t *)(param_6 + 0x18) + 0xf8);
    if (param_4[1] < 0) {
      iVal_3 = -param_4[1];
      if ((param_5 != '\0') || (iVal_3 < param_3)) {
        param_3 = iVal_3;
      }
      lVal_5 = -1;
      do {
        lVal_4 = lVal_5;
        lVal_5 = lVal_4 + 1;
      } while (pU64_1[lVal_5] != '\0');
      func_0x1806aa960(pU64_1 + param_3,pU64_1,lVal_4 + 2);
      func_0x1806ab010(pU64_1,0x30,(int64_t)param_3);
    }
  }
  return 0;
}

// func_0x18069ab08
void func_0x18069ab08(uint64_t *param_1,uint8_t *param_2,int64_t param_3,uint64_t param_4, uint64_t param_5,int param_6,uint32_t param_7,uint64_t param_8)
{
  uint32_t uVal_1;
  int iVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint8_t local_18 [16];
  
  local_18 = ZEXT816(0);
  uVal_1 = func_0x1806a7020(*param_1,param_6,0,local_18,param_4,param_5);
  lVal_3 = param_3 - (uint64_t)(local_18._0_4_ == 0x2d);
  uVal_4 = CONCAT44((int)((uint64_t)param_4 >> 0x20),uVal_1);
  if (param_3 == -1) {
    lVal_3 = -1;
  }
  iVal_2 = func_0x1806a6e40(param_2 + (local_18._0_4_ == 0x2d),lVal_3,local_18._4_4_ + param_6,local_18,
                        uVal_4,param_7,param_8);
  if (iVal_2 == 0) {
    func_0x18069a9b8(param_2,param_3,param_6,local_18,uVal_4 & 0xffffffffffffff00,param_8);
  }
  else {
    *param_2 = 0;
  }
  return;
}

// func_0x18069abe0
void func_0x18069abe0(uint64_t *param_1,uint8_t *param_2,int64_t param_3,uint64_t param_4, uint64_t param_5,int param_6,uint8_t param_7,uint32_t param_8, uint32_t param_9,uint64_t param_10)
{
  char *fnPtr_1;
  uint32_t uVal_2;
  int iVal_3;
  int64_t lVal_4;
  char *fnPtr_5;
  int iVal_6;
  bool bFlag_7;
  uint8_t local_18 [16];
  
  local_18 = ZEXT816(0);
  uVal_2 = func_0x1806a7020(*param_1,param_6,0,local_18,param_4,param_5);
  bFlag_7 = local_18._0_4_ == 0x2d;
  lVal_4 = param_3 - (uint64_t)bFlag_7;
  iVal_6 = local_18._4_4_ + -1;
  if (param_3 == -1) {
    lVal_4 = -1;
  }
  iVal_3 = func_0x1806a6e40(param_2 + bFlag_7,lVal_4,param_6,local_18,uVal_2,param_9,param_10);
  if (iVal_3 == 0) {
    iVal_3 = local_18._4_4_ + -1;
    if ((iVal_3 < -4) || (param_6 <= iVal_3)) {
      func_0x18069a224(param_2,param_3,param_6,param_7,param_8,local_18,1,param_10);
    }
    else {
      fnPtr_1 = param_2 + bFlag_7;
      if (iVal_6 < iVal_3) {
        do {
          fnPtr_5 = fnPtr_1;
          fnPtr_1 = fnPtr_5 + 1;
        } while (*fnPtr_5 != '\0');
        fnPtr_5[-1] = '\0';
      }
      func_0x18069a9b8(param_2,param_3,param_6,local_18,1,param_10);
    }
  }
  else {
    *param_2 = 0;
  }
  return;
}

// func_0x18069ad34
uint32_t func_0x18069ad34(int *param_1,uint8_t *param_2,uint64_t param_3,ushort param_4,int64_t param_5)
{
  int iVal_1;
  DWORD DVar2;
  uint32_t uVal_3;
  uint64_t local_res10;
  ushort local_res20 [4];
  uint64_t in_stack_ffffffffffffffd0;
  
  uVal_3 = (uint32_t)((uint64_t)in_stack_ffffffffffffffd0 >> 0x20);
  if ((param_2 == (uint8_t *)0x0) && (param_3 != 0)) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  local_res20[0] = param_4;
  if (param_3 < 0x80000000) {
    if (*(char *)(param_5 + 0x28) == '\0') {
      func_0x18067e970(param_5);
    }
    iVal_1 = *(int *)(*(int64_t *)(param_5 + 0x18) + 0xc);
    if (iVal_1 == 0xfde9) {
      local_res10 = 0;
      iVal_1 = func_0x1806a82a0(param_2,local_res20[0],&local_res10,param_5);
      if (param_1 != (int *)0x0) {
        *param_1 = iVal_1;
      }
      if (iVal_1 < 5) {
        return 0;
      }
      if (*(char *)(param_5 + 0x30) != '\0') {
        return *(uint32_t *)(param_5 + 0x2c);
      }
      return 0;
    }
    if (*(int64_t *)(*(int64_t *)(param_5 + 0x18) + 0x138) == 0) {
      if (0xff < local_res20[0]) {
        if ((param_2 != (uint8_t *)0x0) && (param_3 != 0)) {
          func_0x1806ab010(param_2,0,param_3);
        }
        goto LAB_18069ae16;
      }
      if (param_2 == (uint8_t *)0x0) {
LAB_18069ae42:
        if (param_1 != (int *)0x0) {
          *param_1 = 1;
        }
        return 0;
      }
      if (param_3 != 0) {
        *param_2 = (char)local_res20[0];
        goto LAB_18069ae42;
      }
    }
    else {
      local_res10 = local_res10 & 0xffffffff00000000;
      iVal_1 = func_0x180695f20(iVal_1,0,local_res20,1,param_2,CONCAT44(uVal_3,(int)param_3),0,
                            &local_res10);
      if (iVal_1 != 0) {
        if ((int)local_res10 == 0) {
          if (param_1 == (int *)0x0) {
            return 0;
          }
          *param_1 = iVal_1;
          return 0;
        }
LAB_18069ae16:
        *(uint32_t *)(param_5 + 0x2c) = 0x2a;
        *(uint8_t *)(param_5 + 0x30) = 1;
        return 0x2a;
      }
      DVar2 = GetLastError();
      if (DVar2 != 0x7a) goto LAB_18069ae16;
      if ((param_2 != (uint8_t *)0x0) && (param_3 != 0)) {
        func_0x1806ab010(param_2,0,param_3);
      }
    }
    uVal_3 = 0x22;
  }
  else {
    uVal_3 = 0x16;
  }
  *(uint32_t *)(param_5 + 0x2c) = uVal_3;
  *(uint8_t *)(param_5 + 0x30) = 1;
  func_0x180684b50(0,0,0,0,0,param_5);
  return uVal_3;
}

// func_0x18069aee4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int func_0x18069aee4(ushort *param_1,byte *param_2,uint64_t param_3,int64_t param_4)
{
  int iVal_1;
  int64_t *pLong_2;
  int iVal_3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_1808430f0 = 0;
  }
  else {
    if (*param_2 != 0) {
      if (*(char *)(param_4 + 0x28) == '\0') {
        func_0x18067e970(param_4);
      }
      pLong_2 = *(int64_t **)(param_4 + 0x18);
      iVal_3 = *(int *)((int64_t)pLong_2 + 0xc);
      if (iVal_3 != 0xfde9) {
        if (pLong_2[0x27] == 0) {
          if (param_1 != (ushort *)0x0) {
            *param_1 = (ushort)*param_2;
          }
          return 1;
        }
        if (*(short *)(*pLong_2 + (uint64_t)*param_2 * 2) < 0) {
          iVal_1 = *(int *)(pLong_2 + 1);
          if ((((1 < iVal_1) && (iVal_1 <= (int)param_3)) &&
              (iVal_3 = func_0x180695e90(iVal_3,9,param_2,iVal_1,param_1,param_1 != (ushort *)0x0),
              iVal_3 != 0)) ||
             (((uint64_t)(int64_t)*(int *)(*(int64_t *)(param_4 + 0x18) + 8) <= param_3 &&
              (param_2[1] != 0)))) {
            return *(int *)(*(int64_t *)(param_4 + 0x18) + 8);
          }
        }
        else {
          iVal_3 = func_0x180695e90(iVal_3,9,param_2,1,param_1,param_1 != (ushort *)0x0);
          if (iVal_3 != 0) {
            return 1;
          }
        }
        *(uint8_t *)(param_4 + 0x30) = 1;
        *(uint32_t *)(param_4 + 0x2c) = 0x2a;
        return -1;
      }
      iVal_3 = func_0x18069b2f8(param_1,param_2,param_3,&DAT_1808430f0,param_4);
      if (iVal_3 < 0) {
        return -1;
      }
      return iVal_3;
    }
    if (param_1 != (ushort *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}

// func_0x18069b05c
uint64_t func_0x18069b05c(byte *param_1)
{
  byte bFlag_1;
  uint64_t uVal_2;
  
  bFlag_1 = *param_1;
  if (-1 < (char)bFlag_1) {
    return (uint64_t)(bFlag_1 != 0);
  }
  if ((bFlag_1 & 0xe0) == 0xc0) {
    return 2;
  }
  if ((bFlag_1 & 0xf0) == 0xe0) {
    return 3;
  }
  uVal_2 = 0xffffffff;
  if ((bFlag_1 & 0xf8) == 0xf0) {
    uVal_2 = 4;
  }
  return uVal_2;
}

// func_0x18069b094
void func_0x18069b094(uint64_t param_1,byte *param_2,uint64_t param_3,uint *param_4, uint64_t param_5)
{
  byte bFlag_1;
  uint64_t uVal_2;
  uint uVal_3;
  uint *pU64_4;
  byte *pU8_5;
  byte bFlag_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint *pU64_10;
  uint8_t auStack_78 [24];
  uint auStack_60 [4];
  uint32_t local_50;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  pU64_4 = (uint *)&DAT_1808430f8;
  if (param_4 != (uint *)0x0) {
    pU64_4 = param_4;
  }
  pU8_5 = &DAT_180761155;
  uVal_2 = 1;
  if (param_2 != (byte *)0x0) {
    pU8_5 = param_2;
    uVal_2 = param_3;
  }
  pU64_10 = (uint *)(-(uint64_t)(param_2 != (byte *)0x0) & param_1);
  if (uVal_2 == 0) goto LAB_18069b235;
  if (*(short *)((int64_t)pU64_4 + 6) == 0) {
    uVal_3 = func_0x18069b05c(pU8_5);
    uVal_7 = (uint64_t)(int)uVal_3;
    bFlag_1 = *pU8_5;
    pU8_5 = pU8_5 + 1;
    if (uVal_3 < 2) {
      if (pU64_10 != (uint *)0x0) {
        *pU64_10 = (uint)bFlag_1;
      }
      goto LAB_18069b235;
    }
    if (uVal_3 - 2 < 3) {
      bFlag_6 = (byte)uVal_3;
      uVal_3 = (1 << (7 - bFlag_6 & 0x1f)) - 1U & (uint)bFlag_1;
      goto LAB_18069b181;
    }
  }
  else {
    bFlag_1 = *(byte *)(pU64_4 + 1);
    uVal_7 = (uint64_t)bFlag_1;
    uVal_3 = *pU64_4;
    bFlag_6 = *(byte *)((int64_t)pU64_4 + 6);
    if ((((byte)(bFlag_1 - 2) < 3) && (bFlag_6 != 0)) && (bFlag_6 < bFlag_1)) {
LAB_18069b181:
      uVal_9 = (uint64_t)bFlag_6;
      uVal_8 = uVal_9;
      if (uVal_2 <= uVal_9) {
        uVal_8 = uVal_2;
      }
      while ((uint64_t)((int64_t)pU8_5 - (int64_t)param_2) < uVal_8) {
        bFlag_1 = *pU8_5;
        pU8_5 = pU8_5 + 1;
        if ((bFlag_1 & 0xc0) != 0x80) goto LAB_18069b22a;
        uVal_3 = bFlag_1 & 0x3f | uVal_3 << 6;
      }
      if (uVal_8 < uVal_9) {
        *(ushort *)(pU64_4 + 1) = (ushort)uVal_7 & 0xff;
        *(ushort *)((int64_t)pU64_4 + 6) = (ushort)(byte)(bFlag_6 - (char)uVal_8);
        *pU64_4 = uVal_3;
        goto LAB_18069b235;
      }
      if ((0x7ff < uVal_3 - 0xd800) && (uVal_3 < 0x110000)) {
        auStack_60[2] = 0x80;
        auStack_60[3] = 0x800;
        local_50 = 0x10000;
        if (auStack_60[uVal_7 & 0xff] <= uVal_3) {
          if (pU64_10 != (uint *)0x0) {
            *pU64_10 = uVal_3;
          }
          func_0x1806a8358(-(uint64_t)(uVal_3 != 0) & uVal_9,pU64_4);
          goto LAB_18069b235;
        }
      }
    }
  }
LAB_18069b22a:
  func_0x1806a8344(pU64_4,param_5);
LAB_18069b235:
  func_0x180673080(local_48 ^ (uint64_t)auStack_78);
  return;
}

// func_0x18069b254
uint64_t func_0x18069b254(uint64_t param_1,uint param_2,int *param_3,uint64_t param_4)
{
  ushort uVal_1;
  uint64_t uVal_2;
  int *pInt_3;
  uint64_t local_res18 [2];
  
  pInt_3 = (int *)&DAT_180843100;
  if (param_3 != (int *)0x0) {
    pInt_3 = param_3;
  }
  uVal_1 = (short)param_2 + 0x2400;
  if (*pInt_3 == 0) {
    if (0x3ff < uVal_1) {
      if ((ushort)((short)param_2 + 0x2800U) < 0x400) {
        *pInt_3 = (param_2 & 0x27ff) * 0x400 + 0x10000;
        return 0;
      }
      uVal_2 = func_0x1806a82a0(param_1,param_2 & 0xffff,pInt_3);
      return uVal_2;
    }
  }
  else if (uVal_1 < 0x400) {
    local_res18[0] = 0;
    uVal_2 = func_0x1806a82a0(param_1,(param_2 & 0x23ff) + *pInt_3,local_res18);
    uVal_2 = func_0x1806a8358(uVal_2,pInt_3);
    return uVal_2;
  }
  uVal_2 = func_0x1806a8344(pInt_3,param_4);
  return uVal_2;
}

// func_0x18069b2f8
void func_0x18069b2f8(uint16_t *param_1)
{
  uint64_t uVal_1;
  uint local_18 [4];
  
  local_18[0] = 0;
  uVal_1 = func_0x18069b094(local_18);
  if (uVal_1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (uint16_t *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}

// func_0x18069b340
char * func_0x18069b340(ushort *param_1,char **param_2,uint64_t param_3,uint64_t param_4, int64_t param_5)
{
  int64_t lVal_1;
  char *fnPtr_2;
  ushort *pU64_3;
  char *fnPtr_4;
  char *fnPtr_5;
  char ch_6;
  uint local_res8 [2];
  
  fnPtr_5 = *param_2;
  fnPtr_4 = (char *)0x0;
  if (param_1 == (ushort *)0x0) {
    while( true ) {
      if (*fnPtr_5 == '\0') {
        ch_6 = '\x01';
      }
      else if (fnPtr_5[1] == '\0') {
        ch_6 = '\x02';
      }
      else {
        ch_6 = (fnPtr_5[2] != '\0') + '\x03';
      }
      lVal_1 = func_0x18069b094(0,fnPtr_5,ch_6,param_4,param_5);
      if (lVal_1 == -1) {
        *(uint8_t *)(param_5 + 0x30) = 1;
        *(uint32_t *)(param_5 + 0x2c) = 0x2a;
        return (char *)0xffffffffffffffff;
      }
      if (lVal_1 == 0) break;
      fnPtr_5 = fnPtr_5 + lVal_1;
      fnPtr_2 = fnPtr_4 + 1;
      if (lVal_1 != 4) {
        fnPtr_2 = fnPtr_4;
      }
      fnPtr_4 = fnPtr_2 + 1;
    }
  }
  else {
    pU64_3 = param_1;
    if (param_3 != 0) {
      do {
        if (*fnPtr_5 == '\0') {
          ch_6 = '\x01';
        }
        else if (fnPtr_5[1] == '\0') {
          ch_6 = '\x02';
        }
        else {
          ch_6 = (fnPtr_5[2] != '\0') + '\x03';
        }
        local_res8[0] = 0;
        lVal_1 = func_0x18069b094(local_res8,fnPtr_5,ch_6,param_4,param_5);
        if (lVal_1 == -1) {
          *param_2 = fnPtr_5;
          *(uint8_t *)(param_5 + 0x30) = 1;
          *(uint32_t *)(param_5 + 0x2c) = 0x2a;
          return (char *)0xffffffffffffffff;
        }
        if (lVal_1 == 0) {
          *pU64_3 = 0;
          fnPtr_5 = fnPtr_4;
          break;
        }
        if (0xffff < local_res8[0]) {
          if (param_3 < 2) break;
          param_3 = param_3 - 1;
          *pU64_3 = (ushort)(local_res8[0] - 0x10000 >> 10) | 0xd800;
          pU64_3 = pU64_3 + 1;
          local_res8[0] = (uint)((ushort)(local_res8[0] - 0x10000) & 0x3ff | 0xdc00);
        }
        *pU64_3 = (ushort)local_res8[0];
        fnPtr_5 = fnPtr_5 + lVal_1;
        pU64_3 = pU64_3 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    *param_2 = fnPtr_5;
    fnPtr_4 = (char *)((int64_t)pU64_3 - (int64_t)param_1 >> 1);
  }
  return fnPtr_4;
}

// func_0x18069b4f8
bool func_0x18069b4f8(void)
{
  return DAT_180843108 == (DAT_18083cf40 | 1);
}

// func_0x18069b578
bool func_0x18069b578(void)
{
  char ch_1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  ch_1 = func_0x18069b65c();
  if (ch_1 == '\0') {
    func_0x180697244(local_res8);
  }
  return local_res8[0] != 1;
}

// func_0x18069b5a8
void func_0x18069b5a8(void)
{
  char ch_1;
  int local_res8 [8];
  
  if (DAT_180843110 == 0) {
    local_res8[0] = 0;
    ch_1 = func_0x18069b65c();
    if (ch_1 == '\0') {
      func_0x1806972a0(local_res8);
    }
    DAT_180843110 = (local_res8[0] == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}

// func_0x18069b640
uint func_0x18069b640(void)
{
  return *(uint *)(*(int64_t *)((int64_t)Self + 0x60) + 0xbc) >> 8 & 0xffffff01;
}

// func_0x18069b65c
uint func_0x18069b65c(void)
{
  return *(uint *)(*(int64_t *)(*(int64_t *)((int64_t)Self + 0x60) + 0x20) + 8) >> 0x1f;
}

// thunk_FUN_18069b67c
int thunk_FUN_18069b67c(int64_t *param_1,int64_t *param_2)
{
  int64_t *pLong_1;
  uint32_t *pU64_2;
  int64_t lVal_3;
  int iVal_4;
  int64_t *pLong_5;
  int64_t *pLong_6;
  int64_t lVal_7;
  int64_t lVal_8;
  uint64_t uStackX_10;
  int64_t lStackX_18;
  int64_t lStackX_20;
  uint8_t auStack_58 [16];
  uint64_t uStack_48;
  int64_t lVal_9;
  
  if (param_2 == (int64_t *)0x0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    iVal_4 = 0x16;
    *pU64_2 = 0x16;
    func_0x180684970();
  }
  else {
    *param_2 = 0;
    lVal_7 = *param_1;
    auStack_58 = ZEXT816(0);
    uStack_48 = 0;
    while (lVal_7 != 0) {
      uStackX_10 = CONCAT53(uStackX_10._3_5_,0x3f2a);
      lVal_7 = func_0x1806a8700(lVal_7,&uStackX_10);
      if (lVal_7 == 0) {
        iVal_4 = func_0x18069ba64(*param_1,0,0,auStack_58);
        if (iVal_4 != 0) {
          pLong_6 = (int64_t *)auStack_58._0_8_;
          pLong_5 = (int64_t *)auStack_58._0_8_;
          if (auStack_58._0_8_ != auStack_58._8_8_) {
            do {
              func_0x180695dd0(*pLong_5);
              pLong_5 = pLong_5 + 1;
            } while (pLong_5 != (int64_t *)auStack_58._8_8_);
          }
          goto LAB_18069b7cb;
        }
      }
      else {
        iVal_4 = func_0x18069bbe8(*param_1,lVal_7,auStack_58);
        if (iVal_4 != 0) {
          pLong_6 = (int64_t *)auStack_58._0_8_;
          pLong_5 = (int64_t *)auStack_58._0_8_;
          if (auStack_58._0_8_ != auStack_58._8_8_) {
            do {
              func_0x180695dd0(*pLong_5);
              pLong_5 = pLong_5 + 1;
            } while (pLong_5 != (int64_t *)auStack_58._8_8_);
          }
          goto LAB_18069b7cb;
        }
      }
      param_1 = param_1 + 1;
      lVal_7 = *param_1;
    }
    pLong_6 = (int64_t *)auStack_58._0_8_;
    pLong_1 = (int64_t *)auStack_58._8_8_;
    lVal_7 = ((int64_t)(auStack_58._8_8_ - auStack_58._0_8_) >> 3) + 1;
    lStackX_18 = 0;
    for (pLong_5 = (int64_t *)auStack_58._0_8_; pLong_5 != (int64_t *)auStack_58._8_8_;
        pLong_5 = pLong_5 + 1) {
      lVal_3 = -1;
      do {
        lVal_3 = lVal_3 + 1;
      } while (*(char *)(*pLong_5 + lVal_3) != '\0');
      lStackX_18 = lStackX_18 + 1 + lVal_3;
    }
    lVal_3 = __acrt_allocate_buffer_for_argv(lVal_7,lStackX_18,1);
    if (lVal_3 == 0) {
      func_0x180695dd0(0);
      for (pLong_5 = pLong_6; pLong_5 != pLong_1; pLong_5 = pLong_5 + 1) {
        func_0x180695dd0(*pLong_5);
      }
      iVal_4 = -1;
LAB_18069b7cb:
      func_0x180695dd0(pLong_6);
    }
    else {
      lVal_7 = lVal_3 + lVal_7 * 8;
      lStackX_20 = lVal_7;
      if (pLong_6 != pLong_1) {
        uStackX_10 = lVal_3 - (int64_t)pLong_6;
        pLong_5 = pLong_6;
        do {
          lVal_8 = -1;
          do {
            lVal_9 = lVal_8;
            lVal_8 = lVal_9 + 1;
          } while (*(char *)(*pLong_5 + lVal_8) != '\0');
          iVal_4 = func_0x1806a6bc0();
          if (iVal_4 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(int64_t *)(uStackX_10 + (int64_t)pLong_5) = lVal_7;
          lVal_7 = lVal_7 + lVal_9 + 2;
          pLong_5 = pLong_5 + 1;
        } while (pLong_5 != pLong_1);
      }
      *param_2 = lVal_3;
      func_0x180695dd0(0);
      for (pLong_5 = pLong_6; pLong_5 != pLong_1; pLong_5 = pLong_5 + 1) {
        func_0x180695dd0(*pLong_5);
      }
      func_0x180695dd0(pLong_6);
      iVal_4 = 0;
    }
  }
  return iVal_4;
}

// func_0x18069b67c
int func_0x18069b67c(int64_t *param_1,int64_t *param_2)
{
  int64_t *pLong_1;
  uint32_t *pU64_2;
  int64_t lVal_3;
  int iVal_4;
  int64_t *pLong_5;
  int64_t *pLong_6;
  int64_t lVal_7;
  int64_t lVal_8;
  uint64_t local_res10;
  int64_t local_res18;
  int64_t local_res20;
  uint8_t local_58 [16];
  uint64_t local_48;
  int64_t lVal_9;
  
  if (param_2 == (int64_t *)0x0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    iVal_4 = 0x16;
    *pU64_2 = 0x16;
    func_0x180684970();
  }
  else {
    *param_2 = 0;
    lVal_7 = *param_1;
    local_58 = ZEXT816(0);
    local_48 = 0;
    while (lVal_7 != 0) {
      local_res10 = CONCAT53(local_res10._3_5_,0x3f2a);
      lVal_7 = func_0x1806a8700(lVal_7,&local_res10);
      if (lVal_7 == 0) {
        iVal_4 = func_0x18069ba64(*param_1,0,0,local_58);
        if (iVal_4 != 0) {
          pLong_6 = (int64_t *)local_58._0_8_;
          pLong_5 = (int64_t *)local_58._0_8_;
          if (local_58._0_8_ != local_58._8_8_) {
            do {
              func_0x180695dd0(*pLong_5);
              pLong_5 = pLong_5 + 1;
            } while (pLong_5 != (int64_t *)local_58._8_8_);
          }
          goto LAB_18069b7cb;
        }
      }
      else {
        iVal_4 = func_0x18069bbe8(*param_1,lVal_7,local_58);
        if (iVal_4 != 0) {
          pLong_6 = (int64_t *)local_58._0_8_;
          pLong_5 = (int64_t *)local_58._0_8_;
          if (local_58._0_8_ != local_58._8_8_) {
            do {
              func_0x180695dd0(*pLong_5);
              pLong_5 = pLong_5 + 1;
            } while (pLong_5 != (int64_t *)local_58._8_8_);
          }
          goto LAB_18069b7cb;
        }
      }
      param_1 = param_1 + 1;
      lVal_7 = *param_1;
    }
    pLong_6 = (int64_t *)local_58._0_8_;
    pLong_1 = (int64_t *)local_58._8_8_;
    lVal_7 = ((int64_t)(local_58._8_8_ - local_58._0_8_) >> 3) + 1;
    local_res18 = 0;
    for (pLong_5 = (int64_t *)local_58._0_8_; pLong_5 != (int64_t *)local_58._8_8_;
        pLong_5 = pLong_5 + 1) {
      lVal_3 = -1;
      do {
        lVal_3 = lVal_3 + 1;
      } while (*(char *)(*pLong_5 + lVal_3) != '\0');
      local_res18 = local_res18 + 1 + lVal_3;
    }
    lVal_3 = __acrt_allocate_buffer_for_argv(lVal_7,local_res18,1);
    if (lVal_3 == 0) {
      func_0x180695dd0(0);
      for (pLong_5 = pLong_6; pLong_5 != pLong_1; pLong_5 = pLong_5 + 1) {
        func_0x180695dd0(*pLong_5);
      }
      iVal_4 = -1;
LAB_18069b7cb:
      func_0x180695dd0(pLong_6);
    }
    else {
      lVal_7 = lVal_3 + lVal_7 * 8;
      local_res20 = lVal_7;
      if (pLong_6 != pLong_1) {
        local_res10 = lVal_3 - (int64_t)pLong_6;
        pLong_5 = pLong_6;
        do {
          lVal_8 = -1;
          do {
            lVal_9 = lVal_8;
            lVal_8 = lVal_9 + 1;
          } while (*(char *)(*pLong_5 + lVal_8) != '\0');
          iVal_4 = func_0x1806a6bc0();
          if (iVal_4 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(int64_t *)(local_res10 + (int64_t)pLong_5) = lVal_7;
          lVal_7 = lVal_7 + lVal_9 + 2;
          pLong_5 = pLong_5 + 1;
        } while (pLong_5 != pLong_1);
      }
      *param_2 = lVal_3;
      func_0x180695dd0(0);
      for (pLong_5 = pLong_6; pLong_5 != pLong_1; pLong_5 = pLong_5 + 1) {
        func_0x180695dd0(*pLong_5);
      }
      func_0x180695dd0(pLong_6);
      iVal_4 = 0;
    }
  }
  return iVal_4;
}

// func_0x18069b8b8
uint func_0x18069b8b8(short *param_1,int64_t param_2,uint64_t param_3,uint32_t param_4)
{
  int iVal_1;
  DWORD DVar2;
  int64_t lVal_3;
  uint *pU64_4;
  uint uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  bool bFlag_8;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      func_0x180695dd0(*(uint64_t *)(param_2 + 0x10));
      *(uint8_t *)(param_2 + 0x28) = 0;
    }
    *(uint64_t *)(param_2 + 0x10) = 0;
    *(uint64_t *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVal_1 = func_0x180695f20(param_4,0,param_1,0xffffffff,0,0,0,0);
      uVal_7 = (uint64_t)iVal_1;
      if (iVal_1 != 0) {
        uVal_6 = *(uint64_t *)(param_2 + 0x18);
        if (uVal_6 < uVal_7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            func_0x180695dd0(*(uint64_t *)(param_2 + 0x10));
            *(uint8_t *)(param_2 + 0x28) = 0;
          }
          lVal_3 = _malloc_base(uVal_7);
          *(int64_t *)(param_2 + 0x10) = lVal_3;
          uVal_6 = -(uint64_t)(lVal_3 != 0) & uVal_7;
          uVal_5 = ~-(uint)(lVal_3 != 0) & 0xc;
          if (lVal_3 != 0) {
            uVal_5 = 0;
          }
          *(bool *)(param_2 + 0x28) = lVal_3 != 0;
          *(uint64_t *)(param_2 + 0x18) = uVal_6;
          if (uVal_5 != 0) {
            return uVal_5;
          }
        }
        iVal_1 = func_0x180695f20(param_4,0,param_1,0xffffffff,*(uint64_t *)(param_2 + 0x10),
                              (int)uVal_6,0,0);
        if ((int64_t)iVal_1 != 0) {
          *(int64_t *)(param_2 + 0x20) = (int64_t)iVal_1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      func_0x180682424(DVar2);
      pU64_4 = (uint *)func_0x1806823dc();
      return *pU64_4;
    }
    if (*(int64_t *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        func_0x180695dd0(*(uint64_t *)(param_2 + 0x10));
        *(uint8_t *)(param_2 + 0x28) = 0;
      }
      lVal_3 = _malloc_base(1);
      *(int64_t *)(param_2 + 0x10) = lVal_3;
      bFlag_8 = lVal_3 != 0;
      uVal_5 = ~-(uint)(lVal_3 != 0) & 0xc;
      if (bFlag_8) {
        uVal_5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bFlag_8;
      *(uint64_t *)(param_2 + 0x18) = (uint64_t)bFlag_8;
      if (uVal_5 != 0) {
        return uVal_5;
      }
    }
    **(uint8_t **)(param_2 + 0x10) = 0;
  }
  *(uint64_t *)(param_2 + 0x20) = 0;
  return 0;
}

// func_0x18069ba64
uint64_t func_0x18069ba64(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
{
  int iVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_4;
  
  uVal_6 = 0;
  lVal_3 = -1;
  do {
    lVal_4 = lVal_3;
    lVal_3 = lVal_4 + 1;
  } while (*(char *)(param_1 + lVal_3) != '\0');
  uVal_5 = lVal_4 + 2;
  if (~param_3 < uVal_5) {
    return 0xc;
  }
  uVal_2 = _calloc_base(param_3 + 1 + uVal_5);
  if (((param_3 != 0) && (iVal_1 = func_0x1806a6bc0(), iVal_1 != 0)) ||
     (iVal_1 = func_0x1806a6bc0(), iVal_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      lVal_3 = _calloc_base(4,8);
      *param_4 = lVal_3;
      func_0x180695dd0(0);
      lVal_3 = *param_4;
      if (lVal_3 != 0) {
        param_4[1] = lVal_3;
        param_4[2] = lVal_3 + 0x20;
        goto LAB_18069bbba;
      }
    }
    else {
      uVal_5 = param_4[2] - *param_4 >> 3;
      if (uVal_5 < 0x8000000000000000) {
        lVal_3 = _recalloc_base(*param_4,uVal_5 * 2,8);
        if (lVal_3 != 0) {
          *param_4 = lVal_3;
          param_4[1] = lVal_3 + uVal_5 * 8;
          param_4[2] = lVal_3 + uVal_5 * 0x10;
          func_0x180695dd0(0);
          goto LAB_18069bbba;
        }
        func_0x180695dd0(0);
      }
    }
    uVal_6 = 0xc;
    func_0x180695dd0(uVal_2);
  }
  else {
LAB_18069bbba:
    *(uint64_t *)param_4[1] = uVal_2;
    param_4[1] = param_4[1] + 8;
  }
  func_0x180695dd0(0);
  return uVal_6;
}

// func_0x18069bbe8
void func_0x18069bbe8(char *param_1,char *param_2,int64_t *param_3)
{
  byte bFlag_1;
  char *fnPtr_2;
  int iVal_3;
  BOOL BVar4;
  HANDLE hFindFile;
  LPCWSTR pWStr_5;
  char *fnPtr_6;
  int64_t lVal_7;
  int64_t lVal_8;
  byte bFlag_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  LPCWSTR pWStr_12;
  uint8_t auStackY_378 [32];
  uint8_t local_348 [8];
  uint64_t local_340;
  uint64_t local_338;
  uint64_t local_330;
  LPCWSTR local_328;
  uint64_t local_320;
  uint64_t local_318;
  char local_310;
  int64_t local_308;
  int64_t local_300;
  char local_2f0;
  int64_t local_2e8;
  int64_t local_2e0;
  char local_2d0;
  uint64_t local_2c8;
  uint64_t local_2c0;
  char *local_2b8;
  uint64_t local_2b0;
  uint64_t local_2a8;
  char local_2a0;
  uint8_t local_298 [592];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStackY_378;
  if (param_2 != param_1) {
    do {
      if (((byte)(*param_2 - 0x2fU) < 0x2e) &&
         ((0x200000000801U >> ((int64_t)(char)(*param_2 - 0x2fU) & 0x3fU) & 1) != 0)) break;
      param_2 = (char *)func_0x1806a8b5c(param_1);
    } while (param_2 != param_1);
  }
  if ((*param_2 == ':') && (param_2 != param_1 + 1)) {
    func_0x18069ba64(param_1,0,0,param_3);
  }
  else {
    bFlag_9 = *param_2 - 0x2f;
    pWStr_12 = (LPCWSTR)0x0;
    if ((0x2d < bFlag_9) || (bFlag_1 = 1, (0x200000000801U >> ((int64_t)(char)bFlag_9 & 0x3fU) & 1) == 0)
       ) {
      bFlag_1 = 0;
    }
    uVal_11 = -(uint64_t)bFlag_1 & (uint64_t)(param_2 + (1 - (int64_t)param_1));
    local_340 = uVal_11;
    func_0x1806ab010(local_298,0,0x250);
    local_338 = 0;
    local_330 = 0;
    local_328 = (LPCWSTR)0x0;
    local_320 = 0;
    local_318 = 0;
    local_310 = '\0';
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_308,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_300 + 0xc) == 0xfde9) {
      if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
      pWStr_5 = (LPCWSTR)0xfde9;
    }
    else {
      iVal_3 = func_0x180696a9c();
      if (iVal_3 == 0) {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        pWStr_5 = (LPCWSTR)0x1;
      }
      else {
        pWStr_5 = pWStr_12;
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
      }
    }
    iVal_3 = func_0x18067b86c(param_1,&local_338,local_348,pWStr_5);
    pWStr_5 = local_328;
    if (iVal_3 != 0) {
      pWStr_5 = pWStr_12;
    }
    hFindFile = FindFirstFileExW(pWStr_5,FindExInfoStandard,local_298,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      func_0x18069ba64(param_1,0,0,param_3);
      if (local_310 != '\0') {
        func_0x180695dd0(local_328);
      }
    }
    else {
      lVal_8 = param_3[1] - *param_3 >> 3;
      do {
        uVal_10 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = '\0';
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_2e8,(__crt_locale_pointers *)0x0);
        if (*(int *)(local_2e0 + 0xc) == 0xfde9) {
          if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
          uVal_10 = 0xfde9;
        }
        else {
          iVal_3 = func_0x180696a9c();
          if (iVal_3 == 0) {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVal_10 = 1;
          }
          else if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        iVal_3 = func_0x18069b8b8(local_298 + 0x2c,&local_2c8,local_348,uVal_10);
        fnPtr_2 = local_2b8;
        fnPtr_6 = local_2b8;
        if (iVal_3 != 0) {
          fnPtr_6 = (char *)0x0;
        }
        if ((*fnPtr_6 == '.') && ((fnPtr_6[1] == '\0' || ((fnPtr_6[1] == '.' && (fnPtr_6[2] == '\0')))))
           ) {
          if (local_2a0 != '\0') {
            func_0x180695dd0(local_2b8);
          }
        }
        else {
          iVal_3 = func_0x18069ba64(fnPtr_6,param_1,uVal_11,param_3);
          if (iVal_3 != 0) {
            if (local_2a0 != '\0') {
              func_0x180695dd0(fnPtr_2);
            }
            FindClose(hFindFile);
            if (local_310 != '\0') {
              func_0x180695dd0(local_328);
            }
            goto LAB_18069bf25;
          }
          uVal_11 = local_340;
          if (local_2a0 != '\0') {
            func_0x180695dd0(fnPtr_2);
            uVal_11 = local_340;
          }
        }
        BVar4 = FindNextFileW(hFindFile,(LPWIN32_FIND_DATAW)local_298);
      } while (BVar4 != 0);
      lVal_7 = param_3[1] - *param_3 >> 3;
      if (lVal_8 != lVal_7) {
        func_0x1806a8360(*param_3 + lVal_8 * 8,lVal_7 - lVal_8,8,&LAB_18069bf48);
      }
      FindClose(hFindFile);
      if (local_310 != '\0') {
        func_0x180695dd0(local_328);
      }
    }
  }
LAB_18069bf25:
  func_0x180673080(local_48 ^ (uint64_t)auStackY_378);
  return;
}

// func_0x18069bf5c
void func_0x18069bf5c(HMODULE param_1,uint64_t param_2,uint64_t param_3)
{
  DWORD DVar1;
  int iVal_2;
  uint64_t uVal_3;
  uint8_t auStack_2a8 [32];
  uint8_t local_288 [8];
  int64_t local_280;
  int64_t local_278;
  char local_268;
  uint64_t local_260;
  uint64_t local_258;
  uint64_t local_250;
  uint64_t local_248;
  uint64_t local_240;
  uint8_t local_238;
  WCHAR local_228 [264];
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_2a8;
  DVar1 = GetModuleFileNameW(param_1,local_228,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    func_0x180682424(DVar1);
  }
  else {
    local_240 = 0;
    local_238 = 0;
    local_260 = param_2;
    local_258 = param_3 & 0xffffffff;
    local_250 = param_2;
    local_248 = param_3 & 0xffffffff;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_280,(__crt_locale_pointers *)0x0);
    uVal_3 = 0xfde9;
    if (*(int *)(local_278 + 0xc) == 0xfde9) {
      if (local_268 != '\0') {
        *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVal_2 = func_0x180696a9c();
      if (iVal_2 == 0) {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVal_3 = 1;
      }
      else {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVal_3 = 0;
      }
    }
    func_0x18067ba0c(local_228,&local_260,local_288,uVal_3);
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_2a8);
  return;
}

// func_0x18069c080
/* WARNING: Removing unreachable block (ram,0x00018069c0cb) */
/* WARNING: Removing unreachable block (ram,0x00018069c0cb) */
bool func_0x18069c080(uint param_1)
{
  byte bFlag_1;
  int64_t local_28 [2];
  int64_t local_18;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(__crt_locale_pointers *)0x0);
  bFlag_1 = *(byte *)(((uint64_t)param_1 & 0xff) + 0x19 + local_18);
  if (local_10 != '\0') {
    *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
  }
  return (bFlag_1 & 4) != 0;
}

// _recalloc_base
/* Library Function - Single Match
    _recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
int64_t _recalloc_base(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint32_t *pU64_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  uVal_3 = param_2;
  if ((param_2 == 0) ||
     (uVal_3 = 0xffffffffffffffe0 % param_2, param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == 0) {
      uVal_3 = 0;
    }
    else {
      uVal_3 = _msize_base(param_1,uVal_3);
    }
    param_2 = param_2 * param_3;
    lVal_2 = _realloc_base(param_1,param_2);
    if ((lVal_2 != 0) && (uVal_3 < param_2)) {
      func_0x1806ab010(lVal_2 + uVal_3,0,param_2 - uVal_3);
    }
  }
  else {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0xc;
    lVal_2 = 0;
  }
  return lVal_2;
}

// wcsncmp
/* Library Function - Single Match
    wcsncmp
   
   Library: Visual Studio 2005 Release */
/* Library Function - Single Match
    wcsncmp
   
   Library: Visual Studio 2005 Release */
int __cdecl wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)
{
  int64_t lVal_1;
  
  if (_MaxCount != 0) {
    lVal_1 = _MaxCount - 1;
    for (; ((lVal_1 != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2)); _Str1 = _Str1 + 1) {
      _Str2 = _Str2 + 1;
      lVal_1 = lVal_1 + -1;
    }
    return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
  }
  return 0;
}

// func_0x18069c200
/* WARNING: Removing unreachable block (ram,0x00018069c289) */
/* WARNING: Removing unreachable block (ram,0x00018069c289) */
uint64_t func_0x18069c200(ushort *param_1,ushort *param_2,int64_t param_3)
{
  ushort uVal_1;
  ushort uVal_2;
  uint uVal_3;
  uint64_t uVal_4;
  uint32_t *pU64_5;
  int64_t lVal_6;
  uint uVal_7;
  int64_t local_38;
  int64_t local_30;
  uint64_t uStack_28;
  char local_20;
  
  if (DAT_1808429bc != 0) {
    if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
      if (param_3 == 0) {
        return 0;
      }
      local_20 = '\0';
      if (DAT_1808429bc == 0) {
        local_30 = CONCAT44(PTR_PTR_DAT_18083d808._4_4_,PTR_PTR_DAT_18083d808._0_4_);
        uStack_28 = CONCAT44(PTR_DAT_18083d810._4_4_,PTR_DAT_18083d810._0_4_);
      }
      else {
        local_38 = __vcrt_getptd();
        local_30 = *(int64_t *)(local_38 + 0x90);
        uStack_28 = *(uint64_t *)(local_38 + 0x88);
        func_0x180696634(local_38,&local_30);
        func_0x180696668(local_38,&uStack_28);
        if ((*(uint *)(local_38 + 0x3a8) & 2) == 0) {
          *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) | 2;
          local_20 = '\x01';
        }
      }
      lVal_6 = local_30;
      if (*(int64_t *)(local_30 + 0x138) == 0) {
        uVal_3 = func_0x18069c410(param_1,param_2,param_3);
      }
      else {
        do {
          uVal_1 = *param_1;
          param_1 = param_1 + 1;
          if (uVal_1 < 0x100) {
            uVal_4 = (uint64_t)(byte)uVal_1;
            if (((&DAT_1806e4562)[uVal_4 * 2] & 1) != 0) {
              uVal_4 = (uint64_t)*(byte *)(uVal_4 + *(int64_t *)(lVal_6 + 0x110));
            }
            uVal_1 = (ushort)uVal_4;
          }
          else {
            uVal_1 = func_0x1806a692c(uVal_1,&local_30);
            lVal_6 = local_30;
          }
          uVal_2 = *param_2;
          param_2 = param_2 + 1;
          if (uVal_2 < 0x100) {
            uVal_4 = (uint64_t)(byte)uVal_2;
            if (((&DAT_1806e4562)[uVal_4 * 2] & 1) != 0) {
              uVal_4 = (uint64_t)*(byte *)(uVal_4 + *(int64_t *)(lVal_6 + 0x110));
            }
            uVal_2 = (ushort)uVal_4;
          }
          else {
            uVal_2 = func_0x1806a692c(uVal_2,&local_30);
            lVal_6 = local_30;
          }
          uVal_3 = (uint)uVal_1 - (uint)uVal_2;
        } while (((uVal_3 == 0) && (uVal_1 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
      }
      if (local_20 != '\0') {
        *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
      }
      return (uint64_t)uVal_3;
    }
    pU64_5 = (uint32_t *)func_0x1806823dc();
    *pU64_5 = 0x16;
    func_0x180684970();
    return 0x7fffffff;
  }
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    if (param_3 == 0) {
      return 0;
    }
    do {
      uVal_1 = *param_1;
      uVal_3 = (uint)uVal_1;
      param_1 = param_1 + 1;
      uVal_2 = *param_2;
      param_2 = param_2 + 1;
      uVal_7 = (uint)uVal_2;
      if ((uint)uVal_1 != (uint)uVal_2) {
        uVal_3 = uVal_1 + 0x20;
        if (0x19 < uVal_1 - 0x41) {
          uVal_3 = (uint)uVal_1;
        }
        uVal_7 = uVal_2 + 0x20;
        if (0x19 < uVal_2 - 0x41) {
          uVal_7 = (uint)uVal_2;
        }
      }
    } while (((uVal_3 - uVal_7 == 0) && (uVal_3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
    return (uint64_t)(uVal_3 - uVal_7);
  }
  uVal_4 = func_0x180696a00();
  return uVal_4;
}

// func_0x18069c410
int func_0x18069c410(ushort *param_1,ushort *param_2,int64_t param_3)
{
  ushort uVal_1;
  ushort uVal_2;
  uint uVal_3;
  uint uVal_4;
  
  if (param_3 != 0) {
    do {
      uVal_1 = *param_1;
      uVal_3 = (uint)uVal_1;
      param_1 = param_1 + 1;
      uVal_2 = *param_2;
      param_2 = param_2 + 1;
      uVal_4 = (uint)uVal_2;
      if ((uint)uVal_1 != (uint)uVal_2) {
        uVal_3 = uVal_1 + 0x20;
        if (0x19 < uVal_1 - 0x41) {
          uVal_3 = (uint)uVal_1;
        }
        uVal_4 = uVal_2 + 0x20;
        if (0x19 < uVal_2 - 0x41) {
          uVal_4 = (uint)uVal_2;
        }
      }
    } while (((uVal_3 - uVal_4 == 0) && (uVal_3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
    return uVal_3 - uVal_4;
  }
  return 0;
}

// func_0x18069c480
/* WARNING: Removing unreachable block (ram,0x00018069c584) */
/* WARNING: Removing unreachable block (ram,0x00018069c584) */
int func_0x18069c480(byte *param_1,byte *param_2,uint64_t param_3)
{
  byte bFlag_1;
  byte bFlag_2;
  int iVal_3;
  uint32_t *pU64_4;
  uint uVal_5;
  uint uVal_6;
  int64_t local_28;
  int64_t local_20;
  uint64_t uStack_18;
  char local_10;
  
  if (DAT_1808429bc == 0) {
    if (((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) && (param_3 < 0x80000000)) {
      if (param_3 == 0) {
        return 0;
      }
      while( true ) {
        bFlag_1 = *param_1;
        uVal_5 = (uint)bFlag_1;
        param_1 = param_1 + 1;
        bFlag_2 = *param_2;
        uVal_6 = (uint)bFlag_2;
        param_2 = param_2 + 1;
        if ((uint)bFlag_1 != (uint)bFlag_2) {
          uVal_5 = bFlag_1 + 0x20;
          if (0x19 < bFlag_1 - 0x41) {
            uVal_5 = (uint)bFlag_1;
          }
          if (bFlag_2 - 0x41 < 0x1a) {
            uVal_6 = bFlag_2 + 0x20;
          }
        }
        iVal_3 = uVal_5 - uVal_6;
        if ((uVal_5 - uVal_6 != 0) || (uVal_5 == 0)) break;
        param_3 = param_3 - 1;
        if (param_3 == 0) {
          return iVal_3;
        }
      }
      return iVal_3;
    }
    if (((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (0x7fffffff < param_3)) {
      pU64_4 = (uint32_t *)func_0x1806823dc();
      *pU64_4 = 0x16;
      func_0x180684970();
    }
    return 0x7fffffff;
  }
  if (((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (0x7fffffff < param_3)) {
    pU64_4 = (uint32_t *)func_0x1806823dc();
    *pU64_4 = 0x16;
    func_0x180684970();
    return 0x7fffffff;
  }
  if (param_3 == 0) {
    return 0;
  }
  local_10 = '\0';
  if (DAT_1808429bc == 0) {
    local_20 = CONCAT44(PTR_PTR_DAT_18083d808._4_4_,PTR_PTR_DAT_18083d808._0_4_);
    local_10 = '\0';
  }
  else {
    local_28 = __vcrt_getptd();
    local_20 = *(int64_t *)(local_28 + 0x90);
    uStack_18 = *(uint64_t *)(local_28 + 0x88);
    func_0x180696634(local_28,&local_20);
    func_0x180696668(local_28,&uStack_18);
    if ((*(uint *)(local_28 + 0x3a8) & 2) == 0) {
      local_10 = '\x01';
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) | 2;
    }
  }
  do {
    bFlag_1 = *param_1;
    param_1 = param_1 + 1;
    bFlag_1 = *(byte *)((uint64_t)bFlag_1 + *(int64_t *)(local_20 + 0x110));
    iVal_3 = (uint)bFlag_1 - (uint)*(byte *)((uint64_t)*param_2 + *(int64_t *)(local_20 + 0x110));
    if ((iVal_3 != 0) || (bFlag_1 == 0)) break;
    param_3 = param_3 - 1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return iVal_3;
}

// func_0x18069c6a4
uint64_t * func_0x18069c6a4(uint64_t *param_1)
{
  uint64_t *pU64_1;
  uint8_t local_res8 [32];
  
  *param_1 = 0;
  FID_conflict___acrt_lock(8);
  pU64_1 = (uint64_t *)func_0x18069c718(local_res8);
  pU64_1 = (uint64_t *)*pU64_1;
  *param_1 = pU64_1;
  if (pU64_1 != (uint64_t *)0x0) {
    *(uint32_t *)(pU64_1 + 2) = 0;
    pU64_1[5] = 0;
    *pU64_1 = 0;
    pU64_1[1] = 0;
    *(uint32_t *)(pU64_1 + 3) = 0xffffffff;
  }
  FID_conflict___acrt_lock(8);
  return param_1;
}

// __acrt_stdio_free_stream
/* Library Function - Single Match
    void __cdecl __acrt_stdio_free_stream(class __crt_stdio_stream)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    void __cdecl __acrt_stdio_free_stream(class __crt_stdio_stream)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
uint32_t __cdecl __acrt_stdio_free_stream(uint64_t *param_1)
{
  uint32_t uVal_1;
  
  *(uint32_t *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(uint32_t *)(param_1 + 2) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  uVal_1 = *(uint32_t *)((int64_t)param_1 + 0x14);
  *(uint32_t *)((int64_t)param_1 + 0x14) = 0;
  UNLOCK();
  return uVal_1;
}

// func_0x18069c718
int64_t * func_0x18069c718(int64_t *param_1)
{
  int64_t *pLong_1;
  uint uVal_2;
  uint uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  bool bFlag_6;
  
  pLong_5 = (int64_t *)(DAT_1808425d0 + 0x18);
  pLong_1 = pLong_5 + (int64_t)DAT_1808425c8 + -3;
  do {
    if (pLong_5 == pLong_1) {
LAB_18069c794:
      *param_1 = 0;
      return param_1;
    }
    lVal_4 = *pLong_5;
    if (lVal_4 == 0) {
      lVal_4 = _calloc_base(1);
      *pLong_5 = lVal_4;
      func_0x180695dd0(0);
      if (*pLong_5 != 0) {
        *(uint32_t *)(*pLong_5 + 0x18) = 0xffffffff;
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(*pLong_5 + 0x30),4000,0);
        lVal_4 = *pLong_5;
        LOCK();
        *(uint *)(lVal_4 + 0x14) = *(uint *)(lVal_4 + 0x14) | 0x2000;
        UNLOCK();
        func_0x18067e324(lVal_4);
LAB_18069c7b0:
        *param_1 = lVal_4;
        return param_1;
      }
      goto LAB_18069c794;
    }
    if ((*(uint *)(lVal_4 + 0x14) >> 0xd & 1) == 0) {
      func_0x18067e324(lVal_4);
      uVal_3 = *(uint *)(lVal_4 + 0x14);
      do {
        LOCK();
        uVal_2 = *(uint *)(lVal_4 + 0x14);
        bFlag_6 = uVal_3 == uVal_2;
        if (bFlag_6) {
          *(uint *)(lVal_4 + 0x14) = uVal_3 | 0x2000;
          uVal_2 = uVal_3;
        }
        uVal_3 = uVal_2;
        UNLOCK();
      } while (!bFlag_6);
      if ((~(byte)(uVal_3 >> 0xd) & 1) != 0) goto LAB_18069c7b0;
      func_0x18067e330(lVal_4);
    }
    pLong_5 = pLong_5 + 1;
  } while( true );
}

// func_0x18069c804
uint64_t func_0x18069c804(void)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t local_48 [2];
  uint8_t local_38;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  char local_20;
  uint32_t local_1c;
  char local_18;
  uint32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1808429bc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_DAT_18083d808._0_4_;
    uStack_2c = PTR_PTR_DAT_18083d808._4_4_;
    uStack_28 = PTR_DAT_18083d810._0_4_;
    uStack_24 = PTR_DAT_18083d810._4_4_;
  }
  uVal_1 = func_0x18069c94c();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVal_2 = func_0x18067e900(local_48);
    *(uint32_t *)(lVal_2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVal_2 = func_0x18067e900(local_48);
    *(uint32_t *)(lVal_2 + 0x24) = local_14;
  }
  return uVal_1;
}

// func_0x18069c8a0
uint64_t func_0x18069c8a0(void)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t local_48 [2];
  uint8_t local_38;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  char local_20;
  uint32_t local_1c;
  char local_18;
  uint32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1808429bc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_DAT_18083d808._0_4_;
    uStack_2c = PTR_PTR_DAT_18083d808._4_4_;
    uStack_28 = PTR_DAT_18083d810._0_4_;
    uStack_24 = PTR_DAT_18083d810._4_4_;
  }
  uVal_1 = func_0x18069ca6c();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVal_2 = func_0x18067e900(local_48);
    *(uint32_t *)(lVal_2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVal_2 = func_0x18067e900(local_48);
    *(uint32_t *)(lVal_2 + 0x24) = local_14;
  }
  return uVal_1;
}

// thunk_FUN_18069ca6c
int64_t thunk_FUN_18069ca6c(uint param_1,LARGE_INTEGER param_2,DWORD param_3,int64_t param_4)
{
  byte *pU8_1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER aLStack_18 [2];
  
  hFile = (HANDLE)func_0x180683c70(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 9;
  }
  else {
    aLStack_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,aLStack_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      func_0x18068251c(DVar3,param_4);
    }
    else if (aLStack_18[0].QuadPart != -1) {
      pU8_1 = (byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                       (uint64_t)(param_1 & 0x3f) * 0x48);
      *pU8_1 = *pU8_1 & 0xfd;
      return (int64_t)aLStack_18[0].s;
    }
  }
  return -1;
}

// thunk_FUN_18069c94c
uint64_t thunk_FUN_18069c94c(uint param_1,uint64_t param_2,uint32_t param_3,int64_t param_4)
{
  bool bFlag_1;
  uint64_t uVal_2;
  
  if (param_1 == 0xfffffffe) {
    *(uint8_t *)(param_4 + 0x38) = 1;
    *(uint32_t *)(param_4 + 0x34) = 0;
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_180843080 <= param_1)) {
      bFlag_1 = false;
    }
    else {
      bFlag_1 = true;
    }
    if (bFlag_1) {
      if ((*(byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                    (uint64_t)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        uVal_2 = 0xffffffffffffffff;
        if ((*(byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                      (uint64_t)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(uint8_t *)(param_4 + 0x30) = 1;
          *(uint32_t *)(param_4 + 0x2c) = 9;
          *(uint8_t *)(param_4 + 0x38) = 1;
          *(uint32_t *)(param_4 + 0x34) = 0;
        }
        else {
          uVal_2 = func_0x18069ca6c(param_1,param_2,param_3,param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVal_2;
      }
    }
    *(uint8_t *)(param_4 + 0x38) = 1;
    *(uint32_t *)(param_4 + 0x34) = 0;
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 9;
    func_0x180684b50(0,0,0,0,0,param_4);
  }
  return 0xffffffffffffffff;
}

// func_0x18069c94c
uint64_t func_0x18069c94c(uint param_1,uint64_t param_2,uint32_t param_3,int64_t param_4)
{
  bool bFlag_1;
  uint64_t uVal_2;
  
  if (param_1 == 0xfffffffe) {
    *(uint8_t *)(param_4 + 0x38) = 1;
    *(uint32_t *)(param_4 + 0x34) = 0;
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_180843080 <= param_1)) {
      bFlag_1 = false;
    }
    else {
      bFlag_1 = true;
    }
    if (bFlag_1) {
      if ((*(byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                    (uint64_t)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        uVal_2 = 0xffffffffffffffff;
        if ((*(byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                      (uint64_t)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(uint8_t *)(param_4 + 0x30) = 1;
          *(uint32_t *)(param_4 + 0x2c) = 9;
          *(uint8_t *)(param_4 + 0x38) = 1;
          *(uint32_t *)(param_4 + 0x34) = 0;
        }
        else {
          uVal_2 = func_0x18069ca6c(param_1,param_2,param_3,param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVal_2;
      }
    }
    *(uint8_t *)(param_4 + 0x38) = 1;
    *(uint32_t *)(param_4 + 0x34) = 0;
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 9;
    func_0x180684b50(0,0,0,0,0,param_4);
  }
  return 0xffffffffffffffff;
}

// func_0x18069ca6c
int64_t func_0x18069ca6c(uint param_1,LARGE_INTEGER param_2,DWORD param_3,int64_t param_4)
{
  byte *pU8_1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER local_18 [2];
  
  hFile = (HANDLE)func_0x180683c70(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 9;
  }
  else {
    local_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,local_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      func_0x18068251c(DVar3,param_4);
    }
    else if (local_18[0].QuadPart != -1) {
      pU8_1 = (byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                       (uint64_t)(param_1 & 0x3f) * 0x48);
      *pU8_1 = *pU8_1 & 0xfd;
      return (int64_t)local_18[0].s;
    }
  }
  return -1;
}

// func_0x18069cb1c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18069cb1c(char *param_1,uint64_t param_2,int param_3,uint64_t *param_4)
{
  uint64_t uVal_1;
  errno_t eVar2;
  uint64_t *pU64_3;
  uint64_t *pU64_4;
  int local_res18 [2];
  int local_28;
  uint uStack_24;
  uint8_t local_18 [16];
  
  pU64_3 = (uint64_t *)__acrt_stdio_parse_mode<char>(local_18);
  uVal_1 = *pU64_3;
  pU64_4 = (uint64_t *)0x0;
  if (*(char *)(pU64_3 + 1) != '\0') {
    local_28 = (int)uVal_1;
    local_res18[0] = 0;
    eVar2 = FID_conflict__sopen_s(local_res18,param_1,local_28,param_3,0x180);
    if (eVar2 == 0) {
      _DAT_1808425d8 = _DAT_1808425d8 + 1;
      uStack_24 = (uint)((uint64_t)uVal_1 >> 0x20);
      LOCK();
      *(uint *)((int64_t)param_4 + 0x14) = *(uint *)((int64_t)param_4 + 0x14) | uStack_24;
      UNLOCK();
      *(uint32_t *)(param_4 + 2) = 0;
      param_4[5] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      *(int *)(param_4 + 3) = local_res18[0];
      pU64_4 = param_4;
    }
  }
  return pU64_4;
}

// func_0x18069cbb8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18069cbb8(char *param_1,uint64_t param_2,int param_3,uint64_t *param_4)
{
  uint64_t uVal_1;
  errno_t eVar2;
  uint64_t *pU64_3;
  uint64_t *pU64_4;
  int local_res18 [2];
  int local_28;
  uint uStack_24;
  uint8_t local_18 [16];
  
  pU64_3 = (uint64_t *)__acrt_stdio_parse_mode<wchar_t>(local_18);
  uVal_1 = *pU64_3;
  pU64_4 = (uint64_t *)0x0;
  if (*(char *)(pU64_3 + 1) != '\0') {
    local_28 = (int)uVal_1;
    local_res18[0] = 0;
    eVar2 = FID_conflict__sopen_s(local_res18,param_1,local_28,param_3,0x180);
    if (eVar2 == 0) {
      _DAT_1808425d8 = _DAT_1808425d8 + 1;
      uStack_24 = (uint)((uint64_t)uVal_1 >> 0x20);
      LOCK();
      *(uint *)((int64_t)param_4 + 0x14) = *(uint *)((int64_t)param_4 + 0x14) | uStack_24;
      UNLOCK();
      *(uint32_t *)(param_4 + 2) = 0;
      param_4[5] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      *(int *)(param_4 + 3) = local_res18[0];
      pU64_4 = param_4;
    }
  }
  return pU64_4;
}

// func_0x18069cc54
uint32_t func_0x18069cc54(uint param_1,uint64_t param_2,uint param_3)
{
  bool bFlag_1;
  uint32_t uVal_2;
  uint32_t *pU64_3;
  
  if (param_1 == 0xfffffffe) {
    pU64_3 = (uint32_t *)func_0x180682400();
    *pU64_3 = 0;
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 9;
    return 0xffffffff;
  }
  if (((int)param_1 < 0) || (DAT_180843080 <= param_1)) {
    bFlag_1 = false;
  }
  else {
    bFlag_1 = true;
  }
  if (bFlag_1) {
    if ((*(byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                  (uint64_t)(param_1 & 0x3f) * 0x48) & 1) != 0) {
      if (param_3 < 0x80000000) {
        __acrt_lowio_lock_fh(param_1);
        uVal_2 = 0xffffffff;
        if ((*(byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                      (uint64_t)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          pU64_3 = (uint32_t *)func_0x1806823dc();
          *pU64_3 = 9;
          pU64_3 = (uint32_t *)func_0x180682400();
          *pU64_3 = 0;
        }
        else {
          uVal_2 = func_0x18069cd74(param_1,param_2,param_3);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVal_2;
      }
      pU64_3 = (uint32_t *)func_0x180682400();
      *pU64_3 = 0;
      pU64_3 = (uint32_t *)func_0x1806823dc();
      *pU64_3 = 0x16;
      goto LAB_18069ccda;
    }
  }
  pU64_3 = (uint32_t *)func_0x180682400();
  *pU64_3 = 0;
  pU64_3 = (uint32_t *)func_0x1806823dc();
  *pU64_3 = 9;
LAB_18069ccda:
  func_0x180684970();
  return 0xffffffff;
}

// func_0x18069cd74
int func_0x18069cd74(uint param_1,short *param_2,uint64_t param_3)
{
  short *pSize_1;
  byte *pU8_2;
  char ch_3;
  char ch_4;
  uint uVal_5;
  int iVal_6;
  BOOL BVar7;
  DWORD DVar8;
  uint32_t *pU64_9;
  uint64_t uVal_10;
  short *pSize_11;
  uint64_t uVal_12;
  short *pSize_13;
  short sz_14;
  uint64_t uVal_15;
  int iVal_16;
  int64_t lVal_17;
  uint uVal_18;
  short *pSize_19;
  uint local_res20 [2];
  DWORD local_68 [2];
  HANDLE local_60;
  uint64_t local_58;
  uint64_t local_50;
  short *local_48;
  
  if (param_1 == 0xfffffffe) {
    pU64_9 = (uint32_t *)func_0x180682400();
    *pU64_9 = 0;
    pU64_9 = (uint32_t *)func_0x1806823dc();
    *pU64_9 = 9;
    return -1;
  }
  pSize_11 = (short *)0x0;
  iVal_16 = 0;
  if ((-1 < (int)param_1) && (param_1 < DAT_180843080)) {
    uVal_10 = (uint64_t)(param_1 & 0x3f);
    local_50 = 1;
    local_58 = (uint64_t)(int64_t)(int)param_1 >> 6;
    lVal_17 = (&DAT_180842c80)[local_58];
    if ((*(byte *)(lVal_17 + 0x38 + uVal_10 * 0x48) & 1) != 0) {
      uVal_18 = (uint)param_3;
      if (uVal_18 < 0x80000000) {
        if ((uVal_18 == 0) || ((*(byte *)(lVal_17 + 0x38 + uVal_10 * 0x48) & 2) != 0)) {
          return 0;
        }
        if (param_2 != (short *)0x0) {
          local_60 = *(HANDLE *)(lVal_17 + 0x28 + uVal_10 * 0x48);
          ch_4 = *(char *)(lVal_17 + 0x39 + uVal_10 * 0x48);
          if (ch_4 == '\x01') {
            if ((~(byte)param_3 & 1) == 0) goto LAB_18069ce6e;
            uVal_15 = param_3 >> 1 & 0x7fffffff;
            if ((uint)uVal_15 < 4) {
              uVal_15 = 4;
            }
            pSize_11 = (short *)_malloc_base(uVal_15);
            func_0x180695dd0(0);
            func_0x180695dd0(0);
            if (pSize_11 != (short *)0x0) {
              uVal_12 = func_0x18069c8a0(param_1,0,1);
              *(uint64_t *)((&DAT_180842c80)[local_58] + 0x30 + uVal_10 * 0x48) = uVal_12;
              local_48 = pSize_11;
              goto LAB_18069cf10;
            }
            pU64_9 = (uint32_t *)func_0x1806823dc();
            *pU64_9 = 0xc;
            pU64_9 = (uint32_t *)func_0x180682400();
            *pU64_9 = 8;
          }
          else if ((ch_4 == '\x02') && ((~(byte)param_3 & 1) == 0)) {
LAB_18069ce6e:
            pU64_9 = (uint32_t *)func_0x180682400();
            *pU64_9 = 0;
            pU64_9 = (uint32_t *)func_0x1806823dc();
            *pU64_9 = 0x16;
            func_0x180684970();
          }
          else {
            uVal_15 = param_3 & 0xffffffff;
            local_48 = param_2;
LAB_18069cf10:
            pSize_19 = local_48;
            if ((((*(byte *)((&DAT_180842c80)[local_58] + 0x38 + uVal_10 * 0x48) & 0x48) != 0) &&
                (ch_3 = *(char *)((&DAT_180842c80)[local_58] + 0x3a + uVal_10 * 0x48), ch_3 != '\n'
                )) && (iVal_6 = (int)uVal_15, iVal_6 != 0)) {
              *(char *)local_48 = ch_3;
              uVal_15 = (uint64_t)(iVal_6 - 1U);
              pSize_19 = (short *)((int64_t)local_48 + 1);
              iVal_16 = 1;
              *(uint8_t *)((&DAT_180842c80)[local_58] + 0x3a + uVal_10 * 0x48) = 10;
              if (((ch_4 != '\0') &&
                  (ch_3 = *(char *)((&DAT_180842c80)[local_58] + 0x3b + uVal_10 * 0x48),
                  ch_3 != '\n')) && (iVal_6 - 1U != 0)) {
                *(char *)pSize_19 = ch_3;
                pSize_19 = local_48 + 1;
                uVal_15 = (uint64_t)(iVal_6 - 2U);
                *(uint8_t *)((&DAT_180842c80)[local_58] + 0x3b + uVal_10 * 0x48) = 10;
                iVal_16 = 2;
                if (((ch_4 == '\x01') &&
                    (ch_3 = *(char *)((&DAT_180842c80)[local_58] + 0x3c + uVal_10 * 0x48),
                    ch_3 != '\n')) && (iVal_16 = 2, iVal_6 - 2U != 0)) {
                  *(char *)pSize_19 = ch_3;
                  iVal_16 = 3;
                  pSize_19 = (short *)((int64_t)local_48 + 3);
                  uVal_15 = (uint64_t)(iVal_6 - 3);
                  *(uint8_t *)((&DAT_180842c80)[local_58] + 0x3c + uVal_10 * 0x48) = 10;
                }
              }
            }
            local_68[0] = 0;
            iVal_6 = func_0x180684d5c(param_1);
            if (((iVal_6 == 0) || (-1 < *(char *)((&DAT_180842c80)[local_58] + 0x38 + uVal_10 * 0x48))
                ) || (BVar7 = GetConsoleMode(local_60,local_68), BVar7 == 0)) {
              local_50 = local_50 & 0xffffffffffffff00;
LAB_18069d046:
              local_res20[0] = 0;
              BVar7 = ReadFile(local_60,pSize_19,(DWORD)uVal_15,local_res20,(LPOVERLAPPED)0x0);
              if ((BVar7 != 0) && (uVal_5 = local_res20[0], local_res20[0] <= uVal_18)) {
LAB_18069d088:
                iVal_16 = iVal_16 + uVal_5;
                if (*(char *)((&DAT_180842c80)[local_58] + 0x38 + uVal_10 * 0x48) < '\0') {
                  if (ch_4 == '\x02') {
                    if ((char)local_50 == '\0') {
                      iVal_16 = func_0x18069d504(param_1,local_48);
                    }
                    else {
                      pSize_1 = (short *)((int64_t)local_48 +
                                        ((int64_t)iVal_16 & 0xfffffffffffffffeU));
                      pSize_19 = local_48;
                      for (pSize_13 = local_48; pSize_13 < pSize_1;
                          pSize_13 = (short *)((int64_t)pSize_13 + lVal_17)) {
                        sz_14 = *pSize_13;
                        if (sz_14 == 0x1a) {
                          pU8_2 = (byte *)((&DAT_180842c80)[local_58] + 0x38 + uVal_10 * 0x48);
                          *pU8_2 = *pU8_2 | 2;
                          break;
                        }
                        if (((sz_14 == 0xd) && (pSize_13 + 1 < pSize_1)) && (pSize_13[1] == 10)) {
                          sz_14 = 10;
                          lVal_17 = 4;
                        }
                        else {
                          lVal_17 = 2;
                        }
                        *pSize_19 = sz_14;
                        pSize_19 = pSize_19 + 1;
                      }
                      iVal_16 = (int)((int64_t)pSize_19 - (int64_t)local_48 >> 1) * 2;
                    }
                  }
                  else {
                    iVal_16 = func_0x18069d1d4(param_1,pSize_19,(int64_t)iVal_16,param_2,
                                           (param_3 & 0xffffffff) >> 1);
                  }
                }
                goto LAB_18069d026;
              }
              DVar8 = GetLastError();
              if (DVar8 != 5) {
                if (DVar8 == 0x6d) {
                  iVal_16 = 0;
                  goto LAB_18069d026;
                }
                goto LAB_18069d01c;
              }
              pU64_9 = (uint32_t *)func_0x1806823dc();
              *pU64_9 = 9;
              pU64_9 = (uint32_t *)func_0x180682400();
              *pU64_9 = 5;
            }
            else {
              if (ch_4 != '\x02') goto LAB_18069d046;
              local_res20[0] = 0;
              BVar7 = ReadConsoleW(local_60,pSize_19,(DWORD)(uVal_15 >> 1),local_res20,
                                   (PCONSOLE_READCONSOLE_CONTROL)0x0);
              if (BVar7 != 0) {
                uVal_5 = local_res20[0] * 2;
                goto LAB_18069d088;
              }
              DVar8 = GetLastError();
LAB_18069d01c:
              func_0x180682424(DVar8);
            }
          }
          iVal_16 = -1;
LAB_18069d026:
          func_0x180695dd0(pSize_11);
          return iVal_16;
        }
      }
      pU64_9 = (uint32_t *)func_0x180682400();
      *pU64_9 = 0;
      pU64_9 = (uint32_t *)func_0x1806823dc();
      *pU64_9 = 0x16;
      goto LAB_18069d1b3;
    }
  }
  pU64_9 = (uint32_t *)func_0x180682400();
  *pU64_9 = 0;
  pU64_9 = (uint32_t *)func_0x1806823dc();
  *pU64_9 = 9;
LAB_18069d1b3:
  func_0x180684970();
  return -1;
}

// func_0x18069d1d4
int func_0x18069d1d4(uint param_1,byte *param_2,int64_t param_3,uint64_t param_4,uint32_t param_5)
{
  byte bFlag_1;
  int64_t lVal_2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD DVar4;
  byte *pU8_5;
  uint32_t *pU64_6;
  byte *pU8_7;
  int iVal_8;
  int iVal_9;
  byte *pU8_10;
  byte *pU8_11;
  uint uVal_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  char local_res8 [8];
  DWORD local_res10 [2];
  
  lVal_14 = (int64_t)(int)param_1 >> 6;
  uVal_13 = (uint64_t)(param_1 & 0x3f);
  lVal_2 = (&DAT_180842c80)[lVal_14];
  hFile = *(HANDLE *)(lVal_2 + 0x28 + uVal_13 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pU8_7 = (byte *)(lVal_2 + 0x38 + uVal_13 * 0x48);
    *pU8_7 = *pU8_7 & 0xfb;
  }
  else {
    pU8_7 = (byte *)(lVal_2 + 0x38 + uVal_13 * 0x48);
    *pU8_7 = *pU8_7 | 4;
  }
  pU8_7 = param_2 + param_3;
  pU8_11 = param_2;
  pU8_10 = param_2;
  if (param_2 < pU8_7) {
    do {
      bFlag_1 = *pU8_11;
      if (bFlag_1 == 0x1a) {
        bFlag_1 = *(byte *)((&DAT_180842c80)[lVal_14] + 0x38 + uVal_13 * 0x48);
        if ((bFlag_1 & 0x40) != 0) {
          *pU8_10 = 0x1a;
          goto LAB_18069d33d;
        }
        *(byte *)((&DAT_180842c80)[lVal_14] + 0x38 + uVal_13 * 0x48) = bFlag_1 | 2;
        break;
      }
      pU8_5 = pU8_11 + 1;
      if (bFlag_1 == 0xd) {
        if (pU8_7 <= pU8_5) {
          local_res8[0] = '\0';
          local_res10[0] = 0;
          BVar3 = ReadFile(hFile,local_res8,1,local_res10,(LPOVERLAPPED)0x0);
          if ((BVar3 == 0) || (local_res10[0] == 0)) {
            *pU8_10 = 0xd;
          }
          else if ((*(byte *)((&DAT_180842c80)[lVal_14] + 0x38 + uVal_13 * 0x48) & 0x48) == 0) {
            if ((local_res8[0] == '\n') && (pU8_10 == param_2)) goto LAB_18069d2ce;
            func_0x18069c8a0(param_1,0xffffffffffffffff,1);
            if (local_res8[0] == '\n') break;
            *pU8_10 = 0xd;
          }
          else if (local_res8[0] == '\n') {
LAB_18069d2ce:
            *pU8_10 = 10;
          }
          else {
            *pU8_10 = 0xd;
            *(char *)((&DAT_180842c80)[lVal_14] + 0x3a + uVal_13 * 0x48) = local_res8[0];
          }
LAB_18069d33d:
          pU8_10 = pU8_10 + 1;
          break;
        }
        if (*pU8_5 != 10) goto LAB_18069d26d;
        pU8_5 = pU8_11 + 2;
        *pU8_10 = 10;
      }
      else {
LAB_18069d26d:
        *pU8_10 = bFlag_1;
      }
      pU8_10 = pU8_10 + 1;
      pU8_11 = pU8_5;
    } while (pU8_5 < pU8_7);
  }
  iVal_8 = (int)pU8_10 - (int)param_2;
  if (iVal_8 == 0) {
    return 0;
  }
  if (*(char *)((&DAT_180842c80)[lVal_14] + 0x39 + uVal_13 * 0x48) != '\0') {
    pU8_7 = param_2 + iVal_8;
    if ((char)pU8_7[-1] < '\0') {
      uVal_13 = 1;
      for (pU8_7 = pU8_7 + -1;
          ((uVal_12 = (uint)uVal_13, (&DAT_18083df70)[*pU8_7] == '\0' && (uVal_12 < 5)) &&
          (param_2 <= pU8_7)); pU8_7 = pU8_7 + -1) {
        uVal_13 = (uint64_t)(uVal_12 + 1);
      }
      if ((&DAT_18083df70)[*pU8_7] == '\0') {
        pU64_6 = (uint32_t *)func_0x1806823dc();
        *pU64_6 = 0x2a;
        return -1;
      }
      if ((int)(char)(&DAT_18083df70)[*pU8_7] + 1U == uVal_12) {
        pU8_7 = pU8_7 + uVal_13;
      }
      else if ((*(byte *)((&DAT_180842c80)[lVal_14] + 0x38 + (uint64_t)(param_1 & 0x3f) * 0x48) &
               0x48) == 0) {
        func_0x18069c8a0(param_1,(int64_t)(int)-uVal_12,1);
      }
      else {
        pU8_11 = pU8_7 + 1;
        *(byte *)((&DAT_180842c80)[lVal_14] + 0x3a + (uint64_t)(param_1 & 0x3f) * 0x48) = *pU8_7;
        if (1 < uVal_12) {
          bFlag_1 = *pU8_11;
          pU8_11 = pU8_7 + 2;
          *(byte *)((&DAT_180842c80)[lVal_14] + 0x3b + (uint64_t)(param_1 & 0x3f) * 0x48) = bFlag_1;
        }
        if (uVal_12 == 3) {
          bFlag_1 = *pU8_11;
          pU8_11 = pU8_11 + 1;
          *(byte *)((&DAT_180842c80)[lVal_14] + 0x3c + (uint64_t)(param_1 & 0x3f) * 0x48) = bFlag_1;
        }
        pU8_7 = pU8_11 + -uVal_13;
      }
    }
    iVal_9 = (int)pU8_7 - (int)param_2;
    iVal_8 = func_0x180695e90(0xfde9,0,param_2,iVal_9,param_4,param_5);
    if (iVal_8 == 0) {
      DVar4 = GetLastError();
      func_0x180682424(DVar4);
      return -1;
    }
    *(byte *)((&DAT_180842c80)[lVal_14] + 0x3d + (uint64_t)(param_1 & 0x3f) * 0x48) =
         -(iVal_8 != iVal_9) & 2U |
         *(byte *)((&DAT_180842c80)[lVal_14] + 0x3d + (uint64_t)(param_1 & 0x3f) * 0x48) & 0xfd;
    return iVal_8 * 2;
  }
  return iVal_8;
}

// func_0x18069d504
int func_0x18069d504(uint param_1,short *param_2,int64_t param_3)
{
  short *pSize_1;
  byte *pU8_2;
  byte bFlag_3;
  int64_t lVal_4;
  HANDLE hFile;
  BOOL BVar5;
  uint64_t uVal_6;
  short *pSize_7;
  short *pSize_8;
  short sz_9;
  short *pSize_10;
  int64_t lVal_11;
  int64_t lVal_12;
  short local_res8 [4];
  short local_res10;
  DWORD local_res18 [2];
  
  lVal_11 = 0;
  uVal_6 = (uint64_t)(param_1 & 0x3f);
  lVal_12 = (int64_t)(int)param_1 >> 6;
  lVal_4 = (&DAT_180842c80)[lVal_12];
  hFile = *(HANDLE *)(lVal_4 + 0x28 + uVal_6 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pU8_2 = (byte *)(lVal_4 + 0x38 + uVal_6 * 0x48);
    *pU8_2 = *pU8_2 & 0xfb;
  }
  else {
    pU8_2 = (byte *)(lVal_4 + 0x38 + uVal_6 * 0x48);
    *pU8_2 = *pU8_2 | 4;
  }
  pSize_1 = param_2 + param_3;
  pSize_7 = param_2;
  pSize_10 = param_2;
  if (param_2 < pSize_1) {
    do {
      sz_9 = *pSize_7;
      if (sz_9 == 0x1a) {
        bFlag_3 = *(byte *)((&DAT_180842c80)[lVal_12] + 0x38 + (uint64_t)(param_1 & 0x3f) * 0x48);
        if ((bFlag_3 & 0x40) != 0) {
          *pSize_10 = 0x1a;
          goto LAB_18069d6db;
        }
        *(byte *)((&DAT_180842c80)[lVal_12] + 0x38 + (uint64_t)(param_1 & 0x3f) * 0x48) = bFlag_3 | 2;
        break;
      }
      pSize_8 = pSize_7 + 1;
      if (sz_9 == 0xd) {
        if (pSize_1 <= pSize_8) {
          local_res8[0] = 0;
          local_res18[0] = 0;
          BVar5 = ReadFile(hFile,local_res8,2,local_res18,(LPOVERLAPPED)0x0);
          if ((BVar5 == 0) || (local_res18[0] == 0)) {
LAB_18069d6a2:
            *pSize_10 = 0xd;
            goto LAB_18069d6db;
          }
          if ((*(byte *)((&DAT_180842c80)[lVal_12] + 0x38 + uVal_6 * 0x48) & 0x48) == 0) {
            if ((local_res8[0] != 10) || (pSize_10 != param_2)) {
              func_0x18069c8a0(param_1,0xfffffffffffffffe,1);
              if (local_res8[0] != 10) goto LAB_18069d6a2;
              break;
            }
          }
          else if (local_res8[0] != 10) {
            local_res10 = local_res8[0];
            *pSize_10 = 0xd;
            do {
              *(uint8_t *)
               ((&DAT_180842c80)[lVal_12] + (uint64_t)(param_1 & 0x3f) * 0x48 + 0x3a + lVal_11) =
                   *(uint8_t *)((int64_t)&local_res10 + lVal_11);
              lVal_11 = lVal_11 + 1;
            } while (lVal_11 < 2);
            *(uint8_t *)((&DAT_180842c80)[lVal_12] + 0x3c + (uint64_t)(param_1 & 0x3f) * 0x48) =
                 10;
LAB_18069d6db:
            pSize_10 = pSize_10 + 1;
            break;
          }
          *pSize_10 = 10;
          goto LAB_18069d6db;
        }
        if (*pSize_8 == 10) {
          pSize_8 = pSize_7 + 2;
          sz_9 = 10;
        }
      }
      *pSize_10 = sz_9;
      pSize_10 = pSize_10 + 1;
      pSize_7 = pSize_8;
    } while (pSize_8 < pSize_1);
  }
  return (int)((int64_t)pSize_10 - (int64_t)param_2 >> 1) * 2;
}

// func_0x18069d700
uint32_t func_0x18069d700(void)
{
  uint32_t uVal_1;
  int64_t lVal_2;
  int64_t local_48 [2];
  uint8_t local_38;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  char local_20;
  uint32_t local_1c;
  char local_18;
  uint32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1808429bc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_DAT_18083d808._0_4_;
    uStack_2c = PTR_PTR_DAT_18083d808._4_4_;
    uStack_28 = PTR_DAT_18083d810._0_4_;
    uStack_24 = PTR_DAT_18083d810._4_4_;
  }
  uVal_1 = func_0x18069dac8();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVal_2 = func_0x18067e900(local_48);
    *(uint32_t *)(lVal_2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVal_2 = func_0x18067e900(local_48);
    *(uint32_t *)(lVal_2 + 0x24) = local_14;
  }
  return uVal_1;
}

// func_0x18069d798
int func_0x18069d798(uint param_1,short *param_2,uint param_3,int64_t param_4)
{
  char ch_1;
  int iVal_2;
  short sz_3;
  short sz_4;
  int iVal_5;
  BOOL BVar6;
  DWORD DVar7;
  uint64_t uVal_8;
  uint64_t *pU64_9;
  int iVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  short *pSize_13;
  uint64_t local_70;
  int local_68;
  uint64_t local_60;
  DWORD local_50 [4];
  
  iVal_10 = 0;
  uVal_12 = (uint64_t)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (short *)0x0) {
LAB_18069d7c8:
    *(uint8_t *)(param_4 + 0x38) = 1;
    *(uint32_t *)(param_4 + 0x34) = 0;
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_4);
    return -1;
  }
  uVal_8 = (uint64_t)(param_1 & 0x3f);
  lVal_11 = (int64_t)(int)param_1 >> 6;
  ch_1 = *(char *)((&DAT_180842c80)[lVal_11] + 0x39 + uVal_8 * 0x48);
  if (((byte)(ch_1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_18069d7c8;
  if ((*(byte *)((&DAT_180842c80)[lVal_11] + 0x38 + uVal_8 * 0x48) & 0x20) != 0) {
    thunk_FUN_18069ca6c(param_1,0,2);
  }
  local_60 = 0;
  iVal_5 = func_0x180684d5c();
  if ((iVal_5 == 0) || (-1 < *(char *)((&DAT_180842c80)[lVal_11] + 0x38 + uVal_8 * 0x48))) {
LAB_18069d980:
    if (-1 < *(char *)((&DAT_180842c80)[lVal_11] + 0x38 + (uint64_t)(param_1 & 0x3f) * 0x48)) {
      local_70 = 0;
      local_68 = 0;
      BVar6 = WriteFile(*(HANDLE *)
                         ((&DAT_180842c80)[lVal_11] + 0x28 + (uint64_t)(param_1 & 0x3f) * 0x48),
                        param_2,param_3,(LPDWORD)((int64_t)&local_70 + 4),(LPOVERLAPPED)0x0);
      iVal_10 = local_68;
      uVal_8 = local_70;
      if (BVar6 == 0) {
        DVar7 = GetLastError();
        local_70 = CONCAT44(local_70._4_4_,DVar7);
        iVal_10 = local_68;
        uVal_8 = local_70;
      }
      goto LAB_18069da35;
    }
    if (ch_1 == '\0') {
      pU64_9 = (uint64_t *)func_0x18069e07c(&local_70,param_1,param_2,uVal_12);
    }
    else if (ch_1 == '\x01') {
      pU64_9 = (uint64_t *)func_0x18069e2a0(&local_70,param_1,param_2,uVal_12);
    }
    else {
      iVal_10 = 0;
      uVal_8 = local_60;
      if (ch_1 != '\x02') goto LAB_18069da35;
      pU64_9 = (uint64_t *)func_0x18069e184(&local_70,param_1,param_2,uVal_12);
    }
  }
  else {
    if (*(char *)(param_4 + 0x28) == '\0') {
      func_0x18067e970();
    }
    if ((*(int64_t *)(*(int64_t *)(param_4 + 0x18) + 0x138) == 0) &&
       (*(char *)((&DAT_180842c80)[lVal_11] + 0x39 + uVal_8 * 0x48) == '\0')) goto LAB_18069d980;
    local_50[0] = 0;
    BVar6 = GetConsoleMode(*(HANDLE *)((&DAT_180842c80)[lVal_11] + 0x28 + uVal_8 * 0x48),local_50);
    if (BVar6 == 0) goto LAB_18069d980;
    if (ch_1 != '\0') {
      if ((ch_1 == '\x01') || (uVal_8 = local_60, ch_1 == '\x02')) {
        local_70 = 0;
        uVal_8 = local_70;
        if (param_2 < (short *)((int64_t)param_2 + uVal_12)) {
          local_70._4_4_ = 0;
          pSize_13 = param_2;
          iVal_5 = local_70._4_4_;
          do {
            sz_4 = *pSize_13;
            sz_3 = func_0x1806a8c48(sz_4);
            if (sz_3 != sz_4) {
LAB_18069d948:
              DVar7 = GetLastError();
              local_70 = CONCAT44(local_70._4_4_,DVar7);
              uVal_8 = local_70;
              break;
            }
            local_70 = CONCAT44(iVal_5 + 2,(uint32_t)local_70);
            iVal_2 = iVal_5 + 2;
            if (sz_4 == 10) {
              sz_4 = func_0x1806a8c48(0xd);
              if (sz_4 != 0xd) goto LAB_18069d948;
              local_70 = CONCAT44(iVal_5 + 3,(uint32_t)local_70);
              iVal_10 = iVal_10 + 1;
              iVal_2 = iVal_5 + 3;
            }
            iVal_5 = iVal_2;
            pSize_13 = pSize_13 + 1;
            uVal_8 = local_70;
          } while (pSize_13 < (short *)((int64_t)param_2 + uVal_12));
        }
      }
      goto LAB_18069da35;
    }
    pU64_9 = (uint64_t *)func_0x18069dbe8(&local_70,param_1,param_2,uVal_12,param_4);
  }
  iVal_10 = *(int *)(pU64_9 + 1);
  uVal_8 = *pU64_9;
LAB_18069da35:
  local_60 = uVal_8;
  iVal_5 = (int)(local_60 >> 0x20);
  if (iVal_5 != 0) {
    return iVal_5 - iVal_10;
  }
  if ((int)local_60 != 0) {
    if ((int)local_60 == 5) {
      *(uint8_t *)(param_4 + 0x30) = 1;
      *(uint32_t *)(param_4 + 0x2c) = 9;
      *(uint8_t *)(param_4 + 0x38) = 1;
      *(uint32_t *)(param_4 + 0x34) = 5;
      return -1;
    }
    func_0x18068251c(local_60 & 0xffffffff,param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_180842c80)[lVal_11] + 0x38 + (uint64_t)(param_1 & 0x3f) * 0x48) & 0x40) != 0
      ) && (*(char *)param_2 == '\x1a')) {
    return 0;
  }
  *(uint32_t *)(param_4 + 0x34) = 0;
  *(uint8_t *)(param_4 + 0x30) = 1;
  *(uint32_t *)(param_4 + 0x2c) = 0x1c;
  *(uint8_t *)(param_4 + 0x38) = 1;
  return -1;
}

// func_0x18069dac8
uint32_t func_0x18069dac8(uint param_1,uint64_t param_2,uint32_t param_3,int64_t param_4)
{
  bool bFlag_1;
  uint32_t uVal_2;
  
  if (param_1 == 0xfffffffe) {
    *(uint8_t *)(param_4 + 0x38) = 1;
    *(uint32_t *)(param_4 + 0x34) = 0;
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_180843080 <= param_1)) {
      bFlag_1 = false;
    }
    else {
      bFlag_1 = true;
    }
    if (bFlag_1) {
      if ((*(byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                    (uint64_t)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        uVal_2 = 0xffffffff;
        if ((*(byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                      (uint64_t)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(uint8_t *)(param_4 + 0x30) = 1;
          *(uint32_t *)(param_4 + 0x2c) = 9;
          *(uint8_t *)(param_4 + 0x38) = 1;
          *(uint32_t *)(param_4 + 0x34) = 0;
        }
        else {
          uVal_2 = func_0x18069d798(param_1,param_2,param_3,param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVal_2;
      }
    }
    *(uint8_t *)(param_4 + 0x38) = 1;
    *(uint32_t *)(param_4 + 0x34) = 0;
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 9;
    func_0x180684b50(0,0,0,0,0,param_4);
  }
  return 0xffffffff;
}

// func_0x18069dbe8
void func_0x18069dbe8(uint64_t *param_1,uint param_2,byte *param_3,uint64_t param_4,int64_t param_5 )
{
  byte bFlag_1;
  char ch_2;
  HANDLE hFile;
  char ch_3;
  int iVal_4;
  BOOL BVar5;
  DWORD DVar6;
  uint64_t uVal_7;
  char *fnPtr_8;
  uint64_t uVal_9;
  uint uVal_10;
  uint uVal_11;
  uint8_t *pU64_12;
  byte *pU8_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  int64_t lVal_18;
  uint64_t uVal_19;
  uint8_t auStackY_108 [32];
  uint16_t local_c8;
  uint32_t local_c4;
  uint local_c0 [2];
  byte *local_b8;
  int64_t local_b0;
  uint64_t local_a8;
  UINT local_a0;
  int local_9c;
  byte *local_98;
  int64_t local_90;
  uint64_t local_88;
  uint8_t *local_80;
  byte *local_78;
  HANDLE local_70;
  int64_t local_68;
  uint64_t local_60;
  uint8_t local_58 [8];
  byte local_50;
  byte local_4f;
  uint8_t local_48 [8];
  uint64_t local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_18083cf40 ^ (uint64_t)auStackY_108;
  local_b0 = param_5;
  lVal_18 = (int64_t)(int)param_2 >> 6;
  uVal_7 = (uint64_t)(param_2 & 0x3f);
  local_70 = *(HANDLE *)((&DAT_180842c80)[lVal_18] + 0x28 + uVal_7 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVal_18;
  local_a0 = GetConsoleOutputCP();
  uVal_14 = 0;
  if (*(char *)(local_b0 + 0x28) == '\0') {
    func_0x18067e970(local_b0);
  }
  local_9c = *(int *)(*(int64_t *)(local_b0 + 0x18) + 0xc);
  *param_1 = 0;
  *(uint32_t *)(param_1 + 1) = 0;
  uVal_9 = uVal_14;
  lVal_15 = lVal_18;
  if (local_98 < param_3 + (param_4 & 0xffffffff)) {
    do {
      local_68 = lVal_15;
      local_c8 = CONCAT11(local_c8._1_1_,*param_3);
      local_c4 = 0;
      ch_3 = '\x01';
      if (local_9c == 0xfde9) {
        fnPtr_8 = (char *)(uVal_7 * 0x48 + 0x3e + (&DAT_180842c80)[local_68]);
        uVal_9 = uVal_14;
        uVal_19 = uVal_14;
        do {
          uVal_10 = (uint)uVal_9;
          if (*fnPtr_8 == '\0') break;
          uVal_10 = uVal_10 + 1;
          uVal_9 = (uint64_t)uVal_10;
          uVal_19 = uVal_19 + 1;
          fnPtr_8 = fnPtr_8 + 1;
        } while ((int64_t)uVal_19 < 5);
        if ((int64_t)uVal_19 < 1) {
          ch_2 = (&DAT_18083df70)[*param_3];
          iVal_4 = ch_2 + 1;
          lVal_18 = (int64_t)local_b8 - (int64_t)param_3;
          if (lVal_18 < iVal_4) {
            uVal_9 = uVal_14;
            if (0 < lVal_18) {
              do {
                *(byte *)(uVal_9 + uVal_7 * 0x48 + 0x3e + (&DAT_180842c80)[local_90]) = param_3[uVal_9]
                ;
                uVal_10 = (int)uVal_14 + 1;
                uVal_14 = (uint64_t)uVal_10;
                uVal_9 = uVal_9 + 1;
              } while ((int)uVal_10 < lVal_18);
            }
            *(int *)((int64_t)param_1 + 4) = *(int *)((int64_t)param_1 + 4) + (int)lVal_18;
            break;
          }
          local_a8 = 0;
          ch_3 = (iVal_4 == 4) + '\x01';
          local_78 = param_3;
          lVal_18 = func_0x18069b340(&local_c4,&local_78,ch_3,&local_a8);
          if (lVal_18 == -1) break;
          pU8_13 = param_3 + ch_2;
          lVal_18 = local_90;
        }
        else {
          ch_3 = (&DAT_18083df70)[*(byte *)((&DAT_180842c80)[lVal_18] + 0x3e + uVal_7 * 0x48)];
          iVal_4 = (ch_3 + 1) - uVal_10;
          local_a8 = CONCAT44(local_a8._4_4_,iVal_4);
          lVal_15 = (int64_t)local_b8 - (int64_t)param_3;
          lVal_17 = (int64_t)iVal_4;
          if (lVal_15 < lVal_17) {
            if (0 < lVal_15) {
              uVal_9 = uVal_19;
              do {
                *(byte *)(uVal_9 + uVal_7 * 0x48 + 0x3e + (&DAT_180842c80)[lVal_18]) =
                     param_3[uVal_9 - uVal_19];
                uVal_10 = (int)uVal_14 + 1;
                uVal_14 = (uint64_t)uVal_10;
                uVal_9 = uVal_9 + 1;
              } while ((int)uVal_10 < lVal_15);
            }
            *(int *)((int64_t)param_1 + 4) = *(int *)((int64_t)param_1 + 4) + (int)lVal_15;
            break;
          }
          pU64_12 = (uint8_t *)(uVal_7 * 0x48 + 0x3e + (&DAT_180842c80)[local_68]);
          uVal_9 = uVal_14;
          do {
            local_58[uVal_9] = *pU64_12;
            uVal_9 = uVal_9 + 1;
            pU64_12 = pU64_12 + 1;
          } while ((int64_t)uVal_9 < (int64_t)uVal_19);
          uVal_9 = uVal_14;
          if (0 < lVal_17) {
            func_0x1806aa960(local_58 + uVal_19,param_3,lVal_17);
          }
          do {
            *(uint8_t *)(uVal_9 + uVal_7 * 0x48 + 0x3e + (&DAT_180842c80)[lVal_18]) = 0;
            uVal_9 = uVal_9 + 1;
          } while ((int64_t)uVal_9 < (int64_t)uVal_19);
          local_88 = 0;
          local_80 = local_58;
          ch_3 = (ch_3 + 1 == 4) + '\x01';
          lVal_15 = func_0x18069b340(&local_c4,&local_80,ch_3,&local_88);
          if (lVal_15 == -1) break;
          pU8_13 = param_3 + ((int)local_a8 + -1);
        }
      }
      else {
        lVal_15 = (&DAT_180842c80)[lVal_18];
        bFlag_1 = *(byte *)(lVal_15 + 0x3d + uVal_7 * 0x48);
        if ((bFlag_1 & 4) == 0) {
          if (*(short *)(**(int64_t **)(local_b0 + 0x18) + (uint64_t)*param_3 * 2) < 0) {
            pU8_13 = param_3 + 1;
            if (pU8_13 < local_b8) {
              iVal_4 = func_0x18069aee4(&local_c4,param_3,2,local_b0);
              if (iVal_4 != -1) goto LAB_18069def0;
            }
            else {
              *(byte *)(lVal_15 + 0x3e + uVal_7 * 0x48) = *param_3;
              pU8_13 = (byte *)((&DAT_180842c80)[lVal_18] + 0x3d + uVal_7 * 0x48);
              *pU8_13 = *pU8_13 | 4;
              *(int *)((int64_t)param_1 + 4) = (int)uVal_9 + 1;
            }
            break;
          }
          uVal_16 = 1;
          pU8_13 = param_3;
        }
        else {
          local_50 = *(byte *)(lVal_15 + 0x3e + uVal_7 * 0x48);
          local_4f = *param_3;
          *(byte *)(lVal_15 + 0x3d + uVal_7 * 0x48) = bFlag_1 & 0xfb;
          uVal_16 = 2;
          pU8_13 = &local_50;
        }
        iVal_4 = func_0x18069aee4(&local_c4,pU8_13,uVal_16,local_b0);
        pU8_13 = param_3;
        if (iVal_4 == -1) break;
      }
LAB_18069def0:
      param_3 = pU8_13 + 1;
      uVal_10 = func_0x180695f20(local_a0,0,&local_c4,ch_3);
      hFile = local_70;
      if (uVal_10 == 0) break;
      local_c0[0] = 0;
      BVar5 = WriteFile(local_70,local_48,uVal_10,local_c0,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
LAB_18069e049:
        DVar6 = GetLastError();
        *(DWORD *)param_1 = DVar6;
        break;
      }
      uVal_11 = (*(int *)(param_1 + 1) - (int)local_98) + (int)param_3;
      *(uint *)((int64_t)param_1 + 4) = uVal_11;
      if (local_c0[0] < uVal_10) break;
      if ((char)local_c8 == '\n') {
        local_c8 = 0xd;
        BVar5 = WriteFile(hFile,&local_c8,1,local_c0,(LPOVERLAPPED)0x0);
        if (BVar5 == 0) goto LAB_18069e049;
        if (local_c0[0] == 0) break;
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        *(int *)((int64_t)param_1 + 4) = *(int *)((int64_t)param_1 + 4) + 1;
        uVal_11 = *(uint *)((int64_t)param_1 + 4);
      }
      uVal_9 = (uint64_t)uVal_11;
      lVal_15 = local_68;
    } while (param_3 < local_b8);
  }
  func_0x180673080(local_40 ^ (uint64_t)auStackY_108);
  return;
}

// func_0x18069e07c
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
void func_0x18069e07c(uint64_t *param_1,uint param_2,char *param_3,uint64_t param_4)
{
  char ch_1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  uint nNumberOfBytesToWrite;
  char *fnPtr_4;
  char *fnPtr_5;
  uint8_t auStackY_1468 [32];
  uint local_1438 [4];
  char local_1428 [5120];
  uint64_t local_28;
  uint64_t uStack_20;
  
  uStack_20 = 0x18069e094;
  local_28 = DAT_18083cf40 ^ (uint64_t)auStackY_1468;
  fnPtr_5 = param_3 + (param_4 & 0xffffffff);
  hFile = *(HANDLE *)
           ((&DAT_180842c80)[(int64_t)(int)param_2 >> 6] + 0x28 +
           (uint64_t)(param_2 & 0x3f) * 0x48);
  *param_1 = 0;
  *(uint32_t *)(param_1 + 1) = 0;
  if (fnPtr_5 <= param_3) {
LAB_18069e158:
    func_0x180673080(local_28 ^ (uint64_t)auStackY_1468);
    return;
  }
  do {
    fnPtr_4 = local_1428;
    do {
      if (fnPtr_5 <= param_3) break;
      ch_1 = *param_3;
      param_3 = param_3 + 1;
      if (ch_1 == '\n') {
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        *fnPtr_4 = '\r';
        fnPtr_4 = fnPtr_4 + 1;
      }
      *fnPtr_4 = ch_1;
      fnPtr_4 = fnPtr_4 + 1;
    } while (fnPtr_4 < local_1428 + 0x13ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)fnPtr_4 - (int)local_1428;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *(DWORD *)param_1 = DVar3;
      goto LAB_18069e158;
    }
    *(int *)((int64_t)param_1 + 4) = *(int *)((int64_t)param_1 + 4) + local_1438[0];
    if ((local_1438[0] < nNumberOfBytesToWrite) || (fnPtr_5 <= param_3)) goto LAB_18069e158;
  } while( true );
}

// func_0x18069e184
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
void func_0x18069e184(uint64_t *param_1,uint param_2,short *param_3,uint64_t param_4)
{
  short sz_1;
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  BOOL BVar2;
  DWORD DVar3;
  short *pSize_4;
  short *pSize_5;
  uint8_t auStackY_1468 [32];
  uint local_1438 [4];
  short local_1428 [2560];
  uint64_t local_28;
  uint64_t uStack_20;
  
  uStack_20 = 0x18069e19c;
  local_28 = DAT_18083cf40 ^ (uint64_t)auStackY_1468;
  pSize_5 = (short *)((param_4 & 0xffffffff) + (int64_t)param_3);
  hFile = *(HANDLE *)
           ((&DAT_180842c80)[(int64_t)(int)param_2 >> 6] + 0x28 +
           (uint64_t)(param_2 & 0x3f) * 0x48);
  *param_1 = 0;
  *(uint32_t *)(param_1 + 1) = 0;
  if (pSize_5 <= param_3) {
LAB_18069e274:
    func_0x180673080(local_28 ^ (uint64_t)auStackY_1468);
    return;
  }
  do {
    pSize_4 = local_1428;
    do {
      if (pSize_5 <= param_3) break;
      sz_1 = *param_3;
      param_3 = param_3 + 1;
      if (sz_1 == 10) {
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 2;
        *pSize_4 = 0xd;
        pSize_4 = pSize_4 + 1;
      }
      *pSize_4 = sz_1;
      pSize_4 = pSize_4 + 1;
    } while (pSize_4 < local_1428 + 0x9ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)((int64_t)pSize_4 - (int64_t)local_1428 >> 1) * 2;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *(DWORD *)param_1 = DVar3;
      goto LAB_18069e274;
    }
    *(int *)((int64_t)param_1 + 4) = *(int *)((int64_t)param_1 + 4) + local_1438[0];
    if ((local_1438[0] < nNumberOfBytesToWrite) || (pSize_5 <= param_3)) goto LAB_18069e274;
  } while( true );
}

// func_0x18069e2a0
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
void func_0x18069e2a0(uint64_t *param_1,uint param_2,short *param_3,uint param_4)
{
  short sz_1;
  HANDLE hFile;
  uint uVal_2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVal_5;
  uint64_t uVal_6;
  short *pSize_7;
  short *pSize_8;
  short *pSize_9;
  uint8_t auStackY_1498 [32];
  DWORD local_1458 [4];
  short local_1448 [856];
  uint8_t local_d98 [3424];
  uint64_t local_38;
  uint64_t uStack_30;
  
  uStack_30 = 0x18069e2bc;
  local_38 = DAT_18083cf40 ^ (uint64_t)auStackY_1498;
  pSize_9 = (short *)((uint64_t)param_4 + (int64_t)param_3);
  hFile = *(HANDLE *)
           ((&DAT_180842c80)[(int64_t)(int)param_2 >> 6] + 0x28 +
           (uint64_t)(param_2 & 0x3f) * 0x48);
  *param_1 = 0;
  *(uint32_t *)(param_1 + 1) = 0;
  pSize_7 = param_3;
  if (param_3 < pSize_9) {
    do {
      pSize_8 = local_1448;
      do {
        if (pSize_9 <= pSize_7) break;
        sz_1 = *pSize_7;
        pSize_7 = pSize_7 + 1;
        if (sz_1 == 10) {
          *pSize_8 = 0xd;
          pSize_8 = pSize_8 + 1;
        }
        *pSize_8 = sz_1;
        pSize_8 = pSize_8 + 1;
      } while (pSize_8 < local_1448 + 0x354);
      uVal_2 = func_0x180695f20(0xfde9,0,local_1448,(int64_t)pSize_8 - (int64_t)local_1448 >> 1);
      if (uVal_2 == 0) {
LAB_18069e3dd:
        DVar4 = GetLastError();
        *(DWORD *)param_1 = DVar4;
        break;
      }
      uVal_6 = 0;
      if (uVal_2 != 0) {
        do {
          local_1458[0] = 0;
          BVar3 = WriteFile(hFile,local_d98 + uVal_6,uVal_2 - (int)uVal_6,local_1458,(LPOVERLAPPED)0x0)
          ;
          if (BVar3 == 0) goto LAB_18069e3dd;
          uVal_5 = (int)uVal_6 + local_1458[0];
          uVal_6 = (uint64_t)uVal_5;
        } while (uVal_5 < uVal_2);
      }
      *(int *)((int64_t)param_1 + 4) = (int)pSize_7 - (int)param_3;
    } while (pSize_7 < pSize_9);
  }
  func_0x180673080(local_38 ^ (uint64_t)auStackY_1498);
  return;
}

// func_0x18069e414
uint64_t func_0x18069e414(byte param_1,FILE *param_2,int64_t param_3)
{
  uint *pU64_1;
  char ch_2;
  
  _fileno(param_2);
  if ((*(uint *)((int64_t)&param_2->_base + 4) & 6) == 0) {
    *(uint32_t *)(param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((int64_t)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if ((*(uint *)((int64_t)&param_2->_base + 4) & 1) != 0) {
        ch_2 = func_0x18069e4e0(param_2);
        *(uint32_t *)&param_2->_base = 0;
        if (ch_2 == '\0') goto LAB_18069e446;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        pU64_1 = (uint *)((int64_t)&param_2->_base + 4);
        *pU64_1 = *pU64_1 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      pU64_1 = (uint *)((int64_t)&param_2->_base + 4);
      *pU64_1 = *pU64_1 | 2;
      UNLOCK();
      LOCK();
      pU64_1 = (uint *)((int64_t)&param_2->_base + 4);
      *pU64_1 = *pU64_1 & 0xfffffff7;
      UNLOCK();
      *(uint32_t *)&param_2->_base = 0;
      if (((*(uint *)((int64_t)&param_2->_base + 4) & 0x4c0) == 0) &&
         (ch_2 = func_0x180699db8(param_2), ch_2 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      ch_2 = func_0x18069e568(param_1,param_2,param_3);
      if (ch_2 != '\0') {
        return (uint64_t)param_1;
      }
      goto LAB_18069e446;
    }
    *(uint32_t *)(param_3 + 0x2c) = 0x22;
  }
  *(uint8_t *)(param_3 + 0x30) = 1;
LAB_18069e446:
  LOCK();
  pU64_1 = (uint *)((int64_t)&param_2->_base + 4);
  *pU64_1 = *pU64_1 | 0x10;
  UNLOCK();
  return 0xffffffff;
}

// func_0x18069e4e0
bool func_0x18069e4e0(int64_t *param_1)
{
  bool bFlag_1;
  BOOL BVar2;
  HANDLE hFile;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  if ((*(uint *)((int64_t)param_1 + 0x14) >> 3 & 1) == 0) {
    if ((((*(uint *)((int64_t)param_1 + 0x14) & 0xc0) == 0) || (*param_1 != param_1[1])) &&
       (hFile = (HANDLE)func_0x180683c70(*(uint32_t *)(param_1 + 3)),
       hFile != (HANDLE)0xffffffffffffffff)) {
      local_res10[0].QuadPart = 0;
      BVar2 = SetFilePointerEx(hFile,(LARGE_INTEGER)0x0,local_res10,1);
      if (BVar2 != 0) {
        local_res8.QuadPart = 0;
        BVar2 = GetFileSizeEx(hFile,&local_res8);
        if (BVar2 != 0) {
          return local_res10[0].QuadPart == local_res8.QuadPart;
        }
      }
    }
    bFlag_1 = false;
  }
  else {
    bFlag_1 = true;
  }
  return bFlag_1;
}

// func_0x18069e568
bool func_0x18069e568(uint8_t param_1,FILE *param_2,uint64_t param_3)
{
  uint *pU64_1;
  uint uVal_2;
  int iVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  int iVal_6;
  bool bFlag_7;
  uint8_t local_res8 [8];
  
  local_res8[0] = param_1;
  uVal_2 = _fileno(param_2);
  if ((*(uint *)((int64_t)&param_2->_base + 4) & 0xc0) == 0) {
    iVal_3 = func_0x18069dac8(uVal_2,local_res8,1,param_3);
    bFlag_7 = iVal_3 == 1;
  }
  else {
    iVal_3 = 0;
    iVal_6 = *(int *)&param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(*(int64_t *)&param_2->_cnt + 1);
    *(int *)&param_2->_base = param_2->_charbuf + -1;
    if (iVal_6 < 1) {
      if (uVal_2 + 2 < 2) {
        pU64_5 = &DAT_18083d9e0;
      }
      else {
        pU64_5 = (uint8_t *)
                 ((&DAT_180842c80)[(int64_t)(int)uVal_2 >> 6] + (uint64_t)(uVal_2 & 0x3f) * 0x48);
      }
      if (((pU64_5[0x38] & 0x20) != 0) && (lVal_4 = func_0x18069c804(uVal_2,0,2), lVal_4 == -1)) {
        LOCK();
        pU64_1 = (uint *)((int64_t)&param_2->_base + 4);
        *pU64_1 = *pU64_1 | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      iVal_3 = func_0x18069dac8(uVal_2,*(int64_t *)&param_2->_cnt,iVal_6,param_3);
    }
    bFlag_7 = iVal_3 == iVal_6;
    **(uint8_t **)&param_2->_cnt = local_res8[0];
  }
  return bFlag_7;
}

// func_0x18069e660
uint32_t func_0x18069e660(void)
{
  return DAT_180843118;
}

// func_0x18069e668
int64_t func_0x18069e668(void)
{
  WCHAR WVar1;
  int iVal_2;
  LPWCH pWStr_3;
  int64_t lVal_4;
  WCHAR *pWStr_6;
  uint64_t uVal_7;
  int64_t lVal_5;
  
  pWStr_3 = GetEnvironmentStringsW();
  if (pWStr_3 != (LPWCH)0x0) {
    WVar1 = *pWStr_3;
    pWStr_6 = pWStr_3;
    while (WVar1 != L'\0') {
      lVal_4 = -1;
      do {
        lVal_5 = lVal_4;
        lVal_4 = lVal_5 + 1;
      } while (pWStr_6[lVal_4] != L'\0');
      pWStr_6 = pWStr_6 + lVal_5 + 2;
      WVar1 = *pWStr_6;
    }
    uVal_7 = (int64_t)pWStr_6 + (2 - (int64_t)pWStr_3) >> 1;
    iVal_2 = func_0x180695f20(0,0,pWStr_3,uVal_7 & 0xffffffff,0,0,0,0);
    if (iVal_2 != 0) {
      lVal_4 = _malloc_base((int64_t)iVal_2);
      if (lVal_4 != 0) {
        iVal_2 = func_0x180695f20(0,0,pWStr_3,uVal_7 & 0xffffffff,lVal_4,iVal_2,0,0);
        if (iVal_2 == 0) {
          func_0x180695dd0(lVal_4);
          lVal_4 = 0;
        }
        else {
          func_0x180695dd0(0);
        }
        FreeEnvironmentStringsW(pWStr_3);
        return lVal_4;
      }
      func_0x180695dd0(0);
    }
    FreeEnvironmentStringsW(pWStr_3);
  }
  return 0;
}

// func_0x18069e778
LPWCH func_0x18069e778(void)
{
  WCHAR WVar1;
  LPWCH pWStr_2;
  int64_t lVal_3;
  LPWCH pWStr_5;
  LPWCH pWStr_6;
  WCHAR *pWStr_7;
  int64_t lVal_4;
  
  pWStr_2 = GetEnvironmentStringsW();
  pWStr_6 = pWStr_2;
  if (pWStr_2 != (LPWCH)0x0) {
    WVar1 = *pWStr_2;
    pWStr_7 = pWStr_2;
    while (WVar1 != L'\0') {
      lVal_3 = -1;
      do {
        lVal_4 = lVal_3;
        lVal_3 = lVal_4 + 1;
      } while (pWStr_7[lVal_3] != L'\0');
      pWStr_7 = pWStr_7 + lVal_4 + 2;
      WVar1 = *pWStr_7;
    }
    lVal_3 = ((int64_t)pWStr_7 + (2 - (int64_t)pWStr_2) >> 1) * 2;
    pWStr_5 = (LPWCH)_malloc_base(lVal_3);
    pWStr_6 = (LPWCH)0x0;
    if (pWStr_5 != (LPWCH)0x0) {
      func_0x1806aa960(pWStr_5,pWStr_2,lVal_3);
      pWStr_6 = pWStr_5;
    }
    func_0x180695dd0(0);
    FreeEnvironmentStringsW(pWStr_2);
  }
  return pWStr_6;
}

// thunk_FUN_18069e81c
wchar_t * thunk_FUN_18069e81c(wchar_t *param_1,int param_2)
{
  uint64_t uVal_1;
  wchar_t wVar2;
  int iVal_3;
  BOOL BVar4;
  uint32_t *pU64_5;
  wchar_t *pWStr_6;
  int64_t lVal_7;
  wchar_t **ptr2_WStr_8;
  LPCWSTR lpName;
  wchar_t **ptr2_WStr_9;
  int64_t lVal_10;
  wchar_t *pWStr_11;
  int64_t lVal_12;
  
  pWStr_11 = (wchar_t *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    pU64_5 = (uint32_t *)func_0x1806823dc();
    *pU64_5 = 0x16;
    return (wchar_t *)0xffffffffffffffff;
  }
  pWStr_6 = (wchar_t *)func_0x1806a8c90(param_1,0x3d);
  if ((pWStr_6 == (wchar_t *)0x0) || (pWStr_6 == param_1)) {
    pU64_5 = (uint32_t *)func_0x1806823dc();
    *pU64_5 = 0x16;
    func_0x180695dd0(param_1);
    return (wchar_t *)0xffffffffffffffff;
  }
  wVar2 = pWStr_6[1];
  if (DAT_180842740 == DAT_180842748) {
    DAT_180842740 = copy_environment<wchar_t>(DAT_180842740);
  }
  if (DAT_180842740 == (wchar_t **)0x0) {
    if ((param_2 == 0) || (DAT_180842738 == 0)) {
      if (wVar2 == L'\0') goto LAB_18069e8d4;
      if (DAT_180842738 == 0) {
        DAT_180842738 = _calloc_base(1,8);
        func_0x180695dd0(0);
        if (DAT_180842738 == 0) goto LAB_18069e8d0;
        if (DAT_180842740 != (wchar_t **)0x0) goto LAB_18069e978;
      }
      DAT_180842740 = (wchar_t **)_calloc_base(1,8);
      func_0x180695dd0(0);
      if (DAT_180842740 != (wchar_t **)0x0) goto LAB_18069e96f;
    }
    else {
      lVal_7 = func_0x18068442c();
      if (lVal_7 == 0) {
        pU64_5 = (uint32_t *)func_0x1806823dc();
        *pU64_5 = 0x16;
      }
      else {
        if (DAT_180842740 == DAT_180842748) {
          DAT_180842740 = copy_environment<wchar_t>(DAT_180842740);
        }
LAB_18069e96f:
        if (DAT_180842740 != (wchar_t **)0x0) goto LAB_18069e978;
      }
    }
  }
  else {
LAB_18069e978:
    ptr2_WStr_8 = DAT_180842740;
    lVal_7 = (int64_t)pWStr_6 - (int64_t)param_1 >> 1;
    pWStr_6 = *DAT_180842740;
    ptr2_WStr_9 = DAT_180842740;
    while (pWStr_6 != (wchar_t *)0x0) {
      iVal_3 = func_0x1806a47a0(param_1,pWStr_6,lVal_7);
      if ((iVal_3 == 0) && (((*ptr2_WStr_9)[lVal_7] == L'=' || ((*ptr2_WStr_9)[lVal_7] == L'\0')))) {
        lVal_10 = (int64_t)ptr2_WStr_9 - (int64_t)ptr2_WStr_8 >> 3;
        goto LAB_18069e9c4;
      }
      ptr2_WStr_9 = ptr2_WStr_9 + 1;
      pWStr_6 = *ptr2_WStr_9;
    }
    lVal_10 = -((int64_t)ptr2_WStr_9 - (int64_t)ptr2_WStr_8 >> 3);
LAB_18069e9c4:
    pWStr_6 = pWStr_11;
    if ((-1 < lVal_10) && (*ptr2_WStr_8 != (wchar_t *)0x0)) {
      func_0x180695dd0(ptr2_WStr_8[lVal_10]);
      if (wVar2 == L'\0') {
        for (; ptr2_WStr_8[lVal_10] != (wchar_t *)0x0; lVal_10 = lVal_10 + 1) {
          ptr2_WStr_8[lVal_10] = ptr2_WStr_8[lVal_10 + 1];
        }
        ptr2_WStr_8 = (wchar_t **)_recalloc_base(ptr2_WStr_8,lVal_10,8);
        func_0x180695dd0(0);
        pWStr_6 = param_1;
        if (ptr2_WStr_8 != (wchar_t **)0x0) {
          DAT_180842740 = ptr2_WStr_8;
        }
      }
      else {
        ptr2_WStr_8[lVal_10] = param_1;
      }
LAB_18069ea8e:
      if (param_2 == 0) {
LAB_18069eb2b:
        func_0x180695dd0(pWStr_6);
        return (wchar_t *)0x0;
      }
      lVal_10 = -1;
      do {
        lVal_12 = lVal_10;
        lVal_10 = lVal_12 + 1;
      } while (param_1[lVal_10] != L'\0');
      lpName = (LPCWSTR)_calloc_base(lVal_12 + 3);
      if (lpName == (LPCWSTR)0x0) {
        func_0x180695dd0(0);
      }
      else {
        iVal_3 = func_0x180696710();
        if (iVal_3 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[lVal_7] = L'\0';
        BVar4 = SetEnvironmentVariableW
                          (lpName,(LPCWSTR)(-(uint64_t)(wVar2 != L'\0') &
                                           (uint64_t)(lpName + lVal_7 + 1)));
        if (BVar4 != 0) {
          func_0x180695dd0(lpName);
          goto LAB_18069eb2b;
        }
        pU64_5 = (uint32_t *)func_0x1806823dc();
        *pU64_5 = 0x2a;
        func_0x180695dd0(lpName);
        pWStr_11 = (wchar_t *)0xffffffff;
      }
      func_0x180695dd0(pWStr_6);
      return pWStr_11;
    }
    if (wVar2 == L'\0') goto LAB_18069e8d4;
    uVal_1 = -lVal_10 + 2;
    if (((uint64_t)-lVal_10 <= uVal_1) && (uVal_1 < 0x1fffffffffffffff)) {
      ptr2_WStr_8 = (wchar_t **)_recalloc_base(ptr2_WStr_8,uVal_1,8);
      func_0x180695dd0(0);
      if (ptr2_WStr_8 != (wchar_t **)0x0) {
        ptr2_WStr_8[-lVal_10] = param_1;
        ptr2_WStr_8[1 - lVal_10] = (wchar_t *)0x0;
        DAT_180842740 = ptr2_WStr_8;
        goto LAB_18069ea8e;
      }
    }
  }
LAB_18069e8d0:
  pWStr_11 = (wchar_t *)0xffffffffffffffff;
LAB_18069e8d4:
  func_0x180695dd0(param_1);
  return (wchar_t *)((uint64_t)pWStr_11 & 0xffffffff);
}

// func_0x18069e81c
wchar_t * func_0x18069e81c(wchar_t *param_1,int param_2)
{
  uint64_t uVal_1;
  wchar_t wVar2;
  int iVal_3;
  BOOL BVar4;
  uint32_t *pU64_5;
  wchar_t *pWStr_6;
  int64_t lVal_7;
  wchar_t **ptr2_WStr_8;
  LPCWSTR lpName;
  wchar_t **ptr2_WStr_9;
  int64_t lVal_10;
  wchar_t *pWStr_11;
  int64_t lVal_12;
  
  pWStr_11 = (wchar_t *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    pU64_5 = (uint32_t *)func_0x1806823dc();
    *pU64_5 = 0x16;
    return (wchar_t *)0xffffffffffffffff;
  }
  pWStr_6 = (wchar_t *)func_0x1806a8c90(param_1,0x3d);
  if ((pWStr_6 == (wchar_t *)0x0) || (pWStr_6 == param_1)) {
    pU64_5 = (uint32_t *)func_0x1806823dc();
    *pU64_5 = 0x16;
    func_0x180695dd0(param_1);
    return (wchar_t *)0xffffffffffffffff;
  }
  wVar2 = pWStr_6[1];
  if (DAT_180842740 == DAT_180842748) {
    DAT_180842740 = copy_environment<wchar_t>(DAT_180842740);
  }
  if (DAT_180842740 == (wchar_t **)0x0) {
    if ((param_2 == 0) || (DAT_180842738 == 0)) {
      if (wVar2 == L'\0') goto LAB_18069e8d4;
      if (DAT_180842738 == 0) {
        DAT_180842738 = _calloc_base(1,8);
        func_0x180695dd0(0);
        if (DAT_180842738 == 0) goto LAB_18069e8d0;
        if (DAT_180842740 != (wchar_t **)0x0) goto LAB_18069e978;
      }
      DAT_180842740 = (wchar_t **)_calloc_base(1,8);
      func_0x180695dd0(0);
      if (DAT_180842740 != (wchar_t **)0x0) goto LAB_18069e96f;
    }
    else {
      lVal_7 = func_0x18068442c();
      if (lVal_7 == 0) {
        pU64_5 = (uint32_t *)func_0x1806823dc();
        *pU64_5 = 0x16;
      }
      else {
        if (DAT_180842740 == DAT_180842748) {
          DAT_180842740 = copy_environment<wchar_t>(DAT_180842740);
        }
LAB_18069e96f:
        if (DAT_180842740 != (wchar_t **)0x0) goto LAB_18069e978;
      }
    }
  }
  else {
LAB_18069e978:
    ptr2_WStr_8 = DAT_180842740;
    lVal_7 = (int64_t)pWStr_6 - (int64_t)param_1 >> 1;
    pWStr_6 = *DAT_180842740;
    ptr2_WStr_9 = DAT_180842740;
    while (pWStr_6 != (wchar_t *)0x0) {
      iVal_3 = func_0x1806a47a0(param_1,pWStr_6,lVal_7);
      if ((iVal_3 == 0) && (((*ptr2_WStr_9)[lVal_7] == L'=' || ((*ptr2_WStr_9)[lVal_7] == L'\0')))) {
        lVal_10 = (int64_t)ptr2_WStr_9 - (int64_t)ptr2_WStr_8 >> 3;
        goto LAB_18069e9c4;
      }
      ptr2_WStr_9 = ptr2_WStr_9 + 1;
      pWStr_6 = *ptr2_WStr_9;
    }
    lVal_10 = -((int64_t)ptr2_WStr_9 - (int64_t)ptr2_WStr_8 >> 3);
LAB_18069e9c4:
    pWStr_6 = pWStr_11;
    if ((-1 < lVal_10) && (*ptr2_WStr_8 != (wchar_t *)0x0)) {
      func_0x180695dd0(ptr2_WStr_8[lVal_10]);
      if (wVar2 == L'\0') {
        for (; ptr2_WStr_8[lVal_10] != (wchar_t *)0x0; lVal_10 = lVal_10 + 1) {
          ptr2_WStr_8[lVal_10] = ptr2_WStr_8[lVal_10 + 1];
        }
        ptr2_WStr_8 = (wchar_t **)_recalloc_base(ptr2_WStr_8,lVal_10,8);
        func_0x180695dd0(0);
        pWStr_6 = param_1;
        if (ptr2_WStr_8 != (wchar_t **)0x0) {
          DAT_180842740 = ptr2_WStr_8;
        }
      }
      else {
        ptr2_WStr_8[lVal_10] = param_1;
      }
LAB_18069ea8e:
      if (param_2 == 0) {
LAB_18069eb2b:
        func_0x180695dd0(pWStr_6);
        return (wchar_t *)0x0;
      }
      lVal_10 = -1;
      do {
        lVal_12 = lVal_10;
        lVal_10 = lVal_12 + 1;
      } while (param_1[lVal_10] != L'\0');
      lpName = (LPCWSTR)_calloc_base(lVal_12 + 3);
      if (lpName == (LPCWSTR)0x0) {
        func_0x180695dd0(0);
      }
      else {
        iVal_3 = func_0x180696710();
        if (iVal_3 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[lVal_7] = L'\0';
        BVar4 = SetEnvironmentVariableW
                          (lpName,(LPCWSTR)(-(uint64_t)(wVar2 != L'\0') &
                                           (uint64_t)(lpName + lVal_7 + 1)));
        if (BVar4 != 0) {
          func_0x180695dd0(lpName);
          goto LAB_18069eb2b;
        }
        pU64_5 = (uint32_t *)func_0x1806823dc();
        *pU64_5 = 0x2a;
        func_0x180695dd0(lpName);
        pWStr_11 = (wchar_t *)0xffffffff;
      }
      func_0x180695dd0(pWStr_6);
      return pWStr_11;
    }
    if (wVar2 == L'\0') goto LAB_18069e8d4;
    uVal_1 = -lVal_10 + 2;
    if (((uint64_t)-lVal_10 <= uVal_1) && (uVal_1 < 0x1fffffffffffffff)) {
      ptr2_WStr_8 = (wchar_t **)_recalloc_base(ptr2_WStr_8,uVal_1,8);
      func_0x180695dd0(0);
      if (ptr2_WStr_8 != (wchar_t **)0x0) {
        ptr2_WStr_8[-lVal_10] = param_1;
        ptr2_WStr_8[1 - lVal_10] = (wchar_t *)0x0;
        DAT_180842740 = ptr2_WStr_8;
        goto LAB_18069ea8e;
      }
    }
  }
LAB_18069e8d0:
  pWStr_11 = (wchar_t *)0xffffffffffffffff;
LAB_18069e8d4:
  func_0x180695dd0(param_1);
  return (wchar_t *)((uint64_t)pWStr_11 & 0xffffffff);
}

// copy_environment<wchar_t>
/* Library Function - Single Match
    wchar_t * __ptr64 * __ptr64 __cdecl copy_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    wchar_t * __ptr64 * __ptr64 __cdecl copy_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t ** __cdecl copy_environment<wchar_t>(wchar_t **param_1)
{
  int iVal_1;
  wchar_t **ptr2_WStr_2;
  wchar_t *pWStr_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  
  lVal_5 = 0;
  if (param_1 == (wchar_t **)0x0) {
    ptr2_WStr_2 = (wchar_t **)0x0;
  }
  else {
    pWStr_3 = *param_1;
    ptr2_WStr_2 = param_1;
    while (pWStr_3 != (wchar_t *)0x0) {
      lVal_5 = lVal_5 + 1;
      ptr2_WStr_2 = ptr2_WStr_2 + 1;
      pWStr_3 = *ptr2_WStr_2;
    }
    ptr2_WStr_2 = (wchar_t **)_calloc_base(lVal_5 + 1,8);
    if (ptr2_WStr_2 == (wchar_t **)0x0) {
LAB_18069ec69:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pWStr_3 = *param_1;
    if (pWStr_3 != (wchar_t *)0x0) {
      lVal_5 = (int64_t)ptr2_WStr_2 - (int64_t)param_1;
      do {
        lVal_6 = -1;
        do {
          lVal_7 = lVal_6;
          lVal_6 = lVal_7 + 1;
        } while (pWStr_3[lVal_6] != L'\0');
        uVal_4 = _calloc_base(lVal_7 + 2,2);
        *(uint64_t *)(lVal_5 + (int64_t)param_1) = uVal_4;
        func_0x180695dd0(0);
        if (*(int64_t *)(lVal_5 + (int64_t)param_1) == 0) goto LAB_18069ec69;
        iVal_1 = func_0x180696710();
        if (iVal_1 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        pWStr_3 = *param_1;
      } while (pWStr_3 != (wchar_t *)0x0);
    }
    func_0x180695dd0(0);
  }
  return ptr2_WStr_2;
}

// func_0x18069ec70
uint64_t func_0x18069ec70(LPCWSTR param_1)
{
  BOOL BVar1;
  DWORD DVar2;
  uint64_t uVal_3;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    func_0x180682424(DVar2);
    uVal_3 = 0xffffffff;
  }
  else {
    uVal_3 = 0;
  }
  return uVal_3;
}

// func_0x18069ec9c
uint32_t func_0x18069ec9c(uint32_t param_1,uint64_t param_2)
{
  uint32_t uVal_1;
  int64_t lVal_2;
  int64_t local_48 [2];
  uint8_t local_38;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  char local_20;
  uint32_t local_1c;
  char local_18;
  uint32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1808429bc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_DAT_18083d808._0_4_;
    uStack_2c = PTR_PTR_DAT_18083d808._4_4_;
    uStack_28 = PTR_DAT_18083d810._0_4_;
    uStack_24 = PTR_DAT_18083d810._4_4_;
    param_1 = PTR_PTR_DAT_18083d808._0_4_;
  }
  uVal_1 = func_0x18069ed34(param_1,param_2,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVal_2 = func_0x18067e900(local_48);
    *(uint32_t *)(lVal_2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVal_2 = func_0x18067e900(local_48);
    *(uint32_t *)(lVal_2 + 0x24) = local_14;
  }
  return uVal_1;
}

// func_0x18069ed34
uint32_t func_0x18069ed34(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  uint32_t uVal_1;
  int iVal_2;
  BOOL BVar3;
  DWORD DVar4;
  int64_t lVal_5;
  int64_t lVal_6;
  HANDLE hFile;
  uint64_t uVal_7;
  uint32_t uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  
  uVal_10 = param_1 & 0xffffffff;
  lVal_5 = func_0x18069c8a0(param_1,0,1);
  lVal_6 = func_0x18069c8a0(uVal_10,0,2);
  uVal_7 = param_2 - lVal_6;
  if ((lVal_5 == -1) || (lVal_6 == -1)) {
    if (*(char *)(param_3 + 0x30) == '\0') {
      uVal_1 = 0x16;
      goto LAB_18069ee93;
    }
  }
  else {
    uVal_8 = 0;
    if (0 < (int64_t)uVal_7) {
      lVal_6 = _calloc_base(0x1000,1);
      if (lVal_6 == 0) {
        uVal_8 = 0xc;
        *(uint8_t *)(param_3 + 0x30) = 1;
        *(uint32_t *)(param_3 + 0x2c) = 0xc;
      }
      else {
        uVal_1 = func_0x1806865e8(param_1 & 0xffffffff,0x8000);
        do {
          uVal_9 = uVal_7 & 0xffffffff;
          if (0xfff < (int64_t)uVal_7) {
            uVal_9 = 0x1000;
          }
          iVal_2 = func_0x18069d798(uVal_10,lVal_6,uVal_9,param_3);
          if (iVal_2 == -1) {
            if ((*(char *)(param_3 + 0x38) != '\0') && (*(int *)(param_3 + 0x34) == 5)) {
              *(uint8_t *)(param_3 + 0x30) = 1;
              *(uint32_t *)(param_3 + 0x2c) = 0xd;
            }
            if (*(char *)(param_3 + 0x30) != '\0') {
              uVal_8 = *(uint32_t *)(param_3 + 0x2c);
            }
            goto LAB_18069ee25;
          }
          uVal_7 = uVal_7 - (int64_t)iVal_2;
        } while (0 < (int64_t)uVal_7);
        func_0x1806865e8(uVal_10,uVal_1);
      }
LAB_18069ee25:
      func_0x180695dd0(lVal_6);
      uVal_1 = uVal_8;
      goto LAB_18069ee93;
    }
    uVal_1 = 0;
    if (-1 < (int64_t)uVal_7) goto LAB_18069ee93;
    lVal_6 = func_0x18069c8a0(param_1 & 0xffffffff,param_2,0);
    uVal_1 = uVal_8;
    if (lVal_6 != -1) {
      hFile = (HANDLE)func_0x180683c70(param_1 & 0xffffffff);
      BVar3 = SetEndOfFile(hFile);
      if (BVar3 == 0) {
        DVar4 = GetLastError();
        *(uint8_t *)(param_3 + 0x38) = 1;
        uVal_1 = 0xd;
        *(DWORD *)(param_3 + 0x34) = DVar4;
        *(uint8_t *)(param_3 + 0x30) = 1;
        *(uint32_t *)(param_3 + 0x2c) = 0xd;
      }
      goto LAB_18069ee93;
    }
    if (*(char *)(param_3 + 0x30) == '\0') goto LAB_18069ee93;
  }
  uVal_1 = *(uint32_t *)(param_3 + 0x2c);
LAB_18069ee93:
  func_0x18069c8a0(uVal_10,lVal_5,0);
  return uVal_1;
}

// _getdrive
/* Library Function - Single Match
    _getdrive
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    _getdrive
   
   Library: Visual Studio 2019 Release */
int __cdecl _getdrive(void)
{
  DWORD DVar1;
  int iVal_2;
  LPWSTR lpBuffer;
  uint32_t *pU64_3;
  uint8_t auStack_248 [32];
  WCHAR local_228 [264];
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_248;
  func_0x1806ab010(local_228,0,0x20a);
  DVar1 = GetCurrentDirectoryW(0x105,local_228);
  if (0x104 < DVar1) {
    lpBuffer = (LPWSTR)_calloc_base(DVar1 + 1,2);
    if ((lpBuffer == (LPWSTR)0x0) || (DVar1 = GetCurrentDirectoryW(DVar1 + 1,lpBuffer), DVar1 == 0))
    {
      pU64_3 = (uint32_t *)func_0x1806823dc();
      *pU64_3 = 0xc;
    }
    func_0x180695dd0(lpBuffer);
  }
  iVal_2 = func_0x180673080(local_18 ^ (uint64_t)auStack_248);
  return iVal_2;
}

// func_0x18069efd4
int64_t func_0x18069efd4(int64_t param_1,short *param_2,uint64_t param_3)
{
  int iVal_1;
  int64_t lVal_2;
  uint32_t uVal_3;
  short *local_res8;
  int64_t local_38;
  uint64_t local_30;
  int64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  char local_10;
  
  if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    uVal_3 = 0x7fffffff;
    if (param_3 < 0x7fffffff) {
      uVal_3 = (int)param_3;
    }
    lVal_2 = func_0x1806a8d18(param_1,uVal_3);
  }
  else {
    local_18 = 0;
    local_10 = '\0';
    local_res8 = param_2;
    if (param_1 == 0) {
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      func_0x18069f1e0(&local_38,&local_res8);
      lVal_2 = func_0x18069f088(&local_38);
      if (local_10 != '\0') {
        thunk_FUN_180695dd0(local_28);
      }
    }
    else {
      local_38 = param_1;
      local_30 = param_3;
      local_28 = param_1;
      local_20 = param_3;
      iVal_1 = func_0x18069f16c();
      lVal_2 = 0;
      if (iVal_1 == 0) {
        lVal_2 = param_1;
      }
    }
  }
  return lVal_2;
}

// func_0x18069f088
int64_t func_0x18069f088(uint64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint32_t *pU64_5;
  
  lVal_4 = param_1[2];
  if ((lVal_4 == 0) || (param_1[4] == 0)) {
    return 0;
  }
  if (*(char *)(param_1 + 5) != '\0') goto LAB_18069f133;
  lVal_4 = _malloc_base(param_1[4] * 2);
  uVal_1 = param_1[3];
  lVal_2 = param_1[2];
  uVal_3 = param_1[4];
  if (uVal_1 == 0) goto LAB_18069f133;
  if (lVal_4 == 0) {
LAB_18069f0e5:
    pU64_5 = (uint32_t *)func_0x1806823dc();
    *pU64_5 = 0x16;
  }
  else {
    if ((lVal_2 != 0) && (uVal_1 <= uVal_3)) {
      func_0x1806aa960(lVal_4,lVal_2,uVal_1);
      goto LAB_18069f133;
    }
    func_0x1806ab010(lVal_4,0,uVal_3);
    if (lVal_2 == 0) goto LAB_18069f0e5;
    if (uVal_1 <= uVal_3) goto LAB_18069f133;
    pU64_5 = (uint32_t *)func_0x1806823dc();
    *pU64_5 = 0x22;
  }
  func_0x180684970();
LAB_18069f133:
  param_1[4] = 0;
  param_1[2] = *param_1;
  param_1[3] = param_1[1];
  return lVal_4;
}

// func_0x18069f16c
uint32_t func_0x18069f16c(int64_t param_1,LPCWSTR *param_2)
{
  DWORD DVar1;
  uint32_t uVal_2;
  uint64_t uVal_3;
  uint32_t *pU64_4;
  
  DVar1 = GetFullPathNameW(*param_2,*(DWORD *)(param_1 + 0x18),*(LPWSTR *)(param_1 + 0x10),
                           (LPWSTR *)0x0);
  uVal_3 = (uint64_t)DVar1;
  if (uVal_3 == 0) {
    DVar1 = GetLastError();
    func_0x180682424(DVar1);
    pU64_4 = (uint32_t *)func_0x1806823dc();
    uVal_2 = *pU64_4;
  }
  else if (*(uint64_t *)(param_1 + 0x18) < uVal_3) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      *(uint8_t *)(param_1 + 0x28) = 0;
    }
    pU64_4 = (uint32_t *)func_0x1806823dc();
    *pU64_4 = 0x22;
    uVal_2 = 0x22;
    *(uint8_t *)(param_1 + 0x28) = 0;
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  else {
    *(uint64_t *)(param_1 + 0x20) = uVal_3;
    uVal_2 = 0;
  }
  return uVal_2;
}

// func_0x18069f1e0
uint func_0x18069f1e0(int64_t param_1,LPCWSTR *param_2)
{
  DWORD DVar1;
  uint uVal_2;
  uint *pU64_3;
  LPWSTR lpBuffer;
  uint64_t uVal_4;
  
  DVar1 = GetFullPathNameW(*param_2,*(DWORD *)(param_1 + 0x18),*(LPWSTR *)(param_1 + 0x10),
                           (LPWSTR *)0x0);
  uVal_4 = (uint64_t)DVar1;
  if (DVar1 == 0) {
LAB_18069f21b:
    DVar1 = GetLastError();
    func_0x180682424(DVar1);
    pU64_3 = (uint *)func_0x1806823dc();
    uVal_2 = *pU64_3;
  }
  else {
    if (*(uint64_t *)(param_1 + 0x18) < uVal_4) {
      if (*(char *)(param_1 + 0x28) != '\0') {
        thunk_FUN_180695dd0(*(uint64_t *)(param_1 + 0x10));
        *(uint8_t *)(param_1 + 0x28) = 0;
      }
      lpBuffer = (LPWSTR)_malloc_base(uVal_4 * 2 + 2);
      *(LPWSTR *)(param_1 + 0x10) = lpBuffer;
      uVal_2 = ~-(uint)(lpBuffer != (LPWSTR)0x0) & 0xc;
      if (lpBuffer != (LPWSTR)0x0) {
        uVal_2 = 0;
      }
      *(bool *)(param_1 + 0x28) = lpBuffer != (LPWSTR)0x0;
      uVal_4 = -(uint64_t)(lpBuffer != (LPWSTR)0x0) & uVal_4 + 1;
      *(uint64_t *)(param_1 + 0x18) = uVal_4;
      if (uVal_2 != 0) {
        return uVal_2;
      }
      DVar1 = GetFullPathNameW(*param_2,(DWORD)uVal_4,lpBuffer,(LPWSTR *)0x0);
      if ((uint64_t)DVar1 == 0) goto LAB_18069f21b;
      *(uint64_t *)(param_1 + 0x20) = (uint64_t)DVar1;
    }
    else {
      *(uint64_t *)(param_1 + 0x20) = uVal_4;
    }
    uVal_2 = 0;
  }
  return uVal_2;
}

// func_0x18069f2d0
uint8_t (*func_0x18069f2d0(uint8_t (*param_1)[16],ushort param_2))[16]
{
  uint8_t *pU64_1;
  uint8_t (*pArr16_2)[16];
  uint8_t (*pArr16_3)[16];
  uint uVal_4;
  int iVal_5;
  uint8_t (*pArr16_6)[16];
  bool bFlag_7;
  bool bFlag_8;
  
  pArr16_3 = param_1;
  if (DAT_18083d260 < 2) {
    do {
      pU64_1 = *pArr16_3;
      pArr16_3 = (uint8_t (*)[16])(*pArr16_3 + 2);
    } while (*(short *)pU64_1 != 0);
    do {
      pArr16_2 = pArr16_3 + -1;
      pArr16_3 = (uint8_t (*)[16])(pArr16_3[-1] + 0xe);
      if (pArr16_3 == param_1) {
        pArr16_6 = (uint8_t (*)[16])0x0;
        if (*(ushort *)(*pArr16_2 + 0xe) == param_2) {
          pArr16_6 = pArr16_3;
        }
        return pArr16_6;
      }
    } while (*(ushort *)(*pArr16_2 + 0xe) != param_2);
    return pArr16_3;
  }
  pArr16_3 = (uint8_t (*)[16])0x0;
  uVal_4 = (int)param_1 + 1;
  while( true ) {
    if ((uVal_4 & 0xe) == 0) {
      bFlag_7 = param_2 != 0;
      bFlag_8 = param_2 == 0;
      if (!bFlag_8) {
        while( true ) {
          iVal_5 = pcmpistri(ZEXT216(param_2),*param_1,0x41);
          if (bFlag_7) {
            pArr16_3 = (uint8_t (*)[16])(*param_1 + (int64_t)iVal_5 * 2);
            pcmpistri(ZEXT216(param_2),*param_1,0x41);
          }
          if (bFlag_8) break;
          bFlag_7 = (uint8_t (*)[16])0xffffffffffffffef < param_1;
          param_1 = param_1 + 1;
          bFlag_8 = param_1 == (uint8_t (*)[16])0x0;
        }
        return pArr16_3;
      }
      iVal_5 = pcmpistri(ZEXT416(0xffff0001),*param_1,0x15);
      if (!bFlag_8) {
        do {
          pArr16_3 = param_1 + 1;
          param_1 = param_1 + 1;
          iVal_5 = pcmpistri(ZEXT416(0xffff0001),*pArr16_3,0x15);
        } while (param_1 != (uint8_t (*)[16])0x0);
      }
      return (uint8_t (*)[16])(*param_1 + (int64_t)iVal_5 * 2);
    }
    if (*(ushort *)*param_1 == param_2) {
      pArr16_3 = param_1;
    }
    if (*(ushort *)*param_1 == 0) break;
    uVal_4 = (int)param_1 + 3;
    param_1 = (uint8_t (*)[16])(*param_1 + 2);
  }
  return pArr16_3;
}

// func_0x18069f3b0
short * func_0x18069f3b0(short *param_1,uint64_t param_2)
{
  short sz_1;
  int64_t lVal_2;
  
  sz_1 = *param_1;
  while( true ) {
    if (sz_1 == 0) {
      return (short *)0x0;
    }
    lVal_2 = func_0x1806a8c90(param_2,sz_1);
    if (lVal_2 != 0) break;
    sz_1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}

// thunk_FUN_18069f410
void thunk_FUN_18069f410(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6, int param_7)
{
  char ch_1;
  errno_t eVar2;
  uint32_t *pU64_3;
  uint uVal_4;
  int64_t lVal_5;
  uint8_t auStackY_b8 [32];
  long lStack_88;
  long lStack_84;
  int iStack_80;
  uint uStack_7c;
  tm tStack_78;
  uint64_t uStack_50;
  
  uStack_50 = DAT_18083cf40 ^ (uint64_t)auStackY_b8;
  uVal_4 = param_1 - 0x76c;
  lVal_5 = (int64_t)param_2;
  if (((((((int)uVal_4 < 0x46) || (0x44d < uVal_4)) || (uStack_7c = param_2 - 1, 0xb < uStack_7c)) ||
       (param_3 < 1)) ||
      ((*(int *)(&DAT_1806e7830 + lVal_5 * 4) - (&FuncInfo_1806e7808.EHFlags)[lVal_5] < param_3 &&
       (((ch_1 = __crt_time_is_leap_year<>(uVal_4), ch_1 == '\0' || (param_2 != 2)) ||
        (0x1d < param_3)))))) || (((0x17 < param_4 || (0x3b < param_5)) || (0x3b < param_6)))) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
  }
  else {
    param_3 = param_3 + (&FuncInfo_1806e7808.EHFlags)[lVal_5];
    ch_1 = __crt_time_is_leap_year<>(uVal_4);
    if ((ch_1 != '\0') && (2 < param_2)) {
      param_3 = param_3 + 1;
    }
    __tzset();
    iStack_80 = 0;
    lStack_84 = 0;
    lStack_88 = 0;
    eVar2 = FID_conflict__get_daylight(&iStack_80);
    if (((eVar2 != 0) || (eVar2 = _get_dstbias(&lStack_84), eVar2 != 0)) ||
       (eVar2 = FID_conflict__get_daylight(&lStack_88), eVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_7 != 1) {
      tStack_78.tm_mday = 0;
      tStack_78.tm_wday = 0;
      tStack_78.tm_isdst = 0;
      tStack_78.tm_mon = uStack_7c;
      tStack_78.tm_min = param_5;
      tStack_78.tm_sec = param_6;
      tStack_78.tm_hour = param_4;
      tStack_78.tm_year = uVal_4;
      tStack_78.tm_yday = param_3;
      if ((param_7 == -1) && (iStack_80 != 0)) {
        _isindst(&tStack_78);
      }
    }
  }
  func_0x180673080(uStack_50 ^ (uint64_t)auStackY_b8);
  return;
}

// func_0x18069f410
void func_0x18069f410(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6, int param_7)
{
  char ch_1;
  errno_t eVar2;
  uint32_t *pU64_3;
  uint uVal_4;
  int64_t lVal_5;
  uint8_t auStackY_b8 [32];
  long local_88;
  long local_84;
  int local_80;
  uint local_7c;
  tm local_78;
  uint64_t local_50;
  
  local_50 = DAT_18083cf40 ^ (uint64_t)auStackY_b8;
  uVal_4 = param_1 - 0x76c;
  lVal_5 = (int64_t)param_2;
  if (((((((int)uVal_4 < 0x46) || (0x44d < uVal_4)) || (local_7c = param_2 - 1, 0xb < local_7c)) ||
       (param_3 < 1)) ||
      ((*(int *)(&DAT_1806e7830 + lVal_5 * 4) - (&FuncInfo_1806e7808.EHFlags)[lVal_5] < param_3 &&
       (((ch_1 = __crt_time_is_leap_year<>(uVal_4), ch_1 == '\0' || (param_2 != 2)) ||
        (0x1d < param_3)))))) || (((0x17 < param_4 || (0x3b < param_5)) || (0x3b < param_6)))) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
  }
  else {
    param_3 = param_3 + (&FuncInfo_1806e7808.EHFlags)[lVal_5];
    ch_1 = __crt_time_is_leap_year<>(uVal_4);
    if ((ch_1 != '\0') && (2 < param_2)) {
      param_3 = param_3 + 1;
    }
    __tzset();
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    eVar2 = FID_conflict__get_daylight(&local_80);
    if (((eVar2 != 0) || (eVar2 = _get_dstbias(&local_84), eVar2 != 0)) ||
       (eVar2 = FID_conflict__get_daylight(&local_88), eVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_7 != 1) {
      local_78.tm_mday = 0;
      local_78.tm_wday = 0;
      local_78.tm_isdst = 0;
      local_78.tm_mon = local_7c;
      local_78.tm_min = param_5;
      local_78.tm_sec = param_6;
      local_78.tm_hour = param_4;
      local_78.tm_year = uVal_4;
      local_78.tm_yday = param_3;
      if ((param_7 == -1) && (local_80 != 0)) {
        _isindst(&local_78);
      }
    }
  }
  func_0x180673080(local_50 ^ (uint64_t)auStackY_b8);
  return;
}

// __acrt_locale_free_monetary
/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_locale_free_monetary(int64_t param_1)
{
  if (param_1 != 0) {
    if (*(uint8_t **)(param_1 + 0x18) != PTR_DAT_18083d5f8) {
      func_0x180695dd0();
    }
    if (*(uint8_t **)(param_1 + 0x20) != PTR_DAT_18083d600) {
      func_0x180695dd0();
    }
    if (*(uint8_t **)(param_1 + 0x28) != PTR_DAT_18083d608) {
      func_0x180695dd0();
    }
    if (*(uint8_t **)(param_1 + 0x30) != PTR_DAT_18083d610) {
      func_0x180695dd0();
    }
    if (*(uint8_t **)(param_1 + 0x38) != PTR_DAT_18083d618) {
      func_0x180695dd0();
    }
    if (*(uint8_t **)(param_1 + 0x40) != PTR_DAT_18083d620) {
      func_0x180695dd0();
    }
    if (*(uint8_t **)(param_1 + 0x48) != PTR_DAT_18083d628) {
      func_0x180695dd0();
    }
    if (*(uint8_t **)(param_1 + 0x68) != PTR_DAT_18083d648) {
      func_0x180695dd0();
    }
    if (*(uint8_t **)(param_1 + 0x70) != PTR_DAT_18083d650) {
      func_0x180695dd0();
    }
    if (*(uint8_t **)(param_1 + 0x78) != PTR_DAT_18083d658) {
      func_0x180695dd0();
    }
    if (*(uint8_t **)(param_1 + 0x80) != PTR_DAT_18083d660) {
      func_0x180695dd0();
    }
    if (*(uint8_t **)(param_1 + 0x88) != PTR_DAT_18083d668) {
      func_0x180695dd0();
    }
    if (*(uint8_t **)(param_1 + 0x90) != PTR_DAT_18083d670) {
      func_0x180695dd0();
    }
  }
  return;
}

// __acrt_locale_free_numeric
/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_locale_free_numeric(int64_t *param_1)
{
  if (param_1 != (int64_t *)0x0) {
    if ((uint8_t *)*param_1 != PTR_DAT_18083d5e0) {
      func_0x180695dd0();
    }
    if ((uint8_t *)param_1[1] != PTR_DAT_18083d5e8) {
      func_0x180695dd0();
    }
    if ((uint8_t *)param_1[2] != PTR_DAT_18083d5f0) {
      func_0x180695dd0();
    }
    if ((uint8_t *)param_1[0xb] != PTR_DAT_18083d638) {
      func_0x180695dd0();
    }
    if ((uint8_t *)param_1[0xc] != PTR_DAT_18083d640) {
      func_0x180695dd0();
    }
  }
  return;
}

// __acrt_locale_free_time
/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_locale_free_time(int64_t param_1)
{
  if (param_1 != 0) {
    func_0x1806a04b0(param_1,7);
    func_0x1806a04b0(param_1 + 0x38,7);
    func_0x1806a04b0(param_1 + 0x70,0xc);
    func_0x1806a04b0(param_1 + 0xd0,0xc);
    func_0x1806a04b0(param_1 + 0x130,2);
    func_0x180695dd0(*(uint64_t *)(param_1 + 0x140));
    func_0x180695dd0(*(uint64_t *)(param_1 + 0x148));
    func_0x180695dd0(*(uint64_t *)(param_1 + 0x150));
    func_0x1806a04b0(param_1 + 0x160,7);
    func_0x1806a04b0(param_1 + 0x198,7);
    func_0x1806a04b0(param_1 + 0x1d0,0xc);
    func_0x1806a04b0(param_1 + 0x230,0xc);
    func_0x1806a04b0(param_1 + 0x290,2);
    func_0x180695dd0(*(uint64_t *)(param_1 + 0x2a0));
    func_0x180695dd0(*(uint64_t *)(param_1 + 0x2a8));
    func_0x180695dd0(*(uint64_t *)(param_1 + 0x2b0));
    func_0x180695dd0(*(uint64_t *)(param_1 + 0x2b8));
  }
  return;
}

// initialize_lc_time
/* Library Function - Single Match
    bool __cdecl initialize_lc_time(struct __crt_lc_time_data * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    bool __cdecl initialize_lc_time(struct __crt_lc_time_data * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
bool __cdecl initialize_lc_time(__crt_lc_time_data *param_1,__crt_locale_data *param_2)
{
  uint64_t uVal_1;
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint64_t uVal_13;
  uint uVal_14;
  __crt_lc_time_data *p_Var15;
  int64_t lVal_16;
  int iVal_17;
  __crt_locale_data *local_38;
  uint64_t local_30;
  
  uVal_1 = *(uint64_t *)(param_2 + 0x150);
  uVal_14 = 0;
  local_30 = 0;
  local_38 = param_2;
  uVal_13 = __acrt_copy_locale_name(uVal_1);
  *(uint64_t *)(param_1 + 0x2b8) = uVal_13;
  iVal_17 = 0x31;
  lVal_16 = 7;
  do {
    p_Var15 = param_1 + (uint64_t)((iVal_17 - 0x30U) % 7) * 8;
    uVal_2 = __acrt_GetLocaleInfoA(&local_38,1,uVal_1,iVal_17,p_Var15);
    uVal_3 = __acrt_GetLocaleInfoA(&local_38,1,uVal_1,iVal_17 + -7,p_Var15 + 0x38);
    uVal_4 = __acrt_GetLocaleInfoA(&local_38,2,uVal_1,iVal_17,p_Var15 + 0x160);
    uVal_5 = __acrt_GetLocaleInfoA(&local_38,2,uVal_1,iVal_17 + -7,p_Var15 + 0x198);
    uVal_14 = uVal_14 | uVal_2 | uVal_3 | uVal_4 | uVal_5;
    iVal_17 = iVal_17 + 1;
    lVal_16 = lVal_16 + -1;
  } while (lVal_16 != 0);
  iVal_17 = 0x38;
  lVal_16 = 0xc;
  p_Var15 = param_1 + 0xd0;
  do {
    uVal_2 = __acrt_GetLocaleInfoA(&local_38,1,uVal_1,iVal_17 + 0xc,p_Var15 + -0x60);
    uVal_3 = __acrt_GetLocaleInfoA(&local_38,1,uVal_1,iVal_17,p_Var15);
    uVal_4 = __acrt_GetLocaleInfoA(&local_38,2,uVal_1,iVal_17 + 0xc,p_Var15 + 0x100);
    uVal_5 = __acrt_GetLocaleInfoA(&local_38,2,uVal_1,iVal_17,p_Var15 + 0x160);
    uVal_14 = uVal_14 | uVal_2 | uVal_3 | uVal_4 | uVal_5;
    p_Var15 = p_Var15 + 8;
    iVal_17 = iVal_17 + 1;
    lVal_16 = lVal_16 + -1;
  } while (lVal_16 != 0);
  uVal_2 = __acrt_GetLocaleInfoA(&local_38,1,uVal_1,0x28,param_1 + 0x130);
  uVal_3 = __acrt_GetLocaleInfoA(&local_38,1,uVal_1,0x29,param_1 + 0x138);
  uVal_4 = __acrt_GetLocaleInfoA(&local_38,2,uVal_1,0x28,param_1 + 0x290);
  uVal_5 = __acrt_GetLocaleInfoA(&local_38,2,uVal_1,0x29,param_1 + 0x298);
  uVal_6 = __acrt_GetLocaleInfoA(&local_38,1,uVal_1,0x1f,param_1 + 0x140);
  uVal_7 = __acrt_GetLocaleInfoA(&local_38,1,uVal_1,0x20,param_1 + 0x148);
  uVal_8 = __acrt_GetLocaleInfoA(&local_38,1,uVal_1,0x1003,param_1 + 0x150);
  uVal_9 = __acrt_GetLocaleInfoA(&local_38,0,uVal_1,0x1009,param_1 + 0x158);
  uVal_10 = __acrt_GetLocaleInfoA(&local_38,2,uVal_1,0x1f,param_1 + 0x2a0);
  uVal_11 = __acrt_GetLocaleInfoA(&local_38,2,uVal_1,0x20,param_1 + 0x2a8);
  uVal_12 = __acrt_GetLocaleInfoA(&local_38,2,uVal_1,0x1003,param_1 + 0x2b0);
  return (uVal_12 | uVal_14 | uVal_2 | uVal_3 | uVal_4 | uVal_5 | uVal_6 | uVal_7 | uVal_8 | uVal_9 | uVal_10 |
                   uVal_11) == 0;
}

// func_0x1806a04b0
void func_0x1806a04b0(uint64_t *param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = param_1 + param_2;
  if (param_1 != pU64_1) {
    do {
      func_0x180695dd0(*param_1);
      param_1 = param_1 + 1;
    } while (param_1 != pU64_1);
  }
  return;
}

// func_0x1806a04f0
uint64_t func_0x1806a04f0(short *param_1,int64_t param_2,int64_t param_3)
{
  short sz_1;
  uint32_t *pU64_2;
  short *pSize_3;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    pSize_3 = param_1;
    if (param_3 == 0) {
      *param_1 = 0;
    }
    else {
      do {
        if (*pSize_3 == 0) {
          param_3 = param_3 - (int64_t)pSize_3;
          do {
            sz_1 = *(short *)(param_3 + (int64_t)pSize_3);
            *pSize_3 = sz_1;
            pSize_3 = pSize_3 + 1;
            if (sz_1 == 0) {
              return 0;
            }
            param_2 = param_2 + -1;
          } while (param_2 != 0);
          *param_1 = 0;
          pU64_2 = (uint32_t *)func_0x1806823dc();
          *pU64_2 = 0x22;
          func_0x180684970();
          return 0x22;
        }
        pSize_3 = pSize_3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
    }
  }
  pU64_2 = (uint32_t *)func_0x1806823dc();
  *pU64_2 = 0x16;
  func_0x180684970();
  return 0x16;
}

// func_0x1806a0580
uint64_t func_0x1806a0580(short *param_1,int64_t param_2,short *param_3,int64_t param_4)
{
  short sz_1;
  uint32_t *pU64_2;
  short *pSize_3;
  int64_t lVal_4;
  int64_t lVal_5;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_1806a05cb;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_1806a05cb;
  if (param_2 != 0) {
    pSize_3 = param_1;
    lVal_4 = param_2;
    if ((param_4 == 0) || (param_3 != (short *)0x0)) {
      do {
        if (*pSize_3 == 0) {
          if (param_4 != -1) {
            lVal_5 = param_4;
            if (param_4 != 0) {
              do {
                sz_1 = *param_3;
                param_3 = param_3 + 1;
                *pSize_3 = sz_1;
                pSize_3 = pSize_3 + 1;
                if (sz_1 == 0) {
                  return 0;
                }
                lVal_4 = lVal_4 + -1;
              } while ((lVal_4 != 0) && (lVal_5 = lVal_5 + -1, lVal_5 != 0));
            }
            if (lVal_5 == 0) {
              *pSize_3 = 0;
            }
            goto LAB_1806a066d;
          }
          lVal_5 = (int64_t)param_3 - (int64_t)pSize_3;
          goto LAB_1806a0620;
        }
        lVal_4 = lVal_4 + -1;
        pSize_3 = pSize_3 + 1;
      } while (lVal_4 != 0);
      *param_1 = 0;
    }
    else {
      *param_1 = 0;
    }
  }
LAB_1806a05cb:
  pU64_2 = (uint32_t *)func_0x1806823dc();
  *pU64_2 = 0x16;
  func_0x180684970();
  return 0x16;
  while (lVal_4 = lVal_4 + -1, lVal_4 != 0) {
LAB_1806a0620:
    sz_1 = *(short *)(lVal_5 + (int64_t)pSize_3);
    *pSize_3 = sz_1;
    pSize_3 = pSize_3 + 1;
    if (sz_1 == 0) break;
  }
LAB_1806a066d:
  if (lVal_4 != 0) {
    return 0;
  }
  if (param_4 == -1) {
    param_1[param_2 + -1] = 0;
    return 0x50;
  }
  *param_1 = 0;
  pU64_2 = (uint32_t *)func_0x1806823dc();
  *pU64_2 = 0x22;
  func_0x180684970();
  return 0x22;
}

// func_0x1806a06c0
uint32_t func_0x1806a06c0(short *param_1,int64_t param_2,int64_t param_3,int64_t param_4)
{
  short sz_1;
  uint32_t *pU64_2;
  int64_t lVal_3;
  short *pSize_4;
  int64_t lVal_5;
  int64_t lVal_6;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_1806a0723;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_1806a0723;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = 0;
      return 0;
    }
    if (param_3 != 0) {
      pSize_4 = param_1;
      lVal_5 = param_2;
      lVal_3 = param_4;
      if (param_4 == -1) {
        do {
          sz_1 = *(short *)((param_3 - (int64_t)param_1) + (int64_t)pSize_4);
          *pSize_4 = sz_1;
          pSize_4 = pSize_4 + 1;
          if (sz_1 == 0) {
            return 0;
          }
          lVal_5 = lVal_5 + -1;
        } while (lVal_5 != 0);
        lVal_5 = 0;
      }
      else {
        do {
          lVal_6 = lVal_3;
          sz_1 = *(short *)((param_3 - (int64_t)param_1) + (int64_t)pSize_4);
          *pSize_4 = sz_1;
          pSize_4 = pSize_4 + 1;
          if (sz_1 == 0) {
            return 0;
          }
          lVal_5 = lVal_5 + -1;
        } while ((lVal_5 != 0) && (lVal_3 = lVal_6 + -1, lVal_6 + -1 != 0));
        lVal_3 = lVal_6 + -1;
        if (lVal_5 == 0) {
          lVal_3 = lVal_6;
        }
        if (lVal_3 == 0) {
          *pSize_4 = 0;
        }
      }
      if (lVal_5 != 0) {
        return 0;
      }
      if (param_4 != -1) {
        *param_1 = 0;
        pU64_2 = (uint32_t *)func_0x1806823dc();
        *pU64_2 = 0x22;
        func_0x180684970();
        return 0x22;
      }
      param_1[param_2 + -1] = 0;
      return 0x50;
    }
    *param_1 = 0;
  }
LAB_1806a0723:
  pU64_2 = (uint32_t *)func_0x1806823dc();
  *pU64_2 = 0x16;
  func_0x180684970();
  return 0x16;
}

// func_0x1806a0810
int64_t func_0x1806a0810(short *param_1,uint64_t param_2)
{
  short sz_1;
  int64_t lVal_2;
  short *pSize_3;
  
  sz_1 = *param_1;
  pSize_3 = param_1;
  while ((sz_1 != 0 && (lVal_2 = func_0x1806a8c90(param_2,sz_1), lVal_2 == 0))) {
    sz_1 = pSize_3[1];
    pSize_3 = pSize_3 + 1;
  }
  return (int64_t)pSize_3 - (int64_t)param_1 >> 1;
}

// __acrt_add_locale_ref
/* Library Function - Single Match
    __acrt_add_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_add_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_add_locale_ref(int64_t param_1)
{
  int *pInt_1;
  int **ptr2_Int_2;
  int64_t lVal_3;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  pInt_1 = *(int **)(param_1 + 0xe0);
  if (pInt_1 != (int *)0x0) {
    LOCK();
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
  }
  pInt_1 = *(int **)(param_1 + 0xf0);
  if (pInt_1 != (int *)0x0) {
    LOCK();
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
  }
  pInt_1 = *(int **)(param_1 + 0xe8);
  if (pInt_1 != (int *)0x0) {
    LOCK();
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
  }
  pInt_1 = *(int **)(param_1 + 0x100);
  if (pInt_1 != (int *)0x0) {
    LOCK();
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
  }
  ptr2_Int_2 = (int **)(param_1 + 0x38);
  lVal_3 = 6;
  do {
    if ((ptr2_Int_2[-2] != (int *)&DAT_18083d818) && (pInt_1 = *ptr2_Int_2, pInt_1 != (int *)0x0)) {
      LOCK();
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
    }
    if ((ptr2_Int_2[-3] != (int *)0x0) && (pInt_1 = ptr2_Int_2[-1], pInt_1 != (int *)0x0)) {
      LOCK();
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
    }
    ptr2_Int_2 = ptr2_Int_2 + 4;
    lVal_3 = lVal_3 + -1;
  } while (lVal_3 != 0);
  __acrt_locale_add_lc_time_reference(*(uint64_t *)(param_1 + 0x120));
  return;
}

// __acrt_release_locale_ref
/* Library Function - Single Match
    __acrt_release_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_release_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_release_locale_ref(int64_t param_1)
{
  int *pInt_1;
  int **ptr2_Int_2;
  int64_t lVal_3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    pInt_1 = *(int **)(param_1 + 0xe0);
    if (pInt_1 != (int *)0x0) {
      LOCK();
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
    }
    pInt_1 = *(int **)(param_1 + 0xf0);
    if (pInt_1 != (int *)0x0) {
      LOCK();
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
    }
    pInt_1 = *(int **)(param_1 + 0xe8);
    if (pInt_1 != (int *)0x0) {
      LOCK();
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
    }
    pInt_1 = *(int **)(param_1 + 0x100);
    if (pInt_1 != (int *)0x0) {
      LOCK();
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
    }
    ptr2_Int_2 = (int **)(param_1 + 0x38);
    lVal_3 = 6;
    do {
      if ((ptr2_Int_2[-2] != (int *)&DAT_18083d818) && (pInt_1 = *ptr2_Int_2, pInt_1 != (int *)0x0)) {
        LOCK();
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
      }
      if ((ptr2_Int_2[-3] != (int *)0x0) && (pInt_1 = ptr2_Int_2[-1], pInt_1 != (int *)0x0)) {
        LOCK();
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
      }
      ptr2_Int_2 = ptr2_Int_2 + 4;
      lVal_3 = lVal_3 + -1;
    } while (lVal_3 != 0);
    __acrt_locale_release_lc_time_reference(*(uint64_t *)(param_1 + 0x120));
  }
  return;
}

// __acrt_free_locale
/* Library Function - Single Match
    __acrt_free_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_free_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_free_locale(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  int **ptr2_Int_3;
  
  if ((((*(uint8_t ***)(param_1 + 0xf8) != (uint8_t **)0x0) &&
       (*(uint8_t ***)(param_1 + 0xf8) != &PTR_DAT_18083d5e0)) &&
      (*(int **)(param_1 + 0xe0) != (int *)0x0)) && (**(int **)(param_1 + 0xe0) == 0)) {
    if ((*(int **)(param_1 + 0xf0) != (int *)0x0) && (**(int **)(param_1 + 0xf0) == 0)) {
      func_0x180695dd0();
      __acrt_locale_free_monetary(*(uint64_t *)(param_1 + 0xf8));
    }
    if ((*(int **)(param_1 + 0xe8) != (int *)0x0) && (**(int **)(param_1 + 0xe8) == 0)) {
      func_0x180695dd0();
      __acrt_locale_free_numeric(*(uint64_t *)(param_1 + 0xf8));
    }
    func_0x180695dd0(*(uint64_t *)(param_1 + 0xe0));
    func_0x180695dd0(*(uint64_t *)(param_1 + 0xf8));
  }
  if ((*(int **)(param_1 + 0x100) != (int *)0x0) && (**(int **)(param_1 + 0x100) == 0)) {
    func_0x180695dd0(*(int64_t *)(param_1 + 0x108) + -0xfe);
    func_0x180695dd0(*(int64_t *)(param_1 + 0x110) + -0x80);
    func_0x180695dd0(*(int64_t *)(param_1 + 0x118) + -0x80);
    func_0x180695dd0(*(uint64_t *)(param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(uint64_t *)(param_1 + 0x120));
  pU64_2 = (uint64_t *)(param_1 + 0x128);
  lVal_1 = 6;
  ptr2_Int_3 = (int **)(param_1 + 0x38);
  do {
    if (((ptr2_Int_3[-2] != (int *)&DAT_18083d818) && (*ptr2_Int_3 != (int *)0x0)) && (**ptr2_Int_3 == 0)) {
      func_0x180695dd0();
      func_0x180695dd0(*pU64_2);
    }
    if (((ptr2_Int_3[-3] != (int *)0x0) && (ptr2_Int_3[-1] != (int *)0x0)) && (*ptr2_Int_3[-1] == 0)) {
      func_0x180695dd0();
    }
    pU64_2 = pU64_2 + 1;
    ptr2_Int_3 = ptr2_Int_3 + 4;
    lVal_1 = lVal_1 + -1;
  } while (lVal_1 != 0);
  func_0x180695dd0(param_1);
  return;
}

// __acrt_locale_add_lc_time_reference
/* Library Function - Single Match
    __acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
int __acrt_locale_add_lc_time_reference(uint8_t **param_1)
{
  int *pInt_1;
  int iVal_2;
  
  if ((param_1 != (uint8_t **)0x0) && (param_1 != &PTR_DAT_1806e7370)) {
    LOCK();
    pInt_1 = (int *)((int64_t)param_1 + 0x15c);
    iVal_2 = *pInt_1;
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    return iVal_2 + 1;
  }
  return 0x7fffffff;
}

// __acrt_locale_release_lc_time_reference
/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
int __acrt_locale_release_lc_time_reference(uint8_t **param_1)
{
  int *pInt_1;
  int iVal_2;
  
  if ((param_1 != (uint8_t **)0x0) && (param_1 != &PTR_DAT_1806e7370)) {
    LOCK();
    pInt_1 = (int *)((int64_t)param_1 + 0x15c);
    iVal_2 = *pInt_1;
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    return iVal_2 + -1;
  }
  return 0x7fffffff;
}

// __acrt_locale_free_lc_time_if_unreferenced
/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_locale_free_lc_time_if_unreferenced(uint8_t **param_1)
{
  if (((param_1 != (uint8_t **)0x0) && (param_1 != &PTR_DAT_1806e7370)) &&
     (*(int *)((int64_t)param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time();
    func_0x180695dd0(param_1);
  }
  return;
}

// func_0x1806a0b9c
int64_t func_0x1806a0b9c(void)
{
  int64_t lVal_1;
  int64_t lVal_2;
  
  lVal_1 = __vcrt_getptd();
  if (((DAT_18083e070 & *(uint *)(lVal_1 + 0x3a8)) == 0) ||
     (lVal_2 = *(int64_t *)(lVal_1 + 0x90), lVal_2 == 0)) {
    FID_conflict___acrt_lock(4);
    lVal_2 = _updatetlocinfoEx_nolock((int64_t *)(lVal_1 + 0x90),DAT_180842ac0);
    FID_conflict___acrt_lock(4);
    if (lVal_2 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return lVal_2;
}

// _updatetlocinfoEx_nolock
/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
uint8_t ** _updatetlocinfoEx_nolock(int64_t *param_1,uint8_t **param_2)
{
  uint8_t **ptr2_U64_1;
  
  if ((param_2 == (uint8_t **)0x0) || (param_1 == (int64_t *)0x0)) {
    param_2 = (uint8_t **)0x0;
  }
  else {
    ptr2_U64_1 = (uint8_t **)*param_1;
    if (ptr2_U64_1 != param_2) {
      *param_1 = (int64_t)param_2;
      __acrt_add_locale_ref(param_2);
      if (((ptr2_U64_1 != (uint8_t **)0x0) &&
          (__acrt_release_locale_ref(ptr2_U64_1), *(int *)(ptr2_U64_1 + 2) == 0)) &&
         (ptr2_U64_1 != &PTR_DAT_18083d6b0)) {
        __acrt_free_locale(ptr2_U64_1);
      }
    }
  }
  return param_2;
}

// func_0x1806a0c74
uint64_t func_0x1806a0c74(short *param_1,uint *param_2,int64_t param_3)
{
  short **ptr2_Size_1;
  short **ptr2_Size_2;
  uint16_t *pU64_3;
  int iVal_4;
  uint uVal_5;
  BOOL BVar6;
  int64_t lVal_7;
  int64_t lVal_8;
  
  lVal_7 = __vcrt_getptd();
  ptr2_Size_1 = (short **)(lVal_7 + 0x98);
  *(uint32_t *)(lVal_7 + 0xa8) = 0;
  *ptr2_Size_1 = param_1;
  ptr2_Size_2 = (short **)(lVal_7 + 0xa0);
  *(uint16_t *)(lVal_7 + 0x2f0) = 0;
  *ptr2_Size_2 = param_1 + 0x40;
  if (param_1[0x40] != 0) {
    TranslateName(&PTR_u_america_1806e7cc0,0x16,ptr2_Size_2);
  }
  if (**ptr2_Size_1 == 0) {
    GetLocaleNameFromDefault(ptr2_Size_1);
LAB_1806a0d4c:
    if (*(int *)(lVal_7 + 0xa8) == 0) {
      return 0;
    }
  }
  else {
    if (**ptr2_Size_2 == 0) {
      GetLocaleNameFromLanguage();
    }
    else {
      GetLocaleNameFromLangCountry();
    }
    if (*(int *)(lVal_7 + 0xa8) == 0) {
      iVal_4 = TranslateName(&PTR_u_american_1806e78a0,0x40,ptr2_Size_1);
      if (iVal_4 != 0) {
        if (**ptr2_Size_2 == 0) {
          GetLocaleNameFromLanguage(ptr2_Size_1);
        }
        else {
          GetLocaleNameFromLangCountry();
        }
      }
      goto LAB_1806a0d4c;
    }
  }
  if (((param_1 == (short *)0x0) || (*param_1 != 0)) || (param_1[0x80] != 0)) {
    uVal_5 = func_0x1806a157c(-(uint64_t)(param_1 != (short *)0x0) & (uint64_t)(param_1 + 0x80),
                          ptr2_Size_1);
  }
  else {
    uVal_5 = GetACP();
  }
  if (((uVal_5 != 0) && (uVal_5 != 65000)) && (BVar6 = IsValidCodePage(uVal_5 & 0xffff), BVar6 != 0)) {
    if (param_2 != (uint *)0x0) {
      *param_2 = uVal_5;
    }
    if (param_3 == 0) {
      return 1;
    }
    pU64_3 = (uint16_t *)(param_3 + 0x120);
    lVal_8 = -1;
    *pU64_3 = 0;
    do {
      lVal_8 = lVal_8 + 1;
    } while (((uint16_t *)(lVal_7 + 0x2f0))[lVal_8] != 0);
    iVal_4 = func_0x1806a06c0();
    if (iVal_4 != 0) {
LAB_1806a0ed8:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVal_4 = func_0x180696d44(pU64_3,0x1001,param_3,0x40);
    if (iVal_4 != 0) {
      lVal_7 = param_3 + 0x80;
      iVal_4 = func_0x180696d44(pU64_3,0x1002,lVal_7,0x40);
      if ((iVal_4 != 0) &&
         (((lVal_8 = func_0x1806a8c90(lVal_7,0x5f), lVal_8 == 0 &&
           (lVal_8 = func_0x1806a8c90(lVal_7,0x2e), lVal_8 == 0)) ||
          (iVal_4 = func_0x180696d44(pU64_3,7,lVal_7,0x40), iVal_4 != 0)))) {
        if (uVal_5 != 0xfde9) {
          func_0x1806a8f30(uVal_5,param_3 + 0x100,0x10);
          return 1;
        }
        iVal_4 = func_0x1806a06c0();
        if (iVal_4 == 0) {
          return 1;
        }
        goto LAB_1806a0ed8;
      }
    }
  }
  return 0;
}

// TranslateName
/* Library Function - Single Match
    TranslateName
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    TranslateName
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
bool TranslateName(int64_t param_1,int param_2,int64_t *param_3)
{
  int iVal_1;
  int iVal_2;
  int iVal_3;
  
  iVal_3 = 0;
  iVal_2 = 1;
  iVal_1 = 1;
  if (-1 < param_2) {
    do {
      if (iVal_1 == 0) {
        return iVal_1 == 0;
      }
      iVal_1 = (iVal_3 + param_2) / 2;
      iVal_2 = func_0x1806967a0(*param_3,*(uint64_t *)((int64_t)iVal_1 * 0x10 + param_1));
      if (iVal_2 == 0) {
        *param_3 = param_1 + 8 + (int64_t)iVal_1 * 0x10;
      }
      else if (iVal_2 < 0) {
        param_2 = iVal_1 + -1;
      }
      else {
        iVal_3 = iVal_1 + 1;
      }
      iVal_1 = iVal_2;
    } while (iVal_3 <= param_2);
  }
  return iVal_2 == 0;
}

// GetLocaleNameFromLangCountry
/* Library Function - Single Match
    GetLocaleNameFromLangCountry
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    GetLocaleNameFromLangCountry
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void GetLocaleNameFromLangCountry(short **param_1)
{
  short sz_1;
  uint uVal_2;
  int iVal_3;
  int64_t lVal_4;
  short *pSize_5;
  int iVal_6;
  int64_t lVal_7;
  
  pSize_5 = *param_1;
  lVal_7 = -1;
  lVal_4 = -1;
  do {
    lVal_4 = lVal_4 + 1;
  } while (pSize_5[lVal_4] != 0);
  iVal_6 = 0;
  *(uint *)(param_1 + 3) = (uint)(lVal_4 == 3);
  do {
    lVal_7 = lVal_7 + 1;
  } while (param_1[1][lVal_7] != 0);
  *(uint *)((int64_t)param_1 + 0x1c) = (uint)(lVal_7 == 3);
  if (lVal_4 == 3) {
    iVal_6 = 2;
  }
  else {
    iVal_3 = 0;
    if (pSize_5 != (short *)0x0) {
      while( true ) {
        iVal_6 = iVal_3;
        sz_1 = *pSize_5;
        pSize_5 = pSize_5 + 1;
        if ((0x19 < (ushort)(sz_1 - 0x41U)) && (0x19 < (ushort)(sz_1 - 0x61U))) break;
        iVal_3 = iVal_6 + 1;
      }
    }
  }
  *(int *)((int64_t)param_1 + 0x14) = iVal_6;
  func_0x180696bac(&LAB_1806a105c,3,0);
  uVal_2 = *(uint *)(param_1 + 2);
  if ((uVal_2 >> 8 & 1) == 0 || ((uVal_2 & 7) == 0 || (uVal_2 >> 9 & 1) == 0)) {
    *(uint32_t *)(param_1 + 2) = 0;
  }
  return;
}

// GetLocaleNameFromLanguage
/* Library Function - Single Match
    GetLocaleNameFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    GetLocaleNameFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void GetLocaleNameFromLanguage(short **param_1)
{
  short sz_1;
  int iVal_2;
  short *pSize_3;
  int iVal_4;
  int64_t lVal_5;
  
  pSize_3 = *param_1;
  lVal_5 = -1;
  do {
    lVal_5 = lVal_5 + 1;
  } while (pSize_3[lVal_5] != 0);
  iVal_4 = 0;
  *(uint *)(param_1 + 3) = (uint)(lVal_5 == 3);
  if (lVal_5 == 3) {
    iVal_4 = 2;
  }
  else {
    iVal_2 = 0;
    if (pSize_3 != (short *)0x0) {
      while( true ) {
        iVal_4 = iVal_2;
        sz_1 = *pSize_3;
        pSize_3 = pSize_3 + 1;
        if ((0x19 < (ushort)(sz_1 - 0x41U)) && (0x19 < (ushort)(sz_1 - 0x61U))) break;
        iVal_2 = iVal_4 + 1;
      }
    }
  }
  *(int *)((int64_t)param_1 + 0x14) = iVal_4;
  func_0x180696bac(&LAB_1806a13e8,3,0);
  if ((*(byte *)(param_1 + 2) & 4) == 0) {
    *(uint32_t *)(param_1 + 2) = 0;
  }
  return;
}

// GetLocaleNameFromDefault
/* Library Function - Single Match
    GetLocaleNameFromDefault
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    GetLocaleNameFromDefault
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void GetLocaleNameFromDefault(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  uint8_t auStackY_f8 [32];
  short local_c8 [88];
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStackY_f8;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x104;
  iVal_1 = func_0x180696e90(local_c8,0x55);
  if (1 < iVal_1) {
    lVal_2 = -1;
    do {
      lVal_2 = lVal_2 + 1;
    } while (local_c8[lVal_2] != 0);
    iVal_1 = func_0x1806a06c0();
    if (iVal_1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  func_0x180673080(local_18 ^ (uint64_t)auStackY_f8);
  return;
}

// func_0x1806a157c
uint64_t func_0x1806a157c(short *param_1,int64_t param_2)
{
  int iVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  if (((param_1 == (short *)0x0) || (*param_1 == 0)) ||
     (iVal_1 = func_0x1806a9090(param_1,&DAT_180764610), iVal_1 == 0)) {
    uVal_3 = 0x20001004;
  }
  else {
    iVal_1 = func_0x1806967a0(param_1,L"utf8");
    if (iVal_1 == 0) {
      return 0xfde9;
    }
    iVal_1 = func_0x1806967a0(param_1,L"utf-8");
    if (iVal_1 == 0) {
      return 0xfde9;
    }
    iVal_1 = func_0x1806a9090(param_1,&DAT_180764608);
    if (iVal_1 != 0) {
      uVal_2 = func_0x1806891f4(param_1);
      return uVal_2;
    }
    uVal_3 = 0x2000000b;
  }
  uVal_2 = func_0x180696d44(param_2 + 600,uVal_3,local_res8,2);
  if ((int)uVal_2 == 0) {
    return uVal_2;
  }
  if ((int)local_res8[0] < 3) {
    return 0xfde9;
  }
  return (uint64_t)local_res8[0];
}

// func_0x1806a163c
void func_0x1806a163c(wchar_t *param_1)
{
  int iVal_1;
  uint8_t auStack_48 [32];
  wchar_t local_28 [12];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  iVal_1 = func_0x180696d44(param_1,0x59,local_28);
  if (iVal_1 != 0) {
    wcsncmp(local_28,param_1,9);
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_48);
  return;
}

// func_0x1806a16a8
void func_0x1806a16a8(int64_t param_1,uint *param_2,LPWSTR param_3)
{
  short **ptr2_Size_1;
  short *pSize_2;
  uint64_t uVal_3;
  char ch_4;
  uint uVal_5;
  BOOL BVar6;
  int iVal_7;
  int64_t lVal_8;
  int64_t lVal_9;
  int64_t lVal_10;
  uint8_t auStack_78 [32];
  uint64_t local_58;
  LCID local_50;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  lVal_8 = __vcrt_getptd();
  local_58 = 0;
  local_50 = 0;
  lVal_9 = __vcrt_getptd();
  ptr2_Size_1 = (short **)(lVal_8 + 0xa0);
  *(uint64_t **)(lVal_9 + 0x3a0) = &local_58;
  pSize_2 = (short *)(param_1 + 0x80);
  *(int64_t *)(lVal_8 + 0x98) = param_1;
  *ptr2_Size_1 = pSize_2;
  if ((pSize_2 != (short *)0x0) && (*pSize_2 != 0)) {
    func_0x1806a1928(&PTR_u_america_1806e7cc0,(int)DAT_1806e7e30 + -1,ptr2_Size_1);
  }
  uVal_3 = local_58;
  local_58 = local_58 & 0xffffffff00000000;
  if ((*(short **)(lVal_8 + 0x98) == (short *)0x0) || (**(short **)(lVal_8 + 0x98) == 0)) {
    if ((*ptr2_Size_1 == (short *)0x0) || (**ptr2_Size_1 == 0)) {
      local_58._4_4_ = SUB84(uVal_3,4);
      local_58 = CONCAT44(local_58._4_4_,0x104);
      local_50 = GetUserDefaultLCID();
      local_58 = CONCAT44(local_50,(int)local_58);
    }
    else {
      lVal_9 = __vcrt_getptd();
      lVal_10 = -1;
      do {
        lVal_10 = lVal_10 + 1;
      } while (*(short *)(*(int64_t *)(lVal_9 + 0xa0) + lVal_10 * 2) != 0);
      *(uint *)(lVal_9 + 0xb4) = (uint)(lVal_10 == 3);
      EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1806a1e64,1);
      if ((local_58 & 4) == 0) {
        local_58 = local_58 & 0xffffffff00000000;
      }
    }
LAB_1806a1826:
    if ((int)local_58 == 0) goto LAB_1806a190d;
  }
  else {
    if ((*ptr2_Size_1 == (short *)0x0) || (**ptr2_Size_1 == 0)) {
      GetLcidFromLanguage(&local_58);
    }
    else {
      GetLcidFromLangCountry(&local_58);
    }
    if ((int)local_58 == 0) {
      ch_4 = func_0x1806a1928(&PTR_u_american_1806e78a0,(int)DAT_1806e7cb0 + -1,lVal_8 + 0x98);
      if (ch_4 != '\0') {
        if ((*ptr2_Size_1 == (short *)0x0) || (**ptr2_Size_1 == 0)) {
          GetLcidFromLanguage(&local_58);
        }
        else {
          GetLcidFromLangCountry(&local_58);
        }
      }
      goto LAB_1806a1826;
    }
  }
  uVal_5 = func_0x1806a1f4c(-(uint64_t)(param_1 != 0) & param_1 + 0x100U,&local_58);
  if ((uVal_5 != 0) && (BVar6 = IsValidCodePage(uVal_5 & 0xffff), BVar6 != 0)) {
    BVar6 = IsValidLocale(local_58._4_4_,1);
    if (BVar6 != 0) {
      if (param_2 != (uint *)0x0) {
        *param_2 = uVal_5;
      }
      func_0x180697064(local_58._4_4_,lVal_8 + 0x2f0,0x55);
      if (param_3 != (LPWSTR)0x0) {
        func_0x180697064(local_58._4_4_,param_3 + 0x90,0x55,0);
        iVal_7 = GetLocaleInfoW(local_58._4_4_,0x1001,param_3,0x40);
        if ((iVal_7 != 0) &&
           (iVal_7 = GetLocaleInfoW(local_50,0x1002,param_3 + 0x40,0x40), iVal_7 != 0)) {
          func_0x1806a8f30(uVal_5,param_3 + 0x80,0x10,10);
        }
      }
    }
  }
LAB_1806a190d:
  func_0x180673080(local_48 ^ (uint64_t)auStack_78);
  return;
}

// func_0x1806a1928
uint64_t func_0x1806a1928(int64_t param_1,int param_2,int64_t *param_3)
{
  int iVal_1;
  int iVal_2;
  uint64_t in_RAX;
  int64_t lVal_3;
  int iVal_4;
  int iVal_5;
  
  iVal_5 = 0;
  if (-1 < param_2) {
    do {
      iVal_1 = (iVal_5 + param_2) / 2;
      in_RAX = func_0x1806967a0(*param_3,*(uint64_t *)((int64_t)iVal_1 * 0x10 + param_1));
      iVal_2 = (int)in_RAX;
      if (iVal_2 == 0) {
        lVal_3 = param_1 + 8 + (int64_t)iVal_1 * 0x10;
        *param_3 = lVal_3;
        return CONCAT71((int7)((uint64_t)lVal_3 >> 8),1);
      }
      iVal_4 = iVal_1 + -1;
      if (-1 < iVal_2) {
        iVal_4 = param_2;
      }
      if (-1 < iVal_2) {
        iVal_5 = iVal_1 + 1;
      }
      param_2 = iVal_4;
    } while (iVal_5 <= iVal_4);
  }
  return in_RAX & 0xffffffffffffff00;
}

// GetLcidFromLangCountry
/* Library Function - Single Match
    GetLcidFromLangCountry
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    GetLcidFromLangCountry
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void GetLcidFromLangCountry(uint *param_1)
{
  short sz_1;
  uint uVal_2;
  int64_t lVal_3;
  short *pSize_4;
  int iVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  int iVal_8;
  
  lVal_3 = __vcrt_getptd();
  lVal_6 = -1;
  lVal_7 = -1;
  iVal_8 = 0;
  do {
    lVal_7 = lVal_7 + 1;
  } while ((*(short **)(lVal_3 + 0x98))[lVal_7] != 0);
  *(uint *)(lVal_3 + 0xb0) = (uint)(lVal_7 == 3);
  do {
    lVal_6 = lVal_6 + 1;
  } while (*(short *)(*(int64_t *)(lVal_3 + 0xa0) + lVal_6 * 2) != 0);
  *(uint *)(lVal_3 + 0xb4) = (uint)(lVal_6 == 3);
  param_1[1] = 0;
  iVal_5 = 2;
  if (*(int *)(lVal_3 + 0xb0) == 0) {
    pSize_4 = *(short **)(lVal_3 + 0x98);
    while( true ) {
      sz_1 = *pSize_4;
      pSize_4 = pSize_4 + 1;
      if ((0x19 < (ushort)(sz_1 - 0x41U)) && (iVal_5 = iVal_8, 0x19 < (ushort)(sz_1 - 0x61U)))
      break;
      iVal_8 = iVal_8 + 1;
    }
  }
  *(int *)(lVal_3 + 0xac) = iVal_5;
  EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1806a1a80,1);
  uVal_2 = *param_1;
  if ((uVal_2 >> 8 & 1) == 0 || ((uVal_2 & 7) == 0 || (uVal_2 >> 9 & 1) == 0)) {
    *param_1 = 0;
  }
  return;
}

// GetLcidFromLanguage
/* Library Function - Single Match
    GetLcidFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    GetLcidFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void GetLcidFromLanguage(uint32_t *param_1)
{
  short sz_1;
  int64_t lVal_2;
  int iVal_3;
  short *pSize_4;
  int64_t lVal_5;
  int iVal_6;
  
  lVal_2 = __vcrt_getptd();
  lVal_5 = -1;
  iVal_6 = 0;
  pSize_4 = *(short **)(lVal_2 + 0x98);
  do {
    lVal_5 = lVal_5 + 1;
  } while (pSize_4[lVal_5] != 0);
  *(uint *)(lVal_2 + 0xb0) = (uint)(lVal_5 == 3);
  iVal_3 = 2;
  if (lVal_5 != 3) {
    while( true ) {
      sz_1 = *pSize_4;
      pSize_4 = pSize_4 + 1;
      if ((0x19 < (ushort)(sz_1 - 0x41U)) && (iVal_3 = iVal_6, 0x19 < (ushort)(sz_1 - 0x61U)))
      break;
      iVal_6 = iVal_6 + 1;
    }
  }
  *(int *)(lVal_2 + 0xac) = iVal_3;
  EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1806a1d5c,1);
  if ((*(byte *)param_1 & 4) == 0) {
    *param_1 = 0;
  }
  return;
}

// func_0x1806a1f4c
UINT func_0x1806a1f4c(short *param_1,int64_t param_2)
{
  int iVal_1;
  UINT UVar2;
  UINT local_res8 [2];
  
  local_res8[0] = 0;
  if (((param_1 == (short *)0x0) || (*param_1 == 0)) ||
     (iVal_1 = func_0x1806a9090(param_1,&DAT_180764610), iVal_1 == 0)) {
    iVal_1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x20001004,(LPWSTR)local_res8,2);
    if (iVal_1 != 0) {
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      UVar2 = GetACP();
      return UVar2;
    }
  }
  else {
    iVal_1 = func_0x1806a9090(param_1,&DAT_180764608);
    if (iVal_1 != 0) {
      UVar2 = func_0x1806891f4(param_1);
      return UVar2;
    }
    iVal_1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x2000000b,(LPWSTR)local_res8,2);
    if (iVal_1 != 0) {
      return local_res8[0];
    }
  }
  return 0;
}

// func_0x1806a2000
bool func_0x1806a2000(uint param_1,int param_2)
{
  short sz_1;
  short *pSize_2;
  int iVal_3;
  int64_t lVal_4;
  short *pSize_5;
  int iVal_6;
  bool bFlag_7;
  uint local_res8 [2];
  
  iVal_6 = 0;
  local_res8[0] = 0;
  lVal_4 = __vcrt_getptd();
  iVal_3 = GetLocaleInfoW(param_1 & 0x3ff | 0x400,0x20000001,(LPWSTR)local_res8,2);
  if (iVal_3 == 0) {
    bFlag_7 = false;
  }
  else if ((param_1 == local_res8[0]) || (param_2 == 0)) {
    bFlag_7 = true;
  }
  else {
    pSize_2 = *(short **)(lVal_4 + 0x98);
    sz_1 = *pSize_2;
    pSize_5 = pSize_2;
    while ((pSize_5 = pSize_5 + 1, (ushort)(sz_1 - 0x41U) < 0x1a || ((ushort)(sz_1 - 0x61U) < 0x1a))
          ) {
      iVal_6 = iVal_6 + 1;
      sz_1 = *pSize_5;
    }
    lVal_4 = -1;
    do {
      lVal_4 = lVal_4 + 1;
    } while (pSize_2[lVal_4] != 0);
    bFlag_7 = iVal_6 != (int)lVal_4;
  }
  return bFlag_7;
}

// func_0x1806a20bc
int func_0x1806a20bc(ushort *param_1)
{
  short sz_1;
  ushort uVal_2;
  ushort uVal_3;
  int iVal_4;
  
  uVal_3 = *param_1;
  param_1 = param_1 + 1;
  iVal_4 = 0;
  do {
    if (uVal_3 == 0) {
      return iVal_4;
    }
    if ((ushort)(uVal_3 - 0x61) < 6) {
      sz_1 = -0x27;
LAB_1806a20e9:
      uVal_2 = uVal_3 + sz_1;
    }
    else {
      uVal_2 = uVal_3;
      if ((ushort)(uVal_3 - 0x41) < 6) {
        sz_1 = -7;
        goto LAB_1806a20e9;
      }
    }
    uVal_3 = *param_1;
    iVal_4 = iVal_4 * 0x10 + -0x30 + (uint)uVal_2;
    param_1 = param_1 + 1;
  } while( true );
}

// func_0x1806a2340
uint32_t func_0x1806a2340(void)
{
  return MXCSR;
}

// func_0x1806a2350
void func_0x1806a2350(uint32_t param_1)
{
  MXCSR = param_1;
  return;
}

// func_0x1806a2360
uint func_0x1806a2360(void)
{
  uint uVal_1;
  
  uVal_1 = MXCSR;
  MXCSR = MXCSR & 0xffffffc0;
  return uVal_1 & 0x3f;
}

// func_0x1806a2380
uint func_0x1806a2380(uint param_1,uint param_2)
{
  uint uVal_1;
  
  uVal_1 = MXCSR;
  MXCSR = (~param_2 | 0xffff807f) & MXCSR | param_1 & param_2;
  if ((DAT_18083e074 != '\0') && ((MXCSR & 0x40) != 0)) {
    return uVal_1;
  }
  MXCSR = MXCSR & 0xffffffbf;
  return uVal_1;
}

// func_0x1806a2400
uint func_0x1806a2400(void)
{
  return MXCSR & 0x3f;
}

// func_0x1806a2410
void func_0x1806a2410(uint param_1)
{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}

// func_0x1806a2430
uint func_0x1806a2430(uint param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  uint uVal_2;
  uint64_t uVal_3;
  
  uVal_3 = 0;
  uVal_2 = param_1 & 0x1f;
  if (param_1 == 0) {
    uVal_2 = 0;
  }
  else {
    uVal_1 = func_0x1806a2340();
    *param_2 = uVal_1;
    if (((param_1 & 8) == 0) || (-1 < (char)uVal_1)) {
      if (((param_1 & 4) == 0) || ((uVal_1 >> 9 & 1) == 0)) {
        if (((param_1 & 1) == 0) || ((uVal_1 >> 10 & 1) == 0)) {
          if (((param_1 & 2) != 0) && ((uVal_1 >> 0xb & 1) != 0)) {
            uVal_2 = param_1 & 0x1d;
            uVal_3 = (uint64_t)(param_1 & 0x10);
          }
        }
        else {
          uVal_3 = 8;
          uVal_2 = param_1 & 0x1e;
        }
      }
      else {
        uVal_3 = 4;
        uVal_2 = param_1 & 0x1b;
      }
    }
    else {
      uVal_3 = 1;
      uVal_2 = param_1 & 0x17;
    }
    if (((param_1 & 0x10) != 0) && ((uVal_1 >> 0xc & 1) != 0)) {
      uVal_3 = uVal_3 | 0x20;
      uVal_2 = uVal_2 & 0xffffffef;
    }
    if (uVal_2 != 0) {
      func_0x1806a2380(0x1f80,0xffc0);
    }
    if ((uVal_3 != 0) && ((uVal_3 & ~uVal_1) != 0)) {
      if (uVal_2 == 0) {
        func_0x1806a2350(uVal_1 | uVal_3);
      }
      else {
        func_0x1806a2410(uVal_3);
      }
    }
  }
  return uVal_2;
}

// func_0x1806a2540
uint func_0x1806a2540(uint param_1)
{
  return param_1 | 0x400000;
}

// func_0x1806a2550
void func_0x1806a2550(uint64_t param_1,uint32_t param_2,float param_3,int param_4, uint32_t param_5,uint64_t param_6,float param_7,float param_8,int param_9)
{
  char ch_1;
  int iVal_2;
  float fVal_3;
  uint8_t auStack_128 [32];
  uint32_t *local_108;
  float *local_100;
  float local_f8 [2];
  uint64_t local_f0;
  int local_e8;
  uint32_t local_e4;
  uint64_t local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint8_t local_58 [16];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_128;
  local_f0 = 0;
  local_f8[0] = param_3;
  iVal_2 = func_0x1806a2430(param_5,&local_f0);
  fVal_3 = param_8;
  if (iVal_2 != 0) {
    local_b8 = ZEXT816(0);
    local_a8 = ZEXT816(0);
    local_98 = ZEXT816(0);
    local_88 = ZEXT816(0);
    local_78 = ZEXT816(0);
    local_68 = ZEXT816(0);
    local_58 = ZEXT816(0);
    if (param_9 == 2) {
      local_88._0_4_ = param_8;
      local_78._0_4_ = 1;
    }
    local_100 = local_f8;
    local_108 = &param_7;
    func_0x1806a3bf0(local_b8,&local_f0,param_5,param_2);
  }
  ch_1 = func_0x180699ca0();
  if ((ch_1 == '\0') || (param_4 == 0)) {
    func_0x1806a3830(param_4);
    fVal_3 = local_f8[0];
  }
  else {
    local_d8 = (double)param_7;
    local_e4 = 0;
    local_d0 = (double)fVal_3;
    local_c8 = (double)local_f8[0];
    local_e8 = param_4;
    local_e0 = param_1;
    iVal_2 = func_0x180699cc0(&local_e8);
    if (iVal_2 == 0) {
      func_0x1806a3830(param_4);
    }
    fVal_3 = (float)local_c8;
  }
  func_0x180673080(fVal_3);
  return;
}

// func_0x1806a2690
uint64_t func_0x1806a2690(uint64_t param_1)
{
  return param_1 | 0x8000000000000;
}

// func_0x1806a26b0
void func_0x1806a26b0(uint64_t param_1,uint32_t param_2,uint64_t param_3,int param_4, uint32_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8, int param_9)
{
  uint64_t uVal_1;
  char ch_2;
  int iVal_3;
  uint32_t uVal_4;
  uint8_t auStack_128 [32];
  uint64_t *local_108;
  uint64_t *local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  int local_e8;
  uint32_t local_e4;
  uint64_t local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint8_t local_58 [16];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_128;
  local_f0 = 0;
  local_f8 = param_3;
  iVal_3 = func_0x1806a2430(param_5,&local_f0);
  uVal_1 = param_8;
  if (iVal_3 != 0) {
    local_b8 = ZEXT816(0);
    local_a8 = ZEXT816(0);
    local_98 = ZEXT816(0);
    local_88 = ZEXT816(0);
    local_78 = ZEXT816(0);
    local_68 = ZEXT816(0);
    local_58 = ZEXT816(0);
    if (param_9 == 2) {
      local_88._8_8_ = 0;
      local_88._0_8_ = param_8;
      local_78._0_4_ = 3;
    }
    local_100 = &local_f8;
    local_108 = &param_7;
    func_0x1806a3c20(local_b8,&local_f0,param_5,param_2);
  }
  ch_2 = func_0x180699ca0();
  if ((ch_2 == '\0') || (param_4 == 0)) {
    func_0x1806a3830(param_4);
    uVal_4 = (uint32_t)local_f8;
  }
  else {
    local_d8 = param_7;
    local_c8 = local_f8;
    local_e4 = 0;
    local_d0 = uVal_1;
    local_e8 = param_4;
    local_e0 = param_1;
    iVal_3 = func_0x180699cc0(&local_e8);
    if (iVal_3 == 0) {
      func_0x1806a3830(param_4);
    }
    uVal_4 = (uint32_t)local_c8;
  }
  func_0x180673080(uVal_4);
  return;
}

// iswctype
/* Library Function - Single Match
    iswctype
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    iswctype
   
   Library: Visual Studio 2019 Release */
int __cdecl iswctype(wint_t _C,wctype_t _Type)
{
  uint uVal_1;
  BOOL BVar2;
  ushort local_res8 [4];
  WCHAR local_res18 [8];
  
  if (_C == 0xffff) {
LAB_1806a2ceb:
    uVal_1 = 0;
  }
  else {
    if (_C < 0x100) {
      local_res8[0] = *(ushort *)(PTR_DAT_18083d5c0 + (uint64_t)_C * 2);
    }
    else {
      local_res8[0] = 0;
      local_res18[0] = _C;
      BVar2 = GetStringTypeW(1,local_res18,1,local_res8);
      if (BVar2 == 0) goto LAB_1806a2ceb;
    }
    uVal_1 = (uint)(local_res8[0] & _Type);
  }
  return uVal_1;
}

// _isctype_l
/* Library Function - Single Match
    _isctype_l
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    _isctype_l
   
   Library: Visual Studio 2019 Release */
int __cdecl _isctype_l(int _C,int _Type,_locale_t _Locale)
{
  int iVal_1;
  uint64_t uVal_2;
  uint8_t auStack_88 [32];
  uint32_t *local_68;
  uint32_t local_60;
  uint32_t local_58;
  uint8_t local_48;
  uint8_t local_47;
  uint8_t local_46;
  int64_t local_40;
  int64_t *local_38 [2];
  char local_28;
  uint32_t local_20;
  uint16_t local_1c;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,(__crt_locale_pointers *)_Locale);
  if (0x100 < _C + 1U) {
    if (*(short *)(*local_38[0] + (uint64_t)(_C >> 8 & 0xff) * 2) < 0) {
      uVal_2 = 2;
      local_46 = 0;
      local_48 = (char)((uint)_C >> 8);
      local_47 = (char)_C;
    }
    else {
      uVal_2 = 1;
      local_47 = 0;
      local_48 = (char)_C;
    }
    local_58 = 1;
    local_20 = 0;
    local_1c = 0;
    local_60 = *(uint32_t *)((int64_t)local_38[0] + 0xc);
    local_68 = &local_20;
    iVal_1 = func_0x18069880c(local_38,1,&local_48,uVal_2);
    if (iVal_1 == 0) {
      if (local_28 != '\0') {
        *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
      }
      goto LAB_1806a2ddb;
    }
  }
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
LAB_1806a2ddb:
  iVal_1 = func_0x180673080(local_18 ^ (uint64_t)auStack_88);
  return iVal_1;
}

// __remainder_piby2_fma3
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __remainder_piby2_fma3
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __remainder_piby2_fma3
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */
uint64_t __remainder_piby2_fma3(void)
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  bool bFlag_8;
  bool bFlag_9;
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  uint8_t auArr_12 [16];
  uint8_t auArr_13 [16];
  uint8_t auArr_14 [16];
  uint8_t auArr_15 [16];
  uint64_t uVal_16;
  uint64_t uVal_17;
  sbyte sz_18;
  byte bFlag_19;
  uint64_t uVal_20;
  int64_t lVal_21;
  int64_t lVal_22;
  uint64_t uVal_23;
  uint64_t uVal_24;
  int64_t lVal_25;
  uint64_t uVal_26;
  uint64_t uVal_27;
  uint64_t uVal_28;
  uint8_t auArr_29 [16];
  uint8_t in_YMM0 [32];
  
  uVal_27 = vmovq_avx(in_YMM0._0_16_);
  uVal_28 = (uVal_27 >> 0x34) - 0x3ff;
  lVal_25 = -((uVal_28 >> 3) - 0x86);
  uVal_20 = uVal_27 & 0xfffffffffffff | 0x10000000000000;
  auArr_14 = vmovdqu_avx(*(uint8_t (*)[16])(&UNK_1806e9658 + lVal_25));
  auArr_29._8_8_ = 0;
  auArr_29._0_8_ = *(uint64_t *)(&DAT_1806e9650 + lVal_25);
  auArr_11._8_8_ = 0;
  auArr_11._0_8_ = uVal_20;
  auArr_15._8_8_ = 0;
  auArr_15._0_8_ = SUB168(auArr_29 * auArr_11,8);
  uVal_27 = SUB168(auArr_29 * auArr_11,0);
  uVal_16 = vmovq_avx(auArr_14);
  auArr_10._8_8_ = 0;
  auArr_10._0_8_ = uVal_16;
  auArr_12._8_8_ = 0;
  auArr_12._0_8_ = uVal_20;
  uVal_28 = uVal_28 & 7;
  auArr_29 = vpsrldq_avx(auArr_14,8);
  auArr_15 = auArr_10 * auArr_12 + auArr_15;
  uVal_16 = auArr_15._0_8_;
  uVal_17 = vmovq_avx(auArr_29);
  auArr_14._8_8_ = 0;
  auArr_14._0_8_ = uVal_17;
  auArr_13._8_8_ = 0;
  auArr_13._0_8_ = uVal_20;
  uVal_26 = auArr_15._8_8_ + SUB168(auArr_14 * auArr_13,0);
  uVal_20 = 0;
  bFlag_19 = (byte)(0x36 - uVal_28) & 0x3f;
  uVal_17 = uVal_26 >> bFlag_19;
  bFlag_8 = (0x36 - uVal_28 & 0x3f) != 0;
  bFlag_9 = (uVal_26 >> bFlag_19 - 1 & 1) != 0;
  if (bFlag_8 && bFlag_9) {
    uVal_26 = ~uVal_26;
    uVal_16 = ~uVal_16;
    uVal_27 = ~uVal_27;
    uVal_20 = 0x8000000000000000;
  }
  sz_18 = (char)uVal_28 + 10;
  uVal_26 = (uVal_26 << sz_18) >> sz_18;
  lVal_21 = uVal_28 - 0x36;
  lVal_25 = 0x3f;
  if (uVal_26 != 0) {
    for (; uVal_26 >> lVal_25 == 0; lVal_25 = lVal_25 + -1) {
    }
  }
  uVal_23 = uVal_27;
  uVal_24 = uVal_16;
  if (uVal_26 == 0) {
    uVal_23 = 0;
    lVal_25 = 0x3f;
    if (uVal_16 != 0) {
      for (; uVal_16 >> lVal_25 == 0; lVal_25 = lVal_25 + -1) {
      }
    }
    lVal_21 = uVal_28 - 0x76;
    uVal_24 = uVal_27;
    uVal_26 = uVal_16;
  }
  lVal_22 = lVal_25 + -0x34;
  bFlag_19 = (byte)lVal_22;
  if (lVal_22 < 0) {
    bFlag_19 = -bFlag_19;
    uVal_27 = uVal_26 << (bFlag_19 & 0x3f) | uVal_24 >> (-(bFlag_19 - 0x40) & 0x3f);
    uVal_24 = uVal_24 << (bFlag_19 & 0x3f) | uVal_23 >> (-(bFlag_19 - 0x40) & 0x3f);
  }
  else {
    uVal_27 = uVal_26;
    if (lVal_22 != 0) {
      uVal_27 = uVal_26 >> (bFlag_19 & 0x3f);
      uVal_24 = uVal_24 >> (bFlag_19 & 0x3f) | uVal_26 << (-(bFlag_19 - 0x40) & 0x3f);
    }
  }
  lVal_21 = lVal_21 + lVal_25 + 0x3ff;
  auArr_29 = vmovq_avx(uVal_27 & 0xffefffffffffffff | uVal_20 | lVal_21 << 0x34);
  lVal_25 = 0x3f;
  if (uVal_24 != 0) {
    for (; uVal_24 >> lVal_25 == 0; lVal_25 = lVal_25 + -1) {
    }
  }
  auArr_14 = vmovq_avx((uVal_24 << ((byte)-(lVal_25 + -0x40) & 0x3f)) >> 0xc | uVal_20 |
                      lVal_21 - (-(lVal_25 + -0x40) + 0x34) << 0x34);
  auArr_10 = vandpd_avx(auArr_29,_DAT_1806e8870);
  auArr_13 = vsubsd_avx(auArr_29,auArr_10);
  auArr_1._8_8_ = 0;
  auArr_1._0_8_ = DAT_1806e8860;
  auArr_11 = vmulsd_avx(auArr_29,auArr_1);
  auArr_2._8_8_ = 0;
  auArr_2._0_8_ = DAT_1806e8880;
  auArr_12 = vmulsd_avx(auArr_10,auArr_2);
  auArr_12 = vsubsd_avx(auArr_12,auArr_11);
  auArr_3._8_8_ = 0;
  auArr_3._0_8_ = DAT_1806e8880;
  auArr_12 = vfmadd231sd_fma(auArr_12,auArr_13,auArr_3);
  auArr_4._8_8_ = 0;
  auArr_4._0_8_ = DAT_1806e8890;
  auArr_10 = vfmadd231sd_fma(auArr_12,auArr_10,auArr_4);
  auArr_5._8_8_ = 0;
  auArr_5._0_8_ = DAT_1806e8890;
  auArr_12 = vfmadd231sd_fma(auArr_10,auArr_13,auArr_5);
  auArr_6._8_8_ = 0;
  auArr_6._0_8_ = DAT_1806e8860;
  auArr_10 = vmulsd_avx(auArr_14,auArr_6);
  auArr_7._8_8_ = 0;
  auArr_7._0_8_ = DAT_1806e88a0;
  auArr_29 = vfmadd231sd_fma(auArr_10,auArr_29,auArr_7);
  auArr_29 = vaddsd_avx(auArr_12,auArr_29);
  auArr_10 = vaddsd_avx(auArr_11,auArr_29);
  auArr_10 = vsubsd_avx(auArr_11,auArr_10);
  vaddsd_avx(auArr_10,auArr_29);
  return uVal_17 + (bFlag_8 && bFlag_9) & 3;
}

// __remainder_piby2_fma3_bdl
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __remainder_piby2_fma3_bdl
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __remainder_piby2_fma3_bdl
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */
uint64_t __remainder_piby2_fma3_bdl(void)
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint64_t uVal_8;
  uint8_t in_YMM0 [32];
  
  auArr_7._8_8_ = _UNK_1806e8998;
  auArr_7._0_8_ = DAT_1806e8990;
  auArr_1._8_8_ = 0;
  auArr_1._0_8_ = DAT_1806e8970;
  auArr_1 = vfmadd132sd_fma(in_YMM0._0_16_,_DAT_1806e89b0,auArr_1);
  auArr_3 = vsubsd_avx(auArr_1,_DAT_1806e89b0);
  auArr_1 = vcvttpd2dq_avx(auArr_3);
  uVal_8 = vmovq_avx(auArr_1);
  auArr_2._8_8_ = 0;
  auArr_2._0_8_ = DAT_1806e8980;
  auArr_6 = vfnmadd132sd_fma(auArr_3,in_YMM0._0_16_,auArr_2);
  auArr_1 = vmulsd_avx(auArr_3,auArr_7);
  auArr_5 = vfmsub213sd_fma(auArr_3,auArr_7,auArr_1);
  auArr_2 = vsubsd_avx(auArr_6,auArr_1);
  auArr_4 = vsubsd_avx(auArr_6,auArr_2);
  auArr_1 = vsubsd_avx(auArr_4,auArr_1);
  auArr_4._8_8_ = 0;
  auArr_4._0_8_ = DAT_1806e8990;
  auArr_4 = vfnmadd231sd_fma(auArr_6,auArr_3,auArr_4);
  auArr_2 = vsubsd_avx(auArr_2,auArr_4);
  auArr_1 = vaddsd_avx(auArr_2,auArr_1);
  auArr_1 = vsubsd_avx(auArr_1,auArr_5);
  auArr_5._8_8_ = 0;
  auArr_5._0_8_ = DAT_1806e89a0;
  vfnmadd132sd_fma(auArr_3,auArr_1,auArr_5);
  return uVal_8 & 3;
}

// func_0x1806a3070
void func_0x1806a3070(uint param_1)
{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    func_0x1806a2550(&DAT_180761644,0x1e,0xffc00000,1,8,0x21);
    return;
  }
  return;
}

// func_0x1806a3100
void func_0x1806a3100(uint param_1)
{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    func_0x1806a2550(&DAT_180761634,0x12,0xffc00000,1,8,0x21);
    return;
  }
  return;
}

// __remainder_piby2d2f_forAsm
/* Library Function - Single Match
    __remainder_piby2d2f_forAsm
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */
/* Library Function - Single Match
    __remainder_piby2d2f_forAsm
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */
uint64_t __remainder_piby2d2f_forAsm(uint64_t param_1)
{
  bool bFlag_1;
  bool bFlag_2;
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  byte bFlag_7;
  uint8_t auArr_8 [16];
  uint64_t uVal_9;
  sbyte sz_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  
  uVal_15 = (param_1 >> 0x34) - 0x3ff;
  lVal_13 = -((uVal_15 >> 3) - 0x86);
  uVal_11 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auArr_3._8_8_ = 0;
  auArr_3._0_8_ = *(uint64_t *)(&DAT_1806e9650 + lVal_13);
  auArr_5._8_8_ = 0;
  auArr_5._0_8_ = uVal_11;
  auArr_8._8_8_ = 0;
  auArr_8._0_8_ = SUB168(auArr_3 * auArr_5,8);
  auArr_4._8_8_ = 0;
  auArr_4._0_8_ = *(uint64_t *)(&UNK_1806e9658 + lVal_13);
  auArr_6._8_8_ = 0;
  auArr_6._0_8_ = uVal_11;
  uVal_15 = uVal_15 & 7;
  auArr_8 = auArr_4 * auArr_6 + auArr_8;
  uVal_9 = auArr_8._0_8_;
  uVal_14 = auArr_8._8_8_ + *(int64_t *)(&UNK_1806e9660 + lVal_13) * uVal_11;
  uVal_12 = 0x36 - uVal_15;
  bFlag_7 = (byte)uVal_12 & 0x3f;
  uVal_11 = uVal_14 >> bFlag_7;
  bFlag_1 = (uVal_12 & 0x3f) != 0;
  bFlag_2 = (uVal_14 >> bFlag_7 - 1 & 1) != 0;
  if (bFlag_1 && bFlag_2) {
    uVal_14 = ~uVal_14;
    uVal_9 = ~uVal_9;
  }
  sz_10 = (char)uVal_15 + 10;
  uVal_12 = (uVal_14 << sz_10) >> sz_10;
  lVal_13 = 0x3f;
  if (uVal_12 != 0) {
    for (; uVal_12 >> lVal_13 == 0; lVal_13 = lVal_13 + -1) {
    }
  }
  if ((uVal_12 == 0) && (lVal_13 = 0x3f, uVal_9 != 0)) {
    for (; uVal_9 >> lVal_13 == 0; lVal_13 = lVal_13 + -1) {
    }
  }
  return uVal_11 + (bFlag_1 && bFlag_2) & 3;
}

// _commit
/* Library Function - Single Match
    _commit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _commit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
int __cdecl _commit(int _FileHandle)
{
  int iVal_1;
  uint32_t *pU64_2;
  int local_res8 [2];
  uint8_t local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_180843080)) &&
       ((*(byte *)((&DAT_180842c80)[(int64_t)_FileHandle >> 6] + 0x38 +
                  (uint64_t)(_FileHandle & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      iVal_1 = func_0x1806a3374(local_res10,local_res20,local_18,local_res18);
      return iVal_1;
    }
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 9;
    func_0x180684970();
  }
  return -1;
}

// func_0x1806a3374
uint64_t func_0x1806a3374(uint64_t param_1,uint32_t *param_2,uint **param_3,uint32_t *param_4)
{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hFile;
  DWORD *pD_3;
  uint32_t *pU64_4;
  uint64_t uVal_5;
  
  __acrt_lowio_lock_fh(*param_2);
  if ((*(byte *)((&DAT_180842c80)[(int64_t)(int)**param_3 >> 6] + 0x38 +
                (uint64_t)(**param_3 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)func_0x180683c70();
    BVar1 = FlushFileBuffers(hFile);
    uVal_5 = 0;
    if (BVar1 != 0) goto LAB_1806a33eb;
    DVar2 = GetLastError();
    pD_3 = (DWORD *)func_0x180682400();
    *pD_3 = DVar2;
  }
  pU64_4 = (uint32_t *)func_0x1806823dc();
  *pU64_4 = 9;
  uVal_5 = 0xffffffff;
LAB_1806a33eb:
  __acrt_lowio_unlock_fh(*param_4);
  return uVal_5;
}

// func_0x1806a3400
uint64_t func_0x1806a3400(FILE *param_1)
{
  uint *pU64_1;
  byte bFlag_2;
  char *fnPtr_3;
  int iVal_4;
  int iVal_5;
  uint uVal_6;
  uint32_t *pU64_7;
  uint8_t *pU64_8;
  
  if (param_1 == (FILE *)0x0) {
    pU64_7 = (uint32_t *)func_0x1806823dc();
    *pU64_7 = 0x16;
    func_0x180684970();
  }
  else if (((*(uint *)((int64_t)&param_1->_base + 4) >> 0xd & 1) != 0) &&
          ((*(uint *)((int64_t)&param_1->_base + 4) >> 0xc & 1) == 0)) {
    if ((*(uint *)((int64_t)&param_1->_base + 4) >> 1 & 1) == 0) {
      LOCK();
      pU64_1 = (uint *)((int64_t)&param_1->_base + 4);
      *pU64_1 = *pU64_1 | 1;
      UNLOCK();
      if ((*(uint *)((int64_t)&param_1->_base + 4) & 0x4c0) == 0) {
        __acrt_stdio_allocate_buffer_nolock();
      }
      fnPtr_3 = *(char **)&param_1->_cnt;
      iVal_5 = param_1->_charbuf;
      param_1->_ptr = fnPtr_3;
      iVal_4 = _fileno(param_1);
      iVal_5 = func_0x18069cc54(iVal_4,fnPtr_3,iVal_5);
      *(int *)&param_1->_base = iVal_5;
      if (1 < iVal_5 + 1U) {
        if ((*(uint *)((int64_t)&param_1->_base + 4) & 6) == 0) {
          iVal_5 = _fileno(param_1);
          if ((iVal_5 == -1) || (iVal_5 = _fileno(param_1), iVal_5 == -2)) {
            pU64_8 = &DAT_18083d9e0;
          }
          else {
            iVal_5 = _fileno(param_1);
            uVal_6 = _fileno(param_1);
            pU64_8 = (uint8_t *)
                     ((&DAT_180842c80)[(int64_t)iVal_5 >> 6] + (uint64_t)(uVal_6 & 0x3f) * 0x48);
          }
          if ((pU64_8[0x38] & 0x82) == 0x82) {
            LOCK();
            pU64_1 = (uint *)((int64_t)&param_1->_base + 4);
            *pU64_1 = *pU64_1 | 0x20;
            UNLOCK();
          }
        }
        if (((param_1->_charbuf == 0x200) &&
            ((*(uint *)((int64_t)&param_1->_base + 4) >> 6 & 1) != 0)) &&
           ((*(uint *)((int64_t)&param_1->_base + 4) >> 8 & 1) == 0)) {
          param_1->_charbuf = 0x1000;
        }
        *(int *)&param_1->_base = *(int *)&param_1->_base + -1;
        bFlag_2 = *param_1->_ptr;
        param_1->_ptr = param_1->_ptr + 1;
        return (uint64_t)bFlag_2;
      }
      LOCK();
      pU64_1 = (uint *)((int64_t)&param_1->_base + 4);
      *pU64_1 = *pU64_1 | (-(uint)(iVal_5 != 0) & 8) + 8;
      UNLOCK();
      *(uint32_t *)&param_1->_base = 0;
    }
    else {
      LOCK();
      pU64_1 = (uint *)((int64_t)&param_1->_base + 4);
      *pU64_1 = *pU64_1 | 0x10;
      UNLOCK();
    }
  }
  return 0xffffffff;
}

// func_0x1806a3570
void func_0x1806a3570(PVOID param_1,PVOID param_2)
{
  RtlUnwind(param_1,param_2,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

// func_0x1806a35a0
void func_0x1806a35a0(uint param_1)
{
  uint uVal_1;
  uint32_t *pU64_2;
  uint uVal_3;
  uint64_t uVal_4;
  uint local_res8 [2];
  uint local_res10 [2];
  
  local_res10[0] = 0;
  func_0x1806a90f0(local_res10,0x1f);
  local_res8[0] = local_res10[0];
  uVal_4 = (uint64_t)(param_1 | 0x20);
  if ((param_1 & 0x18) == 0) {
    uVal_4 = (uint64_t)param_1;
  }
  uVal_3 = (uint)(uVal_4 >> 5) & 1;
  uVal_1 = uVal_3 | 2;
  if ((uVal_4 & 0x10) == 0) {
    uVal_1 = uVal_3;
  }
  uVal_3 = uVal_1 | 4;
  if ((uVal_4 & 8) == 0) {
    uVal_3 = uVal_1;
  }
  uVal_1 = uVal_3 | 8;
  if ((uVal_4 & 4) == 0) {
    uVal_1 = uVal_3;
  }
  uVal_3 = uVal_1 | 0x10;
  if ((uVal_4 & 1) == 0) {
    uVal_3 = uVal_1;
  }
  uVal_1 = func_0x1806a94b0(uVal_3);
  local_res8[0] = local_res8[0] | uVal_1;
  func_0x1806a9140(local_res8,0x1f);
  if ((uVal_4 & 1) != 0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x21;
    return;
  }
  if ((uVal_4 & 0x1c) != 0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x22;
  }
  return;
}
