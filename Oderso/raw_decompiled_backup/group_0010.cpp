#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x180100ef0
int64_t func_0x180100ef0(int64_t param_1)
{
  return param_1 + 0x1a8;
}

// func_0x180100f50
bool func_0x180100f50(int64_t *param_1,int64_t param_2)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int iVal_3;
  bool bFlag_4;
  int64_t lVal_5;
  void *pVoid_6;
  void *pVoid_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  
  lVal_5 = *param_1;
  lVal_9 = *(int64_t *)(lVal_5 + 8);
  if (*(char *)(lVal_9 + 0x19) == '\0') {
    if (*(uint64_t *)(param_2 + 0x20) < 0x10) {
      pVoid_7 = (void *)(param_2 + 8);
    }
    else {
      pVoid_7 = *(void **)(param_2 + 8);
    }
    uVal_1 = *(uint64_t *)(param_2 + 0x18);
    do {
      if (*(uint64_t *)(lVal_9 + 0x40) < 0x10) {
        pVoid_6 = (void *)(lVal_9 + 0x28);
      }
      else {
        pVoid_6 = *(void **)(lVal_9 + 0x28);
      }
      uVal_2 = *(uint64_t *)(lVal_9 + 0x38);
      uVal_8 = uVal_2;
      if (uVal_1 < uVal_2) {
        uVal_8 = uVal_1;
      }
      iVal_3 = memcmp(pVoid_6,pVoid_7,uVal_8);
      bFlag_4 = uVal_2 < uVal_1;
      if (iVal_3 != 0) {
        bFlag_4 = iVal_3 < 0;
      }
      if (bFlag_4 == false) {
        lVal_5 = lVal_9;
      }
      lVal_9 = *(int64_t *)(lVal_9 + (uint64_t)bFlag_4 * 0x10);
    } while (*(char *)(lVal_9 + 0x19) == '\0');
  }
  if (*(char *)(lVal_5 + 0x19) == '\0') {
    if (*(uint64_t *)(lVal_5 + 0x40) < 0x10) {
      pVoid_7 = (void *)(lVal_5 + 0x28);
      uVal_1 = *(uint64_t *)(lVal_5 + 0x38);
      uVal_2 = *(uint64_t *)(param_2 + 0x18);
      uVal_8 = *(uint64_t *)(param_2 + 0x20);
    }
    else {
      pVoid_7 = *(void **)(lVal_5 + 0x28);
      uVal_1 = *(uint64_t *)(lVal_5 + 0x38);
      uVal_2 = *(uint64_t *)(param_2 + 0x18);
      uVal_8 = *(uint64_t *)(param_2 + 0x20);
    }
    if (uVal_8 < 0x10) {
      pVoid_6 = (void *)(param_2 + 8);
    }
    else {
      pVoid_6 = *(void **)(param_2 + 8);
    }
    uVal_8 = uVal_2;
    if (uVal_1 < uVal_2) {
      uVal_8 = uVal_1;
    }
    iVal_3 = memcmp(pVoid_6,pVoid_7,uVal_8);
    bFlag_4 = uVal_1 <= uVal_2;
    if (iVal_3 != 0) {
      bFlag_4 = -1 < iVal_3;
    }
    return bFlag_4;
  }
  return false;
}

// func_0x180101070
int64_t func_0x180101070(int64_t *param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  int64_t lVal_3;
  bool bFlag_4;
  void *pVoid_5;
  uint64_t uVal_6;
  void *pVoid_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  
  lVal_3 = *param_1;
  lVal_10 = *(int64_t *)(lVal_3 + 8);
  if (*(char *)(lVal_10 + 0x19) == '\0') {
    if (*(uint64_t *)(param_2 + 0x20) < 0x10) {
      pVoid_5 = (void *)(param_2 + 8);
    }
    else {
      pVoid_5 = *(void **)(param_2 + 8);
    }
    uVal_6 = *(uint64_t *)(param_2 + 0x18);
    do {
      if (*(uint64_t *)(lVal_10 + 0x40) < 0x10) {
        pVoid_7 = (void *)(lVal_10 + 0x28);
      }
      else {
        pVoid_7 = *(void **)(lVal_10 + 0x28);
      }
      uVal_9 = *(uint64_t *)(lVal_10 + 0x38);
      uVal_8 = uVal_9;
      if (uVal_6 < uVal_9) {
        uVal_8 = uVal_6;
      }
      iVal_2 = memcmp(pVoid_7,pVoid_5,uVal_8);
      bFlag_4 = uVal_9 < uVal_6;
      if (iVal_2 != 0) {
        bFlag_4 = iVal_2 < 0;
      }
      if (bFlag_4 == false) {
        lVal_3 = lVal_10;
      }
      lVal_10 = *(int64_t *)(lVal_10 + (uint64_t)bFlag_4 * 0x10);
    } while (*(char *)(lVal_10 + 0x19) == '\0');
  }
  if (*(char *)(lVal_3 + 0x19) != '\0') goto LAB_180101184;
  if (*(uint64_t *)(lVal_3 + 0x40) < 0x10) {
    pVoid_5 = (void *)(lVal_3 + 0x28);
    uVal_6 = *(uint64_t *)(lVal_3 + 0x38);
    uVal_9 = *(uint64_t *)(param_2 + 0x18);
    if (0xf < *(uint64_t *)(param_2 + 0x20)) goto LAB_1801010cf;
LAB_1801010b6:
    pVoid_7 = (void *)(param_2 + 8);
  }
  else {
    pVoid_5 = *(void **)(lVal_3 + 0x28);
    uVal_6 = *(uint64_t *)(lVal_3 + 0x38);
    uVal_9 = *(uint64_t *)(param_2 + 0x18);
    if (*(uint64_t *)(param_2 + 0x20) < 0x10) goto LAB_1801010b6;
LAB_1801010cf:
    pVoid_7 = *(void **)(param_2 + 8);
  }
  uVal_8 = uVal_9;
  if (uVal_6 < uVal_9) {
    uVal_8 = uVal_6;
  }
  iVal_2 = memcmp(pVoid_7,pVoid_5,uVal_8);
  bFlag_4 = uVal_6 <= uVal_9;
  if (iVal_2 != 0) {
    bFlag_4 = -1 < iVal_2;
  }
  if (bFlag_4) {
    return lVal_3 + 0x58;
  }
LAB_180101184:
  func_0x1806744f0("invalid map<K, T> key");
  fnPtr_1 = (func_ptr_t )swi(3);
  lVal_3 = (*fnPtr_1)();
  return lVal_3;
}

// func_0x1801011a0
byte func_0x1801011a0(int64_t param_1,uint64_t param_2)
{
  int64_t lVal_1;
  char ch_2;
  byte bFlag_3;
  int64_t *pLong_4;
  
  ch_2 = func_0x180100f50(param_1 + 0x1a8,param_2);
  if (ch_2 != '\0') {
    pLong_4 = (int64_t *)func_0x180101070(param_1 + 0x1a8,param_2);
    lVal_1 = *(int64_t *)(*pLong_4 + 8);
    if (lVal_1 != 0) {
      LOCK();
      *(short *)(lVal_1 + 0x10) = *(short *)(lVal_1 + 0x10) + 1;
      UNLOCK();
      bFlag_3 = *(byte *)(lVal_1 + 0x12);
      goto LAB_180101269;
    }
  }
  bFlag_3 = 0;
LAB_180101269:
  return bFlag_3 & 1;
}

// func_0x180101280
uint8_t func_0x180101280(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  uint8_t uVal_2;
  int64_t *pLong_3;
  
  ch_1 = func_0x180100f50(param_1 + 0x1a8,param_2);
  if (ch_1 == '\0') {
    uVal_2 = 0;
  }
  else {
    pLong_3 = (int64_t *)func_0x180101070(param_1 + 0x1a8,param_2);
    uVal_2 = *(uint8_t *)(*pLong_3 + 0x58);
  }
  return uVal_2;
}

// func_0x180101350
int64_t ** func_0x180101350(int64_t param_1,int64_t param_2)
{
  int64_t *_Size;
  char ch_1;
  int iVal_2;
  int64_t **ptr2_Long_3;
  int64_t **ptr2_Long_4;
  int64_t **ptr2_Long_5;
  int64_t **ptr2_Long_6;
  void *_Buf2;
  bool bFlag_7;
  
  ch_1 = func_0x180100f50(param_1 + 0x1a8,param_2);
  if (ch_1 != '\0') {
    ptr2_Long_3 = (int64_t **)func_0x180101070(param_1 + 0x1a8,param_2);
    return ptr2_Long_3;
  }
  ptr2_Long_3 = *(int64_t ***)(param_1 + 0x1a8);
  ptr2_Long_5 = (int64_t **)*ptr2_Long_3;
  if (ptr2_Long_5 != ptr2_Long_3) {
    _Size = *(int64_t **)(param_2 + 0x18);
    if (*(uint64_t *)(param_2 + 0x20) < 0x10) {
      _Buf2 = (void *)(param_2 + 8);
    }
    else {
      _Buf2 = *(void **)(param_2 + 8);
    }
    if (_Size == (int64_t *)0x0) {
      do {
        if (ptr2_Long_5[7] == (int64_t *)0x0) {
LAB_18010154e:
          return ptr2_Long_5 + 0xb;
        }
        ptr2_Long_6 = (int64_t **)ptr2_Long_5[2];
        ptr2_Long_4 = ptr2_Long_5;
        if (*(char *)((int64_t)ptr2_Long_5[2] + 0x19) == '\0') {
          do {
            ptr2_Long_5 = ptr2_Long_6;
            ptr2_Long_6 = (int64_t **)*ptr2_Long_5;
          } while (*(char *)((int64_t)*ptr2_Long_5 + 0x19) == '\0');
        }
        else {
          do {
            ptr2_Long_5 = (int64_t **)ptr2_Long_4[1];
            if (*(char *)((int64_t)ptr2_Long_5 + 0x19) != '\0') break;
            bFlag_7 = ptr2_Long_4 == (int64_t **)ptr2_Long_5[2];
            ptr2_Long_4 = ptr2_Long_5;
          } while (bFlag_7);
        }
      } while (ptr2_Long_5 != ptr2_Long_3);
    }
    else {
      do {
        if (ptr2_Long_5[7] == _Size) {
          if (ptr2_Long_5[8] < (int64_t *)0x10) {
            ptr2_Long_6 = ptr2_Long_5 + 5;
          }
          else {
            ptr2_Long_6 = (int64_t **)ptr2_Long_5[5];
          }
          iVal_2 = memcmp(ptr2_Long_6,_Buf2,(size_t)_Size);
          if (iVal_2 == 0) goto LAB_18010154e;
        }
        ptr2_Long_6 = (int64_t **)ptr2_Long_5[2];
        if (*(char *)((int64_t)ptr2_Long_5[2] + 0x19) == '\0') {
          do {
            ptr2_Long_4 = ptr2_Long_6;
            ptr2_Long_6 = (int64_t **)*ptr2_Long_4;
          } while (*(char *)((int64_t)*ptr2_Long_4 + 0x19) == '\0');
        }
        else {
          do {
            ptr2_Long_4 = (int64_t **)ptr2_Long_5[1];
            if (*(char *)((int64_t)ptr2_Long_4 + 0x19) != '\0') break;
            bFlag_7 = ptr2_Long_5 == (int64_t **)ptr2_Long_4[2];
            ptr2_Long_5 = ptr2_Long_4;
          } while (bFlag_7);
        }
        ptr2_Long_5 = ptr2_Long_4;
      } while (ptr2_Long_4 != ptr2_Long_3);
    }
  }
  return (int64_t **)0x0;
}

// func_0x180101570
uint8_t (*func_0x180101570(int64_t *param_1,uint8_t (*param_2)[16]))[16]
{
  param_2[1] = ZEXT816(0);
  *param_2 = ZEXT816(0);
  (**(func_ptr_t *)(*param_1 + 8))();
  return param_2;
}

// Unwind@1801015c0
void Unwind_1801015c0(uint64_t param_1,int64_t param_2)
{
  func_0x1800d0dd0(*(uint64_t *)(param_2 + 0x30));
  return;
}

// func_0x1801015e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801015e0(uint64_t param_1)
{
  int64_t lVal_1;
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint8_t local_38 [32];
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f100) {
    func_0x180672ec0(&DAT_18083f100);
    if (DAT_18083f100 == -1) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x35f8) == '\0') {
        lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_1 + 0x35f8) = 1;
        *(uint8_t *)(lVal_1 + 0x35f5) = 1;
        uVal_13 = _UNK_1806b4ecc;
        uVal_12 = _UNK_1806b4ec8;
        uVal_11 = _UNK_1806b4ec4;
        *(uint32_t *)(lVal_1 + 0x35a5) = _DAT_1806b4ec0;
        *(uint32_t *)(lVal_1 + 0x35a9) = uVal_11;
        *(uint32_t *)(lVal_1 + 0x35ad) = uVal_12;
        *(uint32_t *)(lVal_1 + 0x35b1) = uVal_13;
        uVal_13 = _UNK_1806b4edc;
        uVal_12 = _UNK_1806b4ed8;
        uVal_11 = _UNK_1806b4ed4;
        *(uint32_t *)(lVal_1 + 0x35b5) = _DAT_1806b4ed0;
        *(uint32_t *)(lVal_1 + 0x35b9) = uVal_11;
        *(uint32_t *)(lVal_1 + 0x35bd) = uVal_12;
        *(uint32_t *)(lVal_1 + 0x35c1) = uVal_13;
        uVal_13 = _UNK_1806b4eec;
        uVal_12 = _UNK_1806b4ee8;
        uVal_11 = _UNK_1806b4ee4;
        *(uint32_t *)(lVal_1 + 0x35c5) = _DAT_1806b4ee0;
        *(uint32_t *)(lVal_1 + 0x35c9) = uVal_11;
        *(uint32_t *)(lVal_1 + 0x35cd) = uVal_12;
        *(uint32_t *)(lVal_1 + 0x35d1) = uVal_13;
        uVal_13 = _UNK_1806b4efc;
        uVal_12 = _UNK_1806b4ef8;
        uVal_11 = _UNK_1806b4ef4;
        *(uint32_t *)(lVal_1 + 0x35d5) = _DAT_1806b4ef0;
        *(uint32_t *)(lVal_1 + 0x35d9) = uVal_11;
        *(uint32_t *)(lVal_1 + 0x35dd) = uVal_12;
        *(uint32_t *)(lVal_1 + 0x35e1) = uVal_13;
        uVal_13 = _UNK_1806b4f0c;
        uVal_12 = _UNK_1806b4f08;
        uVal_11 = _UNK_1806b4f04;
        *(uint32_t *)(lVal_1 + 0x35e5) = _DAT_1806b4f00;
        *(uint32_t *)(lVal_1 + 0x35e9) = uVal_11;
        *(uint32_t *)(lVal_1 + 0x35ed) = uVal_12;
        *(uint32_t *)(lVal_1 + 0x35f1) = uVal_13;
        func_0x180673140(&LAB_1801037a0);
      }
      uVal_10 = _UNK_1806b4e8c;
      uVal_9 = _UNK_1806b4e88;
      uVal_8 = _UNK_1806b4e84;
      uVal_7 = _DAT_1806b4e80;
      lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      if (*(char *)(lVal_1 + 0x35f5) == '\x01') {
        auArr_2._4_4_ = *(uint *)(lVal_1 + 0x35a9) ^ _UNK_1806b4e84;
        auArr_2._0_4_ = *(uint *)*(uint8_t (*)[16])(lVal_1 + 0x35a5) ^ _DAT_1806b4e80;
        auArr_2._8_4_ = *(uint *)(lVal_1 + 0x35ad) ^ _UNK_1806b4e88;
        auArr_2._12_4_ = *(uint *)(lVal_1 + 0x35b1) ^ _UNK_1806b4e8c;
        *(uint8_t (*)[16])(lVal_1 + 0x35a5) = auArr_2;
        auArr_4._4_4_ = *(uint *)(lVal_1 + 0x35b9) ^ uVal_8;
        auArr_4._0_4_ = *(uint *)(lVal_1 + 0x35b5) ^ uVal_7;
        auArr_4._8_4_ = *(uint *)(lVal_1 + 0x35bd) ^ uVal_9;
        auArr_4._12_4_ = *(uint *)(lVal_1 + 0x35c1) ^ uVal_10;
        *(uint8_t (*)[16])(lVal_1 + 0x35b5) = auArr_4;
        auArr_5._4_4_ = *(uint *)(lVal_1 + 0x35c9) ^ uVal_8;
        auArr_5._0_4_ = *(uint *)(lVal_1 + 0x35c5) ^ uVal_7;
        auArr_5._8_4_ = *(uint *)(lVal_1 + 0x35cd) ^ uVal_9;
        auArr_5._12_4_ = *(uint *)(lVal_1 + 0x35d1) ^ uVal_10;
        *(uint8_t (*)[16])(lVal_1 + 0x35c5) = auArr_5;
        auArr_6._4_4_ = *(uint *)(lVal_1 + 0x35d9) ^ uVal_8;
        auArr_6._0_4_ = *(uint *)(lVal_1 + 0x35d5) ^ uVal_7;
        auArr_6._8_4_ = *(uint *)(lVal_1 + 0x35dd) ^ uVal_9;
        auArr_6._12_4_ = *(uint *)(lVal_1 + 0x35e1) ^ uVal_10;
        *(uint8_t (*)[16])(lVal_1 + 0x35d5) = auArr_6;
        auArr_3._4_4_ = *(uint *)(lVal_1 + 0x35e9) ^ uVal_8;
        auArr_3._0_4_ = *(uint *)(lVal_1 + 0x35e5) ^ uVal_7;
        auArr_3._8_4_ = *(uint *)(lVal_1 + 0x35ed) ^ uVal_9;
        auArr_3._12_4_ = *(uint *)(lVal_1 + 0x35f1) ^ uVal_10;
        *(uint8_t (*)[16])(lVal_1 + 0x35e5) = auArr_3;
        *(uint8_t *)(lVal_1 + 0x35f5) = 0;
      }
      func_0x180001060(local_38);
      func_0x1800d5e00(&DAT_18083f0d8,local_38,1);
      func_0x180001e70(local_38);
      func_0x1806731d0(&LAB_1801017e0);
      _Init_thread_footer(&DAT_18083f100);
    }
  }
  func_0x180101870(param_1,&DAT_18083f0d8,0);
  return;
}

// Unwind@180101790
void Unwind_180101790(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801017b0
void Unwind_1801017b0(void)
{
  func_0x180672f60(&DAT_18083f100);
  return;
}

// func_0x180101870
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
uint func_0x180101870(uint64_t *param_1,int64_t *param_2,uint param_3)
{
  int64_t lVal_1;
  uint32_t uVal_2;
  uint64_t *pU64_3;
  uint uVal_4;
  uint8_t local_1110 [4096];
  uint8_t local_110 [8];
  uint64_t local_108;
  uint64_t local_60;
  uint64_t local_50;
  uint64_t local_40;
  byte local_1e;
  uint8_t local_1c;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVal_1 = *param_2;
  if (lVal_1 == 0) {
    uVal_4 = 0;
  }
  else {
    pU64_3 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_3 = (uint64_t *)*param_1;
    }
    func_0x1800f8770(local_110,pU64_3,param_1[2] + (int64_t)pU64_3,param_2 + 1,lVal_1,
                  *(uint32_t *)(lVal_1 + 0x28),*(uint32_t *)(lVal_1 + 0x20),param_3 | 0x10,
                  local_1110);
    local_108 = local_40;
    local_1c = 1;
    local_60 = 0;
    local_1e = 0;
    uVal_2 = func_0x1800f99c0(local_110,local_50);
    uVal_4 = CONCAT31((int3)((uint)uVal_2 >> 8),(byte)uVal_2 | local_1e);
    func_0x1800f9270(local_110);
  }
  return uVal_4 & 0xffffff01;
}

// Unwind@180101960
void Unwind_180101960(uint64_t param_1,int64_t param_2)
{
  func_0x1800f9270(param_2 + 0x1048);
  return;
}

// func_0x180101990
void func_0x180101990(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x0001801019e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x218))(param_1,0x43,0x186a210b311f10aa);
  return;
}

// func_0x1801019f0
uint64_t func_0x1801019f0(void)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f110) {
    func_0x180672ec0(&DAT_18083f110);
    if (DAT_18083f110 == -1) {
      lVal_1 = func_0x180101ab0(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f108 = (uint64_t *)0x0;
      }
      else {
        DAT_18083f108 = (uint64_t *)(lVal_1 + *(int *)(lVal_1 + 3) + 7);
      }
      _Init_thread_footer(&DAT_18083f110);
    }
  }
  return *DAT_18083f108;
}

// Unwind@180101a80
void Unwind_180101a80(void)
{
  func_0x180672f60(&DAT_18083f110);
  return;
}

// func_0x180101ab0
int64_t func_0x180101ab0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x799c2e6baad6441) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x5f1fd6b0069c9eac) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180101b54;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x5f1fd6b0069c9eac);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180101b7a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x5f1fd6b0069c9eac);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x5983481cU) + -0x1f;
  }
LAB_180101b54:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180101b7a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180101b90
int64_t func_0x180101b90(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x4a3a26043808b0e) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x34883c4aaf00d10c) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180101c34;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x34883c4aaf00d10c);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180101c5a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x34883c4aaf00d10c);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffff9b88ed41U) + -0x15;
  }
LAB_180101c34:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180101c5a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180101c70
int64_t * func_0x180101c70(int64_t *param_1,uint32_t *param_2,int64_t param_3)
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  int64_t lVal_4;
  
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  param_1[3] = 0;
  uVal_1 = param_2[1];
  uVal_2 = param_2[2];
  uVal_3 = param_2[3];
  *(uint32_t *)(param_1 + 2) = *param_2;
  *(uint32_t *)((int64_t)param_1 + 0x14) = uVal_1;
  *(uint32_t *)(param_1 + 3) = uVal_2;
  *(uint32_t *)((int64_t)param_1 + 0x1c) = uVal_3;
  param_1[1] = param_3;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f120) {
    func_0x180672ec0(&DAT_18083f120);
    if (DAT_18083f120 == -1) {
      lVal_4 = func_0x180101b90(&DAT_180840f80);
      if (lVal_4 == 0) {
        DAT_18083f118 = 0;
      }
      else {
        DAT_18083f118 = lVal_4 + *(int *)(lVal_4 + 3) + 7;
      }
      _Init_thread_footer(&DAT_18083f120);
    }
  }
  *param_1 = DAT_18083f118;
  return param_1;
}

// Unwind@180101d20
void Unwind_180101d20(void)
{
  func_0x180672f60(&DAT_18083f120);
  return;
}

// func_0x180101d50
bool func_0x180101d50(uint64_t param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4, byte param_5)
{
  int *pInt_1;
  int64_t *pLong_2;
  int iVal_3;
  uint uVal_4;
  uint64_t uVal_5;
  byte bFlag_6;
  bool bFlag_7;
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  uint8_t **local_130;
  uint8_t *local_128;
  uint8_t local_120 [16];
  uint8_t local_110 [16];
  uint64_t local_100;
  uint8_t ***local_f8;
  uint64_t local_f0;
  uint local_e8;
  int local_d8;
  int64_t *local_b0;
  uint64_t local_68;
  int64_t *local_60;
  uint64_t local_58;
  uint local_50;
  uint64_t local_48;
  uint local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((byte)((byte)param_4 | param_5) != 1) {
    return true;
  }
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  local_50 = 0;
  if (param_5 != 0) {
    func_0x180126740(param_3,&local_f0,3,0);
    local_48 = local_f0;
    local_40 = local_e8;
  }
  bFlag_6 = (byte)(param_4 & 0xffffffff);
  if (bFlag_6 != 0) {
    func_0x180126740(param_3,&local_f0,0,0);
    local_58 = local_f0;
    local_50 = local_e8;
  }
  local_130 = &PTR_FUN_1806b4f10;
  local_120 = ZEXT816(0);
  local_100 = 0;
  local_128 = PTR_LAB_1806b4f20;
  local_f0 = 0x291b0959991eeda3;
  local_110 = local_120;
  local_f8 = &local_130;
  DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
  if (DAT_180840a60 == 0) {
    DAT_180840a68 = 0;
  }
  uVal_5 = func_0x180126030(DAT_180840a60);
  func_0x18012a290(uVal_5,&local_68);
  if ((bFlag_6 & param_5) == 1) {
    auArr_8._8_8_ = 0;
    auArr_8._0_8_ = local_48;
    auArr_8 = roundps(auArr_8,auArr_8,9);
    auArr_9._0_4_ = (int)auArr_8._0_4_;
    auArr_9._4_4_ = (int)auArr_8._4_4_;
    auArr_9._8_4_ = (int)auArr_8._8_4_;
    auArr_9._12_4_ = (int)auArr_8._12_4_;
    auArr_10._8_8_ = 0;
    auArr_10._0_8_ = local_58;
    auArr_8 = roundps(auArr_10,auArr_10,9);
    auArr_11._0_4_ = -(uint)((int)auArr_8._0_4_ == auArr_9._0_4_);
    auArr_11._4_4_ = -(uint)((int)auArr_8._4_4_ == auArr_9._4_4_);
    auArr_11._8_4_ = -(uint)((int)auArr_8._8_4_ == auArr_9._8_4_);
    auArr_11._12_4_ = -(uint)((int)auArr_8._12_4_ == auArr_9._12_4_);
    auArr_8 = pmovsxdq(auArr_9,auArr_11);
    uVal_4 = movmskpd((int)CONCAT71((int7)((param_4 & 0xffffffff) >> 8),bFlag_6 & param_5),auArr_8);
    if (((uVal_4 & 1) != 0) && ((byte)((byte)uVal_4 >> 1) != 0)) {
      auArr_8 = roundss(ZEXT416(local_40),ZEXT416(local_40),9);
      auArr_9 = roundss(ZEXT416(local_50),ZEXT416(local_50),9);
      if ((int)auArr_8._0_4_ == (int)auArr_9._0_4_) {
        func_0x180128b60(local_68,&local_f0,param_1,&local_48,0,0,param_2,1,0,0,&local_130,0);
        bFlag_7 = local_d8 != 0;
        if (local_b0 != (int64_t *)0x0) {
          LOCK();
          pInt_1 = (int *)((int64_t)local_b0 + 0xc);
          *pInt_1 = *pInt_1 + -1;
          UNLOCK();
          if (*pInt_1 == 0) {
            (**(func_ptr_t *)(*local_b0 + 8))();
          }
        }
        goto LAB_1801020a4;
      }
    }
  }
  if (param_5 != 0) {
    func_0x180128b60(local_68,&local_f0,param_1,&local_48,0,0,param_2,1,0,0,&local_130,0);
    iVal_3 = local_d8;
    if (local_b0 != (int64_t *)0x0) {
      LOCK();
      pInt_1 = (int *)((int64_t)local_b0 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*local_b0 + 8))();
      }
    }
    bFlag_7 = true;
    if (iVal_3 != 0) goto LAB_1801020a4;
  }
  if (bFlag_6 != 0) {
    func_0x180128b60(local_68,&local_f0,param_1,&local_58,0,0,param_2,1,0,0,&local_130,0);
    if (local_b0 != (int64_t *)0x0) {
      LOCK();
      pInt_1 = (int *)((int64_t)local_b0 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*local_b0 + 8))();
      }
    }
    bFlag_7 = true;
    if (local_d8 != 0) goto LAB_1801020a4;
  }
  bFlag_7 = false;
LAB_1801020a4:
  if (local_60 != (int64_t *)0x0) {
    LOCK();
    pLong_2 = local_60 + 1;
    *(int *)pLong_2 = *(int *)pLong_2 + -1;
    UNLOCK();
    if (*(int *)pLong_2 == 0) {
      (**(func_ptr_t *)*local_60)(local_60);
      LOCK();
      pInt_1 = (int *)((int64_t)local_60 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*local_60 + 8))(local_60);
      }
    }
  }
  return bFlag_7;
}

// Unwind@1801020f0
void Unwind_1801020f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x130);
  return;
}

// func_0x180102390
uint64_t func_0x180102390(uint64_t param_1,byte *param_2,uint64_t param_3)
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint64_t uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  int64_t lVal_9;
  int64_t lVal_10;
  int64_t lVal_11;
  int64_t lVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  int64_t lVal_16;
  uint64_t uVal_17;
  int64_t lVal_18;
  int64_t lVal_19;
  int64_t lVal_20;
  int64_t lVal_21;
  int64_t lVal_22;
  int64_t lVal_23;
  int64_t lVal_24;
  int64_t lVal_25;
  
  uVal_17 = param_1 & 0xffff;
  uVal_4 = param_1 >> 0x10 & 0xffff;
  uVal_5 = (uint)uVal_4;
  if (param_3 == 1) {
    uVal_17 = uVal_17 + *param_2;
    uVal_4 = uVal_17 - 0xfff1;
    if (uVal_17 < 0xfff1) {
      uVal_4 = uVal_17;
    }
    uVal_5 = uVal_5 + (int)uVal_4;
    uVal_6 = uVal_5 * 0x10000;
    uVal_3 = uVal_6 + 0xf0000;
    if (uVal_5 < 0xfff1) {
      uVal_3 = uVal_6;
    }
    return uVal_3 | uVal_4;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVal_7 = param_3;
      if ((param_3 & 3) != 0) {
        uVal_7 = 0;
        do {
          uVal_17 = uVal_17 + param_2[uVal_7];
          uVal_5 = (int)uVal_4 + (int)uVal_17;
          uVal_4 = (uint64_t)uVal_5;
          uVal_7 = uVal_7 + 1;
        } while ((param_3 & 3) != uVal_7);
        param_2 = param_2 + uVal_7;
        uVal_7 = param_3 - uVal_7;
      }
      if (3 < param_3) {
        uVal_14 = 0;
        do {
          lVal_15 = param_2[uVal_14] + uVal_17;
          lVal_25 = (uint64_t)param_2[uVal_14 + 1] + lVal_15;
          lVal_16 = (uint64_t)param_2[uVal_14 + 2] + lVal_25;
          uVal_17 = (uint64_t)param_2[uVal_14 + 3] + lVal_16;
          uVal_5 = (int)uVal_4 + (int)lVal_15 + (int)lVal_25 + (int)lVal_16 + (int)uVal_17;
          uVal_4 = (uint64_t)uVal_5;
          uVal_14 = uVal_14 + 4;
        } while (uVal_7 != uVal_14);
      }
    }
    uVal_4 = uVal_17 - 0xfff1;
    if (uVal_17 < 0xfff1) {
      uVal_4 = uVal_17;
    }
    return uVal_5 % 0xfff1 << 0x10 | uVal_4;
  }
  if (param_3 < 0x15b0) {
LAB_1801025a0:
    do {
      param_3 = param_3 - 0x10;
      lVal_15 = *param_2 + uVal_17;
      lVal_13 = (uint64_t)param_2[1] + lVal_15;
      lVal_16 = (uint64_t)param_2[2] + lVal_13;
      lVal_18 = (uint64_t)param_2[3] + lVal_16;
      lVal_25 = (uint64_t)param_2[4] + lVal_18;
      lVal_19 = (uint64_t)param_2[5] + lVal_25;
      lVal_8 = (uint64_t)param_2[6] + lVal_19;
      lVal_20 = (uint64_t)param_2[7] + lVal_8;
      lVal_9 = (uint64_t)param_2[8] + lVal_20;
      lVal_21 = (uint64_t)param_2[9] + lVal_9;
      lVal_10 = (uint64_t)param_2[10] + lVal_21;
      lVal_22 = (uint64_t)param_2[0xb] + lVal_10;
      lVal_11 = (uint64_t)param_2[0xc] + lVal_22;
      lVal_23 = (uint64_t)param_2[0xd] + lVal_11;
      lVal_12 = (uint64_t)param_2[0xe] + lVal_23;
      uVal_17 = (uint64_t)param_2[0xf] + lVal_12;
      uVal_4 = (uint64_t)
              (uint)((int)uVal_17 +
                    (int)lVal_13 + (int)uVal_4 + (int)lVal_15 + (int)lVal_16 + (int)lVal_18 + (int)lVal_25
                    + (int)lVal_19 + (int)lVal_8 + (int)lVal_20 + (int)lVal_9 + (int)lVal_21 +
                    (int)lVal_10 + (int)lVal_22 + (int)lVal_11 + (int)lVal_23 + (int)lVal_12);
      param_2 = param_2 + 0x10;
    } while (0xf < param_3);
    if (param_3 != 0) goto LAB_18010265d;
  }
  else {
    do {
      lVal_15 = 0;
      do {
        lVal_16 = param_2[lVal_15] + uVal_17;
        lVal_18 = (uint64_t)param_2[lVal_15 + 1] + lVal_16;
        lVal_25 = (uint64_t)param_2[lVal_15 + 2] + lVal_18;
        lVal_19 = (uint64_t)param_2[lVal_15 + 3] + lVal_25;
        lVal_8 = (uint64_t)param_2[lVal_15 + 4] + lVal_19;
        lVal_20 = (uint64_t)param_2[lVal_15 + 5] + lVal_8;
        lVal_9 = (uint64_t)param_2[lVal_15 + 6] + lVal_20;
        lVal_21 = (uint64_t)param_2[lVal_15 + 7] + lVal_9;
        lVal_10 = (uint64_t)param_2[lVal_15 + 8] + lVal_21;
        lVal_22 = (uint64_t)param_2[lVal_15 + 9] + lVal_10;
        lVal_11 = (uint64_t)param_2[lVal_15 + 10] + lVal_22;
        lVal_23 = (uint64_t)param_2[lVal_15 + 0xb] + lVal_11;
        lVal_12 = (uint64_t)param_2[lVal_15 + 0xc] + lVal_23;
        lVal_24 = (uint64_t)param_2[lVal_15 + 0xd] + lVal_12;
        lVal_13 = (uint64_t)param_2[lVal_15 + 0xe] + lVal_24;
        uVal_17 = (uint64_t)param_2[lVal_15 + 0xf] + lVal_13;
        uVal_5 = (int)uVal_4 + (int)lVal_16 + (int)lVal_18 + (int)lVal_25 + (int)lVal_19 + (int)lVal_8 +
                (int)lVal_20 + (int)lVal_9 + (int)lVal_21 + (int)lVal_10 + (int)lVal_22 + (int)lVal_11 +
                (int)lVal_23 + (int)lVal_12 + (int)lVal_24 + (int)lVal_13 + (int)uVal_17;
        uVal_4 = (uint64_t)uVal_5;
        lVal_15 = lVal_15 + 0x10;
      } while ((int)lVal_15 != 0x15b0);
      param_3 = param_3 - 0x15b0;
      param_2 = param_2 + 0x15b0;
      auArr_1._8_8_ = 0;
      auArr_1._0_8_ = uVal_17;
      lVal_15 = SUB168(auArr_1 * ZEXT816(0xf00e10d2fc5cd),8);
      uVal_17 = uVal_17 + ((uVal_17 - lVal_15 >> 1) + lVal_15 >> 0xf) * -0xfff1;
      uVal_5 = uVal_5 % 0xfff1;
      uVal_4 = (uint64_t)uVal_5;
    } while (0x15af < param_3);
    if (param_3 == 0) goto LAB_1801027a9;
    if (0xf < param_3) goto LAB_1801025a0;
LAB_18010265d:
    uVal_7 = param_3;
    if ((param_3 & 3) != 0) {
      uVal_7 = 0;
      do {
        uVal_17 = uVal_17 + param_2[uVal_7];
        uVal_4 = (uint64_t)(uint)((int)uVal_4 + (int)uVal_17);
        uVal_7 = uVal_7 + 1;
      } while ((param_3 & 3) != uVal_7);
      param_2 = param_2 + uVal_7;
      uVal_7 = param_3 - uVal_7;
    }
    if (3 < param_3) {
      uVal_14 = 0;
      do {
        lVal_15 = param_2[uVal_14] + uVal_17;
        lVal_25 = (uint64_t)param_2[uVal_14 + 1] + lVal_15;
        lVal_16 = (uint64_t)param_2[uVal_14 + 2] + lVal_25;
        uVal_17 = (uint64_t)param_2[uVal_14 + 3] + lVal_16;
        uVal_4 = (uint64_t)
                (uint)((int)uVal_4 + (int)lVal_15 + (int)lVal_25 + (int)lVal_16 + (int)uVal_17);
        uVal_14 = uVal_14 + 4;
      } while (uVal_7 != uVal_14);
    }
  }
  auArr_2._8_8_ = 0;
  auArr_2._0_8_ = uVal_17;
  lVal_15 = SUB168(auArr_2 * ZEXT816(0xf00e10d2fc5cd),8);
  uVal_17 = uVal_17 + ((uVal_17 - lVal_15 >> 1) + lVal_15 >> 0xf) * -0xfff1;
  uVal_5 = (int)uVal_4 + (int)(uVal_4 / 0xfff1) * -0xfff1;
