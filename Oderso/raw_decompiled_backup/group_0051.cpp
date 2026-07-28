#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x18048fb40
uint64_t func_0x18048fb40(int64_t param_1)
{
  if (*(int64_t *)(param_1 + 0x38) != 0) {
    return CONCAT71(SUB167(ZEXT816(0x2913561e470d8270) * ZEXT816(0xfa3af45a503b68db),1),
                    *(int *)(param_1 + 0xc) != 0);
  }
  return 0;
}

// func_0x18048fbb0
int64_t func_0x18048fbb0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15b04) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15b04) = 1;
    *(uint64_t *)(lVal_1 + 0x15af8) = 0xa84ef17d4e8128d9;
    *(uint32_t *)(lVal_1 + 0x15b00) = 0x1e52fd4;
    func_0x180673140(&LAB_1804f7870);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15af8;
}

// func_0x18048fc40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18048fc40(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xb) == '\x01') {
    *param_1 = *param_1 ^ 0xd12f9d0d11e55db1;
    *(uint *)(param_1 + 1) =
         (*(uint *)(param_1 + 1) & 0xffff | (uint)*(byte *)((int64_t)param_1 + 10) << 0x10) ^
         SUB164(_DAT_1806cf080,0);
  }
  return;
}

// func_0x18048fc80
uint64_t func_0x18048fc80(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x5b7aefc2);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18048fd00
uint64_t func_0x18048fd00(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x6af12654);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18048fe80
int64_t func_0x18048fe80(int64_t param_1)
{
  int *pInt_1;
  int64_t *pLong_2;
  char ch_3;
  int64_t *pLong_4;
  uint8_t (*pArr16_5)[16];
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  int64_t *pLong_9;
  uint8_t (*pArr16_10)[16];
  
  do {
    pLong_4 = *(int64_t **)(param_1 + 0xb8);
    if (pLong_4 == *(int64_t **)(param_1 + 0xc0)) {
      return param_1 + 0xb8;
    }
    if (pLong_4[1] == 0) {
      pLong_9 = (int64_t *)0x0;
      ch_3 = *(char *)(*pLong_4 + 0x58);
    }
    else {
      LOCK();
      pInt_1 = (int *)(pLong_4[1] + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
      pLong_9 = (int64_t *)pLong_4[1];
      ch_3 = *(char *)(*pLong_4 + 0x58);
    }
    if (ch_3 == '\0') {
      pArr16_5 = *(uint8_t (**)[16])(param_1 + 0xc0);
      pArr16_10 = (uint8_t (*)[16])(*(int64_t *)(param_1 + 0xb8) + 0x10);
      if (pArr16_10 == pArr16_5) {
        pLong_4 = *(int64_t **)(pArr16_5[-1] + 8);
      }
      else {
        do {
          uVal_6 = *(uint32_t *)(*pArr16_10 + 4);
          uVal_7 = *(uint32_t *)(*pArr16_10 + 8);
          uVal_8 = *(uint32_t *)(*pArr16_10 + 0xc);
          *pArr16_10 = ZEXT816(0);
          pLong_4 = *(int64_t **)(pArr16_10[-1] + 8);
          *(uint32_t *)pArr16_10[-1] = *(uint32_t *)*pArr16_10;
          *(uint32_t *)(pArr16_10[-1] + 4) = uVal_6;
          *(uint32_t *)(pArr16_10[-1] + 8) = uVal_7;
          *(uint32_t *)(pArr16_10[-1] + 0xc) = uVal_8;
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
          pArr16_10 = pArr16_10 + 1;
        } while (pArr16_10 != pArr16_5);
        pLong_4 = *(int64_t **)(*(int64_t *)(param_1 + 0xc0) + -8);
      }
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
      *(int64_t *)(param_1 + 0xc0) = *(int64_t *)(param_1 + 0xc0) + -0x10;
    }
    if (pLong_9 != (int64_t *)0x0) {
      LOCK();
      pLong_4 = pLong_9 + 1;
      *(int *)pLong_4 = *(int *)pLong_4 + -1;
      UNLOCK();
      if (*(int *)pLong_4 == 0) {
        (**(func_ptr_t *)*pLong_9)(pLong_9);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_9 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_9 + 8))(pLong_9);
        }
      }
    }
  } while (ch_3 == '\0');
  return param_1 + 0xb8;
}

// func_0x180490010
uint64_t func_0x180490010(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x82aa25fe);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180490090
uint64_t func_0x180490090(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xdf7769f);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180490110
uint64_t func_0x180490110(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x90ef0f2);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// Unwind@1804918b0
void Unwind_1804918b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180491900
void Unwind_180491900(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180491950
void Unwind_180491950(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1804919a0
void Unwind_1804919a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1804919f0
void Unwind_1804919f0(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0x78);
  return;
}

// Unwind@180491a30
void Unwind_180491a30(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0x50);
  return;
}

// Unwind@180491a70
void Unwind_180491a70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@180491ab0
void Unwind_180491ab0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180491af0
void Unwind_180491af0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180491b40
void Unwind_180491b40(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0xd0);
  return;
}

// Unwind@180491b80
void Unwind_180491b80(uint64_t param_1,int64_t param_2)
{
  int *pInt_1;
  int64_t *pLong_2;
  
  pLong_2 = *(int64_t **)(*(int64_t *)(param_2 + 200) + 8);
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

// func_0x180491c40
uint64_t func_0x180491c40(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xd9013c8);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180491cc0
uint64_t func_0x180491cc0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x62399752);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180491d40
uint64_t func_0x180491d40(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xf4099e28);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180491dc0
uint64_t func_0x180491dc0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x4316cdce);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180491e40
uint64_t func_0x180491e40(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xaff22f60);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180491ec0
uint64_t func_0x180491ec0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x832f8b60);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180491f40
int64_t func_0x180491f40(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15bcc) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15bcc) = 1;
    *(uint64_t *)(lVal_1 + 0x15bc0) = 0xc569aa8e3768d448;
    *(uint32_t *)(lVal_1 + 0x15bc8) = 0x10fd35d;
    func_0x180673140(&LAB_1804f8060);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15bc0;
}

// func_0x180491fd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180491fd0(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xb) == '\x01') {
    *param_1 = *param_1 ^ 0xb147cde15b0fa725;
    *(uint *)(param_1 + 1) =
         (*(uint *)(param_1 + 1) & 0xffff | (uint)*(byte *)((int64_t)param_1 + 10) << 0x10) ^
         SUB164(_DAT_1806cf090,0);
  }
  return;
}

// func_0x180492080
uint64_t func_0x180492080(uint64_t param_1,uint64_t *param_2,int64_t **param_3,uint32_t *param_4, uint32_t param_5)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  int64_t *pLong_4;
  int64_t **local_70;
  int64_t *local_68;
  uint32_t local_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t local_50;
  uint64_t local_40;
  int64_t ***local_38;
  uint64_t *local_30;
  uint64_t local_28;
  int64_t **local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_68 = param_3[2];
  local_70 = param_3;
  if (&DAT_0000000f < param_3[3]) {
    local_70 = (int64_t **)*param_3;
  }
  local_60 = *param_4;
  uStack_5c = param_4[1];
  uStack_58 = param_4[2];
  uStack_54 = param_4[3];
  local_50 = param_5;
  local_40 = 0x1dd;
  local_38 = &local_70;
  local_30 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_30 = (uint64_t *)*param_2;
  }
  local_28 = param_2[2];
  local_20 = param_3;
  func_0x18063ff10(param_1,&local_30,&local_40);
  pLong_1 = local_20[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *local_20;
    pLong_4 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_3 = pLong_2;
    if ((int64_t *)0xfff < pLong_4) {
      pLong_3 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_3))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      pLong_4 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_3,pLong_4);
  }
  return param_1;
}

// Unwind@180492150
void Unwind_180492150(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x78));
  return;
}

// Unwind@180494cf0
void Unwind_180494cf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  return;
}

// Unwind@180494d30
void Unwind_180494d30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@180494d70
void Unwind_180494d70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  return;
}

// Unwind@180494db0
void Unwind_180494db0(uint64_t param_1,int64_t param_2)
{
  func_0x1800d5f50(param_2 + 0x220);
  return;
}

// Unwind@180494df0
void Unwind_180494df0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@180494e30
void Unwind_180494e30(void)
{
  func_0x180672f60(&DAT_180841218);
  return;
}

// Unwind@180494e70
void Unwind_180494e70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15c30) = 0;
  return;
}

// Unwind@180494ec0
void Unwind_180494ec0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  return;
}

// Unwind@180494f00
void Unwind_180494f00(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15c74) = 0;
  return;
}

// Unwind@180494f50
void Unwind_180494f50(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15c8c) = 0;
  return;
}

// Unwind@180494fa0
void Unwind_180494fa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1e0);
  return;
}

// Unwind@180494fe0
void Unwind_180494fe0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15ef0) = 0;
  return;
}

// Unwind@180495030
void Unwind_180495030(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15f08) = 0;
  return;
}

// Unwind@180495080
void Unwind_180495080(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  return;
}

// Unwind@1804950c0
void Unwind_1804950c0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15f30) = 0;
  return;
}

// Unwind@180495110
void Unwind_180495110(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15f58) = 0;
  return;
}

// Unwind@180495160
void Unwind_180495160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  return;
}

// func_0x1804951a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1804951a0(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806d0363;
  uStack_24 = _UNK_1806d0367;
  uStack_20 = _UNK_1806d036b;
  uStack_1c = _UNK_1806d036f;
  local_18 = 0x4f82d774;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15c48) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15c48) = 1;
    func_0x18007cfc0(lVal_1 + 0x15c31,&local_28);
    func_0x180673140(&LAB_1804f88d0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15c31;
}

// Unwind@180495240
void Unwind_180495240(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15c48) = 0;
  return;
}

// func_0x180495270
int64_t func_0x180495270(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15ca0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15ca0) = 1;
    *(uint8_t *)(lVal_1 + 0x15c9c) = 1;
    *(uint64_t *)(lVal_1 + 0x15c90) = 0x7bb3cb20596916e6;
    *(uint32_t *)(lVal_1 + 0x15c98) = 0x2f7e1ef4;
    func_0x180673140(&LAB_1804f8980);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15c90;
}

// func_0x180495300
void func_0x180495300(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xc) == '\x01') {
    *param_1 = *param_1 ^ 0x1593b9452f1b7395;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) ^ 0x2f1b7395;
    *(uint8_t *)((int64_t)param_1 + 0xc) = 0;
  }
  return;
}

// func_0x180495330
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180495330(void)
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
  uint16_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806d03ac;
  uStack_24 = _UNK_1806d03b0;
  uStack_20 = _UNK_1806d03b4;
  uStack_1c = _UNK_1806d03b8;
  local_38 = _DAT_1806d039c;
  uStack_34 = _UNK_1806d03a0;
  uStack_30 = _UNK_1806d03a4;
  uStack_2c = _UNK_1806d03a8;
  local_18 = 0x2915;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15cc4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15cc4) = 1;
    func_0x1800f15f0(lVal_1 + 0x15ca1,&local_38);
    func_0x180673140(&LAB_1804f89b0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15ca1;
}

// Unwind@1804953e0
void Unwind_1804953e0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15cc4) = 0;
  return;
}

// func_0x180495410
int64_t func_0x180495410(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15cd0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15cd0) = 1;
    *(uint8_t *)(lVal_1 + 0x15ccc) = 1;
    *(uint32_t *)(lVal_1 + 0x15cc8) = 0x513b223d;
    func_0x180673140(&LAB_1804f89e0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15cc8;
}

// func_0x180495490
int64_t func_0x180495490(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15ce0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15ce0) = 1;
    *(uint64_t *)(lVal_1 + 0x15cd8) = 0x11ba8d63d293227;
    func_0x180673140(&LAB_1804f8a00);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15cd8;
}

// func_0x180495510
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180495510(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 7) == '\x01') {
    *param_1 = (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 5) << 8,*(uint32_t *)param_1) |
               (uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20) ^ SUB168(_DAT_1806cf0f0,0);
  }
  return;
}

// func_0x180495550
int64_t func_0x180495550(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15cf0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15cf0) = 1;
    *(uint64_t *)(lVal_1 + 0x15ce8) = 0x11bb4d3303a2534;
    func_0x180673140(&LAB_1804f8a30);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15ce8;
}

// func_0x1804955d0
uint8_t (*func_0x1804955d0(uint8_t (*param_1)[16],uint64_t *param_2,uint64_t param_3,char *param_4, uint32_t param_5))[16]
{
  size_t sz_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t *pU64_4;
  uint64_t uVal_5;
  uint8_t *pU64_6;
  uint8_t local_80 [8];
  uint8_t local_78 [16];
  size_t local_68;
  uint64_t local_60;
  uint8_t (*local_50)[16];
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  local_78 = ZEXT816(0);
  local_50 = param_1;
  sz_1 = strlen(param_4);
  if (-1 < (int64_t)sz_1) {
    if (sz_1 < 0x10) {
      pU64_6 = local_78;
      uVal_5 = 0xf;
    }
    else {
      uVal_2 = sz_1 | 0xf;
      uVal_5 = 0x16;
      if (0x16 < uVal_2) {
        uVal_5 = uVal_2;
      }
      if (uVal_2 < 0xfff) {
        pU64_6 = (uint8_t *)func_0x180672de0(uVal_5 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_5 + 0x28);
        pU64_6 = (uint8_t *)(lVal_3 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_6 + -8) = lVal_3;
      }
      local_78._0_8_ = pU64_6;
    }
    local_68 = sz_1;
    local_60 = uVal_5;
    func_0x1806aa960(pU64_6,param_4,sz_1);
    pU64_6[sz_1] = 0;
    pU64_4 = param_2;
    if (0xf < (uint64_t)param_2[3]) {
      pU64_4 = (uint64_t *)*param_2;
    }
    func_0x1800f81c0(local_80,local_50,pU64_4,param_2[2] + (int64_t)pU64_4,param_3,local_78,param_5);
    if (0xf < local_60) {
      uVal_5 = local_60 + 1;
      lVal_3 = local_78._0_8_;
      if (0xfff < uVal_5) {
        lVal_3 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_3)) goto LAB_18049572f;
        uVal_5 = local_60 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_3,uVal_5);
    }
    return local_50;
  }
  func_0x18007ba70();
LAB_18049572f:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180495740
void Unwind_180495740(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180495780
void Unwind_180495780(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x68));
  return;
}

// func_0x1804957c0
uint64_t * func_0x1804957c0(uint64_t *param_1,char *param_2,uint32_t param_3)
{
  uint64_t uVal_1;
  size_t sz_2;
  
  *param_1 = 0;
  uVal_1 = func_0x180673ba0(1);
  param_1[4] = uVal_1;
  uVal_1 = func_0x1800f3950(param_1 + 3);
  param_1[1] = uVal_1;
  uVal_1 = func_0x180096a50(param_1 + 3);
  param_1[2] = uVal_1;
  sz_2 = strlen(param_2);
  func_0x1800f3760(param_1,param_2,param_2 + sz_2,param_3);
  return param_1;
}

// Unwind@180495850
void Unwind_180495850(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  uint64_t *pU64_2;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x28) + 0x20);
  if (pLong_1 != (int64_t *)0x0) {
    pU64_2 = (uint64_t *)(**(func_ptr_t *)(*pLong_1 + 0x10))();
    if (pU64_2 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_2)(pU64_2,1);
    }
  }
  return;
}

// Unwind@1804958a0
void Unwind_1804958a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  uint64_t *pU64_2;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x28) + 0x20);
  if (pLong_1 != (int64_t *)0x0) {
    pU64_2 = (uint64_t *)(**(func_ptr_t *)(*pLong_1 + 0x10))();
    if (pU64_2 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_2)(pU64_2,1);
    }
  }
  return;
}

// Unwind@1804958f0
void Unwind_1804958f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180495910
int64_t func_0x180495910(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15cfc) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15cfc) = 1;
    *(uint8_t *)(lVal_1 + 0x15cf8) = 1;
    *(uint32_t *)(lVal_1 + 0x15cf4) = 0x434a80bc;
    func_0x180673140(&LAB_1804f8a60);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15cf4;
}

// func_0x180495990
int64_t func_0x180495990(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15d0c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15d0c) = 1;
    *(uint8_t *)(lVal_1 + 0x15d08) = 1;
    *(uint64_t *)(lVal_1 + 0x15d00) = 0xc7a23764d0bc903c;
    func_0x180673140(&LAB_1804f8a80);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15d00;
}

// func_0x180495a10
void func_0x180495a10(uint64_t *param_1)
{
  if (*(char *)(param_1 + 1) == '\x01') {
    *param_1 = *param_1 ^ 0xc7d1450587c5fb6f;
    *(uint8_t *)(param_1 + 1) = 0;
  }
  return;
}

// func_0x180495a30
int64_t func_0x180495a30(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15d1c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15d1c) = 1;
    *(uint64_t *)(lVal_1 + 0x15d10) = 0x8e5b5eaa10f81a80;
    *(uint16_t *)(lVal_1 + 0x15d18) = 499;
    func_0x180673140(&LAB_1804f8aa0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15d10;
}

// func_0x180495ac0
void func_0x180495ac0(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 9) == '\x01') {
    *param_1 = *param_1 ^ 0xfd2f37c13d8171f3;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xf3;
    *(uint8_t *)((int64_t)param_1 + 9) = 0;
  }
  return;
}

// func_0x180495ae0
int64_t func_0x180495ae0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15d2c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15d2c) = 1;
    *(uint8_t *)(lVal_1 + 0x15d28) = 1;
    *(uint64_t *)(lVal_1 + 0x15d20) = 0xe1be152490a04a02;
    func_0x180673140(&LAB_1804f8ad0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15d20;
}

// func_0x180495b60
void func_0x180495b60(uint64_t *param_1)
{
  if (*(char *)(param_1 + 1) == '\x01') {
    *param_1 = *param_1 ^ 0xe1cd614ddbd92151;
    *(uint8_t *)(param_1 + 1) = 0;
  }
  return;
}

// func_0x180495b80
int64_t func_0x180495b80(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15d38) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15d38) = 1;
    *(uint8_t *)(lVal_1 + 0x15d34) = 1;
    *(uint32_t *)(lVal_1 + 0x15d30) = 0xb727e4eb;
    func_0x180673140(&LAB_1804f8af0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15d30;
}

