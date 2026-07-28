#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x1806a3670
void func_0x1806a3670(uint64_t param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4, uint64_t *param_5,uint64_t *param_6)
{
  char ch_1;
  int iVal_2;
  uint32_t *pU64_3;
  int iVal_4;
  uint64_t *pU64_5;
  uint32_t uVal_6;
  uint8_t auStack_108 [32];
  uint64_t *local_e8;
  uint64_t *local_e0;
  int local_d8;
  uint64_t local_c8 [2];
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint8_t local_58 [16];
  uint64_t local_48;
  
  pU64_5 = param_6;
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_108;
  local_c8[0] = param_3;
  iVal_2 = func_0x1806a3870(param_1,&param_5,param_6);
  iVal_4 = 3;
  if (iVal_2 == 0) {
    local_e0 = &param_5;
    local_e8 = local_c8;
    local_78._4_12_ = SUB1612(ZEXT816(0),4);
    local_78._0_4_ = 3;
    local_88._8_8_ = 0;
    local_88._0_8_ = param_4;
    local_b8 = ZEXT816(0);
    local_a8 = ZEXT816(0);
    local_98 = ZEXT816(0);
    local_68 = ZEXT816(0);
    local_58 = ZEXT816(0);
    local_d8 = iVal_2;
    func_0x1806a3db0(local_b8,&param_6,param_1 & 0xffffffff,param_2);
    pU64_5 = param_6;
  }
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          iVal_4 = ((uint)param_1 & 2) * 2;
        }
      }
      else {
        iVal_4 = 2;
      }
    }
    else {
      iVal_4 = 1;
    }
  }
  else {
    iVal_4 = 5;
  }
  ch_1 = func_0x180699ca0();
  if (ch_1 == '\0') {
    if (iVal_4 == 1) {
      pU64_3 = (uint32_t *)func_0x1806823dc();
      *pU64_3 = 0x21;
    }
    else if ((iVal_4 == 2) || (iVal_4 == 3)) {
      pU64_3 = (uint32_t *)func_0x1806823dc();
      *pU64_3 = 0x22;
    }
  }
  else if (iVal_4 != 0) {
    local_e8 = param_5;
    local_e0 = pU64_5;
    uVal_6 = func_0x1806a3c50(iVal_4,param_2,(int)param_3,(int)param_4);
    goto LAB_1806a37e8;
  }
  func_0x1806a2380(pU64_5,0xffc0);
  uVal_6 = SUB84(param_5,0);
LAB_1806a37e8:
  func_0x180673080(uVal_6);
  return;
}

// func_0x1806a3820
double func_0x1806a3820(double param_1,double param_2)
{
  return param_1 + param_2;
}

// func_0x1806a3830
void func_0x1806a3830(int param_1)
{
  uint32_t *pU64_1;
  
  if (param_1 == 1) {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x22;
    return;
  }
  return;
}

// func_0x1806a3870
bool func_0x1806a3870(uint param_1,double *param_2,uint64_t param_3)
{
  bool bFlag_1;
  byte bFlag_2;
  int iVal_3;
  uint uVal_4;
  uint uVal_5;
  char ch_6;
  uint64_t uVal_7;
  bool bFlag_8;
  double dVal_9;
  int local_res8 [2];
  uint64_t local_res20;
  
  uVal_5 = param_1 & 0x1f;
  if (((param_1 & 8) != 0) && ((char)param_3 < '\0')) {
    uVal_5 = param_1 & 0x17;
    bFlag_2 = 1;
    goto LAB_1806a3ba0;
  }
  if (((param_1 & 4) != 0) && ((param_3 >> 9 & 1) != 0)) {
    uVal_5 = param_1 & 0x1b;
    bFlag_2 = 4;
    goto LAB_1806a3ba0;
  }
  if (((param_1 & 1) == 0) || ((param_3 >> 10 & 1) == 0)) {
    bFlag_2 = 0;
    if (((param_1 & 2) == 0) || (bFlag_2 = 0, (param_3 >> 0xb & 1) == 0)) goto LAB_1806a3ba0;
    uVal_4 = param_1 >> 4 & 1;
    if (*param_2 == 0.0) {
      uVal_4 = 1;
    }
    else {
      local_res8[0] = 0;
      dVal_9 = (double)func_0x18068b850(0,local_res8);
      iVal_3 = local_res8[0] + -0x600;
      if (iVal_3 < -0x432) {
        local_res20 = dVal_9 * 0.0;
        uVal_4 = 1;
      }
      else {
        bFlag_1 = false;
        ch_6 = '\0';
        local_res20 = (double)((uint64_t)dVal_9 & 0xfffffffffffff | 0x10000000000000);
        if (iVal_3 < -0x3fd) {
          local_res20._0_4_ = (uint)((uint64_t)dVal_9 & 0xfffffffffffff);
          uVal_7 = (uint64_t)(-iVal_3 - 0x3fd);
          bFlag_1 = false;
          do {
            if ((((uint)local_res20 & 1) != 0) && (uVal_4 == 0)) {
              uVal_4 = 1;
            }
            bFlag_8 = ch_6 != '\0';
            ch_6 = (char)((uint)local_res20 & 1);
            if (bFlag_8) {
              bFlag_1 = true;
            }
            local_res20._0_4_ = (uint)local_res20 >> 1;
            if ((local_res20._4_4_ & 1) != 0) {
              local_res20._0_4_ = (uint)local_res20 | 0x80000000;
            }
            local_res20._4_4_ = local_res20._4_4_ >> 1;
            uVal_7 = uVal_7 - 1;
          } while (uVal_7 != 0);
        }
        if (dVal_9 < 0.0) {
          local_res20 = (double)CONCAT44((uint)((uint64_t)local_res20 >> 0x20) ^
                                         DAT_1806c90f0._4_4_,
                                         SUB84(local_res20,0) ^ (uint)DAT_1806c90f0);
        }
        bFlag_8 = dVal_9 < 0.0;
        if ((ch_6 != '\0') || (bFlag_1)) {
          iVal_3 = fegetround();
          if (iVal_3 == 0) {
            if (ch_6 != '\0') {
              if (!bFlag_1) {
                bFlag_8 = (bool)((byte)local_res20 & 1);
                goto LAB_1806a3b63;
              }
              goto LAB_1806a3b65;
            }
          }
          else {
            if (iVal_3 != 0x100) {
              if (iVal_3 != 0x200) goto LAB_1806a3b7f;
              bFlag_8 = 0.0 <= dVal_9;
            }
LAB_1806a3b63:
            if (bFlag_8 != false) {
LAB_1806a3b65:
              local_res20 = (double)((int64_t)local_res20 + 1);
            }
          }
        }
      }
LAB_1806a3b7f:
      *param_2 = local_res20;
    }
    uVal_5 = param_1 & 0x1d;
    bFlag_2 = -(uVal_4 != 0) & 0x10;
    goto LAB_1806a3ba0;
  }
  bFlag_2 = 8;
  uVal_5 = (uint)param_3 & 0x6000;
  if ((param_3 & 0x6000) == 0) {
    if (0.0 < *param_2) {
      uVal_5 = param_1 & 0x1e;
      *param_2 = DAT_1806e5770;
      goto LAB_1806a3ba0;
    }
LAB_1806a39bb:
    dVal_9 = (double)CONCAT44((uint)((uint64_t)DAT_1806e5770 >> 0x20) ^ DAT_1806c90f0._4_4_,
                             SUB84(DAT_1806e5770,0) ^ (uint)DAT_1806c90f0);
LAB_1806a39ca:
    *param_2 = dVal_9;
  }
  else {
    if (uVal_5 == 0x2000) {
      if (0.0 < *param_2) {
        uVal_5 = param_1 & 0x1e;
        *param_2 = DAT_1806e5778;
        goto LAB_1806a3ba0;
      }
      goto LAB_1806a39bb;
    }
    uVal_4 = (uint)((uint64_t)DAT_1806e5778 >> 0x20);
    if (uVal_5 == 0x4000) {
      if (*param_2 <= 0.0) {
        uVal_5 = param_1 & 0x1e;
        *param_2 = (double)CONCAT44(uVal_4 ^ DAT_1806c90f0._4_4_,
                                    SUB84(DAT_1806e5778,0) ^ (uint)DAT_1806c90f0);
      }
      else {
        uVal_5 = param_1 & 0x1e;
        *param_2 = DAT_1806e5770;
      }
      goto LAB_1806a3ba0;
    }
    if (uVal_5 == 0x6000) {
      dVal_9 = DAT_1806e5778;
      if (*param_2 <= 0.0) {
        uVal_5 = param_1 & 0x1e;
        *param_2 = (double)CONCAT44(uVal_4 ^ DAT_1806c90f0._4_4_,
                                    SUB84(DAT_1806e5778,0) ^ (uint)DAT_1806c90f0);
        goto LAB_1806a3ba0;
      }
      goto LAB_1806a39ca;
    }
  }
  uVal_5 = param_1 & 0x1e;
LAB_1806a3ba0:
  if (((param_1 & 0x10) != 0) && ((param_3 >> 0xc & 1) != 0)) {
    bFlag_2 = bFlag_2 | 0x20;
    uVal_5 = uVal_5 & 0xffffffef;
  }
  if (bFlag_2 != 0) {
    func_0x1806a2410();
  }
  return uVal_5 == 0;
}

// func_0x1806a3bf0
void func_0x1806a3bf0(void)
{
  func_0x1806a3db0();
  return;
}

// func_0x1806a3c20
void func_0x1806a3c20(void)
{
  func_0x1806a3db0();
  return;
}

// func_0x1806a3c50
uint64_t func_0x1806a3c50(uint param_1,int param_2,uint64_t param_3,uint64_t param_4,uint64_t param_5, uint64_t param_6)
{
  uint8_t auArr_1 [12];
  int *pInt_2;
  uint32_t *pU64_3;
  int iVal_4;
  uint32_t uVal_5;
  uint64_t local_38;
  uint8_t *local_30;
  uint8_t local_28 [8];
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_18;
  
  uVal_5 = (uint32_t)((uint64_t)param_4 >> 0x20);
  iVal_4 = 0;
  local_38 = 0;
  local_18 = 0;
  _local_28 = ZEXT816(0);
  pInt_2 = &DAT_1806e8a20;
  do {
    if (*pInt_2 == param_2) {
      local_30 = (&PTR_DAT_1806e8a28)[(int64_t)iVal_4 * 2];
      if (local_30 != (uint8_t *)0x0) {
        auArr_1._4_8_ = 0;
        auArr_1._0_4_ = (uint)((uint64_t)param_3 >> 0x20);
        _local_28 = auArr_1 << 0x20;
        uStack_1c = uVal_5;
        local_18 = param_5;
        local_28._0_4_ = (int)param_3;
        uStack_20 = (int)param_4;
        local_38 = (uint64_t)param_1;
        func_0x1806a2380(param_6,0xffc0);
        iVal_4 = func_0x180699cc0(&local_38);
        if (iVal_4 == 0) {
          if (param_1 == 1) {
            pU64_3 = (uint32_t *)func_0x1806823dc();
            *pU64_3 = 0x21;
          }
          else if ((param_1 == 2) || (param_1 == 3)) {
            pU64_3 = (uint32_t *)func_0x1806823dc();
            *pU64_3 = 0x22;
            return local_18;
          }
        }
        return local_18;
      }
      goto LAB_1806a3ca4;
    }
    iVal_4 = iVal_4 + 1;
    pInt_2 = pInt_2 + 4;
  } while ((int64_t)pInt_2 < 0x1806e8bf0);
  local_30 = (uint8_t *)0x0;
LAB_1806a3ca4:
  func_0x1806a2380(param_6,0xffc0);
  if (param_1 == 1) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x22;
    return param_5;
  }
  return param_5;
}

// func_0x1806a3db0
void func_0x1806a3db0(uint *param_1,uint64_t *param_2,uint64_t param_3,int param_4, uint64_t *param_5,uint64_t *param_6,int param_7)
{
  uint uVal_1;
  uint64_t uVal_2;
  DWORD dwExceptionCode;
  uint *local_res8;
  
  dwExceptionCode = 0xc000000d;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 7) << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 9) << 3) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 10) << 2) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 0xb) * 2) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*(uint *)param_2 >> 0xc) ^ param_1[2]) & 1;
  local_res8 = param_1;
  uVal_2 = func_0x1806a2400();
  if ((uVal_2 & 1) != 0) {
    local_res8[3] = local_res8[3] | 0x10;
  }
  if ((uVal_2 & 4) != 0) {
    local_res8[3] = local_res8[3] | 8;
  }
  if ((uVal_2 & 8) != 0) {
    local_res8[3] = local_res8[3] | 4;
  }
  if ((uVal_2 & 0x10) != 0) {
    local_res8[3] = local_res8[3] | 2;
  }
  if ((uVal_2 & 0x20) != 0) {
    local_res8[3] = local_res8[3] | 1;
  }
  uVal_1 = *(uint *)param_2 & 0x6000;
  if (uVal_1 == 0) {
    *local_res8 = *local_res8 & 0xfffffffc;
  }
  else if (uVal_1 == 0x2000) {
    *local_res8 = *local_res8 & 0xfffffffd;
    *local_res8 = *local_res8 | 1;
  }
  else if (uVal_1 == 0x4000) {
    *local_res8 = *local_res8 & 0xfffffffe;
    *local_res8 = *local_res8 | 2;
  }
  else if (uVal_1 == 0x6000) {
    *local_res8 = *local_res8 | 3;
  }
  *local_res8 = *local_res8 ^ (param_4 << 5 ^ *local_res8) & 0x1ffe0;
  local_res8[8] = local_res8[8] | 1;
  if (param_7 == 0) {
    local_res8[8] = local_res8[8] & 0xffffffe3 | 2;
    *(uint64_t *)(local_res8 + 4) = *param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe3 | 2;
    *(uint64_t *)(local_res8 + 0x14) = *param_6;
  }
  else {
    local_res8[8] = local_res8[8] & 0xffffffe1;
    local_res8[4] = *(uint *)param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe1;
    local_res8[0x14] = *(uint *)param_6;
  }
  func_0x1806a2360();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&local_res8);
  if ((*(byte *)(local_res8 + 2) & 0x10) != 0) {
    *param_2 = *param_2 & 0xffffffffffffff7f;
  }
  if ((*(byte *)(local_res8 + 2) & 8) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffdff;
  }
  if ((*(byte *)(local_res8 + 2) & 4) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffbff;
  }
  if ((*(byte *)(local_res8 + 2) & 2) != 0) {
    *param_2 = *param_2 & 0xfffffffffffff7ff;
  }
  if ((*(byte *)(local_res8 + 2) & 1) != 0) {
    *param_2 = *param_2 & 0xffffffffffffefff;
  }
  uVal_1 = *local_res8 & 3;
  if (uVal_1 == 0) {
    *param_2 = *param_2 & 0xffffffffffff9fff;
  }
  else if (uVal_1 == 1) {
    *param_2 = *param_2 & 0xffffffffffffbfff;
    *param_2 = *param_2 | 0x2000;
  }
  else if (uVal_1 == 2) {
    *param_2 = *param_2 & 0xffffffffffffdfff;
    *param_2 = *param_2 | 0x4000;
  }
  else if (uVal_1 == 3) {
    *param_2 = *param_2 | 0x6000;
  }
  if (param_7 == 0) {
    *param_6 = *(uint64_t *)(local_res8 + 0x14);
  }
  else {
    *(uint *)param_6 = local_res8[0x14];
  }
  return;
}

// func_0x1806a40c0
int func_0x1806a40c0(short *param_1,uint *param_2)
{
  uint uVal_1;
  ushort uVal_2;
  
  uVal_1 = *param_2;
  uVal_2 = (ushort)(uVal_1 >> 0x17) & 0xff;
  if (uVal_2 == 0xff) {
    *param_1 = 0;
    return ((uVal_1 & 0x7fffff) != 0) + 1;
  }
  if (uVal_2 == 0) {
    if ((uVal_1 & 0x7fffff) == 0) {
      *param_1 = 0;
      return 0;
    }
    uVal_2 = func_0x1806a94d0(param_2);
    uVal_1 = *param_2;
  }
  *param_2 = uVal_1 & 0xbf7fffff | 0x3f000000;
  *param_1 = uVal_2 - 0x7e;
  return -1;
}

// func_0x1806a4180
void func_0x1806a4180(float param_1,float param_2,float param_3)
{
  byte bFlag_1;
  uint64_t uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  int iVal_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  
  fegetround();
  uVal_8 = (uint)param_2 & 0x7fffffff;
  uVal_7 = (uint)param_3 & 0x7fffffff;
  uVal_10 = (uint)param_1 & 0x7fffffff;
  if (((((((uint)param_1 & 0x7fffffff) != 0) && (uVal_10 < 0x7f800000)) && (uVal_10 != 0x3f800000)) &&
      ((((uint)param_2 & 0x7fffffff) != 0 && (uVal_8 < 0x7f800000)))) &&
     ((uVal_8 != 0x3f800000 && (uVal_7 - 1 < 0x7f7fffff)))) {
    if (uVal_10 < 0x800000) {
      param_1 = (float)((uint)param_1 | 0x3f800000) -
                *(float *)(&DAT_1806e8c00 + (uint64_t)((uint)param_1 >> 0x1f) * 4);
      uVal_10 = (uint)param_1 & 0x7fffffff;
      uVal_4 = (uVal_10 >> 0x17) - 0x7e;
    }
    else {
      uVal_4 = uVal_10 >> 0x17;
    }
    if (uVal_8 < 0x800000) {
      param_2 = (float)((uint)param_2 | 0x3f800000) -
                *(float *)(&DAT_1806e8c00 + (uint64_t)((uint)param_2 >> 0x1f) * 4);
      uVal_8 = (uint)param_2 & 0x7fffffff;
      uVal_6 = (uVal_8 >> 0x17) - 0x7e;
    }
    else {
      uVal_6 = uVal_8 >> 0x17;
    }
    if (uVal_7 < 0x800000) {
      param_3 = (float)((uint)param_3 | 0x3f800000) -
                *(float *)(&DAT_1806e8c00 + (uint64_t)((uint)param_3 >> 0x1f) * 4);
      uVal_7 = (uint)param_3 & 0x7fffffff;
      uVal_3 = (uVal_7 >> 0x17) - 0x7e;
    }
    else {
      uVal_3 = uVal_7 >> 0x17;
    }
    uVal_2 = ((uint64_t)(uVal_8 & 0x7fffff) | 0x800000) * ((uint64_t)(uVal_10 & 0x7fffff) | 0x800000)
    ;
    uVal_7 = uVal_7 & 0x7fffff | 0x800000;
    uVal_8 = ((uint)param_2 ^ (uint)param_1) & 0x80000000;
    uVal_4 = (uVal_6 - 0x7f) + uVal_4;
    if ((uint)(uVal_2 >> 0x2f) == 0) {
      uVal_6 = (int)uVal_2 << 9;
      uVal_10 = (uint)(uVal_2 >> 0x17);
    }
    else {
      uVal_6 = (int)uVal_2 << 8;
      uVal_4 = uVal_4 + 1;
      uVal_10 = (uint)(uVal_2 >> 0x18);
    }
    if (((int)uVal_3 < (int)uVal_4) || ((uVal_4 == uVal_3 && (uVal_7 <= uVal_10)))) {
      uVal_5 = 0;
      iVal_9 = uVal_4 - uVal_3;
      uVal_12 = (uint)param_3 & 0x80000000;
      uVal_4 = uVal_10;
      uVal_3 = uVal_8;
      uVal_11 = uVal_6;
    }
    else {
      iVal_9 = uVal_3 - uVal_4;
      uVal_4 = uVal_7;
      uVal_3 = (uint)param_3 & 0x80000000;
      uVal_11 = 0;
      uVal_12 = uVal_8;
      uVal_7 = uVal_10;
      uVal_5 = uVal_6;
    }
    uVal_8 = uVal_7;
    uVal_10 = 0;
    if (iVal_9 != 0) {
      bFlag_1 = (byte)iVal_9;
      if (iVal_9 < 0x20) {
        uVal_10 = uVal_5 << (0x20 - bFlag_1 & 0x1f);
        uVal_8 = uVal_7 >> (bFlag_1 & 0x1f);
        uVal_5 = uVal_7 << (0x20 - bFlag_1 & 0x1f) & ~(0xffffffffU >> (bFlag_1 & 0x1f)) |
                uVal_5 >> (bFlag_1 & 0x1f);
      }
      else {
        uVal_8 = 0;
        if (iVal_9 < 0x40) {
          uVal_10 = uVal_7 << (0x40 - bFlag_1 & 0x1f) & ~(0xffffffffU >> (bFlag_1 - 0x20 & 0x1f)) |
                   (uint)(uVal_5 != 0);
          uVal_5 = uVal_7 >> (bFlag_1 - 0x20 & 0x1f);
        }
        else {
          uVal_10 = (uint)((uVal_5 | uVal_7) != 0);
          uVal_5 = 0;
        }
      }
    }
    if (uVal_3 != uVal_12) {
      uVal_10 = -uVal_10;
      uVal_7 = uVal_11 - ((uVal_10 != 0) + uVal_5);
      iVal_9 = uVal_4 - ((uVal_11 < uVal_7) + uVal_8);
      if (iVal_9 == 0) {
        if ((uVal_7 == 0) && (uVal_7 = uVal_10, uVal_10 == 0)) {
          return;
        }
      }
      else {
        uVal_7 = iVal_9 * 0x100;
      }
      for (; -1 < (int)uVal_7; uVal_7 = uVal_7 * 2) {
      }
    }
  }
  return;
}

// func_0x1806a47a0
uint64_t func_0x1806a47a0(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  uint uVal_1;
  int iVal_2;
  uint32_t *pU64_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t local_20;
  uint64_t local_18;
  char local_10;
  
  if (DAT_1808429bc == 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      pU64_3 = (uint32_t *)func_0x1806823dc();
      *pU64_3 = 0x16;
      func_0x180684970();
      return 0x7fffffff;
    }
    if (param_3 < 0x80000000) {
      uVal_4 = func_0x18069c410();
      return uVal_4;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if ((param_1 == 0) || (param_2 == 0)) {
      pU64_3 = (uint32_t *)func_0x1806823dc();
      *pU64_3 = 0x16;
      func_0x180684970();
      return 0x7fffffff;
    }
    uVal_4 = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_10 = '\0';
      lVal_5 = __vcrt_getptd();
      local_20 = *(int64_t *)(lVal_5 + 0x90);
      local_18 = *(uint64_t *)(lVal_5 + 0x88);
      func_0x180696634(lVal_5,&local_20);
      func_0x180696668(lVal_5,&local_18);
      if ((*(uint *)(lVal_5 + 0x3a8) & 2) == 0) {
        *(uint *)(lVal_5 + 0x3a8) = *(uint *)(lVal_5 + 0x3a8) | 2;
        local_10 = '\x01';
      }
      if (*(int64_t *)(local_20 + 0x130) == 0) {
        uVal_1 = func_0x18069c410(param_1,param_2,param_3);
        if (local_10 != '\0') {
          *(uint *)(lVal_5 + 0x3a8) = *(uint *)(lVal_5 + 0x3a8) & 0xfffffffd;
        }
        return (uint64_t)uVal_1;
      }
      iVal_2 = __acrt_CompareStringW
                        (*(int64_t *)(local_20 + 0x130),0x1001,param_1,param_3 & 0xffffffff,param_2
                         ,(int)param_3);
      if (iVal_2 == 0) {
        pU64_3 = (uint32_t *)func_0x1806823dc();
        *pU64_3 = 0x16;
      }
      else {
        uVal_4 = (uint64_t)(iVal_2 - 2);
      }
      if (local_10 == '\0') {
        return uVal_4;
      }
      *(uint *)(lVal_5 + 0x3a8) = *(uint *)(lVal_5 + 0x3a8) & 0xfffffffd;
      return uVal_4;
    }
  }
  pU64_3 = (uint32_t *)func_0x1806823dc();
  *pU64_3 = 0x16;
  func_0x180684970();
  return 0x7fffffff;
}

// func_0x1806a4940
void func_0x1806a4940(void)
{
  return;
}

// func_0x1806a4970
uint32_t func_0x1806a4970(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)
{
  uint64_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  
  switch(param_4) {
  case 1:
    uVal_1 = 0;
    uVal_3 = 0;
    uVal_2 = 8;
    break;
  case 2:
    uVal_1 = 2;
    uVal_3 = 0x22;
    uVal_2 = 4;
    break;
  case 3:
  case 4:
  case 5:
    uVal_2 = func_0x1806a2540(param_3);
    return uVal_2;
  case 6:
    uVal_1 = 1;
    uVal_3 = 0x21;
    uVal_2 = 8;
    break;
  case 7:
    uVal_1 = 4;
    uVal_3 = 0x22;
    uVal_2 = 0x12;
    break;
  default:
    goto switchD_1806a499b_caseD_8;
  case 9:
    uVal_1 = 3;
    uVal_3 = 0x22;
    uVal_2 = 0x11;
  }
  func_0x1806a2550(&DAT_18076162c,0x1d,param_3,uVal_1,uVal_2,uVal_3,param_1,param_2,2);
switchD_1806a499b_caseD_8:
  return param_3;
}

// _realloc_base
/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
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