LAB_1801027a9:
  return uVal_5 << 0x10 | uVal_17;
}

// func_0x1801027c0
void func_0x1801027c0(uint64_t param_1,uint64_t param_2,uint32_t param_3)
{
  func_0x180102390(param_1,param_2,param_3);
  return;
}

// func_0x1801027d0
uint64_t func_0x1801027d0(uint64_t param_1,uint *param_2,uint64_t param_3)
{
  byte *pU8_1;
  byte bFlag_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint *pU64_6;
  uint uVal_7;
  uint64_t uVal_8;
  uint uVal_9;
  uint *pU64_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  
  if (param_2 == (uint *)0x0) {
    uVal_3 = 0;
  }
  else {
    uVal_3 = param_1 & 0xffffffff ^ 0xffffffff;
    if (0x16 < param_3) {
      pU64_10 = param_2;
      uVal_5 = param_3;
      if (((uint64_t)param_2 & 3) != 0) {
        uVal_11 = (uint)(uVal_3 >> 8) ^
                 *(uint *)(&DAT_18083b4c0 + (uint64_t)(byte)((byte)uVal_3 ^ *(byte *)param_2) * 4);
        uVal_3 = (uint64_t)uVal_11;
        pU64_10 = (uint *)((int64_t)param_2 + 1);
        uVal_5 = param_3 - 1;
        if (((uint64_t)pU64_10 & 3) != 0 && uVal_5 != 0) {
          uVal_11 = uVal_11 >> 8 ^
                   *(uint *)(&DAT_18083b4c0 +
                            (uint64_t)(byte)((byte)uVal_11 ^ *(byte *)((int64_t)param_2 + 1)) * 4);
          uVal_3 = (uint64_t)uVal_11;
          pU64_10 = (uint *)((int64_t)param_2 + 2);
          uVal_5 = param_3 - 2;
          if (((uint64_t)pU64_10 & 3) != 0 && uVal_5 != 0) {
            uVal_11 = uVal_11 >> 8 ^
                     *(uint *)(&DAT_18083b4c0 +
                              (uint64_t)(byte)((byte)uVal_11 ^ *(byte *)((int64_t)param_2 + 2)) * 4
                              );
            uVal_3 = (uint64_t)uVal_11;
            pU64_10 = (uint *)((int64_t)param_2 + 3);
            uVal_5 = param_3 - 3;
            if (((uint64_t)pU64_10 & 3) != 0 && uVal_5 != 0) {
              uVal_3 = (uint64_t)
                      (uVal_11 >> 8 ^
                      *(uint *)(&DAT_18083b4c0 +
                               (uint64_t)(byte)((byte)uVal_11 ^ *(byte *)((int64_t)param_2 + 3)) *
                               4));
              pU64_10 = param_2 + 1;
              uVal_5 = param_3 - 4;
            }
          }
        }
      }
      lVal_4 = uVal_5 / 0x14 - 1;
      if (lVal_4 == 0) {
        uVal_13 = 0;
        uVal_9 = 0;
        uVal_12 = 0;
        uVal_11 = 0;
        uVal_7 = (uint)uVal_3;
      }
      else {
        uVal_11 = 0;
        uVal_12 = 0;
        uVal_9 = 0;
        uVal_13 = 0;
        pU64_6 = pU64_10;
        do {
          uVal_7 = (uint)uVal_3 ^ *pU64_6;
          uVal_9 = uVal_9 ^ pU64_6[1];
          uVal_13 = uVal_13 ^ pU64_6[2];
          uVal_12 = uVal_12 ^ pU64_6[3];
          uVal_11 = uVal_11 ^ pU64_6[4];
          uVal_7 = *(uint *)(&DAT_18083bcc0 + (uint64_t)(uVal_7 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_18083b8c0 + (uint64_t)(uVal_7 & 0xff) * 4) ^
                  *(uint *)(&DAT_18083c0c0 + (uVal_7 >> 0xe & 0x3fc)) ^
                  *(uint *)(&DAT_18083c4c0 + (uint64_t)(uVal_7 >> 0x18) * 4);
          uVal_3 = (uint64_t)uVal_7;
          uVal_9 = *(uint *)(&DAT_18083bcc0 + (uint64_t)(uVal_9 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_18083b8c0 + (uint64_t)(uVal_9 & 0xff) * 4) ^
                  *(uint *)(&DAT_18083c0c0 + (uVal_9 >> 0xe & 0x3fc)) ^
                  *(uint *)(&DAT_18083c4c0 + (uint64_t)(uVal_9 >> 0x18) * 4);
          uVal_13 = *(uint *)(&DAT_18083bcc0 + (uint64_t)(uVal_13 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_18083b8c0 + (uint64_t)(uVal_13 & 0xff) * 4) ^
                   *(uint *)(&DAT_18083c0c0 + (uVal_13 >> 0xe & 0x3fc)) ^
                   *(uint *)(&DAT_18083c4c0 + (uint64_t)(uVal_13 >> 0x18) * 4);
          uVal_12 = *(uint *)(&DAT_18083bcc0 + (uint64_t)(uVal_12 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_18083b8c0 + (uint64_t)(uVal_12 & 0xff) * 4) ^
                   *(uint *)(&DAT_18083c0c0 + (uVal_12 >> 0xe & 0x3fc)) ^
                   *(uint *)(&DAT_18083c4c0 + (uint64_t)(uVal_12 >> 0x18) * 4);
          uVal_11 = *(uint *)(&DAT_18083bcc0 + (uint64_t)(uVal_11 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_18083b8c0 + (uint64_t)(uVal_11 & 0xff) * 4) ^
                   *(uint *)(&DAT_18083c0c0 + (uVal_11 >> 0xe & 0x3fc)) ^
                   *(uint *)(&DAT_18083c4c0 + (uint64_t)(uVal_11 >> 0x18) * 4);
          pU64_6 = pU64_6 + 5;
          lVal_4 = lVal_4 + -1;
        } while (lVal_4 != 0);
        pU64_10 = pU64_10 + (uVal_5 / 0x14) * 5 + -5;
      }
      uVal_7 = (uVal_7 ^ *pU64_10) >> 8 ^
              *(uint *)(&DAT_18083b4c0 + (uint64_t)((uVal_7 ^ *pU64_10) & 0xff) * 4);
      uVal_7 = uVal_7 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4);
      uVal_7 = uVal_7 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4);
      uVal_7 = uVal_9 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4) ^ pU64_10[1] ^
              uVal_7 >> 8;
      uVal_7 = uVal_7 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4);
      uVal_7 = uVal_7 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4);
      uVal_7 = uVal_7 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4);
      uVal_7 = uVal_13 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4) ^ pU64_10[2] ^
              uVal_7 >> 8;
      uVal_7 = uVal_7 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4);
      uVal_7 = uVal_7 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4);
      uVal_7 = uVal_7 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4);
      uVal_7 = uVal_12 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4) ^ pU64_10[3] ^
              uVal_7 >> 8;
      uVal_7 = uVal_7 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4);
      uVal_7 = uVal_7 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4);
      uVal_7 = uVal_7 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4);
      uVal_11 = uVal_11 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_7 & 0xff) * 4) ^ pU64_10[4] ^
               uVal_7 >> 8;
      uVal_11 = uVal_11 >> 8 ^ *(uint *)(&DAT_18083b4c0 + ((uint64_t)uVal_11 & 0xff) * 4);
      uVal_11 = uVal_11 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_11 & 0xff) * 4);
      param_3 = uVal_5 % 0x14;
      uVal_11 = uVal_11 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_11 & 0xff) * 4);
      uVal_3 = (uint64_t)(uVal_11 >> 8 ^ *(uint *)(&DAT_18083b4c0 + (uint64_t)(uVal_11 & 0xff) * 4));
      param_2 = pU64_10 + 5;
    }
    for (; 7 < param_3; param_3 = param_3 - 8) {
      uVal_3 = (uint64_t)
              *(uint *)(&DAT_18083b4c0 + (uint64_t)(byte)((byte)uVal_3 ^ *(byte *)param_2) * 4) ^
              uVal_3 >> 8;
      uVal_3 = (uint64_t)
              *(uint *)(&DAT_18083b4c0 +
                       (uint64_t)(byte)((byte)uVal_3 ^ *(byte *)((int64_t)param_2 + 1)) * 4) ^
              uVal_3 >> 8;
      uVal_3 = (uint64_t)
              *(uint *)(&DAT_18083b4c0 +
                       (uint64_t)(byte)((byte)uVal_3 ^ *(byte *)((int64_t)param_2 + 2)) * 4) ^
              uVal_3 >> 8;
      uVal_3 = (uint64_t)
              *(uint *)(&DAT_18083b4c0 +
                       (uint64_t)(byte)((byte)uVal_3 ^ *(byte *)((int64_t)param_2 + 3)) * 4) ^
              uVal_3 >> 8;
      uVal_3 = (uint64_t)
              *(uint *)(&DAT_18083b4c0 + (uint64_t)(byte)((byte)uVal_3 ^ *(byte *)(param_2 + 1)) * 4
                       ) ^ uVal_3 >> 8;
      uVal_3 = (uint64_t)
              *(uint *)(&DAT_18083b4c0 +
                       (uint64_t)(byte)((byte)uVal_3 ^ *(byte *)((int64_t)param_2 + 5)) * 4) ^
              uVal_3 >> 8;
      uVal_3 = (uint64_t)
              *(uint *)(&DAT_18083b4c0 +
                       (uint64_t)(byte)((byte)uVal_3 ^ *(byte *)((int64_t)param_2 + 6)) * 4) ^
              uVal_3 >> 8;
      pU8_1 = (byte *)((int64_t)param_2 + 7);
      param_2 = param_2 + 2;
      uVal_3 = (uint64_t)*(uint *)(&DAT_18083b4c0 + (uint64_t)(byte)((byte)uVal_3 ^ *pU8_1) * 4) ^
              uVal_3 >> 8;
    }
    if (param_3 != 0) {
      uVal_5 = param_3;
      if ((param_3 & 1) != 0) {
        bFlag_2 = *(byte *)param_2;
        param_2 = (uint *)((int64_t)param_2 + 1);
        uVal_3 = (uint64_t)*(uint *)(&DAT_18083b4c0 + (uint64_t)(byte)((byte)uVal_3 ^ bFlag_2) * 4) ^
                uVal_3 >> 8;
        uVal_5 = param_3 - 1;
      }
      if (param_3 != 1) {
        uVal_8 = 0;
        do {
          uVal_3 = (uint64_t)
                  *(uint *)(&DAT_18083b4c0 +
                           (uint64_t)(byte)((byte)uVal_3 ^ *(byte *)((int64_t)param_2 + uVal_8)) * 4
                           ) ^ uVal_3 >> 8;
          uVal_3 = (uint64_t)
                  *(uint *)(&DAT_18083b4c0 +
                           (uint64_t)(byte)((byte)uVal_3 ^ *(byte *)((int64_t)param_2 + uVal_8 + 1))
                           * 4) ^ uVal_3 >> 8;
          uVal_8 = uVal_8 + 2;
        } while (uVal_5 != uVal_8);
      }
    }
    uVal_3 = uVal_3 ^ 0xffffffff;
  }
  return uVal_3;
}

// func_0x180102d50
void func_0x180102d50(uint64_t param_1,uint64_t param_2,uint32_t param_3)
{
  func_0x1801027d0(param_1,param_2,param_3);
  return;
}

// func_0x180102d60
int64_t func_0x180102d60(uint64_t *param_1,func_ptr_t *param_2,int64_t param_3)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint32_t *pU64_7;
  func_ptr_t *ptr2_Char_8;
  uint64_t uVal_9;
  uint64_t *pU64_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  func_ptr_t *ptr2_Char_13;
  
  uVal_6 = *param_1;
  uVal_12 = ((int64_t)(param_1[1] - uVal_6) >> 4) * -0x5555555555555555 + 1;
  uVal_5 = ((int64_t)(param_1[2] - uVal_6) >> 4) * -0x5555555555555555;
  uVal_11 = 0x555555555555555 - (uVal_5 >> 1);
  uVal_9 = (uVal_5 >> 1) + uVal_5;
  if (uVal_9 <= uVal_12) {
    uVal_9 = uVal_12;
  }
  if (uVal_11 <= uVal_5 && uVal_5 - uVal_11 != 0) {
    uVal_9 = 0x555555555555555;
  }
  if (0x555555555555555 < uVal_9) {
LAB_1801031f8:
    func_0x18007ba90();
    goto LAB_1801031fd;
  }
  if (uVal_9 == 0) {
    uVal_5 = 0;
  }
  else if (uVal_9 < 0x56) {
    uVal_5 = func_0x180672de0(uVal_9 * 0x30);
  }
  else {
    if (uVal_9 == 0x555555555555555) goto LAB_1801031f8;
    lVal_3 = func_0x180672de0(uVal_9 * 0x30 + 0x27);
    uVal_5 = lVal_3 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_5 - 8) = lVal_3;
  }
  lVal_3 = (int64_t)param_2 + (uVal_5 - uVal_6);
  *(func_ptr_t *)((int64_t)param_2 + (uVal_5 - uVal_6)) = func_0x1800fe430;
  *(uint64_t *)((int64_t)param_2 + uVal_5 + (8 - uVal_6)) = 0;
  if (*(int64_t *)(param_3 + 8) != 0) {
    lVal_1 = *(int64_t *)(param_3 + 0x10);
    *(int64_t *)(lVal_3 + 0x10) = lVal_1;
    if (lVal_1 != 0) {
      uVal_4 = _malloc_base(lVal_1);
      func_0x1806aa960(uVal_4,*(uint64_t *)(param_3 + 8),lVal_1);
      *(uint64_t *)(lVal_3 + 8) = uVal_4;
    }
  }
  *(uint64_t *)(lVal_3 + 0x1e) = 0;
  *(uint64_t *)(lVal_3 + 0x18) = 0;
  *(uint32_t *)(lVal_3 + 0x28) = 1;
  *(uint32_t *)(lVal_3 + 0x18) = *(uint32_t *)(param_3 + 0x18);
  *(uint32_t *)(lVal_3 + 0x1c) = *(uint32_t *)(param_3 + 0x1c);
  *(uint32_t *)(lVal_3 + 0x20) = *(uint32_t *)(param_3 + 0x20);
  *(uint8_t *)(lVal_3 + 0x24) = *(uint8_t *)(param_3 + 0x24);
  *(uint8_t *)(lVal_3 + 0x25) = *(uint8_t *)(param_3 + 0x25);
  *(uint32_t *)(lVal_3 + 0x28) = *(uint32_t *)(param_3 + 0x28);
  ptr2_Char_13 = (func_ptr_t *)*param_1;
  ptr2_Char_8 = (func_ptr_t *)param_1[1];
  if (param_2 == ptr2_Char_8) {
    if (ptr2_Char_13 != param_2) {
      pU64_10 = (uint64_t *)(uVal_5 + 8);
      ptr2_Char_8 = (func_ptr_t *)(uVal_5 + 0x10);
      do {
        ptr2_Char_8[-2] = func_0x1800fe430;
        ptr2_Char_8[-1] = (func_ptr_t )0x0;
        if (ptr2_Char_13[1] != (func_ptr_t )0x0) {
          fnPtr_2 = ptr2_Char_13[2];
          *ptr2_Char_8 = fnPtr_2;
          if (fnPtr_2 != (func_ptr_t )0x0) {
            uVal_4 = _malloc_base(fnPtr_2);
            func_0x1806aa960(uVal_4,ptr2_Char_13[1],fnPtr_2);
            *pU64_10 = uVal_4;
          }
        }
        *(uint64_t *)((int64_t)ptr2_Char_8 + 0xe) = 0;
        ptr2_Char_8[1] = (func_ptr_t )0x0;
        *(uint32_t *)(ptr2_Char_8 + 3) = 1;
        *(uint32_t *)(ptr2_Char_8 + 1) = *(uint32_t *)(ptr2_Char_13 + 3);
        *(uint32_t *)((int64_t)ptr2_Char_8 + 0xc) = *(uint32_t *)((int64_t)ptr2_Char_13 + 0x1c);
        *(uint32_t *)(ptr2_Char_8 + 2) = *(uint32_t *)(ptr2_Char_13 + 4);
        *(uint8_t *)((int64_t)ptr2_Char_8 + 0x14) = *(uint8_t *)((int64_t)ptr2_Char_13 + 0x24);
        *(uint8_t *)((int64_t)ptr2_Char_8 + 0x15) = *(uint8_t *)((int64_t)ptr2_Char_13 + 0x25);
        *(uint32_t *)(ptr2_Char_8 + 3) = *(uint32_t *)(ptr2_Char_13 + 5);
        ptr2_Char_13 = ptr2_Char_13 + 6;
        pU64_10 = pU64_10 + 6;
        ptr2_Char_8 = ptr2_Char_8 + 6;
      } while (ptr2_Char_13 != param_2);
      goto LAB_180103139;
    }
  }
  else {
    if (ptr2_Char_13 != param_2) {
      pU64_10 = (uint64_t *)(uVal_5 + 8);
      ptr2_Char_8 = (func_ptr_t *)(uVal_5 + 0x10);
      do {
        ptr2_Char_8[-2] = func_0x1800fe430;
        ptr2_Char_8[-1] = (func_ptr_t )0x0;
        if (ptr2_Char_13[1] != (func_ptr_t )0x0) {
          fnPtr_2 = ptr2_Char_13[2];
          *ptr2_Char_8 = fnPtr_2;
          if (fnPtr_2 != (func_ptr_t )0x0) {
            uVal_4 = _malloc_base(fnPtr_2);
            func_0x1806aa960(uVal_4,ptr2_Char_13[1],fnPtr_2);
            *pU64_10 = uVal_4;
          }
        }
        *(uint64_t *)((int64_t)ptr2_Char_8 + 0xe) = 0;
        ptr2_Char_8[1] = (func_ptr_t )0x0;
        *(uint32_t *)(ptr2_Char_8 + 3) = 1;
        *(uint32_t *)(ptr2_Char_8 + 1) = *(uint32_t *)(ptr2_Char_13 + 3);
        *(uint32_t *)((int64_t)ptr2_Char_8 + 0xc) = *(uint32_t *)((int64_t)ptr2_Char_13 + 0x1c);
        *(uint32_t *)(ptr2_Char_8 + 2) = *(uint32_t *)(ptr2_Char_13 + 4);
        *(uint8_t *)((int64_t)ptr2_Char_8 + 0x14) = *(uint8_t *)((int64_t)ptr2_Char_13 + 0x24);
        *(uint8_t *)((int64_t)ptr2_Char_8 + 0x15) = *(uint8_t *)((int64_t)ptr2_Char_13 + 0x25);
        *(uint32_t *)(ptr2_Char_8 + 3) = *(uint32_t *)(ptr2_Char_13 + 5);
        ptr2_Char_13 = ptr2_Char_13 + 6;
        pU64_10 = pU64_10 + 6;
        ptr2_Char_8 = ptr2_Char_8 + 6;
      } while (ptr2_Char_13 != param_2);
      ptr2_Char_8 = (func_ptr_t *)param_1[1];
    }
    if (param_2 != ptr2_Char_8) {
      pU64_7 = (uint32_t *)((int64_t)param_2 + uVal_5 + (0x58 - uVal_6));
      pU64_10 = (uint64_t *)((int64_t)param_2 + (0x38 - uVal_6) + uVal_5);
      do {
        *(func_ptr_t *)(pU64_7 + -10) = func_0x1800fe430;
        *(uint64_t *)(pU64_7 + -8) = 0;
        if (param_2[1] != (func_ptr_t )0x0) {
          fnPtr_2 = param_2[2];
          *(func_ptr_t *)(pU64_7 + -6) = fnPtr_2;
          if (fnPtr_2 != (func_ptr_t )0x0) {
            uVal_4 = _malloc_base(fnPtr_2);
            func_0x1806aa960(uVal_4,param_2[1],fnPtr_2);
            *pU64_10 = uVal_4;
          }
        }
        *(uint64_t *)((int64_t)pU64_7 + -10) = 0;
        *(uint64_t *)(pU64_7 + -4) = 0;
        *pU64_7 = 1;
        pU64_7[-4] = *(uint32_t *)(param_2 + 3);
        pU64_7[-3] = *(uint32_t *)((int64_t)param_2 + 0x1c);
        pU64_7[-2] = *(uint32_t *)(param_2 + 4);
        *(uint8_t *)(pU64_7 + -1) = *(uint8_t *)((int64_t)param_2 + 0x24);
        *(uint8_t *)((int64_t)pU64_7 + -3) = *(uint8_t *)((int64_t)param_2 + 0x25);
        *pU64_7 = *(uint32_t *)(param_2 + 5);
        param_2 = param_2 + 6;
        pU64_7 = pU64_7 + 0xc;
        pU64_10 = pU64_10 + 6;
      } while (param_2 != ptr2_Char_8);
    }
LAB_180103139:
    ptr2_Char_13 = (func_ptr_t *)*param_1;
  }
  if (ptr2_Char_13 != (func_ptr_t *)0x0) {
    ptr2_Char_8 = (func_ptr_t *)param_1[1];
    if (ptr2_Char_13 == ptr2_Char_8) {
      uVal_6 = param_1[2] - (int64_t)ptr2_Char_13;
    }
    else {
      do {
        if (ptr2_Char_13[1] != (func_ptr_t )0x0) {
          (**ptr2_Char_13)();
        }
        ptr2_Char_13 = ptr2_Char_13 + 6;
      } while (ptr2_Char_13 != ptr2_Char_8);
      ptr2_Char_13 = (func_ptr_t *)*param_1;
      uVal_6 = param_1[2] - (int64_t)ptr2_Char_13;
    }
    if (0xfff < uVal_6) {
      if (0x1f < (uint64_t)((int64_t)ptr2_Char_13 + (-8 - (int64_t)ptr2_Char_13[-1]))) {
LAB_1801031fd:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_6 + 0x27;
      ptr2_Char_13 = (func_ptr_t *)ptr2_Char_13[-1];
    }
    thunk_FUN_180695dd0(ptr2_Char_13,uVal_6);
  }
  *param_1 = uVal_5;
  param_1[1] = uVal_5 + uVal_12 * 0x30;
  param_1[2] = uVal_5 + uVal_9 * 0x30;
  return lVal_3;
}