// func_0x180495c00
int64_t func_0x180495c00(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15d4c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15d4c) = 1;
    *(uint8_t *)(lVal_1 + 0x15d48) = 1;
    *(uint64_t *)(lVal_1 + 0x15d40) = 0x89c485261019fc99;
    func_0x180673140(&LAB_1804f8b10);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15d40;
}

// func_0x180495c80
void func_0x180495c80(uint64_t *param_1)
{
  if (*(char *)(param_1 + 1) == '\x01') {
    *param_1 = *param_1 ^ 0x89b7f747477d99db;
    *(uint8_t *)(param_1 + 1) = 0;
  }
  return;
}

// func_0x180495ca0
int64_t func_0x180495ca0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15d68) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15d68) = 1;
    *(uint8_t *)(lVal_1 + 0x15d66) = 1;
    *(uint64_t *)(lVal_1 + 0x15d58) = 0x818c771c658996fa;
    *(uint32_t *)(lVal_1 + 0x15d60) = 0x769682ee;
    *(uint16_t *)(lVal_1 + 0x15d64) = 0x106;
    func_0x180673140(&LAB_1804f8b60);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15d58;
}

// func_0x180495d40
void func_0x180495d40(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xe) == '\x01') {
    *param_1 = *param_1 ^ 0xeded017513fbe3a9;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) ^ 0x13fbe3a9;
    *(byte *)((int64_t)param_1 + 0xc) = *(byte *)((int64_t)param_1 + 0xc) ^ 0x75;
    *(byte *)((int64_t)param_1 + 0xd) = *(byte *)((int64_t)param_1 + 0xd) ^ 1;
    *(uint8_t *)((int64_t)param_1 + 0xe) = 0;
  }
  return;
}

// func_0x180495d70
int64_t func_0x180495d70(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15d78) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15d78) = 1;
    *(uint64_t *)(lVal_1 + 0x15d70) = 0x173d9847bafa42e;
    func_0x180673140(&LAB_1804f8b90);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15d70;
}

// func_0x180495df0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180495df0(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 7) == '\x01') {
    *param_1 = (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 5) << 8,*(uint32_t *)param_1) |
               (uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20) ^ SUB168(_DAT_1806cf100,0);
  }
  return;
}

// func_0x180495e30
int64_t func_0x180495e30(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15d90) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15d90) = 1;
    *(uint8_t *)(lVal_1 + 0x15d8e) = 1;
    *(uint64_t *)(lVal_1 + 0x15d80) = 0xbc961372ebf9ac34;
    *(uint32_t *)(lVal_1 + 0x15d88) = 0xfdeead0a;
    *(uint16_t *)(lVal_1 + 0x15d8c) = 0x616e;
    func_0x180673140(&LAB_1804f8bc0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15d80;
}

// func_0x180495ed0
void func_0x180495ed0(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xe) == '\x01') {
    *param_1 = *param_1 ^ 0xc5db61178f8bd979;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) ^ 0x8f8bd979;
    *(byte *)((int64_t)param_1 + 0xc) = *(byte *)((int64_t)param_1 + 0xc) ^ 0x17;
    *(byte *)((int64_t)param_1 + 0xd) = *(byte *)((int64_t)param_1 + 0xd) ^ 0x61;
    *(uint8_t *)((int64_t)param_1 + 0xe) = 0;
  }
  return;
}

// func_0x180495f00
int64_t func_0x180495f00(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15d9c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15d9c) = 1;
    *(uint32_t *)(lVal_1 + 0x15d94) = 0x6b20ab89;
    *(uint16_t *)(lVal_1 + 0x15d98) = 0x103;
    func_0x180673140(&LAB_1804f8bf0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15d94;
}

// func_0x180495f80
void func_0x180495f80(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 5) == '\x01') {
    *param_1 = *param_1 ^ 0x1b4fd9ed;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 3;
    *(uint8_t *)((int64_t)param_1 + 5) = 0;
  }
  return;
}

// func_0x180495fa0
int64_t func_0x180495fa0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15dac) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15dac) = 1;
    *(uint64_t *)(lVal_1 + 0x15da0) = 0x5f051a28b2a6696f;
    *(uint32_t *)(lVal_1 + 0x15da8) = 0x1c97542;
    func_0x180673140(&LAB_1804f8c20);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15da0;
}

// func_0x180496030
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180496030(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xb) == '\x01') {
    *param_1 = *param_1 ^ 0x2d413743d1c9052d;
    *(uint *)(param_1 + 1) =
         (*(uint *)(param_1 + 1) & 0xffff | (uint)*(byte *)((int64_t)param_1 + 10) << 0x10) ^
         SUB164(_DAT_1806cf110,0);
  }
  return;
}

// func_0x180496070
int64_t func_0x180496070(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15dc4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15dc4) = 1;
    *(uint64_t *)(lVal_1 + 0x15db8) = 0xb15ef99723749485;
    *(uint16_t *)(lVal_1 + 0x15dc0) = 0x1c1;
    func_0x180673140(&LAB_1804f8c80);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15db8;
}

// func_0x180496100
void func_0x180496100(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 9) == '\x01') {
    *param_1 = *param_1 ^ 0xdf2b8bff5715f1c1;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xc1;
    *(uint8_t *)((int64_t)param_1 + 9) = 0;
  }
  return;
}

// func_0x180496120
int64_t func_0x180496120(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15dd0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15dd0) = 1;
    *(uint8_t *)(lVal_1 + 0x15dcc) = 1;
    *(uint32_t *)(lVal_1 + 0x15dc8) = 0xbd8197e8;
    func_0x180673140(&LAB_1804f8cb0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15dc8;
}

// func_0x1804961a0
int64_t func_0x1804961a0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15ddc) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15ddc) = 1;
    *(uint8_t *)(lVal_1 + 0x15dd8) = 1;
    *(uint32_t *)(lVal_1 + 0x15dd4) = 0x19e1e5ba;
    func_0x180673140(&LAB_1804f8cd0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15dd4;
}

// func_0x180496220
int64_t func_0x180496220(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15de8) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15de8) = 1;
    *(uint64_t *)(lVal_1 + 0x15de0) = 0x1d1e0224b441b4b;
    func_0x180673140(&LAB_1804f8cf0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15de0;
}

// func_0x1804962a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804962a0(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 7) == '\x01') {
    *param_1 = (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 5) << 8,*(uint32_t *)param_1) |
               (uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20) ^ SUB168(_DAT_1806cf120,0);
  }
  return;
}

// func_0x1804962e0
int64_t func_0x1804962e0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15df8) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15df8) = 1;
    *(uint64_t *)(lVal_1 + 0x15df0) = 0x16d24ba09c80727;
    func_0x180673140(&LAB_1804f8d20);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15df0;
}

// func_0x180496360
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180496360(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 7) == '\x01') {
    *param_1 = (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 5) << 8,*(uint32_t *)param_1) |
               (uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20) ^ SUB168(_DAT_1806cf130,0);
  }
  return;
}

// func_0x1804963a0
int64_t func_0x1804963a0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15e04) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15e04) = 1;
    *(uint8_t *)(lVal_1 + 0x15e02) = 1;
    *(uint32_t *)(lVal_1 + 0x15dfc) = 0x67fd308d;
    *(uint16_t *)(lVal_1 + 0x15e00) = 0xd9aa;
    func_0x180673140(&LAB_1804f8d50);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15dfc;
}

// func_0x180496430
void func_0x180496430(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0x138f51fd;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xd3;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0xd9;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x180496450
int64_t func_0x180496450(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15e10) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15e10) = 1;
    *(uint8_t *)(lVal_1 + 0x15e0e) = 1;
    *(uint32_t *)(lVal_1 + 0x15e08) = 0x7f4fc4f7;
    *(uint16_t *)(lVal_1 + 0x15e0c) = 0x81de;
    func_0x180673140(&LAB_1804f8d80);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15e08;
}

// func_0x1804964e0
void func_0x1804964e0(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0xb3da5a7;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xa7;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0x81;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x180496500
int64_t func_0x180496500(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15e20) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15e20) = 1;
    *(uint64_t *)(lVal_1 + 0x15e18) = 0x11b6deb0636c94a;
    func_0x180673140(&LAB_1804f8db0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15e18;
}

// func_0x180496580
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180496580(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 7) == '\x01') {
    *param_1 = (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 5) << 8,*(uint32_t *)param_1) |
               (uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20) ^ SUB168(_DAT_1806cf140,0);
  }
  return;
}

// func_0x1804965c0
int64_t func_0x1804965c0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15e34) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15e34) = 1;
    *(uint64_t *)(lVal_1 + 0x15e28) = 0x18687fd5b8aa1dac;
    *(uint32_t *)(lVal_1 + 0x15e30) = 0x1c51c99;
    func_0x180673140(&LAB_1804f8de0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15e28;
}

// func_0x180496650
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180496650(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xb) == '\x01') {
    *param_1 = *param_1 ^ 0x793f1bbbcdc56feb;
    *(uint *)(param_1 + 1) =
         (*(uint *)(param_1 + 1) & 0xffff | (uint)*(byte *)((int64_t)param_1 + 10) << 0x10) ^
         SUB164(_DAT_1806cf150,0);
  }
  return;
}

// func_0x180496690
int64_t func_0x180496690(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15e40) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15e40) = 1;
    *(uint32_t *)(lVal_1 + 0x15e38) = 0xe7a86752;
    *(uint16_t *)(lVal_1 + 0x15e3c) = 0x13b;
    func_0x180673140(&LAB_1804f8e10);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15e38;
}

// func_0x180496710
void func_0x180496710(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 5) == '\x01') {
    *param_1 = *param_1 ^ 0x91c91535;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x3b;
    *(uint8_t *)((int64_t)param_1 + 5) = 0;
  }
  return;
}

// func_0x180496730
int64_t func_0x180496730(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15e54) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15e54) = 1;
    *(uint8_t *)(lVal_1 + 0x15e50) = 1;
    *(uint64_t *)(lVal_1 + 0x15e48) = 0x9594b5c4bd385f60;
    func_0x180673140(&LAB_1804f8e40);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15e48;
}

// func_0x1804967b0
void func_0x1804967b0(uint64_t *param_1)
{
  if (*(char *)(param_1 + 1) == '\x01') {
    *param_1 = *param_1 ^ 0x95edc1adcb592d27;
    *(uint8_t *)(param_1 + 1) = 0;
  }
  return;
}

// func_0x1804967d0
int64_t func_0x1804967d0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15e60) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15e60) = 1;
    *(uint32_t *)(lVal_1 + 0x15e58) = 0xa499b06b;
    *(uint16_t *)(lVal_1 + 0x15e5c) = 0x181;
    func_0x180673140(&LAB_1804f8e60);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15e58;
}

// func_0x180496850
void func_0x180496850(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 5) == '\x01') {
    *param_1 = *param_1 ^ 0xc1fdd903;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x81;
    *(uint8_t *)((int64_t)param_1 + 5) = 0;
  }
  return;
}

// func_0x180496870
int64_t func_0x180496870(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15e74) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15e74) = 1;
    *(uint8_t *)(lVal_1 + 0x15e72) = 1;
    *(uint64_t *)(lVal_1 + 0x15e68) = 0x8f0408dcce7843f;
    *(uint16_t *)(lVal_1 + 0x15e70) = 0xed1c;
    func_0x180673140(&LAB_1804f8e90);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15e68;
}

// func_0x180496900
void func_0x180496900(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 10) == '\x01') {
    *param_1 = *param_1 ^ 0x6d9513aba983ed77;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x77;
    *(byte *)((int64_t)param_1 + 9) = *(byte *)((int64_t)param_1 + 9) ^ 0xed;
    *(uint8_t *)((int64_t)param_1 + 10) = 0;
  }
  return;
}

// func_0x180496930
int64_t func_0x180496930(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15e88) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15e88) = 1;
    *(uint8_t *)(lVal_1 + 0x15e84) = 1;
    *(uint64_t *)(lVal_1 + 0x15e78) = 0x1a907928104a188a;
    *(uint32_t *)(lVal_1 + 0x15e80) = 0x3d501a8a;
    func_0x180673140(&LAB_1804f8ec0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15e78;
}

// func_0x1804969c0
void func_0x1804969c0(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xc) == '\x01') {
    *param_1 = *param_1 ^ 0x69f1154b3d3373f9;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) ^ 0x3d3373f9;
    *(uint8_t *)((int64_t)param_1 + 0xc) = 0;
  }
  return;
}

// func_0x1804969f0
int64_t func_0x1804969f0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15ea0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15ea0) = 1;
    *(uint8_t *)(lVal_1 + 0x15e9c) = 1;
    *(uint64_t *)(lVal_1 + 0x15e90) = 0xb8ac0b86d0ec822c;
    *(uint32_t *)(lVal_1 + 0x15e98) = 0xfdf6800c;
    func_0x180673140(&LAB_1804f8ef0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15e90;
}

// func_0x180496a80
void func_0x180496a80(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xc) == '\x01') {
    *param_1 = *param_1 ^ 0xcbcd67c5fd95e97f;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) ^ 0xfd95e97f;
    *(uint8_t *)((int64_t)param_1 + 0xc) = 0;
  }
  return;
}

// func_0x180496ab0
int64_t func_0x180496ab0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15ec0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15ec0) = 1;
    *(uint8_t *)(lVal_1 + 0x15ebe) = 1;
    *(uint64_t *)(lVal_1 + 0x15eb0) = 0xc35fbc69906addc6;
    *(uint32_t *)(lVal_1 + 0x15eb8) = 0x8c6cc6e0;
    *(uint16_t *)(lVal_1 + 0x15ebc) = 0xf573;
    func_0x180673140(&LAB_1804f8f50);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15eb0;
}

// func_0x180496b50
void func_0x180496b50(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xe) == '\x01') {
    *param_1 = *param_1 ^ 0xb531f51de305b581;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) ^ 0xe305b581;
    *(byte *)((int64_t)param_1 + 0xc) = *(byte *)((int64_t)param_1 + 0xc) ^ 0x1d;
    *(byte *)((int64_t)param_1 + 0xd) = *(byte *)((int64_t)param_1 + 0xd) ^ 0xf5;
    *(uint8_t *)((int64_t)param_1 + 0xe) = 0;
  }
  return;
}

// func_0x180496b80
int64_t func_0x180496b80(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15ecc) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15ecc) = 1;
    *(uint8_t *)(lVal_1 + 0x15eca) = 1;
    *(uint32_t *)(lVal_1 + 0x15ec4) = 0x3bea2831;
    *(uint16_t *)(lVal_1 + 0x15ec8) = 0xf3e1;
    func_0x180673140(&LAB_1804f8f80);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15ec4;
}

// func_0x180496c10
void func_0x180496c10(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0x57835d53;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x85;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0xf3;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x180496c30
int64_t func_0x180496c30(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15edc) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15edc) = 1;
    *(uint8_t *)(lVal_1 + 0x15eda) = 1;
    *(uint64_t *)(lVal_1 + 0x15ed0) = 0x15d6e6770d7e34e9;
    *(uint16_t *)(lVal_1 + 0x15ed8) = 0x41c7;
    func_0x180673140(&LAB_1804f8fb0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15ed0;
}

// func_0x180496cc0
void func_0x180496cc0(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 10) == '\x01') {
    *param_1 = *param_1 ^ 0x79bf9335790d41a3;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xa3;
    *(byte *)((int64_t)param_1 + 9) = *(byte *)((int64_t)param_1 + 9) ^ 0x41;
    *(uint8_t *)((int64_t)param_1 + 10) = 0;
  }
  return;
}

// func_0x180496cf0
uint64_t func_0x180496cf0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x985f8a8e);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180496d70
uint64_t func_0x180496d70(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x3804214e);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180496df0
uint64_t func_0x180496df0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x86a7223f);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180496e70
uint32_t * func_0x180496e70(uint32_t *param_1,char **param_2,uint64_t param_3)
{
  char *fnPtr_1;
  uint32_t *pU64_2;
  uint64_t uVal_3;
  char *fnPtr_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  pU64_2 = param_1 + 2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  *(uint64_t *)(param_1 + 6) = 0;
  *(uint64_t *)(param_1 + 8) = 0xf;
  fnPtr_1 = *param_2;
  fnPtr_4 = param_2[1];
  if (fnPtr_4 < (char *)0x10) {
    *(char **)(param_1 + 6) = fnPtr_4;
    func_0x1806aa960(pU64_2,fnPtr_1,fnPtr_4);
    *(char *)((int64_t)(param_1 + 2) + (int64_t)fnPtr_4) = '\0';
  }
  else {
    func_0x18007bba0(pU64_2,fnPtr_4,param_3,fnPtr_1,pU64_2,0xfffffffffffffffe);
  }
  if ((char)param_3 != '\0') {
    *param_1 = 2;
  }
  fnPtr_1 = param_2[1];
  if (fnPtr_1 == (char *)0x0) {
    uVal_3 = 0;
  }
  else {
    fnPtr_4 = *param_2;
    uVal_5 = (uint64_t)((uint)fnPtr_1 & 7);
    if (&DAT_00000007 < fnPtr_1) {
      uVal_6 = (uint64_t)fnPtr_1 & 0xfffffffffffffff8;
      uVal_3 = 0xcbf29ce484222325;
      do {
        uVal_3 = (((((((uVal_3 * 0x100000001b3 ^ (int64_t)*fnPtr_4) * 0x100000001b3 ^
                     (int64_t)fnPtr_4[1]) * 0x100000001b3 ^ (int64_t)fnPtr_4[2]) * 0x100000001b3 ^
                   (int64_t)fnPtr_4[3]) * 0x100000001b3 ^ (int64_t)fnPtr_4[4]) * 0x100000001b3 ^
                 (int64_t)fnPtr_4[5]) * 0x100000001b3 ^ (int64_t)fnPtr_4[6]) * 0x100000001b3 ^
                (int64_t)fnPtr_4[7];
        fnPtr_4 = fnPtr_4 + 8;
        uVal_6 = uVal_6 - 8;
      } while (uVal_6 != 0);
      if (uVal_5 == 0) goto LAB_180496fd4;
    }
    else {
      uVal_3 = 0xcbf29ce484222325;
    }
    uVal_6 = 0;
    do {
      uVal_3 = uVal_3 * 0x100000001b3 ^ (int64_t)fnPtr_4[uVal_6];
      uVal_6 = uVal_6 + 1;
    } while (uVal_5 != uVal_6);
  }
LAB_180496fd4:
  *(uint64_t *)(param_1 + 10) = uVal_3;
  *(uint64_t *)(param_1 + 0xc) =
       ((uint64_t)*(byte *)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVal_3;
  return param_1;
}

// Unwind@180497010
void Unwind_180497010(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x20));
  return;
}

