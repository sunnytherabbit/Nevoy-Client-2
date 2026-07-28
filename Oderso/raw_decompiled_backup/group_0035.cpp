#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@18031b4a0
void Unwind_18031b4a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x90));
  func_0x180001e70(*(uint64_t *)(param_2 + 0xe8));
  return;
}

// func_0x18031b4d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18031b4d0(uint64_t *param_1)
{
  char *fnPtr_1;
  uint64_t *pU64_2;
  uint *_Str;
  uint8_t (*pArr16_3)[16];
  byte *_Str_00;
  uint32_t uVal_4;
  func_ptr_t fnPtr_5;
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  int64_t lVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint64_t *pU64_14;
  size_t sz_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  uint64_t *pU64_18;
  uint32_t *pU64_19;
  uint32_t *pU64_20;
  uint32_t *pU64_21;
  uint64_t uVal_22;
  uint8_t uVal_23;
  uint32_t uVal_25;
  uint64_t uVal_24;
  uint8_t ***ptr3_U64_26;
  uint32_t uVal_27;
  uint in_stack_fffffffffffffd28;
  uint uVal_28;
  uint8_t **local_2b8;
  uint64_t *local_2b0;
  uint8_t ***local_280;
  uint8_t **local_278;
  uint64_t *local_270;
  uint8_t ***local_240;
  uint8_t **local_238;
  uint64_t *local_230;
  uint8_t ***local_200;
  uint8_t **local_1f8;
  uint64_t *local_1f0;
  uint8_t ***local_1c0;
  uint8_t **local_1b8;
  uint64_t *local_1b0;
  uint8_t ***local_180;
  uint8_t **local_178;
  uint64_t *local_170;
  uint8_t ***local_140;
  uint32_t local_138;
  uint32_t uStack_134;
  uint32_t uStack_130;
  uint32_t uStack_12c;
  uint32_t local_128;
  uint32_t uStack_124;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  uint8_t local_118 [56];
  uint64_t local_e0;
  uint32_t local_d8;
  uint32_t uStack_d4;
  uint32_t uStack_d0;
  uint32_t uStack_cc;
  uint32_t uStack_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint32_t uStack_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint32_t uStack_a8;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  uint32_t uStack_84;
  uint64_t uStack_80;
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
  local_d8 = _DAT_1806c6b0c;
  uStack_d4 = _UNK_1806c6b10;
  uStack_d0 = _UNK_1806c6b14;
  uStack_cc = CONCAT13(0xa2,(int3)_UNK_1806c6b18);
  uStack_c8 = CONCAT13(uStack_c8._3_1_,0x4d2611);
  local_78 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xed8c) == '\0') {
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_17 + 0xed8c) = 1;
    func_0x18007cb80(lVal_17 + 0xed75,&local_d8);
    func_0x180673140(&LAB_180366550);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xed75);
  func_0x18036f870(fnPtr_1);
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  sz_15 = strlen(fnPtr_1);
  if ((int64_t)sz_15 < 0) {
    func_0x18007ba70();
LAB_18031d09e:
    local_61 = 1;
    func_0x18007ba70();
LAB_18031d0ab:
    local_67 = 1;
    func_0x18007ba70();
LAB_18031d0b8:
    local_62 = 1;
    func_0x18007ba70();
LAB_18031d0c5:
    local_68 = 1;
    func_0x18007ba70();
LAB_18031d0d2:
    local_63 = 1;
    func_0x18007ba70();
LAB_18031d0df:
    local_69 = 1;
    func_0x18007ba70();
LAB_18031d0ec:
    local_6b = 1;
    func_0x18007ba70();
LAB_18031d0f9:
    local_6a = 1;
    func_0x18007ba70();
LAB_18031d106:
    local_64 = 1;
    func_0x18007ba70();
LAB_18031d113:
    local_6c = 1;
    func_0x18007ba70();
LAB_18031d120:
    local_65 = 1;
    func_0x18007ba70();
LAB_18031d12d:
    local_6d = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_15 < 0x10) {
      pU64_19 = &local_d8;
      uVal_22 = 0xf;
    }
    else {
      uVal_16 = sz_15 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_16) {
        uVal_22 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        pU64_19 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        lVal_17 = func_0x180672de0(uVal_22 + 0x28);
        pU64_19 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -2) = lVal_17;
      }
      local_d8 = SUB84(pU64_19,0);
      uStack_d4 = (uint32_t)((uint64_t)pU64_19 >> 0x20);
    }
    uStack_c8 = (uint32_t)sz_15;
    uStack_c4 = (uint32_t)(sz_15 >> 0x20);
    uStack_c0 = (uint32_t)uVal_22;
    uStack_bc = (uint32_t)(uVal_22 >> 0x20);
    func_0x1806aa960(pU64_19,fnPtr_1,sz_15);
    *(uint8_t *)((int64_t)pU64_19 + sz_15) = 0;
    pU64_19 = &local_d8;
    func_0x1801c2ba0(local_78,0,0,pU64_19);
    uVal_22 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_22) {
      lVal_10 = CONCAT44(uStack_d4,local_d8);
      uVal_16 = uVal_22 + 1;
      lVal_17 = lVal_10;
      if (0xfff < uVal_16) {
        lVal_17 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
        uVal_16 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_16);
    }
    *local_78 = &PTR_LAB_1806c48f0;
    *(uint8_t *)(local_78 + 0x10) = 0;
    uVal_4 = _UNK_1806b669c;
    uVal_27 = _UNK_1806b6698;
    uVal_25 = _UNK_1806b6694;
    *(uint32_t *)((int64_t)local_78 + 0x84) = _DAT_1806b6690;
    *(uint32_t *)(local_78 + 0x11) = uVal_25;
    *(uint32_t *)((int64_t)local_78 + 0x8c) = uVal_27;
    *(uint32_t *)(local_78 + 0x12) = uVal_4;
    *(uint32_t *)((int64_t)local_78 + 0x94) = 0x3f333333;
    pU64_18 = local_78 + 0x13;
    *(uint16_t *)(local_78 + 0x13) = 0x100;
    *(uint8_t *)((int64_t)local_78 + 0x9a) = 1;
    *(uint32_t *)((int64_t)local_78 + 0x9c) = 0;
    local_e0 = 0;
    if (DAT_18083fd98 == (uint64_t *)0x0) {
      uVal_23 = 0;
    }
    else {
      local_e0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_118);
      uVal_23 = *(uint8_t *)pU64_18;
    }
    local_98 = _DAT_1806c6b1f;
    uStack_94 = _UNK_1806c6b23;
    uStack_90 = _UNK_1806c6b27;
    uStack_8c = _UNK_1806c6b2b;
    uStack_88 = 0xc70e2106;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xeda4) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xeda4) = 1;
      func_0x18007cfc0(lVal_17 + 0xed8d,&local_98);
      func_0x180673140(&LAB_180366580);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xed8d);
    func_0x18036f8b0(fnPtr_1);
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    sz_15 = strlen(fnPtr_1);
    if ((int64_t)sz_15 < 0) goto LAB_18031d09e;
    uVal_22 = 0xf;
    if (0xf < sz_15) {
      uVal_16 = sz_15 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_16) {
        uVal_22 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        local_61 = 1;
        pU64_19 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_61 = 1;
        lVal_17 = func_0x180672de0(uVal_22 + 0x28);
        pU64_19 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -2) = lVal_17;
      }
      local_d8 = SUB84(pU64_19,0);
      uStack_d4 = (uint32_t)((uint64_t)pU64_19 >> 0x20);
    }
    uStack_c8 = (uint32_t)sz_15;
    uStack_c4 = (uint32_t)(sz_15 >> 0x20);
    uStack_c0 = (uint32_t)uVal_22;
    uStack_bc = (uint32_t)(uVal_22 >> 0x20);
    func_0x1806aa960(pU64_19,fnPtr_1,sz_15);
    *(uint8_t *)((int64_t)pU64_19 + sz_15) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xedb4) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xedb4) = 1;
      *(uint8_t *)(lVal_17 + 0xedb0) = 1;
      *(uint64_t *)(lVal_17 + 0xeda8) = 0xe9d0dfd3a60e2c37;
      func_0x180673140(&LAB_1803665b0);
    }
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_17 + 0xeda8);
    if (*(char *)(lVal_17 + 0xedb0) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xe9b5b3b1c77d4573;
      *(uint8_t *)(lVal_17 + 0xedb0) = 0;
    }
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    sz_15 = strlen((char *)pU64_2);
    if ((int64_t)sz_15 < 0) goto LAB_18031d0ab;
    if (sz_15 < 0x10) {
      pU64_19 = &local_98;
      uVal_22 = 0xf;
    }
    else {
      uVal_16 = sz_15 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_16) {
        uVal_22 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        local_67 = 1;
        pU64_19 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_67 = 1;
        lVal_17 = func_0x180672de0(uVal_22 + 0x28);
        pU64_19 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -2) = lVal_17;
      }
      local_98 = SUB84(pU64_19,0);
      uStack_94 = (uint32_t)((uint64_t)pU64_19 >> 0x20);
    }
    uStack_88 = (uint32_t)sz_15;
    uStack_84 = (uint32_t)(sz_15 >> 0x20);
    uStack_80 = uVal_22;
    func_0x1806aa960(pU64_19,pU64_2,sz_15);
    *(uint8_t *)((int64_t)pU64_19 + sz_15) = 0;
    in_stack_fffffffffffffd28 = in_stack_fffffffffffffd28 & 0xffffff00;
    pU64_19 = &local_98;
    pU64_20 = &local_d8;
    func_0x1801ccd70(local_78,pU64_19,pU64_20,pU64_18,uVal_23,local_118,in_stack_fffffffffffffd28);
    if (0xf < uStack_80) {
      lVal_10 = CONCAT44(uStack_94,local_98);
      uVal_22 = uStack_80 + 1;
      lVal_17 = lVal_10;
      if (0xfff < uVal_22) {
        lVal_17 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
        uVal_22 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_22);
    }
    uVal_22 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_22) {
      lVal_10 = CONCAT44(uStack_d4,local_d8);
      uVal_16 = uVal_22 + 1;
      lVal_17 = lVal_10;
      if (0xfff < uVal_16) {
        lVal_17 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
        uVal_16 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_16);
    }
    local_2b8 = &PTR_LAB_1806c7e50;
    local_2b0 = local_78;
    local_280 = &local_2b8;
    uVal_23 = *(uint8_t *)((int64_t)local_78 + 0x99);
    uStack_c8 = _DAT_1806c6b43;
    uStack_c4 = _UNK_1806c6b47;
    uStack_c0 = _UNK_1806c6b4b;
    local_d8 = _DAT_1806c6b33;
    uStack_d4 = _UNK_1806c6b37;
    uStack_d0 = _UNK_1806c6b3b;
    uStack_cc = _UNK_1806c6b3f;
    uStack_bc._0_1_ = (uint8_t)_UNK_1806c6b4f;
    uStack_bc = CONCAT31(0x1a6409,(uint8_t)uStack_bc);
    uStack_b8 = 0x961bbeb1;
    uStack_b4 = CONCAT31(uStack_b4._1_3_,0xcb);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xeddc) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xeddc) = 1;
      func_0x1801b1390(lVal_17 + 0xedb5,&local_d8);
      func_0x180673140(&LAB_1803665d0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xedb5);
    func_0x18036f8d0(fnPtr_1);
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    sz_15 = strlen(fnPtr_1);
    if ((int64_t)sz_15 < 0) goto LAB_18031d0b8;
    uVal_22 = 0xf;
    if (0xf < sz_15) {
      uVal_16 = sz_15 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_16) {
        uVal_22 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        local_62 = 1;
        pU64_19 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_62 = 1;
        lVal_17 = func_0x180672de0(uVal_22 + 0x28);
        pU64_19 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -2) = lVal_17;
      }
      local_98 = SUB84(pU64_19,0);
      uStack_94 = (uint32_t)((uint64_t)pU64_19 >> 0x20);
    }
    uStack_88 = (uint32_t)sz_15;
    uStack_84 = (uint32_t)(sz_15 >> 0x20);
    uStack_80 = uVal_22;
    func_0x1806aa960(pU64_19,fnPtr_1,sz_15);
    *(uint8_t *)((int64_t)pU64_19 + sz_15) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xedf0) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xedf0) = 1;
      *(uint8_t *)(lVal_17 + 0xedee) = 1;
      *(uint64_t *)(lVal_17 + 0xede0) = 0x16274cac8b08b99e;
      *(uint32_t *)(lVal_17 + 0xede8) = 0x9706bdb2;
      *(uint16_t *)(lVal_17 + 0xedec) = 0x29b8;
      func_0x180673140(&LAB_180366600);
    }
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_17 + 0xede0);
    if (*(char *)(lVal_17 + 0xedee) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x750729cbe569d1dd;
      *(uint *)(lVal_17 + 0xede8) = *(uint *)(lVal_17 + 0xede8) ^ 0xe569d1dd;
      *(byte *)(lVal_17 + 0xedec) = *(byte *)(lVal_17 + 0xedec) ^ 0xcb;
      *(byte *)(lVal_17 + 0xeded) = *(byte *)(lVal_17 + 0xeded) ^ 0x29;
      *(uint8_t *)(lVal_17 + 0xedee) = 0;
    }
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    sz_15 = strlen((char *)pU64_2);
    if ((int64_t)sz_15 < 0) goto LAB_18031d0c5;
    uVal_22 = 0xf;
    if (0xf < sz_15) {
      uVal_16 = sz_15 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_16) {
        uVal_22 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        local_68 = 1;
        pU64_20 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_68 = 1;
        lVal_17 = func_0x180672de0(uVal_22 + 0x28);
        pU64_20 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -2) = lVal_17;
      }
      local_d8 = SUB84(pU64_20,0);
      uStack_d4 = (uint32_t)((uint64_t)pU64_20 >> 0x20);
    }
    pU64_18 = local_78;
    lVal_17 = (int64_t)local_78 + 0x99;
    uStack_c8 = (uint32_t)sz_15;
    uStack_c4 = (uint32_t)(sz_15 >> 0x20);
    uStack_c0 = (uint32_t)uVal_22;
    uStack_bc = (uint32_t)(uVal_22 >> 0x20);
    func_0x1806aa960(pU64_20,pU64_2,sz_15);
    *(uint8_t *)((int64_t)pU64_20 + sz_15) = 0;
    in_stack_fffffffffffffd28 = in_stack_fffffffffffffd28 & 0xffffff00;
    pU64_19 = &local_d8;
    pU64_20 = &local_98;
    func_0x1801ccd70(pU64_18,pU64_19,pU64_20,lVal_17,uVal_23,&local_2b8,in_stack_fffffffffffffd28);
    uVal_22 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_22) {
      lVal_10 = CONCAT44(uStack_d4,local_d8);
      uVal_16 = uVal_22 + 1;
      lVal_17 = lVal_10;
      if (0xfff < uVal_16) {
        lVal_17 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
        uVal_16 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_16);
    }
    if (0xf < uStack_80) {
      lVal_10 = CONCAT44(uStack_94,local_98);
      uVal_22 = uStack_80 + 1;
      lVal_17 = lVal_10;
      if (0xfff < uVal_22) {
        lVal_17 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
        uVal_22 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_22);
    }
    local_278 = &PTR_LAB_1806c7e80;
    local_270 = local_78;
    local_240 = &local_278;
    uVal_23 = *(uint8_t *)(local_78 + 0x10);
    local_98 = _DAT_1806c6b58;
    uStack_94 = _UNK_1806c6b5c;
    uStack_90 = _UNK_1806c6b60;
    uStack_8c = CONCAT13(0x67,(int3)_UNK_1806c6b64);
    uStack_88 = 0xe6ccabe4;
    uStack_84 = CONCAT13(uStack_84._3_1_,0xabbec1);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xee0c) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xee0c) = 1;
      func_0x18007d3c0(lVal_17 + 0xedf1,&local_98);
      func_0x180673140(&LAB_180366630);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xedf1);
    func_0x18036eb90(fnPtr_1);
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    sz_15 = strlen(fnPtr_1);
    if ((int64_t)sz_15 < 0) goto LAB_18031d0d2;
    uVal_22 = 0xf;
    if (0xf < sz_15) {
      uVal_16 = sz_15 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_16) {
        uVal_22 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        local_63 = 1;
        pU64_19 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_63 = 1;
        lVal_17 = func_0x180672de0(uVal_22 + 0x28);
        pU64_19 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -2) = lVal_17;
      }
      local_d8 = SUB84(pU64_19,0);
      uStack_d4 = (uint32_t)((uint64_t)pU64_19 >> 0x20);
    }
    uStack_c8 = (uint32_t)sz_15;
    uStack_c4 = (uint32_t)(sz_15 >> 0x20);
    uStack_c0 = (uint32_t)uVal_22;
    uStack_bc = (uint32_t)(uVal_22 >> 0x20);
    func_0x1806aa960(pU64_19,fnPtr_1,sz_15);
    *(uint8_t *)((int64_t)pU64_19 + sz_15) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xee1c) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xee1c) = 1;
      *(uint8_t *)(lVal_17 + 0xee18) = 1;
      *(uint64_t *)(lVal_17 + 0xee10) = 0x47dca2c7fdcaa6d5;
      func_0x180673140(&LAB_180366660);
    }
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_17 + 0xee10);
    if (*(char *)(lVal_17 + 0xee18) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x47abcda593a3c787;
      *(uint8_t *)(lVal_17 + 0xee18) = 0;
    }
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    sz_15 = strlen((char *)pU64_2);
    if ((int64_t)sz_15 < 0) goto LAB_18031d0df;
    uVal_22 = 0xf;
    if (0xf < sz_15) {
      uVal_16 = sz_15 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_16) {
        uVal_22 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        local_69 = 1;
        pU64_20 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_69 = 1;
        lVal_17 = func_0x180672de0(uVal_22 + 0x28);
        pU64_20 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -2) = lVal_17;
      }
      local_98 = SUB84(pU64_20,0);
      uStack_94 = (uint32_t)((uint64_t)pU64_20 >> 0x20);
    }
    pU64_14 = local_78;
    pU64_18 = local_78 + 0x10;
    uStack_88 = (uint32_t)sz_15;
    uStack_84 = (uint32_t)(sz_15 >> 0x20);
    uStack_80 = uVal_22;
    func_0x1806aa960(pU64_20,pU64_2,sz_15);
    *(uint8_t *)((int64_t)pU64_20 + sz_15) = 0;
    in_stack_fffffffffffffd28 = in_stack_fffffffffffffd28 & 0xffffff00;
    pU64_19 = &local_98;
    pU64_20 = &local_d8;
    func_0x1801ccd70(pU64_14,pU64_19,pU64_20,pU64_18,uVal_23,&local_278,in_stack_fffffffffffffd28);
    if (0xf < uStack_80) {
      lVal_10 = CONCAT44(uStack_94,local_98);
      uVal_22 = uStack_80 + 1;
      lVal_17 = lVal_10;
      if (0xfff < uVal_22) {
        lVal_17 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
        uVal_22 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_22);
    }
    uVal_22 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_22) {
      lVal_10 = CONCAT44(uStack_d4,local_d8);
      uVal_16 = uVal_22 + 1;
      lVal_17 = lVal_10;
      if (0xfff < uVal_16) {
        lVal_17 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
        uVal_16 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_16);
    }
    local_238 = &PTR_LAB_1806c7eb0;
    local_230 = local_78;
    local_200 = &local_238;
    local_128 = *(uint32_t *)((int64_t)local_78 + 0x84);
    uStack_124 = *(uint32_t *)(local_78 + 0x11);
    uStack_120 = *(uint32_t *)((int64_t)local_78 + 0x8c);
    uStack_11c = *(uint32_t *)(local_78 + 0x12);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xee30) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xee30) = 1;
      *(uint8_t *)(lVal_17 + 0xee2c) = 1;
      *(uint64_t *)(lVal_17 + 0xee20) = 0xfe42bb7b829a9d96;
      *(uint32_t *)(lVal_17 + 0xee28) = 0xf7879eb9;
      func_0x180673140(&LAB_180366680);
    }
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_17 + 0xee20);
    if (*(char *)(lVal_17 + 0xee2c) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x91219b1ff7f5f1d5;
      *(uint *)(lVal_17 + 0xee28) = *(uint *)(lVal_17 + 0xee28) ^ 0xf7f5f1d5;
      *(uint8_t *)(lVal_17 + 0xee2c) = 0;
    }
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    sz_15 = strlen((char *)pU64_2);
    if ((int64_t)sz_15 < 0) goto LAB_18031d0ec;
    uVal_22 = 0xf;
    if (0xf < sz_15) {
      uVal_16 = sz_15 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_16) {
        uVal_22 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        local_6b = 1;
        pU64_20 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_6b = 1;
        lVal_17 = func_0x180672de0(uVal_22 + 0x28);
        pU64_20 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -2) = lVal_17;
      }
      local_d8 = SUB84(pU64_20,0);
      uStack_d4 = (uint32_t)((uint64_t)pU64_20 >> 0x20);
    }
    uStack_c8 = (uint32_t)sz_15;
    uStack_c4 = (uint32_t)(sz_15 >> 0x20);
    uStack_c0 = (uint32_t)uVal_22;
    uStack_bc = (uint32_t)(uVal_22 >> 0x20);
    func_0x1806aa960(pU64_20,pU64_2,sz_15);
    *(uint8_t *)((int64_t)pU64_20 + sz_15) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xee3c) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xee3c) = 1;
      *(uint8_t *)(lVal_17 + 0xee3a) = 1;
      *(uint32_t *)(lVal_17 + 0xee34) = 0x98999e96;
      *(uint16_t *)(lVal_17 + 0xee38) = 0x9b6d;
      func_0x180673140(&LAB_1803666b0);
    }
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_17 + 0xee34);
    if (*(char *)(lVal_17 + 0xee3a) == '\x01') {
      *_Str = *_Str ^ 0xf7f5f1d5;
      *(byte *)(lVal_17 + 0xee38) = *(byte *)(lVal_17 + 0xee38) ^ 0x1f;
      *(byte *)(lVal_17 + 0xee39) = *(byte *)(lVal_17 + 0xee39) ^ 0x9b;
      *(uint8_t *)(lVal_17 + 0xee3a) = 0;
    }
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    sz_15 = strlen((char *)_Str);
    if ((int64_t)sz_15 < 0) goto LAB_18031d0f9;
    uVal_22 = 0xf;
    if (0xf < sz_15) {
      uVal_16 = sz_15 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_16) {
        uVal_22 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        local_6a = 1;
        pU64_19 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_6a = 1;
        lVal_17 = func_0x180672de0(uVal_22 + 0x28);
        pU64_19 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -2) = lVal_17;
      }
      local_98 = SUB84(pU64_19,0);
      uStack_94 = (uint32_t)((uint64_t)pU64_19 >> 0x20);
    }
    pU64_18 = local_78;
    lVal_17 = (int64_t)local_78 + 0x84;
    uStack_88 = (uint32_t)sz_15;
    uStack_84 = (uint32_t)(sz_15 >> 0x20);
    uStack_80 = uVal_22;
    func_0x1806aa960(pU64_19,_Str,sz_15);
    *(uint8_t *)((int64_t)pU64_19 + sz_15) = 0;
    ptr3_U64_26 = &local_238;
    pU64_19 = &local_128;
    pU64_20 = &local_98;
    pU64_21 = &local_d8;
    func_0x1801cd600(pU64_18,pU64_20,pU64_21,lVal_17,pU64_19,ptr3_U64_26,
                  in_stack_fffffffffffffd28 & 0xffffff00);
    uVal_25 = (uint32_t)((uint64_t)pU64_19 >> 0x20);
    if (0xf < uStack_80) {
      lVal_10 = CONCAT44(uStack_94,local_98);
      uVal_22 = uStack_80 + 1;
      lVal_17 = lVal_10;
      if (0xfff < uVal_22) {
        lVal_17 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
        uVal_22 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_22);
    }
    uVal_22 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_22) {
      lVal_10 = CONCAT44(uStack_d4,local_d8);
      uVal_16 = uVal_22 + 1;
      lVal_17 = lVal_10;
      if (0xfff < uVal_16) {
        lVal_17 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
        uVal_16 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_16);
    }
    local_1f8 = &PTR_LAB_1806c7e80;
    local_1f0 = local_78;
    local_1c0 = &local_1f8;
    uVal_27 = *(uint32_t *)((int64_t)local_78 + 0x94);
    uStack_b8 = _DAT_1806c6b8f;
    uStack_b4 = _UNK_1806c6b93;
    uStack_b0 = _UNK_1806c6b97;
    uStack_c8 = _DAT_1806c6b7f;
    uStack_c4 = _UNK_1806c6b83;
    uStack_c0 = _UNK_1806c6b87;
    uStack_bc = _UNK_1806c6b8b;
    local_d8 = _DAT_1806c6b6f;
    uStack_d4 = _UNK_1806c6b73;
    uStack_d0 = _UNK_1806c6b77;
    uStack_cc = _UNK_1806c6b7b;
    uStack_ac = CONCAT13(9,(int3)_UNK_1806c6b9b);
    uStack_a8 = CONCAT13(uStack_a8._3_1_,0x49fa74);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xee74) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xee74) = 1;
      func_0x1801b4360(lVal_17 + 0xee3d,&local_d8);
      func_0x180673140(&LAB_1803666e0);
    }
    uVal_13 = _UNK_1806b54cc;
    uVal_12 = _UNK_1806b54c8;
    uVal_11 = _UNK_1806b54c4;
    uVal_28 = _DAT_1806b54c0;
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_3 = (uint8_t (*)[16])(lVal_17 + 0xee3d);
    if (*(char *)(lVal_17 + 0xee70) == '\x01') {
      auArr_7._4_4_ = *(uint *)(lVal_17 + 0xee41) ^ _UNK_1806b54c4;
      auArr_7._0_4_ = *(uint *)*pArr16_3 ^ _DAT_1806b54c0;
      auArr_7._8_4_ = *(uint *)(lVal_17 + 0xee45) ^ _UNK_1806b54c8;
      auArr_7._12_4_ = *(uint *)(lVal_17 + 0xee49) ^ _UNK_1806b54cc;
      *pArr16_3 = auArr_7;
      auArr_8._4_4_ = *(uint *)(lVal_17 + 0xee51) ^ uVal_11;
      auArr_8._0_4_ = *(uint *)(lVal_17 + 0xee4d) ^ uVal_28;
      auArr_8._8_4_ = *(uint *)(lVal_17 + 0xee55) ^ uVal_12;
      auArr_8._12_4_ = *(uint *)(lVal_17 + 0xee59) ^ uVal_13;
      *(uint8_t (*)[16])(lVal_17 + 0xee4d) = auArr_8;
      auArr_9._4_4_ = *(uint *)(lVal_17 + 0xee61) ^ uVal_11;
      auArr_9._0_4_ = *(uint *)(lVal_17 + 0xee5d) ^ uVal_28;
      auArr_9._8_4_ = *(uint *)(lVal_17 + 0xee65) ^ uVal_12;
      auArr_9._12_4_ = *(uint *)(lVal_17 + 0xee69) ^ uVal_13;
      *(uint8_t (*)[16])(lVal_17 + 0xee5d) = auArr_9;
      *(ushort *)(lVal_17 + 0xee6d) = *(ushort *)(lVal_17 + 0xee6d) ^ 0xd30d;
      *(byte *)(lVal_17 + 0xee6f) = *(byte *)(lVal_17 + 0xee6f) ^ 0x49;
      *(uint8_t *)(lVal_17 + 0xee70) = 0;
    }
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    sz_15 = strlen((char *)pArr16_3);
    if ((int64_t)sz_15 < 0) goto LAB_18031d106;
    uVal_22 = 0xf;
    if (0xf < sz_15) {
      uVal_16 = sz_15 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_16) {
        uVal_22 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        local_64 = 1;
        pU64_20 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_64 = 1;
        lVal_17 = func_0x180672de0(uVal_22 + 0x28);
        pU64_20 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -2) = lVal_17;
      }
      local_98 = SUB84(pU64_20,0);
      uStack_94 = (uint32_t)((uint64_t)pU64_20 >> 0x20);
    }
    uStack_88 = (uint32_t)sz_15;
    uStack_84 = (uint32_t)(sz_15 >> 0x20);
    uStack_80 = uVal_22;
    func_0x1806aa960(pU64_20,pArr16_3,sz_15);
    *(uint8_t *)((int64_t)pU64_20 + sz_15) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xee84) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xee84) = 1;
      *(uint8_t *)(lVal_17 + 0xee80) = 1;
      *(uint64_t *)(lVal_17 + 0xee78) = 0x6518072c4628a342;
      func_0x180673140(&LAB_180366720);
    }
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_17 + 0xee78);
    if (*(char *)(lVal_17 + 0xee80) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x656173452549d30d;
      *(uint8_t *)(lVal_17 + 0xee80) = 0;
    }
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    sz_15 = strlen((char *)pU64_2);
    if ((int64_t)sz_15 < 0) goto LAB_18031d113;
    uVal_22 = 0xf;
    if (0xf < sz_15) {
      uVal_16 = sz_15 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_16) {
        uVal_22 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        local_6c = 1;
        pU64_21 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_6c = 1;
        lVal_17 = func_0x180672de0(uVal_22 + 0x28);
        pU64_21 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -2) = lVal_17;
      }
      local_d8 = SUB84(pU64_21,0);
      uStack_d4 = (uint32_t)((uint64_t)pU64_21 >> 0x20);
    }
    pU64_18 = local_78;
    lVal_17 = (int64_t)local_78 + 0x94;
    uStack_c8 = (uint32_t)sz_15;
    uStack_c4 = (uint32_t)(sz_15 >> 0x20);
    uStack_c0 = (uint32_t)uVal_22;
    uStack_bc = (uint32_t)(uVal_22 >> 0x20);
    func_0x1806aa960(pU64_21,pU64_2,sz_15);
    *(uint8_t *)((int64_t)pU64_21 + sz_15) = 0;
    uVal_24 = CONCAT44(uVal_25,uVal_27);
    uVal_28 = 0x3f800000;
    pU64_19 = &local_d8;
    pU64_20 = &local_98;
    func_0x1801cd2e0(pU64_18,pU64_19,pU64_20,lVal_17,uVal_24,(uint64_t)ptr3_U64_26 & 0xffffffff00000000,
                  0x3f800000,&local_1f8,0);
    uVal_22 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_22) {
      lVal_10 = CONCAT44(uStack_d4,local_d8);
      uVal_16 = uVal_22 + 1;
      lVal_17 = lVal_10;
      if (0xfff < uVal_16) {
        lVal_17 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
        uVal_16 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_16);
    }
    if (0xf < uStack_80) {
      lVal_10 = CONCAT44(uStack_94,local_98);
      uVal_22 = uStack_80 + 1;
      lVal_17 = lVal_10;
      if (0xfff < uVal_22) {
        lVal_17 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
        uVal_22 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_22);
    }
    local_1b8 = &PTR_LAB_1806c7e50;
    local_1b0 = local_78;
    local_180 = &local_1b8;
    uVal_23 = *(uint8_t *)((int64_t)local_78 + 0x9a);
    uStack_c8 = _DAT_1806c6bb2;
    uStack_c4 = _UNK_1806c6bb6;
    uStack_c0 = _UNK_1806c6bba;
    local_d8 = _DAT_1806c6ba2;
    uStack_d4 = _UNK_1806c6ba6;
    uStack_d0 = _UNK_1806c6baa;
    uStack_cc = _UNK_1806c6bae;
    uStack_bc._0_1_ = (uint8_t)_UNK_1806c6bbe;
    uStack_bc = CONCAT31(0x8aaf9f,(uint8_t)uStack_bc);
    uStack_b8 = 0xd5bd14ac;
    uStack_b4 = CONCAT31(uStack_b4._1_3_,0x81);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xeeac) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xeeac) = 1;
      func_0x1801b1390(lVal_17 + 0xee85,&local_d8);
      func_0x180673140(&LAB_180366740);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xee85);
    func_0x18036f9d0(fnPtr_1);
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    sz_15 = strlen(fnPtr_1);
    if ((int64_t)sz_15 < 0) goto LAB_18031d120;
    uVal_22 = 0xf;
    if (0xf < sz_15) {
      uVal_16 = sz_15 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_16) {
        uVal_22 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        local_65 = 1;
        pU64_20 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_65 = 1;
        lVal_17 = func_0x180672de0(uVal_22 + 0x28);
        pU64_20 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -2) = lVal_17;
      }
      local_98 = SUB84(pU64_20,0);
      uStack_94 = (uint32_t)((uint64_t)pU64_20 >> 0x20);
    }
    uStack_88 = (uint32_t)sz_15;
    uStack_84 = (uint32_t)(sz_15 >> 0x20);
    uStack_80 = uVal_22;
    func_0x1806aa960(pU64_20,fnPtr_1,sz_15);
    *(uint8_t *)((int64_t)pU64_20 + sz_15) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xeec0) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xeec0) = 1;
      *(uint8_t *)(lVal_17 + 0xeebe) = 1;
      *(uint64_t *)(lVal_17 + 0xeeb0) = 0x87e7dae6cfb41b86;
      *(uint32_t *)(lVal_17 + 0xeeb8) = 0xc9b21aa0;
      *(uint16_t *)(lVal_17 + 0xeebc) = 0xbff5;
      func_0x180673140(&LAB_180366770);
    }
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_17 + 0xeeb0);
    if (*(char *)(lVal_17 + 0xeebe) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xefc7bf81a1d573c5;
      *(uint *)(lVal_17 + 0xeeb8) = *(uint *)(lVal_17 + 0xeeb8) ^ 0xa1d573c5;
      *(byte *)(lVal_17 + 0xeebc) = *(byte *)(lVal_17 + 0xeebc) ^ 0x81;
      *(byte *)(lVal_17 + 0xeebd) = *(byte *)(lVal_17 + 0xeebd) ^ 0xbf;
      *(uint8_t *)(lVal_17 + 0xeebe) = 0;
    }
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    sz_15 = strlen((char *)pU64_2);
    if ((int64_t)sz_15 < 0) goto LAB_18031d12d;
    uVal_22 = 0xf;
    if (0xf < sz_15) {
      uVal_16 = sz_15 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_16) {
        uVal_22 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        local_6d = 1;
        pU64_19 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_6d = 1;
        lVal_17 = func_0x180672de0(uVal_22 + 0x28);
        pU64_19 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -2) = lVal_17;
      }
      local_d8 = SUB84(pU64_19,0);
      uStack_d4 = (uint32_t)((uint64_t)pU64_19 >> 0x20);
    }
    pU64_18 = local_78;
    lVal_17 = (int64_t)local_78 + 0x9a;
    uStack_c8 = (uint32_t)sz_15;
    uStack_c4 = (uint32_t)(sz_15 >> 0x20);
    uStack_c0 = (uint32_t)uVal_22;
    uStack_bc = (uint32_t)(uVal_22 >> 0x20);
    func_0x1806aa960(pU64_19,pU64_2,sz_15);
    *(uint8_t *)((int64_t)pU64_19 + sz_15) = 0;
    ptr3_U64_26 = &local_1b8;
    uVal_24 = CONCAT71((int7)((uint64_t)uVal_24 >> 8),uVal_23);
    pU64_19 = &local_d8;
    pU64_20 = &local_98;
    func_0x1801ccd70(pU64_18,pU64_19,pU64_20,lVal_17,uVal_24,ptr3_U64_26,uVal_28 & 0xffffff00);
    uVal_27 = (uint32_t)((uint64_t)ptr3_U64_26 >> 0x20);
    uVal_25 = (uint32_t)((uint64_t)uVal_24 >> 0x20);
    uVal_22 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_22) {
      lVal_10 = CONCAT44(uStack_d4,local_d8);
      uVal_16 = uVal_22 + 1;
      lVal_17 = lVal_10;
      if (0xfff < uVal_16) {
        lVal_17 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
        uVal_16 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_16);
    }
    if (0xf < uStack_80) {
      lVal_10 = CONCAT44(uStack_94,local_98);
      uVal_22 = uStack_80 + 1;
      lVal_17 = lVal_10;
      if (0xfff < uVal_22) {
        lVal_17 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
        uVal_22 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_22);
    }
    local_178 = &PTR_LAB_1806c7ee0;
    local_170 = local_78;
    local_140 = &local_178;
    uVal_4 = *(uint32_t *)((int64_t)local_78 + 0x9c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xeec4) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xeec4) = 1;
      *(uint16_t *)(lVal_17 + 0xeec1) = 0x135;
      func_0x180673140(&LAB_1803667a0);
    }
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (byte *)(lVal_17 + 0xeec1);
    if (*(char *)(lVal_17 + 0xeec2) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0x35;
      *(uint8_t *)(lVal_17 + 0xeec2) = 0;
    }
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    sz_15 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_15) {
      uVal_22 = 0xf;
      if (0xf < sz_15) {
        uVal_16 = sz_15 | 0xf;
        uVal_22 = 0x16;
        if (0x16 < uVal_16) {
          uVal_22 = uVal_16;
        }
        if (uVal_16 < 0xfff) {
          local_6e = 1;
          pU64_19 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
        }
        else {
          local_6e = 1;
          lVal_17 = func_0x180672de0(uVal_22 + 0x28);
          pU64_19 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_19 + -2) = lVal_17;
        }
        local_d8 = SUB84(pU64_19,0);
        uStack_d4 = (uint32_t)((uint64_t)pU64_19 >> 0x20);
      }
      uStack_c8 = (uint32_t)sz_15;
      uStack_c4 = (uint32_t)(sz_15 >> 0x20);
      uStack_c0 = (uint32_t)uVal_22;
      uStack_bc = (uint32_t)(uVal_22 >> 0x20);
      func_0x1806aa960(pU64_19,_Str_00,sz_15);
      *(uint8_t *)((int64_t)pU64_19 + sz_15) = 0;
      local_138 = _DAT_1806c6bc7;
      uStack_134 = _UNK_1806c6bcb;
      uStack_130 = _UNK_1806c6bcf;
      uStack_12c = _UNK_1806c6bd3;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xeed8) == '\0') {
        lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_17 + 0xeed8) = 1;
        func_0x18007d150(lVal_17 + 0xeec5,&local_138);
        func_0x180673140(&LAB_1803667c0);
      }
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pArr16_3 = (uint8_t (*)[16])(lVal_17 + 0xeec5);
      if (*(char *)(lVal_17 + 0xeed5) == '\x01') {
        auArr_6._4_4_ = *(uint *)(lVal_17 + 0xeec9) ^ _UNK_1806b2cb4;
        auArr_6._0_4_ = *(uint *)*pArr16_3 ^ _DAT_1806b2cb0;
        auArr_6._8_4_ = *(uint *)(lVal_17 + 0xeecd) ^ _UNK_1806b2cb8;
        auArr_6._12_4_ = *(uint *)(lVal_17 + 0xeed1) ^ _UNK_1806b2cbc;
        *pArr16_3 = auArr_6;
        *(uint8_t *)(lVal_17 + 0xeed5) = 0;
      }
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      sz_15 = strlen((char *)pArr16_3);
      if (-1 < (int64_t)sz_15) {
        uVal_22 = 0xf;
        if (0xf < sz_15) {
          uVal_16 = sz_15 | 0xf;
          uVal_22 = 0x16;
          if (0x16 < uVal_16) {
            uVal_22 = uVal_16;
          }
          if (uVal_16 < 0xfff) {
            local_66 = 1;
            pU64_20 = (uint32_t *)func_0x180672de0(uVal_22 + 1);
          }
          else {
            local_66 = 1;
            lVal_17 = func_0x180672de0(uVal_22 + 0x28);
            pU64_20 = (uint32_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_20 + -2) = lVal_17;
          }
          local_98 = SUB84(pU64_20,0);
          uStack_94 = (uint32_t)((uint64_t)pU64_20 >> 0x20);
        }
        pU64_18 = local_78;
        lVal_17 = (int64_t)local_78 + 0x9c;
        uStack_88 = (uint32_t)sz_15;
        uStack_84 = (uint32_t)(sz_15 >> 0x20);
        uStack_80 = uVal_22;
        func_0x1806aa960(pU64_20,pArr16_3,sz_15);
        *(uint8_t *)((int64_t)pU64_20 + sz_15) = 0;
        func_0x1801cd2e0(pU64_18,&local_98,&local_d8,lVal_17,CONCAT44(uVal_25,uVal_4),
                      CONCAT44(uVal_27,0xc3480000),0x43480000,&local_178,0);
        if (0xf < uStack_80) {
          lVal_10 = CONCAT44(uStack_94,local_98);
          uVal_22 = uStack_80 + 1;
          lVal_17 = lVal_10;
          if (0xfff < uVal_22) {
            lVal_17 = *(int64_t *)(lVal_10 + -8);
            if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_18031d097;
            uVal_22 = uStack_80 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_17,uVal_22);
        }
        uVal_22 = CONCAT44(uStack_bc,uStack_c0);
        if (0xf < uVal_22) {
          lVal_10 = CONCAT44(uStack_d4,local_d8);
          uVal_16 = uVal_22 + 1;
          lVal_17 = lVal_10;
          if (0xfff < uVal_16) {
            lVal_17 = *(int64_t *)(lVal_10 + -8);
            if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) {
LAB_18031d097:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_16 = uVal_22 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_17,uVal_16);
        }
        return local_78;
      }
      goto LAB_18031d147;
    }
  }
  local_6e = 1;
  func_0x18007ba70();
LAB_18031d147:
  local_66 = 1;
  func_0x18007ba70();
  fnPtr_5 = (func_ptr_t )swi(3);
  pU64_18 = (uint64_t *)(*fnPtr_5)();
  return pU64_18;
}

// Unwind@18031d160
void Unwind_18031d160(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x228);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f0));
    *(uint64_t *)(param_2 + 0x228) = 0;
  }
  return;
}

// Unwind@18031d1d0
void Unwind_18031d1d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xeda4) = 0;
  *(uint8_t *)(param_2 + 0x2a7) = 1;
  return;
}

// Unwind@18031d230
void Unwind_18031d230(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18031d280
void Unwind_18031d280(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2a1) = 0;
  return;
}

// Unwind@18031d2d0
void Unwind_18031d2d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2a1);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x2a7) = uVal_1;
  return;
}

// Unwind@18031d320
void Unwind_18031d320(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2a7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x228), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f0));
    *(uint64_t *)(param_2 + 0x228) = 0;
  }
  return;
}

// Unwind@18031d390
void Unwind_18031d390(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x2a0) = 0;
  return;
}

// Unwind@18031d3e0
void Unwind_18031d3e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2a0);
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2a6) = uVal_1;
  return;
}

// Unwind@18031d430
void Unwind_18031d430(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2a6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@18031d4a0
void Unwind_18031d4a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x29f) = 0;
  return;
}

// Unwind@18031d4f0
void Unwind_18031d4f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x29f);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x2a5) = uVal_1;
  return;
}

// Unwind@18031d540
void Unwind_18031d540(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2a5) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@18031d5b0
void Unwind_18031d5b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x29e) = 0;
  return;
}

// Unwind@18031d600
void Unwind_18031d600(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x29e);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x29d) = uVal_1;
  return;
}

// Unwind@18031d650
void Unwind_18031d650(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x29d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@18031d6c0
void Unwind_18031d6c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x29c) = 0;
  return;
}

// Unwind@18031d710
void Unwind_18031d710(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x29c);
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2a4) = uVal_1;
  return;
}

// Unwind@18031d760
void Unwind_18031d760(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2a4) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@18031d7d0
void Unwind_18031d7d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x29b) = 0;
  return;
}

// Unwind@18031d820
void Unwind_18031d820(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x29b);
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2a3) = uVal_1;
  return;
}

// Unwind@18031d870
void Unwind_18031d870(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2a3) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x188), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@18031d8e0
void Unwind_18031d8e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2a2) = 0;
  return;
}

// Unwind@18031d930
void Unwind_18031d930(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2a2);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x29a) = uVal_1;
  return;
}

// Unwind@18031d980
void Unwind_18031d980(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x29a) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@18031d9f0
void Unwind_18031d9f0(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x290));
  return;
}

// Unwind@18031da40
void Unwind_18031da40(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xed8c) = 0;
  return;
}

// Unwind@18031daa0
void Unwind_18031daa0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xeddc) = 0;
  *(uint8_t *)(param_2 + 0x2a6) = 1;
  return;
}

// Unwind@18031db00
void Unwind_18031db00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xee0c) = 0;
  *(uint8_t *)(param_2 + 0x2a5) = 1;
  return;
}

// Unwind@18031db60
void Unwind_18031db60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xee74) = 0;
  *(uint8_t *)(param_2 + 0x2a4) = 1;
  return;
}

// Unwind@18031dbc0
void Unwind_18031dbc0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xeeac) = 0;
  *(uint8_t *)(param_2 + 0x2a3) = 1;
  return;
}

// Unwind@18031dc20
void Unwind_18031dc20(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xeed8) = 0;
  *(uint8_t *)(param_2 + 0x2a2) = 1;
  return;
}

// Unwind@18031df30
void Unwind_18031df30(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xef0c) = 0;
  return;
}

// func_0x18031df70
float * func_0x18031df70(int64_t param_1,float *param_2)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t extraout_var;
  float *pFloat_3;
  float fVal_4;
  float fVal_5;
  float fVal_6;
  float fVal_7;
  uint8_t auStack_58 [32];
  _FILETIME local_38;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    GetSystemTimeAsFileTime(&local_38);
    fVal_6 = DAT_1806b26b4;
    uVal_1 = ((int64_t)local_38 + 0xfe624e212ac18000U) / 10000 + 1;
    fVal_4 = (float)func_0x18068afa0((float)((int)uVal_1 + (int)(uVal_1 / 3000) * -3000) / DAT_1806b6510,
                                 DAT_1806b26b4);
    fVal_4 = fVal_4 / DAT_1806b6144;
    fVal_5 = (fVal_4 - (float)(int)fVal_4) * DAT_1806b2860 + fVal_6;
    fVal_7 = DAT_1806aeae4;
    if ((uint)(int)fVal_4 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00018031e058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pFloat_3 = (float *)(*(func_ptr_t )(&DAT_1806c8390 +
                                  *(int *)(&DAT_1806c8390 + CONCAT44(extraout_var,(int)fVal_4) * 4)))
                                  (DAT_1806aeae4,fVal_5,DAT_1806b2860,
                                   (fVal_6 - (fVal_4 - (float)(int)fVal_4)) * DAT_1806b2860 + fVal_6);
      return pFloat_3;
    }
  }
  else {
    fVal_6 = *(float *)(param_1 + 0x84);
    fVal_5 = *(float *)(param_1 + 0x8c);
    fVal_7 = *(float *)(param_1 + 0x88);
  }
  fVal_4 = *(float *)(param_1 + 0x94);
  *param_2 = fVal_6;
  param_2[1] = fVal_7;
  param_2[2] = fVal_5;
  param_2[3] = fVal_4;
  if (DAT_18083cf40 != (local_30 ^ (uint64_t)auStack_58)) {
    func_0x180673080(local_30 ^ (uint64_t)auStack_58);
    fnPtr_2 = (func_ptr_t )swi(3);
    pFloat_3 = (float *)(*fnPtr_2)();
    return pFloat_3;
  }
  return param_2;
}

// func_0x18031e130
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18031e130(uint64_t *param_1)
{
  char *_Str;
  size_t sz_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint8_t *pU64_4;
  uint64_t uVal_5;
  uint8_t local_58 [8];
  uint64_t uStack_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_58._4_4_ = _UNK_1806c6bf2;
  local_58._0_4_ = _DAT_1806c6bee;
  uStack_50._0_4_ = _UNK_1806c6bf6;
  uStack_50._4_4_ = _UNK_1806c6bfa;
  local_48 = CONCAT44(local_48._4_4_,0x996bba2);
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xef24) == '\0') {
    lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_3 + 0xef24) = 1;
    func_0x18007cfc0(lVal_3 + 0xef0d,local_58);
    func_0x180673140(&LAB_180366840);
  }
  _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xef0d);
  func_0x1801c21d0(_Str);
  _local_58 = ZEXT816(0);
  sz_1 = strlen(_Str);
  if (-1 < (int64_t)sz_1) {
    if (sz_1 < 0x10) {
      pU64_4 = local_58;
      uVal_5 = 0xf;
    }
    else {
      uVal_2 = sz_1 | 0xf;
      uVal_5 = 0x16;
      if (0x16 < uVal_2) {
        uVal_5 = uVal_2;
      }
      if (uVal_2 < 0xfff) {
        pU64_4 = (uint8_t *)func_0x180672de0(uVal_5 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_5 + 0x28);
        pU64_4 = (uint8_t *)(lVal_3 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_4 + -8) = lVal_3;
      }
      local_58 = (uint8_t  [8])pU64_4;
    }
    local_48 = sz_1;
    local_40 = uVal_5;
    func_0x1806aa960(pU64_4,_Str,sz_1);
    pU64_4[sz_1] = 0;
    func_0x18014fe60(param_1,0,0,local_58);
    if (0xf < local_40) {
      uVal_5 = local_40 + 1;
      lVal_3 = (int64_t)local_58;
      if (0xfff < uVal_5) {
        lVal_3 = *(int64_t *)((int64_t)local_58 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_58 + -8) - lVal_3)) goto LAB_18031e2fa;
        uVal_5 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_3,uVal_5);
    }
    *param_1 = &PTR_LAB_1806c4a20;
    *(uint32_t *)(param_1 + 0x29) = 0;
    *(uint8_t *)((int64_t)param_1 + 0x14c) = 0;
    *(uint8_t (*)[16])(param_1 + 0x2a) = ZEXT816(0);
    *(uint8_t *)(param_1 + 0x2c) = 0;
    return param_1;
  }
  func_0x18007ba70();
LAB_18031e2fa:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18031e300
void Unwind_18031e300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18031e330
void Unwind_18031e330(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xef24) = 0;
  return;
}

// Unwind@18031e620
void Unwind_18031e620(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xef54) = 0;
  return;
}

// Unwind@18031eb70
void Unwind_18031eb70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18031f1d0
void Unwind_18031f1d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18031f210
void Unwind_18031f210(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xa8));
  return;
}

// Unwind@18031f250
void Unwind_18031f250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// func_0x18031f290
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18031f290(uint64_t *param_1)
{
  uint64_t *_Str;
  byte *pU8_1;
  uint *pU64_2;
  uint32_t *pU64_3;
  char *_Str_00;
  uint8_t (*_Str_01)[16];
  uint8_t uVal_4;
  func_ptr_t fnPtr_5;
  uint64_t uVal_6;
  size_t sz_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t *pU64_10;
  uint8_t *pU64_11;
  uint8_t *pU64_12;
  uint8_t *pU64_13;
  uint64_t uVal_14;
  uint uVal_16;
  uint uVal_17;
  uint8_t auArr_15 [16];
  uint32_t uVal_18;
  uint64_t in_stack_fffffffffffffe08;
  uint32_t uVal_20;
  uint64_t *pU64_19;
  uint64_t in_stack_fffffffffffffe10;
  uint32_t uVal_21;
  uint uVal_22;
  uint64_t local_1c8;
  uint64_t uStack_1c0;
  uint8_t local_1b8 [56];
  uint64_t local_180;
  uint8_t local_178 [56];
  uint64_t local_140;
  uint8_t local_138 [56];
  uint64_t local_100;
  uint8_t local_f8 [56];
  uint64_t local_c0;
  uint8_t local_b8 [16];
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  uint8_t local_98 [16];
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint32_t local_78;
  uint64_t *local_70;
  uint8_t local_68;
  uint8_t local_67;
  uint8_t local_66;
  uint8_t local_65;
  uint8_t local_64;
  uint8_t local_63;
  uint8_t local_62;
  uint8_t local_61;
  uint64_t local_60;
  
  uVal_21 = (uint32_t)((uint64_t)in_stack_fffffffffffffe10 >> 0x20);
  uVal_20 = (uint32_t)((uint64_t)in_stack_fffffffffffffe08 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  local_70 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xef94) == '\0') {
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_9 + 0xef94) = 1;
    *(uint64_t *)(lVal_9 + 0xef88) = 0x69d8bec4e3cea8c4;
    *(uint16_t *)(lVal_9 + 0xef90) = 0x187;
    func_0x180673140(&LAB_180366960);
  }
  lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint64_t *)(lVal_9 + 0xef88);
  if (*(char *)(lVal_9 + 0xef91) == '\x01') {
    *_Str = *_Str ^ 0x47abcda593a3c787;
    *(byte *)(lVal_9 + 0xef90) = *(byte *)(lVal_9 + 0xef90) ^ 0x87;
    *(uint8_t *)(lVal_9 + 0xef91) = 0;
  }
  local_98 = (uint8_t  [16])0x0;
  sz_7 = strlen((char *)_Str);
  if ((int64_t)sz_7 < 0) {
    func_0x18007ba70();
LAB_18032031e:
    local_64 = 1;
    func_0x18007ba70();
LAB_18032032b:
    local_63 = 1;
    func_0x18007ba70();
LAB_180320338:
    local_66 = 1;
    func_0x18007ba70();
LAB_180320345:
    local_65 = 1;
    func_0x18007ba70();
LAB_180320352:
    local_61 = 1;
    func_0x18007ba70();
LAB_18032035f:
    local_67 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_7 < 0x10) {
      pU64_13 = local_98;
      uVal_14 = 0xf;
    }
    else {
      uVal_8 = sz_7 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_8) {
        uVal_14 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_9 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_13;
    }
    local_88 = (uint8_t  [8])sz_7;
    uStack_80 = uVal_14;
    func_0x1806aa960(pU64_13,_Str,sz_7);
    pU64_13[sz_7] = 0;
    pU64_13 = local_98;
    func_0x180132ee0(local_70,0,4,pU64_13);
    if (0xf < uStack_80) {
      uVal_14 = uStack_80 + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_14) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_180320317;
        uVal_14 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_14);
    }
    *local_70 = &PTR_LAB_1806c4b90;
    uVal_6 = _UNK_1806b2888;
    pU64_10 = local_70 + 0x16;
    local_70[0x16] = _DAT_1806b2880;
    local_70[0x17] = uVal_6;
    local_70[0x18] = 0x5a3f000000;
    *(uint8_t *)(local_70 + 0x19) = 1;
    local_180 = 0;
    uVal_18 = DAT_1806b26b4;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_180 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_1b8);
      uVal_18 = *(uint32_t *)pU64_10;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xef98) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xef98) = 1;
      *(uint16_t *)(lVal_9 + 0xef95) = 0x1d5;
      func_0x180673140(&LAB_180366990);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_1 = (byte *)(lVal_9 + 0xef95);
    if (*(char *)(lVal_9 + 0xef96) == '\x01') {
      *pU8_1 = *pU8_1 ^ 0xd5;
      *(uint8_t *)(lVal_9 + 0xef96) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU8_1);
    if ((int64_t)sz_7 < 0) goto LAB_18032031e;
    uVal_14 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_8) {
        uVal_14 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_64 = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_64 = 1;
        lVal_9 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_13;
    }
    uStack_80 = uVal_14;
    local_88 = (uint8_t  [8])sz_7;
    func_0x1806aa960(pU64_13,pU8_1,sz_7);
    pU64_13[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xefa4) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xefa4) = 1;
      *(uint32_t *)(lVal_9 + 0xef9c) = 0x928f9886;
      *(uint16_t *)(lVal_9 + 0xefa0) = 0x11f;
      func_0x180673140(&LAB_1803669b0);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_9 + 0xef9c);
    if (*(char *)(lVal_9 + 0xefa1) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xf7f5f1d5;
      *(byte *)(lVal_9 + 0xefa0) = *(byte *)(lVal_9 + 0xefa0) ^ 0x1f;
      *(uint8_t *)(lVal_9 + 0xefa1) = 0;
    }
    _local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_2);
    if ((int64_t)sz_7 < 0) goto LAB_18032032b;
    if (sz_7 < 0x10) {
      pU64_13 = local_b8;
      uVal_14 = 0xf;
    }
    else {
      uVal_8 = sz_7 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_8) {
        uVal_14 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_63 = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_63 = 1;
        lVal_9 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_9;
      }
      local_b8._0_8_ = pU64_13;
    }
    uStack_a0 = uVal_14;
    local_a8 = (uint8_t  [8])sz_7;
    func_0x1806aa960(pU64_13,pU64_2,sz_7);
    pU64_13[sz_7] = 0;
    uVal_22 = 0x40000000;
    pU64_13 = local_b8;
    pU64_11 = local_98;
    func_0x1801cd2e0(local_70,pU64_13,pU64_11,pU64_10,CONCAT44(uVal_20,uVal_18),
                  CONCAT44(uVal_21,0x3f000000),0x40000000,local_1b8,0);
    if (0xf < uStack_a0) {
      uVal_14 = uStack_a0 + 1;
      lVal_9 = local_b8._0_8_;
      if (0xfff < uVal_14) {
        lVal_9 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_9)) goto LAB_180320317;
        uVal_14 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_14);
    }
    if (0xf < uStack_80) {
      uVal_14 = uStack_80 + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_14) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_180320317;
        uVal_14 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_14);
    }
    local_140 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_140 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_178);
    }
    pU64_10 = (uint64_t *)((int64_t)local_70 + 0xb4);
    local_1c8 = *pU64_10;
    uStack_1c0 = *(uint64_t *)((int64_t)local_70 + 0xbc);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xefa8) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xefa8) = 1;
      *(uint16_t *)(lVal_9 + 0xefa5) = 0x10d;
      func_0x180673140(&LAB_1803669e0);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_1 = (byte *)(lVal_9 + 0xefa5);
    if (*(char *)(lVal_9 + 0xefa6) == '\x01') {
      *pU8_1 = *pU8_1 ^ 0xd;
      *(uint8_t *)(lVal_9 + 0xefa6) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU8_1);
    if ((int64_t)sz_7 < 0) goto LAB_180320338;
    uVal_14 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_8) {
        uVal_14 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_66 = 1;
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_66 = 1;
        lVal_9 = func_0x180672de0(uVal_14 + 0x28);
        pU64_11 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_11;
    }
    uStack_80 = uVal_14;
    local_88 = (uint8_t  [8])sz_7;
    func_0x1806aa960(pU64_11,pU8_1,sz_7);
    pU64_11[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xefb4) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xefb4) = 1;
      *(uint8_t *)(lVal_9 + 0xefb2) = 1;
      *(uint32_t *)(lVal_9 + 0xefac) = 0x4a25bc4e;
      *(uint16_t *)(lVal_9 + 0xefb0) = 0x7337;
      func_0x180673140(&LAB_180366a00);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_9 + 0xefac);
    if (*(char *)(lVal_9 + 0xefb2) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x2549d30d;
      *(byte *)(lVal_9 + 0xefb0) = *(byte *)(lVal_9 + 0xefb0) ^ 0x45;
      *(byte *)(lVal_9 + 0xefb1) = *(byte *)(lVal_9 + 0xefb1) ^ 0x73;
      *(uint8_t *)(lVal_9 + 0xefb2) = 0;
    }
    _local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_2);
    if ((int64_t)sz_7 < 0) goto LAB_180320345;
    uVal_14 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_8) {
        uVal_14 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_65 = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_65 = 1;
        lVal_9 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_9;
      }
      local_b8._0_8_ = pU64_13;
    }
    uStack_a0 = uVal_14;
    local_a8 = (uint8_t  [8])sz_7;
    func_0x1806aa960(pU64_13,pU64_2,sz_7);
    pU64_13[sz_7] = 0;
    pU64_13 = local_178;
    pU64_19 = &local_1c8;
    pU64_11 = local_b8;
    pU64_12 = local_98;
    func_0x1801cd600(local_70,pU64_11,pU64_12,pU64_10,pU64_19,pU64_13,uVal_22 & 0xffffff00);
    uVal_21 = (uint32_t)((uint64_t)pU64_13 >> 0x20);
    uVal_20 = (uint32_t)((uint64_t)pU64_19 >> 0x20);
    if (0xf < uStack_a0) {
      uVal_14 = uStack_a0 + 1;
      lVal_9 = local_b8._0_8_;
      if (0xfff < uVal_14) {
        lVal_9 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_9)) goto LAB_180320317;
        uVal_14 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_14);
    }
    if (0xf < uStack_80) {
      uVal_14 = uStack_80 + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_14) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_180320317;
        uVal_14 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_14);
    }
    local_100 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_100 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_138);
    }
    pU64_3 = (uint32_t *)((int64_t)local_70 + 0xc4);
    uVal_18 = *pU64_3;
    local_b8._8_8_ = _UNK_1806c6c21;
    local_b8._0_8_ = _DAT_1806c6c19;
    local_a8[0] = 0xc5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xefc8) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xefc8) = 1;
      func_0x18007d2b0(lVal_9 + 0xefb5,local_b8);
      func_0x180673140(&LAB_180366a30);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_9 + 0xefb5);
    if (*(char *)(lVal_9 + 0xefc6) == '\x01') {
      uVal_22 = *(uint *)(lVal_9 + 0xefb9) ^ _UNK_1806ae4d4;
      uVal_16 = *(uint *)(lVal_9 + 0xefbd) ^ _UNK_1806ae4d8;
      uVal_17 = *(uint *)(lVal_9 + 0xefc1) ^ _UNK_1806ae4dc;
      *pU64_2 = *pU64_2 ^ _DAT_1806ae4d0;
      *(uint *)(lVal_9 + 0xefb9) = uVal_22;
      *(uint *)(lVal_9 + 0xefbd) = uVal_16;
      *(uint *)(lVal_9 + 0xefc1) = uVal_17;
      *(byte *)(lVal_9 + 0xefc5) = *(byte *)(lVal_9 + 0xefc5) ^ 0xc5;
      *(uint8_t *)(lVal_9 + 0xefc6) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_2);
    if ((int64_t)sz_7 < 0) goto LAB_180320352;
    uVal_14 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_8) {
        uVal_14 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_61 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_61 = 1;
        lVal_9 = func_0x180672de0(uVal_14 + 0x28);
        pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_12;
    }
    uStack_80 = uVal_14;
    local_88 = (uint8_t  [8])sz_7;
    func_0x1806aa960(pU64_12,pU64_2,sz_7);
    pU64_12[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xefd4) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xefd4) = 1;
      *(uint8_t *)(lVal_9 + 0xefd2) = 1;
      *(uint32_t *)(lVal_9 + 0xefcc) = 0xc6bb1297;
      *(uint16_t *)(lVal_9 + 0xefd0) = 0xbfe4;
      func_0x180673140(&LAB_180366a60);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_9 + 0xefcc);
    if (*(char *)(lVal_9 + 0xefd2) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xa1d573c5;
      *(byte *)(lVal_9 + 0xefd0) = *(byte *)(lVal_9 + 0xefd0) ^ 0x81;
      *(byte *)(lVal_9 + 0xefd1) = *(byte *)(lVal_9 + 0xefd1) ^ 0xbf;
      *(uint8_t *)(lVal_9 + 0xefd2) = 0;
    }
    _local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_2);
    if ((int64_t)sz_7 < 0) goto LAB_18032035f;
    uVal_14 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_8) {
        uVal_14 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_67 = 1;
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_67 = 1;
        lVal_9 = func_0x180672de0(uVal_14 + 0x28);
        pU64_11 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_9;
      }
      local_b8._0_8_ = pU64_11;
    }
    uStack_a0 = uVal_14;
    local_a8 = (uint8_t  [8])sz_7;
    func_0x1806aa960(pU64_11,pU64_2,sz_7);
    pU64_11[sz_7] = 0;
    uVal_22 = 0;
    pU64_13 = local_b8;
    pU64_11 = local_98;
    func_0x1801ccff0(local_70,pU64_13,pU64_11,pU64_3,CONCAT44(uVal_20,uVal_18),CONCAT44(uVal_21,0x2d),0xb4
                  ,local_138,0);
    if (0xf < uStack_a0) {
      uVal_14 = uStack_a0 + 1;
      lVal_9 = local_b8._0_8_;
      if (0xfff < uVal_14) {
        lVal_9 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_9)) goto LAB_180320317;
        uVal_14 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_14);
    }
    if (0xf < uStack_80) {
      uVal_14 = uStack_80 + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_14) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_180320317;
        uVal_14 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_14);
    }
    local_c0 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_c0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_f8);
    }
    pU64_10 = local_70 + 0x19;
    uVal_4 = *(uint8_t *)pU64_10;
    local_88._4_4_ = _UNK_1806c6c3e;
    local_88._0_4_ = _DAT_1806c6c3a;
    uStack_80._0_4_ = _UNK_1806c6c42;
    uStack_80._4_4_ = _UNK_1806c6c46;
    local_98._8_8_ = _UNK_1806c6c32;
    local_98._0_8_ = _DAT_1806c6c2a;
    local_78 = 0x45dac55b;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xeffc) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xeffc) = 1;
      func_0x180086790(lVal_9 + 0xefd5,local_98);
      func_0x180673140(&LAB_180366a90);
    }
    _Str_00 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xefd5);
    func_0x18036faa0(_Str_00);
    local_b8 = (uint8_t  [16])0x0;
    sz_7 = strlen(_Str_00);
    if (-1 < (int64_t)sz_7) {
      uVal_14 = 0xf;
      if (0xf < sz_7) {
        uVal_8 = sz_7 | 0xf;
        uVal_14 = 0x16;
        if (0x16 < uVal_8) {
          uVal_14 = uVal_8;
        }
        if (uVal_8 < 0xfff) {
          local_62 = 1;
          pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
        }
        else {
          local_62 = 1;
          lVal_9 = func_0x180672de0(uVal_14 + 0x28);
          pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_13 + -8) = lVal_9;
        }
        local_b8._0_8_ = pU64_13;
      }
      uStack_a0 = uVal_14;
      local_a8 = (uint8_t  [8])sz_7;
      func_0x1806aa960(pU64_13,_Str_00,sz_7);
      pU64_13[sz_7] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf010) == '\0') {
        lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_9 + 0xf010) = 1;
        uVal_6 = _UNK_1806c37e8;
        *(uint64_t *)(lVal_9 + 0xf000) = _DAT_1806c37e0;
        *(uint64_t *)(lVal_9 + 0xf008) = uVal_6;
        func_0x180673140(&LAB_180366ac0);
      }
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str_01 = (uint8_t (*)[16])(lVal_9 + 0xf000);
      if (*(char *)(lVal_9 + 0xf00f) == '\x01') {
        uVal_20 = *(uint32_t *)(lVal_9 + 0xf008);
        auArr_15 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_20 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_20 >> 0x10),uVal_20)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_9 + 0xf00d) >> 8)),
                                                  (char)((uint)uVal_20 >> 8)),
                                          CONCAT11((char)*(uint16_t *)(lVal_9 + 0xf00d),
                                                   (char)uVal_20))),_DAT_1806ae110);
        auArr_15._8_8_ =
             auArr_15._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_9 + 0xf00c) << 0x20;
        auArr_15 = pblendw(auArr_15,*_Str_01,0xf);
        *_Str_01 = auArr_15 ^ _DAT_1806b6870;
      }
      local_98 = (uint8_t  [16])0x0;
      sz_7 = strlen((char *)_Str_01);
      if (-1 < (int64_t)sz_7) {
        uVal_14 = 0xf;
        if (0xf < sz_7) {
          uVal_8 = sz_7 | 0xf;
          uVal_14 = 0x16;
          if (0x16 < uVal_8) {
            uVal_14 = uVal_8;
          }
          if (uVal_8 < 0xfff) {
            local_68 = 1;
            pU64_11 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
          }
          else {
            local_68 = 1;
            lVal_9 = func_0x180672de0(uVal_14 + 0x28);
            pU64_11 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_11 + -8) = lVal_9;
          }
          local_98._0_8_ = pU64_11;
        }
        local_88 = (uint8_t  [8])sz_7;
        uStack_80 = uVal_14;
        func_0x1806aa960(pU64_11,_Str_01,sz_7);
        pU64_11[sz_7] = 0;
        func_0x1801ccd70(local_70,local_98,local_b8,pU64_10,uVal_4,local_f8,uVal_22 & 0xffffff00);
        if (0xf < uStack_80) {
          uVal_14 = uStack_80 + 1;
          lVal_9 = local_98._0_8_;
          if (0xfff < uVal_14) {
            lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
            if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_180320317;
            uVal_14 = uStack_80 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_9,uVal_14);
        }
        if (0xf < uStack_a0) {
          uVal_14 = uStack_a0 + 1;
          lVal_9 = local_b8._0_8_;
          if (0xfff < uVal_14) {
            lVal_9 = *(int64_t *)(local_b8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_9)) {
LAB_180320317:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_14 = uStack_a0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_9,uVal_14);
        }
        return local_70;
      }
      goto LAB_180320379;
    }
  }
  local_62 = 1;
  func_0x18007ba70();
LAB_180320379:
  local_68 = 1;
  func_0x18007ba70();
  fnPtr_5 = (func_ptr_t )swi(3);
  pU64_10 = (uint64_t *)(*fnPtr_5)();
  return pU64_10;
}

// Unwind@180320390
void Unwind_180320390(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x98);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x60));
    *(uint64_t *)(param_2 + 0x98) = 0;
  }
  return;
}

// Unwind@1803203f0
void Unwind_1803203f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xd8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xa0));
    *(uint64_t *)(param_2 + 0xd8) = 0;
  }
  return;
}

// Unwind@180320450
void Unwind_180320450(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x118);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xe0));
    *(uint64_t *)(param_2 + 0x118) = 0;
  }
  return;
}

// Unwind@1803204b0
void Unwind_1803204b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xefc8) = 0;
  *(uint8_t *)(param_2 + 0x1b7) = 1;
  return;
}

// Unwind@180320510
void Unwind_180320510(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x158);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x120));
    *(uint64_t *)(param_2 + 0x158) = 0;
  }
  return;
}

// Unwind@180320580
void Unwind_180320580(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xeffc) = 0;
  *(uint8_t *)(param_2 + 0x1b6) = 1;
  return;
}

// Unwind@1803205e0
void Unwind_1803205e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@180320630
void Unwind_180320630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  *(uint8_t *)(param_2 + 0x1b5) = 0;
  return;
}

// Unwind@180320680
void Unwind_180320680(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1b5);
  func_0x180001e70(param_2 + 0x180);
  *(uint8_t *)(param_2 + 0x1b4) = uVal_1;
  return;
}

// Unwind@1803206d0
void Unwind_1803206d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1b4) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x98), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x60));
    *(uint64_t *)(param_2 + 0x98) = 0;
  }
  return;
}

// Unwind@180320740
void Unwind_180320740(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  *(uint8_t *)(param_2 + 0x1b3) = 0;
  return;
}

// Unwind@180320790
void Unwind_180320790(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1b3);
  func_0x180001e70(param_2 + 0x180);
  *(uint8_t *)(param_2 + 0x1b2) = uVal_1;
  return;
}

// Unwind@1803207e0
void Unwind_1803207e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1b2) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xd8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xa0));
    *(uint64_t *)(param_2 + 0xd8) = 0;
  }
  return;
}

// Unwind@180320850
void Unwind_180320850(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  *(uint8_t *)(param_2 + 0x1b1) = 0;
  return;
}

// Unwind@1803208a0
void Unwind_1803208a0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1b1);
  func_0x180001e70(param_2 + 0x180);
  *(uint8_t *)(param_2 + 0x1b7) = uVal_1;
  return;
}

// Unwind@1803208f0
void Unwind_1803208f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1b7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x118), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xe0));
    *(uint64_t *)(param_2 + 0x118) = 0;
  }
  return;
}

// Unwind@180320960
void Unwind_180320960(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  *(uint8_t *)(param_2 + 0x1b0) = 0;
  return;
}

// Unwind@1803209b0
void Unwind_1803209b0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1b0);
  func_0x180001e70(param_2 + 0x160);
  *(uint8_t *)(param_2 + 0x1b6) = uVal_1;
  return;
}

// Unwind@180320a00
void Unwind_180320a00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1b6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x158), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x120));
    *(uint64_t *)(param_2 + 0x158) = 0;
  }
  return;
}

// Unwind@180320a70
void Unwind_180320a70(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x1a8);
  *pU64_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(pU64_1 + 0x12);
  func_0x1801c49a0(pU64_1);
  return;
}

// Unwind@180320d80
void Unwind_180320d80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf038) = 0;
  return;
}

// Unwind@180322bc0
void Unwind_180322bc0(void)
{
  func_0x180672f60(&DAT_18083fdf8);
  return;
}

// Unwind@180322ca0
void Unwind_180322ca0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  if (*(char *)(param_2 + 0x147) == '\0') {
    pU64_1 = *(uint64_t **)(param_2 + 0xf0);
    do {
      pU64_1 = pU64_1 + -4;
      func_0x180001e70(pU64_1);
    } while (pU64_1 != &DAT_18083fe00);
  }
  func_0x180672f60(&DAT_18083ff00);
  return;
}

// Unwind@180322da0
void Unwind_180322da0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180322e80
void Unwind_180322e80(uint64_t param_1,int64_t param_2)
{
  func_0x1800f3560(param_2 + 0x110);
  return;
}

// Unwind@180322f60
void Unwind_180322f60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180323040
void Unwind_180323040(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180323120
void Unwind_180323120(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0xa0);
  return;
}

// Unwind@1803231f0
void Unwind_1803231f0(uint64_t param_1,int64_t param_2)
{
  func_0x1800d5db0(param_2 + 0xc0);
  return;
}

// func_0x1803232c0
uint64_t func_0x1803232c0(uint64_t param_1)
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
  func_0x180401850(param_1,&local_28,0x1d756bcb);
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

// Unwind@180323890
void Unwind_180323890(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// func_0x1803238c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1803238c0(uint64_t *param_1)
{
  char *fnPtr_1;
  uint64_t *pU64_2;
  uint *pU64_3;
  uint32_t uVal_4;
  uint8_t uVal_5;
  func_ptr_t fnPtr_6;
  uint64_t uVal_7;
  size_t sz_8;
  uint64_t uVal_9;
  uint64_t ***ptr3_U64_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t *pU64_14;
  uint64_t ****ptr4_U64_15;
  uint64_t ****ptr4_U64_16;
  uint64_t ****ptr4_U64_17;
  uint8_t *pU64_18;
  uint64_t uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint uVal_23;
  uint uVal_24;
  uint uVal_25;
  uint uVal_26;
  uint32_t *pU64_27;
  uint32_t uVal_28;
  uint8_t ***ptr3_U64_29;
  uint32_t uVal_31;
  uint64_t uVal_30;
  uint in_stack_fffffffffffffb08;
  uint uVal_32;
  uint8_t **local_4d8;
  uint64_t *local_4d0;
  uint8_t ***local_4a0;
  uint8_t **local_498;
  uint64_t *local_490;
  uint8_t ***local_460;
  uint32_t local_458;
  uint32_t uStack_454;
  uint32_t uStack_450;
  uint32_t uStack_44c;
  uint32_t local_448;
  uint32_t uStack_444;
  uint32_t uStack_440;
  uint32_t uStack_43c;
  uint32_t local_438;
  uint32_t uStack_434;
  uint32_t uStack_430;
  uint32_t uStack_42c;
  uint32_t local_428;
  uint32_t uStack_424;
  uint32_t uStack_420;
  uint32_t uStack_41c;
  uint32_t local_418;
  uint32_t uStack_414;
  uint32_t uStack_410;
  uint32_t uStack_40c;
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
  uint8_t local_248 [56];
  uint64_t local_210;
  uint8_t local_208 [56];
  uint64_t local_1d0;
  uint8_t local_1c8 [56];
  uint64_t local_190;
  uint8_t local_188 [56];
  uint64_t local_150;
  uint8_t local_148 [16];
  uint8_t local_138 [16];
  uint8_t local_128 [16];
  uint8_t local_118 [24];
  uint64_t *local_100;
  uint64_t ****local_f8;
  uint16_t uStack_f0;
  uint32_t uStack_ee;
  uint16_t uStack_ea;
  uint16_t uStack_e8;
  uint16_t uStack_e6;
  uint16_t uStack_e4;
  uint16_t uStack_e2;
  uint16_t uStack_e0;
  uint16_t uStack_de;
  uint32_t uStack_dc;
  uint32_t uStack_d8;
  uint32_t uStack_d4;
  uint32_t uStack_d0;
  uint32_t uStack_cc;
  uint8_t uStack_c8;
  uint32_t uStack_c7;
  uint32_t uStack_c3;
  uint64_t *local_b0;
  uint64_t ****local_a8;
  undefined3 uStack_a0;
  uint16_t uStack_9d;
  uint8_t uStack_9b;
  uint8_t uStack_9a;
  uint8_t uStack_99;
  uint16_t uStack_98;
  uint8_t uStack_96;
  uint16_t uStack_95;
  uint8_t uStack_93;
  uint8_t uStack_92;
  uint8_t uStack_91;
  uint16_t uStack_90;
  uint32_t uStack_8e;
  uint16_t uStack_8a;
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
  uStack_e8 = _UNK_1806c6c6f;
  uStack_e6 = (uint16_t)_UNK_1806c6c71;
  uStack_e4 = (uint16_t)((uint)_UNK_1806c6c71 >> 0x10);
  uStack_e2 = (uint16_t)_UNK_1806c6c75;
  uStack_e0 = (uint16_t)((uint)_UNK_1806c6c75 >> 0x10);
  local_f8 = (uint64_t ****)_DAT_1806c6c5f;
  uStack_f0 = _UNK_1806c6c67;
  uStack_ee = _DAT_1806c6c69;
  uStack_ea = _UNK_1806c6c6d;
  local_b0 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xf0ac) == '\0') {
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_13 + 0xf0ac) = 1;
    func_0x1800d9840(lVal_13 + 0xf091,&local_f8);
    func_0x180673140(&LAB_180366cb0);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf091);
  func_0x18036fc90(fnPtr_1);
  uStack_e8 = 0;
  uStack_e6 = 0;
  uStack_e4 = 0;
  uStack_e2 = 0;
  uStack_e0 = 0;
  uStack_de = 0;
  uStack_dc = 0;
  local_f8 = (uint64_t ****)0x0;
  uStack_f0 = 0;
  uStack_ee = 0;
  uStack_ea = 0;
  sz_8 = strlen(fnPtr_1);
  if ((int64_t)sz_8 < 0) {
    func_0x18007ba70();
LAB_180327361:
    local_61 = 1;
    func_0x18007ba70();
LAB_18032736e:
    local_70 = 1;
    func_0x18007ba70();
LAB_18032737b:
    local_62 = 1;
    func_0x18007ba70();
LAB_180327388:
    local_71 = 1;
    func_0x18007ba70();
LAB_180327395:
    local_63 = 1;
    func_0x18007ba70();
LAB_1803273a2:
    local_72 = 1;
    func_0x18007ba70();
LAB_1803273af:
    local_64 = 1;
    func_0x18007ba70();
LAB_1803273bc:
    local_73 = 1;
    func_0x18007ba70();
LAB_1803273c9:
    local_65 = 1;
    func_0x18007ba70();
LAB_1803273d6:
    local_74 = 1;
    func_0x18007ba70();
LAB_1803273e3:
    local_66 = 1;
    func_0x18007ba70();
LAB_1803273f0:
    local_75 = 1;
    func_0x18007ba70();
LAB_1803273fd:
    local_67 = 1;
    func_0x18007ba70();
LAB_18032740a:
    local_76 = 1;
    func_0x18007ba70();
LAB_180327417:
    local_69 = 1;
    func_0x18007ba70();
LAB_180327424:
    local_68 = 1;
    func_0x18007ba70();
LAB_180327431:
    func_0x18007ba70();
LAB_180327437:
    func_0x18007ba70();
LAB_18032743d:
    func_0x18007ba70();
LAB_180327443:
    func_0x18007ba70();
LAB_180327449:
    local_6a = 1;
    func_0x18007ba70();
LAB_180327456:
    local_77 = 1;
    func_0x18007ba70();
LAB_180327463:
    local_6b = 1;
    func_0x18007ba70();
LAB_180327470:
    local_78 = 1;
    func_0x18007ba70();
LAB_18032747d:
    local_6c = 1;
    func_0x18007ba70();
LAB_18032748a:
    local_79 = 1;
    func_0x18007ba70();
LAB_180327497:
    local_6e = 1;
    func_0x18007ba70();
LAB_1803274a4:
    local_6d = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_8 < 0x10) {
      ptr4_U64_16 = &local_f8;
      uVal_19 = 0xf;
    }
    else {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_16;
      }
      else {
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_16;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_16,fnPtr_1,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    ptr4_U64_16 = &local_f8;
    func_0x18018c570(local_b0,0,0,ptr4_U64_16);
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_17 = local_f8;
      if (0xfff < uVal_9) {
        ptr4_U64_17 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_17)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_17,uVal_9);
    }
    *local_b0 = &PTR_LAB_1806c4cf0;
    *(uint16_t *)(local_b0 + 0x1a) = 0;
    uVal_4 = _UNK_1806b669c;
    uVal_31 = _UNK_1806b6698;
    uVal_28 = _UNK_1806b6694;
    *(uint32_t *)((int64_t)local_b0 + 0xd4) = _DAT_1806b6690;
    *(uint32_t *)(local_b0 + 0x1b) = uVal_28;
    *(uint32_t *)((int64_t)local_b0 + 0xdc) = uVal_31;
    *(uint32_t *)(local_b0 + 0x1c) = uVal_4;
    uVal_30 = _UNK_1806b2888;
    uVal_12 = _DAT_1806b2880;
    *(uint64_t *)((int64_t)local_b0 + 0xe4) = _DAT_1806b2880;
    *(uint64_t *)((int64_t)local_b0 + 0xec) = uVal_30;
    *(uint64_t *)((int64_t)local_b0 + 0xf4) = DAT_1806c3830;
    *(uint32_t *)((int64_t)local_b0 + 0xfc) = 0x40866666;
    *(uint8_t *)(local_b0 + 0x20) = 1;
    *(uint32_t *)((int64_t)local_b0 + 0x104) = 0x40c00000;
    local_100 = local_b0 + 0x21;
    *(uint8_t (*)[16])(local_b0 + 0x23) = ZEXT816(0);
    *(uint8_t (*)[16])(local_b0 + 0x21) = ZEXT816(0);
    *(uint32_t *)(local_b0 + 0x24) = 0xffffffff;
    uVal_4 = _UNK_1806c384c;
    uVal_31 = _UNK_1806c3848;
    uVal_28 = _UNK_1806c3844;
    *(uint32_t *)(local_b0 + 0x25) = _DAT_1806c3840;
    *(uint32_t *)((int64_t)local_b0 + 300) = uVal_28;
    *(uint32_t *)(local_b0 + 0x26) = uVal_31;
    *(uint32_t *)((int64_t)local_b0 + 0x134) = uVal_4;
    uVal_4 = _UNK_1806b5b3c;
    uVal_31 = _UNK_1806b5b38;
    uVal_28 = _UNK_1806b5b34;
    *(uint32_t *)(local_b0 + 0x27) = _DAT_1806b5b30;
    *(uint32_t *)((int64_t)local_b0 + 0x13c) = uVal_28;
    *(uint32_t *)(local_b0 + 0x28) = uVal_31;
    *(uint32_t *)((int64_t)local_b0 + 0x144) = uVal_4;
    uVal_4 = _UNK_1806c385c;
    uVal_31 = _UNK_1806c3858;
    uVal_28 = _UNK_1806c3854;
    *(uint32_t *)(local_b0 + 0x29) = _DAT_1806c3850;
    *(uint32_t *)((int64_t)local_b0 + 0x14c) = uVal_28;
    *(uint32_t *)(local_b0 + 0x2a) = uVal_31;
    *(uint32_t *)((int64_t)local_b0 + 0x154) = uVal_4;
    uVal_7 = _UNK_1806c3868;
    local_b0[0x2b] = _DAT_1806c3860;
    local_b0[0x2c] = uVal_7;
    local_b0[0x2d] = uVal_12;
    local_b0[0x2e] = uVal_30;
    local_b0[0x2f] = uVal_12;
    local_b0[0x30] = uVal_30;
    local_b0[0x31] = uVal_12;
    local_b0[0x32] = uVal_30;
    local_b0[0x33] = uVal_12;
    local_b0[0x34] = uVal_30;
    local_b0[0x35] = uVal_12;
    local_b0[0x36] = uVal_30;
    local_b0[0x37] = uVal_12;
    local_b0[0x38] = uVal_30;
    local_b0[0x39] = uVal_12;
    local_b0[0x3a] = uVal_30;
    local_b0[0x3b] = uVal_12;
    local_b0[0x3c] = uVal_30;
    local_b0[0x3d] = uVal_12;
    local_b0[0x3e] = uVal_30;
    local_b0[0x3f] = uVal_12;
    local_b0[0x40] = uVal_30;
    local_b0[0x41] = uVal_12;
    local_b0[0x42] = uVal_30;
    local_b0[0x43] = uVal_12;
    local_b0[0x44] = uVal_30;
    local_b0[0x45] = uVal_12;
    local_b0[0x46] = uVal_30;
    local_b0[0x47] = uVal_12;
    local_b0[0x48] = uVal_30;
    local_3d0 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_3d0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_408);
    }
    pU64_14 = local_b0 + 0x1a;
    uVal_5 = *(uint8_t *)pU64_14;
    uStack_e8 = (uint16_t)_DAT_1806c6c89;
    uStack_e6 = (uint16_t)((uint)_DAT_1806c6c89 >> 0x10);
    uStack_e4 = (uint16_t)_UNK_1806c6c8d;
    uStack_e2 = (uint16_t)((uint)_UNK_1806c6c8d >> 0x10);
    uStack_e0 = (uint16_t)_UNK_1806c6c91;
    uStack_de = (uint16_t)((uint)_UNK_1806c6c91 >> 0x10);
    uStack_dc = _UNK_1806c6c95;
    local_f8 = _DAT_1806c6c79;
    uStack_f0 = (uint16_t)_UNK_1806c6c81;
    uStack_ee = (uint32_t)((uint64_t)_UNK_1806c6c81 >> 0x10);
    uStack_ea = (uint16_t)((uint64_t)_UNK_1806c6c81 >> 0x30);
    uStack_d8 = CONCAT22(uStack_d8._2_2_,0xf1a1);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf0d0) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf0d0) = 1;
      func_0x1800f15f0(lVal_13 + 0xf0ad,&local_f8);
      func_0x180673140(&LAB_180366ce0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf0ad);
    func_0x18036fcc0(fnPtr_1);
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_93 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9d = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_8 = strlen(fnPtr_1);
    if ((int64_t)sz_8 < 0) goto LAB_180327361;
    if (sz_8 < 0x10) {
      ptr4_U64_17 = &local_a8;
      uVal_19 = 0xf;
    }
    else {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_61 = 1;
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_a8 = ptr4_U64_17;
      }
      else {
        local_61 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_17;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint8_t)(sz_8 >> 0x10);
    uStack_95 = (uint16_t)(sz_8 >> 0x18);
    uStack_93 = (uint8_t)(sz_8 >> 0x28);
    uStack_92 = (uint8_t)(sz_8 >> 0x30);
    uStack_91 = (uint8_t)(sz_8 >> 0x38);
    uStack_90 = (uint16_t)uVal_19;
    uStack_8e = (uint32_t)(uVal_19 >> 0x10);
    uStack_8a = (uint16_t)(uVal_19 >> 0x30);
    func_0x1806aa960(ptr4_U64_17,fnPtr_1,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf0e0) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf0e0) = 1;
      *(uint64_t *)(lVal_13 + 0xf0d8) = 0x121ec7093949986;
      func_0x180673140(&LAB_180366d10);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0xf0d8);
    if (*(char *)(lVal_13 + 0xf0df) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_13 + 0xf0dd) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_13 + 0xf0dc) << 0x20) ^ SUB168(_DAT_1806bb3a0,0);
    }
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen((char *)pU64_2);
    if ((int64_t)sz_8 < 0) goto LAB_18032736e;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_70 = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_16;
      }
      else {
        local_70 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_16;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_16,pU64_2,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    in_stack_fffffffffffffb08 = in_stack_fffffffffffffb08 & 0xffffff00;
    ptr4_U64_16 = &local_f8;
    ptr4_U64_17 = &local_a8;
    func_0x1801ccd70(local_b0,ptr4_U64_16,ptr4_U64_17,pU64_14,uVal_5,local_408,in_stack_fffffffffffffb08);
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_f8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    local_390 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_390 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_3c8);
    }
    pU64_18 = (uint8_t *)((int64_t)local_b0 + 0xd1);
    uVal_5 = *pU64_18;
    local_a8 = _DAT_1806c6c9b;
    uStack_a0 = (undefined3)_UNK_1806c6ca3;
    uStack_9d = (uint16_t)((uint64_t)_UNK_1806c6ca3 >> 0x18);
    uStack_9b = 0x16;
    uStack_9a = 5;
    uStack_99 = 0x45;
    uStack_98 = 0xb679;
    uStack_96 = 0x31;
    uStack_95 = 0x4551;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf0f8) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf0f8) = 1;
      func_0x18007cd50(lVal_13 + 0xf0e1,&local_a8);
      func_0x180673140(&LAB_180366d40);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf0e1);
    func_0x180218820(fnPtr_1);
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen(fnPtr_1);
    if ((int64_t)sz_8 < 0) goto LAB_18032737b;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_62 = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_16;
      }
      else {
        local_62 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_16;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_16,fnPtr_1,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf110) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf110) = 1;
      *(uint64_t *)(lVal_13 + 0xf100) = 0x45161c274b20b25f;
      *(uint32_t *)(lVal_13 + 0xf108) = 0x5131b679;
      *(uint16_t *)(lVal_13 + 0xf10c) = 0x145;
      func_0x180673140(&LAB_180366d70);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0xf100);
    if (*(char *)(lVal_13 + 0xf10d) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x656173452549d30d;
      *(uint *)(lVal_13 + 0xf108) = *(uint *)(lVal_13 + 0xf108) ^ 0x2549d30d;
      *(byte *)(lVal_13 + 0xf10c) = *(byte *)(lVal_13 + 0xf10c) ^ 0x45;
      *(uint8_t *)(lVal_13 + 0xf10d) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_93 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9d = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_8 = strlen((char *)pU64_2);
    if ((int64_t)sz_8 < 0) goto LAB_180327388;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_71 = 1;
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_a8 = ptr4_U64_17;
      }
      else {
        local_71 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_17;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint8_t)(sz_8 >> 0x10);
    uStack_95 = (uint16_t)(sz_8 >> 0x18);
    uStack_93 = (uint8_t)(sz_8 >> 0x28);
    uStack_92 = (uint8_t)(sz_8 >> 0x30);
    uStack_91 = (uint8_t)(sz_8 >> 0x38);
    uStack_90 = (uint16_t)uVal_19;
    uStack_8e = (uint32_t)(uVal_19 >> 0x10);
    uStack_8a = (uint16_t)(uVal_19 >> 0x30);
    func_0x1806aa960(ptr4_U64_17,pU64_2,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
    in_stack_fffffffffffffb08 = in_stack_fffffffffffffb08 & 0xffffff00;
    ptr4_U64_16 = &local_a8;
    ptr4_U64_17 = &local_f8;
    func_0x1801ccd70(local_b0,ptr4_U64_16,ptr4_U64_17,pU64_18,uVal_5,local_3c8,in_stack_fffffffffffffb08);
    uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_f8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    local_4d8 = &PTR_LAB_1806ba9a0;
    local_4d0 = local_b0;
    local_4a0 = &local_4d8;
    local_458 = *(uint32_t *)((int64_t)local_b0 + 0xd4);
    uStack_454 = *(uint32_t *)(local_b0 + 0x1b);
    uStack_450 = *(uint32_t *)((int64_t)local_b0 + 0xdc);
    uStack_44c = *(uint32_t *)(local_b0 + 0x1c);
    local_a8 = _DAT_1806c6cb0;
    uStack_a0 = (undefined3)_UNK_1806c6cb8;
    uStack_9d = (uint16_t)((uint64_t)_UNK_1806c6cb8 >> 0x18);
    uStack_9b = (uint8_t)((uint64_t)_UNK_1806c6cb8 >> 0x28);
    uStack_9a = (uint8_t)((uint64_t)_UNK_1806c6cb8 >> 0x30);
    uStack_99 = (uint8_t)((uint64_t)_UNK_1806c6cb8 >> 0x38);
    uStack_98 = 0x73b7;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf124) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf124) = 1;
      func_0x18007c170(lVal_13 + 0xf111,&local_a8);
      func_0x180673140(&LAB_180366da0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf111);
    func_0x1802e3290(fnPtr_1);
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen(fnPtr_1);
    if ((int64_t)sz_8 < 0) goto LAB_180327395;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_63 = 1;
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_17;
      }
      else {
        local_63 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_17;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_17,fnPtr_1,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf134) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf134) = 1;
      *(uint64_t *)(lVal_13 + 0xf128) = 0x83a8dca1d5ad1691;
      *(uint32_t *)(lVal_13 + 0xf130) = 0x1d501aa;
      func_0x180673140(&LAB_180366dd0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0xf128);
    if (*(char *)(lVal_13 + 0xf133) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xefc7bf81a1d573c5;
      *(uint *)(lVal_13 + 0xf130) =
           (*(uint *)(lVal_13 + 0xf130) & 0xffff | (uint)*(byte *)(lVal_13 + 0xf132) << 0x10) ^
           SUB164(_DAT_1806be670,0);
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_93 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9d = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_8 = strlen((char *)pU64_2);
    if ((int64_t)sz_8 < 0) goto LAB_1803273a2;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_72 = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_a8 = ptr4_U64_16;
      }
      else {
        local_72 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_16;
      }
    }
    pU64_14 = local_b0;
    lVal_13 = (int64_t)local_b0 + 0xd4;
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint8_t)(sz_8 >> 0x10);
    uStack_95 = (uint16_t)(sz_8 >> 0x18);
    uStack_93 = (uint8_t)(sz_8 >> 0x28);
    uStack_92 = (uint8_t)(sz_8 >> 0x30);
    uStack_91 = (uint8_t)(sz_8 >> 0x38);
    uStack_90 = (uint16_t)uVal_19;
    uStack_8e = (uint32_t)(uVal_19 >> 0x10);
    uStack_8a = (uint16_t)(uVal_19 >> 0x30);
    func_0x1806aa960(ptr4_U64_16,pU64_2,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    ptr3_U64_29 = &local_4d8;
    pU64_27 = &local_458;
    ptr4_U64_16 = &local_a8;
    ptr4_U64_17 = &local_f8;
    func_0x1801cd600(pU64_14,ptr4_U64_16,ptr4_U64_17,lVal_13,pU64_27,ptr3_U64_29,
                  in_stack_fffffffffffffb08 & 0xffffff00);
    uVal_31 = (uint32_t)((uint64_t)ptr3_U64_29 >> 0x20);
    uVal_28 = (uint32_t)((uint64_t)pU64_27 >> 0x20);
    uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_f8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    local_350 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_350 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_388);
    }
    pU64_27 = (uint32_t *)((int64_t)local_b0 + 0xf4);
    uVal_4 = *pU64_27;
    local_a8 = _DAT_1806c6cc2;
    uStack_a0 = (undefined3)_UNK_1806c6cca;
    uStack_9d = (uint16_t)((uint64_t)_UNK_1806c6cca >> 0x18);
    uStack_9b = (uint8_t)((uint64_t)_UNK_1806c6cca >> 0x28);
    uStack_9a = (uint8_t)((uint64_t)_UNK_1806c6cca >> 0x30);
    uStack_99 = (uint8_t)((uint64_t)_UNK_1806c6cca >> 0x38);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf148) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf148) = 1;
      func_0x18007d150(lVal_13 + 0xf135,&local_a8);
      func_0x180673140(&LAB_180366e00);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_13 + 0xf135);
    if (*(char *)(lVal_13 + 0xf145) == '\x01') {
      uVal_32 = *(uint *)(lVal_13 + 0xf139) ^ _UNK_1806b2cb4;
      uVal_21 = *(uint *)(lVal_13 + 0xf13d) ^ _UNK_1806b2cb8;
      uVal_23 = *(uint *)(lVal_13 + 0xf141) ^ _UNK_1806b2cbc;
      *pU64_3 = *pU64_3 ^ _DAT_1806b2cb0;
      *(uint *)(lVal_13 + 0xf139) = uVal_32;
      *(uint *)(lVal_13 + 0xf13d) = uVal_21;
      *(uint *)(lVal_13 + 0xf141) = uVal_23;
      *(uint8_t *)(lVal_13 + 0xf145) = 0;
    }
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen((char *)pU64_3);
    if ((int64_t)sz_8 < 0) goto LAB_1803273af;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_64 = 1;
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_17;
      }
      else {
        local_64 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_17;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_17,pU64_3,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf154) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf154) = 1;
      *(uint32_t *)(lVal_13 + 0xf14c) = 0x20d3d866;
      *(uint16_t *)(lVal_13 + 0xf150) = 0x139;
      func_0x180673140(&LAB_180366e20);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_13 + 0xf14c);
    if (*(char *)(lVal_13 + 0xf151) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x45a9b135;
      *(byte *)(lVal_13 + 0xf150) = *(byte *)(lVal_13 + 0xf150) ^ 0x39;
      *(uint8_t *)(lVal_13 + 0xf151) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_93 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9d = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_8 = strlen((char *)pU64_3);
    if ((int64_t)sz_8 < 0) goto LAB_1803273bc;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_73 = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_a8 = ptr4_U64_16;
      }
      else {
        local_73 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_16;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint8_t)(sz_8 >> 0x10);
    uStack_95 = (uint16_t)(sz_8 >> 0x18);
    uStack_93 = (uint8_t)(sz_8 >> 0x28);
    uStack_92 = (uint8_t)(sz_8 >> 0x30);
    uStack_91 = (uint8_t)(sz_8 >> 0x38);
    uStack_90 = (uint16_t)uVal_19;
    uStack_8e = (uint32_t)(uVal_19 >> 0x10);
    uStack_8a = (uint16_t)(uVal_19 >> 0x30);
    func_0x1806aa960(ptr4_U64_16,pU64_3,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    uVal_12 = CONCAT44(uVal_28,uVal_4);
    uVal_30 = CONCAT44(uVal_31,0x3f000000);
    ptr4_U64_16 = &local_a8;
    ptr4_U64_17 = &local_f8;
    func_0x1801cd2e0(local_b0,ptr4_U64_16,ptr4_U64_17,pU64_27,uVal_12,uVal_30,0x40000000,local_388,0);
    uVal_31 = (uint32_t)((uint64_t)uVal_30 >> 0x20);
    uVal_28 = (uint32_t)((uint64_t)uVal_12 >> 0x20);
    uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_f8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    local_310 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_310 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_348);
    }
    pU64_14 = local_b0 + 0x1f;
    uVal_4 = *(uint32_t *)pU64_14;
    uStack_98 = _UNK_1806c6ce2;
    uStack_96 = (uint8_t)_UNK_1806c6ce4;
    uStack_95 = (uint16_t)((uint)_UNK_1806c6ce4 >> 8);
    uStack_93 = (uint8_t)((uint)_UNK_1806c6ce4 >> 0x18);
    uStack_92 = (uint8_t)_UNK_1806c6ce8;
    uStack_91 = (uint8_t)((uint)_UNK_1806c6ce8 >> 8);
    uStack_90 = (uint16_t)((uint)_UNK_1806c6ce8 >> 0x10);
    uStack_8e = _UNK_1806c6cec;
    local_a8 = _DAT_1806c6cd2;
    uStack_a0 = (undefined3)_UNK_1806c6cda;
    uStack_9d = (uint16_t)((uint6)_UNK_1806c6cda >> 0x18);
    uStack_9b = (uint8_t)((uint6)_UNK_1806c6cda >> 0x28);
    uStack_9a = (uint8_t)_DAT_1806c6ce0;
    uStack_99 = (uint8_t)((ushort)_DAT_1806c6ce0 >> 8);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf174) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf174) = 1;
      func_0x18008fa60(lVal_13 + 0xf155,&local_a8);
      func_0x180673140(&LAB_180366e50);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf155);
    func_0x18036fcf0(fnPtr_1);
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen(fnPtr_1);
    if ((int64_t)sz_8 < 0) goto LAB_1803273c9;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_65 = 1;
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_17;
      }
      else {
        local_65 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_17;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_17,fnPtr_1,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf184) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf184) = 1;
      *(uint64_t *)(lVal_13 + 0xf178) = 0x82d16553b6525c16;
      *(uint32_t *)(lVal_13 + 0xf180) = 0x13d4236;
      func_0x180673140(&LAB_180366e80);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0xf178);
    if (*(char *)(lVal_13 + 0xf183) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xe7bf0d27d93d3145;
      *(uint *)(lVal_13 + 0xf180) =
           (*(uint *)(lVal_13 + 0xf180) & 0xffff | (uint)*(byte *)(lVal_13 + 0xf182) << 0x10) ^
           SUB164(_DAT_1806b5ca0,0);
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_93 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9d = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_8 = strlen((char *)pU64_2);
    if ((int64_t)sz_8 < 0) goto LAB_1803273d6;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_74 = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_a8 = ptr4_U64_16;
      }
      else {
        local_74 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_16;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint8_t)(sz_8 >> 0x10);
    uStack_95 = (uint16_t)(sz_8 >> 0x18);
    uStack_93 = (uint8_t)(sz_8 >> 0x28);
    uStack_92 = (uint8_t)(sz_8 >> 0x30);
    uStack_91 = (uint8_t)(sz_8 >> 0x38);
    uStack_90 = (uint16_t)uVal_19;
    uStack_8e = (uint32_t)(uVal_19 >> 0x10);
    uStack_8a = (uint16_t)(uVal_19 >> 0x30);
    func_0x1806aa960(ptr4_U64_16,pU64_2,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    uVal_12 = CONCAT44(uVal_28,uVal_4);
    uVal_30 = CONCAT44(uVal_31,0x3f800000);
    ptr4_U64_16 = &local_a8;
    ptr4_U64_17 = &local_f8;
    func_0x1801cd2e0(local_b0,ptr4_U64_16,ptr4_U64_17,pU64_14,uVal_12,uVal_30,0x42340000,local_348,0);
    uVal_31 = (uint32_t)((uint64_t)uVal_30 >> 0x20);
    uVal_28 = (uint32_t)((uint64_t)uVal_12 >> 0x20);
    uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_f8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    local_2d0 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_2d0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_308);
    }
    pU64_27 = (uint32_t *)((int64_t)local_b0 + 0xfc);
    uVal_4 = *pU64_27;
    uStack_c8 = UNK_1806c6d20;
    uStack_c7 = _UNK_1806c6d21;
    uStack_c3 = _UNK_1806c6d25;
    uStack_d8 = _DAT_1806c6d10;
    uStack_d4 = _UNK_1806c6d14;
    uStack_d0 = _UNK_1806c6d18;
    uStack_cc = _UNK_1806c6d1c;
    uStack_e8 = (uint16_t)_DAT_1806c6d00;
    uStack_e6 = (uint16_t)((uint)_DAT_1806c6d00 >> 0x10);
    uStack_e4 = (uint16_t)_UNK_1806c6d04;
    uStack_e2 = (uint16_t)((uint)_UNK_1806c6d04 >> 0x10);
    uStack_e0 = (uint16_t)_UNK_1806c6d08;
    uStack_de = (uint16_t)((uint)_UNK_1806c6d08 >> 0x10);
    uStack_dc = _UNK_1806c6d0c;
    local_f8 = _DAT_1806c6cf0;
    uStack_f0 = (uint16_t)_UNK_1806c6cf8;
    uStack_ee = (uint32_t)((uint64_t)_UNK_1806c6cf8 >> 0x10);
    uStack_ea = (uint16_t)((uint64_t)_UNK_1806c6cf8 >> 0x30);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf1c0) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf1c0) = 1;
      func_0x1802d71a0(lVal_13 + 0xf185,&local_f8);
      func_0x180673140(&LAB_180366eb0);
    }
    uVal_26 = _UNK_1806b2d8c;
    uVal_23 = _UNK_1806b2d88;
    uVal_21 = _UNK_1806b2d84;
    uVal_32 = _DAT_1806b2d80;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_13 + 0xf185);
    if (*(char *)(lVal_13 + 0xf1be) == '\x01') {
      uVal_20 = *(uint *)(lVal_13 + 0xf189) ^ _UNK_1806b2d84;
      uVal_22 = *(uint *)(lVal_13 + 0xf18d) ^ _UNK_1806b2d88;
      uVal_24 = *(uint *)(lVal_13 + 0xf191) ^ _UNK_1806b2d8c;
      *pU64_3 = *pU64_3 ^ _DAT_1806b2d80;
      *(uint *)(lVal_13 + 0xf189) = uVal_20;
      *(uint *)(lVal_13 + 0xf18d) = uVal_22;
      *(uint *)(lVal_13 + 0xf191) = uVal_24;
      *(uint *)(lVal_13 + 0xf195) = *(uint *)(lVal_13 + 0xf195) ^ uVal_32;
      *(uint *)(lVal_13 + 0xf199) = *(uint *)(lVal_13 + 0xf199) ^ uVal_21;
      *(uint *)(lVal_13 + 0xf19d) = *(uint *)(lVal_13 + 0xf19d) ^ uVal_23;
      *(uint *)(lVal_13 + 0xf1a1) = *(uint *)(lVal_13 + 0xf1a1) ^ uVal_26;
      *(uint *)(lVal_13 + 0xf1a5) = *(uint *)(lVal_13 + 0xf1a5) ^ uVal_32;
      *(uint *)(lVal_13 + 0xf1a9) = *(uint *)(lVal_13 + 0xf1a9) ^ uVal_21;
      *(uint *)(lVal_13 + 0xf1ad) = *(uint *)(lVal_13 + 0xf1ad) ^ uVal_23;
      *(uint *)(lVal_13 + 0xf1b1) = *(uint *)(lVal_13 + 0xf1b1) ^ uVal_26;
      *(uint64_t *)(lVal_13 + 0xf1b5) = *(uint64_t *)(lVal_13 + 0xf1b5) ^ SUB168(_DAT_1806b5b50,0);
      *(byte *)(lVal_13 + 0xf1bd) = *(byte *)(lVal_13 + 0xf1bd) ^ 0x1d;
      *(uint8_t *)(lVal_13 + 0xf1be) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_93 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9d = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_8 = strlen((char *)pU64_3);
    if ((int64_t)sz_8 < 0) goto LAB_1803273e3;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_66 = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_a8 = ptr4_U64_16;
      }
      else {
        local_66 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_16;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint8_t)(sz_8 >> 0x10);
    uStack_95 = (uint16_t)(sz_8 >> 0x18);
    uStack_93 = (uint8_t)(sz_8 >> 0x28);
    uStack_92 = (uint8_t)(sz_8 >> 0x30);
    uStack_91 = (uint8_t)(sz_8 >> 0x38);
    uStack_90 = (uint16_t)uVal_19;
    uStack_8e = (uint32_t)(uVal_19 >> 0x10);
    uStack_8a = (uint16_t)(uVal_19 >> 0x30);
    func_0x1806aa960(ptr4_U64_16,pU64_3,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf1d0) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf1d0) = 1;
      *(uint64_t *)(lVal_13 + 0xf1c8) = 0x12170ca6229164f;
      func_0x180673140(&LAB_180366ef0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0xf1c8);
    if (*(char *)(lVal_13 + 0xf1cf) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_13 + 0xf1cd) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_13 + 0xf1cc) << 0x20) ^ SUB168(_DAT_1806b2d90,0);
    }
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen((char *)pU64_2);
    if ((int64_t)sz_8 < 0) goto LAB_1803273f0;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_75 = 1;
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_17;
      }
      else {
        local_75 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_17;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_17,pU64_2,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
    uVal_12 = CONCAT44(uVal_28,uVal_4);
    uVal_32 = 0x41700000;
    ptr4_U64_16 = &local_f8;
    ptr4_U64_17 = &local_a8;
    func_0x1801cd2e0(local_b0,ptr4_U64_16,ptr4_U64_17,pU64_27,uVal_12,CONCAT44(uVal_31,0x3dcccccd),
                  0x41700000,local_308,0);
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_f8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    local_290 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_290 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_2c8);
    }
    pU64_14 = local_b0 + 0x20;
    uVal_5 = *(uint8_t *)pU64_14;
    uStack_d8 = _UNK_1806c6d49;
    uStack_d4 = _UNK_1806c6d4d;
    uStack_d0 = _UNK_1806c6d51;
    uStack_e8 = (uint16_t)_DAT_1806c6d39;
    uStack_e6 = (uint16_t)((uint)_DAT_1806c6d39 >> 0x10);
    uStack_e4 = (uint16_t)_UNK_1806c6d3d;
    uStack_e2 = (uint16_t)((uint)_UNK_1806c6d3d >> 0x10);
    uStack_e0 = (uint16_t)_UNK_1806c6d41;
    uStack_de = (uint16_t)((uint)_UNK_1806c6d41 >> 0x10);
    uStack_dc = _DAT_1806c6d45;
    local_f8 = _DAT_1806c6d29;
    uStack_f0 = (uint16_t)_UNK_1806c6d31;
    uStack_ee = (uint32_t)((uint64_t)_UNK_1806c6d31 >> 0x10);
    uStack_ea = (uint16_t)((uint64_t)_UNK_1806c6d31 >> 0x30);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf200) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf200) = 1;
      func_0x1801b1b20(lVal_13 + 0xf1d1,&local_f8);
      func_0x180673140(&LAB_180366f20);
    }
    uVal_20 = _UNK_1806b2dac;
    uVal_26 = _UNK_1806b2da8;
    uVal_23 = _UNK_1806b2da4;
    uVal_21 = _DAT_1806b2da0;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_13 + 0xf1d1);
    if (*(char *)(lVal_13 + 0xf1fd) == '\x01') {
      uVal_22 = *(uint *)(lVal_13 + 0xf1d5) ^ _UNK_1806b2da4;
      uVal_24 = *(uint *)(lVal_13 + 0xf1d9) ^ _UNK_1806b2da8;
      uVal_25 = *(uint *)(lVal_13 + 0xf1dd) ^ _UNK_1806b2dac;
      *pU64_3 = *pU64_3 ^ _DAT_1806b2da0;
      *(uint *)(lVal_13 + 0xf1d5) = uVal_22;
      *(uint *)(lVal_13 + 0xf1d9) = uVal_24;
      *(uint *)(lVal_13 + 0xf1dd) = uVal_25;
      *(uint *)(lVal_13 + 0xf1e1) = *(uint *)(lVal_13 + 0xf1e1) ^ uVal_21;
      *(uint *)(lVal_13 + 0xf1e5) = *(uint *)(lVal_13 + 0xf1e5) ^ uVal_23;
      *(uint *)(lVal_13 + 0xf1e9) = *(uint *)(lVal_13 + 0xf1e9) ^ uVal_26;
      *(uint *)(lVal_13 + 0xf1ed) = *(uint *)(lVal_13 + 0xf1ed) ^ uVal_20;
      *(uint64_t *)(lVal_13 + 0xf1f1) = *(uint64_t *)(lVal_13 + 0xf1f1) ^ SUB168(_DAT_1806bb120,0);
      *(byte *)(lVal_13 + 0xf1f9) = *(byte *)(lVal_13 + 0xf1f9) ^ 0x2d;
      *(byte *)(lVal_13 + 0xf1fa) = *(byte *)(lVal_13 + 0xf1fa) ^ 0xe3;
      *(byte *)(lVal_13 + 0xf1fb) = *(byte *)(lVal_13 + 0xf1fb) ^ 0xcf;
      *(byte *)(lVal_13 + 0xf1fc) = *(byte *)(lVal_13 + 0xf1fc) ^ 0x19;
      *(uint8_t *)(lVal_13 + 0xf1fd) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_93 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9d = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_8 = strlen((char *)pU64_3);
    if ((int64_t)sz_8 < 0) goto LAB_1803273fd;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_67 = 1;
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_a8 = ptr4_U64_17;
      }
      else {
        local_67 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_17;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint8_t)(sz_8 >> 0x10);
    uStack_95 = (uint16_t)(sz_8 >> 0x18);
    uStack_93 = (uint8_t)(sz_8 >> 0x28);
    uStack_92 = (uint8_t)(sz_8 >> 0x30);
    uStack_91 = (uint8_t)(sz_8 >> 0x38);
    uStack_90 = (uint16_t)uVal_19;
    uStack_8e = (uint32_t)(uVal_19 >> 0x10);
    uStack_8a = (uint16_t)(uVal_19 >> 0x30);
    func_0x1806aa960(ptr4_U64_17,pU64_3,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf214) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf214) = 1;
      *(uint8_t *)(lVal_13 + 0xf212) = 1;
      *(uint64_t *)(lVal_13 + 0xf208) = 0xb6fa9bda74a68d6c;
      *(uint16_t *)(lVal_13 + 0xf210) = 0xe343;
      func_0x180673140(&LAB_180366f50);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0xf208);
    if (*(char *)(lVal_13 + 0xf212) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xd993efbb19cfe32d;
      *(byte *)(lVal_13 + 0xf210) = *(byte *)(lVal_13 + 0xf210) ^ 0x2d;
      *(byte *)(lVal_13 + 0xf211) = *(byte *)(lVal_13 + 0xf211) ^ 0xe3;
      *(uint8_t *)(lVal_13 + 0xf212) = 0;
    }
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen((char *)pU64_2);
    if ((int64_t)sz_8 < 0) goto LAB_18032740a;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_76 = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_16;
      }
      else {
        local_76 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_16;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_16,pU64_2,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    pU64_18 = local_2c8;
    uVal_12 = CONCAT71((int7)((uint64_t)uVal_12 >> 8),uVal_5);
    ptr4_U64_16 = &local_f8;
    ptr4_U64_17 = &local_a8;
    func_0x1801ccd70(local_b0,ptr4_U64_16,ptr4_U64_17,pU64_14,uVal_12,pU64_18,uVal_32 & 0xffffff00);
    uVal_31 = (uint32_t)((uint64_t)pU64_18 >> 0x20);
    uVal_28 = (uint32_t)((uint64_t)uVal_12 >> 0x20);
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_f8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    local_498 = &PTR_LAB_1806c7f10;
    local_490 = local_b0;
    local_460 = &local_498;
    uVal_4 = *(uint32_t *)((int64_t)local_b0 + 0x104);
    local_a8 = _DAT_1806c6d55;
    uStack_a0 = (undefined3)_UNK_1806c6d5d;
    uStack_9d = (uint16_t)((uint64_t)_UNK_1806c6d5d >> 0x18);
    uStack_9b = (uint8_t)((uint64_t)_UNK_1806c6d5d >> 0x28);
    uStack_9a = (uint8_t)((uint64_t)_UNK_1806c6d5d >> 0x30);
    uStack_99 = (uint8_t)((uint64_t)_UNK_1806c6d5d >> 0x38);
    uStack_98 = 0x9d17;
    uStack_96 = 0x92;
    uStack_95 = 0x7b;
    uStack_93 = 0xf5;
    uStack_92 = 0x40;
    uStack_91 = 0xeb;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 62000) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 62000) = 1;
      func_0x18007d9e0(lVal_13 + 0xf215,&local_a8);
      func_0x180673140(&LAB_180366f80);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf215);
    func_0x1802e4a20(fnPtr_1);
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen(fnPtr_1);
    if ((int64_t)sz_8 < 0) goto LAB_180327417;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_69 = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_16;
      }
      else {
        local_69 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_16;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_16,fnPtr_1,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    local_128._8_8_ = _UNK_1806c6d75;
    local_128._0_8_ = _DAT_1806c6d6d;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf244) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf244) = 1;
      func_0x18007d150(lVal_13 + 0xf231,local_128);
      func_0x180673140(&LAB_180366fb0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_13 + 0xf231);
    if (*(char *)(lVal_13 + 0xf241) == '\x01') {
      uVal_32 = *(uint *)(lVal_13 + 0xf235) ^ _UNK_1806b2914;
      uVal_21 = *(uint *)(lVal_13 + 0xf239) ^ _UNK_1806b2918;
      uVal_23 = *(uint *)(lVal_13 + 0xf23d) ^ _UNK_1806b291c;
      *pU64_3 = *pU64_3 ^ _DAT_1806b2910;
      *(uint *)(lVal_13 + 0xf235) = uVal_32;
      *(uint *)(lVal_13 + 0xf239) = uVal_21;
      *(uint *)(lVal_13 + 0xf23d) = uVal_23;
      *(uint8_t *)(lVal_13 + 0xf241) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_93 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9d = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_8 = strlen((char *)pU64_3);
    if ((int64_t)sz_8 < 0) goto LAB_180327424;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_68 = 1;
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_a8 = ptr4_U64_17;
      }
      else {
        local_68 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_17;
      }
    }
    pU64_14 = local_b0;
    lVal_13 = (int64_t)local_b0 + 0x104;
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint8_t)(sz_8 >> 0x10);
    uStack_95 = (uint16_t)(sz_8 >> 0x18);
    uStack_93 = (uint8_t)(sz_8 >> 0x28);
    uStack_92 = (uint8_t)(sz_8 >> 0x30);
    uStack_91 = (uint8_t)(sz_8 >> 0x38);
    uStack_90 = (uint16_t)uVal_19;
    uStack_8e = (uint32_t)(uVal_19 >> 0x10);
    uStack_8a = (uint16_t)(uVal_19 >> 0x30);
    func_0x1806aa960(ptr4_U64_17,pU64_3,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
    uVal_9 = CONCAT44(uVal_28,uVal_4);
    uVal_32 = 0x41400000;
    ptr4_U64_16 = &local_a8;
    ptr4_U64_17 = &local_f8;
    func_0x1801cd2e0(pU64_14,ptr4_U64_16,ptr4_U64_17,lVal_13,uVal_9,CONCAT44(uVal_31,0x40000000),0x41400000,
                  &local_498,0);
    uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_19) {
      uVal_11 = uVal_19 + 1;
      ptr4_U64_15 = local_a8;
      if (0xfff < uVal_11) {
        ptr4_U64_15 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_11 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_11);
    }
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_11 = uVal_19 + 1;
      ptr4_U64_15 = local_f8;
      if (0xfff < uVal_11) {
        ptr4_U64_15 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_11 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_11);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf254) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf254) = 1;
      *(uint8_t *)(lVal_13 + 0xf250) = 1;
      *(uint64_t *)(lVal_13 + 0xf248) = 0xf5308c1506097072;
      func_0x180673140(&LAB_180366fd0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0xf248);
    if (*(char *)(lVal_13 + 0xf250) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xf553e56763671535;
      *(uint8_t *)(lVal_13 + 0xf250) = 0;
    }
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen((char *)pU64_2);
    if ((int64_t)sz_8 < 0) goto LAB_180327431;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_11 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_17;
      }
      else {
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_17;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_17,pU64_2,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
    ptr4_U64_17 = &local_f8;
    uVal_12 = func_0x1801d3650(local_100,ptr4_U64_17,0);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf260) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf260) = 1;
      *(uint32_t *)(lVal_13 + 0xf258) = 0x1b08776d;
      *(uint16_t *)(lVal_13 + 0xf25c) = 0x167;
      func_0x180673140(&LAB_180366ff0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_13 + 0xf258);
    if (*(char *)(lVal_13 + 0xf25d) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x63671535;
      *(byte *)(lVal_13 + 0xf25c) = *(byte *)(lVal_13 + 0xf25c) ^ 0x67;
      *(uint8_t *)(lVal_13 + 0xf25d) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_93 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9d = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_8 = strlen((char *)pU64_3);
    if ((int64_t)sz_8 < 0) goto LAB_180327437;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_11 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_a8 = ptr4_U64_16;
      }
      else {
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_16;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint8_t)(sz_8 >> 0x10);
    uStack_95 = (uint16_t)(sz_8 >> 0x18);
    uStack_93 = (uint8_t)(sz_8 >> 0x28);
    uStack_92 = (uint8_t)(sz_8 >> 0x30);
    uStack_91 = (uint8_t)(sz_8 >> 0x38);
    uStack_90 = (uint16_t)uVal_19;
    uStack_8e = (uint32_t)(uVal_19 >> 0x10);
    uStack_8a = (uint16_t)(uVal_19 >> 0x30);
    func_0x1806aa960(ptr4_U64_16,pU64_3,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    ptr4_U64_16 = &local_a8;
    uVal_12 = func_0x1801d3650(uVal_12,ptr4_U64_16,1);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf278) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf278) = 1;
      *(uint8_t *)(lVal_13 + 0xf274) = 1;
      *(uint64_t *)(lVal_13 + 0xf268) = 0x813291341a067965;
      *(uint32_t *)(lVal_13 + 0xf270) = 0x63097a5c;
      func_0x180673140(&LAB_180367020);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0xf268);
    if (*(char *)(lVal_13 + 0xf274) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xf553e56763671535;
      *(uint *)(lVal_13 + 0xf270) = *(uint *)(lVal_13 + 0xf270) ^ 0x63671535;
      *(uint8_t *)(lVal_13 + 0xf274) = 0;
    }
    local_118._0_16_ = (uint8_t  [16])0x0;
    local_128 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_2);
    if ((int64_t)sz_8 < 0) goto LAB_18032743d;
    if (sz_8 < 0x10) {
      pU64_18 = local_128;
      uVal_19 = 0xf;
    }
    else {
      uVal_11 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_18 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_13;
      }
      local_128._0_8_ = pU64_18;
    }
    local_118._8_8_ = uVal_19;
    local_118._0_8_ = sz_8;
    func_0x1806aa960(pU64_18,pU64_2,sz_8);
    pU64_18[sz_8] = 0;
    uVal_12 = func_0x1801d3650(uVal_12,local_128,2);
    local_148._8_8_ = _UNK_1806c6d85;
    local_148._0_8_ = _DAT_1806c6d7d;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf28c) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf28c) = 1;
      func_0x18007d150(lVal_13 + 0xf279,local_148);
      func_0x180673140(&LAB_180367050);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_13 + 0xf279);
    if (*(char *)(lVal_13 + 0xf289) == '\x01') {
      uVal_21 = *(uint *)(lVal_13 + 0xf27d) ^ _UNK_1806af244;
      uVal_23 = *(uint *)(lVal_13 + 0xf281) ^ _UNK_1806af248;
      uVal_26 = *(uint *)(lVal_13 + 0xf285) ^ _UNK_1806af24c;
      *pU64_3 = *pU64_3 ^ _DAT_1806af240;
      *(uint *)(lVal_13 + 0xf27d) = uVal_21;
      *(uint *)(lVal_13 + 0xf281) = uVal_23;
      *(uint *)(lVal_13 + 0xf285) = uVal_26;
      *(uint8_t *)(lVal_13 + 0xf289) = 0;
    }
    local_138 = (uint8_t  [16])0x0;
    local_148 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_3);
    if ((int64_t)sz_8 < 0) goto LAB_180327443;
    if (sz_8 < 0x10) {
      pU64_18 = local_148;
      uVal_19 = 0xf;
    }
    else {
      uVal_11 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_18 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_13;
      }
      local_148._0_8_ = pU64_18;
    }
    local_138._8_8_ = uVal_19;
    local_138._0_8_ = sz_8;
    func_0x1806aa960(pU64_18,pU64_3,sz_8);
    pU64_18[sz_8] = 0;
    func_0x1801d3650(uVal_12,local_148,3);
    if (0xf < (uint64_t)local_138._8_8_) {
      uVal_19 = local_138._8_8_ + 1;
      lVal_13 = local_148._0_8_;
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)(local_148._0_8_ + -8);
        if (0x1f < (uint64_t)((local_148._0_8_ + -8) - lVal_13)) goto LAB_18032735a;
        uVal_19 = local_138._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
    if (0xf < (uint64_t)local_118._8_8_) {
      uVal_19 = local_118._8_8_ + 1;
      lVal_13 = local_128._0_8_;
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)(local_128._0_8_ + -8);
        if (0x1f < (uint64_t)((local_128._0_8_ + -8) - lVal_13)) goto LAB_18032735a;
        uVal_19 = local_118._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
    uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_19) {
      uVal_11 = uVal_19 + 1;
      ptr4_U64_15 = local_a8;
      if (0xfff < uVal_11) {
        ptr4_U64_15 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_11 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_11);
    }
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_11 = uVal_19 + 1;
      ptr4_U64_15 = local_f8;
      if (0xfff < uVal_11) {
        ptr4_U64_15 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_11 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_11);
    }
    local_250 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_250 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_288);
    }
    uStack_98 = _UNK_1806c6d9d;
    uStack_96 = (uint8_t)_UNK_1806c6d9f;
    uStack_95 = (uint16_t)((uint)_UNK_1806c6d9f >> 8);
    uStack_93 = (uint8_t)((uint)_UNK_1806c6d9f >> 0x18);
    uStack_92 = (uint8_t)_UNK_1806c6da3;
    uStack_91 = (uint8_t)((uint)_UNK_1806c6da3 >> 8);
    uStack_90 = (uint16_t)((uint)_UNK_1806c6da3 >> 0x10);
    uStack_8e = _UNK_1806c6da7;
    local_a8 = _DAT_1806c6d8d;
    uStack_a0 = (undefined3)_UNK_1806c6d95;
    uStack_9d = (uint16_t)((uint6)_UNK_1806c6d95 >> 0x18);
    uStack_9b = (uint8_t)((uint6)_UNK_1806c6d95 >> 0x28);
    uStack_9a = (uint8_t)_DAT_1806c6d9b;
    uStack_99 = (uint8_t)((ushort)_DAT_1806c6d9b >> 8);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf2ac) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf2ac) = 1;
      func_0x18008fa60(lVal_13 + 0xf28d,&local_a8);
      func_0x180673140(&LAB_180367070);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf28d);
    func_0x18036fd60(fnPtr_1);
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen(fnPtr_1);
    if ((int64_t)sz_8 < 0) goto LAB_180327449;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_11 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_6a = 1;
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_17;
      }
      else {
        local_6a = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_17;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_17,fnPtr_1,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf2c0) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf2c0) = 1;
      *(uint8_t *)(lVal_13 + 0xf2be) = 1;
      *(uint64_t *)(lVal_13 + 0xf2b0) = 0x93e3f9e4bdfb26db;
      *(uint32_t *)(lVal_13 + 0xf2b8) = 0xbce02af8;
      *(uint16_t *)(lVal_13 + 0xf2bc) = 0x97ff;
      func_0x180673140(&LAB_1803670a0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0xf2b0);
    if (*(char *)(lVal_13 + 0xf2be) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xffc3978bc98f5399;
      *(uint *)(lVal_13 + 0xf2b8) = *(uint *)(lVal_13 + 0xf2b8) ^ 0xc98f5399;
      *(byte *)(lVal_13 + 0xf2bc) = *(byte *)(lVal_13 + 0xf2bc) ^ 0x8b;
      *(byte *)(lVal_13 + 0xf2bd) = *(byte *)(lVal_13 + 0xf2bd) ^ 0x97;
      *(uint8_t *)(lVal_13 + 0xf2be) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_93 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9d = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_8 = strlen((char *)pU64_2);
    if ((int64_t)sz_8 < 0) goto LAB_180327456;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_11 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_77 = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_a8 = ptr4_U64_16;
      }
      else {
        local_77 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_16;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint8_t)(sz_8 >> 0x10);
    uStack_95 = (uint16_t)(sz_8 >> 0x18);
    uStack_93 = (uint8_t)(sz_8 >> 0x28);
    uStack_92 = (uint8_t)(sz_8 >> 0x30);
    uStack_91 = (uint8_t)(sz_8 >> 0x38);
    uStack_90 = (uint16_t)uVal_19;
    uStack_8e = (uint32_t)(uVal_19 >> 0x10);
    uStack_8a = (uint16_t)(uVal_19 >> 0x30);
    func_0x1806aa960(ptr4_U64_16,pU64_2,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    ptr4_U64_16 = &local_a8;
    ptr4_U64_17 = &local_f8;
    func_0x1801d3a80(local_b0,ptr4_U64_16,ptr4_U64_17,local_100,uVal_9 & 0xffffffff00000000,local_288,
                  uVal_32);
    uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_f8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    local_210 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_210 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_248);
    }
    pU64_14 = local_b0 + 0x25;
    local_448 = *(uint32_t *)pU64_14;
    uStack_444 = *(uint32_t *)((int64_t)local_b0 + 300);
    uStack_440 = *(uint32_t *)(local_b0 + 0x26);
    uStack_43c = *(uint32_t *)((int64_t)local_b0 + 0x134);
    uStack_e8 = (uint16_t)_DAT_1806c6dbb;
    uStack_e6 = (uint16_t)((uint)_DAT_1806c6dbb >> 0x10);
    uStack_e4 = (uint16_t)_UNK_1806c6dbf;
    uStack_e2 = (uint16_t)((uint)_UNK_1806c6dbf >> 0x10);
    uStack_e0 = (uint16_t)_UNK_1806c6dc3;
    uStack_de = (uint16_t)((uint)_UNK_1806c6dc3 >> 0x10);
    uStack_dc = _UNK_1806c6dc7;
    local_f8 = _DAT_1806c6dab;
    uStack_f0 = (uint16_t)_UNK_1806c6db3;
    uStack_ee = (uint32_t)((uint64_t)_UNK_1806c6db3 >> 0x10);
    uStack_ea = (uint16_t)((uint64_t)_UNK_1806c6db3 >> 0x30);
    uStack_d8 = CONCAT22(uStack_d8._2_2_,0x8b95);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf2e4) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf2e4) = 1;
      func_0x1800f15f0(lVal_13 + 0xf2c1,&local_f8);
      func_0x180673140(&LAB_1803670d0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf2c1);
    func_0x18036fda0(fnPtr_1);
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_93 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9d = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_8 = strlen(fnPtr_1);
    if ((int64_t)sz_8 < 0) goto LAB_180327463;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_6b = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_a8 = ptr4_U64_16;
      }
      else {
        local_6b = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_16;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint8_t)(sz_8 >> 0x10);
    uStack_95 = (uint16_t)(sz_8 >> 0x18);
    uStack_93 = (uint8_t)(sz_8 >> 0x28);
    uStack_92 = (uint8_t)(sz_8 >> 0x30);
    uStack_91 = (uint8_t)(sz_8 >> 0x38);
    uStack_90 = (uint16_t)uVal_19;
    uStack_8e = (uint32_t)(uVal_19 >> 0x10);
    uStack_8a = (uint16_t)(uVal_19 >> 0x30);
    func_0x1806aa960(ptr4_U64_16,fnPtr_1,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf2f4) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf2f4) = 1;
      *(uint64_t *)(lVal_13 + 0xf2e8) = 0xeebae7c8ee7eeaa5;
      *(uint32_t *)(lVal_13 + 0xf2f0) = 0x11def89;
      func_0x180673140(&LAB_180367100);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0xf2e8);
    if (*(char *)(lVal_13 + 0xf2f3) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x9bd595af851d8be7;
      *(uint *)(lVal_13 + 0xf2f0) =
           (*(uint *)(lVal_13 + 0xf2f0) & 0xffff | (uint)*(byte *)(lVal_13 + 0xf2f2) << 0x10) ^
           SUB164(_DAT_1806b63d0,0);
    }
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen((char *)pU64_2);
    if ((int64_t)sz_8 < 0) goto LAB_180327470;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_78 = 1;
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_17;
      }
      else {
        local_78 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_17;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_17,pU64_2,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    ptr4_U64_16 = &local_f8;
    ptr4_U64_17 = &local_a8;
    func_0x1801cd600(local_b0,ptr4_U64_16,ptr4_U64_17,pU64_14,&local_448,local_248,uVal_32);
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_f8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    local_1d0 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_1d0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_208);
    }
    pU64_14 = local_b0 + 0x27;
    local_438 = *(uint32_t *)pU64_14;
    uStack_434 = *(uint32_t *)((int64_t)local_b0 + 0x13c);
    uStack_430 = *(uint32_t *)(local_b0 + 0x28);
    uStack_42c = *(uint32_t *)((int64_t)local_b0 + 0x144);
    local_a8 = _DAT_1806c6dcd;
    uStack_a0 = (undefined3)_UNK_1806c6dd5;
    uStack_9d = (uint16_t)((uint64_t)_UNK_1806c6dd5 >> 0x18);
    uStack_9b = 0xaf;
    uStack_9a = 0xc3;
    uStack_99 = 0x5a;
    uStack_98 = 0x3f1c;
    uStack_96 = 0xfc;
    uStack_95 = 0x9bc9;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf30c) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf30c) = 1;
      func_0x18007cd50(lVal_13 + 0xf2f5,&local_a8);
      func_0x180673140(&LAB_180367130);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf2f5);
    func_0x18036fdd0(fnPtr_1);
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen(fnPtr_1);
    if ((int64_t)sz_8 < 0) goto LAB_18032747d;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_6c = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_16;
      }
      else {
        local_6c = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_16;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_16,fnPtr_1,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf31c) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf31c) = 1;
      *(uint8_t *)(lVal_13 + 0xf318) = 1;
      *(uint64_t *)(lVal_13 + 0xf310) = 0x3987a4e8c8f62123;
      func_0x180673140(&LAB_180367160);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0xf310);
    if (*(char *)(lVal_13 + 0xf318) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x39e3c19bbb935373;
      *(uint8_t *)(lVal_13 + 0xf318) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_93 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9d = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_8 = strlen((char *)pU64_2);
    if ((int64_t)sz_8 < 0) goto LAB_18032748a;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_79 = 1;
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_a8 = ptr4_U64_17;
      }
      else {
        local_79 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_17;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint8_t)(sz_8 >> 0x10);
    uStack_95 = (uint16_t)(sz_8 >> 0x18);
    uStack_93 = (uint8_t)(sz_8 >> 0x28);
    uStack_92 = (uint8_t)(sz_8 >> 0x30);
    uStack_91 = (uint8_t)(sz_8 >> 0x38);
    uStack_90 = (uint16_t)uVal_19;
    uStack_8e = (uint32_t)(uVal_19 >> 0x10);
    uStack_8a = (uint16_t)(uVal_19 >> 0x30);
    func_0x1806aa960(ptr4_U64_17,pU64_2,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    ptr4_U64_16 = &local_a8;
    ptr4_U64_17 = &local_f8;
    func_0x1801cd600(local_b0,ptr4_U64_16,ptr4_U64_17,pU64_14,&local_438,local_208,uVal_32);
    uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_f8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    local_190 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_190 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_1c8);
    }
    pU64_14 = local_b0 + 0x29;
    local_428 = *(uint32_t *)pU64_14;
    uStack_424 = *(uint32_t *)((int64_t)local_b0 + 0x14c);
    uStack_420 = *(uint32_t *)(local_b0 + 0x2a);
    uStack_41c = *(uint32_t *)((int64_t)local_b0 + 0x154);
    uStack_98 = (uint16_t)((uint)_UNK_1806c6df1 >> 8);
    uStack_96 = (uint8_t)((uint)_UNK_1806c6df1 >> 0x18);
    uStack_95 = (uint16_t)_UNK_1806c6df5;
    uStack_93 = (uint8_t)((uint)_UNK_1806c6df5 >> 0x10);
    uStack_92 = (uint8_t)((uint)_UNK_1806c6df5 >> 0x18);
    uStack_91 = (uint8_t)_UNK_1806c6df9;
    uStack_90 = (uint16_t)((uint)_UNK_1806c6df9 >> 8);
    local_a8 = _DAT_1806c6de2;
    uStack_a0 = _UNK_1806c6dea;
    uStack_9d = (uint16_t)_DAT_1806c6ded;
    uStack_9b = (uint8_t)((uint)_DAT_1806c6ded >> 0x10);
    uStack_9a = (uint8_t)((uint)_DAT_1806c6ded >> 0x18);
    uStack_99 = UNK_1806c6df1;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf33c) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf33c) = 1;
      func_0x18007c9b0(lVal_13 + 0xf31d,&local_a8);
      func_0x180673140(&LAB_180367180);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf31d);
    func_0x18036fe00(fnPtr_1);
    uStack_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen(fnPtr_1);
    if ((int64_t)sz_8 < 0) goto LAB_180327497;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_6e = 1;
        ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_f8 = ptr4_U64_17;
      }
      else {
        local_6e = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_17[-1] = ptr3_U64_10;
        local_f8 = ptr4_U64_17;
      }
    }
    uStack_e8 = (uint16_t)sz_8;
    uStack_e6 = (uint16_t)(sz_8 >> 0x10);
    uStack_e4 = (uint16_t)(sz_8 >> 0x20);
    uStack_e2 = (uint16_t)(sz_8 >> 0x30);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint32_t)(uVal_19 >> 0x20);
    func_0x1806aa960(ptr4_U64_17,fnPtr_1,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
    local_128._8_8_ = _UNK_1806c6e05;
    local_128._0_8_ = _DAT_1806c6dfd;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf350) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf350) = 1;
      func_0x18007d150(lVal_13 + 0xf33d,local_128);
      func_0x180673140(&LAB_1803671b0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_13 + 0xf33d);
    if (*(char *)(lVal_13 + 0xf34d) == '\x01') {
      uVal_21 = *(uint *)(lVal_13 + 0xf341) ^ _UNK_1806b6894;
      uVal_23 = *(uint *)(lVal_13 + 0xf345) ^ _UNK_1806b6898;
      uVal_26 = *(uint *)(lVal_13 + 0xf349) ^ _UNK_1806b689c;
      *pU64_3 = *pU64_3 ^ _DAT_1806b6890;
      *(uint *)(lVal_13 + 0xf341) = uVal_21;
      *(uint *)(lVal_13 + 0xf345) = uVal_23;
      *(uint *)(lVal_13 + 0xf349) = uVal_26;
      *(uint8_t *)(lVal_13 + 0xf34d) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_93 = 0;
    uStack_92 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9d = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    sz_8 = strlen((char *)pU64_3);
    if ((int64_t)sz_8 < 0) goto LAB_1803274a4;
    uVal_19 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_9) {
        uVal_19 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_6d = 1;
        ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
        local_a8 = ptr4_U64_16;
      }
      else {
        local_6d = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
        ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_16[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_16;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint8_t)(sz_8 >> 0x10);
    uStack_95 = (uint16_t)(sz_8 >> 0x18);
    uStack_93 = (uint8_t)(sz_8 >> 0x28);
    uStack_92 = (uint8_t)(sz_8 >> 0x30);
    uStack_91 = (uint8_t)(sz_8 >> 0x38);
    uStack_90 = (uint16_t)uVal_19;
    uStack_8e = (uint32_t)(uVal_19 >> 0x10);
    uStack_8a = (uint16_t)(uVal_19 >> 0x30);
    func_0x1806aa960(ptr4_U64_16,pU64_3,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    ptr4_U64_16 = &local_a8;
    ptr4_U64_17 = &local_f8;
    func_0x1801cd600(local_b0,ptr4_U64_16,ptr4_U64_17,pU64_14,&local_428,local_1c8,uVal_32);
    uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    if (0xf < uVal_19) {
      uVal_9 = uVal_19 + 1;
      ptr4_U64_15 = local_f8;
      if (0xfff < uVal_9) {
        ptr4_U64_15 = (uint64_t ****)local_f8[-1];
        if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_15)))
        goto LAB_18032735a;
        uVal_9 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
    }
    local_150 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_150 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_188);
    }
    pU64_14 = local_b0 + 0x2b;
    local_418 = *(uint32_t *)pU64_14;
    uStack_414 = *(uint32_t *)((int64_t)local_b0 + 0x15c);
    uStack_410 = *(uint32_t *)(local_b0 + 0x2c);
    uStack_40c = *(uint32_t *)((int64_t)local_b0 + 0x164);
    local_a8 = _DAT_1806c6e0d;
    uStack_a0 = (undefined3)_UNK_1806c6e15;
    uStack_9d = (uint16_t)((uint64_t)_UNK_1806c6e15 >> 0x18);
    uStack_9b = (uint8_t)((uint64_t)_UNK_1806c6e15 >> 0x28);
    uStack_9a = (uint8_t)((uint64_t)_UNK_1806c6e15 >> 0x30);
    uStack_99 = 0xb7;
    uStack_98 = 0x22eb;
    uStack_96 = 0xde;
    uStack_95 = 0x4618;
    uStack_93 = 0x13;
    uStack_92 = 0x7f;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf36c) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xf36c) = 1;
      func_0x18007d3c0(lVal_13 + 0xf351,&local_a8);
      func_0x180673140(&LAB_1803671d0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf351);
    func_0x180217800(fnPtr_1);
    local_f8 = (uint64_t ****)0x0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ea = 0;
    sz_8 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_8) {
      uVal_19 = 0xf;
      if (0xf < sz_8) {
        uVal_9 = sz_8 | 0xf;
        uVal_19 = 0x16;
        if (0x16 < uVal_9) {
          uVal_19 = uVal_9;
        }
        if (uVal_9 < 0xfff) {
          local_6f = 1;
          ptr4_U64_17 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
          local_f8 = ptr4_U64_17;
        }
        else {
          local_6f = 1;
          ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
          ptr4_U64_17 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
          ptr4_U64_17[-1] = ptr3_U64_10;
          local_f8 = ptr4_U64_17;
        }
      }
      uStack_e8 = (uint16_t)sz_8;
      uStack_e6 = (uint16_t)(sz_8 >> 0x10);
      uStack_e4 = (uint16_t)(sz_8 >> 0x20);
      uStack_e2 = (uint16_t)(sz_8 >> 0x30);
      uStack_e0 = (uint16_t)uVal_19;
      uStack_de = (uint16_t)(uVal_19 >> 0x10);
      uStack_dc = (uint32_t)(uVal_19 >> 0x20);
      func_0x1806aa960(ptr4_U64_17,fnPtr_1,sz_8);
      *(uint8_t *)((int64_t)ptr4_U64_17 + sz_8) = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf380) == '\0') {
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_13 + 0xf380) = 1;
        *(uint8_t *)(lVal_13 + 0xf37e) = 1;
        *(uint64_t *)(lVal_13 + 0xf370) = 0xb50f574808c433ca;
        *(uint32_t *)(lVal_13 + 0xf378) = 0xede34fc;
        *(uint16_t *)(lVal_13 + 0xf37c) = 0x7747;
        func_0x180673140(&LAB_180367200);
      }
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint64_t *)(lVal_13 + 0xf370);
      if (*(char *)(lVal_13 + 0xf37e) == '\x01') {
        *pU64_2 = *pU64_2 ^ 0xc77f77236bad4799;
        *(uint *)(lVal_13 + 0xf378) = *(uint *)(lVal_13 + 0xf378) ^ 0x6bad4799;
        *(byte *)(lVal_13 + 0xf37c) = *(byte *)(lVal_13 + 0xf37c) ^ 0x23;
        *(byte *)(lVal_13 + 0xf37d) = *(byte *)(lVal_13 + 0xf37d) ^ 0x77;
        *(uint8_t *)(lVal_13 + 0xf37e) = 0;
      }
      local_a8 = (uint64_t ****)0x0;
      uStack_a0 = 0;
      uStack_9d = 0;
      uStack_9b = 0;
      uStack_9a = 0;
      uStack_99 = 0;
      sz_8 = strlen((char *)pU64_2);
      if (-1 < (int64_t)sz_8) {
        uVal_19 = 0xf;
        if (0xf < sz_8) {
          uVal_9 = sz_8 | 0xf;
          uVal_19 = 0x16;
          if (0x16 < uVal_9) {
            uVal_19 = uVal_9;
          }
          if (uVal_9 < 0xfff) {
            local_7a = 1;
            ptr4_U64_16 = (uint64_t ****)func_0x180672de0(uVal_19 + 1);
            local_a8 = ptr4_U64_16;
          }
          else {
            local_7a = 1;
            ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_19 + 0x28);
            ptr4_U64_16 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
            ptr4_U64_16[-1] = ptr3_U64_10;
            local_a8 = ptr4_U64_16;
          }
        }
        uStack_98 = (uint16_t)sz_8;
        uStack_96 = (uint8_t)(sz_8 >> 0x10);
        uStack_95 = (uint16_t)(sz_8 >> 0x18);
        uStack_93 = (uint8_t)(sz_8 >> 0x28);
        uStack_92 = (uint8_t)(sz_8 >> 0x30);
        uStack_91 = (uint8_t)(sz_8 >> 0x38);
        uStack_90 = (uint16_t)uVal_19;
        uStack_8e = (uint32_t)(uVal_19 >> 0x10);
        uStack_8a = (uint16_t)(uVal_19 >> 0x30);
        func_0x1806aa960(ptr4_U64_16,pU64_2,sz_8);
        *(uint8_t *)((int64_t)ptr4_U64_16 + sz_8) = 0;
        func_0x1801cd600(local_b0,&local_a8,&local_f8,pU64_14,&local_418,local_188,uVal_32 & 0xffffff00)
        ;
        uVal_19 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
        if (0xf < uVal_19) {
          uVal_9 = uVal_19 + 1;
          ptr4_U64_16 = local_a8;
          if (0xfff < uVal_9) {
            ptr4_U64_16 = (uint64_t ****)local_a8[-1];
            if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_16)))
            goto LAB_18032735a;
            uVal_9 = uVal_19 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_16,uVal_9);
        }
        uVal_19 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
        if (0xf < uVal_19) {
          uVal_9 = uVal_19 + 1;
          ptr4_U64_16 = local_f8;
          if (0xfff < uVal_9) {
            ptr4_U64_16 = (uint64_t ****)local_f8[-1];
            if (0x1f < (uint64_t)((int64_t)local_f8 + (-8 - (int64_t)ptr4_U64_16))) {
LAB_18032735a:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_9 = uVal_19 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_16,uVal_9);
        }
        return local_b0;
      }
      goto LAB_1803274be;
    }
  }
  local_6f = 1;
  func_0x18007ba70();
LAB_1803274be:
  local_7a = 1;
  func_0x18007ba70();
  fnPtr_6 = (func_ptr_t )swi(3);
  pU64_14 = (uint64_t *)(*fnPtr_6)();
  return pU64_14;
}

// Unwind@1803274d0
void Unwind_1803274d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x158);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x120));
    *(uint64_t *)(param_2 + 0x158) = 0;
  }
  return;
}

// Unwind@180327540
void Unwind_180327540(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf0d0) = 0;
  *(uint8_t *)(param_2 + 0x4c7) = 1;
  return;
}

// Unwind@1803275a0
void Unwind_1803275a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x198);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x160));
    *(uint64_t *)(param_2 + 0x198) = 0;
  }
  return;
}

// Unwind@180327610
void Unwind_180327610(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf0f8) = 0;
  *(uint8_t *)(param_2 + 0x4c6) = 1;
  return;
}

// Unwind@180327670
void Unwind_180327670(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1d8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1a0));
    *(uint64_t *)(param_2 + 0x1d8) = 0;
  }
  return;
}

// Unwind@1803276e0
void Unwind_1803276e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf148) = 0;
  *(uint8_t *)(param_2 + 0x4c4) = 1;
  return;
}

// Unwind@180327740
void Unwind_180327740(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x218);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1e0));
    *(uint64_t *)(param_2 + 0x218) = 0;
  }
  return;
}

// Unwind@1803277b0
void Unwind_1803277b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf174) = 0;
  *(uint8_t *)(param_2 + 0x4c3) = 1;
  return;
}

// Unwind@180327810
void Unwind_180327810(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 600);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x220));
    *(uint64_t *)(param_2 + 600) = 0;
  }
  return;
}

// Unwind@180327880
void Unwind_180327880(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf1c0) = 0;
  *(uint8_t *)(param_2 + 0x4c2) = 1;
  return;
}

// Unwind@1803278e0
void Unwind_1803278e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x298);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x260));
    *(uint64_t *)(param_2 + 0x298) = 0;
  }
  return;
}

// Unwind@180327950
void Unwind_180327950(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf200) = 0;
  *(uint8_t *)(param_2 + 0x4c1) = 1;
  return;
}

// Unwind@1803279b0
void Unwind_1803279b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2d8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2a0));
    *(uint64_t *)(param_2 + 0x2d8) = 0;
  }
  return;
}

// Unwind@180327a20
void Unwind_180327a20(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf2ac) = 0;
  *(uint8_t *)(param_2 + 0x4be) = 1;
  return;
}

// Unwind@180327a80
void Unwind_180327a80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x318);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2e0));
    *(uint64_t *)(param_2 + 0x318) = 0;
  }
  return;
}

// Unwind@180327af0
void Unwind_180327af0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf2e4) = 0;
  *(uint8_t *)(param_2 + 0x4bd) = 1;
  return;
}

// Unwind@180327b50
void Unwind_180327b50(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x358);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 800));
    *(uint64_t *)(param_2 + 0x358) = 0;
  }
  return;
}

// Unwind@180327bc0
void Unwind_180327bc0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf30c) = 0;
  *(uint8_t *)(param_2 + 0x4bc) = 1;
  return;
}

// Unwind@180327c20
void Unwind_180327c20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x398);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x360));
    *(uint64_t *)(param_2 + 0x398) = 0;
  }
  return;
}

// Unwind@180327c90
void Unwind_180327c90(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf33c) = 0;
  *(uint8_t *)(param_2 + 0x4ba) = 1;
  return;
}

// Unwind@180327cf0
void Unwind_180327cf0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x3d8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x3a0));
    *(uint64_t *)(param_2 + 0x3d8) = 0;
  }
  return;
}

// Unwind@180327d60
void Unwind_180327d60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf36c) = 0;
  *(uint8_t *)(param_2 + 0x4b9) = 1;
  return;
}

// Unwind@180327dc0
void Unwind_180327dc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x430);
  return;
}

// Unwind@180327e10
void Unwind_180327e10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4b8) = 0;
  return;
}

// Unwind@180327e60
void Unwind_180327e60(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4b8);
  func_0x180001e70(param_2 + 0x480);
  *(uint8_t *)(param_2 + 0x4c7) = uVal_1;
  return;
}

// Unwind@180327eb0
void Unwind_180327eb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4c7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x158), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x120));
    *(uint64_t *)(param_2 + 0x158) = 0;
  }
  return;
}

// Unwind@180327f20
void Unwind_180327f20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x480);
  *(uint8_t *)(param_2 + 0x4b7) = 0;
  return;
}

// Unwind@180327f70
void Unwind_180327f70(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4b7);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4c6) = uVal_1;
  return;
}

// Unwind@180327fc0
void Unwind_180327fc0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4c6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x198), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x160));
    *(uint64_t *)(param_2 + 0x198) = 0;
  }
  return;
}

// Unwind@180328030
void Unwind_180328030(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x480);
  *(uint8_t *)(param_2 + 0x4b6) = 0;
  return;
}

// Unwind@180328080
void Unwind_180328080(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4b6);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4c5) = uVal_1;
  return;
}

// Unwind@1803280d0
void Unwind_1803280d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4c5) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@180328140
void Unwind_180328140(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x480);
  *(uint8_t *)(param_2 + 0x4b5) = 0;
  return;
}

// Unwind@180328190
void Unwind_180328190(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4b5);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4c4) = uVal_1;
  return;
}

// Unwind@1803281e0
void Unwind_1803281e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4c4) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1d8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1a0));
    *(uint64_t *)(param_2 + 0x1d8) = 0;
  }
  return;
}

// Unwind@180328250
void Unwind_180328250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x480);
  *(uint8_t *)(param_2 + 0x4b4) = 0;
  return;
}

// Unwind@1803282a0
void Unwind_1803282a0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4b4);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4c3) = uVal_1;
  return;
}

// Unwind@1803282f0
void Unwind_1803282f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4c3) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x218), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1e0));
    *(uint64_t *)(param_2 + 0x218) = 0;
  }
  return;
}

// Unwind@180328360
void Unwind_180328360(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4b3) = 0;
  return;
}

// Unwind@1803283b0
void Unwind_1803283b0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4b3);
  func_0x180001e70(param_2 + 0x480);
  *(uint8_t *)(param_2 + 0x4c2) = uVal_1;
  return;
}

// Unwind@180328400
void Unwind_180328400(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4c2) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 600), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x220));
    *(uint64_t *)(param_2 + 600) = 0;
  }
  return;
}

// Unwind@180328470
void Unwind_180328470(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4b2) = 0;
  return;
}

// Unwind@1803284c0
void Unwind_1803284c0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4b2);
  func_0x180001e70(param_2 + 0x480);
  *(uint8_t *)(param_2 + 0x4c1) = uVal_1;
  return;
}

// Unwind@180328510
void Unwind_180328510(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4c1) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x298), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x260));
    *(uint64_t *)(param_2 + 0x298) = 0;
  }
  return;
}

// Unwind@180328580
void Unwind_180328580(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x480);
  *(uint8_t *)(param_2 + 0x4c0) = 0;
  return;
}

// Unwind@1803285d0
void Unwind_1803285d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4c0);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4bf) = uVal_1;
  return;
}

// Unwind@180328620
void Unwind_180328620(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4bf) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@180328690
void Unwind_180328690(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3e0);
  return;
}

// Unwind@1803286e0
void Unwind_1803286e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x400);
  return;
}

// Unwind@180328730
void Unwind_180328730(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x480);
  return;
}

// Unwind@180328780
void Unwind_180328780(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x430);
  return;
}

// Unwind@1803287d0
void Unwind_1803287d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x480);
  *(uint8_t *)(param_2 + 0x4b1) = 0;
  return;
}

// Unwind@180328820
void Unwind_180328820(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4b1);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4be) = uVal_1;
  return;
}

// Unwind@180328870
void Unwind_180328870(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4be) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2d8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2a0));
    *(uint64_t *)(param_2 + 0x2d8) = 0;
  }
  return;
}

// Unwind@1803288e0
void Unwind_1803288e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4b0) = 0;
  return;
}

// Unwind@180328930
void Unwind_180328930(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4b0);
  func_0x180001e70(param_2 + 0x480);
  *(uint8_t *)(param_2 + 0x4bd) = uVal_1;
  return;
}

// Unwind@180328980
void Unwind_180328980(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4bd) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x318), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2e0));
    *(uint64_t *)(param_2 + 0x318) = 0;
  }
  return;
}

// Unwind@1803289f0
void Unwind_1803289f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x480);
  *(uint8_t *)(param_2 + 0x4af) = 0;
  return;
}

// Unwind@180328a40
void Unwind_180328a40(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4af);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4bc) = uVal_1;
  return;
}

// Unwind@180328a90
void Unwind_180328a90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4bc) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x358), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 800));
    *(uint64_t *)(param_2 + 0x358) = 0;
  }
  return;
}

// Unwind@180328b00
void Unwind_180328b00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x480);
  *(uint8_t *)(param_2 + 0x4bb) = 0;
  return;
}

// Unwind@180328b50
void Unwind_180328b50(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4bb);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4ba) = uVal_1;
  return;
}

// Unwind@180328ba0
void Unwind_180328ba0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4ba) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x398), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x360));
    *(uint64_t *)(param_2 + 0x398) = 0;
  }
  return;
}

// Unwind@180328c10
void Unwind_180328c10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x480);
  *(uint8_t *)(param_2 + 0x4ae) = 0;
  return;
}

// Unwind@180328c60
void Unwind_180328c60(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x4ae);
  func_0x180001e70(param_2 + 0x430);
  *(uint8_t *)(param_2 + 0x4b9) = uVal_1;
  return;
}

// Unwind@180328cb0
void Unwind_180328cb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x4b9) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x3d8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x3a0));
    *(uint64_t *)(param_2 + 0x3d8) = 0;
  }
  return;
}

// Unwind@180328d20
void Unwind_180328d20(uint64_t param_1,int64_t param_2)
{
  func_0x1800822d0(*(uint64_t *)(param_2 + 0x428));
  func_0x18018ce50(*(uint64_t *)(param_2 + 0x478));
  return;
}

// Unwind@180328d70
void Unwind_180328d70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf0ac) = 0;
  return;
}

// Unwind@180328dd0
void Unwind_180328dd0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf124) = 0;
  *(uint8_t *)(param_2 + 0x4c5) = 1;
  return;
}

// Unwind@180328e30
void Unwind_180328e30(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 62000) = 0;
  *(uint8_t *)(param_2 + 0x4bf) = 1;
  return;
}

// Unwind@180328e90
void Unwind_180328e90(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf244) = 0;
  *(uint8_t *)(param_2 + 0x4c0) = 1;
  return;
}

// Unwind@180328ef0
void Unwind_180328ef0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf28c) = 0;
  return;
}

// Unwind@180328f50
void Unwind_180328f50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf350) = 0;
  *(uint8_t *)(param_2 + 0x4bb) = 1;
  return;
}

// Unwind@180329270
void Unwind_180329270(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf3ac) = 0;
  return;
}

// Unwind@1803294f0
void Unwind_1803294f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@180329520
void Unwind_180329520(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf3c0) = 0;
  return;
}

// func_0x180329560
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180329560(int64_t param_1,uint8_t (*param_2)[16],float *param_3,float *param_4, char param_5)
{
  uint8_t auArr_1 [16];
  float fVal_3;
  uint8_t auArr_2 [16];
  float fVal_4;
  uint8_t auArr_5 [16];
  float fVal_6;
  float fVal_7;
  float fVal_8;
  
  if (*(char *)(param_1 + 0x100) != '\x01') {
    if (param_5 != '\0') {
      param_4 = param_3;
    }
    *(float *)*param_2 = *param_4;
LAB_18032962f:
    *(float *)(*param_2 + 4) = param_4[1];
    *(float *)(*param_2 + 8) = param_4[2];
    *(float *)(*param_2 + 0xc) = param_4[3];
    return;
  }
  fVal_3 = *(float *)*param_2;
  if (param_5 == '\0') {
    fVal_4 = *param_4;
    if (DAT_1806b2674 <= (float)((uint)(fVal_3 - fVal_4) & _DAT_1806b55f0)) {
      fVal_7 = param_4[1];
      fVal_6 = *(float *)(*param_2 + 4);
    }
    else {
      fVal_6 = *(float *)(*param_2 + 4);
      fVal_7 = param_4[1];
      if ((((float)((uint)(fVal_6 - fVal_7) & _DAT_1806b55f0) < DAT_1806b2674) &&
          ((float)((uint)(*(float *)(*param_2 + 8) - param_4[2]) & _DAT_1806b55f0) < DAT_1806b2674))
         && ((float)((uint)(*(float *)(*param_2 + 0xc) - param_4[3]) & _DAT_1806b55f0) <
             DAT_1806b2674)) {
        *(float *)*param_2 = fVal_4;
        goto LAB_18032962f;
      }
    }
    fVal_8 = *(float *)(param_1 + 0x104);
    auArr_5 = insertps(ZEXT416((uint)fVal_4),ZEXT416((uint)fVal_7),0x10);
    auArr_5._8_8_ = *(uint64_t *)(param_4 + 2);
  }
  else {
    fVal_4 = *param_3;
    if (DAT_1806b2674 <= (float)((uint)(fVal_3 - fVal_4) & _DAT_1806b55f0)) {
      fVal_7 = param_3[1];
      fVal_6 = *(float *)(*param_2 + 4);
    }
    else {
      fVal_6 = *(float *)(*param_2 + 4);
      fVal_7 = param_3[1];
      if ((((float)((uint)(fVal_6 - fVal_7) & _DAT_1806b55f0) < DAT_1806b2674) &&
          ((float)((uint)(*(float *)(*param_2 + 8) - param_3[2]) & _DAT_1806b55f0) < DAT_1806b2674))
         && ((float)((uint)(*(float *)(*param_2 + 0xc) - param_3[3]) & _DAT_1806b55f0) <
             DAT_1806b2674)) {
        *(float *)*param_2 = fVal_4;
        *(float *)(*param_2 + 4) = param_3[1];
        *(float *)(*param_2 + 8) = param_3[2];
        *(float *)(*param_2 + 0xc) = param_3[3];
        return;
      }
    }
    fVal_8 = *(float *)(param_1 + 0x104);
    auArr_5 = insertps(ZEXT416((uint)fVal_4),ZEXT416((uint)fVal_7),0x10);
    auArr_5._8_8_ = *(uint64_t *)(param_3 + 2);
  }
  fVal_8 = DAT_180840b20 * fVal_8;
  auArr_2 = insertps(ZEXT416((uint)fVal_3),ZEXT416((uint)fVal_6),0x10);
  fVal_3 = (float)*(uint64_t *)(*param_2 + 8);
  fVal_4 = (float)((uint64_t)*(uint64_t *)(*param_2 + 8) >> 0x20);
  auArr_1._4_4_ = fVal_8 * (auArr_5._4_4_ - auArr_2._4_4_) + auArr_2._4_4_;
  auArr_1._0_4_ = fVal_8 * (auArr_5._0_4_ - auArr_2._0_4_) + auArr_2._0_4_;
  auArr_1._8_4_ = fVal_8 * (auArr_5._8_4_ - fVal_3) + fVal_3;
  auArr_1._12_4_ = fVal_8 * (auArr_5._12_4_ - fVal_4) + fVal_4;
  *param_2 = auArr_1;
  return;
}

// func_0x180329730
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180329730(int64_t param_1,int param_2,uint64_t *param_3)
{
  uint32_t uVal_1;
  float fVal_2;
  float fVal_3;
  byte bFlag_4;
  func_ptr_t fnPtr_5;
  uint8_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint64_t uVal_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  uint8_t *pU64_16;
  uint *_Str;
  float fVal_17;
  float fVal_18;
  float fVal_19;
  float fVal_20;
  float fVal_21;
  uint64_t local_110;
  uint8_t local_108 [16];
  size_t local_f8;
  uint64_t uStack_f0;
  float local_e0;
  float local_dc;
  uint8_t local_d8 [8];
  uint64_t uStack_d0;
  size_t local_c8;
  uint64_t uStack_c0;
  uint64_t local_b0;
  
  local_b0 = 0xfffffffffffffffe;
  local_108 = (uint8_t  [16])0x0;
  local_f8 = 0;
  uStack_f0 = 0xf;
  if (*(int *)(param_1 + 0x120) == 3) {
    if (param_2 == 1) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf3d8) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0xf3d8) = 1;
        *(uint8_t *)(lVal_11 + 0xf3d4) = 1;
        *(uint16_t *)(lVal_11 + 0xf3d2) = 0x9163;
        func_0x180673140(&LAB_180367320);
      }
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (uint *)(lVal_11 + 0xf3d2);
      if (*(char *)(lVal_11 + 0xf3d4) == '\x01') {
        *(byte *)_Str = *(byte *)_Str ^ 0x31;
        *(byte *)(lVal_11 + 0xf3d3) = *(byte *)(lVal_11 + 0xf3d3) ^ 0x91;
        *(uint8_t *)(lVal_11 + 0xf3d4) = 0;
      }
      _local_d8 = (uint8_t  [16])0x0;
      sz_9 = strlen((char *)_Str);
      if (-1 < (int64_t)sz_9) {
        if (sz_9 < 0x10) goto LAB_180329bcf;
        uVal_10 = sz_9 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_10) {
          uVal_12 = uVal_10;
        }
        if (0xffe < uVal_10) {
          lVal_11 = func_0x180672de0(uVal_12 + 0x28);
          goto LAB_180329c05;
        }
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
        goto LAB_180329c60;
      }
LAB_18032a0b6:
      func_0x18007ba70();
LAB_18032a0bc:
      func_0x18007ba70();
LAB_18032a0c2:
      func_0x18007ba70();
LAB_18032a0c8:
      func_0x18007ba70();
LAB_18032a0ce:
      func_0x18007ba70();
      fnPtr_5 = (func_ptr_t )swi(3);
      (*fnPtr_5)();
      return;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf3e0) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0xf3e0) = 1;
      *(uint8_t *)(lVal_11 + 0xf3dc) = 1;
      *(uint16_t *)(lVal_11 + 0xf3da) = 0x917d;
      func_0x180673140(&LAB_180367340);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_11 + 0xf3da);
    if (*(char *)(lVal_11 + 0xf3dc) == '\x01') {
      *(byte *)_Str = *(byte *)_Str ^ 0x31;
      *(byte *)(lVal_11 + 0xf3db) = *(byte *)(lVal_11 + 0xf3db) ^ 0x91;
      *(uint8_t *)(lVal_11 + 0xf3dc) = 0;
    }
    _local_d8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)_Str);
    if ((int64_t)sz_9 < 0) goto LAB_18032a0c2;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_12 = 0x16;
      if (0x16 < uVal_10) {
        uVal_12 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_12 + 0x28);
LAB_180329c05:
        pU64_16 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_11;
      }
      goto LAB_180329c60;
    }
LAB_180329bcf:
    pU64_16 = local_d8;
    uVal_12 = 0xf;
  }
  else {
    if (*(int *)(param_1 + 0x120) == 2) {
      if (param_2 == 1) {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf3c8) == '\0') {
          lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_11 + 0xf3c8) = 1;
          *(uint32_t *)(lVal_11 + 0xf3c4) = 0x1bbc643;
          func_0x180673140(&LAB_1803672c0);
        }
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (uint *)(lVal_11 + 0xf3c4);
        if (*(char *)(lVal_11 + 0xf3c7) == '\x01') {
          *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf3c6) << 0x10) ^
                  SUB164(_DAT_1806c3870,0);
        }
        _local_d8 = (uint8_t  [16])0x0;
        sz_9 = strlen((char *)_Str);
        if ((int64_t)sz_9 < 0) {
          func_0x18007ba70();
          goto LAB_18032a0b6;
        }
        if (sz_9 < 0x10) goto LAB_180329bcf;
        uVal_10 = sz_9 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_10) {
          uVal_12 = uVal_10;
        }
        if (0xffe < uVal_10) {
          lVal_11 = func_0x180672de0(uVal_12 + 0x28);
          goto LAB_180329c05;
        }
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
      }
      else {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf3d0) == '\0') {
          lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_11 + 0xf3d0) = 1;
          *(uint32_t *)(lVal_11 + 0xf3cc) = 0x1bbc65d;
          func_0x180673140(&LAB_1803672f0);
        }
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (uint *)(lVal_11 + 0xf3cc);
        if (*(char *)(lVal_11 + 0xf3cf) == '\x01') {
          *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf3ce) << 0x10) ^
                  SUB164(_DAT_1806c3870,0);
        }
        _local_d8 = (uint8_t  [16])0x0;
        sz_9 = strlen((char *)_Str);
        if ((int64_t)sz_9 < 0) goto LAB_18032a0bc;
        if (sz_9 < 0x10) goto LAB_180329bcf;
        uVal_10 = sz_9 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_10) {
          uVal_12 = uVal_10;
        }
        if (0xffe < uVal_10) {
          lVal_11 = func_0x180672de0(uVal_12 + 0x28);
          goto LAB_180329c05;
        }
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
      }
    }
    else {
      if (param_2 == 1) {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf3e8) == '\0') {
          lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_11 + 0xf3e8) = 1;
          *(uint32_t *)(lVal_11 + 0xf3e4) = 0x1710c83;
          func_0x180673140(&LAB_180367360);
        }
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (uint *)(lVal_11 + 0xf3e4);
        if (*(char *)(lVal_11 + 0xf3e7) == '\x01') {
          *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf3e6) << 0x10) ^
                  SUB164(_DAT_1806c3880,0);
        }
        _local_d8 = (uint8_t  [16])0x0;
        sz_9 = strlen((char *)_Str);
        if (-1 < (int64_t)sz_9) {
          if (sz_9 < 0x10) goto LAB_180329bcf;
          uVal_10 = sz_9 | 0xf;
          uVal_12 = 0x16;
          if (0x16 < uVal_10) {
            uVal_12 = uVal_10;
          }
          if (0xffe < uVal_10) {
            lVal_11 = func_0x180672de0(uVal_12 + 0x28);
            goto LAB_180329c05;
          }
          pU64_16 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
          goto LAB_180329c60;
        }
        goto LAB_18032a0c8;
      }
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf3f0) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0xf3f0) = 1;
        *(uint32_t *)(lVal_11 + 0xf3ec) = 0x1710c9d;
        func_0x180673140(&LAB_180367390);
      }
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (uint *)(lVal_11 + 0xf3ec);
      if (*(char *)(lVal_11 + 0xf3ef) == '\x01') {
        *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf3ee) << 0x10) ^
                SUB164(_DAT_1806c3880,0);
      }
      _local_d8 = (uint8_t  [16])0x0;
      sz_9 = strlen((char *)_Str);
      if ((int64_t)sz_9 < 0) goto LAB_18032a0ce;
      if (sz_9 < 0x10) goto LAB_180329bcf;
      uVal_10 = sz_9 | 0xf;
      uVal_12 = 0x16;
      if (0x16 < uVal_10) {
        uVal_12 = uVal_10;
      }
      if (0xffe < uVal_10) {
        lVal_11 = func_0x180672de0(uVal_12 + 0x28);
        goto LAB_180329c05;
      }
      pU64_16 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
    }
LAB_180329c60:
    local_d8 = (uint8_t  [8])pU64_16;
  }
  local_c8 = sz_9;
  uStack_c0 = uVal_12;
  func_0x1806aa960(pU64_16,_Str,sz_9);
  pU64_16[sz_9] = 0;
  if (0xf < uStack_f0) {
    uVal_12 = uStack_f0 + 1;
    lVal_11 = local_108._0_8_;
    if (0xfff < uVal_12) {
      lVal_11 = *(int64_t *)(local_108._0_8_ + -8);
      if (0x1f < (uint64_t)((local_108._0_8_ + -8) - lVal_11)) goto LAB_18032a0ae;
      uVal_12 = uStack_f0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_12);
  }
  local_f8 = local_c8;
  uStack_f0 = uStack_c0;
  local_108 = _local_d8;
  if (param_2 == 1) {
    func_0x18045fd10(local_d8);
  }
  else {
    func_0x18045fd00(local_d8);
  }
  fVal_19 = *(float *)(param_1 + 0xf4);
  uVal_6 = func_0x18045fcc0(param_2 + 8);
  lVal_11 = param_1 + (int64_t)param_2 * 0x10 + 0x228;
  func_0x180329560(param_1,lVal_11,param_1 + 0x158,param_1 + 0x148,uVal_6);
  uVal_13 = func_0x1800cf950();
  func_0x180107830(uVal_13,2,0,0);
  fVal_20 = DAT_1806b67d0 * fVal_19;
  local_110 = CONCAT44(fVal_20 + (float)((uint64_t)*param_3 >> 0x20),fVal_20 + (float)*param_3);
  local_e0 = fVal_20;
  local_dc = fVal_20;
  func_0x1800d27b0(&local_110,&local_e0,param_1 + 0x128,*(uint32_t *)(param_1 + 0xf8));
  fVal_19 = fVal_19 * DAT_1806c3890;
  local_110 = CONCAT44((*(float *)((int64_t)param_3 + 4) + fVal_20) - (float)local_d8._4_4_ * fVal_19
                       ,(float)local_d8._0_4_ * fVal_19 + *(float *)param_3 + fVal_20);
  local_e0 = fVal_19;
  local_dc = fVal_19;
  func_0x1800d27b0(&local_110,&local_e0,lVal_11,*(uint32_t *)(param_1 + 0xf8));
  uVal_13 = func_0x1800cf970();
  uVal_14 = func_0x1800cf950();
  uVal_15 = func_0x1800cf960();
  func_0x18011b260(uVal_15,uVal_14,uVal_13);
  uVal_6 = *(uint8_t *)(param_1 + 0xd0);
  uVal_7 = func_0x18018ce30(param_1);
  uVal_1 = *(uint32_t *)(param_1 + 0xf4);
  bFlag_4 = *(byte *)(param_1 + 0xd1);
  fVal_2 = *(float *)param_3;
  fVal_21 = (float)local_d8._0_4_ * fVal_19;
  uVal_8 = func_0x18018ce30(param_1);
  fVal_17 = (float)func_0x1800cd3b0(local_108,*(uint32_t *)(param_1 + 0xf4),uVal_8);
  fVal_3 = *(float *)((int64_t)param_3 + 4);
  fVal_19 = fVal_19 * (float)local_d8._4_4_;
  func_0x18018ce30(param_1);
  fVal_18 = (float)func_0x1800cfa00();
  local_e0 = fVal_17 * DAT_1806b2860 + fVal_21 + fVal_2 + fVal_20;
  local_dc = fVal_18 * DAT_1806b2860 + ((fVal_20 + fVal_3) - fVal_19);
  func_0x1800d00e0(&local_e0,local_108,(uint64_t)bFlag_4 * 0x10 + param_1 + 0xd4,uVal_1,0x3f800000,uVal_7,
                uVal_6);
  if (0xf < uStack_f0) {
    uVal_12 = uStack_f0 + 1;
    lVal_11 = local_108._0_8_;
    if (0xfff < uVal_12) {
      lVal_11 = *(int64_t *)(local_108._0_8_ + -8);
      if (0x1f < (uint64_t)((local_108._0_8_ + -8) - lVal_11)) {
LAB_18032a0ae:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_12 = uStack_f0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_12);
  }
  return;
}

// Unwind@18032a0e0
void Unwind_18032a0e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x18032a170
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18032a170(int64_t param_1,int param_2,uint64_t *param_3)
{
  uint32_t uVal_1;
  byte bFlag_2;
  func_ptr_t fnPtr_3;
  uint8_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  size_t sz_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  uint64_t uVal_13;
  float *pFloat_14;
  byte *_Str;
  float fVal_15;
  float fVal_16;
  float fVal_17;
  float fVal_19;
  uint8_t auArr_18 [16];
  float fVal_20;
  float fVal_21;
  uint8_t auArr_22 [16];
  uint8_t auArr_23 [16];
  float fVal_24;
  uint8_t auArr_25 [16];
  uint8_t auArr_26 [16];
  float fVal_27;
  float fVal_28;
  uint8_t auArr_29 [16];
  float fVal_30;
  float fVal_31;
  float fVal_32;
  float fVal_33;
  float fVal_34;
  uint64_t local_150;
  uint8_t local_148 [8];
  uint32_t uStack_140;
  uint32_t uStack_13c;
  uint64_t local_138;
  uint64_t uStack_130;
  uint64_t local_128;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint32_t uStack_108;
  uint32_t uStack_104;
  uint64_t uStack_100;
  uint64_t local_f0;
  
  local_f0 = 0xfffffffffffffffe;
  _local_148 = ZEXT816(0);
  local_138 = 0;
  uStack_130 = 0xf;
  if (*(int *)(param_1 + 0x120) != 2) {
    if (param_2 == 1) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf400) == '\0') {
        lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_9 + 0xf400) = 1;
        *(uint8_t *)(lVal_9 + 0xf3fc) = 1;
        *(uint16_t *)(lVal_9 + 0xf3fa) = 0xbd49;
        func_0x180673140(&LAB_1803673e0);
      }
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (byte *)(lVal_9 + 0xf3fa);
      if (*(char *)(lVal_9 + 0xf3fc) == '\x01') {
        *_Str = *_Str ^ 0xb;
        *(byte *)(lVal_9 + 0xf3fb) = *(byte *)(lVal_9 + 0xf3fb) ^ 0xbd;
        *(uint8_t *)(lVal_9 + 0xf3fc) = 0;
      }
      local_118 = 0.0;
      fStack_114 = 0.0;
      fStack_110 = 0.0;
      fStack_10c = 0.0;
      sz_7 = strlen((char *)_Str);
      if ((int64_t)sz_7 < 0) {
LAB_18032ad0a:
        func_0x18007ba70();
LAB_18032ad10:
        func_0x18007ba70();
LAB_18032ad16:
        func_0x18007ba70();
        fnPtr_3 = (func_ptr_t )swi(3);
        (*fnPtr_3)();
        return;
      }
      if (sz_7 < 0x10) goto LAB_18032a47d;
      uVal_8 = sz_7 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_8) {
        uVal_10 = uVal_8;
      }
      if (0xffe < uVal_8) {
        lVal_9 = func_0x180672de0(uVal_10 + 0x28);
        goto LAB_18032a4af;
      }
      pFloat_14 = (float *)func_0x180672de0(uVal_10 + 1);
LAB_18032a4f2:
      local_118 = SUB84(pFloat_14,0);
      fStack_114 = (float)((uint64_t)pFloat_14 >> 0x20);
    }
    else {
      if (param_2 == 2) {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf408) == '\0') {
          lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_9 + 0xf408) = 1;
          *(uint8_t *)(lVal_9 + 0xf404) = 1;
          *(uint16_t *)(lVal_9 + 0xf402) = 0x4973;
          func_0x180673140(&LAB_180367400);
        }
        lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (byte *)(lVal_9 + 0xf402);
        if (*(char *)(lVal_9 + 0xf404) == '\x01') {
          *_Str = *_Str ^ 0x2b;
          *(byte *)(lVal_9 + 0xf403) = *(byte *)(lVal_9 + 0xf403) ^ 0x49;
          *(uint8_t *)(lVal_9 + 0xf404) = 0;
        }
        local_118 = 0.0;
        fStack_114 = 0.0;
        fStack_110 = 0.0;
        fStack_10c = 0.0;
        sz_7 = strlen((char *)_Str);
        if ((int64_t)sz_7 < 0) {
          func_0x18007ba70();
          goto LAB_18032ad0a;
        }
        if (sz_7 < 0x10) goto LAB_18032a47d;
        uVal_8 = sz_7 | 0xf;
        uVal_10 = 0x16;
        if (0x16 < uVal_8) {
          uVal_10 = uVal_8;
        }
        if (0xffe < uVal_8) {
          lVal_9 = func_0x180672de0(uVal_10 + 0x28);
          goto LAB_18032a4af;
        }
        pFloat_14 = (float *)func_0x180672de0(uVal_10 + 1);
        goto LAB_18032a4f2;
      }
      if (param_2 != 3) {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf3f8) == '\0') {
          lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_9 + 0xf3f8) = 1;
          *(uint8_t *)(lVal_9 + 0xf3f4) = 1;
          *(uint16_t *)(lVal_9 + 0xf3f2) = 0xf9da;
          func_0x180673140(&LAB_1803673c0);
        }
        lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (byte *)(lVal_9 + 0xf3f2);
        if (*(char *)(lVal_9 + 0xf3f4) == '\x01') {
          *_Str = *_Str ^ 0x9b;
          *(byte *)(lVal_9 + 0xf3f3) = *(byte *)(lVal_9 + 0xf3f3) ^ 0xf9;
          *(uint8_t *)(lVal_9 + 0xf3f4) = 0;
        }
        local_118 = 0.0;
        fStack_114 = 0.0;
        fStack_110 = 0.0;
        fStack_10c = 0.0;
        sz_7 = strlen((char *)_Str);
        if ((int64_t)sz_7 < 0) goto LAB_18032ad16;
        if (sz_7 < 0x10) goto LAB_18032a47d;
        uVal_8 = sz_7 | 0xf;
        uVal_10 = 0x16;
        if (0x16 < uVal_8) {
          uVal_10 = uVal_8;
        }
        if (0xffe < uVal_8) {
          lVal_9 = func_0x180672de0(uVal_10 + 0x28);
          goto LAB_18032a4af;
        }
        pFloat_14 = (float *)func_0x180672de0(uVal_10 + 1);
        goto LAB_18032a4f2;
      }
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf410) == '\0') {
        lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_9 + 0xf410) = 1;
        *(uint8_t *)(lVal_9 + 0xf40c) = 1;
        *(uint16_t *)(lVal_9 + 0xf40a) = 0xdbcc;
        func_0x180673140(&LAB_180367420);
      }
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (byte *)(lVal_9 + 0xf40a);
      if (*(char *)(lVal_9 + 0xf40c) == '\x01') {
        *_Str = *_Str ^ 0x95;
        *(byte *)(lVal_9 + 0xf40b) = *(byte *)(lVal_9 + 0xf40b) ^ 0xdb;
        *(uint8_t *)(lVal_9 + 0xf40c) = 0;
      }
      local_118 = 0.0;
      fStack_114 = 0.0;
      fStack_110 = 0.0;
      fStack_10c = 0.0;
      sz_7 = strlen((char *)_Str);
      if ((int64_t)sz_7 < 0) goto LAB_18032ad10;
      if (0xf < sz_7) {
        uVal_8 = sz_7 | 0xf;
        uVal_10 = 0x16;
        if (0x16 < uVal_8) {
          uVal_10 = uVal_8;
        }
        if (uVal_8 < 0xfff) {
          pFloat_14 = (float *)func_0x180672de0(uVal_10 + 1);
        }
        else {
          lVal_9 = func_0x180672de0(uVal_10 + 0x28);
LAB_18032a4af:
          pFloat_14 = (float *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pFloat_14 + -2) = lVal_9;
        }
        goto LAB_18032a4f2;
      }
LAB_18032a47d:
      uVal_10 = 0xf;
      pFloat_14 = &local_118;
    }
    uStack_108 = (uint32_t)sz_7;
    uStack_104 = (uint32_t)(sz_7 >> 0x20);
    uStack_100 = uVal_10;
    func_0x1806aa960(pFloat_14,_Str,sz_7);
    *(uint8_t *)((int64_t)pFloat_14 + sz_7) = 0;
    if (0xf < uStack_130) {
      uVal_10 = uStack_130 + 1;
      lVal_9 = (int64_t)local_148;
      if (0xfff < uVal_10) {
        lVal_9 = *(int64_t *)((int64_t)local_148 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_148 + -8) - lVal_9)) goto LAB_18032ad02;
        uVal_10 = uStack_130 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_10);
    }
    local_138 = CONCAT44(uStack_104,uStack_108);
    uStack_130 = uStack_100;
    local_148._4_4_ = fStack_114;
    local_148._0_4_ = local_118;
    uStack_140 = fStack_110;
    uStack_13c = fStack_10c;
  }
  fVal_27 = *(float *)(param_1 + 0xf4);
  uVal_4 = func_0x18045fcc0(param_2);
  lVal_9 = param_1 + (int64_t)param_2 * 0x10 + 0x1a8;
  func_0x180329560(param_1,lVal_9,param_1 + 0x138,param_1 + 0x128,uVal_4);
  uVal_11 = func_0x1800cf950();
  func_0x180107830(uVal_11,2,0,0);
  fVal_27 = fVal_27 * DAT_1806beca0;
  auArr_22._4_4_ = fVal_27;
  auArr_22._0_4_ = fVal_27;
  auArr_22._8_8_ = 0;
  local_128 = CONCAT44((float)((uint64_t)*param_3 >> 0x20) + fVal_27,(float)*param_3 + fVal_27);
  local_118 = fVal_27;
  fStack_114 = fVal_27;
  func_0x1800d27b0(&local_128,&local_118,lVal_9,*(uint32_t *)(param_1 + 0xf8));
  fVal_17 = _UNK_1806c394c;
  fVal_16 = _UNK_1806c3948;
  fVal_19 = _UNK_1806c3944;
  fVal_15 = _DAT_1806c3940;
  if (*(int *)(param_1 + 0x120) == 2) {
    switch(param_2) {
    case 0:
      local_118 = _DAT_1806c3940;
      fStack_114 = _UNK_1806c3944;
      fStack_110 = _UNK_1806c3948;
      fStack_10c = _UNK_1806c394c;
      fVal_20 = (float)*param_3 + fVal_27;
      fVal_21 = (float)((uint64_t)*param_3 >> 0x20) + fVal_27;
      local_128 = CONCAT44(DAT_1806b28a0._4_4_ * fVal_27 + fVal_21,
                           (float)DAT_1806b28a0 * fVal_27 + fVal_20);
      local_150 = CONCAT44(fVal_21 - DAT_1806aeae4 * fVal_27,fVal_20 - DAT_1806aeae4 * fVal_27);
      func_0x1800d0090(&local_150,&local_128,DAT_1806be344,&local_118);
      auArr_18._0_4_ = _DAT_1806af1a0 ^ (uint)fVal_27;
      auArr_18._4_4_ = _UNK_1806af1a4;
      auArr_18._8_4_ = _UNK_1806af1a8;
      auArr_18._12_4_ = _UNK_1806af1ac;
      local_118 = fVal_15;
      fStack_114 = fVal_19;
      fStack_110 = fVal_16;
      fStack_10c = fVal_17;
      fVal_15 = (float)*param_3 + fVal_27;
      fVal_19 = (float)((uint64_t)*param_3 >> 0x20) + fVal_27;
      auArr_22 = insertps(auArr_22,auArr_18,0x10);
      local_128 = CONCAT44(auArr_22._4_4_ * DAT_1806b28a0._4_4_ + fVal_19,
                           auArr_22._0_4_ * (float)DAT_1806b28a0 + fVal_15);
      auArr_22 = insertps(auArr_18,ZEXT416((uint)fVal_27),0x10);
      local_150 = CONCAT44(auArr_22._4_4_ * DAT_1806b28a0._4_4_ + fVal_19,
                           auArr_22._0_4_ * (float)DAT_1806b28a0 + fVal_15);
      func_0x1800d0090(&local_150,&local_128,DAT_1806be344,&local_118);
      break;
    case 1:
      local_118 = _DAT_1806c3920;
      fStack_114 = _UNK_1806c3924;
      fStack_110 = _UNK_1806c3928;
      fStack_10c = _UNK_1806c392c;
      local_128 = CONCAT44(DAT_1806b55d0 * fVal_27,DAT_1806b55d0 * fVal_27);
      local_150 = CONCAT44(fVal_27 + (float)((uint64_t)*param_3 >> 0x20),fVal_27 + (float)*param_3);
      func_0x1800d25d0(&local_150,&local_128,&local_118,DAT_1806c3930,0x3ecccccd);
      break;
    case 2:
      local_128 = CONCAT44(_UNK_1806c38d4,_DAT_1806c38d0);
      uStack_120 = _UNK_1806c38d8;
      uStack_11c = _UNK_1806c38dc;
      auArr_25._0_4_ = _DAT_1806af1a0 ^ (uint)fVal_27;
      auArr_25._4_4_ = _UNK_1806af1a4;
      auArr_25._8_4_ = _UNK_1806af1a8;
      auArr_25._12_4_ = _UNK_1806af1ac;
      fVal_15 = (float)*param_3 + fVal_27;
      fVal_19 = (float)((uint64_t)*param_3 >> 0x20) + fVal_27;
      auArr_22 = insertps(auArr_22,auArr_25,0x10);
      auArr_23._0_4_ = auArr_22._0_4_ * (float)DAT_1806b28a0 + fVal_15;
      auArr_23._4_4_ = auArr_22._4_4_ * DAT_1806b28a0._4_4_ + fVal_19;
      auArr_23._8_4_ = auArr_22._8_4_ * _UNK_1806b28a8 + 0.0;
      auArr_23._12_4_ = auArr_22._12_4_ * _UNK_1806b28ac + 0.0;
      auArr_22 = insertps(auArr_25,ZEXT416((uint)fVal_27),0x1c);
      auArr_26._0_4_ = auArr_22._0_4_ * (float)DAT_1806b28a0 + fVal_15;
      auArr_26._4_4_ = auArr_22._4_4_ * DAT_1806b28a0._4_4_ + fVal_19;
      auArr_26._8_4_ = auArr_22._8_4_ * _UNK_1806b28a8 + 0.0;
      auArr_26._12_4_ = auArr_22._12_4_ * _UNK_1806b28ac + 0.0;
      auArr_29._0_4_ = auArr_26._0_4_ + _DAT_1806c38e0;
      auArr_29._4_4_ = auArr_23._4_4_ + _UNK_1806c38e4;
      auArr_29._8_4_ = auArr_23._0_4_ + _UNK_1806c38e8;
      auArr_29._12_4_ = auArr_23._4_4_ + _UNK_1806c38ec;
      local_118 = auArr_29._0_4_;
      fStack_114 = auArr_29._4_4_;
      fStack_110 = auArr_29._8_4_;
      fStack_10c = auArr_29._12_4_;
      func_0x1800d2a00(&local_118,&local_128,DAT_1806b26b4);
      uVal_11 = extractps(auArr_23,1);
      fStack_114 = (float)uVal_11;
      fStack_110 = (float)DAT_1806c38f0 + auArr_26._0_4_;
      fStack_10c = (float)((uint64_t)DAT_1806c38f0 >> 0x20) + auArr_26._4_4_;
      local_118 = auArr_29._0_4_;
      func_0x1800d2a00(&local_118,&local_128,DAT_1806b26b4);
      local_118 = auArr_23._0_4_ + _DAT_1806c3900;
      fStack_114 = auArr_23._4_4_ + _UNK_1806c3904;
      uVal_11 = extractps(auArr_29,2);
      fStack_110 = (float)uVal_11;
      uVal_11 = extractps(auArr_26,1);
      fStack_10c = (float)uVal_11;
      uStack_108 = (uint32_t)((uint64_t)uVal_11 >> 0x20);
      func_0x1800d2a00(&local_118,&local_128,DAT_1806b26b4);
      auArr_22 = blendps(auArr_29,auArr_26,2);
      local_118 = auArr_22._0_4_ + _DAT_1806c3910;
      fStack_114 = auArr_22._4_4_ + _UNK_1806c3914;
      fStack_110 = auArr_22._8_4_ + _UNK_1806c3918;
      fStack_10c = auArr_22._4_4_ + _UNK_1806c391c;
      func_0x1800d2a00(&local_118,&local_128,DAT_1806b26b4);
      break;
    case 3:
      local_118 = _DAT_1806c38a0;
      fStack_114 = _UNK_1806c38a4;
      fStack_110 = _UNK_1806c38a8;
      fStack_10c = _UNK_1806c38ac;
      func_0x180108220(uVal_11,&local_118);
      fVal_15 = DAT_1806c38b0;
      fVal_21 = DAT_1806b28c0 * fVal_27;
      fVal_28 = *(float *)param_3 + fVal_27;
      fVal_24 = *(float *)((int64_t)param_3 + 4) + fVal_27;
      fVal_32 = fVal_21 * DAT_1806c38b0 + fVal_28;
      func_0x180107cc0(uVal_11,fVal_32,fVal_24 - fVal_21,0);
      fVal_19 = DAT_1806c38c0;
      fVal_16 = fVal_21 * DAT_1806c38bc + fVal_28;
      fVal_20 = fVal_21 * DAT_1806c38c0 + fVal_24;
      func_0x180107cc0(uVal_11,fVal_16,fVal_20,0);
      fVal_30 = DAT_1806be594 + fVal_21;
      fVal_31 = fVal_15 * fVal_30 + fVal_28;
      fVal_33 = fVal_24 - fVal_30;
      func_0x180107cc0(uVal_11,fVal_31,fVal_33,0);
      func_0x180107cc0(uVal_11,fVal_16,fVal_20,0);
      fVal_17 = DAT_1806c38bc * fVal_30 + fVal_28;
      fVal_34 = fVal_19 * fVal_30 + fVal_24;
      func_0x180107cc0(uVal_11,fVal_17,fVal_34,0);
      func_0x180107cc0(uVal_11,fVal_31,fVal_33,0);
      func_0x180107cc0(uVal_11,fVal_32,fVal_24 - fVal_21,0);
      func_0x180107cc0(uVal_11,fVal_31,fVal_33,0);
      fVal_19 = DAT_1806c38b8;
      fVal_15 = DAT_1806c38b4;
      fVal_32 = fVal_21 * DAT_1806c38b4 + fVal_28;
      fVal_21 = fVal_21 * DAT_1806c38b8 + fVal_24;
      func_0x180107cc0(uVal_11,fVal_32,fVal_21,0);
      func_0x180107cc0(uVal_11,fVal_31,fVal_33,0);
      fVal_28 = fVal_15 * fVal_30 + fVal_28;
      fVal_24 = fVal_19 * fVal_30 + fVal_24;
      func_0x180107cc0(uVal_11,fVal_28,fVal_24,0);
      func_0x180107cc0(uVal_11,fVal_32,fVal_21,0);
      func_0x180107cc0(uVal_11,fVal_16,fVal_20,0);
      func_0x180107cc0(uVal_11,fVal_32,fVal_21,0);
      func_0x180107cc0(uVal_11,fVal_17,fVal_34,0);
      func_0x180107cc0(uVal_11,fVal_32,fVal_21,0);
      func_0x180107cc0(uVal_11,fVal_28,fVal_24,0);
      func_0x180107cc0(uVal_11,fVal_17,fVal_34,0);
    }
  }
  uVal_11 = func_0x1800cf970();
  uVal_12 = func_0x1800cf950();
  uVal_13 = func_0x1800cf960();
  func_0x18011b260(uVal_13,uVal_12,uVal_11);
  if (*(int *)(param_1 + 0x120) != 2) {
    uVal_4 = *(uint8_t *)(param_1 + 0xd0);
    uVal_5 = func_0x18018ce30(param_1);
    uVal_1 = *(uint32_t *)(param_1 + 0xf4);
    bFlag_2 = *(byte *)(param_1 + 0xd1);
    fVal_15 = *(float *)param_3;
    uVal_6 = func_0x18018ce30(param_1);
    fVal_16 = (float)func_0x1800cd3b0(local_148,*(uint32_t *)(param_1 + 0xf4),uVal_6);
    fVal_19 = *(float *)((int64_t)param_3 + 4);
    func_0x18018ce30(param_1);
    fVal_17 = (float)func_0x1800cfa00();
    local_118 = fVal_15 + fVal_27 + fVal_16 * DAT_1806b2860;
    fStack_114 = fVal_27 + fVal_19 + fVal_17 * DAT_1806b2860;
    func_0x1800d00e0(&local_118,local_148,(uint64_t)bFlag_2 * 0x10 + param_1 + 0xd4,uVal_1,0x3f800000,
                  uVal_5,uVal_4);
  }
  if (0xf < uStack_130) {
    uVal_10 = uStack_130 + 1;
    lVal_9 = (int64_t)local_148;
    if (0xfff < uVal_10) {
      lVal_9 = *(int64_t *)((int64_t)local_148 + -8);
      if (0x1f < (uint64_t)(((int64_t)local_148 + -8) - lVal_9)) {
LAB_18032ad02:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_10 = uStack_130 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_9,uVal_10);
  }
  return;
}

// Unwind@18032ad20
void Unwind_18032ad20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// func_0x18032adf0
void func_0x18032adf0(int64_t param_1,float *param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  float fVal_8;
  float fVal_9;
  float fVal_10;
  uint8_t auStack_c8 [32];
  uint8_t local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  uint64_t local_90;
  
  local_90 = DAT_18083cf40 ^ (uint64_t)auStack_c8;
  fVal_9 = *(float *)(param_1 + 0xf4);
  lVal_1 = param_1 + 0x128;
  lVal_2 = param_1 + 0x138;
  local_a8 = func_0x18045fcc0(4);
  func_0x180329560(param_1,param_1 + 0x1e8,lVal_2,lVal_1);
  local_a8 = func_0x18045fcc0(5);
  func_0x180329560(param_1,param_1 + 0x1f8,lVal_2,lVal_1);
  local_a8 = func_0x18045fcc0(6);
  func_0x180329560(param_1,param_1 + 0x208,lVal_2,lVal_1);
  local_a8 = func_0x18045fcc0(7);
  func_0x180329560(param_1,param_1 + 0x218,lVal_2,lVal_1);
  fVal_10 = DAT_1806c3890 * fVal_9;
  fVal_9 = fVal_9 * DAT_1806b67b4;
  uVal_5 = func_0x1800cf950();
  func_0x180107830(uVal_5,2,0,0);
  uVal_4 = DAT_1806b26b4;
  fVal_8 = fVal_9 * DAT_1806aeae4;
  fVal_10 = fVal_10 * DAT_1806aeae4;
  local_9c = param_2[1];
  local_98 = fVal_10 + *param_2 + fVal_8;
  local_a0 = (*param_2 + fVal_8) - fVal_10;
  local_94 = (fVal_8 + local_9c) - fVal_10;
  func_0x1800d2a00(&local_a0,param_1 + 0x1e8,DAT_1806b26b4);
  func_0x180107cc0(uVal_5,(*param_2 + fVal_8) - fVal_10,(param_2[1] + fVal_8) - fVal_10,0);
  func_0x180107cc0(uVal_5,*param_2 + fVal_8,param_2[1] + fVal_8,0);
  func_0x180107cc0(uVal_5,*param_2 + fVal_8 + fVal_10,(param_2[1] + fVal_8) - fVal_10,0);
  local_9c = fVal_8 + param_2[1] + fVal_10;
  local_98 = fVal_10 + *param_2 + fVal_8;
  local_a0 = (*param_2 + fVal_8) - fVal_10;
  local_94 = param_2[1] + fVal_9;
  func_0x1800d2a00(&local_a0,param_1 + 0x1f8,uVal_4);
  func_0x180107cc0(uVal_5,(*param_2 + fVal_8) - fVal_10,param_2[1] + fVal_8 + fVal_10,0);
  func_0x180107cc0(uVal_5,*param_2 + fVal_8 + fVal_10,param_2[1] + fVal_8 + fVal_10,0);
  func_0x180107cc0(uVal_5,*param_2 + fVal_8,param_2[1] + fVal_8,0);
  local_a0 = *param_2;
  local_98 = (fVal_8 + local_a0) - fVal_10;
  local_94 = fVal_10 + param_2[1] + fVal_8;
  local_9c = (param_2[1] + fVal_8) - fVal_10;
  func_0x1800d2a00(&local_a0,param_1 + 0x208,uVal_4);
  func_0x180107cc0(uVal_5,(*param_2 + fVal_8) - fVal_10,(param_2[1] + fVal_8) - fVal_10,0);
  func_0x180107cc0(uVal_5,(*param_2 + fVal_8) - fVal_10,param_2[1] + fVal_8 + fVal_10,0);
  func_0x180107cc0(uVal_5,*param_2 + fVal_8,param_2[1] + fVal_8,0);
  local_a0 = fVal_8 + *param_2 + fVal_10;
  local_98 = fVal_9 + *param_2;
  local_94 = fVal_10 + param_2[1] + fVal_8;
  local_9c = (param_2[1] + fVal_8) - fVal_10;
  func_0x1800d2a00(&local_a0,param_1 + 0x218,uVal_4);
  func_0x180107cc0(uVal_5,*param_2 + fVal_8 + fVal_10,(param_2[1] + fVal_8) - fVal_10,0);
  func_0x180107cc0(uVal_5,*param_2 + fVal_8,param_2[1] + fVal_8,0);
  func_0x180107cc0(uVal_5,fVal_8 + *param_2 + fVal_10,param_2[1] + fVal_8 + fVal_10,0);
  uVal_5 = func_0x1800cf970();
  uVal_6 = func_0x1800cf950();
  uVal_7 = func_0x1800cf960();
  func_0x18011b260(uVal_7,uVal_6,uVal_5);
  if (DAT_18083cf40 == (local_90 ^ (uint64_t)auStack_c8)) {
    return;
  }
  func_0x180673080(local_90 ^ (uint64_t)auStack_c8);
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// func_0x18032b280
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18032b280(int64_t param_1,int param_2,float *param_3)
{
  uint32_t uVal_1;
  float fVal_2;
  byte bFlag_3;
  func_ptr_t fnPtr_4;
  float fVal_5;
  uint8_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint8_t *pU64_13;
  uint *_Str;
  float fVal_14;
  float fVal_15;
  float fVal_16;
  float fVal_17;
  float fVal_18;
  uint32_t uVal_19;
  uint8_t local_e8 [16];
  size_t local_d8;
  uint64_t uStack_d0;
  uint8_t local_c8 [8];
  uint64_t uStack_c0;
  size_t local_b8;
  uint64_t uStack_b0;
  uint64_t local_a0;
  
  local_a0 = 0xfffffffffffffffe;
  local_e8 = (uint8_t  [16])0x0;
  local_d8 = 0;
  uStack_d0 = 0xf;
  if (*(int *)(param_1 + 0x120) == 3) {
    if (param_2 == 1) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf428) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0xf428) = 1;
        *(uint8_t *)(lVal_11 + 0xf424) = 1;
        *(uint16_t *)(lVal_11 + 0xf422) = 0x771b;
        func_0x180673140(&LAB_1803674a0);
      }
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (uint *)(lVal_11 + 0xf422);
      if (*(char *)(lVal_11 + 0xf424) == '\x01') {
        *(byte *)_Str = *(byte *)_Str ^ 0x49;
        *(byte *)(lVal_11 + 0xf423) = *(byte *)(lVal_11 + 0xf423) ^ 0x77;
        *(uint8_t *)(lVal_11 + 0xf424) = 0;
      }
      _local_c8 = (uint8_t  [16])0x0;
      sz_9 = strlen((char *)_Str);
      if (-1 < (int64_t)sz_9) {
        if (sz_9 < 0x10) goto LAB_18032b71a;
        uVal_10 = sz_9 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_10) {
          uVal_12 = uVal_10;
        }
        if (0xffe < uVal_10) {
          lVal_11 = func_0x180672de0(uVal_12 + 0x28);
          goto LAB_18032b750;
        }
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
        goto LAB_18032b7ab;
      }
LAB_18032bb56:
      func_0x18007ba70();
LAB_18032bb5c:
      func_0x18007ba70();
LAB_18032bb62:
      func_0x18007ba70();
LAB_18032bb68:
      func_0x18007ba70();
LAB_18032bb6e:
      func_0x18007ba70();
      fnPtr_4 = (func_ptr_t )swi(3);
      (*fnPtr_4)();
      return;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf430) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0xf430) = 1;
      *(uint8_t *)(lVal_11 + 0xf42c) = 1;
      *(uint16_t *)(lVal_11 + 0xf42a) = 0x7705;
      func_0x180673140(&LAB_1803674c0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_11 + 0xf42a);
    if (*(char *)(lVal_11 + 0xf42c) == '\x01') {
      *(byte *)_Str = *(byte *)_Str ^ 0x49;
      *(byte *)(lVal_11 + 0xf42b) = *(byte *)(lVal_11 + 0xf42b) ^ 0x77;
      *(uint8_t *)(lVal_11 + 0xf42c) = 0;
    }
    _local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)_Str);
    if ((int64_t)sz_9 < 0) goto LAB_18032bb62;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_12 = 0x16;
      if (0x16 < uVal_10) {
        uVal_12 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_12 + 0x28);
LAB_18032b750:
        pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_11;
      }
      goto LAB_18032b7ab;
    }
LAB_18032b71a:
    pU64_13 = local_c8;
    uVal_12 = 0xf;
  }
  else {
    if (*(int *)(param_1 + 0x120) == 2) {
      if (param_2 == 1) {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf418) == '\0') {
          lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_11 + 0xf418) = 1;
          *(uint32_t *)(lVal_11 + 0xf414) = 0x1c762b1;
          func_0x180673140(&LAB_180367440);
        }
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (uint *)(lVal_11 + 0xf414);
        if (*(char *)(lVal_11 + 0xf417) == '\x01') {
          *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf416) << 0x10) ^
                  SUB164(_DAT_1806af260,0);
        }
        _local_c8 = (uint8_t  [16])0x0;
        sz_9 = strlen((char *)_Str);
        if ((int64_t)sz_9 < 0) {
          func_0x18007ba70();
          goto LAB_18032bb56;
        }
        if (sz_9 < 0x10) goto LAB_18032b71a;
        uVal_10 = sz_9 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_10) {
          uVal_12 = uVal_10;
        }
        if (0xffe < uVal_10) {
          lVal_11 = func_0x180672de0(uVal_12 + 0x28);
          goto LAB_18032b750;
        }
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
      }
      else {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf420) == '\0') {
          lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_11 + 0xf420) = 1;
          *(uint32_t *)(lVal_11 + 0xf41c) = 0x1c762af;
          func_0x180673140(&LAB_180367470);
        }
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (uint *)(lVal_11 + 0xf41c);
        if (*(char *)(lVal_11 + 0xf41f) == '\x01') {
          *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf41e) << 0x10) ^
                  SUB164(_DAT_1806af260,0);
        }
        _local_c8 = (uint8_t  [16])0x0;
        sz_9 = strlen((char *)_Str);
        if ((int64_t)sz_9 < 0) goto LAB_18032bb5c;
        if (sz_9 < 0x10) goto LAB_18032b71a;
        uVal_10 = sz_9 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_10) {
          uVal_12 = uVal_10;
        }
        if (0xffe < uVal_10) {
          lVal_11 = func_0x180672de0(uVal_12 + 0x28);
          goto LAB_18032b750;
        }
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
      }
    }
    else {
      if (param_2 == 1) {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf438) == '\0') {
          lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_11 + 0xf438) = 1;
          *(uint32_t *)(lVal_11 + 0xf434) = 0x101caeb;
          func_0x180673140(&LAB_1803674e0);
        }
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (uint *)(lVal_11 + 0xf434);
        if (*(char *)(lVal_11 + 0xf437) == '\x01') {
          *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf436) << 0x10) ^
                  SUB164(_DAT_1806bea80,0);
        }
        _local_c8 = (uint8_t  [16])0x0;
        sz_9 = strlen((char *)_Str);
        if (-1 < (int64_t)sz_9) {
          if (sz_9 < 0x10) goto LAB_18032b71a;
          uVal_10 = sz_9 | 0xf;
          uVal_12 = 0x16;
          if (0x16 < uVal_10) {
            uVal_12 = uVal_10;
          }
          if (0xffe < uVal_10) {
            lVal_11 = func_0x180672de0(uVal_12 + 0x28);
            goto LAB_18032b750;
          }
          pU64_13 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
          goto LAB_18032b7ab;
        }
        goto LAB_18032bb68;
      }
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf440) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0xf440) = 1;
        *(uint32_t *)(lVal_11 + 0xf43c) = 0x101caf5;
        func_0x180673140(&LAB_180367510);
      }
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (uint *)(lVal_11 + 0xf43c);
      if (*(char *)(lVal_11 + 0xf43f) == '\x01') {
        *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf43e) << 0x10) ^
                SUB164(_DAT_1806bea80,0);
      }
      _local_c8 = (uint8_t  [16])0x0;
      sz_9 = strlen((char *)_Str);
      if ((int64_t)sz_9 < 0) goto LAB_18032bb6e;
      if (sz_9 < 0x10) goto LAB_18032b71a;
      uVal_10 = sz_9 | 0xf;
      uVal_12 = 0x16;
      if (0x16 < uVal_10) {
        uVal_12 = uVal_10;
      }
      if (0xffe < uVal_10) {
        lVal_11 = func_0x180672de0(uVal_12 + 0x28);
        goto LAB_18032b750;
      }
      pU64_13 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
    }
LAB_18032b7ab:
    local_c8 = (uint8_t  [8])pU64_13;
  }
  local_b8 = sz_9;
  uStack_b0 = uVal_12;
  func_0x1806aa960(pU64_13,_Str,sz_9);
  pU64_13[sz_9] = 0;
  if (0xf < uStack_d0) {
    uVal_12 = uStack_d0 + 1;
    lVal_11 = local_e8._0_8_;
    if (0xfff < uVal_12) {
      lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
      if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_18032bb4e;
      uVal_12 = uStack_d0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_12);
  }
  local_d8 = local_b8;
  uStack_d0 = uStack_b0;
  local_e8 = _local_c8;
  uVal_6 = func_0x18045fcc0(param_2 + 10);
  lVal_11 = param_1 + (int64_t)param_2 * 0x10 + 0x188;
  func_0x180329560(param_1,lVal_11,param_1 + 0x138,param_1 + 0x128,uVal_6);
  fVal_16 = *(float *)(param_1 + 0xf4);
  func_0x18018ce30(param_1);
  fVal_14 = (float)func_0x1800cfa00();
  fVal_16 = fVal_16 * DAT_1806ae7b4;
  fVal_17 = *(float *)(param_1 + 0xf4) * DAT_1806ae650;
  func_0x1800d2d50();
  uVal_19 = (uint32_t)((uint64_t)lVal_11 >> 0x20);
  uVal_6 = *(uint8_t *)(param_1 + 0xd0);
  uVal_7 = func_0x18018ce30(param_1);
  uVal_1 = *(uint32_t *)(param_1 + 0xf4);
  bFlag_3 = *(byte *)(param_1 + 0xd1);
  fVal_16 = fVal_16 * DAT_1806aeae4;
  fVal_2 = *param_3;
  uVal_8 = func_0x18018ce30(param_1);
  fVal_15 = (float)func_0x1800cd3b0(local_e8,*(uint32_t *)(param_1 + 0xf4),uVal_8);
  fVal_5 = DAT_1806aeae4;
  fVal_18 = (fVal_17 + fVal_14) * DAT_1806aeae4;
  fVal_14 = param_3[1];
  func_0x18018ce30(param_1);
  fVal_17 = (float)func_0x1800cfa00();
  local_c8._4_4_ = fVal_18 + fVal_14 + fVal_17 * DAT_1806b2860;
  local_c8._0_4_ = (fVal_16 + fVal_2) - fVal_15 * fVal_5;
  func_0x1800d00e0(local_c8,local_e8,(uint64_t)bFlag_3 * 0x10 + param_1 + 0xd4,uVal_1,0x3f800000,
                CONCAT44(uVal_19,uVal_7),uVal_6);
  if (0xf < uStack_d0) {
    uVal_12 = uStack_d0 + 1;
    lVal_11 = local_e8._0_8_;
    if (0xfff < uVal_12) {
      lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
      if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) {
LAB_18032bb4e:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_12 = uStack_d0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_12);
  }
  return;
}

// Unwind@18032bb80
void Unwind_18032bb80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x18032bc00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18032bc00(int64_t param_1,int param_2,float *param_3)
{
  uint32_t uVal_1;
  float fVal_2;
  byte bFlag_3;
  func_ptr_t fnPtr_4;
  float fVal_5;
  uint8_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint8_t *pU64_13;
  uint *_Str;
  float fVal_14;
  float fVal_15;
  float fVal_16;
  float fVal_17;
  float fVal_18;
  uint32_t uVal_19;
  uint8_t local_e8 [16];
  size_t local_d8;
  uint64_t uStack_d0;
  uint8_t local_c8 [8];
  uint64_t uStack_c0;
  size_t local_b8;
  uint64_t uStack_b0;
  uint64_t local_a0;
  
  local_a0 = 0xfffffffffffffffe;
  local_e8 = (uint8_t  [16])0x0;
  local_d8 = 0;
  uStack_d0 = 0xf;
  if (*(int *)(param_1 + 0x120) == 3) {
    if (param_2 == 1) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf458) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0xf458) = 1;
        *(uint32_t *)(lVal_11 + 0xf454) = 0x10dc9c9;
        func_0x180673140(&LAB_1803675a0);
      }
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (uint *)(lVal_11 + 0xf454);
      if (*(char *)(lVal_11 + 0xf457) == '\x01') {
        *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf456) << 0x10) ^
                SUB164(_DAT_1806c3950,0);
      }
      _local_c8 = (uint8_t  [16])0x0;
      sz_9 = strlen((char *)_Str);
      if (-1 < (int64_t)sz_9) {
        if (sz_9 < 0x10) goto LAB_18032c0c2;
        uVal_10 = sz_9 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_10) {
          uVal_12 = uVal_10;
        }
        if (0xffe < uVal_10) {
          lVal_11 = func_0x180672de0(uVal_12 + 0x28);
          goto LAB_18032c0f8;
        }
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
        goto LAB_18032c153;
      }
LAB_18032c4f1:
      func_0x18007ba70();
LAB_18032c4f7:
      func_0x18007ba70();
LAB_18032c4fd:
      func_0x18007ba70();
LAB_18032c503:
      func_0x18007ba70();
LAB_18032c509:
      func_0x18007ba70();
      fnPtr_4 = (func_ptr_t )swi(3);
      (*fnPtr_4)();
      return;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf460) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0xf460) = 1;
      *(uint32_t *)(lVal_11 + 0xf45c) = 0x10dd7c9;
      func_0x180673140(&LAB_1803675d0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_11 + 0xf45c);
    if (*(char *)(lVal_11 + 0xf45f) == '\x01') {
      *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf45e) << 0x10) ^ SUB164(_DAT_1806c3950,0)
      ;
    }
    _local_c8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)_Str);
    if ((int64_t)sz_9 < 0) goto LAB_18032c4fd;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_12 = 0x16;
      if (0x16 < uVal_10) {
        uVal_12 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_12 + 0x28);
LAB_18032c0f8:
        pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_11;
      }
      goto LAB_18032c153;
    }
LAB_18032c0c2:
    pU64_13 = local_c8;
    uVal_12 = 0xf;
  }
  else {
    if (*(int *)(param_1 + 0x120) == 2) {
      if (param_2 == 1) {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf448) == '\0') {
          lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_11 + 0xf448) = 1;
          *(uint32_t *)(lVal_11 + 0xf444) = 0x129e5df;
          func_0x180673140(&LAB_180367540);
        }
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (uint *)(lVal_11 + 0xf444);
        if (*(char *)(lVal_11 + 0xf447) == '\x01') {
          *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf446) << 0x10) ^
                  SUB164(_DAT_1806c3960,0);
        }
        _local_c8 = (uint8_t  [16])0x0;
        sz_9 = strlen((char *)_Str);
        if ((int64_t)sz_9 < 0) {
          func_0x18007ba70();
          goto LAB_18032c4f1;
        }
        if (sz_9 < 0x10) goto LAB_18032c0c2;
        uVal_10 = sz_9 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_10) {
          uVal_12 = uVal_10;
        }
        if (0xffe < uVal_10) {
          lVal_11 = func_0x180672de0(uVal_12 + 0x28);
          goto LAB_18032c0f8;
        }
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
      }
      else {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf450) == '\0') {
          lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_11 + 0xf450) = 1;
          *(uint32_t *)(lVal_11 + 0xf44c) = 0x129e5c1;
          func_0x180673140(&LAB_180367570);
        }
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (uint *)(lVal_11 + 0xf44c);
        if (*(char *)(lVal_11 + 0xf44f) == '\x01') {
          *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf44e) << 0x10) ^
                  SUB164(_DAT_1806c3960,0);
        }
        _local_c8 = (uint8_t  [16])0x0;
        sz_9 = strlen((char *)_Str);
        if ((int64_t)sz_9 < 0) goto LAB_18032c4f7;
        if (sz_9 < 0x10) goto LAB_18032c0c2;
        uVal_10 = sz_9 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_10) {
          uVal_12 = uVal_10;
        }
        if (0xffe < uVal_10) {
          lVal_11 = func_0x180672de0(uVal_12 + 0x28);
          goto LAB_18032c0f8;
        }
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
      }
    }
    else {
      if (param_2 == 1) {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf468) == '\0') {
          lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_11 + 0xf468) = 1;
          *(uint32_t *)(lVal_11 + 0xf464) = 0x1ad4b9b;
          func_0x180673140(&LAB_180367600);
        }
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (uint *)(lVal_11 + 0xf464);
        if (*(char *)(lVal_11 + 0xf467) == '\x01') {
          *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf466) << 0x10) ^
                  SUB164(_DAT_1806c3970,0);
        }
        _local_c8 = (uint8_t  [16])0x0;
        sz_9 = strlen((char *)_Str);
        if (-1 < (int64_t)sz_9) {
          if (sz_9 < 0x10) goto LAB_18032c0c2;
          uVal_10 = sz_9 | 0xf;
          uVal_12 = 0x16;
          if (0x16 < uVal_10) {
            uVal_12 = uVal_10;
          }
          if (0xffe < uVal_10) {
            lVal_11 = func_0x180672de0(uVal_12 + 0x28);
            goto LAB_18032c0f8;
          }
          pU64_13 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
          goto LAB_18032c153;
        }
        goto LAB_18032c503;
      }
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf470) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0xf470) = 1;
        *(uint32_t *)(lVal_11 + 0xf46c) = 0x1ad4b85;
        func_0x180673140(&LAB_180367630);
      }
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (uint *)(lVal_11 + 0xf46c);
      if (*(char *)(lVal_11 + 0xf46f) == '\x01') {
        *_Str = (*_Str & 0xffff | (uint)*(byte *)(lVal_11 + 0xf46e) << 0x10) ^
                SUB164(_DAT_1806c3970,0);
      }
      _local_c8 = (uint8_t  [16])0x0;
      sz_9 = strlen((char *)_Str);
      if ((int64_t)sz_9 < 0) goto LAB_18032c509;
      if (sz_9 < 0x10) goto LAB_18032c0c2;
      uVal_10 = sz_9 | 0xf;
      uVal_12 = 0x16;
      if (0x16 < uVal_10) {
        uVal_12 = uVal_10;
      }
      if (0xffe < uVal_10) {
        lVal_11 = func_0x180672de0(uVal_12 + 0x28);
        goto LAB_18032c0f8;
      }
      pU64_13 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
    }
LAB_18032c153:
    local_c8 = (uint8_t  [8])pU64_13;
  }
  local_b8 = sz_9;
  uStack_b0 = uVal_12;
  func_0x1806aa960(pU64_13,_Str,sz_9);
  pU64_13[sz_9] = 0;
  if (0xf < uStack_d0) {
    uVal_12 = uStack_d0 + 1;
    lVal_11 = local_e8._0_8_;
    if (0xfff < uVal_12) {
      lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
      if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_18032c4e9;
      uVal_12 = uStack_d0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_12);
  }
  local_d8 = local_b8;
  uStack_d0 = uStack_b0;
  local_e8 = _local_c8;
  uVal_6 = func_0x18045fce0(param_2);
  lVal_11 = param_1 + (int64_t)param_2 * 0x10 + 0x168;
  func_0x180329560(param_1,lVal_11,param_1 + 0x138,param_1 + 0x128,uVal_6);
  fVal_16 = *(float *)(param_1 + 0xf4);
  func_0x18018ce30(param_1);
  fVal_14 = (float)func_0x1800cfa00();
  fVal_16 = fVal_16 * DAT_1806ae7b4;
  fVal_17 = *(float *)(param_1 + 0xf4) * DAT_1806ae650;
  func_0x1800d2d50();
  uVal_19 = (uint32_t)((uint64_t)lVal_11 >> 0x20);
  uVal_6 = *(uint8_t *)(param_1 + 0xd0);
  uVal_7 = func_0x18018ce30(param_1);
  uVal_1 = *(uint32_t *)(param_1 + 0xf4);
  bFlag_3 = *(byte *)(param_1 + 0xd1);
  fVal_16 = fVal_16 * DAT_1806aeae4;
  fVal_2 = *param_3;
  uVal_8 = func_0x18018ce30(param_1);
  fVal_15 = (float)func_0x1800cd3b0(local_e8,*(uint32_t *)(param_1 + 0xf4),uVal_8);
  fVal_5 = DAT_1806aeae4;
  fVal_18 = (fVal_17 + fVal_14) * DAT_1806aeae4;
  fVal_14 = param_3[1];
  func_0x18018ce30(param_1);
  fVal_17 = (float)func_0x1800cfa00();
  local_c8._4_4_ = fVal_18 + fVal_14 + fVal_17 * DAT_1806b2860;
  local_c8._0_4_ = (fVal_16 + fVal_2) - fVal_15 * fVal_5;
  func_0x1800d00e0(local_c8,local_e8,(uint64_t)bFlag_3 * 0x10 + param_1 + 0xd4,uVal_1,0x3f800000,
                CONCAT44(uVal_19,uVal_7),uVal_6);
  if (0xf < uStack_d0) {
    uVal_12 = uStack_d0 + 1;
    lVal_11 = local_e8._0_8_;
    if (0xfff < uVal_12) {
      lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
      if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) {
LAB_18032c4e9:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_12 = uStack_d0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_12);
  }
  return;
}

// Unwind@18032c510
void Unwind_18032c510(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@18032c7a0
void Unwind_18032c7a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x18032ce60
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18032ce60(uint64_t *param_1)
{
  char *fnPtr_1;
  uint *pU64_2;
  uint64_t *pU64_3;
  byte *pU8_4;
  uint8_t (*_Str)[16];
  uint8_t uVal_5;
  uint32_t uVal_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  func_ptr_t fnPtr_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  size_t sz_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  uint64_t ******ptr6_U64_17;
  uint64_t uVal_18;
  uint64_t *pU64_19;
  int64_t lVal_20;
  uint64_t *******ptr7_U64_21;
  int64_t *pLong_22;
  uint8_t *pU64_23;
  uint8_t *pU64_24;
  uint64_t *******ptr7_U64_25;
  uint64_t uVal_26;
  uint8_t auArr_27 [16];
  uint uVal_28;
  uint uVal_29;
  uint uVal_30;
  uint8_t local_2a8 [56];
  uint64_t local_270;
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
  uint8_t local_128 [56];
  uint64_t local_f0;
  uint8_t local_e8 [16];
  uint8_t local_d8 [24];
  uint64_t *local_c0;
  uint64_t local_b8;
  uint16_t uStack_b0;
  uint32_t uStack_ae;
  uint16_t uStack_aa;
  uint16_t uStack_a8;
  uint16_t uStack_a6;
  uint16_t uStack_a4;
  uint16_t uStack_a2;
  uint16_t uStack_a0;
  uint16_t uStack_9e;
  uint32_t uStack_9c;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  uint64_t *local_80;
  uint64_t *******local_78;
  uint16_t uStack_70;
  uint32_t uStack_6e;
  uint16_t uStack_6a;
  uint16_t local_68;
  uint32_t uStack_66;
  uint16_t uStack_62;
  uint16_t uStack_60;
  undefined6 uStack_5e;
  uint8_t local_56;
  uint8_t local_55;
  uint8_t local_54;
  uint8_t local_53;
  uint8_t local_52;
  uint8_t local_51;
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
  uStack_a8 = _UNK_1806c6e5b;
  uStack_a6 = (uint16_t)_UNK_1806c6e5d;
  uStack_a4 = (uint16_t)((uint)_UNK_1806c6e5d >> 0x10);
  uStack_a2 = (uint16_t)_UNK_1806c6e61;
  uStack_a0 = (uint16_t)((uint)_UNK_1806c6e61 >> 0x10);
  local_b8._0_1_ = (uint8_t)_DAT_1806c6e4b;
  local_b8._1_7_ = (undefined7)((uint64_t)_DAT_1806c6e4b >> 8);
  uStack_b0 = _UNK_1806c6e53;
  uStack_ae = _DAT_1806c6e55;
  uStack_aa = _UNK_1806c6e59;
  local_80 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xf49c) == '\0') {
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_16 + 0xf49c) = 1;
    func_0x1800d9840(lVal_16 + 0xf481,&local_b8);
    func_0x180673140(&LAB_180367690);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf481);
  func_0x1801c0b50(fnPtr_1);
  uStack_a8 = 0;
  uStack_a6 = 0;
  uStack_a4 = 0;
  uStack_a2 = 0;
  uStack_a0 = 0;
  uStack_9e = 0;
  uStack_9c = 0;
  local_b8._0_1_ = 0;
  local_b8._1_7_ = 0;
  uStack_b0 = 0;
  uStack_ae = 0;
  uStack_aa = 0;
  sz_14 = strlen(fnPtr_1);
  if ((int64_t)sz_14 < 0) {
    func_0x18007ba70();
LAB_18032f35a:
    func_0x18007ba70();
LAB_18032f360:
    func_0x18007ba70();
LAB_18032f366:
    local_49 = 1;
    func_0x18007ba70();
LAB_18032f373:
    local_4d = 1;
    func_0x18007ba70();
LAB_18032f380:
    local_4a = 1;
    func_0x18007ba70();
LAB_18032f38d:
    local_4e = 1;
    func_0x18007ba70();
LAB_18032f39a:
    local_4b = 1;
    func_0x18007ba70();
LAB_18032f3a7:
    local_4f = 1;
    func_0x18007ba70();
LAB_18032f3b4:
    func_0x18007ba70();
LAB_18032f3ba:
    func_0x18007ba70();
LAB_18032f3c0:
    func_0x18007ba70();
LAB_18032f3c6:
    local_51 = 1;
    func_0x18007ba70();
LAB_18032f3d3:
    local_50 = 1;
    func_0x18007ba70();
LAB_18032f3e0:
    local_53 = 1;
    func_0x18007ba70();
LAB_18032f3ed:
    local_52 = 1;
    func_0x18007ba70();
LAB_18032f3fa:
    local_55 = 1;
    func_0x18007ba70();
LAB_18032f407:
    local_54 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_14 < 0x10) {
      pU64_24 = (uint8_t *)&local_b8;
      uVal_26 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        lVal_16 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + 0xfffffffffffffff8) = lVal_16;
      }
      local_b8._0_1_ = SUB81(pU64_24,0);
      local_b8._1_7_ = (undefined7)((uint64_t)pU64_24 >> 8);
    }
    uStack_a8 = (uint16_t)sz_14;
    uStack_a6 = (uint16_t)(sz_14 >> 0x10);
    uStack_a4 = (uint16_t)(sz_14 >> 0x20);
    uStack_a2 = (uint16_t)(sz_14 >> 0x30);
    uStack_a0 = (uint16_t)uVal_26;
    uStack_9e = (uint16_t)(uVal_26 >> 0x10);
    uStack_9c = (uint32_t)(uVal_26 >> 0x20);
    func_0x1806aa960(pU64_24,fnPtr_1,sz_14);
    pU64_24[sz_14] = 0;
    pU64_24 = (uint8_t *)&local_b8;
    func_0x18014fe60(local_80,0,0,pU64_24);
    uVal_26 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,uStack_a0));
    if (0xf < uVal_26) {
      lVal_8 = CONCAT71(local_b8._1_7_,(uint8_t)local_b8);
      uVal_15 = uVal_26 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    *local_80 = &PTR_LAB_1806c4e50;
    *(uint8_t (*)[16])(local_80 + 0x2b) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(local_80 + 0x29) = (uint8_t  [16])0x0;
    *(uint32_t *)(local_80 + 0x2c) = 0xffffffff;
    *(uint32_t *)(local_80 + 0x2d) = 0;
    *(uint16_t *)((int64_t)local_80 + 0x16c) = 0;
    *(uint32_t *)((int64_t)local_80 + 0x16e) = 0x1010101;
    *(uint32_t *)((int64_t)local_80 + 0x171) = 0x1010101;
    lVal_16 = local_80[0x1e];
    pLong_7 = *(int64_t **)(lVal_16 + -0x10);
    if (pLong_7 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_7 + 0x20))(pLong_7,pLong_7 != (int64_t *)(lVal_16 + -0x48));
      *(uint64_t *)(lVal_16 + -0x10) = 0;
    }
    uVal_26 = *(uint64_t *)(lVal_16 + -0x58);
    if (0xf < uVal_26) {
      lVal_8 = *(int64_t *)(lVal_16 + -0x70);
      uVal_15 = uVal_26 + 1;
      lVal_20 = lVal_8;
      if (0xfff < uVal_15) {
        lVal_20 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_20)) goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_15);
    }
    local_c0 = local_80 + 0x29;
    *(uint64_t *)(lVal_16 + -0x60) = 0;
    *(uint64_t *)(lVal_16 + -0x58) = 0xf;
    *(uint8_t *)(lVal_16 + -0x70) = 0;
    local_80[0x1e] = local_80[0x1e] + -0x70;
    local_98 = _DAT_1806c6e85;
    uStack_94 = _UNK_1806c6e89;
    uStack_90 = _UNK_1806c6e8d;
    uStack_a8 = (uint16_t)_DAT_1806c6e75;
    uStack_a6 = (uint16_t)((uint)_DAT_1806c6e75 >> 0x10);
    uStack_a4 = (uint16_t)_UNK_1806c6e79;
    uStack_a2 = (uint16_t)((uint)_UNK_1806c6e79 >> 0x10);
    uStack_a0 = (uint16_t)_UNK_1806c6e7d;
    uStack_9e = (uint16_t)((uint)_UNK_1806c6e7d >> 0x10);
    uStack_9c = _UNK_1806c6e81;
    local_b8._0_1_ = (uint8_t)_DAT_1806c6e65;
    local_b8._1_7_ = (undefined7)((uint64_t)_DAT_1806c6e65 >> 8);
    uStack_b0 = (uint16_t)_UNK_1806c6e6d;
    uStack_ae = (uint32_t)((uint64_t)_UNK_1806c6e6d >> 0x10);
    uStack_aa = (uint16_t)((uint64_t)_UNK_1806c6e6d >> 0x30);
    uStack_8c = CONCAT13(0x2e,(int3)_UNK_1806c6e91);
    uStack_88 = CONCAT13(uStack_88._3_1_,0xa3a0e9);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf4d4) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf4d4) = 1;
      func_0x1801b4360(lVal_16 + 0xf49d,&local_b8);
      func_0x180673140(&LAB_1803676c0);
    }
    uVal_13 = _UNK_1806b2d7c;
    uVal_12 = _UNK_1806b2d78;
    uVal_11 = _UNK_1806b2d74;
    uVal_10 = _DAT_1806b2d70;
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_16 + 0xf49d);
    if (*(char *)(lVal_16 + 0xf4d0) == '\x01') {
      uVal_28 = *(uint *)(lVal_16 + 0xf4a1) ^ _UNK_1806b2d74;
      uVal_29 = *(uint *)(lVal_16 + 0xf4a5) ^ _UNK_1806b2d78;
      uVal_30 = *(uint *)(lVal_16 + 0xf4a9) ^ _UNK_1806b2d7c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b2d70;
      *(uint *)(lVal_16 + 0xf4a1) = uVal_28;
      *(uint *)(lVal_16 + 0xf4a5) = uVal_29;
      *(uint *)(lVal_16 + 0xf4a9) = uVal_30;
      *(uint *)(lVal_16 + 0xf4ad) = *(uint *)(lVal_16 + 0xf4ad) ^ uVal_10;
      *(uint *)(lVal_16 + 0xf4b1) = *(uint *)(lVal_16 + 0xf4b1) ^ uVal_11;
      *(uint *)(lVal_16 + 0xf4b5) = *(uint *)(lVal_16 + 0xf4b5) ^ uVal_12;
      *(uint *)(lVal_16 + 0xf4b9) = *(uint *)(lVal_16 + 0xf4b9) ^ uVal_13;
      *(uint *)(lVal_16 + 0xf4bd) = *(uint *)(lVal_16 + 0xf4bd) ^ uVal_10;
      *(uint *)(lVal_16 + 0xf4c1) = *(uint *)(lVal_16 + 0xf4c1) ^ uVal_11;
      *(uint *)(lVal_16 + 0xf4c5) = *(uint *)(lVal_16 + 0xf4c5) ^ uVal_12;
      *(uint *)(lVal_16 + 0xf4c9) = *(uint *)(lVal_16 + 0xf4c9) ^ uVal_13;
      *(ushort *)(lVal_16 + 0xf4cd) = *(ushort *)(lVal_16 + 0xf4cd) ^ 0xc787;
      *(byte *)(lVal_16 + 0xf4cf) = *(byte *)(lVal_16 + 0xf4cf) ^ 0xa3;
      *(uint8_t *)(lVal_16 + 0xf4d0) = 0;
    }
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    local_b8._0_1_ = 0;
    local_b8._1_7_ = 0;
    uStack_b0 = 0;
    uStack_ae = 0;
    uStack_aa = 0;
    sz_14 = strlen((char *)pU64_2);
    if ((int64_t)sz_14 < 0) goto LAB_18032f35a;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        lVal_16 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + 0xfffffffffffffff8) = lVal_16;
      }
      local_b8._0_1_ = SUB81(pU64_24,0);
      local_b8._1_7_ = (undefined7)((uint64_t)pU64_24 >> 8);
    }
    uStack_a8 = (uint16_t)sz_14;
    uStack_a6 = (uint16_t)(sz_14 >> 0x10);
    uStack_a4 = (uint16_t)(sz_14 >> 0x20);
    uStack_a2 = (uint16_t)(sz_14 >> 0x30);
    uStack_a0 = (uint16_t)uVal_26;
    uStack_9e = (uint16_t)(uVal_26 >> 0x10);
    uStack_9c = (uint32_t)(uVal_26 >> 0x20);
    func_0x1806aa960(pU64_24,pU64_2,sz_14);
    pU64_24[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf4e8) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf4e8) = 1;
      *(uint8_t *)(lVal_16 + 0xf4e6) = 1;
      *(uint64_t *)(lVal_16 + 0xf4d8) = 0x33d3a8d1b3c7a8ca;
      *(uint32_t *)(lVal_16 + 0xf4e0) = 0xe3dab3a7;
      *(uint16_t *)(lVal_16 + 0xf4e4) = 0xcdc0;
      func_0x180673140(&LAB_180367700);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_16 + 0xf4d8);
    if (*(char *)(lVal_16 + 0xf4e6) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_16 + 0xf4e0) = *(uint *)(lVal_16 + 0xf4e0) ^ 0x93a3c787;
      *(byte *)(lVal_16 + 0xf4e4) = *(byte *)(lVal_16 + 0xf4e4) ^ 0xa5;
      *(byte *)(lVal_16 + 0xf4e5) = *(byte *)(lVal_16 + 0xf4e5) ^ 0xcd;
      *(uint8_t *)(lVal_16 + 0xf4e6) = 0;
    }
    local_68 = 0;
    uStack_66 = 0;
    uStack_62 = 0;
    uStack_60 = 0;
    uStack_5e = 0;
    local_78 = (uint64_t *******)0x0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6a = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_18032f360;
    if (sz_14 < 0x10) {
      ptr7_U64_25 = &local_78;
      uVal_26 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        ptr7_U64_25 = (uint64_t *******)func_0x180672de0(uVal_26 + 1);
        local_78 = ptr7_U64_25;
      }
      else {
        ptr6_U64_17 = (uint64_t ******)func_0x180672de0(uVal_26 + 0x28);
        ptr7_U64_25 = (uint64_t *******)((int64_t)ptr6_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr7_U64_25[-1] = ptr6_U64_17;
        local_78 = ptr7_U64_25;
      }
    }
    local_68 = (uint16_t)sz_14;
    uStack_66 = (uint32_t)(sz_14 >> 0x10);
    uStack_62 = (uint16_t)(sz_14 >> 0x30);
    uStack_60 = (uint16_t)uVal_26;
    uStack_5e = (undefined6)(uVal_26 >> 0x10);
    func_0x1806aa960(ptr7_U64_25,pU64_3,sz_14);
    *(uint8_t *)((int64_t)ptr7_U64_25 + sz_14) = 0;
    ptr7_U64_25 = &local_78;
    lVal_16 = func_0x1801cf6b0(local_80,ptr7_U64_25);
    pLong_7 = (int64_t *)(lVal_16 + 0x20);
    pLong_22 = &local_b8;
    if (pLong_7 != pLong_22) {
      uVal_26 = *(uint64_t *)(lVal_16 + 0x38);
      if (0xf < uVal_26) {
        lVal_8 = *pLong_7;
        uVal_15 = uVal_26 + 1;
        lVal_20 = lVal_8;
        if (0xfff < uVal_15) {
          lVal_20 = *(int64_t *)(lVal_8 + -8);
          if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_20)) goto LAB_18032f352;
          uVal_15 = uVal_26 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_20,uVal_15);
      }
      *(uint *)(lVal_16 + 0x30) = CONCAT22(uStack_a6,uStack_a8);
      *(uint *)(lVal_16 + 0x34) = CONCAT22(uStack_a2,uStack_a4);
      *(uint *)(lVal_16 + 0x38) = CONCAT22(uStack_9e,uStack_a0);
      *(uint32_t *)(lVal_16 + 0x3c) = uStack_9c;
      *pLong_7 = CONCAT71(local_b8._1_7_,(uint8_t)local_b8);
      *(uint64_t *)(lVal_16 + 0x28) = CONCAT26(uStack_aa,CONCAT42(uStack_ae,uStack_b0));
      uStack_a8 = 0;
      uStack_a6 = 0;
      uStack_a4 = 0;
      uStack_a2 = 0;
      uStack_a0 = 0xf;
      uStack_9e = 0;
      uStack_9c = 0;
      local_b8._0_1_ = 0;
    }
    uVal_26 = CONCAT62(uStack_5e,uStack_60);
    if (0xf < uVal_26) {
      uVal_15 = uVal_26 + 1;
      ptr7_U64_21 = local_78;
      if (0xfff < uVal_15) {
        ptr7_U64_21 = (uint64_t *******)local_78[-1];
        if (0x1f < (uint64_t)((int64_t)local_78 + (-8 - (int64_t)ptr7_U64_21)))
        goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr7_U64_21,uVal_15);
    }
    uVal_26 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,uStack_a0));
    if (0xf < uVal_26) {
      lVal_8 = CONCAT71(local_b8._1_7_,(uint8_t)local_b8);
      uVal_15 = uVal_26 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    local_270 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_270 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_2a8);
    }
    pU64_24 = (uint8_t *)((int64_t)local_80 + 0x16e);
    uVal_5 = *pU64_24;
    local_78 = _DAT_1806c6e98;
    uStack_70 = (uint16_t)_UNK_1806c6ea0;
    uStack_6e = (uint32_t)((uint64_t)_UNK_1806c6ea0 >> 0x10);
    uStack_6a = (uint16_t)((uint64_t)_UNK_1806c6ea0 >> 0x30);
    local_68 = 0xb77f;
    uStack_66 = 0x7244b20;
    uStack_62 = 0x6504;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf504) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf504) = 1;
      func_0x18007d9e0(lVal_16 + 0xf4e9,&local_78);
      func_0x180673140(&LAB_180367730);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf4e9);
    func_0x18036fea0(fnPtr_1);
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    local_b8._0_1_ = 0;
    local_b8._1_7_ = 0;
    uStack_b0 = 0;
    uStack_ae = 0;
    uStack_aa = 0;
    sz_14 = strlen(fnPtr_1);
    if ((int64_t)sz_14 < 0) goto LAB_18032f366;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_49 = 1;
        pLong_22 = (int64_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_49 = 1;
        lVal_16 = func_0x180672de0(uVal_26 + 0x28);
        pLong_22 = (int64_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        pLong_22[-1] = lVal_16;
      }
      local_b8._0_1_ = SUB81(pLong_22,0);
      local_b8._1_7_ = (undefined7)((uint64_t)pLong_22 >> 8);
    }
    uStack_a8 = (uint16_t)sz_14;
    uStack_a6 = (uint16_t)(sz_14 >> 0x10);
    uStack_a4 = (uint16_t)(sz_14 >> 0x20);
    uStack_a2 = (uint16_t)(sz_14 >> 0x30);
    uStack_a0 = (uint16_t)uVal_26;
    uStack_9e = (uint16_t)(uVal_26 >> 0x10);
    uStack_9c = (uint32_t)(uVal_26 >> 0x20);
    func_0x1806aa960(pLong_22,fnPtr_1,sz_14);
    *(uint8_t *)((int64_t)pLong_22 + sz_14) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf510) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf510) = 1;
      *(uint64_t *)(lVal_16 + 0xf508) = 0x1612b655226bb5e;
      func_0x180673140(&LAB_180367760);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_16 + 0xf508);
    if (*(char *)(lVal_16 + 0xf50f) == '\x01') {
      *pU64_3 = (CONCAT44((uint)*(ushort *)(lVal_16 + 0xf50d) << 8,*(uint32_t *)pU64_3) |
                (uint64_t)*(byte *)(lVal_16 + 0xf50c) << 0x20) ^ SUB168(_DAT_1806ae210,0);
    }
    local_68 = 0;
    uStack_66 = 0;
    uStack_62 = 0;
    uStack_60 = 0;
    uStack_5e = 0;
    local_78 = (uint64_t *******)0x0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6a = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_18032f373;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_4d = 1;
        ptr7_U64_25 = (uint64_t *******)func_0x180672de0(uVal_26 + 1);
        local_78 = ptr7_U64_25;
      }
      else {
        local_4d = 1;
        ptr6_U64_17 = (uint64_t ******)func_0x180672de0(uVal_26 + 0x28);
        ptr7_U64_25 = (uint64_t *******)((int64_t)ptr6_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr7_U64_25[-1] = ptr6_U64_17;
        local_78 = ptr7_U64_25;
      }
    }
    local_68 = (uint16_t)sz_14;
    uStack_66 = (uint32_t)(sz_14 >> 0x10);
    uStack_62 = (uint16_t)(sz_14 >> 0x30);
    uStack_60 = (uint16_t)uVal_26;
    uStack_5e = (undefined6)(uVal_26 >> 0x10);
    func_0x1806aa960(ptr7_U64_25,pU64_3,sz_14);
    *(uint8_t *)((int64_t)ptr7_U64_25 + sz_14) = 0;
    ptr7_U64_25 = &local_78;
    pU64_23 = (uint8_t *)&local_b8;
    func_0x1801ccd70(local_80,ptr7_U64_25,pU64_23,pU64_24,uVal_5,local_2a8,0);
    uVal_26 = CONCAT62(uStack_5e,uStack_60);
    if (0xf < uVal_26) {
      uVal_15 = uVal_26 + 1;
      ptr7_U64_21 = local_78;
      if (0xfff < uVal_15) {
        ptr7_U64_21 = (uint64_t *******)local_78[-1];
        if (0x1f < (uint64_t)((int64_t)local_78 + (-8 - (int64_t)ptr7_U64_21)))
        goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr7_U64_21,uVal_15);
    }
    uVal_26 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,uStack_a0));
    if (0xf < uVal_26) {
      lVal_8 = CONCAT71(local_b8._1_7_,(uint8_t)local_b8);
      uVal_15 = uVal_26 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    local_230 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_230 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_268);
    }
    pU64_24 = (uint8_t *)((int64_t)local_80 + 0x16f);
    uVal_5 = *pU64_24;
    local_78 = _DAT_1806c6eb0;
    uStack_70 = (uint16_t)_UNK_1806c6eb8;
    uStack_6e = (uint32_t)((uint64_t)_UNK_1806c6eb8 >> 0x10);
    uStack_6a = (uint16_t)((uint64_t)_UNK_1806c6eb8 >> 0x30);
    local_68 = 0x17b7;
    uStack_66 = 0xcbe0cfbc;
    uStack_62 = 0xefa2;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf52c) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf52c) = 1;
      func_0x18007d9e0(lVal_16 + 0xf511,&local_78);
      func_0x180673140(&LAB_180367790);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf511);
    func_0x18036fed0(fnPtr_1);
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    local_b8._0_1_ = 0;
    local_b8._1_7_ = 0;
    uStack_b0 = 0;
    uStack_ae = 0;
    uStack_aa = 0;
    sz_14 = strlen(fnPtr_1);
    if ((int64_t)sz_14 < 0) goto LAB_18032f380;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_4a = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_4a = 1;
        lVal_16 = func_0x180672de0(uVal_26 + 0x28);
        pU64_23 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + 0xfffffffffffffff8) = lVal_16;
      }
      local_b8._0_1_ = SUB81(pU64_23,0);
      local_b8._1_7_ = (undefined7)((uint64_t)pU64_23 >> 8);
    }
    uStack_a8 = (uint16_t)sz_14;
    uStack_a6 = (uint16_t)(sz_14 >> 0x10);
    uStack_a4 = (uint16_t)(sz_14 >> 0x20);
    uStack_a2 = (uint16_t)(sz_14 >> 0x30);
    uStack_a0 = (uint16_t)uVal_26;
    uStack_9e = (uint16_t)(uVal_26 >> 0x10);
    uStack_9c = (uint32_t)(uVal_26 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_14);
    pU64_23[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf538) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf538) = 1;
      *(uint64_t *)(lVal_16 + 0xf530) = 0x1c7e6a1d6ba1b96;
      func_0x180673140(&LAB_1803677c0);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_16 + 0xf530);
    if (*(char *)(lVal_16 + 0xf537) == '\x01') {
      *pU64_3 = (CONCAT44((uint)*(ushort *)(lVal_16 + 0xf535) << 8,*(uint32_t *)pU64_3) |
                (uint64_t)*(byte *)(lVal_16 + 0xf534) << 0x20) ^ SUB168(_DAT_1806ae220,0);
    }
    local_68 = 0;
    uStack_66 = 0;
    uStack_62 = 0;
    uStack_60 = 0;
    uStack_5e = 0;
    local_78 = (uint64_t *******)0x0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6a = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_18032f38d;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_4e = 1;
        ptr7_U64_25 = (uint64_t *******)func_0x180672de0(uVal_26 + 1);
        local_78 = ptr7_U64_25;
      }
      else {
        local_4e = 1;
        ptr6_U64_17 = (uint64_t ******)func_0x180672de0(uVal_26 + 0x28);
        ptr7_U64_25 = (uint64_t *******)((int64_t)ptr6_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr7_U64_25[-1] = ptr6_U64_17;
        local_78 = ptr7_U64_25;
      }
    }
    local_68 = (uint16_t)sz_14;
    uStack_66 = (uint32_t)(sz_14 >> 0x10);
    uStack_62 = (uint16_t)(sz_14 >> 0x30);
    uStack_60 = (uint16_t)uVal_26;
    uStack_5e = (undefined6)(uVal_26 >> 0x10);
    func_0x1806aa960(ptr7_U64_25,pU64_3,sz_14);
    *(uint8_t *)((int64_t)ptr7_U64_25 + sz_14) = 0;
    ptr7_U64_25 = &local_78;
    pU64_23 = (uint8_t *)&local_b8;
    func_0x1801ccd70(local_80,ptr7_U64_25,pU64_23,pU64_24,uVal_5,local_268,0);
    uVal_26 = CONCAT62(uStack_5e,uStack_60);
    if (0xf < uVal_26) {
      uVal_15 = uVal_26 + 1;
      ptr7_U64_21 = local_78;
      if (0xfff < uVal_15) {
        ptr7_U64_21 = (uint64_t *******)local_78[-1];
        if (0x1f < (uint64_t)((int64_t)local_78 + (-8 - (int64_t)ptr7_U64_21)))
        goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr7_U64_21,uVal_15);
    }
    uVal_26 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,uStack_a0));
    if (0xf < uVal_26) {
      lVal_8 = CONCAT71(local_b8._1_7_,(uint8_t)local_b8);
      uVal_15 = uVal_26 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    local_1f0 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_1f0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_228);
    }
    pU64_19 = local_80 + 0x2e;
    uVal_5 = *(uint8_t *)pU64_19;
    local_78 = _DAT_1806c6ec8;
    uStack_70 = (uint16_t)_UNK_1806c6ed0;
    uStack_6e = (uint32_t)((uint64_t)_UNK_1806c6ed0 >> 0x10);
    uStack_6a = (uint16_t)((uint64_t)_UNK_1806c6ed0 >> 0x30);
    local_68 = 0xd547;
    uStack_66 = 0x5f582bc0;
    uStack_62 = 0x8990;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf554) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf554) = 1;
      func_0x18007d9e0(lVal_16 + 0xf539,&local_78);
      func_0x180673140(&LAB_1803677f0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf539);
    func_0x180214ec0(fnPtr_1);
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    local_b8._0_1_ = 0;
    local_b8._1_7_ = 0;
    uStack_b0 = 0;
    uStack_ae = 0;
    uStack_aa = 0;
    sz_14 = strlen(fnPtr_1);
    if ((int64_t)sz_14 < 0) goto LAB_18032f39a;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_4b = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_4b = 1;
        lVal_16 = func_0x180672de0(uVal_26 + 0x28);
        pU64_23 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + 0xfffffffffffffff8) = lVal_16;
      }
      local_b8._0_1_ = SUB81(pU64_23,0);
      local_b8._1_7_ = (undefined7)((uint64_t)pU64_23 >> 8);
    }
    uStack_a8 = (uint16_t)sz_14;
    uStack_a6 = (uint16_t)(sz_14 >> 0x10);
    uStack_a4 = (uint16_t)(sz_14 >> 0x20);
    uStack_a2 = (uint16_t)(sz_14 >> 0x30);
    uStack_a0 = (uint16_t)uVal_26;
    uStack_9e = (uint16_t)(uVal_26 >> 0x10);
    uStack_9c = (uint32_t)(uVal_26 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_14);
    pU64_23[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf560) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf560) = 1;
      *(uint64_t *)(lVal_16 + 0xf558) = 0x1f5711932c6d966;
      func_0x180673140(&LAB_180367820);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_16 + 0xf558);
    if (*(char *)(lVal_16 + 0xf55f) == '\x01') {
      *pU64_3 = (CONCAT44((uint)*(ushort *)(lVal_16 + 0xf55d) << 8,*(uint32_t *)pU64_3) |
                (uint64_t)*(byte *)(lVal_16 + 0xf55c) << 0x20) ^ SUB168(_DAT_1806ae7c0,0);
    }
    local_68 = 0;
    uStack_66 = 0;
    uStack_62 = 0;
    uStack_60 = 0;
    uStack_5e = 0;
    local_78 = (uint64_t *******)0x0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6a = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_18032f3a7;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_4f = 1;
        ptr7_U64_25 = (uint64_t *******)func_0x180672de0(uVal_26 + 1);
        local_78 = ptr7_U64_25;
      }
      else {
        local_4f = 1;
        ptr6_U64_17 = (uint64_t ******)func_0x180672de0(uVal_26 + 0x28);
        ptr7_U64_25 = (uint64_t *******)((int64_t)ptr6_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr7_U64_25[-1] = ptr6_U64_17;
        local_78 = ptr7_U64_25;
      }
    }
    local_68 = (uint16_t)sz_14;
    uStack_66 = (uint32_t)(sz_14 >> 0x10);
    uStack_62 = (uint16_t)(sz_14 >> 0x30);
    uStack_60 = (uint16_t)uVal_26;
    uStack_5e = (undefined6)(uVal_26 >> 0x10);
    func_0x1806aa960(ptr7_U64_25,pU64_3,sz_14);
    *(uint8_t *)((int64_t)ptr7_U64_25 + sz_14) = 0;
    ptr7_U64_25 = &local_78;
    pU64_24 = (uint8_t *)&local_b8;
    func_0x1801ccd70(local_80,ptr7_U64_25,pU64_24,pU64_19,uVal_5,local_228,0);
    uVal_26 = CONCAT62(uStack_5e,uStack_60);
    if (0xf < uVal_26) {
      uVal_15 = uVal_26 + 1;
      ptr7_U64_21 = local_78;
      if (0xfff < uVal_15) {
        ptr7_U64_21 = (uint64_t *******)local_78[-1];
        if (0x1f < (uint64_t)((int64_t)local_78 + (-8 - (int64_t)ptr7_U64_21)))
        goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr7_U64_21,uVal_15);
    }
    uVal_26 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,uStack_a0));
    if (0xf < uVal_26) {
      lVal_8 = CONCAT71(local_b8._1_7_,(uint8_t)local_b8);
      uVal_15 = uVal_26 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf568) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf568) = 1;
      *(uint8_t *)(lVal_16 + 0xf564) = 1;
      *(uint16_t *)(lVal_16 + 0xf562) = 0x3169;
      func_0x180673140(&LAB_180367850);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_16 + 0xf562);
    if (*(char *)(lVal_16 + 0xf564) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x45;
      *(byte *)(lVal_16 + 0xf563) = *(byte *)(lVal_16 + 0xf563) ^ 0x31;
      *(uint8_t *)(lVal_16 + 0xf564) = 0;
    }
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    local_b8._0_1_ = 0;
    local_b8._1_7_ = 0;
    uStack_b0 = 0;
    uStack_ae = 0;
    uStack_aa = 0;
    sz_14 = strlen((char *)pU8_4);
    if ((int64_t)sz_14 < 0) goto LAB_18032f3b4;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        lVal_16 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + 0xfffffffffffffff8) = lVal_16;
      }
      local_b8._0_1_ = SUB81(pU64_24,0);
      local_b8._1_7_ = (undefined7)((uint64_t)pU64_24 >> 8);
    }
    uStack_a8 = (uint16_t)sz_14;
    uStack_a6 = (uint16_t)(sz_14 >> 0x10);
    uStack_a4 = (uint16_t)(sz_14 >> 0x20);
    uStack_a2 = (uint16_t)(sz_14 >> 0x30);
    uStack_a0 = (uint16_t)uVal_26;
    uStack_9e = (uint16_t)(uVal_26 >> 0x10);
    uStack_9c = (uint32_t)(uVal_26 >> 0x20);
    func_0x1806aa960(pU64_24,pU8_4,sz_14);
    pU64_24[sz_14] = 0;
    pU64_24 = (uint8_t *)&local_b8;
    uVal_18 = func_0x1801d3650(local_c0,pU64_24,0);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf570) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf570) = 1;
      *(uint32_t *)(lVal_16 + 0xf56c) = 0x13d1c65;
      func_0x180673140(&LAB_180367870);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_16 + 0xf56c);
    if (*(char *)(lVal_16 + 0xf56f) == '\x01') {
      *pU64_2 = (*pU64_2 & 0xffff | (uint)*(byte *)(lVal_16 + 0xf56e) << 0x10) ^
                SUB164(_DAT_1806b5ca0,0);
    }
    local_68 = 0;
    uStack_66 = 0;
    uStack_62 = 0;
    uStack_60 = 0;
    uStack_5e = 0;
    local_78 = (uint64_t *******)0x0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6a = 0;
    sz_14 = strlen((char *)pU64_2);
    if ((int64_t)sz_14 < 0) goto LAB_18032f3ba;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        ptr7_U64_25 = (uint64_t *******)func_0x180672de0(uVal_26 + 1);
        local_78 = ptr7_U64_25;
      }
      else {
        ptr6_U64_17 = (uint64_t ******)func_0x180672de0(uVal_26 + 0x28);
        ptr7_U64_25 = (uint64_t *******)((int64_t)ptr6_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr7_U64_25[-1] = ptr6_U64_17;
        local_78 = ptr7_U64_25;
      }
    }
    local_68 = (uint16_t)sz_14;
    uStack_66 = (uint32_t)(sz_14 >> 0x10);
    uStack_62 = (uint16_t)(sz_14 >> 0x30);
    uStack_60 = (uint16_t)uVal_26;
    uStack_5e = (undefined6)(uVal_26 >> 0x10);
    func_0x1806aa960(ptr7_U64_25,pU64_2,sz_14);
    *(uint8_t *)((int64_t)ptr7_U64_25 + sz_14) = 0;
    ptr7_U64_25 = &local_78;
    uVal_18 = func_0x1801d3650(uVal_18,ptr7_U64_25,1);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf578) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf578) = 1;
      *(uint32_t *)(lVal_16 + 0xf574) = 0x13d4d65;
      func_0x180673140(&LAB_1803678a0);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_16 + 0xf574);
    if (*(char *)(lVal_16 + 0xf577) == '\x01') {
      *pU64_2 = (*pU64_2 & 0xffff | (uint)*(byte *)(lVal_16 + 0xf576) << 0x10) ^
                SUB164(_DAT_1806b5ca0,0);
    }
    local_d8._0_16_ = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU64_2);
    if ((int64_t)sz_14 < 0) goto LAB_18032f3c0;
    if (sz_14 < 0x10) {
      pU64_23 = local_e8;
      uVal_26 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        lVal_16 = func_0x180672de0(uVal_26 + 0x28);
        pU64_23 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_16;
      }
      local_e8._0_8_ = pU64_23;
    }
    local_d8._8_8_ = uVal_26;
    local_d8._0_8_ = sz_14;
    func_0x1806aa960(pU64_23,pU64_2,sz_14);
    pU64_23[sz_14] = 0;
    func_0x1801d3650(uVal_18,local_e8,2);
    if (0xf < (uint64_t)local_d8._8_8_) {
      uVal_26 = local_d8._8_8_ + 1;
      lVal_16 = local_e8._0_8_;
      if (0xfff < uVal_26) {
        lVal_16 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_16)) goto LAB_18032f352;
        uVal_26 = local_d8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_26);
    }
    uVal_26 = CONCAT62(uStack_5e,uStack_60);
    if (0xf < uVal_26) {
      uVal_15 = uVal_26 + 1;
      ptr7_U64_21 = local_78;
      if (0xfff < uVal_15) {
        ptr7_U64_21 = (uint64_t *******)local_78[-1];
        if (0x1f < (uint64_t)((int64_t)local_78 + (-8 - (int64_t)ptr7_U64_21)))
        goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr7_U64_21,uVal_15);
    }
    uVal_26 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,uStack_a0));
    if (0xf < uVal_26) {
      lVal_8 = CONCAT71(local_b8._1_7_,(uint8_t)local_b8);
      uVal_15 = uVal_26 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    local_1b0 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_1b0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_1e8);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf57c) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf57c) = 1;
      *(uint16_t *)(lVal_16 + 0xf579) = 0x11d;
      func_0x180673140(&LAB_1803678d0);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_16 + 0xf579);
    if (*(char *)(lVal_16 + 0xf57a) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x1d;
      *(uint8_t *)(lVal_16 + 0xf57a) = 0;
    }
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    local_b8._0_1_ = 0;
    local_b8._1_7_ = 0;
    uStack_b0 = 0;
    uStack_ae = 0;
    uStack_aa = 0;
    sz_14 = strlen((char *)pU8_4);
    if ((int64_t)sz_14 < 0) goto LAB_18032f3c6;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_51 = 1;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_51 = 1;
        lVal_16 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + 0xfffffffffffffff8) = lVal_16;
      }
      local_b8._0_1_ = SUB81(pU64_24,0);
      local_b8._1_7_ = (undefined7)((uint64_t)pU64_24 >> 8);
    }
    uStack_a8 = (uint16_t)sz_14;
    uStack_a6 = (uint16_t)(sz_14 >> 0x10);
    uStack_a4 = (uint16_t)(sz_14 >> 0x20);
    uStack_a2 = (uint16_t)(sz_14 >> 0x30);
    uStack_a0 = (uint16_t)uVal_26;
    uStack_9e = (uint16_t)(uVal_26 >> 0x10);
    uStack_9c = (uint32_t)(uVal_26 >> 0x20);
    func_0x1806aa960(pU64_24,pU8_4,sz_14);
    pU64_24[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf58c) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf58c) = 1;
      *(uint8_t *)(lVal_16 + 0xf58a) = 1;
      *(uint64_t *)(lVal_16 + 0xf580) = 0xd45562cd6a3d124e;
      *(uint16_t *)(lVal_16 + 0xf588) = 0x776f;
      func_0x180673140(&LAB_1803678f0);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_16 + 0xf580);
    if (*(char *)(lVal_16 + 0xf58a) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xbb2103bf0b4d771d;
      *(byte *)(lVal_16 + 0xf588) = *(byte *)(lVal_16 + 0xf588) ^ 0x1d;
      *(byte *)(lVal_16 + 0xf589) = *(byte *)(lVal_16 + 0xf589) ^ 0x77;
      *(uint8_t *)(lVal_16 + 0xf58a) = 0;
    }
    local_68 = 0;
    uStack_66 = 0;
    uStack_62 = 0;
    uStack_60 = 0;
    uStack_5e = 0;
    local_78 = (uint64_t *******)0x0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6a = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_18032f3d3;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_50 = 1;
        ptr7_U64_25 = (uint64_t *******)func_0x180672de0(uVal_26 + 1);
        local_78 = ptr7_U64_25;
      }
      else {
        local_50 = 1;
        ptr6_U64_17 = (uint64_t ******)func_0x180672de0(uVal_26 + 0x28);
        ptr7_U64_25 = (uint64_t *******)((int64_t)ptr6_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr7_U64_25[-1] = ptr6_U64_17;
        local_78 = ptr7_U64_25;
      }
    }
    local_68 = (uint16_t)sz_14;
    uStack_66 = (uint32_t)(sz_14 >> 0x10);
    uStack_62 = (uint16_t)(sz_14 >> 0x30);
    uStack_60 = (uint16_t)uVal_26;
    uStack_5e = (undefined6)(uVal_26 >> 0x10);
    func_0x1806aa960(ptr7_U64_25,pU64_3,sz_14);
    *(uint8_t *)((int64_t)ptr7_U64_25 + sz_14) = 0;
    ptr7_U64_25 = &local_78;
    pU64_24 = (uint8_t *)&local_b8;
    func_0x1801d3a80(local_80,ptr7_U64_25,pU64_24,local_c0,0,local_1e8,0);
    uVal_26 = CONCAT62(uStack_5e,uStack_60);
    if (0xf < uVal_26) {
      uVal_15 = uVal_26 + 1;
      ptr7_U64_21 = local_78;
      if (0xfff < uVal_15) {
        ptr7_U64_21 = (uint64_t *******)local_78[-1];
        if (0x1f < (uint64_t)((int64_t)local_78 + (-8 - (int64_t)ptr7_U64_21)))
        goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr7_U64_21,uVal_15);
    }
    uVal_26 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,uStack_a0));
    if (0xf < uVal_26) {
      lVal_8 = CONCAT71(local_b8._1_7_,(uint8_t)local_b8);
      uVal_15 = uVal_26 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    local_170 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_170 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_1a8);
    }
    pU64_19 = local_80 + 0x2d;
    uVal_6 = *(uint32_t *)pU64_19;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf590) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf590) = 1;
      *(uint16_t *)(lVal_16 + 0xf58d) = 0x12d;
      func_0x180673140(&LAB_180367920);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_16 + 0xf58d);
    if (*(char *)(lVal_16 + 0xf58e) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x2d;
      *(uint8_t *)(lVal_16 + 0xf58e) = 0;
    }
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    local_b8._0_1_ = 0;
    local_b8._1_7_ = 0;
    uStack_b0 = 0;
    uStack_ae = 0;
    uStack_aa = 0;
    sz_14 = strlen((char *)pU8_4);
    if ((int64_t)sz_14 < 0) goto LAB_18032f3e0;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_53 = 1;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_53 = 1;
        lVal_16 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + 0xfffffffffffffff8) = lVal_16;
      }
      local_b8._0_1_ = SUB81(pU64_24,0);
      local_b8._1_7_ = (undefined7)((uint64_t)pU64_24 >> 8);
    }
    uStack_a8 = (uint16_t)sz_14;
    uStack_a6 = (uint16_t)(sz_14 >> 0x10);
    uStack_a4 = (uint16_t)(sz_14 >> 0x20);
    uStack_a2 = (uint16_t)(sz_14 >> 0x30);
    uStack_a0 = (uint16_t)uVal_26;
    uStack_9e = (uint16_t)(uVal_26 >> 0x10);
    uStack_9c = (uint32_t)(uVal_26 >> 0x20);
    func_0x1806aa960(pU64_24,pU8_4,sz_14);
    pU64_24[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf5a8) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf5a8) = 1;
      *(uint8_t *)(lVal_16 + 0xf5a4) = 1;
      *(uint64_t *)(lVal_16 + 0xf598) = 0xb6fc8c9b60bf8c6e;
      *(uint32_t *)(lVal_16 + 0xf5a0) = 0x19bc875f;
      func_0x180673140(&LAB_180367940);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_16 + 0xf598);
    if (*(char *)(lVal_16 + 0xf5a4) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xd993efbb19cfe32d;
      *(uint *)(lVal_16 + 0xf5a0) = *(uint *)(lVal_16 + 0xf5a0) ^ 0x19cfe32d;
      *(uint8_t *)(lVal_16 + 0xf5a4) = 0;
    }
    local_68 = 0;
    uStack_66 = 0;
    uStack_62 = 0;
    uStack_60 = 0;
    uStack_5e = 0;
    local_78 = (uint64_t *******)0x0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6a = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_18032f3ed;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_52 = 1;
        ptr7_U64_25 = (uint64_t *******)func_0x180672de0(uVal_26 + 1);
        local_78 = ptr7_U64_25;
      }
      else {
        local_52 = 1;
        ptr6_U64_17 = (uint64_t ******)func_0x180672de0(uVal_26 + 0x28);
        ptr7_U64_25 = (uint64_t *******)((int64_t)ptr6_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr7_U64_25[-1] = ptr6_U64_17;
        local_78 = ptr7_U64_25;
      }
    }
    local_68 = (uint16_t)sz_14;
    uStack_66 = (uint32_t)(sz_14 >> 0x10);
    uStack_62 = (uint16_t)(sz_14 >> 0x30);
    uStack_60 = (uint16_t)uVal_26;
    uStack_5e = (undefined6)(uVal_26 >> 0x10);
    func_0x1806aa960(ptr7_U64_25,pU64_3,sz_14);
    *(uint8_t *)((int64_t)ptr7_U64_25 + sz_14) = 0;
    ptr7_U64_25 = &local_78;
    pU64_24 = (uint8_t *)&local_b8;
    func_0x1801d3800(local_80,ptr7_U64_25,pU64_24,pU64_19,uVal_6,local_1a8,0);
    uVal_26 = CONCAT62(uStack_5e,uStack_60);
    if (0xf < uVal_26) {
      uVal_15 = uVal_26 + 1;
      ptr7_U64_21 = local_78;
      if (0xfff < uVal_15) {
        ptr7_U64_21 = (uint64_t *******)local_78[-1];
        if (0x1f < (uint64_t)((int64_t)local_78 + (-8 - (int64_t)ptr7_U64_21)))
        goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr7_U64_21,uVal_15);
    }
    uVal_26 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,uStack_a0));
    if (0xf < uVal_26) {
      lVal_8 = CONCAT71(local_b8._1_7_,(uint8_t)local_b8);
      uVal_15 = uVal_26 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    local_130 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_130 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_168);
    }
    pU64_23 = (uint8_t *)((int64_t)local_80 + 0x174);
    uVal_5 = *pU64_23;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf5c0) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf5c0) = 1;
      uVal_18 = _UNK_1806c39e8;
      *(uint64_t *)(lVal_16 + 0xf5b0) = _DAT_1806c39e0;
      *(uint64_t *)(lVal_16 + 0xf5b8) = uVal_18;
      func_0x180673140(&LAB_180367970);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_16 + 0xf5b0);
    if (*(char *)(lVal_16 + 0xf5bf) == '\x01') {
      uVal_6 = *(uint32_t *)(lVal_16 + 0xf5b8);
      auArr_27 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_6 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_6 >> 0x10),uVal_6)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_16 + 0xf5bd) >> 8)),
                                                 (char)((uint)uVal_6 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_16 + 0xf5bd),(char)uVal_6)
                                       )),_DAT_1806ae110);
      auArr_27._8_8_ =
           auArr_27._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_16 + 0xf5bc) << 0x20;
      auArr_27 = pblendw(auArr_27,*_Str,0xf);
      *_Str = auArr_27 ^ _DAT_1806bed00;
    }
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    local_b8._0_1_ = 0;
    local_b8._1_7_ = 0;
    uStack_b0 = 0;
    uStack_ae = 0;
    uStack_aa = 0;
    sz_14 = strlen((char *)_Str);
    if ((int64_t)sz_14 < 0) goto LAB_18032f3fa;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_55 = 1;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
      }
      else {
        local_55 = 1;
        lVal_16 = func_0x180672de0(uVal_26 + 0x28);
        pU64_24 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + 0xfffffffffffffff8) = lVal_16;
      }
      local_b8._0_1_ = SUB81(pU64_24,0);
      local_b8._1_7_ = (undefined7)((uint64_t)pU64_24 >> 8);
    }
    uStack_a8 = (uint16_t)sz_14;
    uStack_a6 = (uint16_t)(sz_14 >> 0x10);
    uStack_a4 = (uint16_t)(sz_14 >> 0x20);
    uStack_a2 = (uint16_t)(sz_14 >> 0x30);
    uStack_a0 = (uint16_t)uVal_26;
    uStack_9e = (uint16_t)(uVal_26 >> 0x10);
    uStack_9c = (uint32_t)(uVal_26 >> 0x20);
    func_0x1806aa960(pU64_24,_Str,sz_14);
    pU64_24[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf5d4) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf5d4) = 1;
      *(uint8_t *)(lVal_16 + 0xf5d0) = 1;
      *(uint64_t *)(lVal_16 + 0xf5c8) = 0x5f05281ebaa4ec01;
      func_0x180673140(&LAB_1803679a0);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_16 + 0xf5c8);
    if (*(char *)(lVal_16 + 0xf5d0) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x5f694973d3c78945;
      *(uint8_t *)(lVal_16 + 0xf5d0) = 0;
    }
    local_68 = 0;
    uStack_66 = 0;
    uStack_62 = 0;
    uStack_60 = 0;
    uStack_5e = 0;
    local_78 = (uint64_t *******)0x0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6a = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_18032f407;
    uVal_26 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_26 = 0x16;
      if (0x16 < uVal_15) {
        uVal_26 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_54 = 1;
        ptr7_U64_25 = (uint64_t *******)func_0x180672de0(uVal_26 + 1);
        local_78 = ptr7_U64_25;
      }
      else {
        local_54 = 1;
        ptr6_U64_17 = (uint64_t ******)func_0x180672de0(uVal_26 + 0x28);
        ptr7_U64_25 = (uint64_t *******)((int64_t)ptr6_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr7_U64_25[-1] = ptr6_U64_17;
        local_78 = ptr7_U64_25;
      }
    }
    local_68 = (uint16_t)sz_14;
    uStack_66 = (uint32_t)(sz_14 >> 0x10);
    uStack_62 = (uint16_t)(sz_14 >> 0x30);
    uStack_60 = (uint16_t)uVal_26;
    uStack_5e = (undefined6)(uVal_26 >> 0x10);
    func_0x1806aa960(ptr7_U64_25,pU64_3,sz_14);
    *(uint8_t *)((int64_t)ptr7_U64_25 + sz_14) = 0;
    ptr7_U64_25 = &local_78;
    pU64_24 = (uint8_t *)&local_b8;
    func_0x1801ccd70(local_80,ptr7_U64_25,pU64_24,pU64_23,uVal_5,local_168,0);
    uVal_26 = CONCAT62(uStack_5e,uStack_60);
    if (0xf < uVal_26) {
      uVal_15 = uVal_26 + 1;
      ptr7_U64_21 = local_78;
      if (0xfff < uVal_15) {
        ptr7_U64_21 = (uint64_t *******)local_78[-1];
        if (0x1f < (uint64_t)((int64_t)local_78 + (-8 - (int64_t)ptr7_U64_21)))
        goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(ptr7_U64_21,uVal_15);
    }
    uVal_26 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,uStack_a0));
    if (0xf < uVal_26) {
      lVal_8 = CONCAT71(local_b8._1_7_,(uint8_t)local_b8);
      uVal_15 = uVal_26 + 1;
      lVal_16 = lVal_8;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) goto LAB_18032f352;
        uVal_15 = uVal_26 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    local_f0 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_f0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_128);
    }
    pU64_23 = (uint8_t *)((int64_t)local_80 + 0x16d);
    uVal_5 = *pU64_23;
    local_68 = _UNK_1806c6ef0;
    uStack_66 = _UNK_1806c6ef2;
    uStack_62 = (uint16_t)_UNK_1806c6ef6;
    uStack_60 = (uint16_t)((uint)_UNK_1806c6ef6 >> 0x10);
    local_78 = _DAT_1806c6ee0;
    uStack_70 = _UNK_1806c6ee8;
    uStack_6e = _DAT_1806c6eea;
    uStack_6a = _UNK_1806c6eee;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf5f0) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0xf5f0) = 1;
      func_0x1800d9840(lVal_16 + 0xf5d5,&local_78);
      func_0x180673140(&LAB_1803679c0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf5d5);
    func_0x18036ff00(fnPtr_1);
    local_b8._0_1_ = 0;
    local_b8._1_7_ = 0;
    uStack_b0 = 0;
    uStack_ae = 0;
    uStack_aa = 0;
    sz_14 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_14) {
      uVal_26 = 0xf;
      if (0xf < sz_14) {
        uVal_15 = sz_14 | 0xf;
        uVal_26 = 0x16;
        if (0x16 < uVal_15) {
          uVal_26 = uVal_15;
        }
        if (uVal_15 < 0xfff) {
          local_4c = 1;
          pU64_24 = (uint8_t *)func_0x180672de0(uVal_26 + 1);
        }
        else {
          local_4c = 1;
          lVal_16 = func_0x180672de0(uVal_26 + 0x28);
          pU64_24 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_24 + 0xfffffffffffffff8) = lVal_16;
        }
        local_b8._0_1_ = SUB81(pU64_24,0);
        local_b8._1_7_ = (undefined7)((uint64_t)pU64_24 >> 8);
      }
      uStack_a8 = (uint16_t)sz_14;
      uStack_a6 = (uint16_t)(sz_14 >> 0x10);
      uStack_a4 = (uint16_t)(sz_14 >> 0x20);
      uStack_a2 = (uint16_t)(sz_14 >> 0x30);
      uStack_a0 = (uint16_t)uVal_26;
      uStack_9e = (uint16_t)(uVal_26 >> 0x10);
      uStack_9c = (uint32_t)(uVal_26 >> 0x20);
      func_0x1806aa960(pU64_24,fnPtr_1,sz_14);
      pU64_24[sz_14] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf608) == '\0') {
        lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_16 + 0xf608) = 1;
        *(uint64_t *)(lVal_16 + 0xf5f8) = 0xcb49f249689c9364;
        *(uint32_t *)(lVal_16 + 0xf600) = 0x6b929354;
        *(uint16_t *)(lVal_16 + 0xf604) = 0x169;
        func_0x180673140(&LAB_1803679f0);
      }
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_3 = (uint64_t *)(lVal_16 + 0xf5f8);
      if (*(char *)(lVal_16 + 0xf605) == '\x01') {
        *pU64_3 = *pU64_3 ^ 0xeb279b691ff3fb37;
        *(uint *)(lVal_16 + 0xf600) = *(uint *)(lVal_16 + 0xf600) ^ 0x1ff3fb37;
        *(byte *)(lVal_16 + 0xf604) = *(byte *)(lVal_16 + 0xf604) ^ 0x69;
        *(uint8_t *)(lVal_16 + 0xf605) = 0;
      }
      local_78 = (uint64_t *******)0x0;
      uStack_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      sz_14 = strlen((char *)pU64_3);
      if (-1 < (int64_t)sz_14) {
        uVal_26 = 0xf;
        if (0xf < sz_14) {
          uVal_15 = sz_14 | 0xf;
          uVal_26 = 0x16;
          if (0x16 < uVal_15) {
            uVal_26 = uVal_15;
          }
          if (uVal_15 < 0xfff) {
            local_56 = 1;
            ptr7_U64_25 = (uint64_t *******)func_0x180672de0(uVal_26 + 1);
            local_78 = ptr7_U64_25;
          }
          else {
            local_56 = 1;
            ptr6_U64_17 = (uint64_t ******)func_0x180672de0(uVal_26 + 0x28);
            ptr7_U64_25 =
                 (uint64_t *******)((int64_t)ptr6_U64_17 + 0x27U & 0xffffffffffffffe0);
            ptr7_U64_25[-1] = ptr6_U64_17;
            local_78 = ptr7_U64_25;
          }
        }
        local_68 = (uint16_t)sz_14;
        uStack_66 = (uint32_t)(sz_14 >> 0x10);
        uStack_62 = (uint16_t)(sz_14 >> 0x30);
        uStack_60 = (uint16_t)uVal_26;
        uStack_5e = (undefined6)(uVal_26 >> 0x10);
        func_0x1806aa960(ptr7_U64_25,pU64_3,sz_14);
        *(uint8_t *)((int64_t)ptr7_U64_25 + sz_14) = 0;
        func_0x1801ccd70(local_80,&local_78,&local_b8,pU64_23,uVal_5,local_128,0);
        uVal_26 = CONCAT62(uStack_5e,uStack_60);
        if (0xf < uVal_26) {
          uVal_15 = uVal_26 + 1;
          ptr7_U64_25 = local_78;
          if (0xfff < uVal_15) {
            ptr7_U64_25 = (uint64_t *******)local_78[-1];
            if (0x1f < (uint64_t)((int64_t)local_78 + (-8 - (int64_t)ptr7_U64_25)))
            goto LAB_18032f352;
            uVal_15 = uVal_26 + 0x28;
          }
          thunk_FUN_180695dd0(ptr7_U64_25,uVal_15);
        }
        uVal_26 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,uStack_a0));
        if (0xf < uVal_26) {
          lVal_8 = CONCAT71(local_b8._1_7_,(uint8_t)local_b8);
          uVal_15 = uVal_26 + 1;
          lVal_16 = lVal_8;
          if (0xfff < uVal_15) {
            lVal_16 = *(int64_t *)(lVal_8 + -8);
            if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_16)) {
LAB_18032f352:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_15 = uVal_26 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_16,uVal_15);
        }
        return local_80;
      }
      goto LAB_18032f421;
    }
  }
  local_4c = 1;
  func_0x18007ba70();
LAB_18032f421:
  local_56 = 1;
  func_0x18007ba70();
  fnPtr_9 = (func_ptr_t )swi(3);
  pU64_19 = (uint64_t *)(*fnPtr_9)();
  return pU64_19;
}

// Unwind@18032f430
void Unwind_18032f430(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@18032f480
void Unwind_18032f480(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf504) = 0;
  *(uint8_t *)(param_2 + 0x29f) = 1;
  return;
}

// Unwind@18032f4d0
void Unwind_18032f4d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xb8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@18032f520
void Unwind_18032f520(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf52c) = 0;
  *(uint8_t *)(param_2 + 0x29e) = 1;
  return;
}

// Unwind@18032f570
void Unwind_18032f570(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xf8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@18032f5c0
void Unwind_18032f5c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf554) = 0;
  *(uint8_t *)(param_2 + 0x29d) = 1;
  return;
}

// Unwind@18032f610
void Unwind_18032f610(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x138);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x100));
    *(uint64_t *)(param_2 + 0x138) = 0;
  }
  return;
}

// Unwind@18032f670
void Unwind_18032f670(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x178);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x140));
    *(uint64_t *)(param_2 + 0x178) = 0;
  }
  return;
}

// Unwind@18032f6d0
void Unwind_18032f6d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1b8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x180));
    *(uint64_t *)(param_2 + 0x1b8) = 0;
  }
  return;
}

// Unwind@18032f730
void Unwind_18032f730(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1f8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c0));
    *(uint64_t *)(param_2 + 0x1f8) = 0;
  }
  return;
}

// Unwind@18032f790
void Unwind_18032f790(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf5f0) = 0;
  *(uint8_t *)(param_2 + 0x29c) = 1;
  return;
}

// Unwind@18032f7e0
void Unwind_18032f7e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18032f820
void Unwind_18032f820(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@18032f860
void Unwind_18032f860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18032f8a0
void Unwind_18032f8a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x29b) = 0;
  return;
}

// Unwind@18032f8e0
void Unwind_18032f8e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x29b);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x29f) = uVal_1;
  return;
}

// Unwind@18032f930
void Unwind_18032f930(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x29f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@18032f990
void Unwind_18032f990(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x29a) = 0;
  return;
}

// Unwind@18032f9d0
void Unwind_18032f9d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x29a);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x29e) = uVal_1;
  return;
}

// Unwind@18032fa20
void Unwind_18032fa20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x29e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@18032fa80
void Unwind_18032fa80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x299) = 0;
  return;
}

// Unwind@18032fac0
void Unwind_18032fac0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x299);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x29d) = uVal_1;
  return;
}

// Unwind@18032fb10
void Unwind_18032fb10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x29d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@18032fb70
void Unwind_18032fb70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@18032fbb0
void Unwind_18032fbb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@18032fbf0
void Unwind_18032fbf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18032fc30
void Unwind_18032fc30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x298) = 0;
  return;
}

// Unwind@18032fc70
void Unwind_18032fc70(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x298);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x297) = uVal_1;
  return;
}

// Unwind@18032fcc0
void Unwind_18032fcc0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x297) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x138), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x100));
    *(uint64_t *)(param_2 + 0x138) = 0;
  }
  return;
}

// Unwind@18032fd20
void Unwind_18032fd20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x296) = 0;
  return;
}

// Unwind@18032fd60
void Unwind_18032fd60(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x296);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x295) = uVal_1;
  return;
}

// Unwind@18032fdb0
void Unwind_18032fdb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x295) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x178), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x140));
    *(uint64_t *)(param_2 + 0x178) = 0;
  }
  return;
}

// Unwind@18032fe10
void Unwind_18032fe10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x294) = 0;
  return;
}

// Unwind@18032fe50
void Unwind_18032fe50(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x294);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x293) = uVal_1;
  return;
}

// Unwind@18032fea0
void Unwind_18032fea0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x293) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1b8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x180));
    *(uint64_t *)(param_2 + 0x1b8) = 0;
  }
  return;
}

// Unwind@18032ff00
void Unwind_18032ff00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x292) = 0;
  return;
}

// Unwind@18032ff40
void Unwind_18032ff40(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x292);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x29c) = uVal_1;
  return;
}

// Unwind@18032ff90
void Unwind_18032ff90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x29c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1f8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c0));
    *(uint64_t *)(param_2 + 0x1f8) = 0;
  }
  return;
}

// Unwind@18032fff0
void Unwind_18032fff0(uint64_t param_1,int64_t param_2)
{
  func_0x1800822d0(*(uint64_t *)(param_2 + 0x228));
  func_0x180154cc0(*(uint64_t *)(param_2 + 0x268));
  return;
}

// Unwind@180330040
void Unwind_180330040(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf49c) = 0;
  return;
}

// Unwind@180330090
void Unwind_180330090(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf4d4) = 0;
  return;
}

// Unwind@180330390
void Unwind_180330390(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf638) = 0;
  return;
}

// Unwind@1803309a0
void Unwind_1803309a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@180330a00
void Unwind_180330a00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@180330a60
void Unwind_180330a60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180330ac0
void Unwind_180330ac0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf650) = 0;
  return;
}

// Unwind@180330b30
void Unwind_180330b30(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf678) = 0;
  return;
}

// Unwind@180330de0
void Unwind_180330de0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x4f) != '\0') {
    func_0x180001e70(param_2 + 0x20);
  }
  return;
}

// Unwind@1803317e0
void Unwind_1803317e0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  pLong_3 = *(int64_t **)(param_2 + 0xe8);
  do {
    if ((int64_t *)(param_2 + 0xa0) == pLong_3) {
      return;
    }
    uVal_1 = pLong_3[-1];
    if (0xf < uVal_1) {
      lVal_2 = pLong_3[-4];
      uVal_4 = uVal_1 + 1;
      lVal_5 = lVal_2;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(lVal_2 + -8);
        if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_5)) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_4 = uVal_1 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    pLong_3[-2] = 0;
    pLong_3[-1] = 0xf;
    *(uint8_t *)(pLong_3 + -4) = 0;
    pLong_3 = pLong_3 + -4;
  } while( true );
}

// Unwind@180331880
void Unwind_180331880(uint64_t param_1,int64_t param_2)
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
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_180331959;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0xd0) = 0;
  *(uint64_t *)(param_2 + 0xd8) = 0xf;
  *(uint8_t *)(param_2 + 0xc0) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0xb8);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0xa0);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_180331959:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0xb0) = 0;
  *(uint64_t *)(param_2 + 0xb8) = 0xf;
  *(uint8_t *)(param_2 + 0xa0) = 0;
  return;
}

// Unwind@180331960
void Unwind_180331960(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1803319a0
void Unwind_1803319a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// func_0x1803319e0
uint64_t func_0x1803319e0(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint32_t param_4, int64_t **param_5)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  int64_t *pLong_4;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint32_t local_58;
  int64_t **local_48;
  int64_t *local_40;
  uint64_t local_38;
  uint32_t *local_30;
  uint64_t *local_28;
  uint64_t local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  local_40 = param_5[2];
  local_48 = param_5;
  if (&DAT_0000000f < param_5[3]) {
    local_48 = (int64_t **)*param_5;
  }
  local_38 = 0xd9d;
  local_30 = &local_68;
  local_28 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_28 = (uint64_t *)*param_2;
  }
  local_20 = param_2[2];
  local_58 = param_4;
  func_0x18063ff10(param_1,&local_28,&local_38);
  pLong_1 = param_5[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *param_5;
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

// Unwind@180331ab0
void Unwind_180331ab0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xb0));
  return;
}

// func_0x180331ad0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180331ad0(uint64_t *param_1)
{
  uint *pU64_1;
  uint64_t *pU64_2;
  char *fnPtr_3;
  byte *pU8_4;
  uint8_t (*_Str)[16];
  uint8_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  func_ptr_t fnPtr_8;
  short sz_9;
  short sz_10;
  short sz_11;
  short sz_12;
  short sz_13;
  short sz_14;
  short sz_15;
  short sz_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  int64_t lVal_19;
  size_t sz_20;
  uint64_t uVal_21;
  int64_t lVal_22;
  uint64_t ***ptr3_U64_23;
  int64_t lVal_24;
  uint64_t uVal_25;
  uint64_t uVal_26;
  uint64_t *pU64_27;
  int64_t lVal_28;
  uint64_t ****ptr4_U64_29;
  uint64_t ****ptr4_U64_30;
  uint8_t *pU64_31;
  int64_t *pLong_32;
  uint64_t uVal_33;
  uint64_t *pU64_34;
  int64_t lVal_35;
  uint uVal_37;
  uint uVal_38;
  uint uVal_39;
  uint uVal_41;
  uint uVal_42;
  uint8_t auArr_36 [16];
  int64_t lVal_40;
  uint uVal_43;
  int64_t lVal_44;
  int64_t lVal_45;
  int64_t lVal_46;
  int64_t lVal_47;
  int64_t lVal_48;
  int64_t lVal_49;
  uint64_t uVal_50;
  uint64_t uVal_52;
  uint8_t auArr_51 [16];
  uint64_t uVal_53;
  uint64_t uVal_54;
  uint64_t uVal_55;
  uint64_t uVal_57;
  uint8_t auArr_56 [16];
  uint64_t uVal_58;
  uint64_t uVal_61;
  uint8_t auArr_59 [16];
  uint8_t auArr_60 [16];
  uint8_t auArr_62 [16];
  uint8_t auArr_63 [16];
  uint8_t auArr_64 [16];
  uint8_t auArr_65 [16];
  uint64_t in_stack_fffffffffffffba8;
  uint32_t uVal_66;
  uint8_t ***ptr3_U64_67;
  uint32_t uVal_68;
  uint in_stack_fffffffffffffbb8;
  uint uVal_69;
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
  uint64_t local_328;
  uint64_t uStack_320;
  uint64_t local_318;
  uint64_t uStack_310;
  uint8_t local_308 [56];
  uint64_t local_2d0;
  uint8_t local_2c8 [56];
  uint64_t local_290;
  uint8_t local_288 [56];
  uint64_t local_250;
  uint8_t local_248 [56];
  uint64_t local_210;
  uint8_t local_208 [56];
  uint64_t local_1d0;
  uint64_t local_1c8;
  uint64_t uStack_1c0;
  uint8_t local_1b8;
  uint64_t *local_1b0;
  uint8_t local_1a8 [16];
  uint8_t local_198 [24];
  int64_t *local_180;
  uint64_t ****local_178;
  undefined6 uStack_170;
  uint8_t uStack_16a;
  uint8_t uStack_169;
  uint8_t uStack_168;
  undefined5 uStack_167;
  uint8_t uStack_162;
  uint8_t uStack_161;
  uint64_t uStack_160;
  uint8_t local_158 [16];
  uint32_t local_148;
  uint32_t uStack_144;
  uint32_t uStack_140;
  uint32_t uStack_13c;
  uint32_t uStack_138;
  uint32_t uStack_134;
  uint32_t uStack_130;
  uint32_t uStack_12c;
  uint64_t local_128;
  int64_t *local_120;
  uint64_t ****local_118;
  uint8_t uStack_110;
  uint32_t uStack_10f;
  uint8_t uStack_10b;
  uint16_t uStack_10a;
  uint8_t uStack_108;
  uint32_t uStack_107;
  uint8_t uStack_103;
  uint16_t uStack_102;
  uint8_t uStack_100;
  undefined7 uStack_ff;
  uint64_t *local_f0;
  uint8_t local_e3;
  uint8_t local_e2;
  uint8_t local_e1;
  uint8_t local_e0;
  uint8_t local_df;
  uint8_t local_de;
  uint8_t local_dd;
  uint8_t local_dc;
  uint8_t local_db;
  uint8_t local_da;
  uint8_t local_d9;
  uint8_t local_d8;
  uint8_t local_d7;
  uint8_t local_d6;
  uint8_t local_d5;
  uint8_t local_d4;
  uint8_t local_d3;
  uint8_t local_d2;
  uint8_t local_d1;
  uint64_t local_d0;
  
  local_d0 = 0xfffffffffffffffe;
  uStack_138 = _DAT_1806c6f67;
  uStack_134 = _UNK_1806c6f6b;
  uStack_130 = _UNK_1806c6f6f;
  uStack_12c = _UNK_1806c6f73;
  local_148 = _DAT_1806c6f57;
  uStack_144 = _UNK_1806c6f5b;
  uStack_140 = _UNK_1806c6f5f;
  uStack_13c = _UNK_1806c6f63;
  local_158._8_8_ = _UNK_1806c6f4f;
  local_158._0_8_ = _DAT_1806c6f47;
  local_128 = 0x47cea3cab3c7b5e6;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xf6fc) == '\0') {
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_22 + 0xf6fc) = 1;
    func_0x18012b940(lVal_22 + 0xf6c1,local_158);
    func_0x180673140(&LAB_180367b70);
  }
  uVal_43 = _UNK_1806b2d7c;
  uVal_42 = _UNK_1806b2d78;
  uVal_39 = _UNK_1806b2d74;
  uVal_69 = _DAT_1806b2d70;
  lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_22 + 0xf6c1);
  if (*(char *)(lVal_22 + 0xf6f9) == '\x01') {
    uVal_37 = *(uint *)(lVal_22 + 0xf6c5) ^ _UNK_1806b2d74;
    uVal_38 = *(uint *)(lVal_22 + 0xf6c9) ^ _UNK_1806b2d78;
    uVal_41 = *(uint *)(lVal_22 + 0xf6cd) ^ _UNK_1806b2d7c;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2d70;
    *(uint *)(lVal_22 + 0xf6c5) = uVal_37;
    *(uint *)(lVal_22 + 0xf6c9) = uVal_38;
    *(uint *)(lVal_22 + 0xf6cd) = uVal_41;
    *(uint *)(lVal_22 + 0xf6d1) = *(uint *)(lVal_22 + 0xf6d1) ^ uVal_69;
    *(uint *)(lVal_22 + 0xf6d5) = *(uint *)(lVal_22 + 0xf6d5) ^ uVal_39;
    *(uint *)(lVal_22 + 0xf6d9) = *(uint *)(lVal_22 + 0xf6d9) ^ uVal_42;
    *(uint *)(lVal_22 + 0xf6dd) = *(uint *)(lVal_22 + 0xf6dd) ^ uVal_43;
    *(uint *)(lVal_22 + 0xf6e1) = *(uint *)(lVal_22 + 0xf6e1) ^ uVal_69;
    *(uint *)(lVal_22 + 0xf6e5) = *(uint *)(lVal_22 + 0xf6e5) ^ uVal_39;
    *(uint *)(lVal_22 + 0xf6e9) = *(uint *)(lVal_22 + 0xf6e9) ^ uVal_42;
    *(uint *)(lVal_22 + 0xf6ed) = *(uint *)(lVal_22 + 0xf6ed) ^ uVal_43;
    *(uint64_t *)(lVal_22 + 0xf6f1) = *(uint64_t *)(lVal_22 + 0xf6f1) ^ SUB168(_DAT_1806b5c20,0);
    *(uint8_t *)(lVal_22 + 0xf6f9) = 0;
  }
  local_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  local_158 = (uint8_t  [16])0x0;
  sz_20 = strlen((char *)pU64_1);
  if ((int64_t)sz_20 < 0) {
    func_0x18007ba70();
LAB_180334572:
    func_0x18007ba70();
LAB_180334578:
    local_d2 = 1;
    func_0x18007ba70();
LAB_180334585:
    local_d1 = 1;
    func_0x18007ba70();
LAB_180334592:
    local_d4 = 1;
    func_0x18007ba70();
LAB_18033459f:
    local_d3 = 1;
    func_0x18007ba70();
LAB_1803345ac:
    local_da = 1;
    func_0x18007ba70();
LAB_1803345b9:
    local_d5 = 1;
    func_0x18007ba70();
LAB_1803345c6:
    local_d6 = 1;
    func_0x18007ba70();
LAB_1803345d3:
    local_db = 1;
    func_0x18007ba70();
LAB_1803345e0:
    local_dd = 1;
    func_0x18007ba70();
LAB_1803345ed:
    local_dc = 1;
    func_0x18007ba70();
LAB_1803345fa:
    local_d7 = 1;
    func_0x18007ba70();
LAB_180334607:
    local_df = 1;
    func_0x18007ba70();
LAB_180334614:
    local_de = 1;
    func_0x18007ba70();
LAB_180334621:
    local_e1 = 1;
    func_0x18007ba70();
LAB_18033462e:
    local_e0 = 1;
    func_0x18007ba70();
LAB_18033463b:
    local_d8 = 1;
    func_0x18007ba70();
LAB_180334648:
    local_e2 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_20 < 0x10) {
      pU64_31 = local_158;
      uVal_33 = 0xf;
    }
    else {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_31 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
      }
      else {
        lVal_22 = func_0x180672de0(uVal_33 + 0x28);
        pU64_31 = (uint8_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_31 + -8) = lVal_22;
      }
      local_158._0_8_ = pU64_31;
    }
    local_148 = (uint32_t)sz_20;
    uStack_144 = (uint32_t)(sz_20 >> 0x20);
    uStack_140 = (uint32_t)uVal_33;
    uStack_13c = (uint32_t)(uVal_33 >> 0x20);
    func_0x1806aa960(pU64_31,pU64_1,sz_20);
    pU64_31[sz_20] = 0;
    pU64_31 = local_158;
    func_0x1801c2ba0(param_1,0,0,pU64_31);
    uVal_33 = CONCAT44(uStack_13c,uStack_140);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      lVal_22 = local_158._0_8_;
      if (0xfff < uVal_21) {
        lVal_22 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_22)) goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_22,uVal_21);
    }
    *param_1 = &PTR_LAB_1806c5020;
    *(uint8_t *)(param_1 + 0x10) = 0;
    local_180 = param_1 + 0x12;
    *(uint8_t (*)[16])(param_1 + 0x12) = (uint8_t  [16])0x0;
    param_1[0x14] = 0;
    param_1[0x15] = 0xf;
    pU64_27 = param_1 + 0x16;
    local_f0 = param_1;
    func_0x180076320(pU64_27);
    pU64_34 = local_f0;
    *(uint16_t *)(local_f0 + 0x25) = 0x100;
    *(uint8_t *)((int64_t)local_f0 + 0x12a) = 0;
    *(uint32_t *)((int64_t)local_f0 + 300) = 0x41800000;
    *(uint8_t *)(local_f0 + 0x26) = 0;
    uVal_6 = _UNK_1806c3a1c;
    uVal_68 = _UNK_1806c3a18;
    uVal_66 = _UNK_1806c3a14;
    *(uint32_t *)((int64_t)local_f0 + 0x134) = _DAT_1806c3a10;
    *(uint32_t *)(local_f0 + 0x27) = uVal_66;
    *(uint32_t *)((int64_t)local_f0 + 0x13c) = uVal_68;
    *(uint32_t *)(local_f0 + 0x28) = uVal_6;
    *(uint8_t *)((int64_t)local_f0 + 0x144) = 0;
    uVal_6 = _UNK_1806be66c;
    uVal_68 = _UNK_1806be668;
    uVal_66 = _UNK_1806be664;
    *(uint32_t *)(local_f0 + 0x29) = _DAT_1806be660;
    *(uint32_t *)((int64_t)local_f0 + 0x14c) = uVal_66;
    *(uint32_t *)(local_f0 + 0x2a) = uVal_68;
    *(uint32_t *)((int64_t)local_f0 + 0x154) = uVal_6;
    *(uint16_t *)(local_f0 + 0x2b) = 0;
    *(uint8_t *)((int64_t)local_f0 + 0x15a) = 0;
    *(uint32_t *)((int64_t)local_f0 + 0x15c) = 0x10;
    uVal_25 = _UNK_1806b2888;
    local_f0[0x2c] = _DAT_1806b2880;
    local_f0[0x2d] = uVal_25;
    local_1b0 = pU64_27;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf710) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf710) = 1;
      *(uint8_t *)(lVal_22 + 0xf70e) = 1;
      *(uint64_t *)(lVal_22 + 0xf700) = 0xf840f36c849a83b6;
      *(uint32_t *)(lVal_22 + 0xf708) = 0x9985dfa7;
      *(uint16_t *)(lVal_22 + 0xf70c) = 0x9b78;
      func_0x180673140(&LAB_180367bb0);
    }
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_22 + 0xf700);
    if (*(char *)(lVal_22 + 0xf70e) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x91219b1ff7f5f1d5;
      *(uint *)(lVal_22 + 0xf708) = *(uint *)(lVal_22 + 0xf708) ^ 0xf7f5f1d5;
      *(byte *)(lVal_22 + 0xf70c) = *(byte *)(lVal_22 + 0xf70c) ^ 0x1f;
      *(byte *)(lVal_22 + 0xf70d) = *(byte *)(lVal_22 + 0xf70d) ^ 0x9b;
      *(uint8_t *)(lVal_22 + 0xf70e) = 0;
    }
    local_158 = (uint8_t  [16])0x0;
    sz_20 = strlen((char *)pU64_2);
    if ((int64_t)sz_20 < 0) goto LAB_180334572;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_31 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
      }
      else {
        lVal_22 = func_0x180672de0(uVal_33 + 0x28);
        pU64_31 = (uint8_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_31 + -8) = lVal_22;
      }
      local_158._0_8_ = pU64_31;
      pU64_34 = local_f0;
    }
    local_148 = (uint32_t)sz_20;
    uStack_144 = (uint32_t)(sz_20 >> 0x20);
    uStack_140 = (uint32_t)uVal_33;
    uStack_13c = (uint32_t)(uVal_33 >> 0x20);
    func_0x1806aa960(pU64_31,pU64_2,sz_20);
    pU64_31[sz_20] = 0;
    uVal_33 = pU64_34[0x15];
    if (0xf < uVal_33) {
      lVal_22 = *local_180;
      uVal_21 = uVal_33 + 1;
      lVal_28 = lVal_22;
      if (0xfff < uVal_21) {
        lVal_28 = *(int64_t *)(lVal_22 + -8);
        if (0x1f < (uint64_t)((lVal_22 + -8) - lVal_28)) goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_28,uVal_21);
    }
    local_180[2] = CONCAT44(uStack_144,local_148);
    local_180[3] = CONCAT44(uStack_13c,uStack_140);
    *local_180 = local_158._0_8_;
    local_180[1] = local_158._8_8_;
    local_2d0 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_2d0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_308);
      pU64_34 = local_f0;
    }
    uVal_5 = *(uint8_t *)(pU64_34 + 0x25);
    uStack_138 = _UNK_1806c6f9f;
    uStack_134 = _UNK_1806c6fa3;
    uStack_130 = _UNK_1806c6fa7;
    local_148 = _DAT_1806c6f8f;
    uStack_144 = _UNK_1806c6f93;
    uStack_140 = _UNK_1806c6f97;
    uStack_13c = _DAT_1806c6f9b;
    local_158._8_8_ = _UNK_1806c6f87;
    local_158._0_8_ = _DAT_1806c6f7f;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf740) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf740) = 1;
      func_0x1801b1b20(lVal_22 + 0xf711,local_158);
      func_0x180673140(&LAB_180367be0);
    }
    uVal_43 = _UNK_1806ae4dc;
    uVal_42 = _UNK_1806ae4d8;
    uVal_39 = _UNK_1806ae4d4;
    uVal_69 = _DAT_1806ae4d0;
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_22 + 0xf711);
    if (*(char *)(lVal_22 + 0xf73d) == '\x01') {
      uVal_37 = *(uint *)(lVal_22 + 0xf715) ^ _UNK_1806ae4d4;
      uVal_38 = *(uint *)(lVal_22 + 0xf719) ^ _UNK_1806ae4d8;
      uVal_41 = *(uint *)(lVal_22 + 0xf71d) ^ _UNK_1806ae4dc;
      *pU64_1 = *pU64_1 ^ _DAT_1806ae4d0;
      *(uint *)(lVal_22 + 0xf715) = uVal_37;
      *(uint *)(lVal_22 + 0xf719) = uVal_38;
      *(uint *)(lVal_22 + 0xf71d) = uVal_41;
      *(uint *)(lVal_22 + 0xf721) = *(uint *)(lVal_22 + 0xf721) ^ uVal_69;
      *(uint *)(lVal_22 + 0xf725) = *(uint *)(lVal_22 + 0xf725) ^ uVal_39;
      *(uint *)(lVal_22 + 0xf729) = *(uint *)(lVal_22 + 0xf729) ^ uVal_42;
      *(uint *)(lVal_22 + 0xf72d) = *(uint *)(lVal_22 + 0xf72d) ^ uVal_43;
      *(uint64_t *)(lVal_22 + 0xf731) = *(uint64_t *)(lVal_22 + 0xf731) ^ SUB168(_DAT_1806b54d0,0);
      *(byte *)(lVal_22 + 0xf739) = *(byte *)(lVal_22 + 0xf739) ^ 0xc5;
      *(byte *)(lVal_22 + 0xf73a) = *(byte *)(lVal_22 + 0xf73a) ^ 0x73;
      *(byte *)(lVal_22 + 0xf73b) = *(byte *)(lVal_22 + 0xf73b) ^ 0xd5;
      *(byte *)(lVal_22 + 0xf73c) = *(byte *)(lVal_22 + 0xf73c) ^ 0xa1;
      *(uint8_t *)(lVal_22 + 0xf73d) = 0;
    }
    uStack_108 = 0;
    uStack_107 = 0;
    uStack_103 = 0;
    uStack_102 = 0;
    uStack_100 = 0;
    uStack_ff = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_10f = 0;
    uStack_10b = 0;
    uStack_10a = 0;
    sz_20 = strlen((char *)pU64_1);
    if ((int64_t)sz_20 < 0) goto LAB_180334578;
    if (sz_20 < 0x10) {
      ptr4_U64_30 = &local_118;
      uVal_33 = 0xf;
    }
    else {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_d2 = 1;
        ptr4_U64_30 = (uint64_t ****)func_0x180672de0(uVal_33 + 1);
        local_118 = ptr4_U64_30;
      }
      else {
        local_d2 = 1;
        ptr3_U64_23 = (uint64_t ***)func_0x180672de0(uVal_33 + 0x28);
        ptr4_U64_30 = (uint64_t ****)((int64_t)ptr3_U64_23 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_30[-1] = ptr3_U64_23;
        local_118 = ptr4_U64_30;
      }
    }
    uStack_108 = (uint8_t)sz_20;
    uStack_107 = (uint32_t)(sz_20 >> 8);
    uStack_103 = (uint8_t)(sz_20 >> 0x28);
    uStack_102 = (uint16_t)(sz_20 >> 0x30);
    uStack_100 = (uint8_t)uVal_33;
    uStack_ff = (undefined7)(uVal_33 >> 8);
    func_0x1806aa960(ptr4_U64_30,pU64_1,sz_20);
    *(uint8_t *)((int64_t)ptr4_U64_30 + sz_20) = 0;
    local_178 = _DAT_1806c6fab;
    uStack_170 = (undefined6)_UNK_1806c6fb3;
    uStack_16a = (uint8_t)((uint64_t)_UNK_1806c6fb3 >> 0x30);
    uStack_169 = 0x80;
    uStack_168 = 0xb6;
    uStack_167 = 0xcde8c0bd00;
    uStack_162 = 199;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf75c) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf75c) = 1;
      func_0x18007d3c0(lVal_22 + 0xf741,&local_178);
      func_0x180673140(&LAB_180367c10);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf741);
    func_0x1801bf0d0(fnPtr_3);
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_20 = strlen(fnPtr_3);
    if ((int64_t)sz_20 < 0) goto LAB_180334585;
    if (sz_20 < 0x10) {
      pU64_31 = local_158;
      uVal_33 = 0xf;
    }
    else {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_d1 = 1;
        pU64_31 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
      }
      else {
        local_d1 = 1;
        lVal_22 = func_0x180672de0(uVal_33 + 0x28);
        pU64_31 = (uint8_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_31 + -8) = lVal_22;
      }
      local_158._0_8_ = pU64_31;
    }
    local_148 = (uint32_t)sz_20;
    uStack_144 = (uint32_t)(sz_20 >> 0x20);
    uStack_140 = (uint32_t)uVal_33;
    uStack_13c = (uint32_t)(uVal_33 >> 0x20);
    func_0x1806aa960(pU64_31,fnPtr_3,sz_20);
    pU64_31[sz_20] = 0;
    uVal_25 = CONCAT71((int7)((uint64_t)in_stack_fffffffffffffba8 >> 8),uVal_5);
    in_stack_fffffffffffffbb8 = in_stack_fffffffffffffbb8 & 0xffffff00;
    pU64_31 = local_158;
    ptr4_U64_30 = &local_118;
    func_0x1801ccd70(local_f0,pU64_31,ptr4_U64_30,pU64_34 + 0x25,uVal_25,local_308,
                  in_stack_fffffffffffffbb8);
    uVal_33 = CONCAT44(uStack_13c,uStack_140);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      lVal_22 = local_158._0_8_;
      if (0xfff < uVal_21) {
        lVal_22 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_22)) goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_22,uVal_21);
    }
    pU64_27 = local_f0;
    uVal_33 = CONCAT71(uStack_ff,uStack_100);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      ptr4_U64_29 = local_118;
      if (0xfff < uVal_21) {
        ptr4_U64_29 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_29)))
        goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_29,uVal_21);
    }
    local_290 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_290 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_2c8);
      pU64_27 = local_f0;
    }
    uVal_5 = *(uint8_t *)((int64_t)pU64_27 + 0x129);
    local_148 = _DAT_1806c6fd2;
    uStack_144 = _UNK_1806c6fd6;
    uStack_140 = _UNK_1806c6fda;
    local_158._8_8_ = _UNK_1806c6fca;
    local_158._0_8_ = _DAT_1806c6fc2;
    uStack_13c = CONCAT31(0xfa8644,(char)_UNK_1806c6fde);
    uStack_138 = 0x37c0d05d;
    uStack_134 = CONCAT31(uStack_134._1_3_,0x39);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf784) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf784) = 1;
      func_0x1801b1390(lVal_22 + 0xf75d,local_158);
      func_0x180673140(&LAB_180367c40);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf75d);
    func_0x18036ffb0(fnPtr_3);
    uStack_108 = 0;
    uStack_107 = 0;
    uStack_103 = 0;
    uStack_102 = 0;
    uStack_100 = 0;
    uStack_ff = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_10f = 0;
    uStack_10b = 0;
    uStack_10a = 0;
    sz_20 = strlen(fnPtr_3);
    if ((int64_t)sz_20 < 0) goto LAB_180334592;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_d4 = 1;
        ptr4_U64_30 = (uint64_t ****)func_0x180672de0(uVal_33 + 1);
        local_118 = ptr4_U64_30;
      }
      else {
        local_d4 = 1;
        ptr3_U64_23 = (uint64_t ***)func_0x180672de0(uVal_33 + 0x28);
        ptr4_U64_30 = (uint64_t ****)((int64_t)ptr3_U64_23 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_30[-1] = ptr3_U64_23;
        local_118 = ptr4_U64_30;
      }
    }
    uStack_108 = (uint8_t)sz_20;
    uStack_107 = (uint32_t)(sz_20 >> 8);
    uStack_103 = (uint8_t)(sz_20 >> 0x28);
    uStack_102 = (uint16_t)(sz_20 >> 0x30);
    uStack_100 = (uint8_t)uVal_33;
    uStack_ff = (undefined7)(uVal_33 >> 8);
    func_0x1806aa960(ptr4_U64_30,fnPtr_3,sz_20);
    *(uint8_t *)((int64_t)ptr4_U64_30 + sz_20) = 0;
    local_178 = _DAT_1806c6fe7;
    uStack_170 = (undefined6)_UNK_1806c6fef;
    uStack_16a = (uint8_t)((uint64_t)_UNK_1806c6fef >> 0x30);
    uStack_169 = (uint8_t)((uint64_t)_UNK_1806c6fef >> 0x38);
    uStack_168 = 0x35;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf798) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf798) = 1;
      func_0x18007d2b0(lVal_22 + 0xf785,&local_178);
      func_0x180673140(&LAB_180367c70);
    }
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_22 + 0xf785);
    if (*(char *)(lVal_22 + 0xf796) == '\x01') {
      uVal_69 = *(uint *)(lVal_22 + 0xf789) ^ _UNK_1806b2cb4;
      uVal_39 = *(uint *)(lVal_22 + 0xf78d) ^ _UNK_1806b2cb8;
      uVal_42 = *(uint *)(lVal_22 + 0xf791) ^ _UNK_1806b2cbc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2cb0;
      *(uint *)(lVal_22 + 0xf789) = uVal_69;
      *(uint *)(lVal_22 + 0xf78d) = uVal_39;
      *(uint *)(lVal_22 + 0xf791) = uVal_42;
      *(byte *)(lVal_22 + 0xf795) = *(byte *)(lVal_22 + 0xf795) ^ 0x35;
      *(uint8_t *)(lVal_22 + 0xf796) = 0;
    }
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_20 = strlen((char *)pU64_1);
    if ((int64_t)sz_20 < 0) goto LAB_18033459f;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_d3 = 1;
        pU64_31 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
      }
      else {
        local_d3 = 1;
        lVal_22 = func_0x180672de0(uVal_33 + 0x28);
        pU64_31 = (uint8_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_31 + -8) = lVal_22;
      }
      local_158._0_8_ = pU64_31;
    }
    local_148 = (uint32_t)sz_20;
    uStack_144 = (uint32_t)(sz_20 >> 0x20);
    uStack_140 = (uint32_t)uVal_33;
    uStack_13c = (uint32_t)(uVal_33 >> 0x20);
    func_0x1806aa960(pU64_31,pU64_1,sz_20);
    pU64_31[sz_20] = 0;
    uVal_25 = CONCAT71((int7)((uint64_t)uVal_25 >> 8),uVal_5);
    in_stack_fffffffffffffbb8 = in_stack_fffffffffffffbb8 & 0xffffff00;
    pU64_31 = local_158;
    ptr4_U64_30 = &local_118;
    func_0x1801ccd70(local_f0,pU64_31,ptr4_U64_30,(uint8_t *)((int64_t)pU64_27 + 0x129),uVal_25,
                  local_2c8,in_stack_fffffffffffffbb8);
    uVal_33 = CONCAT44(uStack_13c,uStack_140);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      lVal_22 = local_158._0_8_;
      if (0xfff < uVal_21) {
        lVal_22 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_22)) goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_22,uVal_21);
    }
    pU64_27 = local_f0;
    uVal_33 = CONCAT71(uStack_ff,uStack_100);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      ptr4_U64_29 = local_118;
      if (0xfff < uVal_21) {
        ptr4_U64_29 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_29)))
        goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_29,uVal_21);
    }
    local_428 = &PTR_LAB_1806c7f40;
    local_420 = pU64_27;
    local_3f0 = &local_428;
    uVal_5 = *(uint8_t *)((int64_t)pU64_27 + 0x12a);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf79c) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf79c) = 1;
      *(uint16_t *)(lVal_22 + 0xf799) = 0x145;
      func_0x180673140(&LAB_180367ca0);
    }
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_22 + 0xf799);
    if (*(char *)(lVal_22 + 0xf79a) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x45;
      *(uint8_t *)(lVal_22 + 0xf79a) = 0;
    }
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_20 = strlen((char *)pU8_4);
    if ((int64_t)sz_20 < 0) goto LAB_1803345ac;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_da = 1;
        pU64_31 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
      }
      else {
        local_da = 1;
        lVal_22 = func_0x180672de0(uVal_33 + 0x28);
        pU64_31 = (uint8_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_31 + -8) = lVal_22;
      }
      local_158._0_8_ = pU64_31;
    }
    local_148 = (uint32_t)sz_20;
    uStack_144 = (uint32_t)(sz_20 >> 0x20);
    uStack_140 = (uint32_t)uVal_33;
    uStack_13c = (uint32_t)(uVal_33 >> 0x20);
    func_0x1806aa960(pU64_31,pU8_4,sz_20);
    pU64_31[sz_20] = 0;
    local_178 = _DAT_1806c6ff8;
    uStack_170 = (undefined6)_UNK_1806c7000;
    uStack_16a = 0xd6;
    uStack_169 = 0x95;
    uStack_168 = 0x65;
    uStack_167 = 0xd42a35442;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf7b4) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf7b4) = 1;
      func_0x18007cab0(lVal_22 + 0xf79d,&local_178);
      func_0x180673140(&LAB_180367cc0);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf79d);
    func_0x18036e8f0(fnPtr_3);
    uStack_108 = 0;
    uStack_107 = 0;
    uStack_103 = 0;
    uStack_102 = 0;
    uStack_100 = 0;
    uStack_ff = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_10f = 0;
    uStack_10b = 0;
    uStack_10a = 0;
    sz_20 = strlen(fnPtr_3);
    if ((int64_t)sz_20 < 0) goto LAB_1803345b9;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_d5 = 1;
        ptr4_U64_30 = (uint64_t ****)func_0x180672de0(uVal_33 + 1);
        local_118 = ptr4_U64_30;
      }
      else {
        local_d5 = 1;
        ptr3_U64_23 = (uint64_t ***)func_0x180672de0(uVal_33 + 0x28);
        ptr4_U64_30 = (uint64_t ****)((int64_t)ptr3_U64_23 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_30[-1] = ptr3_U64_23;
        local_118 = ptr4_U64_30;
      }
    }
    pU64_27 = local_f0;
    lVal_22 = (int64_t)local_f0 + 0x12a;
    uStack_108 = (uint8_t)sz_20;
    uStack_107 = (uint32_t)(sz_20 >> 8);
    uStack_103 = (uint8_t)(sz_20 >> 0x28);
    uStack_102 = (uint16_t)(sz_20 >> 0x30);
    uStack_100 = (uint8_t)uVal_33;
    uStack_ff = (undefined7)(uVal_33 >> 8);
    func_0x1806aa960(ptr4_U64_30,fnPtr_3,sz_20);
    *(uint8_t *)((int64_t)ptr4_U64_30 + sz_20) = 0;
    ptr3_U64_67 = &local_428;
    uVal_25 = CONCAT71((int7)((uint64_t)uVal_25 >> 8),uVal_5);
    ptr4_U64_30 = &local_118;
    pU64_31 = local_158;
    func_0x1801ccd70(pU64_27,ptr4_U64_30,pU64_31,lVal_22,uVal_25,ptr3_U64_67,
                  in_stack_fffffffffffffbb8 & 0xffffff00);
    uVal_68 = (uint32_t)((uint64_t)ptr3_U64_67 >> 0x20);
    uVal_66 = (uint32_t)((uint64_t)uVal_25 >> 0x20);
    uVal_33 = CONCAT71(uStack_ff,uStack_100);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      ptr4_U64_29 = local_118;
      if (0xfff < uVal_21) {
        ptr4_U64_29 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_29)))
        goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_29,uVal_21);
    }
    pU64_27 = local_f0;
    uVal_33 = CONCAT44(uStack_13c,uStack_140);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      lVal_22 = local_158._0_8_;
      if (0xfff < uVal_21) {
        lVal_22 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_22)) goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_22,uVal_21);
    }
    local_3e8 = &PTR_LAB_1806c7f70;
    local_3e0 = pU64_27;
    local_3b0 = &local_3e8;
    uVal_6 = *(uint32_t *)((int64_t)pU64_27 + 300);
    local_118 = _DAT_1806c700e;
    uStack_110 = (uint8_t)_UNK_1806c7016;
    uStack_10f = (uint32_t)((uint64_t)_UNK_1806c7016 >> 8);
    uStack_10b = (uint8_t)((uint64_t)_UNK_1806c7016 >> 0x28);
    uStack_10a = 0xc84e;
    uStack_108 = 0x6e;
    uStack_107 = 0xcd622c1f;
    uStack_103 = 3;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf7cc) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf7cc) = 1;
      func_0x18007cab0(lVal_22 + 0xf7b5,&local_118);
      func_0x180673140(&LAB_180367cf0);
      pU64_27 = local_f0;
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf7b5);
    func_0x180370020(fnPtr_3);
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_20 = strlen(fnPtr_3);
    if ((int64_t)sz_20 < 0) goto LAB_1803345c6;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_d6 = 1;
        pU64_31 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
      }
      else {
        local_d6 = 1;
        lVal_22 = func_0x180672de0(uVal_33 + 0x28);
        pU64_31 = (uint8_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_31 + -8) = lVal_22;
      }
      local_158._0_8_ = pU64_31;
      pU64_27 = local_f0;
    }
    local_148 = (uint32_t)sz_20;
    uStack_144 = (uint32_t)(sz_20 >> 0x20);
    uStack_140 = (uint32_t)uVal_33;
    uStack_13c = (uint32_t)(uVal_33 >> 0x20);
    func_0x1806aa960(pU64_31,fnPtr_3,sz_20);
    pU64_31[sz_20] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf7e0) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf7e0) = 1;
      uVal_25 = _UNK_1806c3a28;
      *(uint64_t *)(lVal_22 + 0xf7d0) = _DAT_1806c3a20;
      *(uint64_t *)(lVal_22 + 0xf7d8) = uVal_25;
      func_0x180673140(&LAB_180367d20);
    }
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_22 + 0xf7d0);
    if (*(char *)(lVal_22 + 0xf7df) == '\x01') {
      uVal_7 = *(uint32_t *)(lVal_22 + 0xf7d8);
      auArr_36 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_7 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_7 >> 0x10),uVal_7)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_22 + 0xf7dd) >> 8)),
                                                 (char)((uint)uVal_7 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_22 + 0xf7dd),(char)uVal_7)
                                       )),_DAT_1806ae110);
      auArr_36._8_8_ =
           auArr_36._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_22 + 0xf7dc) << 0x20;
      auArr_36 = pblendw(auArr_36,*_Str,0xf);
      *_Str = auArr_36 ^ _DAT_1806b6620;
    }
    uStack_108 = 0;
    uStack_107 = 0;
    uStack_103 = 0;
    uStack_102 = 0;
    uStack_100 = 0;
    uStack_ff = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_10f = 0;
    uStack_10b = 0;
    uStack_10a = 0;
    sz_20 = strlen((char *)_Str);
    if ((int64_t)sz_20 < 0) goto LAB_1803345d3;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_db = 1;
        ptr4_U64_30 = (uint64_t ****)func_0x180672de0(uVal_33 + 1);
        pU64_27 = local_f0;
        local_118 = ptr4_U64_30;
      }
      else {
        local_db = 1;
        ptr3_U64_23 = (uint64_t ***)func_0x180672de0(uVal_33 + 0x28);
        ptr4_U64_30 = (uint64_t ****)((int64_t)ptr3_U64_23 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_30[-1] = ptr3_U64_23;
        pU64_27 = local_f0;
        local_118 = ptr4_U64_30;
      }
    }
    uStack_108 = (uint8_t)sz_20;
    uStack_107 = (uint32_t)(sz_20 >> 8);
    uStack_103 = (uint8_t)(sz_20 >> 0x28);
    uStack_102 = (uint16_t)(sz_20 >> 0x30);
    uStack_100 = (uint8_t)uVal_33;
    uStack_ff = (undefined7)(uVal_33 >> 8);
    func_0x1806aa960(ptr4_U64_30,_Str,sz_20);
    *(uint8_t *)((int64_t)ptr4_U64_30 + sz_20) = 0;
    uVal_69 = 0x43000000;
    ptr4_U64_30 = &local_118;
    func_0x1801cd2e0(pU64_27,ptr4_U64_30,local_158,(int64_t)pU64_27 + 300,CONCAT44(uVal_66,uVal_6),
                  CONCAT44(uVal_68,0x3f800000),0x43000000,&local_3e8,0);
    uVal_33 = CONCAT71(uStack_ff,uStack_100);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      ptr4_U64_29 = local_118;
      if (0xfff < uVal_21) {
        ptr4_U64_29 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_29)))
        goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_29,uVal_21);
    }
    uVal_33 = CONCAT44(uStack_13c,uStack_140);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      lVal_22 = local_158._0_8_;
      if (0xfff < uVal_21) {
        lVal_22 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_22)) goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_22,uVal_21);
    }
    local_250 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_250 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_288);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf7ec) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf7ec) = 1;
      *(uint32_t *)(lVal_22 + 0xf7e4) = 0x79168372;
      *(uint16_t *)(lVal_22 + 0xf7e8) = 0x1d9;
      func_0x180673140(&LAB_180367d50);
    }
    pU64_27 = local_f0;
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_22 + 0xf7e4);
    if (*(char *)(lVal_22 + 0xf7e9) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xd7fe737;
      *(byte *)(lVal_22 + 0xf7e8) = *(byte *)(lVal_22 + 0xf7e8) ^ 0xd9;
      *(uint8_t *)(lVal_22 + 0xf7e9) = 0;
    }
    uStack_108 = 0;
    uStack_107 = 0;
    uStack_103 = 0;
    uStack_102 = 0;
    uStack_100 = 0;
    uStack_ff = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_10f = 0;
    uStack_10b = 0;
    uStack_10a = 0;
    sz_20 = strlen((char *)pU64_1);
    if ((int64_t)sz_20 < 0) goto LAB_1803345e0;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_dd = 1;
        ptr4_U64_30 = (uint64_t ****)func_0x180672de0(uVal_33 + 1);
        pU64_27 = local_f0;
        local_118 = ptr4_U64_30;
      }
      else {
        local_dd = 1;
        ptr3_U64_23 = (uint64_t ***)func_0x180672de0(uVal_33 + 0x28);
        ptr4_U64_30 = (uint64_t ****)((int64_t)ptr3_U64_23 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_30[-1] = ptr3_U64_23;
        pU64_27 = local_f0;
        local_118 = ptr4_U64_30;
      }
    }
    uStack_108 = (uint8_t)sz_20;
    uStack_107 = (uint32_t)(sz_20 >> 8);
    uStack_103 = (uint8_t)(sz_20 >> 0x28);
    uStack_102 = (uint16_t)(sz_20 >> 0x30);
    uStack_100 = (uint8_t)uVal_33;
    uStack_ff = (undefined7)(uVal_33 >> 8);
    func_0x1806aa960(ptr4_U64_30,pU64_1,sz_20);
    *(uint8_t *)((int64_t)ptr4_U64_30 + sz_20) = 0;
    local_158._8_8_ = pU64_27;
    local_158._0_8_ = &PTR_LAB_1806c7fa0;
    local_120 = (int64_t *)local_158;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf85c) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf85c) = 1;
      *(uint8_t *)(lVal_22 + 0xf85b) = 1;
      uVal_6 = _UNK_1806c7030;
      uVal_68 = _UNK_1806c702c;
      uVal_66 = _UNK_1806c7028;
      *(uint32_t *)(lVal_22 + 0xf7ed) = _DAT_1806c7024;
      *(uint32_t *)(lVal_22 + 0xf7f1) = uVal_66;
      *(uint32_t *)(lVal_22 + 0xf7f5) = uVal_68;
      *(uint32_t *)(lVal_22 + 0xf7f9) = uVal_6;
      uVal_6 = _UNK_1806c7040;
      uVal_68 = _UNK_1806c703c;
      uVal_66 = _UNK_1806c7038;
      *(uint32_t *)(lVal_22 + 0xf7fd) = _DAT_1806c7034;
      *(uint32_t *)(lVal_22 + 0xf801) = uVal_66;
      *(uint32_t *)(lVal_22 + 0xf805) = uVal_68;
      *(uint32_t *)(lVal_22 + 0xf809) = uVal_6;
      uVal_6 = _UNK_1806c7050;
      uVal_68 = _UNK_1806c704c;
      uVal_66 = _UNK_1806c7048;
      *(uint32_t *)(lVal_22 + 0xf80d) = _DAT_1806c7044;
      *(uint32_t *)(lVal_22 + 0xf811) = uVal_66;
      *(uint32_t *)(lVal_22 + 0xf815) = uVal_68;
      *(uint32_t *)(lVal_22 + 0xf819) = uVal_6;
      uVal_6 = _UNK_1806c7060;
      uVal_68 = _UNK_1806c705c;
      uVal_66 = _UNK_1806c7058;
      *(uint32_t *)(lVal_22 + 0xf81d) = _DAT_1806c7054;
      *(uint32_t *)(lVal_22 + 0xf821) = uVal_66;
      *(uint32_t *)(lVal_22 + 0xf825) = uVal_68;
      *(uint32_t *)(lVal_22 + 0xf829) = uVal_6;
      uVal_6 = _UNK_1806c7070;
      uVal_68 = _UNK_1806c706c;
      uVal_66 = _UNK_1806c7068;
      *(uint32_t *)(lVal_22 + 0xf82d) = _DAT_1806c7064;
      *(uint32_t *)(lVal_22 + 0xf831) = uVal_66;
      *(uint32_t *)(lVal_22 + 0xf835) = uVal_68;
      *(uint32_t *)(lVal_22 + 0xf839) = uVal_6;
      uVal_6 = _UNK_1806c707c;
      uVal_68 = _UNK_1806c7078;
      uVal_66 = CONCAT22(_DAT_1806c7082,_UNK_1806c7080);
      *(uint32_t *)(lVal_22 + 0xf83d) = _DAT_1806c7074;
      *(uint32_t *)(lVal_22 + 0xf841) = uVal_68;
      *(uint32_t *)(lVal_22 + 0xf845) = uVal_6;
      *(uint32_t *)(lVal_22 + 0xf849) = uVal_66;
      uVal_25 = _UNK_1806c708a;
      *(uint64_t *)(lVal_22 + 0xf84b) = CONCAT62(_UNK_1806c7084,_DAT_1806c7082);
      *(uint64_t *)(lVal_22 + 0xf853) = uVal_25;
      func_0x180673140(&LAB_180367d80);
    }
    lVal_19 = _UNK_1806bb038;
    lVal_28 = _DAT_1806bb030;
    auArr_36 = _DAT_1806bb020;
    uVal_21 = _UNK_1806bb018;
    uVal_33 = _DAT_1806bb010;
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    fnPtr_3 = (char *)(lVal_22 + 0xf7ed);
    if (*(char *)(lVal_22 + 0xf85b) == '\x01') {
      lVal_24 = 0;
      uVal_17 = CONCAT44(_UNK_1806b6894,_DAT_1806b6890);
      uVal_18 = CONCAT44(_UNK_1806b689c,_UNK_1806b6898);
      lVal_35 = _DAT_1806bafe0;
      lVal_40 = _UNK_1806bafe8;
      lVal_44 = _DAT_1806baff0;
      lVal_45 = _UNK_1806baff8;
      lVal_46 = _DAT_1806bb000;
      lVal_47 = _UNK_1806bb008;
      lVal_48 = _DAT_1806aeb30;
      lVal_49 = _UNK_1806aeb38;
      do {
        uVal_53 = lVal_48 << 3 & uVal_33;
        uVal_54 = lVal_49 << 3 & uVal_21;
        uVal_58 = lVal_46 << 3 & uVal_33;
        uVal_61 = lVal_47 << 3 & uVal_21;
        uVal_55 = lVal_44 << 3 & uVal_33;
        uVal_57 = lVal_45 << 3 & uVal_21;
        uVal_50 = lVal_35 << 3 & uVal_33;
        uVal_52 = lVal_40 << 3 & uVal_21;
        auArr_63._0_8_ = uVal_17 >> uVal_50;
        auArr_63._8_8_ = uVal_18 >> uVal_50;
        auArr_51._0_8_ = uVal_17 >> uVal_52;
        auArr_51._8_8_ = uVal_18 >> uVal_52;
        auArr_51 = pblendw(auArr_51,auArr_63,0xf);
        auArr_65._0_8_ = uVal_17 >> uVal_55;
        auArr_65._8_8_ = uVal_18 >> uVal_55;
        auArr_64._0_8_ = uVal_17 >> uVal_57;
        auArr_64._8_8_ = uVal_18 >> uVal_57;
        auArr_65 = pblendw(auArr_64,auArr_65,0xf);
        auArr_60._0_8_ = uVal_17 >> uVal_58;
        auArr_60._8_8_ = uVal_18 >> uVal_58;
        auArr_62._0_8_ = uVal_17 >> uVal_61;
        auArr_62._8_8_ = uVal_18 >> uVal_61;
        auArr_63 = pblendw(auArr_62,auArr_60,0xf);
        auArr_56._0_8_ = uVal_17 >> uVal_53;
        auArr_56._8_8_ = uVal_18 >> uVal_53;
        auArr_59._0_8_ = uVal_17 >> uVal_54;
        auArr_59._8_8_ = uVal_18 >> uVal_54;
        auArr_60 = pblendw(auArr_59,auArr_56,0xf);
        auArr_60 = packusdw(auArr_60 & auArr_36,auArr_63 & auArr_36);
        auArr_51 = packusdw(auArr_65 & auArr_36,auArr_51 & auArr_36);
        auArr_51 = packusdw(auArr_60,auArr_51);
        sz_9 = auArr_51._0_2_;
        sz_10 = auArr_51._2_2_;
        sz_11 = auArr_51._4_2_;
        sz_12 = auArr_51._6_2_;
        sz_13 = auArr_51._8_2_;
        sz_14 = auArr_51._10_2_;
        sz_15 = auArr_51._12_2_;
        sz_16 = auArr_51._14_2_;
        *(uint64_t *)(fnPtr_3 + lVal_24) =
             *(uint64_t *)(fnPtr_3 + lVal_24) ^
             CONCAT17((0 < sz_16) * (sz_16 < 0xff) * auArr_51[14] - (0xff < sz_16),
                      CONCAT16((0 < sz_15) * (sz_15 < 0xff) * auArr_51[12] - (0xff < sz_15),
                               CONCAT15((0 < sz_14) * (sz_14 < 0xff) * auArr_51[10] -
                                        (0xff < sz_14),
                                        CONCAT14((0 < sz_13) * (sz_13 < 0xff) * auArr_51[8] -
                                                 (0xff < sz_13),
                                                 CONCAT13((0 < sz_12) * (sz_12 < 0xff) *
                                                          auArr_51[6] - (0xff < sz_12),
                                                          CONCAT12((0 < sz_11) * (sz_11 < 0xff) *
                                                                   auArr_51[4] - (0xff < sz_11),
                                                                   CONCAT11((0 < sz_10) *
                                                                            (sz_10 < 0xff) *
                                                                            auArr_51[2] -
                                                                            (0xff < sz_10),
                                                                            (0 < sz_9) *
                                                                            (sz_9 < 0xff) *
                                                                            auArr_51[0] -
                                                                            (0xff < sz_9))))))));
        lVal_24 = lVal_24 + 8;
        lVal_48 = lVal_48 + lVal_28;
        lVal_49 = lVal_49 + lVal_19;
        lVal_46 = lVal_46 + lVal_28;
        lVal_47 = lVal_47 + lVal_19;
        lVal_44 = lVal_44 + lVal_28;
        lVal_45 = lVal_45 + lVal_19;
        lVal_35 = lVal_35 + lVal_28;
        lVal_40 = lVal_40 + lVal_19;
      } while (lVal_24 != 0x68);
      *(byte *)(lVal_22 + 0xf855) = *(byte *)(lVal_22 + 0xf855) ^ 0x37;
      *(byte *)(lVal_22 + 0xf856) = *(byte *)(lVal_22 + 0xf856) ^ 0xe7;
      *(byte *)(lVal_22 + 0xf857) = *(byte *)(lVal_22 + 0xf857) ^ 0x7f;
      *(byte *)(lVal_22 + 0xf858) = *(byte *)(lVal_22 + 0xf858) ^ 0xd;
      *(byte *)(lVal_22 + 0xf859) = *(byte *)(lVal_22 + 0xf859) ^ 0xd9;
      *(byte *)(lVal_22 + 0xf85a) = *(byte *)(lVal_22 + 0xf85a) ^ 0x41;
      *(uint8_t *)(lVal_22 + 0xf85b) = 0;
    }
    uStack_168 = 0;
    uStack_167 = 0;
    uStack_162 = 0;
    uStack_161 = 0;
    uStack_160 = 0;
    local_178 = (uint64_t ****)0x0;
    uStack_170 = 0;
    uStack_16a = 0;
    uStack_169 = 0;
    sz_20 = strlen(fnPtr_3);
    if ((int64_t)sz_20 < 0) goto LAB_1803345ed;
    if (sz_20 < 0x10) {
      ptr4_U64_30 = &local_178;
      uVal_33 = 0xf;
    }
    else {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_dc = 1;
        ptr4_U64_30 = (uint64_t ****)func_0x180672de0(uVal_33 + 1);
        pU64_27 = local_f0;
        local_178 = ptr4_U64_30;
      }
      else {
        local_dc = 1;
        ptr3_U64_23 = (uint64_t ***)func_0x180672de0(uVal_33 + 0x28);
        ptr4_U64_30 = (uint64_t ****)((int64_t)ptr3_U64_23 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_30[-1] = ptr3_U64_23;
        pU64_27 = local_f0;
        local_178 = ptr4_U64_30;
      }
    }
    uStack_168 = (uint8_t)sz_20;
    uStack_167 = (undefined5)(sz_20 >> 8);
    uStack_162 = (uint8_t)(sz_20 >> 0x30);
    uStack_161 = (uint8_t)(sz_20 >> 0x38);
    uStack_160 = uVal_33;
    func_0x1806aa960(ptr4_U64_30,fnPtr_3,sz_20);
    *(uint8_t *)((int64_t)ptr4_U64_30 + sz_20) = 0;
    local_1c8 = _DAT_1806c7092;
    uStack_1c0 = _UNK_1806c709a;
    local_1b8 = 0x37;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf870) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf870) = 1;
      func_0x18007d2b0(lVal_22 + 0xf85d,&local_1c8);
      func_0x180673140(&LAB_180367dd0);
      pU64_27 = local_f0;
    }
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_22 + 0xf85d);
    if (*(char *)(lVal_22 + 0xf86e) == '\x01') {
      uVal_39 = *(uint *)(lVal_22 + 0xf861) ^ _UNK_1806b6894;
      uVal_42 = *(uint *)(lVal_22 + 0xf865) ^ _UNK_1806b6898;
      uVal_43 = *(uint *)(lVal_22 + 0xf869) ^ _UNK_1806b689c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b6890;
      *(uint *)(lVal_22 + 0xf861) = uVal_39;
      *(uint *)(lVal_22 + 0xf865) = uVal_42;
      *(uint *)(lVal_22 + 0xf869) = uVal_43;
      *(byte *)(lVal_22 + 0xf86d) = *(byte *)(lVal_22 + 0xf86d) ^ 0x37;
      *(uint8_t *)(lVal_22 + 0xf86e) = 0;
    }
    local_198._0_16_ = (uint8_t  [16])0x0;
    local_1a8 = (uint8_t  [16])0x0;
    sz_20 = strlen((char *)pU64_1);
    if ((int64_t)sz_20 < 0) goto LAB_1803345fa;
    if (sz_20 < 0x10) {
      pU64_31 = local_1a8;
      uVal_33 = 0xf;
    }
    else {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_d7 = 1;
        pU64_31 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
      }
      else {
        local_d7 = 1;
        lVal_22 = func_0x180672de0(uVal_33 + 0x28);
        pU64_31 = (uint8_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_31 + -8) = lVal_22;
      }
      local_1a8._0_8_ = pU64_31;
      pU64_27 = local_f0;
    }
    local_198._8_8_ = uVal_33;
    local_198._0_8_ = sz_20;
    func_0x1806aa960(pU64_31,pU64_1,sz_20);
    pU64_31[sz_20] = 0;
    ptr4_U64_30 = &local_118;
    uVal_69 = uVal_69 & 0xffffff00;
    pLong_32 = (int64_t *)local_158;
    func_0x1801ccb00(pU64_27,local_1a8,&local_178,pLong_32,ptr4_U64_30,local_288,uVal_69);
    if (0xf < (uint64_t)local_198._8_8_) {
      uVal_33 = local_198._8_8_ + 1;
      lVal_22 = local_1a8._0_8_;
      if (0xfff < uVal_33) {
        lVal_22 = *(int64_t *)(local_1a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_1a8._0_8_ + -8) - lVal_22)) goto LAB_18033456a;
        uVal_33 = local_198._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_22,uVal_33);
    }
    if (0xf < uStack_160) {
      uVal_33 = uStack_160 + 1;
      ptr4_U64_29 = local_178;
      if (0xfff < uVal_33) {
        ptr4_U64_29 = (uint64_t ****)local_178[-1];
        if (0x1f < (uint64_t)((int64_t)local_178 + (-8 - (int64_t)ptr4_U64_29)))
        goto LAB_18033456a;
        uVal_33 = uStack_160 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_29,uVal_33);
    }
    if (local_120 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_120 + 0x20))(local_120,local_120 != pLong_32);
    }
    pU64_27 = local_f0;
    uVal_33 = CONCAT71(uStack_ff,uStack_100);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      ptr4_U64_29 = local_118;
      if (0xfff < uVal_21) {
        ptr4_U64_29 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_29)))
        goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_29,uVal_21);
    }
    local_210 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_210 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_248);
      pU64_27 = local_f0;
    }
    uVal_5 = *(uint8_t *)(pU64_27 + 0x26);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf874) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf874) = 1;
      *(uint16_t *)(lVal_22 + 0xf871) = 0x199;
      func_0x180673140(&LAB_180367e00);
    }
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_22 + 0xf871);
    if (*(char *)(lVal_22 + 0xf872) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x99;
      *(uint8_t *)(lVal_22 + 0xf872) = 0;
    }
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_20 = strlen((char *)pU8_4);
    if ((int64_t)sz_20 < 0) goto LAB_180334607;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_df = 1;
        pLong_32 = (int64_t *)func_0x180672de0(uVal_33 + 1);
      }
      else {
        local_df = 1;
        lVal_22 = func_0x180672de0(uVal_33 + 0x28);
        pLong_32 = (int64_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
        pLong_32[-1] = lVal_22;
      }
      local_158._0_8_ = pLong_32;
    }
    local_148 = (uint32_t)sz_20;
    uStack_144 = (uint32_t)(sz_20 >> 0x20);
    uStack_140 = (uint32_t)uVal_33;
    uStack_13c = (uint32_t)(uVal_33 >> 0x20);
    func_0x1806aa960(pLong_32,pU8_4,sz_20);
    *(uint8_t *)((int64_t)pLong_32 + sz_20) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf888) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf888) = 1;
      *(uint64_t *)(lVal_22 + 0xf878) = 0xa45f1a4c1fde32da;
      *(uint32_t *)(lVal_22 + 0xf880) = 0x19c22bf6;
      *(uint16_t *)(lVal_22 + 0xf884) = 0x123;
      func_0x180673140(&LAB_180367e20);
    }
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_22 + 0xf878);
    if (*(char *)(lVal_22 + 0xf885) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xc77f77236bad4799;
      *(uint *)(lVal_22 + 0xf880) = *(uint *)(lVal_22 + 0xf880) ^ 0x6bad4799;
      *(byte *)(lVal_22 + 0xf884) = *(byte *)(lVal_22 + 0xf884) ^ 0x23;
      *(uint8_t *)(lVal_22 + 0xf885) = 0;
    }
    uStack_108 = 0;
    uStack_107 = 0;
    uStack_103 = 0;
    uStack_102 = 0;
    uStack_100 = 0;
    uStack_ff = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_10f = 0;
    uStack_10b = 0;
    uStack_10a = 0;
    sz_20 = strlen((char *)pU64_2);
    if ((int64_t)sz_20 < 0) goto LAB_180334614;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_de = 1;
        ptr4_U64_30 = (uint64_t ****)func_0x180672de0(uVal_33 + 1);
        local_118 = ptr4_U64_30;
      }
      else {
        local_de = 1;
        ptr3_U64_23 = (uint64_t ***)func_0x180672de0(uVal_33 + 0x28);
        ptr4_U64_30 = (uint64_t ****)((int64_t)ptr3_U64_23 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_30[-1] = ptr3_U64_23;
        local_118 = ptr4_U64_30;
      }
    }
    uStack_108 = (uint8_t)sz_20;
    uStack_107 = (uint32_t)(sz_20 >> 8);
    uStack_103 = (uint8_t)(sz_20 >> 0x28);
    uStack_102 = (uint16_t)(sz_20 >> 0x30);
    uStack_100 = (uint8_t)uVal_33;
    uStack_ff = (undefined7)(uVal_33 >> 8);
    func_0x1806aa960(ptr4_U64_30,pU64_2,sz_20);
    *(uint8_t *)((int64_t)ptr4_U64_30 + sz_20) = 0;
    uVal_69 = uVal_69 & 0xffffff00;
    ptr4_U64_30 = &local_118;
    pU64_31 = local_158;
    func_0x1801ccd70(local_f0,ptr4_U64_30,pU64_31,pU64_27 + 0x26,uVal_5,local_248,uVal_69);
    uVal_33 = CONCAT71(uStack_ff,uStack_100);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      ptr4_U64_29 = local_118;
      if (0xfff < uVal_21) {
        ptr4_U64_29 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_29)))
        goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_29,uVal_21);
    }
    pU64_27 = local_f0;
    uVal_33 = CONCAT44(uStack_13c,uStack_140);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      lVal_22 = local_158._0_8_;
      if (0xfff < uVal_21) {
        lVal_22 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_22)) goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_22,uVal_21);
    }
    local_3a8 = &PTR_LAB_1806c3300;
    local_3a0 = pU64_27;
    local_370 = &local_3a8;
    local_328 = *(uint64_t *)((int64_t)pU64_27 + 0x134);
    uStack_320 = *(uint64_t *)((int64_t)pU64_27 + 0x13c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf88c) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf88c) = 1;
      *(uint16_t *)(lVal_22 + 0xf889) = 0x187;
      func_0x180673140(&LAB_180367e50);
    }
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_22 + 0xf889);
    if (*(char *)(lVal_22 + 0xf88a) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x87;
      *(uint8_t *)(lVal_22 + 0xf88a) = 0;
    }
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_20 = strlen((char *)pU8_4);
    if ((int64_t)sz_20 < 0) goto LAB_180334621;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_e1 = 1;
        pU64_31 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
      }
      else {
        local_e1 = 1;
        lVal_22 = func_0x180672de0(uVal_33 + 0x28);
        pU64_31 = (uint8_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_31 + -8) = lVal_22;
      }
      local_158._0_8_ = pU64_31;
      pU64_27 = local_f0;
    }
    local_148 = (uint32_t)sz_20;
    uStack_144 = (uint32_t)(sz_20 >> 0x20);
    uStack_140 = (uint32_t)uVal_33;
    uStack_13c = (uint32_t)(uVal_33 >> 0x20);
    func_0x1806aa960(pU64_31,pU8_4,sz_20);
    pU64_31[sz_20] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf898) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf898) = 1;
      *(uint8_t *)(lVal_22 + 0xf896) = 1;
      *(uint32_t *)(lVal_22 + 0xf890) = 0x96fd54c4;
      *(uint16_t *)(lVal_22 + 0xf894) = 0x1b37;
      func_0x180673140(&LAB_180367e70);
    }
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_22 + 0xf890);
    if (*(char *)(lVal_22 + 0xf896) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xf9913b87;
      *(byte *)(lVal_22 + 0xf894) = *(byte *)(lVal_22 + 0xf894) ^ 0x45;
      *(byte *)(lVal_22 + 0xf895) = *(byte *)(lVal_22 + 0xf895) ^ 0x1b;
      *(uint8_t *)(lVal_22 + 0xf896) = 0;
    }
    uStack_108 = 0;
    uStack_107 = 0;
    uStack_103 = 0;
    uStack_102 = 0;
    uStack_100 = 0;
    uStack_ff = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_10f = 0;
    uStack_10b = 0;
    uStack_10a = 0;
    sz_20 = strlen((char *)pU64_1);
    if ((int64_t)sz_20 < 0) goto LAB_18033462e;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_e0 = 1;
        ptr4_U64_30 = (uint64_t ****)func_0x180672de0(uVal_33 + 1);
        pU64_27 = local_f0;
        local_118 = ptr4_U64_30;
      }
      else {
        local_e0 = 1;
        ptr3_U64_23 = (uint64_t ***)func_0x180672de0(uVal_33 + 0x28);
        ptr4_U64_30 = (uint64_t ****)((int64_t)ptr3_U64_23 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_30[-1] = ptr3_U64_23;
        pU64_27 = local_f0;
        local_118 = ptr4_U64_30;
      }
    }
    uStack_108 = (uint8_t)sz_20;
    uStack_107 = (uint32_t)(sz_20 >> 8);
    uStack_103 = (uint8_t)(sz_20 >> 0x28);
    uStack_102 = (uint16_t)(sz_20 >> 0x30);
    uStack_100 = (uint8_t)uVal_33;
    uStack_ff = (undefined7)(uVal_33 >> 8);
    func_0x1806aa960(ptr4_U64_30,pU64_1,sz_20);
    *(uint8_t *)((int64_t)ptr4_U64_30 + sz_20) = 0;
    uVal_69 = uVal_69 & 0xffffff00;
    ptr4_U64_30 = &local_118;
    pU64_31 = local_158;
    func_0x1801cd600(pU64_27,ptr4_U64_30,pU64_31,(int64_t)pU64_27 + 0x134,&local_328,&local_3a8,uVal_69)
    ;
    uVal_33 = CONCAT71(uStack_ff,uStack_100);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      ptr4_U64_29 = local_118;
      if (0xfff < uVal_21) {
        ptr4_U64_29 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_29)))
        goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_29,uVal_21);
    }
    pU64_27 = local_f0;
    uVal_33 = CONCAT44(uStack_13c,uStack_140);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      lVal_22 = local_158._0_8_;
      if (0xfff < uVal_21) {
        lVal_22 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_22)) goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_22,uVal_21);
    }
    local_1d0 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_1d0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_208);
      pU64_27 = local_f0;
    }
    uVal_5 = *(uint8_t *)((int64_t)pU64_27 + 0x144);
    uStack_108 = (uint8_t)((uint)_UNK_1806c70b0 >> 0x18);
    uStack_107 = _UNK_1806c70b4;
    uStack_103 = (uint8_t)_UNK_1806c70b8;
    uStack_102 = (uint16_t)((uint)_UNK_1806c70b8 >> 8);
    uStack_100 = (uint8_t)((uint)_UNK_1806c70b8 >> 0x18);
    local_118 = _DAT_1806c70a3;
    uStack_110 = UNK_1806c70ab;
    uStack_10f = _DAT_1806c70ac;
    uStack_10b = (uint8_t)_UNK_1806c70b0;
    uStack_10a = (uint16_t)((uint)_UNK_1806c70b0 >> 8);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf8b4) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf8b4) = 1;
      func_0x1800904a0(lVal_22 + 0xf899,&local_118);
      func_0x180673140(&LAB_180367ea0);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xf899);
    func_0x1803700f0(fnPtr_3);
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_20 = strlen(fnPtr_3);
    if ((int64_t)sz_20 < 0) goto LAB_18033463b;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_d8 = 1;
        pU64_31 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
      }
      else {
        local_d8 = 1;
        lVal_22 = func_0x180672de0(uVal_33 + 0x28);
        pU64_31 = (uint8_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_31 + -8) = lVal_22;
      }
      local_158._0_8_ = pU64_31;
    }
    local_148 = (uint32_t)sz_20;
    uStack_144 = (uint32_t)(sz_20 >> 0x20);
    uStack_140 = (uint32_t)uVal_33;
    uStack_13c = (uint32_t)(uVal_33 >> 0x20);
    func_0x1806aa960(pU64_31,fnPtr_3,sz_20);
    pU64_31[sz_20] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf8c4) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf8c4) = 1;
      *(uint64_t *)(lVal_22 + 0xf8b8) = 0xd6d2cc78b710295;
      *(uint32_t *)(lVal_22 + 0xf8c0) = 0x10519b8;
      func_0x180673140(&LAB_180367ed0);
    }
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_22 + 0xf8b8);
    if (*(char *)(lVal_22 + 0xf8c3) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x7d0149afab056bdd;
      *(uint *)(lVal_22 + 0xf8c0) =
           (*(uint *)(lVal_22 + 0xf8c0) & 0xffff | (uint)*(byte *)(lVal_22 + 0xf8c2) << 0x10) ^
           SUB164(_DAT_1806b6660,0);
    }
    uStack_108 = 0;
    uStack_107 = 0;
    uStack_103 = 0;
    uStack_102 = 0;
    uStack_100 = 0;
    uStack_ff = 0;
    local_118 = (uint64_t ****)0x0;
    uStack_110 = 0;
    uStack_10f = 0;
    uStack_10b = 0;
    uStack_10a = 0;
    sz_20 = strlen((char *)pU64_2);
    if ((int64_t)sz_20 < 0) goto LAB_180334648;
    uVal_33 = 0xf;
    if (0xf < sz_20) {
      uVal_21 = sz_20 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_21) {
        uVal_33 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        local_e2 = 1;
        ptr4_U64_30 = (uint64_t ****)func_0x180672de0(uVal_33 + 1);
        local_118 = ptr4_U64_30;
      }
      else {
        local_e2 = 1;
        ptr3_U64_23 = (uint64_t ***)func_0x180672de0(uVal_33 + 0x28);
        ptr4_U64_30 = (uint64_t ****)((int64_t)ptr3_U64_23 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_30[-1] = ptr3_U64_23;
        local_118 = ptr4_U64_30;
      }
    }
    uStack_108 = (uint8_t)sz_20;
    uStack_107 = (uint32_t)(sz_20 >> 8);
    uStack_103 = (uint8_t)(sz_20 >> 0x28);
    uStack_102 = (uint16_t)(sz_20 >> 0x30);
    uStack_100 = (uint8_t)uVal_33;
    uStack_ff = (undefined7)(uVal_33 >> 8);
    func_0x1806aa960(ptr4_U64_30,pU64_2,sz_20);
    *(uint8_t *)((int64_t)ptr4_U64_30 + sz_20) = 0;
    uVal_69 = uVal_69 & 0xffffff00;
    ptr4_U64_30 = &local_118;
    pU64_31 = local_158;
    func_0x1801ccd70(local_f0,ptr4_U64_30,pU64_31,(uint8_t *)((int64_t)pU64_27 + 0x144),uVal_5,
                  local_208,uVal_69);
    uVal_33 = CONCAT71(uStack_ff,uStack_100);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      ptr4_U64_29 = local_118;
      if (0xfff < uVal_21) {
        ptr4_U64_29 = (uint64_t ****)local_118[-1];
        if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_29)))
        goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_29,uVal_21);
    }
    pU64_27 = local_f0;
    uVal_33 = CONCAT44(uStack_13c,uStack_140);
    if (0xf < uVal_33) {
      uVal_21 = uVal_33 + 1;
      lVal_22 = local_158._0_8_;
      if (0xfff < uVal_21) {
        lVal_22 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_22)) goto LAB_18033456a;
        uVal_21 = uVal_33 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_22,uVal_21);
    }
    local_368 = &PTR_LAB_1806c7fd0;
    local_360 = pU64_27;
    local_330 = &local_368;
    local_318 = pU64_27[0x29];
    uStack_310 = pU64_27[0x2a];
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf8c8) == '\0') {
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_22 + 0xf8c8) = 1;
      *(uint16_t *)(lVal_22 + 0xf8c5) = 0x1ef;
      func_0x180673140(&LAB_180367f00);
    }
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_22 + 0xf8c5);
    if (*(char *)(lVal_22 + 0xf8c6) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0xef;
      *(uint8_t *)(lVal_22 + 0xf8c6) = 0;
    }
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_20 = strlen((char *)pU8_4);
    if (-1 < (int64_t)sz_20) {
      uVal_33 = 0xf;
      if (0xf < sz_20) {
        uVal_21 = sz_20 | 0xf;
        uVal_33 = 0x16;
        if (0x16 < uVal_21) {
          uVal_33 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          local_e3 = 1;
          pU64_31 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
        }
        else {
          local_e3 = 1;
          lVal_22 = func_0x180672de0(uVal_33 + 0x28);
          pU64_31 = (uint8_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_31 + -8) = lVal_22;
        }
        local_158._0_8_ = pU64_31;
        pU64_27 = local_f0;
      }
      local_148 = (uint32_t)sz_20;
      uStack_144 = (uint32_t)(sz_20 >> 0x20);
      uStack_140 = (uint32_t)uVal_33;
      uStack_13c = (uint32_t)(uVal_33 >> 0x20);
      func_0x1806aa960(pU64_31,pU8_4,sz_20);
      pU64_31[sz_20] = 0;
      local_178 = _DAT_1806c70bc;
      uStack_170 = (undefined6)_UNK_1806c70c4;
      uStack_16a = (uint8_t)((uint64_t)_UNK_1806c70c4 >> 0x30);
      uStack_169 = (uint8_t)((uint64_t)_UNK_1806c70c4 >> 0x38);
      uStack_168 = 0xef;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xf8dc) == '\0') {
        lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_22 + 0xf8dc) = 1;
        func_0x18007d2b0(lVal_22 + 0xf8c9,&local_178);
        func_0x180673140(&LAB_180367f20);
        pU64_27 = local_f0;
      }
      lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_22 + 0xf8c9);
      if (*(char *)(lVal_22 + 0xf8da) == '\x01') {
        uVal_39 = *(uint *)(lVal_22 + 0xf8cd) ^ _UNK_1806b2924;
        uVal_42 = *(uint *)(lVal_22 + 0xf8d1) ^ _UNK_1806b2928;
        uVal_43 = *(uint *)(lVal_22 + 0xf8d5) ^ _UNK_1806b292c;
        *pU64_1 = *pU64_1 ^ _DAT_1806b2920;
        *(uint *)(lVal_22 + 0xf8cd) = uVal_39;
        *(uint *)(lVal_22 + 0xf8d1) = uVal_42;
        *(uint *)(lVal_22 + 0xf8d5) = uVal_43;
        *(byte *)(lVal_22 + 0xf8d9) = *(byte *)(lVal_22 + 0xf8d9) ^ 0xef;
        *(uint8_t *)(lVal_22 + 0xf8da) = 0;
      }
      local_118 = (uint64_t ****)0x0;
      uStack_110 = 0;
      uStack_10f = 0;
      uStack_10b = 0;
      uStack_10a = 0;
      sz_20 = strlen((char *)pU64_1);
      if (-1 < (int64_t)sz_20) {
        uVal_33 = 0xf;
        if (0xf < sz_20) {
          uVal_21 = sz_20 | 0xf;
          uVal_33 = 0x16;
          if (0x16 < uVal_21) {
            uVal_33 = uVal_21;
          }
          if (uVal_21 < 0xfff) {
            local_d9 = 1;
            ptr4_U64_30 = (uint64_t ****)func_0x180672de0(uVal_33 + 1);
            pU64_27 = local_f0;
            local_118 = ptr4_U64_30;
          }
          else {
            local_d9 = 1;
            ptr3_U64_23 = (uint64_t ***)func_0x180672de0(uVal_33 + 0x28);
            ptr4_U64_30 = (uint64_t ****)((int64_t)ptr3_U64_23 + 0x27U & 0xffffffffffffffe0);
            ptr4_U64_30[-1] = ptr3_U64_23;
            pU64_27 = local_f0;
            local_118 = ptr4_U64_30;
          }
        }
        uStack_108 = (uint8_t)sz_20;
        uStack_107 = (uint32_t)(sz_20 >> 8);
        uStack_103 = (uint8_t)(sz_20 >> 0x28);
        uStack_102 = (uint16_t)(sz_20 >> 0x30);
        uStack_100 = (uint8_t)uVal_33;
        uStack_ff = (undefined7)(uVal_33 >> 8);
        func_0x1806aa960(ptr4_U64_30,pU64_1,sz_20);
        *(uint8_t *)((int64_t)ptr4_U64_30 + sz_20) = 0;
        func_0x1801cd600(pU64_27,&local_118,local_158,pU64_27 + 0x29,&local_318,&local_368,
                      uVal_69 & 0xffffff00);
        uVal_33 = CONCAT71(uStack_ff,uStack_100);
        if (0xf < uVal_33) {
          uVal_21 = uVal_33 + 1;
          ptr4_U64_30 = local_118;
          if (0xfff < uVal_21) {
            ptr4_U64_30 = (uint64_t ****)local_118[-1];
            if (0x1f < (uint64_t)((int64_t)local_118 + (-8 - (int64_t)ptr4_U64_30)))
            goto LAB_18033456a;
            uVal_21 = uVal_33 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_30,uVal_21);
        }
        uVal_33 = CONCAT44(uStack_13c,uStack_140);
        if (0xf < uVal_33) {
          uVal_21 = uVal_33 + 1;
          lVal_22 = local_158._0_8_;
          if (0xfff < uVal_21) {
            lVal_22 = *(int64_t *)(local_158._0_8_ + -8);
            if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_22)) {
LAB_18033456a:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_21 = uVal_33 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_22,uVal_21);
        }
        uVal_25 = thunk_FUN_180672de0(0x4000);
        local_f0[0x11] = uVal_25;
        uVal_26 = thunk_FUN_180672de0(0x4000);
        pU64_27 = local_f0;
        local_f0[0x2e] = uVal_26;
        func_0x1806ab010(uVal_25,0,0x4000);
        func_0x1806ab010(uVal_26,0,0x4000);
        return pU64_27;
      }
      goto LAB_180334662;
    }
  }
  local_e3 = 1;
  func_0x18007ba70();
LAB_180334662:
  local_d9 = 1;
  func_0x18007ba70();
  fnPtr_8 = (func_ptr_t )swi(3);
  pU64_27 = (uint64_t *)(*fnPtr_8)();
  return pU64_27;
}

// Unwind@180334670
void Unwind_180334670(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1a8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x170));
    *(uint64_t *)(param_2 + 0x1a8) = 0;
  }
  return;
}

// Unwind@180334760
void Unwind_180334760(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf740) = 0;
  *(uint8_t *)(param_2 + 0x3a6) = 1;
  return;
}

// Unwind@180334840
void Unwind_180334840(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1e8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1b0));
    *(uint64_t *)(param_2 + 0x1e8) = 0;
  }
  return;
}

// Unwind@180334930
void Unwind_180334930(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf784) = 0;
  *(uint8_t *)(param_2 + 0x3a4) = 1;
  return;
}

// Unwind@180334a10
void Unwind_180334a10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x228);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f0));
    *(uint64_t *)(param_2 + 0x228) = 0;
  }
  return;
}

// Unwind@180334b00
void Unwind_180334b00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x268);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x230));
    *(uint64_t *)(param_2 + 0x268) = 0;
  }
  return;
}

// Unwind@180334bf0
void Unwind_180334bf0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2a8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x270));
    *(uint64_t *)(param_2 + 0x2a8) = 0;
  }
  return;
}

// Unwind@180334ce0
void Unwind_180334ce0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf8b4) = 0;
  *(uint8_t *)(param_2 + 0x3a0) = 1;
  return;
}

// Unwind@180334dc0
void Unwind_180334dc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  return;
}

// Unwind@180334e80
void Unwind_180334e80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x3a7) = 0;
  return;
}

// Unwind@180334f50
void Unwind_180334f50(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3a7);
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x3a6) = uVal_1;
  return;
}

// Unwind@180335020
void Unwind_180335020(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3a6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1a8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x170));
    *(uint64_t *)(param_2 + 0x1a8) = 0;
  }
  return;
}

// Unwind@180335110
void Unwind_180335110(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x3a5) = 0;
  return;
}

// Unwind@1803351e0
void Unwind_1803351e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3a5);
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x3a4) = uVal_1;
  return;
}

// Unwind@1803352b0
void Unwind_1803352b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3a4) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1e8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1b0));
    *(uint64_t *)(param_2 + 0x1e8) = 0;
  }
  return;
}

// Unwind@1803353a0
void Unwind_1803353a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x3a3) = 0;
  return;
}

// Unwind@180335470
void Unwind_180335470(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3a3);
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x39e) = uVal_1;
  return;
}

// Unwind@180335540
void Unwind_180335540(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x39e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@180335630
void Unwind_180335630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x39d) = 0;
  return;
}

// Unwind@180335700
void Unwind_180335700(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x39d);
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x3a2) = uVal_1;
  return;
}

// Unwind@1803357d0
void Unwind_1803357d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3a2) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1803358c0
void Unwind_1803358c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  *(uint8_t *)(param_2 + 0x3a1) = 0;
  return;
}

// Unwind@180335990
void Unwind_180335990(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3a1);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x39c) = uVal_1;
  return;
}

// Unwind@180335a60
void Unwind_180335a60(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  int64_t *pLong_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x39c);
  pLong_2 = *(int64_t **)(param_2 + 0x358);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != (int64_t *)(param_2 + 800));
  }
  func_0x180001e70(param_2 + 0x360);
  *(byte *)(param_2 + 0x39b) = bFlag_1 & 1;
  return;
}

// Unwind@180335b60
void Unwind_180335b60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x39b) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x228), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f0));
    *(uint64_t *)(param_2 + 0x228) = 0;
  }
  return;
}

// Unwind@180335c50
void Unwind_180335c50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x39a) = 0;
  return;
}

// Unwind@180335d20
void Unwind_180335d20(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x39a);
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x399) = uVal_1;
  return;
}

// Unwind@180335df0
void Unwind_180335df0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x399) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x268), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x230));
    *(uint64_t *)(param_2 + 0x268) = 0;
  }
  return;
}

// Unwind@180335ee0
void Unwind_180335ee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x398) = 0;
  return;
}

// Unwind@180335fb0
void Unwind_180335fb0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x398);
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x397) = uVal_1;
  return;
}

// Unwind@180336080
void Unwind_180336080(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x397) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}