// func_0x1806a4b5c
uint64_t func_0x1806a4b5c(LPCWSTR param_1)
{
  BOOL BVar1;
  DWORD DVar2;
  uint64_t uVal_3;
  
  BVar1 = DeleteFileW(param_1);
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

// func_0x1806a4b84
uint32_t func_0x1806a4b84(void)
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
  uVal_1 = func_0x1806a4e24();
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

// func_0x1806a4c2c
uint64_t func_0x1806a4c2c(ushort *param_1,byte *param_2,uint64_t param_3,int64_t param_4)
{
  int iVal_1;
  DWORD DVar2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint uVal_5;
  byte *pU8_6;
  uint64_t local_res8;
  byte *local_res10;
  uint64_t in_stack_ffffffffffffffd0;
  uint uVal_7;
  uint64_t uVal_8;
  
  uVal_7 = (uint)((uint64_t)in_stack_ffffffffffffffd0 >> 0x20);
  uVal_8 = 0xfffffffffffffffe;
  uVal_3 = 0;
  if (param_1 != (ushort *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
    *param_1 = 0;
  }
  local_res10 = param_2;
  if (param_2 == (byte *)0x0) {
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 0x16;
    func_0x180684b50(0,0,0,0,0,param_4);
    uVal_3 = 0xffffffffffffffff;
  }
  else {
    if (*(char *)(param_4 + 0x28) == '\0') {
      func_0x18067e970(param_4);
    }
    iVal_1 = *(int *)(*(int64_t *)(param_4 + 0x18) + 0xc);
    if (iVal_1 == 0xfde9) {
      local_res8 = 0;
      uVal_3 = func_0x18069b340(param_1,&local_res10,param_3,&local_res8,param_4);
    }
    else {
      lVal_4 = *(int64_t *)(*(int64_t *)(param_4 + 0x18) + 0x138);
      if (param_1 == (ushort *)0x0) {
        uVal_3 = 0xffffffffffffffff;
        if (lVal_4 == 0) {
          do {
            uVal_3 = uVal_3 + 1;
          } while (local_res10[uVal_3] != 0);
          return uVal_3;
        }
        iVal_1 = func_0x180695e90(iVal_1,9,local_res10,0xffffffff,0,(uint64_t)uVal_7 << 0x20,uVal_8);
        lVal_4 = (int64_t)iVal_1;
        if (lVal_4 == 0) {
          *(uint8_t *)(param_4 + 0x30) = 1;
          *(uint32_t *)(param_4 + 0x2c) = 0x2a;
          return 0xffffffffffffffff;
        }
      }
      else {
        if (lVal_4 == 0) {
          if (param_3 == 0) {
            return 0;
          }
          do {
            *param_1 = (ushort)local_res10[uVal_3];
            if (local_res10[uVal_3] == 0) {
              return uVal_3;
            }
            uVal_3 = uVal_3 + 1;
            param_1 = param_1 + 1;
          } while (uVal_3 < param_3);
          return uVal_3;
        }
        uVal_5 = (uint)param_3;
        iVal_1 = func_0x180695e90(iVal_1,9,local_res10,0xffffffff,param_1,CONCAT44(uVal_7,uVal_5),uVal_8);
        lVal_4 = (int64_t)iVal_1;
        if (lVal_4 == 0) {
          DVar2 = GetLastError();
          if (DVar2 == 0x7a) {
            uVal_3 = param_3 & 0xffffffff;
            pU8_6 = local_res10;
            while (uVal_5 != 0) {
              uVal_5 = (int)uVal_3 - 1;
              uVal_3 = (uint64_t)uVal_5;
              if (*pU8_6 == 0) break;
              if ((*(short *)(**(int64_t **)(param_4 + 0x18) + (uint64_t)*pU8_6 * 2) < 0) &&
                 (pU8_6 = pU8_6 + 1, *pU8_6 == 0)) goto LAB_1806a4d53;
              pU8_6 = pU8_6 + 1;
            }
            iVal_1 = func_0x180695e90(*(uint32_t *)(*(int64_t *)(param_4 + 0x18) + 0xc),1,local_res10
                                  ,(int)pU8_6 - (int)local_res10,param_1,param_3 & 0xffffffff);
            if ((int64_t)iVal_1 != 0) {
              return (int64_t)iVal_1;
            }
          }
LAB_1806a4d53:
          *(uint8_t *)(param_4 + 0x30) = 1;
          *(uint32_t *)(param_4 + 0x2c) = 0x2a;
          *param_1 = 0;
          return 0xffffffffffffffff;
        }
      }
      uVal_3 = lVal_4 - 1;
    }
  }
  return uVal_3;
}

// func_0x1806a4e24
uint32_t func_0x1806a4e24(uint64_t *param_1,uint16_t *param_2,uint64_t param_3,uint64_t param_4, uint64_t param_5,int64_t param_6)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint32_t uVal_3;
  
  uVal_3 = 0;
  if (param_2 == (uint16_t *)0x0) {
    if (param_3 == 0) {
LAB_1806a4e92:
      if (param_1 != (uint64_t *)0x0) {
        *param_1 = 0;
      }
      uVal_2 = param_5;
      if (param_3 < param_5) {
        uVal_2 = param_3;
      }
      if (uVal_2 < 0x80000000) {
        lVal_1 = func_0x1806a4c2c(param_2,param_4,uVal_2,param_6);
        if (lVal_1 == -1) {
          if (param_2 != (uint16_t *)0x0) {
            *param_2 = 0;
          }
          if (*(char *)(param_6 + 0x30) == '\0') {
            return 0;
          }
          return *(uint32_t *)(param_6 + 0x2c);
        }
        uVal_2 = lVal_1 + 1;
        if (param_2 == (uint16_t *)0x0) goto LAB_1806a4f1f;
        if (param_3 < uVal_2) {
          if (param_5 != 0xffffffffffffffff) {
            *param_2 = 0;
            uVal_3 = 0x22;
            goto LAB_1806a4f00;
          }
          uVal_3 = 0x50;
          uVal_2 = param_3;
        }
        param_2[uVal_2 - 1] = 0;
LAB_1806a4f1f:
        if (param_1 == (uint64_t *)0x0) {
          return uVal_3;
        }
        *param_1 = uVal_2;
        return uVal_3;
      }
      uVal_3 = 0x16;
LAB_1806a4f00:
      *(uint32_t *)(param_6 + 0x2c) = uVal_3;
      *(uint8_t *)(param_6 + 0x30) = 1;
      goto LAB_1806a4e74;
    }
  }
  else if (param_3 != 0) {
    *param_2 = 0;
    goto LAB_1806a4e92;
  }
  uVal_3 = 0x16;
  *(uint8_t *)(param_6 + 0x30) = 1;
  *(uint32_t *)(param_6 + 0x2c) = 0x16;
LAB_1806a4e74:
  func_0x180684b50(0,0,0,0,0,param_6);
  return uVal_3;
}

// func_0x1806a4f44
uint32_t func_0x1806a4f44(void)
{
  uint32_t uVal_1;
  int64_t lVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t *param_6;
  int64_t local_48 [2];
  uint8_t local_38;
  uint8_t local_30 [16];
  char local_20;
  uint32_t local_1c;
  char local_18;
  uint32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_6 == (uint32_t *)0x0) {
    uVal_1 = PTR_PTR_DAT_18083d808._0_4_;
    uVal_3 = PTR_PTR_DAT_18083d808._4_4_;
    uVal_4 = PTR_DAT_18083d810._0_4_;
    uVal_5 = PTR_DAT_18083d810._4_4_;
    if (DAT_1808429bc != 0) goto LAB_1806a4f92;
  }
  else {
    uVal_1 = *param_6;
    uVal_3 = param_6[1];
    uVal_4 = param_6[2];
    uVal_5 = param_6[3];
  }
  local_20 = '\x01';
  local_30._4_4_ = uVal_3;
  local_30._0_4_ = uVal_1;
  local_30._8_4_ = uVal_4;
  local_30._12_4_ = uVal_5;
LAB_1806a4f92:
  uVal_1 = func_0x1806a533c();
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

// func_0x1806a4ffc
void func_0x1806a4ffc(char *param_1,ushort *param_2,uint64_t param_3,char *param_4)
{
  char ch_1;
  ushort uVal_2;
  int64_t lVal_3;
  int iVal_4;
  DWORD DVar5;
  ushort *pU64_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint8_t auStack_b8 [32];
  char *local_98;
  uint64_t local_90;
  uint64_t local_88;
  int *local_80;
  int local_78 [2];
  ushort *local_70;
  uint64_t local_68;
  char local_60 [8];
  uint64_t local_58;
  
  local_58 = DAT_18083cf40 ^ (uint64_t)auStack_b8;
  uVal_9 = 0;
  local_78[0] = 0;
  local_70 = param_2;
  if ((param_1 == (char *)0x0) || (param_3 != 0)) {
    if (param_2 == (ushort *)0x0) {
      param_4[0x30] = '\x01';
      *(uint32_t *)(param_4 + 0x2c) = 0x16;
      local_98 = (char *)0x0;
      local_90 = param_4;
      func_0x180684b50(0,0,0,0);
    }
    else {
      if (param_4[0x28] == '\0') {
        func_0x18067e970(param_4);
      }
      lVal_3 = *(int64_t *)(param_4 + 0x18);
      iVal_4 = *(int *)(lVal_3 + 0xc);
      if (iVal_4 == 0xfde9) {
        local_68 = 0;
        local_98 = param_4;
        func_0x1806a95ec(param_1,&local_70,param_3,&local_68);
      }
      else {
        if (param_1 == (char *)0x0) {
          if (*(int64_t *)(lVal_3 + 0x138) == 0) {
            uVal_2 = *local_70;
            pU64_6 = local_70;
            while (uVal_2 != 0) {
              if (0xff < uVal_2) goto LAB_1806a510d;
              pU64_6 = pU64_6 + 1;
              uVal_2 = *pU64_6;
            }
            goto LAB_1806a531e;
          }
          local_80 = local_78;
          local_88 = 0;
          local_90 = (char *)((uint64_t)local_90._4_4_ << 0x20);
          local_98 = (char *)0x0;
          iVal_4 = func_0x180695f20(iVal_4,0,local_70,0xffffffff);
          if ((iVal_4 != 0) && (local_78[0] == 0)) goto LAB_1806a531e;
        }
        else {
          if (*(int64_t *)(lVal_3 + 0x138) == 0) {
            if (param_3 != 0) {
              do {
                if (0xff < *local_70) goto LAB_1806a510d;
                param_1[uVal_9] = *(char *)local_70;
                uVal_2 = *local_70;
                local_70 = local_70 + 1;
              } while ((uVal_2 != 0) && (uVal_9 = uVal_9 + 1, uVal_9 < param_3));
            }
            goto LAB_1806a531e;
          }
          local_98 = param_1;
          if (*(int *)(lVal_3 + 8) == 1) {
            pU64_6 = local_70;
            uVal_9 = param_3;
            if (param_3 != 0) {
              do {
                if (*pU64_6 == 0) {
                  param_3 = ((int64_t)pU64_6 - (int64_t)local_70 >> 1) + 1;
                  break;
                }
                uVal_9 = uVal_9 - 1;
                pU64_6 = pU64_6 + 1;
              } while (uVal_9 != 0);
            }
            local_80 = local_78;
            local_88 = 0;
            local_90 = (char *)CONCAT44(local_90._4_4_,(int)param_3);
            iVal_4 = func_0x180695f20(iVal_4,0,local_70,param_3 & 0xffffffff);
            if ((iVal_4 == 0) || (local_78[0] != 0)) {
LAB_1806a510d:
              param_4[0x30] = '\x01';
              *(uint32_t *)(param_4 + 0x2c) = 0x2a;
            }
            goto LAB_1806a531e;
          }
          local_80 = local_78;
          local_88 = 0;
          local_90 = (char *)CONCAT44(local_90._4_4_,(int)param_3);
          iVal_4 = func_0x180695f20(iVal_4,0,local_70,0xffffffff);
          uVal_10 = (uint64_t)iVal_4;
          if (local_78[0] == 0) {
            if (iVal_4 != 0) goto LAB_1806a531e;
            DVar5 = GetLastError();
            if (DVar5 == 0x7a) {
              if (param_3 != 0) {
                do {
                  local_80 = local_78;
                  local_88 = 0;
                  iVal_4 = *(int *)(*(int64_t *)(param_4 + 0x18) + 8);
                  if (5 < iVal_4) {
                    iVal_4 = 5;
                  }
                  local_90 = (char *)CONCAT44(local_90._4_4_,iVal_4);
                  local_98 = local_60;
                  iVal_4 = func_0x180695f20(*(uint32_t *)(*(int64_t *)(param_4 + 0x18) + 0xc),0,
                                        local_70,1);
                  if ((((iVal_4 == 0) || (local_78[0] != 0)) || (iVal_4 < 0)) ||
                     (uVal_8 = (uint64_t)iVal_4, 5 < uVal_8)) goto LAB_1806a5310;
                  if (param_3 < uVal_8 + uVal_10) break;
                  uVal_7 = uVal_9;
                  if (0 < (int64_t)uVal_8) {
                    do {
                      ch_1 = local_60[uVal_7];
                      param_1[uVal_10] = ch_1;
                      if (ch_1 == '\0') goto LAB_1806a531e;
                      uVal_7 = uVal_7 + 1;
                      uVal_10 = uVal_10 + 1;
                    } while ((int64_t)uVal_7 < (int64_t)uVal_8);
                  }
                  local_70 = local_70 + 1;
                } while (uVal_10 < param_3);
              }
              goto LAB_1806a531e;
            }
          }
        }
LAB_1806a5310:
        *(uint32_t *)(param_4 + 0x2c) = 0x2a;
        param_4[0x30] = '\x01';
      }
    }
  }
LAB_1806a531e:
  func_0x180673080(local_58 ^ (uint64_t)auStack_b8);
  return;
}

// func_0x1806a533c
uint32_t func_0x1806a533c(uint64_t *param_1,uint8_t *param_2,uint64_t param_3,uint64_t param_4, uint64_t param_5,int64_t param_6)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint32_t uVal_3;
  
  uVal_3 = 0;
  if (param_2 == (uint8_t *)0x0) {
    if (param_3 != 0) goto LAB_1806a539f;
  }
  else {
    if (param_3 == 0) {
LAB_1806a539f:
      uVal_3 = 0x16;
      *(uint8_t *)(param_6 + 0x30) = 1;
      *(uint32_t *)(param_6 + 0x2c) = 0x16;
      goto LAB_1806a53b5;
    }
    *param_2 = 0;
  }
  if (param_1 != (uint64_t *)0x0) {
    *param_1 = 0;
  }
  uVal_2 = param_5;
  if (param_3 < param_5) {
    uVal_2 = param_3;
  }
  if (0x7fffffff < uVal_2) {
    uVal_3 = 0x16;
LAB_1806a5410:
    *(uint32_t *)(param_6 + 0x2c) = uVal_3;
    *(uint8_t *)(param_6 + 0x30) = 1;
LAB_1806a53b5:
    func_0x180684b50(0,0,0,0,0,param_6);
    return uVal_3;
  }
  lVal_1 = func_0x1806a4ffc(param_2,param_4,uVal_2,param_6);
  if (lVal_1 == -1) {
    if (param_2 != (uint8_t *)0x0) {
      *param_2 = 0;
    }
    if (*(char *)(param_6 + 0x30) == '\0') {
      return 0;
    }
    return *(uint32_t *)(param_6 + 0x2c);
  }
  uVal_2 = lVal_1 + 1;
  if (param_2 == (uint8_t *)0x0) goto LAB_1806a542b;
  if (param_3 < uVal_2) {
    if (param_5 != 0xffffffffffffffff) {
      *param_2 = 0;
      uVal_3 = 0x22;
      goto LAB_1806a5410;
    }
    uVal_3 = 0x50;
    uVal_2 = param_3;
  }
  param_2[uVal_2 - 1] = 0;
LAB_1806a542b:
  if (param_1 == (uint64_t *)0x0) {
    return uVal_3;
  }
  *param_1 = uVal_2;
  return uVal_3;
}

// __remainder_piby2d2f_forC
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __remainder_piby2d2f_forC
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __remainder_piby2d2f_forC
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */
void __remainder_piby2d2f_forC(uint64_t param_1,double *param_2,uint *param_3)
{
  bool bFlag_1;
  bool bFlag_2;
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint64_t uVal_10;
  uint64_t uVal_11;
  sbyte sz_12;
  byte bFlag_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  int64_t lVal_16;
  uint64_t uVal_17;
  int64_t lVal_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  
  uVal_20 = (param_1 >> 0x34) - 0x3ff;
  lVal_18 = -((uVal_20 >> 3) - 0x86);
  uVal_14 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auArr_3._8_8_ = 0;
  auArr_3._0_8_ = *(uint64_t *)(&DAT_1806e9700 + lVal_18);
  auArr_6._8_8_ = 0;
  auArr_6._0_8_ = uVal_14;
  auArr_9._8_8_ = 0;
  auArr_9._0_8_ = SUB168(auArr_3 * auArr_6,8);
  uVal_10 = SUB168(auArr_3 * auArr_6,0);
  auArr_4._8_8_ = 0;
  auArr_4._0_8_ = *(uint64_t *)(&UNK_1806e9708 + lVal_18);
  auArr_7._8_8_ = 0;
  auArr_7._0_8_ = uVal_14;
  uVal_20 = uVal_20 & 7;
  auArr_9 = auArr_4 * auArr_7 + auArr_9;
  uVal_11 = auArr_9._0_8_;
  auArr_5._8_8_ = 0;
  auArr_5._0_8_ = *(uint64_t *)(&UNK_1806e9710 + lVal_18);
  auArr_8._8_8_ = 0;
  auArr_8._0_8_ = uVal_14;
  uVal_19 = auArr_9._8_8_ + SUB168(auArr_5 * auArr_8,0);
  uVal_17 = 0;
  bFlag_13 = (byte)(0x36 - uVal_20) & 0x3f;
  uVal_14 = uVal_19 >> bFlag_13;
  bFlag_1 = (0x36 - uVal_20 & 0x3f) != 0;
  bFlag_2 = (uVal_19 >> bFlag_13 - 1 & 1) != 0;
  if (bFlag_1 && bFlag_2) {
    uVal_19 = ~uVal_19;
    uVal_11 = ~uVal_11;
    uVal_10 = ~uVal_10;
    uVal_17 = 0x8000000000000000;
  }
  *param_3 = (int)uVal_14 + (uint)(bFlag_1 && bFlag_2) & 3;
  sz_12 = (char)uVal_20 + 10;
  uVal_14 = (uVal_19 << sz_12) >> sz_12;
  lVal_15 = uVal_20 - 0x36;
  lVal_18 = 0x3f;
  if (uVal_14 != 0) {
    for (; uVal_14 >> lVal_18 == 0; lVal_18 = lVal_18 + -1) {
    }
  }
  uVal_19 = uVal_11;
  if (uVal_14 == 0) {
    lVal_18 = 0x3f;
    if (uVal_11 != 0) {
      for (; uVal_11 >> lVal_18 == 0; lVal_18 = lVal_18 + -1) {
      }
    }
    lVal_15 = uVal_20 - 0x76;
    uVal_19 = uVal_10;
    uVal_14 = uVal_11;
  }
  lVal_16 = lVal_18 + -0x34;
  if (lVal_16 < 0) {
    bFlag_13 = -(byte)lVal_16;
    uVal_14 = uVal_14 << (bFlag_13 & 0x3f) | uVal_19 >> (-(bFlag_13 - 0x40) & 0x3f);
  }
  else if (lVal_16 != 0) {
    uVal_14 = uVal_14 >> ((byte)lVal_16 & 0x3f);
  }
  *param_2 = (double)(uVal_14 & 0xffefffffffffffff | uVal_17 | lVal_15 + lVal_18 + 0x3ff << 0x34) *
             _DAT_1806e96f0;
  return;
}

// fegetround
/* Library Function - Single Match
    fegetround
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    fegetround
   
   Library: Visual Studio 2019 Release */
void fegetround(void)
{
  uint32_t uVal_1;
  
  uVal_1 = func_0x1806a92a0();
  func_0x1806a94c0(uVal_1);
  return;
}

// __acrt_stdio_allocate_buffer_nolock
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_stdio_allocate_buffer_nolock
   
   Library: Visual Studio 2019 Release */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_stdio_allocate_buffer_nolock
   
   Library: Visual Studio 2019 Release */
void __acrt_stdio_allocate_buffer_nolock(uint64_t *param_1)
{
  uint64_t uVal_1;
  uint32_t uVal_2;
  
  _DAT_1808425d8 = _DAT_1808425d8 + 1;
  uVal_2 = 0x1000;
  uVal_1 = _calloc_base(0x1000);
  param_1[1] = uVal_1;
  func_0x180695dd0(0);
  if (param_1[1] == 0) {
    LOCK();
    *(uint *)((int64_t)param_1 + 0x14) = *(uint *)((int64_t)param_1 + 0x14) | 0x400;
    UNLOCK();
    uVal_2 = 2;
    param_1[1] = (int64_t)param_1 + 0x1c;
  }
  else {
    LOCK();
    *(uint *)((int64_t)param_1 + 0x14) = *(uint *)((int64_t)param_1 + 0x14) | 0x40;
    UNLOCK();
  }
  *(uint32_t *)(param_1 + 4) = uVal_2;
  *(uint32_t *)(param_1 + 2) = 0;
  *param_1 = param_1[1];
  return;
}

// _CallSettingFrame
/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */
/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */
void _CallSettingFrame(uint64_t param_1,uint64_t *param_2)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  
  fnPtr_1 = (func_ptr_t )func_0x180692730(param_1,*param_2);
  (*fnPtr_1)();
  uVal_2 = func_0x180692760();
  func_0x180692730(uVal_2,*param_2,2);
  return;
}

// func_0x1806a56e0
void func_0x1806a56e0(uint64_t param_1,uint64_t *param_2)
{
  func_ptr_t fnPtr_1;
  
  fnPtr_1 = (func_ptr_t )func_0x180692730(param_1,*param_2);
  (*fnPtr_1)();
  func_0x180692760();
  return;
}

// func_0x1806a5710
void func_0x1806a5710(uint64_t param_1,uint64_t *param_2)
{
  func_0x180692730(param_1,*param_2,2);
  return;
}

// _CallSettingFrameEncoded
/* Library Function - Single Match
    _CallSettingFrameEncoded
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */
/* Library Function - Single Match
    _CallSettingFrameEncoded
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */
void _CallSettingFrameEncoded(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  
  fnPtr_1 = (func_ptr_t )func_0x180692730(param_1,param_2,param_4);
  (*fnPtr_1)(param_3);
  uVal_2 = func_0x180692760();
  func_0x180692730(uVal_2,param_2,2);
  return;
}

// func_0x1806a68f0
uint32_t func_0x1806a68f0(void)
{
  return DAT_18084312c;
}

// func_0x1806a692c
ushort func_0x1806a692c(ushort param_1,__crt_locale_pointers *param_2)
{
  int iVal_1;
  byte bFlag_2;
  ushort local_res8 [4];
  ushort local_res18 [8];
  int64_t local_28;
  int64_t local_20;
  char local_10;
  
  if (param_1 == 0xffff) {
    return 0xffff;
  }
  local_res8[0] = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
  bFlag_2 = (byte)local_res8[0];
  if (*(int *)(local_20 + 0xc) == 0xfde9) {
    if (0x7f < local_res8[0]) {
LAB_1806a69ce:
      local_res18[0] = 0;
      iVal_1 = __acrt_LCMapStringW(*(uint64_t *)(local_20 + 0x138),0x100,local_res8,1,local_res18,1
                                 );
      if (iVal_1 != 0) {
        local_res8[0] = local_res18[0];
      }
      goto LAB_1806a6a08;
    }
    if (((&DAT_1806e4562)[(uint64_t)bFlag_2 * 2] & 1) == 0) {
      local_res8[0] = local_res8[0] & 0xff;
      goto LAB_1806a6a08;
    }
  }
  else {
    if (0xff < local_res8[0]) {
      if (*(int64_t *)(local_20 + 0x138) == 0) goto LAB_1806a6a08;
      goto LAB_1806a69ce;
    }
    if (((&DAT_1806e4562)[(uint64_t)bFlag_2 * 2] & 1) == 0) {
      local_res8[0] = local_res8[0] & 0xff;
      goto LAB_1806a6a08;
    }
  }
  local_res8[0] = (ushort)*(byte *)(*(int64_t *)(local_20 + 0x110) + (uint64_t)bFlag_2);
LAB_1806a6a08:
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return local_res8[0];
}

// func_0x1806a6a28
uint32_t func_0x1806a6a28(int64_t param_1)
{
  int iVal_1;
  int iVal_2;
  int iVal_3;
  int iVal_4;
  int iVal_5;
  
  if (param_1 != 0) {
    iVal_4 = 0;
    iVal_5 = 0xe3;
    do {
      iVal_2 = (iVal_5 + iVal_4) / 2;
      iVal_3 = func_0x18069c410(param_1,(&PTR_DAT_1806ea5e0)[(int64_t)iVal_2 * 2],0x55);
      if (iVal_3 == 0) {
        iVal_4 = *(int *)(&UNK_1806ea5e8 + (int64_t)iVal_2 * 0x10);
        if (iVal_4 < 0) {
          return 0;
        }
        if (0xe3 < (uint64_t)(int64_t)iVal_4) {
          return 0;
        }
        return *(uint32_t *)(&DAT_1806e97a0 + (int64_t)iVal_4 * 0x10);
      }
      iVal_1 = iVal_2 + -1;
      if (-1 < iVal_3) {
        iVal_1 = iVal_5;
      }
      iVal_5 = iVal_1;
      if (-1 < iVal_3) {
        iVal_4 = iVal_2 + 1;
      }
    } while (iVal_4 <= iVal_5);
  }
  return 0;
}

// func_0x1806a6ad0
int func_0x1806a6ad0(uint param_1,int64_t param_2,int param_3)
{
  int iVal_1;
  int iVal_2;
  int iVal_3;
  int iVal_4;
  int iVal_5;
  
  if (((((param_1 & 0xfffff3ff) != 0) || (param_1 == 0xc00)) && ((param_2 != 0 || (param_3 < 1))))
     && (-1 < param_3)) {
    iVal_4 = 0;
    iVal_3 = 0xe3;
    do {
      iVal_2 = (iVal_3 + iVal_4) / 2;
      iVal_5 = param_1 - *(uint *)(&DAT_1806e97a0 + (int64_t)iVal_2 * 0x10);
      if (param_1 == *(uint *)(&DAT_1806e97a0 + (int64_t)iVal_2 * 0x10)) {
        if (iVal_2 < 0) {
          return 0;
        }
        iVal_3 = func_0x18068e1a0(*(uint64_t *)(&UNK_1806e97a8 + (int64_t)iVal_2 * 0x10),0x55);
        if (0 < param_3) {
          if (param_3 <= iVal_3) {
            return 0;
          }
          iVal_4 = func_0x180696710();
          if (iVal_4 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        return iVal_3 + 1;
      }
      iVal_1 = iVal_2 + -1;
      if (-1 < iVal_5) {
        iVal_1 = iVal_3;
      }
      iVal_3 = iVal_1;
      if (-1 < iVal_5) {
        iVal_4 = iVal_2 + 1;
      }
    } while (iVal_4 <= iVal_3);
  }
  return 0;
}

// func_0x1806a6bc0
uint32_t func_0x1806a6bc0(char *param_1,int64_t param_2,int64_t param_3,int64_t param_4)
{
  char ch_1;
  uint32_t *pU64_2;
  int64_t lVal_3;
  char *fnPtr_4;
  int64_t lVal_5;
  int64_t lVal_6;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_1806a6c19;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_1806a6c19;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = '\0';
      return 0;
    }
    if (param_3 != 0) {
      fnPtr_4 = param_1;
      lVal_5 = param_2;
      lVal_3 = param_4;
      if (param_4 == -1) {
        do {
          ch_1 = fnPtr_4[param_3 - (int64_t)param_1];
          *fnPtr_4 = ch_1;
          if (ch_1 == '\0') {
            return 0;
          }
          lVal_5 = lVal_5 + -1;
          fnPtr_4 = fnPtr_4 + 1;
        } while (lVal_5 != 0);
        lVal_5 = 0;
      }
      else {
        do {
          lVal_6 = lVal_3;
          ch_1 = fnPtr_4[param_3 - (int64_t)param_1];
          *fnPtr_4 = ch_1;
          fnPtr_4 = fnPtr_4 + 1;
          if (ch_1 == '\0') {
            return 0;
          }
          lVal_5 = lVal_5 + -1;
        } while ((lVal_5 != 0) && (lVal_3 = lVal_6 + -1, lVal_6 + -1 != 0));
        lVal_3 = lVal_6 + -1;
        if (lVal_5 == 0) {
          lVal_3 = lVal_6;
        }
        if (lVal_3 == 0) {
          *fnPtr_4 = '\0';
        }
      }
      if (lVal_5 != 0) {
        return 0;
      }
      if (param_4 == -1) {
        param_1[param_2 + -1] = '\0';
        return 0x50;
      }
      *param_1 = '\0';
      pU64_2 = (uint32_t *)func_0x1806823dc();
      *pU64_2 = 0x22;
      func_0x180684970();
      return 0x22;
    }
    *param_1 = '\0';
  }
LAB_1806a6c19:
  pU64_2 = (uint32_t *)func_0x1806823dc();
  *pU64_2 = 0x16;
  func_0x180684970();
  return 0x16;
}