// func_0x180497040
int64_t func_0x180497040(void)
{
  int iVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  lVal_2 = func_0x18010ce60();
  iVal_1 = func_0x18010ce00(*(uint64_t *)(lVal_2 + 8));
  lVal_3 = 0;
  if (iVal_1 == 5) {
    lVal_3 = lVal_2;
  }
  return lVal_3;
}

// func_0x180497070
int64_t func_0x180497070(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15fbc) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15fbc) = 1;
    *(uint64_t *)(lVal_1 + 0x15fb0) = 0xc4298accab7dc51c;
    *(uint32_t *)(lVal_1 + 0x15fb8) = 0x12ddd0e;
    func_0x180673140(&LAB_1804f9160);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15fb0;
}

// func_0x180497100
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180497100(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xb) == '\x01') {
    *param_1 = *param_1 ^ 0x817dd58de32d895d;
    *(uint *)(param_1 + 1) =
         (*(uint *)(param_1 + 1) & 0xffff | (uint)*(byte *)((int64_t)param_1 + 10) << 0x10) ^
         SUB164(_DAT_1806cf160,0);
  }
  return;
}

// func_0x180497140
void func_0x180497140(uint64_t param_1,uint64_t param_2)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_48 [32];
  uint8_t local_28 [16];
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x1801bcf00(param_1,local_28,param_2);
  func_0x1804ff090(param_1,local_28);
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1804971a0
int64_t func_0x1804971a0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15fcc) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15fcc) = 1;
    *(uint64_t *)(lVal_1 + 0x15fc0) = 0x8e99288895d595e0;
    *(uint32_t *)(lVal_1 + 0x15fc8) = 0x1858df2;
    func_0x180673140(&LAB_1804f9190);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15fc0;
}

// func_0x180497230
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180497230(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xb) == '\x01') {
    *param_1 = *param_1 ^ 0xcbcd77c9dd85d9a1;
    *(uint *)(param_1 + 1) =
         (*(uint *)(param_1 + 1) & 0xffff | (uint)*(byte *)((int64_t)param_1 + 10) << 0x10) ^
         SUB164(_DAT_1806cf170,0);
  }
  return;
}

// func_0x180497270
uint64_t func_0x180497270(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xedfb4916);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x1804972f0
uint64_t func_0x1804972f0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x2ffa140c);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180497370
uint64_t func_0x180497370(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x5a015ee9);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// Unwind@180497700
void Unwind_180497700(void)
{
  func_0x180672f60(&DAT_1808412c8);
  return;
}

// Unwind@180497740
void Unwind_180497740(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x58));
  return;
}

// func_0x180497780
uint64_t func_0x180497780(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xe0214806);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180497800
uint64_t func_0x180497800(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x4d79930f);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180497880
uint64_t func_0x180497880(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xeca0cfba);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180497900
uint64_t func_0x180497900(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x186001d9);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180497980
uint64_t func_0x180497980(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x2279d8cb);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180497a00
uint64_t func_0x180497a00(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xea93f505);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180497a80
uint64_t func_0x180497a80(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xe27f342a);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180497b00
uint64_t func_0x180497b00(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x47de571b);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180497b80
uint64_t func_0x180497b80(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x6bbfd10);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180497c00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180497c00(void)
{
  int64_t lVal_1;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint8_t uStack_28;
  uint32_t uStack_27;
  uint32_t uStack_23;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = UNK_1806d04e2;
  uStack_27 = _UNK_1806d04e3;
  uStack_23 = _UNK_1806d04e7;
  local_38 = _DAT_1806d04d2;
  uStack_34 = _UNK_1806d04d6;
  uStack_30 = _UNK_1806d04da;
  uStack_2c = _UNK_1806d04de;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x160d0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x160d0) = 1;
    func_0x1800904a0(lVal_1 + 0x160b5,&local_38);
    func_0x180673140(&LAB_1804f93b0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x160b5;
}

// Unwind@180497ca0
void Unwind_180497ca0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x160d0) = 0;
  return;
}

// func_0x180497cd0
uint64_t func_0x180497cd0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x9fa63926);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180497d50
int64_t func_0x180497d50(uint64_t param_1,uint32_t param_2,uint16_t *param_3)
{
  uint16_t uVal_1;
  int64_t lVal_2;
  uint16_t *pU64_3;
  uint8_t local_40 [8];
  int64_t local_38;
  int64_t local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVal_2 = func_0x1804f9440(param_1,0x97d981a9);
  uVal_1 = *param_3;
  func_0x18012c2c0(lVal_2,local_40,param_2,0,0);
  local_30 = lVal_2;
  pU64_3 = (uint16_t *)func_0x1804f9960(lVal_2,local_38 + -1);
  *pU64_3 = uVal_1;
  return (uint64_t)(((uint)(local_38 - 1U) & 0x7f) * 2) +
         *(int64_t *)(*(int64_t *)(local_30 + 0x50) + (local_38 - 1U >> 7) * 8);
}

// Catch_All@180497de0
void Catch_All_180497de0(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  *(uint64_t *)(param_2 + 0x48) = *(uint64_t *)(param_2 + 0x58);
  *(int64_t *)(param_2 + 0x50) = *(int64_t *)(param_2 + 0x60) + -1;
  *(uint32_t *)(param_2 + 0x30) = *(uint32_t *)(param_2 + 0x58);
  *(uint32_t *)(param_2 + 0x34) = *(uint32_t *)(param_2 + 0x5c);
  *(uint32_t *)(param_2 + 0x38) = *(uint32_t *)(param_2 + 0x60);
  *(uint32_t *)(param_2 + 0x3c) = *(uint32_t *)(param_2 + 100);
  func_0x18012bf50(*(uint64_t *)(param_2 + 0x68),param_2 + 0x30,param_2 + 0x48);
  func_0x18067a120(0,0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180497e30
void func_0x180497e30(int64_t param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_1 + 0x100);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0xe8);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1804980b7;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0xf8) = 0;
  *(uint64_t *)(param_1 + 0x100) = 0xf;
  *(uint8_t *)(param_1 + 0xe8) = 0;
  uVal_1 = *(uint64_t *)(param_1 + 0xd8);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0xc0);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1804980b7;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0xf;
  *(uint8_t *)(param_1 + 0xc0) = 0;
  uVal_1 = *(uint64_t *)(param_1 + 0xb8);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0xa0);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1804980b7;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0xb0) = 0;
  *(uint64_t *)(param_1 + 0xb8) = 0xf;
  *(uint8_t *)(param_1 + 0xa0) = 0;
  uVal_1 = *(uint64_t *)(param_1 + 0x98);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0x80);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1804980b7;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(uint64_t *)(param_1 + 0x98) = 0xf;
  *(uint8_t *)(param_1 + 0x80) = 0;
  uVal_1 = *(uint64_t *)(param_1 + 0x70);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0x58);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1804980b7;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x70) = 0xf;
  *(uint8_t *)(param_1 + 0x58) = 0;
  uVal_1 = *(uint64_t *)(param_1 + 0x50);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0x38);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1804980b7;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0xf;
  *(uint8_t *)(param_1 + 0x38) = 0;
  uVal_1 = *(uint64_t *)(param_1 + 0x30);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0x18);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_1804980b7:
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

// func_0x1804980c0
uint64_t func_0x1804980c0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xd51a9351);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x180498140
void func_0x180498140(uint64_t param_1,uint64_t *param_2,int64_t **param_3,int64_t **param_4)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t **ptr2_Long_3;
  int64_t **ptr2_Long_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t *pLong_7;
  int64_t *pLong_8;
  int64_t local_90 [3];
  uint64_t local_78;
  int64_t **local_70;
  int64_t *local_68;
  int64_t **local_60;
  int64_t *local_58;
  uint64_t local_50;
  int64_t ***local_48;
  uint64_t *local_40;
  uint64_t local_38;
  int64_t **local_30;
  int64_t **local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_68 = param_3[2];
  local_70 = param_3;
  if (&DAT_0000000f < param_3[3]) {
    local_70 = (int64_t **)*param_3;
  }
  local_58 = param_4[2];
  local_60 = param_4;
  if (&DAT_0000000f < param_4[3]) {
    local_60 = (int64_t **)*param_4;
  }
  local_50 = 0xdd;
  local_48 = &local_70;
  local_40 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_40 = (uint64_t *)*param_2;
  }
  local_38 = param_2[2];
  local_30 = param_4;
  local_28 = param_3;
  func_0x18063ff10(local_90,&local_40,&local_50);
  func_0x180116b80(param_1,local_90);
  ptr2_Long_4 = local_28;
  ptr2_Long_3 = local_30;
  if (0xf < local_78) {
    uVal_5 = local_78 + 1;
    lVal_6 = local_90[0];
    if (0xfff < uVal_5) {
      lVal_6 = *(int64_t *)(local_90[0] + -8);
      if (0x1f < (uint64_t)((local_90[0] + -8) - lVal_6)) goto LAB_1804982b9;
      uVal_5 = local_78 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
  }
  pLong_1 = ptr2_Long_4[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *ptr2_Long_4;
    pLong_8 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_7 = pLong_2;
    if ((int64_t *)0xfff < pLong_8) {
      pLong_7 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_7))) goto LAB_1804982b9;
      pLong_8 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_7,pLong_8);
  }
  ptr2_Long_4[2] = (int64_t *)0x0;
  ptr2_Long_4[3] = (int64_t *)&DAT_0000000f;
  *(uint8_t *)ptr2_Long_4 = 0;
  pLong_1 = ptr2_Long_3[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *ptr2_Long_3;
    pLong_8 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_7 = pLong_2;
    if ((int64_t *)0xfff < pLong_8) {
      pLong_7 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_7))) {
LAB_1804982b9:
        do {
          invalidInstructionException();
        } while( true );
      }
      pLong_8 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_7,pLong_8);
  }
  return;
}

// Unwind@1804982c0
void Unwind_1804982c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// Unwind@1804982f0
void Unwind_1804982f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x90));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x88));
  return;
}

// func_0x180498320
uint64_t func_0x180498320(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x1f52325);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x1804983a0
uint64_t func_0x1804983a0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x287a2c1d);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// Unwind@18049d040
void Unwind_18049d040(uint64_t param_1,int64_t param_2)
{
  func_0x18049dcb0(param_2 + 0x1a0);
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@18049d0b0
void Unwind_18049d0b0(uint64_t param_1,int64_t param_2)
{
  func_0x18049dcb0(param_2 + 0x1a0);
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@18049d120
void Unwind_18049d120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18049d180
void Unwind_18049d180(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18049d1e0
void Unwind_18049d1e0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0xa0) != 0) {
    thunk_FUN_180695dd0(*(int64_t *)(param_2 + 0xa0),0x10);
  }
  return;
}

// Unwind@18049d240
void Unwind_18049d240(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x1a0);
  return;
}

// Unwind@18049d2a0
void Unwind_18049d2a0(uint64_t param_1,int64_t param_2)
{
  func_0x18049dcb0(param_2 + 0x1a0);
  return;
}

// Unwind@18049d300
void Unwind_18049d300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18049d360
void Unwind_18049d360(uint64_t param_1,int64_t param_2)
{
  func_0x18049dcb0(param_2 + 0x1a0);
  return;
}

// Unwind@18049d3c0
void Unwind_18049d3c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18049d420
void Unwind_18049d420(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0x68);
  return;
}

// Unwind@18049d480
void Unwind_18049d480(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0x50);
  return;
}

// Unwind@18049d4e0
void Unwind_18049d4e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18049d540
void Unwind_18049d540(uint64_t param_1,int64_t param_2)
{
  func_0x18049dcb0(param_2 + 0x1a0);
  return;
}

// Unwind@18049d5a0
void Unwind_18049d5a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18049d600
void Unwind_18049d600(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  *(char *)(param_2 + 599) = (char)*(uint32_t *)(param_2 + 0x228);
  return;
}

// Unwind@18049d670
void Unwind_18049d670(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18049d6d0
void Unwind_18049d6d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18049d730
void Unwind_18049d730(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  *(char *)(param_2 + 0x256) = (char)*(uint32_t *)(param_2 + 0x228);
  return;
}

// Unwind@18049d7a0
void Unwind_18049d7a0(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 599);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x130);
  }
  *(char *)(param_2 + 0x255) = ch_1;
  return;
}

// Unwind@18049d810
void Unwind_18049d810(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x256);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x160);
  }
  *(char *)(param_2 + 0x254) = ch_1;
  return;
}

// Unwind@18049d880
void Unwind_18049d880(void)
{
  return;
}

// Unwind@18049d8e0
void Unwind_18049d8e0(void)
{
  return;
}

// Unwind@18049d940
void Unwind_18049d940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18049d9a0
void Unwind_18049d9a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18049da00
void Unwind_18049da00(uint64_t param_1,int64_t param_2)
{
  func_0x18049dcb0(param_2 + 0x1a0);
  return;
}

// Unwind@18049da60
void Unwind_18049da60(uint64_t param_1,int64_t param_2)
{
  func_0x18049dcb0(param_2 + 0x1a0);
  return;
}

// Unwind@18049dac0
void Unwind_18049dac0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18049db20
void Unwind_18049db20(uint64_t param_1,int64_t param_2)
{
  func_0x18049dcb0(param_2 + 0xa0);
  return;
}

// Unwind@18049db80
void Unwind_18049db80(uint64_t param_1,int64_t param_2)
{
  func_0x18049dcb0(param_2 + 0x1a0);
  return;
}

// Unwind@18049dbe0
void Unwind_18049dbe0(uint64_t param_1,int64_t param_2)
{
  func_0x18049de20(param_2 + 0x180);
  return;
}

