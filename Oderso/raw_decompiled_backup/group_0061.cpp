#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1806309b0
void Unwind_1806309b0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = (uint64_t *)**(int64_t **)(param_2 + 0x13c0);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  func_0x18062b890(*(uint64_t *)(param_2 + 0x13c8));
  return;
}

// func_0x180630f10
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180630f10(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint uVal_2;
  int iVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  float fVal_6;
  uint8_t auStack_13c8 [32];
  float local_13a8;
  float local_13a4;
  uint local_13a0 [2];
  float fStack_1398;
  uint auStack_1394 [1246];
  uint32_t local_1c;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_13c8;
  local_13a0[1] = std::_Random_device();
  local_1c = 0xffffffff;
  lVal_5 = 3;
  uVal_2 = local_13a0[1];
  while( true ) {
    uVal_4 = ((uint64_t)((uVal_2 >> 0x1e ^ uVal_2) * 0x6c078965) + lVal_5) - 2;
    fVal_6 = (float)uVal_4;
    (&local_13a4)[lVal_5] = fVal_6;
    if (lVal_5 == 0x271) break;
    uVal_2 = (((uint)(uVal_4 >> 0x1e) & 3 ^ (uint)fVal_6) * 0x6c078965 + (int)lVal_5) - 1;
    local_13a0[lVal_5] = uVal_2;
    lVal_5 = lVal_5 + 2;
  }
  local_13a0[0] = 0x270;
  uVal_2 = func_0x1800ac880(local_13a0);
  uVal_4 = (uint64_t)uVal_2 * 3;
  if ((int)uVal_4 == 0) {
    do {
      uVal_2 = func_0x1800ac880(local_13a0);
      uVal_4 = (uint64_t)uVal_2 * 3;
    } while ((int)uVal_4 == 0);
  }
  iVal_3 = (int)(uVal_4 >> 0x20);
  *(int *)(param_1 + 0x70) = iVal_3;
  *(uint64_t *)(param_1 + 0x50) = 0;
  uVal_2 = (uint)DAT_180841a12;
  if (uVal_4 >> 0x20 == 2) {
    *(uint *)(param_1 + 0x7c) = uVal_2 * 2 + 4;
    *(uint *)(param_1 + 0x80) = (DAT_180841a12 & 2) + 3;
    *(uint32_t *)(param_1 + 0x84) = 0;
    func_0x18044d690(DAT_1808419e0,&local_13a8);
    local_13a8 = local_13a8 -
                 (*(float *)(param_1 + 0x10) * DAT_1806aeae4 + *(float *)(param_1 + 8) +
                 *(float *)(&DAT_1806dd660 + (uint64_t)DAT_180841a12 * 4));
    local_13a4 = local_13a4 -
                 (DAT_1806aeae4 * *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0xc) +
                 *(float *)(&DAT_1806dd660 + (uint64_t)DAT_180841a12 * 4));
    fVal_6 = DAT_1806b26b4 / SQRT(local_13a8 * local_13a8 + local_13a4 * local_13a4);
    fVal_6 = (float)func_0x180688d60(local_13a8 * fVal_6,
                                 (float)((uint)fVal_6 ^ _DAT_1806af1a0) * local_13a4);
    *(float *)(param_1 + 0x88) = fVal_6 * DAT_1806ce9d0;
  }
  else if (iVal_3 == 1) {
    *(uint32_t *)(param_1 + 0x78) = *(uint32_t *)(&DAT_1806dd620 + (uint64_t)uVal_2 * 4);
  }
  else {
    *(int *)(param_1 + 0x74) = (int)((float)uVal_2 * DAT_1806b676c) + 3;
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_13c8)) {
    return;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_13c8);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180631110
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
void func_0x180631110(int64_t param_1)
{
  int *pInt_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  uint uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint8_t auStack_13d8 [32];
  uint32_t local_13b8;
  uint8_t local_13b0;
  uint local_13a8;
  uint uStack_13a4;
  uint64_t local_13a0;
  uint auStack_1398 [1247];
  uint32_t local_1c;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_13d8;
  *(uint64_t *)(param_1 + 0x58) = (uint64_t)DAT_180841a12 * -0x32 + 500;
  local_13a8 = 0;
  if (1 < DAT_180841a12) {
    uVal_3 = std::_Random_device();
    local_1c = 0xffffffff;
    lVal_7 = 3;
    uVal_4 = uVal_3;
    while( true ) {
      uVal_5 = ((uint64_t)((uVal_4 >> 0x1e ^ uVal_4) * 0x6c078965) + lVal_7) - 2;
      uVal_4 = (uint)uVal_5;
      (&uStack_13a4)[lVal_7] = uVal_4;
      if (lVal_7 == 0x271) break;
      uVal_4 = (((uint)(uVal_5 >> 0x1e) & 3 ^ uVal_4) * 0x6c078965 + (int)lVal_7) - 1;
      auStack_1398[lVal_7 + -2] = uVal_4;
      lVal_7 = lVal_7 + 2;
    }
    local_13a0 = CONCAT44(uVal_3,0x270);
    uVal_4 = func_0x1800ac880(&local_13a0);
    uVal_5 = (uint64_t)uVal_4 * 0xb;
    if ((uVal_5 & 0xfffffffc) == 0) {
      do {
        uVal_4 = func_0x1800ac880(&local_13a0);
        uVal_5 = (uint64_t)uVal_4 * 0xb;
      } while ((uVal_5 & 0xfffffffc) == 0);
    }
    local_13a8 = (uint)(uVal_5 >> 0x1f) & 0xfffffffe;
  }
  uVal_4 = (uint)DAT_180841a12 * 4;
  local_13a0 = CONCAT44((float)((uint64_t)*(uint64_t *)(param_1 + 0x10) >> 0x20) *
                        DAT_1806b28a0._4_4_ +
                        (float)((uint64_t)*(uint64_t *)(param_1 + 8) >> 0x20),
                        (float)*(uint64_t *)(param_1 + 0x10) * (float)DAT_1806b28a0 +
                        (float)*(uint64_t *)(param_1 + 8));
  local_13b0 = DAT_180841a12 == 0;
  local_13b8 = *(uint32_t *)(&DAT_1806dd630 + uVal_4);
  func_0x18044e830(*(uint64_t *)(param_1 + 0x18),&local_13a0,*(uint16_t *)(&DAT_1806dd670 + uVal_4),
                (float)(uint)DAT_180841a12 * DAT_1806be640 + DAT_1806cea70);
  pInt_1 = (int *)(param_1 + 0x74);
  *pInt_1 = *pInt_1 + -1;
  if (*pInt_1 == 0) {
    *(uint8_t *)(param_1 + 0x8c) = 3;
    uVal_6 = func_0x18044d680(*(uint64_t *)(param_1 + 0x18));
    *(uint64_t *)(param_1 + 0x50) = uVal_6;
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_13d8)) {
    return;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_13d8);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x1806312e0
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1806312e0(int64_t param_1)
{
  uint uVal_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  float fVal_4;
  uint uVal_5;
  uint uVal_6;
  int iVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  int iVal_11;
  uint32_t uVal_12;
  float fVal_13;
  float fVal_14;
  uint8_t auStack_1438 [32];
  float local_1418;
  float local_1410;
  uint8_t local_1408;
  uint32_t local_1400;
  uint local_13fc;
  uint64_t local_13f8;
  float local_13f0;
  float local_13ec;
  uint local_13e8 [2];
  float fStack_13e0;
  uint auStack_13dc [1246];
  uint32_t local_64;
  uint64_t local_60;
  
  local_60 = DAT_18083cf40 ^ (uint64_t)auStack_1438;
  *(int64_t *)(param_1 + 0x58) = (int64_t)*(int *)(&DAT_1806dd640 + (uint64_t)DAT_180841a12 * 4);
  local_13e8[1] = std::_Random_device();
  local_64 = 0xffffffff;
  lVal_10 = 3;
  uVal_5 = local_13e8[1];
  while( true ) {
    uVal_8 = ((uint64_t)((uVal_5 >> 0x1e ^ uVal_5) * 0x6c078965) + lVal_10) - 2;
    fVal_4 = (float)uVal_8;
    (&local_13ec)[lVal_10] = fVal_4;
    if (lVal_10 == 0x271) break;
    uVal_5 = (((uint)(uVal_8 >> 0x1e) & 3 ^ (uint)fVal_4) * 0x6c078965 + (int)lVal_10) - 1;
    local_13e8[lVal_10] = uVal_5;
    lVal_10 = lVal_10 + 2;
  }
  local_13e8[0] = 0x270;
  iVal_7 = *(int *)(&DAT_1806dd650 + (uint64_t)DAT_180841a12 * 4);
  func_0x18044d690(DAT_1808419e0);
  fVal_13 = (float)*(uint64_t *)(param_1 + 0x10) * (float)DAT_1806b28a0 +
           (float)*(uint64_t *)(param_1 + 8);
  fVal_14 = (float)((uint64_t)*(uint64_t *)(param_1 + 0x10) >> 0x20) * DAT_1806b28a0._4_4_ +
           (float)((uint64_t)*(uint64_t *)(param_1 + 8) >> 0x20);
  local_13f8 = CONCAT44(fVal_14,fVal_13);
  fVal_4 = *(float *)(&DAT_1806dd660 + (uint64_t)DAT_180841a12 * 4);
  local_13f0 = local_13f0 - (fVal_13 + fVal_4);
  local_13ec = local_13ec - (fVal_14 + fVal_4);
  fVal_13 = DAT_1806b26b4 / SQRT(local_13f0 * local_13f0 + local_13ec * local_13ec);
  fVal_13 = (float)func_0x180688d60(local_13f0 * fVal_13,
                                CONCAT44(_UNK_1806af1a4,
                                         (float)((uint)fVal_13 ^ _DAT_1806af1a0) * local_13ec));
  fVal_13 = fVal_13 * DAT_1806ce9d0;
  iVal_11 = -0x80000000 - iVal_7;
  uVal_5 = (iVal_7 + -0x80000000) - iVal_11;
  if (uVal_5 == 0xffffffff) {
    iVal_7 = func_0x1800ac880(local_13e8);
  }
  else {
    uVal_1 = uVal_5 + 1;
    uVal_6 = func_0x1800ac880(local_13e8);
    lVal_10 = (uint64_t)uVal_6 * (uint64_t)uVal_1;
    if (((uint)lVal_10 <= uVal_5) && ((uint)lVal_10 < ~uVal_5 % uVal_1)) {
      do {
        uVal_6 = func_0x1800ac880(local_13e8);
        lVal_10 = (uint64_t)uVal_6 * (uint64_t)uVal_1;
      } while ((uint)lVal_10 < ~uVal_5 % uVal_1);
    }
    iVal_7 = (int)((uint64_t)lVal_10 >> 0x20);
  }
  fVal_13 = (fVal_13 + (float)(iVal_7 + iVal_11 + -0x80000000)) * DAT_1806aeae0;
  uVal_12 = func_0x18068dd00(fVal_13);
  local_13fc = func_0x18068a470(fVal_13);
  local_1410 = (float)(uint)DAT_180841a12 * DAT_1806b67d8 + DAT_1806cea70;
  local_13fc = local_13fc ^ _DAT_1806af1a0;
  local_1408 = 0;
  local_1418 = fVal_4;
  local_1400 = uVal_12;
  func_0x18062a030(&DAT_180841960,*(uint64_t *)(param_1 + 0x18),&local_13f8,&local_1400);
  pInt_2 = (int *)(param_1 + 0x78);
  *pInt_2 = *pInt_2 + -1;
  if (*pInt_2 == 0) {
    *(uint8_t *)(param_1 + 0x8c) = 3;
    uVal_9 = func_0x18044d680(*(uint64_t *)(param_1 + 0x18));
    *(uint64_t *)(param_1 + 0x50) = uVal_9;
  }
  if (DAT_18083cf40 == (local_60 ^ (uint64_t)auStack_1438)) {
    return;
  }
  func_0x180673080(local_60 ^ (uint64_t)auStack_1438);
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// func_0x1806315c0
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1806315c0(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint uVal_5;
  uint uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  int iVal_10;
  uint32_t uVal_11;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint32_t extraout_XMM0_Dc_02;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  uint32_t extraout_XMM0_Dd_02;
  uint8_t auArr_12 [16];
  float fVal_13;
  float fVal_14;
  float fVal_15;
  float fVal_19;
  float fVal_20;
  float fVal_21;
  float fVal_22;
  uint8_t auArr_16 [16];
  uint8_t auArr_17 [16];
  float fVal_23;
  uint8_t auArr_18 [16];
  float fVal_24;
  float fVal_25;
  float fVal_27;
  float fVal_28;
  float fVal_29;
  uint8_t auArr_26 [16];
  uint8_t auStack_1498 [32];
  uint32_t local_1478;
  uint32_t local_1470;
  uint local_1468;
  uint32_t local_1458;
  uint local_1454;
  uint32_t local_1450;
  uint local_144c;
  uint64_t local_1448;
  uint64_t local_1440;
  uint64_t local_1438;
  uint auStack_1430 [1247];
  uint32_t local_b4;
  uint64_t local_b0;
  uint64_t uStack_48;
  
  uStack_48 = 0x1806315d6;
  local_b0 = DAT_18083cf40 ^ (uint64_t)auStack_1498;
  *(uint64_t *)(param_1 + 0x58) = 300;
  fVal_14 = DAT_1806aeae0;
  fVal_13 = (*(float *)(param_1 + 0x88) + DAT_1806b28c4) * DAT_1806aeae0;
  fVal_25 = (float)*(uint64_t *)(param_1 + 0x10) * (float)DAT_1806b28a0 +
           (float)*(uint64_t *)(param_1 + 8);
  fVal_27 = (float)((uint64_t)*(uint64_t *)(param_1 + 0x10) >> 0x20) * DAT_1806b28a0._4_4_ +
           (float)((uint64_t)*(uint64_t *)(param_1 + 8) >> 0x20);
  fVal_28 = _UNK_1806b28a8 * 0.0 + 0.0;
  fVal_29 = _UNK_1806b28ac * 0.0 + 0.0;
  auArr_16._0_8_ = func_0x18068dd00(fVal_13);
  auArr_16._8_4_ = extraout_XMM0_Dc;
  auArr_16._12_4_ = extraout_XMM0_Dd;
  uVal_8 = func_0x18068a470(fVal_13);
  fVal_24 = _UNK_1806b678c;
  fVal_22 = _UNK_1806b6788;
  fVal_20 = _UNK_1806b6784;
  fVal_13 = _DAT_1806b6780;
  auArr_17._8_4_ = extraout_XMM0_Dc_00;
  auArr_17._0_8_ = uVal_8;
  auArr_17._12_4_ = extraout_XMM0_Dd_00;
  auArr_17 = insertps(auArr_16,auArr_17,0x10);
  fVal_15 = auArr_17._0_4_ * _DAT_1806b6780;
  fVal_19 = auArr_17._4_4_ * _UNK_1806b6784;
  fVal_21 = auArr_17._8_4_ * _UNK_1806b6788;
  fVal_23 = auArr_17._12_4_ * _UNK_1806b678c;
  auArr_12._0_4_ = fVal_25 - fVal_15;
  auArr_12._4_4_ = fVal_27 - fVal_19;
  auArr_12._8_4_ = fVal_28 - fVal_21;
  auArr_12._12_4_ = fVal_29 - fVal_23;
  auArr_2._4_4_ = fVal_27 + fVal_19;
  auArr_2._0_4_ = fVal_25 + fVal_15;
  auArr_2._8_4_ = fVal_28 + fVal_21;
  auArr_2._12_4_ = fVal_29 + fVal_23;
  auArr_17 = blendps(auArr_12,auArr_2,0xd);
  local_1440 = auArr_17._0_8_;
  fVal_15 = ((float)*(int *)(param_1 + 0x84) * DAT_1806b67d0 + *(float *)(param_1 + 0x88)) * fVal_14;
  uVal_11 = func_0x18068dd00(fVal_15);
  local_144c = func_0x18068a470(fVal_15);
  uVal_5 = _DAT_1806af1a0;
  local_144c = local_144c ^ _DAT_1806af1a0;
  fVal_15 = (*(float *)(param_1 + 0x88) + DAT_1806b67bc) * fVal_14;
  local_1450 = uVal_11;
  auArr_18._0_8_ = func_0x18068dd00(fVal_15);
  auArr_18._8_4_ = extraout_XMM0_Dc_01;
  auArr_18._12_4_ = extraout_XMM0_Dd_01;
  uVal_8 = func_0x18068a470(fVal_15);
  auArr_3._8_4_ = extraout_XMM0_Dc_02;
  auArr_3._0_8_ = uVal_8;
  auArr_3._12_4_ = extraout_XMM0_Dd_02;
  auArr_17 = insertps(auArr_18,auArr_3,0x10);
  fVal_13 = auArr_17._0_4_ * fVal_13;
  fVal_20 = auArr_17._4_4_ * fVal_20;
  fVal_22 = auArr_17._8_4_ * fVal_22;
  fVal_24 = auArr_17._12_4_ * fVal_24;
  auArr_26._0_4_ = fVal_25 - fVal_13;
  auArr_26._4_4_ = fVal_27 - fVal_20;
  auArr_26._8_4_ = fVal_28 - fVal_22;
  auArr_26._12_4_ = fVal_29 - fVal_24;
  auArr_4._4_4_ = fVal_27 + fVal_20;
  auArr_4._0_4_ = fVal_25 + fVal_13;
  auArr_4._8_4_ = fVal_28 + fVal_22;
  auArr_4._12_4_ = fVal_29 + fVal_24;
  auArr_17 = blendps(auArr_26,auArr_4,0xd);
  local_1448 = auArr_17._0_8_;
  fVal_14 = ((float)*(int *)(param_1 + 0x84) * DAT_1806b66b0 + *(float *)(param_1 + 0x88)) * fVal_14;
  uVal_11 = func_0x18068dd00(fVal_14);
  local_1454 = func_0x18068a470(fVal_14);
  fVal_13 = DAT_1806b67d8;
  fVal_14 = DAT_1806b613c;
  local_1454 = local_1454 ^ uVal_5;
  local_1458 = uVal_11;
  if (0 < *(int *)(param_1 + 0x7c)) {
    iVal_10 = 0;
    do {
      local_1470 = (float)(uint)DAT_180841a12 * fVal_13 + fVal_14 + (float)iVal_10 * fVal_13;
      local_1478 = *(uint32_t *)(&DAT_1806dd660 + (uint64_t)(uint)DAT_180841a12 * 4);
      local_1468 = local_1468 & 0xffffff00;
      func_0x18062a030(&DAT_180841960,*(uint64_t *)(param_1 + 0x18),&local_1440,&local_1450);
      local_1470 = (float)(uint)DAT_180841a12 * fVal_13 + fVal_14 + (float)iVal_10 * fVal_13;
      local_1478 = *(uint32_t *)(&DAT_1806dd660 + (uint64_t)(uint)DAT_180841a12 * 4);
      local_1468 = local_1468 & 0xffffff00;
      func_0x18062a030(&DAT_180841960,*(uint64_t *)(param_1 + 0x18),&local_1448,&local_1458);
      iVal_10 = iVal_10 + 1;
    } while (iVal_10 < *(int *)(param_1 + 0x7c));
  }
  uVal_5 = *(uint *)(param_1 + 0x84);
  if ((uVal_5 & 1) != 0) {
    uVal_5 = 0;
    if (1 < DAT_180841a12) {
      uVal_6 = std::_Random_device();
      local_b4 = 0xffffffff;
      lVal_9 = 3;
      uVal_5 = uVal_6;
      while( true ) {
        uVal_7 = ((uint64_t)((uVal_5 >> 0x1e ^ uVal_5) * 0x6c078965) + lVal_9) - 2;
        uVal_5 = (uint)uVal_7;
        *(uint *)((int64_t)&local_1440 + lVal_9 * 4 + 4) = uVal_5;
        if (lVal_9 == 0x271) break;
        uVal_5 = (((uint)(uVal_7 >> 0x1e) & 3 ^ uVal_5) * 0x6c078965 + (int)lVal_9) - 1;
        auStack_1430[lVal_9 + -2] = uVal_5;
        lVal_9 = lVal_9 + 2;
      }
      local_1438 = CONCAT44(uVal_6,0x270);
      uVal_5 = func_0x1800ac880(&local_1438);
      uVal_7 = (uint64_t)uVal_5 * 0xb;
      if ((uVal_7 & 0xfffffffc) == 0) {
        do {
          uVal_5 = func_0x1800ac880(&local_1438);
          uVal_7 = (uint64_t)uVal_5 * 0xb;
        } while ((uVal_7 & 0xfffffffc) == 0);
      }
      uVal_5 = (uint)(uVal_7 >> 0x1f) & 0xfffffffe;
    }
    uVal_6 = (uint)DAT_180841a12 * 4;
    local_1438 = CONCAT44((float)((uint64_t)*(uint64_t *)(param_1 + 0x10) >> 0x20) *
                          DAT_1806b28a0._4_4_ +
                          (float)((uint64_t)*(uint64_t *)(param_1 + 8) >> 0x20),
                          (float)*(uint64_t *)(param_1 + 0x10) * (float)DAT_1806b28a0 +
                          (float)*(uint64_t *)(param_1 + 8));
    local_1478 = *(uint32_t *)(&DAT_1806dd660 + uVal_6);
    local_1470 = (float)CONCAT31(local_1470._1_3_,DAT_180841a12 == 0);
    local_1468 = uVal_5;
    func_0x18044e830(*(uint64_t *)(param_1 + 0x18),&local_1438,
                  *(uint16_t *)(&DAT_1806dd670 + uVal_6),
                  (float)(uint)DAT_180841a12 * DAT_1806be640 + DAT_1806cea70);
    uVal_5 = *(uint *)(param_1 + 0x84);
  }
  *(uint *)(param_1 + 0x84) = uVal_5 + 1;
  if (*(int *)(param_1 + 0x80) <= (int)(uVal_5 + 1)) {
    *(uint8_t *)(param_1 + 0x8c) = 3;
    uVal_8 = func_0x18044d680(*(uint64_t *)(param_1 + 0x18));
    *(uint64_t *)(param_1 + 0x50) = uVal_8;
  }
  if (DAT_18083cf40 == (local_b0 ^ (uint64_t)auStack_1498)) {
    return;
  }
  func_0x180673080(local_b0 ^ (uint64_t)auStack_1498);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180631d10
void Unwind_180631d10(void)
{
  func_0x180672f60(&DAT_180841af8);
  return;
}

// Unwind@180632080
void Unwind_180632080(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x13a8);
  return;
}

// func_0x1806322d0
uint32_t * func_0x1806322d0(uint32_t *param_1,byte param_2,uint32_t param_3,uint32_t param_4, uint64_t *param_5)
{
  int iVal_1;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint64_t *local_68;
  uint64_t *local_58;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  _local_78 = ZEXT816(0);
  local_68 = (uint64_t *)0x0;
  local_58 = (uint64_t *)func_0x180672de0(0x20);
  *(uint32_t *)(local_58 + 1) = 0x3f800000;
  *(uint8_t *)((int64_t)local_58 + 0xc) = 1;
  *local_58 = &PTR_FUN_1806dd6c0;
  *(uint32_t *)(local_58 + 3) = param_3;
  local_58[2] = *param_5;
  func_0x180639250(local_78,0,&local_58);
  if (local_58 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*local_58)(local_58,1);
  }
  local_58 = (uint64_t *)func_0x180672de0(0x28);
  *(uint32_t *)(local_58 + 1) = 0x3f800000;
  *(uint8_t *)((int64_t)local_58 + 0xc) = 1;
  *local_58 = &PTR_FUN_1806dd680;
  iVal_1 = (uint)(param_2 ^ 1) * -0x80000000 + -0x40800000;
  *(int *)(local_58 + 2) = iVal_1;
  *(uint64_t *)((int64_t)local_58 + 0x14) = 0x42b4000000000000;
  *(uint32_t *)((int64_t)local_58 + 0x1c) = param_4;
  *(byte *)(local_58 + 4) = param_2 ^ 1;
  if (uStack_70 == local_68) {
    func_0x180639250(local_78,uStack_70,&local_58);
    if (local_58 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*local_58)(local_58,1);
    }
  }
  else {
    *uStack_70 = local_58;
    uStack_70 = uStack_70 + 1;
  }
  local_58 = (uint64_t *)func_0x180672de0(0x20);
  *(uint32_t *)(local_58 + 1) = 0x3f800000;
  *(uint8_t *)((int64_t)local_58 + 0xc) = 1;
  *local_58 = &PTR_FUN_1806dd6c0;
  *(int *)(local_58 + 2) = iVal_1;
  *(uint64_t *)((int64_t)local_58 + 0x14) = 0x4120000000000000;
  if (uStack_70 == local_68) {
    func_0x180639250(local_78,uStack_70,&local_58);
    if (local_58 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*local_58)(local_58,1);
    }
  }
  else {
    *uStack_70 = local_58;
    uStack_70 = uStack_70 + 1;
  }
  *param_1 = local_78._0_4_;
  param_1[1] = local_78._4_4_;
  param_1[2] = (uint32_t)uStack_70;
  param_1[3] = uStack_70._4_4_;
  *(uint64_t **)(param_1 + 4) = local_68;
  return param_1;
}

// Unwind@180632470
void Unwind_180632470(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x40);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806324c0
void Unwind_1806324c0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x40);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180632510
void Unwind_180632510(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x40);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180632560
void Unwind_180632560(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(param_2 + 0x20);
  return;
}

// func_0x1806325a0
void func_0x1806325a0(uint8_t (*param_1)[16])
{
  int64_t *pLong_1;
  uint64_t *pU64_2;
  uint64_t uVal_3;
  int64_t *pLong_4;
  
  pLong_4 = *(int64_t **)*param_1;
  if (pLong_4 != (int64_t *)0x0) {
    pLong_1 = *(int64_t **)(*param_1 + 8);
    if (pLong_4 == pLong_1) {
      uVal_3 = *(int64_t *)param_1[1] - (int64_t)pLong_4;
    }
    else {
      do {
        pU64_2 = (uint64_t *)*pLong_4;
        if (pU64_2 != (uint64_t *)0x0) {
          (**(func_ptr_t *)*pU64_2)(pU64_2,1);
        }
        pLong_4 = pLong_4 + 1;
      } while (pLong_4 != pLong_1);
      pLong_4 = *(int64_t **)*param_1;
      uVal_3 = *(int64_t *)param_1[1] - (int64_t)pLong_4;
    }
    if (0xfff < uVal_3) {
      if (0x1f < (uint64_t)((int64_t)pLong_4 + (-8 - (int64_t)(int64_t *)pLong_4[-1]))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_3 + 0x27;
      pLong_4 = (int64_t *)pLong_4[-1];
    }
    thunk_FUN_180695dd0(pLong_4,uVal_3);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// func_0x180632640
uint32_t * func_0x180632640(uint32_t *param_1,uint32_t param_2,char param_3)
{
  uint32_t uVal_1;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint64_t *local_58;
  uint64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  _local_68 = ZEXT816(0);
  local_58 = (uint64_t *)0x0;
  local_48 = (uint64_t *)func_0x180672de0(0x20);
  *(uint32_t *)(local_48 + 1) = 0x3f800000;
  *(uint8_t *)((int64_t)local_48 + 0xc) = 1;
  *local_48 = &PTR_FUN_1806dd6c0;
  *(uint32_t *)(local_48 + 3) = 0x42c80000;
  local_48[2] = 0x3f80000000000000;
  func_0x180639250(local_68,0,&local_48);
  if (local_48 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*local_48)(local_48,1);
  }
  local_48 = (uint64_t *)func_0x180672de0(0x28);
  *(uint32_t *)(local_48 + 1) = 0x3f800000;
  *(uint8_t *)((int64_t)local_48 + 0xc) = 1;
  *local_48 = &PTR_FUN_1806dd680;
  local_48[2] = 0x3f80000000000000;
  *(uint32_t *)(local_48 + 3) = 0x43340000;
  *(uint32_t *)((int64_t)local_48 + 0x1c) = param_2;
  *(char *)(local_48 + 4) = param_3;
  if (uStack_60 == local_58) {
    func_0x180639250(local_68,uStack_60,&local_48);
    if (local_48 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*local_48)(local_48,1);
    }
  }
  else {
    *uStack_60 = local_48;
    uStack_60 = uStack_60 + 1;
  }
  local_48 = (uint64_t *)func_0x180672de0(0x20);
  uVal_1 = 0xbf800000;
  if (param_3 != '\0') {
    uVal_1 = 0x3f800000;
  }
  *(uint32_t *)(local_48 + 1) = 0x3f800000;
  *(uint8_t *)((int64_t)local_48 + 0xc) = 1;
  *local_48 = &PTR_FUN_1806dd6c0;
  *(uint32_t *)(local_48 + 2) = uVal_1;
  *(uint64_t *)((int64_t)local_48 + 0x14) = 0x4120000000000000;
  if (uStack_60 == local_58) {
    func_0x180639250(local_68,uStack_60,&local_48);
    if (local_48 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*local_48)(local_48,1);
    }
  }
  else {
    *uStack_60 = local_48;
    uStack_60 = uStack_60 + 1;
  }
  *param_1 = local_68._0_4_;
  param_1[1] = local_68._4_4_;
  param_1[2] = (uint32_t)uStack_60;
  param_1[3] = uStack_60._4_4_;
  *(uint64_t **)(param_1 + 4) = local_58;
  return param_1;
}

// Unwind@1806327d0
void Unwind_1806327d0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x40);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180632810
void Unwind_180632810(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x40);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180632850
void Unwind_180632850(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x40);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180632890
void Unwind_180632890(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(param_2 + 0x20);
  return;
}

// func_0x1806328d0
uint32_t * func_0x1806328d0(uint32_t *param_1,uint32_t param_2,byte param_3)
{
  uint64_t *pU64_1;
  int iVal_2;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint64_t *local_68;
  uint64_t *local_58;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  _local_78 = ZEXT816(0);
  local_68 = (uint64_t *)0x0;
  local_58 = (uint64_t *)func_0x180672de0(0x20);
  *(uint32_t *)(local_58 + 1) = 0x3f800000;
  *(uint8_t *)((int64_t)local_58 + 0xc) = 1;
  *local_58 = &PTR_FUN_1806dd6c0;
  *(uint32_t *)(local_58 + 3) = 0x43160000;
  local_58[2] = 0x3f80000000000000;
  func_0x180639250(local_78,0,&local_58);
  if (local_58 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*local_58)(local_58,1);
  }
  pU64_1 = (uint64_t *)func_0x180672de0(0x28);
  *(uint32_t *)(pU64_1 + 1) = 0x3f800000;
  *(uint8_t *)((int64_t)pU64_1 + 0xc) = 1;
  *pU64_1 = &PTR_FUN_1806dd680;
  pU64_1[2] = 0x3f80000000000000;
  pU64_1[3] = DAT_1806dd150;
  *(byte *)(pU64_1 + 4) = param_3;
  if (uStack_70 == local_68) {
    local_58 = pU64_1;
    func_0x180639250(local_78,uStack_70,&local_58);
  }
  else {
    local_58 = (uint64_t *)0x0;
    *uStack_70 = pU64_1;
    uStack_70 = uStack_70 + 1;
  }
  if (local_58 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*local_58)(local_58,1);
  }
  local_58 = (uint64_t *)func_0x180672de0(0x28);
  *(uint32_t *)(local_58 + 1) = 0x3f800000;
  *(uint8_t *)((int64_t)local_58 + 0xc) = 1;
  *local_58 = &PTR_FUN_1806dd680;
  iVal_2 = (uint)(byte)~param_3 * -0x80000000 + -0x40800000;
  *(int *)(local_58 + 2) = iVal_2;
  *(uint64_t *)((int64_t)local_58 + 0x14) = 0x4334000000000000;
  *(uint32_t *)((int64_t)local_58 + 0x1c) = param_2;
  *(byte *)(local_58 + 4) = param_3;
  if (uStack_70 == local_68) {
    func_0x180639250(local_78,uStack_70,&local_58);
    if (local_58 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*local_58)(local_58,1);
    }
  }
  else {
    *uStack_70 = local_58;
    uStack_70 = uStack_70 + 1;
  }
  local_58 = (uint64_t *)func_0x180672de0(0x28);
  *(uint32_t *)(local_58 + 1) = 0x3f800000;
  *(uint8_t *)((int64_t)local_58 + 0xc) = 1;
  *local_58 = &PTR_FUN_1806dd680;
  local_58[2] = 0x3f80000000000000;
  local_58[3] = DAT_1806dd160;
  *(byte *)(local_58 + 4) = param_3;
  if (uStack_70 == local_68) {
    func_0x180639250(local_78,uStack_70,&local_58);
    if (local_58 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*local_58)(local_58,1);
    }
  }
  else {
    *uStack_70 = local_58;
    uStack_70 = uStack_70 + 1;
  }
  local_58 = (uint64_t *)func_0x180672de0(0x20);
  *(uint32_t *)(local_58 + 1) = 0x3f800000;
  *(uint8_t *)((int64_t)local_58 + 0xc) = 1;
  *local_58 = &PTR_FUN_1806dd6c0;
  *(int *)(local_58 + 2) = iVal_2;
  *(uint64_t *)((int64_t)local_58 + 0x14) = 0x41a0000000000000;
  if (uStack_70 == local_68) {
    func_0x180639250(local_78,uStack_70,&local_58);
    if (local_58 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*local_58)(local_58,1);
    }
  }
  else {
    *uStack_70 = local_58;
    uStack_70 = uStack_70 + 1;
  }
  *param_1 = local_78._0_4_;
  param_1[1] = local_78._4_4_;
  param_1[2] = (uint32_t)uStack_70;
  param_1[3] = uStack_70._4_4_;
  *(uint64_t **)(param_1 + 4) = local_68;
  return param_1;
}

// Unwind@180632b50
void Unwind_180632b50(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x40);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180632ba0
void Unwind_180632ba0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x40);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180632bf0
void Unwind_180632bf0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x40);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180632c40
void Unwind_180632c40(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x40);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180632c90
void Unwind_180632c90(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x40);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180632ce0
void Unwind_180632ce0(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(param_2 + 0x20);
  return;
}

// func_0x180632d20
uint64_t * func_0x180632d20(uint64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t param_4)
{
  uint64_t *pU64_1;
  int64_t local_78 [7];
  int64_t *local_40;
  uint64_t *local_38;
  uint64_t *local_30;
  uint64_t *local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_1806dd7c0;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint8_t *)(param_1 + 6) = 0;
  param_1[1] = param_2;
  param_1[2] = *param_3;
  *param_1 = &PTR_LAB_1806dd6e0;
  *(uint8_t (*)[16])(param_1 + 0xe) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)param_1 + 0x79) = ZEXT816(0);
  local_40 = (int64_t *)0x0;
  pU64_1 = *(uint64_t **)(param_4 + 0x38);
  if (pU64_1 != (uint64_t *)0x0) {
    local_38 = param_1 + 0xe;
    local_30 = param_1 + 0xf;
    local_28 = param_1 + 7;
    local_40 = (int64_t *)(**(func_ptr_t *)*pU64_1)(pU64_1,local_78);
  }
  func_0x180210f40(local_78,param_1 + 7);
  if (local_40 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_40 + 0x20))(local_40,local_40 != local_78);
  }
  return param_1;
}

// Unwind@180632de0
void Unwind_180632de0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t **ptr2_Long_2;
  int64_t *pLong_3;
  
  uVal_1 = *(uint64_t *)(param_2 + 0x68);
  ptr2_Long_2 = *(int64_t ***)(param_2 + 0x60);
  pLong_3 = *(int64_t **)(param_2 + 0x58);
  if (pLong_3 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,pLong_3 != (int64_t *)(param_2 + 0x20));
  }
  func_0x18001deb0(uVal_1);
  pLong_3 = *ptr2_Long_2;
  if (pLong_3 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,pLong_3 != *(int64_t **)(param_2 + 0x70));
    *ptr2_Long_2 = (int64_t *)0x0;
  }
  return;
}

// func_0x180632fe0
uint64_t * func_0x180632fe0(uint64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t param_4, uint64_t param_5,uint64_t param_6)
{
  uint64_t *pU64_1;
  int64_t local_90 [7];
  int64_t *local_58;
  uint64_t *local_50;
  uint64_t *local_48;
  uint64_t *local_40;
  uint64_t *local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_1806dd7c0;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint8_t *)(param_1 + 6) = 0;
  param_1[1] = param_2;
  param_1[2] = *param_3;
  *param_1 = &PTR_LAB_1806dd700;
  local_40 = param_1 + 7;
  local_38 = param_1 + 0xe;
  local_48 = param_1 + 0xf;
  local_50 = param_1 + 0x12;
  *(uint8_t (*)[16])(param_1 + 0xe) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x12) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x14) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x16) = ZEXT816(0);
  func_0x18045c3c0(param_2,1);
  local_58 = (int64_t *)0x0;
  pU64_1 = *(uint64_t **)(param_4 + 0x38);
  if (pU64_1 != (uint64_t *)0x0) {
    local_58 = (int64_t *)(**(func_ptr_t *)*pU64_1)(pU64_1,local_90);
  }
  func_0x180210f40(local_90,param_1 + 7);
  if (local_58 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_58 + 0x20))(local_58,local_58 != local_90);
  }
  param_1[0x16] = param_5;
  func_0x1806331a0(param_1 + 0x12,param_6);
  return param_1;
}

// Unwind@180633100
void Unwind_180633100(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x60);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x28));
  }
  return;
}

// Unwind@180633140
void Unwind_180633140(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  func_0x1806332b0(*(uint64_t *)(param_2 + 0x68));
  func_0x1804f6530(*(uint64_t *)(param_2 + 0x70));
  pLong_1 = **(int64_t ***)(int64_t **)(param_2 + 0x80);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x78));
    **(int64_t **)(param_2 + 0x80) = 0;
  }
  return;
}

// func_0x1806331a0
uint8_t (*func_0x1806331a0(uint8_t (*param_1)[16],uint8_t (*param_2)[16]))[16]
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint8_t (*pArr16_4)[16];
  uint8_t (*pArr16_5)[16];
  
  if (param_1 != param_2) {
    pArr16_4 = *(uint8_t (**)[16])*param_1;
    if (pArr16_4 != (uint8_t (*)[16])0x0) {
      pArr16_5 = *(uint8_t (**)[16])(*param_1 + 8);
      if (pArr16_4 != pArr16_5) {
        do {
          lVal_1 = *(int64_t *)*pArr16_4;
          if (lVal_1 != 0) {
            uVal_3 = *(int64_t *)pArr16_4[1] - lVal_1;
            lVal_2 = lVal_1;
            if (0xfff < uVal_3) {
              lVal_2 = *(int64_t *)(lVal_1 + -8);
              if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1806332a6;
              uVal_3 = uVal_3 + 0x27;
            }
            thunk_FUN_180695dd0(lVal_2,uVal_3);
            *pArr16_4 = ZEXT816(0);
            *(uint64_t *)pArr16_4[1] = 0;
          }
          pArr16_4 = (uint8_t (*)[16])(pArr16_4[1] + 8);
        } while (pArr16_4 != pArr16_5);
        pArr16_4 = *(uint8_t (**)[16])*param_1;
      }
      uVal_3 = *(int64_t *)param_1[1] - (int64_t)pArr16_4;
      pArr16_5 = pArr16_4;
      if (0xfff < uVal_3) {
        pArr16_5 = *(uint8_t (**)[16])(pArr16_4[-1] + 8);
        if ((uint8_t *)0x1f < (uint8_t *)((int64_t)pArr16_4 + (-8 - (int64_t)pArr16_5))) {
LAB_1806332a6:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_3 = uVal_3 + 0x27;
      }
      thunk_FUN_180695dd0(pArr16_5,uVal_3);
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

// func_0x1806332b0
void func_0x1806332b0(uint8_t (*param_1)[16])
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint8_t (*pArr16_4)[16];
  uint8_t (*pArr16_5)[16];
  
  pArr16_4 = *(uint8_t (**)[16])*param_1;
  if (pArr16_4 != (uint8_t (*)[16])0x0) {
    pArr16_5 = *(uint8_t (**)[16])(*param_1 + 8);
    if (pArr16_4 != pArr16_5) {
      do {
        lVal_1 = *(int64_t *)*pArr16_4;
        if (lVal_1 != 0) {
          uVal_3 = *(int64_t *)pArr16_4[1] - lVal_1;
          lVal_2 = lVal_1;
          if (0xfff < uVal_3) {
            lVal_2 = *(int64_t *)(lVal_1 + -8);
            if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_180633379;
            uVal_3 = uVal_3 + 0x27;
          }
          thunk_FUN_180695dd0(lVal_2,uVal_3);
          *pArr16_4 = ZEXT816(0);
          *(uint64_t *)pArr16_4[1] = 0;
        }
        pArr16_4 = (uint8_t (*)[16])(pArr16_4[1] + 8);
      } while (pArr16_4 != pArr16_5);
      pArr16_4 = *(uint8_t (**)[16])*param_1;
    }
    uVal_3 = *(int64_t *)param_1[1] - (int64_t)pArr16_4;
    pArr16_5 = pArr16_4;
    if (0xfff < uVal_3) {
      pArr16_5 = *(uint8_t (**)[16])(pArr16_4[-1] + 8);
      if ((uint8_t *)0x1f < (uint8_t *)((int64_t)pArr16_4 + (-8 - (int64_t)pArr16_5))) {
LAB_180633379:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(pArr16_5,uVal_3);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// Unwind@180633580
void Unwind_180633580(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x28);
  return;
}

// func_0x180633750
uint64_t * func_0x180633750(uint64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t param_4, uint64_t param_5,uint8_t param_6,uint8_t param_7,char param_8)
{
  uint64_t *pU64_1;
  float *pFloat_2;
  int64_t local_a0 [7];
  int64_t *local_68;
  uint64_t *local_60;
  uint64_t *local_58;
  uint64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_1806dd7c0;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint8_t *)(param_1 + 6) = 0;
  param_1[1] = param_2;
  param_1[2] = *param_3;
  *param_1 = &PTR_LAB_1806dd740;
  local_58 = param_1 + 7;
  local_50 = param_1 + 0xe;
  local_60 = param_1 + 0xf;
  *(uint8_t (*)[16])(param_1 + 0xe) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x12) = ZEXT816(0);
  *(uint64_t *)((int64_t)param_1 + 0x9d) = 0;
  local_68 = (int64_t *)0x0;
  pU64_1 = *(uint64_t **)(param_4 + 0x38);
  if (pU64_1 != (uint64_t *)0x0) {
    local_68 = (int64_t *)(**(func_ptr_t *)*pU64_1)(pU64_1,local_a0);
  }
  func_0x180210f40(local_a0,param_1 + 7);
  if (local_68 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_68 + 0x20))(local_68,local_68 != local_a0);
  }
  param_1[0x13] = param_5;
  *(uint8_t *)(param_1 + 0x14) = param_6;
  *(uint8_t *)((int64_t)param_1 + 0xa2) = param_7;
  pFloat_2 = (float *)func_0x18038bc50(param_2);
  *(bool *)((int64_t)param_1 + 0xa3) = pFloat_2[2] * DAT_1806aeae4 + *pFloat_2 < *(float *)param_3;
  *(char *)((int64_t)param_1 + 0xa4) = param_8;
  if (param_8 != '\0') {
    func_0x18045c3c0(param_2,1);
  }
  return param_1;
}

// Unwind@1806338b0
void Unwind_1806338b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x60);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x28));
  }
  return;
}

// Unwind@180633900
void Unwind_180633900(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  func_0x1804f6530(*(uint64_t *)(param_2 + 0x68));
  pLong_1 = **(int64_t ***)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x70));
    **(uint64_t **)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@180633bb0
void Unwind_180633bb0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x48);
  return;
}

// func_0x180633ef0
uint64_t * func_0x180633ef0(uint64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t param_4, uint64_t *param_5,uint64_t param_6,uint8_t param_7)
{
  uint64_t *pU64_1;
  int64_t local_98 [7];
  int64_t *local_60;
  uint64_t *local_58;
  uint64_t *local_50;
  uint64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_1806dd7c0;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint8_t *)(param_1 + 6) = 0;
  param_1[1] = param_2;
  param_1[2] = *param_3;
  *param_1 = &PTR_LAB_1806dd780;
  local_50 = param_1 + 7;
  local_48 = param_1 + 0xe;
  local_58 = param_1 + 0xf;
  *(uint8_t (*)[16])(param_1 + 0xe) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x12) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)param_1 + 0x9a) = ZEXT816(0);
  local_60 = (int64_t *)0x0;
  pU64_1 = *(uint64_t **)(param_4 + 0x38);
  if (pU64_1 != (uint64_t *)0x0) {
    local_60 = (int64_t *)(**(func_ptr_t *)*pU64_1)(pU64_1,local_98);
  }
  func_0x180210f40(local_98,param_1 + 7);
  if (local_60 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_60 + 0x20))(local_60,local_60 != local_98);
  }
  param_1[0x14] = param_6;
  *(uint8_t *)((int64_t)param_1 + 0xa9) = param_7;
  param_1[0x12] = *param_5;
  func_0x18045c3c0(param_2,1);
  return param_1;
}

// Unwind@180634000
void Unwind_180634000(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@180634050
void Unwind_180634050(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  func_0x1804f6530(*(uint64_t *)(param_2 + 0x60));
  pLong_1 = **(int64_t ***)(param_2 + 0x70);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x68));
    **(uint64_t **)(param_2 + 0x70) = 0;
  }
  return;
}

// Unwind@180634340
void Unwind_180634340(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x13c8);
  return;
}

// func_0x1806343e0
uint64_t * func_0x1806343e0(uint64_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t *param_4, int64_t param_5,uint64_t param_6,uint8_t param_7,uint8_t param_8)
{
  uint64_t *pU64_1;
  int64_t local_98 [7];
  int64_t *local_60;
  uint64_t *local_58;
  uint64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_1806dd7c0;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint8_t *)(param_1 + 6) = 0;
  param_1[1] = param_2;
  param_1[2] = *param_3;
  *param_1 = &PTR_LAB_1806dd7a0;
  local_58 = param_1 + 7;
  local_50 = param_1 + 0xe;
  *(uint8_t (*)[16])(param_1 + 0xe) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
  *(uint32_t *)(param_1 + 0x12) = 0;
  local_60 = (int64_t *)0x0;
  pU64_1 = *(uint64_t **)(param_5 + 0x38);
  if (pU64_1 != (uint64_t *)0x0) {
    local_60 = (int64_t *)(**(func_ptr_t *)*pU64_1)(pU64_1,local_98);
  }
  func_0x180210f40(local_98,param_1 + 7);
  if (local_60 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*local_60 + 0x20))(local_60,local_60 != local_98);
  }
  param_1[0x10] = param_6;
  param_1[0x11] = *param_4;
  *(uint8_t *)((int64_t)param_1 + 0x91) = param_7;
  *(uint8_t *)((int64_t)param_1 + 0x93) = param_8;
  func_0x18045c3c0(param_2,1);
  return param_1;
}

// Unwind@180634500
void Unwind_180634500(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@180634550
void Unwind_180634550(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = **(int64_t ***)(param_2 + 0x68);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x60));
    **(uint64_t **)(param_2 + 0x68) = 0;
  }
  return;
}

// func_0x180634770
void func_0x180634770(int64_t *param_1)
{
  char ch_1;
  int64_t lVal_2;
  
  if (param_1[4] == 0) {
    lVal_2 = func_0x1800576d0();
    param_1[4] = lVal_2;
    ch_1 = func_0x18044dfc0(param_1[1]);
    if (*(char *)(param_1 + 6) != ch_1) goto LAB_1806347b0;
  }
  else {
    ch_1 = func_0x18044dfc0(param_1[1]);
    if (*(char *)(param_1 + 6) != ch_1) {
LAB_1806347b0:
      *(char *)(param_1 + 6) = ch_1;
      lVal_2 = func_0x1800576d0();
      if (ch_1 != '\0') {
        param_1[5] = param_1[5] + (lVal_2 - param_1[4]);
        return;
      }
      param_1[4] = lVal_2;
      goto LAB_1806347d1;
    }
  }
  if (ch_1 != '\0') {
    return;
  }
LAB_1806347d1:
  lVal_2 = func_0x1800576d0();
  param_1[3] = (lVal_2 - param_1[4]) + param_1[5];
                    /* WARNING: Could not recover jumptable at 0x0001806347ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 8))(param_1);
  return;
}

// func_0x180634800
/* WARNING: Removing unreachable block (ram,0x000180635691) */
/* WARNING: Removing unreachable block (ram,0x00018063569a) */
/* WARNING: Removing unreachable block (ram,0x0001806356c8) */
/* WARNING: Removing unreachable block (ram,0x0001806356df) */
/* WARNING: Removing unreachable block (ram,0x0001806356b0) */
/* WARNING: Removing unreachable block (ram,0x0001806356e8) */
/* WARNING: Removing unreachable block (ram,0x0001806356fe) */
/* WARNING: Removing unreachable block (ram,0x0001806356b3) */
/* WARNING: Removing unreachable block (ram,0x0001806356bb) */
/* WARNING: Removing unreachable block (ram,0x00018063570c) */
/* WARNING: Removing unreachable block (ram,0x000180635710) */
/* WARNING: Removing unreachable block (ram,0x000180635719) */
/* WARNING: Removing unreachable block (ram,0x00018063574d) */
/* WARNING: Removing unreachable block (ram,0x000180635766) */
/* WARNING: Removing unreachable block (ram,0x000180635730) */
/* WARNING: Removing unreachable block (ram,0x000180635770) */
/* WARNING: Removing unreachable block (ram,0x000180635787) */
/* WARNING: Removing unreachable block (ram,0x000180635733) */
/* WARNING: Removing unreachable block (ram,0x00018063573c) */
/* WARNING: Removing unreachable block (ram,0x0001806350e8) */
/* WARNING: Removing unreachable block (ram,0x0001806350ed) */
/* WARNING: Removing unreachable block (ram,0x000180635118) */
/* WARNING: Removing unreachable block (ram,0x00018063512f) */
/* WARNING: Removing unreachable block (ram,0x000180635100) */
/* WARNING: Removing unreachable block (ram,0x000180635138) */
/* WARNING: Removing unreachable block (ram,0x00018063514e) */
/* WARNING: Removing unreachable block (ram,0x000180635103) */
/* WARNING: Removing unreachable block (ram,0x00018063510b) */
/* WARNING: Removing unreachable block (ram,0x00018063515c) */
/* WARNING: Removing unreachable block (ram,0x000180635160) */
/* WARNING: Removing unreachable block (ram,0x000180635169) */
/* WARNING: Removing unreachable block (ram,0x00018063519c) */
/* WARNING: Removing unreachable block (ram,0x0001806351b3) */
/* WARNING: Removing unreachable block (ram,0x000180635180) */
/* WARNING: Removing unreachable block (ram,0x0001806351bc) */
/* WARNING: Removing unreachable block (ram,0x0001806351d2) */
/* WARNING: Removing unreachable block (ram,0x000180635183) */
/* WARNING: Removing unreachable block (ram,0x00018063518b) */
/* WARNING: Removing unreachable block (ram,0x000180634c59) */
/* WARNING: Removing unreachable block (ram,0x000180634c8c) */
/* WARNING: Removing unreachable block (ram,0x000180634ca3) */
/* WARNING: Removing unreachable block (ram,0x000180634c70) */
/* WARNING: Removing unreachable block (ram,0x000180634cac) */
/* WARNING: Removing unreachable block (ram,0x000180634cc2) */
/* WARNING: Removing unreachable block (ram,0x000180634c73) */
/* WARNING: Removing unreachable block (ram,0x000180634c7b) */
/* WARNING: Removing unreachable block (ram,0x000180634bd8) */
/* WARNING: Removing unreachable block (ram,0x000180634bdd) */
/* WARNING: Removing unreachable block (ram,0x000180634c08) */
/* WARNING: Removing unreachable block (ram,0x000180634c1f) */
/* WARNING: Removing unreachable block (ram,0x000180634bf0) */
/* WARNING: Removing unreachable block (ram,0x000180634c28) */
/* WARNING: Removing unreachable block (ram,0x000180634c3e) */
/* WARNING: Removing unreachable block (ram,0x000180634bf3) */
/* WARNING: Removing unreachable block (ram,0x000180634bfb) */
/* WARNING: Removing unreachable block (ram,0x000180634c4c) */
/* WARNING: Removing unreachable block (ram,0x000180634c50) */
/* WARNING: Removing unreachable block (ram,0x000180634865) */
/* WARNING: Removing unreachable block (ram,0x00018063494d) */
/* WARNING: Removing unreachable block (ram,0x000180634978) */
/* WARNING: Removing unreachable block (ram,0x00018063498f) */
/* WARNING: Removing unreachable block (ram,0x000180634960) */
/* WARNING: Removing unreachable block (ram,0x000180634998) */
/* WARNING: Removing unreachable block (ram,0x0001806349ae) */
/* WARNING: Removing unreachable block (ram,0x000180634963) */
/* WARNING: Removing unreachable block (ram,0x00018063496b) */
/* WARNING: Removing unreachable block (ram,0x000180634a09) */
/* WARNING: Removing unreachable block (ram,0x000180634a12) */
/* WARNING: Removing unreachable block (ram,0x000180634a3c) */
/* WARNING: Removing unreachable block (ram,0x000180634a59) */
/* WARNING: Removing unreachable block (ram,0x000180634a20) */
/* WARNING: Removing unreachable block (ram,0x000180634a62) */
/* WARNING: Removing unreachable block (ram,0x000180634a7d) */
/* WARNING: Removing unreachable block (ram,0x000180634a24) */
/* WARNING: Removing unreachable block (ram,0x000180634a2f) */
/* WARNING: Removing unreachable block (ram,0x000180634a8b) */
/* WARNING: Removing unreachable block (ram,0x000180634ab8) */
/* WARNING: Removing unreachable block (ram,0x000180634acf) */
/* WARNING: Removing unreachable block (ram,0x000180634aa0) */
/* WARNING: Removing unreachable block (ram,0x000180634ad8) */
/* WARNING: Removing unreachable block (ram,0x000180634aee) */
/* WARNING: Removing unreachable block (ram,0x000180634aa3) */
/* WARNING: Removing unreachable block (ram,0x000180634aab) */
/* WARNING: Removing unreachable block (ram,0x000180634afc) */
/* WARNING: Removing unreachable block (ram,0x000180634ea8) */
/* WARNING: Removing unreachable block (ram,0x000180634ead) */
/* WARNING: Removing unreachable block (ram,0x000180634ed8) */
/* WARNING: Removing unreachable block (ram,0x000180634eef) */
/* WARNING: Removing unreachable block (ram,0x000180634ec0) */
/* WARNING: Removing unreachable block (ram,0x000180634ef8) */
/* WARNING: Removing unreachable block (ram,0x000180634f0e) */
/* WARNING: Removing unreachable block (ram,0x000180634ec3) */
/* WARNING: Removing unreachable block (ram,0x000180634ecb) */
/* WARNING: Removing unreachable block (ram,0x000180634f1c) */
/* WARNING: Removing unreachable block (ram,0x000180634f20) */
/* WARNING: Removing unreachable block (ram,0x000180634f29) */
/* WARNING: Removing unreachable block (ram,0x000180634f5c) */
/* WARNING: Removing unreachable block (ram,0x000180634f73) */
/* WARNING: Removing unreachable block (ram,0x000180634f40) */
/* WARNING: Removing unreachable block (ram,0x000180634f7c) */
/* WARNING: Removing unreachable block (ram,0x000180634f92) */
/* WARNING: Removing unreachable block (ram,0x000180634f43) */
/* WARNING: Removing unreachable block (ram,0x000180634f4b) */
/* WARNING: Removing unreachable block (ram,0x00018063532c) */
/* WARNING: Removing unreachable block (ram,0x0001806348e6) */
/* WARNING: Removing unreachable block (ram,0x000180634902) */
/* WARNING: Removing unreachable block (ram,0x00018063491d) */
/* WARNING: Removing unreachable block (ram,0x0001806348f0) */
/* WARNING: Removing unreachable block (ram,0x000180634926) */
/* WARNING: Removing unreachable block (ram,0x00018063493f) */
/* WARNING: Removing unreachable block (ram,0x0001806348f5) */
/* WARNING: Removing unreachable block (ram,0x0001806348fe) */
/* WARNING: Removing unreachable block (ram,0x00018063486e) */
/* WARNING: Removing unreachable block (ram,0x000180634892) */
/* WARNING: Removing unreachable block (ram,0x0001806348ad) */
/* WARNING: Removing unreachable block (ram,0x000180634880) */
/* WARNING: Removing unreachable block (ram,0x0001806348b6) */
/* WARNING: Removing unreachable block (ram,0x0001806348cf) */
/* WARNING: Removing unreachable block (ram,0x000180634885) */
/* WARNING: Removing unreachable block (ram,0x00018063488e) */
/* WARNING: Removing unreachable block (ram,0x000180635691) */
/* WARNING: Removing unreachable block (ram,0x00018063569a) */
/* WARNING: Removing unreachable block (ram,0x0001806356c8) */
/* WARNING: Removing unreachable block (ram,0x0001806356df) */
/* WARNING: Removing unreachable block (ram,0x0001806356b0) */
/* WARNING: Removing unreachable block (ram,0x0001806356e8) */
/* WARNING: Removing unreachable block (ram,0x0001806356fe) */
/* WARNING: Removing unreachable block (ram,0x0001806356b3) */
/* WARNING: Removing unreachable block (ram,0x0001806356bb) */
/* WARNING: Removing unreachable block (ram,0x00018063570c) */
/* WARNING: Removing unreachable block (ram,0x000180635710) */
/* WARNING: Removing unreachable block (ram,0x000180635719) */
/* WARNING: Removing unreachable block (ram,0x00018063574d) */
/* WARNING: Removing unreachable block (ram,0x000180635766) */
/* WARNING: Removing unreachable block (ram,0x000180635730) */
/* WARNING: Removing unreachable block (ram,0x000180635770) */
/* WARNING: Removing unreachable block (ram,0x000180635787) */
/* WARNING: Removing unreachable block (ram,0x000180635733) */
/* WARNING: Removing unreachable block (ram,0x00018063573c) */
/* WARNING: Removing unreachable block (ram,0x0001806350e8) */
/* WARNING: Removing unreachable block (ram,0x0001806350ed) */
/* WARNING: Removing unreachable block (ram,0x000180635118) */
/* WARNING: Removing unreachable block (ram,0x00018063512f) */
/* WARNING: Removing unreachable block (ram,0x000180635100) */
/* WARNING: Removing unreachable block (ram,0x000180635138) */
/* WARNING: Removing unreachable block (ram,0x00018063514e) */
/* WARNING: Removing unreachable block (ram,0x000180635103) */
/* WARNING: Removing unreachable block (ram,0x00018063510b) */
/* WARNING: Removing unreachable block (ram,0x00018063515c) */
/* WARNING: Removing unreachable block (ram,0x000180635160) */
/* WARNING: Removing unreachable block (ram,0x000180635169) */
/* WARNING: Removing unreachable block (ram,0x00018063519c) */
/* WARNING: Removing unreachable block (ram,0x0001806351b3) */
/* WARNING: Removing unreachable block (ram,0x000180635180) */
/* WARNING: Removing unreachable block (ram,0x0001806351bc) */
/* WARNING: Removing unreachable block (ram,0x0001806351d2) */
/* WARNING: Removing unreachable block (ram,0x000180635183) */
/* WARNING: Removing unreachable block (ram,0x00018063518b) */
/* WARNING: Removing unreachable block (ram,0x000180634c59) */
/* WARNING: Removing unreachable block (ram,0x000180634c8c) */
/* WARNING: Removing unreachable block (ram,0x000180634ca3) */
/* WARNING: Removing unreachable block (ram,0x000180634c70) */
/* WARNING: Removing unreachable block (ram,0x000180634cac) */
/* WARNING: Removing unreachable block (ram,0x000180634cc2) */
/* WARNING: Removing unreachable block (ram,0x000180634c73) */
/* WARNING: Removing unreachable block (ram,0x000180634c7b) */
/* WARNING: Removing unreachable block (ram,0x000180634bd8) */
/* WARNING: Removing unreachable block (ram,0x000180634bdd) */
/* WARNING: Removing unreachable block (ram,0x000180634c08) */
/* WARNING: Removing unreachable block (ram,0x000180634c1f) */
/* WARNING: Removing unreachable block (ram,0x000180634bf0) */
/* WARNING: Removing unreachable block (ram,0x000180634c28) */
/* WARNING: Removing unreachable block (ram,0x000180634c3e) */
/* WARNING: Removing unreachable block (ram,0x000180634bf3) */
/* WARNING: Removing unreachable block (ram,0x000180634bfb) */
/* WARNING: Removing unreachable block (ram,0x000180634c4c) */
/* WARNING: Removing unreachable block (ram,0x000180634c50) */
/* WARNING: Removing unreachable block (ram,0x000180634865) */
/* WARNING: Removing unreachable block (ram,0x00018063494d) */
/* WARNING: Removing unreachable block (ram,0x000180634978) */
/* WARNING: Removing unreachable block (ram,0x00018063498f) */
/* WARNING: Removing unreachable block (ram,0x000180634960) */
/* WARNING: Removing unreachable block (ram,0x000180634998) */
/* WARNING: Removing unreachable block (ram,0x0001806349ae) */
/* WARNING: Removing unreachable block (ram,0x000180634963) */
/* WARNING: Removing unreachable block (ram,0x00018063496b) */
/* WARNING: Removing unreachable block (ram,0x000180634a09) */
/* WARNING: Removing unreachable block (ram,0x000180634a12) */
/* WARNING: Removing unreachable block (ram,0x000180634a3c) */
/* WARNING: Removing unreachable block (ram,0x000180634a59) */
/* WARNING: Removing unreachable block (ram,0x000180634a20) */
/* WARNING: Removing unreachable block (ram,0x000180634a62) */
/* WARNING: Removing unreachable block (ram,0x000180634a7d) */
/* WARNING: Removing unreachable block (ram,0x000180634a24) */
/* WARNING: Removing unreachable block (ram,0x000180634a2f) */
/* WARNING: Removing unreachable block (ram,0x000180634a8b) */
/* WARNING: Removing unreachable block (ram,0x000180634ab8) */
/* WARNING: Removing unreachable block (ram,0x000180634acf) */
/* WARNING: Removing unreachable block (ram,0x000180634aa0) */
/* WARNING: Removing unreachable block (ram,0x000180634ad8) */
/* WARNING: Removing unreachable block (ram,0x000180634aee) */
/* WARNING: Removing unreachable block (ram,0x000180634aa3) */
/* WARNING: Removing unreachable block (ram,0x000180634aab) */
/* WARNING: Removing unreachable block (ram,0x000180634afc) */
/* WARNING: Removing unreachable block (ram,0x000180634ea8) */
/* WARNING: Removing unreachable block (ram,0x000180634ead) */
/* WARNING: Removing unreachable block (ram,0x000180634ed8) */
/* WARNING: Removing unreachable block (ram,0x000180634eef) */
/* WARNING: Removing unreachable block (ram,0x000180634ec0) */
/* WARNING: Removing unreachable block (ram,0x000180634ef8) */
/* WARNING: Removing unreachable block (ram,0x000180634f0e) */
/* WARNING: Removing unreachable block (ram,0x000180634ec3) */
/* WARNING: Removing unreachable block (ram,0x000180634ecb) */
/* WARNING: Removing unreachable block (ram,0x000180634f1c) */
/* WARNING: Removing unreachable block (ram,0x000180634f20) */
/* WARNING: Removing unreachable block (ram,0x000180634f29) */
/* WARNING: Removing unreachable block (ram,0x000180634f5c) */
/* WARNING: Removing unreachable block (ram,0x000180634f73) */
/* WARNING: Removing unreachable block (ram,0x000180634f40) */
/* WARNING: Removing unreachable block (ram,0x000180634f7c) */
/* WARNING: Removing unreachable block (ram,0x000180634f92) */
/* WARNING: Removing unreachable block (ram,0x000180634f43) */
/* WARNING: Removing unreachable block (ram,0x000180634f4b) */
/* WARNING: Removing unreachable block (ram,0x00018063532c) */
/* WARNING: Removing unreachable block (ram,0x0001806348e6) */
/* WARNING: Removing unreachable block (ram,0x000180634902) */
/* WARNING: Removing unreachable block (ram,0x00018063491d) */
/* WARNING: Removing unreachable block (ram,0x0001806348f0) */
/* WARNING: Removing unreachable block (ram,0x000180634926) */
/* WARNING: Removing unreachable block (ram,0x00018063493f) */
/* WARNING: Removing unreachable block (ram,0x0001806348f5) */
/* WARNING: Removing unreachable block (ram,0x0001806348fe) */
/* WARNING: Removing unreachable block (ram,0x00018063486e) */
/* WARNING: Removing unreachable block (ram,0x000180634892) */
/* WARNING: Removing unreachable block (ram,0x0001806348ad) */
/* WARNING: Removing unreachable block (ram,0x000180634880) */
/* WARNING: Removing unreachable block (ram,0x0001806348b6) */
/* WARNING: Removing unreachable block (ram,0x0001806348cf) */
/* WARNING: Removing unreachable block (ram,0x000180634885) */
/* WARNING: Removing unreachable block (ram,0x00018063488e) */
void func_0x180634800(uint64_t *param_1)
{
  int64_t **ptr2_Long_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  uint64_t *pU64_4;
  int64_t **ptr2_Long_5;
  int64_t **ptr2_Long_6;
  int64_t **ptr2_Long_7;
  int64_t *pLong_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  int64_t **ptr2_Long_13;
  int64_t lVal_14;
  uint64_t *pU64_15;
  int64_t **ptr2_Long_16;
  int64_t lVal_17;
  int64_t *pLong_18;
  uint64_t *pU64_19;
  uint64_t uVal_20;
  int64_t **local_68;
  int64_t **pplStack_60;
  int64_t **local_58;
  
  pU64_4 = (uint64_t *)func_0x180672de0(0x48);
  *pU64_4 = 300;
  pU64_4[1] = &PTR_FUN_1806dd8d0;
  pU64_4[8] = pU64_4 + 1;
  pU64_19 = pU64_4 + 9;
  ptr2_Long_5 = (int64_t **)func_0x180672de0(0x90);
  ptr2_Long_5[9] = (int64_t *)0xfa0;
  ptr2_Long_5[10] = (int64_t *)&PTR_LAB_1806dd950;
  ptr2_Long_5[0x11] = (int64_t *)(ptr2_Long_5 + 10);
  if (pU64_4 != pU64_19) {
    pU64_15 = pU64_4 + -9;
    ptr2_Long_6 = ptr2_Long_5 + 8;
    do {
      ptr2_Long_6[-8] = (int64_t *)pU64_15[9];
      *ptr2_Long_6 = (int64_t *)0x0;
      pLong_8 = (int64_t *)pU64_15[0x11];
      if (pLong_8 != (int64_t *)0x0) {
        if (pU64_15 + 10 == pLong_8) {
          pLong_8 = (int64_t *)(**(func_ptr_t *)(*pLong_8 + 8))(pLong_8,ptr2_Long_6 + -7);
          *ptr2_Long_6 = pLong_8;
          pLong_8 = (int64_t *)pU64_15[0x11];
          if (pLong_8 == (int64_t *)0x0) goto LAB_180634cfe;
          (**(func_ptr_t *)(*pLong_8 + 0x20))(pLong_8,pU64_15 + 10 != pLong_8);
        }
        else {
          *ptr2_Long_6 = pLong_8;
        }
        pU64_15[0x11] = 0;
      }
LAB_180634cfe:
      pU64_15 = pU64_15 + 9;
      ptr2_Long_6 = ptr2_Long_6 + 9;
    } while (pU64_15 != pU64_4);
  }
  pU64_15 = pU64_4;
  if (pU64_4 != (uint64_t *)0x0) {
    for (; pU64_15 != pU64_19; pU64_15 = pU64_15 + 9) {
      pLong_8 = (int64_t *)pU64_15[8];
      if (pLong_8 != (int64_t *)0x0) {
        (**(func_ptr_t *)(*pLong_8 + 0x20))(pLong_8,pU64_15 + 1 != pLong_8);
        pU64_15[8] = 0;
      }
    }
    uVal_11 = (int64_t)pU64_19 - (int64_t)pU64_4;
    pU64_19 = pU64_4;
    if (0xfff < uVal_11) {
      pU64_19 = (uint64_t *)pU64_4[-1];
      if (0x1f < (uint64_t)((int64_t)pU64_4 + (-8 - (int64_t)pU64_19))) goto LAB_180637b20;
      uVal_11 = uVal_11 + 0x27;
    }
    thunk_FUN_180695dd0(pU64_19,uVal_11);
  }
  ptr2_Long_7 = ptr2_Long_5 + 0x12;
  ptr2_Long_6 = (int64_t **)func_0x180672de0(0xd8);
  ptr2_Long_6[0x12] = (int64_t *)0xfa0;
  ptr2_Long_6[0x13] = (int64_t *)&PTR_LAB_1806dd9b0;
  ptr2_Long_6[0x1a] = (int64_t *)(ptr2_Long_6 + 0x13);
  if (ptr2_Long_5 != ptr2_Long_7) {
    ptr2_Long_16 = ptr2_Long_6 + 8;
    ptr2_Long_13 = ptr2_Long_5;
    do {
      ptr2_Long_16[-8] = *ptr2_Long_13;
      *ptr2_Long_16 = (int64_t *)0x0;
      ptr2_Long_1 = (int64_t **)ptr2_Long_13[8];
      if (ptr2_Long_1 != (int64_t **)0x0) {
        if (ptr2_Long_13 + 1 == ptr2_Long_1) {
          pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_1)[1])(ptr2_Long_1,ptr2_Long_16 + -7);
          *ptr2_Long_16 = pLong_8;
          ptr2_Long_1 = (int64_t **)ptr2_Long_13[8];
          if (ptr2_Long_1 == (int64_t **)0x0) goto LAB_180634d7b;
          (*(func_ptr_t )(*ptr2_Long_1)[4])(ptr2_Long_1,ptr2_Long_13 + 1 != ptr2_Long_1);
        }
        else {
          *ptr2_Long_16 = (int64_t *)ptr2_Long_1;
        }
        ptr2_Long_13[8] = (int64_t *)0x0;
      }
LAB_180634d7b:
      ptr2_Long_13 = ptr2_Long_13 + 9;
      ptr2_Long_16 = ptr2_Long_16 + 9;
    } while (ptr2_Long_13 != ptr2_Long_7);
  }
  ptr2_Long_16 = ptr2_Long_5;
  if (ptr2_Long_5 != (int64_t **)0x0) {
    for (; ptr2_Long_16 != ptr2_Long_7; ptr2_Long_16 = ptr2_Long_16 + 9) {
      ptr2_Long_13 = (int64_t **)ptr2_Long_16[8];
      if (ptr2_Long_13 != (int64_t **)0x0) {
        (*(func_ptr_t )(*ptr2_Long_13)[4])(ptr2_Long_13,ptr2_Long_16 + 1 != ptr2_Long_13);
        ptr2_Long_16[8] = (int64_t *)0x0;
      }
    }
    uVal_11 = (int64_t)ptr2_Long_7 - (int64_t)ptr2_Long_5;
    ptr2_Long_7 = ptr2_Long_5;
    if (0xfff < uVal_11) {
      ptr2_Long_7 = (int64_t **)ptr2_Long_5[-1];
      if (0x1f < (uint64_t)((int64_t)ptr2_Long_5 + (-8 - (int64_t)ptr2_Long_7))) goto LAB_180637b20;
      uVal_11 = uVal_11 + 0x27;
    }
    thunk_FUN_180695dd0(ptr2_Long_7,uVal_11);
  }
  ptr2_Long_7 = ptr2_Long_6 + 0x1b;
  ptr2_Long_5 = (int64_t **)func_0x180672de0(0x120);
  ptr2_Long_5[0x1b] = (int64_t *)0x7d0;
  ptr2_Long_5[0x1c] = (int64_t *)&PTR_LAB_1806dda30;
  ptr2_Long_5[0x23] = (int64_t *)(ptr2_Long_5 + 0x1c);
  if (ptr2_Long_6 != ptr2_Long_7) {
    ptr2_Long_16 = ptr2_Long_5 + 8;
    ptr2_Long_13 = ptr2_Long_6;
    do {
      ptr2_Long_16[-8] = *ptr2_Long_13;
      *ptr2_Long_16 = (int64_t *)0x0;
      ptr2_Long_1 = (int64_t **)ptr2_Long_13[8];
      if (ptr2_Long_1 != (int64_t **)0x0) {
        if (ptr2_Long_13 + 1 == ptr2_Long_1) {
          pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_1)[1])(ptr2_Long_1,ptr2_Long_16 + -7);
          *ptr2_Long_16 = pLong_8;
          ptr2_Long_1 = (int64_t **)ptr2_Long_13[8];
          if (ptr2_Long_1 == (int64_t **)0x0) goto LAB_180634fbb;
          (*(func_ptr_t )(*ptr2_Long_1)[4])(ptr2_Long_1,ptr2_Long_13 + 1 != ptr2_Long_1);
        }
        else {
          *ptr2_Long_16 = (int64_t *)ptr2_Long_1;
        }
        ptr2_Long_13[8] = (int64_t *)0x0;
      }
LAB_180634fbb:
      ptr2_Long_13 = ptr2_Long_13 + 9;
      ptr2_Long_16 = ptr2_Long_16 + 9;
    } while (ptr2_Long_13 != ptr2_Long_7);
  }
  ptr2_Long_16 = ptr2_Long_6;
  if (ptr2_Long_6 != (int64_t **)0x0) {
    for (; ptr2_Long_16 != ptr2_Long_7; ptr2_Long_16 = ptr2_Long_16 + 9) {
      ptr2_Long_13 = (int64_t **)ptr2_Long_16[8];
      if (ptr2_Long_13 != (int64_t **)0x0) {
        (*(func_ptr_t )(*ptr2_Long_13)[4])(ptr2_Long_13,ptr2_Long_16 + 1 != ptr2_Long_13);
        ptr2_Long_16[8] = (int64_t *)0x0;
      }
    }
    uVal_11 = (int64_t)ptr2_Long_7 - (int64_t)ptr2_Long_6;
    ptr2_Long_7 = ptr2_Long_6;
    if (0xfff < uVal_11) {
      ptr2_Long_7 = (int64_t **)ptr2_Long_6[-1];
      if (0x1f < (uint64_t)((int64_t)ptr2_Long_6 + (-8 - (int64_t)ptr2_Long_7))) goto LAB_180637b20;
      uVal_11 = uVal_11 + 0x27;
    }
    thunk_FUN_180695dd0(ptr2_Long_7,uVal_11);
  }
  ptr2_Long_7 = ptr2_Long_5 + 0x24;
  ptr2_Long_6 = (int64_t **)func_0x180672de0(0x1b0);
  ptr2_Long_6[0x24] = (int64_t *)0x7d0;
  ptr2_Long_6[0x25] = (int64_t *)&PTR_FUN_1806dd8d0;
  ptr2_Long_6[0x2c] = (int64_t *)(ptr2_Long_6 + 0x25);
  if (ptr2_Long_5 != ptr2_Long_7) {
    ptr2_Long_16 = ptr2_Long_6 + 8;
    ptr2_Long_13 = ptr2_Long_5;
    do {
      ptr2_Long_16[-8] = *ptr2_Long_13;
      *ptr2_Long_16 = (int64_t *)0x0;
      ptr2_Long_1 = (int64_t **)ptr2_Long_13[8];
      if (ptr2_Long_1 != (int64_t **)0x0) {
        if (ptr2_Long_13 + 1 == ptr2_Long_1) {
          pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_1)[1])(ptr2_Long_1,ptr2_Long_16 + -7);
          *ptr2_Long_16 = pLong_8;
          ptr2_Long_1 = (int64_t **)ptr2_Long_13[8];
          if (ptr2_Long_1 == (int64_t **)0x0) goto LAB_1806351fb;
          (*(func_ptr_t )(*ptr2_Long_1)[4])(ptr2_Long_1,ptr2_Long_13 + 1 != ptr2_Long_1);
        }
        else {
          *ptr2_Long_16 = (int64_t *)ptr2_Long_1;
        }
        ptr2_Long_13[8] = (int64_t *)0x0;
      }
LAB_1806351fb:
      ptr2_Long_13 = ptr2_Long_13 + 9;
      ptr2_Long_16 = ptr2_Long_16 + 9;
    } while (ptr2_Long_13 != ptr2_Long_7);
  }
  ptr2_Long_16 = ptr2_Long_5;
  if (ptr2_Long_5 != (int64_t **)0x0) {
    for (; ptr2_Long_16 != ptr2_Long_7; ptr2_Long_16 = ptr2_Long_16 + 9) {
      ptr2_Long_13 = (int64_t **)ptr2_Long_16[8];
      if (ptr2_Long_13 != (int64_t **)0x0) {
        (*(func_ptr_t )(*ptr2_Long_13)[4])(ptr2_Long_13,ptr2_Long_16 + 1 != ptr2_Long_13);
        ptr2_Long_16[8] = (int64_t *)0x0;
      }
    }
    uVal_11 = (int64_t)ptr2_Long_7 - (int64_t)ptr2_Long_5;
    ptr2_Long_7 = ptr2_Long_5;
    if (0xfff < uVal_11) {
      ptr2_Long_7 = (int64_t **)ptr2_Long_5[-1];
      if (0x1f < (uint64_t)((int64_t)ptr2_Long_5 + (-8 - (int64_t)ptr2_Long_7))) goto LAB_180637b20;
      uVal_11 = uVal_11 + 0x27;
    }
    thunk_FUN_180695dd0(ptr2_Long_7,uVal_11);
  }
  ptr2_Long_5 = ptr2_Long_6 + 0x36;
  ptr2_Long_6[0x2d] = (int64_t *)0x7d0;
  ptr2_Long_6[0x2e] = (int64_t *)&PTR_LAB_1806dda90;
  ptr2_Long_6[0x35] = (int64_t *)(ptr2_Long_6 + 0x2e);
  lVal_17 = (int64_t)ptr2_Long_5 - (int64_t)ptr2_Long_6;
  uVal_10 = (lVal_17 >> 3) * -0x71c71c71c71c71c7;
  uVal_11 = uVal_10 + 1;
  uVal_12 = 0x38e38e38e38e38e - (uVal_10 >> 1);
  uVal_20 = (uVal_10 >> 1) + uVal_10;
  if (uVal_20 <= uVal_11) {
    uVal_20 = uVal_11;
  }
  if (uVal_12 <= uVal_10 && uVal_10 - uVal_12 != 0) {
    uVal_20 = 0x38e38e38e38e38e;
  }
  if (uVal_20 < 0x38e38e38e38e38f) {
    if (uVal_20 != 0) {
      if (uVal_20 < 0x39) {
        ptr2_Long_7 = (int64_t **)func_0x180672de0(uVal_20 * 0x48);
        goto LAB_18063565b;
      }
      if (uVal_20 != 0x38e38e38e38e38e) {
        pLong_8 = (int64_t *)func_0x180672de0(uVal_20 * 0x48 + 0x27);
        ptr2_Long_7 = (int64_t **)((int64_t)pLong_8 + 0x27U & 0xffffffffffffffe0);
        ptr2_Long_7[-1] = pLong_8;
        goto LAB_18063565b;
      }
      goto LAB_180637b6a;
    }
    ptr2_Long_7 = (int64_t **)0x0;
LAB_18063565b:
    *(uint64_t *)((int64_t)ptr2_Long_7 + lVal_17) = 4000;
    *(uint8_t ***)((int64_t)ptr2_Long_7 + lVal_17 + 8) = &PTR_LAB_1806ddac0;
    *(int64_t *)((int64_t)ptr2_Long_7 + lVal_17 + 0x40) = (int64_t)ptr2_Long_7 + lVal_17 + 8;
    if (ptr2_Long_6 != ptr2_Long_5) {
      ptr2_Long_16 = ptr2_Long_7 + 8;
      ptr2_Long_13 = ptr2_Long_6;
      do {
        ptr2_Long_16[-8] = *ptr2_Long_13;
        *ptr2_Long_16 = (int64_t *)0x0;
        ptr2_Long_1 = (int64_t **)ptr2_Long_13[8];
        if (ptr2_Long_1 != (int64_t **)0x0) {
          if (ptr2_Long_13 + 1 == ptr2_Long_1) {
            pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_1)[1])(ptr2_Long_1,ptr2_Long_16 + -7);
            *ptr2_Long_16 = pLong_8;
            ptr2_Long_1 = (int64_t **)ptr2_Long_13[8];
            if (ptr2_Long_1 == (int64_t **)0x0) goto LAB_1806357bb;
            (*(func_ptr_t )(*ptr2_Long_1)[4])(ptr2_Long_1,ptr2_Long_13 + 1 != ptr2_Long_1);
          }
          else {
            *ptr2_Long_16 = (int64_t *)ptr2_Long_1;
          }
          ptr2_Long_13[8] = (int64_t *)0x0;
        }
LAB_1806357bb:
        ptr2_Long_13 = ptr2_Long_13 + 9;
        ptr2_Long_16 = ptr2_Long_16 + 9;
      } while (ptr2_Long_13 != ptr2_Long_5);
    }
    ptr2_Long_16 = ptr2_Long_6;
    if (ptr2_Long_6 != (int64_t **)0x0) {
      for (; ptr2_Long_16 != ptr2_Long_6 + 0x36; ptr2_Long_16 = ptr2_Long_16 + 9) {
        ptr2_Long_13 = (int64_t **)ptr2_Long_16[8];
        if (ptr2_Long_13 != (int64_t **)0x0) {
          (*(func_ptr_t )(*ptr2_Long_13)[4])(ptr2_Long_13,ptr2_Long_16 + 1 != ptr2_Long_13);
          ptr2_Long_16[8] = (int64_t *)0x0;
        }
      }
      uVal_10 = (int64_t)ptr2_Long_5 - (int64_t)ptr2_Long_6;
      ptr2_Long_5 = ptr2_Long_6;
      if (0xfff < uVal_10) {
        ptr2_Long_5 = (int64_t **)ptr2_Long_6[-1];
        if (0x1f < (uint64_t)((int64_t)ptr2_Long_6 + (-8 - (int64_t)ptr2_Long_5))) goto LAB_180637b20;
        uVal_10 = uVal_10 + 0x27;
      }
      thunk_FUN_180695dd0(ptr2_Long_5,uVal_10);
    }
    pplStack_60 = ptr2_Long_7 + uVal_11 * 9;
    local_58 = ptr2_Long_7 + uVal_20 * 9;
    if (pplStack_60 == local_58) {
      lVal_17 = (int64_t)local_58 - (int64_t)ptr2_Long_7;
      uVal_10 = (lVal_17 >> 3) * -0x71c71c71c71c71c7;
      uVal_11 = uVal_10 + 1;
      uVal_12 = 0x38e38e38e38e38e - (uVal_10 >> 1);
      uVal_20 = (uVal_10 >> 1) + uVal_10;
      if (uVal_20 <= uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_12 <= uVal_10 && uVal_10 - uVal_12 != 0) {
        uVal_20 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVal_20) goto LAB_180637b28;
      if (uVal_20 == 0) {
        local_68 = (int64_t **)0x0;
LAB_180635958:
        *(uint64_t *)((int64_t)local_68 + lVal_17) = 0;
        *(uint8_t ***)((int64_t)local_68 + lVal_17 + 8) = &PTR_LAB_1806ddb20;
        *(int64_t *)((int64_t)local_68 + lVal_17 + 0x40) = (int64_t)local_68 + lVal_17 + 8;
        if (local_58 == pplStack_60) {
          if (ptr2_Long_7 != local_58) {
            ptr2_Long_5 = local_68 + 8;
            ptr2_Long_6 = ptr2_Long_7;
            do {
              ptr2_Long_5[-8] = *ptr2_Long_6;
              *ptr2_Long_5 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_6[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_6 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_5 + -7);
                  *ptr2_Long_5 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_6[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_180635adb;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_6 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_5 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_6[8] = (int64_t *)0x0;
              }
LAB_180635adb:
              ptr2_Long_6 = ptr2_Long_6 + 9;
              ptr2_Long_5 = ptr2_Long_5 + 9;
            } while (ptr2_Long_6 != local_58);
          }
        }
        else {
          if (ptr2_Long_7 != local_58) {
            ptr2_Long_5 = local_68 + 8;
            ptr2_Long_6 = ptr2_Long_7;
            do {
              ptr2_Long_5[-8] = *ptr2_Long_6;
              *ptr2_Long_5 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_6[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_6 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_5 + -7);
                  *ptr2_Long_5 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_6[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_1806359bb;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_6 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_5 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_6[8] = (int64_t *)0x0;
              }
LAB_1806359bb:
              ptr2_Long_6 = ptr2_Long_6 + 9;
              ptr2_Long_5 = ptr2_Long_5 + 9;
            } while (ptr2_Long_6 != local_58);
          }
          if (local_58 != pplStack_60) {
            lVal_14 = 0;
            do {
              *(uint64_t *)((int64_t)local_68 + lVal_14 + lVal_17 + 0x48) =
                   *(uint64_t *)((int64_t)pplStack_60 + lVal_14);
              *(uint64_t *)((int64_t)local_68 + lVal_14 + lVal_17 + 0x88) = 0;
              pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
              if (pLong_8 != (int64_t *)0x0) {
                pLong_18 = (int64_t *)((int64_t)pplStack_60 + lVal_14 + 8);
                if (pLong_18 == pLong_8) {
                  uVal_9 = (**(func_ptr_t *)(*pLong_8 + 8))
                                    (pLong_8,(int64_t)local_68 + lVal_14 + lVal_17 + 0x50);
                  *(uint64_t *)((int64_t)local_68 + lVal_14 + lVal_17 + 0x88) = uVal_9;
                  pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
                  if (pLong_8 == (int64_t *)0x0) goto LAB_180635a41;
                  (**(func_ptr_t *)(*pLong_8 + 0x20))(pLong_8,pLong_18 != pLong_8);
                }
                else {
                  *(int64_t **)((int64_t)local_68 + lVal_14 + lVal_17 + 0x88) = pLong_8;
                }
                *(uint64_t *)((int64_t)pplStack_60 + lVal_14 + 0x40) = 0;
              }
LAB_180635a41:
              lVal_3 = lVal_14 + 0x48;
              lVal_14 = lVal_14 + 0x48;
            } while ((int64_t **)((int64_t)pplStack_60 + lVal_3) != pplStack_60);
          }
        }
        ptr2_Long_5 = ptr2_Long_7;
        if (ptr2_Long_7 != (int64_t **)0x0) {
          for (; ptr2_Long_5 != pplStack_60; ptr2_Long_5 = ptr2_Long_5 + 9) {
            ptr2_Long_6 = (int64_t **)ptr2_Long_5[8];
            if (ptr2_Long_6 != (int64_t **)0x0) {
              (*(func_ptr_t )(*ptr2_Long_6)[4])(ptr2_Long_6,ptr2_Long_5 + 1 != ptr2_Long_6);
              ptr2_Long_5[8] = (int64_t *)0x0;
            }
          }
          uVal_10 = (int64_t)local_58 - (int64_t)ptr2_Long_7;
          ptr2_Long_5 = ptr2_Long_7;
          if (0xfff < uVal_10) {
            ptr2_Long_5 = (int64_t **)ptr2_Long_7[-1];
            if (0x1f < (uint64_t)((int64_t)ptr2_Long_7 + (-8 - (int64_t)ptr2_Long_5)))
            goto LAB_180637b20;
            uVal_10 = uVal_10 + 0x27;
          }
          thunk_FUN_180695dd0(ptr2_Long_5,uVal_10);
        }
        pplStack_60 = local_68 + uVal_11 * 9;
        local_58 = local_68 + uVal_20 * 9;
        if (pplStack_60 == local_58) goto LAB_180635bd9;
        goto LAB_18063539a;
      }
      if (uVal_20 < 0x39) {
        local_68 = (int64_t **)func_0x180672de0(uVal_20 * 0x48);
        goto LAB_180635958;
      }
      if (uVal_20 != 0x38e38e38e38e38e) {
        pLong_8 = (int64_t *)func_0x180672de0(uVal_20 * 0x48 + 0x27);
        local_68 = (int64_t **)((int64_t)pLong_8 + 0x27U & 0xffffffffffffffe0);
        local_68[-1] = pLong_8;
        goto LAB_180635958;
      }
      goto LAB_180637b70;
    }
    *pplStack_60 = (int64_t *)0x0;
    pplStack_60[1] = (int64_t *)&PTR_LAB_1806ddb20;
    pplStack_60[8] = (int64_t *)(pplStack_60 + 1);
    pplStack_60 = pplStack_60 + 9;
    local_68 = ptr2_Long_7;
    if (pplStack_60 == local_58) {
LAB_180635bd9:
      lVal_17 = (int64_t)local_58 - (int64_t)local_68;
      uVal_10 = (lVal_17 >> 3) * -0x71c71c71c71c71c7;
      uVal_11 = uVal_10 + 1;
      uVal_12 = 0x38e38e38e38e38e - (uVal_10 >> 1);
      uVal_20 = (uVal_10 >> 1) + uVal_10;
      if (uVal_20 <= uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_12 <= uVal_10 && uVal_10 - uVal_12 != 0) {
        uVal_20 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVal_20) goto LAB_180637b2e;
      if (uVal_20 == 0) {
        ptr2_Long_5 = (int64_t **)0x0;
LAB_180635c78:
        *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_17) = 4000;
        *(uint8_t ***)((int64_t)ptr2_Long_5 + lVal_17 + 8) = &PTR_LAB_1806ddb80;
        *(int64_t *)((int64_t)ptr2_Long_5 + lVal_17 + 0x40) = (int64_t)ptr2_Long_5 + lVal_17 + 8;
        if (local_58 == pplStack_60) {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_180635dfb;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_180635dfb:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
        }
        else {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_180635cdb;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_180635cdb:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
          if (local_58 != pplStack_60) {
            lVal_14 = 0;
            do {
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x48) =
                   *(uint64_t *)((int64_t)pplStack_60 + lVal_14);
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = 0;
              pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
              if (pLong_8 != (int64_t *)0x0) {
                pLong_18 = (int64_t *)((int64_t)pplStack_60 + lVal_14 + 8);
                if (pLong_18 == pLong_8) {
                  uVal_9 = (**(func_ptr_t *)(*pLong_8 + 8))
                                    (pLong_8,(int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x50);
                  *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = uVal_9;
                  pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
                  if (pLong_8 == (int64_t *)0x0) goto LAB_180635d61;
                  (**(func_ptr_t *)(*pLong_8 + 0x20))(pLong_8,pLong_18 != pLong_8);
                }
                else {
                  *(int64_t **)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = pLong_8;
                }
                *(uint64_t *)((int64_t)pplStack_60 + lVal_14 + 0x40) = 0;
              }
LAB_180635d61:
              lVal_3 = lVal_14 + 0x48;
              lVal_14 = lVal_14 + 0x48;
            } while ((int64_t **)((int64_t)pplStack_60 + lVal_3) != pplStack_60);
          }
        }
        ptr2_Long_6 = local_68;
        if (local_68 != (int64_t **)0x0) {
          for (; ptr2_Long_6 != pplStack_60; ptr2_Long_6 = ptr2_Long_6 + 9) {
            ptr2_Long_7 = (int64_t **)ptr2_Long_6[8];
            if (ptr2_Long_7 != (int64_t **)0x0) {
              (*(func_ptr_t )(*ptr2_Long_7)[4])(ptr2_Long_7,ptr2_Long_6 + 1 != ptr2_Long_7);
              ptr2_Long_6[8] = (int64_t *)0x0;
            }
          }
          uVal_10 = (int64_t)local_58 - (int64_t)local_68;
          ptr2_Long_6 = local_68;
          if (0xfff < uVal_10) {
            ptr2_Long_6 = (int64_t **)local_68[-1];
            if (0x1f < (uint64_t)((int64_t)local_68 + (-8 - (int64_t)ptr2_Long_6)))
            goto LAB_180637b20;
            uVal_10 = uVal_10 + 0x27;
          }
          thunk_FUN_180695dd0(ptr2_Long_6,uVal_10);
        }
        pplStack_60 = ptr2_Long_5 + uVal_11 * 9;
        local_58 = ptr2_Long_5 + uVal_20 * 9;
        local_68 = ptr2_Long_5;
        if (pplStack_60 == local_58) goto LAB_180635ef9;
        goto LAB_1806353d1;
      }
      if (uVal_20 < 0x39) {
        ptr2_Long_5 = (int64_t **)func_0x180672de0(uVal_20 * 0x48);
        goto LAB_180635c78;
      }
      if (uVal_20 != 0x38e38e38e38e38e) {
        pLong_8 = (int64_t *)func_0x180672de0(uVal_20 * 0x48 + 0x27);
        ptr2_Long_5 = (int64_t **)((int64_t)pLong_8 + 0x27U & 0xffffffffffffffe0);
        ptr2_Long_5[-1] = pLong_8;
        goto LAB_180635c78;
      }
      goto LAB_180637b76;
    }
LAB_18063539a:
    *pplStack_60 = (int64_t *)0xfa0;
    pplStack_60[1] = (int64_t *)&PTR_LAB_1806ddb80;
    pplStack_60[8] = (int64_t *)(pplStack_60 + 1);
    pplStack_60 = pplStack_60 + 9;
    if (pplStack_60 == local_58) {
LAB_180635ef9:
      lVal_17 = (int64_t)local_58 - (int64_t)local_68;
      uVal_10 = (lVal_17 >> 3) * -0x71c71c71c71c71c7;
      uVal_11 = uVal_10 + 1;
      uVal_12 = 0x38e38e38e38e38e - (uVal_10 >> 1);
      uVal_20 = (uVal_10 >> 1) + uVal_10;
      if (uVal_20 <= uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_12 <= uVal_10 && uVal_10 - uVal_12 != 0) {
        uVal_20 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVal_20) goto LAB_180637b34;
      if (uVal_20 == 0) {
        ptr2_Long_5 = (int64_t **)0x0;
LAB_180635f98:
        *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_17) = 6000;
        *(uint8_t ***)((int64_t)ptr2_Long_5 + lVal_17 + 8) = &PTR_LAB_1806ddbe0;
        *(int64_t *)((int64_t)ptr2_Long_5 + lVal_17 + 0x40) = (int64_t)ptr2_Long_5 + lVal_17 + 8;
        if (local_58 == pplStack_60) {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_18063611b;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_18063611b:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
        }
        else {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_180635ffb;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_180635ffb:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
          if (local_58 != pplStack_60) {
            lVal_14 = 0;
            do {
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x48) =
                   *(uint64_t *)((int64_t)pplStack_60 + lVal_14);
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = 0;
              pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
              if (pLong_8 != (int64_t *)0x0) {
                pLong_18 = (int64_t *)((int64_t)pplStack_60 + lVal_14 + 8);
                if (pLong_18 == pLong_8) {
                  uVal_9 = (**(func_ptr_t *)(*pLong_8 + 8))
                                    (pLong_8,(int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x50);
                  *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = uVal_9;
                  pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
                  if (pLong_8 == (int64_t *)0x0) goto LAB_180636081;
                  (**(func_ptr_t *)(*pLong_8 + 0x20))(pLong_8,pLong_18 != pLong_8);
                }
                else {
                  *(int64_t **)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = pLong_8;
                }
                *(uint64_t *)((int64_t)pplStack_60 + lVal_14 + 0x40) = 0;
              }
LAB_180636081:
              lVal_3 = lVal_14 + 0x48;
              lVal_14 = lVal_14 + 0x48;
            } while ((int64_t **)((int64_t)pplStack_60 + lVal_3) != pplStack_60);
          }
        }
        ptr2_Long_6 = local_68;
        if (local_68 != (int64_t **)0x0) {
          for (; ptr2_Long_6 != pplStack_60; ptr2_Long_6 = ptr2_Long_6 + 9) {
            ptr2_Long_7 = (int64_t **)ptr2_Long_6[8];
            if (ptr2_Long_7 != (int64_t **)0x0) {
              (*(func_ptr_t )(*ptr2_Long_7)[4])(ptr2_Long_7,ptr2_Long_6 + 1 != ptr2_Long_7);
              ptr2_Long_6[8] = (int64_t *)0x0;
            }
          }
          uVal_10 = (int64_t)local_58 - (int64_t)local_68;
          ptr2_Long_6 = local_68;
          if (0xfff < uVal_10) {
            ptr2_Long_6 = (int64_t **)local_68[-1];
            if (0x1f < (uint64_t)((int64_t)local_68 + (-8 - (int64_t)ptr2_Long_6)))
            goto LAB_180637b20;
            uVal_10 = uVal_10 + 0x27;
          }
          thunk_FUN_180695dd0(ptr2_Long_6,uVal_10);
        }
        pplStack_60 = ptr2_Long_5 + uVal_11 * 9;
        local_58 = ptr2_Long_5 + uVal_20 * 9;
        local_68 = ptr2_Long_5;
        if (pplStack_60 == local_58) goto LAB_180636219;
        goto LAB_180635408;
      }
      if (uVal_20 < 0x39) {
        ptr2_Long_5 = (int64_t **)func_0x180672de0(uVal_20 * 0x48);
        goto LAB_180635f98;
      }
      if (uVal_20 != 0x38e38e38e38e38e) {
        pLong_8 = (int64_t *)func_0x180672de0(uVal_20 * 0x48 + 0x27);
        ptr2_Long_5 = (int64_t **)((int64_t)pLong_8 + 0x27U & 0xffffffffffffffe0);
        ptr2_Long_5[-1] = pLong_8;
        goto LAB_180635f98;
      }
      goto LAB_180637b7c;
    }
LAB_1806353d1:
    *pplStack_60 = (int64_t *)0x1770;
    pplStack_60[1] = (int64_t *)&PTR_LAB_1806ddbe0;
    pplStack_60[8] = (int64_t *)(pplStack_60 + 1);
    pplStack_60 = pplStack_60 + 9;
    if (pplStack_60 == local_58) {
LAB_180636219:
      lVal_17 = (int64_t)local_58 - (int64_t)local_68;
      uVal_10 = (lVal_17 >> 3) * -0x71c71c71c71c71c7;
      uVal_11 = uVal_10 + 1;
      uVal_12 = 0x38e38e38e38e38e - (uVal_10 >> 1);
      uVal_20 = (uVal_10 >> 1) + uVal_10;
      if (uVal_20 <= uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_12 <= uVal_10 && uVal_10 - uVal_12 != 0) {
        uVal_20 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVal_20) goto LAB_180637b3a;
      if (uVal_20 == 0) {
        ptr2_Long_5 = (int64_t **)0x0;
LAB_1806362b8:
        *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_17) = 300;
        *(uint8_t ***)((int64_t)ptr2_Long_5 + lVal_17 + 8) = &PTR_LAB_1806ddc40;
        *(int64_t *)((int64_t)ptr2_Long_5 + lVal_17 + 0x40) = (int64_t)ptr2_Long_5 + lVal_17 + 8;
        if (local_58 == pplStack_60) {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_18063643b;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_18063643b:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
        }
        else {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_18063631b;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_18063631b:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
          if (local_58 != pplStack_60) {
            lVal_14 = 0;
            do {
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x48) =
                   *(uint64_t *)((int64_t)pplStack_60 + lVal_14);
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = 0;
              pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
              if (pLong_8 != (int64_t *)0x0) {
                pLong_18 = (int64_t *)((int64_t)pplStack_60 + lVal_14 + 8);
                if (pLong_18 == pLong_8) {
                  uVal_9 = (**(func_ptr_t *)(*pLong_8 + 8))
                                    (pLong_8,(int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x50);
                  *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = uVal_9;
                  pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
                  if (pLong_8 == (int64_t *)0x0) goto LAB_1806363a1;
                  (**(func_ptr_t *)(*pLong_8 + 0x20))(pLong_8,pLong_18 != pLong_8);
                }
                else {
                  *(int64_t **)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = pLong_8;
                }
                *(uint64_t *)((int64_t)pplStack_60 + lVal_14 + 0x40) = 0;
              }
LAB_1806363a1:
              lVal_3 = lVal_14 + 0x48;
              lVal_14 = lVal_14 + 0x48;
            } while ((int64_t **)((int64_t)pplStack_60 + lVal_3) != pplStack_60);
          }
        }
        ptr2_Long_6 = local_68;
        if (local_68 != (int64_t **)0x0) {
          for (; ptr2_Long_6 != pplStack_60; ptr2_Long_6 = ptr2_Long_6 + 9) {
            ptr2_Long_7 = (int64_t **)ptr2_Long_6[8];
            if (ptr2_Long_7 != (int64_t **)0x0) {
              (*(func_ptr_t )(*ptr2_Long_7)[4])(ptr2_Long_7,ptr2_Long_6 + 1 != ptr2_Long_7);
              ptr2_Long_6[8] = (int64_t *)0x0;
            }
          }
          uVal_10 = (int64_t)local_58 - (int64_t)local_68;
          ptr2_Long_6 = local_68;
          if (0xfff < uVal_10) {
            ptr2_Long_6 = (int64_t **)local_68[-1];
            if (0x1f < (uint64_t)((int64_t)local_68 + (-8 - (int64_t)ptr2_Long_6)))
            goto LAB_180637b20;
            uVal_10 = uVal_10 + 0x27;
          }
          thunk_FUN_180695dd0(ptr2_Long_6,uVal_10);
        }
        pplStack_60 = ptr2_Long_5 + uVal_11 * 9;
        local_58 = ptr2_Long_5 + uVal_20 * 9;
        local_68 = ptr2_Long_5;
        if (pplStack_60 == local_58) goto LAB_180636539;
        goto LAB_18063543f;
      }
      if (uVal_20 < 0x39) {
        ptr2_Long_5 = (int64_t **)func_0x180672de0(uVal_20 * 0x48);
        goto LAB_1806362b8;
      }
      if (uVal_20 != 0x38e38e38e38e38e) {
        pLong_8 = (int64_t *)func_0x180672de0(uVal_20 * 0x48 + 0x27);
        ptr2_Long_5 = (int64_t **)((int64_t)pLong_8 + 0x27U & 0xffffffffffffffe0);
        ptr2_Long_5[-1] = pLong_8;
        goto LAB_1806362b8;
      }
      goto LAB_180637b82;
    }
LAB_180635408:
    *pplStack_60 = (int64_t *)0x12c;
    pplStack_60[1] = (int64_t *)&PTR_LAB_1806ddc40;
    pplStack_60[8] = (int64_t *)(pplStack_60 + 1);
    pplStack_60 = pplStack_60 + 9;
    if (pplStack_60 == local_58) {
LAB_180636539:
      lVal_17 = (int64_t)local_58 - (int64_t)local_68;
      uVal_10 = (lVal_17 >> 3) * -0x71c71c71c71c71c7;
      uVal_11 = uVal_10 + 1;
      uVal_12 = 0x38e38e38e38e38e - (uVal_10 >> 1);
      uVal_20 = (uVal_10 >> 1) + uVal_10;
      if (uVal_20 <= uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_12 <= uVal_10 && uVal_10 - uVal_12 != 0) {
        uVal_20 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVal_20) goto LAB_180637b40;
      if (uVal_20 == 0) {
        ptr2_Long_5 = (int64_t **)0x0;
LAB_1806365d8:
        *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_17) = 3000;
        *(uint8_t ***)((int64_t)ptr2_Long_5 + lVal_17 + 8) = &PTR_LAB_1806ddca0;
        *(int64_t *)((int64_t)ptr2_Long_5 + lVal_17 + 0x40) = (int64_t)ptr2_Long_5 + lVal_17 + 8;
        if (local_58 == pplStack_60) {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_18063675b;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_18063675b:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
        }
        else {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_18063663b;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_18063663b:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
          if (local_58 != pplStack_60) {
            lVal_14 = 0;
            do {
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x48) =
                   *(uint64_t *)((int64_t)pplStack_60 + lVal_14);
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = 0;
              pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
              if (pLong_8 != (int64_t *)0x0) {
                pLong_18 = (int64_t *)((int64_t)pplStack_60 + lVal_14 + 8);
                if (pLong_18 == pLong_8) {
                  uVal_9 = (**(func_ptr_t *)(*pLong_8 + 8))
                                    (pLong_8,(int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x50);
                  *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = uVal_9;
                  pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
                  if (pLong_8 == (int64_t *)0x0) goto LAB_1806366c1;
                  (**(func_ptr_t *)(*pLong_8 + 0x20))(pLong_8,pLong_18 != pLong_8);
                }
                else {
                  *(int64_t **)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = pLong_8;
                }
                *(uint64_t *)((int64_t)pplStack_60 + lVal_14 + 0x40) = 0;
              }
LAB_1806366c1:
              lVal_3 = lVal_14 + 0x48;
              lVal_14 = lVal_14 + 0x48;
            } while ((int64_t **)((int64_t)pplStack_60 + lVal_3) != pplStack_60);
          }
        }
        ptr2_Long_6 = local_68;
        if (local_68 != (int64_t **)0x0) {
          for (; ptr2_Long_6 != pplStack_60; ptr2_Long_6 = ptr2_Long_6 + 9) {
            ptr2_Long_7 = (int64_t **)ptr2_Long_6[8];
            if (ptr2_Long_7 != (int64_t **)0x0) {
              (*(func_ptr_t )(*ptr2_Long_7)[4])(ptr2_Long_7,ptr2_Long_6 + 1 != ptr2_Long_7);
              ptr2_Long_6[8] = (int64_t *)0x0;
            }
          }
          uVal_10 = (int64_t)local_58 - (int64_t)local_68;
          ptr2_Long_6 = local_68;
          if (0xfff < uVal_10) {
            ptr2_Long_6 = (int64_t **)local_68[-1];
            if (0x1f < (uint64_t)((int64_t)local_68 + (-8 - (int64_t)ptr2_Long_6)))
            goto LAB_180637b20;
            uVal_10 = uVal_10 + 0x27;
          }
          thunk_FUN_180695dd0(ptr2_Long_6,uVal_10);
        }
        pplStack_60 = ptr2_Long_5 + uVal_11 * 9;
        local_58 = ptr2_Long_5 + uVal_20 * 9;
        local_68 = ptr2_Long_5;
        if (pplStack_60 == local_58) goto LAB_180636859;
        goto LAB_180635476;
      }
      if (uVal_20 < 0x39) {
        ptr2_Long_5 = (int64_t **)func_0x180672de0(uVal_20 * 0x48);
        goto LAB_1806365d8;
      }
      if (uVal_20 != 0x38e38e38e38e38e) {
        pLong_8 = (int64_t *)func_0x180672de0(uVal_20 * 0x48 + 0x27);
        ptr2_Long_5 = (int64_t **)((int64_t)pLong_8 + 0x27U & 0xffffffffffffffe0);
        ptr2_Long_5[-1] = pLong_8;
        goto LAB_1806365d8;
      }
      goto LAB_180637b88;
    }
LAB_18063543f:
    *pplStack_60 = (int64_t *)0xbb8;
    pplStack_60[1] = (int64_t *)&PTR_LAB_1806ddca0;
    pplStack_60[8] = (int64_t *)(pplStack_60 + 1);
    pplStack_60 = pplStack_60 + 9;
    if (pplStack_60 == local_58) {
LAB_180636859:
      lVal_17 = (int64_t)local_58 - (int64_t)local_68;
      uVal_10 = (lVal_17 >> 3) * -0x71c71c71c71c71c7;
      uVal_11 = uVal_10 + 1;
      uVal_12 = 0x38e38e38e38e38e - (uVal_10 >> 1);
      uVal_20 = (uVal_10 >> 1) + uVal_10;
      if (uVal_20 <= uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_12 <= uVal_10 && uVal_10 - uVal_12 != 0) {
        uVal_20 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVal_20) goto LAB_180637b46;
      if (uVal_20 == 0) {
        ptr2_Long_5 = (int64_t **)0x0;
LAB_1806368f8:
        *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_17) = 2000;
        *(uint8_t ***)((int64_t)ptr2_Long_5 + lVal_17 + 8) = &PTR_LAB_1806ddcd0;
        *(int64_t *)((int64_t)ptr2_Long_5 + lVal_17 + 0x40) = (int64_t)ptr2_Long_5 + lVal_17 + 8;
        if (local_58 == pplStack_60) {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_180636a7b;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_180636a7b:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
        }
        else {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_18063695b;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_18063695b:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
          if (local_58 != pplStack_60) {
            lVal_14 = 0;
            do {
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x48) =
                   *(uint64_t *)((int64_t)pplStack_60 + lVal_14);
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = 0;
              pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
              if (pLong_8 != (int64_t *)0x0) {
                pLong_18 = (int64_t *)((int64_t)pplStack_60 + lVal_14 + 8);
                if (pLong_18 == pLong_8) {
                  uVal_9 = (**(func_ptr_t *)(*pLong_8 + 8))
                                    (pLong_8,(int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x50);
                  *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = uVal_9;
                  pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
                  if (pLong_8 == (int64_t *)0x0) goto LAB_1806369e1;
                  (**(func_ptr_t *)(*pLong_8 + 0x20))(pLong_8,pLong_18 != pLong_8);
                }
                else {
                  *(int64_t **)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = pLong_8;
                }
                *(uint64_t *)((int64_t)pplStack_60 + lVal_14 + 0x40) = 0;
              }
LAB_1806369e1:
              lVal_3 = lVal_14 + 0x48;
              lVal_14 = lVal_14 + 0x48;
            } while ((int64_t **)((int64_t)pplStack_60 + lVal_3) != pplStack_60);
          }
        }
        ptr2_Long_6 = local_68;
        if (local_68 != (int64_t **)0x0) {
          for (; ptr2_Long_6 != pplStack_60; ptr2_Long_6 = ptr2_Long_6 + 9) {
            ptr2_Long_7 = (int64_t **)ptr2_Long_6[8];
            if (ptr2_Long_7 != (int64_t **)0x0) {
              (*(func_ptr_t )(*ptr2_Long_7)[4])(ptr2_Long_7,ptr2_Long_6 + 1 != ptr2_Long_7);
              ptr2_Long_6[8] = (int64_t *)0x0;
            }
          }
          uVal_10 = (int64_t)local_58 - (int64_t)local_68;
          ptr2_Long_6 = local_68;
          if (0xfff < uVal_10) {
            ptr2_Long_6 = (int64_t **)local_68[-1];
            if (0x1f < (uint64_t)((int64_t)local_68 + (-8 - (int64_t)ptr2_Long_6)))
            goto LAB_180637b20;
            uVal_10 = uVal_10 + 0x27;
          }
          thunk_FUN_180695dd0(ptr2_Long_6,uVal_10);
        }
        pplStack_60 = ptr2_Long_5 + uVal_11 * 9;
        local_58 = ptr2_Long_5 + uVal_20 * 9;
        local_68 = ptr2_Long_5;
        if (pplStack_60 == local_58) goto LAB_180636b79;
        goto LAB_1806354ad;
      }
      if (uVal_20 < 0x39) {
        ptr2_Long_5 = (int64_t **)func_0x180672de0(uVal_20 * 0x48);
        goto LAB_1806368f8;
      }
      if (uVal_20 != 0x38e38e38e38e38e) {
        pLong_8 = (int64_t *)func_0x180672de0(uVal_20 * 0x48 + 0x27);
        ptr2_Long_5 = (int64_t **)((int64_t)pLong_8 + 0x27U & 0xffffffffffffffe0);
        ptr2_Long_5[-1] = pLong_8;
        goto LAB_1806368f8;
      }
      goto LAB_180637b8e;
    }
LAB_180635476:
    *pplStack_60 = (int64_t *)0x7d0;
    pplStack_60[1] = (int64_t *)&PTR_LAB_1806ddcd0;
    pplStack_60[8] = (int64_t *)(pplStack_60 + 1);
    pplStack_60 = pplStack_60 + 9;
    if (pplStack_60 == local_58) {
LAB_180636b79:
      lVal_17 = (int64_t)local_58 - (int64_t)local_68;
      uVal_10 = (lVal_17 >> 3) * -0x71c71c71c71c71c7;
      uVal_11 = uVal_10 + 1;
      uVal_12 = 0x38e38e38e38e38e - (uVal_10 >> 1);
      uVal_20 = (uVal_10 >> 1) + uVal_10;
      if (uVal_20 <= uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_12 <= uVal_10 && uVal_10 - uVal_12 != 0) {
        uVal_20 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVal_20) goto LAB_180637b4c;
      if (uVal_20 == 0) {
        ptr2_Long_5 = (int64_t **)0x0;
LAB_180636c18:
        *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_17) = 5000;
        *(uint8_t ***)((int64_t)ptr2_Long_5 + lVal_17 + 8) = &PTR_LAB_1806ddd30;
        *(int64_t *)((int64_t)ptr2_Long_5 + lVal_17 + 0x40) = (int64_t)ptr2_Long_5 + lVal_17 + 8;
        if (local_58 == pplStack_60) {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_180636d9b;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_180636d9b:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
        }
        else {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_180636c7b;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_180636c7b:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
          if (local_58 != pplStack_60) {
            lVal_14 = 0;
            do {
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x48) =
                   *(uint64_t *)((int64_t)pplStack_60 + lVal_14);
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = 0;
              pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
              if (pLong_8 != (int64_t *)0x0) {
                pLong_18 = (int64_t *)((int64_t)pplStack_60 + lVal_14 + 8);
                if (pLong_18 == pLong_8) {
                  uVal_9 = (**(func_ptr_t *)(*pLong_8 + 8))
                                    (pLong_8,(int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x50);
                  *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = uVal_9;
                  pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
                  if (pLong_8 == (int64_t *)0x0) goto LAB_180636d01;
                  (**(func_ptr_t *)(*pLong_8 + 0x20))(pLong_8,pLong_18 != pLong_8);
                }
                else {
                  *(int64_t **)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = pLong_8;
                }
                *(uint64_t *)((int64_t)pplStack_60 + lVal_14 + 0x40) = 0;
              }
LAB_180636d01:
              lVal_3 = lVal_14 + 0x48;
              lVal_14 = lVal_14 + 0x48;
            } while ((int64_t **)((int64_t)pplStack_60 + lVal_3) != pplStack_60);
          }
        }
        ptr2_Long_6 = local_68;
        if (local_68 != (int64_t **)0x0) {
          for (; ptr2_Long_6 != pplStack_60; ptr2_Long_6 = ptr2_Long_6 + 9) {
            ptr2_Long_7 = (int64_t **)ptr2_Long_6[8];
            if (ptr2_Long_7 != (int64_t **)0x0) {
              (*(func_ptr_t )(*ptr2_Long_7)[4])(ptr2_Long_7,ptr2_Long_6 + 1 != ptr2_Long_7);
              ptr2_Long_6[8] = (int64_t *)0x0;
            }
          }
          uVal_10 = (int64_t)local_58 - (int64_t)local_68;
          ptr2_Long_6 = local_68;
          if (0xfff < uVal_10) {
            ptr2_Long_6 = (int64_t **)local_68[-1];
            if (0x1f < (uint64_t)((int64_t)local_68 + (-8 - (int64_t)ptr2_Long_6)))
            goto LAB_180637b20;
            uVal_10 = uVal_10 + 0x27;
          }
          thunk_FUN_180695dd0(ptr2_Long_6,uVal_10);
        }
        pplStack_60 = ptr2_Long_5 + uVal_11 * 9;
        local_58 = ptr2_Long_5 + uVal_20 * 9;
        local_68 = ptr2_Long_5;
        if (pplStack_60 == local_58) goto LAB_180636e99;
        goto LAB_1806354e4;
      }
      if (uVal_20 < 0x39) {
        ptr2_Long_5 = (int64_t **)func_0x180672de0(uVal_20 * 0x48);
        goto LAB_180636c18;
      }
      if (uVal_20 != 0x38e38e38e38e38e) {
        pLong_8 = (int64_t *)func_0x180672de0(uVal_20 * 0x48 + 0x27);
        ptr2_Long_5 = (int64_t **)((int64_t)pLong_8 + 0x27U & 0xffffffffffffffe0);
        ptr2_Long_5[-1] = pLong_8;
        goto LAB_180636c18;
      }
      goto LAB_180637b94;
    }
LAB_1806354ad:
    *pplStack_60 = (int64_t *)0x1388;
    pplStack_60[1] = (int64_t *)&PTR_LAB_1806ddd30;
    pplStack_60[8] = (int64_t *)(pplStack_60 + 1);
    pplStack_60 = pplStack_60 + 9;
    if (pplStack_60 == local_58) {
LAB_180636e99:
      lVal_17 = (int64_t)local_58 - (int64_t)local_68;
      uVal_10 = (lVal_17 >> 3) * -0x71c71c71c71c71c7;
      uVal_11 = uVal_10 + 1;
      uVal_12 = 0x38e38e38e38e38e - (uVal_10 >> 1);
      uVal_20 = (uVal_10 >> 1) + uVal_10;
      if (uVal_20 <= uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_12 <= uVal_10 && uVal_10 - uVal_12 != 0) {
        uVal_20 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVal_20) goto LAB_180637b52;
      if (uVal_20 == 0) {
        ptr2_Long_5 = (int64_t **)0x0;
LAB_180636f38:
        *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_17) = 6000;
        *(uint8_t ***)((int64_t)ptr2_Long_5 + lVal_17 + 8) = &PTR_LAB_1806ddd90;
        *(int64_t *)((int64_t)ptr2_Long_5 + lVal_17 + 0x40) = (int64_t)ptr2_Long_5 + lVal_17 + 8;
        if (local_58 == pplStack_60) {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_1806370bb;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_1806370bb:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
        }
        else {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_180636f9b;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_180636f9b:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
          if (local_58 != pplStack_60) {
            lVal_14 = 0;
            do {
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x48) =
                   *(uint64_t *)((int64_t)pplStack_60 + lVal_14);
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = 0;
              pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
              if (pLong_8 != (int64_t *)0x0) {
                pLong_18 = (int64_t *)((int64_t)pplStack_60 + lVal_14 + 8);
                if (pLong_18 == pLong_8) {
                  uVal_9 = (**(func_ptr_t *)(*pLong_8 + 8))
                                    (pLong_8,(int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x50);
                  *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = uVal_9;
                  pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
                  if (pLong_8 == (int64_t *)0x0) goto LAB_180637021;
                  (**(func_ptr_t *)(*pLong_8 + 0x20))(pLong_8,pLong_18 != pLong_8);
                }
                else {
                  *(int64_t **)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = pLong_8;
                }
                *(uint64_t *)((int64_t)pplStack_60 + lVal_14 + 0x40) = 0;
              }
LAB_180637021:
              lVal_3 = lVal_14 + 0x48;
              lVal_14 = lVal_14 + 0x48;
            } while ((int64_t **)((int64_t)pplStack_60 + lVal_3) != pplStack_60);
          }
        }
        ptr2_Long_6 = local_68;
        if (local_68 != (int64_t **)0x0) {
          for (; ptr2_Long_6 != pplStack_60; ptr2_Long_6 = ptr2_Long_6 + 9) {
            ptr2_Long_7 = (int64_t **)ptr2_Long_6[8];
            if (ptr2_Long_7 != (int64_t **)0x0) {
              (*(func_ptr_t )(*ptr2_Long_7)[4])(ptr2_Long_7,ptr2_Long_6 + 1 != ptr2_Long_7);
              ptr2_Long_6[8] = (int64_t *)0x0;
            }
          }
          uVal_10 = (int64_t)local_58 - (int64_t)local_68;
          ptr2_Long_6 = local_68;
          if (0xfff < uVal_10) {
            ptr2_Long_6 = (int64_t **)local_68[-1];
            if (0x1f < (uint64_t)((int64_t)local_68 + (-8 - (int64_t)ptr2_Long_6)))
            goto LAB_180637b20;
            uVal_10 = uVal_10 + 0x27;
          }
          thunk_FUN_180695dd0(ptr2_Long_6,uVal_10);
        }
        pplStack_60 = ptr2_Long_5 + uVal_11 * 9;
        local_58 = ptr2_Long_5 + uVal_20 * 9;
        local_68 = ptr2_Long_5;
        if (pplStack_60 == local_58) goto LAB_1806371b9;
        goto LAB_18063551b;
      }
      if (uVal_20 < 0x39) {
        ptr2_Long_5 = (int64_t **)func_0x180672de0(uVal_20 * 0x48);
        goto LAB_180636f38;
      }
      if (uVal_20 != 0x38e38e38e38e38e) {
        pLong_8 = (int64_t *)func_0x180672de0(uVal_20 * 0x48 + 0x27);
        ptr2_Long_5 = (int64_t **)((int64_t)pLong_8 + 0x27U & 0xffffffffffffffe0);
        ptr2_Long_5[-1] = pLong_8;
        goto LAB_180636f38;
      }
      goto LAB_180637b9a;
    }
LAB_1806354e4:
    *pplStack_60 = (int64_t *)0x1770;
    pplStack_60[1] = (int64_t *)&PTR_LAB_1806ddd90;
    pplStack_60[8] = (int64_t *)(pplStack_60 + 1);
    pplStack_60 = pplStack_60 + 9;
    if (pplStack_60 == local_58) {
LAB_1806371b9:
      lVal_17 = (int64_t)local_58 - (int64_t)local_68;
      uVal_10 = (lVal_17 >> 3) * -0x71c71c71c71c71c7;
      uVal_11 = uVal_10 + 1;
      uVal_12 = 0x38e38e38e38e38e - (uVal_10 >> 1);
      uVal_20 = (uVal_10 >> 1) + uVal_10;
      if (uVal_20 <= uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_12 <= uVal_10 && uVal_10 - uVal_12 != 0) {
        uVal_20 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVal_20) goto LAB_180637b58;
      if (uVal_20 == 0) {
        ptr2_Long_5 = (int64_t **)0x0;
LAB_180637258:
        *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_17) = 4000;
        *(uint8_t ***)((int64_t)ptr2_Long_5 + lVal_17 + 8) = &PTR_LAB_1806dde00;
        *(int64_t *)((int64_t)ptr2_Long_5 + lVal_17 + 0x40) = (int64_t)ptr2_Long_5 + lVal_17 + 8;
        if (local_58 == pplStack_60) {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_1806373db;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_1806373db:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
        }
        else {
          if (local_68 != local_58) {
            ptr2_Long_6 = ptr2_Long_5 + 8;
            ptr2_Long_7 = local_68;
            do {
              ptr2_Long_6[-8] = *ptr2_Long_7;
              *ptr2_Long_6 = (int64_t *)0x0;
              ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
              if (ptr2_Long_16 != (int64_t **)0x0) {
                if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                  pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                  *ptr2_Long_6 = pLong_8;
                  ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                  if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_1806372bb;
                  (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                }
                else {
                  *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                }
                ptr2_Long_7[8] = (int64_t *)0x0;
              }
LAB_1806372bb:
              ptr2_Long_7 = ptr2_Long_7 + 9;
              ptr2_Long_6 = ptr2_Long_6 + 9;
            } while (ptr2_Long_7 != local_58);
          }
          if (local_58 != pplStack_60) {
            lVal_14 = 0;
            do {
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x48) =
                   *(uint64_t *)((int64_t)pplStack_60 + lVal_14);
              *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = 0;
              pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
              if (pLong_8 != (int64_t *)0x0) {
                pLong_18 = (int64_t *)((int64_t)pplStack_60 + lVal_14 + 8);
                if (pLong_18 == pLong_8) {
                  uVal_9 = (**(func_ptr_t *)(*pLong_8 + 8))
                                    (pLong_8,(int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x50);
                  *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = uVal_9;
                  pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
                  if (pLong_8 == (int64_t *)0x0) goto LAB_180637341;
                  (**(func_ptr_t *)(*pLong_8 + 0x20))(pLong_8,pLong_18 != pLong_8);
                }
                else {
                  *(int64_t **)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = pLong_8;
                }
                *(uint64_t *)((int64_t)pplStack_60 + lVal_14 + 0x40) = 0;
              }
LAB_180637341:
              lVal_3 = lVal_14 + 0x48;
              lVal_14 = lVal_14 + 0x48;
            } while ((int64_t **)((int64_t)pplStack_60 + lVal_3) != pplStack_60);
          }
        }
        ptr2_Long_6 = local_68;
        if (local_68 != (int64_t **)0x0) {
          for (; ptr2_Long_6 != pplStack_60; ptr2_Long_6 = ptr2_Long_6 + 9) {
            ptr2_Long_7 = (int64_t **)ptr2_Long_6[8];
            if (ptr2_Long_7 != (int64_t **)0x0) {
              (*(func_ptr_t )(*ptr2_Long_7)[4])(ptr2_Long_7,ptr2_Long_6 + 1 != ptr2_Long_7);
              ptr2_Long_6[8] = (int64_t *)0x0;
            }
          }
          uVal_10 = (int64_t)local_58 - (int64_t)local_68;
          ptr2_Long_6 = local_68;
          if (0xfff < uVal_10) {
            ptr2_Long_6 = (int64_t **)local_68[-1];
            if (0x1f < (uint64_t)((int64_t)local_68 + (-8 - (int64_t)ptr2_Long_6)))
            goto LAB_180637b20;
            uVal_10 = uVal_10 + 0x27;
          }
          thunk_FUN_180695dd0(ptr2_Long_6,uVal_10);
        }
        pplStack_60 = ptr2_Long_5 + uVal_11 * 9;
        local_58 = ptr2_Long_5 + uVal_20 * 9;
        local_68 = ptr2_Long_5;
        if (pplStack_60 != local_58) goto LAB_180635552;
        goto LAB_1806374d9;
      }
      if (uVal_20 < 0x39) {
        ptr2_Long_5 = (int64_t **)func_0x180672de0(uVal_20 * 0x48);
        goto LAB_180637258;
      }
      if (uVal_20 != 0x38e38e38e38e38e) {
        pLong_8 = (int64_t *)func_0x180672de0(uVal_20 * 0x48 + 0x27);
        ptr2_Long_5 = (int64_t **)((int64_t)pLong_8 + 0x27U & 0xffffffffffffffe0);
        ptr2_Long_5[-1] = pLong_8;
        goto LAB_180637258;
      }
      goto LAB_180637ba0;
    }
LAB_18063551b:
    *pplStack_60 = (int64_t *)0xfa0;
    pplStack_60[1] = (int64_t *)&PTR_LAB_1806dde00;
    pplStack_60[8] = (int64_t *)(pplStack_60 + 1);
    pplStack_60 = pplStack_60 + 9;
    if (pplStack_60 != local_58) {
LAB_180635552:
      *pplStack_60 = (int64_t *)0x7d0;
      pplStack_60[1] = (int64_t *)&PTR_LAB_1806dde60;
      pplStack_60[8] = (int64_t *)(pplStack_60 + 1);
      pplStack_60 = pplStack_60 + 9;
      if (pplStack_60 == local_58) {
LAB_1806377f9:
        lVal_17 = (int64_t)local_58 - (int64_t)local_68;
        uVal_10 = (lVal_17 >> 3) * -0x71c71c71c71c71c7;
        uVal_11 = uVal_10 + 1;
        uVal_12 = 0x38e38e38e38e38e - (uVal_10 >> 1);
        uVal_20 = (uVal_10 >> 1) + uVal_10;
        if (uVal_20 <= uVal_11) {
          uVal_20 = uVal_11;
        }
        if (uVal_12 <= uVal_10 && uVal_10 - uVal_12 != 0) {
          uVal_20 = 0x38e38e38e38e38e;
        }
        if (uVal_20 < 0x38e38e38e38e38f) {
          if (uVal_20 == 0) {
            ptr2_Long_5 = (int64_t **)0x0;
          }
          else if (uVal_20 < 0x39) {
            ptr2_Long_5 = (int64_t **)func_0x180672de0(uVal_20 * 0x48);
          }
          else {
            if (uVal_20 == 0x38e38e38e38e38e) goto LAB_180637bac;
            pLong_8 = (int64_t *)func_0x180672de0(uVal_20 * 0x48 + 0x27);
            ptr2_Long_5 = (int64_t **)((int64_t)pLong_8 + 0x27U & 0xffffffffffffffe0);
            ptr2_Long_5[-1] = pLong_8;
          }
          *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_17) = 6000;
          *(uint8_t ***)((int64_t)ptr2_Long_5 + lVal_17 + 8) = &PTR_LAB_1806ddee0;
          *(int64_t *)((int64_t)ptr2_Long_5 + lVal_17 + 0x40) = (int64_t)ptr2_Long_5 + lVal_17 + 8;
          if (local_58 == pplStack_60) {
            if (local_68 != local_58) {
              ptr2_Long_6 = ptr2_Long_5 + 8;
              ptr2_Long_7 = local_68;
              do {
                ptr2_Long_6[-8] = *ptr2_Long_7;
                *ptr2_Long_6 = (int64_t *)0x0;
                ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                if (ptr2_Long_16 != (int64_t **)0x0) {
                  if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                    pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                    *ptr2_Long_6 = pLong_8;
                    ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                    if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_180637a1b;
                    (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                  }
                  else {
                    *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                  }
                  ptr2_Long_7[8] = (int64_t *)0x0;
                }
LAB_180637a1b:
                ptr2_Long_7 = ptr2_Long_7 + 9;
                ptr2_Long_6 = ptr2_Long_6 + 9;
              } while (ptr2_Long_7 != local_58);
            }
          }
          else {
            if (local_68 != local_58) {
              ptr2_Long_6 = ptr2_Long_5 + 8;
              ptr2_Long_7 = local_68;
              do {
                ptr2_Long_6[-8] = *ptr2_Long_7;
                *ptr2_Long_6 = (int64_t *)0x0;
                ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                if (ptr2_Long_16 != (int64_t **)0x0) {
                  if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                    pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                    *ptr2_Long_6 = pLong_8;
                    ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                    if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_1806378fb;
                    (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
                  }
                  else {
                    *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
                  }
                  ptr2_Long_7[8] = (int64_t *)0x0;
                }
LAB_1806378fb:
                ptr2_Long_7 = ptr2_Long_7 + 9;
                ptr2_Long_6 = ptr2_Long_6 + 9;
              } while (ptr2_Long_7 != local_58);
            }
            if (local_58 != pplStack_60) {
              lVal_14 = 0;
              do {
                *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x48) =
                     *(uint64_t *)((int64_t)pplStack_60 + lVal_14);
                *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = 0;
                pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
                if (pLong_8 != (int64_t *)0x0) {
                  pLong_18 = (int64_t *)((int64_t)pplStack_60 + lVal_14 + 8);
                  if (pLong_18 == pLong_8) {
                    uVal_9 = (**(func_ptr_t *)(*pLong_8 + 8))
                                      (pLong_8,(int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x50);
                    *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = uVal_9;
                    pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
                    if (pLong_8 == (int64_t *)0x0) goto LAB_180637981;
                    (**(func_ptr_t *)(*pLong_8 + 0x20))(pLong_8,pLong_18 != pLong_8);
                  }
                  else {
                    *(int64_t **)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = pLong_8;
                  }
                  *(uint64_t *)((int64_t)pplStack_60 + lVal_14 + 0x40) = 0;
                }
LAB_180637981:
                lVal_3 = lVal_14 + 0x48;
                lVal_14 = lVal_14 + 0x48;
              } while ((int64_t **)((int64_t)pplStack_60 + lVal_3) != pplStack_60);
            }
          }
          ptr2_Long_6 = local_68;
          if (local_68 != (int64_t **)0x0) {
            for (; ptr2_Long_6 != pplStack_60; ptr2_Long_6 = ptr2_Long_6 + 9) {
              ptr2_Long_7 = (int64_t **)ptr2_Long_6[8];
              if (ptr2_Long_7 != (int64_t **)0x0) {
                (*(func_ptr_t )(*ptr2_Long_7)[4])(ptr2_Long_7,ptr2_Long_6 + 1 != ptr2_Long_7);
                ptr2_Long_6[8] = (int64_t *)0x0;
              }
            }
            uVal_10 = (int64_t)local_58 - (int64_t)local_68;
            ptr2_Long_6 = local_68;
            if (0xfff < uVal_10) {
              ptr2_Long_6 = (int64_t **)local_68[-1];
              if (0x1f < (uint64_t)((int64_t)local_68 + (-8 - (int64_t)ptr2_Long_6))) {
LAB_180637b20:
                do {
                  invalidInstructionException();
                } while( true );
              }
              uVal_10 = uVal_10 + 0x27;
            }
            thunk_FUN_180695dd0(ptr2_Long_6,uVal_10);
          }
          pplStack_60 = ptr2_Long_5 + uVal_11 * 9;
          local_58 = ptr2_Long_5 + uVal_20 * 9;
          goto LAB_180637b00;
        }
        goto LAB_180637b64;
      }
LAB_180635589:
      *pplStack_60 = (int64_t *)0x1770;
      pplStack_60[1] = (int64_t *)&PTR_LAB_1806ddee0;
      pplStack_60[8] = (int64_t *)(pplStack_60 + 1);
      pplStack_60 = pplStack_60 + 9;
      ptr2_Long_5 = local_68;
LAB_180637b00:
      *param_1 = ptr2_Long_5;
      param_1[1] = pplStack_60;
      param_1[2] = local_58;
      return;
    }
LAB_1806374d9:
    lVal_17 = (int64_t)local_58 - (int64_t)local_68;
    uVal_10 = (lVal_17 >> 3) * -0x71c71c71c71c71c7;
    uVal_11 = uVal_10 + 1;
    uVal_12 = 0x38e38e38e38e38e - (uVal_10 >> 1);
    uVal_20 = (uVal_10 >> 1) + uVal_10;
    if (uVal_20 <= uVal_11) {
      uVal_20 = uVal_11;
    }
    if (uVal_12 <= uVal_10 && uVal_10 - uVal_12 != 0) {
      uVal_20 = 0x38e38e38e38e38e;
    }
    if (0x38e38e38e38e38e < uVal_20) goto LAB_180637b5e;
    if (uVal_20 == 0) {
      ptr2_Long_5 = (int64_t **)0x0;
LAB_180637578:
      *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_17) = 2000;
      *(uint8_t ***)((int64_t)ptr2_Long_5 + lVal_17 + 8) = &PTR_LAB_1806dde60;
      *(int64_t *)((int64_t)ptr2_Long_5 + lVal_17 + 0x40) = (int64_t)ptr2_Long_5 + lVal_17 + 8;
      if (local_58 == pplStack_60) {
        if (local_68 != local_58) {
          ptr2_Long_6 = ptr2_Long_5 + 8;
          ptr2_Long_7 = local_68;
          do {
            ptr2_Long_6[-8] = *ptr2_Long_7;
            *ptr2_Long_6 = (int64_t *)0x0;
            ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
            if (ptr2_Long_16 != (int64_t **)0x0) {
              if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                *ptr2_Long_6 = pLong_8;
                ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_1806376fb;
                (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
              }
              else {
                *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
              }
              ptr2_Long_7[8] = (int64_t *)0x0;
            }
LAB_1806376fb:
            ptr2_Long_7 = ptr2_Long_7 + 9;
            ptr2_Long_6 = ptr2_Long_6 + 9;
          } while (ptr2_Long_7 != local_58);
        }
      }
      else {
        if (local_68 != local_58) {
          ptr2_Long_6 = ptr2_Long_5 + 8;
          ptr2_Long_7 = local_68;
          do {
            ptr2_Long_6[-8] = *ptr2_Long_7;
            *ptr2_Long_6 = (int64_t *)0x0;
            ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
            if (ptr2_Long_16 != (int64_t **)0x0) {
              if (ptr2_Long_7 + 1 == ptr2_Long_16) {
                pLong_8 = (int64_t *)(*(func_ptr_t )(*ptr2_Long_16)[1])(ptr2_Long_16,ptr2_Long_6 + -7);
                *ptr2_Long_6 = pLong_8;
                ptr2_Long_16 = (int64_t **)ptr2_Long_7[8];
                if (ptr2_Long_16 == (int64_t **)0x0) goto LAB_1806375db;
                (*(func_ptr_t )(*ptr2_Long_16)[4])(ptr2_Long_16,ptr2_Long_7 + 1 != ptr2_Long_16);
              }
              else {
                *ptr2_Long_6 = (int64_t *)ptr2_Long_16;
              }
              ptr2_Long_7[8] = (int64_t *)0x0;
            }
LAB_1806375db:
            ptr2_Long_7 = ptr2_Long_7 + 9;
            ptr2_Long_6 = ptr2_Long_6 + 9;
          } while (ptr2_Long_7 != local_58);
        }
        if (local_58 != pplStack_60) {
          lVal_14 = 0;
          do {
            *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x48) =
                 *(uint64_t *)((int64_t)pplStack_60 + lVal_14);
            *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = 0;
            pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
            if (pLong_8 != (int64_t *)0x0) {
              pLong_18 = (int64_t *)((int64_t)pplStack_60 + lVal_14 + 8);
              if (pLong_18 == pLong_8) {
                uVal_9 = (**(func_ptr_t *)(*pLong_8 + 8))
                                  (pLong_8,(int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x50);
                *(uint64_t *)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = uVal_9;
                pLong_8 = *(int64_t **)((int64_t)pplStack_60 + lVal_14 + 0x40);
                if (pLong_8 == (int64_t *)0x0) goto LAB_180637661;
                (**(func_ptr_t *)(*pLong_8 + 0x20))(pLong_8,pLong_18 != pLong_8);
              }
              else {
                *(int64_t **)((int64_t)ptr2_Long_5 + lVal_14 + lVal_17 + 0x88) = pLong_8;
              }
              *(uint64_t *)((int64_t)pplStack_60 + lVal_14 + 0x40) = 0;
            }
LAB_180637661:
            lVal_3 = lVal_14 + 0x48;
            lVal_14 = lVal_14 + 0x48;
          } while ((int64_t **)((int64_t)pplStack_60 + lVal_3) != pplStack_60);
        }
      }
      ptr2_Long_6 = local_68;
      if (local_68 != (int64_t **)0x0) {
        for (; ptr2_Long_6 != pplStack_60; ptr2_Long_6 = ptr2_Long_6 + 9) {
          ptr2_Long_7 = (int64_t **)ptr2_Long_6[8];
          if (ptr2_Long_7 != (int64_t **)0x0) {
            (*(func_ptr_t )(*ptr2_Long_7)[4])(ptr2_Long_7,ptr2_Long_6 + 1 != ptr2_Long_7);
            ptr2_Long_6[8] = (int64_t *)0x0;
          }
        }
        uVal_10 = (int64_t)local_58 - (int64_t)local_68;
        ptr2_Long_6 = local_68;
        if (0xfff < uVal_10) {
          ptr2_Long_6 = (int64_t **)local_68[-1];
          if (0x1f < (uint64_t)((int64_t)local_68 + (-8 - (int64_t)ptr2_Long_6))) goto LAB_180637b20;
          uVal_10 = uVal_10 + 0x27;
        }
        thunk_FUN_180695dd0(ptr2_Long_6,uVal_10);
      }
      pplStack_60 = ptr2_Long_5 + uVal_11 * 9;
      local_58 = ptr2_Long_5 + uVal_20 * 9;
      local_68 = ptr2_Long_5;
      if (pplStack_60 == local_58) goto LAB_1806377f9;
      goto LAB_180635589;
    }
    if (uVal_20 < 0x39) {
      ptr2_Long_5 = (int64_t **)func_0x180672de0(uVal_20 * 0x48);
      goto LAB_180637578;
    }
    if (uVal_20 != 0x38e38e38e38e38e) {
      pLong_8 = (int64_t *)func_0x180672de0(uVal_20 * 0x48 + 0x27);
      ptr2_Long_5 = (int64_t **)((int64_t)pLong_8 + 0x27U & 0xffffffffffffffe0);
      ptr2_Long_5[-1] = pLong_8;
      goto LAB_180637578;
    }
  }
  else {
    func_0x18007ba90();
LAB_180637b28:
    func_0x18007ba90();
LAB_180637b2e:
    func_0x18007ba90();
LAB_180637b34:
    func_0x18007ba90();
LAB_180637b3a:
    func_0x18007ba90();
LAB_180637b40:
    func_0x18007ba90();
LAB_180637b46:
    func_0x18007ba90();
LAB_180637b4c:
    func_0x18007ba90();
LAB_180637b52:
    func_0x18007ba90();
LAB_180637b58:
    func_0x18007ba90();
LAB_180637b5e:
    func_0x18007ba90();
LAB_180637b64:
    func_0x18007ba90();
LAB_180637b6a:
    func_0x18007ba90();
LAB_180637b70:
    func_0x18007ba90();
LAB_180637b76:
    func_0x18007ba90();
LAB_180637b7c:
    func_0x18007ba90();
LAB_180637b82:
    func_0x18007ba90();
LAB_180637b88:
    func_0x18007ba90();
LAB_180637b8e:
    func_0x18007ba90();
LAB_180637b94:
    func_0x18007ba90();
LAB_180637b9a:
    func_0x18007ba90();
LAB_180637ba0:
    func_0x18007ba90();
  }
  func_0x18007ba90();
LAB_180637bac:
  func_0x18007ba90();
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// Unwind@180637bc0
void Unwind_180637bc0(uint64_t param_1,int64_t param_2)
{
  func_0x18044ecf0(param_2 + 0x40);
  return;
}

// Unwind@180638070
void Unwind_180638070(void)
{
  func_0x180672f60(&DAT_180841b08);
  return;
}

// Unwind@180638390
void Unwind_180638390(void)
{
  func_0x180672f60(&DAT_180841b18);
  return;
}

// Unwind@1806388d0
void Unwind_1806388d0(void)
{
  func_0x180672f60(&DAT_180841b28);
  return;
}

// Unwind@180639010
void Unwind_180639010(void)
{
  func_0x180672f60(&DAT_180841b38);
  return;
}

// func_0x180639060
int64_t func_0x180639060(uint64_t *param_1,uint64_t param_2,uint16_t *param_3,uint16_t *param_4, byte *param_5,byte *param_6)
{
  byte bFlag_1;
  byte bFlag_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  
  uVal_3 = *param_1;
  uVal_9 = ((int64_t)(param_1[1] - uVal_3) >> 1) * -0x5555555555555555 + 1;
  uVal_5 = ((int64_t)(param_1[2] - uVal_3) >> 1) * -0x5555555555555555;
  uVal_8 = 0x2aaaaaaaaaaaaaaa - (uVal_5 >> 1);
  uVal_7 = (uVal_5 >> 1) + uVal_5;
  if (uVal_7 <= uVal_9) {
    uVal_7 = uVal_9;
  }
  if (uVal_8 <= uVal_5 && uVal_5 - uVal_8 != 0) {
    uVal_7 = 0x2aaaaaaaaaaaaaaa;
  }
  if (uVal_7 < 0x2aaaaaaaaaaaaaab) {
    if (uVal_7 == 0) {
      uVal_5 = 0;
    }
    else if (uVal_7 < 0x2ab) {
      uVal_5 = func_0x180672de0(uVal_7 * 6);
    }
    else {
      if (0x2aaaaaaaaaaaaaa4 < uVal_7) goto LAB_180639240;
      lVal_4 = func_0x180672de0(uVal_7 * 6 + 0x27);
      uVal_5 = lVal_4 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_5 - 8) = lVal_4;
    }
    lVal_4 = param_2 - uVal_3;
    *(uint16_t *)(uVal_5 + lVal_4) = *param_3;
    *(uint16_t *)(uVal_5 + 2 + lVal_4) = *param_4;
    bFlag_1 = *param_5;
    bFlag_2 = *(byte *)(uVal_5 + 4 + lVal_4);
    *(byte *)(uVal_5 + 4 + lVal_4) = bFlag_2 & 0xf8 | bFlag_1 & 7;
    *(byte *)(uVal_5 + 4 + lVal_4) = bFlag_2 & 0xc0 | bFlag_1 & 7 | (*param_6 & 7) << 3;
    if (param_2 == param_1[1]) {
      func_0x1806aa960(uVal_5,*param_1,param_2 - *param_1);
      uVal_3 = *param_1;
    }
    else {
      func_0x1806aa960(uVal_5,*param_1,param_2 - *param_1);
      func_0x1806aa960(uVal_5 + lVal_4 + 6,param_2,param_1[1] - param_2);
      uVal_3 = *param_1;
    }
    if (uVal_3 != 0) {
      uVal_6 = param_1[2] - uVal_3;
      uVal_8 = uVal_3;
      if (0xfff < uVal_6) {
        uVal_8 = *(uint64_t *)(uVal_3 - 8);
        if (0x1f < (uVal_3 - 8) - uVal_8) goto LAB_180639245;
        uVal_6 = uVal_6 + 0x27;
      }
      thunk_FUN_180695dd0(uVal_8,uVal_6);
    }
    *param_1 = uVal_5;
    param_1[1] = uVal_5 + uVal_9 * 6;
    param_1[2] = uVal_5 + uVal_7 * 6;
    return uVal_5 + lVal_4;
  }
LAB_180639240:
  func_0x18007ba90();
LAB_180639245:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x180639250
int64_t * func_0x180639250(int64_t **param_1,int64_t *param_2,uint64_t *param_3)
{
  int64_t *pLong_1;
  uint32_t *pU64_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t *pU64_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  int64_t *pLong_16;
  int64_t *pLong_17;
  int64_t *pLong_18;
  int64_t *pLong_19;
  uint64_t uVal_20;
  uint64_t uVal_21;
  uint64_t uVal_22;
  uint64_t uVal_23;
  
  pLong_18 = *param_1;
  uVal_22 = ((int64_t)param_1[1] - (int64_t)pLong_18 >> 3) + 1;
  uVal_14 = (int64_t)param_1[2] - (int64_t)pLong_18 >> 3;
  uVal_23 = (uVal_14 >> 1) + uVal_14;
  if (uVal_23 <= uVal_22) {
    uVal_23 = uVal_22;
  }
  if (0x1fffffffffffffff - (uVal_14 >> 1) < uVal_14) {
    uVal_23 = 0x1fffffffffffffff;
  }
  if (uVal_23 >> 0x3d != 0) {
LAB_180639648:
    func_0x18007ba90();
    goto LAB_18063964d;
  }
  if (uVal_23 == 0) {
    pLong_19 = (int64_t *)0x0;
  }
  else if (uVal_23 < 0x200) {
    pLong_19 = (int64_t *)func_0x180672de0(uVal_23 * 8);
  }
  else {
    if (0x1ffffffffffffffb < uVal_23) goto LAB_180639648;
    lVal_15 = func_0x180672de0(uVal_23 * 8 + 0x27);
    pLong_19 = (int64_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
    pLong_19[-1] = lVal_15;
  }
  lVal_15 = (int64_t)param_2 - (int64_t)pLong_18;
  pLong_1 = (int64_t *)((int64_t)pLong_19 + lVal_15);
  uVal_3 = *param_3;
  *param_3 = 0;
  *(uint64_t *)((int64_t)pLong_19 + lVal_15) = uVal_3;
  pLong_16 = *param_1;
  pLong_17 = param_1[1];
  if (param_2 == pLong_17) {
    if (pLong_16 != param_2) {
      uVal_14 = (int64_t)param_2 + (-8 - (int64_t)pLong_16);
      pLong_18 = pLong_19;
      if ((uVal_14 < 0x98) ||
         ((pLong_16 < (int64_t *)((int64_t)pLong_19 + (uVal_14 & 0xfffffffffffffff8) + 8) &&
          (pLong_19 < (int64_t *)((int64_t)pLong_16 + (uVal_14 & 0xfffffffffffffff8) + 8))))) {
LAB_180639470:
        do {
          lVal_15 = *pLong_16;
          *pLong_16 = 0;
          *pLong_18 = lVal_15;
          pLong_16 = pLong_16 + 1;
          pLong_18 = pLong_18 + 1;
        } while (pLong_16 != param_2);
      }
      else {
        uVal_14 = (uVal_14 >> 3) + 1;
        uVal_20 = uVal_14 & 0xfffffffffffffffc;
        uVal_21 = 0;
        do {
          pLong_18 = pLong_16 + uVal_21;
          uVal_6 = *(uint32_t *)pLong_18;
          uVal_7 = *(uint32_t *)((int64_t)pLong_18 + 4);
          uVal_8 = *(uint32_t *)(pLong_18 + 1);
          uVal_9 = *(uint32_t *)((int64_t)pLong_18 + 0xc);
          pLong_18 = pLong_16 + uVal_21 + 2;
          uVal_10 = *(uint32_t *)pLong_18;
          uVal_11 = *(uint32_t *)((int64_t)pLong_18 + 4);
          uVal_12 = *(uint32_t *)(pLong_18 + 1);
          uVal_13 = *(uint32_t *)((int64_t)pLong_18 + 0xc);
          *(uint8_t (*)[16])(pLong_16 + uVal_21) = ZEXT816(0);
          *(uint8_t (*)[16])(pLong_16 + uVal_21 + 2) = ZEXT816(0);
          pLong_18 = pLong_19 + uVal_21;
          *(uint32_t *)pLong_18 = uVal_6;
          *(uint32_t *)((int64_t)pLong_18 + 4) = uVal_7;
          *(uint32_t *)(pLong_18 + 1) = uVal_8;
          *(uint32_t *)((int64_t)pLong_18 + 0xc) = uVal_9;
          pLong_18 = pLong_19 + uVal_21 + 2;
          *(uint32_t *)pLong_18 = uVal_10;
          *(uint32_t *)((int64_t)pLong_18 + 4) = uVal_11;
          *(uint32_t *)(pLong_18 + 1) = uVal_12;
          *(uint32_t *)((int64_t)pLong_18 + 0xc) = uVal_13;
          uVal_21 = uVal_21 + 4;
        } while (uVal_20 != uVal_21);
        pLong_16 = pLong_16 + uVal_20;
        pLong_18 = pLong_19 + uVal_20;
        if (uVal_14 != uVal_20) goto LAB_180639470;
      }
      goto LAB_18063948a;
    }
  }
  else {
    if (pLong_16 != param_2) {
      uVal_14 = (int64_t)param_2 + (-8 - (int64_t)pLong_16);
      pLong_17 = pLong_19;
      if ((uVal_14 < 0x98) ||
         ((pLong_16 < (int64_t *)((int64_t)pLong_19 + (uVal_14 & 0xfffffffffffffff8) + 8) &&
          (pLong_19 < (int64_t *)((int64_t)pLong_16 + (uVal_14 & 0xfffffffffffffff8) + 8))))) {
LAB_180639380:
        do {
          lVal_4 = *pLong_16;
          *pLong_16 = 0;
          *pLong_17 = lVal_4;
          pLong_16 = pLong_16 + 1;
          pLong_17 = pLong_17 + 1;
        } while (pLong_16 != param_2);
      }
      else {
        uVal_14 = (uVal_14 >> 3) + 1;
        uVal_20 = uVal_14 & 0xfffffffffffffffc;
        uVal_21 = 0;
        do {
          pLong_17 = pLong_16 + uVal_21;
          uVal_6 = *(uint32_t *)pLong_17;
          uVal_7 = *(uint32_t *)((int64_t)pLong_17 + 4);
          uVal_8 = *(uint32_t *)(pLong_17 + 1);
          uVal_9 = *(uint32_t *)((int64_t)pLong_17 + 0xc);
          pLong_17 = pLong_16 + uVal_21 + 2;
          uVal_10 = *(uint32_t *)pLong_17;
          uVal_11 = *(uint32_t *)((int64_t)pLong_17 + 4);
          uVal_12 = *(uint32_t *)(pLong_17 + 1);
          uVal_13 = *(uint32_t *)((int64_t)pLong_17 + 0xc);
          *(uint8_t (*)[16])(pLong_16 + uVal_21) = ZEXT816(0);
          *(uint8_t (*)[16])(pLong_16 + uVal_21 + 2) = ZEXT816(0);
          pLong_17 = pLong_19 + uVal_21;
          *(uint32_t *)pLong_17 = uVal_6;
          *(uint32_t *)((int64_t)pLong_17 + 4) = uVal_7;
          *(uint32_t *)(pLong_17 + 1) = uVal_8;
          *(uint32_t *)((int64_t)pLong_17 + 0xc) = uVal_9;
          pLong_17 = pLong_19 + uVal_21 + 2;
          *(uint32_t *)pLong_17 = uVal_10;
          *(uint32_t *)((int64_t)pLong_17 + 4) = uVal_11;
          *(uint32_t *)(pLong_17 + 1) = uVal_12;
          *(uint32_t *)((int64_t)pLong_17 + 0xc) = uVal_13;
          uVal_21 = uVal_21 + 4;
        } while (uVal_20 != uVal_21);
        pLong_16 = pLong_16 + uVal_20;
        pLong_17 = pLong_19 + uVal_20;
        if (uVal_14 != uVal_20) goto LAB_180639380;
      }
      pLong_17 = param_1[1];
    }
    if (param_2 != pLong_17) {
      uVal_14 = (int64_t)pLong_17 + (-8 - (int64_t)param_2);
      pLong_16 = pLong_1;
      if ((0x107 < uVal_14) &&
         (((int64_t *)
           ((int64_t)pLong_19 +
           (int64_t)param_2 + ((uVal_14 & 0xfffffffffffffff8) - (int64_t)pLong_18) + 0x10) <=
           param_2 ||
          ((int64_t)param_2 + (uVal_14 & 0xfffffffffffffff8) + 8 <=
           (uint64_t)((int64_t)pLong_19 + lVal_15 + 8))))) {
        uVal_14 = (uVal_14 >> 3) + 1;
        uVal_20 = uVal_14 & 0xfffffffffffffffc;
        uVal_21 = 0;
        do {
          pLong_18 = param_2 + uVal_21;
          uVal_6 = *(uint32_t *)pLong_18;
          uVal_7 = *(uint32_t *)((int64_t)pLong_18 + 4);
          uVal_8 = *(uint32_t *)(pLong_18 + 1);
          uVal_9 = *(uint32_t *)((int64_t)pLong_18 + 0xc);
          pLong_18 = param_2 + uVal_21 + 2;
          uVal_10 = *(uint32_t *)pLong_18;
          uVal_11 = *(uint32_t *)((int64_t)pLong_18 + 4);
          uVal_12 = *(uint32_t *)(pLong_18 + 1);
          uVal_13 = *(uint32_t *)((int64_t)pLong_18 + 0xc);
          *(uint8_t (*)[16])(param_2 + uVal_21) = ZEXT816(0);
          *(uint8_t (*)[16])(param_2 + uVal_21 + 2) = ZEXT816(0);
          pU64_2 = (uint32_t *)((int64_t)pLong_19 + uVal_21 * 8 + lVal_15 + 8);
          *pU64_2 = uVal_6;
          pU64_2[1] = uVal_7;
          pU64_2[2] = uVal_8;
          pU64_2[3] = uVal_9;
          pU64_2 = (uint32_t *)((int64_t)pLong_19 + uVal_21 * 8 + lVal_15 + 0x18);
          *pU64_2 = uVal_10;
          pU64_2[1] = uVal_11;
          pU64_2[2] = uVal_12;
          pU64_2[3] = uVal_13;
          uVal_21 = uVal_21 + 4;
        } while (uVal_20 != uVal_21);
        param_2 = param_2 + uVal_20;
        pLong_16 = pLong_1 + uVal_20;
        if (uVal_14 == uVal_20) goto LAB_18063948a;
      }
      do {
        lVal_15 = *param_2;
        *param_2 = 0;
        pLong_16[1] = lVal_15;
        param_2 = param_2 + 1;
        pLong_16 = pLong_16 + 1;
      } while (param_2 != pLong_17);
    }
LAB_18063948a:
    pLong_16 = *param_1;
  }
  if (pLong_16 != (int64_t *)0x0) {
    pLong_18 = param_1[1];
    if (pLong_16 == pLong_18) {
      uVal_14 = (int64_t)param_1[2] - (int64_t)pLong_16;
    }
    else {
      do {
        pU64_5 = (uint64_t *)*pLong_16;
        if (pU64_5 != (uint64_t *)0x0) {
          (**(func_ptr_t *)*pU64_5)(pU64_5,1);
        }
        pLong_16 = pLong_16 + 1;
      } while (pLong_16 != pLong_18);
      pLong_16 = *param_1;
      uVal_14 = (int64_t)param_1[2] - (int64_t)pLong_16;
    }
    if (0xfff < uVal_14) {
      if (0x1f < (uint64_t)((int64_t)pLong_16 + (-8 - (int64_t)(int64_t *)pLong_16[-1]))) {
LAB_18063964d:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_14 = uVal_14 + 0x27;
      pLong_16 = (int64_t *)pLong_16[-1];
    }
    thunk_FUN_180695dd0(pLong_16,uVal_14);
  }
  *param_1 = pLong_19;
  param_1[1] = pLong_19 + uVal_22;
  param_1[2] = pLong_19 + uVal_23;
  return pLong_1;
}

// func_0x180639650
uint64_t * func_0x180639650(uint64_t param_1,uint64_t *param_2)
{
  *param_2 = &PTR_FUN_1806dd8d0;
  return param_2;
}

// Unwind@180639740
void Unwind_180639740(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x88),0xb8);
  return;
}

// Unwind@1806398e0
void Unwind_1806398e0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x58),0x80);
  return;
}

// Unwind@180639920
void Unwind_180639920(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(param_2 + 0x38);
  return;
}

// Unwind@180639a40
void Unwind_180639a40(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x88),0xb8);
  return;
}

// Unwind@180639be0
void Unwind_180639be0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x58),0x80);
  return;
}

// Unwind@180639c20
void Unwind_180639c20(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(param_2 + 0x38);
  return;
}

// Unwind@180639d60
void Unwind_180639d60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x80);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x48));
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x98),0xa8);
  return;
}

// Unwind@180639f60
void Unwind_180639f60(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x60);
  return;
}

// Unwind@180639f90
void Unwind_180639f90(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(param_2 + 0x40);
  return;
}

// Unwind@180639fc0
void Unwind_180639fc0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x58),0x88);
  return;
}

// Unwind@18063a120
void Unwind_18063a120(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x88),0xb8);
  return;
}

// Unwind@18063a2f0
void Unwind_18063a2f0(uint64_t param_1,int64_t param_2)
{
  func_0x18063daa0(*(uint64_t *)(param_2 + 0x13b0));
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x13b8),0x80);
  return;
}

// Unwind@18063a420
void Unwind_18063a420(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x88),0xb8);
  return;
}

// Unwind@18063a560
void Unwind_18063a560(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x88),0xb8);
  return;
}

// Unwind@18063a6e0
void Unwind_18063a6e0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x58),0x80);
  return;
}

// Unwind@18063a720
void Unwind_18063a720(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(param_2 + 0x40);
  return;
}

// Unwind@18063a840
void Unwind_18063a840(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x88),0xb8);
  return;
}

// Unwind@18063a9c0
void Unwind_18063a9c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x58),0x80);
  return;
}

// Unwind@18063aa00
void Unwind_18063aa00(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(param_2 + 0x40);
  return;
}

// Unwind@18063ad50
void Unwind_18063ad50(uint64_t param_1,int64_t param_2)
{
  func_0x18063daa0(*(uint64_t *)(param_2 + 0x13a8));
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x13b0),0x80);
  return;
}

// Unwind@18063ad90
void Unwind_18063ad90(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x20);
  return;
}

// Unwind@18063aea0
void Unwind_18063aea0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x68),0xa0);
  return;
}

// Unwind@18063af80
void Unwind_18063af80(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x20),0xa0);
  return;
}

// Unwind@18063b2f0
void Unwind_18063b2f0(uint64_t param_1,int64_t param_2)
{
  func_0x18063daa0(*(uint64_t *)(param_2 + 0x13a8));
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x13b0),0x80);
  return;
}

// Unwind@18063b330
void Unwind_18063b330(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x20);
  return;
}

// Unwind@18063b5e0
void Unwind_18063b5e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x80);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x48));
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x98),0xa8);
  return;
}

// Unwind@18063b7e0
void Unwind_18063b7e0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x60);
  return;
}

// Unwind@18063b810
void Unwind_18063b810(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(param_2 + 0x40);
  return;
}

// Unwind@18063b840
void Unwind_18063b840(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x58),0x88);
  return;
}

// Unwind@18063c0e0
void Unwind_18063c0e0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x2760);
  return;
}

// Unwind@18063c120
void Unwind_18063c120(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(param_2 + 0x13c8);
  return;
}

// Unwind@18063c160
void Unwind_18063c160(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x2760);
  return;
}

// Unwind@18063c1a0
void Unwind_18063c1a0(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(param_2 + 0x13c8);
  return;
}

// Unwind@18063c1e0
void Unwind_18063c1e0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x13c8);
  return;
}

// Unwind@18063c220
void Unwind_18063c220(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x2778),0x80);
  return;
}

// Unwind@18063c260
void Unwind_18063c260(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x2778),0x80);
  return;
}

// Unwind@18063c2a0
void Unwind_18063c2a0(uint64_t param_1,int64_t param_2)
{
  func_0x18063daa0(*(uint64_t *)(param_2 + 0x2758));
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x2778),0x80);
  return;
}

// Unwind@18063c2f0
void Unwind_18063c2f0(uint64_t param_1,int64_t param_2)
{
  func_0x18063daa0(*(uint64_t *)(param_2 + 0x2758));
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x2778),0x80);
  return;
}

// Unwind@18063c340
void Unwind_18063c340(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x13c8);
  return;
}

// Unwind@18063c490
void Unwind_18063c490(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x90),0xc0);
  return;
}

// Unwind@18063c5d0
void Unwind_18063c5d0(uint64_t param_1,int64_t param_2)
{
  func_0x18063daa0(*(uint64_t *)(param_2 + 0x30));
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x28),0x80);
  return;
}

// Unwind@18063c720
void Unwind_18063c720(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x80);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x48));
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x90),0xb8);
  return;
}

// Unwind@18063c9b0
void Unwind_18063c9b0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x38);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@18063ca10
void Unwind_18063ca10(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(param_2 + 0x40);
  return;
}

// Unwind@18063ca60
void Unwind_18063ca60(uint64_t param_1,int64_t param_2)
{
  func_0x18063daa0(*(uint64_t *)(param_2 + 0x30));
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x28),0x88);
  return;
}

// Unwind@18063cfe0
void Unwind_18063cfe0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x38),0xd0);
  return;
}

// Unwind@18063d050
void Unwind_18063d050(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x40);
  return;
}

// Unwind@18063d0a0
void Unwind_18063d0a0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x40);
  return;
}

// Unwind@18063d0f0
void Unwind_18063d0f0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x40);
  return;
}

// Unwind@18063d140
void Unwind_18063d140(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x40);
  return;
}

// Unwind@18063d190
void Unwind_18063d190(uint64_t param_1,int64_t param_2)
{
  func_0x1806332b0(param_2 + 0x80);
  return;
}

// func_0x18063d1e0
int64_t func_0x18063d1e0(uint8_t (**param_1)[16],uint8_t (*param_2)[16], uint8_t (*param_3)[16])
{
  uint32_t *pU64_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  func_ptr_t fnPtr_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  int64_t lVal_8;
  uint8_t (*pArr16_9)[16];
  uint8_t (*pArr16_10)[16];
  uint64_t uVal_11;
  uint64_t *pU64_12;
  int64_t lVal_13;
  uint8_t (*pArr16_14)[16];
  uint64_t uVal_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  uint8_t (*pArr16_18)[16];
  
  pArr16_10 = *param_1;
  uVal_16 = ((int64_t)param_1[1] - (int64_t)pArr16_10 >> 3) * -0x5555555555555555 + 1;
  uVal_11 = ((int64_t)param_1[2] - (int64_t)pArr16_10 >> 3) * -0x5555555555555555;
  uVal_15 = 0xaaaaaaaaaaaaaaa - (uVal_11 >> 1);
  uVal_17 = (uVal_11 >> 1) + uVal_11;
  if (uVal_17 <= uVal_16) {
    uVal_17 = uVal_16;
  }
  if (uVal_15 <= uVal_11 && uVal_11 - uVal_15 != 0) {
    uVal_17 = 0xaaaaaaaaaaaaaaa;
  }
  if (0xaaaaaaaaaaaaaaa < uVal_17) {
LAB_18063d477:
    func_0x18007ba90();
    fnPtr_4 = (func_ptr_t )swi(3);
    lVal_8 = (*fnPtr_4)();
    return lVal_8;
  }
  if (uVal_17 == 0) {
    pArr16_14 = (uint8_t (*)[16])0x0;
  }
  else if (uVal_17 < 0xab) {
    pArr16_14 = (uint8_t (*)[16])func_0x180672de0(uVal_17 * 0x18);
  }
  else {
    if (uVal_17 == 0xaaaaaaaaaaaaaaa) goto LAB_18063d477;
    lVal_8 = func_0x180672de0(uVal_17 * 0x18 + 0x27);
    pArr16_14 = (uint8_t (*)[16])(lVal_8 + 0x27U & 0xffffffffffffffe0);
    *(int64_t *)(pArr16_14[-1] + 8) = lVal_8;
  }
  lVal_8 = (int64_t)param_2 - (int64_t)pArr16_10;
  uVal_2 = *(uint64_t *)param_3[1];
  *(uint64_t *)param_3[1] = 0;
  uVal_5 = *(uint32_t *)(*param_3 + 4);
  uVal_6 = *(uint32_t *)(*param_3 + 8);
  uVal_7 = *(uint32_t *)(*param_3 + 0xc);
  *param_3 = ZEXT816(0);
  pU64_1 = (uint32_t *)((int64_t)pArr16_14 + lVal_8);
  *pU64_1 = *(uint32_t *)*param_3;
  pU64_1[1] = uVal_5;
  pU64_1[2] = uVal_6;
  pU64_1[3] = uVal_7;
  *(uint64_t *)((int64_t)pArr16_14 + lVal_8 + 0x10) = uVal_2;
  pArr16_18 = *param_1;
  pArr16_10 = param_1[1];
  if (param_2 == pArr16_10) {
    pArr16_10 = pArr16_14;
    if (pArr16_18 == param_2) goto LAB_18063d39b;
    do {
      uVal_2 = *(uint64_t *)pArr16_18[1];
      *(uint64_t *)pArr16_18[1] = 0;
      uVal_5 = *(uint32_t *)(*pArr16_18 + 4);
      uVal_6 = *(uint32_t *)(*pArr16_18 + 8);
      uVal_7 = *(uint32_t *)(*pArr16_18 + 0xc);
      *pArr16_18 = ZEXT816(0);
      *(uint32_t *)*pArr16_10 = *(uint32_t *)*pArr16_18;
      *(uint32_t *)(*pArr16_10 + 4) = uVal_5;
      *(uint32_t *)(*pArr16_10 + 8) = uVal_6;
      *(uint32_t *)(*pArr16_10 + 0xc) = uVal_7;
      *(uint64_t *)pArr16_10[1] = uVal_2;
      pArr16_18 = (uint8_t (*)[16])(pArr16_18[1] + 8);
      pArr16_10 = (uint8_t (*)[16])(pArr16_10[1] + 8);
    } while (pArr16_18 != param_2);
  }
  else {
    pArr16_9 = pArr16_14;
    if (pArr16_18 != param_2) {
      do {
        uVal_2 = *(uint64_t *)pArr16_18[1];
        *(uint64_t *)pArr16_18[1] = 0;
        uVal_5 = *(uint32_t *)(*pArr16_18 + 4);
        uVal_6 = *(uint32_t *)(*pArr16_18 + 8);
        uVal_7 = *(uint32_t *)(*pArr16_18 + 0xc);
        *pArr16_18 = ZEXT816(0);
        *(uint32_t *)*pArr16_9 = *(uint32_t *)*pArr16_18;
        *(uint32_t *)(*pArr16_9 + 4) = uVal_5;
        *(uint32_t *)(*pArr16_9 + 8) = uVal_6;
        *(uint32_t *)(*pArr16_9 + 0xc) = uVal_7;
        *(uint64_t *)pArr16_9[1] = uVal_2;
        pArr16_18 = (uint8_t (*)[16])(pArr16_18[1] + 8);
        pArr16_9 = (uint8_t (*)[16])(pArr16_9[1] + 8);
      } while (pArr16_18 != param_2);
      pArr16_10 = param_1[1];
    }
    if (param_2 != pArr16_10) {
      pU64_12 = (uint64_t *)((int64_t)pArr16_14 + lVal_8 + 0x28);
      do {
        uVal_2 = *(uint64_t *)param_2[1];
        *(uint64_t *)param_2[1] = 0;
        uVal_5 = *(uint32_t *)(*param_2 + 4);
        uVal_6 = *(uint32_t *)(*param_2 + 8);
        uVal_7 = *(uint32_t *)(*param_2 + 0xc);
        *param_2 = ZEXT816(0);
        *(uint32_t *)(pU64_12 + -2) = *(uint32_t *)*param_2;
        *(uint32_t *)((int64_t)pU64_12 + -0xc) = uVal_5;
        *(uint32_t *)(pU64_12 + -1) = uVal_6;
        *(uint32_t *)((int64_t)pU64_12 + -4) = uVal_7;
        *pU64_12 = uVal_2;
        param_2 = (uint8_t (*)[16])(param_2[1] + 8);
        pU64_12 = pU64_12 + 3;
      } while (param_2 != pArr16_10);
    }
  }
  pArr16_18 = *param_1;
LAB_18063d39b:
  if (pArr16_18 != (uint8_t (*)[16])0x0) {
    pArr16_10 = param_1[1];
    if (pArr16_18 != pArr16_10) {
      do {
        lVal_3 = *(int64_t *)*pArr16_18;
        if (lVal_3 != 0) {
          uVal_11 = *(int64_t *)pArr16_18[1] - lVal_3;
          lVal_13 = lVal_3;
          if (0xfff < uVal_11) {
            lVal_13 = *(int64_t *)(lVal_3 + -8);
            if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_13)) goto LAB_18063d40a;
            uVal_11 = uVal_11 + 0x27;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_11);
          *pArr16_18 = ZEXT816(0);
          *(uint64_t *)pArr16_18[1] = 0;
        }
        pArr16_18 = (uint8_t (*)[16])(pArr16_18[1] + 8);
      } while (pArr16_18 != pArr16_10);
      pArr16_18 = *param_1;
    }
    uVal_11 = (int64_t)param_1[2] - (int64_t)pArr16_18;
    pArr16_10 = pArr16_18;
    if (0xfff < uVal_11) {
      pArr16_10 = *(uint8_t (**)[16])(pArr16_18[-1] + 8);
      if ((uint8_t *)0x1f < (uint8_t *)((int64_t)pArr16_18 + (-8 - (int64_t)pArr16_10))) {
LAB_18063d40a:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_11 = uVal_11 + 0x27;
    }
    thunk_FUN_180695dd0(pArr16_10,uVal_11);
  }
  *param_1 = pArr16_14;
  param_1[1] = (uint8_t (*)[16])((int64_t)pArr16_14 + uVal_16 * 0x18);
  param_1[2] = (uint8_t (*)[16])((int64_t)pArr16_14 + uVal_17 * 0x18);
  return lVal_8 + (int64_t)pArr16_14;
}

// Unwind@18063d510
void Unwind_18063d510(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x20),0xf8);
  return;
}

// Unwind@18063d650
void Unwind_18063d650(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x68),0xa0);
  return;
}

// Unwind@18063d730
void Unwind_18063d730(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x20),0xb0);
  return;
}

// func_0x18063daa0
void func_0x18063daa0(uint64_t *param_1)
{
  int64_t *pLong_1;
  uint64_t *pU64_2;
  uint64_t uVal_3;
  int64_t *pLong_4;
  
  *param_1 = &PTR_LAB_1806dd490;
  pLong_4 = (int64_t *)param_1[4];
  if (pLong_4 != (int64_t *)0x0) {
    pLong_1 = (int64_t *)param_1[5];
    if (pLong_4 == pLong_1) {
      uVal_3 = param_1[6] - (int64_t)pLong_4;
    }
    else {
      do {
        pU64_2 = (uint64_t *)*pLong_4;
        if (pU64_2 != (uint64_t *)0x0) {
          (**(func_ptr_t *)*pU64_2)(pU64_2,1);
        }
        pLong_4 = pLong_4 + 1;
      } while (pLong_4 != pLong_1);
      pLong_4 = *(int64_t **)*(uint8_t (*)[16])(param_1 + 4);
      uVal_3 = param_1[6] - (int64_t)pLong_4;
    }
    if (0xfff < uVal_3) {
      if (0x1f < (uint64_t)((int64_t)pLong_4 + (-8 - (int64_t)(int64_t *)pLong_4[-1]))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_3 + 0x27;
      pLong_4 = (int64_t *)pLong_4[-1];
    }
    thunk_FUN_180695dd0(pLong_4,uVal_3);
    *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
    param_1[6] = 0;
  }
  return;
}

// func_0x18063dcb0
void func_0x18063dcb0(uint64_t *param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint8_t (*pArr16_6)[16];
  uint8_t (*pArr16_7)[16];
  int64_t lVal_8;
  
  *param_1 = &PTR_LAB_1806dd700;
  pArr16_6 = (uint8_t (*)[16])param_1[0x12];
  if (pArr16_6 != (uint8_t (*)[16])0x0) {
    pArr16_7 = (uint8_t (*)[16])param_1[0x13];
    if (pArr16_6 != pArr16_7) {
      do {
        lVal_8 = *(int64_t *)*pArr16_6;
        if (lVal_8 != 0) {
          uVal_5 = *(int64_t *)pArr16_6[1] - lVal_8;
          lVal_4 = lVal_8;
          if (0xfff < uVal_5) {
            lVal_4 = *(int64_t *)(lVal_8 + -8);
            if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_4)) goto LAB_18063de78;
            uVal_5 = uVal_5 + 0x27;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_5);
          *pArr16_6 = ZEXT816(0);
          *(uint64_t *)pArr16_6[1] = 0;
        }
        pArr16_6 = (uint8_t (*)[16])(pArr16_6[1] + 8);
      } while (pArr16_6 != pArr16_7);
      pArr16_6 = *(uint8_t (**)[16])*(uint8_t (*)[16])(param_1 + 0x12);
    }
    uVal_5 = param_1[0x14] - (int64_t)pArr16_6;
    pArr16_7 = pArr16_6;
    if (0xfff < uVal_5) {
      pArr16_7 = *(uint8_t (**)[16])(pArr16_6[-1] + 8);
      if ((uint8_t *)0x1f < (uint8_t *)((int64_t)pArr16_6 + (-8 - (int64_t)pArr16_7)))
      goto LAB_18063de78;
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(pArr16_7,uVal_5);
    *(uint8_t (*)[16])(param_1 + 0x12) = ZEXT816(0);
    param_1[0x14] = 0;
  }
  lVal_8 = param_1[0xf];
  if (lVal_8 != 0) {
    lVal_4 = param_1[0x10];
    if (lVal_8 == lVal_4) {
      uVal_5 = param_1[0x11] - lVal_8;
    }
    else {
      do {
        pLong_3 = *(int64_t **)(lVal_8 + 8);
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
        lVal_8 = lVal_8 + 0x10;
      } while (lVal_8 != lVal_4);
      lVal_8 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 0xf);
      uVal_5 = param_1[0x11] - lVal_8;
    }
    if (0xfff < uVal_5) {
      if (0x1f < (uint64_t)((lVal_8 + -8) - *(int64_t *)(lVal_8 + -8))) {
LAB_18063de78:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
      lVal_8 = *(int64_t *)(lVal_8 + -8);
    }
    thunk_FUN_180695dd0(lVal_8,uVal_5);
    *(uint8_t (*)[16])(param_1 + 0xf) = ZEXT816(0);
    param_1[0x11] = 0;
  }
  pLong_3 = (int64_t *)param_1[0xe];
  if (pLong_3 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,pLong_3 != param_1 + 7);
    param_1[0xe] = 0;
  }
  return;
}

// func_0x18063e230
uint64_t func_0x18063e230(void)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  bool bFlag_3;
  
  uVal_1 = 1;
  LOCK();
  bFlag_3 = DAT_180841b58 == 0;
  if (bFlag_3) {
    DAT_180841b58 = 1;
  }
  UNLOCK();
  if (!bFlag_3) {
    uVal_2 = 0;
    do {
      Sleep((uint)(0x1f < uVal_2));
      uVal_2 = uVal_2 + 1;
      LOCK();
      bFlag_3 = DAT_180841b58 == 0;
      if (bFlag_3) {
        DAT_180841b58 = 1;
      }
      UNLOCK();
    } while (!bFlag_3);
  }
  if (DAT_180841b40 == (HANDLE)0x0) {
    uVal_1 = 0;
    DAT_180841b40 = HeapCreate(0,0,0);
    if (DAT_180841b40 == (HANDLE)0x0) {
      uVal_1 = 9;
    }
    else {
      func_0x18008c310();
    }
  }
  LOCK();
  DAT_180841b58 = 0;
  UNLOCK();
  return uVal_1;
}

// func_0x18063e2c0
uint64_t func_0x18063e2c0(void)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  bool bFlag_3;
  
  LOCK();
  bFlag_3 = DAT_180841b58 == 0;
  if (bFlag_3) {
    DAT_180841b58 = 1;
  }
  UNLOCK();
  if (!bFlag_3) {
    uVal_2 = 0;
    do {
      Sleep((uint)(0x1f < uVal_2));
      uVal_2 = uVal_2 + 1;
      LOCK();
      bFlag_3 = DAT_180841b58 == 0;
      if (bFlag_3) {
        DAT_180841b58 = 1;
      }
      UNLOCK();
    } while (!bFlag_3);
  }
  if (DAT_180841b40 == (HANDLE)0x0) {
    uVal_1 = 2;
  }
  else {
    uVal_1 = func_0x18063e390();
    if ((int)uVal_1 == 0) {
      func_0x180670340();
      HeapFree(DAT_180841b40,0,DAT_180841b48);
      HeapDestroy(DAT_180841b40);
      DAT_180841b40 = (HANDLE)0x0;
      DAT_180841b48 = (LPVOID)0x0;
      DAT_180841b50 = 0;
      DAT_180841b54 = 0;
      uVal_1 = 0;
    }
  }
  LOCK();
  DAT_180841b58 = 0;
  UNLOCK();
  return uVal_1;
}

// func_0x18063e390
uint64_t func_0x18063e390(uint param_1)
{
  DWORD dwThreadId;
  func_ptr_t fnPtr_1;
  uint uVal_2;
  uint uVal_3;
  HANDLE hThread;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint8_t auStack_78 [32];
  LPVOID local_58;
  uint local_4c;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  if (DAT_180841b54 != 0) {
    lVal_7 = 0x20;
    uVal_5 = 0;
    do {
      if (param_1 != ((*(uint *)(DAT_180841b48 + lVal_7) >> 1 & 1) != 0)) {
        uVal_2 = func_0x18063e7a0(&local_58,0xffffffff,param_1);
        uVal_6 = (uint64_t)uVal_2;
        if (uVal_2 != 0) goto LAB_18063e4d2;
        uVal_6 = 0;
        lVal_4 = DAT_180841b48;
        uVal_2 = DAT_180841b54;
        if ((uint)uVal_5 < DAT_180841b54) goto LAB_18063e42e;
        goto LAB_18063e459;
      }
      lVal_7 = lVal_7 + 0x38;
      uVal_5 = uVal_5 + 1;
    } while (DAT_180841b54 != (uint)uVal_5);
  }
  uVal_6 = 0;
  goto LAB_18063e4d2;
  while( true ) {
    uVal_5 = uVal_5 + 1;
    lVal_7 = lVal_7 + 0x38;
    if (uVal_2 <= uVal_5) break;
LAB_18063e42e:
    if ((param_1 != ((*(uint *)(lVal_4 + lVal_7) >> 1 & 1) != 0)) &&
       (uVal_3 = func_0x18063ebe0(uVal_5 & 0xffffffff,param_1), lVal_4 = DAT_180841b48,
       uVal_2 = DAT_180841b54, uVal_3 != 0)) {
      uVal_6 = (uint64_t)uVal_3;
      break;
    }
  }
LAB_18063e459:
  if (local_58 != (LPVOID)0x0) {
    if ((uint64_t)local_4c != 0) {
      uVal_5 = 0;
      do {
        dwThreadId = *(DWORD *)((int64_t)local_58 + uVal_5 * 4);
        if ((dwThreadId != 0) && (hThread = OpenThread(0x5a,0,dwThreadId), hThread != (HANDLE)0x0))
        {
          ResumeThread(hThread);
          CloseHandle(hThread);
        }
        uVal_5 = uVal_5 + 1;
      } while (local_4c != uVal_5);
    }
    HeapFree(DAT_180841b40,0,local_58);
  }
LAB_18063e4d2:
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_78)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_78);
    fnPtr_1 = (func_ptr_t )swi(3);
    uVal_5 = (*fnPtr_1)();
    return uVal_5;
  }
  return uVal_6;
}

// func_0x18063e510
uint64_t func_0x18063e510(uint32_t *param_1,uint64_t param_2,int64_t *param_3)
{
  uint32_t *pU64_1;
  uint32_t uVal_2;
  func_ptr_t fnPtr_3;
  int iVal_4;
  int64_t lVal_5;
  LPVOID pVoid_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  bool bFlag_9;
  uint8_t auStack_98 [40];
  uint32_t *local_70;
  uint64_t local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  uint local_4c;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  LOCK();
  bFlag_9 = DAT_180841b58 == 0;
  if (bFlag_9) {
    DAT_180841b58 = 1;
  }
  UNLOCK();
  if (!bFlag_9) {
    uVal_8 = 0;
    do {
      Sleep((uint)(0x1f < uVal_8));
      uVal_8 = uVal_8 + 1;
      LOCK();
      bFlag_9 = DAT_180841b58 == 0;
      if (bFlag_9) {
        DAT_180841b58 = 1;
      }
      UNLOCK();
    } while (!bFlag_9);
  }
  if (DAT_180841b40 == (HANDLE)0x0) {
    uVal_7 = 2;
    goto LAB_18063e5c6;
  }
  iVal_4 = func_0x180670a10(param_1);
  uVal_7 = 7;
  if ((iVal_4 == 0) || (iVal_4 = func_0x180670a10(param_2), iVal_4 == 0)) goto LAB_18063e5c6;
  if ((uint64_t)DAT_180841b54 != 0) {
    lVal_5 = 0;
    do {
      if (param_1 == *(uint32_t **)((int64_t)DAT_180841b48 + lVal_5)) {
        uVal_7 = 3;
        if (lVal_5 != 0x37ffffffc8) goto LAB_18063e5c6;
        break;
      }
      lVal_5 = lVal_5 + 0x38;
    } while ((uint64_t)DAT_180841b54 * 0x38 - lVal_5 != 0);
  }
  lVal_5 = func_0x180670390(param_1);
  if (lVal_5 == 0) {
    uVal_7 = 9;
    goto LAB_18063e5c6;
  }
  local_70 = param_1;
  local_68 = param_2;
  local_60 = lVal_5;
  iVal_4 = func_0x180670a80(&local_70);
  if (iVal_4 == 0) {
    uVal_7 = 8;
LAB_18063e785:
    func_0x1806709a0(lVal_5);
  }
  else {
    if (DAT_180841b48 == (LPVOID)0x0) {
      DAT_180841b50 = 0x20;
      DAT_180841b48 = HeapAlloc(DAT_180841b40,0,0x700);
      if (DAT_180841b48 == (LPVOID)0x0) {
LAB_18063e780:
        uVal_7 = 9;
        goto LAB_18063e785;
      }
    }
    else if (DAT_180841b50 <= DAT_180841b54) {
      pVoid_6 = HeapReAlloc(DAT_180841b40,0,DAT_180841b48,(uint64_t)(DAT_180841b50 * 2) * 0x38);
      if (pVoid_6 == (LPVOID)0x0) goto LAB_18063e780;
      DAT_180841b50 = DAT_180841b50 << 1;
      DAT_180841b48 = pVoid_6;
    }
    pVoid_6 = DAT_180841b48;
    uVal_8 = (uint64_t)DAT_180841b54;
    DAT_180841b54 = DAT_180841b54 + 1;
    lVal_5 = uVal_8 * 0x38;
    *(uint32_t **)((int64_t)DAT_180841b48 + lVal_5) = local_70;
    *(uint64_t *)((int64_t)pVoid_6 + lVal_5 + 8) = local_58;
    *(int64_t *)((int64_t)pVoid_6 + lVal_5 + 0x10) = local_60;
    *(byte *)((int64_t)pVoid_6 + lVal_5 + 0x20) =
         *(byte *)((int64_t)pVoid_6 + lVal_5 + 0x20) & 0xf8 | (byte)local_50 & 1;
    *(uint *)((int64_t)pVoid_6 + lVal_5 + 0x24) =
         *(uint *)((int64_t)pVoid_6 + lVal_5 + 0x24) & 0xfffffff0 | local_4c & 0xf;
    *(uint64_t *)((int64_t)pVoid_6 + lVal_5 + 0x28) = local_48;
    *(uint64_t *)((int64_t)pVoid_6 + lVal_5 + 0x30) = local_40;
    pU64_1 = (uint32_t *)((int64_t)pVoid_6 + lVal_5 + 0x18);
    if (local_50 == 0) {
      *(uint8_t *)(pU64_1 + 1) = *(uint8_t *)(param_1 + 1);
      *pU64_1 = *param_1;
    }
    else {
      uVal_2 = *(uint32_t *)((int64_t)param_1 + -5);
      *(uint32_t *)((int64_t)pU64_1 + 3) = *(uint32_t *)((int64_t)param_1 + -2);
      *pU64_1 = uVal_2;
    }
    uVal_7 = 0;
    if (param_3 != (int64_t *)0x0) {
      uVal_7 = 0;
      *param_3 = local_60;
    }
  }
LAB_18063e5c6:
  LOCK();
  DAT_180841b58 = 0;
  UNLOCK();
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_98)) {
    return uVal_7;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_98);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_7 = (*fnPtr_3)();
  return uVal_7;
}

// func_0x18063e7a0
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
uint64_t func_0x18063e7a0(uint8_t (*param_1)[16],uint param_2,int param_3)
{
  DWORD64 *pD_1;
  byte bFlag_2;
  DWORD DVar3;
  int iVal_4;
  DWORD DVar5;
  DWORD DVar6;
  BOOL BVar7;
  uint uVal_8;
  HANDLE pVoid_9;
  LPVOID lpMem;
  int64_t lVal_10;
  bool bFlag_11;
  func_ptr_t fnPtr_12;
  uint64_t uVal_13;
  uint64_t uVal_14;
  DWORD64 DVar15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  int64_t lVal_18;
  uint8_t auStack_558 [40];
  uint local_530;
  uint local_52c;
  uint64_t local_528;
  int64_t local_520;
  uint8_t local_518 [12];
  DWORD local_50c;
  DWORD local_4e8;
  DWORD64 local_420;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_558;
  *param_1 = ZEXT816(0);
  local_530 = param_2;
  pVoid_9 = (HANDLE)CreateToolhelp32Snapshot(4,0);
  uVal_13 = 9;
  if (pVoid_9 != (HANDLE)0xffffffffffffffff) {
    local_518._0_4_ = 0x1c;
    iVal_4 = Thread32First(pVoid_9,local_518);
    if (iVal_4 != 0) {
      do {
        DVar6 = local_50c;
        if (((0xf < (uint)local_518._0_4_) &&
            (DVar5 = GetCurrentProcessId(), DVar3 = local_518._8_4_, DVar6 == DVar5)) &&
           (DVar6 = GetCurrentThreadId(), DVar3 != DVar6)) {
          lpMem = *(LPVOID *)*param_1;
          if (lpMem == (LPVOID)0x0) {
            *(uint32_t *)(*param_1 + 8) = 0x80;
            lpMem = HeapAlloc(DAT_180841b40,0,0x200);
            *(LPVOID *)*param_1 = lpMem;
            if (lpMem == (LPVOID)0x0) goto LAB_18063eb91;
          }
          else if (*(uint *)(*param_1 + 8) <= *(uint *)(*param_1 + 0xc)) {
            uVal_8 = *(uint *)(*param_1 + 8) * 2;
            *(uint *)(*param_1 + 8) = uVal_8;
            lpMem = HeapReAlloc(DAT_180841b40,0,lpMem,(uint64_t)uVal_8 << 2);
            if (lpMem == (LPVOID)0x0) goto LAB_18063eb73;
            *(LPVOID *)*param_1 = lpMem;
          }
          uVal_8 = *(uint *)(*param_1 + 0xc);
          *(uint *)(*param_1 + 0xc) = uVal_8 + 1;
          *(uint32_t *)((int64_t)lpMem + (uint64_t)uVal_8 * 4) = local_518._8_4_;
        }
        local_518._0_4_ = 0x1c;
        iVal_4 = Thread32Next(pVoid_9);
      } while (iVal_4 != 0);
      DVar6 = GetLastError();
      if (DVar6 == 0x12) {
        CloseHandle(pVoid_9);
        uVal_13 = 0;
        if ((*(int64_t *)*param_1 != 0) && (*(int *)(*param_1 + 0xc) != 0)) {
          uVal_17 = 0;
          local_52c = local_530 + 1;
          local_528 = (uint64_t)local_530;
          if (local_52c == 0) {
            local_528 = uVal_17;
          }
          local_520 = local_528 * 0x38 + 0x30;
          fnPtr_12 = OpenThread_exref;
LAB_18063e963:
          do {
            pVoid_9 = (HANDLE)(*fnPtr_12)(0x5a,0,*(uint32_t *)(*(int64_t *)*param_1 + uVal_17 * 4));
            if (pVoid_9 != (HANDLE)0x0) {
              DVar6 = SuspendThread(pVoid_9);
              if (DVar6 != 0xffffffff) {
                local_4e8 = 0x100001;
                BVar7 = GetThreadContext(pVoid_9,(LPCONTEXT)local_518);
                if (BVar7 != 0) {
                  uVal_8 = local_52c;
                  if (local_530 == 0xffffffff) {
                    uVal_8 = DAT_180841b54;
                  }
                  if ((uint)local_528 < uVal_8) {
                    lVal_10 = DAT_180841b48;
                    uVal_14 = local_528;
                    lVal_18 = local_520;
                    do {
                      pD_1 = (DWORD64 *)(lVal_10 + uVal_14 * 0x38);
                      bFlag_2 = *(byte *)(lVal_10 + 0x20 + uVal_14 * 0x38);
                      if (param_3 == 0) {
                        if ((bFlag_2 & 2) != 0) {
LAB_18063ea58:
                          if (((bFlag_2 & 1) == 0) || (DVar15 = *pD_1, local_420 != DVar15 - 5)) {
                            if ((*(uint *)((int64_t)pD_1 + 0x24) & 0xf) != 0) {
                              uVal_16 = 0;
                              do {
                                if (local_420 ==
                                    (uint64_t)*(byte *)(lVal_10 + lVal_18 + uVal_16) + pD_1[2]) {
                                  DVar15 = (uint64_t)*(byte *)((uVal_16 - 8) + lVal_10 + lVal_18) +
                                           *pD_1;
                                  goto joined_r0x00018063eb3b;
                                }
                                uVal_16 = uVal_16 + 1;
                              } while (((uint64_t)*(uint *)((int64_t)pD_1 + 0x24) & 0xf) !=
                                       uVal_16);
                            }
                            if (local_420 != pD_1[1]) goto LAB_18063e9e0;
                            DVar15 = *pD_1;
                          }
joined_r0x00018063eb3b:
                          if (DVar15 != 0) {
                            local_420 = DVar15;
                            SetThreadContext(pVoid_9,(CONTEXT *)local_518);
                            lVal_10 = DAT_180841b48;
                          }
                        }
                      }
                      else if (param_3 == 1) {
                        if ((bFlag_2 & 2) == 0) {
LAB_18063eac0:
                          if ((*(uint *)((int64_t)pD_1 + 0x24) & 0xf) != 0) {
                            uVal_16 = 0;
                            do {
                              if (local_420 ==
                                  (uint64_t)*(byte *)(lVal_10 + lVal_18 + -8 + uVal_16) + *pD_1) {
                                DVar15 = (uint64_t)*(byte *)(uVal_16 + lVal_10 + lVal_18) + pD_1[2];
                                goto joined_r0x00018063eb3b;
                              }
                              uVal_16 = uVal_16 + 1;
                            } while (((uint64_t)*(uint *)((int64_t)pD_1 + 0x24) & 0xf) != uVal_16
                                    );
                          }
                        }
                      }
                      else {
                        bFlag_11 = (bool)(bFlag_2 >> 2 & 1);
                        if (bFlag_11 != ((bFlag_2 >> 1 & 1) != 0)) {
                          if (bFlag_11 == false) goto LAB_18063ea58;
                          goto LAB_18063eac0;
                        }
                      }
LAB_18063e9e0:
                      uVal_14 = uVal_14 + 1;
                      lVal_18 = lVal_18 + 0x38;
                    } while (uVal_14 != uVal_8);
                  }
                }
                CloseHandle(pVoid_9);
                uVal_17 = uVal_17 + 1;
                fnPtr_12 = OpenThread_exref;
                if (*(uint *)(*param_1 + 0xc) <= uVal_17) break;
                goto LAB_18063e963;
              }
              CloseHandle(pVoid_9);
            }
            *(uint32_t *)(*(int64_t *)*param_1 + uVal_17 * 4) = 0;
            uVal_17 = uVal_17 + 1;
          } while (uVal_17 < *(uint *)(*param_1 + 0xc));
          uVal_13 = 0;
        }
        goto LAB_18063eb9a;
      }
LAB_18063eb73:
      if (*(LPVOID *)*param_1 != (LPVOID)0x0) {
        HeapFree(DAT_180841b40,0,*(LPVOID *)*param_1);
        *(uint64_t *)*param_1 = 0;
      }
    }
LAB_18063eb91:
    CloseHandle(pVoid_9);
  }
LAB_18063eb9a:
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_558)) {
    return uVal_13;
  }
  func_0x180673080(local_48 ^ (uint64_t)auStack_558);
  fnPtr_12 = (func_ptr_t )swi(3);
  uVal_13 = (*fnPtr_12)();
  return uVal_13;
}

// func_0x18063ebe0
uint64_t func_0x18063ebe0(uint64_t param_1,int param_2)
{
  int64_t lVal_1;
  SIZE_T dwSize;
  byte bFlag_2;
  uint32_t uVal_3;
  func_ptr_t fnPtr_4;
  int64_t lVal_5;
  BOOL BVar6;
  HANDLE hProcess;
  uint64_t uVal_7;
  uint32_t *lpAddress;
  uint64_t *pU64_8;
  int64_t lVal_9;
  uint8_t auStack_58 [36];
  DWORD local_34;
  uint64_t local_30;
  
  lVal_5 = DAT_180841b48;
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  lVal_9 = (param_1 & 0xffffffff) * 0x38;
  bFlag_2 = *(byte *)(DAT_180841b48 + 0x20 + lVal_9);
  lVal_1 = *(int64_t *)(DAT_180841b48 + lVal_9) + (uint64_t)((bFlag_2 & 1) == 0) * 5;
  lpAddress = (uint32_t *)(lVal_1 + -5);
  dwSize = (uint64_t)(bFlag_2 & 1) * 2 + 5;
  BVar6 = VirtualProtect(lpAddress,dwSize,0x40,&local_34);
  if (BVar6 == 0) {
    uVal_7 = 10;
  }
  else {
    pU64_8 = (uint64_t *)(lVal_5 + lVal_9);
    if (param_2 == 0) {
      if ((*(byte *)(pU64_8 + 4) & 1) == 0) {
        *(uint8_t *)(lVal_1 + -1) = *(uint8_t *)((int64_t)pU64_8 + 0x1c);
        *lpAddress = *(uint32_t *)(pU64_8 + 3);
      }
      else {
        uVal_3 = *(uint32_t *)(pU64_8 + 3);
        *(uint32_t *)(lVal_1 + -2) = *(uint32_t *)((int64_t)pU64_8 + 0x1b);
        *lpAddress = uVal_3;
      }
    }
    else {
      *(uint8_t *)lpAddress = 0xe9;
      *(int *)(lVal_1 + -4) = (*(int *)(pU64_8 + 1) - (int)lpAddress) + -5;
      if ((*(byte *)(pU64_8 + 4) & 1) != 0) {
        *(uint16_t *)*pU64_8 = 0xf9eb;
      }
    }
    VirtualProtect(lpAddress,dwSize,local_34,&local_34);
    hProcess = GetCurrentProcess();
    FlushInstructionCache(hProcess,lpAddress,dwSize);
    *(byte *)(pU64_8 + 4) =
         (char)param_2 << 2 | (char)param_2 * '\x02' | *(byte *)(pU64_8 + 4) & 0xf9;
    uVal_7 = 0;
  }
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_58)) {
    return uVal_7;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_58);
  fnPtr_4 = (func_ptr_t )swi(3);
  uVal_7 = (*fnPtr_4)();
  return uVal_7;
}

// func_0x18063ed10
void func_0x18063ed10(uint64_t param_1)
{
  func_0x18063ed20(param_1,1);
  return;
}

// func_0x18063ed20
uint64_t func_0x18063ed20(int64_t param_1,uint param_2)
{
  DWORD dwThreadId;
  func_ptr_t fnPtr_1;
  HANDLE hThread;
  uint *pU64_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  bool bFlag_5;
  uint8_t auStack_78 [32];
  LPVOID local_58;
  uint local_4c;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  LOCK();
  bFlag_5 = DAT_180841b58 == 0;
  if (bFlag_5) {
    DAT_180841b58 = 1;
  }
  UNLOCK();
  if (!bFlag_5) {
    uVal_4 = 0;
    do {
      Sleep((uint)(0x1f < uVal_4));
      uVal_4 = uVal_4 + 1;
      LOCK();
      bFlag_5 = DAT_180841b58 == 0;
      if (bFlag_5) {
        DAT_180841b58 = 1;
      }
      UNLOCK();
    } while (!bFlag_5);
  }
  if (DAT_180841b40 == (HANDLE)0x0) {
    uVal_4 = 2;
  }
  else if (param_1 == 0) {
    uVal_4 = func_0x18063e390();
  }
  else {
    uVal_4 = 4;
    if ((uint64_t)DAT_180841b54 != 0) {
      pU64_2 = (uint *)(DAT_180841b48 + 0x20);
      uVal_3 = 0;
      do {
        if (param_1 == *(int64_t *)(pU64_2 + -8)) {
          if (uVal_3 != 0xffffffff) {
            if (param_2 == ((*pU64_2 >> 1 & 1) != 0)) {
              uVal_4 = (uint64_t)((param_2 == 0) + 5);
            }
            else {
              uVal_4 = func_0x18063e7a0(&local_58,uVal_3 & 0xffffffff,1);
              if (((int)uVal_4 == 0) &&
                 (uVal_4 = func_0x18063ebe0(uVal_3 & 0xffffffff,param_2), local_58 != (LPVOID)0x0)) {
                uVal_4 = uVal_4 & 0xffffffff;
                if ((uint64_t)local_4c != 0) {
                  uVal_3 = 0;
                  do {
                    dwThreadId = *(DWORD *)((int64_t)local_58 + uVal_3 * 4);
                    if ((dwThreadId != 0) &&
                       (hThread = OpenThread(0x5a,0,dwThreadId), hThread != (HANDLE)0x0)) {
                      ResumeThread(hThread);
                      CloseHandle(hThread);
                    }
                    uVal_3 = uVal_3 + 1;
                  } while (local_4c != uVal_3);
                }
                HeapFree(DAT_180841b40,0,local_58);
              }
            }
          }
          break;
        }
        uVal_3 = uVal_3 + 1;
        pU64_2 = pU64_2 + 0xe;
      } while (DAT_180841b54 != uVal_3);
    }
  }
  LOCK();
  DAT_180841b58 = 0;
  UNLOCK();
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_78)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_78);
    fnPtr_1 = (func_ptr_t )swi(3);
    uVal_4 = (*fnPtr_1)();
    return uVal_4;
  }
  return uVal_4;
}

// func_0x18063eee0
void func_0x18063eee0(uint64_t param_1)
{
  func_0x18063ed20(param_1,0);
  return;
}

// func_0x18063eef0
HMODULE * func_0x18063eef0(HMODULE *param_1)
{
  HMODULE pHnd_1;
  
  pHnd_1 = GetModuleHandleW((LPCWSTR)0x0);
  *param_1 = pHnd_1;
  return param_1;
}

// func_0x18063ef10
uint8_t (*func_0x18063ef10(int64_t *param_1,uint8_t (*param_2)[16],void **param_3))[16]
{
  uint uVal_1;
  int64_t lVal_2;
  void *_Size;
  void *_Buf2;
  int iVal_3;
  int64_t lVal_4;
  void *pVoid_5;
  short sz_6;
  char *_Buf1;
  
  lVal_2 = *param_1;
  sz_6 = *(short *)(lVal_2 + 6 + (int64_t)*(int *)(lVal_2 + 0x3c));
  if (sz_6 != 0) {
    lVal_4 = *(int *)(lVal_2 + 0x3c) + lVal_2;
    _Buf1 = (char *)((uint64_t)*(ushort *)(lVal_4 + 0x14) + lVal_4 + 0x18);
    _Size = param_3[1];
    if (_Size == (void *)0x0) {
      do {
        if (*_Buf1 == '\0') goto LAB_18063ef9e;
        _Buf1 = _Buf1 + 0x28;
        sz_6 = sz_6 + -1;
      } while (sz_6 != 0);
    }
    else {
      _Buf2 = *param_3;
      do {
        if (((_Buf1 != (char *)0x0) && (pVoid_5 = (void *)func_0x18068e3b0(_Buf1,8), pVoid_5 == _Size))
           && (iVal_3 = memcmp(_Buf1,_Buf2,(size_t)_Size), iVal_3 == 0)) {
LAB_18063ef9e:
          uVal_1 = *(uint *)(_Buf1 + 8);
          *(uint64_t *)*param_2 = lVal_2 + (uint64_t)*(uint *)(_Buf1 + 0xc);
          *(uint64_t *)(*param_2 + 8) = (uint64_t)uVal_1;
          return param_2;
        }
        _Buf1 = _Buf1 + 0x28;
        sz_6 = sz_6 + -1;
      } while (sz_6 != 0);
    }
  }
  *param_2 = ZEXT816(0);
  return param_2;
}

// func_0x18063efd0
void func_0x18063efd0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint64_t *pU64_2;
  uint64_t local_res18;
  uint64_t local_res20;
  uint8_t auStack_58 [32];
  uint64_t *local_38;
  uint64_t *local_28;
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res18;
  pU64_2 = (uint64_t *)func_0x1800a3aa0();
  local_38 = &local_res18;
  func_0x18067e4e8(*pU64_2,param_1,param_2,0);
  if (DAT_18083cf40 == (local_20 ^ (uint64_t)auStack_58)) {
    return;
  }
  func_0x180673080(local_20 ^ (uint64_t)auStack_58);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18063f050
void func_0x18063f050(int64_t param_1,uint param_2,char **param_3)
{
  uint uVal_1;
  uint uVal_2;
  uint64_t uVal_3;
  char *pcStack_60;
  char *pcStack_58;
  uint64_t uStack_50;
  uint64_t uStack_40;
  char **ppcStack_38;
  uint8_t *puStack_30;
  uint64_t uStack_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  *(uint64_t *)(param_1 + 8) = 0;
  uVal_3 = (uint64_t)-param_2;
  if (0 < (int)param_2) {
    uVal_3 = (uint64_t)param_2;
  }
  uVal_2 = (uint)uVal_3 | 1;
  uVal_1 = 0x1f;
  if (uVal_2 != 0) {
    for (; uVal_2 >> uVal_1 == 0; uVal_1 = uVal_1 - 1) {
    }
  }
  if (param_3[1] <=
      (char *)(0x1ec - ((uint64_t)(param_2 >> 0x1f) +
                       (uVal_3 + *(int64_t *)(&DAT_1806afa50 + (uint64_t)uVal_1 * 8) >> 0x20)))) {
    pcStack_60 = *param_3;
    uStack_50 = ": ";
    uStack_40 = 0xcd;
    ppcStack_38 = &pcStack_60;
    puStack_30 = &DAT_18075e9b2;
    uStack_28 = 4;
    pcStack_58 = param_3[1];
    func_0x1806401a0(param_1,&puStack_30,&uStack_40,0);
  }
  pcStack_60 = "error ";
  uStack_50 = (char *)CONCAT44(uStack_50._4_4_,param_2);
  uStack_40 = 0x1c;
  ppcStack_38 = &pcStack_60;
  puStack_30 = &DAT_18075e9b2;
  uStack_28 = 4;
  func_0x1806401a0(param_1,&puStack_30,&uStack_40,0);
  return;
}

// Unwind@18063f140
void Unwind_18063f140(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18063f160
uint32_t func_0x18063f160(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t param_4)
{
  int64_t lVal_1;
  char ch_2;
  uint32_t uVal_3;
  int64_t *pLong_4;
  uint64_t uVal_5;
  uint64_t *pU64_6;
  int64_t lVal_7;
  uint32_t local_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint64_t local_b8;
  uint8_t **local_a8;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  int64_t local_98;
  uint64_t local_80;
  uint8_t local_78;
  undefined7 uStack_77;
  uint64_t local_68;
  uint64_t local_60;
  uint8_t local_58;
  undefined7 uStack_57;
  uint64_t local_48;
  uint64_t local_40;
  uint8_t local_38 [8];
  int64_t *local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_4 == 0) {
    local_30 = (int64_t *)func_0x180673ba0(1);
    ch_2 = func_0x18063f450(local_38);
  }
  else {
    local_30 = *(int64_t **)(param_4 + 8);
    (**(func_ptr_t *)(*local_30 + 8))();
    ch_2 = func_0x18063f450(local_38);
  }
  if (ch_2 == '\0') {
    func_0x18063f650(&local_a8,local_38);
    local_b8 = param_2[2];
    local_c8 = *(uint32_t *)param_2;
    uStack_c4 = *(uint32_t *)((int64_t)param_2 + 4);
    uStack_c0 = *(uint32_t *)(param_2 + 1);
    uStack_bc = *(uint32_t *)((int64_t)param_2 + 0xc);
    uVal_3 = (*(func_ptr_t )local_a8[3])(&local_a8,param_1,&local_c8,param_3);
    local_a8 = &PTR_LAB_1806de5c0;
    if (0xf < local_40) {
      lVal_1 = CONCAT71(uStack_57,local_58);
      uVal_5 = local_40 + 1;
      lVal_7 = lVal_1;
      if (0xfff < uVal_5) {
        lVal_7 = *(int64_t *)(lVal_1 + -8);
        if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_7)) goto LAB_18063f343;
        uVal_5 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_5);
    }
    local_48 = 0;
    local_40 = 0xf;
    local_58 = 0;
    if (0xf < local_60) {
      lVal_1 = CONCAT71(uStack_77,local_78);
      uVal_5 = local_60 + 1;
      lVal_7 = lVal_1;
      if (0xfff < uVal_5) {
        lVal_7 = *(int64_t *)(lVal_1 + -8);
        if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_7)) goto LAB_18063f343;
        uVal_5 = local_60 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_5);
    }
    local_68 = 0;
    local_60 = 0xf;
    local_78 = 0;
    if (0xf < local_80) {
      uVal_5 = local_80 + 1;
      lVal_7 = local_98;
      if (0xfff < uVal_5) {
        lVal_7 = *(int64_t *)(local_98 + -8);
        if (0x1f < (uint64_t)((local_98 + -8) - lVal_7)) {
LAB_18063f343:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_5 = local_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_5);
    }
  }
  else {
    pLong_4 = (int64_t *)func_0x18063f540(local_38);
    local_98 = param_2[2];
    local_a8 = (uint8_t **)*param_2;
    uStack_a0 = *(uint32_t *)(param_2 + 1);
    uStack_9c = *(uint32_t *)((int64_t)param_2 + 0xc);
    uVal_3 = (**(func_ptr_t *)(*pLong_4 + 0x18))(pLong_4,param_1,&local_a8,param_3);
  }
  if ((local_30 != (int64_t *)0x0) &&
     (pU64_6 = (uint64_t *)(**(func_ptr_t *)(*local_30 + 0x10))(), pU64_6 != (uint64_t *)0x0)) {
    (**(func_ptr_t *)*pU64_6)(pU64_6,1);
  }
  return uVal_3;
}

// Unwind@18063f350
void Unwind_18063f350(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18063f370
void Unwind_18063f370(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  if (*(int64_t **)(param_2 + 0xb8) != (int64_t *)0x0) {
    pU64_1 = (uint64_t *)(**(func_ptr_t *)(**(int64_t **)(param_2 + 0xb8) + 0x10))();
    if (pU64_1 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_1)(pU64_1,1);
    }
  }
  return;
}

// Unwind@18063f3b0
void Unwind_18063f3b0(uint64_t param_1,int64_t param_2)
{
  func_0x18063f850(param_2 + 0x40);
  return;
}

// func_0x18063f3e0
int64_t func_0x18063f3e0(int64_t *param_1,int64_t param_2)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  
  if (*param_1 == 0) {
    uVal_2 = func_0x180673ba0(1);
    *(uint64_t *)(param_2 + 8) = uVal_2;
  }
  else {
    pLong_1 = *(int64_t **)(*param_1 + 8);
    *(int64_t **)(param_2 + 8) = pLong_1;
    (**(func_ptr_t *)(*pLong_1 + 8))();
  }
  return param_2;
}

// Unwind@18063f430
void Unwind_18063f430(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18063f450
uint64_t func_0x18063f450(uint64_t param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint8_t local_28 [4];
  uint8_t local_24 [4];
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  func_0x180673560(local_24,0);
  if (DAT_180841b60 == 0) {
    func_0x180673560(local_28,0);
    if (DAT_180841b60 == 0) {
      DAT_180841b60 = (int64_t)DAT_180841fc0 + 1;
      DAT_180841fc0 = (int)DAT_180841b60;
    }
    func_0x1806735b0(local_28);
    lVal_2 = *(int64_t *)(param_1 + 8);
    if (DAT_180841b60 < *(uint64_t *)(lVal_2 + 0x18)) goto LAB_18063f4d0;
  }
  else {
    lVal_2 = *(int64_t *)(param_1 + 8);
    if (DAT_180841b60 < *(uint64_t *)(lVal_2 + 0x18)) {
LAB_18063f4d0:
      param_1 = CONCAT71((int7)(param_1 >> 8),1);
      if (*(int64_t *)(*(int64_t *)(lVal_2 + 0x10) + DAT_180841b60 * 8) != 0) goto LAB_18063f500;
    }
  }
  uVal_1 = DAT_180841b60;
  if (((*(char *)(lVal_2 + 0x24) != '\x01') ||
      (lVal_2 = func_0x180673c90(), *(uint64_t *)(lVal_2 + 0x18) <= uVal_1)) ||
     (param_1 = CONCAT71((int7)(param_1 >> 8),1),
     *(int64_t *)(*(int64_t *)(lVal_2 + 0x10) + uVal_1 * 8) == 0)) {
    param_1 = 0;
  }
LAB_18063f500:
  func_0x1806735b0(local_24);
  return param_1 & 0xffffffff;
}

// Unwind@18063f520
void Unwind_18063f520(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18063f540
int64_t func_0x18063f540(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint8_t local_30 [4];
  uint8_t local_2c [4];
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  func_0x180673560(local_2c,0);
  lVal_4 = DAT_180841b70;
  if (DAT_180841b60 == 0) {
    func_0x180673560(local_30,0);
    if (DAT_180841b60 == 0) {
      DAT_180841b60 = (int64_t)DAT_180841fc0 + 1;
      DAT_180841fc0 = (int)DAT_180841b60;
    }
    func_0x1806735b0(local_30);
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_180841b60 < *(uint64_t *)(lVal_3 + 0x18)) goto LAB_18063f5c8;
  }
  else {
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_180841b60 < *(uint64_t *)(lVal_3 + 0x18)) {
LAB_18063f5c8:
      lVal_5 = *(int64_t *)(*(int64_t *)(lVal_3 + 0x10) + DAT_180841b60 * 8);
      if (lVal_5 != 0) goto LAB_18063f5fc;
    }
  }
  uVal_2 = DAT_180841b60;
  if ((((*(char *)(lVal_3 + 0x24) != '\x01') ||
       (lVal_3 = func_0x180673c90(), *(uint64_t *)(lVal_3 + 0x18) <= uVal_2)) ||
      (lVal_5 = *(int64_t *)(*(int64_t *)(lVal_3 + 0x10) + uVal_2 * 8), lVal_5 == 0)) &&
     (lVal_5 = lVal_4, lVal_4 == 0)) {
    func_0x18008c8d0();
    fnPtr_1 = (func_ptr_t )swi(3);
    lVal_4 = (*fnPtr_1)();
    return lVal_4;
  }
LAB_18063f5fc:
  func_0x1806735b0(local_2c);
  return lVal_5;
}

// Unwind@18063f620
void Unwind_18063f620(uint64_t param_1,int64_t param_2)
{
  func_0x1806735b0(param_2 + 0x2c);
  return;
}

// func_0x18063f650
uint64_t * func_0x18063f650(uint64_t *param_1,uint64_t param_2)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  uint8_t uVal_3;
  int64_t *pLong_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  uint32_t local_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t local_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint64_t *local_40;
  uint64_t *local_38;
  uint64_t *local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  *(uint32_t *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_1806de5c0;
  local_40 = param_1 + 2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  param_1[4] = 0;
  param_1[5] = 0xf;
  local_38 = param_1 + 6;
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  param_1[8] = 0;
  param_1[9] = 0xf;
  local_30 = param_1 + 10;
  *(uint8_t (*)[16])(param_1 + 10) = ZEXT816(0);
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  pLong_4 = (int64_t *)func_0x1800ad470(param_2);
  (**(func_ptr_t *)(*pLong_4 + 0x28))(pLong_4,&local_60);
  pLong_1 = param_1 + 6;
  if (pLong_1 == (int64_t *)&local_60) {
    uVal_2 = CONCAT44(uStack_44,uStack_48);
    if (0xf < uVal_2) {
      lVal_7 = CONCAT44(uStack_5c,local_60);
      uVal_5 = uVal_2 + 1;
      lVal_6 = lVal_7;
      if (0xfff < uVal_5) {
        lVal_6 = *(int64_t *)(lVal_7 + -8);
        if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_6)) goto LAB_18063f807;
        uVal_5 = uVal_2 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_5);
    }
  }
  else {
    uVal_2 = param_1[9];
    if (0xf < uVal_2) {
      lVal_6 = *pLong_1;
      uVal_5 = uVal_2 + 1;
      lVal_7 = lVal_6;
      if (0xfff < uVal_5) {
        lVal_7 = *(int64_t *)(lVal_6 + -8);
        if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_7)) goto LAB_18063f807;
        uVal_5 = uVal_2 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_5);
    }
    *(uint32_t *)(param_1 + 8) = local_50;
    *(uint32_t *)((int64_t)param_1 + 0x44) = uStack_4c;
    *(uint32_t *)(param_1 + 9) = uStack_48;
    *(uint32_t *)((int64_t)param_1 + 0x4c) = uStack_44;
    *(uint32_t *)pLong_1 = local_60;
    *(uint32_t *)((int64_t)param_1 + 0x34) = uStack_5c;
    *(uint32_t *)(param_1 + 7) = uStack_58;
    *(uint32_t *)((int64_t)param_1 + 0x3c) = uStack_54;
  }
  if (param_1[8] != 0) {
    uVal_3 = (**(func_ptr_t *)(*pLong_4 + 0x20))(pLong_4);
    uVal_2 = param_1[5];
    if (0xf < uVal_2) {
      lVal_6 = param_1[2];
      uVal_5 = uVal_2 + 1;
      lVal_7 = lVal_6;
      if (0xfff < uVal_5) {
        lVal_7 = *(int64_t *)(lVal_6 + -8);
        if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_7)) {
LAB_18063f807:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_5 = uVal_2 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_5);
    }
    *(uint8_t *)(param_1 + 2) = uVal_3;
    *(uint64_t *)((int64_t)param_1 + 0x11) = 0;
    param_1[3] = 0;
    param_1[4] = 1;
    param_1[5] = 0xf;
  }
  return param_1;
}

// Unwind@18063f810
void Unwind_18063f810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x58));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x50));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x48));
  return;
}

// func_0x18063f850
void func_0x18063f850(uint64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  *param_1 = &PTR_LAB_1806de5c0;
  uVal_1 = param_1[0xd];
  if (0xf < uVal_1) {
    lVal_2 = param_1[10];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18063f959;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  *(uint8_t *)(param_1 + 10) = 0;
  uVal_1 = param_1[9];
  if (0xf < uVal_1) {
    lVal_2 = param_1[6];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18063f959;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[8] = 0;
  param_1[9] = 0xf;
  *(uint8_t *)(param_1 + 6) = 0;
  uVal_1 = param_1[5];
  if (0xf < uVal_1) {
    lVal_2 = param_1[2];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_18063f959:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(uint8_t *)(param_1 + 2) = 0;
  return;
}

// func_0x18063f960
/* WARNING: Removing unreachable block (ram,0x00018063f982) */
/* WARNING: Removing unreachable block (ram,0x00018063f996) */
/* WARNING: Removing unreachable block (ram,0x00018063f982) */
/* WARNING: Removing unreachable block (ram,0x00018063f996) */
void func_0x18063f960(uint64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_58 [47];
  uint8_t local_29;
  uint8_t local_28 [24];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  local_29 = 1;
  func_0x1800ae690(local_28,param_1);
  func_0x18067a120(local_28,&DAT_180768d70);
  func_0x180673080(local_10 ^ (uint64_t)auStack_58);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18063fd70
void Unwind_18063fd70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@18063fda0
void Unwind_18063fda0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@18063fdd0
void Unwind_18063fdd0(uint64_t param_1,int64_t param_2)
{
  func_0x18063fe00(param_2 + 0x20);
  return;
}

// func_0x18063fe00
void func_0x18063fe00(int64_t param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_1 + 0x68);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0x50);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18063feff;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x68) = 0xf;
  *(uint8_t *)(param_1 + 0x50) = 0;
  uVal_1 = *(uint64_t *)(param_1 + 0x48);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0x30);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18063feff;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x48) = 0xf;
  *(uint8_t *)(param_1 + 0x30) = 0;
  uVal_1 = *(uint64_t *)(param_1 + 0x28);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0x10);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_18063feff:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0xf;
  *(uint8_t *)(param_1 + 0x10) = 0;
  return;
}

// func_0x18063ff10
uint8_t (*func_0x18063ff10(uint8_t (*param_1)[16],uint32_t *param_2,uint32_t *param_3))[16]
{
  uint8_t *pU64_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  uint8_t *local_270;
  uint64_t local_268;
  uint64_t local_260;
  func_ptr_t local_258;
  uint8_t local_250 [504];
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_268 = 0;
  local_258 = func_0x1800b02d0;
  local_270 = local_250;
  local_260 = 500;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  func_0x1806401a0(&local_270,&local_48,&local_58,0);
  uVal_2 = local_268;
  pU64_1 = local_270;
  *param_1 = ZEXT816(0);
  uVal_6 = 0xf;
  pArr16_5 = param_1;
  if (0xf < local_268) {
    uVal_3 = local_268 | 0xf;
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
  *(uint64_t *)param_1[1] = uVal_2;
  *(uint64_t *)(param_1[1] + 8) = uVal_6;
  func_0x1806aa960(pArr16_5,pU64_1,uVal_2);
  (*pArr16_5)[uVal_2] = 0;
  if (local_270 != local_250) {
    thunk_FUN_180695dd0();
  }
  return param_1;
}

// Unwind@180640030
void Unwind_180640030(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x28) != param_2 + 0x48) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x180640070
void func_0x180640070(uint64_t param_1,uint32_t param_2,uint64_t param_3)
{
  size_t sz_1;
  char *_Str;
  uint8_t local_80 [8];
  uint8_t **local_78;
  char *local_70 [4];
  uint32_t local_50 [2];
  uint8_t **local_48;
  uint64_t local_30;
  uint64_t local_28;
  uint32_t local_1c;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_48 = &PTR_vftable_1806b0120;
  local_50[0] = param_2;
  local_30 = param_3;
  local_28 = param_1;
  local_1c = param_2;
  func_0x1800968f0(&local_78,local_50);
  _Str = "Unknown exception";
  if (local_70[0] != (char *)0x0) {
    _Str = local_70[0];
  }
  sz_1 = strlen(_Str);
  func_0x1800b1e50(local_80,_Str,_Str + sz_1,local_28);
  local_78 = std::exception::vftable;
  func_0x18067b490(local_70);
  return;
}

// Unwind@180640130
void Unwind_180640130(uint64_t param_1,int64_t param_2)
{
  *(uint8_t ***)(param_2 + 0x30) = std::exception::vftable;
  func_0x18067b490(param_2 + 0x38);
  return;
}

// Unwind@180640160
void Unwind_180640160(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Catch_All@180640180
uint8_t * Catch_All_180640180(void)
{
  return &LAB_1806400fe;
}

// func_0x1806401a0
void func_0x1806401a0(short *param_1,short **param_2,uint64_t *param_3,uint64_t param_4)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint64_t *pU64_3;
  uint uVal_4;
  uint8_t auStack_98 [32];
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  short *local_68;
  uint8_t auStack_60 [12];
  uint32_t uStack_54;
  short *local_50;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint64_t local_38;
  short *local_30;
  uint8_t local_28 [16];
  uint32_t local_18;
  uint64_t local_8;
  
  local_8 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  if ((param_2[1] != (short *)0x2) || (**param_2 != 0x7d7b)) {
    local_68 = *param_2;
    auStack_60._8_4_ = 0;
    auStack_60._0_8_ = param_2[1];
    local_48 = *(uint32_t *)param_3;
    uStack_44 = *(uint32_t *)((int64_t)param_3 + 4);
    uStack_40 = *(uint32_t *)(param_3 + 1);
    uStack_3c = *(uint32_t *)((int64_t)param_3 + 0xc);
    local_78 = *(uint32_t *)param_2;
    uStack_74 = *(uint32_t *)((int64_t)param_2 + 4);
    uStack_70 = *(uint32_t *)(param_2 + 1);
    uStack_6c = *(uint32_t *)((int64_t)param_2 + 0xc);
    local_50 = param_1;
    local_38 = param_4;
    func_0x1806403d0(&local_78,&local_68);
    goto LAB_180640204;
  }
  uVal_1 = *param_3;
  local_30 = param_1;
  if ((int64_t)uVal_1 < 0) {
    if (0 < (int)(uint)uVal_1) {
      pU64_3 = (uint64_t *)param_3[1];
      uVal_4 = *(uint *)(pU64_3 + 2);
      goto LAB_180640245;
    }
  }
  else {
    uVal_4 = (uint)uVal_1 & 0xf;
    if ((uVal_1 & 0xf) != 0) {
      pU64_3 = (uint64_t *)param_3[1];
LAB_180640245:
      uVal_1 = *pU64_3;
      switch(uVal_4) {
      case 1:
        func_0x180641f90(&local_68,param_1,uVal_1);
        break;
      case 2:
        func_0x180641ab0(&local_30,uVal_1 & 0xffffffff);
        break;
      case 3:
        func_0x1800b38b0(&local_68,param_1,uVal_1);
        break;
      case 4:
        func_0x180641bd0(&local_30,uVal_1);
        break;
      default:
        goto switchD_18064026b_caseD_5;
      case 7:
        func_0x180641d70(&local_30,uVal_1 & 0xffffff01);
        break;
      case 8:
        func_0x180641df0(&local_30,uVal_1 & 0xffffffff);
        break;
      case 9:
        func_0x180369b60(&local_68,param_1,uVal_1 & 0xffffffff);
        break;
      case 10:
        func_0x180642f30(&local_68,param_1);
        break;
      case 0xb:
        func_0x180642f30(&local_68,param_1);
        break;
      case 0xc:
        func_0x180641e40(&local_30,uVal_1);
        break;
      case 0xd:
        func_0x1800b1e50(&local_68,uVal_1,(func_ptr_t )pU64_3[1] + uVal_1,param_1);
        break;
      case 0xe:
        func_0x180641ee0(&local_30,uVal_1);
        break;
      case 0xf:
        local_28 = ZEXT816(0);
        local_18 = 0;
        _auStack_60 = ZEXT816(0);
        local_50 = (short *)0x0;
        local_68 = param_1;
        (*(func_ptr_t )pU64_3[1])(uVal_1,local_28,&local_68);
      }
      goto LAB_180640204;
    }
  }
switchD_18064026b_caseD_5:
  func_0x180641d00(&local_30);
LAB_180640204:
  if (DAT_18083cf40 == (local_8 ^ (uint64_t)auStack_98)) {
    return;
  }
  func_0x180673080(local_8 ^ (uint64_t)auStack_98);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x1806403d0
/* WARNING: Removing unreachable block (ram,0x0001806405ac) */
/* WARNING: Removing unreachable block (ram,0x00018064058f) */
/* WARNING: Removing unreachable block (ram,0x0001806405f1) */
/* WARNING: Removing unreachable block (ram,0x000180640d71) */
/* WARNING: Removing unreachable block (ram,0x0001806405ac) */
/* WARNING: Removing unreachable block (ram,0x00018064058f) */
/* WARNING: Removing unreachable block (ram,0x0001806405f1) */
/* WARNING: Removing unreachable block (ram,0x000180640d71) */
void func_0x1806403d0(func_ptr_t *param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  code ch_2;
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  func_ptr_t fnPtr_5;
  func_ptr_t *ptr2_Char_6;
  size_t sz_7;
  int64_t lVal_8;
  char *fnPtr_9;
  uint *pU64_10;
  uint uVal_11;
  char **ptr2_Char_12;
  uint64_t uVal_13;
  char *fnPtr_14;
  func_ptr_t fnPtr_15;
  func_ptr_t fnPtr_16;
  uint uVal_17;
  uint uVal_18;
  int64_t *pLong_19;
  uint64_t uVal_20;
  uint64_t uVal_21;
  uint8_t auStack_e8 [32];
  int64_t local_c8;
  uint *local_c0;
  uint64_t local_b8;
  uint local_b0;
  int64_t *local_a8;
  uint64_t local_a0;
  uint local_98;
  uint32_t uStack_94;
  int iStack_90;
  uint32_t uStack_8c;
  uint64_t uStack_88;
  uint64_t local_80;
  uint8_t local_78 [5];
  uint8_t auStack_73 [4];
  uint8_t auStack_6f [7];
  uint32_t local_68;
  uint64_t local_60;
  
  local_60 = DAT_18083cf40 ^ (uint64_t)auStack_e8;
  fnPtr_16 = *param_1;
  fnPtr_1 = fnPtr_16 + (int64_t)param_1[1];
  if (param_1[1] != (func_ptr_t )0x0) {
    fnPtr_15 = fnPtr_16;
    do {
      fnPtr_5 = fnPtr_15 + 1;
      pU64_10 = &local_98;
      if (*fnPtr_15 == (code)0x7d) {
        if ((fnPtr_5 != fnPtr_1) && (*fnPtr_5 == (code)0x7d)) {
          pLong_19 = *(int64_t **)(param_2 + 0x18);
          goto LAB_1806404ec;
        }
        local_78[0] = 1;
        fnPtr_14 = "unmatched \'}\' in format string";
        goto LAB_180640de1;
      }
      if (*fnPtr_15 != (code)0x7b) goto LAB_180640456;
      func_0x1800b1e50(&local_98,fnPtr_16,fnPtr_15,*(uint64_t *)(param_2 + 0x18));
      auArr_3 = _local_78;
      if (fnPtr_5 == fnPtr_1) {
        local_78[0] = 1;
        fnPtr_14 = "invalid format string";
        goto LAB_180640de1;
      }
      ch_2 = *fnPtr_5;
      if (ch_2 == (code)0x3a) {
        uVal_18 = *(uint *)(param_2 + 0x10);
        uVal_13 = (uint64_t)uVal_18;
        if (-1 < (int)uVal_18) {
          *(uint *)(param_2 + 0x10) = uVal_18 + 1;
LAB_1806405ae:
          fnPtr_5 = (func_ptr_t )func_0x180644460(param_2,uVal_13,fnPtr_5 + 1,fnPtr_1);
          if ((fnPtr_5 == fnPtr_1) || (*fnPtr_5 != (code)0x7d)) {
            local_78[0] = 1;
            goto LAB_180640dfd;
          }
          goto LAB_1806405d4;
        }
LAB_180640dd1:
        local_78[0] = 1;
        fnPtr_14 = "cannot switch from manual to automatic argument indexing";
        goto LAB_180640de1;
      }
      if (ch_2 == (code)0x7b) {
        func_0x1800b1e50(&local_98,fnPtr_5,fnPtr_15 + 2,*(uint64_t *)(param_2 + 0x18));
        goto LAB_180640450;
      }
      if (ch_2 != (code)0x7d) {
        local_b0 = 0;
        local_b8 = param_2;
        fnPtr_5 = (func_ptr_t )func_0x180644270(fnPtr_5,fnPtr_1,&local_b8);
        auArr_3 = _local_78;
        if (fnPtr_5 == fnPtr_1) {
LAB_18064057d:
          local_78[0] = 1;
          fnPtr_14 = "missing \'}\' in format string";
          goto LAB_180640de1;
        }
        uVal_13 = (uint64_t)local_b0;
        if (*fnPtr_5 == (code)0x3a) goto LAB_1806405ae;
        if (*fnPtr_5 != (code)0x7d) goto LAB_18064057d;
        uVal_20 = *(uint64_t *)(param_2 + 0x20);
        if ((int64_t)uVal_20 < 0) {
          if ((int)uVal_20 <= (int)local_b0) goto LAB_1806406e0;
          ptr2_Char_12 = (char **)(*(int64_t *)(param_2 + 0x28) + (int64_t)(int)local_b0 * 0x18);
          uVal_18 = *(uint *)(*(int64_t *)(param_2 + 0x28) + 0x10 + (int64_t)(int)local_b0 * 0x18);
LAB_1806406a2:
          fnPtr_14 = *ptr2_Char_12;
          fnPtr_16 = (func_ptr_t )ptr2_Char_12[1];
          pLong_19 = *(int64_t **)(param_2 + 0x18);
          uVal_11 = (uint)fnPtr_14;
          local_a8 = pLong_19;
          switch(uVal_18) {
          case 1:
            func_0x180641f90(&local_98,pLong_19);
            break;
          case 2:
            uVal_18 = 0x1f;
            if ((uVal_11 | 1) != 0) {
              for (; (uVal_11 | 1) >> uVal_18 == 0; uVal_18 = uVal_18 - 1) {
              }
            }
            uVal_21 = ((uint64_t)fnPtr_14 & 0xffffffff) +
                     *(int64_t *)(&DAT_1806afa50 + (uint64_t)uVal_18 * 8);
            uVal_20 = uVal_21 >> 0x20;
            uVal_18 = (uint)(uVal_21 >> 0x20);
            lVal_8 = pLong_19[1];
            uVal_13 = ((int64_t)uVal_21 >> 0x20) + lVal_8;
            if ((uint64_t)pLong_19[2] < uVal_13) {
              (*(func_ptr_t )pLong_19[3])(pLong_19);
              lVal_8 = pLong_19[1];
              uVal_13 = ((int64_t)uVal_21 >> 0x20) + lVal_8;
              if (uVal_13 <= (uint64_t)pLong_19[2]) goto LAB_180640b23;
            }
            else {
LAB_180640b23:
              pLong_19[1] = uVal_13;
              if (*pLong_19 != 0) {
                lVal_8 = *pLong_19 + lVal_8;
                if (99 < uVal_11) {
                  do {
                    uVal_18 = (int)uVal_20 - 2;
                    uVal_20 = (uint64_t)uVal_18;
                    uVal_17 = (uint)fnPtr_14;
                    uVal_11 = (uint)(((uint64_t)fnPtr_14 & 0xffffffff) / 100);
                    fnPtr_14 = (char *)(((uint64_t)fnPtr_14 & 0xffffffff) / 100);
                    *(uint16_t *)(lVal_8 + uVal_20) =
                         *(uint16_t *)
                          (&DAT_1806afb50 + (uint64_t)(uVal_17 + (int)fnPtr_14 * -100) * 2);
                  } while (9999 < uVal_17);
                }
                if (uVal_11 < 10) {
                  *(byte *)(lVal_8 + (uint64_t)(uVal_18 - 1)) = (byte)uVal_11 | 0x30;
                }
                else {
                  *(uint16_t *)(lVal_8 + (uint64_t)(uVal_18 - 2)) =
                       *(uint16_t *)(&DAT_1806afb50 + (uint64_t)uVal_11 * 2);
                }
                fnPtr_16 = fnPtr_5 + 1;
                fnPtr_5 = fnPtr_16;
                goto LAB_180640456;
              }
            }
            func_0x18036aa60(&local_98,pLong_19,fnPtr_14,uVal_20);
            fnPtr_16 = fnPtr_5 + 1;
            fnPtr_5 = fnPtr_16;
            goto LAB_180640456;
          case 3:
            func_0x1800b38b0(&local_98,pLong_19);
            break;
          case 4:
            func_0x180641bd0(&local_a8,fnPtr_14);
            break;
          default:
            goto switchD_1806406ce_caseD_5;
          case 7:
            local_98 = 0x8000;
            uStack_94 = 0x20;
            iStack_90 = 0;
            uStack_8c = 0xffffffff;
            local_c8 = 0;
            func_0x180642100(local_78,pLong_19,(uint64_t)fnPtr_14 & 0xffffffffffffff01,&local_98);
            break;
          case 8:
            lVal_8 = pLong_19[1];
            uVal_13 = lVal_8 + 1;
            if ((uint64_t)pLong_19[2] < uVal_13) {
              (*(func_ptr_t )pLong_19[3])(pLong_19);
              lVal_8 = pLong_19[1];
              uVal_13 = lVal_8 + 1;
              if ((uint64_t)pLong_19[2] < uVal_13) {
                (*(func_ptr_t )pLong_19[3])(pLong_19);
                lVal_8 = pLong_19[1];
                uVal_13 = lVal_8 + 1;
              }
            }
            pLong_19[1] = uVal_13;
            *(char *)(*pLong_19 + lVal_8) = (char)fnPtr_14;
            break;
          case 9:
            func_0x180369b60(&local_98,pLong_19,(uint64_t)fnPtr_14 & 0xffffffff);
            break;
          case 10:
            func_0x180642f30(&local_98,pLong_19);
            break;
          case 0xb:
            func_0x180642f30(&local_98,pLong_19);
            break;
          case 0xc:
            if (fnPtr_14 == (char *)0x0) {
              local_a0 = (int64_t *)CONCAT71(local_a0._1_7_,1);
              goto LAB_180640e06;
            }
            fnPtr_16 = (func_ptr_t )strlen(fnPtr_14);
            pU64_10 = (uint *)local_78;
            goto LAB_180640ab6;
          case 0xd:
LAB_180640ab6:
            func_0x1800b1e50(pU64_10,fnPtr_14,fnPtr_16 + (int64_t)fnPtr_14,pLong_19);
            break;
          case 0xe:
            local_78 = (uint8_t  [5])0x2000008000;
            auArr_4 = _local_78;
            auStack_6f._3_4_ = auArr_3._12_4_;
            _local_78 = auArr_4._0_8_;
            stack0xffffffffffffff90 = 0;
            _local_78 = (unkuint9)0x2000008000;
            auStack_6f._3_4_ = 0xffffffff;
            fnPtr_9 = fnPtr_14;
            local_c8 = 2;
            do {
              lVal_8 = local_c8;
              fnPtr_9 = (char *)((uint64_t)fnPtr_9 >> 4);
              local_c8 = lVal_8 + 1;
            } while (fnPtr_9 != (char *)0x0);
            uStack_94 = (uint32_t)((uint64_t)fnPtr_14 >> 0x20);
            iStack_90 = (int)lVal_8 + -1;
            local_c0 = &local_98;
            local_98 = uVal_11;
            func_0x180644060(&local_a0,pLong_19,local_78);
            break;
          case 0xf:
            _local_78 = ZEXT816(0);
            local_68 = 0;
            iStack_90 = 0;
            uStack_8c = 0;
            uStack_88 = 0;
            local_98 = (uint)pLong_19;
            uStack_94 = (uint32_t)((uint64_t)pLong_19 >> 0x20);
            local_80 = 0;
            (*fnPtr_16)(fnPtr_14,local_78,&local_98);
          }
LAB_1806405d4:
          fnPtr_16 = fnPtr_5 + 1;
          fnPtr_5 = fnPtr_16;
          goto LAB_180640456;
        }
        if ((local_b0 < 0xf) &&
           (uVal_20 = uVal_20 >> ((char)local_b0 * '\x04' & 0x3fU), uVal_18 = (uint)uVal_20 & 0xf,
           (uVal_20 & 0xf) != 0)) {
          ptr2_Char_12 = (char **)(uVal_13 * 0x10 + *(int64_t *)(param_2 + 0x28));
          goto LAB_1806406a2;
        }
LAB_1806406e0:
        local_a8 = *(int64_t **)(param_2 + 0x18);
switchD_1806406ce_caseD_5:
        local_78[0] = 1;
        goto LAB_180640dc8;
      }
      uVal_18 = *(uint *)(param_2 + 0x10);
      if ((int)uVal_18 < 0) goto LAB_180640dd1;
      *(uint *)(param_2 + 0x10) = uVal_18 + 1;
      uVal_13 = *(uint64_t *)(param_2 + 0x20);
      if ((int64_t)uVal_13 < 0) {
        if ((int)uVal_13 <= (int)uVal_18) {
LAB_180640669:
          local_78[0] = 1;
          local_a0 = *(int64_t **)(param_2 + 0x18);
          goto LAB_180640dc8;
        }
        ptr2_Char_6 = (func_ptr_t *)(*(int64_t *)(param_2 + 0x28) + (uint64_t)uVal_18 * 0x18);
        uVal_11 = *(uint *)(*(int64_t *)(param_2 + 0x28) + 0x10 + (uint64_t)uVal_18 * 0x18);
      }
      else {
        if ((0xe < uVal_18) ||
           (uVal_13 = uVal_13 >> ((char)uVal_18 * '\x04' & 0x3fU), uVal_11 = (uint)uVal_13 & 0xf,
           (uVal_13 & 0xf) == 0)) goto LAB_180640669;
        ptr2_Char_6 = (func_ptr_t *)((uint64_t)uVal_18 * 0x10 + *(int64_t *)(param_2 + 0x28));
      }
      fnPtr_16 = *ptr2_Char_6;
      pLong_19 = *(int64_t **)(param_2 + 0x18);
      uVal_18 = (uint)fnPtr_16;
      local_a0 = pLong_19;
      switch(uVal_11) {
      case 1:
        func_0x180641f90(&local_98,pLong_19);
        break;
      case 2:
        uVal_11 = 0x1f;
        if ((uVal_18 | 1) != 0) {
          for (; (uVal_18 | 1) >> uVal_11 == 0; uVal_11 = uVal_11 - 1) {
          }
        }
        uVal_21 = ((uint64_t)fnPtr_16 & 0xffffffff) +
                 *(int64_t *)(&DAT_1806afa50 + (uint64_t)uVal_11 * 8);
        uVal_20 = uVal_21 >> 0x20;
        uVal_11 = (uint)(uVal_21 >> 0x20);
        lVal_8 = pLong_19[1];
        uVal_13 = ((int64_t)uVal_21 >> 0x20) + lVal_8;
        if ((uint64_t)pLong_19[2] < uVal_13) {
          (*(func_ptr_t )pLong_19[3])(pLong_19);
          lVal_8 = pLong_19[1];
          uVal_13 = ((int64_t)uVal_21 >> 0x20) + lVal_8;
          if (uVal_13 <= (uint64_t)pLong_19[2]) goto LAB_180640806;
        }
        else {
LAB_180640806:
          pLong_19[1] = uVal_13;
          if (*pLong_19 != 0) {
            lVal_8 = *pLong_19 + lVal_8;
            if (99 < uVal_18) {
              do {
                uVal_11 = (int)uVal_20 - 2;
                uVal_20 = (uint64_t)uVal_11;
                uVal_17 = (uint)fnPtr_16;
                uVal_18 = (uint)(((uint64_t)fnPtr_16 & 0xffffffff) / 100);
                fnPtr_16 = (func_ptr_t )(((uint64_t)fnPtr_16 & 0xffffffff) / 100);
                *(uint16_t *)(lVal_8 + uVal_20) =
                     *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(uVal_17 + (int)fnPtr_16 * -100) * 2)
                ;
              } while (9999 < uVal_17);
            }
            if (uVal_18 < 10) {
              *(byte *)(lVal_8 + (uint64_t)(uVal_11 - 1)) = (byte)uVal_18 | 0x30;
            }
            else {
              *(uint16_t *)(lVal_8 + (uint64_t)(uVal_11 - 2)) =
                   *(uint16_t *)(&DAT_1806afb50 + (uint64_t)uVal_18 * 2);
            }
            fnPtr_16 = fnPtr_15 + 2;
            fnPtr_5 = fnPtr_16;
            goto LAB_180640456;
          }
        }
        func_0x18036aa60(&local_98,pLong_19,fnPtr_16,uVal_20);
        fnPtr_16 = fnPtr_15 + 2;
        fnPtr_5 = fnPtr_16;
        goto LAB_180640456;
      case 3:
        func_0x1800b38b0(&local_98,pLong_19);
        break;
      case 4:
        func_0x180641bd0(&local_a0,fnPtr_16);
        break;
      default:
        local_78[0] = 1;
        goto LAB_180640dc8;
      case 7:
        local_98 = 0x8000;
        uStack_94 = 0x20;
        iStack_90 = 0;
        uStack_8c = 0xffffffff;
        local_c8 = 0;
        func_0x180642100(local_78,pLong_19,(uint64_t)fnPtr_16 & 0xffffffffffffff01,&local_98);
        break;
      case 8:
        lVal_8 = pLong_19[1];
        uVal_13 = lVal_8 + 1;
        if ((uint64_t)pLong_19[2] < uVal_13) {
          (*(func_ptr_t )pLong_19[3])(pLong_19);
          lVal_8 = pLong_19[1];
          uVal_13 = lVal_8 + 1;
          if ((uint64_t)pLong_19[2] < uVal_13) {
            (*(func_ptr_t )pLong_19[3])(pLong_19);
            lVal_8 = pLong_19[1];
            uVal_13 = lVal_8 + 1;
          }
        }
        pLong_19[1] = uVal_13;
        *(char *)(*pLong_19 + lVal_8) = (char)fnPtr_16;
        break;
      case 9:
        func_0x180369b60(&local_98,pLong_19,(uint64_t)fnPtr_16 & 0xffffffff);
        break;
      case 10:
        func_0x180642f30(&local_98,pLong_19);
        break;
      case 0xb:
        func_0x180642f30(&local_98,pLong_19);
        break;
      case 0xc:
        if (fnPtr_16 != (func_ptr_t )0x0) {
          sz_7 = strlen((char *)fnPtr_16);
          fnPtr_5 = fnPtr_16 + sz_7;
          pU64_10 = (uint *)local_78;
          goto LAB_1806404ec;
        }
        local_b8 = CONCAT71(local_b8._1_7_,1);
LAB_180640e06:
        fnPtr_14 = "string pointer is null";
        goto LAB_180640de1;
      case 0xd:
        fnPtr_5 = ptr2_Char_6[1] + (int64_t)fnPtr_16;
LAB_1806404ec:
        func_0x1800b1e50(pU64_10,fnPtr_16,fnPtr_5,pLong_19);
        break;
      case 0xe:
        local_78 = (uint8_t  [5])0x2000008000;
        auArr_4 = _local_78;
        auStack_6f._3_4_ = auArr_3._12_4_;
        _local_78 = auArr_4._0_8_;
        stack0xffffffffffffff90 = 0;
        _local_78 = (unkuint9)0x2000008000;
        auStack_6f._3_4_ = 0xffffffff;
        fnPtr_5 = fnPtr_16;
        local_c8 = 2;
        do {
          lVal_8 = local_c8;
          fnPtr_5 = (func_ptr_t )((uint64_t)fnPtr_5 >> 4);
          local_c8 = lVal_8 + 1;
        } while (fnPtr_5 != (func_ptr_t )0x0);
        uStack_94 = (uint32_t)((uint64_t)fnPtr_16 >> 0x20);
        iStack_90 = (int)lVal_8 + -1;
        local_c0 = &local_98;
        local_98 = uVal_18;
        func_0x180644060(&local_b8,pLong_19,local_78);
        break;
      case 0xf:
        _local_78 = ZEXT816(0);
        local_68 = 0;
        iStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        local_98 = (uint)pLong_19;
        uStack_94 = (uint32_t)((uint64_t)pLong_19 >> 0x20);
        local_80 = 0;
        (*ptr2_Char_6[1])(fnPtr_16,local_78,&local_98);
      }
LAB_180640450:
      fnPtr_16 = fnPtr_15 + 2;
      fnPtr_5 = fnPtr_16;
LAB_180640456:
      fnPtr_15 = fnPtr_5;
    } while (fnPtr_15 != fnPtr_1);
  }
  func_0x1800b1e50(&local_98,fnPtr_16,fnPtr_1,*(uint64_t *)(param_2 + 0x18));
  if (DAT_18083cf40 == (local_60 ^ (uint64_t)auStack_e8)) {
    return;
  }
  func_0x180673080(local_60 ^ (uint64_t)auStack_e8);
LAB_180640dc8:
  fnPtr_14 = "argument not found";
LAB_180640de1:
  do {
    func_0x1800ae690(&local_98,fnPtr_14);
    func_0x18067a120(&local_98,&DAT_180768d70);
LAB_180640dfd:
    fnPtr_14 = "unknown format specifier";
  } while( true );
}

// func_0x180640e10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x180640e10(uint param_1)
{
  int64_t lVal_1;
  byte *pU8_2;
  byte bFlag_3;
  ushort uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint64_t uVal_7;
  uint uVal_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  uint8_t auArr_11 [16];
  uint8_t auArr_12 [16];
  uint uVal_13;
  uint uVal_14;
  uint8_t auArr_15 [16];
  uint8_t auArr_16 [16];
  uint8_t auArr_17 [16];
  
  if (param_1 < 0x10000) {
    lVal_9 = 0;
    uVal_8 = 0;
    do {
      lVal_1 = lVal_9 * 2;
      if (param_1 >> 8 < (uint)(byte)(&DAT_1806de040)[lVal_9 * 2]) break;
      if (param_1 >> 8 == (uint)(byte)(&DAT_1806de040)[lVal_9 * 2]) {
        uVal_10 = (uint64_t)uVal_8;
        do {
          if ((&DAT_1806de0a0)[uVal_10] == (char)param_1) {
            return 0;
          }
          uVal_10 = uVal_10 + 1;
        } while (uVal_10 < (byte)(&DAT_1806de041)[lVal_1] + uVal_8);
      }
      lVal_9 = lVal_9 + 1;
      uVal_8 = (byte)(&DAT_1806de041)[lVal_1] + uVal_8;
    } while (lVal_9 != 0x29);
    uVal_10 = CONCAT71((uint7)(ushort)(param_1 >> 0x10),1);
    uVal_7 = 0;
    do {
      bFlag_3 = (&DAT_1806de2d0)[uVal_7];
      uVal_8 = (uint)bFlag_3;
      if ((char)bFlag_3 < '\0') {
        pU8_2 = &DAT_1806de2d1 + uVal_7;
        uVal_7 = uVal_7 + 1;
        uVal_8 = (bFlag_3 & 0x7f) << 8 | (uint)*pU8_2;
      }
      param_1 = param_1 - uVal_8;
      if ((int)param_1 < 0) {
        return uVal_10;
      }
      uVal_10 = uVal_10 ^ 1;
      uVal_7 = uVal_7 + 1;
    } while (uVal_7 < 0x135);
  }
  else {
    if (0x1ffff < param_1) {
      auArr_11 = pshufb(ZEXT416(param_1),_DAT_1806ddfd0);
      auArr_12._0_4_ = auArr_11._0_4_ + _DAT_1806ddfe0;
      auArr_12._4_4_ = auArr_11._4_4_ + _UNK_1806ddfe4;
      auArr_12._8_4_ = auArr_11._8_4_ + _UNK_1806ddfe8;
      auArr_12._12_4_ = auArr_11._12_4_ + _UNK_1806ddfec;
      uVal_5 = param_1 & 0xfffffffe;
      uVal_8 = param_1 + _DAT_1806ddff0;
      uVal_6 = param_1 + _UNK_1806ddff4;
      uVal_13 = param_1 + _UNK_1806ddff8;
      uVal_14 = param_1 + _UNK_1806ddffc;
      auArr_16._0_4_ =
           -(uint)(((uVal_8 < _DAT_1806de010) * uVal_8 | (uVal_8 >= _DAT_1806de010) * _DAT_1806de010)
                  == uVal_8);
      auArr_16._4_4_ =
           -(uint)(((uVal_6 < _UNK_1806de014) * uVal_6 | (uVal_6 >= _UNK_1806de014) * _UNK_1806de014)
                  == uVal_6);
      auArr_16._8_4_ =
           -(uint)(((uVal_13 < _UNK_1806de018) * uVal_13 | (uVal_13 >= _UNK_1806de018) * _UNK_1806de018
                   ) == uVal_13);
      auArr_16._12_4_ =
           -(uint)(((uVal_14 < _UNK_1806de01c) * uVal_14 | (uVal_14 >= _UNK_1806de01c) * _UNK_1806de01c
                   ) == uVal_14);
      uVal_8 = SUB164(_DAT_1806de000,0);
      uVal_6 = SUB164(_DAT_1806de000,4);
      uVal_13 = SUB164(_DAT_1806de000,8);
      auArr_11._0_4_ =
           -(uint)(((auArr_12._0_4_ < uVal_8) * uVal_8 | (auArr_12._0_4_ >= uVal_8) * auArr_12._0_4_) ==
                  auArr_12._0_4_);
      auArr_11._4_4_ =
           -(uint)(((auArr_12._4_4_ < uVal_6) * uVal_6 | (auArr_12._4_4_ >= uVal_6) * auArr_12._4_4_) ==
                  auArr_12._4_4_);
      auArr_11._8_4_ =
           -(uint)(((auArr_12._8_4_ < uVal_13) * uVal_13 | (auArr_12._8_4_ >= uVal_13) * auArr_12._8_4_)
                  == auArr_12._8_4_);
      auArr_11._12_4_ =
           -(uint)(((auArr_12._12_4_ < uVal_5) * uVal_5 | (auArr_12._12_4_ >= uVal_5) * auArr_12._12_4_)
                  == auArr_12._12_4_);
      auArr_17._8_4_ = 0xffffffff;
      auArr_17._0_8_ = 0xffffffffffffffff;
      auArr_17._12_4_ = 0xffffffff;
      auArr_16 = packssdw(auArr_16,auArr_17 ^ auArr_11);
      auArr_15._0_4_ = -(uint)(uVal_8 == auArr_12._0_4_);
      auArr_15._4_4_ = -(uint)(uVal_6 == auArr_12._4_4_);
      auArr_15._8_4_ = -(uint)(uVal_13 == auArr_12._8_4_);
      auArr_15._12_4_ = -(uint)(uVal_5 == auArr_12._12_4_);
      auArr_11 = pshufhw(auArr_12,auArr_15,0xaa);
      auArr_11 = pblendw(auArr_11,auArr_16,0x7f);
      uVal_4 = (ushort)(SUB161(auArr_11 >> 7,0) & 1) | (ushort)(SUB161(auArr_11 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auArr_11 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auArr_11 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auArr_11 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auArr_11 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auArr_11 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auArr_11 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auArr_11 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auArr_11 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auArr_11 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auArr_11 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auArr_11 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auArr_11 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auArr_11 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auArr_11[15] >> 7) << 0xf;
      return (uint64_t)CONCAT11((char)(uVal_4 >> 8),param_1 < 0x110000 && uVal_4 == 0);
    }
    uVal_6 = param_1 & 0xffff;
    lVal_9 = 0;
    uVal_8 = 0;
    do {
      lVal_1 = lVal_9 * 2;
      if (uVal_6 >> 8 < (uint)(byte)(&DAT_1806de1d0)[lVal_9 * 2]) break;
      if (uVal_6 >> 8 == (uint)(byte)(&DAT_1806de1d0)[lVal_9 * 2]) {
        uVal_10 = (uint64_t)uVal_8;
        do {
          if ((&DAT_1806de220)[uVal_10] == (char)param_1) {
            return 0;
          }
          uVal_10 = uVal_10 + 1;
        } while (uVal_10 < (byte)(&DAT_1806de1d1)[lVal_1] + uVal_8);
      }
      lVal_9 = lVal_9 + 1;
      uVal_8 = (byte)(&DAT_1806de1d1)[lVal_1] + uVal_8;
    } while (lVal_9 != 0x26);
    uVal_10 = 1;
    uVal_7 = 0;
    do {
      bFlag_3 = (&DAT_1806de410)[uVal_7];
      uVal_8 = (uint)bFlag_3;
      if ((char)bFlag_3 < '\0') {
        pU8_2 = &DAT_1806de411 + uVal_7;
        uVal_7 = uVal_7 + 1;
        uVal_8 = (bFlag_3 & 0x7f) << 8 | (uint)*pU8_2;
      }
      uVal_6 = uVal_6 - uVal_8;
      if ((int)uVal_6 < 0) {
        return uVal_10;
      }
      uVal_10 = uVal_10 ^ 1;
      uVal_7 = uVal_7 + 1;
    } while (uVal_7 < 0x1a3);
  }
  return uVal_10;
}

// func_0x180641020
uint64_t func_0x180641020(uint param_1)
{
  uint8_t auArr_1 [16];
  int iVal_2;
  uint uVal_3;
  uint64_t uVal_4;
  byte bFlag_5;
  uint64_t uVal_6;
  uint uVal_7;
  char ch_8;
  uint uVal_9;
  int iVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  uint uVal_13;
  
  uVal_13 = param_1 & 0x7fffff;
  uVal_7 = param_1 >> 0x17 & 0xff;
  if (uVal_7 == 0) {
    uVal_7 = 0xffffff6b;
    if (uVal_13 == 0) {
      uVal_3 = 0;
      uVal_11 = 0;
      goto LAB_1806412a7;
    }
  }
  else {
    uVal_7 = uVal_7 - 0x96;
    if (uVal_13 == 0) {
      uVal_13 = (int)(uVal_7 * 0x9a209 + -0x3fe1f) >> 0x15;
      uVal_11 = (uint64_t)uVal_13;
      ch_8 = (char)((int)(uVal_13 * -0x1a934f) >> 0x13) + (char)uVal_7;
      uVal_12 = *(uint64_t *)(&DAT_1806de948 + (int64_t)(int)-uVal_13 * 8);
      bFlag_5 = 0x28 - ch_8;
      uVal_9 = (uint)((uVal_7 & 0xfffffffe) != 2) + (int)(uVal_12 - (uVal_12 >> 0x19) >> (bFlag_5 & 0x3f))
      ;
      uVal_6 = (uVal_12 >> 0x18) + uVal_12 >> (bFlag_5 & 0x3f) & 0xffffffff;
      uVal_4 = uVal_6 / 10;
      if ((uint)(((int)(uVal_6 / 10) + (int)(uVal_6 / 10)) * 5) < uVal_9) {
        uVal_3 = (int)(uVal_12 >> (0x27U - ch_8 & 0x3f)) + 1U >> 1;
        if (uVal_7 == 0xffffffdd) {
          uVal_3 = uVal_3 & 0xfffffffe;
        }
        else {
          uVal_3 = uVal_3 + (uVal_3 < uVal_9);
        }
      }
      else {
        iVal_10 = uVal_13 - 1;
        do {
          uVal_7 = (uint)uVal_4;
          uVal_13 = uVal_7 * 0x40000000 | uVal_7 * -0x3d70a3d7 >> 2;
          uVal_4 = (uint64_t)uVal_13;
          iVal_10 = iVal_10 + 2;
        } while (uVal_13 < 0x28f5c29);
        uVal_13 = uVal_7 * -0x33333333 >> 1 | (uint)((uVal_7 * -0x33333333 & 1) != 0) << 0x1f;
        uVal_3 = uVal_13;
        if (uVal_13 >= 0x1999999a) {
          uVal_3 = uVal_7;
        }
        uVal_11 = (uint64_t)(iVal_10 + (uint)(uVal_13 < 0x1999999a));
      }
      goto LAB_1806412a7;
    }
    uVal_13 = uVal_13 | 0x800000;
  }
  uVal_9 = (int)(uVal_7 * 0x4d105) >> 0x14;
  uVal_11 = (uint64_t)uVal_9;
  uVal_12 = *(uint64_t *)(&DAT_1806de948 + (int64_t)(int)(1 - uVal_9) * 8);
  bFlag_5 = (char)((int)((1 - uVal_9) * 0x1a934f) >> 0x13) + (char)uVal_7;
  auArr_1._8_8_ = 0;
  auArr_1._0_8_ = uVal_12;
  auArr_1 = (ZEXT416(uVal_13 * 2 + 1 << (bFlag_5 & 0x1f)) << 0x20) * auArr_1;
  uVal_6 = auArr_1._8_8_ >> 0x20;
  uVal_4 = uVal_6 / 100;
  iVal_2 = (int)(uVal_6 / 100);
  iVal_10 = (int)(uVal_6 / 100);
  uVal_7 = iVal_10 * -100 + auArr_1._12_4_;
  uVal_3 = (uint)(uVal_12 >> (~bFlag_5 & 0x3f));
  if (uVal_7 < uVal_3) {
    if ((uVal_7 != 0) || ((auArr_1._8_4_ != 0 || ((uVal_13 & 1) == 0)))) {
LAB_18064111f:
      iVal_10 = uVal_9 - 1;
      do {
        uVal_7 = (uint)uVal_4;
        uVal_13 = uVal_7 * 0x40000000 | uVal_7 * -0x3d70a3d7 >> 2;
        uVal_4 = (uint64_t)uVal_13;
        iVal_10 = iVal_10 + 2;
      } while (uVal_13 < 0x28f5c29);
      uVal_13 = uVal_7 * -0x33333333 >> 1 | (uint)((uVal_7 * -0x33333333 & 1) != 0) << 0x1f;
      uVal_3 = uVal_13;
      if (uVal_13 >= 0x1999999a) {
        uVal_3 = uVal_7;
      }
      uVal_11 = (uint64_t)(iVal_10 + (uint)(uVal_13 < 0x1999999a));
      goto LAB_1806412a7;
    }
    iVal_2 = iVal_10 + -1;
    uVal_7 = 100;
  }
  else if ((uVal_7 <= uVal_3) &&
          (uVal_6 = (uVal_13 * 2 - 1) * uVal_12,
          ((uint)((int)(uVal_6 >> (-(bFlag_5 + 0x20) & 0x3f)) == 0) & ~uVal_13 |
          (uint)((uVal_6 >> ((uint64_t)(byte)(0x40 - bFlag_5) & 0x3f) & 1) != 0)) != 0))
  goto LAB_18064111f;
  uVal_7 = uVal_7 - (uVal_3 >> 1);
  uVal_9 = uVal_7 * 0x199a + 0x8002;
  uVal_3 = (uVal_9 >> 0x10) + iVal_2 * 10;
  if ((uVal_9 & 0xffff) < 0x199a) {
    uVal_12 = uVal_12 * (uVal_13 * 2);
    if (((uVal_7 ^ (uint)(uVal_12 >> (-bFlag_5 & 0x3f))) & 1) == 0) {
      uVal_3 = uVal_3 - ((byte)(uVal_9 >> 0x10) & 1 & (int)(uVal_12 >> (-(bFlag_5 + 0x20) & 0x3f)) == 0);
    }
    else {
      uVal_3 = uVal_3 - 1;
    }
  }
LAB_1806412a7:
  return (uint64_t)uVal_3 | uVal_11 << 0x20;
}

// func_0x1806412c0
uint64_t * func_0x1806412c0(uint64_t *param_1,uint64_t param_2)
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
  char ch_18;
  uint8_t auArr_19 [16];
  uint8_t auArr_20 [16];
  byte bFlag_21;
  byte bFlag_22;
  int iVal_23;
  uint uVal_24;
  int iVal_25;
  uint64_t uVal_26;
  uint64_t uVal_27;
  char ch_28;
  int iVal_29;
  uint64_t uVal_30;
  uint64_t uVal_31;
  uint64_t uVal_32;
  uint uVal_33;
  uint64_t uVal_34;
  
  uVal_34 = param_2 & 0xfffffffffffff;
  uVal_33 = (uint)(param_2 >> 0x34) & 0x7ff;
  if (uVal_33 == 0) {
    uVal_33 = 0xfffffbce;
    if (uVal_34 == 0) {
      *param_1 = 0;
      *(uint32_t *)(param_1 + 1) = 0;
      return param_1;
    }
LAB_18064131c:
    iVal_29 = (int)(uVal_33 * 0x4d105) >> 0x14;
    uVal_24 = (0x126U - iVal_29 & 0xffff) * 0x2f69 >> 0x10;
    uVal_24 = (((0x126U - iVal_29) - uVal_24 & 0xffff) >> 1) + uVal_24;
    iVal_23 = ((uVal_24 >> 4) * 0x1b & 0xffff) - 0x124;
    uVal_24 = uVal_24 & 0xfffffff0;
    uVal_26 = *(uint64_t *)(&DAT_1806de5e0 + uVal_24);
    uVal_30 = *(uint64_t *)(&DAT_1806de5e8 + uVal_24);
    iVal_25 = (2 - iVal_29) - iVal_23;
    ch_18 = (char)((2 - iVal_29) * 0x1a934f >> 0x13);
    if (iVal_25 != 0) {
      auArr_1._8_8_ = 0;
      auArr_1._0_8_ = *(uint64_t *)(&DAT_1806de760 + (int64_t)iVal_25 * 8);
      auArr_9._8_8_ = 0;
      auArr_9._0_8_ = uVal_30;
      bFlag_21 = ch_18 - ((char)((uint)(iVal_23 * 0x1a934f) >> 0x13) + (char)iVal_25);
      auArr_2._8_8_ = 0;
      auArr_2._0_8_ = *(uint64_t *)(&DAT_1806de760 + (int64_t)iVal_25 * 8);
      auArr_10._8_8_ = 0;
      auArr_10._0_8_ = uVal_26;
      auArr_17._8_8_ = 0;
      auArr_17._0_8_ = SUB168(auArr_2 * auArr_10,8);
      auArr_17 = auArr_1 * auArr_9 + auArr_17;
      uVal_26 = auArr_17._0_8_;
      bFlag_22 = bFlag_21 & 0x3f;
      uVal_30 = uVal_26 >> bFlag_22 | auArr_17._8_8_ << 0x40 - bFlag_22;
      bFlag_21 = bFlag_21 & 0x3f;
      uVal_26 = (SUB168(auArr_2 * auArr_10,0) >> bFlag_21 | uVal_26 << 0x40 - bFlag_21) + 1;
    }
    bFlag_22 = ch_18 + (char)uVal_33;
    uVal_31 = uVal_34 * 2;
    uVal_32 = uVal_34 * 2 + 1 << (bFlag_22 & 0x3f);
    auArr_3._8_8_ = 0;
    auArr_3._0_8_ = uVal_30;
    auArr_11._8_8_ = 0;
    auArr_11._0_8_ = uVal_32;
    auArr_4._8_8_ = 0;
    auArr_4._0_8_ = uVal_26;
    auArr_12._8_8_ = 0;
    auArr_12._0_8_ = uVal_32;
    auArr_19._8_8_ = 0;
    auArr_19._0_8_ = SUB168(auArr_4 * auArr_12,8);
    auArr_19 = auArr_3 * auArr_11 + auArr_19;
    uVal_32 = auArr_19._8_8_ / 1000;
    uVal_33 = auArr_19._8_4_ + (int)uVal_32 * -1000;
    uVal_24 = (uint)(uVal_30 >> (~bFlag_22 & 0x3f));
    if (uVal_33 < uVal_24) {
      if ((uVal_33 != 0) || ((auArr_19._0_8_ != 0 || ((uVal_34 & 1) == 0)))) {
LAB_180641497:
        if ((uVal_32 * -0x3898f8b4dd16f1df >> 8 | uVal_32 * -0x3898f8b4dd16f1df << 0x38) <
            0x2af31dc462) {
          iVal_23 = 6;
          uVal_34 = uVal_32 / 100000000;
          do {
            uVal_26 = uVal_34;
            iVal_25 = (int)uVal_26;
            uVal_33 = iVal_25 * 0x40000000 | (uint)(iVal_25 * -0x3d70a3d7) >> 2;
            iVal_23 = iVal_23 + 2;
            uVal_34 = (uint64_t)uVal_33;
          } while (uVal_33 < 0x28f5c29);
          uVal_33 = (uint)(iVal_25 * -0x33333333) >> 1 |
                   (uint)((iVal_25 * -0x33333333 & 1U) != 0) << 0x1f;
          uVal_34 = (uint64_t)uVal_33;
          if (uVal_33 >= 0x1999999a) {
            uVal_34 = uVal_26;
          }
          iVal_23 = iVal_23 + (uint)(uVal_33 < 0x1999999a);
LAB_18064173a:
          *param_1 = uVal_34;
        }
        else {
          iVal_23 = -1;
          do {
            iVal_25 = iVal_23;
            uVal_34 = uVal_32;
            uVal_32 = uVal_34 * -0x70a3d70a3d70a3d7 >> 2 | uVal_34 << 0x3e;
            iVal_23 = iVal_25 + 2;
          } while (uVal_32 < 0x28f5c28f5c28f5d);
          *param_1 = uVal_34;
          uVal_34 = uVal_34 * -0x3333333333333333 >> 1 | uVal_34 << 0x3f;
          if (uVal_34 < 0x199999999999999a) goto LAB_18064173a;
          iVal_23 = iVal_25 + 1;
        }
        iVal_23 = iVal_23 + iVal_29 + 1;
        goto LAB_18064173f;
      }
      uVal_32 = uVal_32 - 1;
      uVal_33 = 1000;
    }
    else if ((uVal_33 <= uVal_24) &&
            (auArr_5._8_8_ = 0, auArr_5._0_8_ = uVal_26, auArr_13._8_8_ = 0, auArr_13._0_8_ = uVal_31 - 1,
            uVal_27 = SUB168(auArr_5 * auArr_13,8) + uVal_30 * (uVal_31 - 1),
            ((uint)((SUB168(auArr_5 * auArr_13,0) >> (-bFlag_22 & 0x3f) | uVal_27 << (bFlag_22 & 0x3f)) ==
                   0) & ~(uint)uVal_34 |
            (uint)((uVal_27 >> ((uint64_t)(byte)(0x40 - bFlag_22) & 0x3f) & 1) != 0)) != 0))
    goto LAB_180641497;
    *(int *)(param_1 + 1) = iVal_29;
    uVal_33 = uVal_33 - (uVal_24 >> 1);
    uVal_24 = uVal_33 * 0x290 + 0x8020;
    uVal_34 = (uint64_t)(uVal_24 >> 0x10) + uVal_32 * 10;
    *param_1 = uVal_34;
    if ((uVal_24 & 0xffff) < 0x290) {
      auArr_6._8_8_ = 0;
      auArr_6._0_8_ = uVal_26;
      auArr_14._8_8_ = 0;
      auArr_14._0_8_ = uVal_31;
      uVal_26 = SUB168(auArr_6 * auArr_14,8) + uVal_30 * uVal_31;
      if ((((uVal_33 ^ (uint)(uVal_26 >> (-bFlag_22 & 0x3f))) & 1) != 0) ||
         (((SUB168(auArr_6 * auArr_14,0) >> (0x40 - bFlag_22 & 0x3f) | uVal_26 << (bFlag_22 & 0x3f)) == 0
          && ((uVal_24 & 0x10000) != 0)))) {
        *param_1 = uVal_34 - 1;
      }
    }
  }
  else {
    uVal_33 = uVal_33 - 0x433;
    if (uVal_34 != 0) {
      uVal_34 = uVal_34 | 0x10000000000000;
      goto LAB_18064131c;
    }
    iVal_23 = (int)(uVal_33 * 0x9a209 + -0x3fe1f) >> 0x15;
    ch_18 = (char)(iVal_23 * -0x1a934f >> 0x13);
    ch_28 = ch_18 + (char)uVal_33;
    uVal_24 = (0x124U - iVal_23 & 0xffff) * 0x2f69 >> 0x10;
    uVal_24 = (((0x124U - iVal_23) - uVal_24 & 0xffff) >> 1) + uVal_24;
    iVal_29 = ((uVal_24 >> 4) * 0x1b & 0xffff) - 0x124;
    uVal_24 = uVal_24 & 0xfffffff0;
    uVal_34 = *(uint64_t *)(&DAT_1806de5e8 + uVal_24);
    iVal_25 = -iVal_29 - iVal_23;
    if (iVal_25 != 0) {
      auArr_7._8_8_ = 0;
      auArr_7._0_8_ = *(uint64_t *)(&DAT_1806de760 + (int64_t)iVal_25 * 8);
      auArr_15._8_8_ = 0;
      auArr_15._0_8_ = uVal_34;
      auArr_8._8_8_ = 0;
      auArr_8._0_8_ = *(uint64_t *)(&DAT_1806de760 + (int64_t)iVal_25 * 8);
      auArr_16._8_8_ = 0;
      auArr_16._0_8_ = *(uint64_t *)(&DAT_1806de5e0 + uVal_24);
      auArr_20._8_8_ = 0;
      auArr_20._0_8_ = SUB168(auArr_8 * auArr_16,8);
      auArr_20 = auArr_7 * auArr_15 + auArr_20;
      bFlag_22 = ch_18 - ((char)((uint)(iVal_29 * 0x1a934f) >> 0x13) + (char)iVal_25) & 0x3f;
      uVal_34 = auArr_20._0_8_ >> bFlag_22 | auArr_20._8_8_ << 0x40 - bFlag_22;
    }
    bFlag_22 = 0xb - ch_28;
    uVal_30 = (uVal_34 >> 0x35) + uVal_34 >> (bFlag_22 & 0x3f);
    uVal_31 = (uint64_t)((uVal_33 & 0xfffffffe) != 2) +
             (uVal_34 - (uVal_34 >> 0x36) >> (bFlag_22 & 0x3f));
    uVal_26 = uVal_30 / 10;
    if (uVal_26 * 10 < uVal_31) {
      uVal_34 = (uVal_34 >> (10U - ch_28 & 0x3f)) + 1 >> 1;
      *param_1 = uVal_34;
      *(int *)(param_1 + 1) = iVal_23;
      if (uVal_33 == 0xffffffb3) {
        *param_1 = uVal_34 & 0xfffffffffffffffe;
        return param_1;
      }
      if (uVal_31 <= uVal_34) {
        return param_1;
      }
      *param_1 = uVal_34 + 1;
      return param_1;
    }
    iVal_23 = iVal_23 + 1;
    if ((uVal_26 * -0x3898f8b4dd16f1df >> 8 | uVal_26 * -0x3898f8b4dd16f1df << 0x38) < 0x2af31dc462) {
      iVal_25 = 6;
      uVal_34 = uVal_30 / 1000000000;
      do {
        uVal_26 = uVal_34;
        iVal_29 = (int)uVal_26;
        uVal_33 = iVal_29 * 0x40000000 | (uint)(iVal_29 * -0x3d70a3d7) >> 2;
        iVal_25 = iVal_25 + 2;
        uVal_34 = (uint64_t)uVal_33;
      } while (uVal_33 < 0x28f5c29);
      uVal_33 = (uint)(iVal_29 * -0x33333333) >> 1 | (uint)((iVal_29 * -0x33333333 & 1U) != 0) << 0x1f;
      uVal_34 = (uint64_t)uVal_33;
      if (uVal_33 >= 0x1999999a) {
        uVal_34 = uVal_26 & 0xffffffff;
      }
      *param_1 = uVal_34;
      iVal_23 = iVal_25 + (uint)(uVal_33 < 0x1999999a) + iVal_23;
    }
    else {
      iVal_25 = -1;
      do {
        iVal_29 = iVal_25;
        uVal_34 = uVal_26;
        uVal_26 = uVal_34 * -0x70a3d70a3d70a3d7 >> 2 | uVal_34 << 0x3e;
        iVal_25 = iVal_29 + 2;
      } while (uVal_26 < 0x28f5c28f5c28f5d);
      *param_1 = uVal_34;
      uVal_34 = uVal_34 * -0x3333333333333333 >> 1 | uVal_34 << 0x3f;
      if (uVal_34 < 0x199999999999999a) {
        *param_1 = uVal_34;
        iVal_23 = iVal_25 + iVal_23;
      }
      else {
        iVal_23 = iVal_29 + 1 + iVal_23;
      }
    }
LAB_18064173f:
    *(int *)(param_1 + 1) = iVal_23;
  }
  return param_1;
}

// func_0x180641840
uint32_t * func_0x180641840(uint32_t *param_1,int64_t param_2)
{
  uint8_t uVal_1;
  int64_t *pLong_2;
  uint64_t *pU64_3;
  uint32_t local_40;
  uint32_t uStack_3c;
  uint64_t uStack_38;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    uStack_38 = (int64_t *)func_0x180673ba0(1);
  }
  else {
    uStack_38 = *(int64_t **)(param_2 + 8);
    (**(func_ptr_t *)(*uStack_38 + 8))();
  }
  pLong_2 = (int64_t *)func_0x1800ad470(&local_40);
  if (uStack_38 != (int64_t *)0x0) {
    pU64_3 = (uint64_t *)(**(func_ptr_t *)(*uStack_38 + 0x10))();
    if (pU64_3 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_3)(pU64_3,1);
    }
  }
  (**(func_ptr_t *)(*pLong_2 + 0x28))(pLong_2,&local_40);
  if (CONCAT44(uStack_2c,local_30) == 0) {
    uVal_1 = 0;
  }
  else {
    uVal_1 = (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2);
  }
  param_1[4] = local_30;
  param_1[5] = uStack_2c;
  param_1[6] = uStack_28;
  param_1[7] = uStack_24;
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = (uint32_t)uStack_38;
  param_1[3] = uStack_38._4_4_;
  *(uint8_t *)(param_1 + 8) = uVal_1;
  return param_1;
}

// Unwind@1806418f0
void Unwind_1806418f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180641910
void Unwind_180641910(uint64_t param_1,int64_t param_2)
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

// Unwind@180641950
void Unwind_180641950(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// func_0x180641980
uint32_t func_0x180641980(int64_t param_1)
{
  uint32_t uVal_1;
  int64_t *pLong_2;
  uint64_t *pU64_3;
  uint8_t local_28 [8];
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1 == 0) {
    local_20 = (int64_t *)func_0x180673ba0(1);
  }
  else {
    local_20 = *(int64_t **)(param_1 + 8);
    (**(func_ptr_t *)(*local_20 + 8))();
  }
  pLong_2 = (int64_t *)func_0x1800ad470(local_28);
  uVal_1 = (**(func_ptr_t *)(*pLong_2 + 0x18))(pLong_2);
  if (local_20 != (int64_t *)0x0) {
    pU64_3 = (uint64_t *)(**(func_ptr_t *)(*local_20 + 0x10))();
    if (pU64_3 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_3)(pU64_3,1);
    }
  }
  return uVal_1;
}

// Unwind@180641a00
void Unwind_180641a00(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180641a20
void Unwind_180641a20(uint64_t param_1,int64_t param_2)
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

// func_0x180641ab0
void func_0x180641ab0(int64_t **param_1,uint param_2)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  byte bFlag_4;
  uint uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint8_t auStack_58 [40];
  uint8_t auStack_30 [8];
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  uVal_5 = 0x1f;
  if ((param_2 | 1) != 0) {
    for (; (param_2 | 1) >> uVal_5 == 0; uVal_5 = uVal_5 - 1) {
    }
  }
  uVal_7 = (uint64_t)param_2 + *(int64_t *)(&DAT_1806afa50 + (uint64_t)uVal_5 * 8);
  pLong_1 = *param_1;
  uVal_6 = uVal_7 >> 0x20;
  uVal_5 = (uint)(uVal_7 >> 0x20);
  lVal_3 = pLong_1[1];
  uVal_8 = ((int64_t)uVal_7 >> 0x20) + lVal_3;
  if ((uint64_t)pLong_1[2] < uVal_8) {
    (*(func_ptr_t )pLong_1[3])(pLong_1);
    lVal_3 = pLong_1[1];
    uVal_8 = ((int64_t)uVal_7 >> 0x20) + lVal_3;
    if (uVal_8 <= (uint64_t)pLong_1[2]) goto LAB_180641b12;
  }
  else {
LAB_180641b12:
    pLong_1[1] = uVal_8;
    if (*pLong_1 != 0) {
      lVal_3 = *pLong_1 + lVal_3;
      uVal_8 = (uint64_t)param_2;
      if (param_2 < 100) {
        bFlag_4 = (byte)param_2;
        if (param_2 < 10) goto LAB_180641b8e;
      }
      else {
        do {
          uVal_7 = uVal_8;
          uVal_5 = (int)uVal_6 - 2;
          uVal_6 = (uint64_t)uVal_5;
          bFlag_4 = (byte)(uVal_7 / 100);
          param_2 = (uint)(uVal_7 / 100);
          *(uint16_t *)(lVal_3 + uVal_6) =
               *(uint16_t *)
                (&DAT_1806afb50 + (uint64_t)((uint)uVal_7 + (int)(uVal_7 / 100) * -100) * 2);
          uVal_8 = uVal_7 / 100;
        } while (9999 < (uint)uVal_7);
        if ((uint)(uVal_7 / 100) < 10) {
LAB_180641b8e:
          *(byte *)(lVal_3 + (uint64_t)(uVal_5 - 1)) = bFlag_4 | 0x30;
          goto LAB_180641b96;
        }
      }
      *(uint16_t *)(lVal_3 + (uint64_t)(uVal_5 - 2)) =
           *(uint16_t *)(&DAT_1806afb50 + (uint64_t)param_2 * 2);
      goto LAB_180641b96;
    }
  }
  func_0x18036aa60(auStack_30,pLong_1,param_2,uVal_6);
LAB_180641b96:
  if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_58)) {
    return;
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_58);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x180641bd0
void func_0x180641bd0(int64_t **param_1,uint64_t param_2)
{
  int64_t *pLong_1;
  bool bFlag_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint8_t auStack_48 [32];
  uint8_t auStack_28 [8];
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  pLong_1 = *param_1;
  lVal_4 = 0x3f;
  if ((param_2 | 1) != 0) {
    for (; (param_2 | 1) >> lVal_4 == 0; lVal_4 = lVal_4 + -1) {
    }
  }
  uVal_6 = (uint64_t)(byte)(&DAT_1806b0ac0)[lVal_4] -
          (uint64_t)
          (param_2 < *(uint64_t *)(&DAT_1806b0b00 + (uint64_t)(byte)(&DAT_1806b0ac0)[lVal_4] * 8));
  lVal_4 = pLong_1[1];
  uVal_5 = lVal_4 + uVal_6;
  if ((uint64_t)pLong_1[2] < uVal_5) {
    (*(func_ptr_t )pLong_1[3])(pLong_1);
    lVal_4 = pLong_1[1];
    uVal_5 = uVal_6 + lVal_4;
    if (uVal_5 <= (uint64_t)pLong_1[2]) goto LAB_180641c35;
  }
  else {
LAB_180641c35:
    pLong_1[1] = uVal_5;
    if (*pLong_1 != 0) {
      lVal_4 = *pLong_1 + lVal_4;
      uVal_5 = param_2;
      if (param_2 < 100) {
        if (param_2 < 10) goto LAB_180641cc2;
      }
      else {
        do {
          uVal_6 = (uint64_t)((int)uVal_6 - 2);
          param_2 = uVal_5 / 100;
          *(uint16_t *)(lVal_4 + uVal_6) = *(uint16_t *)(&DAT_1806afb50 + (uVal_5 % 100) * 2);
          bFlag_2 = 9999 < uVal_5;
          uVal_5 = param_2;
        } while (bFlag_2);
        if (param_2 < 10) {
LAB_180641cc2:
          *(byte *)(lVal_4 + (uint64_t)((int)uVal_6 - 1)) = (byte)param_2 | 0x30;
          goto LAB_180641cca;
        }
      }
      *(uint16_t *)(lVal_4 + (uint64_t)((int)uVal_6 - 2)) =
           *(uint16_t *)(&DAT_1806afb50 + param_2 * 2);
      goto LAB_180641cca;
    }
  }
  func_0x1800b1c90(auStack_28,pLong_1,param_2,uVal_6 & 0xffffffff);
LAB_180641cca:
  if (DAT_18083cf40 != (local_20 ^ (uint64_t)auStack_48)) {
    func_0x180673080(local_20 ^ (uint64_t)auStack_48);
    fnPtr_3 = (func_ptr_t )swi(3);
    (*fnPtr_3)();
    return;
  }
  return;
}

// func_0x180641d00
/* WARNING: Removing unreachable block (ram,0x000180641d22) */
/* WARNING: Removing unreachable block (ram,0x000180641d36) */
/* WARNING: Removing unreachable block (ram,0x000180641d22) */
/* WARNING: Removing unreachable block (ram,0x000180641d36) */
void func_0x180641d00(void)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_58 [47];
  uint8_t local_29;
  uint8_t local_28 [24];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  local_29 = 1;
  func_0x1800ae690(local_28,"argument not found");
  func_0x18067a120(local_28,&DAT_180768d70);
  func_0x180673080(local_10 ^ (uint64_t)auStack_58);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180641d70
void func_0x180641d70(uint64_t *param_1,uint32_t param_2)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  uint8_t local_20 [8];
  uint32_t local_18;
  uint8_t local_14;
  uint32_t local_13;
  undefined7 uStack_f;
  uint64_t local_8;
  
  local_8 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  local_18 = 0x8000;
  local_14 = 0x20;
  uStack_f = 0xffffffff000000;
  local_13 = 0;
  local_28 = 0;
  func_0x180642100(local_20,*param_1,param_2,&local_18);
  if (DAT_18083cf40 == (local_8 ^ (uint64_t)auStack_48)) {
    return;
  }
  func_0x180673080(local_8 ^ (uint64_t)auStack_48);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180641df0
void func_0x180641df0(int64_t **param_1,uint8_t param_2)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  pLong_1 = *param_1;
  lVal_2 = pLong_1[1];
  uVal_3 = lVal_2 + 1;
  if ((uint64_t)pLong_1[2] < uVal_3) {
    (*(func_ptr_t )pLong_1[3])(pLong_1);
    lVal_2 = pLong_1[1];
    uVal_3 = lVal_2 + 1;
    if ((uint64_t)pLong_1[2] < uVal_3) {
      (*(func_ptr_t )pLong_1[3])(pLong_1);
      lVal_2 = pLong_1[1];
      uVal_3 = lVal_2 + 1;
    }
  }
  pLong_1[1] = uVal_3;
  *(uint8_t *)(*pLong_1 + lVal_2) = param_2;
  return;
}

// func_0x180641e40
void func_0x180641e40(uint64_t *param_1,char *param_2)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  size_t sz_3;
  uint8_t auStack_58 [39];
  uint8_t local_31;
  uint8_t local_30 [24];
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  if (param_2 == (char *)0x0) {
    local_31 = 1;
  }
  else {
    uVal_1 = *param_1;
    sz_3 = strlen(param_2);
    func_0x1800b1e50(local_30,param_2,param_2 + sz_3,uVal_1);
    if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_58)) {
      return;
    }
    func_0x180673080(local_18 ^ (uint64_t)auStack_58);
  }
  func_0x1800ae690(local_30,"string pointer is null");
  func_0x18067a120(local_30,&DAT_180768d70);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x180641ee0
void func_0x180641ee0(uint64_t *param_1,uint64_t param_2)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint8_t auStack_68 [32];
  int64_t local_48;
  uint64_t *local_40;
  uint8_t local_30 [8];
  uint64_t local_28;
  int local_20;
  uint32_t local_18;
  uint8_t local_14;
  uint32_t local_13;
  undefined7 uStack_f;
  uint64_t local_8;
  
  local_8 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  local_18 = 0x8000;
  local_14 = 0x20;
  uStack_f = 0xffffffff000000;
  local_13 = 0;
  uVal_2 = param_2;
  local_48 = 2;
  do {
    lVal_3 = local_48;
    uVal_2 = uVal_2 >> 4;
    local_48 = lVal_3 + 1;
  } while (uVal_2 != 0);
  local_20 = (int)lVal_3 + -1;
  local_40 = &local_28;
  local_28 = param_2;
  func_0x180644060(local_30,*param_1,&local_18);
  if (DAT_18083cf40 == (local_8 ^ (uint64_t)auStack_68)) {
    return;
  }
  func_0x180673080(local_8 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180641f90
int64_t ** func_0x180641f90(int64_t **param_1,int64_t *param_2,uint param_3)
{
  uint8_t *pU64_1;
  uint64_t uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint uVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  
  uVal_5 = (uint64_t)-param_3;
  if (0 < (int)param_3) {
    uVal_5 = (uint64_t)param_3;
  }
  uVal_3 = (uint)uVal_5;
  uVal_8 = 0x1f;
  if ((uVal_3 | 1) != 0) {
    for (; (uVal_3 | 1) >> uVal_8 == 0; uVal_8 = uVal_8 - 1) {
    }
  }
  uVal_9 = *(int64_t *)(&DAT_1806afa50 + (uint64_t)uVal_8 * 8) + uVal_5;
  uVal_8 = (uint)(uVal_9 >> 0x20);
  lVal_10 = ((int64_t)uVal_9 >> 0x20) + (uint64_t)(param_3 >> 0x1f);
  uVal_6 = param_2[1];
  uVal_2 = param_2[2];
  uVal_11 = lVal_10 + uVal_6;
  if (uVal_2 < uVal_11) {
    (*(func_ptr_t )param_2[3])(param_2);
    uVal_6 = param_2[1];
    uVal_2 = param_2[2];
    uVal_11 = lVal_10 + uVal_6;
    uVal_7 = uVal_6;
    if (uVal_2 < uVal_11) goto LAB_180642044;
  }
  param_2[1] = uVal_11;
  uVal_7 = uVal_11;
  if (*param_2 != 0) {
    pU64_1 = (uint8_t *)(*param_2 + uVal_6);
    if ((int)param_3 < 0) {
      *pU64_1 = 0x2d;
      pU64_1 = pU64_1 + 1;
    }
    uVal_11 = uVal_5;
    if (99 < uVal_3) {
      do {
        uVal_8 = uVal_8 - 2;
        uVal_4 = (uint)uVal_5;
        uVal_11 = uVal_5 / 100;
        uVal_3 = (uint)(uVal_5 / 100);
        *(uint16_t *)(pU64_1 + uVal_8) =
             *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(uVal_4 + uVal_3 * -100) * 2);
        uVal_5 = uVal_11;
      } while (9999 < uVal_4);
    }
    if (uVal_3 < 10) {
      pU64_1[uVal_8 - 1] = (byte)uVal_11 | 0x30;
    }
    else {
      *(uint16_t *)(pU64_1 + (uVal_8 - 2)) = *(uint16_t *)(&DAT_1806afb50 + uVal_11 * 2);
    }
    *param_1 = param_2;
    return param_1;
  }
LAB_180642044:
  if ((int)param_3 < 0) {
    uVal_11 = uVal_7 + 1;
    if (uVal_2 < uVal_11) {
      (*(func_ptr_t )param_2[3])(param_2);
      uVal_7 = param_2[1];
      uVal_11 = uVal_7 + 1;
    }
    param_2[1] = uVal_11;
    *(uint8_t *)(*param_2 + uVal_7) = 0x2d;
  }
  func_0x18036aa60(param_1,param_2,uVal_5,uVal_9 >> 0x20);
  return param_1;
}

// func_0x180642100
uint64_t * func_0x180642100(uint64_t *param_1,uint64_t param_2,byte param_3,uint *param_4)
{
  func_ptr_t fnPtr_1;
  char ch_2;
  uint uVal_3;
  uint64_t *pU64_4;
  uint8_t auStack_78 [32];
  uint64_t local_58;
  uint64_t *local_50;
  uint64_t local_40;
  uint64_t local_38;
  uint32_t local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  uVal_3 = *param_4;
  if ((uVal_3 & 5) == 0) {
    local_40 = "false";
    if (param_3 != 0) {
      local_40 = "true";
    }
    local_58 = (uint64_t)param_3 ^ 5;
    local_50 = &local_40;
    local_38 = local_58;
    func_0x180642ca0(param_1,param_2,param_4,local_58);
  }
  else {
    if ((uVal_3 & 0x4000) != 0) {
      local_40 = (char *)CONCAT44(local_40._4_4_,(uint)param_3);
      local_30 = 1;
      ch_2 = func_0x18063f160(param_2,&local_40,param_4,0);
      if (ch_2 != '\0') {
        *param_1 = param_2;
        goto LAB_1806421cf;
      }
      uVal_3 = *param_4;
    }
    func_0x180642200(param_1,param_2,
                  (uint64_t)param_3 |
                  (uint64_t)*(uint *)((int64_t)&DAT_1806de840 + (uint64_t)(uVal_3 >> 8 & 0xc)) <<
                  0x20,param_4);
  }
LAB_1806421cf:
  if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_78)) {
    return param_1;
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_78);
  fnPtr_1 = (func_ptr_t )swi(3);
  pU64_4 = (uint64_t *)(*fnPtr_1)();
  return pU64_4;
}

// func_0x180642200
int64_t ** func_0x180642200(int64_t **param_1,int64_t *param_2,uint64_t param_3,uint *param_4)
{
  uint32_t *pU64_1;
  uint32_t *pU64_2;
  uint uVal_3;
  int64_t lVal_4;
  func_ptr_t fnPtr_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint64_t uVal_13;
  int64_t **ptr2_Long_14;
  uint uVal_15;
  uint uVal_16;
  char *fnPtr_17;
  int64_t lVal_18;
  uint64_t uVal_19;
  int64_t lVal_20;
  uint64_t uVal_21;
  uint uVal_22;
  uint64_t uVal_23;
  int iVal_24;
  uint uVal_25;
  uint64_t uVal_26;
  bool bFlag_27;
  uint8_t auStack_b8 [32];
  uint64_t local_98;
  uint32_t *local_90;
  uint32_t local_80;
  int local_7c;
  int64_t local_78;
  uint64_t local_70;
  uint32_t local_68;
  uint32_t local_58 [3];
  byte local_49;
  uint64_t uStack_48;
  
  uStack_48 = DAT_18083cf40 ^ (uint64_t)auStack_b8;
  uVal_26 = param_3 >> 0x20;
  uVal_3 = *param_4;
  uVal_15 = uVal_3 & 7;
  uVal_22 = (uint)param_3;
  if (uVal_15 - 4 < 4) {
    uVal_16 = (uint)(param_3 >> 0x20);
    switch(uVal_15) {
    case 4:
      fnPtr_17 = "0123456789ABCDEF";
      if ((uVal_3 & 0x1000) == 0) {
        fnPtr_17 = "0123456789abcdef";
      }
      uVal_21 = 0x20;
      do {
        *(char *)((int64_t)&local_70 + uVal_21 + 7) = fnPtr_17[(uint)param_3 & 0xf];
        uVal_21 = uVal_21 - 1;
        uVal_22 = (uint)param_3 >> 4;
        param_3 = (uint64_t)uVal_22;
      } while (uVal_22 != 0);
      if ((uVal_3 & 0x2000) != 0) {
        uVal_22 = (uint)((uVal_3 & 0x1000) == 0) << 0xd | 0x5830;
LAB_1806422e3:
        uVal_15 = uVal_22 << 8;
        if (uVal_26 == 0) {
          uVal_15 = uVal_22;
        }
        uVal_26 = (uint64_t)((uVal_15 | uVal_16) + 0x2000000);
      }
      break;
    case 5:
      param_3 = param_3 & 0xffffffff;
      lVal_20 = 0;
      do {
        lVal_18 = lVal_20;
        (&stack0xffffffffffffffb4)[lVal_18 + 3] = (byte)param_3 & 7 | 0x30;
        uVal_15 = (uint)param_3 >> 3;
        param_3 = (uint64_t)uVal_15;
        lVal_20 = lVal_18 + -1;
      } while (uVal_15 != 0);
      uVal_21 = lVal_18 + 0x1f;
      if (((uVal_3 & 0x2000) != 0) && (uVal_22 != 0 && (int64_t)(int)param_4[3] <= -(lVal_18 + -1))) {
        uVal_22 = 0x3000;
        if (uVal_26 == 0) {
          uVal_22 = 0x30;
        }
        uVal_26 = (uint64_t)((uVal_22 | uVal_16) + 0x1000000);
      }
      break;
    case 6:
      uVal_21 = 0x20;
      do {
        *(byte *)((int64_t)&local_70 + uVal_21 + 7) = (byte)param_3 & 1 | 0x30;
        uVal_21 = uVal_21 - 1;
        uVal_22 = (uint)param_3 >> 1;
        param_3 = (uint64_t)uVal_22;
      } while (uVal_22 != 0);
      if ((uVal_3 & 0x2000) != 0) {
        uVal_22 = (uint)((uVal_3 & 0x1000) == 0) << 0xd | 0x4230;
        goto LAB_1806422e3;
      }
      break;
    case 7:
      local_90 = &local_80;
      local_98 = 1;
      func_0x1806426f0(param_1,param_2,param_4,1);
      goto LAB_180642517;
    }
  }
  else {
    uVal_15 = 0x20;
    if (uVal_22 < 100) {
      uVal_19 = param_3 & 0xffffffff;
      uVal_16 = uVal_22;
    }
    else {
      uVal_21 = 0x20;
      do {
        uVal_15 = (int)uVal_21 - 2;
        uVal_21 = (uint64_t)uVal_15;
        uVal_16 = (uint)param_3;
        uVal_13 = param_3 & 0xffffffff;
        uVal_19 = uVal_13 / 100;
        uVal_22 = (uint)uVal_19;
        param_3 = uVal_13 / 100;
        *(uint16_t *)((int64_t)&local_68 + uVal_21) =
             *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(uVal_16 + (int)param_3 * -100) * 2);
      } while (9999 < uVal_16);
      uVal_16 = (uint)(uVal_13 / 100);
    }
    if (uVal_16 < 10) {
      uVal_21 = (uint64_t)(uVal_15 - 1);
      *(byte *)((int64_t)&local_68 + uVal_21) = (byte)uVal_19 | 0x30;
    }
    else {
      uVal_21 = (uint64_t)(uVal_15 - 2);
      *(uint16_t *)((int64_t)&local_68 + uVal_21) =
           *(uint16_t *)(&DAT_1806afb50 + (uint64_t)uVal_22 * 2);
    }
  }
  iVal_24 = 0x20 - (int)uVal_21;
  uVal_15 = param_4[2];
  uVal_16 = param_4[3];
  uVal_25 = (uint)uVal_26;
  uVal_22 = iVal_24 + (uVal_25 >> 0x18);
  uVal_19 = (uint64_t)uVal_22;
  if ((uVal_16 + 1 | uVal_15) == 0) {
    if ((uint64_t)param_2[2] < uVal_19 + param_2[1]) {
      (*(func_ptr_t )param_2[3])(param_2);
    }
    uVal_25 = uVal_25 & 0xffffff;
    if ((uVal_26 & 0xffffff) != 0) {
      do {
        lVal_20 = param_2[1];
        uVal_26 = lVal_20 + 1;
        if ((uint64_t)param_2[2] < uVal_26) {
          (*(func_ptr_t )param_2[3])(param_2);
          lVal_20 = param_2[1];
          uVal_26 = lVal_20 + 1;
        }
        param_2[1] = uVal_26;
        *(char *)(*param_2 + lVal_20) = (char)uVal_25;
        uVal_25 = uVal_25 >> 8;
      } while (uVal_25 != 0);
    }
    if (uVal_21 != 0x20) {
      lVal_20 = param_2[1];
      do {
        uVal_19 = 0x20 - uVal_21;
        uVal_26 = param_2[2];
        if (uVal_26 < lVal_20 + uVal_19) {
          (*(func_ptr_t )param_2[3])(param_2);
          lVal_20 = param_2[1];
          uVal_26 = param_2[2];
        }
        uVal_13 = uVal_26 - lVal_20;
        if (uVal_19 <= uVal_26 - lVal_20) {
          uVal_13 = uVal_19;
        }
        if (uVal_13 != 0) {
          lVal_4 = *param_2;
          lVal_18 = lVal_4 + lVal_20;
          if ((uVal_13 < 4) || ((lVal_18 - uVal_21) - (int64_t)&local_68 < 0x20)) {
            uVal_26 = 0;
LAB_1806425d6:
            uVal_23 = uVal_26;
            for (uVal_19 = uVal_13 & 3; uVal_19 != 0; uVal_19 = uVal_19 - 1) {
              *(uint8_t *)(lVal_18 + uVal_23) =
                   *(uint8_t *)((int64_t)&local_68 + uVal_23 + uVal_21);
              uVal_23 = uVal_23 + 1;
            }
            if (uVal_26 - uVal_13 < 0xfffffffffffffffd) {
              lVal_20 = lVal_20 + lVal_4;
              do {
                *(uint8_t *)(lVal_20 + uVal_23) =
                     *(uint8_t *)((int64_t)&local_68 + uVal_23 + uVal_21);
                *(uint8_t *)(lVal_20 + 1 + uVal_23) =
                     *(uint8_t *)((int64_t)&local_68 + uVal_23 + uVal_21 + 1);
                *(uint8_t *)(lVal_20 + 2 + uVal_23) =
                     *(uint8_t *)((int64_t)&local_68 + uVal_23 + uVal_21 + 2);
                *(uint8_t *)(lVal_20 + 3 + uVal_23) =
                     *(uint8_t *)((int64_t)&local_68 + uVal_23 + uVal_21 + 3);
                uVal_23 = uVal_23 + 4;
              } while (uVal_13 != uVal_23);
            }
          }
          else if (uVal_13 < 0x20) {
            uVal_19 = 0;
LAB_1806426b1:
            uVal_26 = uVal_13 & 0xfffffffffffffffc;
            do {
              *(uint32_t *)(lVal_18 + uVal_19) =
                   *(uint32_t *)((int64_t)&local_68 + uVal_19 + uVal_21);
              uVal_19 = uVal_19 + 4;
            } while (uVal_26 != uVal_19);
            if (uVal_13 != uVal_26) goto LAB_1806425d6;
          }
          else {
            uVal_26 = uVal_13 & 0xffffffffffffffe0;
            uVal_19 = 0;
            do {
              pU64_1 = (uint32_t *)((int64_t)&local_68 + uVal_19 + uVal_21);
              uVal_6 = pU64_1[1];
              uVal_7 = pU64_1[2];
              uVal_8 = pU64_1[3];
              pU64_2 = (uint32_t *)((int64_t)local_58 + uVal_19 + uVal_21);
              uVal_9 = *pU64_2;
              uVal_10 = pU64_2[1];
              uVal_11 = pU64_2[2];
              uVal_12 = pU64_2[3];
              pU64_2 = (uint32_t *)(lVal_4 + lVal_20 + uVal_19);
              *pU64_2 = *pU64_1;
              pU64_2[1] = uVal_6;
              pU64_2[2] = uVal_7;
              pU64_2[3] = uVal_8;
              pU64_1 = (uint32_t *)(lVal_4 + lVal_20 + 0x10 + uVal_19);
              *pU64_1 = uVal_9;
              pU64_1[1] = uVal_10;
              pU64_1[2] = uVal_11;
              pU64_1[3] = uVal_12;
              uVal_19 = uVal_19 + 0x20;
            } while (uVal_26 != uVal_19);
            if (uVal_13 != uVal_26) {
              uVal_19 = uVal_26;
              if ((uVal_13 & 0x1c) == 0) goto LAB_1806425d6;
              goto LAB_1806426b1;
            }
          }
          lVal_20 = param_2[1];
        }
        lVal_20 = lVal_20 + uVal_13;
        param_2[1] = lVal_20;
        uVal_21 = uVal_21 + uVal_13;
      } while (uVal_21 != 0x20);
    }
    *param_1 = param_2;
  }
  else {
    local_70 = &uStack_48;
    local_78 = (int64_t)&local_68 + uVal_21;
    if ((uVal_3 & 0x38) == 0x20) {
      local_7c = uVal_15 - uVal_22;
      bFlag_27 = local_7c != 0;
      if (uVal_15 < uVal_22) {
        local_7c = 0;
      }
      if (uVal_15 >= uVal_22 && bFlag_27) {
        uVal_19 = (uint64_t)uVal_15;
      }
    }
    else {
      local_7c = 0;
      if (uVal_16 - iVal_24 != 0 && iVal_24 <= (int)uVal_16) {
        uVal_19 = (uint64_t)(uVal_16 + (uVal_25 >> 0x18));
        local_7c = uVal_16 - iVal_24;
      }
    }
    local_90 = &local_80;
    local_98 = uVal_19;
    local_80 = uVal_25;
    func_0x1806429a0(param_1,param_2,param_4,uVal_19);
  }
LAB_180642517:
  if (DAT_18083cf40 != (uStack_48 ^ (uint64_t)auStack_b8)) {
    func_0x180673080(uStack_48 ^ (uint64_t)auStack_b8);
    fnPtr_5 = (func_ptr_t )swi(3);
    ptr2_Long_14 = (int64_t **)(*fnPtr_5)();
    return ptr2_Long_14;
  }
  return param_1;
}

// func_0x1806426f0
int64_t ** func_0x1806426f0(int64_t **param_1,int64_t *param_2,uint *param_3,int64_t param_4,uint64_t param_5, char *param_6)
{
  char ch_1;
  func_ptr_t fnPtr_2;
  int64_t *pLong_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  int64_t **ptr2_Long_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint8_t auStack_68 [32];
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_8 = 0;
  if (param_5 <= param_3[2]) {
    uVal_8 = param_3[2] - param_5;
  }
  uVal_9 = uVal_8 >> ((&DAT_180761149)[*param_3 >> 3 & 7] & 0x3f);
  uVal_7 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVal_8;
  if ((uint64_t)param_2[2] < uVal_7) {
    (*(func_ptr_t )param_2[3])(param_2,uVal_7);
  }
  if (uVal_9 != 0) {
    func_0x1800b57e0(&local_48,param_2,uVal_9,param_3);
    param_2 = local_48;
  }
  ch_1 = param_6[1];
  if (*param_6 == '\x01') {
    func_0x180642840(&local_48,param_2,ch_1);
    pLong_4 = local_48;
    pLong_3 = local_48;
  }
  else {
    lVal_5 = param_2[1];
    uVal_7 = lVal_5 + 1;
    if ((uint64_t)param_2[2] < uVal_7) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_5 = param_2[1];
      uVal_7 = lVal_5 + 1;
    }
    param_2[1] = uVal_7;
    *(char *)(*param_2 + lVal_5) = ch_1;
    pLong_4 = param_2;
    pLong_3 = local_48;
  }
  local_48 = pLong_4;
  if (uVal_8 != uVal_9) {
    func_0x1800b57e0(&local_48,local_48,uVal_8 - uVal_9,param_3);
    local_48 = pLong_3;
  }
  *param_1 = local_48;
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_68);
  fnPtr_2 = (func_ptr_t )swi(3);
  ptr2_Long_6 = (int64_t **)(*fnPtr_2)();
  return ptr2_Long_6;
}

// func_0x180642840
int64_t ** func_0x180642840(int64_t **param_1,int64_t *param_2,byte param_3)
{
  func_ptr_t fnPtr_1;
  byte bFlag_2;
  int64_t lVal_3;
  int64_t **ptr2_Long_4;
  uint64_t uVal_5;
  uint8_t auStack_78 [40];
  byte *local_50;
  uint64_t *local_48;
  int local_40;
  int64_t *local_38;
  byte local_29;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  lVal_3 = param_2[1];
  uVal_5 = lVal_3 + 1;
  local_29 = param_3;
  if ((uint64_t)param_2[2] < uVal_5) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_3 = param_2[1];
    uVal_5 = lVal_3 + 1;
  }
  param_2[1] = uVal_5;
  *(uint8_t *)(*param_2 + lVal_3) = 0x27;
  bFlag_2 = 1;
  if ((((0x1f < param_3) && (param_3 != 0x22)) && (param_3 != 0x5c)) && (param_3 != 0x7f)) {
    bFlag_2 = func_0x180640e10((int)(char)param_3);
    bFlag_2 = bFlag_2 ^ 1;
  }
  if ((param_3 == 0x27) || ((param_3 != 0x22 & bFlag_2) != 0)) {
    local_50 = &local_29;
    local_48 = &local_28;
    local_40 = (int)(char)param_3;
    func_0x1800b4f40(&local_38,param_2,&local_50);
    lVal_3 = local_38[1];
    uVal_5 = lVal_3 + 1;
    param_2 = local_38;
    if (uVal_5 <= (uint64_t)local_38[2]) goto LAB_18064292a;
  }
  else {
    lVal_3 = param_2[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_2[2] < uVal_5) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_3 = param_2[1];
      uVal_5 = lVal_3 + 1;
    }
    param_2[1] = uVal_5;
    *(byte *)(*param_2 + lVal_3) = param_3;
    lVal_3 = param_2[1];
    uVal_5 = lVal_3 + 1;
    if (uVal_5 <= (uint64_t)param_2[2]) goto LAB_18064292a;
  }
  (*(func_ptr_t )param_2[3])(param_2);
  lVal_3 = param_2[1];
  uVal_5 = lVal_3 + 1;
LAB_18064292a:
  param_2[1] = uVal_5;
  *(uint8_t *)(*param_2 + lVal_3) = 0x27;
  *param_1 = param_2;
  if (DAT_18083cf40 != (local_28 ^ (uint64_t)auStack_78)) {
    func_0x180673080(local_28 ^ (uint64_t)auStack_78);
    fnPtr_1 = (func_ptr_t )swi(3);
    ptr2_Long_4 = (int64_t **)(*fnPtr_1)();
    return ptr2_Long_4;
  }
  return param_1;
}

// func_0x1806429a0
int64_t ** func_0x1806429a0(int64_t **param_1,int64_t *param_2,uint *param_3,int64_t param_4,uint64_t param_5, uint *param_6)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  int64_t lVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint64_t uVal_14;
  int64_t **ptr2_Long_15;
  int64_t lVal_16;
  uint uVal_17;
  uint64_t uVal_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  int64_t lVal_21;
  uint64_t uVal_22;
  uint64_t uVal_23;
  uint8_t auStack_78 [40];
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  uVal_22 = 0;
  if (param_5 <= param_3[2]) {
    uVal_22 = param_3[2] - param_5;
  }
  uVal_23 = uVal_22 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_19 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVal_22;
  if ((uint64_t)param_2[2] < uVal_19) {
    (*(func_ptr_t )param_2[3])(param_2,uVal_19);
  }
  if (uVal_23 != 0) {
    func_0x1800b57e0(&local_50,param_2,uVal_23);
    param_2 = local_50;
  }
  for (uVal_17 = *param_6 & 0xffffff; uVal_17 != 0; uVal_17 = uVal_17 >> 8) {
    lVal_21 = param_2[1];
    uVal_19 = lVal_21 + 1;
    if ((uint64_t)param_2[2] < uVal_19) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_21 = param_2[1];
      uVal_19 = lVal_21 + 1;
    }
    param_2[1] = uVal_19;
    *(char *)(*param_2 + lVal_21) = (char)uVal_17;
  }
  for (uVal_17 = param_6[1]; uVal_17 != 0; uVal_17 = uVal_17 - 1) {
    lVal_21 = param_2[1];
    uVal_19 = lVal_21 + 1;
    if ((uint64_t)param_2[2] < uVal_19) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_21 = param_2[1];
      uVal_19 = lVal_21 + 1;
    }
    param_2[1] = uVal_19;
    *(uint8_t *)(*param_2 + lVal_21) = 0x30;
  }
  lVal_21 = *(int64_t *)(param_6 + 2);
  lVal_4 = *(int64_t *)(param_6 + 4);
  if (lVal_21 != lVal_4) {
    lVal_16 = param_2[1];
    do {
      uVal_18 = lVal_4 - lVal_21;
      uVal_19 = param_2[2];
      if (uVal_19 < lVal_16 + uVal_18) {
        (*(func_ptr_t )param_2[3])(param_2);
        lVal_16 = param_2[1];
        uVal_19 = param_2[2];
      }
      uVal_14 = uVal_19 - lVal_16;
      if (uVal_18 <= uVal_19 - lVal_16) {
        uVal_14 = uVal_18;
      }
      if (uVal_14 != 0) {
        lVal_5 = *param_2;
        lVal_1 = lVal_5 + lVal_16;
        if ((uVal_14 < 4) || ((uint64_t)(lVal_1 - lVal_21) < 0x20)) {
          uVal_19 = 0;
LAB_180642b37:
          uVal_20 = uVal_19;
          for (uVal_18 = uVal_14 & 3; uVal_18 != 0; uVal_18 = uVal_18 - 1) {
            *(uint8_t *)(lVal_1 + uVal_20) = *(uint8_t *)(lVal_21 + uVal_20);
            uVal_20 = uVal_20 + 1;
          }
          if (uVal_19 - uVal_14 < 0xfffffffffffffffd) {
            lVal_16 = lVal_16 + lVal_5;
            do {
              *(uint8_t *)(lVal_16 + uVal_20) = *(uint8_t *)(lVal_21 + uVal_20);
              *(uint8_t *)(lVal_16 + 1 + uVal_20) = *(uint8_t *)(lVal_21 + 1 + uVal_20);
              *(uint8_t *)(lVal_16 + 2 + uVal_20) = *(uint8_t *)(lVal_21 + 2 + uVal_20);
              *(uint8_t *)(lVal_16 + 3 + uVal_20) = *(uint8_t *)(lVal_21 + 3 + uVal_20);
              uVal_20 = uVal_20 + 4;
            } while (uVal_14 != uVal_20);
          }
        }
        else if (uVal_14 < 0x20) {
          uVal_18 = 0;
LAB_180642c10:
          uVal_19 = uVal_14 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_1 + uVal_18) = *(uint32_t *)(lVal_21 + uVal_18);
            uVal_18 = uVal_18 + 4;
          } while (uVal_19 != uVal_18);
          if (uVal_14 != uVal_19) goto LAB_180642b37;
        }
        else {
          uVal_19 = uVal_14 & 0xffffffffffffffe0;
          uVal_18 = 0;
          do {
            pU64_2 = (uint32_t *)(lVal_21 + uVal_18);
            uVal_7 = pU64_2[1];
            uVal_8 = pU64_2[2];
            uVal_9 = pU64_2[3];
            pU64_3 = (uint32_t *)(lVal_21 + 0x10 + uVal_18);
            uVal_10 = *pU64_3;
            uVal_11 = pU64_3[1];
            uVal_12 = pU64_3[2];
            uVal_13 = pU64_3[3];
            pU64_3 = (uint32_t *)(lVal_5 + lVal_16 + uVal_18);
            *pU64_3 = *pU64_2;
            pU64_3[1] = uVal_7;
            pU64_3[2] = uVal_8;
            pU64_3[3] = uVal_9;
            pU64_2 = (uint32_t *)(lVal_5 + lVal_16 + 0x10 + uVal_18);
            *pU64_2 = uVal_10;
            pU64_2[1] = uVal_11;
            pU64_2[2] = uVal_12;
            pU64_2[3] = uVal_13;
            uVal_18 = uVal_18 + 0x20;
          } while (uVal_19 != uVal_18);
          if (uVal_14 != uVal_19) {
            uVal_18 = uVal_19;
            if ((uVal_14 & 0x1c) == 0) goto LAB_180642b37;
            goto LAB_180642c10;
          }
        }
        lVal_16 = param_2[1];
      }
      lVal_16 = lVal_16 + uVal_14;
      param_2[1] = lVal_16;
      lVal_21 = lVal_21 + uVal_14;
    } while (lVal_21 != lVal_4);
  }
  if (uVal_22 != uVal_23) {
    func_0x1800b57e0(&local_50,param_2,uVal_22 - uVal_23,param_3);
    param_2 = local_50;
  }
  *param_1 = param_2;
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_78)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_78);
    fnPtr_6 = (func_ptr_t )swi(3);
    ptr2_Long_15 = (int64_t **)(*fnPtr_6)();
    return ptr2_Long_15;
  }
  return param_1;
}

// func_0x180642ca0
int64_t ** func_0x180642ca0(int64_t **param_1,int64_t *param_2,uint *param_3,int64_t param_4,uint64_t param_5, int64_t *param_6)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  int64_t lVal_4;
  func_ptr_t fnPtr_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint64_t uVal_13;
  int64_t **ptr2_Long_14;
  int64_t lVal_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  int64_t lVal_19;
  int64_t lVal_20;
  uint64_t uVal_21;
  uint64_t uVal_22;
  uint8_t auStack_78 [40];
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  uVal_21 = 0;
  if (param_5 <= param_3[2]) {
    uVal_21 = param_3[2] - param_5;
  }
  uVal_22 = uVal_21 >> ((&DAT_180761149)[*param_3 >> 3 & 7] & 0x3f);
  uVal_17 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVal_21;
  if ((uint64_t)param_2[2] < uVal_17) {
    (*(func_ptr_t )param_2[3])(param_2,uVal_17);
  }
  if (uVal_22 != 0) {
    func_0x1800b57e0(&local_50,param_2,uVal_22);
    param_2 = local_50;
  }
  if (param_6[1] != 0) {
    lVal_20 = *param_6;
    lVal_19 = param_6[1] + lVal_20;
    lVal_15 = param_2[1];
    do {
      uVal_16 = lVal_19 - lVal_20;
      uVal_17 = param_2[2];
      if (uVal_17 < lVal_15 + uVal_16) {
        (*(func_ptr_t )param_2[3])(param_2);
        lVal_15 = param_2[1];
        uVal_17 = param_2[2];
      }
      uVal_13 = uVal_17 - lVal_15;
      if (uVal_16 <= uVal_17 - lVal_15) {
        uVal_13 = uVal_16;
      }
      if (uVal_13 != 0) {
        lVal_4 = *param_2;
        lVal_1 = lVal_4 + lVal_15;
        if ((uVal_13 < 4) || ((uint64_t)(lVal_1 - lVal_20) < 0x20)) {
          uVal_17 = 0;
LAB_180642dc7:
          uVal_18 = uVal_17;
          for (uVal_16 = uVal_13 & 3; uVal_16 != 0; uVal_16 = uVal_16 - 1) {
            *(uint8_t *)(lVal_1 + uVal_18) = *(uint8_t *)(lVal_20 + uVal_18);
            uVal_18 = uVal_18 + 1;
          }
          if (uVal_17 - uVal_13 < 0xfffffffffffffffd) {
            lVal_15 = lVal_15 + lVal_4;
            do {
              *(uint8_t *)(lVal_15 + uVal_18) = *(uint8_t *)(lVal_20 + uVal_18);
              *(uint8_t *)(lVal_15 + 1 + uVal_18) = *(uint8_t *)(lVal_20 + 1 + uVal_18);
              *(uint8_t *)(lVal_15 + 2 + uVal_18) = *(uint8_t *)(lVal_20 + 2 + uVal_18);
              *(uint8_t *)(lVal_15 + 3 + uVal_18) = *(uint8_t *)(lVal_20 + 3 + uVal_18);
              uVal_18 = uVal_18 + 4;
            } while (uVal_13 != uVal_18);
          }
        }
        else if (uVal_13 < 0x20) {
          uVal_16 = 0;
LAB_180642ea1:
          uVal_17 = uVal_13 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_1 + uVal_16) = *(uint32_t *)(lVal_20 + uVal_16);
            uVal_16 = uVal_16 + 4;
          } while (uVal_17 != uVal_16);
          if (uVal_13 != uVal_17) goto LAB_180642dc7;
        }
        else {
          uVal_17 = uVal_13 & 0xffffffffffffffe0;
          uVal_16 = 0;
          do {
            pU64_3 = (uint32_t *)(lVal_20 + uVal_16);
            uVal_6 = pU64_3[1];
            uVal_7 = pU64_3[2];
            uVal_8 = pU64_3[3];
            pU64_2 = (uint32_t *)(lVal_20 + 0x10 + uVal_16);
            uVal_9 = *pU64_2;
            uVal_10 = pU64_2[1];
            uVal_11 = pU64_2[2];
            uVal_12 = pU64_2[3];
            pU64_2 = (uint32_t *)(lVal_4 + lVal_15 + uVal_16);
            *pU64_2 = *pU64_3;
            pU64_2[1] = uVal_6;
            pU64_2[2] = uVal_7;
            pU64_2[3] = uVal_8;
            pU64_2 = (uint32_t *)(lVal_4 + lVal_15 + 0x10 + uVal_16);
            *pU64_2 = uVal_9;
            pU64_2[1] = uVal_10;
            pU64_2[2] = uVal_11;
            pU64_2[3] = uVal_12;
            uVal_16 = uVal_16 + 0x20;
          } while (uVal_17 != uVal_16);
          if (uVal_13 != uVal_17) {
            uVal_16 = uVal_17;
            if ((uVal_13 & 0x1c) == 0) goto LAB_180642dc7;
            goto LAB_180642ea1;
          }
        }
        lVal_15 = param_2[1];
      }
      lVal_15 = lVal_15 + uVal_13;
      param_2[1] = lVal_15;
      lVal_20 = lVal_20 + uVal_13;
    } while (lVal_20 != lVal_19);
  }
  if (uVal_21 != uVal_22) {
    func_0x1800b57e0(&local_50,param_2,uVal_21 - uVal_22,param_3);
    param_2 = local_50;
  }
  *param_1 = param_2;
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_78)) {
    return param_1;
  }
  func_0x180673080(local_48 ^ (uint64_t)auStack_78);
  fnPtr_5 = (func_ptr_t )swi(3);
  ptr2_Long_14 = (int64_t **)(*fnPtr_5)();
  return ptr2_Long_14;
}

// func_0x180642f30
int64_t ** func_0x180642f30(int64_t **param_1,int64_t *param_2,double param_3)
{
  bool bFlag_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  uint uVal_4;
  int iVal_5;
  int64_t lVal_6;
  short *pSize_7;
  int64_t **ptr2_Long_8;
  uint8_t *pU64_9;
  char *fnPtr_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  uint uVal_13;
  uint uVal_14;
  int64_t lVal_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  int iVal_18;
  uint64_t uVal_19;
  uint8_t auStack_e8 [32];
  uint64_t local_c8;
  uint32_t *local_c0;
  uint uStack_b8;
  uint64_t uStack_b0;
  uint uStack_a4;
  int64_t *plStack_a0;
  uint64_t local_98;
  int iStack_90;
  uint32_t local_88;
  uint8_t local_84;
  uint32_t local_83;
  undefined7 uStack_7f;
  uint32_t local_78;
  uint32_t uStack_74;
  uint8_t local_70;
  undefined7 uStack_6f;
  uint64_t local_60;
  
  local_60 = DAT_18083cf40 ^ (uint64_t)auStack_e8;
  iVal_5 = func_0x1806823d0();
  uVal_13 = (uint)(iVal_5 != 0);
  if (0x7fefffffffffffff < ((uint64_t)param_3 & 0x7fffffffffffffff)) {
    local_88 = 0x8000;
    local_84 = 0x20;
    uStack_7f = 0xffffffff000000;
    local_83 = 0;
    pU64_9 = &DAT_18075fded;
    if (NAN(param_3)) {
      pU64_9 = &DAT_18075f3fa;
    }
    local_c8 = 4 - (uint64_t)(iVal_5 == 0);
    local_70 = SUB81(pU64_9,0);
    uStack_6f = (undefined7)((uint64_t)pU64_9 >> 8);
    local_c0 = &local_78;
    local_78 = uVal_13;
    func_0x18036a520(param_1,param_2,&local_88);
    goto LAB_1806434ca;
  }
  func_0x1806412c0(&local_98);
  lVal_6 = 0x3f;
  if ((local_98 | 1) != 0) {
    for (; (local_98 | 1) >> lVal_6 == 0; lVal_6 = lVal_6 + -1) {
    }
  }
  uVal_19 = (uint64_t)(byte)(&DAT_1806b0ac0)[lVal_6] -
           (uint64_t)
           (local_98 < *(uint64_t *)(&DAT_1806b0b00 + (uint64_t)(byte)(&DAT_1806b0ac0)[lVal_6] * 8)
           );
  iVal_3 = (int)uVal_19;
  if (iVal_3 + iStack_90 + 3U < 0x14) {
    local_78 = 0x8000;
    uStack_6f = 0xffffffff000000;
    uStack_74 = 0x20;
    local_70 = 0;
    local_c0 = &local_78;
    uStack_b0 = 0;
    local_c8 = CONCAT71(local_c8._1_7_,0x2e);
    uStack_b8 = uVal_13;
    func_0x180643520(param_1,param_2,&local_98,uVal_19 & 0xffffffff);
    goto LAB_1806434ca;
  }
  iVal_18 = iStack_90 + iVal_3;
  uStack_a4 = (iVal_3 + iStack_90) - 1;
  uVal_4 = 1 - iVal_18;
  if (0 < iVal_18) {
    uVal_4 = uStack_a4;
  }
  uVal_17 = (uint64_t)uVal_4;
  uVal_12 = (uint64_t)((99 < (int)uVal_4) + 4 + (uint)(iVal_3 != 1) + uVal_13 + iVal_3);
  lVal_6 = param_2[1];
  uVal_16 = param_2[2];
  uVal_11 = lVal_6 + uVal_12;
  if (uVal_16 < uVal_11) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_6 = param_2[1];
    uVal_16 = param_2[2];
    uVal_11 = lVal_6 + uVal_12;
    if (uVal_11 <= uVal_16) goto LAB_180643118;
LAB_1806431cd:
    (*(func_ptr_t )param_2[3])(param_2);
  }
  else {
LAB_180643118:
    param_2[1] = uVal_11;
    if (*param_2 != 0) {
      fnPtr_10 = (char *)(*param_2 + lVal_6);
      if (iVal_5 != 0) {
        *fnPtr_10 = '-';
        fnPtr_10 = fnPtr_10 + 1;
      }
      if (iVal_3 == 1) {
        *fnPtr_10 = (char)local_98 + '0';
        pSize_7 = (short *)(fnPtr_10 + 1);
      }
      else {
        uVal_13 = iVal_3 + 1;
        if (local_98 < 100) {
          uVal_14 = uVal_13;
          if (local_98 < 10) goto LAB_18064345e;
LAB_1806431ac:
          *(uint16_t *)(fnPtr_10 + (uVal_14 - 2)) = *(uint16_t *)(&DAT_1806afb50 + local_98 * 2);
        }
        else {
          uVal_11 = (uint64_t)uVal_13;
          uVal_19 = local_98;
          do {
            uVal_14 = (int)uVal_11 - 2;
            uVal_11 = (uint64_t)uVal_14;
            local_98 = uVal_19 / 100;
            *(uint16_t *)(fnPtr_10 + uVal_11) = *(uint16_t *)(&DAT_1806afb50 + (uVal_19 % 100) * 2)
            ;
            bFlag_1 = 9999 < uVal_19;
            uVal_19 = local_98;
          } while (bFlag_1);
          if (9 < local_98) goto LAB_1806431ac;
LAB_18064345e:
          fnPtr_10[uVal_14 - 1] = (byte)local_98 | 0x30;
        }
        pSize_7 = (short *)(fnPtr_10 + uVal_13);
        *fnPtr_10 = fnPtr_10[1];
        fnPtr_10[1] = '.';
      }
      *pSize_7 = (ushort)(iVal_18 < 1) * 0x200 + 0x2b65;
      if ((int)uVal_4 < 100) {
        pSize_7 = pSize_7 + 1;
      }
      else {
        *(char *)(pSize_7 + 1) = (char)(uVal_17 / 100) + '0';
        pSize_7 = (short *)((int64_t)pSize_7 + 3);
        uVal_17 = (uint64_t)(uVal_4 % 100);
      }
      *pSize_7 = *(short *)(&DAT_1806afb50 + uVal_17 * 2);
      *param_1 = param_2;
      goto LAB_1806434ca;
    }
    if (uVal_16 < uVal_11 + uVal_12) goto LAB_1806431cd;
  }
  if (iVal_5 != 0) {
    lVal_6 = param_2[1];
    uVal_11 = lVal_6 + 1;
    if ((uint64_t)param_2[2] < uVal_11) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_6 = param_2[1];
      uVal_11 = lVal_6 + 1;
    }
    param_2[1] = uVal_11;
    *(uint8_t *)(*param_2 + lVal_6) = 0x2d;
  }
  if (iVal_3 == 1) {
    uVal_13 = 1;
    if (99 < local_98) {
      uVal_11 = 1;
      uVal_19 = local_98;
      do {
        uVal_13 = (int)uVal_11 - 2;
        uVal_11 = (uint64_t)uVal_13;
        local_98 = uVal_19 / 100;
        *(uint16_t *)((int64_t)&local_78 + uVal_11) =
             *(uint16_t *)(&DAT_1806afb50 + (uVal_19 % 100) * 2);
        bFlag_1 = 9999 < uVal_19;
        uVal_19 = local_98;
      } while (bFlag_1);
    }
    if (local_98 < 10) {
      *(byte *)((int64_t)&local_78 + (uint64_t)(uVal_13 - 1)) = (byte)local_98 | 0x30;
      lVal_6 = (int64_t)&local_78 + 1;
    }
    else {
      *(uint16_t *)((int64_t)&local_78 + (uint64_t)(uVal_13 - 2)) =
           *(uint16_t *)(&DAT_1806afb50 + local_98 * 2);
      lVal_6 = (int64_t)&local_78 + 1;
    }
  }
  else {
    lVal_6 = (int64_t)&local_78 + uVal_19 + 1;
    lVal_15 = lVal_6;
    if (2 < iVal_3) {
      uVal_13 = (iVal_3 - 1U >> 1) + 1;
      uVal_19 = local_98;
      do {
        local_98 = uVal_19 / 100;
        *(uint16_t *)(lVal_15 + -2) = *(uint16_t *)(&DAT_1806afb50 + (uVal_19 % 100) * 2);
        lVal_15 = lVal_15 + -2;
        uVal_13 = uVal_13 - 1;
        uVal_19 = local_98;
      } while (1 < uVal_13);
    }
    uVal_19 = local_98;
    if ((iVal_3 - 1U & 1) != 0) {
      uVal_19 = local_98 / 10;
      *(byte *)(lVal_15 + -1) = (char)local_98 + (char)uVal_19 * -10 | 0x30;
      lVal_15 = lVal_15 + -1;
    }
    *(uint8_t *)(lVal_15 + -1) = 0x2e;
    uVal_13 = 1;
    if (99 < uVal_19) {
      uVal_16 = 1;
      uVal_11 = uVal_19;
      do {
        uVal_13 = (int)uVal_16 - 2;
        uVal_16 = (uint64_t)uVal_13;
        uVal_19 = uVal_11 / 100;
        *(uint16_t *)(lVal_15 + -2 + uVal_16) = *(uint16_t *)(&DAT_1806afb50 + (uVal_11 % 100) * 2)
        ;
        bFlag_1 = 9999 < uVal_11;
        uVal_11 = uVal_19;
      } while (bFlag_1);
    }
    if (uVal_19 < 10) {
      *(byte *)(lVal_15 + -2 + (uint64_t)(uVal_13 - 1)) = (byte)uVal_19 | 0x30;
    }
    else {
      *(uint16_t *)(lVal_15 + -2 + (uint64_t)(uVal_13 - 2)) =
           *(uint16_t *)(&DAT_1806afb50 + uVal_19 * 2);
    }
  }
  func_0x1800b1e50(&plStack_a0,&local_78,lVal_6,param_2);
  lVal_6 = plStack_a0[1];
  uVal_19 = lVal_6 + 1;
  if ((uint64_t)plStack_a0[2] < uVal_19) {
    (*(func_ptr_t )plStack_a0[3])(plStack_a0);
    lVal_6 = plStack_a0[1];
    uVal_19 = lVal_6 + 1;
  }
  plStack_a0[1] = uVal_19;
  *(uint8_t *)(*plStack_a0 + lVal_6) = 0x65;
  func_0x18036a3b0(&local_78,uStack_a4,plStack_a0);
  *param_1 = (int64_t *)CONCAT44(uStack_74,local_78);
LAB_1806434ca:
  if (DAT_18083cf40 == (local_60 ^ (uint64_t)auStack_e8)) {
    return param_1;
  }
  func_0x180673080(local_60 ^ (uint64_t)auStack_e8);
  fnPtr_2 = (func_ptr_t )swi(3);
  ptr2_Long_8 = (int64_t **)(*fnPtr_2)();
  return ptr2_Long_8;
}

// func_0x180643520
uint64_t func_0x180643520(uint64_t param_1,uint64_t param_2,uint *param_3,int param_4,uint64_t param_5, uint *param_6,int param_7)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint uVal_3;
  int iVal_4;
  uint64_t uVal_5;
  uint8_t auStack_98 [32];
  int64_t local_78;
  uint32_t **local_70;
  uint32_t *local_60;
  uint *local_58;
  int *local_50;
  uint *local_48;
  uint *local_40;
  int *local_38;
  uint *local_30;
  uint8_t local_25;
  uint local_24;
  uint local_20;
  int local_1c;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  uVal_3 = param_3[2];
  local_20 = uVal_3 + param_4;
  local_78 = (int64_t)(int)((param_4 + 1) - (uint)(param_7 == 0));
  local_58 = param_3;
  local_1c = param_4;
  if (-1 < (int64_t)(int)uVal_3) {
    local_78 = (int)uVal_3 + local_78;
    local_24 = param_6[3] - local_20;
    if ((*param_6 & 0x2000) != 0) {
      local_78 = local_78 + 1;
      if ((*param_6 & 7) == 2 || 0 < (int)local_24) {
        if (0 < (int)local_24) {
          local_78 = local_78 + (uint64_t)local_24;
        }
      }
      else {
        local_24 = 0;
      }
    }
    local_60 = &param_7;
    local_50 = &local_1c;
    local_48 = (uint *)&local_25;
    local_40 = param_6;
    local_38 = (int *)&param_5;
    local_30 = &local_24;
    local_70 = &local_60;
    func_0x1806437c0(param_1,param_2,param_6,local_78);
    goto LAB_1806436b7;
  }
  if (0 < (int)local_20) {
    local_24 = param_6[3] - param_4 & (int)(*param_6 << 0x12) >> 0x1f;
    uVal_5 = (uint64_t)local_24;
    if ((int)local_24 < 1) {
      uVal_5 = 0;
    }
    local_78 = uVal_5 + 1 + local_78;
    local_60 = &param_7;
    local_50 = &local_1c;
    local_48 = &local_20;
    local_40 = (uint *)&param_5;
    local_38 = (int *)&local_25;
    local_30 = &local_24;
    local_70 = &local_60;
    func_0x180643a30(param_1);
    goto LAB_1806436b7;
  }
  local_24 = -local_20;
  if (param_4 == 0) {
    uVal_3 = param_6[3];
    if (SBORROW4(uVal_3,local_24) != (int)(uVal_3 + local_20) < 0 && -1 < (int)uVal_3) {
      local_24 = uVal_3;
    }
    if (local_24 != 0) goto LAB_180643712;
    local_25 = (uint8_t)((*param_6 & 0x2000) >> 0xd);
    iVal_4 = 2 - (uint)((*param_6 & 0x2000) == 0);
    uVal_3 = 0;
  }
  else {
LAB_180643712:
    local_25 = 1;
    iVal_4 = 2;
    uVal_3 = local_24;
  }
  local_78 = (uint64_t)(uVal_3 + iVal_4) + local_78;
  local_60 = &param_7;
  local_58 = (uint *)&local_25;
  local_50 = (int *)&param_5;
  local_48 = &local_24;
  local_38 = &local_1c;
  local_70 = &local_60;
  local_40 = param_3;
  func_0x180643e30(param_1);
LAB_1806436b7:
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_98)) {
    return param_1;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_98);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_2 = (*fnPtr_1)();
  return uVal_2;
}

// func_0x1806437c0
int64_t * func_0x1806437c0(int64_t *param_1,int64_t param_2,uint *param_3,int64_t param_4,uint64_t param_5, uint64_t param_6)
{
  func_ptr_t fnPtr_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t auStack_68 [40];
  int64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_3 = 0;
  if (param_5 <= param_3[2]) {
    uVal_3 = param_3[2] - param_5;
  }
  uVal_5 = uVal_3 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_4 = param_4 + *(int64_t *)(param_2 + 8) + (*param_3 >> 0xf & 7) * uVal_3;
  if (*(uint64_t *)(param_2 + 0x10) < uVal_4) {
    (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_4);
  }
  if (uVal_5 != 0) {
    func_0x1800b57e0(&local_40,param_2,uVal_5,param_3);
    param_2 = local_40;
  }
  func_0x1806438d0(param_6,&local_40,param_2);
  if (uVal_3 != uVal_5) {
    func_0x1800b57e0(&local_40,local_40,uVal_3 - uVal_5,param_3);
  }
  *param_1 = local_40;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  pLong_2 = (int64_t *)(*fnPtr_1)();
  return pLong_2;
}

// func_0x1806438d0
int64_t ** func_0x1806438d0(int **param_1,int64_t **param_2,int64_t *param_3)
{
  uint8_t uVal_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  int64_t **ptr2_Long_4;
  uint64_t uVal_5;
  int iVal_6;
  uint8_t auStack_58 [40];
  int64_t *local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  iVal_6 = **param_1;
  if (iVal_6 != 0) {
    lVal_3 = param_3[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_3[2] < uVal_5) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_3 = param_3[1];
      uVal_5 = lVal_3 + 1;
    }
    param_3[1] = uVal_5;
    *(char *)(*param_3 + lVal_3) = (char)(0x202b2d00 >> ((byte)(iVal_6 << 3) & 0x1f));
  }
  iVal_6 = *(int *)((int64_t)param_1[1] + 8);
  func_0x1800b1c90(&local_30,param_3,*(uint64_t *)param_1[1],*param_1[2]);
  if (0 < iVal_6) {
    do {
      lVal_3 = local_30[1];
      uVal_5 = lVal_3 + 1;
      if ((uint64_t)local_30[2] < uVal_5) {
        (*(func_ptr_t )local_30[3])(local_30);
        lVal_3 = local_30[1];
        uVal_5 = lVal_3 + 1;
      }
      local_30[1] = uVal_5;
      *(uint8_t *)(*local_30 + lVal_3) = 0x30;
      iVal_6 = iVal_6 + -1;
    } while (iVal_6 != 0);
  }
  if ((*(byte *)((int64_t)param_1[4] + 1) & 0x20) != 0) {
    uVal_1 = *(uint8_t *)param_1[5];
    lVal_3 = local_30[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)local_30[2] < uVal_5) {
      (*(func_ptr_t )local_30[3])(local_30);
      lVal_3 = local_30[1];
      uVal_5 = lVal_3 + 1;
    }
    local_30[1] = uVal_5;
    *(uint8_t *)(*local_30 + lVal_3) = uVal_1;
    iVal_6 = *param_1[6];
    if (0 < iVal_6) {
      do {
        lVal_3 = local_30[1];
        uVal_5 = lVal_3 + 1;
        if ((uint64_t)local_30[2] < uVal_5) {
          (*(func_ptr_t )local_30[3])(local_30);
          lVal_3 = local_30[1];
          uVal_5 = lVal_3 + 1;
        }
        local_30[1] = uVal_5;
        *(uint8_t *)(*local_30 + lVal_3) = 0x30;
        iVal_6 = iVal_6 + -1;
      } while (iVal_6 != 0);
    }
  }
  *param_2 = local_30;
  if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_58)) {
    return param_2;
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_58);
  fnPtr_2 = (func_ptr_t )swi(3);
  ptr2_Long_4 = (int64_t **)(*fnPtr_2)();
  return ptr2_Long_4;
}

// func_0x180643a30
int64_t ** func_0x180643a30(int64_t **param_1,int64_t *param_2,uint *param_3,int64_t param_4,uint64_t param_5, int **param_6)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  int64_t **ptr2_Long_3;
  uint64_t uVal_4;
  int iVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  uint8_t auStack_88 [32];
  int local_68;
  uint8_t local_60;
  int *local_58;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  uVal_4 = 0;
  if (param_5 <= param_3[2]) {
    uVal_4 = param_3[2] - param_5;
  }
  uVal_7 = uVal_4 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_6 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVal_4;
  if ((uint64_t)param_2[2] < uVal_6) {
    (*(func_ptr_t )param_2[3])(param_2,uVal_6);
  }
  if (uVal_7 != 0) {
    func_0x1800b57e0(&local_48,param_2,uVal_7,param_3);
    param_2 = local_48;
  }
  iVal_5 = **param_6;
  if (iVal_5 != 0) {
    lVal_2 = param_2[1];
    uVal_6 = lVal_2 + 1;
    if ((uint64_t)param_2[2] < uVal_6) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_2 = param_2[1];
      uVal_6 = lVal_2 + 1;
    }
    param_2[1] = uVal_6;
    *(char *)(*param_2 + lVal_2) = (char)(0x202b2d00 >> ((byte)(iVal_5 << 3) & 0x1f));
  }
  local_58 = param_6[5];
  local_60 = *(uint8_t *)param_6[4];
  local_68 = *param_6[3];
  func_0x180643be0(&local_48,param_2,*(uint64_t *)param_6[1],*param_6[2]);
  pLong_8 = local_48;
  iVal_5 = *param_6[6];
  if (0 < iVal_5) {
    do {
      lVal_2 = pLong_8[1];
      uVal_6 = lVal_2 + 1;
      if ((uint64_t)pLong_8[2] < uVal_6) {
        (*(func_ptr_t )pLong_8[3])(pLong_8);
        lVal_2 = pLong_8[1];
        uVal_6 = lVal_2 + 1;
      }
      pLong_8[1] = uVal_6;
      *(uint8_t *)(*pLong_8 + lVal_2) = 0x30;
      iVal_5 = iVal_5 + -1;
    } while (iVal_5 != 0);
  }
  if (uVal_4 != uVal_7) {
    func_0x1800b57e0(&local_48,pLong_8,uVal_4 - uVal_7,param_3);
    pLong_8 = local_48;
  }
  *param_1 = pLong_8;
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_88)) {
    return param_1;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_88);
  fnPtr_1 = (func_ptr_t )swi(3);
  ptr2_Long_3 = (int64_t **)(*fnPtr_1)();
  return ptr2_Long_3;
}

// func_0x180643be0
uint64_t func_0x180643be0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,uint param_5 ,char param_6)
{
  bool bFlag_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint uVal_10;
  uint uVal_11;
  uint8_t auStack_78 [32];
  uint16_t local_58;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  uVal_11 = (uint)param_4;
  if (param_6 != '\0') {
    uVal_8 = (uint64_t)param_5;
    lVal_9 = (int64_t)&local_58 + (int64_t)(int)uVal_11 + 1;
    uVal_11 = uVal_11 - param_5;
    lVal_7 = lVal_9;
    if (1 < (int)uVal_11) {
      uVal_10 = (uVal_11 >> 1) + 1;
      uVal_5 = param_3;
      do {
        param_3 = uVal_5 / 100;
        *(uint16_t *)(lVal_7 + -2) = *(uint16_t *)(&DAT_1806afb50 + (uVal_5 % 100) * 2);
        lVal_7 = lVal_7 + -2;
        uVal_10 = uVal_10 - 1;
        uVal_5 = param_3;
      } while (1 < uVal_10);
    }
    uVal_5 = param_3;
    if ((uVal_11 & 1) != 0) {
      uVal_5 = param_3 / 10;
      *(byte *)(lVal_7 + -1) = (char)param_3 + (char)uVal_5 * -10 | 0x30;
      lVal_7 = lVal_7 + -1;
    }
    *(char *)(lVal_7 + -1) = param_6;
    lVal_3 = -1 - (int64_t)(int)param_5;
    uVal_6 = uVal_5;
    if (99 < uVal_5) {
      do {
        param_5 = (int)uVal_8 - 2;
        uVal_8 = (uint64_t)param_5;
        uVal_6 = uVal_5 / 100;
        *(uint16_t *)(lVal_7 + uVal_8 + lVal_3) = *(uint16_t *)(&DAT_1806afb50 + (uVal_5 % 100) * 2)
        ;
        bFlag_1 = 9999 < uVal_5;
        uVal_5 = uVal_6;
      } while (bFlag_1);
    }
    if (uVal_6 < 10) {
      *(byte *)(lVal_7 + (uint64_t)(param_5 - 1) + lVal_3) = (byte)uVal_6 | 0x30;
    }
    else {
      *(uint16_t *)(lVal_7 + (uint64_t)(param_5 - 2) + lVal_3) =
           *(uint16_t *)(&DAT_1806afb50 + uVal_6 * 2);
    }
    goto LAB_180643de8;
  }
  if (param_3 < 100) {
    uVal_10 = uVal_11;
    if (param_3 < 10) goto LAB_180643dd4;
LAB_180643d87:
    *(uint16_t *)((int64_t)&local_58 + (uint64_t)(uVal_10 - 2)) =
         *(uint16_t *)(&DAT_1806afb50 + param_3 * 2);
  }
  else {
    param_4 = param_4 & 0xffffffff;
    uVal_8 = param_3;
    do {
      uVal_10 = (int)param_4 - 2;
      param_4 = (uint64_t)uVal_10;
      param_3 = uVal_8 / 100;
      *(uint16_t *)((int64_t)&local_58 + param_4) =
           *(uint16_t *)(&DAT_1806afb50 + (uVal_8 % 100) * 2);
      bFlag_1 = 9999 < uVal_8;
      uVal_8 = param_3;
    } while (bFlag_1);
    if (9 < param_3) goto LAB_180643d87;
LAB_180643dd4:
    *(byte *)((int64_t)&local_58 + (uint64_t)(uVal_10 - 1)) = (byte)param_3 | 0x30;
  }
  lVal_9 = (int64_t)&local_58 + (int64_t)(int)uVal_11;
LAB_180643de8:
  func_0x1800b1e50(param_1,&local_58,lVal_9,param_2);
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_78)) {
    return param_1;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_78);
  fnPtr_2 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_2)();
  return uVal_4;
}

// func_0x180643e30
int64_t * func_0x180643e30(int64_t *param_1,int64_t param_2,uint *param_3,int64_t param_4,uint64_t param_5, uint64_t param_6)
{
  func_ptr_t fnPtr_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t auStack_68 [40];
  int64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_3 = 0;
  if (param_5 <= param_3[2]) {
    uVal_3 = param_3[2] - param_5;
  }
  uVal_5 = uVal_3 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_4 = param_4 + *(int64_t *)(param_2 + 8) + (*param_3 >> 0xf & 7) * uVal_3;
  if (*(uint64_t *)(param_2 + 0x10) < uVal_4) {
    (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_4);
  }
  if (uVal_5 != 0) {
    func_0x1800b57e0(&local_40,param_2,uVal_5,param_3);
    param_2 = local_40;
  }
  func_0x180643f40(param_6,&local_40,param_2);
  if (uVal_3 != uVal_5) {
    func_0x1800b57e0(&local_40,local_40,uVal_3 - uVal_5,param_3);
  }
  *param_1 = local_40;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  pLong_2 = (int64_t *)(*fnPtr_1)();
  return pLong_2;
}

// func_0x180643f40
int64_t ** func_0x180643f40(int **param_1,int64_t **param_2,int64_t *param_3)
{
  uint8_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int iVal_4;
  
  iVal_4 = **param_1;
  if (iVal_4 != 0) {
    lVal_2 = param_3[1];
    uVal_3 = lVal_2 + 1;
    if ((uint64_t)param_3[2] < uVal_3) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_2 = param_3[1];
      uVal_3 = lVal_2 + 1;
    }
    param_3[1] = uVal_3;
    *(char *)(*param_3 + lVal_2) = (char)(0x202b2d00 >> ((byte)(iVal_4 << 3) & 0x1f));
  }
  lVal_2 = param_3[1];
  uVal_3 = lVal_2 + 1;
  if ((uint64_t)param_3[2] < uVal_3) {
    (*(func_ptr_t )param_3[3])(param_3);
    lVal_2 = param_3[1];
    uVal_3 = lVal_2 + 1;
  }
  param_3[1] = uVal_3;
  *(uint8_t *)(*param_3 + lVal_2) = 0x30;
  if (*(char *)param_1[1] == '\0') {
    *param_2 = param_3;
  }
  else {
    uVal_1 = *(uint8_t *)param_1[2];
    lVal_2 = param_3[1];
    uVal_3 = lVal_2 + 1;
    if ((uint64_t)param_3[2] < uVal_3) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_2 = param_3[1];
      uVal_3 = lVal_2 + 1;
    }
    param_3[1] = uVal_3;
    *(uint8_t *)(*param_3 + lVal_2) = uVal_1;
    iVal_4 = *param_1[3];
    if (0 < iVal_4) {
      do {
        lVal_2 = param_3[1];
        uVal_3 = lVal_2 + 1;
        if ((uint64_t)param_3[2] < uVal_3) {
          (*(func_ptr_t )param_3[3])(param_3);
          lVal_2 = param_3[1];
          uVal_3 = lVal_2 + 1;
        }
        param_3[1] = uVal_3;
        *(uint8_t *)(*param_3 + lVal_2) = 0x30;
        iVal_4 = iVal_4 + -1;
      } while (iVal_4 != 0);
    }
    func_0x1800b1c90(param_2,param_3,*(uint64_t *)param_1[4],*param_1[5]);
  }
  return param_2;
}

// func_0x180644060
int64_t ** func_0x180644060(int64_t **param_1,int64_t *param_2,uint *param_3,int64_t param_4,uint64_t param_5, uint64_t *param_6)
{
  uint uVal_1;
  func_ptr_t fnPtr_2;
  int64_t *pLong_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  char *fnPtr_6;
  int64_t **ptr2_Long_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint8_t auStack_b8 [40];
  uint64_t local_90;
  int64_t *local_88 [9];
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_b8;
  uVal_10 = 0;
  if (param_5 <= param_3[2]) {
    uVal_10 = param_3[2] - param_5;
  }
  uVal_11 = uVal_10 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_8 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVal_10;
  if ((uint64_t)param_2[2] < uVal_8) {
    (*(func_ptr_t )param_2[3])(param_2,uVal_8);
  }
  if (uVal_11 != 0) {
    func_0x1800b57e0(local_88,param_2,uVal_11,param_3);
    param_2 = local_88[0];
  }
  lVal_5 = param_2[1];
  uVal_8 = lVal_5 + 1;
  if ((uint64_t)param_2[2] < uVal_8) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_5 = param_2[1];
    uVal_8 = lVal_5 + 1;
  }
  param_2[1] = uVal_8;
  *(uint8_t *)(*param_2 + lVal_5) = 0x30;
  lVal_5 = param_2[1];
  uVal_8 = lVal_5 + 1;
  if ((uint64_t)param_2[2] < uVal_8) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_5 = param_2[1];
    uVal_8 = lVal_5 + 1;
  }
  param_2[1] = uVal_8;
  *(uint8_t *)(*param_2 + lVal_5) = 0x78;
  uVal_1 = *(uint *)(param_6 + 1);
  uVal_9 = *param_6;
  lVal_5 = param_2[1];
  uVal_8 = lVal_5 + (uint64_t)uVal_1;
  if ((uint64_t)param_2[2] < uVal_8) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_5 = param_2[1];
    uVal_8 = lVal_5 + (uint64_t)uVal_1;
    if (uVal_8 <= (uint64_t)param_2[2]) goto LAB_18064417b;
  }
  else {
LAB_18064417b:
    param_2[1] = uVal_8;
    if (*param_2 != 0) {
      fnPtr_6 = (char *)(lVal_5 + (int)uVal_1 + *param_2);
      do {
        fnPtr_6 = fnPtr_6 + -1;
        *fnPtr_6 = "0123456789abcdef"[(uint)uVal_9 & 0xf];
        uVal_9 = uVal_9 >> 4;
        pLong_4 = param_2;
        pLong_3 = local_88[0];
      } while (uVal_9 != 0);
      goto joined_r0x0001806441bb;
    }
  }
  fnPtr_6 = (char *)((int64_t)&local_90 + (int64_t)(int)uVal_1 + 7);
  do {
    *fnPtr_6 = "0123456789abcdef"[(uint)uVal_9 & 0xf];
    uVal_9 = uVal_9 >> 4;
    fnPtr_6 = fnPtr_6 + -1;
  } while (uVal_9 != 0);
  func_0x1800b1e50(&local_90,local_88,(int64_t)local_88 + (int64_t)(int)uVal_1,param_2);
  pLong_4 = local_90;
  pLong_3 = local_88[0];
joined_r0x0001806441bb:
  local_88[0] = pLong_4;
  if (uVal_10 != uVal_11) {
    func_0x1800b57e0(local_88,local_88[0],uVal_10 - uVal_11,param_3);
    local_88[0] = pLong_3;
  }
  *param_1 = local_88[0];
  if (DAT_18083cf40 != (local_40 ^ (uint64_t)auStack_b8)) {
    func_0x180673080(local_40 ^ (uint64_t)auStack_b8);
    fnPtr_2 = (func_ptr_t )swi(3);
    ptr2_Long_7 = (int64_t **)(*fnPtr_2)();
    return ptr2_Long_7;
  }
  return param_1;
}

// func_0x180644270
/* WARNING: Removing unreachable block (ram,0x0001806442cf) */
/* WARNING: Removing unreachable block (ram,0x0001806442cf) */
byte * func_0x180644270(byte *param_1,byte *param_2,int64_t *param_3,uint param_4)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint32_t uVal_3;
  byte *pU8_4;
  byte *pU8_5;
  byte *pU8_6;
  byte **ptr2_Byte_7;
  char *fnPtr_8;
  uint64_t uVal_9;
  byte bFlag_10;
  int64_t lVal_11;
  uint8_t auStack_58 [39];
  uint8_t local_31;
  byte *local_30;
  int64_t local_28;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  bFlag_10 = *param_1;
  if ((byte)(bFlag_10 - 0x30) < 10) {
    if (bFlag_10 == 0x30) {
      pU8_6 = param_1 + 1;
      param_4 = 0;
    }
    else {
      pU8_5 = param_1 + 1;
      uVal_2 = 0;
      do {
        uVal_9 = uVal_2;
        pU8_4 = pU8_5;
        param_4 = ((uint)bFlag_10 + (int)uVal_9 * 10) - 0x30;
        if (pU8_4 == param_2) {
          lVal_11 = (int64_t)param_2 - (int64_t)param_1;
          pU8_6 = param_2;
          goto joined_r0x00018064439a;
        }
        bFlag_10 = *pU8_4;
        pU8_5 = pU8_4 + 1;
        uVal_2 = (uint64_t)param_4;
      } while ((byte)(bFlag_10 - 0x30) < 10);
      lVal_11 = (int64_t)pU8_4 - (int64_t)param_1;
      pU8_6 = pU8_4;
joined_r0x00018064439a:
      if ((9 < lVal_11) &&
         ((lVal_11 != 10 ||
          (((uint64_t)((int)(char)pU8_4[-1] - 0x30U & 0xfffffffe) + uVal_9 * 10 &
           0xffffffff80000000) != 0)))) {
        param_4 = 0x7fffffff;
      }
    }
    if ((pU8_6 == param_2) || ((*pU8_6 != 0x3a && (*pU8_6 != 0x7d)))) goto LAB_180644406;
    ptr2_Byte_7 = (byte **)*param_3;
    if (0 < *(int *)(ptr2_Byte_7 + 2)) {
      fnPtr_8 = "cannot switch from automatic to manual argument indexing";
      goto LAB_18064440d;
    }
  }
  else {
    if ((bFlag_10 == 0x5f) || ((byte)((bFlag_10 & 0xdf) + 0xbf) < 0x1a)) {
      pU8_5 = param_1 + 1;
      do {
        pU8_4 = pU8_5;
        pU8_6 = param_2;
        if (pU8_4 == param_2) break;
        bFlag_10 = *pU8_4;
        pU8_5 = pU8_4 + 1;
      } while ((((byte)(bFlag_10 - 0x30) < 10) || (bFlag_10 == 0x5f)) ||
              (pU8_6 = pU8_4, (byte)((bFlag_10 & 0xdf) + 0xbf) < 0x1a));
      local_28 = (int64_t)pU8_6 - (int64_t)param_1;
      local_30 = param_1;
      uVal_3 = func_0x1806449a0(*param_3,&local_30);
      *(uint32_t *)(param_3 + 1) = uVal_3;
      goto LAB_180644434;
    }
LAB_180644406:
    fnPtr_8 = "invalid format string";
LAB_18064440d:
    local_31 = 1;
    ptr2_Byte_7 = &local_30;
    func_0x1800ae690(ptr2_Byte_7,fnPtr_8);
    pU8_6 = (byte *)func_0x18067a120(ptr2_Byte_7,&DAT_180768d70);
  }
  *(uint32_t *)(ptr2_Byte_7 + 2) = 0xffffffff;
  *(uint *)(param_3 + 1) = param_4;
LAB_180644434:
  if (DAT_18083cf40 != (local_18 ^ (uint64_t)auStack_58)) {
    func_0x180673080(local_18 ^ (uint64_t)auStack_58);
    fnPtr_1 = (func_ptr_t )swi(3);
    pU8_5 = (byte *)(*fnPtr_1)();
    return pU8_5;
  }
  return pU8_6;
}

// func_0x180644460
/* WARNING: Removing unreachable block (ram,0x000180644527) */
/* WARNING: Removing unreachable block (ram,0x000180644527) */
int64_t func_0x180644460(int64_t *param_1,uint param_2,int64_t param_3,uint64_t param_4)
{
  int64_t *pLong_1;
  uint8_t auArr_2 [16];
  char ch_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint uVal_6;
  int64_t lVal_7;
  func_ptr_t fnPtr_8;
  uint uVal_9;
  uint64_t uVal_10;
  uint8_t auStack_d8 [32];
  uint64_t local_b8;
  uint64_t *local_b0;
  uint64_t local_a8;
  uint8_t local_a0 [8];
  uint64_t local_98;
  uint32_t local_90;
  uint local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint64_t local_58;
  uint64_t uStack_50;
  uint32_t local_48;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_d8;
  pLong_1 = param_1 + 3;
  uVal_10 = param_1[4];
  if ((int64_t)uVal_10 < 0) {
    if ((int)param_2 < (int)uVal_10) {
      lVal_4 = param_1[5];
      lVal_5 = (int64_t)(int)param_2;
      local_a8 = *(uint64_t *)(lVal_4 + lVal_5 * 0x18);
      fnPtr_8 = *(func_ptr_t *)(lVal_4 + 8 + lVal_5 * 0x18);
      uVal_9 = *(uint *)(lVal_4 + 0x10 + lVal_5 * 0x18);
      if (uVal_9 != 0) goto LAB_1806444eb;
    }
LAB_18064450f:
    local_58 = CONCAT71(local_58._1_7_,1);
    goto LAB_180644971;
  }
  if ((0xe < param_2) ||
     (uVal_10 = uVal_10 >> ((char)param_2 * '\x04' & 0x3fU), uVal_9 = (uint)uVal_10 & 0xf,
     (uVal_10 & 0xf) == 0)) goto LAB_18064450f;
  local_a8 = *(uint64_t *)(param_1[5] + (uint64_t)param_2 * 0x10);
  fnPtr_8 = *(func_ptr_t *)(param_1[5] + 8 + (uint64_t)param_2 * 0x10);
LAB_1806444eb:
  if (uVal_9 == 0xf) {
    lVal_4 = *param_1;
    *param_1 = param_3;
    param_1[1] = param_1[1] + (lVal_4 - param_3);
    (*fnPtr_8)(local_a8,param_1,pLong_1);
    lVal_4 = *param_1;
    goto switchD_1806445ea_caseD_5;
  }
  local_78 = ZEXT816(0);
  local_88 = 0x8000;
  uStack_7c = 0xffffffff;
  uStack_84 = 0x20;
  uStack_80 = 0;
  local_68._4_12_ = SUB1612(ZEXT816(0),4);
  auArr_2._12_4_ = 0;
  auArr_2._0_12_ = local_68._4_12_;
  local_68 = auArr_2 << 0x20;
  local_b8 = CONCAT44(local_b8._4_4_,uVal_9);
  lVal_4 = func_0x180644ac0(param_3,param_4,&local_88,param_1);
  if ((local_88 & 0x3c0) != 0) {
    func_0x1800aeaa0(local_88 >> 6 & 3,&uStack_80,local_78,pLong_1);
    func_0x1800aeaa0(local_88 >> 8 & 3,&uStack_7c,local_68,pLong_1);
  }
  uVal_10 = local_a8;
  lVal_5 = param_1[3];
  lVal_7 = param_1[6];
  uVal_6 = (uint)local_a8;
  switch(uVal_9) {
  case 1:
    if ((local_88 & 0x4000) != 0) {
      local_58 = CONCAT44(local_58._4_4_,(uint)local_a8);
      local_48 = 1;
      ch_3 = func_0x18063f160(lVal_5,&local_58,&local_88);
      if (ch_3 != '\0') break;
    }
    if ((int)uVal_6 < 0) {
      uVal_6 = -uVal_6;
      uVal_10 = 0x100002d00000000;
    }
    else {
      uVal_10 = (uint64_t)*(uint *)((int64_t)&DAT_1806de840 + (uint64_t)(local_88 >> 8 & 0xc)) <<
               0x20;
    }
    uVal_10 = uVal_6 | uVal_10;
    goto LAB_180644925;
  case 2:
    if ((local_88 & 0x4000) != 0) {
      local_58 = CONCAT44(local_58._4_4_,(uint)local_a8);
      local_48 = 2;
      ch_3 = func_0x18063f160(lVal_5,&local_58,&local_88);
      if (ch_3 != '\0') break;
    }
    uVal_10 = CONCAT44(*(uint32_t *)((int64_t)&DAT_1806de840 + (uint64_t)(local_88 >> 8 & 0xc)),
                      uVal_6);
LAB_180644925:
    func_0x180642200(&local_98,lVal_5,uVal_10,&local_88);
    break;
  case 3:
    if ((local_88 & 0x4000) != 0) {
      local_58 = local_a8;
      local_48 = 3;
      ch_3 = func_0x18063f160(lVal_5,&local_58,&local_88);
      if (ch_3 != '\0') break;
    }
    if (-1 < (int64_t)uVal_10) goto LAB_180644878;
    uVal_10 = -uVal_10;
    local_90 = 0x100002d;
    goto LAB_180644888;
  case 4:
    if ((local_88 & 0x4000) != 0) {
      local_58 = local_a8;
      local_48 = 4;
      ch_3 = func_0x18063f160(lVal_5,&local_58,&local_88);
      if (ch_3 != '\0') break;
    }
LAB_180644878:
    local_90 = *(uint32_t *)((int64_t)&DAT_1806de840 + (uint64_t)(local_88 >> 8 & 0xc));
LAB_180644888:
    local_98 = uVal_10;
    func_0x180645300(local_a0,lVal_5,&local_98,&local_88);
    break;
  case 7:
    local_b8 = lVal_7;
    func_0x180642100(&local_58,lVal_5,local_a8 & 0xff,&local_88);
    break;
  case 8:
    local_b8 = lVal_7;
    func_0x180645810(&local_58,lVal_5,local_a8 & 0xff,&local_88);
    break;
  case 9:
    local_58 = CONCAT44(uStack_84,local_88);
    uStack_50 = (func_ptr_t )CONCAT44(uStack_7c,uStack_80);
    local_b8 = lVal_7;
    func_0x180645970(&local_98,lVal_5,local_a8 & 0xffffffff,&local_58);
    break;
  case 10:
    local_58 = CONCAT44(uStack_84,local_88);
    uStack_50 = (func_ptr_t )CONCAT44(uStack_7c,uStack_80);
    local_b8 = lVal_7;
    func_0x18064cf20(&local_98,lVal_5,local_a8,&local_58);
    break;
  case 0xb:
    local_58 = CONCAT44(uStack_84,local_88);
    uStack_50 = (func_ptr_t )CONCAT44(uStack_7c,uStack_80);
    local_b8 = lVal_7;
    func_0x18064e930(&local_98,lVal_5,local_a8,&local_58);
    break;
  case 0xc:
    local_b8 = lVal_7;
    func_0x18064ed90(&local_58,lVal_5,local_a8,&local_88);
    break;
  case 0xd:
    local_58 = local_a8;
    uStack_50 = fnPtr_8;
    func_0x1800affa0(&local_98,lVal_5,&local_58,&local_88);
    break;
  case 0xe:
    local_b8 = 2;
    do {
      lVal_7 = local_b8;
      uVal_10 = uVal_10 >> 4;
      local_b8 = lVal_7 + 1;
    } while (uVal_10 != 0);
    local_58 = local_a8;
    uStack_50 = (func_ptr_t )CONCAT44(uStack_50._4_4_,(int)lVal_7 + -1);
    local_b0 = &local_58;
    func_0x180644060(&local_98,lVal_5,&local_88);
  }
switchD_1806445ea_caseD_5:
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_d8)) {
    return lVal_4;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_d8);
LAB_180644971:
  func_0x1800ae690(&local_88,"argument not found");
  func_0x18067a120(&local_88,&DAT_180768d70);
  fnPtr_8 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_8)();
  return lVal_4;
}

// func_0x1806449a0
uint64_t func_0x1806449a0(int64_t param_1,void **param_2)
{
  void *_Buf2;
  void *pVoid_1;
  char *_Str;
  func_ptr_t fnPtr_2;
  int iVal_3;
  void *pVoid_4;
  uint64_t uVal_5;
  void *_Size;
  uint *pU64_6;
  int64_t lVal_7;
  uint8_t auStack_78 [39];
  uint8_t local_51;
  uint8_t local_50 [24];
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  *(uint32_t *)(param_1 + 0x10) = 0xffffffff;
  if ((*(uint64_t *)(param_1 + 0x20) >> 0x3e & 1) != 0) {
    uVal_5 = (uint64_t)(-1 < (int64_t)*(uint64_t *)(param_1 + 0x20));
    lVal_7 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + -0x10 + uVal_5 * 8);
    if (lVal_7 != 0) {
      _Buf2 = *param_2;
      pVoid_1 = param_2[1];
      pU64_6 = (uint *)(*(int64_t *)(*(int64_t *)(param_1 + 0x28) + uVal_5 * 8 + -0x18) + 8);
      do {
        _Str = *(char **)(pU64_6 + -2);
        pVoid_4 = (void *)strlen(_Str);
        _Size = pVoid_1;
        if (pVoid_4 < pVoid_1) {
          _Size = pVoid_4;
        }
        iVal_3 = memcmp(_Str,_Buf2,(size_t)_Size);
        if ((pVoid_4 == pVoid_1) && (iVal_3 == 0)) {
          if (-1 < (int)*pU64_6) {
            if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_78)) {
              return (uint64_t)*pU64_6;
            }
            func_0x180673080(local_38 ^ (uint64_t)auStack_78);
            goto LAB_180644a94;
          }
          break;
        }
        pU64_6 = pU64_6 + 4;
        lVal_7 = lVal_7 + -1;
      } while (lVal_7 != 0);
    }
  }
  local_51 = 1;
LAB_180644a94:
  func_0x1800ae690(local_50,"argument not found");
  func_0x18067a120(local_50,&DAT_180768d70);
  fnPtr_2 = (func_ptr_t )swi(3);
  uVal_5 = (*fnPtr_2)();
  return uVal_5;
}

// func_0x180644ac0
/* WARNING: Removing unreachable block (ram,0x000180644eba) */
/* WARNING: Removing unreachable block (ram,0x0001806451f9) */
/* WARNING: Removing unreachable block (ram,0x000180644eba) */
/* WARNING: Removing unreachable block (ram,0x0001806451f9) */
byte * func_0x180644ac0(byte *param_1,byte *param_2,uint *param_3,uint64_t param_4,int param_5)
{
  uint *pU64_1;
  uint *pU64_2;
  byte bFlag_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  byte *pU8_12;
  uint64_t uVal_13;
  int iVal_14;
  char *fnPtr_15;
  int iVal_16;
  uint uVal_17;
  int iVal_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  uint64_t uVal_21;
  bool bFlag_22;
  uint8_t auStack_c8 [55];
  uint8_t local_91;
  int local_90;
  int local_8c;
  uint64_t local_88;
  byte **local_80;
  uint *local_78;
  int local_70;
  byte *local_68;
  uint8_t local_60 [24];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_c8;
  local_68 = param_1;
  if ((int64_t)param_2 - (int64_t)param_1 < 2) {
    if (param_1 == param_2) {
LAB_1806451fe:
      if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_c8)) {
        return local_68;
      }
      func_0x180673080(local_48 ^ (uint64_t)auStack_c8);
      fnPtr_15 = "format specifier requires numeric argument";
      goto LAB_1806451cf;
    }
LAB_180644b2b:
    uVal_11 = (uint)*param_1;
  }
  else {
    if ((0x22 < param_1[1] - 0x3c) ||
       ((0x400000005U >> ((uint64_t)(param_1[1] - 0x3c) & 0x3f) & 1) == 0)) goto LAB_180644b2b;
    uVal_11 = 0;
  }
  local_80 = &local_68;
  iVal_16 = 1 << ((byte)param_5 & 0x1f);
  local_70 = param_5;
  param_5 = param_5 + -1;
  local_88 = (uint64_t)param_3 | 4;
  iVal_18 = 0;
  while( true ) {
    local_78 = param_3;
    if (uVal_11 - 0x20 < 0x5e) {
                    /* WARNING: Could not recover jumptable at 0x000180644b97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pU8_12 = (byte *)(*(func_ptr_t )(&DAT_1806debcc +
                                  *(int *)(&DAT_1806debcc + (uint64_t)(uVal_11 - 0x20) * 4)))
                                  (uVal_11,local_68,iVal_18,
                                   &DAT_1806debcc +
                                   *(int *)(&DAT_1806debcc + (uint64_t)(uVal_11 - 0x20) * 4));
      return pU8_12;
    }
    bFlag_3 = *local_68;
    if (bFlag_3 == 0x7d) goto LAB_1806451fe;
    uVal_13 = (uint64_t)((uint)(0x3a55000000000000 >> (bFlag_3 >> 2 & 0x3e)) & 3);
    pU8_12 = local_68 + uVal_13 + 1;
    local_8c = iVal_16;
    if (param_2 == pU8_12 || (int64_t)param_2 - (int64_t)pU8_12 < 0) break;
    if (bFlag_3 == 0x7b) goto LAB_1806451eb;
    bFlag_3 = *pU8_12;
    if (bFlag_3 == 0x3c) {
      iVal_14 = 1;
    }
    else if (bFlag_3 == 0x5e) {
      iVal_14 = 3;
    }
    else {
      if (bFlag_3 != 0x3e) break;
      iVal_14 = 2;
    }
    if (iVal_18 != 0) break;
    uVal_21 = (int64_t)pU8_12 - (int64_t)local_68;
    uVal_11 = *param_3;
    uVal_17 = (int)uVal_21 << 0xf;
    *param_3 = uVal_17 | uVal_11 & 0xfffc7fff;
    if (uVal_21 != 0) {
      if (uVal_21 == 1) {
        *(byte *)(param_3 + 1) = *local_68;
        *(uint16_t *)((int64_t)param_3 + 5) = 0;
      }
      else {
        if ((uVal_21 < 4) || (3 < uVal_13)) {
          uVal_19 = 0;
        }
        else {
          uVal_19 = 0;
          local_90 = param_5;
          if (0x1f < local_88 - (int64_t)local_68) {
            if (uVal_21 < 0x20) {
              uVal_19 = 0;
            }
            else {
              uVal_19 = uVal_21 & 0xffffffffffffffe0;
              uVal_20 = 0;
              do {
                pU64_1 = (uint *)(local_68 + uVal_20);
                uVal_4 = pU64_1[1];
                uVal_5 = pU64_1[2];
                uVal_6 = pU64_1[3];
                pU64_2 = (uint *)(local_68 + uVal_20 + 0x10);
                uVal_7 = *pU64_2;
                uVal_8 = pU64_2[1];
                uVal_9 = pU64_2[2];
                uVal_10 = pU64_2[3];
                param_3[1] = *pU64_1;
                param_3[2] = uVal_4;
                param_3[3] = uVal_5;
                param_3[4] = uVal_6;
                param_3[5] = uVal_7;
                param_3[6] = uVal_8;
                param_3[7] = uVal_9;
                param_3[8] = uVal_10;
                uVal_20 = uVal_20 + 0x20;
              } while (uVal_19 != uVal_20);
              if (uVal_21 == uVal_19) goto LAB_180644f2f;
              if ((uVal_21 & 0x1c) == 0) goto LAB_180644f10;
            }
            uVal_20 = uVal_21 & 0xfffffffffffffffc;
            do {
              param_3[1] = *(uint *)(local_68 + uVal_19);
              uVal_19 = uVal_19 + 4;
            } while (uVal_20 != uVal_19);
            uVal_19 = uVal_20;
            if (uVal_21 == uVal_20) goto LAB_180644f2f;
          }
        }
LAB_180644f10:
        do {
          *(byte *)((int64_t)param_3 + (uint64_t)((uint)uVal_19 & 3) + 4) = local_68[uVal_19];
          bFlag_22 = uVal_19 != uVal_13;
          uVal_19 = uVal_19 + 1;
        } while (bFlag_22);
      }
    }
LAB_180644f2f:
    *param_3 = (uVal_17 | uVal_11 & 0xfffc7fc7) + iVal_14 * 8;
    local_68 = local_68 + uVal_13 + 2;
    iVal_18 = 1;
    if (local_68 == param_2) goto LAB_1806451fe;
    uVal_11 = (uint)*local_68;
  }
  local_91 = 1;
  fnPtr_15 = "invalid format specifier";
LAB_1806451cf:
  do {
    func_0x1800ae690(local_60,fnPtr_15);
    func_0x18067a120(local_60,&DAT_180768d70);
LAB_1806451eb:
    local_91 = 1;
    fnPtr_15 = "invalid fill character \'{\'";
  } while( true );
}

// func_0x180645300
int64_t ** func_0x180645300(int64_t **param_1,int64_t *param_2,uint64_t *param_3,uint *param_4)
{
  uint32_t *pU64_1;
  uint32_t *pU64_2;
  uint uVal_3;
  uint uVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  char *fnPtr_14;
  int64_t lVal_15;
  uint64_t uVal_16;
  int64_t **ptr2_Long_17;
  int64_t lVal_18;
  uint uVal_19;
  uint64_t uVal_20;
  uint uVal_21;
  uint64_t uVal_22;
  uint64_t uVal_23;
  uint uVal_24;
  uint64_t uVal_25;
  int iVal_26;
  bool bFlag_27;
  uint8_t auStack_d8 [32];
  uint64_t local_b8;
  uint32_t *local_b0;
  uint32_t local_a0;
  int local_9c;
  int64_t local_98;
  uint64_t local_90;
  uint32_t local_88;
  uint32_t local_78 [11];
  byte local_49;
  uint64_t uStack_48;
  
  uStack_48 = DAT_18083cf40 ^ (uint64_t)auStack_d8;
  uVal_20 = *param_3;
  uVal_24 = *(uint *)(param_3 + 1);
  uVal_3 = *param_4;
  switch(uVal_3 & 7) {
  case 4:
    fnPtr_14 = "0123456789ABCDEF";
    if ((uVal_3 & 0x1000) == 0) {
      fnPtr_14 = "0123456789abcdef";
    }
    uVal_23 = 0x40;
    do {
      *(char *)((int64_t)&local_90 + uVal_23 + 7) = fnPtr_14[(uint)uVal_20 & 0xf];
      uVal_23 = uVal_23 - 1;
      uVal_20 = uVal_20 >> 4;
    } while (uVal_20 != 0);
    if ((uVal_3 & 0x2000) != 0) {
      uVal_21 = (uint)((uVal_3 & 0x1000) == 0) << 0xd | 0x5830;
LAB_1806453f2:
      uVal_19 = uVal_21 << 8;
      if (uVal_24 == 0) {
        uVal_19 = uVal_21;
      }
      uVal_24 = (uVal_19 | uVal_24) + 0x2000000;
    }
    break;
  case 5:
    lVal_18 = 0;
    uVal_23 = uVal_20;
    do {
      lVal_15 = lVal_18;
      (&local_49)[lVal_15] = (byte)uVal_23 & 7 | 0x30;
      uVal_23 = uVal_23 >> 3;
      lVal_18 = lVal_15 + -1;
    } while (uVal_23 != 0);
    uVal_23 = lVal_15 + 0x3f;
    if (((uVal_3 & 0x2000) != 0) && (uVal_20 != 0 && (int64_t)(int)param_4[3] <= -(lVal_15 + -1))) {
      uVal_21 = 0x3000;
      if (uVal_24 == 0) {
        uVal_21 = 0x30;
      }
      uVal_24 = (uVal_21 | uVal_24) + 0x1000000;
    }
    break;
  case 6:
    uVal_23 = 0x40;
    do {
      *(byte *)((int64_t)&local_90 + uVal_23 + 7) = (byte)uVal_20 & 1 | 0x30;
      uVal_23 = uVal_23 - 1;
      uVal_20 = uVal_20 >> 1;
    } while (uVal_20 != 0);
    if ((uVal_3 & 0x2000) != 0) {
      uVal_21 = (uint)((uVal_3 & 0x1000) == 0) << 0xd | 0x4230;
      goto LAB_1806453f2;
    }
    break;
  case 7:
    local_b0 = &local_a0;
    local_b8 = 1;
    func_0x1806426f0(param_1,param_2,param_4,1);
    goto LAB_180645634;
  default:
    uVal_21 = 0x40;
    if (99 < uVal_20) {
      uVal_22 = 0x40;
      uVal_23 = uVal_20;
      do {
        uVal_21 = (int)uVal_22 - 2;
        uVal_22 = (uint64_t)uVal_21;
        uVal_20 = uVal_23 / 100;
        *(uint16_t *)((int64_t)&local_88 + uVal_22) =
             *(uint16_t *)(&DAT_1806afb50 + (uVal_23 % 100) * 2);
        bFlag_27 = 9999 < uVal_23;
        uVal_23 = uVal_20;
      } while (bFlag_27);
    }
    if (uVal_20 < 10) {
      uVal_23 = (uint64_t)(uVal_21 - 1);
      *(byte *)((int64_t)&local_88 + uVal_23) = (byte)uVal_20 | 0x30;
    }
    else {
      uVal_23 = (uint64_t)(uVal_21 - 2);
      *(uint16_t *)((int64_t)&local_88 + uVal_23) = *(uint16_t *)(&DAT_1806afb50 + uVal_20 * 2);
    }
  }
  iVal_26 = 0x40 - (int)uVal_23;
  uVal_19 = param_4[2];
  uVal_4 = param_4[3];
  uVal_21 = iVal_26 + (uVal_24 >> 0x18);
  if ((uVal_4 + 1 | uVal_19) == 0) {
    if ((uint64_t)param_2[2] < (uint64_t)uVal_21 + param_2[1]) {
      (*(func_ptr_t )param_2[3])(param_2);
    }
    for (uVal_24 = uVal_24 & 0xffffff; uVal_24 != 0; uVal_24 = uVal_24 >> 8) {
      lVal_18 = param_2[1];
      uVal_20 = lVal_18 + 1;
      if ((uint64_t)param_2[2] < uVal_20) {
        (*(func_ptr_t )param_2[3])(param_2);
        lVal_18 = param_2[1];
        uVal_20 = lVal_18 + 1;
      }
      param_2[1] = uVal_20;
      *(char *)(*param_2 + lVal_18) = (char)uVal_24;
    }
    if (uVal_23 != 0x40) {
      lVal_18 = param_2[1];
      do {
        uVal_22 = 0x40 - uVal_23;
        uVal_20 = param_2[2];
        if (uVal_20 < lVal_18 + uVal_22) {
          (*(func_ptr_t )param_2[3])(param_2);
          lVal_18 = param_2[1];
          uVal_20 = param_2[2];
        }
        uVal_16 = uVal_20 - lVal_18;
        if (uVal_22 <= uVal_20 - lVal_18) {
          uVal_16 = uVal_22;
        }
        if (uVal_16 != 0) {
          lVal_5 = *param_2;
          lVal_15 = lVal_5 + lVal_18;
          if ((uVal_16 < 4) || ((lVal_15 - uVal_23) - (int64_t)&local_88 < 0x20)) {
            uVal_20 = 0;
LAB_1806456f6:
            uVal_25 = uVal_20;
            for (uVal_22 = uVal_16 & 3; uVal_22 != 0; uVal_22 = uVal_22 - 1) {
              *(uint8_t *)(lVal_15 + uVal_25) =
                   *(uint8_t *)((int64_t)&local_88 + uVal_25 + uVal_23);
              uVal_25 = uVal_25 + 1;
            }
            if (uVal_20 - uVal_16 < 0xfffffffffffffffd) {
              lVal_18 = lVal_18 + lVal_5;
              do {
                *(uint8_t *)(lVal_18 + uVal_25) =
                     *(uint8_t *)((int64_t)&local_88 + uVal_25 + uVal_23);
                *(uint8_t *)(lVal_18 + 1 + uVal_25) =
                     *(uint8_t *)((int64_t)&local_88 + uVal_25 + uVal_23 + 1);
                *(uint8_t *)(lVal_18 + 2 + uVal_25) =
                     *(uint8_t *)((int64_t)&local_88 + uVal_25 + uVal_23 + 2);
                *(uint8_t *)(lVal_18 + 3 + uVal_25) =
                     *(uint8_t *)((int64_t)&local_88 + uVal_25 + uVal_23 + 3);
                uVal_25 = uVal_25 + 4;
              } while (uVal_16 != uVal_25);
            }
          }
          else if (uVal_16 < 0x20) {
            uVal_22 = 0;
LAB_1806457d1:
            uVal_20 = uVal_16 & 0xfffffffffffffffc;
            do {
              *(uint32_t *)(lVal_15 + uVal_22) =
                   *(uint32_t *)((int64_t)&local_88 + uVal_22 + uVal_23);
              uVal_22 = uVal_22 + 4;
            } while (uVal_20 != uVal_22);
            if (uVal_16 != uVal_20) goto LAB_1806456f6;
          }
          else {
            uVal_20 = uVal_16 & 0xffffffffffffffe0;
            uVal_22 = 0;
            do {
              pU64_1 = (uint32_t *)((int64_t)&local_88 + uVal_22 + uVal_23);
              uVal_7 = pU64_1[1];
              uVal_8 = pU64_1[2];
              uVal_9 = pU64_1[3];
              pU64_2 = (uint32_t *)((int64_t)local_78 + uVal_22 + uVal_23);
              uVal_10 = *pU64_2;
              uVal_11 = pU64_2[1];
              uVal_12 = pU64_2[2];
              uVal_13 = pU64_2[3];
              pU64_2 = (uint32_t *)(lVal_5 + lVal_18 + uVal_22);
              *pU64_2 = *pU64_1;
              pU64_2[1] = uVal_7;
              pU64_2[2] = uVal_8;
              pU64_2[3] = uVal_9;
              pU64_1 = (uint32_t *)(lVal_5 + lVal_18 + 0x10 + uVal_22);
              *pU64_1 = uVal_10;
              pU64_1[1] = uVal_11;
              pU64_1[2] = uVal_12;
              pU64_1[3] = uVal_13;
              uVal_22 = uVal_22 + 0x20;
            } while (uVal_20 != uVal_22);
            if (uVal_16 != uVal_20) {
              uVal_22 = uVal_20;
              if ((uVal_16 & 0x1c) == 0) goto LAB_1806456f6;
              goto LAB_1806457d1;
            }
          }
          lVal_18 = param_2[1];
        }
        lVal_18 = lVal_18 + uVal_16;
        param_2[1] = lVal_18;
        uVal_23 = uVal_23 + uVal_16;
      } while (uVal_23 != 0x40);
    }
    *param_1 = param_2;
  }
  else {
    local_90 = &uStack_48;
    local_98 = (int64_t)&local_88 + uVal_23;
    if ((uVal_3 & 0x38) == 0x20) {
      bFlag_27 = uVal_19 < uVal_21;
      local_9c = uVal_19 - uVal_21;
      if (!bFlag_27 && local_9c != 0) {
        uVal_21 = uVal_19;
      }
      if (bFlag_27) {
        local_9c = 0;
      }
    }
    else {
      local_9c = 0;
      if (uVal_4 - iVal_26 != 0 && iVal_26 <= (int)uVal_4) {
        uVal_21 = uVal_4 + (uVal_24 >> 0x18);
        local_9c = uVal_4 - iVal_26;
      }
    }
    local_b8 = (uint64_t)uVal_21;
    local_b0 = &local_a0;
    local_a0 = uVal_24;
    func_0x1806429a0(param_1,param_2,param_4,local_b8);
  }
LAB_180645634:
  if (DAT_18083cf40 == (uStack_48 ^ (uint64_t)auStack_d8)) {
    return param_1;
  }
  func_0x180673080(uStack_48 ^ (uint64_t)auStack_d8);
  fnPtr_6 = (func_ptr_t )swi(3);
  ptr2_Long_17 = (int64_t **)(*fnPtr_6)();
  return ptr2_Long_17;
}

// func_0x180645810
uint64_t * func_0x180645810(uint64_t *param_1,uint64_t param_2,byte param_3,uint *param_4,uint64_t param_5)
{
  func_ptr_t fnPtr_1;
  char ch_2;
  uint uVal_3;
  uint64_t *pU64_4;
  uint8_t auStack_78 [32];
  uint64_t local_58;
  uint32_t *local_50;
  uint8_t local_41;
  uint32_t local_40;
  uint32_t local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  uVal_3 = *param_4;
  if ((byte)(((byte)uVal_3 & 7) - 2) < 5) {
    uVal_3 = *param_4;
    if ((uVal_3 & 0x4000) != 0) {
      local_40 = (uint)param_3;
      local_30 = 2;
      ch_2 = func_0x18063f160(param_2,&local_40,param_4,param_5);
      if (ch_2 != '\0') {
        *param_1 = param_2;
        goto LAB_180645916;
      }
      uVal_3 = *param_4;
    }
    func_0x180642200(param_1,param_2,
                  (uint64_t)param_3 |
                  (uint64_t)*(uint *)((int64_t)&DAT_1806de840 + (uint64_t)(uVal_3 >> 8 & 0xc)) <<
                  0x20,param_4);
  }
  else {
    if ((uVal_3 & 0x38) == 0x20 || (uVal_3 & 0x2c00) != 0) {
      local_41 = 1;
      goto LAB_180645944;
    }
    local_50 = &local_40;
    local_58 = 1;
    func_0x1806426f0(param_1,param_2,param_4,1);
  }
LAB_180645916:
  if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_78)) {
    return param_1;
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_78);
LAB_180645944:
  func_0x1800ae690(&local_40,"invalid format specifier for char");
  func_0x18067a120(&local_40,&DAT_180768d70);
  fnPtr_1 = (func_ptr_t )swi(3);
  pU64_4 = (uint64_t *)(*fnPtr_1)();
  return pU64_4;
}

// func_0x180645970
/* WARNING: Removing unreachable block (ram,0x000180645c36) */
/* WARNING: Removing unreachable block (ram,0x000180645c36) */
int64_t ** func_0x180645970(int64_t **param_1,int64_t *param_2,float param_3,uint *param_4,uint64_t param_5)
{
  uint uVal_1;
  uint uVal_2;
  func_ptr_t fnPtr_3;
  char ch_4;
  int iVal_5;
  int64_t **ptr2_Long_6;
  uint8_t *pU64_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint uVal_10;
  uint uVal_11;
  bool bFlag_12;
  uint32_t uVal_13;
  uint64_t in_stack_fffffffffffffcf8;
  uint32_t uVal_14;
  uint64_t in_stack_fffffffffffffd00;
  uint32_t uVal_15;
  uint64_t local_2e8;
  uint8_t *local_2e0;
  uint64_t local_2d8;
  func_ptr_t local_2d0;
  uint8_t local_2c8;
  float local_d0 [4];
  uint32_t local_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  char *local_a8;
  uint8_t local_a0;
  uint local_98;
  uint32_t uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint8_t **local_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint8_t local_61;
  uint64_t local_60;
  
  uVal_15 = (uint32_t)((uint64_t)in_stack_fffffffffffffd00 >> 0x20);
  uVal_14 = (uint32_t)((uint64_t)in_stack_fffffffffffffcf8 >> 0x20);
  uStack_70 = local_78;
  local_60 = 0xfffffffffffffffe;
  if ((*(byte *)((int64_t)param_4 + 1) & 0x40) != 0) {
    local_c0 = 9;
    local_d0[0] = param_3;
    ch_4 = func_0x18063f160(param_2,local_d0,param_4,param_5);
    if (ch_4 != '\0') {
      *param_1 = param_2;
      return param_1;
    }
  }
  uVal_13 = SUB84((double)param_3,0);
  iVal_5 = func_0x1806823d0(uVal_13);
  uVal_11 = 1;
  if (iVal_5 == 0) {
    uVal_11 = *param_4 >> 10 & 3;
  }
  if (0x7f7fffff < ((uint)param_3 & 0x7fffffff)) {
    local_98 = *param_4;
    uStack_94 = param_4[1];
    uStack_90 = param_4[2];
    uStack_8c = param_4[3];
    if (((local_98 & 0x38000) == 0x8000) && ((char)uStack_94 == '0')) {
      uVal_1 = uStack_94 >> 8;
      uStack_94 = CONCAT31((int3)uVal_1,0x20);
    }
    bFlag_12 = (local_98 & 0x1000) == 0;
    pU64_7 = &DAT_180760383;
    if (bFlag_12) {
      pU64_7 = &DAT_18075f3fa;
    }
    local_2e0 = &DAT_1807603b6;
    if (bFlag_12) {
      local_2e0 = &DAT_18075fded;
    }
    if (NAN(param_3)) {
      local_2e0 = pU64_7;
    }
    lVal_9 = 4 - (uint64_t)(uVal_11 == 0);
    local_2e8 = (uint8_t **)CONCAT44(local_2e8._4_4_,uVal_11);
    func_0x18036a520(param_1,param_2,&local_98,lVal_9,lVal_9,&local_2e8);
    return param_1;
  }
  if ((uVal_11 != 0) && ((*param_4 & 0x38) == 0x20)) {
    lVal_9 = param_2[1];
    uVal_8 = lVal_9 + 1;
    if ((uint64_t)param_2[2] < uVal_8) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_9 = param_2[1];
      uVal_8 = lVal_9 + 1;
    }
    param_2[1] = uVal_8;
    *(char *)(*param_2 + lVal_9) = (char)(0x202b2d00 >> (sbyte)(uVal_11 << 3));
    uVal_11 = 0;
    if (param_4[2] != 0) {
      param_4[2] = param_4[2] - 1;
    }
  }
  uVal_1 = *param_4;
  uVal_2 = param_4[3];
  uVal_10 = uVal_2;
  if (((int)uVal_2 < 0) && (uVal_10 = 6, (uVal_1 & 7) == 0)) {
    local_2e8 = (uint8_t **)func_0x180641020(param_3);
    func_0x180646a50(param_1,param_2,&local_2e8,param_4,CONCAT44(uVal_14,uVal_11),CONCAT44(uVal_15,7),
                  param_5);
    return param_1;
  }
  local_2e0 = (uint8_t *)0x0;
  local_2d0 = func_0x1800b02d0;
  local_2e8 = (uint8_t **)&local_2c8;
  local_2d8 = 500;
  if (((byte)uVal_1 & 7) == 1) {
    if (uVal_10 == 0x7fffffff) {
      local_61 = 1;
      local_80 = std::exception::vftable;
      _local_78 = ZEXT816(0);
      local_a8 = "number is too big";
      local_a0 = 1;
      func_0x18067b3f0(&local_a8,local_78);
      local_80 = &PTR_FUN_1806b0aa8;
      func_0x18067a120(&local_80,&DAT_180768d70);
      fnPtr_3 = (func_ptr_t )swi(3);
      ptr2_Long_6 = (int64_t **)(*fnPtr_3)();
      return ptr2_Long_6;
    }
    uVal_10 = uVal_10 + 1;
    if (uVal_2 != 0) {
      *(byte *)((int64_t)param_4 + 1) = *(byte *)((int64_t)param_4 + 1) | 0x20;
    }
  }
  else if ((uVal_1 & 7) == 2) {
    if (uVal_2 != 0) {
      *param_4 = uVal_1 | 0x2000;
    }
  }
  else {
    if ((uVal_1 & 7) == 4) {
      if (uVal_11 != 0) {
        local_2c8 = (uint8_t)(0x202b2d00 >> (sbyte)(uVal_11 << 3));
      }
      local_2e0 = (uint8_t *)(uint64_t)(uVal_11 != 0);
      local_b8 = *param_4;
      uStack_b4 = param_4[1];
      uStack_b0 = param_4[2];
      uStack_ac = param_4[3];
      func_0x180645de0(uVal_13,&local_b8,&local_2e8);
      local_80 = local_2e8;
      local_78 = (uint8_t  [8])local_2e0;
      func_0x180648850(param_1,param_2,param_4,local_2e0,local_2e0,&local_80);
      goto LAB_180645ce9;
    }
    uVal_10 = uVal_10 + (uVal_10 == 0);
  }
  local_78._4_4_ = func_0x180646280(uVal_13,uVal_10,param_4,1,&local_2e8);
  param_4[3] = uVal_10;
  local_80 = local_2e8;
  local_78._0_4_ = local_2e0._0_4_;
  func_0x18064b790(param_1,param_2,&local_80,param_4,uVal_11,CONCAT44(uVal_15,7),param_5);
LAB_180645ce9:
  if (local_2e8 != (uint8_t **)&local_2c8) {
    thunk_FUN_180695dd0();
  }
  return param_1;
}

// Unwind@180645d90
void Unwind_180645d90(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x40) != param_2 + 0x60) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x180645de0
void func_0x180645de0(uint64_t param_1,uint *param_2,int64_t *param_3)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  byte bFlag_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  char ch_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint32_t uVal_14;
  uint uVal_15;
  uint64_t uVal_16;
  char *fnPtr_17;
  uint64_t uVal_18;
  uint uVal_19;
  uint uVal_20;
  int64_t lVal_21;
  char *fnPtr_22;
  uint64_t uVal_23;
  uint64_t uVal_24;
  bool bFlag_25;
  uint8_t local_88 [40];
  uint8_t auStack_60 [8];
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)local_88;
  uVal_20 = (((uint)(param_1 >> 0x20) & 0x7ff00000) >> 0x14) - 0x3ff;
  bFlag_25 = (param_1 & 0x7ff0000000000000) == 0;
  uVal_18 = (param_1 & 0xfffffffffffff) + 0x10000000000000;
  if (bFlag_25) {
    uVal_18 = param_1 & 0xfffffffffffff;
  }
  uVal_19 = 0xfffffc02;
  if (!bFlag_25) {
    uVal_19 = uVal_20;
  }
  uVal_24 = (uint64_t)param_2[3];
  if (uVal_24 < 0xd) {
    ch_7 = (char)param_2[3];
    if ((uVal_18 >> (ch_7 * -4 + 0x30U & 0x3f) & 8) != 0) {
      lVal_21 = 1L << (ch_7 * -4 + 0x34U & 0x3f);
      uVal_18 = uVal_18 + lVal_21 & -lVal_21;
    }
  }
  else {
    uVal_24 = 0xd;
  }
  local_58 = s_0000000000000000__1806de020._0_4_;
  uStack_54 = s_0000000000000000__1806de020._4_4_;
  uStack_50 = s_0000000000000000__1806de020._8_4_;
  uStack_4c = s_0000000000000000__1806de020._12_4_;
  fnPtr_17 = "0123456789ABCDEF";
  if ((*(byte *)((int64_t)param_2 + 1) & 0x10) == 0) {
    fnPtr_17 = "0123456789abcdef";
  }
  fnPtr_22 = (char *)((int64_t)register0x00000020 + -0x4b);
  do {
    *fnPtr_22 = fnPtr_17[(uint)uVal_18 & 0xf];
    uVal_18 = uVal_18 >> 4;
    fnPtr_22 = fnPtr_22 + -1;
  } while (uVal_18 != 0);
  uVal_15 = (uint)uVal_24;
  while (uVal_15 != 0) {
    uVal_15 = (uint)uVal_24;
    if (*(char *)((int64_t)&local_58 + uVal_24) != '0') {
      lVal_21 = param_3[1];
      uVal_18 = lVal_21 + 1;
      if ((uint64_t)param_3[2] < uVal_18) goto LAB_180645eff;
      goto LAB_180645f0d;
    }
    uVal_15 = uVal_15 - 1;
    uVal_24 = (uint64_t)uVal_15;
  }
  lVal_21 = param_3[1];
  uVal_18 = lVal_21 + 1;
  uVal_15 = 0;
  if ((uint64_t)param_3[2] < uVal_18) {
LAB_180645eff:
    (*(func_ptr_t )param_3[3])(param_3);
    lVal_21 = param_3[1];
    uVal_18 = lVal_21 + 1;
  }
LAB_180645f0d:
  param_3[1] = uVal_18;
  *(uint8_t *)(*param_3 + lVal_21) = 0x30;
  bFlag_4 = *(byte *)((int64_t)param_2 + 1);
  lVal_21 = param_3[1];
  uVal_18 = lVal_21 + 1;
  if ((uint64_t)param_3[2] < uVal_18) {
    (*(func_ptr_t )param_3[3])(param_3);
    lVal_21 = param_3[1];
    uVal_18 = lVal_21 + 1;
  }
  param_3[1] = uVal_18;
  *(byte *)(*param_3 + lVal_21) = ((bFlag_4 & 0x10) == 0) << 5 | 0x58;
  lVal_21 = param_3[1];
  uVal_18 = lVal_21 + 1;
  if ((uint64_t)param_3[2] < uVal_18) {
    (*(func_ptr_t )param_3[3])(param_3);
    lVal_21 = param_3[1];
    uVal_18 = lVal_21 + 1;
  }
  param_3[1] = uVal_18;
  *(char *)(*param_3 + lVal_21) = (char)local_58;
  if (((*param_2 & 0x2000 | uVal_15) != 0) || ((int)uVal_15 < (int)param_2[3])) {
    lVal_21 = param_3[1];
    uVal_18 = lVal_21 + 1;
    if ((uint64_t)param_3[2] < uVal_18) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_21 = param_3[1];
      uVal_18 = lVal_21 + 1;
    }
    param_3[1] = uVal_18;
    *(uint8_t *)(*param_3 + lVal_21) = 0x2e;
  }
  if (uVal_15 != 0) {
    fnPtr_17 = (char *)((int64_t)&local_58 + 1);
    lVal_21 = param_3[1];
    do {
      uVal_24 = (int64_t)(char *)((int64_t)&local_58 + (uint64_t)uVal_15 + 1) - (int64_t)fnPtr_17;
      uVal_18 = param_3[2];
      if (uVal_18 < lVal_21 + uVal_24) {
        (*(func_ptr_t )param_3[3])(param_3);
        lVal_21 = param_3[1];
        uVal_18 = param_3[2];
      }
      uVal_16 = uVal_18 - lVal_21;
      if (uVal_24 <= uVal_18 - lVal_21) {
        uVal_16 = uVal_24;
      }
      if (uVal_16 != 0) {
        lVal_5 = *param_3;
        lVal_1 = lVal_5 + lVal_21;
        if ((uVal_16 < 4) || ((uint64_t)(lVal_1 - (int64_t)fnPtr_17) < 0x20)) {
          uVal_18 = 0;
LAB_180646047:
          uVal_23 = uVal_18;
          for (uVal_24 = uVal_16 & 3; uVal_24 != 0; uVal_24 = uVal_24 - 1) {
            *(char *)(lVal_1 + uVal_23) = fnPtr_17[uVal_23];
            uVal_23 = uVal_23 + 1;
          }
          if (uVal_18 - uVal_16 < 0xfffffffffffffffd) {
            lVal_21 = lVal_21 + lVal_5;
            do {
              *(char *)(lVal_21 + uVal_23) = fnPtr_17[uVal_23];
              *(char *)(lVal_21 + 1 + uVal_23) = fnPtr_17[uVal_23 + 1];
              *(char *)(lVal_21 + 2 + uVal_23) = fnPtr_17[uVal_23 + 2];
              *(char *)(lVal_21 + 3 + uVal_23) = fnPtr_17[uVal_23 + 3];
              uVal_23 = uVal_23 + 4;
            } while (uVal_16 != uVal_23);
          }
        }
        else if (uVal_16 < 0x20) {
          uVal_24 = 0;
LAB_180646120:
          uVal_18 = uVal_16 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_1 + uVal_24) = *(uint32_t *)(fnPtr_17 + uVal_24);
            uVal_24 = uVal_24 + 4;
          } while (uVal_18 != uVal_24);
          if (uVal_16 != uVal_18) goto LAB_180646047;
        }
        else {
          uVal_18 = uVal_16 & 0xffffffffffffffe0;
          uVal_24 = 0;
          do {
            pU64_2 = (uint32_t *)(fnPtr_17 + uVal_24);
            uVal_8 = pU64_2[1];
            uVal_9 = pU64_2[2];
            uVal_10 = pU64_2[3];
            pU64_3 = (uint32_t *)(fnPtr_17 + uVal_24 + 0x10);
            uVal_11 = *pU64_3;
            uVal_12 = pU64_3[1];
            uVal_13 = pU64_3[2];
            uVal_14 = pU64_3[3];
            pU64_3 = (uint32_t *)(lVal_5 + lVal_21 + uVal_24);
            *pU64_3 = *pU64_2;
            pU64_3[1] = uVal_8;
            pU64_3[2] = uVal_9;
            pU64_3[3] = uVal_10;
            pU64_2 = (uint32_t *)(lVal_5 + lVal_21 + 0x10 + uVal_24);
            *pU64_2 = uVal_11;
            pU64_2[1] = uVal_12;
            pU64_2[2] = uVal_13;
            pU64_2[3] = uVal_14;
            uVal_24 = uVal_24 + 0x20;
          } while (uVal_18 != uVal_24);
          if (uVal_16 != uVal_18) {
            uVal_24 = uVal_18;
            if ((uVal_16 & 0x1c) == 0) goto LAB_180646047;
            goto LAB_180646120;
          }
        }
        lVal_21 = param_3[1];
      }
      lVal_21 = lVal_21 + uVal_16;
      param_3[1] = lVal_21;
      fnPtr_17 = fnPtr_17 + uVal_16;
    } while (fnPtr_17 != (char *)((int64_t)&local_58 + (uint64_t)uVal_15 + 1));
  }
  for (; (int)uVal_15 < (int)param_2[3]; uVal_15 = uVal_15 + 1) {
    lVal_21 = param_3[1];
    uVal_18 = lVal_21 + 1;
    if ((uint64_t)param_3[2] < uVal_18) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_21 = param_3[1];
      uVal_18 = lVal_21 + 1;
    }
    param_3[1] = uVal_18;
    *(uint8_t *)(*param_3 + lVal_21) = 0x30;
  }
  bFlag_4 = *(byte *)((int64_t)param_2 + 1);
  lVal_21 = param_3[1];
  uVal_18 = lVal_21 + 1;
  if ((uint64_t)param_3[2] < uVal_18) {
    (*(func_ptr_t )param_3[3])(param_3);
    lVal_21 = param_3[1];
    uVal_18 = lVal_21 + 1;
  }
  param_3[1] = uVal_18;
  *(byte *)(*param_3 + lVal_21) = ((bFlag_4 & 0x10) == 0) << 5 | 0x50;
  lVal_21 = param_3[1];
  uVal_18 = lVal_21 + 1;
  if ((int)uVal_19 < 0) {
    if ((uint64_t)param_3[2] < uVal_18) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_21 = param_3[1];
      uVal_18 = lVal_21 + 1;
    }
    param_3[1] = uVal_18;
    *(uint8_t *)(*param_3 + lVal_21) = 0x2d;
    uVal_20 = -uVal_19;
  }
  else {
    if ((uint64_t)param_3[2] < uVal_18) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_21 = param_3[1];
      uVal_18 = lVal_21 + 1;
    }
    param_3[1] = uVal_18;
    *(uint8_t *)(*param_3 + lVal_21) = 0x2b;
  }
  uVal_19 = 0x1f;
  if ((uVal_20 | 1) != 0) {
    for (; (uVal_20 | 1) >> uVal_19 == 0; uVal_19 = uVal_19 - 1) {
    }
  }
  func_0x18036aa60(auStack_60,param_3,uVal_20,
                (uint64_t)uVal_20 + *(int64_t *)(&DAT_1806afa50 + (uint64_t)uVal_19 * 8) >> 0x20);
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)local_88)) {
    return;
  }
  func_0x180673080(local_48 ^ (uint64_t)local_88);
  fnPtr_6 = (func_ptr_t )swi(3);
  (*fnPtr_6)();
  return;
}

// func_0x180646280
uint64_t func_0x180646280(double param_1,uint param_2,uint *param_3,char param_4,char **param_5)
{
  uint16_t *pU64_1;
  func_ptr_t fnPtr_2;
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  char ch_12;
  uint8_t auArr_13 [16];
  int iVal_14;
  uint64_t uVal_15;
  char *fnPtr_16;
  byte bFlag_17;
  uint uVal_18;
  uint uVal_19;
  char *fnPtr_20;
  byte bFlag_21;
  int iVal_22;
  uint uVal_23;
  uint64_t uVal_24;
  int iVal_25;
  uint uVal_26;
  uint64_t uVal_27;
  char *fnPtr_28;
  int iVal_29;
  uint uVal_30;
  int64_t lVal_31;
  uint64_t uVal_32;
  uint uVal_33;
  uint64_t uVal_34;
  uint64_t uVal_35;
  bool bFlag_36;
  bool bFlag_37;
  uint local_80 [6];
  char *local_68;
  uint *local_60;
  uint64_t local_58;
  uint64_t local_50;
  int local_48;
  
  fnPtr_28 = (char *)(uint64_t)param_2;
  uVal_18 = *param_3 & 7;
  local_60 = param_3;
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    if ((int)param_2 < 1 || uVal_18 != 2) {
      fnPtr_16 = param_5[1];
      fnPtr_28 = fnPtr_16 + 1;
      if (param_5[2] < fnPtr_28) {
        (*(func_ptr_t )param_5[3])(param_5);
        fnPtr_16 = param_5[1];
        fnPtr_28 = fnPtr_16 + 1;
      }
      param_5[1] = fnPtr_28;
      (*param_5)[(int64_t)fnPtr_16] = '0';
      local_80[0] = 0;
    }
    else {
      fnPtr_16 = param_5[2];
      if (fnPtr_16 < fnPtr_28) {
        (*(func_ptr_t )param_5[3])(param_5,fnPtr_28);
        fnPtr_16 = param_5[2];
      }
      if (fnPtr_28 < fnPtr_16) {
        fnPtr_16 = fnPtr_28;
      }
      param_5[1] = fnPtr_16;
      func_0x1806ab010(*param_5,0x30,fnPtr_28);
      local_80[0] = -param_2;
    }
    goto LAB_1806469fa;
  }
  uVal_27 = (uint64_t)param_1 & 0xfffffffffffff;
  uVal_15 = (uint64_t)param_1 >> 0x20 & 0x7ff00000;
  uVal_23 = (uint)uVal_15;
  if (((uint64_t)param_1 & 0x7ff0000000000000) == 0) {
    lVal_31 = 0x3f;
    if (uVal_27 != 0) {
      for (; uVal_27 >> lVal_31 == 0; lVal_31 = lVal_31 + -1) {
      }
    }
    iVal_14 = 0x35;
    if (uVal_27 != 0) {
      iVal_14 = ((uint)lVal_31 ^ 0x3f) - 10;
    }
    iVal_29 = -0x431 - iVal_14;
    lVal_31 = uVal_27 << ((byte)iVal_14 & 0x3f);
  }
  else {
    iVal_29 = (uVal_23 >> 0x14) - 0x433;
    lVal_31 = uVal_27 * 2 + 0x20000000000000;
  }
  iVal_25 = iVal_29 * 0x4d105 >> 0x14;
  ch_12 = (char)((2 - iVal_25) * 0x1a934f >> 0x13);
  uVal_30 = (0x126U - iVal_25 & 0xffff) * 0x2f69 >> 0x10;
  uVal_30 = (((0x126U - iVal_25) - uVal_30 & 0xffff) >> 1) + uVal_30;
  iVal_22 = ((uVal_30 >> 4) * 0x1b & 0xffff) - 0x124;
  uVal_30 = uVal_30 & 0xfffffff0;
  uVal_24 = *(uint64_t *)(&DAT_1806de5e0 + uVal_30);
  uVal_34 = *(uint64_t *)(&DAT_1806de5e8 + uVal_30);
  iVal_14 = (2 - iVal_25) - iVal_22;
  if (iVal_14 != 0) {
    auArr_3._8_8_ = 0;
    auArr_3._0_8_ = *(uint64_t *)(&DAT_1806de760 + (int64_t)iVal_14 * 8);
    auArr_7._8_8_ = 0;
    auArr_7._0_8_ = uVal_34;
    bFlag_17 = ch_12 - ((char)((uint)(iVal_22 * 0x1a934f) >> 0x13) + (char)iVal_14);
    auArr_4._8_8_ = 0;
    auArr_4._0_8_ = *(uint64_t *)(&DAT_1806de760 + (int64_t)iVal_14 * 8);
    auArr_8._8_8_ = 0;
    auArr_8._0_8_ = uVal_24;
    auArr_11._8_8_ = 0;
    auArr_11._0_8_ = SUB168(auArr_4 * auArr_8,8);
    auArr_11 = auArr_3 * auArr_7 + auArr_11;
    uVal_24 = auArr_11._0_8_;
    bFlag_21 = bFlag_17 & 0x3f;
    uVal_34 = uVal_24 >> bFlag_21 | auArr_11._8_8_ << 0x40 - bFlag_21;
    bFlag_17 = bFlag_17 & 0x3f;
    uVal_24 = (SUB168(auArr_4 * auArr_8,0) >> bFlag_17 | uVal_24 << 0x40 - bFlag_17) + 1;
    local_68 = fnPtr_28;
  }
  uVal_32 = lVal_31 << ((char)iVal_29 + ch_12 & 0x3fU);
  auArr_5._8_8_ = 0;
  auArr_5._0_8_ = uVal_34;
  auArr_9._8_8_ = 0;
  auArr_9._0_8_ = uVal_32;
  auArr_6._8_8_ = 0;
  auArr_6._0_8_ = uVal_24;
  auArr_10._8_8_ = 0;
  auArr_10._0_8_ = uVal_32;
  auArr_13._8_8_ = 0;
  auArr_13._0_8_ = SUB168(auArr_6 * auArr_10,8);
  auArr_13 = auArr_5 * auArr_9 + auArr_13;
  uVal_32 = auArr_13._0_8_;
  uVal_34 = auArr_13._8_8_;
  uVal_24 = uVal_34 * 10;
  if (999999999999999999 < uVal_34) {
    uVal_24 = uVal_34;
  }
  local_80[0] = 999999999999999999 < uVal_34 | 0x12;
  if (uVal_18 == 2) {
    uVal_30 = local_80[0] + iVal_25 + -2;
    if ((int)(uVal_30 ^ 0x7fffffff) < (int)param_2 && 0 < (int)uVal_30) {
      func_0x1800ae690(local_80,"number is too big");
      func_0x18067a120(local_80,&DAT_180768d70);
      fnPtr_2 = (func_ptr_t )swi(3);
      uVal_15 = (*fnPtr_2)();
      return uVal_15;
    }
    param_2 = uVal_30 + param_2;
    fnPtr_28 = (char *)(uint64_t)param_2;
    if ((int)param_2 < (int)local_80[0]) goto LAB_180646559;
LAB_1806464e7:
    local_80[0] = (local_80[0] + iVal_25) - 3;
    if (param_4 == '\0') {
      bFlag_36 = ((uint64_t)param_1 & 0x7ff0000000000000) == 0;
      local_58 = uVal_27 | 0x10000000000000;
      if (bFlag_36) {
        local_58 = uVal_27;
      }
      local_48 = -0x432;
      if (!bFlag_36) {
        local_48 = (uVal_23 >> 0x14) - 0x433;
      }
      bFlag_37 = uVal_27 == 0;
      bFlag_36 = (uVal_15 << 0x20) >> 0x35 != 0;
    }
    else {
      uVal_30 = (uint)(float)param_1 & 0x7fffff;
      uVal_23 = (uint)(float)param_1 & 0x7f800000;
      local_58 = (uint64_t)uVal_30 + 0x800000;
      if (uVal_23 == 0) {
        local_58 = (uint64_t)uVal_30;
      }
      local_48 = -0x95;
      if (uVal_23 != 0) {
        local_48 = (uVal_23 >> 0x17) - 0x96;
      }
      bFlag_37 = uVal_30 == 0;
      bFlag_36 = 0xffffff < uVal_23;
    }
    bFlag_21 = (bFlag_36 & bFlag_37) + 4;
    if (uVal_18 != 2) {
      bFlag_21 = bFlag_36 & bFlag_37;
    }
    uVal_23 = 0x2ff;
    if (param_2 < 0x2ff) {
      uVal_23 = param_2;
    }
    local_50 = 0;
    func_0x180648ae0(&local_58,bFlag_21,uVal_23,param_5,local_80);
  }
  else {
    if ((int)local_80[0] <= (int)param_2) goto LAB_1806464e7;
LAB_180646559:
    local_80[0] = local_80[0] + iVal_25 + -2;
    uVal_23 = (uint)fnPtr_28;
    if ((int)uVal_23 < 1) {
      if ((int)uVal_23 < 0) {
        param_5[1] = (char *)0x0;
      }
      else {
        fnPtr_28 = (char *)0x1;
        if (param_5[2] == (char *)0x0) {
          (*(func_ptr_t )param_5[3])(param_5,1);
          fnPtr_28 = (char *)(uint64_t)(param_5[2] != (char *)0x0);
        }
        param_5[1] = fnPtr_28;
        if ((uVal_24 | uVal_32 != 0) < 0x4563918244f40001) {
          **param_5 = '0';
        }
        else {
          **param_5 = '1';
        }
      }
    }
    else {
      local_80[0] = local_80[0] - uVal_23;
      fnPtr_16 = &DAT_00000009;
      if (uVal_23 < 9) {
        fnPtr_16 = fnPtr_28;
      }
      pU64_1 = (uint16_t *)*param_5;
      uVal_30 = uVal_23;
      if (((uint64_t)fnPtr_16 & 1) == 0) {
        uVal_15 = ((uVal_24 / 10000000000) * 0x1ad7f29b >> 0x14) + 1;
        uVal_27 = uVal_15 >> 0x20;
        *pU64_1 = *(uint16_t *)(&DAT_1806afb50 + uVal_27 * 2);
        uVal_26 = 2;
        if (uVal_23 < 3) goto LAB_1806467ad;
LAB_1806466f7:
        uVal_34 = uVal_24 % 10000000000;
        uVal_35 = (uint64_t)uVal_26;
        uVal_15 = (uVal_15 & 0xffffffff) * 100;
        uVal_27 = uVal_15 >> 0x20;
        *(uint16_t *)((int64_t)pU64_1 + uVal_35) = *(uint16_t *)(&DAT_1806afb50 + uVal_27 * 2);
        if (uVal_26 + 2 < (uint)fnPtr_16) {
          uVal_15 = (uVal_15 & 0xffffffff) * 100;
          uVal_27 = uVal_15 >> 0x20;
          *(uint16_t *)((int64_t)pU64_1 + uVal_35 + 2) =
               *(uint16_t *)(&DAT_1806afb50 + uVal_27 * 2);
          if ((char *)(uVal_35 + 4) < fnPtr_16) {
            uVal_15 = (uVal_15 & 0xffffffff) * 100;
            uVal_27 = uVal_15 >> 0x20;
            *(uint16_t *)((int64_t)pU64_1 + (int64_t)(char *)(uVal_35 + 4)) =
                 *(uint16_t *)(&DAT_1806afb50 + uVal_27 * 2);
            if ((char *)(uVal_35 + 6) < fnPtr_16) {
              uVal_15 = (uVal_15 & 0xffffffff) * 100;
              uVal_27 = uVal_15 >> 0x20;
              *(uint16_t *)((int64_t)pU64_1 + (int64_t)(char *)(uVal_35 + 6)) =
                   *(uint16_t *)(&DAT_1806afb50 + uVal_27 * 2);
            }
          }
        }
        if (9 < uVal_23) {
          uVal_15 = uVal_34 / 10;
          uVal_26 = uVal_23 - 9;
          fnPtr_16 = *param_5;
          if ((uVal_26 & 1) == 0) {
            uVal_24 = (uVal_15 * 0x1ad7f29b >> 0x14) + 1;
            uVal_27 = uVal_24 >> 0x20;
            *(uint16_t *)(fnPtr_16 + 9) = *(uint16_t *)(&DAT_1806afb50 + uVal_27 * 2);
            uVal_33 = 2;
          }
          else {
            uVal_24 = (uVal_15 * 0x2af31dc5 >> 0x18) + 1;
            uVal_27 = uVal_24 >> 0x20;
            fnPtr_16[9] = (char)(uVal_24 >> 0x20) + '0';
            uVal_33 = 1;
          }
          uVal_19 = (int)uVal_34 + (int)uVal_15 * -10;
          if (uVal_33 < uVal_26) {
            uVal_15 = (uint64_t)uVal_33;
            do {
              uVal_24 = (uVal_24 & 0xffffffff) * 100;
              uVal_27 = uVal_24 >> 0x20;
              *(uint16_t *)(fnPtr_16 + uVal_15 + 9) = *(uint16_t *)(&DAT_1806afb50 + uVal_27 * 2);
              uVal_15 = uVal_15 + 2;
            } while (uVal_15 < uVal_26);
            if (0x11 < uVal_23) {
              if (uVal_19 < 6) {
                uVal_26 = 0x12;
                uVal_30 = 0x12;
                if (uVal_19 == 5) goto LAB_180646912;
                goto LAB_180646981;
              }
              goto LAB_18064691c;
            }
          }
          if (((uint)uVal_24 < *(uint *)(&DAT_180761a04 + (uint64_t)(0x11 - uVal_23) * 4)) &&
             (((uint)uVal_24 >> 0x1f & ((uint)uVal_27 | (uint)(uVal_19 != 0 || uVal_32 != 0))) == 0))
          goto LAB_180646981;
LAB_18064691c:
          (*param_5 + -1)[(int64_t)fnPtr_28] = (*param_5 + -1)[(int64_t)fnPtr_28] + '\x01';
          goto LAB_180646926;
        }
        if (uVal_23 != 9) goto LAB_1806467ad;
        if (5000000000 < uVal_34) goto LAB_18064691c;
        uVal_26 = 9;
        uVal_30 = 9;
        if (uVal_34 == 5000000000) {
LAB_180646912:
          if ((uVal_32 != 0) || (uVal_30 = uVal_26, (uVal_27 & 1) != 0)) goto LAB_18064691c;
        }
      }
      else {
        uVal_15 = ((uVal_24 / 10000000000) * 0x2af31dc5 >> 0x18) + 1;
        uVal_27 = uVal_15 >> 0x20;
        *(char *)pU64_1 = (char)(uVal_15 >> 0x20) + '0';
        uVal_26 = 1;
        if (1 < uVal_23) goto LAB_1806466f7;
LAB_1806467ad:
        if ((*(uint *)(&DAT_180761a04 + (int64_t)(int)(8 - (uint)fnPtr_16) * 4) <= (uint)uVal_15) ||
           ((((uint)uVal_27 | (uint)((uVal_24 % 10000000000 | uVal_32) != 0)) & (uint)uVal_15 >> 0x1f)
            != 0)) {
          (*param_5 + -1)[(int64_t)fnPtr_28] = (*param_5 + -1)[(int64_t)fnPtr_28] + '\x01';
          fnPtr_16 = (char *)0x1;
          if (uVal_23 != 1) {
LAB_180646926:
            fnPtr_20 = fnPtr_28 + -1;
            do {
              fnPtr_16 = fnPtr_28;
              if ((*param_5)[(uint64_t)fnPtr_20 & 0xffffffff] < ':') break;
              (*param_5)[(uint64_t)fnPtr_20 & 0xffffffff] = '0';
              (*param_5 + -1)[(int64_t)fnPtr_20] = (*param_5 + -1)[(int64_t)fnPtr_20] + '\x01';
              fnPtr_20 = fnPtr_20 + -1;
            } while (2 < (int)fnPtr_20 + 2);
          }
          uVal_30 = uVal_23;
          if ('9' < **param_5) {
            **param_5 = '1';
            if (uVal_18 == 2) {
              (*param_5)[(int64_t)fnPtr_16] = '0';
              uVal_30 = uVal_23 + 1;
            }
            else {
              local_80[0] = local_80[0] + 1;
            }
          }
        }
      }
LAB_180646981:
      fnPtr_16 = (char *)(uint64_t)uVal_30;
      fnPtr_28 = param_5[2];
      if (fnPtr_28 < fnPtr_16) {
        (*(func_ptr_t )param_5[3])(param_5,fnPtr_16);
        fnPtr_28 = param_5[2];
      }
      if (fnPtr_16 < fnPtr_28) {
        fnPtr_28 = fnPtr_16;
      }
      param_5[1] = fnPtr_28;
    }
  }
  if ((uVal_18 != 2) && ((*(byte *)((int64_t)local_60 + 1) & 0x20) == 0)) {
    fnPtr_28 = param_5[1];
    if (fnPtr_28 != (char *)0x0) {
      do {
        uVal_18 = local_80[0] + 1;
        if ((*param_5 + -1)[(int64_t)fnPtr_28] != '0') {
          fnPtr_16 = param_5[2];
          if (fnPtr_16 < fnPtr_28) {
            (*(func_ptr_t )param_5[3])(param_5,fnPtr_28);
            fnPtr_16 = param_5[2];
          }
          goto LAB_1806469eb;
        }
        fnPtr_28 = fnPtr_28 + -1;
        local_80[0] = uVal_18;
      } while (fnPtr_28 != (char *)0x0);
    }
    fnPtr_16 = param_5[2];
    fnPtr_28 = (char *)0x0;
LAB_1806469eb:
    if (fnPtr_28 < fnPtr_16) {
      fnPtr_16 = fnPtr_28;
    }
    param_5[1] = fnPtr_16;
  }
LAB_1806469fa:
  return (uint64_t)local_80[0];
}

// func_0x180646a50
uint64_t * func_0x180646a50(uint64_t *param_1,int64_t param_2,uint64_t *param_3,uint *param_4,uint param_5, uint param_6,uint64_t param_7)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  char ch_3;
  uint64_t uVal_4;
  uint64_t *pU64_5;
  uint uVal_6;
  uint uVal_7;
  int64_t lVal_8;
  uint uVal_9;
  int iVal_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint8_t auStack_a8 [32];
  uint64_t uStack_88;
  uint *puStack_80;
  uint uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint uStack_60;
  uint64_t uStack_5c;
  int iStack_54;
  char cStack_50;
  uint32_t uStack_4c;
  byte bStack_48;
  uint uStack_44;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_a8;
  uVal_6 = *param_4;
  uVal_4 = 0x2e;
  if ((uVal_6 & 0x4000) != 0) {
    uVal_4 = func_0x180641980(param_7);
    uVal_6 = *param_4;
  }
  ch_3 = (char)uVal_4;
  uVal_9 = *(uint *)param_3 | 1;
  uVal_7 = 0x1f;
  if (uVal_9 != 0) {
    for (; uVal_9 >> uVal_7 == 0; uVal_7 = uVal_7 - 1) {
    }
  }
  iVal_2 = (int)((uint64_t)*(uint *)param_3 + *(int64_t *)(&DAT_1806afa50 + (uint64_t)uVal_7 * 8)
               >> 0x20);
  if (((byte)uVal_6 & 7) == 1) {
LAB_180646b1b:
    uStack_44 = (*(uint *)((int64_t)param_3 + 4) + iVal_2) - 1;
    lVal_12 = (int64_t)(int)((iVal_2 + 1) - (uint)(param_5 == 0));
    if ((uVal_6 & 0x2000) == 0) {
      uVal_11 = 0;
      uVal_4 = uVal_4 & 0xff;
      if (iVal_2 == 1) {
        uVal_4 = uVal_11;
      }
      ch_3 = (char)uVal_4;
    }
    else {
      uVal_11 = 0;
      if (0 < (int)(param_4[3] - iVal_2)) {
        uVal_11 = (uint64_t)(param_4[3] - iVal_2);
      }
      lVal_12 = lVal_12 + uVal_11;
    }
    uVal_7 = -uStack_44;
    if (0 < (int)uStack_44) {
      uVal_7 = uStack_44;
    }
    lVal_8 = 4;
    if (99 < uVal_7) {
      lVal_8 = 6 - (uint64_t)(uVal_7 < 1000);
    }
    lVal_12 = (lVal_8 + lVal_12 + 1) - (uint64_t)(ch_3 == '\0');
    bStack_48 = ((uVal_6 & 0x1000) == 0) << 5 | 0x45;
    uStack_60 = param_5;
    uStack_5c = *param_3;
    uStack_4c = (uint32_t)uVal_11;
    iStack_54 = iVal_2;
    cStack_50 = ch_3;
    if ((int)param_4[2] < 1) {
      uVal_4 = lVal_12 + *(int64_t *)(param_2 + 8);
      if (*(uint64_t *)(param_2 + 0x10) < uVal_4) {
        (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_4);
      }
      func_0x1806470e0(&uStack_60,&uStack_68,param_2);
      *param_1 = uStack_68;
    }
    else {
      puStack_80 = &uStack_60;
      uStack_88 = lVal_12;
      func_0x180648740(param_1,param_2,param_4,lVal_12);
    }
  }
  else {
    if ((uVal_6 & 7) != 2) {
      iVal_10 = *(uint *)((int64_t)param_3 + 4) + iVal_2;
      uVal_7 = param_4[3];
      if ((int)param_4[3] < 1) {
        uVal_7 = param_6;
      }
      if ((iVal_10 < -3) || ((int)uVal_7 < iVal_10)) goto LAB_180646b1b;
    }
    uStack_70 = param_7;
    uStack_78 = param_5;
    uStack_88 = CONCAT71(uStack_88._1_7_,ch_3);
    puStack_80 = param_4;
    func_0x180646c50(param_1,param_2);
  }
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_a8)) {
    return param_1;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_a8);
  fnPtr_1 = (func_ptr_t )swi(3);
  pU64_5 = (uint64_t *)(*fnPtr_1)();
  return pU64_5;
}

// func_0x180646c50
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
uint64_t func_0x180646c50(uint64_t param_1,uint64_t param_2,int64_t param_3,int param_4,uint64_t param_5, uint *param_6,int param_7,uint64_t param_8)
{
  char ch_1;
  uint uVal_2;
  uint *pU64_3;
  int iVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t *******ptr7_U64_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t *******ptr7_U64_10;
  int iVal_11;
  uint uVal_12;
  uint64_t local_d0;
  int64_t local_c8;
  int *local_c0;
  uint64_t *******local_b8;
  uint *local_b0;
  uint64_t *******local_a8;
  uint32_t *local_a0;
  int local_94;
  uint64_t *******local_90;
  uint32_t *local_88;
  uint8_t *local_80;
  uint64_t *local_78;
  uint64_t local_70;
  int *local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  uint32_t local_4c;
  uint64_t local_48;
  
  pU64_3 = param_6;
  local_48 = 0xfffffffffffffffe;
  iVal_4 = *(int *)(param_3 + 4);
  iVal_11 = iVal_4 + param_4;
  lVal_9 = (int64_t)(int)((param_4 + 1) - (uint)(param_7 == 0));
  local_c8 = param_3;
  local_94 = iVal_11;
  local_50 = param_4;
  if ((int64_t)iVal_4 < 0) {
    if (iVal_11 < 1) {
      uVal_12 = -iVal_11;
      local_d0 = (uint32_t *)CONCAT44(local_d0._4_4_,uVal_12);
      if (param_4 == 0) {
        uVal_2 = param_6[3];
        if (SBORROW4(uVal_2,uVal_12) != (int)(uVal_2 + iVal_11) < 0 && -1 < (int)uVal_2) {
          local_d0 = (uint32_t *)CONCAT44(local_d0._4_4_,uVal_2);
          uVal_12 = uVal_2;
        }
        if (uVal_12 == 0) {
          local_4c = CONCAT31(local_4c._1_3_,(char)((*param_6 & 0x2000) >> 0xd));
          iVal_4 = 2 - (uint)((*param_6 & 0x2000) == 0);
          uVal_12 = 0;
          goto LAB_180646fc6;
        }
      }
      local_4c = CONCAT31(local_4c._1_3_,1);
      iVal_4 = 2;
LAB_180646fc6:
      lVal_9 = (uint64_t)(uVal_12 + iVal_4) + lVal_9;
      local_90 = (uint64_t *******)&param_7;
      local_88 = &local_4c;
      local_80 = (uint8_t *)&param_5;
      local_78 = &local_d0;
      local_68 = &local_50;
      local_70 = param_3;
      func_0x18036afb0(param_1,param_2,param_6,lVal_9,lVal_9,&local_90);
      return param_1;
    }
    lVal_5 = 0;
    local_4c = param_6[3] - param_4 & (int)(*param_6 << 0x12) >> 0x1f;
    uVal_12 = local_4c;
    if ((int)local_4c < 1) {
      uVal_12 = 0;
    }
    func_0x1806473c0(&local_90,param_8,*param_6 >> 0xe & 1);
    if (local_60 != 0) {
      ptr7_U64_10 = &local_90;
      if (0xf < local_78) {
        ptr7_U64_10 = local_90;
      }
      ptr7_U64_7 = (uint64_t *******)((int64_t)local_80 + (int64_t)ptr7_U64_10);
      lVal_5 = 0;
      iVal_4 = 0;
      do {
        if (ptr7_U64_10 == ptr7_U64_7) {
          ch_1 = *(char *)((int64_t)ptr7_U64_7 + -1);
        }
        else {
          ch_1 = *(char *)ptr7_U64_10;
          if ((byte)(ch_1 + 0x81U) < 0x82) break;
          ptr7_U64_10 = (uint64_t *******)((int64_t)ptr7_U64_10 + 1);
        }
        iVal_4 = iVal_4 + ch_1;
        if (iVal_11 <= iVal_4) break;
        lVal_5 = lVal_5 + 1;
      } while( true );
    }
    lVal_9 = lVal_5 + (uint64_t)uVal_12 + lVal_9 + 1;
    local_d0 = &param_7;
    local_c0 = &local_50;
    local_b8 = (uint64_t *******)&local_94;
    local_b0 = (uint *)&param_5;
    local_a8 = &local_90;
    local_a0 = &local_4c;
    func_0x180648070(param_1,param_2,pU64_3,lVal_9,lVal_9,&local_d0);
  }
  else {
    lVal_9 = iVal_4 + lVal_9;
    local_4c = param_6[3] - iVal_11;
    uVal_12 = *param_6;
    if ((uVal_12 & 0x2000) != 0) {
      lVal_9 = lVal_9 + 1;
      if ((uVal_12 & 7) == 2 || 0 < (int)local_4c) {
        if (0 < (int)local_4c) {
          lVal_9 = lVal_9 + (uint64_t)local_4c;
        }
      }
      else {
        local_4c = 0;
      }
    }
    func_0x1806473c0(&local_90,param_8,uVal_12 >> 0xe & 1);
    if (local_60 != 0) {
      ptr7_U64_10 = &local_90;
      if (0xf < local_78) {
        ptr7_U64_10 = local_90;
      }
      ptr7_U64_7 = (uint64_t *******)((int64_t)local_80 + (int64_t)ptr7_U64_10);
      lVal_5 = 0;
      iVal_4 = 0;
      do {
        if (ptr7_U64_10 == ptr7_U64_7) {
          ch_1 = *(char *)((int64_t)ptr7_U64_7 + -1);
        }
        else {
          ch_1 = *(char *)ptr7_U64_10;
          if ((byte)(ch_1 + 0x81U) < 0x82) goto LAB_180646e9d;
          ptr7_U64_10 = (uint64_t *******)((int64_t)ptr7_U64_10 + 1);
        }
        iVal_4 = iVal_4 + ch_1;
        if (iVal_11 <= iVal_4) goto LAB_180646e9d;
        lVal_5 = lVal_5 + 1;
      } while( true );
    }
    lVal_5 = 0;
LAB_180646e9d:
    local_d0 = &param_7;
    local_c0 = &local_50;
    local_b8 = &local_90;
    local_b0 = pU64_3;
    local_a8 = (uint64_t *******)&param_5;
    local_a0 = &local_4c;
    func_0x1806477e0(param_1,param_2,pU64_3,lVal_9 + lVal_5,lVal_9 + lVal_5,&local_d0);
  }
  if (0xf < local_58) {
    uVal_6 = local_58 + 1;
    uVal_8 = local_70;
    if (0xfff < uVal_6) {
      uVal_8 = *(uint64_t *)(local_70 - 8);
      if (0x1f < (local_70 - 8) - uVal_8) goto LAB_180647056;
      uVal_6 = local_58 + 0x28;
    }
    thunk_FUN_180695dd0(uVal_8,uVal_6);
  }
  local_60 = 0;
  local_58 = 0xf;
  local_70 = local_70 & 0xffffffffffffff00;
  if (0xf < local_78) {
    uVal_6 = (int64_t)local_78 + 1;
    ptr7_U64_10 = local_90;
    if (0xfff < uVal_6) {
      ptr7_U64_10 = (uint64_t *******)local_90[-1];
      if ((char *)0x1f < (char *)((int64_t)local_90 + (-8 - (int64_t)ptr7_U64_10))) {
LAB_180647056:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = (int64_t)local_78 + 0x28;
    }
    thunk_FUN_180695dd0(ptr7_U64_10,uVal_6);
  }
  return param_1;
}

// Unwind@180647060
void Unwind_180647060(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0x88);
  return;
}

// Unwind@1806470a0
void Unwind_1806470a0(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0x88);
  return;
}

// func_0x1806470e0
uint64_t func_0x1806470e0(int *param_1,uint64_t param_2,int64_t *param_3)
{
  char ch_1;
  uint8_t uVal_2;
  func_ptr_t fnPtr_3;
  uint uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  uint uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint uVal_11;
  int iVal_12;
  uint64_t uVal_13;
  uint64_t uVal_14;
  uint uVal_15;
  uint8_t auStack_68 [32];
  int64_t *local_48;
  uint16_t local_3b;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  iVal_12 = *param_1;
  if (iVal_12 != 0) {
    lVal_6 = param_3[1];
    uVal_13 = lVal_6 + 1;
    if ((uint64_t)param_3[2] < uVal_13) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_6 = param_3[1];
      uVal_13 = lVal_6 + 1;
    }
    param_3[1] = uVal_13;
    *(char *)(*param_3 + lVal_6) = (char)(0x202b2d00 >> ((byte)(iVal_12 << 3) & 0x1f));
  }
  ch_1 = *(char *)(param_1 + 4);
  uVal_8 = param_1[1];
  uVal_4 = param_1[3];
  uVal_13 = (uint64_t)uVal_4;
  lVal_6 = (int64_t)(int)uVal_4;
  if (ch_1 != '\0') {
    lVal_6 = (int64_t)&local_3b + lVal_6 + 1;
    lVal_7 = lVal_6;
    if ((int)uVal_4 < 3) {
      uVal_13 = (uint64_t)uVal_8;
    }
    else {
      uVal_11 = (uVal_4 - 1 >> 1) + 1;
      uVal_15 = uVal_8;
      do {
        uVal_13 = (uint64_t)uVal_15 / 100;
        uVal_8 = (uint)uVal_13;
        *(uint16_t *)(lVal_7 + -2) =
             *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(uVal_15 % 100) * 2);
        lVal_7 = lVal_7 + -2;
        uVal_11 = uVal_11 - 1;
        uVal_15 = uVal_15 / 100;
      } while (1 < uVal_11);
    }
    if ((uVal_4 - 1 & 1) != 0) {
      uVal_13 = (uint64_t)uVal_8 / 10;
      *(byte *)(lVal_7 + -1) = (char)uVal_8 + ((char)(uVal_8 / 10) + (char)(uVal_8 / 10)) * -5 | 0x30;
      lVal_7 = lVal_7 + -1;
    }
    *(char *)(lVal_7 + -1) = ch_1;
    uVal_8 = 1;
    uVal_4 = (uint)uVal_13;
    if (99 < uVal_4) {
      uVal_9 = 1;
      uVal_10 = uVal_13;
      do {
        uVal_14 = uVal_10;
        uVal_8 = (int)uVal_9 - 2;
        uVal_9 = (uint64_t)uVal_8;
        uVal_13 = uVal_14 / 100;
        *(uint16_t *)(lVal_7 + (uVal_9 - 2)) =
             *(uint16_t *)
              (&DAT_1806afb50 + (uint64_t)((uint)uVal_14 + (int)(uVal_14 / 100) * -100) * 2);
        uVal_10 = uVal_14 / 100;
      } while (9999 < (uint)uVal_14);
      uVal_4 = (uint)(uVal_14 / 100);
    }
    if (uVal_4 < 10) {
      *(byte *)(lVal_7 + ((uint64_t)(uVal_8 - 1) - 2)) = (byte)uVal_13 | 0x30;
    }
    else {
      *(uint16_t *)(lVal_7 + ((uint64_t)(uVal_8 - 2) - 2)) =
           *(uint16_t *)(&DAT_1806afb50 + uVal_13 * 2);
    }
    goto LAB_180647307;
  }
  uVal_15 = uVal_8;
  if (uVal_8 < 100) {
    uVal_10 = (uint64_t)uVal_8;
    if (uVal_8 < 10) goto LAB_1806472f6;
LAB_1806472a7:
    *(uint16_t *)((int64_t)&local_3b + (uint64_t)(uVal_4 - 2)) =
         *(uint16_t *)(&DAT_1806afb50 + (uint64_t)uVal_8 * 2);
  }
  else {
    do {
      uVal_11 = uVal_15;
      uVal_4 = (int)uVal_13 - 2;
      uVal_13 = (uint64_t)uVal_4;
      uVal_10 = (uint64_t)uVal_11 / 100;
      uVal_8 = (uint)uVal_10;
      *(uint16_t *)((int64_t)&local_3b + uVal_13) =
           *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(uVal_11 % 100) * 2);
      uVal_15 = uVal_11 / 100;
    } while (9999 < uVal_11);
    if (9 < uVal_11 / 100) goto LAB_1806472a7;
LAB_1806472f6:
    *(byte *)((int64_t)&local_3b + (uint64_t)(uVal_4 - 1)) = (byte)uVal_10 | 0x30;
  }
  lVal_6 = (int64_t)&local_3b + lVal_6;
LAB_180647307:
  func_0x1800b1e50(&local_48,&local_3b,lVal_6,param_3);
  iVal_12 = param_1[5];
  if (0 < iVal_12) {
    do {
      lVal_6 = local_48[1];
      uVal_13 = lVal_6 + 1;
      if ((uint64_t)local_48[2] < uVal_13) {
        (*(func_ptr_t )local_48[3])(local_48);
        lVal_6 = local_48[1];
        uVal_13 = lVal_6 + 1;
      }
      local_48[1] = uVal_13;
      *(uint8_t *)(*local_48 + lVal_6) = 0x30;
      iVal_12 = iVal_12 + -1;
    } while (iVal_12 != 0);
  }
  uVal_2 = *(uint8_t *)(param_1 + 6);
  lVal_6 = local_48[1];
  uVal_13 = lVal_6 + 1;
  if ((uint64_t)local_48[2] < uVal_13) {
    (*(func_ptr_t )local_48[3])(local_48);
    lVal_6 = local_48[1];
    uVal_13 = lVal_6 + 1;
  }
  local_48[1] = uVal_13;
  *(uint8_t *)(*local_48 + lVal_6) = uVal_2;
  func_0x18036a3b0(param_2,param_1[7],local_48);
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_68)) {
    return param_2;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_68);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_5 = (*fnPtr_3)();
  return uVal_5;
}

// func_0x1806473c0
uint8_t (*func_0x1806473c0(uint8_t (*param_1)[16],uint64_t param_2,char param_3))[16]
{
  uint64_t uVal_1;
  uint8_t (*pArr16_2)[16];
  uint8_t (*pArr16_3)[16];
  uint8_t (*local_60)[16];
  uint64_t local_50;
  uint64_t local_48;
  char local_40;
  uint8_t (*local_38)[16];
  uint8_t (*local_30)[16];
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  param_1[2] = ZEXT816(0);
  *(uint64_t *)param_1[3] = 0;
  *(uint64_t *)(param_1[3] + 8) = 0xf;
  if (param_3 != '\0') {
    local_38 = param_1 + 2;
    local_30 = param_1;
    func_0x180647580((uint8_t (*)[16])&local_60);
    if (local_30 != (uint8_t (*)[16])&local_60) {
      pArr16_2 = (uint8_t (*)[16])&local_60;
      if (0xf < local_48) {
        pArr16_2 = local_60;
      }
      if (*(uint64_t *)(local_30[1] + 8) < local_50) {
        func_0x18007bba0(local_30,local_50);
      }
      else {
        pArr16_3 = local_30;
        if (0xf < *(uint64_t *)(local_30[1] + 8)) {
          pArr16_3 = *(uint8_t (**)[16])*local_30;
        }
        *(uint64_t *)local_30[1] = local_50;
        func_0x1806aa960(pArr16_3,pArr16_2,local_50);
        (*pArr16_3)[local_50] = 0;
      }
    }
    if (local_40 != '\0') {
      if (*(uint64_t *)(local_30[3] + 8) == 0) {
        func_0x1806476e0(local_38,1);
      }
      else {
        if (0xf < *(uint64_t *)(local_30[3] + 8)) {
          local_38 = *(uint8_t (**)[16])local_30[2];
        }
        *(uint64_t *)local_30[3] = 1;
        (*local_38)[0] = local_40;
        (*local_38)[1] = 0;
      }
    }
    param_1 = local_30;
    if (0xf < local_48) {
      uVal_1 = local_48 + 1;
      pArr16_2 = local_60;
      if (0xfff < uVal_1) {
        pArr16_2 = *(uint8_t (**)[16])(local_60[-1] + 8);
        if (0x1f < (uint64_t)((int64_t)local_60 + (-8 - (int64_t)pArr16_2))) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_1 = local_48 + 0x28;
      }
      thunk_FUN_180695dd0(pArr16_2,uVal_1);
      param_1 = local_30;
    }
  }
  return param_1;
}

// Unwind@180647520
void Unwind_180647520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// Unwind@180647550
void Unwind_180647550(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x50));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x58));
  return;
}

// func_0x180647580
uint8_t (*func_0x180647580(uint8_t (*param_1)[16]))[16]
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t *****ptr5_U64_7;
  uint64_t *****local_58 [2];
  uint64_t local_48;
  uint64_t local_40;
  uint8_t local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  func_0x180641840(local_58);
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  ptr5_U64_7 = local_58;
  if (0xf < local_40) {
    ptr5_U64_7 = local_58[0];
  }
  if (-1 < (int64_t)local_48) {
    if (local_48 < 0x10) {
      *(uint64_t *)param_1[1] = local_48;
      *(uint64_t *)(param_1[1] + 8) = 0xf;
      uVal_1 = *(uint32_t *)((int64_t)ptr5_U64_7 + 4);
      uVal_2 = *(uint32_t *)(ptr5_U64_7 + 1);
      uVal_3 = *(uint32_t *)((int64_t)ptr5_U64_7 + 0xc);
      *(uint32_t *)*param_1 = *(uint32_t *)ptr5_U64_7;
      *(uint32_t *)(*param_1 + 4) = uVal_1;
      *(uint32_t *)(*param_1 + 8) = uVal_2;
      *(uint32_t *)(*param_1 + 0xc) = uVal_3;
      param_1[2][0] = local_38;
    }
    else {
      uVal_4 = local_48 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_4) {
        uVal_6 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        uVal_4 = func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_5 = func_0x180672de0(uVal_6 + 0x28);
        uVal_4 = lVal_5 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_4 - 8) = lVal_5;
      }
      *(uint64_t *)*param_1 = uVal_4;
      *(uint64_t *)param_1[1] = local_48;
      *(uint64_t *)(param_1[1] + 8) = uVal_6;
      func_0x1806aa960(uVal_4,ptr5_U64_7,local_48 + 1);
      param_1[2][0] = local_38;
    }
    if (0xf < local_40) {
      uVal_6 = local_40 + 1;
      ptr5_U64_7 = local_58[0];
      if (0xfff < uVal_6) {
        ptr5_U64_7 = (uint64_t *****)local_58[0][-1];
        if (0x1f < (uint64_t)((int64_t)local_58[0] + (-8 - (int64_t)ptr5_U64_7)))
        goto LAB_1806476a9;
        uVal_6 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(ptr5_U64_7,uVal_6);
    }
    return param_1;
  }
  func_0x18007ba70();
LAB_1806476a9:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1806476b0
void Unwind_1806476b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x1806476e0
uint64_t * func_0x1806476e0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  if ((int64_t)param_2 < 0) {
    func_0x18007ba70();
LAB_1806477d3:
    func_0x18007ba90();
    goto LAB_1806477d8;
  }
  uVal_1 = param_1[3];
  uVal_5 = 0x7fffffffffffffff;
  if ((uVal_1 >> 1 ^ 0x7fffffffffffffff) < uVal_1) {
LAB_180647745:
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
      if (0xffffffffffffffd7 < uVal_5) goto LAB_1806477d3;
      goto LAB_180647745;
    }
    uVal_6 = func_0x180672de0(uVal_5 + 1);
  }
  param_1[2] = param_2;
  param_1[3] = uVal_5;
  func_0x1806ab010(uVal_6,param_4,param_2);
  *(uint8_t *)(uVal_6 + param_2) = 0;
  if (0xf < uVal_1) {
    uVal_2 = *param_1;
    uVal_5 = uVal_1 + 1;
    uVal_4 = uVal_2;
    if (0xfff < uVal_5) {
      uVal_4 = *(uint64_t *)(uVal_2 - 8);
      if (0x1f < (uVal_2 - 8) - uVal_4) {
LAB_1806477d8:
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

// func_0x1806477e0
int64_t * func_0x1806477e0(int64_t *param_1,int64_t param_2,uint *param_3,int64_t param_4,uint64_t param_5, uint64_t param_6)
{
  func_ptr_t fnPtr_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t auStack_68 [40];
  int64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_3 = 0;
  if (param_5 <= param_3[2]) {
    uVal_3 = param_3[2] - param_5;
  }
  uVal_5 = uVal_3 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_4 = param_4 + *(int64_t *)(param_2 + 8) + (*param_3 >> 0xf & 7) * uVal_3;
  if (*(uint64_t *)(param_2 + 0x10) < uVal_4) {
    (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_4);
  }
  if (uVal_5 != 0) {
    func_0x1800b57e0(&local_40,param_2,uVal_5,param_3);
    param_2 = local_40;
  }
  func_0x1806478f0(param_6,&local_40,param_2);
  if (uVal_3 != uVal_5) {
    func_0x1800b57e0(&local_40,local_40,uVal_3 - uVal_5,param_3);
  }
  *param_1 = local_40;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  pLong_2 = (int64_t *)(*fnPtr_1)();
  return pLong_2;
}

// func_0x1806478f0
int64_t ** func_0x1806478f0(int **param_1,int64_t **param_2,int64_t *param_3)
{
  uint8_t uVal_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  int64_t **ptr2_Long_4;
  uint64_t uVal_5;
  int iVal_6;
  uint8_t auStack_68 [32];
  int local_48;
  int *local_40;
  int64_t *local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  iVal_6 = **param_1;
  if (iVal_6 != 0) {
    lVal_3 = param_3[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_3[2] < uVal_5) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_3 = param_3[1];
      uVal_5 = lVal_3 + 1;
    }
    param_3[1] = uVal_5;
    *(char *)(*param_3 + lVal_3) = (char)(0x202b2d00 >> ((byte)(iVal_6 << 3) & 0x1f));
  }
  local_40 = param_1[3];
  local_48 = param_1[1][1];
  func_0x180647a20(&local_30,param_3,*param_1[1],*param_1[2]);
  if ((*(byte *)((int64_t)param_1[4] + 1) & 0x20) != 0) {
    uVal_1 = *(uint8_t *)param_1[5];
    lVal_3 = local_30[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)local_30[2] < uVal_5) {
      (*(func_ptr_t )local_30[3])(local_30);
      lVal_3 = local_30[1];
      uVal_5 = lVal_3 + 1;
    }
    local_30[1] = uVal_5;
    *(uint8_t *)(*local_30 + lVal_3) = uVal_1;
    iVal_6 = *param_1[6];
    if (0 < iVal_6) {
      do {
        lVal_3 = local_30[1];
        uVal_5 = lVal_3 + 1;
        if ((uint64_t)local_30[2] < uVal_5) {
          (*(func_ptr_t )local_30[3])(local_30);
          lVal_3 = local_30[1];
          uVal_5 = lVal_3 + 1;
        }
        local_30[1] = uVal_5;
        *(uint8_t *)(*local_30 + lVal_3) = 0x30;
        iVal_6 = iVal_6 + -1;
      } while (iVal_6 != 0);
    }
  }
  *param_2 = local_30;
  if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_68)) {
    return param_2;
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_68);
  fnPtr_2 = (func_ptr_t )swi(3);
  ptr2_Long_4 = (int64_t **)(*fnPtr_2)();
  return ptr2_Long_4;
}

// func_0x180647a20
int64_t ** func_0x180647a20(int64_t **param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, int param_5,int64_t param_6)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int iVal_3;
  int64_t *local_270;
  uint64_t local_268;
  uint64_t local_260;
  func_ptr_t local_258;
  int64_t local_250 [63];
  uint8_t local_58 [8];
  int64_t *local_50;
  uint64_t local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(int64_t *)(param_6 + 0x30) == 0) {
    func_0x18036aa60(&local_270,param_2);
    if (0 < param_5) {
      do {
        lVal_1 = local_270[1];
        uVal_2 = lVal_1 + 1;
        if ((uint64_t)local_270[2] < uVal_2) {
          (*(func_ptr_t )local_270[3])(local_270);
          lVal_1 = local_270[1];
          uVal_2 = lVal_1 + 1;
        }
        local_270[1] = uVal_2;
        *(uint8_t *)(*local_270 + lVal_1) = 0x30;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    *param_1 = local_270;
  }
  else {
    local_268 = 0;
    local_258 = func_0x1800b02d0;
    local_270 = local_250;
    local_260 = 500;
    func_0x18036aa60(local_58,&local_270);
    if (0 < param_5) {
      iVal_3 = 0;
      do {
        uVal_2 = local_268 + 1;
        if (local_260 < uVal_2) {
          (*local_258)(&local_270);
          uVal_2 = local_268 + 1;
        }
        *(uint8_t *)((int64_t)local_270 + local_268) = 0x30;
        iVal_3 = iVal_3 + 1;
        local_268 = uVal_2;
      } while (iVal_3 != param_5);
    }
    local_50 = local_270;
    local_48 = local_268;
    func_0x180647bc0(param_6,param_1,param_2,&local_50);
    if (local_270 != local_250) {
      thunk_FUN_180695dd0();
    }
  }
  return param_1;
}

// Unwind@180647b80
void Unwind_180647b80(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x28) != param_2 + 0x48) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x180647bc0
int64_t ** func_0x180647bc0(char **param_1,int64_t **param_2,int64_t *param_3,int64_t *param_4)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  char ch_4;
  uint8_t uVal_5;
  int64_t lVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  int64_t **ptr2_Long_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  uint64_t uVal_17;
  uint uVal_18;
  char **ptr2_Char_19;
  uint64_t uVal_20;
  uint64_t uVal_21;
  char **ptr2_Char_22;
  int iVal_23;
  uint32_t *local_858;
  uint64_t local_850;
  uint64_t local_848;
  func_ptr_t local_840;
  uint32_t local_838 [502];
  int64_t *local_60;
  int64_t **local_58;
  int local_4c;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_4c = *(int *)(param_4 + 1);
  local_840 = func_0x180647f60;
  local_858 = local_838;
  local_848 = 500;
  local_850 = 1;
  local_838[0] = 0;
  ptr2_Char_19 = param_1;
  if (&DAT_0000000f < param_1[3]) {
    ptr2_Char_19 = (char **)*param_1;
  }
  iVal_23 = 0;
  local_60 = param_4;
  local_58 = param_2;
  while (param_1[6] != (char *)0x0) {
    ptr2_Char_22 = param_1;
    if (&DAT_0000000f < param_1[3]) {
      ptr2_Char_22 = (char **)*param_1;
    }
    if (ptr2_Char_19 == (char **)((int64_t)ptr2_Char_22 + (int64_t)param_1[2])) {
      ch_4 = *(char *)((int64_t)(char **)((int64_t)ptr2_Char_22 + (int64_t)param_1[2]) + -1);
    }
    else {
      ch_4 = *(char *)ptr2_Char_19;
      if ((byte)(ch_4 + 0x81U) < 0x82) break;
      ptr2_Char_19 = (char **)((int64_t)ptr2_Char_19 + 1);
    }
    iVal_23 = iVal_23 + ch_4;
    if ((iVal_23 == 0) || (local_4c <= iVal_23)) break;
    uVal_20 = local_850 + 1;
    if (local_848 < uVal_20) {
      (*local_840)(&local_858);
      uVal_20 = local_850 + 1;
    }
    local_858[local_850] = iVal_23;
    local_850 = uVal_20;
  }
  iVal_23 = (int)local_850 + -1;
  uVal_18 = 0;
  do {
    ptr2_Long_14 = local_58;
    if (local_4c <= (int)uVal_18) {
      *local_58 = param_3;
      if (local_858 != local_838) {
        thunk_FUN_180695dd0();
      }
      return ptr2_Long_14;
    }
    if (local_4c - uVal_18 == local_858[iVal_23]) {
      ptr2_Char_19 = param_1 + 4;
      if (&DAT_0000000f < param_1[7]) {
        ptr2_Char_19 = (char **)param_1[4];
      }
      if (param_1[6] != (char *)0x0) {
        ptr2_Char_22 = (char **)(param_1[6] + (int64_t)ptr2_Char_19);
        lVal_16 = param_3[1];
        do {
          uVal_17 = (int64_t)ptr2_Char_22 - (int64_t)ptr2_Char_19;
          uVal_20 = param_3[2];
          if (uVal_20 < uVal_17 + lVal_16) {
            (*(func_ptr_t )param_3[3])(param_3);
            lVal_16 = param_3[1];
            uVal_20 = param_3[2];
          }
          uVal_15 = uVal_20 - lVal_16;
          if (uVal_17 <= uVal_20 - lVal_16) {
            uVal_15 = uVal_17;
          }
          if (uVal_15 != 0) {
            lVal_6 = *param_3;
            lVal_1 = lVal_6 + lVal_16;
            if ((uVal_15 < 4) || ((uint64_t)(lVal_1 - (int64_t)ptr2_Char_19) < 0x20)) {
              uVal_20 = 0;
LAB_180647da8:
              uVal_21 = uVal_20;
              for (uVal_17 = uVal_15 & 3; uVal_17 != 0; uVal_17 = uVal_17 - 1) {
                *(uint8_t *)(lVal_1 + uVal_21) = *(uint8_t *)((int64_t)ptr2_Char_19 + uVal_21);
                uVal_21 = uVal_21 + 1;
              }
              if (uVal_20 - uVal_15 < 0xfffffffffffffffd) {
                lVal_16 = lVal_16 + lVal_6;
                do {
                  *(uint8_t *)(lVal_16 + uVal_21) = *(uint8_t *)((int64_t)ptr2_Char_19 + uVal_21);
                  *(uint8_t *)(lVal_16 + 1 + uVal_21) =
                       *(uint8_t *)((int64_t)ptr2_Char_19 + uVal_21 + 1);
                  *(uint8_t *)(lVal_16 + 2 + uVal_21) =
                       *(uint8_t *)((int64_t)ptr2_Char_19 + uVal_21 + 2);
                  *(uint8_t *)(lVal_16 + 3 + uVal_21) =
                       *(uint8_t *)((int64_t)ptr2_Char_19 + uVal_21 + 3);
                  uVal_21 = uVal_21 + 4;
                } while (uVal_15 != uVal_21);
              }
            }
            else if (uVal_15 < 0x20) {
              uVal_17 = 0;
LAB_180647e81:
              uVal_20 = uVal_15 & 0xfffffffffffffffc;
              do {
                *(uint32_t *)(lVal_1 + uVal_17) = *(uint32_t *)((int64_t)ptr2_Char_19 + uVal_17);
                uVal_17 = uVal_17 + 4;
              } while (uVal_20 != uVal_17);
              if (uVal_15 != uVal_20) goto LAB_180647da8;
            }
            else {
              uVal_20 = uVal_15 & 0xffffffffffffffe0;
              uVal_17 = 0;
              do {
                pU64_3 = (uint32_t *)((int64_t)ptr2_Char_19 + uVal_17);
                uVal_7 = pU64_3[1];
                uVal_8 = pU64_3[2];
                uVal_9 = pU64_3[3];
                pU64_2 = (uint32_t *)((int64_t)ptr2_Char_19 + uVal_17 + 0x10);
                uVal_10 = *pU64_2;
                uVal_11 = pU64_2[1];
                uVal_12 = pU64_2[2];
                uVal_13 = pU64_2[3];
                pU64_2 = (uint32_t *)(lVal_6 + lVal_16 + uVal_17);
                *pU64_2 = *pU64_3;
                pU64_2[1] = uVal_7;
                pU64_2[2] = uVal_8;
                pU64_2[3] = uVal_9;
                pU64_2 = (uint32_t *)(lVal_6 + lVal_16 + 0x10 + uVal_17);
                *pU64_2 = uVal_10;
                pU64_2[1] = uVal_11;
                pU64_2[2] = uVal_12;
                pU64_2[3] = uVal_13;
                uVal_17 = uVal_17 + 0x20;
              } while (uVal_20 != uVal_17);
              if (uVal_15 != uVal_20) {
                uVal_17 = uVal_20;
                if ((uVal_15 & 0x1c) == 0) goto LAB_180647da8;
                goto LAB_180647e81;
              }
            }
            lVal_16 = param_3[1];
          }
          lVal_16 = lVal_16 + uVal_15;
          param_3[1] = lVal_16;
          ptr2_Char_19 = (char **)((int64_t)ptr2_Char_19 + uVal_15);
        } while (ptr2_Char_19 != ptr2_Char_22);
      }
      iVal_23 = iVal_23 + -1;
    }
    uVal_5 = *(uint8_t *)(*local_60 + (uint64_t)uVal_18);
    lVal_16 = param_3[1];
    uVal_20 = lVal_16 + 1;
    if ((uint64_t)param_3[2] < uVal_20) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_16 = param_3[1];
      uVal_20 = lVal_16 + 1;
    }
    param_3[1] = uVal_20;
    *(uint8_t *)(*param_3 + lVal_16) = uVal_5;
    uVal_18 = uVal_18 + 1;
  } while( true );
}

// Unwind@180647f20
void Unwind_180647f20(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x20) != param_2 + 0x40) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x180647f60
void func_0x180647f60(int64_t *param_1,uint64_t param_2)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t auStack_68 [40];
  uint8_t **local_40;
  char *local_38;
  uint64_t local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_4 = ((uint64_t)param_1[2] >> 1) + param_1[2];
  uVal_5 = param_2;
  if (((param_2 <= uVal_4) && (uVal_5 = uVal_4, uVal_4 >> 0x3e != 0)) &&
     (uVal_5 = 0x3fffffffffffffff, 0x3fffffffffffffff < param_2)) {
    uVal_5 = param_2;
  }
  pLong_1 = (int64_t *)*param_1;
  lVal_3 = _malloc_base(uVal_5 * 4);
  if (lVal_3 == 0) {
    local_30 = 0;
    local_38 = "bad allocation";
    local_40 = std::bad_alloc::vftable;
    func_0x18067a120(&local_40,&DAT_180768880);
  }
  else {
    func_0x1806aa960(lVal_3,pLong_1,param_1[1] << 2);
    *param_1 = lVal_3;
    param_1[2] = uVal_5;
    if (pLong_1 == param_1 + 4) {
      if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_68)) {
        return;
      }
    }
    else if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_68)) {
      thunk_FUN_180695dd0(pLong_1);
      return;
    }
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_68);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x180648070
int64_t ** func_0x180648070(int64_t **param_1,int64_t *param_2,uint *param_3,int64_t param_4,uint64_t param_5, int **param_6)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  int64_t **ptr2_Long_3;
  uint64_t uVal_4;
  int iVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  uint8_t auStack_88 [32];
  int local_68;
  uint8_t local_60;
  int *local_58;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  uVal_4 = 0;
  if (param_5 <= param_3[2]) {
    uVal_4 = param_3[2] - param_5;
  }
  uVal_7 = uVal_4 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_6 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVal_4;
  if ((uint64_t)param_2[2] < uVal_6) {
    (*(func_ptr_t )param_2[3])(param_2,uVal_6);
  }
  if (uVal_7 != 0) {
    func_0x1800b57e0(&local_48,param_2,uVal_7,param_3);
    param_2 = local_48;
  }
  iVal_5 = **param_6;
  if (iVal_5 != 0) {
    lVal_2 = param_2[1];
    uVal_6 = lVal_2 + 1;
    if ((uint64_t)param_2[2] < uVal_6) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_2 = param_2[1];
      uVal_6 = lVal_2 + 1;
    }
    param_2[1] = uVal_6;
    *(char *)(*param_2 + lVal_2) = (char)(0x202b2d00 >> ((byte)(iVal_5 << 3) & 0x1f));
  }
  local_58 = param_6[5];
  local_60 = *(uint8_t *)param_6[4];
  local_68 = *param_6[3];
  func_0x180648220(&local_48,param_2,*param_6[1],*param_6[2]);
  pLong_8 = local_48;
  iVal_5 = *param_6[6];
  if (0 < iVal_5) {
    do {
      lVal_2 = pLong_8[1];
      uVal_6 = lVal_2 + 1;
      if ((uint64_t)pLong_8[2] < uVal_6) {
        (*(func_ptr_t )pLong_8[3])(pLong_8);
        lVal_2 = pLong_8[1];
        uVal_6 = lVal_2 + 1;
      }
      pLong_8[1] = uVal_6;
      *(uint8_t *)(*pLong_8 + lVal_2) = 0x30;
      iVal_5 = iVal_5 + -1;
    } while (iVal_5 != 0);
  }
  if (uVal_4 != uVal_7) {
    func_0x1800b57e0(&local_48,pLong_8,uVal_4 - uVal_7,param_3);
    pLong_8 = local_48;
  }
  *param_1 = pLong_8;
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_88)) {
    return param_1;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_88);
  fnPtr_1 = (func_ptr_t )swi(3);
  ptr2_Long_3 = (int64_t **)(*fnPtr_1)();
  return ptr2_Long_3;
}

// func_0x180648220
uint64_t func_0x180648220(uint64_t param_1,uint64_t param_2,uint param_3,uint param_4,uint param_5, char param_6,int64_t param_7)
{
  int64_t lVal_1;
  uint uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint uVal_12;
  uint64_t local_288;
  int64_t local_280;
  uint64_t local_278;
  func_ptr_t local_270;
  uint8_t local_268 [504];
  uint8_t local_70 [8];
  uint8_t *local_68;
  uint64_t local_60;
  uint16_t local_58;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVal_4 = (uint64_t)param_5;
  if (*(int64_t *)(param_7 + 0x30) == 0) {
    if (param_6 != '\0') {
      lVal_6 = (int64_t)&local_288 + (int64_t)(int)param_4 + 1;
      param_4 = param_4 - param_5;
      lVal_5 = lVal_6;
      if ((int)param_4 < 2) {
        uVal_9 = (uint64_t)param_3;
      }
      else {
        uVal_12 = (param_4 >> 1) + 1;
        do {
          uVal_9 = (uint64_t)param_3 / 100;
          *(uint16_t *)(lVal_5 + -2) =
               *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(param_3 % 100) * 2);
          lVal_5 = lVal_5 + -2;
          uVal_12 = uVal_12 - 1;
          param_3 = param_3 / 100;
        } while (1 < uVal_12);
      }
      if ((param_4 & 1) != 0) {
        *(byte *)(lVal_5 + -1) = (char)uVal_9 + ((char)(uVal_9 / 10) + (char)(uVal_9 / 10)) * -5 | 0x30;
        lVal_5 = lVal_5 + -1;
        uVal_9 = uVal_9 / 10;
      }
      *(char *)(lVal_5 + -1) = param_6;
      lVal_5 = (lVal_5 + -1) - (int64_t)(int)param_5;
      uVal_12 = (uint)uVal_9;
      uVal_11 = uVal_9;
      uVal_2 = uVal_12;
      if (99 < uVal_12) {
        do {
          uVal_3 = uVal_11;
          param_5 = (int)uVal_4 - 2;
          uVal_4 = (uint64_t)param_5;
          uVal_9 = uVal_3 / 100;
          uVal_12 = (uint)uVal_9;
          *(uint16_t *)(lVal_5 + uVal_4) =
               *(uint16_t *)
                (&DAT_1806afb50 + (uint64_t)((uint)uVal_3 + (int)(uVal_3 / 100) * -100) * 2);
          uVal_11 = uVal_3 / 100;
        } while (9999 < (uint)uVal_3);
        uVal_2 = (uint)(uVal_3 / 100);
      }
      if (uVal_2 < 10) {
        *(byte *)(lVal_5 + (uint64_t)(param_5 - 1)) = (byte)uVal_9 | 0x30;
      }
      else {
        *(uint16_t *)(lVal_5 + (uint64_t)(param_5 - 2)) =
             *(uint16_t *)(&DAT_1806afb50 + (uint64_t)uVal_12 * 2);
      }
      goto LAB_1806486c9;
    }
    if (param_3 < 100) {
      uVal_4 = (uint64_t)param_3;
      uVal_12 = param_4;
      if (9 < param_3) goto LAB_1806485bb;
LAB_1806486b6:
      *(byte *)((int64_t)&local_288 + (uint64_t)(uVal_12 - 1)) = (byte)uVal_4 | 0x30;
    }
    else {
      uVal_9 = (uint64_t)param_4;
      uVal_2 = param_3;
      do {
        uVal_7 = uVal_2;
        uVal_12 = (int)uVal_9 - 2;
        uVal_9 = (uint64_t)uVal_12;
        uVal_4 = (uint64_t)uVal_7 / 100;
        param_3 = (uint)uVal_4;
        *(uint16_t *)((int64_t)&local_288 + uVal_9) =
             *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(uVal_7 % 100) * 2);
        uVal_2 = uVal_7 / 100;
      } while (9999 < uVal_7);
      if (uVal_7 / 100 < 10) goto LAB_1806486b6;
LAB_1806485bb:
      *(uint16_t *)((int64_t)&local_288 + (uint64_t)(uVal_12 - 2)) =
           *(uint16_t *)(&DAT_1806afb50 + (uint64_t)param_3 * 2);
    }
    lVal_6 = (int64_t)&local_288 + (int64_t)(int)param_4;
LAB_1806486c9:
    func_0x1800b1e50(param_1,&local_288,lVal_6,param_2);
    return param_1;
  }
  local_280 = 0;
  local_270 = func_0x1800b02d0;
  local_288 = local_268;
  local_278 = 500;
  lVal_6 = (int64_t)(int)param_5;
  if (param_6 != '\0') {
    lVal_5 = (int64_t)&local_58 + (int64_t)(int)param_4 + 1;
    param_4 = param_4 - param_5;
    lVal_8 = lVal_5;
    if ((int)param_4 < 2) {
      uVal_9 = (uint64_t)param_3;
    }
    else {
      uVal_12 = (param_4 >> 1) + 1;
      do {
        uVal_9 = (uint64_t)param_3 / 100;
        *(uint16_t *)(lVal_8 + -2) =
             *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(param_3 % 100) * 2);
        lVal_8 = lVal_8 + -2;
        uVal_12 = uVal_12 - 1;
        param_3 = param_3 / 100;
      } while (1 < uVal_12);
    }
    uVal_11 = uVal_9;
    if ((param_4 & 1) != 0) {
      uVal_11 = uVal_9 / 10;
      *(byte *)(lVal_8 + -1) = (char)uVal_9 + ((char)(uVal_9 / 10) + (char)(uVal_9 / 10)) * -5 | 0x30;
      lVal_8 = lVal_8 + -1;
    }
    *(char *)(lVal_8 + -1) = param_6;
    lVal_1 = -1 - lVal_6;
    uVal_12 = (uint)uVal_11;
    uVal_2 = uVal_12;
    if (99 < uVal_12) {
      uVal_3 = (uint64_t)param_5;
      uVal_9 = uVal_11;
      do {
        uVal_10 = uVal_9;
        param_5 = (int)uVal_3 - 2;
        uVal_3 = (uint64_t)param_5;
        uVal_11 = uVal_10 / 100;
        uVal_12 = (uint)uVal_11;
        *(uint16_t *)(lVal_8 + uVal_3 + lVal_1) =
             *(uint16_t *)
              (&DAT_1806afb50 + (uint64_t)((uint)uVal_10 + (int)(uVal_10 / 100) * -100) * 2);
        uVal_9 = uVal_10 / 100;
      } while (9999 < (uint)uVal_10);
      uVal_2 = (uint)(uVal_10 / 100);
    }
    if (uVal_2 < 10) {
      *(byte *)(lVal_8 + (uint64_t)(param_5 - 1) + lVal_1) = (byte)uVal_11 | 0x30;
    }
    else {
      *(uint16_t *)(lVal_8 + (uint64_t)(param_5 - 2) + lVal_1) =
           *(uint16_t *)(&DAT_1806afb50 + (uint64_t)uVal_12 * 2);
    }
    goto LAB_18064862c;
  }
  if (param_3 < 100) {
    uVal_9 = (uint64_t)param_3;
    uVal_12 = param_4;
    if (9 < param_3) goto LAB_18064850e;
LAB_180648614:
    *(byte *)((int64_t)&local_58 + (uint64_t)(uVal_12 - 1)) = (byte)uVal_9 | 0x30;
  }
  else {
    uVal_11 = (uint64_t)param_4;
    uVal_2 = param_3;
    do {
      uVal_7 = uVal_2;
      uVal_12 = (int)uVal_11 - 2;
      uVal_11 = (uint64_t)uVal_12;
      uVal_9 = (uint64_t)uVal_7 / 100;
      param_3 = (uint)uVal_9;
      *(uint16_t *)((int64_t)&local_58 + uVal_11) =
           *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(uVal_7 % 100) * 2);
      uVal_2 = uVal_7 / 100;
    } while (9999 < uVal_7);
    if (uVal_7 / 100 < 10) goto LAB_180648614;
LAB_18064850e:
    *(uint16_t *)((int64_t)&local_58 + (uint64_t)(uVal_12 - 2)) =
         *(uint16_t *)(&DAT_1806afb50 + (uint64_t)param_3 * 2);
  }
  lVal_5 = (int64_t)&local_58 + (int64_t)(int)param_4;
LAB_18064862c:
  func_0x1800b1e50(local_70,&local_58,lVal_5,&local_288);
  local_68 = local_288;
  local_60 = uVal_4;
  func_0x180647bc0(param_7,&local_58,param_2,&local_68);
  func_0x1800b1e50(param_1,local_288 + lVal_6,local_288 + local_280,param_2);
  if (local_288 != local_268) {
    thunk_FUN_180695dd0();
  }
  return param_1;
}

// Unwind@180648700
void Unwind_180648700(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x20) != param_2 + 0x40) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x180648740
int64_t * func_0x180648740(int64_t *param_1,int64_t param_2,uint *param_3,int64_t param_4,uint64_t param_5, uint64_t param_6)
{
  func_ptr_t fnPtr_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t auStack_68 [40];
  int64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_3 = 0;
  if (param_5 <= param_3[2]) {
    uVal_3 = param_3[2] - param_5;
  }
  uVal_5 = uVal_3 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_4 = param_4 + *(int64_t *)(param_2 + 8) + (*param_3 >> 0xf & 7) * uVal_3;
  if (*(uint64_t *)(param_2 + 0x10) < uVal_4) {
    (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_4);
  }
  if (uVal_5 != 0) {
    func_0x1800b57e0(&local_40,param_2,uVal_5,param_3);
    param_2 = local_40;
  }
  func_0x1806470e0(param_6,&local_40,param_2);
  if (uVal_3 != uVal_5) {
    func_0x1800b57e0(&local_40,local_40,uVal_3 - uVal_5,param_3);
  }
  *param_1 = local_40;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  pLong_2 = (int64_t *)(*fnPtr_1)();
  return pLong_2;
}

// func_0x180648850
int64_t ** func_0x180648850(int64_t **param_1,int64_t *param_2,uint *param_3,int64_t param_4,uint64_t param_5, int64_t *param_6)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  int64_t lVal_4;
  func_ptr_t fnPtr_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint64_t uVal_13;
  int64_t **ptr2_Long_14;
  int64_t lVal_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  int64_t lVal_19;
  int64_t lVal_20;
  uint64_t uVal_21;
  uint64_t uVal_22;
  uint8_t auStack_78 [40];
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  uVal_21 = 0;
  if (param_5 <= param_3[2]) {
    uVal_21 = param_3[2] - param_5;
  }
  uVal_22 = uVal_21 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_17 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVal_21;
  if ((uint64_t)param_2[2] < uVal_17) {
    (*(func_ptr_t )param_2[3])(param_2,uVal_17);
  }
  if (uVal_22 != 0) {
    func_0x1800b57e0(&local_50,param_2,uVal_22);
    param_2 = local_50;
  }
  if (param_6[1] != 0) {
    lVal_20 = *param_6;
    lVal_19 = param_6[1] + lVal_20;
    lVal_15 = param_2[1];
    do {
      uVal_16 = lVal_19 - lVal_20;
      uVal_17 = param_2[2];
      if (uVal_17 < lVal_15 + uVal_16) {
        (*(func_ptr_t )param_2[3])(param_2);
        lVal_15 = param_2[1];
        uVal_17 = param_2[2];
      }
      uVal_13 = uVal_17 - lVal_15;
      if (uVal_16 <= uVal_17 - lVal_15) {
        uVal_13 = uVal_16;
      }
      if (uVal_13 != 0) {
        lVal_4 = *param_2;
        lVal_1 = lVal_4 + lVal_15;
        if ((uVal_13 < 4) || ((uint64_t)(lVal_1 - lVal_20) < 0x20)) {
          uVal_17 = 0;
LAB_180648977:
          uVal_18 = uVal_17;
          for (uVal_16 = uVal_13 & 3; uVal_16 != 0; uVal_16 = uVal_16 - 1) {
            *(uint8_t *)(lVal_1 + uVal_18) = *(uint8_t *)(lVal_20 + uVal_18);
            uVal_18 = uVal_18 + 1;
          }
          if (uVal_17 - uVal_13 < 0xfffffffffffffffd) {
            lVal_15 = lVal_15 + lVal_4;
            do {
              *(uint8_t *)(lVal_15 + uVal_18) = *(uint8_t *)(lVal_20 + uVal_18);
              *(uint8_t *)(lVal_15 + 1 + uVal_18) = *(uint8_t *)(lVal_20 + 1 + uVal_18);
              *(uint8_t *)(lVal_15 + 2 + uVal_18) = *(uint8_t *)(lVal_20 + 2 + uVal_18);
              *(uint8_t *)(lVal_15 + 3 + uVal_18) = *(uint8_t *)(lVal_20 + 3 + uVal_18);
              uVal_18 = uVal_18 + 4;
            } while (uVal_13 != uVal_18);
          }
        }
        else if (uVal_13 < 0x20) {
          uVal_16 = 0;
LAB_180648a51:
          uVal_17 = uVal_13 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_1 + uVal_16) = *(uint32_t *)(lVal_20 + uVal_16);
            uVal_16 = uVal_16 + 4;
          } while (uVal_17 != uVal_16);
          if (uVal_13 != uVal_17) goto LAB_180648977;
        }
        else {
          uVal_17 = uVal_13 & 0xffffffffffffffe0;
          uVal_16 = 0;
          do {
            pU64_3 = (uint32_t *)(lVal_20 + uVal_16);
            uVal_6 = pU64_3[1];
            uVal_7 = pU64_3[2];
            uVal_8 = pU64_3[3];
            pU64_2 = (uint32_t *)(lVal_20 + 0x10 + uVal_16);
            uVal_9 = *pU64_2;
            uVal_10 = pU64_2[1];
            uVal_11 = pU64_2[2];
            uVal_12 = pU64_2[3];
            pU64_2 = (uint32_t *)(lVal_4 + lVal_15 + uVal_16);
            *pU64_2 = *pU64_3;
            pU64_2[1] = uVal_6;
            pU64_2[2] = uVal_7;
            pU64_2[3] = uVal_8;
            pU64_2 = (uint32_t *)(lVal_4 + lVal_15 + 0x10 + uVal_16);
            *pU64_2 = uVal_9;
            pU64_2[1] = uVal_10;
            pU64_2[2] = uVal_11;
            pU64_2[3] = uVal_12;
            uVal_16 = uVal_16 + 0x20;
          } while (uVal_17 != uVal_16);
          if (uVal_13 != uVal_17) {
            uVal_16 = uVal_17;
            if ((uVal_13 & 0x1c) == 0) goto LAB_180648977;
            goto LAB_180648a51;
          }
        }
        lVal_15 = param_2[1];
      }
      lVal_15 = lVal_15 + uVal_13;
      param_2[1] = lVal_15;
      lVal_20 = lVal_20 + uVal_13;
    } while (lVal_20 != lVal_19);
  }
  if (uVal_21 != uVal_22) {
    func_0x1800b57e0(&local_50,param_2,uVal_21 - uVal_22,param_3);
    param_2 = local_50;
  }
  *param_1 = param_2;
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_78)) {
    return param_1;
  }
  func_0x180673080(local_48 ^ (uint64_t)auStack_78);
  fnPtr_5 = (func_ptr_t )swi(3);
  ptr2_Long_14 = (int64_t **)(*fnPtr_5)();
  return ptr2_Long_14;
}

// func_0x180648ae0
void func_0x180648ae0(uint64_t *param_1,uint param_2,uint param_3,char **param_4,int *param_5)
{
  func_ptr_t fnPtr_1;
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  char ch_5;
  uint uVal_6;
  int iVal_7;
  int iVal_8;
  uint64_t uVal_9;
  uint **ptr2_U64_10;
  uint64_t uVal_11;
  char *fnPtr_12;
  uint *pU64_13;
  sbyte sz_14;
  byte bFlag_15;
  byte bFlag_16;
  byte bFlag_17;
  uint64_t uVal_18;
  uint *pU64_19;
  int64_t lVal_20;
  char *fnPtr_21;
  char ch_22;
  uint *pU64_23;
  uint uVal_24;
  int iVal_25;
  int iVal_26;
  int iVal_27;
  uint uVal_28;
  uint *pU64_29;
  int64_t lVal_30;
  int64_t lVal_31;
  int64_t lVal_32;
  uint64_t uVal_33;
  int iVal_34;
  int64_t lVal_35;
  uint *pU64_36;
  uint uVal_37;
  bool bFlag_38;
  bool bFlag_39;
  bool bFlag_40;
  char *local_3a0;
  uint8_t local_398;
  uint **local_390;
  uint **local_388;
  uint *local_380;
  uint8_t **local_378;
  uint8_t auStack_370 [16];
  uint *local_360;
  uint *local_358;
  uint *local_350;
  func_ptr_t local_348;
  uint local_340 [34];
  int local_2b8;
  uint **local_2b0;
  uint **local_2a8;
  uint *local_2a0;
  uint *local_298;
  uint *local_290;
  func_ptr_t local_288;
  uint local_280 [34];
  int local_1f8;
  uint *local_1f0;
  uint64_t local_1e8;
  uint64_t local_1e0;
  func_ptr_t local_1d8;
  uint local_1d0 [34];
  int local_148;
  char *local_140;
  uint *local_138;
  uint64_t local_130;
  uint *local_128;
  uint *local_120;
  uint *local_118;
  func_ptr_t local_110;
  uint local_108 [34];
  int local_80;
  uint *local_78;
  uint local_6c;
  uint64_t local_68;
  uint local_5c;
  uint **local_58;
  char **local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  pU64_23 = (uint *)(uint64_t)param_3;
  local_120 = (uint *)0x0;
  local_110 = func_0x180647f60;
  local_128 = local_108;
  local_118 = (uint *)0x20;
  local_80 = 0;
  local_1e8 = 0;
  local_1d8 = func_0x180647f60;
  local_1f0 = local_1d0;
  local_1e0 = 0x20;
  local_148 = 0;
  local_298 = (uint *)0x0;
  local_288 = func_0x180647f60;
  local_2a0 = local_280;
  local_290 = (uint *)0x20;
  local_1f8 = 0;
  local_358 = (uint *)0x0;
  local_348 = func_0x180647f60;
  local_360 = local_340;
  local_350 = (uint *)0x20;
  local_2b8 = 0;
  local_68 = (uint *)CONCAT44(local_68._4_4_,param_2);
  param_2 = param_2 & 1;
  iVal_7 = param_2 + 1;
  sz_14 = (sbyte)iVal_7;
  bFlag_16 = (byte)param_2;
  local_50 = param_4;
  if ((int)*(uint *)(param_1 + 2) < 0) {
    if (*param_5 < 0) {
      func_0x18064ab50(&local_128,-*param_5);
      pU64_36 = local_120;
      if (local_290 < local_120) {
        (*local_288)(&local_2a0,local_120);
        local_298 = local_290;
        if (pU64_36 < local_290) {
          local_298 = pU64_36;
        }
LAB_18064924c:
        uVal_9 = (int64_t)(local_128 + (int64_t)pU64_36) + (-4 - (int64_t)local_128);
        pU64_13 = local_128;
        pU64_29 = local_2a0;
        if ((0x1b < uVal_9) && (0x1f < (uint64_t)((int64_t)local_2a0 - (int64_t)local_128))) {
          uVal_18 = (uVal_9 >> 2) + 1;
          uVal_11 = uVal_18 & 0xfffffffffffffff8;
          uVal_9 = 0;
          do {
            pU64_13 = local_128 + uVal_9;
            uVal_24 = pU64_13[1];
            uVal_6 = pU64_13[2];
            uVal_28 = pU64_13[3];
            pU64_29 = local_128 + uVal_9 + 4;
            uVal_37 = *pU64_29;
            uVal_2 = pU64_29[1];
            uVal_3 = pU64_29[2];
            uVal_4 = pU64_29[3];
            pU64_29 = local_2a0 + uVal_9;
            *pU64_29 = *pU64_13;
            pU64_29[1] = uVal_24;
            pU64_29[2] = uVal_6;
            pU64_29[3] = uVal_28;
            pU64_13 = local_2a0 + uVal_9 + 4;
            *pU64_13 = uVal_37;
            pU64_13[1] = uVal_2;
            pU64_13[2] = uVal_3;
            pU64_13[3] = uVal_4;
            uVal_9 = uVal_9 + 8;
          } while (uVal_11 != uVal_9);
          pU64_13 = local_128 + uVal_11;
          pU64_29 = local_2a0 + uVal_11;
          if (uVal_18 == uVal_11) goto LAB_1806492e2;
        }
        do {
          pU64_19 = pU64_13 + 1;
          *pU64_29 = *pU64_13;
          pU64_13 = pU64_19;
          pU64_29 = pU64_29 + 1;
        } while (pU64_19 != local_128 + (int64_t)pU64_36);
      }
      else {
        local_298 = local_120;
        if (local_120 != (uint *)0x0) goto LAB_18064924c;
      }
LAB_1806492e2:
      pU64_36 = local_120;
      local_1f8 = local_80;
      if (param_2 == 0) {
        local_58 = (uint **)0x0;
      }
      else {
        if (local_350 < local_120) {
          (*local_348)(&local_360,local_120);
          local_358 = local_350;
          if (pU64_36 < local_350) {
            local_358 = pU64_36;
          }
        }
        else {
          local_358 = local_120;
          if (local_120 == (uint *)0x0) {
            local_2b8 = local_80;
            local_58 = &local_360;
            goto LAB_18064962f;
          }
        }
        uVal_9 = (int64_t)(local_128 + (int64_t)pU64_36) + (-4 - (int64_t)local_128);
        pU64_13 = local_128;
        pU64_29 = local_360;
        if ((uVal_9 < 0x1c) || ((uint64_t)((int64_t)local_360 - (int64_t)local_128) < 0x20)) {
LAB_180649550:
          do {
            pU64_19 = pU64_13 + 1;
            *pU64_29 = *pU64_13;
            pU64_13 = pU64_19;
            pU64_29 = pU64_29 + 1;
          } while (pU64_19 != local_128 + (int64_t)pU64_36);
        }
        else {
          uVal_18 = (uVal_9 >> 2) + 1;
          uVal_11 = uVal_18 & 0xfffffffffffffff8;
          uVal_9 = 0;
          do {
            pU64_13 = local_128 + uVal_9;
            uVal_24 = pU64_13[1];
            uVal_6 = pU64_13[2];
            uVal_28 = pU64_13[3];
            pU64_29 = local_128 + uVal_9 + 4;
            uVal_37 = *pU64_29;
            uVal_2 = pU64_29[1];
            uVal_3 = pU64_29[2];
            uVal_4 = pU64_29[3];
            pU64_29 = local_360 + uVal_9;
            *pU64_29 = *pU64_13;
            pU64_29[1] = uVal_24;
            pU64_29[2] = uVal_6;
            pU64_29[3] = uVal_28;
            pU64_13 = local_360 + uVal_9 + 4;
            *pU64_13 = uVal_37;
            pU64_13[1] = uVal_2;
            pU64_13[2] = uVal_3;
            pU64_13[3] = uVal_4;
            uVal_9 = uVal_9 + 8;
          } while (uVal_11 != uVal_9);
          pU64_13 = local_128 + uVal_11;
          pU64_29 = local_360 + uVal_11;
          if (uVal_18 != uVal_11) goto LAB_180649550;
        }
        local_2b8 = local_80;
        local_58 = &local_360;
        if (local_358 != (uint *)0x0) {
          if (local_358 == (uint *)0x1) {
            uVal_9 = 0;
            uVal_24 = 0;
LAB_1806495d6:
            uVal_28 = local_360[uVal_9];
            uVal_6 = uVal_24 + uVal_28 * 2;
            uVal_24 = uVal_28 >> 0x1f;
            local_360[uVal_9] = uVal_6;
          }
          else {
            uVal_9 = 0;
            uVal_24 = 0;
            do {
              uVal_6 = local_360[uVal_9];
              local_360[uVal_9] = uVal_24 + uVal_6 * 2;
              uVal_28 = local_360[uVal_9 + 1];
              uVal_24 = uVal_28 >> 0x1f;
              local_360[uVal_9 + 1] = uVal_6 >> 0x1f | uVal_28 << 1;
              uVal_9 = uVal_9 + 2;
            } while (((uint64_t)local_358 & 0xfffffffffffffffe) != uVal_9);
            if (((uint64_t)local_358 & 1) != 0) goto LAB_1806495d6;
          }
          if ((int)uVal_28 < 0) {
            pU64_36 = (uint *)((int64_t)local_358 + 1);
            if (local_350 < pU64_36) {
              (*local_348)(&local_360);
              pU64_36 = (uint *)((int64_t)local_358 + 1);
            }
            local_360[(int64_t)local_358] = uVal_24;
            local_358 = pU64_36;
          }
        }
      }
LAB_18064962f:
      local_378 = (uint8_t **)*param_1;
      auStack_370._0_8_ = param_1[1];
      func_0x18064b630(&local_128,&local_378);
      if (local_120 != (uint *)0x0) {
        bFlag_16 = bFlag_16 ^ 0x1f;
        if (local_120 == (uint *)0x1) {
          uVal_9 = 0;
          uVal_24 = 0;
LAB_1806496d1:
          uVal_6 = local_128[uVal_9];
          local_128[uVal_9] = (uVal_6 << sz_14) + uVal_24;
          uVal_24 = uVal_6 >> bFlag_16;
        }
        else {
          uVal_9 = 0;
          uVal_24 = 0;
          do {
            uVal_6 = local_128[uVal_9];
            local_128[uVal_9] = (uVal_6 << sz_14) + uVal_24;
            uVal_24 = local_128[uVal_9 + 1] >> bFlag_16;
            local_128[uVal_9 + 1] = (local_128[uVal_9 + 1] << sz_14) + (uVal_6 >> bFlag_16);
            uVal_9 = uVal_9 + 2;
          } while (((uint64_t)local_120 & 0xfffffffffffffffe) != uVal_9);
          if (((uint64_t)local_120 & 1) != 0) goto LAB_1806496d1;
        }
        if (uVal_24 != 0) {
          pU64_36 = (uint *)((int64_t)local_120 + 1);
          pU64_13 = local_120;
          if (local_118 < pU64_36) {
            (*local_110)(&local_128);
            pU64_36 = (uint *)((int64_t)local_120 + 1);
            pU64_13 = local_120;
          }
          local_120 = pU64_36;
          local_128[(int64_t)pU64_13] = uVal_24;
        }
      }
      *local_1f0 = 1;
      uVal_9 = 1;
      if (local_1e0 == 0) {
        (*local_1d8)(&local_1f0,1);
        uVal_9 = (uint64_t)(local_1e0 != 0);
      }
      local_1e8 = uVal_9;
      iVal_7 = iVal_7 - *(uint *)(param_1 + 2);
      iVal_8 = iVal_7 + 0x1f;
      if (-1 < iVal_7) {
        iVal_8 = iVal_7;
      }
      local_148 = iVal_8 >> 5;
      if ((uVal_9 != 0) && (iVal_7 % 0x20 != 0)) {
        uVal_24 = *local_1f0;
        bFlag_17 = (byte)(iVal_7 % 0x20);
        bFlag_16 = -bFlag_17 & 0x1f;
        uVal_6 = uVal_24 >> bFlag_16;
        *local_1f0 = uVal_24 << (bFlag_17 & 0x1f);
        if (uVal_24 >> bFlag_16 != 0) {
          uVal_18 = uVal_9 + 1;
          if (local_1e0 < uVal_18) {
            (*local_1d8)(&local_1f0);
            goto LAB_18064909d;
          }
          goto LAB_1806490a8;
        }
      }
    }
    else {
      uVal_9 = *param_1;
      uVal_18 = param_1[1];
      pU64_36 = (uint *)0x0;
      do {
        local_128[(int64_t)pU64_36] = (uint)uVal_9;
        pU64_36 = (uint *)((int64_t)pU64_36 + 1);
        uVal_9 = uVal_9 >> 0x20 | uVal_18 << 0x20;
        uVal_18 = uVal_18 >> 0x20;
      } while ((uVal_18 | uVal_9) != 0);
      if ((uint *)0x20 < pU64_36) {
        func_0x180647f60(&local_128);
      }
      local_120 = local_118;
      if (pU64_36 < local_118) {
        local_120 = pU64_36;
      }
      local_80 = 0;
      if (local_120 != (uint *)0x0) {
        bFlag_16 = bFlag_16 ^ 0x1f;
        if (local_120 == (uint *)0x1) {
          uVal_9 = 0;
          uVal_24 = 0;
LAB_180649170:
          uVal_6 = local_128[uVal_9];
          local_128[uVal_9] = (uVal_6 << sz_14) + uVal_24;
          uVal_24 = uVal_6 >> bFlag_16;
        }
        else {
          if (local_118 < pU64_36) {
            pU64_36 = local_118;
          }
          uVal_9 = 0;
          uVal_24 = 0;
          do {
            uVal_6 = local_128[uVal_9];
            local_128[uVal_9] = (uVal_6 << sz_14) + uVal_24;
            uVal_24 = local_128[uVal_9 + 1] >> bFlag_16;
            local_128[uVal_9 + 1] = (local_128[uVal_9 + 1] << sz_14) + (uVal_6 >> bFlag_16);
            uVal_9 = uVal_9 + 2;
          } while (((uint64_t)pU64_36 & 0xfffffffffffffffe) != uVal_9);
          if (((uint64_t)local_120 & 1) != 0) goto LAB_180649170;
        }
        if (uVal_24 != 0) {
          pU64_36 = (uint *)((int64_t)local_120 + 1);
          if (local_118 < pU64_36) {
            (*local_110)(&local_128);
            pU64_36 = (uint *)((int64_t)local_120 + 1);
          }
          local_128[(int64_t)local_120] = uVal_24;
          local_120 = pU64_36;
        }
      }
      func_0x18064ab50(&local_1f0);
      iVal_7 = iVal_7 - *(uint *)(param_1 + 2);
      iVal_8 = iVal_7 + 0x1f;
      if (-1 < iVal_7) {
        iVal_8 = iVal_7;
      }
      local_148 = local_148 + (iVal_8 >> 5);
      if ((iVal_7 % 0x20 != 0) && (local_1e8 != 0)) {
        bFlag_16 = (byte)(iVal_7 % 0x20);
        bFlag_17 = 0x20 - bFlag_16;
        if (local_1e8 == 1) {
          uVal_9 = 0;
          uVal_24 = 0;
LAB_1806493a2:
          uVal_6 = local_1f0[uVal_9];
          local_1f0[uVal_9] = (uVal_6 << (bFlag_16 & 0x1f)) + uVal_24;
          uVal_24 = uVal_6 >> (bFlag_17 & 0x1f);
        }
        else {
          uVal_9 = 0;
          uVal_24 = 0;
          do {
            uVal_6 = local_1f0[uVal_9];
            local_1f0[uVal_9] = (uVal_6 << (bFlag_16 & 0x1f)) + uVal_24;
            uVal_24 = local_1f0[uVal_9 + 1] >> (bFlag_17 & 0x1f);
            local_1f0[uVal_9 + 1] =
                 local_1f0[uVal_9 + 1] << (bFlag_16 & 0x1f) | uVal_6 >> (bFlag_17 & 0x1f);
            uVal_9 = uVal_9 + 2;
          } while ((local_1e8 & 0xfffffffffffffffe) != uVal_9);
          if ((local_1e8 & 1) != 0) goto LAB_1806493a2;
        }
        if (uVal_24 != 0) {
          uVal_9 = local_1e8 + 1;
          uVal_18 = local_1e8;
          if (local_1e0 < uVal_9) {
            (*local_1d8)(&local_1f0);
            uVal_9 = local_1e8 + 1;
            uVal_18 = local_1e8;
          }
          local_1e8 = uVal_9;
          local_1f0[uVal_18] = uVal_24;
        }
      }
      *local_2a0 = 1;
      if (local_290 == (uint *)0x0) {
        (*local_288)(&local_2a0,1);
        local_298 = (uint *)(uint64_t)(local_290 != (uint *)0x0);
        local_1f8 = 0;
      }
      else {
        local_298 = (uint *)0x1;
        local_1f8 = 0;
      }
      if (param_2 == 0) {
        local_1f8 = 0;
        local_58 = (uint **)0x0;
      }
      else {
        local_1f8 = 0;
        *local_360 = 2;
        pU64_36 = (uint *)0x1;
        if (local_350 == (uint *)0x0) {
          (*local_348)(&local_360,1);
          pU64_36 = (uint *)(uint64_t)(local_350 != (uint *)0x0);
        }
        local_358 = pU64_36;
        local_2b8 = 0;
        local_58 = &local_360;
      }
    }
  }
  else {
    uVal_9 = *param_1;
    uVal_18 = param_1[1];
    pU64_36 = (uint *)0x0;
    do {
      local_128[(int64_t)pU64_36] = (uint)uVal_9;
      pU64_36 = (uint *)((int64_t)pU64_36 + 1);
      uVal_9 = uVal_9 >> 0x20 | uVal_18 << 0x20;
      uVal_18 = uVal_18 >> 0x20;
    } while ((uVal_18 | uVal_9) != 0);
    if ((uint *)0x20 < pU64_36) {
      func_0x180647f60(&local_128,pU64_36);
    }
    local_120 = local_118;
    if (pU64_36 < local_118) {
      local_120 = pU64_36;
    }
    uVal_6 = *(uint *)(param_1 + 2) + iVal_7;
    uVal_24 = *(uint *)(param_1 + 2) + 0x1f + iVal_7;
    if (-1 < (int)uVal_6) {
      uVal_24 = uVal_6;
    }
    local_80 = (int)uVal_24 >> 5;
    if ((local_120 != (uint *)0x0) && (iVal_7 = uVal_6 - (uVal_24 & 0xffffffe0), iVal_7 != 0)) {
      bFlag_17 = (byte)iVal_7;
      bFlag_15 = 0x20 - bFlag_17;
      if (local_120 == (uint *)0x1) {
        uVal_9 = 0;
        uVal_24 = 0;
LAB_180648dc0:
        uVal_6 = local_128[uVal_9];
        local_128[uVal_9] = (uVal_6 << (bFlag_17 & 0x1f)) + uVal_24;
        uVal_24 = uVal_6 >> (bFlag_15 & 0x1f);
      }
      else {
        if (local_118 < pU64_36) {
          pU64_36 = local_118;
        }
        uVal_9 = 0;
        uVal_24 = 0;
        do {
          uVal_6 = local_128[uVal_9];
          local_128[uVal_9] = (uVal_6 << (bFlag_17 & 0x1f)) + uVal_24;
          uVal_24 = local_128[uVal_9 + 1] >> (bFlag_15 & 0x1f);
          local_128[uVal_9 + 1] = local_128[uVal_9 + 1] << (bFlag_17 & 0x1f) | uVal_6 >> (bFlag_15 & 0x1f);
          uVal_9 = uVal_9 + 2;
        } while (((uint64_t)pU64_36 & 0xfffffffffffffffe) != uVal_9);
        if (((uint64_t)local_120 & 1) != 0) goto LAB_180648dc0;
      }
      if (uVal_24 != 0) {
        pU64_36 = (uint *)((int64_t)local_120 + 1);
        if (local_118 < pU64_36) {
          (*local_110)(&local_128);
          pU64_36 = (uint *)((int64_t)local_120 + 1);
        }
        local_128[(int64_t)local_120] = uVal_24;
        local_120 = pU64_36;
      }
    }
    *local_2a0 = 1;
    pU64_36 = (uint *)0x1;
    if (local_290 == (uint *)0x0) {
      (*local_288)(&local_2a0,1);
      pU64_36 = (uint *)(uint64_t)(local_290 != (uint *)0x0);
    }
    local_298 = pU64_36;
    uVal_24 = *(uint *)(param_1 + 2);
    uVal_6 = uVal_24 + 0x1f;
    if (-1 < (int)uVal_24) {
      uVal_6 = uVal_24;
    }
    local_1f8 = (int)uVal_6 >> 5;
    if ((local_298 != (uint *)0x0) && ((int)uVal_24 % 0x20 != 0)) {
      bFlag_17 = (byte)((int)uVal_24 % 0x20);
      uVal_24 = *local_2a0 >> (-bFlag_17 & 0x1f);
      *local_2a0 = *local_2a0 << (bFlag_17 & 0x1f);
      if (uVal_24 != 0) {
        pU64_36 = (uint *)((int64_t)local_298 + 1);
        if (local_290 < pU64_36) {
          (*local_288)(&local_2a0);
          pU64_36 = (uint *)((int64_t)local_298 + 1);
        }
        local_2a0[(int64_t)local_298] = uVal_24;
        local_298 = pU64_36;
      }
    }
    if (param_2 == 0) {
      local_58 = (uint **)0x0;
    }
    else {
      *local_360 = 1;
      pU64_36 = (uint *)0x1;
      if (local_350 == (uint *)0x0) {
        (*local_348)(&local_360,1);
        pU64_36 = (uint *)(uint64_t)(local_350 != (uint *)0x0);
      }
      local_358 = pU64_36;
      uVal_24 = *(uint *)(param_1 + 2);
      uVal_6 = uVal_24 + 0x20;
      if (-1 < (int)(uVal_24 + 1)) {
        uVal_6 = uVal_24 + 1;
      }
      local_2b8 = (int)uVal_6 >> 5;
      local_58 = &local_360;
      if ((local_358 != (uint *)0x0) && (iVal_7 = (uVal_24 - (uVal_6 & 0xffffffe0)) + 1, iVal_7 != 0)) {
        bFlag_17 = (byte)iVal_7;
        uVal_24 = *local_360 >> (-bFlag_17 & 0x1f);
        *local_360 = *local_360 << (bFlag_17 & 0x1f);
        if (uVal_24 != 0) {
          pU64_36 = (uint *)((int64_t)local_358 + 1);
          if (local_350 < pU64_36) {
            (*local_348)(&local_360);
            pU64_36 = (uint *)((int64_t)local_358 + 1);
          }
          local_360[(int64_t)local_358] = uVal_24;
          local_358 = pU64_36;
        }
      }
    }
    func_0x18064ab50(&local_1f0,*param_5);
    if (local_1e8 == 0) goto LAB_1806497e8;
    bFlag_16 = bFlag_16 ^ 0x1f;
    if (local_1e8 == 1) {
      uVal_9 = 0;
      uVal_6 = 0;
LAB_180649051:
      uVal_24 = local_1f0[uVal_9];
      local_1f0[uVal_9] = (uVal_24 << sz_14) + uVal_6;
      uVal_6 = uVal_24 >> bFlag_16;
    }
    else {
      uVal_9 = 0;
      uVal_6 = 0;
      do {
        uVal_24 = local_1f0[uVal_9];
        local_1f0[uVal_9] = (uVal_24 << sz_14) + uVal_6;
        uVal_6 = local_1f0[uVal_9 + 1] >> bFlag_16;
        local_1f0[uVal_9 + 1] = (local_1f0[uVal_9 + 1] << sz_14) + (uVal_24 >> bFlag_16);
        uVal_9 = uVal_9 + 2;
      } while ((local_1e8 & 0xfffffffffffffffe) != uVal_9);
      if ((local_1e8 & 1) != 0) goto LAB_180649051;
    }
    if (uVal_6 != 0) {
      uVal_18 = local_1e8 + 1;
      uVal_9 = local_1e8;
      if (local_1e0 < uVal_18) {
        (*local_1d8)(&local_1f0);
LAB_18064909d:
        uVal_18 = local_1e8 + 1;
        uVal_9 = local_1e8;
      }
LAB_1806490a8:
      local_1e8 = uVal_18;
      local_1f0[uVal_9] = uVal_6;
    }
  }
LAB_1806497e8:
  uVal_24 = *(uint *)param_1 & 1;
  local_6c = uVal_24 ^ 1;
  local_2a8 = local_58;
  if (local_58 == (uint **)0x0) {
    local_2a8 = &local_2a0;
  }
  local_5c = uVal_24;
  if (((uint64_t)local_68 & 2) != 0) {
    local_78 = pU64_23;
    ptr2_U64_10 = local_58;
    if (local_58 == (uint **)0x0) {
      ptr2_U64_10 = &local_2a0;
    }
    iVal_7 = *(int *)(ptr2_U64_10 + 0x15);
    lVal_20 = (int64_t)iVal_7;
    lVal_30 = (int64_t)local_80;
    lVal_31 = (int)local_120 + lVal_30;
    iVal_25 = (int)lVal_31;
    iVal_8 = (int)(*(int *)(ptr2_U64_10 + 1) + lVal_20);
    if (iVal_8 < iVal_25) {
      iVal_8 = iVal_25;
    }
    lVal_32 = (int64_t)local_148;
    iVal_25 = (int)local_1e8;
    iVal_27 = (int)(iVal_25 + lVal_32);
    if (iVal_8 + 1 < iVal_27) {
      iVal_8 = -1;
    }
    else if (iVal_27 < iVal_8) {
      iVal_8 = 1;
    }
    else {
      if (local_80 < iVal_7) {
        iVal_7 = local_80;
      }
      if (local_148 <= iVal_7) {
        iVal_7 = local_148;
      }
      iVal_8 = 0;
      if (iVal_7 < iVal_27) {
        local_138 = local_128 + (-1 - lVal_30);
        local_130 = *local_2a8 + (-1 - lVal_20);
        pU64_36 = local_1f0 + iVal_25;
        lVal_35 = iVal_25 + lVal_32;
        uVal_9 = 0;
        do {
          pU64_36 = pU64_36 + -1;
          if (lVal_30 < lVal_35) {
            uVal_18 = 0;
            if (lVal_35 <= lVal_31) {
              uVal_18 = (uint64_t)local_138[lVal_35];
            }
            if (lVal_20 < lVal_35) goto LAB_18064995f;
LAB_1806499ae:
            uVal_11 = 0;
          }
          else {
            uVal_18 = 0;
            if (lVal_35 <= lVal_20) goto LAB_1806499ae;
LAB_18064995f:
            uVal_11 = 0;
            if (lVal_35 <= *(int *)(ptr2_U64_10 + 1) + lVal_20) {
              uVal_11 = (uint64_t)local_130[lVal_35];
            }
          }
          uVal_33 = uVal_9;
          if ((lVal_32 < lVal_35) && (lVal_35 <= iVal_25 + lVal_32)) {
            uVal_33 = uVal_9 | *pU64_36;
          }
          uVal_11 = uVal_11 + uVal_18;
          if (uVal_33 < uVal_11) {
            iVal_8 = 1;
            goto LAB_1806499e2;
          }
          if (1 < uVal_33 - uVal_11) {
            iVal_8 = -1;
            goto LAB_1806499e2;
          }
          lVal_35 = lVal_35 + -1;
          uVal_9 = uVal_33 - uVal_11 << 0x20;
        } while (iVal_7 < lVal_35);
        iVal_8 = -(uint)(uVal_33 != uVal_11);
      }
    }
LAB_1806499e2:
    if (iVal_8 + local_6c == 0 || SCARRY4(iVal_8,local_6c) != (int)(iVal_8 + local_6c) < 0) {
      *param_5 = *param_5 + -1;
      if (local_120 != (uint *)0x0) {
        if (local_120 == (uint *)0x1) {
          uVal_18 = 0;
          uVal_9 = 0;
LAB_180649a65:
          uVal_9 = uVal_9 + (uint64_t)local_128[uVal_18] * 10;
          local_128[uVal_18] = (uint)uVal_9;
          uVal_9 = uVal_9 >> 0x20;
        }
        else {
          uVal_18 = 0;
          uVal_9 = 0;
          do {
            uVal_9 = uVal_9 + (uint64_t)local_128[uVal_18] * 10;
            local_128[uVal_18] = (uint)uVal_9;
            uVal_9 = (uVal_9 >> 0x20) + (uint64_t)local_128[uVal_18 + 1] * 10;
            local_128[uVal_18 + 1] = (uint)uVal_9;
            uVal_9 = uVal_9 >> 0x20;
            uVal_18 = uVal_18 + 2;
          } while (((uint64_t)local_120 & 0xfffffffffffffffe) != uVal_18);
          if (((uint64_t)local_120 & 1) != 0) goto LAB_180649a65;
        }
        if (uVal_9 != 0) {
          pU64_36 = (uint *)((int64_t)local_120 + 1);
          if (local_118 < pU64_36) {
            (*local_110)(&local_128);
            pU64_36 = (uint *)((int64_t)local_120 + 1);
          }
          local_128[(int64_t)local_120] = (uint)uVal_9;
          local_120 = pU64_36;
        }
      }
      if ((int)param_3 < 0) {
        if (local_298 != (uint *)0x0) {
          if (local_298 == (uint *)0x1) {
            uVal_18 = 0;
            uVal_9 = 0;
LAB_18064a726:
            uVal_9 = uVal_9 + (uint64_t)local_2a0[uVal_18] * 10;
            local_2a0[uVal_18] = (uint)uVal_9;
            uVal_9 = uVal_9 >> 0x20;
          }
          else {
            uVal_18 = 0;
            uVal_9 = 0;
            do {
              uVal_9 = uVal_9 + (uint64_t)local_2a0[uVal_18] * 10;
              local_2a0[uVal_18] = (uint)uVal_9;
              uVal_9 = (uVal_9 >> 0x20) + (uint64_t)local_2a0[uVal_18 + 1] * 10;
              local_2a0[uVal_18 + 1] = (uint)uVal_9;
              uVal_9 = uVal_9 >> 0x20;
              uVal_18 = uVal_18 + 2;
            } while (((uint64_t)local_298 & 0xfffffffffffffffe) != uVal_18);
            if (((uint64_t)local_298 & 1) != 0) goto LAB_18064a726;
          }
          if (uVal_9 != 0) {
            pU64_36 = (uint *)((int64_t)local_298 + 1);
            if (local_290 < pU64_36) {
              (*local_288)(&local_2a0);
              pU64_36 = (uint *)((int64_t)local_298 + 1);
            }
            local_2a0[(int64_t)local_298] = (uint)uVal_9;
            local_298 = pU64_36;
          }
        }
        if ((local_58 != (uint **)0x0) && (pU64_36 = local_58[1], pU64_36 != (uint *)0x0)) {
          if (pU64_36 == (uint *)0x1) {
            uVal_18 = 0;
            uVal_9 = 0;
LAB_18064a9fe:
            uVal_9 = uVal_9 + (uint64_t)(*local_58)[uVal_18] * 10;
            (*local_58)[uVal_18] = (uint)uVal_9;
            uVal_9 = uVal_9 >> 0x20;
          }
          else {
            uVal_18 = 0;
            uVal_9 = 0;
            do {
              uVal_9 = uVal_9 + (uint64_t)(*local_58)[uVal_18] * 10;
              (*local_58)[uVal_18] = (uint)uVal_9;
              uVal_9 = (uVal_9 >> 0x20) + (uint64_t)(*local_58)[uVal_18 + 1] * 10;
              (*local_58)[uVal_18 + 1] = (uint)uVal_9;
              uVal_9 = uVal_9 >> 0x20;
              uVal_18 = uVal_18 + 2;
            } while (((uint64_t)pU64_36 & 0xfffffffffffffffe) != uVal_18);
            if (((uint64_t)pU64_36 & 1) != 0) goto LAB_18064a9fe;
          }
          if (uVal_9 != 0) {
            pU64_13 = local_58[1];
            pU64_36 = (uint *)((int64_t)pU64_13 + 1);
            if (local_58[2] < pU64_36) {
              (*(func_ptr_t )local_58[3])();
              pU64_13 = local_58[1];
              pU64_36 = (uint *)((int64_t)pU64_13 + 1);
            }
            local_58[1] = pU64_36;
            (*local_58)[(int64_t)pU64_13] = (uint)uVal_9;
          }
        }
      }
    }
    if (((uint64_t)local_68 & 4) != 0) {
      iVal_7 = *param_5;
      if (0x7ffffffe - iVal_7 < (int)param_3 && -1 < iVal_7) {
        local_378 = std::exception::vftable;
        auStack_370 = ZEXT816(0);
        local_3a0 = "number is too big";
        local_398 = 1;
        func_0x18067b3f0(&local_3a0,auStack_370);
        local_378 = &PTR_FUN_1806b0aa8;
        func_0x18067a120(&local_378,&DAT_180768d70);
        fnPtr_1 = (func_ptr_t )swi(3);
        (*fnPtr_1)();
        return;
      }
      pU64_23 = (uint *)(uint64_t)(param_3 + iVal_7 + 1);
    }
  }
  if ((int)param_3 < 0) {
    local_2b0 = local_58 + 1;
    local_390 = &local_298;
    if (local_58 != (uint **)0x0) {
      local_390 = local_2b0;
    }
    local_140 = *local_50;
    local_388 = local_58;
    if (local_58 == (uint **)0x0) {
      local_388 = &local_2a0;
    }
    pU64_23 = (uint *)0x0;
LAB_180649deb:
    do {
      uVal_6 = func_0x18064ade0(&local_128,&local_1f0);
      local_78 = (uint *)(uint64_t)uVal_6;
      lVal_20 = (int64_t)local_80;
      iVal_25 = (int)local_120;
      iVal_27 = (int)local_298;
      iVal_7 = local_1f8 + iVal_27;
      iVal_8 = (int)(iVal_25 + lVal_20);
      bFlag_40 = SBORROW4(iVal_8,iVal_7);
      bFlag_39 = iVal_8 - iVal_7 < 0;
      bFlag_38 = iVal_8 == iVal_7;
      if (bFlag_38) {
        uVal_28 = iVal_25 - iVal_27;
        if ((int)uVal_28 < 1) {
          uVal_28 = 0;
        }
        uVal_18 = (uint64_t)uVal_28;
        uVal_11 = (uint64_t)iVal_25;
        uVal_33 = (uint64_t)iVal_27;
        uVal_9 = uVal_18;
        if ((int64_t)uVal_11 < (int64_t)uVal_18) {
          uVal_9 = uVal_11;
        }
        do {
          if ((int64_t)uVal_11 <= (int64_t)uVal_18) {
            uVal_28 = 0;
            bFlag_40 = SBORROW8(uVal_9,uVal_33);
            bFlag_39 = (int64_t)(uVal_9 - uVal_33) < 0;
            bFlag_38 = uVal_9 == uVal_33;
            if (!bFlag_38) goto LAB_180649eba;
            goto LAB_180649ec7;
          }
          lVal_30 = uVal_11 - 1;
          uVal_11 = uVal_11 - 1;
          lVal_31 = uVal_33 - 1;
          uVal_33 = uVal_33 - 1;
        } while (local_128[lVal_30] == local_2a0[lVal_31]);
        uVal_28 = (local_2a0[lVal_31] < local_128[lVal_30]) - 1 | 1;
      }
      else {
LAB_180649eba:
        uVal_28 = (uint)(!bFlag_38 && bFlag_40 == bFlag_39) * 2 - 1;
      }
LAB_180649ec7:
      local_130 = (uint *)CONCAT44(local_130._4_4_,uVal_28);
      iVal_7 = *(int *)(local_388 + 0x15);
      lVal_30 = (int64_t)iVal_7;
      iVal_27 = (int)(*(int *)local_390 + lVal_30);
      if (iVal_27 < iVal_8) {
        iVal_27 = iVal_8;
      }
      lVal_31 = (int64_t)local_148;
      iVal_26 = (int)local_1e8;
      local_68._0_4_ = (int)pU64_23;
      iVal_8 = (int)local_68;
      iVal_34 = (int)(iVal_26 + lVal_31);
      ch_5 = (char)uVal_6;
      local_138 = pU64_23;
      local_68 = pU64_23;
      if (iVal_27 + 1 < iVal_34) {
        iVal_27 = -1;
LAB_180649f27:
        uVal_37 = (int)local_68 + 1;
        pU64_36 = (uint *)(uint64_t)uVal_37;
        local_140[(int64_t)pU64_23] = ch_5 + '0';
        if (((int)uVal_28 < (int)local_6c) || ((int)uVal_24 <= iVal_27)) {
          bFlag_38 = iVal_27 < (int)uVal_24;
          if ((int)uVal_28 < (int)local_6c) {
            if ((int)uVal_24 <= iVal_27) goto LAB_18064a128;
            bFlag_39 = false;
            goto LAB_18064a513;
          }
          goto LAB_18064a500;
        }
        if (local_120 != (uint *)0x0) {
          if (local_120 == (uint *)0x1) {
            uVal_18 = 0;
            uVal_9 = 0;
LAB_18064a1d6:
            uVal_9 = uVal_9 + (uint64_t)local_128[uVal_18] * 10;
            local_128[uVal_18] = (uint)uVal_9;
            uVal_9 = uVal_9 >> 0x20;
          }
          else {
            uVal_18 = 0;
            uVal_9 = 0;
            do {
              uVal_9 = uVal_9 + (uint64_t)local_128[uVal_18] * 10;
              local_128[uVal_18] = (uint)uVal_9;
              uVal_9 = (uVal_9 >> 0x20) + (uint64_t)local_128[uVal_18 + 1] * 10;
              local_128[uVal_18 + 1] = (uint)uVal_9;
              uVal_9 = uVal_9 >> 0x20;
              uVal_18 = uVal_18 + 2;
            } while (((uint64_t)local_120 & 0xfffffffffffffffe) != uVal_18);
            if (((uint64_t)local_120 & 1) != 0) goto LAB_18064a1d6;
          }
          if (uVal_9 != 0) {
            pU64_23 = (uint *)((int64_t)local_120 + 1);
            if (local_118 < pU64_23) {
              (*local_110)(&local_128);
              pU64_23 = (uint *)((int64_t)local_120 + 1);
            }
            local_128[(int64_t)local_120] = (uint)uVal_9;
            local_120 = pU64_23;
          }
        }
        if (local_298 != (uint *)0x0) {
          if (local_298 == (uint *)0x1) {
            uVal_18 = 0;
            uVal_9 = 0;
LAB_18064a2a6:
            uVal_9 = uVal_9 + (uint64_t)local_2a0[uVal_18] * 10;
            local_2a0[uVal_18] = (uint)uVal_9;
            uVal_9 = uVal_9 >> 0x20;
          }
          else {
            uVal_18 = 0;
            uVal_9 = 0;
            do {
              uVal_9 = uVal_9 + (uint64_t)local_2a0[uVal_18] * 10;
              local_2a0[uVal_18] = (uint)uVal_9;
              uVal_9 = (uVal_9 >> 0x20) + (uint64_t)local_2a0[uVal_18 + 1] * 10;
              local_2a0[uVal_18 + 1] = (uint)uVal_9;
              uVal_9 = uVal_9 >> 0x20;
              uVal_18 = uVal_18 + 2;
            } while (((uint64_t)local_298 & 0xfffffffffffffffe) != uVal_18);
            if (((uint64_t)local_298 & 1) != 0) goto LAB_18064a2a6;
          }
          if (uVal_9 != 0) {
            pU64_23 = (uint *)((int64_t)local_298 + 1);
            if (local_290 < pU64_23) {
              (*local_288)(&local_2a0);
              pU64_23 = (uint *)((int64_t)local_298 + 1);
            }
            local_2a0[(int64_t)local_298] = (uint)uVal_9;
            local_298 = pU64_23;
          }
        }
        pU64_23 = pU64_36;
        if (local_58 != (uint **)0x0) {
          pU64_13 = *local_2b0;
          pU64_23 = (uint *)(uint64_t)uVal_37;
          if (pU64_13 != (uint *)0x0) {
            if (pU64_13 == (uint *)0x1) {
              uVal_18 = 0;
              uVal_9 = 0;
LAB_18064a38e:
              uVal_9 = uVal_9 + (uint64_t)(*local_58)[uVal_18] * 10;
              (*local_58)[uVal_18] = (uint)uVal_9;
              uVal_9 = uVal_9 >> 0x20;
            }
            else {
              uVal_18 = 0;
              uVal_9 = 0;
              do {
                uVal_9 = uVal_9 + (uint64_t)(*local_58)[uVal_18] * 10;
                (*local_58)[uVal_18] = (uint)uVal_9;
                uVal_9 = (uVal_9 >> 0x20) + (uint64_t)(*local_58)[uVal_18 + 1] * 10;
                (*local_58)[uVal_18 + 1] = (uint)uVal_9;
                uVal_9 = uVal_9 >> 0x20;
                uVal_18 = uVal_18 + 2;
              } while (((uint64_t)pU64_13 & 0xfffffffffffffffe) != uVal_18);
              if (((uint64_t)pU64_13 & 1) != 0) goto LAB_18064a38e;
            }
            pU64_23 = pU64_36;
            if (uVal_9 != 0) {
              pU64_36 = local_58[1];
              pU64_23 = (uint *)((int64_t)pU64_36 + 1);
              if (local_58[2] < pU64_23) {
                (*(func_ptr_t )local_58[3])();
                pU64_36 = *local_2b0;
                pU64_23 = (uint *)((int64_t)pU64_36 + 1);
              }
              local_58[1] = pU64_23;
              (*local_58)[(int64_t)pU64_36] = (uint)uVal_9;
              pU64_23 = (uint *)(uint64_t)uVal_37;
            }
          }
        }
        goto LAB_180649deb;
      }
      uVal_24 = local_5c;
      if (iVal_27 <= iVal_34) {
        if (local_80 < iVal_7) {
          iVal_7 = local_80;
        }
        if (local_148 <= iVal_7) {
          iVal_7 = local_148;
        }
        iVal_27 = 0;
        if (iVal_7 < iVal_34) {
          local_380 = *local_2a8 + (-1 - lVal_30);
          pU64_36 = local_1f0 + iVal_26;
          lVal_32 = iVal_26 + lVal_31;
          uVal_9 = 0;
          do {
            pU64_36 = pU64_36 + -1;
            if (lVal_20 < lVal_32) {
              uVal_18 = 0;
              if (lVal_32 <= iVal_25 + lVal_20) {
                uVal_18 = (uint64_t)local_128[(lVal_32 + -1) - lVal_20];
              }
              if (lVal_30 < lVal_32) goto LAB_18064a0b9;
LAB_18064a118:
              uVal_11 = 0;
            }
            else {
              uVal_18 = 0;
              if (lVal_32 <= lVal_30) goto LAB_18064a118;
LAB_18064a0b9:
              uVal_11 = 0;
              if (lVal_32 <= *(int *)local_390 + lVal_30) {
                uVal_11 = (uint64_t)local_380[lVal_32];
              }
            }
            uVal_33 = uVal_9;
            if ((lVal_31 < lVal_32) && (lVal_32 <= iVal_26 + lVal_31)) {
              uVal_33 = uVal_9 | *pU64_36;
            }
            uVal_11 = uVal_11 + uVal_18;
            if (uVal_33 < uVal_11) goto LAB_180649fb5;
            if (1 < uVal_33 - uVal_11) {
              iVal_27 = -1;
              goto LAB_180649f27;
            }
            lVal_32 = lVal_32 + -1;
            uVal_9 = uVal_33 - uVal_11 << 0x20;
          } while (iVal_7 < lVal_32);
          iVal_27 = -(uint)(uVal_33 != uVal_11);
        }
        goto LAB_180649f27;
      }
LAB_180649fb5:
      pU64_36 = (uint *)(uint64_t)((int)local_68 + 1);
      local_140[(int64_t)pU64_23] = ch_5 + '0';
      if ((int)uVal_28 < (int)local_6c) {
LAB_18064a128:
        lVal_20 = (int64_t)local_80;
        lVal_30 = (int64_t)local_148;
        iVal_7 = (int)(iVal_25 + lVal_20);
        iVal_27 = (int)(iVal_26 + lVal_30);
        if (iVal_7 + 1 < iVal_27) {
          bFlag_39 = false;
        }
        else {
          if (iVal_27 < iVal_7) {
            bFlag_38 = false;
            goto LAB_18064a500;
          }
          iVal_7 = local_148;
          if (local_80 < local_148) {
            iVal_7 = local_80;
          }
          if (iVal_7 < iVal_27) {
            pU64_23 = local_1f0 + iVal_26;
            lVal_31 = iVal_26 + lVal_30;
            uVal_9 = 0;
            do {
              pU64_23 = pU64_23 + -1;
              if (lVal_20 < lVal_31) {
                uVal_18 = 0;
                if (lVal_31 <= iVal_25 + lVal_20) {
                  uVal_18 = (uint64_t)local_128[(lVal_31 + -1) - lVal_20] * 2;
                }
              }
              else {
                uVal_18 = 0;
              }
              uVal_11 = uVal_9;
              if ((lVal_30 < lVal_31) && (lVal_31 <= iVal_26 + lVal_30)) {
                uVal_11 = uVal_9 | *pU64_23;
              }
              if (uVal_11 < uVal_18) {
                bFlag_38 = false;
                goto LAB_18064a500;
              }
              if (1 < uVal_11 - uVal_18) {
                bFlag_39 = false;
                goto LAB_18064a513;
              }
              lVal_31 = lVal_31 + -1;
              uVal_9 = uVal_11 - uVal_18 << 0x20;
            } while (iVal_7 < lVal_31);
            bFlag_40 = uVal_11 != uVal_18;
          }
          else {
            bFlag_40 = false;
          }
          bFlag_39 = false;
          if ((uVal_6 & 1) != 0) {
            bFlag_39 = false;
            bFlag_38 = false;
            if (!bFlag_40) goto LAB_18064a500;
          }
        }
      }
      else {
        bFlag_38 = false;
LAB_18064a500:
        bFlag_39 = bFlag_38;
        (local_140 + -1)[(int64_t)pU64_36] = ch_5 + '1';
      }
LAB_18064a513:
      pU64_23 = (uint *)local_50[2];
      if (pU64_23 < pU64_36) {
        (*(func_ptr_t )local_50[3])(local_50,pU64_36);
        pU64_23 = (uint *)local_50[2];
      }
      if (pU64_36 < pU64_23) {
        pU64_23 = pU64_36;
      }
      local_50[1] = (char *)pU64_23;
      *param_5 = *param_5 - iVal_8;
      pU64_23 = pU64_36;
    } while (bFlag_39);
LAB_18064a8f3:
    if (local_360 == local_340) goto LAB_18064a905;
  }
  else {
    iVal_7 = (int)pU64_23;
    lVal_20 = (int64_t)iVal_7 + -1;
    *param_5 = *param_5 - (int)lVal_20;
    if (0 < iVal_7) {
      pU64_36 = (uint *)local_50[2];
      if (pU64_36 < pU64_23) {
        (*(func_ptr_t )local_50[3])(local_50,pU64_23);
        pU64_36 = (uint *)local_50[2];
      }
      if (pU64_23 < pU64_36) {
        pU64_36 = pU64_23;
      }
      local_50[1] = (char *)pU64_36;
      for (uVal_9 = 0; (int)uVal_9 < (int)lVal_20; uVal_9 = (uint64_t)((int)uVal_9 + 1)) {
        ch_5 = func_0x18064ade0(&local_128,&local_1f0);
        (*local_50)[uVal_9] = ch_5 + '0';
        if (local_120 != (uint *)0x0) {
          if (local_120 == (uint *)0x1) {
            uVal_11 = 0;
            uVal_18 = 0;
LAB_180649c16:
            uVal_18 = uVal_18 + (uint64_t)local_128[uVal_11] * 10;
            local_128[uVal_11] = (uint)uVal_18;
            uVal_18 = uVal_18 >> 0x20;
          }
          else {
            uVal_11 = 0;
            uVal_18 = 0;
            do {
              uVal_18 = uVal_18 + (uint64_t)local_128[uVal_11] * 10;
              local_128[uVal_11] = (uint)uVal_18;
              uVal_18 = (uVal_18 >> 0x20) + (uint64_t)local_128[uVal_11 + 1] * 10;
              local_128[uVal_11 + 1] = (uint)uVal_18;
              uVal_18 = uVal_18 >> 0x20;
              uVal_11 = uVal_11 + 2;
            } while (((uint64_t)local_120 & 0xfffffffffffffffe) != uVal_11);
            if (((uint64_t)local_120 & 1) != 0) goto LAB_180649c16;
          }
          if (uVal_18 != 0) {
            pU64_36 = (uint *)((int64_t)local_120 + 1);
            if (local_118 < pU64_36) {
              (*local_110)(&local_128);
              pU64_36 = (uint *)((int64_t)local_120 + 1);
            }
            local_128[(int64_t)local_120] = (uint)uVal_18;
            local_120 = pU64_36;
          }
        }
      }
      uVal_24 = func_0x18064ade0(&local_128,&local_1f0);
      lVal_30 = (int64_t)local_80;
      lVal_31 = (int64_t)local_148;
      iVal_27 = (int)local_1e8;
      iVal_8 = (int)((int)local_120 + lVal_30);
      iVal_25 = (int)(iVal_27 + lVal_31);
      if (iVal_25 <= iVal_8 + 1) {
        if (iVal_8 <= iVal_25) {
          iVal_8 = local_148;
          if (local_80 < local_148) {
            iVal_8 = local_80;
          }
          if (iVal_8 < iVal_25) {
            local_78 = local_128 + (-1 - lVal_30);
            pU64_36 = local_1f0 + iVal_27;
            lVal_32 = iVal_27 + lVal_31;
            uVal_9 = 0;
            do {
              pU64_36 = pU64_36 + -1;
              if (lVal_30 < lVal_32) {
                uVal_18 = 0;
                if (lVal_32 <= (int)local_120 + lVal_30) {
                  uVal_18 = (uint64_t)local_78[lVal_32] * 2;
                }
              }
              else {
                uVal_18 = 0;
              }
              uVal_11 = uVal_9;
              if ((lVal_31 < lVal_32) && (lVal_32 <= iVal_27 + lVal_31)) {
                uVal_11 = uVal_9 | *pU64_36;
              }
              if (uVal_11 < uVal_18) goto LAB_18064a869;
              if (1 < uVal_11 - uVal_18) goto LAB_18064a8e3;
              lVal_32 = lVal_32 + -1;
              uVal_9 = uVal_11 - uVal_18 << 0x20;
            } while (iVal_8 < lVal_32);
            bFlag_38 = uVal_11 != uVal_18;
          }
          else {
            bFlag_38 = false;
          }
          if (((uVal_24 & 1) == 0) || (bFlag_38)) goto LAB_18064a8e3;
        }
LAB_18064a869:
        if (uVal_24 == 9) {
          (*local_50)[lVal_20] = ':';
          if (iVal_7 != 1) {
            iVal_8 = iVal_7 + 1;
            uVal_9 = (uint64_t)(iVal_7 - 1);
            do {
              if ((*local_50)[uVal_9] != ':') break;
              (*local_50)[uVal_9] = '0';
              (*local_50 + -2)[(int64_t)pU64_23] = (*local_50 + -2)[(int64_t)pU64_23] + '\x01';
              iVal_8 = iVal_8 + -1;
              uVal_9 = uVal_9 - 1;
              pU64_23 = (uint *)((int64_t)pU64_23 + -1);
            } while (2 < iVal_8);
          }
          if (**local_50 != ':') goto LAB_18064a8f3;
          **local_50 = '1';
          if (((uint64_t)local_68 & 4) == 0) {
            *param_5 = *param_5 + 1;
            if (local_360 == local_340) goto LAB_18064a905;
          }
          else {
            fnPtr_12 = local_50[1];
            fnPtr_21 = fnPtr_12 + 1;
            if (local_50[2] < fnPtr_21) {
              (*(func_ptr_t )local_50[3])();
              fnPtr_12 = local_50[1];
              fnPtr_21 = fnPtr_12 + 1;
            }
            local_50[1] = fnPtr_21;
            (*local_50)[(int64_t)fnPtr_12] = '0';
            if (local_360 == local_340) goto LAB_18064a905;
          }
          goto LAB_18064a900;
        }
        uVal_24 = uVal_24 + 1;
      }
LAB_18064a8e3:
      (*local_50)[lVal_20] = (char)uVal_24 + '0';
      goto LAB_18064a8f3;
    }
    ch_22 = '0';
    ch_5 = ch_22;
    if (iVal_7 == 0) {
      if (local_1e8 == 0) {
        uVal_9 = 0;
      }
      else {
        if (local_1e8 == 1) {
          uVal_9 = 0;
          uVal_18 = 0;
LAB_18064a5e6:
          uVal_18 = uVal_18 + (uint64_t)local_1f0[uVal_9] * 10;
          local_1f0[uVal_9] = (uint)uVal_18;
          uVal_18 = uVal_18 >> 0x20;
        }
        else {
          uVal_9 = 0;
          uVal_18 = 0;
          do {
            uVal_18 = uVal_18 + (uint64_t)local_1f0[uVal_9] * 10;
            local_1f0[uVal_9] = (uint)uVal_18;
            uVal_18 = (uVal_18 >> 0x20) + (uint64_t)local_1f0[uVal_9 + 1] * 10;
            local_1f0[uVal_9 + 1] = (uint)uVal_18;
            uVal_18 = uVal_18 >> 0x20;
            uVal_9 = uVal_9 + 2;
          } while ((local_1e8 & 0xfffffffffffffffe) != uVal_9);
          if ((local_1e8 & 1) != 0) goto LAB_18064a5e6;
        }
        uVal_9 = local_1e8;
        if (uVal_18 != 0) {
          uVal_9 = local_1e8 + 1;
          if (local_1e0 < uVal_9) {
            (*local_1d8)(&local_1f0);
            uVal_9 = local_1e8 + 1;
          }
          local_1f0[local_1e8] = (uint)uVal_18;
          local_1e8 = uVal_9;
        }
      }
      lVal_30 = (int64_t)local_80;
      lVal_20 = (int64_t)local_148;
      iVal_25 = (int)uVal_9;
      iVal_7 = (int)((int)local_120 + lVal_30);
      iVal_8 = (int)(iVal_25 + lVal_20);
      if (iVal_8 <= iVal_7 + 1) {
        if (iVal_8 < iVal_7) {
          ch_5 = '1';
        }
        else {
          iVal_7 = local_148;
          if (local_80 < local_148) {
            iVal_7 = local_80;
          }
          ch_5 = '0';
          if (iVal_7 < iVal_8) {
            pU64_23 = local_1f0 + iVal_25;
            lVal_31 = iVal_25 + lVal_20;
            uVal_9 = 0;
            do {
              pU64_23 = pU64_23 + -1;
              if (lVal_30 < lVal_31) {
                uVal_18 = 0;
                if (lVal_31 <= (int)local_120 + lVal_30) {
                  uVal_18 = (uint64_t)local_128[(lVal_31 + -1) - lVal_30] * 2;
                }
              }
              else {
                uVal_18 = 0;
              }
              if ((lVal_20 < lVal_31) && (lVal_31 <= iVal_25 + lVal_20)) {
                uVal_9 = uVal_9 | *pU64_23;
              }
              if (uVal_9 < uVal_18) {
                ch_5 = '1';
                break;
              }
              ch_5 = ch_22;
              if (1 < uVal_9 - uVal_18) break;
              lVal_31 = lVal_31 + -1;
              uVal_9 = uVal_9 - uVal_18 << 0x20;
            } while (iVal_7 < lVal_31);
          }
        }
      }
    }
    fnPtr_12 = local_50[1];
    fnPtr_21 = fnPtr_12 + 1;
    if (local_50[2] < fnPtr_21) {
      (*(func_ptr_t )local_50[3])();
      fnPtr_12 = local_50[1];
      fnPtr_21 = fnPtr_12 + 1;
    }
    local_50[1] = fnPtr_21;
    (*local_50)[(int64_t)fnPtr_12] = ch_5;
    if (local_360 == local_340) goto LAB_18064a905;
  }
LAB_18064a900:
  thunk_FUN_180695dd0();
LAB_18064a905:
  if (local_2a0 != local_280) {
    thunk_FUN_180695dd0();
  }
  if (local_1f0 != local_1d0) {
    thunk_FUN_180695dd0();
  }
  if (local_128 != local_108) {
    thunk_FUN_180695dd0();
  }
  return;
}

// Unwind@18064aac0
void Unwind_18064aac0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x68) != param_2 + 0x88) {
    thunk_FUN_180695dd0();
  }
  if (*(int64_t *)(param_2 + 0x128) != param_2 + 0x148) {
    thunk_FUN_180695dd0();
  }
  if (*(int64_t *)(param_2 + 0x1d8) != param_2 + 0x1f8) {
    thunk_FUN_180695dd0();
  }
  if (*(int64_t *)(param_2 + 0x2a0) != param_2 + 0x2c0) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x18064ab50
void func_0x18064ab50(int64_t *param_1,uint param_2)
{
  uint uVal_1;
  uint uVal_2;
  byte bFlag_3;
  int iVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  byte bFlag_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint uVal_10;
  
  if (param_2 == 0) {
    *(uint32_t *)*param_1 = 1;
    uVal_5 = 1;
    if (param_1[2] == 0) {
      (*(func_ptr_t )param_1[3])(param_1,1);
      uVal_5 = (uint64_t)(param_1[2] != 0);
    }
    param_1[1] = uVal_5;
    *(uint32_t *)(param_1 + 0x15) = 0;
    return;
  }
  iVal_4 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVal_4 == 0; iVal_4 = iVal_4 + -1) {
    }
  }
  *(uint32_t *)*param_1 = 5;
  uVal_10 = (1 << ((byte)iVal_4 & 0x1f)) >> 1;
  if (param_1[2] == 0) {
    (*(func_ptr_t )param_1[3])(param_1,1);
    param_1[1] = (uint64_t)(param_1[2] != 0);
    *(uint32_t *)(param_1 + 0x15) = 0;
    if (uVal_10 != 0) goto LAB_18064ac23;
LAB_18064abfe:
    iVal_4 = 0;
  }
  else {
    param_1[1] = 1;
    *(uint32_t *)(param_1 + 0x15) = 0;
    if (uVal_10 == 0) goto LAB_18064abfe;
LAB_18064ac23:
    do {
      func_0x18064b150(param_1);
      if (((uVal_10 & param_2) != 0) && (uVal_5 = param_1[1], uVal_5 != 0)) {
        if (uVal_5 == 1) {
          uVal_9 = 0;
          uVal_8 = 0;
LAB_18064ac9c:
          uVal_8 = (uint64_t)*(uint *)(*param_1 + uVal_9 * 4) * 5 + uVal_8;
          *(int *)(*param_1 + uVal_9 * 4) = (int)uVal_8;
          uVal_8 = uVal_8 >> 0x20;
        }
        else {
          uVal_9 = 0;
          uVal_8 = 0;
          do {
            uVal_8 = (uint64_t)*(uint *)(*param_1 + uVal_9 * 4) * 5 + uVal_8;
            *(int *)(*param_1 + uVal_9 * 4) = (int)uVal_8;
            uVal_8 = (uint64_t)*(uint *)(*param_1 + 4 + uVal_9 * 4) * 5 + (uVal_8 >> 0x20);
            *(int *)(*param_1 + 4 + uVal_9 * 4) = (int)uVal_8;
            uVal_8 = uVal_8 >> 0x20;
            uVal_9 = uVal_9 + 2;
          } while ((uVal_5 & 0xfffffffffffffffe) != uVal_9);
          if ((uVal_5 & 1) != 0) goto LAB_18064ac9c;
        }
        if (uVal_8 != 0) {
          lVal_6 = param_1[1];
          uVal_5 = lVal_6 + 1;
          if ((uint64_t)param_1[2] < uVal_5) {
            (*(func_ptr_t )param_1[3])(param_1);
            lVal_6 = param_1[1];
            uVal_5 = lVal_6 + 1;
          }
          param_1[1] = uVal_5;
          *(int *)(*param_1 + lVal_6 * 4) = (int)uVal_8;
        }
      }
      uVal_10 = (int)uVal_10 >> 1;
    } while (uVal_10 != 0);
    iVal_4 = *(int *)(param_1 + 0x15);
  }
  uVal_10 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVal_10 = param_2;
  }
  *(int *)(param_1 + 0x15) = ((int)uVal_10 >> 5) + iVal_4;
  if ((int)param_2 % 0x20 == 0) {
    return;
  }
  uVal_5 = param_1[1];
  if (uVal_5 == 0) {
    return;
  }
  bFlag_3 = (byte)((int)param_2 % 0x20);
  bFlag_7 = 0x20 - bFlag_3;
  if (uVal_5 == 1) {
    uVal_9 = 0;
    uVal_10 = 0;
  }
  else {
    uVal_9 = 0;
    uVal_10 = 0;
    do {
      uVal_2 = *(uint *)(*param_1 + uVal_9 * 4);
      *(uint *)(*param_1 + uVal_9 * 4) = (uVal_2 << (bFlag_3 & 0x1f)) + uVal_10;
      uVal_1 = *(uint *)(*param_1 + 4 + uVal_9 * 4);
      uVal_10 = uVal_1 >> (bFlag_7 & 0x1f);
      *(uint *)(*param_1 + 4 + uVal_9 * 4) = uVal_1 << (bFlag_3 & 0x1f) | uVal_2 >> (bFlag_7 & 0x1f);
      uVal_9 = uVal_9 + 2;
    } while ((uVal_5 & 0xfffffffffffffffe) != uVal_9);
    if ((uVal_5 & 1) == 0) goto LAB_18064ada2;
  }
  uVal_2 = *(uint *)(*param_1 + uVal_9 * 4);
  *(uint *)(*param_1 + uVal_9 * 4) = (uVal_2 << (bFlag_3 & 0x1f)) + uVal_10;
  uVal_10 = uVal_2 >> (bFlag_7 & 0x1f);
LAB_18064ada2:
  if (uVal_10 != 0) {
    lVal_6 = param_1[1];
    uVal_5 = lVal_6 + 1;
    if ((uint64_t)param_1[2] < uVal_5) {
      (*(func_ptr_t )param_1[3])(param_1);
      lVal_6 = param_1[1];
      uVal_5 = lVal_6 + 1;
    }
    param_1[1] = uVal_5;
    *(uint *)(*param_1 + lVal_6 * 4) = uVal_10;
  }
  return;
}

// func_0x18064ade0
int func_0x18064ade0(int64_t *param_1,int64_t *param_2)
{
  int *pInt_1;
  uint uVal_2;
  uint uVal_3;
  int iVal_4;
  uint uVal_5;
  int iVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  int64_t lVal_14;
  int iVal_15;
  int iVal_16;
  
  uVal_11 = param_1[1];
  uVal_10 = (uint)uVal_11;
  iVal_16 = *(int *)(param_1 + 0x15);
  uVal_7 = param_2[1];
  uVal_5 = *(uint *)(param_2 + 0x15);
  iVal_15 = (int)uVal_7;
  if (iVal_16 + uVal_10 == uVal_5 + iVal_15) {
    uVal_2 = 0;
    if (0 < (int)(uVal_10 - iVal_15)) {
      uVal_2 = uVal_10 - iVal_15;
    }
    uVal_8 = (uint64_t)uVal_2;
    uVal_12 = (uint64_t)(int)uVal_10;
    lVal_13 = (int64_t)iVal_15;
    uVal_9 = uVal_8;
    if ((int64_t)uVal_12 < (int64_t)uVal_8) {
      uVal_9 = uVal_12;
    }
    do {
      if ((int64_t)uVal_12 <= (int64_t)uVal_8) {
        if ((int64_t)uVal_9 < lVal_13) {
          return 0;
        }
        goto LAB_18064ae6c;
      }
      uVal_2 = *(uint *)(*param_1 + -4 + uVal_12 * 4);
      uVal_12 = uVal_12 - 1;
      uVal_3 = *(uint *)(*param_2 + -4 + lVal_13 * 4);
      lVal_13 = lVal_13 + -1;
    } while (uVal_2 == uVal_3);
    if (uVal_2 <= uVal_3) {
      return 0;
    }
  }
  else if ((int)(iVal_16 + uVal_10) <= (int)(uVal_5 + iVal_15)) {
    return 0;
  }
LAB_18064ae6c:
  iVal_15 = iVal_16 - uVal_5;
  if (iVal_15 != 0 && (int)uVal_5 <= iVal_16) {
    uVal_9 = (uint64_t)(iVal_15 + uVal_10);
    uVal_7 = param_1[2];
    if (uVal_7 < uVal_9) {
      (*(func_ptr_t )param_1[3])(param_1);
      uVal_7 = param_1[2];
    }
    if (uVal_9 < uVal_7) {
      uVal_7 = uVal_9;
    }
    param_1[1] = uVal_7;
    if (0 < (int)uVal_10) {
      uVal_7 = (uint64_t)(uVal_10 - 1);
      lVal_13 = (int64_t)(int)(iVal_15 + uVal_10 + -1);
      for (uVal_11 = uVal_11 & 3; uVal_11 != 0; uVal_11 = uVal_11 - 1) {
        *(uint32_t *)(*param_1 + lVal_13 * 4) = *(uint32_t *)(*param_1 + uVal_7 * 4);
        uVal_7 = uVal_7 - 1;
        lVal_13 = lVal_13 + -1;
      }
      if (3 < uVal_10) {
        lVal_14 = uVal_7 * 4;
        lVal_13 = lVal_13 * 4;
        uVal_11 = 0;
        do {
          *(uint32_t *)(*param_1 + lVal_13 + uVal_11 * 4) =
               *(uint32_t *)(*param_1 + lVal_14 + uVal_11 * 4);
          *(uint32_t *)(*param_1 + -4 + lVal_13 + uVal_11 * 4) =
               *(uint32_t *)(*param_1 + lVal_14 + -4 + uVal_11 * 4);
          *(uint32_t *)(*param_1 + -8 + lVal_13 + uVal_11 * 4) =
               *(uint32_t *)(*param_1 + -8 + lVal_14 + uVal_11 * 4);
          *(uint32_t *)(*param_1 + lVal_13 + -0xc + uVal_11 * 4) =
               *(uint32_t *)(*param_1 + -0xc + lVal_14 + uVal_11 * 4);
          uVal_11 = uVal_11 - 4;
        } while (~uVal_7 != uVal_11);
      }
    }
    func_0x1806ab010(*param_1,0,(uint64_t)(iVal_16 + ~uVal_5) * 4 + 4);
    iVal_16 = *(int *)(param_1 + 0x15) - iVal_15;
    *(int *)(param_1 + 0x15) = iVal_16;
    uVal_7 = param_2[1];
  }
  iVal_15 = 0;
LAB_18064af96:
  do {
    if (uVal_7 != 0) {
      lVal_13 = (int64_t)(*(int *)(param_2 + 0x15) - iVal_16);
      if (uVal_7 == 1) {
        uVal_11 = 0;
        uVal_9 = 0;
LAB_18064b01f:
        uVal_8 = (uint64_t)*(uint *)(*param_1 + lVal_13 * 4) -
                (*(uint *)(*param_2 + uVal_11 * 4) + uVal_9);
        *(int *)(*param_1 + lVal_13 * 4) = (int)uVal_8;
        lVal_13 = lVal_13 + 1;
      }
      else {
        uVal_11 = 0;
        uVal_9 = 0;
        do {
          lVal_14 = (uint64_t)*(uint *)(*param_1 + lVal_13 * 4) -
                   (*(uint *)(*param_2 + uVal_11 * 4) + uVal_9);
          *(int *)(*param_1 + lVal_13 * 4) = (int)lVal_14;
          uVal_8 = (uint64_t)*(uint *)(*param_1 + 4 + lVal_13 * 4) -
                  ((uint64_t)*(uint *)(*param_2 + 4 + uVal_11 * 4) - (lVal_14 >> 0x3f));
          *(int *)(*param_1 + 4 + lVal_13 * 4) = (int)uVal_8;
          uVal_9 = uVal_8 >> 0x3f;
          lVal_13 = lVal_13 + 2;
          uVal_11 = uVal_11 + 2;
        } while ((uVal_7 & 0xfffffffffffffffe) != uVal_11);
        if ((uVal_7 & 1) != 0) goto LAB_18064b01f;
      }
      if ((int64_t)uVal_8 < 0) {
        pInt_1 = (int *)(*param_1 + (int64_t)(int)lVal_13 * 4);
        *pInt_1 = *pInt_1 + -1;
      }
    }
    uVal_7 = param_1[1];
    uVal_11 = uVal_7 & 0xffffffff;
    uVal_9 = 1;
    if ((int)uVal_7 < 1) {
      uVal_9 = uVal_7 & 0xffffffff;
    }
    uVal_5 = (int)uVal_7 + 1;
    do {
      if ((int)uVal_11 < 2) {
        uVal_11 = param_1[2];
        if (uVal_9 <= uVal_11) goto LAB_18064b091;
        goto LAB_18064b084;
      }
      uVal_5 = uVal_5 - 1;
      lVal_13 = uVal_11 * 4;
      uVal_11 = uVal_11 - 1;
    } while (*(int *)(*param_1 + -4 + lVal_13) == 0);
    uVal_9 = (uint64_t)uVal_5;
    uVal_11 = param_1[2];
    if (uVal_11 < uVal_9) {
LAB_18064b084:
      (*(func_ptr_t )param_1[3])(param_1,uVal_9);
      uVal_11 = param_1[2];
    }
LAB_18064b091:
    if (uVal_9 < uVal_11) {
      uVal_11 = uVal_9;
    }
    param_1[1] = uVal_11;
    iVal_15 = iVal_15 + 1;
    iVal_16 = *(int *)(param_1 + 0x15);
    iVal_4 = (int)uVal_11;
    uVal_7 = param_2[1];
    iVal_6 = (int)uVal_7;
    if (iVal_16 + iVal_4 == *(int *)(param_2 + 0x15) + iVal_6) {
      uVal_5 = iVal_4 - iVal_6;
      if (iVal_4 - iVal_6 < 1) {
        uVal_5 = 0;
      }
      uVal_8 = (uint64_t)uVal_5;
      uVal_11 = (uint64_t)iVal_4;
      lVal_13 = (int64_t)iVal_6;
      uVal_9 = uVal_8;
      if ((int64_t)uVal_11 < (int64_t)uVal_8) {
        uVal_9 = uVal_11;
      }
      do {
        if ((int64_t)uVal_11 <= (int64_t)uVal_8) {
          if ((int64_t)uVal_9 < lVal_13) {
            return iVal_15;
          }
          goto LAB_18064af96;
        }
        uVal_5 = *(uint *)(*param_2 + -4 + lVal_13 * 4);
        lVal_13 = lVal_13 + -1;
        uVal_10 = *(uint *)(*param_1 + -4 + uVal_11 * 4);
        uVal_11 = uVal_11 - 1;
      } while (uVal_10 == uVal_5);
      if (uVal_10 <= uVal_5) {
        return iVal_15;
      }
    }
    else if (iVal_16 + iVal_4 <= *(int *)(param_2 + 0x15) + iVal_6) {
      return iVal_15;
    }
  } while( true );
}

// func_0x18064b150
void func_0x18064b150(int64_t *param_1)
{
  uint8_t *pU64_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  uint64_t uVal_4;
  uint uVal_5;
  uint64_t uVal_6;
  int iVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint *pU64_13;
  int iVal_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  uint64_t uVal_18;
  bool bFlag_19;
  bool bFlag_20;
  uint8_t *local_138;
  uint8_t local_118 [136];
  uint8_t **local_90;
  char *local_88;
  uint64_t local_80;
  int64_t local_78;
  int64_t local_70;
  int64_t local_68;
  int local_5c;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_1[1];
  pU64_1 = (uint8_t *)*param_1;
  uVal_18 = param_1[2];
  if ((int64_t *)pU64_1 == param_1 + 4) {
    pU64_1 = local_118;
    uVal_15 = uVal_18;
    if (local_50 != 0) {
      func_0x1806aa960(pU64_1);
    }
  }
  else {
    *param_1 = (int64_t)(param_1 + 4);
    *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
    uVal_15 = 0;
  }
  local_138 = pU64_1;
  if (uVal_18 < local_50) {
    uVal_4 = (uVal_18 >> 1) + uVal_18;
    uVal_18 = local_50;
    if (((local_50 <= uVal_4) && (uVal_18 = uVal_4, uVal_4 >> 0x3e != 0)) &&
       (uVal_18 = 0x3fffffffffffffff, 0x3fffffffffffffff < local_50)) {
      uVal_18 = local_50;
    }
    local_138 = (uint8_t *)_malloc_base(uVal_18 * 4);
    if (local_138 == (uint8_t *)0x0) {
      local_80 = 0;
      local_88 = "bad allocation";
      local_90 = std::bad_alloc::vftable;
      func_0x18067a120(&local_90,&DAT_180768880);
      fnPtr_2 = (func_ptr_t )swi(3);
      (*fnPtr_2)();
      return;
    }
    if (pU64_1 != local_118) {
      thunk_FUN_180695dd0(pU64_1);
      uVal_15 = param_1[2];
    }
  }
  if (local_50 < uVal_18) {
    uVal_18 = local_50;
  }
  uVal_3 = (int)local_50 * 2;
  uVal_4 = (uint64_t)uVal_3;
  if (uVal_15 < uVal_4) {
    (*(func_ptr_t )param_1[3])(param_1,uVal_4);
    uVal_15 = param_1[2];
  }
  if (uVal_4 < uVal_15) {
    uVal_15 = uVal_4;
  }
  *(uint64_t *)*(uint8_t (*)[16])(param_1 + 1) = uVal_15;
  uVal_5 = (uint)local_50;
  if ((int)uVal_5 < 1) {
    uVal_8 = 0;
    uVal_4 = 0;
  }
  else {
    local_58 = (uint64_t)(uVal_5 & 0x7fffffff);
    uVal_6 = 1;
    bFlag_20 = true;
    lVal_9 = 0;
    uVal_10 = 0;
    uVal_4 = 0;
    uVal_12 = 0;
    do {
      if (uVal_10 == 0) {
        uVal_8 = 0;
        lVal_17 = 0;
LAB_18064b2e5:
        bFlag_19 = CARRY8(uVal_4,(uint64_t)*(uint *)(local_138 + lVal_17 * 4) *
                              (uint64_t)*(uint *)(local_138 + uVal_8 * 4));
        uVal_4 = uVal_4 + (uint64_t)*(uint *)(local_138 + lVal_17 * 4) *
                        (uint64_t)*(uint *)(local_138 + uVal_8 * 4);
        uVal_12 = uVal_12 + bFlag_19;
      }
      else {
        uVal_8 = 0;
        lVal_17 = lVal_9;
        do {
          uVal_15 = (uint64_t)*(uint *)(local_138 + uVal_8 * 4 + 4);
          uVal_16 = (uint64_t)*(uint *)(local_138 + lVal_17) *
                   (uint64_t)*(uint *)(local_138 + uVal_8 * 4) + uVal_4;
          uVal_18 = (uint64_t)
                   CARRY8((uint64_t)*(uint *)(local_138 + lVal_17) *
                          (uint64_t)*(uint *)(local_138 + uVal_8 * 4),uVal_4);
          uVal_4 = *(uint *)(local_138 + lVal_17 + -4) * uVal_15 + uVal_16;
          uVal_12 = uVal_12 + uVal_18 +
                   (uint64_t)CARRY8(*(uint *)(local_138 + lVal_17 + -4) * uVal_15,uVal_16);
          uVal_8 = uVal_8 + 2;
          lVal_17 = lVal_17 + -8;
        } while ((uVal_6 & 0xfffffffffffffffe) != uVal_8);
        if (bFlag_20) {
          lVal_17 = uVal_10 - uVal_8;
          goto LAB_18064b2e5;
        }
      }
      *(int *)(*param_1 + uVal_10 * 4) = (int)uVal_4;
      uVal_8 = uVal_12 >> 0x20;
      uVal_4 = uVal_4 >> 0x20 | uVal_12 << 0x20;
      uVal_10 = uVal_10 + 1;
      uVal_6 = uVal_6 + 1;
      bFlag_20 = (bool)(bFlag_20 ^ 1);
      lVal_9 = lVal_9 + 4;
      uVal_12 = uVal_8;
    } while (uVal_10 != local_58);
  }
  if ((int)uVal_5 < (int)uVal_3) {
    local_68 = (int64_t)(int)uVal_5;
    local_78 = (int64_t)(int)uVal_3;
    local_58 = (int)(uVal_5 - 1) + local_68;
    local_5c = uVal_5 - 2;
    local_70 = local_68 + -1;
    iVal_14 = 1;
    iVal_7 = 0;
    lVal_9 = local_68;
    do {
      uVal_12 = uVal_8;
      uVal_6 = uVal_4;
      if (lVal_9 < (int64_t)local_58) {
        lVal_11 = (int64_t)iVal_14;
        lVal_17 = local_68;
        if ((iVal_7 - uVal_5 & 1) == 0) {
          lVal_17 = lVal_11 * 4;
          lVal_11 = lVal_11 + 1;
          bFlag_20 = CARRY8(uVal_4,(uint64_t)*(uint *)(local_138 + local_68 * 4 + -4) *
                                (uint64_t)*(uint *)(local_138 + lVal_17));
          uVal_4 = uVal_4 + (uint64_t)*(uint *)(local_138 + local_68 * 4 + -4) *
                          (uint64_t)*(uint *)(local_138 + lVal_17);
          uVal_18 = uVal_8 + bFlag_20;
          lVal_17 = local_70;
          uVal_15 = uVal_4;
          uVal_8 = uVal_18;
        }
        uVal_12 = uVal_18;
        uVal_6 = uVal_15;
        if (local_5c != iVal_7) {
          pU64_13 = (uint *)(local_138 + lVal_17 * 4 + -4);
          lVal_17 = 0;
          do {
            bFlag_20 = CARRY8((uint64_t)*pU64_13 *
                            (uint64_t)*(uint *)(local_138 + lVal_17 * 4 + lVal_11 * 4),uVal_4);
            uVal_18 = (uint64_t)*pU64_13 * (uint64_t)*(uint *)(local_138 + lVal_17 * 4 + lVal_11 * 4)
                     + uVal_4;
            uVal_4 = (uint64_t)pU64_13[-1] *
                    (uint64_t)*(uint *)(local_138 + lVal_17 * 4 + lVal_11 * 4 + 4) + uVal_18;
            uVal_8 = uVal_8 + bFlag_20 +
                    (uint64_t)
                    CARRY8((uint64_t)pU64_13[-1] *
                           (uint64_t)*(uint *)(local_138 + lVal_17 * 4 + lVal_11 * 4 + 4),uVal_18);
            pU64_13 = pU64_13 + -2;
            lVal_17 = lVal_17 + 2;
            uVal_12 = uVal_8;
            uVal_6 = uVal_4;
          } while (uVal_5 - (int)lVal_11 != (int)lVal_17);
        }
      }
      *(int *)(*param_1 + lVal_9 * 4) = (int)uVal_6;
      uVal_8 = uVal_12 >> 0x20;
      uVal_4 = uVal_12 << 0x20 | uVal_6 >> 0x20;
      lVal_9 = lVal_9 + 1;
      iVal_14 = iVal_14 + 1;
      iVal_7 = iVal_7 + 1;
      uVal_18 = uVal_4;
      uVal_15 = uVal_6;
    } while (lVal_9 != local_78);
  }
  uVal_15 = param_1[1];
  uVal_18 = uVal_15 & 0xffffffff;
  uVal_4 = 1;
  if ((int)uVal_15 < 1) {
    uVal_4 = uVal_15 & 0xffffffff;
  }
  uVal_3 = (int)uVal_15 + 1;
  do {
    if ((int)uVal_18 < 2) {
      uVal_18 = param_1[2];
      if (uVal_4 <= uVal_18) goto LAB_18064b54c;
      goto LAB_18064b53e;
    }
    uVal_3 = uVal_3 - 1;
    lVal_9 = uVal_18 * 4;
    uVal_18 = uVal_18 - 1;
  } while (*(int *)(*param_1 + -4 + lVal_9) == 0);
  uVal_4 = (uint64_t)uVal_3;
  uVal_18 = param_1[2];
  if (uVal_18 < uVal_4) {
LAB_18064b53e:
    (*(func_ptr_t )param_1[3])(param_1,uVal_4);
    uVal_18 = param_1[2];
  }
LAB_18064b54c:
  if (uVal_4 < uVal_18) {
    uVal_18 = uVal_4;
  }
  param_1[1] = uVal_18;
  *(int *)(param_1 + 0x15) = *(int *)(param_1 + 0x15) << 1;
  if (local_138 != local_118) {
    thunk_FUN_180695dd0();
  }
  return;
}

// Unwind@18064b5c0
void Unwind_18064b5c0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18064b5f0
void Unwind_18064b5f0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x20) != param_2 + 0x40) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x18064b630
void func_0x18064b630(int64_t *param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  uint64_t uVal_13;
  uint64_t uVal_14;
  
  lVal_2 = param_1[1];
  if (lVal_2 == 0) {
    uVal_9 = 0;
    uVal_6 = 0;
  }
  else {
    uVal_5 = *param_2;
    uVal_1 = param_2[1];
    uVal_6 = 0;
    lVal_10 = 0;
    uVal_9 = 0;
    do {
      uVal_8 = (uint64_t)*(uint *)(*param_1 + lVal_10 * 4);
      uVal_7 = (uVal_5 >> 0x20) * uVal_8;
      uVal_3 = (uVal_5 & 0xffffffff) * uVal_8;
      uVal_11 = uVal_7 << 0x20;
      uVal_12 = uVal_11 + uVal_3;
      uVal_13 = uVal_12 + (uVal_9 & 0xffffffff);
      uVal_11 = (uint64_t)CARRY8(uVal_11,uVal_3) + (uVal_7 >> 0x20) +
               (uint64_t)CARRY8(uVal_12,uVal_9 & 0xffffffff);
      uVal_14 = uVal_6 << 0x20 | uVal_9 >> 0x20;
      uVal_12 = uVal_11 << 0x20 | uVal_13 >> 0x20;
      lVal_4 = (uVal_1 >> 0x20) * uVal_8;
      uVal_8 = uVal_8 * (uVal_1 & 0xffffffff);
      uVal_3 = lVal_4 << 0x20;
      uVal_7 = (uVal_8 << 0x20) + uVal_12;
      uVal_9 = uVal_7 + uVal_14;
      uVal_6 = (uVal_3 + uVal_8 >> 0x20) + (uVal_6 >> 0x20) +
              (((uint64_t)CARRY8(uVal_3,uVal_8) << 0x20) + lVal_4 & 0xffffffff00000000) +
              (uVal_11 >> 0x20) + (uint64_t)CARRY8(uVal_8 << 0x20,uVal_12) +
              (uint64_t)CARRY8(uVal_7,uVal_14);
      *(int *)(*param_1 + lVal_10 * 4) = (int)uVal_13;
      lVal_10 = lVal_10 + 1;
    } while (lVal_2 != lVal_10);
  }
  for (; (uVal_6 | uVal_9) != 0; uVal_6 = uVal_6 >> 0x20) {
    lVal_2 = param_1[1];
    uVal_5 = lVal_2 + 1;
    if ((uint64_t)param_1[2] < uVal_5) {
      (*(func_ptr_t )param_1[3])(param_1);
      lVal_2 = param_1[1];
      uVal_5 = lVal_2 + 1;
    }
    param_1[1] = uVal_5;
    *(int *)(*param_1 + lVal_2 * 4) = (int)uVal_9;
    uVal_9 = uVal_9 >> 0x20 | uVal_6 << 0x20;
  }
  return;
}

// func_0x18064b790
uint64_t * func_0x18064b790(uint64_t *param_1,int64_t param_2,uint32_t *param_3,uint *param_4,uint param_5, uint param_6,uint64_t param_7)
{
  int iVal_1;
  func_ptr_t fnPtr_2;
  char ch_3;
  uint64_t uVal_4;
  uint64_t *pU64_5;
  uint uVal_6;
  uint uVal_7;
  int64_t lVal_8;
  int iVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint8_t auStack_b8 [32];
  uint64_t local_98;
  uint *local_90;
  uint local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint local_70 [2];
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  int local_58;
  char local_54;
  uint32_t local_50;
  byte local_4c;
  uint local_48;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_b8;
  uVal_6 = *param_4;
  uVal_4 = 0x2e;
  if ((uVal_6 & 0x4000) != 0) {
    uVal_4 = func_0x180641980(param_7);
    uVal_6 = *param_4;
  }
  iVal_1 = param_3[2];
  ch_3 = (char)uVal_4;
  if (((byte)uVal_6 & 7) == 1) {
LAB_18064b845:
    local_48 = (param_3[3] + iVal_1) - 1;
    lVal_11 = (int64_t)(int)((iVal_1 + 1) - (uint)(param_5 == 0));
    if ((uVal_6 & 0x2000) == 0) {
      uVal_10 = 0;
      uVal_4 = uVal_4 & 0xff;
      if (iVal_1 == 1) {
        uVal_4 = uVal_10;
      }
      ch_3 = (char)uVal_4;
    }
    else {
      uVal_10 = 0;
      if (0 < (int)(param_4[3] - iVal_1)) {
        uVal_10 = (uint64_t)(param_4[3] - iVal_1);
      }
      lVal_11 = lVal_11 + uVal_10;
    }
    uVal_7 = -local_48;
    if (0 < (int)local_48) {
      uVal_7 = local_48;
    }
    lVal_8 = 4;
    if (99 < uVal_7) {
      lVal_8 = 6 - (uint64_t)(uVal_7 < 1000);
    }
    lVal_11 = (lVal_8 + lVal_11 + 1) - (uint64_t)(ch_3 == '\0');
    local_4c = ((uVal_6 & 0x1000) == 0) << 5 | 0x45;
    local_70[0] = param_5;
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    local_50 = (uint32_t)uVal_10;
    local_58 = iVal_1;
    local_54 = ch_3;
    if ((int)param_4[2] < 1) {
      uVal_4 = lVal_11 + *(int64_t *)(param_2 + 8);
      if (*(uint64_t *)(param_2 + 0x10) < uVal_4) {
        (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_4);
      }
      func_0x18064be10(local_70,&local_78,param_2);
      *param_1 = local_78;
    }
    else {
      local_90 = local_70;
      local_98 = lVal_11;
      func_0x18064ce10(param_1,param_2,param_4,lVal_11);
    }
  }
  else {
    if ((uVal_6 & 7) != 2) {
      iVal_9 = param_3[3] + iVal_1;
      uVal_7 = param_4[3];
      if ((int)param_4[3] < 1) {
        uVal_7 = param_6;
      }
      if ((iVal_9 < -3) || ((int)uVal_7 < iVal_9)) goto LAB_18064b845;
    }
    local_80 = param_7;
    local_88 = param_5;
    local_98 = CONCAT71(local_98._1_7_,ch_3);
    local_90 = param_4;
    func_0x18064b980(param_1,param_2);
  }
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_b8)) {
    return param_1;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_b8);
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_5 = (uint64_t *)(*fnPtr_2)();
  return pU64_5;
}

// func_0x18064b980
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
uint64_t func_0x18064b980(uint64_t param_1,uint64_t param_2,int64_t param_3,int param_4,uint64_t param_5, uint *param_6,int param_7,uint64_t param_8)
{
  char ch_1;
  uint uVal_2;
  uint *pU64_3;
  int iVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t *******ptr7_U64_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t *******ptr7_U64_10;
  int iVal_11;
  uint uVal_12;
  uint64_t local_d0;
  int64_t local_c8;
  int *local_c0;
  uint64_t *******local_b8;
  uint *local_b0;
  uint64_t *******local_a8;
  uint32_t *local_a0;
  int local_94;
  uint64_t *******local_90;
  uint32_t *local_88;
  uint8_t *local_80;
  uint64_t *local_78;
  uint64_t local_70;
  int *local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  uint32_t local_4c;
  uint64_t local_48;
  
  pU64_3 = param_6;
  local_48 = 0xfffffffffffffffe;
  iVal_4 = *(int *)(param_3 + 0xc);
  iVal_11 = iVal_4 + param_4;
  lVal_9 = (int64_t)(int)((param_4 + 1) - (uint)(param_7 == 0));
  local_c8 = param_3;
  local_94 = iVal_11;
  local_50 = param_4;
  if ((int64_t)iVal_4 < 0) {
    if (iVal_11 < 1) {
      uVal_12 = -iVal_11;
      local_d0 = (uint32_t *)CONCAT44(local_d0._4_4_,uVal_12);
      if (param_4 == 0) {
        uVal_2 = param_6[3];
        if (SBORROW4(uVal_2,uVal_12) != (int)(uVal_2 + iVal_11) < 0 && -1 < (int)uVal_2) {
          local_d0 = (uint32_t *)CONCAT44(local_d0._4_4_,uVal_2);
          uVal_12 = uVal_2;
        }
        if (uVal_12 == 0) {
          local_4c = CONCAT31(local_4c._1_3_,(char)((*param_6 & 0x2000) >> 0xd));
          iVal_4 = 2 - (uint)((*param_6 & 0x2000) == 0);
          uVal_12 = 0;
          goto LAB_18064bcf6;
        }
      }
      local_4c = CONCAT31(local_4c._1_3_,1);
      iVal_4 = 2;
LAB_18064bcf6:
      lVal_9 = (uint64_t)(uVal_12 + iVal_4) + lVal_9;
      local_90 = (uint64_t *******)&param_7;
      local_88 = &local_4c;
      local_80 = (uint8_t *)&param_5;
      local_78 = &local_d0;
      local_68 = &local_50;
      local_70 = param_3;
      func_0x18064ca60(param_1,param_2,param_6,lVal_9,lVal_9,&local_90);
      return param_1;
    }
    lVal_5 = 0;
    local_4c = param_6[3] - param_4 & (int)(*param_6 << 0x12) >> 0x1f;
    uVal_12 = local_4c;
    if ((int)local_4c < 1) {
      uVal_12 = 0;
    }
    func_0x1806473c0(&local_90,param_8,*param_6 >> 0xe & 1);
    if (local_60 != 0) {
      ptr7_U64_10 = &local_90;
      if (0xf < local_78) {
        ptr7_U64_10 = local_90;
      }
      ptr7_U64_7 = (uint64_t *******)((int64_t)local_80 + (int64_t)ptr7_U64_10);
      lVal_5 = 0;
      iVal_4 = 0;
      do {
        if (ptr7_U64_10 == ptr7_U64_7) {
          ch_1 = *(char *)((int64_t)ptr7_U64_7 + -1);
        }
        else {
          ch_1 = *(char *)ptr7_U64_10;
          if ((byte)(ch_1 + 0x81U) < 0x82) break;
          ptr7_U64_10 = (uint64_t *******)((int64_t)ptr7_U64_10 + 1);
        }
        iVal_4 = iVal_4 + ch_1;
        if (iVal_11 <= iVal_4) break;
        lVal_5 = lVal_5 + 1;
      } while( true );
    }
    lVal_9 = lVal_5 + (uint64_t)uVal_12 + lVal_9 + 1;
    local_d0 = &param_7;
    local_c0 = &local_50;
    local_b8 = (uint64_t *******)&local_94;
    local_b0 = (uint *)&param_5;
    local_a8 = &local_90;
    local_a0 = &local_4c;
    func_0x18064c690(param_1,param_2,pU64_3,lVal_9,lVal_9,&local_d0);
  }
  else {
    lVal_9 = iVal_4 + lVal_9;
    local_4c = param_6[3] - iVal_11;
    uVal_12 = *param_6;
    if ((uVal_12 & 0x2000) != 0) {
      lVal_9 = lVal_9 + 1;
      if ((uVal_12 & 7) == 2 || 0 < (int)local_4c) {
        if (0 < (int)local_4c) {
          lVal_9 = lVal_9 + (uint64_t)local_4c;
        }
      }
      else {
        local_4c = 0;
      }
    }
    func_0x1806473c0(&local_90,param_8,uVal_12 >> 0xe & 1);
    if (local_60 != 0) {
      ptr7_U64_10 = &local_90;
      if (0xf < local_78) {
        ptr7_U64_10 = local_90;
      }
      ptr7_U64_7 = (uint64_t *******)((int64_t)local_80 + (int64_t)ptr7_U64_10);
      lVal_5 = 0;
      iVal_4 = 0;
      do {
        if (ptr7_U64_10 == ptr7_U64_7) {
          ch_1 = *(char *)((int64_t)ptr7_U64_7 + -1);
        }
        else {
          ch_1 = *(char *)ptr7_U64_10;
          if ((byte)(ch_1 + 0x81U) < 0x82) goto LAB_18064bbcd;
          ptr7_U64_10 = (uint64_t *******)((int64_t)ptr7_U64_10 + 1);
        }
        iVal_4 = iVal_4 + ch_1;
        if (iVal_11 <= iVal_4) goto LAB_18064bbcd;
        lVal_5 = lVal_5 + 1;
      } while( true );
    }
    lVal_5 = 0;
LAB_18064bbcd:
    local_d0 = &param_7;
    local_c0 = &local_50;
    local_b8 = &local_90;
    local_b0 = pU64_3;
    local_a8 = (uint64_t *******)&param_5;
    local_a0 = &local_4c;
    func_0x18064bf90(param_1,param_2,pU64_3,lVal_9 + lVal_5,lVal_9 + lVal_5,&local_d0);
  }
  if (0xf < local_58) {
    uVal_6 = local_58 + 1;
    uVal_8 = local_70;
    if (0xfff < uVal_6) {
      uVal_8 = *(uint64_t *)(local_70 - 8);
      if (0x1f < (local_70 - 8) - uVal_8) goto LAB_18064bd86;
      uVal_6 = local_58 + 0x28;
    }
    thunk_FUN_180695dd0(uVal_8,uVal_6);
  }
  local_60 = 0;
  local_58 = 0xf;
  local_70 = local_70 & 0xffffffffffffff00;
  if (0xf < local_78) {
    uVal_6 = (int64_t)local_78 + 1;
    ptr7_U64_10 = local_90;
    if (0xfff < uVal_6) {
      ptr7_U64_10 = (uint64_t *******)local_90[-1];
      if ((char *)0x1f < (char *)((int64_t)local_90 + (-8 - (int64_t)ptr7_U64_10))) {
LAB_18064bd86:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = (int64_t)local_78 + 0x28;
    }
    thunk_FUN_180695dd0(ptr7_U64_10,uVal_6);
  }
  return param_1;
}

// Unwind@18064bd90
void Unwind_18064bd90(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0x88);
  return;
}

// Unwind@18064bdd0
void Unwind_18064bdd0(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0x88);
  return;
}

// func_0x18064be10
uint64_t func_0x18064be10(int *param_1,uint64_t param_2,int64_t *param_3)
{
  char ch_1;
  uint8_t uVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  int iVal_9;
  uint8_t auStack_68 [32];
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  iVal_9 = *param_1;
  if (iVal_9 != 0) {
    lVal_5 = param_3[1];
    uVal_7 = lVal_5 + 1;
    if ((uint64_t)param_3[2] < uVal_7) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_5 = param_3[1];
      uVal_7 = lVal_5 + 1;
    }
    param_3[1] = uVal_7;
    *(char *)(*param_3 + lVal_5) = (char)(0x202b2d00 >> ((byte)(iVal_9 << 3) & 0x1f));
  }
  ch_1 = *(char *)(param_1 + 7);
  iVal_9 = param_1[6];
  lVal_5 = *(int64_t *)(param_1 + 2);
  func_0x1800b1e50(&local_48,lVal_5,lVal_5 + 1,param_3);
  pLong_8 = local_48;
  if (ch_1 != '\0') {
    lVal_4 = local_48[1];
    uVal_7 = lVal_4 + 1;
    if ((uint64_t)local_48[2] < uVal_7) {
      (*(func_ptr_t )local_48[3])(local_48);
      lVal_4 = pLong_8[1];
      uVal_7 = lVal_4 + 1;
    }
    pLong_8[1] = uVal_7;
    *(char *)(*pLong_8 + lVal_4) = ch_1;
    func_0x1800b1e50(&local_48,lVal_5 + 1,lVal_5 + iVal_9,pLong_8);
    pLong_8 = local_48;
  }
  iVal_9 = param_1[8];
  if (0 < iVal_9) {
    do {
      lVal_5 = pLong_8[1];
      uVal_7 = lVal_5 + 1;
      if ((uint64_t)pLong_8[2] < uVal_7) {
        (*(func_ptr_t )pLong_8[3])(pLong_8);
        lVal_5 = pLong_8[1];
        uVal_7 = lVal_5 + 1;
      }
      pLong_8[1] = uVal_7;
      *(uint8_t *)(*pLong_8 + lVal_5) = 0x30;
      iVal_9 = iVal_9 + -1;
    } while (iVal_9 != 0);
  }
  uVal_2 = *(uint8_t *)(param_1 + 9);
  lVal_5 = pLong_8[1];
  uVal_7 = lVal_5 + 1;
  if ((uint64_t)pLong_8[2] < uVal_7) {
    (*(func_ptr_t )pLong_8[3])(pLong_8);
    lVal_5 = pLong_8[1];
    uVal_7 = lVal_5 + 1;
  }
  pLong_8[1] = uVal_7;
  *(uint8_t *)(*pLong_8 + lVal_5) = uVal_2;
  func_0x18036a3b0(param_2,param_1[10],pLong_8);
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_68)) {
    return param_2;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_68);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_6 = (*fnPtr_3)();
  return uVal_6;
}

// func_0x18064bf90
int64_t * func_0x18064bf90(int64_t *param_1,int64_t param_2,uint *param_3,int64_t param_4,uint64_t param_5, uint64_t param_6)
{
  func_ptr_t fnPtr_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t auStack_68 [40];
  int64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_3 = 0;
  if (param_5 <= param_3[2]) {
    uVal_3 = param_3[2] - param_5;
  }
  uVal_5 = uVal_3 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_4 = param_4 + *(int64_t *)(param_2 + 8) + (*param_3 >> 0xf & 7) * uVal_3;
  if (*(uint64_t *)(param_2 + 0x10) < uVal_4) {
    (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_4);
  }
  if (uVal_5 != 0) {
    func_0x1800b57e0(&local_40,param_2,uVal_5,param_3);
    param_2 = local_40;
  }
  func_0x18064c0a0(param_6,&local_40,param_2);
  if (uVal_3 != uVal_5) {
    func_0x1800b57e0(&local_40,local_40,uVal_3 - uVal_5,param_3);
  }
  *param_1 = local_40;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  pLong_2 = (int64_t *)(*fnPtr_1)();
  return pLong_2;
}

// func_0x18064c0a0
int64_t ** func_0x18064c0a0(int **param_1,int64_t **param_2,int64_t *param_3)
{
  uint8_t uVal_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  int64_t **ptr2_Long_4;
  uint64_t uVal_5;
  int iVal_6;
  uint8_t auStack_68 [32];
  int local_48;
  int *local_40;
  int64_t *local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  iVal_6 = **param_1;
  if (iVal_6 != 0) {
    lVal_3 = param_3[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_3[2] < uVal_5) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_3 = param_3[1];
      uVal_5 = lVal_3 + 1;
    }
    param_3[1] = uVal_5;
    *(char *)(*param_3 + lVal_3) = (char)(0x202b2d00 >> ((byte)(iVal_6 << 3) & 0x1f));
  }
  local_40 = param_1[3];
  local_48 = *(int *)((int64_t)param_1[1] + 0xc);
  func_0x18064c1e0(&local_30,param_3,*(uint64_t *)param_1[1],*param_1[2]);
  if ((*(byte *)((int64_t)param_1[4] + 1) & 0x20) != 0) {
    uVal_1 = *(uint8_t *)param_1[5];
    lVal_3 = local_30[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)local_30[2] < uVal_5) {
      (*(func_ptr_t )local_30[3])(local_30);
      lVal_3 = local_30[1];
      uVal_5 = lVal_3 + 1;
    }
    local_30[1] = uVal_5;
    *(uint8_t *)(*local_30 + lVal_3) = uVal_1;
    iVal_6 = *param_1[6];
    if (0 < iVal_6) {
      do {
        lVal_3 = local_30[1];
        uVal_5 = lVal_3 + 1;
        if ((uint64_t)local_30[2] < uVal_5) {
          (*(func_ptr_t )local_30[3])(local_30);
          lVal_3 = local_30[1];
          uVal_5 = lVal_3 + 1;
        }
        local_30[1] = uVal_5;
        *(uint8_t *)(*local_30 + lVal_3) = 0x30;
        iVal_6 = iVal_6 + -1;
      } while (iVal_6 != 0);
    }
  }
  *param_2 = local_30;
  if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_68)) {
    return param_2;
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_68);
  fnPtr_2 = (func_ptr_t )swi(3);
  ptr2_Long_4 = (int64_t **)(*fnPtr_2)();
  return ptr2_Long_4;
}

// func_0x18064c1e0
int64_t ** func_0x18064c1e0(int64_t **param_1,int64_t *param_2,int64_t param_3,int param_4,int param_5, int64_t param_6)
{
  uint32_t *pU64_1;
  int64_t lVal_2;
  uint32_t *pU64_3;
  int64_t lVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint64_t uVal_12;
  uint64_t uVal_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  int64_t lVal_16;
  int iVal_17;
  uint64_t uVal_18;
  uint8_t *local_270;
  uint64_t local_268;
  uint64_t local_260;
  func_ptr_t local_258;
  uint8_t local_250 [504];
  uint8_t *local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(int64_t *)(param_6 + 0x30) == 0) {
    if (param_4 != 0) {
      lVal_16 = param_4 + param_3;
      lVal_15 = param_2[1];
      do {
        uVal_18 = lVal_16 - param_3;
        uVal_14 = param_2[2];
        if (uVal_14 < uVal_18 + lVal_15) {
          (*(func_ptr_t )param_2[3])(param_2);
          lVal_15 = param_2[1];
          uVal_14 = param_2[2];
        }
        uVal_13 = uVal_14 - lVal_15;
        if (uVal_18 <= uVal_14 - lVal_15) {
          uVal_13 = uVal_18;
        }
        if (uVal_13 != 0) {
          lVal_4 = *param_2;
          lVal_2 = lVal_4 + lVal_15;
          if ((uVal_13 < 4) || ((uint64_t)(lVal_2 - param_3) < 0x20)) {
            uVal_14 = 0;
LAB_18064c467:
            uVal_12 = uVal_14;
            for (uVal_18 = uVal_13 & 3; uVal_18 != 0; uVal_18 = uVal_18 - 1) {
              *(uint8_t *)(lVal_2 + uVal_12) = *(uint8_t *)(param_3 + uVal_12);
              uVal_12 = uVal_12 + 1;
            }
            if (uVal_14 - uVal_13 < 0xfffffffffffffffd) {
              lVal_15 = lVal_15 + lVal_4;
              do {
                *(uint8_t *)(lVal_15 + uVal_12) = *(uint8_t *)(param_3 + uVal_12);
                *(uint8_t *)(lVal_15 + 1 + uVal_12) = *(uint8_t *)(param_3 + 1 + uVal_12);
                *(uint8_t *)(lVal_15 + 2 + uVal_12) = *(uint8_t *)(param_3 + 2 + uVal_12);
                *(uint8_t *)(lVal_15 + 3 + uVal_12) = *(uint8_t *)(param_3 + 3 + uVal_12);
                uVal_12 = uVal_12 + 4;
              } while (uVal_13 != uVal_12);
            }
          }
          else if (uVal_13 < 0x20) {
            uVal_18 = 0;
LAB_18064c540:
            uVal_14 = uVal_13 & 0xfffffffffffffffc;
            do {
              *(uint32_t *)(lVal_2 + uVal_18) = *(uint32_t *)(param_3 + uVal_18);
              uVal_18 = uVal_18 + 4;
            } while (uVal_14 != uVal_18);
            if (uVal_13 != uVal_14) goto LAB_18064c467;
          }
          else {
            uVal_14 = uVal_13 & 0xffffffffffffffe0;
            uVal_18 = 0;
            do {
              pU64_1 = (uint32_t *)(param_3 + uVal_18);
              uVal_5 = pU64_1[1];
              uVal_6 = pU64_1[2];
              uVal_7 = pU64_1[3];
              pU64_3 = (uint32_t *)(param_3 + 0x10 + uVal_18);
              uVal_8 = *pU64_3;
              uVal_9 = pU64_3[1];
              uVal_10 = pU64_3[2];
              uVal_11 = pU64_3[3];
              pU64_3 = (uint32_t *)(lVal_4 + lVal_15 + uVal_18);
              *pU64_3 = *pU64_1;
              pU64_3[1] = uVal_5;
              pU64_3[2] = uVal_6;
              pU64_3[3] = uVal_7;
              pU64_1 = (uint32_t *)(lVal_4 + lVal_15 + 0x10 + uVal_18);
              *pU64_1 = uVal_8;
              pU64_1[1] = uVal_9;
              pU64_1[2] = uVal_10;
              pU64_1[3] = uVal_11;
              uVal_18 = uVal_18 + 0x20;
            } while (uVal_14 != uVal_18);
            if (uVal_13 != uVal_14) {
              uVal_18 = uVal_14;
              if ((uVal_13 & 0x1c) == 0) goto LAB_18064c467;
              goto LAB_18064c540;
            }
          }
          lVal_15 = param_2[1];
        }
        lVal_15 = lVal_15 + uVal_13;
        param_2[1] = lVal_15;
        param_3 = param_3 + uVal_13;
      } while (param_3 != lVal_16);
    }
    if (0 < param_5) {
      do {
        lVal_15 = param_2[1];
        uVal_14 = lVal_15 + 1;
        if ((uint64_t)param_2[2] < uVal_14) {
          (*(func_ptr_t )param_2[3])(param_2);
          lVal_15 = param_2[1];
          uVal_14 = lVal_15 + 1;
        }
        param_2[1] = uVal_14;
        *(uint8_t *)(*param_2 + lVal_15) = 0x30;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    *param_1 = param_2;
  }
  else {
    local_268 = 0;
    local_258 = func_0x1800b02d0;
    local_270 = local_250;
    local_260 = 500;
    if (param_4 != 0) {
      lVal_15 = param_4 + param_3;
      do {
        uVal_14 = lVal_15 - param_3;
        if (local_260 < local_268 + uVal_14) {
          (*local_258)(&local_270);
        }
        uVal_18 = local_260 - local_268;
        if (uVal_14 <= local_260 - local_268) {
          uVal_18 = uVal_14;
        }
        if (uVal_18 != 0) {
          if ((uVal_18 < 4) || (local_270 + (local_268 - param_3) < (uint8_t *)0x20)) {
            uVal_14 = 0;
          }
          else {
            if (uVal_18 < 0x20) {
              uVal_13 = 0;
            }
            else {
              uVal_14 = uVal_18 & 0xffffffffffffffe0;
              uVal_13 = 0;
              do {
                pU64_1 = (uint32_t *)(param_3 + uVal_13);
                uVal_5 = pU64_1[1];
                uVal_6 = pU64_1[2];
                uVal_7 = pU64_1[3];
                pU64_3 = (uint32_t *)(param_3 + 0x10 + uVal_13);
                uVal_8 = *pU64_3;
                uVal_9 = pU64_3[1];
                uVal_10 = pU64_3[2];
                uVal_11 = pU64_3[3];
                pU64_3 = (uint32_t *)(local_270 + uVal_13 + local_268);
                *pU64_3 = *pU64_1;
                pU64_3[1] = uVal_5;
                pU64_3[2] = uVal_6;
                pU64_3[3] = uVal_7;
                pU64_1 = (uint32_t *)(local_270 + uVal_13 + local_268 + 0x10);
                *pU64_1 = uVal_8;
                pU64_1[1] = uVal_9;
                pU64_1[2] = uVal_10;
                pU64_1[3] = uVal_11;
                uVal_13 = uVal_13 + 0x20;
              } while (uVal_14 != uVal_13);
              if (uVal_18 == uVal_14) goto LAB_18064c274;
              uVal_13 = uVal_14;
              if ((uVal_18 & 0x1c) == 0) goto LAB_18064c2d9;
            }
            uVal_14 = uVal_18 & 0xfffffffffffffffc;
            do {
              *(uint32_t *)(local_270 + uVal_13 + local_268) = *(uint32_t *)(param_3 + uVal_13);
              uVal_13 = uVal_13 + 4;
            } while (uVal_14 != uVal_13);
            if (uVal_18 == uVal_14) goto LAB_18064c274;
          }
LAB_18064c2d9:
          uVal_12 = uVal_14;
          for (uVal_13 = uVal_18 & 3; uVal_13 != 0; uVal_13 = uVal_13 - 1) {
            local_270[uVal_12 + local_268] = *(uint8_t *)(param_3 + uVal_12);
            uVal_12 = uVal_12 + 1;
          }
          if (uVal_14 - uVal_18 < 0xfffffffffffffffd) {
            do {
              local_270[uVal_12 + local_268] = *(uint8_t *)(param_3 + uVal_12);
              local_270[uVal_12 + local_268 + 1] = *(uint8_t *)(param_3 + 1 + uVal_12);
              local_270[uVal_12 + local_268 + 2] = *(uint8_t *)(param_3 + 2 + uVal_12);
              local_270[uVal_12 + local_268 + 3] = *(uint8_t *)(param_3 + 3 + uVal_12);
              uVal_12 = uVal_12 + 4;
            } while (uVal_18 != uVal_12);
          }
        }
LAB_18064c274:
        local_268 = local_268 + uVal_18;
        param_3 = param_3 + uVal_18;
      } while (param_3 != lVal_15);
    }
    if (0 < param_5) {
      iVal_17 = 0;
      do {
        uVal_14 = local_268 + 1;
        if (local_260 < uVal_14) {
          (*local_258)(&local_270);
          uVal_14 = local_268 + 1;
        }
        local_270[local_268] = 0x30;
        iVal_17 = iVal_17 + 1;
        local_268 = uVal_14;
      } while (iVal_17 != param_5);
    }
    local_58 = local_270;
    local_50 = local_268;
    func_0x180647bc0(param_6,param_1,param_2,&local_58);
    if (local_270 != local_250) {
      thunk_FUN_180695dd0();
    }
  }
  return param_1;
}

// Unwind@18064c650
void Unwind_18064c650(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x28) != param_2 + 0x48) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x18064c690
int64_t ** func_0x18064c690(int64_t **param_1,int64_t *param_2,uint *param_3,int64_t param_4,uint64_t param_5, int **param_6)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  int64_t **ptr2_Long_3;
  uint64_t uVal_4;
  int iVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  uint8_t auStack_88 [32];
  int local_68;
  uint8_t local_60;
  int *local_58;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  uVal_4 = 0;
  if (param_5 <= param_3[2]) {
    uVal_4 = param_3[2] - param_5;
  }
  uVal_7 = uVal_4 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_6 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVal_4;
  if ((uint64_t)param_2[2] < uVal_6) {
    (*(func_ptr_t )param_2[3])(param_2,uVal_6);
  }
  if (uVal_7 != 0) {
    func_0x1800b57e0(&local_48,param_2,uVal_7,param_3);
    param_2 = local_48;
  }
  iVal_5 = **param_6;
  if (iVal_5 != 0) {
    lVal_2 = param_2[1];
    uVal_6 = lVal_2 + 1;
    if ((uint64_t)param_2[2] < uVal_6) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_2 = param_2[1];
      uVal_6 = lVal_2 + 1;
    }
    param_2[1] = uVal_6;
    *(char *)(*param_2 + lVal_2) = (char)(0x202b2d00 >> ((byte)(iVal_5 << 3) & 0x1f));
  }
  local_58 = param_6[5];
  local_60 = *(uint8_t *)param_6[4];
  local_68 = *param_6[3];
  func_0x18064c840(&local_48,param_2,*(uint64_t *)param_6[1],*param_6[2]);
  pLong_8 = local_48;
  iVal_5 = *param_6[6];
  if (0 < iVal_5) {
    do {
      lVal_2 = pLong_8[1];
      uVal_6 = lVal_2 + 1;
      if ((uint64_t)pLong_8[2] < uVal_6) {
        (*(func_ptr_t )pLong_8[3])(pLong_8);
        lVal_2 = pLong_8[1];
        uVal_6 = lVal_2 + 1;
      }
      pLong_8[1] = uVal_6;
      *(uint8_t *)(*pLong_8 + lVal_2) = 0x30;
      iVal_5 = iVal_5 + -1;
    } while (iVal_5 != 0);
  }
  if (uVal_4 != uVal_7) {
    func_0x1800b57e0(&local_48,pLong_8,uVal_4 - uVal_7,param_3);
    pLong_8 = local_48;
  }
  *param_1 = pLong_8;
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_88)) {
    return param_1;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_88);
  fnPtr_1 = (func_ptr_t )swi(3);
  ptr2_Long_3 = (int64_t **)(*fnPtr_1)();
  return ptr2_Long_3;
}

// func_0x18064c840
int64_t ** func_0x18064c840(int64_t **param_1,uint64_t param_2,int64_t param_3,int param_4,uint param_5, char param_6,int64_t param_7)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t *local_280;
  int64_t local_278;
  uint64_t local_270;
  func_ptr_t local_268;
  int64_t local_260 [63];
  int64_t *local_68;
  uint64_t local_60;
  int local_54;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(int64_t *)(param_7 + 0x30) == 0) {
    func_0x1800b1e50(&local_280,param_3,(int)param_5 + param_3,param_2);
    if (param_6 == '\0') {
      *param_1 = local_280;
    }
    else {
      lVal_2 = local_280[1];
      uVal_3 = lVal_2 + 1;
      if ((uint64_t)local_280[2] < uVal_3) {
        (*(func_ptr_t )local_280[3])(local_280);
        lVal_2 = local_280[1];
        uVal_3 = lVal_2 + 1;
      }
      local_280[1] = uVal_3;
      *(char *)(*local_280 + lVal_2) = param_6;
      func_0x1800b1e50(param_1,(int)param_5 + param_3,param_3 + param_4,local_280);
    }
  }
  else {
    local_278 = 0;
    local_268 = func_0x1800b02d0;
    local_280 = local_260;
    local_270 = 500;
    lVal_2 = param_3 + (int)param_5;
    local_54 = param_4;
    func_0x1800b1e50(&local_50,param_3,lVal_2,&local_280);
    if (param_6 != '\0') {
      lVal_1 = local_50[1];
      uVal_3 = lVal_1 + 1;
      if ((uint64_t)local_50[2] < uVal_3) {
        (*(func_ptr_t )local_50[3])(local_50);
        lVal_1 = local_50[1];
        uVal_3 = lVal_1 + 1;
      }
      local_50[1] = uVal_3;
      *(char *)(*local_50 + lVal_1) = param_6;
      func_0x1800b1e50(&local_50,lVal_2,param_3 + local_54,local_50);
    }
    local_60 = (uint64_t)param_5;
    local_68 = local_280;
    func_0x180647bc0(param_7,&local_50,param_2,&local_68);
    func_0x1800b1e50(param_1,(int64_t)local_280 + (int64_t)(int)param_5,
                  (int64_t)local_280 + local_278,param_2);
    if (local_280 != local_260) {
      thunk_FUN_180695dd0();
    }
  }
  return param_1;
}

// Unwind@18064ca20
void Unwind_18064ca20(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x28) != param_2 + 0x48) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x18064ca60
int64_t * func_0x18064ca60(int64_t *param_1,int64_t param_2,uint *param_3,int64_t param_4,uint64_t param_5, uint64_t param_6)
{
  func_ptr_t fnPtr_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t auStack_68 [40];
  int64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_3 = 0;
  if (param_5 <= param_3[2]) {
    uVal_3 = param_3[2] - param_5;
  }
  uVal_5 = uVal_3 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_4 = param_4 + *(int64_t *)(param_2 + 8) + (*param_3 >> 0xf & 7) * uVal_3;
  if (*(uint64_t *)(param_2 + 0x10) < uVal_4) {
    (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_4);
  }
  if (uVal_5 != 0) {
    func_0x1800b57e0(&local_40,param_2,uVal_5,param_3);
    param_2 = local_40;
  }
  func_0x18064cb70(param_6,&local_40,param_2);
  if (uVal_3 != uVal_5) {
    func_0x1800b57e0(&local_40,local_40,uVal_3 - uVal_5,param_3);
  }
  *param_1 = local_40;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  pLong_2 = (int64_t *)(*fnPtr_1)();
  return pLong_2;
}

// func_0x18064cb70
int64_t ** func_0x18064cb70(int **param_1,int64_t **param_2,int64_t *param_3)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  uint8_t uVal_4;
  int64_t lVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  int64_t lVal_15;
  int iVal_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  int64_t lVal_19;
  uint64_t uVal_20;
  
  iVal_16 = **param_1;
  if (iVal_16 != 0) {
    lVal_15 = param_3[1];
    uVal_17 = lVal_15 + 1;
    if ((uint64_t)param_3[2] < uVal_17) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_15 = param_3[1];
      uVal_17 = lVal_15 + 1;
    }
    param_3[1] = uVal_17;
    *(char *)(*param_3 + lVal_15) = (char)(0x202b2d00 >> ((byte)(iVal_16 << 3) & 0x1f));
  }
  lVal_15 = param_3[1];
  uVal_17 = lVal_15 + 1;
  if ((uint64_t)param_3[2] < uVal_17) {
    (*(func_ptr_t )param_3[3])(param_3);
    lVal_15 = param_3[1];
    uVal_17 = lVal_15 + 1;
  }
  param_3[1] = uVal_17;
  *(uint8_t *)(*param_3 + lVal_15) = 0x30;
  if (*(char *)param_1[1] == '\x01') {
    uVal_4 = *(uint8_t *)param_1[2];
    lVal_15 = param_3[1];
    uVal_17 = lVal_15 + 1;
    if ((uint64_t)param_3[2] < uVal_17) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_15 = param_3[1];
      uVal_17 = lVal_15 + 1;
    }
    param_3[1] = uVal_17;
    *(uint8_t *)(*param_3 + lVal_15) = uVal_4;
    iVal_16 = *param_1[3];
    if (0 < iVal_16) {
      do {
        lVal_15 = param_3[1];
        uVal_17 = lVal_15 + 1;
        if ((uint64_t)param_3[2] < uVal_17) {
          (*(func_ptr_t )param_3[3])(param_3);
          lVal_15 = param_3[1];
          uVal_17 = lVal_15 + 1;
        }
        param_3[1] = uVal_17;
        *(uint8_t *)(*param_3 + lVal_15) = 0x30;
        iVal_16 = iVal_16 + -1;
      } while (iVal_16 != 0);
    }
    if ((int64_t)*param_1[5] != 0) {
      lVal_15 = *(int64_t *)param_1[4];
      lVal_19 = *param_1[5] + lVal_15;
      lVal_14 = param_3[1];
      do {
        uVal_20 = lVal_19 - lVal_15;
        uVal_17 = param_3[2];
        if (uVal_17 < uVal_20 + lVal_14) {
          (*(func_ptr_t )param_3[3])(param_3);
          lVal_14 = param_3[1];
          uVal_17 = param_3[2];
        }
        uVal_13 = uVal_17 - lVal_14;
        if (uVal_20 <= uVal_17 - lVal_14) {
          uVal_13 = uVal_20;
        }
        if (uVal_13 != 0) {
          lVal_5 = *param_3;
          lVal_1 = lVal_5 + lVal_14;
          if ((uVal_13 < 4) || ((uint64_t)(lVal_1 - lVal_15) < 0x20)) {
            uVal_17 = 0;
LAB_18064cce7:
            uVal_18 = uVal_17;
            for (uVal_20 = uVal_13 & 3; uVal_20 != 0; uVal_20 = uVal_20 - 1) {
              *(uint8_t *)(lVal_1 + uVal_18) = *(uint8_t *)(lVal_15 + uVal_18);
              uVal_18 = uVal_18 + 1;
            }
            if (uVal_17 - uVal_13 < 0xfffffffffffffffd) {
              lVal_14 = lVal_14 + lVal_5;
              do {
                *(uint8_t *)(lVal_14 + uVal_18) = *(uint8_t *)(lVal_15 + uVal_18);
                *(uint8_t *)(lVal_14 + 1 + uVal_18) = *(uint8_t *)(lVal_15 + 1 + uVal_18);
                *(uint8_t *)(lVal_14 + 2 + uVal_18) = *(uint8_t *)(lVal_15 + 2 + uVal_18);
                *(uint8_t *)(lVal_14 + 3 + uVal_18) = *(uint8_t *)(lVal_15 + 3 + uVal_18);
                uVal_18 = uVal_18 + 4;
              } while (uVal_13 != uVal_18);
            }
          }
          else if (uVal_13 < 0x20) {
            uVal_20 = 0;
LAB_18064cdc0:
            uVal_17 = uVal_13 & 0xfffffffffffffffc;
            do {
              *(uint32_t *)(lVal_1 + uVal_20) = *(uint32_t *)(lVal_15 + uVal_20);
              uVal_20 = uVal_20 + 4;
            } while (uVal_17 != uVal_20);
            if (uVal_13 != uVal_17) goto LAB_18064cce7;
          }
          else {
            uVal_17 = uVal_13 & 0xffffffffffffffe0;
            uVal_20 = 0;
            do {
              pU64_2 = (uint32_t *)(lVal_15 + uVal_20);
              uVal_6 = pU64_2[1];
              uVal_7 = pU64_2[2];
              uVal_8 = pU64_2[3];
              pU64_3 = (uint32_t *)(lVal_15 + 0x10 + uVal_20);
              uVal_9 = *pU64_3;
              uVal_10 = pU64_3[1];
              uVal_11 = pU64_3[2];
              uVal_12 = pU64_3[3];
              pU64_3 = (uint32_t *)(lVal_5 + lVal_14 + uVal_20);
              *pU64_3 = *pU64_2;
              pU64_3[1] = uVal_6;
              pU64_3[2] = uVal_7;
              pU64_3[3] = uVal_8;
              pU64_2 = (uint32_t *)(lVal_5 + lVal_14 + 0x10 + uVal_20);
              *pU64_2 = uVal_9;
              pU64_2[1] = uVal_10;
              pU64_2[2] = uVal_11;
              pU64_2[3] = uVal_12;
              uVal_20 = uVal_20 + 0x20;
            } while (uVal_17 != uVal_20);
            if (uVal_13 != uVal_17) {
              uVal_20 = uVal_17;
              if ((uVal_13 & 0x1c) == 0) goto LAB_18064cce7;
              goto LAB_18064cdc0;
            }
          }
          lVal_14 = param_3[1];
        }
        lVal_14 = lVal_14 + uVal_13;
        param_3[1] = lVal_14;
        lVal_15 = lVal_15 + uVal_13;
      } while (lVal_15 != lVal_19);
    }
  }
  *param_2 = param_3;
  return param_2;
}

// func_0x18064ce10
int64_t * func_0x18064ce10(int64_t *param_1,int64_t param_2,uint *param_3,int64_t param_4,uint64_t param_5, uint64_t param_6)
{
  func_ptr_t fnPtr_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t auStack_68 [40];
  int64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_3 = 0;
  if (param_5 <= param_3[2]) {
    uVal_3 = param_3[2] - param_5;
  }
  uVal_5 = uVal_3 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_4 = param_4 + *(int64_t *)(param_2 + 8) + (*param_3 >> 0xf & 7) * uVal_3;
  if (*(uint64_t *)(param_2 + 0x10) < uVal_4) {
    (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_4);
  }
  if (uVal_5 != 0) {
    func_0x1800b57e0(&local_40,param_2,uVal_5,param_3);
    param_2 = local_40;
  }
  func_0x18064be10(param_6,&local_40,param_2);
  if (uVal_3 != uVal_5) {
    func_0x1800b57e0(&local_40,local_40,uVal_3 - uVal_5,param_3);
  }
  *param_1 = local_40;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  pLong_2 = (int64_t *)(*fnPtr_1)();
  return pLong_2;
}

// func_0x18064cf20
/* WARNING: Removing unreachable block (ram,0x00018064d1d7) */
/* WARNING: Removing unreachable block (ram,0x00018064d1d7) */
int64_t ** func_0x18064cf20(int64_t **param_1,int64_t *param_2,double param_3,uint64_t *param_4, uint64_t param_5)
{
  uint uVal_1;
  func_ptr_t fnPtr_2;
  uint64_t uVal_3;
  char ch_4;
  int iVal_5;
  int64_t **ptr2_Long_6;
  uint8_t *pU64_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  bool bFlag_13;
  uint64_t in_stack_fffffffffffffd08;
  uint32_t uVal_14;
  uint64_t in_stack_fffffffffffffd10;
  uint32_t uVal_15;
  uint64_t local_2d8;
  uint8_t *local_2d0;
  uint64_t local_2c8;
  func_ptr_t local_2c0;
  uint8_t local_2b8;
  double local_c0 [2];
  uint32_t local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  char *local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint8_t **local_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint8_t local_51;
  uint64_t local_50;
  
  uVal_15 = (uint32_t)((uint64_t)in_stack_fffffffffffffd10 >> 0x20);
  uVal_14 = (uint32_t)((uint64_t)in_stack_fffffffffffffd08 >> 0x20);
  uStack_60 = local_68;
  local_50 = 0xfffffffffffffffe;
  if ((*(byte *)((int64_t)param_4 + 1) & 0x40) != 0) {
    local_b0 = 10;
    local_c0[0] = param_3;
    ch_4 = func_0x18063f160(param_2,local_c0,param_4,param_5);
    if (ch_4 != '\0') {
      *param_1 = param_2;
      return param_1;
    }
  }
  iVal_5 = func_0x1806823d0();
  uVal_11 = 1;
  if (iVal_5 == 0) {
    uVal_11 = *(uint *)param_4 >> 10 & 3;
  }
  if (0x7fefffffffffffff < ((uint64_t)param_3 & 0x7fffffffffffffff)) {
    uVal_8 = *param_4;
    uStack_80 = param_4[1];
    local_88._0_4_ = (uint)uVal_8;
    uVal_3 = uVal_8;
    if ((((uint)local_88 & 0x38000) == 0x8000) &&
       (local_88._4_1_ = (char)(uVal_8 >> 0x20), local_88._4_1_ == '0')) {
      uVal_3 = local_88;
    }
    local_88 = uVal_3;
    bFlag_13 = (uVal_8 & 0x1000) == 0;
    pU64_7 = &DAT_180760383;
    if (bFlag_13) {
      pU64_7 = &DAT_18075f3fa;
    }
    local_2d0 = &DAT_1807603b6;
    if (bFlag_13) {
      local_2d0 = &DAT_18075fded;
    }
    if (NAN(param_3)) {
      local_2d0 = pU64_7;
    }
    lVal_9 = 4 - (uint64_t)(uVal_11 == 0);
    local_2d8 = (uint8_t **)CONCAT44(local_2d8._4_4_,uVal_11);
    func_0x18036a520(param_1,param_2,&local_88,lVal_9,lVal_9,&local_2d8);
    return param_1;
  }
  if ((uVal_11 != 0) && ((*(uint *)param_4 & 0x38) == 0x20)) {
    lVal_9 = param_2[1];
    uVal_8 = lVal_9 + 1;
    if ((uint64_t)param_2[2] < uVal_8) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_9 = param_2[1];
      uVal_8 = lVal_9 + 1;
    }
    param_2[1] = uVal_8;
    *(char *)(*param_2 + lVal_9) = (char)(0x202b2d00 >> (sbyte)(uVal_11 << 3));
    uVal_11 = 0;
    if (*(uint *)(param_4 + 1) != 0) {
      *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) - 1;
    }
  }
  uVal_12 = *(uint *)param_4;
  uVal_1 = *(uint *)((int64_t)param_4 + 0xc);
  uVal_10 = uVal_1;
  if (((int)uVal_1 < 0) && (uVal_10 = 6, (uVal_12 & 7) == 0)) {
    func_0x1806412c0(&local_2d8);
    func_0x18064d380(param_1,param_2,&local_2d8,param_4,CONCAT44(uVal_14,uVal_11),CONCAT44(uVal_15,0x10),
                  param_5);
    return param_1;
  }
  local_2d0 = (uint8_t *)0x0;
  local_2c0 = func_0x1800b02d0;
  local_2d8 = (uint8_t **)&local_2b8;
  local_2c8 = 500;
  if (((byte)uVal_12 & 7) == 1) {
    if (uVal_10 == 0x7fffffff) {
      local_51 = 1;
      local_70 = std::exception::vftable;
      _local_68 = (uint8_t  [16])0x0;
      local_98 = "number is too big";
      local_90 = 1;
      func_0x18067b3f0(&local_98,local_68);
      local_70 = &PTR_FUN_1806b0aa8;
      func_0x18067a120(&local_70,&DAT_180768d70);
      fnPtr_2 = (func_ptr_t )swi(3);
      ptr2_Long_6 = (int64_t **)(*fnPtr_2)();
      return ptr2_Long_6;
    }
    uVal_10 = uVal_10 + 1;
    if (uVal_1 != 0) {
      *(byte *)((int64_t)param_4 + 1) = *(byte *)((int64_t)param_4 + 1) | 0x20;
    }
  }
  else if ((uVal_12 & 7) == 2) {
    if (uVal_1 != 0) {
      uVal_12 = uVal_12 | 0x2000;
      *(uint *)param_4 = uVal_12;
    }
  }
  else {
    if ((uVal_12 & 7) == 4) {
      if (uVal_11 != 0) {
        uVal_12 = uVal_11 << 3;
        local_2b8 = (uint8_t)(0x202b2d00 >> (sbyte)uVal_12);
      }
      local_2d0 = (uint8_t *)(uint64_t)(uVal_11 != 0);
      local_a8 = *(uint *)param_4;
      uStack_a4 = *(uint *)((int64_t)param_4 + 4);
      uStack_a0 = *(uint *)(param_4 + 1);
      uStack_9c = *(uint *)((int64_t)param_4 + 0xc);
      func_0x180645de0(uVal_12,&local_a8,&local_2d8);
      local_70 = local_2d8;
      local_68 = (uint8_t  [8])local_2d0;
      func_0x180648850(param_1,param_2,param_4,local_2d0,local_2d0,&local_70);
      goto LAB_18064d28e;
    }
    uVal_10 = uVal_10 + (uVal_10 == 0);
  }
  local_68._4_4_ = func_0x180646280(uVal_12,uVal_10,param_4,0,&local_2d8);
  *(uint *)((int64_t)param_4 + 0xc) = uVal_10;
  local_70 = local_2d8;
  local_68._0_4_ = local_2d0._0_4_;
  func_0x18064b790(param_1,param_2,&local_70,param_4,uVal_11,CONCAT44(uVal_15,0x10),param_5);
LAB_18064d28e:
  if (local_2d8 != (uint8_t **)&local_2b8) {
    thunk_FUN_180695dd0();
  }
  return param_1;
}

// Unwind@18064d330
void Unwind_18064d330(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x40) != param_2 + 0x60) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x18064d380
uint64_t * func_0x18064d380(uint64_t *param_1,int64_t param_2,uint64_t *param_3,uint *param_4,uint param_5, uint param_6,uint64_t param_7)
{
  func_ptr_t fnPtr_1;
  char ch_2;
  uint64_t uVal_3;
  uint64_t *pU64_4;
  uint uVal_5;
  int iVal_6;
  uint64_t uVal_7;
  uint uVal_8;
  int64_t lVal_9;
  int iVal_10;
  int64_t lVal_11;
  uint8_t auStack_b8 [32];
  uint64_t uStack_98;
  uint *puStack_90;
  uint uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint auStack_70 [2];
  uint32_t uStack_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  int iStack_58;
  char cStack_54;
  uint32_t uStack_50;
  byte bStack_4c;
  uint uStack_48;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_b8;
  uVal_5 = *param_4;
  uVal_3 = 0x2e;
  if ((uVal_5 & 0x4000) != 0) {
    uVal_3 = func_0x180641980(param_7);
    uVal_5 = *param_4;
  }
  ch_2 = (char)uVal_3;
  uVal_7 = *param_3 | 1;
  lVal_11 = 0x3f;
  if (uVal_7 != 0) {
    for (; uVal_7 >> lVal_11 == 0; lVal_11 = lVal_11 + -1) {
    }
  }
  iVal_6 = (uint)(byte)(&DAT_1806b0ac0)[lVal_11] -
          (uint)(*param_3 <
                *(uint64_t *)(&DAT_1806b0b00 + (uint64_t)(byte)(&DAT_1806b0ac0)[lVal_11] * 8));
  if (((byte)uVal_5 & 7) == 1) {
LAB_18064d45a:
    uStack_48 = (iVal_6 + *(int *)(param_3 + 1)) - 1;
    lVal_11 = (int64_t)(int)((iVal_6 + 1) - (uint)(param_5 == 0));
    if ((uVal_5 & 0x2000) == 0) {
      uVal_7 = 0;
      uVal_3 = uVal_3 & 0xff;
      if (iVal_6 == 1) {
        uVal_3 = uVal_7;
      }
      ch_2 = (char)uVal_3;
    }
    else {
      uVal_7 = 0;
      if (0 < (int)(param_4[3] - iVal_6)) {
        uVal_7 = (uint64_t)(param_4[3] - iVal_6);
      }
      lVal_11 = lVal_11 + uVal_7;
    }
    uVal_8 = -uStack_48;
    if (0 < (int)uStack_48) {
      uVal_8 = uStack_48;
    }
    lVal_9 = 4;
    if (99 < uVal_8) {
      lVal_9 = 6 - (uint64_t)(uVal_8 < 1000);
    }
    lVal_11 = (lVal_9 + lVal_11 + 1) - (uint64_t)(ch_2 == '\0');
    bStack_4c = ((uVal_5 & 0x1000) == 0) << 5 | 0x45;
    auStack_70[0] = param_5;
    uStack_68 = *(uint32_t *)param_3;
    uStack_64 = *(uint32_t *)((int64_t)param_3 + 4);
    uStack_60 = *(uint32_t *)(param_3 + 1);
    uStack_5c = *(uint32_t *)((int64_t)param_3 + 0xc);
    uStack_50 = (uint32_t)uVal_7;
    iStack_58 = iVal_6;
    cStack_54 = ch_2;
    if ((int)param_4[2] < 1) {
      uVal_3 = lVal_11 + *(int64_t *)(param_2 + 8);
      if (*(uint64_t *)(param_2 + 0x10) < uVal_3) {
        (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_3);
      }
      func_0x18064da20(auStack_70,&uStack_78,param_2);
      *param_1 = uStack_78;
    }
    else {
      puStack_90 = auStack_70;
      uStack_98 = lVal_11;
      func_0x18064e820(param_1,param_2,param_4,lVal_11);
    }
  }
  else {
    if ((uVal_5 & 7) != 2) {
      iVal_10 = iVal_6 + *(int *)(param_3 + 1);
      uVal_8 = param_4[3];
      if ((int)param_4[3] < 1) {
        uVal_8 = param_6;
      }
      if ((iVal_10 < -3) || ((int)uVal_8 < iVal_10)) goto LAB_18064d45a;
    }
    uStack_80 = param_7;
    uStack_88 = param_5;
    uStack_98 = CONCAT71(uStack_98._1_7_,ch_2);
    puStack_90 = param_4;
    func_0x18064d590(param_1,param_2);
  }
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_b8)) {
    return param_1;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_b8);
  fnPtr_1 = (func_ptr_t )swi(3);
  pU64_4 = (uint64_t *)(*fnPtr_1)();
  return pU64_4;
}

// func_0x18064d590
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
uint64_t func_0x18064d590(uint64_t param_1,uint64_t param_2,int64_t param_3,int param_4,uint64_t param_5, uint *param_6,int param_7,uint64_t param_8)
{
  char ch_1;
  uint uVal_2;
  uint *pU64_3;
  int iVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t *******ptr7_U64_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t *******ptr7_U64_10;
  int iVal_11;
  uint uVal_12;
  uint64_t local_d0;
  int64_t local_c8;
  int *local_c0;
  uint64_t *******local_b8;
  uint *local_b0;
  uint64_t *******local_a8;
  uint32_t *local_a0;
  int local_94;
  uint64_t *******local_90;
  uint32_t *local_88;
  uint8_t *local_80;
  uint64_t *local_78;
  uint64_t local_70;
  int *local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  uint32_t local_4c;
  uint64_t local_48;
  
  pU64_3 = param_6;
  local_48 = 0xfffffffffffffffe;
  iVal_4 = *(int *)(param_3 + 8);
  iVal_11 = iVal_4 + param_4;
  lVal_9 = (int64_t)(int)((param_4 + 1) - (uint)(param_7 == 0));
  local_c8 = param_3;
  local_94 = iVal_11;
  local_50 = param_4;
  if ((int64_t)iVal_4 < 0) {
    if (iVal_11 < 1) {
      uVal_12 = -iVal_11;
      local_d0 = (uint32_t *)CONCAT44(local_d0._4_4_,uVal_12);
      if (param_4 == 0) {
        uVal_2 = param_6[3];
        if (SBORROW4(uVal_2,uVal_12) != (int)(uVal_2 + iVal_11) < 0 && -1 < (int)uVal_2) {
          local_d0 = (uint32_t *)CONCAT44(local_d0._4_4_,uVal_2);
          uVal_12 = uVal_2;
        }
        if (uVal_12 == 0) {
          local_4c = CONCAT31(local_4c._1_3_,(char)((*param_6 & 0x2000) >> 0xd));
          iVal_4 = 2 - (uint)((*param_6 & 0x2000) == 0);
          uVal_12 = 0;
          goto LAB_18064d906;
        }
      }
      local_4c = CONCAT31(local_4c._1_3_,1);
      iVal_4 = 2;
LAB_18064d906:
      lVal_9 = (uint64_t)(uVal_12 + iVal_4) + lVal_9;
      local_90 = (uint64_t *******)&param_7;
      local_88 = &local_4c;
      local_80 = (uint8_t *)&param_5;
      local_78 = &local_d0;
      local_68 = &local_50;
      local_70 = param_3;
      func_0x180643e30(param_1,param_2,param_6,lVal_9,lVal_9,&local_90);
      return param_1;
    }
    lVal_5 = 0;
    local_4c = param_6[3] - param_4 & (int)(*param_6 << 0x12) >> 0x1f;
    uVal_12 = local_4c;
    if ((int)local_4c < 1) {
      uVal_12 = 0;
    }
    func_0x1806473c0(&local_90,param_8,*param_6 >> 0xe & 1);
    if (local_60 != 0) {
      ptr7_U64_10 = &local_90;
      if (0xf < local_78) {
        ptr7_U64_10 = local_90;
      }
      ptr7_U64_7 = (uint64_t *******)((int64_t)local_80 + (int64_t)ptr7_U64_10);
      lVal_5 = 0;
      iVal_4 = 0;
      do {
        if (ptr7_U64_10 == ptr7_U64_7) {
          ch_1 = *(char *)((int64_t)ptr7_U64_7 + -1);
        }
        else {
          ch_1 = *(char *)ptr7_U64_10;
          if ((byte)(ch_1 + 0x81U) < 0x82) break;
          ptr7_U64_10 = (uint64_t *******)((int64_t)ptr7_U64_10 + 1);
        }
        iVal_4 = iVal_4 + ch_1;
        if (iVal_11 <= iVal_4) break;
        lVal_5 = lVal_5 + 1;
      } while( true );
    }
    lVal_9 = lVal_5 + (uint64_t)uVal_12 + lVal_9 + 1;
    local_d0 = &param_7;
    local_c0 = &local_50;
    local_b8 = (uint64_t *******)&local_94;
    local_b0 = (uint *)&param_5;
    local_a8 = &local_90;
    local_a0 = &local_4c;
    func_0x18064e110(param_1,param_2,pU64_3,lVal_9,lVal_9,&local_d0);
  }
  else {
    lVal_9 = iVal_4 + lVal_9;
    local_4c = param_6[3] - iVal_11;
    uVal_12 = *param_6;
    if ((uVal_12 & 0x2000) != 0) {
      lVal_9 = lVal_9 + 1;
      if ((uVal_12 & 7) == 2 || 0 < (int)local_4c) {
        if (0 < (int)local_4c) {
          lVal_9 = lVal_9 + (uint64_t)local_4c;
        }
      }
      else {
        local_4c = 0;
      }
    }
    func_0x1806473c0(&local_90,param_8,uVal_12 >> 0xe & 1);
    if (local_60 != 0) {
      ptr7_U64_10 = &local_90;
      if (0xf < local_78) {
        ptr7_U64_10 = local_90;
      }
      ptr7_U64_7 = (uint64_t *******)((int64_t)local_80 + (int64_t)ptr7_U64_10);
      lVal_5 = 0;
      iVal_4 = 0;
      do {
        if (ptr7_U64_10 == ptr7_U64_7) {
          ch_1 = *(char *)((int64_t)ptr7_U64_7 + -1);
        }
        else {
          ch_1 = *(char *)ptr7_U64_10;
          if ((byte)(ch_1 + 0x81U) < 0x82) goto LAB_18064d7dd;
          ptr7_U64_10 = (uint64_t *******)((int64_t)ptr7_U64_10 + 1);
        }
        iVal_4 = iVal_4 + ch_1;
        if (iVal_11 <= iVal_4) goto LAB_18064d7dd;
        lVal_5 = lVal_5 + 1;
      } while( true );
    }
    lVal_5 = 0;
LAB_18064d7dd:
    local_d0 = &param_7;
    local_c0 = &local_50;
    local_b8 = &local_90;
    local_b0 = pU64_3;
    local_a8 = (uint64_t *******)&param_5;
    local_a0 = &local_4c;
    func_0x18064dd20(param_1,param_2,pU64_3,lVal_9 + lVal_5,lVal_9 + lVal_5,&local_d0);
  }
  if (0xf < local_58) {
    uVal_6 = local_58 + 1;
    uVal_8 = local_70;
    if (0xfff < uVal_6) {
      uVal_8 = *(uint64_t *)(local_70 - 8);
      if (0x1f < (local_70 - 8) - uVal_8) goto LAB_18064d996;
      uVal_6 = local_58 + 0x28;
    }
    thunk_FUN_180695dd0(uVal_8,uVal_6);
  }
  local_60 = 0;
  local_58 = 0xf;
  local_70 = local_70 & 0xffffffffffffff00;
  if (0xf < local_78) {
    uVal_6 = (int64_t)local_78 + 1;
    ptr7_U64_10 = local_90;
    if (0xfff < uVal_6) {
      ptr7_U64_10 = (uint64_t *******)local_90[-1];
      if ((char *)0x1f < (char *)((int64_t)local_90 + (-8 - (int64_t)ptr7_U64_10))) {
LAB_18064d996:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = (int64_t)local_78 + 0x28;
    }
    thunk_FUN_180695dd0(ptr7_U64_10,uVal_6);
  }
  return param_1;
}

// Unwind@18064d9a0
void Unwind_18064d9a0(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0x88);
  return;
}

// Unwind@18064d9e0
void Unwind_18064d9e0(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0x88);
  return;
}

// func_0x18064da20
uint64_t func_0x18064da20(int *param_1,uint64_t param_2,int64_t *param_3)
{
  char ch_1;
  uint8_t uVal_2;
  bool bFlag_3;
  func_ptr_t fnPtr_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  int iVal_9;
  int64_t lVal_10;
  uint uVal_11;
  uint uVal_12;
  uint64_t uVal_13;
  uint8_t auStack_88 [40];
  int64_t *local_60;
  uint16_t local_58;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  iVal_9 = *param_1;
  if (iVal_9 != 0) {
    lVal_6 = param_3[1];
    uVal_7 = lVal_6 + 1;
    if ((uint64_t)param_3[2] < uVal_7) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_6 = param_3[1];
      uVal_7 = lVal_6 + 1;
    }
    param_3[1] = uVal_7;
    *(char *)(*param_3 + lVal_6) = (char)(0x202b2d00 >> ((byte)(iVal_9 << 3) & 0x1f));
  }
  ch_1 = *(char *)(param_1 + 7);
  uVal_12 = param_1[6];
  uVal_8 = (uint64_t)uVal_12;
  lVal_6 = (int64_t)(int)uVal_12;
  uVal_7 = *(uint64_t *)(param_1 + 2);
  if (ch_1 != '\0') {
    lVal_6 = (int64_t)&local_58 + lVal_6 + 1;
    lVal_10 = lVal_6;
    if (2 < (int)uVal_12) {
      uVal_11 = (uVal_12 - 1 >> 1) + 1;
      uVal_8 = uVal_7;
      do {
        uVal_7 = uVal_8 / 100;
        *(uint16_t *)(lVal_10 + -2) = *(uint16_t *)(&DAT_1806afb50 + (uVal_8 % 100) * 2);
        lVal_10 = lVal_10 + -2;
        uVal_11 = uVal_11 - 1;
        uVal_8 = uVal_7;
      } while (1 < uVal_11);
    }
    uVal_8 = uVal_7;
    if ((uVal_12 - 1 & 1) != 0) {
      uVal_8 = uVal_7 / 10;
      *(byte *)(lVal_10 + -1) = (char)uVal_7 + (char)uVal_8 * -10 | 0x30;
      lVal_10 = lVal_10 + -1;
    }
    *(char *)(lVal_10 + -1) = ch_1;
    uVal_12 = 1;
    if (99 < uVal_8) {
      uVal_13 = 1;
      uVal_7 = uVal_8;
      do {
        uVal_12 = (int)uVal_13 - 2;
        uVal_13 = (uint64_t)uVal_12;
        uVal_8 = uVal_7 / 100;
        *(uint16_t *)(lVal_10 + (uVal_13 - 2)) = *(uint16_t *)(&DAT_1806afb50 + (uVal_7 % 100) * 2)
        ;
        bFlag_3 = 9999 < uVal_7;
        uVal_7 = uVal_8;
      } while (bFlag_3);
    }
    if (uVal_8 < 10) {
      *(byte *)(lVal_10 + ((uint64_t)(uVal_12 - 1) - 2)) = (byte)uVal_8 | 0x30;
    }
    else {
      *(uint16_t *)(lVal_10 + ((uint64_t)(uVal_12 - 2) - 2)) =
           *(uint16_t *)(&DAT_1806afb50 + uVal_8 * 2);
    }
    goto LAB_18064dc5b;
  }
  uVal_13 = uVal_7;
  if (uVal_7 < 100) {
    if (uVal_7 < 10) goto LAB_18064dc48;
LAB_18064dbf9:
    *(uint16_t *)((int64_t)&local_58 + (uint64_t)(uVal_12 - 2)) =
         *(uint16_t *)(&DAT_1806afb50 + uVal_7 * 2);
  }
  else {
    do {
      uVal_12 = (int)uVal_8 - 2;
      uVal_8 = (uint64_t)uVal_12;
      uVal_7 = uVal_13 / 100;
      *(uint16_t *)((int64_t)&local_58 + uVal_8) =
           *(uint16_t *)(&DAT_1806afb50 + (uVal_13 % 100) * 2);
      bFlag_3 = 9999 < uVal_13;
      uVal_13 = uVal_7;
    } while (bFlag_3);
    if (9 < uVal_7) goto LAB_18064dbf9;
LAB_18064dc48:
    *(byte *)((int64_t)&local_58 + (uint64_t)(uVal_12 - 1)) = (byte)uVal_7 | 0x30;
  }
  lVal_6 = (int64_t)&local_58 + lVal_6;
LAB_18064dc5b:
  func_0x1800b1e50(&local_60,&local_58,lVal_6,param_3);
  iVal_9 = param_1[8];
  if (0 < iVal_9) {
    do {
      lVal_6 = local_60[1];
      uVal_7 = lVal_6 + 1;
      if ((uint64_t)local_60[2] < uVal_7) {
        (*(func_ptr_t )local_60[3])(local_60);
        lVal_6 = local_60[1];
        uVal_7 = lVal_6 + 1;
      }
      local_60[1] = uVal_7;
      *(uint8_t *)(*local_60 + lVal_6) = 0x30;
      iVal_9 = iVal_9 + -1;
    } while (iVal_9 != 0);
  }
  uVal_2 = *(uint8_t *)(param_1 + 9);
  lVal_6 = local_60[1];
  uVal_7 = lVal_6 + 1;
  if ((uint64_t)local_60[2] < uVal_7) {
    (*(func_ptr_t )local_60[3])(local_60);
    lVal_6 = local_60[1];
    uVal_7 = lVal_6 + 1;
  }
  local_60[1] = uVal_7;
  *(uint8_t *)(*local_60 + lVal_6) = uVal_2;
  func_0x18036a3b0(param_2,param_1[10],local_60);
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_88)) {
    return param_2;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_88);
  fnPtr_4 = (func_ptr_t )swi(3);
  uVal_5 = (*fnPtr_4)();
  return uVal_5;
}

// func_0x18064dd20
int64_t * func_0x18064dd20(int64_t *param_1,int64_t param_2,uint *param_3,int64_t param_4,uint64_t param_5, uint64_t param_6)
{
  func_ptr_t fnPtr_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t auStack_68 [40];
  int64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_3 = 0;
  if (param_5 <= param_3[2]) {
    uVal_3 = param_3[2] - param_5;
  }
  uVal_5 = uVal_3 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_4 = param_4 + *(int64_t *)(param_2 + 8) + (*param_3 >> 0xf & 7) * uVal_3;
  if (*(uint64_t *)(param_2 + 0x10) < uVal_4) {
    (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_4);
  }
  if (uVal_5 != 0) {
    func_0x1800b57e0(&local_40,param_2,uVal_5,param_3);
    param_2 = local_40;
  }
  func_0x18064de30(param_6,&local_40,param_2);
  if (uVal_3 != uVal_5) {
    func_0x1800b57e0(&local_40,local_40,uVal_3 - uVal_5,param_3);
  }
  *param_1 = local_40;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  pLong_2 = (int64_t *)(*fnPtr_1)();
  return pLong_2;
}

// func_0x18064de30
int64_t ** func_0x18064de30(int **param_1,int64_t **param_2,int64_t *param_3)
{
  uint8_t uVal_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  int64_t **ptr2_Long_4;
  uint64_t uVal_5;
  int iVal_6;
  uint8_t auStack_68 [32];
  int local_48;
  int *local_40;
  int64_t *local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  iVal_6 = **param_1;
  if (iVal_6 != 0) {
    lVal_3 = param_3[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_3[2] < uVal_5) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_3 = param_3[1];
      uVal_5 = lVal_3 + 1;
    }
    param_3[1] = uVal_5;
    *(char *)(*param_3 + lVal_3) = (char)(0x202b2d00 >> ((byte)(iVal_6 << 3) & 0x1f));
  }
  local_40 = param_1[3];
  local_48 = *(int *)((int64_t)param_1[1] + 8);
  func_0x18064df70(&local_30,param_3,*(uint64_t *)param_1[1],*param_1[2]);
  if ((*(byte *)((int64_t)param_1[4] + 1) & 0x20) != 0) {
    uVal_1 = *(uint8_t *)param_1[5];
    lVal_3 = local_30[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)local_30[2] < uVal_5) {
      (*(func_ptr_t )local_30[3])(local_30);
      lVal_3 = local_30[1];
      uVal_5 = lVal_3 + 1;
    }
    local_30[1] = uVal_5;
    *(uint8_t *)(*local_30 + lVal_3) = uVal_1;
    iVal_6 = *param_1[6];
    if (0 < iVal_6) {
      do {
        lVal_3 = local_30[1];
        uVal_5 = lVal_3 + 1;
        if ((uint64_t)local_30[2] < uVal_5) {
          (*(func_ptr_t )local_30[3])(local_30);
          lVal_3 = local_30[1];
          uVal_5 = lVal_3 + 1;
        }
        local_30[1] = uVal_5;
        *(uint8_t *)(*local_30 + lVal_3) = 0x30;
        iVal_6 = iVal_6 + -1;
      } while (iVal_6 != 0);
    }
  }
  *param_2 = local_30;
  if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_68)) {
    return param_2;
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_68);
  fnPtr_2 = (func_ptr_t )swi(3);
  ptr2_Long_4 = (int64_t **)(*fnPtr_2)();
  return ptr2_Long_4;
}

// func_0x18064df70
int64_t ** func_0x18064df70(int64_t **param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, int param_5,int64_t param_6)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int iVal_3;
  int64_t *local_270;
  uint64_t local_268;
  uint64_t local_260;
  func_ptr_t local_258;
  int64_t local_250 [63];
  uint8_t local_58 [8];
  int64_t *local_50;
  uint64_t local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(int64_t *)(param_6 + 0x30) == 0) {
    func_0x1800b1c90(&local_270,param_2);
    if (0 < param_5) {
      do {
        lVal_1 = local_270[1];
        uVal_2 = lVal_1 + 1;
        if ((uint64_t)local_270[2] < uVal_2) {
          (*(func_ptr_t )local_270[3])(local_270);
          lVal_1 = local_270[1];
          uVal_2 = lVal_1 + 1;
        }
        local_270[1] = uVal_2;
        *(uint8_t *)(*local_270 + lVal_1) = 0x30;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    *param_1 = local_270;
  }
  else {
    local_268 = 0;
    local_258 = func_0x1800b02d0;
    local_270 = local_250;
    local_260 = 500;
    func_0x1800b1c90(local_58,&local_270);
    if (0 < param_5) {
      iVal_3 = 0;
      do {
        uVal_2 = local_268 + 1;
        if (local_260 < uVal_2) {
          (*local_258)(&local_270);
          uVal_2 = local_268 + 1;
        }
        *(uint8_t *)((int64_t)local_270 + local_268) = 0x30;
        iVal_3 = iVal_3 + 1;
        local_268 = uVal_2;
      } while (iVal_3 != param_5);
    }
    local_50 = local_270;
    local_48 = local_268;
    func_0x180647bc0(param_6,param_1,param_2,&local_50);
    if (local_270 != local_250) {
      thunk_FUN_180695dd0();
    }
  }
  return param_1;
}