// func_0x1806a6d00
uint8_t (*func_0x1806a6d00(uint8_t (*param_1)[16],byte param_2))[16]
{
  uint uVal_1;
  ushort uVal_2;
  uint64_t uVal_3;
  int iVal_4;
  char *fnPtr_5;
  uint uVal_6;
  uint8_t (*pArr16_7)[16];
  char *fnPtr_8;
  uint uVal_9;
  bool bFlag_10;
  bool bFlag_11;
  uint8_t auArr_12 [16];
  uint8_t auArr_13 [16];
  uint8_t auArr_14 [16];
  uint8_t in_XMM1 [16];
  uint8_t auArr_15 [16];
  uint8_t auArr_16 [16];
  uint8_t auArr_17 [16];
  char ch_18;
  char ch_19;
  char ch_20;
  char ch_21;
  
  if (param_2 == 0) {
    fnPtr_5 = (char *)((uint64_t)param_1 & 0xfffffffffffffff0);
    auArr_15[0] = -(*fnPtr_5 == '\0');
    auArr_15[1] = -(fnPtr_5[1] == '\0');
    auArr_15[2] = -(fnPtr_5[2] == '\0');
    auArr_15[3] = -(fnPtr_5[3] == '\0');
    auArr_15[4] = -(fnPtr_5[4] == '\0');
    auArr_15[5] = -(fnPtr_5[5] == '\0');
    auArr_15[6] = -(fnPtr_5[6] == '\0');
    auArr_15[7] = -(fnPtr_5[7] == '\0');
    auArr_15[8] = -(fnPtr_5[8] == '\0');
    auArr_15[9] = -(fnPtr_5[9] == '\0');
    auArr_15[10] = -(fnPtr_5[10] == '\0');
    auArr_15[11] = -(fnPtr_5[0xb] == '\0');
    auArr_15[12] = -(fnPtr_5[0xc] == '\0');
    auArr_15[13] = -(fnPtr_5[0xd] == '\0');
    auArr_15[14] = -(fnPtr_5[0xe] == '\0');
    auArr_15[15] = -(fnPtr_5[0xf] == '\0');
    uVal_6 = (uint)(ushort)((ushort)(SUB161(auArr_15 >> 7,0) & 1) |
                           (ushort)(SUB161(auArr_15 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auArr_15 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auArr_15 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auArr_15 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auArr_15 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auArr_15 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auArr_15 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auArr_15 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auArr_15 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auArr_15 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auArr_15 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auArr_15 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auArr_15 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auArr_15 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auArr_15[15] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
    fnPtr_8 = fnPtr_5;
    if (uVal_6 == 0) {
      do {
        fnPtr_5 = fnPtr_8 + 0x10;
        auArr_12[0] = -(*fnPtr_5 == '\0');
        auArr_12[1] = -(fnPtr_8[0x11] == '\0');
        auArr_12[2] = -(fnPtr_8[0x12] == '\0');
        auArr_12[3] = -(fnPtr_8[0x13] == '\0');
        auArr_12[4] = -(fnPtr_8[0x14] == '\0');
        auArr_12[5] = -(fnPtr_8[0x15] == '\0');
        auArr_12[6] = -(fnPtr_8[0x16] == '\0');
        auArr_12[7] = -(fnPtr_8[0x17] == '\0');
        auArr_12[8] = -(fnPtr_8[0x18] == '\0');
        auArr_12[9] = -(fnPtr_8[0x19] == '\0');
        auArr_12[10] = -(fnPtr_8[0x1a] == '\0');
        auArr_12[11] = -(fnPtr_8[0x1b] == '\0');
        auArr_12[12] = -(fnPtr_8[0x1c] == '\0');
        auArr_12[13] = -(fnPtr_8[0x1d] == '\0');
        auArr_12[14] = -(fnPtr_8[0x1e] == '\0');
        auArr_12[15] = -(fnPtr_8[0x1f] == '\0');
        uVal_2 = (ushort)(SUB161(auArr_12 >> 7,0) & 1) | (ushort)(SUB161(auArr_12 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auArr_12 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auArr_12 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auArr_12 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auArr_12 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auArr_12 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auArr_12 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auArr_12 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auArr_12 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auArr_12 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auArr_12 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auArr_12 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auArr_12 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auArr_12 >> 0x77,0) & 1) << 0xe | (ushort)(auArr_12[15] >> 7) << 0xf;
        uVal_6 = (uint)uVal_2;
        fnPtr_8 = fnPtr_5;
      } while (uVal_2 == 0);
    }
    uVal_9 = 0;
    if (uVal_6 != 0) {
      for (; (uVal_6 >> uVal_9 & 1) == 0; uVal_9 = uVal_9 + 1) {
      }
    }
    return (uint8_t (*)[16])(fnPtr_5 + uVal_9);
  }
  pArr16_7 = (uint8_t (*)[16])0x0;
  if (DAT_18083d260 < 2) {
    fnPtr_8 = (char *)((uint64_t)param_1 & 0xfffffffffffffff0);
    uVal_6 = -1 << ((byte)param_1 & 0xf);
    auArr_15 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
    auArr_13[0] = -(*fnPtr_8 == '\0');
    auArr_13[1] = -(fnPtr_8[1] == '\0');
    auArr_13[2] = -(fnPtr_8[2] == '\0');
    auArr_13[3] = -(fnPtr_8[3] == '\0');
    auArr_13[4] = -(fnPtr_8[4] == '\0');
    auArr_13[5] = -(fnPtr_8[5] == '\0');
    auArr_13[6] = -(fnPtr_8[6] == '\0');
    auArr_13[7] = -(fnPtr_8[7] == '\0');
    auArr_13[8] = -(fnPtr_8[8] == '\0');
    auArr_13[9] = -(fnPtr_8[9] == '\0');
    auArr_13[10] = -(fnPtr_8[10] == '\0');
    auArr_13[11] = -(fnPtr_8[0xb] == '\0');
    auArr_13[12] = -(fnPtr_8[0xc] == '\0');
    auArr_13[13] = -(fnPtr_8[0xd] == '\0');
    auArr_13[14] = -(fnPtr_8[0xe] == '\0');
    auArr_13[15] = -(fnPtr_8[0xf] == '\0');
    ch_18 = auArr_15[0];
    auArr_17[0] = -(*fnPtr_8 == ch_18);
    ch_19 = auArr_15[1];
    auArr_17[1] = -(fnPtr_8[1] == ch_19);
    ch_20 = auArr_15[2];
    auArr_17[2] = -(fnPtr_8[2] == ch_20);
    ch_21 = auArr_15[3];
    auArr_17[3] = -(fnPtr_8[3] == ch_21);
    auArr_17[4] = -(fnPtr_8[4] == ch_18);
    auArr_17[5] = -(fnPtr_8[5] == ch_19);
    auArr_17[6] = -(fnPtr_8[6] == ch_20);
    auArr_17[7] = -(fnPtr_8[7] == ch_21);
    auArr_17[8] = -(fnPtr_8[8] == ch_18);
    auArr_17[9] = -(fnPtr_8[9] == ch_19);
    auArr_17[10] = -(fnPtr_8[10] == ch_20);
    auArr_17[11] = -(fnPtr_8[0xb] == ch_21);
    auArr_17[12] = -(fnPtr_8[0xc] == ch_18);
    auArr_17[13] = -(fnPtr_8[0xd] == ch_19);
    auArr_17[14] = -(fnPtr_8[0xe] == ch_20);
    auArr_17[15] = -(fnPtr_8[0xf] == ch_21);
    uVal_9 = (ushort)((ushort)(SUB161(auArr_17 >> 7,0) & 1) |
                     (ushort)(SUB161(auArr_17 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auArr_17 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auArr_17 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auArr_17 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auArr_17 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auArr_17 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auArr_17 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auArr_17 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auArr_17 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auArr_17 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auArr_17 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auArr_17 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auArr_17 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auArr_17 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auArr_17[15] >> 7) << 0xf) & uVal_6;
    uVal_6 = (ushort)((ushort)(SUB161(auArr_13 >> 7,0) & 1) |
                     (ushort)(SUB161(auArr_13 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auArr_13 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auArr_13 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auArr_13 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auArr_13 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auArr_13 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auArr_13 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auArr_13 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auArr_13 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auArr_13 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auArr_13 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auArr_13 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auArr_13 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auArr_13 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auArr_13[15] >> 7) << 0xf) & uVal_6;
    if (uVal_6 == 0) {
      do {
        uVal_1 = 0x1f;
        if (uVal_9 != 0) {
          for (; uVal_9 >> uVal_1 == 0; uVal_1 = uVal_1 - 1) {
          }
        }
        auArr_16[0] = -(fnPtr_8[0x10] == '\0');
        auArr_16[1] = -(fnPtr_8[0x11] == '\0');
        auArr_16[2] = -(fnPtr_8[0x12] == '\0');
        auArr_16[3] = -(fnPtr_8[0x13] == '\0');
        auArr_16[4] = -(fnPtr_8[0x14] == '\0');
        auArr_16[5] = -(fnPtr_8[0x15] == '\0');
        auArr_16[6] = -(fnPtr_8[0x16] == '\0');
        auArr_16[7] = -(fnPtr_8[0x17] == '\0');
        auArr_16[8] = -(fnPtr_8[0x18] == '\0');
        auArr_16[9] = -(fnPtr_8[0x19] == '\0');
        auArr_16[10] = -(fnPtr_8[0x1a] == '\0');
        auArr_16[11] = -(fnPtr_8[0x1b] == '\0');
        auArr_16[12] = -(fnPtr_8[0x1c] == '\0');
        auArr_16[13] = -(fnPtr_8[0x1d] == '\0');
        auArr_16[14] = -(fnPtr_8[0x1e] == '\0');
        auArr_16[15] = -(fnPtr_8[0x1f] == '\0');
        uVal_2 = (ushort)(SUB161(auArr_16 >> 7,0) & 1) | (ushort)(SUB161(auArr_16 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auArr_16 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auArr_16 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auArr_16 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auArr_16 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auArr_16 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auArr_16 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auArr_16 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auArr_16 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auArr_16 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auArr_16 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auArr_16 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auArr_16 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auArr_16 >> 0x77,0) & 1) << 0xe | (ushort)(auArr_16[15] >> 7) << 0xf;
        uVal_6 = (uint)uVal_2;
        bFlag_11 = uVal_9 != 0;
        auArr_14[0] = -(fnPtr_8[0x10] == ch_18);
        auArr_14[1] = -(fnPtr_8[0x11] == ch_19);
        auArr_14[2] = -(fnPtr_8[0x12] == ch_20);
        auArr_14[3] = -(fnPtr_8[0x13] == ch_21);
        auArr_14[4] = -(fnPtr_8[0x14] == ch_18);
        auArr_14[5] = -(fnPtr_8[0x15] == ch_19);
        auArr_14[6] = -(fnPtr_8[0x16] == ch_20);
        auArr_14[7] = -(fnPtr_8[0x17] == ch_21);
        auArr_14[8] = -(fnPtr_8[0x18] == ch_18);
        auArr_14[9] = -(fnPtr_8[0x19] == ch_19);
        auArr_14[10] = -(fnPtr_8[0x1a] == ch_20);
        auArr_14[11] = -(fnPtr_8[0x1b] == ch_21);
        auArr_14[12] = -(fnPtr_8[0x1c] == ch_18);
        auArr_14[13] = -(fnPtr_8[0x1d] == ch_19);
        auArr_14[14] = -(fnPtr_8[0x1e] == ch_20);
        auArr_14[15] = -(fnPtr_8[0x1f] == ch_21);
        uVal_9 = (uint)(ushort)((ushort)(SUB161(auArr_14 >> 7,0) & 1) |
                               (ushort)(SUB161(auArr_14 >> 0xf,0) & 1) << 1 |
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
                               (ushort)(SUB161(auArr_14 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auArr_14[15] >> 7) << 0xf);
        if (bFlag_11) {
          pArr16_7 = (uint8_t (*)[16])(fnPtr_8 + uVal_1);
        }
        fnPtr_8 = fnPtr_8 + 0x10;
      } while (uVal_2 == 0);
    }
    uVal_9 = (-uVal_6 & uVal_6) - 1 & uVal_9;
    uVal_6 = 0x1f;
    if (uVal_9 != 0) {
      for (; uVal_9 >> uVal_6 == 0; uVal_6 = uVal_6 - 1) {
      }
    }
    if (uVal_9 != 0) {
      pArr16_7 = (uint8_t (*)[16])(fnPtr_8 + uVal_6);
    }
  }
  else {
    uVal_3 = (uint64_t)param_1 & 0xf;
    while (bFlag_11 = uVal_3 == 0, !bFlag_11) {
      if ((*param_1)[0] == param_2) {
        pArr16_7 = param_1;
      }
      if ((*param_1)[0] == 0) {
        return pArr16_7;
      }
      param_1 = (uint8_t (*)[16])(*param_1 + 1);
      uVal_3 = (uint64_t)param_1 & 0xf;
    }
    bFlag_10 = false;
    while( true ) {
      iVal_4 = pcmpistri(ZEXT116(param_2),*param_1,0x40);
      if (bFlag_10) {
        pArr16_7 = (uint8_t (*)[16])(*param_1 + iVal_4);
        bFlag_11 = pArr16_7 == (uint8_t (*)[16])0x0;
        pcmpistri(ZEXT116(param_2),*param_1,0x40);
      }
      if (bFlag_11) break;
      bFlag_10 = (uint8_t (*)[16])0xffffffffffffffef < param_1;
      param_1 = param_1 + 1;
      bFlag_11 = param_1 == (uint8_t (*)[16])0x0;
    }
  }
  return pArr16_7;
}

// func_0x1806a6e40
uint32_t func_0x1806a6e40(char *param_1,uint64_t param_2,int param_3,int64_t param_4,uint64_t param_5, uint64_t param_6,int64_t param_7)
{
  int64_t lVal_1;
  char ch_2;
  int iVal_3;
  char *fnPtr_4;
  uint32_t uVal_5;
  char *fnPtr_6;
  int64_t lVal_7;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
    iVal_3 = 0;
    if (0 < param_3) {
      iVal_3 = param_3;
    }
    if (param_2 <= (uint64_t)(int64_t)(iVal_3 + 1)) {
      uVal_5 = 0x22;
      goto LAB_1806a6e64;
    }
    if (param_4 != 0) {
      fnPtr_4 = *(char **)(param_4 + 8);
      fnPtr_6 = param_1 + 1;
      *param_1 = '0';
      for (; 0 < param_3; param_3 = param_3 + -1) {
        ch_2 = *fnPtr_4;
        if (ch_2 == '\0') {
          ch_2 = '0';
        }
        else {
          fnPtr_4 = fnPtr_4 + 1;
        }
        *fnPtr_6 = ch_2;
        fnPtr_6 = fnPtr_6 + 1;
      }
      *fnPtr_6 = '\0';
      if ((-1 < param_3) && (ch_2 = '\0', func_0x1806a6f50(), ch_2 != '\0')) {
        while( true ) {
          fnPtr_6 = fnPtr_6 + -1;
          if (*fnPtr_6 != '9') break;
          *fnPtr_6 = '0';
        }
        *fnPtr_6 = *fnPtr_6 + '\x01';
      }
      if (*param_1 == '1') {
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
      else {
        lVal_1 = -1;
        do {
          lVal_7 = lVal_1;
          lVal_1 = lVal_7 + 1;
        } while (param_1[lVal_7 + 2] != '\0');
        func_0x1806aa960(param_1,param_1 + 1,lVal_7 + 2);
      }
      return 0;
    }
  }
  uVal_5 = 0x16;
LAB_1806a6e64:
  *(uint32_t *)(param_7 + 0x2c) = uVal_5;
  *(uint8_t *)(param_7 + 0x30) = 1;
  func_0x180684b50(0,0,0,0,0,param_7);
  return uVal_5;
}

// func_0x1806a6f50
bool func_0x1806a6f50(char *param_1,char *param_2,int param_3,int param_4,int param_5)
{
  int iVal_1;
  char *fnPtr_2;
  
  if (param_5 == 0) {
    return '4' < *param_2;
  }
  iVal_1 = fegetround();
  if (iVal_1 == 0) {
    if ('5' < *param_2) {
      return true;
    }
    if ('4' < *param_2) {
      fnPtr_2 = param_2;
      if (param_4 == 0) {
        return true;
      }
      do {
        fnPtr_2 = fnPtr_2 + 1;
      } while (*fnPtr_2 == '0');
      if (*fnPtr_2 != '\0') {
        return true;
      }
      if (param_2 != param_1) {
        return (bool)(param_2[-1] & 1);
      }
    }
  }
  else if (iVal_1 == 0x200) {
    if (param_4 != 0) {
      for (; *param_2 == '0'; param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return false;
      }
    }
    if (param_3 != 0x2d) {
      return true;
    }
  }
  else if (iVal_1 == 0x100) {
    if (param_4 != 0) {
      for (; *param_2 == '0'; param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return false;
      }
    }
    if (param_3 == 0x2d) {
      return true;
    }
  }
  return false;
}

// func_0x1806a7020
void func_0x1806a7020(uint64_t param_1,int param_2,int param_3,uint32_t *param_4,char *param_5, int64_t param_6)
{
  uint *pU64_1;
  sbyte sz_2;
  uint32_t uVal_3;
  int iVal_4;
  uint uVal_5;
  uint64_t uVal_6;
  uint32_t *pU64_7;
  int64_t lVal_8;
  byte bFlag_9;
  uint uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  uint uVal_13;
  char *fnPtr_14;
  double dVal_15;
  char *fnPtr_16;
  uint uVal_17;
  uint uVal_18;
  uint64_t uVal_19;
  uint uVal_20;
  rsize_t _MaxCount;
  uint uVal_21;
  uint uVal_22;
  bool bFlag_23;
  uint8_t auStackY_828 [32];
  uint uStack_7f0;
  uint local_7ec;
  uint64_t local_7e8;
  uint uStack_7e0;
  int local_7dc;
  uint local_7d8 [2];
  uint32_t local_7d0;
  uint32_t local_7cc;
  uint64_t *puStack_7c8;
  byte local_7c0 [8];
  char local_7b8;
  uint64_t *puStack_7b0;
  char *local_7a8;
  uint32_t *local_7a0;
  uint local_798;
  uint64_t local_794;
  uint uStack_5c8;
  uint64_t auStack_5c4 [57];
  uint local_3f8;
  uint64_t local_3f4;
  uint uStack_228;
  uint auStack_224 [115];
  uint64_t local_58;
  
  local_58 = DAT_18083cf40 ^ (uint64_t)auStackY_828;
  local_7a8 = param_5;
  local_7dc = param_3;
  local_7a0 = param_4;
  func_0x1806a9a80(local_7c0);
  local_7b8 = (local_7c0[0] & 0x1f) != 0x1f;
  if ((bool)local_7b8) {
    func_0x1806a9b10(local_7c0);
  }
  *(char **)(param_4 + 2) = param_5;
  uVal_3 = 0x20;
  if ((int64_t)param_1 < 0) {
    uVal_3 = 0x2d;
  }
  local_7d8[0] = 0;
  *param_4 = uVal_3;
  func_0x1806a9a10(local_7d8,0,0);
  uVal_6 = param_1 >> 0x34 & 0x7ff;
  if (uVal_6 == 0) {
    if (((param_1 & 0xfffffffffffff) == 0) || ((local_7d8[0] & 0x1000000) != 0)) {
      param_4[1] = 0;
LAB_1806a716e:
      iVal_4 = func_0x180695c70();
joined_r0x0001806a71b4:
      if (iVal_4 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_1806a824c;
    }
  }
  else if (uVal_6 == 0x7ff) {
    if ((param_1 & 0xfffffffffffff) == 0) {
      uVal_20 = 1;
    }
    else if (((int64_t)param_1 < 0) && ((param_1 & 0xfffffffffffff) == 0x8000000000000)) {
      uVal_20 = 4;
    }
    else {
      uVal_20 = ~(uint)(param_1 >> 0x33) & 1 | 2;
    }
    param_4[1] = 1;
    if (uVal_20 == 1) {
      iVal_4 = func_0x180695c70();
      goto joined_r0x0001806a71b4;
    }
    if (((uVal_20 == 2) || (uVal_20 == 3)) || (uVal_20 == 4)) goto LAB_1806a716e;
  }
  local_7ec = 0;
  local_7cc = 0x8001f;
  dVal_15 = (double)(param_1 & 0x7fffffffffffffff);
  func_0x1806a9a10(&local_7d0,0,0);
  func_0x1806a9a10(&local_7ec,0x8001f,local_7cc);
  local_7ec = param_2 + 1;
  uVal_6 = (-(uint64_t)((uint64_t)dVal_15 >> 0x34 != 0) & 0x10000000000000) +
          (param_1 & 0xfffffffffffff);
  uVal_22 = (2 - (uint)((uint64_t)dVal_15 >> 0x34 != 0)) + (uint)((uint64_t)dVal_15 >> 0x34);
  log10(dVal_15);
  dVal_15 = (double)func_0x1806a9b70();
  uVal_5 = -(uint)(((int)dVal_15 + 0x80000001U & 0xfffffffe) != 0) & (int)dVal_15;
  uVal_17 = (uint)(uVal_6 >> 0x20);
  local_794 = uVal_6;
  uVal_20 = (uint)(uVal_17 != 0);
  uVal_13 = uVal_20 + 1;
  if (uVal_22 < 0x434) {
    if (uVal_22 == 0x36) {
LAB_1806a7658:
      local_7e8 = (uint64_t *)((uint64_t)local_7e8._4_4_ << 0x20);
      pU64_1 = (uint *)((int64_t)&local_794 + (uint64_t)(-(uint)(uVal_17 != 0) & 4));
      iVal_4 = 0x1f;
      bFlag_23 = *pU64_1 == 0;
      if (!bFlag_23) {
        for (; *pU64_1 >> iVal_4 == 0; iVal_4 = iVal_4 + -1) {
        }
      }
      if (bFlag_23) {
        iVal_4 = 0;
      }
      else {
        iVal_4 = iVal_4 + 1;
      }
      uVal_20 = (iVal_4 == 0x20) + uVal_13;
      if (uVal_20 < 0x74) {
        uVal_17 = uVal_20 - 1;
        while (uVal_17 != 0xffffffff) {
          uVal_21 = uVal_17 - 1;
          if (uVal_17 < uVal_13) {
            iVal_4 = *(int *)((int64_t)&local_794 + (uint64_t)uVal_17 * 4);
          }
          else {
            iVal_4 = 0;
          }
          if (uVal_21 < uVal_13) {
            uVal_10 = *(uint *)((int64_t)&local_794 + (uint64_t)uVal_21 * 4);
          }
          else {
            uVal_10 = 0;
          }
          *(uint *)((int64_t)&local_794 + (uint64_t)uVal_17 * 4) = uVal_10 >> 0x1f | iVal_4 * 2;
          uVal_17 = uVal_21;
        }
      }
      else {
        uVal_20 = 0;
      }
      uVal_13 = 0x435 - uVal_22 >> 5;
      local_798 = uVal_20;
      func_0x1806ab010(&local_3f4,0,(uint64_t)uVal_13 * 4);
      *(int *)((int64_t)&local_3f4 + (uint64_t)uVal_13 * 4) = 1 << ((byte)(0x435 - uVal_22) & 0x1f);
    }
    else {
      local_3f4._4_4_ = 0x100000;
      local_3f4._0_4_ = 0;
      local_3f8 = 2;
      if (uVal_17 == 0) goto LAB_1806a7658;
      uVal_6 = 0;
      do {
        if (*(int *)((int64_t)&local_3f4 + uVal_6 * 4) != *(int *)((int64_t)&local_794 + uVal_6 * 4)
           ) goto LAB_1806a7658;
        uVal_20 = (int)uVal_6 + 1;
        uVal_6 = (uint64_t)uVal_20;
      } while (uVal_20 != 2);
      local_7e8 = (uint64_t *)((uint64_t)local_7e8._4_4_ << 0x20);
      iVal_4 = 0x1f;
      if (uVal_17 != 0) {
        for (; uVal_17 >> iVal_4 == 0; iVal_4 = iVal_4 + -1) {
        }
      }
      if (uVal_17 == 0) {
        iVal_4 = 0;
      }
      else {
        iVal_4 = iVal_4 + 1;
      }
      local_798 = (0x20U - iVal_4 < 2) + uVal_13;
      if (local_798 < 0x74) {
        uVal_20 = local_798 - 1;
        while (uVal_20 != 0xffffffff) {
          uVal_17 = uVal_20 - 1;
          if (uVal_20 < uVal_13) {
            iVal_4 = *(int *)((int64_t)&local_794 + (uint64_t)uVal_20 * 4);
          }
          else {
            iVal_4 = 0;
          }
          if (uVal_17 < uVal_13) {
            uVal_21 = *(uint *)((int64_t)&local_794 + (uint64_t)uVal_17 * 4);
          }
          else {
            uVal_21 = 0;
          }
          *(uint *)((int64_t)&local_794 + (uint64_t)uVal_20 * 4) = uVal_21 >> 0x1e | iVal_4 * 4;
          uVal_20 = uVal_17;
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,&local_3f4,0);
      }
      uVal_20 = local_798;
      uVal_13 = 0x436 - uVal_22 >> 5;
      func_0x1806ab010(&local_3f4,0,(uint64_t)uVal_13 * 4);
      *(int *)((int64_t)&local_3f4 + (uint64_t)uVal_13 * 4) = 1 << ((byte)(0x436 - uVal_22) & 0x1f);
    }
    local_3f8 = uVal_13 + 1;
    _MaxCount = (uint64_t)local_3f8 << 2;
  }
  else {
    local_3f4._4_4_ = 0x100000;
    local_3f4._0_4_ = 0;
    local_3f8 = 2;
    if (uVal_17 == 0) {
LAB_1806a7419:
      local_7e8 = (uint64_t *)((uint64_t)local_7e8._4_4_ << 0x20);
      uVal_21 = uVal_22 - 0x433 & 0x1f;
      uVal_17 = uVal_22 - 0x433 >> 5;
      sz_2 = (sbyte)uVal_21;
      bFlag_9 = 0x20 - sz_2;
      uVal_22 = (int)(1L << (bFlag_9 & 0x3f)) - 1;
      pU64_1 = (uint *)((int64_t)&local_794 + (uint64_t)uVal_20 * 4);
      iVal_4 = 0x1f;
      bFlag_23 = *pU64_1 == 0;
      if (!bFlag_23) {
        for (; *pU64_1 >> iVal_4 == 0; iVal_4 = iVal_4 + -1) {
        }
      }
      if (bFlag_23) {
        iVal_4 = 0;
      }
      else {
        iVal_4 = iVal_4 + 1;
      }
      if ((uVal_13 + uVal_17 < 0x74) &&
         (local_798 = (0x20U - iVal_4 < uVal_21) + uVal_13 + uVal_17, local_798 < 0x74)) {
        uVal_20 = local_798;
        while (uVal_20 = uVal_20 - 1, uVal_20 != uVal_17 - 1) {
          uVal_21 = uVal_20 - uVal_17;
          if (uVal_21 < uVal_13) {
            uVal_10 = *(uint *)((int64_t)&local_794 + (uint64_t)uVal_21 * 4);
          }
          else {
            uVal_10 = 0;
          }
          if (uVal_21 - 1 < uVal_13) {
            uVal_21 = *(uint *)((int64_t)&local_794 + (uint64_t)(uVal_21 - 1) * 4);
          }
          else {
            uVal_21 = 0;
          }
          *(uint *)((int64_t)&local_794 + (uint64_t)uVal_20 * 4) =
               (uVal_21 & ~uVal_22) >> (bFlag_9 & 0x1f) | (uVal_10 & uVal_22) << sz_2;
        }
        uVal_6 = 0;
        if (uVal_17 != 0) {
          do {
            *(uint32_t *)((int64_t)&local_794 + uVal_6 * 4) = 0;
            uVal_20 = (int)uVal_6 + 1;
            uVal_6 = (uint64_t)uVal_20;
          } while (uVal_20 != uVal_17);
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,&local_3f4,0);
      }
      local_3f4._0_4_ = 2;
    }
    else {
      uVal_6 = 0;
      do {
        if (*(int *)((int64_t)&local_3f4 + uVal_6 * 4) != *(int *)((int64_t)&local_794 + uVal_6 * 4)
           ) goto LAB_1806a7419;
        uVal_17 = (int)uVal_6 + 1;
        uVal_6 = (uint64_t)uVal_17;
      } while (uVal_17 != 2);
      local_7e8 = (uint64_t *)((uint64_t)local_7e8._4_4_ << 0x20);
      uVal_21 = uVal_22 - 0x432 & 0x1f;
      uVal_17 = uVal_22 - 0x432 >> 5;
      sz_2 = (sbyte)uVal_21;
      bFlag_9 = 0x20 - sz_2;
      uVal_22 = (int)(1L << (bFlag_9 & 0x3f)) - 1;
      pU64_1 = (uint *)((int64_t)&local_794 + (uint64_t)uVal_20 * 4);
      iVal_4 = 0x1f;
      bFlag_23 = *pU64_1 == 0;
      if (!bFlag_23) {
        for (; *pU64_1 >> iVal_4 == 0; iVal_4 = iVal_4 + -1) {
        }
      }
      if (bFlag_23) {
        iVal_4 = 0;
      }
      else {
        iVal_4 = iVal_4 + 1;
      }
      if ((uVal_13 + uVal_17 < 0x74) &&
         (local_798 = (0x20U - iVal_4 < uVal_21) + uVal_13 + uVal_17, local_798 < 0x74)) {
        uVal_20 = local_798;
        while (uVal_20 = uVal_20 - 1, uVal_20 != uVal_17 - 1) {
          uVal_21 = uVal_20 - uVal_17;
          if (uVal_21 < uVal_13) {
            uVal_10 = *(uint *)((int64_t)&local_794 + (uint64_t)uVal_21 * 4);
          }
          else {
            uVal_10 = 0;
          }
          if (uVal_21 - 1 < uVal_13) {
            uVal_21 = *(uint *)((int64_t)&local_794 + (uint64_t)(uVal_21 - 1) * 4);
          }
          else {
            uVal_21 = 0;
          }
          *(uint *)((int64_t)&local_794 + (uint64_t)uVal_20 * 4) =
               (uVal_21 & ~uVal_22) >> (bFlag_9 & 0x1f) | (uVal_10 & uVal_22) << sz_2;
        }
        uVal_6 = 0;
        if (uVal_17 != 0) {
          do {
            *(uint32_t *)((int64_t)&local_794 + uVal_6 * 4) = 0;
            uVal_20 = (int)uVal_6 + 1;
            uVal_6 = (uint64_t)uVal_20;
          } while (uVal_20 != uVal_17);
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,&local_3f4,0);
      }
      local_3f4._0_4_ = 4;
    }
    local_3f4._4_4_ = 0;
    _MaxCount = 4;
    local_3f8 = 1;
    uVal_20 = local_798;
  }
  uStack_5c8 = local_3f8;
  memcpy_s(auStack_5c4,0x1cc,&local_3f4,_MaxCount);
  if ((int)uVal_5 < 0) {
    uVal_13 = -uVal_5;
    local_7e8 = (uint64_t *)CONCAT44(local_7e8._4_4_,uVal_13);
    uVal_6 = (uint64_t)uVal_13 / 10;
    uStack_7f0 = (uint)uVal_6;
    if (uStack_7f0 != 0) {
      do {
        uStack_7e0 = (uint)uVal_6;
        if (0x26 < uStack_7e0) {
          uStack_7e0 = 0x26;
        }
        uVal_13 = uStack_7e0 - 1;
        lVal_8 = (uint64_t)(byte)(&DAT_1806e6ac2)[(uint64_t)uVal_13 * 4] * 4;
        local_3f8 = (uint)(byte)(&DAT_1806e6ac3)[(uint64_t)uVal_13 * 4] +
                    (uint)(byte)(&DAT_1806e6ac2)[(uint64_t)uVal_13 * 4];
        func_0x1806ab010(&local_3f4,0,lVal_8);
        func_0x1806aa960((int64_t)&local_3f4 + lVal_8,
                      &DAT_1806e61b0 +
                      (uint64_t)*(ushort *)(&DAT_1806e6ac0 + (uint64_t)uVal_13 * 4) * 4);
        if (local_3f8 < 2) {
          uVal_6 = (uint64_t)(uint)local_3f4;
          if ((uint)local_3f4 == 0) {
LAB_1806a7ca5:
            local_798 = 0;
            uVal_20 = local_798;
            goto LAB_1806a7f6b;
          }
          if (((uint)local_3f4 == 1) || (uVal_20 == 0)) goto LAB_1806a7f6b;
          uVal_19 = 0;
          uVal_12 = 0;
          do {
            uVal_11 = *(uint *)((int64_t)&local_794 + uVal_12 * 4) * uVal_6 + uVal_19;
            *(int *)((int64_t)&local_794 + uVal_12 * 4) = (int)uVal_11;
            uVal_19 = uVal_11 >> 0x20;
            iVal_4 = (int)(uVal_11 >> 0x20);
            uVal_13 = (int)uVal_12 + 1;
            uVal_12 = (uint64_t)uVal_13;
          } while (uVal_13 != uVal_20);
LAB_1806a7cef:
          uVal_20 = local_798;
          if (iVal_4 == 0) goto LAB_1806a7f6b;
          if (local_798 < 0x73) {
            *(int *)((int64_t)&local_794 + (uint64_t)local_798 * 4) = iVal_4;
            local_798 = local_798 + 1;
            uVal_20 = local_798;
            goto LAB_1806a7f6b;
          }
          uVal_20 = 0;
          local_798 = 0;
          bFlag_23 = false;
        }
        else {
          if (uVal_20 < 2) {
            iVal_4 = (int)local_794;
            uVal_6 = local_794 & 0xffffffff;
            local_798 = local_3f8;
            if (local_3f8 != 0) {
              if (local_3f8 < 0x74) {
                func_0x1806aa960(&local_794,&local_3f4);
              }
              else {
                func_0x1806ab010(&local_794,0);
                pU64_7 = (uint32_t *)func_0x1806823dc();
                *pU64_7 = 0x22;
                func_0x180684970();
              }
            }
            if (iVal_4 == 0) goto LAB_1806a7ca5;
            uVal_20 = local_798;
            if ((iVal_4 != 1) && (local_798 != 0)) {
              uVal_19 = 0;
              uVal_12 = 0;
              do {
                uVal_11 = *(uint *)((int64_t)&local_794 + uVal_12 * 4) * uVal_6 + uVal_19;
                *(int *)((int64_t)&local_794 + uVal_12 * 4) = (int)uVal_11;
                uVal_19 = uVal_11 >> 0x20;
                iVal_4 = (int)(uVal_11 >> 0x20);
                uVal_20 = (int)uVal_12 + 1;
                uVal_12 = (uint64_t)uVal_20;
              } while (uVal_20 != local_798);
              goto LAB_1806a7cef;
            }
          }
          else {
            bFlag_23 = local_3f8 < uVal_20;
            puStack_7b0 = &local_3f4;
            if (!bFlag_23) {
              puStack_7b0 = &local_794;
            }
            puStack_7c8 = &local_3f4;
            uVal_13 = uVal_20;
            if (bFlag_23) {
              uVal_13 = local_3f8;
            }
            uVal_17 = local_3f8;
            if (bFlag_23) {
              uVal_17 = uVal_20;
              puStack_7c8 = &local_794;
            }
            local_798 = 0;
            uVal_6 = 0;
            uStack_228 = 0;
            if (uVal_13 != 0) {
              do {
                uVal_20 = *(uint *)((int64_t)puStack_7b0 + uVal_6 * 4);
                uVal_22 = (uint)uVal_6;
                if (uVal_20 == 0) {
                  if (uVal_22 == local_798) {
                    auStack_224[uVal_6] = 0;
                    local_798 = uVal_22 + 1;
                    uStack_228 = local_798;
                  }
                }
                else {
                  uVal_19 = 0;
                  if (uVal_17 != 0) {
                    do {
                      uVal_21 = (uint)uVal_6;
                      uVal_12 = uVal_6;
                      if (uVal_21 == 0x73) break;
                      if (uVal_21 == local_798) {
                        auStack_224[uVal_6] = 0;
                        uStack_228 = uVal_21 + 1;
                      }
                      uVal_12 = (uint64_t)(uVal_21 + 1);
                      uVal_19 = (uint64_t)
                               *(uint *)((int64_t)puStack_7c8 + (uint64_t)(uVal_21 + -uVal_22) * 4)
                               * (uint64_t)uVal_20 + uVal_19 + (uint64_t)auStack_224[uVal_6];
                      auStack_224[uVal_6] = (uint)uVal_19;
                      uVal_19 = uVal_19 >> 0x20;
                      uVal_6 = uVal_12;
                      local_798 = uStack_228;
                    } while (uVal_21 + 1 + -uVal_22 != uVal_17);
                    uVal_20 = (uint)uVal_19;
                    uVal_6 = uVal_12;
                    while (uVal_20 != 0) {
                      uVal_21 = (uint)uVal_6;
                      if (uVal_21 == 0x73) goto LAB_1806a8012;
                      if (uVal_21 == local_798) {
                        auStack_224[uVal_6] = 0;
                        uStack_228 = uVal_21 + 1;
                      }
                      uVal_20 = auStack_224[uVal_6];
                      auStack_224[uVal_6] = (uint)(uVal_20 + uVal_19);
                      uVal_20 = (uint)(uVal_20 + uVal_19 >> 0x20);
                      uVal_19 = (uint64_t)uVal_20;
                      uVal_6 = (uint64_t)(uVal_21 + 1);
                      local_798 = uStack_228;
                    }
                  }
                  if ((int)uVal_6 == 0x73) goto LAB_1806a8012;
                }
                uVal_6 = (uint64_t)(uVal_22 + 1);
              } while (uVal_22 + 1 != uVal_13);
            }
            uVal_20 = local_798;
            if (local_798 != 0) {
              if (local_798 < 0x74) {
                func_0x1806aa960(&local_794,auStack_224);
                uVal_20 = local_798;
              }
              else {
                func_0x1806ab010(&local_794,0);
                pU64_7 = (uint32_t *)func_0x1806823dc();
                *pU64_7 = 0x22;
                func_0x180684970();
                uVal_20 = local_798;
              }
            }
          }
LAB_1806a7f6b:
          bFlag_23 = true;
        }
        if (!bFlag_23) goto LAB_1806a8012;
        uStack_7f0 = uStack_7f0 - uStack_7e0;
        uVal_6 = (uint64_t)uStack_7f0;
      } while (uStack_7f0 != 0);
      uVal_13 = (uint)local_7e8;
    }
    uVal_17 = uStack_5c8;
    if (uVal_13 % 10 != 0) {
      uVal_13 = (&DAT_1806e6b58)[uVal_13 % 10 - 1];
      if (uVal_13 == 0) {
LAB_1806a8012:
        local_798 = 0;
        uVal_17 = uStack_5c8;
        uVal_20 = local_798;
      }
      else if ((uVal_13 != 1) && (uVal_20 != 0)) {
        uVal_6 = 0;
        uVal_19 = 0;
        do {
          uVal_12 = (uint64_t)*(uint *)((int64_t)&local_794 + uVal_19 * 4) * (uint64_t)uVal_13 +
                   uVal_6;
          *(int *)((int64_t)&local_794 + uVal_19 * 4) = (int)uVal_12;
          uVal_6 = uVal_12 >> 0x20;
          uVal_17 = (int)uVal_19 + 1;
          uVal_19 = (uint64_t)uVal_17;
        } while (uVal_17 != uVal_20);
        iVal_4 = (int)(uVal_12 >> 0x20);
        uVal_17 = uStack_5c8;
        uVal_20 = local_798;
        if (iVal_4 != 0) {
          if (0x72 < local_798) goto LAB_1806a8012;
          *(int *)((int64_t)&local_794 + (uint64_t)local_798 * 4) = iVal_4;
          local_798 = local_798 + 1;
          uVal_20 = local_798;
        }
      }
    }
  }
  else {
    uVal_6 = (uint64_t)uVal_5 / 10;
    uVal_13 = (uint)uVal_6;
    uVal_17 = uStack_5c8;
    while (uVal_13 != 0) {
      uStack_7e0 = (uint)uVal_6;
      if (0x26 < uStack_7e0) {
        uStack_7e0 = 0x26;
      }
      uVal_22 = uStack_7e0 - 1;
      lVal_8 = (uint64_t)(byte)(&DAT_1806e6ac2)[(uint64_t)uVal_22 * 4] * 4;
      local_3f8 = (uint)(byte)(&DAT_1806e6ac3)[(uint64_t)uVal_22 * 4] +
                  (uint)(byte)(&DAT_1806e6ac2)[(uint64_t)uVal_22 * 4];
      func_0x1806ab010(&local_3f4,0,lVal_8);
      func_0x1806aa960((int64_t)&local_3f4 + lVal_8,
                    &DAT_1806e61b0 +
                    (uint64_t)*(ushort *)(&DAT_1806e6ac0 + (uint64_t)uVal_22 * 4) * 4);
      uVal_22 = (uint)auStack_5c4[0];
      if (local_3f8 < 2) {
        uVal_6 = (uint64_t)(uint)local_3f4;
        if ((uint)local_3f4 == 0) {
LAB_1806a77c5:
          uStack_5c8 = 0;
LAB_1806a77c8:
          uVal_17 = uStack_5c8;
          goto LAB_1806a7b20;
        }
        if (((uint)local_3f4 == 1) || (uVal_17 == 0)) goto LAB_1806a7b20;
        uVal_19 = 0;
        uVal_12 = 0;
        do {
          uVal_11 = *(uint *)((int64_t)auStack_5c4 + uVal_12 * 4) * uVal_6 + uVal_19;
          *(int *)((int64_t)auStack_5c4 + uVal_12 * 4) = (int)uVal_11;
          uVal_19 = uVal_11 >> 0x20;
          iVal_4 = (int)(uVal_11 >> 0x20);
          uVal_22 = (int)uVal_12 + 1;
          uVal_12 = (uint64_t)uVal_22;
        } while (uVal_22 != uVal_17);
LAB_1806a7867:
        uVal_17 = uStack_5c8;
        if (iVal_4 == 0) goto LAB_1806a7b20;
        if (uStack_5c8 < 0x73) {
          *(int *)((int64_t)auStack_5c4 + (uint64_t)uStack_5c8 * 4) = iVal_4;
          uStack_5c8 = uStack_5c8 + 1;
          goto LAB_1806a77c8;
        }
        uVal_17 = 0;
        uStack_5c8 = 0;
        bFlag_23 = false;
      }
      else {
        if (uVal_17 < 2) {
          uVal_6 = (uint64_t)(uint)auStack_5c4[0];
          uStack_5c8 = local_3f8;
          if (local_3f8 != 0) {
            if (local_3f8 < 0x74) {
              func_0x1806aa960(auStack_5c4,&local_3f4);
            }
            else {
              func_0x1806ab010(auStack_5c4,0);
              pU64_7 = (uint32_t *)func_0x1806823dc();
              *pU64_7 = 0x22;
              func_0x180684970();
            }
          }
          if (uVal_22 == 0) goto LAB_1806a77c5;
          uVal_17 = uStack_5c8;
          if ((uVal_22 != 1) && (uStack_5c8 != 0)) {
            uVal_19 = 0;
            uVal_12 = 0;
            do {
              uVal_11 = *(uint *)((int64_t)auStack_5c4 + uVal_12 * 4) * uVal_6 + uVal_19;
              *(int *)((int64_t)auStack_5c4 + uVal_12 * 4) = (int)uVal_11;
              uVal_19 = uVal_11 >> 0x20;
              iVal_4 = (int)(uVal_11 >> 0x20);
              uVal_17 = (int)uVal_12 + 1;
              uVal_12 = (uint64_t)uVal_17;
            } while (uVal_17 != uStack_5c8);
            goto LAB_1806a7867;
          }
        }
        else {
          bFlag_23 = local_3f8 < uVal_17;
          puStack_7c8 = &local_3f4;
          if (!bFlag_23) {
            puStack_7c8 = auStack_5c4;
          }
          local_7e8 = &local_3f4;
          uVal_22 = uVal_17;
          if (bFlag_23) {
            uVal_22 = local_3f8;
          }
          uVal_21 = local_3f8;
          if (bFlag_23) {
            uVal_21 = uVal_17;
            local_7e8 = auStack_5c4;
          }
          uStack_5c8 = 0;
          uVal_6 = 0;
          uStack_228 = 0;
          if (uVal_22 != 0) {
            do {
              uVal_17 = *(uint *)((int64_t)puStack_7c8 + uVal_6 * 4);
              uVal_10 = (uint)uVal_6;
              if (uVal_17 == 0) {
                if (uVal_10 == uStack_5c8) {
                  auStack_224[uVal_6] = 0;
                  uStack_5c8 = uVal_10 + 1;
                  uStack_228 = uStack_5c8;
                }
              }
              else {
                uVal_19 = 0;
                if (uVal_21 != 0) {
                  do {
                    uVal_18 = (uint)uVal_6;
                    uVal_12 = uVal_6;
                    if (uVal_18 == 0x73) break;
                    if (uVal_18 == uStack_5c8) {
                      auStack_224[uVal_6] = 0;
                      uStack_228 = uVal_18 + 1;
                    }
                    uVal_12 = (uint64_t)(uVal_18 + 1);
                    uVal_19 = (uint64_t)
                             *(uint *)((int64_t)local_7e8 + (uint64_t)(uVal_18 + -uVal_10) * 4) *
                             (uint64_t)uVal_17 + (uint64_t)auStack_224[uVal_6] + uVal_19;
                    auStack_224[uVal_6] = (uint)uVal_19;
                    uVal_19 = uVal_19 >> 0x20;
                    uVal_6 = uVal_12;
                    uStack_5c8 = uStack_228;
                  } while (uVal_18 + 1 + -uVal_10 != uVal_21);
                  uVal_17 = (uint)uVal_19;
                  uVal_6 = uVal_12;
                  while (uVal_17 != 0) {
                    uVal_18 = (uint)uVal_6;
                    if (uVal_18 == 0x73) goto LAB_1806a7bea;
                    if (uVal_18 == uStack_5c8) {
                      auStack_224[uVal_6] = 0;
                      uStack_228 = uVal_18 + 1;
                    }
                    uVal_17 = auStack_224[uVal_6];
                    auStack_224[uVal_6] = (uint)(uVal_17 + uVal_19);
                    uVal_17 = (uint)(uVal_17 + uVal_19 >> 0x20);
                    uVal_19 = (uint64_t)uVal_17;
                    uVal_6 = (uint64_t)(uVal_18 + 1);
                    uStack_5c8 = uStack_228;
                  }
                }
                if ((int)uVal_6 == 0x73) goto LAB_1806a7bea;
              }
              uVal_6 = (uint64_t)(uVal_10 + 1);
            } while (uVal_10 + 1 != uVal_22);
          }
          uVal_17 = uStack_5c8;
          if (uStack_5c8 != 0) {
            if (uStack_5c8 < 0x74) {
              func_0x1806aa960(auStack_5c4,auStack_224);
              uVal_17 = uStack_5c8;
            }
            else {
              func_0x1806ab010(auStack_5c4,0);
              pU64_7 = (uint32_t *)func_0x1806823dc();
              *pU64_7 = 0x22;
              func_0x180684970();
              uVal_17 = uStack_5c8;
            }
          }
        }
LAB_1806a7b20:
        bFlag_23 = true;
      }
      if (!bFlag_23) goto LAB_1806a7bea;
      uVal_13 = uVal_13 - uStack_7e0;
      uVal_6 = (uint64_t)uVal_13;
    }
    if (uVal_5 % 10 != 0) {
      uVal_13 = (&DAT_1806e6b58)[uVal_5 % 10 - 1];
      if (uVal_13 == 0) {
LAB_1806a7bea:
        uStack_5c8 = 0;
LAB_1806a7bed:
        uVal_17 = uStack_5c8;
      }
      else if ((uVal_13 != 1) && (uVal_17 != 0)) {
        uVal_6 = 0;
        uVal_19 = 0;
        do {
          uVal_12 = (uint64_t)*(uint *)((int64_t)auStack_5c4 + uVal_19 * 4) * (uint64_t)uVal_13 +
                   uVal_6;
          *(int *)((int64_t)auStack_5c4 + uVal_19 * 4) = (int)uVal_12;
          uVal_6 = uVal_12 >> 0x20;
          uVal_22 = (int)uVal_19 + 1;
          uVal_19 = (uint64_t)uVal_22;
        } while (uVal_22 != uVal_17);
        iVal_4 = (int)(uVal_12 >> 0x20);
        uVal_17 = uStack_5c8;
        if (iVal_4 != 0) {
          if (0x72 < uStack_5c8) goto LAB_1806a7bea;
          *(int *)((int64_t)auStack_5c4 + (uint64_t)uStack_5c8 * 4) = iVal_4;
          uStack_5c8 = uStack_5c8 + 1;
          goto LAB_1806a7bed;
        }
      }
    }
  }
  fnPtr_16 = local_7a8;
  if (uVal_20 != 0) {
    uVal_6 = 0;
    uVal_19 = 0;
    do {
      uVal_12 = uVal_6 + (uint64_t)*(uint *)((int64_t)&local_794 + uVal_19 * 4) * 10;
      *(int *)((int64_t)&local_794 + uVal_19 * 4) = (int)uVal_12;
      uVal_13 = (int)uVal_19 + 1;
      uVal_19 = (uint64_t)uVal_13;
      uVal_6 = uVal_12 >> 0x20;
    } while (uVal_13 != uVal_20);
    iVal_4 = (int)(uVal_12 >> 0x20);
    if (iVal_4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((int64_t)&local_794 + (uint64_t)local_798 * 4) = iVal_4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
  }
  iVal_4 = func_0x18068e5d0(&local_798,&uStack_5c8);
  if (iVal_4 == 10) {
    uVal_5 = uVal_5 + 1;
    *fnPtr_16 = '1';
    fnPtr_14 = fnPtr_16 + 1;
    if (uVal_17 != 0) {
      uVal_6 = 0;
      uVal_19 = 0;
      do {
        uVal_12 = uVal_6 + (uint64_t)*(uint *)((int64_t)auStack_5c4 + uVal_19 * 4) * 10;
        *(int *)((int64_t)auStack_5c4 + uVal_19 * 4) = (int)uVal_12;
        uVal_20 = (int)uVal_19 + 1;
        uVal_19 = (uint64_t)uVal_20;
        uVal_6 = uVal_12 >> 0x20;
      } while (uVal_20 != uVal_17);
      iVal_4 = (int)(uVal_12 >> 0x20);
      if (iVal_4 != 0) {
        if (uStack_5c8 < 0x73) {
          *(int *)((int64_t)auStack_5c4 + (uint64_t)uStack_5c8 * 4) = iVal_4;
          uStack_5c8 = uStack_5c8 + 1;
        }
        else {
          uStack_5c8 = 0;
        }
      }
    }
  }
  else if (iVal_4 == 0) {
    uVal_5 = uVal_5 - 1;
    fnPtr_14 = fnPtr_16;
  }
  else {
    fnPtr_14 = fnPtr_16 + 1;
    *fnPtr_16 = (char)iVal_4 + '0';
  }
  local_7a0[1] = uVal_5;
  uVal_20 = local_7ec;
  if (((-1 < (int)uVal_5) && (local_7ec < 0x80000000)) && (local_7dc == 0)) {
    uVal_20 = local_7ec + uVal_5;
  }
  uVal_6 = (uint64_t)uVal_20;
  if (param_6 - 1U < (uint64_t)uVal_20) {
    uVal_6 = param_6 - 1U;
  }
  fnPtr_16 = fnPtr_16 + uVal_6;
  while ((fnPtr_14 != fnPtr_16 && (local_798 != 0))) {
    uVal_6 = 0;
    uVal_19 = 0;
    do {
      uVal_12 = (uint64_t)*(uint *)((int64_t)&local_794 + uVal_19 * 4) * 1000000000 + uVal_6;
      *(int *)((int64_t)&local_794 + uVal_19 * 4) = (int)uVal_12;
      uVal_6 = uVal_12 >> 0x20;
      uVal_20 = (int)uVal_19 + 1;
      uVal_19 = (uint64_t)uVal_20;
    } while (uVal_20 != local_798);
    iVal_4 = (int)(uVal_12 >> 0x20);
    if (iVal_4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((int64_t)&local_794 + (uint64_t)local_798 * 4) = iVal_4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
    uVal_6 = func_0x18068e5d0(&local_798,&uStack_5c8);
    uVal_20 = 8;
    do {
      uVal_19 = (uVal_6 & 0xffffffff) / 10;
      if (uVal_20 < (uint)((int)fnPtr_16 - (int)fnPtr_14)) {
        fnPtr_14[uVal_20] = (char)uVal_6 + (char)uVal_19 * -10 + '0';
      }
      uVal_20 = uVal_20 - 1;
      uVal_6 = uVal_19;
    } while (uVal_20 != 0xffffffff);
    lVal_8 = (int64_t)fnPtr_16 - (int64_t)fnPtr_14;
    if (9 < lVal_8) {
      lVal_8 = 9;
    }
    fnPtr_14 = fnPtr_14 + lVal_8;
  }
  *fnPtr_14 = '\0';
  local_7dc = 0;
  func_0x1806a9a10(&local_7dc,local_7d0,local_7cc);
LAB_1806a824c:
  if (local_7b8 != '\0') {
    func_0x1806a9aa0(local_7c0);
  }
  func_0x180673080(local_58 ^ (uint64_t)auStackY_828);
  return;
}

// func_0x1806a82a0
uint64_t func_0x1806a82a0(byte *param_1,uint param_2,uint64_t *param_3,uint64_t param_4)
{
  uint64_t uVal_1;
  byte bFlag_2;
  byte bFlag_3;
  int64_t lVal_4;
  int64_t lVal_5;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 != 0) {
      if ((param_2 & 0xffffff80) == 0) {
        *param_1 = (byte)param_2;
        return 1;
      }
      if ((param_2 & 0xfffff800) == 0) {
        lVal_4 = 1;
        bFlag_2 = 0xc0;
        lVal_5 = lVal_4;
      }
      else if ((param_2 & 0xffff0000) == 0) {
        if (param_2 - 0xd800 < 0x800) {
LAB_1806a8337:
          uVal_1 = func_0x1806a8344(param_3,param_4);
          return uVal_1;
        }
        lVal_4 = 2;
        bFlag_2 = 0xe0;
        lVal_5 = lVal_4;
      }
      else {
        if (((param_2 & 0xffe00000) != 0) || (0x10ffff < param_2)) goto LAB_1806a8337;
        lVal_4 = 3;
        bFlag_2 = 0xf0;
        lVal_5 = lVal_4;
      }
      do {
        bFlag_3 = (byte)param_2;
        param_2 = param_2 >> 6;
        param_1[lVal_4] = bFlag_3 & 0x3f | 0x80;
        lVal_4 = lVal_4 + -1;
      } while (lVal_4 != 0);
      *param_1 = bFlag_2 | (byte)param_2;
      uVal_1 = func_0x1806a8358(lVal_5 + 1,param_3);
      return uVal_1;
    }
    *param_1 = 0;
  }
  *param_3 = 0;
  return 1;
}

// func_0x1806a8344
uint64_t func_0x1806a8344(uint64_t *param_1,int64_t param_2)
{
  *param_1 = 0;
  *(uint8_t *)(param_2 + 0x30) = 1;
  *(uint32_t *)(param_2 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}

// func_0x1806a8358
uint64_t func_0x1806a8358(uint64_t param_1,uint64_t *param_2)
{
  *param_2 = 0;
  return param_1;
}

// func_0x1806a8360
void func_0x1806a8360(uint8_t *param_1,uint64_t param_2,uint64_t param_3,func_ptr_t param_4)
{
  uint8_t uVal_1;
  int iVal_2;
  uint32_t *pU64_3;
  uint8_t *pU64_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint8_t *pU64_7;
  uint8_t *pU64_8;
  uint64_t uVal_9;
  uint8_t *pU64_10;
  uint8_t auStack_468 [32];
  int64_t local_448;
  uint64_t local_438 [62];
  uint64_t local_248 [62];
  uint64_t local_58;
  
  local_58 = DAT_18083cf40 ^ (uint64_t)auStack_468;
  if ((((param_1 == (uint8_t *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (func_ptr_t )0x0)) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0x16;
    func_0x180684970();
  }
  else {
    _guard_check_icall(param_4);
    func_0x1806ab010(local_438,0,0x1f0);
    func_0x1806ab010(local_248,0,0x1f0);
    if (1 < param_2) {
      local_448 = 0;
      pU64_10 = param_1 + (param_2 - 1) * param_3;
LAB_1806a8420:
      while (uVal_9 = (uint64_t)((int64_t)pU64_10 - (int64_t)param_1) / param_3 + 1, 8 < uVal_9) {
        lVal_5 = (uVal_9 >> 1) * param_3;
        pU64_7 = param_1 + lVal_5;
        iVal_2 = (*param_4)(param_1,pU64_7);
        if ((0 < iVal_2) && (pU64_6 = pU64_7, uVal_9 = param_3, param_1 != pU64_7)) {
          do {
            uVal_1 = pU64_6[-lVal_5];
            pU64_6[-lVal_5] = *pU64_6;
            *pU64_6 = uVal_1;
            uVal_9 = uVal_9 - 1;
            pU64_6 = pU64_6 + 1;
          } while (uVal_9 != 0);
        }
        iVal_2 = (*param_4)(param_1,pU64_10);
        if ((0 < iVal_2) && (param_1 != pU64_10)) {
          pU64_6 = pU64_10;
          uVal_9 = param_3;
          do {
            uVal_1 = pU64_6[(int64_t)param_1 - (int64_t)pU64_10];
            pU64_6[(int64_t)param_1 - (int64_t)pU64_10] = *pU64_6;
            *pU64_6 = uVal_1;
            pU64_6 = pU64_6 + 1;
            uVal_9 = uVal_9 - 1;
          } while (uVal_9 != 0);
        }
        iVal_2 = (*param_4)(pU64_7);
        pU64_6 = param_1;
        pU64_8 = pU64_10;
        if ((0 < iVal_2) && (pU64_7 != pU64_10)) {
          pU64_4 = pU64_10;
          uVal_9 = param_3;
          do {
            uVal_1 = pU64_4[(int64_t)pU64_7 - (int64_t)pU64_10];
            pU64_4[(int64_t)pU64_7 - (int64_t)pU64_10] = *pU64_4;
            *pU64_4 = uVal_1;
            pU64_4 = pU64_4 + 1;
            uVal_9 = uVal_9 - 1;
          } while (uVal_9 != 0);
        }
LAB_1806a8590:
        pU64_4 = pU64_7;
        if (pU64_6 < pU64_4) {
          do {
            pU64_6 = pU64_6 + param_3;
            if (pU64_4 <= pU64_6) goto LAB_1806a85b0;
            iVal_2 = (*param_4)(pU64_6);
          } while (iVal_2 < 1);
        }
        else {
LAB_1806a85b0:
          do {
            pU64_6 = pU64_6 + param_3;
            if (pU64_10 < pU64_6) break;
            iVal_2 = (*param_4)(pU64_6);
          } while (iVal_2 < 1);
        }
        do {
          pU64_7 = pU64_8;
          pU64_8 = pU64_7 + -param_3;
          if (pU64_8 <= pU64_4) break;
          iVal_2 = (*param_4)(pU64_8);
        } while (0 < iVal_2);
        if (pU64_6 <= pU64_8) {
          if (pU64_8 != pU64_6) {
            pU64_7 = pU64_8;
            uVal_9 = param_3;
            do {
              uVal_1 = pU64_7[(int64_t)pU64_6 - (int64_t)pU64_8];
              pU64_7[(int64_t)pU64_6 - (int64_t)pU64_8] = *pU64_7;
              *pU64_7 = uVal_1;
              pU64_7 = pU64_7 + 1;
              uVal_9 = uVal_9 - 1;
            } while (uVal_9 != 0);
          }
          pU64_7 = pU64_6;
          if (pU64_4 != pU64_8) {
            pU64_7 = pU64_4;
          }
          goto LAB_1806a8590;
        }
        if (pU64_4 < pU64_7) {
          do {
            pU64_7 = pU64_7 + -param_3;
            if (pU64_7 <= pU64_4) goto LAB_1806a8637;
            iVal_2 = (*param_4)(pU64_7);
          } while (iVal_2 == 0);
        }
        else {
LAB_1806a8637:
          do {
            pU64_7 = pU64_7 + -param_3;
            if (pU64_7 <= param_1) break;
            iVal_2 = (*param_4)(pU64_7);
          } while (iVal_2 == 0);
        }
        if ((int64_t)pU64_7 - (int64_t)param_1 < (int64_t)pU64_10 - (int64_t)pU64_6)
        goto LAB_1806a868d;
        if (param_1 < pU64_7) {
          local_438[local_448] = param_1;
          local_248[local_448] = pU64_7;
          local_448 = local_448 + 1;
        }
        param_1 = pU64_6;
        if (pU64_10 <= pU64_6) goto LAB_1806a84a3;
      }
      for (; pU64_6 = param_1, pU64_7 = param_1, param_1 < pU64_10; pU64_10 = pU64_10 + -param_3) {
        while (pU64_8 = pU64_6, pU64_7 = pU64_7 + param_3, pU64_7 <= pU64_10) {
          iVal_2 = (*param_4)(pU64_7,pU64_8);
          pU64_6 = pU64_7;
          if (iVal_2 < 1) {
            pU64_6 = pU64_8;
          }
        }
        if (pU64_8 != pU64_10) {
          pU64_7 = pU64_10;
          uVal_9 = param_3;
          do {
            uVal_1 = pU64_7[(int64_t)pU64_8 - (int64_t)pU64_10];
            pU64_7[(int64_t)pU64_8 - (int64_t)pU64_10] = *pU64_7;
            *pU64_7 = uVal_1;
            pU64_7 = pU64_7 + 1;
            uVal_9 = uVal_9 - 1;
          } while (uVal_9 != 0);
        }
      }
      goto LAB_1806a84a3;
    }
  }
LAB_1806a86d8:
  func_0x180673080(local_58 ^ (uint64_t)auStack_468);
  return;
LAB_1806a868d:
  if (pU64_6 < pU64_10) {
    local_438[local_448] = pU64_6;
    local_248[local_448] = pU64_10;
    local_448 = local_448 + 1;
  }
  pU64_10 = pU64_7;
  if (pU64_7 <= param_1) {
LAB_1806a84a3:
    local_448 = local_448 + -1;
    if (-1 < local_448) {
      param_1 = (uint8_t *)local_438[local_448];
      pU64_10 = (uint8_t *)local_248[local_448];
      goto LAB_1806a8420;
    }
    goto LAB_1806a86d8;
  }
  goto LAB_1806a8420;
}

// func_0x1806a8700
/* WARNING: Removing unreachable block (ram,0x0001806a899c) */
/* WARNING: Removing unreachable block (ram,0x0001806a8995) */
/* WARNING: Removing unreachable block (ram,0x0001806a898e) */
/* WARNING: Removing unreachable block (ram,0x0001806a8987) */
/* WARNING: Removing unreachable block (ram,0x0001806a8980) */
/* WARNING: Removing unreachable block (ram,0x0001806a8979) */
/* WARNING: Removing unreachable block (ram,0x0001806a8972) */
/* WARNING: Removing unreachable block (ram,0x0001806a896b) */
/* WARNING: Removing unreachable block (ram,0x0001806a8964) */
/* WARNING: Removing unreachable block (ram,0x0001806a895d) */
/* WARNING: Removing unreachable block (ram,0x0001806a8956) */
/* WARNING: Removing unreachable block (ram,0x0001806a894f) */
/* WARNING: Removing unreachable block (ram,0x0001806a8948) */
/* WARNING: Removing unreachable block (ram,0x0001806a8941) */
/* WARNING: Removing unreachable block (ram,0x0001806a893a) */
/* WARNING: Removing unreachable block (ram,0x0001806a87fd) */
/* WARNING: Removing unreachable block (ram,0x0001806a880c) */
/* WARNING: Removing unreachable block (ram,0x0001806a881b) */
/* WARNING: Removing unreachable block (ram,0x0001806a882a) */
/* WARNING: Removing unreachable block (ram,0x0001806a8839) */
/* WARNING: Removing unreachable block (ram,0x0001806a8845) */
/* WARNING: Removing unreachable block (ram,0x0001806a8851) */
/* WARNING: Removing unreachable block (ram,0x0001806a885d) */
/* WARNING: Removing unreachable block (ram,0x0001806a8869) */
/* WARNING: Removing unreachable block (ram,0x0001806a8875) */
/* WARNING: Removing unreachable block (ram,0x0001806a8881) */
/* WARNING: Removing unreachable block (ram,0x0001806a888d) */
/* WARNING: Removing unreachable block (ram,0x0001806a8899) */
/* WARNING: Removing unreachable block (ram,0x0001806a88a5) */
/* WARNING: Removing unreachable block (ram,0x0001806a88b1) */
/* WARNING: Removing unreachable block (ram,0x0001806a899c) */
/* WARNING: Removing unreachable block (ram,0x0001806a8995) */
/* WARNING: Removing unreachable block (ram,0x0001806a898e) */
/* WARNING: Removing unreachable block (ram,0x0001806a8987) */
/* WARNING: Removing unreachable block (ram,0x0001806a8980) */
/* WARNING: Removing unreachable block (ram,0x0001806a8979) */
/* WARNING: Removing unreachable block (ram,0x0001806a8972) */
/* WARNING: Removing unreachable block (ram,0x0001806a896b) */
/* WARNING: Removing unreachable block (ram,0x0001806a8964) */
/* WARNING: Removing unreachable block (ram,0x0001806a895d) */
/* WARNING: Removing unreachable block (ram,0x0001806a8956) */
/* WARNING: Removing unreachable block (ram,0x0001806a894f) */
/* WARNING: Removing unreachable block (ram,0x0001806a8948) */
/* WARNING: Removing unreachable block (ram,0x0001806a8941) */
/* WARNING: Removing unreachable block (ram,0x0001806a893a) */
/* WARNING: Removing unreachable block (ram,0x0001806a87fd) */
/* WARNING: Removing unreachable block (ram,0x0001806a880c) */
/* WARNING: Removing unreachable block (ram,0x0001806a881b) */
/* WARNING: Removing unreachable block (ram,0x0001806a882a) */
/* WARNING: Removing unreachable block (ram,0x0001806a8839) */
/* WARNING: Removing unreachable block (ram,0x0001806a8845) */
/* WARNING: Removing unreachable block (ram,0x0001806a8851) */
/* WARNING: Removing unreachable block (ram,0x0001806a885d) */
/* WARNING: Removing unreachable block (ram,0x0001806a8869) */
/* WARNING: Removing unreachable block (ram,0x0001806a8875) */
/* WARNING: Removing unreachable block (ram,0x0001806a8881) */
/* WARNING: Removing unreachable block (ram,0x0001806a888d) */
/* WARNING: Removing unreachable block (ram,0x0001806a8899) */
/* WARNING: Removing unreachable block (ram,0x0001806a88a5) */
/* WARNING: Removing unreachable block (ram,0x0001806a88b1) */
byte * func_0x1806a8700(byte *param_1,byte *param_2)
{
  byte bFlag_1;
  uint uVal_2;
  ushort uVal_3;
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
  byte *pU8_19;
  uint8_t (*pArr16_20)[16];
  uint64_t uVal_21;
  bool bFlag_22;
  uint8_t auArr_23 [16];
  uint8_t auArr_24 [16];
  uint8_t auArr_25 [16];
  uint8_t auArr_27 [16];
  uint8_t auArr_28 [16];
  uint8_t auArr_29 [16];
  uint8_t auArr_30 [16];
  uint8_t auArr_31 [16];
  uint8_t auArr_32 [16];
  uint8_t auArr_33 [16];
  uint8_t auArr_34 [16];
  uint8_t auArr_35 [16];
  uint8_t auStack_38 [16];
  uint8_t auStack_28 [16];
  uint64_t uStack_18;
  int64_t lVal_26;
  
  uVal_21 = (uint64_t)((uint)param_2 & 0xf);
  pArr16_20 = (uint8_t (*)[16])(param_2 + -uVal_21);
  auArr_34 = *pArr16_20;
  switch(uVal_21) {
  case 1:
    auArr_34 = auArr_34 >> 8;
    break;
  case 2:
    auArr_34 = auArr_34 >> 0x10;
    break;
  case 3:
    auArr_34 = auArr_34 >> 0x18;
    break;
  case 4:
    auArr_34 = auArr_34 >> 0x20;
    break;
  case 5:
    auArr_34 = auArr_34 >> 0x28;
    break;
  case 6:
    auArr_34 = auArr_34 >> 0x30;
    break;
  case 7:
    auArr_34 = auArr_34 >> 0x38;
    break;
  case 8:
    auArr_34 = auArr_34 >> 0x40;
    break;
  case 9:
    auArr_34 = auArr_34 >> 0x48;
    break;
  case 10:
    auArr_34 = auArr_34 >> 0x50;
    break;
  case 0xb:
    auArr_34 = auArr_34 >> 0x58;
    break;
  case 0xc:
    auArr_34 = auArr_34 >> 0x60;
    break;
  case 0xd:
    auArr_34 = auArr_34 >> 0x68;
    break;
  case 0xe:
    auArr_34 = auArr_34 >> 0x70;
    break;
  case 0xf:
    auArr_34 = auArr_34 >> 0x78;
  }
  auArr_23[0] = -(auArr_34[0] == '\0');
  auArr_23[1] = -(auArr_34[1] == '\0');
  auArr_23[2] = -(auArr_34[2] == '\0');
  auArr_23[3] = -(auArr_34[3] == '\0');
  auArr_23[4] = -(auArr_34[4] == '\0');
  auArr_23[5] = -(auArr_34[5] == '\0');
  auArr_23[6] = -(auArr_34[6] == '\0');
  auArr_23[7] = -(auArr_34[7] == '\0');
  auArr_23[8] = -(auArr_34[8] == '\0');
  auArr_23[9] = -(auArr_34[9] == '\0');
  auArr_23[10] = -(auArr_34[10] == '\0');
  auArr_23[11] = -(auArr_34[11] == '\0');
  auArr_23[12] = -(auArr_34[12] == '\0');
  auArr_23[13] = -(auArr_34[13] == '\0');
  auArr_23[14] = -(auArr_34[14] == '\0');
  auArr_23[15] = -(auArr_34[15] == '\0');
  uVal_3 = (ushort)(SUB161(auArr_23 >> 7,0) & 1) | (ushort)(SUB161(auArr_23 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auArr_23 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auArr_23 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auArr_23 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auArr_23 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auArr_23 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auArr_23 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auArr_23 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auArr_23 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auArr_23 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auArr_23 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auArr_23 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auArr_23 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auArr_23 >> 0x77,0) & 1) << 0xe | (ushort)(auArr_23[15] >> 7) << 0xf;
  if (uVal_3 == 0) {
    if (uVal_21 == 0) {
      if ((*pArr16_20)[1] == '\0') goto LAB_1806a89a9;
      goto LAB_1806a8ac0;
    }
  }
  else {
    uVal_2 = 0;
    if (uVal_3 != 0) {
      for (; (uVal_3 >> uVal_2 & 1) == 0; uVal_2 = uVal_2 + 1) {
      }
    }
    if (uVal_21 == 0) {
      bFlag_22 = true;
    }
    else {
      bFlag_22 = (uint64_t)uVal_2 < 0x10 - uVal_21;
    }
    if (-uVal_2 + 0xf < 0x10) {
      lVal_26 = auArr_34._8_8_;
      switch(-uVal_2) {
      case 0:
        auArr_34 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auArr_27._0_8_ = auArr_34._0_8_ << 8;
        auArr_27._8_8_ = lVal_26 << 8 | auArr_34._0_8_ >> 0x38;
        auArr_34 = auArr_27 >> 8;
        break;
      case 0xfffffff2:
        auArr_28._0_8_ = auArr_34._0_8_ << 0x10;
        auArr_28._8_8_ = lVal_26 << 0x10 | auArr_34._0_8_ >> 0x30;
        auArr_34 = auArr_28 >> 0x10;
        break;
      case 0xfffffff3:
        auArr_29._0_8_ = auArr_34._0_8_ << 0x18;
        auArr_29._8_8_ = lVal_26 << 0x18 | auArr_34._0_8_ >> 0x28;
        auArr_34 = auArr_29 >> 0x18;
        break;
      case 0xfffffff4:
        auArr_30._0_8_ = auArr_34._0_8_ << 0x20;
        auArr_30._8_8_ = lVal_26 << 0x20 | auArr_34._0_8_ >> 0x20;
        auArr_34 = auArr_30 >> 0x20;
        break;
      case 0xfffffff5:
        auArr_31._0_8_ = auArr_34._0_8_ << 0x28;
        auArr_31._8_8_ = lVal_26 << 0x28 | auArr_34._0_8_ >> 0x18;
        auArr_34 = auArr_31 >> 0x28;
        break;
      case 0xfffffff6:
        auArr_32._0_8_ = auArr_34._0_8_ << 0x30;
        auArr_32._8_8_ = lVal_26 << 0x30 | auArr_34._0_8_ >> 0x10;
        auArr_34 = auArr_32 >> 0x30;
        break;
      case 0xfffffff7:
        auArr_33._0_8_ = auArr_34._0_8_ << 0x38;
        auArr_33._8_8_ = lVal_26 << 0x38 | auArr_34._0_8_ >> 8;
        auArr_34 = auArr_33 >> 0x38;
        break;
      case 0xfffffff8:
        auArr_34._8_8_ = 0;
        break;
      case 0xfffffff9:
        auArr_4._8_8_ = 0;
        auArr_4._0_8_ = auArr_34._0_8_ << 8;
        auArr_34 = (auArr_4 << 0x40) >> 0x48;
        break;
      case 0xfffffffa:
        auArr_5._8_8_ = 0;
        auArr_5._0_8_ = auArr_34._0_8_ << 0x10;
        auArr_34 = (auArr_5 << 0x40) >> 0x50;
        break;
      case 0xfffffffb:
        auArr_6._8_8_ = 0;
        auArr_6._0_8_ = auArr_34._0_8_ << 0x18;
        auArr_34 = (auArr_6 << 0x40) >> 0x58;
        break;
      case 0xfffffffc:
        auArr_7._8_8_ = 0;
        auArr_7._0_8_ = auArr_34._0_8_ << 0x20;
        auArr_34 = (auArr_7 << 0x40) >> 0x60;
        break;
      case 0xfffffffd:
        auArr_8._8_8_ = 0;
        auArr_8._0_8_ = auArr_34._0_8_ << 0x28;
        auArr_34 = (auArr_8 << 0x40) >> 0x68;
        break;
      case 0xfffffffe:
        auArr_9._8_8_ = 0;
        auArr_9._0_8_ = auArr_34._0_8_ << 0x30;
        auArr_34 = (auArr_9 << 0x40) >> 0x70;
        break;
      case 0xffffffff:
        auArr_10._8_8_ = 0;
        auArr_10._0_8_ = auArr_34._0_8_ << 0x38;
        auArr_34 = (auArr_10 << 0x40) >> 0x78;
      }
    }
    if (bFlag_22) goto LAB_1806a89a9;
  }
  auArr_35 = pArr16_20[1];
  auArr_24[0] = -(auArr_35[0] == '\0');
  auArr_24[1] = -(auArr_35[1] == '\0');
  auArr_24[2] = -(auArr_35[2] == '\0');
  auArr_24[3] = -(auArr_35[3] == '\0');
  auArr_24[4] = -(auArr_35[4] == '\0');
  auArr_24[5] = -(auArr_35[5] == '\0');
  auArr_24[6] = -(auArr_35[6] == '\0');
  lVal_26 = auArr_35._8_8_;
  auArr_24[7] = -(auArr_35[7] == '\0');
  auArr_24[8] = -(auArr_35[8] == '\0');
  auArr_24[9] = -(auArr_35[9] == '\0');
  auArr_24[10] = -(auArr_35[10] == '\0');
  auArr_24[11] = -(auArr_35[11] == '\0');
  auArr_24[12] = -(auArr_35[12] == '\0');
  auArr_24[13] = -(auArr_35[13] == '\0');
  auArr_24[14] = -(auArr_35[14] == '\0');
  auArr_24[15] = -(auArr_35[15] == '\0');
  uVal_3 = (ushort)(SUB161(auArr_24 >> 7,0) & 1) | (ushort)(SUB161(auArr_24 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auArr_24 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auArr_24 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auArr_24 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auArr_24 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auArr_24 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auArr_24 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auArr_24 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auArr_24 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auArr_24 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auArr_24 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auArr_24 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auArr_24 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auArr_24 >> 0x77,0) & 1) << 0xe | (ushort)(auArr_24[15] >> 7) << 0xf;
  if (uVal_3 != 0) {
    uVal_2 = 0;
    if (uVal_3 != 0) {
      for (; (uVal_3 >> uVal_2 & 1) == 0; uVal_2 = uVal_2 + 1) {
      }
    }
    if ((uVal_2 - uVal_21) + 0x10 < 0x11) {
      if (-uVal_2 + 0xf < 0x10) {
        uVal_21 = auArr_35._0_8_;
        switch(-uVal_2) {
        case 0:
          auArr_35 = ZEXT816(0);
          break;
        case 0xfffffff1:
          auArr_35._0_8_ = uVal_21 << 8;
          auArr_35._8_8_ = lVal_26 << 8 | uVal_21 >> 0x38;
          break;
        case 0xfffffff2:
          auArr_35._0_8_ = uVal_21 << 0x10;
          auArr_35._8_8_ = lVal_26 << 0x10 | uVal_21 >> 0x30;
          break;
        case 0xfffffff3:
          auArr_35._0_8_ = uVal_21 << 0x18;
          auArr_35._8_8_ = lVal_26 << 0x18 | uVal_21 >> 0x28;
          break;
        case 0xfffffff4:
          auArr_35._0_8_ = uVal_21 << 0x20;
          auArr_35._8_8_ = lVal_26 << 0x20 | uVal_21 >> 0x20;
          break;
        case 0xfffffff5:
          auArr_35._0_8_ = uVal_21 << 0x28;
          auArr_35._8_8_ = lVal_26 << 0x28 | uVal_21 >> 0x18;
          break;
        case 0xfffffff6:
          auArr_35._0_8_ = uVal_21 << 0x30;
          auArr_35._8_8_ = lVal_26 << 0x30 | uVal_21 >> 0x10;
          break;
        case 0xfffffff7:
          auArr_35._0_8_ = uVal_21 << 0x38;
          auArr_35._8_8_ = lVal_26 << 0x38 | uVal_21 >> 8;
          break;
        case 0xfffffff8:
          auArr_18._8_8_ = 0;
          auArr_18._0_8_ = uVal_21;
          auArr_35 = auArr_18 << 0x40;
          break;
        case 0xfffffff9:
          auArr_11._8_8_ = 0;
          auArr_11._0_8_ = uVal_21 << 8;
          auArr_35 = auArr_11 << 0x40;
          break;
        case 0xfffffffa:
          auArr_12._8_8_ = 0;
          auArr_12._0_8_ = uVal_21 << 0x10;
          auArr_35 = auArr_12 << 0x40;
          break;
        case 0xfffffffb:
          auArr_13._8_8_ = 0;
          auArr_13._0_8_ = uVal_21 << 0x18;
          auArr_35 = auArr_13 << 0x40;
          break;
        case 0xfffffffc:
          auArr_14._8_8_ = 0;
          auArr_14._0_8_ = uVal_21 << 0x20;
          auArr_35 = auArr_14 << 0x40;
          break;
        case 0xfffffffd:
          auArr_15._8_8_ = 0;
          auArr_15._0_8_ = uVal_21 << 0x28;
          auArr_35 = auArr_15 << 0x40;
          break;
        case 0xfffffffe:
          auArr_16._8_8_ = 0;
          auArr_16._0_8_ = uVal_21 << 0x30;
          auArr_35 = auArr_16 << 0x40;
          break;
        case 0xffffffff:
          auArr_17._8_8_ = 0;
          auArr_17._0_8_ = uVal_21 << 0x38;
          auArr_35 = auArr_17 << 0x40;
        }
      }
      auArr_34 = auArr_34 | auArr_35;
LAB_1806a89a9:
      bFlag_1 = *param_1;
      while( true ) {
        if (bFlag_1 == 0) {
          return (byte *)0x0;
        }
        auArr_25[0] = -(bFlag_1 == auArr_34[0]);
        auArr_25[1] = -(bFlag_1 == auArr_34[1]);
        auArr_25[2] = -(bFlag_1 == auArr_34[2]);
        auArr_25[3] = -(bFlag_1 == auArr_34[3]);
        auArr_25[4] = -(bFlag_1 == auArr_34[4]);
        auArr_25[5] = -(bFlag_1 == auArr_34[5]);
        auArr_25[6] = -(bFlag_1 == auArr_34[6]);
        auArr_25[7] = -(bFlag_1 == auArr_34[7]);
        auArr_25[8] = -(bFlag_1 == auArr_34[8]);
        auArr_25[9] = -(bFlag_1 == auArr_34[9]);
        auArr_25[10] = -(bFlag_1 == auArr_34[10]);
        auArr_25[11] = -(bFlag_1 == auArr_34[11]);
        auArr_25[12] = -(bFlag_1 == auArr_34[12]);
        auArr_25[13] = -(bFlag_1 == auArr_34[13]);
        auArr_25[14] = -(bFlag_1 == auArr_34[14]);
        auArr_25[15] = -(bFlag_1 == auArr_34[15]);
        if ((ushort)((ushort)(SUB161(auArr_25 >> 7,0) & 1) |
                     (ushort)(SUB161(auArr_25 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auArr_25 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auArr_25 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auArr_25 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auArr_25 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auArr_25 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auArr_25 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auArr_25 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auArr_25 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auArr_25 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auArr_25 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auArr_25 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auArr_25 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auArr_25 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auArr_25[15] >> 7) << 0xf) != 0) break;
        bFlag_1 = param_1[1];
        param_1 = param_1 + 1;
      }
      return param_1;
    }
  }
LAB_1806a8ac0:
  uStack_18 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  bFlag_1 = *param_2;
  auStack_38 = ZEXT816(0);
  auStack_28 = ZEXT816(0);
  while (bFlag_1 != 0) {
    auStack_38[(int64_t)(int)(uint)bFlag_1 >> 3] =
         auStack_38[(int64_t)(int)(uint)bFlag_1 >> 3] | '\x01' << (bFlag_1 & 7);
    pU8_19 = param_2 + 1;
    param_2 = param_2 + 1;
    bFlag_1 = *pU8_19;
  }
  bFlag_1 = *param_1;
  while( true ) {
    if (bFlag_1 == 0) {
      pU8_19 = (byte *)func_0x180673080(uStack_18 ^ (uint64_t)auStack_38);
      return pU8_19;
    }
    if (((byte)auStack_38[bFlag_1 >> 3] >> (bFlag_1 & 7) & 1) != 0) break;
    bFlag_1 = param_1[1];
    param_1 = param_1 + 1;
  }
  pU8_19 = (byte *)func_0x180673080(uStack_18 ^ (uint64_t)auStack_38);
  return pU8_19;
}

// func_0x1806a8b5c
byte * func_0x1806a8b5c(byte *param_1,byte *param_2)
{
  uint32_t *pU64_1;
  byte *pU8_2;
  int64_t local_28 [2];
  int64_t local_18;
  char local_10;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x16;
    func_0x180684970();
  }
  else if (param_1 < param_2) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(__crt_locale_pointers *)0x0);
    pU8_2 = param_2 + -1;
    if (*(int *)(local_18 + 8) != 0) {
      do {
        pU8_2 = pU8_2 + -1;
        if (pU8_2 < param_1) break;
      } while ((*(byte *)((uint64_t)*pU8_2 + 0x19 + local_18) & 4) != 0);
      pU8_2 = param_2 + (-1 - (uint64_t)((int)param_2 - (int)pU8_2 & 1));
    }
    if (local_10 == '\0') {
      return pU8_2;
    }
    *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
    return pU8_2;
  }
  return (byte *)0x0;
}

// _msize_base
/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
uint64_t _msize_base(int64_t param_1)
{
  uint32_t *pU64_1;
  uint64_t uVal_2;
  
  if (param_1 == 0) {
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0x16;
    func_0x180684970();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0001806a8c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVal_2 = HeapSize(DAT_180842c78,0,param_1);
  return uVal_2;
}

// func_0x1806a8c48
uint16_t func_0x1806a8c48(uint16_t param_1)
{
  int iVal_1;
  uint16_t local_res8 [4];
  uint32_t local_res10 [6];
  
  local_res8[0] = param_1;
  iVal_1 = __dcrt_lowio_ensure_console_output_initialized();
  if (iVal_1 != 0) {
    local_res10[0] = 0;
    iVal_1 = __dcrt_write_console(local_res8,1,local_res10);
    if (iVal_1 != 0) {
      return local_res8[0];
    }
  }
  return 0xffff;
}

// func_0x1806a8c90
ushort * func_0x1806a8c90(ushort *param_1,ushort param_2)
{
  uint uVal_1;
  ushort *pU64_2;
  uint8_t auArr_3 [16];
  uint8_t in_XMM1 [16];
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  ushort uVal_6;
  ushort uVal_7;
  
  auArr_4 = pshuflw(in_XMM1,ZEXT416((uint)param_2),0);
  while( true ) {
    for (; ((uint)param_1 & 0xfff) < 0xff1; param_1 = param_1 + 8) {
      auArr_5._0_2_ = -(ushort)(*param_1 == 0);
      auArr_5._2_2_ = -(ushort)(param_1[1] == 0);
      auArr_5._4_2_ = -(ushort)(param_1[2] == 0);
      auArr_5._6_2_ = -(ushort)(param_1[3] == 0);
      auArr_5._8_2_ = -(ushort)(param_1[4] == 0);
      auArr_5._10_2_ = -(ushort)(param_1[5] == 0);
      auArr_5._12_2_ = -(ushort)(param_1[6] == 0);
      auArr_5._14_2_ = -(ushort)(param_1[7] == 0);
      uVal_6 = auArr_4._0_2_;
      auArr_3._0_2_ = -(ushort)(*param_1 == uVal_6);
      uVal_7 = auArr_4._2_2_;
      auArr_3._2_2_ = -(ushort)(param_1[1] == uVal_7);
      auArr_3._4_2_ = -(ushort)(param_1[2] == uVal_6);
      auArr_3._6_2_ = -(ushort)(param_1[3] == uVal_7);
      auArr_3._8_2_ = -(ushort)(param_1[4] == uVal_6);
      auArr_3._10_2_ = -(ushort)(param_1[5] == uVal_7);
      auArr_3._12_2_ = -(ushort)(param_1[6] == uVal_6);
      auArr_3._14_2_ = -(ushort)(param_1[7] == uVal_7);
      auArr_5 = auArr_5 | auArr_3;
      uVal_6 = (ushort)(SUB161(auArr_5 >> 7,0) & 1) | (ushort)(SUB161(auArr_5 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auArr_5 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auArr_5[15] >> 7) << 0xf
      ;
      if (uVal_6 != 0) {
        uVal_1 = 0;
        if (uVal_6 != 0) {
          for (; (uVal_6 >> uVal_1 & 1) == 0; uVal_1 = uVal_1 + 1) {
          }
        }
        pU64_2 = (ushort *)0x0;
        if ((uint)*(ushort *)((uint64_t)uVal_1 + (int64_t)param_1) == (uint)param_2) {
          pU64_2 = (ushort *)((uint64_t)uVal_1 + (int64_t)param_1);
        }
        return pU64_2;
      }
    }
    if (*param_1 == param_2) {
      return param_1;
    }
    if (*param_1 == 0) break;
    param_1 = param_1 + 1;
  }
  return (ushort *)0x0;
}

// func_0x1806a8d18
void func_0x1806a8d18(uint64_t param_1,uint32_t param_2)
{
  func_0x1806a8dc4(0,param_1,param_2,1,0,0);
  return;
}

// func_0x1806a8d40
void func_0x1806a8d40(uint param_1)
{
  uint32_t *pU64_1;
  uint8_t auStack_38 [32];
  WCHAR local_18;
  uint32_t local_16;
  uint16_t local_12;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  if (param_1 < 0x1b) {
    if (param_1 != 0) {
      local_18 = (short)param_1 + L'@';
      local_16 = 0x5c003a;
      local_12 = 0;
      GetDriveTypeW(&local_18);
    }
  }
  else {
    pU64_1 = (uint32_t *)func_0x180682400();
    *pU64_1 = 0xf;
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = 0xd;
    func_0x180684970();
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  return;
}

// func_0x1806a8dc4
void func_0x1806a8dc4(int param_1,uint16_t *param_2,int param_3)
{
  int iVal_1;
  uint32_t *pU64_2;
  int64_t lVal_3;
  short sz_4;
  uint8_t auStack_98 [32];
  short *local_78;
  uint16_t *local_70;
  int64_t local_68;
  uint16_t *local_60;
  int64_t local_58;
  uint64_t local_50;
  char local_48;
  short local_40;
  uint16_t uStack_3e;
  uint16_t uStack_3c;
  uint16_t local_3a;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  lVal_3 = (int64_t)param_3;
  sz_4 = (short)param_1;
  if (param_3 < 0) {
LAB_1806a8def:
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
  }
  else {
    if (param_1 == 0) {
      iVal_1 = _getdrive();
      sz_4 = (short)iVal_1;
      if (iVal_1 == 0) {
        local_40 = 0x2e;
        uStack_3e = 0;
      }
      else {
LAB_1806a8e36:
        local_40 = sz_4 + 0x40;
        uStack_3e = 0x3a;
        uStack_3c = 0x2e;
        local_3a = 0;
      }
      if (param_2 == (uint16_t *)0x0) {
        local_70 = (uint16_t *)0x0;
        local_68 = 0;
        local_50 = 0;
        local_60 = (uint16_t *)_malloc_base(lVal_3 * 2);
        local_48 = local_60 != (uint16_t *)0x0;
        local_58 = lVal_3;
        if (!(bool)local_48) {
          local_58 = 0;
        }
        local_78 = &local_40;
        iVal_1 = func_0x18069f1e0(&local_70,&local_78);
        if (iVal_1 == 0) {
          func_0x18069f088(&local_70);
          if (local_48 != '\0') {
            thunk_FUN_180695dd0(local_60);
          }
        }
        else if (local_48 != '\0') {
          thunk_FUN_180695dd0(local_60);
        }
        goto LAB_1806a8f19;
      }
      if (0 < param_3) {
        *param_2 = 0;
        local_78 = &local_40;
        local_50 = 0;
        local_48 = '\0';
        local_70 = param_2;
        local_68 = lVal_3;
        local_60 = param_2;
        local_58 = lVal_3;
        func_0x18069f16c(&local_70,&local_78);
        goto LAB_1806a8f19;
      }
      goto LAB_1806a8def;
    }
    iVal_1 = func_0x1806a8d40();
    if (iVal_1 != 0) goto LAB_1806a8e36;
    pU64_2 = (uint32_t *)func_0x180682400();
    *pU64_2 = 0xf;
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0xd;
  }
  func_0x180684970();
LAB_1806a8f19:
  func_0x180673080(local_38 ^ (uint64_t)auStack_98);
  return;
}

// func_0x1806a8f30
void func_0x1806a8f30(void)
{
  func_0x1806a8f50();
  return;
}

// func_0x1806a8f50
uint32_t func_0x1806a8f50(uint param_1,short *param_2,uint64_t param_3,uint param_4,byte param_5)
{
  uint64_t uVal_1;
  short *pSize_2;
  short sz_3;
  uint32_t *pU64_4;
  uint64_t uVal_5;
  uint32_t uVal_6;
  uint64_t uVal_7;
  short *pSize_8;
  short *pSize_9;
  
  uVal_5 = (uint64_t)param_1;
  if ((param_2 != (short *)0x0) && (param_3 != 0)) {
    *param_2 = 0;
    if (param_3 <= (uint64_t)param_5 + 1) {
      pU64_4 = (uint32_t *)func_0x1806823dc();
      uVal_6 = 0x22;
      goto LAB_1806a8f6a;
    }
    if (param_4 - 2 < 0x23) {
      pSize_8 = param_2;
      if (param_5 != 0) {
        *param_2 = 0x2d;
        pSize_8 = param_2 + 1;
        uVal_5 = (uint64_t)-param_1;
      }
      uVal_7 = (uint64_t)(param_5 != 0);
      pSize_2 = pSize_8;
      do {
        pSize_9 = pSize_2;
        uVal_1 = uVal_5 / param_4;
        uVal_5 = uVal_5 % (uint64_t)param_4;
        sz_3 = 0x57;
        if ((uint)uVal_5 < 10) {
          sz_3 = 0x30;
        }
        uVal_7 = uVal_7 + 1;
        *pSize_9 = sz_3 + (short)uVal_5;
      } while (((int)uVal_1 != 0) && (uVal_5 = uVal_1, pSize_2 = pSize_9 + 1, uVal_7 < param_3));
      if (uVal_7 < param_3) {
        pSize_9[1] = 0;
        do {
          sz_3 = *pSize_9;
          *pSize_9 = *pSize_8;
          pSize_9 = pSize_9 + -1;
          *pSize_8 = sz_3;
          pSize_8 = pSize_8 + 1;
        } while (pSize_8 < pSize_9);
        uVal_6 = 0;
      }
      else {
        *param_2 = 0;
        pU64_4 = (uint32_t *)func_0x1806823dc();
        *pU64_4 = 0x22;
        func_0x180684970();
        uVal_6 = 0x22;
      }
      return uVal_6;
    }
  }
  pU64_4 = (uint32_t *)func_0x1806823dc();
  uVal_6 = 0x16;
LAB_1806a8f6a:
  *pU64_4 = uVal_6;
  func_0x180684970();
  return uVal_6;
}

// func_0x1806a9090
int func_0x1806a9090(ushort *param_1,ushort *param_2)
{
  ushort uVal_1;
  int iVal_2;
  int64_t lVal_3;
  
  uVal_1 = *param_2;
  iVal_2 = (uint)*param_1 - (uint)uVal_1;
  if (iVal_2 == 0) {
    lVal_3 = (int64_t)param_1 - (int64_t)param_2;
    do {
      if (uVal_1 == 0) break;
      uVal_1 = param_2[1];
      param_2 = param_2 + 1;
      iVal_2 = (uint)*(ushort *)(lVal_3 + (int64_t)param_2) - (uint)uVal_1;
    } while (iVal_2 == 0);
  }
  return (iVal_2 >> 0x1f) - (-iVal_2 >> 0x1f);
}

// func_0x1806a90d0
uint64_t func_0x1806a90d0(uint param_1)
{
  uint8_t auArr_1 [16];
  
  auArr_1 = vmovd_avx(param_1 | 0x400000);
  return auArr_1._0_8_;
}

// API-MS-WIN-CORE-STRING-L1-1-0.DLL::GetStringTypeW
BOOL __stdcall GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)
{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806a90dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeW(dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}

// func_0x1806a90f0
uint64_t func_0x1806a90f0(uint *param_1,uint param_2)
{
  uint uVal_1;
  uint uVal_2;
  
  if ((param_2 & 0x1f) == 0) {
    *param_1 = 0;
    return 0;
  }
  uVal_1 = func_0x1806a91c0();
  uVal_2 = func_0x1806a94b0(param_2 & 0x1f);
  *param_1 = uVal_2 & uVal_1;
  return 0;
}

// func_0x1806a9140
bool func_0x1806a9140(uint *param_1,uint param_2)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  
  if ((param_2 & 0x1f) != 0) {
    uVal_1 = func_0x1806a94b0(param_2 & 0x1f);
    uVal_2 = func_0x1806a94b0(0x3f);
    uVal_4 = *param_1;
    uVal_3 = func_0x1806a91c0();
    uVal_1 = uVal_3 & ~uVal_1 | uVal_2 & uVal_4 & uVal_1;
    func_0x1806a9220(uVal_1);
    uVal_1 = uVal_1 & 0x1f;
    uVal_4 = func_0x1806aa330(uVal_1);
    return uVal_4 != uVal_1;
  }
  return false;
}

// func_0x1806a91c0
uint func_0x1806a91c0(void)
{
  uint uVal_1;
  
  uVal_1 = (((MXCSR & 0x3f) >> 2 & 8 | MXCSR & 0x10) >> 2 | MXCSR & 8) >> 1 |
          ((MXCSR & 2) << 3 | MXCSR & 4) * 2 | (MXCSR & 1) << 4;
  return uVal_1 << 0x18 | uVal_1;
}

// func_0x1806a9220
void func_0x1806a9220(uint param_1)
{
  uint uVal_1;
  bool bFlag_2;
  
  param_1 = param_1 >> 0x18;
  bFlag_2 = ((param_1 & 0x3f) >> 4 & 1) != 0;
  uVal_1 = (uint)bFlag_2;
  MXCSR = MXCSR & 0xffffffc0 |
          -(uint)((param_1 & 1) != 0) & 0x20 | -(uint)((param_1 & 2) != 0) & 0x10 |
          -(uint)((param_1 & 4) != 0) & 8 | -(uint)((param_1 & 8) != 0) & 4 | uVal_1 |
          (uVal_1 - bFlag_2) - (uint)((param_1 & 0x20) != 0) & 2;
  return;
}

// func_0x1806a92a0
uint func_0x1806a92a0(void)
{
  ushort uVal_1;
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  
  uVal_1 = (ushort)MXCSR & 0x8040;
  if (uVal_1 == 0x8000) {
    uVal_4 = 0xc00;
  }
  else if (uVal_1 == 0x40) {
    uVal_4 = 0x800;
  }
  else {
    uVal_4 = 0;
    if (uVal_1 == 0x8040) {
      uVal_4 = 0x400;
    }
  }
  uVal_2 = MXCSR & 0x6000;
  if (uVal_2 == 0) {
    uVal_3 = 0;
  }
  else if (uVal_2 == 0x2000) {
    uVal_3 = 0x100;
  }
  else if (uVal_2 == 0x4000) {
    uVal_3 = 0x200;
  }
  else {
    uVal_3 = 0x300;
    if (uVal_2 != 0x6000) {
      uVal_3 = 0;
    }
  }
  uVal_4 = ((((MXCSR >> 2 & 0x400 | MXCSR & 0x800) >> 2 | MXCSR & 0x400) >> 2 | MXCSR & 0x200) >> 3 |
          MXCSR & 0x180) >> 3 | uVal_4 | uVal_3;
  return (uVal_3 | uVal_4 * 4) << 0x16 | uVal_4;
}

// func_0x1806a9380
void func_0x1806a9380(uint param_1)
{
  ushort uVal_1;
  uint uVal_2;
  ushort uVal_3;
  uint uVal_4;
  ushort uVal_5;
  ushort uVal_6;
  ushort uVal_7;
  ushort uVal_8;
  ushort uVal_9;
  ushort uVal_10;
  
  uVal_4 = param_1 >> 0x18;
  uVal_2 = param_1 >> 0x16 & 0x300;
  param_1 = param_1 & 0xc00;
  uVal_8 = 0;
  uVal_6 = 0x400;
  uVal_10 = 0x800;
  if (param_1 == 0x400) {
    uVal_8 = 0x8040;
  }
  else if (param_1 == 0x800) {
    uVal_8 = 0x40;
  }
  else if (param_1 == 0xc00) {
    uVal_8 = 0x8000;
  }
  uVal_5 = 0x100;
  uVal_9 = 0x200;
  if (uVal_2 != 0) {
    if (uVal_2 == 0x100) {
      uVal_7 = 0x2000;
      goto LAB_1806a941f;
    }
    if (uVal_2 == 0x200) {
      uVal_7 = 0x4000;
      goto LAB_1806a941f;
    }
    if (uVal_2 == 0x300) {
      uVal_7 = 0x6000;
      goto LAB_1806a941f;
    }
  }
  uVal_7 = 0;
LAB_1806a941f:
  if ((uVal_4 & 1) == 0) {
    uVal_3 = 0;
  }
  else {
    uVal_3 = 0x1000;
  }
  if ((uVal_4 & 2) == 0) {
    uVal_10 = 0;
  }
  if ((uVal_4 & 4) == 0) {
    uVal_6 = 0;
  }
  if ((uVal_4 & 8) == 0) {
    uVal_9 = 0;
  }
  if ((uVal_4 & 0x10) == 0) {
    uVal_1 = 0;
  }
  else {
    uVal_1 = 0x80;
  }
  if ((uVal_4 & 0x20) == 0) {
    uVal_5 = 0;
  }
  MXCSR = MXCSR & 0xffff003f |
          (uint)(ushort)(uVal_7 | uVal_3 | uVal_10 | uVal_6 | uVal_9 | uVal_1 | uVal_5 | uVal_8);
  return;
}

// func_0x1806a94b0
uint func_0x1806a94b0(uint param_1)
{
  return (param_1 & 0x3f) << 0x18 | param_1;
}

// func_0x1806a94c0
uint func_0x1806a94c0(uint param_1)
{
  return param_1 & 0x300;
}

// func_0x1806a94d0
int func_0x1806a94d0(uint *param_1)
{
  int iVal_1;
  int iVal_2;
  uint uVal_3;
  uint uVal_4;
  
  iVal_2 = 1;
  uVal_4 = *param_1 & 0x80000000;
  uVal_3 = *param_1 & 0x7fffff;
  if (uVal_3 != 0) {
    iVal_1 = 0x1f;
    if (uVal_3 != 0) {
      for (; uVal_3 >> iVal_1 == 0; iVal_1 = iVal_1 + -1) {
      }
    }
    if (uVal_3 == 0) {
      *param_1 = uVal_4;
      return -0x16;
    }
    iVal_2 = iVal_1 + -0x16;
    uVal_3 = uVal_3 << (0x17U - (char)iVal_1 & 0x1f) & 0x7fffff;
  }
  *param_1 = uVal_4 | uVal_3;
  return iVal_2;
}

// __acrt_CompareStringW
/* Library Function - Single Match
    __acrt_CompareStringW
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_CompareStringW
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */
uint64_t __acrt_CompareStringW(uint64_t param_1,uint32_t param_2,uint64_t param_3,int param_4, uint64_t param_5,int param_6)
{
  uint64_t uVal_1;
  
  if (0 < param_4) {
    param_4 = func_0x18068e1a0(param_3,(int64_t)param_4);
  }
  if (0 < param_6) {
    param_6 = func_0x18068e1a0(param_5,(int64_t)param_6);
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    uVal_1 = (uint64_t)((param_4 - param_6 >> 0x1f & 0xfffffffeU) + 3);
    if (param_4 - param_6 == 0) {
      uVal_1 = 2;
    }
  }
  else {
    uVal_1 = func_0x180696ae8(param_1,param_2,param_3,param_4,param_5,param_6,0,0,0);
  }
  return uVal_1;
}

// func_0x1806a95ec
void func_0x1806a95ec(uint8_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4, uint64_t param_5)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint16_t *pU64_4;
  uint16_t *pU64_5;
  uint8_t *pU64_6;
  uint8_t auStack_78 [32];
  uint64_t local_58;
  uint64_t local_50;
  uint8_t local_48 [8];
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  pU64_4 = (uint16_t *)*param_2;
  local_58 = param_5;
  pU64_5 = pU64_4;
  local_50 = param_4;
  if (param_1 != (uint8_t *)0x0) {
    do {
      pU64_6 = local_48;
      if (3 < param_3) {
        pU64_6 = param_1;
      }
      uVal_2 = func_0x18069b254(pU64_6,*pU64_5,local_50,local_58);
      if (uVal_2 == 0xffffffffffffffff) {
        *param_2 = pU64_4;
        goto LAB_1806a971a;
      }
      if (pU64_6 != param_1) {
        if (param_3 < uVal_2) goto LAB_1806a96b2;
        func_0x1806aa960(param_1,pU64_6,uVal_2);
      }
      if (uVal_2 != 0) {
        if (param_1[uVal_2 - 1] == '\0') goto LAB_1806a96ac;
        pU64_4 = pU64_5 + 1;
      }
      param_3 = param_3 - uVal_2;
      param_1 = param_1 + uVal_2;
      pU64_5 = pU64_5 + 1;
    } while( true );
  }
  lVal_3 = func_0x18069b254(local_48,*pU64_4,param_4,param_5);
  uVal_1 = local_58;
  while ((lVal_3 != -1 && ((lVal_3 == 0 || (local_48[lVal_3 + -1] != '\0'))))) {
    pU64_4 = pU64_4 + 1;
    lVal_3 = func_0x18069b254(local_48,*pU64_4,param_4,uVal_1);
  }
LAB_1806a971a:
  func_0x180673080(local_40 ^ (uint64_t)auStack_78);
  return;
LAB_1806a96ac:
  pU64_4 = (uint16_t *)0x0;
LAB_1806a96b2:
  *param_2 = pU64_4;
  goto LAB_1806a971a;
}

// __acrt_LCMapStringW
/* Library Function - Single Match
    __acrt_LCMapStringW
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    __acrt_LCMapStringW
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void __acrt_LCMapStringW(uint64_t param_1,uint32_t param_2,uint64_t param_3,int param_4, uint64_t param_5,uint32_t param_6)
{
  int iVal_1;
  int iVal_2;
  
  iVal_2 = param_4;
  if (0 < param_4) {
    iVal_1 = func_0x18068e1a0(param_3,(int64_t)param_4);
    iVal_2 = iVal_1 + 1;
    if (param_4 <= iVal_1) {
      iVal_2 = iVal_1;
    }
  }
  func_0x180696f70(param_1,param_2,param_3,iVal_2,param_5,param_6,0,0,0);
  return;
}

// func_0x1806a9a10
uint64_t func_0x1806a9a10(uint32_t *param_1,uint param_2,uint param_3)
{
  uint32_t uVal_1;
  uint32_t *pU64_2;
  
  param_3 = param_3 & 0xfff7ffff;
  if ((param_2 & param_3 & 0xfcf0fce0) != 0) {
    if (param_1 != (uint32_t *)0x0) {
      uVal_1 = thunk_FUN_1806aa3e0(0,0);
      *param_1 = uVal_1;
    }
    pU64_2 = (uint32_t *)func_0x1806823dc();
    *pU64_2 = 0x16;
    func_0x180684970();
    return 0x16;
  }
  if (param_1 != (uint32_t *)0x0) {
    uVal_1 = thunk_FUN_1806aa3e0(param_2,param_3);
    *param_1 = uVal_1;
    return 0;
  }
  thunk_FUN_1806aa3e0(param_2,param_3);
  return 0;
}

// func_0x1806a9a80
uint64_t func_0x1806a9a80(uint32_t *param_1)
{
  uint32_t uVal_1;
  
  uVal_1 = func_0x1806a92a0();
  *param_1 = uVal_1;
  uVal_1 = func_0x1806a91c0();
  param_1[1] = uVal_1;
  return 0;
}

// func_0x1806a9aa0
bool func_0x1806a9aa0(int *param_1)
{
  int iVal_1;
  uint64_t local_res8;
  
  func_0x1806a9380(*param_1);
  func_0x1806a9220(param_1[1]);
  local_res8 = 0;
  iVal_1 = func_0x1806a9a80(&local_res8);
  if ((iVal_1 == 0) && (*param_1 == (int)local_res8)) {
    return param_1[1] != local_res8._4_4_;
  }
  return true;
}

// func_0x1806a9b10
uint64_t func_0x1806a9b10(uint64_t *param_1)
{
  uint64_t uVal_1;
  int iVal_2;
  uint64_t local_res10 [3];
  
  local_res10[0] = 0;
  iVal_2 = func_0x1806a9a80(local_res10);
  uVal_1 = local_res10[0];
  if (iVal_2 == 0) {
    local_res10[0] = local_res10[0] | 0x1f;
    *param_1 = uVal_1;
    iVal_2 = func_0x1806a9aa0(local_res10);
    if (iVal_2 == 0) {
      func_0x1806aa360();
      return 0;
    }
  }
  return 1;
}

// func_0x1806a9b70
double func_0x1806a9b70(void)
{
  double dVal_1;
  double dVal_2;
  uint64_t uVal_3;
  double dVal_4;
  uint8_t in_XMM0 [16];
  uint8_t auArr_5 [16];
  
  dVal_4 = in_XMM0._0_8_;
  if (1 < DAT_18083d260) {
    auArr_5 = roundsd(in_XMM0,in_XMM0,10);
    return auArr_5._0_8_;
  }
  dVal_1 = (double)((uint64_t)dVal_4 & 0x7fffffffffffffff);
  uVal_3 = (uint64_t)dVal_1 >> 0x34;
  dVal_2 = dVal_4;
  if (uVal_3 < 0x433) {
    if (uVal_3 < 0x3ff) {
      if ((in_XMM0 & (uint8_t  [16])0x7fffffffffffffff) != (uint8_t  [16])0x0) {
        if (dVal_4 != dVal_1) {
          return -0.0;
        }
        return DAT_1806b2878;
      }
    }
    else {
      dVal_2 = (double)(~((1L << (0x33U - (char)uVal_3 & 0x3f)) - 1U) & (uint64_t)dVal_4);
      if ((dVal_4 == dVal_1) && (dVal_2 != dVal_4)) {
        dVal_2 = dVal_2 + DAT_1806b2878;
      }
    }
  }
  else if (0x7ff0000000000000 < (uint64_t)dVal_1) {
    dVal_4 = (double)func_0x1806a2690();
    return dVal_4;
  }
  return dVal_2;
}

// log10
/* WARNING: Removing unreachable block (ram,0x0001806a9f7d) */
/* WARNING: Removing unreachable block (ram,0x0001806aa129) */
/* WARNING: Removing unreachable block (ram,0x0001806a9f9b) */
/* WARNING: Removing unreachable block (ram,0x0001806a9fcf) */
/* WARNING: Removing unreachable block (ram,0x0001806a9f6f) */
/* WARNING: Removing unreachable block (ram,0x0001806aa160) */
/* WARNING: Removing unreachable block (ram,0x0001806aa162) */
/* WARNING: Removing unreachable block (ram,0x0001806aa080) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    log10
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* WARNING: Removing unreachable block (ram,0x0001806a9f7d) */
/* WARNING: Removing unreachable block (ram,0x0001806aa129) */
/* WARNING: Removing unreachable block (ram,0x0001806a9f9b) */
/* WARNING: Removing unreachable block (ram,0x0001806a9fcf) */
/* WARNING: Removing unreachable block (ram,0x0001806a9f6f) */
/* WARNING: Removing unreachable block (ram,0x0001806aa160) */
/* WARNING: Removing unreachable block (ram,0x0001806aa162) */
/* WARNING: Removing unreachable block (ram,0x0001806aa080) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    log10
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
double __cdecl log10(double _X)
{
  uint8_t auArr_1 [16];
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint64_t in_RDX;
  uint8_t auArr_5 [16];
  double dVal_4;
  uint8_t in_register_00001208 [24];
  uint8_t auArr_6 [32];
  double dVal_7;
  double dVal_8;
  double dVal_9;
  double dVal_10;
  uint8_t auArr_11 [16];
  double dVal_12;
  
  auArr_6._8_24_ = in_register_00001208;
  auArr_6._0_8_ = _X;
  auArr_5 = auArr_6._0_16_;
  if (DAT_180843124 != 0) {
    auArr_11 = vpsrlq_avx(auArr_5,0x34);
    dVal_12 = (double)vmovq_avx(auArr_5);
    auArr_1._8_8_ = _UNK_1806eb468;
    auArr_1._0_8_ = _DAT_1806eb460;
    auArr_1 = vpsubq_avx(auArr_11,auArr_1);
    vcvtdq2pd_avx(auArr_1);
    auArr_11._8_8_ = _UNK_1806eb438;
    auArr_11._0_8_ = DAT_1806eb430;
    vpand_avx(auArr_5,auArr_11);
    auArr_5._8_8_ = 0;
    auArr_5._0_8_ = DAT_1806eb430;
    vcomisd_avx(auArr_5);
    if (dVal_12 != DAT_1806eb430) {
      if (dVal_12 == DAT_1806eb420) {
        dVal_12 = (double)_log10_special(_X,in_RDX,DAT_1806eb664,auArr_1._0_8_);
        return dVal_12;
      }
      _X = (double)_log10_special(_X,in_RDX,DAT_1806eb668,auArr_1._0_8_);
    }
    return _X;
  }
  if ((double)((uint64_t)_X & (uint64_t)DAT_1806eb430) == DAT_1806eb430) {
    if (_X == DAT_1806eb430) {
      return _X;
    }
    if (_X != DAT_1806eb420) {
      return (double)((uint64_t)_X | _DAT_1806eb450);
    }
  }
  else {
    dVal_12 = (double)(int)(((uint64_t)_X >> 0x34) - _DAT_1806eb460);
    if (0.0 < _X) {
      dVal_4 = _X;
      dVal_7 = (double)((uint64_t)_X & _DAT_1806eb480);
      if (dVal_12 == DAT_1806eb5a0) {
        dVal_12 = (double)((uint64_t)_X & _DAT_1806eb480 | (uint64_t)DAT_1806eb510) - DAT_1806eb510
        ;
        dVal_4 = (double)((uint64_t)dVal_12 & _DAT_1806eb480);
        dVal_12 = (double)((uint)((uint64_t)dVal_12 >> 0x34) - _DAT_1806eb5b0);
        dVal_7 = dVal_4;
      }
      uVal_2 = ((uint64_t)dVal_4 & _DAT_1806eb490) + ((uint64_t)dVal_4 & _DAT_1806eb4a0) * 2;
      if (DAT_1806eb5c0 <= (double)((uint64_t)(_X - DAT_1806eb510) & _DAT_1806eb600)) {
        uVal_3 = uVal_2 >> 0x2c;
        dVal_7 = ((double)(uVal_2 | SUB168(_DAT_1806eb520,0)) -
                (double)((uint64_t)dVal_7 | SUB168(_DAT_1806eb520,0))) *
                *(double *)(&DAT_1806e8e10 + uVal_3 * 8);
        dVal_4 = dVal_7 * dVal_7;
        return *(double *)(&DAT_1806eb6b0 + uVal_3 * 8) + DAT_1806eb4e0 * dVal_12 +
               *(double *)(&DAT_1806ebec0 + uVal_3 * 8) +
               (DAT_1806eb4f0 * dVal_12 -
               ((DAT_1806eb560 * dVal_7 + _DAT_1806eb550) * dVal_4 + dVal_7 +
               ((DAT_1806eb590 * dVal_7 + DAT_1806eb580) * dVal_7 + DAT_1806eb570) * dVal_4 * dVal_4) *
               DAT_1806eb4b0);
      }
      dVal_12 = _X - DAT_1806eb510;
      dVal_4 = dVal_12 / (DAT_1806eb500 + dVal_12);
      dVal_7 = dVal_4 + dVal_4;
      dVal_8 = dVal_7 * dVal_7;
      dVal_9 = dVal_8 * dVal_7;
      dVal_10 = (double)((uint64_t)dVal_12 & SUB168(_DAT_1806eb650,0));
      dVal_12 = (((DAT_1806eb620 * dVal_8 + DAT_1806eb610) * dVal_9 +
                (DAT_1806eb640 * dVal_8 + DAT_1806eb630) * dVal_9 * dVal_9 * dVal_7) - dVal_12 * dVal_4) +
               (dVal_12 - dVal_10);
      return dVal_10 * DAT_1806eb4d0 + dVal_12 * DAT_1806eb4d0 + dVal_12 * DAT_1806eb4c0 +
             dVal_10 * DAT_1806eb4c0;
    }
    if (_X == 0.0) {
      dVal_12 = (double)_log10_special(_X,in_RDX,DAT_1806eb660);
      return dVal_12;
    }
  }
  dVal_12 = (double)_log10_special(_X,in_RDX,DAT_1806eb664);
  return dVal_12;
}

// _guard_check_icall
void _guard_check_icall(void)
{
  (*(func_ptr_t )PTR__guard_check_icall_1807658d0)();
  return;
}

// __dcrt_lowio_ensure_console_output_initialized
/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */
/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */
bool __dcrt_lowio_ensure_console_output_initialized(void)
{
  if (DAT_18083e080 == (HANDLE)0xfffffffffffffffe) {
    DAT_18083e080 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_18083e080 != (HANDLE)0xffffffffffffffff;
}

// __dcrt_write_console
/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */
/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */
BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)
{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_18083e080,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_18083e080 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_18083e080);
      }
      DAT_18083e080 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_18083e080,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}

// func_0x1806aa330
uint func_0x1806aa330(uint32_t param_1)
{
  uint local_res10 [6];
  
  local_res10[0] = 0;
  func_0x1806a90f0(local_res10,param_1);
  return local_res10[0] & 0x1f;
}

// func_0x1806aa360
uint func_0x1806aa360(void)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  
  uVal_2 = func_0x1806a2360();
  if ((uVal_2 & 0x3f) == 0) {
    uVal_3 = 0;
  }
  else {
    uVal_4 = (uVal_2 & 1) << 4;
    uVal_3 = uVal_4 | 8;
    if ((uVal_2 & 4) == 0) {
      uVal_3 = uVal_4;
    }
    uVal_4 = uVal_3 | 4;
    if ((uVal_2 & 8) == 0) {
      uVal_4 = uVal_3;
    }
    uVal_1 = uVal_4 | 2;
    if ((uVal_2 & 0x10) == 0) {
      uVal_1 = uVal_4;
    }
    uVal_3 = uVal_1 | 1;
    if ((uVal_2 & 0x20) == 0) {
      uVal_3 = uVal_1;
    }
    if ((uVal_2 & 2) != 0) {
      return uVal_3 | 0x80000;
    }
  }
  return uVal_3;
}

// thunk_FUN_1806aa3e0
uint thunk_FUN_1806aa3e0(uint param_1,uint param_2)
{
  uint uVal_1;
  uint uVal_2;
  uint64_t uVal_3;
  uint uVal_4;
  
  uVal_1 = func_0x1806a2340();
  uVal_4 = uVal_1 >> 3 & 0x10;
  uVal_2 = uVal_4 | 8;
  if ((uVal_1 >> 9 & 1) == 0) {
    uVal_2 = uVal_4;
  }
  uVal_4 = uVal_2 | 4;
  if ((uVal_1 >> 10 & 1) == 0) {
    uVal_4 = uVal_2;
  }
  uVal_2 = uVal_4 | 2;
  if ((uVal_1 >> 0xb & 1) == 0) {
    uVal_2 = uVal_4;
  }
  uVal_4 = uVal_2 | 1;
  if ((uVal_1 >> 0xc & 1) == 0) {
    uVal_4 = uVal_2;
  }
  uVal_2 = uVal_4 | 0x80000;
  if ((uVal_1 >> 8 & 1) == 0) {
    uVal_2 = uVal_4;
  }
  uVal_4 = uVal_1 & 0x6000;
  if (uVal_4 != 0) {
    if (uVal_4 == 0x2000) {
      uVal_2 = uVal_2 | 0x100;
    }
    else if (uVal_4 == 0x4000) {
      uVal_2 = uVal_2 | 0x200;
    }
    else if (uVal_4 == 0x6000) {
      uVal_2 = uVal_2 | 0x300;
    }
  }
  uVal_1 = uVal_1 & 0x8040;
  if (uVal_1 == 0x40) {
    uVal_2 = uVal_2 | 0x2000000;
  }
  else if (uVal_1 == 0x8000) {
    uVal_2 = uVal_2 | 0x3000000;
  }
  else if (uVal_1 == 0x8040) {
    uVal_2 = uVal_2 | 0x1000000;
  }
  uVal_1 = ~(param_2 & 0x308031f) & uVal_2 | param_1 & param_2 & 0x308031f;
  if (uVal_1 != uVal_2) {
    uVal_4 = (uVal_1 & 0x10) << 3;
    uVal_2 = uVal_4 | 0x200;
    if ((uVal_1 & 8) == 0) {
      uVal_2 = uVal_4;
    }
    uVal_4 = uVal_2 | 0x400;
    if ((uVal_1 & 4) == 0) {
      uVal_4 = uVal_2;
    }
    uVal_2 = uVal_4 | 0x800;
    if ((uVal_1 & 2) == 0) {
      uVal_2 = uVal_4;
    }
    uVal_4 = uVal_2 | 0x1000;
    if ((uVal_1 & 1) == 0) {
      uVal_4 = uVal_2;
    }
    uVal_2 = uVal_4 | 0x100;
    if ((uVal_1 >> 0x13 & 1) == 0) {
      uVal_2 = uVal_4;
    }
    uVal_3 = (uint64_t)uVal_2;
    uVal_4 = uVal_1 & 0x300;
    if (uVal_4 != 0) {
      if (uVal_4 == 0x100) {
        uVal_3 = (uint64_t)(uVal_2 | 0x2000);
      }
      else if (uVal_4 == 0x200) {
        uVal_3 = (uint64_t)(uVal_2 | 0x4000);
      }
      else if (uVal_4 == 0x300) {
        uVal_3 = (uint64_t)(uVal_2 | 0x6000);
      }
    }
    uVal_1 = uVal_1 & 0x3000000;
    uVal_2 = (uint)uVal_3;
    if (uVal_1 == 0x1000000) {
      uVal_3 = (uint64_t)(uVal_2 | 0x8040);
    }
    else if (uVal_1 == 0x2000000) {
      uVal_3 = (uint64_t)(uVal_2 | 0x40);
    }
    else if (uVal_1 == 0x3000000) {
      uVal_3 = (uint64_t)(uVal_2 | 0x8000);
    }
    if ((DAT_18083e088 == '\0') || ((uVal_3 & 0x40) == 0)) {
      uVal_3 = (uint64_t)((uint)uVal_3 & 0xffffffbf);
      func_0x1806a2350(uVal_3);
    }
    else {
      func_0x1806a2350(uVal_3);
    }
    uVal_4 = (uint)uVal_3;
    uVal_1 = (uint)(uVal_3 >> 3) & 0x10;
    uVal_2 = uVal_1 | 8;
    if ((uVal_4 >> 9 & 1) == 0) {
      uVal_2 = uVal_1;
    }
    uVal_1 = uVal_2 | 4;
    if ((uVal_4 >> 10 & 1) == 0) {
      uVal_1 = uVal_2;
    }
    uVal_2 = uVal_1 | 2;
    if ((uVal_4 >> 0xb & 1) == 0) {
      uVal_2 = uVal_1;
    }
    uVal_1 = uVal_2 | 1;
    if ((uVal_4 >> 0xc & 1) == 0) {
      uVal_1 = uVal_2;
    }
    uVal_2 = uVal_1 | 0x80000;
    if ((uVal_4 >> 8 & 1) == 0) {
      uVal_2 = uVal_1;
    }
    uVal_1 = uVal_4 & 0x6000;
    if ((uVal_3 & 0x6000) != 0) {
      if (uVal_1 == 0x2000) {
        uVal_2 = uVal_2 | 0x100;
      }
      else if (uVal_1 == 0x4000) {
        uVal_2 = uVal_2 | 0x200;
      }
      else if (uVal_1 == 0x6000) {
        uVal_2 = uVal_2 | 0x300;
      }
    }
    uVal_4 = uVal_4 & 0x8040;
    if (uVal_4 == 0x40) {
      uVal_2 = uVal_2 | 0x2000000;
    }
    else {
      if (uVal_4 == 0x8000) {
        return uVal_2 | 0x3000000;
      }
      if (uVal_4 == 0x8040) {
        return uVal_2 | 0x1000000;
      }
    }
  }
  return uVal_2;
}

// func_0x1806aa3e0
uint func_0x1806aa3e0(uint param_1,uint param_2)
{
  uint uVal_1;
  uint uVal_2;
  uint64_t uVal_3;
  uint uVal_4;
  
  uVal_1 = func_0x1806a2340();
  uVal_4 = uVal_1 >> 3 & 0x10;
  uVal_2 = uVal_4 | 8;
  if ((uVal_1 >> 9 & 1) == 0) {
    uVal_2 = uVal_4;
  }
  uVal_4 = uVal_2 | 4;
  if ((uVal_1 >> 10 & 1) == 0) {
    uVal_4 = uVal_2;
  }
  uVal_2 = uVal_4 | 2;
  if ((uVal_1 >> 0xb & 1) == 0) {
    uVal_2 = uVal_4;
  }
  uVal_4 = uVal_2 | 1;
  if ((uVal_1 >> 0xc & 1) == 0) {
    uVal_4 = uVal_2;
  }
  uVal_2 = uVal_4 | 0x80000;
  if ((uVal_1 >> 8 & 1) == 0) {
    uVal_2 = uVal_4;
  }
  uVal_4 = uVal_1 & 0x6000;
  if (uVal_4 != 0) {
    if (uVal_4 == 0x2000) {
      uVal_2 = uVal_2 | 0x100;
    }
    else if (uVal_4 == 0x4000) {
      uVal_2 = uVal_2 | 0x200;
    }
    else if (uVal_4 == 0x6000) {
      uVal_2 = uVal_2 | 0x300;
    }
  }
  uVal_1 = uVal_1 & 0x8040;
  if (uVal_1 == 0x40) {
    uVal_2 = uVal_2 | 0x2000000;
  }
  else if (uVal_1 == 0x8000) {
    uVal_2 = uVal_2 | 0x3000000;
  }
  else if (uVal_1 == 0x8040) {
    uVal_2 = uVal_2 | 0x1000000;
  }
  uVal_1 = ~(param_2 & 0x308031f) & uVal_2 | param_1 & param_2 & 0x308031f;
  if (uVal_1 != uVal_2) {
    uVal_4 = (uVal_1 & 0x10) << 3;
    uVal_2 = uVal_4 | 0x200;
    if ((uVal_1 & 8) == 0) {
      uVal_2 = uVal_4;
    }
    uVal_4 = uVal_2 | 0x400;
    if ((uVal_1 & 4) == 0) {
      uVal_4 = uVal_2;
    }
    uVal_2 = uVal_4 | 0x800;
    if ((uVal_1 & 2) == 0) {
      uVal_2 = uVal_4;
    }
    uVal_4 = uVal_2 | 0x1000;
    if ((uVal_1 & 1) == 0) {
      uVal_4 = uVal_2;
    }
    uVal_2 = uVal_4 | 0x100;
    if ((uVal_1 >> 0x13 & 1) == 0) {
      uVal_2 = uVal_4;
    }
    uVal_3 = (uint64_t)uVal_2;
    uVal_4 = uVal_1 & 0x300;
    if (uVal_4 != 0) {
      if (uVal_4 == 0x100) {
        uVal_3 = (uint64_t)(uVal_2 | 0x2000);
      }
      else if (uVal_4 == 0x200) {
        uVal_3 = (uint64_t)(uVal_2 | 0x4000);
      }
      else if (uVal_4 == 0x300) {
        uVal_3 = (uint64_t)(uVal_2 | 0x6000);
      }
    }
    uVal_1 = uVal_1 & 0x3000000;
    uVal_2 = (uint)uVal_3;
    if (uVal_1 == 0x1000000) {
      uVal_3 = (uint64_t)(uVal_2 | 0x8040);
    }
    else if (uVal_1 == 0x2000000) {
      uVal_3 = (uint64_t)(uVal_2 | 0x40);
    }
    else if (uVal_1 == 0x3000000) {
      uVal_3 = (uint64_t)(uVal_2 | 0x8000);
    }
    if ((DAT_18083e088 == '\0') || ((uVal_3 & 0x40) == 0)) {
      uVal_3 = (uint64_t)((uint)uVal_3 & 0xffffffbf);
      func_0x1806a2350(uVal_3);
    }
    else {
      func_0x1806a2350(uVal_3);
    }
    uVal_4 = (uint)uVal_3;
    uVal_1 = (uint)(uVal_3 >> 3) & 0x10;
    uVal_2 = uVal_1 | 8;
    if ((uVal_4 >> 9 & 1) == 0) {
      uVal_2 = uVal_1;
    }
    uVal_1 = uVal_2 | 4;
    if ((uVal_4 >> 10 & 1) == 0) {
      uVal_1 = uVal_2;
    }
    uVal_2 = uVal_1 | 2;
    if ((uVal_4 >> 0xb & 1) == 0) {
      uVal_2 = uVal_1;
    }
    uVal_1 = uVal_2 | 1;
    if ((uVal_4 >> 0xc & 1) == 0) {
      uVal_1 = uVal_2;
    }
    uVal_2 = uVal_1 | 0x80000;
    if ((uVal_4 >> 8 & 1) == 0) {
      uVal_2 = uVal_1;
    }
    uVal_1 = uVal_4 & 0x6000;
    if ((uVal_3 & 0x6000) != 0) {
      if (uVal_1 == 0x2000) {
        uVal_2 = uVal_2 | 0x100;
      }
      else if (uVal_1 == 0x4000) {
        uVal_2 = uVal_2 | 0x200;
      }
      else if (uVal_1 == 0x6000) {
        uVal_2 = uVal_2 | 0x300;
      }
    }
    uVal_4 = uVal_4 & 0x8040;
    if (uVal_4 == 0x40) {
      uVal_2 = uVal_2 | 0x2000000;
    }
    else {
      if (uVal_4 == 0x8000) {
        return uVal_2 | 0x3000000;
      }
      if (uVal_4 == 0x8040) {
        return uVal_2 | 0x1000000;
      }
    }
  }
  return uVal_2;
}

// func_0x1806aa690
uint32_t func_0x1806aa690(uint64_t param_1,uint64_t param_2,int param_3,uint32_t param_4, uint64_t param_5)
{
  uint64_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  
  if (param_3 == 1) {
    uVal_1 = 2;
    uVal_3 = 0x22;
    uVal_2 = 4;
  }
  else {
    if (param_3 != 2) {
      return (int)param_2;
    }
    uVal_1 = 1;
    uVal_3 = 0x21;
    uVal_2 = 8;
  }
  func_0x1806a26b0(param_5,param_4,param_2,uVal_1,uVal_2,uVal_3,param_1,0,1);
  return (int)param_2;
}

// _log10_special
/* Library Function - Single Match
    _log10_special
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    _log10_special
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
void _log10_special(void)
{
  func_0x1806aa690();
  return;
}

// _guard_dispatch_icall
/* WARNING: This is an inlined function */
/* WARNING: This is an inlined function */
void _guard_dispatch_icall(void)
{
  func_ptr_t UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001806aa760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// _guard_dispatch_icall
/* WARNING: This is an inlined function */
/* WARNING: Switch with 1 destination removed at 0x0001806aa7a0 */
/* WARNING: This is an inlined function */
/* WARNING: Switch with 1 destination removed at 0x0001806aa7a0 */
void _guard_dispatch_icall(void)
{
  func_ptr_t UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001806aa760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// func_0x1806aa7c0
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
char * func_0x1806aa7c0(char *param_1,byte param_2,char *param_3)
{
  ushort uVal_1;
  char *fnPtr_2;
  char *fnPtr_3;
  char ch_4;
  int iVal_5;
  char ch_6;
  char ch_7;
  char ch_8;
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  
  iVal_5 = (uint)param_2 * 0x1010101;
  fnPtr_2 = (char *)0x0;
  ch_4 = (char)iVal_5;
  fnPtr_3 = param_1;
  if ((char *)0x1f < param_3) {
    if (((uint64_t)param_1 & 0xf) != 0) {
      fnPtr_2 = (char *)((uint64_t)((uint)param_1 & 0xf) - 0x10);
      param_3 = param_3 + (int64_t)fnPtr_2;
      param_1 = param_1 + -(int64_t)fnPtr_2;
      do {
        fnPtr_3 = param_1;
        if (ch_4 == param_1[(int64_t)fnPtr_2]) goto LAB_1806aa84c;
        fnPtr_2 = fnPtr_2 + 1;
      } while (fnPtr_2 != (char *)0x0);
      if (param_3 < (char *)0x20) goto joined_r0x0001806aa83c;
    }
    do {
      auArr_9[0] = -(*param_1 == ch_4);
      ch_6 = (char)((uint)iVal_5 >> 8);
      auArr_9[1] = -(param_1[1] == ch_6);
      ch_7 = (char)((uint)iVal_5 >> 0x10);
      auArr_9[2] = -(param_1[2] == ch_7);
      ch_8 = (char)((uint)iVal_5 >> 0x18);
      auArr_9[3] = -(param_1[3] == ch_8);
      auArr_9[4] = -(param_1[4] == ch_4);
      auArr_9[5] = -(param_1[5] == ch_6);
      auArr_9[6] = -(param_1[6] == ch_7);
      auArr_9[7] = -(param_1[7] == ch_8);
      auArr_9[8] = -(param_1[8] == ch_4);
      auArr_9[9] = -(param_1[9] == ch_6);
      auArr_9[10] = -(param_1[10] == ch_7);
      auArr_9[11] = -(param_1[0xb] == ch_8);
      auArr_9[12] = -(param_1[0xc] == ch_4);
      auArr_9[13] = -(param_1[0xd] == ch_6);
      auArr_9[14] = -(param_1[0xe] == ch_7);
      auArr_9[15] = -(param_1[0xf] == ch_8);
      uVal_1 = (ushort)(SUB161(auArr_9 >> 7,0) & 1) | (ushort)(SUB161(auArr_9 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auArr_9 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auArr_9 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auArr_9 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auArr_9 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auArr_9 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auArr_9 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auArr_9 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auArr_9 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auArr_9 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auArr_9 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auArr_9 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auArr_9 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auArr_9 >> 0x77,0) & 1) << 0xe | (ushort)(auArr_9[15] >> 7) << 0xf;
      fnPtr_2 = (char *)0x0;
      if (uVal_1 != 0) {
        for (; (uVal_1 >> (int64_t)fnPtr_2 & 1) == 0; fnPtr_2 = fnPtr_2 + 1) {
        }
      }
      fnPtr_3 = param_1;
      if (uVal_1 != 0) goto LAB_1806aa84c;
      fnPtr_3 = param_1 + 0x10;
      auArr_10[0] = -(param_1[0x10] == ch_4);
      auArr_10[1] = -(param_1[0x11] == ch_6);
      auArr_10[2] = -(param_1[0x12] == ch_7);
      auArr_10[3] = -(param_1[0x13] == ch_8);
      auArr_10[4] = -(param_1[0x14] == ch_4);
      auArr_10[5] = -(param_1[0x15] == ch_6);
      auArr_10[6] = -(param_1[0x16] == ch_7);
      auArr_10[7] = -(param_1[0x17] == ch_8);
      auArr_10[8] = -(param_1[0x18] == ch_4);
      auArr_10[9] = -(param_1[0x19] == ch_6);
      auArr_10[10] = -(param_1[0x1a] == ch_7);
      auArr_10[11] = -(param_1[0x1b] == ch_8);
      auArr_10[12] = -(param_1[0x1c] == ch_4);
      auArr_10[13] = -(param_1[0x1d] == ch_6);
      auArr_10[14] = -(param_1[0x1e] == ch_7);
      auArr_10[15] = -(param_1[0x1f] == ch_8);
      uVal_1 = (ushort)(SUB161(auArr_10 >> 7,0) & 1) | (ushort)(SUB161(auArr_10 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auArr_10 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auArr_10 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auArr_10 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auArr_10 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auArr_10 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auArr_10 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auArr_10 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auArr_10 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auArr_10 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auArr_10 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auArr_10 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auArr_10 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auArr_10 >> 0x77,0) & 1) << 0xe | (ushort)(auArr_10[15] >> 7) << 0xf;
      fnPtr_2 = (char *)0x0;
      if (uVal_1 != 0) {
        for (; (uVal_1 >> (int64_t)fnPtr_2 & 1) == 0; fnPtr_2 = fnPtr_2 + 1) {
        }
      }
      if (uVal_1 != 0) goto LAB_1806aa84c;
      param_1 = param_1 + 0x20;
      param_3 = param_3 + 0xffffffffffffffe0;
      fnPtr_3 = param_1;
    } while ((char *)0x1f < param_3);
  }
joined_r0x0001806aa83c:
  while( true ) {
    if (param_3 == (char *)0x0) {
      return fnPtr_2;
    }
    if (ch_4 == *fnPtr_3) break;
    param_3 = param_3 + 0xffffffffffffffff;
    fnPtr_3 = fnPtr_3 + 1;
  }
LAB_1806aa84c:
  return fnPtr_2 + (int64_t)fnPtr_3;
}

// memcmp
/* Library Function - Single Match
    memcmp
   
   Library: Visual Studio */
/* Library Function - Single Match
    memcmp
   
   Library: Visual Studio */
int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)
{
  uint uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  bool bFlag_5;
  
  lVal_3 = (int64_t)_Buf2 - (int64_t)_Buf1;
  if (7 < _Size) {
    uVal_4 = (uint64_t)_Buf1 & 7;
    while (uVal_4 != 0) {
                    /* WARNING: Load size is inaccurate */
      bFlag_5 = *_Buf1 < *(byte *)((int64_t)_Buf1 + lVal_3);
      if (*_Buf1 != *(byte *)((int64_t)_Buf1 + lVal_3)) goto LAB_1806aa8a3;
      _Buf1 = (void *)((int64_t)_Buf1 + 1);
      _Size = _Size - 1;
      uVal_4 = (uint64_t)_Buf1 & 7;
    }
    if (_Size >> 3 != 0) {
      uVal_4 = _Size >> 5;
      if (uVal_4 != 0) {
        do {
                    /* WARNING: Load size is inaccurate */
          uVal_2 = *_Buf1;
          if (uVal_2 != *(uint64_t *)((int64_t)_Buf1 + lVal_3)) goto LAB_1806aa914;
          uVal_2 = *(uint64_t *)((int64_t)_Buf1 + 8);
          if (uVal_2 != *(uint64_t *)((int64_t)_Buf1 + lVal_3 + 8)) {
LAB_1806aa910:
            _Buf1 = (void *)((int64_t)_Buf1 + 8);
            goto LAB_1806aa914;
          }
          uVal_2 = *(uint64_t *)((int64_t)_Buf1 + 0x10);
          if (uVal_2 != *(uint64_t *)((int64_t)_Buf1 + lVal_3 + 0x10)) {
LAB_1806aa90c:
            _Buf1 = (void *)((int64_t)_Buf1 + 8);
            goto LAB_1806aa910;
          }
          uVal_2 = *(uint64_t *)((int64_t)_Buf1 + 0x18);
          if (uVal_2 != *(uint64_t *)((int64_t)_Buf1 + lVal_3 + 0x18)) {
            _Buf1 = (void *)((int64_t)_Buf1 + 8);
            goto LAB_1806aa90c;
          }
          _Buf1 = (void *)((int64_t)_Buf1 + 0x20);
          uVal_4 = uVal_4 - 1;
        } while (uVal_4 != 0);
        _Size = _Size & 0x1f;
      }
      uVal_4 = _Size >> 3;
      if (uVal_4 != 0) {
        do {
                    /* WARNING: Load size is inaccurate */
          uVal_2 = *_Buf1;
          if (uVal_2 != *(uint64_t *)((int64_t)_Buf1 + lVal_3)) {
LAB_1806aa914:
            uVal_4 = *(uint64_t *)(lVal_3 + (int64_t)_Buf1);
            uVal_1 = (uint)((uVal_2 >> 0x38 | (uVal_2 & 0xff000000000000) >> 0x28 |
                            (uVal_2 & 0xff0000000000) >> 0x18 | (uVal_2 & 0xff00000000) >> 8 |
                            (uVal_2 & 0xff000000) << 8 | (uVal_2 & 0xff0000) << 0x18 |
                            (uVal_2 & 0xff00) << 0x28 | uVal_2 << 0x38) <
                          (uVal_4 >> 0x38 | (uVal_4 & 0xff000000000000) >> 0x28 |
                           (uVal_4 & 0xff0000000000) >> 0x18 | (uVal_4 & 0xff00000000) >> 8 |
                           (uVal_4 & 0xff000000) << 8 | (uVal_4 & 0xff0000) << 0x18 |
                           (uVal_4 & 0xff00) << 0x28 | uVal_4 << 0x38));
            return (1 - uVal_1) - (uint)(uVal_1 != 0);
          }
          _Buf1 = (void *)((int64_t)_Buf1 + 8);
          uVal_4 = uVal_4 - 1;
        } while (uVal_4 != 0);
        _Size = _Size & 7;
      }
    }
  }
  while( true ) {
    if (_Size == 0) {
      return 0;
    }
                    /* WARNING: Load size is inaccurate */
    bFlag_5 = *_Buf1 < *(byte *)((int64_t)_Buf1 + lVal_3);
    if (*_Buf1 != *(byte *)((int64_t)_Buf1 + lVal_3)) break;
    _Buf1 = (void *)((int64_t)_Buf1 + 1);
    _Size = _Size - 1;
  }
LAB_1806aa8a3:
  return (1 - (uint)bFlag_5) - (uint)(bFlag_5 != 0);
}

// func_0x1806aa960
void func_0x1806aa960(uint8_t (*param_1)[32],uint8_t (*param_2)[32],uint64_t param_3)
{
  uint32_t *pU64_1;
  uint8_t uVal_2;
  uint16_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint32_t uVal_14;
  uint8_t (*pArr16_15)[32];
  uint8_t (*pArr16_16)[32];
  uint32_t *pU64_17;
  uint32_t *pU64_18;
  uint8_t (*pArr16_19)[32];
  uint32_t *pU64_20;
  uint64_t uVal_21;
  int64_t lVal_22;
  uint64_t uVal_23;
  uint32_t uVal_24;
  uint32_t uVal_26;
  uint32_t uVal_27;
  uint32_t uVal_28;
  uint8_t auArr_25 [32];
  uint8_t auArr_29 [32];
  uint8_t auArr_30 [32];
  uint8_t auArr_31 [32];
  uint8_t auArr_32 [32];
  uint8_t auArr_33 [32];
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    (*param_1)[0] = (*param_2)[0];
    return;
  case 2:
    *(uint16_t *)*param_1 = *(uint16_t *)*param_2;
    return;
  case 3:
    uVal_2 = (*param_2)[2];
    *(uint16_t *)*param_1 = *(uint16_t *)*param_2;
    (*param_1)[2] = uVal_2;
    return;
  case 4:
    *(uint32_t *)*param_1 = *(uint32_t *)*param_2;
    return;
  case 5:
    uVal_2 = (*param_2)[4];
    *(uint32_t *)*param_1 = *(uint32_t *)*param_2;
    (*param_1)[4] = uVal_2;
    return;
  case 6:
    uVal_3 = *(uint16_t *)(*param_2 + 4);
    *(uint32_t *)*param_1 = *(uint32_t *)*param_2;
    *(uint16_t *)(*param_1 + 4) = uVal_3;
    return;
  case 7:
    uVal_3 = *(uint16_t *)(*param_2 + 4);
    uVal_2 = (*param_2)[6];
    *(uint32_t *)*param_1 = *(uint32_t *)*param_2;
    *(uint16_t *)(*param_1 + 4) = uVal_3;
    (*param_1)[6] = uVal_2;
    return;
  case 8:
    *(uint64_t *)*param_1 = *(uint64_t *)*param_2;
    return;
  case 9:
    uVal_2 = (*param_2)[8];
    *(uint64_t *)*param_1 = *(uint64_t *)*param_2;
    (*param_1)[8] = uVal_2;
    return;
  case 10:
    uVal_3 = *(uint16_t *)(*param_2 + 8);
    *(uint64_t *)*param_1 = *(uint64_t *)*param_2;
    *(uint16_t *)(*param_1 + 8) = uVal_3;
    return;
  case 0xb:
    uVal_3 = *(uint16_t *)(*param_2 + 8);
    uVal_2 = (*param_2)[10];
    *(uint64_t *)*param_1 = *(uint64_t *)*param_2;
    *(uint16_t *)(*param_1 + 8) = uVal_3;
    (*param_1)[10] = uVal_2;
    return;
  case 0xc:
    uVal_4 = *(uint32_t *)(*param_2 + 8);
    *(uint64_t *)*param_1 = *(uint64_t *)*param_2;
    *(uint32_t *)(*param_1 + 8) = uVal_4;
    return;
  case 0xd:
    uVal_4 = *(uint32_t *)(*param_2 + 8);
    uVal_2 = (*param_2)[0xc];
    *(uint64_t *)*param_1 = *(uint64_t *)*param_2;
    *(uint32_t *)(*param_1 + 8) = uVal_4;
    (*param_1)[0xc] = uVal_2;
    return;
  case 0xe:
    uVal_4 = *(uint32_t *)(*param_2 + 8);
    uVal_3 = *(uint16_t *)(*param_2 + 0xc);
    *(uint64_t *)*param_1 = *(uint64_t *)*param_2;
    *(uint32_t *)(*param_1 + 8) = uVal_4;
    *(uint16_t *)(*param_1 + 0xc) = uVal_3;
    return;
  case 0xf:
    uVal_4 = *(uint32_t *)(*param_2 + 8);
    uVal_3 = *(uint16_t *)(*param_2 + 0xc);
    uVal_2 = (*param_2)[0xe];
    *(uint64_t *)*param_1 = *(uint64_t *)*param_2;
    *(uint32_t *)(*param_1 + 8) = uVal_4;
    *(uint16_t *)(*param_1 + 0xc) = uVal_3;
    (*param_1)[0xe] = uVal_2;
    return;
  }
  if (param_3 < 0x21) {
    uVal_4 = *(uint32_t *)(*param_2 + 4);
    uVal_5 = *(uint32_t *)(*param_2 + 8);
    uVal_6 = *(uint32_t *)(*param_2 + 0xc);
    pU64_17 = (uint32_t *)(param_2[-1] + param_3 + 0x10);
    uVal_7 = *pU64_17;
    uVal_8 = pU64_17[1];
    uVal_9 = pU64_17[2];
    uVal_10 = pU64_17[3];
    *(uint32_t *)*param_1 = *(uint32_t *)*param_2;
    *(uint32_t *)(*param_1 + 4) = uVal_4;
    *(uint32_t *)(*param_1 + 8) = uVal_5;
    *(uint32_t *)(*param_1 + 0xc) = uVal_6;
    pU64_17 = (uint32_t *)(param_1[-1] + param_3 + 0x10);
    *pU64_17 = uVal_7;
    pU64_17[1] = uVal_8;
    pU64_17[2] = uVal_9;
    pU64_17[3] = uVal_10;
    return;
  }
  pArr16_15 = (uint8_t (*)[32])(*param_2 + param_3);
  if (param_1 <= param_2) {
    pArr16_15 = param_1;
  }
  if (param_1 < pArr16_15) {
    uVal_4 = *(uint32_t *)*param_2;
    uVal_5 = *(uint32_t *)(*param_2 + 4);
    uVal_6 = *(uint32_t *)(*param_2 + 8);
    uVal_7 = *(uint32_t *)(*param_2 + 0xc);
    lVal_22 = (int64_t)param_2 - (int64_t)param_1;
    pU64_17 = (uint32_t *)((int64_t)param_1 + lVal_22 + (param_3 - 0x10));
    uVal_8 = pU64_17[1];
    uVal_9 = pU64_17[2];
    uVal_10 = pU64_17[3];
    pU64_18 = (uint32_t *)(param_1[-1] + param_3 + 0x10);
    uVal_21 = param_3 - 0x10;
    pU64_20 = pU64_18;
    uVal_24 = *pU64_17;
    uVal_26 = uVal_8;
    uVal_27 = uVal_9;
    uVal_28 = uVal_10;
    if (((uint64_t)pU64_18 & 0xf) != 0) {
      pU64_20 = (uint32_t *)((uint64_t)pU64_18 & 0xfffffffffffffff0);
      pU64_1 = (uint32_t *)((int64_t)pU64_20 + lVal_22);
      uVal_24 = *pU64_1;
      uVal_26 = pU64_1[1];
      uVal_27 = pU64_1[2];
      uVal_28 = pU64_1[3];
      *pU64_18 = *pU64_17;
      *(uint32_t *)(param_1[-1] + param_3 + 0x14) = uVal_8;
      *(uint32_t *)(param_1[-1] + param_3 + 0x18) = uVal_9;
      *(uint32_t *)(param_1[-1] + param_3 + 0x1c) = uVal_10;
      uVal_21 = (int64_t)pU64_20 - (int64_t)param_1;
    }
    uVal_23 = uVal_21 >> 7;
    if (uVal_23 != 0) {
      *pU64_20 = uVal_24;
      pU64_20[1] = uVal_26;
      pU64_20[2] = uVal_27;
      pU64_20[3] = uVal_28;
      pU64_17 = pU64_20;
      while( true ) {
        pU64_18 = (uint32_t *)((int64_t)pU64_17 + lVal_22 + -0x10);
        uVal_8 = pU64_18[1];
        uVal_9 = pU64_18[2];
        uVal_10 = pU64_18[3];
        pU64_20 = (uint32_t *)((int64_t)pU64_17 + lVal_22 + -0x20);
        uVal_24 = *pU64_20;
        uVal_26 = pU64_20[1];
        uVal_27 = pU64_20[2];
        uVal_28 = pU64_20[3];
        pU64_20 = pU64_17 + -0x20;
        pU64_17[-4] = *pU64_18;
        pU64_17[-3] = uVal_8;
        pU64_17[-2] = uVal_9;
        pU64_17[-1] = uVal_10;
        pU64_17[-8] = uVal_24;
        pU64_17[-7] = uVal_26;
        pU64_17[-6] = uVal_27;
        pU64_17[-5] = uVal_28;
        pU64_18 = (uint32_t *)((int64_t)pU64_17 + lVal_22 + -0x30);
        uVal_8 = pU64_18[1];
        uVal_9 = pU64_18[2];
        uVal_10 = pU64_18[3];
        pU64_1 = (uint32_t *)((int64_t)pU64_17 + lVal_22 + -0x40);
        uVal_24 = *pU64_1;
        uVal_26 = pU64_1[1];
        uVal_27 = pU64_1[2];
        uVal_28 = pU64_1[3];
        uVal_23 = uVal_23 - 1;
        pU64_17[-0xc] = *pU64_18;
        pU64_17[-0xb] = uVal_8;
        pU64_17[-10] = uVal_9;
        pU64_17[-9] = uVal_10;
        pU64_17[-0x10] = uVal_24;
        pU64_17[-0xf] = uVal_26;
        pU64_17[-0xe] = uVal_27;
        pU64_17[-0xd] = uVal_28;
        pU64_18 = (uint32_t *)((int64_t)pU64_17 + lVal_22 + -0x50);
        uVal_8 = pU64_18[1];
        uVal_9 = pU64_18[2];
        uVal_10 = pU64_18[3];
        pU64_1 = (uint32_t *)((int64_t)pU64_17 + lVal_22 + -0x60);
        uVal_24 = *pU64_1;
        uVal_26 = pU64_1[1];
        uVal_27 = pU64_1[2];
        uVal_28 = pU64_1[3];
        pU64_17[-0x14] = *pU64_18;
        pU64_17[-0x13] = uVal_8;
        pU64_17[-0x12] = uVal_9;
        pU64_17[-0x11] = uVal_10;
        pU64_17[-0x18] = uVal_24;
        pU64_17[-0x17] = uVal_26;
        pU64_17[-0x16] = uVal_27;
        pU64_17[-0x15] = uVal_28;
        pU64_1 = (uint32_t *)((int64_t)pU64_17 + lVal_22 + -0x70);
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_18 = (uint32_t *)((int64_t)pU64_20 + lVal_22);
        uVal_24 = *pU64_18;
        uVal_26 = pU64_18[1];
        uVal_27 = pU64_18[2];
        uVal_28 = pU64_18[3];
        if (uVal_23 == 0) break;
        pU64_17[-0x1c] = *pU64_1;
        pU64_17[-0x1b] = uVal_8;
        pU64_17[-0x1a] = uVal_9;
        pU64_17[-0x19] = uVal_10;
        *pU64_20 = uVal_24;
        pU64_17[-0x1f] = uVal_26;
        pU64_17[-0x1e] = uVal_27;
        pU64_17[-0x1d] = uVal_28;
        pU64_17 = pU64_20;
      }
      pU64_17[-0x1c] = *pU64_1;
      pU64_17[-0x1b] = uVal_8;
      pU64_17[-0x1a] = uVal_9;
      pU64_17[-0x19] = uVal_10;
      uVal_21 = uVal_21 & 0x7f;
    }
    for (uVal_23 = uVal_21 >> 4; uVal_23 != 0; uVal_23 = uVal_23 - 1) {
      *pU64_20 = uVal_24;
      pU64_20[1] = uVal_26;
      pU64_20[2] = uVal_27;
      pU64_20[3] = uVal_28;
      pU64_20 = pU64_20 + -4;
      pU64_17 = (uint32_t *)((int64_t)pU64_20 + lVal_22);
      uVal_24 = *pU64_17;
      uVal_26 = pU64_17[1];
      uVal_27 = pU64_17[2];
      uVal_28 = pU64_17[3];
    }
    if ((uVal_21 & 0xf) != 0) {
      *(uint32_t *)*param_1 = uVal_4;
      *(uint32_t *)(*param_1 + 4) = uVal_5;
      *(uint32_t *)(*param_1 + 8) = uVal_6;
      *(uint32_t *)(*param_1 + 0xc) = uVal_7;
    }
    *pU64_20 = uVal_24;
    pU64_20[1] = uVal_26;
    pU64_20[2] = uVal_27;
    pU64_20[3] = uVal_28;
    return;
  }
  if (DAT_18083d260 < 3) {
    if ((param_3 < 0x801) || (((byte)DAT_180842400 & 2) == 0)) {
      if (0x80 < param_3) {
        lVal_22 = ((uint64_t)param_1 & 0xf) - 0x10;
        pU64_17 = (uint32_t *)((int64_t)param_1 - lVal_22);
        pU64_20 = (uint32_t *)((int64_t)param_2 - lVal_22);
        param_3 = param_3 + lVal_22;
        if (0x80 < param_3) {
          do {
            uVal_4 = pU64_20[1];
            uVal_5 = pU64_20[2];
            uVal_6 = pU64_20[3];
            uVal_7 = pU64_20[4];
            uVal_8 = pU64_20[5];
            uVal_9 = pU64_20[6];
            uVal_10 = pU64_20[7];
            uVal_24 = pU64_20[8];
            uVal_26 = pU64_20[9];
            uVal_27 = pU64_20[10];
            uVal_28 = pU64_20[0xb];
            uVal_11 = pU64_20[0xc];
            uVal_12 = pU64_20[0xd];
            uVal_13 = pU64_20[0xe];
            uVal_14 = pU64_20[0xf];
            *pU64_17 = *pU64_20;
            pU64_17[1] = uVal_4;
            pU64_17[2] = uVal_5;
            pU64_17[3] = uVal_6;
            pU64_17[4] = uVal_7;
            pU64_17[5] = uVal_8;
            pU64_17[6] = uVal_9;
            pU64_17[7] = uVal_10;
            pU64_17[8] = uVal_24;
            pU64_17[9] = uVal_26;
            pU64_17[10] = uVal_27;
            pU64_17[0xb] = uVal_28;
            pU64_17[0xc] = uVal_11;
            pU64_17[0xd] = uVal_12;
            pU64_17[0xe] = uVal_13;
            pU64_17[0xf] = uVal_14;
            uVal_4 = pU64_20[0x11];
            uVal_5 = pU64_20[0x12];
            uVal_6 = pU64_20[0x13];
            uVal_7 = pU64_20[0x14];
            uVal_8 = pU64_20[0x15];
            uVal_9 = pU64_20[0x16];
            uVal_10 = pU64_20[0x17];
            uVal_24 = pU64_20[0x18];
            uVal_26 = pU64_20[0x19];
            uVal_27 = pU64_20[0x1a];
            uVal_28 = pU64_20[0x1b];
            uVal_11 = pU64_20[0x1c];
            uVal_12 = pU64_20[0x1d];
            uVal_13 = pU64_20[0x1e];
            uVal_14 = pU64_20[0x1f];
            pU64_17[0x10] = pU64_20[0x10];
            pU64_17[0x11] = uVal_4;
            pU64_17[0x12] = uVal_5;
            pU64_17[0x13] = uVal_6;
            pU64_17[0x14] = uVal_7;
            pU64_17[0x15] = uVal_8;
            pU64_17[0x16] = uVal_9;
            pU64_17[0x17] = uVal_10;
            pU64_17[0x18] = uVal_24;
            pU64_17[0x19] = uVal_26;
            pU64_17[0x1a] = uVal_27;
            pU64_17[0x1b] = uVal_28;
            pU64_17[0x1c] = uVal_11;
            pU64_17[0x1d] = uVal_12;
            pU64_17[0x1e] = uVal_13;
            pU64_17[0x1f] = uVal_14;
            pU64_17 = pU64_17 + 0x20;
            pU64_20 = pU64_20 + 0x20;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001806aae86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(func_ptr_t )((uint64_t)*(uint *)(&DAT_1806ec758 + (param_3 + 0xf >> 4) * 4) + 0x180000000))();
      return;
    }
code_r0x0001806aa95b:
    for (; param_3 != 0; param_3 = param_3 - 1) {
      (*param_1)[0] = (*param_2)[0];
      param_2 = (uint8_t (*)[32])(*param_2 + 1);
      param_1 = (uint8_t (*)[32])(*param_1 + 1);
    }
    return;
  }
  if ((0x2000 < param_3) && (param_3 < 0x180001)) {
    pArr16_15 = param_1 + 2;
    if (param_2 < param_1) {
      pArr16_15 = param_2;
    }
    if ((pArr16_15 <= param_2) && (((byte)DAT_180842400 & 2) != 0)) goto code_r0x0001806aa95b;
  }
  auArr_25 = vmovdqu_avx(*param_2);
  auArr_33 = vmovdqu_avx(*(uint8_t (*)[32])(param_2[-1] + param_3));
  if (0x100 < param_3) {
    lVal_22 = ((uint64_t)param_1 & 0x1f) - 0x20;
    pArr16_15 = (uint8_t (*)[32])((int64_t)param_1 - lVal_22);
    param_2 = (uint8_t (*)[32])((int64_t)param_2 - lVal_22);
    param_3 = param_3 + lVal_22;
    if (0x100 < param_3) {
      if (0x180000 < param_3) {
        do {
          uVal_21 = param_3;
          pArr16_19 = param_2;
          pArr16_16 = pArr16_15;
          auArr_29 = vmovdqu_avx(*pArr16_19);
          auArr_31 = vmovdqu_avx(pArr16_19[1]);
          auArr_30 = vmovdqu_avx(pArr16_19[2]);
          auArr_32 = vmovdqu_avx(pArr16_19[3]);
          auArr_29 = vmovntdq_avx(auArr_29);
          *pArr16_16 = auArr_29;
          auArr_29 = vmovntdq_avx(auArr_31);
          pArr16_16[1] = auArr_29;
          auArr_29 = vmovntdq_avx(auArr_30);
          pArr16_16[2] = auArr_29;
          auArr_29 = vmovntdq_avx(auArr_32);
          pArr16_16[3] = auArr_29;
          auArr_29 = vmovdqu_avx(pArr16_19[4]);
          auArr_31 = vmovdqu_avx(pArr16_19[5]);
          auArr_30 = vmovdqu_avx(pArr16_19[6]);
          auArr_32 = vmovdqu_avx(pArr16_19[7]);
          auArr_29 = vmovntdq_avx(auArr_29);
          pArr16_16[4] = auArr_29;
          auArr_29 = vmovntdq_avx(auArr_31);
          pArr16_16[5] = auArr_29;
          auArr_29 = vmovntdq_avx(auArr_30);
          pArr16_16[6] = auArr_29;
          auArr_29 = vmovntdq_avx(auArr_32);
          pArr16_16[7] = auArr_29;
          pArr16_15 = pArr16_16 + 8;
          param_2 = pArr16_19 + 8;
          param_3 = uVal_21 - 0x100;
        } while (0xff < uVal_21 - 0x100);
        uVal_23 = uVal_21 - 0xe1 & 0xffffffffffffffe0;
        switch(uVal_21) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auArr_29 = vmovdqu_avx(*(uint8_t (*)[32])(*pArr16_19 + uVal_23));
          auArr_29 = vmovntdq_avx(auArr_29);
          *(uint8_t (*)[32])(*pArr16_16 + uVal_23) = auArr_29;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auArr_29 = vmovdqu_avx(*(uint8_t (*)[32])(pArr16_19[1] + uVal_23));
          auArr_29 = vmovntdq_avx(auArr_29);
          *(uint8_t (*)[32])(pArr16_16[1] + uVal_23) = auArr_29;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auArr_29 = vmovdqu_avx(*(uint8_t (*)[32])(pArr16_19[2] + uVal_23));
          auArr_29 = vmovntdq_avx(auArr_29);
          *(uint8_t (*)[32])(pArr16_16[2] + uVal_23) = auArr_29;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auArr_29 = vmovdqu_avx(*(uint8_t (*)[32])(pArr16_19[3] + uVal_23));
          auArr_29 = vmovntdq_avx(auArr_29);
          *(uint8_t (*)[32])(pArr16_16[3] + uVal_23) = auArr_29;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auArr_29 = vmovdqu_avx(*(uint8_t (*)[32])(pArr16_19[4] + uVal_23));
          auArr_29 = vmovntdq_avx(auArr_29);
          *(uint8_t (*)[32])(pArr16_16[4] + uVal_23) = auArr_29;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auArr_29 = vmovdqu_avx(*(uint8_t (*)[32])(pArr16_19[5] + uVal_23));
          auArr_29 = vmovntdq_avx(auArr_29);
          *(uint8_t (*)[32])(pArr16_16[5] + uVal_23) = auArr_29;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auArr_29 = vmovdqu_avx(*(uint8_t (*)[32])(pArr16_19[6] + uVal_23));
          auArr_29 = vmovntdq_avx(auArr_29);
          *(uint8_t (*)[32])(pArr16_16[6] + uVal_23) = auArr_29;
        default:
          auArr_33 = vmovdqu_avx(auArr_33);
          *(uint8_t (*)[32])(pArr16_16[-1] + uVal_21) = auArr_33;
        case 0x100:
          auArr_25 = vmovdqu_avx(auArr_25);
          *param_1 = auArr_25;
          return;
        }
      }
      do {
        auArr_25 = vmovdqu_avx(*param_2);
        auArr_33 = vmovdqu_avx(param_2[1]);
        auArr_29 = vmovdqu_avx(param_2[2]);
        auArr_31 = vmovdqu_avx(param_2[3]);
        *pArr16_15 = auArr_25;
        pArr16_15[1] = auArr_33;
        pArr16_15[2] = auArr_29;
        pArr16_15[3] = auArr_31;
        auArr_25 = vmovdqu_avx(param_2[4]);
        auArr_33 = vmovdqu_avx(param_2[5]);
        auArr_29 = vmovdqu_avx(param_2[6]);
        auArr_31 = vmovdqu_avx(param_2[7]);
        pArr16_15[4] = auArr_25;
        pArr16_15[5] = auArr_33;
        pArr16_15[6] = auArr_29;
        pArr16_15[7] = auArr_31;
        pArr16_15 = pArr16_15 + 8;
        param_2 = param_2 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001806aabe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(func_ptr_t )((uint64_t)*(uint *)(&DAT_1806ec710 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))();
  return;
}

// func_0x1806ab010
uint8_t (*func_0x1806ab010(uint8_t (*param_1)[32],byte param_2,uint64_t param_3))[32]
{
  uint8_t auArr_1 [32];
  uint8_t (*pArr16_2)[32];
  uint8_t (*pArr16_3)[32];
  uint8_t (*pArr16_4)[16];
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint8_t uVal_7;
  int64_t lVal_10;
  uint8_t auArr_11 [16];
  uint8_t in_YMM0 [32];
  uint8_t auArr_12 [32];
  uint16_t uVal_8;
  uint32_t uVal_9;
  
  uVal_5 = (uint64_t)param_2;
  lVal_10 = uVal_5 * 0x101010101010101;
  auArr_12._16_16_ = in_YMM0._16_16_;
  if (param_3 < 0x10) {
    uVal_7 = (uint8_t)lVal_10;
    uVal_8 = (uint16_t)lVal_10;
    uVal_9 = (uint32_t)lVal_10;
    switch(param_3) {
    case 0:
      return param_1;
    case 8:
      *(int64_t *)(param_1[-1] + param_3 + 0x18) = lVal_10;
      return param_1;
    case 9:
      *(int64_t *)(param_1[-1] + param_3 + 0x17) = lVal_10;
      param_1[-1][param_3 + 0x1f] = uVal_7;
      return param_1;
    case 10:
      *(int64_t *)(param_1[-1] + param_3 + 0x16) = lVal_10;
      *(uint16_t *)(param_1[-1] + param_3 + 0x1e) = uVal_8;
      return param_1;
    case 0xb:
      *(int64_t *)(param_1[-1] + param_3 + 0x15) = lVal_10;
      *(uint16_t *)(param_1[-1] + param_3 + 0x1d) = uVal_8;
      param_1[-1][param_3 + 0x1f] = uVal_7;
      return param_1;
    case 0xc:
      *(int64_t *)(param_1[-1] + param_3 + 0x14) = lVal_10;
    case 4:
      *(uint32_t *)(param_1[-1] + param_3 + 0x1c) = uVal_9;
      return param_1;
    case 0xd:
      *(int64_t *)(param_1[-1] + param_3 + 0x13) = lVal_10;
    case 5:
      *(uint32_t *)(param_1[-1] + param_3 + 0x1b) = uVal_9;
      param_1[-1][param_3 + 0x1f] = uVal_7;
      return param_1;
    case 0xe:
      *(int64_t *)(param_1[-1] + param_3 + 0x12) = lVal_10;
    case 6:
      *(uint32_t *)(param_1[-1] + param_3 + 0x1a) = uVal_9;
    case 2:
      *(uint16_t *)(param_1[-1] + param_3 + 0x1e) = uVal_8;
      return param_1;
    case 0xf:
      *(int64_t *)(param_1[-1] + param_3 + 0x11) = lVal_10;
    case 7:
      *(uint32_t *)(param_1[-1] + param_3 + 0x19) = uVal_9;
    case 3:
      *(uint16_t *)(param_1[-1] + param_3 + 0x1d) = uVal_8;
    case 1:
      param_1[-1][param_3 + 0x1f] = uVal_7;
      return param_1;
    }
  }
  auArr_11._8_8_ = lVal_10;
  auArr_11._0_8_ = lVal_10;
  auArr_12._0_16_ = auArr_11;
  if (param_3 < 0x21) {
    *(uint8_t (*)[16])*param_1 = auArr_11;
    *(uint8_t (*)[16])(param_1[-1] + param_3 + 0x10) = auArr_11;
    return param_1;
  }
  pArr16_2 = param_1;
  if (DAT_18083d260 < 3) {
    if ((param_3 <= DAT_18083d268) || (((byte)DAT_180842400 & 2) == 0)) {
      lVal_10 = ((uint64_t)param_1 & 0xf) - 0x10;
      pArr16_4 = (uint8_t (*)[16])((int64_t)param_1 - lVal_10);
      param_3 = param_3 + lVal_10;
      if (0x80 < param_3) {
        do {
          *pArr16_4 = auArr_11;
          pArr16_4[1] = auArr_11;
          pArr16_4[2] = auArr_11;
          pArr16_4[3] = auArr_11;
          pArr16_4[4] = auArr_11;
          pArr16_4[5] = auArr_11;
          pArr16_4[6] = auArr_11;
          pArr16_4[7] = auArr_11;
          pArr16_4 = pArr16_4 + 8;
          param_3 = param_3 - 0x80;
        } while (0x7f < param_3);
      }
                    /* WARNING: Could not recover jumptable at 0x0001806ab358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pArr16_2 = (uint8_t (*)[32])
                (*(func_ptr_t )((uint64_t)*(uint *)(&DAT_1806ec808 + (param_3 + 0xf >> 4) * 4) +
                          0x180000000))(pArr16_4,uVal_5 - lVal_10);
      return pArr16_2;
    }
  }
  else if (((param_3 <= DAT_18083d268) || (DAT_18083d270 < param_3)) ||
          (((byte)DAT_180842400 & 2) == 0)) {
    auArr_12 = vinsertf128_avx(auArr_12,auArr_11,1);
    lVal_10 = ((uint64_t)param_1 & 0x1f) - 0x20;
    pArr16_2 = (uint8_t (*)[32])((int64_t)param_1 - lVal_10);
    param_3 = param_3 + lVal_10;
    if (0x100 < param_3) {
      if (DAT_18083d270 < param_3) {
        do {
          uVal_5 = param_3;
          pArr16_3 = pArr16_2;
          auArr_1 = vmovntdq_avx(auArr_12);
          *pArr16_3 = auArr_1;
          auArr_1 = vmovntdq_avx(auArr_12);
          pArr16_3[1] = auArr_1;
          auArr_1 = vmovntdq_avx(auArr_12);
          pArr16_3[2] = auArr_1;
          auArr_1 = vmovntdq_avx(auArr_12);
          pArr16_3[3] = auArr_1;
          auArr_1 = vmovntdq_avx(auArr_12);
          pArr16_3[4] = auArr_1;
          auArr_1 = vmovntdq_avx(auArr_12);
          pArr16_3[5] = auArr_1;
          auArr_1 = vmovntdq_avx(auArr_12);
          pArr16_3[6] = auArr_1;
          auArr_1 = vmovntdq_avx(auArr_12);
          pArr16_3[7] = auArr_1;
          pArr16_2 = pArr16_3 + 8;
          param_3 = uVal_5 - 0x100;
        } while (0xff < uVal_5 - 0x100);
        uVal_6 = uVal_5 - 0xe1 & 0xffffffffffffffe0;
        switch(uVal_5) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auArr_1 = vmovntdq_avx(auArr_12);
          *(uint8_t (*)[32])(*pArr16_3 + uVal_6) = auArr_1;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auArr_1 = vmovntdq_avx(auArr_12);
          *(uint8_t (*)[32])(pArr16_3[1] + uVal_6) = auArr_1;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auArr_1 = vmovntdq_avx(auArr_12);
          *(uint8_t (*)[32])(pArr16_3[2] + uVal_6) = auArr_1;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auArr_1 = vmovntdq_avx(auArr_12);
          *(uint8_t (*)[32])(pArr16_3[3] + uVal_6) = auArr_1;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auArr_1 = vmovntdq_avx(auArr_12);
          *(uint8_t (*)[32])(pArr16_3[4] + uVal_6) = auArr_1;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auArr_1 = vmovntdq_avx(auArr_12);
          *(uint8_t (*)[32])(pArr16_3[5] + uVal_6) = auArr_1;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auArr_1 = vmovntdq_avx(auArr_12);
          *(uint8_t (*)[32])(pArr16_3[6] + uVal_6) = auArr_1;
        default:
          auArr_1 = vmovdqu_avx(auArr_12);
          *(uint8_t (*)[32])(pArr16_3[-1] + uVal_5) = auArr_1;
        case 0x100:
          auArr_12 = vmovdqu_avx(auArr_12);
          *param_1 = auArr_12;
          return param_1;
        }
      }
      do {
        *pArr16_2 = auArr_12;
        pArr16_2[1] = auArr_12;
        pArr16_2[2] = auArr_12;
        pArr16_2[3] = auArr_12;
        pArr16_2[4] = auArr_12;
        pArr16_2[5] = auArr_12;
        pArr16_2[6] = auArr_12;
        pArr16_2[7] = auArr_12;
        pArr16_2 = pArr16_2 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x0001806ab1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pArr16_2 = (uint8_t (*)[32])
              (*(func_ptr_t )((uint64_t)*(uint *)(&DAT_1806ec7c0 + (param_3 + 0x1f >> 5) * 4) +
                        0x180000000))(auArr_12._0_8_,uVal_5 - lVal_10);
    return pArr16_2;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pArr16_2)[0] = param_2;
    pArr16_2 = (uint8_t (*)[32])(*pArr16_2 + 1);
  }
  return param_1;
}

// strcmp
/* Library Function - Single Match
    strcmp
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */
/* Library Function - Single Match
    strcmp
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */
int __cdecl strcmp(char *_Str1,char *_Str2)
{
  byte bFlag_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  
  lVal_3 = (int64_t)_Str2 - (int64_t)_Str1;
  uVal_2 = (uint64_t)_Str1 & 7;
  while( true ) {
    if (uVal_2 == 0) {
      while ((((int)lVal_3 + (int)_Str1 & 0xfffU) < 0xff9 &&
             (uVal_2 = *(uint64_t *)_Str1, uVal_2 == *(uint64_t *)(lVal_3 + (int64_t)_Str1)))) {
        _Str1 = (char *)((int64_t)_Str1 + 8);
        if ((~uVal_2 & uVal_2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
          return 0;
        }
      }
    }
    bFlag_1 = *_Str1;
    if (bFlag_1 != *(byte *)(lVal_3 + (int64_t)_Str1)) break;
    _Str1 = (char *)((int64_t)_Str1 + 1);
    if (bFlag_1 == 0) {
      return 0;
    }
    uVal_2 = (uint64_t)_Str1 & 7;
  }
  return -(uint)(bFlag_1 < *(byte *)(lVal_3 + (int64_t)_Str1)) | 1;
}

// strlen
/* Library Function - Single Match
    strlen
   
   Library: Visual Studio */
/* Library Function - Single Match
    strlen
   
   Library: Visual Studio */
size_t __cdecl strlen(char *_Str)
{
  char ch_1;
  uint64_t uVal_2;
  uint64_t *pU64_3;
  int64_t lVal_4;
  
  lVal_4 = -(int64_t)_Str;
  uVal_2 = (uint64_t)_Str & 7;
  while (uVal_2 != 0) {
    ch_1 = *_Str;
    _Str = (char *)((int64_t)_Str + 1);
    if (ch_1 == '\0') goto LAB_1806ab4a8;
    uVal_2 = (uint64_t)_Str & 7;
  }
  do {
    do {
      pU64_3 = (uint64_t *)_Str;
      _Str = (char *)(pU64_3 + 1);
    } while (((~*pU64_3 ^ *pU64_3 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    uVal_2 = *pU64_3;
    if ((char)uVal_2 == '\0') {
      return (int64_t)pU64_3 + lVal_4;
    }
    if ((char)(uVal_2 >> 8) == '\0') {
      return (size_t)(char *)((int64_t)pU64_3 + lVal_4 + 1);
    }
    if ((char)(uVal_2 >> 0x10) == '\0') {
      return (size_t)(char *)((int64_t)pU64_3 + lVal_4 + 2);
    }
    if ((char)(uVal_2 >> 0x18) == '\0') {
      return (size_t)(char *)((int64_t)pU64_3 + lVal_4 + 3);
    }
    if ((char)(uVal_2 >> 0x20) == '\0') {
      return (size_t)(char *)((int64_t)pU64_3 + lVal_4 + 4);
    }
    if ((char)(uVal_2 >> 0x28) == '\0') {
      return (size_t)(char *)((int64_t)pU64_3 + lVal_4 + 5);
    }
    if ((char)(uVal_2 >> 0x30) == '\0') {
      return (size_t)(char *)((int64_t)pU64_3 + lVal_4 + 6);
    }
  } while ((char)(uVal_2 >> 0x38) != '\0');
LAB_1806ab4a8:
  return (size_t)(char *)((int64_t)_Str + lVal_4 + -1);
}

// strncmp
/* Library Function - Single Match
    strncmp
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    strncmp
   
   Library: Visual Studio 2019 Release */
int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)
{
  byte bFlag_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  bool bFlag_4;
  
  lVal_3 = (int64_t)_Str2 - (int64_t)_Str1;
  if (_MaxCount != 0) {
    uVal_2 = (uint64_t)_Str1 & 7;
    while( true ) {
      if (uVal_2 == 0) {
        while ((((int)lVal_3 + (int)_Str1 & 0xfffU) < 0xff9 &&
               (uVal_2 = *(uint64_t *)_Str1, uVal_2 == *(uint64_t *)(lVal_3 + (int64_t)_Str1)))) {
          _Str1 = (char *)((int64_t)_Str1 + 8);
          bFlag_4 = _MaxCount < 8;
          _MaxCount = _MaxCount - 8;
          if (bFlag_4 || _MaxCount == 0) {
            return 0;
          }
          if ((~uVal_2 & uVal_2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
            return 0;
          }
        }
      }
      bFlag_1 = *_Str1;
      if (bFlag_1 != *(byte *)(lVal_3 + (int64_t)_Str1)) {
        return -(uint)(bFlag_1 < *(byte *)(lVal_3 + (int64_t)_Str1)) | 1;
      }
      _Str1 = (char *)((int64_t)_Str1 + 1);
      _MaxCount = _MaxCount - 1;
      if ((_MaxCount == 0) || (bFlag_1 == 0)) break;
      uVal_2 = (uint64_t)_Str1 & 7;
    }
  }
  return 0;
}

// VERSION.DLL::GetFileVersionInfoA
BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)
{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806addb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileVersionInfoA(lptstrFilename,dwHandle,dwLen,lpData);
  return BVar1;
}

// VERSION.DLL::GetFileVersionInfoSizeA
DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle)
{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806addc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeA(lptstrFilename,lpdwHandle);
  return DVar1;
}

// VERSION.DLL::VerQueryValueA
BOOL __stdcall VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)
{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806addd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerQueryValueA(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}

// API-MS-WIN-CORE-LIBRARYLOADER-L1-2-0.DLL::GetProcAddress
FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)
{
  FARPROC pFn_1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806adde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFn_1 = GetProcAddress(hModule,lpProcName);
  return pFn_1;
}

// URLMON.DLL::URLDownloadToFileA
HRESULT __stdcall URLDownloadToFileA(LPUNKNOWN param_1,LPCSTR param_2,LPCSTR param_3,DWORD param_4, LPBINDSTATUSCALLBACK param_5)
{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806addf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = URLDownloadToFileA(param_1,param_2,param_3,param_4,param_5);
  return HVar1;
}

// API-MS-WIN-CORE-HEAP-L1-1-0.DLL::HeapFree
BOOL __stdcall HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)
{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806ade00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapFree(hHeap,dwFlags,lpMem);
  return BVar1;
}

// API-MS-WIN-CORE-HANDLE-L1-1-0.DLL::CloseHandle
BOOL __stdcall CloseHandle(HANDLE hObject)
{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806ade10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}

// API-MS-WIN-CORE-HEAP-L1-1-0.DLL::HeapAlloc
LPVOID __stdcall HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)
{
  LPVOID pVoid_1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806ade20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pVoid_1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  return pVoid_1;
}

// API-MS-WIN-CORE-TOOLHELP-L1-1-0.DLL::CreateToolhelp32Snapshot
void CreateToolhelp32Snapshot(void)
{
                    /* WARNING: Could not recover jumptable at 0x0001806ade30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateToolhelp32Snapshot();
  return;
}

// API-MS-WIN-CORE-TOOLHELP-L1-1-0.DLL::Thread32First
void Thread32First(void)
{
                    /* WARNING: Could not recover jumptable at 0x0001806ade40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Thread32First();
  return;
}

// API-MS-WIN-CORE-TOOLHELP-L1-1-0.DLL::Thread32Next
void Thread32Next(void)
{
                    /* WARNING: Could not recover jumptable at 0x0001806ade50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Thread32Next();
  return;
}

// API-MS-WIN-CORE-ERRORHANDLING-L1-1-0.DLL::GetLastError
DWORD __stdcall GetLastError(void)
{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806ade60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}

// API-MS-WIN-CORE-LIBRARYLOADER-L1-2-0.DLL::FreeLibrary
BOOL __stdcall FreeLibrary(HMODULE hLibModule)
{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806ade70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}

// API-MS-WIN-CORE-LIBRARYLOADER-L1-2-0.DLL::LoadLibraryExW
HMODULE __stdcall LoadLibraryExW(LPCWSTR lpLibFileName,HANDLE hFile,DWORD dwFlags)
{
  HMODULE pHnd_1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806ade80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHnd_1 = LoadLibraryExW(lpLibFileName,hFile,dwFlags);
  return pHnd_1;
}

// API-MS-WIN-CORE-COM-L1-1-0.DLL::CoCreateFreeThreadedMarshaler
HRESULT __stdcall CoCreateFreeThreadedMarshaler(LPUNKNOWN punkOuter,LPUNKNOWN *ppunkMarshal)
{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806ade90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  return HVar1;
}

// API-MS-WIN-CORE-SYNCH-L1-1-0.DLL::CreateEventW
HANDLE __stdcall CreateEventW(LPSECURITY_ATTRIBUTES lpEventAttributes,BOOL bManualReset,BOOL bInitialState, LPCWSTR lpName)
{
  HANDLE pVoid_1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806adea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pVoid_1 = CreateEventW(lpEventAttributes,bManualReset,bInitialState,lpName);
  return pVoid_1;
}

// API-MS-WIN-CORE-LOCALIZATION-L1-2-0.DLL::FormatMessageW
DWORD __stdcall FormatMessageW(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPWSTR lpBuffer, DWORD nSize,va_list *Arguments)
{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806adeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageW(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}

// OLEAUT32.DLL::Ordinal_200
void Ordinal_200(void)
{
                    /* WARNING: Could not recover jumptable at 0x0001806adec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_200();
  return;
}

// API-MS-WIN-CORE-HEAP-L1-1-0.DLL::GetProcessHeap
HANDLE __stdcall GetProcessHeap(void)
{
  HANDLE pVoid_1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806aded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pVoid_1 = GetProcessHeap();
  return pVoid_1;
}

// API-MS-WIN-CORE-INTERLOCKED-L1-1-0.DLL::InterlockedPushEntrySList
PSLIST_ENTRY __stdcall InterlockedPushEntrySList(PSLIST_HEADER ListHead,PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806adee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = InterlockedPushEntrySList(ListHead,ListEntry);
  return p_Var1;
}

// API-MS-WIN-CORE-WINRT-L1-1-0.DLL::RoGetActivationFactory
void RoGetActivationFactory(void)
{
                    /* WARNING: Could not recover jumptable at 0x0001806adef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RoGetActivationFactory();
  return;
}

// API-MS-WIN-CORE-WINRT-ERROR-L1-1-1.DLL::RoOriginateLanguageException
void RoOriginateLanguageException(void)
{
                    /* WARNING: Could not recover jumptable at 0x0001806adf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RoOriginateLanguageException();
  return;
}

// OLEAUT32.DLL::Ordinal_201
void Ordinal_201(void)
{
                    /* WARNING: Could not recover jumptable at 0x0001806adf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_201();
  return;
}

// API-MS-WIN-CORE-SYNCH-L1-1-0.DLL::SetEvent
BOOL __stdcall SetEvent(HANDLE hEvent)
{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806adf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEvent(hEvent);
  return BVar1;
}

// OLEAUT32.DLL::Ordinal_6
void Ordinal_6(void)
{
                    /* WARNING: Could not recover jumptable at 0x0001806adf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_6();
  return;
}

// OLEAUT32.DLL::Ordinal_7
void Ordinal_7(void)
{
                    /* WARNING: Could not recover jumptable at 0x0001806adf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_7();
  return;
}

// API-MS-WIN-CORE-SYNCH-L1-1-0.DLL::WaitForSingleObject
DWORD __stdcall WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds)
{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806adf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WaitForSingleObject(hHandle,dwMilliseconds);
  return DVar1;
}