// Unwind@18049dc40
void Unwind_18049dc40(uint64_t param_1,int64_t param_2)
{
  int *pInt_1;
  int64_t *pLong_2;
  
  pLong_2 = *(int64_t **)(*(int64_t *)(param_2 + 0x128) + 8);
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

// func_0x18049dcb0
void func_0x18049dcb0(int64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = param_1[0xb];
  if (0xf < uVal_1) {
    lVal_2 = param_1[8];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18049ddad;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(uint8_t *)(param_1 + 8) = 0;
  uVal_1 = param_1[7];
  if (0xf < uVal_1) {
    lVal_2 = param_1[4];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18049ddad;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(uint8_t *)(param_1 + 4) = 0;
  uVal_1 = param_1[3];
  if (0xf < uVal_1) {
    lVal_2 = *param_1;
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_18049ddad:
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

// func_0x18049de20
void func_0x18049de20(uint8_t (*param_1)[16])
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  lVal_2 = *(int64_t *)*param_1;
  if (lVal_2 != 0) {
    lVal_3 = *(int64_t *)(*param_1 + 8);
    if (lVal_2 != lVal_3) {
      do {
        func_0x18049dcb0(lVal_2);
        lVal_2 = lVal_2 + 0x80;
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
      uVal_1 = uVal_1 | 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_1);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// func_0x18049dea0
uint64_t func_0x18049dea0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xc3bb665c);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18049df20
uint64_t func_0x18049df20(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x262c6901);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18049dfa0
uint64_t func_0x18049dfa0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xfb93fa73);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18049e020
int64_t func_0x18049e020(uint64_t *param_1,int64_t *param_2)
{
  uint64_t uVal_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  
  pLong_2 = (int64_t *)param_1[1];
  if (pLong_2 != (int64_t *)param_1[2]) {
    lVal_4 = *param_2;
    *pLong_2 = lVal_4;
    param_1[1] = param_1[1] + 8;
    return lVal_4;
  }
  uVal_1 = *param_1;
  uVal_7 = ((int64_t)(param_1[1] - uVal_1) >> 3) + 1;
  uVal_3 = (int64_t)(param_1[2] - uVal_1) >> 3;
  uVal_8 = (uVal_3 >> 1) + uVal_3;
  if (uVal_8 <= uVal_7) {
    uVal_8 = uVal_7;
  }
  if (0x1fffffffffffffff - (uVal_3 >> 1) < uVal_3) {
    uVal_8 = 0x1fffffffffffffff;
  }
  if (uVal_8 >> 0x3d == 0) {
    if (uVal_8 == 0) {
      uVal_3 = 0;
    }
    else if (uVal_8 < 0x200) {
      uVal_3 = func_0x180672de0(uVal_8 * 8);
    }
    else {
      if (0x1ffffffffffffffb < uVal_8) goto LAB_18007f3c8;
      lVal_4 = func_0x180672de0(uVal_8 * 8 + 0x27);
      uVal_3 = lVal_4 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_3 - 8) = lVal_4;
    }
    lVal_4 = (int64_t)pLong_2 + (uVal_3 - uVal_1);
    *(int64_t *)((int64_t)pLong_2 + (uVal_3 - uVal_1)) = *param_2;
    if (pLong_2 == (int64_t *)param_1[1]) {
      func_0x1806aa960(uVal_3,*param_1,(int64_t)pLong_2 - *param_1);
      uVal_1 = *param_1;
    }
    else {
      func_0x1806aa960(uVal_3,*param_1,(int64_t)pLong_2 - *param_1);
      func_0x1806aa960(lVal_4 + 8,pLong_2,param_1[1] - (int64_t)pLong_2);
      uVal_1 = *param_1;
    }
    if (uVal_1 != 0) {
      uVal_6 = param_1[2] - uVal_1;
      uVal_5 = uVal_1;
      if (0xfff < uVal_6) {
        uVal_5 = *(uint64_t *)(uVal_1 - 8);
        if (0x1f < (uVal_1 - 8) - uVal_5) goto LAB_18007f3cd;
        uVal_6 = uVal_6 + 0x27;
      }
      thunk_FUN_180695dd0(uVal_5,uVal_6);
    }
    *param_1 = uVal_3;
    param_1[1] = uVal_3 + uVal_7 * 8;
    param_1[2] = uVal_3 + uVal_8 * 8;
    return lVal_4;
  }
LAB_18007f3c8:
  func_0x18007ba90();
LAB_18007f3cd:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18049e040
uint64_t func_0x18049e040(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xdef80e5);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18049e0c0
uint64_t func_0x18049e0c0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x90cccec7);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18049e140
uint64_t func_0x18049e140(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xd618c45e);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18049e1c0
uint64_t func_0x18049e1c0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x19019de4);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18049e240
uint64_t func_0x18049e240(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x645ba14b);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18049e2c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18049e2c0(uint64_t *param_1,uint64_t param_2,uint32_t *param_3,char param_4)
{
  uint32_t *pU64_1;
  short sz_2;
  short sz_3;
  uint16_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  int64_t lVal_8;
  int64_t lVal_9;
  uint uVal_10;
  uint8_t **local_98;
  uint8_t *local_90;
  uint32_t *local_88;
  uint64_t local_80;
  uint8_t *local_78;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint64_t local_68;
  uint8_t local_60 [15];
  uint8_t local_51;
  uint64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180841900) && (func_0x180672ec0(&DAT_180841900), DAT_180841900 == -1)) {
    local_78 = (uint8_t *)CONCAT44(_UNK_1806d078c,_DAT_1806d0788);
    uStack_70 = _UNK_1806d0790;
    uStack_6c = _UNK_1806d0794;
    local_68 = 0x1e8000001e7;
    local_98 = &local_78;
    local_90 = local_60;
    func_0x1804fadc0(&DAT_1808418e8,&local_98,&local_51);
    func_0x1806731d0(&LAB_1804fae60);
    _Init_thread_footer(&DAT_180841900);
  }
  uVal_6 = func_0x180127530(param_2);
  sz_2 = func_0x180127fe0(uVal_6);
  lVal_7 = thunk_FUN_180676680(DAT_1808418e8,DAT_1808418f0,sz_2);
  if (lVal_7 == DAT_1808418f0) {
    *param_1 = 0;
    *(uint8_t *)(param_1 + 1) = 0;
    return;
  }
  local_78 = &DAT_28d478d88fb3dcdf;
  local_88 = param_3;
  local_80 = param_2;
  local_50 = param_1;
  DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
  if (DAT_180840a60 == 0) {
    DAT_180840a68 = 0;
    lVal_7 = func_0x180125e40(0);
  }
  else {
    lVal_7 = func_0x180125e40(DAT_180840a60);
  }
  if (lVal_7 == 0) goto LAB_18049e5f2;
  local_78 = &DAT_28d478d88fb3dcdf;
  DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
  if (DAT_180840a60 == 0) {
    DAT_180840a68 = 0;
  }
  uVal_6 = func_0x180126030(DAT_180840a60);
  uVal_5 = func_0x1801293f0(uVal_6);
  pU64_1 = local_88;
  if (param_4 == '\0') {
    lVal_8 = func_0x180129450(lVal_7,local_88);
    if ((lVal_8 == 0) || (lVal_9 = func_0x180104de0(lVal_8,pU64_1,uVal_5), lVal_9 == 0)) goto LAB_18049e5f2;
    uVal_6 = func_0x180127530(lVal_9);
    sz_3 = func_0x180127fe0(uVal_6);
    if (sz_2 != sz_3) goto LAB_18049e5f2;
    if (sz_2 == 2) {
      uStack_70 = pU64_1[2];
      uVal_10 = pU64_1[1] + 1;
      local_78 = (uint8_t *)CONCAT44(uVal_10,*pU64_1);
      if (0xf < (uVal_10 ^ pU64_1[1])) {
        lVal_8 = func_0x180129450(lVal_7,&local_78);
      }
      lVal_7 = func_0x180104de0(lVal_8,&local_78,uVal_5);
      goto joined_r0x00018049e55e;
    }
  }
  else if (sz_2 == 2) {
    lVal_8 = func_0x180129450(lVal_7,local_88);
    if (lVal_8 == 0) goto LAB_18049e5f2;
    uStack_70 = pU64_1[2];
    uVal_10 = pU64_1[1] + 1;
    local_78 = (uint8_t *)CONCAT44(uVal_10,*pU64_1);
    if (0xf < (uVal_10 ^ pU64_1[1])) {
      lVal_8 = func_0x180129450(lVal_7,&local_78);
    }
    lVal_7 = func_0x180104de0(lVal_8,&local_78,uVal_5);
joined_r0x00018049e55e:
    if (lVal_7 != 0) {
      uVal_6 = func_0x180127530(lVal_7);
      sz_2 = func_0x180127fe0(uVal_6);
      if ((sz_2 == 0x4e) && (lVal_8 = func_0x180127e00(lVal_7), lVal_8 != 0)) {
        uVal_4 = func_0x1801274d0(lVal_7);
        uVal_6 = func_0x180127c00(lVal_8,&local_78,1,uVal_4);
        *local_50 = uVal_6;
        *(uint8_t *)(local_50 + 1) = 1;
        return;
      }
    }
  }
  uVal_6 = local_80;
  lVal_7 = func_0x180127e00(local_80);
  if (lVal_7 != 0) {
    uVal_4 = func_0x1801274d0(uVal_6);
    uVal_6 = func_0x180127c00(lVal_7,pU64_1,1,uVal_4);
    *local_50 = uVal_6;
    *(uint8_t *)(local_50 + 1) = 0;
    return;
  }
LAB_18049e5f2:
  *local_50 = 0;
  *(uint8_t *)(local_50 + 1) = 0;
  return;
}

// Unwind@18049e690
void Unwind_18049e690(void)
{
  func_0x180672f60(&DAT_180841900);
  return;
}

// func_0x18049e6d0
uint64_t func_0x18049e6d0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x44d6b09e);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18049e750
uint64_t func_0x18049e750(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xdcaf740e);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18049e7d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x18049e7d0(byte param_1,char param_2,short param_3,short param_4)
{
  uint64_t *_Str;
  bool bFlag_1;
  char ch_2;
  int iVal_3;
  int64_t lVal_4;
  size_t sz_5;
  uint64_t uVal_6;
  uint64_t *pU64_7;
  uint64_t *pU64_8;
  undefined1 *pU64_9;
  void *pVoid_10;
  uint8_t *pU64_11;
  byte bFlag_12;
  uint64_t unaff_RSI;
  undefined7 uVal_14;
  uint64_t uVal_13;
  uint8_t *pU64_15;
  bool bFlag_16;
  uint8_t local_78 [16];
  size_t local_68;
  uint64_t local_60;
  byte local_4a;
  char local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  pVoid_10 = ThreadLocalStoragePointer;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_1808415d0) && (func_0x180672ec0(&DAT_1808415d0), DAT_1808415d0 == -1)) {
    DAT_1808415c8 = func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_1808415d0);
  }
  pU64_9 = (undefined1 *)CONCAT71((int7)((uint64_t)pVoid_10 >> 8),param_2 != '\0');
  if ((param_2 != '\0' && DAT_18083ca10 < -0x46) && (DAT_18083ca10 + 0x65 == (int)(char)param_1)) {
    _DAT_180840ae8 = 0x100;
    uVal_13 = 0;
    goto LAB_18049ec78;
  }
  iVal_3 = (int)(char)param_1;
  uVal_14 = (undefined7)((uint64_t)unaff_RSI >> 8);
  if (param_1 == 0) {
    DAT_180840f68 = (int)param_3;
    DAT_180840f6c = (int)param_4;
LAB_18049e8b6:
    bFlag_1 = false;
    bFlag_16 = false;
  }
  else {
    if ((char)param_1 < '\x01') goto LAB_18049e8b6;
    lVal_4 = -1;
    if ((param_1 < 4) || (lVal_4 = -2, param_1 != 4)) {
      pU64_9 = &DAT_180840f34 + param_1;
      pU64_9[lVal_4] = param_2 != '\0';
    }
    func_0x1800d4b90(iVal_3,CONCAT71((int7)((uint64_t)pU64_9 >> 8),param_2 != '\0'));
    bFlag_1 = true;
    bFlag_16 = true;
  }
  local_4a = 0;
  bFlag_12 = 1;
  if (param_2 != '\0') {
    local_4a = 0;
    bFlag_12 = 1;
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_1808415e0) && (func_0x180672ec0(&DAT_1808415e0), DAT_1808415e0 == -1))
    {
      DAT_1808415d8 = func_0x18049ee60(&DAT_1808400a0);
      _Init_thread_footer(&DAT_1808415e0);
    }
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_1808415f0) && (func_0x180672ec0(&DAT_1808415f0), DAT_1808415f0 == -1))
    {
      DAT_1808415e8 = func_0x18049eee0(&DAT_1808400a0);
      _Init_thread_footer(&DAT_1808415f0);
    }
    bFlag_16 = bFlag_1;
    if (param_1 == 2) {
      ch_2 = func_0x1802f4e40(DAT_1808415d8);
      if (ch_2 == '\0') {
        ch_2 = func_0x180340ff0(DAT_1808415e8);
        if (ch_2 == '\0') {
          local_78._0_8_ = func_0x1800576d0();
          if (DAT_180840ca8 == DAT_180840cb0) {
            pU64_7 = &DAT_180840ca0;
            pU64_8 = DAT_180840ca8;
LAB_18049eb99:
            func_0x18007f260(pU64_7,pU64_8,local_78);
          }
          else {
            *DAT_180840ca8 = local_78._0_8_;
            DAT_180840ca8 = DAT_180840ca8 + 1;
          }
          goto LAB_18049e991;
        }
      }
    }
    else {
      if (param_1 != 1) goto LAB_18049e991;
      ch_2 = func_0x1802f4de0(DAT_1808415d8);
      if (ch_2 == '\0') {
        ch_2 = func_0x180340f90(DAT_1808415e8);
        if (ch_2 == '\0') {
          local_78._0_8_ = func_0x1800576d0();
          if (DAT_180840c90 == DAT_180840c98) {
            pU64_7 = &DAT_180840c88;
            pU64_8 = DAT_180840c90;
            goto LAB_18049eb99;
          }
          *DAT_180840c90 = local_78._0_8_;
          DAT_180840c90 = DAT_180840c90 + 1;
          goto LAB_18049e991;
        }
      }
    }
    bFlag_12 = 0;
    uVal_14 = 0;
  }
LAB_18049e991:
  if (bFlag_16) {
    func_0x180402680(&DAT_1808400a0,iVal_3,param_2 != '\0',&local_4a);
  }
  if (*(char *)(DAT_1808415c8 + 0x40) == '\x01') {
    if (param_1 == 4) {
      func_0x1803d3b20('\0' < param_2);
      uVal_13 = 0;
      goto LAB_18049ec78;
    }
    ch_2 = func_0x1803d5ae0();
    if (ch_2 == '\x04') {
      if (param_1 == 0) {
        func_0x1803d5fe0((int)param_3,(int)param_4);
        uVal_13 = 0;
      }
      else if (param_2 == '\0') {
        func_0x1803d5fb0(iVal_3);
        uVal_13 = 0;
      }
      else {
        func_0x1803d5b00();
        uVal_13 = 0;
      }
      goto LAB_18049ec78;
    }
    if (param_1 != 0) {
      func_0x1803d3ff0(iVal_3,param_2 != '\0');
      uVal_13 = 0;
      goto LAB_18049ec78;
    }
  }
  else if (param_1 == 4) {
    local_49 = '\0';
    func_0x1804025d0(&DAT_1808400a0,'\0' < param_2,&local_49);
    if (local_49 != '\x01') {
      if (DAT_1808408b3 == '\0') goto LAB_18049ec6f;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x16484) == '\0') {
        lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_4 + 0x16484) = 1;
        *(uint64_t *)(lVal_4 + 0x16478) = 0xf0893ef090ff9c9b;
        *(uint32_t *)(lVal_4 + 0x16480) = 0x19b8796;
        func_0x180673140(&LAB_1804faec0);
      }
      lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (uint64_t *)(lVal_4 + 0x16478);
      if (*(char *)(lVal_4 + 0x16483) == '\x01') {
        *_Str = *_Str ^ 0x95fb5d83cf9be9f3;
        *(uint *)(lVal_4 + 0x16480) =
             (*(uint *)(lVal_4 + 0x16480) & 0xffff | (uint)*(byte *)(lVal_4 + 0x16482) << 0x10) ^
             SUB164(_DAT_1806cf180,0);
      }
      local_78 = (uint8_t  [16])0x0;
      sz_5 = strlen((char *)_Str);
      if ((int64_t)sz_5 < 0) {
        func_0x18007ba70();
        goto LAB_18049ed90;
      }
      uVal_13 = 0xf;
      pU64_15 = local_78;
      if (0xf < sz_5) {
        uVal_6 = sz_5 | 0xf;
        uVal_13 = 0x16;
        if (0x16 < uVal_6) {
          uVal_13 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_15 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
        }
        else {
          lVal_4 = func_0x180672de0(uVal_13 + 0x28);
          pU64_15 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_15 + -8) = lVal_4;
        }
        local_78._0_8_ = pU64_15;
      }
      local_68 = sz_5;
      local_60 = uVal_13;
      func_0x1806aa960(pU64_15,_Str,sz_5);
      pU64_15[sz_5] = 0;
      uVal_13 = local_60;
      pU64_15 = (uint8_t *)local_78._0_8_;
      pU64_11 = local_78;
      if (0xf < local_60) {
        pU64_11 = (uint8_t *)local_78._0_8_;
      }
      if (DAT_18083cd20 < 0x10) {
        pU64_8 = &DAT_18083cd08;
        if (DAT_18083cd18 == local_68) goto LAB_18049ec14;
LAB_18049ec04:
        bFlag_16 = false;
      }
      else {
        pU64_8 = DAT_18083cd08;
        if (DAT_18083cd18 != local_68) goto LAB_18049ec04;
LAB_18049ec14:
        if (local_68 == 0) {
          bFlag_16 = true;
        }
        else {
          iVal_3 = memcmp(pU64_8,pU64_11,local_68);
          bFlag_16 = iVal_3 == 0;
        }
      }
      if (0xf < uVal_13) {
        uVal_6 = uVal_13 + 1;
        pU64_11 = pU64_15;
        if (0xfff < uVal_6) {
          pU64_11 = *(uint8_t **)(pU64_15 + -8);
          if ((uint8_t *)0x1f < pU64_15 + (-8 - (int64_t)pU64_11)) {
LAB_18049ed90:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_6 = uVal_13 + 0x28;
        }
        thunk_FUN_180695dd0(pU64_11,uVal_6);
      }
      if (!bFlag_16) goto LAB_18049ec6f;
    }
    uVal_13 = 0;
    goto LAB_18049ec78;
  }
LAB_18049ec6f:
  uVal_13 = CONCAT71(uVal_14,bFlag_12 & (local_4a ^ 1));
LAB_18049ec78:
  return uVal_13 & 0xffffffff;
}

// Unwind@18049eda0
void Unwind_18049eda0(void)
{
  func_0x180672f60(&DAT_1808415f0);
  return;
}

// Unwind@18049ede0
void Unwind_18049ede0(void)
{
  func_0x180672f60(&DAT_1808415e0);
  return;
}

// Unwind@18049ee20
void Unwind_18049ee20(void)
{
  func_0x180672f60(&DAT_1808415d0);
  return;
}

// func_0x18049ee60
uint64_t func_0x18049ee60(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x10403d4d);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18049eee0
uint64_t func_0x18049eee0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x344f6742);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x18049ef60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18049ef60(byte param_1,byte param_2,uint64_t param_3)
{
  int *pInt_1;
  int64_t *pLong_2;
  uint64_t *pU64_3;
  int64_t lVal_4;
  int iVal_5;
  byte bFlag_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  uint64_t *pU64_9;
  char ch_10;
  char ch_11;
  uint8_t uVal_12;
  int iVal_13;
  uint uVal_14;
  size_t sz_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  char *fnPtr_18;
  byte *pU8_19;
  uint8_t *pU64_20;
  uint64_t *pU64_21;
  int64_t lVal_22;
  uint64_t unaff_RBX;
  int64_t lVal_23;
  uint8_t *pU64_24;
  int64_t lVal_25;
  uint64_t *pU64_26;
  uint8_t *pU64_27;
  uint64_t uVal_28;
  bool bFlag_29;
  uint8_t local_b8 [32];
  uint8_t local_98 [16];
  uint64_t local_88;
  uint64_t local_80;
  uint8_t local_78 [16];
  size_t local_68;
  uint64_t local_60;
  uint8_t local_4b;
  byte local_4a;
  byte local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_4a = param_2;
  local_49 = param_1;
  if ((param_2 == 0) || (DAT_18083ca10 != param_1)) {
    if ((param_2 != 0) && (DAT_18083cc18 == param_1)) {
      if (DAT_1808408b0 == '\0') {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x164b0) == '\0') {
          lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_17 + 0x164b0) = 1;
          *(uint8_t *)(lVal_17 + 0x164ac) = 1;
          *(uint64_t *)(lVal_17 + 0x164a0) = 0x5ba6a2d2adb2fba4;
          *(uint32_t *)(lVal_17 + 0x164a8) = 0xd9bdf6a2;
          func_0x180673140(&LAB_1804faf20);
        }
        lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_3 = (uint64_t *)(lVal_17 + 0x164a0);
        if (*(char *)(lVal_17 + 0x164ac) == '\x01') {
          *pU64_3 = *pU64_3 ^ 0x29c5d18dd9d393c7;
          *(uint *)(lVal_17 + 0x164a8) = *(uint *)(lVal_17 + 0x164a8) ^ 0xd9d393c7;
          *(uint8_t *)(lVal_17 + 0x164ac) = 0;
        }
        local_78 = ZEXT816(0);
        sz_15 = strlen((char *)pU64_3);
        if ((int64_t)sz_15 < 0) goto LAB_18049fe51;
        uVal_28 = 0xf;
        pU64_27 = local_78;
        if (0xf < sz_15) {
          uVal_16 = sz_15 | 0xf;
          uVal_28 = 0x16;
          if (0x16 < uVal_16) {
            uVal_28 = uVal_16;
          }
          if (uVal_16 < 0xfff) {
            pU64_27 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
          }
          else {
            lVal_17 = func_0x180672de0(uVal_28 + 0x28);
            pU64_27 = (uint8_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_27 + -8) = lVal_17;
          }
          local_78._0_8_ = pU64_27;
        }
        local_68 = sz_15;
        local_60 = uVal_28;
        func_0x1806aa960(pU64_27,pU64_3,sz_15);
        pU64_27[sz_15] = 0;
        uVal_28 = local_60;
        pU64_27 = (uint8_t *)local_78._0_8_;
        pU64_20 = local_78;
        if (0xf < local_60) {
          pU64_20 = (uint8_t *)local_78._0_8_;
        }
        if (DAT_18083cd20 < 0x10) {
          pU64_21 = &DAT_18083cd08;
          if (DAT_18083cd18 == local_68) goto LAB_18049f6d7;
LAB_18049f6f6:
          ch_11 = '\0';
        }
        else {
          pU64_21 = DAT_18083cd08;
          if (DAT_18083cd18 != local_68) goto LAB_18049f6f6;
LAB_18049f6d7:
          if (((local_68 != 0) && (iVal_13 = memcmp(pU64_21,pU64_20,local_68), iVal_13 != 0)) ||
             (0xff < (uint64_t)DAT_18083ca10)) goto LAB_18049f6f6;
          ch_11 = (&DAT_180840d34)[DAT_18083ca10];
        }
        if (0xf < uVal_28) {
          uVal_16 = uVal_28 + 1;
          pU64_20 = pU64_27;
          if (0xfff < uVal_16) {
            pU64_20 = *(uint8_t **)(pU64_27 + -8);
            if ((uint8_t *)0x1f < pU64_27 + (-8 - (int64_t)pU64_20)) goto LAB_18049ff28;
            uVal_16 = uVal_28 + 0x28;
          }
          thunk_FUN_180695dd0(pU64_20,uVal_16);
        }
      }
      else {
        if (0xff < (uint64_t)DAT_18083ca10) goto LAB_18049f27e;
        ch_11 = (&DAT_180840d34)[DAT_18083ca10];
      }
      if (ch_11 != '\0') {
        _DAT_180840ae8 = 0x100;
        return;
      }
    }
