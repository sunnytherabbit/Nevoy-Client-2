#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@180182a40
void Unwind_180182a40(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x217);
  func_0x180001e70(param_2 + 0x1a0);
  *(uint8_t *)(param_2 + 0x212) = uVal_1;
  return;
}

// Unwind@180182a90
void Unwind_180182a90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x212) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x128), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xf0));
    *(uint64_t *)(param_2 + 0x128) = 0;
  }
  return;
}

// Unwind@180182b00
void Unwind_180182b00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1f0);
  return;
}

// Unwind@180182b40
void Unwind_180182b40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@180182b80
void Unwind_180182b80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1f0);
  *(uint8_t *)(param_2 + 0x211) = 0;
  return;
}

// Unwind@180182bd0
void Unwind_180182bd0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x211);
  func_0x180001e70(param_2 + 0x1a0);
  *(uint8_t *)(param_2 + 0x210) = uVal_1;
  return;
}

// Unwind@180182c20
void Unwind_180182c20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x210) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x168), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x130));
    *(uint64_t *)(param_2 + 0x168) = 0;
  }
  return;
}

// Unwind@180182c90
void Unwind_180182c90(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x1e8);
  func_0x1801b8010(lVal_1 + 0xe0);
  func_0x180182db0(*(uint64_t *)(param_2 + 400));
  func_0x1800822d0(*(uint64_t *)(param_2 + 0x198));
  func_0x1801c49a0(lVal_1);
  return;
}

// Unwind@180182d00
void Unwind_180182d00(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5ab8) = 0;
  return;
}

// Unwind@180182d50
void Unwind_180182d50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5af4) = 0;
  *(uint8_t *)(param_2 + 0x217) = 1;
  return;
}

// func_0x180182db0
void func_0x180182db0(uint8_t (*param_1)[16])
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  lVal_2 = *(int64_t *)*param_1;
  if (lVal_2 != 0) {
    lVal_3 = *(int64_t *)(*param_1 + 8);
    if (lVal_2 != lVal_3) {
      do {
        func_0x180183400(lVal_2);
        lVal_2 = lVal_2 + 0xa8;
      } while (lVal_2 != lVal_3);
      lVal_2 = *(int64_t *)*param_1;
    }
    uVal_1 = *(int64_t *)param_1[1] - lVal_2;
    lVal_3 = lVal_2;
    if (0xfff < uVal_1) {
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_1 = uVal_1 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_1);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// func_0x180182e30
void func_0x180182e30(uint64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  *param_1 = &PTR_LAB_1806b7ab0;
  func_0x1801b8010(param_1 + 0x1c);
  lVal_2 = param_1[0x19];
  if (lVal_2 != 0) {
    lVal_3 = param_1[0x1a];
    if (lVal_2 != lVal_3) {
      do {
        func_0x180183400(lVal_2);
        lVal_2 = lVal_2 + 0xa8;
      } while (lVal_2 != lVal_3);
      lVal_2 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 0x19);
    }
    uVal_1 = param_1[0x1b] - lVal_2;
    lVal_3 = lVal_2;
    if (0xfff < uVal_1) {
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_1 = uVal_1 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_1);
    *(uint8_t (*)[16])(param_1 + 0x19) = ZEXT816(0);
    param_1[0x1b] = 0;
  }
  func_0x1800822d0(param_1 + 0x15);
  func_0x1801c49a0(param_1);
  return;
}

// func_0x180182f00
void func_0x180182f00(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint8_t param_4)
{
  uint64_t *pU64_1;
  size_t _Size;
  uint8_t (*pArr16_2)[16];
  int64_t lVal_3;
  int iVal_4;
  uint64_t uVal_5;
  uint64_t *_Buf1;
  int64_t lVal_6;
  uint64_t *_Buf2;
  uint64_t *pU64_7;
  uint8_t local_180 [80];
  int64_t local_130;
  int64_t local_120;
  uint8_t local_118;
  undefined7 uStack_117;
  uint64_t local_108;
  uint64_t local_100;
  uint local_f8;
  uint32_t uStack_f4;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  uint64_t local_e8;
  uint64_t uStack_e0;
  uint8_t local_d8 [80];
  uint8_t local_88 [16];
  int64_t local_78;
  uint8_t local_70;
  undefined7 uStack_6f;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = (uint8_t (*)[16])CONCAT71(local_50._1_7_,param_4);
  pU64_7 = *(uint64_t **)(param_1 + 200);
  pU64_1 = *(uint64_t **)(param_1 + 0xd0);
  if (pU64_7 != pU64_1) {
    _Size = param_2[2];
    _Buf2 = param_2;
    if (0xf < (uint64_t)param_2[3]) {
      _Buf2 = (uint64_t *)*param_2;
    }
    if (_Size == 0) {
      do {
        if (pU64_7[2] == 0) {
LAB_180182fb3:
          func_0x180057ad0(pU64_7 + 4,param_3,(uint64_t)local_50 & 0xff);
          return;
        }
        pU64_7 = pU64_7 + 0x15;
      } while (pU64_7 != pU64_1);
    }
    else {
      do {
        if (pU64_7[2] == _Size) {
          _Buf1 = pU64_7;
          if (0xf < (uint64_t)pU64_7[3]) {
            _Buf1 = (uint64_t *)*pU64_7;
          }
          iVal_4 = memcmp(_Buf1,_Buf2,_Size);
          if (iVal_4 == 0) goto LAB_180182fb3;
        }
        pU64_7 = pU64_7 + 0x15;
      } while (pU64_7 != pU64_1);
    }
  }
  func_0x180057550(local_180,param_2,param_3,(uint64_t)local_50 & 0xff);
  func_0x1801832f0(&local_f8,param_2,local_180);
  pArr16_2 = *(uint8_t (**)[16])(param_1 + 0xd0);
  if (pArr16_2 == *(uint8_t (**)[16])(param_1 + 0xd8)) {
    func_0x1801b8150(param_1 + 200,pArr16_2,&local_f8);
  }
  else {
    pArr16_2[1] = ZEXT816(0);
    *pArr16_2 = ZEXT816(0);
    *(uint32_t *)pArr16_2[1] = (uint32_t)local_e8;
    *(uint32_t *)(pArr16_2[1] + 4) = local_e8._4_4_;
    *(uint32_t *)(pArr16_2[1] + 8) = (uint32_t)uStack_e0;
    *(uint32_t *)(pArr16_2[1] + 0xc) = uStack_e0._4_4_;
    *(uint *)*pArr16_2 = local_f8;
    *(uint32_t *)(*pArr16_2 + 4) = uStack_f4;
    *(uint32_t *)(*pArr16_2 + 8) = uStack_f0;
    *(uint32_t *)(*pArr16_2 + 0xc) = uStack_ec;
    local_e8 = 0;
    uStack_e0 = 0xf;
    local_f8 = local_f8 & 0xffffff00;
    local_50 = pArr16_2;
    func_0x180057700(pArr16_2 + 2,local_d8);
    *(int64_t *)(param_1 + 0xd0) = *(int64_t *)(param_1 + 0xd0) + 0xa8;
  }
  if (0xf < local_58) {
    lVal_3 = CONCAT71(uStack_6f,local_70);
    uVal_5 = local_58 + 1;
    lVal_6 = lVal_3;
    if (0xfff < uVal_5) {
      lVal_6 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_6)) goto LAB_18018321f;
      uVal_5 = local_58 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
  }
  local_60 = 0;
  local_58 = 0xf;
  local_70 = 0;
  if (local_88._0_8_ != 0) {
    uVal_5 = local_78 - local_88._0_8_;
    lVal_6 = local_88._0_8_;
    if (0xfff < uVal_5) {
      lVal_6 = *(int64_t *)(local_88._0_8_ + -8);
      if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_6)) goto LAB_18018321f;
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
    local_88 = ZEXT816(0);
    local_78 = 0;
  }
  if (0xf < uStack_e0) {
    lVal_3 = CONCAT44(uStack_f4,local_f8);
    uVal_5 = uStack_e0 + 1;
    lVal_6 = lVal_3;
    if (0xfff < uVal_5) {
      lVal_6 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_6)) goto LAB_18018321f;
      uVal_5 = uStack_e0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
  }
  local_e8 = 0;
  uStack_e0 = 0xf;
  local_f8 = local_f8 & 0xffffff00;
  if (0xf < local_100) {
    lVal_3 = CONCAT71(uStack_117,local_118);
    uVal_5 = local_100 + 1;
    lVal_6 = lVal_3;
    if (0xfff < uVal_5) {
      lVal_6 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_6)) goto LAB_18018321f;
      uVal_5 = local_100 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
  }
  local_108 = 0;
  local_100 = 0xf;
  local_118 = 0;
  if (local_130 != 0) {
    uVal_5 = local_120 - local_130;
    lVal_6 = local_130;
    if (0xfff < uVal_5) {
      lVal_6 = *(int64_t *)(local_130 + -8);
      if (0x1f < (uint64_t)((local_130 + -8) - lVal_6)) {
LAB_18018321f:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
  }
  return;
}

// Unwind@180183230
void Unwind_180183230(uint64_t param_1,int64_t param_2)
{
  func_0x180183400(param_2 + 0xb0);
  return;
}

// Unwind@180183270
void Unwind_180183270(uint64_t param_1,int64_t param_2)
{
  func_0x180183510(param_2 + 0x28);
  return;
}

// Unwind@1801832b0
void Unwind_1801832b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x158));
  return;
}

// func_0x1801832f0
uint8_t (*func_0x1801832f0(uint8_t (*param_1)[16],uint64_t *param_2,uint64_t param_3))[16]
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
  if (-1 < (int64_t)uVal_1) {
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
    func_0x180057700(param_1 + 2,param_3);
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_8 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_8;
}

// Unwind@1801833d0
void Unwind_1801833d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x180183400
void func_0x180183400(int64_t *param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  uVal_4 = param_1[0x14];
  if (0xf < uVal_4) {
    lVal_1 = param_1[0x11];
    uVal_2 = uVal_4 + 1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_18018350a;
      uVal_2 = uVal_4 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0xf;
  *(uint8_t *)(param_1 + 0x11) = 0;
  lVal_1 = param_1[0xe];
  if (lVal_1 != 0) {
    uVal_4 = param_1[0x10] - lVal_1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_18018350a;
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_1 + 0xe) = ZEXT816(0);
    param_1[0x10] = 0;
  }
  uVal_4 = param_1[3];
  if (0xf < uVal_4) {
    lVal_1 = *param_1;
    uVal_2 = uVal_4 + 1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) {
LAB_18018350a:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = uVal_4 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(uint8_t *)param_1 = 0;
  return;
}

// func_0x180183510
void func_0x180183510(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  uVal_4 = *(uint64_t *)(param_1 + 0x80);
  if (0xf < uVal_4) {
    lVal_1 = *(int64_t *)(param_1 + 0x68);
    uVal_2 = uVal_4 + 1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_1801835bb;
      uVal_2 = uVal_4 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0xf;
  *(uint8_t *)(param_1 + 0x68) = 0;
  lVal_1 = *(int64_t *)(param_1 + 0x50);
  if (lVal_1 != 0) {
    uVal_4 = *(int64_t *)(param_1 + 0x60) - lVal_1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) {
LAB_1801835bb:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_1 + 0x50) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x60) = 0;
  }
  return;
}

// Unwind@180183870
void Unwind_180183870(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5b4c) = 0;
  return;
}

// Unwind@180184c80
void Unwind_180184c80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180184d50
void Unwind_180184d50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@180184e30
void Unwind_180184e30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@180184f00
void Unwind_180184f00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@180184fe0
void Unwind_180184fe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1801850b0
void Unwind_1801850b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@180185180
void Unwind_180185180(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@180185430
void Unwind_180185430(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x180185460
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180185460(uint64_t *param_1)
{
  char *fnPtr_1;
  uint *pU64_2;
  uint8_t (*_Str)[16];
  byte *_Str_00;
  uint64_t *pU64_3;
  uint32_t uVal_4;
  func_ptr_t fnPtr_5;
  int64_t lVal_6;
  uint8_t auArr_7 [16];
  uint64_t uVal_8;
  uint32_t uVal_9;
  size_t sz_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t ***ptr3_U64_13;
  uint64_t *pU64_14;
  uint8_t *pU64_15;
  uint8_t *pU64_16;
  uint8_t *pU64_17;
  uint8_t uVal_18;
  uint64_t uVal_19;
  uint64_t ****ptr4_U64_20;
  uint uVal_22;
  uint uVal_23;
  uint8_t auArr_21 [16];
  uint uVal_24;
  uint uVal_25;
  uint uVal_26;
  uint uVal_27;
  uint uVal_28;
  uint8_t ***ptr3_U64_29;
  uint32_t uVal_30;
  uint in_stack_fffffffffffffbe8;
  uint uVal_31;
  uint8_t **local_3f8;
  uint64_t *local_3f0;
  uint8_t ***local_3c0;
  uint8_t **local_3b8;
  uint64_t *local_3b0;
  uint8_t ***local_380;
  uint8_t **local_378;
  uint64_t *local_370;
  uint8_t ***local_340;
  uint8_t local_338 [56];
  uint64_t local_300;
  uint8_t local_2f8 [56];
  uint64_t local_2c0;
  uint8_t local_2b8 [56];
  uint64_t local_280;
  uint8_t local_278 [56];
  uint64_t local_240;
  uint8_t local_238 [56];
  uint64_t local_200;
  uint8_t local_1f8 [16];
  uint8_t local_1e8 [16];
  uint8_t local_1d8 [16];
  uint8_t local_1c8 [16];
  uint8_t local_1b8 [16];
  uint8_t local_1a8 [16];
  uint64_t ****local_198;
  uint16_t uStack_190;
  uint32_t uStack_18e;
  uint16_t uStack_18a;
  uint8_t uStack_188;
  uint8_t uStack_187;
  uint16_t uStack_186;
  uint16_t uStack_184;
  uint16_t uStack_182;
  uint16_t uStack_180;
  uint16_t uStack_17e;
  uint32_t uStack_17c;
  undefined7 uStack_178;
  uint8_t local_168 [8];
  uint64_t uStack_160;
  uint8_t local_158 [8];
  uint64_t uStack_150;
  int64_t local_140 [7];
  int64_t *local_108;
  uint64_t *local_f0;
  uint8_t local_e8;
  undefined7 uStack_e7;
  undefined7 uStack_e0;
  uint32_t uStack_d9;
  uint32_t uStack_d5;
  uint32_t uStack_d1;
  uint8_t uStack_cd;
  uint8_t uStack_cc;
  uint16_t uStack_cb;
  uint8_t uStack_c9;
  uint32_t uStack_c8;
  uint8_t uStack_c4;
  uint16_t uStack_c3;
  uint8_t uStack_c1;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint64_t local_b8;
  int64_t *local_88;
  uint64_t *local_78;
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
  
  local_60 = 0xfffffffffffffffe;
  uStack_d5 = _UNK_1806b9fd6;
  uStack_d1 = _UNK_1806b9fda;
  uStack_cd = (uint8_t)_UNK_1806b9fde;
  uStack_cc = (uint8_t)((uint)_UNK_1806b9fde >> 8);
  uStack_cb = (uint16_t)((uint)_UNK_1806b9fde >> 0x10);
  local_e8 = (uint8_t)_DAT_1806b9fc3;
  uStack_e7 = (undefined7)((uint64_t)_DAT_1806b9fc3 >> 8);
  uStack_e0 = _UNK_1806b9fcb;
  uStack_d9 = _DAT_1806b9fd2;
  local_78 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5ba4) == '\0') {
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_12 + 0x5ba4) = 1;
    func_0x18007ce20(lVal_12 + 0x5b81,&local_e8);
    func_0x180673140(&LAB_1801b9060);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x5b81);
  func_0x1801bf770(fnPtr_1);
  uStack_d5 = 0;
  uStack_d1._0_1_ = 0;
  uStack_d1._1_3_ = 0;
  uStack_cd = 0;
  uStack_cc = 0;
  uStack_cb = 0;
  uStack_c9 = 0;
  local_e8 = 0;
  uStack_e7 = 0;
  uStack_e0 = 0;
  uStack_d9 = 0;
  sz_10 = strlen(fnPtr_1);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
LAB_180187342:
    local_62 = 1;
    func_0x18007ba70();
LAB_18018734f:
    local_61 = 1;
    func_0x18007ba70();
LAB_18018735c:
    local_63 = 1;
    func_0x18007ba70();
LAB_180187369:
    local_68 = 1;
    func_0x18007ba70();
LAB_180187376:
    local_6a = 1;
    func_0x18007ba70();
LAB_180187383:
    local_69 = 1;
    func_0x18007ba70();
LAB_180187390:
    local_65 = 1;
    func_0x18007ba70();
LAB_18018739d:
    local_64 = 1;
    func_0x18007ba70();
LAB_1801873aa:
    local_6c = 1;
    func_0x18007ba70();
LAB_1801873b7:
    local_67 = 1;
    func_0x18007ba70();
LAB_1801873c4:
    local_66 = 1;
    func_0x18007ba70();
