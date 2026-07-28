#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x180057f70
bool func_0x180057f70(int64_t param_1,int64_t param_2,int64_t param_3)
{
  return param_3 <= param_2 - param_1;
}

// func_0x180059f90 - decompilation failed



// Unwind@180070b00
void Unwind_180070b00(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  
  lVal_5 = 0x1fe0;
  do {
    uVal_1 = *(uint64_t *)(param_2 + 0x38 + lVal_5);
    if (0xf < uVal_1) {
      lVal_2 = *(int64_t *)(param_2 + 0x20 + lVal_5);
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
    *(uint64_t *)(param_2 + 0x30 + lVal_5) = 0;
    *(uint64_t *)(param_2 + 0x38 + lVal_5) = 0xf;
    *(uint8_t *)(param_2 + 0x20 + lVal_5) = 0;
    lVal_5 = lVal_5 + -0x20;
  } while (lVal_5 != -0x20);
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x2000;
  *(uint8_t *)(param_2 + 0x205f) = 1;
  return;
}

// Unwind@180070bb0
void Unwind_180070bb0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x2050);
  if ((param_2 + 0x20 == lVal_1 | *(byte *)(param_2 + 0x205f) & 1) == 0) {
    do {
      lVal_1 = lVal_1 + -0x20;
      func_0x180001e70(lVal_1);
    } while (lVal_1 != param_2 + 0x20);
  }
  return;
}

// Unwind@180070c10
void Unwind_180070c10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2478) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1120;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180070c70
void Unwind_180070c70(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x248c) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1140;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180070cd0
void Unwind_180070cd0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x24b4) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1180;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180070d30
void Unwind_180070d30(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x24c8) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x11a0;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180070d90
void Unwind_180070d90(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x24dc) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x11c0;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180070df0
void Unwind_180070df0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x24f0) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x11e0;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180070e50
void Unwind_180070e50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2504) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1200;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180070eb0
void Unwind_180070eb0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x26b4) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1500;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180070f10
void Unwind_180070f10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x26c8) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1520;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180070f70
void Unwind_180070f70(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2714) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1580;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180070fd0
void Unwind_180070fd0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2780) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1620;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180071030
void Unwind_180071030(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2794) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1640;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180071090
void Unwind_180071090(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x27b8) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1680;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@1800710f0
void Unwind_1800710f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x27e8) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x16c0;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180071150
void Unwind_180071150(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2920) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1900;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@1800711b0
void Unwind_1800711b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2938) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1920;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180071210
void Unwind_180071210(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2950) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1940;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180071270
void Unwind_180071270(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2968) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1960;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@1800712d0
void Unwind_1800712d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x297c) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1980;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180071330
void Unwind_180071330(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2990) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x19a0;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180071390
void Unwind_180071390(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x29a4) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x19c0;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@1800713f0
void Unwind_1800713f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x29bc) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x19e0;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180071450
void Unwind_180071450(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2a0c) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1a40;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@1800714b0
void Unwind_1800714b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2a30) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1a60;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180071510
void Unwind_180071510(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2a50) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1a80;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180071570
void Unwind_180071570(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2a70) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1aa0;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@1800715d0
void Unwind_1800715d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2a90) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1ac0;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180071630
void Unwind_180071630(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2ab0) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1ae0;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180071690
void Unwind_180071690(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2ad0) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1b00;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@1800716f0
void Unwind_1800716f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2af0) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1b20;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@180071750
void Unwind_180071750(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2b14) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1b40;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// Unwind@1800717b0
void Unwind_1800717b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2b34) = 0;
  *(int64_t *)(param_2 + 0x2050) = param_2 + 0x1b60;
  *(uint8_t *)(param_2 + 0x205f) = 0;
  return;
}

// func_0x180071ae0
uint8_t (*func_0x180071ae0(uint8_t (*param_1)[16],uint64_t *param_2))[16]
{
  char ch_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint8_t (*pArr16_5)[16];
  int64_t lVal_6;
  byte bFlag_7;
  
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  lVal_2 = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  if (lVal_2 != 0) {
    bFlag_7 = 1;
    lVal_6 = 0;
    do {
      ch_1 = *(char *)((int64_t)param_2 + lVal_6);
      if ((bool)(bFlag_7 & -1 < ch_1)) {
        uVal_3 = *(uint64_t *)param_1[1];
        uVal_4 = *(uint64_t *)(param_1[1] + 8);
        if (uVal_3 < uVal_4) {
          *(uint64_t *)param_1[1] = uVal_3 + 1;
          pArr16_5 = param_1;
          if (0xf < uVal_4) {
            pArr16_5 = *(uint8_t (**)[16])*param_1;
          }
          (*pArr16_5)[uVal_3] = ch_1;
          (*pArr16_5)[uVal_3 + 1] = 0;
          bFlag_7 = 1;
        }
        else {
          bFlag_7 = 1;
          func_0x18008c590(param_1,1);
        }
      }
      else {
        bFlag_7 = ~bFlag_7 & -1 < ch_1;
      }
      lVal_6 = lVal_6 + 1;
    } while (lVal_2 != lVal_6);
  }
  return param_1;
}

// Unwind@180071bc0
void Unwind_180071bc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x20));
  return;
}

// func_0x180071bf0
uint64_t func_0x180071bf0(uint param_1)
{
  uint64_t uVal_1;
  
  if (0 < (int)param_1) {
    if (0xff < param_1) {
      return 0;
    }
    return (uint64_t)(byte)(&DAT_180840d34)[param_1];
  }
  if ((int)param_1 < -0x3c) {
    uVal_1 = func_0x18045fc80(param_1 + 100);
    return uVal_1;
  }
  if (-0x33 < (int)param_1) {
    uVal_1 = func_0x18045fcc0(param_1 + 0x32);
    return uVal_1;
  }
  if ((param_1 & 0xfffffffe) == 0xffffffcc) {
    uVal_1 = func_0x18045fce0(param_1 + 0x34);
    return uVal_1;
  }
  return 0;
}

// func_0x180071c30
void func_0x180071c30(uint64_t *param_1)
{
  int64_t *pLong_1;
  BOOL BVar2;
  uint32_t extraout_EAX;
  uint32_t extraout_var;
  LPVOID pVoid_4;
  HGLOBAL pVoid_3;
  
  BVar2 = OpenClipboard((HWND)0x0);
  if (BVar2 == 0) {
    return;
  }
  EmptyClipboard();
  pVoid_3 = GlobalAlloc(2,param_1[2] + 1);
  extraout_EAX = SUB84(pVoid_3,0);
  if (CONCAT44(extraout_var,extraout_EAX) != 0) {
    pVoid_3 = (HGLOBAL)CONCAT44(extraout_var,extraout_EAX);
    pVoid_4 = GlobalLock((HGLOBAL)CONCAT44(extraout_var,extraout_EAX));
    pLong_1 = param_1 + 2;
    if (0xf < (uint64_t)param_1[3]) {
      param_1 = (uint64_t *)*param_1;
    }
    func_0x1806aa960((uint64_t)pVoid_4 & 0xffffffff,param_1,*pLong_1 + 1);
    GlobalUnlock(pVoid_3);
    SetClipboardData(1,pVoid_3);
    CloseClipboard();
                    /* WARNING: Could not recover jumptable at 0x000180071cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    GlobalFree(pVoid_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180071cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseClipboard();
  return;
}

// func_0x180071cd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void func_0x180071cd0(uint64_t *param_1)
{
  char ch_1;
  uint uVal_2;
  int iVal_3;
  uint uVal_4;
  int64_t lVal_5;
  char *fnPtr_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  char *fnPtr_10;
  int iStack_1c4;
  int64_t local_1c0 [2];
  uint local_1b0 [14];
  int64_t alStack_178 [13];
  uint8_t **local_110 [12];
  int64_t local_b0;
  int64_t local_a8;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  int64_t local_88;
  int64_t ****local_80;
  int64_t *****local_78;
  uint64_t local_70;
  uint8_t **local_68;
  uint64_t local_60;
  char *local_58;
  uint64_t local_50;
  int64_t *****local_38;
  int64_t *****local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  ch_1 = func_0x1800be560(param_1,0);
  if (ch_1 == '\0') {
    return;
  }
  if (0xf < (uint64_t)param_1[3]) {
    param_1 = (uint64_t *)*param_1;
  }
  func_0x1800a64e0(local_1c0,param_1,0x24,0x40,1);
  lVal_5 = (int64_t)*(int *)(local_1c0[0] + 4);
  if ((*(byte *)((int64_t)local_1b0 + lVal_5) & 6) != 0) goto LAB_180072391;
  func_0x1800727f0(local_1c0,&local_b0);
  func_0x180072950(local_1c0,0,0);
  _local_98 = ZEXT816(0);
  local_88 = 0;
  uVal_7 = local_a8 + local_b0;
  if (uVal_7 == 0) {
    local_a8 = 0;
    uVal_8 = 0;
LAB_180071df3:
    func_0x180072c00(local_1c0,uVal_8,local_a8);
    lVal_5 = func_0x18008b2b0(local_1b0);
    if (lVal_5 != 0) {
LAB_180071e45:
      func_0x180072e30(&local_80);
      if (local_80 == (int64_t ****)0x0) {
        local_30 = (int64_t *****)0x0;
      }
      else {
        local_60 = (uint8_t **)0x0;
        (*(func_ptr_t )**local_80)(local_80,&DAT_1806b0a90,&local_60);
        local_30 = (int64_t *****)local_60;
      }
      lVal_5 = _DAT_18083eb88;
      local_38 = (int64_t *****)&local_30;
      LOCK();
      _DAT_18083eb88 = _DAT_18083eb88 + 1;
      UNLOCK();
      if (DAT_18083eb80 != (int64_t *)0x0) {
        local_70 = (int64_t *****)0x0;
        local_60 = (uint8_t **)CONCAT44(local_60._4_4_,0x450);
        local_58 = 
        "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/windows.Storage.Streams.h"
        ;
        local_50 = 0;
        iVal_3 = (**(func_ptr_t *)(*DAT_18083eb80 + 0x30))(DAT_18083eb80,local_30,&local_70);
        if (-1 < iVal_3) {
          local_60 = (uint8_t **)local_70;
          LOCK();
          _DAT_18083eb88 = _DAT_18083eb88 + -1;
          UNLOCK();
          goto LAB_180071f3b;
        }
        goto LAB_18007243c;
      }
      LOCK();
      UNLOCK();
      _DAT_18083eb88 = lVal_5;
      func_0x180091be0(&DAT_18083eb80,&local_60,&local_38);
LAB_180071f3b:
      local_78 = (int64_t *****)local_60;
      if (local_30 != (int64_t *****)0x0) {
        func_0x180091220(&local_30);
      }
      local_60 = (uint8_t **)CONCAT44(local_60._4_4_,0x2f3);
      local_58 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\windows.Storage.Streams.h"
      ;
      local_50 = 0;
      iVal_3 = (int)uStack_90 - SUB164(_local_98,0);
      uVal_9 = 1;
      if (iVal_3 != 0) {
        uVal_9 = local_98;
      }
      iVal_3 = (*(func_ptr_t )(*local_78)[0xc])(local_78,iVal_3,uVal_9);
      if (iVal_3 < 0) {
        iVal_3 = func_0x180090aa0(iVal_3,&local_60);
LAB_1800723eb:
        iVal_3 = func_0x180090aa0(iVal_3,&local_60);
LAB_1800723fa:
        iVal_3 = func_0x180090aa0(iVal_3,&local_60);
LAB_180072409:
        iVal_3 = func_0x180090aa0(iVal_3,&local_60);
LAB_180072418:
        iVal_3 = func_0x180090aa0(iVal_3,&local_60);
LAB_180072427:
        func_0x180090aa0(iVal_3,&local_60);
        goto LAB_180072436;
      }
      local_70 = (int64_t *****)0x0;
      local_60 = (uint8_t **)CONCAT44(local_60._4_4_,0x408);
      local_58 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\windows.Storage.Streams.h"
      ;
      local_50 = 0;
      iVal_3 = (*(func_ptr_t )(*local_78)[0x1d])(local_78,&local_70);
      if (iVal_3 < 0) goto LAB_1800723eb;
      local_60 = (uint8_t **)local_70;
      func_0x1800922f0(&local_60);
      if ((int64_t *****)local_60 != (int64_t *****)0x0) {
        func_0x180091220(&local_60);
      }
      local_70 = (int64_t *****)0x0;
      local_60 = (uint8_t **)CONCAT44(local_60._4_4_,0x41a);
      local_58 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\windows.Storage.Streams.h"
      ;
      local_50 = 0;
      iVal_3 = (*(func_ptr_t )(*local_78)[0x1e])(local_78,&local_70);
      if (iVal_3 < 0) goto LAB_1800723fa;
      local_60 = (uint8_t **)local_70;
      func_0x180092a60(&local_60);
      if ((int64_t *****)local_60 != (int64_t *****)0x0) {
        func_0x180091220(&local_60);
      }
      local_60 = (uint8_t **)CONCAT44(local_60._4_4_,0x5b3);
      local_58 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\windows.Storage.Streams.h"
      ;
      local_50 = 0;
      iVal_3 = (*(func_ptr_t )(*local_80)[0xb])(local_80,0);
      lVal_5 = _DAT_18083ebb8;
      if (iVal_3 < 0) goto LAB_180072409;
      LOCK();
      _DAT_18083ebb8 = _DAT_18083ebb8 + 1;
      UNLOCK();
      local_38 = &local_80;
      if (DAT_18083ebb0 != (int64_t *)0x0) {
        local_70 = (int64_t *****)0x0;
        local_60 = (uint8_t **)CONCAT44(local_60._4_4_,0x630);
        local_58 = 
        "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/windows.Storage.Streams.h"
        ;
        local_50 = 0;
        iVal_3 = (**(func_ptr_t *)(*DAT_18083ebb0 + 0x40))(DAT_18083ebb0,local_80,&local_70);
        if (-1 < iVal_3) {
          local_30 = local_70;
          LOCK();
          _DAT_18083ebb8 = _DAT_18083ebb8 + -1;
          UNLOCK();
          goto LAB_180072174;
        }
        goto LAB_18007244b;
      }
      LOCK();
      UNLOCK();
      _DAT_18083ebb8 = lVal_5;
      func_0x180092cd0(&DAT_18083ebb0,&local_30,&local_38);
LAB_180072174:
      func_0x180072f50(&local_38);
      local_60 = (uint8_t **)CONCAT44(local_60._4_4_,0x273);
      local_58 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\windows.ApplicationModel.DataTransfer.h"
      ;
      local_50 = 0;
      iVal_3 = (*(func_ptr_t )(*local_38)[9])(local_38,1);
      if (iVal_3 < 0) goto LAB_180072418;
      local_60 = (uint8_t **)CONCAT44(local_60._4_4_,0x341);
      local_58 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\windows.ApplicationModel.DataTransfer.h"
      ;
      local_50 = 0;
      iVal_3 = (*(func_ptr_t )(*local_38)[0x15])(local_38,local_30);
      lVal_5 = _DAT_18083ebf8;
      if (iVal_3 < 0) goto LAB_180072427;
      LOCK();
      _DAT_18083ebf8 = _DAT_18083ebf8 + 1;
      UNLOCK();
      local_70 = (int64_t *****)&local_38;
      if (DAT_18083ebf0 != (int64_t *)0x0) {
        local_60 = (uint8_t **)CONCAT44(local_60._4_4_,0xf7);
        local_58 = 
        "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/windows.ApplicationModel.DataTransfer.h"
        ;
        local_50 = 0;
        iVal_3 = (**(func_ptr_t *)(*DAT_18083ebf0 + 0x38))(DAT_18083ebf0,local_38);
        if (-1 < iVal_3) {
          LOCK();
          _DAT_18083ebf8 = _DAT_18083ebf8 + -1;
          UNLOCK();
          goto LAB_180072278;
        }
        goto LAB_18007245a;
      }
      LOCK();
      UNLOCK();
      _DAT_18083ebf8 = lVal_5;
      func_0x180093190(&DAT_18083ebf0,&local_70);
LAB_180072278:
      lVal_5 = _DAT_18083ebf8;
      LOCK();
      _DAT_18083ebf8 = _DAT_18083ebf8 + 1;
      UNLOCK();
      if (DAT_18083ebf0 == (int64_t *)0x0) {
        LOCK();
        UNLOCK();
        local_60 = (uint8_t **)&LAB_180093510;
        _DAT_18083ebf8 = lVal_5;
        func_0x180093380(&DAT_18083ebf0,&local_60);
LAB_1800722f1:
        if (local_38 != (int64_t *****)0x0) {
          func_0x180091220(&local_38);
        }
        if (local_30 != (int64_t *****)0x0) {
          func_0x180091220(&local_30);
        }
        if (local_78 != (int64_t *****)0x0) {
          func_0x180091220(&local_78);
        }
        if (local_80 != (int64_t ****)0x0) {
          func_0x180091220(&local_80);
        }
        if (local_98 != (uint8_t  [8])0x0) {
          uVal_7 = local_88 - (int64_t)local_98;
          lVal_5 = (int64_t)local_98;
          if (0xfff < uVal_7) {
            lVal_5 = *(int64_t *)((int64_t)local_98 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_98 + -8) - lVal_5)) goto LAB_1800724e8;
            uVal_7 = uVal_7 + 0x27;
          }
          thunk_FUN_180695dd0(lVal_5,uVal_7);
        }
        lVal_5 = (int64_t)*(int *)(local_1c0[0] + 4);
LAB_180072391:
        *(uint8_t ***)((int64_t)local_1c0 + lVal_5) = &PTR_LAB_1806b0178;
        *(int *)((int64_t)&iStack_1c4 + (int64_t)*(int *)(local_1c0[0] + 4)) =
             *(int *)(local_1c0[0] + 4) + -0xb0;
        func_0x18008b1c0(local_1b0);
        local_110[0] = &PTR_LAB_1806b0288;
        func_0x180673810(local_110);
        return;
      }
      local_60 = (uint8_t **)CONCAT44(local_60._4_4_,0x107);
      local_58 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/windows.ApplicationModel.DataTransfer.h"
      ;
      local_50 = 0;
      uVal_4 = (**(func_ptr_t *)(*DAT_18083ebf0 + 0x40))();
      if (-1 < (int)uVal_4) {
        LOCK();
        _DAT_18083ebf8 = _DAT_18083ebf8 + -1;
        UNLOCK();
        goto LAB_1800722f1;
      }
      goto LAB_180072469;
    }
    lVal_5 = (int64_t)*(int *)(local_1c0[0] + 4);
    uVal_4 = *(uint *)((int64_t)local_1b0 + lVal_5 + 4);
    uVal_7 = (uint64_t)uVal_4;
    uVal_2 = *(uint *)((int64_t)local_1b0 + lVal_5) & 0x15 |
            (uint)(*(int64_t *)((int64_t)alStack_178 + lVal_5) == 0) << 2 | 2;
    *(uint *)((int64_t)local_1b0 + lVal_5) = uVal_2;
    uVal_2 = uVal_2 & uVal_4;
    if (uVal_2 == 0) goto LAB_180071e45;
  }
  else {
    if (-1 < (int64_t)uVal_7) {
      if (uVal_7 < 0x1000) {
        uVal_8 = func_0x180672de0(uVal_7);
      }
      else {
        lVal_5 = func_0x180672de0(uVal_7 + 0x27);
        uVal_8 = lVal_5 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_8 - 8) = lVal_5;
      }
      local_98 = (uint8_t  [8])uVal_8;
      local_88 = uVal_8 + uVal_7;
      func_0x1806ab010(uVal_8,0,uVal_7);
      uStack_90 = uVal_8 + uVal_7;
      local_a8 = local_a8 + local_b0;
      goto LAB_180071df3;
    }
LAB_180072436:
    iVal_3 = func_0x18007c0d0();
LAB_18007243c:
    iVal_3 = func_0x180090aa0(iVal_3,&local_60);
LAB_18007244b:
    iVal_3 = func_0x180090aa0(iVal_3,&local_60);
LAB_18007245a:
    uVal_4 = func_0x180090aa0(iVal_3,&local_60);
LAB_180072469:
    uVal_7 = (uint64_t)uVal_4;
    uVal_2 = func_0x180090aa0(uVal_7,&local_60);
  }
  fnPtr_6 = "ios_base::failbit set";
  if ((uVal_7 & 2) == 0) {
    fnPtr_6 = "ios_base::eofbit set";
  }
  fnPtr_10 = "ios_base::badbit set";
  if ((uVal_2 & 4) == 0) {
    fnPtr_10 = fnPtr_6;
  }
  local_70 = (int64_t *****)CONCAT44(local_70._4_4_,1);
  local_68 = &PTR_vftable_1806b0968;
  func_0x1800968f0(&local_60,&local_70,fnPtr_10);
  local_60 = std::ios_base::failure::vftable;
  func_0x18067a120(&local_60,&DAT_180768ca8);
LAB_1800724e8:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1800724f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void Unwind_1800724f0(void)
{
  LOCK();
  _DAT_18083eb88 = _DAT_18083eb88 + -1;
  UNLOCK();
  return;
}

// Unwind@180072520
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void Unwind_180072520(void)
{
  LOCK();
  _DAT_18083ebb8 = _DAT_18083ebb8 + -1;
  UNLOCK();
  return;
}

// Unwind@180072550
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void Unwind_180072550(void)
{
  LOCK();
  _DAT_18083ebf8 = _DAT_18083ebf8 + -1;
  UNLOCK();
  return;
}

// Unwind@180072580
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void Unwind_180072580(void)
{
  LOCK();
  _DAT_18083ebf8 = _DAT_18083ebf8 + -1;
  UNLOCK();
  return;
}

// Unwind@1800725b0
void Unwind_1800725b0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x1b8) != 0) {
    func_0x180091220(param_2 + 0x1b8);
  }
  return;
}

// Unwind@1800725f0
void Unwind_1800725f0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x188) != 0) {
    func_0x180091220(param_2 + 0x188);
  }
  return;
}

// Unwind@180072630
void Unwind_180072630(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x188) != 0) {
    func_0x180091220(param_2 + 0x188);
  }
  return;
}

// Unwind@180072670
void Unwind_180072670(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x1b0) != 0) {
    func_0x180091220(param_2 + 0x1b0);
  }
  return;
}

// Unwind@1800726b0
void Unwind_1800726b0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x1b8) != 0) {
    func_0x180091220(param_2 + 0x1b8);
  }
  return;
}

// Unwind@1800726f0
void Unwind_1800726f0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x170) != 0) {
    func_0x180091220(param_2 + 0x170);
  }
  return;
}

// Unwind@180072730
void Unwind_180072730(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x168) != 0) {
    func_0x180091220(param_2 + 0x168);
  }
  return;
}

// Unwind@180072770
void Unwind_180072770(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x150);
  return;
}

// Unwind@1800727a0
void Unwind_1800727a0(uint64_t param_1,int64_t param_2)
{
  func_0x1800573d0(param_2 + 0x28);
  return;
}

// Unwind@1800727d0
void Unwind_1800727d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800727f0
uint64_t * func_0x1800727f0(int64_t *param_1,uint64_t *param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x48);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 8))();
  }
  func_0x1800acb80(param_1,1);
  if ((*(byte *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x10) & 6) == 0) {
    pLong_1 = *(int64_t **)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x48);
    (**(func_ptr_t *)(*pLong_1 + 0x50))(pLong_1,param_2,0,1,1);
  }
  else {
    *param_2 = 0xffffffffffffffff;
    *(uint8_t (*)[16])(param_2 + 1) = ZEXT816(0);
  }
  pLong_1 = *(int64_t **)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x48);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x10))();
  }
  return param_2;
}

// Catch_All@1800728b0
uint64_t Catch_All_1800728b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800966b0((int64_t)*(int *)(**(int64_t **)(param_2 + 0x30) + 4) +
                (int64_t)*(int64_t **)(param_2 + 0x30),4,1);
  return 0x180072842;
}

// Unwind@1800728f0
void Unwind_1800728f0(uint64_t param_1,int64_t param_2)
{
  func_0x180097250(param_2 + 0x38);
  return;
}

// Unwind@180072910
void Unwind_180072910(uint64_t param_1,int64_t param_2)
{
  func_0x180097250(param_2 + 0x38);
  return;
}

// Unwind@180072930
void Unwind_180072930(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180072950
int64_t * func_0x180072950(int64_t *param_1,uint64_t param_2,uint32_t param_3)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  char *fnPtr_6;
  char *fnPtr_7;
  uint8_t **local_98 [5];
  uint32_t local_70 [2];
  uint8_t **local_68;
  uint32_t local_60;
  uint32_t uStack_5c;
  uint8_t **local_58;
  int64_t *local_48;
  uint8_t local_40;
  int64_t *local_38;
  uint local_2c;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVal_5 = (int64_t)*(int *)(*param_1 + 4);
  uVal_3 = *(uint *)((int64_t)param_1 + lVal_5 + 0x10) & 0x16 |
          (uint)(*(int64_t *)((int64_t)param_1 + lVal_5 + 0x48) == 0) << 2;
  *(uint *)((int64_t)param_1 + lVal_5 + 0x10) = uVal_3;
  uVal_3 = uVal_3 & *(uint *)((int64_t)param_1 + lVal_5 + 0x14);
  if (uVal_3 == 0) {
    pLong_4 = *(int64_t **)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x48);
    local_48 = param_1;
    if (pLong_4 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_4 + 8))();
    }
    local_40 = func_0x1800acb80(param_1,1);
    local_38 = param_1;
    if ((*(byte *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x10) & 6) == 0) {
      pLong_4 = *(int64_t **)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x48);
      (**(func_ptr_t *)(*pLong_4 + 0x50))(pLong_4,&local_60,param_2,param_3,1);
      local_2c = (uint)((int64_t)local_58 + CONCAT44(uStack_5c,local_60) == -1) * 2;
    }
    else {
      local_2c = 0;
    }
    pLong_4 = local_38;
    lVal_5 = (int64_t)*(int *)(*local_38 + 4);
    uVal_3 = *(uint *)((int64_t)local_38 + lVal_5 + 0x10) & 0x17 | local_2c |
            (uint)(*(int64_t *)((int64_t)local_38 + lVal_5 + 0x48) == 0) << 2;
    *(uint *)((int64_t)local_38 + lVal_5 + 0x10) = uVal_3;
    uVal_3 = uVal_3 & *(uint *)((int64_t)local_38 + lVal_5 + 0x14);
    if (uVal_3 == 0) {
      pLong_1 = *(int64_t **)((int64_t)local_48 + (int64_t)*(int *)(*local_48 + 4) + 0x48);
      if (pLong_1 != (int64_t *)0x0) {
        (**(func_ptr_t *)(*pLong_1 + 0x10))();
      }
      return pLong_4;
    }
  }
  else {
    fnPtr_7 = "ios_base::failbit set";
    if ((uVal_3 & 2) == 0) {
      fnPtr_7 = "ios_base::eofbit set";
    }
    fnPtr_6 = "ios_base::badbit set";
    if ((uVal_3 & 4) == 0) {
      fnPtr_6 = fnPtr_7;
    }
    local_60 = 1;
    local_58 = &PTR_vftable_1806b0968;
    func_0x180096770(local_98,fnPtr_6,&local_60);
    uVal_3 = func_0x18067a120(local_98,&DAT_180768ca8);
  }
  fnPtr_7 = "ios_base::failbit set";
  if ((uVal_3 & 2) == 0) {
    fnPtr_7 = "ios_base::eofbit set";
  }
  fnPtr_6 = "ios_base::badbit set";
  if ((uVal_3 & 4) == 0) {
    fnPtr_6 = fnPtr_7;
  }
  local_70[0] = 1;
  local_68 = &PTR_vftable_1806b0968;
  func_0x1800968f0(local_98,local_70,fnPtr_6);
  local_98[0] = std::ios_base::failure::vftable;
  func_0x18067a120(local_98,&DAT_180768ca8);
  fnPtr_2 = (func_ptr_t )swi(3);
  pLong_4 = (int64_t *)(*fnPtr_2)();
  return pLong_4;
}

// Catch_All@180072b30
uint64_t Catch_All_180072b30(uint64_t param_1,int64_t param_2)
{
  func_0x1800966b0((int64_t)*(int *)(**(int64_t **)(param_2 + 0x90) + 4) +
                (int64_t)*(int64_t **)(param_2 + 0x90),4,1);
  *(uint32_t *)(param_2 + 0x9c) = 0;
  return 0x180072a1c;
}

// Unwind@180072b80
void Unwind_180072b80(uint64_t param_1,int64_t param_2)
{
  func_0x180097250(param_2 + 0x80);
  return;
}

// Unwind@180072bb0
void Unwind_180072bb0(uint64_t param_1,int64_t param_2)
{
  func_0x180097250(param_2 + 0x80);
  return;
}

// Unwind@180072be0
void Unwind_180072be0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180072c00
int64_t * func_0x180072c00(int64_t *param_1,uint64_t param_2,int64_t param_3)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  char *fnPtr_6;
  char *fnPtr_7;
  uint8_t **local_80 [5];
  uint32_t local_58 [2];
  uint8_t **local_50;
  int64_t *local_48;
  byte local_40;
  int64_t *local_38;
  uint local_2c;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  param_1[1] = 0;
  pLong_5 = *(int64_t **)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x48);
  local_48 = param_1;
  if (pLong_5 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_5 + 8))();
  }
  local_40 = func_0x1800acb80(param_1,1);
  local_38 = param_1;
  if ((byte)(param_3 < 1 | local_40 ^ 1) == 0) {
    pLong_5 = *(int64_t **)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x48);
    lVal_4 = (**(func_ptr_t *)(*pLong_5 + 0x40))(pLong_5,param_2,param_3);
    local_38[1] = lVal_4;
    local_2c = (uint)(lVal_4 != param_3) * 3;
  }
  else {
    local_2c = 0;
  }
  pLong_5 = local_38;
  lVal_4 = (int64_t)*(int *)(*local_38 + 4);
  uVal_3 = *(uint *)((int64_t)local_38 + lVal_4 + 0x10) & 0x17 | local_2c |
          (uint)(*(int64_t *)((int64_t)local_38 + lVal_4 + 0x48) == 0) << 2;
  *(uint *)((int64_t)local_38 + lVal_4 + 0x10) = uVal_3;
  uVal_3 = uVal_3 & *(uint *)((int64_t)local_38 + lVal_4 + 0x14);
  if (uVal_3 == 0) {
    pLong_1 = *(int64_t **)((int64_t)local_48 + (int64_t)*(int *)(*local_48 + 4) + 0x48);
    if (pLong_1 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_1 + 0x10))();
    }
    return pLong_5;
  }
  fnPtr_6 = "ios_base::failbit set";
  if ((uVal_3 & 2) == 0) {
    fnPtr_6 = "ios_base::eofbit set";
  }
  fnPtr_7 = "ios_base::badbit set";
  if ((uVal_3 & 4) == 0) {
    fnPtr_7 = fnPtr_6;
  }
  local_58[0] = 1;
  local_50 = &PTR_vftable_1806b0968;
  func_0x1800968f0(local_80,local_58,fnPtr_7);
  local_80[0] = std::ios_base::failure::vftable;
  func_0x18067a120(local_80,&DAT_180768ca8);
  fnPtr_2 = (func_ptr_t )swi(3);
  pLong_5 = (int64_t *)(*fnPtr_2)();
  return pLong_5;
}

// Catch_All@180072d60
uint64_t Catch_All_180072d60(uint64_t param_1,int64_t param_2)
{
  func_0x1800966b0((int64_t)*(int *)(**(int64_t **)(param_2 + 0x70) + 4) +
                (int64_t)*(int64_t **)(param_2 + 0x70),4,1);
  *(uint32_t *)(param_2 + 0x7c) = 0;
  return 0x180072ca1;
}

// Unwind@180072db0
void Unwind_180072db0(uint64_t param_1,int64_t param_2)
{
  func_0x180097250(param_2 + 0x60);
  return;
}

// Unwind@180072de0
void Unwind_180072de0(uint64_t param_1,int64_t param_2)
{
  func_0x180097250(param_2 + 0x60);
  return;
}

// Unwind@180072e10
void Unwind_180072e10(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180072e30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180072e30(uint64_t *param_1)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  int iVal_3;
  uint64_t *pU64_4;
  uint64_t local_40;
  char *local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t *local_20;
  uint64_t local_18;
  
  lVal_2 = _DAT_18083eb58;
  local_18 = 0xfffffffffffffffe;
  LOCK();
  _DAT_18083eb58 = _DAT_18083eb58 + 1;
  UNLOCK();
  if (DAT_18083eb50 == (int64_t *)0x0) {
    LOCK();
    UNLOCK();
    local_40 = &DAT_180091bd0;
    _DAT_18083eb58 = lVal_2;
    func_0x180090820(&DAT_18083eb50,&local_28,&local_40);
  }
  else {
    local_20 = (uint64_t *)0x0;
    local_40 = (uint8_t *)CONCAT44(local_40._4_4_,0x19d0);
    local_38 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/base.h";
    local_30 = 0;
    iVal_3 = (**(func_ptr_t *)(*DAT_18083eb50 + 0x30))(DAT_18083eb50,&local_20);
    if (iVal_3 < 0) {
      func_0x180090aa0(iVal_3,&local_40);
      fnPtr_1 = (func_ptr_t )swi(3);
      pU64_4 = (uint64_t *)(*fnPtr_1)();
      return pU64_4;
    }
    if (local_20 == (uint64_t *)0x0) {
      local_28 = 0;
    }
    else {
      local_40 = (uint8_t *)0x0;
      (**(func_ptr_t *)*local_20)(local_20,&DAT_1806b065c,&local_40);
      local_28 = local_40;
      if (local_20 != (uint64_t *)0x0) {
        func_0x180091220(&local_20);
      }
    }
    LOCK();
    _DAT_18083eb58 = _DAT_18083eb58 + -1;
    UNLOCK();
  }
  *param_1 = local_28;
  return param_1;
}

// Unwind@180072f20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void Unwind_180072f20(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x48) != 0) {
    func_0x180091220(param_2 + 0x48);
  }
  LOCK();
  _DAT_18083eb58 = _DAT_18083eb58 + -1;
  UNLOCK();
  return;
}

// func_0x180072f50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180072f50(uint64_t *param_1)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  int iVal_3;
  uint64_t *pU64_4;
  uint64_t local_40;
  char *local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t *local_20;
  uint64_t local_18;
  
  lVal_2 = _DAT_18083ebd8;
  local_18 = 0xfffffffffffffffe;
  LOCK();
  _DAT_18083ebd8 = _DAT_18083ebd8 + 1;
  UNLOCK();
  if (DAT_18083ebd0 == (int64_t *)0x0) {
    LOCK();
    UNLOCK();
    local_40 = &DAT_180093180;
    _DAT_18083ebd8 = lVal_2;
    func_0x180092f00(&DAT_18083ebd0,&local_28,&local_40);
  }
  else {
    local_20 = (uint64_t *)0x0;
    local_40 = (uint8_t *)CONCAT44(local_40._4_4_,0x19d0);
    local_38 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/base.h";
    local_30 = 0;
    iVal_3 = (**(func_ptr_t *)(*DAT_18083ebd0 + 0x30))(DAT_18083ebd0,&local_20);
    if (iVal_3 < 0) {
      func_0x180090aa0(iVal_3,&local_40);
      fnPtr_1 = (func_ptr_t )swi(3);
      pU64_4 = (uint64_t *)(*fnPtr_1)();
      return pU64_4;
    }
    if (local_20 == (uint64_t *)0x0) {
      local_28 = 0;
    }
    else {
      local_40 = (uint8_t *)0x0;
      (**(func_ptr_t *)*local_20)(local_20,&DAT_1806b0780,&local_40);
      local_28 = local_40;
      if (local_20 != (uint64_t *)0x0) {
        func_0x180091220(&local_20);
      }
    }
    LOCK();
    _DAT_18083ebd8 = _DAT_18083ebd8 + -1;
    UNLOCK();
  }
  *param_1 = local_28;
  return param_1;
}

// Unwind@180073040
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void Unwind_180073040(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x48) != 0) {
    func_0x180091220(param_2 + 0x48);
  }
  LOCK();
  _DAT_18083ebd8 = _DAT_18083ebd8 + -1;
  UNLOCK();
  return;
}

// func_0x180073070
int64_t func_0x180073070(int64_t param_1,int param_2)
{
  if (param_1 != 0) {
    return (int64_t)*(int *)(param_1 + param_2) + param_1 + param_2 + 4;
  }
  return 0;
}

// func_0x180073090
int64_t func_0x180073090(int64_t param_1,int param_2)
{
  if (param_1 != 0) {
    return *(int *)(param_1 + param_2) + param_1 + 7;
  }
  return 0;
}

// func_0x1800730b0
uint8_t (*func_0x1800730b0(uint8_t (*param_1)[16]))[16]
{
  uint *_Str;
  func_ptr_t fnPtr_1;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x2f40) == '\0') {
    lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_4 + 0x2f40) = 1;
    *(uint8_t *)(lVal_4 + 0x2f3e) = 1;
    *(uint32_t *)(lVal_4 + 0x2f38) = 0x4b5e45c7;
    *(uint16_t *)(lVal_4 + 0x2f3c) = 0x5743;
    func_0x180673140(&LAB_180093580);
  }
  lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint *)(lVal_4 + 0x2f38);
  if (*(char *)(lVal_4 + 0x2f3e) == '\x01') {
    *_Str = *_Str ^ 0x333b31e9;
    *(byte *)(lVal_4 + 0x2f3c) = *(byte *)(lVal_4 + 0x2f3c) ^ 0x37;
    *(byte *)(lVal_4 + 0x2f3d) = *(byte *)(lVal_4 + 0x2f3d) ^ 0x57;
    *(uint8_t *)(lVal_4 + 0x2f3e) = 0;
  }
  *param_1 = ZEXT816(0);
  sz_2 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_2) {
    uVal_6 = 0xf;
    pArr16_5 = param_1;
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
      *(uint8_t (**)[16])*param_1 = pArr16_5;
    }
    *(size_t *)param_1[1] = sz_2;
    *(uint64_t *)(param_1[1] + 8) = uVal_6;
    func_0x1806aa960(pArr16_5,_Str,sz_2);
    (*pArr16_5)[sz_2] = 0;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_5 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_5;
}

// func_0x180073200
void func_0x180073200(LPVOID param_1,uint param_2)
{
  func_ptr_t fnPtr_1;
  uint64_t dwSize;
  uint8_t auStack_58 [44];
  DWORD local_2c;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  if (param_1 != (LPVOID)0x0) {
    dwSize = (uint64_t)param_2;
    VirtualProtect(param_1,dwSize,0x40,&local_2c);
    func_0x1806ab010(param_1,0x90,dwSize);
    VirtualProtect(param_1,dwSize,local_2c,&local_2c);
  }
  if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_58)) {
    return;
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_58);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180073290
void func_0x180073290(LPVOID param_1,int64_t param_2,uint64_t param_3)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_58 [36];
  DWORD local_34;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  if ((param_1 != (LPVOID)0x0) && (param_2 != 0)) {
    param_3 = param_3 & 0xffffffff;
    VirtualProtect(param_1,param_3,0x40,&local_34);
    func_0x1806aa960(param_2,param_1,param_3);
    VirtualProtect(param_1,param_3,local_34,&local_34);
  }
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_58)) {
    return;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_58);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180073330
void func_0x180073330(LPVOID param_1,int64_t param_2,uint64_t param_3)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_58 [36];
  DWORD local_34;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  if ((param_1 != (LPVOID)0x0) && (param_2 != 0)) {
    param_3 = param_3 & 0xffffffff;
    VirtualProtect(param_1,param_3,0x40,&local_34);
    func_0x1806aa960(param_1,param_2,param_3);
    VirtualProtect(param_1,param_3,local_34,&local_34);
  }
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_58)) {
    return;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_58);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800733d0
int64_t * func_0x1800733d0(int64_t *param_1,char *param_2)
{
  uint8_t uVal_1;
  int64_t *pLong_2;
  uint8_t *pU64_3;
  bool bFlag_4;
  int iVal_5;
  size_t sz_6;
  int64_t lVal_7;
  size_t sz_8;
  int64_t lVal_9;
  char *fnPtr_10;
  int64_t lVal_11;
  int64_t lVal_12;
  char *fnPtr_13;
  int64_t lVal_14;
  uint uVal_15;
  uint8_t **local_98 [5];
  uint32_t local_70 [2];
  uint8_t **local_68;
  int64_t *local_60;
  uint8_t local_58;
  int64_t *local_50;
  uint local_44;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  sz_6 = strlen(param_2);
  lVal_7 = *param_1;
  lVal_11 = (int64_t)*(int *)(lVal_7 + 4);
  lVal_9 = *(int64_t *)((int64_t)param_1 + lVal_11 + 0x28);
  lVal_14 = lVal_9 - sz_6;
  lVal_12 = 0;
  if (lVal_14 != 0 && (int64_t)sz_6 <= lVal_9) {
    lVal_12 = lVal_14;
  }
  if (lVal_9 < 1) {
    lVal_12 = 0;
  }
  pLong_2 = *(int64_t **)((int64_t)param_1 + lVal_11 + 0x48);
  local_60 = param_1;
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 8))();
    lVal_7 = *param_1;
    lVal_11 = (int64_t)*(int *)(lVal_7 + 4);
  }
  if (*(int *)((int64_t)param_1 + lVal_11 + 0x10) != 0) {
    local_58 = 0;
    uVal_15 = 4;
    goto LAB_1800735eb;
  }
  pLong_2 = *(int64_t **)((int64_t)param_1 + lVal_11 + 0x50);
  if ((pLong_2 == (int64_t *)0x0) || (pLong_2 == param_1)) {
    local_58 = true;
  }
  else {
    func_0x180097080();
    lVal_7 = *param_1;
    local_58 = *(int *)((int64_t)param_1 + (int64_t)*(int *)(lVal_7 + 4) + 0x10) == 0;
    uVal_15 = 4;
    if (!(bool)local_58) goto LAB_1800735eb;
  }
  lVal_9 = (int64_t)*(int *)(lVal_7 + 4);
  local_50 = param_1;
  if (((*(uint *)((int64_t)param_1 + lVal_9 + 0x18) & 0x1c0) != 0x40) && (0 < lVal_12)) {
    do {
      pLong_2 = *(int64_t **)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x48);
      uVal_1 = *(uint8_t *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x58);
      if (*(int64_t *)pLong_2[8] == 0) {
LAB_180073504:
        local_44 = 0;
        iVal_5 = (**(func_ptr_t *)(*pLong_2 + 0x18))(pLong_2,uVal_1);
        param_1 = local_50;
        if (iVal_5 == -1) goto LAB_1800735ce;
      }
      else {
        iVal_5 = *(int *)pLong_2[0xb];
        if (iVal_5 < 1) goto LAB_180073504;
        *(int *)pLong_2[0xb] = iVal_5 + -1;
        pU64_3 = *(uint8_t **)(int64_t *)pLong_2[8];
        *(int64_t *)pLong_2[8] = (int64_t)(pU64_3 + 1);
        *pU64_3 = uVal_1;
      }
      lVal_9 = lVal_14 + -1;
      bFlag_4 = 0 < lVal_14;
      lVal_14 = lVal_9;
    } while (lVal_9 != 0 && bFlag_4);
    lVal_9 = (int64_t)*(int *)(*param_1 + 4);
    lVal_12 = 0;
  }
  pLong_2 = *(int64_t **)((int64_t)param_1 + lVal_9 + 0x48);
  local_44 = 0;
  sz_8 = (**(func_ptr_t *)(*pLong_2 + 0x48))(pLong_2,param_2,sz_6);
  uVal_15 = (uint)(sz_8 != sz_6) << 2;
  param_1 = local_50;
  if ((sz_8 == sz_6) && (0 < lVal_12)) {
    do {
      pLong_2 = *(int64_t **)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x48);
      uVal_1 = *(uint8_t *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x58);
      if (*(int64_t *)pLong_2[8] == 0) {
LAB_1800735b4:
        local_44 = uVal_15;
        iVal_5 = (**(func_ptr_t *)(*pLong_2 + 0x18))(pLong_2,uVal_1);
        param_1 = local_50;
        if (iVal_5 == -1) goto LAB_1800735ce;
      }
      else {
        iVal_5 = *(int *)pLong_2[0xb];
        if (iVal_5 < 1) goto LAB_1800735b4;
        *(int *)pLong_2[0xb] = iVal_5 + -1;
        pU64_3 = *(uint8_t **)(int64_t *)pLong_2[8];
        *(int64_t *)pLong_2[8] = (int64_t)(pU64_3 + 1);
        *pU64_3 = uVal_1;
      }
      lVal_9 = lVal_12 + -1;
      bFlag_4 = 0 < lVal_12;
      lVal_12 = lVal_9;
    } while (lVal_9 != 0 && bFlag_4);
  }
LAB_1800735da:
  *(uint64_t *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x28) = 0;
LAB_1800735eb:
  while( true ) {
    lVal_9 = (int64_t)*(int *)(*param_1 + 4);
    uVal_15 = (uVal_15 | *(uint *)((int64_t)param_1 + lVal_9 + 0x10)) & 0x17 |
             (uint)(*(int64_t *)((int64_t)param_1 + lVal_9 + 0x48) == 0) << 2;
    *(uint *)((int64_t)param_1 + lVal_9 + 0x10) = uVal_15;
    uVal_15 = uVal_15 & *(uint *)((int64_t)param_1 + lVal_9 + 0x14);
    if (uVal_15 == 0) break;
    fnPtr_10 = "ios_base::failbit set";
    if ((uVal_15 & 2) == 0) {
      fnPtr_10 = "ios_base::eofbit set";
    }
    fnPtr_13 = "ios_base::badbit set";
    if ((uVal_15 & 4) == 0) {
      fnPtr_13 = fnPtr_10;
    }
    local_70[0] = 1;
    local_68 = &PTR_vftable_1806b0968;
    func_0x1800968f0(local_98,local_70,fnPtr_13);
    local_98[0] = std::ios_base::failure::vftable;
    func_0x18067a120(local_98,&DAT_180768ca8);
    param_1 = local_50;
    uVal_15 = local_44;
  }
  iVal_5 = thunk_FUN_18067b540();
  pLong_2 = local_60;
  if (iVal_5 == 0) {
    func_0x1800972b0(local_60);
  }
  pLong_2 = *(int64_t **)((int64_t)pLong_2 + (int64_t)*(int *)(*pLong_2 + 4) + 0x48);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x10))();
  }
  return param_1;
LAB_1800735ce:
  uVal_15 = 4;
  param_1 = local_50;
  goto LAB_1800735da;
}

// Unwind@1800736d0
void Unwind_1800736d0(uint64_t param_1,int64_t param_2)
{
  func_0x180097250(param_2 + 0x58);
  return;
}

// Catch_All@180073710
uint64_t Catch_All_180073710(uint64_t param_1,int64_t param_2)
{
  func_0x1800966b0((int64_t)*(int *)(**(int64_t **)(param_2 + 0x68) + 4) +
                (int64_t)*(int64_t **)(param_2 + 0x68),4,1);
  return 0x1800736bc;
}

// Unwind@180073760
void Unwind_180073760(uint64_t param_1,int64_t param_2)
{
  func_0x180097010(param_2 + 0x58);
  return;
}

// Unwind@1800737a0
void Unwind_1800737a0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800737c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint8_t (*func_0x1800737c0(uint8_t (*param_1)[16],uint64_t *param_2,uint64_t *param_3))[16]
{
  char *_Str;
  uint8_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  char ch_9;
  uint64_t uVal_10;
  size_t sz_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  int64_t ****ptr4_Long_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  uint8_t (*pArr16_17)[16];
  uint *pU64_18;
  uint8_t (*pArr16_19)[16];
  uint8_t (*pArr16_20)[16];
  int64_t ***ptr3_Long_21;
  uint64_t ****ptr4_U64_22;
  int64_t ****ptr4_Long_23;
  uint8_t *pU64_24;
  int64_t ****ptr4_Long_25;
  uint64_t uVal_26;
  uint64_t uVal_27;
  uint64_t *pU64_28;
  uint32_t *pU64_29;
  int iVal_30;
  int64_t ****ptr4_Long_31;
  uint32_t *pU64_32;
  int64_t ****local_158;
  uint8_t *puStack_150;
  int64_t local_148;
  uint64_t uStack_140;
  uint32_t local_138;
  uint32_t uStack_134;
  uint32_t uStack_130;
  uint32_t uStack_12c;
  undefined5 uStack_128;
  undefined3 uStack_123;
  uint64_t local_120;
  uint64_t *local_118;
  uint64_t *local_110;
  uint8_t local_108 [16];
  uint64_t local_f8;
  uint64_t uStack_f0;
  uint64_t ****local_e8;
  int64_t ****pppplStack_e0;
  int64_t ***local_d8;
  int64_t ***ppplStack_d0;
  uint local_c8;
  uint32_t uStack_c4;
  uint uStack_c0;
  uint32_t uStack_bc;
  int64_t local_b8;
  uint64_t uStack_b0;
  uint8_t (*local_a0)[16];
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint8_t local_88 [20];
  uint8_t local_74;
  uint8_t local_73;
  uint8_t local_72;
  uint8_t local_71;
  uint64_t local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_118 = param_3;
  local_110 = param_2;
  uVal_10 = _Xtime_get_ticks();
  local_138 = _DAT_1806b0831;
  uStack_134 = _UNK_1806b0835;
  uStack_130 = _UNK_1806b0839;
  uStack_12c = CONCAT31(0x8c9aa9,(char)_UNK_1806b083d);
  uStack_128 = 0x19c05a6e71;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x2f88) == '\0') {
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_13 + 0x2f88) = 1;
    func_0x18007cd50(lVal_13 + 0x2f71,&local_138);
    func_0x180673140(&LAB_180094560);
  }
  _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x2f71);
  local_a0 = param_1;
  func_0x1800adb50(_Str);
  local_88._0_16_ = ZEXT816(0);
  _local_98 = ZEXT816(0);
  sz_11 = strlen(_Str);
  if ((int64_t)sz_11 < 0) {
LAB_1800741c4:
    func_0x18007ba70();
    fnPtr_2 = (func_ptr_t )swi(3);
    pArr16_20 = (uint8_t (*)[16])(*fnPtr_2)();
    return pArr16_20;
  }
  uVal_26 = 0xf;
  pU64_24 = local_98;
  if (0xf < sz_11) {
    uVal_12 = sz_11 | 0xf;
    uVal_26 = 0x16;
    if (0x16 < uVal_12) {
      uVal_26 = uVal_12;
    }
    if (uVal_12 < 0xfff) {
      pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
    }
    else {
      lVal_13 = func_0x180672de0(uVal_26 + 0x28);
      pU64_24 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_24 + -8) = lVal_13;
    }
    local_98 = (uint8_t  [8])pU64_24;
  }
  local_88._8_8_ = uVal_26;
  local_88._0_8_ = sz_11;
  func_0x1806aa960(pU64_24,_Str,sz_11);
  pU64_24[sz_11] = 0;
  local_108._0_8_ = uVal_10;
  local_158 = (int64_t ****)local_108;
  puStack_150 = &LAB_1800adb80;
  local_e8 = (uint64_t ****)&DAT_0000000f;
  pppplStack_e0 = (int64_t ****)&local_158;
  pU64_24 = local_98;
  if (0xf < (uint64_t)local_88._8_8_) {
    pU64_24 = (uint8_t *)local_98;
  }
  local_c8 = (uint)pU64_24;
  uStack_c4 = (uint)((uint64_t)pU64_24 >> 0x20);
  uStack_c0 = SUB164(local_88._0_16_,0);
  uStack_bc = SUB164(local_88._0_16_,4);
  func_0x18063ff10(&local_138,&local_c8);
  pArr16_20 = local_a0;
  if (0xf < (uint64_t)local_88._8_8_) {
    uVal_26 = local_88._8_8_ + 1;
    lVal_13 = (int64_t)local_98;
    if (0xfff < uVal_26) {
      lVal_13 = *(int64_t *)((int64_t)local_98 + -8);
      if (0x1f < (uint64_t)(((int64_t)local_98 + -8) - lVal_13)) goto LAB_180074120;
      uVal_26 = local_88._8_8_ + 0x28;
    }
    thunk_FUN_180695dd0(lVal_13,uVal_26);
  }
  *pArr16_20 = ZEXT816(0);
  *(uint64_t *)pArr16_20[1] = 0;
  *(uint8_t **)(pArr16_20[1] + 8) = &DAT_0000000f;
  iVal_30 = 1;
  pArr16_19 = pArr16_20;
  do {
    if (iVal_30 == 1) {
      _local_98 = ZEXT816(0);
      local_88._0_16_ = ZEXT816(0xf) << 0x40;
      uVal_12 = 0xf;
      lVal_13 = 0;
      uVal_26 = CONCAT35(uStack_123,uStack_128);
    }
    else {
      local_73 = 0;
      ptr4_Long_14 = (int64_t ****)&local_158;
      func_0x180094590(ptr4_Long_14,iVal_30);
      if (uStack_140 - local_148 < 2) {
        local_72 = 0;
        ptr4_Long_14 = (int64_t ****)func_0x1800871a0(ptr4_Long_14,2,local_148,0,&DAT_180760d40,2);
      }
      else {
        ptr4_Long_31 = ptr4_Long_14;
        if (0xf < uStack_140) {
          ptr4_Long_31 = local_158;
        }
        ptr4_Long_25 = (int64_t ****)0x2;
        if ((&UNK_180760d3f < (uint8_t *)((int64_t)ptr4_Long_31 + local_148) &&
             ptr4_Long_31 < &DAT_180760d42) &&
           (ptr4_Long_25 = ptr4_Long_31 + -0x300ec1a8,
           ptr4_Long_31 < &DAT_180760d40 || ptr4_Long_25 == (int64_t ****)0x0)) {
          ptr4_Long_25 = (int64_t ****)0x0;
        }
        lVal_13 = local_148 + 1;
        ptr4_Long_23 = local_158;
        if (uStack_140 < 0x10) {
          ptr4_Long_23 = ptr4_Long_14;
        }
        local_148 = local_148 + 2;
        func_0x1806aa960((uint8_t *)((int64_t)ptr4_Long_23 + 2),ptr4_Long_31,lVal_13);
        func_0x1806aa960(ptr4_Long_31,&DAT_180760d40,ptr4_Long_25);
        func_0x1806aa960((uint8_t *)((int64_t)ptr4_Long_31 + (int64_t)ptr4_Long_25),
                      (uint8_t *)((int64_t)ptr4_Long_25 + 0x180760d42),2 - (int64_t)ptr4_Long_25);
      }
      local_d8 = ptr4_Long_14[2];
      ppplStack_d0 = ptr4_Long_14[3];
      local_e8 = (uint64_t ****)*ptr4_Long_14;
      pppplStack_e0 = (int64_t ****)ptr4_Long_14[1];
      ptr4_Long_14[2] = (int64_t ***)0x0;
      ptr4_Long_14[3] = (int64_t ***)0xf;
      *(uint8_t *)ptr4_Long_14 = 0;
      pArr16_19 = local_a0;
      ptr3_Long_21 = local_d8;
      if (ppplStack_d0 == local_d8) {
        local_71 = 0;
        pArr16_17 = (uint8_t (*)[16])func_0x180082950(&local_e8,1);
        pArr16_19 = local_a0;
      }
      else {
        local_d8 = (int64_t ***)((int64_t)local_d8 + 1);
        ptr4_U64_22 = &local_e8;
        if ((int64_t ***)0xf < ppplStack_d0) {
          ptr4_U64_22 = local_e8;
        }
        *(uint16_t *)((int64_t)ptr4_U64_22 + (int64_t)ptr3_Long_21) = 0x29;
        pArr16_17 = (uint8_t (*)[16])&local_e8;
      }
      _local_98 = *pArr16_17;
      local_88._0_16_ = pArr16_17[1];
      *(uint64_t *)pArr16_17[1] = 0;
      *(uint64_t *)(pArr16_17[1] + 8) = 0xf;
      (*pArr16_17)[0] = 0;
      uVal_26 = CONCAT35(uStack_123,uStack_128);
      lVal_13 = local_88._0_8_;
      uVal_12 = local_88._8_8_;
    }
    pU64_29 = &local_138;
    if (0xf < local_120) {
      pU64_29 = (uint32_t *)CONCAT44(uStack_134,local_138);
    }
    if (uVal_12 - lVal_13 < uVal_26) {
      local_74 = iVal_30 == 1;
      pU64_24 = (uint8_t *)func_0x1800871a0(local_98,uVal_26,lVal_13,0,pU64_29,uVal_26);
      pArr16_19 = local_a0;
    }
    else {
      local_88._0_8_ = lVal_13 + uVal_26;
      pU64_32 = (uint32_t *)local_98;
      if (0xf < uVal_12) {
        pU64_32 = (uint32_t *)local_98;
      }
      uVal_12 = uVal_26;
      if (((pU64_32 < (uint32_t *)((int64_t)pU64_29 + uVal_26)) &&
          (pU64_29 <= (uint32_t *)((int64_t)pU64_32 + lVal_13))) &&
         (uVal_12 = (int64_t)pU64_32 - (int64_t)pU64_29, pU64_32 < pU64_29 || uVal_12 == 0)) {
        uVal_12 = 0;
      }
      func_0x1806aa960((uint8_t *)((int64_t)pU64_32 + uVal_26),pU64_32,lVal_13 + 1);
      func_0x1806aa960(pU64_32,pU64_29,uVal_12);
      func_0x1806aa960((uint8_t *)((int64_t)pU64_32 + uVal_12),
                    (uint8_t *)((int64_t)(uint32_t *)((int64_t)pU64_29 + uVal_26) + uVal_12),
                    uVal_26 - uVal_12);
      pU64_24 = local_98;
    }
    uVal_1 = *pU64_24;
    uVal_10 = *(uint64_t *)(pU64_24 + 8);
    uStack_c4._3_1_ = (uint8_t)uVal_10;
    uStack_c0 = (uint)((uint64_t)uVal_10 >> 8);
    uStack_bc._0_3_ = (undefined3)((uint64_t)uVal_10 >> 0x28);
    local_c8 = (uint)*(uint64_t *)(pU64_24 + 1);
    uStack_c4 = (uint)((uint64_t)*(uint64_t *)(pU64_24 + 1) >> 0x20);
    uVal_3 = *(uint32_t *)(pU64_24 + 0x10);
    uVal_4 = *(uint32_t *)(pU64_24 + 0x14);
    uVal_5 = *(uint32_t *)(pU64_24 + 0x18);
    uVal_6 = *(uint32_t *)(pU64_24 + 0x1c);
    *(uint64_t *)(pU64_24 + 0x10) = 0;
    *(uint64_t *)(pU64_24 + 0x18) = 0xf;
    *pU64_24 = 0;
    uVal_26 = *(uint64_t *)(pArr16_19[1] + 8);
    if (0xf < uVal_26) {
      lVal_13 = *(int64_t *)*pArr16_19;
      uVal_12 = uVal_26 + 1;
      lVal_16 = lVal_13;
      if (0xfff < uVal_12) {
        lVal_16 = *(int64_t *)(lVal_13 + -8);
        if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_16)) goto LAB_180074120;
        uVal_12 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_12);
    }
    (*pArr16_19)[0] = uVal_1;
    *(uint64_t *)(*pArr16_20 + 8) =
         CONCAT35((undefined3)uStack_bc,CONCAT41(uStack_c0,uStack_c4._3_1_));
    *(uint64_t *)(*pArr16_20 + 1) = CONCAT44(uStack_c4,local_c8);
    *(uint32_t *)pArr16_19[1] = uVal_3;
    *(uint32_t *)(pArr16_19[1] + 4) = uVal_4;
    *(uint32_t *)(pArr16_19[1] + 8) = uVal_5;
    *(uint32_t *)(pArr16_19[1] + 0xc) = uVal_6;
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_26 = local_88._8_8_ + 1;
      lVal_13 = (int64_t)local_98;
      if (0xfff < uVal_26) {
        lVal_13 = *(int64_t *)((int64_t)local_98 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_98 + -8) - lVal_13)) goto LAB_180074120;
        uVal_26 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_26);
    }
    local_88._0_16_ = ZEXT816(0xf) << 0x40;
    auArr_7[15] = 0;
    auArr_7._0_15_ = stack0xffffffffffffff69;
    _local_98 = auArr_7 << 8;
    if (iVal_30 != 1) {
      if ((int64_t ***)0xf < ppplStack_d0) {
        ptr3_Long_21 = (int64_t ***)((int64_t)ppplStack_d0 + 1);
        ptr4_U64_22 = local_e8;
        if ((int64_t ***)0xfff < ptr3_Long_21) {
          ptr4_U64_22 = (uint64_t ****)local_e8[-1];
          if ((uint8_t *)0x1f < (uint8_t *)((int64_t)local_e8 + (-8 - (int64_t)ptr4_U64_22)))
          goto LAB_180074120;
          ptr3_Long_21 = ppplStack_d0 + 5;
        }
        thunk_FUN_180695dd0(ptr4_U64_22,ptr3_Long_21);
      }
      local_d8 = (int64_t ***)0x0;
      ppplStack_d0 = (int64_t ***)0xf;
      local_e8 = (uint64_t ****)((uint64_t)local_e8 & 0xffffffffffffff00);
      if (0xf < uStack_140) {
        uVal_26 = uStack_140 + 1;
        ptr4_Long_14 = local_158;
        if (0xfff < uVal_26) {
          ptr4_Long_14 = (int64_t ****)local_158[-1];
          if ((uint8_t *)0x1f < (uint8_t *)((int64_t)local_158 + (-8 - (int64_t)ptr4_Long_14)))
          goto LAB_180074120;
          uVal_26 = uStack_140 + 0x28;
        }
        thunk_FUN_180695dd0(ptr4_Long_14,uVal_26);
      }
    }
    lVal_13 = local_110[2];
    if (lVal_13 == 0x7fffffffffffffff) {
      func_0x18007ba70();
      goto LAB_1800741c4;
    }
    pU64_28 = (uint64_t *)*local_110;
    uVal_12 = local_110[3];
    local_108 = ZEXT816(0);
    uVal_26 = lVal_13 + 1;
    uVal_27 = 0xf;
    pU64_24 = local_108;
    if (0xf < uVal_26) {
      uVal_27 = 0x7fffffffffffffff;
      if (lVal_13 < -1) {
LAB_180073d48:
        lVal_16 = func_0x180672de0(uVal_27 + 0x28);
        pU64_24 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_16;
      }
      else {
        uVal_15 = uVal_26 | 0xf;
        uVal_27 = 0x16;
        if (0x16 < uVal_15) {
          uVal_27 = uVal_15;
        }
        if (0xffe < uVal_15) goto LAB_180073d48;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_27 + 1);
      }
      local_108._0_8_ = pU64_24;
    }
    if (uVal_12 < 0x10) {
      pU64_28 = local_110;
    }
    local_f8 = uVal_26;
    uStack_f0 = uVal_27;
    func_0x1806aa960(pU64_24,pU64_28,lVal_13);
    *(uint16_t *)(pU64_24 + lVal_13) = 0x5c;
    uVal_26 = *(uint64_t *)local_a0[1];
    pArr16_19 = local_a0;
    if (0xf < *(uint64_t *)(local_a0[1] + 8)) {
      pArr16_19 = *(uint8_t (**)[16])*local_a0;
    }
    if (uStack_f0 - local_f8 < uVal_26) {
      pU64_18 = (uint *)func_0x180082950(local_108,uVal_26,uVal_26,pArr16_19,uVal_26);
    }
    else {
      uVal_26 = local_f8 + uVal_26;
      ptr3_Long_21 = (int64_t ***)local_108;
      if (0xf < uStack_f0) {
        ptr3_Long_21 = (int64_t ***)local_108._0_8_;
      }
      pU64_24 = (uint8_t *)((int64_t)ptr3_Long_21 + local_f8);
      local_f8 = uVal_26;
      func_0x1806aa960(pU64_24,pArr16_19);
      *(uint8_t *)((int64_t)ptr3_Long_21 + uVal_26) = 0;
      pU64_18 = (uint *)local_108;
    }
    local_c8 = *pU64_18;
    uStack_c4 = pU64_18[1];
    uStack_c0 = pU64_18[2];
    uStack_bc = pU64_18[3];
    local_b8 = *(int64_t *)(pU64_18 + 4);
    uStack_b0 = *(uint64_t *)(pU64_18 + 6);
    *(uint64_t *)(pU64_18 + 4) = 0;
    *(uint64_t *)(pU64_18 + 6) = 0xf;
    *(uint8_t *)pU64_18 = 0;
    uVal_26 = local_118[2];
    pU64_28 = local_118;
    if (0xf < (uint64_t)local_118[3]) {
      pU64_28 = (uint64_t *)*local_118;
    }
    if (uStack_b0 - local_b8 < uVal_26) {
      pArr16_19 = (uint8_t (*)[16])func_0x180082950(&local_c8,uVal_26,uVal_26,pU64_28,uVal_26);
    }
    else {
      lVal_13 = local_b8 + uVal_26;
      pU64_18 = &local_c8;
      if (0xf < uStack_b0) {
        pU64_18 = (uint *)CONCAT44(uStack_c4,local_c8);
      }
      lVal_16 = local_b8 + (int64_t)pU64_18;
      local_b8 = lVal_13;
      func_0x1806aa960(lVal_16,pU64_28);
      *(uint8_t *)((int64_t)pU64_18 + lVal_13) = 0;
      pArr16_19 = (uint8_t (*)[16])&local_c8;
    }
    _local_98 = *pArr16_19;
    local_88._0_16_ = pArr16_19[1];
    *(uint64_t *)pArr16_19[1] = 0;
    *(uint64_t *)(pArr16_19[1] + 8) = 0xf;
    (*pArr16_19)[0] = 0;
    ch_9 = func_0x1800be560(local_98,0);
    pArr16_19 = local_a0;
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_26 = local_88._8_8_ + 1;
      lVal_13 = (int64_t)local_98;
      if (0xfff < uVal_26) {
        lVal_13 = *(int64_t *)((int64_t)local_98 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_98 + -8) - lVal_13)) goto LAB_180074120;
        uVal_26 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_26);
    }
    local_88._0_16_ = ZEXT816(0xf) << 0x40;
    auArr_8[15] = 0;
    auArr_8._0_15_ = stack0xffffffffffffff69;
    _local_98 = auArr_8 << 8;
    if (0xf < uStack_b0) {
      lVal_16 = CONCAT44(uStack_c4,local_c8);
      uVal_26 = uStack_b0 + 1;
      lVal_13 = lVal_16;
      if (0xfff < uVal_26) {
        lVal_13 = *(int64_t *)(lVal_16 + -8);
        if (0x1f < (uint64_t)((lVal_16 + -8) - lVal_13)) goto LAB_180074120;
        uVal_26 = uStack_b0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_26);
    }
    local_b8 = 0;
    uStack_b0 = 0xf;
    local_c8 = local_c8 & 0xffffff00;
    if (0xf < uStack_f0) {
      uVal_26 = uStack_f0 + 1;
      ptr3_Long_21 = (int64_t ***)local_108._0_8_;
      if (0xfff < uVal_26) {
        ptr3_Long_21 = *(int64_t ****)(local_108._0_8_ + -8);
        if (0x1f < (uint64_t)(local_108._0_8_ + (-8 - (int64_t)ptr3_Long_21))) goto LAB_180074120;
        uVal_26 = uStack_f0 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_Long_21,uVal_26);
    }
    iVal_30 = iVal_30 + 1;
  } while (ch_9 != '\0');
  if (0xf < local_120) {
    lVal_16 = CONCAT44(uStack_134,local_138);
    uVal_26 = local_120 + 1;
    lVal_13 = lVal_16;
    if (0xfff < uVal_26) {
      lVal_13 = *(int64_t *)(lVal_16 + -8);
      if (0x1f < (uint64_t)((lVal_16 + -8) - lVal_13)) {
LAB_180074120:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_26 = local_120 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_13,uVal_26);
  }
  return pArr16_19;
}

// Unwind@1800741d0
void Unwind_1800741d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@180074220
void Unwind_180074220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x127) = *(uint8_t *)(param_2 + 0x124);
  return;
}

// Unwind@180074280
void Unwind_180074280(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x127);
  if (ch_1 == '\0') {
    func_0x180001e70(param_2 + 0xb0);
  }
  *(char *)(param_2 + 0x126) = ch_1;
  return;
}

// Unwind@1800742e0
void Unwind_1800742e0(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x126);
  if (ch_1 == '\0') {
    func_0x180001e70(param_2 + 0x40);
  }
  *(char *)(param_2 + 0x125) = ch_1;
  return;
}

// Unwind@180074340
void Unwind_180074340(void)
{
  return;
}

// Unwind@180074390
void Unwind_180074390(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1800743e0
void Unwind_1800743e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@180074430
void Unwind_180074430(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180074480
void Unwind_180074480(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xf8));
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1800744e0
void Unwind_1800744e0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2f88) = 0;
  return;
}

// func_0x180074540
float * func_0x180074540(float *param_1,float *param_2)
{
  float fVal_1;
  float fVal_2;
  float fVal_3;
  float fVal_4;
  
  fVal_2 = DAT_1806aeae4;
  fVal_4 = DAT_1806aeae0 * param_2[1];
  fVal_3 = *param_2 * DAT_1806aeae0 * DAT_1806aeae4;
  fVal_1 = (float)func_0x18068a470(fVal_3);
  fVal_3 = (float)func_0x18068dd00(fVal_3);
  fVal_4 = fVal_4 * fVal_2;
  fVal_2 = (float)func_0x18068a470(fVal_4);
  fVal_4 = (float)func_0x18068dd00(fVal_4);
  *param_1 = fVal_1 * fVal_2 * 0.0 - fVal_3 * fVal_4;
  param_1[1] = fVal_3 * fVal_4 * 0.0 + fVal_1 * fVal_2;
  param_1[2] = fVal_3 * fVal_2 - fVal_1 * fVal_4 * 0.0;
  param_1[3] = fVal_3 * fVal_2 * 0.0 + fVal_1 * fVal_4;
  return param_1;
}

// func_0x180074630
uint32_t func_0x180074630(int param_1)
{
  uint uVal_1;
  
  uVal_1 = 0x28000007 >> ((byte)(param_1 + 0x7785fffbU) & 0x1f);
  return CONCAT31((int3)(uVal_1 >> 8),(byte)uVal_1 & param_1 + 0x7785fffbU < 0x1e);
}

// func_0x180074650
/* WARNING: Removing unreachable block (ram,0x0001800746cb) */
/* WARNING: Removing unreachable block (ram,0x0001800746ad) */
/* WARNING: Removing unreachable block (ram,0x00018007468f) */
/* WARNING: Removing unreachable block (ram,0x00018007467b) */
/* WARNING: Removing unreachable block (ram,0x0001800746cb) */
/* WARNING: Removing unreachable block (ram,0x0001800746ad) */
/* WARNING: Removing unreachable block (ram,0x00018007468f) */
/* WARNING: Removing unreachable block (ram,0x00018007467b) */
uint8_t (*func_0x180074650(uint8_t (*param_1)[16]))[16]
{
  uint *pU64_1;
  uint64_t *pU64_2;
  func_ptr_t fnPtr_3;
  size_t sz_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint8_t (*pArr16_7)[16];
  uint64_t uVal_8;
  uint8_t local_68 [12];
  uint32_t uStack_5c;
  uint8_t local_58 [12];
  uint32_t uStack_4c;
  uint8_t local_48 [12];
  uint32_t uStack_3c;
  uint8_t local_38 [16];
  
  local_38 = ZEXT816(0);
  _local_48 = ZEXT816(0);
  _local_58 = ZEXT816(0);
  _local_68 = ZEXT816(0);
  pU64_1 = (uint *)cpuid(0x80000000);
  if (0x80000003 < *pU64_1) {
    pU64_2 = (uint64_t *)cpuid_brand_part1_info(0x80000002);
    local_68._8_4_ = *(uint32_t *)((int64_t)pU64_2 + 0xc);
    local_68._0_8_ = *pU64_2;
    uStack_5c = *(uint32_t *)(pU64_2 + 1);
    pU64_2 = (uint64_t *)cpuid_brand_part2_info(0x80000003);
    local_58._8_4_ = *(uint32_t *)((int64_t)pU64_2 + 0xc);
    local_58._0_8_ = *pU64_2;
    uStack_4c = *(uint32_t *)(pU64_2 + 1);
    pU64_2 = (uint64_t *)cpuid_brand_part3_info(0x80000004);
    local_48._8_4_ = *(uint32_t *)((int64_t)pU64_2 + 0xc);
    local_48._0_8_ = *pU64_2;
    uStack_3c = *(uint32_t *)(pU64_2 + 1);
  }
  *param_1 = ZEXT816(0);
  sz_4 = strlen(local_68);
  if ((int64_t)sz_4 < 0) {
    func_0x18007ba70();
    fnPtr_3 = (func_ptr_t )swi(3);
    pArr16_7 = (uint8_t (*)[16])(*fnPtr_3)();
    return pArr16_7;
  }
  uVal_8 = 0xf;
  pArr16_7 = param_1;
  if (0xf < sz_4) {
    uVal_5 = sz_4 | 0xf;
    uVal_8 = 0x16;
    if (0x16 < uVal_5) {
      uVal_8 = uVal_5;
    }
    if (uVal_5 < 0xfff) {
      pArr16_7 = (uint8_t (*)[16])func_0x180672de0(uVal_8 + 1);
    }
    else {
      lVal_6 = func_0x180672de0(uVal_8 + 0x28);
      pArr16_7 = (uint8_t (*)[16])(lVal_6 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pArr16_7[-1] + 8) = lVal_6;
    }
    *(uint8_t (**)[16])*param_1 = pArr16_7;
  }
  *(size_t *)param_1[1] = sz_4;
  *(uint64_t *)(param_1[1] + 8) = uVal_8;
  func_0x1806aa960(pArr16_7,local_68,sz_4);
  (*pArr16_7)[sz_4] = 0;
  return param_1;
}

// func_0x180074780
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180074780(uint64_t param_1)
{
  uint64_t *_Str;
  char *fnPtr_1;
  FARPROC pFn_2;
  size_t sz_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  HMODULE hModule;
  uint64_t uVal_6;
  uint8_t *pU64_7;
  LPCSTR pCStr_8;
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint16_t local_78;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (DAT_18083ead0 != '\0') {
    return;
  }
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x2fa0) == '\0') {
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_5 + 0x2fa0) = 1;
    *(uint64_t *)(lVal_5 + 0x2f90) = 0x6e442712b8abfc33;
    *(uint32_t *)(lVal_5 + 0x2f98) = 0xbfabed6b;
    *(uint16_t *)(lVal_5 + 0x2f9c) = 0x173;
    func_0x180673140(&LAB_180094750);
  }
  lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint64_t *)(lVal_5 + 0x2f90);
  if (*(char *)(lVal_5 + 0x2f9d) == '\x01') {
    *_Str = *_Str ^ 0x5f694973d3c78945;
    *(uint *)(lVal_5 + 0x2f98) = *(uint *)(lVal_5 + 0x2f98) ^ 0xd3c78945;
    *(byte *)(lVal_5 + 0x2f9c) = *(byte *)(lVal_5 + 0x2f9c) ^ 0x73;
    *(uint8_t *)(lVal_5 + 0x2f9d) = 0;
  }
  _local_68 = ZEXT816(0);
  sz_3 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_3) {
    uVal_6 = 0xf;
    pCStr_8 = local_68;
    if (0xf < sz_3) {
      uVal_4 = sz_3 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_4) {
        uVal_6 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        pCStr_8 = (LPCSTR)func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_5 = func_0x180672de0(uVal_6 + 0x28);
        pCStr_8 = (LPCSTR)(lVal_5 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pCStr_8 + -8) = lVal_5;
      }
      local_68 = (uint8_t  [8])pCStr_8;
    }
    local_58 = sz_3;
    local_50 = uVal_6;
    func_0x1806aa960(pCStr_8,_Str,sz_3);
    pCStr_8[sz_3] = '\0';
    pCStr_8 = local_68;
    if (0xf < local_50) {
      pCStr_8 = (LPCSTR)local_68;
    }
    hModule = LoadLibraryA(pCStr_8);
    if (0xf < local_50) {
      uVal_6 = local_50 + 1;
      lVal_5 = (int64_t)local_68;
      if (0xfff < uVal_6) {
        lVal_5 = *(int64_t *)((int64_t)local_68 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_68 + -8) - lVal_5)) goto LAB_180074c59;
        uVal_6 = local_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_6);
    }
    local_68._4_4_ = _UNK_1806b0912;
    local_68._0_4_ = _DAT_1806b090e;
    uStack_60._0_4_ = _UNK_1806b0916;
    uStack_60._4_4_ = _UNK_1806b091a;
    local_58 = CONCAT44(local_58._4_4_,0x63157151);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x2fb8) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x2fb8) = 1;
      func_0x18007cfc0(lVal_5 + 0x2fa1,local_68);
      func_0x180673140(&LAB_180094780);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x2fa1);
    func_0x1800b6940(fnPtr_1);
    _local_68 = ZEXT816(0);
    sz_3 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_3) {
      uVal_6 = 0xf;
      pCStr_8 = local_68;
      if (0xf < sz_3) {
        uVal_4 = sz_3 | 0xf;
        uVal_6 = 0x16;
        if (0x16 < uVal_4) {
          uVal_6 = uVal_4;
        }
        if (uVal_4 < 0xfff) {
          pCStr_8 = (LPCSTR)func_0x180672de0(uVal_6 + 1);
        }
        else {
          lVal_5 = func_0x180672de0(uVal_6 + 0x28);
          pCStr_8 = (LPCSTR)(lVal_5 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pCStr_8 + -8) = lVal_5;
        }
        local_68 = (uint8_t  [8])pCStr_8;
      }
      local_58 = sz_3;
      local_50 = uVal_6;
      func_0x1806aa960(pCStr_8,fnPtr_1,sz_3);
      pCStr_8[sz_3] = '\0';
      pCStr_8 = local_68;
      if (0xf < local_50) {
        pCStr_8 = (LPCSTR)local_68;
      }
      DAT_18083ead8 = GetProcAddress(hModule,pCStr_8);
      if (0xf < local_50) {
        uVal_6 = local_50 + 1;
        lVal_5 = (int64_t)local_68;
        if (0xfff < uVal_6) {
          lVal_5 = *(int64_t *)((int64_t)local_68 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_68 + -8) - lVal_5)) goto LAB_180074c59;
          uVal_6 = local_50 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_6);
      }
      pFn_2 = DAT_18083ead8;
      local_88 = _DAT_1806b0922;
      uStack_84 = _UNK_1806b0926;
      uStack_80 = _UNK_1806b092a;
      uStack_7c = _UNK_1806b092e;
      local_78 = 0x8bb5;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x2fcc) == '\0') {
        lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_5 + 0x2fcc) = 1;
        func_0x18007c170(lVal_5 + 0x2fb9,&local_88);
        func_0x180673140(&LAB_1800947b0);
      }
      fnPtr_1 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2fb9)
      ;
      func_0x1800b6960(fnPtr_1);
      _local_68 = ZEXT816(0);
      sz_3 = strlen(fnPtr_1);
      if (-1 < (int64_t)sz_3) {
        uVal_6 = 0xf;
        pU64_7 = local_68;
        if (0xf < sz_3) {
          uVal_4 = sz_3 | 0xf;
          uVal_6 = 0x16;
          if (0x16 < uVal_4) {
            uVal_6 = uVal_4;
          }
          if (uVal_4 < 0xfff) {
            pU64_7 = (uint8_t *)func_0x180672de0(uVal_6 + 1);
          }
          else {
            lVal_5 = func_0x180672de0(uVal_6 + 0x28);
            pU64_7 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_7 + -8) = lVal_5;
          }
          local_68 = (uint8_t  [8])pU64_7;
        }
        local_58 = sz_3;
        local_50 = uVal_6;
        func_0x1806aa960(pU64_7,fnPtr_1,sz_3);
        pU64_7[sz_3] = 0;
        pU64_7 = local_68;
        if (0xf < local_50) {
          pU64_7 = (uint8_t *)local_68;
        }
        DAT_18083eae0 = (*pFn_2)(param_1,pU64_7);
        if (0xf < local_50) {
          uVal_6 = local_50 + 1;
          lVal_5 = (int64_t)local_68;
          if (0xfff < uVal_6) {
            lVal_5 = *(int64_t *)((int64_t)local_68 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_68 + -8) - lVal_5)) goto LAB_180074c59;
            uVal_6 = local_50 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_5,uVal_6);
        }
        DAT_18083ead0 = '\x01';
        return;
      }
    }
  }
  func_0x18007ba70();
LAB_180074c59:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180074c60
void Unwind_180074c60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180074ca0
void Unwind_180074ca0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2fb8) = 0;
  return;
}

// Unwind@180074cf0
void Unwind_180074cf0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2fcc) = 0;
  return;
}

// func_0x180074d40
uint8_t func_0x180074d40(void)
{
  return DAT_18083ead0;
}

// func_0x180074d50
void func_0x180074d50(void)
{
                    /* WARNING: Could not recover jumptable at 0x000180074d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083eae0)();
  return;
}

// func_0x180074d60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint32_t func_0x180074d60(int param_1,int param_2)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083eaf8) {
    func_0x180672ec0(&DAT_18083eaf8);
    if (DAT_18083eaf8 == -1) {
      _DAT_18083eae8 = _DAT_18083ec10;
      DAT_18083eaec = _DAT_18083ec14;
      DAT_18083eaf0 = _DAT_18083ec18;
      uRam000000018083eaf4 = _DAT_18083ec1c;
      _Init_thread_footer(&DAT_18083eaf8);
    }
  }
  if (param_1 == DAT_18083eaec) {
    return CONCAT31((int3)((uint)(DAT_18083eaf0 / 10) >> 8),param_2 == DAT_18083eaf0 / 10);
  }
  return 0;
}

// func_0x180074e10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x180074e10(uint64_t param_1)
{
  uint *_Str;
  uint64_t *_Str_00;
  int iVal_1;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint8_t *pU64_6;
  int local_d0 [4];
  int local_c0;
  int local_b0;
  uint64_t local_a0;
  int *local_98;
  uint8_t *local_90;
  size_t local_88;
  int local_7c;
  uint8_t local_78 [16];
  size_t local_68;
  uint64_t local_60;
  int local_4c;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083eb0c) && (func_0x180672ec0(&DAT_18083eb0c), DAT_18083eb0c == -1)) {
    DAT_18083eafc = _DAT_18083ec10;
    DAT_18083eb00 = _DAT_18083ec14;
    DAT_18083eb04 = _DAT_18083ec18;
    DAT_18083eb08 = _DAT_18083ec1c;
    _Init_thread_footer(&DAT_18083eb0c);
  }
  iVal_1 = DAT_18083eb00;
  if (DAT_18083eb08 != 0) {
    func_0x180038c30(param_1);
    return param_1;
  }
  local_4c = DAT_18083eb04;
  local_90 = local_78;
  if (DAT_18083eb00 < 0x1a) {
    local_7c = DAT_18083eafc;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x2fec) == '\0') {
      lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_4 + 0x2fec) = 1;
      *(uint64_t *)(lVal_4 + 0x2fe0) = 0x7a67d2d02b16a6;
      *(uint16_t *)(lVal_4 + 0x2fe8) = 0x1dd;
      func_0x180673140(&LAB_180094810);
    }
    lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint64_t *)(lVal_4 + 0x2fe0);
    if (*(char *)(lVal_4 + 0x2fe9) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0x7d0149afab056bdd;
      *(byte *)(lVal_4 + 0x2fe8) = *(byte *)(lVal_4 + 0x2fe8) ^ 0xdd;
      *(uint8_t *)(lVal_4 + 0x2fe9) = 0;
    }
    local_78 = ZEXT816(0);
    sz_2 = strlen((char *)_Str_00);
    if ((int64_t)sz_2 < 0) goto LAB_180075215;
    uVal_5 = 0xf;
    pU64_6 = local_78;
    if (0xf < sz_2) {
      uVal_3 = sz_2 | 0xf;
      uVal_5 = 0x16;
      if (0x16 < uVal_3) {
        uVal_5 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        pU64_6 = (uint8_t *)func_0x180672de0(uVal_5 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_5 + 0x28);
        pU64_6 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_6 + -8) = lVal_4;
      }
      local_78._0_8_ = pU64_6;
    }
    local_68 = sz_2;
    local_60 = uVal_5;
    func_0x1806aa960(pU64_6,_Str_00,sz_2);
    pU64_6[sz_2] = 0;
    local_d0[0] = local_7c;
    local_c0 = iVal_1;
    local_b0 = local_4c;
    local_a0 = 0x111;
    local_98 = local_d0;
    if (0xf < local_60) {
      local_90 = (uint8_t *)local_78._0_8_;
    }
    local_88 = local_68;
    func_0x18063ff10(param_1,&local_90,&local_a0);
  }
  else {
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x2fd8) == '\0') {
      lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_4 + 0x2fd8) = 1;
      *(uint8_t *)(lVal_4 + 0x2fd6) = 1;
      *(uint32_t *)(lVal_4 + 0x2fd0) = 0x10833ae2;
      *(uint16_t *)(lVal_4 + 0x2fd4) = 0x775e;
      func_0x180673140(&LAB_1800947e0);
    }
    lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_4 + 0x2fd0);
    if (*(char *)(lVal_4 + 0x2fd6) == '\x01') {
      *_Str = *_Str ^ 0x6bad4799;
      *(byte *)(lVal_4 + 0x2fd4) = *(byte *)(lVal_4 + 0x2fd4) ^ 0x23;
      *(byte *)(lVal_4 + 0x2fd5) = *(byte *)(lVal_4 + 0x2fd5) ^ 0x77;
      *(uint8_t *)(lVal_4 + 0x2fd6) = 0;
    }
    local_78 = ZEXT816(0);
    sz_2 = strlen((char *)_Str);
    if ((int64_t)sz_2 < 0) {
LAB_180075215:
      func_0x18007ba70();
      goto LAB_18007521a;
    }
    uVal_5 = 0xf;
    pU64_6 = local_78;
    if (0xf < sz_2) {
      uVal_3 = sz_2 | 0xf;
      uVal_5 = 0x16;
      if (0x16 < uVal_3) {
        uVal_5 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        pU64_6 = (uint8_t *)func_0x180672de0(uVal_5 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_5 + 0x28);
        pU64_6 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_6 + -8) = lVal_4;
      }
      local_78._0_8_ = pU64_6;
    }
    local_68 = sz_2;
    local_60 = uVal_5;
    func_0x1806aa960(pU64_6,_Str,sz_2);
    pU64_6[sz_2] = 0;
    local_d0[0] = iVal_1;
    local_c0 = local_4c;
    local_a0 = 0x11;
    local_98 = local_d0;
    if (0xf < local_60) {
      local_90 = (uint8_t *)local_78._0_8_;
    }
    local_88 = local_68;
    func_0x18063ff10(param_1,&local_90,&local_a0);
  }
  if (0xf < local_60) {
    uVal_5 = local_60 + 1;
    lVal_4 = local_78._0_8_;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(local_78._0_8_ + -8);
      if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_4)) {
LAB_18007521a:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = local_60 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
  }
  return param_1;
}

// Unwind@180075220
void Unwind_180075220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180075260
void Unwind_180075260(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// func_0x1800752a0
bool func_0x1800752a0(uint64_t *param_1)
{
  uint *_Str;
  size_t sz_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  HINSTANCE pHnd_4;
  uint64_t uVal_5;
  LPCSTR pCStr_6;
  uint8_t local_58 [16];
  size_t local_48;
  uint64_t local_40;
  
  if (0xf < (uint64_t)param_1[3]) {
    param_1 = (uint64_t *)*param_1;
  }
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x2ff8) == '\0') {
    lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_3 + 0x2ff8) = 1;
    *(uint32_t *)(lVal_3 + 0x2ff0) = 0xf528cdf0;
    *(uint16_t *)(lVal_3 + 0x2ff4) = 0x1cd;
    func_0x180673140(&LAB_180094840);
  }
  lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint *)(lVal_3 + 0x2ff0);
  if (*(char *)(lVal_3 + 0x2ff5) == '\x01') {
    *_Str = *_Str ^ 0x9b4dbd9f;
    *(byte *)(lVal_3 + 0x2ff4) = *(byte *)(lVal_3 + 0x2ff4) ^ 0xcd;
    *(uint8_t *)(lVal_3 + 0x2ff5) = 0;
  }
  local_58 = ZEXT816(0);
  sz_1 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_1) {
    uVal_5 = 0xf;
    pCStr_6 = local_58;
    if (0xf < sz_1) {
      uVal_2 = sz_1 | 0xf;
      uVal_5 = 0x16;
      if (0x16 < uVal_2) {
        uVal_5 = uVal_2;
      }
      if (uVal_2 < 0xfff) {
        pCStr_6 = (LPCSTR)func_0x180672de0(uVal_5 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_5 + 0x28);
        pCStr_6 = (LPCSTR)(lVal_3 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pCStr_6 + -8) = lVal_3;
      }
      local_58._0_8_ = pCStr_6;
    }
    local_48 = sz_1;
    local_40 = uVal_5;
    func_0x1806aa960(pCStr_6,_Str,sz_1);
    pCStr_6[sz_1] = '\0';
    pCStr_6 = local_58;
    if (0xf < local_40) {
      pCStr_6 = (LPCSTR)local_58._0_8_;
    }
    pHnd_4 = ShellExecuteA((HWND)0x0,pCStr_6,(LPCSTR)param_1,(LPCSTR)0x0,(LPCSTR)0x0,1);
    if (0xf < local_40) {
      uVal_5 = local_40 + 1;
      lVal_3 = local_58._0_8_;
      if (0xfff < uVal_5) {
        lVal_3 = *(int64_t *)(local_58._0_8_ + -8);
        if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_3)) goto LAB_180075466;
        uVal_5 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_3,uVal_5);
    }
    return (HINSTANCE)0x20 < pHnd_4;
  }
  func_0x18007ba70();
LAB_180075466:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x180075470
uint32_t func_0x180075470(int param_1)
{
  uint32_t uVal_1;
  
  uVal_1 = 0;
  if (param_1 - 0x65U < 0xd) {
    uVal_1 = *(uint32_t *)(&DAT_1806b0de4 + (uint64_t)(param_1 - 0x65U) * 4);
  }
  return uVal_1;
}

// func_0x180075490
void func_0x180075490(int64_t **param_1)
{
  byte bFlag_1;
  uint16_t uVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int iVal_6;
  int iVal_7;
  int64_t *pLong_8;
  int64_t lVal_9;
  uint uVal_10;
  int *pInt_11;
  int64_t **ptr2_Long_12;
  uint64_t uVal_13;
  uint uVal_14;
  int64_t *pLong_15;
  uint *pU64_16;
  int iVal_17;
  int **ptr2_Int_18;
  int64_t lVal_19;
  int iVal_20;
  int64_t lVal_21;
  uint uVal_22;
  uint uVal_23;
  uint *pU64_24;
  int64_t lVal_25;
  uint uVal_26;
  int64_t lVal_27;
  uint8_t auStack_118 [32];
  int64_t *local_f8;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  int64_t local_e0;
  int64_t *local_d8;
  int64_t local_d0;
  int64_t local_c8;
  int64_t local_c0;
  uint64_t local_b8;
  int64_t **local_b0;
  int64_t local_a8;
  uint64_t local_a0;
  uint *local_98;
  int64_t local_90;
  uint64_t local_88;
  uint local_7c;
  int local_78;
  int local_74;
  int64_t local_70;
  uint32_t local_64;
  int local_60;
  uint8_t local_5c;
  uint64_t local_58;
  uint32_t local_50;
  uint32_t local_4c;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_118;
  ptr2_Int_18 = (int **)*param_1;
  if ((ptr2_Int_18 == (int **)0x0) || (*ptr2_Int_18 == (int *)0x0)) {
    local_4c = 1;
    func_0x18067a120(&local_4c,&DAT_180768618);
LAB_180075da5:
    func_0x180673080(local_48 ^ (uint64_t)auStack_118);
  }
  else {
    iVal_6 = *(int *)(param_1 + 1) + 1;
    *(int *)(param_1 + 1) = iVal_6;
    pInt_11 = *ptr2_Int_18;
    iVal_7 = pInt_11[8];
    if ((iVal_7 == 0) || ((*(int *)(ptr2_Int_18 + 3) != 0 && (*(int *)(ptr2_Int_18 + 3) * iVal_7 <= iVal_6)))
       ) {
LAB_180075bc3:
      if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_118)) {
        return;
      }
      goto LAB_180075da5;
    }
    iVal_6 = iVal_6 % iVal_7;
    if (param_1[3] == (int64_t *)0x0) {
      if (iVal_6 != 0) goto LAB_180075dd4;
      pLong_8 = (int64_t *)thunk_FUN_180672de0(ptr2_Int_18[4]);
      param_1[3] = pLong_8;
      pInt_11 = *ptr2_Int_18;
    }
    lVal_19 = (int64_t)iVal_6 * 0x38;
    lVal_9 = (int64_t)*(int *)(*(int64_t *)(pInt_11 + 0x12) + 0x28 + lVal_19);
    lVal_21 = *(int64_t *)(*(int64_t *)(pInt_11 + 0x12) + 0x30 + lVal_19);
    local_60 = 0;
    local_5c = 0;
    local_58 = -0x100000000;
    if (lVal_9 == 0) {
      local_58._0_4_ = 0;
    }
    else {
      lVal_9 = lVal_9 * 0x18 + -0x18;
      iVal_7 = *(int *)(lVal_21 + 0x10 + lVal_9);
      while (((iVal_7 != 0xf9 ||
              (iVal_7 = func_0x18066fc00((int64_t)*(int *)(lVal_21 + lVal_9),
                                     *(uint64_t *)(lVal_21 + 8 + lVal_9),&local_60), iVal_7 != 1)) &&
             (lVal_9 != 0))) {
        lVal_9 = lVal_9 + -0x18;
        iVal_7 = *(int *)(lVal_21 + 0x10 + lVal_9);
      }
      ptr2_Int_18 = (int **)*param_1;
    }
    *(uint32_t *)((int64_t)param_1 + 0x24) = (uint32_t)local_58;
    pInt_11 = *ptr2_Int_18;
    pU64_16 = *(uint **)(*(int64_t *)(pInt_11 + 0x12) + 0x18 + lVal_19);
    if ((pU64_16 != (uint *)0x0) || (pU64_16 = *(uint **)(pInt_11 + 6), pU64_16 != (uint *)0x0)) {
      pU64_24 = (uint *)(*(int64_t *)(pInt_11 + 0x12) + lVal_19);
      local_70 = *(int64_t *)(pU64_24 + 8);
      if (((int)pU64_24[2] < 1 || local_70 != 0) || ((int)pU64_24[3] < 1)) {
        uVal_23 = *pU64_24;
        uVal_26 = pU64_24[1];
        local_e4 = 0;
        if (0 < (int)uVal_23) {
          local_e4 = uVal_23;
        }
        local_e8 = 0;
        if (0 < (int)uVal_26) {
          local_e8 = uVal_26;
        }
        iVal_20 = pU64_24[2] + uVal_23;
        iVal_7 = *pInt_11;
        lVal_21 = (int64_t)iVal_7;
        iVal_17 = iVal_20;
        if (iVal_7 < iVal_20) {
          iVal_17 = iVal_7;
        }
        uVal_22 = pInt_11[1];
        local_ec = pU64_24[3] + uVal_26;
        if ((int)uVal_22 < (int)(pU64_24[3] + uVal_26)) {
          local_ec = uVal_22;
        }
        if (((local_58 < 0) && ((int)uVal_23 < 1)) &&
           ((*(int *)((int64_t)param_1 + 0xc) <= iVal_17 &&
            (((int)uVal_26 < 1 && (local_60 != 3 && *(int *)(param_1 + 2) <= (int)local_ec)))))) {
          *(int *)(param_1 + 4) = local_60;
        }
        else if (iVal_6 == 0) {
          func_0x1806ab010(param_1[3],0,
                        (int64_t)*(int *)(param_1 + 2) *
                        (int64_t)*(int *)((int64_t)param_1 + 0xc) * 4);
          *(int *)(param_1 + 4) = local_60;
          if (local_60 == 3) {
            ptr2_Long_12 = param_1 + 4;
LAB_180075aee:
            *(uint32_t *)ptr2_Long_12 = 2;
          }
        }
        else {
          local_a0 = param_1 + 4;
          local_a8 = lVal_21;
          local_98 = pU64_24;
          local_78 = iVal_20;
          local_74 = iVal_6;
          if ((*(uint *)(param_1 + 4) & 0xfffffffe) == 2) {
            uVal_23 = pU64_24[-0xe];
            uVal_26 = 0;
            if (0 < (int)uVal_23) {
              uVal_26 = uVal_23;
            }
            uVal_14 = pU64_24[-0xd];
            uVal_10 = 0;
            if (0 < (int)uVal_14) {
              uVal_10 = uVal_14;
            }
            iVal_20 = uVal_23 + pU64_24[-0xc];
            iVal_6 = iVal_20;
            if (iVal_7 < iVal_20) {
              iVal_6 = iVal_7;
            }
            uVal_23 = uVal_14 + pU64_24[-0xb];
            if ((int)uVal_22 < (int)(uVal_14 + pU64_24[-0xb])) {
              uVal_23 = uVal_22;
            }
            if (*(uint *)(param_1 + 4) == 3) {
              uVal_22 = uVal_23 - uVal_10;
              if (uVal_22 != 0 && (int)uVal_10 <= (int)uVal_23) {
                lVal_19 = (int64_t)(int)(iVal_6 - uVal_26) << 2;
                local_d0 = (int64_t)*(int *)((int64_t)param_1 + 0xc);
                pLong_8 = (int64_t *)(local_d0 * 4);
                pLong_15 = param_1[3];
                lVal_9 = (int64_t)(int)(*(int *)((int64_t)param_1 + 0xc) * uVal_10 + uVal_26);
                lVal_27 = (int64_t)*(int *)(param_1 + 2) * (int64_t)pLong_8;
                if (uVal_10 - uVal_23 < 0xfffffffd) {
                  lVal_9 = lVal_9 << 2;
                  uVal_23 = uVal_22 & 0x7ffffffc;
                  local_d0 = local_d0 << 4;
                  lVal_25 = (int64_t)iVal_20;
                  if (lVal_21 < iVal_20) {
                    lVal_25 = lVal_21;
                  }
                  uVal_13 = (uint64_t)uVal_26;
                  local_90 = lVal_25 * 0x10 + uVal_13 * -0x10;
                  local_b8 = lVal_27 + lVal_25 * 0xc + uVal_13 * -0xc;
                  local_c8 = lVal_27 + lVal_25 * 8 + uVal_13 * -8;
                  lVal_21 = lVal_27 + lVal_25 * 4 + uVal_13 * -4;
                  local_f8 = pLong_15;
                  local_e0 = lVal_19;
                  local_d8 = pLong_8;
                  local_b0 = param_1;
                  local_7c = uVal_22 & 3;
                  do {
                    lVal_25 = local_e0;
                    local_88 = CONCAT44(local_88._4_4_,uVal_23);
                    lVal_19 = (int64_t)local_f8 + lVal_9;
                    local_c0 = lVal_21;
                    func_0x1806aa960(lVal_19,(int64_t)local_f8 + lVal_27,local_e0);
                    pLong_8 = local_d8;
                    lVal_19 = lVal_19 + (int64_t)local_d8;
                    func_0x1806aa960(lVal_19,(int64_t)local_f8 + lVal_21,lVal_25);
                    lVal_4 = local_c8;
                    lVal_19 = lVal_19 + (int64_t)pLong_8;
                    func_0x1806aa960(lVal_19,(int64_t)local_f8 + local_c8,lVal_25);
                    lVal_25 = local_b8;
                    lVal_21 = local_c0;
                    func_0x1806aa960(lVal_19 + (int64_t)pLong_8,(int64_t)local_f8 + local_b8,local_e0);
                    lVal_9 = lVal_9 + local_d0;
                    lVal_27 = lVal_27 + local_90;
                    local_b8 = lVal_25 + local_90;
                    local_c8 = lVal_4 + local_90;
                    lVal_21 = lVal_21 + local_90;
                    uVal_23 = (int)local_88 - 4;
                  } while (uVal_23 != 0);
                  param_1 = local_b0;
                  if (local_7c == 0) goto LAB_180075a49;
                  lVal_9 = lVal_9 + (int64_t)local_f8;
                  pLong_8 = local_d8;
                  lVal_19 = local_e0;
                  pLong_15 = local_f8;
                  uVal_23 = local_7c;
                }
                else {
                  lVal_9 = (int64_t)pLong_15 + lVal_9 * 4;
                  uVal_23 = uVal_22 & 3;
                }
                lVal_27 = lVal_27 + (int64_t)pLong_15;
                do {
                  func_0x1806aa960(lVal_9,lVal_27,lVal_19);
                  lVal_9 = lVal_9 + (int64_t)pLong_8;
                  lVal_27 = lVal_27 + lVal_19;
                  uVal_23 = uVal_23 - 1;
                } while (uVal_23 != 0);
              }
            }
            else {
              uVal_22 = uVal_23 - uVal_10;
              if (uVal_22 != 0 && (int)uVal_10 <= (int)uVal_23) {
                lVal_21 = (int64_t)(int)(*(int *)((int64_t)param_1 + 0xc) * uVal_10 + uVal_26) * 4 +
                         (int64_t)param_1[3];
                lVal_9 = (int64_t)*(int *)((int64_t)param_1 + 0xc) * 4;
                lVal_19 = (int64_t)(int)(iVal_6 - uVal_26) << 2;
                uVal_26 = uVal_22 & 7;
                if (uVal_10 - uVal_23 < 0xfffffff9) {
                  uVal_22 = uVal_22 & 0x7ffffff8;
                  do {
                    func_0x1806ab010(lVal_21,0,lVal_19);
                    func_0x1806ab010(lVal_21 + lVal_9,0,lVal_19);
                    lVal_21 = lVal_21 + lVal_9 + lVal_9;
                    func_0x1806ab010(lVal_21,0,lVal_19);
                    lVal_21 = lVal_21 + lVal_9;
                    func_0x1806ab010(lVal_21,0,lVal_19);
                    lVal_21 = lVal_21 + lVal_9;
                    func_0x1806ab010(lVal_21,0,lVal_19);
                    lVal_21 = lVal_21 + lVal_9;
                    func_0x1806ab010(lVal_21,0,lVal_19);
                    lVal_21 = lVal_21 + lVal_9;
                    func_0x1806ab010(lVal_21,0,lVal_19);
                    lVal_21 = lVal_21 + lVal_9;
                    func_0x1806ab010(lVal_21,0,lVal_19);
                    lVal_21 = lVal_21 + lVal_9;
                    uVal_22 = uVal_22 - 8;
                  } while (uVal_22 != 0);
                  if (uVal_26 == 0) goto LAB_180075a49;
                }
                do {
                  func_0x1806ab010(lVal_21,0,lVal_19);
                  lVal_21 = lVal_21 + lVal_9;
                  uVal_26 = uVal_26 - 1;
                } while (uVal_26 != 0);
              }
            }
          }
LAB_180075a49:
          *(int *)local_a0 = local_60;
          pU64_24 = local_98;
          if (local_60 == 3) {
            ptr2_Long_12 = local_a0;
            if (*(int *)(**param_1 + 0x20) + -1 <= local_74) goto LAB_180075aee;
            uVal_23 = local_ec - local_e8;
            if (uVal_23 != 0 && (int)local_e8 <= (int)local_ec) {
              local_c0 = (int64_t)*(int *)((int64_t)param_1 + 0xc);
              lVal_9 = local_c0 * 4;
              local_f8 = (int64_t *)((int64_t)(int)(iVal_17 - local_e4) << 2);
              pLong_8 = param_1[3];
              lVal_19 = *(int *)(param_1 + 2) * lVal_9;
              lVal_21 = (int64_t)(int)(*(int *)((int64_t)param_1 + 0xc) * local_e8 + local_e4);
              if (local_e8 - local_ec < 0xfffffffd) {
                local_a0 = (int64_t **)(CONCAT44(local_a0._4_4_,uVal_23) & 0xffffffff00000003);
                lVal_21 = lVal_21 << 2;
                uVal_23 = uVal_23 & 0x7ffffffc;
                lVal_27 = (int64_t)local_78;
                if (local_a8 < local_78) {
                  lVal_27 = local_a8;
                }
                uVal_13 = (uint64_t)local_e4;
                local_90 = lVal_27 * 0x10 + uVal_13 * -0x10;
                lVal_25 = lVal_19 + lVal_27 * 0xc + uVal_13 * -0xc;
                local_c8 = lVal_19 + lVal_27 * 8 + uVal_13 * -8;
                lVal_27 = lVal_19 + lVal_27 * 4 + uVal_13 * -4;
                local_c0 = local_c0 << 4;
                local_d8 = pLong_8;
                local_d0 = lVal_9;
                local_b0 = param_1;
                do {
                  pLong_8 = local_d8;
                  local_b8 = CONCAT44(local_b8._4_4_,uVal_23);
                  lVal_9 = lVal_21 + (int64_t)local_d8;
                  local_e0 = lVal_25;
                  local_88 = lVal_27;
                  func_0x1806aa960(lVal_19 + (int64_t)local_d8,lVal_9,local_f8);
                  lVal_4 = local_d0;
                  lVal_9 = lVal_9 + local_d0;
                  func_0x1806aa960(lVal_27 + (int64_t)pLong_8,lVal_9,local_f8);
                  lVal_5 = local_c8;
                  lVal_9 = lVal_9 + lVal_4;
                  func_0x1806aa960(local_c8 + (int64_t)pLong_8,lVal_9,local_f8);
                  lVal_27 = local_88;
                  lVal_25 = local_e0;
                  func_0x1806aa960(local_e0 + (int64_t)pLong_8,lVal_9 + lVal_4,local_f8);
                  lVal_19 = lVal_19 + local_90;
                  lVal_25 = lVal_25 + local_90;
                  local_c8 = lVal_5 + local_90;
                  lVal_27 = lVal_27 + local_90;
                  lVal_21 = lVal_21 + local_c0;
                  uVal_23 = (int)local_b8 - 4;
                } while (uVal_23 != 0);
                pU64_24 = local_98;
                param_1 = local_b0;
                if ((uint)local_a0 == 0) goto LAB_180075af4;
                pLong_15 = (int64_t *)(lVal_19 + (int64_t)local_d8);
                lVal_21 = lVal_21 + (int64_t)local_d8;
                lVal_9 = local_d0;
                uVal_23 = (uint)local_a0;
              }
              else {
                pLong_15 = (int64_t *)(lVal_19 + (int64_t)pLong_8);
                lVal_21 = (int64_t)pLong_8 + lVal_21 * 4;
                uVal_23 = uVal_23 & 3;
              }
              do {
                func_0x1806aa960(pLong_15,lVal_21,local_f8);
                pLong_15 = (int64_t *)((int64_t)pLong_15 + (int64_t)local_f8);
                lVal_21 = lVal_21 + lVal_9;
                uVal_23 = uVal_23 - 1;
              } while (uVal_23 != 0);
            }
          }
        }
LAB_180075af4:
        if (((int)local_e8 < (int)local_ec) && ((int)local_e4 < iVal_17)) {
          uVal_13 = (uint64_t)local_e8;
          lVal_21 = uVal_13 * 4;
          do {
            uVal_23 = pU64_24[1];
            pLong_8 = param_1[3];
            uVal_26 = pU64_24[2];
            uVal_22 = *pU64_24;
            lVal_9 = *(int *)((int64_t)param_1 + 0xc) * lVal_21 + (uint64_t)local_e4 * 4 + 3;
            lVal_19 = 0;
            do {
              bFlag_1 = *(byte *)((int)((((int)uVal_13 - uVal_23) * uVal_26 + local_e4) - uVal_22) +
                                local_70 + lVal_19);
              uVal_14 = (uint)bFlag_1;
              if (*pU64_16 <= (uint)bFlag_1) {
                uVal_14 = 0;
              }
              if (uVal_14 != local_58._4_4_) {
                uVal_2 = *(uint16_t *)(*(int64_t *)(pU64_16 + 4) + 1 + (uint64_t)uVal_14 * 3);
                *(uint8_t *)((int64_t)pLong_8 + lVal_19 * 4 + lVal_9 + -3) =
                     *(uint8_t *)(*(int64_t *)(pU64_16 + 4) + (uint64_t)uVal_14 * 3);
                *(uint16_t *)((int64_t)pLong_8 + lVal_19 * 4 + lVal_9 + -2) = uVal_2;
                *(uint8_t *)((int64_t)pLong_8 + lVal_19 * 4 + lVal_9) = 0xff;
              }
              lVal_19 = lVal_19 + 1;
            } while (iVal_17 - local_e4 != (int)lVal_19);
            uVal_13 = uVal_13 + 1;
            lVal_21 = lVal_21 + 4;
          } while (uVal_13 != local_ec);
        }
        goto LAB_180075bc3;
      }
    }
  }
  local_64 = 6;
  func_0x18067a120(&local_64,&DAT_180768618);
LAB_180075dd4:
  local_50 = 1;
  func_0x18067a120(&local_50,&DAT_180768618);
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// func_0x180075e00
uint64_t func_0x180075e00(uint64_t param_1,char *param_2)
{
  func_ptr_t fnPtr_1;
  uint uVal_2;
  size_t sz_3;
  LPWSTR lpWideCharStr;
  int64_t lVal_4;
  int64_t *pLong_5;
  uint64_t uVal_6;
  int cbMultiByte;
  uint32_t local_4c [2];
  uint32_t local_44;
  uint32_t local_40;
  int local_3c;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_40 = 0;
  sz_3 = strlen(param_2);
  cbMultiByte = (int)sz_3;
  lVal_4 = -1;
  if (SCARRY4(cbMultiByte,1) == cbMultiByte + 1 < 0) {
    lVal_4 = (int64_t)cbMultiByte * 2 + 2;
  }
  lpWideCharStr = (LPWSTR)thunk_FUN_180672de0(lVal_4);
  uVal_2 = MultiByteToWideChar(0xfde9,0,param_2,cbMultiByte,lpWideCharStr,cbMultiByte + 1);
  if (((int)uVal_2 < 0) || (cbMultiByte < (int)uVal_2)) {
    thunk_FUN_180695dd0(lpWideCharStr);
    local_3c = 4;
    func_0x18067a120(&local_3c,&DAT_180768618);
  }
  else {
    lpWideCharStr[uVal_2] = L'\0';
    FID_conflict__sopen_s(&local_3c,(char *)lpWideCharStr,0,0,0);
    thunk_FUN_180695dd0(lpWideCharStr);
    if (local_3c != -1) {
      lVal_4 = func_0x18066e840(local_3c,&local_40);
      if (lVal_4 != 0) {
        pLong_5 = (int64_t *)func_0x180672de0(0x28);
        *pLong_5 = lVal_4;
        func_0x180075fb0(param_1,pLong_5);
        return param_1;
      }
      goto LAB_180075f1f;
    }
  }
  local_4c[0] = 2;
  func_0x18067a120(local_4c,&DAT_180768618);
LAB_180075f1f:
  local_44 = func_0x180075470(local_40);
  func_0x18067a120(&local_44,&DAT_180768618);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_6 = (*fnPtr_1)();
  return uVal_6;
}

// Catch_All@180075f40
void Catch_All_180075f40(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  *(uint32_t *)(param_2 + 0x4c) = 7;
  func_0x18067a120(param_2 + 0x4c,&DAT_180768618);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Catch_All@180075f70
void Catch_All_180075f70(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  func_0x18066fc40(*(uint64_t *)(param_2 + 0x30),0);
  *(uint32_t *)(param_2 + 0x40) = 7;
  func_0x18067a120(param_2 + 0x40,&DAT_180768618);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180075fb0
uint64_t * func_0x180075fb0(uint64_t *param_1,int **param_2)
{
  uint64_t *pU64_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int iVal_4;
  uint32_t uVal_5;
  int *pInt_6;
  uint64_t *pU64_7;
  uint uVal_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  char *fnPtr_12;
  int *pInt_13;
  int64_t lVal_14;
  uint64_t uVal_15;
  uint8_t auStack_98 [40];
  int64_t local_70;
  uint64_t *local_68;
  int local_5c;
  uint8_t local_58;
  uint64_t local_54;
  uint32_t local_4c;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  *param_1 = param_2;
  iVal_4 = func_0x18066fef0(*param_2);
  if (iVal_4 != 1) {
    pInt_6 = *param_2;
    uVal_5 = func_0x180075470(pInt_6[0x18]);
    func_0x18066fc40(pInt_6,0);
    thunk_FUN_180695dd0(param_2,0x28);
    local_4c = uVal_5;
    func_0x18067a120(&local_4c,&DAT_180768618);
    goto LAB_1800762d0;
  }
  *(uint32_t *)(param_2 + 3) = 1;
  pInt_6 = *param_2;
  if (1 < pInt_6[0x14]) {
    uVal_8 = pInt_6[0x14] + 1;
    pInt_13 = (int *)(*(int64_t *)(pInt_6 + 0x16) + 0x28);
    do {
      if ((((pInt_13[-6] == 0xff) && (pInt_13[-10] == 0xb)) &&
          ((pU64_1 = *(uint64_t **)(pInt_13 + -8),
           (*(uint64_t *)((int64_t)pU64_1 + 3) ^ 0x302e324550414353 | *pU64_1 ^ 0x455041435354454e
           ) == 0 || ((*(uint64_t *)((int64_t)pU64_1 + 3) ^ 0x302e31535458454d |
                      *pU64_1 ^ 0x535458454d494e41) == 0)))) &&
         (((*pInt_13 == 0 && (pInt_13[-4] == 3)) &&
          (fnPtr_12 = *(char **)(pInt_13 + -2), *fnPtr_12 == '\x01')))) goto LAB_180076146;
      uVal_8 = uVal_8 - 1;
      pInt_13 = pInt_13 + 6;
    } while (2 < uVal_8);
  }
  if (0 < pInt_6[8]) {
    iVal_4 = *(int *)(*(int64_t *)(pInt_6 + 0x12) + 0x28);
    if (1 < iVal_4) {
      uVal_8 = iVal_4 + 1;
      pInt_13 = (int *)(*(int64_t *)(*(int64_t *)(pInt_6 + 0x12) + 0x30) + 0x28);
      do {
        if (((pInt_13[-6] == 0xff) && (pInt_13[-10] == 0xb)) &&
           (((pU64_1 = *(uint64_t **)(pInt_13 + -8),
             (*(uint64_t *)((int64_t)pU64_1 + 3) ^ 0x302e324550414353 |
             *pU64_1 ^ 0x455041435354454e) == 0 ||
             ((*(uint64_t *)((int64_t)pU64_1 + 3) ^ 0x302e31535458454d |
              *pU64_1 ^ 0x535458454d494e41) == 0)) &&
            (((*pInt_13 == 0 && (pInt_13[-4] == 3)) &&
             (fnPtr_12 = *(char **)(pInt_13 + -2), *fnPtr_12 == '\x01')))))) goto LAB_180076146;
        uVal_8 = uVal_8 - 1;
        pInt_13 = pInt_13 + 6;
      } while (2 < uVal_8);
    }
  }
  goto LAB_18007614d;
LAB_180076146:
  *(uint *)(param_2 + 3) = (uint)*(ushort *)(fnPtr_12 + 1);
LAB_18007614d:
  local_70 = (int64_t)pInt_6[1] * (int64_t)*pInt_6;
  local_68 = param_1;
  if (pInt_6[8] < 2) {
    uVal_10 = 0;
  }
  else {
    lVal_14 = 0;
    uVal_15 = 0;
    do {
      lVal_11 = lVal_14 * 0x38;
      lVal_9 = (int64_t)*(int *)(*(int64_t *)(pInt_6 + 0x12) + 0x28 + lVal_11);
      lVal_2 = *(int64_t *)(*(int64_t *)(pInt_6 + 0x12) + 0x30 + lVal_11);
      local_5c = 0;
      local_58 = 0;
      local_54 = 0xffffffff00000000;
      if (lVal_9 != 0) {
        lVal_9 = lVal_9 * 0x18 + -0x18;
        iVal_4 = *(int *)(lVal_2 + 0x10 + lVal_9);
        while (((iVal_4 != 0xf9 ||
                (iVal_4 = func_0x18066fc00((int64_t)*(int *)(lVal_2 + lVal_9),
                                       *(uint64_t *)(lVal_2 + 8 + lVal_9),&local_5c), iVal_4 != 1))
               && (lVal_9 != 0))) {
          lVal_9 = lVal_9 + -0x18;
          iVal_4 = *(int *)(lVal_2 + 0x10 + lVal_9);
        }
        pInt_6 = *param_2;
        if (((local_5c == 3) &&
            (uVal_10 = (int64_t)*(int *)(*(int64_t *)(pInt_6 + 0x12) + 0xc + lVal_11) *
                      (int64_t)*(int *)(*(int64_t *)(pInt_6 + 0x12) + 8 + lVal_11),
            uVal_15 <= uVal_10 && uVal_10 - uVal_15 != 0)) && (uVal_15 = uVal_10, uVal_10 - local_70 == 0))
        break;
      }
      uVal_10 = uVal_15;
      lVal_14 = lVal_14 + 1;
      uVal_15 = uVal_10;
    } while (lVal_14 < (int64_t)pInt_6[8] + -1);
  }
  param_2[4] = (int *)((uVal_10 + local_70) * 4);
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_98)) {
    return local_68;
  }
LAB_1800762d0:
  func_0x180673080(local_48 ^ (uint64_t)auStack_98);
  fnPtr_3 = (func_ptr_t )swi(3);
  pU64_7 = (uint64_t *)(*fnPtr_3)();
  return pU64_7;
}

// func_0x1800762e0
void func_0x1800762e0(int64_t *param_1)
{
  if ((uint64_t *)*param_1 != (uint64_t *)0x0) {
    func_0x18066fc40(*(uint64_t *)*param_1,0);
    if (*param_1 != 0) {
      thunk_FUN_180695dd0(*param_1,0x28);
      return;
    }
  }
  return;
}

// func_0x180076320
uint16_t * func_0x180076320(uint16_t *param_1)
{
  *param_1 = 0;
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0xc) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0xf;
  *(uint8_t (*)[16])(param_1 + 0x14) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0x1c) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0xf;
  *(uint8_t (*)[16])(param_1 + 0x24) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x2c) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x34) = ZEXT816(0);
  return param_1;
}

// func_0x180076360
uint16_t * func_0x180076360(uint16_t *param_1,uint64_t *param_2)
{
  int64_t *pLong_1;
  char ch_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t *pLong_6;
  uint64_t *pU64_7;
  uint64_t *pU64_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint8_t *pU64_11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t uVal_12;
  uint64_t *unaff_R15;
  uint16_t *pU64_13;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint64_t local_68;
  uint64_t uStack_60;
  uint64_t *local_58;
  uint16_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = 0;
  local_58 = (uint64_t *)(param_1 + 4);
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0xc) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0xf;
  pLong_1 = (int64_t *)(param_1 + 0x14);
  *(uint8_t (*)[16])(param_1 + 0x14) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0x1c) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0xf;
  *(uint8_t (*)[16])(param_1 + 0x24) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x2c) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x34) = ZEXT816(0);
  local_50 = param_1;
  ch_2 = func_0x1800be560(param_2,0);
  if (ch_2 == '\0') {
    return local_50;
  }
  if (local_58 != param_2) {
    uVal_9 = param_2[2];
    pU64_7 = param_2;
    if (0xf < (uint64_t)param_2[3]) {
      pU64_7 = (uint64_t *)*param_2;
    }
    if (*(uint64_t *)(local_50 + 0x10) < uVal_9) {
      func_0x18007bba0(local_58,uVal_9);
      goto LAB_180076418;
    }
    pU64_8 = local_58;
    if (0xf < *(uint64_t *)(local_50 + 0x10)) {
      pU64_8 = *(uint64_t **)(local_50 + 4);
    }
    *(uint64_t *)(local_50 + 0xc) = uVal_9;
    func_0x1806aa960(pU64_8,pU64_7,uVal_9);
    *(uint8_t *)((int64_t)pU64_8 + uVal_9) = 0;
    lVal_4 = param_2[2];
    if (lVal_4 != 0) goto LAB_180076425;
LAB_1800764f8:
    uVal_9 = 0;
    uVal_10 = 0;
LAB_180076473:
    _local_78 = ZEXT816(0);
    unaff_R15 = (uint64_t *)*param_2;
    unaff_R12 = param_2[3];
    if (uVal_10 < 0x10) {
      pU64_11 = local_78;
      unaff_R13 = 0xf;
    }
    else {
      uVal_12 = uVal_10 | 0xf;
      unaff_R13 = 0x16;
      if (0x16 < uVal_12) {
        unaff_R13 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
LAB_180076513:
        pU64_11 = (uint8_t *)func_0x180672de0(unaff_R13 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(unaff_R13 + 0x28);
        pU64_11 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_4;
      }
      local_78 = (uint8_t  [8])pU64_11;
    }
    if (0xf < unaff_R12) {
      param_2 = unaff_R15;
    }
    local_68 = uVal_10;
    uStack_60 = unaff_R13;
    func_0x1806aa960(pU64_11,(int64_t)param_2 + uVal_9,uVal_10);
    pU64_11[uVal_10] = 0;
    pU64_13 = local_50;
    uVal_9 = *(uint64_t *)(local_50 + 0x20);
    if (0xf < uVal_9) {
      lVal_4 = *pLong_1;
      uVal_10 = uVal_9 + 1;
      lVal_3 = lVal_4;
      if (0xfff < uVal_10) {
        lVal_3 = *(int64_t *)(lVal_4 + -8);
        if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_3)) goto LAB_18007670f;
        uVal_10 = uVal_9 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_3,uVal_10);
    }
    *(uint32_t *)(param_1 + 0x1c) = (uint32_t)local_68;
    *(uint32_t *)(param_1 + 0x1e) = local_68._4_4_;
    *(uint32_t *)(param_1 + 0x20) = (uint32_t)uStack_60;
    *(uint32_t *)(param_1 + 0x22) = uStack_60._4_4_;
    *(uint32_t *)pLong_1 = local_78._0_4_;
    *(uint32_t *)(param_1 + 0x16) = local_78._4_4_;
    *(uint32_t *)(param_1 + 0x18) = (uint32_t)uStack_70;
    *(uint32_t *)(param_1 + 0x1a) = uStack_70._4_4_;
    if (*(int64_t *)(pU64_13 + 0x1c) == 0) {
      _local_78 = ZEXT816(0);
      pLong_6 = *(int64_t **)(pU64_13 + 0x14);
      uVal_9 = *(uint64_t *)(pU64_13 + 0x20);
      pU64_11 = local_78;
      uVal_12 = 0xf;
      uVal_10 = 0;
    }
    else {
      pLong_6 = pLong_1;
      if (0xf < *(uint64_t *)(pU64_13 + 0x20)) {
        pLong_6 = *(int64_t **)(pU64_13 + 0x14);
      }
      lVal_3 = *(int64_t *)(pU64_13 + 0x1c) + (int64_t)pLong_6;
      lVal_4 = thunk_FUN_180676770(pLong_6,lVal_3,0x2e);
      uVal_9 = *(uint64_t *)(pU64_13 + 0x1c);
      uVal_10 = lVal_4 - (int64_t)pLong_6;
      if (uVal_9 < (uint64_t)(lVal_4 - (int64_t)pLong_6)) {
        uVal_10 = uVal_9;
      }
      if (lVal_4 == lVal_3) {
        uVal_10 = uVal_9;
      }
      _local_78 = ZEXT816(0);
      if ((int64_t)uVal_10 < 0) goto LAB_180076709;
      pLong_6 = *(int64_t **)(pU64_13 + 0x14);
      uVal_9 = *(uint64_t *)(pU64_13 + 0x20);
      if (uVal_10 < 0x10) {
        pU64_11 = local_78;
        uVal_12 = 0xf;
      }
      else {
        uVal_5 = uVal_10 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_5) {
          uVal_12 = uVal_5;
        }
        if (uVal_5 < 0xfff) {
          pU64_11 = (uint8_t *)func_0x180672de0(uVal_12 + 1,pLong_6);
        }
        else {
          lVal_4 = func_0x180672de0(uVal_12 + 0x28,pLong_6);
          pU64_11 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_11 + -8) = lVal_4;
        }
        local_78 = (uint8_t  [8])pU64_11;
        pU64_13 = local_50;
      }
    }
    if (uVal_9 < 0x10) {
      pLong_6 = pLong_1;
    }
    local_68 = uVal_10;
    uStack_60 = uVal_12;
    func_0x1806aa960(pU64_11,pLong_6,uVal_10);
    pU64_11[uVal_10] = 0;
    uVal_9 = *(uint64_t *)(pU64_13 + 0x20);
    if (0xf < uVal_9) {
      lVal_4 = *pLong_1;
      uVal_10 = uVal_9 + 1;
      lVal_3 = lVal_4;
      if (0xfff < uVal_10) {
        lVal_3 = *(int64_t *)(lVal_4 + -8);
        if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_3)) goto LAB_18007670f;
        uVal_10 = uVal_9 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_3,uVal_10);
    }
    *(uint32_t *)(param_1 + 0x1c) = (uint32_t)local_68;
    *(uint32_t *)(param_1 + 0x1e) = local_68._4_4_;
    *(uint32_t *)(param_1 + 0x20) = (uint32_t)uStack_60;
    *(uint32_t *)(param_1 + 0x22) = uStack_60._4_4_;
    *(uint32_t *)pLong_1 = local_78._0_4_;
    *(uint32_t *)(param_1 + 0x16) = local_78._4_4_;
    *(uint32_t *)(param_1 + 0x18) = (uint32_t)uStack_70;
    *(uint32_t *)(param_1 + 0x1a) = uStack_70._4_4_;
    return local_50;
  }
LAB_180076418:
  lVal_4 = param_2[2];
  if (lVal_4 == 0) goto LAB_1800764f8;
LAB_180076425:
  pU64_7 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    pU64_7 = (uint64_t *)*param_2;
  }
  lVal_3 = thunk_FUN_180676770(pU64_7,lVal_4 + (int64_t)pU64_7,0x5c);
  uVal_9 = 0;
  if (lVal_3 != lVal_4 + (int64_t)pU64_7) {
    uVal_9 = (lVal_3 - (int64_t)pU64_7) + 1;
  }
  _local_78 = ZEXT816(0);
  if (uVal_9 <= (uint64_t)param_2[2]) {
    uVal_10 = param_2[2] - uVal_9;
    if (-1 < (int64_t)uVal_10) goto LAB_180076473;
    func_0x18007ba70();
    goto LAB_180076513;
  }
  func_0x1800801d0();
LAB_180076709:
  func_0x18007ba70();
LAB_18007670f:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180076720
void Unwind_180076720(uint64_t param_1,int64_t param_2)
{
  func_0x180076770(*(int64_t *)(param_2 + 0x58) + 0x60);
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x50));
  return;
}

// func_0x180076770
void func_0x180076770(uint8_t (*param_1)[16],uint64_t param_2,uint64_t param_3, uint64_t param_4)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  uVal_4 = 0xfffffffffffffffe;
  lVal_3 = *(int64_t *)*param_1;
  if (lVal_3 != 0) {
    lVal_1 = *(int64_t *)(*param_1 + 8);
    if (lVal_3 == lVal_1) {
      uVal_2 = *(int64_t *)param_1[1] - lVal_3;
    }
    else {
      do {
        if (*(int64_t *)(lVal_3 + 0x20) != 0) {
          (**(func_ptr_t *)(lVal_3 + 0x18))();
        }
        lVal_3 = lVal_3 + 0x38;
      } while (lVal_3 != lVal_1);
      lVal_3 = *(int64_t *)*param_1;
      uVal_2 = *(int64_t *)param_1[1] - lVal_3;
    }
    if (0xfff < uVal_2) {
      if (0x1f < (uint64_t)((lVal_3 + -8) - *(int64_t *)(lVal_3 + -8))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = uVal_2 + 0x27;
      lVal_3 = *(int64_t *)(lVal_3 + -8);
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2,param_3,param_4,uVal_4);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// Unwind@180076820
void Unwind_180076820(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180076840
void func_0x180076840(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  char ch_2;
  int iVal_3;
  int64_t *pLong_4;
  uint32_t local_48;
  uint32_t uStack_44;
  int iStack_40;
  uint32_t uStack_3c;
  int64_t *local_38;
  uint64_t local_30;
  int iStack_28;
  uint32_t uStack_24;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(int64_t *)(param_1 + 0x18) == 0) {
    return;
  }
  ch_2 = func_0x1800be560(param_1 + 8,0);
  if (ch_2 == '\0') {
    return;
  }
  pLong_4 = (int64_t *)func_0x180672de0(8);
  *pLong_4 = param_1;
  local_30 = func_0x180681328(0,0,&LAB_1800b6980,pLong_4,0,&iStack_28);
  if (local_30 == 0) {
    iStack_28 = 0;
    local_38 = pLong_4;
    func_0x180674150(6);
  }
  else if (iStack_28 != 0) {
    local_30._4_4_ = (uint32_t)((uint64_t)local_30 >> 0x20);
    local_48 = (uint32_t)local_30;
    uStack_44 = local_30._4_4_;
    iStack_40 = iStack_28;
    uStack_3c = uStack_24;
    iVal_3 = func_0x180676270(&local_48);
    if (iVal_3 == 0) {
      return;
    }
    goto LAB_1800768ee;
  }
  func_0x180674150(1);
LAB_1800768ee:
  func_0x180674150(1);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180076900
void Unwind_180076900(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x40),8);
  return;
}

// Unwind@180076930
void Unwind_180076930(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  if (*(int *)(param_2 + 0x50) == 0) {
    return;
  }
  func_0x18068d0ec();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180076960
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint32_t * func_0x180076960(int64_t param_1,uint32_t *param_2)
{
  int *pInt_1;
  char ch_2;
  uint32_t *pU64_3;
  int iVal_4;
  int64_t lVal_5;
  size_t sz_6;
  uint64_t *pU64_7;
  uint64_t uVal_8;
  int64_t *pLong_9;
  int iVal_10;
  int64_t lVal_11;
  uint8_t *pU64_12;
  char *fnPtr_13;
  uint64_t uVal_14;
  uint64_t *pU64_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  uint64_t local_d8;
  uint64_t uStack_d0;
  uint64_t local_c8;
  uint64_t uStack_c0;
  int64_t local_b8;
  int64_t *local_b0;
  uint64_t local_a0;
  uint8_t local_98 [16];
  size_t local_88;
  uint64_t uStack_80;
  char local_78;
  undefined7 uStack_77;
  int64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint32_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVal_5 = _Xtime_get_ticks();
  lVal_5 = lVal_5 / 10000;
  lVal_11 = *(int64_t *)(param_1 + 0x48);
  if (*(int64_t *)(param_1 + 0x48) == 0) {
    *(int64_t *)(param_1 + 0x48) = lVal_5;
    lVal_11 = lVal_5;
  }
  iVal_4 = *(int *)(param_1 + 0x5c);
  if (lVal_11 <= lVal_5 - *(int64_t *)(*(int64_t *)(param_1 + 0x60) + 0x30 + (int64_t)iVal_4 * 0x38)
     ) {
    *(int64_t *)(param_1 + 0x48) = lVal_5;
    iVal_10 = iVal_4 + 1;
    iVal_4 = 0;
    if (iVal_10 < *(int *)(param_1 + 0x50)) {
      iVal_4 = iVal_10;
    }
    *(int *)(param_1 + 0x5c) = iVal_4;
  }
  func_0x180038c30(&local_b8,iVal_4);
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3008) == '\0') {
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_5 + 0x3008) = 1;
    *(uint64_t *)(lVal_5 + 0x3000) = 0x10b60b402395aea;
    func_0x180673140(&LAB_180094a30);
  }
  lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_7 = (uint64_t *)(lVal_5 + 0x3000);
  if (*(char *)(lVal_5 + 0x3007) == '\x01') {
    *pU64_7 = (CONCAT44((uint)*(ushort *)(lVal_5 + 0x3005) << 8,*(uint32_t *)pU64_7) |
              (uint64_t)*(byte *)(lVal_5 + 0x3004) << 0x20) ^ SUB168(_DAT_1806aeb10,0);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (uint8_t  [16])0x0;
  sz_6 = strlen((char *)pU64_7);
  if ((int64_t)sz_6 < 0) {
    func_0x18007ba70();
  }
  else {
    if (sz_6 < 0x10) {
      pU64_12 = local_98;
      uVal_17 = 0xf;
    }
    else {
      uVal_16 = sz_6 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_16) {
        uVal_17 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        lVal_5 = func_0x180672de0(uVal_17 + 0x28);
        pU64_12 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_5;
      }
      local_98._0_8_ = pU64_12;
    }
    local_88 = sz_6;
    uStack_80 = uVal_17;
    func_0x1806aa960(pU64_12,pU64_7,sz_6);
    pU64_12[sz_6] = 0;
    uVal_17 = *(uint64_t *)(param_1 + 0x38);
    if (*(uint64_t *)(param_1 + 0x40) < 0x10) {
      lVal_5 = param_1 + 0x28;
    }
    else {
      lVal_5 = *(int64_t *)(param_1 + 0x28);
    }
    if (uStack_80 - local_88 < uVal_17) {
      pU64_7 = (uint64_t *)func_0x180082950(local_98,uVal_17,uVal_17,lVal_5,uVal_17);
    }
    else {
      sz_6 = local_88 + uVal_17;
      pU64_7 = (uint64_t *)local_98;
      pU64_15 = pU64_7;
      if (0xf < uStack_80) {
        pU64_15 = (uint64_t *)local_98._0_8_;
      }
      pU64_12 = (uint8_t *)(local_88 + (int64_t)pU64_15);
      local_88 = sz_6;
      func_0x1806aa960(pU64_12,lVal_5);
      *(uint8_t *)((int64_t)pU64_15 + sz_6) = 0;
    }
    local_d8 = *pU64_7;
    uStack_d0 = pU64_7[1];
    local_c8 = pU64_7[2];
    uStack_c0 = pU64_7[3];
    pU64_7[2] = 0;
    pU64_7[3] = 0xf;
    *(uint8_t *)pU64_7 = 0;
    fnPtr_13 = &local_78;
    func_0x180094870(fnPtr_13,local_c8,&local_d8,&local_b8);
    uVal_17 = local_60;
    if (0xf < local_60) {
      fnPtr_13 = (char *)CONCAT71(uStack_77,local_78);
    }
    *param_2 = 0;
    *(uint8_t (*)[16])(param_2 + 2) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(param_2 + 6) = (uint8_t  [16])0x0;
    if (-1 < (int64_t)local_68) {
      if (local_68 < 0x10) {
        *(uint64_t *)(param_2 + 6) = local_68;
        *(uint64_t *)(param_2 + 8) = 0xf;
        func_0x1806aa960(param_2 + 2,fnPtr_13);
        *(uint8_t *)((int64_t)param_2 + local_68 + 8) = 0;
        if (local_68 != 0) goto LAB_180076c8f;
        *(uint64_t *)(param_2 + 10) = 0;
        *(uint64_t *)(param_2 + 0xc) = 0xaf63bd4c8601b7df;
      }
      else {
        uVal_16 = local_68 | 0xf;
        uVal_17 = 0x16;
        if (0x16 < uVal_16) {
          uVal_17 = uVal_16;
        }
        if (uVal_16 < 0xfff) {
          uVal_16 = func_0x180672de0(uVal_17 + 1);
        }
        else {
          lVal_5 = func_0x180672de0(uVal_17 + 0x28);
          uVal_16 = lVal_5 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_16 - 8) = lVal_5;
        }
        *(uint64_t *)(param_2 + 2) = uVal_16;
        *(uint64_t *)(param_2 + 6) = local_68;
        *(uint64_t *)(param_2 + 8) = uVal_17;
        func_0x1806aa960(uVal_16,fnPtr_13);
        *(uint8_t *)(uVal_16 + local_68) = 0;
LAB_180076c8f:
        uVal_17 = (uint64_t)((uint)local_68 & 7);
        if (local_68 - 1 < 7) {
          uVal_16 = 0xcbf29ce484222325;
LAB_180076d3e:
          uVal_14 = 0;
          do {
            uVal_16 = uVal_16 * 0x100000001b3 ^ (int64_t)fnPtr_13[uVal_14];
            uVal_14 = uVal_14 + 1;
          } while (uVal_17 != uVal_14);
        }
        else {
          local_68 = local_68 & 0x7ffffffffffffff8;
          uVal_16 = 0xcbf29ce484222325;
          do {
            uVal_16 = (((((((uVal_16 * 0x100000001b3 ^ (int64_t)*fnPtr_13) * 0x100000001b3 ^
                          (int64_t)fnPtr_13[1]) * 0x100000001b3 ^ (int64_t)fnPtr_13[2]) *
                         0x100000001b3 ^ (int64_t)fnPtr_13[3]) * 0x100000001b3 ^
                       (int64_t)fnPtr_13[4]) * 0x100000001b3 ^ (int64_t)fnPtr_13[5]) * 0x100000001b3
                     ^ (int64_t)fnPtr_13[6]) * 0x100000001b3 ^ (int64_t)fnPtr_13[7];
            fnPtr_13 = fnPtr_13 + 8;
            local_68 = local_68 - 8;
          } while (local_68 != 0);
          if (uVal_17 != 0) goto LAB_180076d3e;
        }
        *(uint64_t *)(param_2 + 10) = uVal_16;
        *(uint64_t *)(param_2 + 0xc) =
             ((uint64_t)*(byte *)param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVal_16;
        uVal_17 = local_60;
      }
      if (0xf < uVal_17) {
        lVal_11 = CONCAT71(uStack_77,local_78);
        uVal_16 = uVal_17 + 1;
        lVal_5 = lVal_11;
        if (0xfff < uVal_16) {
          lVal_5 = *(int64_t *)(lVal_11 + -8);
          if (0x1f < (uint64_t)((lVal_11 + -8) - lVal_5)) goto LAB_180077093;
          uVal_16 = uVal_17 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_16);
      }
      local_68 = 0;
      local_60 = 0xf;
      local_78 = '\0';
      if (0xf < uStack_c0) {
        uVal_17 = uStack_c0 + 1;
        uVal_16 = local_d8;
        if (0xfff < uVal_17) {
          uVal_16 = *(uint64_t *)(local_d8 - 8);
          if (0x1f < (local_d8 - 8) - uVal_16) goto LAB_180077093;
          uVal_17 = uStack_c0 + 0x28;
        }
        thunk_FUN_180695dd0(uVal_16,uVal_17);
      }
      local_c8 = 0;
      uStack_c0 = 0xf;
      local_d8 = local_d8 & 0xffffffffffffff00;
      if (0xf < uStack_80) {
        uVal_17 = uStack_80 + 1;
        uVal_16 = local_98._0_8_;
        if (0xfff < uVal_17) {
          uVal_16 = *(uint64_t *)(local_98._0_8_ - 8);
          if (0x1f < (local_98._0_8_ - 8) - uVal_16) goto LAB_180077093;
          uVal_17 = uStack_80 + 0x28;
        }
        thunk_FUN_180695dd0(uVal_16,uVal_17);
      }
      if (0xf < local_a0) {
        uVal_17 = local_a0 + 1;
        lVal_5 = local_b8;
        if (0xfff < uVal_17) {
          lVal_5 = *(int64_t *)(local_b8 + -8);
          if (0x1f < (uint64_t)((local_b8 + -8) - lVal_5)) goto LAB_180077093;
          uVal_17 = local_a0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_17);
      }
      local_48 = param_2;
      func_0x18011b920(DAT_180840a50,&local_b8);
      uVal_8 = func_0x180100ef0(local_b8);
      lVal_5 = func_0x1800b7550(uVal_8,local_48);
      pLong_9 = (int64_t *)func_0x180100ef0(local_b8);
      if (lVal_5 == *pLong_9) {
        func_0x1800fd7c0(&local_78,
                      (int64_t)*(int *)(param_1 + 0x5c) * 0x38 + *(int64_t *)(param_1 + 0x60));
        func_0x180100a60(local_b8,local_48,&local_78);
        if (local_70 != 0) {
          (*(func_ptr_t )CONCAT71(uStack_77,local_78))();
        }
      }
      else {
        lVal_11 = *(int64_t *)(*(int64_t *)(lVal_5 + 0x58) + 8);
        if (lVal_11 != 0) {
          ch_2 = *(char *)(*(int64_t *)(lVal_5 + 0x58) + 0x59);
          LOCK();
          *(short *)(lVal_11 + 0x10) = *(short *)(lVal_11 + 0x10) + 1;
          UNLOCK();
          if (((*(byte *)(lVal_11 + 0x12) & 1) != 0) && (ch_2 == '\n')) {
            if (*(char *)(*(int64_t *)(lVal_5 + 0x58) + 0x58) == '\0') {
              func_0x180100d40(local_b8,local_48);
              func_0x1800fd7c0(&local_78,
                            (int64_t)*(int *)(param_1 + 0x5c) * 0x38 +
                            *(int64_t *)(param_1 + 0x60));
              func_0x180100a60(local_b8,local_48,&local_78);
              if (local_70 != 0) {
                (*(func_ptr_t )CONCAT71(uStack_77,local_78))();
              }
            }
            goto LAB_180077010;
          }
        }
        uVal_8 = func_0x180100ef0(local_b8);
        lVal_5 = func_0x1800a0d60(uVal_8,lVal_5);
        func_0x1800b7670(lVal_5 + 0x20);
        thunk_FUN_180695dd0(lVal_5,0x88);
        func_0x1800fd7c0(&local_78,
                      (int64_t)*(int *)(param_1 + 0x5c) * 0x38 + *(int64_t *)(param_1 + 0x60));
        func_0x180100a60(local_b8,local_48,&local_78);
        if (local_70 != 0) {
          (*(func_ptr_t )CONCAT71(uStack_77,local_78))();
        }
      }
LAB_180077010:
      pU64_3 = local_48;
      if (local_b0 != (int64_t *)0x0) {
        LOCK();
        pLong_9 = local_b0 + 1;
        *(int *)pLong_9 = *(int *)pLong_9 + -1;
        UNLOCK();
        if (*(int *)pLong_9 == 0) {
          (**(func_ptr_t *)*local_b0)(local_b0);
          LOCK();
          pInt_1 = (int *)((int64_t)local_b0 + 0xc);
          *pInt_1 = *pInt_1 + -1;
          UNLOCK();
          if (*pInt_1 == 0) {
            (**(func_ptr_t *)(*local_b0 + 8))(local_b0);
          }
        }
      }
      return pU64_3;
    }
  }
  func_0x18007ba70();
LAB_180077093:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1800770a0
void Unwind_1800770a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1800770e0
void Unwind_1800770e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@180077120
void Unwind_180077120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@180077160
void Unwind_180077160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800771a0
void Unwind_1800771a0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x98) != 0) {
    (**(func_ptr_t *)(param_2 + 0x90))();
  }
  return;
}

// Unwind@1800771e0
void Unwind_1800771e0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x98) != 0) {
    (**(func_ptr_t *)(param_2 + 0x90))();
  }
  return;
}

// Unwind@180077220
void Unwind_180077220(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x98) != 0) {
    (**(func_ptr_t *)(param_2 + 0x90))();
  }
  return;
}

// Unwind@180077260
void Unwind_180077260(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x50);
  return;
}

// Unwind@1800772a0
void Unwind_1800772a0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(*(uint64_t *)(param_2 + 0xc0));
  return;
}

// Unwind@1800772e0
void Unwind_1800772e0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180077300
void Unwind_180077300(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180077320
void Unwind_180077320(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180077340
uint8_t func_0x180077340(uint8_t *param_1)
{
  return *param_1;
}

// func_0x180077350
uint8_t func_0x180077350(int64_t param_1)
{
  return *(uint8_t *)(param_1 + 1);
}

// func_0x180077360
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
uint64_t func_0x180077360(uint64_t *param_1,uint64_t *param_2)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  bool bFlag_3;
  uint64_t *pU64_4;
  uint8_t (*pArr16_5)[16];
  int iVal_6;
  uint32_t uVal_7;
  size_t sz_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t ******ptr6_U64_11;
  uint64_t *******ptr7_U64_12;
  uint64_t uVal_13;
  uint uVal_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  uint8_t *pU64_17;
  uint8_t *pU64_18;
  int *pInt_19;
  uint8_t local_5d8 [80];
  char local_588 [1032];
  uint64_t *local_180;
  uint64_t local_178;
  uint64_t *local_170;
  uint64_t *******local_168 [2];
  uint8_t **local_158;
  uint64_t local_150;
  uint8_t local_148 [16];
  uint8_t local_138 [8];
  uint64_t uStack_130;
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t local_108 [16];
  uint8_t local_f8 [16];
  uint8_t local_e8 [24];
  uint64_t *******local_d0;
  uint8_t **local_c8;
  uint64_t local_b8;
  uint local_ac;
  int local_a8;
  uint32_t uStack_a4;
  uint8_t **local_a0;
  uint64_t local_90;
  uint8_t local_88 [16];
  uint8_t local_78 [24];
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_e8._0_16_ = ZEXT816(0);
  local_f8 = ZEXT816(0);
  local_108 = ZEXT816(0);
  local_118 = ZEXT816(0);
  local_128 = ZEXT816(0);
  _local_138 = ZEXT816(0);
  local_148 = ZEXT816(0);
  if (0xf < (uint64_t)param_1[3]) {
    param_1 = (uint64_t *)*param_1;
  }
  uVal_10 = 0;
  iVal_6 = func_0x18007ab60(local_148,param_1,0,0,0);
  if (iVal_6 != 0) {
    local_ac = local_138._0_4_;
    uVal_15 = 0;
    local_170 = param_2;
    while (uVal_14 = (uint)uVal_15, uVal_14 < local_ac) {
      func_0x1806ab010(local_5d8,0,0x458);
      if ((int64_t *)local_e8._8_8_ == (int64_t *)0x0) {
        lVal_16 = 0;
      }
      else {
        lVal_16 = 0;
        if (uVal_14 < (uint)local_138._0_4_) {
          lVal_16 = (uint64_t)*(uint *)(*(int64_t *)(local_e8._8_8_ + 0x20) + uVal_15 * 4) +
                   *(int64_t *)local_e8._8_8_;
        }
      }
      iVal_6 = func_0x18007b630(local_148,uVal_15,lVal_16,local_5d8,0);
      if (iVal_6 != 0) {
        local_78._0_16_ = ZEXT816(0);
        local_88 = ZEXT816(0);
        sz_8 = strlen(local_588);
        if ((int64_t)sz_8 < 0) {
          func_0x18007ba70();
LAB_180077b84:
          func_0x18008a340("create_directories",&local_d0,&local_a8);
LAB_180077b9f:
          func_0x18008a340("create_directories",&local_a8,local_168);
          fnPtr_1 = (func_ptr_t )swi(3);
          uVal_10 = (*fnPtr_1)();
          return uVal_10;
        }
        uVal_13 = 0xf;
        pU64_18 = local_88;
        if (0xf < sz_8) {
          uVal_9 = sz_8 | 0xf;
          uVal_13 = 0x16;
          if (0x16 < uVal_9) {
            uVal_13 = uVal_9;
          }
          if (uVal_9 < 0xfff) {
            pU64_18 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
          }
          else {
            lVal_16 = func_0x180672de0(uVal_13 + 0x28);
            pU64_18 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_18 + -8) = lVal_16;
          }
          local_88._0_8_ = pU64_18;
        }
        local_78._8_8_ = uVal_13;
        local_78._0_8_ = sz_8;
        func_0x1806aa960(pU64_18,local_588,sz_8);
        pU64_18[sz_8] = 0;
        if ((uint64_t)local_78._0_8_ < (uint8_t **)0x2) {
LAB_1800775bb:
          pU64_4 = local_170;
          pInt_19 = &local_a8;
          local_d0 = (uint64_t *******)local_88;
          if (0xf < (uint64_t)local_78._8_8_) {
            local_d0 = (uint64_t *******)local_88._0_8_;
          }
          local_c8 = (uint8_t **)local_78._0_8_;
          uVal_7 = func_0x180678230();
          func_0x1800a6340(pInt_19,uVal_7,&local_d0);
          local_180 = pU64_4;
          if (0xf < (uint64_t)pU64_4[3]) {
            local_180 = (uint64_t *)*pU64_4;
          }
          local_178 = pU64_4[2];
          uVal_7 = func_0x180678230();
          func_0x1800a6340(&local_d0,uVal_7,&local_180);
          func_0x180056630(local_168,&local_d0,pInt_19);
          if (7 < local_b8) {
            uVal_13 = local_b8 * 2 + 2;
            ptr7_U64_12 = local_d0;
            if (0xfff < uVal_13) {
              ptr7_U64_12 = (uint64_t *******)local_d0[-1];
              if ((uint8_t *)0x1f <
                  (uint8_t *)((int64_t)local_d0 + (-8 - (int64_t)ptr7_U64_12))) {
LAB_180077b7c:
                do {
                  invalidInstructionException();
                } while( true );
              }
              uVal_13 = local_b8 * 2 + 0x29;
            }
            thunk_FUN_180695dd0(ptr7_U64_12,uVal_13);
          }
          if (7 < local_90) {
            lVal_2 = CONCAT44(uStack_a4,local_a8);
            uVal_13 = local_90 * 2 + 2;
            lVal_16 = lVal_2;
            if (0xfff < uVal_13) {
              lVal_16 = *(int64_t *)(lVal_2 + -8);
              if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_16)) goto LAB_180077b7c;
              uVal_13 = local_90 * 2 + 0x29;
            }
            thunk_FUN_180695dd0(lVal_16,uVal_13);
          }
          if ((((int64_t *)local_e8._8_8_ == (int64_t *)0x0) || ((uint)local_138._0_4_ <= uVal_14))
             || (*(int64_t *)local_e8._8_8_ == 0)) {
            uStack_130._4_4_ = 0x18;
LAB_18007779a:
            func_0x180077d50(local_168,pInt_19);
            local_d0 = (uint64_t *******)((uint64_t)local_d0 & 0xffffffff00000000);
            local_c8 = &PTR_PTR_FUN_1806b00d8;
            func_0x180094a60(pInt_19,&local_d0);
            if ((int)local_d0 != 0) goto LAB_180077b84;
            if (7 < local_90) {
              lVal_2 = CONCAT44(uStack_a4,local_a8);
              uVal_13 = local_90 * 2 + 2;
              lVal_16 = lVal_2;
              if (0xfff < uVal_13) {
                lVal_16 = *(int64_t *)(lVal_2 + -8);
                if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_16)) goto LAB_180077b7c;
                uVal_13 = local_90 * 2 + 0x29;
              }
              thunk_FUN_180695dd0(lVal_16,uVal_13);
            }
            local_d0 = local_168;
            if (7 < local_150) {
              local_d0 = local_168[0];
            }
            local_c8 = local_158;
            uVal_7 = func_0x180678230();
            func_0x18008a490(pInt_19,uVal_7,&local_d0,&local_180);
            if (0xf < local_90) {
              pInt_19 = (int *)CONCAT44(uStack_a4,local_a8);
            }
            iVal_6 = func_0x180077e70(local_148,uVal_15,pInt_19,0);
            if (0xf < local_90) {
              lVal_2 = CONCAT44(uStack_a4,local_a8);
              lVal_16 = lVal_2;
              if ((0xfff < local_90 + 1) &&
                 (lVal_16 = *(int64_t *)(lVal_2 + -8), 0x1f < (uint64_t)((lVal_2 + -8) - lVal_16)))
              goto LAB_180077b7c;
              thunk_FUN_180695dd0(lVal_16);
            }
            bFlag_3 = false;
            if (iVal_6 == 0) {
              pArr16_5 = (uint8_t (*)[16])local_e8._8_8_;
              if (((((uint8_t (*)[16])local_e8._8_8_ == (uint8_t (*)[16])0x0) ||
                   (local_128._8_8_ == 0)) || ((func_ptr_t )local_118._0_8_ == (func_ptr_t )0x0)) ||
                 (local_138._4_4_ != 1)) {
                uStack_130._4_4_ = 0x18;
                bFlag_3 = true;
              }
              else {
                local_e8._8_8_ = 0;
                (*(func_ptr_t )local_118._0_8_)(local_108._0_8_,*(uint64_t *)*pArr16_5);
                pArr16_5[1] = ZEXT816(0);
                *pArr16_5 = ZEXT816(0);
                (*(func_ptr_t )local_118._0_8_)(local_108._0_8_,*(uint64_t *)pArr16_5[2]);
                pArr16_5[3] = ZEXT816(0);
                pArr16_5[2] = ZEXT816(0);
                (*(func_ptr_t )local_118._0_8_)(local_108._0_8_,*(uint64_t *)pArr16_5[4]);
                pArr16_5[5] = ZEXT816(0);
                pArr16_5[4] = ZEXT816(0);
                if (*(int64_t *)pArr16_5[7] != 0) {
                  if (((int)uStack_130 == 4) && (iVal_6 = func_0x18068a690(), iVal_6 == -1)) {
                    uStack_130._4_4_ = 0x15;
                  }
                  *(uint64_t *)pArr16_5[7] = 0;
                }
                (*(func_ptr_t )local_118._0_8_)(local_108._0_8_);
                local_138._4_4_ = 0;
                bFlag_3 = true;
              }
            }
          }
          else {
            lVal_16 = *(int64_t *)local_e8._8_8_ +
                     (uint64_t)*(uint *)(*(int64_t *)(local_e8._8_8_ + 0x20) + uVal_15 * 4);
            if ((((uint64_t)*(ushort *)(lVal_16 + 0x1c) == 0) ||
                (*(char *)(lVal_16 + 0x2d + (uint64_t)*(ushort *)(lVal_16 + 0x1c)) != '/')) &&
               ((*(byte *)(lVal_16 + 0x26) & 0x10) == 0)) goto LAB_18007779a;
            local_a8 = 0;
            local_a0 = &PTR_PTR_FUN_1806b00d8;
            func_0x180094a60(local_168);
            if (local_a8 != 0) goto LAB_180077b9f;
            bFlag_3 = false;
          }
          if (7 < local_150) {
            ptr7_U64_12 = local_168[0];
            if ((0xfff < local_150 * 2 + 2) &&
               (ptr7_U64_12 = (uint64_t *******)local_168[0][-1],
               (uint8_t *)0x1f <
               (uint8_t *)((int64_t)local_168[0] + (-8 - (int64_t)ptr7_U64_12))))
            goto LAB_180077b7c;
            thunk_FUN_180695dd0(ptr7_U64_12);
          }
        }
        else {
          ptr6_U64_11 = (uint64_t ******)local_88;
          if (0xf < (uint64_t)local_78._8_8_) {
            ptr6_U64_11 = (uint64_t ******)local_88._0_8_;
          }
          pU64_17 = (uint8_t *)((int64_t)ptr6_U64_11 + local_78._0_8_);
          pU64_18 = (uint8_t *)thunk_FUN_180676d20(ptr6_U64_11,pU64_17,&DAT_180760d18,2);
          bFlag_3 = false;
          if (pU64_18 == pU64_17 || (int64_t)pU64_18 - (int64_t)ptr6_U64_11 == -1) {
            goto LAB_1800775bb;
          }
        }
        if (0xf < (uint64_t)local_78._8_8_) {
          ptr6_U64_11 = (uint64_t ******)local_88._0_8_;
          if ((0xfff < local_78._8_8_ + 1) &&
             (ptr6_U64_11 = *(uint64_t *******)(local_88._0_8_ + -8),
             0x1f < (uint64_t)(local_88._0_8_ + (-8 - (int64_t)ptr6_U64_11))))
          goto LAB_180077b7c;
          thunk_FUN_180695dd0(ptr6_U64_11);
        }
        if (bFlag_3) {
          return 0;
        }
      }
      uVal_15 = (uint64_t)(uVal_14 + 1);
    }
    pArr16_5 = (uint8_t (*)[16])local_e8._8_8_;
    uVal_10 = CONCAT71((int7)(uVal_15 >> 8),1);
    if (((((uint8_t (*)[16])local_e8._8_8_ != (uint8_t (*)[16])0x0) && (local_128._8_8_ != 0))
        && ((func_ptr_t )local_118._0_8_ != (func_ptr_t )0x0)) && (local_138._4_4_ == 1)) {
      local_e8._8_8_ = 0;
      (*(func_ptr_t )local_118._0_8_)(local_108._0_8_,*(uint64_t *)*pArr16_5);
      pArr16_5[1] = ZEXT816(0);
      *pArr16_5 = ZEXT816(0);
      (*(func_ptr_t )local_118._0_8_)(local_108._0_8_,*(uint64_t *)pArr16_5[2]);
      pArr16_5[3] = ZEXT816(0);
      pArr16_5[2] = ZEXT816(0);
      (*(func_ptr_t )local_118._0_8_)(local_108._0_8_,*(uint64_t *)pArr16_5[4]);
      pArr16_5[5] = ZEXT816(0);
      pArr16_5[4] = ZEXT816(0);
      if (*(int64_t *)pArr16_5[7] != 0) {
        if (((int)uStack_130 == 4) && (iVal_6 = func_0x18068a690(), iVal_6 == -1)) {
          uStack_130._4_4_ = 0x15;
        }
        *(uint64_t *)pArr16_5[7] = 0;
      }
      (*(func_ptr_t )local_118._0_8_)(local_108._0_8_,pArr16_5);
    }
  }
  return uVal_10;
}

// Unwind@180077bc0
void Unwind_180077bc0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x538);
  return;
}

// Unwind@180077c10
void Unwind_180077c10(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x560);
  return;
}

// Unwind@180077c60
void Unwind_180077c60(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x560);
  return;
}

// Unwind@180077cb0
void Unwind_180077cb0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x4a0);
  return;
}

// Unwind@180077d00
void Unwind_180077d00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x580);
  return;
}

// func_0x180077d50
uint8_t (*func_0x180077d50(uint64_t *param_1,uint8_t (*param_2)[16]))[16]
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint8_t (*pArr16_8)[16];
  uint64_t uVal_9;
  
  pLong_1 = param_1 + 2;
  if (7 < (uint64_t)param_1[3]) {
    param_1 = (uint64_t *)*param_1;
  }
  lVal_6 = (int64_t)param_1 + *pLong_1 * 2;
  lVal_3 = func_0x180088fc0(param_1,lVal_6);
  do {
    lVal_5 = lVal_6;
    lVal_6 = lVal_3;
    if (lVal_5 == lVal_3) goto LAB_180077dbc;
  } while ((*(short *)(lVal_5 + -2) != 0x5c) && (lVal_6 = lVal_5 + -2, *(short *)(lVal_5 + -2) != 0x2f))
  ;
  do {
    if ((*(short *)(lVal_5 + -2) != 0x5c) && (lVal_6 = lVal_5, *(short *)(lVal_5 + -2) != 0x2f)) break;
    lVal_5 = lVal_5 + -2;
    lVal_6 = lVal_3;
  } while (lVal_5 != lVal_3);
LAB_180077dbc:
  lVal_6 = lVal_6 - (int64_t)param_1;
  uVal_9 = lVal_6 >> 1;
  *param_2 = ZEXT816(0);
  if (0x7ffffffffffffffe < uVal_9) {
    func_0x18007ba70();
    fnPtr_2 = (func_ptr_t )swi(3);
    pArr16_8 = (uint8_t (*)[16])(*fnPtr_2)();
    return pArr16_8;
  }
  uVal_7 = 7;
  pArr16_8 = param_2;
  if (7 < uVal_9) {
    uVal_4 = uVal_9 | 7;
    uVal_7 = 10;
    if (10 < uVal_4) {
      uVal_7 = uVal_4;
    }
    if (uVal_4 < 0x7ff) {
      pArr16_8 = (uint8_t (*)[16])func_0x180672de0(uVal_7 * 2 + 2);
    }
    else {
      lVal_3 = func_0x180672de0(uVal_7 * 2 + 0x29);
      pArr16_8 = (uint8_t (*)[16])(lVal_3 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pArr16_8[-1] + 8) = lVal_3;
    }
    *(uint8_t (**)[16])*param_2 = pArr16_8;
  }
  *(uint64_t *)param_2[1] = uVal_9;
  *(uint64_t *)(param_2[1] + 8) = uVal_7;
  func_0x1806aa960(pArr16_8,param_1,lVal_6);
  *(uint16_t *)((int64_t)pArr16_8 + lVal_6) = 0;
  return param_2;
}

// func_0x180077e70
uint64_t func_0x180077e70(int64_t param_1,uint param_2,uint64_t param_3,uint32_t param_4)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  int iVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint8_t auStack_4c8 [32];
  uint64_t local_4a8;
  uint64_t local_498;
  uint64_t local_490;
  uint8_t local_488 [68];
  int local_444;
  int local_43c;
  uint64_t local_38;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_4c8;
  uVal_5 = 0;
  uVal_6 = 0;
  if (((param_1 == 0) || (pLong_1 = *(int64_t **)(param_1 + 0x68), pLong_1 == (int64_t *)0x0)) ||
     (*(uint *)(param_1 + 0x10) <= param_2)) {
    lVal_7 = 0;
  }
  else {
    lVal_7 = (uint64_t)*(uint *)(pLong_1[4] + (uint64_t)param_2 * 4) + *pLong_1;
  }
  local_4a8 = 0;
  iVal_3 = func_0x18007b630(param_1,param_2,lVal_7,local_488);
  if (iVal_3 != 0) {
    if ((local_444 == 0) && (local_43c != 0)) {
      lVal_7 = func_0x18007add0(param_3,&DAT_180760248);
      if (lVal_7 == 0) {
        uVal_5 = uVal_6;
        if (param_1 != 0) {
          *(uint32_t *)(param_1 + 0x1c) = 0x11;
        }
      }
      else {
        local_4a8 = CONCAT44(local_4a8._4_4_,param_4);
        iVal_3 = func_0x18007af90(param_1,param_2,&LAB_18007b610,lVal_7);
        iVal_4 = func_0x18068a690(lVal_7);
        if (iVal_4 == -1) {
          if ((param_1 != 0) && (uVal_5 = uVal_6, iVal_3 != 0)) {
            *(uint32_t *)(param_1 + 0x1c) = 0x15;
          }
        }
        else if (iVal_3 != 0) {
          local_498 = local_38;
          local_490 = local_38;
          func_0x180686f30(param_3,&local_498);
          uVal_5 = 1;
        }
      }
    }
    else {
      uVal_5 = uVal_6;
      if (param_1 != 0) {
        *(uint32_t *)(param_1 + 0x1c) = 6;
      }
    }
  }
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_4c8)) {
    return uVal_5;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_4c8);
  fnPtr_2 = (func_ptr_t )swi(3);
  uVal_5 = (*fnPtr_2)();
  return uVal_5;
}

// func_0x180077fd0
uint func_0x180077fd0(uint param_1,byte *param_2,uint64_t param_3)
{
  uint uVal_1;
  
  param_1 = ~param_1;
  if (3 < param_3) {
    do {
      uVal_1 = param_1 >> 8 ^
              *(uint *)(&DAT_1806af2a0 + (uint64_t)(byte)((byte)param_1 ^ *param_2) * 4);
      uVal_1 = uVal_1 >> 8 ^
              *(uint *)(&DAT_1806af2a0 + (uint64_t)(byte)((byte)uVal_1 ^ param_2[1]) * 4);
      uVal_1 = uVal_1 >> 8 ^
              *(uint *)(&DAT_1806af2a0 + (uint64_t)(byte)((byte)uVal_1 ^ param_2[2]) * 4);
      param_1 = uVal_1 >> 8 ^
                *(uint *)(&DAT_1806af2a0 + (uint64_t)(byte)((byte)uVal_1 ^ param_2[3]) * 4);
      param_2 = param_2 + 4;
      param_3 = param_3 - 4;
    } while (3 < param_3);
  }
  if (((param_3 != 0) &&
      (param_1 = param_1 >> 8 ^
                 *(uint *)(&DAT_1806af2a0 + (uint64_t)(byte)((byte)param_1 ^ *param_2) * 4),
      param_3 != 1)) &&
     (param_1 = param_1 >> 8 ^
                *(uint *)(&DAT_1806af2a0 + (uint64_t)(byte)((byte)param_1 ^ param_2[1]) * 4),
     param_3 != 2)) {
    param_1 = param_1 >> 8 ^
              *(uint *)(&DAT_1806af2a0 + (uint64_t)(byte)((byte)param_1 ^ param_2[2]) * 4);
  }
  return ~param_1;
}

// func_0x1800780b0
void func_0x1800780b0(uint64_t param_1,uint64_t param_2)
{
  thunk_FUN_180695dd0(param_2);
  return;
}

// func_0x1800780d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x1800780d0(uint32_t *param_1,uint *param_2,int64_t *param_3,byte *param_4, byte *param_5,uint64_t *param_6,uint param_7)
{
  short sz_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  uint uVal_7;
  byte *pU8_8;
  uint64_t uVal_9;
  byte bFlag_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  byte *pU8_14;
  uint64_t uVal_15;
  uint8_t uVal_16;
  uint *pU64_17;
  int iVal_18;
  uint uVal_19;
  uint uVal_20;
  byte *pU8_21;
  byte *pU8_22;
  uint64_t uVal_23;
  uint uVal_24;
  uint uVal_25;
  uint8_t (*pArr16_26)[16];
  uint uVal_27;
  int iVal_28;
  int iVal_29;
  int iVal_30;
  uint uVal_31;
  uint32_t uVal_32;
  uint64_t uVal_33;
  uint64_t uVal_34;
  uint uVal_35;
  int iVal_36;
  int iVal_37;
  int iVal_38;
  int iVal_39;
  uint *pU64_40;
  int64_t lVal_41;
  bool bFlag_42;
  bool bFlag_43;
  uint8_t auStack_218 [36];
  uint local_1f4;
  uint64_t local_1f0;
  uint *local_1e8;
  byte *local_1e0;
  byte *local_1d8;
  uint32_t *local_1d0;
  byte *local_1c8;
  uint8_t (*local_1c0)[16];
  uint8_t (*local_1b8)[16];
  byte *local_1b0;
  uint64_t local_1a8;
  uint *local_1a0;
  uint64_t local_198;
  uint64_t local_190;
  uint64_t local_188;
  uint64_t local_180;
  uint64_t local_178;
  uint64_t local_170;
  uint64_t local_168;
  uint32_t *local_160;
  uint8_t (*local_158)[16];
  uint8_t (*local_150)[16];
  uint32_t *local_148;
  uint8_t (*local_140)[16];
  uint8_t (*local_138)[16];
  int64_t *local_130;
  uint8_t local_128 [8];
  uint uStack_120;
  uint uStack_11c;
  uint8_t local_118 [8];
  int iStack_110;
  int iStack_10c;
  uint8_t local_108 [8];
  uint uStack_100;
  uint uStack_fc;
  uint8_t local_f8 [8];
  int iStack_f0;
  int iStack_ec;
  uint64_t local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  uint8_t (*local_98 [4])[16];
  uint8_t (*local_78 [3])[16];
  uint64_t local_60;
  
  local_60 = DAT_18083cf40 ^ (uint64_t)auStack_218;
  if (param_5 == (byte *)0x0) {
    local_1d8 = (byte *)0x0;
    pU8_8 = local_1d8;
  }
  else {
    pU8_8 = param_5 + *param_6;
  }
  pU8_21 = (byte *)0xffffffffffffffff;
  if ((param_7 & 4) == 0) {
    pU8_21 = param_5 + *param_6 + ~(uint64_t)param_4;
  }
  local_1d8 = pU8_8;
  if ((param_5 < param_4) || (((uint64_t)(pU8_21 + 1) & (uint64_t)pU8_21) != 0)) {
    *param_6 = 0;
    *param_3 = 0;
    uVal_9 = 0xfffffffd;
    goto LAB_18007a1e2;
  }
  lVal_41 = *param_3;
  local_1b8 = (uint8_t (*)[16])(param_1 + 0x612);
  local_78[0] = local_1b8;
  local_150 = (uint8_t (*)[16])(param_1 + 0x732);
  local_78[1] = local_150;
  local_1c0 = (uint8_t (*)[16])(param_1 + 0x752);
  local_78[2] = local_1c0;
  local_140 = (uint8_t (*)[16])(param_1 + 0x765);
  local_98[0] = local_140;
  local_148 = param_1 + 0x7ad;
  local_98[1] = (uint8_t (*)[16])local_148;
  local_138 = (uint8_t (*)[16])(param_1 + 0x7b5);
  local_98[2] = local_138;
  uVal_32 = *param_1;
  uVal_25 = param_1[1];
  uVal_23 = *(uint64_t *)(param_1 + 0xe);
  uVal_15 = (uint64_t)(uint)param_1[8];
  uVal_27 = param_1[9];
  uVal_12 = param_1[10];
  local_198 = *(uint64_t *)(param_1 + 0x10);
  uVal_9 = 0xffffffff;
  pU64_17 = (uint *)((int64_t)param_2 + lVal_41);
  pU8_22 = param_5;
  pU64_40 = param_2;
  local_1f4 = uVal_12;
  local_1f0 = uVal_15;
  local_1e8 = pU64_17;
  local_1a0 = param_2;
  local_130 = param_3;
  switch(uVal_32) {
  case 0:
    *(uint64_t *)(param_1 + 3) = 0x100000000;
    param_1[2] = 0;
    param_1[7] = 1;
    uVal_23 = 0;
    local_1f4 = 0;
    uVal_27 = 0;
    uVal_15 = 0;
    uVal_25 = 0;
    if ((param_7 & 1) == 0) {
      uVal_12 = 0;
      uVal_27 = 0;
      uVal_15 = 0;
      local_1e0 = pU8_21;
      goto LAB_180078755;
    }
    goto LAB_18007848a;
  case 1:
LAB_18007848a:
    if (lVal_41 == 0) {
      *param_1 = 1;
      uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
      uVal_12 = local_1f4;
    }
    else {
      pU64_40 = (uint *)((int64_t)param_2 + 1);
      param_1[2] = (uint)*(byte *)param_2;
LAB_18007849e:
      uVal_12 = local_1f4;
      if (pU64_40 < pU64_17) {
        bFlag_10 = *(byte *)pU64_40;
        uVal_27 = param_1[2];
        param_1[3] = (uint)bFlag_10;
        bFlag_42 = (uVal_27 & 0xf ^ 8 | bFlag_10 & 0x20 | (uVal_27 << 8 | (uint)bFlag_10) % 0x1f) != 0;
        if ((param_7 & 4) == 0) {
          bFlag_43 = true;
          if (uVal_27 < 0x80) {
            bFlag_43 = (uint64_t)(pU8_21 + 1) >> ((byte)(uVal_27 >> 4) & 0x3f | 8) == 0;
          }
          bFlag_42 = (bool)(bFlag_42 | bFlag_43);
        }
        local_1f0 = uVal_15;
        if (!bFlag_42) {
          uVal_27 = 0;
          param_2 = (uint *)((int64_t)pU64_40 + 1U);
          local_1e0 = pU8_21;
LAB_180078755:
          do {
            uVal_9 = uVal_23;
            pU64_40 = param_2;
            uVal_13 = uVal_25;
            if (uVal_25 < 3) {
LAB_180078764:
              uVal_23 = uVal_9;
              pU64_40 = param_2;
              uVal_13 = uVal_25;
              if (local_1e8 <= param_2) {
LAB_180078988:
                uVal_25 = uVal_13;
                *param_1 = 3;
                uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
                goto LAB_180079f99;
              }
              pU64_40 = (uint *)((int64_t)param_2 + 1);
              uVal_23 = (uint64_t)*(byte *)param_2 << ((byte)uVal_25 & 0x3f) | uVal_9;
              uVal_13 = uVal_25 + 8;
              if (uVal_13 < 3) {
                if (local_1e8 <= pU64_40) goto LAB_180078988;
                pU64_40 = (uint *)((int64_t)param_2 + 2);
                uVal_23 = (uint64_t)*(byte *)((int64_t)param_2 + 1) << ((byte)uVal_13 & 0x3f) |
                         uVal_9;
                uVal_13 = uVal_25 + 0x10;
              }
            }
            uVal_7 = (uint)uVal_23 & 7;
            param_1[5] = uVal_7;
            uVal_23 = uVal_23 >> 3;
            uVal_25 = uVal_13 - 3;
            param_1[6] = uVal_7 >> 1;
            switch(uVal_7) {
            case 2:
            case 3:
              goto switchD_1800787d6_caseD_2;
            case 4:
            case 5:
              uVal_27 = 0;
              local_1f4 = uVal_12;
              local_1f0 = uVal_15;
              do {
                uVal_9 = (uint64_t)uVal_27;
                bFlag_10 = (&DAT_180761122)[uVal_9];
                uVal_12 = (uint)(char)bFlag_10;
                if (uVal_25 < uVal_12) {
LAB_180078c1b:
                  uVal_9 = (uint64_t)uVal_27;
                  do {
                    if (local_1e8 <= pU64_40) {
                      *param_1 = 0xb;
                      uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
                      uVal_15 = local_1f0;
                      uVal_12 = local_1f4;
                      goto LAB_180079f99;
                    }
                    bFlag_10 = *(byte *)pU64_40;
                    pU64_40 = (uint *)((int64_t)pU64_40 + 1);
                    uVal_23 = uVal_23 | (uint64_t)bFlag_10 << ((byte)uVal_25 & 0x3f);
                    uVal_25 = uVal_25 + 8;
                    bFlag_10 = (&DAT_180761122)[uVal_9];
                    uVal_12 = (uint)(char)bFlag_10;
                  } while (uVal_25 < uVal_12);
                }
                uVal_33 = uVal_23 >> ((byte)uVal_12 & 0x3f);
                uVal_25 = uVal_25 - uVal_12;
                param_1[uVal_9 + 0xb] =
                     (uint)(ushort)(&DAT_1806af760)[uVal_9] +
                     ((uint)uVal_23 & ~(-1 << (bFlag_10 & 0x1f)));
                uVal_27 = uVal_27 + 1;
                uVal_23 = uVal_33;
              } while (uVal_27 < 3);
              *local_138 = (uint8_t  [16])0x0;
              *(uint32_t *)(*local_138 + 0xf) = 0;
              uVal_27 = 0;
              uVal_15 = local_1f0;
              if (param_1[0xd] == 0) goto LAB_18007882e;
              while (uVal_9 = uVal_23, param_2 = pU64_40, uVal_12 = uVal_25, 2 < uVal_25) {
LAB_180078d04:
                uVal_33 = uVal_23 >> 3;
                uVal_25 = uVal_12 - 3;
                (*local_138)[(byte)(&DAT_1806b0940)[uVal_27]] = (byte)uVal_23 & 7;
                uVal_27 = uVal_27 + 1;
                uVal_23 = uVal_33;
                if ((uint)param_1[0xd] <= uVal_27) {
LAB_18007882e:
                  param_1[0xd] = 0x13;
                  uVal_13 = param_1[6];
                  uVal_23 = uVal_33;
                  param_2 = pU64_40;
                  uVal_12 = local_1f4;
                  goto joined_r0x000180078850;
                }
              }
LAB_180078cbe:
              uVal_23 = uVal_9;
              pU64_40 = param_2;
              uVal_12 = uVal_25;
              if (param_2 < local_1e8) {
                pU64_40 = (uint *)((int64_t)param_2 + 1);
                uVal_23 = (uint64_t)*(byte *)param_2 << ((byte)uVal_25 & 0x3f) | uVal_9;
                uVal_12 = uVal_25 + 8;
                if (uVal_12 < 3) {
                  if (local_1e8 <= pU64_40) goto LAB_180078d40;
                  pU64_40 = (uint *)((int64_t)param_2 + 2);
                  uVal_23 = uVal_9 | (uint64_t)*(byte *)((int64_t)param_2 + 1) <<
                                   ((byte)uVal_12 & 0x3f);
                  uVal_12 = uVal_25 + 0x10;
                }
                goto LAB_180078d04;
              }
LAB_180078d40:
              uVal_25 = uVal_12;
              *param_1 = 0xe;
              uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
              uVal_12 = local_1f4;
              goto LAB_180079f99;
            case 6:
            case 7:
              uVal_9 = 0xffffffff;
              uVal_32 = 10;
              local_1f0 = uVal_15;
              goto LAB_180078251;
            }
switchD_1800787d6_caseD_0:
            param_2 = pU64_40;
            uVal_23 = uVal_23 >> ((byte)uVal_25 & 7);
            uVal_25 = uVal_25 & 0xfffffff8;
            uVal_27 = 0;
            pU64_17 = local_1e8;
            while (uVal_27 < 4) {
              if (uVal_25 == 0) {
                uVal_25 = 0;
LAB_180078a4f:
                if (pU64_17 <= param_2) {
                  *param_1 = 7;
                  uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
                  pU64_40 = param_2;
                  goto LAB_180079f99;
                }
                bFlag_10 = *(byte *)param_2;
                param_2 = (uint *)((int64_t)param_2 + 1);
                *(byte *)((int64_t)param_1 + (uint64_t)uVal_27 + 0x1ee7) = bFlag_10;
                uVal_27 = uVal_27 + 1;
              }
              else {
                uVal_13 = uVal_25;
                if (uVal_25 < 8) {
LAB_1800789c0:
                  do {
                    if (pU64_17 <= param_2) {
                      *param_1 = 6;
                      uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
                      pU64_40 = param_2;
                      goto LAB_180079f99;
                    }
                    bFlag_10 = *(byte *)param_2;
                    param_2 = (uint *)((int64_t)param_2 + 1);
                    uVal_23 = uVal_23 | (uint64_t)bFlag_10 << ((byte)uVal_25 & 0x3f);
                    uVal_13 = uVal_25 + 8;
                    bFlag_42 = 0xfffffff7 < uVal_25;
                    uVal_25 = uVal_13;
                  } while (bFlag_42);
                }
                *(char *)((int64_t)param_1 + (uint64_t)uVal_27 + 0x1ee7) = (char)uVal_23;
                uVal_23 = uVal_23 >> 8;
                uVal_25 = uVal_13 - 8;
                uVal_27 = uVal_27 + 1;
              }
            }
            uVal_27 = (uint)*(ushort *)((int64_t)param_1 + 0x1ee7);
            if ((*(ushort *)((int64_t)param_1 + 0x1ee9) ^ *(ushort *)((int64_t)param_1 + 0x1ee7))
                != 0xffff) {
              uVal_9 = 0xffffffff;
              uVal_32 = 0x27;
              pU64_40 = param_2;
              local_1f0 = uVal_15;
              goto LAB_180078251;
            }
            while ((uVal_9 = local_1f0, uVal_27 != 0 && (uVal_25 != 0))) {
              uVal_13 = uVal_25;
              if (uVal_25 < 8) {
LAB_180078ab0:
                do {
                  if (pU64_17 <= param_2) {
                    *param_1 = 0x33;
                    uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
                    pU64_40 = param_2;
                    goto LAB_180079f99;
                  }
                  bFlag_10 = *(byte *)param_2;
                  param_2 = (uint *)((int64_t)param_2 + 1);
                  uVal_23 = uVal_23 | (uint64_t)bFlag_10 << ((byte)uVal_25 & 0x3f);
                  uVal_13 = uVal_25 + 8;
                  bFlag_42 = 0xfffffff7 < uVal_25;
                  uVal_25 = uVal_13;
                } while (bFlag_42);
              }
              uVal_15 = uVal_23 & 0xff;
              uVal_23 = uVal_23 >> 8;
              uVal_25 = uVal_13 - 8;
LAB_180078ae1:
              if (local_1d8 <= pU8_22) {
                uVal_9 = 2;
                uVal_32 = 0x34;
                pU64_40 = param_2;
                local_1f0 = uVal_15;
                goto LAB_180078251;
              }
              *pU8_22 = (byte)uVal_15;
              pU8_22 = pU8_22 + 1;
              uVal_27 = uVal_27 - 1;
            }
            while (local_1f0 = uVal_15, local_1d0 = param_1, uVal_27 != 0) {
LAB_180078b5f:
              local_1f4 = uVal_12;
              if (local_1d8 <= pU8_22) {
                uVal_9 = 2;
                uVal_32 = 9;
                pU64_40 = param_2;
                uVal_12 = local_1f4;
                goto LAB_180078251;
              }
LAB_180078b72:
              if (local_1e8 <= param_2) {
                *param_1 = 0x26;
                uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
                uVal_15 = local_1f0;
                pU64_40 = param_2;
                uVal_12 = local_1f4;
                goto LAB_180079f99;
              }
              uVal_9 = (int64_t)local_1e8 - (int64_t)param_2;
              if ((uint64_t)((int64_t)local_1d8 - (int64_t)pU8_22) <
                  (uint64_t)((int64_t)local_1e8 - (int64_t)param_2)) {
                uVal_9 = (int64_t)local_1d8 - (int64_t)pU8_22;
              }
              if (uVal_27 <= uVal_9) {
                uVal_9 = (uint64_t)uVal_27;
              }
              local_1d0 = param_1;
              local_1c8 = pU8_22;
              func_0x1806aa960(pU8_22,param_2,uVal_9);
              param_2 = (uint *)((int64_t)param_2 + uVal_9);
              pU8_22 = local_1c8 + uVal_9;
              uVal_27 = uVal_27 - (int)uVal_9;
              uVal_15 = local_1f0;
              param_1 = local_1d0;
              uVal_12 = local_1f4;
              uVal_9 = local_1f0;
            }
            uVal_27 = 0;
            local_1f0 = uVal_9;
          } while ((*(byte *)(param_1 + 5) & 1) == 0);
          goto LAB_1800799fe;
        }
        uVal_9 = 0xffffffff;
        uVal_27 = 1;
        uVal_32 = 0x24;
        pU8_22 = param_5;
        pU64_40 = (uint *)((int64_t)pU64_40 + 1U);
        goto LAB_180078251;
      }
      *param_1 = 2;
      uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
    }
    break;
  case 2:
    goto LAB_18007849e;
  case 3:
    uVal_9 = uVal_23;
    local_1e0 = pU8_21;
    goto LAB_180078764;
  case 5:
    if (lVal_41 != 0) {
      uVal_23 = uVal_23 | (uint64_t)*(byte *)param_2 << ((byte)uVal_25 & 0x3f);
      uVal_25 = uVal_25 + 8;
      pU64_40 = (uint *)((int64_t)param_2 + 1);
      local_1e0 = pU8_21;
      goto switchD_1800787d6_caseD_0;
    }
    *param_1 = 5;
LAB_18007872b:
    uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
    break;
  case 6:
    local_1e0 = pU8_21;
    goto LAB_1800789c0;
  case 7:
    local_1e0 = pU8_21;
    goto LAB_180078a4f;
  case 9:
    local_1e0 = pU8_21;
    goto LAB_180078b5f;
  case 10:
  case 0x11:
  case 0x15:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x27:
    goto LAB_180078251;
  case 0xb:
    local_1e0 = pU8_21;
    goto LAB_180078c1b;
  case 0xe:
    uVal_9 = uVal_23;
    local_1e0 = pU8_21;
    goto LAB_180078cbe;
  case 0x10:
    pArr16_26 = (uint8_t (*)[16])(param_1 + 0x752);
    local_1e0 = pU8_21;
    goto LAB_18007958b;
  case 0x12:
    local_1e0 = pU8_21;
    goto LAB_180079660;
  case 0x17:
    pArr16_26 = (uint8_t (*)[16])(param_1 + 0x612);
    local_1e0 = pU8_21;
    goto LAB_18007994b;
  case 0x18:
    pArr16_26 = (uint8_t (*)[16])(param_1 + 0x612);
    local_1e0 = pU8_21;
    goto LAB_180079a80;
  case 0x19:
    local_1e0 = pU8_21;
    goto LAB_180079ae0;
  case 0x1a:
    local_1e0 = pU8_21;
    goto LAB_180079c29;
  case 0x1b:
    local_1e0 = pU8_21;
    goto LAB_180079ccd;
  case 0x20:
    if (lVal_41 == 0) {
      *param_1 = 0x20;
      goto LAB_18007872b;
    }
    uVal_23 = uVal_23 | (uint64_t)*(byte *)param_2 << ((byte)uVal_25 & 0x3f);
    uVal_25 = uVal_25 + 8;
    param_2 = (uint *)((int64_t)param_2 + 1);
LAB_1800799fe:
    uVal_13 = uVal_25 & 0xfffffff8;
    if ((local_1a0 < param_2) && (uVal_13 != 0)) {
      pU8_21 = (byte *)(uint64_t)(uVal_13 - 8 >> 3);
      pU8_8 = (byte *)(~(uint64_t)local_1a0 + (int64_t)param_2);
      if (pU8_21 < (byte *)(~(uint64_t)local_1a0 + (int64_t)param_2)) {
        pU8_8 = pU8_21;
      }
      param_2 = (uint *)((int64_t)param_2 + ~(uint64_t)pU8_8);
      uVal_13 = (uVal_13 - 8) + (int)pU8_8 * -8;
    }
    uVal_23 = uVal_23 >> ((byte)uVal_25 & 7) & ~(-1L << ((byte)uVal_13 & 0x3f));
    uVal_32 = 0x22;
    uVal_9 = 0;
    pU64_17 = local_1e8;
    pU64_40 = param_2;
    uVal_25 = uVal_13;
    local_1f0 = uVal_15;
    uVal_7 = 0;
    if ((param_7 & 1) != 0) {
      while (uVal_27 = uVal_7, uVal_27 < 4) {
        uVal_25 = 0;
        if (uVal_13 == 0) {
LAB_18007a21c:
          if (pU64_17 <= param_2) {
            *param_1 = 0x2a;
            uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
            uVal_15 = local_1f0;
            pU64_40 = param_2;
            goto LAB_180079f99;
          }
          uVal_7 = (uint)*(byte *)param_2;
          param_2 = (uint *)((int64_t)param_2 + 1);
        }
        else {
          uVal_25 = uVal_13;
          if (uVal_13 < 8) {
LAB_180079f40:
            do {
              if (pU64_17 <= param_2) {
                *param_1 = 0x29;
                uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
                uVal_15 = local_1f0;
                pU64_40 = param_2;
                goto LAB_180079f99;
              }
              bFlag_10 = *(byte *)param_2;
              param_2 = (uint *)((int64_t)param_2 + 1);
              uVal_23 = uVal_23 | (uint64_t)bFlag_10 << ((byte)uVal_25 & 0x3f);
              uVal_13 = uVal_25 + 8;
              bFlag_42 = 0xfffffff7 < uVal_25;
              uVal_25 = uVal_13;
            } while (bFlag_42);
          }
          uVal_7 = (uint)uVal_23 & 0xff;
          uVal_23 = uVal_23 >> 8;
          uVal_25 = uVal_13 - 8;
        }
        param_1[4] = param_1[4] << 8 | uVal_7;
        uVal_13 = uVal_25;
        uVal_7 = uVal_27 + 1;
      }
      uVal_9 = 0;
      uVal_32 = 0x22;
      pU64_40 = param_2;
      uVal_25 = uVal_13;
    }
    goto LAB_180078251;
  case 0x22:
    uVal_9 = 0;
LAB_180078251:
    *param_1 = uVal_32;
    uVal_15 = local_1f0;
    if ((local_1a0 < pU64_40) && (7 < uVal_25)) {
      pU8_21 = (byte *)(uint64_t)(uVal_25 - 8 >> 3);
      pU8_8 = (byte *)(~(uint64_t)local_1a0 + (int64_t)pU64_40);
      if (pU8_21 < (byte *)(~(uint64_t)local_1a0 + (int64_t)pU64_40)) {
        pU8_8 = pU8_21;
      }
      pU64_40 = (uint *)((int64_t)pU64_40 + ~(uint64_t)pU8_8);
      uVal_25 = (uVal_25 - 8) + (int)pU8_8 * -8;
    }
    break;
  case 0x26:
    local_1e0 = pU8_21;
    goto LAB_180078b72;
  case 0x29:
    goto LAB_180079f40;
  case 0x2a:
    goto LAB_18007a21c;
  case 0x33:
    local_1e0 = pU8_21;
    goto LAB_180078ab0;
  case 0x34:
    local_1e0 = pU8_21;
    goto LAB_180078ae1;
  case 0x35:
    uVal_12 = uVal_27;
    local_1e0 = pU8_21;
    goto LAB_180079eba;
  }
LAB_180079f99:
  param_1[1] = uVal_25;
  *(uint64_t *)(param_1 + 0xe) = ~(-1L << ((byte)uVal_25 & 0x3f)) & uVal_23;
  param_1[8] = (int)uVal_15;
  param_1[9] = uVal_27;
  param_1[10] = uVal_12;
  *(uint64_t *)(param_1 + 0x10) = local_198;
  *local_130 = (int64_t)pU64_40 - (int64_t)local_1a0;
  uVal_23 = (int64_t)pU8_22 - (int64_t)param_5;
  *param_6 = uVal_23;
  if (((param_7 & 9) != 0) && (-1 < (int)uVal_9)) {
    uVal_27 = param_1[7] & 0xffff;
    uVal_25 = (uint)param_1[7] >> 0x10;
    if (uVal_23 != 0) {
      uVal_15 = uVal_23 % 0x15b0;
      do {
        uVal_33 = 0;
        uVal_34 = uVal_33;
        if (7 < uVal_15) {
          do {
            iVal_36 = param_5[uVal_33] + uVal_27;
            iVal_28 = (uint)param_5[uVal_33 + 1] + iVal_36;
            iVal_37 = (uint)param_5[uVal_33 + 2] + iVal_28;
            iVal_29 = (uint)param_5[uVal_33 + 3] + iVal_37;
            iVal_38 = (uint)param_5[uVal_33 + 4] + iVal_29;
            iVal_30 = (uint)param_5[uVal_33 + 5] + iVal_38;
            iVal_39 = (uint)param_5[uVal_33 + 6] + iVal_30;
            uVal_27 = (uint)param_5[uVal_33 + 7] + iVal_39;
            uVal_25 = uVal_25 + iVal_36 + iVal_28 + iVal_37 + iVal_29 + iVal_38 + iVal_30 + iVal_39 + uVal_27;
            uVal_34 = uVal_33 + 8;
            iVal_28 = (int)uVal_33;
            uVal_33 = uVal_34;
          } while (iVal_28 + 0xfU < (uint)uVal_15);
          param_5 = param_5 + uVal_34;
        }
        if (uVal_34 <= uVal_15 && uVal_15 - uVal_34 != 0) {
          pU8_8 = param_5;
          uVal_33 = uVal_34;
          if ((uVal_15 & 3) != 0) {
            lVal_41 = 0;
            do {
              bFlag_10 = *pU8_8;
              pU8_8 = pU8_8 + 1;
              uVal_27 = uVal_27 + bFlag_10;
              uVal_25 = uVal_25 + uVal_27;
              lVal_41 = lVal_41 + -1;
            } while (-lVal_41 != (uint64_t)((uint)uVal_15 & 3));
            uVal_33 = uVal_34 - lVal_41;
          }
          if (uVal_34 - uVal_15 < 0xfffffffffffffffd) {
            lVal_41 = 0;
            do {
              iVal_28 = pU8_8[lVal_41] + uVal_27;
              iVal_30 = (uint)pU8_8[lVal_41 + 1] + iVal_28;
              iVal_29 = (uint)pU8_8[lVal_41 + 2] + iVal_30;
              uVal_27 = (uint)pU8_8[lVal_41 + 3] + iVal_29;
              uVal_25 = uVal_25 + iVal_28 + iVal_30 + iVal_29 + uVal_27;
              lVal_41 = lVal_41 + 4;
            } while (uVal_15 - uVal_33 != lVal_41);
          }
          param_5 = param_5 + (uVal_15 - uVal_34);
        }
        uVal_27 = uVal_27 % 0xfff1;
        uVal_25 = uVal_25 % 0xfff1;
        uVal_23 = uVal_23 - uVal_15;
        uVal_15 = 0x15b0;
      } while (uVal_23 != 0);
    }
    uVal_27 = uVal_25 << 0x10 | uVal_27;
    param_1[7] = uVal_27;
    if (((int)uVal_9 == 0) && (uVal_9 = 0, (param_7 & 1) != 0)) {
      uVal_9 = (uint64_t)((uint)(uVal_27 == param_1[4]) * 2 - 2);
    }
  }
LAB_18007a1e2:
  if (DAT_18083cf40 == (local_60 ^ (uint64_t)auStack_218)) {
    return uVal_9;
  }
  func_0x180673080(local_60 ^ (uint64_t)auStack_218);
  fnPtr_2 = (func_ptr_t )swi(3);
  uVal_9 = (*fnPtr_2)();
  return uVal_9;
switchD_1800787d6_caseD_2:
  *(uint64_t *)(param_1 + 0xb) = 0x2000000120;
  uVal_5 = _UNK_1806aeb4c;
  uVal_4 = _UNK_1806aeb48;
  uVal_3 = _UNK_1806aeb44;
  uVal_32 = _DAT_1806aeb40;
  local_148[4] = _DAT_1806aeb40;
  local_148[5] = uVal_3;
  local_148[6] = uVal_4;
  local_148[7] = uVal_5;
  *local_148 = uVal_32;
  local_148[1] = uVal_3;
  local_148[2] = uVal_4;
  local_148[3] = uVal_5;
  uVal_5 = _UNK_1806aeb5c;
  uVal_4 = _UNK_1806aeb58;
  uVal_3 = _UNK_1806aeb54;
  uVal_32 = _DAT_1806aeb50;
  *(uint32_t *)local_140[8] = _DAT_1806aeb50;
  *(uint32_t *)((int64_t)local_140[8] + 4) = uVal_3;
  *(uint32_t *)((int64_t)local_140[8] + 8) = uVal_4;
  *(uint32_t *)((int64_t)local_140[8] + 0xc) = uVal_5;
  *(uint32_t *)local_140[7] = uVal_32;
  *(uint32_t *)((int64_t)local_140[7] + 4) = uVal_3;
  *(uint32_t *)((int64_t)local_140[7] + 8) = uVal_4;
  *(uint32_t *)((int64_t)local_140[7] + 0xc) = uVal_5;
  *(uint32_t *)local_140[6] = uVal_32;
  *(uint32_t *)((int64_t)local_140[6] + 4) = uVal_3;
  *(uint32_t *)((int64_t)local_140[6] + 8) = uVal_4;
  *(uint32_t *)((int64_t)local_140[6] + 0xc) = uVal_5;
  *(uint32_t *)local_140[5] = uVal_32;
  *(uint32_t *)((int64_t)local_140[5] + 4) = uVal_3;
  *(uint32_t *)((int64_t)local_140[5] + 8) = uVal_4;
  *(uint32_t *)((int64_t)local_140[5] + 0xc) = uVal_5;
  *(uint32_t *)local_140[4] = uVal_32;
  *(uint32_t *)((int64_t)local_140[4] + 4) = uVal_3;
  *(uint32_t *)((int64_t)local_140[4] + 8) = uVal_4;
  *(uint32_t *)((int64_t)local_140[4] + 0xc) = uVal_5;
  *(uint32_t *)local_140[3] = uVal_32;
  *(uint32_t *)((int64_t)local_140[3] + 4) = uVal_3;
  *(uint32_t *)((int64_t)local_140[3] + 8) = uVal_4;
  *(uint32_t *)((int64_t)local_140[3] + 0xc) = uVal_5;
  *(uint32_t *)local_140[2] = uVal_32;
  *(uint32_t *)((int64_t)local_140[2] + 4) = uVal_3;
  *(uint32_t *)((int64_t)local_140[2] + 8) = uVal_4;
  *(uint32_t *)((int64_t)local_140[2] + 0xc) = uVal_5;
  *(uint32_t *)local_140[1] = uVal_32;
  *(uint32_t *)((int64_t)local_140[1] + 4) = uVal_3;
  *(uint32_t *)((int64_t)local_140[1] + 8) = uVal_4;
  *(uint32_t *)((int64_t)local_140[1] + 0xc) = uVal_5;
  *(uint32_t *)*local_140 = uVal_32;
  *(uint32_t *)((int64_t)*local_140 + 4) = uVal_3;
  *(uint32_t *)((int64_t)*local_140 + 8) = uVal_4;
  *(uint32_t *)((int64_t)*local_140 + 0xc) = uVal_5;
  uVal_5 = _UNK_1806aeb6c;
  uVal_4 = _UNK_1806aeb68;
  uVal_3 = _UNK_1806aeb64;
  uVal_32 = _DAT_1806aeb60;
  param_1[0x7a1] = _DAT_1806aeb60;
  param_1[0x7a2] = uVal_3;
  param_1[0x7a3] = uVal_4;
  param_1[0x7a4] = uVal_5;
  param_1[0x79d] = uVal_32;
  param_1[0x79e] = uVal_3;
  param_1[0x79f] = uVal_4;
  param_1[0x7a0] = uVal_5;
  param_1[0x799] = uVal_32;
  param_1[0x79a] = uVal_3;
  param_1[0x79b] = uVal_4;
  param_1[0x79c] = uVal_5;
  param_1[0x795] = uVal_32;
  param_1[0x796] = uVal_3;
  param_1[0x797] = uVal_4;
  param_1[0x798] = uVal_5;
  param_1[0x791] = uVal_32;
  param_1[0x792] = uVal_3;
  param_1[0x793] = uVal_4;
  param_1[0x794] = uVal_5;
  param_1[0x78d] = uVal_32;
  param_1[0x78e] = uVal_3;
  param_1[0x78f] = uVal_4;
  param_1[0x790] = uVal_5;
  param_1[0x789] = uVal_32;
  param_1[0x78a] = uVal_3;
  param_1[0x78b] = uVal_4;
  param_1[0x78c] = uVal_5;
  uVal_6 = _UNK_1806aeb78;
  *(uint64_t *)(param_1 + 0x7a5) = _DAT_1806aeb70;
  *(uint64_t *)(param_1 + 0x7a7) = uVal_6;
  *(uint64_t *)(param_1 + 0x7a9) = 0x707070707070707;
  *(uint64_t *)(param_1 + 0x7ab) = 0x808080808080808;
  uVal_13 = 1;
  local_1c8 = pU8_22;
  local_1b0 = param_4;
  do {
    uVal_9 = (uint64_t)uVal_13;
    local_160 = param_1 + uVal_9 * 0x200 + 0x12;
    pArr16_26 = local_78[uVal_9];
    local_158 = local_98[uVal_9];
    _local_128 = ZEXT816(0);
    _local_118 = ZEXT816(0);
    _local_108 = ZEXT816(0);
    _local_f8 = ZEXT816(0);
    local_1f4 = uVal_12;
    local_1f0 = uVal_15;
    local_1d0 = param_1;
    func_0x1806ab010(local_160,0,0x800);
    if (uVal_13 == 1) {
      local_150[7] = ZEXT816(0);
      local_150[6] = ZEXT816(0);
      local_150[5] = ZEXT816(0);
      local_150[4] = ZEXT816(0);
      local_150[3] = ZEXT816(0);
      local_150[2] = ZEXT816(0);
      local_150[1] = ZEXT816(0);
      *local_150 = ZEXT816(0);
    }
    else if (uVal_13 == 0) {
      func_0x1806ab010(local_1b8,0,0x480);
    }
    else {
      *(uint8_t (*)[16])(local_1c0[3] + 0xc) = (uint8_t  [16])0x0;
      local_1c0[3] = (uint8_t  [16])0x0;
      local_1c0[2] = (uint8_t  [16])0x0;
      local_1c0[1] = (uint8_t  [16])0x0;
      *local_1c0 = (uint8_t  [16])0x0;
    }
    uVal_12 = local_1d0[uVal_9 + 0xb];
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_1a8 = 0;
    iVal_28 = 0;
    iVal_29 = 0;
    iVal_30 = 0;
    iVal_36 = 0;
    iVal_37 = 0;
    iVal_38 = 0;
    iVal_39 = 0;
    if (uVal_12 != 0) {
      uVal_9 = 0;
      if (uVal_12 < 4) {
LAB_180078f31:
        uVal_15 = 0;
        do {
          *(int *)(local_128 + (uint64_t)(byte)(*local_158)[uVal_15 + uVal_9] * 4) =
               *(int *)(local_128 + (uint64_t)(byte)(*local_158)[uVal_15 + uVal_9] * 4) + 1;
          uVal_15 = uVal_15 + 1;
        } while ((uVal_12 & 3) != uVal_15);
      }
      else {
        uVal_9 = 0;
        do {
          *(int *)(local_128 + (uint64_t)(byte)(*local_158)[uVal_9] * 4) =
               *(int *)(local_128 + (uint64_t)(byte)(*local_158)[uVal_9] * 4) + 1;
          *(int *)(local_128 + (uint64_t)(byte)(*local_158)[uVal_9 + 1] * 4) =
               *(int *)(local_128 + (uint64_t)(byte)(*local_158)[uVal_9 + 1] * 4) + 1;
          *(int *)(local_128 + (uint64_t)(byte)(*local_158)[uVal_9 + 2] * 4) =
               *(int *)(local_128 + (uint64_t)(byte)(*local_158)[uVal_9 + 2] * 4) + 1;
          *(int *)(local_128 + (uint64_t)(byte)(*local_158)[uVal_9 + 3] * 4) =
               *(int *)(local_128 + (uint64_t)(byte)(*local_158)[uVal_9 + 3] * 4) + 1;
          uVal_9 = uVal_9 + 4;
        } while ((uVal_12 & 0xfffffffc) != uVal_9);
        if ((uint64_t)(uVal_12 & 3) != 0) goto LAB_180078f31;
      }
      local_1a8 = (uint64_t)(uint)local_f8._0_4_;
      local_168 = (uint64_t)uStack_fc;
      local_170 = (uint64_t)uStack_100;
      local_178 = (uint64_t)(uint)local_108._4_4_;
      local_180 = (uint64_t)(uint)local_118._0_4_;
      local_188 = (uint64_t)uStack_11c;
      local_190 = (uint64_t)uStack_120;
      iVal_28 = iStack_10c;
      iVal_29 = local_118._4_4_;
      iVal_30 = local_f8._4_4_;
      iVal_36 = iStack_f0;
      iVal_37 = local_128._4_4_;
      iVal_38 = iStack_110;
      iVal_39 = local_108._0_4_;
    }
    local_e8 = 0;
    local_e0 = iVal_37 * 2;
    iVal_18 = (int)local_190 + iVal_37 * 2;
    local_dc = iVal_18 * 2;
    iVal_18 = (int)local_188 + iVal_18 * 2;
    local_d8 = iVal_18 * 2;
    iVal_18 = (int)local_180 + iVal_18 * 2;
    local_d4 = iVal_18 * 2;
    iVal_18 = iVal_29 + iVal_18 * 2;
    local_d0 = iVal_18 * 2;
    iVal_18 = iVal_38 + iVal_18 * 2;
    local_cc = iVal_18 * 2;
    iVal_18 = iVal_28 + iVal_18 * 2;
    local_c8 = iVal_18 * 2;
    iVal_18 = iVal_39 + iVal_18 * 2;
    local_c4 = iVal_18 * 2;
    iVal_18 = (int)local_178 + iVal_18 * 2;
    local_c0 = iVal_18 * 2;
    iVal_18 = (int)local_170 + iVal_18 * 2;
    local_bc = iVal_18 * 2;
    iVal_18 = (int)local_168 + iVal_18 * 2;
    local_b8 = iVal_18 * 2;
    iVal_18 = (int)local_1a8 + iVal_18 * 2;
    local_b4 = iVal_18 * 2;
    iVal_18 = iVal_30 + iVal_18 * 2;
    local_b0 = iVal_18 * 2;
    iVal_18 = iVal_36 + iVal_18 * 2;
    local_ac = iVal_18 * 2;
    local_a8 = (iStack_ec + iVal_18 * 2) * 2;
    param_1 = local_1d0;
    uVal_12 = local_1f4;
    if ((local_a8 != 0x10000) &&
       (1 < (uint)(iVal_30 + iVal_36 + iStack_ec +
                  (int)local_1a8 + (int)local_180 + iVal_39 +
                  (int)local_168 + (int)local_188 + iVal_28 +
                  (int)local_178 + iVal_37 + iVal_29 + (int)local_170 + (int)local_190 + iVal_38))) {
      uVal_9 = 0xffffffff;
      uVal_32 = 0x23;
      pU8_22 = local_1c8;
      goto LAB_180078251;
    }
    uVal_9 = (uint64_t)(uint)local_1d0[6];
    if (local_1d0[uVal_9 + 0xb] != 0) {
      uVal_13 = 0xffffffff;
      uVal_15 = 0;
      do {
        bFlag_10 = (*local_158)[uVal_15];
        uVal_33 = (uint64_t)bFlag_10;
        if (bFlag_10 != 0) {
          uVal_35 = *(uint *)((int64_t)&local_e8 + uVal_33 * 4);
          *(uint *)((int64_t)&local_e8 + uVal_33 * 4) = uVal_35 + 1;
          uVal_11 = (uint)bFlag_10;
          uVal_24 = uVal_11 & 3;
          uVal_7 = 0;
          if (bFlag_10 < 4) {
LAB_1800792a0:
            do {
              uVal_31 = uVal_7;
              uVal_20 = uVal_35;
              uVal_7 = (uVal_20 & 1) + uVal_31 * 2;
              uVal_24 = uVal_24 - 1;
              uVal_35 = uVal_20 >> 1;
            } while (uVal_24 != 0);
          }
          else {
            uVal_19 = uVal_11 & 0xfffffffc;
            uVal_7 = 0;
            do {
              uVal_31 = uVal_35 >> 2 & 1 | uVal_35 & 2 | (uVal_35 & 1) * 4 + uVal_7 * 8;
              uVal_20 = uVal_35 >> 3;
              uVal_7 = (uVal_20 & 1) + uVal_31 * 2;
              uVal_35 = uVal_35 >> 4;
              uVal_19 = uVal_19 - 4;
            } while (uVal_19 != 0);
            if ((bFlag_10 & 3) != 0) goto LAB_1800792a0;
          }
          uVal_31 = uVal_31 * 2;
          local_1a8 = uVal_9;
          if (bFlag_10 < 0xb) {
            if (uVal_31 < 0x400) {
              uVal_33 = (uint64_t)(uVal_31 | uVal_20 & 1);
              do {
                *(ushort *)((int64_t)local_160 + uVal_33 * 2) = (ushort)uVal_15 | (ushort)bFlag_10 << 9
                ;
                uVal_33 = uVal_33 + (1L << (bFlag_10 & 0x3f));
              } while (uVal_33 < 0x400);
            }
          }
          else {
            sz_1 = *(short *)((int64_t)local_160 + (uint64_t)(uVal_7 & 0x3ff) * 2);
            uVal_35 = (int)sz_1;
            uVal_24 = uVal_13;
            if (sz_1 == 0) {
              *(short *)((int64_t)local_160 + (uint64_t)(uVal_7 & 0x3ff) * 2) = (short)uVal_13;
              uVal_24 = uVal_13 - 2;
              uVal_35 = uVal_13;
            }
            uVal_31 = uVal_31 >> 9;
            if (uVal_11 != 0xb) {
              do {
                lVal_41 = (int64_t)(int)(~uVal_35 + (uint)((uVal_31 >> 1 & 1) != 0));
                uVal_35 = (int)*(short *)(*pArr16_26 + lVal_41 * 2);
                if (*(short *)(*pArr16_26 + lVal_41 * 2) == 0) {
                  *(short *)(*pArr16_26 + lVal_41 * 2) = (short)uVal_24;
                  uVal_35 = uVal_24;
                  uVal_24 = uVal_24 - 2;
                }
                uVal_31 = uVal_31 >> 1;
                uVal_13 = (int)uVal_33 - 1;
                uVal_33 = (uint64_t)uVal_13;
              } while (0xb < uVal_13);
            }
            *(ushort *)(*pArr16_26 + (int64_t)(int)(~uVal_35 + (uint)((uVal_31 >> 1 & 1) != 0)) * 2) =
                 (ushort)uVal_15;
            uVal_9 = (uint64_t)(uint)local_1d0[6];
            uVal_13 = uVal_24;
          }
        }
        uVal_15 = uVal_15 + 1;
      } while (uVal_15 < (uint)local_1d0[uVal_9 + 0xb]);
    }
    iVal_28 = (int)uVal_9;
    pArr16_26 = local_1c0;
    uVal_15 = local_1f0;
    param_2 = pU64_40;
    uVal_13 = 0;
    if (iVal_28 == 2) {
      while( true ) {
        uVal_27 = uVal_13;
        uVal_13 = param_1[0xb];
        iVal_28 = param_1[0xc];
        uVal_7 = iVal_28 + uVal_13;
        pU8_22 = local_1c8;
        if (uVal_7 <= uVal_27) break;
        param_4 = local_1b0;
        if (uVal_25 < 0xf) {
          pU64_17 = local_1e8;
          if ((int64_t)local_1e8 - (int64_t)param_2 < 2) {
            do {
              sz_1 = *(short *)((int64_t)param_1 + (uint64_t)((uint)uVal_23 & 0x3ff) * 2 + 0x1048)
              ;
              uVal_13 = (uint)sz_1;
              if (sz_1 < 0) {
                if (10 < uVal_25) {
                  uVal_7 = 0xc;
                  do {
                    sz_1 = *(short *)(*local_1c0 +
                                      (uint64_t)~uVal_13 * 2 +
                                      (uint64_t)
                                      ((uVal_23 >> ((uint64_t)(uVal_7 - 2 & 0xff) & 0x3f) & 1) != 0)
                                      * 2);
                    uVal_13 = (uint)sz_1;
                    if (-1 < sz_1) break;
                    bFlag_42 = uVal_7 <= uVal_25;
                    uVal_7 = uVal_7 + 1;
                  } while (bFlag_42);
                  pU64_17 = local_1e8;
                  pArr16_26 = local_1c0;
                  if (-1 < sz_1) break;
                }
              }
              else if ((uVal_13 >> 9) - 1 < uVal_25) break;
LAB_18007958b:
              if (pU64_17 <= param_2) {
                *param_1 = 0x10;
                uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
                pU64_40 = param_2;
                goto LAB_180079f99;
              }
              bFlag_10 = *(byte *)param_2;
              param_2 = (uint *)((int64_t)param_2 + 1);
              uVal_23 = uVal_23 | (uint64_t)bFlag_10 << ((byte)uVal_25 & 0x3f);
              uVal_25 = uVal_25 + 8;
            } while (uVal_25 < 0xf);
          }
          else {
            uVal_23 = uVal_23 | (uint64_t)*(byte *)((int64_t)param_2 + 1) <<
                              ((byte)uVal_25 + 8 & 0x3f) |
                              (uint64_t)*(byte *)param_2 << ((byte)uVal_25 & 0x3f);
            param_2 = (uint *)((int64_t)param_2 + 2);
            uVal_25 = uVal_25 | 0x10;
          }
        }
        uVal_13 = (uint)*(short *)((int64_t)param_1 + (uint64_t)((uint)uVal_23 & 0x3ff) * 2 + 0x1048
                                 );
        uVal_15 = (uint64_t)uVal_13;
        if ((int)uVal_13 < 0) {
          uVal_9 = 10;
          do {
            uVal_13 = (uint)uVal_15;
            uVal_7 = (int)uVal_9 + 1;
            uVal_33 = uVal_9 & 0x3f;
            uVal_15 = (uint64_t)
                     (uint)(int)*(short *)(*pArr16_26 +
                                          (uint64_t)~uVal_13 * 2 +
                                          (uint64_t)((uVal_23 >> uVal_33 & 1) != 0) * 2);
            uVal_9 = (uint64_t)uVal_7;
          } while (*(short *)(*pArr16_26 +
                             (uint64_t)~uVal_13 * 2 + (uint64_t)((uVal_23 >> uVal_33 & 1) != 0) * 2)
                   < 0);
        }
        else {
          uVal_7 = uVal_13 >> 9;
          uVal_15 = (uint64_t)(uVal_13 & 0x1ff);
        }
        uVal_23 = uVal_23 >> ((byte)uVal_7 & 0x3f);
        uVal_25 = uVal_25 - uVal_7;
        if ((uint)uVal_15 < 0x10) {
          *(char *)((int64_t)param_1 + (uint64_t)uVal_27 + 0x1eeb) = (char)uVal_15;
          local_1c8 = pU8_22;
          local_1b0 = param_4;
          uVal_13 = uVal_27 + 1;
        }
        else {
          if (((uint)uVal_15 == 0x10) && (uVal_27 == 0)) {
            uVal_27 = 0;
            uVal_9 = 0xffffffff;
            local_1f0 = 0x10;
            uVal_32 = 0x11;
            pU64_40 = param_2;
            goto LAB_180078251;
          }
          uVal_12 = (uint)"#?RADIANCE\n"[uVal_15 + 6];
          if (uVal_25 < uVal_12) {
LAB_180079660:
            do {
              if (local_1e8 <= param_2) {
                *param_1 = 0x12;
                uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
                pU64_40 = param_2;
                goto LAB_180079f99;
              }
              bFlag_10 = *(byte *)param_2;
              param_2 = (uint *)((int64_t)param_2 + 1);
              uVal_23 = uVal_23 | (uint64_t)bFlag_10 << ((byte)uVal_25 & 0x3f);
              uVal_25 = uVal_25 + 8;
            } while (uVal_25 < uVal_12);
          }
          uVal_13 = (uint)uVal_23;
          uVal_23 = uVal_23 >> ((byte)uVal_12 & 0x3f);
          uVal_25 = uVal_25 - uVal_12;
          iVal_28 = (int)(char)(&DAT_1807610d5)[(int)uVal_15 - 0x10] +
                   (uVal_13 & ~(-1 << ((byte)uVal_12 & 0x1f)));
          uVal_16 = 0;
          if ((int)uVal_15 == 0x10) {
            uVal_16 = *(uint8_t *)((int64_t)param_1 + (uint64_t)(uVal_27 - 1) + 0x1eeb);
          }
          local_1f4 = uVal_12;
          local_1c8 = pU8_22;
          local_1b0 = param_4;
          func_0x1806ab010((int64_t)param_1 + (uint64_t)uVal_27 + 0x1eeb,uVal_16,iVal_28);
          pArr16_26 = local_1c0;
          uVal_12 = local_1f4;
          uVal_13 = uVal_27 + iVal_28;
        }
      }
      pU64_40 = param_2;
      local_1f0 = uVal_15;
      if (uVal_27 != uVal_7) {
        uVal_9 = 0xffffffff;
        uVal_32 = 0x15;
        goto LAB_180078251;
      }
      local_1f4 = uVal_27;
      func_0x1806aa960(local_140,(int64_t)param_1 + 0x1eeb,(uint64_t)uVal_13);
      func_0x1806aa960(local_148,(int64_t)param_1 + (uint64_t)uVal_13 + 0x1eeb,iVal_28);
      iVal_28 = param_1[6];
      uVal_27 = local_1f4;
      local_1f4 = uVal_12;
    }
    uVal_13 = iVal_28 - 1;
    param_1[6] = uVal_13;
    pU8_22 = local_1c8;
    param_4 = local_1b0;
    uVal_15 = local_1f0;
    param_2 = pU64_40;
    uVal_12 = local_1f4;
joined_r0x000180078850:
    pArr16_26 = local_1b8;
    pU8_8 = local_1d8;
    pU64_40 = param_2;
    local_1f4 = uVal_12;
    local_1c8 = pU8_22;
    local_1b0 = param_4;
  } while (-1 < (int)uVal_13);
LAB_180079770:
  while( true ) {
    bFlag_10 = (byte)uVal_25;
    if ((3 < (int64_t)local_1e8 - (int64_t)param_2) && (1 < (int64_t)pU8_8 - (int64_t)pU8_22))
    break;
    uVal_12 = local_1f4;
    if (uVal_25 < 0xf) {
      pU64_17 = local_1e8;
      if ((int64_t)local_1e8 - (int64_t)param_2 < 2) {
        do {
          sz_1 = *(short *)((int64_t)param_1 + (uint64_t)((uint)uVal_23 & 0x3ff) * 2 + 0x48);
          uVal_13 = (uint)sz_1;
          if (sz_1 < 0) {
            if (10 < uVal_25) {
              uVal_7 = 0xc;
              do {
                sz_1 = *(short *)((int64_t)*local_1b8 +
                                  (uint64_t)~uVal_13 * 2 +
                                  (uint64_t)
                                  ((uVal_23 >> ((uint64_t)(uVal_7 - 2 & 0xff) & 0x3f) & 1) != 0) * 2)
                ;
                uVal_13 = (uint)sz_1;
                if (-1 < sz_1) break;
                bFlag_42 = uVal_7 <= uVal_25;
                uVal_7 = uVal_7 + 1;
              } while (bFlag_42);
              pU64_17 = local_1e8;
              pArr16_26 = local_1b8;
              if (-1 < sz_1) break;
            }
          }
          else if ((uVal_13 >> 9) - 1 < uVal_25) break;
LAB_18007994b:
          if (pU64_17 <= param_2) {
            *param_1 = 0x17;
            uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
            pU64_40 = param_2;
            goto LAB_180079f99;
          }
          bFlag_10 = *(byte *)param_2;
          param_2 = (uint *)((int64_t)param_2 + 1);
          uVal_23 = uVal_23 | (uint64_t)bFlag_10 << ((byte)uVal_25 & 0x3f);
          uVal_25 = uVal_25 + 8;
        } while (uVal_25 < 0xf);
      }
      else {
        uVal_23 = uVal_23 | (uint64_t)*(byte *)((int64_t)param_2 + 1) << (bFlag_10 + 8 & 0x3f) |
                          (uint64_t)*(byte *)param_2 << (bFlag_10 & 0x3f);
        param_2 = (uint *)((int64_t)param_2 + 2);
        uVal_25 = uVal_25 | 0x10;
      }
    }
    sz_1 = *(short *)((int64_t)param_1 + (uint64_t)((uint)uVal_23 & 0x3ff) * 2 + 0x48);
    uVal_27 = (uint)sz_1;
    if (sz_1 < 0) {
      uVal_13 = 10;
      do {
        uVal_9 = (uint64_t)uVal_13;
        uVal_13 = uVal_13 + 1;
        sz_1 = *(short *)((int64_t)*pArr16_26 +
                          (uint64_t)~uVal_27 * 2 +
                          (uint64_t)((uVal_23 >> (uVal_9 & 0x3f) & 1) != 0) * 2);
        uVal_27 = (uint)sz_1;
      } while (sz_1 < 0);
    }
    else {
      uVal_13 = uVal_27 >> 9;
      uVal_27 = uVal_27 & 0x1ff;
    }
    uVal_23 = uVal_23 >> ((byte)uVal_13 & 0x3f);
    uVal_25 = uVal_25 - uVal_13;
    local_1f4 = uVal_12;
    local_1f0 = uVal_15;
    if (0xff < uVal_27) goto LAB_1800799d4;
LAB_180079a80:
    if (local_1d8 <= pU8_22) {
      uVal_9 = 2;
      uVal_32 = 0x18;
      pU64_40 = param_2;
      uVal_12 = local_1f4;
      goto LAB_180078251;
    }
    *pU8_22 = (byte)uVal_27;
    pU8_22 = pU8_22 + 1;
    uVal_15 = local_1f0;
    pU8_8 = local_1d8;
  }
  if (uVal_25 < 0x1e) {
    uVal_23 = uVal_23 | (uint64_t)*param_2 << (bFlag_10 & 0x3f);
    param_2 = param_2 + 1;
    uVal_25 = uVal_25 | 0x20;
  }
  sz_1 = *(short *)((int64_t)param_1 + (uint64_t)((uint)uVal_23 & 0x3ff) * 2 + 0x48);
  uVal_27 = (uint)sz_1;
  if (sz_1 < 0) {
    uVal_12 = 10;
    do {
      uVal_9 = (uint64_t)uVal_12;
      uVal_12 = uVal_12 + 1;
      sz_1 = *(short *)((int64_t)*pArr16_26 +
                        (uint64_t)~uVal_27 * 2 +
                        (uint64_t)((uVal_23 >> (uVal_9 & 0x3f) & 1) != 0) * 2);
      uVal_27 = (uint)sz_1;
    } while (sz_1 < 0);
  }
  else {
    uVal_12 = uVal_27 >> 9;
  }
  uVal_23 = uVal_23 >> ((byte)uVal_12 & 0x3f);
  uVal_25 = uVal_25 - uVal_12;
  if ((uVal_27 & 0x100) == 0) {
    sz_1 = *(short *)((int64_t)param_1 + (uint64_t)((uint)uVal_23 & 0x3ff) * 2 + 0x48);
    uVal_12 = (uint)sz_1;
    if (sz_1 < 0) {
      uVal_13 = 10;
      do {
        uVal_9 = (uint64_t)uVal_13;
        uVal_13 = uVal_13 + 1;
        sz_1 = *(short *)((int64_t)*local_1b8 +
                          (uint64_t)~uVal_12 * 2 +
                          (uint64_t)((uVal_23 >> (uVal_9 & 0x3f) & 1) != 0) * 2);
        uVal_12 = (uint)sz_1;
        pArr16_26 = local_1b8;
      } while (sz_1 < 0);
    }
    else {
      uVal_13 = uVal_12 >> 9;
    }
    uVal_23 = uVal_23 >> ((byte)uVal_13 & 0x3f);
    uVal_25 = uVal_25 - uVal_13;
    *pU8_22 = (byte)uVal_27;
    if ((uVal_12 & 0x100) == 0) {
      pU8_22[1] = (byte)uVal_12;
      pU8_22 = pU8_22 + 2;
      goto LAB_180079770;
    }
    pU8_22 = pU8_22 + 1;
    uVal_27 = uVal_12;
  }
LAB_1800799d4:
  local_1f0 = uVal_15;
  uVal_13 = uVal_27 & 0x1ff;
  uVal_27 = 0x100;
  if (uVal_13 != 0x100) {
    uVal_27 = (uint)*(ushort *)(&DAT_1806af6a0 + (uint64_t)(uVal_13 - 0x101) * 2);
    uVal_12 = 0;
    if (0xffffffeb < uVal_13 - 0x11d) {
      uVal_12 = (uint)(byte)(&DAT_1806af6e0)[uVal_13 - 0x101];
      if (uVal_25 < uVal_12) {
LAB_180079ae0:
        do {
          if (local_1e8 <= param_2) {
            *param_1 = 0x19;
            uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
            uVal_15 = local_1f0;
            pU64_40 = param_2;
            goto LAB_180079f99;
          }
          bFlag_10 = *(byte *)param_2;
          param_2 = (uint *)((int64_t)param_2 + 1);
          uVal_23 = uVal_23 | (uint64_t)bFlag_10 << ((byte)uVal_25 & 0x3f);
          uVal_25 = uVal_25 + 8;
        } while (uVal_25 < uVal_12);
      }
      uVal_27 = ((uint)uVal_23 & ~(-1 << ((byte)uVal_12 & 0x1f))) + uVal_27;
      uVal_25 = uVal_25 - uVal_12;
      uVal_23 = uVal_23 >> ((byte)uVal_12 & 0x3f);
    }
    if (uVal_25 < 0xf) {
      pU64_17 = local_1e8;
      uVal_15 = local_1f0;
      if ((int64_t)local_1e8 - (int64_t)param_2 < 2) {
        do {
          sz_1 = *(short *)((int64_t)param_1 + (uint64_t)((uint)uVal_23 & 0x3ff) * 2 + 0x848);
          uVal_13 = (uint)sz_1;
          if (sz_1 < 0) {
            if (10 < uVal_25) {
              uVal_7 = 0xc;
              do {
                sz_1 = *(short *)((int64_t)*local_150 +
                                  (uint64_t)~uVal_13 * 2 +
                                  (uint64_t)
                                  ((uVal_23 >> ((uint64_t)(uVal_7 - 2 & 0xff) & 0x3f) & 1) != 0) * 2)
                ;
                uVal_13 = (uint)sz_1;
                if (-1 < sz_1) break;
                bFlag_42 = uVal_7 <= uVal_25;
                uVal_7 = uVal_7 + 1;
              } while (bFlag_42);
              pU64_17 = local_1e8;
              if (-1 < sz_1) break;
            }
          }
          else if ((uVal_13 >> 9) - 1 < uVal_25) break;
LAB_180079c29:
          if (pU64_17 <= param_2) {
            *param_1 = 0x1a;
            uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
            pU64_40 = param_2;
            goto LAB_180079f99;
          }
          bFlag_10 = *(byte *)param_2;
          param_2 = (uint *)((int64_t)param_2 + 1);
          uVal_23 = uVal_23 | (uint64_t)bFlag_10 << ((byte)uVal_25 & 0x3f);
          uVal_25 = uVal_25 + 8;
        } while (uVal_25 < 0xf);
      }
      else {
        uVal_23 = uVal_23 | (uint64_t)*(byte *)((int64_t)param_2 + 1) << ((byte)uVal_25 + 8 & 0x3f) |
                          (uint64_t)*(byte *)param_2 << ((byte)uVal_25 & 0x3f);
        param_2 = (uint *)((int64_t)param_2 + 2);
        uVal_25 = uVal_25 | 0x10;
      }
    }
    sz_1 = *(short *)((int64_t)param_1 + (uint64_t)((uint)uVal_23 & 0x3ff) * 2 + 0x848);
    uVal_13 = (uint)sz_1;
    if (sz_1 < 0) {
      uVal_12 = 10;
      do {
        uVal_9 = (uint64_t)uVal_12;
        uVal_12 = uVal_12 + 1;
        sz_1 = *(short *)((int64_t)*local_150 +
                          (uint64_t)~uVal_13 * 2 +
                          (uint64_t)((uVal_23 >> (uVal_9 & 0x3f) & 1) != 0) * 2);
        uVal_13 = (uint)sz_1;
      } while (sz_1 < 0);
    }
    else {
      uVal_12 = uVal_13 >> 9;
      uVal_13 = uVal_13 & 0x1ff;
    }
    uVal_23 = uVal_23 >> ((byte)uVal_12 & 0x3f);
    uVal_25 = uVal_25 - uVal_12;
    uVal_15 = (uint64_t)*(ushort *)(&DAT_1806af700 + (uint64_t)uVal_13 * 2);
    uVal_7 = (uint)*(ushort *)(&DAT_1806af700 + (uint64_t)uVal_13 * 2);
    uVal_12 = 0;
    if (0xffffffe5 < uVal_13 - 0x1e) {
      uVal_12 = (uint)(byte)(&DAT_1806af740)[uVal_13];
      if (uVal_25 < uVal_12) {
LAB_180079ccd:
        uVal_7 = (uint)uVal_15;
        do {
          if (local_1e8 <= param_2) {
            *param_1 = 0x1b;
            uVal_9 = (uint64_t)(((param_7 & 2) >> 1) * 5 - 4);
            pU64_40 = param_2;
            goto LAB_180079f99;
          }
          bFlag_10 = *(byte *)param_2;
          param_2 = (uint *)((int64_t)param_2 + 1);
          uVal_23 = uVal_23 | (uint64_t)bFlag_10 << ((byte)uVal_25 & 0x3f);
          uVal_25 = uVal_25 + 8;
        } while (uVal_25 < uVal_12);
      }
      uVal_25 = uVal_25 - uVal_12;
      uVal_15 = (uint64_t)(((uint)uVal_23 & ~(-1 << ((byte)uVal_12 & 0x1f))) + uVal_7);
      uVal_23 = uVal_23 >> ((byte)uVal_12 & 0x3f);
    }
    local_198 = (int64_t)pU8_22 - (int64_t)param_4;
    if (((param_7 & 4) != 0) && ((int)uVal_15 == 0 || local_198 < uVal_15)) {
      uVal_9 = 0xffffffff;
      uVal_32 = 0x25;
      pU64_40 = param_2;
      local_1f0 = uVal_15;
      goto LAB_180078251;
    }
    pU8_21 = param_4 + (local_198 - uVal_15 & (uint64_t)local_1e0);
    pU8_14 = pU8_21;
    if (pU8_21 < pU8_22) {
      pU8_14 = pU8_22;
    }
    local_1f4 = uVal_12;
    pU8_8 = local_1d8;
    uVal_13 = uVal_27;
    if (local_1d8 < pU8_14 + uVal_27) {
      while( true ) {
        uVal_27 = 0xffffffff;
        pArr16_26 = local_1b8;
        uVal_12 = uVal_13 - 1;
        if (uVal_13 == 0) break;
LAB_180079eba:
        uVal_27 = uVal_12;
        if (pU8_8 <= pU8_22) {
          uVal_9 = 2;
          uVal_32 = 0x35;
          pU64_40 = param_2;
          uVal_12 = local_1f4;
          local_1f0 = uVal_15;
          goto LAB_180078251;
        }
        *pU8_22 = param_4[local_198 - uVal_15 & (uint64_t)local_1e0];
        pU8_22 = pU8_22 + 1;
        local_198 = local_198 + 1;
        uVal_13 = uVal_27;
      }
    }
    else {
      if (2 < uVal_27) {
        uVal_12 = uVal_27 - 3;
        if (((uint64_t)uVal_12 / 3 & 1) == 0) {
          *pU8_22 = *pU8_21;
          pU8_22[1] = pU8_21[1];
          pU8_22[2] = pU8_21[2];
          pU8_22 = pU8_22 + 3;
          pU8_21 = pU8_21 + 3;
          uVal_13 = uVal_12;
        }
        while (uVal_27 = uVal_12, 2 < uVal_27) {
          *pU8_22 = *pU8_21;
          pU8_22[1] = pU8_21[1];
          pU8_22[2] = pU8_21[2];
          pU8_22[3] = pU8_21[3];
          pU8_22[4] = pU8_21[4];
          pU8_22[5] = pU8_21[5];
          pU8_22 = pU8_22 + 6;
          pU8_21 = pU8_21 + 6;
          uVal_12 = uVal_13 - 6;
          uVal_13 = uVal_13 - 6;
        }
      }
      pArr16_26 = local_1b8;
      if (uVal_27 != 0) {
        *pU8_22 = *pU8_21;
        if (uVal_27 == 2) {
          pU8_22[1] = pU8_21[1];
        }
        pU8_22 = pU8_22 + uVal_27;
      }
    }
    goto LAB_180079770;
  }
  uVal_15 = local_1f0;
  uVal_12 = local_1f4;
  if ((*(byte *)(param_1 + 5) & 1) != 0) goto LAB_1800799fe;
  goto LAB_180078755;
}

// func_0x18007a290
uint64_t func_0x18007a290(int64_t param_1,int param_2)
{
  uint8_t (*pArr16_1)[16];
  int iVal_2;
  uint64_t uVal_3;
  
  uVal_3 = 0;
  if (param_1 != 0) {
    pArr16_1 = *(uint8_t (**)[16])(param_1 + 0x68);
    if ((((pArr16_1 == (uint8_t (*)[16])0x0) || (*(int64_t *)(param_1 + 0x28) == 0)) ||
        (*(func_ptr_t *)(param_1 + 0x30) == (func_ptr_t )0x0)) || (*(int *)(param_1 + 0x14) != 1)) {
      uVal_3 = 0;
      if (param_2 != 0) {
        *(uint32_t *)(param_1 + 0x1c) = 0x18;
      }
    }
    else {
      *(uint64_t *)(param_1 + 0x68) = 0;
      (**(func_ptr_t *)(param_1 + 0x30))(*(uint64_t *)(param_1 + 0x40),*(uint64_t *)*pArr16_1);
      pArr16_1[1] = ZEXT816(0);
      *pArr16_1 = ZEXT816(0);
      (**(func_ptr_t *)(param_1 + 0x30))(*(uint64_t *)(param_1 + 0x40),*(uint64_t *)pArr16_1[2]);
      pArr16_1[3] = ZEXT816(0);
      pArr16_1[2] = ZEXT816(0);
      (**(func_ptr_t *)(param_1 + 0x30))(*(uint64_t *)(param_1 + 0x40),*(uint64_t *)pArr16_1[4]);
      pArr16_1[5] = ZEXT816(0);
      pArr16_1[4] = ZEXT816(0);
      if (*(int64_t *)pArr16_1[7] == 0) {
        uVal_3 = 1;
      }
      else {
        uVal_3 = 1;
        if (*(int *)(param_1 + 0x18) == 4) {
          iVal_2 = func_0x18068a690();
          uVal_3 = 1;
          if ((iVal_2 == -1) && (uVal_3 = 0, param_2 != 0)) {
            *(uint32_t *)(param_1 + 0x1c) = 0x15;
          }
        }
        *(uint64_t *)pArr16_1[7] = 0;
      }
      (**(func_ptr_t *)(param_1 + 0x30))(*(uint64_t *)(param_1 + 0x40),pArr16_1);
      *(uint32_t *)(param_1 + 0x14) = 0;
    }
  }
  return uVal_3;
}

// func_0x18007a3b0
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
uint64_t func_0x18007a3b0(uint64_t *param_1,uint param_2)
{
  uint64_t uVal_1;
  ushort uVal_2;
  int64_t *pLong_3;
  func_ptr_t fnPtr_4;
  int iVal_5;
  uint uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  short *pSize_9;
  uint64_t uVal_10;
  uint uVal_11;
  int iVal_12;
  uint uVal_13;
  uint64_t uVal_14;
  short *pSize_15;
  uint uVal_16;
  int64_t lVal_17;
  uint uVal_18;
  uint64_t uVal_19;
  int64_t lVal_20;
  uint uVal_21;
  int64_t lVal_22;
  uint64_t uVal_23;
  uint64_t uVal_24;
  int *pInt_25;
  bool bFlag_26;
  uint8_t auStack_10f8 [44];
  uint local_10cc;
  uint64_t local_10c8;
  uint64_t local_10c0;
  uint64_t local_10b8;
  int64_t local_10b0;
  int local_10a8;
  uint64_t local_10a4;
  uint local_1098;
  uint local_1094;
  uint local_1090;
  int local_108c;
  uint local_1088;
  int local_1084;
  uint local_1080;
  int local_107c;
  uint64_t local_1078;
  int local_1068 [2];
  uint64_t local_1060;
  int local_1058;
  int local_1048;
  ushort local_1044;
  ushort local_1042;
  ushort local_1040;
  ushort local_103e;
  uint local_103c;
  uint local_1038;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_10f8;
  uVal_24 = *param_1;
  if (uVal_24 < 0x16) {
LAB_18007a3e7:
    *(uint32_t *)((int64_t)param_1 + 0x1c) = 8;
  }
  else {
    uVal_14 = 0x1000;
    if (0x1000 < (int64_t)uVal_24) {
      uVal_14 = uVal_24;
    }
    lVal_8 = uVal_14 - 0x1000;
    lVal_22 = 0x1000 - uVal_14;
    lVal_17 = -uVal_14;
    local_10cc = param_2;
    do {
      uVal_19 = uVal_24 - lVal_8;
      uVal_14 = 0x1000;
      if (uVal_19 < 0x1000) {
        uVal_14 = uVal_19;
      }
      uVal_7 = (*(func_ptr_t )param_1[9])(param_1[0xc],lVal_8,&local_1048,uVal_14);
      if (uVal_7 != uVal_14) break;
      if (3 < uVal_19) {
        uVal_24 = uVal_24 + lVal_22;
        uVal_14 = 0x1000;
        if (uVal_24 < 0x1000) {
          uVal_14 = uVal_24;
        }
        uVal_19 = (uint64_t)((int)uVal_14 - 4);
        pInt_25 = &local_1048;
        lVal_20 = lVal_17;
        iVal_12 = (int)uVal_14 + -3;
        do {
          if ((*(int *)((int64_t)pInt_25 + uVal_19) == 0x6054b50) &&
             (0x15 < (0x1000 - uVal_19) + lVal_20 + *param_1)) {
            uVal_14 = 0x1000;
            if (uVal_24 < 0x1000) {
              uVal_14 = uVal_24;
            }
            uVal_14 = ((uint64_t)((int)uVal_14 - 4) - lVal_20) - 0x1000;
            lVal_8 = (*(func_ptr_t )param_1[9])(param_1[0xc],uVal_14,&local_1048,0x16);
            if (lVal_8 != 0x16) goto LAB_18007ab15;
            if (local_1048 != 0x6054b50) goto LAB_18007a3e7;
            iVal_12 = (int)uVal_24;
            if (0x4b < (int64_t)uVal_14) {
              iVal_5 = 0x1000;
              if (uVal_24 < 0x1000) {
                iVal_5 = iVal_12;
              }
              lVal_8 = (*(func_ptr_t )param_1[9])
                                (param_1[0xc],((uint64_t)(iVal_5 - 4) - lVal_20) + -0x1014,local_1068
                                 ,0x14);
              if ((lVal_8 == 0x14) && (local_1068[0] == 0x7064b50)) {
                *(uint32_t *)(param_1[0xd] + 100) = 1;
              }
            }
            if (*(int *)(param_1[0xd] + 100) != 0) {
              if ((int64_t)uVal_14 < 0x4c) goto LAB_18007a3e7;
              iVal_5 = 0x1000;
              if (uVal_24 < 0x1000) {
                iVal_5 = iVal_12;
              }
              lVal_8 = (*(func_ptr_t )param_1[9])
                                (param_1[0xc],((uint64_t)(iVal_5 - 4) - lVal_20) + -0x104c,
                                 &local_10a8,0x38);
              if (((lVal_8 != 0x38) || (local_10a8 != 0x6064b50)) &&
                 ((*param_1 - 0x38 < local_1060 ||
                  ((lVal_8 = (*(func_ptr_t )param_1[9])(param_1[0xc],local_1060,&local_10a8,0x38),
                   lVal_8 != 0x38 || (local_10a8 != 0x6064b50)))))) goto LAB_18007a3e7;
            }
            uVal_6 = (uint)local_103e;
            *(uint *)(param_1 + 2) = (uint)local_103e;
            uVal_19 = param_1[0xd];
            if (*(int *)(uVal_19 + 100) == 0) {
              uVal_21 = (uint)local_1044;
              local_1094 = (uint)local_1042;
              uVal_7 = (uint64_t)local_1038;
              uVal_18 = local_103c;
              if ((uint)local_103e != (uint)local_1040) goto LAB_18007aae8;
            }
            else {
              if (local_10a4 < 0x2c) goto LAB_18007a61e;
              if (local_1058 != 1) goto LAB_18007aae8;
              if ((local_1084 != 0) || (*(uint *)(param_1 + 2) = local_1088, local_108c != 0)) {
                *(uint32_t *)((int64_t)param_1 + 0x1c) = 2;
                goto LAB_18007ab1c;
              }
              if (local_107c != 0) {
                *(uint32_t *)((int64_t)param_1 + 0x1c) = 0xf;
                goto LAB_18007ab1c;
              }
              uVal_7 = local_1078;
              uVal_18 = local_1080;
              uVal_21 = local_1098;
              uVal_6 = local_1088;
              if (local_1088 != local_1090) goto LAB_18007aae8;
            }
            if (((uVal_21 | local_1094) != 0) && ((local_1094 ^ 1 | uVal_21 ^ 1) != 0))
            goto LAB_18007aae8;
            uVal_23 = (uint64_t)uVal_18;
            if ((uVal_23 <= (uint64_t)uVal_6 * 0x2e && (uint64_t)uVal_6 * 0x2e - uVal_23 != 0) ||
               ((uVal_1 = uVal_23 + uVal_7, *param_1 < uVal_1 || (uVal_14 < uVal_1)))) goto LAB_18007a61e;
            iVal_5 = 0x1000;
            if (uVal_24 < 0x1000) {
              iVal_5 = iVal_12;
            }
            uVal_14 = (((iVal_5 - 4) - uVal_1) - lVal_20) - 0x1000;
            if (*(int *)(uVal_19 + 100) != 0) {
              if (uVal_14 < 0x4c) goto LAB_18007a61e;
              iVal_5 = 0x1000;
              if (uVal_24 < 0x1000) {
                iVal_5 = iVal_12;
              }
              uVal_14 = (((iVal_5 - 4) - uVal_1) - lVal_20) - 0x104c;
            }
            if (((*(uint *)(param_1 + 3) < 6) &&
                ((0x32U >> (*(uint *)(param_1 + 3) & 0x1f) & 1) != 0)) &&
               (*(int64_t *)(uVal_19 + 0x78) == 0)) {
              *(uint64_t *)(uVal_19 + 0x78) = uVal_14;
              *param_1 = *param_1 - uVal_14;
              uVal_6 = *(uint *)(param_1 + 2);
            }
            param_1[1] = uVal_7;
            uVal_24 = 0;
            uVal_11 = local_10cc;
            if (uVal_6 == 0) goto LAB_18007aa12;
            pLong_3 = (int64_t *)param_1[0xd];
            if ((uint64_t)pLong_3[2] < uVal_23) {
              lVal_8 = (*(func_ptr_t )param_1[7])(param_1[8],*pLong_3,*(uint32_t *)(pLong_3 + 3),uVal_23);
              if (lVal_8 == 0) goto LAB_18007aaf1;
              *pLong_3 = lVal_8;
              pLong_3[2] = uVal_23;
            }
            pLong_3[1] = uVal_23;
            uVal_19 = (uint64_t)*(uint *)(param_1 + 2);
            uVal_14 = param_1[0xd];
            if (*(uint64_t *)(uVal_14 + 0x30) < uVal_19) {
              lVal_8 = (*(func_ptr_t )param_1[7])
                                (param_1[8],*(uint64_t *)(uVal_14 + 0x20),
                                 *(uint32_t *)(uVal_14 + 0x38),uVal_19);
              if (lVal_8 == 0) goto LAB_18007aaf1;
              *(int64_t *)(uVal_14 + 0x20) = lVal_8;
              *(uint64_t *)(uVal_14 + 0x30) = uVal_19;
            }
            *(uint64_t *)(uVal_14 + 0x28) = uVal_19;
            if ((local_10cc & 0x800) == 0) {
              uVal_19 = (uint64_t)*(uint *)(param_1 + 2);
              uVal_14 = param_1[0xd];
              if (*(uint64_t *)(uVal_14 + 0x50) < uVal_19) {
                lVal_8 = (*(func_ptr_t )param_1[7])
                                  (param_1[8],*(uint64_t *)(uVal_14 + 0x40),
                                   *(uint32_t *)(uVal_14 + 0x58),uVal_19);
                if (lVal_8 == 0) goto LAB_18007aaf1;
                *(int64_t *)(uVal_14 + 0x40) = lVal_8;
                *(uint64_t *)(uVal_14 + 0x50) = uVal_19;
              }
              *(uint64_t *)(uVal_14 + 0x48) = uVal_19;
            }
            uVal_14 = (*(func_ptr_t )param_1[9])(param_1[0xc],uVal_7,*(uint64_t *)param_1[0xd],uVal_23);
            if (uVal_14 != uVal_23) goto LAB_18007ab15;
            uVal_11 = local_10cc;
            if (*(int *)(param_1 + 2) == 0) goto LAB_18007aa12;
            pInt_25 = *(int **)param_1[0xd];
            local_10b0 = uVal_7 + 0x2e;
            uVal_14 = 0;
            goto LAB_18007a836;
          }
          lVal_20 = lVal_20 + 1;
          pInt_25 = (int *)((int64_t)pInt_25 + -1);
          iVal_5 = iVal_12 + -1;
          bFlag_26 = 0 < iVal_12;
          iVal_12 = iVal_5;
        } while (iVal_5 != 0 && bFlag_26);
      }
      if (lVal_8 == 0) {
        if (param_1 == (uint64_t *)0x0) goto LAB_18007ab1c;
        break;
      }
      uVal_24 = *param_1;
      uVal_14 = uVal_24 - lVal_8;
      lVal_8 = lVal_8 + -0xffd;
      lVal_22 = lVal_22 + 0xffd;
      lVal_17 = lVal_17 + 0xffd;
    } while (uVal_14 < 0x10015);
    *(uint32_t *)((int64_t)param_1 + 0x1c) = 7;
  }
LAB_18007ab1c:
  uVal_10 = 0;
LAB_18007ab1e:
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_10f8)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_10f8);
    fnPtr_4 = (func_ptr_t )swi(3);
    uVal_10 = (*fnPtr_4)();
    return uVal_10;
  }
  return uVal_10;
LAB_18007a836:
  if ((uVal_18 < 0x2e) || (*pInt_25 != 0x2014b50)) {
LAB_18007a61e:
    *(uint32_t *)((int64_t)param_1 + 0x1c) = 9;
  }
  else {
    *(int *)(*(int64_t *)((int *)param_1[0xd] + 8) + uVal_14 * 4) =
         (int)pInt_25 - *(int *)param_1[0xd];
    if ((uVal_11 & 0x800) == 0) {
      *(int *)(*(int64_t *)(param_1[0xd] + 0x40) + uVal_14 * 4) = (int)uVal_14;
    }
    uVal_6 = pInt_25[5];
    uVal_19 = (uint64_t)uVal_6;
    uVal_24 = (uint64_t)(uint)pInt_25[6];
    if (*(int *)(param_1[0xd] + 0x68) == 0) {
      uVal_2 = *(ushort *)((int64_t)pInt_25 + 0x1e);
      uVal_16 = (uint)uVal_2;
      if (uVal_2 == 0) goto LAB_18007a96d;
      uVal_7 = uVal_24;
      if (uVal_24 < uVal_19) {
        uVal_7 = uVal_19;
      }
      uVal_13 = (uint)uVal_7;
      if (uVal_7 <= *(uint *)((int64_t)pInt_25 + 0x2a)) {
        uVal_13 = *(uint *)((int64_t)pInt_25 + 0x2a);
      }
      if (uVal_13 != 0xffffffff) goto LAB_18007a96d;
      local_10c0 = (uint64_t)*(ushort *)(pInt_25 + 7);
      local_10b8 = uVal_24;
      if ((uint)*(ushort *)(pInt_25 + 7) + (uint)uVal_2 + 0x2e <= uVal_18) {
        pSize_9 = (short *)0x0;
        pSize_15 = (short *)((int64_t)pInt_25 + local_10c0 + 0x2e);
LAB_18007a91b:
        do {
          if (uVal_16 < 4) {
LAB_18007aafa:
            thunk_FUN_180695dd0(pSize_9);
            goto LAB_18007a61e;
          }
          uVal_24 = (uint64_t)(ushort)pSize_15[1] + 4;
          if (uVal_16 < uVal_24) goto LAB_18007aafa;
          if (*pSize_15 == 1) {
            *(uint32_t *)(param_1[0xd] + 100) = 1;
            *(uint32_t *)(param_1[0xd] + 0x68) = 1;
            break;
          }
          uVal_16 = (uVal_16 - (ushort)pSize_15[1]) - 4;
          pSize_15 = (short *)((int64_t)pSize_15 + uVal_24);
        } while (uVal_16 != 0);
        thunk_FUN_180695dd0(pSize_9);
        uVal_24 = local_10b8;
        uVal_11 = local_10cc;
        goto LAB_18007a96d;
      }
      local_10c8 = (uint64_t)(uint)uVal_2;
      pSize_9 = (short *)_malloc_base();
      if (pSize_9 == (short *)0x0) {
LAB_18007aaf1:
        *(uint32_t *)((int64_t)param_1 + 0x1c) = 0x10;
      }
      else {
        uVal_24 = (*(func_ptr_t )param_1[9])
                           (param_1[0xc],(local_10c0 & 0xffffffff) + local_10b0,pSize_9,local_10c8);
        pSize_15 = pSize_9;
        if (uVal_24 == local_10c8) goto LAB_18007a91b;
        thunk_FUN_180695dd0(pSize_9);
LAB_18007ab15:
        *(uint32_t *)((int64_t)param_1 + 0x1c) = 0x14;
      }
      goto LAB_18007ab1c;
    }
LAB_18007a96d:
    if (((uVal_6 != 0xffffffff) && ((uint)uVal_24 != 0xffffffff)) &&
       (((*(int *)((int64_t)pInt_25 + 10) == 0 && ((uint)uVal_24 != uVal_6)) ||
        ((uVal_24 != 0 && (uVal_19 == 0)))))) goto LAB_18007a61e;
    uVal_2 = *(ushort *)((int64_t)pInt_25 + 0x22);
    if ((uVal_2 == 0xffff) || (uVal_2 != 1 && uVal_2 != uVal_21)) {
LAB_18007aae8:
      *(uint32_t *)((int64_t)param_1 + 0x1c) = 10;
    }
    else {
      if ((uVal_6 != 0xffffffff) && (*param_1 < *(uint *)((int64_t)pInt_25 + 0x2a) + uVal_19 + 0x1e))
      goto LAB_18007a61e;
      if ((*(byte *)((int64_t)pInt_25 + 9) & 0x20) == 0) {
        uVal_6 = (uint)*(ushort *)(pInt_25 + 8) +
                (uint)*(ushort *)((int64_t)pInt_25 + 0x1e) + (uint)*(ushort *)(pInt_25 + 7) + 0x2e;
        bFlag_26 = uVal_6 <= uVal_18;
        uVal_18 = uVal_18 - uVal_6;
        if (bFlag_26) goto code_r0x00018007a9fe;
        goto LAB_18007a61e;
      }
      *(uint32_t *)((int64_t)param_1 + 0x1c) = 5;
    }
  }
  goto LAB_18007ab1c;
code_r0x00018007a9fe:
  pInt_25 = (int *)((int64_t)pInt_25 + (uint64_t)uVal_6);
  uVal_14 = uVal_14 + 1;
  uVal_24 = (uint64_t)*(uint *)(param_1 + 2);
  if (uVal_24 <= uVal_14) goto LAB_18007aa12;
  goto LAB_18007a836;
LAB_18007aa12:
  uVal_10 = 1;
  if ((uVal_11 & 0x800) == 0) {
    func_0x180094db0(uVal_24,param_1[0xd]);
    uVal_10 = 1;
  }
  goto LAB_18007ab1e;
}

// func_0x18007ab60
uint64_t func_0x18007ab60(uint8_t (*param_1)[16],int64_t param_2,uint param_3,uint64_t param_4, uint64_t param_5)
{
  int64_t lVal_1;
  int iVal_2;
  uint8_t *pU64_3;
  int64_t lVal_4;
  uint8_t (*pArr16_5)[16];
  func_ptr_t fnPtr_6;
  
  if (param_2 == 0 || param_1 == (uint8_t (*)[16])0x0) {
    if (param_1 == (uint8_t (*)[16])0x0) {
      return 0;
    }
LAB_18007abf7:
    *(uint32_t *)(param_1[1] + 0xc) = 0x18;
    return 0;
  }
  if (param_5 - 1 < 0x15) goto LAB_18007abf7;
  pU64_3 = &DAT_1807602a0;
  if ((param_3 & 0x40000) == 0) {
    pU64_3 = &DAT_18076024b;
  }
  lVal_4 = func_0x18007add0(param_2,pU64_3);
  if (lVal_4 == 0) {
    *(uint32_t *)(param_1[1] + 0xc) = 0x11;
    return 0;
  }
  if (param_5 == 0) {
    iVal_2 = func_0x180682cc0(lVal_4,0,2);
    if (iVal_2 != 0) {
      func_0x18068a690(lVal_4);
      *(uint32_t *)(param_1[1] + 0xc) = 0x16;
      return 0;
    }
    param_5 = func_0x18068321c(lVal_4);
    if (param_5 < 0x16) {
      func_0x18068a690(lVal_4);
      *(uint32_t *)(param_1[1] + 0xc) = 8;
      return 0;
    }
  }
  if ((*(int64_t *)(param_1[6] + 8) != 0) || (*(int *)(param_1[1] + 4) != 0)) {
    *(uint32_t *)(param_1[1] + 0xc) = 0x18;
    goto LAB_18007abe8;
  }
  fnPtr_6 = *(func_ptr_t *)(param_1[2] + 8);
  if (fnPtr_6 == (func_ptr_t )0x0) {
    fnPtr_6 = (func_ptr_t )&LAB_1800780a0;
    *(uint8_t **)(param_1[2] + 8) = &LAB_1800780a0;
    if (*(int64_t *)param_1[3] != 0) goto LAB_18007ac82;
LAB_18007ad9d:
    *(func_ptr_t *)param_1[3] = func_0x1800780b0;
    lVal_1 = *(int64_t *)(param_1[3] + 8);
  }
  else {
    if (*(int64_t *)param_1[3] == 0) goto LAB_18007ad9d;
LAB_18007ac82:
    lVal_1 = *(int64_t *)(param_1[3] + 8);
  }
  if (lVal_1 == 0) {
    *(uint8_t **)(param_1[3] + 8) = &LAB_1800780c0;
  }
  *(uint32_t *)(param_1[1] + 0xc) = 0;
  *param_1 = ZEXT816(0);
  *(uint32_t *)param_1[1] = 0;
  pArr16_5 = (uint8_t (*)[16])(*fnPtr_6)(*(uint64_t *)param_1[4],1,0x98);
  *(uint8_t (**)[16])(param_1[6] + 8) = pArr16_5;
  if (pArr16_5 != (uint8_t (*)[16])0x0) {
    pArr16_5[8] = ZEXT816(0);
    pArr16_5[7] = ZEXT816(0);
    pArr16_5[6] = ZEXT816(0);
    pArr16_5[5] = ZEXT816(0);
    pArr16_5[4] = ZEXT816(0);
    pArr16_5[3] = ZEXT816(0);
    pArr16_5[2] = ZEXT816(0);
    pArr16_5[1] = ZEXT816(0);
    *pArr16_5 = ZEXT816(0);
    *(uint64_t *)pArr16_5[9] = 0;
    *(uint32_t *)(*(int64_t *)(param_1[6] + 8) + 0x18) = 1;
    *(uint32_t *)(*(int64_t *)(param_1[6] + 8) + 0x38) = 4;
    *(uint32_t *)(*(int64_t *)(param_1[6] + 8) + 0x58) = 4;
    *(uint *)(*(int64_t *)(param_1[6] + 8) + 0x60) = param_3;
    *(uint32_t *)(*(int64_t *)(param_1[6] + 8) + 100) = 0;
    *(uint32_t *)(*(int64_t *)(param_1[6] + 8) + 0x68) = 0;
    *(uint64_t *)(param_1[1] + 4) = 0x400000001;
    *(uint8_t **)(param_1[4] + 8) = &LAB_18007af10;
    *(uint8_t (**)[16])param_1[6] = param_1;
    *(int64_t *)(*(int64_t *)(param_1[6] + 8) + 0x70) = lVal_4;
    *(uint64_t *)*param_1 = param_5;
    *(uint64_t *)(*(int64_t *)(param_1[6] + 8) + 0x78) = param_4;
    iVal_2 = func_0x18007a3b0(param_1,param_3);
    if (iVal_2 == 0) {
      func_0x18007a290(param_1,0);
      return 0;
    }
    return 1;
  }
  *(uint32_t *)(param_1[1] + 0xc) = 0x10;
LAB_18007abe8:
  func_0x18068a690(lVal_4);
  return 0;
}

// func_0x18007add0
FILE * func_0x18007add0(LPCSTR param_1,LPCSTR param_2)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  errno_t eVar3;
  wchar_t *lpWideCharStr;
  wchar_t *lpWideCharStr_00;
  uint64_t uVal_4;
  FILE *pFn_5;
  uint8_t auStackY_78 [32];
  FILE *local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStackY_78;
  iVal_2 = MultiByteToWideChar(0xfde9,0,param_1,-1,(LPWSTR)0x0,0);
  lpWideCharStr = (wchar_t *)_malloc_base((int64_t)iVal_2 * 2);
  MultiByteToWideChar(0xfde9,0,param_1,-1,lpWideCharStr,iVal_2);
  iVal_2 = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  lpWideCharStr_00 = (wchar_t *)_malloc_base((int64_t)iVal_2 * 2);
  MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr_00,iVal_2);
  local_40 = (FILE *)0x0;
  eVar3 = _wfopen_s(&local_40,lpWideCharStr,lpWideCharStr_00);
  thunk_FUN_180695dd0(lpWideCharStr);
  thunk_FUN_180695dd0(lpWideCharStr_00);
  pFn_5 = (FILE *)0x0;
  if (eVar3 == 0) {
    pFn_5 = local_40;
  }
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStackY_78)) {
    return pFn_5;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStackY_78);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_1)();
  return (FILE *)uVal_4;
}

// func_0x18007af90
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
uint64_t func_0x18007af90(uint64_t *param_1,uint64_t param_2,func_ptr_t param_3,uint64_t param_4,uint param_5)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  int iVal_4;
  uint32_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  uint8_t auStack_2618 [32];
  int64_t local_25f8;
  int64_t *local_25f0;
  int local_25e8;
  int64_t local_25d8;
  uint64_t local_25d0;
  uint64_t local_25c8;
  int64_t local_25c0;
  int64_t local_25b8;
  uint64_t local_25b0;
  int64_t local_25a8;
  uint64_t local_25a0;
  uint64_t local_2598;
  int64_t local_2590;
  uint64_t local_2588;
  uint32_t local_2580 [2094];
  int local_4c8 [6];
  ushort local_4ae;
  ushort local_4ac;
  uint8_t local_4a0 [20];
  byte local_48c;
  ushort local_48a;
  int local_488;
  uint64_t local_480;
  uint64_t local_478;
  int64_t local_468;
  int local_45c;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_2618;
  uVal_8 = 0;
  if (param_1 == (uint64_t *)0x0) goto LAB_18007b065;
  pLong_1 = (int64_t *)param_1[0xd];
  if ((param_3 == (func_ptr_t )0x0 || pLong_1 == (int64_t *)0x0) || (param_1[9] == 0)) {
    *(uint32_t *)((int64_t)param_1 + 0x1c) = 0x18;
    uVal_8 = 0;
    goto LAB_18007b065;
  }
  if ((uint)param_2 < *(uint *)(param_1 + 2)) {
    lVal_13 = (uint64_t)*(uint *)(pLong_1[4] + (param_2 & 0xffffffff) * 4) + *pLong_1;
  }
  else {
    lVal_13 = 0;
  }
  local_25f8 = 0;
  iVal_3 = func_0x18007b630(param_1,param_2,lVal_13,local_4a0);
  if (iVal_3 == 0) {
LAB_18007b063:
    uVal_8 = 0;
    goto LAB_18007b065;
  }
  uVal_8 = 1;
  if (local_480 == 0 || local_45c != 0) goto LAB_18007b065;
  if ((local_48c & 0x61) != 0) {
    *(uint32_t *)((int64_t)param_1 + 0x1c) = 5;
    goto LAB_18007b063;
  }
  if ((local_48a & 0xfff7) != 0 && (param_5 & 0x400) == 0) {
    *(uint32_t *)((int64_t)param_1 + 0x1c) = 4;
    uVal_8 = 0;
    goto LAB_18007b065;
  }
  lVal_13 = (*(func_ptr_t )param_1[9])(param_1[0xc],local_468,local_4c8,0x1e);
  if (lVal_13 != 0x1e) {
    *(uint32_t *)((int64_t)param_1 + 0x1c) = 0x14;
    uVal_8 = 0;
    goto LAB_18007b065;
  }
  if (local_4c8[0] != 0x4034b50) {
    *(uint32_t *)((int64_t)param_1 + 0x1c) = 9;
    uVal_8 = 0;
    goto LAB_18007b065;
  }
  if (*param_1 < local_468 + (uint64_t)local_4ae + (uint64_t)local_4ac + local_480 + 0x1e) {
    *(uint32_t *)((int64_t)param_1 + 0x1c) = 9;
    uVal_8 = 0;
    goto LAB_18007b065;
  }
  local_25c0 = (uint64_t)local_4ac + local_468 + (uint64_t)local_4ae + 0x1e;
  if (*(int64_t *)(param_1[0xd] + 0x80) == 0) {
    local_25c8 = 0x10000;
    if (local_480 < 0x10000) {
      local_25c8 = local_480;
    }
    lVal_13 = (*(func_ptr_t )param_1[5])(param_1[8],1);
    uVal_11 = 0;
    uVal_14 = local_480;
    if (lVal_13 == 0) {
      *(uint32_t *)((int64_t)param_1 + 0x1c) = 0x10;
      uVal_8 = 0;
      goto LAB_18007b065;
    }
  }
  else {
    lVal_13 = *(int64_t *)(param_1[0xd] + 0x80) + local_25c0;
    local_25c8 = local_480;
    uVal_11 = local_480;
    uVal_14 = 0;
  }
  if ((param_5 & 0x400) == 0 && local_48a != 0) {
    local_2580[0] = 0;
    lVal_6 = (*(func_ptr_t )param_1[5])(param_1[8],1,0x8000);
    if (lVal_6 == 0) {
      *(uint32_t *)((int64_t)param_1 + 0x1c) = 0x10;
      goto LAB_18007b5a4;
    }
    local_25b0 = 0;
    local_2598 = local_478;
    lVal_9 = 0;
    uVal_12 = 0;
    local_25d0 = uVal_14;
    local_25d8 = lVal_13;
    local_25b8 = lVal_6;
    do {
      lVal_6 = local_25b8;
      lVal_13 = local_25c0;
      uVal_14 = (uint64_t)((uint)uVal_12 & 0x7fff);
      local_2590 = 0x8000 - uVal_14;
      if (uVal_11 == 0) {
        if (*(int64_t *)(param_1[0xd] + 0x80) != 0) {
          uVal_11 = 0;
          goto LAB_18007b2cc;
        }
        uVal_11 = local_25d0;
        if (local_25c8 < local_25d0) {
          uVal_11 = local_25c8;
        }
        uVal_7 = (*(func_ptr_t )param_1[9])(param_1[0xc],local_25c0,local_25d8,uVal_11);
        if (uVal_7 == uVal_11) {
          local_25c0 = lVal_13 + uVal_11;
          local_25d0 = local_25d0 - uVal_11;
          lVal_9 = 0;
          goto LAB_18007b2cc;
        }
        uVal_5 = 0x14;
LAB_18007b4d0:
        *(uint32_t *)((int64_t)param_1 + 0x1c) = uVal_5;
        lVal_13 = local_25d8;
        goto LAB_18007b5a4;
      }
LAB_18007b2cc:
      lVal_10 = uVal_14 + lVal_6;
      local_25e8 = (uint)(local_25d0 != 0) * 2;
      local_25f0 = &local_2590;
      local_25f8 = lVal_10;
      local_25a8 = lVal_9;
      local_25a0 = uVal_11;
      local_2588 = uVal_11;
      iVal_4 = func_0x1800780d0(local_2580,lVal_9 + local_25d8,&local_2588,lVal_6);
      uVal_14 = local_2588;
      lVal_13 = local_2590;
      uVal_8 = local_25b0;
      if (local_2590 != 0) {
        lVal_6 = (*param_3)(param_4,uVal_12,lVal_10,local_2590);
        if (lVal_6 == lVal_13) {
          uVal_8 = func_0x180077fd0(local_25b0,lVal_10,lVal_13);
          uVal_12 = uVal_12 + lVal_13;
          if (uVal_12 <= local_2598) goto LAB_18007b238;
          uVal_5 = 0xb;
          lVal_6 = local_25b8;
        }
        else {
          uVal_5 = 0x1f;
          lVal_6 = local_25b8;
        }
        goto LAB_18007b4d0;
      }
LAB_18007b238:
      local_25b0 = uVal_8;
      uVal_11 = local_25a0 - uVal_14;
      lVal_9 = local_25a8 + uVal_14;
    } while (iVal_4 - 1U < 2);
    uVal_8 = 0;
    iVal_3 = (int)local_25b0;
    lVal_13 = local_25d8;
    lVal_6 = local_25b8;
    if (iVal_4 == 0) goto LAB_18007b549;
  }
  else {
    if (*(int64_t *)(param_1[0xd] + 0x80) == 0) {
      if (uVal_14 == 0) {
        uVal_12 = 0;
      }
      else {
        if ((param_5 & 0x400) == 0) {
          uVal_12 = 0;
          iVal_3 = 0;
          lVal_6 = local_25c0;
          local_25d0 = param_4;
          do {
            uVal_11 = uVal_14;
            if (local_25c8 < uVal_14) {
              uVal_11 = local_25c8;
            }
            uVal_7 = (*(func_ptr_t )param_1[9])(param_1[0xc],lVal_6,lVal_13,uVal_11);
            if (uVal_7 != uVal_11) goto LAB_18007b597;
            iVal_3 = func_0x180077fd0(iVal_3,lVal_13,uVal_11);
            uVal_7 = (*param_3)(local_25d0,uVal_12,lVal_13,uVal_11);
            if (uVal_7 != uVal_11) goto LAB_18007b57e;
            lVal_6 = lVal_6 + uVal_11;
            uVal_12 = uVal_12 + uVal_11;
            uVal_14 = uVal_14 - uVal_11;
          } while (uVal_14 != 0);
          lVal_6 = 0;
          goto LAB_18007b549;
        }
        uVal_12 = 0;
        lVal_6 = local_25c0;
        do {
          uVal_11 = uVal_14;
          if (local_25c8 < uVal_14) {
            uVal_11 = local_25c8;
          }
          uVal_7 = (*(func_ptr_t )param_1[9])(param_1[0xc],lVal_6,lVal_13,uVal_11);
          if (uVal_7 != uVal_11) goto LAB_18007b597;
          uVal_7 = (*param_3)(param_4,uVal_12,lVal_13,uVal_11);
          if (uVal_7 != uVal_11) goto LAB_18007b57e;
          lVal_6 = lVal_6 + uVal_11;
          uVal_12 = uVal_12 + uVal_11;
          uVal_14 = uVal_14 - uVal_11;
        } while (uVal_14 != 0);
      }
      iVal_3 = 0;
      lVal_6 = 0;
LAB_18007b549:
      uVal_8 = 1;
      local_480 = uVal_12;
      if ((param_5 & 0x400) != 0) goto LAB_18007b5a6;
    }
    else {
      uVal_11 = (*param_3)(param_4,0,lVal_13,local_480);
      if (uVal_11 != local_480) {
LAB_18007b57e:
        *(uint32_t *)((int64_t)param_1 + 0x1c) = 0x1f;
        lVal_6 = 0;
        goto LAB_18007b5a4;
      }
      if ((param_5 & 0x400) != 0) {
        uVal_8 = 1;
        lVal_6 = 0;
        goto LAB_18007b5a6;
      }
      lVal_6 = 0;
      iVal_3 = func_0x180077fd0(0,lVal_13,local_480);
    }
    if (local_480 == local_478) {
      uVal_8 = 1;
      if (iVal_3 == local_488) goto LAB_18007b5a6;
      *(uint32_t *)((int64_t)param_1 + 0x1c) = 0xb;
    }
    else {
      *(uint32_t *)((int64_t)param_1 + 0x1c) = 0xd;
    }
LAB_18007b5a4:
    uVal_8 = 0;
  }
LAB_18007b5a6:
  if (*(int64_t *)(param_1[0xd] + 0x80) == 0) {
    (*(func_ptr_t )param_1[6])(param_1[8],lVal_13);
  }
  if (lVal_6 != 0) {
    (*(func_ptr_t )param_1[6])(param_1[8],lVal_6);
  }
LAB_18007b065:
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_2618)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_2618);
    fnPtr_2 = (func_ptr_t )swi(3);
    uVal_8 = (*fnPtr_2)();
    return uVal_8;
  }
  return uVal_8;
LAB_18007b597:
  *(uint32_t *)((int64_t)param_1 + 0x1c) = 0x14;
  lVal_6 = 0;
  goto LAB_18007b5a4;
}

// func_0x18007b630
uint64_t func_0x18007b630(int64_t param_1,uint param_2,int64_t param_3,uint *param_4,uint32_t *param_5)
{
  byte bFlag_1;
  ushort uVal_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t *pLong_7;
  uint uVal_8;
  uint uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  short *pSize_12;
  uint64_t *pU64_13;
  uint8_t auStack_98 [44];
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  uint64_t local_54;
  uint32_t local_4c;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  if (param_5 != (uint32_t *)0x0) {
    *param_5 = 0;
  }
  if (param_3 == 0 || param_4 == (uint *)0x0) {
    uVal_5 = 0;
    if (param_1 != 0) {
      *(uint32_t *)(param_1 + 0x1c) = 0x18;
    }
    goto LAB_18007b9ec;
  }
  *param_4 = param_2;
  uVal_10 = (uint64_t)param_2;
  *(uint64_t *)(param_4 + 2) =
       (uint64_t)*(uint *)(*(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x20) + uVal_10 * 4);
  *(uint16_t *)(param_4 + 4) = *(uint16_t *)(param_3 + 4);
  *(uint16_t *)((int64_t)param_4 + 0x12) = *(uint16_t *)(param_3 + 6);
  *(uint16_t *)(param_4 + 5) = *(uint16_t *)(param_3 + 8);
  *(uint16_t *)((int64_t)param_4 + 0x16) = *(uint16_t *)(param_3 + 10);
  bFlag_1 = *(byte *)(ushort *)(param_3 + 0xc);
  local_54 = 0;
  local_4c = 0xffffffff;
  local_58 = (*(byte *)(param_3 + 0xf) >> 1) + 0x50;
  local_5c = (*(ushort *)(param_3 + 0xe) >> 5 & 0xf) - 1;
  local_60 = *(byte *)(ushort *)(param_3 + 0xe) & 0x1f;
  local_64 = (uint)(*(byte *)(param_3 + 0xd) >> 3);
  local_68 = *(ushort *)(param_3 + 0xc) >> 5 & 0x3f;
  local_6c = (uint)bFlag_1 + (uint)bFlag_1 & 0x3e;
  uVal_5 = func_0x18068528c(&local_6c);
  *(uint64_t *)(param_4 + 0x114) = uVal_5;
  param_4[6] = *(uint *)(param_3 + 0x10);
  *(uint64_t *)(param_4 + 8) = (uint64_t)*(uint *)(param_3 + 0x14);
  *(uint64_t *)(param_4 + 10) = (uint64_t)*(uint *)(param_3 + 0x18);
  *(uint16_t *)(param_4 + 0xc) = *(uint16_t *)(param_3 + 0x24);
  param_4[0xd] = *(uint *)(param_3 + 0x26);
  *(uint64_t *)(param_4 + 0xe) = (uint64_t)*(uint *)(param_3 + 0x2a);
  uVal_11 = (uint64_t)(uint)*(ushort *)(param_3 + 0x1c);
  if (0x1fe < *(ushort *)(param_3 + 0x1c)) {
    uVal_11 = 0x1ff;
  }
  func_0x1806aa960(param_4 + 0x14,param_3 + 0x2e,uVal_11);
  *(uint8_t *)((int64_t)param_4 + uVal_11 + 0x50) = 0;
  uVal_8 = 0x1ff;
  if (*(ushort *)(param_3 + 0x20) < 0x1ff) {
    uVal_8 = (uint)*(ushort *)(param_3 + 0x20);
  }
  param_4[0x10] = uVal_8;
  func_0x1806aa960(param_4 + 0x94,
                (uint64_t)*(byte *)(param_3 + 0x1f) * 0x100 + (uint64_t)*(byte *)(param_3 + 0x1c)
                + param_3 + (uint64_t)*(byte *)(param_3 + 0x1d) * 0x100 + 0x2e +
                (uint64_t)*(byte *)(param_3 + 0x1e),(uint64_t)uVal_8);
  *(uint8_t *)((int64_t)param_4 + (uint64_t)uVal_8 + 0x250) = 0;
  pLong_7 = *(int64_t **)(param_1 + 0x68);
  if (((pLong_7 == (int64_t *)0x0) || (*(uint *)(param_1 + 0x10) <= param_2)) || (*pLong_7 == 0)) {
    *(uint32_t *)(param_1 + 0x1c) = 0x18;
    param_4[0x11] = 0;
    pLong_7 = *(int64_t **)(param_1 + 0x68);
    if (pLong_7 != (int64_t *)0x0) goto LAB_18007b85f;
LAB_18007b880:
    *(uint32_t *)(param_1 + 0x1c) = 0x18;
    uVal_8 = 0;
  }
  else {
    lVal_6 = *pLong_7 + (uint64_t)*(uint *)(pLong_7[4] + uVal_10 * 4);
    if (((uint64_t)*(ushort *)(lVal_6 + 0x1c) == 0) ||
       (uVal_8 = 1, *(char *)(lVal_6 + 0x2d + (uint64_t)*(ushort *)(lVal_6 + 0x1c)) != '/')) {
      uVal_8 = *(byte *)(lVal_6 + 0x26) >> 4 & 1;
    }
    param_4[0x11] = uVal_8;
    pLong_7 = *(int64_t **)(param_1 + 0x68);
    if (pLong_7 == (int64_t *)0x0) goto LAB_18007b880;
LAB_18007b85f:
    if ((*(uint *)(param_1 + 0x10) <= param_2) || (*pLong_7 == 0)) goto LAB_18007b880;
    uVal_8 = (uint)((*(byte *)(*pLong_7 + 8 + (uint64_t)*(uint *)(pLong_7[4] + uVal_10 * 4)) & 0x41) !=
                  0);
  }
  param_4[0x12] = uVal_8;
  pLong_7 = *(int64_t **)(param_1 + 0x68);
  uVal_4 = 0x18;
  if (((pLong_7 == (int64_t *)0x0) || (*(uint *)(param_1 + 0x10) <= param_2)) ||
     (lVal_6 = *pLong_7, lVal_6 == 0)) {
LAB_18007b8ee:
    *(uint32_t *)(param_1 + 0x1c) = uVal_4;
    uVal_8 = 0;
  }
  else {
    uVal_11 = (uint64_t)*(uint *)(pLong_7[4] + uVal_10 * 4);
    bFlag_1 = *(byte *)(lVal_6 + 10 + uVal_11);
    uVal_4 = 4;
    if ((bFlag_1 & 8) != CONCAT11(*(uint8_t *)(lVal_6 + 0xb + uVal_11),bFlag_1)) goto LAB_18007b8ee;
    bFlag_1 = *(byte *)(lVal_6 + 8 + uVal_11);
    uVal_4 = 5;
    if ((bFlag_1 & 0x41) != 0) goto LAB_18007b8ee;
    uVal_4 = 6;
    uVal_8 = 1;
    if ((bFlag_1 & 0x20) != 0) goto LAB_18007b8ee;
  }
  param_4[0x13] = uVal_8;
  uVal_11 = *(uint64_t *)(param_4 + 10);
  uVal_10 = *(uint64_t *)(param_4 + 8);
  if (*(uint64_t *)(param_4 + 8) <= uVal_11) {
    uVal_10 = uVal_11;
  }
  if (uVal_10 <= *(uint64_t *)(param_4 + 0xe)) {
    uVal_10 = *(uint64_t *)(param_4 + 0xe);
  }
  uVal_5 = 1;
  if ((uVal_10 == 0xffffffff) &&
     (uVal_8 = (uint)*(ushort *)(param_3 + 0x1e), *(ushort *)(param_3 + 0x1e) != 0)) {
    pSize_12 = (short *)(param_3 + 0x2e + (uint64_t)*(byte *)(param_3 + 0x1c) +
                       (uint64_t)*(byte *)(param_3 + 0x1d) * 0x100);
    while (3 < uVal_8) {
      uVal_2 = pSize_12[1];
      uVal_9 = (uint)uVal_2;
      if (uVal_8 < uVal_2 + 4) break;
      if (*pSize_12 == 1) {
        if (param_5 != (uint32_t *)0x0) {
          *param_5 = 1;
          uVal_11 = *(uint64_t *)(param_4 + 10);
        }
        if (uVal_11 == 0xffffffff) {
          if (uVal_2 < 8) break;
          *(uint64_t *)(param_4 + 10) = *(uint64_t *)(pSize_12 + 2);
          pU64_13 = (uint64_t *)(pSize_12 + 6);
          uVal_9 = uVal_2 - 8;
        }
        else {
          pU64_13 = (uint64_t *)(pSize_12 + 2);
        }
        if (*(int64_t *)(param_4 + 8) == 0xffffffff) {
          if (uVal_9 < 8) break;
          *(uint64_t *)(param_4 + 8) = *pU64_13;
          pU64_13 = pU64_13 + 1;
          uVal_9 = uVal_9 - 8;
        }
        if (*(int64_t *)(param_4 + 0xe) == 0xffffffff) {
          if (uVal_9 < 8) break;
          *(uint64_t *)(param_4 + 0xe) = *pU64_13;
        }
        goto LAB_18007b9ec;
      }
      pSize_12 = (short *)((int64_t)pSize_12 + (uint64_t)(uVal_2 + 4));
      uVal_8 = (uVal_8 - uVal_2) - 4;
      if (uVal_8 == 0) goto LAB_18007b9ec;
    }
    *(uint32_t *)(param_1 + 0x1c) = 9;
    uVal_5 = 0;
  }
LAB_18007b9ec:
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_98)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_98);
    fnPtr_3 = (func_ptr_t )swi(3);
    uVal_5 = (*fnPtr_3)();
    return uVal_5;
  }
  return uVal_5;
}

// func_0x18007ba70
void func_0x18007ba70(void)
{
  func_ptr_t fnPtr_1;
  
  func_0x1806744c0("string too long");
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18007ba90
void func_0x18007ba90(void)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_48 [40];
  uint8_t **local_20;
  char *local_18;
  uint64_t local_10;
  uint64_t local_8;
  
  local_8 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  local_10 = 0;
  local_18 = "bad array new length";
  local_20 = std::bad_array_new_length::vftable;
  func_0x18067a120(&local_20,&DAT_1807686a0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18007bb20
char * func_0x18007bb20(int64_t param_1)
{
  char *fnPtr_1;
  
  fnPtr_1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    fnPtr_1 = *(char **)(param_1 + 8);
  }
  return fnPtr_1;
}

// func_0x18007bb40
uint64_t * func_0x18007bb40(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = std::exception::vftable;
  func_0x18067b490(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x18);
  }
  return param_1;
}

// func_0x18007bba0
uint64_t * func_0x18007bba0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  if ((int64_t)param_2 < 0) {
    func_0x18007ba70();
LAB_18007bc94:
    func_0x18007ba90();
    goto LAB_18007bc99;
  }
  uVal_1 = param_1[3];
  uVal_5 = 0x7fffffffffffffff;
  if ((uVal_1 >> 1 ^ 0x7fffffffffffffff) < uVal_1) {
LAB_18007bc05:
    lVal_3 = func_0x180672de0(uVal_5 + 0x28);
    uVal_6 = lVal_3 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_6 - 8) = lVal_3;
  }
  else {
    uVal_5 = (uVal_1 >> 1) + uVal_1;
    if (uVal_5 < (param_2 | 0xf)) {
      uVal_5 = param_2 | 0xf;
    }
    if (0xffe < uVal_5) {
      if (0xffffffffffffffd7 < uVal_5) goto LAB_18007bc94;
      goto LAB_18007bc05;
    }
    uVal_6 = func_0x180672de0(uVal_5 + 1);
  }
  param_1[2] = param_2;
  param_1[3] = uVal_5;
  func_0x1806aa960(uVal_6,param_4,param_2);
  *(uint8_t *)(uVal_6 + param_2) = 0;
  if (0xf < uVal_1) {
    uVal_2 = *param_1;
    uVal_5 = uVal_1 + 1;
    uVal_4 = uVal_2;
    if (0xfff < uVal_5) {
      uVal_4 = *(uint64_t *)(uVal_2 - 8);
      if (0x1f < (uVal_2 - 8) - uVal_4) {
LAB_18007bc99:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(uVal_4,uVal_5);
  }
  *param_1 = uVal_6;
  return param_1;
}

// func_0x18007bf80
void func_0x18007bf80(uint64_t *param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  if (param_2 >> 0x3d == 0) {
    uVal_1 = *param_1;
    uVal_2 = (int64_t)(param_1[2] - uVal_1) >> 3;
    uVal_6 = (uVal_2 >> 1) + uVal_2;
    if (uVal_6 <= param_2) {
      uVal_6 = param_2;
    }
    if (0x1fffffffffffffff - (uVal_2 >> 1) < uVal_2) {
      uVal_6 = 0x1fffffffffffffff;
    }
    if (uVal_6 >> 0x3d == 0) {
      uVal_2 = param_1[1];
      if (uVal_6 == 0) {
        uVal_5 = 0;
      }
      else if (uVal_6 < 0x200) {
        uVal_5 = func_0x180672de0(uVal_6 * 8);
      }
      else {
        if (0x1ffffffffffffffb < uVal_6) goto LAB_18007c0b6;
        lVal_3 = func_0x180672de0(uVal_6 * 8 + 0x27);
        uVal_5 = lVal_3 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_5 - 8) = lVal_3;
      }
      lVal_3 = uVal_2 - uVal_1;
      func_0x1806ab010(uVal_5 + lVal_3,0,(param_2 - (lVal_3 >> 3)) * 8);
      func_0x1806aa960(uVal_5,*param_1,param_1[1] - *param_1);
      uVal_1 = *param_1;
      if (uVal_1 != 0) {
        uVal_4 = param_1[2] - uVal_1;
        uVal_2 = uVal_1;
        if (0xfff < uVal_4) {
          uVal_2 = *(uint64_t *)(uVal_1 - 8);
          if (0x1f < (uVal_1 - 8) - uVal_2) goto LAB_18007c0c0;
          uVal_4 = uVal_4 + 0x27;
        }
        thunk_FUN_180695dd0(uVal_2,uVal_4);
      }
      *param_1 = uVal_5;
      param_1[1] = uVal_5 + param_2 * 8;
      param_1[2] = uVal_5 + uVal_6 * 8;
      return;
    }
LAB_18007c0b6:
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_18007c0c0:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18007c0d0
void func_0x18007c0d0(void)
{
  func_ptr_t fnPtr_1;
  
  func_0x1806744c0("vector too long");
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18007c170
void func_0x18007c170(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x12] = 1;
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
  return;
}

// func_0x18007c4d0
void func_0x18007c4d0(uint64_t *param_1,uint64_t *param_2)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  int64_t *pLong_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  
  uVal_8 = *param_2;
  if (0xaaaaaaaaaaaaaaa < uVal_8) {
LAB_18007c697:
    func_0x18007ba90();
    goto LAB_18007c69c;
  }
  uVal_4 = *param_1;
  uVal_5 = param_1[1];
  if (uVal_8 == 0) {
    uVal_11 = 0;
    uVal_10 = *param_1;
    uVal_8 = param_1[1];
    if (uVal_10 == uVal_8) goto LAB_18007c560;
LAB_18007c581:
    lVal_7 = 0;
    do {
      *(uint64_t *)(uVal_11 + lVal_7) = *(uint64_t *)(uVal_10 + lVal_7);
      *(uint8_t (*)[16])(uVal_11 + 8 + lVal_7) = ZEXT816(0);
      *(uint64_t *)(uVal_11 + 8 + lVal_7) = *(uint64_t *)(uVal_10 + 8 + lVal_7);
      *(uint64_t *)(uVal_11 + 0x10 + lVal_7) = *(uint64_t *)(uVal_10 + 0x10 + lVal_7);
      *(uint8_t (*)[16])(uVal_10 + 8 + lVal_7) = ZEXT816(0);
      lVal_3 = uVal_10 + lVal_7;
      lVal_7 = lVal_7 + 0x18;
    } while (lVal_3 + 0x18U != uVal_8);
    uVal_10 = *param_1;
    uVal_8 = *param_2;
  }
  else {
    if (uVal_8 < 0xab) {
      uVal_11 = func_0x180672de0();
      uVal_10 = *param_1;
      uVal_8 = param_1[1];
      if (uVal_10 != uVal_8) goto LAB_18007c581;
    }
    else {
      if (uVal_8 == 0xaaaaaaaaaaaaaaa) goto LAB_18007c697;
      lVal_7 = func_0x180672de0();
      uVal_11 = lVal_7 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_11 - 8) = lVal_7;
      uVal_10 = *param_1;
      uVal_8 = param_1[1];
      if (uVal_10 != uVal_8) goto LAB_18007c581;
    }
LAB_18007c560:
    uVal_8 = *param_2;
  }
  if (uVal_10 != 0) {
    uVal_9 = param_1[1];
    if (uVal_10 == uVal_9) {
      uVal_9 = param_1[2] - uVal_10;
    }
    else {
      do {
        pLong_6 = *(int64_t **)(uVal_10 + 0x10);
        if (pLong_6 != (int64_t *)0x0) {
          LOCK();
          pLong_1 = pLong_6 + 1;
          *(int *)pLong_1 = *(int *)pLong_1 + -1;
          UNLOCK();
          if (*(int *)pLong_1 == 0) {
            (**(func_ptr_t *)*pLong_6)(pLong_6);
            LOCK();
            pInt_2 = (int *)((int64_t)pLong_6 + 0xc);
            *pInt_2 = *pInt_2 + -1;
            UNLOCK();
            if (*pInt_2 == 0) {
              (**(func_ptr_t *)(*pLong_6 + 8))(pLong_6);
            }
          }
        }
        uVal_10 = uVal_10 + 0x18;
      } while (uVal_10 != uVal_9);
      uVal_10 = *param_1;
      uVal_9 = param_1[2] - uVal_10;
    }
    if (0xfff < uVal_9) {
      if (0x1f < (uVal_10 - 8) - *(uint64_t *)(uVal_10 - 8)) {
LAB_18007c69c:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_9 = uVal_9 + 0x27;
      uVal_10 = *(uint64_t *)(uVal_10 - 8);
    }
    thunk_FUN_180695dd0(uVal_10,uVal_9);
  }
  *param_1 = uVal_11;
  param_1[1] = (uVal_5 - uVal_4) + uVal_11;
  param_1[2] = uVal_11 + uVal_8 * 0x18;
  return;
}

// func_0x18007c6a0
int64_t func_0x18007c6a0(uint64_t *param_1,uint64_t param_2)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  
  uVal_9 = *param_1;
  uVal_11 = ((int64_t)(param_1[1] - uVal_9) >> 3) * -0x5555555555555555 + 1;
  uVal_7 = ((int64_t)(param_1[2] - uVal_9) >> 3) * -0x5555555555555555;
  uVal_10 = 0xaaaaaaaaaaaaaaa - (uVal_7 >> 1);
  uVal_12 = (uVal_7 >> 1) + uVal_7;
  if (uVal_12 <= uVal_11) {
    uVal_12 = uVal_11;
  }
  if (uVal_10 <= uVal_7 && uVal_7 - uVal_10 != 0) {
    uVal_12 = 0xaaaaaaaaaaaaaaa;
  }
  if (0xaaaaaaaaaaaaaaa < uVal_12) {
LAB_18007c949:
    func_0x18007ba90();
    goto LAB_18007c94e;
  }
  if (uVal_12 == 0) {
    uVal_7 = 0;
  }
  else if (uVal_12 < 0xab) {
    uVal_7 = func_0x180672de0(uVal_12 * 0x18);
  }
  else {
    if (uVal_12 == 0xaaaaaaaaaaaaaaa) goto LAB_18007c949;
    lVal_5 = func_0x180672de0(uVal_12 * 0x18 + 0x27);
    uVal_7 = lVal_5 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_7 - 8) = lVal_5;
  }
  lVal_5 = param_2 - uVal_9;
  *(uint8_t (*)[16])(uVal_7 + lVal_5) = ZEXT816(0);
  *(uint64_t *)(uVal_7 + 0x10 + lVal_5) = 0;
  uVal_10 = *param_1;
  uVal_9 = param_1[1];
  if (param_2 == uVal_9) {
    if (uVal_10 != param_2) {
      lVal_6 = 0;
      do {
        *(uint64_t *)(uVal_7 + lVal_6) = *(uint64_t *)(uVal_10 + lVal_6);
        *(uint8_t (*)[16])(uVal_7 + 8 + lVal_6) = ZEXT816(0);
        *(uint64_t *)(uVal_7 + 8 + lVal_6) = *(uint64_t *)(uVal_10 + 8 + lVal_6);
        *(uint64_t *)(uVal_7 + 0x10 + lVal_6) = *(uint64_t *)(uVal_10 + 0x10 + lVal_6);
        *(uint8_t (*)[16])(uVal_10 + 8 + lVal_6) = ZEXT816(0);
        lVal_8 = uVal_10 + lVal_6;
        lVal_6 = lVal_6 + 0x18;
      } while (lVal_8 + 0x18U != param_2);
      goto LAB_18007c888;
    }
  }
  else {
    if (uVal_10 != param_2) {
      lVal_6 = 0;
      do {
        *(uint64_t *)(uVal_7 + lVal_6) = *(uint64_t *)(uVal_10 + lVal_6);
        *(uint8_t (*)[16])(uVal_7 + 8 + lVal_6) = ZEXT816(0);
        *(uint64_t *)(uVal_7 + 8 + lVal_6) = *(uint64_t *)(uVal_10 + 8 + lVal_6);
        *(uint64_t *)(uVal_7 + 0x10 + lVal_6) = *(uint64_t *)(uVal_10 + 0x10 + lVal_6);
        *(uint8_t (*)[16])(uVal_10 + 8 + lVal_6) = ZEXT816(0);
        lVal_8 = uVal_10 + lVal_6;
        lVal_6 = lVal_6 + 0x18;
      } while (lVal_8 + 0x18U != param_2);
      uVal_9 = param_1[1];
    }
    if (param_2 != uVal_9) {
      lVal_6 = lVal_5 + uVal_7;
      lVal_8 = 0;
      do {
        *(uint64_t *)(lVal_6 + 0x18 + lVal_8) = *(uint64_t *)(param_2 + lVal_8);
        *(uint8_t (*)[16])(lVal_6 + 0x20 + lVal_8) = ZEXT816(0);
        *(uint64_t *)(lVal_6 + 0x20 + lVal_8) = *(uint64_t *)(param_2 + 8 + lVal_8);
        *(uint64_t *)(lVal_6 + 0x28 + lVal_8) = *(uint64_t *)(param_2 + 0x10 + lVal_8);
        *(uint8_t (*)[16])(param_2 + 8 + lVal_8) = ZEXT816(0);
        lVal_3 = param_2 + lVal_8;
        lVal_8 = lVal_8 + 0x18;
      } while (lVal_3 + 0x18U != uVal_9);
    }
LAB_18007c888:
    uVal_10 = *param_1;
  }
  if (uVal_10 != 0) {
    uVal_9 = param_1[1];
    if (uVal_10 == uVal_9) {
      uVal_9 = param_1[2] - uVal_10;
    }
    else {
      do {
        pLong_4 = *(int64_t **)(uVal_10 + 0x10);
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
              (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
            }
          }
        }
        uVal_10 = uVal_10 + 0x18;
      } while (uVal_10 != uVal_9);
      uVal_10 = *param_1;
      uVal_9 = param_1[2] - uVal_10;
    }
    if (0xfff < uVal_9) {
      if (0x1f < (uVal_10 - 8) - *(uint64_t *)(uVal_10 - 8)) {
LAB_18007c94e:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_9 = uVal_9 + 0x27;
      uVal_10 = *(uint64_t *)(uVal_10 - 8);
    }
    thunk_FUN_180695dd0(uVal_10,uVal_9);
  }
  *param_1 = uVal_7;
  param_1[1] = uVal_7 + uVal_11 * 0x18;
  param_1[2] = uVal_7 + uVal_12 * 0x18;
  return lVal_5 + uVal_7;
}

// func_0x18007c9b0
void func_0x18007c9b0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x1b] = 1;
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
  return;
}

// func_0x18007cab0
void func_0x18007cab0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x16] = 1;
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
  return;
}

// func_0x18007cb80
void func_0x18007cb80(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x13] = 1;
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
  return;
}

// func_0x18007cc40
void func_0x18007cc40(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x1d] = 1;
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
  return;
}

// func_0x18007cd50
void func_0x18007cd50(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x15] = 1;
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
  return;
}

// func_0x18007ce20
void func_0x18007ce20(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x1f] = 1;
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
  return;
}

// func_0x18007cfc0
void func_0x18007cfc0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x14] = 1;
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
  return;
}

// func_0x18007d150
void func_0x18007d150(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x10] = 1;
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
  return;
}

// func_0x18007d2b0
void func_0x18007d2b0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x11] = 1;
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
  return;
}

// func_0x18007d3c0
void func_0x18007d3c0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x17] = 1;
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
  return;
}

// func_0x18007d9e0
void func_0x18007d9e0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x18] = 1;
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
  return;
}

// func_0x18007e3d0
int64_t func_0x18007e3d0(uint64_t *param_1,uint64_t param_2,uint64_t *param_3, uint8_t (*param_4)[16])
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  
  uVal_9 = *param_1;
  uVal_12 = ((int64_t)(param_1[1] - uVal_9) >> 3) * -0x5555555555555555 + 1;
  uVal_7 = ((int64_t)(param_1[2] - uVal_9) >> 3) * -0x5555555555555555;
  uVal_11 = 0xaaaaaaaaaaaaaaa - (uVal_7 >> 1);
  uVal_10 = (uVal_7 >> 1) + uVal_7;
  if (uVal_10 <= uVal_12) {
    uVal_10 = uVal_12;
  }
  if (uVal_11 <= uVal_7 && uVal_7 - uVal_11 != 0) {
    uVal_10 = 0xaaaaaaaaaaaaaaa;
  }
  if (0xaaaaaaaaaaaaaaa < uVal_10) {
LAB_18007e6a0:
    func_0x18007ba90();
    goto LAB_18007e6a5;
  }
  if (uVal_10 == 0) {
    uVal_7 = 0;
  }
  else if (uVal_10 < 0xab) {
    uVal_7 = func_0x180672de0(uVal_10 * 0x18);
  }
  else {
    if (uVal_10 == 0xaaaaaaaaaaaaaaa) goto LAB_18007e6a0;
    lVal_5 = func_0x180672de0(uVal_10 * 0x18 + 0x27);
    uVal_7 = lVal_5 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_7 - 8) = lVal_5;
  }
  lVal_5 = param_2 - uVal_9;
  *(uint64_t *)(uVal_7 + lVal_5) = *param_3;
  *(uint8_t (*)[16])(uVal_7 + 8 + lVal_5) = ZEXT816(0);
  *(uint64_t *)(uVal_7 + 8 + lVal_5) = *(uint64_t *)*param_4;
  *(uint64_t *)(uVal_7 + 0x10 + lVal_5) = *(uint64_t *)(*param_4 + 8);
  *param_4 = ZEXT816(0);
  uVal_11 = *param_1;
  uVal_9 = param_1[1];
  if (param_2 == uVal_9) {
    if (uVal_11 != param_2) {
      lVal_6 = 0;
      do {
        *(uint64_t *)(uVal_7 + lVal_6) = *(uint64_t *)(uVal_11 + lVal_6);
        *(uint8_t (*)[16])(uVal_7 + 8 + lVal_6) = ZEXT816(0);
        *(uint64_t *)(uVal_7 + 8 + lVal_6) = *(uint64_t *)(uVal_11 + 8 + lVal_6);
        *(uint64_t *)(uVal_7 + 0x10 + lVal_6) = *(uint64_t *)(uVal_11 + 0x10 + lVal_6);
        *(uint8_t (*)[16])(uVal_11 + 8 + lVal_6) = ZEXT816(0);
        lVal_8 = uVal_11 + lVal_6;
        lVal_6 = lVal_6 + 0x18;
      } while (lVal_8 + 0x18U != param_2);
      goto LAB_18007e5d8;
    }
  }
  else {
    if (uVal_11 != param_2) {
      lVal_6 = 0;
      do {
        *(uint64_t *)(uVal_7 + lVal_6) = *(uint64_t *)(uVal_11 + lVal_6);
        *(uint8_t (*)[16])(uVal_7 + 8 + lVal_6) = ZEXT816(0);
        *(uint64_t *)(uVal_7 + 8 + lVal_6) = *(uint64_t *)(uVal_11 + 8 + lVal_6);
        *(uint64_t *)(uVal_7 + 0x10 + lVal_6) = *(uint64_t *)(uVal_11 + 0x10 + lVal_6);
        *(uint8_t (*)[16])(uVal_11 + 8 + lVal_6) = ZEXT816(0);
        lVal_8 = uVal_11 + lVal_6;
        lVal_6 = lVal_6 + 0x18;
      } while (lVal_8 + 0x18U != param_2);
      uVal_9 = param_1[1];
    }
    if (param_2 != uVal_9) {
      lVal_6 = lVal_5 + uVal_7;
      lVal_8 = 0;
      do {
        *(uint64_t *)(lVal_6 + 0x18 + lVal_8) = *(uint64_t *)(param_2 + lVal_8);
        *(uint8_t (*)[16])(lVal_6 + 0x20 + lVal_8) = ZEXT816(0);
        *(uint64_t *)(lVal_6 + 0x20 + lVal_8) = *(uint64_t *)(param_2 + 8 + lVal_8);
        *(uint64_t *)(lVal_6 + 0x28 + lVal_8) = *(uint64_t *)(param_2 + 0x10 + lVal_8);
        *(uint8_t (*)[16])(param_2 + 8 + lVal_8) = ZEXT816(0);
        lVal_3 = param_2 + lVal_8;
        lVal_8 = lVal_8 + 0x18;
      } while (lVal_3 + 0x18U != uVal_9);
    }
LAB_18007e5d8:
    uVal_11 = *param_1;
  }
  if (uVal_11 != 0) {
    uVal_9 = param_1[1];
    if (uVal_11 == uVal_9) {
      uVal_9 = param_1[2] - uVal_11;
    }
    else {
      do {
        pLong_4 = *(int64_t **)(uVal_11 + 0x10);
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
              (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
            }
          }
        }
        uVal_11 = uVal_11 + 0x18;
      } while (uVal_11 != uVal_9);
      uVal_11 = *param_1;
      uVal_9 = param_1[2] - uVal_11;
    }
    if (0xfff < uVal_9) {
      if (0x1f < (uVal_11 - 8) - *(uint64_t *)(uVal_11 - 8)) {
LAB_18007e6a5:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_9 = uVal_9 + 0x27;
      uVal_11 = *(uint64_t *)(uVal_11 - 8);
    }
    thunk_FUN_180695dd0(uVal_11,uVal_9);
  }
  *param_1 = uVal_7;
  param_1[1] = uVal_7 + uVal_12 * 0x18;
  param_1[2] = uVal_7 + uVal_10 * 0x18;
  return lVal_5 + uVal_7;
}

// func_0x18007e850
int64_t func_0x18007e850(uint64_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t *param_4)
{
  int *pInt_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  
  uVal_9 = *param_1;
  uVal_12 = ((int64_t)(param_1[1] - uVal_9) >> 3) * -0x5555555555555555 + 1;
  uVal_7 = ((int64_t)(param_1[2] - uVal_9) >> 3) * -0x5555555555555555;
  uVal_11 = 0xaaaaaaaaaaaaaaa - (uVal_7 >> 1);
  uVal_10 = (uVal_7 >> 1) + uVal_7;
  if (uVal_10 <= uVal_12) {
    uVal_10 = uVal_12;
  }
  if (uVal_11 <= uVal_7 && uVal_7 - uVal_11 != 0) {
    uVal_10 = 0xaaaaaaaaaaaaaaa;
  }
  if (0xaaaaaaaaaaaaaaa < uVal_10) {
LAB_18007eb1d:
    func_0x18007ba90();
    goto LAB_18007eb22;
  }
  if (uVal_10 == 0) {
    uVal_7 = 0;
  }
  else if (uVal_10 < 0xab) {
    uVal_7 = func_0x180672de0(uVal_10 * 0x18);
  }
  else {
    if (uVal_10 == 0xaaaaaaaaaaaaaaa) goto LAB_18007eb1d;
    lVal_5 = func_0x180672de0(uVal_10 * 0x18 + 0x27);
    uVal_7 = lVal_5 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_7 - 8) = lVal_5;
  }
  lVal_6 = param_2 - uVal_9;
  lVal_5 = uVal_7 + lVal_6;
  *(uint64_t *)(uVal_7 + lVal_6) = *param_3;
  *(uint8_t (*)[16])(uVal_7 + 8 + lVal_6) = ZEXT816(0);
  if (param_4[1] != 0) {
    LOCK();
    pInt_1 = (int *)(param_4[1] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
  }
  *(uint64_t *)(lVal_5 + 8) = *param_4;
  *(uint64_t *)(lVal_5 + 0x10) = param_4[1];
  uVal_11 = *param_1;
  uVal_9 = param_1[1];
  if (param_2 == uVal_9) {
    if (uVal_11 != param_2) {
      lVal_6 = 0;
      do {
        *(uint64_t *)(uVal_7 + lVal_6) = *(uint64_t *)(uVal_11 + lVal_6);
        *(uint8_t (*)[16])(uVal_7 + 8 + lVal_6) = ZEXT816(0);
        *(uint64_t *)(uVal_7 + 8 + lVal_6) = *(uint64_t *)(uVal_11 + 8 + lVal_6);
        *(uint64_t *)(uVal_7 + 0x10 + lVal_6) = *(uint64_t *)(uVal_11 + 0x10 + lVal_6);
        *(uint8_t (*)[16])(uVal_11 + 8 + lVal_6) = ZEXT816(0);
        lVal_8 = uVal_11 + lVal_6;
        lVal_6 = lVal_6 + 0x18;
      } while (lVal_8 + 0x18U != param_2);
      goto LAB_18007ea58;
    }
  }
  else {
    if (uVal_11 != param_2) {
      lVal_8 = 0;
      do {
        *(uint64_t *)(uVal_7 + lVal_8) = *(uint64_t *)(uVal_11 + lVal_8);
        *(uint8_t (*)[16])(uVal_7 + 8 + lVal_8) = ZEXT816(0);
        *(uint64_t *)(uVal_7 + 8 + lVal_8) = *(uint64_t *)(uVal_11 + 8 + lVal_8);
        *(uint64_t *)(uVal_7 + 0x10 + lVal_8) = *(uint64_t *)(uVal_11 + 0x10 + lVal_8);
        *(uint8_t (*)[16])(uVal_11 + 8 + lVal_8) = ZEXT816(0);
        lVal_3 = uVal_11 + lVal_8;
        lVal_8 = lVal_8 + 0x18;
      } while (lVal_3 + 0x18U != param_2);
      uVal_9 = param_1[1];
    }
    if (param_2 != uVal_9) {
      lVal_6 = lVal_6 + uVal_7;
      lVal_8 = 0;
      do {
        *(uint64_t *)(lVal_6 + 0x18 + lVal_8) = *(uint64_t *)(param_2 + lVal_8);
        *(uint8_t (*)[16])(lVal_6 + 0x20 + lVal_8) = ZEXT816(0);
        *(uint64_t *)(lVal_6 + 0x20 + lVal_8) = *(uint64_t *)(param_2 + 8 + lVal_8);
        *(uint64_t *)(lVal_6 + 0x28 + lVal_8) = *(uint64_t *)(param_2 + 0x10 + lVal_8);
        *(uint8_t (*)[16])(param_2 + 8 + lVal_8) = ZEXT816(0);
        lVal_3 = param_2 + lVal_8;
        lVal_8 = lVal_8 + 0x18;
      } while (lVal_3 + 0x18U != uVal_9);
    }
LAB_18007ea58:
    uVal_11 = *param_1;
  }
  if (uVal_11 != 0) {
    uVal_9 = param_1[1];
    if (uVal_11 == uVal_9) {
      uVal_9 = param_1[2] - uVal_11;
    }
    else {
      do {
        pLong_4 = *(int64_t **)(uVal_11 + 0x10);
        if (pLong_4 != (int64_t *)0x0) {
          LOCK();
          pLong_2 = pLong_4 + 1;
          *(int *)pLong_2 = *(int *)pLong_2 + -1;
          UNLOCK();
          if (*(int *)pLong_2 == 0) {
            (**(func_ptr_t *)*pLong_4)(pLong_4);
            LOCK();
            pInt_1 = (int *)((int64_t)pLong_4 + 0xc);
            *pInt_1 = *pInt_1 + -1;
            UNLOCK();
            if (*pInt_1 == 0) {
              (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
            }
          }
        }
        uVal_11 = uVal_11 + 0x18;
      } while (uVal_11 != uVal_9);
      uVal_11 = *param_1;
      uVal_9 = param_1[2] - uVal_11;
    }
    if (0xfff < uVal_9) {
      if (0x1f < (uVal_11 - 8) - *(uint64_t *)(uVal_11 - 8)) {
LAB_18007eb22:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_9 = uVal_9 + 0x27;
      uVal_11 = *(uint64_t *)(uVal_11 - 8);
    }
    thunk_FUN_180695dd0(uVal_11,uVal_9);
  }
  *param_1 = uVal_7;
  param_1[1] = uVal_7 + uVal_12 * 0x18;
  param_1[2] = uVal_7 + uVal_10 * 0x18;
  return lVal_5;
}

// func_0x18007eb30
int64_t func_0x18007eb30(uint64_t *param_1,uint64_t param_2,uint64_t *param_3)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  
  uVal_9 = *param_1;
  uVal_11 = ((int64_t)(param_1[1] - uVal_9) >> 3) * -0x5555555555555555 + 1;
  uVal_7 = ((int64_t)(param_1[2] - uVal_9) >> 3) * -0x5555555555555555;
  uVal_10 = 0xaaaaaaaaaaaaaaa - (uVal_7 >> 1);
  uVal_12 = (uVal_7 >> 1) + uVal_7;
  if (uVal_12 <= uVal_11) {
    uVal_12 = uVal_11;
  }
  if (uVal_10 <= uVal_7 && uVal_7 - uVal_10 != 0) {
    uVal_12 = 0xaaaaaaaaaaaaaaa;
  }
  if (0xaaaaaaaaaaaaaaa < uVal_12) {
LAB_18007edd9:
    func_0x18007ba90();
    goto LAB_18007edde;
  }
  if (uVal_12 == 0) {
    uVal_7 = 0;
  }
  else if (uVal_12 < 0xab) {
    uVal_7 = func_0x180672de0(uVal_12 * 0x18);
  }
  else {
    if (uVal_12 == 0xaaaaaaaaaaaaaaa) goto LAB_18007edd9;
    lVal_5 = func_0x180672de0(uVal_12 * 0x18 + 0x27);
    uVal_7 = lVal_5 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_7 - 8) = lVal_5;
  }
  lVal_5 = param_2 - uVal_9;
  *(uint64_t *)(uVal_7 + lVal_5) = *param_3;
  *(uint8_t (*)[16])(uVal_7 + 8 + lVal_5) = ZEXT816(0);
  uVal_10 = *param_1;
  uVal_9 = param_1[1];
  if (param_2 == uVal_9) {
    if (uVal_10 != param_2) {
      lVal_6 = 0;
      do {
        *(uint64_t *)(uVal_7 + lVal_6) = *(uint64_t *)(uVal_10 + lVal_6);
        *(uint8_t (*)[16])(uVal_7 + 8 + lVal_6) = ZEXT816(0);
        *(uint64_t *)(uVal_7 + 8 + lVal_6) = *(uint64_t *)(uVal_10 + 8 + lVal_6);
        *(uint64_t *)(uVal_7 + 0x10 + lVal_6) = *(uint64_t *)(uVal_10 + 0x10 + lVal_6);
        *(uint8_t (*)[16])(uVal_10 + 8 + lVal_6) = ZEXT816(0);
        lVal_8 = uVal_10 + lVal_6;
        lVal_6 = lVal_6 + 0x18;
      } while (lVal_8 + 0x18U != param_2);
      goto LAB_18007ed18;
    }
  }
  else {
    if (uVal_10 != param_2) {
      lVal_6 = 0;
      do {
        *(uint64_t *)(uVal_7 + lVal_6) = *(uint64_t *)(uVal_10 + lVal_6);
        *(uint8_t (*)[16])(uVal_7 + 8 + lVal_6) = ZEXT816(0);
        *(uint64_t *)(uVal_7 + 8 + lVal_6) = *(uint64_t *)(uVal_10 + 8 + lVal_6);
        *(uint64_t *)(uVal_7 + 0x10 + lVal_6) = *(uint64_t *)(uVal_10 + 0x10 + lVal_6);
        *(uint8_t (*)[16])(uVal_10 + 8 + lVal_6) = ZEXT816(0);
        lVal_8 = uVal_10 + lVal_6;
        lVal_6 = lVal_6 + 0x18;
      } while (lVal_8 + 0x18U != param_2);
      uVal_9 = param_1[1];
    }
    if (param_2 != uVal_9) {
      lVal_6 = lVal_5 + uVal_7;
      lVal_8 = 0;
      do {
        *(uint64_t *)(lVal_6 + 0x18 + lVal_8) = *(uint64_t *)(param_2 + lVal_8);
        *(uint8_t (*)[16])(lVal_6 + 0x20 + lVal_8) = ZEXT816(0);
        *(uint64_t *)(lVal_6 + 0x20 + lVal_8) = *(uint64_t *)(param_2 + 8 + lVal_8);
        *(uint64_t *)(lVal_6 + 0x28 + lVal_8) = *(uint64_t *)(param_2 + 0x10 + lVal_8);
        *(uint8_t (*)[16])(param_2 + 8 + lVal_8) = ZEXT816(0);
        lVal_3 = param_2 + lVal_8;
        lVal_8 = lVal_8 + 0x18;
      } while (lVal_3 + 0x18U != uVal_9);
    }
LAB_18007ed18:
    uVal_10 = *param_1;
  }
  if (uVal_10 != 0) {
    uVal_9 = param_1[1];
    if (uVal_10 == uVal_9) {
      uVal_9 = param_1[2] - uVal_10;
    }
    else {
      do {
        pLong_4 = *(int64_t **)(uVal_10 + 0x10);
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
              (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
            }
          }
        }
        uVal_10 = uVal_10 + 0x18;
      } while (uVal_10 != uVal_9);
      uVal_10 = *param_1;
      uVal_9 = param_1[2] - uVal_10;
    }
    if (0xfff < uVal_9) {
      if (0x1f < (uVal_10 - 8) - *(uint64_t *)(uVal_10 - 8)) {
LAB_18007edde:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_9 = uVal_9 + 0x27;
      uVal_10 = *(uint64_t *)(uVal_10 - 8);
    }
    thunk_FUN_180695dd0(uVal_10,uVal_9);
  }
  *param_1 = uVal_7;
  param_1[1] = uVal_7 + uVal_11 * 0x18;
  param_1[2] = uVal_7 + uVal_12 * 0x18;
  return lVal_5 + uVal_7;
}

// func_0x18007ede0
int64_t func_0x18007ede0(uint64_t *param_1,uint64_t param_2,uint32_t *param_3)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  
  uVal_9 = *param_1;
  uVal_12 = ((int64_t)(param_1[1] - uVal_9) >> 5) + 1;
  uVal_11 = (int64_t)(param_1[2] - uVal_9) >> 5;
  uVal_5 = (uVal_11 >> 1) + uVal_11;
  if (uVal_5 <= uVal_12) {
    uVal_5 = uVal_12;
  }
  if (0x7ffffffffffffff - (uVal_11 >> 1) < uVal_11) {
    uVal_5 = 0x7ffffffffffffff;
  }
  if (uVal_5 >> 0x3b != 0) {
LAB_18007f0d7:
    func_0x18007ba90();
    goto LAB_18007f0dc;
  }
  lVal_10 = uVal_5 * 0x20;
  if (uVal_5 == 0) {
    uVal_5 = 0;
  }
  else if (uVal_5 < 0x80) {
    uVal_5 = func_0x180672de0(lVal_10);
  }
  else {
    if (uVal_5 == 0x7ffffffffffffff) goto LAB_18007f0d7;
    lVal_6 = func_0x180672de0(lVal_10 + 0x27);
    uVal_5 = lVal_6 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_5 - 8) = lVal_6;
  }
  lVal_6 = param_2 - uVal_9;
  *(uint32_t *)(uVal_5 + lVal_6) = *param_3;
  *(uint32_t *)(uVal_5 + 4 + lVal_6) = param_3[1];
  *(uint32_t *)(uVal_5 + 8 + lVal_6) = param_3[2];
  *(uint8_t (*)[16])(uVal_5 + 0x10 + lVal_6) = ZEXT816(0);
  *(uint64_t *)(uVal_5 + 0x10 + lVal_6) = *(uint64_t *)(param_3 + 4);
  *(uint64_t *)(uVal_5 + 0x18 + lVal_6) = *(uint64_t *)(param_3 + 6);
  *(uint8_t (*)[16])(param_3 + 4) = ZEXT816(0);
  uVal_11 = *param_1;
  uVal_9 = param_1[1];
  if (param_2 == uVal_9) {
    if (uVal_11 != param_2) {
      lVal_7 = 0;
      do {
        *(uint32_t *)(uVal_5 + lVal_7) = *(uint32_t *)(uVal_11 + lVal_7);
        *(uint32_t *)(uVal_5 + 4 + lVal_7) = *(uint32_t *)(uVal_11 + 4 + lVal_7);
        *(uint32_t *)(uVal_5 + 8 + lVal_7) = *(uint32_t *)(uVal_11 + 8 + lVal_7);
        *(uint8_t (*)[16])(uVal_5 + 0x10 + lVal_7) = ZEXT816(0);
        lVal_8 = *(int64_t *)(uVal_11 + 0x18 + lVal_7);
        if (lVal_8 != 0) {
          LOCK();
          pInt_2 = (int *)(lVal_8 + 8);
          *pInt_2 = *pInt_2 + 1;
          UNLOCK();
        }
        lVal_8 = uVal_11 + lVal_7;
        *(uint64_t *)(uVal_5 + lVal_7 + 0x10) = *(uint64_t *)(lVal_8 + 0x10);
        *(uint64_t *)(uVal_5 + lVal_7 + 0x18) = *(uint64_t *)(lVal_8 + 0x18);
        lVal_7 = lVal_7 + 0x20;
      } while (lVal_8 + 0x20U != param_2);
      goto LAB_18007ef9c;
    }
  }
  else {
    if (uVal_11 != param_2) {
      lVal_7 = 0;
      do {
        *(uint32_t *)(uVal_5 + lVal_7) = *(uint32_t *)(uVal_11 + lVal_7);
        *(uint32_t *)(uVal_5 + 4 + lVal_7) = *(uint32_t *)(uVal_11 + 4 + lVal_7);
        *(uint32_t *)(uVal_5 + 8 + lVal_7) = *(uint32_t *)(uVal_11 + 8 + lVal_7);
        *(uint8_t (*)[16])(uVal_5 + 0x10 + lVal_7) = ZEXT816(0);
        *(uint64_t *)(uVal_5 + 0x10 + lVal_7) = *(uint64_t *)(uVal_11 + 0x10 + lVal_7);
        *(uint64_t *)(uVal_5 + 0x18 + lVal_7) = *(uint64_t *)(uVal_11 + 0x18 + lVal_7);
        *(uint8_t (*)[16])(uVal_11 + 0x10 + lVal_7) = ZEXT816(0);
        lVal_8 = uVal_11 + lVal_7;
        lVal_7 = lVal_7 + 0x20;
      } while (lVal_8 + 0x20U != param_2);
      uVal_9 = param_1[1];
    }
    if (param_2 != uVal_9) {
      lVal_7 = lVal_6 + uVal_5;
      lVal_8 = 0;
      do {
        *(uint32_t *)(lVal_7 + 0x20 + lVal_8) = *(uint32_t *)(param_2 + lVal_8);
        *(uint32_t *)(lVal_7 + 0x24 + lVal_8) = *(uint32_t *)(param_2 + 4 + lVal_8);
        *(uint32_t *)(lVal_7 + 0x28 + lVal_8) = *(uint32_t *)(param_2 + 8 + lVal_8);
        *(uint8_t (*)[16])(lVal_7 + 0x30 + lVal_8) = ZEXT816(0);
        *(uint64_t *)(lVal_7 + 0x30 + lVal_8) = *(uint64_t *)(param_2 + 0x10 + lVal_8);
        *(uint64_t *)(lVal_7 + 0x38 + lVal_8) = *(uint64_t *)(param_2 + 0x18 + lVal_8);
        *(uint8_t (*)[16])(param_2 + 0x10 + lVal_8) = ZEXT816(0);
        lVal_3 = param_2 + lVal_8;
        lVal_8 = lVal_8 + 0x20;
      } while (lVal_3 + 0x20U != uVal_9);
    }
LAB_18007ef9c:
    uVal_11 = *param_1;
  }
  if (uVal_11 != 0) {
    uVal_9 = param_1[1];
    if (uVal_11 == uVal_9) {
      uVal_9 = param_1[2] - uVal_11;
    }
    else {
      do {
        pLong_4 = *(int64_t **)(uVal_11 + 0x18);
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
              (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
            }
          }
        }
        uVal_11 = uVal_11 + 0x20;
      } while (uVal_11 != uVal_9);
      uVal_11 = *param_1;
      uVal_9 = param_1[2] - uVal_11;
    }
    if (0xfff < uVal_9) {
      if (0x1f < (uVal_11 - 8) - *(uint64_t *)(uVal_11 - 8)) {
LAB_18007f0dc:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_9 = uVal_9 + 0x27;
      uVal_11 = *(uint64_t *)(uVal_11 - 8);
    }
    thunk_FUN_180695dd0(uVal_11,uVal_9);
  }
  *param_1 = uVal_5;
  param_1[1] = uVal_12 * 0x20 + uVal_5;
  param_1[2] = lVal_10 + uVal_5;
  return lVal_6 + uVal_5;
}

// func_0x18007f260
int64_t func_0x18007f260(uint64_t *param_1,uint64_t param_2,uint64_t *param_3)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  
  uVal_1 = *param_1;
  uVal_6 = ((int64_t)(param_1[1] - uVal_1) >> 3) + 1;
  uVal_2 = (int64_t)(param_1[2] - uVal_1) >> 3;
  uVal_7 = (uVal_2 >> 1) + uVal_2;
  if (uVal_7 <= uVal_6) {
    uVal_7 = uVal_6;
  }
  if (0x1fffffffffffffff - (uVal_2 >> 1) < uVal_2) {
    uVal_7 = 0x1fffffffffffffff;
  }
  if (uVal_7 >> 0x3d == 0) {
    if (uVal_7 == 0) {
      uVal_2 = 0;
    }
    else if (uVal_7 < 0x200) {
      uVal_2 = func_0x180672de0(uVal_7 * 8);
    }
    else {
      if (0x1ffffffffffffffb < uVal_7) goto LAB_18007f3c8;
      lVal_3 = func_0x180672de0(uVal_7 * 8 + 0x27);
      uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_2 - 8) = lVal_3;
    }
    lVal_3 = uVal_2 + (param_2 - uVal_1);
    *(uint64_t *)(uVal_2 + (param_2 - uVal_1)) = *param_3;
    if (param_2 == param_1[1]) {
      func_0x1806aa960(uVal_2,*param_1,param_2 - *param_1);
      uVal_1 = *param_1;
    }
    else {
      func_0x1806aa960(uVal_2,*param_1,param_2 - *param_1);
      func_0x1806aa960(lVal_3 + 8,param_2,param_1[1] - param_2);
      uVal_1 = *param_1;
    }
    if (uVal_1 != 0) {
      uVal_5 = param_1[2] - uVal_1;
      uVal_4 = uVal_1;
      if (0xfff < uVal_5) {
        uVal_4 = *(uint64_t *)(uVal_1 - 8);
        if (0x1f < (uVal_1 - 8) - uVal_4) goto LAB_18007f3cd;
        uVal_5 = uVal_5 + 0x27;
      }
      thunk_FUN_180695dd0(uVal_4,uVal_5);
    }
    *param_1 = uVal_2;
    param_1[1] = uVal_2 + uVal_6 * 8;
    param_1[2] = uVal_2 + uVal_7 * 8;
    return lVal_3;
  }
LAB_18007f3c8:
  func_0x18007ba90();
LAB_18007f3cd:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18007f460
void func_0x18007f460(void)
{
  func_ptr_t fnPtr_1;
  
  func_0x1806744f0("invalid vector subscript");
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18007f730
int64_t func_0x18007f730(uint64_t *param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  
  uVal_1 = *param_1;
  uVal_6 = ((int64_t)(param_1[1] - uVal_1) >> 3) + 1;
  uVal_2 = (int64_t)(param_1[2] - uVal_1) >> 3;
  uVal_7 = (uVal_2 >> 1) + uVal_2;
  if (uVal_7 <= uVal_6) {
    uVal_7 = uVal_6;
  }
  if (0x1fffffffffffffff - (uVal_2 >> 1) < uVal_2) {
    uVal_7 = 0x1fffffffffffffff;
  }
  if (uVal_7 >> 0x3d == 0) {
    if (uVal_7 == 0) {
      uVal_2 = 0;
    }
    else if (uVal_7 < 0x200) {
      uVal_2 = func_0x180672de0(uVal_7 * 8);
    }
    else {
      if (0x1ffffffffffffffb < uVal_7) goto LAB_18007f896;
      lVal_3 = func_0x180672de0(uVal_7 * 8 + 0x27);
      uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_2 - 8) = lVal_3;
    }
    lVal_3 = uVal_2 + (param_2 - uVal_1);
    *(uint64_t *)(uVal_2 + (param_2 - uVal_1)) = 0;
    if (param_2 == param_1[1]) {
      func_0x1806aa960(uVal_2,*param_1,param_2 - *param_1);
      uVal_1 = *param_1;
    }
    else {
      func_0x1806aa960(uVal_2,*param_1,param_2 - *param_1);
      func_0x1806aa960(lVal_3 + 8,param_2,param_1[1] - param_2);
      uVal_1 = *param_1;
    }
    if (uVal_1 != 0) {
      uVal_5 = param_1[2] - uVal_1;
      uVal_4 = uVal_1;
      if (0xfff < uVal_5) {
        uVal_4 = *(uint64_t *)(uVal_1 - 8);
        if (0x1f < (uVal_1 - 8) - uVal_4) goto LAB_18007f89b;
        uVal_5 = uVal_5 + 0x27;
      }
      thunk_FUN_180695dd0(uVal_4,uVal_5);
    }
    *param_1 = uVal_2;
    param_1[1] = uVal_2 + uVal_6 * 8;
    param_1[2] = uVal_2 + uVal_7 * 8;
    return lVal_3;
  }
LAB_18007f896:
  func_0x18007ba90();
LAB_18007f89b:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18007f9f0
int64_t func_0x18007f9f0(uint64_t *param_1,uint64_t param_2,uint32_t *param_3,uint64_t *param_4)
{
  int *pInt_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  
  uVal_9 = *param_1;
  uVal_10 = ((int64_t)(param_1[1] - uVal_9) >> 5) + 1;
  uVal_12 = (int64_t)(param_1[2] - uVal_9) >> 5;
  uVal_5 = (uVal_12 >> 1) + uVal_12;
  if (uVal_5 <= uVal_10) {
    uVal_5 = uVal_10;
  }
  if (0x7ffffffffffffff - (uVal_12 >> 1) < uVal_12) {
    uVal_5 = 0x7ffffffffffffff;
  }
  if (uVal_5 >> 0x3b != 0) {
LAB_18007fce7:
    func_0x18007ba90();
    goto LAB_18007fcec;
  }
  lVal_11 = uVal_5 * 0x20;
  if (uVal_5 == 0) {
    uVal_5 = 0;
  }
  else if (uVal_5 < 0x80) {
    uVal_5 = func_0x180672de0(lVal_11);
  }
  else {
    if (uVal_5 == 0x7ffffffffffffff) goto LAB_18007fce7;
    lVal_6 = func_0x180672de0(lVal_11 + 0x27);
    uVal_5 = lVal_6 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_5 - 8) = lVal_6;
  }
  lVal_7 = param_2 - uVal_9;
  lVal_6 = uVal_5 + lVal_7;
  *(uint32_t *)(uVal_5 + lVal_7) = *param_3;
  *(uint32_t *)(uVal_5 + 4 + lVal_7) = param_3[1];
  *(uint32_t *)(uVal_5 + 8 + lVal_7) = param_3[2];
  *(uint8_t (*)[16])(uVal_5 + 0x10 + lVal_7) = ZEXT816(0);
  if (param_4[1] != 0) {
    LOCK();
    pInt_1 = (int *)(param_4[1] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
  }
  *(uint64_t *)(lVal_6 + 0x10) = *param_4;
  *(uint64_t *)(lVal_6 + 0x18) = param_4[1];
  uVal_12 = *param_1;
  uVal_9 = param_1[1];
  if (param_2 == uVal_9) {
    if (uVal_12 != param_2) {
      lVal_7 = 0;
      do {
        *(uint32_t *)(uVal_5 + lVal_7) = *(uint32_t *)(uVal_12 + lVal_7);
        *(uint32_t *)(uVal_5 + 4 + lVal_7) = *(uint32_t *)(uVal_12 + 4 + lVal_7);
        *(uint32_t *)(uVal_5 + 8 + lVal_7) = *(uint32_t *)(uVal_12 + 8 + lVal_7);
        *(uint8_t (*)[16])(uVal_5 + 0x10 + lVal_7) = ZEXT816(0);
        lVal_8 = *(int64_t *)(uVal_12 + 0x18 + lVal_7);
        if (lVal_8 != 0) {
          LOCK();
          pInt_1 = (int *)(lVal_8 + 8);
          *pInt_1 = *pInt_1 + 1;
          UNLOCK();
        }
        lVal_8 = uVal_12 + lVal_7;
        *(uint64_t *)(uVal_5 + lVal_7 + 0x10) = *(uint64_t *)(lVal_8 + 0x10);
        *(uint64_t *)(uVal_5 + lVal_7 + 0x18) = *(uint64_t *)(lVal_8 + 0x18);
        lVal_7 = lVal_7 + 0x20;
      } while (lVal_8 + 0x20U != param_2);
      goto LAB_18007fbac;
    }
  }
  else {
    if (uVal_12 != param_2) {
      lVal_8 = 0;
      do {
        *(uint32_t *)(uVal_5 + lVal_8) = *(uint32_t *)(uVal_12 + lVal_8);
        *(uint32_t *)(uVal_5 + 4 + lVal_8) = *(uint32_t *)(uVal_12 + 4 + lVal_8);
        *(uint32_t *)(uVal_5 + 8 + lVal_8) = *(uint32_t *)(uVal_12 + 8 + lVal_8);
        *(uint8_t (*)[16])(uVal_5 + 0x10 + lVal_8) = ZEXT816(0);
        *(uint64_t *)(uVal_5 + 0x10 + lVal_8) = *(uint64_t *)(uVal_12 + 0x10 + lVal_8);
        *(uint64_t *)(uVal_5 + 0x18 + lVal_8) = *(uint64_t *)(uVal_12 + 0x18 + lVal_8);
        *(uint8_t (*)[16])(uVal_12 + 0x10 + lVal_8) = ZEXT816(0);
        lVal_3 = uVal_12 + lVal_8;
        lVal_8 = lVal_8 + 0x20;
      } while (lVal_3 + 0x20U != param_2);
      uVal_9 = param_1[1];
    }
    if (param_2 != uVal_9) {
      lVal_7 = lVal_7 + uVal_5;
      lVal_8 = 0;
      do {
        *(uint32_t *)(lVal_7 + 0x20 + lVal_8) = *(uint32_t *)(param_2 + lVal_8);
        *(uint32_t *)(lVal_7 + 0x24 + lVal_8) = *(uint32_t *)(param_2 + 4 + lVal_8);
        *(uint32_t *)(lVal_7 + 0x28 + lVal_8) = *(uint32_t *)(param_2 + 8 + lVal_8);
        *(uint8_t (*)[16])(lVal_7 + 0x30 + lVal_8) = ZEXT816(0);
        *(uint64_t *)(lVal_7 + 0x30 + lVal_8) = *(uint64_t *)(param_2 + 0x10 + lVal_8);
        *(uint64_t *)(lVal_7 + 0x38 + lVal_8) = *(uint64_t *)(param_2 + 0x18 + lVal_8);
        *(uint8_t (*)[16])(param_2 + 0x10 + lVal_8) = ZEXT816(0);
        lVal_3 = param_2 + lVal_8;
        lVal_8 = lVal_8 + 0x20;
      } while (lVal_3 + 0x20U != uVal_9);
    }
LAB_18007fbac:
    uVal_12 = *param_1;
  }
  if (uVal_12 != 0) {
    uVal_9 = param_1[1];
    if (uVal_12 == uVal_9) {
      uVal_9 = param_1[2] - uVal_12;
    }
    else {
      do {
        pLong_4 = *(int64_t **)(uVal_12 + 0x18);
        if (pLong_4 != (int64_t *)0x0) {
          LOCK();
          pLong_2 = pLong_4 + 1;
          *(int *)pLong_2 = *(int *)pLong_2 + -1;
          UNLOCK();
          if (*(int *)pLong_2 == 0) {
            (**(func_ptr_t *)*pLong_4)(pLong_4);
            LOCK();
            pInt_1 = (int *)((int64_t)pLong_4 + 0xc);
            *pInt_1 = *pInt_1 + -1;
            UNLOCK();
            if (*pInt_1 == 0) {
              (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
            }
          }
        }
        uVal_12 = uVal_12 + 0x20;
      } while (uVal_12 != uVal_9);
      uVal_12 = *param_1;
      uVal_9 = param_1[2] - uVal_12;
    }
    if (0xfff < uVal_9) {
      if (0x1f < (uVal_12 - 8) - *(uint64_t *)(uVal_12 - 8)) {
LAB_18007fcec:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_9 = uVal_9 + 0x27;
      uVal_12 = *(uint64_t *)(uVal_12 - 8);
    }
    thunk_FUN_180695dd0(uVal_12,uVal_9);
  }
  *param_1 = uVal_5;
  param_1[1] = uVal_10 * 0x20 + uVal_5;
  param_1[2] = lVal_11 + uVal_5;
  return lVal_6;
}

// func_0x18007fe80
void func_0x18007fe80(uint64_t *param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  
  uVal_8 = *param_2;
  if (uVal_8 >> 0x3d == 0) {
    uVal_1 = *param_1;
    uVal_2 = param_1[1];
    if (uVal_8 == 0) {
      uVal_8 = 0;
    }
    else if (uVal_8 < 0x200) {
      uVal_8 = func_0x180672de0(uVal_8 * 8);
    }
    else {
      if (0x1ffffffffffffffb < uVal_8) goto LAB_18007ff5e;
      lVal_5 = func_0x180672de0(uVal_8 * 8 + 0x27);
      uVal_8 = lVal_5 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_8 - 8) = lVal_5;
    }
    func_0x1806aa960(uVal_8,*param_1,param_1[1] - *param_1);
    uVal_3 = *param_2;
    uVal_4 = *param_1;
    if (uVal_4 != 0) {
      uVal_7 = param_1[2] - uVal_4;
      uVal_6 = uVal_4;
      if (0xfff < uVal_7) {
        uVal_6 = *(uint64_t *)(uVal_4 - 8);
        if (0x1f < (uVal_4 - 8) - uVal_6) goto LAB_18007ff63;
        uVal_7 = uVal_7 + 0x27;
      }
      thunk_FUN_180695dd0(uVal_6,uVal_7);
    }
    *param_1 = uVal_8;
    param_1[1] = (uVal_2 - uVal_1) + uVal_8;
    param_1[2] = uVal_8 + uVal_3 * 8;
    return;
  }
LAB_18007ff5e:
  func_0x18007ba90();
LAB_18007ff63:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18007ff70
void func_0x18007ff70(uint64_t *param_1,uint64_t param_2)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    uVal_6 = *param_1;
    uVal_7 = ((int64_t)(param_1[2] - uVal_6) >> 3) * -0x5555555555555555;
    uVal_5 = 0xaaaaaaaaaaaaaaa - (uVal_7 >> 1);
    uVal_8 = (uVal_7 >> 1) + uVal_7;
    if (uVal_8 <= param_2) {
      uVal_8 = param_2;
    }
    if (uVal_5 <= uVal_7 && uVal_7 - uVal_5 != 0) {
      uVal_8 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVal_8 < 0xaaaaaaaaaaaaaab) {
      uVal_5 = param_1[1];
      if (uVal_8 == 0) {
        uVal_7 = 0;
      }
      else if (uVal_8 < 0xab) {
        uVal_7 = func_0x180672de0(uVal_8 * 0x18);
      }
      else {
        if (uVal_8 == 0xaaaaaaaaaaaaaaa) goto LAB_180080171;
        lVal_4 = func_0x180672de0(uVal_8 * 0x18 + 0x27);
        uVal_7 = lVal_4 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_7 - 8) = lVal_4;
      }
      lVal_9 = uVal_5 - uVal_6;
      lVal_4 = (lVal_9 >> 3) * 0x5555555555555555 + param_2;
      if (lVal_4 != 0) {
        func_0x1806ab010(lVal_9 + uVal_7,0,lVal_4 * 0x18);
      }
      uVal_5 = *param_1;
      uVal_6 = param_1[1];
      if (uVal_5 != uVal_6) {
        lVal_4 = 0;
        do {
          *(uint64_t *)(uVal_7 + lVal_4) = *(uint64_t *)(uVal_5 + lVal_4);
          *(uint8_t (*)[16])(uVal_7 + 8 + lVal_4) = ZEXT816(0);
          *(uint64_t *)(uVal_7 + 8 + lVal_4) = *(uint64_t *)(uVal_5 + 8 + lVal_4);
          *(uint64_t *)(uVal_7 + 0x10 + lVal_4) = *(uint64_t *)(uVal_5 + 0x10 + lVal_4);
          *(uint8_t (*)[16])(uVal_5 + 8 + lVal_4) = ZEXT816(0);
          lVal_9 = uVal_5 + lVal_4;
          lVal_4 = lVal_4 + 0x18;
        } while (lVal_9 + 0x18U != uVal_6);
        uVal_5 = *param_1;
      }
      if (uVal_5 != 0) {
        uVal_6 = param_1[1];
        if (uVal_5 == uVal_6) {
          uVal_6 = param_1[2] - uVal_5;
        }
        else {
          do {
            pLong_3 = *(int64_t **)(uVal_5 + 0x10);
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
            uVal_5 = uVal_5 + 0x18;
          } while (uVal_5 != uVal_6);
          uVal_5 = *param_1;
          uVal_6 = param_1[2] - uVal_5;
        }
        if (0xfff < uVal_6) {
          if (0x1f < (uVal_5 - 8) - *(uint64_t *)(uVal_5 - 8)) goto LAB_18008017b;
          uVal_6 = uVal_6 + 0x27;
          uVal_5 = *(uint64_t *)(uVal_5 - 8);
        }
        thunk_FUN_180695dd0(uVal_5,uVal_6);
      }
      *param_1 = uVal_7;
      param_1[1] = uVal_7 + param_2 * 0x18;
      param_1[2] = uVal_7 + uVal_8 * 0x18;
      return;
    }
LAB_180080171:
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_18008017b:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x1800801d0
void func_0x1800801d0(void)
{
  func_ptr_t fnPtr_1;
  
  func_0x1806744f0("invalid string position");
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180080460
uint8_t (*func_0x180080460(uint8_t (*param_1)[16],uint64_t param_2,int64_t **param_3))[16]
{
  int64_t **ptr2_Long_1;
  func_ptr_t fnPtr_2;
  bool bFlag_3;
  char ch_4;
  int64_t *pLong_5;
  uint8_t (*pArr16_6)[16];
  int64_t *pLong_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t *pLong_12;
  uint8_t auStack_c8 [32];
  int64_t **local_a8;
  int64_t *local_a0;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint8_t local_88;
  int64_t **local_80;
  int64_t **local_78;
  int64_t *local_70;
  uint8_t local_68 [16];
  uint8_t local_58;
  int64_t **local_50;
  uint64_t local_48;
  int64_t **ptr2_Long_11;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_c8;
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  ptr2_Long_1 = (int64_t **)*param_3;
  lVal_8 = (int64_t)ptr2_Long_1[2];
  if (ptr2_Long_1[3] < 0x10) {
    ch_4 = *(char *)(param_3 + 4);
  }
  else {
    ptr2_Long_1 = (int64_t **)*ptr2_Long_1;
    ch_4 = *(char *)(param_3 + 4);
  }
  pLong_12 = (int64_t *)((int64_t)ptr2_Long_1 + lVal_8);
  if (ch_4 == '\0') {
    pLong_5 = (int64_t *)thunk_FUN_180676d20(0,pLong_12,param_3 + 1,1);
    param_3[2] = pLong_5;
    param_3[3] = (int64_t *)((uint64_t)(pLong_5 != pLong_12) + (int64_t)pLong_5);
    *(uint8_t *)(param_3 + 4) = 1;
  }
  if (lVal_8 == 0) {
    ch_4 = '\x01';
    lVal_8 = 0;
    ptr2_Long_1 = (int64_t **)*param_3;
    pLong_12 = ptr2_Long_1[3];
  }
  else {
    pLong_5 = param_3[2];
    bFlag_3 = false;
    lVal_8 = 0;
    pLong_9 = param_3[3];
    do {
      ptr2_Long_1 = (int64_t **)*param_3;
      ptr2_Long_11 = ptr2_Long_1;
      if ((int64_t *)0xf < ptr2_Long_1[3]) {
        ptr2_Long_11 = (int64_t **)*ptr2_Long_1;
      }
      pLong_10 = (int64_t *)((int64_t)ptr2_Long_11 + (int64_t)ptr2_Long_1[2]);
      pLong_7 = pLong_9;
      if (pLong_10 == pLong_5) {
        bFlag_3 = false;
      }
      else if (pLong_10 == pLong_9) {
        bFlag_3 = true;
        pLong_5 = pLong_9;
        pLong_10 = pLong_9;
      }
      else {
        pLong_5 = (int64_t *)thunk_FUN_180676d20(pLong_9,pLong_10,param_3 + 1,1);
        pLong_7 = (int64_t *)((uint64_t)(pLong_5 != pLong_10) + (int64_t)pLong_5);
        pLong_10 = pLong_9;
      }
      lVal_8 = lVal_8 + 1;
      pLong_9 = pLong_7;
    } while (bFlag_3 || pLong_10 != pLong_12);
    ch_4 = *(char *)(param_3 + 4);
    ptr2_Long_1 = (int64_t **)*param_3;
    pLong_12 = ptr2_Long_1[3];
  }
  ptr2_Long_11 = ptr2_Long_1;
  if (&DAT_0000000f < pLong_12) {
    ptr2_Long_11 = (int64_t **)*ptr2_Long_1;
  }
  pLong_12 = (int64_t *)((int64_t)ptr2_Long_1[2] + (int64_t)ptr2_Long_11);
  local_68 = ZEXT816(0);
  local_58 = 0;
  local_78 = param_3;
  local_70 = pLong_12;
  local_50 = param_3;
  if (ch_4 == '\0') {
    pLong_5 = (int64_t *)thunk_FUN_180676d20(ptr2_Long_11,pLong_12,param_3 + 1,1);
    param_3[2] = pLong_5;
    param_3[3] = (int64_t *)((uint64_t)(pLong_5 != pLong_12) + (int64_t)pLong_5);
    *(uint8_t *)(param_3 + 4) = 1;
  }
  local_98 = *(uint32_t *)(param_3 + 2);
  uStack_94 = *(uint32_t *)((int64_t)param_3 + 0x14);
  uStack_90 = *(uint32_t *)(param_3 + 3);
  uStack_8c = *(uint32_t *)((int64_t)param_3 + 0x1c);
  local_88 = 0;
  local_a8 = param_3;
  local_a0 = (int64_t *)ptr2_Long_11;
  local_80 = param_3;
  func_0x1800806a0(param_1,lVal_8,&local_a8,&local_78);
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_c8)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_c8);
    fnPtr_2 = (func_ptr_t )swi(3);
    pArr16_6 = (uint8_t (*)[16])(*fnPtr_2)();
    return pArr16_6;
  }
  return param_1;
}

// func_0x1800806a0
void func_0x1800806a0(uint64_t *param_1,uint64_t param_2,uint32_t *param_3,uint32_t *param_4)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
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
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint64_t *local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (param_2 >> 0x3b != 0) {
      func_0x18007c0d0();
LAB_180080789:
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
      if (param_2 == 0x7ffffffffffffff) goto LAB_180080789;
      lVal_2 = func_0x180672de0(lVal_4 + 0x27);
      uVal_3 = lVal_2 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_3 - 8) = lVal_2;
    }
    *param_1 = uVal_3;
    param_1[1] = uVal_3;
    param_1[2] = lVal_4 + uVal_3;
    local_98 = *param_4;
    uStack_94 = param_4[1];
    uStack_90 = param_4[2];
    uStack_8c = param_4[3];
    local_88 = param_4[4];
    uStack_84 = param_4[5];
    uStack_80 = param_4[6];
    uStack_7c = param_4[7];
    local_78 = param_4[8];
    uStack_74 = param_4[9];
    uStack_70 = param_4[10];
    uStack_6c = param_4[0xb];
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    local_58 = param_3[4];
    uStack_54 = param_3[5];
    uStack_50 = param_3[6];
    uStack_4c = param_3[7];
    local_48 = param_3[8];
    uStack_44 = param_3[9];
    uStack_40 = param_3[10];
    uStack_3c = param_3[0xb];
    local_38 = param_1;
    uVal_3 = func_0x1800807c0(&local_68,&local_98,local_48,param_1);
    param_1[1] = uVal_3;
  }
  return;
}

// Unwind@180080790
void Unwind_180080790(uint64_t param_1,int64_t param_2)
{
  func_0x1800809f0(param_2 + 0x80);
  return;
}

// func_0x1800807c0
uint8_t (*func_0x1800807c0(int64_t **param_1,int64_t param_2,uint8_t (*param_3)[16]))[16]
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  uint64_t *pU64_3;
  func_ptr_t fnPtr_4;
  char ch_5;
  char ch_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  int64_t *pLong_9;
  uint8_t (*pArr16_10)[16];
  uint8_t *pU64_11;
  uint64_t uVal_12;
  int64_t *pLong_13;
  int64_t *pLong_14;
  uint64_t uVal_16;
  uint8_t (*local_b8)[16];
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  int64_t *local_70;
  char local_61;
  uint64_t local_60;
  uint64_t *pU64_15;
  
  local_60 = 0xfffffffffffffffe;
  pLong_1 = *param_1;
  pLong_9 = param_1[2];
  local_70 = param_1[3];
  pLong_2 = *(int64_t **)(param_2 + 8);
  local_61 = *(char *)(param_2 + 0x20);
  pLong_13 = param_1[1];
  ch_5 = *(char *)(param_1 + 4);
  local_b8 = param_3;
  while ((ch_6 = ch_5, pLong_13 != pLong_2 || (ch_6 != local_61))) {
    _local_88 = ZEXT816(0);
    _local_98 = ZEXT816(0);
    uVal_16 = (int64_t)pLong_9 - (int64_t)pLong_13;
    if (uVal_16 == 0) {
      _local_88 = ZEXT816(0xf) << 0x40;
    }
    else {
      if ((int64_t)uVal_16 < 0) {
        func_0x18007ba70();
        fnPtr_4 = (func_ptr_t )swi(3);
        pArr16_10 = (uint8_t (*)[16])(*fnPtr_4)();
        return pArr16_10;
      }
      uVal_12 = 0xf;
      pU64_11 = local_98;
      if (0xf < uVal_16) {
        uVal_7 = uVal_16 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_7) {
          uVal_12 = uVal_7;
        }
        if (uVal_7 < 0xfff) {
          pU64_11 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
        }
        else {
          lVal_8 = func_0x180672de0(uVal_12 + 0x28);
          pU64_11 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_11 + -8) = lVal_8;
        }
        local_98 = (uint8_t  [8])pU64_11;
      }
      uStack_80 = uVal_12;
      local_88 = (uint8_t  [8])uVal_16;
      func_0x1806aa960(pU64_11,pLong_13,uVal_16);
      pU64_11[uVal_16] = 0;
    }
    local_b8[1] = ZEXT816(0);
    *local_b8 = ZEXT816(0);
    *(uint32_t *)*local_b8 = local_98._0_4_;
    *(uint32_t *)(*local_b8 + 4) = local_98._4_4_;
    *(uint32_t *)(*local_b8 + 8) = (uint32_t)uStack_90;
    *(uint32_t *)(*local_b8 + 0xc) = uStack_90._4_4_;
    *(uint32_t *)local_b8[1] = local_88._0_4_;
    *(uint32_t *)(local_b8[1] + 4) = local_88._4_4_;
    *(uint32_t *)(local_b8[1] + 8) = (uint32_t)uStack_80;
    *(uint32_t *)(local_b8[1] + 0xc) = uStack_80._4_4_;
    local_b8 = local_b8 + 2;
    pU64_3 = (uint64_t *)*pLong_1;
    pU64_15 = pU64_3;
    if (0xf < (uint64_t)pU64_3[3]) {
      pU64_15 = (uint64_t *)*pU64_3;
    }
    pLong_14 = (int64_t *)((int64_t)pU64_15 + pU64_3[2]);
    pLong_13 = pLong_9;
    ch_5 = '\0';
    if ((pLong_14 != pLong_9) &&
       (pLong_9 = local_70, pLong_13 = local_70, ch_5 = '\x01', pLong_14 != local_70)) {
      pLong_9 = (int64_t *)thunk_FUN_180676d20(local_70,pLong_14,pLong_1 + 1,1);
      local_70 = (int64_t *)((uint64_t)(pLong_9 != pLong_14) + (int64_t)pLong_9);
      ch_5 = ch_6;
    }
  }
  return local_b8;
}

// Unwind@1800809b0
void Unwind_1800809b0(uint64_t param_1,int64_t param_2)
{
  func_0x180080ae0(param_2 + 0x28);
  return;
}

// func_0x1800809f0
void func_0x1800809f0(uint8_t (**param_1)[16])
{
  uint8_t (*pArr16_1)[16];
  int64_t *pLong_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t *pLong_7;
  
  pArr16_1 = *param_1;
  if ((pArr16_1 != (uint8_t (*)[16])0x0) &&
     (pLong_7 = *(int64_t **)*pArr16_1, pLong_7 != (int64_t *)0x0)) {
    pLong_2 = *(int64_t **)(*pArr16_1 + 8);
    if (pLong_7 == pLong_2) {
      uVal_6 = *(int64_t *)pArr16_1[1] - (int64_t)pLong_7;
    }
    else {
      do {
        uVal_6 = pLong_7[3];
        if (0xf < uVal_6) {
          lVal_3 = *pLong_7;
          uVal_4 = uVal_6 + 1;
          lVal_5 = lVal_3;
          if (0xfff < uVal_4) {
            lVal_5 = *(int64_t *)(lVal_3 + -8);
            if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) goto LAB_180080ad1;
            uVal_4 = uVal_6 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_5,uVal_4);
        }
        pLong_7[2] = 0;
        pLong_7[3] = 0xf;
        *(uint8_t *)pLong_7 = 0;
        pLong_7 = pLong_7 + 4;
      } while (pLong_7 != pLong_2);
      pLong_7 = *(int64_t **)*pArr16_1;
      uVal_6 = *(int64_t *)pArr16_1[1] - (int64_t)pLong_7;
    }
    if (0xfff < uVal_6) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_7 + (-8 - (int64_t)(int64_t *)pLong_7[-1]))) {
LAB_180080ad1:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_6 + 0x27;
      pLong_7 = (int64_t *)pLong_7[-1];
    }
    thunk_FUN_180695dd0(pLong_7,uVal_6);
    *pArr16_1 = ZEXT816(0);
    *(uint64_t *)pArr16_1[1] = 0;
  }
  return;
}

// func_0x180080ae0
void func_0x180080ae0(int64_t **param_1)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  
  pLong_6 = *param_1;
  pLong_1 = param_1[1];
  do {
    if (pLong_6 == pLong_1) {
      return;
    }
    uVal_2 = pLong_6[3];
    if (0xf < uVal_2) {
      lVal_3 = *pLong_6;
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
    pLong_6[2] = 0;
    pLong_6[3] = 0xf;
    *(uint8_t *)pLong_6 = 0;
    pLong_6 = pLong_6 + 4;
  } while( true );
}

// func_0x180081c00
void func_0x180081c00(int64_t *param_1)
{
  uint64_t *pU64_1;
  
  pU64_1 = (uint64_t *)*param_1;
  *(uint64_t *)pU64_1[1] = 0;
  pU64_1 = (uint64_t *)*pU64_1;
  while (pU64_1 != (uint64_t *)0x0) {
    pU64_1 = (uint64_t *)*pU64_1;
    func_0x180081c50(param_1);
  }
  thunk_FUN_180695dd0(*param_1,0x50);
  return;
}

// func_0x180081c50
void func_0x180081c50(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_2 + 0x48);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x30);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_180081d0c;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x40) = 0;
  *(uint64_t *)(param_2 + 0x48) = 0xf;
  *(uint8_t *)(param_2 + 0x30) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0x28);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x10);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_180081d0c:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x20) = 0;
  *(uint64_t *)(param_2 + 0x28) = 0xf;
  *(uint8_t *)(param_2 + 0x10) = 0;
  thunk_FUN_180695dd0(param_2,0x50);
  return;
}

// func_0x180082180
void func_0x180082180(int64_t *param_1)
{
  uint64_t *pU64_1;
  
  pU64_1 = (uint64_t *)*param_1;
  *(uint64_t *)pU64_1[1] = 0;
  pU64_1 = (uint64_t *)*pU64_1;
  while (pU64_1 != (uint64_t *)0x0) {
    pU64_1 = (uint64_t *)*pU64_1;
    func_0x1800821d0(param_1);
  }
  thunk_FUN_180695dd0(*param_1,0x30);
  return;
}

// func_0x1800821d0
void func_0x1800821d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t *pLong_6;
  
  pLong_6 = *(int64_t **)(param_2 + 0x18);
  if (pLong_6 != (int64_t *)0x0) {
    pLong_1 = *(int64_t **)(param_2 + 0x20);
    if (pLong_6 == pLong_1) {
      uVal_5 = *(int64_t *)(param_2 + 0x28) - (int64_t)pLong_6;
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
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1800822bf;
            uVal_3 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_3);
        }
        pLong_6[2] = 0;
        pLong_6[3] = 0xf;
        *(uint8_t *)pLong_6 = 0;
        pLong_6 = pLong_6 + 4;
      } while (pLong_6 != pLong_1);
      pLong_6 = *(int64_t **)*(uint8_t (*)[16])(param_2 + 0x18);
      uVal_5 = *(int64_t *)(param_2 + 0x28) - (int64_t)pLong_6;
    }
    if (0xfff < uVal_5) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_6 + (-8 - (int64_t)(int64_t *)pLong_6[-1]))) {
LAB_1800822bf:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
      pLong_6 = (int64_t *)pLong_6[-1];
    }
    thunk_FUN_180695dd0(pLong_6,uVal_5);
    *(uint8_t (*)[16])(param_2 + 0x18) = ZEXT816(0);
    *(uint64_t *)(param_2 + 0x28) = 0;
  }
  thunk_FUN_180695dd0(param_2,0x30);
  return;
}

// func_0x1800822d0
void func_0x1800822d0(uint8_t (*param_1)[16])
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t *pLong_7;
  
  pLong_7 = *(int64_t **)*param_1;
  if (pLong_7 != (int64_t *)0x0) {
    pLong_1 = *(int64_t **)(*param_1 + 8);
    if (pLong_7 == pLong_1) {
      uVal_6 = *(int64_t *)param_1[1] - (int64_t)pLong_7;
    }
    else {
      do {
        pLong_2 = (int64_t *)pLong_7[0xc];
        if (pLong_2 != (int64_t *)0x0) {
          (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_7 + 5 != pLong_2);
          pLong_7[0xc] = 0;
        }
        uVal_6 = pLong_7[3];
        if (0xf < uVal_6) {
          lVal_3 = *pLong_7;
          uVal_4 = uVal_6 + 1;
          lVal_5 = lVal_3;
          if (0xfff < uVal_4) {
            lVal_5 = *(int64_t *)(lVal_3 + -8);
            if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) goto LAB_1800823d2;
            uVal_4 = uVal_6 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_5,uVal_4);
        }
        pLong_7[2] = 0;
        pLong_7[3] = 0xf;
        *(uint8_t *)pLong_7 = 0;
        pLong_7 = pLong_7 + 0xe;
      } while (pLong_7 != pLong_1);
      pLong_7 = *(int64_t **)*param_1;
      uVal_6 = *(int64_t *)param_1[1] - (int64_t)pLong_7;
    }
    if (0xfff < uVal_6) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_7 + (-8 - (int64_t)(int64_t *)pLong_7[-1]))) {
LAB_1800823d2:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_6 + 0x27;
      pLong_7 = (int64_t *)pLong_7[-1];
    }
    thunk_FUN_180695dd0(pLong_7,uVal_6);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// func_0x180082430
uint8_t (**func_0x180082430(uint8_t (**param_1)[16],uint8_t param_2))[16]
{
  int64_t lVal_1;
  uint8_t (*pArr16_2)[16];
  
  switch(param_2) {
  default:
    *param_1 = (uint8_t (*)[16])0x0;
    break;
  case 1:
    pArr16_2 = (uint8_t (*)[16])func_0x180672de0(0x10);
    *pArr16_2 = ZEXT816(0);
    lVal_1 = func_0x180672de0(0x50);
    *(int64_t *)lVal_1 = lVal_1;
    *(int64_t *)(lVal_1 + 8) = lVal_1;
    *(int64_t *)(lVal_1 + 0x10) = lVal_1;
    *(uint16_t *)(lVal_1 + 0x18) = 0x101;
    *(int64_t *)*pArr16_2 = lVal_1;
    *param_1 = pArr16_2;
    break;
  case 2:
    pArr16_2 = (uint8_t (*)[16])func_0x180672de0(0x18);
    *pArr16_2 = ZEXT816(0);
    *(uint64_t *)pArr16_2[1] = 0;
    *param_1 = pArr16_2;
    break;
  case 3:
    pArr16_2 = (uint8_t (*)[16])func_0x180082530(&DAT_180761155);
    *param_1 = pArr16_2;
    break;
  case 4:
    *(uint8_t *)param_1 = 0;
    break;
  case 8:
    pArr16_2 = (uint8_t (*)[16])func_0x180672de0(0x28);
    *pArr16_2 = ZEXT816(0);
    pArr16_2[1] = ZEXT816(0);
    pArr16_2[2][0] = 0;
    *param_1 = pArr16_2;
  }
  return param_1;
}

// Unwind@180082500
void Unwind_180082500(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x28),0x10);
  return;
}

// func_0x180082530
uint8_t (*func_0x180082530(char *param_1))[16]
{
  func_ptr_t fnPtr_1;
  uint8_t (*pArr16_2)[16];
  size_t sz_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t (*pArr16_6)[16];
  uint64_t uVal_7;
  
  pArr16_2 = (uint8_t (*)[16])func_0x180672de0(0x20);
  *pArr16_2 = ZEXT816(0);
  pArr16_2[1] = ZEXT816(0);
  sz_3 = strlen(param_1);
  if (-1 < (int64_t)sz_3) {
    uVal_7 = 0xf;
    pArr16_6 = pArr16_2;
    if (0xf < sz_3) {
      uVal_4 = sz_3 | 0xf;
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
      *(uint8_t (**)[16])*pArr16_2 = pArr16_6;
    }
    *(size_t *)pArr16_2[1] = sz_3;
    *(uint64_t *)(pArr16_2[1] + 8) = uVal_7;
    func_0x1806aa960(pArr16_6,param_1,sz_3);
    (*pArr16_6)[sz_3] = 0;
    return pArr16_2;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_2 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_2;
}

// Unwind@180082610
void Unwind_180082610(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x28),0x20);
  return;
}

// func_0x1800826d0
void func_0x1800826d0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t *pU64_4;
  
  uVal_1 = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  lVal_2 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_2) < uVal_1) {
    func_0x180082950(param_1,uVal_1,uVal_1,param_2,uVal_1);
    uVal_1 = param_3[2];
    uVal_3 = param_3[3];
  }
  else {
    param_1[2] = lVal_2 + uVal_1;
    pU64_4 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_4 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_2 + (int64_t)pU64_4,param_2);
    *(uint8_t *)((int64_t)pU64_4 + lVal_2 + uVal_1) = 0;
    uVal_1 = param_3[2];
    uVal_3 = param_3[3];
  }
  if (0xf < uVal_3) {
    param_3 = (uint64_t *)*param_3;
  }
  lVal_2 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_2) < uVal_1) {
    func_0x180082950(param_1,uVal_1,uVal_1,param_3,uVal_1);
    uVal_1 = param_4[2];
    uVal_3 = param_4[3];
  }
  else {
    param_1[2] = lVal_2 + uVal_1;
    pU64_4 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_4 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_2 + (int64_t)pU64_4,param_3);
    *(uint8_t *)((int64_t)pU64_4 + lVal_2 + uVal_1) = 0;
    uVal_1 = param_4[2];
    uVal_3 = param_4[3];
  }
  if (0xf < uVal_3) {
    param_4 = (uint64_t *)*param_4;
  }
  lVal_2 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_2) < uVal_1) {
    func_0x180082950(param_1,uVal_1,uVal_1,param_4,uVal_1);
  }
  else {
    param_1[2] = lVal_2 + uVal_1;
    if (0xf < (uint64_t)param_1[3]) {
      param_1 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_2 + (int64_t)param_1,param_4);
    *(uint8_t *)((int64_t)param_1 + lVal_2 + uVal_1) = 0;
  }
  return;
}

// func_0x180082810
uint64_t * func_0x180082810(uint64_t *param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  uVal_6 = param_1[2];
  uVal_4 = 0x7fffffffffffffff;
  if ((uVal_6 ^ 0x7fffffffffffffff) < param_2) {
    func_0x18007ba70();
    goto LAB_180082946;
  }
  param_2 = param_2 + uVal_6;
  uVal_1 = param_1[3];
  if (((int64_t)param_2 < 0) || ((uVal_1 >> 1 ^ 0x7fffffffffffffff) < uVal_1)) {
LAB_18008285e:
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
        if (uVal_4 + 1 < 0xffffffffffffffd9) goto LAB_18008285e;
        func_0x18007ba90();
      }
      uVal_5 = func_0x180672de0();
    }
  }
  param_1[2] = param_2;
  param_1[3] = uVal_4;
  if (uVal_1 < 0x10) {
    func_0x1806aa960(uVal_5,param_1,uVal_6 + 1);
  }
  else {
    uVal_4 = *param_1;
    func_0x1806aa960(uVal_5,uVal_4,uVal_6 + 1);
    uVal_6 = uVal_1 + 1;
    uVal_3 = uVal_4;
    if (0xfff < uVal_6) {
      uVal_3 = *(uint64_t *)(uVal_4 - 8);
      if (0x1f < (uVal_4 - 8) - uVal_3) {
LAB_180082946:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(uVal_3,uVal_6);
  }
  *param_1 = uVal_5;
  return param_1;
}

// func_0x180082950
uint64_t * func_0x180082950(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, int64_t param_5)
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
    goto LAB_180082abc;
  }
  param_2 = param_2 + uVal_4;
  uVal_1 = param_1[3];
  if (((int64_t)param_2 < 0) || ((uVal_1 >> 1 ^ 0x7fffffffffffffff) < uVal_1)) {
LAB_1800829a4:
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
        if (uVal_3 + 1 < 0xffffffffffffffd9) goto LAB_1800829a4;
        func_0x18007ba90();
      }
      uVal_5 = func_0x180672de0();
    }
  }
  param_1[2] = param_2;
  param_1[3] = uVal_3;
  if (uVal_1 < 0x10) {
    func_0x1806aa960(uVal_5,param_1,uVal_4);
    func_0x1806aa960(uVal_4 + uVal_5,param_4,param_5);
    *(uint8_t *)(param_5 + uVal_4 + uVal_5) = 0;
  }
  else {
    uVal_3 = *param_1;
    func_0x1806aa960(uVal_5,uVal_3,uVal_4);
    func_0x1806aa960(uVal_4 + uVal_5,param_4,param_5);
    *(uint8_t *)(param_5 + uVal_4 + uVal_5) = 0;
    uVal_4 = uVal_1 + 1;
    uVal_6 = uVal_3;
    if (0xfff < uVal_4) {
      uVal_6 = *(uint64_t *)(uVal_3 - 8);
      if (0x1f < (uVal_3 - 8) - uVal_6) {
LAB_180082abc:
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

// func_0x180082ac0
uint8_t (*func_0x180082ac0(uint8_t (*param_1)[16],char *param_2,uint64_t *param_3,uint64_t param_4, int64_t param_5,char *param_6))[16]
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  size_t sz_4;
  size_t sz_5;
  uint8_t (*pArr16_6)[16];
  uint64_t uVal_7;
  
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  sz_4 = strlen(param_2);
  lVal_1 = param_3[2];
  lVal_2 = *(int64_t *)(param_5 + 0x10);
  sz_5 = strlen(param_6);
  uVal_7 = 0xf;
  if (0xf < sz_5 + sz_4 + lVal_1 + lVal_2 + 1) {
    func_0x180082810(param_1);
    *(uint64_t *)param_1[1] = 0;
    uVal_7 = *(uint64_t *)(param_1[1] + 8);
  }
  sz_4 = strlen(param_2);
  if (uVal_7 < sz_4) {
    func_0x180082950(param_1,sz_4);
    uVal_7 = param_3[2];
    uVal_3 = param_3[3];
  }
  else {
    *(size_t *)param_1[1] = sz_4;
    pArr16_6 = param_1;
    if (0xf < uVal_7) {
      pArr16_6 = *(uint8_t (**)[16])*param_1;
    }
    func_0x1806aa960(pArr16_6,param_2,sz_4);
    (*pArr16_6)[sz_4] = 0;
    uVal_7 = param_3[2];
    uVal_3 = param_3[3];
  }
  if (0xf < uVal_3) {
    param_3 = (uint64_t *)*param_3;
  }
  lVal_1 = *(int64_t *)param_1[1];
  uVal_3 = *(uint64_t *)(param_1[1] + 8);
  if (uVal_3 - lVal_1 < uVal_7) {
    func_0x180082950(param_1,uVal_7,uVal_7,param_3,uVal_7);
  }
  else {
    *(uint64_t *)param_1[1] = lVal_1 + uVal_7;
    pArr16_6 = param_1;
    if (0xf < uVal_3) {
      pArr16_6 = *(uint8_t (**)[16])*param_1;
    }
    func_0x1806aa960(*pArr16_6 + lVal_1,param_3);
    (*pArr16_6)[lVal_1 + uVal_7] = 0;
  }
  func_0x180082c70(param_1,param_4,param_5,param_6);
  return param_1;
}

// Unwind@180082c30
void Unwind_180082c30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x180082c70
void func_0x180082c70(uint64_t *param_1,uint8_t *param_2,uint64_t *param_3,char *param_4)
{
  uint8_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  size_t sz_4;
  uint64_t *pU64_5;
  uint64_t uVal_6;
  
  uVal_1 = *param_2;
  uVal_6 = param_1[2];
  if (uVal_6 < (uint64_t)param_1[3]) {
    param_1[2] = uVal_6 + 1;
    pU64_5 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_5 = (uint64_t *)*param_1;
    }
    *(uint8_t *)((int64_t)pU64_5 + uVal_6) = uVal_1;
    *(uint8_t *)((int64_t)pU64_5 + uVal_6 + 1) = 0;
    uVal_6 = param_3[2];
    uVal_3 = param_3[3];
  }
  else {
    func_0x18008c590(param_1,1);
    uVal_6 = param_3[2];
    uVal_3 = param_3[3];
  }
  if (0xf < uVal_3) {
    param_3 = (uint64_t *)*param_3;
  }
  lVal_2 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_2) < uVal_6) {
    func_0x180082950(param_1,uVal_6,uVal_6,param_3,uVal_6);
  }
  else {
    param_1[2] = lVal_2 + uVal_6;
    pU64_5 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_5 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_2 + (int64_t)pU64_5,param_3);
    *(uint8_t *)((int64_t)pU64_5 + lVal_2 + uVal_6) = 0;
  }
  sz_4 = strlen(param_4);
  lVal_2 = param_1[2];
  uVal_6 = param_1[3] - lVal_2;
  if (uVal_6 < sz_4) {
    func_0x180082950(param_1,sz_4,uVal_6,param_4,sz_4);
  }
  else {
    param_1[2] = sz_4 + lVal_2;
    if (0xf < (uint64_t)param_1[3]) {
      param_1 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_2 + (int64_t)param_1,param_4,sz_4);
    *(uint8_t *)((int64_t)param_1 + sz_4 + lVal_2) = 0;
  }
  return;
}

// func_0x180082e50
void func_0x180082e50(char *param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t local_80 [56];
  uint8_t local_48 [32];
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 == '\x02') {
    func_0x180083470();
    return;
  }
  local_28 = func_0x1800833d0();
  func_0x180083260(local_48,"type must be array, but is ",&local_28);
  func_0x180082f00(local_80,0x12e,local_48,param_1);
  func_0x18067a120(local_80,&DAT_180768700);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180082ed0
void Unwind_180082ed0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x180082f00
uint64_t * func_0x180082f00(uint64_t *param_1,uint32_t param_2,int64_t param_3)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint8_t local_b8;
  undefined7 uStack_b7;
  int64_t local_a8;
  uint64_t local_a0;
  int64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint8_t local_78 [9];
  undefined7 uStack_6f;
  int64_t local_68;
  uint64_t local_60;
  uint8_t local_58 [16];
  uint64_t local_48;
  uint64_t local_40;
  uint8_t local_31;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  _local_78 = ZEXT816(0);
  local_68 = 0;
  local_60 = 0xf;
  local_88 = 10;
  local_80 = 0xf;
  local_98 = 0x7272655f65707974;
  local_90 = 0x726f;
  func_0x180094590(local_58);
  local_31 = 0x2e;
  func_0x180082ac0(&local_b8,"[json.exception.",&local_98,&local_31,local_58,&DAT_18076100f);
  if (0xf < local_40) {
    uVal_2 = local_40 + 1;
    lVal_3 = local_58._0_8_;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(local_58._0_8_ + -8);
      if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_3)) goto LAB_1800831a6;
      uVal_2 = local_40 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  local_58 = ZEXT816(0);
  local_48 = 0;
  local_40 = 0xf;
  if (0xf < (uint64_t)(local_68 + local_a8 + *(int64_t *)(param_3 + 0x10))) {
    func_0x180082810(local_58);
  }
  local_48 = 0;
  func_0x1800826d0(local_58,&local_b8,local_78,param_3);
  if (0xf < local_a0) {
    lVal_1 = CONCAT71(uStack_b7,local_b8);
    uVal_2 = local_a0 + 1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_1800831a6;
      uVal_2 = local_a0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  local_a8 = 0;
  local_a0 = 0xf;
  local_b8 = 0;
  if (0xf < local_80) {
    uVal_2 = local_80 + 1;
    lVal_3 = local_98;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(local_98 + -8);
      if (0x1f < (uint64_t)((local_98 + -8) - lVal_3)) goto LAB_1800831a6;
      uVal_2 = local_80 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  if (0xf < local_60) {
    uVal_2 = local_60 + 1;
    lVal_3 = local_78._0_8_;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(local_78._0_8_ + -8);
      if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_3)) goto LAB_1800831a6;
      uVal_2 = local_60 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  local_78._0_8_ = local_58;
  if (0xf < local_40) {
    local_78._0_8_ = local_58._0_8_;
  }
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  *param_1 = &PTR_LAB_1806aff10;
  *(uint32_t *)(param_1 + 3) = param_2;
  param_1[4] = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  local_78[8] = 1;
  func_0x18067b3f0(local_78,param_1 + 5);
  param_1[4] = std::runtime_error::vftable;
  *param_1 = &PTR_LAB_1806aff10;
  if (0xf < local_40) {
    uVal_2 = local_40 + 1;
    lVal_3 = local_58._0_8_;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(local_58._0_8_ + -8);
      if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_3)) {
LAB_1800831a6:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = local_40 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  return param_1;
}

// Unwind@1800831b0
void Unwind_1800831b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1800831f0
void Unwind_1800831f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180083220
void Unwind_180083220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  func_0x180001e70(param_2 + 0x30);
  return;
}

// func_0x180083260
uint8_t (*func_0x180083260(uint8_t (*param_1)[16],char *param_2,char **param_3))[16]
{
  char *_Str;
  int64_t lVal_1;
  size_t sz_2;
  size_t sz_3;
  uint8_t (*pArr16_4)[16];
  uint64_t uVal_5;
  
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  sz_2 = strlen(param_2);
  sz_3 = strlen(*param_3);
  uVal_5 = 0xf;
  if (0xf < sz_3 + sz_2) {
    func_0x180082810(param_1,sz_3 + sz_2);
    *(uint64_t *)param_1[1] = 0;
    uVal_5 = *(uint64_t *)(param_1[1] + 8);
  }
  sz_2 = strlen(param_2);
  if (uVal_5 < sz_2) {
    func_0x180082950(param_1,sz_2);
  }
  else {
    *(size_t *)param_1[1] = sz_2;
    pArr16_4 = param_1;
    if (0xf < uVal_5) {
      pArr16_4 = *(uint8_t (**)[16])*param_1;
    }
    func_0x1806aa960(pArr16_4,param_2,sz_2);
    (*pArr16_4)[sz_2] = 0;
  }
  _Str = *param_3;
  sz_2 = strlen(_Str);
  lVal_1 = *(int64_t *)param_1[1];
  uVal_5 = *(uint64_t *)(param_1[1] + 8);
  if (uVal_5 - lVal_1 < sz_2) {
    func_0x180082950(param_1,sz_2,param_1,_Str,sz_2);
  }
  else {
    *(size_t *)param_1[1] = sz_2 + lVal_1;
    pArr16_4 = param_1;
    if (0xf < uVal_5) {
      pArr16_4 = *(uint8_t (**)[16])*param_1;
    }
    func_0x1806aa960(*pArr16_4 + lVal_1,_Str,sz_2);
    (*pArr16_4)[sz_2 + lVal_1] = 0;
  }
  return param_1;
}

// Unwind@1800833a0
void Unwind_1800833a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x1800833d0
char * func_0x1800833d0(byte *param_1)
{
  if ((uint64_t)*param_1 < 10) {
    return (&PTR_s_null_1806b0e18)[*param_1];
  }
  return "number";
}

// func_0x1800833f0
uint64_t * func_0x1800833f0(uint64_t *param_1,int64_t param_2)
{
  *param_1 = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  func_0x18067b3f0(param_2 + 8,param_1 + 1);
  *param_1 = &PTR_LAB_1806aff10;
  *(uint32_t *)(param_1 + 3) = *(uint32_t *)(param_2 + 0x18);
  param_1[4] = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  func_0x18067b3f0(param_2 + 0x28,param_1 + 5);
  param_1[4] = std::runtime_error::vftable;
  *param_1 = &PTR_LAB_1806aff10;
  return param_1;
}

// func_0x180083470
void func_0x180083470(char *param_1,uint64_t param_2)
{
  int64_t lVal_1;
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  char ch_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  int64_t *pLong_9;
  uint64_t uVal_10;
  uint32_t uVal_11;
  uint32_t extraout_XMM0_Dc;
  uint32_t uVal_12;
  uint32_t extraout_XMM0_Dd;
  uint64_t local_98 [2];
  uint8_t *local_88;
  uint64_t local_80;
  char *local_78;
  uint8_t local_70 [16];
  uint64_t local_60;
  char *local_58;
  uint8_t local_50 [16];
  uint64_t local_40;
  uint8_t local_38 [16];
  int64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVal_10 = 0;
  uVal_11 = 0;
  uVal_12 = 0;
  local_38 = ZEXT816(0);
  local_28 = 0;
  ch_4 = *param_1;
  if (ch_4 == '\0') {
LAB_1800834e9:
    local_80 = 0;
    local_70._8_4_ = uVal_11;
    local_70._0_8_ = uVal_10;
    local_70._12_4_ = uVal_12;
    local_50._8_4_ = uVal_11;
    local_50._0_8_ = uVal_10;
    local_50._12_4_ = uVal_12;
  }
  else {
    if (ch_4 == '\x01') {
      local_98[0] = *(uint64_t *)(*(int64_t *)(param_1 + 8) + 8);
joined_r0x0001800834db:
      if (local_98[0] != 0) {
        if (local_98[0] >> 0x3b != 0) {
          uVal_10 = func_0x18007c0d0();
          uVal_11 = extraout_XMM0_Dc;
          uVal_12 = extraout_XMM0_Dd;
          goto LAB_1800834e9;
        }
        goto LAB_18008352c;
      }
      local_80 = 0;
    }
    else {
      if (ch_4 == '\x02') {
        local_98[0] = (*(int64_t **)(param_1 + 8))[1] - **(int64_t **)(param_1 + 8) >> 4;
        goto joined_r0x0001800834db;
      }
      local_98[0] = 1;
LAB_18008352c:
      func_0x180083b20(local_38,local_98);
      ch_4 = *param_1;
      local_80 = local_38._8_8_;
    }
    local_70 = ZEXT816(0);
    local_60 = 0x8000000000000000;
    if (ch_4 == '\x02') {
      auArr_2._8_8_ = 0;
      auArr_2._0_8_ = (*(uint64_t **)(param_1 + 8))[1];
      local_70 = auArr_2 << 0x40;
      local_40 = 0x8000000000000000;
      auArr_3._8_8_ = 0;
      auArr_3._0_8_ = **(uint64_t **)(param_1 + 8);
      local_50 = auArr_3 << 0x40;
      goto LAB_1800835e1;
    }
    if (ch_4 == '\x01') {
      local_70._8_8_ = 0;
      local_70._0_8_ = **(uint64_t ***)(param_1 + 8);
      local_40 = 0x8000000000000000;
      local_50._8_8_ = 0;
      local_50._0_8_ = ***(uint64_t ***)(param_1 + 8);
      goto LAB_1800835e1;
    }
    local_60 = 1;
    local_50 = ZEXT816(0);
    if (ch_4 != '\0') {
      local_40 = 0;
      goto LAB_1800835e1;
    }
  }
  local_60 = 1;
  local_40 = 1;
LAB_1800835e1:
  local_88 = local_38;
  local_78 = param_1;
  local_58 = param_1;
  func_0x180083700(local_98,&local_58,&local_78,&local_88);
  func_0x180083a00(param_2,local_38);
  if ((int64_t *)local_38._0_8_ != (int64_t *)0x0) {
    pLong_9 = (int64_t *)local_38._8_8_;
    pLong_8 = (int64_t *)local_38._0_8_;
    if (local_38._0_8_ == local_38._8_8_) {
      uVal_7 = local_28 - local_38._0_8_;
      pLong_9 = (int64_t *)local_38._0_8_;
    }
    else {
      do {
        uVal_7 = pLong_8[3];
        if (0xf < uVal_7) {
          lVal_1 = *pLong_8;
          uVal_5 = uVal_7 + 1;
          lVal_6 = lVal_1;
          if (0xfff < uVal_5) {
            lVal_6 = *(int64_t *)(lVal_1 + -8);
            if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_6)) goto LAB_180083686;
            uVal_5 = uVal_7 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_6,uVal_5);
        }
        pLong_8[2] = 0;
        pLong_8[3] = 0xf;
        *(uint8_t *)pLong_8 = 0;
        pLong_8 = pLong_8 + 4;
      } while (pLong_8 != pLong_9);
      uVal_7 = local_28 - local_38._0_8_;
      pLong_9 = (int64_t *)local_38._0_8_;
    }
    if (0xfff < uVal_7) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_9 + (-8 - (int64_t)(int64_t *)pLong_9[-1]))) {
LAB_180083686:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
      pLong_9 = (int64_t *)pLong_9[-1];
    }
    thunk_FUN_180695dd0(pLong_9,uVal_7);
  }
  return;
}

// Unwind@1800836d0
void Unwind_1800836d0(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0x90);
  return;
}

// func_0x180083700
void func_0x180083700(uint64_t *param_1,char **param_2,char **param_3,uint64_t *param_4)
{
  char *fnPtr_1;
  uint64_t uVal_2;
  char **ptr2_Char_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  char **ptr2_Char_7;
  int64_t lVal_8;
  bool bFlag_9;
  int64_t local_108 [4];
  uint8_t local_e8 [16];
  uint64_t local_d8;
  uint64_t local_d0;
  char **local_a8;
  char *local_a0;
  char *local_98;
  uint64_t *local_90;
  uint64_t *local_88;
  char *local_80;
  char **local_78;
  char *pcStack_70;
  char *local_68;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  fnPtr_1 = *param_2;
  local_78 = (char **)param_2[1];
  pcStack_70 = param_2[2];
  local_68 = param_2[3];
  local_80 = fnPtr_1;
  if (fnPtr_1 == *param_3) {
    local_a8 = (char **)param_3[1];
    local_a0 = param_3[2];
    local_98 = param_3[3];
    uVal_2 = *param_4;
    lVal_8 = param_4[1];
    local_90 = param_4;
    local_88 = param_1;
    do {
      if (*local_80 == '\x01') {
        if (local_78 == local_a8) goto LAB_1800838c9;
      }
      else if (*local_80 == '\x02') {
        if (pcStack_70 == local_a0) {
LAB_1800838c9:
          *local_90 = uVal_2;
          local_90[1] = lVal_8;
          *local_88 = *local_90;
          local_88[1] = local_90[1];
          return;
        }
      }
      else if (local_68 == local_98) goto LAB_1800838c9;
      uVal_4 = func_0x180083d00(&local_80);
      local_e8 = ZEXT816(0);
      local_d8 = 0;
      local_d0 = 0xf;
      func_0x180086960(uVal_4,local_e8);
      func_0x1800841c0(uVal_2,local_108,lVal_8,local_e8);
      lVal_8 = local_108[0];
      if (0xf < local_d0) {
        uVal_5 = local_d0 + 1;
        lVal_6 = local_e8._0_8_;
        if (0xfff < uVal_5) {
          lVal_6 = *(int64_t *)(local_e8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_6)) goto LAB_18008393b;
          uVal_5 = local_d0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_6,uVal_5);
      }
      if (*local_80 == '\x02') {
        pcStack_70 = pcStack_70 + 0x10;
      }
      else if (*local_80 == '\x01') {
        ptr2_Char_7 = local_78;
        ptr2_Char_3 = (char **)local_78[2];
        if (*(char *)((int64_t)local_78[2] + 0x19) == '\0') {
          do {
            local_78 = ptr2_Char_3;
            ptr2_Char_3 = (char **)*local_78;
          } while (*(char *)((int64_t)*local_78 + 0x19) == '\0');
        }
        else {
          do {
            local_78 = (char **)ptr2_Char_7[1];
            if (*(char *)((int64_t)local_78 + 0x19) != '\0') break;
            bFlag_9 = ptr2_Char_7 == (char **)local_78[2];
            ptr2_Char_7 = local_78;
          } while (bFlag_9);
        }
      }
      else {
        local_68 = local_68 + 1;
      }
      lVal_8 = lVal_8 + 0x20;
    } while (local_80 == fnPtr_1);
  }
  fnPtr_1 = local_80;
  func_0x180001060(local_108,"cannot compare iterators of different containers");
  func_0x180083e30(local_e8,0xd4,local_108,fnPtr_1);
  func_0x18067a120(local_e8,&DAT_180768740);
LAB_18008393b:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180083940
void Unwind_180083940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180083980
void Unwind_180083980(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800839c0
void Unwind_1800839c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x180083a00
uint8_t (*func_0x180083a00(uint8_t (*param_1)[16],uint8_t (*param_2)[16]))[16]
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t *pLong_6;
  
  if (param_1 != param_2) {
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
              if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_180083b1a;
              uVal_3 = uVal_5 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_4,uVal_3);
          }
          pLong_6[2] = 0;
          pLong_6[3] = 0xf;
          *(uint8_t *)pLong_6 = 0;
          pLong_6 = pLong_6 + 4;
        } while (pLong_6 != pLong_1);
        pLong_6 = *(int64_t **)*param_1;
        uVal_5 = *(int64_t *)param_1[1] - (int64_t)pLong_6;
      }
      if (0xfff < uVal_5) {
        if ((uint8_t *)0x1f <
            (uint8_t *)((int64_t)pLong_6 + (-8 - (int64_t)(int64_t *)pLong_6[-1]))) {
LAB_180083b1a:
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
    *(uint64_t *)*param_1 = *(uint64_t *)*param_2;
    *(uint64_t *)(*param_1 + 8) = *(uint64_t *)(*param_2 + 8);
    *(uint64_t *)param_1[1] = *(uint64_t *)param_2[1];
    *param_2 = ZEXT816(0);
    *(uint64_t *)param_2[1] = 0;
  }
  return param_1;
}

// func_0x180083b20
void func_0x180083b20(int64_t **param_1,uint64_t *param_2)
{
  uint32_t *pU64_1;
  uint32_t *pU64_2;
  uint64_t uVal_3;
  int64_t *pLong_4;
  int64_t *pLong_5;
  func_ptr_t fnPtr_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  int64_t lVal_14;
  int64_t *pLong_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  uint64_t uVal_18;
  int64_t *pLong_19;
  int64_t *pLong_20;
  
  uVal_3 = *param_2;
  if (uVal_3 >> 0x3b != 0) {
LAB_180083cf3:
    func_0x18007ba90();
    fnPtr_6 = (func_ptr_t )swi(3);
    (*fnPtr_6)();
    return;
  }
  pLong_4 = *param_1;
  pLong_5 = param_1[1];
  if (uVal_3 == 0) {
    pLong_20 = (int64_t *)0x0;
    pLong_19 = *param_1;
    pLong_15 = param_1[1];
    if (pLong_19 != pLong_15) {
LAB_180083bc5:
      lVal_14 = 0;
      do {
        *(uint8_t (*)[16])((int64_t)pLong_20 + lVal_14 + 0x10) = ZEXT816(0);
        *(uint8_t (*)[16])((int64_t)pLong_20 + lVal_14) = ZEXT816(0);
        pU64_1 = (uint32_t *)((int64_t)pLong_19 + lVal_14);
        uVal_7 = *pU64_1;
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_1 = (uint32_t *)((int64_t)pLong_19 + lVal_14 + 0x10);
        uVal_11 = pU64_1[1];
        uVal_12 = pU64_1[2];
        uVal_13 = pU64_1[3];
        pU64_2 = (uint32_t *)((int64_t)pLong_20 + lVal_14 + 0x10);
        *pU64_2 = *pU64_1;
        pU64_2[1] = uVal_11;
        pU64_2[2] = uVal_12;
        pU64_2[3] = uVal_13;
        pU64_1 = (uint32_t *)((int64_t)pLong_20 + lVal_14);
        *pU64_1 = uVal_7;
        pU64_1[1] = uVal_8;
        pU64_1[2] = uVal_9;
        pU64_1[3] = uVal_10;
        *(uint64_t *)((int64_t)pLong_19 + lVal_14 + 0x10) = 0;
        *(uint64_t *)((int64_t)pLong_19 + lVal_14 + 0x18) = 0xf;
        *(uint8_t *)((int64_t)pLong_19 + lVal_14) = 0;
        lVal_17 = lVal_14 + 0x20;
        lVal_14 = lVal_14 + 0x20;
      } while ((int64_t *)((int64_t)pLong_19 + lVal_17) != pLong_15);
      pLong_19 = *param_1;
      uVal_3 = *param_2;
      goto joined_r0x000180083c1b;
    }
  }
  else if (uVal_3 < 0x80) {
    pLong_20 = (int64_t *)func_0x180672de0();
    pLong_19 = *param_1;
    pLong_15 = param_1[1];
    if (pLong_19 != pLong_15) goto LAB_180083bc5;
  }
  else {
    if (uVal_3 == 0x7ffffffffffffff) goto LAB_180083cf3;
    lVal_14 = func_0x180672de0();
    pLong_20 = (int64_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
    pLong_20[-1] = lVal_14;
    pLong_19 = *param_1;
    pLong_15 = param_1[1];
    if (pLong_19 != pLong_15) goto LAB_180083bc5;
  }
  uVal_3 = *param_2;
joined_r0x000180083c1b:
  if (pLong_19 != (int64_t *)0x0) {
    pLong_15 = param_1[1];
    if (pLong_19 == pLong_15) {
      uVal_18 = (int64_t)param_1[2] - (int64_t)pLong_19;
    }
    else {
      do {
        uVal_18 = pLong_19[3];
        if (0xf < uVal_18) {
          lVal_14 = *pLong_19;
          uVal_16 = uVal_18 + 1;
          lVal_17 = lVal_14;
          if (0xfff < uVal_16) {
            lVal_17 = *(int64_t *)(lVal_14 + -8);
            if (0x1f < (uint64_t)((lVal_14 + -8) - lVal_17)) goto LAB_180083c96;
            uVal_16 = uVal_18 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_17,uVal_16);
        }
        pLong_19[2] = 0;
        pLong_19[3] = 0xf;
        *(uint8_t *)pLong_19 = 0;
        pLong_19 = pLong_19 + 4;
      } while (pLong_19 != pLong_15);
      pLong_19 = *param_1;
      uVal_18 = (int64_t)param_1[2] - (int64_t)pLong_19;
    }
    if (0xfff < uVal_18) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_19 + (-8 - (int64_t)(int64_t *)pLong_19[-1]))) {
LAB_180083c96:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_18 = uVal_18 + 0x27;
      pLong_19 = (int64_t *)pLong_19[-1];
    }
    thunk_FUN_180695dd0(pLong_19,uVal_18);
  }
  *param_1 = pLong_20;
  param_1[1] = (int64_t *)(((int64_t)pLong_5 - (int64_t)pLong_4) + (int64_t)pLong_20);
  param_1[2] = pLong_20 + uVal_3 * 4;
  return;
}

// func_0x180083d00
char * func_0x180083d00(char **param_1)
{
  char ch_1;
  func_ptr_t fnPtr_2;
  char *fnPtr_3;
  uint8_t local_b0 [56];
  uint8_t local_78 [56];
  uint8_t local_40 [32];
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  fnPtr_3 = *param_1;
  ch_1 = *fnPtr_3;
  if (ch_1 == '\x01') {
    fnPtr_3 = param_1[1] + 0x40;
  }
  else {
    if (ch_1 != '\x02') {
      if (ch_1 == '\0') {
        func_0x180001060(local_40,"cannot get value");
        func_0x180083e30(local_b0,0xd6,local_40,fnPtr_3);
        func_0x18067a120(local_b0,&DAT_180768740);
      }
      else {
        if (param_1[3] == (char *)0x0) {
          return fnPtr_3;
        }
        func_0x180001060(local_40,"cannot get value");
        func_0x180083e30(local_78,0xd6,local_40,fnPtr_3);
        func_0x18067a120(local_78,&DAT_180768740);
      }
      fnPtr_2 = (func_ptr_t )swi(3);
      fnPtr_3 = (char *)(*fnPtr_2)();
      return fnPtr_3;
    }
    fnPtr_3 = param_1[2];
  }
  return fnPtr_3;
}

// Unwind@180083dd0
void Unwind_180083dd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x98);
  return;
}

// Unwind@180083e00
void Unwind_180083e00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x98);
  return;
}

// func_0x180083e30
uint64_t * func_0x180083e30(uint64_t *param_1,uint32_t param_2,int64_t param_3)
{
  int64_t lVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint64_t uVal_5;
  uint32_t *pU64_6;
  int64_t lVal_7;
  uint32_t *local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint8_t local_98;
  undefined7 uStack_97;
  int64_t local_88;
  uint64_t local_80;
  uint8_t local_78 [9];
  undefined7 uStack_6f;
  int64_t local_68;
  uint64_t local_60;
  uint8_t local_58 [16];
  uint64_t local_48;
  uint64_t local_40;
  uint8_t local_31;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  _local_78 = ZEXT816(0);
  local_68 = 0;
  local_60 = 0xf;
  local_b0 = 0;
  local_b8 = (uint32_t *)func_0x180672de0(0x20);
  uVal_4 = s_invalid_iterator_18075f072._12_4_;
  uVal_3 = s_invalid_iterator_18075f072._8_4_;
  uVal_2 = s_invalid_iterator_18075f072._4_4_;
  local_a8 = 0x10;
  local_a0 = 0x1f;
  *local_b8 = s_invalid_iterator_18075f072._0_4_;
  local_b8[1] = uVal_2;
  local_b8[2] = uVal_3;
  local_b8[3] = uVal_4;
  *(uint8_t *)(local_b8 + 4) = 0;
  func_0x180094590(local_58,param_2);
  local_31 = 0x2e;
  func_0x180082ac0(&local_98,"[json.exception.",&local_b8,&local_31,local_58,&DAT_18076100f);
  if (0xf < local_40) {
    uVal_5 = local_40 + 1;
    lVal_7 = local_58._0_8_;
    if (0xfff < uVal_5) {
      lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
      if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800840e1;
      uVal_5 = local_40 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_5);
  }
  local_58 = ZEXT816(0);
  local_48 = 0;
  local_40 = 0xf;
  if (0xf < (uint64_t)(local_68 + local_88 + *(int64_t *)(param_3 + 0x10))) {
    func_0x180082810(local_58);
  }
  local_48 = 0;
  func_0x1800826d0(local_58,&local_98,local_78,param_3);
  if (0xf < local_80) {
    lVal_1 = CONCAT71(uStack_97,local_98);
    uVal_5 = local_80 + 1;
    lVal_7 = lVal_1;
    if (0xfff < uVal_5) {
      lVal_7 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_7)) goto LAB_1800840e1;
      uVal_5 = local_80 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_5);
  }
  local_88 = 0;
  local_80 = 0xf;
  local_98 = 0;
  if (0xf < local_a0) {
    uVal_5 = local_a0 + 1;
    pU64_6 = local_b8;
    if (0xfff < uVal_5) {
      pU64_6 = *(uint32_t **)(local_b8 + -2);
      if (0x1f < (uint64_t)((int64_t)local_b8 + (-8 - (int64_t)pU64_6))) goto LAB_1800840e1;
      uVal_5 = local_a0 + 0x28;
    }
    thunk_FUN_180695dd0(pU64_6,uVal_5);
  }
  if (0xf < local_60) {
    uVal_5 = local_60 + 1;
    lVal_7 = local_78._0_8_;
    if (0xfff < uVal_5) {
      lVal_7 = *(int64_t *)(local_78._0_8_ + -8);
      if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_7)) goto LAB_1800840e1;
      uVal_5 = local_60 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_5);
  }
  local_78._0_8_ = local_58;
  if (0xf < local_40) {
    local_78._0_8_ = local_58._0_8_;
  }
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  *param_1 = &PTR_LAB_1806aff10;
  *(uint32_t *)(param_1 + 3) = param_2;
  param_1[4] = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  local_78[8] = 1;
  func_0x18067b3f0(local_78,param_1 + 5);
  param_1[4] = std::runtime_error::vftable;
  *param_1 = &PTR_LAB_1806aff10;
  if (0xf < local_40) {
    uVal_5 = local_40 + 1;
    lVal_7 = local_58._0_8_;
    if (0xfff < uVal_5) {
      lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
      if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) {
LAB_1800840e1:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = local_40 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_5);
  }
  return param_1;
}

// Unwind@1800840f0
void Unwind_1800840f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@180084120
void Unwind_180084120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@180084150
void Unwind_180084150(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180084180
void Unwind_180084180(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// func_0x1800841c0
uint8_t (**func_0x1800841c0(int64_t param_1,uint8_t (**param_2)[16],uint8_t (*param_3)[16], uint32_t *param_4))[16]
{
  uint8_t uVal_1;
  uint8_t (*pArr16_2)[16];
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint32_t uVal_14;
  uint32_t uVal_15;
  uint32_t uVal_16;
  uint64_t uVal_17;
  int64_t lVal_18;
  uint8_t local_41;
  undefined7 uStack_40;
  
  pArr16_2 = *(uint8_t (**)[16])(param_1 + 8);
  if (pArr16_2 == *(uint8_t (**)[16])(param_1 + 0x10)) {
    param_3 = (uint8_t (*)[16])func_0x180084390(param_1,param_3,param_4);
  }
  else if (pArr16_2 == param_3) {
    pArr16_2[1] = ZEXT816(0);
    *pArr16_2 = ZEXT816(0);
    uVal_6 = *param_4;
    uVal_7 = param_4[1];
    uVal_8 = param_4[2];
    uVal_9 = param_4[3];
    uVal_10 = param_4[5];
    uVal_11 = param_4[6];
    uVal_12 = param_4[7];
    *(uint32_t *)pArr16_2[1] = param_4[4];
    *(uint32_t *)(pArr16_2[1] + 4) = uVal_10;
    *(uint32_t *)(pArr16_2[1] + 8) = uVal_11;
    *(uint32_t *)(pArr16_2[1] + 0xc) = uVal_12;
    *(uint32_t *)*pArr16_2 = uVal_6;
    *(uint32_t *)(*pArr16_2 + 4) = uVal_7;
    *(uint32_t *)(*pArr16_2 + 8) = uVal_8;
    *(uint32_t *)(*pArr16_2 + 0xc) = uVal_9;
    *(uint64_t *)(param_4 + 4) = 0;
    *(uint64_t *)(param_4 + 6) = 0xf;
    *(uint8_t *)param_4 = 0;
    *(int64_t *)(param_1 + 8) = *(int64_t *)(param_1 + 8) + 0x20;
  }
  else {
    uVal_1 = *(uint8_t *)param_4;
    uStack_40 = (undefined7)((uint64_t)*(uint64_t *)(param_4 + 2) >> 8);
    uVal_3 = *(uint64_t *)((int64_t)param_4 + 1);
    local_41 = (uint8_t)((uint64_t)uVal_3 >> 0x38);
    uVal_13 = param_4[4];
    uVal_14 = param_4[5];
    uVal_15 = param_4[6];
    uVal_16 = param_4[7];
    *(uint64_t *)(param_4 + 4) = 0;
    *(uint64_t *)(param_4 + 6) = 0xf;
    *(uint8_t *)param_4 = 0;
    uVal_6 = *(uint32_t *)pArr16_2[-2];
    uVal_7 = *(uint32_t *)(pArr16_2[-2] + 4);
    uVal_8 = *(uint32_t *)(pArr16_2[-2] + 8);
    uVal_9 = *(uint32_t *)(pArr16_2[-2] + 0xc);
    uVal_10 = *(uint32_t *)(pArr16_2[-1] + 4);
    uVal_11 = *(uint32_t *)(pArr16_2[-1] + 8);
    uVal_12 = *(uint32_t *)(pArr16_2[-1] + 0xc);
    *(uint32_t *)pArr16_2[1] = *(uint32_t *)pArr16_2[-1];
    *(uint32_t *)(pArr16_2[1] + 4) = uVal_10;
    *(uint32_t *)(pArr16_2[1] + 8) = uVal_11;
    *(uint32_t *)(pArr16_2[1] + 0xc) = uVal_12;
    *(uint32_t *)*pArr16_2 = uVal_6;
    *(uint32_t *)(*pArr16_2 + 4) = uVal_7;
    *(uint32_t *)(*pArr16_2 + 8) = uVal_8;
    *(uint32_t *)(*pArr16_2 + 0xc) = uVal_9;
    *(uint64_t *)pArr16_2[-1] = 0;
    *(uint64_t *)(pArr16_2[-1] + 8) = 0xf;
    pArr16_2[-2][0] = 0;
    *(int64_t *)(param_1 + 8) = *(int64_t *)(param_1 + 8) + 0x20;
    pArr16_2 = pArr16_2 + -2;
    while (pArr16_2 != param_3) {
      uVal_4 = *(uint64_t *)(pArr16_2[1] + 8);
      if (0xf < uVal_4) {
        lVal_5 = *(int64_t *)*pArr16_2;
        uVal_17 = uVal_4 + 1;
        lVal_18 = lVal_5;
        if (0xfff < uVal_17) {
          lVal_18 = *(int64_t *)(lVal_5 + -8);
          if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_18)) goto LAB_18008438c;
          uVal_17 = uVal_4 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_18,uVal_17);
      }
      *(uint64_t *)pArr16_2[1] = 0;
      *(uint64_t *)(pArr16_2[1] + 8) = 0xf;
      uVal_6 = *(uint32_t *)(pArr16_2[-2] + 4);
      uVal_7 = *(uint32_t *)(pArr16_2[-2] + 8);
      uVal_8 = *(uint32_t *)(pArr16_2[-2] + 0xc);
      uVal_9 = *(uint32_t *)pArr16_2[-1];
      uVal_10 = *(uint32_t *)(pArr16_2[-1] + 4);
      uVal_11 = *(uint32_t *)(pArr16_2[-1] + 8);
      uVal_12 = *(uint32_t *)(pArr16_2[-1] + 0xc);
      *(uint32_t *)*pArr16_2 = *(uint32_t *)pArr16_2[-2];
      *(uint32_t *)(*pArr16_2 + 4) = uVal_6;
      *(uint32_t *)(*pArr16_2 + 8) = uVal_7;
      *(uint32_t *)(*pArr16_2 + 0xc) = uVal_8;
      *(uint32_t *)pArr16_2[1] = uVal_9;
      *(uint32_t *)(pArr16_2[1] + 4) = uVal_10;
      *(uint32_t *)(pArr16_2[1] + 8) = uVal_11;
      *(uint32_t *)(pArr16_2[1] + 0xc) = uVal_12;
      *(uint64_t *)pArr16_2[-1] = 0;
      *(uint64_t *)(pArr16_2[-1] + 8) = 0xf;
      pArr16_2[-2][0] = 0;
      pArr16_2 = pArr16_2 + -2;
    }
    uVal_4 = *(uint64_t *)(param_3[1] + 8);
    if (0xf < uVal_4) {
      lVal_5 = *(int64_t *)*param_3;
      uVal_17 = uVal_4 + 1;
      lVal_18 = lVal_5;
      if (0xfff < uVal_17) {
        lVal_18 = *(int64_t *)(lVal_5 + -8);
        if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_18)) {
LAB_18008438c:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_17 = uVal_4 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_18,uVal_17);
    }
    (*param_3)[0] = uVal_1;
    *(uint64_t *)(*param_3 + 1) = uVal_3;
    *(uint64_t *)(*param_3 + 8) = CONCAT71(uStack_40,local_41);
    *(uint32_t *)param_3[1] = uVal_13;
    *(uint32_t *)(param_3[1] + 4) = uVal_14;
    *(uint32_t *)(param_3[1] + 8) = uVal_15;
    *(uint32_t *)(param_3[1] + 0xc) = uVal_16;
  }
  *param_2 = param_3;
  return param_2;
}

// func_0x180084390
int64_t func_0x180084390(int64_t **param_1,int64_t *param_2,uint32_t *param_3)
{
  uint32_t *pU64_1;
  uint32_t *pU64_2;
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
  int64_t lVal_13;
  int64_t *pLong_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  int64_t *pLong_17;
  uint64_t uVal_18;
  uint64_t uVal_19;
  int64_t *pLong_20;
  
  pLong_14 = *param_1;
  uVal_19 = ((int64_t)param_1[1] - (int64_t)pLong_14 >> 5) + 1;
  uVal_18 = (int64_t)param_1[2] - (int64_t)pLong_14 >> 5;
  uVal_11 = (uVal_18 >> 1) + uVal_18;
  if (uVal_11 <= uVal_19) {
    uVal_11 = uVal_19;
  }
  if (0x7ffffffffffffff - (uVal_18 >> 1) < uVal_18) {
    uVal_11 = 0x7ffffffffffffff;
  }
  if (uVal_11 >> 0x3b != 0) {
LAB_18008468a:
    func_0x18007ba90();
    fnPtr_3 = (func_ptr_t )swi(3);
    lVal_12 = (*fnPtr_3)();
    return lVal_12;
  }
  if (uVal_11 == 0) {
    pLong_17 = (int64_t *)0x0;
  }
  else if (uVal_11 < 0x80) {
    pLong_17 = (int64_t *)func_0x180672de0(uVal_11 * 0x20);
  }
  else {
    if (uVal_11 == 0x7ffffffffffffff) goto LAB_18008468a;
    lVal_12 = func_0x180672de0(uVal_11 * 0x20 + 0x27);
    pLong_17 = (int64_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
    pLong_17[-1] = lVal_12;
  }
  lVal_12 = (int64_t)param_2 - (int64_t)pLong_14;
  *(uint8_t (*)[16])((int64_t)pLong_17 + lVal_12 + 0x10) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_17 + lVal_12) = ZEXT816(0);
  uVal_4 = *param_3;
  uVal_5 = param_3[1];
  uVal_6 = param_3[2];
  uVal_7 = param_3[3];
  uVal_8 = param_3[5];
  uVal_9 = param_3[6];
  uVal_10 = param_3[7];
  pU64_1 = (uint32_t *)((int64_t)pLong_17 + lVal_12 + 0x10);
  *pU64_1 = param_3[4];
  pU64_1[1] = uVal_8;
  pU64_1[2] = uVal_9;
  pU64_1[3] = uVal_10;
  pU64_1 = (uint32_t *)((int64_t)pLong_17 + lVal_12);
  *pU64_1 = uVal_4;
  pU64_1[1] = uVal_5;
  pU64_1[2] = uVal_6;
  pU64_1[3] = uVal_7;
  *(uint64_t *)(param_3 + 4) = 0;
  *(uint64_t *)(param_3 + 6) = 0xf;
  *(uint8_t *)param_3 = 0;
  pLong_20 = *param_1;
  pLong_14 = param_1[1];
  if (param_2 == pLong_14) {
    if (pLong_20 == param_2) goto LAB_1800845a8;
    lVal_13 = 0;
    do {
      *(uint8_t (*)[16])((int64_t)pLong_17 + lVal_13 + 0x10) = ZEXT816(0);
      *(uint8_t (*)[16])((int64_t)pLong_17 + lVal_13) = ZEXT816(0);
      pU64_1 = (uint32_t *)((int64_t)pLong_20 + lVal_13);
      uVal_4 = *pU64_1;
      uVal_5 = pU64_1[1];
      uVal_6 = pU64_1[2];
      uVal_7 = pU64_1[3];
      pU64_1 = (uint32_t *)((int64_t)pLong_20 + lVal_13 + 0x10);
      uVal_8 = pU64_1[1];
      uVal_9 = pU64_1[2];
      uVal_10 = pU64_1[3];
      pU64_2 = (uint32_t *)((int64_t)pLong_17 + lVal_13 + 0x10);
      *pU64_2 = *pU64_1;
      pU64_2[1] = uVal_8;
      pU64_2[2] = uVal_9;
      pU64_2[3] = uVal_10;
      pU64_1 = (uint32_t *)((int64_t)pLong_17 + lVal_13);
      *pU64_1 = uVal_4;
      pU64_1[1] = uVal_5;
      pU64_1[2] = uVal_6;
      pU64_1[3] = uVal_7;
      *(uint64_t *)((int64_t)pLong_20 + lVal_13 + 0x10) = 0;
      *(uint64_t *)((int64_t)pLong_20 + lVal_13 + 0x18) = 0xf;
      *(uint8_t *)((int64_t)pLong_20 + lVal_13) = 0;
      lVal_16 = lVal_13 + 0x20;
      lVal_13 = lVal_13 + 0x20;
    } while ((int64_t *)((int64_t)pLong_20 + lVal_16) != param_2);
  }
  else {
    if (pLong_20 != param_2) {
      lVal_13 = 0;
      do {
        *(uint8_t (*)[16])((int64_t)pLong_17 + lVal_13 + 0x10) = ZEXT816(0);
        *(uint8_t (*)[16])((int64_t)pLong_17 + lVal_13) = ZEXT816(0);
        pU64_1 = (uint32_t *)((int64_t)pLong_20 + lVal_13);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)((int64_t)pLong_20 + lVal_13 + 0x10);
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_2 = (uint32_t *)((int64_t)pLong_17 + lVal_13 + 0x10);
        *pU64_2 = *pU64_1;
        pU64_2[1] = uVal_8;
        pU64_2[2] = uVal_9;
        pU64_2[3] = uVal_10;
        pU64_1 = (uint32_t *)((int64_t)pLong_17 + lVal_13);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint64_t *)((int64_t)pLong_20 + lVal_13 + 0x10) = 0;
        *(uint64_t *)((int64_t)pLong_20 + lVal_13 + 0x18) = 0xf;
        *(uint8_t *)((int64_t)pLong_20 + lVal_13) = 0;
        lVal_16 = lVal_13 + 0x20;
        lVal_13 = lVal_13 + 0x20;
      } while ((int64_t *)((int64_t)pLong_20 + lVal_16) != param_2);
      pLong_14 = param_1[1];
    }
    if (param_2 != pLong_14) {
      lVal_13 = 0;
      do {
        *(uint8_t (*)[16])((int64_t)pLong_17 + lVal_13 + lVal_12 + 0x30) = ZEXT816(0);
        *(uint8_t (*)[16])((int64_t)pLong_17 + lVal_13 + lVal_12 + 0x20) = ZEXT816(0);
        pU64_1 = (uint32_t *)((int64_t)param_2 + lVal_13);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)((int64_t)param_2 + lVal_13 + 0x10);
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_2 = (uint32_t *)((int64_t)pLong_17 + lVal_13 + lVal_12 + 0x30);
        *pU64_2 = *pU64_1;
        pU64_2[1] = uVal_8;
        pU64_2[2] = uVal_9;
        pU64_2[3] = uVal_10;
        pU64_1 = (uint32_t *)((int64_t)pLong_17 + lVal_13 + lVal_12 + 0x20);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint64_t *)((int64_t)param_2 + lVal_13 + 0x10) = 0;
        *(uint64_t *)((int64_t)param_2 + lVal_13 + 0x18) = 0xf;
        *(uint8_t *)((int64_t)param_2 + lVal_13) = 0;
        lVal_16 = lVal_13 + 0x20;
        lVal_13 = lVal_13 + 0x20;
      } while ((int64_t *)((int64_t)param_2 + lVal_16) != pLong_14);
    }
  }
  pLong_20 = *param_1;
LAB_1800845a8:
  if (pLong_20 != (int64_t *)0x0) {
    pLong_14 = param_1[1];
    if (pLong_20 == pLong_14) {
      uVal_18 = (int64_t)param_1[2] - (int64_t)pLong_20;
    }
    else {
      do {
        uVal_18 = pLong_20[3];
        if (0xf < uVal_18) {
          lVal_13 = *pLong_20;
          uVal_15 = uVal_18 + 1;
          lVal_16 = lVal_13;
          if (0xfff < uVal_15) {
            lVal_16 = *(int64_t *)(lVal_13 + -8);
            if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_16)) goto LAB_180084688;
            uVal_15 = uVal_18 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_16,uVal_15);
        }
        pLong_20[2] = 0;
        pLong_20[3] = 0xf;
        *(uint8_t *)pLong_20 = 0;
        pLong_20 = pLong_20 + 4;
      } while (pLong_20 != pLong_14);
      pLong_20 = *param_1;
      uVal_18 = (int64_t)param_1[2] - (int64_t)pLong_20;
    }
    if (0xfff < uVal_18) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_20 + (-8 - (int64_t)(int64_t *)pLong_20[-1]))) {
LAB_180084688:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_18 = uVal_18 + 0x27;
      pLong_20 = (int64_t *)pLong_20[-1];
    }
    thunk_FUN_180695dd0(pLong_20,uVal_18);
  }
  *param_1 = pLong_17;
  param_1[1] = pLong_17 + uVal_19 * 4;
  param_1[2] = pLong_17 + uVal_11 * 4;
  return lVal_12 + (int64_t)pLong_17;
}

// func_0x180084690
void func_0x180084690(int64_t param_1)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t *pLong_6;
  
  lVal_4 = *(int64_t *)(param_1 + 8);
  if (lVal_4 == 0) {
    return;
  }
  pLong_6 = *(int64_t **)(param_1 + 0x18);
  pLong_1 = *(int64_t **)(param_1 + 0x20);
  if (pLong_6 == pLong_1) {
    lVal_3 = *(int64_t *)(param_1 + 0x10);
  }
  else {
    do {
      uVal_5 = pLong_6[3];
      if (0xf < uVal_5) {
        lVal_4 = *pLong_6;
        uVal_2 = uVal_5 + 1;
        lVal_3 = lVal_4;
        if (0xfff < uVal_2) {
          lVal_3 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_3)) goto LAB_180084769;
          uVal_2 = uVal_5 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_3,uVal_2);
      }
      pLong_6[2] = 0;
      pLong_6[3] = 0xf;
      *(uint8_t *)pLong_6 = 0;
      pLong_6 = pLong_6 + 4;
    } while (pLong_6 != pLong_1);
    lVal_4 = *(int64_t *)(param_1 + 8);
    lVal_3 = *(int64_t *)(param_1 + 0x10);
  }
  uVal_5 = lVal_3 * 0x20;
  if (0xfff < uVal_5) {
    if (0x1f < (uint64_t)((lVal_4 + -8) - *(int64_t *)(lVal_4 + -8))) {
LAB_180084769:
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_5 = uVal_5 + 0x27;
    lVal_4 = *(int64_t *)(lVal_4 + -8);
  }
  thunk_FUN_180695dd0(lVal_4,uVal_5);
  return;
}

// func_0x180084770
void func_0x180084770(int64_t param_1,uint64_t *param_2)
{
  uint8_t (*pArr16_1)[16];
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  
  pArr16_1 = *(uint8_t (**)[16])(param_1 + 8);
  if (pArr16_1 == *(uint8_t (**)[16])(param_1 + 0x10)) {
    func_0x180084860(param_1,pArr16_1,param_2);
    return;
  }
  pArr16_1[1] = ZEXT816(0);
  *pArr16_1 = ZEXT816(0);
  uVal_2 = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  if (-1 < (int64_t)uVal_2) {
    if (uVal_2 < 0x10) {
      *(uint64_t *)pArr16_1[1] = uVal_2;
      *(uint64_t *)(pArr16_1[1] + 8) = 0xf;
      uVal_4 = *(uint32_t *)((int64_t)param_2 + 4);
      uVal_5 = *(uint32_t *)(param_2 + 1);
      uVal_6 = *(uint32_t *)((int64_t)param_2 + 0xc);
      *(uint32_t *)*pArr16_1 = *(uint32_t *)param_2;
      *(uint32_t *)(*pArr16_1 + 4) = uVal_4;
      *(uint32_t *)(*pArr16_1 + 8) = uVal_5;
      *(uint32_t *)(*pArr16_1 + 0xc) = uVal_6;
    }
    else {
      uVal_7 = uVal_2 | 0xf;
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
      *(uint64_t *)*pArr16_1 = uVal_7;
      *(uint64_t *)pArr16_1[1] = uVal_2;
      *(uint64_t *)(pArr16_1[1] + 8) = uVal_9;
      func_0x1806aa960(uVal_7,param_2,uVal_2 + 1);
    }
    *(int64_t *)(param_1 + 8) = *(int64_t *)(param_1 + 8) + 0x20;
    return;
  }
  func_0x18007ba70();
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// func_0x180084860
uint64_t * func_0x180084860(int64_t **param_1,int64_t *param_2,uint64_t *param_3)
{
  uint32_t *pU64_1;
  uint32_t *pU64_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  int64_t lVal_11;
  int64_t lVal_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  int64_t *pLong_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  int64_t *pLong_18;
  uint64_t uVal_19;
  int64_t *pLong_20;
  uint64_t uVal_21;
  uint64_t *pU64_22;
  
  pLong_15 = *param_1;
  uVal_19 = ((int64_t)param_1[1] - (int64_t)pLong_15 >> 5) + 1;
  uVal_17 = (int64_t)param_1[2] - (int64_t)pLong_15 >> 5;
  uVal_21 = (uVal_17 >> 1) + uVal_17;
  if (uVal_21 <= uVal_19) {
    uVal_21 = uVal_19;
  }
  if (0x7ffffffffffffff - (uVal_17 >> 1) < uVal_17) {
    uVal_21 = 0x7ffffffffffffff;
  }
  if (uVal_21 >> 0x3b != 0) {
LAB_180084c23:
    func_0x18007ba90();
LAB_180084c29:
    func_0x18007ba70();
    fnPtr_3 = (func_ptr_t )swi(3);
    pU64_22 = (uint64_t *)(*fnPtr_3)();
    return pU64_22;
  }
  if (uVal_21 == 0) {
    pLong_18 = (int64_t *)0x0;
  }
  else if (uVal_21 < 0x80) {
    pLong_18 = (int64_t *)func_0x180672de0();
  }
  else {
    if (uVal_21 == 0x7ffffffffffffff) goto LAB_180084c23;
    lVal_12 = func_0x180672de0();
    pLong_18 = (int64_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
    pLong_18[-1] = lVal_12;
  }
  lVal_12 = (int64_t)param_2 - (int64_t)pLong_15;
  *(uint8_t (*)[16])((int64_t)pLong_18 + lVal_12 + 0x10) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_18 + lVal_12) = ZEXT816(0);
  uVal_17 = param_3[2];
  if (0xf < (uint64_t)param_3[3]) {
    param_3 = (uint64_t *)*param_3;
  }
  if ((int64_t)uVal_17 < 0) goto LAB_180084c29;
  pU64_22 = (uint64_t *)(lVal_12 + (int64_t)pLong_18);
  if (uVal_17 < 0x10) {
    pU64_22[2] = uVal_17;
    pU64_22[3] = 0xf;
    uVal_4 = *(uint32_t *)((int64_t)param_3 + 4);
    uVal_5 = *(uint32_t *)(param_3 + 1);
    uVal_6 = *(uint32_t *)((int64_t)param_3 + 0xc);
    *(uint32_t *)pU64_22 = *(uint32_t *)param_3;
    *(uint32_t *)((int64_t)pU64_22 + 4) = uVal_4;
    *(uint32_t *)(pU64_22 + 1) = uVal_5;
    *(uint32_t *)((int64_t)pU64_22 + 0xc) = uVal_6;
  }
  else {
    uVal_13 = uVal_17 | 0xf;
    uVal_16 = 0x16;
    if (0x16 < uVal_13) {
      uVal_16 = uVal_13;
    }
    if (uVal_13 < 0xfff) {
      uVal_13 = func_0x180672de0(uVal_16 + 1);
    }
    else {
      lVal_14 = func_0x180672de0(uVal_16 + 0x28);
      uVal_13 = lVal_14 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_13 - 8) = lVal_14;
    }
    *pU64_22 = uVal_13;
    pU64_22[2] = uVal_17;
    pU64_22[3] = uVal_16;
    func_0x1806aa960(uVal_13,param_3,uVal_17 + 1);
  }
  pLong_20 = *param_1;
  pLong_15 = param_1[1];
  if (param_2 == pLong_15) {
    if (pLong_20 == param_2) goto LAB_180084b29;
    lVal_12 = 0;
    do {
      *(uint8_t (*)[16])((int64_t)pLong_18 + lVal_12 + 0x10) = ZEXT816(0);
      *(uint8_t (*)[16])((int64_t)pLong_18 + lVal_12) = ZEXT816(0);
      pU64_1 = (uint32_t *)((int64_t)pLong_20 + lVal_12);
      uVal_4 = *pU64_1;
      uVal_5 = pU64_1[1];
      uVal_6 = pU64_1[2];
      uVal_7 = pU64_1[3];
      pU64_1 = (uint32_t *)((int64_t)pLong_20 + lVal_12 + 0x10);
      uVal_8 = pU64_1[1];
      uVal_9 = pU64_1[2];
      uVal_10 = pU64_1[3];
      pU64_2 = (uint32_t *)((int64_t)pLong_18 + lVal_12 + 0x10);
      *pU64_2 = *pU64_1;
      pU64_2[1] = uVal_8;
      pU64_2[2] = uVal_9;
      pU64_2[3] = uVal_10;
      pU64_1 = (uint32_t *)((int64_t)pLong_18 + lVal_12);
      *pU64_1 = uVal_4;
      pU64_1[1] = uVal_5;
      pU64_1[2] = uVal_6;
      pU64_1[3] = uVal_7;
      *(uint64_t *)((int64_t)pLong_20 + lVal_12 + 0x10) = 0;
      *(uint64_t *)((int64_t)pLong_20 + lVal_12 + 0x18) = 0xf;
      *(uint8_t *)((int64_t)pLong_20 + lVal_12) = 0;
      lVal_14 = lVal_12 + 0x20;
      lVal_12 = lVal_12 + 0x20;
    } while ((int64_t *)((int64_t)pLong_20 + lVal_14) != param_2);
  }
  else {
    if (pLong_20 != param_2) {
      lVal_14 = 0;
      do {
        *(uint8_t (*)[16])((int64_t)pLong_18 + lVal_14 + 0x10) = ZEXT816(0);
        *(uint8_t (*)[16])((int64_t)pLong_18 + lVal_14) = ZEXT816(0);
        pU64_1 = (uint32_t *)((int64_t)pLong_20 + lVal_14);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)((int64_t)pLong_20 + lVal_14 + 0x10);
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_2 = (uint32_t *)((int64_t)pLong_18 + lVal_14 + 0x10);
        *pU64_2 = *pU64_1;
        pU64_2[1] = uVal_8;
        pU64_2[2] = uVal_9;
        pU64_2[3] = uVal_10;
        pU64_1 = (uint32_t *)((int64_t)pLong_18 + lVal_14);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint64_t *)((int64_t)pLong_20 + lVal_14 + 0x10) = 0;
        *(uint64_t *)((int64_t)pLong_20 + lVal_14 + 0x18) = 0xf;
        *(uint8_t *)((int64_t)pLong_20 + lVal_14) = 0;
        lVal_11 = lVal_14 + 0x20;
        lVal_14 = lVal_14 + 0x20;
      } while ((int64_t *)((int64_t)pLong_20 + lVal_11) != param_2);
      pLong_15 = param_1[1];
    }
    if (param_2 != pLong_15) {
      lVal_14 = 0;
      do {
        *(uint8_t (*)[16])((int64_t)pLong_18 + lVal_14 + lVal_12 + 0x30) = ZEXT816(0);
        *(uint8_t (*)[16])((int64_t)pLong_18 + lVal_14 + lVal_12 + 0x20) = ZEXT816(0);
        pU64_1 = (uint32_t *)((int64_t)param_2 + lVal_14);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)((int64_t)param_2 + lVal_14 + 0x10);
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_2 = (uint32_t *)((int64_t)pLong_18 + lVal_14 + lVal_12 + 0x30);
        *pU64_2 = *pU64_1;
        pU64_2[1] = uVal_8;
        pU64_2[2] = uVal_9;
        pU64_2[3] = uVal_10;
        pU64_1 = (uint32_t *)((int64_t)pLong_18 + lVal_14 + lVal_12 + 0x20);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint64_t *)((int64_t)param_2 + lVal_14 + 0x10) = 0;
        *(uint64_t *)((int64_t)param_2 + lVal_14 + 0x18) = 0xf;
        *(uint8_t *)((int64_t)param_2 + lVal_14) = 0;
        lVal_11 = lVal_14 + 0x20;
        lVal_14 = lVal_14 + 0x20;
      } while ((int64_t *)((int64_t)param_2 + lVal_11) != pLong_15);
    }
  }
  pLong_20 = *param_1;
LAB_180084b29:
  if (pLong_20 != (int64_t *)0x0) {
    pLong_15 = param_1[1];
    if (pLong_20 == pLong_15) {
      uVal_17 = (int64_t)param_1[2] - (int64_t)pLong_20;
    }
    else {
      do {
        uVal_17 = pLong_20[3];
        if (0xf < uVal_17) {
          lVal_12 = *pLong_20;
          uVal_16 = uVal_17 + 1;
          lVal_14 = lVal_12;
          if (0xfff < uVal_16) {
            lVal_14 = *(int64_t *)(lVal_12 + -8);
            if (0x1f < (uint64_t)((lVal_12 + -8) - lVal_14)) goto LAB_180084c21;
            uVal_16 = uVal_17 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_14,uVal_16);
        }
        pLong_20[2] = 0;
        pLong_20[3] = 0xf;
        *(uint8_t *)pLong_20 = 0;
        pLong_20 = pLong_20 + 4;
      } while (pLong_20 != pLong_15);
      pLong_20 = *param_1;
      uVal_17 = (int64_t)param_1[2] - (int64_t)pLong_20;
    }
    if (0xfff < uVal_17) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_20 + (-8 - (int64_t)(int64_t *)pLong_20[-1]))) {
LAB_180084c21:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_17 = uVal_17 + 0x27;
      pLong_20 = (int64_t *)pLong_20[-1];
    }
    thunk_FUN_180695dd0(pLong_20,uVal_17);
  }
  *param_1 = pLong_18;
  param_1[1] = pLong_18 + uVal_19 * 4;
  param_1[2] = pLong_18 + uVal_21 * 4;
  return pU64_22;
}

// Unwind@180084c30
void Unwind_180084c30(uint64_t param_1,int64_t param_2)
{
  func_0x180084690(param_2 + 0x20);
  return;
}

// func_0x180084c70
void func_0x180084c70(uint8_t (**param_1)[16],char param_2)
{
  uint64_t *pU64_1;
  func_ptr_t fnPtr_2;
  int64_t *pLong_3;
  uint64_t *pU64_4;
  uint64_t *pU64_5;
  uint8_t (*pArr16_6)[16];
  uint64_t uVal_7;
  int64_t lVal_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint8_t *pU64_12;
  uint64_t *pU64_13;
  uint8_t *pU64_14;
  bool bFlag_15;
  uint64_t local_78;
  int64_t *local_70;
  uint8_t local_68 [16];
  uint8_t *local_58;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((byte)(param_2 - 1U) < 2) {
    local_68 = ZEXT816(0);
    local_58 = (uint8_t *)0x0;
    pArr16_6 = *param_1;
    if (param_2 == '\x02') {
      pU64_14 = *(uint8_t **)(*pArr16_6 + 8);
      local_78 = (int64_t)pU64_14 - (int64_t)*(uint8_t **)*pArr16_6 >> 4;
      if (pU64_14 != *(uint8_t **)*pArr16_6) {
        if (local_78 >> 0x3c != 0) {
          func_0x18007c0d0();
LAB_1800851f8:
          func_0x18007c0d0();
          fnPtr_2 = (func_ptr_t )swi(3);
          (*fnPtr_2)();
          return;
        }
        func_0x180085300(local_68,&local_78);
        pArr16_6 = *param_1;
        pU64_14 = *(uint8_t **)(*pArr16_6 + 8);
      }
      for (pU64_12 = *(uint8_t **)*pArr16_6; pU64_12 != pU64_14; pU64_12 = pU64_12 + 0x10) {
        while ((uint8_t *)local_68._8_8_ == local_58) {
          func_0x180085520(local_68,local_68._8_8_,pU64_12);
          pU64_12 = pU64_12 + 0x10;
          if (pU64_12 == pU64_14) goto LAB_180084d45;
        }
        *(uint8_t *)local_68._8_8_ = *pU64_12;
        *(uint64_t *)(local_68._8_8_ + 8) = *(uint64_t *)(pU64_12 + 8);
        *pU64_12 = 0;
        *(uint64_t *)(pU64_12 + 8) = 0;
        local_68._8_8_ = (uint8_t *)(local_68._8_8_ + 0x10);
      }
    }
    else {
      local_78 = *(uint64_t *)(*pArr16_6 + 8);
      if (local_78 != 0) {
        if (local_78 >> 0x3c != 0) goto LAB_1800851f8;
        func_0x180085300(local_68,&local_78);
        pArr16_6 = *param_1;
      }
      pU64_1 = *(uint64_t **)*pArr16_6;
      pU64_5 = (uint64_t *)*pU64_1;
LAB_180085010:
      if (pU64_5 != pU64_1) {
        if ((uint8_t *)local_68._8_8_ == local_58) {
          func_0x180085520(local_68,local_68._8_8_,pU64_5 + 8);
        }
        else {
          *(uint8_t *)local_68._8_8_ = *(uint8_t *)(pU64_5 + 8);
          *(uint64_t *)(local_68._8_8_ + 8) = pU64_5[9];
          *(uint8_t *)(pU64_5 + 8) = 0;
          pU64_5[9] = 0;
          local_68._8_8_ = (uint8_t *)(local_68._8_8_ + 0x10);
        }
        pU64_4 = (uint64_t *)pU64_5[2];
        pU64_13 = pU64_5;
        if (*(char *)((int64_t)(uint64_t *)pU64_5[2] + 0x19) == '\0') {
          do {
            pU64_5 = pU64_4;
            pU64_4 = (uint64_t *)*pU64_5;
          } while (*(char *)((int64_t)(uint64_t *)*pU64_5 + 0x19) == '\0');
        }
        else {
          do {
            pU64_5 = (uint64_t *)pU64_13[1];
            if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
            bFlag_15 = pU64_13 == (uint64_t *)pU64_5[2];
            pU64_13 = pU64_5;
          } while (bFlag_15);
        }
        goto LAB_180085010;
      }
    }
LAB_180084d45:
    if (local_68._0_8_ != local_68._8_8_) {
      do {
        local_78 = CONCAT71(local_78._1_7_,*(uint8_t *)(local_68._8_8_ + -0x10));
        local_70 = *(int64_t **)(local_68._8_8_ + -8);
        *(uint8_t *)(local_68._8_8_ + -0x10) = 0;
        *(uint64_t *)(local_68._8_8_ + -8) = 0;
        func_0x180084c70(local_68._8_8_ + -8,*(uint8_t *)(local_68._8_8_ + -0x10));
        local_68._8_8_ = local_68._8_8_ + -0x10;
        if ((char)local_78 == '\x01') {
          pU64_1 = (uint64_t *)*local_70;
          pU64_5 = (uint64_t *)*pU64_1;
LAB_180084e60:
          pLong_3 = local_70;
          if (pU64_5 != pU64_1) {
            if ((uint8_t *)local_68._8_8_ == local_58) {
              func_0x180085520(local_68,local_68._8_8_,pU64_5 + 8);
            }
            else {
              *(uint8_t *)local_68._8_8_ = *(uint8_t *)(pU64_5 + 8);
              *(uint64_t *)(local_68._8_8_ + 8) = pU64_5[9];
              *(uint8_t *)(pU64_5 + 8) = 0;
              pU64_5[9] = 0;
              local_68._8_8_ = (uint8_t *)(local_68._8_8_ + 0x10);
            }
            pU64_4 = (uint64_t *)pU64_5[2];
            pU64_13 = pU64_5;
            if (*(char *)((int64_t)(uint64_t *)pU64_5[2] + 0x19) == '\0') {
              do {
                pU64_5 = pU64_4;
                pU64_4 = (uint64_t *)*pU64_5;
              } while (*(char *)((int64_t)(uint64_t *)*pU64_5 + 0x19) == '\0');
            }
            else {
              do {
                pU64_5 = (uint64_t *)pU64_13[1];
                if (*(char *)((int64_t)pU64_5 + 0x19) != '\0') break;
                bFlag_15 = pU64_13 == (uint64_t *)pU64_5[2];
                pU64_13 = pU64_5;
              } while (bFlag_15);
            }
            goto LAB_180084e60;
          }
          lVal_8 = *local_70;
          func_0x180085870(local_70,local_70,*(uint64_t *)(lVal_8 + 8));
          *(int64_t *)(lVal_8 + 8) = lVal_8;
          *(int64_t *)lVal_8 = lVal_8;
          *(int64_t *)(lVal_8 + 0x10) = lVal_8;
          pLong_3[1] = 0;
        }
        else if ((char)local_78 == '\x02') {
          pU64_12 = (uint8_t *)local_70[1];
          for (pU64_14 = (uint8_t *)*local_70; pU64_14 != pU64_12; pU64_14 = pU64_14 + 0x10) {
            while ((uint8_t *)local_68._8_8_ == local_58) {
              func_0x180085520(local_68,local_68._8_8_,pU64_14);
              pU64_14 = pU64_14 + 0x10;
              if (pU64_14 == pU64_12) goto LAB_180084e07;
            }
            *(uint8_t *)local_68._8_8_ = *pU64_14;
            *(uint64_t *)(local_68._8_8_ + 8) = *(uint64_t *)(pU64_14 + 8);
            *pU64_14 = 0;
            *(uint64_t *)(pU64_14 + 8) = 0;
            local_68._8_8_ = (uint8_t *)(local_68._8_8_ + 0x10);
          }
LAB_180084e07:
          pLong_3 = local_70;
          pU64_14 = (uint8_t *)*local_70;
          pU64_12 = (uint8_t *)local_70[1];
          if (pU64_14 != pU64_12) {
            do {
              func_0x180084c70(pU64_14 + 8,*pU64_14);
              pU64_14 = pU64_14 + 0x10;
            } while (pU64_14 != pU64_12);
            pLong_3[1] = *pLong_3;
          }
        }
        func_0x180084c70(&local_70,local_78 & 0xff);
      } while (local_68._0_8_ != local_68._8_8_);
    }
    if (local_68._0_8_ != 0) {
      uVal_10 = (int64_t)local_58 - local_68._0_8_;
      lVal_8 = local_68._0_8_;
      if (0xfff < uVal_10) {
        lVal_8 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_8)) goto LAB_1800851f0;
        uVal_10 = uVal_10 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_8,uVal_10);
    }
  }
  switch(param_2) {
  case '\x01':
    pArr16_6 = *param_1;
    func_0x180085870(pArr16_6,pArr16_6,*(uint64_t *)(*(int64_t *)*pArr16_6 + 8));
    thunk_FUN_180695dd0(*(uint64_t *)*pArr16_6,0x50);
    pArr16_6 = *param_1;
    uVal_11 = 0x10;
    break;
  case '\x02':
    pArr16_6 = *param_1;
    pU64_14 = *(uint8_t **)*pArr16_6;
    if (pU64_14 != (uint8_t *)0x0) {
      pU64_12 = *(uint8_t **)(*pArr16_6 + 8);
      if (pU64_14 != pU64_12) {
        do {
          func_0x180084c70(pU64_14 + 8,*pU64_14);
          pU64_14 = pU64_14 + 0x10;
        } while (pU64_14 != pU64_12);
        pU64_14 = *(uint8_t **)*pArr16_6;
      }
      uVal_10 = *(int64_t *)pArr16_6[1] - (int64_t)pU64_14;
      pU64_12 = pU64_14;
      if (0xfff < uVal_10) {
        pU64_12 = *(uint8_t **)(pU64_14 + -8);
        if ((uint8_t *)0x1f < pU64_14 + (-8 - (int64_t)pU64_12)) {
LAB_1800851f0:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_10 = uVal_10 + 0x27;
      }
      thunk_FUN_180695dd0(pU64_12,uVal_10);
      *pArr16_6 = ZEXT816(0);
      *(uint64_t *)pArr16_6[1] = 0;
      pArr16_6 = *param_1;
    }
    uVal_11 = 0x18;
    break;
  case '\x03':
    pArr16_6 = *param_1;
    uVal_10 = *(uint64_t *)(pArr16_6[1] + 8);
    if (0xf < uVal_10) {
      lVal_8 = *(int64_t *)*pArr16_6;
      uVal_7 = uVal_10 + 1;
      lVal_9 = lVal_8;
      if (0xfff < uVal_7) {
        lVal_9 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_9)) goto LAB_1800851f0;
        uVal_7 = uVal_10 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_7);
    }
    *(uint64_t *)pArr16_6[1] = 0;
    *(uint64_t *)(pArr16_6[1] + 8) = 0xf;
    (*pArr16_6)[0] = 0;
    pArr16_6 = *param_1;
    uVal_11 = 0x20;
    break;
  default:
    goto switchD_180084f9e_caseD_4;
  case '\b':
    pArr16_6 = *param_1;
    lVal_8 = *(int64_t *)*pArr16_6;
    if (lVal_8 != 0) {
      uVal_10 = *(int64_t *)pArr16_6[1] - lVal_8;
      lVal_9 = lVal_8;
      if (0xfff < uVal_10) {
        lVal_9 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_9)) goto LAB_1800851f0;
        uVal_10 = uVal_10 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_10);
      *pArr16_6 = ZEXT816(0);
      *(uint64_t *)pArr16_6[1] = 0;
      pArr16_6 = *param_1;
    }
    uVal_11 = 0x28;
  }
  thunk_FUN_180695dd0(pArr16_6,uVal_11);
switchD_180084f9e_caseD_4:
  return;
}

// Unwind@180085200
void Unwind_180085200(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180085220
void Unwind_180085220(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x20);
  return;
}

// Unwind@180085260
void Unwind_180085260(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180085280
void Unwind_180085280(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800852a0
void Unwind_1800852a0(uint64_t param_1,int64_t param_2)
{
  func_0x180085960(param_2 + 0x30);
  return;
}

// Unwind@1800852e0
void Unwind_1800852e0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}