LAB_18049f27e:
    unaff_RBX = (uint64_t)local_49;
    param_3 = (uint64_t)local_4a;
    if ((&DAT_180840d34)[unaff_RBX] == local_4a) {
      return;
    }
    local_4b = 0;
    (&DAT_180840d34)[unaff_RBX] = local_4a;
    if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x1c39c) < DAT_180841610) goto LAB_18049fe56;
  }
  else {
    if (DAT_1808408b0 != '\0') {
LAB_18049f257:
      if (((uint64_t)DAT_18083cc18 == 0) ||
         ((DAT_18083cc18 < 0x100 && ((&DAT_180840d34)[DAT_18083cc18] == '\x01')))) {
        _DAT_180840ae8 = 0x100;
        return;
      }
      goto LAB_18049f27e;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x16498) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0x16498) = 1;
      *(uint8_t *)(lVal_17 + 0x16494) = 1;
      *(uint64_t *)(lVal_17 + 0x16488) = 0xd71ac43ead2e07e4;
      *(uint32_t *)(lVal_17 + 0x16490) = 0xd9210ae2;
      func_0x180673140(&LAB_1804faef0);
    }
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_17 + 0x16488);
    if (*(char *)(lVal_17 + 0x16494) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xa579b761d94f6f87;
      *(uint *)(lVal_17 + 0x16490) = *(uint *)(lVal_17 + 0x16490) ^ 0xd94f6f87;
      *(uint8_t *)(lVal_17 + 0x16494) = 0;
    }
    local_78 = ZEXT816(0);
    sz_15 = strlen((char *)pU64_3);
    if (-1 < (int64_t)sz_15) {
      uVal_28 = 0xf;
      pU64_27 = local_78;
      if (0xf < sz_15) {
        uVal_16 = sz_15 | 0xf;
        uVal_28 = 0x16;
        if (0x16 < uVal_16) {
          uVal_28 = uVal_16;
        }
        if (uVal_16 < 0xfff) {
          pU64_27 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
        }
        else {
          lVal_17 = func_0x180672de0(uVal_28 + 0x28);
          pU64_27 = (uint8_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_27 + -8) = lVal_17;
        }
        local_78._0_8_ = pU64_27;
      }
      local_68 = sz_15;
      local_60 = uVal_28;
      func_0x1806aa960(pU64_27,pU64_3,sz_15);
      pU64_27[sz_15] = 0;
      uVal_28 = local_60;
      pU64_27 = (uint8_t *)local_78._0_8_;
      pU64_20 = local_78;
      if (0xf < local_60) {
        pU64_20 = (uint8_t *)local_78._0_8_;
      }
      if (DAT_18083cd20 < 0x10) {
        pU64_21 = &DAT_18083cd08;
        if (DAT_18083cd18 == local_68) goto LAB_18049f231;
LAB_18049f1de:
        bFlag_29 = false;
      }
      else {
        pU64_21 = DAT_18083cd08;
        if (DAT_18083cd18 != local_68) goto LAB_18049f1de;
LAB_18049f231:
        if (local_68 == 0) {
          bFlag_29 = true;
        }
        else {
          iVal_13 = memcmp(pU64_21,pU64_20,local_68);
          bFlag_29 = iVal_13 == 0;
        }
      }
      if (0xf < uVal_28) {
        uVal_16 = uVal_28 + 1;
        pU64_20 = pU64_27;
        if (0xfff < uVal_16) {
          pU64_20 = *(uint8_t **)(pU64_27 + -8);
          if ((uint8_t *)0x1f < pU64_27 + (-8 - (int64_t)pU64_20)) goto LAB_18049ff28;
          uVal_16 = uVal_28 + 0x28;
        }
        thunk_FUN_180695dd0(pU64_20,uVal_16);
      }
      if (!bFlag_29) {
        _DAT_180840ae8 = 0x100;
        return;
      }
      goto LAB_18049f257;
    }
LAB_18049fe51:
    func_0x18007ba70();
LAB_18049fe56:
    func_0x180672ec0(&DAT_180841610);
    param_3 = param_3 & 0xffffffff;
    if (DAT_180841610 == -1) {
      DAT_180841608 = (int64_t *)func_0x1804980c0(&DAT_1808400a0);
      _Init_thread_footer(&DAT_180841610);
      param_3 = (uint64_t)local_4a;
      unaff_RBX = (uint64_t)local_49;
    }
  }
  func_0x180401c50(&DAT_1808400a0,unaff_RBX & 0xff,param_3,&local_4b);
  if (local_4a == 1) {
    uVal_14 = (**(func_ptr_t *)(*DAT_180841608 + 0x20))();
    pLong_7 = DAT_180841608;
    if (uVal_14 != local_49) {
      if ((local_4a != 1) || (DAT_180840a50 == 0)) goto LAB_18049f3d8;
      pU64_27 = (uint8_t *)func_0x18011b6e0();
      uVal_12 = *pU64_27;
      goto LAB_18049f3db;
    }
    if (*(char *)(DAT_180841608 + 8) == '\0') {
      *(uint8_t *)(DAT_180841608 + 8) = 1;
      func_0x1801dbc50(pLong_7);
      local_98 = ZEXT816(0);
      local_88 = 0;
      local_80 = 0xf;
      local_78._0_8_ = &DAT_28d478d88fb3dcdf;
      DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
      if (DAT_180840a60 == 0) {
        DAT_180840a68 = 0;
LAB_18049f7a3:
        if (local_88 != 0) goto LAB_18049f7ae;
      }
      else {
        lVal_17 = func_0x18014cd50(&DAT_180840a48);
        if (lVal_17 == 0) goto LAB_18049f7a3;
LAB_18049f7ae:
        pU64_9 = (uint64_t *)pLong_7[0xe];
        for (pU64_21 = (uint64_t *)pLong_7[0xd]; pU64_21 != pU64_9; pU64_21 = pU64_21 + 4) {
          if (local_88 == 0) {
LAB_18049f860:
            lVal_17 = *(int64_t *)
                      (*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70);
            if (*(int64_t *)(lVal_17 + 0x430) == 0) {
              local_78._0_8_ = 0x185dd108334994f2;
              lVal_22 = 0x400;
              uVal_28 = pU64_21[2];
              uVal_16 = pU64_21[3];
            }
            else {
              local_78._0_8_ = &DAT_18615f6ca6ec3ae1;
              lVal_22 = 0x420;
              uVal_28 = pU64_21[2];
              uVal_16 = pU64_21[3];
            }
            pU64_26 = pU64_21;
            if (0xf < uVal_16) {
              pU64_26 = (uint64_t *)*pU64_21;
            }
            uVal_16 = *(uint64_t *)(lVal_22 + 0x10 + lVal_17);
            if (*(uint64_t *)(lVal_22 + 0x18 + lVal_17) < 0x10) {
              lVal_22 = lVal_22 + lVal_17;
            }
            else {
              lVal_22 = *(int64_t *)(lVal_22 + lVal_17);
            }
            if ((uVal_28 <= uVal_16) &&
               ((uVal_28 == 0 ||
                (lVal_25 = uVal_16 + lVal_22, lVal_17 = thunk_FUN_180676d20(lVal_22,lVal_25,pU64_26),
                lVal_17 != lVal_25 && lVal_17 - lVal_22 != -1)))) goto LAB_18049fae7;
          }
          else {
            if ((uint64_t)pU64_21[3] < 0x10) {
              pU64_26 = pU64_21;
              if (0xf < local_80) goto LAB_18049f819;
LAB_18049f803:
              pU64_27 = local_98;
              uVal_28 = pU64_21[2];
            }
            else {
              pU64_26 = (uint64_t *)*pU64_21;
              if (local_80 < 0x10) goto LAB_18049f803;
LAB_18049f819:
              uVal_28 = pU64_21[2];
              pU64_27 = (uint8_t *)local_98._0_8_;
            }
            if (uVal_28 <= local_88) {
              if (uVal_28 == 0) goto LAB_18049fae7;
              pU64_24 = pU64_27 + local_88;
              pU64_20 = (uint8_t *)thunk_FUN_180676d20(pU64_27,pU64_24,pU64_26);
              if (pU64_20 != pU64_24 && (int64_t)pU64_20 - (int64_t)pU64_27 != -1)
              goto LAB_18049fae7;
              if (local_88 == 0) goto LAB_18049f860;
            }
          }
        }
      }
      (**(func_ptr_t *)(*pLong_7 + 0x10))(pLong_7,local_78);
      ch_11 = func_0x180052940(local_78);
      if (ch_11 == '\0') {
        (**(func_ptr_t *)(*pLong_7 + 0x18))(pLong_7,local_b8);
        ch_11 = func_0x180052a50(local_b8);
        func_0x180001e70(local_b8);
        func_0x180001e70(local_78);
        if (ch_11 == '\0') {
          func_0x180001e70(local_98);
          func_0x1801dc7a0(pLong_7,1);
          (**(func_ptr_t *)(*pLong_7 + 0x58))(pLong_7);
          goto LAB_18049f3eb;
        }
      }
      else {
        func_0x180001e70(local_78);
      }
LAB_18049fae7:
      if (0xf < local_80) {
        uVal_28 = local_80 + 1;
        lVal_17 = local_98._0_8_;
        if (0xfff < uVal_28) {
          lVal_17 = *(int64_t *)(local_98._0_8_ + -8);
          if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_17)) {
LAB_18049ff28:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_28 = local_80 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_17,uVal_28);
      }
      *(uint8_t *)(pLong_7 + 8) = 0;
      func_0x1801dc420(pLong_7);
    }
  }
  else {
LAB_18049f3d8:
    uVal_12 = 0;
LAB_18049f3db:
    func_0x180401b50(&DAT_1808400a0,local_49,uVal_12);
  }
LAB_18049f3eb:
  fnPtr_18 = (char *)func_0x18011b6e0(DAT_180840a50);
  if ((*fnPtr_18 == '\x01') && ((DAT_1808408b8 == local_49 & local_4a) == 1)) {
    local_78._0_8_ = &DAT_28d0f803f34a0611;
    pU8_19 = (byte *)func_0x180116dc0(DAT_180840a58[0xc9]);
    bFlag_6 = *pU8_19;
    local_78._0_8_ = &DAT_28d0f803f34a0611;
    pU8_19 = (byte *)func_0x180116dc0(DAT_180840a58[0xc9]);
    *pU8_19 = bFlag_6 ^ 1;
  }
  func_0x1803d21f0(local_49,local_4a,&local_4b);
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180841620) && (func_0x180672ec0(&DAT_180841620), DAT_180841620 == -1)) {
    DAT_180841618 = func_0x1804a0070(&DAT_1808400a0);
    _Init_thread_footer(&DAT_180841620);
  }
  if (*(char *)(DAT_180841618 + 0x40) != '\x01') goto LAB_18049fd91;
  lVal_17 = *(int64_t *)(DAT_180840a58[0x3b] + 0x30);
  lVal_22 = *(int64_t *)(lVal_17 + 0x118);
  iVal_13 = *(int *)(lVal_22 + 8);
  do {
    pInt_1 = (int *)(lVal_22 + 8);
    LOCK();
    iVal_5 = *pInt_1;
    bFlag_29 = iVal_13 == iVal_5;
    if (bFlag_29) {
      *pInt_1 = iVal_13 + 1;
      iVal_5 = iVal_13;
    }
    iVal_13 = iVal_5;
    UNLOCK();
  } while (!bFlag_29);
  lVal_22 = *(int64_t *)(lVal_17 + 0x110);
  pLong_7 = *(int64_t **)(lVal_17 + 0x118);
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
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
    }
  }
  lVal_8 = *(int64_t *)(lVal_22 + 8);
  lVal_17 = lVal_8 + 0x9c0;
  lVal_25 = lVal_8 + 0x980;
  lVal_4 = lVal_8 + 0x900;
  lVal_23 = lVal_8 + 0x940;
  if (*(int *)(lVal_22 + 0x68) != 1) {
    lVal_23 = lVal_8 + 0x4c0;
    lVal_25 = lVal_8 + 0x500;
    lVal_17 = lVal_8 + 0x540;
    lVal_4 = lVal_8 + 0x480;
  }
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180841640) && (func_0x180672ec0(&DAT_180841640), DAT_180841640 == -1)) {
    DAT_180841628 = &local_49;
    DAT_180841630 = &local_4a;
    DAT_180841638 = &local_4b;
    _Init_thread_footer(&DAT_180841640);
  }
  if (*(char *)(DAT_180841618 + 0x81) == '\x01') {
    bFlag_6 = *DAT_180841628;
    uVal_14 = func_0x180116750(lVal_17);
    if (uVal_14 == bFlag_6) {
      ch_11 = *(char *)(DAT_180841618 + 0x80);
      ch_10 = func_0x180116790(lVal_25);
      if (ch_11 == '\0') {
        if (ch_10 != '\0') {
          bFlag_6 = *DAT_180841630;
          uVal_12 = func_0x180116750(lVal_25);
          uVal_14 = bFlag_6 | 0x100;
LAB_18049fb77:
          (**(func_ptr_t *)(DAT_18083e7f0 + 8))(DAT_180840a70,uVal_14,uVal_12,0);
        }
      }
      else if (ch_10 != '\0') {
        if (*DAT_180841630 != 1) {
          uVal_12 = func_0x180116750(lVal_25);
          uVal_14 = 0x100;
          goto LAB_18049fb77;
        }
        *DAT_180841638 = 1;
      }
    }
    bFlag_6 = *DAT_180841628;
    uVal_14 = func_0x180116750(lVal_25);
    if (uVal_14 == bFlag_6) {
      ch_11 = *(char *)(DAT_180841618 + 0x80);
      ch_10 = func_0x180116790(lVal_17);
      if (ch_11 == '\0') {
        if (ch_10 != '\0') {
          bFlag_6 = *DAT_180841630;
          uVal_12 = func_0x180116750(lVal_17);
          uVal_14 = bFlag_6 | 0x100;
LAB_18049fc26:
          (**(func_ptr_t *)(DAT_18083e7f0 + 8))(DAT_180840a70,uVal_14,uVal_12,0);
        }
      }
      else if (ch_10 != '\0') {
        if (*DAT_180841630 != 1) {
          uVal_12 = func_0x180116750(lVal_17);
          uVal_14 = 0x100;
          goto LAB_18049fc26;
        }
        *DAT_180841638 = 1;
      }
    }
  }
  if (*(char *)(DAT_180841618 + 0x82) != '\x01') goto LAB_18049fd91;
  bFlag_6 = *DAT_180841628;
  uVal_14 = func_0x180116750(lVal_4);
  if (uVal_14 == bFlag_6) {
    ch_11 = *(char *)(DAT_180841618 + 0x80);
    ch_10 = func_0x180116790(lVal_23);
    if (ch_11 == '\0') {
      if (ch_10 != '\0') {
        bFlag_6 = *DAT_180841630;
        uVal_12 = func_0x180116750(lVal_23);
        uVal_14 = bFlag_6 | 0x100;
LAB_18049fce2:
        (**(func_ptr_t *)(DAT_18083e7f0 + 8))(DAT_180840a70,uVal_14,uVal_12,0);
      }
    }
    else if (ch_10 != '\0') {
      if (*DAT_180841630 != 1) {
        uVal_12 = func_0x180116750(lVal_23);
        uVal_14 = 0x100;
        goto LAB_18049fce2;
      }
      *DAT_180841638 = 1;
    }
  }
  bFlag_6 = *DAT_180841628;
  uVal_14 = func_0x180116750(lVal_23);
  if (uVal_14 != bFlag_6) goto LAB_18049fd91;
  ch_11 = *(char *)(DAT_180841618 + 0x80);
  ch_10 = func_0x180116790(lVal_4);
  if (ch_11 == '\0') {
    if (ch_10 == '\0') goto LAB_18049fd91;
    bFlag_6 = *DAT_180841630;
    uVal_12 = func_0x180116750(lVal_4);
    uVal_14 = bFlag_6 | 0x100;
  }
  else {
    if (ch_10 == '\0') goto LAB_18049fd91;
    if (*DAT_180841630 == 1) {
      *DAT_180841638 = 1;
      goto LAB_18049fd91;
    }
    uVal_12 = func_0x180116750(lVal_4);
    uVal_14 = 0x100;
  }
  (**(func_ptr_t *)(DAT_18083e7f0 + 8))(DAT_180840a70,uVal_14,uVal_12,0);