LAB_1801873d1:
    local_6b = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_10 < 0x10) {
      pU64_16 = &local_e8;
      uVal_19 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_12;
      }
      local_e8 = SUB81(pU64_16,0);
      uStack_e7 = (undefined7)((uint64_t)pU64_16 >> 8);
    }
    uStack_d9._1_3_ = (undefined3)sz_10;
    uStack_d5 = (uint32_t)(sz_10 >> 0x18);
    uStack_d1._0_1_ = (uint8_t)(sz_10 >> 0x38);
    uStack_d1._1_3_ = (undefined3)uVal_19;
    uStack_cd = (uint8_t)(uVal_19 >> 0x18);
    uStack_cc = (uint8_t)(uVal_19 >> 0x20);
    uStack_cb = (uint16_t)(uVal_19 >> 0x28);
    uStack_c9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_16,fnPtr_1,sz_10);
    pU64_16[sz_10] = 0;
    pU64_16 = &local_e8;
    func_0x1801c2ba0(local_78,0,0,pU64_16);
    uVal_19 = CONCAT17(uStack_c9,
                      CONCAT25(uStack_cb,CONCAT14(uStack_cc,CONCAT13(uStack_cd,uStack_d1._1_3_))));
    if (0xf < uVal_19) {
      lVal_6 = CONCAT71(uStack_e7,local_e8);
      uVal_11 = uVal_19 + 1;
      lVal_12 = lVal_6;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(lVal_6 + -8);
        if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_12)) goto LAB_18018733b;
        uVal_11 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    *local_78 = &PTR_LAB_1806b7be0;
    *(uint8_t *)(local_78 + 0x10) = 0;
    local_f0 = local_78 + 0x11;
    *(uint8_t (*)[16])(local_78 + 0x13) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(local_78 + 0x11) = (uint8_t  [16])0x0;
    *(uint32_t *)(local_78 + 0x14) = 0xffffffff;
    pU64_17 = (uint8_t *)((int64_t)local_78 + 0xa9);
    local_78[0x15] = 0x3e2aaaab00000001;
    *(uint8_t *)(local_78 + 0x16) = 0;
    *(uint32_t *)((int64_t)local_78 + 0xb4) = 0;
    local_300 = 0;
    if (DAT_18083f7c0 == (uint64_t *)0x0) {
      uVal_18 = 0;
    }
    else {
      local_300 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_338);
      uVal_18 = *pU64_17;
    }
    uStack_d5._1_3_ = (undefined3)_UNK_1806b9ff6;
    uStack_d5 = CONCAT31(uStack_d5._1_3_,(char)((uint)_DAT_1806b9ff2 >> 0x18));
    uStack_d1._0_1_ = (uint8_t)((uint)_UNK_1806b9ff6 >> 0x18);
    uStack_d1._1_3_ = (undefined3)_UNK_1806b9ffa;
    uStack_cd = (uint8_t)((uint)_UNK_1806b9ffa >> 0x18);
    uStack_cc = (uint8_t)_UNK_1806b9ffe;
    uStack_cb = (uint16_t)((uint)_UNK_1806b9ffe >> 8);
    local_e8 = (uint8_t)_DAT_1806b9fe2;
    uStack_e7 = (undefined7)((uint64_t)_DAT_1806b9fe2 >> 8);
    uStack_e0 = (undefined7)_UNK_1806b9fea;
    uStack_d9._0_1_ = (uint8_t)((uint64_t)_UNK_1806b9fea >> 0x38);
    uStack_d9 = CONCAT31((int3)_DAT_1806b9ff2,(uint8_t)uStack_d9);
    uStack_c9 = 0x23;
    uStack_c8 = 0xc5906f55;
    uStack_c4 = 0x1c;
    uStack_c3 = 0x9160;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5bd0) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5bd0) = 1;
      func_0x1801b72f0(lVal_12 + 0x5ba5,&local_e8);
      func_0x180673140(&LAB_1801b9090);
    }
    uVal_25 = _UNK_1806b4e8c;
    uVal_23 = _UNK_1806b4e88;
    uVal_22 = _UNK_1806b4e84;
    uVal_31 = _DAT_1806b4e80;
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_12 + 0x5ba5);
    if (*(char *)(lVal_12 + 0x5bcc) == '\x01') {
      uVal_26 = *(uint *)(lVal_12 + 0x5ba9) ^ _UNK_1806b4e84;
      uVal_27 = *(uint *)(lVal_12 + 0x5bad) ^ _UNK_1806b4e88;
      uVal_28 = *(uint *)(lVal_12 + 0x5bb1) ^ _UNK_1806b4e8c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b4e80;
      *(uint *)(lVal_12 + 0x5ba9) = uVal_26;
      *(uint *)(lVal_12 + 0x5bad) = uVal_27;
      *(uint *)(lVal_12 + 0x5bb1) = uVal_28;
      *(uint *)(lVal_12 + 0x5bb5) = *(uint *)(lVal_12 + 0x5bb5) ^ uVal_31;
      *(uint *)(lVal_12 + 0x5bb9) = *(uint *)(lVal_12 + 0x5bb9) ^ uVal_22;
      *(uint *)(lVal_12 + 0x5bbd) = *(uint *)(lVal_12 + 0x5bbd) ^ uVal_23;
      *(uint *)(lVal_12 + 0x5bc1) = *(uint *)(lVal_12 + 0x5bc1) ^ uVal_25;
      *(uint *)(lVal_12 + 0x5bc5) = *(uint *)(lVal_12 + 0x5bc5) ^ 0xa9f11975;
      *(byte *)(lVal_12 + 0x5bc9) = *(byte *)(lVal_12 + 0x5bc9) ^ 0x69;
      *(byte *)(lVal_12 + 0x5bca) = *(byte *)(lVal_12 + 0x5bca) ^ 5;
      *(byte *)(lVal_12 + 0x5bcb) = *(byte *)(lVal_12 + 0x5bcb) ^ 0x91;
      *(uint8_t *)(lVal_12 + 0x5bcc) = 0;
    }
    _local_158 = (uint8_t  [16])0x0;
    _local_168 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_180187342;
    if (sz_10 < 0x10) {
      pU64_15 = local_168;
      uVal_19 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_62 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_62 = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_168 = (uint8_t  [8])pU64_15;
    }
    uStack_150 = uVal_19;
    local_158 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_15,pU64_2,sz_10);
    pU64_15[sz_10] = 0;
    uStack_188 = (uint8_t)_UNK_1806ba019;
    uStack_187 = (uint8_t)((ushort)_UNK_1806ba019 >> 8);
    uStack_186 = (uint16_t)_UNK_1806ba01b;
    uStack_184 = (uint16_t)((uint)_UNK_1806ba01b >> 0x10);
    uStack_182 = (uint16_t)_UNK_1806ba01f;
    uStack_180 = (uint16_t)((uint)_UNK_1806ba01f >> 0x10);
    local_198 = _DAT_1806ba009;
    uStack_190 = _UNK_1806ba011;
    uStack_18e = _DAT_1806ba013;
    uStack_18a = _UNK_1806ba017;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5bec) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5bec) = 1;
      func_0x1800d9840(lVal_12 + 0x5bd1,&local_198);
      func_0x180673140(&LAB_1801b90c0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x5bd1);
    func_0x1801bf7d0(fnPtr_1);
    uStack_d5 = 0;
    uStack_d1._0_1_ = 0;
    uStack_d1._1_3_ = 0;
    uStack_cd = 0;
    uStack_cc = 0;
    uStack_cb = 0;
    uStack_c9 = 0;
    local_e8 = 0;
    uStack_e7 = 0;
    uStack_e0 = 0;
    uStack_d9 = 0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_18018734f;
    uVal_19 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_61 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_61 = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_12;
      }
      local_e8 = SUB81(pU64_16,0);
      uStack_e7 = (undefined7)((uint64_t)pU64_16 >> 8);
    }
    uStack_d9._1_3_ = (undefined3)sz_10;
    uStack_d5 = (uint32_t)(sz_10 >> 0x18);
    uStack_d1._0_1_ = (uint8_t)(sz_10 >> 0x38);
    uStack_d1._1_3_ = (undefined3)uVal_19;
    uStack_cd = (uint8_t)(uVal_19 >> 0x18);
    uStack_cc = (uint8_t)(uVal_19 >> 0x20);
    uStack_cb = (uint16_t)(uVal_19 >> 0x28);
    uStack_c9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_16,fnPtr_1,sz_10);
    pU64_16[sz_10] = 0;
    in_stack_fffffffffffffbe8 = in_stack_fffffffffffffbe8 & 0xffffff00;
    pU64_16 = &local_e8;
    pU64_15 = local_168;
    func_0x1801ccd70(local_78,pU64_16,pU64_15,pU64_17,uVal_18,local_338,in_stack_fffffffffffffbe8);
    uVal_19 = CONCAT17(uStack_c9,
                      CONCAT25(uStack_cb,CONCAT14(uStack_cc,CONCAT13(uStack_cd,uStack_d1._1_3_))));
    if (0xf < uVal_19) {
      lVal_6 = CONCAT71(uStack_e7,local_e8);
      uVal_11 = uVal_19 + 1;
      lVal_12 = lVal_6;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(lVal_6 + -8);
        if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_12)) goto LAB_18018733b;
        uVal_11 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    if (0xf < uStack_150) {
      uVal_19 = uStack_150 + 1;
      lVal_12 = (int64_t)local_168;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_12)) goto LAB_18018733b;
        uVal_19 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    local_3f8 = &PTR_LAB_1806bacd0;
    local_3f0 = local_78;
    local_3c0 = &local_3f8;
    uVal_18 = *(uint8_t *)((int64_t)local_78 + 0xab);
    uStack_d5._1_3_ = (undefined3)_UNK_1806ba037;
    uStack_d5 = CONCAT31(uStack_d5._1_3_,(char)((uint)_DAT_1806ba033 >> 0x18));
    uStack_d1._0_1_ = (uint8_t)((uint)_UNK_1806ba037 >> 0x18);
    uStack_d1._1_3_ = (undefined3)_UNK_1806ba03b;
    uStack_cd = (uint8_t)((uint)_UNK_1806ba03b >> 0x18);
    uStack_cc = (uint8_t)_UNK_1806ba03f;
    local_e8 = (uint8_t)_DAT_1806ba023;
    uStack_e7 = (undefined7)((uint64_t)_DAT_1806ba023 >> 8);
    uStack_e0 = (undefined7)_UNK_1806ba02b;
    uStack_d9._0_1_ = (uint8_t)((uint64_t)_UNK_1806ba02b >> 0x38);
    uStack_d9 = CONCAT31((int3)_DAT_1806ba033,(uint8_t)uStack_d9);
    uStack_cb = 0xdb2;
    uStack_c9 = 0xb1;
    uStack_c8 = 0xa6393610;
    uStack_c4 = 0x37;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5c14) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5c14) = 1;
      func_0x1801b1390(lVal_12 + 0x5bed,&local_e8);
      func_0x180673140(&LAB_1801b90f0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x5bed);
    func_0x1801bf800(fnPtr_1);
    _local_158 = (uint8_t  [16])0x0;
    _local_168 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_18018735c;
    uVal_19 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_63 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_63 = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_168 = (uint8_t  [8])pU64_15;
    }
    uStack_150 = uVal_19;
    local_158 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_15,fnPtr_1,sz_10);
    pU64_15[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5c30) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5c30) = 1;
      uVal_8 = _UNK_1806b6528;
      *(uint64_t *)(lVal_12 + 0x5c20) = _DAT_1806b6520;
      *(uint64_t *)(lVal_12 + 0x5c28) = uVal_8;
      func_0x180673140(&LAB_1801b9120);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_12 + 0x5c20);
    if (*(char *)(lVal_12 + 0x5c2f) == '\x01') {
      uVal_30 = *(uint32_t *)(lVal_12 + 0x5c28);
      auArr_21 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_30 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_30 >> 0x10),uVal_30)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_12 + 0x5c2d) >> 8)),
                                                 (char)((uint)uVal_30 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_12 + 0x5c2d),(char)uVal_30
                                                ))),_DAT_1806ae110);
      auArr_21._8_8_ =
           auArr_21._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_12 + 0x5c2c) << 0x20;
      auArr_21 = pblendw(auArr_21,*_Str,0xf);
      *_Str = auArr_21 ^ _DAT_1806b6430;
    }
    uStack_d5 = 0;
    uStack_d1._0_1_ = 0;
    uStack_d1._1_3_ = 0;
    uStack_cd = 0;
    uStack_cc = 0;
    uStack_cb = 0;
    uStack_c9 = 0;
    local_e8 = 0;
    uStack_e7 = 0;
    uStack_e0 = 0;
    uStack_d9 = 0;
    sz_10 = strlen((char *)_Str);
    if ((int64_t)sz_10 < 0) goto LAB_180187369;
    uVal_19 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_68 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_68 = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_12;
      }
      local_e8 = SUB81(pU64_16,0);
      uStack_e7 = (undefined7)((uint64_t)pU64_16 >> 8);
    }
    pU64_14 = local_78;
    lVal_12 = (int64_t)local_78 + 0xab;
    uStack_d9._1_3_ = (undefined3)sz_10;
    uStack_d5 = (uint32_t)(sz_10 >> 0x18);
    uStack_d1._0_1_ = (uint8_t)(sz_10 >> 0x38);
    uStack_d1._1_3_ = (undefined3)uVal_19;
    uStack_cd = (uint8_t)(uVal_19 >> 0x18);
    uStack_cc = (uint8_t)(uVal_19 >> 0x20);
    uStack_cb = (uint16_t)(uVal_19 >> 0x28);
    uStack_c9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_16,_Str,sz_10);
    pU64_16[sz_10] = 0;
    ptr3_U64_29 = &local_3f8;
    pU64_16 = &local_e8;
    pU64_17 = local_168;
    func_0x1801ccd70(pU64_14,pU64_16,pU64_17,lVal_12,uVal_18,ptr3_U64_29,
                  in_stack_fffffffffffffbe8 & 0xffffff00);
    uVal_30 = (uint32_t)((uint64_t)ptr3_U64_29 >> 0x20);
    uVal_19 = CONCAT17(uStack_c9,
                      CONCAT25(uStack_cb,CONCAT14(uStack_cc,CONCAT13(uStack_cd,uStack_d1._1_3_))));
    if (0xf < uVal_19) {
      lVal_6 = CONCAT71(uStack_e7,local_e8);
      uVal_11 = uVal_19 + 1;
      lVal_12 = lVal_6;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(lVal_6 + -8);
        if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_12)) goto LAB_18018733b;
        uVal_11 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    if (0xf < uStack_150) {
      uVal_19 = uStack_150 + 1;
      lVal_12 = (int64_t)local_168;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_12)) goto LAB_18018733b;
        uVal_19 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    local_3b8 = &PTR_LAB_1806bacd0;
    local_3b0 = local_78;
    local_380 = &local_3b8;
    uVal_4 = *(uint32_t *)((int64_t)local_78 + 0xac);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5c34) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5c34) = 1;
      *(uint16_t *)(lVal_12 + 0x5c31) = 0x173;
      func_0x180673140(&LAB_1801b9150);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (byte *)(lVal_12 + 0x5c31);
    if (*(char *)(lVal_12 + 0x5c32) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0x73;
      *(uint8_t *)(lVal_12 + 0x5c32) = 0;
    }
    uStack_d5 = 0;
    uStack_d1._0_1_ = 0;
    uStack_d1._1_3_ = 0;
    uStack_cd = 0;
    uStack_cc = 0;
    uStack_cb = 0;
    uStack_c9 = 0;
    local_e8 = 0;
    uStack_e7 = 0;
    uStack_e0 = 0;
    uStack_d9 = 0;
    sz_10 = strlen((char *)_Str_00);
    if ((int64_t)sz_10 < 0) goto LAB_180187376;
    uVal_19 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_6a = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_6a = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_12;
      }
      local_e8 = SUB81(pU64_16,0);
      uStack_e7 = (undefined7)((uint64_t)pU64_16 >> 8);
    }
    uStack_d9._1_3_ = (undefined3)sz_10;
    uStack_d5 = (uint32_t)(sz_10 >> 0x18);
    uStack_d1._0_1_ = (uint8_t)(sz_10 >> 0x38);
    uStack_d1._1_3_ = (undefined3)uVal_19;
    uStack_cd = (uint8_t)(uVal_19 >> 0x18);
    uStack_cc = (uint8_t)(uVal_19 >> 0x20);
    uStack_cb = (uint16_t)(uVal_19 >> 0x28);
    uStack_c9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_16,_Str_00,sz_10);
    pU64_16[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5c48) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5c48) = 1;
      *(uint8_t *)(lVal_12 + 0x5c44) = 1;
      *(uint64_t *)(lVal_12 + 0x5c38) = 0x99c693d6a9143220;
      *(uint32_t *)(lVal_12 + 0x5c40) = 0xc7192016;
      func_0x180673140(&LAB_1801b9170);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_12 + 0x5c38);
    if (*(char *)(lVal_12 + 0x5c44) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xe9b5b3b1c77d4573;
      *(uint *)(lVal_12 + 0x5c40) = *(uint *)(lVal_12 + 0x5c40) ^ 0xc77d4573;
      *(uint8_t *)(lVal_12 + 0x5c44) = 0;
    }
    _local_158 = (uint8_t  [16])0x0;
    _local_168 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_180187383;
    uVal_19 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_69 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_69 = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_168 = (uint8_t  [8])pU64_17;
    }
    pU64_14 = local_78;
    lVal_12 = (int64_t)local_78 + 0xac;
    local_158 = (uint8_t  [8])sz_10;
    uStack_150 = uVal_19;
    func_0x1806aa960(pU64_17,pU64_3,sz_10);
    pU64_17[sz_10] = 0;
    uVal_31 = 0x3f800000;
    pU64_16 = local_168;
    pU64_17 = &local_e8;
    func_0x1801cd2e0(pU64_14,pU64_16,pU64_17,lVal_12,uVal_4,CONCAT44(uVal_30,0x3c23d70a),0x3f800000,
                  &local_3b8,0);
    if (0xf < uStack_150) {
      uVal_19 = uStack_150 + 1;
      lVal_12 = (int64_t)local_168;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_12)) goto LAB_18018733b;
        uVal_19 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    uVal_19 = CONCAT17(uStack_c9,
                      CONCAT25(uStack_cb,CONCAT14(uStack_cc,CONCAT13(uStack_cd,uStack_d1._1_3_))));
    if (0xf < uVal_19) {
      lVal_6 = CONCAT71(uStack_e7,local_e8);
      uVal_11 = uVal_19 + 1;
      lVal_12 = lVal_6;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(lVal_6 + -8);
        if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_12)) goto LAB_18018733b;
        uVal_11 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_2c0 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_2c0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_2f8);
    }
    pU64_14 = local_78 + 0x10;
    uVal_18 = *(uint8_t *)pU64_14;
    uStack_c8 = _DAT_1806ba068;
    uStack_c4 = (uint8_t)_UNK_1806ba06c;
    uStack_c3 = (uint16_t)((uint)_UNK_1806ba06c >> 8);
    uStack_c1 = (uint8_t)((uint)_UNK_1806ba06c >> 0x18);
    uStack_c0 = _UNK_1806ba070;
    uStack_bc = _UNK_1806ba074;
    uStack_d5._1_3_ = (undefined3)_UNK_1806ba05c;
    uStack_d5 = CONCAT31(uStack_d5._1_3_,(char)((uint)_DAT_1806ba058 >> 0x18));
    uStack_d1._0_1_ = (uint8_t)((uint)_UNK_1806ba05c >> 0x18);
    uStack_d1._1_3_ = (undefined3)_UNK_1806ba060;
    uStack_cd = (uint8_t)((uint)_UNK_1806ba060 >> 0x18);
    uStack_cc = (uint8_t)_UNK_1806ba064;
    uStack_cb = (uint16_t)((uint)_UNK_1806ba064 >> 8);
    uStack_c9 = (uint8_t)((uint)_UNK_1806ba064 >> 0x18);
    local_e8 = (uint8_t)_DAT_1806ba048;
    uStack_e7 = (undefined7)((uint64_t)_DAT_1806ba048 >> 8);
    uStack_e0 = (undefined7)_UNK_1806ba050;
    uStack_d9._0_1_ = (uint8_t)((uint64_t)_UNK_1806ba050 >> 0x38);
    uStack_d9 = CONCAT31((int3)_DAT_1806ba058,(uint8_t)uStack_d9);
    local_b8 = 0x757447a48c1db0b0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5c84) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5c84) = 1;
      func_0x18012b940(lVal_12 + 0x5c49,&local_e8);
      func_0x180673140(&LAB_1801b91a0);
    }
    uVal_26 = _UNK_1806b5b0c;
    uVal_25 = _UNK_1806b5b08;
    uVal_23 = _UNK_1806b5b04;
    uVal_22 = _DAT_1806b5b00;
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_12 + 0x5c49);
    if (*(char *)(lVal_12 + 0x5c81) == '\x01') {
      uVal_27 = *(uint *)(lVal_12 + 0x5c4d) ^ _UNK_1806b5b04;
      uVal_28 = *(uint *)(lVal_12 + 0x5c51) ^ _UNK_1806b5b08;
      uVal_24 = *(uint *)(lVal_12 + 0x5c55) ^ _UNK_1806b5b0c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b5b00;
      *(uint *)(lVal_12 + 0x5c4d) = uVal_27;
      *(uint *)(lVal_12 + 0x5c51) = uVal_28;
      *(uint *)(lVal_12 + 0x5c55) = uVal_24;
      *(uint *)(lVal_12 + 0x5c59) = *(uint *)(lVal_12 + 0x5c59) ^ uVal_22;
      *(uint *)(lVal_12 + 0x5c5d) = *(uint *)(lVal_12 + 0x5c5d) ^ uVal_23;
      *(uint *)(lVal_12 + 0x5c61) = *(uint *)(lVal_12 + 0x5c61) ^ uVal_25;
      *(uint *)(lVal_12 + 0x5c65) = *(uint *)(lVal_12 + 0x5c65) ^ uVal_26;
      *(uint *)(lVal_12 + 0x5c69) = *(uint *)(lVal_12 + 0x5c69) ^ uVal_22;
      *(uint *)(lVal_12 + 0x5c6d) = *(uint *)(lVal_12 + 0x5c6d) ^ uVal_23;
      *(uint *)(lVal_12 + 0x5c71) = *(uint *)(lVal_12 + 0x5c71) ^ uVal_25;
      *(uint *)(lVal_12 + 0x5c75) = *(uint *)(lVal_12 + 0x5c75) ^ uVal_26;
      *(uint64_t *)(lVal_12 + 0x5c79) = *(uint64_t *)(lVal_12 + 0x5c79) ^ SUB168(_DAT_1806b5b10,0);
      *(uint8_t *)(lVal_12 + 0x5c81) = 0;
    }
    _local_158 = (uint8_t  [16])0x0;
    _local_168 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_180187390;
    uVal_19 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_65 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_65 = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_12;
      }
      local_168 = (uint8_t  [8])pU64_16;
    }
    uStack_150 = uVal_19;
    local_158 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_16,pU64_2,sz_10);
    pU64_16[sz_10] = 0;
    local_198 = _DAT_1806ba080;
    uStack_190 = (uint16_t)_UNK_1806ba088;
    uStack_18e = (uint32_t)((uint64_t)_UNK_1806ba088 >> 0x10);
    uStack_18a = (uint16_t)((uint64_t)_UNK_1806ba088 >> 0x30);
    uStack_188 = 0xdd;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5c98) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5c98) = 1;
      func_0x18007d2b0(lVal_12 + 0x5c85,&local_198);
      func_0x180673140(&LAB_1801b91e0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_12 + 0x5c85);
    if (*(char *)(lVal_12 + 0x5c96) == '\x01') {
      uVal_22 = *(uint *)(lVal_12 + 0x5c89) ^ _UNK_1806b5b04;
      uVal_23 = *(uint *)(lVal_12 + 0x5c8d) ^ _UNK_1806b5b08;
      uVal_25 = *(uint *)(lVal_12 + 0x5c91) ^ _UNK_1806b5b0c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b5b00;
      *(uint *)(lVal_12 + 0x5c89) = uVal_22;
      *(uint *)(lVal_12 + 0x5c8d) = uVal_23;
      *(uint *)(lVal_12 + 0x5c91) = uVal_25;
      *(byte *)(lVal_12 + 0x5c95) = *(byte *)(lVal_12 + 0x5c95) ^ 0xdd;
      *(uint8_t *)(lVal_12 + 0x5c96) = 0;
    }
    uStack_d5 = 0;
    uStack_d1._0_1_ = 0;
    uStack_d1._1_3_ = 0;
    uStack_cd = 0;
    uStack_cc = 0;
    uStack_cb = 0;
    uStack_c9 = 0;
    local_e8 = 0;
    uStack_e7 = 0;
    uStack_e0 = 0;
    uStack_d9 = 0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_18018739d;
    uVal_19 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_64 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_64 = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_e8 = SUB81(pU64_17,0);
      uStack_e7 = (undefined7)((uint64_t)pU64_17 >> 8);
    }
    uStack_d9._1_3_ = (undefined3)sz_10;
    uStack_d5 = (uint32_t)(sz_10 >> 0x18);
    uStack_d1._0_1_ = (uint8_t)(sz_10 >> 0x38);
    uStack_d1._1_3_ = (undefined3)uVal_19;
    uStack_cd = (uint8_t)(uVal_19 >> 0x18);
    uStack_cc = (uint8_t)(uVal_19 >> 0x20);
    uStack_cb = (uint16_t)(uVal_19 >> 0x28);
    uStack_c9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_17,pU64_2,sz_10);
    pU64_17[sz_10] = 0;
    uVal_31 = uVal_31 & 0xffffff00;
    func_0x1801ccd70(local_78,&local_e8,local_168,pU64_14,uVal_18,local_2f8,uVal_31);
    uVal_19 = CONCAT17(uStack_c9,
                      CONCAT25(uStack_cb,CONCAT14(uStack_cc,CONCAT13(uStack_cd,uStack_d1._1_3_))));
    if (0xf < uVal_19) {
      lVal_6 = CONCAT71(uStack_e7,local_e8);
      uVal_11 = uVal_19 + 1;
      lVal_12 = lVal_6;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(lVal_6 + -8);
        if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_12)) goto LAB_18018733b;
        uVal_11 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    if (0xf < uStack_150) {
      uVal_19 = uStack_150 + 1;
      lVal_12 = (int64_t)local_168;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_12)) goto LAB_18018733b;
        uVal_19 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    local_280 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_280 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_2b8);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5ca4) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5ca4) = 1;
      *(uint32_t *)(lVal_12 + 0x5c9c) = 0xebd6abc1;
      *(uint16_t *)(lVal_12 + 0x5ca0) = 0x1a5;
      func_0x180673140(&LAB_1801b9210);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_12 + 0x5c9c);
    if (*(char *)(lVal_12 + 0x5ca1) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x93a3c787;
      *(byte *)(lVal_12 + 0x5ca0) = *(byte *)(lVal_12 + 0x5ca0) ^ 0xa5;
      *(uint8_t *)(lVal_12 + 0x5ca1) = 0;
    }
    local_1e8 = (uint8_t  [16])0x0;
    local_1f8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1801873aa;
    if (sz_10 < 0x10) {
      pU64_16 = local_1f8;
      uVal_19 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_6c = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_6c = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_12;
      }
      local_1f8._0_8_ = pU64_16;
    }
    local_1e8._8_8_ = uVal_19;
    local_1e8._0_8_ = sz_10;
    func_0x1806aa960(pU64_16,pU64_2,sz_10);
    pU64_16[sz_10] = 0;
    func_0x1801d2eb0(&local_e8,local_1f8,0,local_2b8);
    pU64_16 = &local_e8;
    func_0x1801d30b0(local_f0,pU64_16);
    local_240 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_240 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_278);
    }
    uStack_160 = _UNK_1806ba099;
    local_168 = (uint8_t  [8])_DAT_1806ba091;
    local_158[0] = 0xd5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5cb8) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5cb8) = 1;
      func_0x18007d2b0(lVal_12 + 0x5ca5,local_168);
      func_0x180673140(&LAB_1801b9240);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_12 + 0x5ca5);
    if (*(char *)(lVal_12 + 0x5cb6) == '\x01') {
      uVal_22 = *(uint *)(lVal_12 + 0x5ca9) ^ _UNK_1806b2d14;
      uVal_23 = *(uint *)(lVal_12 + 0x5cad) ^ _UNK_1806b2d18;
      uVal_25 = *(uint *)(lVal_12 + 0x5cb1) ^ _UNK_1806b2d1c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b2d10;
      *(uint *)(lVal_12 + 0x5ca9) = uVal_22;
      *(uint *)(lVal_12 + 0x5cad) = uVal_23;
      *(uint *)(lVal_12 + 0x5cb1) = uVal_25;
      *(byte *)(lVal_12 + 0x5cb5) = *(byte *)(lVal_12 + 0x5cb5) ^ 0xd5;
      *(uint8_t *)(lVal_12 + 0x5cb6) = 0;
    }
    local_1c8 = (uint8_t  [16])0x0;
    local_1d8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1801873b7;
    if (sz_10 < 0x10) {
      pU64_17 = local_1d8;
      uVal_19 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_67 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_67 = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_1d8._0_8_ = pU64_17;
    }
    local_1c8._8_8_ = uVal_19;
    local_1c8._0_8_ = sz_10;
    func_0x1806aa960(pU64_17,pU64_2,sz_10);
    pU64_17[sz_10] = 0;
    func_0x1801d2eb0(local_168,local_1d8,1,local_278);
    pU64_17 = local_168;
    func_0x1801d30b0(local_f0,pU64_17);
    local_378 = &PTR_LAB_1806bad00;
    local_370 = local_78;
    local_340 = &local_378;
    uStack_188 = (uint8_t)_DAT_1806ba0b2;
    uStack_187 = (uint8_t)((uint)_DAT_1806ba0b2 >> 8);
    uStack_186 = (uint16_t)((uint)_DAT_1806ba0b2 >> 0x10);
    uStack_184 = (uint16_t)_UNK_1806ba0b6;
    uStack_182 = (uint16_t)((uint)_UNK_1806ba0b6 >> 0x10);
    uStack_180 = (uint16_t)_UNK_1806ba0ba;
    uStack_17e = (uint16_t)((uint)_UNK_1806ba0ba >> 0x10);
    local_198 = _DAT_1806ba0a2;
    uStack_190 = (uint16_t)_UNK_1806ba0aa;
    uStack_18e = (uint32_t)((uint64_t)_UNK_1806ba0aa >> 0x10);
    uStack_18a = (uint16_t)((uint64_t)_UNK_1806ba0aa >> 0x30);
    uStack_17c = CONCAT13(0x8e,(int3)_UNK_1806ba0be);
    uStack_178 = 0xc7d8efc8a200e5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5ce4) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5ce4) = 1;
      func_0x1801b72f0(lVal_12 + 0x5cb9,&local_198);
      func_0x180673140(&LAB_1801b9270);
    }
    uVal_26 = _UNK_1806ae4dc;
    uVal_25 = _UNK_1806ae4d8;
    uVal_23 = _UNK_1806ae4d4;
    uVal_22 = _DAT_1806ae4d0;
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_12 + 0x5cb9);
    if (*(char *)(lVal_12 + 0x5ce0) == '\x01') {
      uVal_27 = *(uint *)(lVal_12 + 0x5cbd) ^ _UNK_1806ae4d4;
      uVal_28 = *(uint *)(lVal_12 + 0x5cc1) ^ _UNK_1806ae4d8;
      uVal_24 = *(uint *)(lVal_12 + 0x5cc5) ^ _UNK_1806ae4dc;
      *pU64_2 = *pU64_2 ^ _DAT_1806ae4d0;
      *(uint *)(lVal_12 + 0x5cbd) = uVal_27;
      *(uint *)(lVal_12 + 0x5cc1) = uVal_28;
      *(uint *)(lVal_12 + 0x5cc5) = uVal_24;
      *(uint *)(lVal_12 + 0x5cc9) = *(uint *)(lVal_12 + 0x5cc9) ^ uVal_22;
      *(uint *)(lVal_12 + 0x5ccd) = *(uint *)(lVal_12 + 0x5ccd) ^ uVal_23;
      *(uint *)(lVal_12 + 0x5cd1) = *(uint *)(lVal_12 + 0x5cd1) ^ uVal_25;
      *(uint *)(lVal_12 + 0x5cd5) = *(uint *)(lVal_12 + 0x5cd5) ^ uVal_26;
      *(uint *)(lVal_12 + 0x5cd9) = *(uint *)(lVal_12 + 0x5cd9) ^ 0xa1d573c5;
      *(byte *)(lVal_12 + 0x5cdd) = *(byte *)(lVal_12 + 0x5cdd) ^ 0x81;
      *(byte *)(lVal_12 + 0x5cde) = *(byte *)(lVal_12 + 0x5cde) ^ 0xbf;
      *(byte *)(lVal_12 + 0x5cdf) = *(byte *)(lVal_12 + 0x5cdf) ^ 199;
      *(uint8_t *)(lVal_12 + 0x5ce0) = 0;
    }
    local_1a8 = (uint8_t  [16])0x0;
    local_1b8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1801873c4;
    if (sz_10 < 0x10) {
      pU64_15 = local_1b8;
      uVal_19 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_66 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_66 = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_1b8._0_8_ = pU64_15;
    }
    local_1a8._8_8_ = uVal_19;
    local_1a8._0_8_ = sz_10;
    func_0x1806aa960(pU64_15,pU64_2,sz_10);
    pU64_15[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5cf0) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5cf0) = 1;
      *(uint32_t *)(lVal_12 + 0x5ce8) = 0xc4b11c88;
      *(uint16_t *)(lVal_12 + 0x5cec) = 0x181;
      func_0x180673140(&LAB_1801b92a0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_12 + 0x5ce8);
    if (*(char *)(lVal_12 + 0x5ced) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xa1d573c5;
      *(byte *)(lVal_12 + 0x5cec) = *(byte *)(lVal_12 + 0x5cec) ^ 0x81;
      *(uint8_t *)(lVal_12 + 0x5ced) = 0;
    }
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_184 = 0;
    uStack_182 = 0;
    uStack_180 = 0;
    uStack_17e = 0;
    uStack_17c = 0;
    local_198 = (uint64_t ****)0x0;
    uStack_190 = 0;
    uStack_18e = 0;
    uStack_18a = 0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1801873d1;
    if (sz_10 < 0x10) {
      ptr4_U64_20 = &local_198;
      uVal_19 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_6b = 1;
        ptr4_U64_20 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_198 = ptr4_U64_20;
      }
      else {
        local_6b = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_20 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_20[-1] = ptr3_U64_13;
        local_198 = ptr4_U64_20;
      }
    }
    uStack_188 = (uint8_t)sz_10;
    uStack_187 = (uint8_t)(sz_10 >> 8);
    uStack_186 = (uint16_t)(sz_10 >> 0x10);
    uStack_184 = (uint16_t)(sz_10 >> 0x20);
    uStack_182 = (uint16_t)(sz_10 >> 0x30);
    uStack_180 = (uint16_t)uVal_19;
    uStack_17e = (uint16_t)(uVal_19 >> 0x10);
    uStack_17c = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_20,pU64_2,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_20 + sz_10) = 0;
    uVal_31 = uVal_31 & 0xffffff00;
    func_0x1801d3a80(local_78,&local_198,local_1b8,local_f0,0,&local_378,uVal_31);
    uVal_19 = CONCAT44(uStack_17c,CONCAT22(uStack_17e,uStack_180));
    if (0xf < uVal_19) {
      uVal_11 = uVal_19 + 1;
      ptr4_U64_20 = local_198;
      if (0xfff < uVal_11) {
        ptr4_U64_20 = (uint64_t ****)local_198[-1];
        if (0x1f < (uint64_t)((int64_t)local_198 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18018733b;
        uVal_11 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_11);
    }
    if (0xf < (uint64_t)local_1a8._8_8_) {
      uVal_19 = local_1a8._8_8_ + 1;
      lVal_12 = local_1b8._0_8_;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)(local_1b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_1b8._0_8_ + -8) - lVal_12)) goto LAB_18018733b;
        uVal_19 = local_1a8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    if (local_108 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_108 + 0x20))(local_108,local_108 != local_140);
      local_108 = (int64_t *)0x0;
    }
    if (0xf < uStack_150) {
      uVal_19 = uStack_150 + 1;
      lVal_12 = (int64_t)local_168;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_12)) goto LAB_18018733b;
        uVal_19 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    _local_158 = ZEXT816(0xf) << 0x40;
    auArr_7[15] = 0;
    auArr_7._0_15_ = stack0xfffffffffffffe99;
    _local_168 = auArr_7 << 8;
    if (0xf < (uint64_t)local_1c8._8_8_) {
      uVal_19 = local_1c8._8_8_ + 1;
      lVal_12 = local_1d8._0_8_;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)(local_1d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_1d8._0_8_ + -8) - lVal_12)) goto LAB_18018733b;
        uVal_19 = local_1c8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    if (local_88 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_88 + 0x20))(local_88,local_88 != (int64_t *)&uStack_c0);
      local_88 = (int64_t *)0x0;
    }
    uVal_19 = CONCAT17(uStack_c9,
                      CONCAT25(uStack_cb,CONCAT14(uStack_cc,CONCAT13(uStack_cd,uStack_d1._1_3_))));
    if (0xf < uVal_19) {
      lVal_6 = CONCAT71(uStack_e7,local_e8);
      uVal_11 = uVal_19 + 1;
      lVal_12 = lVal_6;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(lVal_6 + -8);
        if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_12)) goto LAB_18018733b;
        uVal_11 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    uStack_d9 = uStack_d9 & 0xff;
    uStack_d5 = 0;
    uStack_d1._0_1_ = 0;
    uStack_d1._1_3_ = 0xf;
    uStack_cd = 0;
    uStack_cc = 0;
    uStack_cb = 0;
    uStack_c9 = 0;
    local_e8 = 0;
    if (0xf < (uint64_t)local_1e8._8_8_) {
      uVal_19 = local_1e8._8_8_ + 1;
      lVal_12 = local_1f8._0_8_;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)(local_1f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_1f8._0_8_ + -8) - lVal_12)) goto LAB_18018733b;
        uVal_19 = local_1e8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    local_200 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_200 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_238);
    }
    pU64_14 = local_78 + 0x15;
    uVal_18 = *(uint8_t *)pU64_14;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5d64) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x5d64) = 1;
      *(uint8_t *)(lVal_12 + 0x5d63) = 1;
      uVal_9 = _UNK_1806ba0d5;
      uVal_4 = _UNK_1806ba0d1;
      uVal_30 = _UNK_1806ba0cd;
      *(uint32_t *)(lVal_12 + 0x5cf1) = _DAT_1806ba0c9;
      *(uint32_t *)(lVal_12 + 0x5cf5) = uVal_30;
      *(uint32_t *)(lVal_12 + 0x5cf9) = uVal_4;
      *(uint32_t *)(lVal_12 + 0x5cfd) = uVal_9;
      uVal_9 = _UNK_1806ba0e5;
      uVal_4 = _UNK_1806ba0e1;
      uVal_30 = _UNK_1806ba0dd;
      *(uint32_t *)(lVal_12 + 0x5d01) = _DAT_1806ba0d9;
      *(uint32_t *)(lVal_12 + 0x5d05) = uVal_30;
      *(uint32_t *)(lVal_12 + 0x5d09) = uVal_4;
      *(uint32_t *)(lVal_12 + 0x5d0d) = uVal_9;
      uVal_9 = _UNK_1806ba0f5;
      uVal_4 = _UNK_1806ba0f1;
      uVal_30 = _UNK_1806ba0ed;
      *(uint32_t *)(lVal_12 + 0x5d11) = _DAT_1806ba0e9;
      *(uint32_t *)(lVal_12 + 0x5d15) = uVal_30;
      *(uint32_t *)(lVal_12 + 0x5d19) = uVal_4;
      *(uint32_t *)(lVal_12 + 0x5d1d) = uVal_9;
      uVal_9 = _UNK_1806ba105;
      uVal_4 = _UNK_1806ba101;
      uVal_30 = _UNK_1806ba0fd;
      *(uint32_t *)(lVal_12 + 0x5d21) = _DAT_1806ba0f9;
      *(uint32_t *)(lVal_12 + 0x5d25) = uVal_30;
      *(uint32_t *)(lVal_12 + 0x5d29) = uVal_4;
      *(uint32_t *)(lVal_12 + 0x5d2d) = uVal_9;
      uVal_9 = _UNK_1806ba115;
      uVal_4 = _UNK_1806ba111;
      uVal_30 = _UNK_1806ba10d;
      *(uint32_t *)(lVal_12 + 0x5d31) = _DAT_1806ba109;
      *(uint32_t *)(lVal_12 + 0x5d35) = uVal_30;
      *(uint32_t *)(lVal_12 + 0x5d39) = uVal_4;
      *(uint32_t *)(lVal_12 + 0x5d3d) = uVal_9;
      uVal_9 = _UNK_1806ba125;
      uVal_4 = _UNK_1806ba121;
      uVal_30 = _UNK_1806ba11d;
      *(uint32_t *)(lVal_12 + 0x5d41) = _DAT_1806ba119;
      *(uint32_t *)(lVal_12 + 0x5d45) = uVal_30;
      *(uint32_t *)(lVal_12 + 0x5d49) = uVal_4;
      *(uint32_t *)(lVal_12 + 0x5d4d) = uVal_9;
      uVal_8 = _UNK_1806ba131;
      *(uint64_t *)(lVal_12 + 0x5d51) = _DAT_1806ba129;
      *(uint64_t *)(lVal_12 + 0x5d59) = uVal_8;
      *(uint16_t *)(lVal_12 + 0x5d61) = 0x3136;
      func_0x180673140(&LAB_1801b92d0);
    }
    uVal_26 = _UNK_1806b649c;
    uVal_25 = _UNK_1806b6498;
    uVal_23 = _UNK_1806b6494;
    uVal_22 = _DAT_1806b6490;
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_12 + 0x5cf1);
    if (*(char *)(lVal_12 + 0x5d63) == '\x01') {
      uVal_27 = *(uint *)(lVal_12 + 0x5cf5) ^ _UNK_1806b6494;
      uVal_28 = *(uint *)(lVal_12 + 0x5cf9) ^ _UNK_1806b6498;
      uVal_24 = *(uint *)(lVal_12 + 0x5cfd) ^ _UNK_1806b649c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b6490;
      *(uint *)(lVal_12 + 0x5cf5) = uVal_27;
      *(uint *)(lVal_12 + 0x5cf9) = uVal_28;
      *(uint *)(lVal_12 + 0x5cfd) = uVal_24;
      *(uint *)(lVal_12 + 0x5d01) = *(uint *)(lVal_12 + 0x5d01) ^ uVal_22;
      *(uint *)(lVal_12 + 0x5d05) = *(uint *)(lVal_12 + 0x5d05) ^ uVal_23;
      *(uint *)(lVal_12 + 0x5d09) = *(uint *)(lVal_12 + 0x5d09) ^ uVal_25;
      *(uint *)(lVal_12 + 0x5d0d) = *(uint *)(lVal_12 + 0x5d0d) ^ uVal_26;
      *(uint *)(lVal_12 + 0x5d11) = *(uint *)(lVal_12 + 0x5d11) ^ uVal_22;
      *(uint *)(lVal_12 + 0x5d15) = *(uint *)(lVal_12 + 0x5d15) ^ uVal_23;
      *(uint *)(lVal_12 + 0x5d19) = *(uint *)(lVal_12 + 0x5d19) ^ uVal_25;
      *(uint *)(lVal_12 + 0x5d1d) = *(uint *)(lVal_12 + 0x5d1d) ^ uVal_26;
      *(uint *)(lVal_12 + 0x5d21) = *(uint *)(lVal_12 + 0x5d21) ^ uVal_22;
      *(uint *)(lVal_12 + 0x5d25) = *(uint *)(lVal_12 + 0x5d25) ^ uVal_23;
      *(uint *)(lVal_12 + 0x5d29) = *(uint *)(lVal_12 + 0x5d29) ^ uVal_25;
      *(uint *)(lVal_12 + 0x5d2d) = *(uint *)(lVal_12 + 0x5d2d) ^ uVal_26;
      *(uint *)(lVal_12 + 0x5d31) = *(uint *)(lVal_12 + 0x5d31) ^ uVal_22;
      *(uint *)(lVal_12 + 0x5d35) = *(uint *)(lVal_12 + 0x5d35) ^ uVal_23;
      *(uint *)(lVal_12 + 0x5d39) = *(uint *)(lVal_12 + 0x5d39) ^ uVal_25;
      *(uint *)(lVal_12 + 0x5d3d) = *(uint *)(lVal_12 + 0x5d3d) ^ uVal_26;
      *(uint *)(lVal_12 + 0x5d41) = *(uint *)(lVal_12 + 0x5d41) ^ uVal_22;
      *(uint *)(lVal_12 + 0x5d45) = *(uint *)(lVal_12 + 0x5d45) ^ uVal_23;
      *(uint *)(lVal_12 + 0x5d49) = *(uint *)(lVal_12 + 0x5d49) ^ uVal_25;
      *(uint *)(lVal_12 + 0x5d4d) = *(uint *)(lVal_12 + 0x5d4d) ^ uVal_26;
      *(uint *)(lVal_12 + 0x5d51) = *(uint *)(lVal_12 + 0x5d51) ^ uVal_22;
      *(uint *)(lVal_12 + 0x5d55) = *(uint *)(lVal_12 + 0x5d55) ^ uVal_23;
      *(uint *)(lVal_12 + 0x5d59) = *(uint *)(lVal_12 + 0x5d59) ^ uVal_25;
      *(uint *)(lVal_12 + 0x5d5d) = *(uint *)(lVal_12 + 0x5d5d) ^ uVal_26;
      *(ushort *)(lVal_12 + 0x5d61) = *(ushort *)(lVal_12 + 0x5d61) ^ 0x3145;
      *(uint8_t *)(lVal_12 + 0x5d63) = 0;
    }
    local_e8 = 0;
    uStack_e7 = 0;
    uStack_e0 = 0;
    uStack_d9 = uStack_d9 & 0xffffff00;
    sz_10 = strlen((char *)pU64_2);
    if (-1 < (int64_t)sz_10) {
      uVal_19 = 0xf;
      if (0xf < sz_10) {
        uVal_11 = sz_10 | 0xf;
        uVal_19 = 0x16;
        if (0x16 < uVal_11) {
          uVal_19 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          local_6e = 1;
          pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
        }
        else {
          local_6e = 1;
          lVal_12 = func_0x180672de0(uVal_19 + 0x28);
          pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_16 + -8) = lVal_12;
        }
        local_e8 = SUB81(pU64_16,0);
        uStack_e7 = (undefined7)((uint64_t)pU64_16 >> 8);
      }
      uStack_d9._1_3_ = (undefined3)sz_10;
      uStack_d5 = (uint32_t)(sz_10 >> 0x18);
      uStack_d1._0_1_ = (uint8_t)(sz_10 >> 0x38);
      uStack_d1._1_3_ = (undefined3)uVal_19;
      uStack_cd = (uint8_t)(uVal_19 >> 0x18);
      uStack_cc = (uint8_t)(uVal_19 >> 0x20);
      uStack_cb = (uint16_t)(uVal_19 >> 0x28);
      uStack_c9 = (uint8_t)(uVal_19 >> 0x38);
      func_0x1806aa960(pU64_16,pU64_2,sz_10);
      pU64_16[sz_10] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x5d74) == '\0') {
        lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_12 + 0x5d74) = 1;
        *(uint64_t *)(lVal_12 + 0x5d68) = 0x93d6654cba525d07;
        *(uint16_t *)(lVal_12 + 0x5d70) = 0x145;
        func_0x180673140(&LAB_1801b9330);
      }
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_3 = (uint64_t *)(lVal_12 + 0x5d68);
      if (*(char *)(lVal_12 + 0x5d71) == '\x01') {
        *pU64_3 = *pU64_3 ^ 0xe7bf0d27d93d3145;
        *(byte *)(lVal_12 + 0x5d70) = *(byte *)(lVal_12 + 0x5d70) ^ 0x45;
        *(uint8_t *)(lVal_12 + 0x5d71) = 0;
      }
      _local_168 = (uint8_t  [16])0x0;
      sz_10 = strlen((char *)pU64_3);
      if (-1 < (int64_t)sz_10) {
        uVal_19 = 0xf;
        if (0xf < sz_10) {
          uVal_11 = sz_10 | 0xf;
          uVal_19 = 0x16;
          if (0x16 < uVal_11) {
            uVal_19 = uVal_11;
          }
          if (uVal_11 < 0xfff) {
            local_6d = 1;
            pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
          }
          else {
            local_6d = 1;
            lVal_12 = func_0x180672de0(uVal_19 + 0x28);
            pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_17 + -8) = lVal_12;
          }
          local_168 = (uint8_t  [8])pU64_17;
        }
        local_158 = (uint8_t  [8])sz_10;
        uStack_150 = uVal_19;
        func_0x1806aa960(pU64_17,pU64_3,sz_10);
        pU64_17[sz_10] = 0;
        func_0x1801ccd70(local_78,local_168,&local_e8,pU64_14,uVal_18,local_238,uVal_31 & 0xffffff00);
        if (0xf < uStack_150) {
          uVal_19 = uStack_150 + 1;
          lVal_12 = (int64_t)local_168;
          if (0xfff < uVal_19) {
            lVal_12 = *(int64_t *)((int64_t)local_168 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_12)) goto LAB_18018733b;
            uVal_19 = uStack_150 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_19);
        }
        uVal_19 = CONCAT17(uStack_c9,
                          CONCAT25(uStack_cb,CONCAT14(uStack_cc,CONCAT13(uStack_cd,uStack_d1._1_3_))
                                  ));
        if (0xf < uVal_19) {
          lVal_6 = CONCAT71(uStack_e7,local_e8);
          uVal_11 = uVal_19 + 1;
          lVal_12 = lVal_6;
          if (0xfff < uVal_11) {
            lVal_12 = *(int64_t *)(lVal_6 + -8);
            if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_12)) {
LAB_18018733b:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_11 = uVal_19 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_11);
        }
        return local_78;
      }
      goto LAB_1801873eb;
    }
  }
  local_6e = 1;
  func_0x18007ba70();
