#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x180675560
int64_t func_0x180675560(int64_t param_1,uint64_t param_2)
{
  *(uint8_t ***)(param_1 + 0xa8) = std::exception::vftable;
  func_0x18067b490(param_1 + 0xb0);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0xc0);
  }
  return param_1;
}

// func_0x1806755c0
uint64_t * func_0x1806755c0(uint64_t *param_1,uint64_t param_2)
{
  param_1[1] = param_2;
  *param_1 = &LAB_1806755e0;
  return param_1;
}

// thunk_FUN_18067b540
uint32_t thunk_FUN_18067b540(void)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x180692550();
  if (lVal_1 != 0) {
    return *(uint32_t *)(lVal_1 + 0x30);
  }
  return 0;
}

// func_0x180675600
uint64_t func_0x180675600(int64_t param_1,int64_t param_2)
{
  BOOL BVar1;
  DWORD DVar2;
  
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
  *(uint32_t *)(param_2 + 0x48) = 0xffffffff;
  BVar1 = SleepConditionVariableSRW
                    ((PCONDITION_VARIABLE)(param_1 + 8),(PSRWLOCK)(param_2 + 0x10),0xffffffff,0);
  if (BVar1 != 0) {
    DVar2 = GetCurrentThreadId();
    *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
    *(DWORD *)(param_2 + 0x48) = DVar2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x180675650
uint64_t func_0x180675650(int64_t param_1)
{
  WakeAllConditionVariable((PCONDITION_VARIABLE)(param_1 + 8));
  return 0;
}

// func_0x180675670
uint64_t func_0x180675670(int64_t param_1)
{
  WakeConditionVariable((PCONDITION_VARIABLE)(param_1 + 8));
  return 0;
}

// func_0x180675780
void func_0x180675780(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint8_t *pU64_3;
  int iVal_4;
  
  iVal_2 = func_0x180675fe0(&DAT_18083d1c0);
  if (iVal_2 != 0) {
    func_0x180674150(5);
    fnPtr_1 = (func_ptr_t )swi(3);
    (*fnPtr_1)();
    return;
  }
  if (DAT_18083d20c != 0x7fffffff) {
    pU64_3 = &DAT_180842090;
    do {
      iVal_2 = *(int *)(pU64_3 + 800);
      for (iVal_4 = 0; (iVal_2 != 0 && (iVal_4 < 0x14)); iVal_4 = iVal_4 + 1) {
        if (*(int64_t *)(pU64_3 + (int64_t)iVal_4 * 0x28 + 0x10) == param_1) {
          *(uint64_t *)(pU64_3 + (int64_t)iVal_4 * 0x28 + 0x10) = 0;
          *(int *)(pU64_3 + 800) = *(int *)(pU64_3 + 800) + -1;
          iVal_2 = *(int *)(pU64_3 + 800);
        }
      }
      pU64_3 = *(uint8_t **)(pU64_3 + 0x328);
    } while (pU64_3 != (uint8_t *)0x0);
    func_0x180676070(&DAT_18083d1c0);
    return;
  }
  DAT_18083d20c = 0x7ffffffe;
  func_0x180674150(6);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180675830
void func_0x180675830(void)
{
  func_ptr_t fnPtr_1;
  DWORD DVar2;
  int iVal_3;
  uint8_t *pU64_4;
  int iVal_5;
  
  DVar2 = GetCurrentThreadId();
  iVal_3 = func_0x180675fe0(&DAT_18083d1c0);
  if (iVal_3 != 0) {
    func_0x180674150(5);
    fnPtr_1 = (func_ptr_t )swi(3);
    (*fnPtr_1)();
    return;
  }
  if (DAT_18083d20c != 0x7fffffff) {
    pU64_4 = &DAT_180842090;
    do {
      iVal_3 = *(int *)(pU64_4 + 800);
      for (iVal_5 = 0; (iVal_3 != 0 && (iVal_5 < 0x14)); iVal_5 = iVal_5 + 1) {
        if ((*(int64_t *)(pU64_4 + (int64_t)iVal_5 * 0x28 + 0x10) != 0) &&
           (*(DWORD *)(pU64_4 + (int64_t)iVal_5 * 0x28 + 8) == DVar2)) {
          if (*(uint32_t **)(pU64_4 + (int64_t)iVal_5 * 0x28 + 0x20) != (uint32_t *)0x0) {
            **(uint32_t **)(pU64_4 + (int64_t)iVal_5 * 0x28 + 0x20) = 1;
          }
          func_0x180675650(*(uint64_t *)(pU64_4 + (int64_t)iVal_5 * 0x28 + 0x18));
          func_0x180676070(*(uint64_t *)(pU64_4 + (int64_t)iVal_5 * 0x28 + 0x10));
          *(uint64_t *)(pU64_4 + (int64_t)iVal_5 * 0x28 + 0x10) = 0;
          *(int *)(pU64_4 + 800) = *(int *)(pU64_4 + 800) + -1;
          iVal_3 = *(int *)(pU64_4 + 800);
        }
      }
      pU64_4 = *(uint8_t **)(pU64_4 + 0x328);
    } while (pU64_4 != (uint8_t *)0x0);
    func_0x180676070(&DAT_18083d1c0);
    return;
  }
  DAT_18083d20c = 0x7ffffffe;
  func_0x180674150(6);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180675920
int func_0x180675920(void *param_1,int param_2,void *param_3,int param_4,UINT *param_5)
{
  UINT UVar1;
  int iVal_2;
  wchar_t **ptr2_WStr_3;
  uint32_t *pU64_4;
  wchar_t *pWStr_5;
  
  param_4 = param_4 - (int)param_3;
  param_2 = param_2 - (int)param_1;
  if (param_5 == (UINT *)0x0) {
    ptr2_WStr_3 = ___lc_locale_name_func();
    pWStr_5 = ptr2_WStr_3[1];
    UVar1 = ___lc_collate_cp_func();
  }
  else {
    pWStr_5 = *(wchar_t **)(param_5 + 2);
    UVar1 = *param_5;
  }
  if (pWStr_5 == (wchar_t *)0x0) {
    iVal_2 = param_4;
    if (param_2 < param_4) {
      iVal_2 = param_2;
    }
    iVal_2 = memcmp(param_1,param_3,(int64_t)iVal_2);
    if ((iVal_2 == 0) && (param_2 != param_4)) {
      iVal_2 = 1;
      if (param_2 < param_4) {
        iVal_2 = -1;
      }
      return iVal_2;
    }
  }
  else {
    iVal_2 = func_0x180679550(pWStr_5,0x1000,param_1,param_2,param_3,param_4,UVar1);
    if (iVal_2 == 0) {
      pU64_4 = (uint32_t *)func_0x1806823dc();
      *pU64_4 = 0x16;
      return 0x7fffffff;
    }
    iVal_2 = iVal_2 + -2;
  }
  return iVal_2;
}

// _Getcoll
/* Library Function - Single Match
    _Getcoll
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _Getcoll
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
_Collvec * __cdecl _Getcoll(_Collvec *__return_storage_ptr__)
{
  UINT UVar1;
  wchar_t **ptr2_WStr_2;
  wchar_t *pWStr_3;
  
  UVar1 = ___lc_collate_cp_func();
  __return_storage_ptr__->_Page = UVar1;
  ptr2_WStr_2 = ___lc_locale_name_func();
  pWStr_3 = ptr2_WStr_2[1];
  __return_storage_ptr__->_LocaleName = pWStr_3;
  if (pWStr_3 != (wchar_t *)0x0) {
    pWStr_3 = (wchar_t *)func_0x180687200();
    __return_storage_ptr__->_LocaleName = pWStr_3;
  }
  return __return_storage_ptr__;
}

// func_0x180675a30
uint64_t func_0x180675a30(uint param_1,UINT *param_2)
{
  UINT UVar1;
  uint uVal_2;
  int iVal_3;
  wchar_t **ptr2_WStr_4;
  int64_t lVal_5;
  ushort uVal_6;
  uint64_t uVal_7;
  wchar_t *pWStr_8;
  uint64_t uVal_9;
  uint8_t local_res10;
  uint8_t local_res11;
  uint8_t local_res12;
  byte local_res18;
  uint8_t local_res19;
  
  uVal_7 = (uint64_t)(int)param_1;
  if (param_2 == (UINT *)0x0) {
    ptr2_WStr_4 = ___lc_locale_name_func();
    pWStr_8 = ptr2_WStr_4[2];
    UVar1 = ___lc_codepage_func();
  }
  else {
    pWStr_8 = *(wchar_t **)(param_2 + 6);
    UVar1 = *param_2;
  }
  if (pWStr_8 == (wchar_t *)0x0) {
    if (0x40 < (int)param_1) {
      uVal_2 = param_1 + 0x20;
      if (0x5a < (int)param_1) {
        uVal_2 = param_1;
      }
      uVal_7 = (uint64_t)uVal_2;
    }
    goto LAB_180675a74;
  }
  if (param_1 < 0x100) {
    if (param_2 != (UINT *)0x0) {
      if ((*(byte *)(*(int64_t *)(param_2 + 2) + uVal_7 * 2) & 1) == 0) goto LAB_180675a74;
      goto LAB_180675aaa;
    }
    iVal_3 = isupper(param_1);
    if (iVal_3 == 0) goto LAB_180675a74;
LAB_180675ae3:
    lVal_5 = func_0x18067e4b8();
    uVal_6 = *(ushort *)(lVal_5 + (uint64_t)((int)param_1 >> 8 & 0xff) * 2) & 0x8000;
  }
  else {
    if (param_2 == (UINT *)0x0) goto LAB_180675ae3;
LAB_180675aaa:
    uVal_6 = *(ushort *)(*(int64_t *)(param_2 + 2) + ((int64_t)uVal_7 >> 8 & 0xffU) * 2) >> 0xf;
  }
  if (uVal_6 == 0) {
    uVal_9 = 1;
    local_res11 = 0;
    local_res10 = (char)param_1;
  }
  else {
    uVal_9 = 2;
    local_res12 = 0;
    local_res10 = (char)(param_1 >> 8);
    local_res11 = (char)param_1;
  }
  iVal_3 = func_0x1806798d0(pWStr_8,0x100,&local_res10,uVal_9,&local_res18,3,UVar1,1);
  if (iVal_3 != 0) {
    uVal_7 = (uint64_t)local_res18;
    if (iVal_3 != 1) {
      uVal_7 = (uint64_t)CONCAT11(local_res18,local_res19);
    }
    return uVal_7;
  }
LAB_180675a74:
  return uVal_7 & 0xffffffff;
}

// func_0x180675b70
UINT * func_0x180675b70(UINT *param_1)
{
  wchar_t *pWStr_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  UINT UVar5;
  uint32_t *pU64_6;
  uint32_t *pU64_7;
  wchar_t **ptr2_WStr_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  
  UVar5 = ___lc_codepage_func();
  *param_1 = UVar5;
  pU64_6 = (uint32_t *)_calloc_base(0x100,2);
  *(uint32_t **)(param_1 + 2) = pU64_6;
  if (pU64_6 == (uint32_t *)0x0) {
    uVal_9 = func_0x18067e4b8();
    *(uint64_t *)(param_1 + 2) = uVal_9;
    param_1[4] = 0;
  }
  else {
    pU64_7 = (uint32_t *)func_0x18067e4b8();
    lVal_10 = 4;
    do {
      uVal_2 = pU64_7[1];
      uVal_3 = pU64_7[2];
      uVal_4 = pU64_7[3];
      *pU64_6 = *pU64_7;
      pU64_6[1] = uVal_2;
      pU64_6[2] = uVal_3;
      pU64_6[3] = uVal_4;
      uVal_2 = pU64_7[5];
      uVal_3 = pU64_7[6];
      uVal_4 = pU64_7[7];
      pU64_6[4] = pU64_7[4];
      pU64_6[5] = uVal_2;
      pU64_6[6] = uVal_3;
      pU64_6[7] = uVal_4;
      uVal_2 = pU64_7[9];
      uVal_3 = pU64_7[10];
      uVal_4 = pU64_7[0xb];
      pU64_6[8] = pU64_7[8];
      pU64_6[9] = uVal_2;
      pU64_6[10] = uVal_3;
      pU64_6[0xb] = uVal_4;
      uVal_2 = pU64_7[0xd];
      uVal_3 = pU64_7[0xe];
      uVal_4 = pU64_7[0xf];
      pU64_6[0xc] = pU64_7[0xc];
      pU64_6[0xd] = uVal_2;
      pU64_6[0xe] = uVal_3;
      pU64_6[0xf] = uVal_4;
      uVal_2 = pU64_7[0x11];
      uVal_3 = pU64_7[0x12];
      uVal_4 = pU64_7[0x13];
      pU64_6[0x10] = pU64_7[0x10];
      pU64_6[0x11] = uVal_2;
      pU64_6[0x12] = uVal_3;
      pU64_6[0x13] = uVal_4;
      uVal_2 = pU64_7[0x15];
      uVal_3 = pU64_7[0x16];
      uVal_4 = pU64_7[0x17];
      pU64_6[0x14] = pU64_7[0x14];
      pU64_6[0x15] = uVal_2;
      pU64_6[0x16] = uVal_3;
      pU64_6[0x17] = uVal_4;
      uVal_2 = pU64_7[0x19];
      uVal_3 = pU64_7[0x1a];
      uVal_4 = pU64_7[0x1b];
      pU64_6[0x18] = pU64_7[0x18];
      pU64_6[0x19] = uVal_2;
      pU64_6[0x1a] = uVal_3;
      pU64_6[0x1b] = uVal_4;
      uVal_2 = pU64_7[0x1d];
      uVal_3 = pU64_7[0x1e];
      uVal_4 = pU64_7[0x1f];
      pU64_6[0x1c] = pU64_7[0x1c];
      pU64_6[0x1d] = uVal_2;
      pU64_6[0x1e] = uVal_3;
      pU64_6[0x1f] = uVal_4;
      lVal_10 = lVal_10 + -1;
      pU64_7 = pU64_7 + 0x20;
      pU64_6 = pU64_6 + 0x20;
    } while (lVal_10 != 0);
    param_1[4] = 1;
  }
  ptr2_WStr_8 = ___lc_locale_name_func();
  pWStr_1 = ptr2_WStr_8[1];
  *(wchar_t **)(param_1 + 6) = pWStr_1;
  if (pWStr_1 != (wchar_t *)0x0) {
    uVal_9 = func_0x180687200();
    *(uint64_t *)(param_1 + 6) = uVal_9;
  }
  return param_1;
}

// func_0x180675c50
uint8_t (*func_0x180675c50(uint8_t (*param_1)[16]))[16]
{
  wchar_t *pWStr_1;
  UINT UVar2;
  uint32_t uVal_3;
  wchar_t **ptr2_WStr_4;
  int64_t lVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  uint uVal_8;
  
  *param_1 = ZEXT816(0);
  param_1[1] = ZEXT816(0);
  *(uint8_t (*)[16])(param_1[1] + 0xc) = ZEXT816(0);
  UVar2 = ___lc_codepage_func();
  *(UINT *)*param_1 = UVar2;
  uVal_3 = func_0x18067da10();
  *(uint32_t *)(*param_1 + 4) = uVal_3;
  ptr2_WStr_4 = ___lc_locale_name_func();
  pWStr_1 = ptr2_WStr_4[2];
  *(uint *)(*param_1 + 8) = (uint)(pWStr_1 == (wchar_t *)0x0);
  if (pWStr_1 != (wchar_t *)0x0) {
    lVal_5 = func_0x18067e4b8();
    uVal_8 = 0;
    lVal_6 = 0;
    do {
      if (*(short *)(lVal_5 + lVal_6 * 2) < 0) {
        (*param_1)[(lVal_6 >> 3) + 0xc] = (*param_1)[(lVal_6 >> 3) + 0xc] | (byte)(1 << (uVal_8 & 7));
      }
      if (*(short *)(lVal_5 + 2 + lVal_6 * 2) < 0) {
        lVal_7 = lVal_6 + 1 >> 3;
        (*param_1)[lVal_7 + 0xc] = (*param_1)[lVal_7 + 0xc] | (byte)(1 << (uVal_8 + 1 & 7));
      }
      if (*(short *)(lVal_5 + 4 + lVal_6 * 2) < 0) {
        lVal_7 = lVal_6 + 2 >> 3;
        (*param_1)[lVal_7 + 0xc] = (*param_1)[lVal_7 + 0xc] | (byte)(1 << (uVal_8 + 2 & 7));
      }
      if (*(short *)(lVal_5 + 6 + lVal_6 * 2) < 0) {
        lVal_7 = lVal_6 + 3 >> 3;
        (*param_1)[lVal_7 + 0xc] = (*param_1)[lVal_7 + 0xc] | (byte)(1 << (uVal_8 + 3 & 7));
      }
      uVal_8 = uVal_8 + 4;
      lVal_6 = lVal_6 + 4;
    } while ((int)uVal_8 < 0x100);
  }
  return param_1;
}

// func_0x180675d60
int func_0x180675d60(LPSTR param_1,WCHAR param_2,uint64_t param_3,UINT *param_4)
{
  int iVal_1;
  uint32_t *pU64_2;
  WCHAR local_18 [4];
  int local_10 [4];
  
  local_18[0] = param_2;
  if (param_4[2] == 0) {
    local_10[0] = 0;
    iVal_1 = WideCharToMultiByte(*param_4,0,local_18,1,param_1,param_4[1],(LPCSTR)0x0,local_10);
    if ((iVal_1 != 0) && (local_10[0] == 0)) {
      return iVal_1;
    }
  }
  else if ((ushort)param_2 < 0x100) {
    *param_1 = (CHAR)param_2;
    return 1;
  }
  pU64_2 = (uint32_t *)func_0x1806823dc();
  *pU64_2 = 0x2a;
  return -1;
}

// func_0x180675de0
int func_0x180675de0(LPWSTR param_1,byte *param_2,uint64_t param_3,uint64_t param_4,UINT *param_5)
{
  byte bFlag_1;
  UINT UVar2;
  uint32_t *pU64_3;
  int iVal_4;
  int iVal_5;
  uint uVal_6;
  bool bFlag_7;
  
  if (param_3 == 0) {
    return 0;
  }
  bFlag_1 = *param_2;
  if (bFlag_1 == 0) {
    *param_1 = L'\0';
    return 0;
  }
  if (param_5[2] != 0) {
LAB_180675fb9:
    *param_1 = (ushort)bFlag_1;
    return 1;
  }
  UVar2 = param_5[1];
  if (UVar2 == 1) {
LAB_180675f6f:
    iVal_4 = MultiByteToWideChar(*param_5,9,(LPCSTR)param_2,1,param_1,1);
    if (iVal_4 != 0) {
      return 1;
    }
    goto LAB_180675f99;
  }
  if (UVar2 == 2) {
    iVal_4 = 1;
    if ((*(byte *)((uint64_t)(bFlag_1 >> 3) + 0xc + (int64_t)param_5) & (byte)(1 << (bFlag_1 & 7))) !=
        0) {
      if (param_3 == 1) {
        return -2;
      }
      iVal_4 = 2;
    }
    iVal_5 = MultiByteToWideChar(*param_5,9,(LPCSTR)param_2,iVal_4,param_1,1);
    if (iVal_5 != 0) {
      return iVal_4;
    }
    goto LAB_180675f99;
  }
  if (UVar2 != 4) goto LAB_180675f6f;
  if (-1 < (char)bFlag_1) goto LAB_180675fb9;
  iVal_4 = 1;
  if ((bFlag_1 & 0xe0) == 0xc0) {
    uVal_6 = bFlag_1 & 0x1f;
    iVal_5 = 1;
  }
  else {
    if ((bFlag_1 & 0xf0) != 0xe0) goto LAB_180675f99;
    uVal_6 = bFlag_1 & 0xf;
    iVal_5 = 2;
  }
  do {
    if (param_3 <= (uint64_t)(int64_t)iVal_4) {
      return -2;
    }
    if ((param_2[iVal_4] & 0xc0) != 0x80) goto LAB_180675f99;
    uVal_6 = param_2[iVal_4] & 0x3f | uVal_6 << 6;
    iVal_4 = iVal_4 + 1;
    iVal_5 = iVal_5 + -1;
  } while (iVal_5 != 0);
  if (iVal_4 == 2) {
    bFlag_7 = uVal_6 < 0x80;
LAB_180675ecd:
    if (bFlag_7) goto LAB_180675f99;
  }
  else if (iVal_4 == 3) {
    bFlag_7 = uVal_6 < 0x800;
    goto LAB_180675ecd;
  }
  if (0x7ff < uVal_6 - 0xd800) {
    *param_1 = (WCHAR)uVal_6;
    return iVal_4;
  }
LAB_180675f99:
  pU64_3 = (uint32_t *)func_0x1806823dc();
  *pU64_3 = 0x2a;
  return -1;
}

// func_0x180675fe0
uint64_t func_0x180675fe0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  DWORD DVar3;
  
  DVar3 = GetCurrentThreadId();
  if ((*param_1 & 0xfffffeff) == 1) {
    if (param_1[0x12] != DVar3) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4));
      param_1[0x12] = DVar3;
    }
    param_1[0x13] = param_1[0x13] + 1;
    return 0;
  }
  if (param_1[0x12] != DVar3) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4));
  }
  uVal_2 = param_1[0x13];
  uVal_1 = uVal_2 + 1;
  param_1[0x13] = uVal_1;
  if ((int)uVal_1 < 2) {
    param_1[0x12] = DVar3;
  }
  else if ((*param_1 & 0x100) == 0) {
    param_1[0x13] = uVal_2;
    return 3;
  }
  return 0;
}

// func_0x180676070
uint64_t func_0x180676070(int64_t param_1)
{
  int *pInt_1;
  
  pInt_1 = (int *)(param_1 + 0x4c);
  *pInt_1 = *pInt_1 + -1;
  if (*pInt_1 == 0) {
    *(uint32_t *)(param_1 + 0x48) = 0xffffffff;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  }
  return 0;
}

// _Xtime_get_ticks
/* Library Function - Single Match
    _Xtime_get_ticks
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _Xtime_get_ticks
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
int64_t _Xtime_get_ticks(void)
{
  uint local_res8;
  uint local_resc;
  
  GetSystemTimePreciseAsFileTime(&local_res8);
  return ((uint64_t)local_resc << 0x20) + -0x19db1ded53e8000 + (uint64_t)local_res8;
}

// func_0x1806760d0
LARGE_INTEGER func_0x1806760d0(void)
{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  return (LARGE_INTEGER)local_res8[0].QuadPart;
}

// func_0x1806760f0
void func_0x1806760f0(void)
{
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_1808423c0.QuadPart == 0) {
    QueryPerformanceFrequency(local_res8);
    DAT_1808423c0 = local_res8[0];
  }
  return;
}

// API-MS-WIN-CORE-SYNCH-L1-1-0.DLL::AcquireSRWLockExclusive
void __stdcall AcquireSRWLockExclusive(PSRWLOCK SRWLock)
{
                    /* WARNING: Could not recover jumptable at 0x000180676120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AcquireSRWLockExclusive(SRWLock);
  return;
}

// API-MS-WIN-CORE-SYNCH-L1-1-0.DLL::AcquireSRWLockShared
void __stdcall AcquireSRWLockShared(PSRWLOCK SRWLock)
{
                    /* WARNING: Could not recover jumptable at 0x000180676130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AcquireSRWLockShared(SRWLock);
  return;
}

// API-MS-WIN-CORE-SYNCH-L1-1-0.DLL::ReleaseSRWLockExclusive
void __stdcall ReleaseSRWLockExclusive(PSRWLOCK SRWLock)
{
                    /* WARNING: Could not recover jumptable at 0x000180676140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}

// API-MS-WIN-CORE-SYNCH-L1-1-0.DLL::ReleaseSRWLockShared
void __stdcall ReleaseSRWLockShared(PSRWLOCK SRWLock)
{
                    /* WARNING: Could not recover jumptable at 0x000180676150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(SRWLock);
  return;
}

// func_0x180676160
uint64_t func_0x180676160(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4, UINT *param_5)
{
  UINT UVar1;
  int iVal_2;
  wchar_t **ptr2_WStr_3;
  uint64_t uVal_4;
  wchar_t *pWStr_5;
  int iVal_6;
  
  uVal_4 = param_4 - param_3;
  if (param_5 == (UINT *)0x0) {
    ptr2_WStr_3 = ___lc_locale_name_func();
    pWStr_5 = ptr2_WStr_3[1];
    UVar1 = ___lc_collate_cp_func();
  }
  else {
    pWStr_5 = *(wchar_t **)(param_5 + 2);
    UVar1 = *param_5;
  }
  if ((pWStr_5 == (wchar_t *)0x0) && (UVar1 == 0)) {
    if (uVal_4 <= (uint64_t)(param_2 - param_1)) {
      func_0x1806aa960(param_1,param_3,uVal_4);
    }
    return uVal_4;
  }
  iVal_2 = func_0x1806798d0(pWStr_5,0x400,param_3,uVal_4 & 0xffffffff,0,0,UVar1,1);
  if (iVal_2 != 0) {
    iVal_6 = (int)(param_2 - param_1);
    if (iVal_2 <= iVal_6) {
      func_0x1806798d0(pWStr_5,0x400,param_3,uVal_4 & 0xffffffff,param_1,iVal_6,UVar1,1);
    }
    return (int64_t)iVal_2;
  }
  return 0xffffffffffffffff;
}

// func_0x180676270
uint32_t func_0x180676270(HANDLE *param_1)
{
  BOOL BVar1;
  uint32_t uVal_2;
  
  BVar1 = CloseHandle(*param_1);
  uVal_2 = 4;
  if (BVar1 != 0) {
    uVal_2 = 0;
  }
  return uVal_2;
}

// func_0x180676290
uint32_t func_0x180676290(HANDLE *param_1,DWORD *param_2)
{
  HANDLE hHandle;
  DWORD DVar1;
  BOOL BVar2;
  uint32_t uVal_3;
  DWORD local_res8 [2];
  
  hHandle = *param_1;
  DVar1 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
  if (DVar1 == 0xffffffff) {
    return 4;
  }
  if (param_2 != (DWORD *)0x0) {
    BVar2 = GetExitCodeThread(hHandle,local_res8);
    if (BVar2 == 0) {
      return 4;
    }
    *param_2 = local_res8[0];
  }
  BVar2 = CloseHandle(hHandle);
  uVal_3 = 4;
  if (BVar2 != 0) {
    uVal_3 = 0;
  }
  return uVal_3;
}

// func_0x180676310
uint64_t func_0x180676310(uint param_1,UINT *param_2)
{
  UINT UVar1;
  uint uVal_2;
  int iVal_3;
  wchar_t **ptr2_WStr_4;
  int64_t lVal_5;
  ushort uVal_6;
  uint64_t uVal_7;
  wchar_t *pWStr_8;
  uint64_t uVal_9;
  uint8_t local_res10;
  uint8_t local_res11;
  uint8_t local_res12;
  byte local_res18;
  uint8_t local_res19;
  
  uVal_7 = (uint64_t)(int)param_1;
  if (param_2 == (UINT *)0x0) {
    ptr2_WStr_4 = ___lc_locale_name_func();
    pWStr_8 = ptr2_WStr_4[2];
    UVar1 = ___lc_codepage_func();
  }
  else {
    pWStr_8 = *(wchar_t **)(param_2 + 6);
    UVar1 = *param_2;
  }
  if (pWStr_8 == (wchar_t *)0x0) {
    if (0x60 < (int)param_1) {
      uVal_2 = param_1 - 0x20;
      if (0x7a < (int)param_1) {
        uVal_2 = param_1;
      }
      uVal_7 = (uint64_t)uVal_2;
    }
    goto LAB_180676354;
  }
  if (param_1 < 0x100) {
    if (param_2 != (UINT *)0x0) {
      if ((*(byte *)(*(int64_t *)(param_2 + 2) + uVal_7 * 2) & 2) == 0) goto LAB_180676354;
      goto LAB_18067638a;
    }
    iVal_3 = islower(param_1);
    if (iVal_3 == 0) goto LAB_180676354;
LAB_1806763c3:
    lVal_5 = func_0x18067e4b8();
    uVal_6 = *(ushort *)(lVal_5 + (uint64_t)((int)param_1 >> 8 & 0xff) * 2) & 0x8000;
  }
  else {
    if (param_2 == (UINT *)0x0) goto LAB_1806763c3;
LAB_18067638a:
    uVal_6 = *(ushort *)(*(int64_t *)(param_2 + 2) + ((int64_t)uVal_7 >> 8 & 0xffU) * 2) >> 0xf;
  }
  if (uVal_6 == 0) {
    uVal_9 = 1;
    local_res11 = 0;
    local_res10 = (char)param_1;
  }
  else {
    uVal_9 = 2;
    local_res12 = 0;
    local_res10 = (char)(param_1 >> 8);
    local_res11 = (char)param_1;
  }
  iVal_3 = func_0x1806798d0(pWStr_8,0x200,&local_res10,uVal_9,&local_res18,3,UVar1,1);
  if (iVal_3 != 0) {
    uVal_7 = (uint64_t)local_res18;
    if (iVal_3 != 1) {
      uVal_7 = (uint64_t)CONCAT11(local_res18,local_res19);
    }
    return uVal_7;
  }
LAB_180676354:
  return uVal_7 & 0xffffffff;
}

// thunk_FUN_180676460
uint8_t (*thunk_FUN_180676460(uint8_t (*param_1)[32],uint8_t (*param_2)[32],byte param_3))[32]
{
  ushort uVal_1;
  uint uVal_2;
  uint8_t *pU64_3;
  uint uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint8_t auArr_7 [16];
  uint8_t in_YMM0 [32];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [32];
  uint8_t auArr_10 [32];
  uint8_t auArr_11 [32];
  
  uVal_5 = (int64_t)param_2 - (int64_t)param_1;
  if (((uVal_5 & 0xffffffffffffffe0) == 0) || ((DAT_18083d264 & 0x20) == 0)) {
    if (((uVal_5 & 0xfffffffffffffff0) != 0) && ((DAT_18083d264 & 4) != 0)) {
      pU64_3 = *param_1;
      auArr_8 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auArr_7[0] = -((*param_1)[0] == auArr_8[0]);
        auArr_7[1] = -((*param_1)[1] == auArr_8[1]);
        auArr_7[2] = -((*param_1)[2] == auArr_8[2]);
        auArr_7[3] = -((*param_1)[3] == auArr_8[3]);
        auArr_7[4] = -((*param_1)[4] == auArr_8[4]);
        auArr_7[5] = -((*param_1)[5] == auArr_8[5]);
        auArr_7[6] = -((*param_1)[6] == auArr_8[6]);
        auArr_7[7] = -((*param_1)[7] == auArr_8[7]);
        auArr_7[8] = -((*param_1)[8] == auArr_8[8]);
        auArr_7[9] = -((*param_1)[9] == auArr_8[9]);
        auArr_7[10] = -((*param_1)[10] == auArr_8[10]);
        auArr_7[11] = -((*param_1)[0xb] == auArr_8[11]);
        auArr_7[12] = -((*param_1)[0xc] == auArr_8[12]);
        auArr_7[13] = -((*param_1)[0xd] == auArr_8[13]);
        auArr_7[14] = -((*param_1)[0xe] == auArr_8[14]);
        auArr_7[15] = -((*param_1)[0xf] == auArr_8[15]);
        uVal_1 = (ushort)(SUB161(auArr_7 >> 7,0) & 1) | (ushort)(SUB161(auArr_7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auArr_7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auArr_7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auArr_7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auArr_7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auArr_7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auArr_7 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auArr_7 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auArr_7 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auArr_7 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auArr_7 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auArr_7 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auArr_7 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auArr_7 >> 0x77,0) & 1) << 0xe | (ushort)(auArr_7[15] >> 7) << 0xf;
        if (uVal_1 != 0) {
          uVal_4 = 0;
          if (uVal_1 != 0) {
            for (; (uVal_1 >> uVal_4 & 1) == 0; uVal_4 = uVal_4 + 1) {
            }
          }
          return (uint8_t (*)[32])(*param_1 + uVal_4);
        }
        param_1 = (uint8_t (*)[32])(*param_1 + 0x10);
      } while (param_1 != (uint8_t (*)[32])(pU64_3 + (uVal_5 & 0xfffffffffffffff0)));
    }
  }
  else {
    pU64_3 = *param_1;
    auArr_8 = vmovd_avx((int)(char)param_3);
    auArr_7 = vpxor_avx(in_YMM0._0_16_,in_YMM0._0_16_);
    auArr_8 = vpshufb_avx(auArr_8,auArr_7);
    auArr_11 = vinsertf128_avx(ZEXT1632(auArr_8),auArr_8,1);
    do {
      auArr_9 = vpcmpeqb_avx2(auArr_11,*param_1);
      uVal_4 = (uint)(SUB321(auArr_9 >> 7,0) & 1) | (uint)(SUB321(auArr_9 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auArr_9 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auArr_9 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auArr_9 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auArr_9 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auArr_9 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auArr_9 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auArr_9 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auArr_9 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auArr_9 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auArr_9 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auArr_9 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auArr_9 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auArr_9 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_9 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auArr_9 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auArr_9 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auArr_9 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auArr_9 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auArr_9 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auArr_9 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auArr_9 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auArr_9 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auArr_9 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auArr_9 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auArr_9 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auArr_9 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auArr_9 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auArr_9 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auArr_9 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_9[31] >> 7) << 0x1f;
      if (uVal_4 != 0) goto LAB_180676501;
      param_1 = param_1 + 1;
    } while (param_1 != (uint8_t (*)[32])(pU64_3 + (uVal_5 & 0xffffffffffffffe0)));
    uVal_6 = (uint64_t)((uint)uVal_5 & 0x1c);
    if ((uVal_5 & 0x1c) != 0) {
      auArr_10 = vmovdqu_avx(*(uint8_t (*)[32])(&DAT_1806e2710 + -uVal_6));
      auArr_9 = vpmaskmovd_avx2(auArr_10,*param_1);
      auArr_11 = vpcmpeqb_avx2(auArr_9,auArr_11);
      auArr_11 = vpand_avx2(auArr_11,auArr_10);
      uVal_4 = (uint)(SUB321(auArr_11 >> 7,0) & 1) | (uint)(SUB321(auArr_11 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auArr_11 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auArr_11 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auArr_11 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auArr_11 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auArr_11 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auArr_11 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auArr_11 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auArr_11 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auArr_11 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auArr_11 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auArr_11 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auArr_11 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auArr_11 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_11 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auArr_11 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auArr_11 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auArr_11 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auArr_11 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auArr_11 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auArr_11 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auArr_11 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auArr_11 >> 0xbf,0) << 0x17 | (uint)(SUB321(auArr_11 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auArr_11 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auArr_11 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auArr_11 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auArr_11 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auArr_11 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auArr_11 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_11[31] >> 7) << 0x1f
      ;
      if (uVal_4 != 0) {
LAB_180676501:
        uVal_2 = 0;
        for (; (uVal_4 & 1) == 0; uVal_4 = uVal_4 >> 1 | 0x80000000) {
          uVal_2 = uVal_2 + 1;
        }
        return (uint8_t (*)[32])(*param_1 + uVal_2);
      }
      param_1 = (uint8_t (*)[32])(*param_1 + uVal_6);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (uint8_t (*)[32])(*param_1 + 1)) {
  }
  return param_1;
}

// func_0x180676460
uint8_t (*func_0x180676460(uint8_t (*param_1)[32],uint8_t (*param_2)[32],byte param_3))[32]
{
  ushort uVal_1;
  uint uVal_2;
  uint8_t *pU64_3;
  uint uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint8_t auArr_7 [16];
  uint8_t in_YMM0 [32];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [32];
  uint8_t auArr_10 [32];
  uint8_t auArr_11 [32];
  
  uVal_5 = (int64_t)param_2 - (int64_t)param_1;
  if (((uVal_5 & 0xffffffffffffffe0) == 0) || ((DAT_18083d264 & 0x20) == 0)) {
    if (((uVal_5 & 0xfffffffffffffff0) != 0) && ((DAT_18083d264 & 4) != 0)) {
      pU64_3 = *param_1;
      auArr_8 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auArr_7[0] = -((*param_1)[0] == auArr_8[0]);
        auArr_7[1] = -((*param_1)[1] == auArr_8[1]);
        auArr_7[2] = -((*param_1)[2] == auArr_8[2]);
        auArr_7[3] = -((*param_1)[3] == auArr_8[3]);
        auArr_7[4] = -((*param_1)[4] == auArr_8[4]);
        auArr_7[5] = -((*param_1)[5] == auArr_8[5]);
        auArr_7[6] = -((*param_1)[6] == auArr_8[6]);
        auArr_7[7] = -((*param_1)[7] == auArr_8[7]);
        auArr_7[8] = -((*param_1)[8] == auArr_8[8]);
        auArr_7[9] = -((*param_1)[9] == auArr_8[9]);
        auArr_7[10] = -((*param_1)[10] == auArr_8[10]);
        auArr_7[11] = -((*param_1)[0xb] == auArr_8[11]);
        auArr_7[12] = -((*param_1)[0xc] == auArr_8[12]);
        auArr_7[13] = -((*param_1)[0xd] == auArr_8[13]);
        auArr_7[14] = -((*param_1)[0xe] == auArr_8[14]);
        auArr_7[15] = -((*param_1)[0xf] == auArr_8[15]);
        uVal_1 = (ushort)(SUB161(auArr_7 >> 7,0) & 1) | (ushort)(SUB161(auArr_7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auArr_7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auArr_7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auArr_7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auArr_7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auArr_7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auArr_7 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auArr_7 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auArr_7 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auArr_7 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auArr_7 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auArr_7 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auArr_7 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auArr_7 >> 0x77,0) & 1) << 0xe | (ushort)(auArr_7[15] >> 7) << 0xf;
        if (uVal_1 != 0) {
          uVal_4 = 0;
          if (uVal_1 != 0) {
            for (; (uVal_1 >> uVal_4 & 1) == 0; uVal_4 = uVal_4 + 1) {
            }
          }
          return (uint8_t (*)[32])(*param_1 + uVal_4);
        }
        param_1 = (uint8_t (*)[32])(*param_1 + 0x10);
      } while (param_1 != (uint8_t (*)[32])(pU64_3 + (uVal_5 & 0xfffffffffffffff0)));
    }
  }
  else {
    pU64_3 = *param_1;
    auArr_8 = vmovd_avx((int)(char)param_3);
    auArr_7 = vpxor_avx(in_YMM0._0_16_,in_YMM0._0_16_);
    auArr_8 = vpshufb_avx(auArr_8,auArr_7);
    auArr_11 = vinsertf128_avx(ZEXT1632(auArr_8),auArr_8,1);
    do {
      auArr_9 = vpcmpeqb_avx2(auArr_11,*param_1);
      uVal_4 = (uint)(SUB321(auArr_9 >> 7,0) & 1) | (uint)(SUB321(auArr_9 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auArr_9 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auArr_9 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auArr_9 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auArr_9 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auArr_9 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auArr_9 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auArr_9 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auArr_9 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auArr_9 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auArr_9 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auArr_9 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auArr_9 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auArr_9 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_9 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auArr_9 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auArr_9 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auArr_9 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auArr_9 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auArr_9 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auArr_9 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auArr_9 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auArr_9 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auArr_9 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auArr_9 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auArr_9 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auArr_9 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auArr_9 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auArr_9 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auArr_9 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_9[31] >> 7) << 0x1f;
      if (uVal_4 != 0) goto LAB_180676501;
      param_1 = param_1 + 1;
    } while (param_1 != (uint8_t (*)[32])(pU64_3 + (uVal_5 & 0xffffffffffffffe0)));
    uVal_6 = (uint64_t)((uint)uVal_5 & 0x1c);
    if ((uVal_5 & 0x1c) != 0) {
      auArr_10 = vmovdqu_avx(*(uint8_t (*)[32])(&DAT_1806e2710 + -uVal_6));
      auArr_9 = vpmaskmovd_avx2(auArr_10,*param_1);
      auArr_11 = vpcmpeqb_avx2(auArr_9,auArr_11);
      auArr_11 = vpand_avx2(auArr_11,auArr_10);
      uVal_4 = (uint)(SUB321(auArr_11 >> 7,0) & 1) | (uint)(SUB321(auArr_11 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auArr_11 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auArr_11 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auArr_11 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auArr_11 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auArr_11 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auArr_11 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auArr_11 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auArr_11 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auArr_11 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auArr_11 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auArr_11 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auArr_11 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auArr_11 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_11 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auArr_11 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auArr_11 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auArr_11 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auArr_11 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auArr_11 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auArr_11 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auArr_11 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auArr_11 >> 0xbf,0) << 0x17 | (uint)(SUB321(auArr_11 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auArr_11 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auArr_11 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auArr_11 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auArr_11 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auArr_11 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auArr_11 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_11[31] >> 7) << 0x1f
      ;
      if (uVal_4 != 0) {
LAB_180676501:
        uVal_2 = 0;
        for (; (uVal_4 & 1) == 0; uVal_4 = uVal_4 >> 1 | 0x80000000) {
          uVal_2 = uVal_2 + 1;
        }
        return (uint8_t (*)[32])(*param_1 + uVal_2);
      }
      param_1 = (uint8_t (*)[32])(*param_1 + uVal_6);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (uint8_t (*)[32])(*param_1 + 1)) {
  }
  return param_1;
}

// thunk_FUN_180676570
uint8_t (*thunk_FUN_180676570(uint8_t (*param_1)[32],uint8_t (*param_2)[32],short param_3))[32]
{
  ushort uVal_1;
  uint uVal_2;
  uint8_t *pU64_3;
  uint uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [32];
  uint8_t auArr_9 [32];
  uint8_t auArr_10 [32];
  
  uVal_5 = (int64_t)param_2 - (int64_t)param_1;
  if (((uVal_5 & 0xffffffffffffffe0) == 0) || ((DAT_18083d264 & 0x20) == 0)) {
    if (((uVal_5 & 0xfffffffffffffff0) != 0) && ((DAT_18083d264 & 4) != 0)) {
      pU64_3 = *param_1;
      do {
        auArr_7._0_2_ = -(ushort)(*(short *)*param_1 == param_3);
        auArr_7._2_2_ = -(ushort)(*(short *)(*param_1 + 2) == param_3);
        auArr_7._4_2_ = -(ushort)(*(short *)(*param_1 + 4) == param_3);
        auArr_7._6_2_ = -(ushort)(*(short *)(*param_1 + 6) == param_3);
        auArr_7._8_2_ = -(ushort)(*(short *)(*param_1 + 8) == param_3);
        auArr_7._10_2_ = -(ushort)(*(short *)(*param_1 + 10) == param_3);
        auArr_7._12_2_ = -(ushort)(*(short *)(*param_1 + 0xc) == param_3);
        auArr_7._14_2_ = -(ushort)(*(short *)(*param_1 + 0xe) == param_3);
        uVal_1 = (ushort)(SUB161(auArr_7 >> 7,0) & 1) | (ushort)(SUB161(auArr_7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auArr_7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auArr_7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auArr_7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auArr_7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auArr_7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auArr_7 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auArr_7 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auArr_7 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auArr_7 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auArr_7 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auArr_7 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auArr_7 >> 0x6f,0) & 1) << 0xd |
                (ushort)((byte)(auArr_7._14_2_ >> 7) & 1) << 0xe | auArr_7._14_2_ & 0x8000;
        if (uVal_1 != 0) {
          uVal_4 = 0;
          if (uVal_1 != 0) {
            for (; (uVal_1 >> uVal_4 & 1) == 0; uVal_4 = uVal_4 + 1) {
            }
          }
          return (uint8_t (*)[32])(*param_1 + uVal_4);
        }
        param_1 = (uint8_t (*)[32])(*param_1 + 0x10);
      } while (param_1 != (uint8_t (*)[32])(pU64_3 + (uVal_5 & 0xfffffffffffffff0)));
    }
  }
  else {
    pU64_3 = *param_1;
    auArr_7 = vmovd_avx((int)param_3);
    auArr_7 = vpunpcklwd_avx(auArr_7,auArr_7);
    auArr_7 = vpshufd_avx(auArr_7,0);
    auArr_10 = vinsertf128_avx(ZEXT1632(auArr_7),auArr_7,1);
    do {
      auArr_8 = vpcmpeqw_avx2(auArr_10,*param_1);
      uVal_4 = (uint)(SUB321(auArr_8 >> 7,0) & 1) | (uint)(SUB321(auArr_8 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auArr_8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auArr_8 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auArr_8 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auArr_8 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auArr_8 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auArr_8 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auArr_8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auArr_8 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auArr_8 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auArr_8 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auArr_8 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auArr_8 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auArr_8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_8 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auArr_8 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auArr_8 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auArr_8 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auArr_8 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auArr_8 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auArr_8 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auArr_8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auArr_8 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auArr_8 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auArr_8 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auArr_8 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auArr_8 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auArr_8 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auArr_8 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auArr_8 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_8[31] >> 7) << 0x1f;
      if (uVal_4 != 0) goto LAB_180676613;
      param_1 = param_1 + 1;
    } while (param_1 != (uint8_t (*)[32])(pU64_3 + (uVal_5 & 0xffffffffffffffe0)));
    uVal_6 = (uint64_t)((uint)uVal_5 & 0x1c);
    if ((uVal_5 & 0x1c) != 0) {
      auArr_9 = vmovdqu_avx(*(uint8_t (*)[32])(&DAT_1806e2710 + -uVal_6));
      auArr_8 = vpmaskmovd_avx2(auArr_9,*param_1);
      auArr_10 = vpcmpeqw_avx2(auArr_8,auArr_10);
      auArr_10 = vpand_avx2(auArr_10,auArr_9);
      uVal_4 = (uint)(SUB321(auArr_10 >> 7,0) & 1) | (uint)(SUB321(auArr_10 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auArr_10 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auArr_10 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auArr_10 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auArr_10 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auArr_10 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auArr_10 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auArr_10 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auArr_10 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auArr_10 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auArr_10 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auArr_10 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auArr_10 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auArr_10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_10 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auArr_10 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auArr_10 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auArr_10 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auArr_10 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auArr_10 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auArr_10 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auArr_10 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auArr_10 >> 0xbf,0) << 0x17 | (uint)(SUB321(auArr_10 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auArr_10 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auArr_10 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auArr_10 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auArr_10 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auArr_10 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auArr_10 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_10[31] >> 7) << 0x1f
      ;
      if (uVal_4 != 0) {
LAB_180676613:
        uVal_2 = 0;
        for (; (uVal_4 & 1) == 0; uVal_4 = uVal_4 >> 1 | 0x80000000) {
          uVal_2 = uVal_2 + 1;
        }
        return (uint8_t (*)[32])(*param_1 + uVal_2);
      }
      param_1 = (uint8_t (*)[32])(*param_1 + uVal_6);
    }
  }
  for (; (param_1 != param_2 && (*(short *)*param_1 != param_3));
      param_1 = (uint8_t (*)[32])(*param_1 + 2)) {
  }
  return param_1;
}

// func_0x180676570
uint8_t (*func_0x180676570(uint8_t (*param_1)[32],uint8_t (*param_2)[32],short param_3))[32]
{
  ushort uVal_1;
  uint uVal_2;
  uint8_t *pU64_3;
  uint uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [32];
  uint8_t auArr_9 [32];
  uint8_t auArr_10 [32];
  
  uVal_5 = (int64_t)param_2 - (int64_t)param_1;
  if (((uVal_5 & 0xffffffffffffffe0) == 0) || ((DAT_18083d264 & 0x20) == 0)) {
    if (((uVal_5 & 0xfffffffffffffff0) != 0) && ((DAT_18083d264 & 4) != 0)) {
      pU64_3 = *param_1;
      do {
        auArr_7._0_2_ = -(ushort)(*(short *)*param_1 == param_3);
        auArr_7._2_2_ = -(ushort)(*(short *)(*param_1 + 2) == param_3);
        auArr_7._4_2_ = -(ushort)(*(short *)(*param_1 + 4) == param_3);
        auArr_7._6_2_ = -(ushort)(*(short *)(*param_1 + 6) == param_3);
        auArr_7._8_2_ = -(ushort)(*(short *)(*param_1 + 8) == param_3);
        auArr_7._10_2_ = -(ushort)(*(short *)(*param_1 + 10) == param_3);
        auArr_7._12_2_ = -(ushort)(*(short *)(*param_1 + 0xc) == param_3);
        auArr_7._14_2_ = -(ushort)(*(short *)(*param_1 + 0xe) == param_3);
        uVal_1 = (ushort)(SUB161(auArr_7 >> 7,0) & 1) | (ushort)(SUB161(auArr_7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auArr_7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auArr_7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auArr_7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auArr_7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auArr_7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auArr_7 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auArr_7 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auArr_7 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auArr_7 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auArr_7 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auArr_7 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auArr_7 >> 0x6f,0) & 1) << 0xd |
                (ushort)((byte)(auArr_7._14_2_ >> 7) & 1) << 0xe | auArr_7._14_2_ & 0x8000;
        if (uVal_1 != 0) {
          uVal_4 = 0;
          if (uVal_1 != 0) {
            for (; (uVal_1 >> uVal_4 & 1) == 0; uVal_4 = uVal_4 + 1) {
            }
          }
          return (uint8_t (*)[32])(*param_1 + uVal_4);
        }
        param_1 = (uint8_t (*)[32])(*param_1 + 0x10);
      } while (param_1 != (uint8_t (*)[32])(pU64_3 + (uVal_5 & 0xfffffffffffffff0)));
    }
  }
  else {
    pU64_3 = *param_1;
    auArr_7 = vmovd_avx((int)param_3);
    auArr_7 = vpunpcklwd_avx(auArr_7,auArr_7);
    auArr_7 = vpshufd_avx(auArr_7,0);
    auArr_10 = vinsertf128_avx(ZEXT1632(auArr_7),auArr_7,1);
    do {
      auArr_8 = vpcmpeqw_avx2(auArr_10,*param_1);
      uVal_4 = (uint)(SUB321(auArr_8 >> 7,0) & 1) | (uint)(SUB321(auArr_8 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auArr_8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auArr_8 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auArr_8 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auArr_8 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auArr_8 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auArr_8 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auArr_8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auArr_8 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auArr_8 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auArr_8 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auArr_8 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auArr_8 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auArr_8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_8 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auArr_8 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auArr_8 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auArr_8 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auArr_8 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auArr_8 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auArr_8 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auArr_8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auArr_8 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auArr_8 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auArr_8 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auArr_8 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auArr_8 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auArr_8 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auArr_8 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auArr_8 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_8[31] >> 7) << 0x1f;
      if (uVal_4 != 0) goto LAB_180676613;
      param_1 = param_1 + 1;
    } while (param_1 != (uint8_t (*)[32])(pU64_3 + (uVal_5 & 0xffffffffffffffe0)));
    uVal_6 = (uint64_t)((uint)uVal_5 & 0x1c);
    if ((uVal_5 & 0x1c) != 0) {
      auArr_9 = vmovdqu_avx(*(uint8_t (*)[32])(&DAT_1806e2710 + -uVal_6));
      auArr_8 = vpmaskmovd_avx2(auArr_9,*param_1);
      auArr_10 = vpcmpeqw_avx2(auArr_8,auArr_10);
      auArr_10 = vpand_avx2(auArr_10,auArr_9);
      uVal_4 = (uint)(SUB321(auArr_10 >> 7,0) & 1) | (uint)(SUB321(auArr_10 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auArr_10 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auArr_10 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auArr_10 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auArr_10 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auArr_10 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auArr_10 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auArr_10 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auArr_10 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auArr_10 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auArr_10 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auArr_10 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auArr_10 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auArr_10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_10 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auArr_10 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auArr_10 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auArr_10 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auArr_10 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auArr_10 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auArr_10 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auArr_10 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auArr_10 >> 0xbf,0) << 0x17 | (uint)(SUB321(auArr_10 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auArr_10 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auArr_10 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auArr_10 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auArr_10 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auArr_10 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auArr_10 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_10[31] >> 7) << 0x1f
      ;
      if (uVal_4 != 0) {
LAB_180676613:
        uVal_2 = 0;
        for (; (uVal_4 & 1) == 0; uVal_4 = uVal_4 >> 1 | 0x80000000) {
          uVal_2 = uVal_2 + 1;
        }
        return (uint8_t (*)[32])(*param_1 + uVal_2);
      }
      param_1 = (uint8_t (*)[32])(*param_1 + uVal_6);
    }
  }
  for (; (param_1 != param_2 && (*(short *)*param_1 != param_3));
      param_1 = (uint8_t (*)[32])(*param_1 + 2)) {
  }
  return param_1;
}

// thunk_FUN_180676680
uint8_t (*thunk_FUN_180676680(uint8_t (*param_1)[32],uint8_t (*param_2)[32],int param_3))[32]
{
  ushort uVal_1;
  uint uVal_2;
  uint8_t *pU64_3;
  uint uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [32];
  uint8_t auArr_9 [32];
  uint8_t auArr_10 [32];
  
  uVal_5 = (int64_t)param_2 - (int64_t)param_1;
  if (((uVal_5 & 0xffffffffffffffe0) == 0) || ((DAT_18083d264 & 0x20) == 0)) {
    if (((uVal_5 & 0xfffffffffffffff0) != 0) && ((DAT_18083d264 & 4) != 0)) {
      pU64_3 = *param_1;
      do {
        auArr_7._0_4_ = -(uint)(*(int *)*param_1 == param_3);
        auArr_7._4_4_ = -(uint)(*(int *)(*param_1 + 4) == param_3);
        auArr_7._8_4_ = -(uint)(*(int *)(*param_1 + 8) == param_3);
        auArr_7._12_4_ = -(uint)(*(int *)(*param_1 + 0xc) == param_3);
        uVal_1 = (ushort)(SUB161(auArr_7 >> 7,0) & 1) | (ushort)(SUB161(auArr_7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auArr_7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auArr_7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auArr_7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auArr_7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auArr_7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auArr_7 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auArr_7 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auArr_7 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auArr_7 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auArr_7 >> 0x5f,0) & 1) << 0xb |
                (ushort)((byte)(auArr_7._12_4_ >> 7) & 1) << 0xc |
                (ushort)((byte)(auArr_7._12_4_ >> 0xf) & 1) << 0xd |
                (ushort)((byte)(auArr_7._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auArr_7._12_4_ >> 0x1f) << 0xf;
        if (uVal_1 != 0) {
          uVal_4 = 0;
          if (uVal_1 != 0) {
            for (; (uVal_1 >> uVal_4 & 1) == 0; uVal_4 = uVal_4 + 1) {
            }
          }
          return (uint8_t (*)[32])(*param_1 + uVal_4);
        }
        param_1 = (uint8_t (*)[32])(*param_1 + 0x10);
      } while (param_1 != (uint8_t (*)[32])(pU64_3 + (uVal_5 & 0xfffffffffffffff0)));
    }
    for (; (param_1 != param_2 && (*(int *)*param_1 != param_3));
        param_1 = (uint8_t (*)[32])(*param_1 + 4)) {
    }
    return param_1;
  }
  auArr_7 = vmovd_avx(param_3);
  auArr_7 = vpshufd_avx(auArr_7,0);
  auArr_10 = vinsertf128_avx(ZEXT1632(auArr_7),auArr_7,1);
  pU64_3 = *param_1;
  do {
    auArr_8 = vpcmpeqd_avx2(auArr_10,*param_1);
    uVal_4 = (uint)(SUB321(auArr_8 >> 7,0) & 1) | (uint)(SUB321(auArr_8 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auArr_8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auArr_8 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auArr_8 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auArr_8 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auArr_8 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auArr_8 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auArr_8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auArr_8 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auArr_8 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auArr_8 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auArr_8 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auArr_8 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auArr_8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_8 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auArr_8 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auArr_8 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auArr_8 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auArr_8 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auArr_8 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auArr_8 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auArr_8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auArr_8 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auArr_8 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auArr_8 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auArr_8 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auArr_8 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auArr_8 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auArr_8 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auArr_8 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_8[31] >> 7) << 0x1f;
    if (uVal_4 != 0) goto LAB_1806766f8;
    param_1 = param_1 + 1;
  } while (param_1 != (uint8_t (*)[32])(pU64_3 + (uVal_5 & 0xffffffffffffffe0)));
  uVal_6 = (uint64_t)((uint)uVal_5 & 0x1c);
  if ((uVal_5 & 0x1c) != 0) {
    auArr_9 = vmovdqu_avx(*(uint8_t (*)[32])(&DAT_1806e2710 + -uVal_6));
    auArr_8 = vpmaskmovd_avx2(auArr_9,*param_1);
    auArr_10 = vpcmpeqd_avx2(auArr_8,auArr_10);
    auArr_10 = vpand_avx2(auArr_10,auArr_9);
    uVal_4 = (uint)(SUB321(auArr_10 >> 7,0) & 1) | (uint)(SUB321(auArr_10 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auArr_10 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auArr_10 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auArr_10 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auArr_10 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auArr_10 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auArr_10 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auArr_10 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auArr_10 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auArr_10 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auArr_10 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auArr_10 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auArr_10 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auArr_10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_10 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auArr_10 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auArr_10 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auArr_10 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auArr_10 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auArr_10 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auArr_10 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auArr_10 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auArr_10 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auArr_10 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auArr_10 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auArr_10 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auArr_10 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auArr_10 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auArr_10 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auArr_10 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_10[31] >> 7) << 0x1f;
    if (uVal_4 != 0) {
LAB_1806766f8:
      uVal_2 = 0;
      for (; (uVal_4 & 1) == 0; uVal_4 = uVal_4 >> 1 | 0x80000000) {
        uVal_2 = uVal_2 + 1;
      }
      return (uint8_t (*)[32])(*param_1 + uVal_2);
    }
    param_1 = (uint8_t (*)[32])(*param_1 + uVal_6);
  }
  return param_1;
}

// func_0x180676680
uint8_t (*func_0x180676680(uint8_t (*param_1)[32],uint8_t (*param_2)[32],int param_3))[32]
{
  ushort uVal_1;
  uint uVal_2;
  uint8_t *pU64_3;
  uint uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [32];
  uint8_t auArr_9 [32];
  uint8_t auArr_10 [32];
  
  uVal_5 = (int64_t)param_2 - (int64_t)param_1;
  if (((uVal_5 & 0xffffffffffffffe0) == 0) || ((DAT_18083d264 & 0x20) == 0)) {
    if (((uVal_5 & 0xfffffffffffffff0) != 0) && ((DAT_18083d264 & 4) != 0)) {
      pU64_3 = *param_1;
      do {
        auArr_7._0_4_ = -(uint)(*(int *)*param_1 == param_3);
        auArr_7._4_4_ = -(uint)(*(int *)(*param_1 + 4) == param_3);
        auArr_7._8_4_ = -(uint)(*(int *)(*param_1 + 8) == param_3);
        auArr_7._12_4_ = -(uint)(*(int *)(*param_1 + 0xc) == param_3);
        uVal_1 = (ushort)(SUB161(auArr_7 >> 7,0) & 1) | (ushort)(SUB161(auArr_7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auArr_7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auArr_7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auArr_7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auArr_7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auArr_7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auArr_7 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auArr_7 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auArr_7 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auArr_7 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auArr_7 >> 0x5f,0) & 1) << 0xb |
                (ushort)((byte)(auArr_7._12_4_ >> 7) & 1) << 0xc |
                (ushort)((byte)(auArr_7._12_4_ >> 0xf) & 1) << 0xd |
                (ushort)((byte)(auArr_7._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auArr_7._12_4_ >> 0x1f) << 0xf;
        if (uVal_1 != 0) {
          uVal_4 = 0;
          if (uVal_1 != 0) {
            for (; (uVal_1 >> uVal_4 & 1) == 0; uVal_4 = uVal_4 + 1) {
            }
          }
          return (uint8_t (*)[32])(*param_1 + uVal_4);
        }
        param_1 = (uint8_t (*)[32])(*param_1 + 0x10);
      } while (param_1 != (uint8_t (*)[32])(pU64_3 + (uVal_5 & 0xfffffffffffffff0)));
    }
    for (; (param_1 != param_2 && (*(int *)*param_1 != param_3));
        param_1 = (uint8_t (*)[32])(*param_1 + 4)) {
    }
    return param_1;
  }
  auArr_7 = vmovd_avx(param_3);
  auArr_7 = vpshufd_avx(auArr_7,0);
  auArr_10 = vinsertf128_avx(ZEXT1632(auArr_7),auArr_7,1);
  pU64_3 = *param_1;
  do {
    auArr_8 = vpcmpeqd_avx2(auArr_10,*param_1);
    uVal_4 = (uint)(SUB321(auArr_8 >> 7,0) & 1) | (uint)(SUB321(auArr_8 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auArr_8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auArr_8 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auArr_8 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auArr_8 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auArr_8 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auArr_8 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auArr_8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auArr_8 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auArr_8 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auArr_8 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auArr_8 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auArr_8 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auArr_8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_8 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auArr_8 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auArr_8 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auArr_8 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auArr_8 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auArr_8 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auArr_8 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auArr_8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auArr_8 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auArr_8 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auArr_8 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auArr_8 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auArr_8 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auArr_8 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auArr_8 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auArr_8 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_8[31] >> 7) << 0x1f;
    if (uVal_4 != 0) goto LAB_1806766f8;
    param_1 = param_1 + 1;
  } while (param_1 != (uint8_t (*)[32])(pU64_3 + (uVal_5 & 0xffffffffffffffe0)));
  uVal_6 = (uint64_t)((uint)uVal_5 & 0x1c);
  if ((uVal_5 & 0x1c) != 0) {
    auArr_9 = vmovdqu_avx(*(uint8_t (*)[32])(&DAT_1806e2710 + -uVal_6));
    auArr_8 = vpmaskmovd_avx2(auArr_9,*param_1);
    auArr_10 = vpcmpeqd_avx2(auArr_8,auArr_10);
    auArr_10 = vpand_avx2(auArr_10,auArr_9);
    uVal_4 = (uint)(SUB321(auArr_10 >> 7,0) & 1) | (uint)(SUB321(auArr_10 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auArr_10 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auArr_10 >> 0x1f,0) & 1) << 3
            | (uint)(SUB321(auArr_10 >> 0x27,0) & 1) << 4 |
            (uint)(SUB321(auArr_10 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auArr_10 >> 0x37,0) & 1) << 6
            | (uint)(SUB321(auArr_10 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auArr_10 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auArr_10 >> 0x4f,0) & 1) << 9
            | (uint)(SUB321(auArr_10 >> 0x57,0) & 1) << 10 |
            (uint)(SUB321(auArr_10 >> 0x5f,0) & 1) << 0xb |
            (uint)(SUB321(auArr_10 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auArr_10 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auArr_10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_10 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auArr_10 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auArr_10 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auArr_10 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auArr_10 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auArr_10 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auArr_10 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auArr_10 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auArr_10 >> 0xbf,0) << 0x17
            | (uint)(SUB321(auArr_10 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auArr_10 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auArr_10 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auArr_10 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auArr_10 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auArr_10 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auArr_10 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_10[31] >> 7) << 0x1f;
    if (uVal_4 != 0) {
LAB_1806766f8:
      uVal_2 = 0;
      for (; (uVal_4 & 1) == 0; uVal_4 = uVal_4 >> 1 | 0x80000000) {
        uVal_2 = uVal_2 + 1;
      }
      return (uint8_t (*)[32])(*param_1 + uVal_2);
    }
    param_1 = (uint8_t (*)[32])(*param_1 + uVal_6);
  }
  return param_1;
}

// thunk_FUN_180676770
uint8_t (*thunk_FUN_180676770(uint8_t (*param_1)[32],uint8_t (*param_2)[32],byte param_3))[32]
{
  ushort uVal_1;
  uint8_t (*pArr16_2)[32];
  uint8_t (*pArr16_3)[32];
  uint8_t (*pArr16_4)[32];
  uint8_t (*pArr16_5)[32];
  uint8_t (*pArr16_6)[32];
  uint8_t (*pArr16_7)[32];
  uint8_t (*pArr16_8)[32];
  uint8_t (*pArr16_9)[32];
  uint8_t (*pArr16_10)[32];
  uint8_t (*pArr16_11)[32];
  uint8_t (*pArr16_12)[32];
  uint8_t (*pArr16_13)[32];
  uint8_t (*pArr16_14)[32];
  uint8_t (*pArr16_15)[32];
  uint8_t (*pArr16_16)[32];
  uint8_t (*pArr16_17)[32];
  uint uVal_18;
  uint8_t (*pArr16_19)[32];
  uint64_t uVal_20;
  uint64_t uVal_21;
  uint8_t auArr_22 [16];
  uint8_t in_YMM0 [32];
  uint8_t auArr_23 [16];
  uint8_t auArr_24 [32];
  uint8_t auArr_25 [32];
  uint8_t auArr_26 [32];
  
  uVal_20 = (int64_t)param_2 - (int64_t)param_1;
  pArr16_19 = param_2;
  if (((uVal_20 & 0xffffffffffffffe0) == 0) || ((DAT_18083d264 & 0x20) == 0)) {
    if (((uVal_20 & 0xfffffffffffffff0) != 0) && ((DAT_18083d264 & 4) != 0)) {
      auArr_23 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        pArr16_2 = pArr16_19 + -1;
        pArr16_3 = pArr16_19 + -1;
        pArr16_4 = pArr16_19 + -1;
        pArr16_5 = pArr16_19 + -1;
        pArr16_6 = pArr16_19 + -1;
        pArr16_7 = pArr16_19 + -1;
        pArr16_8 = pArr16_19 + -1;
        pArr16_9 = pArr16_19 + -1;
        pArr16_10 = pArr16_19 + -1;
        pArr16_11 = pArr16_19 + -1;
        pArr16_12 = pArr16_19 + -1;
        pArr16_13 = pArr16_19 + -1;
        pArr16_14 = pArr16_19 + -1;
        pArr16_15 = pArr16_19 + -1;
        pArr16_16 = pArr16_19 + -1;
        pArr16_17 = pArr16_19 + -1;
        pArr16_19 = (uint8_t (*)[32])(pArr16_19[-1] + 0x10);
        auArr_22[0] = -((*pArr16_2)[0x10] == auArr_23[0]);
        auArr_22[1] = -((*pArr16_3)[0x11] == auArr_23[1]);
        auArr_22[2] = -((*pArr16_4)[0x12] == auArr_23[2]);
        auArr_22[3] = -((*pArr16_5)[0x13] == auArr_23[3]);
        auArr_22[4] = -((*pArr16_6)[0x14] == auArr_23[4]);
        auArr_22[5] = -((*pArr16_7)[0x15] == auArr_23[5]);
        auArr_22[6] = -((*pArr16_8)[0x16] == auArr_23[6]);
        auArr_22[7] = -((*pArr16_9)[0x17] == auArr_23[7]);
        auArr_22[8] = -((*pArr16_10)[0x18] == auArr_23[8]);
        auArr_22[9] = -((*pArr16_11)[0x19] == auArr_23[9]);
        auArr_22[10] = -((*pArr16_12)[0x1a] == auArr_23[10]);
        auArr_22[11] = -((*pArr16_13)[0x1b] == auArr_23[11]);
        auArr_22[12] = -((*pArr16_14)[0x1c] == auArr_23[12]);
        auArr_22[13] = -((*pArr16_15)[0x1d] == auArr_23[13]);
        auArr_22[14] = -((*pArr16_16)[0x1e] == auArr_23[14]);
        auArr_22[15] = -((*pArr16_17)[0x1f] == auArr_23[15]);
        uVal_1 = (ushort)(SUB161(auArr_22 >> 7,0) & 1) | (ushort)(SUB161(auArr_22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auArr_22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auArr_22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auArr_22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auArr_22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auArr_22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auArr_22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auArr_22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auArr_22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auArr_22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auArr_22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auArr_22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auArr_22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auArr_22 >> 0x77,0) & 1) << 0xe | (ushort)(auArr_22[15] >> 7) << 0xf;
        if (uVal_1 != 0) {
          uVal_18 = 0x1f;
          if (uVal_1 != 0) {
            for (; uVal_1 >> uVal_18 == 0; uVal_18 = uVal_18 - 1) {
            }
          }
          return (uint8_t (*)[32])(*pArr16_19 + uVal_18);
        }
      } while (pArr16_19 != (uint8_t (*)[32])((int64_t)param_2 - (uVal_20 & 0xfffffffffffffff0)));
    }
  }
  else {
    auArr_23 = vmovd_avx((int)(char)param_3);
    auArr_22 = vpxor_avx(in_YMM0._0_16_,in_YMM0._0_16_);
    auArr_23 = vpshufb_avx(auArr_23,auArr_22);
    auArr_26 = vinsertf128_avx(ZEXT1632(auArr_23),auArr_23,1);
    do {
      auArr_24 = vpcmpeqb_avx2(auArr_26,pArr16_19[-1]);
      pArr16_19 = pArr16_19 + -1;
      uVal_18 = (uint)(SUB321(auArr_24 >> 7,0) & 1) | (uint)(SUB321(auArr_24 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auArr_24 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auArr_24 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auArr_24 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auArr_24 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auArr_24 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auArr_24 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auArr_24 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auArr_24 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auArr_24 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auArr_24 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auArr_24 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auArr_24 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auArr_24 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_24 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auArr_24 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auArr_24 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auArr_24 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auArr_24 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auArr_24 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auArr_24 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auArr_24 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auArr_24 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auArr_24 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auArr_24 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auArr_24 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auArr_24 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auArr_24 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auArr_24 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auArr_24 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auArr_24[31] >> 7) << 0x1f;
      if (uVal_18 != 0) goto LAB_180676829;
    } while (pArr16_19 != (uint8_t (*)[32])((int64_t)param_2 - (uVal_20 & 0xffffffffffffffe0)));
    uVal_21 = (uint64_t)((uint)uVal_20 & 0x1c);
    if ((uVal_20 & 0x1c) != 0) {
      pArr16_19 = (uint8_t (*)[32])((int64_t)pArr16_19 - uVal_21);
      auArr_25 = vmovdqu_avx(*(uint8_t (*)[32])(&DAT_1806e2710 + -uVal_21));
      auArr_24 = vpmaskmovd_avx2(auArr_25,*pArr16_19);
      auArr_26 = vpcmpeqb_avx2(auArr_24,auArr_26);
      auArr_26 = vpand_avx2(auArr_26,auArr_25);
      uVal_18 = (uint)(SUB321(auArr_26 >> 7,0) & 1) | (uint)(SUB321(auArr_26 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auArr_26 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auArr_26 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auArr_26 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auArr_26 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auArr_26 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auArr_26 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auArr_26 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auArr_26 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auArr_26 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auArr_26 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auArr_26 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auArr_26 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auArr_26 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_26 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auArr_26 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auArr_26 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auArr_26 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auArr_26 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auArr_26 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auArr_26 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auArr_26 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auArr_26 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auArr_26 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auArr_26 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auArr_26 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auArr_26 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auArr_26 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auArr_26 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auArr_26 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auArr_26[31] >> 7) << 0x1f;
      if (uVal_18 != 0) {
LAB_180676829:
        return (uint8_t (*)[32])(*pArr16_19 + (0x1f - LZCOUNT(uVal_18)));
      }
    }
  }
  do {
    if (pArr16_19 == param_1) {
      return param_2;
    }
    pArr16_19 = (uint8_t (*)[32])(pArr16_19[-1] + 0x1f);
  } while ((*pArr16_19)[0] != param_3);
  return pArr16_19;
}

// func_0x180676770
uint8_t (*func_0x180676770(uint8_t (*param_1)[32],uint8_t (*param_2)[32],byte param_3))[32]
{
  ushort uVal_1;
  uint8_t (*pArr16_2)[32];
  uint8_t (*pArr16_3)[32];
  uint8_t (*pArr16_4)[32];
  uint8_t (*pArr16_5)[32];
  uint8_t (*pArr16_6)[32];
  uint8_t (*pArr16_7)[32];
  uint8_t (*pArr16_8)[32];
  uint8_t (*pArr16_9)[32];
  uint8_t (*pArr16_10)[32];
  uint8_t (*pArr16_11)[32];
  uint8_t (*pArr16_12)[32];
  uint8_t (*pArr16_13)[32];
  uint8_t (*pArr16_14)[32];
  uint8_t (*pArr16_15)[32];
  uint8_t (*pArr16_16)[32];
  uint8_t (*pArr16_17)[32];
  uint uVal_18;
  uint8_t (*pArr16_19)[32];
  uint64_t uVal_20;
  uint64_t uVal_21;
  uint8_t auArr_22 [16];
  uint8_t in_YMM0 [32];
  uint8_t auArr_23 [16];
  uint8_t auArr_24 [32];
  uint8_t auArr_25 [32];
  uint8_t auArr_26 [32];
  
  uVal_20 = (int64_t)param_2 - (int64_t)param_1;
  pArr16_19 = param_2;
  if (((uVal_20 & 0xffffffffffffffe0) == 0) || ((DAT_18083d264 & 0x20) == 0)) {
    if (((uVal_20 & 0xfffffffffffffff0) != 0) && ((DAT_18083d264 & 4) != 0)) {
      auArr_23 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        pArr16_2 = pArr16_19 + -1;
        pArr16_3 = pArr16_19 + -1;
        pArr16_4 = pArr16_19 + -1;
        pArr16_5 = pArr16_19 + -1;
        pArr16_6 = pArr16_19 + -1;
        pArr16_7 = pArr16_19 + -1;
        pArr16_8 = pArr16_19 + -1;
        pArr16_9 = pArr16_19 + -1;
        pArr16_10 = pArr16_19 + -1;
        pArr16_11 = pArr16_19 + -1;
        pArr16_12 = pArr16_19 + -1;
        pArr16_13 = pArr16_19 + -1;
        pArr16_14 = pArr16_19 + -1;
        pArr16_15 = pArr16_19 + -1;
        pArr16_16 = pArr16_19 + -1;
        pArr16_17 = pArr16_19 + -1;
        pArr16_19 = (uint8_t (*)[32])(pArr16_19[-1] + 0x10);
        auArr_22[0] = -((*pArr16_2)[0x10] == auArr_23[0]);
        auArr_22[1] = -((*pArr16_3)[0x11] == auArr_23[1]);
        auArr_22[2] = -((*pArr16_4)[0x12] == auArr_23[2]);
        auArr_22[3] = -((*pArr16_5)[0x13] == auArr_23[3]);
        auArr_22[4] = -((*pArr16_6)[0x14] == auArr_23[4]);
        auArr_22[5] = -((*pArr16_7)[0x15] == auArr_23[5]);
        auArr_22[6] = -((*pArr16_8)[0x16] == auArr_23[6]);
        auArr_22[7] = -((*pArr16_9)[0x17] == auArr_23[7]);
        auArr_22[8] = -((*pArr16_10)[0x18] == auArr_23[8]);
        auArr_22[9] = -((*pArr16_11)[0x19] == auArr_23[9]);
        auArr_22[10] = -((*pArr16_12)[0x1a] == auArr_23[10]);
        auArr_22[11] = -((*pArr16_13)[0x1b] == auArr_23[11]);
        auArr_22[12] = -((*pArr16_14)[0x1c] == auArr_23[12]);
        auArr_22[13] = -((*pArr16_15)[0x1d] == auArr_23[13]);
        auArr_22[14] = -((*pArr16_16)[0x1e] == auArr_23[14]);
        auArr_22[15] = -((*pArr16_17)[0x1f] == auArr_23[15]);
        uVal_1 = (ushort)(SUB161(auArr_22 >> 7,0) & 1) | (ushort)(SUB161(auArr_22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auArr_22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auArr_22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auArr_22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auArr_22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auArr_22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auArr_22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auArr_22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auArr_22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auArr_22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auArr_22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auArr_22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auArr_22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auArr_22 >> 0x77,0) & 1) << 0xe | (ushort)(auArr_22[15] >> 7) << 0xf;
        if (uVal_1 != 0) {
          uVal_18 = 0x1f;
          if (uVal_1 != 0) {
            for (; uVal_1 >> uVal_18 == 0; uVal_18 = uVal_18 - 1) {
            }
          }
          return (uint8_t (*)[32])(*pArr16_19 + uVal_18);
        }
      } while (pArr16_19 != (uint8_t (*)[32])((int64_t)param_2 - (uVal_20 & 0xfffffffffffffff0)));
    }
  }
  else {
    auArr_23 = vmovd_avx((int)(char)param_3);
    auArr_22 = vpxor_avx(in_YMM0._0_16_,in_YMM0._0_16_);
    auArr_23 = vpshufb_avx(auArr_23,auArr_22);
    auArr_26 = vinsertf128_avx(ZEXT1632(auArr_23),auArr_23,1);
    do {
      auArr_24 = vpcmpeqb_avx2(auArr_26,pArr16_19[-1]);
      pArr16_19 = pArr16_19 + -1;
      uVal_18 = (uint)(SUB321(auArr_24 >> 7,0) & 1) | (uint)(SUB321(auArr_24 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auArr_24 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auArr_24 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auArr_24 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auArr_24 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auArr_24 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auArr_24 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auArr_24 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auArr_24 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auArr_24 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auArr_24 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auArr_24 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auArr_24 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auArr_24 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_24 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auArr_24 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auArr_24 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auArr_24 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auArr_24 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auArr_24 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auArr_24 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auArr_24 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auArr_24 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auArr_24 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auArr_24 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auArr_24 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auArr_24 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auArr_24 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auArr_24 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auArr_24 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auArr_24[31] >> 7) << 0x1f;
      if (uVal_18 != 0) goto LAB_180676829;
    } while (pArr16_19 != (uint8_t (*)[32])((int64_t)param_2 - (uVal_20 & 0xffffffffffffffe0)));
    uVal_21 = (uint64_t)((uint)uVal_20 & 0x1c);
    if ((uVal_20 & 0x1c) != 0) {
      pArr16_19 = (uint8_t (*)[32])((int64_t)pArr16_19 - uVal_21);
      auArr_25 = vmovdqu_avx(*(uint8_t (*)[32])(&DAT_1806e2710 + -uVal_21));
      auArr_24 = vpmaskmovd_avx2(auArr_25,*pArr16_19);
      auArr_26 = vpcmpeqb_avx2(auArr_24,auArr_26);
      auArr_26 = vpand_avx2(auArr_26,auArr_25);
      uVal_18 = (uint)(SUB321(auArr_26 >> 7,0) & 1) | (uint)(SUB321(auArr_26 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auArr_26 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auArr_26 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auArr_26 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auArr_26 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auArr_26 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auArr_26 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auArr_26 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auArr_26 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auArr_26 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auArr_26 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auArr_26 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auArr_26 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auArr_26 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_26 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auArr_26 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auArr_26 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auArr_26 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auArr_26 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auArr_26 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auArr_26 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auArr_26 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auArr_26 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auArr_26 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auArr_26 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auArr_26 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auArr_26 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auArr_26 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auArr_26 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auArr_26 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auArr_26[31] >> 7) << 0x1f;
      if (uVal_18 != 0) {
LAB_180676829:
        return (uint8_t (*)[32])(*pArr16_19 + (0x1f - LZCOUNT(uVal_18)));
      }
    }
  }
  do {
    if (pArr16_19 == param_1) {
      return param_2;
    }
    pArr16_19 = (uint8_t (*)[32])(pArr16_19[-1] + 0x1f);
  } while ((*pArr16_19)[0] != param_3);
  return pArr16_19;
}

// thunk_FUN_1806768a0
uint8_t (*thunk_FUN_1806768a0(uint8_t (*param_1)[32],uint8_t (*param_2)[32],short param_3))[32]
{
  ushort uVal_1;
  uint8_t (*pArr16_2)[32];
  uint8_t (*pArr16_3)[32];
  uint8_t (*pArr16_4)[32];
  uint8_t (*pArr16_5)[32];
  uint8_t (*pArr16_6)[32];
  uint8_t (*pArr16_7)[32];
  uint8_t (*pArr16_8)[32];
  uint8_t (*pArr16_9)[32];
  uint uVal_10;
  uint8_t (*pArr16_11)[32];
  uint64_t uVal_12;
  uint64_t uVal_13;
  uint8_t auArr_14 [16];
  uint8_t auArr_15 [32];
  uint8_t auArr_16 [32];
  uint8_t auArr_17 [32];
  
  uVal_12 = (int64_t)param_2 - (int64_t)param_1;
  pArr16_11 = param_2;
  if (((uVal_12 & 0xffffffffffffffe0) == 0) || ((DAT_18083d264 & 0x20) == 0)) {
    if (((uVal_12 & 0xfffffffffffffff0) != 0) && ((DAT_18083d264 & 4) != 0)) {
      do {
        pArr16_2 = pArr16_11 + -1;
        pArr16_3 = pArr16_11 + -1;
        pArr16_4 = pArr16_11 + -1;
        pArr16_5 = pArr16_11 + -1;
        pArr16_6 = pArr16_11 + -1;
        pArr16_7 = pArr16_11 + -1;
        pArr16_8 = pArr16_11 + -1;
        pArr16_9 = pArr16_11 + -1;
        pArr16_11 = (uint8_t (*)[32])(pArr16_11[-1] + 0x10);
        auArr_14._0_2_ = -(ushort)(*(short *)(*pArr16_2 + 0x10) == param_3);
        auArr_14._2_2_ = -(ushort)(*(short *)(*pArr16_3 + 0x12) == param_3);
        auArr_14._4_2_ = -(ushort)(*(short *)(*pArr16_4 + 0x14) == param_3);
        auArr_14._6_2_ = -(ushort)(*(short *)(*pArr16_5 + 0x16) == param_3);
        auArr_14._8_2_ = -(ushort)(*(short *)(*pArr16_6 + 0x18) == param_3);
        auArr_14._10_2_ = -(ushort)(*(short *)(*pArr16_7 + 0x1a) == param_3);
        auArr_14._12_2_ = -(ushort)(*(short *)(*pArr16_8 + 0x1c) == param_3);
        auArr_14._14_2_ = -(ushort)(*(short *)(*pArr16_9 + 0x1e) == param_3);
        uVal_1 = (ushort)(SUB161(auArr_14 >> 7,0) & 1) | (ushort)(SUB161(auArr_14 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auArr_14 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auArr_14 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auArr_14 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auArr_14 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auArr_14 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auArr_14 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auArr_14 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auArr_14 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auArr_14 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auArr_14 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auArr_14 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auArr_14 >> 0x6f,0) & 1) << 0xd |
                (ushort)((byte)(auArr_14._14_2_ >> 7) & 1) << 0xe | auArr_14._14_2_ & 0x8000;
        if (uVal_1 != 0) {
          uVal_10 = 0x1f;
          if (uVal_1 != 0) {
            for (; uVal_1 >> uVal_10 == 0; uVal_10 = uVal_10 - 1) {
            }
          }
          return (uint8_t (*)[32])(pArr16_11[-1] + (uint64_t)uVal_10 + 0x1f);
        }
      } while (pArr16_11 != (uint8_t (*)[32])((int64_t)param_2 - (uVal_12 & 0xfffffffffffffff0)));
    }
  }
  else {
    auArr_14 = vmovd_avx((int)param_3);
    auArr_14 = vpunpcklwd_avx(auArr_14,auArr_14);
    auArr_14 = vpshufd_avx(auArr_14,0);
    auArr_17 = vinsertf128_avx(ZEXT1632(auArr_14),auArr_14,1);
    do {
      auArr_15 = vpcmpeqw_avx2(auArr_17,pArr16_11[-1]);
      pArr16_11 = pArr16_11 + -1;
      uVal_10 = (uint)(SUB321(auArr_15 >> 7,0) & 1) | (uint)(SUB321(auArr_15 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auArr_15 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auArr_15 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auArr_15 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auArr_15 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auArr_15 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auArr_15 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auArr_15 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auArr_15 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auArr_15 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auArr_15 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auArr_15 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auArr_15 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auArr_15 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_15 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auArr_15 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auArr_15 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auArr_15 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auArr_15 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auArr_15 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auArr_15 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auArr_15 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auArr_15 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auArr_15 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auArr_15 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auArr_15 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auArr_15 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auArr_15 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auArr_15 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auArr_15 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auArr_15[31] >> 7) << 0x1f;
      if (uVal_10 != 0) goto LAB_18067695b;
    } while (pArr16_11 != (uint8_t (*)[32])((int64_t)param_2 - (uVal_12 & 0xffffffffffffffe0)));
    uVal_13 = (uint64_t)((uint)uVal_12 & 0x1c);
    if ((uVal_12 & 0x1c) != 0) {
      pArr16_11 = (uint8_t (*)[32])((int64_t)pArr16_11 - uVal_13);
      auArr_16 = vmovdqu_avx(*(uint8_t (*)[32])(&DAT_1806e2710 + -uVal_13));
      auArr_15 = vpmaskmovd_avx2(auArr_16,*pArr16_11);
      auArr_17 = vpcmpeqw_avx2(auArr_15,auArr_17);
      auArr_17 = vpand_avx2(auArr_17,auArr_16);
      uVal_10 = (uint)(SUB321(auArr_17 >> 7,0) & 1) | (uint)(SUB321(auArr_17 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auArr_17 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auArr_17 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auArr_17 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auArr_17 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auArr_17 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auArr_17 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auArr_17 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auArr_17 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auArr_17 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auArr_17 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auArr_17 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auArr_17 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auArr_17 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_17 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auArr_17 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auArr_17 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auArr_17 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auArr_17 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auArr_17 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auArr_17 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auArr_17 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auArr_17 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auArr_17 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auArr_17 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auArr_17 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auArr_17 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auArr_17 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auArr_17 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auArr_17 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auArr_17[31] >> 7) << 0x1f;
      if (uVal_10 != 0) {
LAB_18067695b:
        return (uint8_t (*)[32])(pArr16_11[-1] + (uint64_t)(0x1f - LZCOUNT(uVal_10)) + 0x1f);
      }
    }
  }
  do {
    if (pArr16_11 == param_1) {
      return param_2;
    }
    pArr16_11 = (uint8_t (*)[32])(pArr16_11[-1] + 0x1e);
  } while (*(short *)*pArr16_11 != param_3);
  return pArr16_11;
}

// func_0x1806768a0
uint8_t (*func_0x1806768a0(uint8_t (*param_1)[32],uint8_t (*param_2)[32],short param_3))[32]
{
  ushort uVal_1;
  uint8_t (*pArr16_2)[32];
  uint8_t (*pArr16_3)[32];
  uint8_t (*pArr16_4)[32];
  uint8_t (*pArr16_5)[32];
  uint8_t (*pArr16_6)[32];
  uint8_t (*pArr16_7)[32];
  uint8_t (*pArr16_8)[32];
  uint8_t (*pArr16_9)[32];
  uint uVal_10;
  uint8_t (*pArr16_11)[32];
  uint64_t uVal_12;
  uint64_t uVal_13;
  uint8_t auArr_14 [16];
  uint8_t auArr_15 [32];
  uint8_t auArr_16 [32];
  uint8_t auArr_17 [32];
  
  uVal_12 = (int64_t)param_2 - (int64_t)param_1;
  pArr16_11 = param_2;
  if (((uVal_12 & 0xffffffffffffffe0) == 0) || ((DAT_18083d264 & 0x20) == 0)) {
    if (((uVal_12 & 0xfffffffffffffff0) != 0) && ((DAT_18083d264 & 4) != 0)) {
      do {
        pArr16_2 = pArr16_11 + -1;
        pArr16_3 = pArr16_11 + -1;
        pArr16_4 = pArr16_11 + -1;
        pArr16_5 = pArr16_11 + -1;
        pArr16_6 = pArr16_11 + -1;
        pArr16_7 = pArr16_11 + -1;
        pArr16_8 = pArr16_11 + -1;
        pArr16_9 = pArr16_11 + -1;
        pArr16_11 = (uint8_t (*)[32])(pArr16_11[-1] + 0x10);
        auArr_14._0_2_ = -(ushort)(*(short *)(*pArr16_2 + 0x10) == param_3);
        auArr_14._2_2_ = -(ushort)(*(short *)(*pArr16_3 + 0x12) == param_3);
        auArr_14._4_2_ = -(ushort)(*(short *)(*pArr16_4 + 0x14) == param_3);
        auArr_14._6_2_ = -(ushort)(*(short *)(*pArr16_5 + 0x16) == param_3);
        auArr_14._8_2_ = -(ushort)(*(short *)(*pArr16_6 + 0x18) == param_3);
        auArr_14._10_2_ = -(ushort)(*(short *)(*pArr16_7 + 0x1a) == param_3);
        auArr_14._12_2_ = -(ushort)(*(short *)(*pArr16_8 + 0x1c) == param_3);
        auArr_14._14_2_ = -(ushort)(*(short *)(*pArr16_9 + 0x1e) == param_3);
        uVal_1 = (ushort)(SUB161(auArr_14 >> 7,0) & 1) | (ushort)(SUB161(auArr_14 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auArr_14 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auArr_14 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auArr_14 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auArr_14 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auArr_14 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auArr_14 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auArr_14 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auArr_14 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auArr_14 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auArr_14 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auArr_14 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auArr_14 >> 0x6f,0) & 1) << 0xd |
                (ushort)((byte)(auArr_14._14_2_ >> 7) & 1) << 0xe | auArr_14._14_2_ & 0x8000;
        if (uVal_1 != 0) {
          uVal_10 = 0x1f;
          if (uVal_1 != 0) {
            for (; uVal_1 >> uVal_10 == 0; uVal_10 = uVal_10 - 1) {
            }
          }
          return (uint8_t (*)[32])(pArr16_11[-1] + (uint64_t)uVal_10 + 0x1f);
        }
      } while (pArr16_11 != (uint8_t (*)[32])((int64_t)param_2 - (uVal_12 & 0xfffffffffffffff0)));
    }
  }
  else {
    auArr_14 = vmovd_avx((int)param_3);
    auArr_14 = vpunpcklwd_avx(auArr_14,auArr_14);
    auArr_14 = vpshufd_avx(auArr_14,0);
    auArr_17 = vinsertf128_avx(ZEXT1632(auArr_14),auArr_14,1);
    do {
      auArr_15 = vpcmpeqw_avx2(auArr_17,pArr16_11[-1]);
      pArr16_11 = pArr16_11 + -1;
      uVal_10 = (uint)(SUB321(auArr_15 >> 7,0) & 1) | (uint)(SUB321(auArr_15 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auArr_15 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auArr_15 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auArr_15 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auArr_15 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auArr_15 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auArr_15 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auArr_15 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auArr_15 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auArr_15 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auArr_15 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auArr_15 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auArr_15 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auArr_15 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_15 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auArr_15 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auArr_15 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auArr_15 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auArr_15 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auArr_15 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auArr_15 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auArr_15 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auArr_15 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auArr_15 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auArr_15 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auArr_15 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auArr_15 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auArr_15 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auArr_15 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auArr_15 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auArr_15[31] >> 7) << 0x1f;
      if (uVal_10 != 0) goto LAB_18067695b;
    } while (pArr16_11 != (uint8_t (*)[32])((int64_t)param_2 - (uVal_12 & 0xffffffffffffffe0)));
    uVal_13 = (uint64_t)((uint)uVal_12 & 0x1c);
    if ((uVal_12 & 0x1c) != 0) {
      pArr16_11 = (uint8_t (*)[32])((int64_t)pArr16_11 - uVal_13);
      auArr_16 = vmovdqu_avx(*(uint8_t (*)[32])(&DAT_1806e2710 + -uVal_13));
      auArr_15 = vpmaskmovd_avx2(auArr_16,*pArr16_11);
      auArr_17 = vpcmpeqw_avx2(auArr_15,auArr_17);
      auArr_17 = vpand_avx2(auArr_17,auArr_16);
      uVal_10 = (uint)(SUB321(auArr_17 >> 7,0) & 1) | (uint)(SUB321(auArr_17 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auArr_17 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auArr_17 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auArr_17 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auArr_17 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auArr_17 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auArr_17 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auArr_17 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auArr_17 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auArr_17 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auArr_17 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auArr_17 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auArr_17 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auArr_17 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_17 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auArr_17 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auArr_17 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auArr_17 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auArr_17 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auArr_17 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auArr_17 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auArr_17 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auArr_17 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auArr_17 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auArr_17 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auArr_17 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auArr_17 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auArr_17 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auArr_17 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auArr_17 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auArr_17[31] >> 7) << 0x1f;
      if (uVal_10 != 0) {
LAB_18067695b:
        return (uint8_t (*)[32])(pArr16_11[-1] + (uint64_t)(0x1f - LZCOUNT(uVal_10)) + 0x1f);
      }
    }
  }
  do {
    if (pArr16_11 == param_1) {
      return param_2;
    }
    pArr16_11 = (uint8_t (*)[32])(pArr16_11[-1] + 0x1e);
  } while (*(short *)*pArr16_11 != param_3);
  return pArr16_11;
}

// func_0x1806769d0
void func_0x1806769d0(char *param_1,char *param_2,char *param_3,char *param_4)
{
  char *fnPtr_1;
  
  if (((byte)DAT_18083d264 & 4) != 0) {
    func_0x180677020(param_1,(int64_t)param_2 - (int64_t)param_1,param_3,
                  (int64_t)param_4 - (int64_t)param_3);
    return;
  }
  if (param_1 != param_2) {
    do {
      if (param_3 != param_4) {
        fnPtr_1 = param_3;
        do {
          if (*param_1 == *fnPtr_1) {
            return;
          }
          fnPtr_1 = fnPtr_1 + 1;
        } while (fnPtr_1 != param_4);
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}

// thunk_FUN_180676a30
int64_t thunk_FUN_180676a30(int64_t param_1,int64_t param_2,byte *param_3,int64_t param_4)
{
  byte *pU8_1;
  byte bFlag_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  char acStack_140 [280];
  
  if ((DAT_18083d264 & 4) == 0) {
    func_0x1806ab010(acStack_140,0,0x100);
    pU8_1 = param_3 + param_4;
    if (param_3 != pU8_1) {
      do {
        bFlag_2 = *param_3;
        param_3 = param_3 + 1;
        acStack_140[bFlag_2] = '\x01';
      } while (param_3 != pU8_1);
    }
    lVal_4 = 0;
    if (param_2 == 0) {
      return -1;
    }
    while (acStack_140[*(byte *)(param_1 + lVal_4)] == '\0') {
      lVal_4 = lVal_4 + 1;
      if (lVal_4 == param_2) {
        return -1;
      }
    }
  }
  else {
    iVal_3 = func_0x180677200(param_2,param_4,DAT_18083d264 >> 5 & 0xffffff01);
    if (iVal_3 == 2) {
      lVal_4 = func_0x1806776e0(param_1,param_2,param_3);
      return lVal_4;
    }
    if (iVal_3 == 1) {
      func_0x1806ab010(acStack_140,0,0x100);
      pU8_1 = param_3 + param_4;
      if (param_3 != pU8_1) {
        do {
          bFlag_2 = *param_3;
          param_3 = param_3 + 1;
          acStack_140[bFlag_2] = '\x01';
        } while (param_3 != pU8_1);
      }
      lVal_4 = 0;
      if (param_2 == 0) {
        return -1;
      }
      do {
        if (acStack_140[*(byte *)(param_1 + lVal_4)] != '\0') {
          return lVal_4;
        }
        lVal_4 = lVal_4 + 1;
      } while (lVal_4 != param_2);
      return -1;
    }
    lVal_5 = func_0x180677020(param_1,param_2,param_3);
    lVal_4 = -1;
    if (lVal_5 != param_2 + param_1) {
      lVal_4 = lVal_5 - param_1;
    }
  }
  return lVal_4;
}

// func_0x180676a30
int64_t func_0x180676a30(int64_t param_1,int64_t param_2,byte *param_3,int64_t param_4)
{
  byte *pU8_1;
  byte bFlag_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  char local_140 [280];
  
  if ((DAT_18083d264 & 4) == 0) {
    func_0x1806ab010(local_140,0,0x100);
    pU8_1 = param_3 + param_4;
    if (param_3 != pU8_1) {
      do {
        bFlag_2 = *param_3;
        param_3 = param_3 + 1;
        local_140[bFlag_2] = '\x01';
      } while (param_3 != pU8_1);
    }
    lVal_4 = 0;
    if (param_2 == 0) {
      return -1;
    }
    while (local_140[*(byte *)(param_1 + lVal_4)] == '\0') {
      lVal_4 = lVal_4 + 1;
      if (lVal_4 == param_2) {
        return -1;
      }
    }
  }
  else {
    iVal_3 = func_0x180677200(param_2,param_4,DAT_18083d264 >> 5 & 0xffffff01);
    if (iVal_3 == 2) {
      lVal_4 = func_0x1806776e0(param_1,param_2,param_3);
      return lVal_4;
    }
    if (iVal_3 == 1) {
      func_0x1806ab010(local_140,0,0x100);
      pU8_1 = param_3 + param_4;
      if (param_3 != pU8_1) {
        do {
          bFlag_2 = *param_3;
          param_3 = param_3 + 1;
          local_140[bFlag_2] = '\x01';
        } while (param_3 != pU8_1);
      }
      lVal_4 = 0;
      if (param_2 == 0) {
        return -1;
      }
      do {
        if (local_140[*(byte *)(param_1 + lVal_4)] != '\0') {
          return lVal_4;
        }
        lVal_4 = lVal_4 + 1;
      } while (lVal_4 != param_2);
      return -1;
    }
    lVal_5 = func_0x180677020(param_1,param_2,param_3);
    lVal_4 = -1;
    if (lVal_5 != param_2 + param_1) {
      lVal_4 = lVal_5 - param_1;
    }
  }
  return lVal_4;
}

// func_0x180676ba0
int64_t func_0x180676ba0(int64_t param_1,int64_t param_2,byte *param_3,int64_t param_4)
{
  byte *pU8_1;
  byte bFlag_2;
  int iVal_3;
  int64_t lVal_4;
  char local_140 [280];
  
  if ((DAT_18083d264 & 4) == 0) {
    func_0x1806ab010(local_140,0,0x100);
    pU8_1 = param_3 + param_4;
    if (param_3 != pU8_1) {
      do {
        bFlag_2 = *param_3;
        param_3 = param_3 + 1;
        local_140[bFlag_2] = '\x01';
      } while (param_3 != pU8_1);
    }
    if (param_2 != 0) {
      do {
        pU8_1 = (byte *)(param_1 + -1 + param_2);
        param_2 = param_2 + -1;
        if (local_140[*pU8_1] != '\0') {
          return param_2;
        }
      } while (param_2 != 0);
      return -1;
    }
  }
  else {
    iVal_3 = func_0x180677200(param_2,param_4,DAT_18083d264 >> 5 & 0xffffff01);
    if (iVal_3 == 2) {
      lVal_4 = func_0x180677290(param_1,param_2,param_3);
      return lVal_4;
    }
    if (iVal_3 != 1) {
      lVal_4 = func_0x1806774c0(param_1,param_2,param_3);
      return lVal_4;
    }
    func_0x1806ab010(local_140,0,0x100);
    pU8_1 = param_3 + param_4;
    if (param_3 != pU8_1) {
      do {
        bFlag_2 = *param_3;
        param_3 = param_3 + 1;
        local_140[bFlag_2] = '\x01';
      } while (param_3 != pU8_1);
    }
    if (param_2 != 0) {
      do {
        pU8_1 = (byte *)(param_1 + -1 + param_2);
        param_2 = param_2 + -1;
        if (local_140[*pU8_1] != '\0') {
          return param_2;
        }
      } while (param_2 != 0);
    }
  }
  return -1;
}

// thunk_FUN_180676d20
void thunk_FUN_180676d20(uint8_t (*param_1)[16],int64_t param_2,uint8_t (*param_3)[16], uint64_t param_4)
{
  uint8_t auArr_1 [16];
  int iVal_2;
  uint64_t uVal_3;
  uint8_t (*pArr16_4)[16];
  uint8_t uVal_5;
  bool bFlag_6;
  uint8_t auArr_7 [16];
  uint8_t auStack_78 [32];
  uint8_t auStack_58 [16];
  uint64_t uStack_48;
  
  uStack_48 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  if (param_4 != 0) {
    if (param_4 == 1) {
      func_0x180676460(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVal_3 = param_2 - (int64_t)param_1;
      if (param_4 <= uVal_3) {
        if ((((byte)DAT_18083d264 & 4) == 0) || (uVal_3 < 0x10)) {
          pArr16_4 = (uint8_t (*)[16])((int64_t)param_1 + uVal_3 + (1 - param_4));
          if (param_1 != pArr16_4) {
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                uVal_3 = 1;
                while ((*param_1)[uVal_3] == (*param_3)[uVal_3]) {
                  uVal_3 = uVal_3 + 1;
                  if (uVal_3 == param_4) goto LAB_180676ea7;
                }
              }
              param_1 = (uint8_t (*)[16])(*param_1 + 1);
            } while (param_1 != pArr16_4);
          }
        }
        else if (param_4 < 0x11) {
          uVal_5 = 0x10 < (uint)param_4;
          func_0x1806aa960(auStack_58,param_3,param_4);
          auArr_1 = auStack_58;
          do {
            iVal_2 = pcmpestri(auStack_58,*param_1,0xc);
            if ((bool)uVal_5) {
              param_1 = (uint8_t (*)[16])(*param_1 + iVal_2);
              if (iVal_2 <= (int)(0x10 - (uint)param_4)) goto LAB_180676ea7;
            }
            else {
              param_1 = param_1 + 1;
            }
            uVal_5 = param_1 < (uint8_t (*)[16])(param_2 - 0x10U);
          } while (param_1 <= (uint8_t (*)[16])(param_2 - 0x10U));
          if (param_2 - (int64_t)param_1 != 0) {
            func_0x1806aa960(auStack_58,param_1,param_2 - (int64_t)param_1);
            pcmpestri(auArr_1,auStack_58,0xc);
          }
        }
        else {
          auArr_1 = *param_3;
          bFlag_6 = CARRY8((int64_t)param_1 - param_4,uVal_3);
          pArr16_4 = (uint8_t (*)[16])(((int64_t)param_1 - param_4) + uVal_3);
          do {
            iVal_2 = pcmpestri(auArr_1,*param_1,0xc);
            if (bFlag_6) {
              if (iVal_2 == 0) {
LAB_180676e79:
                iVal_2 = memcmp(param_1 + 1,param_3 + 1,param_4 - 0x10);
                if (iVal_2 == 0) break;
              }
              else {
                param_1 = (uint8_t (*)[16])(*param_1 + iVal_2);
                if (pArr16_4 < param_1) break;
                auArr_7._0_4_ = auArr_1._0_4_ ^ *(uint *)*param_1;
                auArr_7._4_4_ = auArr_1._4_4_ ^ *(uint *)(*param_1 + 4);
                auArr_7._8_4_ = auArr_1._8_4_ ^ *(uint *)(*param_1 + 8);
                auArr_7._12_4_ = auArr_1._12_4_ ^ *(uint *)(*param_1 + 0xc);
                if (auArr_7 == (uint8_t  [16])0x0) goto LAB_180676e79;
              }
              param_1 = (uint8_t (*)[16])(*param_1 + 1);
            }
            else {
              param_1 = param_1 + 1;
            }
            bFlag_6 = param_1 < pArr16_4;
          } while (param_1 <= pArr16_4);
        }
      }
    }
  }
LAB_180676ea7:
  func_0x180673080(uStack_48 ^ (uint64_t)auStack_78);
  return;
}

// func_0x180676d20
void func_0x180676d20(uint8_t (*param_1)[16],int64_t param_2,uint8_t (*param_3)[16], uint64_t param_4)
{
  uint8_t auArr_1 [16];
  int iVal_2;
  uint64_t uVal_3;
  uint8_t (*pArr16_4)[16];
  uint8_t uVal_5;
  bool bFlag_6;
  uint8_t auArr_7 [16];
  uint8_t auStack_78 [32];
  uint8_t local_58 [16];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  if (param_4 != 0) {
    if (param_4 == 1) {
      func_0x180676460(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVal_3 = param_2 - (int64_t)param_1;
      if (param_4 <= uVal_3) {
        if ((((byte)DAT_18083d264 & 4) == 0) || (uVal_3 < 0x10)) {
          pArr16_4 = (uint8_t (*)[16])((int64_t)param_1 + uVal_3 + (1 - param_4));
          if (param_1 != pArr16_4) {
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                uVal_3 = 1;
                while ((*param_1)[uVal_3] == (*param_3)[uVal_3]) {
                  uVal_3 = uVal_3 + 1;
                  if (uVal_3 == param_4) goto LAB_180676ea7;
                }
              }
              param_1 = (uint8_t (*)[16])(*param_1 + 1);
            } while (param_1 != pArr16_4);
          }
        }
        else if (param_4 < 0x11) {
          uVal_5 = 0x10 < (uint)param_4;
          func_0x1806aa960(local_58,param_3,param_4);
          auArr_1 = local_58;
          do {
            iVal_2 = pcmpestri(local_58,*param_1,0xc);
            if ((bool)uVal_5) {
              param_1 = (uint8_t (*)[16])(*param_1 + iVal_2);
              if (iVal_2 <= (int)(0x10 - (uint)param_4)) goto LAB_180676ea7;
            }
            else {
              param_1 = param_1 + 1;
            }
            uVal_5 = param_1 < (uint8_t (*)[16])(param_2 - 0x10U);
          } while (param_1 <= (uint8_t (*)[16])(param_2 - 0x10U));
          if (param_2 - (int64_t)param_1 != 0) {
            func_0x1806aa960(local_58,param_1,param_2 - (int64_t)param_1);
            pcmpestri(auArr_1,local_58,0xc);
          }
        }
        else {
          auArr_1 = *param_3;
          bFlag_6 = CARRY8((int64_t)param_1 - param_4,uVal_3);
          pArr16_4 = (uint8_t (*)[16])(((int64_t)param_1 - param_4) + uVal_3);
          do {
            iVal_2 = pcmpestri(auArr_1,*param_1,0xc);
            if (bFlag_6) {
              if (iVal_2 == 0) {
LAB_180676e79:
                iVal_2 = memcmp(param_1 + 1,param_3 + 1,param_4 - 0x10);
                if (iVal_2 == 0) break;
              }
              else {
                param_1 = (uint8_t (*)[16])(*param_1 + iVal_2);
                if (pArr16_4 < param_1) break;
                auArr_7._0_4_ = auArr_1._0_4_ ^ *(uint *)*param_1;
                auArr_7._4_4_ = auArr_1._4_4_ ^ *(uint *)(*param_1 + 4);
                auArr_7._8_4_ = auArr_1._8_4_ ^ *(uint *)(*param_1 + 8);
                auArr_7._12_4_ = auArr_1._12_4_ ^ *(uint *)(*param_1 + 0xc);
                if (auArr_7 == (uint8_t  [16])0x0) goto LAB_180676e79;
              }
              param_1 = (uint8_t (*)[16])(*param_1 + 1);
            }
            else {
              param_1 = param_1 + 1;
            }
            bFlag_6 = param_1 < pArr16_4;
          } while (param_1 <= pArr16_4);
        }
      }
    }
  }
LAB_180676ea7:
  func_0x180673080(local_48 ^ (uint64_t)auStack_78);
  return;
}

// thunk_FUN_180676f20
uint64_t thunk_FUN_180676f20(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  char *fnPtr_1;
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint64_t uVal_4;
  uint uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [32];
  uint8_t auArr_10 [32];
  
  uVal_4 = 0;
  if ((DAT_18083d264 & 0x20) == 0) {
    if ((DAT_18083d264 & 4) == 0) goto joined_r0x000180676feb;
    uVal_6 = param_3 * 2 & 0xfffffffffffffff0;
    if (uVal_6 != 0) {
      do {
        fnPtr_1 = (char *)(param_1 + uVal_4);
        auArr_2 = *(uint8_t (*)[16])(param_2 + uVal_4);
        auArr_8[0] = -(*fnPtr_1 == auArr_2[0]);
        auArr_8[1] = -(fnPtr_1[1] == auArr_2[1]);
        auArr_8[2] = -(fnPtr_1[2] == auArr_2[2]);
        auArr_8[3] = -(fnPtr_1[3] == auArr_2[3]);
        auArr_8[4] = -(fnPtr_1[4] == auArr_2[4]);
        auArr_8[5] = -(fnPtr_1[5] == auArr_2[5]);
        auArr_8[6] = -(fnPtr_1[6] == auArr_2[6]);
        auArr_8[7] = -(fnPtr_1[7] == auArr_2[7]);
        auArr_8[8] = -(fnPtr_1[8] == auArr_2[8]);
        auArr_8[9] = -(fnPtr_1[9] == auArr_2[9]);
        auArr_8[10] = -(fnPtr_1[10] == auArr_2[10]);
        auArr_8[11] = -(fnPtr_1[0xb] == auArr_2[11]);
        auArr_8[12] = -(fnPtr_1[0xc] == auArr_2[12]);
        auArr_8[13] = -(fnPtr_1[0xd] == auArr_2[13]);
        auArr_8[14] = -(fnPtr_1[0xe] == auArr_2[14]);
        auArr_8[15] = -(fnPtr_1[0xf] == auArr_2[15]);
        uVal_5 = (ushort)((ushort)(SUB161(auArr_8 >> 7,0) & 1) |
                         (ushort)(SUB161(auArr_8 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auArr_8 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auArr_8 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auArr_8 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auArr_8 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auArr_8 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auArr_8 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auArr_8 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auArr_8 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auArr_8 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auArr_8 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auArr_8 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auArr_8 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auArr_8 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auArr_8[15] >> 7) << 0xf) ^ 0xffff;
        if (uVal_5 != 0) {
          uVal_3 = 0;
          if (uVal_5 != 0) {
            for (; (uVal_5 >> uVal_3 & 1) == 0; uVal_3 = uVal_3 + 1) {
            }
          }
          return uVal_4 + uVal_3 >> 1;
        }
        uVal_4 = uVal_4 + 0x10;
      } while (uVal_4 != uVal_6);
    }
  }
  else {
    uVal_6 = param_3 * 2;
    if ((uVal_6 & 0xffffffffffffffe0) != 0) {
      do {
        auArr_9 = vmovdqu_avx(*(uint8_t (*)[32])(uVal_4 + param_2));
        auArr_9 = vpcmpeqb_avx2(auArr_9,*(uint8_t (*)[32])(uVal_4 + param_1));
        uVal_5 = ~((uint)(SUB321(auArr_9 >> 7,0) & 1) | (uint)(SUB321(auArr_9 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auArr_9 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auArr_9 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auArr_9 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auArr_9 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auArr_9 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auArr_9 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auArr_9 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auArr_9 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auArr_9 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auArr_9 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auArr_9 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auArr_9 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auArr_9 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auArr_9 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auArr_9 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auArr_9 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auArr_9 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auArr_9 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auArr_9 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auArr_9 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auArr_9 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auArr_9 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auArr_9 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auArr_9 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auArr_9 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auArr_9 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auArr_9 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auArr_9 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auArr_9 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auArr_9[31] >> 7) << 0x1f);
        if (uVal_5 != 0) goto LAB_180677004;
        uVal_4 = uVal_4 + 0x20;
      } while (uVal_4 != (uVal_6 & 0xffffffffffffffe0));
    }
    uVal_7 = (uint64_t)((uint)uVal_6 & 0x1c);
    if ((uVal_6 & 0x1c) != 0) {
      auArr_9 = vmovdqu_avx(*(uint8_t (*)[32])(&DAT_1806e2710 + -uVal_7));
      auArr_10 = vpmaskmovd_avx2(auArr_9,*(uint8_t (*)[32])(uVal_4 + param_2));
      auArr_9 = vpmaskmovd_avx2(auArr_9,*(uint8_t (*)[32])(uVal_4 + param_1));
      auArr_9 = vpcmpeqb_avx2(auArr_9,auArr_10);
      uVal_5 = ~((uint)(SUB321(auArr_9 >> 7,0) & 1) | (uint)(SUB321(auArr_9 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auArr_9 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auArr_9 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auArr_9 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auArr_9 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auArr_9 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auArr_9 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auArr_9 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auArr_9 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auArr_9 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auArr_9 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auArr_9 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auArr_9 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auArr_9 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_9 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auArr_9 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auArr_9 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auArr_9 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auArr_9 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auArr_9 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auArr_9 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auArr_9 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auArr_9 >> 0xbf,0) << 0x17 | (uint)(SUB321(auArr_9 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auArr_9 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auArr_9 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auArr_9 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auArr_9 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auArr_9 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auArr_9 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_9[31] >> 7) << 0x1f
               );
      if (uVal_5 != 0) {
LAB_180677004:
        uVal_3 = 0;
        for (; (uVal_5 & 1) == 0; uVal_5 = uVal_5 >> 1 | 0x80000000) {
          uVal_3 = uVal_3 + 1;
        }
        return uVal_4 + uVal_3 >> 1;
      }
      uVal_4 = uVal_4 + uVal_7;
    }
  }
  uVal_4 = uVal_4 >> 1;
joined_r0x000180676feb:
  for (; (uVal_4 != param_3 && (*(short *)(param_1 + uVal_4 * 2) == *(short *)(param_2 + uVal_4 * 2)));
      uVal_4 = uVal_4 + 1) {
  }
  return uVal_4;
}

// func_0x180676f20
uint64_t func_0x180676f20(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  char *fnPtr_1;
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint64_t uVal_4;
  uint uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [32];
  uint8_t auArr_10 [32];
  
  uVal_4 = 0;
  if ((DAT_18083d264 & 0x20) == 0) {
    if ((DAT_18083d264 & 4) == 0) goto joined_r0x000180676feb;
    uVal_6 = param_3 * 2 & 0xfffffffffffffff0;
    if (uVal_6 != 0) {
      do {
        fnPtr_1 = (char *)(param_1 + uVal_4);
        auArr_2 = *(uint8_t (*)[16])(param_2 + uVal_4);
        auArr_8[0] = -(*fnPtr_1 == auArr_2[0]);
        auArr_8[1] = -(fnPtr_1[1] == auArr_2[1]);
        auArr_8[2] = -(fnPtr_1[2] == auArr_2[2]);
        auArr_8[3] = -(fnPtr_1[3] == auArr_2[3]);
        auArr_8[4] = -(fnPtr_1[4] == auArr_2[4]);
        auArr_8[5] = -(fnPtr_1[5] == auArr_2[5]);
        auArr_8[6] = -(fnPtr_1[6] == auArr_2[6]);
        auArr_8[7] = -(fnPtr_1[7] == auArr_2[7]);
        auArr_8[8] = -(fnPtr_1[8] == auArr_2[8]);
        auArr_8[9] = -(fnPtr_1[9] == auArr_2[9]);
        auArr_8[10] = -(fnPtr_1[10] == auArr_2[10]);
        auArr_8[11] = -(fnPtr_1[0xb] == auArr_2[11]);
        auArr_8[12] = -(fnPtr_1[0xc] == auArr_2[12]);
        auArr_8[13] = -(fnPtr_1[0xd] == auArr_2[13]);
        auArr_8[14] = -(fnPtr_1[0xe] == auArr_2[14]);
        auArr_8[15] = -(fnPtr_1[0xf] == auArr_2[15]);
        uVal_5 = (ushort)((ushort)(SUB161(auArr_8 >> 7,0) & 1) |
                         (ushort)(SUB161(auArr_8 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auArr_8 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auArr_8 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auArr_8 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auArr_8 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auArr_8 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auArr_8 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auArr_8 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auArr_8 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auArr_8 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auArr_8 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auArr_8 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auArr_8 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auArr_8 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auArr_8[15] >> 7) << 0xf) ^ 0xffff;
        if (uVal_5 != 0) {
          uVal_3 = 0;
          if (uVal_5 != 0) {
            for (; (uVal_5 >> uVal_3 & 1) == 0; uVal_3 = uVal_3 + 1) {
            }
          }
          return uVal_4 + uVal_3 >> 1;
        }
        uVal_4 = uVal_4 + 0x10;
      } while (uVal_4 != uVal_6);
    }
  }
  else {
    uVal_6 = param_3 * 2;
    if ((uVal_6 & 0xffffffffffffffe0) != 0) {
      do {
        auArr_9 = vmovdqu_avx(*(uint8_t (*)[32])(uVal_4 + param_2));
        auArr_9 = vpcmpeqb_avx2(auArr_9,*(uint8_t (*)[32])(uVal_4 + param_1));
        uVal_5 = ~((uint)(SUB321(auArr_9 >> 7,0) & 1) | (uint)(SUB321(auArr_9 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auArr_9 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auArr_9 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auArr_9 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auArr_9 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auArr_9 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auArr_9 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auArr_9 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auArr_9 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auArr_9 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auArr_9 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auArr_9 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auArr_9 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auArr_9 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auArr_9 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auArr_9 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auArr_9 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auArr_9 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auArr_9 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auArr_9 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auArr_9 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auArr_9 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auArr_9 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auArr_9 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auArr_9 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auArr_9 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auArr_9 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auArr_9 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auArr_9 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auArr_9 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auArr_9[31] >> 7) << 0x1f);
        if (uVal_5 != 0) goto LAB_180677004;
        uVal_4 = uVal_4 + 0x20;
      } while (uVal_4 != (uVal_6 & 0xffffffffffffffe0));
    }
    uVal_7 = (uint64_t)((uint)uVal_6 & 0x1c);
    if ((uVal_6 & 0x1c) != 0) {
      auArr_9 = vmovdqu_avx(*(uint8_t (*)[32])(&DAT_1806e2710 + -uVal_7));
      auArr_10 = vpmaskmovd_avx2(auArr_9,*(uint8_t (*)[32])(uVal_4 + param_2));
      auArr_9 = vpmaskmovd_avx2(auArr_9,*(uint8_t (*)[32])(uVal_4 + param_1));
      auArr_9 = vpcmpeqb_avx2(auArr_9,auArr_10);
      uVal_5 = ~((uint)(SUB321(auArr_9 >> 7,0) & 1) | (uint)(SUB321(auArr_9 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auArr_9 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auArr_9 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auArr_9 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auArr_9 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auArr_9 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auArr_9 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auArr_9 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auArr_9 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auArr_9 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auArr_9 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auArr_9 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auArr_9 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auArr_9 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_9 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auArr_9 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auArr_9 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auArr_9 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auArr_9 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auArr_9 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auArr_9 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auArr_9 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auArr_9 >> 0xbf,0) << 0x17 | (uint)(SUB321(auArr_9 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auArr_9 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auArr_9 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auArr_9 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auArr_9 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auArr_9 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auArr_9 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_9[31] >> 7) << 0x1f
               );
      if (uVal_5 != 0) {
LAB_180677004:
        uVal_3 = 0;
        for (; (uVal_5 & 1) == 0; uVal_5 = uVal_5 >> 1 | 0x80000000) {
          uVal_3 = uVal_3 + 1;
        }
        return uVal_4 + uVal_3 >> 1;
      }
      uVal_4 = uVal_4 + uVal_7;
    }
  }
  uVal_4 = uVal_4 >> 1;
joined_r0x000180676feb:
  for (; (uVal_4 != param_3 && (*(short *)(param_1 + uVal_4 * 2) == *(short *)(param_2 + uVal_4 * 2)));
      uVal_4 = uVal_4 + 1) {
  }
  return uVal_4;
}

// func_0x180677020
/* WARNING: Removing unreachable block (ram,0x000180677147) */
/* WARNING: Removing unreachable block (ram,0x00018067714a) */
/* WARNING: Removing unreachable block (ram,0x0001806771b6) */
/* WARNING: Removing unreachable block (ram,0x0001806771b9) */
/* WARNING: Removing unreachable block (ram,0x000180677147) */
/* WARNING: Removing unreachable block (ram,0x00018067714a) */
/* WARNING: Removing unreachable block (ram,0x0001806771b6) */
/* WARNING: Removing unreachable block (ram,0x0001806771b9) */
void func_0x180677020(uint8_t (*param_1)[16],uint64_t param_2,uint8_t (*param_3)[16], uint64_t param_4)
{
  uint8_t auArr_1 [16];
  int iVal_2;
  uint uVal_3;
  uint8_t (*pArr16_4)[16];
  uint8_t (*pArr16_5)[16];
  int iVal_6;
  uint uVal_7;
  uint8_t (*pArr16_8)[16];
  bool bFlag_9;
  uint8_t uVal_10;
  uint64_t uVal_11;
  uint8_t auStack_88 [32];
  uint8_t local_68 [16];
  uint64_t local_58;
  
  local_58 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  pArr16_8 = (uint8_t (*)[16])(*param_1 + (param_2 & 0xfffffffffffffff0));
  if (param_4 < 0x11) {
    uVal_11 = func_0x1806aa960(local_68,param_3,param_4);
    auArr_1 = local_68;
    bFlag_9 = param_1 < pArr16_8;
    if (param_1 != pArr16_8) {
      do {
        uVal_11 = SUB168(*param_1,0);
        pcmpestri(local_68,*param_1,0);
        if (bFlag_9) goto LAB_1806771cb;
        param_1 = param_1 + 1;
        bFlag_9 = param_1 < pArr16_8;
      } while (param_1 != pArr16_8);
    }
    if ((param_2 & 0xf) != 0) {
      func_0x1806aa960(local_68,param_1,(uint)param_2 & 0xf);
      uVal_11 = local_68._0_8_;
      pcmpestri(auArr_1,local_68,0);
    }
  }
  else {
    pArr16_4 = (uint8_t (*)[16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    uVal_11 = func_0x1806aa960(local_68,pArr16_4,(uint)param_4 & 0xf);
    auArr_1 = local_68;
    bFlag_9 = param_1 < pArr16_8;
    if (param_1 != pArr16_8) {
      do {
        iVal_6 = 0x10;
        pArr16_5 = param_3;
        do {
          uVal_11 = SUB168(*pArr16_5,0);
          iVal_2 = pcmpestri(*pArr16_5,*param_1,0);
          if ((bFlag_9) && (iVal_2 < iVal_6)) {
            iVal_6 = iVal_2;
          }
          pArr16_5 = pArr16_5 + 1;
          bFlag_9 = pArr16_5 < pArr16_4;
        } while (pArr16_5 != pArr16_4);
        if ((param_4 & 0xf) != 0) {
          pcmpestri(local_68,*param_1,0);
        }
        if (iVal_6 != 0x10) goto LAB_1806771cb;
        param_1 = param_1 + 1;
        bFlag_9 = param_1 < pArr16_8;
      } while (param_1 != pArr16_8);
    }
    uVal_10 = 0;
    uVal_7 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      func_0x1806aa960(local_68,param_1,uVal_7);
      do {
        uVal_11 = SUB168(*param_3,0);
        uVal_3 = pcmpestri(*param_3,local_68,0);
        if (((bool)uVal_10) && ((int)uVal_3 < (int)uVal_7)) {
          uVal_7 = uVal_3;
        }
        param_3 = param_3 + 1;
        uVal_10 = param_3 < pArr16_4;
      } while (param_3 != pArr16_4);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(auArr_1,local_68,0);
      }
    }
  }
LAB_1806771cb:
  func_0x180673080(uVal_11);
  return;
}

// func_0x180677200
char func_0x180677200(uint64_t param_1,uint64_t param_2,char param_3)
{
  bool bFlag_1;
  
  if ((param_3 != '\0') && (0x30 < param_1)) {
    if (param_2 < 0x11) {
      return (1000 < param_1) * '\x02';
    }
    if (param_2 < 0x31) {
      return (0x50 < param_1) * '\x02';
    }
    return 2;
  }
  bFlag_1 = false;
  if (0x20 < param_2) {
    if (param_2 < 0x31) {
      return 0x1a0 < param_1;
    }
    if (param_2 < 0x41) {
      return 0xe0 < param_1;
    }
    if (param_2 < 0x51) {
      return 0x80 < param_1;
    }
    if (param_2 < 0x21d) {
      return 0x30 < param_1;
    }
    bFlag_1 = 0x20 < param_1;
  }
  return bFlag_1;
}

// func_0x180677290
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180677290(int64_t param_1,uint64_t param_2,byte *param_3,uint64_t param_4)
{
  byte *pU8_1;
  uint8_t auArr_2 [16];
  byte bFlag_3;
  uint8_t auArr_4 [16];
  int iVal_5;
  uint8_t auArr_6 [32];
  uint8_t auArr_7 [32];
  uint8_t auArr_8 [32];
  uint8_t auArr_9 [32];
  uint8_t auArr_10 [32];
  uint8_t in_YMM4 [32];
  uint8_t auArr_11 [32];
  uint8_t auArr_12 [32];
  uint8_t auArr_13 [32];
  uint8_t auStack_1c8 [40];
  uint8_t local_1a0 [32];
  uint64_t local_180 [4];
  uint8_t local_160 [32];
  uint8_t local_140 [32];
  uint8_t local_120 [32];
  uint8_t local_100 [32];
  uint8_t local_e0 [32];
  uint8_t local_c0 [32];
  uint8_t local_a0 [32];
  uint8_t local_80 [32];
  uint64_t local_60;
  
  local_60 = DAT_18083cf40 ^ (uint64_t)auStack_1c8;
  pU8_1 = param_3 + param_4;
  if (param_4 < 0x15) {
    auArr_12 = vmovdqu_avx(_DAT_1806e2780);
    auArr_13 = vmovdqu_avx(_DAT_1806e2740);
    auArr_4 = vpxor_avx(in_YMM4._0_16_,in_YMM4._0_16_);
    auArr_11 = ZEXT1632(auArr_4);
    local_1a0 = vmovdqu_avx(auArr_11);
    if (param_3 == pU8_1) goto LAB_1806773e2;
    do {
      bFlag_3 = *param_3;
      param_3 = param_3 + 1;
      auArr_4 = vmovd_avx((uint)bFlag_3);
      auArr_6 = vpbroadcastd_avx2(auArr_4);
      auArr_6 = vpxor_avx2(auArr_6,auArr_12);
      auArr_6 = vpsllvd_avx2(auArr_13,auArr_6);
      auArr_11 = vpor_avx2(auArr_6,auArr_11);
    } while (param_3 != pU8_1);
  }
  else {
    func_0x1806ab010(local_160,0,0x100);
    if (param_3 != pU8_1) {
      do {
        bFlag_3 = *param_3;
        param_3 = param_3 + 1;
        local_160[bFlag_3] = 0xff;
      } while (param_3 != pU8_1);
    }
    auArr_10 = vmovdqu_avx(local_a0);
    auArr_11 = vmovdqu_avx(local_80);
    auArr_12 = vmovdqu_avx(local_c0);
    auArr_13 = vmovdqu_avx(local_100);
    auArr_6 = vmovdqu_avx(local_140);
    auArr_7 = vmovdqu_avx(local_e0);
    auArr_8 = vmovdqu_avx(local_120);
    auArr_9 = vmovdqu_avx(local_160);
    auArr_4 = vmovd_avx((uint)(SUB321(auArr_9 >> 7,0) & 1) | (uint)(SUB321(auArr_9 >> 0xf,0) & 1) << 1
                       | (uint)(SUB321(auArr_9 >> 0x17,0) & 1) << 2 |
                       (uint)(SUB321(auArr_9 >> 0x1f,0) & 1) << 3 |
                       (uint)(SUB321(auArr_9 >> 0x27,0) & 1) << 4 |
                       (uint)(SUB321(auArr_9 >> 0x2f,0) & 1) << 5 |
                       (uint)(SUB321(auArr_9 >> 0x37,0) & 1) << 6 |
                       (uint)(SUB321(auArr_9 >> 0x3f,0) & 1) << 7 |
                       (uint)(SUB321(auArr_9 >> 0x47,0) & 1) << 8 |
                       (uint)(SUB321(auArr_9 >> 0x4f,0) & 1) << 9 |
                       (uint)(SUB321(auArr_9 >> 0x57,0) & 1) << 10 |
                       (uint)(SUB321(auArr_9 >> 0x5f,0) & 1) << 0xb |
                       (uint)(SUB321(auArr_9 >> 0x67,0) & 1) << 0xc |
                       (uint)(SUB321(auArr_9 >> 0x6f,0) & 1) << 0xd |
                       (uint)(SUB321(auArr_9 >> 0x77,0) & 1) << 0xe |
                       (uint)SUB321(auArr_9 >> 0x7f,0) << 0xf |
                       (uint)(SUB321(auArr_9 >> 0x87,0) & 1) << 0x10 |
                       (uint)(SUB321(auArr_9 >> 0x8f,0) & 1) << 0x11 |
                       (uint)(SUB321(auArr_9 >> 0x97,0) & 1) << 0x12 |
                       (uint)(SUB321(auArr_9 >> 0x9f,0) & 1) << 0x13 |
                       (uint)(SUB321(auArr_9 >> 0xa7,0) & 1) << 0x14 |
                       (uint)(SUB321(auArr_9 >> 0xaf,0) & 1) << 0x15 |
                       (uint)(SUB321(auArr_9 >> 0xb7,0) & 1) << 0x16 |
                       (uint)SUB321(auArr_9 >> 0xbf,0) << 0x17 |
                       (uint)(SUB321(auArr_9 >> 199,0) & 1) << 0x18 |
                       (uint)(SUB321(auArr_9 >> 0xcf,0) & 1) << 0x19 |
                       (uint)(SUB321(auArr_9 >> 0xd7,0) & 1) << 0x1a |
                       (uint)(SUB321(auArr_9 >> 0xdf,0) & 1) << 0x1b |
                       (uint)(SUB321(auArr_9 >> 0xe7,0) & 1) << 0x1c |
                       (uint)(SUB321(auArr_9 >> 0xef,0) & 1) << 0x1d |
                       (uint)(SUB321(auArr_9 >> 0xf7,0) & 1) << 0x1e |
                       (uint)(byte)(auArr_9[31] >> 7) << 0x1f);
    auArr_4 = vpinsrd_avx(auArr_4,(uint)(SUB321(auArr_6 >> 7,0) & 1) |
                                (uint)(SUB321(auArr_6 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(auArr_6 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(auArr_6 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(auArr_6 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(auArr_6 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(auArr_6 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(auArr_6 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(auArr_6 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(auArr_6 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(auArr_6 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(auArr_6 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(auArr_6 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(auArr_6 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(auArr_6 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(auArr_6 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(auArr_6 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(auArr_6 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(auArr_6 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(auArr_6 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(auArr_6 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(auArr_6 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(auArr_6 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(auArr_6 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(auArr_6 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(auArr_6 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(auArr_6 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(auArr_6 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(auArr_6 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(auArr_6 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(auArr_6 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(auArr_6[31] >> 7) << 0x1f,1);
    auArr_2 = vpinsrd_avx(auArr_4,(uint)(SUB321(auArr_8 >> 7,0) & 1) |
                                (uint)(SUB321(auArr_8 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(auArr_8 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(auArr_8 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(auArr_8 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(auArr_8 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(auArr_8 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(auArr_8 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(auArr_8 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(auArr_8 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(auArr_8 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(auArr_8 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(auArr_8 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(auArr_8 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(auArr_8 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(auArr_8 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(auArr_8 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(auArr_8 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(auArr_8 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(auArr_8 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(auArr_8 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(auArr_8 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(auArr_8 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(auArr_8 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(auArr_8 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(auArr_8 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(auArr_8 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(auArr_8 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(auArr_8 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(auArr_8 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(auArr_8 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(auArr_8[31] >> 7) << 0x1f,2);
    auArr_4 = vmovd_avx((uint)(SUB321(auArr_7 >> 7,0) & 1) | (uint)(SUB321(auArr_7 >> 0xf,0) & 1) << 1
                       | (uint)(SUB321(auArr_7 >> 0x17,0) & 1) << 2 |
                       (uint)(SUB321(auArr_7 >> 0x1f,0) & 1) << 3 |
                       (uint)(SUB321(auArr_7 >> 0x27,0) & 1) << 4 |
                       (uint)(SUB321(auArr_7 >> 0x2f,0) & 1) << 5 |
                       (uint)(SUB321(auArr_7 >> 0x37,0) & 1) << 6 |
                       (uint)(SUB321(auArr_7 >> 0x3f,0) & 1) << 7 |
                       (uint)(SUB321(auArr_7 >> 0x47,0) & 1) << 8 |
                       (uint)(SUB321(auArr_7 >> 0x4f,0) & 1) << 9 |
                       (uint)(SUB321(auArr_7 >> 0x57,0) & 1) << 10 |
                       (uint)(SUB321(auArr_7 >> 0x5f,0) & 1) << 0xb |
                       (uint)(SUB321(auArr_7 >> 0x67,0) & 1) << 0xc |
                       (uint)(SUB321(auArr_7 >> 0x6f,0) & 1) << 0xd |
                       (uint)(SUB321(auArr_7 >> 0x77,0) & 1) << 0xe |
                       (uint)SUB321(auArr_7 >> 0x7f,0) << 0xf |
                       (uint)(SUB321(auArr_7 >> 0x87,0) & 1) << 0x10 |
                       (uint)(SUB321(auArr_7 >> 0x8f,0) & 1) << 0x11 |
                       (uint)(SUB321(auArr_7 >> 0x97,0) & 1) << 0x12 |
                       (uint)(SUB321(auArr_7 >> 0x9f,0) & 1) << 0x13 |
                       (uint)(SUB321(auArr_7 >> 0xa7,0) & 1) << 0x14 |
                       (uint)(SUB321(auArr_7 >> 0xaf,0) & 1) << 0x15 |
                       (uint)(SUB321(auArr_7 >> 0xb7,0) & 1) << 0x16 |
                       (uint)SUB321(auArr_7 >> 0xbf,0) << 0x17 |
                       (uint)(SUB321(auArr_7 >> 199,0) & 1) << 0x18 |
                       (uint)(SUB321(auArr_7 >> 0xcf,0) & 1) << 0x19 |
                       (uint)(SUB321(auArr_7 >> 0xd7,0) & 1) << 0x1a |
                       (uint)(SUB321(auArr_7 >> 0xdf,0) & 1) << 0x1b |
                       (uint)(SUB321(auArr_7 >> 0xe7,0) & 1) << 0x1c |
                       (uint)(SUB321(auArr_7 >> 0xef,0) & 1) << 0x1d |
                       (uint)(SUB321(auArr_7 >> 0xf7,0) & 1) << 0x1e |
                       (uint)(byte)(auArr_7[31] >> 7) << 0x1f);
    auArr_4 = vpinsrd_avx(auArr_4,(uint)(SUB321(auArr_12 >> 7,0) & 1) |
                                (uint)(SUB321(auArr_12 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(auArr_12 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(auArr_12 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(auArr_12 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(auArr_12 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(auArr_12 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(auArr_12 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(auArr_12 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(auArr_12 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(auArr_12 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(auArr_12 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(auArr_12 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(auArr_12 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(auArr_12 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(auArr_12 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(auArr_12 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(auArr_12 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(auArr_12 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(auArr_12 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(auArr_12 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(auArr_12 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(auArr_12 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(auArr_12 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(auArr_12 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(auArr_12 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(auArr_12 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(auArr_12 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(auArr_12 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(auArr_12 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(auArr_12 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(auArr_12[31] >> 7) << 0x1f,1);
    auArr_4 = vpinsrd_avx(auArr_4,(uint)(SUB321(auArr_10 >> 7,0) & 1) |
                                (uint)(SUB321(auArr_10 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(auArr_10 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(auArr_10 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(auArr_10 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(auArr_10 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(auArr_10 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(auArr_10 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(auArr_10 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(auArr_10 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(auArr_10 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(auArr_10 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(auArr_10 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(auArr_10 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(auArr_10 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(auArr_10 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(auArr_10 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(auArr_10 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(auArr_10 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(auArr_10 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(auArr_10 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(auArr_10 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(auArr_10 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(auArr_10 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(auArr_10 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(auArr_10 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(auArr_10 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(auArr_10 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(auArr_10 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(auArr_10 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(auArr_10 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(auArr_10[31] >> 7) << 0x1f,2);
    auArr_2 = vpinsrd_avx(auArr_2,(uint)(SUB321(auArr_13 >> 7,0) & 1) |
                                (uint)(SUB321(auArr_13 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(auArr_13 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(auArr_13 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(auArr_13 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(auArr_13 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(auArr_13 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(auArr_13 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(auArr_13 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(auArr_13 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(auArr_13 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(auArr_13 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(auArr_13 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(auArr_13 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(auArr_13 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(auArr_13 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(auArr_13 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(auArr_13 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(auArr_13 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(auArr_13 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(auArr_13 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(auArr_13 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(auArr_13 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(auArr_13 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(auArr_13 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(auArr_13 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(auArr_13 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(auArr_13 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(auArr_13 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(auArr_13 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(auArr_13 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(auArr_13[31] >> 7) << 0x1f,3);
    auArr_4 = vpinsrd_avx(auArr_4,(uint)(SUB321(auArr_11 >> 7,0) & 1) |
                                (uint)(SUB321(auArr_11 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(auArr_11 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(auArr_11 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(auArr_11 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(auArr_11 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(auArr_11 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(auArr_11 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(auArr_11 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(auArr_11 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(auArr_11 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(auArr_11 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(auArr_11 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(auArr_11 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(auArr_11 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(auArr_11 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(auArr_11 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(auArr_11 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(auArr_11 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(auArr_11 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(auArr_11 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(auArr_11 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(auArr_11 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(auArr_11 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(auArr_11 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(auArr_11 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(auArr_11 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(auArr_11 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(auArr_11 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(auArr_11 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(auArr_11 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(auArr_11[31] >> 7) << 0x1f,3);
    auArr_11 = vinsertf128_avx(ZEXT1632(auArr_2),auArr_4,1);
  }
  local_1a0 = vmovdqu_avx(auArr_11);
LAB_1806773e2:
  if (7 < param_2) {
    auArr_12 = vmovdqu_avx(_DAT_1806e2760);
    do {
      auArr_4._8_8_ = 0;
      auArr_4._0_8_ = *(uint64_t *)((param_2 - 8) + param_1);
      auArr_10 = vpmovzxbd_avx2(auArr_4);
      param_2 = param_2 - 8;
      auArr_13 = vpsrld_avx2(auArr_10,5);
      auArr_6 = vpermd_avx2(auArr_13,auArr_11);
      auArr_13 = vpandn_avx2(auArr_10,auArr_12);
      auArr_13 = vpsllvd_avx2(auArr_6,auArr_13);
      iVal_5 = vmovmskps_avx(auArr_13);
      if (iVal_5 != 0) goto LAB_18067748f;
    } while (7 < param_2);
  }
  if ((param_2 & 7) != 0) {
    func_0x1806aa960(local_180,param_1,(uint)param_2 & 7);
    auArr_2._8_8_ = 0;
    auArr_2._0_8_ = local_180[0];
    auArr_12 = vpmovzxbd_avx2(auArr_2);
    auArr_11 = vpandn_avx2(auArr_12,_DAT_1806e2760);
    auArr_12 = vpsrld_avx2(auArr_12,5);
    auArr_12 = vpermd_avx2(auArr_12,local_1a0);
    auArr_11 = vpsllvd_avx2(auArr_12,auArr_11);
    vmovmskps_avx(auArr_11);
  }
LAB_18067748f:
  func_0x180673080(local_60 ^ (uint64_t)auStack_1c8);
  return;
}

// func_0x1806774c0
/* WARNING: Removing unreachable block (ram,0x000180677627) */
/* WARNING: Removing unreachable block (ram,0x00018067762a) */
/* WARNING: Removing unreachable block (ram,0x0001806776a3) */
/* WARNING: Removing unreachable block (ram,0x0001806776a5) */
/* WARNING: Removing unreachable block (ram,0x000180677627) */
/* WARNING: Removing unreachable block (ram,0x00018067762a) */
/* WARNING: Removing unreachable block (ram,0x0001806776a3) */
/* WARNING: Removing unreachable block (ram,0x0001806776a5) */
void func_0x1806774c0(uint8_t (*param_1)[16],uint64_t param_2,uint8_t (*param_3)[16], uint64_t param_4)
{
  uint8_t (*pArr16_1)[16];
  uint8_t auArr_2 [16];
  int iVal_3;
  int iVal_4;
  uint8_t *pU64_5;
  int iVal_6;
  uint8_t (*pArr16_7)[16];
  uint8_t (*pArr16_8)[16];
  uint64_t uVal_9;
  bool bFlag_10;
  uint8_t uVal_11;
  uint64_t uVal_12;
  uint8_t auArr_13 [16];
  uint8_t auStack_a8 [32];
  uint64_t local_88;
  uint64_t uStack_80;
  uint8_t local_78 [16];
  uint64_t local_68;
  
  local_68 = DAT_18083cf40 ^ (uint64_t)auStack_a8;
  uVal_9 = (uint64_t)((uint)param_2 & 0xf);
  pU64_5 = *param_1 + param_2;
  iVal_6 = -1;
  local_88 = param_2;
  if (param_4 < 0x11) {
    uVal_12 = func_0x1806aa960(&local_88,param_3,param_4);
    auArr_2._8_8_ = uStack_80;
    auArr_2._0_8_ = local_88;
    do {
      if (pU64_5 == *param_1 + uVal_9) {
        if (uVal_9 != 0) {
          if (param_2 < 0x10) {
            func_0x1806aa960(&local_88,param_1,param_2);
            auArr_13._8_8_ = uStack_80;
            auArr_13._0_8_ = local_88;
          }
          else {
            auArr_13 = *param_1;
          }
          uVal_12 = auArr_13._0_8_;
          pcmpestri(auArr_2,auArr_13,0x40);
        }
        break;
      }
      pArr16_8 = (uint8_t (*)[16])(pU64_5 + -0x10);
      uVal_12 = SUB168(*pArr16_8,0);
      bFlag_10 = (uint8_t *)0xf < pU64_5;
      pU64_5 = pU64_5 + -0x10;
      pcmpestri(auArr_2,*pArr16_8,0x40);
    } while (bFlag_10);
  }
  else {
    pArr16_8 = (uint8_t (*)[16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    uVal_12 = func_0x1806aa960(local_78,pArr16_8,(uint)param_4 & 0xf);
    auArr_2 = local_78;
    do {
      if (pU64_5 == *param_1 + uVal_9) {
        if (uVal_9 != 0) {
          uVal_11 = local_88 < 0x10;
          if ((bool)uVal_11) {
            func_0x1806aa960(local_78,param_1);
          }
          else {
            local_78 = *param_1;
          }
          do {
            uVal_12 = SUB168(*param_3,0);
            iVal_4 = pcmpestri(*param_3,local_78,0x40);
            if (((bool)uVal_11) && (iVal_6 < iVal_4)) {
              iVal_6 = iVal_4;
            }
            param_3 = param_3 + 1;
            uVal_11 = param_3 < pArr16_8;
          } while (param_3 != pArr16_8);
          if ((param_4 & 0xf) != 0) {
            pcmpestri(auArr_2,local_78,0x40);
          }
        }
        break;
      }
      pArr16_1 = (uint8_t (*)[16])(pU64_5 + -0x10);
      bFlag_10 = pU64_5 < (uint8_t *)0x10;
      pU64_5 = pU64_5 + -0x10;
      iVal_4 = -1;
      pArr16_7 = param_3;
      do {
        uVal_12 = SUB168(*pArr16_7,0);
        iVal_3 = pcmpestri(*pArr16_7,*pArr16_1,0x40);
        if ((bFlag_10) && (iVal_4 < iVal_3)) {
          iVal_4 = iVal_3;
        }
        pArr16_7 = pArr16_7 + 1;
        bFlag_10 = pArr16_7 < pArr16_8;
      } while (pArr16_7 != pArr16_8);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(local_78,*pArr16_1,0x40);
      }
    } while (iVal_4 == -1);
  }
  func_0x180673080(uVal_12);
  return;
}

// func_0x1806776e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1806776e0(int64_t param_1,uint64_t param_2,byte *param_3,uint64_t param_4)
{
  byte *pU8_1;
  uint8_t auArr_2 [16];
  byte bFlag_3;
  uint8_t auArr_4 [16];
  uint uVal_5;
  uint64_t uVal_6;
  uint uVal_7;
  uint64_t uVal_8;
  uint8_t auArr_9 [32];
  uint8_t auArr_10 [32];
  uint8_t auArr_11 [32];
  uint8_t auArr_12 [32];
  uint8_t auArr_13 [32];
  uint8_t in_YMM4 [32];
  uint8_t auArr_14 [32];
  uint8_t auArr_15 [32];
  uint8_t auArr_16 [32];
  uint8_t auStack_1c8 [40];
  uint8_t local_1a0 [32];
  uint64_t local_180 [4];
  uint8_t local_160 [32];
  uint8_t local_140 [32];
  uint8_t local_120 [32];
  uint8_t local_100 [32];
  uint8_t local_e0 [32];
  uint8_t local_c0 [32];
  uint8_t local_a0 [32];
  uint8_t local_80 [32];
  uint64_t local_60;
  
  local_60 = DAT_18083cf40 ^ (uint64_t)auStack_1c8;
  pU8_1 = param_3 + param_4;
  if (param_4 < 0x15) {
    auArr_15 = vmovdqu_avx(_DAT_1806e2780);
    auArr_16 = vmovdqu_avx(_DAT_1806e2740);
    auArr_4 = vpxor_avx(in_YMM4._0_16_,in_YMM4._0_16_);
    auArr_14 = ZEXT1632(auArr_4);
    local_1a0 = vmovdqu_avx(auArr_14);
    if (param_3 != pU8_1) {
      do {
        bFlag_3 = *param_3;
        param_3 = param_3 + 1;
        auArr_4 = vmovd_avx((uint)bFlag_3);
        auArr_9 = vpbroadcastd_avx2(auArr_4);
        auArr_9 = vpxor_avx2(auArr_9,auArr_15);
        auArr_9 = vpsllvd_avx2(auArr_16,auArr_9);
        auArr_14 = vpor_avx2(auArr_9,auArr_14);
      } while (param_3 != pU8_1);
      goto LAB_18067782d;
    }
  }
  else {
    func_0x1806ab010(local_160,0,0x100);
    if (param_3 != pU8_1) {
      do {
        bFlag_3 = *param_3;
        param_3 = param_3 + 1;
        local_160[bFlag_3] = 0xff;
      } while (param_3 != pU8_1);
    }
    auArr_13 = vmovdqu_avx(local_a0);
    auArr_14 = vmovdqu_avx(local_80);
    auArr_15 = vmovdqu_avx(local_c0);
    auArr_16 = vmovdqu_avx(local_100);
    auArr_9 = vmovdqu_avx(local_140);
    auArr_10 = vmovdqu_avx(local_e0);
    auArr_11 = vmovdqu_avx(local_120);
    auArr_12 = vmovdqu_avx(local_160);
    auArr_4 = vmovd_avx((uint)(SUB321(auArr_12 >> 7,0) & 1) |
                       (uint)(SUB321(auArr_12 >> 0xf,0) & 1) << 1 |
                       (uint)(SUB321(auArr_12 >> 0x17,0) & 1) << 2 |
                       (uint)(SUB321(auArr_12 >> 0x1f,0) & 1) << 3 |
                       (uint)(SUB321(auArr_12 >> 0x27,0) & 1) << 4 |
                       (uint)(SUB321(auArr_12 >> 0x2f,0) & 1) << 5 |
                       (uint)(SUB321(auArr_12 >> 0x37,0) & 1) << 6 |
                       (uint)(SUB321(auArr_12 >> 0x3f,0) & 1) << 7 |
                       (uint)(SUB321(auArr_12 >> 0x47,0) & 1) << 8 |
                       (uint)(SUB321(auArr_12 >> 0x4f,0) & 1) << 9 |
                       (uint)(SUB321(auArr_12 >> 0x57,0) & 1) << 10 |
                       (uint)(SUB321(auArr_12 >> 0x5f,0) & 1) << 0xb |
                       (uint)(SUB321(auArr_12 >> 0x67,0) & 1) << 0xc |
                       (uint)(SUB321(auArr_12 >> 0x6f,0) & 1) << 0xd |
                       (uint)(SUB321(auArr_12 >> 0x77,0) & 1) << 0xe |
                       (uint)SUB321(auArr_12 >> 0x7f,0) << 0xf |
                       (uint)(SUB321(auArr_12 >> 0x87,0) & 1) << 0x10 |
                       (uint)(SUB321(auArr_12 >> 0x8f,0) & 1) << 0x11 |
                       (uint)(SUB321(auArr_12 >> 0x97,0) & 1) << 0x12 |
                       (uint)(SUB321(auArr_12 >> 0x9f,0) & 1) << 0x13 |
                       (uint)(SUB321(auArr_12 >> 0xa7,0) & 1) << 0x14 |
                       (uint)(SUB321(auArr_12 >> 0xaf,0) & 1) << 0x15 |
                       (uint)(SUB321(auArr_12 >> 0xb7,0) & 1) << 0x16 |
                       (uint)SUB321(auArr_12 >> 0xbf,0) << 0x17 |
                       (uint)(SUB321(auArr_12 >> 199,0) & 1) << 0x18 |
                       (uint)(SUB321(auArr_12 >> 0xcf,0) & 1) << 0x19 |
                       (uint)(SUB321(auArr_12 >> 0xd7,0) & 1) << 0x1a |
                       (uint)(SUB321(auArr_12 >> 0xdf,0) & 1) << 0x1b |
                       (uint)(SUB321(auArr_12 >> 0xe7,0) & 1) << 0x1c |
                       (uint)(SUB321(auArr_12 >> 0xef,0) & 1) << 0x1d |
                       (uint)(SUB321(auArr_12 >> 0xf7,0) & 1) << 0x1e |
                       (uint)(byte)(auArr_12[31] >> 7) << 0x1f);
    auArr_4 = vpinsrd_avx(auArr_4,(uint)(SUB321(auArr_9 >> 7,0) & 1) |
                                (uint)(SUB321(auArr_9 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(auArr_9 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(auArr_9 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(auArr_9 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(auArr_9 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(auArr_9 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(auArr_9 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(auArr_9 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(auArr_9 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(auArr_9 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(auArr_9 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(auArr_9 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(auArr_9 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(auArr_9 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(auArr_9 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(auArr_9 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(auArr_9 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(auArr_9 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(auArr_9 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(auArr_9 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(auArr_9 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(auArr_9 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(auArr_9 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(auArr_9 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(auArr_9 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(auArr_9 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(auArr_9 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(auArr_9 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(auArr_9 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(auArr_9 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(auArr_9[31] >> 7) << 0x1f,1);
    auArr_2 = vpinsrd_avx(auArr_4,(uint)(SUB321(auArr_11 >> 7,0) & 1) |
                                (uint)(SUB321(auArr_11 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(auArr_11 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(auArr_11 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(auArr_11 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(auArr_11 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(auArr_11 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(auArr_11 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(auArr_11 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(auArr_11 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(auArr_11 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(auArr_11 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(auArr_11 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(auArr_11 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(auArr_11 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(auArr_11 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(auArr_11 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(auArr_11 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(auArr_11 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(auArr_11 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(auArr_11 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(auArr_11 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(auArr_11 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(auArr_11 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(auArr_11 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(auArr_11 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(auArr_11 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(auArr_11 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(auArr_11 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(auArr_11 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(auArr_11 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(auArr_11[31] >> 7) << 0x1f,2);
    auArr_4 = vmovd_avx((uint)(SUB321(auArr_10 >> 7,0) & 1) |
                       (uint)(SUB321(auArr_10 >> 0xf,0) & 1) << 1 |
                       (uint)(SUB321(auArr_10 >> 0x17,0) & 1) << 2 |
                       (uint)(SUB321(auArr_10 >> 0x1f,0) & 1) << 3 |
                       (uint)(SUB321(auArr_10 >> 0x27,0) & 1) << 4 |
                       (uint)(SUB321(auArr_10 >> 0x2f,0) & 1) << 5 |
                       (uint)(SUB321(auArr_10 >> 0x37,0) & 1) << 6 |
                       (uint)(SUB321(auArr_10 >> 0x3f,0) & 1) << 7 |
                       (uint)(SUB321(auArr_10 >> 0x47,0) & 1) << 8 |
                       (uint)(SUB321(auArr_10 >> 0x4f,0) & 1) << 9 |
                       (uint)(SUB321(auArr_10 >> 0x57,0) & 1) << 10 |
                       (uint)(SUB321(auArr_10 >> 0x5f,0) & 1) << 0xb |
                       (uint)(SUB321(auArr_10 >> 0x67,0) & 1) << 0xc |
                       (uint)(SUB321(auArr_10 >> 0x6f,0) & 1) << 0xd |
                       (uint)(SUB321(auArr_10 >> 0x77,0) & 1) << 0xe |
                       (uint)SUB321(auArr_10 >> 0x7f,0) << 0xf |
                       (uint)(SUB321(auArr_10 >> 0x87,0) & 1) << 0x10 |
                       (uint)(SUB321(auArr_10 >> 0x8f,0) & 1) << 0x11 |
                       (uint)(SUB321(auArr_10 >> 0x97,0) & 1) << 0x12 |
                       (uint)(SUB321(auArr_10 >> 0x9f,0) & 1) << 0x13 |
                       (uint)(SUB321(auArr_10 >> 0xa7,0) & 1) << 0x14 |
                       (uint)(SUB321(auArr_10 >> 0xaf,0) & 1) << 0x15 |
                       (uint)(SUB321(auArr_10 >> 0xb7,0) & 1) << 0x16 |
                       (uint)SUB321(auArr_10 >> 0xbf,0) << 0x17 |
                       (uint)(SUB321(auArr_10 >> 199,0) & 1) << 0x18 |
                       (uint)(SUB321(auArr_10 >> 0xcf,0) & 1) << 0x19 |
                       (uint)(SUB321(auArr_10 >> 0xd7,0) & 1) << 0x1a |
                       (uint)(SUB321(auArr_10 >> 0xdf,0) & 1) << 0x1b |
                       (uint)(SUB321(auArr_10 >> 0xe7,0) & 1) << 0x1c |
                       (uint)(SUB321(auArr_10 >> 0xef,0) & 1) << 0x1d |
                       (uint)(SUB321(auArr_10 >> 0xf7,0) & 1) << 0x1e |
                       (uint)(byte)(auArr_10[31] >> 7) << 0x1f);
    auArr_4 = vpinsrd_avx(auArr_4,(uint)(SUB321(auArr_15 >> 7,0) & 1) |
                                (uint)(SUB321(auArr_15 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(auArr_15 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(auArr_15 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(auArr_15 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(auArr_15 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(auArr_15 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(auArr_15 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(auArr_15 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(auArr_15 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(auArr_15 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(auArr_15 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(auArr_15 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(auArr_15 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(auArr_15 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(auArr_15 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(auArr_15 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(auArr_15 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(auArr_15 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(auArr_15 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(auArr_15 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(auArr_15 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(auArr_15 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(auArr_15 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(auArr_15 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(auArr_15 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(auArr_15 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(auArr_15 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(auArr_15 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(auArr_15 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(auArr_15 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(auArr_15[31] >> 7) << 0x1f,1);
    auArr_4 = vpinsrd_avx(auArr_4,(uint)(SUB321(auArr_13 >> 7,0) & 1) |
                                (uint)(SUB321(auArr_13 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(auArr_13 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(auArr_13 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(auArr_13 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(auArr_13 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(auArr_13 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(auArr_13 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(auArr_13 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(auArr_13 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(auArr_13 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(auArr_13 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(auArr_13 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(auArr_13 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(auArr_13 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(auArr_13 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(auArr_13 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(auArr_13 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(auArr_13 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(auArr_13 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(auArr_13 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(auArr_13 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(auArr_13 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(auArr_13 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(auArr_13 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(auArr_13 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(auArr_13 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(auArr_13 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(auArr_13 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(auArr_13 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(auArr_13 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(auArr_13[31] >> 7) << 0x1f,2);
    auArr_2 = vpinsrd_avx(auArr_2,(uint)(SUB321(auArr_16 >> 7,0) & 1) |
                                (uint)(SUB321(auArr_16 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(auArr_16 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(auArr_16 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(auArr_16 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(auArr_16 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(auArr_16 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(auArr_16 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(auArr_16 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(auArr_16 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(auArr_16 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(auArr_16 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(auArr_16 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(auArr_16 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(auArr_16 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(auArr_16 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(auArr_16 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(auArr_16 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(auArr_16 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(auArr_16 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(auArr_16 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(auArr_16 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(auArr_16 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(auArr_16 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(auArr_16 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(auArr_16 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(auArr_16 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(auArr_16 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(auArr_16 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(auArr_16 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(auArr_16 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(auArr_16[31] >> 7) << 0x1f,3);
    auArr_4 = vpinsrd_avx(auArr_4,(uint)(SUB321(auArr_14 >> 7,0) & 1) |
                                (uint)(SUB321(auArr_14 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(auArr_14 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(auArr_14 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(auArr_14 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(auArr_14 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(auArr_14 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(auArr_14 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(auArr_14 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(auArr_14 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(auArr_14 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(auArr_14 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(auArr_14 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(auArr_14 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(auArr_14 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(auArr_14 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(auArr_14 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(auArr_14 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(auArr_14 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(auArr_14 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(auArr_14 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(auArr_14 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(auArr_14 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(auArr_14 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(auArr_14 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(auArr_14 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(auArr_14 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(auArr_14 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(auArr_14 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(auArr_14 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(auArr_14 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(auArr_14[31] >> 7) << 0x1f,3);
    auArr_14 = vinsertf128_avx(ZEXT1632(auArr_2),auArr_4,1);
LAB_18067782d:
    local_1a0 = vmovdqu_avx(auArr_14);
  }
  uVal_6 = 0;
  uVal_8 = param_2 & 0xfffffffffffffff8;
  if (uVal_8 != 0) {
    auArr_15 = vmovdqu_avx(_DAT_1806e2760);
    do {
      auArr_4._8_8_ = 0;
      auArr_4._0_8_ = *(uint64_t *)(param_1 + uVal_6);
      auArr_13 = vpmovzxbd_avx2(auArr_4);
      auArr_16 = vpsrld_avx2(auArr_13,5);
      auArr_9 = vpermd_avx2(auArr_16,auArr_14);
      auArr_16 = vpandn_avx2(auArr_13,auArr_15);
      auArr_16 = vpsllvd_avx2(auArr_9,auArr_16);
      uVal_5 = vmovmskps_avx(auArr_16);
      if (uVal_5 != 0) goto code_r0x0001806778d1;
      uVal_6 = uVal_6 + 8;
    } while (uVal_6 != uVal_8);
  }
  uVal_5 = (uint)param_2 & 7;
  if ((param_2 & 7) != 0) {
    func_0x1806aa960(local_180,param_1 + uVal_8,uVal_5);
    auArr_2._8_8_ = 0;
    auArr_2._0_8_ = local_180[0];
    auArr_15 = vpmovzxbd_avx2(auArr_2);
    auArr_14 = vpandn_avx2(auArr_15,_DAT_1806e2760);
    auArr_15 = vpsrld_avx2(auArr_15,5);
    auArr_15 = vpermd_avx2(auArr_15,local_1a0);
    auArr_14 = vpsllvd_avx2(auArr_15,auArr_14);
    uVal_7 = vmovmskps_avx(auArr_14);
    uVal_7 = uVal_7 & (1 << (sbyte)uVal_5) - 1U;
    if (uVal_7 != 0) {
      for (; (uVal_7 & 1) == 0; uVal_7 = uVal_7 >> 1 | 0x80000000) {
      }
    }
  }
LAB_1806778e6:
  func_0x180673080(local_60 ^ (uint64_t)auStack_1c8);
  return;
code_r0x0001806778d1:
  for (; (uVal_5 & 1) == 0; uVal_5 = uVal_5 >> 1 | 0x80000000) {
  }
  goto LAB_1806778e6;
}

// func_0x180677910
DWORD func_0x180677910(int64_t *param_1,uint64_t param_2,uint32_t param_3,uint param_4)
{
  DWORD DVar1;
  int64_t lVal_2;
  uint32_t local_28;
  uint local_24;
  uint local_20;
  uint32_t local_1c;
  uint8_t local_18 [16];
  
  local_24 = param_4 & 0xffff;
  local_20 = param_4 & 0xffff0000;
  local_1c = 0;
  local_28 = 0x20;
  local_18 = ZEXT816(0);
  lVal_2 = CreateFile2(param_2,param_3,7,3,&local_28);
  *param_1 = lVal_2;
  if (lVal_2 != -1) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000180677984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}

// func_0x180677990
void func_0x180677990(HANDLE param_1)
{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = CloseHandle(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}

// func_0x1806779b0
void func_0x1806779b0(HANDLE param_1,uint32_t *param_2)
{
  BOOL BVar1;
  uint8_t auStack_58 [32];
  uint8_t local_38 [32];
  uint32_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  BVar1 = GetFileInformationByHandleEx(param_1,FileBasicInfo,local_38,0x28);
  if (BVar1 != 0) {
    *param_2 = local_18;
    func_0x180673080(local_10 ^ (uint64_t)auStack_58);
    return;
  }
  GetLastError();
  func_0x180673080(local_10 ^ (uint64_t)auStack_58);
  return;
}

// func_0x180677a20
void func_0x180677a20(uint64_t param_1,uint64_t param_2,uint param_3)
{
  uint uVal_1;
  DWORD DVar2;
  BOOL BVar3;
  int iVal_4;
  HANDLE hFile;
  HANDLE hFile_00;
  uint32_t uVal_5;
  int64_t lVal_6;
  uint8_t auStack_f8 [32];
  uint64_t *local_d8;
  byte local_c8;
  uint16_t uStack_c7;
  uint8_t uStack_c5;
  uint uStack_c4;
  uint64_t local_c0;
  uint64_t local_b8;
  uint64_t uStack_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint8_t local_90 [16];
  uint8_t local_80 [16];
  int64_t local_70;
  uint8_t local_58 [24];
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_f8;
  param_3 = param_3 & 0xf;
  if (param_3 == 2) {
LAB_180677c9a:
    local_a8 = 0;
    local_c0 = 0x20;
    local_b8 = 0;
    uStack_b0 = 0;
    uVal_1 = CopyFile2(param_1,param_2,&local_c0);
    local_c8 = (byte)(uVal_1 >> 0x1f) ^ 1;
    uStack_c4 = 0;
    if ((int)uVal_1 < 0) {
      uStack_c4 = uVal_1 & 0xffff;
    }
    goto LAB_180677ceb;
  }
  local_a8 = 0;
  local_c0 = 0x100000020;
  local_b8 = 0;
  uStack_b0 = 0;
  uVal_1 = CopyFile2(0,param_2,&local_c0);
  if ((int)uVal_1 < 0) {
    uStack_c4 = uVal_1 & 0xffff;
  }
  else {
    uStack_c4 = 0;
  }
  local_c8 = (int)uVal_1 >= 0;
  if ((uStack_c4 != 0x50) || (param_3 == 0)) goto LAB_180677ceb;
  local_98 = 0;
  local_d8 = &local_a0;
  local_a0 = 0x20;
  uVal_5 = 3;
  if (param_3 != 1) {
    uVal_5 = 1;
  }
  local_90 = ZEXT816(0);
  hFile = (HANDLE)CreateFile2(param_1,0x80,uVal_5,3);
  if ((hFile == (HANDLE)0xffffffffffffffff) && (DVar2 = GetLastError(), DVar2 != 0)) {
    local_c8 = false;
    uStack_c4 = DVar2;
    goto LAB_180677ceb;
  }
  local_b8 = 0;
  local_d8 = &local_c0;
  local_c0 = 0x20;
  uStack_b0 = 0;
  local_a8 = 0;
  hFile_00 = (HANDLE)CreateFile2(param_2,0x80,uVal_5,3);
  if ((hFile_00 == (HANDLE)0xffffffffffffffff) && (DVar2 = GetLastError(), DVar2 != 0)) {
    if ((hFile == (HANDLE)0xffffffffffffffff) || (BVar3 = CloseHandle(hFile), BVar3 != 0)) {
      local_c8 = false;
      uStack_c4 = DVar2;
      goto LAB_180677ceb;
    }
    goto LAB_180677e0b;
  }
  if (param_3 == 4) {
    BVar3 = GetFileInformationByHandleEx(hFile,FileBasicInfo,local_80,0x28);
    lVal_6 = local_70;
    if (BVar3 != 0) {
LAB_180677c34:
      BVar3 = GetFileInformationByHandleEx(hFile_00,FileBasicInfo,local_80,0x28);
      if (BVar3 == 0) {
        uVal_1 = GetLastError();
        if (uVal_1 != 0) goto LAB_180677be7;
        local_70 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      }
      if (local_70 < lVal_6) {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0)))
           ) goto LAB_180677e0b;
        goto LAB_180677c9a;
      }
      goto LAB_180677d12;
    }
    uVal_1 = GetLastError();
    if (uVal_1 == 0) {
      lVal_6 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      goto LAB_180677c34;
    }
LAB_180677be7:
    if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)) ||
       ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0)))) {
LAB_180677e0b:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
LAB_180677d12:
    uVal_1 = func_0x180678cf0(hFile,local_80);
    if ((uVal_1 == 0) && (uVal_1 = func_0x180678cf0(hFile_00,local_58), uVal_1 == 0)) {
      iVal_4 = memcmp(local_80,local_58,0x18);
      if (iVal_4 == 0) {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0)))
           ) {
LAB_180677e11:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        local_c8 = false;
        uStack_c4 = 0x20;
      }
      else {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0)))
           ) goto LAB_180677e11;
        local_c8 = false;
        uStack_c4 = 0;
      }
      goto LAB_180677ceb;
    }
    if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)) ||
       ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0))))
    goto LAB_180677e11;
  }
  local_c8 = false;
  uStack_c4 = uVal_1;
LAB_180677ceb:
  func_0x180673080(local_40 ^ (uint64_t)auStack_f8);
  return;
}

// func_0x180677e20
DWORD func_0x180677e20(LPCWSTR param_1,HANDLE *param_2,LPVOID param_3)
{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pVoid_3;
  
  if (*param_2 != (HANDLE)0xffffffffffffffff) {
    BVar1 = FindClose(*param_2);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  pVoid_3 = FindFirstFileExW(param_1,FindExInfoBasic,param_3,FindExSearchNameMatch,(LPVOID)0x0,0);
  *param_2 = pVoid_3;
  if (pVoid_3 != (HANDLE)0xffffffffffffffff) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000180677e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}

// func_0x180677eb0
void func_0x180677eb0(HANDLE param_1)
{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = FindClose(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}

// func_0x180677ed0
void func_0x180677ed0(LPCWSTR param_1,uint64_t *param_2,uint param_3,uint param_4)
{
  BOOL BVar1;
  DWORD DVar2;
  int iVal_3;
  HANDLE pVoid_4;
  uint uVal_5;
  uint uVal_6;
  uint8_t auStack_2c8 [32];
  uint32_t local_2a8;
  uint32_t uStack_2a4;
  uint local_2a0 [2];
  uint64_t local_298;
  uint32_t local_290;
  uint local_28c;
  DWORD DStack_288;
  DWORD local_284;
  uint local_280;
  _WIN32_FIND_DATAW local_278;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_2c8;
  uVal_5 = param_3 & 0xfffffffe;
  if (((param_3 & 1) == 0) || ((param_3 & 4) == 0)) {
    if ((((param_3 & 2) != 0) && (param_4 != 0xffffffff)) &&
       (((param_4 >> 10 & 1) == 0 || ((param_3 & 1) == 0)))) {
      uVal_5 = param_3 & 0xfffffffc;
      *(uint *)(param_2 + 2) = param_4;
    }
    if (uVal_5 == 0) goto LAB_1806781a9;
    if (((uVal_5 & 0x2a) != 0) &&
       (((param_4 == 0xffffffff || ((param_4 >> 10 & 1) == 0)) || ((param_3 & 1) == 0)))) {
      BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2a0);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (DVar2 != 0x20) goto LAB_1806781a9;
        pVoid_4 = FindFirstFileW(param_1,&local_278);
        if (pVoid_4 == (HANDLE)0xffffffffffffffff) {
          GetLastError();
          goto LAB_1806781a9;
        }
        FindClose(pVoid_4);
        local_28c = local_278.ftLastWriteTime.dwLowDateTime;
        DStack_288 = local_278.ftLastWriteTime.dwHighDateTime;
      }
      else {
        local_278.ftLastWriteTime.dwHighDateTime = DStack_288;
        local_278.ftLastWriteTime.dwLowDateTime = local_28c;
        local_278.dwFileAttributes = local_2a0[0];
        local_278.nFileSizeLow = local_280;
        local_278.nFileSizeHigh = local_284;
      }
      if (((param_3 & 1) == 0) || ((local_278.dwFileAttributes & 0x400) == 0)) {
        *(DWORD *)(param_2 + 2) = local_278.dwFileAttributes;
        param_2[1] = CONCAT44(local_278.nFileSizeHigh,local_278.nFileSizeLow);
        *param_2 = (uint64_t)local_278.ftLastWriteTime & 0xffffffff00000000 | (uint64_t)local_28c;
        uVal_6 = uVal_5 & 0xffffffd5;
        if (((local_278.dwFileAttributes & 0x400) == 0) && ((uVal_5 & 4) != 0)) {
          *(uint32_t *)((int64_t)param_2 + 0x14) = 0;
          uVal_6 = uVal_5 & 0xffffffd1;
        }
        uVal_5 = uVal_6;
        if (uVal_5 == 0) goto LAB_1806781a9;
      }
    }
    iVal_3 = func_0x180677910(&local_2a8,param_1,0x80,(((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000);
    if (iVal_3 == 0) {
      pVoid_4 = (HANDLE)CONCAT44(uStack_2a4,local_2a8);
      uVal_6 = uVal_5;
      if ((uVal_5 & 0x26) != 0) {
        BVar1 = GetFileInformationByHandleEx(pVoid_4,FileBasicInfo,local_2a0,0x28);
        if (BVar1 == 0) {
          GetLastError();
          if ((pVoid_4 != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(pVoid_4), BVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_1806781a9;
        }
        uVal_6 = uVal_5 & 0xffffffdd;
        *(uint *)(param_2 + 2) = local_280;
        *param_2 = CONCAT44(local_28c,local_290);
        if ((uVal_5 & 4) != 0) {
          if ((local_280 >> 10 & 1) == 0) {
            *(uint32_t *)((int64_t)param_2 + 0x14) = 0;
          }
          else {
            BVar1 = GetFileInformationByHandleEx(pVoid_4,FileAttributeTagInfo,&local_2a8,8);
            if (BVar1 == 0) {
              GetLastError();
              if ((pVoid_4 != (HANDLE)0xffffffffffffffff) &&
                 (BVar1 = CloseHandle(pVoid_4), BVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              goto LAB_1806781a9;
            }
            *(uint32_t *)((int64_t)param_2 + 0x14) = uStack_2a4;
          }
          uVal_6 = uVal_5 & 0xffffffd9;
        }
      }
      if ((uVal_6 & 0x18) != 0) {
        BVar1 = GetFileInformationByHandleEx(pVoid_4,FileStandardInfo,local_2a0,0x18);
        if (BVar1 == 0) {
          GetLastError();
          if ((pVoid_4 != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(pVoid_4), BVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_1806781a9;
        }
        uVal_6 = uVal_6 & 0xffffffe7;
        param_2[1] = local_298;
        *(uint32_t *)(param_2 + 3) = local_290;
      }
      if (uVal_6 != 0) {
        if ((pVoid_4 == (HANDLE)0xffffffffffffffff) || (BVar1 = CloseHandle(pVoid_4), BVar1 != 0))
        goto LAB_1806781a9;
        goto LAB_1806781eb;
      }
      if (pVoid_4 == (HANDLE)0xffffffffffffffff) goto LAB_1806781a9;
      iVal_3 = CloseHandle(pVoid_4);
    }
    else {
      if ((HANDLE)CONCAT44(uStack_2a4,local_2a8) == (HANDLE)0xffffffffffffffff) goto LAB_1806781a9;
      iVal_3 = CloseHandle((HANDLE)CONCAT44(uStack_2a4,local_2a8));
    }
    if (iVal_3 == 0) {
LAB_1806781eb:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_1806781a9:
  func_0x180673080(local_28 ^ (uint64_t)auStack_2c8);
  return;
}

// func_0x180678210
DWORD func_0x180678210(HANDLE param_1,LPWIN32_FIND_DATAW param_2)
{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = FindNextFileW(param_1,param_2);
  if (BVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000180678229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}

// func_0x180678230
UINT func_0x180678230(void)
{
  UINT UVar1;
  BOOL BVar2;
  
  UVar1 = ___lc_codepage_func();
  if (UVar1 == 0xfde9) {
    return UVar1;
  }
  BVar2 = AreFileApisANSI();
  return (uint)(BVar2 == 0);
}

// func_0x180678260
uint64_t func_0x180678260(UINT param_1,LPCSTR param_2,int param_3,LPWSTR param_4,int param_5)
{
  uint uVal_1;
  DWORD DVar2;
  
  uVal_1 = MultiByteToWideChar(param_1,8,param_2,param_3,param_4,param_5);
  if (uVal_1 == 0) {
    DVar2 = GetLastError();
    return (uint64_t)DVar2 << 0x20;
  }
  return (uint64_t)uVal_1;
}

// func_0x1806782b0
uint64_t func_0x1806782b0(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)
{
  int local_res8 [8];
  int local_48;
  DWORD DStack_44;
  
  if ((param_1 == 0xfde9) || (param_1 == 0xd698)) {
    local_48 = WideCharToMultiByte(param_1,0x80,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
  }
  else {
    local_res8[0] = 0;
    local_48 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   local_res8);
    if (local_res8[0] != 0) {
      return 0x45900000000;
    }
  }
  if (local_48 == 0) {
    DStack_44 = GetLastError();
    if (DStack_44 != 0x3ec) goto LAB_1806783b1;
    local_48 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_48 == 0) {
      DStack_44 = GetLastError();
      goto LAB_1806783b1;
    }
  }
  DStack_44 = 0;
LAB_1806783b1:
  return CONCAT44(DStack_44,local_48);
}

// func_0x1806783d0
uint64_t func_0x1806783d0(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)
{
  int local_48;
  DWORD DStack_44;
  
  local_48 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                 (LPBOOL)0x0);
  if (local_48 == 0) {
    DStack_44 = GetLastError();
    if (DStack_44 != 0x3ec) goto LAB_18067846e;
    local_48 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_48 == 0) {
      DStack_44 = GetLastError();
      goto LAB_18067846e;
    }
  }
  DStack_44 = 0;
LAB_18067846e:
  return CONCAT44(DStack_44,local_48);
}

// func_0x180678480
void func_0x180678480(uint64_t param_1,uint64_t param_2)
{
  BOOL BVar1;
  DWORD DVar2;
  int iVal_3;
  HANDLE hFile;
  HANDLE hObject;
  uint8_t auStack_e8 [32];
  uint64_t *local_c8;
  uint8_t local_b8;
  DWORD DStack_b4;
  uint64_t local_b0;
  uint64_t local_a8;
  uint8_t local_a0 [16];
  uint64_t local_90;
  DWORD local_88;
  DWORD local_84;
  uint64_t local_80;
  uint8_t local_78 [12];
  DWORD DStack_6c;
  uint8_t local_68 [28];
  DWORD local_4c;
  DWORD local_48;
  uint8_t local_40 [24];
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_e8;
  local_a8 = 0x2000000;
  local_b0 = 0x20;
  local_c8 = &local_b0;
  local_a0 = ZEXT816(0);
  hFile = (HANDLE)CreateFile2(0,0x80,7,3);
  if ((hFile == (HANDLE)0xffffffffffffffff) && (DStack_b4 = GetLastError(), DStack_b4 != 0)) {
    local_b8 = false;
    goto LAB_18067869e;
  }
  BVar1 = GetFileInformationByHandleEx(hFile,0x12,&local_90,0x18);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if ((DVar2 == 0x32) || (DVar2 == 0x57)) {
      BVar1 = GetFileInformationByHandle(hFile,(LPBY_HANDLE_FILE_INFORMATION)local_78);
      if (BVar1 != 0) {
        local_90 = (uint64_t)(uint)local_68._12_4_;
        local_88 = local_4c;
        local_84 = local_48;
        local_80 = 0;
        goto LAB_180678577;
      }
      DVar2 = GetLastError();
    }
    if (DVar2 != 0) {
      if ((hFile != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(hFile), BVar1 == 0))
      goto LAB_1806786c2;
      local_b8 = false;
      DStack_b4 = DVar2;
      goto LAB_18067869e;
    }
  }
LAB_180678577:
  local_78._8_4_ = 0x2000000;
  DStack_6c = 0;
  local_c8 = (uint64_t *)local_78;
  local_78._0_4_ = 0x20;
  local_78._4_4_ = 0;
  local_68._0_16_ = ZEXT816(0);
  hObject = (HANDLE)CreateFile2(param_2,0x80,7,3);
  if ((hObject != (HANDLE)0xffffffffffffffff) || (DVar2 = GetLastError(), DVar2 == 0)) {
    DVar2 = func_0x180678cf0(hObject,local_40);
    if (DVar2 == 0) {
      iVal_3 = memcmp(&local_90,local_40,0x18);
      if (((hObject != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(hObject), BVar1 == 0)) ||
         ((hFile != (HANDLE)0xffffffffffffffff && (BVar1 = CloseHandle(hFile), BVar1 == 0))))
      goto LAB_1806786c2;
      DStack_b4 = 0;
      local_b8 = iVal_3 == 0;
      goto LAB_18067869e;
    }
    if ((hObject != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(hObject), BVar1 == 0))
    goto LAB_1806786c2;
  }
  if ((hFile != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(hFile), BVar1 == 0)) {
LAB_1806786c2:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_b8 = false;
  DStack_b4 = DVar2;
LAB_18067869e:
  func_0x180673080(local_28 ^ (uint64_t)auStack_e8);
  return;
}

// func_0x1806786d0
DWORD func_0x1806786d0(LPCWSTR param_1,LPCWSTR param_2)
{
  BOOLEAN BVar1;
  DWORD DVar2;
  
  BVar1 = CreateSymbolicLinkW(param_1,param_2,3);
  if (BVar1 != '\0') {
    return 0;
  }
  DVar2 = GetLastError();
  if (DVar2 == 0x57) {
    BVar1 = CreateSymbolicLinkW(param_1,param_2,1);
    if (BVar1 != '\0') {
      return 0;
    }
    DVar2 = GetLastError();
  }
  return DVar2;
}

// func_0x180678730
DWORD func_0x180678730(LPCWSTR param_1,LPCWSTR param_2)
{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = CreateHardLinkW(param_1,param_2,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018067874c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}

// func_0x180678760
DWORD func_0x180678760(LPCWSTR param_1,LPCWSTR param_2)
{
  BOOLEAN BVar1;
  DWORD DVar2;
  
  BVar1 = CreateSymbolicLinkW(param_1,param_2,2);
  if (BVar1 != '\0') {
    return 0;
  }
  DVar2 = GetLastError();
  if (DVar2 == 0x57) {
    BVar1 = CreateSymbolicLinkW(param_1,param_2,0);
    if (BVar1 != '\0') {
      return 0;
    }
    DVar2 = GetLastError();
  }
  return DVar2;
}

// func_0x1806787c0
DWORD func_0x1806787c0(HANDLE param_1,LPVOID param_2,DWORD param_3)
{
  BOOL BVar1;
  DWORD DVar2;
  DWORD local_res20 [2];
  
  BVar1 = DeviceIoControl(param_1,0x900a8,(LPVOID)0x0,0,param_2,param_3,local_res20,
                          (LPOVERLAPPED)0x0);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  return DVar2;
}

// func_0x180678810
DWORD func_0x180678810(HANDLE param_1,LPVOID param_2)
{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = DeviceIoControl(param_1,0x900a4,param_2,*(ushort *)((int64_t)param_2 + 4) + 8,(LPVOID)0x0
                          ,0,(LPDWORD)0x0,(LPOVERLAPPED)0x0);
  if (BVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000180678853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}

// func_0x180678860
bool func_0x180678860(int *param_1)
{
  return *param_1 == -0x5ffffffd;
}

// func_0x180678870
uint64_t func_0x180678870(int *param_1,int64_t *param_2,ushort *param_3)
{
  ushort uVal_1;
  
  if (*param_1 == -0x5ffffff4) {
    uVal_1 = *(ushort *)((int64_t)param_1 + 0xe) >> 1;
    if (uVal_1 == 0) {
      *param_3 = *(ushort *)((int64_t)param_1 + 10) >> 1;
      *param_2 = (int64_t)param_1 + (uint64_t)(*(ushort *)(param_1 + 2) >> 1) * 2 + 0x14;
      return 0;
    }
    *param_3 = uVal_1;
    *param_2 = (int64_t)param_1 + (uint64_t)(*(ushort *)(param_1 + 3) >> 1) * 2 + 0x14;
    return 0;
  }
  if (*param_1 != -0x5ffffffd) {
    return 0x1129;
  }
  uVal_1 = *(ushort *)((int64_t)param_1 + 0xe) >> 1;
  if (uVal_1 == 0) {
    *param_3 = *(ushort *)((int64_t)param_1 + 10) >> 1;
    *param_2 = (int64_t)param_1 + (uint64_t)(*(ushort *)(param_1 + 2) >> 1) * 2 + 0x10;
    return 0;
  }
  *param_3 = uVal_1;
  *param_2 = (int64_t)param_1 + (uint64_t)(*(ushort *)(param_1 + 3) >> 1) * 2 + 0x10;
  return 0;
}

// func_0x180678910
uint64_t func_0x180678910(LPCWSTR param_1)
{
  BOOL BVar1;
  DWORD DVar2;
  uint32_t local_res10;
  uint8_t local_28 [16];
  byte local_18;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    return (uint64_t)local_res10;
  }
  DVar2 = GetLastError();
  if (DVar2 == 0xb7) {
    DVar2 = func_0x180677ed0(param_1,local_28,3,0xffffffff);
    if ((DVar2 == 0) && ((local_18 & 0x10) == 0)) {
      DVar2 = 0xb7;
    }
  }
  return (uint64_t)CONCAT43(DVar2,local_res10._1_3_) << 8;
}

// func_0x180678990
void func_0x180678990(uint64_t param_1)
{
  bool bFlag_1;
  uint uVal_2;
  BOOL BVar3;
  int iVal_4;
  HANDLE pVoid_5;
  uint8_t auStack_88 [32];
  uint64_t *local_68;
  uint local_58;
  uint uStack_54;
  uint8_t local_50;
  ushort uStack_4f;
  uint8_t uStack_4d;
  uint32_t uStack_4c;
  uint64_t local_48;
  uint64_t local_40;
  uint8_t local_38 [16];
  uint local_28;
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  uVal_2 = func_0x180677910(&local_50,param_1,0x10180,0x2200000);
  if (uVal_2 == 0) {
    pVoid_5 = (HANDLE)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,local_50)));
    bFlag_1 = true;
LAB_1806789de:
    local_58 = 0x13;
    BVar3 = SetFileInformationByHandle(pVoid_5,0x15,&local_58,4);
    if (BVar3 != 0) {
LAB_180678a05:
      if ((pVoid_5 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(pVoid_5), BVar3 == 0)) {
LAB_180678cb3:
                    /* WARNING: Subroutine does not return */
        abort();
      }
LAB_180678a1c:
      local_58._0_1_ = 1;
      uStack_54 = 0;
      goto LAB_180678c7f;
    }
    uVal_2 = GetLastError();
    if (((uVal_2 != 1) && (uVal_2 != 0x32)) && (uVal_2 != 0x57)) {
LAB_180678abf:
      uStack_54 = uVal_2;
      if (pVoid_5 != (HANDLE)0xffffffffffffffff) {
        iVal_4 = CloseHandle(pVoid_5);
        goto joined_r0x000180678c76;
      }
      goto LAB_180678c7b;
    }
    uVal_2 = func_0x180678d90(pVoid_5);
    if (uVal_2 == 0) goto LAB_180678a05;
    if ((uVal_2 != 5) || (!bFlag_1)) goto LAB_180678abf;
    BVar3 = GetFileInformationByHandleEx(pVoid_5,FileBasicInfo,&local_48,0x28);
    if (BVar3 != 0) {
      if ((local_28 & 1) == 0) {
        if (pVoid_5 != (HANDLE)0xffffffffffffffff) {
          iVal_4 = CloseHandle(pVoid_5);
joined_r0x000180678c32:
          if (iVal_4 == 0) goto LAB_180678cb9;
        }
LAB_180678be1:
        uStack_54 = 5;
        goto LAB_180678c7b;
      }
      local_28 = local_28 ^ 1;
      BVar3 = SetFileInformationByHandle(pVoid_5,FileBasicInfo,&local_48,0x28);
      if (BVar3 == 0) goto LAB_180678b13;
      iVal_4 = func_0x180678d90(pVoid_5);
      if (iVal_4 != 0) {
        if (iVal_4 == 5) {
          local_28 = local_28 | 1;
          BVar3 = SetFileInformationByHandle(pVoid_5,FileBasicInfo,&local_48,0x28);
          if (BVar3 != 0) {
            if (pVoid_5 != (HANDLE)0xffffffffffffffff) {
              iVal_4 = CloseHandle(pVoid_5);
              goto joined_r0x000180678c32;
            }
            goto LAB_180678be1;
          }
          goto LAB_180678b13;
        }
        uStack_54 = GetLastError();
        if (pVoid_5 == (HANDLE)0xffffffffffffffff) goto LAB_180678b32;
        BVar3 = CloseHandle(pVoid_5);
        if (BVar3 == 0) goto LAB_180678cb3;
        local_58 = (uint)uStack_4f << 8;
        goto LAB_180678c87;
      }
      if (pVoid_5 == (HANDLE)0xffffffffffffffff) goto LAB_180678a1c;
      BVar3 = CloseHandle(pVoid_5);
      if (BVar3 == 0) goto LAB_180678cb9;
      local_58._0_1_ = 1;
      uStack_54 = 0;
      goto LAB_180678c7f;
    }
LAB_180678b13:
    uStack_54 = GetLastError();
    if ((pVoid_5 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(pVoid_5), BVar3 == 0)) {
LAB_180678cb9:
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_180678b32:
    local_58 = (uint)uStack_4f << 8;
  }
  else {
    if (uVal_2 == 5) {
      local_40 = 0x2200000;
      local_68 = &local_48;
      local_48 = 0x20;
      bFlag_1 = false;
      local_38 = ZEXT816(0);
      pVoid_5 = (HANDLE)CreateFile2(param_1,0x10000,7,3);
      if ((pVoid_5 == (HANDLE)0xffffffffffffffff) && (uStack_54 = GetLastError(), uStack_54 != 0)) {
        local_58 = (uint)CONCAT12(uStack_4d,uStack_4f) << 8;
        goto LAB_180678c8e;
      }
      goto LAB_1806789de;
    }
    if (uVal_2 < 0x41) {
      if (((uVal_2 == 0x40) || (uVal_2 == 2)) || ((uVal_2 == 3 || (uVal_2 == 0x35)))) {
LAB_180678c61:
        uVal_2 = 0;
      }
    }
    else if (((uVal_2 == 0x7b) || (uVal_2 == 0xa1)) || (uVal_2 == 0x10b)) goto LAB_180678c61;
    pVoid_5 = (HANDLE)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,local_50)));
    uStack_54 = uVal_2;
    if (pVoid_5 != (HANDLE)0xffffffffffffffff) {
      iVal_4 = CloseHandle(pVoid_5);
joined_r0x000180678c76:
      uStack_54 = uVal_2;
      if (iVal_4 == 0) goto LAB_180678cb3;
    }
LAB_180678c7b:
    local_58._0_1_ = 0;
LAB_180678c7f:
    local_58._0_3_ = CONCAT21(uStack_4f,(uint8_t)local_58);
    local_58 = (uint)(uint3)local_58;
  }
LAB_180678c87:
  local_58 = CONCAT13(uStack_4d,(uint3)local_58);
LAB_180678c8e:
  func_0x180673080(local_20 ^ (uint64_t)auStack_88);
  return;
}

// func_0x180678cc0
DWORD func_0x180678cc0(LPCWSTR param_1,LPCWSTR param_2)
{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = MoveFileExW(param_1,param_2,3);
  if (BVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000180678cdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}

// func_0x180678cf0
void func_0x180678cf0(HANDLE param_1,uint64_t *param_2)
{
  BOOL BVar1;
  DWORD DVar2;
  uint8_t auStack_68 [32];
  _BY_HANDLE_FILE_INFORMATION local_48;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  BVar1 = GetFileInformationByHandleEx(param_1,0x12,param_2,0x18);
  if ((BVar1 == 0) && ((DVar2 = GetLastError(), DVar2 == 0x32 || (DVar2 == 0x57)))) {
    BVar1 = GetFileInformationByHandle(param_1,&local_48);
    if (BVar1 == 0) {
      GetLastError();
    }
    else {
      *param_2 = (uint64_t)local_48.dwVolumeSerialNumber;
      *(DWORD *)(param_2 + 1) = local_48.nFileIndexHigh;
      *(DWORD *)((int64_t)param_2 + 0xc) = local_48.nFileIndexLow;
      param_2[2] = 0;
    }
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_68);
  return;
}

// func_0x180678d90
DWORD func_0x180678d90(HANDLE param_1)
{
  BOOL BVar1;
  DWORD DVar2;
  uint8_t local_res10 [8];
  uint32_t local_res18 [4];
  
  local_res18[0] = 3;
  BVar1 = SetFileInformationByHandle(param_1,0x15,local_res18,4);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 1) {
      if (DVar2 == 5) {
        return 5;
      }
      if ((DVar2 != 0x32) && (DVar2 != 0x57)) {
        return DVar2;
      }
    }
    local_res10[0] = 1;
    BVar1 = SetFileInformationByHandle(param_1,FileDispositionInfo,local_res10,1);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      return DVar2;
    }
  }
  return 0;
}

// API-MS-WIN-CORE-SYNCH-L1-2-0.DLL::InitOnceBeginInitialize
BOOL __stdcall InitOnceBeginInitialize(LPINIT_ONCE lpInitOnce,DWORD dwFlags,PBOOL fPending,LPVOID *lpContext)
{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000180678e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitOnceBeginInitialize(lpInitOnce,dwFlags,fPending,lpContext);
  return BVar1;
}

// API-MS-WIN-CORE-SYNCH-L1-2-0.DLL::InitOnceComplete
BOOL __stdcall InitOnceComplete(LPINIT_ONCE lpInitOnce,DWORD dwFlags,LPVOID lpContext)
{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000180678e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitOnceComplete(lpInitOnce,dwFlags,lpContext);
  return BVar1;
}

// func_0x180678e30
void func_0x180678e30(void)
{
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x180678e40
void func_0x180678e40(DWORD param_1,int64_t *param_2)
{
  int iVal_1;
  DWORD DVar2;
  uint64_t uVal_3;
  int iVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint local_res18 [4];
  
  uVal_6 = 0;
  local_res18[0] = 0;
  uVal_5 = uVal_6;
  uVal_3 = uVal_6;
  do {
    if ((int)uVal_3 != 0) break;
    iVal_4 = (int)uVal_5;
    if (iVal_4 == 0) {
      local_res18[0] = 0x409;
      uVal_5 = 0x409;
LAB_180678eaf:
      DVar2 = FormatMessageA(0x1300,(LPCVOID)0x0,param_1,(DWORD)uVal_5,(LPSTR)param_2,0,
                             (va_list *)0x0);
      uVal_3 = (uint64_t)DVar2;
    }
    else {
      if (iVal_4 != 1) {
        local_res18[0] = 0;
        uVal_5 = uVal_6;
        goto LAB_180678eaf;
      }
      iVal_1 = GetLocaleInfoEx(L"!x-sys-default-locale",0x20000001,(LPWSTR)local_res18,2);
      if (iVal_1 != 0) {
        uVal_5 = (uint64_t)local_res18[0];
        goto LAB_180678eaf;
      }
    }
    uVal_5 = (uint64_t)(iVal_4 + 1U);
  } while ((int)(iVal_4 + 1U) < 3);
  if ((int)uVal_3 != 0) {
    do {
      if ((&DAT_1806e27a0)[*(byte *)(*param_2 + -1 + uVal_3)] == '\0') {
        return;
      }
      uVal_3 = uVal_3 - 1;
    } while (uVal_3 != 0);
  }
  return;
}

// API-MS-WIN-CORE-HEAP-L2-1-0.DLL::LocalFree
HLOCAL __stdcall LocalFree(HLOCAL hMem)
{
  HLOCAL pVoid_1;
  
                    /* WARNING: Could not recover jumptable at 0x000180678f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pVoid_1 = LocalFree(hMem);
  return pVoid_1;
}

// func_0x180678f30
void func_0x180678f30(void)
{
  func_ptr_t fnPtr_1;
  uint8_t local_28 [40];
  
  func_0x180674120(local_28);
  func_0x18067a120(local_28,&DAT_1807686a0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// thunk_FUN_180695dd0
void thunk_FUN_180695dd0(LPVOID param_1)
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

// func_0x180678f60
void func_0x180678f60(void)
{
  func_ptr_t fnPtr_1;
  
  fnPtr_1 = (func_ptr_t )swi(0x29);
  (*fnPtr_1)(8);
  return;
}

// func_0x180678f70
void func_0x180678f70(void)
{
  func_ptr_t fnPtr_1;
  
  fnPtr_1 = (func_ptr_t )swi(0x29);
  (*fnPtr_1)(2);
  return;
}

// func_0x180678f80
/* WARNING: Removing unreachable block (ram,0x000180679087) */
/* WARNING: Removing unreachable block (ram,0x000180679075) */
/* WARNING: Removing unreachable block (ram,0x000180679063) */
/* WARNING: Removing unreachable block (ram,0x00018067903c) */
/* WARNING: Removing unreachable block (ram,0x000180678fb7) */
/* WARNING: Removing unreachable block (ram,0x000180678f92) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x000180679087) */
/* WARNING: Removing unreachable block (ram,0x000180679075) */
/* WARNING: Removing unreachable block (ram,0x000180679063) */
/* WARNING: Removing unreachable block (ram,0x00018067903c) */
/* WARNING: Removing unreachable block (ram,0x000180678fb7) */
/* WARNING: Removing unreachable block (ram,0x000180678f92) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x180678f80(void)
{
  int *pInt_1;
  uint *pU64_2;
  int64_t lVal_3;
  int iVal_4;
  uint uVal_5;
  byte bFlag_6;
  uint64_t uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint in_XCR0;
  
  pInt_1 = (int *)cpuid_basic_info(0);
  iVal_4 = *pInt_1;
  pU64_2 = (uint *)cpuid_Version_info(1);
  uVal_5 = pU64_2[3];
  if ((pInt_1[2] ^ 0x49656e69U | pInt_1[3] ^ 0x6c65746eU | pInt_1[1] ^ 0x756e6547U) == 0) {
    uVal_8 = *pU64_2 & 0xfff3ff0;
    DAT_18083d268 = 0x8000;
    DAT_18083d270 = 0xffffffffffffffff;
    if ((((uVal_8 == 0x106c0) || (uVal_8 == 0x20660)) || (uVal_8 == 0x20670)) ||
       ((uVal_8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((uint64_t)(uVal_8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180842400 = DAT_180842400 | 1;
    }
  }
  uVal_12 = 0;
  uVal_8 = 0;
  uVal_10 = 0;
  if (iVal_4 < 7) {
    uVal_11 = 0;
    uVal_9 = 0;
  }
  else {
    pInt_1 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVal_11 = pInt_1[1];
    uVal_9 = pInt_1[2];
    if ((uVal_11 >> 9 & 1) != 0) {
      DAT_180842400 = DAT_180842400 | 2;
    }
    if (0 < *pInt_1) {
      lVal_3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVal_12 = *(uint *)(lVal_3 + 8);
    }
    if (0x23 < iVal_4) {
      lVal_3 = cpuid(0x24);
      uVal_8 = *(uint *)(lVal_3 + 4);
    }
    uVal_10 = 0;
    if (0x28 < iVal_4) {
      lVal_3 = cpuid(0x29);
      uVal_10 = *(uint *)(lVal_3 + 4);
    }
  }
  DAT_18083d260 = 1;
  DAT_18083d264 = 2;
  uVal_7 = DAT_18083d278 & 0xfffffffffffffffe;
  if ((uVal_5 >> 0x14 & 1) != 0) {
    DAT_18083d260 = 2;
    DAT_18083d264 = 6;
    uVal_7 = DAT_18083d278 & 0xffffffffffffffee;
  }
  DAT_18083d278 = uVal_7;
  if ((uVal_5 >> 0x1b & 1) != 0) {
    uVal_7 = DAT_18083d278;
    if (((uVal_5 >> 0x1c & 1) != 0) && (bFlag_6 = (byte)in_XCR0, (bFlag_6 & 6) == 6)) {
      DAT_18083d260 = 3;
      uVal_5 = DAT_18083d264 | 8;
      if ((uVal_11 & 0x20) != 0) {
        DAT_18083d260 = 5;
        uVal_5 = DAT_18083d264 | 0x28;
        uVal_7 = DAT_18083d278 & 0xfffffffffffffffd;
        if (((uVal_11 & 0xd0030000) == 0xd0030000) && ((bFlag_6 & 0xe0) == 0xe0)) {
          DAT_18083d264 = DAT_18083d264 | 0x68;
          DAT_18083d260 = 6;
          uVal_5 = DAT_18083d264;
          uVal_7 = DAT_18083d278 & 0xffffffffffffffd9;
        }
      }
      DAT_18083d278 = uVal_7;
      DAT_18083d264 = uVal_5;
      if ((uVal_9 >> 0x17 & 1) != 0) {
        DAT_18083d278 = DAT_18083d278 & 0xfffffffffeffffff;
      }
      uVal_7 = DAT_18083d278;
      if (((uVal_12 >> 0x13 & 1) != 0) && ((bFlag_6 & 0xe0) == 0xe0)) {
        _DAT_180842404 = uVal_8 & 0xff;
        uVal_7 = DAT_18083d278 & 0xfffffffffeffffd0;
        if (1 < _DAT_180842404) {
          uVal_7 = DAT_18083d278 & 0xfffffffffeffff90;
        }
      }
    }
    DAT_18083d278 = uVal_7;
    if ((((uVal_12 >> 0x15 & 1) != 0) && ((uVal_10 & 1) != 0)) && ((in_XCR0 >> 0x13 & 1) != 0)) {
      DAT_18083d278 = DAT_18083d278 & 0xffffffffffffff7f;
    }
  }
  return 0;
}

// func_0x180679230
uint64_t func_0x180679230(void)
{
  return 1;
}

// func_0x180679240
bool func_0x180679240(void)
{
  return DAT_180842408 != 0;
}

// func_0x180679250
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180679250(void)
{
  _DAT_18084240c = 0;
  return;
}

// func_0x180679260
void func_0x180679260(uint32_t param_1)
{
  func_ptr_t fnPtr_1;
  
  fnPtr_1 = (func_ptr_t )swi(0x29);
  (*fnPtr_1)(param_1);
  return;
}

// func_0x180679270
void func_0x180679270(LPCRITICAL_SECTION param_1)
{
                    /* WARNING: Could not recover jumptable at 0x000180679278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSectionEx(param_1,4000,0);
  return;
}

// API-MS-WIN-CORE-SYNCH-L1-1-0.DLL::DeleteCriticalSection
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
                    /* WARNING: Could not recover jumptable at 0x000180679280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}

// API-MS-WIN-CORE-SYNCH-L1-1-0.DLL::EnterCriticalSection
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
                    /* WARNING: Could not recover jumptable at 0x000180679290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}

// API-MS-WIN-CORE-SYNCH-L1-1-0.DLL::LeaveCriticalSection
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
                    /* WARNING: Could not recover jumptable at 0x0001806792a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// _Atexit
/* Library Function - Single Match
    void __cdecl _Atexit(void (__cdecl*)(void))
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    void __cdecl _Atexit(void (__cdecl*)(void))
   
   Library: Visual Studio 2019 Release */
void __cdecl _Atexit(_func_void *param_1)
{
  PVOID pVoid_1;
  
  if (DAT_18083d280 != 0) {
    pVoid_1 = EncodePointer(param_1);
    DAT_18083d280 = DAT_18083d280 + -1;
    *(PVOID *)(&DAT_180842470 + DAT_18083d280 * 8) = pVoid_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x180679360
void func_0x180679360(uint64_t param_1,int64_t param_2,int *param_3)
{
  func_ptr_t fnPtr_1;
  byte bFlag_2;
  uint uVal_3;
  uint64_t uVal_4;
  byte bFlag_5;
  byte *pU8_6;
  byte *pU8_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  
  uVal_9 = param_1;
  if (((int64_t)*param_3 & 4U) != 0) {
    uVal_9 = (int64_t)param_3[1] + param_1 & (int64_t)-param_3[2];
  }
  pU8_6 = (byte *)((uint64_t)*(uint *)(*(int64_t *)(param_2 + 0x10) + 8) +
                   *(int64_t *)(param_2 + 8));
  bFlag_2 = pU8_6[3];
  if ((*pU8_6 & 7) < 3) {
    if ((bFlag_2 & 0xf) != 0) {
LAB_1806794bd:
      uVal_8 = (uint64_t)bFlag_2 & 0xfffffffffffffff0;
      goto LAB_1806794c1;
    }
  }
  else if ((bFlag_2 & 0x1f) != 0) {
    uVal_8 = 0;
    pU8_6 = pU8_6 + (uint64_t)(bFlag_2 & 0x1f) + 4;
    uVal_4 = uVal_8;
    pU8_7 = pU8_6;
    if (bFlag_2 >> 5 != 0) {
      do {
        pU8_6 = pU8_7 + 3;
        if (*pU8_7 >> 3 != 0) {
          pU8_6 = pU8_7 + (uint64_t)(uint)(*pU8_7 >> 3) + 6;
        }
        uVal_3 = (int)uVal_4 + 1;
        uVal_4 = (uint64_t)uVal_3;
        pU8_7 = pU8_6;
      } while (uVal_3 < bFlag_2 >> 5);
    }
    if ((bFlag_2 & 0x1f) == 0) goto LAB_1806794c1;
    bFlag_2 = *pU8_6;
    bFlag_5 = bFlag_2;
    if (((bFlag_2 < 4) || (bFlag_5 = bFlag_2 & 0xf, (byte)(bFlag_5 - 8) < 3)) ||
       (bFlag_5 = bFlag_2 & 7, (byte)(bFlag_5 - 4) < 4)) {
      if (bFlag_5 == 0) {
        bFlag_2 = pU8_6[1];
        goto LAB_1806794bd;
      }
      if (bFlag_2 < 4) goto LAB_180679477;
      bFlag_5 = bFlag_2 & 0xf;
      if (((byte)((bFlag_2 & 0xf) - 8) < 3) || (bFlag_5 = bFlag_2 & 7, (byte)((bFlag_2 & 7) - 4) < 4)) {
        bFlag_2 = bFlag_5;
        if (bFlag_2 < 0x21) goto LAB_180679477;
        goto LAB_1806794e9;
      }
    }
    if ((bFlag_2 & 0x3f) != 0x20) {
LAB_1806794e9:
      func_0x180678f70();
      fnPtr_1 = (func_ptr_t )swi(3);
      (*fnPtr_1)();
      return;
    }
    bFlag_2 = 0x20;
LAB_180679477:
                    /* WARNING: Could not recover jumptable at 0x00018067948c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(func_ptr_t )((uint64_t)*(uint *)(&DAT_1806794f0 + (uint64_t)(byte)(&DAT_180679504)[bFlag_2] * 4) +
              0x180000000))
              ((func_ptr_t )((uint64_t)
                        *(uint *)(&DAT_1806794f0 + (uint64_t)(byte)(&DAT_180679504)[bFlag_2] * 4) +
                       0x180000000));
    return;
  }
  uVal_8 = 0;
LAB_1806794c1:
  func_0x180673080(uVal_8 + param_1 ^ *(uint64_t *)(((int64_t)*param_3 & 0xfffffffffffffff8U) + uVal_9)
               );
  return;
}

// func_0x180679550
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
void func_0x180679550(LPCWSTR param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6 ,UINT param_7)
{
  int *pInt_1;
  int64_t lVal_2;
  int cchCount1;
  DWORD dwCmpFlags;
  LPCWSTR lpLocaleName;
  BOOL BVar3;
  int iVal_4;
  int iVal_5;
  size_t sz_6;
  BYTE *pBool_7;
  uint32_t *lpString1;
  uint32_t *pU64_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint8_t *pU64_11;
  uint8_t *pU64_12;
  uint8_t auStackY_c8 [32];
  int local_78 [2];
  LPCWSTR local_70;
  _cpinfo local_68;
  uint64_t local_50;
  
  pU64_12 = auStackY_c8;
  local_50 = DAT_18083cf40 ^ (uint64_t)local_78;
  local_78[1] = param_2;
  local_70 = param_1;
  if (param_4 < 1) {
    if (param_4 < -1) goto LAB_180679853;
  }
  else {
    sz_6 = __strncnt((char *)param_3,(int64_t)param_4);
    param_4 = (int)sz_6;
  }
  if (param_6 < 1) {
    pU64_12 = auStackY_c8;
    if (param_6 < -1) goto LAB_180679853;
  }
  else {
    sz_6 = __strncnt((char *)param_5,(int64_t)param_6);
    param_6 = (int)sz_6;
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    pU64_12 = auStackY_c8;
    if ((param_4 == param_6) ||
       (((pU64_12 = auStackY_c8, 1 < param_6 || (pU64_12 = auStackY_c8, 1 < param_4)) ||
        (BVar3 = GetCPInfo(param_7,&local_68), pU64_12 = auStackY_c8, BVar3 == 0))))
    goto LAB_180679853;
    if (0 < param_4) {
      pU64_12 = auStackY_c8;
      if (1 < local_68.MaxCharSize) {
        pBool_7 = local_68.LeadByte;
        while (((pU64_12 = auStackY_c8, local_68.LeadByte[0] != 0 &&
                (pU64_12 = auStackY_c8, pBool_7[1] != 0)) &&
               ((*param_3 < *pBool_7 || (pU64_12 = auStackY_c8, pBool_7[1] < *param_3))))) {
          pBool_7 = pBool_7 + 2;
          local_68.LeadByte[0] = *pBool_7;
        }
      }
      goto LAB_180679853;
    }
    if (0 < param_6) {
      pU64_12 = auStackY_c8;
      if (1 < local_68.MaxCharSize) {
        pBool_7 = local_68.LeadByte;
        while (((pU64_12 = auStackY_c8, local_68.LeadByte[0] != 0 &&
                (pU64_12 = auStackY_c8, pBool_7[1] != 0)) &&
               ((*param_5 < *pBool_7 || (pU64_12 = auStackY_c8, pBool_7[1] < *param_5))))) {
          pBool_7 = pBool_7 + 2;
          local_68.LeadByte[0] = *pBool_7;
        }
      }
      goto LAB_180679853;
    }
  }
  iVal_4 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
  local_78[0] = iVal_4;
  pU64_12 = auStackY_c8;
  if (iVal_4 == 0) goto LAB_180679853;
  uVal_9 = (int64_t)iVal_4 * 2 + 0x10;
  uVal_10 = 0;
  if ((uint64_t)((int64_t)iVal_4 * 2) < uVal_9) {
    uVal_10 = uVal_9;
  }
  pU64_12 = auStackY_c8;
  if (uVal_10 == 0) goto LAB_180679853;
  if (uVal_10 < 0x401) {
    uVal_9 = uVal_10 + 0xf;
    if (uVal_9 <= uVal_10) {
      uVal_9 = 0xffffffffffffff0;
    }
    lVal_2 = -(uVal_9 & 0xfffffffffffffff0);
    pU64_12 = auStackY_c8 + lVal_2;
    if ((uint32_t *)((int64_t)local_78 + lVal_2) == (uint32_t *)0x0) goto LAB_180679853;
    *(uint32_t *)((int64_t)local_78 + lVal_2) = 0xcccc;
    lpString1 = (uint32_t *)((int64_t)&local_68 + lVal_2);
    pU64_12 = auStackY_c8 + lVal_2;
  }
  else {
    lpString1 = (uint32_t *)_malloc_base(uVal_10);
    pU64_12 = auStackY_c8;
    iVal_4 = local_78[0];
    if (lpString1 != (uint32_t *)0x0) {
      *lpString1 = 0xdddd;
      lpString1 = lpString1 + 4;
      pU64_12 = auStackY_c8;
    }
  }
  if (lpString1 == (uint32_t *)0x0) goto LAB_180679853;
  *(int *)(pU64_12 + 0x28) = iVal_4;
  *(uint32_t **)(pU64_12 + 0x20) = lpString1;
  *(uint64_t *)(pU64_12 + -8) = 0x180679762;
  iVal_4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,*(LPWSTR *)(pU64_12 + 0x20),
                              *(int *)(pU64_12 + 0x28));
  pU64_11 = pU64_12;
  if (iVal_4 != 0) {
    *(uint32_t *)(pU64_12 + 0x28) = 0;
    *(uint64_t *)(pU64_12 + 0x20) = 0;
    *(uint64_t *)(pU64_12 + -8) = 0x180679788;
    iVal_4 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,*(LPWSTR *)(pU64_12 + 0x20),
                                *(int *)(pU64_12 + 0x28));
    if (iVal_4 != 0) {
      uVal_9 = (int64_t)iVal_4 * 2 + 0x10;
      uVal_10 = 0;
      if ((uint64_t)((int64_t)iVal_4 * 2) < uVal_9) {
        uVal_10 = uVal_9;
      }
      if (uVal_10 != 0) {
        if (uVal_10 < 0x401) {
          uVal_9 = uVal_10 + 0xf;
          if (uVal_9 <= uVal_10) {
            uVal_9 = 0xffffffffffffff0;
          }
          *(uint64_t *)(pU64_12 + -8) = 0x1806797d4;
          lVal_2 = -(uVal_9 & 0xfffffffffffffff0);
          pU64_11 = pU64_12 + lVal_2;
          pU64_8 = (uint32_t *)(pU64_12 + lVal_2 + 0x50);
          if (pU64_8 == (uint32_t *)0x0) goto LAB_18067983f;
          *pU64_8 = 0xcccc;
          pU64_12 = pU64_12 + lVal_2;
LAB_1806797ff:
          pU64_8 = pU64_8 + 4;
          pU64_11 = pU64_12;
        }
        else {
          *(uint64_t *)(pU64_12 + -8) = 0x1806797f1;
          pU64_8 = (uint32_t *)_malloc_base(uVal_10);
          if (pU64_8 != (uint32_t *)0x0) {
            *pU64_8 = 0xdddd;
            goto LAB_1806797ff;
          }
        }
        if (pU64_8 != (uint32_t *)0x0) {
          *(int *)(pU64_11 + 0x28) = iVal_4;
          pInt_1 = pU64_8 + -4;
          *(uint32_t **)(pU64_11 + 0x20) = pU64_8;
          *(uint64_t *)(pU64_11 + -8) = 0x18067982a;
          iVal_5 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,*(LPWSTR *)(pU64_11 + 0x20),
                                      *(int *)(pU64_11 + 0x28));
          lpLocaleName = local_70;
          dwCmpFlags = local_78[1];
          cchCount1 = local_78[0];
          if (iVal_5 != 0) {
            *(uint64_t *)(pU64_11 + 0x40) = 0;
            *(uint64_t *)(pU64_11 + 0x38) = 0;
            *(uint64_t *)(pU64_11 + 0x30) = 0;
            *(int *)(pU64_11 + 0x28) = iVal_4;
            *(uint32_t **)(pU64_11 + 0x20) = pU64_8;
            *(uint64_t *)(pU64_11 + -8) = 0x18067989f;
            CompareStringEx(lpLocaleName,dwCmpFlags,(LPCWSTR)lpString1,cchCount1,
                            *(LPCWSTR *)(pU64_11 + 0x20),*(int *)(pU64_11 + 0x28),
                            *(LPNLSVERSIONINFO *)(pU64_11 + 0x30),*(LPVOID *)(pU64_11 + 0x38),
                            *(LPARAM *)(pU64_11 + 0x40));
            if (*pInt_1 == 0xdddd) {
              *(uint64_t *)(pU64_11 + -8) = 0x1806798b2;
              thunk_FUN_180695dd0(pInt_1);
            }
            pU64_12 = pU64_11;
            if (lpString1[-4] == 0xdddd) {
              *(uint64_t *)(pU64_11 + -8) = 0x1806798c4;
              thunk_FUN_180695dd0(lpString1 + -4);
            }
            goto LAB_180679853;
          }
          if (*pInt_1 == 0xdddd) {
            *(uint64_t *)(pU64_11 + -8) = 0x18067983f;
            thunk_FUN_180695dd0(pInt_1);
          }
        }
      }
    }
  }
LAB_18067983f:
  pU64_12 = pU64_11;
  if (lpString1[-4] == 0xdddd) {
    *(uint64_t *)(pU64_11 + -8) = 0x180679851;
    thunk_FUN_180695dd0(lpString1 + -4);
  }
LAB_180679853:
  uVal_9 = local_50 ^ (uint64_t)local_78;
  *(uint64_t *)(pU64_12 + -8) = 0x18067985f;
  func_0x180673080(uVal_9);
  return;
}

// func_0x1806798d0
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
void func_0x1806798d0(LPCWSTR param_1,uint param_2,char *param_3,int param_4,uint64_t param_5, int param_6,UINT param_7,int param_8)
{
  int64_t lVal_1;
  int iVal_2;
  int iVal_3;
  size_t sz_4;
  uint64_t uVal_5;
  uint32_t *lpSrcStr;
  uint32_t *lpWideCharStr;
  DWORD dwFlags;
  uint64_t uVal_6;
  uint8_t *pU64_7;
  uint8_t *pU64_8;
  uint8_t *pU64_9;
  uint8_t auStackY_a8 [32];
  uint64_t local_58 [3];
  
  pU64_7 = auStackY_a8;
  local_58[0] = DAT_18083cf40 ^ (uint64_t)local_58;
  iVal_3 = param_4;
  if (0 < param_4) {
    sz_4 = __strncnt(param_3,(int64_t)param_4);
    iVal_2 = (int)sz_4;
    iVal_3 = iVal_2 + 1;
    if (param_4 <= iVal_2) {
      iVal_3 = iVal_2;
    }
  }
  dwFlags = 1;
  if (param_8 != 0) {
    dwFlags = 9;
  }
  iVal_2 = MultiByteToWideChar(param_7,dwFlags,param_3,iVal_3,(LPWSTR)0x0,0);
  pU64_8 = auStackY_a8;
  if (iVal_2 == 0) goto LAB_180679a08;
  uVal_5 = (int64_t)iVal_2 * 2 + 0x10;
  uVal_6 = 0;
  if ((uint64_t)((int64_t)iVal_2 * 2) < uVal_5) {
    uVal_6 = uVal_5;
  }
  pU64_8 = auStackY_a8;
  if (uVal_6 == 0) goto LAB_180679a08;
  if (uVal_6 < 0x401) {
    uVal_5 = uVal_6 + 0xf;
    if (uVal_5 <= uVal_6) {
      uVal_5 = 0xffffffffffffff0;
    }
    lVal_1 = -(uVal_5 & 0xfffffffffffffff0);
    pU64_8 = auStackY_a8 + lVal_1;
    pU64_7 = auStackY_a8 + lVal_1;
    lpSrcStr = (uint32_t *)((int64_t)local_58 + lVal_1);
    if (lpSrcStr == (uint32_t *)0x0) goto LAB_180679a08;
    *lpSrcStr = 0xcccc;
LAB_1806799c9:
    lpSrcStr = lpSrcStr + 4;
    pU64_8 = pU64_7;
  }
  else {
    lpSrcStr = (uint32_t *)_malloc_base(uVal_6);
    pU64_8 = auStackY_a8;
    if (lpSrcStr != (uint32_t *)0x0) {
      *lpSrcStr = 0xdddd;
      goto LAB_1806799c9;
    }
  }
  if (lpSrcStr == (uint32_t *)0x0) goto LAB_180679a08;
  *(int *)(pU64_8 + 0x28) = iVal_2;
  *(uint32_t **)(pU64_8 + 0x20) = lpSrcStr;
  *(uint64_t *)(pU64_8 + -8) = 0x1806799f0;
  iVal_3 = MultiByteToWideChar(param_7,1,param_3,iVal_3,*(LPWSTR *)(pU64_8 + 0x20),
                              *(int *)(pU64_8 + 0x28));
  if (iVal_3 != 0) {
    *(uint64_t *)(pU64_8 + 0x40) = 0;
    *(uint64_t *)(pU64_8 + 0x38) = 0;
    *(uint64_t *)(pU64_8 + 0x30) = 0;
    *(uint32_t *)(pU64_8 + 0x28) = 0;
    *(uint64_t *)(pU64_8 + 0x20) = 0;
    *(uint64_t *)(pU64_8 + -8) = 0x180679a51;
    iVal_3 = LCMapStringEx(param_1,param_2,(LPCWSTR)lpSrcStr,iVal_2,*(LPWSTR *)(pU64_8 + 0x20),
                          *(int *)(pU64_8 + 0x28),*(LPNLSVERSIONINFO *)(pU64_8 + 0x30),
                          *(LPVOID *)(pU64_8 + 0x38),*(LPARAM *)(pU64_8 + 0x40));
    if (iVal_3 != 0) {
      pU64_9 = pU64_8;
      if ((param_2 >> 10 & 1) == 0) {
        uVal_5 = (int64_t)iVal_3 * 2 + 0x10;
        uVal_6 = 0;
        if ((uint64_t)((int64_t)iVal_3 * 2) < uVal_5) {
          uVal_6 = uVal_5;
        }
        if (uVal_6 != 0) {
          if (uVal_6 < 0x401) {
            uVal_5 = uVal_6 + 0xf;
            if (uVal_5 <= uVal_6) {
              uVal_5 = 0xffffffffffffff0;
            }
            *(uint64_t *)(pU64_8 + -8) = 0x180679aed;
            lVal_1 = -(uVal_5 & 0xfffffffffffffff0);
            pU64_9 = pU64_8 + lVal_1;
            lpWideCharStr = (uint32_t *)(pU64_8 + lVal_1 + 0x50);
            if (lpWideCharStr == (uint32_t *)0x0) goto LAB_180679bb6;
            *lpWideCharStr = 0xcccc;
            pU64_8 = pU64_8 + lVal_1;
LAB_180679b1c:
            lpWideCharStr = lpWideCharStr + 4;
            pU64_9 = pU64_8;
          }
          else {
            *(uint64_t *)(pU64_8 + -8) = 0x180679b0e;
            lpWideCharStr = (uint32_t *)_malloc_base(uVal_6);
            if (lpWideCharStr != (uint32_t *)0x0) {
              *lpWideCharStr = 0xdddd;
              goto LAB_180679b1c;
            }
          }
          if (lpWideCharStr != (uint32_t *)0x0) {
            *(uint64_t *)(pU64_9 + 0x40) = 0;
            *(uint64_t *)(pU64_9 + 0x38) = 0;
            *(uint64_t *)(pU64_9 + 0x30) = 0;
            *(int *)(pU64_9 + 0x28) = iVal_3;
            *(uint32_t **)(pU64_9 + 0x20) = lpWideCharStr;
            *(uint64_t *)(pU64_9 + -8) = 0x180679b55;
            iVal_2 = LCMapStringEx(param_1,param_2,(LPCWSTR)lpSrcStr,iVal_2,*(LPWSTR *)(pU64_9 + 0x20)
                                  ,*(int *)(pU64_9 + 0x28),*(LPNLSVERSIONINFO *)(pU64_9 + 0x30),
                                  *(LPVOID *)(pU64_9 + 0x38),*(LPARAM *)(pU64_9 + 0x40));
            if (iVal_2 != 0) {
              if (param_6 == 0) {
                param_5 = 0;
                *(uint64_t *)(pU64_9 + 0x38) = 0;
                *(uint64_t *)(pU64_9 + 0x30) = 0;
                *(uint32_t *)(pU64_9 + 0x28) = 0;
              }
              else {
                *(uint64_t *)(pU64_9 + 0x38) = 0;
                *(uint64_t *)(pU64_9 + 0x30) = 0;
                *(int *)(pU64_9 + 0x28) = param_6;
              }
              *(uint64_t *)(pU64_9 + 0x20) = param_5;
              *(uint64_t *)(pU64_9 + -8) = 0x180679ba2;
              WideCharToMultiByte(param_7,0,(LPCWSTR)lpWideCharStr,iVal_3,*(LPSTR *)(pU64_9 + 0x20),
                                  *(int *)(pU64_9 + 0x28),*(LPCSTR *)(pU64_9 + 0x30),
                                  *(LPBOOL *)(pU64_9 + 0x38));
            }
            if (lpWideCharStr[-4] == 0xdddd) {
              *(uint64_t *)(pU64_9 + -8) = 0x180679bb6;
              thunk_FUN_180695dd0(lpWideCharStr + -4);
            }
          }
        }
      }
      else if ((param_6 != 0) && (iVal_3 <= param_6)) {
        *(uint64_t *)(pU64_8 + 0x40) = 0;
        *(uint64_t *)(pU64_8 + 0x38) = 0;
        *(uint64_t *)(pU64_8 + 0x30) = 0;
        *(int *)(pU64_8 + 0x28) = param_6;
        *(uint64_t *)(pU64_8 + 0x20) = param_5;
        *(uint64_t *)(pU64_8 + -8) = 0x180679aa6;
        LCMapStringEx(param_1,param_2,(LPCWSTR)lpSrcStr,iVal_2,*(LPWSTR *)(pU64_8 + 0x20),
                      *(int *)(pU64_8 + 0x28),*(LPNLSVERSIONINFO *)(pU64_8 + 0x30),
                      *(LPVOID *)(pU64_8 + 0x38),*(LPARAM *)(pU64_8 + 0x40));
      }
LAB_180679bb6:
      pU64_8 = pU64_9;
      if (lpSrcStr[-4] == 0xdddd) {
        *(uint64_t *)(pU64_9 + -8) = 0x180679bc8;
        thunk_FUN_180695dd0(lpSrcStr + -4);
      }
      goto LAB_180679a08;
    }
  }
  if (lpSrcStr[-4] == 0xdddd) {
    *(uint64_t *)(pU64_8 + -8) = 0x180679a06;
    thunk_FUN_180695dd0(lpSrcStr + -4);
  }
LAB_180679a08:
  uVal_5 = local_58[0] ^ (uint64_t)local_58;
  *(uint64_t *)(pU64_8 + -8) = 0x180679a14;
  func_0x180673080(uVal_5);
  return;
}

// func_0x180679bd0
uint64_t func_0x180679bd0(uint64_t param_1,uint64_t param_2)
{
  func_ptr_t fnPtr_1;
  bool bFlag_2;
  char ch_3;
  uint8_t uVal_4;
  int iVal_5;
  int64_t *pLong_6;
  uint64_t uVal_7;
  
  ch_3 = func_0x180673330(0);
  if (ch_3 != '\0') {
    uVal_4 = func_0x1806732b0();
    bFlag_2 = true;
    if (DAT_180841da0 != 0) {
      func_0x180679260(7);
      fnPtr_1 = (func_ptr_t )swi(3);
      uVal_7 = (*fnPtr_1)();
      return uVal_7;
    }
    DAT_180841da0 = 1;
    ch_3 = func_0x1806733f0();
    if (ch_3 != '\0') {
      func_0x18067a080();
      func_0x18067a020();
      func_0x18067a040();
      iVal_5 = func_0x180684934(&DAT_180765da8,&DAT_180765de0);
      if (iVal_5 == 0) {
        ch_3 = func_0x180673470();
        if (ch_3 != '\0') {
          func_0x1806848fc(&DAT_180765908,&DAT_180765da0);
          DAT_180841da0 = 2;
          bFlag_2 = false;
        }
      }
    }
    func_0x180673300(uVal_4);
    if (!bFlag_2) {
      pLong_6 = (int64_t *)func_0x18067a070();
      if (*pLong_6 != 0) {
        ch_3 = func_0x180673210(pLong_6);
        if (ch_3 != '\0') {
          (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(param_1,2,param_2);
        }
      }
      DAT_180842598 = DAT_180842598 + 1;
      return 1;
    }
  }
  return 0;
}

// func_0x180679ce0
uint64_t func_0x180679ce0(uint8_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint8_t uVal_2;
  byte bFlag_3;
  uint64_t uVal_4;
  uint8_t uVal_5;
  
  if (DAT_180842598 < 1) {
    return 0;
  }
  DAT_180842598 = DAT_180842598 + -1;
  uVal_2 = func_0x1806732b0();
  if (DAT_180841da0 == 2) {
    uVal_5 = uVal_2;
    func_0x1806734b0();
    func_0x18067a030();
    func_0x18067a0d0();
    DAT_180841da0 = 0;
    func_0x180673300(uVal_2);
    bFlag_3 = func_0x180673370(param_1,0,param_3,param_4,uVal_5);
    func_0x1806734f0();
    return (uint64_t)bFlag_3;
  }
  func_0x180679260(7);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_1)();
  return uVal_4;
}

// func_0x180679d80
uint64_t func_0x180679d80(uint8_t param_1,int param_2,int64_t param_3)
{
  byte bFlag_1;
  uint64_t uVal_2;
  
  if (param_2 == 0) {
    uVal_2 = func_0x180679ce0(param_3 != 0);
    return uVal_2;
  }
  if (param_2 == 1) {
    uVal_2 = func_0x180679bd0(param_1,param_3);
    return uVal_2;
  }
  if (param_2 == 2) {
    bFlag_1 = func_0x180673510();
    return (uint64_t)bFlag_1;
  }
  if (param_2 != 3) {
    return 1;
  }
  bFlag_1 = func_0x180673540();
  return (uint64_t)bFlag_1;
}

// func_0x180679de0
int func_0x180679de0(uint64_t param_1,int param_2,int64_t param_3)
{
  int iVal_1;
  
  if ((param_2 == 0) && (DAT_180842598 < 1)) {
    return 0;
  }
  if (param_2 - 1U < 2) {
    if (PTR_1806e3b98 == (uint8_t *)0x0) {
      iVal_1 = 1;
    }
    else {
      iVal_1 = (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)();
    }
    if (iVal_1 == 0) {
      return 0;
    }
    iVal_1 = func_0x180679d80(param_1,param_2,param_3);
    if (iVal_1 == 0) {
      return 0;
    }
  }
  iVal_1 = func_0x1803b0ad0(param_1,param_2,param_3);
  if ((param_2 == 1) && (iVal_1 == 0)) {
    func_0x1803b0ad0(param_1,0,param_3);
    func_0x180679ce0(param_3 != 0);
    if (PTR_1806e3b98 != (uint8_t *)0x0) {
      (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(param_1,0,param_3);
    }
  }
  if (((param_2 == 0) || (param_2 == 3)) &&
     (iVal_1 = func_0x180679d80(param_1,param_2,param_3), iVal_1 != 0)) {
    if (PTR_1806e3b98 == (uint8_t *)0x0) {
      iVal_1 = 1;
    }
    else {
      iVal_1 = (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(param_1,param_2,param_3);
    }
  }
  return iVal_1;
}

// entry
void entry(uint64_t param_1,int param_2,uint64_t param_3)
{
  if (param_2 == 1) {
    func_0x180679f60();
  }
  func_0x180679de0(param_1,param_2,param_3);
  return;
}

// func_0x180679f60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180679f60(void)
{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10 [3];
  _FILETIME local_18 [2];
  
  if (DAT_18083cf40 != 0x2b992ddfa232) {
    _DAT_18083cf80 = ~DAT_18083cf40;
    return;
  }
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_res8);
  local_18[0] = local_res8;
  DVar1 = GetCurrentThreadId();
  local_18[0] = (_FILETIME)((uint64_t)local_18[0] ^ (uint64_t)DVar1);
  DVar1 = GetCurrentProcessId();
  local_18[0] = (_FILETIME)((uint64_t)local_18[0] ^ (uint64_t)DVar1);
  QueryPerformanceCounter(local_res10);
  DAT_18083cf40 =
       (local_res10[0].QuadPart << 0x20 ^ local_res10[0].QuadPart ^ (uint64_t)local_18[0] ^
       (uint64_t)local_18) & 0xffffffffffff;
  if (DAT_18083cf40 == 0x2b992ddfa232) {
    DAT_18083cf40 = 0x2b992ddfa233;
  }
  _DAT_18083cf80 = ~DAT_18083cf40;
  return;
}

// func_0x18067a020
void func_0x18067a020(void)
{
                    /* WARNING: Could not recover jumptable at 0x00018067a027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_1808425a0);
  return;
}

// func_0x18067a030
void func_0x18067a030(void)
{
  func_0x18067b4d0(&DAT_1808425a0);
  return;
}

// func_0x18067a040
void func_0x18067a040(void)
{
  uint64_t *pU64_1;
  
  pU64_1 = (uint64_t *)func_0x1800a3aa0();
  *pU64_1 = *pU64_1 | 0x24;
  pU64_1 = (uint64_t *)func_0x18067a060();
  *pU64_1 = *pU64_1 | 2;
  return;
}

// func_0x18067a060
uint8_t * func_0x18067a060(void)
{
  return &DAT_1808425b0;
}

// func_0x18067a070
uint8_t * func_0x18067a070(void)
{
  return &DAT_1808425b8;
}

// func_0x18067a080
/* WARNING: Removing unreachable block (ram,0x00018067a0a0) */
/* WARNING: Removing unreachable block (ram,0x00018067a0a8) */
/* WARNING: Removing unreachable block (ram,0x00018067a0ae) */
/* WARNING: Removing unreachable block (ram,0x00018067a0a0) */
/* WARNING: Removing unreachable block (ram,0x00018067a0a8) */
/* WARNING: Removing unreachable block (ram,0x00018067a0ae) */
void func_0x18067a080(void)
{
  return;
}

// func_0x18067a0d0
/* WARNING: Removing unreachable block (ram,0x00018067a0f0) */
/* WARNING: Removing unreachable block (ram,0x00018067a0f8) */
/* WARNING: Removing unreachable block (ram,0x00018067a0fe) */
/* WARNING: Removing unreachable block (ram,0x00018067a0f0) */
/* WARNING: Removing unreachable block (ram,0x00018067a0f8) */
/* WARNING: Removing unreachable block (ram,0x00018067a0fe) */
void func_0x18067a0d0(void)
{
  return;
}

// func_0x18067a120
void func_0x18067a120(int64_t *param_1,byte *param_2)
{
  ULONG_PTR UVar1;
  PVOID local_38;
  ULONG_PTR local_30;
  int64_t *local_28;
  byte *local_20;
  PVOID local_18;
  
  UVar1 = 0x19930520;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(int64_t *)(*param_1 + -8) + 0x30);
    (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)();
  }
  local_38 = (PVOID)0x0;
  if (param_2 != (byte *)0x0) {
    local_38 = RtlPcToFileHeader(param_2,&local_38);
    if (((*param_2 & 8) != 0) || (local_38 == (PVOID)0x0)) {
      UVar1 = 0x1994000;
    }
  }
  local_30 = UVar1;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = local_38;
  RaiseException(0xe06d7363,1,4,&local_30);
  return;
}

// __DestructExceptionObject
/* Library Function - Single Match
    __DestructExceptionObject
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    __DestructExceptionObject
   
   Library: Visual Studio 2019 Release */
void __DestructExceptionObject(int *param_1)
{
  byte *pU8_1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pU8_1 = *(byte **)(param_1 + 0xc), pU8_1 != (byte *)0x0)))
     ) {
    if (*(int *)(pU8_1 + 4) == 0) {
      if (((*pU8_1 & 0x10) != 0) && (**(int64_t **)(param_1 + 10) != 0)) {
        (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)();
      }
    }
    else {
      func_0x180674e80(*(uint64_t *)(param_1 + 10),
                    (int64_t)*(int *)(pU8_1 + 4) + *(int64_t *)(param_1 + 0xe));
    }
  }
  return;
}

// Unwind@18067a240
void Unwind_18067a240(void)
{
  func_ptr_t fnPtr_1;
  
  func_0x18068d0ec();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18067a250
uint64_t func_0x18067a250(int64_t param_1)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  
  lVal_2 = func_0x180692390();
  pLong_1 = *(int64_t **)(lVal_2 + 0x58);
  while( true ) {
    if (pLong_1 == (int64_t *)0x0) {
      return 1;
    }
    if (*pLong_1 == param_1) break;
    pLong_1 = (int64_t *)pLong_1[1];
  }
  return 0;
}

// func_0x18067a290
int64_t func_0x18067a290(void)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x180692390();
  return lVal_1 + 0x20;
}

// func_0x18067a2b0
int64_t func_0x18067a2b0(int64_t param_1,int *param_2)
{
  int iVal_1;
  
  iVal_1 = param_2[1];
  if (-1 < iVal_1) {
    return (int64_t)*(int *)((int64_t)param_2[2] + *(int64_t *)(iVal_1 + param_1)) +
           (int64_t)iVal_1 + *param_2 + param_1;
  }
  return *param_2 + param_1;
}

// func_0x18067a2e0
uint64_t func_0x18067a2e0(int **param_1)
{
  int iVal_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  pInt_2 = *param_1;
  iVal_1 = *pInt_2;
  if ((iVal_1 == -0x1fbcbcae) || (iVal_1 == -0x1fbcb0b3)) {
    lVal_4 = func_0x180692390();
    if (0 < *(int *)(lVal_4 + 0x30)) {
      lVal_4 = func_0x180692390();
      *(int *)(lVal_4 + 0x30) = *(int *)(lVal_4 + 0x30) + -1;
    }
  }
  else if (iVal_1 == -0x1f928c9d) {
    lVal_4 = func_0x180692390();
    *(int **)(lVal_4 + 0x20) = pInt_2;
    pInt_2 = param_1[1];
    lVal_4 = func_0x180692390();
    *(int **)(lVal_4 + 0x28) = pInt_2;
    func_0x18068d0ec();
    fnPtr_3 = (func_ptr_t )swi(3);
    uVal_5 = (*fnPtr_3)();
    return uVal_5;
  }
  return 0;
}

// func_0x18067a350
uint64_t func_0x18067a350(PEXCEPTION_RECORD param_1,PVOID param_2,uint64_t param_3,int64_t *param_4)
{
  int64_t lVal_1;
  uint *pU64_2;
  int iVal_3;
  uint64_t uVal_4;
  uint uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint64_t uVal_11;
  PEXCEPTION_RECORD local_58;
  uint64_t local_50;
  
  __except_validate_context_record(param_3);
  lVal_1 = param_4[1];
  pU64_2 = (uint *)param_4[7];
  uVal_11 = *param_4 - lVal_1;
  uVal_9 = *(uint *)(param_4 + 9);
  if ((*(byte *)&param_1->ExceptionFlags & 0x66) == 0) {
    local_58 = param_1;
    local_50 = param_3;
    if (uVal_9 < *pU64_2) {
      do {
        if (((pU64_2[(uint64_t)uVal_9 * 4 + 1] <= uVal_11) &&
            (uVal_11 < pU64_2[(uint64_t)uVal_9 * 4 + 2])) && (pU64_2[(uint64_t)uVal_9 * 4 + 4] != 0))
        {
          if (pU64_2[(uint64_t)uVal_9 * 4 + 3] != 1) {
            iVal_3 = (*(func_ptr_t )((uint64_t)pU64_2[(uint64_t)uVal_9 * 4 + 3] + lVal_1))
                              (&local_58,param_2);
            if (iVal_3 < 0) {
              return 0;
            }
            if (iVal_3 < 1) goto LAB_18067a46b;
          }
          if (((param_1->ExceptionCode == 0xe06d7363) &&
              (PTR___DestructExceptionObject_1806e3cf0 != (uint8_t *)0x0)) &&
             (iVal_3 = func_0x1806926b0(&PTR___DestructExceptionObject_1806e3cf0), iVal_3 != 0)) {
            (*(func_ptr_t )PTR___DestructExceptionObject_1806e3cf0)(param_1,1);
          }
          func_0x180692730((uint64_t)pU64_2[(uint64_t)uVal_9 * 4 + 4] + lVal_1,param_2,1);
          RtlUnwindEx(param_2,(PVOID)((uint64_t)pU64_2[(uint64_t)uVal_9 * 4 + 4] + lVal_1),param_1,
                      (PVOID)(uint64_t)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                      (PUNWIND_HISTORY_TABLE)param_4[8]);
          func_0x180692760();
        }
LAB_18067a46b:
        uVal_9 = uVal_9 + 1;
      } while (uVal_9 < *pU64_2);
    }
  }
  else {
    uVal_10 = *pU64_2;
    if (uVal_9 < uVal_10) {
      uVal_7 = param_4[4] - lVal_1;
      do {
        uVal_4 = (uint64_t)uVal_9;
        if ((pU64_2[uVal_4 * 4 + 1] <= uVal_11) && (uVal_11 < pU64_2[uVal_4 * 4 + 2])) {
          uVal_8 = param_1->ExceptionFlags & 0x20;
          if (uVal_8 != 0) {
            uVal_6 = 0;
            if (uVal_10 != 0) {
              do {
                if ((((pU64_2[uVal_6 * 4 + 1] <= uVal_7) && (uVal_7 < pU64_2[uVal_6 * 4 + 2])) &&
                    (pU64_2[uVal_6 * 4 + 4] == pU64_2[uVal_4 * 4 + 4])) &&
                   (pU64_2[uVal_6 * 4 + 3] == pU64_2[uVal_4 * 4 + 3])) break;
                uVal_5 = (int)uVal_6 + 1;
                uVal_6 = (uint64_t)uVal_5;
              } while (uVal_5 < uVal_10);
            }
            if ((uint)uVal_6 != *pU64_2) {
              return 1;
            }
          }
          if (pU64_2[uVal_4 * 4 + 4] == 0) {
            *(uint *)(param_4 + 9) = uVal_9 + 1;
            (*(func_ptr_t )((uint64_t)pU64_2[uVal_4 * 4 + 3] + lVal_1))(1);
          }
          else if ((uVal_7 == pU64_2[uVal_4 * 4 + 4]) && (uVal_8 != 0)) {
            return 1;
          }
        }
        uVal_10 = *pU64_2;
        uVal_9 = uVal_9 + 1;
      } while (uVal_9 < uVal_10);
    }
  }
  return 1;
}

// func_0x18067a570
int64_t func_0x18067a570(byte *param_1,byte *param_2,int64_t param_3,int param_4,char param_5)
{
  uint *pU64_1;
  byte bFlag_2;
  byte bFlag_3;
  int iVal_4;
  func_ptr_t fnPtr_5;
  byte *pU8_6;
  uint uVal_7;
  uint uVal_8;
  int *pInt_9;
  int *pInt_10;
  
  bFlag_2 = *param_1;
  pInt_10 = (int *)(param_1 + 1);
  *param_2 = bFlag_2;
  if ((bFlag_2 & 4) != 0) {
    bFlag_3 = *(byte *)pInt_10;
    pInt_10 = (int *)((int64_t)pInt_10 - (int64_t)(char)(&DAT_1806e3cf8)[bFlag_3 & 0xf]);
    *(uint *)(param_2 + 4) = (uint)pInt_10[-1] >> ((&DAT_1806e3d08)[bFlag_3 & 0xf] & 0x1f);
  }
  if ((bFlag_2 & 8) != 0) {
    iVal_4 = *pInt_10;
    pInt_10 = pInt_10 + 1;
    *(int *)(param_2 + 8) = iVal_4;
  }
  if ((bFlag_2 & 0x10) != 0) {
    iVal_4 = *pInt_10;
    pInt_10 = pInt_10 + 1;
    *(int *)(param_2 + 0xc) = iVal_4;
  }
  pInt_9 = pInt_10 + 1;
  if ((param_5 == '\0') && ((bFlag_2 & 2) != 0)) {
    *(uint32_t *)(param_2 + 0x10) = 0;
    if (*pInt_10 == 0) {
      fnPtr_5 = (func_ptr_t )swi(0x29);
      (*fnPtr_5)(7);
    }
    else {
      pU8_6 = (byte *)(*pInt_10 + param_3);
      uVal_7 = *pU8_6 & 0xf;
      pInt_10 = (int *)(pU8_6 + -(int64_t)(char)(&DAT_1806e3cf8)[uVal_7]);
      uVal_8 = 0;
      pU64_1 = (uint *)(pInt_10 + -1);
      if (*pU64_1 >> ((&DAT_1806e3d08)[uVal_7] & 0x1f) != 0) {
        do {
          if (*pInt_10 == param_4) {
            *(int *)(param_2 + 0x10) = pInt_10[1];
            break;
          }
          pInt_10 = pInt_10 + 2;
          uVal_8 = uVal_8 + 1;
        } while (uVal_8 < *pU64_1 >> ((&DAT_1806e3d08)[uVal_7] & 0x1f));
      }
    }
  }
  else {
    *(int *)(param_2 + 0x10) = *pInt_10;
  }
  if ((bFlag_2 & 1) != 0) {
    bFlag_2 = *(byte *)pInt_9;
    pInt_9 = (int *)((int64_t)pInt_9 - (int64_t)(char)(&DAT_1806e3cf8)[bFlag_2 & 0xf]);
    *(uint *)(param_2 + 0x14) = (uint)pInt_9[-1] >> ((&DAT_1806e3d08)[bFlag_2 & 0xf] & 0x1f);
  }
  return (int64_t)pInt_9 - (int64_t)param_1;
}

// func_0x18067a680
void func_0x18067a680(int64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  int iVal_3;
  uint uVal_4;
  uint32_t uVal_5;
  int iVal_6;
  byte *pU8_7;
  byte *pU8_8;
  uint32_t *pU64_9;
  int64_t lVal_10;
  uint32_t *pU64_11;
  
  pU8_7 = *(byte **)(param_1 + 0x10);
  iVal_3 = *(int *)(param_2 + 8);
  *(byte **)(param_1 + 8) = pU8_7;
  iVal_6 = 0;
  pU8_8 = pU8_7 + -(int64_t)(char)(&DAT_1806e3cf8)[*pU8_7 & 0xf];
  *(uint *)(param_1 + 0x18) = *(uint *)(pU8_8 + -4) >> ((&DAT_1806e3d08)[*pU8_7 & 0xf] & 0x1f);
  *(byte **)(param_1 + 8) = pU8_8;
  bFlag_1 = (&DAT_1806e3d08)[*pU8_8 & 0xf];
  pU8_8 = pU8_8 + -(int64_t)(char)(&DAT_1806e3cf8)[*pU8_8 & 0xf];
  uVal_4 = *(uint *)(pU8_8 + -4);
  *(byte **)(param_1 + 8) = pU8_8;
  *(uint *)(param_1 + 0x1c) = uVal_4 >> (bFlag_1 & 0x1f);
  bFlag_1 = (&DAT_1806e3d08)[*pU8_8 & 0xf];
  pU64_9 = (uint32_t *)(pU8_8 + -(int64_t)(char)(&DAT_1806e3cf8)[*pU8_8 & 0xf]);
  uVal_4 = pU64_9[-1];
  pU64_11 = pU64_9 + 1;
  *(uint32_t **)(param_1 + 8) = pU64_9;
  *(uint *)(param_1 + 0x20) = uVal_4 >> (bFlag_1 & 0x1f);
  uVal_5 = *pU64_9;
  *(uint32_t **)(param_1 + 8) = pU64_11;
  *(uint32_t *)(param_1 + 0x24) = uVal_5;
  if (iVal_3 != 0) {
    do {
      iVal_6 = iVal_6 + 1;
      lVal_10 = (int64_t)(char)(&DAT_1806e3cf8)[*(byte *)pU64_11 & 0xf];
      bFlag_1 = (&DAT_1806e3d08)[*(byte *)pU64_11 & 0xf];
      pU8_7 = (byte *)((int64_t)pU64_11 - lVal_10);
      uVal_4 = *(uint *)(pU8_7 + -4);
      *(byte **)(param_1 + 8) = pU8_7;
      *(uint *)(param_1 + 0x18) = uVal_4 >> (bFlag_1 & 0x1f);
      ch_2 = (&DAT_1806e3cf8)[*pU8_7 & 0xf];
      bFlag_1 = (&DAT_1806e3d08)[*pU8_7 & 0xf];
      pU8_7 = (byte *)((int64_t)pU64_11 + (-lVal_10 - (int64_t)ch_2));
      uVal_4 = *(uint *)(pU8_7 + -4);
      *(byte **)(param_1 + 8) = pU8_7;
      *(uint *)(param_1 + 0x1c) = uVal_4 >> (bFlag_1 & 0x1f);
      bFlag_1 = (&DAT_1806e3d08)[*pU8_7 & 0xf];
      pU64_11 = (uint32_t *)
                ((int64_t)pU64_11 +
                ((-(int64_t)ch_2 - (int64_t)(char)(&DAT_1806e3cf8)[*pU8_7 & 0xf]) - lVal_10));
      uVal_4 = pU64_11[-1];
      *(uint32_t **)(param_1 + 8) = pU64_11;
      *(uint *)(param_1 + 0x20) = uVal_4 >> (bFlag_1 & 0x1f);
      uVal_5 = *pU64_11;
      pU64_11 = pU64_11 + 1;
      *(uint32_t **)(param_1 + 8) = pU64_11;
      *(uint32_t *)(param_1 + 0x24) = uVal_5;
      lVal_10 = (int64_t)(char)(&DAT_1806e3cf8)[*(byte *)pU64_11 & 0xf];
      bFlag_1 = (&DAT_1806e3d08)[*(byte *)pU64_11 & 0xf];
      pU8_7 = (byte *)((int64_t)pU64_11 - lVal_10);
      uVal_4 = *(uint *)(pU8_7 + -4);
      *(byte **)(param_1 + 8) = pU8_7;
      *(uint *)(param_1 + 0x18) = uVal_4 >> (bFlag_1 & 0x1f);
      ch_2 = (&DAT_1806e3cf8)[*pU8_7 & 0xf];
      bFlag_1 = (&DAT_1806e3d08)[*pU8_7 & 0xf];
      pU8_7 = (byte *)((int64_t)pU64_11 + (-lVal_10 - (int64_t)ch_2));
      uVal_4 = *(uint *)(pU8_7 + -4);
      *(byte **)(param_1 + 8) = pU8_7;
      *(uint *)(param_1 + 0x1c) = uVal_4 >> (bFlag_1 & 0x1f);
      bFlag_1 = (&DAT_1806e3d08)[*pU8_7 & 0xf];
      pU64_11 = (uint32_t *)
                ((int64_t)pU64_11 +
                ((-(int64_t)ch_2 - (int64_t)(char)(&DAT_1806e3cf8)[*pU8_7 & 0xf]) - lVal_10));
      uVal_4 = pU64_11[-1];
      *(uint32_t **)(param_1 + 8) = pU64_11;
      *(uint *)(param_1 + 0x20) = uVal_4 >> (bFlag_1 & 0x1f);
      uVal_5 = *pU64_11;
      pU64_11 = pU64_11 + 1;
      *(uint32_t **)(param_1 + 8) = pU64_11;
      *(uint32_t *)(param_1 + 0x24) = uVal_5;
    } while (iVal_6 != iVal_3);
  }
  return;
}

// func_0x18067a870
bool func_0x18067a870(uint64_t param_1,int64_t param_2)
{
  int iVal_1;
  int64_t lVal_2;
  uint uVal_3;
  uint64_t uVal_4;
  
  iVal_1 = func_0x1806927b0(param_2,param_1);
  uVal_3 = *(uint *)(param_2 + 0xc);
  uVal_4 = (uint64_t)uVal_3;
  do {
    if (uVal_3 == 0) {
      lVal_2 = 0;
      break;
    }
    uVal_3 = (int)uVal_4 - 1;
    uVal_4 = (uint64_t)uVal_3;
    lVal_2 = func_0x180692390();
    lVal_2 = (int64_t)*(int *)(param_2 + 0x10) + *(int64_t *)(lVal_2 + 0x60) + uVal_4 * 0x14;
  } while ((iVal_1 <= *(int *)(lVal_2 + 4)) || (*(int *)(lVal_2 + 8) < iVal_1));
  return lVal_2 != 0;
}

// func_0x18067a8e0
void func_0x18067a8e0(int64_t *param_1,DWORD64 *param_2,int64_t param_3)
{
  uint uVal_1;
  int iVal_2;
  uint uVal_3;
  PRUNTIME_FUNCTION p_Var4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint uVal_8;
  int iVal_9;
  int64_t lVal_10;
  int64_t local_res8;
  uint64_t local_res18 [2];
  
  uVal_8 = *(uint *)(param_3 + 0xc);
  uVal_7 = (uint64_t)uVal_8;
  iVal_2 = func_0x1806927b0(param_3);
  local_res8 = *param_1;
  do {
    do {
      if (uVal_8 == 0) goto LAB_18067a9a5;
      uVal_8 = (int)uVal_7 - 1;
      uVal_7 = (uint64_t)uVal_8;
      lVal_6 = (int64_t)*(int *)(param_3 + 0x10) + uVal_7 * 0x14 + param_2[1];
    } while ((iVal_2 <= *(int *)(lVal_6 + 4)) || (*(int *)(lVal_6 + 8) < iVal_2));
    p_Var4 = RtlLookupFunctionEntry(*param_2,local_res18,(PUNWIND_HISTORY_TABLE)0x0);
    lVal_10 = (int64_t)*(int *)(lVal_6 + 0x10) + local_res18[0];
    uVal_1 = *(uint *)(lVal_6 + 0xc);
    uVal_5 = 0;
    if (uVal_1 != 0) {
      do {
        if ((int64_t)*(int *)(lVal_10 + 0xc + uVal_5 * 0x14) == (uint64_t)p_Var4->BeginAddress)
        goto LAB_18067a990;
        uVal_3 = (int)uVal_5 + 1;
        uVal_5 = (uint64_t)uVal_3;
      } while (uVal_3 < uVal_1);
    }
  } while (uVal_1 <= (uint)uVal_5);
LAB_18067a990:
  local_res8 = *(int64_t *)((int64_t)*(int *)(lVal_10 + 0x10 + uVal_5 * 0x14) + *param_1);
LAB_18067a9a5:
  iVal_2 = func_0x1806927b0(param_3,param_2);
  uVal_8 = *(uint *)(param_3 + 0xc);
  uVal_7 = (uint64_t)uVal_8;
  do {
    if (uVal_8 == 0) {
      iVal_9 = -1;
      break;
    }
    lVal_6 = func_0x180692390();
    uVal_8 = (int)uVal_7 - 1;
    uVal_7 = (uint64_t)uVal_8;
    lVal_6 = (int64_t)*(int *)(param_3 + 0x10) + *(int64_t *)(lVal_6 + 0x60);
    iVal_9 = *(int *)(lVal_6 + 4 + uVal_7 * 0x14);
  } while ((iVal_2 <= iVal_9) || (*(int *)(lVal_6 + 8 + uVal_7 * 0x14) < iVal_2));
  func_0x180693180(&local_res8,param_2,param_3,iVal_9);
  return;
}

// func_0x18067aa10
int64_t * func_0x18067aa10(int64_t *param_1,DWORD64 *param_2,int64_t param_3,int64_t *param_4)
{
  uint uVal_1;
  int iVal_2;
  uint uVal_3;
  PRUNTIME_FUNCTION p_Var4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint uVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t local_res8;
  
  uVal_7 = *(uint *)(param_3 + 0xc);
  uVal_8 = (uint64_t)uVal_7;
  iVal_2 = func_0x1806927b0(param_3);
  *param_4 = *param_1;
  if (uVal_7 == 0) {
    return param_4;
  }
  do {
    uVal_7 = (int)uVal_8 - 1;
    uVal_8 = (uint64_t)uVal_7;
    lVal_6 = (int64_t)*(int *)(param_3 + 0x10) + uVal_8 * 0x14 + param_2[1];
    if ((*(int *)(lVal_6 + 4) < iVal_2) && (iVal_2 <= *(int *)(lVal_6 + 8))) {
      p_Var4 = RtlLookupFunctionEntry(*param_2,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
      lVal_9 = (int64_t)*(int *)(lVal_6 + 0x10) + local_res8;
      uVal_1 = *(uint *)(lVal_6 + 0xc);
      uVal_5 = 0;
      if (uVal_1 != 0) {
        do {
          if ((int64_t)*(int *)(lVal_9 + 0xc + uVal_5 * 0x14) == (uint64_t)p_Var4->BeginAddress)
          goto LAB_18067aac0;
          uVal_3 = (int)uVal_5 + 1;
          uVal_5 = (uint64_t)uVal_3;
        } while (uVal_3 < uVal_1);
      }
      if ((uint)uVal_5 < uVal_1) {
LAB_18067aac0:
        *param_4 = *(int64_t *)((int64_t)*(int *)(lVal_9 + 0x10 + uVal_5 * 0x14) + *param_1);
        return param_4;
      }
    }
    if (uVal_7 == 0) {
      return param_4;
    }
  } while( true );
}

// func_0x18067ab10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18067ab10(PVOID *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4, ULONG_PTR param_5,ULONG_PTR param_6,int param_7,uint64_t param_8, uint64_t param_9,PVOID *param_10,byte param_11)
{
  uint8_t auStackY_e8 [32];
  uint8_t local_b8 [12];
  uint32_t uStack_ac;
  uint32_t local_a8;
  uint32_t uStack_a4;
  DWORD DStack_a0;
  uint32_t uStack_9c;
  uint8_t *local_98;
  ULONG_PTR UStack_90;
  ULONG_PTR local_88;
  ULONG_PTR UStack_80;
  ULONG_PTR local_78;
  ULONG_PTR UStack_70;
  ULONG_PTR local_68;
  uint64_t uStack_60;
  ULONG_PTR local_58;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  ULONG_PTR local_28;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStackY_e8;
  local_b8._0_4_ = _DAT_1806e3dc0;
  local_b8._4_4_ = _UNK_1806e3dc4;
  local_b8._8_4_ = _UNK_1806e3dc8;
  uStack_ac = _UNK_1806e3dcc;
  local_a8 = _DAT_1806e3dd0;
  uStack_a4 = _UNK_1806e3dd4;
  DStack_a0 = _UNK_1806e3dd8;
  uStack_9c = _UNK_1806e3ddc;
  uStack_50 = _UNK_1806e3e28;
  uStack_4c = _UNK_1806e3e2c;
  local_48 = _DAT_1806e3e30;
  uStack_44 = _UNK_1806e3e34;
  uStack_40 = _UNK_1806e3e38;
  uStack_3c = _UNK_1806e3e3c;
  local_28 = DAT_1806e3e50;
  local_38 = _DAT_1806e3e40;
  uStack_34 = _UNK_1806e3e44;
  uStack_30 = _UNK_1806e3e48;
  uStack_2c = _UNK_1806e3e4c;
  local_98 = &LAB_180693330;
  local_88 = param_5;
  UStack_80 = (ULONG_PTR)param_7;
  UStack_70 = param_6;
  uStack_60 = (uint64_t)param_11;
  local_58 = 0x19930520;
  UStack_90 = param_4;
  local_78 = param_3;
  local_68 = param_2;
  RtlUnwindEx(*param_1,*param_10,(PEXCEPTION_RECORD)local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  func_0x180673080(local_18 ^ (uint64_t)auStackY_e8);
  return;
}

// func_0x18067ac40
uint64_t * func_0x18067ac40(uint64_t *param_1,uint64_t param_2,int param_3,int64_t param_4,int64_t param_5)
{
  uint uVal_1;
  int64_t lVal_2;
  uint uVal_3;
  int64_t lVal_4;
  int iVal_5;
  uint uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  int iVal_9;
  int iVal_10;
  uint32_t local_3c;
  
  uVal_3 = *(uint *)(param_5 + 0xc);
  iVal_5 = func_0x1806927b0(param_5,param_4);
  if (uVal_3 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVal_4 = *(int64_t *)(param_4 + 8);
  iVal_10 = -1;
  lVal_8 = (int64_t)*(int *)(param_5 + 0x10);
  iVal_9 = -1;
  lVal_2 = lVal_4 + lVal_8;
  uVal_6 = uVal_3;
  while( true ) {
    uVal_1 = uVal_6 - 1;
    if ((*(int *)(lVal_4 + (uint64_t)uVal_1 * 0x14 + 4 + lVal_8) < iVal_5) &&
       (iVal_5 <= *(int *)(lVal_2 + 8 + (uint64_t)uVal_1 * 0x14))) break;
    uVal_6 = uVal_1;
    if (uVal_1 == 0) {
      lVal_8 = 0;
LAB_18067accc:
      uVal_7 = 0;
      do {
        iVal_5 = (int)uVal_7;
        if ((((lVal_8 == 0) ||
             ((*(int *)(lVal_8 + 4) < *(int *)(lVal_2 + uVal_7 * 0x14) &&
              (*(int *)(lVal_2 + 4 + uVal_7 * 0x14) <= *(int *)(lVal_8 + 8))))) &&
            (*(int *)(lVal_2 + uVal_7 * 0x14) <= param_3)) &&
           ((param_3 <= *(int *)(lVal_2 + 4 + uVal_7 * 0x14) && (iVal_9 = iVal_5, iVal_10 == -1)))) {
          iVal_10 = iVal_5;
        }
        uVal_7 = (uint64_t)(iVal_5 + 1U);
      } while (iVal_5 + 1U < uVal_3);
      *param_1 = param_2;
      param_1[2] = param_2;
      iVal_5 = 0;
      if (iVal_10 != -1) {
        iVal_5 = iVal_10;
      }
      *(int *)(param_1 + 1) = iVal_5;
      *(uint32_t *)((int64_t)param_1 + 0xc) = local_3c;
      iVal_5 = 0;
      if (iVal_10 != -1) {
        iVal_5 = iVal_9 + 1;
      }
      *(uint32_t *)((int64_t)param_1 + 0x1c) = local_3c;
      *(int *)(param_1 + 3) = iVal_5;
      return param_1;
    }
  }
  lVal_8 = lVal_4 + (uint64_t)(uVal_6 - 1) * 0x14 + lVal_8;
  goto LAB_18067accc;
}

// func_0x18067ad70
byte func_0x18067ad70(uint64_t param_1,byte *param_2)
{
  return *param_2 & 1;
}

// func_0x18067ad80
void func_0x18067ad80(int64_t *param_1,uint64_t param_2,byte *param_3)
{
  int64_t local_res8 [4];
  
  local_res8[0] = *param_1;
  if ((*param_3 & 1) != 0) {
    local_res8[0] = *(int64_t *)((uint64_t)*(uint *)(param_3 + 0x14) + local_res8[0]);
  }
  func_0x180693540(local_res8,param_2,param_3,0xffffffff);
  return;
}

// func_0x18067adc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18067adc0(PVOID *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4, ULONG_PTR param_5,uint64_t param_6,int param_7,int param_8,int64_t param_9, PVOID *param_10,byte param_11)
{
  uint8_t auStackY_e8 [32];
  uint8_t local_b8 [12];
  uint32_t uStack_ac;
  uint32_t local_a8;
  uint32_t uStack_a4;
  DWORD DStack_a0;
  uint32_t uStack_9c;
  uint8_t *local_98;
  ULONG_PTR UStack_90;
  ULONG_PTR local_88;
  ULONG_PTR UStack_80;
  ULONG_PTR local_78;
  ULONG_PTR UStack_70;
  ULONG_PTR local_68;
  uint64_t uStack_60;
  ULONG_PTR local_58;
  ULONG_PTR UStack_50;
  uint32_t local_48;
  uint32_t uStack_44;
  ULONG_PTR UStack_40;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  ULONG_PTR local_28;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStackY_e8;
  local_b8._0_4_ = _DAT_1806e3d20;
  local_b8._4_4_ = _UNK_1806e3d24;
  local_b8._8_4_ = _UNK_1806e3d28;
  uStack_ac = _UNK_1806e3d2c;
  local_98 = &LAB_1806939d0;
  local_a8 = _DAT_1806e3d30;
  uStack_a4 = _UNK_1806e3d34;
  DStack_a0 = _UNK_1806e3d38;
  uStack_9c = _UNK_1806e3d3c;
  local_88 = param_5;
  UStack_80 = (ULONG_PTR)param_7;
  uStack_60 = (uint64_t)param_11;
  UStack_70 = *(int64_t *)(param_9 + 0x18) + (int64_t)param_10[1];
  UStack_50 = *(int64_t *)(param_9 + 0x20) + (int64_t)param_10[1];
  UStack_40 = (ULONG_PTR)param_8;
  local_48 = _DAT_1806e3d90;
  uStack_44 = _UNK_1806e3d94;
  local_38 = _DAT_1806e3da0;
  uStack_34 = _UNK_1806e3da4;
  uStack_30 = _UNK_1806e3da8;
  uStack_2c = _UNK_1806e3dac;
  local_28 = DAT_1806e3db0;
  local_58 = 0x19930520;
  UStack_90 = param_4;
  local_78 = param_3;
  local_68 = param_2;
  RtlUnwindEx(*param_1,*param_10,(PEXCEPTION_RECORD)local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  func_0x180673080(local_18 ^ (uint64_t)auStackY_e8);
  return;
}

// func_0x18067af40
int64_t * func_0x18067af40(int64_t *param_1,uint64_t param_2,byte *param_3,int64_t *param_4)
{
  *param_4 = *param_1;
  if ((*param_3 & 1) != 0) {
    *param_4 = *(int64_t *)((uint64_t)*(uint *)(param_3 + 0x14) + *param_1);
  }
  return param_4;
}

// func_0x18067af70
int ** func_0x18067af70(int **param_1,int *param_2,int param_3)
{
  byte bFlag_1;
  char ch_2;
  uint uVal_3;
  int iVal_4;
  byte *pU8_5;
  uint32_t uVal_6;
  int iVal_7;
  int64_t lVal_8;
  int iVal_9;
  uint uVal_10;
  int iVal_11;
  int *pInt_12;
  int *local_38;
  int local_30;
  uint32_t local_2c;
  
  uVal_6 = local_2c;
  iVal_7 = 0;
  local_30 = 0;
  iVal_11 = 0;
  local_38 = param_2;
  func_0x18067a680(param_2,&local_38);
  if (*param_2 != 0) {
    uVal_10 = param_2[6];
    iVal_9 = 0;
    pInt_12 = *(int **)(param_2 + 2);
    iVal_11 = 0;
    do {
      iVal_4 = iVal_7;
      if ((((int)uVal_10 <= param_3) && (param_3 <= param_2[7])) &&
         (iVal_4 = iVal_9, iVal_11 = iVal_9, iVal_7 == 0)) {
        iVal_4 = iVal_7;
      }
      iVal_7 = iVal_4;
      iVal_9 = iVal_9 + 1;
      lVal_8 = (int64_t)(char)(&DAT_1806e3cf8)[*(byte *)pInt_12 & 0xf];
      bFlag_1 = (&DAT_1806e3d08)[*(byte *)pInt_12 & 0xf];
      pU8_5 = (byte *)((int64_t)pInt_12 - lVal_8);
      uVal_10 = *(uint *)(pU8_5 + -4);
      *(byte **)(param_2 + 2) = pU8_5;
      uVal_10 = uVal_10 >> (bFlag_1 & 0x1f);
      param_2[6] = uVal_10;
      ch_2 = (&DAT_1806e3cf8)[*pU8_5 & 0xf];
      bFlag_1 = (&DAT_1806e3d08)[*pU8_5 & 0xf];
      pU8_5 = (byte *)((int64_t)pInt_12 + (-lVal_8 - (int64_t)ch_2));
      uVal_3 = *(uint *)(pU8_5 + -4);
      *(byte **)(param_2 + 2) = pU8_5;
      param_2[7] = uVal_3 >> (bFlag_1 & 0x1f);
      bFlag_1 = (&DAT_1806e3d08)[*pU8_5 & 0xf];
      pInt_12 = (int *)((int64_t)pInt_12 +
                       ((-(int64_t)ch_2 - (int64_t)(char)(&DAT_1806e3cf8)[*pU8_5 & 0xf]) - lVal_8
                       ));
      uVal_3 = pInt_12[-1];
      *(int **)(param_2 + 2) = pInt_12;
      param_2[8] = uVal_3 >> (bFlag_1 & 0x1f);
      iVal_4 = *pInt_12;
      pInt_12 = pInt_12 + 1;
      *(int **)(param_2 + 2) = pInt_12;
      param_2[9] = iVal_4;
      uVal_6 = local_2c;
    } while (iVal_9 != *param_2);
  }
  local_38 = param_2;
  local_30 = iVal_7;
  local_2c = uVal_6;
  func_0x18067a680(param_2,&local_38);
  *(int *)(param_1 + 3) = iVal_11 + 1;
  *(uint32_t *)((int64_t)param_1 + 0x1c) = local_2c;
  *(uint32_t *)((int64_t)param_1 + 0xc) = uVal_6;
  *param_1 = param_2;
  *(int *)(param_1 + 1) = iVal_7;
  param_1[2] = param_2;
  return param_1;
}

// func_0x18067b0f0
uint64_t func_0x18067b0f0(void)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x180692390();
  return *(uint64_t *)(lVal_1 + 0x60);
}

// func_0x18067b110
void func_0x18067b110(uint64_t param_1)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x180692390();
  *(uint64_t *)(lVal_1 + 0x60) = param_1;
  return;
}

// func_0x18067b130
uint64_t func_0x18067b130(void)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x180692390();
  return *(uint64_t *)(lVal_1 + 0x68);
}

// func_0x18067b150
void func_0x18067b150(uint64_t param_1)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x180692390();
  *(uint64_t *)(lVal_1 + 0x68) = param_1;
  return;
}

// _CreateFrameInfo
/* Library Function - Single Match
    _CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
uint64_t * _CreateFrameInfo(uint64_t *param_1,uint64_t param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  
  *param_1 = param_2;
  lVal_1 = func_0x180692390();
  if (param_1 < *(uint64_t **)(lVal_1 + 0x58)) {
    lVal_1 = func_0x180692390();
    uVal_2 = *(uint64_t *)(lVal_1 + 0x58);
  }
  else {
    uVal_2 = 0;
  }
  param_1[1] = uVal_2;
  lVal_1 = func_0x180692390();
  *(uint64_t **)(lVal_1 + 0x58) = param_1;
  return param_1;
}

// func_0x18067b1b0
void func_0x18067b1b0(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  bool bFlag_3;
  
  lVal_2 = func_0x180692390();
  if (param_1 == *(int64_t *)(lVal_2 + 0x58)) {
    lVal_2 = func_0x180692390();
    lVal_2 = *(int64_t *)(lVal_2 + 0x58);
    while (lVal_2 != 0) {
      lVal_1 = *(int64_t *)(lVal_2 + 8);
      bFlag_3 = param_1 == lVal_2;
      lVal_2 = lVal_1;
      if (bFlag_3) {
        lVal_2 = func_0x180692390();
        *(int64_t *)(lVal_2 + 0x58) = lVal_1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x18067b290
void func_0x18067b290(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t local_res8;
  uint64_t in_stack_ffffffffffffffa8;
  uint8_t local_38 [4];
  uint64_t local_34;
  uint64_t local_2c;
  uint32_t local_24;
  
  uVal_1 = *(uint64_t *)(param_4 + 8);
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_38[0] = 0;
  local_res8 = param_2;
  lVal_2 = func_0x180692390();
  *(uint64_t *)(lVal_2 + 0x60) = uVal_1;
  uVal_1 = *(uint64_t *)(param_1 + 0x38);
  lVal_2 = func_0x180692390();
  *(uint64_t *)(lVal_2 + 0x68) = uVal_1;
  lVal_2 = func_0x180692390();
  func_0x18067a570((uint64_t)**(uint **)(param_4 + 0x38) + *(int64_t *)(lVal_2 + 0x60),local_38,
                *(uint64_t *)(param_4 + 8),**(uint32_t **)(param_4 + 0x10),
                in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
  func_0x180693ea0(param_1,&local_res8,param_3,param_4,local_38,0,0,0);
  return;
}

// func_0x18067b350
uint32_t func_0x18067b350(uint32_t *param_1,uint64_t param_2,uint64_t param_3)
{
  uint32_t *local_28;
  uint64_t local_20;
  
  local_28 = param_1;
  local_20 = param_3;
  func_0x180692390();
  (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(*param_1,&local_28);
  return 0;
}

// func_0x18067b3a0
uint32_t func_0x18067b3a0(uint32_t *param_1,uint64_t param_2,uint64_t param_3)
{
  uint32_t *local_28;
  uint64_t local_20;
  
  local_28 = param_1;
  local_20 = param_3;
  func_0x180692390();
  (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(*param_1,&local_28);
  return 0;
}

// func_0x18067b3f0
void func_0x18067b3f0(int64_t *param_1,int64_t *param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  
  if ((*(char *)(param_1 + 1) != '\0') && (*param_1 != 0)) {
    lVal_2 = -1;
    do {
      lVal_1 = lVal_2;
      lVal_2 = lVal_1 + 1;
    } while (*(char *)(*param_1 + 1 + lVal_1) != '\0');
    lVal_2 = _malloc_base(lVal_1 + 2);
    if (lVal_2 != 0) {
      func_0x180695c70(lVal_2,lVal_1 + 2,*param_1);
      *param_2 = lVal_2;
      *(uint8_t *)(param_2 + 1) = 1;
    }
    thunk_FUN_180695dd0(0);
    return;
  }
  *param_2 = *param_1;
  *(uint8_t *)(param_2 + 1) = 0;
  return;
}

// func_0x18067b490
void func_0x18067b490(uint64_t *param_1)
{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_180695dd0(*param_1);
    *(uint8_t *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(uint8_t *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

// func_0x18067b4d0
void func_0x18067b4d0(PSLIST_HEADER param_1)
{
  PSLIST_ENTRY p_Var1;
  PSLIST_ENTRY p_Var2;
  
  p_Var2 = InterlockedFlushSList(param_1);
  while (p_Var2 != (PSLIST_ENTRY)0x0) {
    p_Var1 = p_Var2->Next;
    thunk_FUN_180695dd0(p_Var2);
    p_Var2 = p_Var1;
  }
  return;
}

// func_0x18067b510
uint func_0x18067b510(int64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  byte *pU8_2;
  int64_t lVal_3;
  
  if (param_1 != param_2) {
    pU8_2 = (byte *)(param_1 + 9);
    lVal_3 = (param_2 + 9) - (int64_t)pU8_2;
    do {
      bFlag_1 = *pU8_2;
      if (bFlag_1 != pU8_2[lVal_3]) {
        return -(uint)(bFlag_1 < pU8_2[lVal_3]) | 1;
      }
      pU8_2 = pU8_2 + 1;
    } while (bFlag_1 != 0);
  }
  return 0;
}

// func_0x18067b540
uint32_t func_0x18067b540(void)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x180692550();
  if (lVal_1 != 0) {
    return *(uint32_t *)(lVal_1 + 0x30);
  }
  return 0;
}

// func_0x18067b560
uint8_t func_0x18067b560(void)
{
  char ch_1;
  
  ch_1 = func_0x180695cf0();
  if (ch_1 != '\0') {
    ch_1 = func_0x1806922f0();
    if (ch_1 != '\0') {
      return 1;
    }
    func_0x180695d80();
  }
  return 0;
}

// func_0x18067b590
uint8_t func_0x18067b590(char param_1)
{
  if (param_1 == '\0') {
    func_0x180692360();
    func_0x180695d80();
  }
  return 1;
}

// func_0x18067b5b0
uint8_t func_0x18067b5b0(void)
{
  func_0x180692360();
  return 1;
}

// func_0x18067b5c0
bool func_0x18067b5c0(void)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x180692470();
  return lVal_1 != 0;
}

// func_0x18067b5e0
uint8_t func_0x18067b5e0(void)
{
  func_0x1806925b0();
  return 1;
}

// _purecall
/* Library Function - Single Match
    _purecall
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    _purecall
   
   Library: Visual Studio 2019 Release */
void _purecall(void)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x18067b610();
  if (lVal_1 != 0) {
    (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x18067b610
uint64_t func_0x18067b610(void)
{
  return DAT_180842ab0;
}

// _LocaleUpdate::_LocaleUpdate
/* Library Function - Single Match
    public: __cdecl _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * __ptr64 const)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */
/* Library Function - Single Match
    public: __cdecl _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * __ptr64 const)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */
_LocaleUpdate * __thiscall _LocaleUpdate:: _LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)
{
  uint8_t (*pArr16_1)[16];
  uint uVal_2;
  uint8_t auArr_3 [16];
  int64_t lVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  
  this[0x18] = (_LocaleUpdate)0x0;
  pArr16_1 = (uint8_t (*)[16])(this + 8);
  if (param_1 == (__crt_locale_pointers *)0x0) {
    uVal_5 = PTR_PTR_DAT_18083d808._0_4_;
    uVal_6 = PTR_PTR_DAT_18083d808._4_4_;
    uVal_7 = PTR_DAT_18083d810._0_4_;
    uVal_8 = PTR_DAT_18083d810._4_4_;
    if (DAT_1808429bc != 0) {
      lVal_4 = __vcrt_getptd();
      *(int64_t *)this = lVal_4;
      *(uint64_t *)*pArr16_1 = *(uint64_t *)(lVal_4 + 0x90);
      *(uint64_t *)(this + 0x10) = *(uint64_t *)(lVal_4 + 0x88);
      func_0x180696634(lVal_4,pArr16_1);
      func_0x180696668(*(uint64_t *)this,this + 0x10);
      uVal_2 = *(uint *)(*(int64_t *)this + 0x3a8);
      if ((uVal_2 & 2) != 0) {
        return this;
      }
      *(uint *)(*(int64_t *)this + 0x3a8) = uVal_2 | 2;
      this[0x18] = (_LocaleUpdate)0x1;
      return this;
    }
  }
  else {
    uVal_5 = *(uint32_t *)param_1;
    uVal_6 = *(uint32_t *)(param_1 + 4);
    uVal_7 = *(uint32_t *)(param_1 + 8);
    uVal_8 = *(uint32_t *)(param_1 + 0xc);
  }
  auArr_3._4_4_ = uVal_6;
  auArr_3._0_4_ = uVal_5;
  auArr_3._8_4_ = uVal_7;
  auArr_3._12_4_ = uVal_8;
  *pArr16_1 = auArr_3;
  return this;
}

// func_0x18067b6bc
void func_0x18067b6bc(void)
{
  func_0x18067b700();
  return;
}

// thunk_FUN_18067bd10
uint64_t thunk_FUN_18067bd10(void)
{
  int64_t *pLong_1;
  int iVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  int iVal_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  int64_t lStack_48;
  int64_t lStack_40;
  char cStack_30;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&lStack_48,(__crt_locale_pointers *)0x0);
  uVal_3 = 0;
  lVal_5 = 0x2c0;
  pLong_1 = *(int64_t **)(lStack_40 + 0x120);
  uVal_7 = uVal_3;
  do {
    uVal_6 = 0;
    iVal_9 = (int)uVal_7;
    if (iVal_9 == 1) {
      uVal_3 = _malloc_base(lVal_5);
      if (uVal_3 == 0) break;
      func_0x1806ab010(uVal_3,0,lVal_5);
      lVal_5 = 0x2c0;
    }
    lVal_11 = uVal_3 - (int64_t)pLong_1;
    pLong_10 = pLong_1;
    do {
      if (iVal_9 == 1) {
        *(uint64_t *)(lVal_11 + (int64_t)pLong_10) = uVal_3 + lVal_5;
        iVal_2 = func_0x180695c70();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      lVal_4 = -1;
      do {
        lVal_4 = lVal_4 + 1;
      } while (*(char *)(*pLong_10 + lVal_4) != '\0');
      uVal_6 = uVal_6 + 1;
      lVal_5 = lVal_5 + 1 + lVal_4;
      pLong_10 = pLong_10 + 1;
    } while (uVal_6 < 7);
    uVal_7 = 0;
    pLong_10 = pLong_1 + 7;
    do {
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + lVal_11) = uVal_3 + lVal_5;
        iVal_2 = func_0x180695c70();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      lVal_4 = -1;
      do {
        lVal_4 = lVal_4 + 1;
      } while (*(char *)(*pLong_10 + lVal_4) != '\0');
      uVal_7 = uVal_7 + 1;
      lVal_5 = lVal_5 + 1 + lVal_4;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 7);
    uVal_7 = 0;
    pLong_10 = pLong_1 + 0xe;
    do {
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + lVal_11) = uVal_3 + lVal_5;
        iVal_2 = func_0x180695c70();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      lVal_4 = -1;
      do {
        lVal_4 = lVal_4 + 1;
      } while (*(char *)(*pLong_10 + lVal_4) != '\0');
      uVal_7 = uVal_7 + 1;
      lVal_5 = lVal_5 + 1 + lVal_4;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 0xc);
    uVal_7 = 0;
    pLong_10 = pLong_1 + 0x1a;
    do {
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + lVal_11) = uVal_3 + lVal_5;
        iVal_2 = func_0x180695c70();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      lVal_4 = -1;
      do {
        lVal_4 = lVal_4 + 1;
      } while (*(char *)(*pLong_10 + lVal_4) != '\0');
      uVal_7 = uVal_7 + 1;
      lVal_5 = lVal_5 + 1 + lVal_4;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 0xc);
    uVal_7 = 0;
    pLong_10 = pLong_1 + 0x26;
    do {
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + lVal_11) = uVal_3 + lVal_5;
        iVal_2 = func_0x180695c70();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      lVal_4 = -1;
      do {
        lVal_4 = lVal_4 + 1;
      } while (*(char *)(*pLong_10 + lVal_4) != '\0');
      uVal_7 = uVal_7 + 1;
      lVal_5 = lVal_5 + 1 + lVal_4;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 2);
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x140) = uVal_3 + lVal_5;
      iVal_2 = func_0x180695c70();
      if (iVal_2 != 0) goto LAB_18067c3d0;
    }
    uVal_7 = 0;
    lVal_11 = -1;
    do {
      lVal_11 = lVal_11 + 1;
    } while (*(char *)(pLong_1[0x28] + lVal_11) != '\0');
    lVal_11 = lVal_5 + 1 + lVal_11;
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x148) = uVal_3 + lVal_11;
      iVal_2 = func_0x180695c70();
      if (iVal_2 != 0) goto LAB_18067c3d0;
    }
    lVal_5 = -1;
    do {
      lVal_5 = lVal_5 + 1;
    } while (*(char *)(pLong_1[0x29] + lVal_5) != '\0');
    lVal_5 = lVal_11 + 1 + lVal_5;
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x150) = uVal_3 + lVal_5;
      iVal_2 = func_0x180695c70();
      if (iVal_2 != 0) goto LAB_18067c3d0;
    }
    lVal_11 = -1;
    do {
      lVal_11 = lVal_11 + 1;
    } while (*(char *)(pLong_1[0x2a] + lVal_11) != '\0');
    uVal_6 = lVal_5 + 1 + lVal_11;
    if (iVal_9 == 1) {
      *(uint32_t *)(uVal_3 + 0x158) = *(uint32_t *)(pLong_1 + 0x2b);
      *(uint32_t *)(uVal_3 + 0x15c) = 0;
    }
    pLong_10 = pLong_1 + 0x2c;
    do {
      for (; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
      }
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + (uVal_3 - (int64_t)pLong_1)) =
             uVal_3 + (uVal_6 & 0xfffffffffffffffe);
        iVal_2 = func_0x180696710();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      uVal_8 = 0;
      lVal_5 = -1;
      do {
        lVal_5 = lVal_5 + 1;
      } while (*(short *)(*pLong_10 + lVal_5 * 2) != 0);
      uVal_7 = uVal_7 + 1;
      uVal_6 = uVal_6 + lVal_5 * 2 + 2;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 7);
    pLong_10 = pLong_1 + 0x33;
    do {
      for (; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
      }
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + (uVal_3 - (int64_t)pLong_1)) =
             uVal_3 + (uVal_6 & 0xfffffffffffffffe);
        iVal_2 = func_0x180696710();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      uVal_7 = 0;
      lVal_5 = -1;
      do {
        lVal_5 = lVal_5 + 1;
      } while (*(short *)(*pLong_10 + lVal_5 * 2) != 0);
      uVal_8 = uVal_8 + 1;
      uVal_6 = uVal_6 + lVal_5 * 2 + 2;
      pLong_10 = pLong_10 + 1;
    } while (uVal_8 < 7);
    pLong_10 = pLong_1 + 0x3a;
    do {
      for (; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
      }
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + (uVal_3 - (int64_t)pLong_1)) =
             uVal_3 + (uVal_6 & 0xfffffffffffffffe);
        iVal_2 = func_0x180696710();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      uVal_8 = 0;
      lVal_5 = -1;
      do {
        lVal_5 = lVal_5 + 1;
      } while (*(short *)(*pLong_10 + lVal_5 * 2) != 0);
      uVal_7 = uVal_7 + 1;
      uVal_6 = uVal_6 + lVal_5 * 2 + 2;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 0xc);
    pLong_10 = pLong_1 + 0x46;
    do {
      for (; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
      }
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + (uVal_3 - (int64_t)pLong_1)) =
             uVal_3 + (uVal_6 & 0xfffffffffffffffe);
        iVal_2 = func_0x180696710();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      uVal_7 = 0;
      lVal_5 = -1;
      do {
        lVal_5 = lVal_5 + 1;
      } while (*(short *)(*pLong_10 + lVal_5 * 2) != 0);
      uVal_8 = uVal_8 + 1;
      uVal_6 = uVal_6 + lVal_5 * 2 + 2;
      pLong_10 = pLong_10 + 1;
    } while (uVal_8 < 0xc);
    pLong_10 = pLong_1 + 0x52;
    do {
      for (; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
      }
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + (uVal_3 - (int64_t)pLong_1)) =
             uVal_3 + (uVal_6 & 0xfffffffffffffffe);
        iVal_2 = func_0x180696710();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      lVal_5 = -1;
      do {
        lVal_5 = lVal_5 + 1;
      } while (*(short *)(*pLong_10 + lVal_5 * 2) != 0);
      uVal_7 = uVal_7 + 1;
      uVal_6 = uVal_6 + lVal_5 * 2 + 2;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 2);
    for (; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
    }
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x2a0) = uVal_3 + (uVal_6 & 0xfffffffffffffffe);
      iVal_2 = func_0x180696710();
      if (iVal_2 != 0) goto LAB_18067c3d0;
    }
    lVal_5 = -1;
    do {
      lVal_5 = lVal_5 + 1;
    } while (*(short *)(pLong_1[0x54] + lVal_5 * 2) != 0);
    for (uVal_7 = uVal_6 + lVal_5 * 2 + 2; (uVal_7 & 1) != 0; uVal_7 = uVal_7 + 1) {
    }
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x2a8) = uVal_3 + (uVal_7 & 0xfffffffffffffffe);
      iVal_2 = func_0x180696710();
      if (iVal_2 != 0) goto LAB_18067c3d0;
    }
    lVal_5 = -1;
    do {
      lVal_5 = lVal_5 + 1;
    } while (*(short *)(pLong_1[0x55] + lVal_5 * 2) != 0);
    for (uVal_7 = uVal_7 + lVal_5 * 2 + 2; (uVal_7 & 1) != 0; uVal_7 = uVal_7 + 1) {
    }
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x2b0) = uVal_3 + (uVal_7 & 0xfffffffffffffffe);
      iVal_2 = func_0x180696710();
      if (iVal_2 != 0) goto LAB_18067c3d0;
    }
    lVal_5 = -1;
    do {
      lVal_5 = lVal_5 + 1;
    } while (*(short *)(pLong_1[0x56] + lVal_5 * 2) != 0);
    for (uVal_6 = uVal_7 + lVal_5 * 2 + 2; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
    }
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x2b8) = uVal_3 + (uVal_6 & 0xfffffffffffffffe);
      iVal_2 = func_0x180696710();
      if (iVal_2 != 0) {
LAB_18067c3d0:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    lVal_5 = -1;
    do {
      lVal_5 = lVal_5 + 1;
    } while (*(short *)(pLong_1[0x57] + lVal_5 * 2) != 0);
    uVal_7 = (uint64_t)(iVal_9 + 1U);
    lVal_5 = uVal_6 + lVal_5 * 2 + 2;
    uVal_6 = uVal_3;
  } while ((int)(iVal_9 + 1U) < 2);
  if (cStack_30 != '\0') {
    *(uint *)(lStack_48 + 0x3a8) = *(uint *)(lStack_48 + 0x3a8) & 0xfffffffd;
  }
  return uVal_6;
}

// func_0x18067b6e0
void func_0x18067b6e0(void)
{
  func_0x18067b700();
  return;
}

// func_0x18067b700
uint64_t func_0x18067b700(uint8_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4, uint64_t param_5,__crt_locale_pointers *param_6)
{
  uint32_t uVal_1;
  int iVal_2;
  uint32_t *pU64_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint8_t local_res8 [8];
  int64_t local_a8;
  int64_t local_a0;
  char local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  char local_60;
  uint8_t *local_58;
  int64_t local_50;
  uint8_t *local_48;
  int64_t local_40;
  uint64_t local_38;
  uint8_t local_30;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_a8,param_6);
  uVal_7 = 0;
  uVal_1 = *(uint32_t *)(local_a0 + 0x18);
  if ((((param_1 == (uint8_t *)0x0) || (param_2 == 0)) || (*param_1 = 0, param_3 == 0)) ||
     (param_4 == 0)) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
    func_0x180684970();
  }
  else {
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = '\0';
    iVal_2 = func_0x18067b86c(param_3,&local_88,local_res8,uVal_1);
    if (iVal_2 == 0) {
      lVal_4 = _malloc_base(param_2 * 2);
      uVal_6 = uVal_7;
      if ((lVal_4 != 0) &&
         (lVal_5 = func_0x18067bb84(lVal_4,param_2,local_78,param_4,param_5,param_6), lVal_5 != 0)) {
        local_38 = 0;
        local_30 = 0;
        local_58 = param_1;
        local_50 = param_2;
        local_48 = param_1;
        local_40 = param_2;
        iVal_2 = func_0x18067ba0c(lVal_4,&local_58,local_res8,uVal_1);
        uVal_6 = local_38;
        if (iVal_2 != 0) {
          uVal_6 = uVal_7;
        }
      }
      func_0x180695dd0(lVal_4);
      uVal_7 = uVal_6;
    }
    if (local_60 != '\0') {
      func_0x180695dd0(local_78);
    }
  }
  if (local_90 != '\0') {
    *(uint *)(local_a8 + 0x3a8) = *(uint *)(local_a8 + 0x3a8) & 0xfffffffd;
  }
  return uVal_7;
}

// func_0x18067b86c
uint func_0x18067b86c(char *param_1,int64_t param_2,uint64_t param_3,uint32_t param_4)
{
  int iVal_1;
  DWORD DVar2;
  int64_t lVal_3;
  uint *pU64_4;
  uint uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  bool bFlag_8;
  
  if (param_1 == (char *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      func_0x180695dd0(*(uint64_t *)(param_2 + 0x10));
      *(uint8_t *)(param_2 + 0x28) = 0;
    }
    *(uint64_t *)(param_2 + 0x10) = 0;
    *(uint64_t *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != '\0') {
      iVal_1 = func_0x180695e90(param_4,9,param_1,0xffffffff,0,0);
      uVal_7 = (uint64_t)iVal_1;
      if (iVal_1 != 0) {
        uVal_6 = *(uint64_t *)(param_2 + 0x18);
        if (uVal_6 < uVal_7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            func_0x180695dd0(*(uint64_t *)(param_2 + 0x10));
            *(uint8_t *)(param_2 + 0x28) = 0;
          }
          lVal_3 = _malloc_base(uVal_7 * 2);
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
        iVal_1 = func_0x180695e90(param_4,9,param_1,0xffffffff,*(uint64_t *)(param_2 + 0x10),
                              (int)uVal_6);
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
      lVal_3 = _malloc_base(2);
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
    **(uint16_t **)(param_2 + 0x10) = 0;
  }
  *(uint64_t *)(param_2 + 0x20) = 0;
  return 0;
}

// func_0x18067ba0c
uint32_t func_0x18067ba0c(short *param_1,int64_t param_2,uint64_t param_3,uint32_t param_4)
{
  int iVal_1;
  DWORD DVar2;
  uint32_t *pU64_3;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(uint8_t *)(param_2 + 0x28) = 0;
    }
    *(uint64_t *)(param_2 + 0x10) = 0;
    *(uint64_t *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVal_1 = func_0x180695f20(param_4,0,param_1,0xffffffff,0,0,0,0);
      if (iVal_1 != 0) {
        if (*(uint64_t *)(param_2 + 0x18) < (uint64_t)(int64_t)iVal_1) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            *(uint8_t *)(param_2 + 0x28) = 0;
          }
          goto LAB_18067ba60;
        }
        iVal_1 = func_0x180695f20(param_4,0,param_1,0xffffffff,*(uint64_t *)(param_2 + 0x10),
                              (int)*(uint64_t *)(param_2 + 0x18),0,0);
        if ((int64_t)iVal_1 != 0) {
          *(int64_t *)(param_2 + 0x20) = (int64_t)iVal_1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      func_0x180682424(DVar2);
      pU64_3 = (uint32_t *)func_0x1806823dc();
      return *pU64_3;
    }
    if (*(int64_t *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(uint8_t *)(param_2 + 0x28) = 0;
      }
LAB_18067ba60:
      pU64_3 = (uint32_t *)func_0x1806823dc();
      *pU64_3 = 0x22;
      *(uint8_t *)(param_2 + 0x28) = 0;
      *(uint64_t *)(param_2 + 0x18) = 0;
      return 0x22;
    }
    **(uint8_t **)(param_2 + 0x10) = 0;
  }
  *(uint64_t *)(param_2 + 0x20) = 0;
  return 0;
}

// __crt_time_is_leap_year<>
/* Library Function - Multiple Matches With Same Base Name
    bool __cdecl __crt_time_is_leap_year<int>(int)
    bool __cdecl __crt_time_is_leap_year<long>(long)
   
   Library: Visual Studio 2015 Release */
/* Library Function - Multiple Matches With Same Base Name
    bool __cdecl __crt_time_is_leap_year<int>(int)
    bool __cdecl __crt_time_is_leap_year<long>(long)
   
   Library: Visual Studio 2015 Release */

uint64_t __crt_time_is_leap_year<>(uint param_1)
{
  uint uVal_1;
  int iVal_2;
  
  uVal_1 = param_1 & 0x80000003;
  if ((int)uVal_1 < 0) {
    uVal_1 = (uVal_1 - 1 | 0xfffffffc) + 1;
  }
  if ((uVal_1 == 0) && (param_1 != ((int)param_1 / 100) * 100)) {
    return CONCAT71((uint7)((uint64_t)((int64_t)(int)param_1 * 0x51eb851f) >> 8) & 0xffffff,1);
  }
  iVal_2 = ((int)(param_1 + 0x76c) / 400) * 400;
  return (uint64_t)CONCAT31((int3)((uint)iVal_2 >> 8),param_1 + 0x76c == iVal_2);
}

// func_0x18067bb84
int64_t func_0x18067bb84(short *param_1,int64_t param_2,short *param_3,int64_t param_4, int64_t param_5,__crt_locale_pointers *param_6)
{
  short sz_1;
  short *pSize_2;
  char ch_3;
  uint32_t *pU64_4;
  int64_t lVal_5;
  bool bFlag_6;
  int64_t local_res8;
  short *local_58;
  int64_t local_50;
  int64_t local_48 [2];
  char local_38;
  
  lVal_5 = 0;
  if (((param_1 == (short *)0x0) || (param_2 == 0)) || (*param_1 = 0, param_3 == (short *)0x0)) {
    pU64_4 = (uint32_t *)func_0x1806823dc();
    *pU64_4 = 0x16;
    func_0x180684970();
    lVal_5 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_6);
    local_res8 = param_2;
    local_58 = param_1;
    if (param_5 == 0) {
      param_5 = *(int64_t *)(local_48[0] + 0x120);
    }
    do {
      sz_1 = *param_3;
      if (sz_1 == 0) break;
      if (sz_1 == 0x25) {
        if (param_4 == 0) goto LAB_18067bcb7;
        sz_1 = param_3[1];
        bFlag_6 = sz_1 == 0x23;
        pSize_2 = param_3 + 1;
        if (bFlag_6) {
          sz_1 = param_3[2];
          pSize_2 = param_3 + 2;
        }
        param_3 = pSize_2;
        if ((sz_1 == 0x45) || (sz_1 == 0x4f)) {
          param_3 = param_3 + 1;
          sz_1 = *param_3;
        }
        ch_3 = func_0x18067c630(local_48,sz_1,param_4,&local_58,&local_res8,param_5,bFlag_6);
        if (ch_3 == '\0') {
          if (local_res8 == 0) goto LAB_18067bcf7;
          *param_1 = 0;
          goto LAB_18067bcb7;
        }
      }
      else {
        *local_58 = sz_1;
        local_58 = local_58 + 1;
        local_res8 = local_res8 + -1;
      }
      param_3 = param_3 + 1;
    } while (local_res8 != 0);
    if (local_res8 == 0) {
LAB_18067bcf7:
      *param_1 = 0;
      if (local_res8 == 0) {
        pU64_4 = (uint32_t *)func_0x1806823dc();
        *pU64_4 = 0x22;
      }
      else {
LAB_18067bcb7:
        pU64_4 = (uint32_t *)func_0x1806823dc();
        *pU64_4 = 0x16;
        func_0x180684970();
      }
    }
    else {
      *local_58 = 0;
      lVal_5 = param_2 - local_res8;
    }
    if (local_38 != '\0') {
      *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
    }
  }
  return lVal_5;
}

// func_0x18067bd10
uint64_t func_0x18067bd10(void)
{
  int64_t *pLong_1;
  int iVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  int iVal_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  int64_t local_48;
  int64_t local_40;
  char local_30;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_48,(__crt_locale_pointers *)0x0);
  uVal_3 = 0;
  lVal_5 = 0x2c0;
  pLong_1 = *(int64_t **)(local_40 + 0x120);
  uVal_7 = uVal_3;
  do {
    uVal_6 = 0;
    iVal_9 = (int)uVal_7;
    if (iVal_9 == 1) {
      uVal_3 = _malloc_base(lVal_5);
      if (uVal_3 == 0) break;
      func_0x1806ab010(uVal_3,0,lVal_5);
      lVal_5 = 0x2c0;
    }
    lVal_11 = uVal_3 - (int64_t)pLong_1;
    pLong_10 = pLong_1;
    do {
      if (iVal_9 == 1) {
        *(uint64_t *)(lVal_11 + (int64_t)pLong_10) = uVal_3 + lVal_5;
        iVal_2 = func_0x180695c70();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      lVal_4 = -1;
      do {
        lVal_4 = lVal_4 + 1;
      } while (*(char *)(*pLong_10 + lVal_4) != '\0');
      uVal_6 = uVal_6 + 1;
      lVal_5 = lVal_5 + 1 + lVal_4;
      pLong_10 = pLong_10 + 1;
    } while (uVal_6 < 7);
    uVal_7 = 0;
    pLong_10 = pLong_1 + 7;
    do {
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + lVal_11) = uVal_3 + lVal_5;
        iVal_2 = func_0x180695c70();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      lVal_4 = -1;
      do {
        lVal_4 = lVal_4 + 1;
      } while (*(char *)(*pLong_10 + lVal_4) != '\0');
      uVal_7 = uVal_7 + 1;
      lVal_5 = lVal_5 + 1 + lVal_4;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 7);
    uVal_7 = 0;
    pLong_10 = pLong_1 + 0xe;
    do {
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + lVal_11) = uVal_3 + lVal_5;
        iVal_2 = func_0x180695c70();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      lVal_4 = -1;
      do {
        lVal_4 = lVal_4 + 1;
      } while (*(char *)(*pLong_10 + lVal_4) != '\0');
      uVal_7 = uVal_7 + 1;
      lVal_5 = lVal_5 + 1 + lVal_4;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 0xc);
    uVal_7 = 0;
    pLong_10 = pLong_1 + 0x1a;
    do {
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + lVal_11) = uVal_3 + lVal_5;
        iVal_2 = func_0x180695c70();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      lVal_4 = -1;
      do {
        lVal_4 = lVal_4 + 1;
      } while (*(char *)(*pLong_10 + lVal_4) != '\0');
      uVal_7 = uVal_7 + 1;
      lVal_5 = lVal_5 + 1 + lVal_4;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 0xc);
    uVal_7 = 0;
    pLong_10 = pLong_1 + 0x26;
    do {
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + lVal_11) = uVal_3 + lVal_5;
        iVal_2 = func_0x180695c70();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      lVal_4 = -1;
      do {
        lVal_4 = lVal_4 + 1;
      } while (*(char *)(*pLong_10 + lVal_4) != '\0');
      uVal_7 = uVal_7 + 1;
      lVal_5 = lVal_5 + 1 + lVal_4;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 2);
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x140) = uVal_3 + lVal_5;
      iVal_2 = func_0x180695c70();
      if (iVal_2 != 0) goto LAB_18067c3d0;
    }
    uVal_7 = 0;
    lVal_11 = -1;
    do {
      lVal_11 = lVal_11 + 1;
    } while (*(char *)(pLong_1[0x28] + lVal_11) != '\0');
    lVal_11 = lVal_5 + 1 + lVal_11;
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x148) = uVal_3 + lVal_11;
      iVal_2 = func_0x180695c70();
      if (iVal_2 != 0) goto LAB_18067c3d0;
    }
    lVal_5 = -1;
    do {
      lVal_5 = lVal_5 + 1;
    } while (*(char *)(pLong_1[0x29] + lVal_5) != '\0');
    lVal_5 = lVal_11 + 1 + lVal_5;
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x150) = uVal_3 + lVal_5;
      iVal_2 = func_0x180695c70();
      if (iVal_2 != 0) goto LAB_18067c3d0;
    }
    lVal_11 = -1;
    do {
      lVal_11 = lVal_11 + 1;
    } while (*(char *)(pLong_1[0x2a] + lVal_11) != '\0');
    uVal_6 = lVal_5 + 1 + lVal_11;
    if (iVal_9 == 1) {
      *(uint32_t *)(uVal_3 + 0x158) = *(uint32_t *)(pLong_1 + 0x2b);
      *(uint32_t *)(uVal_3 + 0x15c) = 0;
    }
    pLong_10 = pLong_1 + 0x2c;
    do {
      for (; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
      }
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + (uVal_3 - (int64_t)pLong_1)) =
             uVal_3 + (uVal_6 & 0xfffffffffffffffe);
        iVal_2 = func_0x180696710();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      uVal_8 = 0;
      lVal_5 = -1;
      do {
        lVal_5 = lVal_5 + 1;
      } while (*(short *)(*pLong_10 + lVal_5 * 2) != 0);
      uVal_7 = uVal_7 + 1;
      uVal_6 = uVal_6 + lVal_5 * 2 + 2;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 7);
    pLong_10 = pLong_1 + 0x33;
    do {
      for (; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
      }
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + (uVal_3 - (int64_t)pLong_1)) =
             uVal_3 + (uVal_6 & 0xfffffffffffffffe);
        iVal_2 = func_0x180696710();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      uVal_7 = 0;
      lVal_5 = -1;
      do {
        lVal_5 = lVal_5 + 1;
      } while (*(short *)(*pLong_10 + lVal_5 * 2) != 0);
      uVal_8 = uVal_8 + 1;
      uVal_6 = uVal_6 + lVal_5 * 2 + 2;
      pLong_10 = pLong_10 + 1;
    } while (uVal_8 < 7);
    pLong_10 = pLong_1 + 0x3a;
    do {
      for (; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
      }
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + (uVal_3 - (int64_t)pLong_1)) =
             uVal_3 + (uVal_6 & 0xfffffffffffffffe);
        iVal_2 = func_0x180696710();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      uVal_8 = 0;
      lVal_5 = -1;
      do {
        lVal_5 = lVal_5 + 1;
      } while (*(short *)(*pLong_10 + lVal_5 * 2) != 0);
      uVal_7 = uVal_7 + 1;
      uVal_6 = uVal_6 + lVal_5 * 2 + 2;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 0xc);
    pLong_10 = pLong_1 + 0x46;
    do {
      for (; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
      }
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + (uVal_3 - (int64_t)pLong_1)) =
             uVal_3 + (uVal_6 & 0xfffffffffffffffe);
        iVal_2 = func_0x180696710();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      uVal_7 = 0;
      lVal_5 = -1;
      do {
        lVal_5 = lVal_5 + 1;
      } while (*(short *)(*pLong_10 + lVal_5 * 2) != 0);
      uVal_8 = uVal_8 + 1;
      uVal_6 = uVal_6 + lVal_5 * 2 + 2;
      pLong_10 = pLong_10 + 1;
    } while (uVal_8 < 0xc);
    pLong_10 = pLong_1 + 0x52;
    do {
      for (; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
      }
      if (iVal_9 == 1) {
        *(uint64_t *)((int64_t)pLong_10 + (uVal_3 - (int64_t)pLong_1)) =
             uVal_3 + (uVal_6 & 0xfffffffffffffffe);
        iVal_2 = func_0x180696710();
        if (iVal_2 != 0) goto LAB_18067c3d0;
      }
      lVal_5 = -1;
      do {
        lVal_5 = lVal_5 + 1;
      } while (*(short *)(*pLong_10 + lVal_5 * 2) != 0);
      uVal_7 = uVal_7 + 1;
      uVal_6 = uVal_6 + lVal_5 * 2 + 2;
      pLong_10 = pLong_10 + 1;
    } while (uVal_7 < 2);
    for (; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
    }
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x2a0) = uVal_3 + (uVal_6 & 0xfffffffffffffffe);
      iVal_2 = func_0x180696710();
      if (iVal_2 != 0) goto LAB_18067c3d0;
    }
    lVal_5 = -1;
    do {
      lVal_5 = lVal_5 + 1;
    } while (*(short *)(pLong_1[0x54] + lVal_5 * 2) != 0);
    for (uVal_7 = uVal_6 + lVal_5 * 2 + 2; (uVal_7 & 1) != 0; uVal_7 = uVal_7 + 1) {
    }
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x2a8) = uVal_3 + (uVal_7 & 0xfffffffffffffffe);
      iVal_2 = func_0x180696710();
      if (iVal_2 != 0) goto LAB_18067c3d0;
    }
    lVal_5 = -1;
    do {
      lVal_5 = lVal_5 + 1;
    } while (*(short *)(pLong_1[0x55] + lVal_5 * 2) != 0);
    for (uVal_7 = uVal_7 + lVal_5 * 2 + 2; (uVal_7 & 1) != 0; uVal_7 = uVal_7 + 1) {
    }
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x2b0) = uVal_3 + (uVal_7 & 0xfffffffffffffffe);
      iVal_2 = func_0x180696710();
      if (iVal_2 != 0) goto LAB_18067c3d0;
    }
    lVal_5 = -1;
    do {
      lVal_5 = lVal_5 + 1;
    } while (*(short *)(pLong_1[0x56] + lVal_5 * 2) != 0);
    for (uVal_6 = uVal_7 + lVal_5 * 2 + 2; (uVal_6 & 1) != 0; uVal_6 = uVal_6 + 1) {
    }
    if (iVal_9 == 1) {
      *(uint64_t *)(uVal_3 + 0x2b8) = uVal_3 + (uVal_6 & 0xfffffffffffffffe);
      iVal_2 = func_0x180696710();
      if (iVal_2 != 0) {
LAB_18067c3d0:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    lVal_5 = -1;
    do {
      lVal_5 = lVal_5 + 1;
    } while (*(short *)(pLong_1[0x57] + lVal_5 * 2) != 0);
    uVal_7 = (uint64_t)(iVal_9 + 1U);
    lVal_5 = uVal_6 + lVal_5 * 2 + 2;
    uVal_6 = uVal_3;
  } while ((int)(iVal_9 + 1U) < 2);
  if (local_30 != '\0') {
    *(uint *)(local_48 + 0x3a8) = *(uint *)(local_48 + 0x3a8) & 0xfffffffd;
  }
  return uVal_6;
}

// func_0x18067c3e8
void func_0x18067c3e8(int param_1,int param_2,short **param_3,uint64_t *param_4,short param_5)
{
  uint64_t uVal_1;
  short sz_2;
  int iVal_3;
  short *pSize_4;
  int64_t lVal_5;
  int iVal_6;
  short *pSize_7;
  bool bFlag_8;
  
  if (param_5 == 0) {
    pSize_4 = *param_3;
    if (1 < *param_4) {
      do {
        pSize_7 = pSize_4;
        iVal_3 = param_1 / 10;
        *pSize_7 = (short)param_1 + (short)iVal_3 * -10 + 0x30;
        uVal_1 = *param_4;
        *param_4 = uVal_1 - 1;
        if (iVal_3 < 1) break;
        pSize_4 = pSize_7 + 1;
        param_1 = iVal_3;
      } while (1 < uVal_1 - 1);
      pSize_4 = *param_3;
      *param_3 = pSize_7 + 1;
      for (; pSize_4 < pSize_7; pSize_4 = pSize_4 + 1) {
        sz_2 = *pSize_7;
        *pSize_7 = *pSize_4;
        pSize_7 = pSize_7 + -1;
        *pSize_4 = sz_2;
      }
      return;
    }
    *param_3 = *param_3 + -*param_4;
  }
  else if ((uint64_t)(int64_t)param_2 < *param_4) {
    iVal_3 = 0;
    if (param_2 != 0) {
      lVal_5 = (int64_t)(param_2 + -1) * 2;
      iVal_6 = param_2 + -1;
      iVal_3 = 0;
      do {
        sz_2 = param_5;
        if (param_1 != 0) {
          sz_2 = (short)param_1 + (short)(param_1 / 10) * -10 + 0x30;
        }
        *(short *)(lVal_5 + (int64_t)*param_3) = sz_2;
        iVal_3 = iVal_3 + 1;
        lVal_5 = lVal_5 + -2;
        param_1 = param_1 / 10;
        bFlag_8 = iVal_6 != 0;
        iVal_6 = iVal_6 + -1;
      } while (bFlag_8);
    }
    *param_3 = *param_3 + iVal_3;
    *param_4 = *param_4 - (int64_t)iVal_3;
    return;
  }
  *param_4 = 0;
  return;
}

// func_0x18067c538
int func_0x18067c538(uint32_t param_1,int param_2,int param_3)
{
  int iVal_1;
  byte bFlag_2;
  int iVal_3;
  int iVal_4;
  int iVal_5;
  
  iVal_1 = ((param_3 - (param_2 + 6) % 7) + 7) / 7;
  bFlag_2 = __crt_time_is_leap_year<>(param_1);
  iVal_5 = param_3 - (uint)bFlag_2;
  iVal_4 = ((param_2 - param_3) + 0x173) % 7;
  iVal_3 = (int)(bFlag_2 + 0x16d + iVal_4) % 7;
  if ((((iVal_5 < 0x16c) || (iVal_3 != 2)) && ((iVal_5 < 0x16b || (iVal_3 != 3)))) &&
     ((iVal_5 < 0x16a || (iVal_3 != 4)))) {
    iVal_3 = iVal_1 + 1;
    if ((1 < iVal_4 - 2U) && (iVal_4 != 4)) {
      iVal_3 = iVal_1;
    }
  }
  else {
    iVal_3 = -1;
  }
  return iVal_3;
}

// func_0x18067c630
uint64_t func_0x18067c630(uint64_t param_1,ushort param_2,uint *param_3,short **param_4,int64_t *param_5, uint8_t **param_6,char param_7)
{
  short sz_1;
  char ch_2;
  byte bFlag_3;
  int iVal_4;
  errno_t eVar5;
  uint uVal_6;
  uint32_t *pU64_7;
  int64_t lVal_8;
  uint uVal_9;
  uint uVal_10;
  short *pSize_11;
  uint64_t uVal_12;
  short *pSize_13;
  bool bFlag_14;
  bool bFlag_15;
  int local_res10 [2];
  int local_38 [4];
  
  if (param_2 < 0x5b) {
    if (param_2 == 0x5a) {
      __tzset();
      lVal_8 = func_0x180697808();
      pSize_11 = *(short **)((uint64_t)(-(uint)(param_3[8] != 0) & 8) + lVal_8);
      lVal_8 = *param_5;
      while( true ) {
        if (lVal_8 == 0) {
          return 1;
        }
        sz_1 = *pSize_11;
        if (sz_1 == 0) break;
        pSize_11 = pSize_11 + 1;
        **param_4 = sz_1;
        *param_4 = *param_4 + 1;
        *param_5 = *param_5 + -1;
        lVal_8 = *param_5;
      }
      return 1;
    }
    if (param_2 < 0x4e) {
      if (param_2 == 0x4d) {
        uVal_9 = param_3[1];
        bFlag_14 = uVal_9 < 0x3b;
        bFlag_15 = uVal_9 == 0x3b;
LAB_18067c7ae:
        if (!bFlag_14 && !bFlag_15) {
LAB_18067ca5c:
          pU64_7 = (uint32_t *)func_0x1806823dc();
          *pU64_7 = 0x16;
          func_0x180684970();
          return 0;
        }
        goto LAB_18067c6e3;
      }
      if (param_2 == 0x25) {
        pSize_11 = &DAT_1807619f4;
        lVal_8 = *param_5;
        while( true ) {
          if (lVal_8 == 0) {
            return 1;
          }
          sz_1 = *pSize_11;
          if (sz_1 == 0) break;
          pSize_11 = pSize_11 + 1;
          **param_4 = sz_1;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 + -1;
          lVal_8 = *param_5;
        }
        return 1;
      }
      if (param_2 == 0x41) {
        if (param_3[6] < 7) {
          pSize_11 = (short *)param_6[(int64_t)(int)param_3[6] + 0x33];
          lVal_8 = *param_5;
          while( true ) {
            if (lVal_8 == 0) {
              return 1;
            }
            sz_1 = *pSize_11;
            if (sz_1 == 0) break;
            pSize_11 = pSize_11 + 1;
            **param_4 = sz_1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 + -1;
            lVal_8 = *param_5;
          }
          return 1;
        }
        goto LAB_18067ca5c;
      }
      if (param_2 == 0x42) {
        if (param_3[4] < 0xc) {
          pSize_11 = (short *)param_6[(int64_t)(int)param_3[4] + 0x46];
          lVal_8 = *param_5;
          while( true ) {
            if (lVal_8 == 0) {
              return 1;
            }
            sz_1 = *pSize_11;
            if (sz_1 == 0) break;
            pSize_11 = pSize_11 + 1;
            **param_4 = sz_1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 + -1;
            lVal_8 = *param_5;
          }
          return 1;
        }
        goto LAB_18067ca5c;
      }
      if (param_2 == 0x43) {
        if (9999 < param_3[5] + 0x76c) goto LAB_18067ca5c;
        uVal_9 = (int)(param_3[5] + 0x76c) / 100;
LAB_18067c6e3:
        uVal_12 = 2;
LAB_18067c6ef:
        func_0x18067c3e8(uVal_9,uVal_12);
        return 1;
      }
      if (param_2 == 0x44) {
        ch_2 = func_0x18067c630(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
        if (ch_2 == '\0') goto LAB_18067c808;
        pSize_13 = &DAT_1807619e4;
        lVal_8 = *param_5;
        for (pSize_11 = &DAT_1807619e4; (lVal_8 != 0 && (*pSize_11 != 0)); pSize_11 = pSize_11 + 1) {
          **param_4 = *pSize_11;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 + -1;
          lVal_8 = *param_5;
        }
        ch_2 = func_0x18067c630(param_1,100,param_3,param_4,param_5,param_6,param_7);
        if (ch_2 == '\0') goto LAB_18067c808;
        lVal_8 = *param_5;
        for (; (lVal_8 != 0 && (*pSize_13 != 0)); pSize_13 = pSize_13 + 1) {
          **param_4 = *pSize_13;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 + -1;
          lVal_8 = *param_5;
        }
        uVal_12 = 0x79;
      }
      else {
        if (param_2 != 0x46) {
          if (param_2 == 0x47) {
            uVal_9 = param_3[5];
            if (9999 < uVal_9 + 0x76c) goto LAB_18067ca5c;
            iVal_4 = func_0x18067c538(uVal_9,param_3[6],param_3[7]);
            if (iVal_4 == 0) {
              uVal_9 = uVal_9 - 1;
            }
            else if (iVal_4 < 1) {
              uVal_9 = uVal_9 + 1;
            }
            uVal_9 = uVal_9 + 0x76c;
LAB_18067cf53:
            uVal_12 = 4;
            goto LAB_18067c6ef;
          }
          if (param_2 == 0x48) {
            uVal_9 = param_3[2];
            bFlag_14 = uVal_9 < 0x17;
            bFlag_15 = uVal_9 == 0x17;
            goto LAB_18067c7ae;
          }
          if (param_2 != 0x49) {
            return 0;
          }
          if (0x17 < param_3[2]) goto LAB_18067ca5c;
          uVal_9 = (int)param_3[2] % 0xc;
          if (uVal_9 == 0) {
            uVal_9 = 0xc;
          }
          goto LAB_18067c6e3;
        }
        ch_2 = func_0x18067c630(param_1,0x59,param_3,param_4,param_5,param_6,param_7);
        if (ch_2 == '\0') goto LAB_18067c808;
        pSize_13 = &DAT_1807619ec;
        lVal_8 = *param_5;
        for (pSize_11 = &DAT_1807619ec; (lVal_8 != 0 && (*pSize_11 != 0)); pSize_11 = pSize_11 + 1) {
          **param_4 = *pSize_11;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 + -1;
          lVal_8 = *param_5;
        }
        ch_2 = func_0x18067c630(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
        if (ch_2 == '\0') goto LAB_18067c808;
        lVal_8 = *param_5;
        for (; (lVal_8 != 0 && (*pSize_13 != 0)); pSize_13 = pSize_13 + 1) {
          **param_4 = *pSize_13;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 + -1;
          lVal_8 = *param_5;
        }
        uVal_12 = 100;
      }
    }
    else if (param_2 == 0x52) {
      ch_2 = func_0x18067c630(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
      if (ch_2 == '\0') goto LAB_18067c808;
      lVal_8 = *param_5;
      for (pSize_11 = &DAT_1807619e0; (lVal_8 != 0 && (*pSize_11 != 0)); pSize_11 = pSize_11 + 1) {
        **param_4 = *pSize_11;
        *param_4 = *param_4 + 1;
        *param_5 = *param_5 + -1;
        lVal_8 = *param_5;
      }
      uVal_12 = 0x4d;
    }
    else {
      if (param_2 == 0x53) {
        uVal_9 = *param_3;
        bFlag_14 = uVal_9 < 0x3c;
        bFlag_15 = uVal_9 == 0x3c;
        goto LAB_18067c7ae;
      }
      if (param_2 != 0x54) {
        if (param_2 != 0x55) {
          if (param_2 == 0x56) {
            uVal_9 = param_3[6];
            uVal_10 = param_3[5];
            uVal_6 = func_0x18067c538(uVal_10,uVal_9,param_3[7]);
            if (uVal_6 == 0) {
              bFlag_3 = __crt_time_is_leap_year<>(uVal_10 - 1);
              uVal_9 = func_0x18067c538(uVal_10 - 1,(uVal_9 - param_3[7]) + 7,bFlag_3 + 0x16d);
            }
            else {
              uVal_9 = 1;
              if (0 < (int)uVal_6) {
                uVal_9 = uVal_6;
              }
            }
            goto LAB_18067c6e3;
          }
          if (param_2 != 0x57) {
            if (param_2 != 0x58) {
              if (param_2 != 0x59) {
                return 0;
              }
              uVal_9 = param_3[5] + 0x76c;
              if (9999 < uVal_9) goto LAB_18067ca5c;
              goto LAB_18067cf53;
            }
            goto LAB_18067c9af;
          }
        }
        uVal_10 = param_3[6];
        if (6 < uVal_10) goto LAB_18067ca5c;
        if (param_2 == 0x57) {
          if (uVal_10 == 0) {
            uVal_10 = 6;
          }
          else {
            uVal_10 = uVal_10 - 1;
          }
        }
        uVal_6 = param_3[7];
        if (0x16d < uVal_6) goto LAB_18067ca5c;
        uVal_9 = 0;
        if (((int)uVal_10 <= (int)uVal_6) && (uVal_9 = (int)uVal_6 / 7, (int)uVal_10 <= (int)uVal_6 % 7))
        {
          uVal_9 = (int)uVal_6 / 7 + 1;
        }
        goto LAB_18067c6e3;
      }
      ch_2 = func_0x18067c630(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
      if (ch_2 == '\0') goto LAB_18067c808;
      pSize_13 = &DAT_1807619e0;
      lVal_8 = *param_5;
      for (pSize_11 = &DAT_1807619e0; (lVal_8 != 0 && (*pSize_11 != 0)); pSize_11 = pSize_11 + 1) {
        **param_4 = *pSize_11;
        *param_4 = *param_4 + 1;
        *param_5 = *param_5 + -1;
        lVal_8 = *param_5;
      }
      ch_2 = func_0x18067c630(param_1,0x4d,param_3,param_4,param_5,param_6,param_7);
      if (ch_2 == '\0') goto LAB_18067c808;
      lVal_8 = *param_5;
      for (; (lVal_8 != 0 && (*pSize_13 != 0)); pSize_13 = pSize_13 + 1) {
        **param_4 = *pSize_13;
        *param_4 = *param_4 + 1;
        *param_5 = *param_5 + -1;
        lVal_8 = *param_5;
      }
      uVal_12 = 0x53;
    }
LAB_18067c941:
    ch_2 = func_0x18067c630(param_1,uVal_12,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    if (param_2 < 0x6f) {
      if (param_2 == 0x6e) {
        pSize_11 = &DAT_1807619fc;
        lVal_8 = *param_5;
        while( true ) {
          if (lVal_8 == 0) {
            return 1;
          }
          sz_1 = *pSize_11;
          if (sz_1 == 0) break;
          pSize_11 = pSize_11 + 1;
          **param_4 = sz_1;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 + -1;
          lVal_8 = *param_5;
        }
        return 1;
      }
      if (param_2 == 0x61) {
        if (param_3[6] < 7) {
          pSize_11 = (short *)param_6[(int64_t)(int)param_3[6] + 0x2c];
          lVal_8 = *param_5;
          while( true ) {
            if (lVal_8 == 0) {
              return 1;
            }
            sz_1 = *pSize_11;
            if (sz_1 == 0) break;
            pSize_11 = pSize_11 + 1;
            **param_4 = sz_1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 + -1;
            lVal_8 = *param_5;
          }
          return 1;
        }
        goto LAB_18067ca5c;
      }
      if (param_2 == 0x62) {
LAB_18067c9be:
        if (param_3[4] < 0xc) {
          pSize_11 = (short *)param_6[(int64_t)(int)param_3[4] + 0x3a];
          lVal_8 = *param_5;
          while( true ) {
            if (lVal_8 == 0) {
              return 1;
            }
            sz_1 = *pSize_11;
            if (sz_1 == 0) break;
            pSize_11 = pSize_11 + 1;
            **param_4 = sz_1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 + -1;
            lVal_8 = *param_5;
          }
          return 1;
        }
        goto LAB_18067ca5c;
      }
      if (param_2 != 99) {
        if (param_2 == 100) {
          uVal_9 = param_3[3];
          bFlag_14 = uVal_9 - 1 < 0x1e;
          bFlag_15 = uVal_9 - 1 == 0x1e;
          goto LAB_18067c7ae;
        }
        if (param_2 == 0x65) {
          uVal_9 = param_3[3];
          if (0x1e < param_3[3] - 1) goto LAB_18067ca5c;
        }
        else if (param_2 == 0x67) {
          uVal_9 = param_3[5];
          if (9999 < uVal_9 + 0x76c) goto LAB_18067ca5c;
          iVal_4 = func_0x18067c538(uVal_9,param_3[6],param_3[7]);
          if (iVal_4 == 0) {
            uVal_9 = uVal_9 - 1;
          }
          else if (iVal_4 < 1) {
            uVal_9 = uVal_9 + 1;
          }
          uVal_9 = (int)(uVal_9 + 0x76c) % 100;
        }
        else {
          if (param_2 == 0x68) goto LAB_18067c9be;
          if (param_2 == 0x6a) {
            if (param_3[7] < 0x16e) {
              uVal_9 = param_3[7] + 1;
              uVal_12 = 3;
              goto LAB_18067c6ef;
            }
            goto LAB_18067ca5c;
          }
          if (param_2 != 0x6d) {
            return 0;
          }
          if (0xb < param_3[4]) goto LAB_18067ca5c;
          uVal_9 = param_3[4] + 1;
        }
        goto LAB_18067c6e3;
      }
      if ((param_6 != &PTR_DAT_1806e7370) || (param_7 != '\0')) {
        ch_2 = func_0x18067d50c(param_1,param_7,param_3,param_4,param_5,param_6);
        if (ch_2 == '\0') goto LAB_18067c808;
        lVal_8 = *param_5;
        for (pSize_11 = &DAT_1807619f8; (lVal_8 != 0 && (*pSize_11 != 0)); pSize_11 = pSize_11 + 1) {
          **param_4 = *pSize_11;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 + -1;
          lVal_8 = *param_5;
        }
LAB_18067c9af:
        param_7 = '\x02';
        goto LAB_18067c9b4;
      }
      ch_2 = func_0x18067c630(param_1,0x61,param_3,param_4,param_5,&PTR_DAT_1806e7370,0);
      if (ch_2 == '\0') goto LAB_18067c808;
      pSize_13 = &DAT_1807619f8;
      lVal_8 = *param_5;
      for (pSize_11 = &DAT_1807619f8; (lVal_8 != 0 && (*pSize_11 != 0)); pSize_11 = pSize_11 + 1) {
        **param_4 = *pSize_11;
        *param_4 = *param_4 + 1;
        *param_5 = *param_5 + -1;
        lVal_8 = *param_5;
      }
      ch_2 = func_0x18067c630(param_1,0x62,param_3,param_4,param_5,&PTR_DAT_1806e7370,0);
      if (ch_2 == '\0') goto LAB_18067c808;
      lVal_8 = *param_5;
      for (pSize_11 = &DAT_1807619f8; (lVal_8 != 0 && (*pSize_11 != 0)); pSize_11 = pSize_11 + 1) {
        **param_4 = *pSize_11;
        *param_4 = *param_4 + 1;
        *param_5 = *param_5 + -1;
        lVal_8 = *param_5;
      }
      ch_2 = func_0x18067c630(param_1,0x65,param_3,param_4,param_5,&PTR_DAT_1806e7370,0);
      if (ch_2 == '\0') goto LAB_18067c808;
      lVal_8 = *param_5;
      for (pSize_11 = &DAT_1807619f8; (lVal_8 != 0 && (*pSize_11 != 0)); pSize_11 = pSize_11 + 1) {
        **param_4 = *pSize_11;
        *param_4 = *param_4 + 1;
        *param_5 = *param_5 + -1;
        lVal_8 = *param_5;
      }
      ch_2 = func_0x18067c630(param_1,0x54,param_3,param_4,param_5,&PTR_DAT_1806e7370,0);
      if (ch_2 == '\0') goto LAB_18067c808;
      lVal_8 = *param_5;
      for (; (lVal_8 != 0 && (*pSize_13 != 0)); pSize_13 = pSize_13 + 1) {
        **param_4 = *pSize_13;
        *param_4 = *param_4 + 1;
        *param_5 = *param_5 + -1;
        lVal_8 = *param_5;
      }
      param_7 = '\0';
      uVal_12 = 0x59;
      goto LAB_18067c941;
    }
    if (param_2 == 0x70) {
      if (param_3[2] < 0x18) {
        if ((int)param_3[2] < 0xc) {
          pSize_11 = (short *)param_6[0x52];
        }
        else {
          pSize_11 = (short *)param_6[0x53];
        }
        lVal_8 = *param_5;
        while( true ) {
          if (lVal_8 == 0) {
            return 1;
          }
          sz_1 = *pSize_11;
          if (sz_1 == 0) break;
          pSize_11 = pSize_11 + 1;
          **param_4 = sz_1;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 + -1;
          lVal_8 = *param_5;
        }
        return 1;
      }
      goto LAB_18067ca5c;
    }
    if (param_2 == 0x72) {
      if (param_6 == &PTR_DAT_1806e7370) {
        ch_2 = func_0x18067c630(param_1,0x49,param_3,param_4,param_5,&PTR_DAT_1806e7370,param_7);
        if (ch_2 == '\0') goto LAB_18067c808;
        pSize_13 = &DAT_1807619e0;
        lVal_8 = *param_5;
        for (pSize_11 = &DAT_1807619e0; (lVal_8 != 0 && (*pSize_11 != 0)); pSize_11 = pSize_11 + 1) {
          **param_4 = *pSize_11;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 + -1;
          lVal_8 = *param_5;
        }
        ch_2 = func_0x18067c630(param_1,0x4d,param_3,param_4,param_5,&PTR_DAT_1806e7370,param_7);
        if (ch_2 == '\0') goto LAB_18067c808;
        lVal_8 = *param_5;
        for (; (lVal_8 != 0 && (*pSize_13 != 0)); pSize_13 = pSize_13 + 1) {
          **param_4 = *pSize_13;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 + -1;
          lVal_8 = *param_5;
        }
        ch_2 = func_0x18067c630(param_1,0x53,param_3,param_4,param_5,&PTR_DAT_1806e7370,param_7);
        if (ch_2 == '\0') goto LAB_18067c808;
        lVal_8 = *param_5;
        for (pSize_11 = &DAT_1807619f8; (lVal_8 != 0 && (*pSize_11 != 0)); pSize_11 = pSize_11 + 1) {
          **param_4 = *pSize_11;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 + -1;
          lVal_8 = *param_5;
        }
        uVal_12 = 0x70;
      }
      else {
        uVal_12 = 0x58;
      }
      goto LAB_18067c941;
    }
    if (param_2 == 0x74) {
      pSize_11 = &DAT_180761a00;
      lVal_8 = *param_5;
      while( true ) {
        if (lVal_8 == 0) {
          return 1;
        }
        sz_1 = *pSize_11;
        if (sz_1 == 0) break;
        pSize_11 = pSize_11 + 1;
        **param_4 = sz_1;
        *param_4 = *param_4 + 1;
        *param_5 = *param_5 + -1;
        lVal_8 = *param_5;
      }
      return 1;
    }
    if ((param_2 == 0x75) || (param_2 == 0x77)) {
      uVal_9 = param_3[6];
      if (6 < uVal_9) goto LAB_18067ca5c;
      if ((uVal_9 == 0) && (param_2 == 0x75)) {
        uVal_9 = 7;
      }
      uVal_12 = 1;
      goto LAB_18067c6ef;
    }
    if (param_2 != 0x78) {
      if (param_2 != 0x79) {
        if (param_2 != 0x7a) {
          return 0;
        }
        __tzset();
        local_res10[0] = 0;
        eVar5 = FID_conflict__get_daylight(local_res10);
        if (eVar5 == 0) {
          if (param_3[8] != 0) {
            local_38[0] = 0;
            eVar5 = _get_dstbias(local_38);
            if (eVar5 != 0) goto LAB_18067ca5c;
            local_res10[0] = local_res10[0] + local_38[0];
          }
          pSize_11 = &DAT_1807619ec;
          iVal_4 = -local_res10[0];
          if (0 < local_res10[0]) {
            iVal_4 = local_res10[0];
          }
          uVal_9 = (iVal_4 / 0x3c) % 0x3c;
          if (local_res10[0] < 1) {
            pSize_11 = (short *)&DAT_1807619f0;
          }
          lVal_8 = *param_5;
          for (; (lVal_8 != 0 && (*pSize_11 != 0)); pSize_11 = pSize_11 + 1) {
            **param_4 = *pSize_11;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 + -1;
            lVal_8 = *param_5;
          }
          func_0x18067c3e8((iVal_4 / 0x3c) / 0x3c,2,param_4,param_5,0x30);
          uVal_12 = 2;
          goto LAB_18067c6ef;
        }
        goto LAB_18067ca5c;
      }
      if (9999 < param_3[5] + 0x76c) goto LAB_18067ca5c;
      uVal_9 = (int)(param_3[5] + 0x76c) % 100;
      goto LAB_18067c6e3;
    }
LAB_18067c9b4:
    ch_2 = func_0x18067d50c(param_1,param_7,param_3,param_4,param_5,param_6);
  }
  if (ch_2 != '\0') {
    return 1;
  }
LAB_18067c808:
  pU64_7 = (uint32_t *)func_0x1806823dc();
  *pU64_7 = 0x16;
  return 0;
}

// func_0x18067d50c
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
void func_0x18067d50c(uint64_t param_1,int param_2,uint16_t *param_3,ushort **param_4, int64_t *param_5,int64_t param_6)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint16_t *pU64_3;
  uint8_t *pU64_4;
  char ch_5;
  int iVal_6;
  uint64_t uVal_7;
  uint32_t *pU64_8;
  ushort uVal_9;
  uint uVal_10;
  uint64_t uVal_11;
  int iVal_12;
  ushort *pU64_13;
  uint8_t uVal_14;
  uint32_t *pU64_16;
  uint8_t *pU64_17;
  uint8_t *pU64_18;
  ushort *pU64_19;
  uint8_t uVal_20;
  uint8_t auStack_a8 [32];
  uint64_t local_88;
  uint32_t local_80;
  uint64_t local_78;
  uint16_t *local_68;
  uint64_t local_60;
  short local_58;
  short sStack_56;
  uint16_t local_54;
  uint16_t local_52;
  uint16_t local_50;
  uint16_t local_4e;
  uint16_t local_4c;
  uint16_t local_4a;
  uint64_t local_48;
  uint8_t uVal_15;
  
  pU64_17 = auStack_a8;
  pU64_18 = auStack_a8;
  local_48 = DAT_18083cf40 ^ (uint64_t)&local_68;
  if (param_2 == 0) {
    pU64_13 = *(ushort **)(param_6 + 0x2a0);
  }
  else if (param_2 == 1) {
    pU64_13 = *(ushort **)(param_6 + 0x2a8);
  }
  else {
    pU64_13 = *(ushort **)(param_6 + 0x2b0);
  }
  pU64_4 = auStack_a8;
  local_68 = param_3;
  local_60 = param_1;
  if (*(int *)(param_6 + 0x158) == 1) goto LAB_18067d73a;
  local_58 = param_3[10] + 0x76c;
  sStack_56 = param_3[8] + 1;
  local_54 = 0;
  local_52 = param_3[6];
  local_50 = param_3[4];
  local_4e = param_3[2];
  local_4c = *param_3;
  local_4a = 0;
  if (param_2 == 2) {
    local_80 = 0;
    local_88 = 0;
    iVal_6 = func_0x180696dd8();
  }
  else {
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    iVal_6 = func_0x180696c7c(*(uint64_t *)(param_6 + 0x2b8),0,&local_58,pU64_13);
  }
  pU64_4 = auStack_a8;
  if ((iVal_6 == 0) ||
     (uVal_11 = (int64_t)iVal_6 * 2 + 0x10,
     uVal_11 = -(uint64_t)((uint64_t)((int64_t)iVal_6 * 2) < uVal_11) & uVal_11, pU64_4 = auStack_a8,
     uVal_11 == 0)) goto LAB_18067d73a;
  if (uVal_11 < 0x401) {
    uVal_7 = uVal_11 + 0xf;
    if (uVal_7 <= uVal_11) {
      uVal_7 = 0xffffffffffffff0;
    }
    lVal_2 = -(uVal_7 & 0xfffffffffffffff0);
    pU64_17 = auStack_a8 + lVal_2;
    pU64_8 = (uint32_t *)((int64_t)&local_68 + lVal_2);
    pU64_4 = auStack_a8 + lVal_2;
    if (pU64_8 == (uint32_t *)0x0) goto LAB_18067d73a;
    *pU64_8 = 0xcccc;
LAB_18067d68a:
    pU64_8 = pU64_8 + 4;
    pU64_18 = pU64_17;
  }
  else {
    pU64_8 = (uint32_t *)_malloc_base();
    if (pU64_8 != (uint32_t *)0x0) {
      *pU64_8 = 0xdddd;
      goto LAB_18067d68a;
    }
  }
  pU64_4 = pU64_18;
  if (pU64_8 != (uint32_t *)0x0) {
    uVal_1 = *(uint64_t *)(param_6 + 0x2b8);
    pU64_16 = pU64_8;
    if (param_2 == 2) {
      *(int *)(pU64_18 + 0x28) = iVal_6;
      *(uint32_t **)(pU64_18 + 0x20) = pU64_8;
      *(uint64_t *)(pU64_18 + -8) = 0x18067d6bb;
      iVal_6 = func_0x180696dd8();
    }
    else {
      *(uint64_t *)(pU64_18 + 0x30) = 0;
      *(int *)(pU64_18 + 0x28) = iVal_6;
      *(uint32_t **)(pU64_18 + 0x20) = pU64_8;
      *(uint64_t *)(pU64_18 + -8) = 0x18067d6d0;
      iVal_6 = func_0x180696c7c(uVal_1,0,&local_58);
    }
    while ((iVal_6 = iVal_6 + -1, 0 < iVal_6 && (*param_5 != 0))) {
      **param_4 = *(ushort *)pU64_16;
      *param_4 = *param_4 + 1;
      *param_5 = *param_5 + -1;
      pU64_16 = (uint32_t *)((int64_t)pU64_16 + 2);
    }
    if (pU64_8[-4] == 0xdddd) {
      *(uint64_t *)(pU64_18 + -8) = 0x18067d70e;
      func_0x180695dd0();
    }
LAB_18067d710:
    uVal_11 = local_48 ^ (uint64_t)&local_68;
    *(uint64_t *)(pU64_18 + -8) = 0x18067d71c;
    func_0x180673080(uVal_11);
    return;
  }
LAB_18067d73a:
  pU64_18 = pU64_4;
  uVal_1 = local_60;
  uVal_9 = *pU64_13;
  do {
    if ((uVal_9 == 0) || (uVal_11 = 0, *param_5 == 0)) goto LAB_18067d710;
    uVal_15 = 0;
    uVal_14 = 0;
    uVal_7 = uVal_11;
    pU64_19 = pU64_13;
    do {
      pU64_19 = pU64_19 + 1;
      iVal_6 = (int)uVal_7;
      uVal_10 = iVal_6 + 1;
      uVal_7 = (uint64_t)uVal_10;
      uVal_11 = uVal_11 + 1;
    } while (*pU64_19 == *pU64_13);
    uVal_9 = *pU64_13;
    iVal_12 = 100;
    uVal_20 = 1;
    if (uVal_9 < 0x65) {
      if (uVal_9 == 100) {
        if ((uVal_10 != 1) && (uVal_20 = uVal_14, uVal_10 != 2)) {
          if (uVal_10 == 3) {
            iVal_12 = 0x61;
          }
          else {
            if (uVal_10 != 4) goto LAB_18067d9a2;
            iVal_12 = iVal_6 + 0x3e;
          }
        }
        goto LAB_18067d9c0;
      }
      if (uVal_9 != 0x27) {
        if (uVal_9 == 0x41) {
LAB_18067d7b1:
          *(uint64_t *)(pU64_18 + -8) = 0x18067d7c0;
          iVal_6 = func_0x1806967a0(pU64_13,L"am/pm");
          if (iVal_6 == 0) {
            pU64_19 = pU64_13 + 5;
          }
          else {
            *(uint64_t *)(pU64_18 + -8) = 0x18067d82b;
            iVal_6 = func_0x1806967a0(pU64_13,&DAT_180763138);
            if (iVal_6 == 0) {
              pU64_19 = pU64_13 + 3;
            }
          }
          iVal_12 = 0x70;
          uVal_20 = uVal_14;
        }
        else {
          iVal_12 = 0x48;
          if (uVal_9 == 0x48) {
            if ((uVal_10 != 1) && (uVal_20 = uVal_14, uVal_10 != 2)) goto LAB_18067d9a2;
          }
          else {
            if (uVal_9 != 0x4d) {
              if (uVal_9 != 0x61) goto LAB_18067d9a2;
              goto LAB_18067d7b1;
            }
            if ((uVal_10 == 1) || (uVal_20 = uVal_15, uVal_10 == 2)) {
              iVal_12 = 0x6d;
            }
            else if (uVal_10 == 3) {
              iVal_12 = 0x62;
              uVal_20 = uVal_14;
            }
            else {
              if (uVal_10 != 4) goto LAB_18067d9a2;
              iVal_12 = iVal_6 + 0x3f;
              uVal_20 = uVal_14;
            }
          }
        }
        goto LAB_18067d9c0;
      }
      if ((uVal_10 & 1) == 0) {
        pU64_19 = pU64_13 + (int)uVal_10;
      }
      else {
        pU64_19 = pU64_13 + uVal_11;
        uVal_9 = *pU64_19;
        if (uVal_9 == 0) goto LAB_18067d710;
        do {
          if ((*param_5 == 0) || (pU64_19 = pU64_19 + 1, uVal_9 == 0x27)) break;
          **param_4 = uVal_9;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 + -1;
          uVal_9 = *pU64_19;
        } while (uVal_9 != 0);
      }
    }
    else {
      if (uVal_9 == 0x68) {
        if ((uVal_10 != 1) && (uVal_20 = uVal_15, uVal_10 != 2)) goto LAB_18067d9a2;
        iVal_12 = 0x49;
      }
      else if (uVal_9 == 0x6d) {
        if ((uVal_10 != 1) && (uVal_20 = uVal_15, uVal_10 != 2)) goto LAB_18067d9a2;
        iVal_12 = 0x4d;
      }
      else if (uVal_9 == 0x73) {
        if ((uVal_10 != 1) && (uVal_20 = uVal_15, uVal_10 != 2)) goto LAB_18067d9a2;
        iVal_12 = 0x53;
      }
      else {
        if (uVal_9 == 0x74) {
          if (*(int *)(local_68 + 4) < 0xc) {
            pU64_13 = *(ushort **)(param_6 + 0x290);
          }
          else {
            pU64_13 = *(ushort **)(param_6 + 0x298);
          }
          if ((uVal_10 == 1) && (*param_5 != 0)) {
            **param_4 = *pU64_13;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 + -1;
          }
          else {
            while ((uVal_9 = *pU64_13, uVal_9 != 0 && (*param_5 != 0))) {
              pU64_13 = pU64_13 + 1;
              **param_4 = uVal_9;
              *param_4 = *param_4 + 1;
              *param_5 = *param_5 + -1;
            }
          }
          goto LAB_18067d9eb;
        }
        if (uVal_9 != 0x79) {
LAB_18067d9a2:
          pU64_19 = pU64_13 + 1;
          **param_4 = uVal_9;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 + -1;
          goto LAB_18067d9eb;
        }
        if (uVal_10 == 2) {
          iVal_12 = 0x79;
          uVal_20 = uVal_14;
        }
        else {
          if (uVal_10 != 4) goto LAB_18067d9a2;
          iVal_12 = iVal_6 + 0x56;
          uVal_20 = uVal_14;
        }
      }
LAB_18067d9c0:
      pU64_3 = local_68;
      pU64_18[0x30] = uVal_20;
      *(int64_t *)(pU64_18 + 0x28) = param_6;
      *(int64_t **)(pU64_18 + 0x20) = param_5;
      *(uint64_t *)(pU64_18 + -8) = 0x18067d9dd;
      ch_5 = func_0x18067c630(uVal_1,iVal_12,pU64_3,param_4);
      if (ch_5 == '\0') {
        *(uint64_t *)(pU64_18 + -8) = 0x18067da03;
        pU64_8 = (uint32_t *)func_0x1806823dc();
        *pU64_8 = 0x16;
        goto LAB_18067d710;
      }
    }
LAB_18067d9eb:
    uVal_9 = *pU64_19;
    pU64_13 = pU64_19;
  } while( true );
}

// func_0x18067da10
uint32_t func_0x18067da10(void)
{
  int64_t lVal_1;
  int64_t local_res8 [4];
  
  lVal_1 = __vcrt_getptd();
  local_res8[0] = *(int64_t *)(lVal_1 + 0x90);
  func_0x180696634(lVal_1,local_res8);
  return *(uint32_t *)(local_res8[0] + 8);
}

// ___lc_locale_name_func
/* Library Function - Single Match
    ___lc_locale_name_func
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    ___lc_locale_name_func
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
wchar_t ** __cdecl ___lc_locale_name_func(void)
{
  int64_t lVal_1;
  int64_t local_res8 [4];
  
  lVal_1 = __vcrt_getptd();
  local_res8[0] = *(int64_t *)(lVal_1 + 0x90);
  func_0x180696634(lVal_1,local_res8);
  return (wchar_t **)(local_res8[0] + 0x128);
}

// ___lc_codepage_func
/* Library Function - Single Match
    ___lc_codepage_func
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    ___lc_codepage_func
   
   Library: Visual Studio 2019 Release */
UINT __cdecl ___lc_codepage_func(void)
{
  int64_t lVal_1;
  int64_t local_res8 [4];
  
  lVal_1 = __vcrt_getptd();
  local_res8[0] = *(int64_t *)(lVal_1 + 0x90);
  func_0x180696634(lVal_1,local_res8);
  return *(UINT *)(local_res8[0] + 0xc);
}

// ___lc_collate_cp_func
/* Library Function - Single Match
    ___lc_collate_cp_func
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    ___lc_collate_cp_func
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
UINT __cdecl ___lc_collate_cp_func(void)
{
  int64_t lVal_1;
  int64_t local_res8 [4];
  
  lVal_1 = __vcrt_getptd();
  local_res8[0] = *(int64_t *)(lVal_1 + 0x90);
  func_0x180696634(lVal_1,local_res8);
  return *(UINT *)(local_res8[0] + 0x14);
}

// func_0x18067e248
void func_0x18067e248(void)
{
  func_0x180699bd0(&PTR_LAB_1806e3e60,&DAT_1806e3f60);
  return;
}

// func_0x18067e25c
uint32_t func_0x18067e25c(bool param_1)
{
  uint32_t uVal_1;
  
  if (param_1 != false) {
    if (DAT_1808425d0 != 0) {
      common_flush_all(param_1);
    }
    return 1;
  }
  uVal_1 = func_0x180699c50(&PTR_LAB_1806e3e60,&DAT_1806e3f60);
  return uVal_1;
}

// func_0x18067e294
uint8_t func_0x18067e294(void)
{
  func_0x180696044();
  return 1;
}

// func_0x18067e2a4
bool func_0x18067e2a4(void)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x1806960c8();
  return lVal_1 != 0;
}

// func_0x18067e2b8
uint8_t func_0x18067e2b8(void)
{
  func_0x180696158();
  return 1;
}

// func_0x18067e2c8
uint8_t * func_0x18067e2c8(uint64_t param_1)
{
  return &DAT_18083d4b0 + (param_1 & 0xffffffff) * 0x58;
}

// _get_stream_buffer_pointers
/* Library Function - Single Match
    _get_stream_buffer_pointers
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _get_stream_buffer_pointers
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
uint64_t _get_stream_buffer_pointers(int64_t param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)
{
  uint32_t *pU64_1;
  uint64_t uVal_2;
  
  if (param_1 == 0) {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x16;
    func_0x180684970();
    uVal_2 = 0x16;
  }
  else {
    if (param_2 != (int64_t *)0x0) {
      *param_2 = param_1 + 8;
    }
    if (param_3 != (int64_t *)0x0) {
      *param_3 = param_1;
    }
    if (param_4 != (int64_t *)0x0) {
      *param_4 = param_1 + 0x10;
    }
    uVal_2 = 0;
  }
  return uVal_2;
}

// func_0x18067e324
void func_0x18067e324(int64_t param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018067e328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}

// func_0x18067e330
void func_0x18067e330(int64_t param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018067e334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}

// func_0x18067e4b8
uint64_t func_0x18067e4b8(void)
{
  int64_t lVal_1;
  uint64_t *local_res8 [4];
  
  lVal_1 = __vcrt_getptd();
  local_res8[0] = *(uint64_t **)(lVal_1 + 0x90);
  func_0x180696634(lVal_1,local_res8);
  return *local_res8[0];
}

// func_0x18067e4e8
uint32_t func_0x18067e4e8(uint64_t param_1,int64_t param_2,int64_t param_3,uint32_t *param_4, uint64_t param_5)
{
  uint32_t uVal_1;
  int64_t lVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  int64_t local_res8;
  uint64_t local_res10;
  int64_t local_res18;
  uint64_t local_res20;
  int64_t local_98 [2];
  uint8_t local_88;
  uint8_t local_80 [16];
  char local_70;
  uint32_t local_6c;
  char local_68;
  uint32_t local_64;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  uint64_t *local_38;
  int64_t *local_30;
  uint64_t *local_28;
  
  local_98[0] = 0;
  local_88 = 0;
  local_70 = '\0';
  local_68 = '\0';
  local_60 = '\0';
  if (param_4 == (uint32_t *)0x0) {
    uVal_1 = PTR_PTR_DAT_18083d808._0_4_;
    uVal_3 = PTR_PTR_DAT_18083d808._4_4_;
    uVal_4 = PTR_DAT_18083d810._0_4_;
    uVal_5 = PTR_DAT_18083d810._4_4_;
    if (DAT_1808429bc != 0) goto LAB_18067e531;
  }
  else {
    uVal_1 = *param_4;
    uVal_3 = param_4[1];
    uVal_4 = param_4[2];
    uVal_5 = param_4[3];
  }
  local_70 = '\x01';
  local_80._4_4_ = uVal_3;
  local_80._0_4_ = uVal_1;
  local_80._8_4_ = uVal_4;
  local_80._12_4_ = uVal_5;
LAB_18067e531:
  local_res20 = param_5;
  local_res8 = param_2;
  local_res10 = param_1;
  local_res18 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_68 = '\x01';
    local_6c = 0x16;
    func_0x180684b50(0,0,0,0,0,local_98);
    uVal_1 = 0xffffffff;
  }
  else {
    local_48 = &local_res8;
    local_40 = local_98;
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_28 = &local_res20;
    local_58 = param_2;
    local_50 = param_2;
    uVal_1 = operator()<>(&param_5,&local_50,&local_48,&local_58);
  }
  uVal_3 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVal_2 = func_0x18067e900(local_98);
    *(uint32_t *)(lVal_2 + 0x20) = uVal_3;
  }
  if (local_60 != '\0') {
    lVal_2 = func_0x18067e900(local_98);
    *(uint32_t *)(lVal_2 + 0x24) = local_64;
  }
  return uVal_1;
}

// func_0x18067e60c
void func_0x18067e60c(uint64_t param_1,uint8_t *param_2,uint64_t param_3,int64_t param_4, uint32_t *param_5,uint64_t param_6)
{
  int iVal_1;
  int64_t lVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint8_t auStack_548 [32];
  uint64_t local_528;
  int64_t *local_520;
  uint8_t *local_518;
  uint64_t local_510;
  uint64_t local_508;
  uint8_t local_500;
  uint32_t local_4ff;
  uint16_t local_4fb;
  uint8_t local_4f9;
  int64_t local_4f8 [2];
  uint8_t local_4e8;
  uint8_t local_4e0 [16];
  char local_4d0;
  uint32_t local_4cc;
  char local_4c8;
  uint32_t local_4c4;
  char local_4c0;
  uint64_t local_4b8;
  int64_t *local_4b0;
  int64_t local_4a8;
  uint64_t local_4a0;
  uint32_t local_498;
  uint8_t local_494;
  uint64_t local_490;
  uint32_t local_488;
  uint16_t local_480;
  uint32_t local_470;
  uint8_t local_46c;
  uint8_t local_68 [16];
  uint8_t **local_58;
  uint32_t local_50;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_548;
  local_4f8[0] = 0;
  local_4e8 = 0;
  local_4d0 = '\0';
  local_4c8 = '\0';
  local_4c0 = '\0';
  if (param_5 == (uint32_t *)0x0) {
    uVal_3 = PTR_PTR_DAT_18083d808._0_4_;
    uVal_4 = PTR_PTR_DAT_18083d808._4_4_;
    uVal_5 = PTR_DAT_18083d810._0_4_;
    uVal_6 = PTR_DAT_18083d810._4_4_;
    if (DAT_1808429bc == 0) goto LAB_18067e67b;
  }
  else {
    uVal_3 = *param_5;
    uVal_4 = param_5[1];
    uVal_5 = param_5[2];
    uVal_6 = param_5[3];
LAB_18067e67b:
    local_4d0 = '\x01';
    local_4e0._4_4_ = uVal_4;
    local_4e0._0_4_ = uVal_3;
    local_4e0._8_4_ = uVal_5;
    local_4e0._12_4_ = uVal_6;
  }
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (uint8_t *)0x0)))) {
    local_520 = local_4f8;
    local_4c8 = '\x01';
    local_528 = 0;
    local_4cc = 0x16;
    func_0x180684b50(0,0,0,0);
    goto LAB_18067e7fa;
  }
  local_4ff = 0;
  local_4fb = 0;
  local_4f9 = 0;
  local_508 = 0;
  if (((param_1 & 2) != 0) || (local_500 = 0, param_2 == (uint8_t *)0x0)) {
    local_500 = 1;
  }
  local_4b0 = local_4f8;
  local_498 = 0;
  local_58 = &local_518;
  local_494 = 0;
  local_4a0 = param_6;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_470 = 0;
  local_46c = 0;
  local_68 = ZEXT816(0);
  local_50 = 0;
  local_518 = param_2;
  local_510 = param_3;
  local_4b8 = param_1;
  local_4a8 = param_4;
  iVal_1 = func_0x18067fcb8(&local_4b8);
  if (param_2 == (uint8_t *)0x0) {
LAB_18067e7ee:
    func_0x180695dd0(local_68._8_8_);
  }
  else {
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) != 0) {
        if (param_3 != 0) {
          if (iVal_1 < 0) {
            *param_2 = 0;
          }
          else {
            if (local_508 != param_3) goto LAB_18067e7ea;
            param_2[param_3 - 1] = 0;
          }
        }
        goto LAB_18067e7ee;
      }
      if (param_3 != 0) {
        if (local_508 == param_3) {
          param_2[param_3 - 1] = 0;
          func_0x180695dd0(local_68._8_8_);
          goto LAB_18067e7fa;
        }
        goto LAB_18067e7ea;
      }
    }
    else if ((param_3 != 0) || (iVal_1 == 0)) {
      if (local_508 != param_3) {
LAB_18067e7ea:
        param_2[local_508] = 0;
        goto LAB_18067e7ee;
      }
      if ((iVal_1 < 0) || ((uint64_t)(int64_t)iVal_1 <= param_3)) goto LAB_18067e7ee;
    }
    func_0x180695dd0(local_68._8_8_);
  }
LAB_18067e7fa:
  uVal_3 = local_4cc;
  if (local_4d0 == '\x02') {
    *(uint *)(local_4f8[0] + 0x3a8) = *(uint *)(local_4f8[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_4c8 != '\0') {
    lVal_2 = func_0x18067e900(local_4f8);
    *(uint32_t *)(lVal_2 + 0x20) = uVal_3;
  }
  if (local_4c0 != '\0') {
    lVal_2 = func_0x18067e900(local_4f8);
    *(uint32_t *)(lVal_2 + 0x24) = local_4c4;
  }
  func_0x180673080(local_48 ^ (uint64_t)auStack_548);
  return;
}

// __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
/* Library Function - Single Match
    public: static bool __cdecl
   __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(struct _iobuf * __ptr64
   const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    public: static bool __cdecl
   __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(struct _iobuf * __ptr64
   const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
bool __cdecl __acrt_stdio_char_traits<char>:: validate_stream_is_ansi_if_required(_iobuf *param_1)
{
  bool bFlag_1;
  uint uVal_2;
  uint32_t *pU64_3;
  uint8_t *pU64_4;
  uint8_t *pU64_5;
  
  if ((*(uint *)((int64_t)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVal_2 = _fileno(param_1);
    pU64_5 = &DAT_18083d9e0;
    if (uVal_2 + 2 < 2) {
      pU64_4 = &DAT_18083d9e0;
    }
    else {
      pU64_4 = (uint8_t *)
               ((&DAT_180842c80)[(int64_t)(int)uVal_2 >> 6] + (uint64_t)(uVal_2 & 0x3f) * 0x48);
    }
    if (pU64_4[0x39] == '\0') {
      if (1 < uVal_2 + 2) {
        pU64_5 = (uint8_t *)
                 ((&DAT_180842c80)[(int64_t)(int)uVal_2 >> 6] + (uint64_t)(uVal_2 & 0x3f) * 0x48);
      }
      if ((pU64_5[0x3d] & 1) == 0) goto LAB_18067e8f4;
    }
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
    func_0x180684970();
    bFlag_1 = false;
  }
  else {
LAB_18067e8f4:
    bFlag_1 = true;
  }
  return bFlag_1;
}

// func_0x18067e900
int64_t func_0x18067e900(int64_t *param_1)
{
  int64_t lVal_1;
  DWORD local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if (*(char *)(param_1 + 2) == '\0') {
      lVal_1 = 0;
      *(uint8_t *)(param_1 + 2) = 1;
      param_1[1] = 0;
    }
    else {
      lVal_1 = param_1[1];
    }
    lVal_1 = func_0x1806961a8(local_res8,lVal_1);
    *param_1 = lVal_1;
    SetLastError(local_res8[0]);
    if (lVal_1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return *param_1;
}

// func_0x18067e970
void func_0x18067e970(int64_t param_1)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x18067e900();
  *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(lVal_1 + 0x90);
  *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(lVal_1 + 0x88);
  func_0x18069669c(lVal_1,(uint64_t *)(param_1 + 0x18),*(uint64_t *)(param_1 + 8));
  func_0x1806966d4(lVal_1,param_1 + 0x20,*(uint64_t *)(param_1 + 8));
  if ((*(uint *)(lVal_1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVal_1 + 0x3a8) = *(uint *)(lVal_1 + 0x3a8) | 2;
    *(uint8_t *)(param_1 + 0x28) = 2;
  }
  return;
}

// func_0x18067e9e8
void func_0x18067e9e8(char *param_1,int64_t *param_2)
{
  char ch_1;
  char *fnPtr_2;
  char *fnPtr_3;
  int64_t lVal_4;
  
  ch_1 = *param_1;
  while ((ch_1 != '\0' && (ch_1 != ***(char ***)(*param_2 + 0xf8)))) {
    param_1 = param_1 + 1;
    ch_1 = *param_1;
  }
  if (ch_1 != '\0') {
    do {
      param_1 = param_1 + 1;
      fnPtr_2 = param_1;
      if (*param_1 == '\0') break;
    } while ((*param_1 + 0xbbU & 0xdf) != 0);
    do {
      fnPtr_3 = fnPtr_2;
      fnPtr_2 = fnPtr_3 + -1;
    } while (*fnPtr_2 == '0');
    fnPtr_3 = fnPtr_3 + -2;
    if (*fnPtr_2 != ***(char ***)(*param_2 + 0xf8)) {
      fnPtr_3 = fnPtr_2;
    }
    lVal_4 = (int64_t)param_1 - (int64_t)fnPtr_3;
    do {
      ch_1 = fnPtr_3[lVal_4];
      fnPtr_3 = fnPtr_3 + 1;
      *fnPtr_3 = ch_1;
    } while (ch_1 != '\0');
  }
  return;
}

// func_0x18067ea54
void func_0x18067ea54(int64_t *param_1,char *param_2,int param_3,int *param_4,int64_t param_5)
{
  uint64_t uVal_1;
  int iVal_2;
  char *fnPtr_3;
  
  fnPtr_3 = param_2 + param_3;
  uVal_1 = *(uint64_t *)(param_5 + 0x2c);
  if (param_2 != fnPtr_3) {
    do {
      if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) == 0) || (*(int64_t *)(*param_1 + 8) != 0)) &&
         (iVal_2 = func_0x18068b390((int)*param_2,*param_1,param_5), iVal_2 == -1)) {
        if ((*(char *)(param_5 + 0x30) == '\0') || (*(int *)(param_5 + 0x2c) != 0x2a)) {
          *param_4 = -1;
          break;
        }
        if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) != 0) && (*(int64_t *)(*param_1 + 8) == 0))
           || (iVal_2 = func_0x18068b390(0x3f,*param_1,param_5), iVal_2 != -1)) goto LAB_18067eaf2;
        *param_4 = -1;
      }
      else {
LAB_18067eaf2:
        *param_4 = *param_4 + 1;
      }
      param_2 = param_2 + 1;
    } while (param_2 != fnPtr_3);
  }
  *(uint64_t *)(param_5 + 0x2c) = uVal_1;
  return;
}

// func_0x18067eb24
uint32_t func_0x18067eb24(int64_t param_1)
{
  int *pInt_1;
  bool bFlag_2;
  char ch_3;
  int iVal_4;
  byte bFlag_5;
  char *fnPtr_6;
  int64_t lVal_7;
  
  lVal_7 = *(int64_t *)(param_1 + 8);
  if (*(_iobuf **)(param_1 + 0x460) == (_iobuf *)0x0) {
    *(uint8_t *)(lVal_7 + 0x30) = 1;
    *(uint32_t *)(lVal_7 + 0x2c) = 0x16;
  }
  else {
    bFlag_2 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
                      (*(_iobuf **)(param_1 + 0x460));
    if (!bFlag_2) {
      return 0xffffffff;
    }
    fnPtr_6 = *(char **)(param_1 + 0x10);
    if (fnPtr_6 != (char *)0x0) {
      iVal_4 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVal_4;
      do {
        if (iVal_4 == 2) {
          return *(uint32_t *)(param_1 + 0x20);
        }
        *(uint32_t *)(param_1 + 0x48) = 0;
        *(uint8_t *)(param_1 + 0x24) = 0;
        ch_3 = *fnPtr_6;
        while( true ) {
          fnPtr_6 = fnPtr_6 + 1;
          *(char **)(param_1 + 0x10) = fnPtr_6;
          *(char *)(param_1 + 0x39) = ch_3;
          if ((ch_3 == '\0') || (*(int *)(param_1 + 0x20) < 0)) break;
          bFlag_5 = 0;
          if ((byte)(ch_3 - 0x20U) < 0x5b) {
            bFlag_5 = (&DAT_1806e4771)[(uint64_t)((int)ch_3 - 0x20U & 0x7f) * 2];
          }
          bFlag_5 = (&DAT_1806e4770)[(uint64_t)((uint)*(byte *)(param_1 + 0x24) + (uint)bFlag_5 * 8 & 0x7f) * 2];
          *(byte *)(param_1 + 0x24) = bFlag_5;
          if (7 < bFlag_5) {
LAB_18067ee74:
            lVal_7 = *(int64_t *)(param_1 + 8);
            *(uint8_t *)(lVal_7 + 0x30) = 1;
            *(uint32_t *)(lVal_7 + 0x2c) = 0x16;
            lVal_7 = *(int64_t *)(param_1 + 8);
            goto LAB_18067ee8c;
          }
          if (bFlag_5 == 0) {
            lVal_7 = *(int64_t *)(param_1 + 8);
            *(uint8_t *)(param_1 + 0x4c) = 0;
            if (*(char *)(lVal_7 + 0x28) == '\0') {
              func_0x18067e970(lVal_7);
            }
            ch_3 = *(char *)(param_1 + 0x39);
            if ((-2 < ch_3) &&
               ((*(ushort *)(**(int64_t **)(lVal_7 + 0x18) + (int64_t)ch_3 * 2) & 0x8000) != 0)) {
              if ((((*(uint *)(*(int64_t *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                  (*(int64_t *)(*(int64_t *)(param_1 + 0x460) + 8) != 0)) &&
                 (iVal_4 = func_0x18068b390((int64_t)ch_3 & 0xffffffff,
                                        *(uint64_t *)(param_1 + 0x460),
                                        *(uint64_t *)(param_1 + 8)), iVal_4 == -1)) {
                *(uint32_t *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
              ch_3 = **(char **)(param_1 + 0x10);
              *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
              *(char *)(param_1 + 0x39) = ch_3;
              if (ch_3 == '\0') {
                lVal_7 = *(int64_t *)(param_1 + 8);
                *(uint8_t *)(lVal_7 + 0x30) = 1;
                *(uint32_t *)(lVal_7 + 0x2c) = 0x16;
                func_0x180684b50(0,0,0,0,0,*(uint64_t *)(param_1 + 8));
                goto LAB_18067ee74;
              }
            }
            if ((((*(uint *)(*(int64_t *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                (*(int64_t *)(*(int64_t *)(param_1 + 0x460) + 8) != 0)) &&
               (iVal_4 = func_0x18068b390((int)ch_3,*(uint64_t *)(param_1 + 0x460),
                                      *(uint64_t *)(param_1 + 8)), iVal_4 == -1)) {
              *(uint32_t *)(param_1 + 0x20) = 0xffffffff;
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            }
          }
          else if (bFlag_5 == 1) {
            *(uint64_t *)(param_1 + 0x28) = 0;
            *(uint8_t *)(param_1 + 0x38) = 0;
            *(uint32_t *)(param_1 + 0x30) = 0xffffffff;
            *(uint32_t *)(param_1 + 0x34) = 0;
            *(uint8_t *)(param_1 + 0x4c) = 0;
          }
          else if (bFlag_5 == 2) {
            if (ch_3 == ' ') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (ch_3 == '#') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (ch_3 == '+') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (ch_3 == '-') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (ch_3 == '0') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else {
            if (bFlag_5 == 3) {
              if (ch_3 == '*') {
                pInt_1 = *(int **)(param_1 + 0x18);
                *(int **)(param_1 + 0x18) = pInt_1 + 2;
                iVal_4 = *pInt_1;
                *(int *)(param_1 + 0x2c) = iVal_4;
                if (iVal_4 < 0) {
                  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                  *(int *)(param_1 + 0x2c) = -iVal_4;
                }
LAB_18067ecb5:
                ch_3 = '\x01';
              }
              else {
                lVal_7 = param_1 + 0x2c;
LAB_18067ec5f:
                ch_3 = func_0x18067eea8(param_1,lVal_7);
              }
            }
            else {
              if (bFlag_5 == 4) {
                *(uint32_t *)(param_1 + 0x30) = 0;
                goto LAB_18067ee11;
              }
              if (bFlag_5 == 5) {
                if (ch_3 == '*') {
                  pInt_1 = *(int **)(param_1 + 0x18);
                  *(int **)(param_1 + 0x18) = pInt_1 + 2;
                  iVal_4 = *pInt_1;
                  *(int *)(param_1 + 0x30) = iVal_4;
                  if (iVal_4 < 0) {
                    *(uint32_t *)(param_1 + 0x30) = 0xffffffff;
                  }
                  goto LAB_18067ecb5;
                }
                lVal_7 = param_1 + 0x30;
                goto LAB_18067ec5f;
              }
              if (bFlag_5 == 6) {
                ch_3 = func_0x18067ef38(param_1);
              }
              else {
                if (bFlag_5 != 7) {
                  return 0xffffffff;
                }
                ch_3 = func_0x18067f0c0(param_1);
              }
            }
            if (ch_3 == '\0') {
              return 0xffffffff;
            }
          }
LAB_18067ee11:
          fnPtr_6 = *(char **)(param_1 + 0x10);
          ch_3 = *fnPtr_6;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
        iVal_4 = *(int *)(param_1 + 0x468);
      } while( true );
    }
    lVal_7 = *(int64_t *)(param_1 + 8);
    *(uint8_t *)(lVal_7 + 0x30) = 1;
    *(uint32_t *)(lVal_7 + 0x2c) = 0x16;
    lVal_7 = *(int64_t *)(param_1 + 8);
  }
LAB_18067ee8c:
  func_0x180684b50(0,0,0,0,0,lVal_7);
  return 0xffffffff;
}

// func_0x18067eea8
uint8_t func_0x18067eea8(int64_t param_1,uint32_t *param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint32_t uVal_3;
  uint8_t uVal_4;
  uint64_t local_res8;
  uint64_t local_18;
  uint64_t *local_10;
  
  lVal_1 = *(int64_t *)(param_1 + 8);
  local_10 = &local_res8;
  local_res8 = *(int64_t *)(param_1 + 0x10) - 1;
  uVal_2 = *(uint64_t *)(lVal_1 + 0x2c);
  local_18 = local_res8;
  uVal_3 = func_0x180680d14(lVal_1,&local_18,10,1);
  *param_2 = uVal_3;
  if (((*(char *)(*(int64_t *)(param_1 + 8) + 0x30) == '\0') ||
      (uVal_4 = 0, *(int *)(*(int64_t *)(param_1 + 8) + 0x2c) != 0x22)) &&
     (uVal_4 = 0, *(uint64_t *)(param_1 + 0x10) <= local_res8)) {
    *(uint64_t *)(param_1 + 0x10) = local_res8;
    uVal_4 = 1;
  }
  *(uint64_t *)(lVal_1 + 0x2c) = uVal_2;
  return uVal_4;
}

// func_0x18067ef38
uint64_t func_0x18067ef38(byte *param_1)
{
  char ch_1;
  int64_t lVal_2;
  char *fnPtr_3;
  byte bFlag_4;
  uint64_t in_RAX;
  undefined7 uVal_7;
  uint64_t uVal_5;
  char *fnPtr_6;
  
  bFlag_4 = param_1[0x39];
  uVal_7 = (undefined7)((uint64_t)in_RAX >> 8);
  fnPtr_6 = (char *)CONCAT71(uVal_7,bFlag_4);
  if (bFlag_4 == 0x46) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 7;
      uVal_5 = func_0x18067f0c0();
      return uVal_5;
    }
  }
  else if (bFlag_4 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 8;
LAB_18067ef6a:
      lVal_2 = *(int64_t *)(param_1 + 8);
      *(uint8_t *)(lVal_2 + 0x30) = 1;
      *(uint32_t *)(lVal_2 + 0x2c) = 0x16;
      uVal_5 = func_0x180684b50(0,0,0,0,0,*(uint64_t *)(param_1 + 8));
      return uVal_5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_18067ef6a;
    if (bFlag_4 == 0x49) {
      fnPtr_3 = *(char **)(param_1 + 0x10);
      ch_1 = *fnPtr_3;
      fnPtr_6 = (char *)CONCAT71(uVal_7,ch_1);
      if ((ch_1 == '3') && (fnPtr_3[1] == '2')) {
        fnPtr_6 = fnPtr_3 + 2;
        *(uint32_t *)(param_1 + 0x34) = 10;
        *(char **)(param_1 + 0x10) = fnPtr_6;
      }
      else if (ch_1 == '6') {
        if (fnPtr_3[1] == '4') {
          fnPtr_6 = fnPtr_3 + 2;
          *(uint32_t *)(param_1 + 0x34) = 0xb;
          *(char **)(param_1 + 0x10) = fnPtr_6;
        }
      }
      else {
        bFlag_4 = ch_1 + 0xa8;
        fnPtr_6 = (char *)CONCAT71(uVal_7,bFlag_4);
        if ((bFlag_4 < 0x21) && ((0x120821001U >> ((uint64_t)bFlag_4 & 0x3f) & 1) != 0)) {
          *(uint32_t *)(param_1 + 0x34) = 9;
        }
      }
    }
    else if (bFlag_4 == 0x4c) {
      *(uint32_t *)(param_1 + 0x34) = 8;
    }
    else if (bFlag_4 == 0x54) {
      *(uint32_t *)(param_1 + 0x34) = 0xd;
    }
    else {
      if (bFlag_4 == 0x68) {
        if (**(char **)(param_1 + 0x10) == 'h') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          fnPtr_6 = (char *)0x1;
        }
        else {
          fnPtr_6 = (char *)0x2;
        }
      }
      else {
        if (bFlag_4 == 0x6a) {
          *(uint32_t *)(param_1 + 0x34) = 5;
          goto LAB_18067f0b8;
        }
        if (bFlag_4 != 0x6c) {
          if (bFlag_4 == 0x74) {
            *(uint32_t *)(param_1 + 0x34) = 7;
          }
          else if (bFlag_4 == 0x77) {
            *(uint32_t *)(param_1 + 0x34) = 0xc;
          }
          else if (bFlag_4 == 0x7a) {
            *(uint32_t *)(param_1 + 0x34) = 6;
          }
          goto LAB_18067f0b8;
        }
        if (**(char **)(param_1 + 0x10) == 'l') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          fnPtr_6 = (char *)0x4;
        }
        else {
          fnPtr_6 = (char *)0x3;
        }
      }
      *(int *)(param_1 + 0x34) = (int)fnPtr_6;
    }
  }
LAB_18067f0b8:
  return CONCAT71((int7)((uint64_t)fnPtr_6 >> 8),1);
}

// func_0x18067f0c0
void func_0x18067f0c0(int64_t param_1)
{
  int *pInt_1;
  int64_t *pLong_2;
  uint16_t uVal_3;
  bool bFlag_4;
  char ch_5;
  int iVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  uint8_t uVal_9;
  uint uVal_10;
  uint64_t uVal_12;
  uint64_t uVal_13;
  uint16_t *pU64_14;
  int iVal_15;
  uint8_t auStack_88 [32];
  uint64_t local_68;
  uint64_t local_50;
  uint64_t local_48;
  uint8_t local_40 [8];
  uint64_t local_38;
  uint64_t uVal_11;
  
  local_48 = 0xfffffffffffffffe;
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  ch_5 = *(char *)(param_1 + 0x39);
  uVal_9 = 0x78;
  if (ch_5 < 'e') {
    if (ch_5 == 'd') {
LAB_18067f1a3:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_18067f1a7:
      ch_5 = func_0x180680ad0(param_1,0);
    }
    else if (ch_5 < 'T') {
      if (ch_5 == 'S') {
LAB_18067f1e9:
        ch_5 = func_0x18067f748(param_1);
      }
      else {
        if (ch_5 != 'A') {
          if (ch_5 == 'C') {
LAB_18067f15d:
            ch_5 = func_0x18067f5f8(param_1,0);
            goto LAB_18067f20b;
          }
          if (((ch_5 != 'E') && (ch_5 != 'F')) && (ch_5 != 'G')) goto LAB_18067f5ce;
        }
LAB_18067f134:
        ch_5 = func_0x18067f7e4(param_1);
      }
    }
    else {
      if (ch_5 == 'X') goto LAB_18067f201;
      if (ch_5 != 'Z') {
        if (ch_5 != 'a') {
          if (ch_5 != 'c') goto LAB_18067f5ce;
          goto LAB_18067f15d;
        }
        goto LAB_18067f134;
      }
      ch_5 = func_0x18067f6cc(param_1);
    }
  }
  else if (ch_5 < 'p') {
    if (ch_5 == 'o') {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      ch_5 = func_0x1806808cc(param_1,0);
    }
    else {
      if (((ch_5 == 'e') || (ch_5 == 'f')) || (ch_5 == 'g')) goto LAB_18067f134;
      if (ch_5 == 'i') goto LAB_18067f1a3;
      if (ch_5 != 'n') goto LAB_18067f5ce;
      ch_5 = func_0x18067fa40(param_1);
    }
  }
  else {
    if (ch_5 == 'p') {
      *(uint32_t *)(param_1 + 0x30) = 0x10;
      *(uint32_t *)(param_1 + 0x34) = 0xb;
LAB_18067f201:
      uVal_8 = 1;
    }
    else {
      if (ch_5 == 's') goto LAB_18067f1e9;
      if (ch_5 == 'u') goto LAB_18067f1a7;
      if (ch_5 != 'x') goto LAB_18067f5ce;
      uVal_8 = 0;
    }
    ch_5 = func_0x1806806c8(param_1,uVal_8);
  }
LAB_18067f20b:
  uVal_13 = 0;
  if ((ch_5 == '\0') || (*(char *)(param_1 + 0x38) != '\0')) goto LAB_18067f5ce;
  local_50 = local_50 & 0xffffffffff000000;
  uVal_10 = *(uint *)(param_1 + 0x28);
  uVal_12 = uVal_13;
  if ((uVal_10 >> 4 & 1) != 0) {
    if ((uVal_10 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        if ((uVal_10 >> 1 & 1) == 0) goto LAB_18067f267;
        local_50 = CONCAT71(local_50._1_7_,0x20);
      }
      else {
        local_50 = CONCAT71(local_50._1_7_,0x2b);
      }
    }
    else {
      local_50 = CONCAT71(local_50._1_7_,0x2d);
    }
    uVal_12 = 1;
  }
LAB_18067f267:
  ch_5 = *(char *)(param_1 + 0x39);
  if (((ch_5 + 0xa8U & 0xdf) != 0) || (bFlag_4 = true, (uVal_10 >> 5 & 1) == 0)) {
    bFlag_4 = false;
  }
  if ((bFlag_4) || ((ch_5 + 0xbfU & 0xdf) == 0)) {
    *(uint8_t *)((int64_t)&local_50 + uVal_12) = 0x30;
    if ((ch_5 == 'X') || (ch_5 == 'A')) {
      uVal_9 = 0x58;
    }
    *(uint8_t *)((int64_t)&local_50 + uVal_12 + 1) = uVal_9;
    uVal_12 = uVal_12 + 2;
  }
  iVal_15 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x48)) - (int)uVal_12;
  if (((uVal_10 & 0xc) == 0) && (uVal_8 = *(uint64_t *)(param_1 + 8), uVal_11 = uVal_13, 0 < iVal_15))
  {
    while ((((*(uint *)(*(int64_t *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
            (*(int64_t *)(*(int64_t *)(param_1 + 0x460) + 8) == 0)) ||
           (iVal_6 = func_0x18068b390(0x20,*(uint64_t *)(param_1 + 0x460),uVal_8), iVal_6 != -1))) {
      iVal_6 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVal_6 + 1;
      if ((iVal_6 == -2) ||
         (uVal_10 = (int)uVal_11 + 1, uVal_11 = (uint64_t)uVal_10, iVal_15 <= (int)uVal_10))
      goto LAB_18067f31c;
    }
    *(uint32_t *)(param_1 + 0x20) = 0xffffffff;
  }
LAB_18067f31c:
  pLong_2 = (int64_t *)(param_1 + 0x460);
  pInt_1 = (int *)(param_1 + 0x20);
  if (((*(uint *)(*pLong_2 + 0x14) >> 0xc & 1) == 0) || (*(int64_t *)(*pLong_2 + 8) != 0)) {
    local_68 = *(uint64_t *)(param_1 + 8);
    func_0x18067ea54(pLong_2,&local_50,uVal_12,pInt_1);
  }
  else {
    *pInt_1 = *pInt_1 + (int)uVal_12;
  }
  if ((((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0))
     && (uVal_8 = *(uint64_t *)(param_1 + 8), uVal_12 = uVal_13, 0 < iVal_15)) {
    while ((((*(uint *)(*pLong_2 + 0x14) >> 0xc & 1) != 0 && (*(int64_t *)(*pLong_2 + 8) == 0)) ||
           (iVal_6 = func_0x18068b390(0x30,*pLong_2,uVal_8), iVal_6 != -1))) {
      iVal_6 = *pInt_1;
      *pInt_1 = iVal_6 + 1;
      if ((iVal_6 == -2) ||
         (uVal_10 = (int)uVal_12 + 1, uVal_12 = (uint64_t)uVal_10, iVal_15 <= (int)uVal_10))
      goto LAB_18067f3c3;
    }
    *pInt_1 = -1;
  }
LAB_18067f3c3:
  if ((*(char *)(param_1 + 0x4c) == '\0') || (*(int *)(param_1 + 0x48) < 1)) {
    pLong_2 = (int64_t *)(param_1 + 0x460);
    if (((*(uint *)(*pLong_2 + 0x14) >> 0xc & 1) == 0) || (*(int64_t *)(*pLong_2 + 8) != 0)) {
      local_68 = *(uint64_t *)(param_1 + 8);
      func_0x18067ea54(pLong_2,*(uint64_t *)(param_1 + 0x40));
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
    }
  }
  else {
    lVal_7 = *(int64_t *)(param_1 + 8);
    if (*(char *)(lVal_7 + 0x28) == '\0') {
      func_0x18067e970(lVal_7);
    }
    pU64_14 = *(uint16_t **)(param_1 + 0x40);
    if (*(int *)(*(int64_t *)(lVal_7 + 0x18) + 0xc) == 0xfde9) {
      local_50 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        pInt_1 = (int *)(param_1 + 0x20);
        pLong_2 = (int64_t *)(param_1 + 0x460);
        uVal_12 = uVal_13;
        do {
          uVal_3 = *pU64_14;
          pU64_14 = pU64_14 + 1;
          lVal_7 = func_0x18069b254(local_40,uVal_3,&local_50,*(uint64_t *)(param_1 + 8));
          if (lVal_7 == -1) {
            *pInt_1 = -1;
            break;
          }
          if (((*(uint *)(*pLong_2 + 0x14) >> 0xc & 1) == 0) || (*(int64_t *)(*pLong_2 + 8) != 0)) {
            local_68 = *(uint64_t *)(param_1 + 8);
            func_0x18067ea54(pLong_2,local_40,lVal_7,pInt_1);
          }
          else {
            *pInt_1 = *pInt_1 + (int)lVal_7;
          }
          uVal_10 = (int)uVal_12 + 1;
          uVal_12 = (uint64_t)uVal_10;
        } while (uVal_10 != *(uint *)(param_1 + 0x48));
      }
    }
    else if (*(int *)(param_1 + 0x48) != 0) {
      pLong_2 = (int64_t *)(param_1 + 0x460);
      uVal_12 = uVal_13;
      do {
        local_50 = local_50 & 0xffffffff00000000;
        uVal_3 = *pU64_14;
        pU64_14 = pU64_14 + 1;
        local_68 = *(uint64_t *)(param_1 + 8);
        iVal_6 = func_0x18069ad34(&local_50,local_40,6,uVal_3);
        if (iVal_6 != 0) {
LAB_18067f511:
          *(uint32_t *)(param_1 + 0x20) = 0xffffffff;
          break;
        }
        if ((int)local_50 == 0) goto LAB_18067f511;
        if (((*(uint *)(*pLong_2 + 0x14) >> 0xc & 1) == 0) || (*(int64_t *)(*pLong_2 + 8) != 0)) {
          local_68 = *(uint64_t *)(param_1 + 8);
          func_0x18067ea54(pLong_2,local_40,local_50 & 0xffffffff,param_1 + 0x20);
        }
        else {
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + (int)local_50;
        }
        uVal_10 = (int)uVal_12 + 1;
        uVal_12 = (uint64_t)uVal_10;
      } while (uVal_10 != *(uint *)(param_1 + 0x48));
    }
  }
  if (((-1 < *(int *)(param_1 + 0x20)) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) &&
     (uVal_8 = *(uint64_t *)(param_1 + 8), 0 < iVal_15)) {
    while ((((*(uint *)(*(int64_t *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
            (*(int64_t *)(*(int64_t *)(param_1 + 0x460) + 8) == 0)) ||
           (iVal_6 = func_0x18068b390(0x20,*(uint64_t *)(param_1 + 0x460),uVal_8), iVal_6 != -1))) {
      iVal_6 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVal_6 + 1;
      if ((iVal_6 == -2) ||
         (uVal_10 = (int)uVal_13 + 1, uVal_13 = (uint64_t)uVal_10, iVal_15 <= (int)uVal_10))
      goto LAB_18067f5ce;
    }
    *(uint32_t *)(param_1 + 0x20) = 0xffffffff;
  }
LAB_18067f5ce:
  func_0x180673080(local_38 ^ (uint64_t)auStack_88);
  return;
}

// func_0x18067f5f8
uint64_t func_0x18067f5f8(int64_t param_1)
{
  uint16_t *pU64_1;
  uint8_t *pU64_2;
  int iVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  
  iVal_3 = *(int *)(param_1 + 0x34);
  if ((iVal_3 == 2) ||
     (((iVal_3 != 3 && (iVal_3 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    pU64_2 = *(uint8_t **)(param_1 + 0x18);
    pU64_5 = *(uint8_t **)(param_1 + 0x458);
    if (*(uint8_t **)(param_1 + 0x458) == (uint8_t *)0x0) {
      pU64_5 = (uint8_t *)(param_1 + 0x50);
    }
    *(uint8_t **)(param_1 + 0x18) = pU64_2 + 8;
    *pU64_5 = *pU64_2;
    *(uint32_t *)(param_1 + 0x48) = 1;
  }
  else {
    pU64_1 = *(uint16_t **)(param_1 + 0x18);
    *(uint16_t **)(param_1 + 0x18) = pU64_1 + 4;
    lVal_4 = *(int64_t *)(param_1 + 0x458);
    if (lVal_4 == 0) {
      lVal_4 = param_1 + 0x50;
      uVal_6 = 0x200;
    }
    else {
      uVal_6 = *(uint64_t *)(param_1 + 0x450) >> 1;
    }
    iVal_3 = func_0x18069ad34(param_1 + 0x48,lVal_4,uVal_6,*pU64_1,*(uint64_t *)(param_1 + 8));
    if (iVal_3 != 0) {
      *(uint8_t *)(param_1 + 0x38) = 1;
    }
  }
  lVal_4 = *(int64_t *)(param_1 + 0x458);
  if (*(int64_t *)(param_1 + 0x458) == 0) {
    lVal_4 = param_1 + 0x50;
  }
  *(int64_t *)(param_1 + 0x40) = lVal_4;
  return 1;
}

// func_0x18067f6cc
uint64_t func_0x18067f6cc(int64_t param_1)
{
  ushort uVal_1;
  int iVal_2;
  ushort **ptr2_U64_3;
  ushort *pU64_4;
  uint64_t uVal_5;
  bool bFlag_6;
  
  ptr2_U64_3 = *(ushort ***)(param_1 + 0x18);
  *(ushort ***)(param_1 + 0x18) = ptr2_U64_3 + 1;
  pU64_4 = *ptr2_U64_3;
  if ((pU64_4 == (ushort *)0x0) || (*(int64_t *)(pU64_4 + 4) == 0)) {
    uVal_5 = 6;
    *(char **)(param_1 + 0x40) = "(null)";
  }
  else {
    iVal_2 = *(int *)(param_1 + 0x34);
    if (iVal_2 == 2) {
LAB_18067f716:
      bFlag_6 = false;
    }
    else if ((iVal_2 == 3) || (iVal_2 == 0xc)) {
      bFlag_6 = true;
    }
    else {
      if (*(int *)(param_1 + 0x34) == 0xd) goto LAB_18067f716;
      bFlag_6 = (*(char *)(param_1 + 0x39) + 0x9dU & 0xef) != 0;
    }
    *(int64_t *)(param_1 + 0x40) = *(int64_t *)(pU64_4 + 4);
    uVal_1 = *pU64_4;
    uVal_5 = (uint64_t)uVal_1;
    if (bFlag_6) {
      *(uint8_t *)(param_1 + 0x4c) = 1;
      uVal_5 = (uint64_t)(uVal_1 >> 1);
      goto LAB_18067f742;
    }
  }
  *(uint8_t *)(param_1 + 0x4c) = 0;
LAB_18067f742:
  *(int *)(param_1 + 0x48) = (int)uVal_5;
  return CONCAT71((int7)(uVal_5 >> 8),1);
}

// func_0x18067f748
uint64_t func_0x18067f748(int64_t param_1)
{
  int iVal_1;
  wchar_t **ptr2_WStr_2;
  int iVal_3;
  uint32_t uVal_4;
  wchar_t *pWStr_5;
  
  ptr2_WStr_2 = *(wchar_t ***)(param_1 + 0x18);
  *(wchar_t ***)(param_1 + 0x18) = ptr2_WStr_2 + 1;
  pWStr_5 = *ptr2_WStr_2;
  iVal_3 = *(int *)(param_1 + 0x30);
  iVal_1 = *(int *)(param_1 + 0x34);
  if (iVal_3 == -1) {
    iVal_3 = 0x7fffffff;
  }
  *(wchar_t **)(param_1 + 0x40) = pWStr_5;
  if ((iVal_1 == 2) ||
     (((iVal_1 != 3 && (iVal_1 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    if (pWStr_5 == (wchar_t *)0x0) {
      *(char **)(param_1 + 0x40) = "(null)";
      pWStr_5 = (wchar_t *)"(null)";
    }
    uVal_4 = func_0x18068e3b0(pWStr_5,(int64_t)iVal_3);
  }
  else {
    if (pWStr_5 == (wchar_t *)0x0) {
      pWStr_5 = L"(null)";
      *(wchar_t **)(param_1 + 0x40) = L"(null)";
    }
    *(uint8_t *)(param_1 + 0x4c) = 1;
    uVal_4 = func_0x18068e1a0(pWStr_5,(int64_t)iVal_3);
  }
  *(uint32_t *)(param_1 + 0x48) = uVal_4;
  return 1;
}

// func_0x18067f7e4
uint64_t func_0x18067f7e4(uint64_t *param_1)
{
  byte bFlag_1;
  int64_t *pLong_2;
  char ch_3;
  int iVal_4;
  uint64_t *pU64_5;
  uint64_t uVal_6;
  char *fnPtr_7;
  byte *pU8_8;
  int64_t lVal_9;
  byte bFlag_10;
  uint64_t *pU64_11;
  byte *pU8_12;
  uint64_t uVal_13;
  bool bFlag_14;
  uint64_t local_res8;
  
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x10;
  iVal_4 = *(int *)(param_1 + 6);
  if (iVal_4 < 0) {
    iVal_4 = (-(uint)((*(char *)((int64_t)param_1 + 0x39) + 0xbfU & 0xdf) != 0) & 0xfffffff9) + 0xd;
    *(int *)(param_1 + 6) = iVal_4;
  }
  else if ((iVal_4 == 0) &&
          ((*(char *)((int64_t)param_1 + 0x39) == 'g' ||
           (*(char *)((int64_t)param_1 + 0x39) == 'G')))) {
    *(uint32_t *)(param_1 + 6) = 1;
    iVal_4 = 1;
  }
  ch_3 = func_0x180680620(param_1 + 10,(int64_t)(iVal_4 + 0x15d),param_1[1]);
  uVal_13 = 0x200;
  if (ch_3 == '\0') {
    if (param_1[0x8b] == 0) {
      iVal_4 = 0x200;
    }
    else {
      iVal_4 = (int)((uint64_t)param_1[0x8a] >> 1);
    }
    iVal_4 = iVal_4 + -0x15d;
    *(int *)(param_1 + 6) = iVal_4;
  }
  else {
    iVal_4 = *(int *)(param_1 + 6);
  }
  pU64_5 = (uint64_t *)param_1[0x8b];
  if ((uint64_t *)param_1[0x8b] == (uint64_t *)0x0) {
    pU64_5 = param_1 + 10;
  }
  param_1[8] = pU64_5;
  pU64_11 = (uint64_t *)param_1[3];
  param_1[3] = pU64_11 + 1;
  pU64_5 = (uint64_t *)param_1[0x8b];
  local_res8 = *pU64_11;
  if (pU64_5 == (uint64_t *)0x0) {
    pU64_11 = param_1 + 0x4a;
    pU64_5 = param_1 + 10;
    uVal_6 = 0x200;
  }
  else {
    pU64_11 = (uint64_t *)(((uint64_t)param_1[0x8a] >> 1) + (int64_t)pU64_5);
    uVal_6 = (uint64_t)param_1[0x8a] >> 1;
    uVal_13 = (uint64_t)param_1[0x8a] >> 1;
  }
  func_0x180699f3c(&local_res8,pU64_5,uVal_13,pU64_11,uVal_6,(int)*(char *)((int64_t)param_1 + 0x39),
                iVal_4,*param_1,1,param_1[1]);
  if (((*(uint *)(param_1 + 5) >> 5 & 1) != 0) && (*(int *)(param_1 + 6) == 0)) {
    lVal_9 = param_1[1];
    if (*(char *)(lVal_9 + 0x28) == '\0') {
      func_0x18067e970(lVal_9);
    }
    pU8_12 = (byte *)param_1[8];
    pLong_2 = *(int64_t **)(lVal_9 + 0x18);
    uVal_13 = (uint64_t)*pU8_12;
    if (*(char *)(uVal_13 + pLong_2[0x22]) != 'e') {
      do {
        pU8_12 = pU8_12 + 1;
        uVal_13 = (uint64_t)*pU8_12;
      } while ((*(byte *)(*pLong_2 + uVal_13 * 2) & 4) != 0);
    }
    bFlag_14 = *(char *)(uVal_13 + pLong_2[0x22]) == 'x';
    if (bFlag_14) {
      uVal_13 = (uint64_t)pU8_12[2];
    }
    pU8_8 = pU8_12 + 2;
    if (!bFlag_14) {
      pU8_8 = pU8_12;
    }
    *pU8_8 = **(byte **)pLong_2[0x1f];
    do {
      pU8_8 = pU8_8 + 1;
      bFlag_1 = *pU8_8;
      bFlag_10 = (byte)uVal_13;
      *pU8_8 = bFlag_10;
      uVal_13 = (uint64_t)bFlag_1;
    } while (bFlag_10 != 0);
  }
  if (((*(char *)((int64_t)param_1 + 0x39) + 0xb9U & 0xdf) == 0) &&
     ((*(uint *)(param_1 + 5) >> 5 & 1) == 0)) {
    if (*(char *)(param_1[1] + 0x28) == '\0') {
      func_0x18067e970(param_1[1]);
    }
    func_0x18067e9e8(param_1[8]);
  }
  fnPtr_7 = (char *)param_1[8];
  ch_3 = *fnPtr_7;
  if (ch_3 == '-') {
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x40;
    fnPtr_7 = fnPtr_7 + 1;
    param_1[8] = fnPtr_7;
    ch_3 = *fnPtr_7;
  }
  if (((byte)(ch_3 + 0xb7U) < 0x26) &&
     ((0x2100000021U >> ((uint64_t)(byte)(ch_3 + 0xb7U) & 0x3f) & 1) != 0)) {
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffff7;
    *(uint8_t *)((int64_t)param_1 + 0x39) = 0x73;
  }
  lVal_9 = -1;
  do {
    lVal_9 = lVal_9 + 1;
  } while (fnPtr_7[lVal_9] != '\0');
  *(int *)(param_1 + 9) = (int)lVal_9;
  return 1;
}

// func_0x18067fa40
uint64_t func_0x18067fa40(int64_t param_1)
{
  uint64_t **ptr2_U64_1;
  uint64_t *pU64_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  int iVal_6;
  
  ptr2_U64_1 = *(uint64_t ***)(param_1 + 0x18);
  *(uint64_t ***)(param_1 + 0x18) = ptr2_U64_1 + 1;
  pU64_2 = *ptr2_U64_1;
  uVal_4 = func_0x18069b4f8();
  if ((int)uVal_4 == 0) goto LAB_18067fa65;
  iVal_6 = *(int *)(param_1 + 0x34);
  if (iVal_6 < 6) {
    if (iVal_6 != 5) {
      if (iVal_6 != 0) {
        if (iVal_6 == 1) {
          uVal_5 = CONCAT71((int7)((uint64_t)uVal_4 >> 8),*(uint8_t *)(param_1 + 0x20));
          *(uint8_t *)pU64_2 = *(uint8_t *)(param_1 + 0x20);
          goto LAB_18067fade;
        }
        iVal_6 = iVal_6 + -2;
        if (iVal_6 == 0) {
          uVal_5 = (uint64_t)*(ushort *)(param_1 + 0x20);
          *(ushort *)pU64_2 = *(ushort *)(param_1 + 0x20);
          goto LAB_18067fade;
        }
        goto LAB_18067facd;
      }
LAB_18067faef:
      uVal_5 = (uint64_t)*(uint *)(param_1 + 0x20);
      *(uint *)pU64_2 = *(uint *)(param_1 + 0x20);
      goto LAB_18067fade;
    }
  }
  else if (((iVal_6 != 6) && (iVal_6 != 7)) && (iVal_6 = iVal_6 + -9, iVal_6 != 0)) {
LAB_18067facd:
    if (iVal_6 == 1) goto LAB_18067faef;
    if (iVal_6 != 2) {
LAB_18067fa65:
      lVal_3 = *(int64_t *)(param_1 + 8);
      *(uint8_t *)(lVal_3 + 0x30) = 1;
      *(uint32_t *)(lVal_3 + 0x2c) = 0x16;
      uVal_5 = func_0x180684b50(0,0,0,0,0,*(uint64_t *)(param_1 + 8));
      return uVal_5 & 0xffffffffffffff00;
    }
  }
  uVal_5 = (uint64_t)*(int *)(param_1 + 0x20);
  *pU64_2 = uVal_5;
LAB_18067fade:
  *(uint8_t *)(param_1 + 0x38) = 1;
  return CONCAT71((int7)(uVal_5 >> 8),1);
}

// func_0x18067faf8
void func_0x18067faf8(uint64_t *param_1)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint8_t uVal_3;
  uint8_t auStack_4b8 [32];
  uint64_t local_498;
  uint64_t local_490;
  uint64_t local_488;
  uint64_t local_480;
  uint32_t local_478;
  uint8_t local_474;
  uint32_t local_470;
  uint32_t local_46c;
  uint32_t local_468;
  uint16_t local_460;
  uint32_t local_450;
  uint8_t local_44c;
  uint8_t local_48 [16];
  uint64_t local_38;
  uint32_t local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_4b8;
  uVal_1 = param_1[1];
  uVal_2 = *(uint64_t *)*param_1;
  uVal_3 = func_0x180699cf0(uVal_2);
  local_480 = *(uint64_t *)param_1[4];
  local_38 = *(uint64_t *)*param_1;
  local_488 = *(uint64_t *)param_1[3];
  local_498 = *(uint64_t *)param_1[2];
  local_490 = param_1[1];
  local_478 = 0;
  local_470 = 0;
  local_46c = 0;
  local_468 = 0;
  local_460 = 0;
  local_450 = 0;
  local_30 = 0;
  local_474 = 0;
  local_44c = 0;
  local_48 = ZEXT816(0);
  func_0x18067eb24(&local_498);
  func_0x180695dd0(local_48._8_8_);
  local_48._8_8_ = 0;
  func_0x180699e04(uVal_3,uVal_2,uVal_1);
  func_0x180673080(local_28 ^ (uint64_t)auStack_4b8);
  return;
}

// __crt_stdio_output::string_output_adapter<char>::write_string
/* Library Function - Single Match
    public: void __cdecl __crt_stdio_output::string_output_adapter<char>::write_string(char const *
   __ptr64 const,int,int * __ptr64 const,class __crt_deferred_errno_cache & __ptr64)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    public: void __cdecl __crt_stdio_output::string_output_adapter<char>::write_string(char const *
   __ptr64 const,int,int * __ptr64 const,class __crt_deferred_errno_cache & __ptr64)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __thiscall __crt_stdio_output::string_output_adapter<char>:: write_string(string_output_adapter<char> *this,char *param_1,int param_2,int *param_3, __crt_deferred_errno_cache *param_4)
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  
  if (param_2 != 0) {
    uVal_4 = (uint64_t)param_2;
    pU64_1 = *(uint64_t **)this;
    if (pU64_1[2] == pU64_1[1]) {
      if (*(char *)(pU64_1 + 3) == '\0') {
        *param_3 = -1;
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
    else {
      uVal_2 = pU64_1[1] - pU64_1[2];
      uVal_3 = uVal_4;
      if (uVal_2 < uVal_4) {
        uVal_3 = uVal_2;
      }
      func_0x1806aa960(*pU64_1,param_1,uVal_3);
      **(int64_t **)this = **(int64_t **)this + uVal_3;
      *(int64_t *)(*(int64_t *)this + 0x10) = *(int64_t *)(*(int64_t *)this + 0x10) + uVal_3;
      if (*(char *)(*(int64_t *)this + 0x18) == '\0') {
        if (uVal_3 == uVal_4) {
          *param_3 = *param_3 + (int)uVal_3;
        }
        else {
          *param_3 = -1;
        }
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
  }
  return;
}

// func_0x18067fcb8
uint32_t func_0x18067fcb8(int64_t param_1)
{
  int *pInt_1;
  char ch_2;
  int iVal_3;
  byte bFlag_4;
  char *fnPtr_5;
  int64_t lVal_6;
  
  lVal_6 = *(int64_t *)(param_1 + 8);
  if (*(int64_t *)(param_1 + 0x460) == 0) {
    *(uint8_t *)(lVal_6 + 0x30) = 1;
    *(uint32_t *)(lVal_6 + 0x2c) = 0x16;
  }
  else {
    fnPtr_5 = *(char **)(param_1 + 0x10);
    if (fnPtr_5 != (char *)0x0) {
      iVal_3 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVal_3;
      do {
        if (iVal_3 == 2) {
          return *(uint32_t *)(param_1 + 0x20);
        }
        *(uint32_t *)(param_1 + 0x48) = 0;
        *(uint8_t *)(param_1 + 0x24) = 0;
        ch_2 = *fnPtr_5;
        while( true ) {
          fnPtr_5 = fnPtr_5 + 1;
          *(char **)(param_1 + 0x10) = fnPtr_5;
          *(char *)(param_1 + 0x39) = ch_2;
          if ((ch_2 == '\0') || (*(int *)(param_1 + 0x20) < 0)) break;
          bFlag_4 = 0;
          if ((byte)(ch_2 - 0x20U) < 0x5b) {
            bFlag_4 = (&DAT_1806e4771)[(uint64_t)((int)ch_2 - 0x20U & 0x7f) * 2];
          }
          bFlag_4 = (&DAT_1806e4770)[(uint64_t)((uint)*(byte *)(param_1 + 0x24) + (uint)bFlag_4 * 8 & 0x7f) * 2];
          *(byte *)(param_1 + 0x24) = bFlag_4;
          if (7 < bFlag_4) {
LAB_180680009:
            lVal_6 = *(int64_t *)(param_1 + 8);
            *(uint8_t *)(lVal_6 + 0x30) = 1;
            *(uint32_t *)(lVal_6 + 0x2c) = 0x16;
            lVal_6 = *(int64_t *)(param_1 + 8);
            goto LAB_18067fd13;
          }
          if (bFlag_4 == 0) {
            lVal_6 = *(int64_t *)(param_1 + 8);
            *(uint8_t *)(param_1 + 0x4c) = 0;
            if (*(char *)(lVal_6 + 0x28) == '\0') {
              func_0x18067e970(lVal_6);
            }
            ch_2 = *(char *)(param_1 + 0x39);
            if ((-2 < ch_2) &&
               ((*(ushort *)(**(int64_t **)(lVal_6 + 0x18) + (int64_t)ch_2 * 2) & 0x8000) != 0)) {
              lVal_6 = *(int64_t *)(param_1 + 0x460);
              if (*(int64_t *)(lVal_6 + 0x10) == *(int64_t *)(lVal_6 + 8)) {
                if (*(char *)(lVal_6 + 0x18) == '\0') {
                  *(uint32_t *)(param_1 + 0x20) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                }
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                *(int64_t *)(lVal_6 + 0x10) = *(int64_t *)(lVal_6 + 0x10) + 1;
                ***(char ***)(param_1 + 0x460) = ch_2;
                **(int64_t **)(param_1 + 0x460) = **(int64_t **)(param_1 + 0x460) + 1;
              }
              ch_2 = **(char **)(param_1 + 0x10);
              *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
              *(char *)(param_1 + 0x39) = ch_2;
              if (ch_2 == '\0') {
                lVal_6 = *(int64_t *)(param_1 + 8);
                *(uint8_t *)(lVal_6 + 0x30) = 1;
                *(uint32_t *)(lVal_6 + 0x2c) = 0x16;
                func_0x180684b50(0,0,0,0,0,*(uint64_t *)(param_1 + 8));
                goto LAB_180680009;
              }
            }
            lVal_6 = *(int64_t *)(param_1 + 0x460);
            if (*(int64_t *)(lVal_6 + 0x10) == *(int64_t *)(lVal_6 + 8)) {
              if (*(char *)(lVal_6 + 0x18) == '\0') {
                *(uint32_t *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              *(int64_t *)(lVal_6 + 0x10) = *(int64_t *)(lVal_6 + 0x10) + 1;
              ***(char ***)(param_1 + 0x460) = ch_2;
              **(int64_t **)(param_1 + 0x460) = **(int64_t **)(param_1 + 0x460) + 1;
            }
          }
          else if (bFlag_4 == 1) {
            *(uint64_t *)(param_1 + 0x28) = 0;
            *(uint8_t *)(param_1 + 0x38) = 0;
            *(uint32_t *)(param_1 + 0x30) = 0xffffffff;
            *(uint32_t *)(param_1 + 0x34) = 0;
            *(uint8_t *)(param_1 + 0x4c) = 0;
          }
          else if (bFlag_4 == 2) {
            if (ch_2 == ' ') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (ch_2 == '#') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (ch_2 == '+') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (ch_2 == '-') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (ch_2 == '0') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else {
            if (bFlag_4 == 3) {
              if (ch_2 == '*') {
                pInt_1 = *(int **)(param_1 + 0x18);
                *(int **)(param_1 + 0x18) = pInt_1 + 2;
                iVal_3 = *pInt_1;
                *(int *)(param_1 + 0x2c) = iVal_3;
                if (iVal_3 < 0) {
                  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                  *(int *)(param_1 + 0x2c) = -iVal_3;
                }
LAB_18067fe4f:
                ch_2 = '\x01';
              }
              else {
                lVal_6 = param_1 + 0x2c;
LAB_18067fdf9:
                ch_2 = func_0x18067eea8(param_1,lVal_6);
              }
            }
            else {
              if (bFlag_4 == 4) {
                *(uint32_t *)(param_1 + 0x30) = 0;
                goto LAB_18067ff90;
              }
              if (bFlag_4 == 5) {
                if (ch_2 == '*') {
                  pInt_1 = *(int **)(param_1 + 0x18);
                  *(int **)(param_1 + 0x18) = pInt_1 + 2;
                  iVal_3 = *pInt_1;
                  *(int *)(param_1 + 0x30) = iVal_3;
                  if (iVal_3 < 0) {
                    *(uint32_t *)(param_1 + 0x30) = 0xffffffff;
                  }
                  goto LAB_18067fe4f;
                }
                lVal_6 = param_1 + 0x30;
                goto LAB_18067fdf9;
              }
              if (bFlag_4 == 6) {
                ch_2 = func_0x180680028(param_1);
              }
              else {
                if (bFlag_4 != 7) {
                  return 0xffffffff;
                }
                ch_2 = func_0x1806801b0(param_1);
              }
            }
            if (ch_2 == '\0') {
              return 0xffffffff;
            }
          }
LAB_18067ff90:
          fnPtr_5 = *(char **)(param_1 + 0x10);
          ch_2 = *fnPtr_5;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
        iVal_3 = *(int *)(param_1 + 0x468);
      } while( true );
    }
    *(uint8_t *)(lVal_6 + 0x30) = 1;
    *(uint32_t *)(lVal_6 + 0x2c) = 0x16;
    lVal_6 = *(int64_t *)(param_1 + 8);
  }
LAB_18067fd13:
  func_0x180684b50(0,0,0,0,0,lVal_6);
  return 0xffffffff;
}

// func_0x180680028
uint64_t func_0x180680028(byte *param_1)
{
  char ch_1;
  int64_t lVal_2;
  char *fnPtr_3;
  byte bFlag_4;
  uint64_t in_RAX;
  undefined7 uVal_7;
  uint64_t uVal_5;
  char *fnPtr_6;
  
  bFlag_4 = param_1[0x39];
  uVal_7 = (undefined7)((uint64_t)in_RAX >> 8);
  fnPtr_6 = (char *)CONCAT71(uVal_7,bFlag_4);
  if (bFlag_4 == 0x46) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 7;
      uVal_5 = func_0x1806801b0();
      return uVal_5;
    }
  }
  else if (bFlag_4 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 8;
LAB_18068005a:
      lVal_2 = *(int64_t *)(param_1 + 8);
      *(uint8_t *)(lVal_2 + 0x30) = 1;
      *(uint32_t *)(lVal_2 + 0x2c) = 0x16;
      uVal_5 = func_0x180684b50(0,0,0,0,0,*(uint64_t *)(param_1 + 8));
      return uVal_5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_18068005a;
    if (bFlag_4 == 0x49) {
      fnPtr_3 = *(char **)(param_1 + 0x10);
      ch_1 = *fnPtr_3;
      fnPtr_6 = (char *)CONCAT71(uVal_7,ch_1);
      if ((ch_1 == '3') && (fnPtr_3[1] == '2')) {
        fnPtr_6 = fnPtr_3 + 2;
        *(uint32_t *)(param_1 + 0x34) = 10;
        *(char **)(param_1 + 0x10) = fnPtr_6;
      }
      else if (ch_1 == '6') {
        if (fnPtr_3[1] == '4') {
          fnPtr_6 = fnPtr_3 + 2;
          *(uint32_t *)(param_1 + 0x34) = 0xb;
          *(char **)(param_1 + 0x10) = fnPtr_6;
        }
      }
      else {
        bFlag_4 = ch_1 + 0xa8;
        fnPtr_6 = (char *)CONCAT71(uVal_7,bFlag_4);
        if ((bFlag_4 < 0x21) && ((0x120821001U >> ((uint64_t)bFlag_4 & 0x3f) & 1) != 0)) {
          *(uint32_t *)(param_1 + 0x34) = 9;
        }
      }
    }
    else if (bFlag_4 == 0x4c) {
      *(uint32_t *)(param_1 + 0x34) = 8;
    }
    else if (bFlag_4 == 0x54) {
      *(uint32_t *)(param_1 + 0x34) = 0xd;
    }
    else {
      if (bFlag_4 == 0x68) {
        if (**(char **)(param_1 + 0x10) == 'h') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          fnPtr_6 = (char *)0x1;
        }
        else {
          fnPtr_6 = (char *)0x2;
        }
      }
      else {
        if (bFlag_4 == 0x6a) {
          *(uint32_t *)(param_1 + 0x34) = 5;
          goto LAB_1806801a8;
        }
        if (bFlag_4 != 0x6c) {
          if (bFlag_4 == 0x74) {
            *(uint32_t *)(param_1 + 0x34) = 7;
          }
          else if (bFlag_4 == 0x77) {
            *(uint32_t *)(param_1 + 0x34) = 0xc;
          }
          else if (bFlag_4 == 0x7a) {
            *(uint32_t *)(param_1 + 0x34) = 6;
          }
          goto LAB_1806801a8;
        }
        if (**(char **)(param_1 + 0x10) == 'l') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          fnPtr_6 = (char *)0x4;
        }
        else {
          fnPtr_6 = (char *)0x3;
        }
      }
      *(int *)(param_1 + 0x34) = (int)fnPtr_6;
    }
  }
LAB_1806801a8:
  return CONCAT71((int7)((uint64_t)fnPtr_6 >> 8),1);
}

// func_0x1806801b0
void func_0x1806801b0(int64_t param_1)
{
  int *pInt_1;
  int64_t **this;
  uint16_t uVal_2;
  uint uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  bool bFlag_6;
  char ch_7;
  int iVal_8;
  uint64_t uVal_9;
  int iVal_10;
  uint8_t uVal_11;
  int64_t lVal_12;
  int iVal_13;
  uint16_t *pU64_14;
  uint8_t auStackY_88 [32];
  uint32_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStackY_88;
  ch_7 = *(char *)(param_1 + 0x39);
  uVal_11 = 0x78;
  if (ch_7 < 'e') {
    if (ch_7 == 'd') {
LAB_180680282:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_180680286:
      ch_7 = func_0x180680ad0(param_1,0);
    }
    else if (ch_7 < 'T') {
      if (ch_7 == 'S') {
LAB_1806802c5:
        ch_7 = func_0x18067f748();
      }
      else {
        if (ch_7 != 'A') {
          if (ch_7 == 'C') {
LAB_180680245:
            ch_7 = func_0x18067f5f8(param_1,0);
            goto LAB_1806802e1;
          }
          if (((ch_7 != 'E') && (ch_7 != 'F')) && (ch_7 != 'G')) goto LAB_1806805f8;
        }
LAB_18068021f:
        ch_7 = func_0x18067f7e4();
      }
    }
    else {
      if (ch_7 == 'X') goto LAB_1806802da;
      if (ch_7 != 'Z') {
        if (ch_7 != 'a') {
          if (ch_7 != 'c') goto LAB_1806805f8;
          goto LAB_180680245;
        }
        goto LAB_18068021f;
      }
      ch_7 = func_0x18067f6cc();
    }
  }
  else if (ch_7 < 'p') {
    if (ch_7 == 'o') {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      ch_7 = func_0x1806808cc(param_1,0);
    }
    else {
      if (((ch_7 == 'e') || (ch_7 == 'f')) || (ch_7 == 'g')) goto LAB_18068021f;
      if (ch_7 == 'i') goto LAB_180680282;
      if (ch_7 != 'n') goto LAB_1806805f8;
      ch_7 = func_0x18067fa40();
    }
  }
  else {
    if (ch_7 == 'p') {
      *(uint32_t *)(param_1 + 0x30) = 0x10;
      *(uint32_t *)(param_1 + 0x34) = 0xb;
LAB_1806802da:
      uVal_9 = CONCAT71((uint7)(uint3)(ch_7 >> 7),1);
    }
    else {
      if (ch_7 == 's') goto LAB_1806802c5;
      if (ch_7 == 'u') goto LAB_180680286;
      if (ch_7 != 'x') goto LAB_1806805f8;
      uVal_9 = 0;
    }
    ch_7 = func_0x1806806c8(param_1,uVal_9);
  }
LAB_1806802e1:
  if ((ch_7 == '\0') || (*(char *)(param_1 + 0x38) != '\0')) goto LAB_1806805f8;
  local_48 = local_48 & 0xff000000;
  lVal_12 = 0;
  uVal_3 = *(uint *)(param_1 + 0x28);
  if ((uVal_3 >> 4 & 1) != 0) {
    if ((uVal_3 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        if ((uVal_3 >> 1 & 1) == 0) goto LAB_18068033b;
        local_48 = CONCAT31(local_48._1_3_,0x20);
      }
      else {
        local_48 = CONCAT31(local_48._1_3_,0x2b);
      }
    }
    else {
      local_48 = CONCAT31(local_48._1_3_,0x2d);
    }
    lVal_12 = 1;
  }
LAB_18068033b:
  ch_7 = *(char *)(param_1 + 0x39);
  if (((ch_7 + 0xa8U & 0xdf) == 0) && ((uVal_3 >> 5 & 1) != 0)) {
    bFlag_6 = true;
  }
  else {
    bFlag_6 = false;
  }
  if ((bFlag_6) || ((ch_7 + 0xbfU & 0xdf) == 0)) {
    *(uint8_t *)((int64_t)&local_48 + lVal_12) = 0x30;
    if ((ch_7 == 'X') || (ch_7 == 'A')) {
      uVal_11 = 0x58;
    }
    *(uint8_t *)((int64_t)&local_48 + lVal_12 + 1) = uVal_11;
    lVal_12 = lVal_12 + 2;
  }
  iVal_10 = (*(int *)(param_1 + 0x2c) - (int)lVal_12) - *(int *)(param_1 + 0x48);
  if (((uVal_3 & 0xc) == 0) && (iVal_13 = 0, 0 < iVal_10)) {
    iVal_8 = *(int *)(param_1 + 0x20);
    do {
      lVal_4 = *(int64_t *)(param_1 + 0x460);
      if (*(int64_t *)(lVal_4 + 0x10) == *(int64_t *)(lVal_4 + 8)) {
        if (*(char *)(lVal_4 + 0x18) == '\0') {
          iVal_8 = -1;
        }
        else {
          iVal_8 = iVal_8 + 1;
        }
        *(int *)(param_1 + 0x20) = iVal_8;
      }
      else {
        *(int *)(param_1 + 0x20) = iVal_8 + 1;
        *(int64_t *)(lVal_4 + 0x10) = *(int64_t *)(lVal_4 + 0x10) + 1;
        *(uint8_t *)**(uint64_t **)(param_1 + 0x460) = 0x20;
        **(int64_t **)(param_1 + 0x460) = **(int64_t **)(param_1 + 0x460) + 1;
      }
      iVal_8 = *(int *)(param_1 + 0x20);
    } while ((iVal_8 != -1) && (iVal_13 = iVal_13 + 1, iVal_13 < iVal_10));
  }
  this = (int64_t **)(param_1 + 0x460);
  pInt_1 = (int *)(param_1 + 0x20);
  __crt_stdio_output::string_output_adapter<char>::write_string
            ((string_output_adapter<char> *)this,(char *)&local_48,(int)lVal_12,pInt_1,
             *(__crt_deferred_errno_cache **)(param_1 + 8));
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0 && (iVal_13 = 0, 0 < iVal_10)))) {
    iVal_8 = *pInt_1;
    do {
      pLong_5 = *this;
      if (pLong_5[2] == pLong_5[1]) {
        if (*(char *)(pLong_5 + 3) == '\0') {
          iVal_8 = -1;
        }
        else {
          iVal_8 = iVal_8 + 1;
        }
        *pInt_1 = iVal_8;
      }
      else {
        *pInt_1 = iVal_8 + 1;
        pLong_5[2] = pLong_5[2] + 1;
        *(uint8_t *)**this = 0x30;
        **this = **this + 1;
      }
      iVal_8 = *pInt_1;
    } while ((iVal_8 != -1) && (iVal_13 = iVal_13 + 1, iVal_13 < iVal_10));
  }
  if ((*(char *)(param_1 + 0x4c) == '\0') || (*(int *)(param_1 + 0x48) < 1)) {
    __crt_stdio_output::string_output_adapter<char>::write_string
              ((string_output_adapter<char> *)this,*(char **)(param_1 + 0x40),
               *(int *)(param_1 + 0x48),pInt_1,*(__crt_deferred_errno_cache **)(param_1 + 8));
  }
  else {
    lVal_12 = *(int64_t *)(param_1 + 8);
    if (*(char *)(lVal_12 + 0x28) == '\0') {
      func_0x18067e970(lVal_12);
    }
    pU64_14 = *(uint16_t **)(param_1 + 0x40);
    iVal_13 = 0;
    if (*(int *)(*(int64_t *)(lVal_12 + 0x18) + 0xc) == 0xfde9) {
      local_40 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          uVal_2 = *pU64_14;
          pU64_14 = pU64_14 + 1;
          lVal_12 = func_0x18069b254(&local_48,uVal_2,&local_40);
          if (lVal_12 == -1) goto LAB_180680506;
          __crt_stdio_output::string_output_adapter<char>::write_string
                    ((string_output_adapter<char> *)this,(char *)&local_48,(int)lVal_12,pInt_1,
                     *(__crt_deferred_errno_cache **)(param_1 + 8));
          iVal_13 = iVal_13 + 1;
        } while (iVal_13 != *(int *)(param_1 + 0x48));
      }
    }
    else if (*(int *)(param_1 + 0x48) != 0) {
      do {
        local_48 = 0;
        iVal_8 = func_0x18069ad34(&local_48,&local_40,6);
        if ((iVal_8 != 0) || (local_48 == 0)) goto LAB_180680506;
        __crt_stdio_output::string_output_adapter<char>::write_string
                  ((string_output_adapter<char> *)this,(char *)&local_40,local_48,pInt_1,
                   *(__crt_deferred_errno_cache **)(param_1 + 8));
        iVal_13 = iVal_13 + 1;
      } while (iVal_13 != *(int *)(param_1 + 0x48));
    }
  }
  goto LAB_180680584;
LAB_180680506:
  *pInt_1 = -1;
LAB_180680584:
  iVal_13 = *(int *)(param_1 + 0x20);
  if ((-1 < iVal_13) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    pInt_1 = (int *)(param_1 + 0x20);
    iVal_8 = 0;
    if (0 < iVal_10) {
      do {
        lVal_12 = *(int64_t *)(param_1 + 0x460);
        if (*(int64_t *)(lVal_12 + 0x10) == *(int64_t *)(lVal_12 + 8)) {
          if (*(char *)(lVal_12 + 0x18) == '\0') {
            iVal_13 = -1;
          }
          else {
            iVal_13 = iVal_13 + 1;
          }
          *pInt_1 = iVal_13;
        }
        else {
          *pInt_1 = iVal_13 + 1;
          *(int64_t *)(lVal_12 + 0x10) = *(int64_t *)(lVal_12 + 0x10) + 1;
          *(uint8_t *)**(uint64_t **)(param_1 + 0x460) = 0x20;
          **(int64_t **)(param_1 + 0x460) = **(int64_t **)(param_1 + 0x460) + 1;
        }
        iVal_13 = *pInt_1;
      } while ((iVal_13 != -1) && (iVal_8 = iVal_8 + 1, iVal_8 < iVal_10));
    }
  }
LAB_1806805f8:
  func_0x180673080(local_38 ^ (uint64_t)auStackY_88);
  return;
}

// func_0x180680620
bool func_0x180680620(int64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVal_1;
  bool bFlag_2;
  
  if (param_2 < 0x8000000000000000) {
    param_2 = param_2 * 2;
    if (((*(int64_t *)(param_1 + 0x408) == 0) && (param_2 < 0x401)) ||
       (param_2 <= *(uint64_t *)(param_1 + 0x400))) {
      bFlag_2 = true;
    }
    else {
      lVal_1 = _malloc_base(param_2);
      bFlag_2 = lVal_1 != 0;
      if (bFlag_2) {
        func_0x180695dd0(*(uint64_t *)(param_1 + 0x408));
        *(int64_t *)(param_1 + 0x408) = lVal_1;
        *(uint64_t *)(param_1 + 0x400) = param_2;
      }
      func_0x180695dd0(0);
    }
  }
  else {
    *(uint8_t *)(param_3 + 0x30) = 1;
    bFlag_2 = false;
    *(uint32_t *)(param_3 + 0x2c) = 0xc;
  }
  return bFlag_2;
}

// func_0x1806806c8
uint64_t func_0x1806806c8(int64_t param_1,uint8_t param_2)
{
  uint64_t *pU64_1;
  ushort *pU64_2;
  byte *pU8_3;
  uint *pU64_4;
  char *fnPtr_5;
  uint uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  int iVal_9;
  
  iVal_9 = *(int *)(param_1 + 0x34);
  if (iVal_9 < 6) {
    if (iVal_9 != 5) {
      if (iVal_9 != 0) {
        if (iVal_9 == 1) {
          uVal_6 = *(uint *)(param_1 + 0x28);
          lVal_8 = 1;
          pU8_3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pU8_3 + 8;
          if ((uVal_6 >> 4 & 1) == 0) {
            uVal_7 = (uint64_t)*pU8_3;
          }
          else {
            uVal_7 = (uint64_t)(char)*pU8_3;
          }
          goto LAB_180680746;
        }
        iVal_9 = iVal_9 + -2;
        if (iVal_9 == 0) {
          uVal_6 = *(uint *)(param_1 + 0x28);
          lVal_8 = 2;
          pU64_2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = pU64_2 + 4;
          if ((uVal_6 >> 4 & 1) == 0) {
            uVal_7 = (uint64_t)*pU64_2;
          }
          else {
            uVal_7 = (uint64_t)(short)*pU64_2;
          }
          goto LAB_180680746;
        }
        goto LAB_180680716;
      }
LAB_18068081b:
      uVal_6 = *(uint *)(param_1 + 0x28);
      lVal_8 = 4;
      pU64_4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = pU64_4 + 2;
      if ((uVal_6 >> 4 & 1) == 0) {
        uVal_7 = (uint64_t)*pU64_4;
      }
      else {
        uVal_7 = (uint64_t)(int)*pU64_4;
      }
      goto LAB_180680746;
    }
  }
  else if (((iVal_9 != 6) && (iVal_9 != 7)) && (iVal_9 = iVal_9 + -9, iVal_9 != 0)) {
LAB_180680716:
    if (iVal_9 == 1) goto LAB_18068081b;
    if (iVal_9 != 2) {
      lVal_8 = *(int64_t *)(param_1 + 8);
      *(uint8_t *)(lVal_8 + 0x30) = 1;
      *(uint32_t *)(lVal_8 + 0x2c) = 0x16;
      uVal_7 = func_0x180684b50(0,0,0,0,0,*(uint64_t *)(param_1 + 8));
      return uVal_7 & 0xffffffffffffff00;
    }
  }
  uVal_6 = *(uint *)(param_1 + 0x28);
  lVal_8 = 8;
  pU64_1 = *(uint64_t **)(param_1 + 0x18);
  *(uint64_t **)(param_1 + 0x18) = pU64_1 + 1;
  uVal_7 = *pU64_1;
LAB_180680746:
  if (((uVal_6 >> 4 & 1) != 0) && ((int64_t)uVal_7 < 0)) {
    uVal_7 = -uVal_7;
    uVal_6 = uVal_6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVal_6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(uint32_t *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVal_6 & 0xfffffff7;
    func_0x180680620(param_1 + 0x50,(int64_t)*(int *)(param_1 + 0x30),*(uint64_t *)(param_1 + 8));
  }
  if (uVal_7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(uint8_t *)(param_1 + 0x4c) = 0;
  if (lVal_8 == 8) {
    func_0x180680fc8(param_1,uVal_7);
  }
  else {
    func_0x18068104c(param_1,uVal_7 & 0xffffffff,param_2);
  }
  uVal_6 = *(uint *)(param_1 + 0x28) >> 7;
  fnPtr_5 = (char *)(uint64_t)uVal_6;
  if (((uVal_6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (fnPtr_5 = *(char **)(param_1 + 0x40), *fnPtr_5 != '0')))) {
    *(int64_t *)(param_1 + 0x40) = *(int64_t *)(param_1 + 0x40) + -1;
    **(uint8_t **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((uint64_t)fnPtr_5 >> 8),1);
}

// func_0x1806808cc
uint64_t func_0x1806808cc(int64_t param_1,uint8_t param_2)
{
  uint64_t *pU64_1;
  ushort *pU64_2;
  byte *pU8_3;
  uint *pU64_4;
  char *fnPtr_5;
  uint uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  int iVal_9;
  
  iVal_9 = *(int *)(param_1 + 0x34);
  if (iVal_9 < 6) {
    if (iVal_9 != 5) {
      if (iVal_9 != 0) {
        if (iVal_9 == 1) {
          uVal_6 = *(uint *)(param_1 + 0x28);
          lVal_8 = 1;
          pU8_3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pU8_3 + 8;
          if ((uVal_6 >> 4 & 1) == 0) {
            uVal_7 = (uint64_t)*pU8_3;
          }
          else {
            uVal_7 = (uint64_t)(char)*pU8_3;
          }
          goto LAB_18068094a;
        }
        iVal_9 = iVal_9 + -2;
        if (iVal_9 == 0) {
          uVal_6 = *(uint *)(param_1 + 0x28);
          lVal_8 = 2;
          pU64_2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = pU64_2 + 4;
          if ((uVal_6 >> 4 & 1) == 0) {
            uVal_7 = (uint64_t)*pU64_2;
          }
          else {
            uVal_7 = (uint64_t)(short)*pU64_2;
          }
          goto LAB_18068094a;
        }
        goto LAB_18068091a;
      }
LAB_180680a1f:
      uVal_6 = *(uint *)(param_1 + 0x28);
      lVal_8 = 4;
      pU64_4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = pU64_4 + 2;
      if ((uVal_6 >> 4 & 1) == 0) {
        uVal_7 = (uint64_t)*pU64_4;
      }
      else {
        uVal_7 = (uint64_t)(int)*pU64_4;
      }
      goto LAB_18068094a;
    }
  }
  else if (((iVal_9 != 6) && (iVal_9 != 7)) && (iVal_9 = iVal_9 + -9, iVal_9 != 0)) {
LAB_18068091a:
    if (iVal_9 == 1) goto LAB_180680a1f;
    if (iVal_9 != 2) {
      lVal_8 = *(int64_t *)(param_1 + 8);
      *(uint8_t *)(lVal_8 + 0x30) = 1;
      *(uint32_t *)(lVal_8 + 0x2c) = 0x16;
      uVal_7 = func_0x180684b50(0,0,0,0,0,*(uint64_t *)(param_1 + 8));
      return uVal_7 & 0xffffffffffffff00;
    }
  }
  uVal_6 = *(uint *)(param_1 + 0x28);
  lVal_8 = 8;
  pU64_1 = *(uint64_t **)(param_1 + 0x18);
  *(uint64_t **)(param_1 + 0x18) = pU64_1 + 1;
  uVal_7 = *pU64_1;
LAB_18068094a:
  if (((uVal_6 >> 4 & 1) != 0) && ((int64_t)uVal_7 < 0)) {
    uVal_7 = -uVal_7;
    uVal_6 = uVal_6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVal_6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(uint32_t *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVal_6 & 0xfffffff7;
    func_0x180680620(param_1 + 0x50,(int64_t)*(int *)(param_1 + 0x30),*(uint64_t *)(param_1 + 8));
  }
  if (uVal_7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(uint8_t *)(param_1 + 0x4c) = 0;
  if (lVal_8 == 8) {
    func_0x1806810d0(param_1,uVal_7);
  }
  else {
    func_0x180681140(param_1,uVal_7 & 0xffffffff,param_2);
  }
  uVal_6 = *(uint *)(param_1 + 0x28) >> 7;
  fnPtr_5 = (char *)(uint64_t)uVal_6;
  if (((uVal_6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (fnPtr_5 = *(char **)(param_1 + 0x40), *fnPtr_5 != '0')))) {
    *(int64_t *)(param_1 + 0x40) = *(int64_t *)(param_1 + 0x40) + -1;
    **(uint8_t **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((uint64_t)fnPtr_5 >> 8),1);
}

// func_0x180680ad0
uint64_t func_0x180680ad0(int64_t param_1,uint8_t param_2)
{
  uint64_t *pU64_1;
  ushort *pU64_2;
  byte *pU8_3;
  uint *pU64_4;
  char *fnPtr_5;
  uint uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  int iVal_9;
  
  iVal_9 = *(int *)(param_1 + 0x34);
  if (iVal_9 < 6) {
    if (iVal_9 != 5) {
      if (iVal_9 != 0) {
        if (iVal_9 == 1) {
          uVal_6 = *(uint *)(param_1 + 0x28);
          lVal_8 = 1;
          pU8_3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pU8_3 + 8;
          if ((uVal_6 >> 4 & 1) == 0) {
            uVal_7 = (uint64_t)*pU8_3;
          }
          else {
            uVal_7 = (uint64_t)(char)*pU8_3;
          }
          goto LAB_180680b4e;
        }
        iVal_9 = iVal_9 + -2;
        if (iVal_9 == 0) {
          uVal_6 = *(uint *)(param_1 + 0x28);
          lVal_8 = 2;
          pU64_2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = pU64_2 + 4;
          if ((uVal_6 >> 4 & 1) == 0) {
            uVal_7 = (uint64_t)*pU64_2;
          }
          else {
            uVal_7 = (uint64_t)(short)*pU64_2;
          }
          goto LAB_180680b4e;
        }
        goto LAB_180680b1e;
      }
LAB_180680c23:
      uVal_6 = *(uint *)(param_1 + 0x28);
      lVal_8 = 4;
      pU64_4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = pU64_4 + 2;
      if ((uVal_6 >> 4 & 1) == 0) {
        uVal_7 = (uint64_t)*pU64_4;
      }
      else {
        uVal_7 = (uint64_t)(int)*pU64_4;
      }
      goto LAB_180680b4e;
    }
  }
  else if (((iVal_9 != 6) && (iVal_9 != 7)) && (iVal_9 = iVal_9 + -9, iVal_9 != 0)) {
LAB_180680b1e:
    if (iVal_9 == 1) goto LAB_180680c23;
    if (iVal_9 != 2) {
      lVal_8 = *(int64_t *)(param_1 + 8);
      *(uint8_t *)(lVal_8 + 0x30) = 1;
      *(uint32_t *)(lVal_8 + 0x2c) = 0x16;
      uVal_7 = func_0x180684b50(0,0,0,0,0,*(uint64_t *)(param_1 + 8));
      return uVal_7 & 0xffffffffffffff00;
    }
  }
  uVal_6 = *(uint *)(param_1 + 0x28);
  lVal_8 = 8;
  pU64_1 = *(uint64_t **)(param_1 + 0x18);
  *(uint64_t **)(param_1 + 0x18) = pU64_1 + 1;
  uVal_7 = *pU64_1;
LAB_180680b4e:
  if (((uVal_6 >> 4 & 1) != 0) && ((int64_t)uVal_7 < 0)) {
    uVal_7 = -uVal_7;
    uVal_6 = uVal_6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVal_6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(uint32_t *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVal_6 & 0xfffffff7;
    func_0x180680620(param_1 + 0x50,(int64_t)*(int *)(param_1 + 0x30),*(uint64_t *)(param_1 + 8));
  }
  if (uVal_7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(uint8_t *)(param_1 + 0x4c) = 0;
  if (lVal_8 == 8) {
    func_0x1806811b0(param_1,uVal_7);
  }
  else {
    func_0x180681260(param_1,uVal_7 & 0xffffffff,param_2);
  }
  uVal_6 = *(uint *)(param_1 + 0x28) >> 7;
  fnPtr_5 = (char *)(uint64_t)uVal_6;
  if (((uVal_6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (fnPtr_5 = *(char **)(param_1 + 0x40), *fnPtr_5 != '0')))) {
    *(int64_t *)(param_1 + 0x40) = *(int64_t *)(param_1 + 0x40) + -1;
    **(uint8_t **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((uint64_t)fnPtr_5 >> 8),1);
}

// operator()<>
/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8>,class <lambda_3126a0d026c48c72336a1719c85146ae> &
   __ptr64,class <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> >(class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8> && __ptr64,class
   <lambda_3126a0d026c48c72336a1719c85146ae> & __ptr64,class
   <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_055ea3fc45cdc376d473b135b391c6de>,class <lambda_c695f53ca71df4e62c0528096d5d0bf6> &
   __ptr64,class <lambda_872dedf902327e54f4e2de7ca48e001f> >(class
   <lambda_055ea3fc45cdc376d473b135b391c6de> && __ptr64,class
   <lambda_c695f53ca71df4e62c0528096d5d0bf6> & __ptr64,class
   <lambda_872dedf902327e54f4e2de7ca48e001f> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
   __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
   <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
   <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
   __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
   <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
   <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
     36 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8>,class <lambda_3126a0d026c48c72336a1719c85146ae> &
   __ptr64,class <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> >(class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8> && __ptr64,class
   <lambda_3126a0d026c48c72336a1719c85146ae> & __ptr64,class
   <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_055ea3fc45cdc376d473b135b391c6de>,class <lambda_c695f53ca71df4e62c0528096d5d0bf6> &
   __ptr64,class <lambda_872dedf902327e54f4e2de7ca48e001f> >(class
   <lambda_055ea3fc45cdc376d473b135b391c6de> && __ptr64,class
   <lambda_c695f53ca71df4e62c0528096d5d0bf6> & __ptr64,class
   <lambda_872dedf902327e54f4e2de7ca48e001f> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
   __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
   <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
   <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
   __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
   <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
   <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
     36 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t
operator()<>(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t *param_4)
{
  uint32_t uVal_1;
  
  func_0x18067e324(*param_2);
  uVal_1 = func_0x18067faf8(param_3);
  func_0x18067e330(*param_4);
  return uVal_1;
}

// func_0x180680d14
uint func_0x180680d14(int64_t param_1,char **param_2,uint param_3,uint param_4)
{
  char ch_1;
  char *fnPtr_2;
  char **ptr2_Char_3;
  int iVal_4;
  uint uVal_5;
  uint32_t *pU64_6;
  uint64_t uVal_7;
  uint uVal_8;
  char *fnPtr_9;
  uint64_t uVal_10;
  char ch_11;
  uint uVal_12;
  
  fnPtr_2 = *param_2;
  uVal_7 = (uint64_t)param_3;
  if (fnPtr_2 == (char *)0x0) {
    pU64_6 = (uint32_t *)func_0x1806823dc();
    *pU64_6 = 0x16;
    func_0x180684970();
LAB_180680d85:
    if ((char **)param_2[1] != (char **)0x0) {
      *(char **)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(uint8_t *)(param_1 + 0x30) = 1;
    *(uint32_t *)(param_1 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_1);
    goto LAB_180680d85;
  }
  ch_11 = *fnPtr_2;
  fnPtr_9 = fnPtr_2 + 1;
  param_4 = param_4 & 0xff;
  *param_2 = fnPtr_9;
  uVal_12 = param_4 | 2;
  if ((ch_11 == '-') || (uVal_12 = param_4, ch_11 == '+')) {
    param_4 = uVal_12;
    ch_11 = *fnPtr_9;
    fnPtr_9 = fnPtr_2 + 2;
    *param_2 = fnPtr_9;
  }
  if ((param_3 & 0xffffffef) == 0) {
    if ((byte)(ch_11 - 0x30U) < 10) {
      iVal_4 = ch_11 + -0x30;
LAB_180680e0b:
      if (iVal_4 != 0) goto LAB_180680e59;
      ch_1 = *fnPtr_9;
      *param_2 = fnPtr_9 + 1;
      if ((ch_1 + 0xa8U & 0xdf) != 0) {
        *param_2 = fnPtr_9;
        uVal_7 = 8;
        if (param_3 != 0) {
          uVal_7 = (uint64_t)param_3;
        }
        if ((ch_1 != '\0') && (*fnPtr_9 != ch_1)) {
          pU64_6 = (uint32_t *)func_0x1806823dc();
          *pU64_6 = 0x16;
          func_0x180684970();
        }
        goto LAB_180680e65;
      }
      ch_11 = fnPtr_9[1];
      *param_2 = fnPtr_9 + 2;
      uVal_7 = 0x10;
    }
    else {
      if ((byte)(ch_11 + 0x9fU) < 0x1a) {
        iVal_4 = ch_11 + -0x57;
        goto LAB_180680e0b;
      }
      if ((byte)(ch_11 + 0xbfU) < 0x1a) {
        iVal_4 = ch_11 + -0x37;
        goto LAB_180680e0b;
      }
LAB_180680e59:
      uVal_7 = 10;
    }
    if (param_3 != 0) {
      uVal_7 = (uint64_t)param_3;
    }
  }
LAB_180680e65:
  fnPtr_9 = *param_2;
  uVal_10 = 0xffffffff % uVal_7;
  uVal_12 = 0;
  while( true ) {
    if ((byte)(ch_11 - 0x30U) < 10) {
      uVal_8 = (int)ch_11 - 0x30;
    }
    else if ((byte)(ch_11 + 0x9fU) < 0x1a) {
      uVal_8 = (int)ch_11 - 0x57;
    }
    else if ((byte)(ch_11 + 0xbfU) < 0x1a) {
      uVal_8 = (int)ch_11 - 0x37;
    }
    else {
      uVal_8 = 0xffffffff;
    }
    if ((uint)uVal_7 <= uVal_8) break;
    ch_11 = *fnPtr_9;
    uVal_5 = uVal_12 * (uint)uVal_7;
    uVal_8 = uVal_5 + uVal_8;
    uVal_10 = (uint64_t)uVal_8;
    param_4 = param_4 | (uint)(uVal_8 < uVal_5 || (uint)(0xffffffff / uVal_7) < uVal_12) << 2 | 8;
    fnPtr_9 = fnPtr_9 + 1;
    *param_2 = fnPtr_9;
    uVal_12 = uVal_8;
  }
  *param_2 = fnPtr_9 + -1;
  if ((ch_11 != '\0') && (fnPtr_9[-1] != ch_11)) {
    pU64_6 = (uint32_t *)func_0x1806823dc(uVal_8,uVal_10);
    *pU64_6 = 0x16;
    func_0x180684970();
  }
  if ((param_4 & 8) == 0) {
    *param_2 = fnPtr_2;
    if ((char **)param_2[1] == (char **)0x0) {
      return 0;
    }
    *(char **)param_2[1] = fnPtr_2;
    return 0;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 1) == 0) {
      if ((param_4 & 2) == 0) goto LAB_180680f99;
LAB_180680f96:
      uVal_12 = -uVal_12;
      goto LAB_180680f99;
    }
    if ((param_4 & 2) == 0) {
      if (uVal_12 < 0x80000000) goto LAB_180680f99;
    }
    else if (uVal_12 < 0x80000001) goto LAB_180680f96;
    uVal_8 = 1;
    uVal_12 = param_4;
  }
  else {
    uVal_12 = 1;
    uVal_8 = param_4;
  }
  *(uint8_t *)(param_1 + 0x30) = 1;
  *(uint32_t *)(param_1 + 0x2c) = 0x22;
  if ((uVal_12 & uVal_8) != 0) {
    ptr2_Char_3 = (char **)param_2[1];
    if ((param_4 & 2) == 0) {
      if (ptr2_Char_3 != (char **)0x0) {
        *ptr2_Char_3 = *param_2;
      }
      return 0x7fffffff;
    }
    if (ptr2_Char_3 != (char **)0x0) {
      *ptr2_Char_3 = *param_2;
    }
    return 0x80000000;
  }
  uVal_12 = 0xffffffff;
LAB_180680f99:
  if ((char **)param_2[1] != (char **)0x0) {
    *(char **)param_2[1] = *param_2;
    return uVal_12;
  }
  return uVal_12;
}

// func_0x180680fc8
void func_0x180680fc8(int64_t param_1,uint64_t param_2,byte param_3)
{
  byte bFlag_1;
  uint64_t uVal_2;
  byte *pU8_3;
  byte *pU8_4;
  int64_t lVal_5;
  
  lVal_5 = *(int64_t *)(param_1 + 0x458);
  if (lVal_5 == 0) {
    uVal_2 = 0x200;
    lVal_5 = param_1 + 0x50;
  }
  else {
    uVal_2 = *(uint64_t *)(param_1 + 0x450) >> 1;
  }
  pU8_3 = (byte *)(lVal_5 + -1 + uVal_2);
  *(byte **)(param_1 + 0x40) = pU8_3;
  pU8_4 = pU8_3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    bFlag_1 = (byte)param_2;
    param_2 = param_2 >> 4;
    bFlag_1 = (bFlag_1 & 0xf) + 0x30;
    if (0x39 < bFlag_1) {
      bFlag_1 = (param_3 ^ 1) * ' ' + '\a' + bFlag_1;
    }
    *pU8_4 = bFlag_1;
    *(int64_t *)(param_1 + 0x40) = *(int64_t *)(param_1 + 0x40) + -1;
    pU8_4 = *(byte **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pU8_3 - *(int *)(param_1 + 0x40);
  *(byte **)(param_1 + 0x40) = pU8_4 + 1;
  return;
}

// func_0x18068104c
void func_0x18068104c(int64_t param_1,uint param_2,byte param_3)
{
  byte bFlag_1;
  uint64_t uVal_2;
  byte *pU8_3;
  byte *pU8_4;
  int64_t lVal_5;
  
  lVal_5 = *(int64_t *)(param_1 + 0x458);
  if (lVal_5 == 0) {
    uVal_2 = 0x200;
    lVal_5 = param_1 + 0x50;
  }
  else {
    uVal_2 = *(uint64_t *)(param_1 + 0x450) >> 1;
  }
  pU8_3 = (byte *)(lVal_5 + -1 + uVal_2);
  *(byte **)(param_1 + 0x40) = pU8_3;
  pU8_4 = pU8_3;
  while( true ) {
    if ((*(int *)(param_1 + 0x30) < 1) && (param_2 == 0)) break;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    bFlag_1 = (byte)param_2;
    param_2 = param_2 >> 4;
    bFlag_1 = (bFlag_1 & 0xf) + 0x30;
    if (0x39 < bFlag_1) {
      bFlag_1 = (param_3 ^ 1) * ' ' + '\a' + bFlag_1;
    }
    *pU8_4 = bFlag_1;
    *(int64_t *)(param_1 + 0x40) = *(int64_t *)(param_1 + 0x40) + -1;
    pU8_4 = *(byte **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pU8_3 - *(int *)(param_1 + 0x40);
  *(byte **)(param_1 + 0x40) = pU8_4 + 1;
  return;
}

// func_0x1806810d0
void func_0x1806810d0(int64_t param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  char *fnPtr_2;
  int64_t lVal_3;
  char *fnPtr_4;
  
  lVal_3 = *(int64_t *)(param_1 + 0x458);
  if (lVal_3 == 0) {
    uVal_1 = 0x200;
    lVal_3 = param_1 + 0x50;
  }
  else {
    uVal_1 = *(uint64_t *)(param_1 + 0x450) >> 1;
  }
  fnPtr_2 = (char *)(lVal_3 + -1 + uVal_1);
  *(char **)(param_1 + 0x40) = fnPtr_2;
  fnPtr_4 = fnPtr_2;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *fnPtr_4 = ((byte)param_2 & 7) + 0x30;
    *(int64_t *)(param_1 + 0x40) = *(int64_t *)(param_1 + 0x40) + -1;
    fnPtr_4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)fnPtr_2 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = fnPtr_4 + 1;
  return;
}

// func_0x180681140
void func_0x180681140(int64_t param_1,uint param_2)
{
  byte bFlag_1;
  uint64_t uVal_2;
  char *fnPtr_3;
  int64_t lVal_4;
  char *fnPtr_5;
  
  lVal_4 = *(int64_t *)(param_1 + 0x458);
  if (lVal_4 == 0) {
    uVal_2 = 0x200;
    lVal_4 = param_1 + 0x50;
  }
  else {
    uVal_2 = *(uint64_t *)(param_1 + 0x450) >> 1;
  }
  fnPtr_3 = (char *)(lVal_4 + -1 + uVal_2);
  *(char **)(param_1 + 0x40) = fnPtr_3;
  fnPtr_5 = fnPtr_3;
  while( true ) {
    if ((*(int *)(param_1 + 0x30) < 1) && (param_2 == 0)) break;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    bFlag_1 = (byte)param_2;
    param_2 = param_2 >> 3;
    *fnPtr_5 = (bFlag_1 & 7) + 0x30;
    *(int64_t *)(param_1 + 0x40) = *(int64_t *)(param_1 + 0x40) + -1;
    fnPtr_5 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)fnPtr_3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = fnPtr_5 + 1;
  return;
}

// func_0x1806811b0
void func_0x1806811b0(int64_t param_1,uint64_t param_2,byte param_3)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  char *fnPtr_3;
  char *fnPtr_4;
  char ch_5;
  
  lVal_2 = *(int64_t *)(param_1 + 0x458);
  if (lVal_2 == 0) {
    uVal_1 = 0x200;
    lVal_2 = param_1 + 0x50;
  }
  else {
    uVal_1 = *(uint64_t *)(param_1 + 0x450) >> 1;
  }
  fnPtr_3 = (char *)(lVal_2 + -1 + uVal_1);
  *(char **)(param_1 + 0x40) = fnPtr_3;
  fnPtr_4 = fnPtr_3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    ch_5 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
    if ('9' < ch_5) {
      ch_5 = (param_3 ^ 1) * ' ' + '\a' + ch_5;
    }
    *fnPtr_4 = ch_5;
    *(int64_t *)(param_1 + 0x40) = *(int64_t *)(param_1 + 0x40) + -1;
    fnPtr_4 = *(char **)(param_1 + 0x40);
    param_2 = param_2 / 10;
  }
  *(int *)(param_1 + 0x48) = (int)fnPtr_3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = fnPtr_4 + 1;
  return;
}

// func_0x180681260
void func_0x180681260(int64_t param_1,uint param_2,byte param_3)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  char *fnPtr_3;
  char *fnPtr_4;
  char ch_5;
  
  lVal_2 = *(int64_t *)(param_1 + 0x458);
  if (lVal_2 == 0) {
    uVal_1 = 0x200;
    lVal_2 = param_1 + 0x50;
  }
  else {
    uVal_1 = *(uint64_t *)(param_1 + 0x450) >> 1;
  }
  fnPtr_3 = (char *)(lVal_2 + -1 + uVal_1);
  *(char **)(param_1 + 0x40) = fnPtr_3;
  fnPtr_4 = fnPtr_3;
  uVal_1 = (uint64_t)param_2;
  while ((0 < *(int *)(param_1 + 0x30) || ((int)uVal_1 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    ch_5 = (char)uVal_1 + (char)(uVal_1 / 10) * -10 + '0';
    if ('9' < ch_5) {
      ch_5 = (param_3 ^ 1) * ' ' + '\a' + ch_5;
    }
    *fnPtr_4 = ch_5;
    *(int64_t *)(param_1 + 0x40) = *(int64_t *)(param_1 + 0x40) + -1;
    fnPtr_4 = *(char **)(param_1 + 0x40);
    uVal_1 = uVal_1 / 10;
  }
  *(int *)(param_1 + 0x48) = (int)fnPtr_3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = fnPtr_4 + 1;
  return;
}

// __strncnt
/* Library Function - Single Match
    __strncnt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __strncnt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
size_t __cdecl __strncnt(char *_String,size_t _Cnt)
{
  char ch_1;
  size_t sz_2;
  
  sz_2 = 0;
  ch_1 = *_String;
  while ((ch_1 != '\0' && (sz_2 != _Cnt))) {
    sz_2 = sz_2 + 1;
    ch_1 = _String[sz_2];
  }
  return sz_2;
}

// func_0x180681328
HANDLE func_0x180681328(LPSECURITY_ATTRIBUTES param_1,uint64_t param_2,int64_t param_3, uint64_t param_4,DWORD param_5,DWORD *param_6)
{
  DWORD DVar1;
  uint32_t *pU64_2;
  LPVOID lpParameter;
  HANDLE pVoid_3;
  DWORD local_res18 [2];
  
  if (param_3 == 0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    pVoid_3 = (HANDLE)0x0;
  }
  else {
    lpParameter = (LPVOID)func_0x180681414(param_3,param_4);
    pVoid_3 = (HANDLE)0x0;
    if (lpParameter != (LPVOID)0x0) {
      local_res18[0] = 0;
      pVoid_3 = CreateThread(param_1,param_2 & 0xffffffff,(LPTHREAD_START_ROUTINE)&LAB_180681478,
                            lpParameter,param_5,local_res18);
      if (pVoid_3 == (HANDLE)0x0) {
        DVar1 = GetLastError();
        func_0x180682424(DVar1);
        if (*(HANDLE *)((int64_t)lpParameter + 0x10) != (HANDLE)0x0) {
          CloseHandle(*(HANDLE *)((int64_t)lpParameter + 0x10));
        }
        if (*(HMODULE *)((int64_t)lpParameter + 0x18) != (HMODULE)0x0) {
          FreeLibrary(*(HMODULE *)((int64_t)lpParameter + 0x18));
        }
        func_0x180695dd0(lpParameter);
        pVoid_3 = (HANDLE)0x0;
      }
      else if (param_6 != (DWORD *)0x0) {
        *param_6 = local_res18[0];
      }
    }
  }
  return pVoid_3;
}

// func_0x180681408
void func_0x180681408(uint param_1)
{
  func_ptr_t fnPtr_1;
  
  common_end_thread(param_1);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180681414
LPCWSTR * func_0x180681414(LPCWSTR param_1,LPCWSTR param_2)
{
  LPCWSTR *ptr2_WStr_1;
  
  ptr2_WStr_1 = (LPCWSTR *)_calloc_base(1);
  func_0x180695dd0(0);
  if (ptr2_WStr_1 == (LPCWSTR *)0x0) {
    ptr2_WStr_1 = (LPCWSTR *)0x0;
  }
  else {
    *ptr2_WStr_1 = param_1;
    ptr2_WStr_1[1] = param_2;
    GetModuleHandleExW(4,param_1,(HMODULE *)(ptr2_WStr_1 + 3));
  }
  return ptr2_WStr_1;
}

// common_end_thread
/* Library Function - Single Match
    void __cdecl common_end_thread(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    void __cdecl common_end_thread(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __cdecl common_end_thread(uint param_1)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x1806960c8();
  if ((lVal_1 != 0) && (lVal_1 = *(int64_t *)(lVal_1 + 0x3c0), lVal_1 != 0)) {
    if (*(char *)(lVal_1 + 0x20) != '\0') {
      func_0x1806971a0();
    }
    if ((int64_t)*(HANDLE *)(lVal_1 + 0x10) - 1U < 0xfffffffffffffffe) {
      CloseHandle(*(HANDLE *)(lVal_1 + 0x10));
    }
    if ((uint8_t *)((int64_t)&(*(HMODULE *)(lVal_1 + 0x18))[-1].unused + 3U) <
        (uint8_t *)0xfffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
      FreeLibraryAndExitThread(*(HMODULE *)(lVal_1 + 0x18),param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(param_1);
}

// func_0x180681550
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
func_ptr_t func_0x180681550(uint64_t param_1)
{
  int iVal_1;
  func_ptr_t fnPtr_2;
  
  fnPtr_2 = (func_ptr_t )func_0x1806815a0();
  if (fnPtr_2 != (func_ptr_t )0x0) {
    iVal_1 = (*fnPtr_2)(param_1);
    fnPtr_2 = (func_ptr_t )(uint64_t)(iVal_1 != 0);
  }
  return fnPtr_2;
}

// func_0x180681590
void func_0x180681590(uint64_t param_1)
{
  DAT_1808425e0 = param_1;
  return;
}

// func_0x1806815a0
uint64_t func_0x1806815a0(void)
{
  byte bFlag_1;
  uint64_t uVal_2;
  
  FID_conflict___acrt_lock(0);
  bFlag_1 = (byte)DAT_18083cf40 & 0x3f;
  uVal_2 = DAT_1808425e0 ^ DAT_18083cf40;
  FID_conflict___acrt_lock(0);
  return uVal_2 >> bFlag_1 | uVal_2 << 0x40 - bFlag_1;
}

// func_0x18068164c
uint32_t func_0x18068164c(void)
{
  return DAT_1808425f0;
}

// func_0x180681654
void func_0x180681654(uint64_t param_1)
{
  func_0x18068170c(param_1,2);
  return;
}

// func_0x180681660
void func_0x180681660(void)
{
  func_0x18068170c(0,0,1);
  return;
}

// func_0x180681670
void func_0x180681670(uint64_t param_1)
{
  DAT_1808425e8 = param_1;
  return;
}

// func_0x180681678
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x180681678(uint32_t param_1)
{
  BOOL BVar1;
  FARPROC pFn_2;
  HMODULE local_res10 [3];
  uint32_t extraout_var;
  
  local_res10[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",local_res10);
  if (BVar1 != 0) {
    pFn_2 = GetProcAddress(local_res10[0],"CorExitProcess");
    if (CONCAT44(extraout_var,(int)pFn_2) != 0) {
      (*(func_ptr_t )CONCAT44(extraout_var,(int)pFn_2))(param_1);
    }
  }
  if (local_res10[0] != (HMODULE)0x0) {
    FreeLibrary(local_res10[0]);
  }
  return;
}

// func_0x1806816dc
void func_0x1806816dc(UINT param_1,char param_2)
{
  HANDLE hProcess;
  
  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  func_0x180681678(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

// func_0x18068170c
void func_0x18068170c(uint32_t param_1,uint32_t param_2,int param_3)
{
  func_ptr_t fnPtr_1;
  char ch_2;
  int iVal_3;
  HMODULE pHnd_4;
  int *pInt_5;
  bool bFlag_6;
  uint32_t local_res10 [2];
  int local_res18 [2];
  uint8_t local_res20 [8];
  uint8_t local_38 [4];
  uint32_t local_34;
  uint32_t local_30 [2];
  uint64_t local_28;
  uint32_t *local_20;
  int *local_18;
  uint8_t *local_10;
  
  local_28 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    pHnd_4 = GetModuleHandleW((LPCWSTR)0x0);
    if ((((pHnd_4 != (HMODULE)0x0) && (*(short *)&pHnd_4->unused == 0x5a4d)) &&
        (pInt_5 = (int *)((int64_t)&pHnd_4->unused + (int64_t)pHnd_4[0xf].unused),
        *pInt_5 == 0x4550)) &&
       (((*(short *)(pInt_5 + 6) == 0x20b && (0xe < (uint)pInt_5[0x21])) && (pInt_5[0x3e] != 0)))) {
      func_0x180681678(param_1);
    }
  }
  local_res20[0] = 0;
  local_20 = local_res10;
  local_18 = local_res18;
  local_10 = local_res20;
  local_34 = 2;
  local_30[0] = 2;
  operator()<>(local_38,local_30,&local_20,&local_34);
  if (local_res18[0] == 0) {
    iVal_3 = func_0x18069b578();
    if (iVal_3 == 1) {
      bFlag_6 = false;
    }
    else {
      ch_2 = func_0x18069b640();
      bFlag_6 = ch_2 == '\0';
    }
    if (local_res18[0] == 0) {
      func_0x1806816dc(param_1,bFlag_6);
      fnPtr_1 = (func_ptr_t )swi(3);
      (*fnPtr_1)();
      return;
    }
  }
  return;
}

// func_0x1806817f0
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x1806817f0(int **param_1)
{
  byte bFlag_1;
  uint8_t *pU64_2;
  
  if (DAT_1808425f4 != '\0') {
    return;
  }
  LOCK();
  DAT_1808425f0 = 1;
  UNLOCK();
  if (**param_1 == 0) {
    if (DAT_1808425e8 != DAT_18083cf40) {
      bFlag_1 = (byte)DAT_18083cf40 & 0x3f;
      (*(func_ptr_t )((DAT_18083cf40 ^ DAT_1808425e8) >> bFlag_1 |
                (DAT_18083cf40 ^ DAT_1808425e8) << 0x40 - bFlag_1))(0,0,0);
    }
    pU64_2 = &DAT_180842708;
  }
  else {
    if (**param_1 != 1) goto LAB_18068185f;
    pU64_2 = &DAT_180842720;
  }
  func_0x180682034(pU64_2);
LAB_18068185f:
  if (**param_1 == 0) {
    func_0x1806848fc(&DAT_180765e00,&DAT_180765e20);
  }
  func_0x1806848fc(&DAT_180765e28,&DAT_180765e30);
  if (*param_1[1] == 0) {
    DAT_1808425f4 = '\x01';
    *(uint8_t *)param_1[2] = 1;
  }
  return;
}

// operator()<>
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95>,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &
   __ptr64,class <lambda_f7424dd8d45958661754dc4f2697e9c3> >(class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95> && __ptr64,class
   <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> & __ptr64,class
   <lambda_f7424dd8d45958661754dc4f2697e9c3> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_d80eeec6fff315bfe5c115232f3240e3>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &
   __ptr64,class <lambda_2358e3775559c9db80273638284d5e45> >(class
   <lambda_d80eeec6fff315bfe5c115232f3240e3> && __ptr64,class
   <lambda_6e4b09c48022b2350581041d5f6b0c4c> & __ptr64,class
   <lambda_2358e3775559c9db80273638284d5e45> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95>,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &
   __ptr64,class <lambda_f7424dd8d45958661754dc4f2697e9c3> >(class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95> && __ptr64,class
   <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> & __ptr64,class
   <lambda_f7424dd8d45958661754dc4f2697e9c3> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_d80eeec6fff315bfe5c115232f3240e3>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &
   __ptr64,class <lambda_2358e3775559c9db80273638284d5e45> >(class
   <lambda_d80eeec6fff315bfe5c115232f3240e3> && __ptr64,class
   <lambda_6e4b09c48022b2350581041d5f6b0c4c> & __ptr64,class
   <lambda_2358e3775559c9db80273638284d5e45> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(uint64_t param_1,uint32_t *param_2,uint64_t param_3,uint32_t *param_4)
{
  FID_conflict___acrt_lock(*param_2);
  func_0x1806817f0(param_3);
  FID_conflict___acrt_lock(*param_4);
  return;
}

// func_0x1806818e8
uint32_t func_0x1806818e8(uint32_t param_1)
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
  uVal_1 = func_0x180681ae8(param_1,local_48);
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

// func_0x180681980
uint32_t func_0x180681980(uint32_t param_1)
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
  uVal_1 = func_0x180681a18(param_1,local_48);
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

// func_0x180681a18
uint64_t func_0x180681a18(uint param_1,uint64_t param_2)
{
  BOOL BVar1;
  DWORD DVar2;
  int64_t lVal_3;
  int64_t lVal_4;
  HANDLE hObject;
  uint64_t uVal_5;
  
  lVal_3 = func_0x180683c70(param_1);
  if (lVal_3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_180842c80 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_180842c80 + 0x80) & 1) != 0)))) {
      lVal_3 = func_0x180683c70();
      lVal_4 = func_0x180683c70(1);
      if (lVal_4 == lVal_3) goto LAB_180681a3a;
    }
    hObject = (HANDLE)func_0x180683c70(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_180681a98;
    }
  }
LAB_180681a3a:
  DVar2 = 0;
LAB_180681a98:
  func_0x180683e28(param_1);
  *(uint8_t *)
   ((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 + (uint64_t)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVal_5 = 0;
  }
  else {
    func_0x18068251c(DVar2,param_2);
    uVal_5 = 0xffffffff;
  }
  return uVal_5;
}

// func_0x180681ae8
uint64_t func_0x180681ae8(uint param_1,int64_t param_2)
{
  uint64_t uVal_1;
  uint local_res8 [4];
  uint8_t local_res18 [8];
  uint local_res20 [2];
  uint local_28 [2];
  uint *local_20;
  int64_t local_18;
  
  if (param_1 == 0xfffffffe) {
    *(uint8_t *)(param_2 + 0x38) = 1;
    *(uint32_t *)(param_2 + 0x34) = 0;
    *(uint8_t *)(param_2 + 0x30) = 1;
    *(uint32_t *)(param_2 + 0x2c) = 9;
  }
  else {
    local_res8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < DAT_180843080)) &&
       ((*(byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                  (uint64_t)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      local_20 = local_res8;
      local_res20[0] = param_1;
      local_28[0] = param_1;
      local_18 = param_2;
      uVal_1 = func_0x180681bac(local_res18,local_28,&local_20,local_res20);
      return uVal_1;
    }
    *(uint8_t *)(param_2 + 0x38) = 1;
    *(uint32_t *)(param_2 + 0x34) = 0;
    *(uint8_t *)(param_2 + 0x30) = 1;
    *(uint32_t *)(param_2 + 0x2c) = 9;
    func_0x180684b50(0,0,0,0,0,param_2);
  }
  return 0xffffffff;
}

// func_0x180681bac
uint32_t func_0x180681bac(uint64_t param_1,uint32_t *param_2,uint **param_3,uint32_t *param_4)
{
  uint *pU64_1;
  uint32_t uVal_2;
  
  __acrt_lowio_lock_fh(*param_2);
  pU64_1 = param_3[1];
  if ((*(byte *)((&DAT_180842c80)[(int64_t)(int)**param_3 >> 6] + 0x38 +
                (uint64_t)(**param_3 & 0x3f) * 0x48) & 1) == 0) {
    *(uint8_t *)(pU64_1 + 0xc) = 1;
    pU64_1[0xb] = 9;
    uVal_2 = 0xffffffff;
  }
  else {
    uVal_2 = func_0x180681a18();
  }
  __acrt_lowio_unlock_fh(*param_4);
  return uVal_2;
}

// func_0x180681c24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int func_0x180681c24(int param_1)
{
  int64_t lVal_1;
  int64_t *pLong_2;
  int iVal_3;
  uint32_t *pU64_4;
  int64_t *pLong_5;
  char *fnPtr_6;
  int iVal_7;
  int64_t *local_res10;
  int64_t local_res18;
  uint64_t local_res20;
  
  iVal_7 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (1 < param_1 - 1U) {
    pU64_4 = (uint32_t *)func_0x1806823dc();
    *pU64_4 = 0x16;
    func_0x180684970();
    return 0x16;
  }
  __acrt_initialize_multibyte();
  func_0x18069bf5c(0,&DAT_180842600,0x104);
  _DAT_180843088 = &DAT_180842600;
  if ((DAT_1808430a8 == (char *)0x0) || (fnPtr_6 = DAT_1808430a8, *DAT_1808430a8 == '\0')) {
    fnPtr_6 = &DAT_180842600;
  }
  local_res18 = 0;
  local_res20 = 0;
  func_0x180681e04(fnPtr_6,0,0,&local_res18,&local_res20);
  lVal_1 = local_res18;
  pLong_5 = (int64_t *)__acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
  if (pLong_5 == (int64_t *)0x0) {
    pU64_4 = (uint32_t *)func_0x1806823dc();
    iVal_7 = 0xc;
    *pU64_4 = 0xc;
  }
  else {
    func_0x180681e04(fnPtr_6,pLong_5,pLong_5 + lVal_1,&local_res18,&local_res20);
    if (param_1 != 1) {
      local_res10 = (int64_t *)0x0;
      iVal_3 = thunk_FUN_18069b67c(pLong_5,&local_res10);
      pLong_2 = local_res10;
      if (iVal_3 != 0) {
        func_0x180695dd0(local_res10);
        local_res10 = (int64_t *)0x0;
        func_0x180695dd0(pLong_5);
        return iVal_3;
      }
      _DAT_180843090 = 0;
      lVal_1 = *local_res10;
      while (lVal_1 != 0) {
        local_res10 = local_res10 + 1;
        _DAT_180843090 = _DAT_180843090 + 1;
        lVal_1 = *local_res10;
      }
      local_res10 = (int64_t *)0x0;
      DAT_180843098 = pLong_2;
      func_0x180695dd0(0);
      local_res10 = (int64_t *)0x0;
      goto LAB_180681d89;
    }
    _DAT_180843090 = (int)local_res18 + -1;
    DAT_180843098 = pLong_5;
  }
  pLong_5 = (int64_t *)0x0;
LAB_180681d89:
  func_0x180695dd0(pLong_5);
  return iVal_7;
}

// __acrt_allocate_buffer_for_argv
/* Library Function - Single Match
    __acrt_allocate_buffer_for_argv
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_allocate_buffer_for_argv
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
uint64_t __acrt_allocate_buffer_for_argv(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint8_t auArr_1 [16];
  uint64_t uVal_2;
  
  if ((param_1 < 0x1fffffffffffffff) &&
     (auArr_1._8_8_ = 0, auArr_1._0_8_ = param_3,
     param_2 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auArr_1,0))) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      uVal_2 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      func_0x180695dd0(0);
      return uVal_2;
    }
  }
  return 0;
}

// func_0x180681e04
void func_0x180681e04(char *param_1,char **param_2,char *param_3,int64_t *param_4,int64_t *param_5)
{
  bool bFlag_1;
  char ch_2;
  uint uVal_3;
  int iVal_4;
  bool bFlag_5;
  char *fnPtr_6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (char **)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bFlag_1 = false;
  do {
    if (*param_1 == '\"') {
      bFlag_1 = !bFlag_1;
      ch_2 = '\"';
      fnPtr_6 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      ch_2 = *param_1;
      fnPtr_6 = param_1 + 1;
      iVal_4 = func_0x18069c080((int)ch_2);
      if (iVal_4 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *fnPtr_6;
          param_3 = param_3 + 1;
        }
        fnPtr_6 = param_1 + 2;
      }
      if (ch_2 == '\0') {
        fnPtr_6 = fnPtr_6 + -1;
        goto LAB_180681eb6;
      }
    }
    param_1 = fnPtr_6;
  } while ((bFlag_1) || ((ch_2 != ' ' && (ch_2 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_180681eb6:
  bFlag_1 = false;
  while (ch_2 = *fnPtr_6, ch_2 != '\0') {
    while ((ch_2 == ' ' || (ch_2 == '\t'))) {
      fnPtr_6 = fnPtr_6 + 1;
      ch_2 = *fnPtr_6;
    }
    if (ch_2 == '\0') break;
    if (param_2 != (char **)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bFlag_5 = true;
      uVal_3 = 0;
      while( true ) {
        if (*fnPtr_6 != '\\') break;
        fnPtr_6 = fnPtr_6 + 1;
        uVal_3 = uVal_3 + 1;
      }
      if (*fnPtr_6 == '\"') {
        if ((uVal_3 & 1) == 0) {
          if ((bFlag_1) && (fnPtr_6[1] == '\"')) {
            fnPtr_6 = fnPtr_6 + 1;
          }
          else {
            bFlag_5 = false;
            bFlag_1 = !bFlag_1;
          }
        }
        uVal_3 = uVal_3 >> 1;
      }
      while (uVal_3 != 0) {
        uVal_3 = uVal_3 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      ch_2 = *fnPtr_6;
      if ((ch_2 == '\0') || ((!bFlag_1 && ((ch_2 == ' ' || (ch_2 == '\t')))))) break;
      if (bFlag_5) {
        if (param_3 != (char *)0x0) {
          *param_3 = ch_2;
          param_3 = param_3 + 1;
        }
        iVal_4 = func_0x18069c080((int)*fnPtr_6);
        if (iVal_4 != 0) {
          *param_5 = *param_5 + 1;
          fnPtr_6 = fnPtr_6 + 1;
          if (param_3 != (char *)0x0) {
            *param_3 = *fnPtr_6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      fnPtr_6 = fnPtr_6 + 1;
    }
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (char **)0x0) {
    *param_2 = (char *)0x0;
  }
  *param_4 = *param_4 + 1;
  return;
}

// _initialize_onexit_table
/* Library Function - Single Match
    _initialize_onexit_table
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _initialize_onexit_table
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
uint64_t _initialize_onexit_table(int64_t *param_1)
{
  int64_t lVal_1;
  
  lVal_1 = DAT_18083cf40;
  if (param_1 == (int64_t *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_18083cf40;
    param_1[1] = lVal_1;
    param_1[2] = lVal_1;
  }
  return 0;
}

// _register_onexit_function
/* Library Function - Single Match
    _register_onexit_function
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _register_onexit_function
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void _register_onexit_function(uint64_t param_1,uint64_t param_2)
{
  uint64_t local_res8;
  uint64_t local_res10;
  uint8_t local_res18 [8];
  uint32_t local_res20 [2];
  uint32_t local_28 [2];
  uint64_t *local_20;
  uint64_t *local_18;
  
  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res20[0] = 2;
  local_28[0] = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  operator()<>(local_res18,local_28,&local_20,local_res20);
  return;
}

// func_0x180682034
void func_0x180682034(uint64_t param_1)
{
  uint64_t local_res8;
  uint8_t local_res10 [8];
  uint32_t local_res18 [2];
  uint32_t local_res20 [2];
  uint64_t *local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = &local_res8;
  local_res18[0] = 2;
  local_res20[0] = 2;
  local_res8 = param_1;
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  return;
}

// func_0x180682078
void func_0x180682078(uint64_t param_1)
{
  _register_onexit_function(&DAT_180842708,param_1);
  return;
}

// func_0x180682088
uint64_t func_0x180682088(int64_t **param_1)
{
  uint64_t uVal_1;
  byte bFlag_2;
  uint64_t *pU64_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t *pU64_8;
  uint64_t *pU64_9;
  
  pU64_3 = (uint64_t *)**param_1;
  if (pU64_3 == (uint64_t *)0x0) {
LAB_18068221a:
    uVal_1 = 0xffffffff;
  }
  else {
    bFlag_2 = (byte)DAT_18083cf40 & 0x3f;
    uVal_5 = (DAT_18083cf40 ^ *pU64_3) >> bFlag_2 | (DAT_18083cf40 ^ *pU64_3) << 0x40 - bFlag_2;
    pU64_9 = (uint64_t *)
             ((DAT_18083cf40 ^ pU64_3[1]) >> bFlag_2 | (DAT_18083cf40 ^ pU64_3[1]) << 0x40 - bFlag_2);
    pU64_3 = (uint64_t *)
             ((DAT_18083cf40 ^ pU64_3[2]) >> bFlag_2 | (DAT_18083cf40 ^ pU64_3[2]) << 0x40 - bFlag_2);
    if (pU64_9 == pU64_3) {
      uVal_4 = (int64_t)((int64_t)pU64_3 - uVal_5) >> 3;
      uVal_6 = uVal_4;
      if (0x200 < uVal_4) {
        uVal_6 = 0x200;
      }
      uVal_7 = uVal_6 + uVal_4;
      if (uVal_6 + uVal_4 == 0) {
        uVal_7 = 0x20;
      }
      if (uVal_7 < uVal_4) {
LAB_18068212a:
        uVal_7 = uVal_4 + 4;
        uVal_6 = _recalloc_base(uVal_5,uVal_7,8);
        func_0x180695dd0(0);
        if (uVal_6 == 0) goto LAB_18068221a;
      }
      else {
        uVal_6 = _recalloc_base(uVal_5,uVal_7,8);
        func_0x180695dd0(0);
        if (uVal_6 == 0) goto LAB_18068212a;
      }
      uVal_5 = uVal_6;
      uVal_6 = DAT_18083cf40;
      pU64_9 = (uint64_t *)(uVal_5 + uVal_4 * 8);
      pU64_3 = (uint64_t *)(uVal_5 + uVal_7 * 8);
      uVal_4 = (uint64_t)((int64_t)pU64_3 + (7 - (int64_t)pU64_9)) >> 3;
      if (pU64_3 < pU64_9) {
        uVal_4 = 0;
      }
      pU64_8 = pU64_9;
      if (uVal_4 != 0) {
        for (; uVal_4 != 0; uVal_4 = uVal_4 - 1) {
          *pU64_8 = uVal_6;
          pU64_8 = pU64_8 + 1;
        }
      }
    }
    bFlag_2 = -((byte)DAT_18083cf40 & 0x3f) & 0x3f;
    *pU64_9 = ((uint64_t)*param_1[1] >> bFlag_2 | *param_1[1] << 0x40 - bFlag_2) ^ DAT_18083cf40;
    bFlag_2 = -((byte)DAT_18083cf40 & 0x3f) & 0x3f;
    *(uint64_t *)**param_1 = (uVal_5 >> bFlag_2 | uVal_5 << 0x40 - bFlag_2) ^ DAT_18083cf40;
    bFlag_2 = -((byte)DAT_18083cf40 & 0x3f) & 0x3f;
    *(uint64_t *)(**param_1 + 8) =
         ((uint64_t)(pU64_9 + 1) >> bFlag_2 | (int64_t)(pU64_9 + 1) << 0x40 - bFlag_2) ^ DAT_18083cf40
    ;
    bFlag_2 = 0x40 - ((byte)DAT_18083cf40 & 0x3f) & 0x3f;
    uVal_1 = 0;
    *(uint64_t *)(**param_1 + 0x10) =
         ((uint64_t)pU64_3 >> bFlag_2 | (int64_t)pU64_3 << 0x40 - bFlag_2) ^ DAT_18083cf40;
  }
  return uVal_1;
}

// func_0x180682238
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
uint64_t func_0x180682238(int64_t **param_1)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint64_t *pU64_4;
  byte bFlag_5;
  sbyte sz_6;
  uint uVal_7;
  uint64_t *pU64_8;
  uint64_t *pU64_9;
  uint64_t *pU64_10;
  uint64_t uVal_11;
  uint64_t *pU64_12;
  uint64_t *pU64_13;
  
  uVal_1 = DAT_18083cf40;
  pU64_8 = (uint64_t *)**param_1;
  if (pU64_8 == (uint64_t *)0x0) {
    uVal_2 = 0xffffffff;
  }
  else {
    bFlag_5 = (byte)DAT_18083cf40 & 0x3f;
    pU64_10 = (uint64_t *)
              ((DAT_18083cf40 ^ *pU64_8) >> bFlag_5 | (DAT_18083cf40 ^ *pU64_8) << 0x40 - bFlag_5);
    pU64_8 = (uint64_t *)
             ((DAT_18083cf40 ^ pU64_8[1]) >> bFlag_5 | (DAT_18083cf40 ^ pU64_8[1]) << 0x40 - bFlag_5);
    if ((int64_t)pU64_10 - 1U < 0xfffffffffffffffe) {
      uVal_7 = (uint)DAT_18083cf40 & 0x3f;
      pU64_9 = pU64_8;
      uVal_3 = DAT_18083cf40;
      pU64_13 = pU64_10;
      while (pU64_8 = pU64_8 + -1, pU64_10 <= pU64_8) {
        if (*pU64_8 != uVal_1) {
          uVal_3 = *pU64_8 ^ uVal_3;
          *pU64_8 = uVal_1;
          (*(func_ptr_t )(uVal_3 >> (sbyte)uVal_7 | uVal_3 << 0x40 - (sbyte)uVal_7))();
          uVal_7 = (uint)DAT_18083cf40 & 0x3f;
          uVal_11 = DAT_18083cf40 ^ *(uint64_t *)**param_1;
          uVal_3 = DAT_18083cf40 ^ ((uint64_t *)**param_1)[1];
          sz_6 = (sbyte)uVal_7;
          pU64_12 = (uint64_t *)(uVal_11 >> sz_6 | uVal_11 << 0x40 - sz_6);
          pU64_4 = (uint64_t *)(uVal_3 >> sz_6 | uVal_3 << 0x40 - sz_6);
          uVal_3 = DAT_18083cf40;
          if ((pU64_12 != pU64_13) || (pU64_4 != pU64_9)) {
            pU64_8 = pU64_4;
            pU64_9 = pU64_4;
            pU64_10 = pU64_12;
            pU64_13 = pU64_12;
          }
        }
      }
      if (pU64_10 != (uint64_t *)0xffffffffffffffff) {
        func_0x180695dd0(pU64_10);
        uVal_3 = DAT_18083cf40;
      }
      *(uint64_t *)**param_1 = uVal_3;
      *(uint64_t *)(**param_1 + 8) = uVal_3;
      *(uint64_t *)(**param_1 + 0x10) = uVal_3;
    }
    uVal_2 = 0;
  }
  return uVal_2;
}

// operator()<>
/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t
operator()<>(uint64_t param_1,uint32_t *param_2,uint64_t param_3,uint32_t *param_4)
{
  uint32_t uVal_1;
  
  FID_conflict___acrt_lock(*param_2);
  uVal_1 = func_0x180682088(param_3);
  FID_conflict___acrt_lock(*param_4);
  return uVal_1;
}

// operator()<>
/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_7777bce6b2f8c936911f934f8298dc43>,class <lambda_f03950bc5685219e0bcd2087efbe011e> &
   __ptr64,class <lambda_3883c3dff614d5e0c5f61bb1ac94921c> >(class
   <lambda_7777bce6b2f8c936911f934f8298dc43> && __ptr64,class
   <lambda_f03950bc5685219e0bcd2087efbe011e> & __ptr64,class
   <lambda_3883c3dff614d5e0c5f61bb1ac94921c> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_8b90c8310d35b3462fe809c44bbb350d>,class <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> &
   __ptr64,class <lambda_e797892004ba4c0bb152531b9d8c3715> >(class
   <lambda_8b90c8310d35b3462fe809c44bbb350d> && __ptr64,class
   <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> & __ptr64,class
   <lambda_e797892004ba4c0bb152531b9d8c3715> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
     5 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_7777bce6b2f8c936911f934f8298dc43>,class <lambda_f03950bc5685219e0bcd2087efbe011e> &
   __ptr64,class <lambda_3883c3dff614d5e0c5f61bb1ac94921c> >(class
   <lambda_7777bce6b2f8c936911f934f8298dc43> && __ptr64,class
   <lambda_f03950bc5685219e0bcd2087efbe011e> & __ptr64,class
   <lambda_3883c3dff614d5e0c5f61bb1ac94921c> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_8b90c8310d35b3462fe809c44bbb350d>,class <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> &
   __ptr64,class <lambda_e797892004ba4c0bb152531b9d8c3715> >(class
   <lambda_8b90c8310d35b3462fe809c44bbb350d> && __ptr64,class
   <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> & __ptr64,class
   <lambda_e797892004ba4c0bb152531b9d8c3715> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
     5 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint32_t
operator()<>(uint64_t param_1,uint32_t *param_2,uint64_t param_3,uint32_t *param_4)
{
  uint32_t uVal_1;
  
  FID_conflict___acrt_lock(*param_2);
  uVal_1 = func_0x180682238(param_3);
  FID_conflict___acrt_lock(*param_4);
  return uVal_1;
}

// func_0x1806823d0
uint64_t func_0x1806823d0(uint64_t param_1)
{
  return param_1 >> 0x3f;
}

// func_0x1806823dc
uint8_t * func_0x1806823dc(void)
{
  int64_t lVal_1;
  uint8_t *pU64_2;
  
  lVal_1 = func_0x1806960c8();
  pU64_2 = (uint8_t *)(lVal_1 + 0x20);
  if (lVal_1 == 0) {
    pU64_2 = &DAT_18083d5c8;
  }
  return pU64_2;
}

// func_0x180682400
uint8_t * func_0x180682400(void)
{
  int64_t lVal_1;
  uint8_t *pU64_2;
  
  lVal_1 = func_0x1806960c8();
  pU64_2 = (uint8_t *)(lVal_1 + 0x24);
  if (lVal_1 == 0) {
    pU64_2 = &DAT_18083d5cc;
  }
  return pU64_2;
}

// func_0x180682424
void func_0x180682424(uint32_t param_1)
{
  uint32_t *pU64_1;
  uint32_t uVal_2;
  
  pU64_1 = (uint32_t *)func_0x180682400();
  *pU64_1 = param_1;
  uVal_2 = func_0x18068244c(param_1);
  pU64_1 = (uint32_t *)func_0x1806823dc();
  *pU64_1 = uVal_2;
  return;
}