LAB_18049fd91:
  (&DAT_180840e34)[local_49] = local_4b;
  return;
}

// Unwind@18049ff30
void Unwind_18049ff30(void)
{
  func_0x180672f60(&DAT_180841620);
  return;
}

// Unwind@18049ff70
void Unwind_18049ff70(void)
{
  func_0x180672f60(&DAT_180841610);
  return;
}

// Unwind@18049ffb0
void Unwind_18049ffb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18049fff0
void Unwind_18049fff0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1804a0030
void Unwind_1804a0030(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x1804a0070
uint64_t func_0x1804a0070(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x691f6eb9);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x1804a00f0
void func_0x1804a00f0(uint8_t param_1,byte param_2)
{
                    /* WARNING: Could not recover jumptable at 0x0001804a0112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(DAT_18083e7f0 + 8))(DAT_180840a70,param_2 ^ 0x101,param_1,0);
  return;
}

// func_0x1804a0120
uint64_t func_0x1804a0120(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x81560f66);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x1804a01a0
void func_0x1804a01a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_180841910) {
    func_0x180672ec0(&DAT_180841910);
    if (DAT_180841910 == -1) {
      DAT_180841908 = func_0x1804faf80(&DAT_180840f80);
      _Init_thread_footer(&DAT_180841910);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_180841920) {
    func_0x180672ec0(&DAT_180841920);
    if (DAT_180841920 == -1) {
      if (DAT_180841908 == 0) {
        DAT_180841918 = (func_ptr_t )0x0;
      }
      else {
        DAT_180841918 = (func_ptr_t )(DAT_180841908 + *(int *)(DAT_180841908 + 1) + 5);
      }
      _Init_thread_footer(&DAT_180841920);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001804a0222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180841918)(param_1,param_2,param_3,param_4);
  return;
}

// Unwind@1804a02b0
void Unwind_1804a02b0(void)
{
  func_0x180672f60(&DAT_180841910);
  return;
}

// func_0x1804a02e0
int64_t func_0x1804a02e0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x164d8) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x164d8) = 1;
    *(uint64_t *)(lVal_1 + 0x164d0) = 0x1b7c0da4a057a9c;
    func_0x180673140(&LAB_1804fb060);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x164d0;
}

// func_0x1804a0360
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804a0360(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 7) == '\x01') {
    *param_1 = (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 5) << 8,*(uint32_t *)param_1) |
               (uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20) ^ SUB168(_DAT_1806cf190,0);
  }
  return;
}

// func_0x1804a03a0
uint32_t * func_0x1804a03a0(uint32_t *param_1,char **param_2,uint32_t param_3)
{
  char *fnPtr_1;
  func_ptr_t fnPtr_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  byte **ptr2_Byte_5;
  uint32_t *pU64_6;
  char *fnPtr_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  
  *param_1 = param_3;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  fnPtr_1 = param_2[1];
  if ((int64_t)fnPtr_1 < 0) {
    func_0x18007ba70();
    fnPtr_2 = (func_ptr_t )swi(3);
    pU64_6 = (uint32_t *)(*fnPtr_2)();
    return pU64_6;
  }
  fnPtr_7 = *param_2;
  uVal_9 = 0xf;
  ptr2_Byte_5 = (byte **)(param_1 + 2);
  if (&DAT_0000000f < fnPtr_1) {
    uVal_3 = (uint64_t)fnPtr_1 | 0xf;
    uVal_9 = 0x16;
    if (0x16 < uVal_3) {
      uVal_9 = uVal_3;
    }
    if (uVal_3 < 0xfff) {
      ptr2_Byte_5 = (byte **)func_0x180672de0(uVal_9 + 1);
    }
    else {
      lVal_4 = func_0x180672de0(uVal_9 + 0x28);
      ptr2_Byte_5 = (byte **)(lVal_4 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)((int64_t)ptr2_Byte_5 + -8) = lVal_4;
    }
    *(byte ***)(param_1 + 2) = ptr2_Byte_5;
  }
  *(char **)(param_1 + 6) = fnPtr_1;
  *(uint64_t *)(param_1 + 8) = uVal_9;
  func_0x1806aa960(ptr2_Byte_5,fnPtr_7,fnPtr_1);
  *(byte *)((int64_t)ptr2_Byte_5 + (int64_t)fnPtr_1) = 0;
  fnPtr_1 = param_2[1];
  if (fnPtr_1 == (char *)0x0) {
    uVal_9 = 0;
  }
  else {
    fnPtr_7 = *param_2;
    uVal_3 = (uint64_t)((uint)fnPtr_1 & 7);
    if (&DAT_00000007 < fnPtr_1) {
      uVal_8 = (uint64_t)fnPtr_1 & 0xfffffffffffffff8;
      uVal_9 = 0xcbf29ce484222325;
      do {
        uVal_9 = (((((((uVal_9 * 0x100000001b3 ^ (int64_t)*fnPtr_7) * 0x100000001b3 ^
                     (int64_t)fnPtr_7[1]) * 0x100000001b3 ^ (int64_t)fnPtr_7[2]) * 0x100000001b3 ^
                   (int64_t)fnPtr_7[3]) * 0x100000001b3 ^ (int64_t)fnPtr_7[4]) * 0x100000001b3 ^
                 (int64_t)fnPtr_7[5]) * 0x100000001b3 ^ (int64_t)fnPtr_7[6]) * 0x100000001b3 ^
                (int64_t)fnPtr_7[7];
        fnPtr_7 = fnPtr_7 + 8;
        uVal_8 = uVal_8 - 8;
      } while (uVal_8 != 0);
      if (uVal_3 == 0) goto LAB_1804a0524;
    }
    else {
      uVal_9 = 0xcbf29ce484222325;
    }
    uVal_8 = 0;
    do {
      uVal_9 = uVal_9 * 0x100000001b3 ^ (int64_t)fnPtr_7[uVal_8];
      uVal_8 = uVal_8 + 1;
    } while (uVal_3 != uVal_8);
  }
LAB_1804a0524:
  *(uint64_t *)(param_1 + 10) = uVal_9;
  *(uint64_t *)(param_1 + 0xc) =
       ((uint64_t)*(byte *)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVal_9;
  return param_1;
}

// func_0x1804a0560
void func_0x1804a0560(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4, uint8_t param_5,uint64_t param_6)
{
  int *pInt_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  func_ptr_t fnPtr_4;
  int64_t lVal_5;
  uint8_t local_48 [16];
  uint64_t *local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_38 = param_4;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_180841930) {
    func_0x180672ec0(&DAT_180841930);
    if (DAT_180841930 == -1) {
      lVal_5 = func_0x1804ff620(&DAT_180840f80);
      if (lVal_5 == 0) {
        DAT_180841928 = (func_ptr_t )0x0;
      }
      else {
        DAT_180841928 = (func_ptr_t )(lVal_5 + *(int *)(lVal_5 + 1) + 5);
      }
      _Init_thread_footer(&DAT_180841930);
      param_4 = local_38;
    }
  }
  fnPtr_4 = DAT_180841928;
  if (param_4[1] == 0) {
    local_48._8_8_ = 0;
  }
  else {
    LOCK();
    pInt_1 = (int *)(param_4[1] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    local_48._8_8_ = param_4[1];
  }
  local_48._0_8_ = *param_4;
  (*fnPtr_4)(param_1,param_2,param_3,local_48,param_5,param_6);
  pLong_3 = (int64_t *)local_38[1];
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
        (**(func_ptr_t *)(*pLong_3 + 8))(pLong_3);
      }
    }
  }
  return;
}

// Unwind@1804a0690
void Unwind_1804a0690(void)
{
  func_0x180672f60(&DAT_180841930);
  return;
}

// Unwind@1804a06c0
void Unwind_1804a06c0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x40));
  return;
}

// func_0x1804a06f0
void func_0x1804a06f0(int64_t param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_1 + 0x40);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0x28);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1804a079c;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0xf;
  *(uint8_t *)(param_1 + 0x28) = 0;
  uVal_1 = *(uint64_t *)(param_1 + 0x20);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 8);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_1804a079c:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0xf;
  *(uint8_t *)(param_1 + 8) = 0;
  return;
}

// func_0x1804a07a0
int64_t func_0x1804a07a0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x164e8) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x164e8) = 1;
    *(uint64_t *)(lVal_1 + 0x164e0) = 0x1a744bcfa0d322c;
    func_0x180673140(&LAB_1804fb0a0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x164e0;
}

// func_0x1804a0820
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1804a0820(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 7) == '\x01') {
    *param_1 = (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 5) << 8,*(uint32_t *)param_1) |
               (uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20) ^ SUB168(_DAT_1806cf1a0,0);
  }
  return;
}

// func_0x1804a0860
uint64_t func_0x1804a0860(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x1dce1e68);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x1804a08e0
uint64_t func_0x1804a08e0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x1f36efd2);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x1804a0960
void func_0x1804a0960(void)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint64_t *pU64_3;
  int64_t *pLong_4;
  uint64_t *pU64_5;
  uint8_t auArr_6 [16];
  int64_t **ptr2_Long_7;
  int64_t *pLong_8;
  int64_t *pLong_9;
  uint64_t uVal_10;
  uint64_t *pU64_11;
  uint64_t *pU64_12;
  int64_t **ptr2_Long_13;
  int64_t *local_e8;
  uint64_t local_e0;
  int64_t *local_d8;
  uint64_t local_d0;
  uint8_t local_c8 [16];
  uint8_t local_b8;
  uint8_t local_b0 [16];
  uint8_t local_a0 [16];
  uint16_t local_90;
  uint8_t local_88 [16];
  int64_t **local_78;
  int64_t *local_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  int64_t *local_58;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_88 = ZEXT816(0);
  local_78 = (int64_t **)0x0;
  local_e8 = (int64_t *)0x8;
  func_0x1804fb6f0(local_88,&local_e8);
  pLong_9 = (int64_t *)func_0x180672de0(0x120);
  *pLong_9 = (int64_t)&PTR_LAB_1806cd920;
  *(uint32_t *)(pLong_9 + 1) = 1;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xc) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0x1c) = 0;
  func_0x180674aa0(pLong_9 + 2);
  *(uint8_t (*)[16])(pLong_9 + 0xb) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 9) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 5) = ZEXT816(0);
  *(uint32_t *)(pLong_9 + 0xd) = 0xffffffff;
  *(uint32_t *)(pLong_9 + 4) = 2;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x6c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x7c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x8c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x9c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xa9) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0xbc) = 0;
  *(uint32_t *)((int64_t)pLong_9 + 0xbf) = 0;
  pLong_9[0x19] = 0;
  pLong_9[0x1a] = (int64_t)&PTR_DAT_1806d5bc0;
  pLong_9[0x21] = (int64_t)(pLong_9 + 0x1a);
  *pLong_9 = (int64_t)&PTR_FUN_1806cd980;
  local_70 = pLong_9 + 0x22;
  *(uint8_t (*)[16])(pLong_9 + 0x22) = ZEXT816(0);
  local_58 = pLong_9;
  func_0x18043e8a0(&DAT_180840990,&local_e8);
  ptr2_Long_13 = DAT_180840998;
  if (DAT_180840998[1] == (int64_t *)0x0) {
    local_e0 = (int64_t *)0x0;
  }
  else {
    LOCK();
    pLong_4 = DAT_180840998[1] + 1;
    *(int *)pLong_4 = *(int *)pLong_4 + 1;
    UNLOCK();
    local_e0 = ptr2_Long_13[1];
  }
  local_e8 = *ptr2_Long_13;
  local_d0 = 0;
  local_d8 = local_e8;
  func_0x180673780(local_c8);
  local_b8 = 0;
  local_b0 = ZEXT816(0);
  local_a0 = ZEXT816(0);
  local_90 = 0;
  func_0x1804ff9f0(local_68,local_58,&local_e8);
  pLong_8 = local_58;
  auArr_6 = ZEXT816(0);
  pLong_4 = (int64_t *)local_58[0x23];
  *(uint32_t *)(local_58 + 0x22) = local_68._0_4_;
  *(uint32_t *)((int64_t)local_58 + 0x114) = local_68._4_4_;
  *(uint32_t *)(local_58 + 0x23) = (uint32_t)uStack_60;
  *(uint32_t *)((int64_t)local_58 + 0x11c) = uStack_60._4_4_;
  _local_68 = auArr_6;
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
  pLong_9 = pLong_9 + 1;
  pLong_4 = uStack_60;
  if (uStack_60 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = uStack_60 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*uStack_60)(uStack_60);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
      }
    }
  }
  *(uint8_t *)((int64_t)pLong_8 + 0xc2) = 1;
  local_e8 = pLong_8;
  local_e0 = (int64_t *)CONCAT71(local_e0._1_7_,1);
  LOCK();
  *(int *)(pLong_8 + 1) = *(int *)(pLong_8 + 1) + 1;
  UNLOCK();
  LOCK();
  *(int *)pLong_9 = *(int *)pLong_9 + -1;
  UNLOCK();
  if (*(int *)pLong_9 == 0) {
    pU64_12 = (uint64_t *)pLong_8[0x19];
    if (pU64_12 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_12)(pU64_12,pLong_8);
      goto LAB_1804a0b7a;
    }
    (**(func_ptr_t *)*pLong_8)(pLong_8,1);
    if ((int64_t **)local_88._8_8_ == local_78) goto LAB_1804a0bb5;
LAB_1804a0b84:
    pLong_9 = local_e8;
    local_e8 = (int64_t *)0x0;
    *(int64_t **)local_88._8_8_ = pLong_9;
    *(uint8_t *)(local_88._8_8_ + 8) = 1;
    local_88._8_8_ = local_88._8_8_ + 0x10;
  }
  else {
LAB_1804a0b7a:
    if ((int64_t **)local_88._8_8_ != local_78) goto LAB_1804a0b84;
LAB_1804a0bb5:
    func_0x1804fb890(local_88,local_88._8_8_,&local_e8);
  }
  if (local_e8 != (int64_t *)0x0) {
    LOCK();
    pLong_9 = local_e8 + 1;
    *(int *)pLong_9 = *(int *)pLong_9 + -1;
    UNLOCK();
    if (*(int *)pLong_9 == 0) {
      if ((uint64_t *)local_e8[0x19] == (uint64_t *)0x0) {
        (**(func_ptr_t *)*local_e8)(local_e8,1);
      }
      else {
        (***(func_ptr_t **)(uint64_t *)local_e8[0x19])();
      }
    }
  }
  pLong_9 = (int64_t *)func_0x180672de0(0x120);
  *pLong_9 = (int64_t)&PTR_LAB_1806cd920;
  *(uint32_t *)(pLong_9 + 1) = 1;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xc) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0x1c) = 0;
  func_0x180674aa0(pLong_9 + 2);
  *(uint8_t (*)[16])(pLong_9 + 0xb) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 9) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 5) = ZEXT816(0);
  *(uint32_t *)(pLong_9 + 0xd) = 0xffffffff;
  *(uint32_t *)(pLong_9 + 4) = 2;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x6c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x7c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x8c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x9c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xa9) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0xbc) = 0;
  *(uint32_t *)((int64_t)pLong_9 + 0xbf) = 0;
  pLong_9[0x19] = 0;
  pLong_9[0x1a] = (int64_t)&PTR_DAT_1806d5c40;
  pLong_9[0x21] = (int64_t)(pLong_9 + 0x1a);
  *pLong_9 = (int64_t)&PTR_FUN_1806cd980;
  local_70 = pLong_9 + 0x22;
  *(uint8_t (*)[16])(pLong_9 + 0x22) = ZEXT816(0);
  local_58 = pLong_9;
  func_0x18043e8a0(&DAT_180840990,&local_e8);
  ptr2_Long_13 = DAT_180840998;
  if (DAT_180840998[1] == (int64_t *)0x0) {
    local_e0 = (int64_t *)0x0;
  }
  else {
    LOCK();
    pLong_4 = DAT_180840998[1] + 1;
    *(int *)pLong_4 = *(int *)pLong_4 + 1;
    UNLOCK();
    local_e0 = ptr2_Long_13[1];
  }
  local_e8 = *ptr2_Long_13;
  local_d0 = 0;
  local_d8 = local_e8;
  func_0x180673780(local_c8);
  local_b8 = 0;
  local_b0 = ZEXT816(0);
  local_a0 = ZEXT816(0);
  local_90 = 0;
  func_0x1804ff9f0(local_68,local_58,&local_e8);
  pLong_8 = local_58;
  auArr_6 = ZEXT816(0);
  pLong_4 = (int64_t *)local_58[0x23];
  *(uint32_t *)(local_58 + 0x22) = local_68._0_4_;
  *(uint32_t *)((int64_t)local_58 + 0x114) = local_68._4_4_;
  *(uint32_t *)(local_58 + 0x23) = (uint32_t)uStack_60;
  *(uint32_t *)((int64_t)local_58 + 0x11c) = uStack_60._4_4_;
  _local_68 = auArr_6;
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
  pLong_9 = pLong_9 + 1;
  pLong_4 = uStack_60;
  if (uStack_60 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = uStack_60 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*uStack_60)(uStack_60);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
      }
    }
  }
  *(uint8_t *)((int64_t)pLong_8 + 0xc2) = 1;
  local_e8 = pLong_8;
  local_e0 = (int64_t *)CONCAT71(local_e0._1_7_,1);
  LOCK();
  *(int *)(pLong_8 + 1) = *(int *)(pLong_8 + 1) + 1;
  UNLOCK();
  LOCK();
  *(int *)pLong_9 = *(int *)pLong_9 + -1;
  UNLOCK();
  if (*(int *)pLong_9 == 0) {
    pU64_12 = (uint64_t *)pLong_8[0x19];
    if (pU64_12 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_12)(pU64_12,pLong_8);
      goto LAB_1804a0db4;
    }
    (**(func_ptr_t *)*pLong_8)(pLong_8,1);
    if ((int64_t **)local_88._8_8_ == local_78) goto LAB_1804a0def;
LAB_1804a0dbe:
    pLong_9 = local_e8;
    local_e8 = (int64_t *)0x0;
    *(int64_t **)local_88._8_8_ = pLong_9;
    *(uint8_t *)(local_88._8_8_ + 8) = 1;
    local_88._8_8_ = local_88._8_8_ + 0x10;
  }
  else {
LAB_1804a0db4:
    if ((int64_t **)local_88._8_8_ != local_78) goto LAB_1804a0dbe;
LAB_1804a0def:
    func_0x1804fb890(local_88,local_88._8_8_,&local_e8);
  }
  if (local_e8 != (int64_t *)0x0) {
    LOCK();
    pLong_9 = local_e8 + 1;
    *(int *)pLong_9 = *(int *)pLong_9 + -1;
    UNLOCK();
    if (*(int *)pLong_9 == 0) {
      if ((uint64_t *)local_e8[0x19] == (uint64_t *)0x0) {
        (**(func_ptr_t *)*local_e8)(local_e8,1);
      }
      else {
        (***(func_ptr_t **)(uint64_t *)local_e8[0x19])();
      }
    }
  }
  pLong_9 = (int64_t *)func_0x180672de0(0x120);
  *pLong_9 = (int64_t)&PTR_LAB_1806cd920;
  *(uint32_t *)(pLong_9 + 1) = 1;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xc) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0x1c) = 0;
  func_0x180674aa0(pLong_9 + 2);
  *(uint8_t (*)[16])(pLong_9 + 0xb) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 9) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 5) = ZEXT816(0);
  *(uint32_t *)(pLong_9 + 0xd) = 0xffffffff;
  *(uint32_t *)(pLong_9 + 4) = 2;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x6c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x7c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x8c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x9c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xa9) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0xbc) = 0;
  *(uint32_t *)((int64_t)pLong_9 + 0xbf) = 0;
  pLong_9[0x19] = 0;
  pLong_9[0x1a] = (int64_t)&PTR_DAT_1806d5c70;
  pLong_9[0x21] = (int64_t)(pLong_9 + 0x1a);
  *pLong_9 = (int64_t)&PTR_FUN_1806cd980;
  local_70 = pLong_9 + 0x22;
  *(uint8_t (*)[16])(pLong_9 + 0x22) = ZEXT816(0);
  local_58 = pLong_9;
  func_0x18043e8a0(&DAT_180840990,&local_e8);
  ptr2_Long_13 = DAT_180840998;
  if (DAT_180840998[1] == (int64_t *)0x0) {
    local_e0 = (int64_t *)0x0;
  }
  else {
    LOCK();
    pLong_4 = DAT_180840998[1] + 1;
    *(int *)pLong_4 = *(int *)pLong_4 + 1;
    UNLOCK();
    local_e0 = ptr2_Long_13[1];
  }
  local_e8 = *ptr2_Long_13;
  local_d0 = 0;
  local_d8 = local_e8;
  func_0x180673780(local_c8);
  local_b8 = 0;
  local_b0 = ZEXT816(0);
  local_a0 = ZEXT816(0);
  local_90 = 0;
  func_0x1804ff9f0(local_68,local_58,&local_e8);
  pLong_8 = local_58;
  auArr_6 = ZEXT816(0);
  pLong_4 = (int64_t *)local_58[0x23];
  *(uint32_t *)(local_58 + 0x22) = local_68._0_4_;
  *(uint32_t *)((int64_t)local_58 + 0x114) = local_68._4_4_;
  *(uint32_t *)(local_58 + 0x23) = (uint32_t)uStack_60;
  *(uint32_t *)((int64_t)local_58 + 0x11c) = uStack_60._4_4_;
  _local_68 = auArr_6;
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
  pLong_9 = pLong_9 + 1;
  pLong_4 = uStack_60;
  if (uStack_60 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = uStack_60 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*uStack_60)(uStack_60);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
      }
    }
  }
  *(uint8_t *)((int64_t)pLong_8 + 0xc2) = 1;
  local_e8 = pLong_8;
  local_e0 = (int64_t *)CONCAT71(local_e0._1_7_,1);
  LOCK();
  *(int *)(pLong_8 + 1) = *(int *)(pLong_8 + 1) + 1;
  UNLOCK();
  LOCK();
  *(int *)pLong_9 = *(int *)pLong_9 + -1;
  UNLOCK();
  if (*(int *)pLong_9 == 0) {
    pU64_12 = (uint64_t *)pLong_8[0x19];
    if (pU64_12 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_12)(pU64_12,pLong_8);
      goto LAB_1804a0fee;
    }
    (**(func_ptr_t *)*pLong_8)(pLong_8,1);
    if ((int64_t **)local_88._8_8_ == local_78) goto LAB_1804a1029;
LAB_1804a0ff8:
    pLong_9 = local_e8;
    local_e8 = (int64_t *)0x0;
    *(int64_t **)local_88._8_8_ = pLong_9;
    *(uint8_t *)(local_88._8_8_ + 8) = 1;
    local_88._8_8_ = local_88._8_8_ + 0x10;
  }
  else {
LAB_1804a0fee:
    if ((int64_t **)local_88._8_8_ != local_78) goto LAB_1804a0ff8;
LAB_1804a1029:
    func_0x1804fb890(local_88,local_88._8_8_,&local_e8);
  }
  if (local_e8 != (int64_t *)0x0) {
    LOCK();
    pLong_9 = local_e8 + 1;
    *(int *)pLong_9 = *(int *)pLong_9 + -1;
    UNLOCK();
    if (*(int *)pLong_9 == 0) {
      if ((uint64_t *)local_e8[0x19] == (uint64_t *)0x0) {
        (**(func_ptr_t *)*local_e8)(local_e8,1);
      }
      else {
        (***(func_ptr_t **)(uint64_t *)local_e8[0x19])();
      }
    }
  }
  pLong_9 = (int64_t *)func_0x180672de0(0x120);
  *pLong_9 = (int64_t)&PTR_LAB_1806cd920;
  *(uint32_t *)(pLong_9 + 1) = 1;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xc) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0x1c) = 0;
  func_0x180674aa0(pLong_9 + 2);
  *(uint8_t (*)[16])(pLong_9 + 0xb) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 9) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 5) = ZEXT816(0);
  *(uint32_t *)(pLong_9 + 0xd) = 0xffffffff;
  *(uint32_t *)(pLong_9 + 4) = 2;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x6c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x7c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x8c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x9c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xa9) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0xbc) = 0;
  *(uint32_t *)((int64_t)pLong_9 + 0xbf) = 0;
  pLong_9[0x19] = 0;
  pLong_9[0x1a] = (int64_t)&PTR_DAT_1806d5ca0;
  pLong_9[0x21] = (int64_t)(pLong_9 + 0x1a);
  *pLong_9 = (int64_t)&PTR_FUN_1806cd980;
  local_70 = pLong_9 + 0x22;
  *(uint8_t (*)[16])(pLong_9 + 0x22) = ZEXT816(0);
  local_58 = pLong_9;
  func_0x18043e8a0(&DAT_180840990,&local_e8);
  ptr2_Long_13 = DAT_180840998;
  if (DAT_180840998[1] == (int64_t *)0x0) {
    local_e0 = (int64_t *)0x0;
  }
  else {
    LOCK();
    pLong_4 = DAT_180840998[1] + 1;
    *(int *)pLong_4 = *(int *)pLong_4 + 1;
    UNLOCK();
    local_e0 = ptr2_Long_13[1];
  }
  local_e8 = *ptr2_Long_13;
  local_d0 = 0;
  local_d8 = local_e8;
  func_0x180673780(local_c8);
  local_b8 = 0;
  local_b0 = ZEXT816(0);
  local_a0 = ZEXT816(0);
  local_90 = 0;
  func_0x1804ff9f0(local_68,local_58,&local_e8);
  pLong_8 = local_58;
  auArr_6 = ZEXT816(0);
  pLong_4 = (int64_t *)local_58[0x23];
  *(uint32_t *)(local_58 + 0x22) = local_68._0_4_;
  *(uint32_t *)((int64_t)local_58 + 0x114) = local_68._4_4_;
  *(uint32_t *)(local_58 + 0x23) = (uint32_t)uStack_60;
  *(uint32_t *)((int64_t)local_58 + 0x11c) = uStack_60._4_4_;
  _local_68 = auArr_6;
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
  pLong_9 = pLong_9 + 1;
  pLong_4 = uStack_60;
  if (uStack_60 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = uStack_60 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*uStack_60)(uStack_60);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
      }
    }
  }
  *(uint8_t *)((int64_t)pLong_8 + 0xc2) = 1;
  local_e8 = pLong_8;
  local_e0 = (int64_t *)CONCAT71(local_e0._1_7_,1);
  LOCK();
  *(int *)(pLong_8 + 1) = *(int *)(pLong_8 + 1) + 1;
  UNLOCK();
  LOCK();
  *(int *)pLong_9 = *(int *)pLong_9 + -1;
  UNLOCK();
  if (*(int *)pLong_9 == 0) {
    pU64_12 = (uint64_t *)pLong_8[0x19];
    if (pU64_12 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_12)(pU64_12,pLong_8);
      goto LAB_1804a1228;
    }
    (**(func_ptr_t *)*pLong_8)(pLong_8,1);
    if ((int64_t **)local_88._8_8_ == local_78) goto LAB_1804a1263;
LAB_1804a1232:
    pLong_9 = local_e8;
    local_e8 = (int64_t *)0x0;
    *(int64_t **)local_88._8_8_ = pLong_9;
    *(uint8_t *)(local_88._8_8_ + 8) = 1;
    local_88._8_8_ = local_88._8_8_ + 0x10;
  }
  else {
LAB_1804a1228:
    if ((int64_t **)local_88._8_8_ != local_78) goto LAB_1804a1232;
LAB_1804a1263:
    func_0x1804fb890(local_88,local_88._8_8_,&local_e8);
  }
  if (local_e8 != (int64_t *)0x0) {
    LOCK();
    pLong_9 = local_e8 + 1;
    *(int *)pLong_9 = *(int *)pLong_9 + -1;
    UNLOCK();
    if (*(int *)pLong_9 == 0) {
      if ((uint64_t *)local_e8[0x19] == (uint64_t *)0x0) {
        (**(func_ptr_t *)*local_e8)(local_e8,1);
      }
      else {
        (***(func_ptr_t **)(uint64_t *)local_e8[0x19])();
      }
    }
  }
  pLong_9 = (int64_t *)func_0x180672de0(0x120);
  *pLong_9 = (int64_t)&PTR_LAB_1806cd920;
  *(uint32_t *)(pLong_9 + 1) = 1;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xc) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0x1c) = 0;
  func_0x180674aa0(pLong_9 + 2);
  *(uint8_t (*)[16])(pLong_9 + 0xb) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 9) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 5) = ZEXT816(0);
  *(uint32_t *)(pLong_9 + 0xd) = 0xffffffff;
  *(uint32_t *)(pLong_9 + 4) = 2;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x6c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x7c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x8c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x9c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xa9) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0xbc) = 0;
  *(uint32_t *)((int64_t)pLong_9 + 0xbf) = 0;
  pLong_9[0x19] = 0;
  pLong_9[0x1a] = (int64_t)&PTR_DAT_1806d5cd0;
  pLong_9[0x21] = (int64_t)(pLong_9 + 0x1a);
  *pLong_9 = (int64_t)&PTR_FUN_1806cd980;
  local_70 = pLong_9 + 0x22;
  *(uint8_t (*)[16])(pLong_9 + 0x22) = ZEXT816(0);
  local_58 = pLong_9;
  func_0x18043e8a0(&DAT_180840990,&local_e8);
  ptr2_Long_13 = DAT_180840998;
  if (DAT_180840998[1] == (int64_t *)0x0) {
    local_e0 = (int64_t *)0x0;
  }
  else {
    LOCK();
    pLong_4 = DAT_180840998[1] + 1;
    *(int *)pLong_4 = *(int *)pLong_4 + 1;
    UNLOCK();
    local_e0 = ptr2_Long_13[1];
  }
  local_e8 = *ptr2_Long_13;
  local_d0 = 0;
  local_d8 = local_e8;
  func_0x180673780(local_c8);
  local_b8 = 0;
  local_b0 = ZEXT816(0);
  local_a0 = ZEXT816(0);
  local_90 = 0;
  func_0x1804ff9f0(local_68,local_58,&local_e8);
  pLong_8 = local_58;
  auArr_6 = ZEXT816(0);
  pLong_4 = (int64_t *)local_58[0x23];
  *(uint32_t *)(local_58 + 0x22) = local_68._0_4_;
  *(uint32_t *)((int64_t)local_58 + 0x114) = local_68._4_4_;
  *(uint32_t *)(local_58 + 0x23) = (uint32_t)uStack_60;
  *(uint32_t *)((int64_t)local_58 + 0x11c) = uStack_60._4_4_;
  _local_68 = auArr_6;
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
  pLong_9 = pLong_9 + 1;
  pLong_4 = uStack_60;
  if (uStack_60 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = uStack_60 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*uStack_60)(uStack_60);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
      }
    }
  }
  *(uint8_t *)((int64_t)pLong_8 + 0xc2) = 1;
  local_e8 = pLong_8;
  local_e0 = (int64_t *)CONCAT71(local_e0._1_7_,1);
  LOCK();
  *(int *)(pLong_8 + 1) = *(int *)(pLong_8 + 1) + 1;
  UNLOCK();
  LOCK();
  *(int *)pLong_9 = *(int *)pLong_9 + -1;
  UNLOCK();
  if (*(int *)pLong_9 == 0) {
    pU64_12 = (uint64_t *)pLong_8[0x19];
    if (pU64_12 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_12)(pU64_12,pLong_8);
      goto LAB_1804a1462;
    }
    (**(func_ptr_t *)*pLong_8)(pLong_8,1);
    if ((int64_t **)local_88._8_8_ == local_78) goto LAB_1804a149d;
LAB_1804a146c:
    pLong_9 = local_e8;
    local_e8 = (int64_t *)0x0;
    *(int64_t **)local_88._8_8_ = pLong_9;
    *(uint8_t *)(local_88._8_8_ + 8) = 1;
    local_88._8_8_ = local_88._8_8_ + 0x10;
  }
  else {
LAB_1804a1462:
    if ((int64_t **)local_88._8_8_ != local_78) goto LAB_1804a146c;
LAB_1804a149d:
    func_0x1804fb890(local_88,local_88._8_8_,&local_e8);
  }
  if (local_e8 != (int64_t *)0x0) {
    LOCK();
    pLong_9 = local_e8 + 1;
    *(int *)pLong_9 = *(int *)pLong_9 + -1;
    UNLOCK();
    if (*(int *)pLong_9 == 0) {
      if ((uint64_t *)local_e8[0x19] == (uint64_t *)0x0) {
        (**(func_ptr_t *)*local_e8)(local_e8,1);
      }
      else {
        (***(func_ptr_t **)(uint64_t *)local_e8[0x19])();
      }
    }
  }
  pLong_9 = (int64_t *)func_0x180672de0(0x120);
  *pLong_9 = (int64_t)&PTR_LAB_1806cd920;
  *(uint32_t *)(pLong_9 + 1) = 1;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xc) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0x1c) = 0;
  func_0x180674aa0(pLong_9 + 2);
  *(uint8_t (*)[16])(pLong_9 + 0xb) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 9) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 5) = ZEXT816(0);
  *(uint32_t *)(pLong_9 + 0xd) = 0xffffffff;
  *(uint32_t *)(pLong_9 + 4) = 2;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x6c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x7c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x8c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x9c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xa9) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0xbc) = 0;
  *(uint32_t *)((int64_t)pLong_9 + 0xbf) = 0;
  pLong_9[0x19] = 0;
  pLong_9[0x1a] = (int64_t)&PTR_DAT_1806d5d00;
  pLong_9[0x21] = (int64_t)(pLong_9 + 0x1a);
  *pLong_9 = (int64_t)&PTR_FUN_1806cd980;
  local_70 = pLong_9 + 0x22;
  *(uint8_t (*)[16])(pLong_9 + 0x22) = ZEXT816(0);
  local_58 = pLong_9;
  func_0x18043e8a0(&DAT_180840990,&local_e8);
  ptr2_Long_13 = DAT_180840998;
  if (DAT_180840998[1] == (int64_t *)0x0) {
    local_e0 = (int64_t *)0x0;
  }
  else {
    LOCK();
    pLong_4 = DAT_180840998[1] + 1;
    *(int *)pLong_4 = *(int *)pLong_4 + 1;
    UNLOCK();
    local_e0 = ptr2_Long_13[1];
  }
  local_e8 = *ptr2_Long_13;
  local_d0 = 0;
  local_d8 = local_e8;
  func_0x180673780(local_c8);
  local_b8 = 0;
  local_b0 = ZEXT816(0);
  local_a0 = ZEXT816(0);
  local_90 = 0;
  func_0x1804ff9f0(local_68,local_58,&local_e8);
  pLong_8 = local_58;
  auArr_6 = ZEXT816(0);
  pLong_4 = (int64_t *)local_58[0x23];
  *(uint32_t *)(local_58 + 0x22) = local_68._0_4_;
  *(uint32_t *)((int64_t)local_58 + 0x114) = local_68._4_4_;
  *(uint32_t *)(local_58 + 0x23) = (uint32_t)uStack_60;
  *(uint32_t *)((int64_t)local_58 + 0x11c) = uStack_60._4_4_;
  _local_68 = auArr_6;
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
  pLong_9 = pLong_9 + 1;
  pLong_4 = uStack_60;
  if (uStack_60 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = uStack_60 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*uStack_60)(uStack_60);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
      }
    }
  }
  *(uint8_t *)((int64_t)pLong_8 + 0xc2) = 1;
  local_e8 = pLong_8;
  local_e0 = (int64_t *)CONCAT71(local_e0._1_7_,1);
  LOCK();
  *(int *)(pLong_8 + 1) = *(int *)(pLong_8 + 1) + 1;
  UNLOCK();
  LOCK();
  *(int *)pLong_9 = *(int *)pLong_9 + -1;
  UNLOCK();
  if (*(int *)pLong_9 == 0) {
    pU64_12 = (uint64_t *)pLong_8[0x19];
    if (pU64_12 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_12)(pU64_12,pLong_8);
      goto LAB_1804a169c;
    }
    (**(func_ptr_t *)*pLong_8)(pLong_8,1);
    if ((int64_t **)local_88._8_8_ == local_78) goto LAB_1804a16d7;
LAB_1804a16a6:
    pLong_9 = local_e8;
    local_e8 = (int64_t *)0x0;
    *(int64_t **)local_88._8_8_ = pLong_9;
    *(uint8_t *)(local_88._8_8_ + 8) = 1;
    local_88._8_8_ = local_88._8_8_ + 0x10;
  }
  else {
LAB_1804a169c:
    if ((int64_t **)local_88._8_8_ != local_78) goto LAB_1804a16a6;
LAB_1804a16d7:
    func_0x1804fb890(local_88,local_88._8_8_,&local_e8);
  }
  if (local_e8 != (int64_t *)0x0) {
    LOCK();
    pLong_9 = local_e8 + 1;
    *(int *)pLong_9 = *(int *)pLong_9 + -1;
    UNLOCK();
    if (*(int *)pLong_9 == 0) {
      if ((uint64_t *)local_e8[0x19] == (uint64_t *)0x0) {
        (**(func_ptr_t *)*local_e8)(local_e8,1);
      }
      else {
        (***(func_ptr_t **)(uint64_t *)local_e8[0x19])();
      }
    }
  }
  pLong_9 = (int64_t *)func_0x180672de0(0x120);
  *pLong_9 = (int64_t)&PTR_LAB_1806cd920;
  *(uint32_t *)(pLong_9 + 1) = 1;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xc) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0x1c) = 0;
  func_0x180674aa0(pLong_9 + 2);
  *(uint8_t (*)[16])(pLong_9 + 0xb) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 9) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 5) = ZEXT816(0);
  *(uint32_t *)(pLong_9 + 0xd) = 0xffffffff;
  *(uint32_t *)(pLong_9 + 4) = 2;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x6c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x7c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x8c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x9c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xa9) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0xbc) = 0;
  *(uint32_t *)((int64_t)pLong_9 + 0xbf) = 0;
  pLong_9[0x19] = 0;
  pLong_9[0x1a] = (int64_t)&PTR_DAT_1806d5d30;
  pLong_9[0x21] = (int64_t)(pLong_9 + 0x1a);
  *pLong_9 = (int64_t)&PTR_FUN_1806cd980;
  local_70 = pLong_9 + 0x22;
  *(uint8_t (*)[16])(pLong_9 + 0x22) = ZEXT816(0);
  local_58 = pLong_9;
  func_0x18043e8a0(&DAT_180840990,&local_e8);
  ptr2_Long_13 = DAT_180840998;
  if (DAT_180840998[1] == (int64_t *)0x0) {
    local_e0 = (int64_t *)0x0;
  }
  else {
    LOCK();
    pLong_4 = DAT_180840998[1] + 1;
    *(int *)pLong_4 = *(int *)pLong_4 + 1;
    UNLOCK();
    local_e0 = ptr2_Long_13[1];
  }
  local_e8 = *ptr2_Long_13;
  local_d0 = 0;
  local_d8 = local_e8;
  func_0x180673780(local_c8);
  local_b8 = 0;
  local_b0 = ZEXT816(0);
  local_a0 = ZEXT816(0);
  local_90 = 0;
  func_0x1804ff9f0(local_68,local_58,&local_e8);
  pLong_8 = local_58;
  auArr_6 = ZEXT816(0);
  pLong_4 = (int64_t *)local_58[0x23];
  *(uint32_t *)(local_58 + 0x22) = local_68._0_4_;
  *(uint32_t *)((int64_t)local_58 + 0x114) = local_68._4_4_;
  *(uint32_t *)(local_58 + 0x23) = (uint32_t)uStack_60;
  *(uint32_t *)((int64_t)local_58 + 0x11c) = uStack_60._4_4_;
  _local_68 = auArr_6;
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
  pLong_9 = pLong_9 + 1;
  pLong_4 = uStack_60;
  if (uStack_60 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = uStack_60 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*uStack_60)(uStack_60);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
      }
    }
  }
  *(uint8_t *)((int64_t)pLong_8 + 0xc2) = 1;
  local_e8 = pLong_8;
  local_e0 = (int64_t *)CONCAT71(local_e0._1_7_,1);
  LOCK();
  *(int *)(pLong_8 + 1) = *(int *)(pLong_8 + 1) + 1;
  UNLOCK();
  LOCK();
  *(int *)pLong_9 = *(int *)pLong_9 + -1;
  UNLOCK();
  if (*(int *)pLong_9 == 0) {
    pU64_12 = (uint64_t *)pLong_8[0x19];
    if (pU64_12 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_12)(pU64_12,pLong_8);
      goto LAB_1804a18d6;
    }
    (**(func_ptr_t *)*pLong_8)(pLong_8,1);
    if ((int64_t **)local_88._8_8_ == local_78) goto LAB_1804a1911;
LAB_1804a18e0:
    pLong_9 = local_e8;
    local_e8 = (int64_t *)0x0;
    *(int64_t **)local_88._8_8_ = pLong_9;
    *(uint8_t *)(local_88._8_8_ + 8) = 1;
    local_88._8_8_ = local_88._8_8_ + 0x10;
  }
  else {
LAB_1804a18d6:
    if ((int64_t **)local_88._8_8_ != local_78) goto LAB_1804a18e0;
LAB_1804a1911:
    func_0x1804fb890(local_88,local_88._8_8_,&local_e8);
  }
  if (local_e8 != (int64_t *)0x0) {
    LOCK();
    pLong_9 = local_e8 + 1;
    *(int *)pLong_9 = *(int *)pLong_9 + -1;
    UNLOCK();
    if (*(int *)pLong_9 == 0) {
      if ((uint64_t *)local_e8[0x19] == (uint64_t *)0x0) {
        (**(func_ptr_t *)*local_e8)(local_e8,1);
      }
      else {
        (***(func_ptr_t **)(uint64_t *)local_e8[0x19])();
      }
    }
  }
  pLong_9 = (int64_t *)func_0x180672de0(0x120);
  *pLong_9 = (int64_t)&PTR_LAB_1806cd920;
  *(uint32_t *)(pLong_9 + 1) = 1;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xc) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0x1c) = 0;
  func_0x180674aa0(pLong_9 + 2);
  *(uint8_t (*)[16])(pLong_9 + 0xb) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 9) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(pLong_9 + 5) = ZEXT816(0);
  *(uint32_t *)(pLong_9 + 0xd) = 0xffffffff;
  *(uint32_t *)(pLong_9 + 4) = 2;
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x6c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x7c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x8c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0x9c) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pLong_9 + 0xa9) = ZEXT816(0);
  *(uint32_t *)((int64_t)pLong_9 + 0xbc) = 0;
  *(uint32_t *)((int64_t)pLong_9 + 0xbf) = 0;
  pLong_9[0x19] = 0;
  pLong_9[0x1a] = (int64_t)&PTR_DAT_1806d5d60;
  pLong_9[0x21] = (int64_t)(pLong_9 + 0x1a);
  *pLong_9 = (int64_t)&PTR_FUN_1806cd980;
  local_70 = pLong_9 + 0x22;
  *(uint8_t (*)[16])(pLong_9 + 0x22) = ZEXT816(0);
  local_58 = pLong_9;
  func_0x18043e8a0(&DAT_180840990,&local_e8);
  ptr2_Long_13 = DAT_180840998;
  if (DAT_180840998[1] == (int64_t *)0x0) {
    local_e0 = (int64_t *)0x0;
  }
  else {
    LOCK();
    pLong_4 = DAT_180840998[1] + 1;
    *(int *)pLong_4 = *(int *)pLong_4 + 1;
    UNLOCK();
    local_e0 = ptr2_Long_13[1];
  }
  local_e8 = *ptr2_Long_13;
  local_d0 = 0;
  local_d8 = local_e8;
  func_0x180673780(local_c8);
  local_b8 = 0;
  local_b0 = ZEXT816(0);
  local_a0 = ZEXT816(0);
  local_90 = 0;
  func_0x1804ff9f0(local_68,local_58,&local_e8);
  pLong_8 = local_58;
  auArr_6 = ZEXT816(0);
  pLong_4 = (int64_t *)local_58[0x23];
  *(uint32_t *)(local_58 + 0x22) = local_68._0_4_;
  *(uint32_t *)((int64_t)local_58 + 0x114) = local_68._4_4_;
  *(uint32_t *)(local_58 + 0x23) = (uint32_t)uStack_60;
  *(uint32_t *)((int64_t)local_58 + 0x11c) = uStack_60._4_4_;
  _local_68 = auArr_6;
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
  pLong_9 = pLong_9 + 1;
  pLong_4 = uStack_60;
  if (uStack_60 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = uStack_60 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*uStack_60)(uStack_60);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
      }
    }
  }
  *(uint8_t *)((int64_t)pLong_8 + 0xc2) = 1;
  local_e8 = pLong_8;
  local_e0 = (int64_t *)CONCAT71(local_e0._1_7_,1);
  LOCK();
  *(int *)(pLong_8 + 1) = *(int *)(pLong_8 + 1) + 1;
  UNLOCK();
  LOCK();
  *(int *)pLong_9 = *(int *)pLong_9 + -1;
  UNLOCK();
  if (*(int *)pLong_9 == 0) {
    pU64_12 = (uint64_t *)pLong_8[0x19];
    if (pU64_12 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_12)(pU64_12,pLong_8);
      goto LAB_1804a1b0d;
    }
    (**(func_ptr_t *)*pLong_8)(pLong_8,1);
    if ((int64_t **)local_88._8_8_ == local_78) goto LAB_1804a1b48;
  }
  else {
LAB_1804a1b0d:
    if ((int64_t **)local_88._8_8_ == local_78) {
LAB_1804a1b48:
      func_0x1804fb890(local_88,local_88._8_8_,&local_e8);
      goto LAB_1804a1b55;
    }
  }
  pLong_9 = local_e8;
  local_e8 = (int64_t *)0x0;
  *(int64_t **)local_88._8_8_ = pLong_9;
  *(uint8_t *)(local_88._8_8_ + 8) = 1;
  local_88._8_8_ = local_88._8_8_ + 0x10;
LAB_1804a1b55:
  if (local_e8 != (int64_t *)0x0) {
    LOCK();
    pLong_9 = local_e8 + 1;
    *(int *)pLong_9 = *(int *)pLong_9 + -1;
    UNLOCK();
    if (*(int *)pLong_9 == 0) {
      if ((uint64_t *)local_e8[0x19] == (uint64_t *)0x0) {
        (**(func_ptr_t *)*local_e8)(local_e8,1);
      }
      else {
        (***(func_ptr_t **)(uint64_t *)local_e8[0x19])();
      }
    }
  }
  ptr2_Long_7 = (int64_t **)local_88._8_8_;
  ptr2_Long_13 = (int64_t **)local_88._0_8_;
  do {
    if (ptr2_Long_13 == ptr2_Long_7) {
      if ((uint64_t *)local_88._0_8_ != (uint64_t *)0x0) {
        pU64_12 = (uint64_t *)local_88._8_8_;
        pU64_11 = (uint64_t *)local_88._0_8_;
        if (local_88._0_8_ == local_88._8_8_) {
          uVal_10 = (int64_t)local_78 - local_88._0_8_;
          pU64_12 = (uint64_t *)local_88._0_8_;
        }
        else {
          do {
            pU64_5 = (uint64_t *)*pU64_11;
            if (pU64_5 != (uint64_t *)0x0) {
              LOCK();
              pU64_3 = pU64_5 + 1;
              *(int *)pU64_3 = *(int *)pU64_3 + -1;
              UNLOCK();
              if (*(int *)pU64_3 == 0) {
                if ((uint64_t *)pU64_5[0x19] == (uint64_t *)0x0) {
                  (**(func_ptr_t *)*pU64_5)(pU64_5,1);
                }
                else {
                  (***(func_ptr_t **)(uint64_t *)pU64_5[0x19])();
                }
              }
            }
            pU64_11 = pU64_11 + 2;
          } while (pU64_11 != pU64_12);
          uVal_10 = (int64_t)local_78 - local_88._0_8_;
          pU64_12 = (uint64_t *)local_88._0_8_;
        }
        if (0xfff < uVal_10) {
          if (0x1f < (uint64_t)((int64_t)pU64_12 + (-8 - (int64_t)(uint64_t *)pU64_12[-1]))) {
LAB_1804a1cbd:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_10 = uVal_10 + 0x27;
          pU64_12 = (uint64_t *)pU64_12[-1];
        }
        thunk_FUN_180695dd0(pU64_12,uVal_10);
      }
      return;
    }
    pLong_9 = *ptr2_Long_13;
    *ptr2_Long_13 = (int64_t *)0x0;
    local_e0._1_7_ = (undefined7)((uint64_t)local_e0 >> 8);
    local_e0 = (int64_t *)CONCAT71(local_e0._1_7_,1);
    local_e8 = pLong_9;
    if ((pLong_9 == (int64_t *)0x0) || (*(char *)(pLong_9 + 0x17) == '\x01')) {
      func_0x18042fdb0(4);
      goto LAB_1804a1cbd;
    }
    (**(func_ptr_t *)(*pLong_9 + 0x10))(pLong_9,1);
    LOCK();
    pLong_4 = pLong_9 + 1;
    *(int *)pLong_4 = *(int *)pLong_4 + -1;
    UNLOCK();
    if (*(int *)pLong_4 == 0) {
      pU64_12 = (uint64_t *)pLong_9[0x19];
      if (pU64_12 == (uint64_t *)0x0) {
        (**(func_ptr_t *)*pLong_9)(pLong_9,1);
        goto LAB_1804a1ba0;
      }
      (**(func_ptr_t *)*pU64_12)(pU64_12,pLong_9);
      ptr2_Long_13 = ptr2_Long_13 + 2;
    }
    else {
LAB_1804a1ba0:
      ptr2_Long_13 = ptr2_Long_13 + 2;
    }
  } while( true );
}

// Unwind@1804a1cc0
void Unwind_1804a1cc0(uint64_t param_1,int64_t param_2)
{
  func_0x1803b0a90(param_2 + 0x20);
  return;
}

// Unwind@1804a1d00
void Unwind_1804a1d00(uint64_t param_1,int64_t param_2)
{
  func_0x1803b0a90(param_2 + 0x20);
  return;
}

// Unwind@1804a1d40
void Unwind_1804a1d40(uint64_t param_1,int64_t param_2)
{
  func_0x1803b0a90(param_2 + 0x20);
  return;
}

// Unwind@1804a1d80
void Unwind_1804a1d80(uint64_t param_1,int64_t param_2)
{
  func_0x1803b0a90(param_2 + 0x20);
  return;
}

// Unwind@1804a1dc0
void Unwind_1804a1dc0(uint64_t param_1,int64_t param_2)
{
  func_0x1803b0a90(param_2 + 0x20);
  return;
}

// Unwind@1804a1e00
void Unwind_1804a1e00(uint64_t param_1,int64_t param_2)
{
  func_0x1803b0a90(param_2 + 0x20);
  return;
}

// Unwind@1804a1e40
void Unwind_1804a1e40(uint64_t param_1,int64_t param_2)
{
  func_0x1803b0a90(param_2 + 0x20);
  return;
}

// Unwind@1804a1e80
void Unwind_1804a1e80(uint64_t param_1,int64_t param_2)
{
  func_0x1803b0a90(param_2 + 0x20);
  return;
}

// Unwind@1804a1ec0
void Unwind_1804a1ec0(uint64_t param_1,int64_t param_2)
{
  func_0x1803b0a90(param_2 + 0x20);
  return;
}

// Unwind@1804a1f00
void Unwind_1804a1f00(uint64_t param_1,int64_t param_2)
{
  func_0x1804a24c0(param_2 + 0x80);
  return;
}

// Unwind@1804a1f40
void Unwind_1804a1f40(uint64_t param_1,int64_t param_2)
{
  func_0x18043dcf0(param_2 + 0x38);
  func_0x18001deb0(param_2 + 0x20);
  return;
}

// Unwind@1804a1f90
void Unwind_1804a1f90(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x98));
  uVal_1 = *(uint64_t *)(param_2 + 0xb0);
  func_0x18043d190(uVal_1);
  thunk_FUN_180695dd0(uVal_1,0x120);
  return;
}

// Unwind@1804a1ff0
void Unwind_1804a1ff0(uint64_t param_1,int64_t param_2)
{
  func_0x18043dcf0(param_2 + 0x38);
  func_0x18001deb0(param_2 + 0x20);
  return;
}

// Unwind@1804a2040
void Unwind_1804a2040(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x98));
  uVal_1 = *(uint64_t *)(param_2 + 0xb0);
  func_0x18043d190(uVal_1);
  thunk_FUN_180695dd0(uVal_1,0x120);
  return;
}

// Unwind@1804a20a0
void Unwind_1804a20a0(uint64_t param_1,int64_t param_2)
{
  func_0x18043dcf0(param_2 + 0x38);
  func_0x18001deb0(param_2 + 0x20);
  return;
}

// Unwind@1804a20f0
void Unwind_1804a20f0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x98));
  uVal_1 = *(uint64_t *)(param_2 + 0xb0);
  func_0x18043d190(uVal_1);
  thunk_FUN_180695dd0(uVal_1,0x120);
  return;
}

// Unwind@1804a2150
void Unwind_1804a2150(uint64_t param_1,int64_t param_2)
{
  func_0x18043dcf0(param_2 + 0x38);
  func_0x18001deb0(param_2 + 0x20);
  return;
}

// Unwind@1804a21a0
void Unwind_1804a21a0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x98));
  uVal_1 = *(uint64_t *)(param_2 + 0xb0);
  func_0x18043d190(uVal_1);
  thunk_FUN_180695dd0(uVal_1,0x120);
  return;
}

// Unwind@1804a2200
void Unwind_1804a2200(uint64_t param_1,int64_t param_2)
{
  func_0x18043dcf0(param_2 + 0x38);
  func_0x18001deb0(param_2 + 0x20);
  return;
}