LAB_1801873eb:
  local_6d = 1;
  func_0x18007ba70();
  fnPtr_5 = (func_ptr_t )swi(3);
  pU64_14 = (uint64_t *)(*fnPtr_5)();
  return pU64_14;
}

// Unwind@180187400
void Unwind_180187400(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x148);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@180187470
void Unwind_180187470(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5bd0) = 0;
  *(uint8_t *)(param_2 + 0x3e6) = 1;
  return;
}

// Unwind@1801874d0
void Unwind_1801874d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x188);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@180187540
void Unwind_180187540(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5c84) = 0;
  *(uint8_t *)(param_2 + 0x3e3) = 1;
  return;
}

// Unwind@1801875a0
void Unwind_1801875a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@180187610
void Unwind_180187610(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x208);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1d0));
    *(uint64_t *)(param_2 + 0x208) = 0;
  }
  return;
}

// Unwind@180187680
void Unwind_180187680(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5cb8) = 0;
  *(uint8_t *)(param_2 + 0x3e1) = 1;
  return;
}

// Unwind@1801876e0
void Unwind_1801876e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x248);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x210));
    *(uint64_t *)(param_2 + 0x248) = 0;
  }
  return;
}

// Unwind@180187750
void Unwind_180187750(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x360);
  return;
}

// Unwind@1801877a0
void Unwind_1801877a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 999) = 0;
  return;
}

// Unwind@1801877f0
void Unwind_1801877f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 999);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x3e6) = uVal_1;
  return;
}

// Unwind@180187840
void Unwind_180187840(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3e6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@1801878b0
void Unwind_1801878b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x3e0) = 0;
  return;
}

// Unwind@180187900
void Unwind_180187900(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3e0);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x3e5) = uVal_1;
  return;
}

// Unwind@180187950
void Unwind_180187950(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3e5) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1801879c0
void Unwind_1801879c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x3df) = 0;
  return;
}

// Unwind@180187a10
void Unwind_180187a10(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3df);
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x3de) = uVal_1;
  return;
}

// Unwind@180187a60
void Unwind_180187a60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3de) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@180187ad0
void Unwind_180187ad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x3e4) = 0;
  return;
}

// Unwind@180187b20
void Unwind_180187b20(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3e4);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x3e3) = uVal_1;
  return;
}

// Unwind@180187b70
void Unwind_180187b70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3e3) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x188), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@180187be0
void Unwind_180187be0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x3dd) = 0;
  return;
}

// Unwind@180187c30
void Unwind_180187c30(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3dd);
  func_0x180001e70(param_2 + 0x290);
  *(uint8_t *)(param_2 + 0x3e2) = uVal_1;
  return;
}

// Unwind@180187c80
void Unwind_180187c80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3e2) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@180187cf0
void Unwind_180187cf0(uint64_t param_1,int64_t param_2)
{
  func_0x180188250(param_2 + 0x2e0);
  return;
}

// Unwind@180187d40
void Unwind_180187d40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x3e1) = 0;
  return;
}

// Unwind@180187d90
void Unwind_180187d90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3e1) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x208), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1d0));
    *(uint64_t *)(param_2 + 0x208) = 0;
  }
  return;
}

// Unwind@180187e00
void Unwind_180187e00(uint64_t param_1,int64_t param_2)
{
  func_0x180188250(param_2 + 0x360);
  return;
}

// Unwind@180187e50
void Unwind_180187e50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x3dc) = 0;
  return;
}

// Unwind@180187ea0
void Unwind_180187ea0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3dc) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@180187f10
void Unwind_180187f10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x3db) = 0;
  return;
}

// Unwind@180187f60
void Unwind_180187f60(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3db);
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x3da) = uVal_1;
  return;
}

// Unwind@180187fb0
void Unwind_180187fb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3da) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x248), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x210));
    *(uint64_t *)(param_2 + 0x248) = 0;
  }
  return;
}

// Unwind@180188020
void Unwind_180188020(uint64_t param_1,int64_t param_2)
{
  func_0x1800822d0(*(uint64_t *)(param_2 + 0x358));
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x3d0));
  return;
}

// Unwind@180188070
void Unwind_180188070(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5ba4) = 0;
  return;
}

// Unwind@1801880d0
void Unwind_1801880d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5bec) = 0;
  *(uint8_t *)(param_2 + 999) = 1;
  return;
}

// Unwind@180188130
void Unwind_180188130(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5c14) = 0;
  *(uint8_t *)(param_2 + 0x3e5) = 1;
  return;
}

// Unwind@180188190
void Unwind_180188190(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5c98) = 0;
  *(uint8_t *)(param_2 + 0x3e4) = 1;
  return;
}

// Unwind@1801881f0
void Unwind_1801881f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5ce4) = 0;
  *(uint8_t *)(param_2 + 0x3e2) = 1;
  return;
}

// func_0x180188250
void func_0x180188250(int64_t *param_1)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  pLong_1 = (int64_t *)param_1[0xc];
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != param_1 + 5);
    param_1[0xc] = 0;
  }
  uVal_2 = param_1[3];
  if (0xf < uVal_2) {
    lVal_3 = *param_1;
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
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(uint8_t *)param_1 = 0;
  return;
}

// Unwind@1801886c0
void Unwind_1801886c0(void)
{
  func_0x180672f60(&DAT_18083f830);
  return;
}

// Unwind@1801886f0
void Unwind_1801886f0(void)
{
  func_0x180672f60(&DAT_18083f840);
  return;
}

// func_0x180188720
int64_t func_0x180188720(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xf5f9fdabc0c61be) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x54ce823f5a04727c) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801887c4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x54ce823f5a04727c);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801887ea;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x54ce823f5a04727c);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xecaf043U) + -9;
  }
LAB_1801887c4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801887ea:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180188800
int64_t func_0x180188800(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xc7da75c71244a1f) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x4747f0d78fde56df) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801888a4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x4747f0d78fde56df);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801888ca;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x4747f0d78fde56df);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffc899a609U) + -0x14;
  }
LAB_1801888a4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801888ca:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// Unwind@180188cf0
void Unwind_180188cf0(void)
{
  func_0x180672f60(&DAT_18083f880);
  return;
}

// Unwind@180188d20
void Unwind_180188d20(void)
{
  func_0x180672f60(&DAT_18083f890);
  return;
}

// Unwind@180188e80
void Unwind_180188e80(void)
{
  func_0x180672f60(&DAT_18083f8a0);
  return;
}

// Unwind@180188eb0
void Unwind_180188eb0(void)
{
  func_0x180672f60(&DAT_18083f8b0);
  return;
}

// func_0x180188f20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180188f20(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  char *_Str_00;
  uint64_t *_Str_01;
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  int64_t lVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint64_t *pU64_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint8_t *pU64_12;
  uint64_t uVal_13;
  uint32_t *pU64_14;
  uint8_t uVal_15;
  uint8_t local_e8 [56];
  uint64_t local_b0;
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint16_t uStack_a0;
  uint16_t uStack_9e;
  uint16_t uStack_9c;
  uint16_t uStack_9a;
  uint16_t uStack_98;
  uint32_t uStack_96;
  uint16_t uStack_92;
  uint16_t uStack_90;
  undefined6 uStack_8e;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint8_t uStack_68;
  uint32_t uStack_67;
  uint32_t uStack_63;
  uint32_t uStack_5f;
  uint64_t *local_50;
  uint8_t local_42;
  uint8_t local_41;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  uStack_68 = UNK_1806ba15b;
  uStack_67 = _UNK_1806ba15c;
  uStack_63 = _UNK_1806ba160;
  uStack_5f = _UNK_1806ba164;
  local_78 = _DAT_1806ba14b;
  uStack_74 = _UNK_1806ba14f;
  uStack_70 = _UNK_1806ba153;
  uStack_6c = _UNK_1806ba157;
  local_88._4_4_ = _UNK_1806ba13f;
  local_88._0_4_ = _DAT_1806ba13b;
  uStack_80._0_4_ = _UNK_1806ba143;
  uStack_80._4_4_ = _UNK_1806ba147;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5dd0) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x5dd0) = 1;
    func_0x1801b2300(lVal_11 + 0x5da1,local_88);
    func_0x180673140(&LAB_1801b93c0);
  }
  uVal_7 = _UNK_1806b2c9c;
  uVal_6 = _UNK_1806b2c98;
  uVal_5 = _UNK_1806b2c94;
  uVal_4 = _DAT_1806b2c90;
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_11 + 0x5da1);
  if (*(char *)(lVal_11 + 0x5dce) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_11 + 0x5da5) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(lVal_11 + 0x5da9) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(lVal_11 + 0x5dad) ^ _UNK_1806b2c9c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_11 + 0x5db5) ^ uVal_5;
    auArr_2._0_4_ = *(uint *)(lVal_11 + 0x5db1) ^ uVal_4;
    auArr_2._8_4_ = *(uint *)(lVal_11 + 0x5db9) ^ uVal_6;
    auArr_2._12_4_ = *(uint *)(lVal_11 + 0x5dbd) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_11 + 0x5db1) = auArr_2;
    *(uint64_t *)(lVal_11 + 0x5dc1) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_11 + 0x5dc1) >> 0x20) ^ _UNK_1806b63e4,
                  (uint)*(uint64_t *)(lVal_11 + 0x5dc1) ^ _DAT_1806b63e0);
    *(byte *)(lVal_11 + 0x5dc9) = *(byte *)(lVal_11 + 0x5dc9) ^ 0xcf;
    *(byte *)(lVal_11 + 0x5dca) = *(byte *)(lVal_11 + 0x5dca) ^ 0xd9;
    *(byte *)(lVal_11 + 0x5dcb) = *(byte *)(lVal_11 + 0x5dcb) ^ 0xf9;
    *(byte *)(lVal_11 + 0x5dcc) = *(byte *)(lVal_11 + 0x5dcc) ^ 9;
    *(byte *)(lVal_11 + 0x5dcd) = *(byte *)(lVal_11 + 0x5dcd) ^ 0xc5;
    *(uint8_t *)(lVal_11 + 0x5dce) = 0;
  }
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  _local_88 = ZEXT816(0);
  sz_9 = strlen((char *)_Str);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
LAB_18018947f:
    local_41 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_9 < 0x10) {
      pU64_12 = local_88;
      uVal_13 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_10) {
        uVal_13 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_13 + 0x28);
        pU64_12 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_11;
      }
      local_88 = (uint8_t  [8])pU64_12;
    }
    local_78 = (uint32_t)sz_9;
    uStack_74 = (uint32_t)(sz_9 >> 0x20);
    uStack_70 = (uint32_t)uVal_13;
    uStack_6c = (uint32_t)(uVal_13 >> 0x20);
    func_0x1806aa960(pU64_12,_Str,sz_9);
    pU64_12[sz_9] = 0;
    pU64_12 = local_88;
    func_0x1801c2ba0(param_1,0,0,pU64_12);
    uVal_13 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_13) {
      uVal_10 = uVal_13 + 1;
      lVal_11 = (int64_t)local_88;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_11)) goto LAB_180189493;
        uVal_10 = uVal_13 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    *param_1 = &PTR_LAB_1806b7d10;
    *(uint8_t *)(param_1 + 0x10) = 0;
    local_b0 = 0;
    local_50 = param_1;
    if (DAT_18083f7c0 == (uint64_t *)0x0) {
      uVal_15 = 0;
    }
    else {
      local_b0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_e8);
      uVal_15 = *(uint8_t *)(param_1 + 0x10);
    }
    uStack_98 = _UNK_1806ba178;
    uStack_96 = _UNK_1806ba17a;
    uStack_92 = (uint16_t)_UNK_1806ba17e;
    uStack_90 = (uint16_t)((uint)_UNK_1806ba17e >> 0x10);
    local_a8 = _DAT_1806ba168;
    uStack_a4 = _UNK_1806ba16c;
    uStack_a0 = _UNK_1806ba170;
    uStack_9e = _DAT_1806ba172;
    uStack_9c = _UNK_1806ba174;
    uStack_9a = _UNK_1806ba176;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5dec) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5dec) = 1;
      func_0x1800d9840(lVal_11 + 0x5dd1,&local_a8);
      func_0x180673140(&LAB_1801b93f0);
    }
    _Str_00 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5dd1);
    func_0x1801bf7d0(_Str_00);
    _local_88 = ZEXT816(0);
    sz_9 = strlen(_Str_00);
    if ((int64_t)sz_9 < 0) goto LAB_18018947f;
    uVal_13 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_10) {
        uVal_13 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_41 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        local_41 = 1;
        lVal_11 = func_0x180672de0(uVal_13 + 0x28);
        pU64_12 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_11;
      }
      local_88 = (uint8_t  [8])pU64_12;
    }
    local_78 = (uint32_t)sz_9;
    uStack_74 = (uint32_t)(sz_9 >> 0x20);
    uStack_70 = (uint32_t)uVal_13;
    uStack_6c = (uint32_t)(uVal_13 >> 0x20);
    func_0x1806aa960(pU64_12,_Str_00,sz_9);
    pU64_12[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5dfc) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x5dfc) = 1;
      *(uint8_t *)(lVal_11 + 0x5dfa) = 1;
      *(uint64_t *)(lVal_11 + 0x5df0) = 0x2bff6a49cc9c7021;
      *(uint16_t *)(lVal_11 + 0x5df8) = 0x190c;
      func_0x180673140(&LAB_1801b9420);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_01 = (uint64_t *)(lVal_11 + 0x5df0);
    if (*(char *)(lVal_11 + 0x5dfa) == '\x01') {
      *_Str_01 = *_Str_01 ^ 0x47910569a9f11975;
      *(byte *)(lVal_11 + 0x5df8) = *(byte *)(lVal_11 + 0x5df8) ^ 0x75;
      *(byte *)(lVal_11 + 0x5df9) = *(byte *)(lVal_11 + 0x5df9) ^ 0x19;
      *(uint8_t *)(lVal_11 + 0x5dfa) = 0;
    }
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    sz_9 = strlen((char *)_Str_01);
    if (-1 < (int64_t)sz_9) {
      if (sz_9 < 0x10) {
        uVal_13 = 0xf;
        pU64_14 = &local_a8;
      }
      else {
        uVal_10 = sz_9 | 0xf;
        uVal_13 = 0x16;
        if (0x16 < uVal_10) {
          uVal_13 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          local_42 = 1;
          pU64_14 = (uint32_t *)func_0x180672de0(uVal_13 + 1);
        }
        else {
          local_42 = 1;
          lVal_11 = func_0x180672de0(uVal_13 + 0x28);
          pU64_14 = (uint32_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_14 + -2) = lVal_11;
        }
        local_a8 = SUB84(pU64_14,0);
        uStack_a4 = (uint32_t)((uint64_t)pU64_14 >> 0x20);
      }
      uStack_98 = (uint16_t)sz_9;
      uStack_96 = (uint32_t)(sz_9 >> 0x10);
      uStack_92 = (uint16_t)(sz_9 >> 0x30);
      uStack_90 = (uint16_t)uVal_13;
      uStack_8e = (undefined6)(uVal_13 >> 0x10);
      func_0x1806aa960(pU64_14,_Str_01,sz_9);
      *(uint8_t *)((int64_t)pU64_14 + sz_9) = 0;
      func_0x1801ccd70(local_50,&local_a8,local_88,param_1 + 0x10,uVal_15,local_e8,0);
      uVal_13 = CONCAT62(uStack_8e,uStack_90);
      if (0xf < uVal_13) {
        lVal_3 = CONCAT44(uStack_a4,local_a8);
        uVal_10 = uVal_13 + 1;
        lVal_11 = lVal_3;
        if (0xfff < uVal_10) {
          lVal_11 = *(int64_t *)(lVal_3 + -8);
          if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_11)) goto LAB_180189493;
          uVal_10 = uVal_13 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_10);
      }
      pU64_8 = local_50;
      uVal_13 = CONCAT44(uStack_6c,uStack_70);
      if (0xf < uVal_13) {
        uVal_10 = uVal_13 + 1;
        lVal_11 = (int64_t)local_88;
        if (0xfff < uVal_10) {
          lVal_11 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_11)) goto LAB_180189493;
          uVal_10 = uVal_13 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_10);
      }
      return pU64_8;
    }
  }
  local_42 = 1;
  func_0x18007ba70();
LAB_180189493:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801894a0
void Unwind_1801894a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@1801894f0
void Unwind_1801894f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5dec) = 0;
  *(uint8_t *)(param_2 + 0xe7) = 1;
  return;
}

// Unwind@180189540
void Unwind_180189540(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@180189580
void Unwind_180189580(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  *(uint8_t *)(param_2 + 0xe6) = 0;
  return;
}

// Unwind@1801895c0
void Unwind_1801895c0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0xe6);
  func_0x180001e70(param_2 + 0xa0);
  *(uint8_t *)(param_2 + 0xe7) = uVal_1;
  return;
}

// Unwind@180189600
void Unwind_180189600(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0xe7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@180189650
void Unwind_180189650(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0xd8));
  return;
}

// Unwind@180189690
void Unwind_180189690(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5dd0) = 0;
  return;
}

// Unwind@180189980
void Unwind_180189980(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5e24) = 0;
  return;
}

// func_0x1801899c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801899c0(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint8_t *pU64_12;
  uint64_t uVal_13;
  uint8_t local_88 [4];
  uint8_t auStack_84 [4];
  uint64_t uStack_80;
  size_t local_78;
  uint64_t uStack_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  undefined5 uStack_58;
  uint64_t *local_48;
  uint8_t local_39;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_68 = _DAT_1806ba1b5;
  uStack_64 = _UNK_1806ba1b9;
  uStack_60 = _UNK_1806ba1bd;
  local_78 = CONCAT44(_UNK_1806ba1a9,_DAT_1806ba1a5);
  uStack_70 = CONCAT44(_UNK_1806ba1b1,_UNK_1806ba1ad);
  auStack_84 = (uint8_t  [4])_UNK_1806ba199;
  local_88 = (uint8_t  [4])_DAT_1806ba195;
  uStack_80._0_4_ = _UNK_1806ba19d;
  uStack_80._4_4_ = _UNK_1806ba1a1;
  uStack_5c = CONCAT31(0xb44bb9,(char)_UNK_1806ba1c1);
  uStack_58 = 0x37f439341d;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5e5c) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x5e5c) = 1;
    func_0x1801b94b0(lVal_11 + 0x5e25,local_88);
    func_0x180673140(&LAB_1801b9630);
  }
  uVal_8 = _UNK_1806b2d6c;
  uVal_7 = _UNK_1806b2d68;
  uVal_6 = _UNK_1806b2d64;
  uVal_5 = _DAT_1806b2d60;
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_11 + 0x5e25);
  if (*(char *)(lVal_11 + 0x5e5a) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_11 + 0x5e29) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(lVal_11 + 0x5e2d) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(lVal_11 + 0x5e31) ^ _UNK_1806b2d6c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_11 + 0x5e39) ^ uVal_6;
    auArr_2._0_4_ = *(uint *)(lVal_11 + 0x5e35) ^ uVal_5;
    auArr_2._8_4_ = *(uint *)(lVal_11 + 0x5e3d) ^ uVal_7;
    auArr_2._12_4_ = *(uint *)(lVal_11 + 0x5e41) ^ uVal_8;
    *(uint8_t (*)[16])(lVal_11 + 0x5e35) = auArr_2;
    auArr_3._4_4_ = *(uint *)(lVal_11 + 0x5e49) ^ uVal_6;
    auArr_3._0_4_ = *(uint *)(lVal_11 + 0x5e45) ^ uVal_5;
    auArr_3._8_4_ = *(uint *)(lVal_11 + 0x5e4d) ^ uVal_7;
    auArr_3._12_4_ = *(uint *)(lVal_11 + 0x5e51) ^ uVal_8;
    *(uint8_t (*)[16])(lVal_11 + 0x5e45) = auArr_3;
    *(uint *)(lVal_11 + 0x5e55) = *(uint *)(lVal_11 + 0x5e55) ^ 0xd54d5575;
    *(byte *)(lVal_11 + 0x5e59) = *(byte *)(lVal_11 + 0x5e59) ^ 0x37;
    *(uint8_t *)(lVal_11 + 0x5e5a) = 0;
  }
  _local_88 = ZEXT816(0);
  sz_9 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_9) {
    if (sz_9 < 0x10) {
      pU64_12 = local_88;
      uVal_13 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_10) {
        uVal_13 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_13 + 0x28);
        pU64_12 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_11;
      }
      _local_88 = (int64_t)pU64_12;
    }
    local_78 = sz_9;
    uStack_70 = uVal_13;
    func_0x1806aa960(pU64_12,_Str,sz_9);
    pU64_12[sz_9] = 0;
    func_0x1801c2ba0(param_1,0,3,local_88);
    if (0xf < uStack_70) {
      uVal_13 = uStack_70 + 1;
      lVal_11 = _local_88;
      if (0xfff < uVal_13) {
        lVal_11 = *(int64_t *)(_local_88 + -8);
        if (0x1f < (uint64_t)((_local_88 + -8) - lVal_11)) goto LAB_180189bde;
        uVal_13 = uStack_70 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_13);
    }
    *param_1 = &PTR_LAB_1806b7e40;
    auArr_4._12_4_ = 0;
    auArr_4._0_12_ = _auStack_84;
    _local_88 = auArr_4 << 0x20;
    local_48 = param_1;
    func_0x1801bf8a0(param_1 + 0x10,local_88,&local_39);
    return local_48;
  }
  func_0x18007ba70();
LAB_180189bde:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180189be0
void Unwind_180189be0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180189c10
void Unwind_180189c10(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x60));
  return;
}

// Unwind@180189c40
void Unwind_180189c40(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5e5c) = 0;
  return;
}

// func_0x180189c80
void func_0x180189c80(int64_t param_1)
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
LAB_180189d79:
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
    uVal_6 = pU64_2[6];
    if (0xf < uVal_6) {
      lVal_1 = pU64_2[3];
      uVal_4 = uVal_6 + 1;
      lVal_5 = lVal_1;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(lVal_1 + -8);
        if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_5)) goto LAB_180189d79;
        uVal_4 = uVal_6 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    pU64_2[5] = 0;
    pU64_2[6] = 0xf;
    *(uint8_t *)(pU64_2 + 3) = 0;
    thunk_FUN_180695dd0(pU64_2,0x38);
    pU64_2 = pU64_3;
  } while( true );
}

// Unwind@18018a040
void Unwind_18018a040(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5e84) = 0;
  return;
}

// func_0x18018a080
void func_0x18018a080(char **param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint uVal_3;
  char *fnPtr_4;
  uint8_t *pU64_5;
  char **ptr2_Char_6;
  uint64_t *pU64_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  int64_t *pLong_10;
  uint8_t *pU64_11;
  uint64_t *pU64_12;
  uint8_t *pU64_13;
  int64_t lVal_14;
  uint local_80;
  uint32_t uStack_7c;
  uint64_t uStack_78;
  uint64_t local_70;
  uint8_t local_68 [16];
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint8_t *local_40;
  int64_t *local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  ptr2_Char_6 = param_1;
  if (&DAT_0000000f < param_1[3]) {
    ptr2_Char_6 = (char **)*param_1;
  }
  if (*(char *)ptr2_Char_6 == '.') {
    func_0x18048e060(&DAT_180840fc0,param_1);
    return;
  }
  if (*(char *)ptr2_Char_6 == '/') {
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_18083f8f0) && (func_0x180672ec0(&DAT_18083f8f0), DAT_18083f8f0 == -1))
    {
      DAT_18083f8e8 = (func_ptr_t )func_0x18011caa0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f8f0);
    }
    (*DAT_18083f8e8)(&local_40,0x4d);
    local_68 = ZEXT816(0);
    local_58 = 0;
    local_50 = 0xf;
    local_80 = local_80 & 0xffffff00;
    uStack_78 = (int64_t *)0xabbaed85;
    local_70 = 0x72aefb63;
    DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
    if (DAT_180840a60 == 0) {
      DAT_180840a68 = 0;
    }
    lVal_9 = *(int64_t *)(DAT_180840a60 + 0x10);
    pLong_10 = (int64_t *)
              (*(int64_t *)(lVal_9 + 0x48) +
              (uint64_t)
              (((uint)(*(int *)(lVal_9 + 0x50) - (int)*(int64_t *)(lVal_9 + 0x48)) >> 3) - 1 &
              0x18f957af) * 8);
    lVal_9 = *(int64_t *)(lVal_9 + 0x68);
    do {
      lVal_14 = *pLong_10 * 0x20;
      pLong_10 = (int64_t *)(lVal_9 + lVal_14);
    } while (*(int *)(lVal_9 + 8 + lVal_14) != 0x18f957af);
    lVal_9 = *(int64_t *)(lVal_14 + 0x10 + lVal_9);
    lVal_14 = *(int64_t *)(lVal_9 + 8);
    uVal_3 = *(uint *)(*(int64_t *)
                       (lVal_14 + (uint64_t)((*(uint *)(DAT_180840a60 + 0x18) & 0x3f800) >> 8)) +
                     (uint64_t)(*(uint *)(DAT_180840a60 + 0x18) & 0x7ff) * 4);
    local_48 = *(uint64_t *)
                (*(int64_t *)(*(int64_t *)(lVal_9 + 0x50) + (uint64_t)((uVal_3 & 0x3ff80) >> 4)) +
                (uint64_t)(uVal_3 & 0x7f) * 8);
    ptr2_Char_6 = (char **)(local_40 + 0x30);
    if (ptr2_Char_6 != param_1) {
      fnPtr_4 = param_1[2];
      if (&DAT_0000000f < param_1[3]) {
        param_1 = (char **)*param_1;
      }
      if (*(char **)(local_40 + 0x48) < fnPtr_4) {
        func_0x18007bba0(ptr2_Char_6,fnPtr_4,lVal_14,param_1);
      }
      else {
        if (&DAT_0000000f < *(char **)(local_40 + 0x48)) {
          ptr2_Char_6 = *(char ***)(local_40 + 0x30);
        }
        *(char **)(local_40 + 0x40) = fnPtr_4;
        func_0x1806aa960(ptr2_Char_6,param_1,fnPtr_4);
        *(char *)((int64_t)ptr2_Char_6 + (int64_t)fnPtr_4) = '\0';
      }
    }
    pU64_5 = local_40;
    uVal_8 = local_58;
    *(uint64_t *)(local_40 + 0x60) = local_70;
    *(uint *)(local_40 + 0x50) = local_80;
    *(uint32_t *)(local_40 + 0x54) = uStack_7c;
    *(uint32_t *)(local_40 + 0x58) = (uint32_t)uStack_78;
    *(uint32_t *)(local_40 + 0x5c) = uStack_78._4_4_;
    if ((uint *)(local_40 + 0x50) != &local_80) {
      pU64_13 = local_68;
      if (0xf < local_50) {
        pU64_13 = (uint8_t *)local_68._0_8_;
      }
      pU64_11 = local_40 + 0x68;
      if (*(uint64_t *)(local_40 + 0x80) < local_58) {
        func_0x18007bba0(pU64_11,local_58);
      }
      else {
        if (0xf < *(uint64_t *)(local_40 + 0x80)) {
          pU64_11 = *(uint8_t **)(local_40 + 0x68);
        }
        *(uint64_t *)(local_40 + 0x78) = local_58;
        func_0x1806aa960(pU64_11,pU64_13,local_58);
        pU64_11[uVal_8] = 0;
      }
    }
    *(uint64_t *)(pU64_5 + 0x88) = local_48;
    *(uint32_t *)(local_40 + 0x90) = 0x2a;
    (**(func_ptr_t *)(*(int64_t *)DAT_180840a58[0x39] + 0x20))();
    pLong_10 = local_38;
    if (0xf < local_50) {
      uVal_8 = local_50 + 1;
      lVal_9 = local_68._0_8_;
      if (0xfff < uVal_8) {
        lVal_9 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_9)) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_8 = local_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_8);
      pLong_10 = local_38;
    }
  }
  else {
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_18083f900) && (func_0x180672ec0(&DAT_18083f900), DAT_18083f900 == -1))
    {
      DAT_18083f8f8 = (func_ptr_t )func_0x18011caa0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f900);
    }
    (*DAT_18083f8f8)(&local_80,9);
    func_0x18018a720(CONCAT44(uStack_7c,local_80) + 200,param_1);
    local_40 = &DAT_28d478d88fb3dcdf;
    DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
    if (DAT_180840a60 == 0) {
      DAT_180840a68 = 0;
    }
    pU64_7 = (uint64_t *)func_0x1801263c0(DAT_180840a60);
    lVal_9 = CONCAT44(uStack_7c,local_80);
    pU64_12 = (uint64_t *)(lVal_9 + 0xa8);
    if (pU64_12 != pU64_7) {
      uVal_8 = pU64_7[2];
      if (0xf < (uint64_t)pU64_7[3]) {
        pU64_7 = (uint64_t *)*pU64_7;
      }
      if (*(uint64_t *)(lVal_9 + 0xc0) < uVal_8) {
        func_0x18007bba0(pU64_12,uVal_8);
      }
      else {
        if (0xf < *(uint64_t *)(lVal_9 + 0xc0)) {
          pU64_12 = *(uint64_t **)(lVal_9 + 0xa8);
        }
        *(uint64_t *)(lVal_9 + 0xb8) = uVal_8;
        func_0x1806aa960(pU64_12,pU64_7,uVal_8);
        *(uint8_t *)((int64_t)pU64_12 + uVal_8) = 0;
      }
    }
    pU64_7 = (uint64_t *)func_0x18011b7a0(DAT_180840a50);
    lVal_9 = CONCAT44(uStack_7c,local_80);
    pU64_12 = (uint64_t *)(lVal_9 + 0x38);
    if (pU64_12 != pU64_7) {
      uVal_8 = pU64_7[2];
      if (0xf < (uint64_t)pU64_7[3]) {
        pU64_7 = (uint64_t *)*pU64_7;
      }
      if (*(uint64_t *)(lVal_9 + 0x50) < uVal_8) {
        func_0x18007bba0(pU64_12,uVal_8);
      }
      else {
        if (0xf < *(uint64_t *)(lVal_9 + 0x50)) {
          pU64_12 = *(uint64_t **)(lVal_9 + 0x38);
        }
        *(uint64_t *)(lVal_9 + 0x48) = uVal_8;
        func_0x1806aa960(pU64_12,pU64_7,uVal_8);
        *(uint8_t *)((int64_t)pU64_12 + uVal_8) = 0;
      }
    }
    *(uint8_t *)(CONCAT44(uStack_7c,local_80) + 0xa0) = 1;
    (**(func_ptr_t *)(*(int64_t *)DAT_180840a58[0x39] + 0x20))();
    pLong_10 = uStack_78;
  }
  if (pLong_10 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = pLong_10 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*pLong_10)(pLong_10);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_10 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_10 + 8))(pLong_10);
      }
    }
  }
  return;
}

// Unwind@18018a5f0
void Unwind_18018a5f0(uint64_t param_1,int64_t param_2)
{
  func_0x18018a6c0(param_2 + 0x28);
  func_0x18001deb0(param_2 + 0x68);
  return;
}

// Unwind@18018a630
void Unwind_18018a630(void)
{
  func_0x180672f60(&DAT_18083f8f0);
  return;
}