// Unwind@180103200
void Unwind_180103200(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180103220
void func_0x180103220(int64_t param_1)
{
                    /* WARNING: Could not recover jumptable at 0x000180103233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(func_ptr_t )(&DAT_1806b4f94 + *(int *)(&DAT_1806b4f94 + param_1 * 4)))
            (&DAT_1806b4f94 + *(int *)(&DAT_1806b4f94 + param_1 * 4));
  return;
}

// func_0x180103270
void func_0x180103270(int64_t param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018010327e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(func_ptr_t )(&DAT_1806b4fac + *(int *)(&DAT_1806b4fac + param_1 * 4)))
            (&DAT_1806b4fac + *(int *)(&DAT_1806b4fac + param_1 * 4));
  return;
}

// func_0x180103390
void func_0x180103390(uint64_t *param_1,uint64_t *param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  
  uVal_5 = *param_2;
  if (0x1555555555555555 < uVal_5) {
LAB_1801034d0:
    func_0x18007ba90();
    goto LAB_1801034d5;
  }
  uVal_2 = *param_1;
  uVal_3 = param_1[1];
  if (uVal_5 == 0) {
    uVal_9 = 0;
    uVal_6 = *param_1;
    uVal_5 = param_1[1];
    if (uVal_6 == uVal_5) goto LAB_18010341b;
LAB_18010343c:
    lVal_4 = 0;
    do {
      *(uint32_t *)(uVal_9 + lVal_4) = *(uint32_t *)(uVal_6 + lVal_4);
      *(uint32_t *)(uVal_9 + 4 + lVal_4) = *(uint32_t *)(uVal_6 + 4 + lVal_4);
      *(uint32_t *)(uVal_9 + 8 + lVal_4) = *(uint32_t *)(uVal_6 + 8 + lVal_4);
      lVal_1 = uVal_6 + lVal_4;
      lVal_4 = lVal_4 + 0xc;
    } while (lVal_1 + 0xcU != uVal_5);
    uVal_6 = *param_1;
    uVal_5 = *param_2;
  }
  else {
    if (uVal_5 < 0x156) {
      uVal_9 = func_0x180672de0(uVal_5 * 0xc);
      uVal_6 = *param_1;
      uVal_5 = param_1[1];
      if (uVal_6 != uVal_5) goto LAB_18010343c;
    }
    else {
      if (0x1555555555555552 < uVal_5) goto LAB_1801034d0;
      lVal_4 = func_0x180672de0(uVal_5 * 0xc + 0x27);
      uVal_9 = lVal_4 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_9 - 8) = lVal_4;
      uVal_6 = *param_1;
      uVal_5 = param_1[1];
      if (uVal_6 != uVal_5) goto LAB_18010343c;
    }
LAB_18010341b:
    uVal_5 = *param_2;
  }
  if (uVal_6 != 0) {
    uVal_8 = param_1[2] - uVal_6;
    uVal_7 = uVal_6;
    if (0xfff < uVal_8) {
      uVal_7 = *(uint64_t *)(uVal_6 - 8);
      if (0x1f < (uVal_6 - 8) - uVal_7) {
LAB_1801034d5:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_8 = uVal_8 + 0x27;
    }
    thunk_FUN_180695dd0(uVal_7,uVal_8);
  }
  *param_1 = uVal_9;
  param_1[1] = (uVal_3 - uVal_2) + uVal_9;
  param_1[2] = uVal_9 + uVal_5 * 0xc;
  return;
}

// func_0x1801034e0
void func_0x1801034e0(uint64_t *param_1,uint64_t *param_2)
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
  if (uVal_8 >> 0x3e == 0) {
    uVal_1 = *param_1;
    uVal_2 = param_1[1];
    if (uVal_8 == 0) {
      uVal_8 = 0;
    }
    else if (uVal_8 < 0x400) {
      uVal_8 = func_0x180672de0(uVal_8 * 4);
    }
    else {
      if (0x3ffffffffffffff6 < uVal_8) goto LAB_1801035be;
      lVal_5 = func_0x180672de0(uVal_8 * 4 + 0x27);
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
        if (0x1f < (uVal_4 - 8) - uVal_6) goto LAB_1801035c3;
        uVal_7 = uVal_7 + 0x27;
      }
      thunk_FUN_180695dd0(uVal_6,uVal_7);
    }
    *param_1 = uVal_8;
    param_1[1] = (uVal_2 - uVal_1) + uVal_8;
    param_1[2] = uVal_8 + uVal_3 * 4;
    return;
  }
LAB_1801035be:
  func_0x18007ba90();
LAB_1801035c3:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x1801035d0
void func_0x1801035d0(uint64_t *param_1,uint64_t *param_2)
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
  if (uVal_8 >> 0x3c == 0) {
    uVal_1 = *param_1;
    uVal_2 = param_1[1];
    if (uVal_8 == 0) {
      uVal_8 = 0;
    }
    else if (uVal_8 < 0x100) {
      uVal_8 = func_0x180672de0(uVal_8 * 0x10);
    }
    else {
      if (0xffffffffffffffd < uVal_8) goto LAB_1801036b0;
      lVal_5 = func_0x180672de0(uVal_8 * 0x10 + 0x27);
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
        if (0x1f < (uVal_4 - 8) - uVal_6) goto LAB_1801036b5;
        uVal_7 = uVal_7 + 0x27;
      }
      thunk_FUN_180695dd0(uVal_6,uVal_7);
    }
    *param_1 = uVal_8;
    param_1[1] = (uVal_2 - uVal_1) + uVal_8;
    param_1[2] = uVal_3 * 0x10 + uVal_8;
    return;
  }
LAB_1801036b0:
  func_0x18007ba90();
LAB_1801036b5:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x1801036c0
void func_0x1801036c0(uint64_t *param_1,uint64_t *param_2)
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
  if (-1 < (int64_t)uVal_8) {
    uVal_1 = *param_1;
    uVal_2 = param_1[1];
    if (uVal_8 == 0) {
      uVal_8 = 0;
    }
    else if (uVal_8 < 0x800) {
      uVal_8 = func_0x180672de0(uVal_8 * 2);
    }
    else {
      if (0x7fffffffffffffec < uVal_8) goto LAB_180103793;
      lVal_5 = func_0x180672de0(uVal_8 * 2 + 0x27);
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
        if (0x1f < (uVal_4 - 8) - uVal_6) goto LAB_180103798;
        uVal_7 = uVal_7 + 0x27;
      }
      thunk_FUN_180695dd0(uVal_6,uVal_7);
    }
    *param_1 = uVal_8;
    param_1[1] = (uVal_2 - uVal_1) + uVal_8;
    param_1[2] = uVal_8 + uVal_3 * 2;
    return;
  }
LAB_180103793:
  func_0x18007ba90();
LAB_180103798:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x180103810
int64_t * func_0x180103810(int64_t *param_1)
{
  uint32_t uVal_1;
  int64_t *pLong_2;
  uint64_t *pU64_3;
  uint8_t local_30 [8];
  int64_t *local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = *(int64_t **)
              (*(int64_t *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x40) + 8);
  (**(func_ptr_t *)(*local_28 + 8))();
  pLong_2 = (int64_t *)func_0x180096a50(local_30);
  uVal_1 = (**(func_ptr_t *)(*pLong_2 + 0x40))(pLong_2,10);
  if (local_28 != (int64_t *)0x0) {
    pU64_3 = (uint64_t *)(**(func_ptr_t *)(*local_28 + 0x10))();
    if (pU64_3 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_3)(pU64_3,1);
    }
  }
  func_0x180103ca0(param_1,uVal_1);
  func_0x180097080(param_1);
  return param_1;
}

// Unwind@1801038a0
void Unwind_1801038a0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  if (*(int64_t **)(param_2 + 0x30) != (int64_t *)0x0) {
    pU64_1 = (uint64_t *)(**(func_ptr_t *)(**(int64_t **)(param_2 + 0x30) + 0x10))();
    if (pU64_1 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_1)(pU64_1,1);
    }
  }
  return;
}

// func_0x1801038e0
int64_t * func_0x1801038e0(int64_t *param_1,uint64_t param_2,uint64_t param_3)
{
  uint8_t uVal_1;
  int64_t *pLong_2;
  uint8_t *pU64_3;
  uint uVal_4;
  int iVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint uVal_8;
  char *fnPtr_9;
  int64_t lVal_10;
  int64_t lVal_11;
  char *fnPtr_12;
  int64_t lVal_13;
  bool bFlag_14;
  uint8_t **local_90 [5];
  uint32_t local_68 [2];
  uint8_t **local_60;
  int64_t *local_58;
  uint8_t local_50;
  int64_t *local_48;
  uint local_3c;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVal_7 = *param_1;
  lVal_11 = (int64_t)*(int *)(lVal_7 + 4);
  uVal_6 = *(uint64_t *)((int64_t)param_1 + lVal_11 + 0x28);
  lVal_13 = uVal_6 - param_3;
  lVal_10 = 0;
  if (param_3 <= uVal_6 && lVal_13 != 0) {
    lVal_10 = lVal_13;
  }
  if ((int64_t)uVal_6 < 1) {
    lVal_10 = 0;
  }
  pLong_2 = *(int64_t **)((int64_t)param_1 + lVal_11 + 0x48);
  local_58 = param_1;
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 8))();
    lVal_7 = *param_1;
    lVal_11 = (int64_t)*(int *)(lVal_7 + 4);
  }
  if (*(int *)((int64_t)param_1 + lVal_11 + 0x10) == 0) {
    pLong_2 = *(int64_t **)((int64_t)param_1 + lVal_11 + 0x50);
    if ((pLong_2 == (int64_t *)0x0) || (pLong_2 == param_1)) {
      local_50 = true;
      iVal_5 = *(int *)(lVal_7 + 4);
    }
    else {
      func_0x180097080();
      local_50 = *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x10) == 0;
      uVal_8 = 4;
      if (!(bool)local_50) goto LAB_180103af6;
      iVal_5 = *(int *)(*param_1 + 4);
    }
    lVal_7 = (int64_t)iVal_5;
    local_48 = param_1;
    if ((lVal_10 != 0) && ((*(uint *)((int64_t)param_1 + lVal_7 + 0x18) & 0x1c0) != 0x40)) {
      do {
        lVal_10 = lVal_13;
        pLong_2 = *(int64_t **)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x48);
        uVal_1 = *(uint8_t *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x58);
        if (*(int64_t *)pLong_2[8] == 0) {
LAB_180103a13:
          local_3c = 0;
          iVal_5 = (**(func_ptr_t *)(*pLong_2 + 0x18))(pLong_2,uVal_1);
          param_1 = local_48;
          if (iVal_5 == -1) {
            uVal_4 = 4;
            goto LAB_180103a96;
          }
        }
        else {
          iVal_5 = *(int *)pLong_2[0xb];
          if (iVal_5 < 1) goto LAB_180103a13;
          *(int *)pLong_2[0xb] = iVal_5 + -1;
          pU64_3 = *(uint8_t **)(int64_t *)pLong_2[8];
          *(int64_t *)pLong_2[8] = (int64_t)(pU64_3 + 1);
          *pU64_3 = uVal_1;
        }
        lVal_13 = lVal_10 + -1;
      } while (lVal_10 + -1 != 0);
      lVal_7 = (int64_t)*(int *)(*param_1 + 4);
      lVal_10 = 0;
    }
    pLong_2 = *(int64_t **)((int64_t)param_1 + lVal_7 + 0x48);
    local_3c = 0;
    uVal_6 = (**(func_ptr_t *)(*pLong_2 + 0x48))(pLong_2,param_2,param_3);
    uVal_8 = 4;
    param_1 = local_48;
    uVal_4 = 0;
    if (uVal_6 == param_3) {
LAB_180103a96:
      do {
        uVal_8 = uVal_4;
        bFlag_14 = lVal_10 == 0;
        lVal_10 = lVal_10 + -1;
        if (bFlag_14) goto LAB_180103ae6;
        pLong_2 = *(int64_t **)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x48);
        uVal_1 = *(uint8_t *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x58);
        uVal_4 = uVal_8;
        if (*(int64_t *)pLong_2[8] != 0) {
          iVal_5 = *(int *)pLong_2[0xb];
          if (0 < iVal_5) {
            *(int *)pLong_2[0xb] = iVal_5 + -1;
            pU64_3 = *(uint8_t **)(int64_t *)pLong_2[8];
            *(int64_t *)pLong_2[8] = (int64_t)(pU64_3 + 1);
            *pU64_3 = uVal_1;
            goto LAB_180103a96;
          }
        }
        local_3c = uVal_8;
        iVal_5 = (**(func_ptr_t *)(*pLong_2 + 0x18))(pLong_2,uVal_1);
        param_1 = local_48;
      } while (iVal_5 != -1);
      uVal_8 = 4;
    }
LAB_180103ae6:
    *(uint64_t *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x28) = 0;
  }
  else {
    local_50 = 0;
    uVal_8 = 4;
  }
LAB_180103af6:
  while( true ) {
    lVal_7 = (int64_t)*(int *)(*param_1 + 4);
    uVal_8 = (uVal_8 | *(uint *)((int64_t)param_1 + lVal_7 + 0x10)) & 0x17 |
            (uint)(*(int64_t *)((int64_t)param_1 + lVal_7 + 0x48) == 0) << 2;
    *(uint *)((int64_t)param_1 + lVal_7 + 0x10) = uVal_8;
    uVal_8 = uVal_8 & *(uint *)((int64_t)param_1 + lVal_7 + 0x14);
    if (uVal_8 == 0) break;
    fnPtr_9 = "ios_base::failbit set";
    if ((uVal_8 & 2) == 0) {
      fnPtr_9 = "ios_base::eofbit set";
    }
    fnPtr_12 = "ios_base::badbit set";
    if ((uVal_8 & 4) == 0) {
      fnPtr_12 = fnPtr_9;
    }
    local_68[0] = 1;
    local_60 = &PTR_vftable_1806b0968;
    func_0x1800968f0(local_90,local_68,fnPtr_12);
    local_90[0] = std::ios_base::failure::vftable;
    func_0x18067a120(local_90,&DAT_180768ca8);
    param_1 = local_48;
    uVal_8 = local_3c;
  }
  iVal_5 = thunk_FUN_18067b540();
  pLong_2 = local_58;
  if (iVal_5 == 0) {
    func_0x1800972b0(local_58);
  }
  pLong_2 = *(int64_t **)((int64_t)pLong_2 + (int64_t)*(int *)(*pLong_2 + 4) + 0x48);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x10))();
  }
  return param_1;
}

// Unwind@180103bd0
void Unwind_180103bd0(uint64_t param_1,int64_t param_2)
{
  func_0x180097250(param_2 + 0x60);
  return;
}

// Catch_All@180103c00
uint64_t Catch_All_180103c00(uint64_t param_1,int64_t param_2)
{
  func_0x1800966b0((int64_t)*(int *)(**(int64_t **)(param_2 + 0x70) + 4) +
                (int64_t)*(int64_t **)(param_2 + 0x70),4,1);
  return 0x180103bc0;
}

// Unwind@180103c50
void Unwind_180103c50(uint64_t param_1,int64_t param_2)
{
  func_0x180097010(param_2 + 0x60);
  return;
}

// Unwind@180103c80
void Unwind_180103c80(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180103ca0
int64_t * func_0x180103ca0(int64_t *param_1,byte param_2)
{
  byte *pU8_1;
  int64_t *pLong_2;
  func_ptr_t fnPtr_3;
  uint uVal_4;
  int iVal_5;
  int64_t *pLong_6;
  int64_t lVal_7;
  int64_t lVal_8;
  char *fnPtr_9;
  char *fnPtr_10;
  uint8_t **local_80 [5];
  uint32_t local_58 [2];
  uint8_t **local_50;
  int64_t *local_48;
  uint8_t local_40;
  int64_t *local_38;
  uint local_2c;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVal_7 = *param_1;
  lVal_8 = (int64_t)*(int *)(lVal_7 + 4);
  pLong_6 = *(int64_t **)((int64_t)param_1 + lVal_8 + 0x48);
  local_48 = param_1;
  if (pLong_6 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_6 + 8))();
    lVal_7 = *param_1;
    lVal_8 = (int64_t)*(int *)(lVal_7 + 4);
  }
  local_38 = param_1;
  if (*(int *)((int64_t)param_1 + lVal_8 + 0x10) != 0) {
    local_40 = 0;
    local_2c = 4;
    goto LAB_180103d83;
  }
  pLong_6 = *(int64_t **)((int64_t)param_1 + lVal_8 + 0x50);
  if ((pLong_6 == (int64_t *)0x0) || (pLong_6 == param_1)) {
    local_40 = true;
  }
  else {
    func_0x180097080();
    lVal_7 = *param_1;
    local_40 = *(int *)((int64_t)param_1 + (int64_t)*(int *)(lVal_7 + 4) + 0x10) == 0;
    local_2c = 4;
    if (!(bool)local_40) goto LAB_180103d83;
  }
  pLong_6 = *(int64_t **)((int64_t)local_38 + (int64_t)*(int *)(lVal_7 + 4) + 0x48);
  if (*(int64_t *)pLong_6[8] == 0) {
LAB_180103d6b:
    uVal_4 = (**(func_ptr_t *)(*pLong_6 + 0x18))(pLong_6,param_2);
  }
  else {
    iVal_5 = *(int *)pLong_6[0xb];
    if (iVal_5 < 1) goto LAB_180103d6b;
    *(int *)pLong_6[0xb] = iVal_5 + -1;
    pU8_1 = *(byte **)pLong_6[8];
    *(byte **)pLong_6[8] = pU8_1 + 1;
    *pU8_1 = param_2;
    uVal_4 = (uint)param_2;
  }
  local_2c = (uint)(uVal_4 == 0xffffffff) << 2;
LAB_180103d83:
  pLong_6 = local_38;
  lVal_7 = (int64_t)*(int *)(*local_38 + 4);
  uVal_4 = *(uint *)((int64_t)local_38 + lVal_7 + 0x10) & 0x17 | local_2c |
          (uint)(*(int64_t *)((int64_t)local_38 + lVal_7 + 0x48) == 0) << 2;
  *(uint *)((int64_t)local_38 + lVal_7 + 0x10) = uVal_4;
  uVal_4 = uVal_4 & *(uint *)((int64_t)local_38 + lVal_7 + 0x14);
  if (uVal_4 != 0) {
    fnPtr_9 = "ios_base::failbit set";
    if ((uVal_4 & 2) == 0) {
      fnPtr_9 = "ios_base::eofbit set";
    }
    fnPtr_10 = "ios_base::badbit set";
    if ((uVal_4 & 4) == 0) {
      fnPtr_10 = fnPtr_9;
    }
    local_58[0] = 1;
    local_50 = &PTR_vftable_1806b0968;
    func_0x1800968f0(local_80,local_58,fnPtr_10);
    local_80[0] = std::ios_base::failure::vftable;
    func_0x18067a120(local_80,&DAT_180768ca8);
    fnPtr_3 = (func_ptr_t )swi(3);
    pLong_6 = (int64_t *)(*fnPtr_3)();
    return pLong_6;
  }
  iVal_5 = thunk_FUN_18067b540();
  pLong_2 = local_48;
  if (iVal_5 == 0) {
    func_0x1800972b0(local_48);
  }
  pLong_2 = *(int64_t **)((int64_t)pLong_2 + (int64_t)*(int *)(*pLong_2 + 4) + 0x48);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x10))();
  }
  return pLong_6;
}

// Unwind@180103e50
void Unwind_180103e50(uint64_t param_1,int64_t param_2)
{
  func_0x180097250(param_2 + 0x60);
  return;
}

// Catch_All@180103e80
uint64_t Catch_All_180103e80(uint64_t param_1,int64_t param_2)
{
  func_0x1800966b0((int64_t)*(int *)(**(int64_t **)(param_2 + 0x70) + 4) +
                (int64_t)*(int64_t **)(param_2 + 0x70),4,1);
  *(uint32_t *)(param_2 + 0x7c) = 0;
  return 0x180103d83;
}

// Unwind@180103ed0
void Unwind_180103ed0(uint64_t param_1,int64_t param_2)
{
  func_0x180097010(param_2 + 0x60);
  return;
}

// Unwind@180103f00
void Unwind_180103f00(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180103f20
uint8_t (*func_0x180103f20(uint8_t (*param_1)[16],uint64_t param_2))[16]
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  byte bFlag_5;
  uint8_t *pU64_6;
  byte *pU8_7;
  uint8_t (*pArr16_8)[16];
  uint64_t uVal_9;
  uint16_t uStack_4a;
  byte abStack_48 [21];
  uint8_t local_33 [11];
  
  if ((int64_t)param_2 < 0) {
    param_2 = -param_2;
    lVal_3 = 0x14;
    if (param_2 < 10) {
LAB_180103fba:
      abStack_48[lVal_3] = (byte)param_2 | 0x30;
    }
    else {
      lVal_3 = 0x15;
      do {
        uVal_9 = param_2;
        lVal_4 = lVal_3;
        param_2 = uVal_9 / 100;
        *(uint16_t *)(abStack_48 + lVal_4 + -2) =
             *(uint16_t *)
              (&DAT_1806b0846 + (uint64_t)(uint)((int)uVal_9 + (int)param_2 * -100) * 2);
        lVal_3 = lVal_4 + -2;
      } while (999 < uVal_9);
      if (99 < uVal_9) {
        lVal_3 = lVal_4 + -3;
        goto LAB_180103fba;
      }
    }
    bFlag_5 = 0x2d;
LAB_1801040bc:
    abStack_48[lVal_3 + -1] = bFlag_5;
    param_1[1] = ZEXT816(0);
    *param_1 = ZEXT816(0);
    if (lVal_3 == 0x16) {
      *(uint64_t *)(param_1[1] + 8) = 0xf;
      return param_1;
    }
    pU8_7 = abStack_48 + lVal_3 + -1;
    pU64_6 = local_33 + -(int64_t)pU8_7;
  }
  else {
    if (param_2 < 10) {
      abStack_48[20] = (byte)param_2 | 0x30;
      pU8_7 = abStack_48 + 0x14;
    }
    else {
      lVal_3 = 0x15;
      do {
        uVal_9 = param_2;
        lVal_4 = lVal_3;
        param_2 = uVal_9 / 100;
        *(uint16_t *)(abStack_48 + lVal_4 + -2) =
             *(uint16_t *)
              (&DAT_1806b0846 + (uint64_t)(uint)((int)uVal_9 + (int)param_2 * -100) * 2);
        lVal_3 = lVal_4 + -2;
      } while (999 < uVal_9);
      if (99 < uVal_9) {
        bFlag_5 = (byte)param_2 | 0x30;
        goto LAB_1801040bc;
      }
      pU8_7 = abStack_48 + lVal_4 + -2;
    }
    *param_1 = ZEXT816(0);
    pU64_6 = local_33 + -(int64_t)pU8_7;
  }
  if (-1 < (int64_t)pU64_6) {
    uVal_9 = 0xf;
    pArr16_8 = param_1;
    if ((uint8_t *)0xf < pU64_6) {
      uVal_2 = (uint64_t)pU64_6 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_2) {
        uVal_9 = uVal_2;
      }
      if (uVal_2 < 0xfff) {
        pArr16_8 = (uint8_t (*)[16])func_0x180672de0(uVal_9 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_9 + 0x28);
        pArr16_8 = (uint8_t (*)[16])(lVal_3 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_8[-1] + 8) = lVal_3;
      }
      *(uint8_t (**)[16])*param_1 = pArr16_8;
    }
    *(uint8_t **)param_1[1] = pU64_6;
    *(uint64_t *)(param_1[1] + 8) = uVal_9;
    func_0x1806aa960(pArr16_8,pU8_7,pU64_6);
    (*pArr16_8)[(int64_t)pU64_6] = 0;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_8 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_8;
}

// func_0x180104110
void func_0x180104110(int64_t param_1)
{
                    /* WARNING: Could not recover jumptable at 0x000180104124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(func_ptr_t )(&DAT_1806b4fc4 + *(int *)(&DAT_1806b4fc4 + param_1 * 4)))
            (&DAT_1806b4fc4 + *(int *)(&DAT_1806b4fc4 + param_1 * 4));
  return;
}

// Unwind@1801045d0
void Unwind_1801045d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1801045f0
void func_0x1801045f0(int64_t *param_1,int64_t **param_2,int64_t param_3)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int iVal_3;
  int64_t **ptr2_Long_4;
  bool bFlag_5;
  int64_t **ptr2_Long_6;
  void *pVoid_7;
  int64_t **ptr2_Long_8;
  int64_t *pLong_9;
  int64_t **ptr2_Long_10;
  int64_t **ptr2_Long_11;
  int64_t **ptr2_Long_12;
  
  ptr2_Long_8 = (int64_t **)*param_1;
  ptr2_Long_4 = ptr2_Long_8 + 1;
  ptr2_Long_11 = ptr2_Long_8;
  if (*(char *)((int64_t)ptr2_Long_8[1] + 0x19) == '\0') {
    if (*(uint64_t *)(param_3 + 0x20) < 0x10) {
      pVoid_7 = (void *)(param_3 + 8);
    }
    else {
      pVoid_7 = *(void **)(param_3 + 8);
    }
    pLong_1 = *(int64_t **)(param_3 + 0x18);
    ptr2_Long_6 = (int64_t **)ptr2_Long_8[1];
    do {
      while( true ) {
        if (ptr2_Long_6[8] < (int64_t *)0x10) {
          ptr2_Long_12 = ptr2_Long_6 + 5;
        }
        else {
          ptr2_Long_12 = (int64_t **)ptr2_Long_6[5];
        }
        pLong_2 = ptr2_Long_6[7];
        pLong_9 = pLong_2;
        if (pLong_1 < pLong_2) {
          pLong_9 = pLong_1;
        }
        iVal_3 = memcmp(ptr2_Long_12,pVoid_7,(size_t)pLong_9);
        bFlag_5 = pLong_2 < pLong_1;
        if (iVal_3 != 0) {
          bFlag_5 = iVal_3 < 0;
        }
        if (bFlag_5) break;
        ptr2_Long_10 = ptr2_Long_11;
        if (*(char *)((int64_t)ptr2_Long_11 + 0x19) != '\0') {
          iVal_3 = memcmp(pVoid_7,ptr2_Long_12,(size_t)pLong_9);
          bFlag_5 = pLong_1 < pLong_2;
          if (iVal_3 != 0) {
            bFlag_5 = iVal_3 < 0;
          }
          ptr2_Long_10 = ptr2_Long_6;
          if (!bFlag_5) {
            ptr2_Long_10 = ptr2_Long_11;
          }
        }
        ptr2_Long_12 = (int64_t **)*ptr2_Long_6;
        ptr2_Long_8 = ptr2_Long_6;
        ptr2_Long_11 = ptr2_Long_10;
        ptr2_Long_6 = ptr2_Long_12;
        if (*(char *)((int64_t)ptr2_Long_12 + 0x19) != '\0') goto LAB_180104700;
      }
      ptr2_Long_6 = (int64_t **)ptr2_Long_6[2];
    } while (*(char *)((int64_t)ptr2_Long_6 + 0x19) == '\0');
  }
LAB_180104700:
  if (*(char *)((int64_t)ptr2_Long_11 + 0x19) == '\0') {
    ptr2_Long_4 = ptr2_Long_11;
  }
  ptr2_Long_4 = (int64_t **)*ptr2_Long_4;
  if (*(char *)((int64_t)ptr2_Long_4 + 0x19) == '\0') {
    if (*(uint64_t *)(param_3 + 0x20) < 0x10) {
      pVoid_7 = (void *)(param_3 + 8);
    }
    else {
      pVoid_7 = *(void **)(param_3 + 8);
    }
    pLong_1 = *(int64_t **)(param_3 + 0x18);
    do {
      if (&DAT_0000000f < ptr2_Long_4[8]) {
        ptr2_Long_6 = (int64_t **)ptr2_Long_4[5];
      }
      else {
        ptr2_Long_6 = ptr2_Long_4 + 5;
      }
      pLong_2 = ptr2_Long_4[7];
      pLong_9 = pLong_1;
      if (pLong_2 < pLong_1) {
        pLong_9 = pLong_2;
      }
      iVal_3 = memcmp(pVoid_7,ptr2_Long_6,(size_t)pLong_9);
      bFlag_5 = pLong_1 < pLong_2;
      if (iVal_3 != 0) {
        bFlag_5 = iVal_3 < 0;
      }
      if (bFlag_5 != false) {
        ptr2_Long_11 = ptr2_Long_4;
      }
      ptr2_Long_4 = (int64_t **)ptr2_Long_4[(uint64_t)(bFlag_5 ^ 1) * 2];
    } while (*(char *)((int64_t)ptr2_Long_4 + 0x19) == '\0');
  }
  *param_2 = (int64_t *)ptr2_Long_8;
  param_2[1] = (int64_t *)ptr2_Long_11;
  return;
}

// func_0x1801047c0
int64_t * func_0x1801047c0(int64_t **param_1,int64_t *param_2,int64_t *param_3)
{
  char ch_1;
  int64_t **ptr2_Long_2;
  int64_t *pLong_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  
  ptr2_Long_2 = (int64_t **)*param_1;
  if ((*ptr2_Long_2 == param_2) && (*(char *)((int64_t)param_3 + 0x19) != '\0')) {
    func_0x1801048b0(param_1,param_1,ptr2_Long_2[1]);
    ptr2_Long_2[1] = (int64_t *)ptr2_Long_2;
    *ptr2_Long_2 = (int64_t *)ptr2_Long_2;
    ptr2_Long_2[2] = (int64_t *)ptr2_Long_2;
    param_1[1] = (int64_t *)0x0;
  }
  else if (param_2 != param_3) {
    do {
      pLong_3 = (int64_t *)param_2[2];
      if (*(char *)((int64_t)(int64_t *)param_2[2] + 0x19) == '\0') {
        do {
          param_2 = pLong_3;
          pLong_3 = (int64_t *)*param_2;
        } while (*(char *)((int64_t)(int64_t *)*param_2 + 0x19) == '\0');
      }
      else {
        ch_1 = *(char *)((int64_t)(int64_t *)param_2[1] + 0x19);
        pLong_4 = (int64_t *)param_2[1];
        pLong_3 = param_2;
        while ((param_2 = pLong_4, ch_1 == '\0' && (pLong_3 == (int64_t *)param_2[2]))) {
          ch_1 = *(char *)((int64_t)(int64_t *)param_2[1] + 0x19);
          pLong_4 = (int64_t *)param_2[1];
          pLong_3 = param_2;
        }
      }
      lVal_5 = func_0x1800a0d60(param_1);
      func_0x1800b7670(lVal_5 + 0x20);
      thunk_FUN_180695dd0(lVal_5,0x88);
    } while (param_2 != param_3);
  }
  return param_3;
}

// func_0x1801048b0
void func_0x1801048b0(uint64_t param_1,uint64_t param_2,int64_t *param_3)
{
  char ch_1;
  int64_t *pLong_2;
  
  ch_1 = *(char *)((int64_t)param_3 + 0x19);
  while (ch_1 == '\0') {
    func_0x1801048b0(param_1,param_2,param_3[2]);
    pLong_2 = (int64_t *)*param_3;
    func_0x1800b7670(param_3 + 4);
    thunk_FUN_180695dd0(param_3,0x88);
    param_3 = pLong_2;
    ch_1 = *(char *)((int64_t)pLong_2 + 0x19);
  }
  return;
}

// func_0x180104910
int64_t * func_0x180104910(uint64_t param_1,int64_t *param_2)
{
  char ch_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  
  pLong_3 = (int64_t *)param_2[2];
  if (*(char *)((int64_t)(int64_t *)param_2[2] + 0x19) == '\0') {
    do {
      pLong_8 = pLong_3;
      pLong_3 = (int64_t *)*pLong_8;
    } while (*(char *)((int64_t)(int64_t *)*pLong_8 + 0x19) == '\0');
  }
  else {
    ch_1 = *(char *)((int64_t)(int64_t *)param_2[1] + 0x19);
    pLong_3 = (int64_t *)param_2[1];
    while ((pLong_8 = pLong_3, ch_1 == '\0' && (param_2 == (int64_t *)pLong_8[2]))) {
      ch_1 = *(char *)((int64_t)(int64_t *)pLong_8[1] + 0x19);
      pLong_3 = (int64_t *)pLong_8[1];
      param_2 = pLong_8;
    }
  }
  lVal_4 = func_0x1800a0d60();
  lVal_2 = *(int64_t *)(lVal_4 + 0x78);
  if (lVal_2 != 0) {
    uVal_7 = *(int64_t *)(lVal_4 + 0x88) - lVal_2;
    lVal_6 = lVal_2;
    if (0xfff < uVal_7) {
      lVal_6 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_6)) goto LAB_180104a22;
      uVal_7 = uVal_7 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_6,uVal_7);
    *(uint8_t (*)[16])(lVal_4 + 0x78) = ZEXT816(0);
    *(uint64_t *)(lVal_4 + 0x88) = 0;
  }
  uVal_7 = *(uint64_t *)(lVal_4 + 0x40);
  if (0xf < uVal_7) {
    lVal_2 = *(int64_t *)(lVal_4 + 0x28);
    uVal_5 = uVal_7 + 1;
    lVal_6 = lVal_2;
    if (0xfff < uVal_5) {
      lVal_6 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_6)) {
LAB_180104a22:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_7 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
  }
  *(uint64_t *)(lVal_4 + 0x38) = 0;
  *(uint64_t *)(lVal_4 + 0x40) = 0xf;
  *(uint8_t *)(lVal_4 + 0x28) = 0;
  thunk_FUN_180695dd0(lVal_4,0x98);
  return pLong_8;
}

// func_0x180104a30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180104a30(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b4eb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b4eb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b4eb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b4ebc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x99;
    param_1[1][1] = param_1[1][1] ^ 0x53;
    param_1[1][2] = 0;
  }
  return;
}

// Unwind@180104c50
void Unwind_180104c50(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x360c) = 0;
  return;
}

// func_0x180104c90
int64_t func_0x180104c90(int64_t param_1)
{
  return param_1 + 0x38;
}

// func_0x180104cf0
int64_t func_0x180104cf0(int64_t param_1)
{
  return param_1 + 0x30;
}

// func_0x180104d50
void func_0x180104d50(int64_t param_1,uint16_t *param_2,int *param_3)
{
  uint8_t uVal_1;
  int64_t lVal_2;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 0x1c) == '\0') {
    lVal_2 = *(int64_t *)(param_1 + 8);
    if (lVal_2 == 0) goto LAB_180104da5;
LAB_180104d78:
    uVal_1 = *(uint8_t *)(lVal_2 + (param_3[2] * 0x10 + *param_3 * 0x100 + param_3[1]) / 2);
  }
  else {
    *(uint8_t *)((int64_t)param_2 + 1) = 0;
    lVal_2 = *(int64_t *)(param_1 + 8);
    if (lVal_2 != 0) goto LAB_180104d78;
    uVal_1 = 0xff;
  }
  *(uint8_t *)param_2 = uVal_1;
LAB_180104da5:
  if (*(int64_t *)(param_1 + 0x10) != 0) {
    *(uint8_t *)((int64_t)param_2 + 1) =
         *(uint8_t *)
          (*(int64_t *)(param_1 + 0x10) +
          (int64_t)((param_3[2] * 0x10 + *param_3 * 0x100 + param_3[1]) / 2));
  }
  return;
}

// func_0x180104de0
void func_0x180104de0(int64_t param_1,uint *param_2,int param_3)
{
                    /* WARNING: Could not recover jumptable at 0x000180104e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(**(int64_t **)(param_1 + 0x20) + 0x18))
            (*(int64_t **)(param_1 + 0x20),
             (*param_2 & 0xf) << 8 | (param_2[2] & 0xf) << 4 | param_2[1] - param_3 & 0xf,
             0x18ac92a14c29fafa);
  return;
}

// func_0x180104e70
uint64_t func_0x180104e70(int64_t **param_1,int param_2)
{
  int64_t lVal_1;
  
  lVal_1 = **param_1;
  if ((((uint64_t)(int64_t)(param_2 + 1) <= (uint64_t)((*param_1)[1] - lVal_1 >> 3)) &&
      (lVal_1 = *(int64_t *)(lVal_1 + (int64_t)param_2 * 8), lVal_1 != 0)) &&
     (*(char *)(lVal_1 + 8) == '\0')) {
    return CONCAT71((int7)((uint64_t)lVal_1 >> 8),*(char *)(lVal_1 + 0xc) == '\x01');
  }
  return 0;
}

// func_0x180104f20
uint64_t * func_0x180104f20(int64_t **param_1,int param_2)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  
  lVal_1 = **param_1;
  pU64_2 = &DAT_18083c8c0;
  if (((uint64_t)(int64_t)(param_2 + 1) <= (uint64_t)((*param_1)[1] - lVal_1 >> 3)) &&
     (lVal_1 = *(int64_t *)(lVal_1 + (int64_t)param_2 * 8), lVal_1 != 0)) {
    pU64_2 = &DAT_18083c8c0;
    if (*(char *)(lVal_1 + 8) == '\x04') {
      pU64_2 = (uint64_t *)(lVal_1 + 0x10);
    }
  }
  return pU64_2;
}

// func_0x180104f70
void func_0x180104f70(int64_t **param_1,uint64_t *param_2,int param_3)
{
  int64_t lVal_1;
  
  lVal_1 = **param_1;
  if ((((uint64_t)(int64_t)(param_3 + 1) <= (uint64_t)((*param_1)[1] - lVal_1 >> 3)) &&
      (lVal_1 = *(int64_t *)(lVal_1 + (int64_t)param_3 * 8), lVal_1 != 0)) &&
     (*(char *)(lVal_1 + 8) == '\x06')) {
    *param_2 = *(uint64_t *)(lVal_1 + 0xc);
    *(uint32_t *)(param_2 + 1) = *(uint32_t *)(lVal_1 + 0x14);
    *(uint8_t *)((int64_t)param_2 + 0xc) = 1;
    return;
  }
  *(uint8_t *)((int64_t)param_2 + 0xc) = 0;
  return;
}

// Unwind@180105070
void Unwind_180105070(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180106230
void Unwind_180106230(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180106260
void Unwind_180106260(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180106290
void Unwind_180106290(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1801062c0
void Unwind_1801062c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x1801062f0
void func_0x1801062f0(uint64_t *param_1,uint8_t param_2)
{
  *param_1 = &PTR_FUN_1806b5040;
  *(uint8_t *)(param_1 + 1) = param_2;
  return;
}

// Unwind@1801064c0
void Unwind_1801064c0(uint64_t param_1,int64_t param_2)
{
  func_0x1801064f0(param_2 + 0x28);
  return;
}

// func_0x1801064f0
void func_0x1801064f0(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    func_0x18010b100(param_1 + 0x28);
    lVal_6 = *(int64_t *)(param_1 + 0x10);
    if (lVal_6 != 0) {
      lVal_1 = *(int64_t *)(param_1 + 0x18);
      if (lVal_6 == lVal_1) {
        uVal_5 = *(int64_t *)(param_1 + 0x20) - lVal_6;
      }
      else {
        do {
          if (*(char *)(lVal_6 + 0x50) == '\x01') {
            uVal_5 = *(uint64_t *)(lVal_6 + 0x38);
            if (0xf < uVal_5) {
              lVal_2 = *(int64_t *)(lVal_6 + 0x20);
              uVal_3 = uVal_5 + 1;
              lVal_4 = lVal_2;
              if (0xfff < uVal_3) {
                lVal_4 = *(int64_t *)(lVal_2 + -8);
                if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801065fb;
                uVal_3 = uVal_5 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_4,uVal_3);
            }
            *(uint64_t *)(lVal_6 + 0x30) = 0;
            *(uint64_t *)(lVal_6 + 0x38) = 0xf;
            *(uint8_t *)(lVal_6 + 0x20) = 0;
          }
          lVal_6 = lVal_6 + 0x58;
        } while (lVal_6 != lVal_1);
        lVal_6 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 0x10);
        uVal_5 = *(int64_t *)(param_1 + 0x20) - lVal_6;
      }
      if (0xfff < uVal_5) {
        if (0x1f < (uint64_t)((lVal_6 + -8) - *(int64_t *)(lVal_6 + -8))) {
LAB_1801065fb:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_5 = uVal_5 + 0x27;
        lVal_6 = *(int64_t *)(lVal_6 + -8);
      }
      thunk_FUN_180695dd0(lVal_6,uVal_5);
      *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
      *(uint64_t *)(param_1 + 0x20) = 0;
    }
  }
  return;
}

// func_0x1801066a0
void func_0x1801066a0(uint64_t *param_1,uint16_t param_2)
{
  *param_1 = &PTR_FUN_1806b50a0;
  *(uint16_t *)(param_1 + 1) = param_2;
  return;
}

// Unwind@180106870
void Unwind_180106870(uint64_t param_1,int64_t param_2)
{
  func_0x1801064f0(param_2 + 0x28);
  return;
}

// func_0x180106950
uint64_t * func_0x180106950(uint64_t *param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t *pU64_3;
  
  uVal_1 = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  lVal_2 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_2) < uVal_1) {
    param_1 = (uint64_t *)func_0x180082950(param_1,uVal_1,uVal_1,param_2,uVal_1);
  }
  else {
    param_1[2] = lVal_2 + uVal_1;
    pU64_3 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_3 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_2 + (int64_t)pU64_3,param_2);
    *(uint8_t *)((int64_t)pU64_3 + lVal_2 + uVal_1) = 0;
  }
  return param_1;
}

// func_0x1801069c0
uint64_t * func_0x1801069c0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3)
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
  
  *param_1 = &PTR_LAB_1806b5100;
  pU64_1 = param_1 + 1;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  param_1[3] = 0;
  param_1[4] = 0xf;
  if (pU64_1 != param_2) {
    uVal_2 = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if (uVal_2 < 0x10) {
      param_1[3] = uVal_2;
      func_0x1806aa960(pU64_1,param_2,uVal_2);
      *(uint8_t *)((int64_t)param_1 + uVal_2 + 8) = 0;
    }
    else {
      func_0x18007bba0(pU64_1,uVal_2,param_3,param_2,pU64_1,0xfffffffffffffffe);
    }
  }
  return param_1;
}

// Unwind@180106a50
void Unwind_180106a50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x20));
  return;
}

// Unwind@180106ce0
void Unwind_180106ce0(uint64_t param_1,int64_t param_2)
{
  func_0x180106d10(param_2 + 0x28);
  return;
}

// func_0x180106d10
void func_0x180106d10(int64_t *param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    uVal_5 = param_1[3];
    if (0xf < uVal_5) {
      lVal_6 = *param_1;
      uVal_2 = uVal_5 + 1;
      lVal_3 = lVal_6;
      if (0xfff < uVal_2) {
        lVal_3 = *(int64_t *)(lVal_6 + -8);
        if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_3)) goto LAB_180106e6b;
        uVal_2 = uVal_5 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_3,uVal_2);
    }
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(uint8_t *)param_1 = 0;
  }
  else {
    func_0x18010b100(param_1 + 5);
    lVal_6 = param_1[2];
    if (lVal_6 != 0) {
      lVal_3 = param_1[3];
      if (lVal_6 == lVal_3) {
        uVal_5 = param_1[4] - lVal_6;
      }
      else {
        do {
          if (*(char *)(lVal_6 + 0x50) == '\x01') {
            uVal_5 = *(uint64_t *)(lVal_6 + 0x38);
            if (0xf < uVal_5) {
              lVal_1 = *(int64_t *)(lVal_6 + 0x20);
              uVal_2 = uVal_5 + 1;
              lVal_4 = lVal_1;
              if (0xfff < uVal_2) {
                lVal_4 = *(int64_t *)(lVal_1 + -8);
                if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) goto LAB_180106e6b;
                uVal_2 = uVal_5 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_4,uVal_2);
            }
            *(uint64_t *)(lVal_6 + 0x30) = 0;
            *(uint64_t *)(lVal_6 + 0x38) = 0xf;
            *(uint8_t *)(lVal_6 + 0x20) = 0;
          }
          lVal_6 = lVal_6 + 0x58;
        } while (lVal_6 != lVal_3);
        lVal_6 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 2);
        uVal_5 = param_1[4] - lVal_6;
      }
      if (0xfff < uVal_5) {
        if (0x1f < (uint64_t)((lVal_6 + -8) - *(int64_t *)(lVal_6 + -8))) {
LAB_180106e6b:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_5 = uVal_5 + 0x27;
        lVal_6 = *(int64_t *)(lVal_6 + -8);
      }
      thunk_FUN_180695dd0(lVal_6,uVal_5);
      *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
      param_1[4] = 0;
    }
  }
  return;
}

// Unwind@180107090
void Unwind_180107090(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x30),0x28);
  return;
}

// func_0x1801071a0
int64_t * func_0x1801071a0(int64_t *param_1)
{
  int64_t lVal_1;
  
  *param_1 = (int64_t)&PTR_LAB_1806b5160;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  lVal_1 = func_0x180672de0(0x70);
  *(int64_t *)lVal_1 = lVal_1;
  *(int64_t *)(lVal_1 + 8) = lVal_1;
  *(int64_t *)(lVal_1 + 0x10) = lVal_1;
  *(uint16_t *)(lVal_1 + 0x18) = 0x101;
  param_1[1] = lVal_1;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f208) {
    func_0x180672ec0(&DAT_18083f208);
    if (DAT_18083f208 == -1) {
      lVal_1 = func_0x1801072a0(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f200 = 0;
      }
      else {
        DAT_18083f200 = lVal_1 + *(int *)(lVal_1 + 3) + 7;
      }
      _Init_thread_footer(&DAT_18083f208);
    }
  }
  *param_1 = DAT_18083f200;
  return param_1;
}

// Unwind@180107270
void Unwind_180107270(uint64_t param_1,int64_t param_2)
{
  func_0x180672f60(&DAT_18083f208);
  func_0x180107380(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x1801072a0
int64_t func_0x1801072a0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x12a94aa4e333356) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x398911a886acf6fa) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180107344;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x398911a886acf6fa);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18010736a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x398911a886acf6fa);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffbf25e752U) + -0x11;
  }
LAB_180107344:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18010736a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180107380
void func_0x180107380(int64_t *param_1)
{
  func_0x18010b290(param_1,param_1,*(uint64_t *)(*param_1 + 8));
  thunk_FUN_180695dd0(*param_1,0x70);
  return;
}

// func_0x1801073b0
void func_0x1801073b0(int64_t param_1)
{
  func_0x1800d73e0(param_1 + 8);
  return;
}

// func_0x1801073c0
uint8_t func_0x1801073c0(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  int64_t lVal_2;
  
  ch_1 = func_0x1800d73e0(param_1 + 8);
  if (ch_1 != '\0') {
    lVal_2 = func_0x1800fcc60(param_1 + 8,param_2);
    if (*(char *)(lVal_2 + 0x28) == '\x01') {
      return *(uint8_t *)(lVal_2 + 8);
    }
  }
  return 0;
}

// func_0x180107410
int64_t func_0x180107410(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  ch_1 = func_0x1800d73e0(param_1 + 8);
  if (ch_1 != '\0') {
    lVal_2 = func_0x1800fcc60(param_1 + 8,param_2);
    lVal_3 = 0;
    if (*(char *)(lVal_2 + 0x28) == '\x01') {
      lVal_3 = lVal_2;
    }
    return lVal_3;
  }
  return 0;
}

// func_0x180107460
int64_t func_0x180107460(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  ch_1 = func_0x1800d73e0(param_1 + 8);
  if (ch_1 != '\0') {
    lVal_2 = func_0x1800fcc60(param_1 + 8,param_2);
    lVal_3 = 0;
    if (*(char *)(lVal_2 + 0x28) == '\x03') {
      lVal_3 = lVal_2;
    }
    return lVal_3;
  }
  return 0;
}

// func_0x1801074b0
uint64_t func_0x1801074b0(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  int64_t lVal_2;
  
  ch_1 = func_0x1800d73e0(param_1 + 8);
  if (ch_1 != '\0') {
    lVal_2 = func_0x1800fcc60(param_1 + 8,param_2);
    if (*(char *)(lVal_2 + 0x28) == '\x04') {
      return *(uint64_t *)(lVal_2 + 8);
    }
  }
  return 0;
}

// func_0x180107500
int64_t func_0x180107500(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  ch_1 = func_0x1800d73e0(param_1 + 8);
  if (ch_1 != '\0') {
    lVal_2 = func_0x1800fcc60(param_1 + 8,param_2);
    lVal_3 = 0;
    if (*(char *)(lVal_2 + 0x28) == '\x04') {
      lVal_3 = lVal_2;
    }
    return lVal_3;
  }
  return 0;
}

// func_0x180107550
uint32_t func_0x180107550(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  int64_t lVal_2;
  uint32_t uVal_3;
  
  ch_1 = func_0x1800d73e0(param_1 + 8);
  uVal_3 = 0;
  if (ch_1 != '\0') {
    lVal_2 = func_0x1800fcc60(param_1 + 8,param_2);
    if (*(char *)(lVal_2 + 0x28) == '\x05') {
      uVal_3 = *(uint32_t *)(lVal_2 + 8);
    }
  }
  return uVal_3;
}

// func_0x1801075a0
int64_t func_0x1801075a0(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  ch_1 = func_0x1800d73e0(param_1 + 8);
  if (ch_1 != '\0') {
    lVal_2 = func_0x1800fcc60(param_1 + 8,param_2);
    lVal_3 = 0;
    if (*(char *)(lVal_2 + 0x28) == '\b') {
      lVal_3 = lVal_2;
    }
    return lVal_3;
  }
  return 0;
}

// func_0x1801075f0
int64_t func_0x1801075f0(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  ch_1 = func_0x1800d73e0(param_1 + 8);
  if (ch_1 != '\0') {
    lVal_2 = func_0x1800fcc60(param_1 + 8,param_2);
    lVal_3 = 0;
    if (*(char *)(lVal_2 + 0x28) == '\t') {
      lVal_3 = lVal_2;
    }
    return lVal_3;
  }
  return 0;
}

// func_0x180107640
int64_t func_0x180107640(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  ch_1 = func_0x1800d73e0(param_1 + 8);
  if (ch_1 != '\0') {
    lVal_2 = func_0x1800fcc60(param_1 + 8,param_2);
    lVal_3 = 0;
    if (*(char *)(lVal_2 + 0x28) == '\n') {
      lVal_3 = lVal_2;
    }
    return lVal_3;
  }
  return 0;
}

// func_0x180107690
void func_0x180107690(uint64_t param_1,uint64_t param_2)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f218) {
    func_0x180672ec0(&DAT_18083f218);
    if (DAT_18083f218 == -1) {
      DAT_18083f210 = (func_ptr_t )func_0x180107750(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f218);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001801076df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f210)(param_1,param_2);
  return;
}

// Unwind@180107720
void Unwind_180107720(void)
{
  func_0x180672f60(&DAT_18083f218);
  return;
}

// func_0x180107750
int64_t func_0x180107750(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x17a14fca5bf58a8) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x3cade26e831df46) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801077f4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x3cade26e831df46);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18010781a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x3cade26e831df46);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffebfb0160U) + -0x19;
  }
LAB_1801077f4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18010781a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180107830
void func_0x180107830(uint8_t *param_1,char param_2,uint param_3,uint8_t param_4)
{
  uint8_t *pU64_1;
  func_ptr_t fnPtr_2;
  uint8_t auStack_58 [32];
  uint64_t local_38;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  if ((param_1[0x278] == '\0') && (param_1[0x22d] == '\0')) {
    *(uint32_t *)(param_1 + 0x270) = 0;
    param_1[0x22d] = 0;
    param_1[0x278] = 0;
    param_1[0x1a0] = 0;
    pU64_1 = param_1 + 8;
    func_0x1800ff090(pU64_1);
    *param_1 = 0;
    param_1[0x140] = 0;
    param_1[0x18c] = 0;
    param_1[0x16c] = 0;
    param_1[8] = param_2;
    param_1[0x279] = param_4;
    param_1[0x22c] = 0;
    param_1[0x278] = 1;
    *(uint32_t *)(param_1 + 0x1e4) = 0;
    if (*(int64_t *)(param_1 + 0x1c0) != *(int64_t *)(param_1 + 0x1c8)) {
      *(int64_t *)(param_1 + 0x1c8) = *(int64_t *)(param_1 + 0x1c0);
    }
    func_0x180100560(pU64_1,0);
    if (0 < (int)param_3) {
      func_0x180100570(pU64_1);
      if (((param_2 != '\0') && (param_1[0x279] != '\0')) &&
         (local_38 = (uint64_t)
                     (param_3 / *(uint *)((int64_t)&PTR_FUN_1806b51b0 + (int64_t)param_2 * 4 + 4)
                     + 1),
         (uint64_t)(*(int64_t *)(param_1 + 0x1d0) - *(int64_t *)(param_1 + 0x1c0) >> 4) <
         local_38)) {
        func_0x18010b360(param_1 + 0x1c0,&local_38);
      }
    }
  }
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_58)) {
    return;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_58);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x180107990
void func_0x180107990(uint8_t *param_1)
{
  *(uint32_t *)(param_1 + 0x270) = 0;
  param_1[0x22d] = 0;
  param_1[0x278] = 0;
  param_1[0x1a0] = 0;
  func_0x1800ff090(param_1 + 8);
  *param_1 = 0;
  param_1[0x140] = 0;
  param_1[0x18c] = 0;
  param_1[0x16c] = 0;
  return;
}

// func_0x1801079e0
void func_0x1801079e0(uint8_t *param_1,char param_2,uint param_3,uint8_t param_4)
{
  uint8_t *pU64_1;
  func_ptr_t fnPtr_2;
  uint8_t auStack_58 [32];
  uint64_t local_38;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  if ((param_1[0x278] == '\0') && (param_1[0x22d] == '\0')) {
    *(uint32_t *)(param_1 + 0x270) = 0;
    param_1[0x22d] = 0;
    param_1[0x278] = 0;
    param_1[0x1a0] = 0;
    pU64_1 = param_1 + 8;
    func_0x180100450(pU64_1);
    *param_1 = 0;
    param_1[0x140] = 0;
    param_1[0x160] = 0;
    param_1[0x18c] = 0;
    param_1[0x192] = 0;
    param_1[0x196] = 0;
    param_1[0x19c] = 0;
    param_1[0x16c] = 0;
    param_1[0x178] = 0;
    param_1[0x184] = 0;
    param_1[8] = param_2;
    param_1[0x279] = param_4;
    param_1[0x22c] = 0;
    param_1[0x278] = 1;
    *(uint32_t *)(param_1 + 0x1e4) = 0;
    if (*(int64_t *)(param_1 + 0x1c0) != *(int64_t *)(param_1 + 0x1c8)) {
      *(int64_t *)(param_1 + 0x1c8) = *(int64_t *)(param_1 + 0x1c0);
    }
    func_0x180100560(pU64_1,0);
    if (0 < (int)param_3) {
      func_0x180100660(pU64_1);
      if (((param_2 != '\0') && (param_1[0x279] != '\0')) &&
         (local_38 = (uint64_t)
                     (param_3 / *(uint *)((int64_t)&PTR_FUN_1806b51b0 + (int64_t)param_2 * 4 + 4)
                     + 1),
         (uint64_t)(*(int64_t *)(param_1 + 0x1d0) - *(int64_t *)(param_1 + 0x1c0) >> 4) <
         local_38)) {
        func_0x18010b360(param_1 + 0x1c0,&local_38);
      }
    }
  }
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_58)) {
    return;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_58);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x180107b60
void func_0x180107b60(uint8_t *param_1)
{
  *(uint32_t *)(param_1 + 0x270) = 0;
  param_1[0x22d] = 0;
  param_1[0x278] = 0;
  param_1[0x1a0] = 0;
  func_0x180100450(param_1 + 8);
  *param_1 = 0;
  param_1[0x140] = 0;
  param_1[0x160] = 0;
  param_1[0x18c] = 0;
  param_1[0x192] = 0;
  param_1[0x196] = 0;
  param_1[0x19c] = 0;
  param_1[0x16c] = 0;
  param_1[0x178] = 0;
  param_1[0x184] = 0;
  return;
}

// func_0x180107be0
void func_0x180107be0(uint8_t *param_1)
{
  if ((param_1[0x278] == '\0') && (param_1[0x22d] == '\0')) {
    *(uint32_t *)(param_1 + 0x270) = 0;
    param_1[0x22d] = 0;
    param_1[0x278] = 0;
    param_1[0x1a0] = 0;
    func_0x180100450(param_1 + 8);
    *param_1 = 0;
    param_1[0x140] = 0;
    param_1[0x160] = 0;
    param_1[0x18c] = 0;
    param_1[0x192] = 0;
    param_1[0x196] = 0;
    param_1[0x19c] = 0;
    param_1[0x16c] = 0;
    param_1[0x178] = 0;
    param_1[0x184] = 0;
    param_1[8] = 1;
    param_1[0x22c] = 0;
    *(uint16_t *)(param_1 + 0x278) = 1;
    *(uint32_t *)(param_1 + 0x1e4) = 0;
    if (*(int64_t *)(param_1 + 0x1c0) != *(int64_t *)(param_1 + 0x1c8)) {
      *(int64_t *)(param_1 + 0x1c8) = *(int64_t *)(param_1 + 0x1c0);
    }
    func_0x180100560(param_1 + 8,0);
  }
  param_1[0x22d] = 1;
  return;
}

// func_0x180107cc0
void func_0x180107cc0(uint8_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)
{
  char ch_1;
  uint32_t *pU64_2;
  uint64_t *pU64_3;
  func_ptr_t fnPtr_4;
  uint8_t auStack_48 [32];
  uint32_t *local_28;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  if (*(int *)(param_1 + 0x270) == *(int *)(param_1 + 0x274)) goto LAB_180107dd8;
  *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + 1;
  *param_1 = 1;
  pU64_2 = *(uint32_t **)(param_1 + 0x18);
  if (pU64_2 == *(uint32_t **)(param_1 + 0x20)) {
    local_28 = &local_14;
    func_0x18010b4c0(param_1 + 0x10,pU64_2,&local_1c,&local_18);
    if (param_1[0x18c] == '\x01') goto LAB_180107d5a;
LAB_180107d74:
    ch_1 = param_1[0x16c];
  }
  else {
    *pU64_2 = param_2;
    pU64_2[1] = param_3;
    pU64_2[2] = param_4;
    *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 0xc;
    if (param_1[0x18c] != '\x01') goto LAB_180107d74;
LAB_180107d5a:
    pU64_2 = *(uint32_t **)(param_1 + 0x78);
    if (pU64_2 != *(uint32_t **)(param_1 + 0x80)) {
      *pU64_2 = *(uint32_t *)(param_1 + 0x188);
      *(int64_t *)(param_1 + 0x78) = *(int64_t *)(param_1 + 0x78) + 4;
      goto LAB_180107d74;
    }
    func_0x18010b730(param_1 + 0x70,pU64_2,param_1 + 0x188);
    ch_1 = param_1[0x16c];
  }
  if (ch_1 == '\x01') {
    pU64_3 = *(uint64_t **)(param_1 + 0xa8);
    if (pU64_3 == *(uint64_t **)(param_1 + 0xb0)) {
      func_0x18007f260(param_1 + 0xa0,pU64_3,param_1 + 0x164);
    }
    else {
      *pU64_3 = *(uint64_t *)(param_1 + 0x164);
      *(int64_t *)(param_1 + 0xa8) = *(int64_t *)(param_1 + 0xa8) + 8;
    }
  }
LAB_180107dd8:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_48)) {
    return;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_48);
  fnPtr_4 = (func_ptr_t )swi(3);
  (*fnPtr_4)();
  return;
}

// func_0x180107e00
void func_0x180107e00(uint64_t param_1,uint32_t *param_2)
{
  func_0x180107cc0(param_1,*param_2,param_2[1],param_2[2]);
  return;
}

// func_0x180107e20
void func_0x180107e20(char *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6)
{
  if (param_1[0x16c] == '\0') {
    param_1[0x16c] = '\x01';
  }
  *(uint32_t *)(param_1 + 0x164) = param_5;
  *(uint32_t *)(param_1 + 0x168) = param_6;
  if (*param_1 == '\0') {
    func_0x180100560(param_1 + 8,4);
  }
  func_0x180107cc0(param_1,param_2,param_3,param_4);
  return;
}

// func_0x180107eb0
void func_0x180107eb0(char *param_1,uint32_t *param_2,uint64_t *param_3)
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint64_t uVal_4;
  
  uVal_4 = *param_3;
  uVal_1 = param_2[2];
  uVal_2 = *param_2;
  uVal_3 = param_2[1];
  if (param_1[0x16c] == '\0') {
    param_1[0x16c] = '\x01';
  }
  *(uint64_t *)(param_1 + 0x164) = uVal_4;
  if (*param_1 == '\0') {
    func_0x180100560(param_1 + 8,4);
  }
  func_0x180107cc0(param_1,uVal_2,uVal_3,uVal_1);
  return;
}

// func_0x180107f30
void func_0x180107f30(char *param_1,float param_2,float param_3,float param_4,float param_5, float param_6,float param_7,float param_8)
{
  float fVal_1;
  
  if (param_1[0x16c] == '\0') {
    param_1[0x16c] = '\x01';
  }
  *(float *)(param_1 + 0x164) = param_5;
  *(float *)(param_1 + 0x168) = param_6;
  if (*param_1 == '\0') {
    func_0x180100560(param_1 + 8,4);
  }
  func_0x180107cc0(param_1,param_2,param_3,0);
  param_8 = param_8 + param_6;
  if (param_1[0x16c] == '\0') {
    param_1[0x16c] = '\x01';
  }
  fVal_1 = param_3 + param_4;
  *(float *)(param_1 + 0x164) = param_5;
  *(float *)(param_1 + 0x168) = param_8;
  if (*param_1 == '\0') {
    func_0x180100560(param_1 + 8,4);
  }
  func_0x180107cc0(param_1,param_2,fVal_1,0);
  param_7 = param_7 + param_5;
  if (param_1[0x16c] == '\0') {
    param_1[0x16c] = '\x01';
  }
  param_4 = param_4 + param_2;
  *(float *)(param_1 + 0x164) = param_7;
  *(float *)(param_1 + 0x168) = param_6;
  if (*param_1 == '\0') {
    func_0x180100560(param_1 + 8,4);
  }
  func_0x180107cc0(param_1,param_4,param_3,0);
  if (param_1[0x16c] == '\0') {
    param_1[0x16c] = '\x01';
  }
  *(float *)(param_1 + 0x164) = param_5;
  *(float *)(param_1 + 0x168) = param_8;
  if (*param_1 == '\0') {
    func_0x180100560(param_1 + 8,4);
  }
  func_0x180107cc0(param_1,param_2,fVal_1,0);
  if (param_1[0x16c] == '\0') {
    param_1[0x16c] = '\x01';
  }
  *(float *)(param_1 + 0x164) = param_7;
  *(float *)(param_1 + 0x168) = param_8;
  if (*param_1 == '\0') {
    func_0x180100560(param_1 + 8,4);
  }
  func_0x180107cc0(param_1,param_4,fVal_1,0);
  if (param_1[0x16c] == '\0') {
    param_1[0x16c] = '\x01';
  }
  *(float *)(param_1 + 0x164) = param_7;
  *(float *)(param_1 + 0x168) = param_6;
  if (*param_1 == '\0') {
    func_0x180100560(param_1 + 8,4);
  }
  func_0x180107cc0(param_1,param_4,param_3,0);
  return;
}

// func_0x1801081a0
void func_0x1801081a0(char *param_1,float param_2,float param_3,float param_4,float param_5)
{
  uint uVal_1;
  
  param_3 = param_3 * DAT_1806b26b0;
  param_2 = param_2 * DAT_1806b26b0;
  uVal_1 = ((int)(param_4 * DAT_1806b26b0) & 0xffU) << 0x10 | (int)(param_5 * DAT_1806b26b0) << 0x18;
  if (param_1[0x18c] == '\0') {
    param_1[0x18c] = '\x01';
  }
  *(uint *)(param_1 + 0x188) = (int)param_2 & 0xffU | ((int)param_3 & 0xffU) << 8 | uVal_1;
  if (*param_1 != '\0') {
    return;
  }
  func_0x180100560(param_1 + 8,CONCAT62((uint6)(ushort)(uVal_1 >> 0x10),1));
  return;
}

// func_0x180108220
void func_0x180108220(char *param_1,float *param_2)
{
  float fVal_1;
  float fVal_2;
  float fVal_3;
  float fVal_4;
  
  fVal_2 = param_2[3] * DAT_1806b26b0;
  fVal_3 = param_2[2] * DAT_1806b26b0;
  fVal_4 = param_2[1] * DAT_1806b26b0;
  fVal_1 = DAT_1806b26b0 * *param_2;
  if (param_1[0x18c] == '\0') {
    param_1[0x18c] = '\x01';
  }
  *(uint *)(param_1 + 0x188) =
       (int)fVal_1 & 0xffU |
       ((int)fVal_4 & 0xffU) << 8 | ((int)fVal_3 & 0xffU) << 0x10 | (int)fVal_2 << 0x18;
  if (*param_1 != '\0') {
    return;
  }
  func_0x180100560(param_1 + 8,1);
  return;
}

// func_0x1801082b0
void func_0x1801082b0(char *param_1,float *param_2,float param_3)
{
  float fVal_1;
  float fVal_2;
  float fVal_3;
  
  param_3 = param_3 * DAT_1806b26b0;
  fVal_2 = param_2[2] * DAT_1806b26b0;
  fVal_3 = param_2[1] * DAT_1806b26b0;
  fVal_1 = DAT_1806b26b0 * *param_2;
  if (param_1[0x18c] == '\0') {
    param_1[0x18c] = '\x01';
  }
  *(uint *)(param_1 + 0x188) =
       (int)fVal_1 & 0xffU |
       ((int)fVal_3 & 0xffU) << 8 | ((int)fVal_2 & 0xffU) << 0x10 | (int)param_3 << 0x18;
  if (*param_1 != '\0') {
    return;
  }
  func_0x180100560(param_1 + 8,1);
  return;
}

// func_0x180108330
void func_0x180108330(int64_t param_1)
{
  *(uint64_t *)(param_1 + 0x1a4) = 0;
  *(uint32_t *)(param_1 + 0x1ac) = 0;
  return;
}

// func_0x180108350
void func_0x180108350(uint8_t *param_1,int64_t param_2)
{
  int *pInt_1;
  int iVal_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int iVal_5;
  uint64_t uVal_6;
  int64_t *pLong_7;
  bool bFlag_8;
  bool bFlag_9;
  
  lVal_3 = *(int64_t *)(param_1 + 0x290);
  if (lVal_3 == 0) goto LAB_180108480;
  iVal_5 = *(int *)(lVal_3 + 8);
  do {
    if (iVal_5 == 0) goto LAB_180108480;
    LOCK();
    iVal_2 = *(int *)(lVal_3 + 8);
    bFlag_8 = iVal_5 == iVal_2;
    if (bFlag_8) {
      *(int *)(lVal_3 + 8) = iVal_5 + 1;
      iVal_2 = iVal_5;
    }
    iVal_5 = iVal_2;
    UNLOCK();
  } while (!bFlag_8);
  lVal_3 = *(int64_t *)(param_1 + 0x288);
  pLong_7 = *(int64_t **)(param_1 + 0x290);
  if (pLong_7 != (int64_t *)0x0) {
    LOCK();
    pLong_4 = pLong_7 + 1;
    *(int *)pLong_4 = *(int *)pLong_4 + -1;
    UNLOCK();
    if (*(int *)pLong_4 == 0) {
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
  if (lVal_3 == 0) goto LAB_180108480;
  *(uint8_t *)(param_2 + 0x40) = 1;
  *(uint8_t *)(param_2 + 0x41) = param_1[8];
  lVal_3 = *(int64_t *)(param_1 + 0x290);
  bFlag_8 = true;
  if (lVal_3 == 0) {
LAB_18010841d:
    pLong_7 = (int64_t *)0x0;
    uVal_6 = 0;
  }
  else {
    iVal_5 = *(int *)(lVal_3 + 8);
    do {
      if (iVal_5 == 0) goto LAB_18010841d;
      LOCK();
      iVal_2 = *(int *)(lVal_3 + 8);
      bFlag_9 = iVal_5 == iVal_2;
      if (bFlag_9) {
        *(int *)(lVal_3 + 8) = iVal_5 + 1;
        iVal_2 = iVal_5;
      }
      iVal_5 = iVal_2;
      UNLOCK();
    } while (!bFlag_9);
    pLong_7 = *(int64_t **)(param_1 + 0x290);
    if (pLong_7 == (int64_t *)0x0) goto LAB_18010841d;
    uVal_6 = *(uint64_t *)(param_1 + 0x288);
    LOCK();
    *(int *)((int64_t)pLong_7 + 0xc) = *(int *)((int64_t)pLong_7 + 0xc) + 1;
    UNLOCK();
    bFlag_8 = false;
  }
  *(uint64_t *)(param_2 + 0x48) = uVal_6;
  pLong_4 = *(int64_t **)(param_2 + 0x50);
  *(int64_t **)(param_2 + 0x50) = pLong_7;
  if (pLong_4 != (int64_t *)0x0) {
    LOCK();
    pInt_1 = (int *)((int64_t)pLong_4 + 0xc);
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (*pInt_1 == 0) {
      (**(func_ptr_t *)(*pLong_4 + 8))();
    }
  }
  if (!bFlag_8) {
    LOCK();
    pLong_4 = pLong_7 + 1;
    *(int *)pLong_4 = *(int *)pLong_4 + -1;
    UNLOCK();
    if (*(int *)pLong_4 == 0) {
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
  func_0x1801084d0(param_2 + 0x58,param_1 + 8);
LAB_180108480:
  *(uint32_t *)(param_1 + 0x270) = 0;
  param_1[0x22d] = 0;
  param_1[0x278] = 0;
  param_1[0x1a0] = 0;
  func_0x1800ff090(param_1 + 8);
  *param_1 = 0;
  param_1[0x140] = 0;
  param_1[0x18c] = 0;
  param_1[0x16c] = 0;
  return;
}

// func_0x1801084d0
uint16_t * func_0x1801084d0(uint16_t *param_1,uint16_t *param_2)
{
  uint32_t *pU64_1;
  int64_t lVal_2;
  uint32_t *pU64_3;
  uint64_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t *pU64_12;
  uint64_t uVal_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  uint32_t *pU64_16;
  uint32_t *pU64_17;
  int64_t lVal_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  int64_t lVal_21;
  int64_t lVal_22;
  bool bFlag_23;
  
  *param_1 = *param_2;
  if (param_1 == param_2) goto LAB_18010904c;
  func_0x18010b8a0(param_1 + 4,*(int64_t *)(param_2 + 4),
                (*(int64_t *)(param_2 + 8) - *(int64_t *)(param_2 + 4) >> 2) * -0x5555555555555555
               );
  lVal_18 = *(int64_t *)(param_2 + 0x10);
  uVal_19 = *(int64_t *)(param_2 + 0x14) - lVal_18;
  uVal_14 = (int64_t)uVal_19 >> 4;
  lVal_2 = *(int64_t *)(param_1 + 0x10);
  if ((uint64_t)(*(int64_t *)(param_1 + 0x18) - lVal_2) < uVal_19) {
    func_0x18010bc60(param_1 + 0x10,uVal_14);
    uVal_14 = *(uint64_t *)(param_1 + 0x10);
    uVal_13 = uVal_14;
    uVal_20 = uVal_19;
LAB_18010858a:
    func_0x1806aa960(uVal_14,lVal_18,uVal_19);
    lVal_15 = uVal_13 + uVal_20;
  }
  else {
    lVal_22 = *(int64_t *)(param_1 + 0x14) - lVal_2;
    lVal_15 = uVal_14 - (lVal_22 >> 4);
    if ((uint64_t)(lVal_22 >> 4) <= uVal_14 && lVal_15 != 0) {
      func_0x1806aa960(lVal_2,lVal_18,lVal_22);
      lVal_18 = lVal_18 + lVal_22;
      uVal_14 = *(uint64_t *)(param_1 + 0x14);
      uVal_13 = lVal_15 * 0x10;
      uVal_19 = uVal_13;
      uVal_20 = uVal_14;
      goto LAB_18010858a;
    }
    lVal_15 = lVal_2 + uVal_19;
    func_0x1806aa960(lVal_2,lVal_18,uVal_19);
  }
  *(int64_t *)(param_1 + 0x14) = lVal_15;
  lVal_18 = *(int64_t *)(param_2 + 0x1c);
  uVal_19 = *(int64_t *)(param_2 + 0x20) - lVal_18;
  uVal_14 = (int64_t)uVal_19 >> 2;
  lVal_2 = *(int64_t *)(param_1 + 0x1c);
  if ((uint64_t)(*(int64_t *)(param_1 + 0x24) - lVal_2) < uVal_19) {
    func_0x18010bd70(param_1 + 0x1c,uVal_14);
    lVal_21 = *(int64_t *)(param_1 + 0x1c);
    func_0x1806aa960(lVal_21,lVal_18,uVal_19);
    lVal_21 = lVal_21 + uVal_19;
  }
  else {
    lVal_15 = *(int64_t *)(param_1 + 0x20) - lVal_2;
    lVal_22 = uVal_14 - (lVal_15 >> 2);
    if (uVal_14 < (uint64_t)(lVal_15 >> 2) || lVal_22 == 0) {
      lVal_21 = lVal_2 + uVal_19;
      func_0x1806aa960(lVal_2,lVal_18,uVal_19);
    }
    else {
      func_0x1806aa960(lVal_2,lVal_18,lVal_15);
      lVal_21 = *(int64_t *)(param_1 + 0x20);
      func_0x1806aa960(lVal_21,lVal_18 + lVal_15,lVal_22 * 4);
      lVal_21 = lVal_21 + lVal_22 * 4;
    }
  }
  *(int64_t *)(param_1 + 0x20) = lVal_21;
  lVal_18 = *(int64_t *)(param_2 + 0x28);
  uVal_19 = *(int64_t *)(param_2 + 0x2c) - lVal_18;
  uVal_14 = (int64_t)uVal_19 >> 2;
  lVal_2 = *(int64_t *)(param_1 + 0x28);
  if ((uint64_t)(*(int64_t *)(param_1 + 0x30) - lVal_2) < uVal_19) {
    func_0x18010bd70(param_1 + 0x28,uVal_14);
    lVal_21 = *(int64_t *)(param_1 + 0x28);
    func_0x1806aa960(lVal_21,lVal_18,uVal_19);
    lVal_21 = lVal_21 + uVal_19;
  }
  else {
    lVal_15 = *(int64_t *)(param_1 + 0x2c) - lVal_2;
    lVal_22 = uVal_14 - (lVal_15 >> 2);
    if (uVal_14 < (uint64_t)(lVal_15 >> 2) || lVal_22 == 0) {
      lVal_21 = lVal_2 + uVal_19;
      func_0x1806aa960(lVal_2,lVal_18,uVal_19);
    }
    else {
      func_0x1806aa960(lVal_2,lVal_18,lVal_15);
      lVal_21 = *(int64_t *)(param_1 + 0x2c);
      func_0x1806aa960(lVal_21,lVal_18 + lVal_15,lVal_22 * 4);
      lVal_21 = lVal_21 + lVal_22 * 4;
    }
  }
  *(int64_t *)(param_1 + 0x2c) = lVal_21;
  lVal_18 = *(int64_t *)(param_2 + 0x34);
  uVal_19 = *(int64_t *)(param_2 + 0x38) - lVal_18;
  uVal_14 = (int64_t)uVal_19 >> 2;
  lVal_2 = *(int64_t *)(param_1 + 0x34);
  if ((uint64_t)(*(int64_t *)(param_1 + 0x3c) - lVal_2) < uVal_19) {
    func_0x18010bd70(param_1 + 0x34,uVal_14);
    lVal_21 = *(int64_t *)(param_1 + 0x34);
    func_0x1806aa960(lVal_21,lVal_18,uVal_19);
    lVal_21 = lVal_21 + uVal_19;
  }
  else {
    lVal_15 = *(int64_t *)(param_1 + 0x38) - lVal_2;
    lVal_22 = uVal_14 - (lVal_15 >> 2);
    if (uVal_14 < (uint64_t)(lVal_15 >> 2) || lVal_22 == 0) {
      lVal_21 = lVal_2 + uVal_19;
      func_0x1806aa960(lVal_2,lVal_18,uVal_19);
    }
    else {
      func_0x1806aa960(lVal_2,lVal_18,lVal_15);
      lVal_21 = *(int64_t *)(param_1 + 0x38);
      func_0x1806aa960(lVal_21,lVal_18 + lVal_15,lVal_22 * 4);
      lVal_21 = lVal_21 + lVal_22 * 4;
    }
  }
  *(int64_t *)(param_1 + 0x38) = lVal_21;
  lVal_18 = *(int64_t *)(param_2 + 0x40);
  uVal_19 = *(int64_t *)(param_2 + 0x44) - lVal_18;
  uVal_14 = (int64_t)uVal_19 >> 1;
  lVal_2 = *(int64_t *)(param_1 + 0x40);
  if ((uint64_t)(*(int64_t *)(param_1 + 0x48) - lVal_2) < uVal_19) {
    func_0x18010be80(param_1 + 0x40,uVal_14);
    lVal_21 = *(int64_t *)(param_1 + 0x40);
    func_0x1806aa960(lVal_21,lVal_18,uVal_19);
    lVal_21 = lVal_21 + uVal_19;
  }
  else {
    lVal_15 = *(int64_t *)(param_1 + 0x44) - lVal_2;
    lVal_22 = uVal_14 - (lVal_15 >> 1);
    if (uVal_14 < (uint64_t)(lVal_15 >> 1) || lVal_22 == 0) {
      lVal_21 = lVal_2 + uVal_19;
      func_0x1806aa960(lVal_2,lVal_18,uVal_19);
    }
    else {
      func_0x1806aa960(lVal_2,lVal_18,lVal_15);
      lVal_21 = *(int64_t *)(param_1 + 0x44);
      func_0x1806aa960(lVal_21,lVal_18 + lVal_15,lVal_22 * 2);
      lVal_21 = lVal_21 + lVal_22 * 2;
    }
  }
  *(int64_t *)(param_1 + 0x44) = lVal_21;
  pU64_12 = *(uint32_t **)(param_2 + 0x4c);
  pU64_3 = *(uint32_t **)(param_2 + 0x50);
  uVal_14 = (int64_t)pU64_3 - (int64_t)pU64_12;
  uVal_19 = (int64_t)uVal_14 >> 3;
  pU64_17 = *(uint32_t **)(param_1 + 0x4c);
  if ((uint64_t)(*(int64_t *)(param_1 + 0x54) - (int64_t)pU64_17) < uVal_14) {
    func_0x18010bf80(param_1 + 0x4c);
    lVal_18 = *(int64_t *)(param_1 + 0x4c);
    func_0x1806aa960(lVal_18,pU64_12,uVal_14);
    pU64_16 = (uint32_t *)(lVal_18 + uVal_14);
  }
  else {
    pU64_16 = *(uint32_t **)(param_1 + 0x50);
    uVal_13 = (int64_t)pU64_16 - (int64_t)pU64_17 >> 3;
    lVal_18 = uVal_19 - uVal_13;
    if (uVal_19 < uVal_13 || lVal_18 == 0) {
      pU64_16 = (uint32_t *)((int64_t)pU64_17 + uVal_14);
      if (pU64_3 != pU64_12) {
        if ((7 < uVal_19) &&
           (pU64_3 <= pU64_17 || (uint32_t *)(uVal_14 + (int64_t)pU64_17) <= pU64_12)) {
          uVal_14 = uVal_19 & 0xfffffffffffffffc;
          uVal_13 = 0;
          do {
            pU64_3 = pU64_12 + uVal_13 * 2;
            uVal_5 = pU64_3[1];
            uVal_6 = pU64_3[2];
            uVal_7 = pU64_3[3];
            pU64_1 = pU64_12 + uVal_13 * 2 + 4;
            uVal_8 = *pU64_1;
            uVal_9 = pU64_1[1];
            uVal_10 = pU64_1[2];
            uVal_11 = pU64_1[3];
            pU64_1 = pU64_17 + uVal_13 * 2;
            *pU64_1 = *pU64_3;
            pU64_1[1] = uVal_5;
            pU64_1[2] = uVal_6;
            pU64_1[3] = uVal_7;
            pU64_3 = pU64_17 + uVal_13 * 2 + 4;
            *pU64_3 = uVal_8;
            pU64_3[1] = uVal_9;
            pU64_3[2] = uVal_10;
            pU64_3[3] = uVal_11;
            uVal_13 = uVal_13 + 4;
          } while (uVal_14 != uVal_13);
          bFlag_23 = uVal_19 == uVal_14;
          pU64_12 = pU64_12 + uVal_14 * 2;
          uVal_19 = (uint64_t)((uint)uVal_19 & 3);
          pU64_17 = pU64_17 + uVal_14 * 2;
          if (bFlag_23) goto LAB_180108a18;
        }
        uVal_14 = uVal_19 - 1;
        if ((uVal_19 & 3) != 0) {
          uVal_13 = 0;
          do {
            *pU64_17 = *pU64_12;
            pU64_17[1] = pU64_12[1];
            pU64_17 = pU64_17 + 2;
            pU64_12 = pU64_12 + 2;
            uVal_13 = uVal_13 + 1;
          } while ((uVal_19 & 3) != uVal_13);
          uVal_19 = uVal_19 - uVal_13;
        }
        if (2 < uVal_14) {
          uVal_14 = 0;
          do {
            pU64_17[uVal_14 * 2] = pU64_12[uVal_14 * 2];
            pU64_17[uVal_14 * 2 + 1] = pU64_12[uVal_14 * 2 + 1];
            pU64_17[uVal_14 * 2 + 2] = pU64_12[uVal_14 * 2 + 2];
            pU64_17[uVal_14 * 2 + 3] = pU64_12[uVal_14 * 2 + 3];
            pU64_17[uVal_14 * 2 + 4] = pU64_12[uVal_14 * 2 + 4];
            pU64_17[uVal_14 * 2 + 5] = pU64_12[uVal_14 * 2 + 5];
            pU64_17[uVal_14 * 2 + 6] = pU64_12[uVal_14 * 2 + 6];
            pU64_17[uVal_14 * 2 + 7] = pU64_12[uVal_14 * 2 + 7];
            uVal_14 = uVal_14 + 4;
          } while (uVal_19 != uVal_14);
        }
      }
    }
    else {
      if (pU64_17 != pU64_16) {
        do {
          *pU64_17 = *pU64_12;
          pU64_17[1] = pU64_12[1];
          pU64_17 = pU64_17 + 2;
          pU64_12 = pU64_12 + 2;
          pU64_16 = *(uint32_t **)(param_1 + 0x50);
        } while (pU64_17 != pU64_16);
      }
      func_0x1806aa960(pU64_16,pU64_12,lVal_18 * 8);
      pU64_16 = pU64_16 + lVal_18 * 2;
    }
  }
LAB_180108a18:
  *(uint32_t **)(param_1 + 0x50) = pU64_16;
  pU64_12 = *(uint32_t **)(param_2 + 0x58);
  pU64_3 = *(uint32_t **)(param_2 + 0x5c);
  uVal_14 = (int64_t)pU64_3 - (int64_t)pU64_12;
  uVal_19 = (int64_t)uVal_14 >> 3;
  pU64_17 = *(uint32_t **)(param_1 + 0x58);
  if ((uint64_t)(*(int64_t *)(param_1 + 0x60) - (int64_t)pU64_17) < uVal_14) {
    func_0x18010bf80(param_1 + 0x58);
    lVal_18 = *(int64_t *)(param_1 + 0x58);
    func_0x1806aa960(lVal_18,pU64_12,uVal_14);
    pU64_16 = (uint32_t *)(lVal_18 + uVal_14);
  }
  else {
    pU64_16 = *(uint32_t **)(param_1 + 0x5c);
    uVal_13 = (int64_t)pU64_16 - (int64_t)pU64_17 >> 3;
    lVal_18 = uVal_19 - uVal_13;
    if (uVal_19 < uVal_13 || lVal_18 == 0) {
      pU64_16 = (uint32_t *)((int64_t)pU64_17 + uVal_14);
      if (pU64_3 != pU64_12) {
        if ((7 < uVal_19) &&
           (pU64_3 <= pU64_17 || (uint32_t *)(uVal_14 + (int64_t)pU64_17) <= pU64_12)) {
          uVal_14 = uVal_19 & 0xfffffffffffffffc;
          uVal_13 = 0;
          do {
            pU64_3 = pU64_12 + uVal_13 * 2;
            uVal_5 = pU64_3[1];
            uVal_6 = pU64_3[2];
            uVal_7 = pU64_3[3];
            pU64_1 = pU64_12 + uVal_13 * 2 + 4;
            uVal_8 = *pU64_1;
            uVal_9 = pU64_1[1];
            uVal_10 = pU64_1[2];
            uVal_11 = pU64_1[3];
            pU64_1 = pU64_17 + uVal_13 * 2;
            *pU64_1 = *pU64_3;
            pU64_1[1] = uVal_5;
            pU64_1[2] = uVal_6;
            pU64_1[3] = uVal_7;
            pU64_3 = pU64_17 + uVal_13 * 2 + 4;
            *pU64_3 = uVal_8;
            pU64_3[1] = uVal_9;
            pU64_3[2] = uVal_10;
            pU64_3[3] = uVal_11;
            uVal_13 = uVal_13 + 4;
          } while (uVal_14 != uVal_13);
          bFlag_23 = uVal_19 == uVal_14;
          pU64_12 = pU64_12 + uVal_14 * 2;
          uVal_19 = (uint64_t)((uint)uVal_19 & 3);
          pU64_17 = pU64_17 + uVal_14 * 2;
          if (bFlag_23) goto LAB_180108c28;
        }
        uVal_14 = uVal_19 - 1;
        if ((uVal_19 & 3) != 0) {
          uVal_13 = 0;
          do {
            *pU64_17 = *pU64_12;
            pU64_17[1] = pU64_12[1];
            pU64_17 = pU64_17 + 2;
            pU64_12 = pU64_12 + 2;
            uVal_13 = uVal_13 + 1;
          } while ((uVal_19 & 3) != uVal_13);
          uVal_19 = uVal_19 - uVal_13;
        }
        if (2 < uVal_14) {
          uVal_14 = 0;
          do {
            pU64_17[uVal_14 * 2] = pU64_12[uVal_14 * 2];
            pU64_17[uVal_14 * 2 + 1] = pU64_12[uVal_14 * 2 + 1];
            pU64_17[uVal_14 * 2 + 2] = pU64_12[uVal_14 * 2 + 2];
            pU64_17[uVal_14 * 2 + 3] = pU64_12[uVal_14 * 2 + 3];
            pU64_17[uVal_14 * 2 + 4] = pU64_12[uVal_14 * 2 + 4];
            pU64_17[uVal_14 * 2 + 5] = pU64_12[uVal_14 * 2 + 5];
            pU64_17[uVal_14 * 2 + 6] = pU64_12[uVal_14 * 2 + 6];
            pU64_17[uVal_14 * 2 + 7] = pU64_12[uVal_14 * 2 + 7];
            uVal_14 = uVal_14 + 4;
          } while (uVal_19 != uVal_14);
        }
      }
    }
    else {
      if (pU64_17 != pU64_16) {
        do {
          *pU64_17 = *pU64_12;
          pU64_17[1] = pU64_12[1];
          pU64_17 = pU64_17 + 2;
          pU64_12 = pU64_12 + 2;
          pU64_16 = *(uint32_t **)(param_1 + 0x5c);
        } while (pU64_17 != pU64_16);
      }
      func_0x1806aa960(pU64_16,pU64_12,lVal_18 * 8);
      pU64_16 = pU64_16 + lVal_18 * 2;
    }
  }
LAB_180108c28:
  *(uint32_t **)(param_1 + 0x5c) = pU64_16;
  pU64_12 = *(uint32_t **)(param_2 + 100);
  pU64_3 = *(uint32_t **)(param_2 + 0x68);
  uVal_14 = (int64_t)pU64_3 - (int64_t)pU64_12;
  uVal_19 = (int64_t)uVal_14 >> 3;
  pU64_17 = *(uint32_t **)(param_1 + 100);
  if ((uint64_t)(*(int64_t *)(param_1 + 0x6c) - (int64_t)pU64_17) < uVal_14) {
    func_0x18010bf80(param_1 + 100);
    lVal_18 = *(int64_t *)(param_1 + 100);
    func_0x1806aa960(lVal_18,pU64_12,uVal_14);
    pU64_16 = (uint32_t *)(lVal_18 + uVal_14);
  }
  else {
    pU64_16 = *(uint32_t **)(param_1 + 0x68);
    uVal_13 = (int64_t)pU64_16 - (int64_t)pU64_17 >> 3;
    lVal_18 = uVal_19 - uVal_13;
    if (uVal_19 < uVal_13 || lVal_18 == 0) {
      pU64_16 = (uint32_t *)((int64_t)pU64_17 + uVal_14);
      if (pU64_3 != pU64_12) {
        if ((7 < uVal_19) &&
           (pU64_3 <= pU64_17 || (uint32_t *)(uVal_14 + (int64_t)pU64_17) <= pU64_12)) {
          uVal_14 = uVal_19 & 0xfffffffffffffffc;
          uVal_13 = 0;
          do {
            pU64_3 = pU64_12 + uVal_13 * 2;
            uVal_5 = pU64_3[1];
            uVal_6 = pU64_3[2];
            uVal_7 = pU64_3[3];
            pU64_1 = pU64_12 + uVal_13 * 2 + 4;
            uVal_8 = *pU64_1;
            uVal_9 = pU64_1[1];
            uVal_10 = pU64_1[2];
            uVal_11 = pU64_1[3];
            pU64_1 = pU64_17 + uVal_13 * 2;
            *pU64_1 = *pU64_3;
            pU64_1[1] = uVal_5;
            pU64_1[2] = uVal_6;
            pU64_1[3] = uVal_7;
            pU64_3 = pU64_17 + uVal_13 * 2 + 4;
            *pU64_3 = uVal_8;
            pU64_3[1] = uVal_9;
            pU64_3[2] = uVal_10;
            pU64_3[3] = uVal_11;
            uVal_13 = uVal_13 + 4;
          } while (uVal_14 != uVal_13);
          bFlag_23 = uVal_19 == uVal_14;
          pU64_12 = pU64_12 + uVal_14 * 2;
          uVal_19 = (uint64_t)((uint)uVal_19 & 3);
          pU64_17 = pU64_17 + uVal_14 * 2;
          if (bFlag_23) goto LAB_180108e38;
        }
        uVal_14 = uVal_19 - 1;
        if ((uVal_19 & 3) != 0) {
          uVal_13 = 0;
          do {
            *pU64_17 = *pU64_12;
            pU64_17[1] = pU64_12[1];
            pU64_17 = pU64_17 + 2;
            pU64_12 = pU64_12 + 2;
            uVal_13 = uVal_13 + 1;
          } while ((uVal_19 & 3) != uVal_13);
          uVal_19 = uVal_19 - uVal_13;
        }
        if (2 < uVal_14) {
          uVal_14 = 0;
          do {
            pU64_17[uVal_14 * 2] = pU64_12[uVal_14 * 2];
            pU64_17[uVal_14 * 2 + 1] = pU64_12[uVal_14 * 2 + 1];
            pU64_17[uVal_14 * 2 + 2] = pU64_12[uVal_14 * 2 + 2];
            pU64_17[uVal_14 * 2 + 3] = pU64_12[uVal_14 * 2 + 3];
            pU64_17[uVal_14 * 2 + 4] = pU64_12[uVal_14 * 2 + 4];
            pU64_17[uVal_14 * 2 + 5] = pU64_12[uVal_14 * 2 + 5];
            pU64_17[uVal_14 * 2 + 6] = pU64_12[uVal_14 * 2 + 6];
            pU64_17[uVal_14 * 2 + 7] = pU64_12[uVal_14 * 2 + 7];
            uVal_14 = uVal_14 + 4;
          } while (uVal_19 != uVal_14);
        }
      }
    }
    else {
      if (pU64_17 != pU64_16) {
        do {
          *pU64_17 = *pU64_12;
          pU64_17[1] = pU64_12[1];
          pU64_17 = pU64_17 + 2;
          pU64_12 = pU64_12 + 2;
          pU64_16 = *(uint32_t **)(param_1 + 0x68);
        } while (pU64_17 != pU64_16);
      }
      func_0x1806aa960(pU64_16,pU64_12,lVal_18 * 8);
      pU64_16 = pU64_16 + lVal_18 * 2;
    }
  }
LAB_180108e38:
  *(uint32_t **)(param_1 + 0x68) = pU64_16;
  lVal_18 = *(int64_t *)(param_2 + 0x70);
  uVal_19 = *(int64_t *)(param_2 + 0x74) - lVal_18;
  uVal_14 = (int64_t)uVal_19 >> 1;
  lVal_2 = *(int64_t *)(param_1 + 0x70);
  if ((uint64_t)(*(int64_t *)(param_1 + 0x78) - lVal_2) < uVal_19) {
    func_0x18010be80(param_1 + 0x70,uVal_14);
    lVal_21 = *(int64_t *)(param_1 + 0x70);
    func_0x1806aa960(lVal_21,lVal_18,uVal_19);
    lVal_21 = lVal_21 + uVal_19;
  }
  else {
    lVal_15 = *(int64_t *)(param_1 + 0x74) - lVal_2;
    lVal_22 = uVal_14 - (lVal_15 >> 1);
    if (uVal_14 < (uint64_t)(lVal_15 >> 1) || lVal_22 == 0) {
      lVal_21 = lVal_2 + uVal_19;
      func_0x1806aa960(lVal_2,lVal_18,uVal_19);
    }
    else {
      func_0x1806aa960(lVal_2,lVal_18,lVal_15);
      lVal_21 = *(int64_t *)(param_1 + 0x74);
      func_0x1806aa960(lVal_21,lVal_18 + lVal_15,lVal_22 * 2);
      lVal_21 = lVal_21 + lVal_22 * 2;
    }
  }
  *(int64_t *)(param_1 + 0x74) = lVal_21;
  lVal_18 = *(int64_t *)(param_2 + 0x7c);
  uVal_19 = *(int64_t *)(param_2 + 0x80) - lVal_18;
  uVal_14 = (int64_t)uVal_19 >> 2;
  lVal_2 = *(int64_t *)(param_1 + 0x7c);
  if ((uint64_t)(*(int64_t *)(param_1 + 0x84) - lVal_2) < uVal_19) {
    func_0x18010bd70(param_1 + 0x7c,uVal_14);
    lVal_21 = *(int64_t *)(param_1 + 0x7c);
    func_0x1806aa960(lVal_21,lVal_18,uVal_19);
    lVal_21 = lVal_21 + uVal_19;
  }
  else {
    lVal_15 = *(int64_t *)(param_1 + 0x80) - lVal_2;
    lVal_22 = uVal_14 - (lVal_15 >> 2);
    if (uVal_14 < (uint64_t)(lVal_15 >> 2) || lVal_22 == 0) {
      lVal_21 = lVal_2 + uVal_19;
      func_0x1806aa960(lVal_2,lVal_18,uVal_19);
    }
    else {
      func_0x1806aa960(lVal_2,lVal_18,lVal_15);
      lVal_21 = *(int64_t *)(param_1 + 0x80);
      func_0x1806aa960(lVal_21,lVal_18 + lVal_15,lVal_22 * 4);
      lVal_21 = lVal_21 + lVal_22 * 4;
    }
  }
  *(int64_t *)(param_1 + 0x80) = lVal_21;
  lVal_18 = *(int64_t *)(param_2 + 0x88);
  uVal_19 = *(int64_t *)(param_2 + 0x8c) - lVal_18;
  uVal_14 = (int64_t)uVal_19 >> 2;
  lVal_2 = *(int64_t *)(param_1 + 0x88);
  if ((uint64_t)(*(int64_t *)(param_1 + 0x90) - lVal_2) < uVal_19) {
    func_0x18010bd70(param_1 + 0x88,uVal_14);
    lVal_21 = *(int64_t *)(param_1 + 0x88);
    func_0x1806aa960(lVal_21,lVal_18,uVal_19);
    lVal_21 = lVal_21 + uVal_19;
  }
  else {
    lVal_15 = *(int64_t *)(param_1 + 0x8c) - lVal_2;
    lVal_22 = uVal_14 - (lVal_15 >> 2);
    if (uVal_14 < (uint64_t)(lVal_15 >> 2) || lVal_22 == 0) {
      lVal_21 = lVal_2 + uVal_19;
      func_0x1806aa960(lVal_2,lVal_18,uVal_19);
    }
    else {
      func_0x1806aa960(lVal_2,lVal_18,lVal_15);
      lVal_21 = *(int64_t *)(param_1 + 0x8c);
      func_0x1806aa960(lVal_21,lVal_18 + lVal_15,lVal_22 * 4);
      lVal_21 = lVal_21 + lVal_22 * 4;
    }
  }
  *(int64_t *)(param_1 + 0x8c) = lVal_21;
LAB_18010904c:
  uVal_4 = *(uint64_t *)(param_2 + 0x94);
  *(uint64_t *)(param_1 + 0x97) = *(uint64_t *)(param_2 + 0x97);
  *(uint64_t *)(param_1 + 0x94) = uVal_4;
  return param_1;
}

// func_0x180109090
int64_t func_0x180109090(int64_t param_1)
{
  return param_1 + 0x10;
}

// func_0x1801090f0
int64_t func_0x1801090f0(int64_t param_1)
{
  return param_1 + 0x20;
}

// func_0x180109150
int64_t func_0x180109150(int64_t param_1)
{
  return param_1 + 0x48;
}

// func_0x1801091b0
uint8_t (*func_0x1801091b0(int64_t param_1,uint8_t (*param_2)[16]))[16]
{
  int64_t lVal_1;
  
  *param_2 = ZEXT816(0);
  lVal_1 = *(int64_t *)(param_1 + 0x90);
  if (lVal_1 != 0) {
    *(uint64_t *)*param_2 = *(uint64_t *)(param_1 + 0x88);
    *(int64_t *)(*param_2 + 8) = lVal_1;
    LOCK();
    *(int *)(lVal_1 + 0xc) = *(int *)(lVal_1 + 0xc) + 1;
    UNLOCK();
  }
  return param_2;
}

// func_0x180109230
int64_t func_0x180109230(int64_t param_1)
{
  return param_1 + 0x98;
}

// func_0x180109290
int64_t func_0x180109290(int64_t param_1)
{
  return param_1 + 0xb8;
}

// func_0x1801092f0
uint64_t func_0x1801092f0(int64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  int64_t *pLong_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint64_t *pU64_5;
  
  uVal_4 = SUB168(ZEXT816(0x1866688d0e6204bc) * ZEXT816(0x7d1ea7a89349a803),0);
  pU64_5 = *(uint64_t **)(param_1 + 0x98);
  pU64_1 = *(uint64_t **)(param_1 + 0xa0);
  while( true ) {
    if (pU64_5 == pU64_1) {
      return uVal_4;
    }
    pLong_2 = *(int64_t **)(param_2 + 0x38);
    if (pLong_2 == (int64_t *)0x0) break;
    (**(func_ptr_t *)(*pLong_2 + 0x10))(pLong_2,pU64_5);
    uVal_4 = func_0x1801092f0(*pU64_5,param_2);
    pU64_5 = pU64_5 + 2;
  }
  func_0x180674610();
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x1801093a0
int64_t func_0x1801093a0(int64_t param_1,uint64_t *param_2)
{
  size_t _Size;
  int64_t *pLong_1;
  int iVal_2;
  int64_t lVal_3;
  void *_Buf1;
  uint64_t *_Buf2;
  int64_t *pLong_4;
  
  _Buf2 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    _Buf2 = (uint64_t *)*param_2;
  }
  _Size = param_2[2];
  if (*(uint64_t *)(param_1 + 0x38) < 0x10) {
    _Buf1 = (void *)(param_1 + 0x20);
  }
  else {
    _Buf1 = *(void **)(param_1 + 0x20);
  }
  if ((*(size_t *)(param_1 + 0x30) != _Size) ||
     ((_Size != 0 && (iVal_2 = memcmp(_Buf1,_Buf2,_Size), iVal_2 != 0)))) {
    pLong_1 = *(int64_t **)(param_1 + 0xa0);
    for (pLong_4 = *(int64_t **)(param_1 + 0x98); pLong_4 != pLong_1; pLong_4 = pLong_4 + 2) {
      lVal_3 = *pLong_4;
      if (lVal_3 != 0) {
        if (((*(uint64_t *)(lVal_3 + 0x98) <= *(uint64_t *)(lVal_3 + 0xa0)) &&
            (((int)*(uint64_t *)(lVal_3 + 0xa0) - (int)*(uint64_t *)(lVal_3 + 0x98) & 0xfU) == 0))
           && (lVal_3 = func_0x1801093a0(*pLong_4,param_2), lVal_3 != 0)) {
          return lVal_3;
        }
      }
    }
    param_1 = 0;
  }
  return param_1;
}

// func_0x180109540
uint64_t func_0x180109540(int64_t param_1)
{
  int *pInt_1;
  int iVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  int iVal_5;
  bool bFlag_6;
  float fVal_7;
  float fVal_8;
  int64_t local_78;
  int64_t *plStack_70;
  
  pLong_3 = *(int64_t **)(param_1 + 0x90);
  if (pLong_3 == (int64_t *)0x0) {
    fVal_7 = 0.0;
    fVal_8 = 0.0;
  }
  else {
    lVal_4 = *(int64_t *)(param_1 + 0x88);
    LOCK();
    *(int *)((int64_t)pLong_3 + 0xc) = *(int *)((int64_t)pLong_3 + 0xc) + 1;
    UNLOCK();
    pInt_1 = (int *)((int64_t)pLong_3 + 0xc);
    iVal_5 = *(int *)(pLong_3 + 1);
    do {
      local_78 = 0;
      plStack_70 = (int64_t *)0x0;
      if (iVal_5 == 0) break;
      LOCK();
      iVal_2 = *(int *)(pLong_3 + 1);
      bFlag_6 = iVal_5 == iVal_2;
      if (bFlag_6) {
        *(int *)(pLong_3 + 1) = iVal_5 + 1;
        iVal_2 = iVal_5;
      }
      iVal_5 = iVal_2;
      UNLOCK();
      local_78 = lVal_4;
      plStack_70 = pLong_3;
    } while (!bFlag_6);
    LOCK();
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (*pInt_1 == 0) {
      (**(func_ptr_t *)(*pLong_3 + 8))();
    }
    if (local_78 == 0) {
      fVal_7 = 0.0;
      fVal_8 = 0.0;
    }
    else {
      if ((*(byte *)(local_78 + 0x18) & 1) != 0) {
        func_0x180109540(local_78);
      }
      fVal_7 = (float)*(uint64_t *)(local_78 + 0x10);
      fVal_8 = (float)((uint64_t)*(uint64_t *)(local_78 + 0x10) >> 0x20);
    }
    if (plStack_70 != (int64_t *)0x0) {
      LOCK();
      pLong_3 = plStack_70 + 1;
      *(int *)pLong_3 = *(int *)pLong_3 + -1;
      UNLOCK();
      if (*(int *)pLong_3 == 0) {
        (**(func_ptr_t *)*plStack_70)(plStack_70);
        LOCK();
        pInt_1 = (int *)((int64_t)plStack_70 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*plStack_70 + 8))(plStack_70);
        }
      }
    }
  }
  *(uint64_t *)(param_1 + 0x10) =
       CONCAT44(fVal_8 + (float)((uint64_t)*(uint64_t *)(param_1 + 0x40) >> 0x20),
                fVal_7 + (float)*(uint64_t *)(param_1 + 0x40));
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  return SUB168(ZEXT816(0x189fad404f4d0b2f) * ZEXT816(0x1f481655e8eb0cb5),0);
}

// Unwind@180109810
void Unwind_180109810(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x30);
  return;
}

// func_0x180109850
uint64_t func_0x180109850(int64_t param_1,uint64_t param_2)
{
  return CONCAT71(SUB167(ZEXT816(0x18ac4ef5d2d7b3df) * ZEXT816(0xfa3cfbd49521949d),1),
                  (*(uint64_t *)(param_1 + 0xb0) & param_2) != 0);
}

// func_0x1801098b0
bool func_0x1801098b0(int64_t *param_1)
{
  return (int64_t *)*param_1 == param_1;
}

// func_0x1801098c0
uint64_t func_0x1801098c0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x3c8);
}

// func_0x180109920
int64_t func_0x180109920(int64_t param_1)
{
  return param_1 + 0x3d8;
}

// func_0x180109980
void func_0x180109980(int64_t *param_1,uint64_t param_2)
{
                    /* WARNING: Could not recover jumptable at 0x0001801099e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x40))(param_1,param_2,0x186d92bca7cd6eba);
  return;
}

// func_0x1801099f0
void func_0x1801099f0(int64_t *param_1,uint64_t param_2,uint64_t param_3)
{
                    /* WARNING: Could not recover jumptable at 0x000180109a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x268))(param_1,param_2,param_3,0x186de8279d17d11b);
  return;
}

// func_0x180109a60
uint8_t (*func_0x180109a60(uint8_t (*param_1)[16],uint64_t param_2,uint64_t param_3))[16]
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f228) {
    func_0x180672ec0(&DAT_18083f228);
    if (DAT_18083f228 == -1) {
      DAT_18083f220 = (func_ptr_t )func_0x180109b60(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f228);
    }
  }
  *param_1 = ZEXT816(0);
  (*DAT_18083f220)(param_1,param_2,param_3);
  return param_1;
}

// Unwind@180109b00
void Unwind_180109b00(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@180109b30
void Unwind_180109b30(void)
{
  func_0x180672f60(&DAT_18083f228);
  return;
}

// func_0x180109b60
int64_t func_0x180109b60(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xe9a3e54909f6ee8) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x30f9ee85b0ae7d36) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180109c04;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x30f9ee85b0ae7d36);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180109c2a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x30f9ee85b0ae7d36);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffff805793b3U) + -0x2a;
  }
LAB_180109c04:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180109c2a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180109c40
int64_t func_0x180109c40(int64_t param_1)
{
  return param_1 + 0x2c4;
}

// func_0x180109ca0
int64_t func_0x180109ca0(int64_t param_1)
{
  return param_1 + 0x2c8;
}

// func_0x180109d00
int64_t func_0x180109d00(int64_t param_1)
{
  return param_1 + 0x2cc;
}

// func_0x180109d60
int64_t func_0x180109d60(int64_t param_1)
{
  return param_1 + 0x2d0;
}

// func_0x180109dc0
int64_t func_0x180109dc0(int64_t param_1)
{
  return param_1 + 0x2aa0;
}

// func_0x180109e20
uint64_t func_0x180109e20(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x78);
}

// func_0x180109e80
uint64_t * func_0x180109e80(uint64_t *param_1,uint64_t *param_2)
{
  char ch_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t *pU64_5;
  
  if ((*(char *)((int64_t)param_1 + 6) < '\0') && ((*param_1 & 0xff00ffffffffffff) != 8)) {
    thunk_FUN_180695dd0();
  }
  *param_1 = 0;
  uVal_4 = *param_2;
  uVal_2 = uVal_4 & 0xff00ffffffffffff;
  ch_1 = (char)(uVal_4 >> 0x30);
  if (ch_1 < '\0') {
    uVal_3 = *(uint64_t *)(uVal_2 - 8);
  }
  else {
    uVal_3 = (uint64_t)((ushort)(uVal_4 >> 0x30) & 0x7f);
  }
  if ((uVal_2 == 0) || ((-1 < ch_1 && (uVal_3 < 0x80)))) {
    uVal_4 = (uint64_t)((uint)uVal_3 & 0x7f) << 0x30 | uVal_4;
  }
  else {
    uVal_4 = _malloc_base(uVal_3 + (uVal_3 == 0xfffffffffffffff7) + 0x18);
    pU64_5 = (uint64_t *)(uVal_4 + 0xf & 0xfffffffffffffff8);
    pU64_5[-1] = uVal_4;
    *pU64_5 = uVal_3;
    func_0x1806aa960(pU64_5 + 1,uVal_2,uVal_3);
    *(uint8_t *)(uVal_3 + 8 + (int64_t)pU64_5) = 0;
    uVal_4 = (uint64_t)(pU64_5 + 1) & 0xff00fffffffffff8 | 0x80000000000000;
  }
  *param_1 = uVal_4;
  return param_1;
}

// func_0x180109f70
uint64_t func_0x180109f70(int64_t param_1)
{
  uint64_t uVal_1;
  
  if (*(char *)(param_1 + 0xbc) == '\x01') {
    uVal_1 = (**(func_ptr_t *)(**(int64_t **)(param_1 + 0x78) + 0x40))(*(int64_t **)(param_1 + 0x78));
    *(uint8_t *)(param_1 + 0xbc) = 0;
    return uVal_1;
  }
  return 0;
}

// func_0x180109fb0
uint64_t func_0x180109fb0(int64_t param_1)
{
  uint64_t uVal_1;
  
  if (*(char *)(param_1 + 100) == '\x01') {
    uVal_1 = (**(func_ptr_t *)(**(int64_t **)(param_1 + 0x18) + 0x40))(*(int64_t **)(param_1 + 0x18));
    *(uint8_t *)(param_1 + 100) = 0;
    return uVal_1;
  }
  return 0;
}

// func_0x180109fe0
int64_t func_0x180109fe0(int64_t param_1)
{
  return param_1 + 0x60;
}

// func_0x18010a040
uint32_t func_0x18010a040(int64_t param_1)
{
  return *(uint32_t *)(param_1 + 0xc4);
}

// func_0x18010a0a0
uint64_t func_0x18010a0a0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x228);
}

// func_0x18010a100
int64_t func_0x18010a100(int64_t param_1)
{
  return param_1 + 0x238;
}

// func_0x18010a160
int64_t func_0x18010a160(int64_t param_1)
{
  return param_1 + 0x23c;
}

// func_0x18010a1c0
uint16_t func_0x18010a1c0(int64_t param_1)
{
  return *(uint16_t *)(param_1 + 0x244);
}

// func_0x18010a220
uint64_t func_0x18010a220(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x246);
}

// func_0x18010a280
uint64_t func_0x18010a280(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x350);
}

// func_0x18010a2e0
int64_t func_0x18010a2e0(int64_t param_1)
{
  return param_1 + 0xd3dc;
}

// func_0x18010a340
uint64_t func_0x18010a340(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x1fa968);
}

// func_0x18010a670
uint32_t * func_0x18010a670(uint32_t *param_1,uint32_t *param_2)
{
  func_ptr_t fnPtr_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint32_t *pU64_8;
  uint64_t uVal_9;
  
  uVal_2 = param_2[1];
  uVal_3 = param_2[2];
  uVal_4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVal_2;
  param_1[2] = uVal_3;
  param_1[3] = uVal_4;
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint64_t *)(param_1 + 8) = 0;
  func_0x18010a8f0(param_1 + 4,
                (*(int64_t *)(param_2 + 6) - *(int64_t *)(param_2 + 4) >> 3) * 0x2e8ba2e8ba2e8ba3,
                param_2 + 4,param_2 + 6);
  *(uint8_t (*)[16])(param_1 + 10) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0xe) = 0;
  uVal_9 = *(int64_t *)(param_2 + 0xc) - *(int64_t *)(param_2 + 10);
  if (uVal_9 != 0) {
    uVal_5 = *(int64_t *)(param_2 + 0xc) - *(int64_t *)(param_2 + 10) >> 6;
    if (uVal_5 >> 0x3a != 0) {
      func_0x18007c0d0();
      fnPtr_1 = (func_ptr_t )swi(3);
      pU64_8 = (uint32_t *)(*fnPtr_1)();
      return pU64_8;
    }
    if (uVal_5 < 0x40) {
      uVal_5 = func_0x180672de0(uVal_9);
    }
    else {
      lVal_6 = func_0x180672de0(uVal_9 | 0x27);
      uVal_5 = lVal_6 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_5 - 8) = lVal_6;
    }
    *(uint64_t *)(param_1 + 10) = uVal_5;
    *(uint64_t *)(param_1 + 0xc) = uVal_5;
    *(uint64_t *)(param_1 + 0xe) = uVal_9 + uVal_5;
    uVal_7 = func_0x18010ad60(*(uint64_t *)(param_2 + 10),*(uint64_t *)(param_2 + 0xc),uVal_5);
    *(uint64_t *)(param_1 + 0xc) = uVal_7;
  }
  return param_1;
}

// Unwind@18010a780
void Unwind_18010a780(uint64_t param_1,int64_t param_2)
{
  func_0x18010a800(*(uint64_t *)(param_2 + 0x30));
  return;
}

// Unwind@18010a7c0
void Unwind_18010a7c0(uint64_t param_1,int64_t param_2)
{
  func_0x18010af60(param_2 + 0x28);
  return;
}

// func_0x18010a800
void func_0x18010a800(uint8_t (*param_1)[16])
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  lVal_6 = *(int64_t *)*param_1;
  if (lVal_6 != 0) {
    lVal_1 = *(int64_t *)(*param_1 + 8);
    if (lVal_6 == lVal_1) {
      uVal_5 = *(int64_t *)param_1[1] - lVal_6;
    }
    else {
      do {
        if (*(char *)(lVal_6 + 0x50) == '\x01') {
          uVal_5 = *(uint64_t *)(lVal_6 + 0x38);
          if (0xf < uVal_5) {
            lVal_2 = *(int64_t *)(lVal_6 + 0x20);
            uVal_3 = uVal_5 + 1;
            lVal_4 = lVal_2;
            if (0xfff < uVal_3) {
              lVal_4 = *(int64_t *)(lVal_2 + -8);
              if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18010a8e9;
              uVal_3 = uVal_5 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_4,uVal_3);
          }
          *(uint64_t *)(lVal_6 + 0x30) = 0;
          *(uint64_t *)(lVal_6 + 0x38) = 0xf;
          *(uint8_t *)(lVal_6 + 0x20) = 0;
        }
        lVal_6 = lVal_6 + 0x58;
      } while (lVal_6 != lVal_1);
      lVal_6 = *(int64_t *)*param_1;
      uVal_5 = *(int64_t *)param_1[1] - lVal_6;
    }
    if (0xfff < uVal_5) {
      if (0x1f < (uint64_t)((lVal_6 + -8) - *(int64_t *)(lVal_6 + -8))) {
LAB_18010a8e9:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
      lVal_6 = *(int64_t *)(lVal_6 + -8);
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// func_0x18010a8f0
void func_0x18010a8f0(uint64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4)
{
  uint32_t *pU64_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  int64_t lVal_10;
  uint32_t *pU64_11;
  uint32_t *pU64_12;
  uint64_t *local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (0x2e8ba2e8ba2e8ba < param_2) {
      func_0x18007c0d0();
LAB_18010a9f5:
      func_0x18007ba90();
      fnPtr_2 = (func_ptr_t )swi(3);
      (*fnPtr_2)();
      return;
    }
    if (param_2 < 0x2f) {
      pU64_12 = (uint32_t *)func_0x180672de0(param_2 * 0x58);
    }
    else {
      if (param_2 == 0x2e8ba2e8ba2e8ba) goto LAB_18010a9f5;
      lVal_10 = func_0x180672de0(param_2 * 0x58 + 0x27);
      pU64_12 = (uint32_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_12 + -2) = lVal_10;
    }
    *param_1 = pU64_12;
    param_1[1] = pU64_12;
    param_1[2] = pU64_12 + param_2 * 0x16;
    pU64_1 = (uint32_t *)*param_4;
    local_40 = param_1;
    for (pU64_11 = (uint32_t *)*param_3; pU64_11 != pU64_1; pU64_11 = pU64_11 + 0x16) {
      uVal_3 = *pU64_11;
      uVal_4 = pU64_11[1];
      uVal_5 = pU64_11[2];
      uVal_6 = pU64_11[3];
      uVal_7 = pU64_11[5];
      uVal_8 = pU64_11[6];
      uVal_9 = pU64_11[7];
      pU64_12[4] = pU64_11[4];
      pU64_12[5] = uVal_7;
      pU64_12[6] = uVal_8;
      pU64_12[7] = uVal_9;
      *pU64_12 = uVal_3;
      pU64_12[1] = uVal_4;
      pU64_12[2] = uVal_5;
      pU64_12[3] = uVal_6;
      func_0x18010abc0(pU64_12 + 8,pU64_11 + 8);
      pU64_12 = pU64_12 + 0x16;
    }
    param_1[1] = pU64_12;
    local_40 = (uint64_t *)0x0;
    func_0x18010aa40(&local_40);
  }
  return;
}

// Unwind@18010aa00
void Unwind_18010aa00(uint64_t param_1,int64_t param_2)
{
  func_0x18010ab40(param_2 + 0x20);
  func_0x18010aa40(param_2 + 0x38);
  return;
}

// func_0x18010aa40
void func_0x18010aa40(uint8_t (**param_1)[16])
{
  uint8_t (*pArr16_1)[16];
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  
  pArr16_1 = *param_1;
  if ((pArr16_1 != (uint8_t (*)[16])0x0) && (lVal_7 = *(int64_t *)*pArr16_1, lVal_7 != 0)) {
    lVal_2 = *(int64_t *)(*pArr16_1 + 8);
    if (lVal_7 == lVal_2) {
      uVal_6 = *(int64_t *)pArr16_1[1] - lVal_7;
    }
    else {
      do {
        if (*(char *)(lVal_7 + 0x50) == '\x01') {
          uVal_6 = *(uint64_t *)(lVal_7 + 0x38);
          if (0xf < uVal_6) {
            lVal_3 = *(int64_t *)(lVal_7 + 0x20);
            uVal_4 = uVal_6 + 1;
            lVal_5 = lVal_3;
            if (0xfff < uVal_4) {
              lVal_5 = *(int64_t *)(lVal_3 + -8);
              if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) goto LAB_18010ab39;
              uVal_4 = uVal_6 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_5,uVal_4);
          }
          *(uint64_t *)(lVal_7 + 0x30) = 0;
          *(uint64_t *)(lVal_7 + 0x38) = 0xf;
          *(uint8_t *)(lVal_7 + 0x20) = 0;
        }
        lVal_7 = lVal_7 + 0x58;
      } while (lVal_7 != lVal_2);
      lVal_7 = *(int64_t *)*pArr16_1;
      uVal_6 = *(int64_t *)pArr16_1[1] - lVal_7;
    }
    if (0xfff < uVal_6) {
      if (0x1f < (uint64_t)((lVal_7 + -8) - *(int64_t *)(lVal_7 + -8))) {
LAB_18010ab39:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_6 + 0x27;
      lVal_7 = *(int64_t *)(lVal_7 + -8);
    }
    thunk_FUN_180695dd0(lVal_7,uVal_6);
    *pArr16_1 = ZEXT816(0);
    *(uint64_t *)pArr16_1[1] = 0;
  }
  return;
}

// func_0x18010ab40
void func_0x18010ab40(int64_t *param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  
  lVal_6 = *param_1;
  lVal_1 = param_1[1];
  do {
    if (lVal_6 == lVal_1) {
      return;
    }
    if (*(char *)(lVal_6 + 0x50) == '\x01') {
      uVal_2 = *(uint64_t *)(lVal_6 + 0x38);
      if (0xf < uVal_2) {
        lVal_3 = *(int64_t *)(lVal_6 + 0x20);
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
      *(uint64_t *)(lVal_6 + 0x30) = 0;
      *(uint64_t *)(lVal_6 + 0x38) = 0xf;
      *(uint8_t *)(lVal_6 + 0x20) = 0;
    }
    lVal_6 = lVal_6 + 0x58;
  } while( true );
}

// func_0x18010abc0
uint8_t (*func_0x18010abc0(uint8_t (*param_1)[16],uint64_t *param_2))[16]
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint8_t (*pArr16_8)[16];
  uint64_t *pU64_9;
  uint64_t uVal_10;
  
  param_1[3][0] = 0;
  if (*(char *)(param_2 + 6) == '\x01') {
    param_1[1] = ZEXT816(0);
    *param_1 = ZEXT816(0);
    uVal_1 = param_2[2];
    pU64_9 = param_2;
    if (0xf < (uint64_t)param_2[3]) {
      pU64_9 = (uint64_t *)*param_2;
    }
    if ((int64_t)uVal_1 < 0) {
      func_0x18007ba70();
      fnPtr_2 = (func_ptr_t )swi(3);
      pArr16_8 = (uint8_t (*)[16])(*fnPtr_2)();
      return pArr16_8;
    }
    if (uVal_1 < 0x10) {
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_9 + 4);
      uVal_4 = *(uint32_t *)(pU64_9 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_9 + 0xc);
      *(uint32_t *)*param_1 = *(uint32_t *)pU64_9;
      *(uint32_t *)(*param_1 + 4) = uVal_3;
      *(uint32_t *)(*param_1 + 8) = uVal_4;
      *(uint32_t *)(*param_1 + 0xc) = uVal_5;
    }
    else {
      uVal_6 = uVal_1 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_6) {
        uVal_10 = uVal_6;
      }
      if (uVal_6 < 0xfff) {
        uVal_6 = func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_10 + 0x28);
        uVal_6 = lVal_7 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_6 - 8) = lVal_7;
      }
      *(uint64_t *)*param_1 = uVal_6;
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = uVal_10;
      func_0x1806aa960(uVal_6,pU64_9,uVal_1 + 1);
    }
    uVal_3 = *(uint32_t *)((int64_t)param_2 + 0x24);
    uVal_4 = *(uint32_t *)(param_2 + 5);
    uVal_5 = *(uint32_t *)((int64_t)param_2 + 0x2c);
    *(uint32_t *)param_1[2] = *(uint32_t *)(param_2 + 4);
    *(uint32_t *)(param_1[2] + 4) = uVal_3;
    *(uint32_t *)(param_1[2] + 8) = uVal_4;
    *(uint32_t *)(param_1[2] + 0xc) = uVal_5;
    param_1[3][0] = 1;
  }
  return param_1;
}

// Unwind@18010acc0
void Unwind_18010acc0(uint64_t param_1,int64_t param_2)
{
  func_0x18010acf0(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x18010acf0
void func_0x18010acf0(int64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  if (*(char *)(param_1 + 6) == '\x01') {
    uVal_1 = param_1[3];
    if (0xf < uVal_1) {
      lVal_2 = *param_1;
      uVal_3 = uVal_1 + 1;
      if (0xfff < uVal_3) {
        if (0x1f < (uint64_t)((lVal_2 + -8) - *(int64_t *)(lVal_2 + -8))) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_3 = uVal_1 + 0x28;
        lVal_2 = *(int64_t *)(lVal_2 + -8);
      }
      thunk_FUN_180695dd0(lVal_2,uVal_3);
    }
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(uint8_t *)param_1 = 0;
  }
  return;
}

// func_0x18010ad60
void func_0x18010ad60(uint32_t *param_1,uint32_t *param_2,uint32_t *param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint32_t *pU64_9;
  uint32_t *pU64_10;
  uint64_t uVal_11;
  
  uVal_11 = 0xfffffffffffffffe;
  pU64_10 = param_3;
  do {
    if (param_1 == param_2) {
      return;
    }
    uVal_2 = param_1[1];
    uVal_3 = param_1[2];
    uVal_4 = param_1[3];
    *param_3 = *param_1;
    param_3[1] = uVal_2;
    param_3[2] = uVal_3;
    param_3[3] = uVal_4;
    pU64_9 = param_3 + 4;
    *(uint8_t (*)[16])(param_3 + 4) = ZEXT816(0);
    *(uint64_t *)(param_3 + 8) = 0;
    func_0x18010a8f0(pU64_9,(*(int64_t *)(param_1 + 6) - *(int64_t *)(param_1 + 4) >> 3) *
                         0x2e8ba2e8ba2e8ba3,param_1 + 4,param_1 + 6);
    *(uint8_t (*)[16])(param_3 + 10) = ZEXT816(0);
    *(uint64_t *)(param_3 + 0xe) = 0;
    uVal_8 = *(int64_t *)(param_1 + 0xc) - *(int64_t *)(param_1 + 10);
    if (uVal_8 != 0) {
      uVal_7 = *(int64_t *)(param_1 + 0xc) - *(int64_t *)(param_1 + 10) >> 6;
      if (uVal_7 >> 0x3a != 0) {
        func_0x18007c0d0();
        fnPtr_1 = (func_ptr_t )swi(3);
        (*fnPtr_1)();
        return;
      }
      if (uVal_7 < 0x40) {
        uVal_7 = func_0x180672de0(uVal_8);
      }
      else {
        lVal_6 = func_0x180672de0(uVal_8 | 0x27);
        uVal_7 = lVal_6 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_7 - 8) = lVal_6;
      }
      *(uint64_t *)(param_3 + 10) = uVal_7;
      *(uint64_t *)(param_3 + 0xc) = uVal_7;
      *(uint64_t *)(param_3 + 0xe) = uVal_8 + uVal_7;
      uVal_5 = func_0x18010ad60(*(uint64_t *)(param_1 + 10),*(uint64_t *)(param_1 + 0xc),uVal_7,
                            param_3 + 10,param_3 + 10,pU64_9,param_4,pU64_10,param_3,uVal_11);
      *(uint64_t *)(param_3 + 0xc) = uVal_5;
    }
    param_3 = param_3 + 0x10;
    param_1 = param_1 + 0x10;
  } while( true );
}

// Unwind@18010aea0
void Unwind_18010aea0(uint64_t param_1,int64_t param_2)
{
  func_0x18010af60(param_2 + 0x20);
  return;
}

// Unwind@18010aee0
void Unwind_18010aee0(uint64_t param_1,int64_t param_2)
{
  func_0x18010a800(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@18010af20
void Unwind_18010af20(uint64_t param_1,int64_t param_2)
{
  func_0x18010afd0(*(uint64_t *)(param_2 + 0x38),*(uint64_t *)(param_2 + 0x40),
                *(uint64_t *)(param_2 + 0x30));
  return;
}

// func_0x18010af60
void func_0x18010af60(uint8_t (**param_1)[16])
{
  uint8_t (*pArr16_1)[16];
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  pArr16_1 = *param_1;
  if ((pArr16_1 != (uint8_t (*)[16])0x0) && (*(int64_t *)*pArr16_1 != 0)) {
    func_0x18010afd0(*(int64_t *)*pArr16_1,*(uint64_t *)(*pArr16_1 + 8),pArr16_1);
    lVal_2 = *(int64_t *)*pArr16_1;
    uVal_4 = *(int64_t *)pArr16_1[1] - lVal_2;
    lVal_3 = lVal_2;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_4 | 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *pArr16_1 = ZEXT816(0);
    *(uint64_t *)pArr16_1[1] = 0;
  }
  return;
}

// func_0x18010afd0
void func_0x18010afd0(int64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  
  if (param_1 != param_2) {
    do {
      func_0x18010b100(param_1 + 0x28);
      lVal_6 = *(int64_t *)(param_1 + 0x10);
      if (lVal_6 != 0) {
        lVal_5 = *(int64_t *)(param_1 + 0x18);
        if (lVal_6 == lVal_5) {
          uVal_4 = *(int64_t *)(param_1 + 0x20) - lVal_6;
        }
        else {
          do {
            if (*(char *)(lVal_6 + 0x50) == '\x01') {
              uVal_4 = *(uint64_t *)(lVal_6 + 0x38);
              if (0xf < uVal_4) {
                lVal_1 = *(int64_t *)(lVal_6 + 0x20);
                uVal_2 = uVal_4 + 1;
                lVal_3 = lVal_1;
                if (0xfff < uVal_2) {
                  lVal_3 = *(int64_t *)(lVal_1 + -8);
                  if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_18010b0ec;
                  uVal_2 = uVal_4 + 0x28;
                }
                thunk_FUN_180695dd0(lVal_3,uVal_2);
              }
              *(uint64_t *)(lVal_6 + 0x30) = 0;
              *(uint64_t *)(lVal_6 + 0x38) = 0xf;
              *(uint8_t *)(lVal_6 + 0x20) = 0;
            }
            lVal_6 = lVal_6 + 0x58;
          } while (lVal_6 != lVal_5);
          lVal_6 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 0x10);
          uVal_4 = *(int64_t *)(param_1 + 0x20) - lVal_6;
        }
        lVal_5 = lVal_6;
        if (0xfff < uVal_4) {
          lVal_5 = *(int64_t *)(lVal_6 + -8);
          if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_5)) {
LAB_18010b0ec:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_4 = uVal_4 + 0x27;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_4);
        *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
        *(uint64_t *)(param_1 + 0x20) = 0;
      }
      param_1 = param_1 + 0x40;
    } while (param_1 != param_2);
  }
  return;
}

// func_0x18010b100
void func_0x18010b100(uint8_t (*param_1)[16])
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  int64_t lVal_8;
  
  lVal_7 = *(int64_t *)*param_1;
  if (lVal_7 != 0) {
    lVal_8 = *(int64_t *)(*param_1 + 8);
    if (lVal_7 != lVal_8) {
      do {
        func_0x18010b100(lVal_7 + 0x28);
        lVal_6 = *(int64_t *)(lVal_7 + 0x10);
        if (lVal_6 != 0) {
          lVal_5 = *(int64_t *)(lVal_7 + 0x18);
          if (lVal_6 == lVal_5) {
            uVal_4 = *(int64_t *)(lVal_7 + 0x20) - lVal_6;
          }
          else {
            do {
              if (*(char *)(lVal_6 + 0x50) == '\x01') {
                uVal_4 = *(uint64_t *)(lVal_6 + 0x38);
                if (0xf < uVal_4) {
                  lVal_1 = *(int64_t *)(lVal_6 + 0x20);
                  uVal_2 = uVal_4 + 1;
                  lVal_3 = lVal_1;
                  if (0xfff < uVal_2) {
                    lVal_3 = *(int64_t *)(lVal_1 + -8);
                    if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_18010b22c;
                    uVal_2 = uVal_4 + 0x28;
                  }
                  thunk_FUN_180695dd0(lVal_3,uVal_2);
                }
                *(uint64_t *)(lVal_6 + 0x30) = 0;
                *(uint64_t *)(lVal_6 + 0x38) = 0xf;
                *(uint8_t *)(lVal_6 + 0x20) = 0;
              }
              lVal_6 = lVal_6 + 0x58;
            } while (lVal_6 != lVal_5);
            lVal_6 = *(int64_t *)*(uint8_t (*)[16])(lVal_7 + 0x10);
            uVal_4 = *(int64_t *)(lVal_7 + 0x20) - lVal_6;
          }
          lVal_5 = lVal_6;
          if (0xfff < uVal_4) {
            lVal_5 = *(int64_t *)(lVal_6 + -8);
            if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_5)) goto LAB_18010b22c;
            uVal_4 = uVal_4 + 0x27;
          }
          thunk_FUN_180695dd0(lVal_5,uVal_4);
          *(uint8_t (*)[16])(lVal_7 + 0x10) = ZEXT816(0);
          *(uint64_t *)(lVal_7 + 0x20) = 0;
        }
        lVal_7 = lVal_7 + 0x40;
      } while (lVal_7 != lVal_8);
      lVal_7 = *(int64_t *)*param_1;
    }
    uVal_4 = *(int64_t *)param_1[1] - lVal_7;
    lVal_8 = lVal_7;
    if (0xfff < uVal_4) {
      lVal_8 = *(int64_t *)(lVal_7 + -8);
      if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_8)) {
LAB_18010b22c:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_4 | 0x27;
    }
    thunk_FUN_180695dd0(lVal_8,uVal_4);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// func_0x18010b290
void func_0x18010b290(uint64_t param_1,uint64_t param_2,int64_t *param_3)
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
    func_0x18010b290(param_1,param_2,param_3[2]);
    pLong_2 = (int64_t *)*param_3;
    if (*(char *)(param_3 + 0xd) != -1) {
      (**(func_ptr_t *)param_3[8])(param_3 + 8,0);
    }
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
    thunk_FUN_180695dd0(param_3,0x70);
    ch_1 = *(char *)((int64_t)pLong_2 + 0x19);
    param_3 = pLong_2;
  } while( true );
}

// func_0x18010b360
void func_0x18010b360(uint64_t *param_1,uint64_t *param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  
  uVal_5 = *param_2;
  if (uVal_5 >> 0x3c != 0) {
LAB_18010b4ab:
    func_0x18007ba90();
    goto LAB_18010b4b0;
  }
  uVal_2 = *param_1;
  uVal_3 = param_1[1];
  if (uVal_5 == 0) {
    uVal_9 = 0;
    uVal_6 = *param_1;
    uVal_5 = param_1[1];
    if (uVal_6 == uVal_5) goto LAB_18010b3e0;
LAB_18010b401:
    lVal_4 = 0;
    do {
      *(uint16_t *)(uVal_9 + lVal_4) = *(uint16_t *)(uVal_6 + lVal_4);
      *(uint32_t *)(uVal_9 + 4 + lVal_4) = *(uint32_t *)(uVal_6 + 4 + lVal_4);
      *(uint32_t *)(uVal_9 + 8 + lVal_4) = *(uint32_t *)(uVal_6 + 8 + lVal_4);
      *(uint32_t *)(uVal_9 + 0xc + lVal_4) = *(uint32_t *)(uVal_6 + 0xc + lVal_4);
      lVal_1 = uVal_6 + lVal_4;
      lVal_4 = lVal_4 + 0x10;
    } while (lVal_1 + 0x10U != uVal_5);
    uVal_6 = *param_1;
    uVal_5 = *param_2;
  }
  else {
    if (uVal_5 < 0x100) {
      uVal_9 = func_0x180672de0(uVal_5 * 0x10);
      uVal_6 = *param_1;
      uVal_5 = param_1[1];
      if (uVal_6 != uVal_5) goto LAB_18010b401;
    }
    else {
      if (0xffffffffffffffd < uVal_5) goto LAB_18010b4ab;
      lVal_4 = func_0x180672de0(uVal_5 * 0x10 + 0x27);
      uVal_9 = lVal_4 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_9 - 8) = lVal_4;
      uVal_6 = *param_1;
      uVal_5 = param_1[1];
      if (uVal_6 != uVal_5) goto LAB_18010b401;
    }
LAB_18010b3e0:
    uVal_5 = *param_2;
  }
  if (uVal_6 != 0) {
    uVal_8 = param_1[2] - uVal_6;
    uVal_7 = uVal_6;
    if (0xfff < uVal_8) {
      uVal_7 = *(uint64_t *)(uVal_6 - 8);
      if (0x1f < (uVal_6 - 8) - uVal_7) {
LAB_18010b4b0:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_8 = uVal_8 + 0x27;
    }
    thunk_FUN_180695dd0(uVal_7,uVal_8);
  }
  *param_1 = uVal_9;
  param_1[1] = (uVal_3 - uVal_2) + uVal_9;
  param_1[2] = uVal_5 * 0x10 + uVal_9;
  return;
}

// func_0x18010b4c0
int64_t func_0x18010b4c0(uint64_t *param_1,uint64_t param_2,uint32_t *param_3,uint32_t *param_4, uint32_t *param_5)
{
  int64_t lVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
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
  uVal_12 = ((int64_t)(param_1[1] - uVal_6) >> 2) * -0x5555555555555555 + 1;
  uVal_7 = ((int64_t)(param_1[2] - uVal_6) >> 2) * -0x5555555555555555;
  uVal_11 = 0x1555555555555555 - (uVal_7 >> 1);
  uVal_10 = (uVal_7 >> 1) + uVal_7;
  if (uVal_10 <= uVal_12) {
    uVal_10 = uVal_12;
  }
  if (uVal_11 <= uVal_7 && uVal_7 - uVal_11 != 0) {
    uVal_10 = 0x1555555555555555;
  }
  if (0x1555555555555555 < uVal_10) {
LAB_18010b722:
    func_0x18007ba90();
    goto LAB_18010b727;
  }
  if (uVal_10 == 0) {
    uVal_7 = 0;
  }
  else if (uVal_10 < 0x156) {
    uVal_7 = func_0x180672de0(uVal_10 * 0xc);
  }
  else {
    if (0x1555555555555552 < uVal_10) goto LAB_18010b722;
    lVal_4 = func_0x180672de0(uVal_10 * 0xc + 0x27);
    uVal_7 = lVal_4 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_7 - 8) = lVal_4;
  }
  lVal_4 = param_2 - uVal_6;
  uVal_2 = *param_5;
  uVal_3 = *param_4;
  *(uint32_t *)(uVal_7 + lVal_4) = *param_3;
  *(uint32_t *)(uVal_7 + 4 + lVal_4) = uVal_3;
  *(uint32_t *)(uVal_7 + 8 + lVal_4) = uVal_2;
  uVal_11 = *param_1;
  uVal_6 = param_1[1];
  if (param_2 == uVal_6) {
    if (uVal_11 != param_2) {
      lVal_5 = 0;
      do {
        *(uint32_t *)(uVal_7 + lVal_5) = *(uint32_t *)(uVal_11 + lVal_5);
        *(uint32_t *)(uVal_7 + 4 + lVal_5) = *(uint32_t *)(uVal_11 + 4 + lVal_5);
        *(uint32_t *)(uVal_7 + 8 + lVal_5) = *(uint32_t *)(uVal_11 + 8 + lVal_5);
        lVal_8 = uVal_11 + lVal_5;
        lVal_5 = lVal_5 + 0xc;
      } while (lVal_8 + 0xcU != param_2);
      goto LAB_18010b6b3;
    }
  }
  else {
    if (uVal_11 != param_2) {
      lVal_5 = 0;
      do {
        *(uint32_t *)(uVal_7 + lVal_5) = *(uint32_t *)(uVal_11 + lVal_5);
        *(uint32_t *)(uVal_7 + 4 + lVal_5) = *(uint32_t *)(uVal_11 + 4 + lVal_5);
        *(uint32_t *)(uVal_7 + 8 + lVal_5) = *(uint32_t *)(uVal_11 + 8 + lVal_5);
        lVal_8 = uVal_11 + lVal_5;
        lVal_5 = lVal_5 + 0xc;
      } while (lVal_8 + 0xcU != param_2);
      uVal_6 = param_1[1];
    }
    if (param_2 != uVal_6) {
      lVal_5 = lVal_4 + uVal_7;
      lVal_8 = 0;
      do {
        *(uint32_t *)(lVal_5 + 0xc + lVal_8) = *(uint32_t *)(param_2 + lVal_8);
        *(uint32_t *)(lVal_5 + 0x10 + lVal_8) = *(uint32_t *)(param_2 + 4 + lVal_8);
        *(uint32_t *)(lVal_5 + 0x14 + lVal_8) = *(uint32_t *)(param_2 + 8 + lVal_8);
        lVal_1 = param_2 + lVal_8;
        lVal_8 = lVal_8 + 0xc;
      } while (lVal_1 + 0xcU != uVal_6);
    }
LAB_18010b6b3:
    uVal_11 = *param_1;
  }
  if (uVal_11 != 0) {
    uVal_9 = param_1[2] - uVal_11;
    uVal_6 = uVal_11;
    if (0xfff < uVal_9) {
      uVal_6 = *(uint64_t *)(uVal_11 - 8);
      if (0x1f < (uVal_11 - 8) - uVal_6) {
LAB_18010b727:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_9 = uVal_9 + 0x27;
    }
    thunk_FUN_180695dd0(uVal_6,uVal_9);
  }
  *param_1 = uVal_7;
  param_1[1] = uVal_7 + uVal_12 * 0xc;
  param_1[2] = uVal_7 + uVal_10 * 0xc;
  return lVal_4 + uVal_7;
}

// func_0x18010b730
int64_t func_0x18010b730(uint64_t *param_1,uint64_t param_2,uint32_t *param_3)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  
  uVal_1 = *param_1;
  uVal_6 = ((int64_t)(param_1[1] - uVal_1) >> 2) + 1;
  uVal_2 = (int64_t)(param_1[2] - uVal_1) >> 2;
  uVal_7 = (uVal_2 >> 1) + uVal_2;
  if (uVal_7 <= uVal_6) {
    uVal_7 = uVal_6;
  }
  if (0x3fffffffffffffff - (uVal_2 >> 1) < uVal_2) {
    uVal_7 = 0x3fffffffffffffff;
  }
  if (uVal_7 >> 0x3e == 0) {
    if (uVal_7 == 0) {
      uVal_2 = 0;
    }
    else if (uVal_7 < 0x400) {
      uVal_2 = func_0x180672de0(uVal_7 * 4);
    }
    else {
      if (0x3ffffffffffffff6 < uVal_7) goto LAB_18010b897;
      lVal_3 = func_0x180672de0(uVal_7 * 4 + 0x27);
      uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_2 - 8) = lVal_3;
    }
    lVal_3 = uVal_2 + (param_2 - uVal_1);
    *(uint32_t *)(uVal_2 + (param_2 - uVal_1)) = *param_3;
    if (param_2 == param_1[1]) {
      func_0x1806aa960(uVal_2,*param_1,param_2 - *param_1);
      uVal_1 = *param_1;
    }
    else {
      func_0x1806aa960(uVal_2,*param_1,param_2 - *param_1);
      func_0x1806aa960(lVal_3 + 4,param_2,param_1[1] - param_2);
      uVal_1 = *param_1;
    }
    if (uVal_1 != 0) {
      uVal_5 = param_1[2] - uVal_1;
      uVal_4 = uVal_1;
      if (0xfff < uVal_5) {
        uVal_4 = *(uint64_t *)(uVal_1 - 8);
        if (0x1f < (uVal_1 - 8) - uVal_4) goto LAB_18010b89c;
        uVal_5 = uVal_5 + 0x27;
      }
      thunk_FUN_180695dd0(uVal_4,uVal_5);
    }
    *param_1 = uVal_2;
    param_1[1] = uVal_2 + uVal_6 * 4;
    param_1[2] = uVal_2 + uVal_7 * 4;
    return lVal_3;
  }
LAB_18010b897:
  func_0x18007ba90();
LAB_18010b89c:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18010b8a0
void func_0x18010b8a0(uint64_t *param_1,uint32_t *param_2,uint64_t param_3)
{
  uint32_t *pU64_1;
  uint32_t *pU64_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  pU64_2 = (uint32_t *)*param_1;
  if ((uint64_t)((param_1[2] - (int64_t)pU64_2 >> 2) * -0x5555555555555555) < param_3) {
    func_0x18010bb40(param_1,param_3);
    pU64_1 = (uint32_t *)*param_1;
    uVal_4 = param_3;
    if ((param_3 & 1) != 0) {
      *pU64_1 = *param_2;
      pU64_1[1] = param_2[1];
      pU64_1[2] = param_2[2];
      pU64_1 = pU64_1 + 3;
      param_2 = param_2 + 3;
      uVal_4 = param_3 - 1;
    }
    if (param_3 != 1) {
      do {
        *pU64_1 = *param_2;
        pU64_1[1] = param_2[1];
        pU64_1[2] = param_2[2];
        pU64_1[3] = param_2[3];
        pU64_1[4] = param_2[4];
        pU64_1[5] = param_2[5];
        pU64_1 = pU64_1 + 6;
        param_2 = param_2 + 6;
        uVal_4 = uVal_4 - 2;
      } while (uVal_4 != 0);
    }
  }
  else {
    pU64_1 = (uint32_t *)param_1[1];
    lVal_5 = (int64_t)pU64_1 - (int64_t)pU64_2 >> 2;
    uVal_4 = lVal_5 * -0x5555555555555555;
    if (uVal_4 < param_3) {
      if (pU64_2 != pU64_1) {
        do {
          *pU64_2 = *param_2;
          pU64_2[1] = param_2[1];
          pU64_2[2] = param_2[2];
          pU64_2 = pU64_2 + 3;
          param_2 = param_2 + 3;
          pU64_1 = (uint32_t *)param_1[1];
        } while (pU64_2 != pU64_1);
      }
      uVal_3 = param_3 + lVal_5 * 0x5555555555555555;
      if (uVal_3 != 0) {
        if ((uVal_3 & 1) != 0) {
          *pU64_1 = *param_2;
          pU64_1[1] = param_2[1];
          pU64_1[2] = param_2[2];
          pU64_1 = pU64_1 + 3;
          param_2 = param_2 + 3;
          uVal_3 = uVal_3 - 1;
        }
        if (param_3 != uVal_4 + 1) {
          do {
            *pU64_1 = *param_2;
            pU64_1[1] = param_2[1];
            pU64_1[2] = param_2[2];
            pU64_1[3] = param_2[3];
            pU64_1[4] = param_2[4];
            pU64_1[5] = param_2[5];
            pU64_1 = pU64_1 + 6;
            param_2 = param_2 + 6;
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
          *pU64_2 = *param_2;
          pU64_2[1] = param_2[1];
          pU64_2[2] = param_2[2];
          pU64_2 = pU64_2 + 3;
          param_2 = param_2 + 3;
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
            *(uint32_t *)((int64_t)pU64_2 + lVal_5 + 0xc) =
                 *(uint32_t *)((int64_t)param_2 + lVal_5 + 0xc);
            *(uint32_t *)((int64_t)pU64_2 + lVal_5 + 0x10) =
                 *(uint32_t *)((int64_t)param_2 + lVal_5 + 0x10);
            *(uint32_t *)((int64_t)pU64_2 + lVal_5 + 0x14) =
                 *(uint32_t *)((int64_t)param_2 + lVal_5 + 0x14);
            lVal_5 = lVal_5 + 0x18;
            uVal_4 = uVal_4 - 2;
          } while (uVal_4 != 0);
        }
      }
    }
  }
  param_1[1] = pU64_1;
  return;
}

// func_0x18010bb40
void func_0x18010bb40(uint8_t (*param_1)[16],uint64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  if (param_2 < 0x1555555555555556) {
    lVal_1 = *(int64_t *)*param_1;
    uVal_3 = *(int64_t *)param_1[1] - lVal_1;
    uVal_5 = ((int64_t)uVal_3 >> 2) * -0x5555555555555555;
    uVal_6 = 0x1555555555555555 - (uVal_5 >> 1);
    uVal_4 = (uVal_5 >> 1) + uVal_5;
    if (uVal_4 <= param_2) {
      uVal_4 = param_2;
    }
    if (uVal_6 <= uVal_5 && uVal_5 - uVal_6 != 0) {
      uVal_4 = 0x1555555555555555;
    }
    if (lVal_1 != 0) {
      lVal_2 = lVal_1;
      if (0xfff < uVal_3) {
        lVal_2 = *(int64_t *)(lVal_1 + -8);
        if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_18010bc59;
        uVal_3 = uVal_3 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_2,uVal_3);
      *param_1 = ZEXT816(0);
      *(uint64_t *)param_1[1] = 0;
    }
    if (uVal_4 < 0x1555555555555556) {
      if (uVal_4 == 0) {
        uVal_3 = 0;
LAB_18010bc34:
        *(uint64_t *)*param_1 = uVal_3;
        *(uint64_t *)(*param_1 + 8) = uVal_3;
        *(uint64_t *)param_1[1] = uVal_3 + uVal_4 * 0xc;
        return;
      }
      if (uVal_4 < 0x156) {
        uVal_3 = func_0x180672de0(uVal_4 * 0xc);
        goto LAB_18010bc34;
      }
      if (uVal_4 < 0x1555555555555553) {
        lVal_1 = func_0x180672de0(uVal_4 * 0xc + 0x27);
        uVal_3 = lVal_1 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_3 - 8) = lVal_1;
        goto LAB_18010bc34;
      }
    }
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_18010bc59:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18010bc60
void func_0x18010bc60(uint8_t (*param_1)[16],uint64_t param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  if (param_2 >> 0x3c == 0) {
    lVal_4 = *(int64_t *)*param_1;
    uVal_2 = *(int64_t *)param_1[1] - lVal_4;
    uVal_5 = (int64_t)uVal_2 >> 4;
    uVal_3 = (uVal_5 >> 1) + uVal_5;
    if (uVal_3 <= param_2) {
      uVal_3 = param_2;
    }
    if (0xfffffffffffffff - (uVal_5 >> 1) < uVal_5) {
      uVal_3 = 0xfffffffffffffff;
    }
    if (lVal_4 != 0) {
      lVal_1 = lVal_4;
      if ((0xfff < uVal_2) &&
         (lVal_1 = *(int64_t *)(lVal_4 + -8), 0x1f < (uint64_t)((lVal_4 + -8) - lVal_1)))
      goto LAB_18010bd62;
      thunk_FUN_180695dd0(lVal_1);
      *param_1 = ZEXT816(0);
      *(uint64_t *)param_1[1] = 0;
    }
    if (uVal_3 >> 0x3c == 0) {
      lVal_4 = uVal_3 * 0x10;
      if (uVal_3 == 0) {
        uVal_3 = 0;
LAB_18010bd42:
        *(uint64_t *)*param_1 = uVal_3;
        *(uint64_t *)(*param_1 + 8) = uVal_3;
        *(uint64_t *)param_1[1] = lVal_4 + uVal_3;
        return;
      }
      if (uVal_3 < 0x100) {
        uVal_3 = func_0x180672de0(lVal_4);
        goto LAB_18010bd42;
      }
      if (uVal_3 < 0xffffffffffffffe) {
        lVal_1 = func_0x180672de0(lVal_4 + 0x27);
        uVal_3 = lVal_1 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_3 - 8) = lVal_1;
        goto LAB_18010bd42;
      }
    }
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_18010bd62:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18010bd70
void func_0x18010bd70(uint8_t (*param_1)[16],uint64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  
  if (param_2 >> 0x3e == 0) {
    lVal_1 = *(int64_t *)*param_1;
    uVal_3 = *(int64_t *)param_1[1] - lVal_1;
    uVal_5 = (int64_t)uVal_3 >> 2;
    uVal_4 = (uVal_5 >> 1) + uVal_5;
    if (uVal_4 <= param_2) {
      uVal_4 = param_2;
    }
    if (0x3fffffffffffffff - (uVal_5 >> 1) < uVal_5) {
      uVal_4 = 0x3fffffffffffffff;
    }
    if (lVal_1 != 0) {
      lVal_2 = lVal_1;
      if ((0xfff < uVal_3) &&
         (lVal_2 = *(int64_t *)(lVal_1 + -8), 0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)))
      goto LAB_18010be6f;
      thunk_FUN_180695dd0(lVal_2);
      *param_1 = ZEXT816(0);
      *(uint64_t *)param_1[1] = 0;
    }
    if (uVal_4 >> 0x3e == 0) {
      if (uVal_4 == 0) {
        uVal_3 = 0;
LAB_18010be4f:
        *(uint64_t *)*param_1 = uVal_3;
        *(uint64_t *)(*param_1 + 8) = uVal_3;
        *(uint64_t *)param_1[1] = uVal_3 + uVal_4 * 4;
        return;
      }
      if (uVal_4 < 0x400) {
        uVal_3 = func_0x180672de0(uVal_4 * 4);
        goto LAB_18010be4f;
      }
      if (uVal_4 < 0x3ffffffffffffff7) {
        lVal_1 = func_0x180672de0(uVal_4 * 4 + 0x27);
        uVal_3 = lVal_1 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_3 - 8) = lVal_1;
        goto LAB_18010be4f;
      }
    }
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_18010be6f:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18010be80
void func_0x18010be80(uint8_t (*param_1)[16],uint64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  
  if (-1 < (int64_t)param_2) {
    lVal_1 = *(int64_t *)*param_1;
    uVal_3 = *(int64_t *)param_1[1] - lVal_1;
    uVal_5 = (int64_t)uVal_3 >> 1;
    uVal_4 = (uVal_5 >> 1) + uVal_5;
    if (uVal_4 <= param_2) {
      uVal_4 = param_2;
    }
    if ((uVal_5 >> 1 ^ 0x7fffffffffffffff) < uVal_5) {
      uVal_4 = 0x7fffffffffffffff;
    }
    if (lVal_1 != 0) {
      lVal_2 = lVal_1;
      if (0xfff < uVal_3) {
        lVal_2 = *(int64_t *)(lVal_1 + -8);
        if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_18010bf6f;
        uVal_3 = uVal_3 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_2,uVal_3);
      *param_1 = ZEXT816(0);
      *(uint64_t *)param_1[1] = 0;
    }
    if (-1 < (int64_t)uVal_4) {
      if (uVal_4 == 0) {
        uVal_3 = 0;
LAB_18010bf4f:
        *(uint64_t *)*param_1 = uVal_3;
        *(uint64_t *)(*param_1 + 8) = uVal_3;
        *(uint64_t *)param_1[1] = uVal_3 + uVal_4 * 2;
        return;
      }
      if (uVal_4 < 0x800) {
        uVal_3 = func_0x180672de0(uVal_4 * 2);
        goto LAB_18010bf4f;
      }
      if (uVal_4 < 0x7fffffffffffffed) {
        lVal_1 = func_0x180672de0(uVal_4 * 2 + 0x27);
        uVal_3 = lVal_1 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_3 - 8) = lVal_1;
        goto LAB_18010bf4f;
      }
    }
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_18010bf6f:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18010bf80
void func_0x18010bf80(uint8_t (*param_1)[16],uint64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  
  if (param_2 >> 0x3d == 0) {
    lVal_1 = *(int64_t *)*param_1;
    uVal_3 = *(int64_t *)param_1[1] - lVal_1;
    uVal_5 = (int64_t)uVal_3 >> 3;
    uVal_4 = (uVal_5 >> 1) + uVal_5;
    if (uVal_4 <= param_2) {
      uVal_4 = param_2;
    }
    if (0x1fffffffffffffff - (uVal_5 >> 1) < uVal_5) {
      uVal_4 = 0x1fffffffffffffff;
    }
    if (lVal_1 != 0) {
      lVal_2 = lVal_1;
      if ((0xfff < uVal_3) &&
         (lVal_2 = *(int64_t *)(lVal_1 + -8), 0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)))
      goto LAB_18010c07f;
      thunk_FUN_180695dd0(lVal_2);
      *param_1 = ZEXT816(0);
      *(uint64_t *)param_1[1] = 0;
    }
    if (uVal_4 >> 0x3d == 0) {
      if (uVal_4 == 0) {
        uVal_3 = 0;
LAB_18010c05f:
        *(uint64_t *)*param_1 = uVal_3;
        *(uint64_t *)(*param_1 + 8) = uVal_3;
        *(uint64_t *)param_1[1] = uVal_3 + uVal_4 * 8;
        return;
      }
      if (uVal_4 < 0x200) {
        uVal_3 = func_0x180672de0(uVal_4 * 8);
        goto LAB_18010c05f;
      }
      if (uVal_4 < 0x1ffffffffffffffc) {
        lVal_1 = func_0x180672de0(uVal_4 * 8 + 0x27);
        uVal_3 = lVal_1 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_3 - 8) = lVal_1;
        goto LAB_18010c05f;
      }
    }
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_18010c07f:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18010c190
void func_0x18010c190(int64_t *param_1,uint64_t param_2,uint64_t param_3)
{
                    /* WARNING: Could not recover jumptable at 0x00018010c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x38))(param_1,param_2,param_3,0x18b04540ce48320b);
  return;
}

// func_0x18010c200
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18010c200(uint64_t param_1)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f238) {
    func_0x180672ec0(&DAT_18083f238);
    if (DAT_18083f238 == -1) {
      lVal_1 = func_0x18010c320(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f230 = (func_ptr_t )0x0;
      }
      else {
        DAT_18083f230 = (func_ptr_t )(lVal_1 + *(int *)(lVal_1 + 1) + 5);
      }
      _Init_thread_footer(&DAT_18083f238);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f248) {
    func_0x180672ec0(&DAT_18083f248);
    if (DAT_18083f248 == -1) {
      _DAT_18083f240 = DAT_18083f230;
      _Init_thread_footer(&DAT_18083f248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018010c261. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_18083f240)(param_1);
  return;
}

// Unwind@18010c2f0
void Unwind_18010c2f0(void)
{
  func_0x180672f60(&DAT_18083f238);
  return;
}

// func_0x18010c320
int64_t func_0x18010c320(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x7b258f49e8ddc5f) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x50bcd60954787def) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18010c3c4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x50bcd60954787def);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18010c3ea;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x50bcd60954787def);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x4c4abe7U) + -0x21;
  }
LAB_18010c3c4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18010c3ea:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18010c400
void func_0x18010c400(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint8_t (*param_4)[16] ,uint64_t param_5,uint32_t param_6,uint32_t param_7,uint64_t param_8, uint64_t param_9)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint8_t local_88 [16];
  uint8_t local_78 [24];
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_78._0_16_ = ZEXT816(0);
  local_88 = ZEXT816(0);
  uVal_3 = *(uint64_t *)param_4[1];
  if (0xf < *(uint64_t *)(param_4[1] + 8)) {
    param_4 = *(uint8_t (**)[16])*param_4;
  }
  if (-1 < (int64_t)uVal_3) {
    local_78._0_8_ = uVal_3;
    if (uVal_3 < 0x10) {
      local_78._8_8_ = 0xf;
      local_88 = *param_4;
    }
    else {
      uVal_1 = uVal_3 | 0xf;
      uVal_4 = 0x16;
      if (0x16 < uVal_1) {
        uVal_4 = uVal_1;
      }
      if (uVal_1 < 0xfff) {
        uVal_1 = func_0x180672de0(uVal_4 + 1);
      }
      else {
        lVal_2 = func_0x180672de0(uVal_4 + 0x28);
        uVal_1 = lVal_2 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_1 - 8) = lVal_2;
      }
      local_88._0_8_ = uVal_1;
      local_78._8_8_ = uVal_4;
      func_0x1806aa960(uVal_1,param_4,uVal_3 + 1);
    }
    (**(func_ptr_t *)(*param_1 + 0x28))
              (param_1,param_2,param_3,local_88,param_5,param_6,param_7,param_8,param_9);
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_3 = local_78._8_8_ + 1;
      lVal_2 = local_88._0_8_;
      if (0xfff < uVal_3) {
        lVal_2 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_2)) goto LAB_18010c58f;
        uVal_3 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_2,uVal_3);
    }
    return;
  }
  func_0x18007ba70();
LAB_18010c58f:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18010c5a0
void Unwind_18010c5a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// func_0x18010c5e0
void func_0x18010c5e0(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018010c5f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x30))(param_1,DAT_1806b26b4,0);
  return;
}

// func_0x18010c600
void func_0x18010c600(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018010c607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x38))();
  return;
}

// func_0x18010c610
void func_0x18010c610(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018010c617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x50))();
  return;
}

// func_0x18010c620
void func_0x18010c620(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018010c627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x58))();
  return;
}

// func_0x18010c630
void func_0x18010c630(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018010c637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x60))();
  return;
}

// func_0x18010c640
uint64_t func_0x18010c640(uint param_1)
{
  int64_t lVal_1;
  
  if (0x25 < param_1) {
    return 0;
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f258) {
    func_0x180672ec0(&DAT_18083f258);
    if (DAT_18083f258 == -1) {
      lVal_1 = func_0x18010c720(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f250 = 0;
      }
      else {
        DAT_18083f250 = lVal_1 + *(int *)(lVal_1 + 3) + 7;
      }
      _Init_thread_footer(&DAT_18083f258);
    }
  }
  return *(uint64_t *)(DAT_18083f250 + (uint64_t)param_1 * 8);
}

// Unwind@18010c6f0
void Unwind_18010c6f0(void)
{
  func_0x180672f60(&DAT_18083f258);
  return;
}

// func_0x18010c720
int64_t func_0x18010c720(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x93954b632f859b7) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x585d9df53670cdb1) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18010c7c4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x585d9df53670cdb1);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18010c7ea;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x585d9df53670cdb1);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x6e2d5045U) + -0x16;
  }
LAB_18010c7c4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18010c7ea:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18010c800
int64_t func_0x18010c800(void)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f268) {
    func_0x180672ec0(&DAT_18083f268);
    if (DAT_18083f268 == -1) {
      lVal_1 = func_0x18010c8d0(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f260 = 0;
      }
      else {
        DAT_18083f260 = lVal_1 + *(int *)(lVal_1 + 2) + 6;
      }
      _Init_thread_footer(&DAT_18083f268);
      return DAT_18083f260;
    }
  }
  return DAT_18083f260;
}

// Unwind@18010c8a0
void Unwind_18010c8a0(void)
{
  func_0x180672f60(&DAT_18083f268);
  return;
}

// func_0x18010c8d0
int64_t func_0x18010c8d0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x5303e2fe9dcc6d1) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x7c8ade9f3d6cc11c) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18010c974;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x7c8ade9f3d6cc11c);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18010c99a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x7c8ade9f3d6cc11c);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x41e61f84U) + -0x16;
  }
LAB_18010c974:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18010c99a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18010c9b0
uint64_t func_0x18010c9b0(uint64_t param_1,uint64_t param_2)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f278) {
    func_0x180672ec0(&DAT_18083f278);
    if (DAT_18083f278 == -1) {
      DAT_18083f270 = (func_ptr_t )func_0x18010cac0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f278);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f288) {
    func_0x180672ec0(&DAT_18083f288);
    if (DAT_18083f288 == -1) {
      DAT_18083f280 = DAT_18083f270;
      _Init_thread_footer(&DAT_18083f288);
    }
  }
  (*DAT_18083f280)(param_1,param_2);
  return param_1;
}

// Unwind@18010ca90
void Unwind_18010ca90(void)
{
  func_0x180672f60(&DAT_18083f278);
  return;
}

// func_0x18010cac0
int64_t func_0x18010cac0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x6a72c264c649f2d) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x279f3d2f8f0bf563) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18010cb64;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x279f3d2f8f0bf563);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18010cb8a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x279f3d2f8f0bf563);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffa894c84cU) + -0x15;
  }
LAB_18010cb64:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18010cb8a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18010cba0
int64_t func_0x18010cba0(int64_t param_1)
{
  return param_1 + 0xb8;
}

// func_0x18010cc00
uint64_t func_0x18010cc00(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVal_1;
  
  uVal_1 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f298) {
    func_0x180672ec0(&DAT_18083f298);
    if (DAT_18083f298 == -1) {
      DAT_18083f290 = (func_ptr_t )func_0x18010cd20(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f298);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f2a8) {
    func_0x180672ec0(&DAT_18083f2a8);
    if (DAT_18083f2a8 == -1) {
      DAT_18083f2a0 = DAT_18083f290;
      _Init_thread_footer(&DAT_18083f2a8);
    }
  }
  (*DAT_18083f2a0)(param_1,param_2,param_3,param_4,uVal_1);
  return param_1;
}

// Unwind@18010ccf0
void Unwind_18010ccf0(void)
{
  func_0x180672f60(&DAT_18083f298);
  return;
}

// func_0x18010cd20
int64_t func_0x18010cd20(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xb8f961b5a6298a1) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x1311158e3a6b1960) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18010cdc4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x1311158e3a6b1960);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18010cdea;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x1311158e3a6b1960);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x297a0cd1U) + -0x1d;
  }
LAB_18010cdc4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18010cdea:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18010ce00
uint32_t func_0x18010ce00(int64_t param_1)
{
  return *(uint32_t *)(param_1 + 0x1d4);
}

// func_0x18010ce60
uint64_t func_0x18010ce60(int64_t param_1,uint param_2)
{
  if (param_2 < 0x322) {
    return *(uint64_t *)(param_1 + 0x10 + (uint64_t)param_2 * 8);
  }
  return 0;
}

// func_0x18010ce80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18010ce80(uint64_t param_1)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f2b8) {
    func_0x180672ec0(&DAT_18083f2b8);
    if (DAT_18083f2b8 == -1) {
      lVal_1 = func_0x18010cfa0(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f2b0 = (func_ptr_t )0x0;
      }
      else {
        DAT_18083f2b0 = (func_ptr_t )(lVal_1 + *(int *)(lVal_1 + 1) + 5);
      }
      _Init_thread_footer(&DAT_18083f2b8);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f2c8) {
    func_0x180672ec0(&DAT_18083f2c8);
    if (DAT_18083f2c8 == -1) {
      _DAT_18083f2c0 = DAT_18083f2b0;
      _Init_thread_footer(&DAT_18083f2c8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018010cee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_18083f2c0)(param_1);
  return;
}

// Unwind@18010cf70
void Unwind_18010cf70(void)
{
  func_0x180672f60(&DAT_18083f2b8);
  return;
}

// func_0x18010cfa0
int64_t func_0x18010cfa0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xb6ea9bbaf5727ba) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x1f2fb7b90ee5cf9b) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18010d044;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x1f2fb7b90ee5cf9b);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18010d06a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x1f2fb7b90ee5cf9b);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x11ca7822U) + -0x21;
  }
LAB_18010d044:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18010d06a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18010d080
int64_t func_0x18010d080(int64_t param_1)
{
  return param_1 + 0x30;
}

// func_0x18010d0e0
void func_0x18010d0e0(uint64_t param_1,uint64_t param_2)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f2d8) {
    func_0x180672ec0(&DAT_18083f2d8);
    if (DAT_18083f2d8 == -1) {
      DAT_18083f2d0 = (func_ptr_t )func_0x18010d1f0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f2d8);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f2e8) {
    func_0x180672ec0(&DAT_18083f2e8);
    if (DAT_18083f2e8 == -1) {
      DAT_18083f2e0 = DAT_18083f2d0;
      _Init_thread_footer(&DAT_18083f2e8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018010d150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f2e0)(param_1,param_2);
  return;
}

// Unwind@18010d1c0
void Unwind_18010d1c0(void)
{
  func_0x180672f60(&DAT_18083f2d8);
  return;
}

// func_0x18010d1f0
int64_t func_0x18010d1f0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xe6b74168a2e71fe) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x52e8154145b99781) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18010d294;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x52e8154145b99781);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18010d2ba;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x52e8154145b99781);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x175182c1U) + -0x21;
  }
LAB_18010d294:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18010d2ba:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18010d2d0
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18010d2d0(uint64_t *param_1,char *param_2,uint32_t *param_3)
{
  uint64_t *pU64_1;
  uint8_t (*pArr16_2)[16];
  uint *pU64_3;
  char ch_4;
  uint32_t uVal_5;
  func_ptr_t fnPtr_6;
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  uint8_t auArr_12 [16];
  uint8_t auArr_13 [16];
  uint8_t uVal_14;
  uint8_t *pU64_15;
  int64_t *pLong_16;
  int iVal_17;
  size_t sz_18;
  int64_t lVal_19;
  char *fnPtr_20;
  uint64_t uVal_21;
  char *fnPtr_22;
  uint64_t uVal_23;
  int64_t lVal_24;
  int64_t *pLong_25;
  uint64_t *pU64_26;
  uint8_t *_Buf1;
  uint8_t *pU64_27;
  uint8_t *pU64_28;
  uint32_t *pU64_29;
  uint64_t uVal_30;
  uint64_t *******ptr7_U64_31;
  bool bFlag_32;
  uint8_t auArr_33 [16];
  uint8_t auArr_34 [16];
  uint8_t local_538 [16];
  uint8_t local_528 [8];
  uint64_t uStack_520;
  uint32_t local_518 [2];
  uint64_t *******local_510 [2];
  uint64_t local_500;
  uint64_t local_4f8;
  uint64_t local_4f0;
  uint64_t uStack_4e8;
  uint64_t local_4a8;
  uint64_t uStack_4a0;
  uint8_t local_498;
  uint32_t local_478;
  uint8_t local_474;
  uint8_t local_42f;
  uint8_t local_42e;
  int64_t local_428;
  uint64_t uStack_420;
  uint64_t local_418;
  uint64_t uStack_410;
  int64_t local_408;
  uint64_t uStack_400;
  uint64_t local_3f8;
  uint64_t uStack_3f0;
  uint32_t local_3e8;
  uint32_t uStack_3e4;
  uint32_t uStack_3e0;
  uint32_t uStack_3dc;
  uint16_t local_3d8;
  uint8_t local_3d2;
  uint16_t local_3b8;
  uint8_t local_35e;
  uint8_t local_358 [8];
  int64_t local_350;
  int64_t local_348;
  uint8_t local_208 [16];
  uint64_t local_1f8;
  uint64_t local_1f0;
  uint8_t local_1e8 [16];
  uint64_t local_1d8;
  uint64_t local_1d0;
  uint8_t local_1c8 [16];
  uint8_t local_1b8 [16];
  uint8_t local_1a8 [16];
  uint8_t local_198 [16];
  uint64_t *local_188;
  uint *local_180;
  uint *local_178;
  uint *local_170;
  int64_t local_168;
  char *local_160;
  uint8_t local_158 [16];
  int64_t local_148;
  char *local_140;
  int64_t local_138;
  int64_t local_130;
  uint8_t local_128 [4];
  uint8_t auStack_124 [12];
  uint8_t local_118 [16];
  uint8_t local_108 [16];
  uint64_t uStack_f8;
  uint32_t uStack_f0;
  uint32_t local_ec;
  uint64_t uStack_e8;
  uint32_t uStack_e0;
  uint8_t local_d8 [16];
  uint64_t local_c8;
  uint64_t local_c0;
  uint8_t local_b8 [16];
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t *local_98;
  char *local_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint8_t local_78 [24];
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (*param_2 == '\0') {
LAB_18010ddf8:
    *param_1 = 0;
    return param_1;
  }
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3708) == '\0') goto LAB_18010f48b;
  do {
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_19 + 0x3700);
    if (*(char *)(lVal_19 + 0x3707) == '\x01') {
      *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_19 + 0x3705) << 8,*(uint32_t *)pU64_1) |
                (uint64_t)*(byte *)(lVal_19 + 0x3704) << 0x20) ^ SUB168(_DAT_1806b5200,0);
    }
    local_538 = (uint8_t  [16])0x0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_18010f799;
    if (sz_18 < 0x10) {
      pU64_28 = local_538;
      uVal_30 = 0xf;
    }
    else {
      uVal_21 = sz_18 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_21) {
        uVal_30 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        lVal_19 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_19;
      }
      local_538._0_8_ = pU64_28;
    }
    uStack_520 = uVal_30;
    local_528 = (uint8_t  [8])sz_18;
    func_0x1806aa960(pU64_28,pU64_1,sz_18);
    pU64_28[sz_18] = 0;
    bFlag_32 = true;
    if ((*param_2 == '\x01') &&
       (lVal_19 = func_0x1800a5e70(*(uint64_t *)(param_2 + 8),local_538),
       lVal_19 != **(int64_t **)(param_2 + 8))) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x371c) == '\0') {
        lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_19 + 0x371c) = 1;
        *(uint8_t *)(lVal_19 + 0x3718) = 1;
        *(uint64_t *)(lVal_19 + 0x3710) = 0x47e26005dc957618;
        func_0x180673140(&LAB_180112ad0);
      }
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_19 + 0x3710);
      if (*(char *)(lVal_19 + 0x3718) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x47910569a9f11975;
        *(uint8_t *)(lVal_19 + 0x3718) = 0;
      }
      local_118 = (uint8_t  [16])0x0;
      _local_128 = (uint8_t  [16])0x0;
      sz_18 = strlen((char *)pU64_1);
      if ((int64_t)sz_18 < 0) goto LAB_18010f7b7;
      if (sz_18 < 0x10) {
        pU64_28 = local_128;
        uVal_30 = 0xf;
      }
      else {
        uVal_21 = sz_18 | 0xf;
        uVal_30 = 0x16;
        if (0x16 < uVal_21) {
          uVal_30 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
        }
        else {
          lVal_19 = func_0x180672de0(uVal_30 + 0x28);
          pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_19;
        }
        _local_128 = pU64_28;
      }
      local_118._8_8_ = uVal_30;
      local_118._0_8_ = sz_18;
      func_0x1806aa960(pU64_28,pU64_1,sz_18);
      pU64_28[sz_18] = 0;
      bFlag_32 = true;
      if ((*param_2 == '\x01') &&
         (lVal_19 = func_0x1800a5e70(*(uint64_t *)(param_2 + 8),local_128),
         lVal_19 != **(int64_t **)(param_2 + 8))) {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x3730) == '\0') {
          lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_19 + 0x3730) = 1;
          uVal_23 = _UNK_1806b5218;
          *(uint64_t *)(lVal_19 + 0x3720) = _DAT_1806b5210;
          *(uint64_t *)(lVal_19 + 0x3728) = uVal_23;
          func_0x180673140(&LAB_180112af0);
        }
        lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pArr16_2 = (uint8_t (*)[16])(lVal_19 + 0x3720);
        if (*(char *)(lVal_19 + 0x372f) == '\x01') {
          uVal_5 = *(uint32_t *)(lVal_19 + 0x3728);
          auArr_33 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)
                                                  ((uint)uVal_5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_5 >> 0x10),uVal_5)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_19 + 0x372d) >> 8)),
                                                  (char)((uint)uVal_5 >> 8)),
                                            CONCAT11((char)*(uint16_t *)(lVal_19 + 0x372d),
                                                     (char)uVal_5))),_DAT_1806ae110);
          auArr_33._8_8_ =
               auArr_33._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_19 + 0x372c) << 0x20;
          auArr_33 = pblendw(auArr_33,*pArr16_2,0xf);
          *pArr16_2 = auArr_33 ^ _DAT_1806b5220;
        }
        local_78._0_16_ = (uint8_t  [16])0x0;
        _local_88 = (uint8_t  [16])0x0;
        sz_18 = strlen((char *)pArr16_2);
        if ((int64_t)sz_18 < 0) {
LAB_18010f7bd:
          func_0x18007ba70();
LAB_18010f7c3:
          func_0x18007ba70();
LAB_18010f7c9:
          func_0x18007ba70();
LAB_18010f7cf:
          func_0x18007ba70();
LAB_18010f7d5:
          func_0x18007ba70();
LAB_18010f7db:
          func_0x18007ba70();
          fnPtr_6 = (func_ptr_t )swi(3);
          pU64_26 = (uint64_t *)(*fnPtr_6)();
          return pU64_26;
        }
        if (sz_18 < 0x10) {
          pU64_28 = local_88;
          uVal_30 = 0xf;
        }
        else {
          uVal_21 = sz_18 | 0xf;
          uVal_30 = 0x16;
          if (0x16 < uVal_21) {
            uVal_30 = uVal_21;
          }
          if (uVal_21 < 0xfff) {
            pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
          }
          else {
            lVal_19 = func_0x180672de0(uVal_30 + 0x28);
            pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_28 + -8) = lVal_19;
          }
          local_88 = (uint8_t  [8])pU64_28;
        }
        local_78._8_8_ = uVal_30;
        local_78._0_8_ = sz_18;
        func_0x1806aa960(pU64_28,pArr16_2,sz_18);
        pU64_28[sz_18] = 0;
        bFlag_32 = true;
        if (*param_2 == '\x01') {
          lVal_19 = func_0x1800a5e70(*(uint64_t *)(param_2 + 8),local_88);
          bFlag_32 = lVal_19 == **(int64_t **)(param_2 + 8);
        }
        if ((uint64_t)local_78._8_8_ < 0x10) goto LAB_18010d6fd;
        uVal_30 = local_78._8_8_ + 1;
        lVal_19 = (int64_t)local_88;
        if (0xfff < uVal_30) {
          lVal_19 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_19)) {
LAB_18010f791:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_30 = local_78._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_19,uVal_30);
      }
LAB_18010d6fd:
      if ((uint64_t)local_118._8_8_ < 0x10) goto LAB_18010d742;
      uVal_30 = local_118._8_8_ + 1;
      lVal_19 = (int64_t)_local_128;
      if (0xfff < uVal_30) {
        lVal_19 = *(int64_t *)((int64_t)_local_128 + -8);
        if (0x1f < (uint64_t)(((int64_t)_local_128 + -8) - lVal_19)) goto LAB_18010f791;
        uVal_30 = local_118._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_30);
    }
LAB_18010d742:
    if (0xf < uStack_520) {
      uVal_30 = uStack_520 + 1;
      lVal_19 = local_538._0_8_;
      if (0xfff < uVal_30) {
        lVal_19 = *(int64_t *)(local_538._0_8_ + -8);
        if (0x1f < (uint64_t)((local_538._0_8_ + -8) - lVal_19)) goto LAB_18010f791;
        uVal_30 = uStack_520 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_30);
    }
    if (bFlag_32) goto LAB_18010ddf8;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3740) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0x3740) = 1;
      *(uint64_t *)(lVal_19 + 0x3738) = 0x1075bae8108b4b5;
      func_0x180673140(&LAB_180112b20);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_19 + 0x3738);
    if (*(char *)(lVal_19 + 0x373f) == '\x01') {
      *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_19 + 0x373d) << 8,*(uint32_t *)pU64_1) |
                (uint64_t)*(byte *)(lVal_19 + 0x373c) << 0x20) ^ SUB168(_DAT_1806b5230,0);
    }
    _local_528 = (uint8_t  [16])0x0;
    local_538 = (uint8_t  [16])0x0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) {
LAB_18010f799:
      func_0x18007ba70();
LAB_18010f79f:
      func_0x18007ba70();
LAB_18010f7a5:
      func_0x18007ba70();
LAB_18010f7ab:
      func_0x18007ba70();
LAB_18010f7b1:
      func_0x18007ba70();
LAB_18010f7b7:
      func_0x18007ba70();
      goto LAB_18010f7bd;
    }
    if (sz_18 < 0x10) {
      pU64_28 = local_538;
      uVal_30 = 0xf;
    }
    else {
      uVal_21 = sz_18 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_21) {
        uVal_30 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        lVal_19 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_19;
      }
      local_538._0_8_ = pU64_28;
    }
    local_528 = (uint8_t  [8])sz_18;
    uStack_520 = uVal_30;
    func_0x1806aa960(pU64_28,pU64_1,sz_18);
    pU64_28[sz_18] = 0;
    pU64_28 = local_538;
    fnPtr_20 = (char *)func_0x18010ffb0(param_2,pU64_28);
    if (0xf < uStack_520) {
      uVal_30 = uStack_520 + 1;
      lVal_19 = local_538._0_8_;
      if (0xfff < uVal_30) {
        lVal_19 = *(int64_t *)(local_538._0_8_ + -8);
        if (0x1f < (uint64_t)((local_538._0_8_ + -8) - lVal_19)) goto LAB_18010f791;
        uVal_30 = uStack_520 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_30);
    }
    if (*fnPtr_20 == '\0') goto LAB_18010ddf8;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x374c) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0x374c) = 1;
      *(uint32_t *)(lVal_19 + 0x3744) = 0x939c84a0;
      *(uint16_t *)(lVal_19 + 0x3748) = 0x11f;
      func_0x180673140(&LAB_180112b50);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_19 + 0x3744);
    if (*(char *)(lVal_19 + 0x3749) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xf7f5f1d5;
      *(byte *)(lVal_19 + 0x3748) = *(byte *)(lVal_19 + 0x3748) ^ 0x1f;
      *(uint8_t *)(lVal_19 + 0x3749) = 0;
    }
    _local_528 = (uint8_t  [16])0x0;
    local_538 = (uint8_t  [16])0x0;
    local_98 = param_1;
    sz_18 = strlen((char *)pU64_3);
    if ((int64_t)sz_18 < 0) goto LAB_18010f799;
    uVal_30 = 0xf;
    if (0xf < sz_18) {
      uVal_21 = sz_18 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_21) {
        uVal_30 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        lVal_19 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_19;
      }
      local_538._0_8_ = pU64_28;
    }
    uStack_520 = uVal_30;
    local_528 = (uint8_t  [8])sz_18;
    func_0x1806aa960(pU64_28,pU64_3,sz_18);
    pU64_28[sz_18] = 0;
    bFlag_32 = true;
    param_1 = local_98;
    if ((*fnPtr_20 == '\x01') &&
       (lVal_19 = func_0x1800a5e70(*(uint64_t *)(fnPtr_20 + 8),local_538), param_1 = local_98,
       lVal_19 != **(int64_t **)(fnPtr_20 + 8))) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3758) == '\0') {
        lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_19 + 0x3758) = 1;
        *(uint32_t *)(lVal_19 + 0x3750) = 0x929890bb;
        *(uint16_t *)(lVal_19 + 0x3754) = 0x11f;
        func_0x180673140(&LAB_180112b80);
      }
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_3 = (uint *)(lVal_19 + 0x3750);
      if (*(char *)(lVal_19 + 0x3755) == '\x01') {
        *pU64_3 = *pU64_3 ^ 0xf7f5f1d5;
        *(byte *)(lVal_19 + 0x3754) = *(byte *)(lVal_19 + 0x3754) ^ 0x1f;
        *(uint8_t *)(lVal_19 + 0x3755) = 0;
      }
      local_118 = (uint8_t  [16])0x0;
      _local_128 = (uint8_t  [16])0x0;
      sz_18 = strlen((char *)pU64_3);
      if ((int64_t)sz_18 < 0) goto LAB_18010f7c3;
      if (sz_18 < 0x10) {
        pU64_28 = local_128;
        uVal_30 = 0xf;
      }
      else {
        uVal_21 = sz_18 | 0xf;
        uVal_30 = 0x16;
        if (0x16 < uVal_21) {
          uVal_30 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
        }
        else {
          lVal_19 = func_0x180672de0(uVal_30 + 0x28);
          pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_19;
        }
        _local_128 = pU64_28;
      }
      local_118._8_8_ = uVal_30;
      local_118._0_8_ = sz_18;
      func_0x1806aa960(pU64_28,pU64_3,sz_18);
      pU64_28[sz_18] = 0;
      param_1 = local_98;
      bFlag_32 = true;
      if (*fnPtr_20 == '\x01') {
        lVal_19 = func_0x1800a5e70(*(uint64_t *)(fnPtr_20 + 8),local_128);
        bFlag_32 = lVal_19 == **(int64_t **)(fnPtr_20 + 8);
      }
      if ((uint64_t)local_118._8_8_ < 0x10) goto LAB_18010db7b;
      uVal_30 = local_118._8_8_ + 1;
      lVal_19 = (int64_t)_local_128;
      if (0xfff < uVal_30) {
        lVal_19 = *(int64_t *)((int64_t)_local_128 + -8);
        if (0x1f < (uint64_t)(((int64_t)_local_128 + -8) - lVal_19)) goto LAB_18010f791;
        uVal_30 = local_118._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_30);
    }
LAB_18010db7b:
    if (0xf < uStack_520) {
      uVal_30 = uStack_520 + 1;
      lVal_19 = local_538._0_8_;
      if (0xfff < uVal_30) {
        lVal_19 = *(int64_t *)(local_538._0_8_ + -8);
        if (0x1f < (uint64_t)((local_538._0_8_ + -8) - lVal_19)) goto LAB_18010f791;
        uVal_30 = uStack_520 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_30);
    }
    if (bFlag_32) goto LAB_18010ddf8;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x376c) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0x376c) = 1;
      *(uint8_t *)(lVal_19 + 0x3768) = 1;
      *(uint64_t *)(lVal_19 + 0x3760) = 0x89864e5530cdde58;
      func_0x180673140(&LAB_180112bb0);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_19 + 0x3760);
    if (*(char *)(lVal_19 + 0x3768) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x89f52b3945a9b135;
      *(uint8_t *)(lVal_19 + 0x3768) = 0;
    }
    _local_528 = (uint8_t  [16])0x0;
    local_538 = (uint8_t  [16])0x0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_18010f799;
    if (sz_18 < 0x10) {
      pU64_28 = local_538;
      uVal_30 = 0xf;
    }
    else {
      uVal_21 = sz_18 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_21) {
        uVal_30 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        lVal_19 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_19;
      }
      local_538._0_8_ = pU64_28;
    }
    local_528 = (uint8_t  [8])sz_18;
    uStack_520 = uVal_30;
    func_0x1806aa960(pU64_28,pU64_1,sz_18);
    pU64_28[sz_18] = 0;
    pU64_28 = local_538;
    fnPtr_22 = (char *)func_0x18010ffb0(param_2,pU64_28);
    param_1 = local_98;
    if (0xf < uStack_520) {
      uVal_30 = uStack_520 + 1;
      lVal_19 = local_538._0_8_;
      if (0xfff < uVal_30) {
        lVal_19 = *(int64_t *)(local_538._0_8_ + -8);
        if (0x1f < (uint64_t)((local_538._0_8_ + -8) - lVal_19)) goto LAB_18010f791;
        uVal_30 = uStack_520 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_30);
    }
    if (*fnPtr_22 != '\x02') goto LAB_18010ddf8;
    local_140 = fnPtr_22;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3780) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0x3780) = 1;
      uVal_23 = _UNK_1806b5248;
      *(uint64_t *)(lVal_19 + 0x3770) = _DAT_1806b5240;
      *(uint64_t *)(lVal_19 + 0x3778) = uVal_23;
      func_0x180673140(&LAB_180112bd0);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_2 = (uint8_t (*)[16])(lVal_19 + 0x3770);
    if (*(char *)(lVal_19 + 0x377f) == '\x01') {
      uVal_5 = *(uint32_t *)(lVal_19 + 0x3778);
      auArr_33 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_5 >> 0x10),uVal_5)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_19 + 0x377d) >> 8)),
                                                 (char)((uint)uVal_5 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_19 + 0x377d),(char)uVal_5)
                                       )),_DAT_1806ae110);
      auArr_34._0_8_ = auArr_33._0_8_;
      auArr_34._8_8_ =
           auArr_33._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_19 + 0x377c) << 0x20;
      auArr_33 = pblendw(auArr_34,*pArr16_2,0xf);
      *pArr16_2 = auArr_33 ^ _DAT_1806b5250;
    }
    _local_528 = (uint8_t  [16])0x0;
    local_538 = (uint8_t  [16])0x0;
    sz_18 = strlen((char *)pArr16_2);
    if ((int64_t)sz_18 < 0) goto LAB_18010f799;
    uVal_30 = 0xf;
    if (0xf < sz_18) {
      uVal_21 = sz_18 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_21) {
        uVal_30 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        lVal_19 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_19;
      }
      local_538._0_8_ = pU64_28;
    }
    uStack_520 = uVal_30;
    local_528 = (uint8_t  [8])sz_18;
    func_0x1806aa960(pU64_28,pArr16_2,sz_18);
    pU64_28[sz_18] = 0;
    uVal_23 = func_0x18010ffb0(param_2,local_538);
    auArr_7._12_4_ = 0;
    auArr_7._0_12_ = auStack_124;
    _local_128 = auArr_7 << 0x20;
    pU64_28 = local_128;
    func_0x180112c00(&DAT_1806b5270,uVal_23,pU64_28);
    param_1 = local_98;
    uVal_14 = local_128[0];
    if (0xf < uStack_520) {
      uVal_30 = uStack_520 + 1;
      lVal_19 = local_538._0_8_;
      if (0xfff < uVal_30) {
        lVal_19 = *(int64_t *)(local_538._0_8_ + -8);
        if (0x1f < (uint64_t)((local_538._0_8_ + -8) - lVal_19)) goto LAB_18010f791;
        uVal_30 = uStack_520 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_30);
    }
    func_0x1806ab010(local_538,0,0x328);
    func_0x180110070(local_538);
    uStack_520._0_2_ = 0;
    local_518[0] = *param_3;
    if (local_518 != param_3) {
      uVal_30 = *(uint64_t *)(param_3 + 6);
      if (*(uint64_t *)(param_3 + 8) < 0x10) {
        pU64_29 = param_3 + 2;
      }
      else {
        pU64_29 = *(uint32_t **)(param_3 + 2);
      }
      if (local_4f8 < uVal_30) {
        func_0x18007bba0(local_510,uVal_30);
      }
      else {
        ptr7_U64_31 = local_510;
        if (0xf < local_4f8) {
          ptr7_U64_31 = local_510[0];
        }
        local_500 = uVal_30;
        func_0x1806aa960(ptr7_U64_31,pU64_29,uVal_30);
        *(uint8_t *)((int64_t)ptr7_U64_31 + uVal_30) = 0;
      }
    }
    local_4f0 = *(uint64_t *)(param_3 + 10);
    uStack_4e8 = *(uint64_t *)(param_3 + 0xc);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x378c) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0x378c) = 1;
      *(uint32_t *)(lVal_19 + 0x3784) = 0x9df84ef2;
      *(uint16_t *)(lVal_19 + 0x3788) = 0x145;
      func_0x180673140(&LAB_180112f60);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_19 + 0x3784);
    if (*(char *)(lVal_19 + 0x3789) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xf9913b87;
      *(byte *)(lVal_19 + 0x3788) = *(byte *)(lVal_19 + 0x3788) ^ 0x45;
      *(uint8_t *)(lVal_19 + 0x3789) = 0;
    }
    local_118 = (uint8_t  [16])0x0;
    _local_128 = (uint8_t  [16])0x0;
    sz_18 = strlen((char *)pU64_3);
    if ((int64_t)sz_18 < 0) goto LAB_18010f7c9;
    uVal_30 = 0xf;
    if (0xf < sz_18) {
      uVal_21 = sz_18 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_21) {
        uVal_30 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        lVal_19 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_19;
      }
      _local_128 = pU64_28;
    }
    local_118._8_8_ = uVal_30;
    local_118._0_8_ = sz_18;
    func_0x1806aa960(pU64_28,pU64_3,sz_18);
    pU64_28[sz_18] = 0;
    uVal_23 = func_0x18010ffb0(fnPtr_20,local_128);
    local_1e8 = (uint8_t  [16])0x0;
    local_1d8 = 0;
    local_1d0 = 0xf;
    func_0x180086960(uVal_23,local_1e8);
    pU64_28 = local_88;
    func_0x180056c60(pU64_28,local_1e8);
    local_4a8 = local_88;
    uStack_4a0 = uStack_80;
    if (0xf < (uint64_t)local_118._8_8_) {
      uVal_30 = local_118._8_8_ + 1;
      lVal_19 = (int64_t)_local_128;
      if (0xfff < uVal_30) {
        lVal_19 = *(int64_t *)((int64_t)_local_128 + -8);
        if (0x1f < (uint64_t)(((int64_t)_local_128 + -8) - lVal_19)) goto LAB_18010f791;
        uVal_30 = local_118._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_30);
    }
    local_498 = 1;
    local_478 = 2;
    local_474 = 2;
    local_42f = uVal_14;
    local_42e = uVal_14;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3798) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0x3798) = 1;
      *(uint32_t *)(lVal_19 + 0x3790) = 0x6c56225f;
      *(uint16_t *)(lVal_19 + 0x3794) = 0x1a1;
      func_0x180673140(&LAB_180112f90);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_19 + 0x3790);
    if (*(char *)(lVal_19 + 0x3795) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x93b4331;
      *(byte *)(lVal_19 + 0x3794) = *(byte *)(lVal_19 + 0x3794) ^ 0xa1;
      *(uint8_t *)(lVal_19 + 0x3795) = 0;
    }
    local_78._0_16_ = (uint8_t  [16])0x0;
    _local_88 = (uint8_t  [16])0x0;
    sz_18 = strlen((char *)pU64_3);
    if ((int64_t)sz_18 < 0) goto LAB_18010f7cf;
    uVal_30 = 0xf;
    if (0xf < sz_18) {
      uVal_21 = sz_18 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_21) {
        uVal_30 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        lVal_19 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_19;
      }
      local_88 = (uint8_t  [8])pU64_28;
    }
    local_78._8_8_ = uVal_30;
    local_78._0_8_ = sz_18;
    func_0x1806aa960(pU64_28,pU64_3,sz_18);
    pU64_28[sz_18] = 0;
    pU64_28 = local_88;
    uVal_23 = func_0x18010ffb0(fnPtr_20,pU64_28);
    _local_128 = (uint8_t  [16])0x0;
    local_118 = ZEXT816(0xf) << 0x40;
    func_0x180086960(uVal_23,local_128);
    if (0xf < uStack_410) {
      uVal_30 = uStack_410 + 1;
      lVal_19 = local_428;
      if (0xfff < uVal_30) {
        lVal_19 = *(int64_t *)(local_428 + -8);
        if (0x1f < (uint64_t)((local_428 + -8) - lVal_19)) goto LAB_18010f791;
        uVal_30 = uStack_410 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_30);
    }
    local_418 = local_118._0_8_;
    uStack_410 = local_118._8_8_;
    local_428 = (int64_t)_local_128;
    uStack_420 = auStack_124._4_8_;
    local_118 = ZEXT816(0xf) << 0x40;
    auArr_8[15] = 0;
    auArr_8._0_15_ = stack0xfffffffffffffed9;
    _local_128 = auArr_8 << 8;
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_30 = local_78._8_8_ + 1;
      lVal_19 = (int64_t)local_88;
      if (0xfff < uVal_30) {
        lVal_19 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_19)) goto LAB_18010f791;
        uVal_30 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_30);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x37b0) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0x37b0) = 1;
      *(uint8_t *)(lVal_19 + 0x37ac) = 1;
      *(uint64_t *)(lVal_19 + 0x37a0) = 0x1b5ba00728a2cccd;
      *(uint32_t *)(lVal_19 + 0x37a8) = 0x4bbfc6c0;
      func_0x180673140(&LAB_180112fc0);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_19 + 0x37a0);
    if (*(char *)(lVal_19 + 0x37ac) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x6f2bc9754bd1a9a9;
      *(uint *)(lVal_19 + 0x37a8) = *(uint *)(lVal_19 + 0x37a8) ^ 0x4bd1a9a9;
      *(uint8_t *)(lVal_19 + 0x37ac) = 0;
    }
    local_78._0_16_ = (uint8_t  [16])0x0;
    _local_88 = (uint8_t  [16])0x0;
    sz_18 = strlen((char *)pU64_1);
    if ((int64_t)sz_18 < 0) goto LAB_18010f7d5;
    param_2 = &DAT_0000000f;
    if (0xf < sz_18) {
      fnPtr_22 = (char *)(sz_18 | 0xf);
      param_2 = (char *)0x16;
      if ((char *)0x16 < fnPtr_22) {
        param_2 = fnPtr_22;
      }
      if (fnPtr_22 < (char *)0xfff) {
        pU64_28 = (uint8_t *)func_0x180672de0(param_2 + 1);
      }
      else {
        lVal_19 = func_0x180672de0(param_2 + 0x28);
        pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_19;
      }
      local_88 = (uint8_t  [8])pU64_28;
    }
    local_78._8_8_ = param_2;
    local_78._0_8_ = sz_18;
    func_0x1806aa960(pU64_28,pU64_1,sz_18);
    pU64_28[sz_18] = 0;
    if ((*fnPtr_20 == '\x01') &&
       (lVal_19 = func_0x1800a5e70(*(uint64_t *)(fnPtr_20 + 8),local_88),
       lVal_19 != **(int64_t **)(fnPtr_20 + 8))) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x37c8) == '\0') {
        lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_19 + 0x37c8) = 1;
        *(uint8_t *)(lVal_19 + 0x37c4) = 1;
        *(uint64_t *)(lVal_19 + 0x37b8) = 0x1b5ba00728a2cccd;
        *(uint32_t *)(lVal_19 + 0x37c0) = 0x4bbfc6c0;
        func_0x180673140(&LAB_180112ff0);
      }
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_19 + 0x37b8);
      if (*(char *)(lVal_19 + 0x37c4) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x6f2bc9754bd1a9a9;
        *(uint *)(lVal_19 + 0x37c0) = *(uint *)(lVal_19 + 0x37c0) ^ 0x4bd1a9a9;
        *(uint8_t *)(lVal_19 + 0x37c4) = 0;
      }
      local_1b8 = (uint8_t  [16])0x0;
      local_1c8 = (uint8_t  [16])0x0;
      sz_18 = strlen((char *)pU64_1);
      if ((int64_t)sz_18 < 0) goto LAB_18010f7db;
      if (sz_18 < 0x10) {
        pU64_28 = local_1c8;
        param_2 = &DAT_0000000f;
      }
      else {
        fnPtr_22 = (char *)(sz_18 | 0xf);
        param_2 = (char *)0x16;
        if ((char *)0x16 < fnPtr_22) {
          param_2 = fnPtr_22;
        }
        if (fnPtr_22 < (char *)0xfff) {
          pU64_28 = (uint8_t *)func_0x180672de0(param_2 + 1);
        }
        else {
          lVal_19 = func_0x180672de0(param_2 + 0x28);
          pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_19;
        }
        local_1c8._0_8_ = pU64_28;
      }
      local_1b8._8_8_ = param_2;
      local_1b8._0_8_ = sz_18;
      func_0x1806aa960(pU64_28,pU64_1,sz_18);
      pU64_28[sz_18] = 0;
      uVal_23 = func_0x18010ffb0(fnPtr_20,local_1c8);
      _local_128 = (uint8_t  [16])0x0;
      local_118 = ZEXT816(0xf) << 0x40;
      bFlag_32 = true;
      func_0x180086960(uVal_23,local_128);
    }
    else {
      _local_128 = (uint8_t  [16])0x0;
      local_118 = ZEXT816(0xf) << 0x40;
      bFlag_32 = false;
    }
    fnPtr_20 = local_140;
    if (0xf < uStack_3f0) {
      uVal_30 = uStack_3f0 + 1;
      lVal_19 = local_408;
      if (0xfff < uVal_30) {
        lVal_19 = *(int64_t *)(local_408 + -8);
        if (0x1f < (uint64_t)((local_408 + -8) - lVal_19)) goto LAB_18010f791;
        uVal_30 = uStack_3f0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_30);
    }
    local_3f8 = local_118._0_8_;
    uStack_3f0 = local_118._8_8_;
    local_408 = (int64_t)_local_128;
    uStack_400 = auStack_124._4_8_;
    local_118 = ZEXT816(0xf) << 0x40;
    auArr_9[15] = 0;
    auArr_9._0_15_ = stack0xfffffffffffffed9;
    _local_128 = auArr_9 << 8;
    if ((bFlag_32) && (0xf < (uint64_t)local_1b8._8_8_)) {
      uVal_30 = local_1b8._8_8_ + 1;
      lVal_19 = local_1c8._0_8_;
      if (0xfff < uVal_30) {
        lVal_19 = *(int64_t *)(local_1c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_1c8._0_8_ + -8) - lVal_19)) goto LAB_18010f791;
        uVal_30 = local_1b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_30);
    }
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_30 = local_78._8_8_ + 1;
      lVal_19 = (int64_t)local_88;
      if (0xfff < uVal_30) {
        lVal_19 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_19)) goto LAB_18010f791;
        uVal_30 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_30);
    }
    local_3e8 = (uint32_t)local_4a8;
    uStack_3e4 = local_4a8._4_4_;
    uStack_3e0 = (uint32_t)uStack_4a0;
    uStack_3dc = uStack_4a0._4_4_;
    local_3d8 = 1;
    local_3d2 = 1;
    local_3b8 = 0x707;
    local_35e = 1;
    local_160 = fnPtr_20;
    local_158 = (uint8_t  [16])0x0;
    local_168 = -0x8000000000000000;
    local_148 = -0x8000000000000000;
    ch_4 = *fnPtr_20;
    if (ch_4 == '\0') {
      local_148 = 1;
    }
    else if (ch_4 == '\x02') {
      auArr_13._8_8_ = 0;
      auArr_13._0_8_ = **(uint64_t **)(fnPtr_20 + 8);
      local_158 = auArr_13 << 0x40;
    }
    else if (ch_4 == '\x01') {
      local_158._8_8_ = 0;
      local_158._0_8_ = ***(uint64_t ***)(fnPtr_20 + 8);
    }
    else {
      local_148 = 0;
    }
    if (*fnPtr_20 == '\x02') {
      local_138 = *(int64_t *)(*(int64_t *)(fnPtr_20 + 8) + 8);
LAB_18010e7b7:
      local_130 = 0;
    }
    else {
      if (*fnPtr_20 != '\x01') {
        local_138 = 0;
        local_168 = 1;
        goto LAB_18010e7b7;
      }
      local_130 = **(int64_t **)(fnPtr_20 + 8);
      local_138 = 0;
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_19 + 0x37cc);
    local_178 = (uint *)(lVal_19 + 0x37d8);
    local_188 = (uint64_t *)(lVal_19 + 0x37e8);
    local_180 = (uint *)(lVal_19 + 0x37f8);
    local_170 = (uint *)(lVal_19 + 0x3804);
    param_3 = (uint32_t *)local_1a8;
    while (fnPtr_20 = local_160, local_160 == local_140) {
      if (*local_160 == '\x01') {
        if (local_158._0_8_ == local_130) goto LAB_18010f40f;
      }
      else if (*local_160 == '\x02') {
        if (local_158._8_8_ == local_138) {
LAB_18010f40f:
          local_90 = (char *)func_0x180672de0(0x328);
          func_0x1801139b0(local_90,local_538);
          *param_1 = local_90;
          func_0x18008a760(local_538);
          return param_1;
        }
      }
      else if (local_148 == local_168) goto LAB_18010f40f;
      local_90 = (char *)func_0x180083d00(&local_160);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x37d4) == '\0') {
        lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_24 + 0x37d4) = 1;
        *(uint32_t *)(lVal_24 + 0x37cc) = 0x62afe08d;
        *(uint16_t *)(lVal_24 + 0x37d0) = 0x137;
        func_0x180673140(&LAB_180113020);
        ch_4 = *(char *)(lVal_19 + 0x37d1);
      }
      else {
        ch_4 = *(char *)(lVal_19 + 0x37d1);
      }
      if (ch_4 == '\x01') {
        *pU64_3 = *pU64_3 ^ 0x7df99f9;
        *(byte *)(lVal_19 + 0x37d0) = *(byte *)(lVal_19 + 0x37d0) ^ 0x37;
        *(uint8_t *)(lVal_19 + 0x37d1) = 0;
      }
      local_118 = ZEXT816(0);
      _local_128 = ZEXT816(0);
      sz_18 = strlen((char *)pU64_3);
      if ((int64_t)sz_18 < 0) {
        func_0x18007ba70();
        goto LAB_18010f799;
      }
      param_2 = &DAT_0000000f;
      pU64_28 = local_128;
      if (0xf < sz_18) {
        fnPtr_20 = (char *)(sz_18 | 0xf);
        param_2 = (char *)0x16;
        if ((char *)0x16 < fnPtr_20) {
          param_2 = fnPtr_20;
        }
        if (fnPtr_20 < (char *)0xfff) {
          pU64_28 = (uint8_t *)func_0x180672de0(param_2 + 1);
        }
        else {
          lVal_24 = func_0x180672de0(param_2 + 0x28);
          pU64_28 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_24;
        }
        _local_128 = pU64_28;
      }
      local_118._8_8_ = param_2;
      local_118._0_8_ = sz_18;
      func_0x1806aa960(pU64_28,pU64_3,sz_18);
      pU64_28[sz_18] = 0;
      fnPtr_20 = local_90;
      bFlag_32 = true;
      if ((*local_90 == '\x01') &&
         (lVal_24 = func_0x1800a5e70(*(uint64_t *)(local_90 + 8),local_128),
         lVal_24 != **(int64_t **)(fnPtr_20 + 8))) {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x37e0) == '\0') {
          lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_24 + 0x37e0) = 1;
          *(uint32_t *)(lVal_24 + 0x37d8) = 0x63b6ec8c;
          *(uint16_t *)(lVal_24 + 0x37dc) = 0x137;
          func_0x180673140(&LAB_180113050);
          ch_4 = *(char *)((int64_t)local_178 + 5);
        }
        else {
          ch_4 = *(char *)((int64_t)local_178 + 5);
        }
        if (ch_4 == '\x01') {
          *local_178 = *local_178 ^ 0x7df99f9;
          *(byte *)(local_178 + 1) = *(byte *)(local_178 + 1) ^ 0x37;
          *(uint8_t *)((int64_t)local_178 + 5) = 0;
        }
        local_78._0_16_ = ZEXT816(0);
        _local_88 = ZEXT816(0);
        sz_18 = strlen((char *)local_178);
        if ((int64_t)sz_18 < 0) goto LAB_18010f7ab;
        param_2 = &DAT_0000000f;
        pU64_28 = local_88;
        if (0xf < sz_18) {
          fnPtr_20 = (char *)(sz_18 | 0xf);
          param_2 = (char *)0x16;
          if ((char *)0x16 < fnPtr_20) {
            param_2 = fnPtr_20;
          }
          if (fnPtr_20 < (char *)0xfff) {
            pU64_28 = (uint8_t *)func_0x180672de0(param_2 + 1);
          }
          else {
            lVal_24 = func_0x180672de0(param_2 + 0x28);
            pU64_28 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_28 + -8) = lVal_24;
          }
          local_88 = (uint8_t  [8])pU64_28;
        }
        local_78._8_8_ = param_2;
        local_78._0_8_ = sz_18;
        func_0x1806aa960(pU64_28,local_178,sz_18);
        fnPtr_20 = local_90;
        pU64_28[sz_18] = 0;
        bFlag_32 = true;
        if (*local_90 == '\x01') {
          lVal_24 = func_0x1800a5e70(*(uint64_t *)(local_90 + 8),local_88);
          bFlag_32 = lVal_24 == **(int64_t **)(fnPtr_20 + 8);
        }
        if (0xf < (uint64_t)local_78._8_8_) {
          uVal_30 = local_78._8_8_ + 1;
          lVal_24 = (int64_t)local_88;
          if (0xfff < uVal_30) {
            lVal_24 = *(int64_t *)((int64_t)local_88 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_24)) goto LAB_18010f791;
            uVal_30 = local_78._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_24,uVal_30);
        }
      }
      if (0xf < (uint64_t)local_118._8_8_) {
        uVal_30 = local_118._8_8_ + 1;
        lVal_24 = (int64_t)_local_128;
        if (0xfff < uVal_30) {
          lVal_24 = *(int64_t *)((int64_t)_local_128 + -8);
          if (0x1f < (uint64_t)(((int64_t)_local_128 + -8) - lVal_24)) goto LAB_18010f791;
          uVal_30 = local_118._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_24,uVal_30);
      }
      if (!bFlag_32) {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x37f4) == '\0') {
          lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_24 + 0x37f4) = 1;
          *(uint8_t *)(lVal_24 + 0x37f2) = 1;
          *(uint64_t *)(lVal_24 + 0x37e8) = 0x425ed59a6bf2bc66;
          *(uint16_t *)(lVal_24 + 0x37f0) = 0xd77e;
          func_0x180673140(&LAB_180113080);
          ch_4 = *(char *)((int64_t)local_188 + 10);
        }
        else {
          ch_4 = *(char *)((int64_t)local_188 + 10);
        }
        if (ch_4 == '\x01') {
          *local_188 = *local_188 ^ 0x213fa5c5059bd715;
          *(byte *)(local_188 + 1) = *(byte *)(local_188 + 1) ^ 0x15;
          *(byte *)((int64_t)local_188 + 9) = *(byte *)((int64_t)local_188 + 9) ^ 0xd7;
          *(uint8_t *)((int64_t)local_188 + 10) = 0;
        }
        local_118 = ZEXT816(0);
        _local_128 = ZEXT816(0);
        sz_18 = strlen((char *)local_188);
        if ((int64_t)sz_18 < 0) goto LAB_18010f79f;
        uVal_30 = 0xf;
        pU64_28 = local_128;
        if (0xf < sz_18) {
          uVal_21 = sz_18 | 0xf;
          uVal_30 = 0x16;
          if (0x16 < uVal_21) {
            uVal_30 = uVal_21;
          }
          if (uVal_21 < 0xfff) {
            pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
          }
          else {
            lVal_24 = func_0x180672de0(uVal_30 + 0x28);
            pU64_28 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_28 + -8) = lVal_24;
          }
          _local_128 = pU64_28;
        }
        local_118._8_8_ = uVal_30;
        local_118._0_8_ = sz_18;
        func_0x1806aa960(pU64_28,local_188,sz_18);
        pU64_28[sz_18] = 0;
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x3800) == '\0') {
          lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_24 + 0x3800) = 1;
          *(uint32_t *)(lVal_24 + 0x37f8) = 0x60ebae61;
          *(uint16_t *)(lVal_24 + 0x37fc) = 0x1c5;
          func_0x180673140(&LAB_1801130b0);
          ch_4 = *(char *)((int64_t)local_180 + 5);
        }
        else {
          ch_4 = *(char *)((int64_t)local_180 + 5);
        }
        if (ch_4 == '\x01') {
          *local_180 = *local_180 ^ 0x59bd715;
          *(byte *)(local_180 + 1) = *(byte *)(local_180 + 1) ^ 0xc5;
          *(uint8_t *)((int64_t)local_180 + 5) = 0;
        }
        local_198 = ZEXT816(0);
        local_1a8 = ZEXT816(0);
        sz_18 = strlen((char *)local_180);
        if ((int64_t)sz_18 < 0) goto LAB_18010f7a5;
        uVal_30 = 0xf;
        pU64_29 = param_3;
        if (0xf < sz_18) {
          uVal_21 = sz_18 | 0xf;
          uVal_30 = 0x16;
          if (0x16 < uVal_21) {
            uVal_30 = uVal_21;
          }
          if (uVal_21 < 0xfff) {
            pU64_29 = (uint32_t *)func_0x180672de0(uVal_30 + 1);
          }
          else {
            lVal_24 = func_0x180672de0(uVal_30 + 0x28);
            pU64_29 = (uint32_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_29 + -2) = lVal_24;
          }
          local_1a8._0_8_ = pU64_29;
        }
        local_198._8_8_ = uVal_30;
        local_198._0_8_ = sz_18;
        func_0x1806aa960(pU64_29,local_180,sz_18);
        *(uint8_t *)((int64_t)pU64_29 + sz_18) = 0;
        uVal_23 = func_0x18010ffb0(local_90,param_3);
        _local_88 = ZEXT816(0);
        local_78._0_8_ = 0;
        local_78._8_8_ = 0xf;
        func_0x180086960(uVal_23,local_88);
        uVal_30 = local_78._8_8_;
        pU64_28 = _local_128;
        param_2 = (char *)local_118._8_8_;
        pU64_27 = local_128;
        if (&DAT_0000000f < (uint64_t)local_118._8_8_) {
          pU64_27 = _local_128;
        }
        pU64_15 = (uint8_t *)local_88;
        _Buf1 = local_88;
        if (0xf < (uint64_t)local_78._8_8_) {
          _Buf1 = (uint8_t *)local_88;
        }
        if (local_78._0_8_ == local_118._0_8_) {
          if (local_118._0_8_ == 0) {
            bFlag_32 = true;
          }
          else {
            iVal_17 = memcmp(_Buf1,pU64_27,local_118._0_8_);
            bFlag_32 = iVal_17 == 0;
          }
        }
        else {
          bFlag_32 = false;
        }
        if (0xf < uVal_30) {
          uVal_21 = uVal_30 + 1;
          pU64_27 = pU64_15;
          if (0xfff < uVal_21) {
            pU64_27 = *(uint8_t **)(pU64_15 + -8);
            if ((uint8_t *)0x1f < pU64_15 + (-8 - (int64_t)pU64_27)) goto LAB_18010f791;
            uVal_21 = uVal_30 + 0x28;
          }
          thunk_FUN_180695dd0(pU64_27,uVal_21);
        }
        local_78._0_16_ = ZEXT816(0xf) << 0x40;
        auArr_10[15] = 0;
        auArr_10._0_15_ = stack0xffffffffffffff79;
        _local_88 = auArr_10 << 8;
        if (0xf < (uint64_t)local_198._8_8_) {
          uVal_30 = local_198._8_8_ + 1;
          lVal_24 = local_1a8._0_8_;
          if (0xfff < uVal_30) {
            lVal_24 = *(int64_t *)(local_1a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_1a8._0_8_ + -8) - lVal_24)) goto LAB_18010f791;
            uVal_30 = local_198._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_24,uVal_30);
        }
        if (&DAT_0000000f < param_2) {
          fnPtr_20 = param_2 + 1;
          pU64_27 = pU64_28;
          if ((char *)0xfff < fnPtr_20) {
            pU64_27 = *(uint8_t **)(pU64_28 + -8);
            if ((uint8_t *)0x1f < pU64_28 + (-8 - (int64_t)pU64_27)) goto LAB_18010f791;
            fnPtr_20 = param_2 + 0x28;
            param_2 = fnPtr_20;
          }
          thunk_FUN_180695dd0(pU64_27,fnPtr_20);
        }
        param_1 = local_98;
        if (bFlag_32) {
          _local_128 = ZEXT816(0);
          local_118 = ZEXT816(0xf) << 0x40;
          local_d8 = ZEXT816(0);
          local_c8 = 0;
          uStack_e8 = SUB168(ZEXT816(0),4);
          uStack_e0 = 0;
          uStack_f8 = 0;
          uStack_f0 = 0;
          local_ec = 0;
          local_c0 = 0xf;
          local_b8 = ZEXT816(0);
          local_a8 = 0;
          local_a0 = 0xf;
          local_108._2_14_ = SUB1614(ZEXT816(0),2);
          local_108._0_2_ = 1;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x380c)
              == '\0') {
            lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_24 + 0x380c) = 1;
            *(uint32_t *)(lVal_24 + 0x3804) = 0x5312e8c4;
            *(uint16_t *)(lVal_24 + 0x3808) = 0x189;
            func_0x180673140(&LAB_1801130e0);
            ch_4 = *(char *)((int64_t)local_170 + 5);
          }
          else {
            ch_4 = *(char *)((int64_t)local_170 + 5);
          }
          if (ch_4 == '\x01') {
            *local_170 = *local_170 ^ 0x377b9db1;
            *(byte *)(local_170 + 1) = *(byte *)(local_170 + 1) ^ 0x89;
            *(uint8_t *)((int64_t)local_170 + 5) = 0;
          }
          local_78._0_16_ = ZEXT816(0);
          _local_88 = ZEXT816(0);
          sz_18 = strlen((char *)local_170);
          if ((int64_t)sz_18 < 0) goto LAB_18010f7b1;
          param_2 = &DAT_0000000f;
          pU64_28 = local_88;
          if (0xf < sz_18) {
            fnPtr_20 = (char *)(sz_18 | 0xf);
            param_2 = (char *)0x16;
            if ((char *)0x16 < fnPtr_20) {
              param_2 = fnPtr_20;
            }
            if (fnPtr_20 < (char *)0xfff) {
              pU64_28 = (uint8_t *)func_0x180672de0(param_2 + 1);
            }
            else {
              lVal_24 = func_0x180672de0(param_2 + 0x28);
              pU64_28 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_28 + -8) = lVal_24;
            }
            local_88 = (uint8_t  [8])pU64_28;
          }
          local_78._8_8_ = param_2;
          local_78._0_8_ = sz_18;
          func_0x1806aa960(pU64_28,local_170,sz_18);
          pU64_28[sz_18] = 0;
          uVal_23 = func_0x18010ffb0(local_90,local_88);
          local_208 = ZEXT816(0);
          local_1f8 = 0;
          local_1f0 = 0xf;
          func_0x180086960(uVal_23,local_208);
          func_0x180056c60(param_3,local_208);
          uStack_f0 = local_1a8._0_4_;
          local_ec = local_1a8._4_4_;
          uStack_e8 = local_1a8._8_8_;
          if (0xf < (uint64_t)local_78._8_8_) {
            uVal_30 = local_78._8_8_ + 1;
            lVal_24 = (int64_t)local_88;
            if (0xfff < uVal_30) {
              lVal_24 = *(int64_t *)((int64_t)local_88 + -8);
              if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_24)) goto LAB_18010f791;
              uVal_30 = local_78._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_24,uVal_30);
          }
          if (local_350 == local_348) {
            func_0x180113110(local_358,local_350,local_128);
          }
          else {
            func_0x180113650(local_350,local_128);
            local_350 = local_350 + 0x90;
          }
          if (0xf < local_a0) {
            uVal_30 = local_a0 + 1;
            lVal_24 = local_b8._0_8_;
            if (0xfff < uVal_30) {
              lVal_24 = *(int64_t *)(local_b8._0_8_ + -8);
              if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_24)) goto LAB_18010f791;
              uVal_30 = local_a0 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_24,uVal_30);
          }
          local_a8 = 0;
          local_a0 = 0xf;
          auArr_11[15] = 0;
          auArr_11._0_15_ = local_b8._1_15_;
          local_b8 = auArr_11 << 8;
          if (0xf < local_c0) {
            uVal_30 = local_c0 + 1;
            lVal_24 = local_d8._0_8_;
            if (0xfff < uVal_30) {
              lVal_24 = *(int64_t *)(local_d8._0_8_ + -8);
              if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_24)) goto LAB_18010f791;
              uVal_30 = local_c0 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_24,uVal_30);
          }
          local_c8 = 0;
          local_c0 = 0xf;
          auArr_12[15] = 0;
          auArr_12._0_15_ = local_d8._1_15_;
          local_d8 = auArr_12 << 8;
          if (0xf < (uint64_t)local_118._8_8_) {
            uVal_30 = local_118._8_8_ + 1;
            lVal_24 = (int64_t)_local_128;
            if (0xfff < uVal_30) {
              lVal_24 = *(int64_t *)((int64_t)_local_128 + -8);
              if (0x1f < (uint64_t)(((int64_t)_local_128 + -8) - lVal_24)) goto LAB_18010f791;
              uVal_30 = local_118._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_24,uVal_30);
          }
        }
      }
      if (*local_160 == '\x02') {
        local_158._8_8_ = local_158._8_8_ + 0x10;
      }
      else if (*local_160 == '\x01') {
        pLong_16 = *(int64_t **)(local_158._0_8_ + 0x10);
        if (*(char *)((int64_t)*(int64_t **)(local_158._0_8_ + 0x10) + 0x19) == '\0') {
          do {
            pLong_25 = pLong_16;
            pLong_16 = (int64_t *)*pLong_25;
          } while (*(char *)((int64_t)(int64_t *)*pLong_25 + 0x19) == '\0');
LAB_18010f25c:
          local_158._0_8_ = pLong_25;
        }
        else {
          do {
            pLong_25 = *(int64_t **)(local_158._0_8_ + 8);
            if (*(char *)((int64_t)pLong_25 + 0x19) != '\0') goto LAB_18010f25c;
            bFlag_32 = (int64_t *)local_158._0_8_ == (int64_t *)pLong_25[2];
            local_158._0_8_ = pLong_25;
          } while (bFlag_32);
        }
      }
      else {
        local_148 = local_148 + 1;
      }
    }
    func_0x180001060(local_88,"cannot compare iterators of different containers");
    func_0x180083e30(local_128,0xd4,local_88,fnPtr_20);
    func_0x18067a120(local_128,&DAT_180768740);
LAB_18010f48b:
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_19 + 0x3708) = 1;
    *(uint64_t *)(lVal_19 + 0x3700) = 0x191770ccd907c1d;
    func_0x180673140(&LAB_180112aa0);
  } while( true );
}

// Unwind@18010f7f0
void Unwind_18010f7f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4d0);
  return;
}

// Unwind@18010f840
void Unwind_18010f840(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x430);
  return;
}

// Unwind@18010f890
void Unwind_18010f890(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18010f8d0
void Unwind_18010f8d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18010f910
void Unwind_18010f910(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x430);
  return;
}

// Unwind@18010f960
void Unwind_18010f960(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18010f9a0
void Unwind_18010f9a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18010f9e0
void Unwind_18010f9e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x430);
  return;
}

// Unwind@18010fa30
void Unwind_18010fa30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4d0);
  return;
}

// Unwind@18010fa80
void Unwind_18010fa80(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x4c8),0x328);
  return;
}

// Unwind@18010fad0
void Unwind_18010fad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18010fb10
void Unwind_18010fb10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x430);
  return;
}

// Unwind@18010fb60
void Unwind_18010fb60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4d0);
  return;
}

// Unwind@18010fbb0
void Unwind_18010fbb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x390);
  return;
}

// Unwind@18010fc00
void Unwind_18010fc00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4d0);
  return;
}

// Unwind@18010fc50
void Unwind_18010fc50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4d0);
  return;
}

// Unwind@18010fca0
void Unwind_18010fca0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x430);
  return;
}

// Unwind@18010fcf0
void Unwind_18010fcf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3b0);
  return;
}

// Unwind@18010fd40
void Unwind_18010fd40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x430);
  return;
}

// Unwind@18010fd90
void Unwind_18010fd90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4d0);
  return;
}

// Unwind@18010fde0
void Unwind_18010fde0(uint64_t param_1,int64_t param_2)
{
  func_0x18008ae20(param_2 + 0x430);
  return;
}

// Unwind@18010fe30
void Unwind_18010fe30(uint64_t param_1,int64_t param_2)
{
  func_0x18008a760(param_2 + 0x20);
  return;
}

// Unwind@18010fe70
void Unwind_18010fe70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@18010fec0
void Unwind_18010fec0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x430);
  return;
}

// Unwind@18010ff10
void Unwind_18010ff10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4d0);
  return;
}

// Unwind@18010ff60
void Unwind_18010ff60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  return;
}

// func_0x18010ffb0
int64_t func_0x18010ffb0(char *param_1)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  uint8_t local_80 [56];
  uint8_t local_48 [32];
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 == '\x01') {
    lVal_2 = func_0x1800a5e70(*(uint64_t *)(param_1 + 8));
    return lVal_2 + 0x40;
  }
  local_28 = func_0x1800833d0();
  func_0x180083260(local_48,"cannot use operator[] with a string argument with ",&local_28);
  func_0x180082f00(local_80,0x131,local_48,param_1);
  func_0x18067a120(local_80,&DAT_180768700);
  fnPtr_1 = (func_ptr_t )swi(3);
  lVal_2 = (*fnPtr_1)();
  return lVal_2;
}

// Unwind@180110040
void Unwind_180110040(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x180110070
void func_0x180110070(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint32_t local_48;
  uint8_t local_41;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x28) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0xf;
  *(uint8_t (*)[16])(param_1 + 0x60) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0xf;
  *(uint8_t (*)[16])(param_1 + 0xd0) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 0xe8) = 0xf;
  *(uint8_t (*)[16])(param_1 + 0xf0) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0x100) = 0;
  *(uint8_t (*)[16])(param_1 + 0x110) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0xf;
  *(uint8_t (*)[16])(param_1 + 0x130) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0x140) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0xf;
  *(uint8_t (*)[16])(param_1 + 0x168) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 400) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x1b0) = ZEXT816(0);
  *(uint32_t *)(param_1 + 0x1c0) = 0x2c;
  *(uint16_t *)(param_1 + 0x1c4) = 0xffff;
  *(uint32_t *)(param_1 + 0x1cc) = 2;
  *(uint8_t *)(param_1 + 0x1da) = 1;
  *(uint8_t (*)[16])(param_1 + 0x250) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x240) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x230) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x220) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x210) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x200) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x1f0) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x1e0) = ZEXT816(0);
  local_48 = 0;
  func_0x180112d50(param_1 + 0x260,&local_48,&local_41,param_4,param_1 + 0xd0,param_1 + 0xf0,
                param_1 + 0x110,param_1 + 0x130,param_1 + 0x1e0);
  *(uint8_t (*)[16])(param_1 + 0x2c0) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x2b0) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x2a0) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0x2d0) = 0xf;
  *(uint8_t (*)[16])(param_1 + 0x2d8) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0x2e8) = 0;
  *(uint64_t *)(param_1 + 0x2f0) = 0xf;
  *(uint8_t (*)[16])(param_1 + 0x2f8) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0x308) = 0;
  *(uint64_t *)(param_1 + 0x310) = 0xf;
  return;
}

// Unwind@180110260
void Unwind_180110260(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x48);
  func_0x1800349b0(lVal_1 + 0x210);
  func_0x180112cd0(*(uint64_t *)(param_2 + 0x40));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x38));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x30));
  func_0x180037f80(*(uint64_t *)(param_2 + 0x28));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x20));
  func_0x180034df0(lVal_1 + 0x58);
  func_0x180034df0(lVal_1 + 0x20);
  func_0x180038830(lVal_1);
  return;
}

// func_0x1801102f0
uint64_t func_0x1801102f0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x18);
}

// func_0x180110350
uint64_t func_0x180110350(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x28);
}

// func_0x1801103b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint32_t * func_0x1801103b0(int64_t param_1,uint32_t *param_2)
{
  uint8_t (*_Str)[16];
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint64_t uVal_8;
  size_t sz_9;
  uint64_t uVal_10;
  uint32_t *pU64_11;
  uint8_t *pU64_12;
  uint8_t *pU64_13;
  int64_t lVal_14;
  uint64_t uVal_15;
  uint8_t auArr_16 [16];
  uint8_t local_68 [16];
  size_t local_58;
  uint64_t uStack_50;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3820) == '\0') {
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_14 + 0x3820) = 1;
    uVal_8 = _UNK_1806b5268;
    *(uint64_t *)(lVal_14 + 0x3810) = _DAT_1806b5260;
    *(uint64_t *)(lVal_14 + 0x3818) = uVal_8;
    func_0x180673140(&LAB_180115010);
  }
  lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_14 + 0x3810);
  if (*(char *)(lVal_14 + 0x381f) == '\x01') {
    uVal_1 = *(uint32_t *)(lVal_14 + 0x3818);
    auArr_16 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((uint
                                                  )uVal_1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_1 >> 0x10),uVal_1)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_14 + 0x381d) >> 8)),
                                               (char)((uint)uVal_1 >> 8)),
                                      CONCAT11((char)*(uint16_t *)(lVal_14 + 0x381d),(char)uVal_1)))
                     ,_DAT_1806ae110);
    auArr_16._8_8_ = auArr_16._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_14 + 0x381c) << 0x20
    ;
    auArr_16 = pblendw(auArr_16,*_Str,0xf);
    *_Str = auArr_16 ^ _DAT_1806b5220;
  }
  local_68 = (uint8_t  [16])0x0;
  sz_9 = strlen((char *)_Str);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
    goto LAB_1801106ac;
  }
  if (sz_9 < 0x10) {
    pU64_12 = local_68;
    uVal_15 = 0xf;
  }
  else {
    uVal_10 = sz_9 | 0xf;
    uVal_15 = 0x16;
    if (0x16 < uVal_10) {
      uVal_15 = uVal_10;
    }
    if (uVal_10 < 0xfff) {
      pU64_12 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
    }
    else {
      lVal_14 = func_0x180672de0(uVal_15 + 0x28);
      pU64_12 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_12 + -8) = lVal_14;
    }
    local_68._0_8_ = pU64_12;
  }
  local_58 = sz_9;
  uStack_50 = uVal_15;
  func_0x1806aa960(pU64_12,_Str,sz_9);
  pU64_12[sz_9] = 0;
  uVal_15 = *(uint64_t *)(param_1 + 0x158);
  if (*(uint64_t *)(param_1 + 0x160) < 0x10) {
    pU64_12 = (uint8_t *)(param_1 + 0x148);
  }
  else {
    pU64_12 = *(uint8_t **)(param_1 + 0x148);
  }
  if (uStack_50 - local_58 < uVal_15) {
    pU64_11 = (uint32_t *)func_0x1800871a0(local_68,uVal_15,local_58,0,pU64_12,uVal_15);
  }
  else {
    uVal_10 = uVal_15;
    if (uStack_50 < 0x10) {
      pU64_13 = local_68;
      if (pU64_13 < pU64_12 + uVal_15) goto LAB_1801105ac;
    }
    else {
      pU64_13 = (uint8_t *)local_68._0_8_;
      if ((uint64_t)local_68._0_8_ < pU64_12 + uVal_15) {
LAB_1801105ac:
        if ((pU64_12 <= pU64_13 + local_58) &&
           (uVal_10 = (int64_t)pU64_13 - (int64_t)pU64_12,
           pU64_13 < pU64_12 || (int64_t)pU64_13 - (int64_t)pU64_12 == 0)) {
          uVal_10 = 0;
        }
      }
    }
    lVal_14 = local_58 + 1;
    local_58 = local_58 + uVal_15;
    func_0x1806aa960(pU64_13 + uVal_15,pU64_13,lVal_14);
    func_0x1806aa960(pU64_13,pU64_12,uVal_10);
    func_0x1806aa960(pU64_13 + uVal_10,pU64_12 + uVal_10 + uVal_15,uVal_15 - uVal_10);
    pU64_11 = (uint32_t *)local_68;
  }
  uVal_1 = *pU64_11;
  uVal_2 = pU64_11[1];
  uVal_3 = pU64_11[2];
  uVal_4 = pU64_11[3];
  uVal_5 = pU64_11[5];
  uVal_6 = pU64_11[6];
  uVal_7 = pU64_11[7];
  param_2[4] = pU64_11[4];
  param_2[5] = uVal_5;
  param_2[6] = uVal_6;
  param_2[7] = uVal_7;
  *param_2 = uVal_1;
  param_2[1] = uVal_2;
  param_2[2] = uVal_3;
  param_2[3] = uVal_4;
  *(uint64_t *)(pU64_11 + 4) = 0;
  *(uint64_t *)(pU64_11 + 6) = 0xf;
  *(uint8_t *)pU64_11 = 0;
  if (0xf < uStack_50) {
    uVal_15 = uStack_50 + 1;
    lVal_14 = local_68._0_8_;
    if (0xfff < uVal_15) {
      lVal_14 = *(int64_t *)(local_68._0_8_ + -8);
      if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_14)) {
LAB_1801106ac:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_15 = uStack_50 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_14,uVal_15);
  }
  return param_2;
}

// Unwind@1801106b0
void Unwind_1801106b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x1801106e0
void func_0x1801106e0(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x0001801106e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 8))();
  return;
}

// func_0x1801106f0
int64_t func_0x1801106f0(int64_t param_1)
{
  return param_1 + 0xe0;
}

// func_0x180110750
int64_t func_0x180110750(int64_t param_1)
{
  return param_1 + 0xe4;
}

// func_0x1801107b0
int64_t func_0x1801107b0(int64_t param_1)
{
  return param_1 + 0xe8;
}
