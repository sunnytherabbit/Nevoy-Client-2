#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x18068244c
uint func_0x18068244c(uint param_1)
{
  int64_t lVal_1;
  uint uVal_2;
  uint *pU64_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  
  if (param_1 != 0) {
    if (param_1 < 0xe) {
      return *(uint *)(&DAT_1806e4944 + (uint64_t)(param_1 - 1) * 8);
    }
    if (param_1 < 0x719) {
      uVal_4 = 0x2d;
      uVal_6 = 0;
      uVal_7 = 0x2c;
      do {
        uVal_8 = uVal_4 >> 1;
        if (uVal_8 == 0) {
          if (uVal_4 != 0) {
            pU64_3 = &DAT_1806e4940 + uVal_6 * 2;
            if (param_1 != *pU64_3) {
              pU64_3 = (uint *)0x0;
            }
LAB_1806824ed:
            if (pU64_3 != (uint *)0x0) {
              return pU64_3[1];
            }
          }
          break;
        }
        uVal_5 = uVal_8 - 1;
        if ((uVal_4 & 1) != 0) {
          uVal_5 = uVal_8;
        }
        lVal_1 = uVal_5 + uVal_6;
        pU64_3 = &DAT_1806e4940 + lVal_1 * 2;
        uVal_2 = *pU64_3;
        if (param_1 == uVal_2) goto LAB_1806824ed;
        uVal_4 = uVal_5;
        if (uVal_2 <= param_1) {
          uVal_6 = lVal_1 + 1;
          uVal_4 = uVal_8;
        }
        uVal_8 = lVal_1 - 1;
        if (uVal_2 <= param_1) {
          uVal_8 = uVal_7;
        }
        uVal_7 = uVal_8;
      } while (uVal_6 <= uVal_8);
    }
  }
  if (param_1 - 0x13 < 0x12) {
    uVal_2 = 0xd;
  }
  else {
    uVal_2 = 0x16;
    if (param_1 - 0xbc < 0xf) {
      uVal_2 = 8;
    }
  }
  return uVal_2;
}

// func_0x18068251c
void func_0x18068251c(uint32_t param_1,int64_t param_2)
{
  uint32_t uVal_1;
  
  *(uint8_t *)(param_2 + 0x38) = 1;
  *(uint32_t *)(param_2 + 0x34) = param_1;
  uVal_1 = func_0x18068244c();
  *(uint32_t *)(param_2 + 0x2c) = uVal_1;
  *(uint8_t *)(param_2 + 0x30) = 1;
  return;
}

// thunk_FUN_180682548
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t thunk_FUN_180682548(uint param_1,int64_t param_2)
{
  uint64_t uVal_1;
  bool bFlag_2;
  uint32_t *pU64_3;
  uint64_t *pU64_4;
  int64_t alStackX_10 [3];
  uint uStack_24;
  uint8_t auStack_18 [16];
  
  if (param_2 == 0) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
  }
  else {
    if (param_1 == 0xfffffffe) {
      pU64_3 = (uint32_t *)func_0x1806823dc();
      *pU64_3 = 9;
      return 0;
    }
    if (((int)param_1 < 0) || (DAT_180843080 <= param_1)) {
      bFlag_2 = false;
    }
    else {
      bFlag_2 = true;
    }
    if ((bFlag_2) &&
       ((*(byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                  (uint64_t)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      pU64_4 = (uint64_t *)__acrt_stdio_parse_mode<char>(auStack_18);
      uVal_1 = *pU64_4;
      if (*(char *)(pU64_4 + 1) == '\0') {
        return 0;
      }
      func_0x18069c6a4(alStackX_10);
      if (alStackX_10[0] == 0) {
        pU64_3 = (uint32_t *)func_0x1806823dc();
        *pU64_3 = 0x18;
        return 0;
      }
      _DAT_1808425d8 = _DAT_1808425d8 + 1;
      uStack_24 = (uint)((uint64_t)uVal_1 >> 0x20);
      LOCK();
      *(uint *)(alStackX_10[0] + 0x14) = *(uint *)(alStackX_10[0] + 0x14) | uStack_24;
      UNLOCK();
      *(uint *)(alStackX_10[0] + 0x18) = param_1;
      func_0x18067e330(alStackX_10[0]);
      return alStackX_10[0];
    }
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 9;
  }
  func_0x180684970();
  return 0;
}

// func_0x180682548
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180682548(uint param_1,int64_t param_2)
{
  uint64_t uVal_1;
  bool bFlag_2;
  uint32_t *pU64_3;
  uint64_t *pU64_4;
  int64_t local_res10 [3];
  uint uStack_24;
  uint8_t local_18 [16];
  
  if (param_2 == 0) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
  }
  else {
    if (param_1 == 0xfffffffe) {
      pU64_3 = (uint32_t *)func_0x1806823dc();
      *pU64_3 = 9;
      return 0;
    }
    if (((int)param_1 < 0) || (DAT_180843080 <= param_1)) {
      bFlag_2 = false;
    }
    else {
      bFlag_2 = true;
    }
    if ((bFlag_2) &&
       ((*(byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                  (uint64_t)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      pU64_4 = (uint64_t *)__acrt_stdio_parse_mode<char>(local_18);
      uVal_1 = *pU64_4;
      if (*(char *)(pU64_4 + 1) == '\0') {
        return 0;
      }
      func_0x18069c6a4(local_res10);
      if (local_res10[0] == 0) {
        pU64_3 = (uint32_t *)func_0x1806823dc();
        *pU64_3 = 0x18;
        return 0;
      }
      _DAT_1808425d8 = _DAT_1808425d8 + 1;
      uStack_24 = (uint)((uint64_t)uVal_1 >> 0x20);
      LOCK();
      *(uint *)(local_res10[0] + 0x14) = *(uint *)(local_res10[0] + 0x14) | uStack_24;
      UNLOCK();
      *(uint *)(local_res10[0] + 0x18) = param_1;
      func_0x18067e330(local_res10[0]);
      return local_res10[0];
    }
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 9;
  }
  func_0x180684970();
  return 0;
}

// __acrt_stdio_parse_mode<char>
/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<char>(char const * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<char>(char const * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

uint64_t * __cdecl __acrt_stdio_parse_mode<char>(uint64_t *param_1,char *param_2)
{
  bool bFlag_1;
  bool bFlag_2;
  bool bFlag_3;
  bool bFlag_4;
  bool bFlag_5;
  char ch_6;
  uint uVal_7;
  int iVal_8;
  uint32_t *pU64_9;
  int64_t lVal_10;
  char *fnPtr_11;
  
  *param_1 = 0;
  *(uint32_t *)(param_1 + 1) = 0;
  *(uint32_t *)((int64_t)param_1 + 4) = DAT_180843114;
  ch_6 = *param_2;
  while (ch_6 == ' ') {
    param_2 = param_2 + 1;
    ch_6 = *param_2;
  }
  if (ch_6 == 'a') {
    *(uint32_t *)param_1 = 0x109;
LAB_180682694:
    *(uint32_t *)((int64_t)param_1 + 4) = 2;
  }
  else {
    if (ch_6 != 'r') {
      if (ch_6 != 'w') goto LAB_1806828d2;
      *(uint32_t *)param_1 = 0x301;
      goto LAB_180682694;
    }
    *(uint32_t *)((int64_t)param_1 + 4) = 1;
  }
  param_2 = param_2 + 1;
  bFlag_3 = false;
  bFlag_2 = false;
  bFlag_1 = false;
  bFlag_5 = false;
  bFlag_4 = true;
LAB_1806826a8:
  if (*param_2 == '\0') goto LAB_1806827f7;
  ch_6 = *param_2;
  if (ch_6 < 'T') {
    if (ch_6 == 'S') {
      if (bFlag_1) goto LAB_1806827d9;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_18068275a:
      bFlag_1 = true;
      bFlag_4 = true;
      goto LAB_1806827e5;
    }
    if (ch_6 == ' ') goto LAB_1806827e5;
    if (ch_6 == '+') {
      if (!bFlag_2) {
        bFlag_2 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          bFlag_4 = true;
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)((int64_t)param_1 + 4) = *(uint *)((int64_t)param_1 + 4) & 0xfffffffc | 4;
          goto LAB_1806827e5;
        }
      }
    }
    else if (ch_6 == ',') {
      bFlag_5 = true;
    }
    else {
      if (ch_6 != 'D') {
        if (ch_6 == 'N') {
          *(uint *)param_1 = *(uint *)param_1 | 0x80;
LAB_1806827e3:
          bFlag_4 = true;
          goto LAB_1806827e5;
        }
        if (ch_6 == 'R') {
          if (!bFlag_1) {
            *(uint *)param_1 = *(uint *)param_1 | 0x10;
            goto LAB_18068275a;
          }
          goto LAB_1806827d9;
        }
        goto LAB_1806828d2;
      }
      if ((*(uint *)param_1 & 0x40) == 0) {
        uVal_7 = *(uint *)param_1 | 0x40;
        goto LAB_1806827e1;
      }
    }
  }
  else if (ch_6 == 'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVal_7 = *(uint *)param_1 | 0x1000;
      goto LAB_1806827e1;
    }
  }
  else if (ch_6 == 'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVal_7 = *(uint *)param_1 | 0x8000;
      goto LAB_1806827e1;
    }
  }
  else if (ch_6 == 'c') {
    if (!bFlag_3) {
      *(uint *)((int64_t)param_1 + 4) = *(uint *)((int64_t)param_1 + 4) | 0x800;
LAB_1806827ba:
      bFlag_3 = true;
      bFlag_4 = true;
      goto LAB_1806827e5;
    }
  }
  else if (ch_6 == 'n') {
    if (!bFlag_3) {
      *(uint *)((int64_t)param_1 + 4) = *(uint *)((int64_t)param_1 + 4) & 0xfffff7ff;
      goto LAB_1806827ba;
    }
  }
  else if (ch_6 == 't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVal_7 = *(uint *)param_1 | 0x4000;
      goto LAB_1806827e1;
    }
  }
  else {
    if (ch_6 != 'x') goto LAB_1806828d2;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVal_7 = *(uint *)param_1 | 0x400;
LAB_1806827e1:
      *(uint *)param_1 = uVal_7;
      goto LAB_1806827e3;
    }
  }
LAB_1806827d9:
  bFlag_4 = false;
LAB_1806827e5:
  param_2 = param_2 + bFlag_4;
  if (!bFlag_4) goto LAB_1806827f7;
  goto LAB_1806826a8;
LAB_1806827f7:
  fnPtr_11 = param_2 + 1;
  if (!bFlag_5) {
    fnPtr_11 = param_2;
  }
  for (; *fnPtr_11 == ' '; fnPtr_11 = fnPtr_11 + 1) {
  }
  if (bFlag_5) {
    iVal_8 = strncmp(fnPtr_11,"ccs",3);
    if (iVal_8 != 0) goto LAB_1806828d2;
    for (fnPtr_11 = fnPtr_11 + 3; *fnPtr_11 == ' '; fnPtr_11 = fnPtr_11 + 1) {
    }
    if (*fnPtr_11 != '=') goto LAB_1806828d2;
    do {
      fnPtr_11 = fnPtr_11 + 1;
    } while (*fnPtr_11 == ' ');
    lVal_10 = 5;
    iVal_8 = func_0x18069c480(fnPtr_11,"UTF-8",5);
    if (iVal_8 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      lVal_10 = 8;
      iVal_8 = func_0x18069c480(fnPtr_11,"UTF-16LEUNICODE",8);
      if (iVal_8 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
      }
      else {
        lVal_10 = 7;
        iVal_8 = func_0x18069c480(fnPtr_11,"UNICODE",7);
        if (iVal_8 != 0) goto LAB_1806828d2;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
      }
    }
    for (fnPtr_11 = fnPtr_11 + lVal_10; ch_6 = *fnPtr_11, ch_6 == ' '; fnPtr_11 = fnPtr_11 + 1) {
    }
  }
  else {
    ch_6 = *fnPtr_11;
  }
  if (ch_6 == '\0') {
    *(uint8_t *)(param_1 + 1) = 1;
    return param_1;
  }
LAB_1806828d2:
  pU64_9 = (uint32_t *)func_0x1806823dc();
  *pU64_9 = 0x16;
  func_0x180684970();
  return param_1;
}

// __acrt_stdio_parse_mode<wchar_t>
/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t const * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t const * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

uint64_t * __cdecl __acrt_stdio_parse_mode<wchar_t>(uint64_t *param_1,short *param_2)
{
  wchar_t wVar1;
  bool bFlag_2;
  bool bFlag_3;
  bool bFlag_4;
  bool bFlag_5;
  bool bFlag_6;
  short sz_7;
  uint uVal_8;
  int iVal_9;
  uint32_t *pU64_10;
  wchar_t *pWStr_11;
  int64_t lVal_12;
  wchar_t *pWStr_13;
  
  *param_1 = 0;
  *(uint32_t *)(param_1 + 1) = 0;
  *(uint32_t *)((int64_t)param_1 + 4) = DAT_180843114;
  sz_7 = *param_2;
  while (sz_7 == 0x20) {
    param_2 = param_2 + 1;
    sz_7 = *param_2;
  }
  if (sz_7 == 0x61) {
    *(uint32_t *)param_1 = 0x109;
LAB_18068296e:
    *(uint32_t *)((int64_t)param_1 + 4) = 2;
  }
  else {
    if (sz_7 != 0x72) {
      if (sz_7 != 0x77) goto LAB_180682bcc;
      *(uint32_t *)param_1 = 0x301;
      goto LAB_18068296e;
    }
    *(uint32_t *)((int64_t)param_1 + 4) = 1;
  }
  pWStr_13 = param_2 + 1;
  bFlag_6 = true;
  bFlag_2 = false;
  bFlag_5 = false;
  lVal_12 = 10;
  bFlag_3 = bFlag_2;
  bFlag_4 = bFlag_2;
LAB_18068298c:
  if (*pWStr_13 == L'\0') goto LAB_180682ade;
  wVar1 = *pWStr_13;
  if ((ushort)wVar1 < 0x54) {
    if (wVar1 == L'S') {
      if (bFlag_2) goto LAB_180682abc;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_180682a3d:
      bFlag_2 = true;
      bFlag_6 = true;
      goto LAB_180682ac9;
    }
    if (wVar1 == L' ') goto LAB_180682ac9;
    if (wVar1 == L'+') {
      if (!bFlag_5) {
        bFlag_5 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          bFlag_6 = true;
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)((int64_t)param_1 + 4) = *(uint *)((int64_t)param_1 + 4) & 0xfffffffc | 4;
          goto LAB_180682ac9;
        }
      }
    }
    else if (wVar1 == L',') {
      bFlag_4 = true;
    }
    else {
      if (wVar1 != L'D') {
        if (wVar1 == L'N') {
          *(uint *)param_1 = *(uint *)param_1 | 0x80;
LAB_180682ac7:
          bFlag_6 = true;
          goto LAB_180682ac9;
        }
        if (wVar1 == L'R') {
          if (!bFlag_2) {
            *(uint *)param_1 = *(uint *)param_1 | 0x10;
            goto LAB_180682a3d;
          }
          goto LAB_180682abc;
        }
        goto LAB_180682bcc;
      }
      if ((*(uint *)param_1 & 0x40) == 0) {
        uVal_8 = *(uint *)param_1 | 0x40;
        goto LAB_180682ac5;
      }
    }
  }
  else if (wVar1 == L'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVal_8 = *(uint *)param_1 | 0x1000;
      goto LAB_180682ac5;
    }
  }
  else if (wVar1 == L'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVal_8 = *(uint *)param_1 | 0x8000;
      goto LAB_180682ac5;
    }
  }
  else if (wVar1 == L'c') {
    if (!bFlag_3) {
      *(uint *)((int64_t)param_1 + 4) = *(uint *)((int64_t)param_1 + 4) | 0x800;
LAB_180682a9d:
      bFlag_3 = true;
      bFlag_6 = true;
      goto LAB_180682ac9;
    }
  }
  else if (wVar1 == L'n') {
    if (!bFlag_3) {
      *(uint *)((int64_t)param_1 + 4) = *(uint *)((int64_t)param_1 + 4) & 0xfffff7ff;
      goto LAB_180682a9d;
    }
  }
  else if (wVar1 == L't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVal_8 = *(uint *)param_1 | 0x4000;
      goto LAB_180682ac5;
    }
  }
  else {
    if (wVar1 != L'x') goto LAB_180682bcc;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVal_8 = *(uint *)param_1 | 0x400;
LAB_180682ac5:
      *(uint *)param_1 = uVal_8;
      goto LAB_180682ac7;
    }
  }
LAB_180682abc:
  bFlag_6 = false;
LAB_180682ac9:
  pWStr_13 = (wchar_t *)((int64_t)pWStr_13 + (uint64_t)(-(uint)bFlag_6 & 2));
  if (!bFlag_6) goto LAB_180682ade;
  goto LAB_18068298c;
LAB_180682ade:
  pWStr_11 = pWStr_13 + 1;
  if (!bFlag_4) {
    pWStr_11 = pWStr_13;
  }
  for (; *pWStr_11 == L' '; pWStr_11 = pWStr_11 + 1) {
  }
  if (bFlag_4) {
    iVal_9 = wcsncmp(pWStr_11,L"ccs",3);
    if (iVal_9 != 0) goto LAB_180682bcc;
    for (pWStr_11 = pWStr_11 + 3; *pWStr_11 == L' '; pWStr_11 = pWStr_11 + 1) {
    }
    if (*pWStr_11 != L'=') goto LAB_180682bcc;
    do {
      pWStr_11 = pWStr_11 + 1;
    } while (*pWStr_11 == L' ');
    iVal_9 = func_0x18069c200(pWStr_11,L"UTF-8",5);
    if (iVal_9 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      iVal_9 = func_0x18069c200(pWStr_11,L"UTF-16LEUNICODE",8);
      if (iVal_9 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
        lVal_12 = 0x10;
      }
      else {
        iVal_9 = func_0x18069c200(pWStr_11,L"UNICODE",7);
        if (iVal_9 != 0) goto LAB_180682bcc;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
        lVal_12 = 0xe;
      }
    }
    for (pWStr_11 = (wchar_t *)((int64_t)pWStr_11 + lVal_12); wVar1 = *pWStr_11, wVar1 == L' ';
        pWStr_11 = pWStr_11 + 1) {
    }
  }
  else {
    wVar1 = *pWStr_11;
  }
  if (wVar1 == L'\0') {
    *(uint8_t *)(param_1 + 1) = 1;
    return param_1;
  }
LAB_180682bcc:
  pU64_10 = (uint32_t *)func_0x1806823dc();
  *pU64_10 = 0x16;
  func_0x180684970();
  return param_1;
}

// _fileno
/* Library Function - Single Match
    _fileno
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _fileno
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
int __cdecl _fileno(FILE *_File)
{
  int iVal_1;
  uint32_t *pU64_2;
  
  if (_File == (FILE *)0x0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    iVal_1 = -1;
  }
  else {
    iVal_1 = _File->_flag;
  }
  return iVal_1;
}

// func_0x180682c24
uint32_t func_0x180682c24(uint32_t param_1,int param_2,uint64_t param_3)
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
  uVal_1 = func_0x180682f40(param_1,(int64_t)param_2,param_3,local_48);
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

// func_0x180682cc0
uint32_t func_0x180682cc0(void)
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
  uVal_1 = func_0x180682f40();
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

// func_0x180682d58
uint64_t func_0x180682d58(int64_t *param_1,uint64_t param_2,int param_3)
{
  uint64_t in_RAX;
  int64_t lVal_1;
  uint uVal_2;
  
  if ((((param_3 != 2) &&
       (in_RAX = (uint64_t)*(uint *)((int64_t)param_1 + 0x14),
       (*(uint *)((int64_t)param_1 + 0x14) & 0x4c0) != 0)) &&
      (in_RAX = (uint64_t)*(uint *)((int64_t)param_1 + 0x14),
      (*(uint *)((int64_t)param_1 + 0x14) & 6) == 0)) && (0 < *(int *)(param_1 + 2))) {
    uVal_2 = *(uint *)(param_1 + 3);
    in_RAX = (int64_t)(int)uVal_2 >> 6;
    if ((-1 < *(char *)((&DAT_180842c80)[in_RAX] + 0x38 + (uint64_t)(uVal_2 & 0x3f) * 0x48)) &&
       (*(char *)((&DAT_180842c80)[in_RAX] + 0x39 + (uint64_t)(uVal_2 & 0x3f) * 0x48) == '\0')) {
      if (param_3 == 0) {
        in_RAX = func_0x18069c8a0(uVal_2,0,1);
        if ((int64_t)in_RAX < 0) goto LAB_180682e40;
        lVal_1 = in_RAX - (int64_t)*(int *)(param_1 + 2);
        in_RAX = param_2 - lVal_1;
        uVal_2 = -(int)((int64_t)param_2 >> 0x3f);
        param_2 = in_RAX;
        if ((uVal_2 != -(int)(lVal_1 >> 0x3f)) && (uVal_2 != 0x7fffffffffffffff < in_RAX))
        goto LAB_180682e40;
      }
      if ((param_1[1] - *param_1 <= (int64_t)param_2) &&
         ((int64_t)param_2 <= (int64_t)*(int *)(param_1 + 2))) {
        *param_1 = *param_1 + param_2;
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) - (int)param_2;
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
LAB_180682e40:
  return in_RAX & 0xffffffffffffff00;
}

// func_0x180682e54
int func_0x180682e54(uint64_t *param_1,int64_t param_2,int param_3,int64_t param_4)
{
  char ch_1;
  int iVal_2;
  int64_t lVal_3;
  
  if ((*(uint *)((int64_t)param_1 + 0x14) >> 0xd & 1) == 0) {
    *(uint8_t *)(param_4 + 0x30) = 1;
    iVal_2 = -1;
    *(uint32_t *)(param_4 + 0x2c) = 0x16;
  }
  else {
    LOCK();
    *(uint *)((int64_t)param_1 + 0x14) = *(uint *)((int64_t)param_1 + 0x14) & 0xfffffff7;
    UNLOCK();
    ch_1 = func_0x180682d58();
    if (ch_1 == '\0') {
      if (param_3 == 1) {
        lVal_3 = thunk_FUN_1806835fc(param_1,param_4);
        param_2 = param_2 + lVal_3;
        param_3 = 0;
      }
      func_0x18068a9e8(param_1,param_4);
      *param_1 = param_1[1];
      *(uint32_t *)(param_1 + 2) = 0;
      if ((*(uint *)((int64_t)param_1 + 0x14) >> 2 & 1) == 0) {
        if ((((byte)*(uint32_t *)((int64_t)param_1 + 0x14) & 0x41) == 0x41) &&
           ((*(uint *)((int64_t)param_1 + 0x14) >> 8 & 1) == 0)) {
          *(uint32_t *)(param_1 + 4) = 0x200;
        }
      }
      else {
        LOCK();
        *(uint *)((int64_t)param_1 + 0x14) = *(uint *)((int64_t)param_1 + 0x14) & 0xfffffffc;
        UNLOCK();
      }
      lVal_3 = thunk_FUN_18069ca6c(*(uint32_t *)(param_1 + 3),param_2,param_3,param_4);
      iVal_2 = (lVal_3 != -1) - 1;
    }
    else {
      iVal_2 = 0;
    }
  }
  return iVal_2;
}

// func_0x180682f40
uint32_t func_0x180682f40(int64_t param_1,uint64_t param_2,uint param_3,int64_t param_4)
{
  uint32_t uVal_1;
  
  if ((param_1 == 0) || (2 < param_3)) {
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_4);
    uVal_1 = 0xffffffff;
  }
  else {
    func_0x18067e324();
    uVal_1 = func_0x180682e54(param_1,param_2,param_3,param_4);
    func_0x18067e330(param_1);
  }
  return uVal_1;
}

// _wfopen_s
/* Library Function - Single Match
    _wfopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _wfopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
errno_t __cdecl _wfopen_s(FILE **_File,wchar_t *_Filename,wchar_t *_Mode)
{
  uint32_t *pU64_1;
  _iobuf *p_Var2;
  errno_t *pe_3;
  errno_t eVar4;
  
  eVar4 = 0;
  if (_File == (FILE **)0x0) {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    eVar4 = 0x16;
    *pU64_1 = 0x16;
    func_0x180684970();
  }
  else {
    p_Var2 = common_fsopen<wchar_t>(_Filename,_Mode,0x80);
    *_File = p_Var2;
    if (p_Var2 == (_iobuf *)0x0) {
      pe_3 = (errno_t *)func_0x1806823dc();
      eVar4 = *pe_3;
    }
  }
  return eVar4;
}

// fopen_s
/* Library Function - Single Match
    fopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    fopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
errno_t __cdecl fopen_s(FILE **_File,char *_Filename,char *_Mode)
{
  uint32_t *pU64_1;
  _iobuf *p_Var2;
  errno_t *pe_3;
  errno_t eVar4;
  
  eVar4 = 0;
  if (_File == (FILE **)0x0) {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    eVar4 = 0x16;
    *pU64_1 = 0x16;
    func_0x180684970();
  }
  else {
    p_Var2 = common_fsopen<char>(_Filename,_Mode,0x80);
    *_File = p_Var2;
    if (p_Var2 == (_iobuf *)0x0) {
      pe_3 = (errno_t *)func_0x1806823dc();
      eVar4 = *pe_3;
    }
  }
  return eVar4;
}

// common_fsopen<char>
_iobuf * __cdecl common_fsopen<char>(char *param_1,char *param_2,int param_3)
{
  uint32_t *pU64_1;
  _iobuf *p_Var2;
  int64_t lStackX_8;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x16;
    func_0x180684970();
  }
  else if (*param_1 == '\0') {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x16;
  }
  else {
    func_0x18069c6a4(&lStackX_8);
    if (lStackX_8 != 0) {
      p_Var2 = (_iobuf *)func_0x18069cb1c(param_1,param_2,param_3,lStackX_8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(lStackX_8);
      }
      func_0x18067e330(lStackX_8);
      return p_Var2;
    }
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x18;
  }
  return (_iobuf *)0x0;
}

// common_fsopen<char>
/* Library Function - Single Match
    struct _iobuf * __ptr64 __cdecl common_fsopen<char>(char const * __ptr64 const,char const *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    struct _iobuf * __ptr64 __cdecl common_fsopen<char>(char const * __ptr64 const,char const *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_iobuf * __cdecl common_fsopen<char>(char *param_1,char *param_2,int param_3)
{
  uint32_t *pU64_1;
  _iobuf *p_Var2;
  int64_t local_res8;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x16;
    func_0x180684970();
  }
  else if (*param_1 == '\0') {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x16;
  }
  else {
    func_0x18069c6a4(&local_res8);
    if (local_res8 != 0) {
      p_Var2 = (_iobuf *)func_0x18069cb1c(param_1,param_2,param_3,local_res8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(local_res8);
      }
      func_0x18067e330(local_res8);
      return p_Var2;
    }
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x18;
  }
  return (_iobuf *)0x0;
}

// common_fsopen<wchar_t>
/* Library Function - Single Match
    struct _iobuf * __ptr64 __cdecl common_fsopen<wchar_t>(wchar_t const * __ptr64 const,wchar_t
   const * __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    struct _iobuf * __ptr64 __cdecl common_fsopen<wchar_t>(wchar_t const * __ptr64 const,wchar_t
   const * __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_iobuf * __cdecl common_fsopen<wchar_t>(wchar_t *param_1,wchar_t *param_2,int param_3)
{
  uint32_t *pU64_1;
  _iobuf *p_Var2;
  int64_t local_res8;
  
  if (((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0')) {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x16;
    func_0x180684970();
  }
  else if (*param_1 == L'\0') {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x16;
  }
  else {
    func_0x18069c6a4(&local_res8);
    if (local_res8 != 0) {
      p_Var2 = (_iobuf *)func_0x18069cbb8(param_1,param_2,param_3,local_res8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(local_res8);
      }
      func_0x18067e330(local_res8);
      return p_Var2;
    }
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x18;
  }
  return (_iobuf *)0x0;
}

// func_0x18068321c
uint64_t func_0x18068321c(uint32_t param_1)
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
    param_1 = PTR_PTR_DAT_18083d808._0_4_;
  }
  uVal_1 = func_0x18068374c(param_1,local_48);
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

// thunk_FUN_1806835fc
uint64_t thunk_FUN_1806835fc(FILE *param_1,int64_t param_2)
{
  char ch_1;
  uint uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  
  if (param_1 == (FILE *)0x0) {
    *(uint8_t *)(param_2 + 0x30) = 1;
    *(uint32_t *)(param_2 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_2);
  }
  else {
    uVal_2 = _fileno(param_1);
    if (*(int *)&param_1->_base < 0) {
      *(uint32_t *)&param_1->_base = 0;
    }
    lVal_3 = thunk_FUN_18069c94c(uVal_2,0,1,param_2);
    if (-1 < lVal_3) {
      if ((*(uint *)((int64_t)&param_1->_base + 4) & 0xc0) == 0) {
        return lVal_3 - *(int *)&param_1->_base;
      }
      uVal_6 = (int64_t)param_1->_ptr - *(int64_t *)&param_1->_cnt;
      uVal_4 = (uint64_t)(uVal_2 & 0x3f);
      lVal_5 = (int64_t)(int)uVal_2 >> 6;
      ch_1 = *(char *)((&DAT_180842c80)[lVal_5] + 0x39 + uVal_4 * 0x48);
      if ((*(uint *)((int64_t)&param_1->_base + 4) & 3) == 0) {
        if ((*(uint *)((int64_t)&param_1->_base + 4) >> 2 & 1) == 0) {
          *(uint8_t *)(param_2 + 0x30) = 1;
          *(uint32_t *)(param_2 + 0x2c) = 0x16;
          return 0xffffffffffffffff;
        }
      }
      else {
        if ((ch_1 == '\x01') &&
           ((*(byte *)((&DAT_180842c80)[lVal_5] + 0x3d + uVal_4 * 0x48) & 2) != 0)) {
          uVal_4 = func_0x180683318(param_1,lVal_3,param_2);
          return uVal_4;
        }
        if (*(char *)((&DAT_180842c80)[lVal_5] + 0x38 + uVal_4 * 0x48) < '\0') {
          lVal_5 = func_0x1806832c0(*(uint64_t *)&param_1->_cnt,param_1->_ptr,
                                CONCAT71(0x180842c,ch_1));
          uVal_6 = uVal_6 + lVal_5;
        }
      }
      if (lVal_3 == 0) {
        return uVal_6;
      }
      if ((*(uint *)((int64_t)&param_1->_base + 4) & 1) == 0) {
        if (ch_1 == '\x01') {
          uVal_6 = uVal_6 >> 1;
        }
        return uVal_6 + lVal_3;
      }
      uVal_4 = func_0x1806834a0(param_1,lVal_3,uVal_6,param_2);
      return uVal_4;
    }
  }
  return 0xffffffffffffffff;
}

// func_0x1806832c0
int64_t func_0x1806832c0(short *param_1,short *param_2,char param_3)
{
  int64_t lVal_1;
  int64_t lVal_2;
  
  if ((byte)(param_3 - 1U) < 2) {
    lVal_1 = 0;
    lVal_2 = lVal_1;
    if (param_1 != param_2) {
      do {
        lVal_1 = lVal_2 + 1;
        if (*param_1 != 10) {
          lVal_1 = lVal_2;
        }
        param_1 = param_1 + 1;
        lVal_2 = lVal_1;
      } while (param_1 != param_2);
    }
    return lVal_1 * 2;
  }
  lVal_1 = 0;
  lVal_2 = lVal_1;
  if (param_1 != param_2) {
    do {
      lVal_1 = lVal_2 + 1;
      if (*(char *)param_1 != '\n') {
        lVal_1 = lVal_2;
      }
      param_1 = (short *)((int64_t)param_1 + 1);
      lVal_2 = lVal_1;
    } while (param_1 != param_2);
  }
  return lVal_1;
}

// func_0x180683318
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
void func_0x180683318(FILE *param_1,uint64_t param_2,uint64_t param_3)
{
  uint uVal_1;
  BOOL BVar2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  byte *pU8_6;
  int64_t lVal_7;
  uint8_t auStackY_1088 [32];
  uint local_1058 [3];
  byte abStack_1049 [4097];
  uint64_t local_48;
  uint64_t uStack_40;
  
  uStack_40 = 0x180683332;
  local_48 = DAT_18083cf40 ^ (uint64_t)auStackY_1088;
  uVal_1 = _fileno(param_1);
  lVal_7 = 0;
  if (*(int *)&param_1->_base != 0) {
    uVal_5 = (uint64_t)(uVal_1 & 0x3f);
    lVal_3 = ((int64_t)param_1->_ptr - *(int64_t *)&param_1->_cnt) / 2;
    lVal_4 = thunk_FUN_18069c94c(uVal_1,*(uint64_t *)
                                       ((&DAT_180842c80)[(int64_t)(int)uVal_1 >> 6] + 0x30 +
                                       uVal_5 * 0x48),0,param_3);
    if (lVal_4 == *(int64_t *)((&DAT_180842c80)[(int64_t)(int)uVal_1 >> 6] + 0x30 + uVal_5 * 0x48)) {
      local_1058[0] = 0;
      BVar2 = ReadFile(*(HANDLE *)
                        ((&DAT_180842c80)[(int64_t)(int)uVal_1 >> 6] + 0x28 + uVal_5 * 0x48),
                       abStack_1049 + 1,0x1000,local_1058,(LPOVERLAPPED)0x0);
      if (((BVar2 != 0) && (lVal_4 = thunk_FUN_18069c94c(uVal_1,param_2,0,param_3), -1 < lVal_4)) &&
         (uVal_5 = (uint64_t)local_1058[0], lVal_3 <= (int64_t)uVal_5)) {
        pU8_6 = abStack_1049;
        if (lVal_3 != 0) {
          do {
            pU8_6 = pU8_6 + 1;
            if (abStack_1049 + uVal_5 + 1 <= pU8_6) break;
            if (*pU8_6 == 0xd) {
              if ((pU8_6 < abStack_1049 + uVal_5) && (pU8_6[1] == 10)) {
                pU8_6 = pU8_6 + 1;
              }
            }
            else {
              pU8_6 = pU8_6 + (char)(&DAT_18083df70)[*pU8_6];
            }
            lVal_7 = lVal_7 + 1;
          } while (lVal_7 != lVal_3);
        }
      }
    }
  }
  func_0x180673080(local_48 ^ (uint64_t)auStackY_1088);
  return;
}

// func_0x1806834a0
int64_t func_0x1806834a0(FILE *param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
{
  char ch_1;
  uint uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  char *fnPtr_5;
  char *fnPtr_6;
  int64_t lVal_7;
  bool bFlag_8;
  
  uVal_2 = _fileno(param_1);
  uVal_4 = (uint64_t)(uVal_2 & 0x3f);
  ch_1 = *(char *)((&DAT_180842c80)[(int64_t)(int)uVal_2 >> 6] + 0x39 + uVal_4 * 0x48);
  lVal_7 = (uint64_t)(ch_1 == '\x01') + 1;
  if (*(int *)&param_1->_base != 0) {
    fnPtr_6 = param_1->_ptr + ((int64_t)*(int *)&param_1->_base - *(int64_t *)&param_1->_cnt);
    if (*(char *)((&DAT_180842c80)[(int64_t)(int)uVal_2 >> 6] + 0x38 + uVal_4 * 0x48) < '\0') {
      lVal_3 = thunk_FUN_18069c94c(uVal_2,0,2,param_4);
      if (lVal_3 == param_2) {
        lVal_3 = func_0x1806832c0(*(int64_t *)&param_1->_cnt,fnPtr_6 + *(int64_t *)&param_1->_cnt,ch_1
                             );
        bFlag_8 = (*(uint *)((int64_t)&param_1->_base + 4) >> 5 & 1) == 0;
        fnPtr_6 = fnPtr_6 + lVal_3;
      }
      else {
        lVal_3 = thunk_FUN_18069c94c(uVal_2,param_2,0,param_4);
        if (lVal_3 == -1) {
          return -1;
        }
        fnPtr_5 = (char *)0x200;
        if (((0x200 < (int64_t)fnPtr_6) ||
            ((*(uint *)((int64_t)&param_1->_base + 4) >> 6 & 1) == 0)) ||
           ((*(uint *)((int64_t)&param_1->_base + 4) >> 8 & 1) != 0)) {
          fnPtr_5 = (char *)(int64_t)param_1->_charbuf;
        }
        bFlag_8 = (*(byte *)((&DAT_180842c80)[(int64_t)(int)uVal_2 >> 6] + 0x38 + uVal_4 * 0x48) & 4)
                == 0;
        fnPtr_6 = fnPtr_5;
      }
      if (!bFlag_8) {
        fnPtr_6 = fnPtr_6 + (uint64_t)((byte)(ch_1 - 1U) < 2) + 1;
      }
    }
    param_2 = (param_3 / lVal_7 - (int64_t)fnPtr_6 / lVal_7) + param_2;
  }
  return param_2;
}

// func_0x1806835fc
uint64_t func_0x1806835fc(FILE *param_1,int64_t param_2)
{
  char ch_1;
  uint uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  
  if (param_1 == (FILE *)0x0) {
    *(uint8_t *)(param_2 + 0x30) = 1;
    *(uint32_t *)(param_2 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_2);
  }
  else {
    uVal_2 = _fileno(param_1);
    if (*(int *)&param_1->_base < 0) {
      *(uint32_t *)&param_1->_base = 0;
    }
    lVal_3 = thunk_FUN_18069c94c(uVal_2,0,1,param_2);
    if (-1 < lVal_3) {
      if ((*(uint *)((int64_t)&param_1->_base + 4) & 0xc0) == 0) {
        return lVal_3 - *(int *)&param_1->_base;
      }
      uVal_6 = (int64_t)param_1->_ptr - *(int64_t *)&param_1->_cnt;
      uVal_4 = (uint64_t)(uVal_2 & 0x3f);
      lVal_5 = (int64_t)(int)uVal_2 >> 6;
      ch_1 = *(char *)((&DAT_180842c80)[lVal_5] + 0x39 + uVal_4 * 0x48);
      if ((*(uint *)((int64_t)&param_1->_base + 4) & 3) == 0) {
        if ((*(uint *)((int64_t)&param_1->_base + 4) >> 2 & 1) == 0) {
          *(uint8_t *)(param_2 + 0x30) = 1;
          *(uint32_t *)(param_2 + 0x2c) = 0x16;
          return 0xffffffffffffffff;
        }
      }
      else {
        if ((ch_1 == '\x01') &&
           ((*(byte *)((&DAT_180842c80)[lVal_5] + 0x3d + uVal_4 * 0x48) & 2) != 0)) {
          uVal_4 = func_0x180683318(param_1,lVal_3,param_2);
          return uVal_4;
        }
        if (*(char *)((&DAT_180842c80)[lVal_5] + 0x38 + uVal_4 * 0x48) < '\0') {
          lVal_5 = func_0x1806832c0(*(uint64_t *)&param_1->_cnt,param_1->_ptr,
                                CONCAT71(0x180842c,ch_1));
          uVal_6 = uVal_6 + lVal_5;
        }
      }
      if (lVal_3 == 0) {
        return uVal_6;
      }
      if ((*(uint *)((int64_t)&param_1->_base + 4) & 1) == 0) {
        if (ch_1 == '\x01') {
          uVal_6 = uVal_6 >> 1;
        }
        return uVal_6 + lVal_3;
      }
      uVal_4 = func_0x1806834a0(param_1,lVal_3,uVal_6,param_2);
      return uVal_4;
    }
  }
  return 0xffffffffffffffff;
}

// func_0x18068374c
uint64_t func_0x18068374c(int64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  
  if (param_1 == 0) {
    *(uint8_t *)(param_2 + 0x30) = 1;
    *(uint32_t *)(param_2 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_2);
    uVal_1 = 0xffffffffffffffff;
  }
  else {
    func_0x18067e324();
    uVal_1 = func_0x1806835fc(param_1,param_2);
    func_0x18067e330(param_1);
  }
  return uVal_1;
}

// func_0x1806837b8
uint64_t func_0x1806837b8(void)
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
  uVal_1 = func_0x180683b14();
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

// func_0x18068385c
uint64_t func_0x18068385c(void)
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
  uVal_1 = func_0x180683900();
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

// func_0x180683900
uint64_t func_0x180683900(char *param_1,uint64_t param_2,uint64_t param_3,FILE *param_4, int64_t param_5)
{
  uint *pU64_1;
  uint8_t auArr_2 [16];
  int iVal_3;
  uint uVal_4;
  uint64_t uVal_5;
  uint uVal_6;
  uint64_t uVal_7;
  uint uVal_8;
  uint uVal_9;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (char *)0x0 &&
        (auArr_2._8_8_ = 0, auArr_2._0_8_ = param_2,
        param_3 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auArr_2,0))))) {
      if ((*(uint *)((int64_t)&param_4->_base + 4) & 0x4c0) == 0) {
        uVal_9 = 0x1000;
      }
      else {
        uVal_9 = param_4->_charbuf;
      }
      uVal_7 = param_2 * param_3;
      do {
        if (uVal_7 == 0) {
          return param_3;
        }
        if (((*(uint *)((int64_t)&param_4->_base + 4) & 0xc0) == 0) ||
           (*(int *)&param_4->_base == 0)) {
          if (uVal_9 <= uVal_7) {
            if (((*(uint *)((int64_t)&param_4->_base + 4) & 0xc0) != 0) &&
               (iVal_3 = func_0x18068a9e8(param_4), iVal_3 != 0)) goto LAB_180683ab7;
            uVal_5 = uVal_7;
            if (uVal_9 != 0) {
              uVal_5 = uVal_7 - uVal_7 % (uint64_t)uVal_9;
            }
            uVal_8 = 0xfffffffe;
            if (uVal_5 < 0xfffffffe) {
              uVal_8 = (uint)uVal_5;
            }
            iVal_3 = _fileno(param_4);
            uVal_4 = func_0x18069dac8(iVal_3,param_1,uVal_8,param_5);
            if (uVal_4 != 0xffffffff) {
              uVal_6 = uVal_4;
              if (uVal_8 < uVal_4) {
                uVal_6 = uVal_8;
              }
              uVal_5 = (uint64_t)uVal_6;
              uVal_7 = uVal_7 - uVal_5;
              if (uVal_8 <= uVal_4) goto LAB_180683afe;
            }
LAB_180683ab2:
            LOCK();
            pU64_1 = (uint *)((int64_t)&param_4->_base + 4);
            *pU64_1 = *pU64_1 | 0x10;
            UNLOCK();
LAB_180683ab7:
            return (param_2 * param_3 - uVal_7) / param_2;
          }
          iVal_3 = func_0x18069e414((int)*param_1,param_4,param_5);
          if (iVal_3 == -1) goto LAB_180683ab7;
          uVal_9 = param_4->_charbuf;
          uVal_7 = uVal_7 - 1;
          if ((int)uVal_9 < 1) {
            uVal_9 = 1;
            uVal_5 = 1;
          }
          else {
            uVal_5 = 1;
          }
        }
        else {
          if (*(int *)&param_4->_base < 0) goto LAB_180683ab2;
          if ((*(uint *)((int64_t)&param_4->_base + 4) & 1) != 0) goto LAB_180683ab7;
          uVal_5 = uVal_7;
          if ((uint64_t)(int64_t)*(int *)&param_4->_base <= uVal_7) {
            uVal_5 = (int64_t)*(int *)&param_4->_base;
          }
          func_0x1806aa960(param_4->_ptr,param_1,uVal_5);
          *(int *)&param_4->_base = *(int *)&param_4->_base - (int)uVal_5;
          uVal_7 = uVal_7 - uVal_5;
          param_4->_ptr = param_4->_ptr + uVal_5;
        }
LAB_180683afe:
        param_1 = param_1 + uVal_5;
      } while( true );
    }
    *(uint8_t *)(param_5 + 0x30) = 1;
    *(uint32_t *)(param_5 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_5);
  }
  return 0;
}

// func_0x180683b14
uint64_t func_0x180683b14(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int64_t param_5 )
{
  uint64_t uVal_1;
  uint64_t local_res8;
  int64_t local_res10;
  int64_t local_res18;
  int64_t local_res20;
  uint8_t local_48 [8];
  int64_t local_40;
  int64_t local_38;
  int64_t *local_30;
  int64_t local_28;
  uint64_t *local_20;
  int64_t *local_18;
  int64_t *local_10;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (param_4 != 0) {
      local_30 = &local_res20;
      local_28 = param_5;
      local_20 = &local_res8;
      local_18 = &local_res10;
      local_10 = &local_res18;
      local_40 = param_4;
      local_38 = param_4;
      uVal_1 = operator()<>(local_48,&local_38,&local_30,&local_40);
      return uVal_1;
    }
    *(uint8_t *)(param_5 + 0x30) = 1;
    *(uint32_t *)(param_5 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_5);
  }
  return 0;
}

// func_0x180683bb0
uint64_t func_0x180683bb0(uint64_t *param_1)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint8_t uVal_3;
  uint64_t uVal_4;
  
  uVal_1 = param_1[1];
  uVal_2 = *(uint64_t *)*param_1;
  uVal_3 = func_0x180699cf0(uVal_2);
  uVal_4 = func_0x180683900(*(uint64_t *)param_1[2],*(uint64_t *)param_1[3],
                        *(uint64_t *)param_1[4],*(uint64_t *)*param_1,param_1[1]);
  func_0x180699e04(uVal_3,uVal_2,uVal_1);
  return uVal_4;
}

// operator()<>
/* Library Function - Multiple Matches With Same Base Name
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_2831f20263db5b546e098b45503eb778>,class <lambda_5856287d7ecd2be6c9197bb4007c3f6e> &
   __ptr64,class <lambda_0838d7e100fbcbd261b69cfea6abb102> >(class
   <lambda_2831f20263db5b546e098b45503eb778> && __ptr64,class
   <lambda_5856287d7ecd2be6c9197bb4007c3f6e> & __ptr64,class
   <lambda_0838d7e100fbcbd261b69cfea6abb102> && __ptr64) __ptr64
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_5d4c3fee44080f75d5d9762853974fe0>,class <lambda_532e024f4337e6fc7ad266c2bef9f4ed> &
   __ptr64,class <lambda_c87bdc10097eb2402edb8ba9bdf0697b> >(class
   <lambda_5d4c3fee44080f75d5d9762853974fe0> && __ptr64,class
   <lambda_532e024f4337e6fc7ad266c2bef9f4ed> & __ptr64,class
   <lambda_c87bdc10097eb2402edb8ba9bdf0697b> && __ptr64) __ptr64
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_bdbcead8b570fa3d5ec6d9679862a6e5>,class <lambda_96f4279ff90247a4c5c5d9824f56f8c1> &
   __ptr64,class <lambda_4606be27f17b5e5579e09050fab91818> >(class
   <lambda_bdbcead8b570fa3d5ec6d9679862a6e5> && __ptr64,class
   <lambda_96f4279ff90247a4c5c5d9824f56f8c1> & __ptr64,class
   <lambda_4606be27f17b5e5579e09050fab91818> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_2831f20263db5b546e098b45503eb778>,class <lambda_5856287d7ecd2be6c9197bb4007c3f6e> &
   __ptr64,class <lambda_0838d7e100fbcbd261b69cfea6abb102> >(class
   <lambda_2831f20263db5b546e098b45503eb778> && __ptr64,class
   <lambda_5856287d7ecd2be6c9197bb4007c3f6e> & __ptr64,class
   <lambda_0838d7e100fbcbd261b69cfea6abb102> && __ptr64) __ptr64
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_5d4c3fee44080f75d5d9762853974fe0>,class <lambda_532e024f4337e6fc7ad266c2bef9f4ed> &
   __ptr64,class <lambda_c87bdc10097eb2402edb8ba9bdf0697b> >(class
   <lambda_5d4c3fee44080f75d5d9762853974fe0> && __ptr64,class
   <lambda_532e024f4337e6fc7ad266c2bef9f4ed> & __ptr64,class
   <lambda_c87bdc10097eb2402edb8ba9bdf0697b> && __ptr64) __ptr64
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_bdbcead8b570fa3d5ec6d9679862a6e5>,class <lambda_96f4279ff90247a4c5c5d9824f56f8c1> &
   __ptr64,class <lambda_4606be27f17b5e5579e09050fab91818> >(class
   <lambda_bdbcead8b570fa3d5ec6d9679862a6e5> && __ptr64,class
   <lambda_96f4279ff90247a4c5c5d9824f56f8c1> & __ptr64,class
   <lambda_4606be27f17b5e5579e09050fab91818> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint64_t
operator()<>(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t *param_4)
{
  uint64_t uVal_1;
  
  func_0x18067e324(*param_2);
  uVal_1 = func_0x180683bb0(param_3);
  func_0x18067e330(*param_4);
  return uVal_1;
}

// func_0x180683c70
uint64_t func_0x180683c70(uint param_1)
{
  uint32_t *pU64_1;
  
  if (param_1 == 0xfffffffe) {
    pU64_1 = (uint32_t *)func_0x180682400();
    *pU64_1 = 0;
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180843080)) {
      if ((*(byte *)((&DAT_180842c80)[(uint64_t)(int64_t)(int)param_1 >> 6] + 0x38 +
                    (uint64_t)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(uint64_t *)
                ((&DAT_180842c80)[(uint64_t)(int64_t)(int)param_1 >> 6] + 0x28 +
                (uint64_t)(param_1 & 0x3f) * 0x48);
      }
    }
    pU64_1 = (uint32_t *)func_0x180682400();
    *pU64_1 = 0;
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 9;
    func_0x180684970();
  }
  return 0xffffffffffffffff;
}

// _alloc_osfhnd
/* Library Function - Single Match
    _alloc_osfhnd
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    _alloc_osfhnd
   
   Library: Visual Studio 2019 Release */
int __cdecl _alloc_osfhnd(void)
{
  LPCRITICAL_SECTION p_Var1;
  int64_t lVal_2;
  uint uVal_3;
  int iVal_4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  FID_conflict___acrt_lock(7);
  uVal_3 = 0xffffffff;
  iVal_4 = 0;
  do {
    if (0x7f < iVal_4) {
LAB_180683dff:
      FID_conflict___acrt_lock(7);
      return uVal_3;
    }
    p_Var1 = (LPCRITICAL_SECTION)(&DAT_180842c80)[iVal_4];
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
      lVal_2 = __acrt_lowio_create_handle_array();
      (&DAT_180842c80)[iVal_4] = lVal_2;
      if (lVal_2 != 0) {
        DAT_180843080 = DAT_180843080 + 0x40;
        uVal_3 = iVal_4 << 6;
        __acrt_lowio_lock_fh(uVal_3);
        *(uint8_t *)((&DAT_180842c80)[(int64_t)(int)uVal_3 >> 6] + 0x38) = 1;
      }
      goto LAB_180683dff;
    }
    for (lpCriticalSection = p_Var1;
        lpCriticalSection != (LPCRITICAL_SECTION)&p_Var1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      if ((*(byte *)&lpCriticalSection[1].OwningThread & 1) == 0) {
        EnterCriticalSection(lpCriticalSection);
        if ((*(byte *)&lpCriticalSection[1].OwningThread & 1) == 0) {
          uVal_3 = (int)(((int64_t)lpCriticalSection - (int64_t)p_Var1) / 0x48) + iVal_4 * 0x40;
          *(uint8_t *)
           ((&DAT_180842c80)[(int64_t)(int)uVal_3 >> 6] + 0x38 + (uint64_t)(uVal_3 & 0x3f) * 0x48) =
               1;
          *(uint64_t *)
           ((&DAT_180842c80)[(int64_t)(int)uVal_3 >> 6] + 0x28 + (uint64_t)(uVal_3 & 0x3f) * 0x48) =
               0xffffffffffffffff;
          goto LAB_180683dff;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    iVal_4 = iVal_4 + 1;
  } while( true );
}

// func_0x180683e28
uint64_t func_0x180683e28(uint param_1)
{
  int iVal_1;
  uint64_t uVal_2;
  uint32_t *pU64_3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_180843080)) {
    uVal_2 = (uint64_t)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_180842c80)[(uint64_t)(int64_t)(int)param_1 >> 6] + 0x38 + uVal_2 * 0x48)
         & 1) != 0) &&
       (*(int64_t *)
         ((&DAT_180842c80)[(uint64_t)(int64_t)(int)param_1 >> 6] + 0x28 + uVal_2 * 0x48) != -1)) {
      iVal_1 = func_0x18069e660();
      if (iVal_1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_180683ea8;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_180683ea8:
      *(uint64_t *)
       ((&DAT_180842c80)[(uint64_t)(int64_t)(int)param_1 >> 6] + 0x28 + uVal_2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  pU64_3 = (uint32_t *)func_0x1806823dc();
  *pU64_3 = 9;
  pU64_3 = (uint32_t *)func_0x180682400();
  *pU64_3 = 0;
  return 0xffffffff;
}

// func_0x180683ee4
uint64_t func_0x180683ee4(uint param_1,HANDLE param_2)
{
  int iVal_1;
  uint32_t *pU64_2;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_180843080)) {
    if (*(int64_t *)
         ((&DAT_180842c80)[(uint64_t)(int64_t)(int)param_1 >> 6] + 0x28 +
         (uint64_t)(param_1 & 0x3f) * 0x48) == -1) {
      iVal_1 = func_0x18069e660();
      if (iVal_1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_180683f65;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_180683f65:
      *(HANDLE *)
       ((&DAT_180842c80)[(uint64_t)(int64_t)(int)param_1 >> 6] + 0x28 +
       (uint64_t)(param_1 & 0x3f) * 0x48) = param_2;
      return 0;
    }
  }
  pU64_2 = (uint32_t *)func_0x1806823dc();
  *pU64_2 = 9;
  pU64_2 = (uint32_t *)func_0x180682400();
  *pU64_2 = 0;
  return 0xffffffff;
}

// __acrt_lowio_create_handle_array
/* Library Function - Single Match
    __acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */
uint64_t * __acrt_lowio_create_handle_array(void)
{
  uint uVal_1;
  uint64_t *pU64_2;
  uint8_t *pU64_4;
  uint64_t *pU64_5;
  uint64_t *pU64_3;
  
  pU64_2 = (uint64_t *)_calloc_base(0x40);
  pU64_5 = (uint64_t *)0x0;
  if ((pU64_2 != (uint64_t *)0x0) && (pU64_5 = pU64_2, pU64_2 != pU64_2 + 0x240)) {
    pU64_2 = pU64_2 + 6;
    do {
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(pU64_2 + -6),4000,0);
      pU64_2[-1] = 0xffffffffffffffff;
      pU64_4 = (uint8_t *)((int64_t)pU64_2 + 0xe);
      *(byte *)((int64_t)pU64_2 + 0xd) = *(byte *)((int64_t)pU64_2 + 0xd) & 0xf8;
      *pU64_2 = 0;
      *(uint32_t *)(pU64_2 + 1) = 0xa0a0000;
      *(uint8_t *)((int64_t)pU64_2 + 0xc) = 10;
      pU64_3 = (uint64_t *)0x0;
      do {
        *pU64_4 = 0;
        uVal_1 = (int)pU64_3 + 1;
        pU64_3 = (uint64_t *)(uint64_t)uVal_1;
        pU64_4 = pU64_4 + 1;
      } while (uVal_1 < 5);
      pU64_3 = pU64_2 + 3;
      pU64_2 = pU64_2 + 9;
    } while (pU64_3 != pU64_2 + 0x240);
  }
  func_0x180695dd0(0);
  return pU64_5;
}

// __acrt_lowio_destroy_handle_array
/* Library Function - Single Match
    __acrt_lowio_destroy_handle_array
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_lowio_destroy_handle_array
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)
{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    lpCriticalSection = param_1;
    if (param_1 != (LPCRITICAL_SECTION)&param_1[0x73].LockCount) {
      do {
        DeleteCriticalSection(lpCriticalSection);
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount;
      } while (lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x73].LockCount);
    }
    func_0x180695dd0(param_1);
  }
  return;
}

// __acrt_lowio_ensure_fh_exists
/* Library Function - Single Match
    __acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2019 Release */
int64_t __acrt_lowio_ensure_fh_exists(uint param_1)
{
  int iVal_1;
  uint32_t *pU64_2;
  int64_t lVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  
  if (param_1 < 0x2000) {
    lVal_3 = 0;
    FID_conflict___acrt_lock(7);
    lVal_5 = lVal_3;
    iVal_1 = DAT_180843080;
    while (iVal_1 <= (int)param_1) {
      if ((&DAT_180842c80)[lVal_5] == 0) {
        lVal_4 = __acrt_lowio_create_handle_array();
        (&DAT_180842c80)[lVal_5] = lVal_4;
        if (lVal_4 == 0) {
          lVal_3 = 0xc;
          break;
        }
        iVal_1 = DAT_180843080 + 0x40;
        DAT_180843080 = iVal_1;
      }
      lVal_5 = lVal_5 + 1;
    }
    FID_conflict___acrt_lock(7);
  }
  else {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 9;
    func_0x180684970();
    lVal_3 = 9;
  }
  return lVal_3;
}

// __acrt_lowio_lock_fh
/* Library Function - Single Match
    __acrt_lowio_lock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_lowio_lock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_lowio_lock_fh(uint param_1)
{
                    /* WARNING: Could not recover jumptable at 0x000180684164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + (uint64_t)(param_1 & 0x3f) * 0x48));
  return;
}

// __acrt_lowio_unlock_fh
/* Library Function - Single Match
    __acrt_lowio_unlock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_lowio_unlock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_lowio_unlock_fh(uint param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018068418c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + (uint64_t)(param_1 & 0x3f) * 0x48));
  return;
}

// common_gmtime_s<__int64>
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl common_gmtime_s<__int64>(tm *param_1,__int64 *param_2)
{
  uint64_t uVal_1;
  uint32_t uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int iVal_5;
  uint32_t *pU64_6;
  int64_t lVal_7;
  int iVal_8;
  int *pInt_9;
  int *pInt_10;
  bool abStackX_8 [8];
  int64_t alStackX_18 [2];
  
  uVal_3 = _UNK_1806df728;
  uVal_1 = _DAT_1806df720;
  if (param_1 != (tm *)0x0) {
    uVal_2 = _UNK_1806df724;
    param_1->tm_sec = _DAT_1806df720;
    uVal_4 = _UNK_1806df728;
    param_1->tm_min = uVal_2;
    _UNK_1806df728 = (uint32_t)uVal_3;
    _UNK_1806df72c = SUB84(uVal_3,4);
    uVal_2 = _UNK_1806df72c;
    param_1->tm_hour = _UNK_1806df728;
    _UNK_1806df728 = uVal_4;
    uVal_4 = _DAT_1806df720;
    param_1->tm_mday = uVal_2;
    _DAT_1806df720 = (uint32_t)uVal_1;
    _UNK_1806df724 = SUB84(uVal_1,4);
    uVal_2 = _UNK_1806df724;
    param_1->tm_mon = _DAT_1806df720;
    _DAT_1806df720 = uVal_4;
    uVal_4 = _UNK_1806df728;
    param_1->tm_year = uVal_2;
    _UNK_1806df728 = (uint32_t)uVal_3;
    _UNK_1806df72c = SUB84(uVal_3,4);
    uVal_2 = _UNK_1806df72c;
    param_1->tm_wday = _UNK_1806df728;
    _UNK_1806df728 = uVal_4;
    param_1->tm_yday = uVal_2;
    param_1->tm_isdst = (int)uVal_1;
    if (param_2 != (__int64 *)0x0) {
      alStackX_18[0] = *param_2;
      if ((-0xa8c1 < alStackX_18[0]) && (alStackX_18[0] < 0x79358efe0)) {
        abStackX_8[0] = false;
        iVal_5 = compute_year(alStackX_18,abStackX_8);
        pInt_9 = (int *)&DAT_1806e7830;
        param_1->tm_year = iVal_5;
        iVal_8 = 1;
        iVal_5 = (int)(alStackX_18[0] / 0x15180);
        param_1->tm_yday = iVal_5;
        alStackX_18[0] = alStackX_18[0] + (int64_t)iVal_5 * -0x15180;
        pInt_10 = pInt_9;
        if (abStackX_8[0] != false) {
          pInt_9 = (int *)&DAT_1806e7868;
          pInt_10 = pInt_9;
        }
        while (pInt_9 = pInt_9 + 1, *pInt_9 < iVal_5) {
          iVal_8 = iVal_8 + 1;
        }
        param_1->tm_mon = iVal_8 + -1;
        param_1->tm_mday = iVal_5 - pInt_10[(int64_t)iVal_8 + -1];
        lVal_7 = *param_2;
        param_1->tm_isdst = 0;
        param_1->tm_wday = ((int)(lVal_7 / 0x15180) + 4) % 7;
        iVal_5 = (int)(alStackX_18[0] / 0xe10);
        param_1->tm_hour = iVal_5;
        alStackX_18[0] = alStackX_18[0] + (int64_t)iVal_5 * -0xe10;
        lVal_7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(alStackX_18[0]),8) + alStackX_18[0];
        iVal_5 = (int)(lVal_7 >> 5) - (int)(lVal_7 >> 0x3f);
        param_1->tm_min = iVal_5;
        param_1->tm_sec = (int)alStackX_18[0] + iVal_5 * -0x3c;
        return 0;
      }
      pU64_6 = (uint32_t *)func_0x1806823dc();
      *pU64_6 = 0x16;
      return 0x16;
    }
  }
  pU64_6 = (uint32_t *)func_0x1806823dc();
  *pU64_6 = 0x16;
  func_0x180684970();
  return 0x16;
}

// compute_year
/* Library Function - Single Match
    int __cdecl compute_year(__int64 & __ptr64,bool & __ptr64)
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    int __cdecl compute_year(__int64 & __ptr64,bool & __ptr64)
   
   Library: Visual Studio 2019 Release */
int __cdecl compute_year(__int64 *param_1,bool *param_2)
{
  int iVal_1;
  int64_t lVal_2;
  int iVal_3;
  char ch_4;
  int iVal_5;
  int64_t lVal_6;
  
  lVal_6 = *param_1;
  lVal_2 = lVal_6 + SUB168(SEXT816(-0x77ceb70a34ed8f47) * SEXT816(lVal_6),8);
  iVal_3 = (int)((uint64_t)lVal_2 >> 0x18) - (int)(lVal_2 >> 0x3f);
  iVal_5 = iVal_3 + 0x46;
  iVal_1 = iVal_3 + 0x45;
  lVal_6 = lVal_6 + ((int64_t)
                   (((iVal_3 + 0x171) / 400 - iVal_1 / 100) +
                   ((int)(iVal_1 + (iVal_1 >> 0x1f & 3U)) >> 2) + -0x11) + (int64_t)iVal_3 * 0x16d) *
                  -0x15180;
  *param_1 = lVal_6;
  if (lVal_6 < 0) {
    *param_1 = lVal_6 + 0x1e13380;
    ch_4 = __crt_time_is_leap_year<>(iVal_1);
    if (ch_4 == '\0') {
      return iVal_1;
    }
    *param_1 = lVal_6 + 0x1e28500;
    iVal_5 = iVal_1;
  }
  else {
    ch_4 = __crt_time_is_leap_year<>(iVal_5);
    if (ch_4 == '\0') {
      return iVal_5;
    }
  }
  *param_2 = true;
  return iVal_5;
}

// common_gmtime_s<__int64>
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    int __cdecl common_gmtime_s<__int64>(struct tm * __ptr64 const,__int64 const * __ptr64 const)
   
   Library: Visual Studio 2019 Release */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    int __cdecl common_gmtime_s<__int64>(struct tm * __ptr64 const,__int64 const * __ptr64 const)
   
   Library: Visual Studio 2019 Release */

int __cdecl common_gmtime_s<__int64>(tm *param_1,__int64 *param_2)
{
  uint64_t uVal_1;
  uint32_t uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int iVal_5;
  uint32_t *pU64_6;
  int64_t lVal_7;
  int iVal_8;
  int *pInt_9;
  int *pInt_10;
  bool local_res8 [8];
  int64_t local_res18 [2];
  
  uVal_3 = _UNK_1806df728;
  uVal_1 = _DAT_1806df720;
  if (param_1 != (tm *)0x0) {
    uVal_2 = _UNK_1806df724;
    param_1->tm_sec = _DAT_1806df720;
    uVal_4 = _UNK_1806df728;
    param_1->tm_min = uVal_2;
    _UNK_1806df728 = (uint32_t)uVal_3;
    _UNK_1806df72c = SUB84(uVal_3,4);
    uVal_2 = _UNK_1806df72c;
    param_1->tm_hour = _UNK_1806df728;
    _UNK_1806df728 = uVal_4;
    uVal_4 = _DAT_1806df720;
    param_1->tm_mday = uVal_2;
    _DAT_1806df720 = (uint32_t)uVal_1;
    _UNK_1806df724 = SUB84(uVal_1,4);
    uVal_2 = _UNK_1806df724;
    param_1->tm_mon = _DAT_1806df720;
    _DAT_1806df720 = uVal_4;
    uVal_4 = _UNK_1806df728;
    param_1->tm_year = uVal_2;
    _UNK_1806df728 = (uint32_t)uVal_3;
    _UNK_1806df72c = SUB84(uVal_3,4);
    uVal_2 = _UNK_1806df72c;
    param_1->tm_wday = _UNK_1806df728;
    _UNK_1806df728 = uVal_4;
    param_1->tm_yday = uVal_2;
    param_1->tm_isdst = (int)uVal_1;
    if (param_2 != (__int64 *)0x0) {
      local_res18[0] = *param_2;
      if ((-0xa8c1 < local_res18[0]) && (local_res18[0] < 0x79358efe0)) {
        local_res8[0] = false;
        iVal_5 = compute_year(local_res18,local_res8);
        pInt_9 = (int *)&DAT_1806e7830;
        param_1->tm_year = iVal_5;
        iVal_8 = 1;
        iVal_5 = (int)(local_res18[0] / 0x15180);
        param_1->tm_yday = iVal_5;
        local_res18[0] = local_res18[0] + (int64_t)iVal_5 * -0x15180;
        pInt_10 = pInt_9;
        if (local_res8[0] != false) {
          pInt_9 = (int *)&DAT_1806e7868;
          pInt_10 = pInt_9;
        }
        while (pInt_9 = pInt_9 + 1, *pInt_9 < iVal_5) {
          iVal_8 = iVal_8 + 1;
        }
        param_1->tm_mon = iVal_8 + -1;
        param_1->tm_mday = iVal_5 - pInt_10[(int64_t)iVal_8 + -1];
        lVal_7 = *param_2;
        param_1->tm_isdst = 0;
        param_1->tm_wday = ((int)(lVal_7 / 0x15180) + 4) % 7;
        iVal_5 = (int)(local_res18[0] / 0xe10);
        param_1->tm_hour = iVal_5;
        local_res18[0] = local_res18[0] + (int64_t)iVal_5 * -0xe10;
        lVal_7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(local_res18[0]),8) + local_res18[0];
        iVal_5 = (int)(lVal_7 >> 5) - (int)(lVal_7 >> 0x3f);
        param_1->tm_min = iVal_5;
        param_1->tm_sec = (int)local_res18[0] + iVal_5 * -0x3c;
        return 0;
      }
      pU64_6 = (uint32_t *)func_0x1806823dc();
      *pU64_6 = 0x16;
      return 0x16;
    }
  }
  pU64_6 = (uint32_t *)func_0x1806823dc();
  *pU64_6 = 0x16;
  func_0x180684970();
  return 0x16;
}

// thunk_FUN_1806844ac
uint64_t thunk_FUN_1806844ac(void)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_3 = 0;
  if (DAT_180842738 == 0) {
    __acrt_initialize_multibyte();
    lVal_2 = func_0x18069e668();
    if (lVal_2 == 0) {
      func_0x180695dd0(0);
      uVal_3 = 0xffffffff;
    }
    else {
      lVal_4 = func_0x18068460c(lVal_2);
      lVal_1 = lVal_4;
      if (lVal_4 == 0) {
        uVal_3 = 0xffffffff;
        lVal_4 = DAT_180842738;
        lVal_1 = DAT_180842750;
      }
      DAT_180842750 = lVal_1;
      DAT_180842738 = lVal_4;
      func_0x180695dd0(0);
      func_0x180695dd0(lVal_2);
    }
  }
  else {
    uVal_3 = 0;
  }
  return uVal_3;
}

// func_0x18068442c
int64_t func_0x18068442c(void)
{
  int iVal_1;
  int64_t lVal_2;
  
  lVal_2 = DAT_180842740;
  if ((DAT_180842740 == 0) &&
     ((DAT_180842738 == 0 ||
      ((iVal_1 = func_0x180684520(), lVal_2 = DAT_180842740, iVal_1 != 0 &&
       (iVal_1 = func_0x180684840(), lVal_2 = DAT_180842740, iVal_1 != 0)))))) {
    lVal_2 = 0;
  }
  return lVal_2;
}

// func_0x180684468
void func_0x180684468(void)
{
  uninitialize_environment_internal<>(&DAT_180842738);
  uninitialize_environment_internal<>(&DAT_180842740);
  free_environment<>(DAT_180842750);
  free_environment<>(DAT_180842748);
  return;
}

// func_0x1806844ac
uint64_t func_0x1806844ac(void)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_3 = 0;
  if (DAT_180842738 == 0) {
    __acrt_initialize_multibyte();
    lVal_2 = func_0x18069e668();
    if (lVal_2 == 0) {
      func_0x180695dd0(0);
      uVal_3 = 0xffffffff;
    }
    else {
      lVal_4 = func_0x18068460c(lVal_2);
      lVal_1 = lVal_4;
      if (lVal_4 == 0) {
        uVal_3 = 0xffffffff;
        lVal_4 = DAT_180842738;
        lVal_1 = DAT_180842750;
      }
      DAT_180842750 = lVal_1;
      DAT_180842738 = lVal_4;
      func_0x180695dd0(0);
      func_0x180695dd0(lVal_2);
    }
  }
  else {
    uVal_3 = 0;
  }
  return uVal_3;
}

// func_0x180684520
uint64_t func_0x180684520(void)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_3 = 0;
  if (DAT_180842740 == 0) {
    lVal_2 = func_0x18069e778();
    if (lVal_2 == 0) {
      func_0x180695dd0(0);
      uVal_3 = 0xffffffff;
    }
    else {
      lVal_4 = func_0x180684720(lVal_2);
      lVal_1 = lVal_4;
      if (lVal_4 == 0) {
        uVal_3 = 0xffffffff;
        lVal_4 = DAT_180842740;
        lVal_1 = DAT_180842748;
      }
      DAT_180842748 = lVal_1;
      DAT_180842740 = lVal_4;
      func_0x180695dd0(0);
      func_0x180695dd0(lVal_2);
    }
  }
  else {
    uVal_3 = 0;
  }
  return uVal_3;
}

// uninitialize_environment_internal<>
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(int64_t *param_1)
{
  if (*param_1 != DAT_180842750) {
    free_environment<>();
  }
  return;
}

// uninitialize_environment_internal<>
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(int64_t *param_1)
{
  if (*param_1 != DAT_180842748) {
    free_environment<>();
  }
  return;
}

// free_environment<>
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * __ptr64 * __ptr64 const)
    void __cdecl free_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * __ptr64 * __ptr64 const)
    void __cdecl free_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void free_environment<>(int64_t *param_1)
{
  int64_t lVal_1;
  int64_t *pLong_2;
  
  if (param_1 != (int64_t *)0x0) {
    lVal_1 = *param_1;
    pLong_2 = param_1;
    while (lVal_1 != 0) {
      func_0x180695dd0(lVal_1);
      pLong_2 = pLong_2 + 1;
      lVal_1 = *pLong_2;
    }
    func_0x180695dd0(param_1);
  }
  return;
}

// func_0x18068460c
int64_t * func_0x18068460c(char *param_1)
{
  int iVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  char ch_4;
  int64_t lVal_5;
  int64_t lVal_6;
  char *fnPtr_7;
  int64_t *pLong_8;
  
  ch_4 = *param_1;
  lVal_5 = 0;
  fnPtr_7 = param_1;
  while (ch_4 != '\0') {
    lVal_6 = lVal_5 + 1;
    if (ch_4 == '=') {
      lVal_6 = lVal_5;
    }
    lVal_5 = -1;
    do {
      lVal_2 = lVal_5;
      lVal_5 = lVal_2 + 1;
    } while (fnPtr_7[lVal_5] != '\0');
    fnPtr_7 = fnPtr_7 + lVal_2 + 2;
    lVal_5 = lVal_6;
    ch_4 = *fnPtr_7;
  }
  pLong_3 = (int64_t *)_calloc_base(lVal_5 + 1,8);
  pLong_8 = pLong_3;
  if (pLong_3 == (int64_t *)0x0) {
LAB_18068466f:
    func_0x180695dd0(0);
    pLong_3 = (int64_t *)0x0;
  }
  else {
    for (; *param_1 != '\0'; param_1 = param_1 + lVal_6) {
      lVal_5 = -1;
      do {
        lVal_6 = lVal_5;
        lVal_5 = lVal_6 + 1;
      } while (param_1[lVal_5] != '\0');
      lVal_6 = lVal_6 + 2;
      if (*param_1 != '=') {
        lVal_5 = _calloc_base(lVal_6,1);
        if (lVal_5 == 0) {
          free_environment<>(pLong_3);
          func_0x180695dd0(0);
          goto LAB_18068466f;
        }
        iVal_1 = func_0x180695c70();
        if (iVal_1 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *pLong_8 = lVal_5;
        pLong_8 = pLong_8 + 1;
        func_0x180695dd0();
      }
    }
    func_0x180695dd0(0);
  }
  return pLong_3;
}

// func_0x180684720
int64_t * func_0x180684720(short *param_1)
{
  int iVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  short sz_4;
  int64_t lVal_5;
  int64_t lVal_6;
  short *pSize_7;
  int64_t *pLong_8;
  
  sz_4 = *param_1;
  lVal_5 = 0;
  pSize_7 = param_1;
  while (sz_4 != 0) {
    lVal_6 = lVal_5 + 1;
    if (sz_4 == 0x3d) {
      lVal_6 = lVal_5;
    }
    lVal_5 = -1;
    do {
      lVal_2 = lVal_5;
      lVal_5 = lVal_2 + 1;
    } while (pSize_7[lVal_5] != 0);
    pSize_7 = pSize_7 + lVal_2 + 2;
    lVal_5 = lVal_6;
    sz_4 = *pSize_7;
  }
  pLong_3 = (int64_t *)_calloc_base(lVal_5 + 1,8);
  pLong_8 = pLong_3;
  if (pLong_3 == (int64_t *)0x0) {
LAB_18068478b:
    func_0x180695dd0(0);
    pLong_3 = (int64_t *)0x0;
  }
  else {
    for (; *param_1 != 0; param_1 = param_1 + lVal_6) {
      lVal_5 = -1;
      do {
        lVal_6 = lVal_5;
        lVal_5 = lVal_6 + 1;
      } while (param_1[lVal_5] != 0);
      lVal_6 = lVal_6 + 2;
      if (*param_1 != 0x3d) {
        lVal_5 = _calloc_base(lVal_6,2);
        if (lVal_5 == 0) {
          free_environment<>(pLong_3);
          func_0x180695dd0(0);
          goto LAB_18068478b;
        }
        iVal_1 = func_0x180696710();
        if (iVal_1 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *pLong_8 = lVal_5;
        pLong_8 = pLong_8 + 1;
        func_0x180695dd0();
      }
    }
    func_0x180695dd0(0);
  }
  return pLong_3;
}

// func_0x180684840
uint64_t func_0x180684840(void)
{
  int iVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  
  pLong_4 = DAT_180842738;
  if (DAT_180842738 == (int64_t *)0x0) {
LAB_180684863:
    uVal_2 = 0xffffffff;
  }
  else {
    for (; *pLong_4 != 0; pLong_4 = pLong_4 + 1) {
      iVal_1 = func_0x180695e90(0,0,*pLong_4,0xffffffff,0,0);
      if (iVal_1 == 0) goto LAB_180684863;
      lVal_3 = _calloc_base((int64_t)iVal_1);
      if (lVal_3 == 0) {
        lVal_3 = 0;
LAB_1806848f0:
        func_0x180695dd0(lVal_3);
        goto LAB_180684863;
      }
      iVal_1 = func_0x180695e90(0,0,*pLong_4,0xffffffff,lVal_3,iVal_1);
      if (iVal_1 == 0) goto LAB_1806848f0;
      thunk_FUN_18069e81c();
      func_0x180695dd0();
    }
    uVal_2 = 0;
  }
  return uVal_2;
}

// func_0x1806848fc
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x1806848fc(func_ptr_t *param_1,func_ptr_t *param_2)
{
  if (param_1 != param_2) {
    do {
      if (*param_1 != (func_ptr_t )0x0) {
        (**param_1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}

// func_0x180684934
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
uint64_t func_0x180684934(func_ptr_t *param_1,func_ptr_t *param_2)
{
  uint64_t uVal_1;
  
  if (param_1 != param_2) {
    do {
      if ((*param_1 != (func_ptr_t )0x0) && (uVal_1 = (**param_1)(), (int)uVal_1 != 0)) {
        return uVal_1;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return 0;
}

// func_0x180684970
void func_0x180684970(void)
{
  func_0x180684cc0(0,0,0,0,0);
  return;
}

// _invoke_watson
/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __cdecl _invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)
{
  func_ptr_t fnPtr_1;
  BOOL BVar2;
  HANDLE pVoid_3;
  uint8_t *pU64_4;
  uint8_t auStack_28 [8];
  uint8_t auStack_20 [32];
  uint32_t extraout_var;
  
  pU64_4 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    fnPtr_1 = (func_ptr_t )swi(0x29);
    (*fnPtr_1)(5);
    pU64_4 = auStack_20;
  }
  *(uint64_t *)(pU64_4 + -8) = 0x1806849be;
  func_0x1806849d8(2,0xc0000417);
  *(uint64_t *)(pU64_4 + -8) = 0x1806849c4;
  pVoid_3 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x0001806849d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess((HANDLE)CONCAT44(extraout_var,(int)pVoid_3),0xc0000417);
  return;
}

// func_0x1806849d8
void func_0x1806849d8(int param_1,DWORD param_2,DWORD param_3)
{
  BOOL BVar1;
  LONG LVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  uint8_t auStackX_8 [8];
  uint8_t auStackY_608 [32];
  DWORD64 local_5c8;
  uint64_t local_5c0;
  PVOID local_5b8;
  _EXCEPTION_POINTERS local_5b0;
  EXCEPTION_RECORD local_598;
  _CONTEXT local_4f8;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStackY_608;
  if (param_1 != -1) {
    func_0x180679250();
  }
  func_0x1806ab010(&local_598,0,0x98);
  func_0x1806ab010(&local_4f8,0,0x4d0);
  local_5c0 = 0;
  local_5b0.ExceptionRecord = &local_598;
  local_5c8 = 0;
  local_5b8 = (PVOID)0x0;
  local_5b0.ContextRecord = &local_4f8;
  RtlCaptureContext(&local_4f8);
  FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,&local_5c8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_5c8,local_4f8.Rip,FunctionEntry,&local_4f8,&local_5b8,&local_5c0,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  local_4f8.Rsp = (DWORD64)auStackX_8;
  local_598.ExceptionCode = param_2;
  local_598.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_5b0);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    func_0x180679250(param_1);
  }
  func_0x180673080(local_28 ^ (uint64_t)auStackY_608);
  return;
}

// func_0x180684b48
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180684b48(uint64_t param_1)
{
  _DAT_180842758 = param_1;
  return;
}

// func_0x180684b50
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x180684b50(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5 ,uint64_t param_6)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  byte bFlag_3;
  func_ptr_t fnPtr_4;
  
  lVal_1 = func_0x180684c08(param_6);
  if ((lVal_1 == 0) || (fnPtr_4 = *(func_ptr_t *)(lVal_1 + 0x3b8), fnPtr_4 == (func_ptr_t )0x0)) {
    pU64_2 = (uint64_t *)func_0x180684c74(&DAT_180842758,param_6);
    bFlag_3 = (byte)DAT_18083cf40 & 0x3f;
    fnPtr_4 = (func_ptr_t )((*pU64_2 ^ DAT_18083cf40) >> bFlag_3 | (*pU64_2 ^ DAT_18083cf40) << 0x40 - bFlag_3
                     );
    if (fnPtr_4 == (func_ptr_t )0x0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson(param_1,param_2,param_3,param_4,param_5);
    }
  }
  (*fnPtr_4)(param_1,param_2,param_3,param_4,param_5);
  return;
}

// func_0x180684c08
int64_t func_0x180684c08(int64_t *param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  DWORD local_res8 [2];
  
  lVal_1 = *param_1;
  lVal_2 = 0;
  if (lVal_1 == 0) {
    local_res8[0] = GetLastError();
    if (*(char *)(param_1 + 2) == '\0') {
      param_1[1] = 0;
      *(uint8_t *)(param_1 + 2) = 1;
    }
    else {
      lVal_2 = param_1[1];
    }
    lVal_1 = func_0x1806961a8(local_res8,lVal_2);
    *param_1 = lVal_1;
    SetLastError(local_res8[0]);
  }
  return lVal_1;
}

// func_0x180684c74
int64_t func_0x180684c74(int64_t param_1,int64_t param_2)
{
  DWORD dwErrCode;
  int64_t lVal_1;
  
  lVal_1 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    dwErrCode = GetLastError();
    *(uint64_t *)(param_2 + 8) = 0;
    *(uint8_t *)(param_2 + 0x10) = 1;
    SetLastError(dwErrCode);
  }
  else {
    lVal_1 = *(int64_t *)(param_2 + 8);
  }
  return param_1 + lVal_1 * 8;
}

// func_0x180684cc0
void func_0x180684cc0(void)
{
  int64_t lVal_1;
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
  func_0x180684b50();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVal_1 = func_0x18067e900(local_48);
    *(uint32_t *)(lVal_1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVal_1 = func_0x18067e900(local_48);
    *(uint32_t *)(lVal_1 + 0x24) = local_14;
  }
  return;
}

// func_0x180684d5c
byte func_0x180684d5c(uint param_1)
{
  uint32_t *pU64_1;
  
  if (param_1 == 0xfffffffe) {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180843080)) {
      return *(byte *)((&DAT_180842c80)[(uint64_t)(int64_t)(int)param_1 >> 6] + 0x38 +
                      (uint64_t)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 9;
    func_0x180684970();
  }
  return 0;
}

// thunk_FUN_180684dc4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int thunk_FUN_180684dc4(tm *param_1,__int64 *param_2)
{
  uint64_t uVal_1;
  uint32_t uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  errno_t eVar5;
  int iVal_6;
  int iVal_7;
  uint32_t *pU64_8;
  int64_t lVal_9;
  int64_t lVal_10;
  int aiStackX_8 [4];
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  int64_t alStack_28 [2];
  
  uVal_3 = _UNK_1806df728;
  uVal_1 = _DAT_1806df720;
  if (param_1 != (tm *)0x0) {
    uVal_2 = _UNK_1806df724;
    param_1->tm_sec = _DAT_1806df720;
    uVal_4 = _UNK_1806df728;
    param_1->tm_min = uVal_2;
    _UNK_1806df728 = (uint32_t)uVal_3;
    _UNK_1806df72c = SUB84(uVal_3,4);
    uVal_2 = _UNK_1806df72c;
    param_1->tm_hour = _UNK_1806df728;
    _UNK_1806df728 = uVal_4;
    uVal_4 = _DAT_1806df720;
    param_1->tm_mday = uVal_2;
    _DAT_1806df720 = (uint32_t)uVal_1;
    _UNK_1806df724 = SUB84(uVal_1,4);
    uVal_2 = _UNK_1806df724;
    param_1->tm_mon = _DAT_1806df720;
    _DAT_1806df720 = uVal_4;
    uVal_4 = _UNK_1806df728;
    param_1->tm_year = uVal_2;
    _UNK_1806df728 = (uint32_t)uVal_3;
    _UNK_1806df72c = SUB84(uVal_3,4);
    uVal_2 = _UNK_1806df72c;
    param_1->tm_wday = _UNK_1806df728;
    _UNK_1806df728 = uVal_4;
    param_1->tm_yday = uVal_2;
    param_1->tm_isdst = (int)uVal_1;
    if (param_2 != (__int64 *)0x0) {
      if ((*param_2 < 0) || (0x793582aff < *param_2)) {
        pU64_8 = (uint32_t *)func_0x1806823dc();
        *pU64_8 = 0x16;
        return 0x16;
      }
      __tzset();
      aiStackX_18[0] = 0;
      aiStackX_20[0] = 0;
      aiStackX_8[0] = 0;
      eVar5 = FID_conflict__get_daylight(aiStackX_18);
      if ((eVar5 == 0) &&
         ((eVar5 = _get_dstbias(aiStackX_20), eVar5 == 0 &&
          (eVar5 = FID_conflict__get_daylight(aiStackX_8), eVar5 == 0)))) {
        if (*param_2 - 0x3f481U < 0x7935041fe) {
          alStack_28[0] = *param_2 - (int64_t)aiStackX_8[0];
          iVal_6 = common_gmtime_s<__int64>(param_1,alStack_28);
          if (iVal_6 != 0) {
            return iVal_6;
          }
          if ((aiStackX_18[0] != 0) && (iVal_6 = _isindst(param_1), iVal_6 != 0)) {
            alStack_28[0] = alStack_28[0] - aiStackX_20[0];
            iVal_6 = common_gmtime_s<__int64>(param_1,alStack_28);
            if (iVal_6 != 0) {
              return iVal_6;
            }
            param_1->tm_isdst = 1;
          }
        }
        else {
          iVal_6 = common_gmtime_s<__int64>(param_1,param_2);
          if (iVal_6 != 0) {
            return iVal_6;
          }
          iVal_6 = param_1->tm_sec;
          if ((aiStackX_18[0] != 0) && (iVal_7 = _isindst(param_1), iVal_7 != 0)) {
            aiStackX_8[0] = aiStackX_8[0] + aiStackX_20[0];
            param_1->tm_isdst = 1;
          }
          lVal_10 = (int64_t)iVal_6 - (int64_t)aiStackX_8[0];
          lVal_9 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVal_10),8) + lVal_10;
          iVal_6 = (int)lVal_10 + ((int)(lVal_9 >> 5) - (int)(lVal_9 >> 0x3f)) * -0x3c;
          param_1->tm_sec = iVal_6;
          if (iVal_6 < 0) {
            lVal_10 = lVal_10 + -0x3c;
            param_1->tm_sec = iVal_6 + 0x3c;
          }
          lVal_10 = lVal_10 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVal_10),8);
          lVal_10 = ((lVal_10 >> 5) - (lVal_10 >> 0x3f)) + (int64_t)param_1->tm_min;
          lVal_9 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVal_10),8) + lVal_10;
          iVal_6 = (int)lVal_10 + ((int)(lVal_9 >> 5) - (int)(lVal_9 >> 0x3f)) * -0x3c;
          param_1->tm_min = iVal_6;
          if (iVal_6 < 0) {
            lVal_10 = lVal_10 + -0x3c;
            param_1->tm_min = iVal_6 + 0x3c;
          }
          lVal_10 = lVal_10 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVal_10),8);
          lVal_10 = ((lVal_10 >> 5) - (lVal_10 >> 0x3f)) + (int64_t)param_1->tm_hour;
          iVal_6 = (int)lVal_10 + (int)(lVal_10 / 0x18) * -0x18;
          param_1->tm_hour = iVal_6;
          if (iVal_6 < 0) {
            lVal_10 = lVal_10 + -0x18;
            param_1->tm_hour = iVal_6 + 0x18;
          }
          lVal_10 = lVal_10 / 6 + (lVal_10 >> 0x3f);
          lVal_10 = (lVal_10 >> 2) - (lVal_10 >> 0x3f);
          iVal_6 = (int)lVal_10;
          if (lVal_10 < 1) {
            if (lVal_10 < 0) {
              iVal_7 = param_1->tm_mday + iVal_6;
              param_1->tm_mday = iVal_7;
              param_1->tm_wday = (param_1->tm_wday + 7 + iVal_6) % 7;
              iVal_6 = param_1->tm_yday + iVal_6;
              if (iVal_7 < 1) {
                param_1->tm_year = param_1->tm_year + -1;
                param_1->tm_mday = iVal_7 + 0x1f;
                param_1->tm_yday = iVal_6 + 0x16d;
                param_1->tm_mon = 0xb;
              }
              else {
                param_1->tm_yday = iVal_6;
              }
            }
          }
          else {
            param_1->tm_mday = param_1->tm_mday + iVal_6;
            param_1->tm_yday = param_1->tm_yday + iVal_6;
            param_1->tm_wday = (param_1->tm_wday + iVal_6) % 7;
          }
        }
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  pU64_8 = (uint32_t *)func_0x1806823dc();
  *pU64_8 = 0x16;
  func_0x180684970();
  return 0x16;
}

// func_0x180684dc4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int func_0x180684dc4(tm *param_1,__int64 *param_2)
{
  uint64_t uVal_1;
  uint32_t uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  errno_t eVar5;
  int iVal_6;
  int iVal_7;
  uint32_t *pU64_8;
  int64_t lVal_9;
  int64_t lVal_10;
  int local_res8 [4];
  int local_res18 [2];
  int local_res20 [2];
  int64_t local_28 [2];
  
  uVal_3 = _UNK_1806df728;
  uVal_1 = _DAT_1806df720;
  if (param_1 != (tm *)0x0) {
    uVal_2 = _UNK_1806df724;
    param_1->tm_sec = _DAT_1806df720;
    uVal_4 = _UNK_1806df728;
    param_1->tm_min = uVal_2;
    _UNK_1806df728 = (uint32_t)uVal_3;
    _UNK_1806df72c = SUB84(uVal_3,4);
    uVal_2 = _UNK_1806df72c;
    param_1->tm_hour = _UNK_1806df728;
    _UNK_1806df728 = uVal_4;
    uVal_4 = _DAT_1806df720;
    param_1->tm_mday = uVal_2;
    _DAT_1806df720 = (uint32_t)uVal_1;
    _UNK_1806df724 = SUB84(uVal_1,4);
    uVal_2 = _UNK_1806df724;
    param_1->tm_mon = _DAT_1806df720;
    _DAT_1806df720 = uVal_4;
    uVal_4 = _UNK_1806df728;
    param_1->tm_year = uVal_2;
    _UNK_1806df728 = (uint32_t)uVal_3;
    _UNK_1806df72c = SUB84(uVal_3,4);
    uVal_2 = _UNK_1806df72c;
    param_1->tm_wday = _UNK_1806df728;
    _UNK_1806df728 = uVal_4;
    param_1->tm_yday = uVal_2;
    param_1->tm_isdst = (int)uVal_1;
    if (param_2 != (__int64 *)0x0) {
      if ((*param_2 < 0) || (0x793582aff < *param_2)) {
        pU64_8 = (uint32_t *)func_0x1806823dc();
        *pU64_8 = 0x16;
        return 0x16;
      }
      __tzset();
      local_res18[0] = 0;
      local_res20[0] = 0;
      local_res8[0] = 0;
      eVar5 = FID_conflict__get_daylight(local_res18);
      if ((eVar5 == 0) &&
         ((eVar5 = _get_dstbias(local_res20), eVar5 == 0 &&
          (eVar5 = FID_conflict__get_daylight(local_res8), eVar5 == 0)))) {
        if (*param_2 - 0x3f481U < 0x7935041fe) {
          local_28[0] = *param_2 - (int64_t)local_res8[0];
          iVal_6 = common_gmtime_s<__int64>(param_1,local_28);
          if (iVal_6 != 0) {
            return iVal_6;
          }
          if ((local_res18[0] != 0) && (iVal_6 = _isindst(param_1), iVal_6 != 0)) {
            local_28[0] = local_28[0] - local_res20[0];
            iVal_6 = common_gmtime_s<__int64>(param_1,local_28);
            if (iVal_6 != 0) {
              return iVal_6;
            }
            param_1->tm_isdst = 1;
          }
        }
        else {
          iVal_6 = common_gmtime_s<__int64>(param_1,param_2);
          if (iVal_6 != 0) {
            return iVal_6;
          }
          iVal_6 = param_1->tm_sec;
          if ((local_res18[0] != 0) && (iVal_7 = _isindst(param_1), iVal_7 != 0)) {
            local_res8[0] = local_res8[0] + local_res20[0];
            param_1->tm_isdst = 1;
          }
          lVal_10 = (int64_t)iVal_6 - (int64_t)local_res8[0];
          lVal_9 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVal_10),8) + lVal_10;
          iVal_6 = (int)lVal_10 + ((int)(lVal_9 >> 5) - (int)(lVal_9 >> 0x3f)) * -0x3c;
          param_1->tm_sec = iVal_6;
          if (iVal_6 < 0) {
            lVal_10 = lVal_10 + -0x3c;
            param_1->tm_sec = iVal_6 + 0x3c;
          }
          lVal_10 = lVal_10 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVal_10),8);
          lVal_10 = ((lVal_10 >> 5) - (lVal_10 >> 0x3f)) + (int64_t)param_1->tm_min;
          lVal_9 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVal_10),8) + lVal_10;
          iVal_6 = (int)lVal_10 + ((int)(lVal_9 >> 5) - (int)(lVal_9 >> 0x3f)) * -0x3c;
          param_1->tm_min = iVal_6;
          if (iVal_6 < 0) {
            lVal_10 = lVal_10 + -0x3c;
            param_1->tm_min = iVal_6 + 0x3c;
          }
          lVal_10 = lVal_10 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVal_10),8);
          lVal_10 = ((lVal_10 >> 5) - (lVal_10 >> 0x3f)) + (int64_t)param_1->tm_hour;
          iVal_6 = (int)lVal_10 + (int)(lVal_10 / 0x18) * -0x18;
          param_1->tm_hour = iVal_6;
          if (iVal_6 < 0) {
            lVal_10 = lVal_10 + -0x18;
            param_1->tm_hour = iVal_6 + 0x18;
          }
          lVal_10 = lVal_10 / 6 + (lVal_10 >> 0x3f);
          lVal_10 = (lVal_10 >> 2) - (lVal_10 >> 0x3f);
          iVal_6 = (int)lVal_10;
          if (lVal_10 < 1) {
            if (lVal_10 < 0) {
              iVal_7 = param_1->tm_mday + iVal_6;
              param_1->tm_mday = iVal_7;
              param_1->tm_wday = (param_1->tm_wday + 7 + iVal_6) % 7;
              iVal_6 = param_1->tm_yday + iVal_6;
              if (iVal_7 < 1) {
                param_1->tm_year = param_1->tm_year + -1;
                param_1->tm_mday = iVal_7 + 0x1f;
                param_1->tm_yday = iVal_6 + 0x16d;
                param_1->tm_mon = 0xb;
              }
              else {
                param_1->tm_yday = iVal_6;
              }
            }
          }
          else {
            param_1->tm_mday = param_1->tm_mday + iVal_6;
            param_1->tm_yday = param_1->tm_yday + iVal_6;
            param_1->tm_wday = (param_1->tm_wday + iVal_6) % 7;
          }
        }
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  pU64_8 = (uint32_t *)func_0x1806823dc();
  *pU64_8 = 0x16;
  func_0x180684970();
  return 0x16;
}

// func_0x18068510c
uint64_t func_0x18068510c(void)
{
  uint64_t uVal_1;
  
  uVal_1 = (uint64_t)DAT_1808429b8;
  while ((int)uVal_1 != 0) {
    uVal_1 = (uint64_t)((int)uVal_1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180842760 + uVal_1 * 0x28));
    DAT_1808429b8 = DAT_1808429b8 - 1;
  }
  return 1;
}

// FID_conflict:__acrt_lock
/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void FID_conflict___acrt_lock(int param_1)
{
                    /* WARNING: Could not recover jumptable at 0x000180685156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_180842760 + (int64_t)param_1 * 0x28));
  return;
}

// FID_conflict:__acrt_lock
/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void FID_conflict___acrt_lock(int param_1)
{
                    /* WARNING: Could not recover jumptable at 0x000180685172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_180842760 + (int64_t)param_1 * 0x28));
  return;
}

// func_0x18068517c
void func_0x18068517c(void)
{
  func_0x180697310();
                    /* WARNING: Could not recover jumptable at 0x000180685190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180842800);
  return;
}

// func_0x1806851a8
uint64_t func_0x1806851a8(int64_t param_1)
{
  int iVal_1;
  uint uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint8_t local_res8 [8];
  int64_t local_58;
  int64_t local_50;
  char local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  char local_10;
  
  if (param_1 == 0) {
    uVal_3 = func_0x18069ec70();
  }
  else {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = '\0';
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_58,(__crt_locale_pointers *)0x0);
    uVal_4 = 0xfde9;
    if (*(int *)(local_50 + 0xc) == 0xfde9) {
      if (local_40 != '\0') {
        *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVal_1 = func_0x180696a9c();
      if (iVal_1 == 0) {
        if (local_40 != '\0') {
          *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
        }
        uVal_4 = 1;
      }
      else {
        if (local_40 != '\0') {
          *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
        }
        uVal_4 = 0;
      }
    }
    iVal_1 = func_0x18067b86c(param_1,&local_38,local_res8,uVal_4);
    if (iVal_1 == 0) {
      uVal_2 = func_0x18069ec70(local_28);
      uVal_3 = (uint64_t)uVal_2;
    }
    else {
      uVal_3 = 0xffffffff;
    }
    if (local_10 != '\0') {
      func_0x180695dd0(local_28);
    }
  }
  return uVal_3;
}

// func_0x18068528c
/* WARNING: Removing unreachable block (ram,0x0001806855b4) */
/* WARNING: Removing unreachable block (ram,0x0001806855b4) */
void func_0x18068528c(int *param_1)
{
  int iVal_1;
  uint64_t uVal_2;
  char ch_3;
  errno_t eVar4;
  uint32_t *pU64_5;
  int64_t lVal_6;
  int64_t lVal_7;
  int64_t lVal_8;
  int iVal_9;
  int64_t lVal_10;
  uint8_t auStackY_88 [32];
  uint64_t local_58;
  int local_50;
  int local_4c;
  uint8_t local_48 [8];
  int iStack_40;
  int iStack_3c;
  uint8_t local_38 [8];
  int iStack_30;
  int iStack_2c;
  int local_28;
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStackY_88;
  if (param_1 == (int *)0x0) {
    pU64_5 = (uint32_t *)func_0x1806823dc();
    *pU64_5 = 0x16;
    func_0x180684970();
    goto LAB_18068540b;
  }
  local_58 = (uint64_t)param_1[5];
  if ((0x44 < (int64_t)local_58) && (local_58 < 0x44f)) {
    iVal_9 = param_1[4];
    if ((iVal_9 < 0) || (0xb < iVal_9)) {
      iVal_1 = iVal_9 / 0xc;
      iVal_9 = iVal_9 % 0xc;
      local_58 = local_58 + (int64_t)iVal_1;
      param_1[4] = iVal_9;
      if (iVal_9 < 0) {
        iVal_9 = iVal_9 + 0xc;
        local_58 = local_58 - 1;
        param_1[4] = iVal_9;
      }
      if (((int64_t)local_58 < 0x45) || (0x44e < local_58)) goto LAB_1806853fc;
    }
    uVal_2 = local_58;
    lVal_10 = (int64_t)*(int *)(&DAT_1806e7830 + (int64_t)iVal_9 * 4);
    ch_3 = func_0x1806855dc(local_58);
    if ((ch_3 != '\0') && (1 < iVal_9)) {
      lVal_10 = lVal_10 + 1;
    }
    lVal_7 = uVal_2 - 1;
    lVal_6 = uVal_2 + 299 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((int64_t)(uVal_2 + 299)),8);
    lVal_8 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVal_7),8) + lVal_7;
    iVal_9 = param_1[3];
    lVal_7 = uVal_2 * 0x16d +
            ((int64_t)((uint64_t)((uint)(lVal_7 >> 0x3f) & 3) + lVal_7) >> 2) + -0x63df + lVal_10 +
            (((lVal_6 >> 8) - (lVal_6 >> 0x3f)) - ((lVal_8 >> 6) - (lVal_8 >> 0x3f)));
    lVal_10 = lVal_7 + iVal_9;
    if (lVal_7 < 0) {
      if ((-1 < iVal_9) || (lVal_10 < 0)) goto LAB_18068543b;
    }
    else if ((iVal_9 < 0) || (-1 < lVal_10)) {
LAB_18068543b:
      lVal_7 = lVal_10 * 0x18;
      if ((lVal_10 == 0) || (lVal_7 / lVal_10 == 0x18)) {
        lVal_6 = (int64_t)param_1[2];
        lVal_10 = lVal_6 + lVal_7;
        if (lVal_7 < 0) {
          if ((-1 < lVal_6) || (lVal_10 < 0)) goto LAB_180685479;
        }
        else if ((lVal_6 < 0) || (-1 < lVal_10)) {
LAB_180685479:
          lVal_7 = lVal_10 * 0x3c;
          if ((lVal_10 == 0) || (lVal_7 / lVal_10 == 0x3c)) {
            lVal_6 = (int64_t)param_1[1];
            lVal_10 = lVal_6 + lVal_7;
            if (lVal_7 < 0) {
              if ((-1 < lVal_6) || (lVal_10 < 0)) goto LAB_1806854bf;
            }
            else if ((lVal_6 < 0) || (-1 < lVal_10)) {
LAB_1806854bf:
              lVal_7 = lVal_10 * 0x3c;
              if ((lVal_10 == 0) || (lVal_7 / lVal_10 == 0x3c)) {
                lVal_10 = (int64_t)*param_1;
                local_58 = lVal_10 + lVal_7;
                if (lVal_7 < 0) {
                  if ((-1 < lVal_10) || ((int64_t)local_58 < 0)) goto LAB_180685508;
                }
                else if ((lVal_10 < 0) || (-1 < (int64_t)local_58)) {
LAB_180685508:
                  local_28 = 0;
                  _local_48 = ZEXT816(0);
                  _local_38 = ZEXT816(0);
                  __tzset();
                  local_4c = 0;
                  local_50 = 0;
                  eVar4 = _get_dstbias(&local_4c);
                  if ((eVar4 != 0) || (eVar4 = FID_conflict__get_daylight(&local_50), eVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                  local_58 = local_58 + (int64_t)local_50;
                  iVal_9 = thunk_FUN_180684dc4(local_48,&local_58);
                  if (iVal_9 == 0) {
                    if ((0 < param_1[8]) || ((param_1[8] < 0 && (0 < local_28)))) {
                      local_58 = local_58 + (int64_t)local_4c;
                      iVal_9 = thunk_FUN_180684dc4(local_48,&local_58);
                      if (iVal_9 != 0) goto LAB_1806853fc;
                    }
                    *param_1 = local_48._0_4_;
                    param_1[1] = local_48._4_4_;
                    param_1[2] = iStack_40;
                    param_1[3] = iStack_3c;
                    param_1[4] = local_38._0_4_;
                    param_1[5] = local_38._4_4_;
                    param_1[6] = iStack_30;
                    param_1[7] = iStack_2c;
                    param_1[8] = local_28;
                    goto LAB_18068540b;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1806853fc:
  pU64_5 = (uint32_t *)func_0x1806823dc();
  *pU64_5 = 0x16;
LAB_18068540b:
  func_0x180673080(local_20 ^ (uint64_t)auStackY_88);
  return;
}

// func_0x1806855dc
uint64_t func_0x1806855dc(int64_t param_1)
{
  uint uVal_1;
  int64_t lVal_2;
  
  uVal_1 = (uint)(param_1 >> 0x3f) & 3;
  if ((((int)param_1 + uVal_1 & 3) == uVal_1) &&
     (lVal_2 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1),8) + param_1,
     param_1 != ((lVal_2 >> 6) - (lVal_2 >> 0x3f)) * 100)) {
    return 1;
  }
  param_1 = param_1 + 0x76c;
  lVal_2 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1),8) + param_1;
  lVal_2 = ((lVal_2 >> 8) - (lVal_2 >> 0x3f)) * 400;
  return CONCAT71((int7)((uint64_t)lVal_2 >> 8),param_1 == lVal_2);
}

// FID_conflict:_sopen_s
/* Library Function - Multiple Matches With Different Base Names
    _sopen_s
    _wsopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Different Base Names
    _sopen_s
    _wsopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
errno_t __cdecl FID_conflict__sopen_s(int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)
{
  errno_t eVar1;
  
  eVar1 = common_sopen_dispatch<>(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return eVar1;
}

// FID_conflict:_sopen_s
/* Library Function - Multiple Matches With Different Base Names
    _sopen_s
    _wsopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Different Base Names
    _sopen_s
    _wsopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
errno_t __cdecl FID_conflict__sopen_s(int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)
{
  errno_t eVar1;
  
  eVar1 = common_sopen_dispatch<>(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return eVar1;
}

// func_0x1806856b4
uint32_t func_0x1806856b4(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7)
{
  int iVal_1;
  uint32_t uVal_2;
  uint64_t uVal_3;
  uint8_t local_68 [8];
  int64_t local_60;
  int64_t local_58;
  char local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  char local_18;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = '\0';
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_60,(__crt_locale_pointers *)0x0);
  uVal_3 = 0xfde9;
  if (*(int *)(local_58 + 0xc) == 0xfde9) {
    if (local_48 != '\0') {
      *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
    }
  }
  else {
    iVal_1 = func_0x180696a9c();
    if (iVal_1 == 0) {
      if (local_48 != '\0') {
        *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
      }
      uVal_3 = 1;
    }
    else {
      if (local_48 != '\0') {
        *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
      }
      uVal_3 = 0;
    }
  }
  iVal_1 = func_0x18067b86c(param_3,&local_40,local_68,uVal_3);
  if (iVal_1 == 0) {
    uVal_2 = func_0x1806857d0(param_1,param_2,local_30,param_4,param_5,param_6,param_7);
  }
  else {
    uVal_2 = 0xffffffff;
  }
  if (local_18 != '\0') {
    func_0x180695dd0(local_30);
  }
  return uVal_2;
}

// func_0x1806857d0
int func_0x1806857d0(uint32_t *param_1,uint *param_2,LPCWSTR param_3,uint param_4,uint32_t param_5, uint32_t param_6)
{
  byte *pU8_1;
  uint uVal_2;
  DWORD DVar3;
  int iVal_4;
  uint *pU64_5;
  uint32_t *pU64_6;
  int *pInt_7;
  HANDLE pVoid_8;
  uint64_t uVal_9;
  byte bFlag_10;
  uint uVal_11;
  uint8_t local_c8 [4];
  DWORD local_c4;
  uint32_t local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint64_t local_b0;
  byte local_a8;
  uint8_t local_a0 [8];
  LPVOID local_98;
  uint local_90;
  uint32_t local_8c;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint64_t local_58;
  uint8_t local_48 [32];
  
  pU64_5 = (uint *)func_0x180685d6c(local_48,param_4,param_5,param_6);
  local_c0 = *pU64_5;
  uStack_bc = pU64_5[1];
  uStack_b8 = pU64_5[2];
  uStack_b4 = pU64_5[3];
  local_b0 = *(uint64_t *)(pU64_5 + 4);
  local_78 = *(uint64_t *)(pU64_5 + 2) >> 0x20;
  DVar3 = (DWORD)(*(uint64_t *)(pU64_5 + 2) >> 0x20);
  local_88 = local_b0;
  local_68 = local_c0;
  uStack_64 = uStack_bc;
  uStack_60 = uStack_b8;
  uStack_5c = uStack_b4;
  if (DVar3 == 0xffffffff) {
    pU64_6 = (uint32_t *)func_0x180682400();
    *pU64_6 = 0;
    *param_2 = 0xffffffff;
    goto LAB_18068584f;
  }
  uVal_2 = _alloc_osfhnd();
  *param_2 = uVal_2;
  if (uVal_2 == 0xffffffff) {
    pU64_6 = (uint32_t *)func_0x180682400();
    *pU64_6 = 0;
    *param_2 = 0xffffffff;
    pU64_6 = (uint32_t *)func_0x1806823dc();
    *pU64_6 = 0x18;
    goto LAB_18068584f;
  }
  *param_1 = 1;
  uVal_11 = (uint)((uint64_t)local_b0 >> 0x20) | (uint)local_b0;
  local_80 = (uint64_t)uVal_11;
  local_90 = ~(param_4 >> 7) & 1;
  local_a0._0_4_ = 0x18;
  local_a0._4_4_ = 0;
  local_8c = 0;
  local_98 = (LPVOID)0x0;
  local_c4 = uStack_60;
  pVoid_8 = CreateFileW(param_3,uStack_64,DVar3,(LPSECURITY_ATTRIBUTES)local_a0,uStack_60,uVal_11,
                       (HANDLE)0x0);
  uVal_2 = uStack_bc;
  if (pVoid_8 == (HANDLE)0xffffffffffffffff) {
    if (((uStack_64 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      uVal_2 = uStack_64 & 0x7fffffff;
      uStack_bc = uVal_2;
      pVoid_8 = CreateFileW(param_3,uStack_64 & 0x7fffffff,DVar3,(LPSECURITY_ATTRIBUTES)local_a0,
                           local_c4,uVal_11,(HANDLE)0x0);
      if (pVoid_8 != (HANDLE)0xffffffffffffffff) goto LAB_180685989;
    }
    pU8_1 = (byte *)((&DAT_180842c80)[(int64_t)(int)*param_2 >> 6] + 0x38 +
                     (uint64_t)(*param_2 & 0x3f) * 0x48);
    *pU8_1 = *pU8_1 & 0xfe;
    DVar3 = GetLastError();
    func_0x180682424(DVar3);
  }
  else {
LAB_180685989:
    DVar3 = GetFileType(pVoid_8);
    if (DVar3 != 0) {
      if (DVar3 == 2) {
        bFlag_10 = (byte)local_c0 | 0x40;
      }
      else {
        bFlag_10 = (byte)local_c0;
        if (DVar3 == 3) {
          bFlag_10 = (byte)local_c0 | 8;
        }
      }
      func_0x180683ee4(*param_2,pVoid_8);
      local_a8 = bFlag_10 | 1;
      local_c0 = CONCAT31(local_c0._1_3_,bFlag_10) | 1;
      *(byte *)((&DAT_180842c80)[(int64_t)(int)*param_2 >> 6] + 0x38 +
               (uint64_t)(*param_2 & 0x3f) * 0x48) = local_a8;
      *(uint8_t *)
       ((&DAT_180842c80)[(int64_t)(int)*param_2 >> 6] + 0x39 + (uint64_t)(*param_2 & 0x3f) * 0x48)
           = 0;
      if (((param_4 & 2) == 0) || (iVal_4 = truncate_ctrl_z_if_present(*param_2), iVal_4 == 0)) {
        local_68 = local_c0;
        uStack_64 = uStack_bc;
        uStack_60 = uStack_b8;
        uStack_5c = uStack_b4;
        local_c8[0] = 0;
        local_58 = local_88;
        iVal_4 = func_0x180686044(*param_2,&local_68,param_4,local_c8);
        uVal_11 = *param_2;
        if (iVal_4 == 0) {
          *(uint8_t *)
           ((&DAT_180842c80)[(int64_t)(int)uVal_11 >> 6] + 0x39 + (uint64_t)(uVal_11 & 0x3f) * 0x48)
               = local_c8[0];
          uVal_9 = (uint64_t)(*param_2 & 0x3f);
          pU8_1 = (byte *)((&DAT_180842c80)[(int64_t)(int)*param_2 >> 6] + 0x3d + uVal_9 * 0x48);
          *pU8_1 = *pU8_1 ^ ((byte)(param_4 >> 0x10) ^
                              *(byte *)((&DAT_180842c80)[(int64_t)(int)*param_2 >> 6] + 0x3d +
                                       uVal_9 * 0x48)) & 1;
          if (((local_a8 & 0x48) == 0) && ((param_4 & 8) != 0)) {
            pU8_1 = (byte *)((&DAT_180842c80)[(int64_t)(int)*param_2 >> 6] + 0x38 +
                             (uint64_t)(*param_2 & 0x3f) * 0x48);
            *pU8_1 = *pU8_1 | 0x20;
          }
          if (((uVal_2 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
            CloseHandle(pVoid_8);
            uStack_bc = uVal_2 & 0x7fffffff;
            pVoid_8 = CreateFileW(param_3,uVal_2 & 0x7fffffff,(DWORD)local_78,
                                 (LPSECURITY_ATTRIBUTES)local_a0,local_c4,(DWORD)local_80,
                                 (HANDLE)0x0);
            if (pVoid_8 == (HANDLE)0xffffffffffffffff) {
              DVar3 = GetLastError();
              func_0x180682424(DVar3);
              pU8_1 = (byte *)((&DAT_180842c80)[(int64_t)(int)*param_2 >> 6] + 0x38 +
                               (uint64_t)(*param_2 & 0x3f) * 0x48);
              *pU8_1 = *pU8_1 & 0xfe;
              func_0x180683e28(*param_2);
              goto LAB_18068584f;
            }
            *(HANDLE *)
             ((&DAT_180842c80)[(int64_t)(int)*param_2 >> 6] + 0x28 +
             (uint64_t)(*param_2 & 0x3f) * 0x48) = pVoid_8;
          }
          return 0;
        }
      }
      else {
        uVal_11 = *param_2;
      }
      func_0x180681980(uVal_11);
      return iVal_4;
    }
    DVar3 = GetLastError();
    func_0x180682424(DVar3);
    pU8_1 = (byte *)((&DAT_180842c80)[(int64_t)(int)*param_2 >> 6] + 0x38 +
                     (uint64_t)(*param_2 & 0x3f) * 0x48);
    *pU8_1 = *pU8_1 & 0xfe;
    CloseHandle(pVoid_8);
    if (DVar3 == 0) {
      pU64_6 = (uint32_t *)func_0x1806823dc();
      *pU64_6 = 0xd;
    }
  }
LAB_18068584f:
  pInt_7 = (int *)func_0x1806823dc();
  return *pInt_7;
}

// common_sopen_dispatch<>
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_sopen_dispatch<char>(char const * __ptr64 const,int,int,int,int * __ptr64
   const,int)
    int __cdecl common_sopen_dispatch<wchar_t>(wchar_t const * __ptr64 const,int,int,int,int *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_sopen_dispatch<char>(char const * __ptr64 const,int,int,int,int * __ptr64
   const,int)
    int __cdecl common_sopen_dispatch<wchar_t>(wchar_t const * __ptr64 const,int,int,int,int *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int common_sopen_dispatch<>
              (int64_t param_1,uint32_t param_2,uint32_t param_3,uint param_4,uint *param_5,
              int param_6)
{
  byte *pU8_1;
  int iVal_2;
  uint32_t *pU64_3;
  int local_18;
  int local_14;
  
  if (((param_5 == (uint *)0x0) || (*param_5 = 0xffffffff, param_1 == 0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
    func_0x180684970();
    iVal_2 = 0x16;
  }
  else {
    local_18 = 0;
    local_14 = 0;
    iVal_2 = func_0x1806856b4(&local_18,param_5,param_1,param_2,param_3,param_4,param_6);
    if (local_18 != 0) {
      if (iVal_2 != 0) {
        pU8_1 = (byte *)((&DAT_180842c80)[(int64_t)(int)*param_5 >> 6] + 0x38 +
                         (uint64_t)(*param_5 & 0x3f) * 0x48);
        *pU8_1 = *pU8_1 & 0xfe;
      }
      local_14 = iVal_2;
      __acrt_lowio_unlock_fh(*param_5);
    }
    if (iVal_2 != 0) {
      *param_5 = 0xffffffff;
    }
  }
  return iVal_2;
}

// common_sopen_dispatch<>
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_sopen_dispatch<char>(char const * __ptr64 const,int,int,int,int * __ptr64
   const,int)
    int __cdecl common_sopen_dispatch<wchar_t>(wchar_t const * __ptr64 const,int,int,int,int *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_sopen_dispatch<char>(char const * __ptr64 const,int,int,int,int * __ptr64
   const,int)
    int __cdecl common_sopen_dispatch<wchar_t>(wchar_t const * __ptr64 const,int,int,int,int *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int common_sopen_dispatch<>
              (int64_t param_1,uint32_t param_2,uint32_t param_3,uint param_4,uint *param_5,
              int param_6)
{
  byte *pU8_1;
  int iVal_2;
  uint32_t *pU64_3;
  int local_18;
  int local_14;
  
  if (((param_5 == (uint *)0x0) || (*param_5 = 0xffffffff, param_1 == 0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
    func_0x180684970();
    iVal_2 = 0x16;
  }
  else {
    local_18 = 0;
    local_14 = 0;
    iVal_2 = func_0x1806857d0(&local_18,param_5,param_1,param_2,param_3,param_4,param_6);
    if (local_18 != 0) {
      if (iVal_2 != 0) {
        pU8_1 = (byte *)((&DAT_180842c80)[(int64_t)(int)*param_5 >> 6] + 0x38 +
                         (uint64_t)(*param_5 & 0x3f) * 0x48);
        *pU8_1 = *pU8_1 & 0xfe;
      }
      local_14 = iVal_2;
      __acrt_lowio_unlock_fh(*param_5);
    }
    if (iVal_2 != 0) {
      *param_5 = 0xffffffff;
    }
  }
  return iVal_2;
}

// func_0x180685d6c
uint8_t (*func_0x180685d6c(uint8_t (*param_1)[16],uint param_2,int param_3,byte param_4))[16]
{
  uint32_t uVal_1;
  int iVal_2;
  uint32_t *pU64_3;
  uint uVal_4;
  uint uVal_5;
  
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  uVal_4 = param_2 & 3;
  uVal_5 = 0xffffffff;
  if (uVal_4 == 0) {
    iVal_2 = -0x80000000;
  }
  else if (uVal_4 == 1) {
    iVal_2 = (-(uint)((param_2 & 0x70000) != 0 && (param_2 & 8) != 0) & 0x80000000) + 0x40000000;
  }
  else if (uVal_4 == 2) {
    iVal_2 = -0x40000000;
  }
  else {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
    func_0x180684970();
    iVal_2 = -1;
  }
  *(int *)(*param_1 + 4) = iVal_2;
  uVal_4 = param_2 & 0x700;
  if (uVal_4 != 0) {
    if (uVal_4 == 0x100) {
      uVal_1 = 4;
      goto LAB_180685e5d;
    }
    if (uVal_4 == 0x200) {
LAB_180685e4a:
      uVal_1 = 5;
      goto LAB_180685e5d;
    }
    if (uVal_4 == 0x300) {
      uVal_1 = 2;
      goto LAB_180685e5d;
    }
    if (uVal_4 != 0x400) {
      if (uVal_4 != 0x500) {
        if (uVal_4 == 0x600) goto LAB_180685e4a;
        if (uVal_4 != 0x700) {
          pU64_3 = (uint32_t *)func_0x1806823dc();
          *pU64_3 = 0x16;
          func_0x180684970();
          uVal_1 = 0xffffffff;
          goto LAB_180685e5d;
        }
      }
      uVal_1 = 1;
      goto LAB_180685e5d;
    }
  }
  uVal_1 = 3;
LAB_180685e5d:
  *(uint32_t *)(*param_1 + 8) = uVal_1;
  if (param_3 == 0x10) {
    uVal_5 = 0;
  }
  else if (param_3 == 0x20) {
    uVal_5 = 1;
  }
  else if (param_3 == 0x30) {
    uVal_5 = 2;
  }
  else if (param_3 == 0x40) {
    uVal_5 = 3;
  }
  else if (param_3 == 0x80) {
    uVal_5 = (uint)(*(int *)(*param_1 + 4) == -0x80000000);
  }
  else {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
    func_0x180684970();
  }
  *(uint32_t *)(param_1[1] + 4) = 0;
  *(uint *)(*param_1 + 0xc) = uVal_5;
  *(uint32_t *)param_1[1] = 0x80;
  if ((char)param_2 < '\0') {
    (*param_1)[0] = (*param_1)[0] | 0x10;
  }
  if ((param_2 & 0x8000) == 0) {
    if (((param_2 & 0x74000) == 0) && (iVal_2 = func_0x1806865b8(), iVal_2 != 0)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    (*param_1)[0] = (*param_1)[0] | 0x80;
  }
  if (((param_2 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_18084311c & param_4))) {
    *(uint32_t *)param_1[1] = 1;
  }
  if ((param_2 & 0x40) != 0) {
    *(uint *)(param_1[1] + 4) = *(uint *)(param_1[1] + 4) | 0x4000000;
    *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) | 0x10000;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 4;
  }
  if ((param_2 >> 0xc & 1) != 0) {
    *(uint *)param_1[1] = *(uint *)param_1[1] | 0x100;
  }
  if ((param_2 >> 0xd & 1) != 0) {
    *(uint *)(param_1[1] + 4) = *(uint *)(param_1[1] + 4) | 0x2000000;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      *(uint *)(param_1[1] + 4) = *(uint *)(param_1[1] + 4) | 0x10000000;
    }
  }
  else {
    *(uint *)(param_1[1] + 4) = *(uint *)(param_1[1] + 4) | 0x8000000;
  }
  return param_1;
}

// truncate_ctrl_z_if_present
/* Library Function - Single Match
    int __cdecl truncate_ctrl_z_if_present(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    int __cdecl truncate_ctrl_z_if_present(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
int __cdecl truncate_ctrl_z_if_present(int param_1)
{
  byte bFlag_1;
  int iVal_2;
  int64_t lVal_3;
  int *pInt_4;
  short local_res8 [4];
  
  bFlag_1 = *(byte *)((&DAT_180842c80)[(int64_t)param_1 >> 6] + 0x38 +
                   (uint64_t)(param_1 & 0x3f) * 0x48);
  if (((bFlag_1 & 0x48) == 0) && ((char)bFlag_1 < '\0')) {
    lVal_3 = func_0x18069c8a0(param_1,0xffffffffffffffff,2);
    if (lVal_3 == -1) {
      pInt_4 = (int *)func_0x180682400();
      if (*pInt_4 == 0x83) goto LAB_18068602f;
    }
    else {
      local_res8[0] = 0;
      iVal_2 = func_0x18069cd74(param_1,local_res8,1);
      if ((iVal_2 == 0) && (local_res8[0] == 0x1a)) {
        iVal_2 = func_0x18069ec9c(param_1,lVal_3);
        if (iVal_2 == -1) goto LAB_180685fe2;
      }
      lVal_3 = func_0x18069c8a0(param_1,0,0);
      if (lVal_3 != -1) goto LAB_18068602f;
    }
LAB_180685fe2:
    pInt_4 = (int *)func_0x1806823dc();
    iVal_2 = *pInt_4;
  }
  else {
LAB_18068602f:
    iVal_2 = 0;
  }
  return iVal_2;
}

// func_0x180686044
uint32_t func_0x180686044(uint param_1,byte *param_2,uint param_3,char *param_4)
{
  int iVal_1;
  int iVal_2;
  int64_t lVal_3;
  uint32_t *pU64_4;
  uint uVal_5;
  int iVal_6;
  uint local_res8 [2];
  
  iVal_6 = 0;
  *param_4 = '\0';
  if (-1 < *(char *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                    (uint64_t)(param_1 & 0x3f) * 0x48)) {
    return 0;
  }
  if ((param_3 & 0x74000) == 0) {
    local_res8[0] = 0;
    iVal_1 = func_0x1806865b8();
    if (iVal_1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if ((local_res8[0] & 0x74000) == 0) {
      param_3 = param_3 | 0x4000;
    }
    else {
      param_3 = param_3 | local_res8[0] & 0x74000;
    }
  }
  uVal_5 = param_3 & 0x74000;
  iVal_1 = 2;
  if (uVal_5 == 0x4000) {
    *param_4 = '\0';
  }
  else if ((uVal_5 - 0x10000 & 0xffffbfff) == 0) {
    if ((param_3 & 0x301) == 0x301) goto LAB_18068610b;
  }
  else if ((uVal_5 - 0x20000 & 0xffffbfff) == 0) {
LAB_18068610b:
    *param_4 = '\x02';
  }
  else if ((uVal_5 - 0x40000 & 0xffffbfff) == 0) {
    *param_4 = '\x01';
  }
  if ((param_3 & 0x70000) == 0) {
    return 0;
  }
  if ((*param_2 & 0x40) != 0) {
    return 0;
  }
  uVal_5 = *(uint *)(param_2 + 4) & 0xc0000000;
  if (uVal_5 == 0x40000000) {
LAB_18068614f:
    iVal_2 = *(int *)(param_2 + 8);
    if ((iVal_2 != 1) && (iVal_2 != 2)) {
      if ((iVal_2 == 3) || (iVal_2 == 4)) {
        lVal_3 = func_0x18069c8a0(param_1,0,2);
        if (lVal_3 != 0) {
          lVal_3 = func_0x18069c8a0(param_1,0,0);
          if (lVal_3 == -1) goto LAB_1806861b8;
          if ((*(uint *)(param_2 + 4) & 0x80000000) == 0) {
            return 0;
          }
          goto LAB_1806861cd;
        }
      }
      else if (iVal_2 != 5) {
        return 0;
      }
    }
    if (*param_4 == '\x01') {
      iVal_1 = 3;
      local_res8[0] = 0xbfbbef;
    }
    else {
      if (*param_4 != '\x02') {
        return 0;
      }
      local_res8[0] = 0xfeff;
    }
    while (iVal_2 = func_0x18069d700(param_1,(int64_t)local_res8 + (int64_t)iVal_6,iVal_1 - iVal_6),
          iVal_2 != -1) {
      iVal_6 = iVal_6 + iVal_2;
      if (iVal_1 <= iVal_6) {
        return 0;
      }
    }
    goto LAB_1806861b8;
  }
  if (uVal_5 != 0x80000000) {
    if (uVal_5 != 0xc0000000) {
      return 0;
    }
    goto LAB_18068614f;
  }
LAB_1806861cd:
  local_res8[0] = 0;
  iVal_6 = func_0x18069cd74(param_1,local_res8,3);
  if (iVal_6 == -1) goto LAB_1806861b8;
  if (iVal_6 == 2) {
LAB_180686206:
    if ((local_res8[0] & 0xffff) == 0xfffe) {
      pU64_4 = (uint32_t *)func_0x1806823dc();
      *pU64_4 = 0x16;
      goto LAB_1806861b8;
    }
    if ((local_res8[0] & 0xffff) == 0xfeff) {
      lVal_3 = func_0x18069c8a0(param_1,2,0);
      if (lVal_3 != -1) {
        *param_4 = '\x02';
        return 0;
      }
      goto LAB_1806861b8;
    }
  }
  else if (iVal_6 == 3) {
    if (local_res8[0] == 0xbfbbef) {
      *param_4 = '\x01';
      return 0;
    }
    goto LAB_180686206;
  }
  lVal_3 = func_0x18069c8a0(param_1,0,0);
  if (lVal_3 != -1) {
    return 0;
  }
LAB_1806861b8:
  pU64_4 = (uint32_t *)func_0x1806823dc();
  return *pU64_4;
}

// func_0x1806862c4
uint64_t func_0x1806862c4(int param_1)
{
  uint64_t uVal_1;
  
  if (param_1 != -0x1f928c9d) {
    return 0;
  }
  uVal_1 = func_0x1806862d8(0xe06d7363);
  return uVal_1;
}

// func_0x1806862d8
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
uint32_t func_0x1806862d8(int param_1,int *param_2)
{
  uint32_t uVal_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  int *pInt_4;
  int **ptr2_Int_5;
  int *pInt_6;
  int *pInt_7;
  uint32_t uVal_8;
  
  ptr2_Int_5 = (int **)func_0x1806960c8();
  if (ptr2_Int_5 != (int **)0x0) {
    pInt_2 = *ptr2_Int_5;
    for (pInt_6 = pInt_2; pInt_6 != pInt_2 + 0x30; pInt_6 = pInt_6 + 4) {
      if (*pInt_6 == param_1) {
        if (pInt_6 == (int *)0x0) {
          return 0;
        }
        fnPtr_3 = *(func_ptr_t *)(pInt_6 + 2);
        if (fnPtr_3 == (func_ptr_t )0x0) {
          return 0;
        }
        if (fnPtr_3 == (func_ptr_t )0x5) {
          *(uint64_t *)(pInt_6 + 2) = 0;
          return 1;
        }
        if (fnPtr_3 != (func_ptr_t )0x1) {
          pInt_4 = ptr2_Int_5[1];
          ptr2_Int_5[1] = param_2;
          if (pInt_6[1] == 8) {
            for (pInt_7 = pInt_2 + 0xc; pInt_7 != pInt_2 + 0x30; pInt_7 = pInt_7 + 4) {
              *(uint64_t *)(pInt_7 + 2) = 0;
            }
            uVal_1 = *(uint32_t *)(ptr2_Int_5 + 2);
            if (*pInt_6 == -0x3fffff73) {
              uVal_8 = 0x82;
LAB_180686416:
              *(uint32_t *)(ptr2_Int_5 + 2) = uVal_8;
            }
            else {
              if (*pInt_6 == -0x3fffff72) {
                uVal_8 = 0x83;
                goto LAB_180686416;
              }
              if (*pInt_6 == -0x3fffff71) {
                uVal_8 = 0x86;
                goto LAB_180686416;
              }
              if (*pInt_6 == -0x3fffff70) {
                uVal_8 = 0x81;
                goto LAB_180686416;
              }
              if (*pInt_6 == -0x3fffff6f) {
                uVal_8 = 0x84;
                goto LAB_180686416;
              }
              if (*pInt_6 == -0x3fffff6e) {
                uVal_8 = 0x8a;
                goto LAB_180686416;
              }
              if (*pInt_6 == -0x3fffff6d) {
                uVal_8 = 0x85;
                goto LAB_180686416;
              }
              if (*pInt_6 == -0x3ffffd4c) {
                uVal_8 = 0x8e;
                goto LAB_180686416;
              }
              uVal_8 = uVal_1;
              if (*pInt_6 == -0x3ffffd4b) {
                uVal_8 = 0x8d;
                goto LAB_180686416;
              }
            }
            (*fnPtr_3)(8,uVal_8);
            *(uint32_t *)(ptr2_Int_5 + 2) = uVal_1;
          }
          else {
            *(uint64_t *)(pInt_6 + 2) = 0;
            (*fnPtr_3)(pInt_6[1]);
          }
          ptr2_Int_5[1] = pInt_4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}

// abort
/* Library Function - Single Match
    abort
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    abort
   
   Library: Visual Studio 2019 Release */
void __cdecl abort(void)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  BOOL BVar3;
  uint8_t *pU64_4;
  uint8_t auStack_28 [8];
  uint8_t auStack_20 [32];
  
  pU64_4 = auStack_28;
  lVal_2 = __acrt_get_sigabrt_handler();
  if (lVal_2 != 0) {
    func_0x18068d6e8(0x16);
  }
  if ((DAT_18083d5d0 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    pU64_4 = auStack_28;
    if (BVar3 != 0) {
      fnPtr_1 = (func_ptr_t )swi(0x29);
      (*fnPtr_1)(7);
      pU64_4 = auStack_20;
    }
    *(uint64_t *)(pU64_4 + -8) = 0x18068648f;
    func_0x1806849d8(3,0x40000015);
  }
  *(uint64_t *)(pU64_4 + -8) = 0x180686499;
  func_0x180681654(3);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18068649c
uint32_t func_0x18068649c(uint param_1,int param_2)
{
  bool bFlag_1;
  uint32_t uVal_2;
  uint32_t *pU64_3;
  
  if ((((param_2 == 0x4000) || (param_2 == 0x8000)) || (param_2 == 0x10000)) ||
     ((param_2 == 0x40000 || (param_2 == 0x20000)))) {
    bFlag_1 = true;
  }
  else {
    bFlag_1 = false;
  }
  if (bFlag_1) {
    if (param_1 == 0xfffffffe) {
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
        __acrt_lowio_lock_fh(param_1);
        uVal_2 = 0xffffffff;
        if ((*(byte *)((&DAT_180842c80)[(int64_t)(int)param_1 >> 6] + 0x38 +
                      (uint64_t)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          pU64_3 = (uint32_t *)func_0x1806823dc();
          *pU64_3 = 9;
        }
        else {
          uVal_2 = func_0x1806865e8(param_1,param_2);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVal_2;
      }
    }
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 9;
  }
  else {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
  }
  func_0x180684970();
  return 0xffffffff;
}

// func_0x1806865b8
uint64_t func_0x1806865b8(uint32_t *param_1)
{
  uint32_t *pU64_1;
  uint64_t uVal_2;
  
  if (param_1 == (uint32_t *)0x0) {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x16;
    func_0x180684970();
    uVal_2 = 0x16;
  }
  else {
    *param_1 = DAT_180843120;
    uVal_2 = 0;
  }
  return uVal_2;
}

// func_0x1806865e8
uint64_t func_0x1806865e8(uint param_1,int param_2)
{
  char ch_1;
  byte bFlag_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  lVal_6 = (int64_t)(int)param_1 >> 6;
  uVal_4 = (uint64_t)(param_1 & 0x3f);
  lVal_3 = (&DAT_180842c80)[lVal_6];
  bFlag_2 = *(byte *)(lVal_3 + 0x38 + uVal_4 * 0x48);
  ch_1 = *(char *)(lVal_3 + 0x39 + uVal_4 * 0x48);
  if (param_2 == 0x4000) {
    *(byte *)(lVal_3 + 0x38 + uVal_4 * 0x48) = bFlag_2 | 0x80;
    *(uint8_t *)((&DAT_180842c80)[lVal_6] + 0x39 + uVal_4 * 0x48) = 0;
  }
  else if (param_2 == 0x8000) {
    *(byte *)(lVal_3 + 0x38 + uVal_4 * 0x48) = bFlag_2 & 0x7f;
  }
  else if ((param_2 - 0x10000U & 0xfffeffff) == 0) {
    *(byte *)(lVal_3 + 0x38 + uVal_4 * 0x48) = bFlag_2 | 0x80;
    *(uint8_t *)((&DAT_180842c80)[lVal_6] + 0x39 + uVal_4 * 0x48) = 2;
  }
  else if (param_2 == 0x40000) {
    *(byte *)(lVal_3 + 0x38 + uVal_4 * 0x48) = bFlag_2 | 0x80;
    *(uint8_t *)((&DAT_180842c80)[lVal_6] + 0x39 + uVal_4 * 0x48) = 1;
  }
  if ((bFlag_2 & 0x80) == 0) {
    uVal_5 = 0x8000;
  }
  else if (ch_1 == '\0') {
    uVal_5 = 0x4000;
  }
  else {
    uVal_5 = 0x10000;
    if (ch_1 == '\x01') {
      uVal_5 = 0x40000;
    }
  }
  return uVal_5;
}

// func_0x1806866cc
uint32_t func_0x1806866cc(int64_t param_1,uint64_t param_2)
{
  uint32_t uVal_1;
  int iVal_2;
  uint64_t uVal_3;
  uint8_t local_res8 [8];
  int64_t local_58;
  int64_t local_50;
  char local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  char local_10;
  
  if (param_1 == 0) {
    uVal_1 = func_0x180686b14();
  }
  else {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = '\0';
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_58,(__crt_locale_pointers *)0x0);
    uVal_3 = 0xfde9;
    if (*(int *)(local_50 + 0xc) == 0xfde9) {
      if (local_40 != '\0') {
        *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVal_2 = func_0x180696a9c();
      if (iVal_2 == 0) {
        if (local_40 != '\0') {
          *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
        }
        uVal_3 = 1;
      }
      else {
        if (local_40 != '\0') {
          *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
        }
        uVal_3 = 0;
      }
    }
    iVal_2 = func_0x18067b86c(param_1,&local_38,local_res8,uVal_3);
    if (iVal_2 == 0) {
      uVal_1 = func_0x180686b14(local_28,param_2);
      if (local_10 != '\0') {
        func_0x180695dd0(local_28);
      }
    }
    else {
      if (local_10 != '\0') {
        func_0x180695dd0(local_28);
      }
      uVal_1 = 0xffffffff;
    }
  }
  return uVal_1;
}

// convert_to_stat_mode



// convert_to_stat_mode - exception: 'ascii' codec can't encode character u'\uffbf' in position 481: ordinal not in range(128)



// func_0x18068690c
uint64_t func_0x18068690c(ushort *param_1,uint32_t *param_2)
{
  ushort uVal_1;
  int iVal_2;
  uint64_t uVal_3;
  uint32_t extraout_var;
  uint uVal_4;
  
  *param_2 = 0;
  uVal_1 = *param_1;
  uVal_4 = (uint)uVal_1;
  if (((uVal_1 - 0x41 < 0x1a) || (uVal_1 - 0x61 < 0x1a)) && (param_1[1] == 0x3a)) {
    if (param_1[2] == 0) {
      uVal_3 = func_0x180682424(2);
      return uVal_3 & 0xffffffffffffff00;
    }
    if (uVal_1 - 0x41 < 0x1a) {
      uVal_4 = uVal_1 + 0x20;
    }
    uVal_3 = (uint64_t)(uVal_4 - 0x60);
  }
  else {
    iVal_2 = _getdrive();
    uVal_3 = CONCAT44(extraout_var,iVal_2);
  }
  *param_2 = (int)uVal_3;
  return CONCAT71((int7)(uVal_3 >> 8),1);
}

// func_0x18068696c
void func_0x18068696c(LPCWSTR param_1)
{
  uint32_t uVal_1;
  short sz_2;
  int64_t lVal_3;
  uint32_t *pU64_4;
  short *pSize_5;
  int *pInt_6;
  short *pSize_7;
  uint64_t uVal_8;
  uint8_t auStack_268 [48];
  uint8_t local_238 [528];
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_268;
  lVal_3 = func_0x18069f3b0(param_1,&DAT_180764298);
  pSize_7 = (short *)0x0;
  if (lVal_3 == 0) goto LAB_180686ae9;
  pU64_4 = (uint32_t *)func_0x1806823dc();
  uVal_1 = *pU64_4;
  pU64_4 = (uint32_t *)func_0x1806823dc();
  *pU64_4 = 0;
  pSize_5 = (short *)func_0x18069efd4(local_238,param_1,0x104);
  if (pSize_5 == (short *)0x0) {
    pInt_6 = (int *)func_0x1806823dc();
    if (*pInt_6 == 0x22) {
      pU64_4 = (uint32_t *)func_0x1806823dc();
      *pU64_4 = uVal_1;
      pSize_7 = (short *)func_0x18069efd4(0,param_1,0);
      pSize_5 = pSize_7;
      if (pSize_7 != (short *)0x0) goto LAB_180686a12;
    }
  }
  else {
    pU64_4 = (uint32_t *)func_0x1806823dc();
    *pU64_4 = uVal_1;
LAB_180686a12:
    uVal_8 = 0xffffffffffffffff;
    lVal_3 = -1;
    do {
      lVal_3 = lVal_3 + 1;
    } while (pSize_5[lVal_3] != 0);
    if (lVal_3 == 3) {
LAB_180686ac1:
      GetDriveTypeW(param_1);
      thunk_FUN_180695dd0(pSize_7);
      goto LAB_180686ae9;
    }
    do {
      uVal_8 = uVal_8 + 1;
    } while (pSize_5[uVal_8] != 0);
    if ((((4 < uVal_8) && ((*pSize_5 == 0x5c || (*pSize_5 == 0x2f)))) &&
        ((pSize_5[1] == 0x5c || (pSize_5[1] == 0x2f)))) &&
       ((pSize_5[2] != 0x5c && (pSize_5[2] != 0x2f)))) {
      for (pSize_5 = pSize_5 + 3;
          ((sz_2 = *pSize_5, sz_2 != 0 && (sz_2 != 0x5c)) && (sz_2 != 0x2f)); pSize_5 = pSize_5 + 1
          ) {
      }
      if (sz_2 != 0) {
        pSize_5 = pSize_5 + 1;
        sz_2 = *pSize_5;
        if (sz_2 != 0) {
          do {
            if ((sz_2 == 0x5c) || (sz_2 == 0x2f)) break;
            pSize_5 = pSize_5 + 1;
            sz_2 = *pSize_5;
          } while (sz_2 != 0);
          if ((sz_2 == 0) || (pSize_5[1] == 0)) goto LAB_180686ac1;
        }
      }
    }
  }
  thunk_FUN_180695dd0(pSize_7);
LAB_180686ae9:
  func_0x180673080(local_28 ^ (uint64_t)auStack_268);
  return;
}

// func_0x180686b14
uint64_t func_0x180686b14(wchar_t *param_1,uint8_t (*param_2)[16])
{
  char ch_1;
  ushort uVal_2;
  uint32_t *pU64_3;
  HANDLE hObject;
  uint64_t uVal_4;
  int local_res10 [2];
  uint32_t uVal_5;
  
  if (param_2 != (uint8_t (*)[16])0x0) {
    *param_2 = ZEXT816(0);
    param_2[1] = ZEXT816(0);
    param_2[2] = ZEXT816(0);
    if (param_1 != (wchar_t *)0x0) {
      uVal_5 = 0;
      hObject = CreateFileW(param_1,0x80,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
      if (hObject == (HANDLE)0xffffffffffffffff) {
        ch_1 = func_0x18068696c(param_1);
        if (ch_1 == '\0') {
          func_0x180682424(2);
        }
        else {
          uVal_2 = convert_to_stat_mode(0x10,param_1);
          local_res10[0] = 0;
          *(ushort *)(*param_2 + 6) = uVal_2;
          *(uint16_t *)(*param_2 + 8) = 1;
          ch_1 = func_0x18068690c(param_1,local_res10);
          if (ch_1 != '\0') {
            *(int *)param_2[1] = local_res10[0] + -1;
            *(int *)*param_2 = local_res10[0] + -1;
            uVal_4 = thunk_FUN_18069f410(0x7bc,1,1,0,0,0,CONCAT44(uVal_5,0xffffffff));
            *(uint64_t *)param_2[2] = uVal_4;
            *(uint64_t *)(param_2[1] + 8) = uVal_4;
            *(uint64_t *)(param_2[2] + 8) = uVal_4;
            return 0;
          }
        }
        *param_2 = ZEXT816(0);
        param_2[1] = ZEXT816(0);
        param_2[2] = ZEXT816(0);
        return 0xffffffff;
      }
      ch_1 = func_0x180686c68(param_1,0xffffffff,hObject,param_2);
      if (ch_1 == '\0') {
        *param_2 = ZEXT816(0);
        param_2[1] = ZEXT816(0);
        param_2[2] = ZEXT816(0);
        CloseHandle(hObject);
        return 0xffffffff;
      }
      CloseHandle(hObject);
      return 0;
    }
  }
  pU64_3 = (uint32_t *)func_0x180682400();
  *pU64_3 = 0;
  pU64_3 = (uint32_t *)func_0x1806823dc();
  *pU64_3 = 0x16;
  func_0x180684970();
  return 0xffffffff;
}

// func_0x180686c68
void func_0x180686c68(wchar_t *param_1,int param_2,HANDLE param_3,int *param_4)
{
  char ch_1;
  ushort uVal_2;
  uint16_t uVal_3;
  DWORD DVar4;
  BOOL BVar5;
  uint64_t uVal_6;
  uint32_t *pU64_7;
  uint uVal_8;
  uint8_t auStackY_a8 [32];
  DWORD local_78 [2];
  uint8_t local_70 [36];
  uint uStack_4c;
  DWORD local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStackY_a8;
  DVar4 = GetFileType(param_3);
  uVal_8 = DVar4 & 0xffff7fff;
  if (uVal_8 == 1) {
    *(uint16_t *)(param_4 + 2) = 1;
    if (param_1 != (wchar_t *)0x0) {
      local_78[0] = 0;
      ch_1 = func_0x18068690c(param_1,local_78);
      if (ch_1 == '\0') goto LAB_180686df1;
      param_4[4] = local_78[0] - 1;
      *param_4 = local_78[0] - 1;
    }
    local_70._0_4_ = 0;
    local_70._4_8_ = SUB168(ZEXT816(0),4);
    local_70._12_4_ = 0;
    local_40 = 0;
    local_70._16_4_ = 0;
    local_70._20_8_ = SUB168(ZEXT816(0),4);
    local_70._28_4_ = 0;
    unique0x100000bd = ZEXT816(0);
    BVar5 = GetFileInformationByHandle(param_3,(LPBY_HANDLE_FILE_INFORMATION)local_70);
    if (BVar5 != 0) {
      uVal_2 = convert_to_stat_mode(local_70._0_4_,param_1);
      *(ushort *)((int64_t)param_4 + 6) = uVal_2;
      uVal_6 = func_0x180686e14(local_70._20_8_,0);
      *(uint64_t *)(param_4 + 8) = uVal_6;
      uVal_6 = func_0x180686e14(CONCAT44(local_70._16_4_,local_70._12_4_),uVal_6);
      *(uint64_t *)(param_4 + 6) = uVal_6;
      uVal_6 = func_0x180686e14(local_70._4_8_,*(uint64_t *)(param_4 + 8));
      *(uint64_t *)(param_4 + 10) = uVal_6;
      param_4[5] = 0;
      if ((local_70._32_4_ == 0) && (uStack_4c < 0x80000000)) {
        param_4[5] = uStack_4c;
      }
      else {
        pU64_7 = (uint32_t *)func_0x1806823dc();
        *pU64_7 = 0x84;
      }
      goto LAB_180686df1;
    }
  }
  else {
    if (uVal_8 == 2 || uVal_8 == 3) {
      *(uint16_t *)(param_4 + 2) = 1;
      uVal_3 = 0x1000;
      param_4[4] = param_2;
      *param_4 = param_2;
      if (uVal_8 == 2) {
        uVal_3 = 0x2000;
      }
      *(uint16_t *)((int64_t)param_4 + 6) = uVal_3;
      if (uVal_8 != 2) {
        local_78[0] = 0;
        BVar5 = PeekNamedPipe(param_3,(LPVOID)0x0,0,(LPDWORD)0x0,local_78,(LPDWORD)0x0);
        if (BVar5 != 0) {
          param_4[5] = local_78[0];
        }
      }
      goto LAB_180686df1;
    }
    if (uVal_8 == 0) {
      pU64_7 = (uint32_t *)func_0x1806823dc();
      *pU64_7 = 9;
      goto LAB_180686df1;
    }
  }
  DVar4 = GetLastError();
  func_0x180682424(DVar4);
LAB_180686df1:
  func_0x180673080(local_38 ^ (uint64_t)auStackY_a8);
  return;
}

// func_0x180686e14
void func_0x180686e14(FILETIME param_1)
{
  BOOL BVar1;
  uint8_t auStack_78 [32];
  uint local_58;
  uint local_50;
  uint32_t local_48;
  FILETIME local_38;
  _SYSTEMTIME local_30;
  _SYSTEMTIME local_20;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  local_38 = param_1;
  if ((param_1.dwLowDateTime != 0) || (param_1.dwHighDateTime != 0)) {
    local_20 = (_SYSTEMTIME)ZEXT816(0);
    local_30 = (_SYSTEMTIME)ZEXT816(0);
    BVar1 = FileTimeToSystemTime(&local_38,&local_20);
    if ((BVar1 != 0) &&
       (BVar1 = SystemTimeToTzSpecificLocalTime((TIME_ZONE_INFORMATION *)0x0,&local_20,&local_30),
       BVar1 != 0)) {
      local_48 = 0xffffffff;
      local_50 = (uint)local_30.wSecond;
      local_58 = (uint)local_30.wMinute;
      thunk_FUN_18069f410(local_30.wYear,local_30.wMonth,local_30.wDay,local_30.wHour);
    }
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_78);
  return;
}

// func_0x180686ebc
int64_t func_0x180686ebc(int64_t *param_1)
{
  int64_t lVal_1;
  _FILETIME local_res8 [4];
  
  local_res8[0].dwLowDateTime = 0;
  local_res8[0].dwHighDateTime = 0;
  GetSystemTimeAsFileTime(local_res8);
  lVal_1 = SUB168(SEXT816(-0x29406b2a1a85bd43) *
                 SEXT816((int64_t)local_res8[0] + -0x19db1ded53e8000),8) +
          (int64_t)local_res8[0] + -0x19db1ded53e8000;
  lVal_1 = (lVal_1 >> 0x17) - (lVal_1 >> 0x3f);
  if (0x793582aff < lVal_1) {
    lVal_1 = -1;
  }
  if (param_1 != (int64_t *)0x0) {
    *param_1 = lVal_1;
  }
  return lVal_1;
}

// func_0x180686f30
int func_0x180686f30(char *param_1,uint64_t param_2)
{
  errno_t eVar1;
  int iVal_2;
  uint32_t *pU64_3;
  uint32_t uVal_4;
  int local_res8 [2];
  
  uVal_4 = 0;
  if (param_1 == (char *)0x0) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
    func_0x180684970();
  }
  else {
    local_res8[0] = 0;
    eVar1 = FID_conflict__sopen_s(local_res8,param_1,0x8002,0x40,0);
    if (eVar1 == 0) {
      iVal_2 = func_0x180686fc8(local_res8[0],param_2);
      if (iVal_2 == -1) {
        pU64_3 = (uint32_t *)func_0x1806823dc();
        uVal_4 = *pU64_3;
      }
      func_0x1806818e8(local_res8[0]);
      if (iVal_2 != -1) {
        return iVal_2;
      }
      pU64_3 = (uint32_t *)func_0x1806823dc();
      *pU64_3 = uVal_4;
      return -1;
    }
  }
  return -1;
}

// func_0x180686fc8
void func_0x180686fc8(uint param_1,uint8_t *param_2)
{
  int iVal_1;
  BOOL BVar2;
  uint32_t *pU64_3;
  HANDLE hFile;
  uint8_t auStack_a8 [32];
  _FILETIME local_88;
  _FILETIME local_80;
  SYSTEMTIME local_78;
  uint8_t local_68 [8];
  WORD WStack_60;
  WORD WStack_5c;
  uint8_t local_58 [16];
  uint32_t local_48;
  uint8_t local_40 [16];
  _SYSTEMTIME local_30;
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_a8;
  if (param_1 == 0xfffffffe) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 9;
  }
  else if ((((int)param_1 < 0) || (DAT_180843080 <= param_1)) ||
          ((*(byte *)((&DAT_180842c80)[(uint64_t)(int64_t)(int)param_1 >> 6] + 0x38 +
                     (uint64_t)(param_1 & 0x3f) * 0x48) & 1) == 0)) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 9;
    func_0x180684970();
  }
  else {
    local_40 = ZEXT816(0);
    if (param_2 == (uint8_t *)0x0) {
      func_0x180686ebc(local_40 + 8);
      param_2 = local_40;
      local_40._0_8_ = local_40._8_8_;
    }
    _local_68 = ZEXT816(0);
    local_48 = 0;
    local_58 = ZEXT816(0);
    iVal_1 = thunk_FUN_180684dc4(local_68,param_2 + 8);
    if (iVal_1 == 0) {
      local_78.wDayOfWeek = 0;
      local_78.wMilliseconds = 0;
      local_78.wYear = local_58._4_2_ + 0x76c;
      local_88.dwLowDateTime = 0;
      local_88.dwHighDateTime = 0;
      local_78.wMonth = local_58._0_2_ + 1;
      local_78.wDay = WStack_5c;
      local_78.wHour = WStack_60;
      local_78.wMinute = local_68._4_2_;
      local_78.wSecond = local_68._0_2_;
      local_30 = (_SYSTEMTIME)ZEXT816(0);
      BVar2 = TzSpecificLocalTimeToSystemTime((TIME_ZONE_INFORMATION *)0x0,&local_78,&local_30);
      if (((BVar2 != 0) && (BVar2 = SystemTimeToFileTime(&local_30,&local_88), BVar2 != 0)) &&
         (iVal_1 = thunk_FUN_180684dc4(local_68,param_2), iVal_1 == 0)) {
        local_78.wYear = local_58._4_2_ + 0x76c;
        local_78.wMilliseconds = 0;
        local_78.wMonth = local_58._0_2_ + 1;
        local_80.dwLowDateTime = 0;
        local_80.dwHighDateTime = 0;
        local_78.wDay = WStack_5c;
        local_78.wHour = WStack_60;
        local_78.wMinute = local_68._4_2_;
        local_78.wSecond = local_68._0_2_;
        BVar2 = TzSpecificLocalTimeToSystemTime((TIME_ZONE_INFORMATION *)0x0,&local_78,&local_30);
        if ((BVar2 != 0) && (BVar2 = SystemTimeToFileTime(&local_30,&local_80), BVar2 != 0)) {
          hFile = (HANDLE)func_0x180683c70(param_1);
          BVar2 = SetFileTime(hFile,(FILETIME *)0x0,&local_80,&local_88);
          if (BVar2 != 0) goto LAB_1806871ce;
        }
      }
    }
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
  }
LAB_1806871ce:
  func_0x180673080(local_20 ^ (uint64_t)auStack_a8);
  return;
}

// func_0x180687200
int64_t func_0x180687200(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  if (param_1 != 0) {
    lVal_2 = -1;
    do {
      lVal_3 = lVal_2;
      lVal_2 = lVal_3 + 1;
    } while (*(short *)(param_1 + lVal_2 * 2) != 0);
    lVal_2 = _malloc_base((lVal_3 + 2) * 2);
    if (lVal_2 != 0) {
      iVal_1 = func_0x180696710();
      if (iVal_1 == 0) {
        return lVal_2;
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return 0;
}

// __acrt_copy_locale_name
/* Library Function - Single Match
    __acrt_copy_locale_name
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_copy_locale_name
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
int64_t __acrt_copy_locale_name(int64_t param_1)
{
  int iVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  
  if (((param_1 == 0) || (uVal_2 = func_0x18068e1a0(param_1,0x55), 0x54 < uVal_2)) ||
     (lVal_3 = _malloc_base(uVal_2 * 2 + 2), lVal_3 == 0)) {
    lVal_3 = 0;
  }
  else {
    iVal_1 = func_0x1806a06c0();
    if (iVal_1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return lVal_3;
}

// func_0x180687318
uint32_t func_0x180687318(void)
{
  uint32_t uVal_1;
  
  uVal_1 = DAT_1808429bc;
  LOCK();
  DAT_1808429bc = 1;
  UNLOCK();
  return uVal_1;
}

// _wsetlocale
/* Library Function - Single Match
    _wsetlocale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _wsetlocale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
wchar_t * __cdecl _wsetlocale(int _Category,wchar_t *_Locale)
{
  uint32_t *pU64_1;
  int local_res8 [2];
  wchar_t *local_res10;
  <lambda_7f2adfce497ff2baa965cd4f576ecfd1> local_res18 [8];
  int64_t local_res20;
  wchar_t *local_48;
  uint64_t local_40;
  int64_t *local_38;
  uint64_t *local_30;
  int64_t *local_28;
  wchar_t **local_20;
  int *local_18;
  wchar_t **local_10;
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  local_res8[0] = _Category;
  local_res10 = _Locale;
  if ((uint)_Category < 6) {
    local_res20 = __vcrt_getptd();
    func_0x180697310();
    func_0x1806a0b9c();
    *(uint *)(local_res20 + 0x3a8) = *(uint *)(local_res20 + 0x3a8) | 0x10;
    local_38 = &local_res20;
    local_30 = &local_40;
    local_28 = &local_res20;
    local_20 = &local_48;
    local_18 = local_res8;
    local_10 = &local_res10;
    __crt_seh_guarded_call<void>::
    operator()<class_<lambda_7f2adfce497ff2baa965cd4f576ecfd1>,class_<lambda_2a444430fde8c29194d880d93eed5e8f>&___ptr64,class_<lambda_8dff2cf36a5417162780cd64fa2883ef>&___ptr64>
              ((__crt_seh_guarded_call<void> *)local_res18,local_res18,
               (<lambda_2a444430fde8c29194d880d93eed5e8f> *)&local_30,
               (<lambda_8dff2cf36a5417162780cd64fa2883ef> *)&local_38);
  }
  else {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x16;
    func_0x180684970();
    local_48 = (wchar_t *)0x0;
  }
  return local_48;
}

// func_0x1806873c8
void func_0x1806873c8(wchar_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, uint64_t param_5,uint *param_6)
{
  short *pSize_1;
  short sz_2;
  short sz_3;
  char ch_4;
  int iVal_5;
  uint uVal_6;
  int64_t lVal_7;
  short *pSize_8;
  short *pSize_9;
  uint uVal_10;
  wchar_t *pWStr_11;
  uint *pU64_12;
  uint64_t uVal_13;
  uint64_t uVal_14;
  char ch_15;
  uint64_t uVal_16;
  uint8_t auStackY_2a8 [32];
  uint *local_278;
  short *local_270;
  uint64_t local_268;
  uint64_t local_260;
  int64_t local_258;
  char local_250;
  uint64_t local_248;
  uint *local_240;
  uint64_t local_238;
  uint64_t local_230;
  uint8_t local_228 [256];
  ushort local_128;
  ushort local_126;
  ushort local_124;
  short local_122;
  short local_120;
  short sStack_11e;
  wchar_t local_108 [88];
  uint64_t local_58;
  
  local_58 = DAT_18083cf40 ^ (uint64_t)auStackY_2a8;
  local_248 = param_5;
  local_240 = param_6;
  local_238 = param_3;
  local_230 = param_2;
  if (param_1 == (wchar_t *)0x0) goto LAB_18068742d;
  if ((*param_1 == L'C') && (param_1[1] == L'\0')) {
    iVal_5 = func_0x180696710();
    if (iVal_5 == 0) {
      *param_6 = 0;
      goto LAB_18068742d;
    }
    goto LAB_18068781f;
  }
  lVal_7 = __vcrt_getptd();
  local_258 = lVal_7 + 0x98;
  local_260 = param_5;
  ch_15 = '\0';
  local_250 = '\0';
  local_278 = (uint *)(lVal_7 + 0xb8);
  pSize_9 = (short *)(lVal_7 + 0xbc);
  pSize_1 = (short *)(lVal_7 + 0x1c2);
  local_270 = pSize_9;
  local_268 = param_4;
  iVal_5 = func_0x1806a06c0();
  if (iVal_5 != 0) goto LAB_18068781f;
  uVal_13 = 0xffffffffffffffff;
  uVal_16 = 0xffffffffffffffff;
  do {
    uVal_14 = uVal_16;
    uVal_16 = uVal_14 + 1;
  } while (param_1[uVal_16] != L'\0');
  if (uVal_16 < 0x83) {
    pSize_8 = pSize_1;
    do {
      sz_2 = *pSize_8;
      sz_3 = *(short *)((int64_t)pSize_8 + ((int64_t)param_1 - (int64_t)pSize_1));
      if (sz_2 != sz_3) break;
      pSize_8 = pSize_8 + 1;
    } while (sz_3 != 0);
    pU64_12 = local_278;
    ch_4 = '\0';
    if (sz_2 != sz_3) {
      lVal_7 = (int64_t)param_1 - (int64_t)pSize_9;
      do {
        sz_2 = *pSize_9;
        sz_3 = *(short *)((int64_t)pSize_9 + lVal_7);
        if (sz_2 != sz_3) break;
        pSize_9 = pSize_9 + 1;
      } while (sz_3 != 0);
      if (sz_2 != sz_3) goto LAB_180687544;
    }
LAB_1806877f8:
    ch_15 = ch_4;
    *local_240 = *pU64_12;
    iVal_5 = func_0x180696710();
    if (iVal_5 != 0) goto LAB_18068781f;
  }
  else {
LAB_180687544:
    func_0x1806ab010(local_228,0,0x1ca);
    ch_4 = func_0x1806972fc();
    iVal_5 = func_0x180687958(local_228,param_1);
    pU64_12 = local_278;
    if (iVal_5 == 0) {
      if (ch_4 == '\0') {
        iVal_5 = func_0x1806a16a8();
      }
      else {
        iVal_5 = func_0x1806a0c74(local_228,local_278,local_228);
      }
      if (iVal_5 == 0) goto LAB_1806875e8;
      __lc_lctowcs(pSize_1,0x83,local_228);
      do {
        uVal_13 = uVal_13 + 1;
      } while (local_108[uVal_13] != L'\0');
      ch_4 = '\x01';
      iVal_5 = func_0x1806a06c0();
      if (iVal_5 != 0) goto LAB_180687834;
LAB_1806877bc:
      if ((*param_1 == L'\0') || (0x82 < uVal_16)) {
        *local_270 = 0;
      }
      else {
        iVal_5 = func_0x1806a06c0();
        if (iVal_5 != 0) {
LAB_180687834:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_1806877f8;
    }
LAB_1806875e8:
    iVal_5 = func_0x180696f08(param_1);
    if (iVal_5 != 0) {
      local_278 = (uint *)((uint64_t)local_278 & 0xffffffff00000000);
      iVal_5 = func_0x180696d44(param_1,0x20001004,&local_278,2);
      if ((iVal_5 == 0) || (uVal_10 = (uint)local_278, (uint)local_278 == 0)) {
        uVal_10 = 0xfde9;
      }
      *pU64_12 = uVal_10 & 0xffff;
      iVal_5 = func_0x1806a06c0();
      pWStr_11 = param_1;
      if (iVal_5 != 0) goto LAB_180687834;
LAB_1806877ad:
      _expandlocale_locale_name_cache::commit_locale_name
                ((_expandlocale_locale_name_cache *)&local_268,pWStr_11,uVal_14 + 2);
      ch_4 = local_250;
      goto LAB_1806877bc;
    }
    ch_4 = func_0x1806886ec(local_228,param_1);
    if ((ch_4 != '\0') && (iVal_5 = func_0x180696f08(local_108), iVal_5 != 0)) {
      if (local_128 == 0) {
        local_278 = (uint *)((uint64_t)local_278 & 0xffffffff00000000);
        iVal_5 = func_0x180696d44(local_108,0x20001004,&local_278,2);
        if ((iVal_5 == 0) || (uVal_10 = (uint)local_278, (uint)local_278 == 0)) goto LAB_180687766;
      }
      else {
        uVal_6 = (uint)local_128;
        uVal_10 = uVal_6 + 0x20;
        if (0x19 < uVal_6 - 0x41) {
          uVal_10 = uVal_6;
        }
        if (uVal_10 == 0x75) {
          uVal_10 = local_126 + 0x20;
          if (0x19 < local_126 - 0x41) {
            uVal_10 = (uint)local_126;
          }
          if (uVal_10 == 0x74) {
            uVal_10 = local_124 + 0x20;
            if (0x19 < local_124 - 0x41) {
              uVal_10 = (uint)local_124;
            }
            if (((uVal_10 == 0x66) && (local_122 == 0x38)) && (local_120 == 0)) goto LAB_180687766;
          }
        }
        if (((local_122 != 0x2d) || (local_120 != 0x38)) || (sStack_11e != 0)) goto LAB_180687704;
LAB_180687766:
        uVal_10 = 0xfde9;
      }
      *pU64_12 = uVal_10 & 0xffff;
      iVal_5 = func_0x1806a06c0();
      if (iVal_5 != 0) goto LAB_180687834;
      do {
        uVal_14 = uVal_13;
        uVal_13 = uVal_14 + 1;
      } while (local_108[uVal_14 + 1] != L'\0');
      pWStr_11 = local_108;
      goto LAB_1806877ad;
    }
  }
LAB_180687704:
  if ((ch_15 != '\0') || (iVal_5 = func_0x1806a06c0(), iVal_5 == 0)) {
LAB_18068742d:
    func_0x180673080(local_58 ^ (uint64_t)auStackY_2a8);
    return;
  }
LAB_18068781f:
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// func_0x18068784c
void func_0x18068784c(uint64_t param_1,uint64_t param_2,int param_3)
{
  int iVal_1;
  int iVal_2;
  
  if (0 < param_3) {
    iVal_2 = 0;
    do {
      iVal_1 = func_0x1806a04f0();
      if (iVal_1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVal_2 = iVal_2 + 1;
    } while (iVal_2 < param_3);
  }
  return;
}

// __lc_lctowcs
/* Library Function - Single Match
    __lc_lctowcs
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __lc_lctowcs
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void __lc_lctowcs(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int iVal_1;
  
  iVal_1 = func_0x180696710();
  if (iVal_1 == 0) {
    if (*(short *)(param_3 + 0x80) != 0) {
      func_0x18068784c(param_1,param_2,2,&DAT_1807619b0,(short *)(param_3 + 0x80));
    }
    if (*(short *)(param_3 + 0x100) != 0) {
      func_0x18068784c(param_1,param_2,2,&DAT_1807619e8,(short *)(param_3 + 0x100));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// func_0x180687958
uint64_t func_0x180687958(int64_t param_1,short *param_2)
{
  short sz_1;
  int iVal_2;
  int iVal_3;
  uint64_t uVal_4;
  
  func_0x1806ab010(param_1,0,0x1ca);
  iVal_2 = 0;
  if (*param_2 != 0) {
    if ((*param_2 != 0x2e) || (param_2[1] == 0)) {
      do {
        uVal_4 = func_0x1806a0810(param_2,&DAT_180764f60);
        if (uVal_4 == 0) {
          return 0xffffffff;
        }
        sz_1 = param_2[uVal_4];
        if (iVal_2 == 0) {
          if (0x3f < uVal_4) {
            return 0xffffffff;
          }
          iVal_3 = func_0x1806a06c0();
          if (iVal_3 != 0) goto LAB_180687aa7;
          if (sz_1 != 0x2e) goto LAB_180687a5a;
          iVal_2 = 1;
        }
        else {
          if (iVal_2 == 1) {
            if (0x3f < uVal_4) {
              return 0xffffffff;
            }
            if (sz_1 == 0x5f) {
              return 0xffffffff;
            }
          }
          else {
            if (iVal_2 != 2) {
              return 0xffffffff;
            }
            if (0xf < uVal_4) {
              return 0xffffffff;
            }
            if ((sz_1 != 0) && (sz_1 != 0x2c)) {
              return 0xffffffff;
            }
          }
          iVal_3 = func_0x1806a06c0();
          if (iVal_3 != 0) goto LAB_180687aa7;
LAB_180687a5a:
          if (sz_1 == 0x2c) {
            return 0;
          }
          if (sz_1 == 0) {
            return 0;
          }
        }
        param_2 = param_2 + uVal_4 + 1;
        iVal_2 = iVal_2 + 1;
      } while( true );
    }
    iVal_2 = func_0x1806a06c0();
    if (iVal_2 != 0) {
LAB_180687aa7:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    *(uint16_t *)(param_1 + 0x11e) = 0;
  }
  return 0;
}

// func_0x180687abc
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x180687abc(int64_t param_1,int param_2,uint64_t param_3)
{
  uint64_t *pU64_1;
  short sz_2;
  short sz_3;
  uint32_t uVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int *pInt_8;
  int iVal_9;
  int64_t lVal_10;
  int64_t lVal_11;
  uint32_t *pU64_12;
  ushort *pU64_13;
  short *pSize_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  uint uVal_18;
  int64_t lVal_20;
  int64_t lVal_21;
  uint8_t auStackY_368 [32];
  short local_308 [136];
  uint8_t local_1f8 [176];
  ushort local_148 [128];
  uint64_t local_48;
  uint64_t uVal_19;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStackY_368;
  lVal_20 = (int64_t)param_2;
  lVal_10 = __vcrt_getptd();
  pU64_1 = (uint64_t *)(lVal_10 + 0x2c8);
  lVal_11 = func_0x1806873c8(param_3,local_308,0x83,local_1f8);
  if (lVal_11 != 0) {
    pSize_14 = local_308;
    lVal_21 = lVal_20 * 0x20;
    lVal_11 = *(int64_t *)(lVal_21 + 0x28 + param_1) - (int64_t)pSize_14;
    do {
      sz_2 = *pSize_14;
      sz_3 = *(short *)((int64_t)pSize_14 + lVal_11);
      if (sz_2 != sz_3) break;
      pSize_14 = pSize_14 + 1;
    } while (sz_3 != 0);
    if (sz_2 != sz_3) {
      lVal_11 = -1;
      do {
        lVal_11 = lVal_11 + 1;
      } while (local_308[lVal_11] != 0);
      pU64_12 = (uint32_t *)_malloc_base(lVal_11 * 2 + 6);
      if (pU64_12 != (uint32_t *)0x0) {
        pU64_5 = *(uint8_t **)(lVal_21 + 0x28 + param_1);
        uVal_6 = *(uint64_t *)(param_1 + 0x128 + lVal_20 * 8);
        uVal_4 = *(uint32_t *)(param_1 + 0xc);
        iVal_9 = func_0x180696710();
        uVal_16 = 0;
        if (iVal_9 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(uint32_t **)(lVal_21 + 0x28 + param_1) = pU64_12 + 1;
        if ((local_308[0] != 0x43) || (uVal_17 = uVal_16, local_308[1] != 0)) {
          uVal_17 = __acrt_copy_locale_name(local_1f8);
        }
        *(uint64_t *)(param_1 + 0x128 + lVal_20 * 8) = uVal_17;
        if (param_2 == 2) {
          *(uint32_t *)(param_1 + 0xc) = 0;
          uVal_15 = *(uint64_t *)(lVal_10 + 0x2e8);
          uVal_17 = uVal_16;
          uVal_19 = uVal_16;
          do {
            uVal_18 = (uint)uVal_19;
            if (*(int *)(param_1 + 0xc) == *(int *)(pU64_1 + uVal_17)) {
              if (uVal_18 != 0) {
                *pU64_1 = pU64_1[(int)uVal_18];
                pU64_1[(int)uVal_18] = uVal_15;
              }
              break;
            }
            uVal_7 = pU64_1[uVal_17];
            uVal_18 = uVal_18 + 1;
            uVal_19 = (uint64_t)uVal_18;
            pU64_1[uVal_17] = uVal_15;
            uVal_17 = uVal_17 + 1;
            uVal_15 = uVal_7;
          } while ((int64_t)uVal_17 < 5);
          if (uVal_18 == 5) {
            iVal_9 = func_0x18069880c(0,1,&DAT_1806e4c10);
            uVal_18 = 0;
            if (iVal_9 != 0) {
              pU64_13 = local_148;
              do {
                uVal_18 = (int)uVal_16 + 1;
                uVal_16 = (uint64_t)uVal_18;
                *pU64_13 = *pU64_13 & 0x1ff;
                pU64_13 = pU64_13 + 1;
              } while (uVal_18 < 0x7f);
              iVal_9 = memcmp(local_148,PTR_DAT_18083d5d8,0xfe);
              uVal_18 = (uint)(iVal_9 == 0);
            }
            *(uint *)(lVal_10 + 0x2cc) = uVal_18;
            *(uint32_t *)pU64_1 = *(uint32_t *)(param_1 + 0xc);
          }
          *(uint32_t *)(param_1 + 0x1c) = *(uint32_t *)(lVal_10 + 0x2cc);
        }
        else if (param_2 == 1) {
          *(uint32_t *)(param_1 + 0x14) = 0;
        }
        else if (param_2 == 5) {
          *(uint32_t *)(param_1 + 0x18) = 0;
        }
        iVal_9 = (*(func_ptr_t )(&PTR_LAB_1806e4ca0)[lVal_20 * 3])();
        if (iVal_9 == 0) {
          if (pU64_5 != &DAT_18083d818) {
            pInt_8 = *(int **)(lVal_20 * 0x20 + 0x38 + param_1);
            LOCK();
            iVal_9 = *pInt_8;
            *pInt_8 = *pInt_8 + -1;
            UNLOCK();
            if (iVal_9 == 1) {
              func_0x180695dd0(*(uint64_t *)(lVal_20 * 0x20 + 0x38 + param_1));
              func_0x180695dd0(*(uint64_t *)(lVal_20 * 0x20 + 0x30 + param_1));
              func_0x180695dd0(*(uint64_t *)(param_1 + 0x128 + lVal_20 * 8));
              *(uint64_t *)(lVal_20 * 0x20 + 0x28 + param_1) = 0;
              *(uint64_t *)(param_1 + 0x128 + lVal_20 * 8) = 0;
            }
          }
          *pU64_12 = 1;
          *(uint32_t **)(lVal_20 * 0x20 + 0x38 + param_1) = pU64_12;
        }
        else {
          *(uint8_t **)(lVal_20 * 0x20 + 0x28 + param_1) = pU64_5;
          func_0x180695dd0(*(uint64_t *)(param_1 + 0x128 + lVal_20 * 8));
          *(uint64_t *)(param_1 + 0x128 + lVal_20 * 8) = uVal_6;
          func_0x180695dd0(pU64_12);
          *(uint32_t *)(param_1 + 0xc) = uVal_4;
        }
      }
    }
  }
  func_0x180673080(local_48 ^ (uint64_t)auStackY_368);
  return;
}

// _wsetlocale_get_all
/* Library Function - Single Match
    _wsetlocale_get_all
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    _wsetlocale_get_all
   
   Library: Visual Studio 2019 Release */
uint32_t * _wsetlocale_get_all(int64_t param_1)
{
  short **ptr2_Size_1;
  short sz_2;
  short sz_3;
  int *pInt_4;
  bool bFlag_5;
  bool bFlag_6;
  int iVal_7;
  uint32_t *pU64_8;
  uint32_t *pU64_9;
  short *pSize_10;
  int64_t lVal_11;
  uint8_t **ptr2_U64_12;
  short **ptr2_Size_13;
  
  pU64_8 = (uint32_t *)_malloc_base(0x6a6);
  pU64_9 = pU64_8;
  if (pU64_8 != (uint32_t *)0x0) {
    pU64_9 = pU64_8 + 1;
    *pU64_8 = 1;
    *(uint16_t *)pU64_9 = 0;
    ptr2_Size_13 = (short **)(param_1 + 0x48);
    func_0x18068784c(pU64_9,0x351,3,PTR_u_LC_COLLATE_1806e4ca8,&DAT_1807619d0,*ptr2_Size_13);
    ptr2_U64_12 = &PTR_u_LC_COLLATE_1806e4ca8;
    bFlag_6 = true;
    do {
      iVal_7 = func_0x1806a04f0();
      if (iVal_7 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      ptr2_Size_1 = ptr2_Size_13 + 4;
      pSize_10 = *ptr2_Size_13;
      lVal_11 = (int64_t)*ptr2_Size_1 - (int64_t)pSize_10;
      do {
        sz_2 = *pSize_10;
        sz_3 = *(short *)((int64_t)pSize_10 + lVal_11);
        if (sz_2 != sz_3) break;
        pSize_10 = pSize_10 + 1;
      } while (sz_3 != 0);
      bFlag_5 = false;
      if (sz_2 == sz_3) {
        bFlag_5 = bFlag_6;
      }
      ptr2_U64_12 = ptr2_U64_12 + 3;
      ptr2_Size_13 = ptr2_Size_13 + 4;
      func_0x18068784c(pU64_9,0x351,3,*ptr2_U64_12,&DAT_1807619d0,*ptr2_Size_1);
      bFlag_6 = bFlag_5;
    } while ((int64_t)ptr2_U64_12 < 0x1806e4d08);
    if (bFlag_5) {
      func_0x180695dd0(pU64_8);
      pInt_4 = *(int **)(param_1 + 0x38);
      if (pInt_4 != (int *)0x0) {
        LOCK();
        iVal_7 = *pInt_4;
        *pInt_4 = *pInt_4 + -1;
        UNLOCK();
        if (iVal_7 == 1) {
          func_0x180695dd0(*(uint64_t *)(param_1 + 0x38));
        }
      }
      pInt_4 = *(int **)(param_1 + 0x30);
      if (pInt_4 != (int *)0x0) {
        LOCK();
        iVal_7 = *pInt_4;
        *pInt_4 = *pInt_4 + -1;
        UNLOCK();
        if (iVal_7 == 1) {
          func_0x180695dd0(*(uint64_t *)(param_1 + 0x30));
        }
      }
      pU64_9 = *(uint32_t **)(param_1 + 0x68);
      *(uint64_t *)(param_1 + 0x30) = 0;
      *(uint64_t *)(param_1 + 0x20) = 0;
      *(uint64_t *)(param_1 + 0x38) = 0;
      *(uint64_t *)(param_1 + 0x28) = 0;
    }
    else {
      pInt_4 = *(int **)(param_1 + 0x38);
      if (pInt_4 != (int *)0x0) {
        LOCK();
        iVal_7 = *pInt_4;
        *pInt_4 = *pInt_4 + -1;
        UNLOCK();
        if (iVal_7 == 1) {
          func_0x180695dd0(*(uint64_t *)(param_1 + 0x38));
        }
      }
      pInt_4 = *(int **)(param_1 + 0x30);
      if (pInt_4 != (int *)0x0) {
        LOCK();
        iVal_7 = *pInt_4;
        *pInt_4 = *pInt_4 + -1;
        UNLOCK();
        if (iVal_7 == 1) {
          func_0x180695dd0(*(uint64_t *)(param_1 + 0x30));
        }
      }
      *(uint64_t *)(param_1 + 0x30) = 0;
      *(uint64_t *)(param_1 + 0x20) = 0;
      *(uint32_t **)(param_1 + 0x38) = pU64_8;
      *(uint32_t **)(param_1 + 0x28) = pU64_9;
    }
  }
  return pU64_9;
}

// func_0x180688010
void func_0x180688010(int64_t param_1,int param_2,wchar_t *param_3)
{
  short sz_1;
  short sz_2;
  func_ptr_t fnPtr_3;
  int iVal_4;
  short *pSize_5;
  size_t sz_6;
  int64_t lVal_7;
  int64_t lVal_8;
  int iVal_9;
  int iVal_10;
  size_t _MaxCount;
  int iVal_11;
  int iVal_12;
  int64_t *pLong_13;
  uint8_t **ptr2_U64_14;
  uint8_t auStackY_248 [32];
  short local_208 [136];
  uint8_t local_f8 [176];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStackY_248;
  iVal_12 = 0;
  if (param_2 != 0) {
    if (param_3 != (wchar_t *)0x0) {
      func_0x180687abc();
    }
    goto LAB_1806881b8;
  }
  if (param_3 != (wchar_t *)0x0) {
    iVal_11 = iVal_12;
    if (((*param_3 == L'L') && (param_3[1] == L'C')) && (param_3[2] == L'_')) {
      do {
        pSize_5 = (short *)func_0x18069f3b0(param_3,&DAT_1807619d4);
        if (((pSize_5 == (short *)0x0) ||
            (_MaxCount = (int64_t)pSize_5 - (int64_t)param_3 >> 1, _MaxCount == 0)) ||
           (*pSize_5 == 0x3b)) goto LAB_1806881b8;
        iVal_12 = 1;
        ptr2_U64_14 = &PTR_u_LC_COLLATE_1806e4ca8;
        do {
          iVal_4 = wcsncmp((wchar_t *)*ptr2_U64_14,param_3,_MaxCount);
          if (iVal_4 == 0) {
            sz_6 = 0xffffffffffffffff;
            do {
              sz_6 = sz_6 + 1;
            } while (*(wchar_t *)((int64_t)*ptr2_U64_14 + sz_6 * 2) != L'\0');
            if (_MaxCount == sz_6) break;
          }
          iVal_12 = iVal_12 + 1;
          ptr2_U64_14 = (uint8_t **)((wchar_t **)ptr2_U64_14 + 3);
        } while ((int64_t)ptr2_U64_14 < 0x1806e4d09);
        pSize_5 = pSize_5 + 1;
        lVal_7 = func_0x1806a0810(pSize_5,&DAT_1807619dc);
        if ((lVal_7 == 0) && (*pSize_5 != 0x3b)) goto LAB_1806881b8;
        if (iVal_12 < 6) {
          iVal_4 = func_0x1806a06c0();
          if (iVal_4 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < (uint64_t)(lVal_7 * 2)) {
            func_0x180678f60();
            fnPtr_3 = (func_ptr_t )swi(3);
            (*fnPtr_3)();
            return;
          }
          local_208[lVal_7] = 0;
          lVal_8 = func_0x180687abc(param_1,iVal_12,local_208);
          if (lVal_8 != 0) {
            iVal_11 = iVal_11 + 1;
          }
        }
      } while ((pSize_5[lVal_7] != 0) && (param_3 = pSize_5 + lVal_7 + 1, *param_3 != L'\0'));
    }
    else {
      lVal_7 = func_0x1806873c8(param_3,local_208,0x83,local_f8);
      if (lVal_7 == 0) goto LAB_1806881b8;
      pLong_13 = (int64_t *)(param_1 + 0x28);
      iVal_4 = iVal_12;
      iVal_9 = 1;
      do {
        iVal_10 = iVal_9;
        if (iVal_4 != 0) {
          pSize_5 = local_208;
          lVal_7 = *pLong_13 - (int64_t)pSize_5;
          do {
            sz_1 = *pSize_5;
            sz_2 = *(short *)((int64_t)pSize_5 + lVal_7);
            if (sz_1 != sz_2) break;
            pSize_5 = pSize_5 + 1;
          } while (sz_2 != 0);
          if ((sz_1 == sz_2) ||
             (lVal_7 = func_0x180687abc(param_1,iVal_4,local_208), iVal_10 = iVal_12, lVal_7 != 0)) {
            iVal_11 = iVal_11 + 1;
            iVal_10 = iVal_9;
          }
        }
        iVal_4 = iVal_4 + 1;
        pLong_13 = pLong_13 + 4;
        iVal_9 = iVal_10;
      } while (iVal_4 < 6);
      if (iVal_10 != 0) goto LAB_1806881b3;
    }
    if (iVal_11 == 0) goto LAB_1806881b8;
  }
LAB_1806881b3:
  _wsetlocale_get_all(param_1);
LAB_1806881b8:
  func_0x180673080(local_48 ^ (uint64_t)auStackY_248);
  return;
}

// _copytlocinfo_nolock
/* Library Function - Single Match
    _copytlocinfo_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _copytlocinfo_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void _copytlocinfo_nolock(uint32_t *param_1,uint32_t *param_2)
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t *pU64_4;
  int64_t lVal_5;
  uint32_t *pU64_6;
  uint32_t *pU64_7;
  
  if (((param_2 != (uint32_t *)0x0) && (param_1 != (uint32_t *)0x0)) && (param_1 != param_2)) {
    lVal_5 = 2;
    pU64_4 = param_1;
    do {
      pU64_7 = pU64_4;
      pU64_6 = param_2;
      uVal_1 = pU64_6[1];
      uVal_2 = pU64_6[2];
      uVal_3 = pU64_6[3];
      *pU64_7 = *pU64_6;
      pU64_7[1] = uVal_1;
      pU64_7[2] = uVal_2;
      pU64_7[3] = uVal_3;
      uVal_1 = pU64_6[5];
      uVal_2 = pU64_6[6];
      uVal_3 = pU64_6[7];
      pU64_7[4] = pU64_6[4];
      pU64_7[5] = uVal_1;
      pU64_7[6] = uVal_2;
      pU64_7[7] = uVal_3;
      uVal_1 = pU64_6[9];
      uVal_2 = pU64_6[10];
      uVal_3 = pU64_6[0xb];
      pU64_7[8] = pU64_6[8];
      pU64_7[9] = uVal_1;
      pU64_7[10] = uVal_2;
      pU64_7[0xb] = uVal_3;
      uVal_1 = pU64_6[0xd];
      uVal_2 = pU64_6[0xe];
      uVal_3 = pU64_6[0xf];
      pU64_7[0xc] = pU64_6[0xc];
      pU64_7[0xd] = uVal_1;
      pU64_7[0xe] = uVal_2;
      pU64_7[0xf] = uVal_3;
      uVal_1 = pU64_6[0x11];
      uVal_2 = pU64_6[0x12];
      uVal_3 = pU64_6[0x13];
      pU64_7[0x10] = pU64_6[0x10];
      pU64_7[0x11] = uVal_1;
      pU64_7[0x12] = uVal_2;
      pU64_7[0x13] = uVal_3;
      uVal_1 = pU64_6[0x15];
      uVal_2 = pU64_6[0x16];
      uVal_3 = pU64_6[0x17];
      pU64_7[0x14] = pU64_6[0x14];
      pU64_7[0x15] = uVal_1;
      pU64_7[0x16] = uVal_2;
      pU64_7[0x17] = uVal_3;
      uVal_1 = pU64_6[0x19];
      uVal_2 = pU64_6[0x1a];
      uVal_3 = pU64_6[0x1b];
      pU64_7[0x18] = pU64_6[0x18];
      pU64_7[0x19] = uVal_1;
      pU64_7[0x1a] = uVal_2;
      pU64_7[0x1b] = uVal_3;
      uVal_1 = pU64_6[0x1d];
      uVal_2 = pU64_6[0x1e];
      uVal_3 = pU64_6[0x1f];
      pU64_7[0x1c] = pU64_6[0x1c];
      pU64_7[0x1d] = uVal_1;
      pU64_7[0x1e] = uVal_2;
      pU64_7[0x1f] = uVal_3;
      lVal_5 = lVal_5 + -1;
      param_2 = pU64_6 + 0x20;
      pU64_4 = pU64_7 + 0x20;
    } while (lVal_5 != 0);
    uVal_1 = pU64_6[0x21];
    uVal_2 = pU64_6[0x22];
    uVal_3 = pU64_6[0x23];
    pU64_7[0x20] = pU64_6[0x20];
    pU64_7[0x21] = uVal_1;
    pU64_7[0x22] = uVal_2;
    pU64_7[0x23] = uVal_3;
    uVal_1 = pU64_6[0x25];
    uVal_2 = pU64_6[0x26];
    uVal_3 = pU64_6[0x27];
    pU64_7[0x24] = pU64_6[0x24];
    pU64_7[0x25] = uVal_1;
    pU64_7[0x26] = uVal_2;
    pU64_7[0x27] = uVal_3;
    uVal_1 = pU64_6[0x29];
    uVal_2 = pU64_6[0x2a];
    uVal_3 = pU64_6[0x2b];
    pU64_7[0x28] = pU64_6[0x28];
    pU64_7[0x29] = uVal_1;
    pU64_7[0x2a] = uVal_2;
    pU64_7[0x2b] = uVal_3;
    uVal_1 = pU64_6[0x2d];
    uVal_2 = pU64_6[0x2e];
    uVal_3 = pU64_6[0x2f];
    pU64_7[0x2c] = pU64_6[0x2c];
    pU64_7[0x2d] = uVal_1;
    pU64_7[0x2e] = uVal_2;
    pU64_7[0x2f] = uVal_3;
    uVal_1 = pU64_6[0x31];
    uVal_2 = pU64_6[0x32];
    uVal_3 = pU64_6[0x33];
    pU64_7[0x30] = pU64_6[0x30];
    pU64_7[0x31] = uVal_1;
    pU64_7[0x32] = uVal_2;
    pU64_7[0x33] = uVal_3;
    *(uint64_t *)(pU64_7 + 0x34) = *(uint64_t *)(pU64_6 + 0x34);
    param_1[4] = 0;
    __acrt_add_locale_ref();
  }
  return;
}

// <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()
/* Library Function - Single Match
    public: __cdecl <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(void)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    public: __cdecl <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(void)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
<lambda_2a444430fde8c29194d880d93eed5e8f>::operator()
          (<lambda_2a444430fde8c29194d880d93eed5e8f> *this)
{
  int64_t lVal_1;
  uint8_t local_res8 [8];
  uint32_t local_res10 [2];
  uint32_t local_res18 [2];
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  
  lVal_1 = _calloc_base(1,0x158);
  **(int64_t **)this = lVal_1;
  func_0x180695dd0(0);
  if (lVal_1 != 0) {
    local_38 = *(uint64_t *)this;
    local_30 = *(uint64_t *)(this + 8);
    local_28 = *(uint64_t *)(this + 0x10);
    local_20 = *(uint64_t *)(this + 0x18);
    local_18 = *(uint64_t *)(this + 0x20);
    local_res10[0] = 4;
    local_res18[0] = 4;
    func_0x1806889d0(local_res8,local_res18,&local_38,local_res10);
  }
  return;
}

// func_0x180688428
uint64_t func_0x180688428(int64_t param_1,uint64_t param_2)
{
  ushort uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  uVal_3 = 0;
  if (param_2 != 0) {
    do {
      uVal_1 = *(ushort *)(param_1 + uVal_3 * 2);
      lVal_2 = func_0x18067e4b8();
      if ((0xff < uVal_1) || ((*(ushort *)(lVal_2 + (uint64_t)uVal_1 * 2) & 0x103) == 0)) {
        return 0;
      }
      uVal_3 = uVal_3 + 1;
    } while (uVal_3 < param_2);
  }
  return 1;
}

// parse_bcp47_language
/* Library Function - Single Match
    parse_bcp47_language
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    parse_bcp47_language
   
   Library: Visual Studio 2019 Release */
uint64_t parse_bcp47_language(uint64_t param_1,uint64_t *param_2)
{
  char ch_1;
  int iVal_2;
  
  if (((*(int *)(param_2 + 2) == 0) && (param_2[1] - 2 < 2)) &&
     (ch_1 = func_0x180688428(*param_2), ch_1 != '\0')) {
    iVal_2 = func_0x1806a06c0();
    if ((iVal_2 == 0) && (iVal_2 = func_0x1806a06c0(), iVal_2 == 0)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}

// parse_bcp47_script
/* Library Function - Single Match
    parse_bcp47_script
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    parse_bcp47_script
   
   Library: Visual Studio 2019 Release */
uint parse_bcp47_script(uint64_t param_1,uint64_t *param_2)
{
  uint in_EAX;
  int iVal_1;
  
  if (((*(int *)(param_2 + 2) == 0) && (param_2[1] == 4)) &&
     (in_EAX = func_0x180688428(*param_2), (char)in_EAX != '\0')) {
    iVal_1 = func_0x1806a0580();
    if ((iVal_1 == 0) && (iVal_1 = func_0x1806a0580(), iVal_1 == 0)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return in_EAX & 0xffffff00;
}

// func_0x1806885b0
uint64_t func_0x1806885b0(uint64_t param_1,int64_t *param_2)
{
  ushort uVal_1;
  int64_t lVal_2;
  char ch_3;
  int iVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  
  if (*(int *)(param_2 + 2) != 0) {
    return 0;
  }
  if ((param_2[1] != 2) || (ch_3 = func_0x180688428(*param_2), ch_3 == '\0')) {
    if (param_2[1] != 3) {
      return 0;
    }
    lVal_2 = *param_2;
    uVal_6 = 0;
    do {
      uVal_1 = *(ushort *)(lVal_2 + uVal_6 * 2);
      lVal_5 = func_0x18067e4b8();
      if (0xff < uVal_1) {
        return 0;
      }
      if ((*(ushort *)(lVal_5 + (uint64_t)uVal_1 * 2) >> 2 & 1) == 0) {
        return 0;
      }
      uVal_6 = uVal_6 + 1;
    } while (uVal_6 < 3);
  }
  iVal_4 = func_0x1806a06c0();
  if (((iVal_4 == 0) && (iVal_4 = func_0x1806a0580(), iVal_4 == 0)) &&
     (iVal_4 = func_0x1806a0580(), iVal_4 == 0)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// parse_bcp47_code_page
/* Library Function - Single Match
    parse_bcp47_code_page
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    parse_bcp47_code_page
   
   Library: Visual Studio 2019 Release */
uint parse_bcp47_code_page(uint64_t param_1,int64_t param_2)
{
  uint in_EAX;
  uint uVal_1;
  int iVal_2;
  
  if (*(int *)(param_2 + 0x10) == 2) {
    iVal_2 = func_0x1806a06c0();
    if (iVal_2 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVal_1 = 1;
  }
  else {
    uVal_1 = in_EAX & 0xffffff00;
  }
  return uVal_1;
}

// func_0x1806886ec
void func_0x1806886ec(uint64_t param_1,short *param_2)
{
  short sz_1;
  char ch_2;
  int64_t lVal_3;
  uint8_t *pU64_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t *pLong_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint8_t auStack_c8 [32];
  uint8_t local_a8 [8];
  int64_t local_a0 [2];
  uint8_t local_90 [24];
  uint8_t local_78 [24];
  uint8_t local_60 [24];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_c8;
  func_0x1806ab010(param_1,0,0x1ca);
  uVal_8 = 0;
  pLong_7 = local_a0;
  uVal_6 = uVal_8;
  uVal_9 = uVal_8;
  do {
    while( true ) {
      do {
        uVal_5 = uVal_6;
        if (3 < uVal_5) goto LAB_1806888c0;
        if ((int)uVal_9 == 2) {
          lVal_3 = -1;
          do {
            lVal_3 = lVal_3 + 1;
          } while (param_2[lVal_3] != 0);
        }
        else {
          lVal_3 = func_0x1806a0810(param_2,&DAT_180764f38);
        }
        pLong_7[-1] = (int64_t)param_2;
        uVal_6 = uVal_5 + 1;
        *pLong_7 = lVal_3;
        sz_1 = param_2[lVal_3];
        param_2 = param_2 + lVal_3 + 1;
        *(int *)(pLong_7 + 1) = (int)uVal_9;
        pLong_7 = pLong_7 + 3;
        if (sz_1 == 0) goto LAB_18068879e;
        uVal_9 = uVal_8;
      } while (sz_1 == 0x2d);
      if (sz_1 != 0x2e) break;
      uVal_9 = 2;
    }
  } while (sz_1 == 0x5f);
LAB_18068879e:
  if (uVal_5 == 0) {
    parse_bcp47_language(param_1,local_a8);
  }
  else {
    if (uVal_5 == 1) {
      ch_2 = parse_bcp47_language(param_1,local_a8);
      if (((ch_2 == '\0') || (ch_2 = parse_bcp47_script(param_1,local_90), ch_2 != '\0')) ||
         (ch_2 = func_0x1806885b0(param_1,local_90), ch_2 != '\0')) goto LAB_1806888c0;
      pU64_4 = local_90;
    }
    else if (uVal_5 == 2) {
      ch_2 = parse_bcp47_language(param_1,local_a8);
      if ((ch_2 == '\0') ||
         (((ch_2 = parse_bcp47_script(param_1,local_90), ch_2 != '\0' &&
           ((ch_2 = func_0x1806885b0(param_1,local_78), ch_2 != '\0' ||
            (ch_2 = parse_bcp47_code_page(param_1,local_78), ch_2 != '\0')))) ||
          (ch_2 = func_0x1806885b0(param_1,local_90), ch_2 == '\0')))) goto LAB_1806888c0;
      pU64_4 = local_78;
    }
    else {
      if (((uVal_5 != 3) || (ch_2 = parse_bcp47_language(param_1,local_a8), ch_2 == '\0')) ||
         ((ch_2 = parse_bcp47_script(param_1,local_90), ch_2 == '\0' ||
          (ch_2 = func_0x1806885b0(param_1,local_78), ch_2 == '\0')))) goto LAB_1806888c0;
      pU64_4 = local_60;
    }
    parse_bcp47_code_page(param_1,pU64_4);
  }
LAB_1806888c0:
  func_0x180673080(local_48 ^ (uint64_t)auStack_c8);
  return;
}

// _expandlocale_locale_name_cache::commit_locale_name
/* Library Function - Single Match
    public: void __cdecl _expandlocale_locale_name_cache::commit_locale_name(wchar_t const * __ptr64
   const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    public: void __cdecl _expandlocale_locale_name_cache::commit_locale_name(wchar_t const * __ptr64
   const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */
void __thiscall _expandlocale_locale_name_cache:: commit_locale_name(_expandlocale_locale_name_cache *this,wchar_t *param_1,__uint64 param_2)
{
  int iVal_1;
  
  iVal_1 = func_0x1806a06c0();
  if (iVal_1 == 0) {
    iVal_1 = func_0x1806a06c0();
    if (iVal_1 == 0) {
      this[0x18] = (_expandlocale_locale_name_cache)0x1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// __crt_seh_guarded_call<void>::operator()<class_<lambda_410d79af7f07d98d83a3f525b3859a53>,class_<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,class_<lambda_38119f0e861e05405d8a144b9b982f0a>_>
/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_410d79af7f07d98d83a3f525b3859a53>,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &
   __ptr64,class <lambda_38119f0e861e05405d8a144b9b982f0a> >(class
   <lambda_410d79af7f07d98d83a3f525b3859a53> && __ptr64,class
   <lambda_3e16ef9562a7dcce91392c22ab16ea36> & __ptr64,class
   <lambda_38119f0e861e05405d8a144b9b982f0a> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_410d79af7f07d98d83a3f525b3859a53>,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &
   __ptr64,class <lambda_38119f0e861e05405d8a144b9b982f0a> >(class
   <lambda_410d79af7f07d98d83a3f525b3859a53> && __ptr64,class
   <lambda_3e16ef9562a7dcce91392c22ab16ea36> & __ptr64,class
   <lambda_38119f0e861e05405d8a144b9b982f0a> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_410d79af7f07d98d83a3f525b3859a53>,class_<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,class_<lambda_38119f0e861e05405d8a144b9b982f0a>_>
          (__crt_seh_guarded_call<void> *this,<lambda_410d79af7f07d98d83a3f525b3859a53> *param_1,
          <lambda_3e16ef9562a7dcce91392c22ab16ea36> *param_2,
          <lambda_38119f0e861e05405d8a144b9b982f0a> *param_3)
{
  int64_t lVal_1;
  int64_t *pLong_2;
  
  FID_conflict___acrt_lock(*(uint32_t *)param_1);
  for (pLong_2 = &DAT_180842ac0; pLong_2 != (int64_t *)&DAT_180842ac8; pLong_2 = pLong_2 + 1) {
    if ((uint8_t **)*pLong_2 != &PTR_DAT_18083d6b0) {
      lVal_1 = _updatetlocinfoEx_nolock(pLong_2,&PTR_DAT_18083d6b0);
      *pLong_2 = lVal_1;
    }
  }
  FID_conflict___acrt_lock(*(uint32_t *)param_3);
  return;
}

// func_0x1806889d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1806889d0(uint64_t param_1,uint32_t *param_2,uint64_t *param_3,uint32_t *param_4)
{
  short sz_1;
  short sz_2;
  int64_t lVal_3;
  short *pSize_4;
  
  FID_conflict___acrt_lock(*param_2);
  _copytlocinfo_nolock(*(uint64_t *)*param_3,*(uint64_t *)(*(int64_t *)param_3[1] + 0x90));
  lVal_3 = func_0x180688010(*(uint64_t *)*param_3,*(uint32_t *)param_3[3],*(uint64_t *)param_3[4])
  ;
  *(int64_t *)param_3[2] = lVal_3;
  if (lVal_3 == 0) {
    __acrt_release_locale_ref(*(uint64_t *)*param_3);
    __acrt_free_locale(*(uint64_t *)*param_3);
  }
  else {
    pSize_4 = *(short **)param_3[4];
    if (pSize_4 != (short *)0x0) {
      lVal_3 = (int64_t)&DAT_18083d818 - (int64_t)pSize_4;
      do {
        sz_1 = *pSize_4;
        sz_2 = *(short *)((int64_t)pSize_4 + lVal_3);
        if (sz_1 != sz_2) break;
        pSize_4 = pSize_4 + 1;
      } while (sz_2 != 0);
      if (sz_1 != sz_2) {
        LOCK();
        DAT_1808429bc = 1;
        UNLOCK();
      }
    }
    _updatetlocinfoEx_nolock(*(int64_t *)param_3[1] + 0x90,*(uint64_t *)*param_3);
    __acrt_release_locale_ref(*(uint64_t *)*param_3);
    if (((*(byte *)(*(int64_t *)param_3[1] + 0x3a8) & 2) == 0) && (((byte)DAT_18083e070 & 1) == 0))
    {
      _updatetlocinfoEx_nolock(&DAT_180842ac0,*(uint64_t *)(*(int64_t *)param_3[1] + 0x90));
      PTR_PTR_DAT_18083d678 = (uint8_t *)DAT_180842ac0[0x1f];
      PTR_DAT_18083d5b8 = (uint8_t *)*DAT_180842ac0;
      _DAT_18083d81c = *(uint32_t *)(DAT_180842ac0 + 1);
    }
  }
  FID_conflict___acrt_lock(*param_4);
  return;
}

// __crt_seh_guarded_call<void>::operator()<class_<lambda_7f2adfce497ff2baa965cd4f576ecfd1>,class_<lambda_2a444430fde8c29194d880d93eed5e8f>&___ptr64,class_<lambda_8dff2cf36a5417162780cd64fa2883ef>&___ptr64>
/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_7f2adfce497ff2baa965cd4f576ecfd1>,class <lambda_2a444430fde8c29194d880d93eed5e8f> &
   __ptr64,class <lambda_8dff2cf36a5417162780cd64fa2883ef> & __ptr64>(class
   <lambda_7f2adfce497ff2baa965cd4f576ecfd1> && __ptr64,class
   <lambda_2a444430fde8c29194d880d93eed5e8f> & __ptr64,class
   <lambda_8dff2cf36a5417162780cd64fa2883ef> & __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_7f2adfce497ff2baa965cd4f576ecfd1>,class <lambda_2a444430fde8c29194d880d93eed5e8f> &
   __ptr64,class <lambda_8dff2cf36a5417162780cd64fa2883ef> & __ptr64>(class
   <lambda_7f2adfce497ff2baa965cd4f576ecfd1> && __ptr64,class
   <lambda_2a444430fde8c29194d880d93eed5e8f> & __ptr64,class
   <lambda_8dff2cf36a5417162780cd64fa2883ef> & __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_7f2adfce497ff2baa965cd4f576ecfd1>,class_<lambda_2a444430fde8c29194d880d93eed5e8f>&___ptr64,class_<lambda_8dff2cf36a5417162780cd64fa2883ef>&___ptr64>
          (__crt_seh_guarded_call<void> *this,<lambda_7f2adfce497ff2baa965cd4f576ecfd1> *param_1,
          <lambda_2a444430fde8c29194d880d93eed5e8f> *param_2,
          <lambda_8dff2cf36a5417162780cd64fa2883ef> *param_3)
{
  <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(param_2);
  *(uint *)(**(int64_t **)param_3 + 0x3a8) = *(uint *)(**(int64_t **)param_3 + 0x3a8) & 0xffffffef
  ;
  return;
}

// func_0x180688b40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x180688b40(void)
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint uVal_3;
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  float fVal_9;
  uint uVal_10;
  float fVal_11;
  uint uVal_12;
  bool bFlag_13;
  uint64_t uVal_14;
  uint8_t in_YMM0 [32];
  uint8_t in_YMM1 [32];
  uint8_t auArr_15 [32];
  uint8_t auArr_16 [32];
  uint8_t auArr_17 [32];
  uint8_t auArr_18 [32];
  float fVal_19;
  float fVal_20;
  float fVal_21;
  uint8_t auArr_22 [16];
  uint8_t in_YMM7 [32];
  
  auArr_22 = in_YMM0._0_16_;
  uVal_14 = in_YMM0._0_8_;
  if (((byte)DAT_180843124 & 3) == 3) {
    uVal_12 = vmovd_avx(auArr_22);
    uVal_10 = uVal_12 >> 0x17 & 0xff;
    auArr_8 = vxorps_avx(in_YMM7._0_16_,in_YMM7._0_16_);
    if (0x7f800000 < (uVal_12 & 0x7fffffff)) {
      uVal_14 = func_0x1806a90d0();
      return uVal_14;
    }
    if (uVal_10 < 0x71) {
      func_0x1806a2410(0x20);
      return uVal_14;
    }
    uVal_3 = uVal_10 - 0x7f;
    bFlag_13 = (POPCOUNT(uVal_3 & 0xff) & 1U) != 0;
    if (uVal_10 < 0x7f) {
      if ((int)uVal_12 < 0) {
        auArr_6._4_4_ = _UNK_1806af1a4;
        auArr_6._0_4_ = _DAT_1806af1a0;
        auArr_6._8_4_ = _UNK_1806af1a8;
        auArr_6._12_4_ = _UNK_1806af1ac;
        auArr_22 = vxorps_avx(auArr_22,auArr_6);
      }
      if (uVal_10 < 0x7e) {
        auArr_6 = vmulss_avx(auArr_22,auArr_22);
      }
      else {
        auArr_8 = vmovss_avx(DAT_1806b26b4);
        auArr_22 = vsubss_avx(auArr_8,auArr_22);
        auArr_6 = vmulss_avx(auArr_22,ZEXT416((uint)DAT_1806aeae4));
        auArr_8 = vsqrtss_avx(auArr_6,auArr_6);
        auArr_22 = auArr_8;
      }
      auArr_4 = vmovss_avx(_DAT_1806e4d30);
      auArr_4 = vfnmadd213ss_fma(auArr_4,auArr_6,ZEXT416((uint)DAT_1806e4d4c));
      auArr_4 = vfmsub213ss_fma(auArr_4,auArr_6,ZEXT416((uint)DAT_1806e4d34));
      auArr_4 = vfmadd213ss_fma(auArr_4,auArr_6,ZEXT416((uint)DAT_1806e4d38));
      auArr_7 = vmulss_avx(auArr_4,auArr_6);
      auArr_4 = vmovss_avx(_DAT_1806e4d40);
      auArr_4 = vfnmadd213ss_fma(auArr_4,auArr_6,ZEXT416((uint)DAT_1806e4d44));
      auArr_4 = vdivss_avx(auArr_7,auArr_4);
      if (uVal_10 < 0x7e) {
        auArr_22 = vfmadd231ss_fma(auArr_22,auArr_4,auArr_22);
      }
      else {
        auArr_5 = vmovss_avx(DAT_1806e4d2c);
        uVal_10 = vmovd_avx(auArr_8);
        auArr_7 = vmovd_avx(uVal_10 & 0xffff0000);
        auArr_6 = vfnmadd231ss_fma(auArr_6,auArr_7,auArr_7);
        auArr_22 = vaddss_avx(auArr_7,auArr_8);
        auArr_22 = vdivss_avx(auArr_6,auArr_22);
        auArr_22 = vaddss_avx(auArr_22,auArr_22);
        auArr_5 = vsubss_avx(auArr_5,auArr_22);
        auArr_6 = vmovss_avx(DAT_1806e4d3c);
        auArr_22 = vaddss_avx(auArr_8,auArr_8);
        auArr_8 = vfmsub231ss_fma(auArr_5,auArr_4,auArr_22);
        auArr_22 = vaddss_avx(auArr_7,auArr_7);
        auArr_22 = vsubss_avx(auArr_6,auArr_22);
        auArr_22 = vsubss_avx(auArr_8,auArr_22);
        auArr_22 = vsubss_avx(auArr_6,auArr_22);
      }
      uVal_14 = auArr_22._0_8_;
      if ((int)uVal_12 < 0) {
        auArr_8._4_4_ = _UNK_1806af1a4;
        auArr_8._0_4_ = _DAT_1806af1a0;
        auArr_8._8_4_ = _UNK_1806af1a8;
        auArr_8._12_4_ = _UNK_1806af1ac;
        auArr_22 = vxorps_avx(auArr_22,auArr_8);
        uVal_14 = auArr_22._0_8_;
      }
      return uVal_14;
    }
    vucomiss_avx(auArr_22,ZEXT416((uint)DAT_1806b26b4));
    if ((bFlag_13) && (uVal_3 == 0)) {
      func_0x1806a2410(0x20);
      auArr_22 = vmovss_avx(DAT_1806e4d48);
      return auArr_22._0_8_;
    }
    vucomiss_avx(auArr_22,ZEXT416((uint)DAT_1806ae7b0));
    if ((bFlag_13) && (uVal_3 == 0)) {
      func_0x1806a2410(0x20);
      auArr_22 = vmovss_avx(DAT_1806e4d50);
      return auArr_22._0_8_;
    }
    uVal_1 = vmovss_avx(auArr_8);
    uVal_2 = vmovss_avx(auArr_22);
    uVal_14 = func_0x1806a2550("asinf",0xe,0xffc00000,1,8,0x21,uVal_2,uVal_1,1);
    return uVal_14;
  }
  fVal_11 = in_YMM0._0_4_;
  fVal_20 = 0.0;
  uVal_12 = (uint)fVal_11 >> 0x17 & 0xff;
  if (0x7f800000 < ((uint)fVal_11 & 0x7fffffff)) {
    uVal_14 = func_0x1806a2540();
    return uVal_14;
  }
  if (uVal_12 < 0x71) {
    func_0x1806a2410(0x20);
    return uVal_14;
  }
  if (uVal_12 < 0x7f) {
    if ((int)fVal_11 < 0) {
      auArr_22._0_4_ = (uint)fVal_11 ^ _DAT_1806af1a0;
      auArr_22._4_4_ = in_YMM0._4_4_ ^ _UNK_1806af1a4;
      auArr_22._8_4_ = in_YMM0._8_4_ ^ _UNK_1806af1a8;
      auArr_22._12_4_ = in_YMM0._12_4_ ^ _UNK_1806af1ac;
    }
    fVal_19 = auArr_22._0_4_;
    if (uVal_12 < 0x7e) {
      fVal_19 = fVal_19 * fVal_19;
    }
    else {
      fVal_19 = (DAT_1806b26b4 - fVal_19) * DAT_1806aeae4;
      fVal_20 = SQRT(fVal_19);
      auArr_22 = ZEXT416((uint)fVal_20);
    }
    auArr_15._16_16_ = in_YMM1._16_16_;
    fVal_21 = ((((DAT_1806e4d4c - fVal_19 * _DAT_1806e4d30) * fVal_19 - DAT_1806e4d34) * fVal_19 +
              DAT_1806e4d38) * fVal_19) / (DAT_1806e4d44 - fVal_19 * _DAT_1806e4d40);
    if (uVal_12 < 0x7e) {
      auArr_17._16_16_ = auArr_15._16_16_;
      auArr_17._0_16_ = auArr_22;
      auArr_18._4_28_ = auArr_17._4_28_;
      auArr_18._0_4_ = auArr_22._0_4_ * fVal_21 + auArr_22._0_4_;
      uVal_14 = auArr_18._0_8_;
    }
    else {
      fVal_9 = (float)((uint)fVal_20 & 0xffff0000);
      fVal_19 = (fVal_19 - fVal_9 * fVal_9) / (fVal_9 + fVal_20);
      auArr_15._0_16_ = ZEXT416((uint)DAT_1806e4d3c);
      auArr_16._4_28_ = auArr_15._4_28_;
      auArr_16._0_4_ =
           DAT_1806e4d3c -
           (((fVal_20 + fVal_20) * fVal_21 - (DAT_1806e4d2c - (fVal_19 + fVal_19))) -
           (DAT_1806e4d3c - (fVal_9 + fVal_9)));
      uVal_14 = auArr_16._0_8_;
    }
    if ((int)fVal_11 < 0) {
      uVal_14 = CONCAT44((uint)(uVal_14 >> 0x20) ^ _UNK_1806af1a4,(uint)uVal_14 ^ _DAT_1806af1a0);
    }
    return uVal_14;
  }
  if (fVal_11 != DAT_1806b26b4) {
    if (fVal_11 != DAT_1806ae7b0) {
      uVal_14 = func_0x1806a2550("asinf",0xe,0xffc00000,1,8,0x21);
      return uVal_14;
    }
    func_0x1806a2410(0x20);
    return (uint64_t)DAT_1806e4d50;
  }
  func_0x1806a2410(0x20);
  return (uint64_t)DAT_1806e4d48;
}

// func_0x180688d60
/* WARNING: Removing unreachable block (ram,0x0001806a2ba1) */
/* WARNING: Removing unreachable block (ram,0x0001806a2c3c) */
/* WARNING: Removing unreachable block (ram,0x0001806a2ba1) */
/* WARNING: Removing unreachable block (ram,0x0001806a2c3c) */
uint64_t func_0x180688d60(void)
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int iVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint8_t auArr_12 [16];
  uint8_t in_YMM0 [32];
  uint8_t extraout_YMM0_H [16];
  uint8_t auArr_13 [32];
  uint8_t auArr_14 [32];
  uint8_t auArr_15 [32];
  uint8_t auArr_16 [32];
  uint8_t auArr_17 [32];
  uint8_t auArr_11 [16];
  uint8_t auArr_18 [32];
  double dVal_19;
  uint8_t auArr_20 [16];
  uint8_t in_YMM1 [32];
  uint8_t auArr_21 [16];
  uint8_t auArr_22 [16];
  uint8_t in_YMM2 [32];
  double dVal_23;
  double dVal_24;
  double dVal_25;
  uint8_t auArr_26 [16];
  uint8_t auArr_27 [16];
  uint uVal_28;
  uint8_t auArr_30 [16];
  uint8_t auArr_31 [16];
  double dVal_29;
  uint8_t in_YMM6 [32];
  uint8_t auArr_32 [32];
  uint8_t auArr_33 [32];
  uint8_t auArr_34 [16];
  uint8_t auArr_35 [16];
  uint8_t in_YMM7 [32];
  uint8_t auArr_36 [32];
  uint8_t auArr_37 [32];
  uint8_t extraout_var [24];
  
  auArr_27 = in_YMM1._0_16_;
  if (((byte)DAT_180843124 & 3) != 3) {
    auArr_32._16_16_ = in_YMM6._16_16_;
    auArr_32._0_16_ = ZEXT816(0);
    auArr_36._16_16_ = in_YMM7._16_16_;
    auArr_36._0_16_ = ZEXT816(0);
    auArr_37._8_24_ = auArr_36._8_24_;
    auArr_37._0_8_ = (double)in_YMM1._0_4_;
    auArr_35 = auArr_37._0_16_;
    auArr_33._8_24_ = auArr_32._8_24_;
    auArr_33._0_8_ = (double)in_YMM0._0_4_;
    auArr_30 = auArr_33._0_16_;
    iVal_7 = ((uint)((uint64_t)auArr_33._0_8_ >> 0x34) & 0x7ff) -
            ((uint)((uint64_t)auArr_37._0_8_ >> 0x34) & 0x7ff);
    uVal_9 = (uint64_t)auArr_37._0_8_ & 0x7fffffffffffffff;
    if (0x7ff0000000000000 < uVal_9) {
      in_YMM0._0_16_ = auArr_27;
LAB_180688e09:
      uVal_9 = func_0x1806a2540(in_YMM0._0_4_);
      return uVal_9;
    }
    if (0x7ff0000000000000 < ((uint64_t)auArr_33._0_8_ & 0x7fffffffffffffff)) goto LAB_180688e09;
    if (((uint64_t)auArr_33._0_8_ & 0x7fffffffffffffff) == 0) {
      if ((int64_t)auArr_37._0_8_ < 0) {
joined_r0x000180688e34:
        if (-1 < (int64_t)auArr_33._0_8_) {
          func_0x1806a2410(0x20);
          return (uint64_t)DAT_1806b2864;
        }
        func_0x1806a2410(0x20);
        return (uint64_t)DAT_1806b2868;
      }
LAB_180688f92:
      return CONCAT44((float)auArr_30._8_8_,(float)auArr_30._0_8_);
    }
    if (((uint64_t)auArr_37._0_8_ & 0x7fffffffffffffff) == 0) {
      if ((int64_t)auArr_33._0_8_ < 0) goto LAB_180688e6e;
      func_0x1806a2410((int)uVal_9 + 0x20);
      in_YMM0._16_16_ = extraout_YMM0_H;
    }
    if (0x1a < iVal_7) {
      if (-1 < (int64_t)auArr_33._0_8_) {
        func_0x1806a2410(0x20);
        return (uint64_t)DAT_1806e4d48;
      }
LAB_180688e6e:
      func_0x1806a2410(0x20);
      return (uint64_t)DAT_1806e4d50;
    }
    if ((iVal_7 < -0xd) && (-1 < (int64_t)auArr_37._0_8_)) {
      if (iVal_7 < -0x96) {
        func_0x1806a2410(0x30);
        if ((int64_t)auArr_33._0_8_ < 0) {
          return (uint64_t)DAT_1806b5bf0;
        }
        return 0;
      }
      if (-0x7f < iVal_7) {
        return CONCAT44((float)auArr_30._8_8_,(float)(auArr_30._0_8_ / auArr_35._0_8_));
      }
      dVal_19 = (auArr_30._0_8_ * 1.267650600228229e+30) / auArr_35._0_8_;
      uVal_9 = ((uint64_t)dVal_19 & 0x7fffffffffffffff) >> 0x34;
      uVal_3 = (uint)(((uint64_t)dVal_19 & 0x7fffffffffffffff) >> 0x34);
      if (uVal_3 < 0x65) {
        if ((int)(0x65 - uVal_3) < 0x37) {
          uVal_9 = ((uint64_t)dVal_19 & 0x1fffffffffffff | 0x10000000000000) >>
                  (100U - (char)uVal_9 & 0x3f);
          uVal_9 = (uVal_9 >> 1) + (uint64_t)((uint)uVal_9 & 1);
        }
        else {
          uVal_9 = 0;
        }
      }
      else {
        uVal_9 = uVal_9 - 100 << 0x34 | (uint64_t)dVal_19 & 0xfffffffffffff;
      }
      auArr_30._8_8_ = 0;
      auArr_30._0_8_ = (uint64_t)dVal_19 & 0x8000000000000000 | uVal_9;
      if ((uVal_9 & 0x7ff0000000000000) == 0) {
        func_0x1806a2410(0x30);
      }
      goto LAB_180688f92;
    }
    if ((iVal_7 < -0x1a) && ((int64_t)auArr_37._0_8_ < 0)) goto joined_r0x000180688e34;
    if ((((uint64_t)auArr_33._0_8_ & 0x7fffffffffffffff) == 0x7ff0000000000000) &&
       (uVal_9 == 0x7ff0000000000000)) {
      func_0x1806a2410(0x20);
      if (-1 < (int64_t)auArr_37._0_8_) {
        if ((int64_t)auArr_33._0_8_ < 0) {
          return (uint64_t)DAT_1806b6750;
        }
        return (uint64_t)DAT_1806e5510;
      }
      if ((int64_t)auArr_33._0_8_ < 0) {
        return (uint64_t)DAT_1806e5560;
      }
      return (uint64_t)DAT_1806e5550;
    }
    uVal_3 = (uint)DAT_1806c90f0;
    uVal_28 = (uint)(DAT_1806c90f0 >> 0x20);
    auArr_34 = auArr_35;
    if ((int64_t)auArr_37._0_8_ < 0) {
      auArr_34._0_4_ = auArr_35._0_4_ ^ uVal_3;
      auArr_34._4_4_ = auArr_35._4_4_ ^ uVal_28;
      auArr_34._8_4_ = auArr_35._8_4_;
      auArr_34._12_4_ = auArr_35._12_4_;
    }
    dVal_19 = auArr_34._0_8_;
    auArr_31 = auArr_30;
    if ((int64_t)auArr_33._0_8_ < 0) {
      auArr_31._0_4_ = auArr_30._0_4_ ^ uVal_3;
      auArr_31._4_4_ = auArr_30._4_4_ ^ uVal_28;
      auArr_31._8_4_ = auArr_30._8_4_;
      auArr_31._12_4_ = auArr_30._12_4_;
    }
    dVal_29 = auArr_31._0_8_;
    dVal_23 = dVal_19;
    if (dVal_19 < dVal_29) {
      auArr_31 = auArr_34;
      dVal_23 = dVal_29;
    }
    dVal_24 = auArr_31._0_8_;
    dVal_25 = dVal_24 / dVal_23;
    if (dVal_25 <= DAT_1806e5518) {
      if (dVal_25 < DAT_1806e5508) goto LAB_18068911b;
      dVal_23 = dVal_25 * dVal_25;
      auArr_15._8_8_ = 0;
      auArr_15._0_8_ = DAT_1806e5538;
      auArr_15._16_16_ = in_YMM0._16_16_;
      auArr_14._8_24_ = auArr_15._8_24_;
      auArr_14._0_8_ =
           (DAT_1806e5538 - (DAT_1806e5528 - dVal_23 * DAT_1806e5520) * dVal_23) * dVal_23 * dVal_25;
    }
    else {
      uVal_4 = (uint)(dVal_25 * DAT_1806e5558 + DAT_1806e5540);
      dVal_25 = (double)(uint64_t)uVal_4;
      dVal_23 = (dVal_24 * DAT_1806e5558 - dVal_25 * dVal_23) /
               (dVal_25 * dVal_24 + dVal_23 * DAT_1806e5558);
      auArr_13._8_4_ = auArr_31._8_4_;
      auArr_13._0_8_ = dVal_23;
      auArr_13._12_4_ = auArr_31._12_4_;
      auArr_13._16_16_ = in_YMM0._16_16_;
      dVal_25 = dVal_23 + *(double *)(&DAT_1806e4d60 + (uint64_t)(uVal_4 - 0x10) * 8);
      auArr_14._8_24_ = auArr_13._8_24_;
      auArr_14._0_8_ = dVal_23 * dVal_23 * dVal_23 * DAT_1806e5530;
    }
    in_YMM0._16_16_ = auArr_14._16_16_;
    dVal_25 = dVal_25 - auArr_14._0_8_;
LAB_18068911b:
    if (dVal_19 < dVal_29) {
      dVal_25 = DAT_1806e5548 - dVal_25;
    }
    if ((int64_t)auArr_37._0_8_ < 0) {
      dVal_25 = DAT_1806b55d8 - dVal_25;
    }
    if ((int64_t)auArr_33._0_8_ < 0) {
      dVal_25 = (double)CONCAT44((uint)((uint64_t)dVal_25 >> 0x20) ^ uVal_28,SUB84(dVal_25,0) ^ uVal_3);
    }
    auArr_16._0_16_ = ZEXT816(0);
    auArr_16._16_16_ = in_YMM0._16_16_;
    auArr_17._4_28_ = auArr_16._4_28_;
    auArr_17._0_4_ = (float)dVal_25;
    return auArr_17._0_8_;
  }
  auArr_2 = vxorpd_avx(in_YMM2._0_16_,in_YMM2._0_16_);
  auArr_35 = vcvtss2sd_avx(auArr_27,auArr_27);
  auArr_11._8_8_ = auArr_2._8_8_;
  auArr_11._0_8_ = auArr_35._0_8_;
  uVal_8 = vmovq_avx(auArr_11);
  auArr_11 = in_YMM0._0_16_;
  in_YMM0._16_16_ = vcvtss2sd_avx(auArr_11,auArr_11);
  auArr_26._8_8_ = auArr_2._8_8_;
  auArr_26._0_8_ = SUB168(in_YMM0._16_16_,0);
  uVal_9 = vmovq_avx(auArr_26);
  iVal_7 = ((uint)(uVal_9 >> 0x34) & 0x7ff) - ((uint)(uVal_8 >> 0x34) & 0x7ff);
  uVal_10 = uVal_8 & 0x7fffffffffffffff;
  uVal_6 = uVal_9 & 0x7fffffffffffffff;
  if ((0x7ff0000000000000 < uVal_10) || (auArr_27 = auArr_11, 0x7ff0000000000000 < uVal_6)) {
    in_YMM0._16_16_ = vxorps_avx(auArr_11,auArr_11);
    auArr_27 = vmovss_avx(in_YMM0._16_16_,auArr_27);
    uVal_5 = vmovd_avx(auArr_27);
    uVal_9 = func_0x1806a90d0(uVal_5,auArr_27._0_8_,auArr_2._0_8_);
    return uVal_9;
  }
  if (uVal_6 == 0) {
    if (-1 < (int64_t)uVal_8) {
      auArr_27 = vcvtsd2ss_avx(in_YMM0._16_16_,in_YMM0._16_16_);
      return auArr_27._0_8_;
    }
LAB_1806a2959:
    func_0x1806a2410(0x20);
    if ((int64_t)uVal_9 < 0) {
      auArr_27 = vmovss_avx(DAT_1806b2868);
      uVal_9 = auArr_27._0_8_;
    }
    else {
      auArr_27 = vmovss_avx(DAT_1806b2864);
      uVal_9 = auArr_27._0_8_;
    }
  }
  else {
    if ((uVal_10 != 0) || (func_0x1806a2410(), -1 < (int64_t)uVal_9)) {
      if (iVal_7 < 0x1b) {
        if ((iVal_7 < -0xd) && (-1 < (int64_t)uVal_8)) {
          if (-0x97 < iVal_7) {
            if (iVal_7 < -0x7e) {
              auArr_27 = vmovq_avx(0x4630000000000000);
              auArr_27 = vmulsd_avx(auArr_27,in_YMM0._16_16_);
              auArr_27 = vdivsd_avx(auArr_27,auArr_35);
              uVal_6 = vmovq_avx(auArr_27);
              uVal_9 = (uVal_6 & 0x7fffffffffffffff) >> 0x34;
              uVal_3 = (uint)((uVal_6 & 0x7fffffffffffffff) >> 0x34);
              if (uVal_3 < 0x65) {
                if ((int)(0x65 - uVal_3) < 0x37) {
                  uVal_9 = (uVal_6 & 0x1fffffffffffff | 0x10000000000000) >> (100 - uVal_9 & 0x3f);
                  uVal_9 = (uVal_9 >> 1) + (uint64_t)((uint)uVal_9 & 1);
                }
                else {
                  uVal_9 = 0;
                }
              }
              else {
                uVal_9 = uVal_9 - 100 << 0x34 | uVal_6 & 0xfffffffffffff;
              }
              auArr_27 = vmovq_avx(uVal_6 & 0x8000000000000000 | uVal_9);
              if ((uVal_9 & 0x7ff0000000000000) == 0) {
                func_0x1806a2410(0x30);
              }
              auArr_27 = vcvtsd2ss_avx(auArr_27,auArr_27);
              return auArr_27._0_8_;
            }
            auArr_27 = vdivsd_avx(in_YMM0._16_16_,auArr_35);
            auArr_27 = vcvtsd2ss_avx(auArr_27,auArr_27);
            return auArr_27._0_8_;
          }
          auArr_18._0_8_ = func_0x1806a2410(0x30);
          auArr_18._8_24_ = extraout_var;
          if ((int64_t)uVal_9 < 0) {
            auArr_27 = vmovss_avx(DAT_1806b5bf0);
            return auArr_27._0_8_;
          }
          auArr_27 = vxorps_avx(auArr_18._0_16_,auArr_18._0_16_);
          return auArr_27._0_8_;
        }
        if ((-0x1b < iVal_7) || (-1 < (int64_t)uVal_8)) {
          if ((uVal_6 != 0x7ff0000000000000) || (uVal_10 != 0x7ff0000000000000)) {
            auArr_27._8_8_ = 0;
            auArr_27._0_8_ = DAT_1806c90f0;
            if ((int64_t)uVal_8 < 0) {
              auArr_35 = vxorpd_avx(auArr_35,auArr_27);
            }
            if ((int64_t)uVal_9 < 0) {
              vxorpd_avx(in_YMM0._16_16_,auArr_27);
            }
            auArr_2 = vcomisd_avx(auArr_35);
            in_YMM0._16_16_ = vmovd_avx(0);
            auArr_11 = vmovd_avx(0);
            auArr_21._0_8_ = -(uint64_t)(auArr_11._0_8_ == SUB168(in_YMM0._16_16_,0));
            auArr_21._8_8_ = -(uint64_t)(auArr_11._8_8_ == SUB168(in_YMM0._16_16_,8));
            in_YMM0._16_16_ = vblendvpd_avx(auArr_35,auArr_2,auArr_21);
            auArr_11 = vmovd_avx(0);
            auArr_26 = vmovd_avx(0);
            auArr_22._0_8_ = -(uint64_t)(auArr_26._0_8_ == auArr_11._0_8_);
            auArr_22._8_8_ = -(uint64_t)(auArr_26._8_8_ == auArr_11._8_8_);
            auArr_35 = vblendvpd_avx(auArr_2,auArr_35,auArr_22);
            vdivsd_avx(in_YMM0._16_16_,auArr_35);
            auArr_35._8_8_ = 0;
            auArr_35._0_8_ = DAT_1806e5518;
            in_YMM0._16_16_ = vcomisd_avx(auArr_35);
            vcomisd_avx(in_YMM0._16_16_);
            auArr_35 = vmulsd_avx(in_YMM0._16_16_,in_YMM0._16_16_);
            auArr_2._8_8_ = 0;
            auArr_2._0_8_ = DAT_1806e5528;
            auArr_20._8_8_ = 0;
            auArr_20._0_8_ = DAT_1806e5520;
            auArr_2 = vfnmadd213sd_fma(auArr_20,auArr_35,auArr_2);
            auArr_1._8_8_ = 0;
            auArr_1._0_8_ = DAT_1806e5538;
            auArr_2 = vfnmadd213sd_fma(auArr_2,auArr_35,auArr_1);
            auArr_35 = vmulsd_avx(auArr_35,in_YMM0._16_16_);
            in_YMM0._16_16_ = vfnmadd231sd_fma(in_YMM0._16_16_,auArr_35,auArr_2);
            if ((int64_t)uVal_8 < 0) {
              auArr_12._8_8_ = 0;
              auArr_12._0_8_ = DAT_1806b55d8;
              in_YMM0._16_16_ = vsubsd_avx(auArr_12,in_YMM0._16_16_);
            }
            if ((int64_t)uVal_9 < 0) {
              in_YMM0._16_16_ = vxorpd_avx(in_YMM0._16_16_,auArr_27);
            }
            auArr_27 = vcvtsd2ss_avx(in_YMM0._16_16_,in_YMM0._16_16_);
            return auArr_27._0_8_;
          }
          func_0x1806a2410(0x20);
          if (-1 < (int64_t)uVal_8) {
            if ((int64_t)uVal_9 < 0) {
              auArr_27 = vmovss_avx(DAT_1806b6750);
              return auArr_27._0_8_;
            }
            auArr_27 = vmovss_avx(DAT_1806e5510);
            return auArr_27._0_8_;
          }
          if ((int64_t)uVal_9 < 0) {
            auArr_27 = vmovss_avx(DAT_1806e5560);
            return auArr_27._0_8_;
          }
          auArr_27 = vmovss_avx(DAT_1806e5550);
          return auArr_27._0_8_;
        }
        goto LAB_1806a2959;
      }
      func_0x1806a2410(0x20);
      if (-1 < (int64_t)uVal_9) {
        auArr_27 = vmovss_avx(DAT_1806e4d48);
        return auArr_27._0_8_;
      }
    }
    auArr_27 = vmovss_avx(DAT_1806e4d50);
    uVal_9 = auArr_27._0_8_;
  }
  return uVal_9;
}

// func_0x18068917c
uint func_0x18068917c(int param_1,uint param_2,_locale_t param_3)
{
  int64_t lVal_1;
  uint uVal_2;
  
  uVal_2 = 0;
  if (param_3 == (_locale_t)0x0) {
    lVal_1 = func_0x18067e4b8();
    if (param_1 + 1U < 0x101) {
      uVal_2 = *(ushort *)(lVal_1 + (int64_t)param_1 * 2) & param_2;
    }
  }
  else if (param_1 + 1U < 0x101) {
    uVal_2 = *(ushort *)(*(int64_t *)param_3->locinfo + (int64_t)param_1 * 2) & param_2;
  }
  else if ((int)param_3->locinfo->lc_collate_cp < 2) {
    uVal_2 = 0;
  }
  else {
    uVal_2 = _isctype_l(param_1,param_2,param_3);
  }
  return uVal_2;
}

// func_0x1806891f4
uint32_t func_0x1806891f4(uint64_t param_1)
{
  uint32_t uVal_1;
  int64_t lVal_2;
  uint64_t local_58;
  uint64_t local_50;
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
  local_50 = 0;
  local_58 = param_1;
  uVal_1 = func_0x18068990c(local_48,&local_58,10,1);
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

// func_0x1806892a4
uint32_t func_0x1806892a4(uint64_t param_1)
{
  uint32_t uVal_1;
  int64_t lVal_2;
  uint64_t local_58;
  uint64_t local_50;
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
  local_50 = 0;
  local_58 = param_1;
  uVal_1 = func_0x180689354(local_48,&local_58,10,1);
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

// func_0x180689354
uint func_0x180689354(int64_t param_1,char **param_2,uint param_3,uint param_4)
{
  char ch_1;
  char *fnPtr_2;
  char *fnPtr_3;
  char **ptr2_Char_4;
  int iVal_5;
  uint uVal_6;
  uint uVal_7;
  uint32_t *pU64_8;
  uint uVal_9;
  uint64_t uVal_10;
  uint uVal_11;
  uint64_t uVal_12;
  char ch_13;
  
  fnPtr_2 = *param_2;
  uVal_12 = (uint64_t)param_3;
  if (fnPtr_2 == (char *)0x0) {
    pU64_8 = (uint32_t *)func_0x1806823dc();
    *pU64_8 = 0x16;
    func_0x180684970();
LAB_1806893c9:
    if ((char **)param_2[1] != (char **)0x0) {
      *(char **)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(uint8_t *)(param_1 + 0x30) = 1;
    *(uint32_t *)(param_1 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_1);
    goto LAB_1806893c9;
  }
  ch_13 = *fnPtr_2;
  *param_2 = fnPtr_2 + 1;
  if (*(char *)(param_1 + 0x28) == '\0') {
    func_0x18067e970();
  }
  while (iVal_5 = func_0x18068917c(ch_13,8,param_1 + 0x18), iVal_5 != 0) {
    ch_13 = **param_2;
    *param_2 = *param_2 + 1;
  }
  uVal_11 = param_4 & 0xff | 2;
  if (ch_13 != '-') {
    uVal_11 = param_4 & 0xff;
  }
  if ((ch_13 - 0x2bU & 0xfd) == 0) {
    ch_13 = **param_2;
    *param_2 = *param_2 + 1;
  }
  if ((param_3 & 0xffffffef) == 0) {
    if ((byte)(ch_13 - 0x30U) < 10) {
      iVal_5 = ch_13 + -0x30;
LAB_180689479:
      if (iVal_5 != 0) goto LAB_1806894ca;
      fnPtr_3 = *param_2;
      ch_1 = *fnPtr_3;
      *param_2 = fnPtr_3 + 1;
      if ((ch_1 + 0xa8U & 0xdf) != 0) {
        *param_2 = fnPtr_3;
        uVal_6 = 8;
        if (param_3 != 0) {
          uVal_6 = param_3;
        }
        uVal_12 = (uint64_t)uVal_6;
        if ((ch_1 != '\0') && (*fnPtr_3 != ch_1)) {
          pU64_8 = (uint32_t *)func_0x1806823dc();
          *pU64_8 = 0x16;
          func_0x180684970();
        }
        goto LAB_1806894d6;
      }
      ch_13 = fnPtr_3[1];
      *param_2 = fnPtr_3 + 2;
      uVal_6 = 0x10;
    }
    else {
      if ((byte)(ch_13 + 0x9fU) < 0x1a) {
        iVal_5 = ch_13 + -0x57;
        goto LAB_180689479;
      }
      if ((byte)(ch_13 + 0xbfU) < 0x1a) {
        iVal_5 = ch_13 + -0x37;
        goto LAB_180689479;
      }
LAB_1806894ca:
      uVal_6 = 10;
    }
    if (param_3 != 0) {
      uVal_6 = param_3;
    }
    uVal_12 = (uint64_t)uVal_6;
  }
LAB_1806894d6:
  uVal_10 = 0xffffffff % uVal_12;
  uVal_6 = 0;
  while( true ) {
    if ((byte)(ch_13 - 0x30U) < 10) {
      uVal_9 = (int)ch_13 - 0x30;
    }
    else if ((byte)(ch_13 + 0x9fU) < 0x1a) {
      uVal_9 = (int)ch_13 - 0x57;
    }
    else if ((byte)(ch_13 + 0xbfU) < 0x1a) {
      uVal_9 = (int)ch_13 - 0x37;
    }
    else {
      uVal_9 = 0xffffffff;
    }
    fnPtr_3 = *param_2;
    if ((uint)uVal_12 <= uVal_9) break;
    ch_13 = *fnPtr_3;
    uVal_7 = uVal_6 * (uint)uVal_12;
    uVal_9 = uVal_7 + uVal_9;
    uVal_10 = (uint64_t)uVal_9;
    *param_2 = fnPtr_3 + 1;
    uVal_11 = uVal_11 | (uint)(uVal_9 < uVal_7 || (uint)(0xffffffff / uVal_12) < uVal_6) << 2 | 8;
    uVal_6 = uVal_9;
  }
  *param_2 = fnPtr_3 + -1;
  if ((ch_13 != '\0') && (fnPtr_3[-1] != ch_13)) {
    pU64_8 = (uint32_t *)func_0x1806823dc(uVal_9,uVal_10);
    *pU64_8 = 0x16;
    func_0x180684970();
  }
  if ((uVal_11 & 8) == 0) {
    *param_2 = fnPtr_2;
    if ((char **)param_2[1] == (char **)0x0) {
      return 0;
    }
    *(char **)param_2[1] = fnPtr_2;
    return 0;
  }
  if ((uVal_11 & 4) == 0) {
    if ((uVal_11 & 1) == 0) {
      if ((uVal_11 & 2) == 0) goto LAB_1806895c5;
LAB_1806895e6:
      uVal_6 = -uVal_6;
      goto LAB_1806895c5;
    }
    if ((uVal_11 & 2) == 0) {
      if (uVal_6 < 0x80000000) goto LAB_1806895c5;
    }
    else if (uVal_6 < 0x80000001) goto LAB_1806895e6;
  }
  *(uint8_t *)(param_1 + 0x30) = 1;
  *(uint32_t *)(param_1 + 0x2c) = 0x22;
  uVal_6 = 0xffffffff;
  if ((uVal_11 & 1) != 0) {
    ptr2_Char_4 = (char **)param_2[1];
    if ((uVal_11 & 2) != 0) {
      if (ptr2_Char_4 != (char **)0x0) {
        *ptr2_Char_4 = *param_2;
      }
      return 0x80000000;
    }
    if (ptr2_Char_4 != (char **)0x0) {
      *ptr2_Char_4 = *param_2;
      return 0x7fffffff;
    }
    return 0x7fffffff;
  }
LAB_1806895c5:
  if ((char **)param_2[1] != (char **)0x0) {
    *(char **)param_2[1] = *param_2;
    return uVal_6;
  }
  return uVal_6;
}

// func_0x180689630
uint64_t func_0x180689630(int64_t param_1,char **param_2,uint param_3,uint param_4)
{
  char ch_1;
  char *fnPtr_2;
  char *fnPtr_3;
  char **ptr2_Char_4;
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  char ch_7;
  int iVal_8;
  uint32_t *pU64_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  uint64_t uVal_13;
  uint uVal_14;
  uint uVal_15;
  
  fnPtr_2 = *param_2;
  if (fnPtr_2 == (char *)0x0) {
    pU64_9 = (uint32_t *)func_0x1806823dc();
    *pU64_9 = 0x16;
    func_0x180684970();
LAB_1806896a5:
    if ((char **)param_2[1] != (char **)0x0) {
      *(char **)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(uint8_t *)(param_1 + 0x30) = 1;
    *(uint32_t *)(param_1 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_1);
    goto LAB_1806896a5;
  }
  ch_7 = *fnPtr_2;
  *param_2 = fnPtr_2 + 1;
  if (*(char *)(param_1 + 0x28) == '\0') {
    func_0x18067e970();
  }
  while (iVal_8 = func_0x18068917c(ch_7,8,param_1 + 0x18), iVal_8 != 0) {
    ch_7 = **param_2;
    *param_2 = *param_2 + 1;
  }
  uVal_15 = param_4 & 0xff | 2;
  if (ch_7 != '-') {
    uVal_15 = param_4 & 0xff;
  }
  if ((ch_7 - 0x2bU & 0xfd) == 0) {
    ch_7 = **param_2;
    *param_2 = *param_2 + 1;
  }
  uVal_14 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_1806897b7;
  if ((byte)(ch_7 - 0x30U) < 10) {
    iVal_8 = ch_7 + -0x30;
LAB_18068975a:
    if (iVal_8 != 0) goto LAB_1806897ab;
    fnPtr_3 = *param_2;
    ch_1 = *fnPtr_3;
    *param_2 = fnPtr_3 + 1;
    if ((ch_1 + 0xa8U & 0xdf) != 0) {
      *param_2 = fnPtr_3;
      uVal_14 = 8;
      if (param_3 != 0) {
        uVal_14 = param_3;
      }
      if ((ch_1 != '\0') && (*fnPtr_3 != ch_1)) {
        pU64_9 = (uint32_t *)func_0x1806823dc();
        *pU64_9 = 0x16;
        func_0x180684970();
      }
      goto LAB_1806897b7;
    }
    ch_7 = fnPtr_3[1];
    *param_2 = fnPtr_3 + 2;
    uVal_14 = 0x10;
  }
  else {
    if ((byte)(ch_7 + 0x9fU) < 0x1a) {
      iVal_8 = ch_7 + -0x57;
      goto LAB_18068975a;
    }
    if ((byte)(ch_7 + 0xbfU) < 0x1a) {
      iVal_8 = ch_7 + -0x37;
      goto LAB_18068975a;
    }
LAB_1806897ab:
    uVal_14 = 10;
  }
  if (param_3 != 0) {
    uVal_14 = param_3;
  }
LAB_1806897b7:
  auArr_5._8_8_ = 0;
  auArr_5._0_8_ = (int64_t)(int)uVal_14;
  auArr_6 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff);
  uVal_12 = SUB168(auArr_6 % auArr_5,0);
  uVal_13 = 0;
  while( true ) {
    if ((byte)(ch_7 - 0x30U) < 10) {
      uVal_11 = (uint64_t)((int)ch_7 - 0x30);
    }
    else if ((byte)(ch_7 + 0x9fU) < 0x1a) {
      uVal_11 = (uint64_t)((int)ch_7 - 0x57);
    }
    else if ((byte)(ch_7 + 0xbfU) < 0x1a) {
      uVal_11 = (uint64_t)((int)ch_7 - 0x37);
    }
    else {
      uVal_11 = 0xffffffff;
    }
    fnPtr_3 = *param_2;
    if (uVal_14 <= (uint)uVal_11) break;
    ch_7 = *fnPtr_3;
    uVal_10 = (int64_t)(int)uVal_14 * uVal_13;
    uVal_12 = uVal_11 + uVal_10;
    *param_2 = fnPtr_3 + 1;
    uVal_15 = uVal_15 | (uint)(uVal_12 < uVal_10 || SUB168(auArr_6 / auArr_5,0) < uVal_13) << 2 | 8;
    uVal_13 = uVal_12;
  }
  *param_2 = fnPtr_3 + -1;
  if ((ch_7 != '\0') && (fnPtr_3[-1] != ch_7)) {
    pU64_9 = (uint32_t *)func_0x1806823dc(uVal_11,uVal_12);
    *pU64_9 = 0x16;
    func_0x180684970();
  }
  if ((uVal_15 & 8) == 0) {
    *param_2 = fnPtr_2;
    if ((char **)param_2[1] == (char **)0x0) {
      return 0;
    }
    *(char **)param_2[1] = fnPtr_2;
    return 0;
  }
  ch_7 = func_0x18068a0a8(uVal_15,uVal_13);
  if (ch_7 == '\0') {
    if ((uVal_15 & 2) != 0) {
      uVal_13 = -uVal_13;
    }
  }
  else {
    *(uint8_t *)(param_1 + 0x30) = 1;
    *(uint32_t *)(param_1 + 0x2c) = 0x22;
    if ((uVal_15 & 1) != 0) {
      ptr2_Char_4 = (char **)param_2[1];
      if ((uVal_15 & 2) == 0) {
        if (ptr2_Char_4 != (char **)0x0) {
          *ptr2_Char_4 = *param_2;
        }
        return 0x7fffffffffffffff;
      }
      if (ptr2_Char_4 != (char **)0x0) {
        *ptr2_Char_4 = *param_2;
      }
      return 0x8000000000000000;
    }
    uVal_13 = 0xffffffffffffffff;
  }
  if ((char **)param_2[1] != (char **)0x0) {
    *(char **)param_2[1] = *param_2;
    return uVal_13;
  }
  return uVal_13;
}

// func_0x18068990c
uint func_0x18068990c(int64_t param_1,wint_t **param_2,uint param_3,uint param_4)
{
  wint_t wVar1;
  wint_t *pWStr_2;
  wint_t *pWStr_3;
  wint_t **ptr2_WStr_4;
  int iVal_5;
  uint uVal_6;
  uint32_t *pU64_7;
  uint64_t uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint64_t uVal_11;
  wint_t _C;
  uint uVal_12;
  int local_a8;
  
  pWStr_2 = *param_2;
  uVal_8 = (uint64_t)param_3;
  if (pWStr_2 == (wint_t *)0x0) {
    pU64_7 = (uint32_t *)func_0x1806823dc();
    *pU64_7 = 0x16;
    func_0x180684970();
LAB_180689989:
    if ((wint_t **)param_2[1] != (wint_t **)0x0) {
      *(wint_t **)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(uint8_t *)(param_1 + 0x30) = 1;
    *(uint32_t *)(param_1 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_1);
    goto LAB_180689989;
  }
  _C = *pWStr_2;
  *param_2 = pWStr_2 + 1;
  if (*(char *)(param_1 + 0x28) == '\0') {
    func_0x18067e970();
  }
  while (iVal_5 = iswctype(_C,8), iVal_5 != 0) {
    _C = **param_2;
    *param_2 = *param_2 + 1;
  }
  uVal_12 = param_4 & 0xff | 2;
  if (_C != 0x2d) {
    uVal_12 = param_4 & 0xff;
  }
  if ((_C - 0x2b & 0xfffd) == 0) {
    _C = **param_2;
    *param_2 = *param_2 + 1;
  }
  local_a8 = 0xae6;
  if ((param_3 & 0xffffffef) != 0) goto LAB_180689d79;
  if (_C < 0x30) goto LAB_180689cca;
  iVal_5 = 0x30;
  if (_C < 0x3a) {
LAB_180689b0f:
    iVal_5 = (uint)_C - iVal_5;
LAB_180689cc5:
    if (iVal_5 == -1) goto LAB_180689cca;
LAB_180689cf0:
    if (iVal_5 != 0) goto LAB_180689d6a;
    pWStr_3 = *param_2;
    wVar1 = *pWStr_3;
    *param_2 = pWStr_3 + 1;
    if ((wVar1 - 0x58 & 0xffdf) != 0) {
      *param_2 = pWStr_3;
      uVal_8 = 8;
      if (param_3 != 0) {
        uVal_8 = (uint64_t)param_3;
      }
      if ((wVar1 != 0) && (*pWStr_3 != wVar1)) {
        pU64_7 = (uint32_t *)func_0x1806823dc();
        *pU64_7 = 0x16;
        func_0x180684970();
      }
      goto LAB_180689d79;
    }
    _C = pWStr_3[1];
    *param_2 = pWStr_3 + 2;
    uVal_8 = 0x10;
  }
  else {
    if (_C < 0xff10) {
      if (0x65f < _C) {
        if (_C < 0x66a) {
          iVal_5 = _C - 0x660;
          goto LAB_180689cc5;
        }
        if (0x6ef < _C) {
          if (_C < 0x6fa) {
            iVal_5 = _C - 0x6f0;
            goto LAB_180689cc5;
          }
          if (0x965 < _C) {
            if (_C < 0x970) {
              iVal_5 = _C - 0x966;
              goto LAB_180689cc5;
            }
            if (0x9e5 < _C) {
              if (_C < 0x9f0) {
                iVal_5 = _C - 0x9e6;
                goto LAB_180689cc5;
              }
              if (0xa65 < _C) {
                if (_C < 0xa70) {
                  iVal_5 = _C - 0xa66;
                  goto LAB_180689cc5;
                }
                if ((0xae5 < _C) &&
                   ((iVal_5 = local_a8, _C < 0xaf0 ||
                    ((iVal_5 = 0xb66, 0xb65 < _C &&
                     ((_C < 0xb70 ||
                      ((iVal_5 = 0xc66, 0xc65 < _C &&
                       ((_C < 0xc70 ||
                        ((iVal_5 = 0xce6, 0xce5 < _C &&
                         ((_C < 0xcf0 ||
                          ((iVal_5 = 0xd66, 0xd65 < _C &&
                           ((_C < 0xd70 ||
                            ((iVal_5 = 0xe50, 0xe4f < _C &&
                             ((_C < 0xe5a ||
                              ((iVal_5 = 0xed0, 0xecf < _C &&
                               ((_C < 0xeda ||
                                ((iVal_5 = 0xf20, 0xf1f < _C &&
                                 ((_C < 0xf2a ||
                                  ((iVal_5 = 0x1040, 0x103f < _C &&
                                   ((_C < 0x104a ||
                                    ((iVal_5 = 0x17e0, 0x17df < _C &&
                                     ((_C < 0x17ea || (iVal_5 = 0x1810, (ushort)(_C + 0xe7f0) < 10)))
                                     ))))))))))))))))))))))))))))))))))))) goto LAB_180689b0f;
              }
            }
          }
        }
      }
    }
    else if (_C < 0xff1a) {
      iVal_5 = _C - 0xff10;
      goto LAB_180689cc5;
    }
LAB_180689cca:
    uVal_9 = (uint)_C;
    if ((_C - 0x41 < 0x1a) || (_C - 0x61 < 0x1a)) {
      if (_C - 0x61 < 0x1a) {
        uVal_9 = _C - 0x20;
      }
      iVal_5 = uVal_9 - 0x37;
      goto LAB_180689cf0;
    }
LAB_180689d6a:
    uVal_8 = 10;
  }
  if (param_3 != 0) {
    uVal_8 = (uint64_t)param_3;
  }
LAB_180689d79:
  uVal_11 = 0xffffffff % uVal_8;
  uVal_9 = 0;
  do {
    if (_C < 0x30) goto LAB_180689f46;
    if (_C < 0x3a) {
      uVal_10 = _C - 0x30;
LAB_180689f41:
      if (uVal_10 == 0xffffffff) goto LAB_180689f46;
    }
    else {
      if (_C < 0xff10) {
        if (0x65f < _C) {
          if (_C < 0x66a) {
            uVal_10 = _C - 0x660;
            goto LAB_180689f41;
          }
          if (0x6ef < _C) {
            if (_C < 0x6fa) {
              uVal_10 = _C - 0x6f0;
              goto LAB_180689f41;
            }
            if (0x965 < _C) {
              iVal_5 = 0x966;
              if (_C < 0x970) {
LAB_180689e0d:
                uVal_10 = (uint)_C - iVal_5;
                goto LAB_180689f41;
              }
              if (0x9e5 < _C) {
                iVal_5 = 0x9e6;
                if (_C < 0x9f0) goto LAB_180689e0d;
                if (0xa65 < _C) {
                  iVal_5 = 0xa66;
                  if (_C < 0xa70) goto LAB_180689e0d;
                  if (0xae5 < _C) {
                    iVal_5 = local_a8;
                    if (_C < 0xaf0) goto LAB_180689e0d;
                    iVal_5 = 0xb66;
                    if (0xb65 < _C) {
                      if (_C < 0xb70) goto LAB_180689e0d;
                      iVal_5 = 0xc66;
                      if (0xc65 < _C) {
                        if (_C < 0xc70) goto LAB_180689e0d;
                        iVal_5 = 0xce6;
                        if (0xce5 < _C) {
                          if (_C < 0xcf0) goto LAB_180689e0d;
                          iVal_5 = 0xd66;
                          if (0xd65 < _C) {
                            if (_C < 0xd70) goto LAB_180689e0d;
                            iVal_5 = 0xe50;
                            if (0xe4f < _C) {
                              if (_C < 0xe5a) goto LAB_180689e0d;
                              iVal_5 = 0xed0;
                              if (0xecf < _C) {
                                if (_C < 0xeda) goto LAB_180689e0d;
                                iVal_5 = 0xf20;
                                if (0xf1f < _C) {
                                  if (_C < 0xf2a) goto LAB_180689e0d;
                                  iVal_5 = 0x1040;
                                  if (0x103f < _C) {
                                    if (_C < 0x104a) goto LAB_180689e0d;
                                    iVal_5 = 0x17e0;
                                    if (0x17df < _C) {
                                      if (_C < 0x17ea) goto LAB_180689e0d;
                                      uVal_11 = 0x1810;
                                      if ((ushort)(_C + 0xe7f0) < 10) {
                                        uVal_10 = _C - 0x1810;
                                        goto LAB_180689f41;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (_C < 0xff1a) {
        uVal_10 = _C - 0xff10;
        goto LAB_180689f41;
      }
LAB_180689f46:
      uVal_10 = (uint)_C;
      if (((_C < 0x41) || (0x5a < _C)) && ((uVal_10 < 0x61 || (0x7a < _C)))) {
        uVal_10 = 0xffffffff;
      }
      else {
        if ((ushort)(_C - 0x61) < 0x1a) {
          uVal_10 = uVal_10 - 0x20;
        }
        uVal_10 = uVal_10 - 0x37;
      }
    }
    pWStr_3 = *param_2;
    if ((uint)uVal_8 <= uVal_10) break;
    _C = *pWStr_3;
    uVal_6 = uVal_9 * (uint)uVal_8;
    uVal_10 = uVal_6 + uVal_10;
    uVal_11 = (uint64_t)uVal_10;
    *param_2 = pWStr_3 + 1;
    uVal_12 = uVal_12 | (uint)(uVal_10 < uVal_6 || (uint)(0xffffffff / uVal_8) < uVal_9) << 2 | 8;
    uVal_9 = uVal_10;
  } while( true );
  *param_2 = pWStr_3 + -1;
  if ((_C != 0) && (pWStr_3[-1] != _C)) {
    pU64_7 = (uint32_t *)func_0x1806823dc(uVal_10,uVal_11);
    *pU64_7 = 0x16;
    func_0x180684970();
  }
  if ((uVal_12 & 8) == 0) {
    *param_2 = pWStr_2;
    if ((wint_t **)param_2[1] == (wint_t **)0x0) {
      return 0;
    }
    *(wint_t **)param_2[1] = pWStr_2;
    return 0;
  }
  if ((uVal_12 & 4) == 0) {
    if ((uVal_12 & 1) == 0) {
      if ((uVal_12 & 2) == 0) goto LAB_18068a043;
LAB_18068a062:
      uVal_9 = -uVal_9;
      goto LAB_18068a043;
    }
    if ((uVal_12 & 2) == 0) {
      if (uVal_9 < 0x80000000) goto LAB_18068a043;
    }
    else if (uVal_9 < 0x80000001) goto LAB_18068a062;
  }
  *(uint8_t *)(param_1 + 0x30) = 1;
  *(uint32_t *)(param_1 + 0x2c) = 0x22;
  if ((uVal_12 & 1) != 0) {
    ptr2_WStr_4 = (wint_t **)param_2[1];
    if ((uVal_12 & 2) != 0) {
      if (ptr2_WStr_4 != (wint_t **)0x0) {
        *ptr2_WStr_4 = *param_2;
      }
      return 0x80000000;
    }
    if (ptr2_WStr_4 != (wint_t **)0x0) {
      *ptr2_WStr_4 = *param_2;
      return 0x7fffffff;
    }
    return 0x7fffffff;
  }
  uVal_9 = 0xffffffff;
LAB_18068a043:
  if ((wint_t **)param_2[1] != (wint_t **)0x0) {
    *(wint_t **)param_2[1] = *param_2;
    return uVal_9;
  }
  return uVal_9;
}

// func_0x18068a0a8
uint64_t func_0x18068a0a8(byte param_1,uint64_t param_2)
{
  if ((param_1 & 4) != 0) {
    return 1;
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 2) == 0) {
      return CONCAT71(0x7fffffffffffff,0x7fffffffffffffff < param_2);
    }
    if (0x8000000000000000 < param_2) {
      return 1;
    }
  }
  return 0;
}

// _calloc_base
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

// func_0x18068a0e8
uint64_t func_0x18068a0e8(void)
{
  BOOL BVar1;
  uint64_t uVal_2;
  int64_t lVal_3;
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_1808429c8 != -1) {
    local_res8[0].QuadPart = 0;
    BVar1 = QueryPerformanceCounter(local_res8);
    if ((BVar1 != 0) && (lVal_3 = local_res8[0].QuadPart - DAT_1808429c8, -1 < lVal_3)) {
      uVal_2 = ((lVal_3 % DAT_1808429c0) * 1000) / DAT_1808429c0 + (lVal_3 / DAT_1808429c0) * 1000;
      if ((int64_t)uVal_2 < 0x80000000) {
        return uVal_2 & 0xffffffff;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

// func_0x18068a470
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x18068a470(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
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
  uint8_t auArr_15 [16];
  uint8_t auArr_16 [16];
  uint8_t auArr_17 [16];
  uint8_t auArr_18 [16];
  uint uVal_19;
  uint64_t uVal_20;
  double dVal_21;
  uint8_t auArr_23 [16];
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVal_22;
  uint8_t auArr_24 [32];
  uint8_t auArr_25 [32];
  uint8_t auArr_26 [32];
  uint8_t auArr_27 [32];
  uint8_t extraout_var [24];
  uint8_t auArr_28 [32];
  uint8_t auArr_29 [32];
  uint8_t in_YMM0 [32];
  uint8_t extraout_var_00 [24];
  uint8_t extraout_var_01 [24];
  uint8_t auArr_32 [16];
  uint8_t auArr_33 [16];
  uint8_t auArr_34 [16];
  double dVal_35;
  double dVal_36;
  uint8_t auArr_30 [32];
  uint8_t auArr_31 [32];
  
  auArr_24._8_24_ = in_YMM0._8_24_;
  auArr_25._16_16_ = in_YMM0._16_16_;
  if (DAT_180843124 != 0) {
    auArr_23 = in_YMM0._0_16_;
    uVal_19 = vmovd_avx(auArr_23);
    uVal_19 = uVal_19 & 0x7fffffff;
    if (0x7f7fffff < uVal_19) {
      uVal_22 = func_0x1806a3100();
      return uVal_22;
    }
    auArr_14 = vcvtss2sd_avx(auArr_23,auArr_23);
    uVal_20 = vmovq_avx(auArr_14);
    if (0x3f490fdb < uVal_19) {
      auArr_23 = vmovq_avx(uVal_20 & 0x7fffffffffffffff);
      if (uVal_19 < 0x4f490fdb) {
        auArr_15 = vandpd_avx(auArr_23,_DAT_1806e5700);
        auArr_13._8_8_ = _UNK_1806e5678;
        auArr_13._0_8_ = DAT_1806e5670;
        auArr_14._8_8_ = 0;
        auArr_14._0_8_ = DAT_1806e5660;
        auArr_14 = vfmadd213sd_fma(auArr_13,auArr_15,auArr_14);
        auArr_14 = vcvttpd2dq_avx(auArr_14);
        auArr_15 = vpmovsxdq_avx(auArr_14);
        auArr_14 = vandpd_avx(auArr_15,_DAT_1806e5710);
        auArr_15 = vshufps_avx(auArr_15,auArr_15,8);
        auArr_13 = vcvtdq2pd_avx(auArr_15);
        auArr_15._8_8_ = 0;
        auArr_15._0_8_ = DAT_1806e56a0;
        auArr_16 = vfnmadd231sd_fma(auArr_23,auArr_13,auArr_15);
        auArr_23._8_8_ = 0;
        auArr_23._0_8_ = DAT_1806e56b0;
        auArr_15 = vmulsd_avx(auArr_13,auArr_23);
        auArr_23 = vsubsd_avx(auArr_16,auArr_15);
        auArr_13 = vsubsd_avx(auArr_16,auArr_23);
        vsubsd_avx(auArr_13,auArr_15);
        uVal_20 = vmovq_avx(auArr_14);
      }
      else {
        auArr_23 = vmovq_avx(uVal_20 & 0x7fffffffffffffff);
        if (uVal_19 < 0x4f490fdb) {
          uVal_20 = __remainder_piby2_fma3_bdl(auArr_23._0_8_);
          auArr_30._8_24_ = extraout_var_00;
          auArr_30._0_8_ = extraout_XMM0_Qa_00;
          auArr_23 = auArr_30._0_16_;
        }
        else {
          uVal_20 = __remainder_piby2_fma3();
          auArr_31._8_24_ = extraout_var_01;
          auArr_31._0_8_ = extraout_XMM0_Qa_01;
          auArr_23 = auArr_31._0_16_;
        }
      }
      if ((uVal_20 & 1) == 0) {
        auArr_18._8_8_ = _UNK_1806e5658;
        auArr_18._0_8_ = DAT_1806e5650;
        auArr_23 = vmulsd_avx(auArr_23,auArr_23);
        auArr_16._8_8_ = 0;
        auArr_16._0_8_ = DAT_1806e5660;
        auArr_14 = vmulsd_avx(auArr_23,auArr_16);
        auArr_14 = vsubsd_avx(auArr_18,auArr_14);
        auArr_10._8_8_ = 0;
        auArr_10._0_8_ = DAT_1806e89f0;
        auArr_34._8_8_ = 0;
        auArr_34._0_8_ = DAT_1806e89e8;
        auArr_15 = vfmadd231sd_fma(auArr_34,auArr_23,auArr_10);
        auArr_11._8_8_ = 0;
        auArr_11._0_8_ = DAT_1806e89e0;
        auArr_15 = vfmadd213sd_fma(auArr_15,auArr_23,auArr_11);
        auArr_12._8_8_ = 0;
        auArr_12._0_8_ = DAT_1806e89d8;
        auArr_15 = vfmadd213sd_fma(auArr_15,auArr_23,auArr_12);
        auArr_23 = vmulsd_avx(auArr_23,auArr_23);
        auArr_23 = vfmadd231sd_fma(auArr_14,auArr_15,auArr_23);
      }
      else {
        auArr_33._8_8_ = 0;
        auArr_33._0_8_ = DAT_1806e8a10;
        auArr_14 = vmulsd_avx(auArr_23,auArr_23);
        auArr_7._8_8_ = 0;
        auArr_7._0_8_ = DAT_1806e8a18;
        auArr_15 = vfmadd231sd_fma(auArr_33,auArr_14,auArr_7);
        auArr_8._8_8_ = 0;
        auArr_8._0_8_ = DAT_1806e8a08;
        auArr_15 = vfmadd213sd_fma(auArr_15,auArr_14,auArr_8);
        auArr_9._8_8_ = 0;
        auArr_9._0_8_ = DAT_1806e8a00;
        auArr_15 = vfmadd213sd_fma(auArr_15,auArr_14,auArr_9);
        auArr_14 = vmulsd_avx(auArr_23,auArr_14);
        auArr_23 = vfmadd231sd_fma(auArr_23,auArr_15,auArr_14);
      }
      auArr_14 = vmovq_avx((uVal_20 + 1 >> 1) << 0x3f);
      auArr_23 = vxorpd_avx(auArr_23,auArr_14);
      auArr_23 = vcvtsd2ss_avx(auArr_23,auArr_23);
      return auArr_23._0_8_;
    }
    if (0x3bffffff < uVal_19) {
      auArr_17._8_8_ = _UNK_1806e5658;
      auArr_17._0_8_ = DAT_1806e5650;
      auArr_23 = vmulsd_avx(auArr_14,auArr_14);
      auArr_3._8_8_ = 0;
      auArr_3._0_8_ = DAT_1806e5660;
      auArr_14 = vmulsd_avx(auArr_23,auArr_3);
      auArr_14 = vsubsd_avx(auArr_17,auArr_14);
      auArr_4._8_8_ = 0;
      auArr_4._0_8_ = DAT_1806e89f0;
      auArr_32._8_8_ = 0;
      auArr_32._0_8_ = DAT_1806e89e8;
      auArr_15 = vfmadd231sd_fma(auArr_32,auArr_23,auArr_4);
      auArr_5._8_8_ = 0;
      auArr_5._0_8_ = DAT_1806e89e0;
      auArr_15 = vfmadd213sd_fma(auArr_15,auArr_23,auArr_5);
      auArr_6._8_8_ = 0;
      auArr_6._0_8_ = DAT_1806e89d8;
      auArr_15 = vfmadd213sd_fma(auArr_15,auArr_23,auArr_6);
      auArr_23 = vmulsd_avx(auArr_23,auArr_23);
      auArr_23 = vfmadd231sd_fma(auArr_14,auArr_15,auArr_23);
      auArr_23 = vcvtsd2ss_avx(auArr_23,auArr_23);
      return auArr_23._0_8_;
    }
    if (uVal_19 < 0x39000000) {
      vaddss_avx(auArr_23,ZEXT416(DAT_1806e5750));
      auArr_23 = vmovd_avx(_DAT_1806e5758);
      return auArr_23._0_8_;
    }
    auArr_1._8_8_ = 0;
    auArr_1._0_8_ = DAT_1806e5660;
    auArr_23 = vmulsd_avx(auArr_14,auArr_1);
    auArr_2._8_8_ = 0;
    auArr_2._0_8_ = DAT_1806e5650;
    auArr_23 = vfnmadd213sd_fma(auArr_23,auArr_14,auArr_2);
    auArr_23 = vcvtsd2ss_avx(auArr_23,auArr_23);
    return auArr_23._0_8_;
  }
  uVal_19 = (uint)in_YMM0._0_4_ & 0x7fffffff;
  if (0x7f7fffff < uVal_19) {
    uVal_22 = func_0x1806a3100();
    return uVal_22;
  }
  auArr_24._0_8_ = (double)in_YMM0._0_4_;
  dVal_21 = (double)((uint64_t)auArr_24._0_8_ & 0x7fffffffffffffff);
  if (uVal_19 < 0x3f490fdc) {
    uVal_19 = 0;
  }
  else if (uVal_19 < 0x48f42400) {
    uVal_19 = (uint)(dVal_21 * DAT_1806e5670 + DAT_1806e5660);
    dVal_35 = (double)uVal_19;
    dVal_36 = dVal_21 - DAT_1806e56a0 * dVal_35;
    auArr_25._8_8_ = 0;
    auArr_25._0_8_ = dVal_36;
    auArr_24._8_24_ = auArr_25._8_24_;
    auArr_24._0_8_ = dVal_36 - DAT_1806e56b0 * dVal_35;
    uVal_20 = (uint64_t)((int64_t)auArr_24._0_8_ << 1) >> 0x35;
    if (0xf < (int64_t)(((uint64_t)dVal_21 >> 0x34) - uVal_20)) {
      dVal_21 = dVal_36 - DAT_1806e56c0 * dVal_35;
      auArr_26._8_8_ = 0;
      auArr_26._0_8_ = dVal_21;
      auArr_26._16_16_ = auArr_25._16_16_;
      auArr_24._8_24_ = auArr_26._8_24_;
      auArr_24._0_8_ =
           dVal_21 - (DAT_1806e56d0 * dVal_35 - ((dVal_36 - dVal_21) - DAT_1806e56c0 * dVal_35));
    }
    if (uVal_20 < 0x3f2) {
      auArr_27._16_16_ = auArr_24._16_16_;
      if (uVal_20 < 0x3df) {
        if ((uVal_19 & 1) == 0) {
          auArr_24._8_8_ = 0;
          auArr_24._0_8_ = DAT_1806e5650;
          auArr_24._16_16_ = auArr_27._16_16_;
        }
      }
      else {
        dVal_21 = auArr_24._0_8_;
        if ((uVal_19 & 1) == 0) {
          auArr_27._8_8_ = 0;
          auArr_27._0_8_ = DAT_1806e5650;
          auArr_24._8_24_ = auArr_27._8_24_;
          auArr_24._0_8_ = DAT_1806e5650 - dVal_21 * dVal_21 * DAT_1806e5660;
        }
        else {
          auArr_24._0_8_ = dVal_21 - DAT_1806e5680 * dVal_21 * dVal_21 * dVal_21;
        }
      }
      goto LAB_18068a444;
    }
  }
  else {
    uVal_19 = __remainder_piby2d2f_forAsm(param_1,auArr_24._0_8_,1,param_4,auArr_24._0_8_);
    auArr_24._8_24_ = extraout_var;
    auArr_24._0_8_ = (double)extraout_XMM0_Qa;
  }
  dVal_21 = auArr_24._0_8_;
  dVal_35 = dVal_21 * dVal_21;
  if ((uVal_19 & 1) == 0) {
    auArr_28._16_16_ = auArr_24._16_16_;
    auArr_28._8_8_ = 0;
    auArr_28._0_8_ = DAT_1806e89d0;
    auArr_24._8_24_ = auArr_28._8_24_;
    auArr_24._0_8_ =
         DAT_1806e89d0 * dVal_35 + DAT_1806e5650 +
         ((DAT_1806e89f0 * dVal_35 + DAT_1806e89e8) * dVal_35 * dVal_35 +
         DAT_1806e89e0 * dVal_35 + DAT_1806e89d8) * dVal_35 * dVal_35;
  }
  else {
    auArr_24._0_8_ =
         dVal_21 + ((DAT_1806e8a18 * dVal_35 + DAT_1806e8a10) * dVal_35 * dVal_35 +
                  DAT_1806e8a08 * dVal_35 + DAT_1806e8a00) * dVal_21 * dVal_35;
  }
LAB_18068a444:
  if ((uVal_19 + 1 & 2) != 0) {
    dVal_21 = auArr_24._0_8_;
    auArr_24._8_8_ = 0;
    auArr_24._0_8_ = 0.0 - dVal_21;
  }
  auArr_29._4_28_ = auArr_24._4_28_;
  auArr_29._0_4_ = (float)auArr_24._0_8_;
  return auArr_29._0_8_;
}

// func_0x18068a690
uint32_t func_0x18068a690(uint32_t param_1)
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
  uVal_1 = func_0x18068a7d0(param_1,local_48);
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

// func_0x18068a728
uint32_t func_0x18068a728(FILE *param_1,int64_t param_2)
{
  uint32_t uVal_1;
  int iVal_2;
  
  if (param_1 == (FILE *)0x0) {
    *(uint8_t *)(param_2 + 0x30) = 1;
    *(uint32_t *)(param_2 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_2);
    uVal_1 = 0xffffffff;
  }
  else {
    uVal_1 = 0xffffffff;
    if ((*(uint *)((int64_t)&param_1->_base + 4) >> 0xd & 1) != 0) {
      uVal_1 = func_0x18068a9e8();
      __acrt_stdio_free_buffer_nolock(param_1);
      iVal_2 = _fileno(param_1);
      iVal_2 = func_0x180681ae8(iVal_2,param_2);
      if (iVal_2 < 0) {
        uVal_1 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        func_0x180695dd0();
        param_1->_tmpfname = (char *)0x0;
      }
    }
    __acrt_stdio_free_stream(param_1);
  }
  return uVal_1;
}

// func_0x18068a7d0
uint32_t func_0x18068a7d0(int64_t param_1,int64_t param_2)
{
  uint32_t uVal_1;
  
  if (param_1 == 0) {
    *(uint8_t *)(param_2 + 0x30) = 1;
    *(uint32_t *)(param_2 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_2);
  }
  else {
    if ((*(uint *)(param_1 + 0x14) >> 0xc & 1) == 0) {
      func_0x18067e324();
      uVal_1 = func_0x18068a728(param_1,param_2);
      func_0x18067e330(param_1);
      return uVal_1;
    }
    __acrt_stdio_free_stream();
  }
  return 0xffffffff;
}

// feof
/* Library Function - Single Match
    feof
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    feof
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
int __cdecl feof(FILE *_File)
{
  uint uVal_1;
  uint32_t *pU64_2;
  
  if (_File == (FILE *)0x0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    uVal_1 = 0;
  }
  else {
    uVal_1 = *(uint *)((int64_t)&_File->_base + 4) >> 3 & 1;
  }
  return uVal_1;
}

// ferror
/* Library Function - Single Match
    ferror
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    ferror
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
int __cdecl ferror(FILE *_File)
{
  uint uVal_1;
  uint32_t *pU64_2;
  
  if (_File == (FILE *)0x0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    uVal_1 = 0;
  }
  else {
    uVal_1 = *(uint *)((int64_t)&_File->_base + 4) >> 4 & 1;
  }
  return uVal_1;
}

// fflush
/* Library Function - Single Match
    fflush
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    fflush
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
int __cdecl fflush(FILE *_File)
{
  uint uVal_1;
  int iVal_2;
  uint8_t local_res8 [8];
  FILE *local_res10;
  FILE *local_res18;
  FILE **local_res20;
  FILE *local_18 [3];
  
  local_res10 = _File;
  if (_File == (FILE *)0x0) {
    iVal_2 = common_flush_all(false);
  }
  else {
    uVal_1 = *(uint *)((int64_t)&_File->_base + 4);
    if (((((byte)uVal_1 & 3) == 2) && ((uVal_1 & 0xc0) != 0)) || ((uVal_1 >> 0xb & 1) != 0)) {
      local_res20 = &local_res10;
      local_res18 = _File;
      local_18[0] = _File;
      iVal_2 = func_0x18068ac54(local_res8,local_18,&local_res20,&local_res18);
    }
    else {
      iVal_2 = 0;
    }
  }
  return iVal_2;
}

// common_flush_all
int __cdecl common_flush_all(bool param_1)
{
  int iVal_1;
  
  iVal_1 = common_flush_all(true);
  return iVal_1;
}

// func_0x18068a914
int func_0x18068a914(uint32_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  FILE *in_RCX;
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
  if (in_RCX == (FILE *)0x0) {
    iVal_1 = common_flush_all(false);
    goto LAB_18068a999;
  }
  iVal_1 = func_0x18068a9e8(param_1,local_48);
  if (iVal_1 == 0) {
    if ((*(uint *)((int64_t)&in_RCX->_base + 4) >> 0xb & 1) != 0) {
      iVal_1 = _fileno(in_RCX);
      iVal_1 = _commit(iVal_1);
      if (iVal_1 != 0) goto LAB_18068a974;
    }
    iVal_1 = 0;
  }
  else {
LAB_18068a974:
    iVal_1 = -1;
  }
LAB_18068a999:
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
  return iVal_1;
}

// func_0x18068a9e8
uint64_t func_0x18068a9e8(FILE *param_1,uint64_t param_2)
{
  uint *pU64_1;
  uint uVal_2;
  char *fnPtr_3;
  int iVal_4;
  int iVal_5;
  
  uVal_2 = *(uint *)((int64_t)&param_1->_base + 4);
  if ((((byte)uVal_2 & 3) == 2) && ((uVal_2 & 0xc0) != 0)) {
    iVal_5 = *(int *)&param_1->_ptr - param_1->_cnt;
    *(uint32_t *)&param_1->_base = 0;
    fnPtr_3 = *(char **)&param_1->_cnt;
    param_1->_ptr = fnPtr_3;
    if (0 < iVal_5) {
      iVal_4 = _fileno(param_1);
      iVal_4 = func_0x18069dac8(iVal_4,fnPtr_3,iVal_5,param_2);
      if (iVal_5 != iVal_4) {
        LOCK();
        pU64_1 = (uint *)((int64_t)&param_1->_base + 4);
        *pU64_1 = *pU64_1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if ((*(uint *)((int64_t)&param_1->_base + 4) >> 2 & 1) != 0) {
        LOCK();
        pU64_1 = (uint *)((int64_t)&param_1->_base + 4);
        *pU64_1 = *pU64_1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}

// common_flush_all
/* Library Function - Single Match
    int __cdecl common_flush_all(bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    int __cdecl common_flush_all(bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
int __cdecl common_flush_all(bool param_1)
{
  char local_res8 [8];
  uint8_t local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  uint32_t local_28;
  uint32_t local_24;
  int *local_20;
  char *local_18;
  int *local_10;
  
  local_res20[0] = 0;
  local_20 = local_res20;
  local_res18[0] = 0;
  local_18 = local_res8;
  local_10 = local_res18;
  local_28 = 8;
  local_24 = 8;
  local_res8[0] = param_1;
  func_0x18068ab70(local_res10,&local_24,&local_20,&local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}

// func_0x18068aad4
void func_0x18068aad4(uint64_t param_1,uint64_t *param_2,int64_t **param_3,uint64_t *param_4)
{
  uint uVal_1;
  int iVal_2;
  
  func_0x18067e324(*param_2);
  if ((**param_3 != 0) && (uVal_1 = *(uint *)(**param_3 + 0x14), (uVal_1 >> 0xd & 1) != 0)) {
    if (((((byte)uVal_1 & 3) == 2) && ((uVal_1 & 0xc0) != 0)) || ((uVal_1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint *)(**param_3 + 0x14) >> 1 & 1) != 0)) {
        iVal_2 = func_0x18068a914(**param_3);
        if (iVal_2 == -1) {
          *(uint32_t *)param_3[3] = 0xffffffff;
        }
        else {
          *(int *)param_3[1] = *(int *)param_3[1] + 1;
        }
      }
    }
    else {
      *(int *)param_3[1] = *(int *)param_3[1] + 1;
    }
  }
  func_0x18067e330(*param_4);
  return;
}

// func_0x18068ab70
void func_0x18068ab70(uint64_t param_1,uint32_t *param_2,int **param_3,uint32_t *param_4)
{
  int64_t *pLong_1;
  uint uVal_2;
  int64_t *pLong_3;
  uint8_t local_res10 [16];
  uint32_t *local_res20;
  int64_t local_58;
  int64_t local_50;
  int64_t local_48;
  int64_t *local_40;
  int64_t *local_38;
  int *local_30;
  int *local_28;
  int *local_20;
  
  local_res20 = param_4;
  FID_conflict___acrt_lock(*param_2);
  pLong_1 = DAT_1808425d0 + DAT_1808425c8;
  for (pLong_3 = DAT_1808425d0; local_40 = pLong_3, pLong_3 != pLong_1; pLong_3 = pLong_3 + 1) {
    local_58 = *pLong_3;
    if ((local_58 != 0) && (uVal_2 = *(uint *)(local_58 + 0x14), (uVal_2 >> 0xd & 1) != 0)) {
      if (((((byte)uVal_2 & 3) == 2) && ((uVal_2 & 0xc0) != 0)) || ((uVal_2 >> 0xb & 1) != 0)) {
        local_20 = param_3[2];
        local_28 = param_3[1];
        local_30 = *param_3;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        func_0x18068aad4(local_res10,&local_48,&local_38,&local_50);
      }
      else {
        **param_3 = **param_3 + 1;
      }
    }
  }
  FID_conflict___acrt_lock(*param_4);
  return;
}

// func_0x18068ac54
uint32_t func_0x18068ac54(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4)
{
  uint32_t uVal_1;
  
  func_0x18067e324(*param_2);
  uVal_1 = func_0x18068a914(*(uint64_t *)*param_3);
  func_0x18067e330(*param_4);
  return uVal_1;
}

// func_0x18068ac94
uint32_t func_0x18068ac94(FILE *param_1)
{
  bool bFlag_1;
  uint uVal_2;
  uint32_t uVal_3;
  uint32_t *pU64_4;
  uint8_t *pU64_5;
  uint8_t *pU64_6;
  uint8_t auStack_38 [32];
  uint8_t *local_18;
  
  local_18 = auStack_38;
  if (param_1 == (FILE *)0x0) {
    local_18 = auStack_38;
    pU64_4 = (uint32_t *)func_0x1806823dc();
    *pU64_4 = 0x16;
    func_0x180684970();
    return 0xffffffff;
  }
  func_0x18067e324();
  bFlag_1 = true;
  if ((*(uint *)((int64_t)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVal_2 = _fileno(param_1);
    if (uVal_2 < 0xfffffffe) {
      pU64_6 = (uint8_t *)
               ((&DAT_180842c80)[(int64_t)(int)uVal_2 >> 6] + (uint64_t)(uVal_2 & 0x3f) * 0x48);
    }
    else {
      pU64_6 = &DAT_18083d9e0;
    }
    pU64_5 = &DAT_18083d9e0;
    if (pU64_6[0x39] == '\0') {
      if (uVal_2 < 0xfffffffe) {
        pU64_5 = (uint8_t *)
                 ((&DAT_180842c80)[(int64_t)(int)uVal_2 >> 6] + (uint64_t)(uVal_2 & 0x3f) * 0x48);
      }
      if ((pU64_5[0x3d] & 1) == 0) goto LAB_18068ad60;
    }
    bFlag_1 = false;
  }
LAB_18068ad60:
  if (bFlag_1) {
    uVal_3 = _fgetc_nolock(param_1);
    func_0x18067e330(param_1);
  }
  else {
    pU64_4 = (uint32_t *)func_0x1806823dc();
    *pU64_4 = 0x16;
    func_0x180684970();
    func_0x1806a3570(local_18,0x18068ad86);
    uVal_3 = 0xffffffff;
  }
  return uVal_3;
}

// _fgetc_nolock
/* Library Function - Single Match
    _fgetc_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _fgetc_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
uint64_t _fgetc_nolock(byte **param_1)
{
  byte **ptr2_Byte_1;
  uint32_t *pU64_2;
  uint64_t uVal_3;
  
  if (param_1 == (byte **)0x0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    uVal_3 = 0xffffffff;
  }
  else {
    ptr2_Byte_1 = param_1 + 2;
    *(int *)ptr2_Byte_1 = *(int *)ptr2_Byte_1 + -1;
    if (*(int *)ptr2_Byte_1 < 0) {
      uVal_3 = func_0x1806a3400();
      return uVal_3;
    }
    uVal_3 = (uint64_t)**param_1;
    *param_1 = *param_1 + 1;
  }
  return uVal_3;
}

// fgetpos
/* Library Function - Single Match
    fgetpos
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    fgetpos
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
int __cdecl fgetpos(FILE *_File,fpos_t *_Pos)
{
  int iVal_1;
  uint32_t *pU64_2;
  int64_t lVal_3;
  
  if ((_File == (FILE *)0x0) || (_Pos == (fpos_t *)0x0)) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    iVal_1 = -1;
  }
  else {
    lVal_3 = func_0x18068321c();
    *_Pos = lVal_3;
    iVal_1 = (lVal_3 != -1) - 1;
  }
  return iVal_1;
}

// func_0x18068ae40 - decompilation failed



// func_0x18068afa0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x18068afa0(uint64_t param_1,float param_2)
{
  int iVal_1;
  uint uVal_2;
  uint64_t uVal_3;
  uint uVal_4;
  int iVal_5;
  double dVal_6;
  double dVal_7;
  float fVal_8;
  uint64_t uVal_11;
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  double dVal_12;
  double dVal_13;
  uint8_t auArr_14 [16];
  uint8_t auArr_15 [16];
  
  fVal_8 = (float)param_1;
  dVal_12 = (double)fVal_8;
  dVal_13 = (double)param_2;
  dVal_6 = (double)((uint64_t)dVal_12 & 0x7fffffffffffffff);
  uVal_2 = (uint)((uint64_t)dVal_12 >> 0x34) & 0x7ff;
  dVal_7 = (double)((uint64_t)dVal_13 & 0x7fffffffffffffff);
  uVal_4 = (uint)((uint64_t)dVal_13 >> 0x34) & 0x7ff;
  if (uVal_2 == 0) {
LAB_18068b253:
    if (uVal_2 < 0x7ff) {
      if (0x7fe < uVal_4) {
        if (((uint64_t)dVal_13 & 0xfffffffffffff) == 0) {
          return param_1;
        }
        uVal_3 = func_0x1806a2540(param_2);
        return uVal_3;
      }
      if ((uVal_2 == 0) && (uVal_4 != 0)) {
        return param_1;
      }
      goto LAB_18068b2b3;
    }
  }
  else if (uVal_2 < 0x7ff) {
    if (uVal_4 - 1 < 0x7fe) {
      if (dVal_6 == dVal_7) {
        return (uint64_t)(uint)(float)(double)((uint64_t)dVal_12 & 0x8000000000000000);
      }
      auArr_14._8_8_ = 0;
      auArr_14._0_8_ = dVal_6;
      if ((uint64_t)dVal_7 <= (uint64_t)dVal_6) {
        if (uVal_4 < uVal_2) {
          iVal_5 = 0;
          iVal_1 = (int)(uVal_2 - uVal_4) / 0x18;
          dVal_7 = dVal_7 * (double)((int64_t)(iVal_1 * 0x18 + 0x3ff) << 0x34);
          if (7 < iVal_1) {
            uVal_2 = (iVal_1 - 8U >> 3) + 1;
            uVal_3 = (uint64_t)uVal_2;
            iVal_5 = uVal_2 * 8;
            do {
              uVal_11 = auArr_14._8_8_;
              dVal_12 = dVal_7 * 5.960464477539062e-08;
              dVal_6 = auArr_14._0_8_ - (double)(int)(auArr_14._0_8_ / dVal_7) * dVal_7;
              dVal_7 = dVal_12 * 5.960464477539062e-08;
              dVal_6 = dVal_6 - (double)(int)(dVal_6 / dVal_12) * dVal_12;
              dVal_12 = dVal_7 * 5.960464477539062e-08;
              dVal_6 = dVal_6 - (double)(int)(dVal_6 / dVal_7) * dVal_7;
              dVal_7 = dVal_12 * 5.960464477539062e-08;
              dVal_6 = dVal_6 - (double)(int)(dVal_6 / dVal_12) * dVal_12;
              dVal_12 = dVal_7 * 5.960464477539062e-08;
              dVal_6 = dVal_6 - (double)(int)(dVal_6 / dVal_7) * dVal_7;
              dVal_7 = dVal_12 * 5.960464477539062e-08;
              dVal_6 = dVal_6 - (double)(int)(dVal_6 / dVal_12) * dVal_12;
              dVal_12 = dVal_7 * 5.960464477539062e-08;
              dVal_6 = dVal_6 - (double)(int)(dVal_6 / dVal_7) * dVal_7;
              dVal_7 = dVal_12 * 5.960464477539062e-08;
              auArr_14._0_8_ = dVal_6 - (double)(int)(dVal_6 / dVal_12) * dVal_12;
              auArr_14._8_8_ = uVal_11;
              uVal_3 = uVal_3 - 1;
            } while (uVal_3 != 0);
          }
          if (iVal_5 < iVal_1) {
            uVal_3 = (uint64_t)(uint)(iVal_1 - iVal_5);
            do {
              uVal_11 = auArr_14._8_8_;
              dVal_6 = (double)(int)(auArr_14._0_8_ / dVal_7) * dVal_7;
              dVal_7 = dVal_7 * 5.960464477539062e-08;
              auArr_14._0_8_ = auArr_14._0_8_ - dVal_6;
              auArr_14._8_8_ = uVal_11;
              uVal_3 = uVal_3 - 1;
            } while (uVal_3 != 0);
          }
        }
        auArr_15._0_8_ = auArr_14._0_8_ - (double)(int)(auArr_14._0_8_ / dVal_7) * dVal_7;
        auArr_15._8_8_ = auArr_14._8_8_;
        auArr_9 = auArr_15;
        if (fVal_8 < 0.0) {
          auArr_9._0_4_ = SUB84(auArr_15._0_8_,0) ^ (uint)DAT_1806c90f0;
          auArr_9._4_4_ = (uint)((uint64_t)auArr_15._0_8_ >> 0x20) ^ DAT_1806c90f0._4_4_;
          auArr_9._8_4_ = auArr_14._8_4_ ^ _UNK_1806c90f8;
          auArr_9._12_4_ = auArr_14._12_4_ ^ _UNK_1806c90fc;
        }
        auArr_10._4_12_ = auArr_9._4_12_;
        auArr_10._0_4_ = (float)auArr_9._0_8_;
        return auArr_10._0_8_;
      }
      if (fVal_8 < 0.0) {
        dVal_6 = (double)CONCAT44((uint)((uint64_t)dVal_6 >> 0x20) ^ DAT_1806c90f0._4_4_,
                                 SUB84(dVal_6,0) ^ (uint)DAT_1806c90f0);
      }
      return (uint64_t)(uint)(float)dVal_6;
    }
    goto LAB_18068b253;
  }
  if (((uint64_t)dVal_12 & 0xfffffffffffff) != 0) {
    uVal_3 = func_0x1806a2540(param_1 & 0xffffffff);
    return uVal_3;
  }
LAB_18068b2b3:
  uVal_3 = func_0x1806a2550("fmodf",0x16,0xffc00000,1,8,0x21,fVal_8,param_2,2);
  return uVal_3;
}

// func_0x18068b2f8
uint32_t func_0x18068b2f8(uint32_t param_1,uint64_t param_2)
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
  uVal_1 = func_0x18068b3a8(param_1,param_2,local_48);
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

// func_0x18068b390
uint64_t func_0x18068b390(byte param_1,FILE *param_2,int64_t param_3)
{
  char **ptr2_Char_1;
  uint *pU64_2;
  char ch_3;
  
  ptr2_Char_1 = &param_2->_base;
  *(int *)ptr2_Char_1 = *(int *)ptr2_Char_1 + -1;
  if (-1 < *(int *)ptr2_Char_1) {
    *param_2->_ptr = param_1;
    param_2->_ptr = param_2->_ptr + 1;
    return (uint64_t)param_1;
  }
  _fileno(param_2);
  if ((*(uint *)((int64_t)&param_2->_base + 4) & 6) == 0) {
    *(uint32_t *)(param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((int64_t)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if ((*(uint *)((int64_t)&param_2->_base + 4) & 1) != 0) {
        ch_3 = func_0x18069e4e0(param_2);
        *(uint32_t *)&param_2->_base = 0;
        if (ch_3 == '\0') goto LAB_18069e446;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        pU64_2 = (uint *)((int64_t)&param_2->_base + 4);
        *pU64_2 = *pU64_2 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      pU64_2 = (uint *)((int64_t)&param_2->_base + 4);
      *pU64_2 = *pU64_2 | 2;
      UNLOCK();
      LOCK();
      pU64_2 = (uint *)((int64_t)&param_2->_base + 4);
      *pU64_2 = *pU64_2 & 0xfffffff7;
      UNLOCK();
      *(uint32_t *)&param_2->_base = 0;
      if (((*(uint *)((int64_t)&param_2->_base + 4) & 0x4c0) == 0) &&
         (ch_3 = func_0x180699db8(param_2), ch_3 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      ch_3 = func_0x18069e568(param_1,param_2,param_3);
      if (ch_3 != '\0') {
        return (uint64_t)param_1;
      }
      goto LAB_18069e446;
    }
    *(uint32_t *)(param_3 + 0x2c) = 0x22;
  }
  *(uint8_t *)(param_3 + 0x30) = 1;
LAB_18069e446:
  LOCK();
  pU64_2 = (uint *)((int64_t)&param_2->_base + 4);
  *pU64_2 = *pU64_2 | 0x10;
  UNLOCK();
  return 0xffffffff;
}

// func_0x18068b3a8
uint func_0x18068b3a8(uint param_1,FILE *param_2,int64_t param_3)
{
  char **ptr2_Char_1;
  bool bFlag_2;
  uint uVal_3;
  uint8_t *pU64_4;
  uint8_t *pU64_5;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t local_20;
  uint8_t *local_18;
  
  local_18 = auStack_48;
  local_20 = param_3;
  if (param_2 == (FILE *)0x0) {
    *(uint8_t *)(param_3 + 0x30) = 1;
    *(uint32_t *)(param_3 + 0x2c) = 0x16;
    local_28 = 0;
    local_18 = auStack_48;
    func_0x180684b50(0,0,0,0);
    return 0xffffffff;
  }
  func_0x18067e324(param_2);
  if ((*(uint *)((int64_t)&param_2->_base + 4) >> 0xc & 1) == 0) {
    uVal_3 = _fileno(param_2);
    if (uVal_3 + 2 < 2) {
      pU64_5 = &DAT_18083d9e0;
    }
    else {
      pU64_5 = (uint8_t *)
               ((&DAT_180842c80)[(int64_t)(int)uVal_3 >> 6] + (uint64_t)(uVal_3 & 0x3f) * 0x48);
    }
    pU64_4 = &DAT_18083d9e0;
    if (pU64_5[0x39] == '\0') {
      if (1 < uVal_3 + 2) {
        pU64_4 = (uint8_t *)
                 ((&DAT_180842c80)[(int64_t)(int)uVal_3 >> 6] + (uint64_t)(uVal_3 & 0x3f) * 0x48);
      }
      if ((pU64_4[0x3d] & 1) == 0) goto LAB_18068b491;
    }
    bFlag_2 = false;
  }
  else {
LAB_18068b491:
    bFlag_2 = true;
  }
  if (bFlag_2) {
    ptr2_Char_1 = &param_2->_base;
    *(int *)ptr2_Char_1 = *(int *)ptr2_Char_1 + -1;
    if (*(int *)ptr2_Char_1 < 0) {
      param_1 = func_0x18069e414(param_1,param_2,param_3);
    }
    else {
      *param_2->_ptr = (char)param_1;
      param_2->_ptr = param_2->_ptr + 1;
      param_1 = param_1 & 0xff;
    }
    func_0x18067e330(param_2);
  }
  else {
    *(uint8_t *)(param_3 + 0x30) = 1;
    *(uint32_t *)(param_3 + 0x2c) = 0x16;
    local_28 = 0;
    func_0x180684b50(0,0,0,0);
    func_0x1806a3570(local_18,0x18068b4d1);
    param_1 = 0xffffffff;
  }
  return param_1;
}

// fread_s
/* Library Function - Single Match
    fread_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    fread_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)
{
  uint32_t *pU64_1;
  size_t sz_2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      func_0x18067e324(_File);
      sz_2 = func_0x18068b5d4(_DstBuf,_DstSize,_ElementSize,_Count,_File);
      func_0x18067e330(_File);
      return sz_2;
    }
    if (_DstSize != 0xffffffffffffffff) {
      func_0x1806ab010(_DstBuf,0,_DstSize);
    }
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x16;
    func_0x180684970();
  }
  return 0;
}

// fread
/* Library Function - Single Match
    fread
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    fread
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)
{
  size_t sz_1;
  
  sz_1 = fread_s(_DstBuf,0xffffffffffffffff,_ElementSize,_Count,_File);
  return sz_1;
}

// func_0x18068b5d4
uint64_t func_0x18068b5d4(uint8_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, FILE *param_5)
{
  uint *pU64_1;
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  FILE *_File;
  int iVal_4;
  uint32_t *pU64_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint8_t *pU64_9;
  uint uVal_10;
  uint64_t uVal_11;
  
  _File = param_5;
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (uint8_t *)0x0) {
LAB_18068b60d:
    pU64_5 = (uint32_t *)func_0x1806823dc();
    *pU64_5 = 0x16;
  }
  else {
    if ((param_5 == (FILE *)0x0) ||
       (auArr_2._8_8_ = 0, auArr_2._0_8_ = param_3,
       SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auArr_2,0) < param_4)) {
      if (param_2 != 0xffffffffffffffff) {
        func_0x1806ab010(param_1,0,param_2);
      }
      if ((param_5 == (FILE *)0x0) ||
         (auArr_3._8_8_ = 0, auArr_3._0_8_ = param_3,
         SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auArr_3,0) < param_4))
      goto LAB_18068b60d;
    }
    if ((*(uint *)((int64_t)&param_5->_base + 4) & 0x4c0) == 0) {
      uVal_6 = 0x1000;
    }
    else {
      uVal_6 = (uint64_t)(uint)param_5->_charbuf;
    }
    param_5._0_4_ = (uint)uVal_6;
    uVal_8 = param_3 * param_4;
    uVal_7 = param_2;
    pU64_9 = param_1;
    while( true ) {
      if (uVal_8 == 0) {
        return param_4;
      }
      if ((*(uint *)((int64_t)&_File->_base + 4) & 0x4c0) == 0) break;
      uVal_10 = *(uint *)&_File->_base;
      if (uVal_10 == 0) break;
      if ((int)uVal_10 < 0) {
LAB_18068b822:
        LOCK();
        pU64_1 = (uint *)((int64_t)&_File->_base + 4);
        *pU64_1 = *pU64_1 | 0x10;
        UNLOCK();
LAB_18068b82e:
        return (param_3 * param_4 - uVal_8) / param_3;
      }
      if (uVal_8 < (uint64_t)(int64_t)(int)uVal_10) {
        uVal_10 = (uint)uVal_8;
      }
      if (uVal_7 < uVal_10) goto LAB_18068b7ff;
      if (uVal_10 != 0) {
        if (pU64_9 != (uint8_t *)0x0) {
          if (_File->_ptr != (char *)0x0) {
            func_0x1806aa960(pU64_9);
            goto LAB_18068b724;
          }
          func_0x1806ab010(pU64_9,0,uVal_7);
        }
        pU64_5 = (uint32_t *)func_0x1806823dc();
        *pU64_5 = 0x16;
        func_0x180684970();
      }
LAB_18068b724:
      *(uint *)&_File->_base = *(int *)&_File->_base - uVal_10;
      uVal_6 = (uint64_t)uVal_10;
      _File->_ptr = _File->_ptr + uVal_10;
LAB_18068b73d:
      uVal_8 = uVal_8 - uVal_6;
      pU64_9 = pU64_9 + uVal_6;
      uVal_7 = uVal_7 - uVal_6;
LAB_18068b7e4:
      uVal_6 = (uint64_t)(uint)param_5;
    }
    if (uVal_8 < uVal_6) {
      iVal_4 = func_0x1806a3400(_File);
      if (iVal_4 == -1) goto LAB_18068b82e;
      if (uVal_7 != 0) {
        *pU64_9 = (char)iVal_4;
        uVal_8 = uVal_8 - 1;
        param_5._0_4_ = _File->_charbuf;
        pU64_9 = pU64_9 + 1;
        uVal_7 = uVal_7 - 1;
        goto LAB_18068b7e4;
      }
    }
    else {
      uVal_11 = uVal_8 & 0xffffffff;
      if (0x7fffffff < uVal_8) {
        uVal_11 = 0x7fffffff;
      }
      if ((int)uVal_6 != 0) {
        uVal_11 = (uint64_t)(uint)((int)uVal_11 - (int)(uVal_11 % uVal_6));
      }
      if (uVal_11 <= uVal_7) {
        *(uint32_t *)&_File->_base = 0;
        _File->_ptr = *(char **)&_File->_cnt;
        iVal_4 = _fileno(_File);
        iVal_4 = func_0x18069cd74(iVal_4,pU64_9,uVal_11);
        if (iVal_4 == 0) {
          LOCK();
          pU64_1 = (uint *)((int64_t)&_File->_base + 4);
          *pU64_1 = *pU64_1 | 8;
          UNLOCK();
          goto LAB_18068b82e;
        }
        if (-1 < iVal_4) {
          uVal_6 = (uint64_t)iVal_4;
          goto LAB_18068b73d;
        }
        goto LAB_18068b822;
      }
    }
LAB_18068b7ff:
    if (param_2 != 0xffffffffffffffff) {
      func_0x1806ab010(param_1,0,param_2);
    }
    pU64_5 = (uint32_t *)func_0x1806823dc();
    *pU64_5 = 0x22;
  }
  func_0x180684970();
  return 0;
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

// func_0x18068b850
uint64_t func_0x18068b850(uint64_t param_1,int *param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  double dVal_3;
  uint8_t in_XMM0 [16];
  
  dVal_3 = in_XMM0._0_8_;
  if (dVal_3 == 0.0) {
    *param_2 = 0;
    return 0;
  }
  if (((in_XMM0 & (uint8_t  [16])0x7ff0000000000000) == (uint8_t  [16])0x0) &&
     ((in_XMM0 & (uint8_t  [16])0xfffffffffffff) != (uint8_t  [16])0x0)) {
    lVal_1 = 0x3f;
    if ((in_XMM0 & (uint8_t  [16])0xfffffffffffff) != (uint8_t  [16])0x0) {
      for (; ((uint64_t)dVal_3 & 0xfffffffffffff) >> lVal_1 == 0; lVal_1 = lVal_1 + -1) {
      }
    }
    uVal_2 = ((uint64_t)dVal_3 & 0xfffffffffffff) << (0x34U - (char)lVal_1 & 0x3f) &
            0xffefffffffffffff;
    *param_2 = (int)lVal_1 + -0x431;
    if (dVal_3 < 0.0) {
      uVal_2 = uVal_2 | 0x8000000000000000;
    }
    return uVal_2 & 0xbfefffffffffffff | 0x3fe0000000000000;
  }
  *param_2 = (in_XMM0._4_4_ >> 0x14 & 0x7ff) - 0x3fe;
  return (uint64_t)dVal_3 & 0xbfefffffffffffff | 0x3fe0000000000000;
}

// fsetpos
/* Library Function - Single Match
    fsetpos
   
   Library: Visual Studio */
/* Library Function - Single Match
    fsetpos
   
   Library: Visual Studio */
int __cdecl fsetpos(FILE *_File,fpos_t *_Pos)
{
  int iVal_1;
  uint32_t *pU64_2;
  
  if ((_File != (FILE *)0x0) && (_Pos != (fpos_t *)0x0)) {
    iVal_1 = func_0x180682cc0(_File,*_Pos,0);
    return iVal_1;
  }
  pU64_2 = (uint32_t *)func_0x1806823dc();
  *pU64_2 = 0x16;
  func_0x180684970();
  return -1;
}

// common_getenv_s<wchar_t>
int __cdecl
common_getenv_s<wchar_t>(__uint64 *param_1,wchar_t *param_2,__uint64 param_3,wchar_t *param_4)
{
  bool bFlag_1;
  int iVal_2;
  uint32_t *pU64_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_7;
  int iVal_8;
  int64_t lVal_6;
  
  FID_conflict___acrt_lock(0xb);
  iVal_8 = 0;
  if (param_1 != (__uint64 *)0x0) {
    *param_1 = 0;
    if (param_2 == (wchar_t *)0x0) {
LAB_18068b9e4:
      if (param_3 == 0) goto LAB_18068b9e9;
LAB_18068b9f0:
      bFlag_1 = false;
    }
    else {
      if (param_3 == 0) {
        if (param_2 == (wchar_t *)0x0) goto LAB_18068b9e4;
        goto LAB_18068b9f0;
      }
LAB_18068b9e9:
      bFlag_1 = true;
    }
    if (bFlag_1) {
      if (param_2 != (wchar_t *)0x0) {
        *param_2 = L'\0';
      }
      lVal_4 = func_0x18068ba80(param_4);
      if (lVal_4 != 0) {
        lVal_5 = -1;
        do {
          lVal_6 = lVal_5;
          lVal_5 = lVal_6 + 1;
        } while (*(short *)(lVal_4 + lVal_5 * 2) != 0);
        uVal_7 = lVal_6 + 2;
        *param_1 = uVal_7;
        if (param_3 != 0) {
          if (param_3 < uVal_7) {
            iVal_8 = 0x22;
          }
          else {
            iVal_2 = func_0x180696710();
            if (iVal_2 != 0) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
      goto LAB_18068ba42;
    }
  }
  pU64_3 = (uint32_t *)func_0x1806823dc();
  iVal_8 = 0x16;
  *pU64_3 = 0x16;
  func_0x180684970();
LAB_18068ba42:
  FID_conflict___acrt_lock(0xb);
  return iVal_8;
}

// common_getenv_s<wchar_t>
/* Library Function - Single Match
    int __cdecl common_getenv_s<wchar_t>(unsigned __int64 * __ptr64 const,wchar_t * __ptr64
   const,unsigned __int64,wchar_t const * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    int __cdecl common_getenv_s<wchar_t>(unsigned __int64 * __ptr64 const,wchar_t * __ptr64
   const,unsigned __int64,wchar_t const * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
common_getenv_s<wchar_t>(__uint64 *param_1,wchar_t *param_2,__uint64 param_3,wchar_t *param_4)
{
  bool bFlag_1;
  int iVal_2;
  uint32_t *pU64_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_7;
  int iVal_8;
  int64_t lVal_6;
  
  FID_conflict___acrt_lock(0xb);
  iVal_8 = 0;
  if (param_1 != (__uint64 *)0x0) {
    *param_1 = 0;
    if (param_2 == (wchar_t *)0x0) {
LAB_18068b9e4:
      if (param_3 == 0) goto LAB_18068b9e9;
LAB_18068b9f0:
      bFlag_1 = false;
    }
    else {
      if (param_3 == 0) {
        if (param_2 == (wchar_t *)0x0) goto LAB_18068b9e4;
        goto LAB_18068b9f0;
      }
LAB_18068b9e9:
      bFlag_1 = true;
    }
    if (bFlag_1) {
      if (param_2 != (wchar_t *)0x0) {
        *param_2 = L'\0';
      }
      lVal_4 = func_0x18068ba80(param_4);
      if (lVal_4 != 0) {
        lVal_5 = -1;
        do {
          lVal_6 = lVal_5;
          lVal_5 = lVal_6 + 1;
        } while (*(short *)(lVal_4 + lVal_5 * 2) != 0);
        uVal_7 = lVal_6 + 2;
        *param_1 = uVal_7;
        if (param_3 != 0) {
          if (param_3 < uVal_7) {
            iVal_8 = 0x22;
          }
          else {
            iVal_2 = func_0x180696710();
            if (iVal_2 != 0) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
      goto LAB_18068ba42;
    }
  }
  pU64_3 = (uint32_t *)func_0x1806823dc();
  iVal_8 = 0x16;
  *pU64_3 = 0x16;
  func_0x180684970();
LAB_18068ba42:
  FID_conflict___acrt_lock(0xb);
  return iVal_8;
}

// func_0x18068ba80
int64_t func_0x18068ba80(int64_t param_1)
{
  int iVal_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  
  pLong_2 = (int64_t *)func_0x18068442c();
  if ((pLong_2 != (int64_t *)0x0) && (param_1 != 0)) {
    uVal_5 = 0xffffffffffffffff;
    do {
      uVal_5 = uVal_5 + 1;
    } while (*(short *)(param_1 + uVal_5 * 2) != 0);
    lVal_3 = *pLong_2;
    while (lVal_3 != 0) {
      uVal_4 = 0xffffffffffffffff;
      do {
        uVal_4 = uVal_4 + 1;
      } while (*(short *)(lVal_3 + uVal_4 * 2) != 0);
      if (((uVal_5 < uVal_4) && (*(short *)(lVal_3 + uVal_5 * 2) == 0x3d)) &&
         (iVal_1 = func_0x1806a47a0(lVal_3,param_1,uVal_5), iVal_1 == 0)) {
        return *pLong_2 + uVal_5 * 2 + 2;
      }
      pLong_2 = pLong_2 + 1;
      lVal_3 = *pLong_2;
    }
  }
  return 0;
}

// isupper
/* Library Function - Single Match
    isupper
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    isupper
   
   Library: Visual Studio 2019 Release */
int __cdecl isupper(int _C)
{
  int iVal_1;
  int64_t lVal_2;
  int64_t *local_res10 [3];
  
  if (DAT_1808429bc == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_18083d6b0 + (int64_t)_C * 2) & 1;
    }
  }
  else {
    lVal_2 = __vcrt_getptd();
    local_res10[0] = *(int64_t **)(lVal_2 + 0x90);
    func_0x180696634(lVal_2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (int64_t)_C * 2) & 1;
    }
    if (1 < *(int *)(local_res10[0] + 1)) {
      iVal_1 = _isctype_l(_C,1,(_locale_t)0x0);
      return iVal_1;
    }
  }
  return 0;
}

// islower
/* Library Function - Single Match
    islower
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    islower
   
   Library: Visual Studio 2019 Release */
int __cdecl islower(int _C)
{
  int iVal_1;
  int64_t lVal_2;
  int64_t *local_res10 [3];
  
  if (DAT_1808429bc == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_18083d6b0 + (int64_t)_C * 2) & 2;
    }
  }
  else {
    lVal_2 = __vcrt_getptd();
    local_res10[0] = *(int64_t **)(lVal_2 + 0x90);
    func_0x180696634(lVal_2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (int64_t)_C * 2) & 2;
    }
    if (1 < *(int *)(local_res10[0] + 1)) {
      iVal_1 = _isctype_l(_C,2,(_locale_t)0x0);
      return iVal_1;
    }
  }
  return 0;
}

// isspace
/* Library Function - Single Match
    isspace
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    isspace
   
   Library: Visual Studio 2019 Release */
int __cdecl isspace(int _C)
{
  int iVal_1;
  int64_t lVal_2;
  int64_t *local_res10 [3];
  
  if (DAT_1808429bc == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_18083d6b0 + (int64_t)_C * 2) & 8;
    }
  }
  else {
    lVal_2 = __vcrt_getptd();
    local_res10[0] = *(int64_t **)(lVal_2 + 0x90);
    func_0x180696634(lVal_2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (int64_t)_C * 2) & 8;
    }
    if (1 < *(int *)(local_res10[0] + 1)) {
      iVal_1 = _isctype_l(_C,8,(_locale_t)0x0);
      return iVal_1;
    }
  }
  return 0;
}

// func_0x18068bd28
void func_0x18068bd28(wint_t param_1)
{
  iswctype(param_1,8);
  return;
}

// func_0x18068bd40
void func_0x18068bd40(uint64_t param_1,int param_2)
{
  double dVal_1;
  uint64_t uVal_2;
  int iVal_3;
  int64_t lVal_4;
  uint8_t in_XMM0 [16];
  
  dVal_1 = in_XMM0._0_8_;
  if (((uint64_t)dVal_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if (((int64_t)dVal_1 + 0x10000000000000U & 0x7fffffffffffffff) != 0) {
      if (((uint64_t)dVal_1 & 0x7ff8000000000000) == 0x7ff8000000000000) {
        uVal_2 = func_0x1806a2380(0x1f80,0xffc0);
        func_0x1806a3820();
        func_0x1806a2380(uVal_2,0xffc0);
      }
      else {
        func_0x1806a2380(0x1f80,0xffc0);
        func_0x1806a3670(8);
      }
    }
  }
  else if (dVal_1 != 0.0) {
    if (((in_XMM0 & (uint8_t  [16])0x7ff0000000000000) == (uint8_t  [16])0x0) &&
       ((in_XMM0 & (uint8_t  [16])0xfffffffffffff) != (uint8_t  [16])0x0)) {
      lVal_4 = 0x3f;
      if ((in_XMM0 & (uint8_t  [16])0xfffffffffffff) != (uint8_t  [16])0x0) {
        for (; ((uint64_t)dVal_1 & 0xfffffffffffff) >> lVal_4 == 0; lVal_4 = lVal_4 + -1) {
        }
      }
      iVal_3 = (int)lVal_4 + -0x431;
    }
    else {
      iVal_3 = (in_XMM0._4_4_ >> 0x14 & 0x7ff) - 0x3fe;
    }
    lVal_4 = (int64_t)iVal_3 + (int64_t)param_2;
    if (lVal_4 < 0x401) {
      if (lVal_4 < -0x3fd) {
        func_0x1806a2380(0x1f80,0xffc0);
        func_0x1806a3670(0x12);
      }
    }
    else {
      func_0x1806a2380(0x1f80,0xffc0);
      if (0xa00 < lVal_4) {
        func_0x1806a4940(DAT_1806e5770);
      }
      func_0x1806a3670(0x11);
    }
  }
  return;
}

// func_0x18068c080
uint64_t func_0x18068c080(void)
{
  int64_t lVal_1;
  int64_t local_res8 [4];
  
  lVal_1 = __vcrt_getptd();
  local_res8[0] = *(int64_t *)(lVal_1 + 0x90);
  func_0x180696634(lVal_1,local_res8);
  return *(uint64_t *)(local_res8[0] + 0xf8);
}

// _malloc_base
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

// func_0x18068c0d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x18068c0d0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
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
  uint8_t auArr_15 [16];
  uint8_t auArr_16 [16];
  uint uVal_17;
  uint32_t uVal_18;
  uint uVal_19;
  uint uVal_20;
  uint uVal_21;
  int iVal_22;
  int64_t lVal_23;
  float fVal_24;
  bool bFlag_25;
  uint64_t uVal_26;
  uint8_t in_YMM0 [32];
  uint8_t auArr_27 [32];
  uint8_t auArr_28 [32];
  uint8_t auArr_29 [32];
  float fVal_30;
  double dVal_31;
  double dVal_32;
  uint64_t uVal_33;
  uint8_t in_YMM1 [32];
  float fVal_37;
  float fVal_38;
  float fVal_39;
  double dVal_40;
  uint8_t auArr_41 [16];
  uint8_t auArr_42 [16];
  uint8_t in_YMM2 [32];
  uint8_t auArr_43 [16];
  uint8_t auArr_44 [16];
  uint8_t auArr_45 [16];
  uint8_t auArr_46 [16];
  uint8_t auArr_47 [16];
  uint8_t auArr_48 [16];
  uint8_t in_YMM5 [32];
  double dVal_49;
  uint8_t auArr_34 [32];
  uint8_t auArr_35 [32];
  uint8_t auArr_36 [32];
  
  auArr_42 = in_YMM0._0_16_;
  auArr_43 = in_YMM2._0_16_;
  if (DAT_180843124 != 0) {
    auArr_11 = vpunpckldq_avx(in_YMM1._0_16_,auArr_42);
    auArr_48 = vpxor_avx(in_YMM5._0_16_,in_YMM5._0_16_);
    uVal_17 = vmovd_avx(auArr_11);
    uVal_20 = vmovd_avx(auArr_42);
    uVal_19 = uVal_17 & 0x7fffffff;
    uVal_21 = uVal_20 & 0x7fffffff;
    uVal_33 = auArr_11._0_8_;
    if (uVal_19 < 0x7f800000) {
      if (uVal_19 < 0x3f800001) {
        if (uVal_19 == 0) {
          if ((0x7f800000 < uVal_21) && (uVal_21 < 0x7fc00000)) {
            auArr_42 = vmovd_avx(uVal_21 | 0x400000);
            uVal_26 = func_0x1806a4970(uVal_21,uVal_21 | 0x400000,auArr_42._0_8_,DAT_1806e5788);
            return uVal_26;
          }
          goto LAB_18068cda0;
        }
        iVal_22 = vmovd_avx(auArr_11);
        if (iVal_22 == 0x3f800000) {
          if (uVal_21 < 0x7f800001) {
            return in_YMM0._0_8_;
          }
          uVal_17 = vmovd_avx(auArr_42);
          auArr_42 = vmovd_avx(uVal_17 | 0x400000);
          uVal_26 = func_0x1806a4970(uVal_21,uVal_17 | 0x400000,auArr_42._0_8_,DAT_1806e5788);
          return uVal_26;
        }
      }
      if (uVal_21 < 0x7f800000) {
        auArr_42 = vcvtps2pd_avx(auArr_11);
        auArr_29 = ZEXT1632(auArr_42);
        if ((int)uVal_20 < 0x3f880000) {
          if ((int)uVal_20 < 1) {
            if (uVal_21 == 0) {
              uVal_21 = vmovd_avx(auArr_11);
              uVal_19 = uVal_21;
              if ((int)uVal_21 < 0) {
                uVal_19 = 0x7f800000;
              }
              iVal_22 = 0;
              if ((int)uVal_21 < 0) {
                iVal_22 = 0x7f800000;
              }
              if (0 < (int)uVal_21) {
                uVal_19 = 0;
              }
              if ((uVal_17 & 0x7f800000) < 0x4b000001) {
                auArr_42 = vroundss_avx(auArr_43,auArr_11,8);
                vucomiss_avx(auArr_42,auArr_11);
                if ((uVal_17 & 0x7f800000) == 0x4b000000) {
                  uVal_17 = vcvtss2si_avx(auArr_11);
                  if ((uVal_17 & 1) == 0) {
                    uVal_20 = 0;
                  }
                  else {
                    uVal_20 = uVal_20 & 0x80000000;
                  }
                }
                else {
                  uVal_20 = 0;
                }
              }
              else {
                uVal_20 = 0;
              }
              auArr_42 = vmovd_avx(uVal_20 | uVal_19);
              if (iVal_22 == 0) {
                return auArr_42._0_8_;
              }
              uVal_26 = func_0x1806a4970(uVal_20 | uVal_19,uVal_33,auArr_42._0_8_,DAT_1806e5784);
              return uVal_26;
            }
            if ((uVal_17 & 0x7f800000) < 0x4b000001) {
              auArr_43 = vroundss_avx(auArr_43,auArr_11,8);
              vucomiss_avx(auArr_43,auArr_11);
              if ((uVal_17 & 0x7f800000) != 0x4b000000) {
                auArr_42 = vmovd_avx(0xffc00000);
                uVal_26 = func_0x1806a4970(uVal_21,0xffc00000,auArr_42._0_8_,DAT_1806e5794);
                return uVal_26;
              }
              uVal_17 = vcvtss2si_avx(auArr_11);
              if ((uVal_17 & 1) != 0) {
                auArr_48 = vmovss_avx(DAT_1806e57ec);
              }
            }
          }
          auArr_11 = vpshufd_avx(auArr_42,0xee);
          auArr_43._8_8_ = 0;
          auArr_43._0_8_ = DAT_1806e57dc;
          auArr_43 = vsubsd_avx(auArr_11,auArr_43);
          param_2 = vmovq_avx(auArr_43);
          param_2 = param_2 & 0x7fffffffffffffff;
          if (param_2 < DAT_1806e57d4) {
            auArr_42 = vpshufd_avx(auArr_48,0x44);
            auArr_48._8_8_ = auArr_42._8_8_;
            auArr_48._0_8_ = auArr_43._0_8_;
            auArr_42._8_8_ = 0;
            auArr_42._0_8_ = DAT_1806e57e4;
            auArr_42 = vaddsd_avx(auArr_43,auArr_42);
            auArr_42 = vdivsd_avx(auArr_48,auArr_42);
            auArr_11 = vmulsd_avx(auArr_42,auArr_43);
            auArr_42 = vaddsd_avx(auArr_42,auArr_42);
            auArr_10 = vmulsd_avx(auArr_42,auArr_42);
            auArr_48 = vpshufd_avx(auArr_10,0x44);
            auArr_9._8_8_ = _UNK_1806e5808;
            auArr_9._0_8_ = _DAT_1806e5800;
            auArr_48 = vmulpd_avx(auArr_48,auArr_9);
            auArr_9 = vmulsd_avx(auArr_42,auArr_10);
            auArr_12._8_8_ = _UNK_1806e5818;
            auArr_12._0_8_ = _DAT_1806e5810;
            auArr_42 = vaddpd_avx(auArr_48,auArr_12);
            auArr_48 = vmulsd_avx(auArr_10,auArr_10);
            auArr_48 = vmulsd_avx(auArr_48,auArr_9);
            auArr_48 = vunpcklpd_avx(auArr_9,auArr_48);
            auArr_42 = vmulpd_avx(auArr_48,auArr_42);
            auArr_48 = vpshufd_avx(auArr_42,0xee);
            auArr_42 = vaddsd_avx(auArr_48,auArr_42);
            auArr_48 = vsubsd_avx(auArr_42,auArr_11);
            auArr_42 = vpshufd_avx(auArr_11,0xee);
            uVal_26 = auArr_42._0_8_;
            auArr_42 = vaddsd_avx(auArr_43,auArr_48);
            dVal_31 = auArr_42._0_8_;
            goto LAB_18068c1ce;
          }
        }
        auArr_43 = vpshufd_avx(auArr_42,0xee);
        auArr_43 = vpand_avx(auArr_43,_DAT_1806e5860);
        uVal_26 = vmovq_avx(auArr_43);
        uVal_17 = (uint)(uVal_26 >> 0x2c) + (uint)((uVal_26 >> 0x2b & 1) != 0);
        lVal_23 = (uint64_t)(uVal_17 | 0x3fe00) << 0x2c;
        bFlag_25 = -1 < (int64_t)((uint64_t)(uVal_17 | 0x3fe00) << 0x2b);
        auArr_11 = vmovq_avx(lVal_23);
        auArr_15._8_8_ = _UNK_1806e5848;
        auArr_15._0_8_ = DAT_1806e5840;
        auArr_10 = vpor_avx(auArr_43,auArr_15);
        auArr_43 = vpshufd_avx(auArr_10,0xee);
        auArr_43 = vpsrlq_avx(auArr_43,0x34);
        auArr_16._4_12_ = _UNK_1806e5854;
        auArr_16._0_4_ = _DAT_1806e5850;
        auArr_43 = vpsubq_avx(auArr_43,auArr_16);
        auArr_43 = vcvtdq2pd_avx(auArr_43);
        auArr_10 = vsubsd_avx(auArr_11,auArr_10);
        auArr_11._8_8_ = 0;
        auArr_11._0_8_ = *(uint64_t *)(&DAT_1806e8e10 + (uint64_t)uVal_17 * 8);
        auArr_11 = vmulsd_avx(auArr_10,auArr_11);
        auArr_47._8_8_ = 0;
        auArr_47._0_8_ = DAT_1806e57a4;
        auArr_10._8_8_ = 0;
        auArr_10._0_8_ = DAT_1806e5840;
        auArr_10 = vfmadd213sd_fma(auArr_47,auArr_11,auArr_10);
        auArr_1._8_8_ = 0;
        auArr_1._0_8_ = DAT_1806e57dc;
        auArr_10 = vfmadd213sd_fma(auArr_10,auArr_11,auArr_1);
        auArr_10 = vmulsd_avx(auArr_11,auArr_10);
        auArr_2._8_8_ = 0;
        auArr_2._0_8_ = DAT_1806e57ac;
        auArr_43 = vmulsd_avx(auArr_43,auArr_2);
        auArr_3._8_8_ = 0;
        auArr_3._0_8_ = *(uint64_t *)(&DAT_1806e5870 + (uint64_t)uVal_17 * 8);
        auArr_43 = vaddsd_avx(auArr_43,auArr_3);
        auArr_43 = vsubsd_avx(auArr_43,auArr_10);
        auArr_42 = vmulsd_avx(auArr_42,auArr_43);
        auArr_4._8_8_ = 0;
        auArr_4._0_8_ = DAT_1806e57b4;
        vucomisd_avx(auArr_42,auArr_4);
        if (bFlag_25 && lVal_23 != 0) {
          auArr_42 = vmovd_avx(0x7f800000);
          auArr_42 = vorps_avx(auArr_42,auArr_48);
          uVal_26 = func_0x1806a4970(&DAT_1806e5870,0x7f800000,auArr_42._0_8_,DAT_1806e57a0);
          return uVal_26;
        }
        auArr_5._8_8_ = 0;
        auArr_5._0_8_ = DAT_1806e57bc;
        vucomisd_avx(auArr_42,auArr_5);
        if (bFlag_25 && lVal_23 != 0) {
          auArr_13._8_8_ = _UNK_1806e5838;
          auArr_13._0_8_ = _DAT_1806e5830;
          auArr_43 = vmulpd_avx(auArr_42,auArr_13);
          auArr_11 = vcvtpd2dq_avx(auArr_43);
          auArr_43 = vcvtdq2pd_avx(auArr_11);
          uVal_17 = vmovd_avx(auArr_11);
          auArr_6._8_8_ = 0;
          auArr_6._0_8_ = DAT_1806e57c4;
          auArr_43 = vfnmadd231sd_fma(auArr_42,auArr_43,auArr_6);
          auArr_7._8_8_ = 0;
          auArr_7._0_8_ = DAT_1806e5840;
          auArr_44._8_8_ = 0;
          auArr_44._0_8_ = DAT_1806e57cc;
          auArr_42 = vfmadd213sd_fma(auArr_44,auArr_43,auArr_7);
          auArr_8._8_8_ = 0;
          auArr_8._0_8_ = DAT_1806e57dc;
          auArr_42 = vfmadd213sd_fma(auArr_42,auArr_43,auArr_8);
          auArr_42 = vmulsd_avx(auArr_43,auArr_42);
          auArr_45._8_8_ = 0;
          auArr_45._0_8_ = *(uint64_t *)(&DAT_1806e8c10 + (uint64_t)(uVal_17 & 0x3f) * 8);
          auArr_43 = vfmadd213sd_fma(auArr_42,auArr_45,auArr_45);
          auArr_42 = vpsrad_avx(auArr_11,6);
          auArr_42 = vpsllq_avx(auArr_42,0x34);
          auArr_42 = vpaddq_avx(auArr_42,auArr_43);
          auArr_42 = vcvtsd2ss_avx(auArr_43,auArr_42);
          auArr_42 = vorps_avx(auArr_42,auArr_48);
          return auArr_42._0_8_;
        }
        auArr_42 = vpxor_avx(auArr_11,auArr_11);
        auArr_42 = vorps_avx(auArr_42,auArr_48);
        uVal_26 = func_0x1806a4970(&DAT_1806e5870,auArr_10._0_8_,auArr_42._0_8_,DAT_1806e5798);
        return uVal_26;
      }
      if (uVal_19 == 0) goto LAB_18068cda0;
      iVal_22 = vmovd_avx(auArr_42);
      uVal_19 = vmovd_avx(auArr_11);
      if (iVal_22 == 0x7f800000) {
        if ((int)uVal_19 < 0) goto LAB_18068cde0;
        goto LAB_18068ce00;
      }
      if (iVal_22 == -0x800000) {
        uVal_21 = uVal_19;
        if ((int)uVal_19 < 0) {
          uVal_21 = 0;
        }
        if (0 < (int)uVal_19) {
          uVal_21 = 0x7f800000;
        }
        uVal_19 = 0x80000000;
        if ((uVal_17 & 0x7f800000) < 0x4b000001) {
          auArr_42 = vroundss_avx(auArr_43,auArr_11,8);
          vucomiss_avx(auArr_42,auArr_11);
          if ((uVal_17 & 0x7f800000) == 0x4b000000) {
            uVal_17 = vcvtss2si_avx(auArr_11);
            if ((uVal_17 & 1) == 0) {
              uVal_19 = 0;
            }
          }
          else {
            uVal_19 = 0;
          }
        }
        else {
          uVal_19 = 0;
        }
        auArr_42 = vmovd_avx(uVal_19 | uVal_21);
        return auArr_42._0_8_;
      }
    }
    else {
      if (0x7f800000 < uVal_19) {
        if (0x7f800000 < uVal_21) {
          if (uVal_20 != 0xffc00000) {
            uVal_17 = vmovd_avx(auArr_42);
            auArr_42 = vmovd_avx(uVal_17 | 0x400000);
            uVal_26 = func_0x1806a4970(uVal_17 | 0x400000,uVal_33,auArr_42._0_8_,DAT_1806e5790);
            return uVal_26;
          }
          uVal_17 = vmovd_avx(auArr_11);
          auArr_42 = vmovd_avx(uVal_17 | 0x400000);
          uVal_26 = func_0x1806a4970(uVal_21,uVal_33,auArr_42._0_8_,DAT_1806e5790);
          return uVal_26;
        }
        if (uVal_20 != 0x3f800000) {
          uVal_17 = vmovd_avx(auArr_11);
          auArr_42 = vmovd_avx(uVal_17 | 0x400000);
          uVal_26 = func_0x1806a4970(uVal_33,uVal_33,auArr_42._0_8_,DAT_1806e578c);
          return uVal_26;
        }
        if (uVal_19 < 0x7fc00000) {
          auArr_42 = vmovd_avx(0x3f800000);
          uVal_26 = func_0x1806a4970(uVal_21,0x3f800000,auArr_42._0_8_,DAT_1806e578c);
          return uVal_26;
        }
LAB_18068cda0:
        auArr_42 = vmovd_avx(0x3f800000);
        return auArr_42._0_8_;
      }
      if (uVal_21 < 0x7f800001) {
        if (uVal_21 == 0x3f800000) {
          auArr_42 = vmovd_avx(0x3f800000);
          return auArr_42._0_8_;
        }
        iVal_22 = vmovd_avx(auArr_11);
        if (iVal_22 < 0) {
          uVal_18 = 0;
          if (uVal_21 < 0x3f800000) {
            uVal_18 = 0x7f800000;
          }
          auArr_42 = vmovd_avx(uVal_18);
          return auArr_42._0_8_;
        }
        if (uVal_21 < 0x3f800000) {
LAB_18068cde0:
          auArr_42 = vpxor_avx(auArr_42,auArr_42);
          return auArr_42._0_8_;
        }
LAB_18068ce00:
        auArr_42 = vmovd_avx(0x7f800000);
        return auArr_42._0_8_;
      }
    }
    uVal_17 = vmovd_avx(auArr_42);
    auArr_42 = vmovd_avx(uVal_17 | 0x400000);
    uVal_26 = func_0x1806a4970(uVal_17 | 0x400000,uVal_33,auArr_42._0_8_,DAT_1806e5788);
    return uVal_26;
  }
  auArr_36._16_16_ = in_YMM1._16_16_;
  auArr_36._0_12_ = in_YMM1._0_12_;
  auArr_36._12_4_ = in_YMM0._4_4_;
  auArr_35._12_20_ = auArr_36._12_20_;
  auArr_35._0_8_ = in_YMM1._0_8_;
  auArr_35._8_4_ = in_YMM1._4_4_;
  fVal_37 = in_YMM0._0_4_;
  auArr_34._8_24_ = auArr_35._8_24_;
  fVal_30 = in_YMM1._0_4_;
  auArr_34._0_8_ = CONCAT44(fVal_37,fVal_30);
  uVal_26 = 0;
  uVal_17 = (uint)fVal_30 & 0x7fffffff;
  uVal_19 = (uint)fVal_37 & 0x7fffffff;
  auArr_29._16_16_ = in_YMM0._16_16_;
  auArr_42 = auArr_34._0_16_;
  if (0x7f7fffff < uVal_17) {
    if (0x7f800000 < uVal_17) {
      if (0x7f800000 < uVal_19) {
        if (fVal_37 != -NAN) {
          uVal_26 = func_0x1806a4970((uint)fVal_37 | 0x400000,auArr_34._0_8_,param_3,DAT_1806e5790);
          return uVal_26;
        }
        uVal_26 = func_0x1806a4970(uVal_19,auArr_34._0_8_,param_3,DAT_1806e5790);
        return uVal_26;
      }
      if (fVal_37 == 1.0) {
        if (0x7fbfffff < uVal_17) {
          return 0x3f800000;
        }
        uVal_26 = func_0x1806a4970(uVal_19,0x3f800000,param_3,DAT_1806e578c);
        return uVal_26;
      }
      uVal_26 = func_0x1806a4970(uVal_19,auArr_34._0_8_,param_3,DAT_1806e578c);
      return uVal_26;
    }
    if (uVal_19 < 0x7f800001) {
      if (uVal_19 == 0x3f800000) {
        return 0x3f800000;
      }
      if ((int)fVal_30 < 0) {
        bFlag_25 = (in_YMM0 & (uint8_t  [32])0x7fffffff) != (uint8_t  [32])0x0;
        if (bFlag_25) {
          uVal_17 = 0;
          if (uVal_19 < 0x3f800000) {
            uVal_17 = 0x7f800000;
          }
          uVal_26 = (uint64_t)uVal_17;
          if (!bFlag_25) {
            uVal_26 = func_0x1806a4970(uVal_19,auArr_34._0_8_,0x7f800000,DAT_1806e5784);
          }
          return uVal_26;
        }
      }
      else if (uVal_19 < 0x3f800000) {
        return 0;
      }
      return 0x7f800000;
    }
LAB_18068c740:
    uVal_26 = func_0x1806a4970((uint)fVal_37 | 0x400000,auArr_34._0_8_,param_3,DAT_1806e5788);
    return uVal_26;
  }
  if (uVal_17 < 0x3f800001) {
    if ((in_YMM1 & (uint8_t  [32])0x7fffffff) == (uint8_t  [32])0x0) {
      if (uVal_19 < 0x7f800001) {
        return 0x3f800000;
      }
      if (0x7fbfffff < uVal_19) {
        return 0x3f800000;
      }
      uVal_26 = func_0x1806a4970(uVal_19,uVal_19 | 0x400000,param_3,DAT_1806e5788);
      return uVal_26;
    }
    param_2 = auArr_35._0_8_ & 0xffffffff;
    if (fVal_30 == 1.0) {
      if (((uint)fVal_37 & 0x7fffffff) < 0x7f800001) {
        return in_YMM0._0_8_;
      }
      uVal_26 = func_0x1806a4970(uVal_19,(uint)fVal_37 | 0x400000,param_3,DAT_1806e5788);
      return uVal_26;
    }
  }
  if (0x7f7fffff < uVal_19) {
    if ((in_YMM1 & (uint8_t  [32])0x7fffffff) == (uint8_t  [32])0x0) {
      return 0x3f800000;
    }
    if (fVal_37 == INFINITY) {
      if (-1 < (int)fVal_30) {
        return 0x7f800000;
      }
      return 0;
    }
    if (fVal_37 == -INFINITY) {
      fVal_37 = fVal_30;
      if ((int)fVal_30 < 0) {
        fVal_37 = 0.0;
      }
      if (0 < (int)fVal_30) {
        fVal_37 = INFINITY;
      }
      uVal_17 = 0x80000000;
      if (((uint)fVal_30 & 0x7f800000) < 0x4b000001) {
        if (DAT_18083d260 < 2) {
          fVal_39 = (float)(int)ROUND(fVal_30);
        }
        else {
          auArr_42 = roundss(auArr_43,auArr_42,8);
          fVal_39 = auArr_42._0_4_;
        }
        if ((!NAN(fVal_39) && !NAN(fVal_30)) && fVal_39 != fVal_30) {
          uVal_17 = 0;
        }
        if ((fVal_39 == fVal_30) && (((uint)ROUND(fVal_30) & 1) == 0)) {
          uVal_17 = 0;
        }
      }
      else {
        uVal_17 = 0;
      }
      return (uint64_t)(uVal_17 | (uint)fVal_37);
    }
    goto LAB_18068c740;
  }
  auArr_29._0_8_ = (double)fVal_30;
  auArr_29._8_8_ = (double)fVal_37;
  if ((int)fVal_37 < 0x3f880000) {
    if ((int)fVal_37 < 1) {
      if ((in_YMM0 & (uint8_t  [32])0x7fffffff) == (uint8_t  [32])0x0) {
        fVal_39 = fVal_30;
        if ((int)fVal_30 < 0) {
          fVal_39 = INFINITY;
        }
        iVal_22 = 0;
        if ((int)fVal_30 < 0) {
          iVal_22 = 0x7f800000;
        }
        if (0 < (int)fVal_30) {
          fVal_39 = 0.0;
        }
        fVal_24 = (float)((uint)fVal_30 & 0x7f800000);
        uVal_17 = 0x80000000;
        if ((uint)fVal_24 < 0x4b000001) {
          if (DAT_18083d260 < 2) {
            fVal_24 = ROUND(fVal_30);
            fVal_38 = (float)(int)fVal_24;
          }
          else {
            auArr_42 = roundss(auArr_43,auArr_42,8);
            fVal_38 = auArr_42._0_4_;
          }
          if ((!NAN(fVal_38) && !NAN(fVal_30)) && fVal_38 != fVal_30) {
            uVal_17 = 0;
          }
          if (fVal_38 == fVal_30) {
            fVal_24 = (float)((uint)ROUND(fVal_30) >> 1 | (uint)(fVal_38 < fVal_30) << 0x1f);
            if (((uint)ROUND(fVal_30) & 1) == 0) {
              uVal_17 = 0;
            }
            else {
              uVal_17 = (uint)fVal_37 & 0x80000000;
            }
          }
        }
        else {
          uVal_17 = 0;
        }
        uVal_26 = (uint64_t)(uVal_17 | (uint)fVal_39);
        if (iVal_22 != 0) {
          uVal_26 = func_0x1806a4970(uVal_17 | (uint)fVal_39,auArr_34._0_8_,fVal_24,DAT_1806e5784);
        }
        return uVal_26;
      }
      if (((uint)fVal_30 & 0x7f800000) < 0x4b000001) {
        if (DAT_18083d260 < 2) {
          fVal_37 = (float)(int)ROUND(fVal_30);
        }
        else {
          auArr_42 = roundss(auArr_43,auArr_42,8);
          fVal_37 = auArr_42._0_4_;
        }
        if (fVal_37 != fVal_30) {
          uVal_26 = func_0x1806a4970(uVal_19,0xffc00000,param_3,DAT_1806e5794);
          return uVal_26;
        }
        if (((uint)ROUND(fVal_30) & 1) != 0) {
          uVal_26 = (uint64_t)DAT_1806e57ec;
        }
      }
    }
    dVal_31 = auArr_29._8_8_ - DAT_1806e57dc;
    param_2 = (uint64_t)dVal_31 & 0x7fffffffffffffff;
    if (param_2 < DAT_1806e57d4) {
      dVal_49 = dVal_31 / (dVal_31 + DAT_1806e57e4);
      dVal_40 = dVal_49 + dVal_49;
      dVal_32 = dVal_40 * dVal_40;
      auArr_46._8_4_ = SUB84(dVal_32,0);
      auArr_46._0_8_ = dVal_32;
      auArr_46._12_4_ = (int)((uint64_t)dVal_32 >> 0x20);
      dVal_31 = dVal_31 + ((dVal_40 * dVal_32 * (dVal_32 * _DAT_1806e5800 + _DAT_1806e5810) +
                         dVal_32 * dVal_32 * dVal_40 * dVal_32 *
                         (auArr_46._8_8_ * _UNK_1806e5808 + _UNK_1806e5818)) - dVal_49 * dVal_31);
      goto LAB_18068c1ce;
    }
  }
  auArr_41._8_4_ = SUB84(auArr_29._8_8_,0);
  auArr_41._0_8_ = auArr_29._8_8_;
  auArr_41._12_4_ = (int)((uint64_t)auArr_29._8_8_ >> 0x20);
  auArr_41 = auArr_41 & _DAT_1806e5860;
  uVal_17 = (auArr_41._4_4_ >> 0xc) + (uint)((auArr_41._0_8_ >> 0x2b & 1) != 0);
  auArr_14._8_8_ = _UNK_1806e5848;
  auArr_14._0_8_ = DAT_1806e5840;
  dVal_31 = ((double)((uint64_t)(uVal_17 | 0x3fe00) << 0x2c) - SUB168(auArr_41 | auArr_14,0)) *
           *(double *)(&DAT_1806e8e10 + (uint64_t)uVal_17 * 8);
  dVal_31 = ((double)((SUB164(auArr_41 | auArr_14,0xc) >> 0x14) - _DAT_1806e5850) * DAT_1806e57ac +
           *(double *)(&DAT_1806e5870 + (uint64_t)uVal_17 * 8)) -
           (dVal_31 * dVal_31 * (DAT_1806e57a4 * dVal_31 + DAT_1806e5840) + dVal_31);
LAB_18068c1ce:
  auArr_27._8_24_ = auArr_29._8_24_;
  dVal_31 = auArr_29._0_8_ * dVal_31;
  if (DAT_1806e57b4 < dVal_31) {
    uVal_26 = func_0x1806a4970(dVal_31,0x7f800000,param_3,DAT_1806e57a0);
    return uVal_26;
  }
  if (dVal_31 != DAT_1806e57bc) {
    uVal_17 = (uint)(dVal_31 * _DAT_1806e5830);
    dVal_31 = dVal_31 - (double)uVal_17 * DAT_1806e57c4;
    auArr_27._0_8_ =
         (dVal_31 * dVal_31 * (DAT_1806e57cc * dVal_31 + DAT_1806e5840) + dVal_31) *
         *(double *)(&DAT_1806e8c10 + (uint64_t)(uVal_17 & 0x3f) * 8) +
         *(double *)(&DAT_1806e8c10 + (uint64_t)(uVal_17 & 0x3f) * 8);
    auArr_28._4_28_ = auArr_27._4_28_;
    auArr_28._0_4_ =
         (float)(double)(((uint64_t)(uint)((int)uVal_17 >> 6) << 0x34) + (int64_t)auArr_27._0_8_);
    return auArr_28._0_8_ | uVal_26;
  }
  uVal_26 = func_0x1806a4970(dVal_31,param_2,param_3,DAT_1806e5798);
  return uVal_26;
}

// func_0x18068cf88
uint func_0x18068cf88(void)
{
  int64_t lVal_1;
  uint uVal_2;
  
  lVal_1 = __vcrt_getptd();
  uVal_2 = *(int *)(lVal_1 + 0x28) * 0x343fd + 0x269ec3;
  *(uint *)(lVal_1 + 0x28) = uVal_2;
  return uVal_2 >> 0x10 & 0x7fff;
}

// rand_s
/* Library Function - Single Match
    rand_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    rand_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
uint32_t rand_s(uint32_t *param_1)
{
  char ch_1;
  uint32_t uVal_2;
  uint32_t *pU64_3;
  
  if (param_1 == (uint32_t *)0x0) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
    func_0x180684970();
    uVal_2 = 0x16;
  }
  else {
    *param_1 = 0;
    ch_1 = func_0x1806971e4(param_1,4);
    if (ch_1 == '\0') {
      pU64_3 = (uint32_t *)func_0x1806823dc();
      *pU64_3 = 0xc;
      pU64_3 = (uint32_t *)func_0x1806823dc();
      uVal_2 = *pU64_3;
    }
    else {
      uVal_2 = 0;
    }
  }
  return uVal_2;
}

// _realloc_base
LPVOID _realloc_base(LPVOID param_1,uint64_t param_2)
{
  int iVal_1;
  LPVOID pVoid_2;
  uint32_t *pU64_3;
  
  if (param_1 == (LPVOID)0x0) {
    pVoid_2 = (LPVOID)_malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      func_0x180695dd0();
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pVoid_2 = HeapReAlloc(DAT_180842c78,0,param_1,param_2);
          if (pVoid_2 != (LPVOID)0x0) {
            return pVoid_2;
          }
          iVal_1 = func_0x1806a68f0();
        } while ((iVal_1 != 0) && (iVal_1 = func_0x180681550(param_2), iVal_1 != 0));
      }
      pU64_3 = (uint32_t *)func_0x1806823dc();
      *pU64_3 = 0xc;
    }
    pVoid_2 = (LPVOID)0x0;
  }
  return pVoid_2;
}

// func_0x18068d008
uint64_t func_0x18068d008(int64_t param_1)
{
  int iVal_1;
  uint uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint8_t local_res8 [8];
  int64_t local_58;
  int64_t local_50;
  char local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  char local_10;
  
  if (param_1 == 0) {
    uVal_3 = func_0x1806a4b5c();
  }
  else {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = '\0';
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_58,(__crt_locale_pointers *)0x0);
    uVal_4 = 0xfde9;
    if (*(int *)(local_50 + 0xc) == 0xfde9) {
      if (local_40 != '\0') {
        *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVal_1 = func_0x180696a9c();
      if (iVal_1 == 0) {
        if (local_40 != '\0') {
          *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
        }
        uVal_4 = 1;
      }
      else {
        if (local_40 != '\0') {
          *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
        }
        uVal_4 = 0;
      }
    }
    iVal_1 = func_0x18067b86c(param_1,&local_38,local_res8,uVal_4);
    if (iVal_1 == 0) {
      uVal_2 = func_0x1806a4b5c(local_28);
      uVal_3 = (uint64_t)uVal_2;
    }
    else {
      uVal_3 = 0xffffffff;
    }
    if (local_10 != '\0') {
      func_0x180695dd0(local_28);
    }
  }
  return uVal_3;
}

// func_0x18068d0ec
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
void func_0x18068d0ec(void)
{
  int64_t lVal_1;
  
  lVal_1 = __vcrt_getptd();
  if (*(func_ptr_t *)(lVal_1 + 0x18) != (func_ptr_t )0x0) {
    (**(func_ptr_t *)(lVal_1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// setlocale
/* Library Function - Single Match
    setlocale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    setlocale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
char * __cdecl setlocale(int _Category,char *_Locale)
{
  char *fnPtr_1;
  int local_res8 [2];
  char *local_res10;
  uint8_t local_res18 [8];
  uint32_t local_res20 [2];
  uint32_t local_28 [2];
  int *local_20;
  char **local_18;
  
  local_res8[0] = _Category;
  local_res10 = _Locale;
  func_0x180697310();
  local_20 = local_res8;
  local_18 = &local_res10;
  local_res20[0] = 4;
  local_28[0] = 4;
  fnPtr_1 = (char *)operator()<>(local_res18,local_28,&local_20,local_res20);
  return fnPtr_1;
}

// func_0x18068d158
uint32_t * func_0x18068d158(int **param_1)
{
  int64_t lVal_1;
  int *pInt_2;
  int iVal_3;
  int iVal_4;
  wchar_t *pWStr_5;
  uint32_t *_Locale;
  int64_t lVal_6;
  uint32_t *pU64_7;
  
  iVal_4 = **param_1;
  if (*(int64_t *)param_1[1] == 0) {
    pWStr_5 = _wsetlocale(iVal_4,(wchar_t *)0x0);
  }
  else {
    iVal_3 = func_0x1806a4b84();
    if ((iVal_3 == 0x16) || (iVal_3 == 0x22)) {
LAB_18068d3cb:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    _Locale = (uint32_t *)_calloc_base(0,2);
    pU64_7 = (uint32_t *)0x0;
    if (_Locale == (uint32_t *)0x0) goto LAB_18068d1df;
    iVal_3 = func_0x1806a4b84();
    if (iVal_3 != 0) {
      if ((iVal_3 == 0x16) || (pU64_7 = _Locale, iVal_3 == 0x22)) goto LAB_18068d3cb;
      goto LAB_18068d1df;
    }
    pWStr_5 = _wsetlocale(iVal_4,(wchar_t *)_Locale);
    func_0x180695dd0(_Locale);
  }
  if (pWStr_5 == (wchar_t *)0x0) {
    return (uint32_t *)0x0;
  }
  lVal_6 = __vcrt_getptd();
  lVal_1 = *(int64_t *)(lVal_6 + 0x90);
  iVal_4 = func_0x1806a4f44();
  if (iVal_4 == 0) {
    pU64_7 = (uint32_t *)_malloc_base();
    if (pU64_7 == (uint32_t *)0x0) {
      return (uint32_t *)0x0;
    }
    iVal_4 = func_0x1806a4f44();
    if (iVal_4 == 0) {
      pInt_2 = *(int **)((int64_t)**param_1 * 0x20 + 0x30 + lVal_1);
      if (pInt_2 != (int *)0x0) {
        LOCK();
        iVal_4 = *pInt_2;
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (iVal_4 == 1) {
          func_0x180695dd0(*(uint64_t *)((int64_t)**param_1 * 0x20 + 0x30 + lVal_1));
          *(uint64_t *)((int64_t)**param_1 * 0x20 + 0x30 + lVal_1) = 0;
        }
      }
      if (((DAT_18083e070 & *(uint *)(lVal_6 + 0x3a8)) == 0) &&
         (pInt_2 = *(int **)((int64_t)**param_1 * 0x20 + 0x30 + lVal_1), pInt_2 != (int *)0x0)) {
        LOCK();
        iVal_4 = *pInt_2;
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (iVal_4 == 1) {
          func_0x180695dd0(*(uint64_t *)((int64_t)**param_1 * 0x20 + 0x30 + lVal_1));
          *(uint64_t *)((int64_t)**param_1 * 0x20 + 0x30 + lVal_1) = 0;
        }
      }
      *pU64_7 = *(uint32_t *)(lVal_1 + 0x10);
      *(uint32_t **)((int64_t)**param_1 * 0x20 + 0x30 + lVal_1) = pU64_7;
      *(uint32_t **)(((int64_t)**param_1 + 1) * 0x20 + lVal_1) = pU64_7 + 1;
      return pU64_7 + 1;
    }
    if ((iVal_4 != 0x16) && (iVal_4 != 0x22)) {
LAB_18068d1df:
      func_0x180695dd0(pU64_7);
      return (uint32_t *)0x0;
    }
  }
  else if ((iVal_4 != 0x16) && (iVal_4 != 0x22)) {
    return (uint32_t *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// operator()<>
/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl __crt_seh_guarded_call<char * __ptr64>::operator()<class
   <lambda_41e84717acc955b55e9d0d529e507b68>,class <lambda_b37934c380d97b75fd242ea49540127a> &
   __ptr64,class <lambda_bb6db9f9ac473960206e0d4b942b5506> >(class
   <lambda_41e84717acc955b55e9d0d529e507b68> && __ptr64,class
   <lambda_b37934c380d97b75fd242ea49540127a> & __ptr64,class
   <lambda_bb6db9f9ac473960206e0d4b942b5506> && __ptr64) __ptr64
    public: char * __ptr64 __cdecl __crt_seh_guarded_call<char * __ptr64>::operator()<class
   <lambda_9bd929c17696992ce54f1d748594fc62>,class <lambda_082c17da81b0962e08c0587ee0fac50c> &
   __ptr64,class <lambda_9c08ac857f4975304d44e9f601d9b878> >(class
   <lambda_9bd929c17696992ce54f1d748594fc62> && __ptr64,class
   <lambda_082c17da81b0962e08c0587ee0fac50c> & __ptr64,class
   <lambda_9c08ac857f4975304d44e9f601d9b878> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl __crt_seh_guarded_call<char * __ptr64>::operator()<class
   <lambda_41e84717acc955b55e9d0d529e507b68>,class <lambda_b37934c380d97b75fd242ea49540127a> &
   __ptr64,class <lambda_bb6db9f9ac473960206e0d4b942b5506> >(class
   <lambda_41e84717acc955b55e9d0d529e507b68> && __ptr64,class
   <lambda_b37934c380d97b75fd242ea49540127a> & __ptr64,class
   <lambda_bb6db9f9ac473960206e0d4b942b5506> && __ptr64) __ptr64
    public: char * __ptr64 __cdecl __crt_seh_guarded_call<char * __ptr64>::operator()<class
   <lambda_9bd929c17696992ce54f1d748594fc62>,class <lambda_082c17da81b0962e08c0587ee0fac50c> &
   __ptr64,class <lambda_9c08ac857f4975304d44e9f601d9b878> >(class
   <lambda_9bd929c17696992ce54f1d748594fc62> && __ptr64,class
   <lambda_082c17da81b0962e08c0587ee0fac50c> & __ptr64,class
   <lambda_9c08ac857f4975304d44e9f601d9b878> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint64_t
operator()<>(uint64_t param_1,uint32_t *param_2,uint64_t param_3,uint32_t *param_4)
{
  uint64_t uVal_1;
  
  FID_conflict___acrt_lock(*param_2);
  uVal_1 = func_0x18068d158(param_3);
  FID_conflict___acrt_lock(*param_4);
  return uVal_1;
}

// func_0x18068d438
uint32_t func_0x18068d438(int64_t param_1,uint64_t param_2,int param_3,int64_t param_4)
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  int64_t lVal_3;
  int local_res8 [2];
  int64_t local_res10;
  uint8_t local_res18 [8];
  int64_t local_res20;
  int64_t local_98 [2];
  uint8_t local_88;
  uint32_t local_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  char local_70;
  uint32_t local_6c;
  char local_68;
  uint32_t local_64;
  char local_60;
  uint64_t local_58;
  int64_t local_50;
  int64_t local_48;
  int64_t *local_40;
  int64_t *local_38;
  int64_t *local_30;
  int *local_28;
  uint64_t *local_20;
  
  local_98[0] = 0;
  local_70 = DAT_1808429bc == 0;
  local_88 = 0;
  local_68 = '\0';
  local_60 = '\0';
  if ((bool)local_70) {
    local_80 = PTR_PTR_DAT_18083d808._0_4_;
    uStack_7c = PTR_PTR_DAT_18083d808._4_4_;
    uStack_78 = PTR_DAT_18083d810._0_4_;
    uStack_74 = PTR_DAT_18083d810._4_4_;
  }
  local_res8[0] = param_3;
  local_res10 = param_4;
  local_res20 = param_1;
  local_58 = param_2;
  if ((param_1 == 0) ||
     ((param_3 != 4 && (((param_3 != 0 && (param_3 != 0x40)) || (0x7ffffffd < param_4 - 2U)))))) {
    local_68 = '\x01';
    local_6c = 0x16;
    func_0x180684b50(0,0,0,0,0,local_98);
    uVal_2 = 0xffffffff;
  }
  else {
    local_40 = &local_res10;
    local_38 = &local_res20;
    local_30 = local_98;
    local_28 = local_res8;
    local_20 = &local_58;
    local_50 = param_1;
    local_48 = param_1;
    uVal_2 = operator()<>(local_res18,&local_48,&local_40,&local_50);
  }
  uVal_1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVal_3 = func_0x18067e900(local_98);
    *(uint32_t *)(lVal_3 + 0x20) = uVal_1;
  }
  if (local_60 != '\0') {
    lVal_3 = func_0x18067e900(local_98);
    *(uint32_t *)(lVal_3 + 0x24) = local_64;
  }
  return uVal_2;
}

// func_0x18068d570
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x18068d570(uint64_t **param_1)
{
  uint64_t uVal_1;
  uint64_t *pU64_2;
  uint64_t uVal_3;
  uint32_t uVal_4;
  
  uVal_1 = **param_1;
  func_0x18068a9e8(*param_1[1],param_1[2]);
  __acrt_stdio_free_buffer_nolock(*param_1[1]);
  LOCK();
  *(uint *)(*param_1[1] + 0x14) = *(uint *)(*param_1[1] + 0x14) & 0xfffff81f;
  UNLOCK();
  if ((*(byte *)param_1[3] & 4) == 0) {
    uVal_3 = *param_1[4];
    uVal_4 = (uint32_t)(uVal_1 & 0xfffffffffffffffe);
    if (uVal_3 == 0) {
      uVal_1 = _calloc_base(uVal_1 & 0xfffffffffffffffe,1);
      func_0x180695dd0(0);
      if (uVal_1 == 0) {
        _DAT_1808425d8 = _DAT_1808425d8 + 1;
        return 0xffffffff;
      }
      pU64_2 = (uint64_t *)*param_1[1];
      LOCK();
      *(uint *)((int64_t)pU64_2 + 0x14) = *(uint *)((int64_t)pU64_2 + 0x14) | 0x140;
      UNLOCK();
      *(uint32_t *)(pU64_2 + 4) = uVal_4;
      *pU64_2 = uVal_1;
      pU64_2[1] = uVal_1;
      goto LAB_18068d641;
    }
    pU64_2 = (uint64_t *)*param_1[1];
    LOCK();
    *(uint *)((int64_t)pU64_2 + 0x14) = *(uint *)((int64_t)pU64_2 + 0x14) | 0x180;
    UNLOCK();
    *(uint32_t *)(pU64_2 + 4) = uVal_4;
  }
  else {
    pU64_2 = (uint64_t *)*param_1[1];
    uVal_3 = (int64_t)pU64_2 + 0x1c;
    LOCK();
    *(uint *)((int64_t)pU64_2 + 0x14) = *(uint *)((int64_t)pU64_2 + 0x14) | 0x400;
    UNLOCK();
    *(uint32_t *)(pU64_2 + 4) = 2;
  }
  *pU64_2 = uVal_3;
  pU64_2[1] = uVal_3;
LAB_18068d641:
  *(uint32_t *)(pU64_2 + 2) = 0;
  return 0;
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
  uVal_1 = func_0x18068d570(param_3);
  func_0x18067e330(*param_4);
  return uVal_1;
}

// func_0x18068d698
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18068d698(uint64_t param_1)
{
  _DAT_1808429d8 = param_1;
  _DAT_1808429e0 = param_1;
  DAT_1808429e8 = param_1;
  _DAT_1808429f0 = param_1;
  return;
}

// __acrt_get_sigabrt_handler
/* Library Function - Single Match
    __acrt_get_sigabrt_handler
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_get_sigabrt_handler
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_get_sigabrt_handler(void)
{
  uint8_t local_res8 [8];
  uint32_t local_res10 [2];
  uint32_t local_res18 [4];
  
  local_res10[0] = 3;
  local_res18[0] = 3;
  func_0x18068d944(local_res8,local_res18,local_res8,local_res10);
  return;
}

// func_0x18068d6e8
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
uint64_t func_0x18068d6e8(uint param_1)
{
  bool bFlag_1;
  uint32_t *pU64_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  byte bFlag_6;
  int64_t lVal_7;
  func_ptr_t fnPtr_8;
  func_ptr_t *ptr2_Char_9;
  int64_t *pLong_10;
  uint32_t local_res10;
  int64_t *pLong_11;
  
  pLong_11 = (int64_t *)0x0;
  pLong_10 = (int64_t *)0x0;
  local_res10 = 0;
  bFlag_1 = true;
  if (param_1 == 2) {
LAB_18068d73f:
    if (param_1 == 2) {
      ptr2_Char_9 = (func_ptr_t *)&DAT_1808429d8;
    }
    else if (param_1 == 6) {
LAB_18068d7e1:
      ptr2_Char_9 = (func_ptr_t *)&DAT_1808429e8;
      pLong_10 = pLong_11;
    }
    else if (param_1 == 0xf) {
      ptr2_Char_9 = (func_ptr_t *)&DAT_1808429f0;
    }
    else if (param_1 == 0x15) {
      ptr2_Char_9 = (func_ptr_t *)&DAT_1808429e0;
      pLong_10 = pLong_11;
    }
    else {
      if (param_1 == 0x16) goto LAB_18068d7e1;
      ptr2_Char_9 = (func_ptr_t *)0x0;
      pLong_10 = pLong_11;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_18068d76f;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_18068d7c1;
      }
      goto LAB_18068d73f;
    }
LAB_18068d76f:
    pLong_10 = (int64_t *)func_0x1806960c8();
    if (pLong_10 == (int64_t *)0x0) {
      return 0xffffffff;
    }
    lVal_4 = *pLong_10;
    lVal_3 = DAT_1806e4bf0 * 0x10 + lVal_4;
    for (; lVal_4 != lVal_3; lVal_4 = lVal_4 + 0x10) {
      if (*(uint *)(lVal_4 + 4) == param_1) goto LAB_18068d7bc;
    }
    lVal_4 = 0;
LAB_18068d7bc:
    if (lVal_4 == 0) {
LAB_18068d7c1:
      pU64_2 = (uint32_t *)func_0x1806823dc();
      *pU64_2 = 0x16;
      func_0x180684970();
      return 0xffffffff;
    }
    ptr2_Char_9 = (func_ptr_t *)(lVal_4 + 8);
    bFlag_1 = false;
  }
  lVal_4 = 0;
  if (bFlag_1) {
    FID_conflict___acrt_lock(3);
  }
  fnPtr_8 = *ptr2_Char_9;
  if (bFlag_1) {
    bFlag_6 = (byte)DAT_18083cf40 & 0x3f;
    fnPtr_8 = (func_ptr_t )(((uint64_t)fnPtr_8 ^ (uint64_t)DAT_18083cf40) >> bFlag_6 |
                     ((uint64_t)fnPtr_8 ^ (uint64_t)DAT_18083cf40) << 0x40 - bFlag_6);
  }
  if (fnPtr_8 == (func_ptr_t )0x1) goto LAB_18068d8ca;
  if (fnPtr_8 == (func_ptr_t )0x0) {
    if (bFlag_1) {
      FID_conflict___acrt_lock(3);
    }
    func_0x180681654(3);
    fnPtr_8 = (func_ptr_t )swi(3);
    uVal_5 = (*fnPtr_8)();
    return uVal_5;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVal_4 = pLong_10[1];
    pLong_10[1] = 0;
    if (param_1 == 8) {
      lVal_3 = __vcrt_getptd();
      local_res10 = *(uint32_t *)(lVal_3 + 0x10);
      lVal_3 = __vcrt_getptd();
      *(uint32_t *)(lVal_3 + 0x10) = 0x8c;
      goto LAB_18068d882;
    }
  }
  else {
LAB_18068d882:
    if (param_1 == 8) {
      lVal_3 = DAT_1806e4bf8 * 0x10 + *pLong_10;
      lVal_7 = DAT_1806e4c00 * 0x10 + lVal_3;
      for (; lVal_3 != lVal_7; lVal_3 = lVal_3 + 0x10) {
        *(uint64_t *)(lVal_3 + 8) = 0;
      }
      goto LAB_18068d8ca;
    }
  }
  *ptr2_Char_9 = DAT_18083cf40;
LAB_18068d8ca:
  if (bFlag_1) {
    FID_conflict___acrt_lock(3);
  }
  if (fnPtr_8 != (func_ptr_t )0x1) {
    if (param_1 == 8) {
      lVal_3 = __vcrt_getptd();
      (*fnPtr_8)(8,*(uint32_t *)(lVal_3 + 0x10));
    }
    else {
      (*fnPtr_8)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (pLong_10[1] = lVal_4, param_1 == 8)) {
      lVal_4 = __vcrt_getptd();
      *(uint32_t *)(lVal_4 + 0x10) = local_res10;
    }
  }
  return 0;
}

// func_0x18068d944
uint64_t func_0x18068d944(uint64_t param_1,uint32_t *param_2,uint64_t param_3, uint32_t *param_4)
{
  byte bFlag_1;
  uint64_t uVal_2;
  
  FID_conflict___acrt_lock(*param_2);
  bFlag_1 = (byte)DAT_18083cf40 & 0x3f;
  uVal_2 = DAT_1808429e8 ^ DAT_18083cf40;
  FID_conflict___acrt_lock(*param_4);
  return uVal_2 >> bFlag_1 | uVal_2 << 0x40 - bFlag_1;
}

// func_0x18068dd00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x18068dd00(void)
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
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
  uint8_t auArr_15 [16];
  bool bFlag_16;
  bool bFlag_17;
  uint8_t auArr_18 [16];
  uint8_t auArr_19 [16];
  uint8_t auArr_20 [16];
  uint8_t auArr_21 [16];
  uint8_t auArr_22 [16];
  uint8_t auArr_23 [16];
  uint8_t auArr_24 [16];
  uint8_t auArr_25 [16];
  uint8_t auArr_26 [16];
  uint uVal_27;
  uint64_t uVal_28;
  uint64_t uVal_29;
  sbyte sz_30;
  byte bFlag_31;
  uint64_t uVal_32;
  int64_t lVal_33;
  int64_t lVal_34;
  uint64_t uVal_35;
  double dVal_36;
  int64_t lVal_37;
  uint64_t uVal_38;
  uint64_t uVal_39;
  uint8_t auArr_41 [16];
  uint64_t uVal_40;
  uint8_t auArr_42 [32];
  uint8_t auArr_43 [32];
  uint8_t auArr_44 [32];
  uint8_t auArr_45 [32];
  uint8_t auArr_46 [32];
  uint8_t auArr_47 [32];
  uint8_t extraout_var [24];
  uint8_t auArr_48 [32];
  uint8_t auArr_49 [32];
  uint8_t auArr_50 [32];
  uint8_t in_YMM0 [32];
  uint8_t auArr_51 [16];
  uint8_t auArr_52 [16];
  uint8_t auArr_53 [16];
  double dVal_54;
  uint8_t auArr_55 [16];
  uint8_t auArr_56 [16];
  double dVal_57;
  double dVal_58;
  uint8_t auArr_59 [16];
  uint local_38 [2];
  uint8_t local_30 [48];
  
  auArr_41 = in_YMM0._0_16_;
  if (DAT_180843124 != 0) {
    uVal_27 = vmovd_avx(auArr_41);
    uVal_27 = uVal_27 & 0x7fffffff;
    if (0x7f7fffff < uVal_27) {
      uVal_40 = func_0x1806a3070();
      return uVal_40;
    }
    auArr_20 = vcvtss2sd_avx(auArr_41,auArr_41);
    uVal_35 = vmovq_avx(auArr_20);
    if (uVal_27 < 0x3f490fdc) {
      if (uVal_27 < 0x3c000000) {
        if (uVal_27 < 0x39000000) {
          auArr_41 = vmulss_avx(auArr_41,ZEXT416(DAT_1806e61a0));
          vaddss_avx(auArr_41,ZEXT416(DAT_1806e61a8));
          return in_YMM0._0_8_;
        }
        auArr_41 = vmulsd_avx(auArr_20,auArr_20);
        auArr_41 = vmulsd_avx(auArr_41,auArr_20);
        auArr_1._8_8_ = 0;
        auArr_1._0_8_ = DAT_1806e60f0;
        auArr_41 = vfnmadd132sd_fma(auArr_41,auArr_20,auArr_1);
      }
      else {
        auArr_51._8_8_ = 0;
        auArr_51._0_8_ = DAT_1806e8a10;
        auArr_41 = vmulsd_avx(auArr_20,auArr_20);
        auArr_2._8_8_ = 0;
        auArr_2._0_8_ = DAT_1806e8a18;
        auArr_59 = vfmadd231sd_fma(auArr_51,auArr_41,auArr_2);
        auArr_3._8_8_ = 0;
        auArr_3._0_8_ = DAT_1806e8a08;
        auArr_59 = vfmadd213sd_fma(auArr_59,auArr_41,auArr_3);
        auArr_4._8_8_ = 0;
        auArr_4._0_8_ = DAT_1806e8a00;
        auArr_59 = vfmadd213sd_fma(auArr_59,auArr_41,auArr_4);
        auArr_41 = vmulsd_avx(auArr_20,auArr_41);
        auArr_41 = vfmadd231sd_fma(auArr_20,auArr_59,auArr_41);
      }
    }
    else {
      auArr_41 = vmovq_avx(uVal_35 & 0x7fffffffffffffff);
      if (uVal_27 < 0x4b800456) {
        auArr_26._8_8_ = _UNK_1806e60d8;
        auArr_26._0_8_ = DAT_1806e60d0;
        auArr_5._8_8_ = 0;
        auArr_5._0_8_ = DAT_1806e60c0;
        auArr_59 = vfmadd213sd_fma(auArr_26,auArr_41,auArr_5);
        auArr_59 = vcvttpd2dq_avx(auArr_59);
        auArr_21 = vpmovsxdq_avx(auArr_59);
        auArr_25._8_8_ = _UNK_1806e60b8;
        auArr_25._0_8_ = _DAT_1806e60b0;
        auArr_59 = vandpd_avx(auArr_21,auArr_25);
        auArr_21 = vshufps_avx(auArr_21,auArr_21,8);
        auArr_21 = vcvtdq2pd_avx(auArr_21);
        auArr_6._8_8_ = 0;
        auArr_6._0_8_ = DAT_1806e60e0;
        auArr_22 = vfnmadd231sd_fma(auArr_41,auArr_21,auArr_6);
        auArr_7._8_8_ = 0;
        auArr_7._0_8_ = DAT_1806e6100;
        auArr_21 = vmulsd_avx(auArr_21,auArr_7);
        auArr_41 = vsubsd_avx(auArr_22,auArr_21);
        auArr_22 = vsubsd_avx(auArr_22,auArr_41);
        vsubsd_avx(auArr_22,auArr_21);
      }
      else {
        uVal_35 = vmovq_avx(auArr_41);
        uVal_39 = (uVal_35 >> 0x34) - 0x3ff;
        lVal_37 = -((uVal_39 >> 3) - 0x86);
        uVal_32 = uVal_35 & 0xfffffffffffff | 0x10000000000000;
        auArr_21 = vmovdqu_avx(*(uint8_t (*)[16])(&UNK_1806e9658 + lVal_37));
        auArr_41._8_8_ = 0;
        auArr_41._0_8_ = *(uint64_t *)(&DAT_1806e9650 + lVal_37);
        auArr_22._8_8_ = 0;
        auArr_22._0_8_ = uVal_32;
        auArr_23._8_8_ = 0;
        auArr_23._0_8_ = SUB168(auArr_41 * auArr_22,8);
        uVal_35 = SUB168(auArr_41 * auArr_22,0);
        uVal_28 = vmovq_avx(auArr_21);
        auArr_59._8_8_ = 0;
        auArr_59._0_8_ = uVal_28;
        auArr_18._8_8_ = 0;
        auArr_18._0_8_ = uVal_32;
        uVal_39 = uVal_39 & 7;
        auArr_23 = auArr_59 * auArr_18 + auArr_23;
        uVal_28 = auArr_23._0_8_;
        uVal_29 = vmovq_avx(auArr_21 >> 0x40);
        auArr_21._8_8_ = 0;
        auArr_21._0_8_ = uVal_29;
        auArr_19._8_8_ = 0;
        auArr_19._0_8_ = uVal_32;
        uVal_38 = auArr_23._8_8_ + SUB168(auArr_21 * auArr_19,0);
        uVal_32 = 0;
        bFlag_31 = (byte)(0x36 - uVal_39) & 0x3f;
        uVal_29 = uVal_38 >> bFlag_31;
        bFlag_16 = (0x36 - uVal_39 & 0x3f) != 0;
        bFlag_17 = (uVal_38 >> bFlag_31 - 1 & 1) != 0;
        if (bFlag_16 && bFlag_17) {
          uVal_38 = ~uVal_38;
          uVal_28 = ~uVal_28;
          uVal_35 = ~uVal_35;
          uVal_32 = 0x8000000000000000;
        }
        auArr_59 = vmovd_avx((int)uVal_29 + (uint)(bFlag_16 && bFlag_17) & 3);
        sz_30 = (char)uVal_39 + 10;
        uVal_29 = (uVal_38 << sz_30) >> sz_30;
        lVal_33 = uVal_39 - 0x36;
        lVal_37 = 0x3f;
        if (uVal_29 != 0) {
          for (; uVal_29 >> lVal_37 == 0; lVal_37 = lVal_37 + -1) {
          }
        }
        uVal_38 = uVal_28;
        if (uVal_29 == 0) {
          lVal_37 = 0x3f;
          if (uVal_28 != 0) {
            for (; uVal_28 >> lVal_37 == 0; lVal_37 = lVal_37 + -1) {
            }
          }
          lVal_33 = uVal_39 - 0x76;
          uVal_38 = uVal_35;
          uVal_29 = uVal_28;
        }
        lVal_34 = lVal_37 + -0x34;
        if (lVal_34 < 0) {
          bFlag_31 = -(byte)lVal_34;
          uVal_29 = uVal_29 << (bFlag_31 & 0x3f) | uVal_38 >> (-(bFlag_31 - 0x40) & 0x3f);
        }
        else if (lVal_34 != 0) {
          uVal_29 = uVal_29 >> ((byte)lVal_34 & 0x3f);
        }
        auArr_41 = vmovq_avx(uVal_29 & 0xffefffffffffffff | uVal_32 | lVal_33 + lVal_37 + 0x3ff << 0x34);
        auArr_8._8_8_ = 0;
        auArr_8._0_8_ = DAT_1806e6150;
        auArr_41 = vmulsd_avx(auArr_41,auArr_8);
      }
      uVal_35 = vmovq_avx(auArr_59);
      if ((uVal_35 & 1) == 1) {
        auArr_24._8_8_ = _UNK_1806e60a8;
        auArr_24._0_8_ = DAT_1806e60a0;
        auArr_41 = vmulsd_avx(auArr_41,auArr_41);
        auArr_12._8_8_ = 0;
        auArr_12._0_8_ = DAT_1806e89d0;
        auArr_22 = vfmadd231sd_fma(auArr_24,auArr_41,auArr_12);
        auArr_53._8_8_ = 0;
        auArr_53._0_8_ = DAT_1806e89e8;
        auArr_13._8_8_ = 0;
        auArr_13._0_8_ = DAT_1806e89f0;
        auArr_21 = vfmadd231sd_fma(auArr_53,auArr_41,auArr_13);
        auArr_14._8_8_ = 0;
        auArr_14._0_8_ = DAT_1806e89e0;
        auArr_21 = vfmadd213sd_fma(auArr_21,auArr_41,auArr_14);
        auArr_15._8_8_ = 0;
        auArr_15._0_8_ = DAT_1806e89d8;
        auArr_21 = vfmadd213sd_fma(auArr_21,auArr_41,auArr_15);
        auArr_41 = vmulsd_avx(auArr_41,auArr_41);
        auArr_41 = vfmadd231sd_fma(auArr_22,auArr_21,auArr_41);
      }
      else {
        auArr_52._8_8_ = 0;
        auArr_52._0_8_ = DAT_1806e8a10;
        auArr_21 = vmulsd_avx(auArr_41,auArr_41);
        auArr_9._8_8_ = 0;
        auArr_9._0_8_ = DAT_1806e8a18;
        auArr_22 = vfmadd231sd_fma(auArr_52,auArr_21,auArr_9);
        auArr_10._8_8_ = 0;
        auArr_10._0_8_ = DAT_1806e8a08;
        auArr_22 = vfmadd213sd_fma(auArr_22,auArr_21,auArr_10);
        auArr_11._8_8_ = 0;
        auArr_11._0_8_ = DAT_1806e8a00;
        auArr_22 = vfmadd213sd_fma(auArr_22,auArr_21,auArr_11);
        auArr_21 = vmulsd_avx(auArr_41,auArr_21);
        auArr_41 = vfmadd231sd_fma(auArr_41,auArr_22,auArr_21);
      }
      auArr_55._0_8_ = -(uint64_t)(auArr_59._0_8_ == _DAT_1806e6140);
      auArr_55._8_8_ = -(uint64_t)(auArr_59._8_8_ == _UNK_1806e6148);
      auArr_56._0_8_ = -(uint64_t)(auArr_59._0_8_ == _DAT_1806e60b0);
      auArr_56._8_8_ = -(uint64_t)(auArr_59._8_8_ == _UNK_1806e60b8);
      auArr_59 = vorpd_avx(auArr_55,auArr_56);
      auArr_59 = vandnpd_avx(auArr_59,_DAT_1806e6080);
      auArr_59 = vxorpd_avx(auArr_41,auArr_59);
      auArr_41 = vandnpd_avx(auArr_20,_DAT_1806e6080);
      auArr_41 = vxorpd_avx(auArr_41,auArr_59);
    }
    auArr_41 = vcvtsd2ss_avx(auArr_41,auArr_41);
    return auArr_41._0_8_;
  }
  uVal_27 = (uint)in_YMM0._0_4_ & 0x7fffffff;
  if (0x7f7fffff < uVal_27) {
    uVal_40 = func_0x1806a3070();
    return uVal_40;
  }
  auArr_42._8_24_ = in_YMM0._8_24_;
  auArr_42._0_8_ = (double)in_YMM0._0_4_;
  dVal_36 = (double)((uint64_t)auArr_42._0_8_ & 0x7fffffffffffffff);
  auArr_44._16_16_ = in_YMM0._16_16_;
  if (uVal_27 < 0x3f490fdc) {
    if (uVal_27 < 0x3c000000) {
      if (uVal_27 < 0x39000000) {
        return in_YMM0._0_8_;
      }
      auArr_43._0_8_ = auArr_42._0_8_ - auArr_42._0_8_ * auArr_42._0_8_ * auArr_42._0_8_ * DAT_1806e60f0;
      auArr_43._8_24_ = auArr_42._8_24_;
    }
    else {
      dVal_36 = auArr_42._0_8_ * auArr_42._0_8_;
      auArr_43._0_8_ =
           auArr_42._0_8_ +
           ((DAT_1806e8a18 * dVal_36 + DAT_1806e8a10) * dVal_36 * dVal_36 +
           DAT_1806e8a08 * dVal_36 + DAT_1806e8a00) * auArr_42._0_8_ * dVal_36;
      auArr_43._8_24_ = auArr_42._8_24_;
    }
    goto LAB_18068dce6;
  }
  auArr_46 = auArr_42;
  if (auArr_42._0_8_ != dVal_36) {
    auArr_44._8_8_ = 0;
    auArr_44._0_8_ = 0.0 - auArr_42._0_8_;
    auArr_46 = auArr_44;
  }
  dVal_57 = auArr_46._0_8_;
  if (uVal_27 < 0x4b742400) {
    local_38[0] = (uint)(dVal_57 * DAT_1806e60d0 + DAT_1806e60c0);
    auArr_45._16_16_ = auArr_46._16_16_;
    dVal_54 = (double)local_38[0];
    dVal_57 = dVal_57 - DAT_1806e60e0 * dVal_54;
    auArr_45._8_8_ = auArr_46._8_8_;
    auArr_45._0_8_ = dVal_57;
    auArr_43._8_24_ = auArr_45._8_24_;
    auArr_43._0_8_ = dVal_57 - DAT_1806e6100 * dVal_54;
    uVal_35 = (uint64_t)((int64_t)auArr_43._0_8_ << 1) >> 0x35;
    if (0xf < (int64_t)(((uint64_t)dVal_36 >> 0x34) - uVal_35)) {
      dVal_58 = dVal_57 - DAT_1806e6110 * dVal_54;
      auArr_46._8_8_ = auArr_46._8_8_;
      auArr_46._0_8_ = dVal_58;
      auArr_46._16_16_ = auArr_45._16_16_;
      auArr_43._8_24_ = auArr_46._8_24_;
      auArr_43._0_8_ =
           dVal_58 - (DAT_1806e6120 * dVal_54 - ((dVal_57 - dVal_58) - DAT_1806e6110 * dVal_54));
    }
    if (0x3f1 < uVal_35) goto LAB_18068dc0e;
    auArr_47._16_16_ = auArr_43._16_16_;
    if (uVal_35 < 0x3df) {
      if ((local_38[0] & 1) != 0) {
        auArr_43._8_8_ = 0;
        auArr_43._0_8_ = DAT_1806e60a0;
        auArr_43._16_16_ = auArr_47._16_16_;
      }
    }
    else {
      dVal_57 = auArr_43._0_8_;
      if ((local_38[0] & 1) == 0) {
        auArr_43._0_8_ = dVal_57 - DAT_1806e60f0 * dVal_57 * dVal_57 * dVal_57;
      }
      else {
        auArr_47._8_8_ = 0;
        auArr_47._0_8_ = DAT_1806e60a0;
        auArr_43._8_24_ = auArr_47._8_24_;
        auArr_43._0_8_ = DAT_1806e60a0 - dVal_57 * dVal_57 * DAT_1806e60c0;
      }
    }
  }
  else {
    auArr_43._0_8_ = (double)__remainder_piby2d2f_forC(dVal_57,local_30,local_38);
    auArr_43._8_24_ = extraout_var;
LAB_18068dc0e:
    dVal_57 = auArr_43._0_8_;
    dVal_54 = dVal_57 * dVal_57;
    if ((local_38[0] & 1) == 0) {
      auArr_43._0_8_ =
           dVal_57 + ((DAT_1806e8a18 * dVal_54 + DAT_1806e8a10) * dVal_54 * dVal_54 +
                    DAT_1806e8a08 * dVal_54 + DAT_1806e8a00) * dVal_57 * dVal_54;
    }
    else {
      auArr_48._16_16_ = auArr_43._16_16_;
      auArr_48._8_8_ = 0;
      auArr_48._0_8_ = DAT_1806e89d0;
      auArr_43._8_24_ = auArr_48._8_24_;
      auArr_43._0_8_ =
           DAT_1806e89d0 * dVal_54 + DAT_1806e60a0 +
           ((DAT_1806e89f0 * dVal_54 + DAT_1806e89e8) * dVal_54 * dVal_54 +
           DAT_1806e89e0 * dVal_54 + DAT_1806e89d8) * dVal_54 * dVal_54;
    }
  }
  uVal_27 = (uint)(auArr_42._0_8_ != dVal_36);
  if ((local_38[0] >> 1 & uVal_27 | ~(local_38[0] >> 1) & ~uVal_27 & 1) == 0) {
    dVal_36 = auArr_43._0_8_;
    auArr_49._16_16_ = auArr_43._16_16_;
    auArr_49._0_16_ = ZEXT816(0);
    auArr_43._8_24_ = auArr_49._8_24_;
    auArr_43._0_8_ = 0.0 - dVal_36;
  }
LAB_18068dce6:
  auArr_50._4_28_ = auArr_43._4_28_;
  auArr_50._0_4_ = (float)auArr_43._0_8_;
  return auArr_50._0_8_;
}

// func_0x18068e050
uint64_t func_0x18068e050(uint8_t (*param_1)[32])
{
  uint8_t (*pArr16_1)[32];
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [32];
  uint8_t in_YMM2 [32];
  
  if (DAT_18083d260 < 5) {
    pArr16_1 = param_1;
    if (DAT_18083d260 < 1) {
      for (; *(short *)*pArr16_1 != 0; pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 2)) {
      }
    }
    else if (((uint64_t)param_1 & 1) == 0) {
      uVal_2 = (uint64_t)((uint)param_1 & 0xf);
      uVal_3 = 0;
      if (uVal_2 != 0) {
        uVal_3 = 0x10 - uVal_2;
      }
      if (param_1 != (uint8_t (*)[32])(*param_1 + (uVal_3 & 0xfffffffffffffffe))) {
        do {
          if (*(short *)*pArr16_1 == 0) break;
          pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 2);
        } while (pArr16_1 != (uint8_t (*)[32])(*param_1 + (uVal_3 & 0xfffffffffffffffe)));
      }
      uVal_2 = (int64_t)pArr16_1 - (int64_t)param_1 >> 1;
      if (uVal_2 != uVal_3 >> 1) {
        return uVal_2;
      }
      pArr16_1 = (uint8_t (*)[32])(*param_1 + uVal_2 * 2);
      while( true ) {
        auArr_4._0_2_ = -(ushort)(*(short *)*pArr16_1 == 0);
        auArr_4._2_2_ = -(ushort)(*(short *)(*pArr16_1 + 2) == 0);
        auArr_4._4_2_ = -(ushort)(*(short *)(*pArr16_1 + 4) == 0);
        auArr_4._6_2_ = -(ushort)(*(short *)(*pArr16_1 + 6) == 0);
        auArr_4._8_2_ = -(ushort)(*(short *)(*pArr16_1 + 8) == 0);
        auArr_4._10_2_ = -(ushort)(*(short *)(*pArr16_1 + 10) == 0);
        auArr_4._12_2_ = -(ushort)(*(short *)(*pArr16_1 + 0xc) == 0);
        auArr_4._14_2_ = -(ushort)(*(short *)(*pArr16_1 + 0xe) == 0);
        if ((ushort)((ushort)(SUB161(auArr_4 >> 7,0) & 1) |
                     (ushort)(SUB161(auArr_4 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auArr_4 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auArr_4 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auArr_4 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auArr_4 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auArr_4 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auArr_4 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auArr_4 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auArr_4 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auArr_4 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auArr_4 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auArr_4 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auArr_4 >> 0x6f,0) & 1) << 0xd |
                     (ushort)((byte)(auArr_4._14_2_ >> 7) & 1) << 0xe | auArr_4._14_2_ & 0x8000) != 0)
        break;
        pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 0x10);
      }
      for (; *(short *)*pArr16_1 != 0; pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 2)) {
      }
    }
    else {
      for (; *(short *)*pArr16_1 != 0; pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 2)) {
      }
    }
    return (int64_t)pArr16_1 - (int64_t)param_1 >> 1;
  }
  pArr16_1 = param_1;
  if (((uint64_t)param_1 & 1) == 0) {
    uVal_2 = (uint64_t)((uint)param_1 & 0x1f);
    uVal_3 = 0;
    if (uVal_2 != 0) {
      uVal_3 = 0x20 - uVal_2;
    }
    if (param_1 != (uint8_t (*)[32])(*param_1 + (uVal_3 & 0xfffffffffffffffe))) {
      do {
        if (*(short *)*pArr16_1 == 0) break;
        pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 2);
      } while (pArr16_1 != (uint8_t (*)[32])(*param_1 + (uVal_3 & 0xfffffffffffffffe)));
    }
    uVal_2 = (int64_t)pArr16_1 - (int64_t)param_1 >> 1;
    if (uVal_2 != uVal_3 >> 1) {
      return uVal_2;
    }
    pArr16_1 = (uint8_t (*)[32])(*param_1 + uVal_2 * 2);
    auArr_4 = vpxor_avx(in_YMM2._0_16_,in_YMM2._0_16_);
    while (auArr_5 = vpcmpeqw_avx2(ZEXT1632(auArr_4),*pArr16_1),
          ((uint)(SUB321(auArr_5 >> 7,0) & 1) | (uint)(SUB321(auArr_5 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auArr_5 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auArr_5 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auArr_5 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auArr_5 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auArr_5 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auArr_5 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auArr_5 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auArr_5 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auArr_5 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auArr_5 >> 0x5f,0) & 1) << 0xb
           | (uint)(SUB321(auArr_5 >> 0x67,0) & 1) << 0xc |
           (uint)(SUB321(auArr_5 >> 0x6f,0) & 1) << 0xd | (uint)(SUB321(auArr_5 >> 0x77,0) & 1) << 0xe
           | (uint)SUB321(auArr_5 >> 0x7f,0) << 0xf | (uint)(SUB321(auArr_5 >> 0x87,0) & 1) << 0x10 |
           (uint)(SUB321(auArr_5 >> 0x8f,0) & 1) << 0x11 |
           (uint)(SUB321(auArr_5 >> 0x97,0) & 1) << 0x12 |
           (uint)(SUB321(auArr_5 >> 0x9f,0) & 1) << 0x13 |
           (uint)(SUB321(auArr_5 >> 0xa7,0) & 1) << 0x14 |
           (uint)(SUB321(auArr_5 >> 0xaf,0) & 1) << 0x15 |
           (uint)(SUB321(auArr_5 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auArr_5 >> 0xbf,0) << 0x17 |
           (uint)(SUB321(auArr_5 >> 199,0) & 1) << 0x18 |
           (uint)(SUB321(auArr_5 >> 0xcf,0) & 1) << 0x19 |
           (uint)(SUB321(auArr_5 >> 0xd7,0) & 1) << 0x1a |
           (uint)(SUB321(auArr_5 >> 0xdf,0) & 1) << 0x1b |
           (uint)(SUB321(auArr_5 >> 0xe7,0) & 1) << 0x1c |
           (uint)(SUB321(auArr_5 >> 0xef,0) & 1) << 0x1d |
           (uint)(SUB321(auArr_5 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_5[31] >> 7) << 0x1f) ==
          0) {
      pArr16_1 = pArr16_1 + 1;
    }
    for (; *(short *)*pArr16_1 != 0; pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 2)) {
    }
  }
  else {
    for (; *(short *)*pArr16_1 != 0; pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 2)) {
    }
  }
  return (int64_t)pArr16_1 - (int64_t)param_1 >> 1;
}

// func_0x18068e1a0
uint64_t func_0x18068e1a0(uint8_t (*param_1)[32],uint64_t param_2)
{
  uint8_t (*pArr16_1)[32];
  uint64_t uVal_2;
  uint64_t uVal_3;
  short *pSize_4;
  uint8_t auArr_5 [16];
  uint8_t in_YMM1 [32];
  uint8_t auArr_6 [32];
  
  if (DAT_18083d260 < 5) {
    pArr16_1 = param_1;
    if (DAT_18083d260 < 1) {
      if (param_1 != (uint8_t (*)[32])(*param_1 + param_2 * 2)) {
        do {
          if (*(short *)*pArr16_1 == 0) break;
          pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 2);
        } while (pArr16_1 != (uint8_t (*)[32])(*param_1 + param_2 * 2));
      }
    }
    else {
      if (((uint64_t)param_1 & 1) == 0) {
        uVal_2 = (uint64_t)((uint)param_1 & 0xf);
        uVal_3 = 0;
        if (uVal_2 != 0) {
          uVal_3 = 0x10 - uVal_2;
        }
        uVal_2 = uVal_3 >> 1;
        if (param_2 < uVal_3 >> 1) {
          uVal_2 = param_2;
        }
        if (param_1 != (uint8_t (*)[32])(*param_1 + uVal_2 * 2)) {
          do {
            if (*(short *)*pArr16_1 == 0) break;
            pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 2);
          } while (pArr16_1 != (uint8_t (*)[32])(*param_1 + uVal_2 * 2));
        }
        uVal_3 = (int64_t)pArr16_1 - (int64_t)param_1 >> 1;
        if (uVal_3 != uVal_2) {
          return uVal_3;
        }
        for (pSize_4 = (short *)(*param_1 + uVal_3 * 2);
            pSize_4 != (short *)((int64_t)param_1 +
                               (((param_2 - uVal_2) - (uint64_t)((uint)(param_2 - uVal_2) & 0xf)) +
                               uVal_3) * 2); pSize_4 = pSize_4 + 8) {
          auArr_5._0_2_ = -(ushort)(*pSize_4 == 0);
          auArr_5._2_2_ = -(ushort)(pSize_4[1] == 0);
          auArr_5._4_2_ = -(ushort)(pSize_4[2] == 0);
          auArr_5._6_2_ = -(ushort)(pSize_4[3] == 0);
          auArr_5._8_2_ = -(ushort)(pSize_4[4] == 0);
          auArr_5._10_2_ = -(ushort)(pSize_4[5] == 0);
          auArr_5._12_2_ = -(ushort)(pSize_4[6] == 0);
          auArr_5._14_2_ = -(ushort)(pSize_4[7] == 0);
          if ((ushort)((ushort)(SUB161(auArr_5 >> 7,0) & 1) |
                       (ushort)(SUB161(auArr_5 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auArr_5 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auArr_5 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auArr_5 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auArr_5 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auArr_5 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auArr_5 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auArr_5 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auArr_5 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auArr_5 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auArr_5 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auArr_5 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auArr_5 >> 0x6f,0) & 1) << 0xd |
                       (ushort)((byte)(auArr_5._14_2_ >> 7) & 1) << 0xe | auArr_5._14_2_ & 0x8000) !=
              0) break;
        }
        for (; (pSize_4 != (short *)(*param_1 + param_2 * 2) && (*pSize_4 != 0)); pSize_4 = pSize_4 + 1)
        {
        }
        return (int64_t)pSize_4 - (int64_t)param_1 >> 1;
      }
      if (param_1 != (uint8_t (*)[32])(*param_1 + param_2 * 2)) {
        while (*(short *)*pArr16_1 != 0) {
          pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 2);
          if (pArr16_1 == (uint8_t (*)[32])(*param_1 + param_2 * 2)) {
            return (int64_t)pArr16_1 - (int64_t)param_1 >> 1;
          }
        }
      }
    }
    return (int64_t)pArr16_1 - (int64_t)param_1 >> 1;
  }
  if (((uint64_t)param_1 & 1) == 0) {
    uVal_2 = (uint64_t)((uint)param_1 & 0x1f);
    uVal_3 = 0;
    if (uVal_2 != 0) {
      uVal_3 = 0x20 - uVal_2;
    }
    uVal_2 = uVal_3 >> 1;
    if (param_2 < uVal_3 >> 1) {
      uVal_2 = param_2;
    }
    pArr16_1 = param_1;
    if (param_1 != (uint8_t (*)[32])(*param_1 + uVal_2 * 2)) {
      do {
        if (*(short *)*pArr16_1 == 0) break;
        pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 2);
      } while (pArr16_1 != (uint8_t (*)[32])(*param_1 + uVal_2 * 2));
    }
    uVal_3 = (int64_t)pArr16_1 - (int64_t)param_1 >> 1;
    if (uVal_3 != uVal_2) {
      return uVal_3;
    }
    for (pArr16_1 = (uint8_t (*)[32])(*param_1 + uVal_3 * 2);
        pArr16_1 !=
        (uint8_t (*)[32])
        ((int64_t)param_1 +
        (((param_2 - uVal_2) - (uint64_t)((uint)(param_2 - uVal_2) & 0x1f)) + uVal_3) * 2);
        pArr16_1 = pArr16_1 + 1) {
      auArr_5 = vpxor_avx(in_YMM1._0_16_,in_YMM1._0_16_);
      auArr_6 = vpcmpeqw_avx2(ZEXT1632(auArr_5),*pArr16_1);
      in_YMM1 = ZEXT1632(auArr_6._0_16_);
      if (((uint)(SUB321(auArr_6 >> 7,0) & 1) | (uint)(SUB321(auArr_6 >> 0xf,0) & 1) << 1 |
           (uint)(SUB321(auArr_6 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auArr_6 >> 0x1f,0) & 1) << 3 |
           (uint)(SUB321(auArr_6 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auArr_6 >> 0x2f,0) & 1) << 5 |
           (uint)(SUB321(auArr_6 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auArr_6 >> 0x3f,0) & 1) << 7 |
           (uint)(SUB321(auArr_6 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auArr_6 >> 0x4f,0) & 1) << 9 |
           (uint)(SUB321(auArr_6 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auArr_6 >> 0x5f,0) & 1) << 0xb
           | (uint)(SUB321(auArr_6 >> 0x67,0) & 1) << 0xc |
           (uint)(SUB321(auArr_6 >> 0x6f,0) & 1) << 0xd | (uint)(SUB321(auArr_6 >> 0x77,0) & 1) << 0xe
           | (uint)SUB321(auArr_6 >> 0x7f,0) << 0xf | (uint)(SUB321(auArr_6 >> 0x87,0) & 1) << 0x10 |
           (uint)(SUB321(auArr_6 >> 0x8f,0) & 1) << 0x11 |
           (uint)(SUB321(auArr_6 >> 0x97,0) & 1) << 0x12 |
           (uint)(SUB321(auArr_6 >> 0x9f,0) & 1) << 0x13 |
           (uint)(SUB321(auArr_6 >> 0xa7,0) & 1) << 0x14 |
           (uint)(SUB321(auArr_6 >> 0xaf,0) & 1) << 0x15 |
           (uint)(SUB321(auArr_6 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auArr_6 >> 0xbf,0) << 0x17 |
           (uint)(SUB321(auArr_6 >> 199,0) & 1) << 0x18 |
           (uint)(SUB321(auArr_6 >> 0xcf,0) & 1) << 0x19 |
           (uint)(SUB321(auArr_6 >> 0xd7,0) & 1) << 0x1a |
           (uint)(SUB321(auArr_6 >> 0xdf,0) & 1) << 0x1b |
           (uint)(SUB321(auArr_6 >> 0xe7,0) & 1) << 0x1c |
           (uint)(SUB321(auArr_6 >> 0xef,0) & 1) << 0x1d |
           (uint)(SUB321(auArr_6 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_6[31] >> 7) << 0x1f) !=
          0) break;
    }
    for (; (pArr16_1 != (uint8_t (*)[32])(*param_1 + param_2 * 2) && (*(short *)*pArr16_1 != 0));
        pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 2)) {
    }
  }
  else {
    pArr16_1 = param_1;
    if (param_1 != (uint8_t (*)[32])(*param_1 + param_2 * 2)) {
      while (*(short *)*pArr16_1 != 0) {
        pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 2);
        if (pArr16_1 == (uint8_t (*)[32])(*param_1 + param_2 * 2)) {
          return (int64_t)pArr16_1 - (int64_t)param_1 >> 1;
        }
      }
    }
  }
  return (int64_t)pArr16_1 - (int64_t)param_1 >> 1;
}

// func_0x18068e3b0
uint64_t func_0x18068e3b0(uint8_t (*param_1)[32],uint64_t param_2)
{
  uint8_t (*pArr16_1)[32];
  uint64_t uVal_2;
  uint8_t (*pArr16_3)[32];
  uint64_t uVal_4;
  uint8_t auArr_5 [16];
  uint8_t in_YMM1 [32];
  uint8_t auArr_6 [32];
  
  if (4 < DAT_18083d260) {
    uVal_2 = (uint64_t)((uint)param_1 & 0x1f);
    uVal_4 = 0;
    if (uVal_2 != 0) {
      uVal_4 = 0x20 - uVal_2;
    }
    if (param_2 < uVal_4) {
      uVal_4 = param_2;
    }
    pArr16_1 = param_1;
    if (param_1 != (uint8_t (*)[32])(*param_1 + uVal_4)) {
      do {
        if ((*pArr16_1)[0] == '\0') break;
        pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 1);
      } while (pArr16_1 != (uint8_t (*)[32])(*param_1 + uVal_4));
    }
    uVal_2 = (int64_t)pArr16_1 - (int64_t)param_1;
    if (uVal_2 == uVal_4) {
      pArr16_3 = (uint8_t (*)[32])
                ((int64_t)pArr16_1 +
                ((param_2 - uVal_4) - (uint64_t)((uint)(param_2 - uVal_4) & 0x1f)));
      for (; pArr16_1 != pArr16_3; pArr16_1 = pArr16_1 + 1) {
        auArr_5 = vpxor_avx(in_YMM1._0_16_,in_YMM1._0_16_);
        auArr_6 = vpcmpeqb_avx2(ZEXT1632(auArr_5),*pArr16_1);
        in_YMM1 = ZEXT1632(auArr_6._0_16_);
        if (((uint)(SUB321(auArr_6 >> 7,0) & 1) | (uint)(SUB321(auArr_6 >> 0xf,0) & 1) << 1 |
             (uint)(SUB321(auArr_6 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auArr_6 >> 0x1f,0) & 1) << 3 |
             (uint)(SUB321(auArr_6 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auArr_6 >> 0x2f,0) & 1) << 5 |
             (uint)(SUB321(auArr_6 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auArr_6 >> 0x3f,0) & 1) << 7 |
             (uint)(SUB321(auArr_6 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auArr_6 >> 0x4f,0) & 1) << 9 |
             (uint)(SUB321(auArr_6 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auArr_6 >> 0x5f,0) & 1) << 0xb |
             (uint)(SUB321(auArr_6 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auArr_6 >> 0x6f,0) & 1) << 0xd |
             (uint)(SUB321(auArr_6 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auArr_6 >> 0x7f,0) << 0xf |
             (uint)(SUB321(auArr_6 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auArr_6 >> 0x8f,0) & 1) << 0x11 |
             (uint)(SUB321(auArr_6 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auArr_6 >> 0x9f,0) & 1) << 0x13 |
             (uint)(SUB321(auArr_6 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auArr_6 >> 0xaf,0) & 1) << 0x15 |
             (uint)(SUB321(auArr_6 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auArr_6 >> 0xbf,0) << 0x17 |
             (uint)(SUB321(auArr_6 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auArr_6 >> 0xcf,0) & 1) << 0x19 |
             (uint)(SUB321(auArr_6 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auArr_6 >> 0xdf,0) & 1) << 0x1b |
             (uint)(SUB321(auArr_6 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auArr_6 >> 0xef,0) & 1) << 0x1d |
             (uint)(SUB321(auArr_6 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auArr_6[31] >> 7) << 0x1f)
            != 0) break;
      }
      for (; (pArr16_1 != (uint8_t (*)[32])(*param_1 + param_2) && ((*pArr16_1)[0] != '\0'));
          pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 1)) {
      }
      uVal_2 = (int64_t)pArr16_1 - (int64_t)param_1;
    }
    return uVal_2;
  }
  pArr16_1 = param_1;
  if (DAT_18083d260 < 1) {
    if (param_1 != (uint8_t (*)[32])(*param_1 + param_2)) {
      do {
        if ((*pArr16_1)[0] == '\0') break;
        pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 1);
      } while (pArr16_1 != (uint8_t (*)[32])(*param_1 + param_2));
    }
  }
  else {
    uVal_2 = (uint64_t)((uint)param_1 & 0xf);
    uVal_4 = 0;
    if (uVal_2 != 0) {
      uVal_4 = 0x10 - uVal_2;
    }
    if (param_2 < uVal_4) {
      uVal_4 = param_2;
    }
    if (param_1 != (uint8_t (*)[32])(*param_1 + uVal_4)) {
      do {
        if ((*pArr16_1)[0] == '\0') break;
        pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 1);
      } while (pArr16_1 != (uint8_t (*)[32])(*param_1 + uVal_4));
    }
    if ((int64_t)pArr16_1 - (int64_t)param_1 != uVal_4) {
      return (int64_t)pArr16_1 - (int64_t)param_1;
    }
    pArr16_3 = (uint8_t (*)[32])
              ((int64_t)pArr16_1 + ((param_2 - uVal_4) - (uint64_t)((uint)(param_2 - uVal_4) & 0xf)))
    ;
    while ((pArr16_1 != pArr16_3 &&
           (auArr_5[0] = -((*pArr16_1)[0] == '\0'), auArr_5[1] = -((*pArr16_1)[1] == '\0'),
           auArr_5[2] = -((*pArr16_1)[2] == '\0'), auArr_5[3] = -((*pArr16_1)[3] == '\0'),
           auArr_5[4] = -((*pArr16_1)[4] == '\0'), auArr_5[5] = -((*pArr16_1)[5] == '\0'),
           auArr_5[6] = -((*pArr16_1)[6] == '\0'), auArr_5[7] = -((*pArr16_1)[7] == '\0'),
           auArr_5[8] = -((*pArr16_1)[8] == '\0'), auArr_5[9] = -((*pArr16_1)[9] == '\0'),
           auArr_5[10] = -((*pArr16_1)[10] == '\0'), auArr_5[11] = -((*pArr16_1)[0xb] == '\0'),
           auArr_5[12] = -((*pArr16_1)[0xc] == '\0'), auArr_5[13] = -((*pArr16_1)[0xd] == '\0'),
           auArr_5[14] = -((*pArr16_1)[0xe] == '\0'), auArr_5[15] = -((*pArr16_1)[0xf] == '\0'),
           (ushort)((ushort)(SUB161(auArr_5 >> 7,0) & 1) | (ushort)(SUB161(auArr_5 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auArr_5 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auArr_5 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auArr_5 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auArr_5 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auArr_5 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auArr_5 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auArr_5 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auArr_5 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auArr_5 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auArr_5 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auArr_5 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auArr_5 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auArr_5 >> 0x77,0) & 1) << 0xe | (ushort)(auArr_5[15] >> 7) << 0xf
                   ) == 0))) {
      pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 0x10);
    }
    if (pArr16_1 != (uint8_t (*)[32])(*param_1 + param_2)) {
      while ((*pArr16_1)[0] != '\0') {
        pArr16_1 = (uint8_t (*)[32])(*pArr16_1 + 1);
        if (pArr16_1 == (uint8_t (*)[32])(*param_1 + param_2)) {
          return (int64_t)pArr16_1 - (int64_t)param_1;
        }
      }
    }
  }
  return (int64_t)pArr16_1 - (int64_t)param_1;
}

// func_0x18068e534
void func_0x18068e534(uint64_t param_1,uint64_t param_2)
{
  func_0x180690d98(param_1,param_2,0);
  return;
}

// func_0x18068e53c
void func_0x18068e53c(uint64_t param_1,uint64_t param_2)
{
  common_strtod_l<>(param_1,param_2,0);
  return;
}

// memcpy_s
/* Library Function - Single Match
    memcpy_s
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */
/* Library Function - Single Match
    memcpy_s
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */
errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)
{
  errno_t *pe_1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_18068e561:
    eVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_18068e56a:
      pe_1 = (errno_t *)func_0x1806823dc();
      eVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        func_0x1806aa960(_Dst,_Src,_MaxCount);
        goto LAB_18068e561;
      }
      func_0x1806ab010(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_18068e56a;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      pe_1 = (errno_t *)func_0x1806823dc();
      eVar2 = 0x22;
    }
    *pe_1 = eVar2;
    func_0x180684970();
  }
  return eVar2;
}

// func_0x18068e5d0
uint64_t func_0x18068e5d0(uint *param_1,uint *param_2)
{
  uint8_t auArr_1 [16];
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint uVal_6;
  uint *pU64_7;
  uint uVal_8;
  int64_t lVal_9;
  int iVal_10;
  int64_t lVal_11;
  int iVal_12;
  uint uVal_13;
  uint uVal_14;
  uint uVal_15;
  uint uVal_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  uint uVal_19;
  byte bStackX_8;
  uint uStackX_18;
  uint64_t uStack_238;
  uint64_t uStack_228;
  uint8_t local_214 [468];
  
  if ((*param_1 == 0) || (uVal_6 = *param_2, uVal_6 == 0)) {
    return 0;
  }
  uVal_16 = *param_1 - 1;
  uVal_17 = (uint64_t)uVal_16;
  uVal_15 = uVal_6 - 1;
  if (uVal_15 == 0) {
    uVal_6 = param_2[1];
    uVal_2 = 0;
    if (uVal_6 == 1) {
      uVal_6 = param_1[1];
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      return (uint64_t)uVal_6;
    }
    uVal_18 = uVal_2;
    if (uVal_16 != 0) {
      while (uVal_16 != 0xffffffff) {
        lVal_9 = uVal_17 + 1;
        uVal_16 = (int)uVal_17 - 1;
        uVal_17 = (uint64_t)uVal_16;
        uVal_2 = (uint64_t)param_1[lVal_9] | uVal_2 << 0x20;
        auArr_1._8_8_ = 0;
        auArr_1._0_8_ = uVal_2;
        uVal_2 = uVal_2 % (uint64_t)uVal_6;
        uVal_18 = (uVal_18 << 0x20) + (uint64_t)SUB164(auArr_1 / ZEXT416(uVal_6),0);
      }
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      param_1[1] = (uint)uVal_2;
      param_1[2] = 0;
      *param_1 = 1;
      return uVal_18;
    }
    uVal_15 = param_1[1];
    *param_1 = 0;
    memcpy_s(param_1 + 1,0x1cc,local_214,0);
    uVal_16 = uVal_15 % uVal_6;
    param_1[1] = uVal_16;
    *param_1 = (uint)(uVal_16 != 0);
    return (uint64_t)uVal_15 / (uint64_t)uVal_6;
  }
  if (uVal_16 < uVal_15) {
    return 0;
  }
  lVal_9 = (int64_t)(int)uVal_16;
  iVal_12 = uVal_16 - uVal_15;
  lVal_11 = (int64_t)iVal_12;
  if (lVal_11 <= lVal_9) {
    pU64_7 = param_1 + lVal_9 + 1;
    uVal_14 = uVal_16;
    do {
      if (*(uint *)((int64_t)param_2 + (lVal_11 * -4 - (int64_t)param_1) + (int64_t)pU64_7) !=
          *pU64_7) {
        if (param_1[(int64_t)(int)uVal_14 + 1] <= param_2[(int64_t)(int)(uVal_14 - iVal_12) + 1])
        goto LAB_18068e75b;
        break;
      }
      uVal_14 = uVal_14 - 1;
      lVal_9 = lVal_9 + -1;
      pU64_7 = pU64_7 + -1;
    } while (lVal_11 <= lVal_9);
  }
  iVal_12 = iVal_12 + 1;
LAB_18068e75b:
  if (iVal_12 == 0) {
    return 0;
  }
  uVal_15 = param_2[(uint64_t)uVal_15 + 1];
  uStackX_18 = param_2[(uint64_t)(uVal_6 - 2) + 1];
  uVal_14 = 0;
  uVal_2 = 0;
  iVal_10 = 0x1f;
  if (uVal_15 != 0) {
    for (; uVal_15 >> iVal_10 == 0; iVal_10 = iVal_10 + -1) {
    }
  }
  if (uVal_15 == 0) {
    iVal_10 = 0x20;
    bStackX_8 = 0;
  }
  else {
    iVal_10 = 0x1f - iVal_10;
    bStackX_8 = 0x20 - (char)iVal_10;
    if (iVal_10 == 0) goto LAB_18068e7f2;
  }
  uVal_8 = uStackX_18 >> (bStackX_8 & 0x1f);
  uStackX_18 = uStackX_18 << ((byte)iVal_10 & 0x1f);
  uVal_15 = uVal_8 | uVal_15 << ((byte)iVal_10 & 0x1f);
  if (2 < uVal_6) {
    uStackX_18 = uStackX_18 | param_2[(uint64_t)(uVal_6 - 3) + 1] >> (bStackX_8 & 0x1f);
  }
LAB_18068e7f2:
  iVal_12 = iVal_12 + -1;
  uStack_228 = 0;
  uVal_18 = uVal_2;
  if (-1 < iVal_12) {
    uVal_3 = (uint64_t)uVal_15;
    uVal_15 = iVal_12 + uVal_6;
    do {
      uVal_16 = uVal_14;
      if (uVal_15 <= (uint)uVal_17) {
        uVal_16 = param_1[(uint64_t)uVal_15 + 1];
      }
      uVal_8 = param_1[(uint64_t)(uVal_15 - 2) + 1];
      uVal_18 = (uint64_t)uVal_8;
      uStack_238 = CONCAT44(uVal_16,param_1[(uint64_t)(uVal_15 - 1) + 1]);
      if (iVal_10 != 0) {
        uStack_238 = (uint64_t)(uVal_8 >> (bStackX_8 & 0x3f)) | uStack_238 << ((byte)iVal_10 & 0x3f);
        uVal_8 = uVal_8 << ((byte)iVal_10 & 0x1f);
        uVal_18 = (uint64_t)uVal_8;
        if (2 < uVal_15) {
          uVal_18 = (uint64_t)(uVal_8 | param_1[(uint64_t)(uVal_15 - 3) + 1] >> (bStackX_8 & 0x1f));
        }
      }
      uVal_4 = uStack_238 / uVal_3;
      uStack_238 = uStack_238 % uVal_3;
      if (0xffffffff < uVal_4) {
        lVal_9 = uVal_4 - 0xffffffff;
        uVal_4 = 0xffffffff;
        uStack_238 = uStack_238 + lVal_9 * uVal_3;
      }
      if (uStack_238 < 0x100000000) {
        uVal_5 = uStackX_18 * uVal_4;
        do {
          if (uVal_5 <= (uStack_238 << 0x20 | uVal_18)) break;
          uVal_4 = uVal_4 - 1;
          uVal_5 = uVal_5 - uStackX_18;
          uStack_238 = uStack_238 + uVal_3;
        } while (uStack_238 < 0x100000000);
      }
      if (uVal_4 != 0) {
        uVal_17 = uVal_2;
        uVal_8 = uVal_14;
        pU64_7 = param_2;
        if (uVal_6 != 0) {
          do {
            uVal_17 = uVal_17 + pU64_7[1] * uVal_4;
            uVal_18 = uVal_17 >> 0x20;
            uVal_13 = (uint)uVal_17;
            uVal_17 = uVal_18 + 1;
            if (uVal_13 <= param_1[(uint64_t)(uVal_8 + iVal_12) + 1]) {
              uVal_17 = uVal_18;
            }
            uVal_19 = uVal_8 + 1;
            param_1[(uint64_t)(uVal_8 + iVal_12) + 1] =
                 param_1[(uint64_t)(uVal_8 + iVal_12) + 1] - uVal_13;
            uVal_8 = uVal_19;
            pU64_7 = pU64_7 + 1;
          } while (uVal_19 < uVal_6);
        }
        if (uVal_16 < uVal_17) {
          uVal_17 = uVal_2;
          uVal_16 = uVal_14;
          pU64_7 = param_2;
          if (uVal_6 != 0) {
            do {
              uVal_8 = uVal_16 + 1;
              uVal_17 = uVal_17 + param_1[(uint64_t)(uVal_16 + iVal_12) + 1] + (uint64_t)pU64_7[1];
              param_1[(uint64_t)(uVal_16 + iVal_12) + 1] = (uint)uVal_17;
              uVal_17 = uVal_17 >> 0x20;
              uVal_16 = uVal_8;
              pU64_7 = pU64_7 + 1;
            } while (uVal_8 < uVal_6);
          }
          uVal_4 = uVal_4 - 1;
        }
        uVal_17 = (uint64_t)(uVal_15 - 1);
      }
      uVal_16 = (uint)uVal_17;
      uVal_15 = uVal_15 - 1;
      uVal_18 = (uStack_228 << 0x20) + (uVal_4 & 0xffffffff);
      iVal_12 = iVal_12 + -1;
      uStack_228 = uVal_18;
    } while (-1 < iVal_12);
  }
  uVal_16 = uVal_16 + 1;
  uVal_6 = uVal_16;
  if (uVal_16 < *param_1) {
    do {
      uVal_17 = (uint64_t)uVal_6;
      uVal_6 = uVal_6 + 1;
      param_1[uVal_17 + 1] = 0;
    } while (uVal_6 < *param_1);
  }
  *param_1 = uVal_16;
  while( true ) {
    if (uVal_16 == 0) {
      return uVal_18;
    }
    uVal_16 = uVal_16 - 1;
    if (param_1[(uint64_t)uVal_16 + 1] != 0) break;
    *param_1 = uVal_16;
  }
  return uVal_18;
}

// func_0x18068ea5c
uint64_t func_0x18068ea5c(uint64_t *param_1)
{
  if (*(char *)(param_1 + 1) != '\0') {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson(L"_is_double",L"__crt_strtox::floating_point_value::as_double",
                 L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1db,0);
}

// func_0x18068ea98
uint64_t func_0x18068ea98(uint64_t *param_1)
{
  if (*(char *)(param_1 + 1) == '\0') {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson(L"!_is_double",L"__crt_strtox::floating_point_value::as_float",
                 L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1e1,0);
}

// func_0x18068ead4
uint64_t func_0x18068ead4(uint64_t param_1,int param_2,uint64_t param_3,char param_4,uint64_t **param_5)
{
  uint64_t *pU64_1;
  int64_t lVal_2;
  bool bFlag_3;
  byte bFlag_4;
  int iVal_5;
  byte bFlag_6;
  int iVal_7;
  uint uVal_8;
  uint64_t uVal_9;
  char ch_10;
  uint64_t uVal_11;
  int iVal_12;
  int iVal_13;
  int iVal_14;
  uint64_t uVal_15;
  
  lVal_2 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVal_2 == 0; lVal_2 = lVal_2 + -1) {
    }
  }
  uVal_11 = param_3 & 0xff;
  if (param_1 == 0) {
    iVal_7 = 0;
  }
  else {
    iVal_7 = (int)lVal_2 + 1;
  }
  ch_10 = *(char *)(param_5 + 1);
  iVal_7 = ((-(uint)(ch_10 != '\0') & 0x1d) + 0x18) - iVal_7;
  iVal_12 = param_2 - iVal_7;
  iVal_13 = (-(uint)(ch_10 != '\0') & 0x380) + 0x7f;
  iVal_5 = (int)uVal_11;
  if (iVal_13 < iVal_12) goto LAB_18068edae;
  bFlag_4 = (byte)param_3;
  if (iVal_12 < (int)((-(uint)(ch_10 != '\0') & 0xfffffc80) - 0x7e)) {
    iVal_14 = param_2 + -1 + iVal_13;
    iVal_12 = -iVal_13;
    if (iVal_14 < 0) {
      if ((uint)-iVal_14 < 0x40) {
        bFlag_6 = (byte)-iVal_14;
        uVal_9 = 1L << (bFlag_6 - 1 & 0x3f);
        uVal_15 = uVal_9 & param_1;
        if ((param_4 == '\0') || ((param_1 & uVal_9 - 1) != 0)) {
          bFlag_3 = true;
        }
        else {
          bFlag_3 = false;
        }
        if ((uVal_15 != 0) || (bFlag_3)) {
          iVal_13 = fegetround();
          if (iVal_13 == 0) {
            if ((uVal_15 == 0) || ((bFlag_4 = 1, !bFlag_3 && ((1L << (bFlag_6 & 0x3f) & param_1) == 0))))
            goto LAB_18068ec3a;
          }
          else if (iVal_13 != 0x100) {
            if (iVal_13 != 0x200) goto LAB_18068ec3a;
            bFlag_4 = bFlag_4 ^ 1;
          }
        }
        else {
LAB_18068ec3a:
          bFlag_4 = 0;
        }
        param_1 = (param_1 >> (bFlag_6 & 0x3f)) + (uint64_t)bFlag_4;
      }
      else {
        param_1 = 0;
      }
      ch_10 = *(char *)(param_5 + 1);
      if (param_1 == 0) {
        if (ch_10 == '\0') {
          *(int *)*param_5 = iVal_5 << 0x1f;
        }
        else {
          **param_5 = uVal_11 << 0x3f;
        }
        return 2;
      }
      if ((-(uint64_t)(ch_10 != '\0') & 0xfffffff800000) + 0x7fffff < param_1) {
        iVal_12 = ((param_2 - iVal_14) - iVal_7) + -1;
      }
      goto LAB_18068edec;
    }
  }
  else {
    if (iVal_7 < 0) {
      if ((uint)-iVal_7 < 0x40) {
        bFlag_6 = (byte)-iVal_7;
        uVal_9 = 1L << (bFlag_6 - 1 & 0x3f);
        uVal_15 = uVal_9 & param_1;
        if ((param_4 == '\0') || ((param_1 & uVal_9 - 1) != 0)) {
          bFlag_3 = true;
        }
        else {
          bFlag_3 = false;
        }
        if ((uVal_15 != 0) || (bFlag_3)) {
          iVal_7 = fegetround();
          if (iVal_7 == 0) {
            if ((uVal_15 == 0) || ((!bFlag_3 && ((1L << (bFlag_6 & 0x3f) & param_1) == 0))))
            goto LAB_18068ed5b;
            bFlag_4 = 1;
          }
          else if (iVal_7 != 0x100) {
            if (iVal_7 != 0x200) goto LAB_18068ed5b;
            bFlag_4 = bFlag_4 ^ 1;
          }
        }
        else {
LAB_18068ed5b:
          bFlag_4 = 0;
        }
        param_1 = (param_1 >> (bFlag_6 & 0x3f)) + (uint64_t)bFlag_4;
      }
      else {
        param_1 = 0;
      }
      ch_10 = *(char *)(param_5 + 1);
      if ((-(uint64_t)(ch_10 != '\0') & 0x1fffffff000000) + 0xffffff < param_1) {
        param_1 = param_1 >> 1;
        iVal_12 = iVal_12 + 1;
        if ((int)((-(uint)(ch_10 != '\0') & 0x380) + 0x7f) < iVal_12) {
LAB_18068edae:
          if (ch_10 == '\0') {
            *(uint *)*param_5 = iVal_5 << 0x1f | 0x7f800000;
          }
          else {
            **param_5 = uVal_11 << 0x3f | 0x7ff0000000000000;
          }
          return 3;
        }
      }
      goto LAB_18068edec;
    }
    iVal_14 = iVal_7;
    if (iVal_7 < 1) goto LAB_18068edec;
  }
  param_1 = param_1 << ((byte)iVal_14 & 0x3f);
LAB_18068edec:
  pU64_1 = *param_5;
  param_1 = (-(uint64_t)(ch_10 != '\0') & 0xfffffff800000) + 0x7fffff & param_1;
  if (ch_10 == '\0') {
    uVal_8 = iVal_5 << 0x1f | *(uint *)pU64_1 & 0x7fffffff;
    uVal_8 = ((iVal_12 + 0x7f) * 0x800000 ^ uVal_8) & 0x7f800000 ^ uVal_8;
    *(uint *)pU64_1 = (uVal_8 ^ (uint)param_1) & 0x7fffff ^ uVal_8;
  }
  else {
    uVal_9 = (int64_t)(iVal_12 + 0x3ff) << 0x34;
    *pU64_1 = (uVal_11 << 0x3f ^ uVal_9) & 0x8000000000000000 ^ uVal_9 | param_1;
  }
  return 0;
}

// func_0x18068ee8c
void func_0x18068ee8c(uint *param_1,uint param_2,uint64_t param_3,byte param_4,int64_t param_5)
{
  sbyte sz_1;
  uint64_t uVal_2;
  byte bFlag_3;
  uint uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int iVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  
  uVal_10 = 0;
  iVal_7 = (-(uint)(*(char *)(param_5 + 8) != '\0') & 0x1d) + 0x17;
  if (param_2 < 0x41) {
    if (*param_1 == 0) {
      uVal_5 = 0;
    }
    else {
      uVal_5 = (uint64_t)param_1[1];
      uVal_10 = 0;
      if (1 < *param_1) {
        uVal_10 = param_1[2];
      }
    }
    param_4 = param_4 ^ 1;
    lVal_6 = ((uint64_t)uVal_10 << 0x20) + uVal_5;
  }
  else {
    uVal_9 = param_2 >> 5;
    uVal_8 = uVal_9 - 2;
    uVal_10 = param_1[(uint64_t)uVal_8 + 1];
    param_2 = param_2 & 0x1f;
    uVal_5 = 0;
    if (param_2 == 0) {
      iVal_7 = iVal_7 + uVal_8 * 0x20;
      lVal_6 = CONCAT44(param_1[(uint64_t)(uVal_9 - 1) + 1],uVal_10);
      param_4 = param_4 ^ 1;
      uVal_10 = 0;
      if (uVal_8 != 0) {
        do {
          uVal_5 = 0;
          if (param_1[(uint64_t)uVal_10 + 1] == 0) {
            uVal_5 = (uint64_t)param_4;
          }
          uVal_10 = uVal_10 + 1;
          param_4 = (byte)uVal_5;
        } while (uVal_10 != uVal_8);
      }
    }
    else {
      sz_1 = (sbyte)param_2;
      iVal_7 = uVal_8 * 0x20 + param_2 + iVal_7;
      uVal_4 = (1 << sz_1) - 1;
      lVal_6 = ((uint64_t)param_1[(uint64_t)(uVal_9 - 1) + 1] << (-sz_1 + 0x20U & 0x3f)) +
              ((uint64_t)(param_1[(uint64_t)uVal_9 + 1] & uVal_4) << (-sz_1 + 0x40U & 0x3f)) +
              (uint64_t)((~uVal_4 & uVal_10) >> sz_1);
      if ((param_4 != 0) || (param_4 = 1, (uVal_4 & uVal_10) != 0)) {
        param_4 = 0;
      }
      uVal_2 = 0;
      if (uVal_8 != 0) {
        do {
          uVal_5 = uVal_2;
          bFlag_3 = 0;
          if (param_1[uVal_5 + 1] == 0) {
            bFlag_3 = param_4;
          }
          param_4 = bFlag_3;
          uVal_10 = (int)uVal_5 + 1;
          uVal_2 = (uint64_t)uVal_10;
        } while (uVal_10 != uVal_8);
      }
    }
    param_3 = CONCAT71((int7)(uVal_5 >> 8),(char)param_3);
  }
  func_0x18068ead4(lVal_6,iVal_7,param_3,param_4);
  return;
}

// func_0x18068efec
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
void func_0x18068efec(uint *param_1,uint64_t **param_2)
{
  char ch_1;
  byte bFlag_2;
  sbyte sz_3;
  uint uVal_4;
  uint uVal_5;
  uint32_t *pU64_6;
  uint64_t *pU64_7;
  byte bFlag_8;
  int iVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  uint64_t *pU64_13;
  int64_t lVal_14;
  uint *pU64_15;
  uint uVal_16;
  uint uVal_17;
  int iVal_18;
  uint uVal_19;
  uint64_t uVal_20;
  uint64_t *pU64_21;
  uint uVal_22;
  uint uVal_23;
  uint uVal_24;
  rsize_t rVar25;
  uint *pU64_26;
  uint uVal_27;
  uint uVal_28;
  uint uVal_29;
  uint64_t uVal_30;
  bool bFlag_31;
  uint8_t auStack_d78 [32];
  uint64_t **ppuStack_d58;
  uint local_d48;
  uint local_d44;
  uint local_d40;
  uint local_d3c;
  uint64_t local_d38;
  uint local_d30;
  uint *local_d28;
  uint64_t **local_d20;
  uint64_t *local_d18;
  uint *local_d10;
  uint *local_d08;
  uint32_t local_cf8;
  uint64_t local_cf4 [57];
  uint32_t local_b28;
  uint8_t local_b24 [460];
  uint local_958;
  uint64_t local_954 [57];
  uint local_788;
  uint64_t local_784;
  uint local_5b8;
  uint64_t local_5b4 [57];
  uint local_3e8;
  uint64_t local_3e4;
  uint local_218;
  uint64_t local_214 [57];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_d78;
  uVal_22 = param_1[1];
  local_d30 = (-(uint)(*(char *)(param_2 + 1) != '\0') & 0x1d) + 0x19;
  local_788 = 0;
  pU64_26 = param_1 + 2;
  uVal_29 = 0;
  local_d44 = *param_1;
  if ((int)*param_1 < 0) {
    local_d44 = 0;
  }
  uVal_30 = 0;
  uVal_28 = 0;
  uVal_27 = local_d44;
  if (uVal_22 <= local_d44) {
    uVal_27 = uVal_22;
  }
  local_d44 = local_d44 - uVal_27;
  local_d08 = (uint *)((int64_t)param_1 + (uint64_t)uVal_27 + 8);
  local_d10 = (uint *)((int64_t)param_1 + (uint64_t)uVal_22 + 8);
  local_d48 = (int)local_d10 - (int)local_d08;
  local_d28 = param_1;
  local_d20 = param_2;
  if (pU64_26 != local_d08) {
    do {
      iVal_9 = (int)uVal_30;
      if (uVal_28 == 9) {
        if (uVal_29 != 0) {
          uVal_20 = 0;
          uVal_11 = 0;
          do {
            uVal_22 = (int)uVal_11 + 1;
            uVal_10 = (uint64_t)*(uint *)((int64_t)&local_784 + uVal_11 * 4) * 1000000000 + uVal_20;
            *(int *)((int64_t)&local_784 + uVal_11 * 4) = (int)uVal_10;
            uVal_20 = uVal_10 >> 0x20;
            uVal_11 = (uint64_t)uVal_22;
          } while (uVal_22 != uVal_29);
          iVal_18 = (int)(uVal_10 >> 0x20);
          uVal_29 = local_788;
          if (iVal_18 != 0) {
            if (local_788 < 0x73) {
              *(int *)((int64_t)&local_784 + (uint64_t)local_788 * 4) = iVal_18;
              local_788 = local_788 + 1;
              uVal_29 = local_788;
            }
            else {
              local_788 = 0;
              uVal_29 = 0;
            }
          }
        }
        if (iVal_9 != 0) {
          uVal_22 = 0;
          if (uVal_29 != 0) {
            do {
              uVal_20 = (uint64_t)uVal_22;
              uVal_22 = uVal_22 + 1;
              uVal_11 = *(uint *)((int64_t)&local_784 + uVal_20 * 4) + uVal_30;
              *(int *)((int64_t)&local_784 + uVal_20 * 4) = (int)uVal_11;
              uVal_30 = uVal_11 >> 0x20;
              iVal_9 = (int)(uVal_11 >> 0x20);
            } while (uVal_22 != local_788);
            uVal_29 = local_788;
            if (iVal_9 == 0) goto LAB_18068f197;
          }
          if (uVal_29 < 0x73) {
            *(int *)((int64_t)&local_784 + (uint64_t)uVal_29 * 4) = iVal_9;
            uVal_29 = local_788 + 1;
            local_788 = uVal_29;
          }
          else {
            uVal_29 = 0;
            local_788 = 0;
          }
        }
LAB_18068f197:
        iVal_9 = 0;
        uVal_28 = 0;
      }
      bFlag_8 = *(byte *)pU64_26;
      uVal_28 = uVal_28 + 1;
      pU64_26 = (uint *)((int64_t)pU64_26 + 1);
      uVal_22 = (uint)bFlag_8 + iVal_9 * 10;
      uVal_30 = (uint64_t)uVal_22;
    } while (pU64_26 != local_d08);
    if (uVal_28 != 0) {
      for (uVal_27 = uVal_28 / 10; uVal_27 != 0; uVal_27 = uVal_27 - local_d40) {
        local_d40 = uVal_27;
        if (0x26 < uVal_27) {
          local_d40 = 0x26;
        }
        uVal_23 = local_d40 - 1;
        bFlag_8 = (&DAT_1806e6ac2)[(uint64_t)uVal_23 * 4];
        bFlag_2 = (&DAT_1806e6ac3)[(uint64_t)uVal_23 * 4];
        local_218 = (uint)bFlag_2 + (uint)bFlag_8;
        local_d3c = uVal_27;
        func_0x1806ab010(local_214,0,(uint64_t)bFlag_8 * 4);
        func_0x1806aa960((uint *)((int64_t)local_214 + (uint64_t)bFlag_8 * 4),
                      &DAT_1806e61b0 +
                      (uint64_t)*(ushort *)(&DAT_1806e6ac0 + (uint64_t)uVal_23 * 4) * 4,
                      (uint64_t)bFlag_2 << 2);
        uVal_23 = (uint)local_784;
        if (local_218 < 2) {
          uVal_11 = (uint64_t)(uint)local_214[0];
          if ((uint)local_214[0] == 0) {
LAB_18068f268:
            local_788 = 0;
            uVal_16 = 0;
            goto LAB_18068f586;
          }
          uVal_16 = uVal_29;
          if (((uint)local_214[0] == 1) || (uVal_29 == 0)) goto LAB_18068f586;
          uVal_10 = 0;
          uVal_20 = 0;
          do {
            uVal_23 = (int)uVal_20 + 1;
            uVal_12 = *(uint *)((int64_t)&local_784 + uVal_20 * 4) * uVal_11 + uVal_10;
            *(int *)((int64_t)&local_784 + uVal_20 * 4) = (int)uVal_12;
            uVal_10 = uVal_12 >> 0x20;
            iVal_9 = (int)(uVal_12 >> 0x20);
            uVal_20 = (uint64_t)uVal_23;
          } while (uVal_23 != uVal_29);
LAB_18068f2bb:
          uVal_29 = 0;
          uVal_16 = local_788;
          if (iVal_9 == 0) goto LAB_18068f586;
          if (local_788 < 0x73) {
            *(int *)((int64_t)&local_784 + (uint64_t)local_788 * 4) = iVal_9;
            local_788 = local_788 + 1;
            uVal_16 = local_788;
            goto LAB_18068f586;
          }
          local_788 = 0;
          bFlag_31 = false;
        }
        else {
          if (uVal_29 < 2) {
            uVal_11 = (uint64_t)(uint)local_784;
            local_788 = local_218;
            if (local_218 != 0) {
              if (local_218 < 0x74) {
                func_0x1806aa960();
              }
              else {
                func_0x1806ab010(&local_784,0,0x1cc);
                pU64_6 = (uint32_t *)func_0x1806823dc();
                *pU64_6 = 0x22;
                func_0x180684970();
              }
            }
            if (uVal_23 == 0) goto LAB_18068f268;
            uVal_16 = local_788;
            if ((uVal_23 != 1) && (local_788 != 0)) {
              uVal_10 = 0;
              uVal_20 = 0;
              do {
                uVal_29 = (int)uVal_20 + 1;
                uVal_12 = *(uint *)((int64_t)&local_784 + uVal_20 * 4) * uVal_11 + uVal_10;
                *(int *)((int64_t)&local_784 + uVal_20 * 4) = (int)uVal_12;
                uVal_10 = uVal_12 >> 0x20;
                iVal_9 = (int)(uVal_12 >> 0x20);
                uVal_20 = (uint64_t)uVal_29;
              } while (uVal_29 != local_788);
              goto LAB_18068f2bb;
            }
          }
          else {
            bFlag_31 = local_218 < uVal_29;
            local_d18 = local_214;
            if (!bFlag_31) {
              local_d18 = &local_784;
            }
            uVal_27 = uVal_29;
            if (bFlag_31) {
              uVal_27 = local_218;
            }
            local_d38 = &local_784;
            if (!bFlag_31) {
              local_d38 = local_214;
            }
            local_788 = 0;
            local_5b8 = 0;
            uVal_11 = 0;
            uVal_23 = local_218;
            if (bFlag_31) {
              uVal_23 = uVal_29;
            }
            if (uVal_27 != 0) {
              do {
                uVal_16 = (uint)uVal_11;
                uVal_29 = *(uint *)((int64_t)local_d18 + uVal_11 * 4);
                if (uVal_29 == 0) {
                  if (uVal_16 == local_788) {
                    local_788 = uVal_16 + 1;
                    *(uint32_t *)((int64_t)local_5b4 + uVal_11 * 4) = 0;
                    local_5b8 = local_788;
                  }
                }
                else {
                  uVal_20 = 0;
                  uVal_19 = uVal_16;
                  if (uVal_23 != 0) {
                    do {
                      uVal_19 = (uint)uVal_11;
                      uVal_10 = uVal_11;
                      if (uVal_19 == 0x73) break;
                      if (uVal_19 == local_788) {
                        *(uint32_t *)((int64_t)local_5b4 + uVal_11 * 4) = 0;
                        local_5b8 = uVal_19 + 1;
                      }
                      uVal_10 = (uint64_t)(uVal_19 + 1);
                      uVal_20 = (uint64_t)
                               *(uint *)((int64_t)local_d38 + (uint64_t)(-uVal_16 + uVal_19) * 4) *
                               (uint64_t)uVal_29 + uVal_20 +
                               (uint64_t)*(uint *)((int64_t)local_5b4 + uVal_11 * 4);
                      *(int *)((int64_t)local_5b4 + uVal_11 * 4) = (int)uVal_20;
                      uVal_20 = uVal_20 >> 0x20;
                      uVal_11 = uVal_10;
                      local_788 = local_5b8;
                    } while (-uVal_16 + uVal_19 + 1 != uVal_23);
                    uVal_19 = (uint)uVal_10;
                    uVal_29 = (uint)uVal_20;
                    while (uVal_29 != 0) {
                      uVal_19 = (uint)uVal_10;
                      if (uVal_19 == 0x73) goto LAB_18068f658;
                      if (uVal_19 == local_788) {
                        *(uint32_t *)((int64_t)local_5b4 + uVal_10 * 4) = 0;
                        local_5b8 = uVal_19 + 1;
                      }
                      uVal_19 = uVal_19 + 1;
                      lVal_14 = *(uint *)((int64_t)local_5b4 + uVal_10 * 4) + uVal_20;
                      *(int *)((int64_t)local_5b4 + uVal_10 * 4) = (int)lVal_14;
                      uVal_29 = (uint)((uint64_t)lVal_14 >> 0x20);
                      uVal_20 = (uint64_t)uVal_29;
                      uVal_10 = (uint64_t)uVal_19;
                      local_788 = local_5b8;
                    }
                  }
                  if (uVal_19 == 0x73) goto LAB_18068f658;
                }
                uVal_11 = (uint64_t)(uVal_16 + 1);
              } while (uVal_16 + 1 != uVal_27);
            }
            uVal_16 = local_788;
            uVal_27 = local_d3c;
            if (local_788 != 0) {
              if (local_788 < 0x74) {
                func_0x1806aa960();
                uVal_16 = local_788;
                uVal_27 = local_d3c;
              }
              else {
                func_0x1806ab010(&local_784,0,0x1cc);
                pU64_6 = (uint32_t *)func_0x1806823dc();
                *pU64_6 = 0x22;
                func_0x180684970();
                uVal_16 = local_788;
                uVal_27 = local_d3c;
              }
            }
          }
LAB_18068f586:
          bFlag_31 = true;
          uVal_29 = uVal_16;
        }
        if (!bFlag_31) goto LAB_18068f658;
      }
      if (uVal_28 % 10 != 0) {
        uVal_27 = (&DAT_1806e6b58)[uVal_28 % 10 - 1];
        if (uVal_27 == 0) {
LAB_18068f658:
          local_788 = 0;
          uVal_29 = 0;
        }
        else if ((uVal_27 != 1) && (uVal_29 != 0)) {
          uVal_20 = 0;
          uVal_11 = 0;
          do {
            uVal_28 = (int)uVal_11 + 1;
            uVal_10 = (uint64_t)*(uint *)((int64_t)&local_784 + uVal_11 * 4) * (uint64_t)uVal_27 +
                     uVal_20;
            *(int *)((int64_t)&local_784 + uVal_11 * 4) = (int)uVal_10;
            uVal_20 = uVal_10 >> 0x20;
            uVal_11 = (uint64_t)uVal_28;
          } while (uVal_28 != uVal_29);
          iVal_9 = (int)(uVal_10 >> 0x20);
          uVal_29 = local_788;
          if (iVal_9 != 0) {
            if (0x72 < local_788) goto LAB_18068f658;
            *(int *)((int64_t)&local_784 + (uint64_t)local_788 * 4) = iVal_9;
            local_788 = local_788 + 1;
            uVal_29 = local_788;
          }
        }
      }
      if (uVal_22 != 0) {
        uVal_27 = 0;
        if (uVal_29 != 0) {
          do {
            uVal_11 = (uint64_t)uVal_27;
            uVal_27 = uVal_27 + 1;
            lVal_14 = *(uint *)((int64_t)&local_784 + uVal_11 * 4) + uVal_30;
            *(int *)((int64_t)&local_784 + uVal_11 * 4) = (int)lVal_14;
            uVal_22 = (uint)((uint64_t)lVal_14 >> 0x20);
            uVal_30 = (uint64_t)uVal_22;
          } while (uVal_27 != local_788);
          uVal_29 = local_788;
          if (uVal_22 == 0) goto LAB_18068f6e4;
        }
        if (uVal_29 < 0x73) {
          *(uint *)((int64_t)&local_784 + (uint64_t)uVal_29 * 4) = uVal_22;
          local_788 = local_788 + 1;
          uVal_29 = local_788;
        }
        else {
          local_788 = 0;
          uVal_29 = 0;
        }
      }
    }
  }
LAB_18068f6e4:
  if (local_d44 == 0) {
LAB_18068fc15:
    if (uVal_29 == 0) goto LAB_18068fc1a;
    local_d38 = (uint64_t *)((uint64_t)local_d38 & 0xffffffff00000000);
    pU64_26 = (uint *)((int64_t)&local_784 + (uint64_t)(uVal_29 - 1) * 4);
    iVal_9 = 0x1f;
    bFlag_31 = *pU64_26 == 0;
    if (!bFlag_31) {
      for (; *pU64_26 >> iVal_9 == 0; iVal_9 = iVal_9 + -1) {
      }
    }
    if (bFlag_31) {
      iVal_9 = 0;
    }
    else {
      iVal_9 = iVal_9 + 1;
    }
    local_d3c = (uVal_29 - 1) * 0x20 + iVal_9;
  }
  else {
    for (uVal_22 = local_d44 / 10; local_d3c = uVal_22, uVal_22 != 0; uVal_22 = uVal_22 - uVal_27) {
      uVal_27 = uVal_22;
      if (0x26 < uVal_22) {
        uVal_27 = 0x26;
      }
      uVal_28 = uVal_27 - 1;
      bFlag_8 = (&DAT_1806e6ac2)[(uint64_t)uVal_28 * 4];
      bFlag_2 = (&DAT_1806e6ac3)[(uint64_t)uVal_28 * 4];
      local_218 = (uint)bFlag_2 + (uint)bFlag_8;
      local_d40 = uVal_27;
      func_0x1806ab010(local_214,0,(uint64_t)bFlag_8 * 4);
      func_0x1806aa960((uint *)((int64_t)local_214 + (uint64_t)bFlag_8 * 4),
                    &DAT_1806e61b0 +
                    (uint64_t)*(ushort *)(&DAT_1806e6ac0 + (uint64_t)uVal_28 * 4) * 4,
                    (uint64_t)bFlag_2 << 2);
      uVal_28 = (uint)local_784;
      if (local_218 < 2) {
        uVal_30 = (uint64_t)(uint)local_214[0];
        if ((uint)local_214[0] == 0) {
LAB_18068f7a7:
          local_788 = 0;
          uVal_23 = 0;
          goto LAB_18068fab4;
        }
        uVal_23 = uVal_29;
        if (((uint)local_214[0] == 1) || (uVal_29 == 0)) goto LAB_18068fab4;
        uVal_20 = 0;
        uVal_11 = 0;
        do {
          uVal_28 = (int)uVal_11 + 1;
          uVal_10 = *(uint *)((int64_t)&local_784 + uVal_11 * 4) * uVal_30 + uVal_20;
          *(int *)((int64_t)&local_784 + uVal_11 * 4) = (int)uVal_10;
          uVal_20 = uVal_10 >> 0x20;
          iVal_9 = (int)(uVal_10 >> 0x20);
          uVal_11 = (uint64_t)uVal_28;
        } while (uVal_28 != uVal_29);
LAB_18068f7fa:
        uVal_29 = 0;
        uVal_23 = local_788;
        if (iVal_9 == 0) goto LAB_18068fab4;
        if (local_788 < 0x73) {
          *(int *)((int64_t)&local_784 + (uint64_t)local_788 * 4) = iVal_9;
          local_788 = local_788 + 1;
          uVal_23 = local_788;
          goto LAB_18068fab4;
        }
        local_788 = 0;
        bFlag_31 = false;
      }
      else {
        if (uVal_29 < 2) {
          uVal_30 = (uint64_t)(uint)local_784;
          local_788 = local_218;
          if (local_218 != 0) {
            if (local_218 < 0x74) {
              func_0x1806aa960();
            }
            else {
              func_0x1806ab010(&local_784,0,0x1cc);
              pU64_6 = (uint32_t *)func_0x1806823dc();
              *pU64_6 = 0x22;
              func_0x180684970();
            }
          }
          if (uVal_28 == 0) goto LAB_18068f7a7;
          uVal_23 = local_788;
          if ((uVal_28 != 1) && (local_788 != 0)) {
            uVal_20 = 0;
            uVal_11 = 0;
            do {
              uVal_29 = (int)uVal_11 + 1;
              uVal_10 = *(uint *)((int64_t)&local_784 + uVal_11 * 4) * uVal_30 + uVal_20;
              *(int *)((int64_t)&local_784 + uVal_11 * 4) = (int)uVal_10;
              uVal_20 = uVal_10 >> 0x20;
              iVal_9 = (int)(uVal_10 >> 0x20);
              uVal_11 = (uint64_t)uVal_29;
            } while (uVal_29 != local_788);
            goto LAB_18068f7fa;
          }
        }
        else {
          bFlag_31 = local_218 < uVal_29;
          pU64_21 = local_214;
          if (!bFlag_31) {
            pU64_21 = &local_784;
          }
          uVal_22 = uVal_29;
          if (bFlag_31) {
            uVal_22 = local_218;
          }
          pU64_13 = &local_784;
          if (!bFlag_31) {
            pU64_13 = local_214;
          }
          uVal_28 = 0;
          local_5b8 = 0;
          uVal_30 = 0;
          uVal_27 = local_218;
          if (bFlag_31) {
            uVal_27 = uVal_29;
          }
          if (uVal_22 != 0) {
            do {
              uVal_23 = (uint)uVal_30;
              uVal_29 = *(uint *)((int64_t)pU64_21 + uVal_30 * 4);
              if (uVal_29 == 0) {
                if (uVal_23 == uVal_28) {
                  uVal_28 = uVal_23 + 1;
                  *(uint32_t *)((int64_t)local_5b4 + uVal_30 * 4) = 0;
                  local_5b8 = uVal_28;
                }
              }
              else {
                uVal_11 = 0;
                uVal_16 = uVal_23;
                if (uVal_27 != 0) {
                  do {
                    uVal_16 = (uint)uVal_30;
                    uVal_20 = uVal_30;
                    if (uVal_16 == 0x73) break;
                    if (uVal_16 == uVal_28) {
                      *(uint32_t *)((int64_t)local_5b4 + uVal_30 * 4) = 0;
                      local_5b8 = uVal_16 + 1;
                    }
                    uVal_20 = (uint64_t)(uVal_16 + 1);
                    uVal_11 = (uint64_t)
                             *(uint *)((int64_t)pU64_13 + (uint64_t)(-uVal_23 + uVal_16) * 4) *
                             (uint64_t)uVal_29 + uVal_11 +
                             (uint64_t)*(uint *)((int64_t)local_5b4 + uVal_30 * 4);
                    *(int *)((int64_t)local_5b4 + uVal_30 * 4) = (int)uVal_11;
                    uVal_11 = uVal_11 >> 0x20;
                    uVal_30 = uVal_20;
                    uVal_28 = local_5b8;
                  } while (-uVal_23 + uVal_16 + 1 != uVal_27);
                  uVal_16 = (uint)uVal_20;
                  uVal_29 = (uint)uVal_11;
                  while (uVal_29 != 0) {
                    uVal_16 = (uint)uVal_20;
                    if (uVal_16 == 0x73) goto LAB_18068fb8e;
                    if (uVal_16 == uVal_28) {
                      *(uint32_t *)((int64_t)local_5b4 + uVal_20 * 4) = 0;
                      local_5b8 = uVal_16 + 1;
                    }
                    uVal_16 = uVal_16 + 1;
                    lVal_14 = uVal_11 + *(uint *)((int64_t)local_5b4 + uVal_20 * 4);
                    *(int *)((int64_t)local_5b4 + uVal_20 * 4) = (int)lVal_14;
                    uVal_29 = (uint)((uint64_t)lVal_14 >> 0x20);
                    uVal_11 = (uint64_t)uVal_29;
                    uVal_20 = (uint64_t)uVal_16;
                    uVal_28 = local_5b8;
                  }
                }
                if (uVal_16 == 0x73) goto LAB_18068fb8e;
              }
              uVal_30 = (uint64_t)(uVal_23 + 1);
            } while (uVal_23 + 1 != uVal_22);
          }
          local_788 = uVal_28;
          uVal_23 = local_788;
          uVal_22 = local_d3c;
          uVal_27 = local_d40;
          if (uVal_28 != 0) {
            if (uVal_28 < 0x74) {
              func_0x1806aa960();
              uVal_23 = local_788;
              uVal_22 = local_d3c;
              uVal_27 = local_d40;
            }
            else {
              func_0x1806ab010(&local_784,0,0x1cc);
              pU64_6 = (uint32_t *)func_0x1806823dc();
              *pU64_6 = 0x22;
              func_0x180684970();
              uVal_23 = local_788;
              uVal_22 = local_d3c;
              uVal_27 = local_d40;
            }
          }
        }
LAB_18068fab4:
        bFlag_31 = true;
        uVal_29 = uVal_23;
      }
      if (!bFlag_31) goto LAB_18068fb8e;
    }
    if (local_d44 % 10 == 0) goto LAB_18068fc15;
    uVal_22 = (&DAT_1806e6b58)[local_d44 % 10 - 1];
    if (uVal_22 == 0) {
      local_788 = 0;
      uVal_29 = 0;
      goto LAB_18068fc15;
    }
    if (uVal_22 == 1) goto LAB_18068fc15;
    if (uVal_29 != 0) {
      uVal_11 = 0;
      uVal_30 = 0;
      do {
        uVal_27 = (int)uVal_30 + 1;
        uVal_20 = (uint64_t)*(uint *)((int64_t)&local_784 + uVal_30 * 4) * (uint64_t)uVal_22 +
                 uVal_11;
        *(int *)((int64_t)&local_784 + uVal_30 * 4) = (int)uVal_20;
        uVal_11 = uVal_20 >> 0x20;
        uVal_30 = (uint64_t)uVal_27;
      } while (uVal_27 != uVal_29);
      iVal_9 = (int)(uVal_20 >> 0x20);
      uVal_29 = local_788;
      if (iVal_9 != 0) {
        if (0x72 < local_788) {
LAB_18068fb8e:
          pU64_7 = *local_d20;
          if (*(char *)(local_d20 + 1) == '\0') {
            *(uint *)pU64_7 =
                 (-(uint)(*(char *)(local_d28 + 0xc2) != '\0') & 0x80000000) + 0x7f800000 |
                 *(uint *)pU64_7 & 0x7f800000;
          }
          else {
            *pU64_7 = (-(uint64_t)(*(char *)(local_d28 + 0xc2) != '\0') & 0x8000000000000000) +
                      0x7ff0000000000000 | *pU64_7 & 0x7ff0000000000000;
          }
          goto LAB_180690cc2;
        }
        *(int *)((int64_t)&local_784 + (uint64_t)local_788 * 4) = iVal_9;
        local_788 = local_788 + 1;
        uVal_29 = local_788;
      }
      goto LAB_18068fc15;
    }
LAB_18068fc1a:
    local_d3c = 0;
  }
  pU64_26 = local_d10;
  if ((local_d3c < local_d30) && (local_d48 != 0)) {
    uVal_22 = 0;
    uVal_30 = 0;
    local_958 = 0;
    uVal_27 = 0;
    pU64_15 = local_d08;
    if (local_d08 != local_d10) {
      do {
        iVal_9 = (int)uVal_30;
        if (uVal_27 == 9) {
          if (uVal_22 != 0) {
            uVal_20 = 0;
            uVal_11 = 0;
            do {
              uVal_27 = (int)uVal_11 + 1;
              uVal_10 = (uint64_t)*(uint *)((int64_t)local_954 + uVal_11 * 4) * 1000000000 + uVal_20;
              *(int *)((int64_t)local_954 + uVal_11 * 4) = (int)uVal_10;
              uVal_20 = uVal_10 >> 0x20;
              uVal_11 = (uint64_t)uVal_27;
            } while (uVal_27 != uVal_22);
            iVal_18 = (int)(uVal_10 >> 0x20);
            uVal_22 = local_958;
            if (iVal_18 != 0) {
              if (local_958 < 0x73) {
                *(int *)((int64_t)local_954 + (uint64_t)local_958 * 4) = iVal_18;
                local_958 = local_958 + 1;
                uVal_22 = local_958;
              }
              else {
                local_218 = 0;
                local_958 = 0;
                memcpy_s(local_954,0x1cc,local_214,0);
                uVal_22 = local_958;
              }
            }
          }
          if (iVal_9 != 0) {
            uVal_11 = 0;
            if (uVal_22 != 0) {
              do {
                uVal_22 = (int)uVal_11 + 1;
                uVal_20 = *(uint *)((int64_t)local_954 + uVal_11 * 4) + uVal_30;
                *(int *)((int64_t)local_954 + uVal_11 * 4) = (int)uVal_20;
                uVal_30 = uVal_20 >> 0x20;
                iVal_9 = (int)(uVal_20 >> 0x20);
                uVal_11 = (uint64_t)uVal_22;
              } while (uVal_22 != local_958);
              uVal_22 = local_958;
              if (iVal_9 == 0) goto LAB_18068fdb5;
            }
            if (uVal_22 < 0x73) {
              *(int *)((int64_t)local_954 + (uint64_t)uVal_22 * 4) = iVal_9;
              local_958 = local_958 + 1;
              uVal_22 = local_958;
            }
            else {
              local_218 = 0;
              local_958 = 0;
              memcpy_s(local_954,0x1cc,local_214,0);
              uVal_22 = local_958;
            }
          }
LAB_18068fdb5:
          iVal_9 = 0;
          uVal_27 = 0;
        }
        bFlag_8 = *(byte *)pU64_15;
        uVal_27 = uVal_27 + 1;
        pU64_15 = (uint *)((int64_t)pU64_15 + 1);
        uVal_28 = (uint)bFlag_8 + iVal_9 * 10;
        uVal_30 = (uint64_t)uVal_28;
      } while (pU64_15 != pU64_26);
      if (uVal_27 != 0) {
        uVal_11 = (uint64_t)uVal_27 / 10;
        uVal_23 = (uint)uVal_11;
        while (local_d40 = (uint)uVal_11, uVal_23 != 0) {
          uVal_23 = local_d40;
          if (0x26 < local_d40) {
            uVal_23 = 0x26;
          }
          local_d38 = (uint64_t *)CONCAT44(local_d38._4_4_,uVal_23);
          uVal_11 = (uint64_t)(uVal_23 - 1);
          bFlag_8 = (&DAT_1806e6ac2)[uVal_11 * 4];
          bFlag_2 = (&DAT_1806e6ac3)[uVal_11 * 4];
          local_218 = (uint)bFlag_2 + (uint)bFlag_8;
          func_0x1806ab010(local_214,0,(uint64_t)bFlag_8 * 4);
          func_0x1806aa960((uint *)((int64_t)local_214 + (uint64_t)bFlag_8 * 4),
                        &DAT_1806e61b0 + (uint64_t)*(ushort *)(&DAT_1806e6ac0 + uVal_11 * 4) * 4,
                        (uint64_t)bFlag_2 << 2);
          uVal_23 = (uint)local_954[0];
          if (local_218 < 2) {
            uVal_11 = (uint64_t)(uint)local_214[0];
            if ((uint)local_214[0] == 0) {
LAB_18068fe8b:
              local_218 = 0;
              pU64_21 = local_214;
              local_958 = 0;
              rVar25 = 0;
              goto LAB_180690153;
            }
            if (((uint)local_214[0] == 1) || (uVal_22 == 0)) goto LAB_18069016b;
            uVal_10 = 0;
            uVal_20 = 0;
            do {
              uVal_23 = (int)uVal_20 + 1;
              uVal_12 = *(uint *)((int64_t)local_954 + uVal_20 * 4) * uVal_11 + uVal_10;
              *(int *)((int64_t)local_954 + uVal_20 * 4) = (int)uVal_12;
              uVal_10 = uVal_12 >> 0x20;
              iVal_9 = (int)(uVal_12 >> 0x20);
              uVal_20 = (uint64_t)uVal_23;
            } while (uVal_23 != uVal_22);
LAB_18068feeb:
            uVal_22 = local_958;
            if (iVal_9 == 0) goto LAB_18069016b;
            if (local_958 < 0x73) {
              *(int *)((int64_t)local_954 + (uint64_t)local_958 * 4) = iVal_9;
              local_958 = local_958 + 1;
              uVal_22 = local_958;
              goto LAB_18069016b;
            }
            local_218 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_214,0);
            bFlag_31 = false;
            uVal_22 = local_958;
          }
          else {
            pU64_21 = local_954;
            if (uVal_22 < 2) {
              local_958 = local_218;
              memcpy_s(pU64_21,0x1cc,local_214,(uint64_t)local_218 << 2);
              if (uVal_23 != 0) {
                uVal_22 = local_958;
                if ((uVal_23 != 1) && (local_958 != 0)) {
                  uVal_20 = 0;
                  uVal_11 = 0;
                  do {
                    uVal_22 = (int)uVal_11 + 1;
                    uVal_10 = (uint64_t)*(uint *)((int64_t)local_954 + uVal_11 * 4) *
                             (uint64_t)uVal_23 + uVal_20;
                    *(int *)((int64_t)local_954 + uVal_11 * 4) = (int)uVal_10;
                    uVal_20 = uVal_10 >> 0x20;
                    iVal_9 = (int)(uVal_10 >> 0x20);
                    uVal_11 = (uint64_t)uVal_22;
                  } while (uVal_22 != local_958);
                  goto LAB_18068feeb;
                }
                goto LAB_18069016b;
              }
              goto LAB_18068fe8b;
            }
            bFlag_31 = uVal_22 <= local_218;
            local_d44 = uVal_22;
            if (!bFlag_31) {
              pU64_21 = local_214;
              local_d44 = local_218;
            }
            pU64_13 = local_954;
            if (bFlag_31) {
              pU64_13 = local_214;
            }
            uVal_16 = 0;
            local_958 = 0;
            uVal_23 = local_218;
            if (!bFlag_31) {
              uVal_23 = uVal_22;
            }
            local_5b8 = 0;
            local_d18 = pU64_21;
            if (local_d44 != 0) {
              do {
                uVal_22 = *(uint *)((int64_t)pU64_21 + (uint64_t)uVal_16 * 4);
                if (uVal_22 == 0) {
                  if (uVal_16 == local_958) {
                    local_958 = uVal_16 + 1;
                    *(uint32_t *)((int64_t)local_5b4 + (uint64_t)uVal_16 * 4) = 0;
                    local_5b8 = local_958;
                  }
                }
                else {
                  uVal_11 = 0;
                  uVal_19 = uVal_16;
                  if (uVal_23 != 0) {
                    uVal_20 = (uint64_t)uVal_16;
                    do {
                      uVal_19 = (uint)uVal_20;
                      uVal_10 = uVal_20;
                      if (uVal_19 == 0x73) break;
                      if (uVal_19 == local_958) {
                        *(uint32_t *)((int64_t)local_5b4 + uVal_20 * 4) = 0;
                        local_5b8 = uVal_19 + 1;
                      }
                      uVal_10 = (uint64_t)(uVal_19 + 1);
                      uVal_11 = (uint64_t)
                               *(uint *)((int64_t)pU64_13 + (uint64_t)(-uVal_16 + uVal_19) * 4) *
                               (uint64_t)uVal_22 +
                               (uint64_t)*(uint *)((int64_t)local_5b4 + uVal_20 * 4) + uVal_11;
                      *(int *)((int64_t)local_5b4 + uVal_20 * 4) = (int)uVal_11;
                      uVal_11 = uVal_11 >> 0x20;
                      uVal_20 = uVal_10;
                      local_958 = local_5b8;
                    } while (-uVal_16 + uVal_19 + 1 != uVal_23);
                    uVal_19 = (uint)uVal_10;
                    uVal_22 = (uint)uVal_11;
                    while (uVal_22 != 0) {
                      uVal_19 = (uint)uVal_10;
                      if (uVal_19 == 0x73) goto LAB_18069022e;
                      if (uVal_19 == local_958) {
                        *(uint32_t *)((int64_t)local_5b4 + uVal_10 * 4) = 0;
                        local_5b8 = uVal_19 + 1;
                      }
                      uVal_19 = uVal_19 + 1;
                      lVal_14 = *(uint *)((int64_t)local_5b4 + uVal_10 * 4) + uVal_11;
                      *(int *)((int64_t)local_5b4 + uVal_10 * 4) = (int)lVal_14;
                      uVal_22 = (uint)((uint64_t)lVal_14 >> 0x20);
                      uVal_11 = (uint64_t)uVal_22;
                      uVal_10 = (uint64_t)uVal_19;
                      local_958 = local_5b8;
                    }
                  }
                  if (uVal_19 == 0x73) {
LAB_18069022e:
                    local_b28 = 0;
                    local_958 = 0;
                    memcpy_s(local_954,0x1cc,local_b24,0);
                    goto LAB_180690255;
                  }
                }
                uVal_16 = uVal_16 + 1;
              } while (uVal_16 != local_d44);
            }
            pU64_21 = local_5b4;
            rVar25 = (uint64_t)local_958 << 2;
LAB_180690153:
            memcpy_s(local_954,0x1cc,pU64_21,rVar25);
            uVal_22 = local_958;
LAB_18069016b:
            bFlag_31 = true;
          }
          if (!bFlag_31) goto LAB_180690255;
          uVal_23 = local_d40 - (int)local_d38;
          uVal_11 = (uint64_t)uVal_23;
        }
        if (uVal_27 % 10 != 0) {
          uVal_27 = (&DAT_1806e6b58)[uVal_27 % 10 - 1];
          if (uVal_27 == 0) {
LAB_180690255:
            local_cf8 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
            uVal_22 = local_958;
          }
          else if ((uVal_27 != 1) && (uVal_22 != 0)) {
            uVal_20 = 0;
            uVal_11 = 0;
            do {
              uVal_23 = (int)uVal_11 + 1;
              uVal_10 = (uint64_t)*(uint *)((int64_t)local_954 + uVal_11 * 4) * (uint64_t)uVal_27 +
                       uVal_20;
              *(int *)((int64_t)local_954 + uVal_11 * 4) = (int)uVal_10;
              uVal_20 = uVal_10 >> 0x20;
              uVal_11 = (uint64_t)uVal_23;
            } while (uVal_23 != uVal_22);
            iVal_9 = (int)(uVal_10 >> 0x20);
            uVal_22 = local_958;
            if (iVal_9 != 0) {
              if (0x72 < local_958) goto LAB_180690255;
              *(int *)((int64_t)local_954 + (uint64_t)local_958 * 4) = iVal_9;
              local_958 = local_958 + 1;
              uVal_22 = local_958;
            }
          }
        }
        if (uVal_28 != 0) {
          uVal_27 = 0;
          if (uVal_22 != 0) {
            do {
              uVal_11 = (uint64_t)uVal_27;
              uVal_27 = uVal_27 + 1;
              lVal_14 = *(uint *)((int64_t)local_954 + uVal_11 * 4) + uVal_30;
              *(int *)((int64_t)local_954 + uVal_11 * 4) = (int)lVal_14;
              uVal_28 = (uint)((uint64_t)lVal_14 >> 0x20);
              uVal_30 = (uint64_t)uVal_28;
            } while (uVal_27 != local_958);
            uVal_22 = local_958;
            if (uVal_28 == 0) goto LAB_180690312;
          }
          if (uVal_22 < 0x73) {
            *(uint *)((int64_t)local_954 + (uint64_t)uVal_22 * 4) = uVal_28;
            local_958 = local_958 + 1;
            uVal_22 = local_958;
          }
          else {
            local_cf8 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
            uVal_22 = local_958;
          }
        }
      }
    }
LAB_180690312:
    if ((int)*local_d28 < 0) {
      local_d48 = local_d48 - *local_d28;
    }
    uVal_28 = 1;
    local_3e4 = 1;
    local_3e8 = 1;
    for (uVal_27 = local_d48 / 10; uVal_27 != 0; uVal_27 = uVal_27 - (int)local_d38) {
      uVal_23 = uVal_27;
      if (0x26 < uVal_27) {
        uVal_23 = 0x26;
      }
      local_d38._4_4_ = (uint32_t)((uint64_t)local_d38 >> 0x20);
      local_d38 = (uint64_t *)CONCAT44(local_d38._4_4_,uVal_23);
      uVal_30 = (uint64_t)(uVal_23 - 1);
      bFlag_8 = (&DAT_1806e6ac2)[uVal_30 * 4];
      bFlag_2 = (&DAT_1806e6ac3)[uVal_30 * 4];
      local_218 = (uint)bFlag_2 + (uint)bFlag_8;
      func_0x1806ab010(local_214,0,(uint64_t)bFlag_8 * 4);
      func_0x1806aa960((uint *)((int64_t)local_214 + (uint64_t)bFlag_8 * 4),
                    &DAT_1806e61b0 + (uint64_t)*(ushort *)(&DAT_1806e6ac0 + uVal_30 * 4) * 4,
                    (uint64_t)bFlag_2 << 2);
      if (local_218 < 2) {
        uVal_30 = (uint64_t)(uint)local_214[0];
        if ((uint)local_214[0] == 0) {
          local_cf8 = 0;
          local_3e8 = 0;
          memcpy_s(&local_3e4,0x1cc,local_cf4,0);
          uVal_28 = local_3e8;
        }
        else if (((uint)local_214[0] != 1) && (uVal_28 != 0)) {
          uVal_20 = 0;
          uVal_11 = 0;
          do {
            uVal_23 = (int)uVal_11 + 1;
            uVal_10 = *(uint *)((int64_t)&local_3e4 + uVal_11 * 4) * uVal_30 + uVal_20;
            *(int *)((int64_t)&local_3e4 + uVal_11 * 4) = (int)uVal_10;
            uVal_20 = uVal_10 >> 0x20;
            uVal_11 = (uint64_t)uVal_23;
          } while (uVal_23 != uVal_28);
          iVal_9 = (int)(uVal_10 >> 0x20);
          uVal_28 = local_3e8;
          if (iVal_9 == 0) goto LAB_180690416;
          if (local_3e8 < 0x73) {
            *(int *)((int64_t)&local_3e4 + (uint64_t)local_3e8 * 4) = iVal_9;
            local_3e8 = local_3e8 + 1;
            uVal_28 = local_3e8;
            goto LAB_180690416;
          }
          local_cf8 = 0;
          local_3e8 = 0;
          memcpy_s(&local_3e4,0x1cc,local_cf4,0);
          bFlag_31 = false;
          uVal_28 = local_3e8;
          goto LAB_18069074e;
        }
LAB_180690416:
        bFlag_31 = true;
      }
      else {
        pU64_21 = &local_3e4;
        if (uVal_28 < 2) {
          iVal_9 = (int)local_3e4;
          uVal_30 = local_3e4 & 0xffffffff;
          local_3e8 = local_218;
          memcpy_s(pU64_21,0x1cc,local_214,(uint64_t)local_218 << 2);
          if (iVal_9 == 0) {
            local_cf8 = 0;
            pU64_21 = local_cf4;
            local_3e8 = 0;
            rVar25 = 0;
            goto LAB_180690736;
          }
          if ((iVal_9 != 1) && (local_3e8 != 0)) {
            uVal_20 = 0;
            uVal_11 = 0;
            do {
              uVal_28 = (int)uVal_11 + 1;
              uVal_10 = *(uint *)((int64_t)&local_3e4 + uVal_11 * 4) * uVal_30 + uVal_20;
              *(int *)((int64_t)&local_3e4 + uVal_11 * 4) = (int)uVal_10;
              uVal_20 = uVal_10 >> 0x20;
              uVal_11 = (uint64_t)uVal_28;
            } while (uVal_28 != local_3e8);
            iVal_9 = (int)(uVal_10 >> 0x20);
            if (iVal_9 != 0) {
              if (0x72 < local_3e8) {
                local_cf8 = 0;
                local_3e8 = 0;
                memcpy_s(&local_3e4,0x1cc,local_cf4,0);
                bFlag_31 = false;
                uVal_28 = local_3e8;
                goto LAB_18069074e;
              }
              *(int *)((int64_t)&local_3e4 + (uint64_t)local_3e8 * 4) = iVal_9;
              local_3e8 = local_3e8 + 1;
            }
          }
        }
        else {
          bFlag_31 = uVal_28 <= local_218;
          local_d40 = uVal_28;
          if (!bFlag_31) {
            pU64_21 = local_214;
            local_d40 = local_218;
          }
          pU64_13 = &local_3e4;
          if (bFlag_31) {
            pU64_13 = local_214;
          }
          uVal_19 = 0;
          uVal_23 = 0;
          uVal_16 = local_218;
          if (!bFlag_31) {
            uVal_16 = uVal_28;
          }
          local_5b8 = 0;
          local_d18 = pU64_21;
          if (local_d40 != 0) {
            do {
              uVal_28 = *(uint *)((int64_t)pU64_21 + (uint64_t)uVal_19 * 4);
              if (uVal_28 == 0) {
                if (uVal_19 == uVal_23) {
                  uVal_23 = uVal_19 + 1;
                  *(uint32_t *)((int64_t)local_5b4 + (uint64_t)uVal_19 * 4) = 0;
                  local_5b8 = uVal_23;
                }
              }
              else {
                uVal_30 = 0;
                uVal_24 = uVal_19;
                if (uVal_16 != 0) {
                  uVal_11 = (uint64_t)uVal_19;
                  do {
                    uVal_24 = (uint)uVal_11;
                    uVal_20 = uVal_11;
                    if (uVal_24 == 0x73) break;
                    if (uVal_24 == uVal_23) {
                      *(uint32_t *)((int64_t)local_5b4 + uVal_11 * 4) = 0;
                      local_5b8 = uVal_24 + 1;
                    }
                    uVal_20 = (uint64_t)(uVal_24 + 1);
                    uVal_30 = (uint64_t)
                             *(uint *)((int64_t)pU64_13 + (uint64_t)(-uVal_19 + uVal_24) * 4) *
                             (uint64_t)uVal_28 + uVal_30 +
                             (uint64_t)*(uint *)((int64_t)local_5b4 + uVal_11 * 4);
                    *(int *)((int64_t)local_5b4 + uVal_11 * 4) = (int)uVal_30;
                    uVal_30 = uVal_30 >> 0x20;
                    uVal_11 = uVal_20;
                    uVal_23 = local_5b8;
                  } while (-uVal_19 + uVal_24 + 1 != uVal_16);
                  uVal_24 = (uint)uVal_20;
                  uVal_28 = (uint)uVal_30;
                  while (uVal_28 != 0) {
                    uVal_24 = (uint)uVal_20;
                    if (uVal_24 == 0x73) goto LAB_1806907c9;
                    if (uVal_24 == uVal_23) {
                      *(uint32_t *)((int64_t)local_5b4 + uVal_20 * 4) = 0;
                      local_5b8 = uVal_24 + 1;
                    }
                    uVal_24 = uVal_24 + 1;
                    lVal_14 = *(uint *)((int64_t)local_5b4 + uVal_20 * 4) + uVal_30;
                    *(int *)((int64_t)local_5b4 + uVal_20 * 4) = (int)lVal_14;
                    uVal_28 = (uint)((uint64_t)lVal_14 >> 0x20);
                    uVal_30 = (uint64_t)uVal_28;
                    uVal_20 = (uint64_t)uVal_24;
                    uVal_23 = local_5b8;
                  }
                }
                if (uVal_24 == 0x73) {
LAB_1806907c9:
                  local_b28 = 0;
                  local_3e8 = 0;
                  memcpy_s(&local_3e4,0x1cc,local_b24,0);
                  goto LAB_18069086f;
                }
              }
              uVal_19 = uVal_19 + 1;
            } while (uVal_19 != local_d40);
          }
          pU64_21 = local_5b4;
          rVar25 = (uint64_t)uVal_23 << 2;
          local_3e8 = uVal_23;
LAB_180690736:
          memcpy_s(&local_3e4,0x1cc,pU64_21,rVar25);
        }
        bFlag_31 = true;
        uVal_28 = local_3e8;
      }
LAB_18069074e:
      if (!bFlag_31) goto LAB_18069086f;
    }
    if (local_d48 % 10 != 0) {
      uVal_27 = (&DAT_1806e6b58)[local_d48 % 10 - 1];
      if (uVal_27 == 0) {
        local_cf8 = 0;
        local_3e8 = 0;
        memcpy_s(&local_3e4,0x1cc,local_cf4,0);
        uVal_28 = local_3e8;
      }
      else if ((uVal_27 != 1) && (uVal_28 != 0)) {
        uVal_11 = 0;
        uVal_30 = 0;
        do {
          uVal_23 = (int)uVal_30 + 1;
          uVal_20 = (uint64_t)*(uint *)((int64_t)&local_3e4 + uVal_30 * 4) * (uint64_t)uVal_27 +
                   uVal_11;
          *(int *)((int64_t)&local_3e4 + uVal_30 * 4) = (int)uVal_20;
          uVal_11 = uVal_20 >> 0x20;
          uVal_30 = (uint64_t)uVal_23;
        } while (uVal_23 != uVal_28);
        iVal_9 = (int)(uVal_20 >> 0x20);
        uVal_28 = local_3e8;
        if (iVal_9 != 0) {
          if (0x72 < local_3e8) {
LAB_18069086f:
            local_cf8 = 0;
            local_3e8 = 0;
            memcpy_s(&local_3e4,0x1cc,local_cf4,0);
            ch_1 = *(char *)(local_d28 + 0xc2);
            if (*(char *)(local_d20 + 1) == '\0') {
              pU64_26 = (uint *)func_0x18068ea98();
              *pU64_26 = -(uint)(ch_1 != '\0') & 0x80000000;
            }
            else {
              pU64_7 = (uint64_t *)func_0x18068ea5c();
              *pU64_7 = -(uint64_t)(ch_1 != '\0') & 0x8000000000000000;
            }
            goto LAB_180690cc2;
          }
          *(int *)((int64_t)&local_3e4 + (uint64_t)local_3e8 * 4) = iVal_9;
          local_3e8 = local_3e8 + 1;
          uVal_28 = local_3e8;
        }
      }
    }
    if (uVal_22 == 0) {
      uVal_27 = 0;
    }
    else {
      local_d38 = (uint64_t *)((uint64_t)local_d38 & 0xffffffff00000000);
      pU64_26 = (uint *)((int64_t)local_954 + (uint64_t)(uVal_22 - 1) * 4);
      iVal_9 = 0x1f;
      bFlag_31 = *pU64_26 == 0;
      if (!bFlag_31) {
        for (; *pU64_26 >> iVal_9 == 0; iVal_9 = iVal_9 + -1) {
        }
      }
      if (bFlag_31) {
        iVal_9 = 0;
      }
      else {
        iVal_9 = iVal_9 + 1;
      }
      uVal_27 = (uVal_22 - 1) * 0x20 + iVal_9;
    }
    if (uVal_28 == 0) {
      uVal_23 = 0;
    }
    else {
      local_d38 = (uint64_t *)((uint64_t)local_d38 & 0xffffffff00000000);
      pU64_26 = (uint *)((int64_t)&local_3e4 + (uint64_t)(uVal_28 - 1) * 4);
      iVal_9 = 0x1f;
      bFlag_31 = *pU64_26 == 0;
      if (!bFlag_31) {
        for (; *pU64_26 >> iVal_9 == 0; iVal_9 = iVal_9 + -1) {
        }
      }
      if (bFlag_31) {
        iVal_9 = 0;
      }
      else {
        iVal_9 = iVal_9 + 1;
      }
      uVal_23 = (uVal_28 - 1) * 0x20 + iVal_9;
    }
    uVal_27 = -(uint)(uVal_27 < uVal_23) & uVal_23 - uVal_27;
    local_d44 = uVal_27;
    if (uVal_27 != 0) {
      local_d48 = 0;
      uVal_23 = uVal_27 & 0x1f;
      uVal_19 = uVal_27 >> 5;
      local_d38 = (uint64_t *)CONCAT44(local_d38._4_4_,0x20 - uVal_23);
      bFlag_8 = (byte)(0x20 - uVal_23);
      uVal_16 = (1 << (bFlag_8 & 0x3f)) - 1;
      local_d40 = ~uVal_16;
      pU64_26 = (uint *)((int64_t)local_954 + (uint64_t)(uVal_22 - 1) * 4);
      iVal_9 = 0x1f;
      bFlag_31 = *pU64_26 == 0;
      if (!bFlag_31) {
        for (; *pU64_26 >> iVal_9 == 0; iVal_9 = iVal_9 + -1) {
        }
      }
      if (bFlag_31) {
        iVal_9 = 0;
      }
      else {
        iVal_9 = iVal_9 + 1;
      }
      if ((uVal_19 + uVal_22 < 0x74) &&
         (local_d48 = (0x20U - iVal_9 < uVal_23) + uVal_19 + uVal_22, local_d48 < 0x74)) {
        uVal_24 = local_d48 - 1;
        if (uVal_24 != uVal_19 - 1) {
          do {
            uVal_4 = uVal_24 - uVal_19;
            if (uVal_4 < uVal_22) {
              uVal_5 = *(uint *)((int64_t)local_954 + (uint64_t)uVal_4 * 4);
            }
            else {
              uVal_5 = 0;
            }
            if (uVal_4 - 1 < uVal_22) {
              uVal_22 = *(uint *)((int64_t)local_954 + (uint64_t)(uVal_4 - 1) * 4);
            }
            else {
              uVal_22 = 0;
            }
            *(uint *)((int64_t)local_954 + (uint64_t)uVal_24 * 4) =
                 (uVal_22 & local_d40) >> (bFlag_8 & 0x1f) | (uVal_5 & uVal_16) << (sbyte)uVal_23;
            uVal_24 = uVal_24 - 1;
            uVal_22 = local_958;
          } while (uVal_24 != uVal_19 - 1);
        }
        uVal_23 = 0;
        local_958 = local_d48;
        uVal_22 = local_d48;
        if (uVal_19 != 0) {
          do {
            uVal_30 = (uint64_t)uVal_23;
            uVal_23 = uVal_23 + 1;
            *(uint32_t *)((int64_t)local_954 + uVal_30 * 4) = 0;
          } while (uVal_23 != uVal_19);
        }
      }
      else {
        local_cf8 = 0;
        local_958 = 0;
        memcpy_s(local_954,0x1cc,local_cf4,0);
        uVal_22 = local_958;
      }
    }
    uVal_23 = local_d3c;
    local_d30 = local_d30 - local_d3c;
    uVal_16 = local_d30;
    if (local_d3c != 0) {
      if (local_d30 < uVal_27) {
        bFlag_31 = true;
        goto LAB_180690ca0;
      }
      uVal_16 = local_d30 - uVal_27;
    }
    if (uVal_28 < uVal_22) {
LAB_180690abe:
      bFlag_31 = false;
    }
    else {
      uVal_19 = uVal_22;
      if (uVal_22 < uVal_28) {
        bFlag_31 = true;
      }
      else {
        do {
          uVal_19 = uVal_19 - 1;
          if (uVal_19 == 0xffffffff) goto LAB_180690abe;
          uVal_28 = *(uint *)((int64_t)&local_3e4 + (uint64_t)uVal_19 * 4);
          uVal_24 = *(uint *)((int64_t)local_954 + (uint64_t)uVal_19 * 4);
        } while (uVal_24 == uVal_28);
        bFlag_31 = uVal_24 <= uVal_28;
      }
    }
    if (bFlag_31) {
      uVal_27 = uVal_27 + 1;
    }
    uVal_24 = uVal_16 >> 5;
    sz_3 = (sbyte)(uVal_16 & 0x1f);
    bFlag_8 = 0x20 - sz_3;
    uVal_19 = (int)(1L << (bFlag_8 & 0x3f)) - 1;
    uVal_28 = ~uVal_19;
    local_d38 = (uint64_t *)CONCAT44(local_d38._4_4_,uVal_28);
    pU64_26 = (uint *)((int64_t)local_954 + (uint64_t)(uVal_22 - 1) * 4);
    iVal_9 = 0x1f;
    bFlag_31 = *pU64_26 == 0;
    if (!bFlag_31) {
      for (; *pU64_26 >> iVal_9 == 0; iVal_9 = iVal_9 + -1) {
      }
    }
    if (bFlag_31) {
      iVal_9 = 0;
    }
    else {
      iVal_9 = iVal_9 + 1;
    }
    local_d44 = uVal_27;
    if ((uVal_24 + uVal_22 < 0x74) &&
       (uVal_16 = (0x20U - iVal_9 < (uVal_16 & 0x1f)) + uVal_24 + uVal_22, uVal_16 < 0x74)) {
      uVal_4 = uVal_16;
      while (uVal_4 = uVal_4 - 1, uVal_4 != uVal_24 - 1) {
        uVal_5 = uVal_4 - uVal_24;
        if (uVal_5 < uVal_22) {
          uVal_17 = *(uint *)((int64_t)local_954 + (uint64_t)uVal_5 * 4);
        }
        else {
          uVal_17 = 0;
        }
        if (uVal_5 - 1 < uVal_22) {
          uVal_22 = *(uint *)((int64_t)local_954 + (uint64_t)(uVal_5 - 1) * 4);
        }
        else {
          uVal_22 = 0;
        }
        *(uint *)((int64_t)local_954 + (uint64_t)uVal_4 * 4) =
             (uVal_22 & uVal_28) >> (bFlag_8 & 0x1f) | (uVal_17 & uVal_19) << sz_3;
        uVal_22 = local_958;
      }
      uVal_22 = 0;
      local_958 = uVal_16;
      if (uVal_24 != 0) {
        do {
          uVal_30 = (uint64_t)uVal_22;
          uVal_22 = uVal_22 + 1;
          *(uint32_t *)((int64_t)local_954 + uVal_30 * 4) = 0;
        } while (uVal_22 != uVal_24);
      }
    }
    else {
      local_cf8 = 0;
      local_958 = 0;
      memcpy_s(local_954,0x1cc,local_cf4,0);
    }
    uVal_30 = func_0x18068e5d0(&local_958,&local_3e8);
    bFlag_31 = local_958 == 0;
    lVal_14 = 0x3f;
    if (uVal_30 != 0) {
      for (; uVal_30 >> lVal_14 == 0; lVal_14 = lVal_14 + -1) {
      }
    }
    if (uVal_30 == 0) {
      uVal_22 = 0;
    }
    else {
      uVal_22 = (int)lVal_14 + 1;
    }
    if (local_d30 < uVal_22) {
      bFlag_8 = (char)uVal_22 - (byte)local_d30;
      if ((!bFlag_31) || (bFlag_31 = true, (uVal_30 & (1L << (bFlag_8 & 0x3f)) - 1U) != 0)) {
        bFlag_31 = false;
      }
      uVal_30 = uVal_30 >> (bFlag_8 & 0x3f);
    }
    ppuStack_d58 = local_d20;
    uVal_11 = 0;
    if (uVal_29 != 0) {
      uVal_11 = (uint64_t)(uint)local_784;
    }
    uVal_20 = 0;
    if (1 < uVal_29) {
      uVal_20 = (uint64_t)local_784._4_4_;
    }
    uVal_22 = ~uVal_27;
    if (uVal_23 != 0) {
      uVal_22 = uVal_23 - 2;
    }
    func_0x18068ead4(uVal_30 + ((uVal_20 << 0x20) + uVal_11 << ((byte)local_d30 & 0x3f)),uVal_22,
                  *(uint8_t *)(local_d28 + 0xc2),bFlag_31);
  }
  else {
    bFlag_31 = local_d48 != 0;
LAB_180690ca0:
    ppuStack_d58 = local_d20;
    func_0x18068ee8c(&local_788,local_d3c,*(uint8_t *)(local_d28 + 0xc2),bFlag_31);
  }
LAB_180690cc2:
  func_0x180673080(local_48 ^ (uint64_t)auStack_d78);
  return;
}

// __crt_strtox::convert_hexadecimal_string_to_floating_type_common
/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type_common(struct
   __crt_strtox::floating_point_string const & __ptr64,class __crt_strtox::floating_point_value
   const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */
/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type_common(struct
   __crt_strtox::floating_point_string const & __ptr64,class __crt_strtox::floating_point_value
   const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */
SLD_STATUS __cdecl __crt_strtox:: convert_hexadecimal_string_to_floating_type_common(floating_point_string *param_1,floating_point_value *param_2)
{
  floating_point_string fVal_1;
  SLD_STATUS SVar2;
  uint64_t uVal_3;
  floating_point_string *pFloat_4;
  bool bFlag_5;
  int iVal_6;
  floating_point_string *pFloat_7;
  
  uVal_3 = 0;
  pFloat_4 = param_1 + 8;
  pFloat_7 = param_1 + (uint64_t)*(uint *)(param_1 + 4) + 8;
  iVal_6 = (-(uint)(param_2[8] != (floating_point_value)0x0) & 0x1d) + 0x17 + *(int *)param_1;
  if (pFloat_4 != pFloat_7) {
    do {
      if ((-(uint64_t)(param_2[8] != (floating_point_value)0x0) & 0x1fffffff000000) + 0xffffff <
          uVal_3) break;
      fVal_1 = *pFloat_4;
      iVal_6 = iVal_6 + -4;
      pFloat_4 = pFloat_4 + 1;
      uVal_3 = uVal_3 * 0x10 + (uint64_t)(byte)fVal_1;
    } while (pFloat_4 != pFloat_7);
  }
  bFlag_5 = true;
  while ((pFloat_4 != pFloat_7 && (bFlag_5 != false))) {
    fVal_1 = *pFloat_4;
    pFloat_4 = pFloat_4 + 1;
    bFlag_5 = fVal_1 == (floating_point_string)0x0;
  }
  SVar2 = func_0x18068ead4(uVal_3,iVal_6,CONCAT71((int7)((uint64_t)pFloat_4 >> 8),param_1[0x308]),bFlag_5,
                        param_2);
  return SVar2;
}

// func_0x180690d98
uint32_t func_0x180690d98(int64_t param_1,int64_t *param_2,__crt_locale_pointers *param_3)
{
  int iVal_1;
  uint32_t *pU64_2;
  uint32_t local_res8 [2];
  int64_t local_38;
  int64_t *local_30;
  int64_t local_28;
  uint8_t local_20 [16];
  char local_10;
  
  if (param_2 != (int64_t *)0x0) {
    *param_2 = param_1;
  }
  if (param_1 == 0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    local_res8[0] = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_3);
    local_res8[0] = 0;
    if (param_2 != (int64_t *)0x0) {
      *param_2 = param_1;
    }
    local_38 = param_1;
    local_30 = param_2;
    iVal_1 = parse_floating_point<>(local_20,&local_38,local_res8);
    if (iVal_1 - 2U < 2) {
      pU64_2 = (uint32_t *)func_0x1806823dc();
      *pU64_2 = 0x22;
    }
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return local_res8[0];
}

// common_strtod_l<>
/* Library Function - Multiple Matches With Same Base Name
    double __cdecl common_strtod_l<double,char>(char const * __ptr64 const,char * __ptr64 * __ptr64
   const,struct __crt_locale_pointers * __ptr64 const)
    double __cdecl common_strtod_l<double,wchar_t>(wchar_t const * __ptr64 const,wchar_t * __ptr64 *
   __ptr64 const,struct __crt_locale_pointers * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    double __cdecl common_strtod_l<double,char>(char const * __ptr64 const,char * __ptr64 * __ptr64
   const,struct __crt_locale_pointers * __ptr64 const)
    double __cdecl common_strtod_l<double,wchar_t>(wchar_t const * __ptr64 const,wchar_t * __ptr64 *
   __ptr64 const,struct __crt_locale_pointers * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint64_t common_strtod_l<>(int64_t param_1,int64_t *param_2,__crt_locale_pointers *param_3)
{
  int iVal_1;
  uint32_t *pU64_2;
  uint64_t local_res8;
  int64_t local_38;
  int64_t *local_30;
  int64_t local_28;
  uint8_t local_20 [16];
  char local_10;
  
  if (param_2 != (int64_t *)0x0) {
    *param_2 = param_1;
  }
  if (param_1 == 0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    local_res8 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_3);
    local_res8 = 0;
    if (param_2 != (int64_t *)0x0) {
      *param_2 = param_1;
    }
    local_38 = param_1;
    local_30 = param_2;
    iVal_1 = parse_floating_point<>(local_20,&local_38,&local_res8);
    if (iVal_1 - 2U < 2) {
      pU64_2 = (uint32_t *)func_0x1806823dc();
      *pU64_2 = 0x22;
    }
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return local_res8;
}

// parse_floating_point<>
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<char>,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<char>,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<char>,double>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<char>,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<char>,struct _LDBL12>(struct __crt_locale_pointers *
   __ptr64 const,class __crt_strtox::c_string_character_source<char>,struct _LDBL12 * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<wchar_t>,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<wchar_t>,float * __ptr64 const)
     5 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<char>,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<char>,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<char>,double>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<char>,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<char>,struct _LDBL12>(struct __crt_locale_pointers *
   __ptr64 const,class __crt_strtox::c_string_character_source<char>,struct _LDBL12 * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<wchar_t>,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<wchar_t>,float * __ptr64 const)
     5 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void parse_floating_point<>(int64_t param_1,uint64_t *param_2,int64_t param_3)
{
  uint32_t uVal_1;
  uint32_t *pU64_2;
  uint8_t auStack_348 [32];
  uint8_t local_328 [784];
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    if ((uint64_t *)param_2[1] != (uint64_t *)0x0) {
      *(uint64_t *)param_2[1] = *param_2;
    }
  }
  else {
    uVal_1 = func_0x180691024(param_1,param_2,local_328);
    func_0x1806914e8(uVal_1,local_328,param_3);
    if ((uint64_t *)param_2[1] != (uint64_t *)0x0) {
      *(uint64_t *)param_2[1] = *param_2;
    }
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_348);
  return;
}

// parse_floating_point<>
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<char>,double>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<char>,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<wchar_t>,double>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<wchar_t>,double * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<char>,double>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<char>,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<wchar_t>,double>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<wchar_t>,double * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void parse_floating_point<>(int64_t param_1,uint64_t *param_2,int64_t param_3)
{
  uint32_t uVal_1;
  uint32_t *pU64_2;
  uint8_t auStack_348 [32];
  uint8_t local_328 [784];
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    if ((uint64_t *)param_2[1] != (uint64_t *)0x0) {
      *(uint64_t *)param_2[1] = *param_2;
    }
  }
  else {
    uVal_1 = func_0x180691024(param_1,param_2,local_328);
    func_0x180691650(uVal_1,local_328,param_3);
    if ((uint64_t *)param_2[1] != (uint64_t *)0x0) {
      *(uint64_t *)param_2[1] = *param_2;
    }
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_348);
  return;
}

// func_0x180691024
uint64_t func_0x180691024(int64_t *param_1,char **param_2,int *param_3)
{
  int *pInt_1;
  char ch_2;
  bool bFlag_3;
  uint32_t uVal_4;
  byte bFlag_5;
  int iVal_6;
  uint uVal_7;
  uint32_t *pU64_8;
  char *fnPtr_9;
  uint64_t uVal_10;
  char ch_11;
  int *pInt_12;
  char *fnPtr_13;
  byte bFlag_14;
  uint32_t local_res10;
  int *local_res18;
  
  fnPtr_13 = *param_2;
  local_res18 = param_3;
  if (fnPtr_13 == (char *)0x0) {
    pU64_8 = (uint32_t *)func_0x1806823dc();
    *pU64_8 = 0x16;
    func_0x180684970();
    return 7;
  }
  ch_11 = *fnPtr_13;
  *param_2 = fnPtr_13 + 1;
  local_res10 = CONCAT31(local_res10._1_3_,ch_11);
  iVal_6 = func_0x18068917c();
  uVal_4 = local_res10;
  while (local_res10._1_3_ = (undefined3)((uint)uVal_4 >> 8), iVal_6 != 0) {
    ch_11 = **param_2;
    *param_2 = *param_2 + 1;
    local_res10 = CONCAT31(local_res10._1_3_,ch_11);
    iVal_6 = func_0x18068917c();
    uVal_4 = local_res10;
  }
  *(bool *)(param_3 + 0xc2) = ch_11 == '-';
  if ((ch_11 == '-') || (ch_11 == '+')) {
    ch_11 = **param_2;
    *param_2 = *param_2 + 1;
    local_res10 = CONCAT31(local_res10._1_3_,ch_11);
    uVal_4 = local_res10;
  }
  local_res10 = uVal_4;
  if ((ch_11 == 'I') || (ch_11 == 'i')) {
    uVal_10 = func_0x180691828(&local_res10,param_2,fnPtr_13);
    return uVal_10;
  }
  if ((ch_11 + 0xb2U & 0xdf) == 0) {
    uVal_10 = func_0x18069196c(&local_res10,param_2,fnPtr_13);
    return uVal_10;
  }
  bFlag_14 = 0;
  if (ch_11 == '0') {
    fnPtr_9 = *param_2;
    ch_2 = *fnPtr_9;
    *param_2 = fnPtr_9 + 1;
    if ((ch_2 + 0xa8U & 0xdf) == 0) {
      ch_11 = fnPtr_9[1];
      *param_2 = fnPtr_9 + 2;
      bFlag_14 = 1;
      fnPtr_13 = fnPtr_9;
    }
    else {
      *param_2 = fnPtr_9;
      if ((ch_2 != '\0') && (*fnPtr_9 != ch_2)) {
        pU64_8 = (uint32_t *)func_0x1806823dc();
        *pU64_8 = 0x16;
        func_0x180684970();
      }
    }
  }
  param_3 = param_3 + 2;
  local_res10 = 0;
  bFlag_3 = false;
  if (ch_11 == '0') {
    bFlag_3 = true;
    do {
      ch_11 = **param_2;
      *param_2 = *param_2 + 1;
    } while (ch_11 == '0');
  }
  pInt_12 = param_3;
  while( true ) {
    if ((byte)(ch_11 - 0x30U) < 10) {
      uVal_7 = (int)ch_11 - 0x30;
    }
    else if ((byte)(ch_11 + 0x9fU) < 0x1a) {
      uVal_7 = (int)ch_11 - 0x57;
    }
    else if ((byte)(ch_11 + 0xbfU) < 0x1a) {
      uVal_7 = (int)ch_11 - 0x37;
    }
    else {
      uVal_7 = 0xffffffff;
    }
    if ((-(uint)(bFlag_14 != 0) & 6) + 9 < uVal_7) break;
    bFlag_3 = true;
    if (pInt_12 != local_res18 + 0xc2) {
      *(char *)pInt_12 = (char)uVal_7;
      pInt_12 = (int *)((int64_t)pInt_12 + 1);
    }
    local_res10 = local_res10 + 1;
    ch_11 = **param_2;
    *param_2 = *param_2 + 1;
  }
  if (ch_11 == ***(char ***)(*param_1 + 0xf8)) {
    ch_11 = **param_2;
    fnPtr_9 = *param_2 + 1;
    *param_2 = fnPtr_9;
    if ((pInt_12 == param_3) && (ch_11 == '0')) {
      bFlag_3 = true;
      do {
        ch_11 = *fnPtr_9;
        local_res10 = local_res10 + -1;
        fnPtr_9 = fnPtr_9 + 1;
        *param_2 = fnPtr_9;
      } while (ch_11 == '0');
    }
    while( true ) {
      if ((ch_11 < '0') || ('9' < ch_11)) {
        if ((byte)(ch_11 + 0x9fU) < 0x1a) {
          uVal_7 = (int)ch_11 - 0x57;
        }
        else if ((byte)(ch_11 + 0xbfU) < 0x1a) {
          uVal_7 = (int)ch_11 - 0x37;
        }
        else {
          uVal_7 = 0xffffffff;
        }
      }
      else {
        uVal_7 = (int)ch_11 - 0x30;
      }
      if ((-(uint)(bFlag_14 != 0) & 6) + 9 < uVal_7) break;
      bFlag_3 = true;
      if (pInt_12 != local_res18 + 0xc2) {
        *(char *)pInt_12 = (char)uVal_7;
        pInt_12 = (int *)((int64_t)pInt_12 + 1);
      }
      ch_11 = **param_2;
      *param_2 = *param_2 + 1;
    }
  }
  fnPtr_9 = *param_2 + -1;
  *param_2 = fnPtr_9;
  if (!bFlag_3) {
    if ((ch_11 != '\0') && (*fnPtr_9 != ch_11)) {
      pU64_8 = (uint32_t *)func_0x1806823dc();
      *pU64_8 = 0x16;
      func_0x180684970();
    }
    *param_2 = fnPtr_13;
    if (bFlag_14 != 0) {
      return 2;
    }
    return 7;
  }
  if ((ch_11 != '\0') && (*fnPtr_9 != ch_11)) {
    pU64_8 = (uint32_t *)func_0x1806823dc();
    *pU64_8 = 0x16;
    func_0x180684970();
  }
  fnPtr_9 = *param_2;
  ch_11 = *fnPtr_9;
  fnPtr_13 = fnPtr_9 + 1;
  *param_2 = fnPtr_13;
  if (ch_11 == 'E') {
LAB_1806912fd:
    bFlag_5 = bFlag_14 ^ 1;
  }
  else if (ch_11 == 'P') {
LAB_1806912f8:
    bFlag_5 = bFlag_14;
  }
  else {
    if (ch_11 == 'e') goto LAB_1806912fd;
    bFlag_5 = 0;
    if (ch_11 == 'p') goto LAB_1806912f8;
  }
  iVal_6 = 0;
  if (bFlag_5 != 0) {
    ch_2 = *fnPtr_13;
    fnPtr_13 = fnPtr_9 + 2;
    *param_2 = fnPtr_13;
    if ((ch_2 == '+') || (ch_11 = ch_2, ch_2 == '-')) {
      ch_11 = *fnPtr_13;
      fnPtr_13 = fnPtr_9 + 3;
      *param_2 = fnPtr_13;
    }
    bFlag_3 = false;
    if (ch_11 != '0') goto LAB_18069135f;
    do {
      ch_11 = *fnPtr_13;
      fnPtr_13 = fnPtr_13 + 1;
      *param_2 = fnPtr_13;
    } while (ch_11 == '0');
    while( true ) {
      bFlag_3 = true;
LAB_18069135f:
      if ((ch_11 < '0') || ('9' < ch_11)) {
        if ((byte)(ch_11 + 0x9fU) < 0x1a) {
          uVal_7 = (int)ch_11 - 0x57;
        }
        else {
          if (0x19 < (byte)(ch_11 + 0xbfU)) goto LAB_1806913af;
          uVal_7 = (int)ch_11 - 0x37;
        }
      }
      else {
        uVal_7 = (int)ch_11 - 0x30;
      }
      if (9 < uVal_7) goto LAB_1806913af;
      bFlag_3 = true;
      iVal_6 = uVal_7 + iVal_6 * 10;
      if (0x1450 < iVal_6) break;
      ch_11 = *fnPtr_13;
      fnPtr_13 = fnPtr_13 + 1;
      *param_2 = fnPtr_13;
    }
    iVal_6 = 0x1451;
LAB_1806913af:
    do {
      if ((byte)(ch_11 - 0x30U) < 10) {
        uVal_7 = (int)ch_11 - 0x30;
      }
      else if ((byte)(ch_11 + 0x9fU) < 0x1a) {
        uVal_7 = (int)ch_11 - 0x57;
      }
      else {
        if (0x19 < (byte)(ch_11 + 0xbfU)) goto LAB_1806913ec;
        uVal_7 = (int)ch_11 - 0x37;
      }
      if (9 < uVal_7) goto LAB_1806913ec;
      ch_11 = *fnPtr_13;
      fnPtr_13 = fnPtr_13 + 1;
      *param_2 = fnPtr_13;
    } while( true );
  }
LAB_180691422:
  *param_2 = fnPtr_13 + -1;
  if ((ch_11 != '\0') && (fnPtr_13[-1] != ch_11)) {
    pU64_8 = (uint32_t *)func_0x1806823dc();
    *pU64_8 = 0x16;
    func_0x180684970();
  }
  if (pInt_12 != param_3) {
    do {
      pInt_1 = (int *)((int64_t)pInt_12 + -1);
      if (*(char *)pInt_1 != '\0') break;
      pInt_12 = pInt_1;
    } while (pInt_1 != param_3);
    if (pInt_12 != param_3) {
      if (0x1450 < iVal_6) {
        return 9;
      }
      if (-0x1451 < iVal_6) {
        iVal_6 = iVal_6 + ((-(uint)(bFlag_14 != 0) & 3) + 1) * local_res10;
        if (0x1450 < iVal_6) {
          return 9;
        }
        if (-0x1451 < iVal_6) {
          *local_res18 = iVal_6;
          local_res18[1] = (int)pInt_12 - (int)param_3;
          return (uint64_t)bFlag_14;
        }
      }
      return 8;
    }
  }
  return 2;
LAB_1806913ec:
  if (ch_2 == '-') {
    iVal_6 = -iVal_6;
  }
  if (!bFlag_3) {
    *param_2 = fnPtr_13 + -1;
    if ((ch_11 != '\0') && (fnPtr_13[-1] != ch_11)) {
      pU64_8 = (uint32_t *)func_0x1806823dc();
      *pU64_8 = 0x16;
      func_0x180684970();
    }
    *param_2 = fnPtr_9;
    fnPtr_13 = fnPtr_9 + 1;
    ch_11 = *fnPtr_9;
  }
  goto LAB_180691422;
}

// func_0x1806914e8
SLD_STATUS func_0x1806914e8(int param_1,floating_point_string *param_2,uint *param_3)
{
  SLD_STATUS SVar1;
  uint uVal_2;
  uint *local_18;
  uint8_t local_10;
  
  if (param_1 < 6) {
    if (param_1 == 5) {
      uVal_2 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) + 0x7f800000 |
              *param_3 & 0x7f800000 | 1;
    }
    else {
      local_18 = param_3;
      if (param_1 == 0) {
        local_10 = 0;
        SVar1 = func_0x18068efec(param_2,&local_18);
        return SVar1;
      }
      if (param_1 == 1) {
        local_10 = 0;
        SVar1 = __crt_strtox::convert_hexadecimal_string_to_floating_type_common
                          (param_2,(floating_point_value *)&local_18);
        return SVar1;
      }
      if (param_1 == 2) {
        uVal_2 = -(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000;
      }
      else if (param_1 == 3) {
        uVal_2 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) + 0x7f800000 |
                *param_3 & 0x7f800000;
      }
      else {
        if (param_1 != 4) {
          return 1;
        }
        uVal_2 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) + 0x7fffffff;
      }
    }
    *param_3 = uVal_2;
  }
  else {
    if (param_1 != 6) {
      if (param_1 == 7) {
        *param_3 = 0;
      }
      else {
        if (param_1 == 8) {
          *param_3 = -(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000;
          return 2;
        }
        if (param_1 == 9) {
          *param_3 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) +
                     0x7f800000 | *param_3 & 0x7f800000;
          return 3;
        }
      }
      return 1;
    }
    *param_3 = 0xffc00000;
  }
  return 0;
}

// func_0x180691650
SLD_STATUS func_0x180691650(int param_1,floating_point_string *param_2,uint64_t *param_3)
{
  SLD_STATUS SVar1;
  uint64_t uVal_2;
  uint64_t *local_18;
  uint8_t local_10;
  
  if (param_1 < 6) {
    if (param_1 == 5) {
      uVal_2 = (-(uint64_t)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) +
              0x7ff0000000000000 | *param_3 & 0x7ff0000000000000 | 1;
    }
    else {
      local_18 = param_3;
      if (param_1 == 0) {
        local_10 = 1;
        SVar1 = func_0x18068efec(param_2,&local_18);
        return SVar1;
      }
      if (param_1 == 1) {
        local_10 = 1;
        SVar1 = __crt_strtox::convert_hexadecimal_string_to_floating_type_common
                          (param_2,(floating_point_value *)&local_18);
        return SVar1;
      }
      if (param_1 == 2) {
        uVal_2 = -(uint64_t)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000;
      }
      else if (param_1 == 3) {
        uVal_2 = (-(uint64_t)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) +
                0x7ff0000000000000 | *param_3 & 0x7ff0000000000000;
      }
      else {
        if (param_1 != 4) {
          return 1;
        }
        uVal_2 = (-(uint64_t)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) +
                0x7fffffffffffffff;
      }
    }
    *param_3 = uVal_2;
  }
  else {
    if (param_1 != 6) {
      if (param_1 == 7) {
        *param_3 = 0;
      }
      else {
        if (param_1 == 8) {
          *param_3 = -(uint64_t)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000
          ;
          return 2;
        }
        if (param_1 == 9) {
          *param_3 = (-(uint64_t)(param_2[0x308] != (floating_point_string)0x0) &
                     0x8000000000000000) + 0x7ff0000000000000 | *param_3 & 0x7ff0000000000000;
          return 3;
        }
      }
      return 1;
    }
    *param_3 = 0xfff8000000000000;
  }
  return 0;
}

// func_0x180691828
uint64_t func_0x180691828(char *param_1,char **param_2,char *param_3)
{
  char *fnPtr_1;
  uint32_t *pU64_2;
  char ch_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  lVal_4 = 0;
  uVal_5 = 3;
  while ((ch_3 = *param_1, ch_3 == (&DAT_1806e6b7c)[lVal_4] || (ch_3 == (&DAT_1806e6b80)[lVal_4])))
  {
    lVal_4 = lVal_4 + 1;
    ch_3 = **param_2;
    *param_2 = *param_2 + 1;
    *param_1 = ch_3;
    if (lVal_4 == 3) {
      fnPtr_1 = *param_2;
      *param_2 = fnPtr_1 + -1;
      if ((ch_3 != '\0') && (fnPtr_1[-1] != ch_3)) {
        pU64_2 = (uint32_t *)func_0x1806823dc();
        *pU64_2 = 0x16;
        func_0x180684970();
      }
      param_3 = *param_2;
      lVal_4 = 0;
      ch_3 = *param_3;
      *param_2 = param_3 + 1;
      *param_1 = ch_3;
      while ((ch_3 == "INITY"[lVal_4] || (ch_3 == "inity"[lVal_4]))) {
        lVal_4 = lVal_4 + 1;
        ch_3 = **param_2;
        *param_2 = *param_2 + 1;
        *param_1 = ch_3;
        if (lVal_4 == 5) {
          fnPtr_1 = *param_2;
          *param_2 = fnPtr_1 + -1;
          if ((ch_3 != '\0') && (fnPtr_1[-1] != ch_3)) {
            pU64_2 = (uint32_t *)func_0x1806823dc();
            *pU64_2 = 0x16;
            func_0x180684970();
          }
          return 3;
        }
      }
      *param_2 = *param_2 + -1;
      if ((ch_3 != '\0') && (**param_2 != ch_3)) {
        pU64_2 = (uint32_t *)func_0x1806823dc();
        *pU64_2 = 0x16;
        func_0x180684970();
      }
LAB_180691962:
      *param_1 = '\0';
      *param_2 = param_3;
      return uVal_5;
    }
  }
  *param_2 = *param_2 + -1;
  if ((ch_3 != '\0') && (**param_2 != ch_3)) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
  }
  uVal_5 = 7;
  goto LAB_180691962;
}

// func_0x18069196c
/* WARNING: Removing unreachable block (ram,0x000180691b36) */
/* WARNING: Removing unreachable block (ram,0x000180691b36) */
uint64_t func_0x18069196c(char *param_1,char **param_2,char *param_3)
{
  char *fnPtr_1;
  int64_t lVal_2;
  char ch_3;
  char ch_4;
  int *pInt_5;
  uint32_t *pU64_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  int iVal_9;
  
  lVal_2 = 0;
  do {
    lVal_8 = lVal_2;
    ch_3 = *param_1;
    if ((ch_3 != (&DAT_1806e6b94)[lVal_8]) && (ch_3 != (&DAT_1806e6b98)[lVal_8])) {
      *param_2 = *param_2 + -1;
      if ((ch_3 != '\0') && (**param_2 != ch_3)) {
        pU64_6 = (uint32_t *)func_0x1806823dc();
        *pU64_6 = 0x16;
        func_0x180684970();
      }
      uVal_7 = 7;
      goto LAB_180691b4b;
    }
    ch_3 = **param_2;
    *param_2 = *param_2 + 1;
    *param_1 = ch_3;
    lVal_2 = lVal_8 + 1;
  } while (lVal_8 + 1 != 3);
  fnPtr_1 = *param_2;
  iVal_9 = (int)lVal_8 + 0x14;
  *param_2 = fnPtr_1 + -1;
  if ((ch_3 != '\0') && (fnPtr_1[-1] != ch_3)) {
    pInt_5 = (int *)func_0x1806823dc();
    *pInt_5 = iVal_9;
    func_0x180684970();
  }
  param_3 = *param_2;
  ch_3 = *param_3;
  *param_2 = param_3 + 1;
  *param_1 = ch_3;
  fnPtr_1 = *param_2;
  if (ch_3 == '(') {
    ch_3 = *fnPtr_1;
    *param_2 = fnPtr_1 + 1;
    *param_1 = ch_3;
    ch_3 = func_0x180691b58(param_1,param_2);
    if (ch_3 != '\0') {
      fnPtr_1 = *param_2;
      ch_3 = *param_1;
      *param_2 = fnPtr_1 + -1;
      if ((ch_3 != '\0') && (fnPtr_1[-1] != ch_3)) {
        pInt_5 = (int *)func_0x1806823dc();
        *pInt_5 = iVal_9;
        func_0x180684970();
      }
      return 5;
    }
    ch_4 = func_0x180691ba0(param_1,param_2);
    ch_3 = *param_1;
    if (ch_4 != '\0') {
      fnPtr_1 = *param_2;
      *param_2 = fnPtr_1 + -1;
      if ((ch_3 != '\0') && (fnPtr_1[-1] != ch_3)) {
        pInt_5 = (int *)func_0x1806823dc();
        *pInt_5 = iVal_9;
        func_0x180684970();
      }
      return 6;
    }
    while (ch_3 != ')') {
      if (ch_3 == '\0') {
        *param_2 = *param_2 + -1;
LAB_180691b46:
        uVal_7 = 4;
LAB_180691b4b:
        *param_1 = '\0';
        *param_2 = param_3;
        return uVal_7;
      }
      if ((((9 < (byte)(ch_3 - 0x30U)) && (0x19 < (byte)(ch_3 + 0x9fU))) &&
          (0x19 < (byte)(ch_3 + 0xbfU))) && (ch_3 != '_')) {
        *param_2 = *param_2 + -1;
        if (**param_2 != ch_3) {
          pInt_5 = (int *)func_0x1806823dc();
          *pInt_5 = iVal_9;
          func_0x180684970();
        }
        goto LAB_180691b46;
      }
      ch_3 = **param_2;
      *param_2 = *param_2 + 1;
      *param_1 = ch_3;
    }
  }
  else {
    *param_2 = fnPtr_1 + -1;
    if ((ch_3 != '\0') && (fnPtr_1[-1] != ch_3)) {
      pInt_5 = (int *)func_0x1806823dc();
      *pInt_5 = iVal_9;
      func_0x180684970();
    }
    *param_1 = '\0';
    *param_2 = param_3;
  }
  return 4;
}

// func_0x180691b58
uint64_t func_0x180691b58(char *param_1,char **param_2)
{
  char ch_1;
  char *in_RAX;
  int64_t lVal_2;
  int64_t lVal_3;
  
  lVal_2 = 0;
  lVal_3 = lVal_2;
  do {
    ch_1 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((uint64_t)in_RAX >> 8),ch_1);
    if ((ch_1 != (&DAT_1806e6b9c)[lVal_3]) && (ch_1 != "snan)"[lVal_3])) goto LAB_180691b99;
    lVal_3 = lVal_3 + 1;
    ch_1 = **param_2;
    in_RAX = *param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = ch_1;
  } while (lVal_3 != 5);
  lVal_2 = 1;
LAB_180691b99:
  return CONCAT71((int7)((uint64_t)in_RAX >> 8),(char)lVal_2);
}

// func_0x180691ba0
uint64_t func_0x180691ba0(char *param_1,char **param_2)
{
  char ch_1;
  char *in_RAX;
  int64_t lVal_2;
  int64_t lVal_3;
  
  lVal_2 = 0;
  lVal_3 = lVal_2;
  do {
    ch_1 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((uint64_t)in_RAX >> 8),ch_1);
    if ((ch_1 != (&DAT_1806e6bac)[lVal_3]) && (ch_1 != (&DAT_1806e6bb0)[lVal_3]))
    goto LAB_180691be1;
    lVal_3 = lVal_3 + 1;
    ch_1 = **param_2;
    in_RAX = *param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = ch_1;
  } while (lVal_3 != 4);
  lVal_2 = 1;
LAB_180691be1:
  return CONCAT71((int7)((uint64_t)in_RAX >> 8),(char)lVal_2);
}

// func_0x180691be8
uint32_t func_0x180691be8(uint64_t param_1,uint64_t *param_2,uint64_t param_3)
{
  uint32_t uVal_1;
  int64_t lVal_2;
  uint64_t local_58;
  uint64_t *local_50;
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
  if (param_2 != (uint64_t *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVal_1 = func_0x18068990c(local_48,&local_58,param_3,1);
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

// func_0x180691c9c
uint32_t func_0x180691c9c(uint64_t param_1,uint64_t *param_2,uint64_t param_3)
{
  uint32_t uVal_1;
  int64_t lVal_2;
  uint64_t local_58;
  uint64_t *local_50;
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
  if (param_2 != (uint64_t *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVal_1 = func_0x180689354(local_48,&local_58,param_3,1);
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

// func_0x180691d50
uint64_t func_0x180691d50(uint64_t param_1,uint64_t *param_2,uint64_t param_3)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t local_58;
  uint64_t *local_50;
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
  if (param_2 != (uint64_t *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVal_1 = func_0x180689630(local_48,&local_58,param_3,1);
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

// func_0x180691e04
uint64_t func_0x180691e04(uint64_t param_1,uint64_t *param_2,uint64_t param_3)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t local_58;
  uint64_t *local_50;
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
  if (param_2 != (uint64_t *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVal_1 = func_0x180689630(local_48,&local_58,param_3,0);
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

// toupper
/* Library Function - Single Match
    toupper
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    toupper
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
int __cdecl toupper(int _C)
{
  uint uVal_1;
  uint32_t in_register_0000000c;
  uint64_t uVal_2;
  
  uVal_2 = CONCAT44(in_register_0000000c,_C);
  if (DAT_1808429bc == 0) {
    if (_C - 0x61U < 0x1a) {
      uVal_2 = (uint64_t)(_C - 0x20);
    }
  }
  else {
    uVal_1 = func_0x180692044(uVal_2,0);
    uVal_2 = (uint64_t)uVal_1;
  }
  return (int)uVal_2;
}

// tolower
/* Library Function - Single Match
    tolower
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    tolower
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
int __cdecl tolower(int _C)
{
  uint uVal_1;
  uint32_t in_register_0000000c;
  uint64_t uVal_2;
  
  uVal_2 = CONCAT44(in_register_0000000c,_C);
  if (DAT_1808429bc == 0) {
    if (_C - 0x41U < 0x1a) {
      uVal_2 = (uint64_t)(_C + 0x20);
    }
  }
  else {
    uVal_1 = func_0x180691f10(uVal_2,0);
    uVal_2 = (uint64_t)uVal_1;
  }
  return (int)uVal_2;
}

// func_0x180691f10
uint func_0x180691f10(uint param_1,__crt_locale_pointers *param_2)
{
  int iVal_1;
  uint32_t *pU64_2;
  uint32_t uVal_3;
  uint uVal_4;
  uint8_t local_res8;
  uint8_t local_res9;
  uint8_t local_resa;
  uint16_t local_res18;
  uint8_t local_res1a;
  int64_t local_28;
  int64_t *local_20 [2];
  char local_10;
  
  uVal_4 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
    if (param_1 < 0x100) {
      uVal_4 = (uint)*(byte *)(local_20[0][0x22] + ((uint64_t)param_1 & 0xff));
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      local_resa = 0;
      if ((*(int *)(local_20[0] + 1) < 2) ||
         (-1 < *(short *)(*local_20[0] + (uint64_t)((int)param_1 >> 8 & 0xff) * 2))) {
        pU64_2 = (uint32_t *)func_0x1806823dc();
        uVal_3 = 1;
        *pU64_2 = 0x2a;
        local_res9 = 0;
        local_res8 = (char)param_1;
      }
      else {
        uVal_3 = 2;
        local_res8 = (char)(param_1 >> 8);
        local_res9 = (char)param_1;
      }
      local_res18 = 0;
      local_res1a = 0;
      iVal_1 = __acrt_LCMapStringA(local_20,local_20[0][0x27],0x100,&local_res8,uVal_3,&local_res18,3,
                                  *(uint32_t *)((int64_t)local_20[0] + 0xc),1);
      uVal_4 = param_1;
      if (iVal_1 != 0) {
        uVal_4 = (uint)(byte)local_res18;
        if (iVal_1 != 1) {
          uVal_4 = (uint)CONCAT11((byte)local_res18,local_res18._1_1_);
        }
      }
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  return uVal_4;
}

// func_0x180692044
uint func_0x180692044(uint param_1,__crt_locale_pointers *param_2)
{
  int iVal_1;
  uint32_t *pU64_2;
  uint32_t uVal_3;
  uint uVal_4;
  uint8_t local_res8;
  uint8_t local_res9;
  uint8_t local_resa;
  uint16_t local_res18;
  uint8_t local_res1a;
  int64_t local_28;
  int64_t *local_20 [2];
  char local_10;
  
  uVal_4 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
    if (param_1 < 0x100) {
      uVal_4 = (uint)*(byte *)(local_20[0][0x23] + ((uint64_t)param_1 & 0xff));
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      local_resa = 0;
      if ((*(int *)(local_20[0] + 1) < 2) ||
         (-1 < *(short *)(*local_20[0] + (uint64_t)((int)param_1 >> 8 & 0xff) * 2))) {
        pU64_2 = (uint32_t *)func_0x1806823dc();
        uVal_3 = 1;
        *pU64_2 = 0x2a;
        local_res9 = 0;
        local_res8 = (char)param_1;
      }
      else {
        uVal_3 = 2;
        local_res8 = (char)(param_1 >> 8);
        local_res9 = (char)param_1;
      }
      local_res18 = 0;
      local_res1a = 0;
      iVal_1 = __acrt_LCMapStringA(local_20,local_20[0][0x27],0x200,&local_res8,uVal_3,&local_res18,3,
                                  *(uint32_t *)((int64_t)local_20[0] + 0xc),1);
      uVal_4 = param_1;
      if (iVal_1 != 0) {
        uVal_4 = (uint)(byte)local_res18;
        if (iVal_1 != 1) {
          uVal_4 = (uint)CONCAT11((byte)local_res18,local_res18._1_1_);
        }
      }
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  return uVal_4;
}

// ungetc
/* Library Function - Single Match
    ungetc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    ungetc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
int __cdecl ungetc(int _Ch,FILE *_File)
{
  int iVal_1;
  uint32_t *pU64_2;
  
  if (_File == (FILE *)0x0) {
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    iVal_1 = -1;
  }
  else {
    func_0x18067e324(_File);
    iVal_1 = func_0x1806921d0(_Ch,_File);
    func_0x18067e330(_File);
  }
  return iVal_1;
}

// func_0x1806921d0
uint func_0x1806921d0(uint param_1,FILE *param_2)
{
  char *fnPtr_1;
  uint *pU64_2;
  char *fnPtr_3;
  uint uVal_4;
  uint32_t *pU64_5;
  uint8_t *pU64_6;
  uint8_t *pU64_7;
  
  if ((*(uint *)((int64_t)&param_2->_base + 4) >> 0xc & 1) == 0) {
    uVal_4 = _fileno(param_2);
    pU64_6 = &DAT_18083d9e0;
    if (uVal_4 + 2 < 2) {
      pU64_7 = &DAT_18083d9e0;
    }
    else {
      pU64_7 = (uint8_t *)
               ((&DAT_180842c80)[(int64_t)(int)uVal_4 >> 6] + (uint64_t)(uVal_4 & 0x3f) * 0x48);
    }
    if (pU64_7[0x39] == '\0') {
      if (1 < uVal_4 + 2) {
        pU64_6 = (uint8_t *)
                 ((&DAT_180842c80)[(int64_t)(int)uVal_4 >> 6] + (uint64_t)(uVal_4 & 0x3f) * 0x48);
      }
      if ((pU64_6[0x3d] & 1) == 0) goto LAB_18069227c;
    }
    pU64_5 = (uint32_t *)func_0x1806823dc();
    *pU64_5 = 0x16;
    func_0x180684970();
  }
  else {
LAB_18069227c:
    if ((param_1 != 0xffffffff) &&
       (((*(uint *)((int64_t)&param_2->_base + 4) & 1) != 0 ||
        (((byte)*(uint32_t *)((int64_t)&param_2->_base + 4) & 6) == 6)))) {
      if (*(int64_t *)&param_2->_cnt == 0) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      if (param_2->_ptr == *(char **)&param_2->_cnt) {
        if (*(int *)&param_2->_base != 0) {
          return 0xffffffff;
        }
        param_2->_ptr = param_2->_ptr + 1;
      }
      uVal_4 = *(uint *)((int64_t)&param_2->_base + 4);
      fnPtr_3 = param_2->_ptr;
      fnPtr_1 = fnPtr_3 + -1;
      param_2->_ptr = fnPtr_1;
      if ((uVal_4 >> 0xc & 1) == 0) {
        *fnPtr_1 = (char)param_1;
      }
      else if (*fnPtr_1 != (char)param_1) {
        param_2->_ptr = fnPtr_3;
        return 0xffffffff;
      }
      *(int *)&param_2->_base = *(int *)&param_2->_base + 1;
      LOCK();
      pU64_2 = (uint *)((int64_t)&param_2->_base + 4);
      *pU64_2 = *pU64_2 & 0xfffffff7;
      UNLOCK();
      LOCK();
      pU64_2 = (uint *)((int64_t)&param_2->_base + 4);
      *pU64_2 = *pU64_2 | 1;
      UNLOCK();
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}

// func_0x1806922f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint32_t func_0x1806922f0(void)
{
  BOOL BVar1;
  
  DAT_18083d690 = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_180692610);
  if (DAT_18083d690 != 0xffffffff) {
    BVar1 = FlsSetValue(DAT_18083d690,&DAT_180842a00);
    if (BVar1 != 0) {
      _DAT_180842a78 = 0xfffffffe;
      return 1;
    }
    if (DAT_18083d690 != 0xffffffff) {
      FlsFree(DAT_18083d690);
      DAT_18083d690 = 0xffffffff;
    }
  }
  return 0;
}

// func_0x180692360
uint8_t func_0x180692360(void)
{
  if (DAT_18083d690 != 0xffffffff) {
    FlsFree(DAT_18083d690);
    DAT_18083d690 = 0xffffffff;
  }
  return 1;
}

// func_0x180692390
PVOID func_0x180692390(void)
{
  DWORD dwErrCode;
  BOOL BVar1;
  PVOID lpFlsData;
  
  if (DAT_18083d690 != 0xffffffff) {
    dwErrCode = GetLastError();
    lpFlsData = FlsGetValue(DAT_18083d690);
    if (lpFlsData != (PVOID)0xffffffffffffffff) {
      if (lpFlsData != (PVOID)0x0) {
LAB_180692428:
        SetLastError(dwErrCode);
        return lpFlsData;
      }
      BVar1 = FlsSetValue(DAT_18083d690,(PVOID)0xffffffffffffffff);
      if (BVar1 != 0) {
        lpFlsData = (PVOID)_calloc_base(1,0x80);
        if (lpFlsData == (PVOID)0x0) {
          FlsSetValue(DAT_18083d690,(PVOID)0x0);
          lpFlsData = (PVOID)0x0;
        }
        else {
          BVar1 = FlsSetValue(DAT_18083d690,lpFlsData);
          if (BVar1 != 0) {
            *(uint32_t *)((int64_t)lpFlsData + 0x78) = 0xfffffffe;
            thunk_FUN_180695dd0(0);
            goto LAB_180692428;
          }
          FlsSetValue(DAT_18083d690,(PVOID)0x0);
        }
        thunk_FUN_180695dd0(lpFlsData);
      }
    }
    SetLastError(dwErrCode);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x180692470
PVOID func_0x180692470(void)
{
  DWORD dwErrCode;
  BOOL BVar1;
  PVOID pVoid_2;
  PVOID lpFlsData;
  PVOID pVoid_3;
  
  if (DAT_18083d690 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pVoid_2 = FlsGetValue(DAT_18083d690);
  if (pVoid_2 != (PVOID)0xffffffffffffffff) {
    if (pVoid_2 != (PVOID)0x0) goto LAB_180692527;
    BVar1 = FlsSetValue(DAT_18083d690,(PVOID)0xffffffffffffffff);
    if (BVar1 != 0) {
      lpFlsData = (PVOID)_calloc_base(1,0x80);
      if ((lpFlsData == (PVOID)0x0) || (BVar1 = FlsSetValue(DAT_18083d690,lpFlsData), BVar1 == 0)) {
        FlsSetValue(DAT_18083d690,(PVOID)0x0);
        pVoid_2 = (PVOID)0x0;
        pVoid_3 = lpFlsData;
      }
      else {
        *(uint32_t *)((int64_t)lpFlsData + 0x78) = 0xfffffffe;
        pVoid_3 = (PVOID)0x0;
        pVoid_2 = lpFlsData;
      }
      thunk_FUN_180695dd0(pVoid_3);
      goto LAB_180692527;
    }
  }
  pVoid_2 = (PVOID)0x0;
LAB_180692527:
  SetLastError(dwErrCode);
  return pVoid_2;
}

// func_0x180692550
PVOID func_0x180692550(void)
{
  DWORD dwErrCode;
  PVOID pVoid_1;
  
  if (DAT_18083d690 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pVoid_1 = FlsGetValue(DAT_18083d690);
  SetLastError(dwErrCode);
  if (pVoid_1 == (PVOID)0xffffffffffffffff) {
    pVoid_1 = (PVOID)0x0;
  }
  return pVoid_1;
}

// func_0x1806925b0
void func_0x1806925b0(void)
{
  uint8_t *pU64_1;
  
  if (DAT_18083d690 != 0xffffffff) {
    pU64_1 = (uint8_t *)FlsGetValue(DAT_18083d690);
    FlsSetValue(DAT_18083d690,(PVOID)0x0);
    if ((pU64_1 != (uint8_t *)0x0) && (pU64_1 != &DAT_180842a00)) {
      thunk_FUN_180695dd0(pU64_1);
      return;
    }
  }
  return;
}

// func_0x180692630
bool func_0x180692630(short *param_1)
{
  if ((*param_1 == 0x5a4d) &&
     (*(int *)((int64_t)*(int *)(param_1 + 0x1e) + (int64_t)param_1) == 0x4550)) {
    return *(short *)((int *)((int64_t)*(int *)(param_1 + 0x1e) + (int64_t)param_1) + 6) == 0x20b;
  }
  return false;
}

// func_0x180692660
int64_t func_0x180692660(int64_t param_1,uint64_t param_2)
{
  int64_t lVal_1;
  uint uVal_2;
  
  uVal_2 = 0;
  param_1 = *(int *)(param_1 + 0x3c) + param_1;
  lVal_1 = (uint64_t)*(ushort *)(param_1 + 0x14) + 0x18 + param_1;
  if (*(ushort *)(param_1 + 6) != 0) {
    do {
      if ((*(uint *)(lVal_1 + 0xc) <= param_2) &&
         (param_2 < *(int *)(lVal_1 + 8) + *(uint *)(lVal_1 + 0xc))) {
        return lVal_1;
      }
      uVal_2 = uVal_2 + 1;
      lVal_1 = lVal_1 + 0x28;
    } while (uVal_2 < *(ushort *)(param_1 + 6));
  }
  return 0;
}

// func_0x1806926b0
uint64_t func_0x1806926b0(int64_t param_1)
{
  uint64_t uVal_1;
  
  uVal_1 = func_0x180692630(0x180000000);
  if ((int)uVal_1 != 0) {
    uVal_1 = func_0x180692660(0x180000000,param_1 + -0x180000000);
    if (uVal_1 != 0) {
      uVal_1 = (uint64_t)(~*(uint *)(uVal_1 + 0x24) >> 0x1f);
    }
  }
  return uVal_1;
}

// func_0x180692730
void func_0x180692730(void)
{
  return;
}

// func_0x180692760
void func_0x180692760(void)
{
  return;
}

// __except_validate_context_record
/* Library Function - Single Match
    __except_validate_context_record
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __except_validate_context_record
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
void __except_validate_context_record(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  
  if ((func_ptr_t )PTR__guard_check_icall_1807658d0 != _guard_check_icall) {
    if ((*(uint64_t *)(param_1 + 0x98) < *(uint64_t *)((int64_t)Self + 0x10)) ||
       (*(uint64_t *)((int64_t)Self + 8) < *(uint64_t *)(param_1 + 0x98))) {
      fnPtr_1 = (func_ptr_t )swi(0x29);
      (*fnPtr_1)(0xd);
    }
  }
  return;
}

// func_0x1806927b0
uint32_t func_0x1806927b0(int64_t param_1,uint64_t *param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint uVal_3;
  uint64_t uVal_4;
  
  if (param_1 != 0) {
    uVal_2 = param_2[1];
    lVal_1 = uVal_2 + (int64_t)*(int *)(param_1 + 0x18);
    if (lVal_1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVal_4 = 0;
        do {
          if (*param_2 < (int64_t)*(int *)(lVal_1 + uVal_4 * 8) + uVal_2) break;
          uVal_3 = (int)uVal_4 + 1;
          uVal_4 = (uint64_t)uVal_3;
        } while (uVal_3 < *(uint *)(param_1 + 0x14));
        if ((int)uVal_4 != 0) {
          return *(uint32_t *)
                  (uVal_2 + (uint64_t)((int)uVal_4 - 1) * 8 + 4 + (int64_t)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x180692820
uint32_t func_0x180692820(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint uVal_3;
  uint64_t uVal_4;
  
  if (param_1 != 0) {
    lVal_2 = *(int64_t *)(param_2 + 8);
    lVal_1 = lVal_2 + *(int *)(param_1 + 0x18);
    if (lVal_1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVal_4 = 0;
        do {
          if (param_3 < (uint64_t)(*(int *)(lVal_1 + uVal_4 * 8) + lVal_2)) break;
          uVal_3 = (int)uVal_4 + 1;
          uVal_4 = (uint64_t)uVal_3;
        } while (uVal_3 < *(uint *)(param_1 + 0x14));
        if ((int)uVal_4 != 0) {
          return *(uint32_t *)
                  (lVal_2 + (uint64_t)((int)uVal_4 - 1) * 8 + 4 + (int64_t)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// func_0x180692890
int func_0x180692890(int64_t *param_1,uint64_t *param_2,int64_t param_3)
{
  int64_t lVal_1;
  int iVal_2;
  uint64_t uVal_3;
  uint uVal_4;
  uint64_t uVal_5;
  
  iVal_2 = *(int *)((int64_t)*(int *)(param_3 + 0x1c) + *param_1);
  if (iVal_2 != -2) {
    return iVal_2;
  }
  uVal_3 = param_2[1];
  lVal_1 = uVal_3 + (int64_t)*(int *)(param_3 + 0x18);
  if (lVal_1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(uint *)(param_3 + 0x14) != 0) {
    uVal_5 = 0;
    do {
      if (*param_2 < (int64_t)*(int *)(lVal_1 + uVal_5 * 8) + uVal_3) break;
      uVal_4 = (int)uVal_5 + 1;
      uVal_5 = (uint64_t)uVal_4;
    } while (uVal_4 < *(uint *)(param_3 + 0x14));
    if ((int)uVal_5 != 0) {
      return *(int *)(uVal_3 + (uint64_t)((int)uVal_5 - 1) * 8 + 4 +
                     (int64_t)*(int *)(param_3 + 0x18));
    }
  }
  return -1;
}

// func_0x180692920
void func_0x180692920(int64_t *param_1,uint64_t param_2,int64_t param_3,uint32_t param_4)
{
  *(uint32_t *)((int64_t)*(int *)(param_3 + 0x1c) + *param_1) = param_4;
  return;
}

// SetUnwindTryBlock
/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
    void __cdecl __SetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
    void __cdecl __SetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void SetUnwindTryBlock(uint64_t param_1,uint64_t param_2,int64_t param_3,int param_4)
{
  int64_t *pLong_1;
  
  pLong_1 = (int64_t *)func_0x18067aa10();
  if (*(int *)((int64_t)*(int *)(param_3 + 0x1c) + 4 + *pLong_1) < param_4) {
    *(int *)((int64_t)*(int *)(param_3 + 0x1c) + 4 + *pLong_1) = param_4;
  }
  return;
}

// GetUnwindTryBlock
/* Library Function - Multiple Matches With Same Base Name
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
    int __cdecl __GetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio */
/* Library Function - Multiple Matches With Same Base Name
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
    int __cdecl __GetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio */
uint32_t GetUnwindTryBlock(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t *pLong_1;
  
  pLong_1 = (int64_t *)func_0x18067aa10();
  return *(uint32_t *)((int64_t)*(int *)(param_3 + 0x1c) + 4 + *pLong_1);
}

// func_0x1806929a0
int func_0x1806929a0(int64_t param_1,uint64_t *param_2)
{
  uint *pU64_1;
  uint64_t uVal_2;
  uint uVal_3;
  byte *pU8_4;
  byte *pU8_5;
  int iVal_6;
  uint uVal_7;
  uint uVal_8;
  
  iVal_6 = *(int *)(param_1 + 0x10);
  if (iVal_6 == 0) {
    return -1;
  }
  uVal_2 = param_2[1];
  uVal_3 = *(byte *)(uVal_2 + (int64_t)iVal_6) & 0xf;
  pU8_4 = (byte *)((uVal_2 + (int64_t)iVal_6) - (int64_t)(char)(&DAT_1806e3cf8)[uVal_3]);
  pU64_1 = (uint *)(pU8_4 + -4);
  if (*pU64_1 >> ((&DAT_1806e3d08)[uVal_3] & 0x1f) != 0) {
    uVal_7 = 0;
    uVal_8 = 0;
    iVal_6 = -1;
    do {
      pU8_5 = pU8_4 + -(int64_t)(char)(&DAT_1806e3cf8)[*pU8_4 & 0xf];
      uVal_8 = uVal_8 + (*(uint *)(pU8_5 + -4) >> ((&DAT_1806e3d08)[*pU8_4 & 0xf] & 0x1f));
      if (*param_2 < (uint64_t)uVal_8 + *(uint *)param_2[2] + uVal_2) break;
      uVal_7 = uVal_7 + 1;
      pU8_4 = pU8_5 + -(int64_t)(char)(&DAT_1806e3cf8)[*pU8_5 & 0xf];
      iVal_6 = (*(uint *)(pU8_4 + -4) >> ((&DAT_1806e3d08)[*pU8_5 & 0xf] & 0x1f)) - 1;
    } while (uVal_7 < *pU64_1 >> ((&DAT_1806e3d08)[uVal_3] & 0x1f));
    if (uVal_7 != 0) {
      return iVal_6;
    }
  }
  return -1;
}

// func_0x180692aa0
int func_0x180692aa0(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  uint *pU64_1;
  int64_t lVal_2;
  uint uVal_3;
  int iVal_4;
  byte *pU8_5;
  byte *pU8_6;
  uint uVal_7;
  uint uVal_8;
  
  iVal_4 = *(int *)(param_1 + 0x10);
  if (iVal_4 != 0) {
    lVal_2 = *(int64_t *)(param_2 + 8);
    uVal_3 = *(byte *)(lVal_2 + iVal_4) & 0xf;
    pU8_5 = (byte *)((lVal_2 + iVal_4) - (int64_t)(char)(&DAT_1806e3cf8)[uVal_3]);
    pU64_1 = (uint *)(pU8_5 + -4);
    if (*pU64_1 >> ((&DAT_1806e3d08)[uVal_3] & 0x1f) != 0) {
      uVal_7 = 0;
      uVal_8 = 0;
      iVal_4 = -1;
      do {
        pU8_6 = pU8_5 + -(int64_t)(char)(&DAT_1806e3cf8)[*pU8_5 & 0xf];
        uVal_8 = uVal_8 + (*(uint *)(pU8_6 + -4) >> ((&DAT_1806e3d08)[*pU8_5 & 0xf] & 0x1f));
        if (param_3 < (uint64_t)uVal_8 + (uint64_t)**(uint **)(param_2 + 0x10) + lVal_2) break;
        uVal_7 = uVal_7 + 1;
        pU8_5 = pU8_6 + -(int64_t)(char)(&DAT_1806e3cf8)[*pU8_6 & 0xf];
        iVal_4 = (*(uint *)(pU8_5 + -4) >> ((&DAT_1806e3d08)[*pU8_6 & 0xf] & 0x1f)) - 1;
      } while (uVal_7 < *pU64_1 >> ((&DAT_1806e3d08)[uVal_3] & 0x1f));
      if (uVal_7 == 0) {
        iVal_4 = -1;
      }
      return iVal_4;
    }
  }
  return -1;
}

// func_0x180692b90
int func_0x180692b90(uint64_t *param_1,int param_2,int64_t param_3,int param_4,uint64_t *param_5)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint64_t local_10;
  
  uVal_1 = *(uint64_t *)(param_3 + 8);
  uVal_2 = param_5[1];
  if ((uVal_2 <= uVal_1) && (local_10 = param_1[1], local_10 <= uVal_2)) {
    if ((int64_t)(uVal_2 - local_10) < (int64_t)(uVal_1 - uVal_2)) {
      uVal_3 = *param_1;
      param_4 = param_2;
      if (local_10 < uVal_2) {
        do {
          func_0x180692c70(uVal_3,&local_10);
          param_2 = param_2 + 1;
          param_4 = param_2;
        } while (local_10 < (uint64_t)param_5[1]);
      }
    }
    else {
      uVal_3 = *param_5;
      local_10 = uVal_2;
      if (uVal_2 < uVal_1) {
        do {
          func_0x180692c70(uVal_3,&local_10);
          param_4 = param_4 + -1;
        } while (local_10 < *(uint64_t *)(param_3 + 8));
      }
    }
    return param_4;
  }
  return -1;
}

// func_0x180692c70
void func_0x180692c70(int64_t param_1,byte **param_2)
{
  byte bFlag_1;
  uint32_t uVal_2;
  uint uVal_3;
  uint uVal_4;
  byte *pU8_5;
  
  uVal_3 = **param_2 & 0xf;
  pU8_5 = *param_2 + -(int64_t)(char)(&DAT_1806e3cf8)[uVal_3];
  uVal_3 = *(uint *)(pU8_5 + -4) >> ((&DAT_1806e3d08)[uVal_3] & 0x1f);
  *param_2 = pU8_5;
  uVal_4 = uVal_3 & 3;
  *(uint *)(param_1 + 0x10) = uVal_3 >> 2;
  *(uint *)(param_1 + 0x14) = uVal_4;
  if (uVal_4 - 1 < 2) {
    uVal_2 = *(uint32_t *)*param_2;
    *param_2 = (byte *)((int64_t)*param_2 + 4);
    *(uint32_t *)(param_1 + 0x18) = uVal_2;
    uVal_3 = **param_2 & 0xf;
    bFlag_1 = (&DAT_1806e3d08)[uVal_3];
    pU8_5 = *param_2 + -(int64_t)(char)(&DAT_1806e3cf8)[uVal_3];
    uVal_3 = *(uint *)(pU8_5 + -4);
    *param_2 = pU8_5;
    *(uint *)(param_1 + 0x1c) = uVal_3 >> (bFlag_1 & 0x1f);
  }
  else if (uVal_4 == 3) {
    uVal_2 = *(uint32_t *)*param_2;
    *param_2 = (byte *)((int64_t)*param_2 + 4);
    *(uint32_t *)(param_1 + 0x18) = uVal_2;
    return;
  }
  return;
}

// func_0x180692d10
uint * func_0x180692d10(uint *param_1,int64_t param_2,int64_t param_3)
{
  byte bFlag_1;
  uint uVal_2;
  byte *pU8_3;
  byte *pU8_4;
  uint *pU64_5;
  
  *(uint64_t *)(param_1 + 2) = 0;
  *(uint64_t *)(param_1 + 4) = 0;
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  if (*(int *)(param_2 + 0xc) != 0) {
    pU8_3 = (byte *)(param_3 + *(int *)(param_2 + 0xc));
    *(byte **)(param_1 + 2) = pU8_3;
    bFlag_1 = (&DAT_1806e3d08)[*pU8_3 & 0xf];
    pU8_3 = pU8_3 + -(int64_t)(char)(&DAT_1806e3cf8)[*pU8_3 & 0xf];
    uVal_2 = *(uint *)(pU8_3 + -4);
    *(byte **)(param_1 + 2) = pU8_3;
    *param_1 = uVal_2 >> (bFlag_1 & 0x1f);
    *(byte **)(param_1 + 4) = pU8_3;
    bFlag_1 = (&DAT_1806e3d08)[*pU8_3 & 0xf];
    pU8_3 = pU8_3 + -(int64_t)(char)(&DAT_1806e3cf8)[*pU8_3 & 0xf];
    uVal_2 = *(uint *)(pU8_3 + -4);
    *(byte **)(param_1 + 2) = pU8_3;
    param_1[6] = uVal_2 >> (bFlag_1 & 0x1f);
    pU8_4 = pU8_3 + -(int64_t)(char)(&DAT_1806e3cf8)[*pU8_3 & 0xf];
    param_1[7] = *(uint *)(pU8_4 + -4) >> ((&DAT_1806e3d08)[*pU8_3 & 0xf] & 0x1f);
    *(byte **)(param_1 + 2) = pU8_4;
    pU64_5 = (uint *)(pU8_4 + -(int64_t)(char)(&DAT_1806e3cf8)[*pU8_4 & 0xf]);
    param_1[8] = pU64_5[-1] >> ((&DAT_1806e3d08)[*pU8_4 & 0xf] & 0x1f);
    *(uint **)(param_1 + 2) = pU64_5;
    uVal_2 = *pU64_5;
    *(uint **)(param_1 + 2) = pU64_5 + 1;
    param_1[9] = uVal_2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

// func_0x180692e00
void func_0x180692e00(int64_t param_1,uint param_2)
{
  int *pInt_1;
  byte bFlag_2;
  char ch_3;
  uint32_t uVal_4;
  int iVal_5;
  uint uVal_6;
  byte bFlag_7;
  uint64_t uVal_8;
  uint32_t *pU64_9;
  byte *pU8_10;
  uint uVal_11;
  
  *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_1 + 0x10);
  func_0x180692ff0();
  uVal_11 = 0;
  if (param_2 != 0) {
    do {
      *(uint8_t *)(param_1 + 0x18) = 0;
      *(uint64_t *)(param_1 + 0x1c) = 0;
      *(uint64_t *)(param_1 + 0x24) = 0;
      *(uint8_t (*)[16])(param_1 + 0x30) = ZEXT816(0);
      bFlag_2 = **(byte **)(param_1 + 8);
      pU64_9 = (uint32_t *)(*(byte **)(param_1 + 8) + 1);
      *(byte *)(param_1 + 0x18) = bFlag_2;
      *(uint32_t **)(param_1 + 8) = pU64_9;
      if ((bFlag_2 & 1) != 0) {
        bFlag_7 = *(byte *)pU64_9;
        pU64_9 = (uint32_t *)((int64_t)pU64_9 - (int64_t)(char)(&DAT_1806e3cf8)[bFlag_7 & 0xf]);
        *(uint *)(param_1 + 0x1c) = (uint)pU64_9[-1] >> ((&DAT_1806e3d08)[bFlag_7 & 0xf] & 0x1f);
        *(uint32_t **)(param_1 + 8) = pU64_9;
      }
      if ((bFlag_2 & 2) != 0) {
        uVal_4 = *pU64_9;
        pU64_9 = pU64_9 + 1;
        *(uint32_t **)(param_1 + 8) = pU64_9;
        *(uint32_t *)(param_1 + 0x20) = uVal_4;
      }
      if ((bFlag_2 & 4) != 0) {
        bFlag_7 = *(byte *)pU64_9;
        pU64_9 = (uint32_t *)((int64_t)pU64_9 - (int64_t)(char)(&DAT_1806e3cf8)[bFlag_7 & 0xf]);
        *(uint *)(param_1 + 0x24) = (uint)pU64_9[-1] >> ((&DAT_1806e3d08)[bFlag_7 & 0xf] & 0x1f);
        *(uint32_t **)(param_1 + 8) = pU64_9;
      }
      pInt_1 = pU64_9 + 1;
      *(uint32_t *)(param_1 + 0x28) = *pU64_9;
      bFlag_7 = bFlag_2 & 0x30;
      *(int **)(param_1 + 8) = pInt_1;
      if ((bFlag_2 & 8) == 0) {
        if (bFlag_7 == 0x10) {
          bFlag_2 = (&DAT_1806e3d08)[*(byte *)pInt_1 & 0xf];
          uVal_6 = *(uint *)(((int64_t)pInt_1 -
                            (int64_t)(char)(&DAT_1806e3cf8)[*(byte *)pInt_1 & 0xf]) + -4);
          *(int64_t *)(param_1 + 8) =
               (int64_t)pInt_1 - (int64_t)(char)(&DAT_1806e3cf8)[*(byte *)pInt_1 & 0xf];
          *(uint64_t *)(param_1 + 0x30) =
               (uint64_t)(*(int *)(param_1 + 0x48) + (uVal_6 >> (bFlag_2 & 0x1f)));
        }
        else if (bFlag_7 == 0x20) {
          ch_3 = (&DAT_1806e3cf8)[*(byte *)pInt_1 & 0xf];
          bFlag_2 = (&DAT_1806e3d08)[*(byte *)pInt_1 & 0xf];
          pU8_10 = (byte *)((int64_t)pInt_1 - (int64_t)ch_3);
          uVal_6 = *(uint *)(pU8_10 + -4);
          *(byte **)(param_1 + 8) = pU8_10;
          *(uint64_t *)(param_1 + 0x30) =
               (uint64_t)(*(int *)(param_1 + 0x48) + (uVal_6 >> (bFlag_2 & 0x1f)));
          bFlag_2 = (&DAT_1806e3d08)[*pU8_10 & 0xf];
          pU8_10 = (byte *)((int64_t)pInt_1 +
                            (-(int64_t)ch_3 - (int64_t)(char)(&DAT_1806e3cf8)[*pU8_10 & 0xf]));
          uVal_6 = *(uint *)(pU8_10 + -4);
          *(byte **)(param_1 + 8) = pU8_10;
          uVal_8 = (uint64_t)(*(int *)(param_1 + 0x48) + (uVal_6 >> (bFlag_2 & 0x1f)));
          goto LAB_180692fc0;
        }
      }
      else if (bFlag_7 == 0x10) {
        iVal_5 = *pInt_1;
        *(uint32_t **)(param_1 + 8) = pU64_9 + 2;
        *(int64_t *)(param_1 + 0x30) = (int64_t)iVal_5;
      }
      else if (bFlag_7 == 0x20) {
        iVal_5 = *pInt_1;
        *(uint32_t **)(param_1 + 8) = pU64_9 + 2;
        *(int64_t *)(param_1 + 0x30) = (int64_t)iVal_5;
        uVal_8 = (uint64_t)(int)pU64_9[2];
        *(uint32_t **)(param_1 + 8) = pU64_9 + 3;
LAB_180692fc0:
        *(uint64_t *)(param_1 + 0x38) = uVal_8;
      }
      uVal_11 = uVal_11 + 1;
    } while (uVal_11 < param_2);
  }
  return;
}

// func_0x180692ff0
void func_0x180692ff0(int64_t param_1)
{
  int *pInt_1;
  byte bFlag_2;
  uint32_t uVal_3;
  int iVal_4;
  uint uVal_5;
  byte bFlag_6;
  uint32_t *pU64_7;
  byte *pU8_8;
  
  *(uint8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x1c) = 0;
  *(uint64_t *)(param_1 + 0x24) = 0;
  *(uint8_t (*)[16])(param_1 + 0x30) = ZEXT816(0);
  bFlag_2 = **(byte **)(param_1 + 8);
  pU64_7 = (uint32_t *)(*(byte **)(param_1 + 8) + 1);
  *(byte *)(param_1 + 0x18) = bFlag_2;
  *(uint32_t **)(param_1 + 8) = pU64_7;
  if ((bFlag_2 & 1) != 0) {
    bFlag_6 = *(byte *)pU64_7;
    pU64_7 = (uint32_t *)((int64_t)pU64_7 - (int64_t)(char)(&DAT_1806e3cf8)[bFlag_6 & 0xf]);
    *(uint *)(param_1 + 0x1c) = (uint)pU64_7[-1] >> ((&DAT_1806e3d08)[bFlag_6 & 0xf] & 0x1f);
    *(uint32_t **)(param_1 + 8) = pU64_7;
  }
  if ((bFlag_2 & 2) != 0) {
    uVal_3 = *pU64_7;
    pU64_7 = pU64_7 + 1;
    *(uint32_t **)(param_1 + 8) = pU64_7;
    *(uint32_t *)(param_1 + 0x20) = uVal_3;
  }
  if ((bFlag_2 & 4) != 0) {
    bFlag_6 = *(byte *)pU64_7;
    pU64_7 = (uint32_t *)((int64_t)pU64_7 - (int64_t)(char)(&DAT_1806e3cf8)[bFlag_6 & 0xf]);
    *(uint *)(param_1 + 0x24) = (uint)pU64_7[-1] >> ((&DAT_1806e3d08)[bFlag_6 & 0xf] & 0x1f);
    *(uint32_t **)(param_1 + 8) = pU64_7;
  }
  pInt_1 = pU64_7 + 1;
  *(uint32_t *)(param_1 + 0x28) = *pU64_7;
  bFlag_6 = bFlag_2 & 0x30;
  *(int **)(param_1 + 8) = pInt_1;
  if ((bFlag_2 & 8) == 0) {
    if (bFlag_6 == 0x10) {
      bFlag_2 = (&DAT_1806e3d08)[*(byte *)pInt_1 & 0xf];
      uVal_5 = *(uint *)(((int64_t)pInt_1 - (int64_t)(char)(&DAT_1806e3cf8)[*(byte *)pInt_1 & 0xf])
                       + -4);
      *(int64_t *)(param_1 + 8) =
           (int64_t)pInt_1 - (int64_t)(char)(&DAT_1806e3cf8)[*(byte *)pInt_1 & 0xf];
      *(uint64_t *)(param_1 + 0x30) =
           (uint64_t)(*(int *)(param_1 + 0x48) + (uVal_5 >> (bFlag_2 & 0x1f)));
      return;
    }
    if (bFlag_6 == 0x20) {
      bFlag_2 = (&DAT_1806e3d08)[*(byte *)pInt_1 & 0xf];
      pU8_8 = (byte *)((int64_t)pInt_1 - (int64_t)(char)(&DAT_1806e3cf8)[*(byte *)pInt_1 & 0xf]);
      uVal_5 = *(uint *)(pU8_8 + -4);
      *(byte **)(param_1 + 8) = pU8_8;
      *(uint64_t *)(param_1 + 0x30) =
           (uint64_t)(*(int *)(param_1 + 0x48) + (uVal_5 >> (bFlag_2 & 0x1f)));
      bFlag_2 = (&DAT_1806e3d08)[*pU8_8 & 0xf];
      uVal_5 = *(uint *)(((int64_t)pU8_8 - (int64_t)(char)(&DAT_1806e3cf8)[*pU8_8 & 0xf]) + -4);
      *(int64_t *)(param_1 + 8) =
           (int64_t)pU8_8 - (int64_t)(char)(&DAT_1806e3cf8)[*pU8_8 & 0xf];
      *(uint64_t *)(param_1 + 0x38) =
           (uint64_t)(*(int *)(param_1 + 0x48) + (uVal_5 >> (bFlag_2 & 0x1f)));
    }
  }
  else {
    if (bFlag_6 == 0x10) {
      iVal_4 = *pInt_1;
      *(uint32_t **)(param_1 + 8) = pU64_7 + 2;
      *(int64_t *)(param_1 + 0x30) = (int64_t)iVal_4;
      return;
    }
    if (bFlag_6 == 0x20) {
      iVal_4 = *pInt_1;
      *(uint32_t **)(param_1 + 8) = pU64_7 + 2;
      *(int64_t *)(param_1 + 0x30) = (int64_t)iVal_4;
      iVal_4 = pU64_7[2];
      *(uint32_t **)(param_1 + 8) = pU64_7 + 3;
      *(int64_t *)(param_1 + 0x38) = (int64_t)iVal_4;
      return;
    }
  }
  return;
}

// func_0x180693180
void func_0x180693180(uint64_t param_1,uint64_t param_2,int64_t param_3,int param_4)
{
  int iVal_1;
  int iVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int iVal_6;
  
  uVal_3 = func_0x18067b0f0();
  iVal_2 = func_0x180692890(param_1,param_2,param_3);
  lVal_4 = func_0x180692390();
  *(int *)(lVal_4 + 0x30) = *(int *)(lVal_4 + 0x30) + 1;
  while ((iVal_2 != -1 && (param_4 < iVal_2))) {
    if ((iVal_2 < 0) || (*(int *)(param_3 + 4) <= iVal_2)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVal_4 = func_0x18067b0f0();
    lVal_5 = (int64_t)iVal_2 * 8;
    iVal_2 = *(int *)(*(int *)(param_3 + 8) + lVal_5 + lVal_4);
    iVal_1 = *(int *)(param_3 + 8);
    iVal_6 = iVal_2;
    lVal_4 = func_0x18067b0f0();
    if (*(int *)(lVal_4 + iVal_1 + 4 + lVal_5) != 0) {
      iVal_1 = *(int *)(param_3 + 8);
      lVal_4 = func_0x18067b0f0();
      iVal_1 = *(int *)(lVal_4 + iVal_1 + 4 + lVal_5);
      lVal_4 = func_0x18067b0f0();
      if (lVal_4 + iVal_1 != 0) {
        func_0x180692920(param_1,param_2,param_3,iVal_2,iVal_6);
        iVal_1 = *(int *)(param_3 + 8);
        lVal_4 = func_0x18067b0f0();
        if (*(int *)(lVal_4 + iVal_1 + 4 + lVal_5) == 0) {
          lVal_4 = 0;
        }
        else {
          iVal_1 = *(int *)(param_3 + 8);
          lVal_4 = func_0x18067b0f0();
          iVal_1 = *(int *)(lVal_4 + iVal_1 + 4 + lVal_5);
          lVal_4 = func_0x18067b0f0();
          lVal_4 = lVal_4 + iVal_1;
        }
        _CallSettingFrame(lVal_4,param_1,0x103);
        func_0x18067b110(uVal_3);
      }
    }
  }
  lVal_4 = func_0x180692390();
  if (0 < *(int *)(lVal_4 + 0x30)) {
    lVal_4 = func_0x180692390();
    *(int *)(lVal_4 + 0x30) = *(int *)(lVal_4 + 0x30) + -1;
  }
  if ((iVal_2 != -1) && (param_4 < iVal_2)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  func_0x180692920(param_1,param_2,param_3,iVal_2);
  return;
}

// func_0x180693540
void func_0x180693540(int64_t *param_1,uint64_t param_2,int64_t param_3,int param_4)
{
  bool bFlag_1;
  bool bFlag_2;
  uint *pU64_3;
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  int iVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint uVal_9;
  uint uVal_10;
  uint32_t *pU64_11;
  uint32_t *pU64_12;
  uint32_t *pU64_13;
  uint64_t *pU64_14;
  byte *pU8_15;
  int iVal_16;
  uint32_t *pU64_17;
  uint8_t auStack_138 [32];
  uint64_t *local_118;
  int local_108;
  uint64_t local_f8;
  uint64_t uStack_f0;
  uint local_e8;
  uint64_t local_e0;
  int local_d8;
  uint64_t local_d0;
  uint32_t *local_c8;
  uint64_t local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  uint64_t local_a8;
  int64_t *local_a0;
  uint64_t local_98;
  uint32_t *local_90;
  uint *local_88;
  uint32_t *local_80;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint local_68 [2];
  uint32_t *local_60;
  uint8_t local_58 [4];
  uint8_t auStack_54 [4];
  uint64_t uStack_50;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_138;
  local_108 = param_4;
  local_e0 = param_2;
  local_d8 = param_4;
  local_b8 = param_1;
  local_a0 = param_1;
  local_98 = param_2;
  uVal_7 = func_0x18067b0f0();
  local_c0 = uVal_7;
  iVal_6 = func_0x180693920(param_1,param_2,param_3);
  lVal_8 = func_0x180692390();
  *(int *)(lVal_8 + 0x30) = *(int *)(lVal_8 + 0x30) + 1;
  local_60 = (uint32_t *)0x0;
  _local_58 = ZEXT816(0);
  if (*(int *)(param_3 + 8) == 0) {
    local_68[0] = 0;
  }
  else {
    pU8_15 = (byte *)(*(int64_t *)(param_2 + 8) + (int64_t)*(int *)(param_3 + 8));
    uVal_9 = *pU8_15 & 0xf;
    local_60 = (uint32_t *)(pU8_15 + -(int64_t)(char)(&DAT_1806e3cf8)[uVal_9]);
    local_68[0] = (uint)local_60[-1] >> ((&DAT_1806e3d08)[uVal_9] & 0x1f);
  }
  local_f8 = local_68;
  local_88 = local_68;
  pU64_11 = (uint32_t *)((int64_t)local_60 + -1);
  bFlag_1 = false;
  bFlag_2 = false;
  iVal_16 = 0;
  pU64_13 = local_60;
  local_90 = pU64_11;
  uStack_f0 = pU64_11;
  local_b0 = param_1;
  local_a8 = uVal_7;
  local_80 = pU64_11;
  pU64_17 = pU64_11;
  if (0 < (int)local_68[0]) {
    do {
      auArr_4 = _local_58;
      if (iVal_16 == iVal_6) {
        bFlag_1 = true;
        pU64_11 = pU64_13;
      }
      if (iVal_16 == local_108) {
        bFlag_2 = true;
        local_90 = pU64_13;
      }
      uStack_f0 = pU64_11;
      local_80 = local_90;
      param_2 = local_e0;
      pU64_17 = local_90;
      if ((bFlag_1) && (bFlag_2)) break;
      pU64_12 = (uint32_t *)
                ((int64_t)pU64_13 - (int64_t)(char)(&DAT_1806e3cf8)[*(byte *)pU64_13 & 0xf]);
      uVal_9 = (uint)pU64_12[-1] >> ((&DAT_1806e3d08)[*(byte *)pU64_13 & 0xf] & 0x1f);
      uVal_10 = uVal_9 & 3;
      auStack_54 = (uint8_t  [4])uVal_10;
      local_58 = (uint8_t  [4])(uVal_9 >> 2);
      auArr_5 = _local_58;
      uStack_50._4_4_ = auArr_4._12_4_;
      _local_58 = auArr_5._0_8_;
      if (uVal_10 - 1 < 2) {
        uStack_50._0_4_ = *pU64_12;
        pU64_13 = (uint32_t *)
                  ((int64_t)pU64_12 +
                  (4 - (int64_t)(char)(&DAT_1806e3cf8)[*(byte *)(pU64_12 + 1) & 0xf]));
        uStack_50._4_4_ =
             (uint)pU64_13[-1] >> ((&DAT_1806e3d08)[*(byte *)(pU64_12 + 1) & 0xf] & 0x1f);
        auArr_5 = _local_58;
      }
      else {
        pU64_13 = pU64_12;
        if (uVal_10 == 3) {
          pU64_13 = pU64_12 + 1;
          uStack_50._0_4_ = *pU64_12;
          auArr_5 = _local_58;
        }
      }
      _local_58 = auArr_5;
      iVal_16 = iVal_16 + 1;
    } while (iVal_16 < (int)local_68[0]);
  }
  while ((local_d0 = local_68, local_c8 = local_60, local_60 <= pU64_11 && (pU64_17 < pU64_11))) {
    func_0x180692c70(local_f8,&uStack_f0);
    pU64_3 = local_f8;
    uVal_9 = local_f8[5];
    uVal_10 = local_f8[6];
    local_e0 = CONCAT44(local_e0._4_4_,local_f8[7]);
    uStack_f0._0_4_ = SUB84(pU64_11,0);
    uStack_f0._4_4_ = (uint32_t)((uint64_t)pU64_11 >> 0x20);
    local_78 = (uint32_t)local_f8;
    uStack_74 = local_f8._4_4_;
    uStack_70 = (uint32_t)uStack_f0;
    uStack_6c = uStack_f0._4_4_;
    uStack_f0 = pU64_11;
    func_0x180692c70(local_f8,&uStack_f0);
    pU64_11 = (uint32_t *)((int64_t)pU64_11 - (uint64_t)pU64_3[4]);
    local_118 = &local_f8;
    uStack_f0 = pU64_11;
    iVal_6 = func_0x180692b90(&local_88,local_108,&local_78);
    local_d0 = (uint *)CONCAT44(local_d0._4_4_,iVal_6);
    local_e8 = 0;
    if (uVal_9 != 0) {
      local_e8 = uVal_10;
    }
    if (local_e8 != 0) {
      *(int *)(param_2 + 0x48) = iVal_6 + 2;
      if (uVal_9 - 1 < 2) {
        pU64_14 = (uint64_t *)((local_e0 & 0xffffffff) + *local_b0);
        if (uVal_9 == 2) {
          pU64_14 = (uint64_t *)*pU64_14;
        }
        _CallSettingFrameEncoded
                  (*(int64_t *)(param_2 + 8) + (int64_t)(int)local_e8,*local_b0,pU64_14,0x103);
      }
      else {
        _CallSettingFrame(*(int64_t *)(param_2 + 8) + (int64_t)(int)local_e8,local_b8,0x103);
      }
      func_0x18067b110(local_c0);
    }
  }
  lVal_8 = func_0x180692390(local_f8);
  if (0 < *(int *)(lVal_8 + 0x30)) {
    lVal_8 = func_0x180692390();
    *(int *)(lVal_8 + 0x30) = *(int *)(lVal_8 + 0x30) + -1;
  }
  func_0x180673080(local_48 ^ (uint64_t)auStack_138);
  return;
}

// func_0x180693920
int func_0x180693920(uint64_t param_1,int64_t param_2,uint64_t param_3)
{
  int iVal_1;
  int64_t lVal_2;
  
  iVal_1 = func_0x1806929a0(param_3);
  if (*(int *)(param_2 + 0x48) == 0) {
    lVal_2 = func_0x180692390();
    if (*(int *)(lVal_2 + 0x78) != -2) {
      lVal_2 = func_0x180692390();
      iVal_1 = *(int *)(lVal_2 + 0x78);
      lVal_2 = func_0x180692390();
      *(uint32_t *)(lVal_2 + 0x78) = 0xfffffffe;
    }
    return iVal_1;
  }
  lVal_2 = func_0x180692390();
  if (*(int *)(lVal_2 + 0x78) == -2) {
    return *(int *)(param_2 + 0x48) + -2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}