// Unwind@18018a660
void Unwind_18018a660(void)
{
  func_0x180672f60(&DAT_18083f900);
  return;
}

// Unwind@18018a690
void Unwind_18018a690(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x28);
  return;
}

// func_0x18018a6c0
void func_0x18018a6c0(int64_t param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_1 + 0x30);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0x18);
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
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0xf;
  *(uint8_t *)(param_1 + 0x18) = 0;
  return;
}

// func_0x18018a720
uint64_t ** func_0x18018a720(uint64_t **param_1,uint64_t **param_2,uint64_t param_3)
{
  uint64_t *pU64_1;
  func_ptr_t fnPtr_2;
  char ch_3;
  uint64_t *pU64_4;
  uint64_t uVal_5;
  uint64_t **ptr2_U64_6;
  uint64_t *pU64_7;
  uint64_t *pU64_8;
  uint8_t local_29;
  
  ch_3 = *(char *)(param_1 + 4);
  if (ch_3 == '\x01') {
    if (param_1 != param_2) {
      pU64_1 = param_2[2];
      if (&DAT_0000000f < param_2[3]) {
        param_2 = (uint64_t **)*param_2;
      }
      if (param_1[3] < pU64_1) {
        func_0x18007bba0(param_1,pU64_1,param_3,param_2);
      }
      else {
        ptr2_U64_6 = param_1;
        if (&DAT_0000000f < param_1[3]) {
          ptr2_U64_6 = (uint64_t **)*param_1;
        }
        param_1[2] = pU64_1;
        func_0x1806aa960(ptr2_U64_6,param_2,pU64_1);
        *(uint8_t *)((int64_t)ptr2_U64_6 + (int64_t)pU64_1) = 0;
      }
    }
  }
  else {
    pU64_1 = param_2[2];
    if ((uint64_t *)0xf < param_2[3]) {
      param_2 = (uint64_t **)*param_2;
    }
    if ((int64_t)pU64_1 < 0) {
      func_0x18007ba70();
      fnPtr_2 = (func_ptr_t )swi(3);
      ptr2_U64_6 = (uint64_t **)(*fnPtr_2)();
      return ptr2_U64_6;
    }
    if (&DAT_0000000f < pU64_1) {
      pU64_4 = (uint64_t *)((uint64_t)pU64_1 | 0xf);
      pU64_8 = (uint64_t *)0x16;
      if ((uint64_t *)0x16 < pU64_4) {
        pU64_8 = pU64_4;
      }
      if (pU64_4 < (uint64_t *)0xfff) {
        pU64_4 = (uint64_t *)func_0x180672de0((uint8_t *)((int64_t)pU64_8 + 1));
      }
      else {
        uVal_5 = func_0x180672de0(pU64_8 + 5);
        pU64_4 = (uint64_t *)(uVal_5 + 0x27 & 0xffffffffffffffe0);
        pU64_4[-1] = uVal_5;
      }
      func_0x1806aa960(pU64_4,param_2,(uint8_t *)((int64_t)pU64_1 + 1));
      ch_3 = *(char *)(param_1 + 4);
      pU64_7 = (uint64_t *)0x0;
    }
    else {
      pU64_4 = *param_2;
      pU64_7 = param_2[1];
      pU64_8 = (uint64_t *)&DAT_0000000f;
    }
    func_0x1801b9780((int64_t)ch_3 + 1,&local_29,param_1);
    *param_1 = pU64_4;
    param_1[1] = pU64_7;
    param_1[2] = pU64_1;
    param_1[3] = pU64_8;
    *(uint8_t *)(param_1 + 4) = 1;
  }
  return param_1;
}

// Unwind@18018b560
void Unwind_18018b560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@18018b590
void Unwind_18018b590(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@18018b5c0
void Unwind_18018b5c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// Unwind@18018b5f0
void Unwind_18018b5f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@18018b620
void Unwind_18018b620(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xe8);
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Catch_All@18018b660
uint8_t * Catch_All_18018b660(void)
{
  return &LAB_18018b23f;
}

// Unwind@18018b690
void Unwind_18018b690(uint64_t param_1,int64_t param_2)
{
  func_0x18003c580(param_2 + 0x78);
  func_0x18003c580(param_2 + 0x180);
  func_0x18003c630(param_2 + 0x160);
  return;
}

// Unwind@18018b6e0
void Unwind_18018b6e0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18018b700
void Unwind_18018b700(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18018b720
void Unwind_18018b720(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@18018b750
void Unwind_18018b750(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18018b770
void Unwind_18018b770(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x170);
  return;
}

// Unwind@18018b7a0
void Unwind_18018b7a0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18018b7c0
void func_0x18018b7c0(int64_t param_1)
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
      func_0x1801bfa00(param_1,*pU64_2);
      return;
    }
    *(uint64_t *)pU64_2[1] = 0;
    pU64_2 = (uint64_t *)*pU64_2;
    while (pU64_2 != (uint64_t *)0x0) {
      pU64_5 = (uint64_t *)*pU64_2;
      uVal_10 = pU64_2[6];
      if (0xf < uVal_10) {
        lVal_3 = pU64_2[3];
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
      pU64_2[5] = 0;
      pU64_2[6] = 0xf;
      *(uint8_t *)(pU64_2 + 3) = 0;
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

// Unwind@18018c020
void Unwind_18018c020(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18018c060
void Unwind_18018c060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18018c0a0
void Unwind_18018c0a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18018c0e0
void Unwind_18018c0e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18018c120
void Unwind_18018c120(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x50);
  return;
}

// Unwind@18018c160
void Unwind_18018c160(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0xd0);
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18018c1a0
void Unwind_18018c1a0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18018c1d0
void Unwind_18018c1d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18018c200
void Unwind_18018c200(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18018c230
byte ** func_0x18018c230(byte *param_1,byte **param_2,uint64_t param_3,uint64_t param_4)
{
  byte bFlag_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  byte **ptr2_Byte_4;
  uint8_t (*pArr16_5)[16];
  byte *pU8_6;
  byte *pU8_7;
  uint8_t local_98 [56];
  byte *local_60;
  uint8_t local_58;
  uint64_t local_40;
  uint8_t (*local_38)[16];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    *param_1 = 1;
    local_38 = (uint8_t (*)[16])func_0x180672de0(0x10);
    *local_38 = ZEXT816(0);
    lVal_3 = func_0x180672de0(0x50);
    *(int64_t *)lVal_3 = lVal_3;
    *(int64_t *)(lVal_3 + 8) = lVal_3;
    *(int64_t *)(lVal_3 + 0x10) = lVal_3;
    *(uint16_t *)(lVal_3 + 0x18) = 0x101;
    *(int64_t *)*local_38 = lVal_3;
    *(uint8_t (**)[16])(param_1 + 8) = local_38;
    pArr16_5 = local_38;
  }
  else {
    if (*param_1 != 1) {
      local_40 = func_0x1800833d0(param_1);
      func_0x180083260(&local_60,"cannot use emplace() with ",&local_40);
      func_0x180082f00(local_98,0x137,&local_60,param_1);
      func_0x18067a120(local_98,&DAT_180768700);
      fnPtr_2 = (func_ptr_t )swi(3);
      ptr2_Byte_4 = (byte **)(*fnPtr_2)();
      return ptr2_Byte_4;
    }
    pArr16_5 = *(uint8_t (**)[16])(param_1 + 8);
  }
  func_0x1801c0260(pArr16_5,&local_60,param_3,param_4);
  bFlag_1 = *param_1;
  pU8_6 = (byte *)(uint64_t)bFlag_1;
  if (bFlag_1 == 0) {
    pU8_7 = (byte *)0x1;
  }
  else if (bFlag_1 == 2) {
    pU8_6 = **(byte ***)(param_1 + 8);
    pU8_7 = (byte *)0x8000000000000000;
  }
  else if (bFlag_1 == 1) {
    pU8_7 = (byte *)0x8000000000000000;
    pU8_6 = (byte *)0x0;
  }
  else {
    pU8_6 = (byte *)0x0;
    pU8_7 = (byte *)0x0;
  }
  *param_2 = param_1;
  param_2[1] = local_60;
  param_2[2] = pU8_6;
  param_2[3] = pU8_7;
  *(uint8_t *)(param_2 + 4) = local_58;
  return param_2;
}

// Unwind@18018c370
void Unwind_18018c370(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// Unwind@18018c3a0
void Unwind_18018c3a0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x80),0x10);
  return;
}

// func_0x18018c3d0
byte ** func_0x18018c3d0(byte *param_1,byte **param_2,uint64_t param_3,uint64_t param_4)
{
  byte bFlag_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  byte **ptr2_Byte_4;
  uint8_t (*pArr16_5)[16];
  byte *pU8_6;
  byte *pU8_7;
  uint8_t local_98 [56];
  byte *local_60;
  uint8_t local_58;
  uint64_t local_40;
  uint8_t (*local_38)[16];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    *param_1 = 1;
    local_38 = (uint8_t (*)[16])func_0x180672de0(0x10);
    *local_38 = ZEXT816(0);
    lVal_3 = func_0x180672de0(0x50);
    *(int64_t *)lVal_3 = lVal_3;
    *(int64_t *)(lVal_3 + 8) = lVal_3;
    *(int64_t *)(lVal_3 + 0x10) = lVal_3;
    *(uint16_t *)(lVal_3 + 0x18) = 0x101;
    *(int64_t *)*local_38 = lVal_3;
    *(uint8_t (**)[16])(param_1 + 8) = local_38;
    pArr16_5 = local_38;
  }
  else {
    if (*param_1 != 1) {
      local_40 = func_0x1800833d0(param_1);
      func_0x180083260(&local_60,"cannot use emplace() with ",&local_40);
      func_0x180082f00(local_98,0x137,&local_60,param_1);
      func_0x18067a120(local_98,&DAT_180768700);
      fnPtr_2 = (func_ptr_t )swi(3);
      ptr2_Byte_4 = (byte **)(*fnPtr_2)();
      return ptr2_Byte_4;
    }
    pArr16_5 = *(uint8_t (**)[16])(param_1 + 8);
  }
  func_0x1801c0790(pArr16_5,&local_60,param_3,param_4);
  bFlag_1 = *param_1;
  pU8_6 = (byte *)(uint64_t)bFlag_1;
  if (bFlag_1 == 0) {
    pU8_7 = (byte *)0x1;
  }
  else if (bFlag_1 == 2) {
    pU8_6 = **(byte ***)(param_1 + 8);
    pU8_7 = (byte *)0x8000000000000000;
  }
  else if (bFlag_1 == 1) {
    pU8_7 = (byte *)0x8000000000000000;
    pU8_6 = (byte *)0x0;
  }
  else {
    pU8_6 = (byte *)0x0;
    pU8_7 = (byte *)0x0;
  }
  *param_2 = param_1;
  param_2[1] = local_60;
  param_2[2] = pU8_6;
  param_2[3] = pU8_7;
  *(uint8_t *)(param_2 + 4) = local_58;
  return param_2;
}

// Unwind@18018c510
void Unwind_18018c510(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// Unwind@18018c540
void Unwind_18018c540(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x80),0x10);
  return;
}

// func_0x18018c570
uint64_t * func_0x18018c570(uint64_t *param_1)
{
  uint64_t *pU64_1;
  byte *_Str;
  uint *_Str_00;
  size_t sz_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint8_t *pU64_7;
  uint64_t uVal_8;
  uint64_t *pU64_9;
  uint8_t local_e0 [56];
  uint64_t local_a8;
  uint64_t *local_a0;
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [16];
  uint8_t local_68 [24];
  uint64_t *local_50;
  uint8_t local_42;
  uint8_t local_41;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  func_0x180132ee0();
  *param_1 = &PTR_FUN_1806b6b70;
  *(uint8_t (*)[16])(param_1 + 0x18) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x16) = ZEXT816(0);
  *(uint32_t *)(param_1 + 0x19) = 0xffffffff;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5ed4) == '\0') {
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_5 + 0x5ed4) = 1;
    *(uint8_t *)(lVal_5 + 0x5ed2) = 1;
    *(uint64_t *)(lVal_5 + 0x5ec8) = 0x29f05649c685763b;
    *(uint16_t *)(lVal_5 + 0x5ed0) = 0x1906;
    func_0x180673140(&LAB_1801b99c0);
  }
  lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_5 + 0x5ec8);
  if (*(char *)(lVal_5 + 0x5ed2) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0x47910569a9f11975;
    *(byte *)(lVal_5 + 0x5ed0) = *(byte *)(lVal_5 + 0x5ed0) ^ 0x75;
    *(byte *)(lVal_5 + 0x5ed1) = *(byte *)(lVal_5 + 0x5ed1) ^ 0x19;
    *(uint8_t *)(lVal_5 + 0x5ed2) = 0;
  }
  pU64_9 = param_1 + 0x16;
  local_88 = ZEXT816(0);
  local_98 = ZEXT816(0);
  local_a0 = param_1;
  sz_2 = strlen((char *)pU64_1);
  local_50 = pU64_9;
  if ((int64_t)sz_2 < 0) {
    func_0x18007ba70();
LAB_18018cc14:
    func_0x18007ba70();
LAB_18018cc1a:
    local_42 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_2 < 0x10) {
      uVal_8 = 0xf;
      pU64_7 = local_98;
    }
    else {
      uVal_4 = sz_2 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_4) {
        uVal_8 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        pU64_7 = (uint8_t *)func_0x180672de0(uVal_8 + 1);
      }
      else {
        lVal_5 = func_0x180672de0(uVal_8 + 0x28);
        pU64_7 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_7 + -8) = lVal_5;
      }
      local_98._0_8_ = pU64_7;
    }
    pU64_9 = local_50;
    local_88._8_8_ = uVal_8;
    local_88._0_8_ = sz_2;
    func_0x1806aa960(pU64_7,pU64_1,sz_2);
    pU64_7[sz_2] = 0;
    uVal_3 = func_0x1801d3650(pU64_9,local_98,0);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5ee4) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x5ee4) = 1;
      *(uint8_t *)(lVal_5 + 0x5ee2) = 1;
      *(uint64_t *)(lVal_5 + 0x5ed8) = 0x22fd6207c89b7638;
      *(uint16_t *)(lVal_5 + 0x5ee0) = 0x1906;
      func_0x180673140(&LAB_1801b99f0);
    }
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_5 + 0x5ed8);
    if (*(char *)(lVal_5 + 0x5ee2) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x47910569a9f11975;
      *(byte *)(lVal_5 + 0x5ee0) = *(byte *)(lVal_5 + 0x5ee0) ^ 0x75;
      *(byte *)(lVal_5 + 0x5ee1) = *(byte *)(lVal_5 + 0x5ee1) ^ 0x19;
      *(uint8_t *)(lVal_5 + 0x5ee2) = 0;
    }
    local_68._0_16_ = ZEXT816(0);
    local_78 = ZEXT816(0);
    sz_2 = strlen((char *)pU64_1);
    if ((int64_t)sz_2 < 0) goto LAB_18018cc14;
    if (sz_2 < 0x10) {
      pU64_7 = local_78;
      uVal_8 = 0xf;
    }
    else {
      uVal_4 = sz_2 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_4) {
        uVal_8 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        pU64_7 = (uint8_t *)func_0x180672de0(uVal_8 + 1);
      }
      else {
        lVal_5 = func_0x180672de0(uVal_8 + 0x28);
        pU64_7 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_7 + -8) = lVal_5;
      }
      local_78._0_8_ = pU64_7;
    }
    local_68._8_8_ = uVal_8;
    local_68._0_8_ = sz_2;
    func_0x1806aa960(pU64_7,pU64_1,sz_2);
    pU64_7[sz_2] = 0;
    pU64_7 = local_78;
    func_0x1801d3650(uVal_3,pU64_7,1);
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_8 = local_68._8_8_ + 1;
      lVal_5 = local_78._0_8_;
      if (0xfff < uVal_8) {
        lVal_5 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_5)) goto LAB_18018cc2e;
        uVal_8 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_8);
    }
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_8 = local_88._8_8_ + 1;
      lVal_5 = local_98._0_8_;
      if (0xfff < uVal_8) {
        lVal_5 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_5)) goto LAB_18018cc2e;
        uVal_8 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_8);
    }
    local_a8 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_a8 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_e0);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5ee8) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x5ee8) = 1;
      *(uint16_t *)(lVal_5 + 0x5ee5) = 0x175;
      func_0x180673140(&LAB_1801b9a20);
    }
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (byte *)(lVal_5 + 0x5ee5);
    if (*(char *)(lVal_5 + 0x5ee6) == '\x01') {
      *_Str = *_Str ^ 0x75;
      *(uint8_t *)(lVal_5 + 0x5ee6) = 0;
    }
    local_98 = ZEXT816(0);
    sz_2 = strlen((char *)_Str);
    if ((int64_t)sz_2 < 0) goto LAB_18018cc1a;
    uVal_8 = 0xf;
    pU64_6 = local_98;
    if (0xf < sz_2) {
      uVal_4 = sz_2 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_4) {
        uVal_8 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        local_42 = 1;
        pU64_6 = (uint8_t *)func_0x180672de0(uVal_8 + 1);
      }
      else {
        local_42 = 1;
        lVal_5 = func_0x180672de0(uVal_8 + 0x28);
        pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_6 + -8) = lVal_5;
      }
      local_98._0_8_ = pU64_6;
    }
    local_88._8_8_ = uVal_8;
    local_88._0_8_ = sz_2;
    func_0x1806aa960(pU64_6,_Str,sz_2);
    pU64_6[sz_2] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x5ef4) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x5ef4) = 1;
      *(uint32_t *)(lVal_5 + 0x5eec) = 0xa1233a33;
      *(uint16_t *)(lVal_5 + 0x5ef0) = 0x137;
      func_0x180673140(&LAB_1801b9a40);
    }
    pU64_9 = local_50;
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint *)(lVal_5 + 0x5eec);
    if (*(char *)(lVal_5 + 0x5ef1) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0xd54d5575;
      *(byte *)(lVal_5 + 0x5ef0) = *(byte *)(lVal_5 + 0x5ef0) ^ 0x37;
      *(uint8_t *)(lVal_5 + 0x5ef1) = 0;
    }
    local_78 = ZEXT816(0);
    sz_2 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_2) {
      uVal_8 = 0xf;
      if (0xf < sz_2) {
        uVal_4 = sz_2 | 0xf;
        uVal_8 = 0x16;
        if (0x16 < uVal_4) {
          uVal_8 = uVal_4;
        }
        if (uVal_4 < 0xfff) {
          local_41 = 1;
          pU64_7 = (uint8_t *)func_0x180672de0(uVal_8 + 1);
        }
        else {
          local_41 = 1;
          lVal_5 = func_0x180672de0(uVal_8 + 0x28);
          pU64_7 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_7 + -8) = lVal_5;
        }
        local_78._0_8_ = pU64_7;
        pU64_9 = local_50;
      }
      local_68._0_8_ = sz_2;
      local_68._8_8_ = uVal_8;
      func_0x1806aa960(pU64_7,_Str_00,sz_2);
      pU64_7[sz_2] = 0;
      func_0x1801d3a80(local_a0,local_78,local_98,pU64_9,0,local_e0,0);
      if (0xf < (uint64_t)local_68._8_8_) {
        uVal_8 = local_68._8_8_ + 1;
        lVal_5 = local_78._0_8_;
        if (0xfff < uVal_8) {
          lVal_5 = *(int64_t *)(local_78._0_8_ + -8);
          if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_5)) goto LAB_18018cc2e;
          uVal_8 = local_68._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_8);
      }
      pU64_9 = local_a0;
      if (0xf < (uint64_t)local_88._8_8_) {
        uVal_8 = local_88._8_8_ + 1;
        lVal_5 = local_98._0_8_;
        if (0xfff < uVal_8) {
          lVal_5 = *(int64_t *)(local_98._0_8_ + -8);
          if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_5)) goto LAB_18018cc2e;
          uVal_8 = local_88._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_8);
      }
      return pU64_9;
    }
  }
  local_41 = 1;
  func_0x18007ba70();
LAB_18018cc2e:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18018cc30
void Unwind_18018cc30(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x70);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x38));
    *(uint64_t *)(param_2 + 0x70) = 0;
  }
  return;
}

// Unwind@18018cc80
void Unwind_18018cc80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18018ccc0
void Unwind_18018ccc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18018cd00
void Unwind_18018cd00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  *(uint8_t *)(param_2 + 0xd7) = 0;
  return;
}

// Unwind@18018cd40
void Unwind_18018cd40(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0xd7);
  func_0x180001e70(param_2 + 0x80);
  *(uint8_t *)(param_2 + 0xd6) = uVal_1;
  return;
}

// Unwind@18018cd80
void Unwind_18018cd80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0xd6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x70), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x38));
    *(uint64_t *)(param_2 + 0x70) = 0;
  }
  return;
}

// Unwind@18018cdd0
void Unwind_18018cdd0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  func_0x1800822d0(*(uint64_t *)(param_2 + 200));
  pU64_1 = *(uint64_t **)(param_2 + 0x78);
  *pU64_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(pU64_1 + 0x12);
  func_0x1801c49a0(pU64_1);
  return;
}

// func_0x18018ce30
char func_0x18018ce30(int64_t param_1)
{
  return (*(int *)(param_1 + 200) == 1) * '\x03' + '\x03';
}

// func_0x18018ce50
void func_0x18018ce50(uint64_t *param_1)
{
  *param_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(param_1 + 0x16);
  *param_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(param_1 + 0x12);
  func_0x1801c49a0(param_1);
  return;
}

// func_0x18018cea0
void func_0x18018cea0(int64_t *param_1)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint32_t uVal_6;
  float fVal_7;
  float fVal_8;
  float fVal_9;
  uint8_t auArr_10 [16];
  uint8_t auStack_d8 [32];
  uint32_t local_b8;
  int64_t local_b0;
  uint64_t local_a8;
  float local_a0;
  uint16_t local_98;
  float local_90;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  uint64_t local_60;
  
  local_60 = DAT_18083cf40 ^ (uint64_t)auStack_d8;
  func_0x1801348a0(param_1,&local_68,*(uint32_t *)(param_1 + 0x10),
                *(uint32_t *)((int64_t)param_1 + 0x84));
  (**(func_ptr_t *)(*param_1 + 0x148))(param_1,&local_70);
  fVal_7 = *(float *)((int64_t)param_1 + 0x13c) * *(float *)(param_1 + 0x28);
  if (*(char *)((int64_t)param_1 + 0x11c) == '\x01') {
    fVal_8 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x24);
    if (*(char *)((int64_t)param_1 + 0x134) != '\0') {
      local_a8 = (int64_t)param_1 + 0x124;
      local_b8 = *(uint32_t *)(param_1 + 0x27);
      local_b0 = (int64_t)param_1 + 0x10c;
      local_98 = 0xf;
      local_a0 = fVal_8;
      local_90 = fVal_7;
      func_0x1800d35b0(local_68,fStack_64,local_70,fStack_6c);
      goto LAB_18018d18f;
    }
    uVal_3 = func_0x1800cf950();
    func_0x180107830(uVal_3,2,0,0);
    lVal_1 = (int64_t)param_1 + 0x124;
    fStack_78 = local_70 + local_68;
    fVal_7 = fStack_64 + fVal_8;
    fStack_74 = fVal_7;
    func_0x1800d2a00(&local_80,lVal_1,*(uint32_t *)(param_1 + 0x26));
    local_80 = local_68;
    auArr_10 = insertps(ZEXT416((uint)fVal_8),fStack_6c,0x10);
    fVal_9 = auArr_10._0_4_ + local_68;
    fStack_74 = auArr_10._4_4_ + fStack_64;
    fStack_7c = fVal_7;
    fStack_78 = fVal_9;
    func_0x1800d2a00(&local_80,lVal_1,*(uint32_t *)(param_1 + 0x26));
    fStack_78 = local_70 + local_68;
    fStack_74 = fStack_6c + fStack_64;
    local_80 = fStack_78 - fVal_8;
    fStack_7c = fVal_7;
    func_0x1800d2a00(&local_80,lVal_1,*(uint32_t *)(param_1 + 0x26));
    fStack_78 = (local_70 + local_68) - fVal_8;
    fStack_7c = (fStack_6c + fStack_64) - fVal_8;
    auArr_10._4_4_ = fStack_6c + fStack_64;
    auArr_10._0_4_ = local_70 + local_68;
    auArr_10._8_8_ = 0;
    uVal_3 = extractps(auArr_10,1);
    fStack_74 = (float)uVal_3;
    local_70 = (float)((uint64_t)uVal_3 >> 0x20);
    local_80 = fVal_9;
    func_0x1800d2a00(&local_80,lVal_1,*(uint32_t *)(param_1 + 0x26));
    uVal_6 = *(uint32_t *)(param_1 + 0x23);
    fStack_78 = (local_70 + local_68) - fVal_8;
    fStack_74 = (fStack_6c + fStack_64) - fVal_8;
    local_80 = fVal_9;
    fStack_7c = fVal_7;
  }
  else {
    if (*(char *)((int64_t)param_1 + 0x134) != '\0') {
      local_b8 = *(uint32_t *)(param_1 + 0x27);
      local_b0 = (int64_t)param_1 + 0x10c;
      local_a8 = CONCAT71(local_a8._1_7_,0xf);
      local_a0 = fVal_7;
      func_0x1800d2d50(local_68,fStack_64,local_70,fStack_6c);
      goto LAB_18018d18f;
    }
    uVal_3 = func_0x1800cf950();
    func_0x180107830(uVal_3,2,0,0);
    uVal_6 = *(uint32_t *)(param_1 + 0x23);
    fStack_78 = local_70 + local_68;
    fStack_74 = fStack_6c + fStack_64;
    local_80 = local_68;
    fStack_7c = fStack_64;
  }
  func_0x1800d2a00(&local_80,(int64_t)param_1 + 0x10c,uVal_6);
  uVal_3 = func_0x1800cf970();
  uVal_4 = func_0x1800cf950();
  uVal_5 = func_0x1800cf960();
  func_0x18011b260(uVal_5,uVal_4,uVal_3);
LAB_18018d18f:
  if (DAT_18083cf40 == (local_60 ^ (uint64_t)auStack_d8)) {
    return;
  }
  func_0x180673080(local_60 ^ (uint64_t)auStack_d8);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x18018d1e0
uint64_t * func_0x18018d1e0(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t extraout_var;
  uint64_t *pU64_4;
  float fVal_5;
  float fVal_6;
  float fVal_7;
  uint8_t auStack_48 [32];
  _FILETIME local_28;
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  if (*(char *)(param_1 + 0xd1) == '\x01') {
    GetSystemTimeAsFileTime(&local_28);
    fVal_7 = DAT_1806b26b4;
    uVal_1 = ((int64_t)local_28 + 0xfe624e212ac18000U) / 10000 + 1;
    fVal_5 = (float)func_0x18068afa0((float)((int)uVal_1 + (int)(uVal_1 / 3000) * -3000) / DAT_1806b6510,
                                 DAT_1806b26b4);
    uVal_3 = DAT_1806aeae4;
    fVal_5 = fVal_5 / DAT_1806b6144;
    fVal_6 = (fVal_5 - (float)(int)fVal_5) * DAT_1806b2860;
    if ((uint)(int)fVal_5 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00018018d2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pU64_4 = (uint64_t *)
               (*(func_ptr_t )(&DAT_1806baf24 +
                         *(int *)(&DAT_1806baf24 + CONCAT44(extraout_var,(int)fVal_5) * 4)))
                         (DAT_1806aeae4);
      return pU64_4;
    }
    *(float *)param_2 = fVal_7;
    *(uint32_t *)((int64_t)param_2 + 4) = uVal_3;
    *(float *)(param_2 + 1) = fVal_6 + fVal_7;
  }
  else {
    *param_2 = *(uint64_t *)(param_1 + 0xd4);
    *(uint32_t *)(param_2 + 1) = *(uint32_t *)(param_1 + 0xdc);
    fVal_7 = *(float *)(param_1 + 0xe0);
  }
  *(float *)((int64_t)param_2 + 0xc) = fVal_7;
  if (DAT_18083cf40 == (local_20 ^ (uint64_t)auStack_48)) {
    return param_2;
  }
  func_0x180673080(local_20 ^ (uint64_t)auStack_48);
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_4 = (uint64_t *)(*fnPtr_2)();
  return pU64_4;
}

// func_0x18018d390
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18018d390(int64_t *param_1)
{
  uint32_t uVal_1;
  uint8_t uVal_2;
  int iVal_3;
  uint64_t uVal_4;
  uint32_t extraout_var;
  uint64_t uVal_5;
  int64_t lVal_6;
  float fVal_7;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  float fVal_10;
  int64_t local_a0 [3];
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  _FILETIME local_70;
  float local_68;
  float local_64;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  (**(func_ptr_t *)(*param_1 + 0x160))(param_1,local_a0);
  func_0x1801348a0(param_1,&local_70,*(uint32_t *)(param_1 + 0x10),
                *(uint32_t *)((int64_t)param_1 + 0x84));
  (**(func_ptr_t *)(*param_1 + 0x148))(param_1,&local_78);
  fVal_10 = (float)local_70.dwLowDateTime;
  fVal_7 = (float)local_70.dwHighDateTime;
  auArr_8._0_8_ = func_0x1800cd3b0(local_a0,*(uint32_t *)(param_1 + 0x28),
                               (*(int *)(param_1 + 0x19) == 1) * '\x03' + '\x03');
  auArr_8._8_4_ = extraout_XMM0_Dc;
  auArr_8._12_4_ = extraout_XMM0_Dd;
  uVal_4 = func_0x1800cfa00(*(uint32_t *)(param_1 + 0x28),
                        (*(int *)(param_1 + 0x19) == 1) * '\x03' + '\x03');
  auArr_9._8_4_ = extraout_XMM0_Dc_00;
  auArr_9._0_8_ = uVal_4;
  auArr_9._12_4_ = extraout_XMM0_Dd_00;
  auArr_9 = insertps(auArr_8,auArr_9,0x10);
  local_80 = CONCAT44(auArr_9._4_4_ * _UNK_1806b6544 +
                      (float)((uint64_t)local_78 >> 0x20) * DAT_1806b28a0._4_4_ + fVal_7,
                      auArr_9._0_4_ * _DAT_1806b6540 +
                      (float)local_78 * (float)DAT_1806b28a0 + fVal_10);
  if (*(char *)(param_1 + 0x21) == '\x01') {
    func_0x18018cea0(param_1);
  }
  uVal_2 = *(uint8_t *)(param_1 + 0x1a);
  iVal_3 = *(int *)(param_1 + 0x19);
  uVal_1 = *(uint32_t *)(param_1 + 0x28);
  if (*(char *)((int64_t)param_1 + 0xd1) == '\x01') {
    GetSystemTimeAsFileTime(&local_70);
    fVal_10 = DAT_1806b26b4;
    uVal_5 = ((int64_t)local_70 + 0xfe624e212ac18000U) / 10000 + 1;
    fVal_7 = (float)func_0x18068afa0((float)((int)uVal_5 + (int)(uVal_5 / 3000) * -3000) / DAT_1806b6510,
                                 DAT_1806b26b4);
    fVal_7 = fVal_7 / DAT_1806b6144;
    local_68 = (fVal_7 - (float)(int)fVal_7) * DAT_1806b2860 + fVal_10;
    if ((uint)(int)fVal_7 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00018018d565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(func_ptr_t )(&DAT_1806baf38 + *(int *)(&DAT_1806baf38 + CONCAT44(extraout_var,(int)fVal_7) * 4)))
                (DAT_1806aeae4);
      return;
    }
    local_70.dwHighDateTime = DAT_1806aeae4;
    local_70.dwLowDateTime = (DWORD)fVal_10;
  }
  else {
    local_70 = *(_FILETIME *)((int64_t)param_1 + 0xd4);
    local_68 = *(float *)((int64_t)param_1 + 0xdc);
    fVal_10 = *(float *)(param_1 + 0x1c);
  }
  local_64 = fVal_10;
  func_0x1800d00e0(&local_80,local_a0,&local_70,uVal_1,0x3f800000,(iVal_3 == 1) * '\x03' + '\x03',uVal_2);
  if (0xf < local_88) {
    uVal_5 = local_88 + 1;
    lVal_6 = local_a0[0];
    if (0xfff < uVal_5) {
      lVal_6 = *(int64_t *)(local_a0[0] + -8);
      if (0x1f < (uint64_t)((local_a0[0] + -8) - lVal_6)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = local_88 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
  }
  return;
}

// Unwind@18018d680
void Unwind_18018d680(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x38);
  return;
}

// func_0x18018d6d0
float * func_0x18018d6d0(int64_t *param_1,float *param_2)
{
  int iVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  float fVal_4;
  float fVal_5;
  float fVal_6;
  float fVal_7;
  int64_t local_70 [3];
  uint64_t local_58;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  fVal_6 = *(float *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x21) == '\0') {
    fVal_7 = 0.0;
  }
  else {
    fVal_7 = *(float *)((int64_t)param_1 + 0x13c) * fVal_6;
  }
  iVal_1 = *(int *)(param_1 + 0x19);
  (**(func_ptr_t *)(*param_1 + 0x160))(param_1,local_70);
  fVal_4 = (float)func_0x1800cd3b0(local_70,fVal_6,(iVal_1 == 1) * '\x03' + '\x03');
  fVal_5 = (float)func_0x1800cfa00(*(uint32_t *)(param_1 + 0x28),
                               (*(int *)(param_1 + 0x19) == 1) * '\x03' + '\x03');
  fVal_6 = fVal_4 + fVal_7;
  if (fVal_4 + fVal_7 <= DAT_1806b6550) {
    fVal_6 = DAT_1806b6550;
  }
  *param_2 = fVal_6;
  param_2[1] = fVal_5 + fVal_7;
  if (0xf < local_58) {
    uVal_2 = local_58 + 1;
    lVal_3 = local_70[0];
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(local_70[0] + -8);
      if (0x1f < (uint64_t)((local_70[0] + -8) - lVal_3)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = local_58 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  return param_2;
}

// Unwind@18018d7e0
void Unwind_18018d7e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// func_0x18018d820
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18018d820(uint64_t *param_1)
{
  char *fnPtr_1;
  uint *pU64_2;
  uint8_t (*_Str)[16];
  uint64_t *_Str_00;
  uint32_t uVal_3;
  func_ptr_t fnPtr_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint64_t uVal_9;
  uint64_t *pU64_10;
  size_t sz_11;
  uint64_t uVal_12;
  uint64_t ***ptr3_U64_13;
  int64_t lVal_14;
  uint64_t uVal_15;
  uint64_t *pU64_16;
  uint64_t ****ptr4_U64_17;
  uint8_t *pU64_18;
  uint64_t ****ptr4_U64_19;
  uint8_t *pU64_20;
  uint8_t uVal_21;
  uint64_t uVal_22;
  uint uVal_24;
  uint uVal_25;
  uint uVal_26;
  uint8_t auArr_23 [16];
  uint8_t ***ptr3_U64_27;
  uint in_stack_fffffffffffffe18;
  uint8_t **local_1c8;
  uint64_t *local_1c0;
  uint8_t ***local_190;
  uint8_t **local_188;
  uint64_t *local_180;
  uint8_t ***local_150;
  uint8_t **local_148;
  uint64_t *local_140;
  uint8_t ***local_110;
  uint8_t local_108 [56];
  uint64_t local_d0;
  uint64_t local_c8;
  uint16_t uStack_c0;
  uint32_t local_be;
  uint8_t uStack_ba;
  uint8_t uStack_b9;
  uint16_t uStack_b8;
  uint32_t uStack_b6;
  uint32_t uStack_b2;
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint64_t ****local_88;
  undefined7 uStack_80;
  uint8_t uStack_79;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint16_t uStack_70;
  uint16_t uStack_6e;
  uint16_t uStack_6c;
  uint16_t uStack_6a;
  uint16_t uStack_68;
  uint16_t uStack_66;
  uint16_t uStack_64;
  uint16_t uStack_62;
  uint16_t uStack_60;
  uint16_t uStack_5e;
  uint16_t uStack_5c;
  uint64_t *local_58;
  uint8_t local_50;
  uint8_t local_4f;
  uint8_t local_4e;
  uint8_t local_4d;
  uint8_t local_4c;
  uint8_t local_4b;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_88 = (uint64_t ****)_DAT_1806ba267;
  uStack_80 = (undefined7)_UNK_1806ba26f;
  uStack_79 = 0x6a;
  uStack_78 = 0x608df9a3;
  uStack_74 = CONCAT13(uStack_74._3_1_,0x51e4a8);
  local_58 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x60e8) == '\0') {
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_14 + 0x60e8) = 1;
    func_0x18007d3c0(lVal_14 + 0x60cd,&local_88);
    func_0x180673140(&LAB_1801b9f90);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x60cd);
  func_0x1801c0b00(fnPtr_1);
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6e = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  local_88 = (uint64_t ****)0x0;
  uStack_80 = 0;
  uStack_79 = 0;
  sz_11 = strlen(fnPtr_1);
  if ((int64_t)sz_11 < 0) {
    func_0x18007ba70();
LAB_18018e9c2:
    local_49 = 1;
    func_0x18007ba70();
LAB_18018e9cf:
    local_4e = 1;
    func_0x18007ba70();
LAB_18018e9dc:
    local_4b = 1;
    func_0x18007ba70();
LAB_18018e9e9:
    local_4a = 1;
    func_0x18007ba70();
LAB_18018e9f6:
    local_4d = 1;
    func_0x18007ba70();
LAB_18018ea03:
    local_4c = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_11 < 0x10) {
      ptr4_U64_19 = &local_88;
      uVal_22 = 0xf;
    }
    else {
      uVal_12 = sz_11 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_12) {
        uVal_22 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_22 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_22 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint32_t)sz_11;
    uStack_74 = (uint32_t)(sz_11 >> 0x20);
    uStack_70 = (uint16_t)uVal_22;
    uStack_6e = (uint16_t)(uVal_22 >> 0x10);
    uStack_6c = (uint16_t)(uVal_22 >> 0x20);
    uStack_6a = (uint16_t)(uVal_22 >> 0x30);
    func_0x1806aa960(ptr4_U64_19,fnPtr_1,sz_11);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_11) = 0;
    ptr4_U64_19 = &local_88;
    func_0x1801c2ba0(local_58,0,0,ptr4_U64_19);
    uVal_22 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70)));
    if (0xf < uVal_22) {
      uVal_12 = uVal_22 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_12) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18018e9bb;
        uVal_12 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_12);
    }
    *local_58 = &PTR_LAB_1806b80e0;
    *(uint32_t *)(local_58 + 0x10) = 3;
    pU64_20 = (uint8_t *)((int64_t)local_58 + 0x84);
    *(uint16_t *)((int64_t)local_58 + 0x84) = 0;
    local_58[0x11] = 0x1770ffffffff;
    local_d0 = 0;
    if (DAT_18083f7c0 == (uint64_t *)0x0) {
      uVal_21 = 0;
    }
    else {
      local_d0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_108);
      uVal_21 = *pU64_20;
    }
    uStack_68 = _UNK_1806ba29e;
    uStack_66 = (uint16_t)_UNK_1806ba2a0;
    uStack_64 = (uint16_t)((uint)_UNK_1806ba2a0 >> 0x10);
    uStack_62 = (uint16_t)_UNK_1806ba2a4;
    uStack_60 = (uint16_t)((uint)_UNK_1806ba2a4 >> 0x10);
    uStack_78 = _DAT_1806ba28e;
    uStack_74 = _UNK_1806ba292;
    uStack_70 = _UNK_1806ba296;
    uStack_6e = _DAT_1806ba298;
    uStack_6c = _UNK_1806ba29a;
    uStack_6a = _UNK_1806ba29c;
    local_88 = _DAT_1806ba27e;
    uStack_80 = (undefined7)_UNK_1806ba286;
    uStack_79 = (uint8_t)((uint64_t)_UNK_1806ba286 >> 0x38);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6114) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x6114) = 1;
      func_0x18012b7b0(lVal_14 + 0x60e9,&local_88);
      func_0x180673140(&LAB_1801b9fc0);
    }
    uVal_8 = _UNK_1806b4e8c;
    uVal_7 = _UNK_1806b4e88;
    uVal_6 = _UNK_1806b4e84;
    uVal_5 = _DAT_1806b4e80;
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_14 + 0x60e9);
    if (*(char *)(lVal_14 + 0x6113) == '\x01') {
      uVal_24 = *(uint *)(lVal_14 + 0x60ed) ^ _UNK_1806b4e84;
      uVal_25 = *(uint *)(lVal_14 + 0x60f1) ^ _UNK_1806b4e88;
      uVal_26 = *(uint *)(lVal_14 + 0x60f5) ^ _UNK_1806b4e8c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b4e80;
      *(uint *)(lVal_14 + 0x60ed) = uVal_24;
      *(uint *)(lVal_14 + 0x60f1) = uVal_25;
      *(uint *)(lVal_14 + 0x60f5) = uVal_26;
      *(uint *)(lVal_14 + 0x60f9) = *(uint *)(lVal_14 + 0x60f9) ^ uVal_5;
      *(uint *)(lVal_14 + 0x60fd) = *(uint *)(lVal_14 + 0x60fd) ^ uVal_6;
      *(uint *)(lVal_14 + 0x6101) = *(uint *)(lVal_14 + 0x6101) ^ uVal_7;
      *(uint *)(lVal_14 + 0x6105) = *(uint *)(lVal_14 + 0x6105) ^ uVal_8;
      *(uint64_t *)(lVal_14 + 0x6109) = *(uint64_t *)(lVal_14 + 0x6109) ^ SUB168(_DAT_1806b63f0,0);
      *(byte *)(lVal_14 + 0x6111) = *(byte *)(lVal_14 + 0x6111) ^ 0x75;
      *(byte *)(lVal_14 + 0x6112) = *(byte *)(lVal_14 + 0x6112) ^ 0x19;
      *(uint8_t *)(lVal_14 + 0x6113) = 0;
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_2);
    if ((int64_t)sz_11 < 0) goto LAB_18018e9c2;
    if (sz_11 < 0x10) {
      pU64_18 = local_a8;
      uVal_22 = 0xf;
    }
    else {
      uVal_12 = sz_11 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_12) {
        uVal_22 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_49 = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_49 = 1;
        lVal_14 = func_0x180672de0(uVal_22 + 0x28);
        pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_14;
      }
      local_a8._0_8_ = pU64_18;
    }
    local_98._8_8_ = uVal_22;
    local_98._0_8_ = sz_11;
    func_0x1806aa960(pU64_18,pU64_2,sz_11);
    pU64_18[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6130) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x6130) = 1;
      uVal_9 = _UNK_1806b6568;
      *(uint64_t *)(lVal_14 + 0x6120) = _DAT_1806b6560;
      *(uint64_t *)(lVal_14 + 0x6128) = uVal_9;
      func_0x180673140(&LAB_1801b9ff0);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_14 + 0x6120);
    if (*(char *)(lVal_14 + 0x612f) == '\x01') {
      uVal_3 = *(uint32_t *)(lVal_14 + 0x6128);
      auArr_23 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_3 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_3 >> 0x10),uVal_3)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_14 + 0x612d) >> 8)),
                                                 (char)((uint)uVal_3 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_14 + 0x612d),(char)uVal_3)
                                       )),_DAT_1806ae110);
      auArr_23._8_8_ =
           auArr_23._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_14 + 0x612c) << 0x20;
      auArr_23 = pblendw(auArr_23,*_Str,0xf);
      *_Str = auArr_23 ^ _DAT_1806b5220;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_79 = 0;
    sz_11 = strlen((char *)_Str);
    if ((int64_t)sz_11 < 0) goto LAB_18018e9cf;
    uVal_22 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_12) {
        uVal_22 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4e = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_22 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_4e = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_22 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint32_t)sz_11;
    uStack_74 = (uint32_t)(sz_11 >> 0x20);
    uStack_70 = (uint16_t)uVal_22;
    uStack_6e = (uint16_t)(uVal_22 >> 0x10);
    uStack_6c = (uint16_t)(uVal_22 >> 0x20);
    uStack_6a = (uint16_t)(uVal_22 >> 0x30);
    func_0x1806aa960(ptr4_U64_19,_Str,sz_11);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_11) = 0;
    in_stack_fffffffffffffe18 = in_stack_fffffffffffffe18 & 0xffffff00;
    ptr4_U64_19 = &local_88;
    pU64_18 = local_a8;
    func_0x1801ccd70(local_58,ptr4_U64_19,pU64_18,pU64_20,uVal_21,local_108,in_stack_fffffffffffffe18);
    uVal_22 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70)));
    if (0xf < uVal_22) {
      uVal_12 = uVal_22 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_12) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18018e9bb;
        uVal_12 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_12);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_22 = local_98._8_8_ + 1;
      lVal_14 = local_a8._0_8_;
      if (0xfff < uVal_22) {
        lVal_14 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_14)) goto LAB_18018e9bb;
        uVal_22 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_22);
    }
    local_1c8 = &PTR_LAB_1806bab50;
    local_1c0 = local_58;
    local_190 = &local_1c8;
    uVal_21 = *(uint8_t *)((int64_t)local_58 + 0x85);
    uStack_68 = _UNK_1806ba2c8;
    uStack_66 = (uint16_t)_UNK_1806ba2ca;
    uStack_64 = (uint16_t)((uint)_UNK_1806ba2ca >> 0x10);
    uStack_62 = (uint16_t)_UNK_1806ba2ce;
    uStack_60 = (uint16_t)((uint)_UNK_1806ba2ce >> 0x10);
    uStack_5e = (uint16_t)_UNK_1806ba2d2;
    uStack_5c = (uint16_t)((uint)_UNK_1806ba2d2 >> 0x10);
    uStack_78 = _DAT_1806ba2b8;
    uStack_74 = _UNK_1806ba2bc;
    uStack_70 = (uint16_t)_UNK_1806ba2c0;
    uStack_6e = (uint16_t)((uint)_UNK_1806ba2c0 >> 0x10);
    uStack_6c = _UNK_1806ba2c4;
    uStack_6a = _DAT_1806ba2c6;
    local_88 = _DAT_1806ba2a8;
    uStack_80 = (undefined7)_UNK_1806ba2b0;
    uStack_79 = (uint8_t)((uint64_t)_UNK_1806ba2b0 >> 0x38);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6160) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x6160) = 1;
      func_0x1801ba020(lVal_14 + 0x6131,&local_88);
      func_0x180673140(&LAB_1801ba170);
    }
    uVal_8 = _UNK_1806b2d6c;
    uVal_7 = _UNK_1806b2d68;
    uVal_6 = _UNK_1806b2d64;
    uVal_5 = _DAT_1806b2d60;
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_14 + 0x6131);
    if (*(char *)(lVal_14 + 0x615f) == '\x01') {
      uVal_24 = *(uint *)(lVal_14 + 0x6135) ^ _UNK_1806b2d64;
      uVal_25 = *(uint *)(lVal_14 + 0x6139) ^ _UNK_1806b2d68;
      uVal_26 = *(uint *)(lVal_14 + 0x613d) ^ _UNK_1806b2d6c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b2d60;
      *(uint *)(lVal_14 + 0x6135) = uVal_24;
      *(uint *)(lVal_14 + 0x6139) = uVal_25;
      *(uint *)(lVal_14 + 0x613d) = uVal_26;
      *(uint *)(lVal_14 + 0x6141) = *(uint *)(lVal_14 + 0x6141) ^ uVal_5;
      *(uint *)(lVal_14 + 0x6145) = *(uint *)(lVal_14 + 0x6145) ^ uVal_6;
      *(uint *)(lVal_14 + 0x6149) = *(uint *)(lVal_14 + 0x6149) ^ uVal_7;
      *(uint *)(lVal_14 + 0x614d) = *(uint *)(lVal_14 + 0x614d) ^ uVal_8;
      *(uint64_t *)(lVal_14 + 0x6151) = *(uint64_t *)(lVal_14 + 0x6151) ^ SUB168(_DAT_1806b6410,0);
      *(byte *)(lVal_14 + 0x6159) = *(byte *)(lVal_14 + 0x6159) ^ 0x75;
      *(byte *)(lVal_14 + 0x615a) = *(byte *)(lVal_14 + 0x615a) ^ 0x55;
      *(byte *)(lVal_14 + 0x615b) = *(byte *)(lVal_14 + 0x615b) ^ 0x4d;
      *(byte *)(lVal_14 + 0x615c) = *(byte *)(lVal_14 + 0x615c) ^ 0xd5;
      *(byte *)(lVal_14 + 0x615d) = *(byte *)(lVal_14 + 0x615d) ^ 0x37;
      *(byte *)(lVal_14 + 0x615e) = *(byte *)(lVal_14 + 0x615e) ^ 0xd7;
      *(uint8_t *)(lVal_14 + 0x615f) = 0;
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_2);
    if ((int64_t)sz_11 < 0) goto LAB_18018e9dc;
    uVal_22 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_12) {
        uVal_22 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4b = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_4b = 1;
        lVal_14 = func_0x180672de0(uVal_22 + 0x28);
        pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_14;
      }
      local_a8._0_8_ = pU64_18;
    }
    local_98._8_8_ = uVal_22;
    local_98._0_8_ = sz_11;
    func_0x1806aa960(pU64_18,pU64_2,sz_11);
    pU64_18[sz_11] = 0;
    uStack_b8 = _UNK_1806ba2e6;
    uStack_b6 = _UNK_1806ba2e8;
    uStack_b2 = _UNK_1806ba2ec;
    local_c8 = _DAT_1806ba2d6;
    uStack_c0 = _UNK_1806ba2de;
    local_be = _DAT_1806ba2e0;
    uStack_ba = (uint8_t)_UNK_1806ba2e4;
    uStack_b9 = (uint8_t)((ushort)_UNK_1806ba2e4 >> 8);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x617c) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x617c) = 1;
      func_0x1800d9840(lVal_14 + 0x6161,&local_c8);
      func_0x180673140(&LAB_1801ba1a0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x6161);
    func_0x1801c0b50(fnPtr_1);
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_79 = 0;
    sz_11 = strlen(fnPtr_1);
    if ((int64_t)sz_11 < 0) goto LAB_18018e9e9;
    uVal_22 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_12) {
        uVal_22 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4a = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_22 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_4a = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_22 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    pU64_16 = local_58;
    lVal_14 = (int64_t)local_58 + 0x85;
    uStack_78 = (uint32_t)sz_11;
    uStack_74 = (uint32_t)(sz_11 >> 0x20);
    uStack_70 = (uint16_t)uVal_22;
    uStack_6e = (uint16_t)(uVal_22 >> 0x10);
    uStack_6c = (uint16_t)(uVal_22 >> 0x20);
    uStack_6a = (uint16_t)(uVal_22 >> 0x30);
    func_0x1806aa960(ptr4_U64_19,fnPtr_1,sz_11);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_11) = 0;
    ptr3_U64_27 = &local_1c8;
    ptr4_U64_19 = &local_88;
    pU64_20 = local_a8;
    func_0x1801ccd70(pU64_16,ptr4_U64_19,pU64_20,lVal_14,uVal_21,ptr3_U64_27,
                  in_stack_fffffffffffffe18 & 0xffffff00);
    uVal_22 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70)));
    if (0xf < uVal_22) {
      uVal_12 = uVal_22 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_12) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18018e9bb;
        uVal_12 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_12);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_22 = local_98._8_8_ + 1;
      lVal_14 = local_a8._0_8_;
      if (0xfff < uVal_22) {
        lVal_14 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_14)) goto LAB_18018e9bb;
        uVal_22 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_22);
    }
    local_188 = &PTR_LAB_1806badc0;
    local_180 = local_58;
    local_150 = &local_188;
    uVal_3 = *(uint32_t *)(local_58 + 0x10);
    uStack_68 = (uint16_t)_UNK_1806ba310;
    uStack_66 = (uint16_t)((uint)_UNK_1806ba310 >> 0x10);
    uStack_64 = (uint16_t)_UNK_1806ba314;
    uStack_62 = (uint16_t)((uint)_UNK_1806ba314 >> 0x10);
    uStack_60 = (uint16_t)_UNK_1806ba318;
    uStack_5e = (uint16_t)((uint)_UNK_1806ba318 >> 0x10);
    uStack_78 = _DAT_1806ba300;
    uStack_74 = _UNK_1806ba304;
    uStack_70 = (uint16_t)_UNK_1806ba308;
    uStack_6e = (uint16_t)((uint)_UNK_1806ba308 >> 0x10);
    uStack_6c = (uint16_t)_DAT_1806ba30c;
    uStack_6a = (uint16_t)((uint)_DAT_1806ba30c >> 0x10);
    local_88 = _DAT_1806ba2f0;
    uStack_80 = (undefined7)_UNK_1806ba2f8;
    uStack_79 = (uint8_t)((uint64_t)_UNK_1806ba2f8 >> 0x38);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x61ac) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x61ac) = 1;
      func_0x1801b1b20(lVal_14 + 0x617d,&local_88);
      func_0x180673140(&LAB_1801ba1d0);
    }
    uVal_8 = _UNK_1806b2cac;
    uVal_7 = _UNK_1806b2ca8;
    uVal_6 = _UNK_1806b2ca4;
    uVal_5 = _DAT_1806b2ca0;
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_14 + 0x617d);
    if (*(char *)(lVal_14 + 0x61a9) == '\x01') {
      uVal_24 = *(uint *)(lVal_14 + 0x6181) ^ _UNK_1806b2ca4;
      uVal_25 = *(uint *)(lVal_14 + 0x6185) ^ _UNK_1806b2ca8;
      uVal_26 = *(uint *)(lVal_14 + 0x6189) ^ _UNK_1806b2cac;
      *pU64_2 = *pU64_2 ^ _DAT_1806b2ca0;
      *(uint *)(lVal_14 + 0x6181) = uVal_24;
      *(uint *)(lVal_14 + 0x6185) = uVal_25;
      *(uint *)(lVal_14 + 0x6189) = uVal_26;
      *(uint *)(lVal_14 + 0x618d) = *(uint *)(lVal_14 + 0x618d) ^ uVal_5;
      *(uint *)(lVal_14 + 0x6191) = *(uint *)(lVal_14 + 0x6191) ^ uVal_6;
      *(uint *)(lVal_14 + 0x6195) = *(uint *)(lVal_14 + 0x6195) ^ uVal_7;
      *(uint *)(lVal_14 + 0x6199) = *(uint *)(lVal_14 + 0x6199) ^ uVal_8;
      *(uint64_t *)(lVal_14 + 0x619d) = *(uint64_t *)(lVal_14 + 0x619d) ^ SUB168(_DAT_1806b5c10,0);
      *(byte *)(lVal_14 + 0x61a5) = *(byte *)(lVal_14 + 0x61a5) ^ 0x73;
      *(byte *)(lVal_14 + 0x61a6) = *(byte *)(lVal_14 + 0x61a6) ^ 0x45;
      *(byte *)(lVal_14 + 24999) = *(byte *)(lVal_14 + 24999) ^ 0x7d;
      *(byte *)(lVal_14 + 25000) = *(byte *)(lVal_14 + 25000) ^ 199;
      *(uint8_t *)(lVal_14 + 0x61a9) = 0;
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_2);
    if ((int64_t)sz_11 < 0) goto LAB_18018e9f6;
    uVal_22 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_12) {
        uVal_22 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4d = 1;
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_4d = 1;
        lVal_14 = func_0x180672de0(uVal_22 + 0x28);
        pU64_20 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_14;
      }
      local_a8._0_8_ = pU64_20;
    }
    local_98._8_8_ = uVal_22;
    local_98._0_8_ = sz_11;
    func_0x1806aa960(pU64_20,pU64_2,sz_11);
    pU64_20[sz_11] = 0;
    local_c8 = _DAT_1806ba31c;
    uStack_c0 = (uint16_t)_UNK_1806ba324;
    local_be = (uint32_t)((uint64_t)_UNK_1806ba324 >> 0x10);
    uStack_ba = (uint8_t)((uint64_t)_UNK_1806ba324 >> 0x30);
    uStack_b9 = 0x8c;
    uStack_b8 = 0x2116;
    uStack_b6 = CONCAT31(uStack_b6._1_3_,0x7d);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x61c4) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x61c4) = 1;
      func_0x18007cb80(lVal_14 + 0x61ad,&local_c8);
      func_0x180673140(&LAB_1801ba200);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x61ad);
    func_0x1801c0b80(fnPtr_1);
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_79 = 0;
    sz_11 = strlen(fnPtr_1);
    if ((int64_t)sz_11 < 0) goto LAB_18018ea03;
    uVal_22 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_12) {
        uVal_22 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4c = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_22 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_4c = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_22 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    pU64_10 = local_58;
    pU64_16 = local_58 + 0x10;
    uStack_78 = (uint32_t)sz_11;
    uStack_74 = (uint32_t)(sz_11 >> 0x20);
    uStack_70 = (uint16_t)uVal_22;
    uStack_6e = (uint16_t)(uVal_22 >> 0x10);
    uStack_6c = (uint16_t)(uVal_22 >> 0x20);
    uStack_6a = (uint16_t)(uVal_22 >> 0x30);
    func_0x1806aa960(ptr4_U64_19,fnPtr_1,sz_11);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_11) = 0;
    uVal_12 = (uint64_t)ptr3_U64_27 & 0xffffffff00000000;
    ptr4_U64_19 = &local_88;
    pU64_20 = local_a8;
    func_0x1801ccff0(pU64_10,ptr4_U64_19,pU64_20,pU64_16,uVal_3,uVal_12,100,&local_188,0);
    uVal_22 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70)));
    if (0xf < uVal_22) {
      uVal_15 = uVal_22 + 1;
      ptr4_U64_17 = local_88;
      if (0xfff < uVal_15) {
        ptr4_U64_17 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18018e9bb;
        uVal_15 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_15);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_22 = local_98._8_8_ + 1;
      lVal_14 = local_a8._0_8_;
      if (0xfff < uVal_22) {
        lVal_14 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_14)) goto LAB_18018e9bb;
        uVal_22 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_22);
    }
    local_148 = &PTR_LAB_1806badf0;
    local_140 = local_58;
    local_110 = &local_148;
    uVal_3 = *(uint32_t *)((int64_t)local_58 + 0x8c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x61d8) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x61d8) = 1;
      *(uint8_t *)(lVal_14 + 0x61d4) = 1;
      *(uint64_t *)(lVal_14 + 0x61c8) = 0x1275dae821bb089;
      *(uint32_t *)(lVal_14 + 0x61d0) = 0xe50cbcb4;
      func_0x180673140(&LAB_1801ba230);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint64_t *)(lVal_14 + 0x61c8);
    if (*(char *)(lVal_14 + 0x61d4) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0x750729cbe569d1dd;
      *(uint *)(lVal_14 + 0x61d0) = *(uint *)(lVal_14 + 0x61d0) ^ 0xe569d1dd;
      *(uint8_t *)(lVal_14 + 0x61d4) = 0;
    }
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_79 = 0;
    sz_11 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_11) {
      uVal_22 = 0xf;
      if (0xf < sz_11) {
        uVal_15 = sz_11 | 0xf;
        uVal_22 = 0x16;
        if (0x16 < uVal_15) {
          uVal_22 = uVal_15;
        }
        if (uVal_15 < 0xfff) {
          local_50 = 1;
          ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_22 + 1);
          local_88 = ptr4_U64_19;
        }
        else {
          local_50 = 1;
          ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_22 + 0x28);
          ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
          ptr4_U64_19[-1] = ptr3_U64_13;
          local_88 = ptr4_U64_19;
        }
      }
      uStack_78 = (uint32_t)sz_11;
      uStack_74 = (uint32_t)(sz_11 >> 0x20);
      uStack_70 = (uint16_t)uVal_22;
      uStack_6e = (uint16_t)(uVal_22 >> 0x10);
      uStack_6c = (uint16_t)(uVal_22 >> 0x20);
      uStack_6a = (uint16_t)(uVal_22 >> 0x30);
      func_0x1806aa960(ptr4_U64_19,_Str_00,sz_11);
      *(uint8_t *)((int64_t)ptr4_U64_19 + sz_11) = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x61e4) == '\0') {
        lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_14 + 0x61e4) = 1;
        *(uint32_t *)(lVal_14 + 0x61dc) = 0x8004b889;
        *(uint16_t *)(lVal_14 + 0x61e0) = 0x1cb;
        func_0x180673140(&LAB_1801ba260);
      }
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint *)(lVal_14 + 0x61dc);
      if (*(char *)(lVal_14 + 0x61e1) == '\x01') {
        *pU64_2 = *pU64_2 ^ 0xe569d1dd;
        *(byte *)(lVal_14 + 0x61e0) = *(byte *)(lVal_14 + 0x61e0) ^ 0xcb;
        *(uint8_t *)(lVal_14 + 0x61e1) = 0;
      }
      local_a8 = (uint8_t  [16])0x0;
      sz_11 = strlen((char *)pU64_2);
      if (-1 < (int64_t)sz_11) {
        uVal_22 = 0xf;
        if (0xf < sz_11) {
          uVal_15 = sz_11 | 0xf;
          uVal_22 = 0x16;
          if (0x16 < uVal_15) {
            uVal_22 = uVal_15;
          }
          if (uVal_15 < 0xfff) {
            local_4f = 1;
            pU64_20 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
          }
          else {
            local_4f = 1;
            lVal_14 = func_0x180672de0(uVal_22 + 0x28);
            pU64_20 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_20 + -8) = lVal_14;
          }
          local_a8._0_8_ = pU64_20;
        }
        pU64_16 = local_58;
        lVal_14 = (int64_t)local_58 + 0x8c;
        local_98._0_8_ = sz_11;
        local_98._8_8_ = uVal_22;
        func_0x1806aa960(pU64_20,pU64_2,sz_11);
        pU64_20[sz_11] = 0;
        func_0x1801ccff0(pU64_16,local_a8,&local_88,lVal_14,uVal_3,uVal_12 & 0xffffffff00000000,24000,
                      &local_148,0);
        if (0xf < (uint64_t)local_98._8_8_) {
          uVal_22 = local_98._8_8_ + 1;
          lVal_14 = local_a8._0_8_;
          if (0xfff < uVal_22) {
            lVal_14 = *(int64_t *)(local_a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_14)) goto LAB_18018e9bb;
            uVal_22 = local_98._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_14,uVal_22);
        }
        uVal_22 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70)));
        if (0xf < uVal_22) {
          uVal_12 = uVal_22 + 1;
          ptr4_U64_19 = local_88;
          if (0xfff < uVal_12) {
            ptr4_U64_19 = (uint64_t ****)local_88[-1];
            if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19))) {
LAB_18018e9bb:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_12 = uVal_22 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_19,uVal_12);
        }
        return local_58;
      }
      goto LAB_18018ea1d;
    }
  }
  local_50 = 1;
  func_0x18007ba70();
LAB_18018ea1d:
  local_4f = 1;
  func_0x18007ba70();
  fnPtr_4 = (func_ptr_t )swi(3);
  pU64_16 = (uint64_t *)(*fnPtr_4)();
  return pU64_16;
}

// Unwind@18018ea30
void Unwind_18018ea30(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x148);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@18018ea90
void Unwind_18018ea90(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6114) = 0;
  *(uint8_t *)(param_2 + 0x1cf) = 1;
  return;
}

// Unwind@18018eae0
void Unwind_18018eae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@18018eb20
void Unwind_18018eb20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  *(uint8_t *)(param_2 + 0x1ca) = 0;
  return;
}

// Unwind@18018eb60
void Unwind_18018eb60(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1ca);
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x1cf) = uVal_1;
  return;
}

// Unwind@18018ebb0
void Unwind_18018ebb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1cf) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@18018ec10
void Unwind_18018ec10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  *(uint8_t *)(param_2 + 0x1ce) = 0;
  return;
}

// Unwind@18018ec50
void Unwind_18018ec50(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1ce);
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x1cd) = uVal_1;
  return;
}

// Unwind@18018eca0
void Unwind_18018eca0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1cd) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@18018ed00
void Unwind_18018ed00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  *(uint8_t *)(param_2 + 0x1cc) = 0;
  return;
}

// Unwind@18018ed40
void Unwind_18018ed40(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1cc);
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x1cb) = uVal_1;
  return;
}

// Unwind@18018ed90
void Unwind_18018ed90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1cb) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@18018edf0
void Unwind_18018edf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x1c9) = 0;
  return;
}

// Unwind@18018ee30
void Unwind_18018ee30(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1c9);
  func_0x180001e70(param_2 + 400);
  *(uint8_t *)(param_2 + 0x1c8) = uVal_1;
  return;
}

// Unwind@18018ee80
void Unwind_18018ee80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1c8) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@18018eee0
void Unwind_18018eee0(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x1c0));
  return;
}

// Unwind@18018ef20
void Unwind_18018ef20(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x60e8) = 0;
  return;
}

// Unwind@18018ef70
void Unwind_18018ef70(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6160) = 0;
  *(uint8_t *)(param_2 + 0x1cd) = 1;
  return;
}

// Unwind@18018efc0
void Unwind_18018efc0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x617c) = 0;
  *(uint8_t *)(param_2 + 0x1ce) = 1;
  return;
}

// Unwind@18018f010
void Unwind_18018f010(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x61ac) = 0;
  *(uint8_t *)(param_2 + 0x1cb) = 1;
  return;
}

// Unwind@18018f060
void Unwind_18018f060(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x61c4) = 0;
  *(uint8_t *)(param_2 + 0x1cc) = 1;
  return;
}

// Unwind@18018f360
void Unwind_18018f360(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6210) = 0;
  return;
}

// func_0x18018f470
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x18018f470(void)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t auStack_38 [32];
  _SYSTEMTIME local_18;
  uint64_t local_8;
  
  local_8 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  GetLocalTime(&local_18);
  if (DAT_18083cf40 == (local_8 ^ (uint64_t)auStack_38)) {
    return (uint64_t)
           (uint)((int)((uint)local_18.wHour * 1000 +
                        (int)((float)((uint)local_18.wMinute * 0x3c + (uint)local_18.wSecond) /
                             _DAT_1806b6570) + 18000) % 24000);
  }
  func_0x180673080(local_8 ^ (uint64_t)auStack_38);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_2 = (*fnPtr_1)();
  return uVal_2;
}

// func_0x18018f510
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18018f510(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint64_t *pU64_1;
  uint8_t *pU64_2;
  char *_Str_00;
  func_ptr_t fnPtr_3;
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  int64_t lVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  size_t sz_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  uint64_t *pU64_15;
  uint8_t *pU64_16;
  uint32_t *pU64_17;
  uint64_t uVal_18;
  uint8_t uVal_19;
  uint8_t local_138 [56];
  uint64_t local_100;
  uint8_t local_f8 [56];
  uint64_t local_c0;
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t local_88;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  undefined3 local_68;
  uint32_t uStack_65;
  uint32_t uStack_61;
  undefined5 uStack_5d;
  uint64_t *local_58;
  uint8_t local_4c;
  uint8_t local_4b;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = _DAT_1806ba365;
  uStack_94 = _UNK_1806ba369;
  uStack_90 = _UNK_1806ba36d;
  uStack_8c = _UNK_1806ba371;
  local_a8._4_4_ = _UNK_1806ba359;
  local_a8._0_4_ = _DAT_1806ba355;
  uStack_a0._0_4_ = _UNK_1806ba35d;
  uStack_a0._4_4_ = _UNK_1806ba361;
  local_b8._4_4_ = _UNK_1806ba349;
  local_b8._0_4_ = _DAT_1806ba345;
  uStack_b0._0_4_ = _UNK_1806ba34d;
  uStack_b0._4_4_ = _UNK_1806ba351;
  local_88 = 0x980bca4;
  local_58 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x6248) == '\0') {
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_14 + 0x6248) = 1;
    func_0x18012b270(lVal_14 + 0x6211,local_b8);
    func_0x180673140(&LAB_1801ba2f0);
  }
  uVal_11 = _UNK_1806b2c9c;
  uVal_10 = _UNK_1806b2c98;
  uVal_9 = _UNK_1806b2c94;
  uVal_8 = _DAT_1806b2c90;
  lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_14 + 0x6211);
  if (*(char *)(lVal_14 + 0x6245) == '\x01') {
    auArr_4._4_4_ = *(uint *)(lVal_14 + 0x6215) ^ _UNK_1806b2c94;
    auArr_4._0_4_ = *(uint *)*_Str ^ _DAT_1806b2c90;
    auArr_4._8_4_ = *(uint *)(lVal_14 + 0x6219) ^ _UNK_1806b2c98;
    auArr_4._12_4_ = *(uint *)(lVal_14 + 0x621d) ^ _UNK_1806b2c9c;
    *_Str = auArr_4;
    auArr_5._4_4_ = *(uint *)(lVal_14 + 0x6225) ^ uVal_9;
    auArr_5._0_4_ = *(uint *)(lVal_14 + 0x6221) ^ uVal_8;
    auArr_5._8_4_ = *(uint *)(lVal_14 + 0x6229) ^ uVal_10;
    auArr_5._12_4_ = *(uint *)(lVal_14 + 0x622d) ^ uVal_11;
    *(uint8_t (*)[16])(lVal_14 + 0x6221) = auArr_5;
    auArr_6._4_4_ = *(uint *)(lVal_14 + 0x6235) ^ uVal_9;
    auArr_6._0_4_ = *(uint *)(lVal_14 + 0x6231) ^ uVal_8;
    auArr_6._8_4_ = *(uint *)(lVal_14 + 0x6239) ^ uVal_10;
    auArr_6._12_4_ = *(uint *)(lVal_14 + 0x623d) ^ uVal_11;
    *(uint8_t (*)[16])(lVal_14 + 0x6231) = auArr_6;
    *(uint *)(lVal_14 + 0x6241) = *(uint *)(lVal_14 + 0x6241) ^ 0x9f9d9cf;
    *(uint8_t *)(lVal_14 + 0x6245) = 0;
  }
  _local_a8 = ZEXT816(0);
  _local_b8 = ZEXT816(0);
  sz_12 = strlen((char *)_Str);
  if ((int64_t)sz_12 < 0) {
    func_0x18007ba70();
LAB_18018fe4a:
    local_4b = 1;
    func_0x18007ba70();
LAB_18018fe57:
    local_4a = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_12 < 0x10) {
      pU64_16 = local_b8;
      uVal_18 = 0xf;
    }
    else {
      uVal_13 = sz_12 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_13) {
        uVal_18 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_14 = func_0x180672de0(uVal_18 + 0x28);
        pU64_16 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_14;
      }
      local_b8 = (uint8_t  [8])pU64_16;
    }
    local_a8 = (uint8_t  [8])sz_12;
    uStack_a0 = uVal_18;
    func_0x1806aa960(pU64_16,_Str,sz_12);
    pU64_16[sz_12] = 0;
    pU64_16 = local_b8;
    func_0x18014fe60(local_58,0,1,pU64_16);
    if (0xf < uStack_a0) {
      uVal_18 = uStack_a0 + 1;
      lVal_14 = (int64_t)local_b8;
      if (0xfff < uVal_18) {
        lVal_14 = *(int64_t *)((int64_t)local_b8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_14)) goto LAB_18018fe43;
        uVal_18 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_18);
    }
    *local_58 = &PTR_LAB_1806b8210;
    pU64_15 = local_58 + 0x29;
    *(uint32_t *)(local_58 + 0x29) = 0;
    local_100 = 0;
    if (DAT_18083f7c0 == (uint64_t *)0x0) {
      uVal_19 = 0;
    }
    else {
      local_100 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_138);
      uVal_19 = *(uint8_t *)pU64_15;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6260) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x6260) = 1;
      *(uint8_t *)(lVal_14 + 0x625e) = 1;
      *(uint64_t *)(lVal_14 + 0x6250) = 0x34b17610c8867534;
      *(uint32_t *)(lVal_14 + 0x6258) = 0xc2907c1b;
      *(uint16_t *)(lVal_14 + 0x625c) = 0x51a;
      func_0x180673140(&LAB_1801ba330);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_14 + 0x6250);
    if (*(char *)(lVal_14 + 0x625e) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x47910569a9f11975;
      *(uint *)(lVal_14 + 0x6258) = *(uint *)(lVal_14 + 0x6258) ^ 0xa9f11975;
      *(byte *)(lVal_14 + 0x625c) = *(byte *)(lVal_14 + 0x625c) ^ 0x69;
      *(byte *)(lVal_14 + 0x625d) = *(byte *)(lVal_14 + 0x625d) ^ 5;
      *(uint8_t *)(lVal_14 + 0x625e) = 0;
    }
    _local_a8 = ZEXT816(0);
    _local_b8 = ZEXT816(0);
    sz_12 = strlen((char *)pU64_1);
    if ((int64_t)sz_12 < 0) goto LAB_18018fe4a;
    uVal_18 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_13) {
        uVal_18 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_4b = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4b = 1;
        lVal_14 = func_0x180672de0(uVal_18 + 0x28);
        pU64_16 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_14;
      }
      local_b8 = (uint8_t  [8])pU64_16;
    }
    uStack_a0 = uVal_18;
    local_a8 = (uint8_t  [8])sz_12;
    func_0x1806aa960(pU64_16,pU64_1,sz_12);
    pU64_16[sz_12] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6278) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x6278) = 1;
      *(uint64_t *)(lVal_14 + 0x6268) = 0x34b17610c8867534;
      *(uint32_t *)(lVal_14 + 0x6270) = 0xc2907c1b;
      *(uint16_t *)(lVal_14 + 0x6274) = 0x169;
      func_0x180673140(&LAB_1801ba360);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_14 + 0x6268);
    if (*(char *)(lVal_14 + 0x6275) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x47910569a9f11975;
      *(uint *)(lVal_14 + 0x6270) = *(uint *)(lVal_14 + 0x6270) ^ 0xa9f11975;
      *(byte *)(lVal_14 + 0x6274) = *(byte *)(lVal_14 + 0x6274) ^ 0x69;
      *(uint8_t *)(lVal_14 + 0x6275) = 0;
    }
    local_68 = 0;
    uStack_65 = 0;
    uStack_61 = SUB164(ZEXT816(0),7);
    uStack_5d = 0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    sz_12 = strlen((char *)pU64_1);
    if ((int64_t)sz_12 < 0) goto LAB_18018fe57;
    if (sz_12 < 0x10) {
      pU64_17 = &local_78;
      uVal_18 = 0xf;
    }
    else {
      uVal_13 = sz_12 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_13) {
        uVal_18 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_4a = 1;
        pU64_17 = (uint32_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4a = 1;
        lVal_14 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint32_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -2) = lVal_14;
      }
      local_78 = SUB84(pU64_17,0);
      uStack_74 = (uint32_t)((uint64_t)pU64_17 >> 0x20);
    }
    local_68 = (undefined3)sz_12;
    uStack_65 = (uint32_t)(sz_12 >> 0x18);
    uStack_61._0_1_ = (uint8_t)(sz_12 >> 0x38);
    uStack_61._1_3_ = (undefined3)uVal_18;
    uStack_5d = (undefined5)(uVal_18 >> 0x18);
    func_0x1806aa960(pU64_17,pU64_1,sz_12);
    *(uint8_t *)((int64_t)pU64_17 + sz_12) = 0;
    pU64_17 = &local_78;
    pU64_16 = local_b8;
    func_0x1801ccd70(local_58,pU64_17,pU64_16,pU64_15,uVal_19,local_138,0);
    uVal_18 = CONCAT53(uStack_5d,uStack_61._1_3_);
    if (0xf < uVal_18) {
      lVal_7 = CONCAT44(uStack_74,local_78);
      uVal_13 = uVal_18 + 1;
      lVal_14 = lVal_7;
      if (0xfff < uVal_13) {
        lVal_14 = *(int64_t *)(lVal_7 + -8);
        if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_14)) goto LAB_18018fe43;
        uVal_13 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_13);
    }
    if (0xf < uStack_a0) {
      uVal_18 = uStack_a0 + 1;
      lVal_14 = (int64_t)local_b8;
      if (0xfff < uVal_18) {
        lVal_14 = *(int64_t *)((int64_t)local_b8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_14)) goto LAB_18018fe43;
        uVal_18 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_18);
    }
    local_c0 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_c0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_f8);
    }
    pU64_2 = (uint8_t *)((int64_t)local_58 + 0x149);
    uVal_19 = *pU64_2;
    local_68 = _UNK_1806ba389;
    uStack_65 = _UNK_1806ba38c;
    uStack_61 = _UNK_1806ba390;
    local_78 = _DAT_1806ba379;
    uStack_74 = _UNK_1806ba37d;
    uStack_70 = _UNK_1806ba381;
    uStack_6c = _UNK_1806ba385;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6298) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x6298) = 1;
      func_0x18007c9b0(lVal_14 + 0x6279,&local_78);
      func_0x180673140(&LAB_1801ba390);
    }
    _Str_00 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6279);
    func_0x1801c0c70(_Str_00);
    _local_b8 = ZEXT816(0);
    sz_12 = strlen(_Str_00);
    if (-1 < (int64_t)sz_12) {
      uVal_18 = 0xf;
      if (0xf < sz_12) {
        uVal_13 = sz_12 | 0xf;
        uVal_18 = 0x16;
        if (0x16 < uVal_13) {
          uVal_18 = uVal_13;
        }
        if (uVal_13 < 0xfff) {
          local_49 = 1;
          pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
        }
        else {
          local_49 = 1;
          lVal_14 = func_0x180672de0(uVal_18 + 0x28);
          pU64_16 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_16 + -8) = lVal_14;
        }
        local_b8 = (uint8_t  [8])pU64_16;
      }
      uStack_a0 = uVal_18;
      local_a8 = (uint8_t  [8])sz_12;
      func_0x1806aa960(pU64_16,_Str_00,sz_12);
      pU64_16[sz_12] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x62ac) == '\0') {
        lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_14 + 0x62ac) = 1;
        *(uint8_t *)(lVal_14 + 0x62aa) = 1;
        *(uint64_t *)(lVal_14 + 0x62a0) = 0xaf0ea317b0293c3d;
        *(uint16_t *)(lVal_14 + 0x62a8) = 0x5501;
        func_0x180673140(&LAB_1801ba3c0);
      }
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_14 + 0x62a0);
      if (*(char *)(lVal_14 + 0x62aa) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0xd76bd737d54d5575;
        *(byte *)(lVal_14 + 0x62a8) = *(byte *)(lVal_14 + 0x62a8) ^ 0x75;
        *(byte *)(lVal_14 + 0x62a9) = *(byte *)(lVal_14 + 0x62a9) ^ 0x55;
        *(uint8_t *)(lVal_14 + 0x62aa) = 0;
      }
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      sz_12 = strlen((char *)pU64_1);
      if (-1 < (int64_t)sz_12) {
        uVal_18 = 0xf;
        if (0xf < sz_12) {
          uVal_13 = sz_12 | 0xf;
          uVal_18 = 0x16;
          if (0x16 < uVal_13) {
            uVal_18 = uVal_13;
          }
          if (uVal_13 < 0xfff) {
            local_4c = 1;
            pU64_17 = (uint32_t *)func_0x180672de0(uVal_18 + 1);
          }
          else {
            local_4c = 1;
            lVal_14 = func_0x180672de0(uVal_18 + 0x28);
            pU64_17 = (uint32_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_17 + -2) = lVal_14;
          }
          local_78 = SUB84(pU64_17,0);
          uStack_74 = (uint32_t)((uint64_t)pU64_17 >> 0x20);
        }
        local_68 = (undefined3)sz_12;
        uStack_65 = (uint32_t)(sz_12 >> 0x18);
        uStack_61._0_1_ = (uint8_t)(sz_12 >> 0x38);
        uStack_61._1_3_ = (undefined3)uVal_18;
        uStack_5d = (undefined5)(uVal_18 >> 0x18);
        func_0x1806aa960(pU64_17,pU64_1,sz_12);
        *(uint8_t *)((int64_t)pU64_17 + sz_12) = 0;
        func_0x1801ccd70(local_58,&local_78,local_b8,pU64_2,uVal_19,local_f8,0);
        uVal_18 = CONCAT53(uStack_5d,uStack_61._1_3_);
        if (0xf < uVal_18) {
          lVal_7 = CONCAT44(uStack_74,local_78);
          uVal_13 = uVal_18 + 1;
          lVal_14 = lVal_7;
          if (0xfff < uVal_13) {
            lVal_14 = *(int64_t *)(lVal_7 + -8);
            if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_14)) goto LAB_18018fe43;
            uVal_13 = uVal_18 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_14,uVal_13);
        }
        if (0xf < uStack_a0) {
          uVal_18 = uStack_a0 + 1;
          lVal_14 = (int64_t)local_b8;
          if (0xfff < uVal_18) {
            lVal_14 = *(int64_t *)((int64_t)local_b8 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_14)) {
LAB_18018fe43:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_18 = uStack_a0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_14,uVal_18);
        }
        return local_58;
      }
      goto LAB_18018fe71;
    }
  }
  local_49 = 1;
  func_0x18007ba70();
LAB_18018fe71:
  local_4c = 1;
  func_0x18007ba70();
  fnPtr_3 = (func_ptr_t )swi(3);
  pU64_15 = (uint64_t *)(*fnPtr_3)();
  return pU64_15;
}

// Unwind@18018fe80
void Unwind_18018fe80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@18018fed0
void Unwind_18018fed0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xb8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@18018ff20
void Unwind_18018ff20(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6298) = 0;
  *(uint8_t *)(param_2 + 0x12f) = 1;
  return;
}

// Unwind@18018ff70
void Unwind_18018ff70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18018ffb0
void Unwind_18018ffb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x12e) = 0;
  return;
}

// Unwind@18018fff0
void Unwind_18018fff0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x12e);
  func_0x180001e70(param_2 + 0xc0);
  *(uint8_t *)(param_2 + 0x12d) = uVal_1;
  return;
}

// Unwind@180190040
void Unwind_180190040(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x12d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@1801900a0
void Unwind_1801900a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 300) = 0;
  return;
}

// Unwind@1801900e0
void Unwind_1801900e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 300);
  func_0x180001e70(param_2 + 0xc0);
  *(uint8_t *)(param_2 + 0x12f) = uVal_1;
  return;
}

// Unwind@180190130
void Unwind_180190130(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x12f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@180190190
void Unwind_180190190(uint64_t param_1,int64_t param_2)
{
  func_0x180154cc0(*(uint64_t *)(param_2 + 0x120));
  return;
}

// Unwind@1801901d0
void Unwind_1801901d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6248) = 0;
  return;
}

// Unwind@1801904d0
void Unwind_1801904d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x62d8) = 0;
  return;
}

// func_0x180190690
int64_t func_0x180190690(int64_t *param_1)
{
  uint uVal_1;
  uint uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t *pLong_7;
  
  lVal_4 = (**(func_ptr_t *)(*param_1 + 0xf8))();
  lVal_3 = *(int64_t *)(lVal_4 + 0x10);
  uVal_1 = *(uint *)(lVal_4 + 0x18);
  pLong_7 = (int64_t *)
           (*(int64_t *)(lVal_3 + 0x48) +
           (uint64_t)
           (((uint)(*(int *)(lVal_3 + 0x50) - (int)*(int64_t *)(lVal_3 + 0x48)) >> 3) - 1 & 0x18b1887
           ) * 8);
  lVal_4 = *(int64_t *)(lVal_3 + 0x68);
  do {
    if (*pLong_7 == -1) {
      return 0;
    }
    lVal_6 = *pLong_7 * 0x20;
    pLong_7 = (int64_t *)(lVal_4 + lVal_6);
  } while (*(int *)(lVal_4 + 8 + lVal_6) != 0x18b1887);
  if ((*(int64_t *)(lVal_3 + 0x70) != lVal_4 + lVal_6) &&
     (lVal_3 = *(int64_t *)(lVal_4 + lVal_6 + 0x10), lVal_3 != 0)) {
    uVal_5 = (uint64_t)((uVal_1 & 0x3ffff) >> 0xb);
    if ((uVal_5 < (uint64_t)(*(int64_t *)(lVal_3 + 0x10) - *(int64_t *)(lVal_3 + 8) >> 3)) &&
       ((lVal_4 = *(int64_t *)(*(int64_t *)(lVal_3 + 8) + uVal_5 * 8), lVal_4 != 0 &&
        (uVal_2 = *(uint *)(lVal_4 + (uint64_t)(uVal_1 & 0x7ff) * 4),
        (uVal_1 & 0xfffc0000 ^ uVal_2) < 0x3ffff)))) {
      return (uint64_t)(uVal_2 & 0x3ff) * 100 +
             *(int64_t *)(*(int64_t *)(lVal_3 + 0x50) + (uint64_t)((uVal_2 & 0x3fc00) >> 7));
    }
  }
  return 0;
}

// Unwind@180190b90
void Unwind_180190b90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@180191360
void Unwind_180191360(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6318) = 0;
  return;
}

// Unwind@1801913b0
void Unwind_1801913b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6330) = 0;
  return;
}

// Unwind@180191400
void Unwind_180191400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x58));
  return;
}

// Unwind@180191440
void Unwind_180191440(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6300) = 0;
  return;
}

// func_0x1801914f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801914f0(uint64_t *param_1)
{
  uint *_Str;
  uint8_t (*_Str_00)[16];
  uint64_t *pU64_1;
  uint8_t *pU64_2;
  char *_Str_01;
  uint32_t uVal_3;
  func_ptr_t fnPtr_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint64_t uVal_9;
  size_t sz_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t *pU64_13;
  uint8_t *pU64_14;
  uint8_t *pU64_15;
  uint64_t uVal_16;
  uint8_t uVal_17;
  uint8_t auArr_18 [16];
  uint uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint8_t local_138 [56];
  uint64_t local_100;
  uint8_t local_f8 [56];
  uint64_t local_c0;
  uint8_t local_b8 [16];
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint16_t uStack_8c;
  uint16_t uStack_8a;
  undefined6 uStack_88;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint64_t *local_58;
  uint8_t local_4c;
  uint8_t local_4b;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = _DAT_1806ba401;
  uStack_94 = _UNK_1806ba405;
  uStack_90 = _UNK_1806ba409;
  uStack_8c = (uint16_t)_UNK_1806ba40d;
  local_a8._4_4_ = _UNK_1806ba3f5;
  local_a8._0_4_ = _DAT_1806ba3f1;
  uStack_a0._0_4_ = _UNK_1806ba3f9;
  uStack_a0._4_4_ = _UNK_1806ba3fd;
  local_b8._8_8_ = _UNK_1806ba3e9;
  local_b8._0_8_ = _DAT_1806ba3e1;
  uStack_8a = 0x6538;
  uStack_88 = 0x81bc6c92f9bb;
  local_58 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x6388) == '\0') {
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_12 + 0x6388) = 1;
    func_0x1801b5990(lVal_12 + 0x6351,local_b8);
    func_0x180673140(&LAB_1801ba530);
  }
  uVal_8 = _UNK_1806b2c9c;
  uVal_7 = _UNK_1806b2c98;
  uVal_6 = _UNK_1806b2c94;
  uVal_5 = _DAT_1806b2c90;
  lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint *)(lVal_12 + 0x6351);
  if (*(char *)(lVal_12 + 0x6387) == '\x01') {
    uVal_19 = *(uint *)(lVal_12 + 0x6355) ^ _UNK_1806b2c94;
    uVal_20 = *(uint *)(lVal_12 + 0x6359) ^ _UNK_1806b2c98;
    uVal_21 = *(uint *)(lVal_12 + 0x635d) ^ _UNK_1806b2c9c;
    *_Str = *_Str ^ _DAT_1806b2c90;
    *(uint *)(lVal_12 + 0x6355) = uVal_19;
    *(uint *)(lVal_12 + 0x6359) = uVal_20;
    *(uint *)(lVal_12 + 0x635d) = uVal_21;
    *(uint *)(lVal_12 + 0x6361) = *(uint *)(lVal_12 + 0x6361) ^ uVal_5;
    *(uint *)(lVal_12 + 0x6365) = *(uint *)(lVal_12 + 0x6365) ^ uVal_6;
    *(uint *)(lVal_12 + 0x6369) = *(uint *)(lVal_12 + 0x6369) ^ uVal_7;
    *(uint *)(lVal_12 + 0x636d) = *(uint *)(lVal_12 + 0x636d) ^ uVal_8;
    *(uint *)(lVal_12 + 0x6371) = *(uint *)(lVal_12 + 0x6371) ^ uVal_5;
    *(uint *)(lVal_12 + 0x6375) = *(uint *)(lVal_12 + 0x6375) ^ uVal_6;
    *(uint *)(lVal_12 + 0x6379) = *(uint *)(lVal_12 + 0x6379) ^ uVal_7;
    *(uint *)(lVal_12 + 0x637d) = *(uint *)(lVal_12 + 0x637d) ^ uVal_8;
    *(uint *)(lVal_12 + 0x6381) = *(uint *)(lVal_12 + 0x6381) ^ 0x9f9d9cf;
    *(byte *)(lVal_12 + 0x6385) = *(byte *)(lVal_12 + 0x6385) ^ 0xc5;
    *(byte *)(lVal_12 + 0x6386) = *(byte *)(lVal_12 + 0x6386) ^ 0x81;
    *(uint8_t *)(lVal_12 + 0x6387) = 0;
  }
  _local_a8 = (uint8_t  [16])0x0;
  local_b8 = (uint8_t  [16])0x0;
  sz_10 = strlen((char *)_Str);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
LAB_180191e63:
    local_4b = 1;
    func_0x18007ba70();
LAB_180191e70:
    local_4a = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_10 < 0x10) {
      pU64_14 = local_b8;
      uVal_16 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_12;
      }
      local_b8._0_8_ = pU64_14;
    }
    local_a8 = (uint8_t  [8])sz_10;
    uStack_a0 = uVal_16;
    func_0x1806aa960(pU64_14,_Str,sz_10);
    pU64_14[sz_10] = 0;
    pU64_14 = local_b8;
    func_0x18014fe60(local_58,0,1,pU64_14);
    if (0xf < uStack_a0) {
      uVal_16 = uStack_a0 + 1;
      lVal_12 = local_b8._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_12)) goto LAB_180191e5c;
        uVal_16 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    *local_58 = &PTR_LAB_1806b8380;
    pU64_13 = local_58 + 0x29;
    *(uint32_t *)(local_58 + 0x29) = 0;
    local_100 = 0;
    if (DAT_18083f7c0 == (uint64_t *)0x0) {
      uVal_17 = 0;
    }
    else {
      local_100 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_138);
      uVal_17 = *(uint8_t *)pU64_13;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x63a0) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x63a0) = 1;
      uVal_9 = _UNK_1806b65c8;
      *(uint64_t *)(lVal_12 + 0x6390) = _DAT_1806b65c0;
      *(uint64_t *)(lVal_12 + 0x6398) = uVal_9;
      func_0x180673140(&LAB_1801ba570);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint8_t (*)[16])(lVal_12 + 0x6390);
    if (*(char *)(lVal_12 + 0x639f) == '\x01') {
      uVal_3 = *(uint32_t *)(lVal_12 + 0x6398);
      auArr_18 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_3 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_3 >> 0x10),uVal_3)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_12 + 0x639d) >> 8)),
                                                 (char)((uint)uVal_3 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_12 + 0x639d),(char)uVal_3)
                                       )),_DAT_1806ae110);
      auArr_18._8_8_ =
           auArr_18._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_12 + 0x639c) << 0x20;
      auArr_18 = pblendw(auArr_18,*_Str_00,0xf);
      *_Str_00 = auArr_18 ^ _DAT_1806b5220;
    }
    _local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)_Str_00);
    if ((int64_t)sz_10 < 0) goto LAB_180191e63;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_4b = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_4b = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_12;
      }
      local_b8._0_8_ = pU64_14;
    }
    uStack_a0 = uVal_16;
    local_a8 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_14,_Str_00,sz_10);
    pU64_14[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x63b8) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x63b8) = 1;
      *(uint8_t *)(lVal_12 + 0x63b6) = 1;
      *(uint64_t *)(lVal_12 + 0x63a8) = 0x34b17610c8867534;
      *(uint32_t *)(lVal_12 + 0x63b0) = 0xc7986b05;
      *(uint16_t *)(lVal_12 + 0x63b4) = 0x51d;
      func_0x180673140(&LAB_1801ba5a0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_12 + 0x63a8);
    if (*(char *)(lVal_12 + 0x63b6) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x47910569a9f11975;
      *(uint *)(lVal_12 + 0x63b0) = *(uint *)(lVal_12 + 0x63b0) ^ 0xa9f11975;
      *(byte *)(lVal_12 + 0x63b4) = *(byte *)(lVal_12 + 0x63b4) ^ 0x69;
      *(byte *)(lVal_12 + 0x63b5) = *(byte *)(lVal_12 + 0x63b5) ^ 5;
      *(uint8_t *)(lVal_12 + 0x63b6) = 0;
    }
    _local_68 = (uint8_t  [16])0x0;
    _local_78 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_1);
    if ((int64_t)sz_10 < 0) goto LAB_180191e70;
    if (sz_10 < 0x10) {
      pU64_14 = local_78;
      uVal_16 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_4a = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_4a = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_12;
      }
      local_78 = (uint8_t  [8])pU64_14;
    }
    uStack_60 = uVal_16;
    local_68 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_14,pU64_1,sz_10);
    pU64_14[sz_10] = 0;
    pU64_15 = local_78;
    pU64_14 = local_b8;
    func_0x1801ccd70(local_58,pU64_15,pU64_14,pU64_13,uVal_17,local_138,0);
    if (0xf < uStack_60) {
      uVal_16 = uStack_60 + 1;
      lVal_12 = (int64_t)local_78;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)((int64_t)local_78 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_12)) goto LAB_180191e5c;
        uVal_16 = uStack_60 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    if (0xf < uStack_a0) {
      uVal_16 = uStack_a0 + 1;
      lVal_12 = local_b8._0_8_;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_12)) goto LAB_180191e5c;
        uVal_16 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    local_c0 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_c0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_f8);
    }
    auArr_18 = _local_68;
    pU64_2 = (uint8_t *)((int64_t)local_58 + 0x149);
    uVal_17 = *pU64_2;
    local_68._4_4_ = _UNK_1806ba42b;
    local_68._0_4_ = _UNK_1806ba427;
    uStack_60._4_4_ = auArr_18._12_4_;
    uStack_60._0_4_ = _UNK_1806ba42f;
    uStack_70._4_4_ = _DAT_1806ba423;
    uStack_70._0_4_ = _UNK_1806ba41f;
    local_78 = (uint8_t  [8])_DAT_1806ba417;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x63d8) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x63d8) = 1;
      func_0x18008fba0(lVal_12 + 0x63b9,local_78);
      func_0x180673140(&LAB_1801ba5d0);
    }
    _Str_01 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x63b9);
    func_0x1801c0d20(_Str_01);
    local_b8 = (uint8_t  [16])0x0;
    sz_10 = strlen(_Str_01);
    if (-1 < (int64_t)sz_10) {
      uVal_16 = 0xf;
      if (0xf < sz_10) {
        uVal_11 = sz_10 | 0xf;
        uVal_16 = 0x16;
        if (0x16 < uVal_11) {
          uVal_16 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          local_49 = 1;
          pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
        }
        else {
          local_49 = 1;
          lVal_12 = func_0x180672de0(uVal_16 + 0x28);
          pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_14 + -8) = lVal_12;
        }
        local_b8._0_8_ = pU64_14;
      }
      uStack_a0 = uVal_16;
      local_a8 = (uint8_t  [8])sz_10;
      func_0x1806aa960(pU64_14,_Str_01,sz_10);
      pU64_14[sz_10] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x63ec) == '\0') {
        lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_12 + 0x63ec) = 1;
        *(uint8_t *)(lVal_12 + 0x63ea) = 1;
        *(uint64_t *)(lVal_12 + 0x63e0) = 0xaf0ea317b0293c3d;
        *(uint16_t *)(lVal_12 + 0x63e8) = 0x5501;
        func_0x180673140(&LAB_1801ba600);
      }
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_12 + 0x63e0);
      if (*(char *)(lVal_12 + 0x63ea) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0xd76bd737d54d5575;
        *(byte *)(lVal_12 + 0x63e8) = *(byte *)(lVal_12 + 0x63e8) ^ 0x75;
        *(byte *)(lVal_12 + 0x63e9) = *(byte *)(lVal_12 + 0x63e9) ^ 0x55;
        *(uint8_t *)(lVal_12 + 0x63ea) = 0;
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_10 = strlen((char *)pU64_1);
      if (-1 < (int64_t)sz_10) {
        uVal_16 = 0xf;
        if (0xf < sz_10) {
          uVal_11 = sz_10 | 0xf;
          uVal_16 = 0x16;
          if (0x16 < uVal_11) {
            uVal_16 = uVal_11;
          }
          if (uVal_11 < 0xfff) {
            local_4c = 1;
            pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
          }
          else {
            local_4c = 1;
            lVal_12 = func_0x180672de0(uVal_16 + 0x28);
            pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_15 + -8) = lVal_12;
          }
          local_78 = (uint8_t  [8])pU64_15;
        }
        local_68 = (uint8_t  [8])sz_10;
        uStack_60 = uVal_16;
        func_0x1806aa960(pU64_15,pU64_1,sz_10);
        pU64_15[sz_10] = 0;
        func_0x1801ccd70(local_58,local_78,local_b8,pU64_2,uVal_17,local_f8,0);
        if (0xf < uStack_60) {
          uVal_16 = uStack_60 + 1;
          lVal_12 = (int64_t)local_78;
          if (0xfff < uVal_16) {
            lVal_12 = *(int64_t *)((int64_t)local_78 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_12)) goto LAB_180191e5c;
            uVal_16 = uStack_60 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_16);
        }
        if (0xf < uStack_a0) {
          uVal_16 = uStack_a0 + 1;
          lVal_12 = local_b8._0_8_;
          if (0xfff < uVal_16) {
            lVal_12 = *(int64_t *)(local_b8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_12)) {
LAB_180191e5c:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_16 = uStack_a0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_16);
        }
        return local_58;
      }
      goto LAB_180191e8a;
    }
  }
  local_49 = 1;
  func_0x18007ba70();
LAB_180191e8a:
  local_4c = 1;
  func_0x18007ba70();
  fnPtr_4 = (func_ptr_t )swi(3);
  pU64_13 = (uint64_t *)(*fnPtr_4)();
  return pU64_13;
}

// Unwind@180191ea0
void Unwind_180191ea0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@180191ef0
void Unwind_180191ef0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xb8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@180191f40
void Unwind_180191f40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x63d8) = 0;
  *(uint8_t *)(param_2 + 0x12f) = 1;
  return;
}

// Unwind@180191f90
void Unwind_180191f90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180191fd0
void Unwind_180191fd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x12e) = 0;
  return;
}

// Unwind@180192010
void Unwind_180192010(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x12e);
  func_0x180001e70(param_2 + 0xc0);
  *(uint8_t *)(param_2 + 0x12d) = uVal_1;
  return;
}

// Unwind@180192060
void Unwind_180192060(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x12d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@1801920c0
void Unwind_1801920c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 300) = 0;
  return;
}

// Unwind@180192100
void Unwind_180192100(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 300);
  func_0x180001e70(param_2 + 0xc0);
  *(uint8_t *)(param_2 + 0x12f) = uVal_1;
  return;
}

// Unwind@180192150
void Unwind_180192150(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x12f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@1801921b0
void Unwind_1801921b0(uint64_t param_1,int64_t param_2)
{
  func_0x180154cc0(*(uint64_t *)(param_2 + 0x120));
  return;
}

// Unwind@1801921f0
void Unwind_1801921f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6388) = 0;
  return;
}

// Unwind@1801924f0
void Unwind_1801924f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x641c) = 0;
  return;
}

// Unwind@180192a50
void Unwind_180192a50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1801931b0
void Unwind_1801931b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6484) = 0;
  return;
}

// Unwind@180193200
void Unwind_180193200(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6470) = 0;
  return;
}

// Unwind@180193250
void Unwind_180193250(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6458) = 0;
  return;
}

// Unwind@1801932a0
void Unwind_1801932a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6440) = 0;
  return;
}

// Unwind@1801932f0
void Unwind_1801932f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x58));
  return;
}

// func_0x180193330
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180193330(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  size_t sz_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint8_t *pU64_11;
  uint64_t uVal_12;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  size_t local_58;
  uint64_t uStack_50;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_48 = _DAT_1806ba4b4;
  uStack_44 = _UNK_1806ba4b8;
  uStack_40 = _UNK_1806ba4bc;
  uStack_3c = _UNK_1806ba4c0;
  local_58 = CONCAT44(_UNK_1806ba4a8,_DAT_1806ba4a4);
  uStack_50 = CONCAT44(_UNK_1806ba4b0,_UNK_1806ba4ac);
  local_68._4_4_ = _UNK_1806ba498;
  local_68._0_4_ = _DAT_1806ba494;
  uStack_60._0_4_ = _UNK_1806ba49c;
  uStack_60._4_4_ = _UNK_1806ba4a0;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x64b8) == '\0') {
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_10 + 0x64b8) = 1;
    func_0x1801b4680(lVal_10 + 0x6485,local_68);
    func_0x180673140(&LAB_1801ba770);
  }
  uVal_7 = _UNK_1806b2c9c;
  uVal_6 = _UNK_1806b2c98;
  uVal_5 = _UNK_1806b2c94;
  uVal_4 = _DAT_1806b2c90;
  lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_10 + 0x6485);
  if (*(char *)(lVal_10 + 0x64b5) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_10 + 0x6489) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(lVal_10 + 0x648d) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(lVal_10 + 0x6491) ^ _UNK_1806b2c9c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_10 + 0x6499) ^ uVal_5;
    auArr_2._0_4_ = *(uint *)(lVal_10 + 0x6495) ^ uVal_4;
    auArr_2._8_4_ = *(uint *)(lVal_10 + 0x649d) ^ uVal_6;
    auArr_2._12_4_ = *(uint *)(lVal_10 + 0x64a1) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_10 + 0x6495) = auArr_2;
    auArr_3._4_4_ = *(uint *)(lVal_10 + 0x64a9) ^ uVal_5;
    auArr_3._0_4_ = *(uint *)(lVal_10 + 0x64a5) ^ uVal_4;
    auArr_3._8_4_ = *(uint *)(lVal_10 + 0x64ad) ^ uVal_6;
    auArr_3._12_4_ = *(uint *)(lVal_10 + 0x64b1) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_10 + 0x64a5) = auArr_3;
    *(uint8_t *)(lVal_10 + 0x64b5) = 0;
  }
  _local_68 = ZEXT816(0);
  sz_8 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_8) {
    if (sz_8 < 0x10) {
      pU64_11 = local_68;
      uVal_12 = 0xf;
    }
    else {
      uVal_9 = sz_8 | 0xf;
      uVal_12 = 0x16;
      if (0x16 < uVal_9) {
        uVal_12 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
      }
      else {
        lVal_10 = func_0x180672de0(uVal_12 + 0x28);
        pU64_11 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_10;
      }
      local_68 = (uint8_t  [8])pU64_11;
    }
    local_58 = sz_8;
    uStack_50 = uVal_12;
    func_0x1806aa960(pU64_11,_Str,sz_8);
    pU64_11[sz_8] = 0;
    func_0x18014fe60(param_1,0,0,local_68);
    if (0xf < uStack_50) {
      uVal_12 = uStack_50 + 1;
      lVal_10 = (int64_t)local_68;
      if (0xfff < uVal_12) {
        lVal_10 = *(int64_t *)((int64_t)local_68 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_68 + -8) - lVal_10)) goto LAB_180193519;
        uVal_12 = uStack_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_12);
    }
    *param_1 = &PTR_LAB_1806b84f0;
    param_1[0x29] = 0;
    return param_1;
  }
  func_0x18007ba70();
LAB_180193519:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180193520
void Unwind_180193520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180193550
void Unwind_180193550(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x64b8) = 0;
  return;
}

// Unwind@180193850
void Unwind_180193850(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x64e4) = 0;
  return;
}

// Unwind@180193e30
void Unwind_180193e30(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x64f8) = 0;
  return;
}

// Unwind@180193e90
void Unwind_180193e90(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x650c) = 0;
  return;
}

// Unwind@180194580
void Unwind_180194580(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1801945c0
void Unwind_1801945c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xa8));
  return;
}

// Unwind@180194600
void Unwind_180194600(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// func_0x180194640
uint64_t * func_0x180194640(uint64_t *param_1)
{
  uint64_t *_Str;
  byte *_Str_00;
  uint *_Str_01;
  uint64_t *pU64_1;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  uint32_t uVal_7;
  uint8_t local_d8 [56];
  uint64_t local_a0;
  uint8_t local_98 [16];
  size_t local_88;
  uint64_t local_80;
  uint64_t *local_70;
  uint8_t local_68 [16];
  size_t local_58;
  uint64_t local_50;
  uint8_t local_42;
  uint8_t local_41;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x6540) == '\0') {
    lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_4 + 0x6540) = 1;
    *(uint64_t *)(lVal_4 + 0x6530) = 0x5871e9a67c96ab8c;
    *(uint32_t *)(lVal_4 + 0x6538) = 0x2794b8bf;
    *(uint16_t *)(lVal_4 + 0x653c) = 0x1c5;
    func_0x180673140(&LAB_1801ba8c0);
  }
  lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint64_t *)(lVal_4 + 0x6530);
  if (*(char *)(lVal_4 + 0x653d) == '\x01') {
    *_Str = *_Str ^ 0xb5181c509f9d9cf;
    *(uint *)(lVal_4 + 0x6538) = *(uint *)(lVal_4 + 0x6538) ^ 0x9f9d9cf;
    *(byte *)(lVal_4 + 0x653c) = *(byte *)(lVal_4 + 0x653c) ^ 0xc5;
    *(uint8_t *)(lVal_4 + 0x653d) = 0;
  }
  local_68 = ZEXT816(0);
  sz_2 = strlen((char *)_Str);
  if ((int64_t)sz_2 < 0) {
    func_0x18007ba70();
LAB_180194b63:
    local_42 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_2 < 0x10) {
      pU64_5 = local_68;
      uVal_6 = 0xf;
    }
    else {
      uVal_3 = sz_2 | 0xf;
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
      local_68._0_8_ = pU64_5;
    }
    local_58 = sz_2;
    local_50 = uVal_6;
    func_0x1806aa960(pU64_5,_Str,sz_2);
    pU64_5[sz_2] = 0;
    pU64_5 = local_68;
    func_0x1801c2ba0(param_1,0,1,pU64_5);
    if (0xf < local_50) {
      uVal_6 = local_50 + 1;
      lVal_4 = local_68._0_8_;
      if (0xfff < uVal_6) {
        lVal_4 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_4)) goto LAB_180194b77;
        uVal_6 = local_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_4,uVal_6);
    }
    *param_1 = &PTR_LAB_1806b8660;
    param_1[0x10] = 0xa00000000;
    local_a0 = 0;
    local_70 = param_1;
    if (DAT_18083f7c0 == (uint64_t *)0x0) {
      uVal_7 = 10;
    }
    else {
      local_a0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_d8);
      uVal_7 = *(uint32_t *)((int64_t)param_1 + 0x84);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6544) == '\0') {
      lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_4 + 0x6544) = 1;
      *(uint16_t *)(lVal_4 + 0x6541) = 0x175;
      func_0x180673140(&LAB_1801ba8f0);
    }
    lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (byte *)(lVal_4 + 0x6541);
    if (*(char *)(lVal_4 + 0x6542) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0x75;
      *(uint8_t *)(lVal_4 + 0x6542) = 0;
    }
    local_68 = ZEXT816(0);
    sz_2 = strlen((char *)_Str_00);
    if ((int64_t)sz_2 < 0) goto LAB_180194b63;
    uVal_6 = 0xf;
    if (0xf < sz_2) {
      uVal_3 = sz_2 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_3) {
        uVal_6 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        local_42 = 1;
        pU64_5 = (uint8_t *)func_0x180672de0(uVal_6 + 1);
      }
      else {
        local_42 = 1;
        lVal_4 = func_0x180672de0(uVal_6 + 0x28);
        pU64_5 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_5 + -8) = lVal_4;
      }
      local_68._0_8_ = pU64_5;
    }
    local_58 = sz_2;
    local_50 = uVal_6;
    func_0x1806aa960(pU64_5,_Str_00,sz_2);
    pU64_5[sz_2] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6550) == '\0') {
      lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_4 + 0x6550) = 1;
      *(uint8_t *)(lVal_4 + 0x654e) = 1;
      *(uint32_t *)(lVal_4 + 0x6548) = 0xc89d7c31;
      *(uint16_t *)(lVal_4 + 0x654c) = 0x510;
      func_0x180673140(&LAB_1801ba910);
    }
    lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_01 = (uint *)(lVal_4 + 0x6548);
    if (*(char *)(lVal_4 + 0x654e) == '\x01') {
      *_Str_01 = *_Str_01 ^ 0xa9f11975;
      *(byte *)(lVal_4 + 0x654c) = *(byte *)(lVal_4 + 0x654c) ^ 0x69;
      *(byte *)(lVal_4 + 0x654d) = *(byte *)(lVal_4 + 0x654d) ^ 5;
      *(uint8_t *)(lVal_4 + 0x654e) = 0;
    }
    local_98 = ZEXT816(0);
    sz_2 = strlen((char *)_Str_01);
    if (-1 < (int64_t)sz_2) {
      if (sz_2 < 0x10) {
        pU64_5 = local_98;
        uVal_6 = 0xf;
      }
      else {
        uVal_3 = sz_2 | 0xf;
        uVal_6 = 0x16;
        if (0x16 < uVal_3) {
          uVal_6 = uVal_3;
        }
        if (uVal_3 < 0xfff) {
          local_41 = 1;
          pU64_5 = (uint8_t *)func_0x180672de0(uVal_6 + 1);
        }
        else {
          local_41 = 1;
          lVal_4 = func_0x180672de0(uVal_6 + 0x28);
          pU64_5 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_5 + -8) = lVal_4;
        }
        local_98._0_8_ = pU64_5;
      }
      local_88 = sz_2;
      local_80 = uVal_6;
      func_0x1806aa960(pU64_5,_Str_01,sz_2);
      pU64_5[sz_2] = 0;
      func_0x1801ccff0(local_70,local_98,local_68,(uint32_t *)((int64_t)param_1 + 0x84),uVal_7,1,100,
                    local_d8,0);
      if (0xf < local_80) {
        uVal_6 = local_80 + 1;
        lVal_4 = local_98._0_8_;
        if (0xfff < uVal_6) {
          lVal_4 = *(int64_t *)(local_98._0_8_ + -8);
          if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_4)) goto LAB_180194b77;
          uVal_6 = local_80 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_4,uVal_6);
      }
      pU64_1 = local_70;
      if (0xf < local_50) {
        uVal_6 = local_50 + 1;
        lVal_4 = local_68._0_8_;
        if (0xfff < uVal_6) {
          lVal_4 = *(int64_t *)(local_68._0_8_ + -8);
          if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_4)) goto LAB_180194b77;
          uVal_6 = local_50 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_4,uVal_6);
      }
      return pU64_1;
    }
  }
  local_41 = 1;
  func_0x18007ba70();
LAB_180194b77:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180194b80
void Unwind_180194b80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x88);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@180194bd0
void Unwind_180194bd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180194c10
void Unwind_180194c10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  *(uint8_t *)(param_2 + 0xe7) = 0;
  return;
}

// Unwind@180194c50
void Unwind_180194c50(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0xe7);
  func_0x180001e70(param_2 + 0xc0);
  *(uint8_t *)(param_2 + 0xe6) = uVal_1;
  return;
}

// Unwind@180194c90
void Unwind_180194c90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0xe6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@180194ce0
void Unwind_180194ce0(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0xb8));
  return;
}

// func_0x180195270
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180195270(uint64_t *param_1)
{
  char *fnPtr_1;
  uint64_t *pU64_2;
  uint *pU64_3;
  uint8_t *pU64_4;
  byte *pU8_5;
  uint32_t uVal_6;
  func_ptr_t fnPtr_7;
  uint64_t *pU64_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t ***ptr3_U64_12;
  uint64_t uVal_13;
  uint64_t *pU64_14;
  uint64_t ****ptr4_U64_15;
  uint8_t *pU64_16;
  uint8_t *pU64_17;
  int64_t *pLong_18;
  uint8_t uVal_19;
  uint64_t uVal_20;
  uint8_t *pU64_21;
  uint64_t uVal_22;
  uint32_t uVal_23;
  uint32_t uVal_25;
  uint64_t uVal_24;
  uint in_stack_fffffffffffffb38;
  uint8_t **local_4a8;
  uint64_t *local_4a0;
  uint8_t ***local_470;
  uint8_t **local_468;
  uint64_t *local_460;
  uint8_t ***local_430;
  uint8_t **local_428;
  uint64_t *local_420;
  uint8_t ***local_3f0;
  uint8_t **local_3e8;
  uint64_t *local_3e0;
  uint8_t ***local_3b0;
  uint8_t **local_3a8;
  uint64_t *local_3a0;
  uint8_t ***local_370;
  uint8_t **local_368;
  uint64_t *local_360;
  uint8_t ***local_330;
  uint8_t **local_328;
  uint64_t *local_320;
  uint8_t ***local_2f0;
  uint8_t **local_2e8;
  uint64_t *local_2e0;
  uint8_t ***local_2b0;
  uint8_t **local_2a8;
  uint64_t *local_2a0;
  uint8_t ***local_270;
  uint8_t local_268 [56];
  uint64_t local_230;
  uint8_t local_228 [56];
  uint64_t local_1f0;
  uint8_t local_1e8 [56];
  uint64_t local_1b0;
  uint8_t local_1a8 [56];
  uint64_t local_170;
  uint8_t local_168 [56];
  uint64_t local_130;
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint64_t ****local_108;
  undefined5 uStack_100;
  undefined3 uStack_fb;
  undefined5 uStack_f8;
  undefined3 uStack_f3;
  uint64_t uStack_f0;
  uint8_t local_e8 [16];
  uint8_t local_d8 [8];
  uint64_t uStack_d0;
  uint32_t local_c8;
  int64_t *local_b0;
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint64_t *local_88;
  uint8_t local_7d;
  uint8_t local_7c;
  uint8_t local_7b;
  uint8_t local_7a;
  uint8_t local_79;
  uint8_t local_78;
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
  
  local_60 = 0xfffffffffffffffe;
  local_e8._8_8_ = _UNK_1806ba503;
  local_e8._0_8_ = _DAT_1806ba4fb;
  uStack_d0 = (uint64_t)local_d8;
  local_d8 = (uint8_t  [8])0xb7feda06d96b4ef;
  local_88 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x658c) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x658c) = 1;
    func_0x18007d9e0(lVal_11 + 0x6571,local_e8);
    func_0x180673140(&LAB_1801ba9a0);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x6571);
  func_0x1801c0df0(fnPtr_1);
  _local_d8 = (uint8_t  [16])0x0;
  local_e8 = (uint8_t  [16])0x0;
  sz_9 = strlen(fnPtr_1);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
LAB_180198917:
    local_61 = 1;
    func_0x18007ba70();
LAB_180198924:
    local_63 = 1;
    func_0x18007ba70();
LAB_180198931:
    local_65 = 1;
    func_0x18007ba70();
LAB_18019893e:
    local_62 = 1;
    func_0x18007ba70();
LAB_18019894b:
    local_64 = 1;
    func_0x18007ba70();
LAB_180198958:
    local_67 = 1;
    func_0x18007ba70();
LAB_180198965:
    local_66 = 1;
    func_0x18007ba70();
LAB_180198972:
    local_69 = 1;
    func_0x18007ba70();
LAB_18019897f:
    local_68 = 1;
    func_0x18007ba70();
LAB_18019898c:
    local_6b = 1;
    func_0x18007ba70();
LAB_180198999:
    local_6a = 1;
    func_0x18007ba70();
LAB_1801989a6:
    local_6d = 1;
    func_0x18007ba70();
LAB_1801989b3:
    local_6c = 1;
    func_0x18007ba70();
LAB_1801989c0:
    local_6f = 1;
    func_0x18007ba70();
LAB_1801989cd:
    local_6e = 1;
    func_0x18007ba70();
LAB_1801989da:
    local_71 = 1;
    func_0x18007ba70();
LAB_1801989e7:
    local_70 = 1;
    func_0x18007ba70();
LAB_1801989f4:
    local_73 = 1;
    func_0x18007ba70();
LAB_180198a01:
    local_72 = 1;
    func_0x18007ba70();
LAB_180198a0e:
    local_75 = 1;
    func_0x18007ba70();
LAB_180198a1b:
    local_74 = 1;
    func_0x18007ba70();
LAB_180198a28:
    local_77 = 1;
    func_0x18007ba70();
LAB_180198a35:
    local_76 = 1;
    func_0x18007ba70();
LAB_180198a42:
    local_79 = 1;
    func_0x18007ba70();
LAB_180198a4f:
    local_78 = 1;
    func_0x18007ba70();
LAB_180198a5c:
    local_7b = 1;
    func_0x18007ba70();
LAB_180198a69:
    local_7a = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_9 < 0x10) {
      pU64_17 = local_e8;
      uVal_20 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_17;
    }
    local_d8 = (uint8_t  [8])sz_9;
    uStack_d0 = uVal_20;
    func_0x1806aa960(pU64_17,fnPtr_1,sz_9);
    pU64_17[sz_9] = 0;
    pU64_17 = local_e8;
    func_0x1801c2ba0(local_88,0,0,pU64_17);
    if (0xf < uStack_d0) {
      uVal_20 = uStack_d0 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    *local_88 = &PTR_LAB_1806b8790;
    pU64_14 = local_88 + 0x10;
    *(uint32_t *)(local_88 + 0x10) = 0x10100;
    *(uint64_t *)((int64_t)local_88 + 0x84) = DAT_1806b28f0;
    *(uint32_t *)((int64_t)local_88 + 0x8c) = 0x3f800000;
    *(uint8_t (*)[16])(local_88 + 0x12) = (uint8_t  [16])0x0;
    local_88[0x14] = 0;
    local_230 = 0;
    if (DAT_18083f7c0 == (uint64_t *)0x0) {
      uVal_19 = 0;
    }
    else {
      local_230 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_268);
      uVal_19 = *(uint8_t *)pU64_14;
    }
    local_d8._4_4_ = _UNK_1806ba527;
    local_d8._0_4_ = _DAT_1806ba523;
    uStack_d0._0_4_ = _UNK_1806ba52b;
    uStack_d0._4_4_ = _UNK_1806ba52f;
    local_e8._8_8_ = _UNK_1806ba51b;
    local_e8._0_8_ = _DAT_1806ba513;
    local_c8 = 0xa9957714;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x65b4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x65b4) = 1;
      func_0x180086790(lVal_11 + 0x658d,local_e8);
      func_0x180673140(&LAB_1801ba9d0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x658d);
    func_0x1801c0e20(fnPtr_1);
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_1);
    if ((int64_t)sz_9 < 0) goto LAB_180198917;
    if (sz_9 < 0x10) {
      pU64_21 = local_a8;
      uVal_20 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_61 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_61 = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_21 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_11;
      }
      local_a8._0_8_ = pU64_21;
    }
    local_98._8_8_ = uVal_20;
    local_98._0_8_ = sz_9;
    func_0x1806aa960(pU64_21,fnPtr_1,sz_9);
    pU64_21[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x65c4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x65c4) = 1;
      *(uint64_t *)(lVal_11 + 0x65b8) = 0x29f06d49d9906e26;
      *(uint32_t *)(lVal_11 + 0x65c0) = 0x1f16a11;
      func_0x180673140(&LAB_1801baa00);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x65b8);
    if (*(char *)(lVal_11 + 0x65c3) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x47910569a9f11975;
      *(uint *)(lVal_11 + 0x65c0) =
           (*(uint *)(lVal_11 + 0x65c0) & 0xffff | (uint)*(byte *)(lVal_11 + 0x65c2) << 0x10) ^
           SUB164(_DAT_1806b6630,0);
    }
    _local_d8 = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_180198924;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_63 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_63 = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_17;
    }
    uStack_d0 = uVal_20;
    local_d8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_17,pU64_2,sz_9);
    pU64_17[sz_9] = 0;
    in_stack_fffffffffffffb38 = in_stack_fffffffffffffb38 & 0xffffff00;
    pU64_17 = local_a8;
    func_0x1801ccd70(local_88,local_e8,pU64_17,pU64_14,uVal_19,local_268,in_stack_fffffffffffffb38);
    if (0xf < uStack_d0) {
      uVal_20 = uStack_d0 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_20 = local_98._8_8_ + 1;
      lVal_11 = local_a8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    local_1f0 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_1f0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_228);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x65d0) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x65d0) = 1;
      *(uint8_t *)(lVal_11 + 0x65ce) = 1;
      *(uint32_t *)(lVal_11 + 0x65c8) = 0x6147067;
      *(uint16_t *)(lVal_11 + 0x65cc) = 0xe513;
      func_0x180673140(&LAB_1801baa30);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_11 + 0x65c8);
    if (*(char *)(lVal_11 + 0x65ce) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x63671535;
      *(byte *)(lVal_11 + 0x65cc) = *(byte *)(lVal_11 + 0x65cc) ^ 0x67;
      *(byte *)(lVal_11 + 0x65cd) = *(byte *)(lVal_11 + 0x65cd) ^ 0xe5;
      *(uint8_t *)(lVal_11 + 0x65ce) = 0;
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_3);
    if ((int64_t)sz_9 < 0) goto LAB_180198931;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_65 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_65 = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_a8._0_8_ = pU64_17;
    }
    local_98._8_8_ = uVal_20;
    local_98._0_8_ = sz_9;
    func_0x1806aa960(pU64_17,pU64_3,sz_9);
    pU64_17[sz_9] = 0;
    local_e8._8_8_ = local_88;
    local_e8._0_8_ = &PTR_LAB_1806bae20;
    local_b0 = (int64_t *)local_e8;
    local_108 = _DAT_1806ba537;
    uStack_100 = (undefined5)_UNK_1806ba53f;
    uStack_fb = 0x943e97;
    uStack_f8 = 0x670d087c41;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x65e8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x65e8) = 1;
      func_0x18007cd50(lVal_11 + 0x65d1,&local_108);
      func_0x180673140(&LAB_1801baa60);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x65d1);
    func_0x1801c0e50(fnPtr_1);
    local_118 = (uint8_t  [16])0x0;
    local_128 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_1);
    if ((int64_t)sz_9 < 0) goto LAB_18019893e;
    if (sz_9 < 0x10) {
      pU64_17 = local_128;
      uVal_20 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_62 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_62 = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_128._0_8_ = pU64_17;
    }
    local_118._8_8_ = uVal_20;
    local_118._0_8_ = sz_9;
    func_0x1806aa960(pU64_17,fnPtr_1,sz_9);
    pU64_17[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x65f4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x65f4) = 1;
      *(uint8_t *)(lVal_11 + 0x65f2) = 1;
      *(uint32_t *)(lVal_11 + 0x65ec) = 0x6147067;
      *(uint16_t *)(lVal_11 + 0x65f0) = 0xe513;
      func_0x180673140(&LAB_1801baa90);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_11 + 0x65ec);
    if (*(char *)(lVal_11 + 0x65f2) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x63671535;
      *(byte *)(lVal_11 + 0x65f0) = *(byte *)(lVal_11 + 0x65f0) ^ 0x67;
      *(byte *)(lVal_11 + 0x65f1) = *(byte *)(lVal_11 + 0x65f1) ^ 0xe5;
      *(uint8_t *)(lVal_11 + 0x65f2) = 0;
    }
    uStack_f8 = 0;
    uStack_f3 = 0;
    uStack_f0 = 0;
    local_108 = (uint64_t ****)0x0;
    uStack_100 = 0;
    uStack_fb = 0;
    sz_9 = strlen((char *)pU64_3);
    if ((int64_t)sz_9 < 0) goto LAB_18019894b;
    if (sz_9 < 0x10) {
      ptr4_U64_15 = &local_108;
      uVal_20 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_64 = 1;
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_108 = ptr4_U64_15;
      }
      else {
        local_64 = 1;
        ptr3_U64_12 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_12;
        local_108 = ptr4_U64_15;
      }
    }
    uStack_f8 = (undefined5)sz_9;
    uStack_f3 = (undefined3)(sz_9 >> 0x28);
    uStack_f0 = uVal_20;
    func_0x1806aa960(ptr4_U64_15,pU64_3,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_9) = 0;
    pU64_17 = local_a8;
    in_stack_fffffffffffffb38 = in_stack_fffffffffffffb38 & 0xffffff00;
    pLong_18 = (int64_t *)local_e8;
    pU64_21 = pU64_17;
    func_0x1801ccb00(local_88,&local_108,local_128,pLong_18,pU64_17,local_228,in_stack_fffffffffffffb38)
    ;
    if (0xf < uStack_f0) {
      uVal_20 = uStack_f0 + 1;
      ptr4_U64_15 = local_108;
      if (0xfff < uVal_20) {
        ptr4_U64_15 = (uint64_t ****)local_108[-1];
        if (0x1f < (uint64_t)((int64_t)local_108 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_180198910;
        uVal_20 = uStack_f0 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_20);
    }
    if (0xf < (uint64_t)local_118._8_8_) {
      uVal_20 = local_118._8_8_ + 1;
      lVal_11 = local_128._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_128._0_8_ + -8);
        if (0x1f < (uint64_t)((local_128._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = local_118._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    if (local_b0 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_b0 + 0x20))(local_b0,local_b0 != pLong_18);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_20 = local_98._8_8_ + 1;
      lVal_11 = local_a8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    local_1b0 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_1b0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_1e8);
    }
    pU64_4 = (uint8_t *)((int64_t)local_88 + 0x81);
    uVal_19 = *pU64_4;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6604) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x6604) = 1;
      *(uint64_t *)(lVal_11 + 0x65f8) = 0x96b7fef8a6ff36cb;
      *(uint32_t *)(lVal_11 + 0x6600) = 0x18f3df6;
      func_0x180673140(&LAB_1801baac0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x65f8);
    if (*(char *)(lVal_11 + 0x6603) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xffc3978bc98f5399;
      *(uint *)(lVal_11 + 0x6600) =
           (*(uint *)(lVal_11 + 0x6600) & 0xffff | (uint)*(byte *)(lVal_11 + 0x6602) << 0x10) ^
           SUB164(_DAT_1806b2700,0);
    }
    _local_d8 = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_180198958;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_67 = 1;
        pLong_18 = (int64_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_67 = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pLong_18 = (int64_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        pLong_18[-1] = lVal_11;
      }
      local_e8._0_8_ = pLong_18;
    }
    uStack_d0 = uVal_20;
    local_d8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pLong_18,pU64_2,sz_9);
    *(uint8_t *)((int64_t)pLong_18 + sz_9) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6614) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x6614) = 1;
      *(uint8_t *)(lVal_11 + 0x6612) = 1;
      *(uint64_t *)(lVal_11 + 0x6608) = 0x8ba2fbf8a7ee21cd;
      *(uint16_t *)(lVal_11 + 0x6610) = 0x53fc;
      func_0x180673140(&LAB_1801baaf0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x6608);
    if (*(char *)(lVal_11 + 0x6612) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xffc3978bc98f5399;
      *(byte *)(lVal_11 + 0x6610) = *(byte *)(lVal_11 + 0x6610) ^ 0x99;
      *(byte *)(lVal_11 + 0x6611) = *(byte *)(lVal_11 + 0x6611) ^ 0x53;
      *(uint8_t *)(lVal_11 + 0x6612) = 0;
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_180198965;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_66 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_66 = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_a8._0_8_ = pU64_17;
    }
    local_98._8_8_ = uVal_20;
    local_98._0_8_ = sz_9;
    func_0x1806aa960(pU64_17,pU64_2,sz_9);
    pU64_17[sz_9] = 0;
    uVal_22 = CONCAT71((int7)((uint64_t)pU64_21 >> 8),uVal_19);
    in_stack_fffffffffffffb38 = in_stack_fffffffffffffb38 & 0xffffff00;
    pU64_17 = local_a8;
    pU64_21 = local_e8;
    func_0x1801ccd70(local_88,pU64_17,pU64_21,pU64_4,uVal_22,local_1e8,in_stack_fffffffffffffb38);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_20 = local_98._8_8_ + 1;
      lVal_11 = local_a8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    if (0xf < uStack_d0) {
      uVal_20 = uStack_d0 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    local_170 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_170 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_1a8);
    }
    pU64_4 = (uint8_t *)((int64_t)local_88 + 0x82);
    uVal_19 = *pU64_4;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6624) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x6624) = 1;
      *(uint8_t *)(lVal_11 + 0x6622) = 1;
      *(uint64_t *)(lVal_11 + 0x6618) = 0xf5bcf9cee66eeeb5;
      *(uint16_t *)(lVal_11 + 0x6620) = 0x8b80;
      func_0x180673140(&LAB_1801bab20);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x6618);
    if (*(char *)(lVal_11 + 0x6622) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x9bd595af851d8be7;
      *(byte *)(lVal_11 + 0x6620) = *(byte *)(lVal_11 + 0x6620) ^ 0xe7;
      *(byte *)(lVal_11 + 0x6621) = *(byte *)(lVal_11 + 0x6621) ^ 0x8b;
      *(uint8_t *)(lVal_11 + 0x6622) = 0;
    }
    _local_d8 = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_180198972;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_69 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_69 = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_21 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_21;
    }
    uStack_d0 = uVal_20;
    local_d8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_21,pU64_2,sz_9);
    pU64_21[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6630) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x6630) = 1;
      *(uint8_t *)(lVal_11 + 0x662e) = 1;
      *(uint32_t *)(lVal_11 + 0x6628) = 0xe97ce8b4;
      *(uint16_t *)(lVal_11 + 0x662c) = 0x95ca;
      func_0x180673140(&LAB_1801bab50);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_11 + 0x6628);
    if (*(char *)(lVal_11 + 0x662e) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x851d8be7;
      *(byte *)(lVal_11 + 0x662c) = *(byte *)(lVal_11 + 0x662c) ^ 0xaf;
      *(byte *)(lVal_11 + 0x662d) = *(byte *)(lVal_11 + 0x662d) ^ 0x95;
      *(uint8_t *)(lVal_11 + 0x662e) = 0;
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_3);
    if ((int64_t)sz_9 < 0) goto LAB_18019897f;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_68 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_68 = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_a8._0_8_ = pU64_17;
    }
    local_98._8_8_ = uVal_20;
    local_98._0_8_ = sz_9;
    func_0x1806aa960(pU64_17,pU64_3,sz_9);
    pU64_17[sz_9] = 0;
    uVal_22 = CONCAT71((int7)((uint64_t)uVal_22 >> 8),uVal_19);
    in_stack_fffffffffffffb38 = in_stack_fffffffffffffb38 & 0xffffff00;
    pU64_17 = local_a8;
    pU64_21 = local_e8;
    func_0x1801ccd70(local_88,pU64_17,pU64_21,pU64_4,uVal_22,local_1a8,in_stack_fffffffffffffb38);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_20 = local_98._8_8_ + 1;
      lVal_11 = local_a8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    if (0xf < uStack_d0) {
      uVal_20 = uStack_d0 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    local_130 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_130 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_168);
    }
    pU64_4 = (uint8_t *)((int64_t)local_88 + 0x83);
    uVal_19 = *pU64_4;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6644) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x6644) = 1;
      *(uint64_t *)(lVal_11 + 0x6638) = 0x578ca8efdae73c21;
      *(uint16_t *)(lVal_11 + 0x6640) = 0x173;
      func_0x180673140(&LAB_1801bab80);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x6638);
    if (*(char *)(lVal_11 + 0x6641) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x39e3c19bbb935373;
      *(byte *)(lVal_11 + 0x6640) = *(byte *)(lVal_11 + 0x6640) ^ 0x73;
      *(uint8_t *)(lVal_11 + 0x6641) = 0;
    }
    _local_d8 = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_18019898c;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6b = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_6b = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_21 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_21;
    }
    uStack_d0 = uVal_20;
    local_d8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_21,pU64_2,sz_9);
    pU64_21[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6650) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x6650) = 1;
      *(uint64_t *)(lVal_11 + 0x6648) = 0x1e3a4efdae73c21;
      func_0x180673140(&LAB_1801babb0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x6648);
    if (*(char *)(lVal_11 + 0x664f) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_11 + 0x664d) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_11 + 0x664c) << 0x20) ^ SUB168(_DAT_1806b6640,0);
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_180198999;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6a = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_6a = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_a8._0_8_ = pU64_17;
    }
    local_98._8_8_ = uVal_20;
    local_98._0_8_ = sz_9;
    func_0x1806aa960(pU64_17,pU64_2,sz_9);
    pU64_17[sz_9] = 0;
    pU64_17 = local_168;
    uVal_22 = CONCAT71((int7)((uint64_t)uVal_22 >> 8),uVal_19);
    pU64_21 = local_a8;
    pU64_16 = local_e8;
    func_0x1801ccd70(local_88,pU64_21,pU64_16,pU64_4,uVal_22,pU64_17,
                  in_stack_fffffffffffffb38 & 0xffffff00);
    uVal_25 = (uint32_t)((uint64_t)pU64_17 >> 0x20);
    uVal_23 = (uint32_t)((uint64_t)uVal_22 >> 0x20);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_20 = local_98._8_8_ + 1;
      lVal_11 = local_a8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    if (0xf < uStack_d0) {
      uVal_20 = uStack_d0 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    local_4a8 = &PTR_LAB_1806bae50;
    local_4a0 = local_88;
    local_470 = &local_4a8;
    uVal_6 = *(uint32_t *)(local_88 + 0x12);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6654) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x6654) = 1;
      *(uint16_t *)(lVal_11 + 0x6651) = 0x199;
      func_0x180673140(&LAB_1801babe0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_5 = (byte *)(lVal_11 + 0x6651);
    if (*(char *)(lVal_11 + 0x6652) == '\x01') {
      *pU8_5 = *pU8_5 ^ 0x99;
      *(uint8_t *)(lVal_11 + 0x6652) = 0;
    }
    _local_d8 = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_5);
    if ((int64_t)sz_9 < 0) goto LAB_1801989a6;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6d = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_6d = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_16 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_16;
    }
    uStack_d0 = uVal_20;
    local_d8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_16,pU8_5,sz_9);
    pU64_16[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6664) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x6664) = 1;
      *(uint64_t *)(lVal_11 + 0x6658) = 0xb31e1b5005cc35cd;
      *(uint32_t *)(lVal_11 + 0x6660) = 0x1ad1ffc;
      func_0x180673140(&LAB_1801bac00);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x6658);
    if (*(char *)(lVal_11 + 0x6663) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xc77f77236bad4799;
      *(uint *)(lVal_11 + 0x6660) =
           (*(uint *)(lVal_11 + 0x6660) & 0xffff | (uint)*(byte *)(lVal_11 + 0x6662) << 0x10) ^
           SUB164(_DAT_1806b6650,0);
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_1801989b3;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6c = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_6c = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_21 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_11;
      }
      local_a8._0_8_ = pU64_21;
    }
    pU64_8 = local_88;
    pU64_14 = local_88 + 0x12;
    local_98._8_8_ = uVal_20;
    local_98._0_8_ = sz_9;
    func_0x1806aa960(pU64_21,pU64_2,sz_9);
    pU64_21[sz_9] = 0;
    uVal_22 = CONCAT44(uVal_23,uVal_6);
    uVal_24 = CONCAT44(uVal_25,0xc0000000);
    pU64_17 = local_a8;
    pU64_21 = local_e8;
    func_0x1801cd2e0(pU64_8,pU64_17,pU64_21,pU64_14,uVal_22,uVal_24,0x40000000,&local_4a8,0);
    uVal_25 = (uint32_t)((uint64_t)uVal_24 >> 0x20);
    uVal_23 = (uint32_t)((uint64_t)uVal_22 >> 0x20);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_20 = local_98._8_8_ + 1;
      lVal_11 = local_a8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    if (0xf < uStack_d0) {
      uVal_20 = uStack_d0 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    local_468 = &PTR_LAB_1806bae50;
    local_460 = local_88;
    local_430 = &local_468;
    uVal_6 = *(uint32_t *)((int64_t)local_88 + 0x94);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6668) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x6668) = 1;
      *(uint16_t *)(lVal_11 + 0x6665) = 0x187;
      func_0x180673140(&LAB_1801bac30);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_5 = (byte *)(lVal_11 + 0x6665);
    if (*(char *)(lVal_11 + 0x6666) == '\x01') {
      *pU8_5 = *pU8_5 ^ 0x87;
      *(uint8_t *)(lVal_11 + 0x6666) = 0;
    }
    _local_d8 = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_5);
    if ((int64_t)sz_9 < 0) goto LAB_1801989c0;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6f = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_6f = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_21 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_21;
    }
    uStack_d0 = uVal_20;
    local_d8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_21,pU8_5,sz_9);
    pU64_21[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x667c) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x667c) = 1;
      *(uint64_t *)(lVal_11 + 0x6670) = 0xbd16773697f049d3;
      *(uint32_t *)(lVal_11 + 0x6678) = 0x19162e2;
      func_0x180673140(&LAB_1801bac50);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x6670);
    if (*(char *)(lVal_11 + 0x667b) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xc9771b45f9913b87;
      *(uint *)(lVal_11 + 0x6678) =
           (*(uint *)(lVal_11 + 0x6678) & 0xffff | (uint)*(byte *)(lVal_11 + 0x667a) << 0x10) ^
           SUB164(_DAT_1806b2730,0);
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_1801989cd;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6e = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_6e = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_a8._0_8_ = pU64_17;
    }
    pU64_14 = local_88;
    lVal_11 = (int64_t)local_88 + 0x94;
    local_98._8_8_ = uVal_20;
    local_98._0_8_ = sz_9;
    func_0x1806aa960(pU64_17,pU64_2,sz_9);
    pU64_17[sz_9] = 0;
    uVal_22 = CONCAT44(uVal_23,uVal_6);
    uVal_24 = CONCAT44(uVal_25,0xc0000000);
    pU64_17 = local_a8;
    pU64_21 = local_e8;
    func_0x1801cd2e0(pU64_14,pU64_17,pU64_21,lVal_11,uVal_22,uVal_24,0x40000000,&local_468,0);
    uVal_25 = (uint32_t)((uint64_t)uVal_24 >> 0x20);
    uVal_23 = (uint32_t)((uint64_t)uVal_22 >> 0x20);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_20 = local_98._8_8_ + 1;
      lVal_11 = local_a8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    if (0xf < uStack_d0) {
      uVal_20 = uStack_d0 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    local_428 = &PTR_LAB_1806bae50;
    local_420 = local_88;
    local_3f0 = &local_428;
    uVal_6 = *(uint32_t *)(local_88 + 0x13);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6680) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x6680) = 1;
      *(uint16_t *)(lVal_11 + 0x667d) = 0x1dd;
      func_0x180673140(&LAB_1801bac80);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_5 = (byte *)(lVal_11 + 0x667d);
    if (*(char *)(lVal_11 + 0x667e) == '\x01') {
      *pU8_5 = *pU8_5 ^ 0xdd;
      *(uint8_t *)(lVal_11 + 0x667e) = 0;
    }
    _local_d8 = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_5);
    if ((int64_t)sz_9 < 0) goto LAB_1801989da;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_71 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_71 = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_21 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_21;
    }
    uStack_d0 = uVal_20;
    local_d8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_21,pU8_5,sz_9);
    pU64_21[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6694) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x6694) = 1;
      *(uint64_t *)(lVal_11 + 0x6688) = 0x96025dcc5641989;
      *(uint32_t *)(lVal_11 + 0x6690) = 0x10531b8;
      func_0x180673140(&LAB_1801baca0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x6688);
    if (*(char *)(lVal_11 + 0x6693) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x7d0149afab056bdd;
      *(uint *)(lVal_11 + 0x6690) =
           (*(uint *)(lVal_11 + 0x6690) & 0xffff | (uint)*(byte *)(lVal_11 + 0x6692) << 0x10) ^
           SUB164(_DAT_1806b6660,0);
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_1801989e7;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_70 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_70 = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_a8._0_8_ = pU64_17;
    }
    pU64_8 = local_88;
    pU64_14 = local_88 + 0x13;
    local_98._8_8_ = uVal_20;
    local_98._0_8_ = sz_9;
    func_0x1806aa960(pU64_17,pU64_2,sz_9);
    pU64_17[sz_9] = 0;
    uVal_22 = CONCAT44(uVal_23,uVal_6);
    uVal_20 = CONCAT44(uVal_25,0xc0000000);
    pU64_17 = local_a8;
    pU64_21 = local_e8;
    func_0x1801cd2e0(pU64_8,pU64_17,pU64_21,pU64_14,uVal_22,uVal_20,0x40000000,&local_428,0);
    uVal_23 = (uint32_t)((uint64_t)uVal_22 >> 0x20);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_10 = local_98._8_8_ + 1;
      lVal_11 = local_a8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_10 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    if (0xf < uStack_d0) {
      uVal_10 = uStack_d0 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_10 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_3e8 = &PTR_LAB_1806bae80;
    local_3e0 = local_88;
    local_3b0 = &local_3e8;
    uVal_25 = *(uint32_t *)((int64_t)local_88 + 0x84);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x6698) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x6698) = 1;
      *(uint16_t *)(lVal_11 + 0x6695) = 0x1ed;
      func_0x180673140(&LAB_1801bacd0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_5 = (byte *)(lVal_11 + 0x6695);
    if (*(char *)(lVal_11 + 0x6696) == '\x01') {
      *pU8_5 = *pU8_5 ^ 0xed;
      *(uint8_t *)(lVal_11 + 0x6696) = 0;
    }
    _local_d8 = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_5);
    if ((int64_t)sz_9 < 0) goto LAB_1801989f4;
    uVal_10 = 0xf;
    if (0xf < sz_9) {
      uVal_13 = sz_9 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_13) {
        uVal_10 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_73 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
      }
      else {
        local_73 = 1;
        lVal_11 = func_0x180672de0(uVal_10 + 0x28);
        pU64_21 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_21;
    }
    uStack_d0 = uVal_10;
    local_d8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_21,pU8_5,sz_9);
    pU64_21[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x66a8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x66a8) = 1;
      *(uint64_t *)(lVal_11 + 0x66a0) = 0x1d3f5d4ed8038be;
      func_0x180673140(&LAB_1801bacf0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x66a0);
    if (*(char *)(lVal_11 + 0x66a7) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_11 + 0x66a5) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_11 + 0x66a4) << 0x20) ^ SUB168(_DAT_1806b5590,0);
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_180198a01;
    uVal_10 = 0xf;
    if (0xf < sz_9) {
      uVal_13 = sz_9 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_13) {
        uVal_10 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_72 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
      }
      else {
        local_72 = 1;
        lVal_11 = func_0x180672de0(uVal_10 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_a8._0_8_ = pU64_17;
    }
    pU64_14 = local_88;
    lVal_11 = (int64_t)local_88 + 0x84;
    local_98._8_8_ = uVal_10;
    local_98._0_8_ = sz_9;
    func_0x1806aa960(pU64_17,pU64_2,sz_9);
    pU64_17[sz_9] = 0;
    uVal_22 = CONCAT44(uVal_23,uVal_25);
    uVal_20 = uVal_20 & 0xffffffff00000000;
    pU64_17 = local_a8;
    pU64_21 = local_e8;
    func_0x1801cd2e0(pU64_14,pU64_17,pU64_21,lVal_11,uVal_22,uVal_20,0x40000000,&local_3e8,0);
    uVal_23 = (uint32_t)((uint64_t)uVal_22 >> 0x20);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_10 = local_98._8_8_ + 1;
      lVal_11 = local_a8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_10 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    if (0xf < uStack_d0) {
      uVal_10 = uStack_d0 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_10 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_3a8 = &PTR_LAB_1806bae80;
    local_3a0 = local_88;
    local_370 = &local_3a8;
    uVal_25 = *(uint32_t *)(local_88 + 0x11);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x66ac) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x66ac) = 1;
      *(uint16_t *)(lVal_11 + 0x66a9) = 0x153;
      func_0x180673140(&LAB_1801bad20);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_5 = (byte *)(lVal_11 + 0x66a9);
    if (*(char *)(lVal_11 + 0x66aa) == '\x01') {
      *pU8_5 = *pU8_5 ^ 0x53;
      *(uint8_t *)(lVal_11 + 0x66aa) = 0;
    }
    _local_d8 = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_5);
    if ((int64_t)sz_9 < 0) goto LAB_180198a0e;
    uVal_10 = 0xf;
    if (0xf < sz_9) {
      uVal_13 = sz_9 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_13) {
        uVal_10 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_75 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
      }
      else {
        local_75 = 1;
        lVal_11 = func_0x180672de0(uVal_10 + 0x28);
        pU64_21 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_21;
    }
    uStack_d0 = uVal_10;
    local_d8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_21,pU8_5,sz_9);
    pU64_21[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x66b8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x66b8) = 1;
      *(uint64_t *)(lVal_11 + 0x66b0) = 0x183a4cc0318f000;
      func_0x180673140(&LAB_1801bad40);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x66b0);
    if (*(char *)(lVal_11 + 0x66b7) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_11 + 0x66b5) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_11 + 0x66b4) << 0x20) ^ SUB168(_DAT_1806b6670,0);
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_180198a1b;
    uVal_10 = 0xf;
    if (0xf < sz_9) {
      uVal_13 = sz_9 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_13) {
        uVal_10 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_74 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
      }
      else {
        local_74 = 1;
        lVal_11 = func_0x180672de0(uVal_10 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_a8._0_8_ = pU64_17;
    }
    pU64_8 = local_88;
    pU64_14 = local_88 + 0x11;
    local_98._8_8_ = uVal_10;
    local_98._0_8_ = sz_9;
    func_0x1806aa960(pU64_17,pU64_2,sz_9);
    pU64_17[sz_9] = 0;
    uVal_22 = CONCAT44(uVal_23,uVal_25);
    uVal_20 = uVal_20 & 0xffffffff00000000;
    pU64_17 = local_a8;
    pU64_21 = local_e8;
    func_0x1801cd2e0(pU64_8,pU64_17,pU64_21,pU64_14,uVal_22,uVal_20,0x40000000,&local_3a8,0);
    uVal_23 = (uint32_t)((uint64_t)uVal_22 >> 0x20);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_10 = local_98._8_8_ + 1;
      lVal_11 = local_a8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_10 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    if (0xf < uStack_d0) {
      uVal_10 = uStack_d0 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_10 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_368 = &PTR_LAB_1806bae80;
    local_360 = local_88;
    local_330 = &local_368;
    uVal_25 = *(uint32_t *)((int64_t)local_88 + 0x8c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x66bc) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x66bc) = 1;
      *(uint16_t *)(lVal_11 + 0x66b9) = 0x19f;
      func_0x180673140(&LAB_1801bad70);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_5 = (byte *)(lVal_11 + 0x66b9);
    if (*(char *)(lVal_11 + 0x66ba) == '\x01') {
      *pU8_5 = *pU8_5 ^ 0x9f;
      *(uint8_t *)(lVal_11 + 0x66ba) = 0;
    }
    _local_d8 = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_5);
    if ((int64_t)sz_9 < 0) goto LAB_180198a28;
    uVal_10 = 0xf;
    if (0xf < sz_9) {
      uVal_13 = sz_9 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_13) {
        uVal_10 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_77 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
      }
      else {
        local_77 = 1;
        lVal_11 = func_0x180672de0(uVal_10 + 0x28);
        pU64_21 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_21;
    }
    uStack_d0 = uVal_10;
    local_d8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_21,pU8_5,sz_9);
    pU64_21[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x66c8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x66c8) = 1;
      *(uint64_t *)(lVal_11 + 0x66c0) = 0x14de3a8f72cdecc;
      func_0x180673140(&LAB_1801bad90);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x66c0);
    if (*(char *)(lVal_11 + 0x66c7) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_11 + 0x66c5) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_11 + 0x66c4) << 0x20) ^ SUB168(_DAT_1806b6680,0);
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_180198a35;
    uVal_10 = 0xf;
    if (0xf < sz_9) {
      uVal_13 = sz_9 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_13) {
        uVal_10 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_76 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
      }
      else {
        local_76 = 1;
        lVal_11 = func_0x180672de0(uVal_10 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_a8._0_8_ = pU64_17;
    }
    pU64_14 = local_88;
    lVal_11 = (int64_t)local_88 + 0x8c;
    local_98._8_8_ = uVal_10;
    local_98._0_8_ = sz_9;
    func_0x1806aa960(pU64_17,pU64_2,sz_9);
    pU64_17[sz_9] = 0;
    uVal_22 = CONCAT44(uVal_23,uVal_25);
    uVal_20 = uVal_20 & 0xffffffff00000000;
    pU64_17 = local_a8;
    pU64_21 = local_e8;
    func_0x1801cd2e0(pU64_14,pU64_17,pU64_21,lVal_11,uVal_22,uVal_20,0x40000000,&local_368,0);
    uVal_25 = (uint32_t)(uVal_20 >> 0x20);
    uVal_23 = (uint32_t)((uint64_t)uVal_22 >> 0x20);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_20 = local_98._8_8_ + 1;
      lVal_11 = local_a8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    if (0xf < uStack_d0) {
      uVal_20 = uStack_d0 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    local_328 = &PTR_LAB_1806baeb0;
    local_320 = local_88;
    local_2f0 = &local_328;
    uVal_6 = *(uint32_t *)((int64_t)local_88 + 0x9c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x66cc) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x66cc) = 1;
      *(uint16_t *)(lVal_11 + 0x66c9) = 0x1a9;
      func_0x180673140(&LAB_1801badc0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_5 = (byte *)(lVal_11 + 0x66c9);
    if (*(char *)(lVal_11 + 0x66ca) == '\x01') {
      *pU8_5 = *pU8_5 ^ 0xa9;
      *(uint8_t *)(lVal_11 + 0x66ca) = 0;
    }
    _local_d8 = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_5);
    if ((int64_t)sz_9 < 0) goto LAB_180198a42;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_79 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_79 = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_21 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_21;
    }
    uStack_d0 = uVal_20;
    local_d8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_21,pU8_5,sz_9);
    pU64_21[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x66d8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x66d8) = 1;
      *(uint8_t *)(lVal_11 + 0x66d6) = 1;
      *(uint32_t *)(lVal_11 + 0x66d0) = 0x38b8d1e8;
      *(uint16_t *)(lVal_11 + 0x66d4) = 0xc92d;
      func_0x180673140(&LAB_1801bade0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_11 + 0x66d0);
    if (*(char *)(lVal_11 + 0x66d6) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x4bd1a9a9;
      *(byte *)(lVal_11 + 0x66d4) = *(byte *)(lVal_11 + 0x66d4) ^ 0x75;
      *(byte *)(lVal_11 + 0x66d5) = *(byte *)(lVal_11 + 0x66d5) ^ 0xc9;
      *(uint8_t *)(lVal_11 + 0x66d6) = 0;
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_3);
    if ((int64_t)sz_9 < 0) goto LAB_180198a4f;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_78 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_78 = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_a8._0_8_ = pU64_17;
    }
    pU64_14 = local_88;
    lVal_11 = (int64_t)local_88 + 0x9c;
    local_98._8_8_ = uVal_20;
    local_98._0_8_ = sz_9;
    func_0x1806aa960(pU64_17,pU64_3,sz_9);
    pU64_17[sz_9] = 0;
    uVal_22 = CONCAT44(uVal_23,uVal_6);
    uVal_24 = CONCAT44(uVal_25,0xc3340000);
    pU64_17 = local_a8;
    pU64_21 = local_e8;
    func_0x1801cd2e0(pU64_14,pU64_17,pU64_21,lVal_11,uVal_22,uVal_24,0x43340000,&local_328,0);
    uVal_25 = (uint32_t)((uint64_t)uVal_24 >> 0x20);
    uVal_23 = (uint32_t)((uint64_t)uVal_22 >> 0x20);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_20 = local_98._8_8_ + 1;
      lVal_11 = local_a8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    if (0xf < uStack_d0) {
      uVal_20 = uStack_d0 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    local_2e8 = &PTR_LAB_1806baeb0;
    local_2e0 = local_88;
    local_2b0 = &local_2e8;
    uVal_6 = *(uint32_t *)(local_88 + 0x14);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x66dc) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x66dc) = 1;
      *(uint16_t *)(lVal_11 + 0x66d9) = 0x17d;
      func_0x180673140(&LAB_1801bae10);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_5 = (byte *)(lVal_11 + 0x66d9);
    if (*(char *)(lVal_11 + 0x66da) == '\x01') {
      *pU8_5 = *pU8_5 ^ 0x7d;
      *(uint8_t *)(lVal_11 + 0x66da) = 0;
    }
    _local_d8 = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_5);
    if ((int64_t)sz_9 < 0) goto LAB_180198a5c;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_7b = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_7b = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_21 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_21;
    }
    uStack_d0 = uVal_20;
    local_d8 = (uint8_t  [8])sz_9;
    func_0x1806aa960(pU64_21,pU8_5,sz_9);
    pU64_21[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x66e8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x66e8) = 1;
      *(uint8_t *)(lVal_11 + 0x66e6) = 1;
      *(uint32_t *)(lVal_11 + 0x66e0) = 0x6c86e73c;
      *(uint16_t *)(lVal_11 + 0x66e4) = 0x8956;
      func_0x180673140(&LAB_1801bae30);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_11 + 0x66e0);
    if (*(char *)(lVal_11 + 0x66e6) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x1fef9f7d;
      *(byte *)(lVal_11 + 0x66e4) = *(byte *)(lVal_11 + 0x66e4) ^ 0xf;
      *(byte *)(lVal_11 + 0x66e5) = *(byte *)(lVal_11 + 0x66e5) ^ 0x89;
      *(uint8_t *)(lVal_11 + 0x66e6) = 0;
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_3);
    if ((int64_t)sz_9 < 0) goto LAB_180198a69;
    uVal_20 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_10) {
        uVal_20 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_7a = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_7a = 1;
        lVal_11 = func_0x180672de0(uVal_20 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_a8._0_8_ = pU64_17;
    }
    pU64_8 = local_88;
    pU64_14 = local_88 + 0x14;
    local_98._8_8_ = uVal_20;
    local_98._0_8_ = sz_9;
    func_0x1806aa960(pU64_17,pU64_3,sz_9);
    pU64_17[sz_9] = 0;
    uVal_22 = CONCAT44(uVal_23,uVal_6);
    uVal_24 = CONCAT44(uVal_25,0xc3340000);
    pU64_17 = local_a8;
    pU64_21 = local_e8;
    func_0x1801cd2e0(pU64_8,pU64_17,pU64_21,pU64_14,uVal_22,uVal_24,0x43340000,&local_2e8,0);
    uVal_25 = (uint32_t)((uint64_t)uVal_24 >> 0x20);
    uVal_23 = (uint32_t)((uint64_t)uVal_22 >> 0x20);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_20 = local_98._8_8_ + 1;
      lVal_11 = local_a8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    if (0xf < uStack_d0) {
      uVal_20 = uStack_d0 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_20) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
        uVal_20 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_20);
    }
    local_2a8 = &PTR_LAB_1806baeb0;
    local_2a0 = local_88;
    local_270 = &local_2a8;
    uVal_6 = *(uint32_t *)((int64_t)local_88 + 0xa4);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x66ec) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x66ec) = 1;
      *(uint16_t *)(lVal_11 + 0x66e9) = 0x10f;
      func_0x180673140(&LAB_1801bae60);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_5 = (byte *)(lVal_11 + 0x66e9);
    if (*(char *)(lVal_11 + 0x66ea) == '\x01') {
      *pU8_5 = *pU8_5 ^ 0xf;
      *(uint8_t *)(lVal_11 + 0x66ea) = 0;
    }
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_5);
    if (-1 < (int64_t)sz_9) {
      uVal_20 = 0xf;
      if (0xf < sz_9) {
        uVal_10 = sz_9 | 0xf;
        uVal_20 = 0x16;
        if (0x16 < uVal_10) {
          uVal_20 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          local_7d = 1;
          pU64_21 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
        }
        else {
          local_7d = 1;
          lVal_11 = func_0x180672de0(uVal_20 + 0x28);
          pU64_21 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_21 + -8) = lVal_11;
        }
        local_e8._0_8_ = pU64_21;
      }
      uStack_d0 = uVal_20;
      local_d8 = (uint8_t  [8])sz_9;
      func_0x1806aa960(pU64_21,pU8_5,sz_9);
      pU64_21[sz_9] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x66f8) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0x66f8) = 1;
        *(uint8_t *)(lVal_11 + 0x66f6) = 1;
        *(uint32_t *)(lVal_11 + 0x66f0) = 0x8ca214e;
        *(uint16_t *)(lVal_11 + 0x66f4) = 0xcdcf;
        func_0x180673140(&LAB_1801bae80);
      }
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_3 = (uint *)(lVal_11 + 0x66f0);
      if (*(char *)(lVal_11 + 0x66f6) == '\x01') {
        *pU64_3 = *pU64_3 ^ 0x7ba3590f;
        *(byte *)(lVal_11 + 0x66f4) = *(byte *)(lVal_11 + 0x66f4) ^ 0x95;
        *(byte *)(lVal_11 + 0x66f5) = *(byte *)(lVal_11 + 0x66f5) ^ 0xcd;
        *(uint8_t *)(lVal_11 + 0x66f6) = 0;
      }
      local_a8 = (uint8_t  [16])0x0;
      sz_9 = strlen((char *)pU64_3);
      if (-1 < (int64_t)sz_9) {
        uVal_20 = 0xf;
        if (0xf < sz_9) {
          uVal_10 = sz_9 | 0xf;
          uVal_20 = 0x16;
          if (0x16 < uVal_10) {
            uVal_20 = uVal_10;
          }
          if (uVal_10 < 0xfff) {
            local_7c = 1;
            pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
          }
          else {
            local_7c = 1;
            lVal_11 = func_0x180672de0(uVal_20 + 0x28);
            pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_17 + -8) = lVal_11;
          }
          local_a8._0_8_ = pU64_17;
        }
        pU64_14 = local_88;
        lVal_11 = (int64_t)local_88 + 0xa4;
        local_98._0_8_ = sz_9;
        local_98._8_8_ = uVal_20;
        func_0x1806aa960(pU64_17,pU64_3,sz_9);
        pU64_17[sz_9] = 0;
        func_0x1801cd2e0(pU64_14,local_a8,local_e8,lVal_11,CONCAT44(uVal_23,uVal_6),
                      CONCAT44(uVal_25,0xc3340000),0x43340000,&local_2a8,0);
        if (0xf < (uint64_t)local_98._8_8_) {
          uVal_20 = local_98._8_8_ + 1;
          lVal_11 = local_a8._0_8_;
          if (0xfff < uVal_20) {
            lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) goto LAB_180198910;
            uVal_20 = local_98._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_20);
        }
        if (0xf < uStack_d0) {
          uVal_20 = uStack_d0 + 1;
          lVal_11 = local_e8._0_8_;
          if (0xfff < uVal_20) {
            lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) {
LAB_180198910:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_20 = uStack_d0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_20);
        }
        return local_88;
      }
      goto LAB_180198a83;
    }
  }
  local_7d = 1;
  func_0x18007ba70();
LAB_180198a83:
  local_7c = 1;
  func_0x18007ba70();
  fnPtr_7 = (func_ptr_t )swi(3);
  pU64_14 = (uint64_t *)(*fnPtr_7)();
  return pU64_14;
}

// Unwind@180198aa0
void Unwind_180198aa0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x290));
    *(uint64_t *)(param_2 + 0x2c8) = 0;
  }
  return;
}

// Unwind@180198b10
void Unwind_180198b10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x65b4) = 0;
  *(uint8_t *)(param_2 + 0x497) = 1;
  return;
}

// Unwind@180198b70
void Unwind_180198b70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x308);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2d0));
    *(uint64_t *)(param_2 + 0x308) = 0;
  }
  return;
}

// Unwind@180198be0
void Unwind_180198be0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x348);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x310));
    *(uint64_t *)(param_2 + 0x348) = 0;
  }
  return;
}

// Unwind@180198c50
void Unwind_180198c50(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x388);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x350));
    *(uint64_t *)(param_2 + 0x388) = 0;
  }
  return;
}

// Unwind@180198cc0
void Unwind_180198cc0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x3c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x390));
    *(uint64_t *)(param_2 + 0x3c8) = 0;
  }
  return;
}

// Unwind@180198d30
void Unwind_180198d30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x410);
  return;
}

// Unwind@180198d80
void Unwind_180198d80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x410);
  *(uint8_t *)(param_2 + 0x495) = 0;
  return;
}

// Unwind@180198dd0
void Unwind_180198dd0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x495);
  func_0x180001e70(param_2 + 0x450);
  *(uint8_t *)(param_2 + 0x497) = uVal_1;
  return;
}

// Unwind@180198e20
void Unwind_180198e20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x497) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x290));
    *(uint64_t *)(param_2 + 0x2c8) = 0;
  }
  return;
}

// Unwind@180198e90
void Unwind_180198e90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3f0);
  *(uint8_t *)(param_2 + 0x494) = 0;
  return;
}

// Unwind@180198ee0
void Unwind_180198ee0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x494);
  func_0x180001e70(param_2 + 0x3d0);
  *(uint8_t *)(param_2 + 0x496) = uVal_1;
  return;
}

// Unwind@180198f30
void Unwind_180198f30(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  int64_t *pLong_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x496);
  pLong_2 = *(int64_t **)(param_2 + 0x448);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != (int64_t *)(param_2 + 0x410));
  }
  func_0x180001e70(param_2 + 0x450);
  *(byte *)(param_2 + 0x493) = bFlag_1 & 1;
  return;
}

// Unwind@180198fb0
void Unwind_180198fb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x493) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x308), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2d0));
    *(uint64_t *)(param_2 + 0x308) = 0;
  }
  return;
}

// Unwind@180199020
void Unwind_180199020(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x450);
  *(uint8_t *)(param_2 + 0x492) = 0;
  return;
}

// Unwind@180199070
void Unwind_180199070(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x492);
  func_0x180001e70(param_2 + 0x410);
  *(uint8_t *)(param_2 + 0x491) = uVal_1;
  return;
}

// Unwind@1801990c0
void Unwind_1801990c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x491) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x348), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x310));
    *(uint64_t *)(param_2 + 0x348) = 0;
  }
  return;
}

// Unwind@180199130
void Unwind_180199130(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x450);
  *(uint8_t *)(param_2 + 0x490) = 0;
  return;
}

// Unwind@180199180
void Unwind_180199180(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x490);
  func_0x180001e70(param_2 + 0x410);
  *(uint8_t *)(param_2 + 0x48f) = uVal_1;
  return;
}

// Unwind@1801991d0
void Unwind_1801991d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x48f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x388), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x350));
    *(uint64_t *)(param_2 + 0x388) = 0;
  }
  return;
}

// Unwind@180199240
void Unwind_180199240(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x450);
  *(uint8_t *)(param_2 + 0x48e) = 0;
  return;
}

// Unwind@180199290
void Unwind_180199290(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x48e);
  func_0x180001e70(param_2 + 0x410);
  *(uint8_t *)(param_2 + 0x48d) = uVal_1;
  return;
}

// Unwind@1801992e0
void Unwind_1801992e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x48d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x3c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x390));
    *(uint64_t *)(param_2 + 0x3c8) = 0;
  }
  return;
}
