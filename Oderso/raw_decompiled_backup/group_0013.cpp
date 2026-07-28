#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x18012b1f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x18012b1f0(int64_t param_1)
{
  uint8_t in_XMM0 [16];
  uint8_t auArr_1 [16];
  
  auArr_1._4_12_ = in_XMM0._4_12_;
  auArr_1._0_4_ = (float)*(int *)(param_1 + 0x10);
  if (-1 < *(int *)(param_1 + 0x10)) {
    return CONCAT44(in_XMM0._4_4_ & _UNK_1806b55f4,(uint)auArr_1._0_4_ & _DAT_1806b55f0);
  }
  return auArr_1._0_8_ | SUB168(_DAT_1806af1a0,0);
}

// func_0x18012b210
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x18012b210(uint64_t param_1)
{
  uint8_t auArr_1 [16];
  int64_t in_RCX;
  float fVal_2;
  uint uVal_3;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  
  uVal_3 = (uint)((uint64_t)param_1 >> 0x20);
  fVal_2 = (float)*(int *)(in_RCX + 0x10) * *(float *)(in_RCX + 0x14);
  fVal_2 = fVal_2 + fVal_2;
  auArr_4._0_4_ = _DAT_1806b55f0 & (uint)fVal_2;
  auArr_4._4_4_ = _UNK_1806b55f4 & uVal_3;
  auArr_4._8_4_ = _UNK_1806b55f8 & in_XMM0_Dc;
  auArr_4._12_4_ = _UNK_1806b55fc & in_XMM0_Dd;
  auArr_4 = roundss(auArr_4,auArr_4,10);
  auArr_5._4_4_ = uVal_3;
  auArr_5._0_4_ = -(uint)(fVal_2 < 0.0);
  auArr_5._8_4_ = in_XMM0_Dc;
  auArr_5._12_4_ = in_XMM0_Dd;
  auArr_1._4_4_ = _UNK_1806af1a4 ^ auArr_4._4_4_;
  auArr_1._0_4_ = _DAT_1806af1a0 ^ auArr_4._0_4_;
  auArr_1._8_4_ = _UNK_1806af1a8 ^ auArr_4._8_4_;
  auArr_1._12_4_ = _UNK_1806af1ac ^ auArr_4._12_4_;
  auArr_5 = blendvps(auArr_4,auArr_1,auArr_5);
  return auArr_5._0_8_;
}

// func_0x18012b270
void func_0x18012b270(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x34] = 1;
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
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  return;
}

// func_0x18012b460
void func_0x18012b460(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x42] = 1;
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
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  return;
}

// func_0x18012b7b0
void func_0x18012b7b0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x2a] = 1;
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
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  return;
}

// func_0x18012b940
void func_0x18012b940(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x38] = 1;
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
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  return;
}

// func_0x18012bd20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18012bd20(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d6c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xd54d5575;
    param_1[1][4] = param_1[1][4] ^ 0x37;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18012bd50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18012bd50(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ca4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ca0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ca8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cac;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xc77d4573;
    param_1[1][4] = param_1[1][4] ^ 0xb1;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18012bd80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18012bd80(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  
  uVal_10 = _UNK_1806b2d7c;
  uVal_9 = _UNK_1806b2d78;
  uVal_8 = _UNK_1806b2d74;
  uVal_7 = _DAT_1806b2d70;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d74;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d70;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d78;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d7c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x87;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x18012bde0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18012bde0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cbc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x45a9b135;
    param_1[1][4] = param_1[1][4] ^ 0x39;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x18012be40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18012be40(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2d84;
    uVal_2 = param_1[2] ^ _UNK_1806b2d88;
    uVal_3 = param_1[3] ^ _UNK_1806b2d8c;
    *param_1 = *param_1 ^ _DAT_1806b2d80;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b26d0,0);
  }
  return;
}

// func_0x18012be80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18012be80(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2da4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2da0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2da8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xd993efbb19cfe32d;
    param_1[1][8] = param_1[1][8] ^ 0x2d;
    param_1[1][9] = param_1[1][9] ^ 0xe3;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x18012beb0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18012beb0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5604;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5600;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5608;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b560c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x5f694973d3c78945;
    param_1[1][8] = param_1[1][8] ^ 0x45;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x18012bee0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18012bee0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af244;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af240;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af248;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af24c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xf553e56763671535;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x63671535;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x67;
    param_1[1][0xd] = param_1[1][0xd] ^ 0xe5;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x18012bf50
void func_0x18012bf50(int64_t param_1,int64_t **param_2,int64_t param_3)
{
  char ch_1;
  uint32_t uVal_2;
  int64_t lVal_3;
  uint uVal_4;
  uint uVal_5;
  int64_t *pLong_6;
  uint64_t uVal_7;
  int iVal_8;
  uint uVal_9;
  int64_t lVal_10;
  
  ch_1 = *(char *)(param_1 + 0x40);
  if (ch_1 == '\0') {
    pLong_6 = param_2[1];
    if (pLong_6 != *(int64_t **)(param_3 + 8)) {
      do {
        uVal_9 = *(uint *)(**param_2 + -4 + (int64_t)pLong_6 * 4);
        lVal_3 = *(int64_t *)(*(int64_t *)(param_1 + 8) + (uint64_t)((uVal_9 & 0x3f800) >> 8));
        uVal_7 = (uint64_t)(uVal_9 & 0x7ff);
        uVal_4 = *(uint *)(lVal_3 + uVal_7 * 4) & 0x3ffff;
        uVal_9 = *(uint *)(*(int64_t *)(param_1 + 0x28) + -4);
        *(uint *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + (uint64_t)((uVal_9 & 0x3f800) >> 8)) +
                 (uint64_t)(uVal_9 & 0x7ff) * 4) = uVal_9 & 0xfffc0000 | uVal_4;
        *(uint32_t *)(*(int64_t *)(param_1 + 0x20) + (uint64_t)uVal_4 * 4) =
             *(uint32_t *)(*(int64_t *)(param_1 + 0x28) + -4);
        *(uint32_t *)(lVal_3 + uVal_7 * 4) = 0xffffffff;
        *(int64_t *)(param_1 + 0x28) = *(int64_t *)(param_1 + 0x28) + -4;
        pLong_6 = (int64_t *)((int64_t)param_2[1] + -1);
        param_2[1] = pLong_6;
      } while (pLong_6 != *(int64_t **)(param_3 + 8));
    }
  }
  else if (ch_1 == '\x01') {
    pLong_6 = param_2[1];
    if (pLong_6 != *(int64_t **)(param_3 + 8)) {
      do {
        uVal_9 = *(uint *)(**param_2 + -4 + (int64_t)pLong_6 * 4);
        lVal_3 = *(int64_t *)(*(int64_t *)(param_1 + 8) + (uint64_t)((uVal_9 & 0x3f800) >> 8));
        uVal_7 = (uint64_t)(uVal_9 & 0x7ff);
        uVal_9 = *(uint *)(lVal_3 + uVal_7 * 4);
        *(uint32_t *)(lVal_3 + uVal_7 * 4) = 0xffffffff;
        uVal_9 = uVal_9 & 0x3ffff;
        uVal_4 = *(uint *)(param_1 + 0x48);
        *(uint64_t *)(param_1 + 0x48) = (uint64_t)uVal_9;
        *(uint *)(*(int64_t *)(param_1 + 0x20) + (uint64_t)uVal_9 * 4) = uVal_4 | 0xfffc0000;
        pLong_6 = (int64_t *)((int64_t)param_2[1] + -1);
        param_2[1] = pLong_6;
      } while (pLong_6 != *(int64_t **)(param_3 + 8));
    }
  }
  else if ((ch_1 == '\x02') && (pLong_6 = param_2[1], pLong_6 != *(int64_t **)(param_3 + 8))) {
    do {
      uVal_9 = *(uint *)(**param_2 + -4 + (int64_t)pLong_6 * 4);
      lVal_3 = *(int64_t *)(*(int64_t *)(param_1 + 8) + (uint64_t)(uVal_9 >> 8 & 0x3f8));
      uVal_5 = *(uint *)(lVal_3 + (uint64_t)(uVal_9 & 0x7ff) * 4) & 0x3ffff;
      iVal_8 = (uVal_9 >> 0x12) + 1;
      uVal_4 = iVal_8 * 0x40000;
      if (iVal_8 == 0x3fff) {
        uVal_4 = 0;
      }
      *(uint *)(lVal_3 + (uint64_t)(uVal_9 & 0x7ff) * 4) = uVal_4 | uVal_5;
      uVal_7 = (uint64_t)(uVal_5 * 4);
      *(uint *)(*(int64_t *)(param_1 + 0x20) + uVal_7) = uVal_9 & 0x3ffff | uVal_4;
      lVal_10 = *(uint64_t *)(param_1 + 0x48) -
               (uint64_t)((uint64_t)uVal_5 < *(uint64_t *)(param_1 + 0x48));
      *(int64_t *)(param_1 + 0x48) = lVal_10;
      lVal_3 = *(int64_t *)(param_1 + 0x20);
      uVal_9 = *(uint *)(lVal_3 + uVal_7);
      *(uint *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + (uint64_t)((uVal_9 & 0x3f800) >> 8)) +
               (uint64_t)(uVal_9 & 0x7ff) * 4) = uVal_9 & 0xfffc0000 | (uint)lVal_10 & 0x3ffff;
      uVal_9 = *(uint *)(lVal_3 + lVal_10 * 4);
      *(uint *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + (uint64_t)((uVal_9 & 0x3f800) >> 8)) +
               (uint64_t)(uVal_9 & 0x7ff) * 4) = uVal_9 & 0xfffc0000 | uVal_5;
      uVal_2 = *(uint32_t *)(lVal_3 + uVal_7);
      *(uint32_t *)(lVal_3 + uVal_7) = *(uint32_t *)(lVal_3 + lVal_10 * 4);
      *(uint32_t *)(lVal_3 + lVal_10 * 4) = uVal_2;
      pLong_6 = (int64_t *)((int64_t)param_2[1] + -1);
      param_2[1] = pLong_6;
    } while (pLong_6 != *(int64_t **)(param_3 + 8));
  }
  return;
}

// func_0x18012c2c0
int64_t ** func_0x18012c2c0(int64_t param_1,int64_t **param_2,uint param_3,byte param_4)
{
  int64_t *pLong_1;
  char ch_2;
  uint32_t uVal_3;
  uint *pU64_4;
  uint uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  int64_t lVal_9;
  uint uVal_10;
  uint local_4c;
  uint64_t local_48;
  uint64_t uVal_11;
  
  uVal_10 = (param_3 & 0x3ffff) >> 0xb;
  uVal_11 = (uint64_t)uVal_10;
  pLong_1 = (int64_t *)(param_1 + 8);
  lVal_8 = *(int64_t *)(param_1 + 8);
  lVal_9 = *(int64_t *)(param_1 + 0x10);
  uVal_7 = lVal_9 - lVal_8 >> 3;
  local_4c = param_3;
  if (uVal_7 <= uVal_11) {
    local_48 = 0;
    if (uVal_11 < (uint64_t)(*(int64_t *)(param_1 + 0x18) - lVal_8 >> 3)) {
      lVal_8 = (uVal_11 + 1) - uVal_7;
      func_0x1806ab010(lVal_9,0,lVal_8 * 8);
      *(int64_t *)(param_1 + 0x10) = lVal_9 + lVal_8 * 8;
    }
    else {
      func_0x18012ca10(pLong_1,uVal_11 + 1,&local_48);
    }
    lVal_8 = *pLong_1;
  }
  lVal_8 = *(int64_t *)(lVal_8 + uVal_11 * 8);
  if (lVal_8 == 0) {
    lVal_8 = func_0x180672de0(0x2027);
    uVal_7 = lVal_8 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_7 - 8) = lVal_8;
    uVal_11 = (uint64_t)(uVal_10 << 3);
    *(uint64_t *)(*pLong_1 + uVal_11) = uVal_7;
    func_0x1806ab010(*(uint64_t *)(*pLong_1 + uVal_11),0xff,0x2000);
    lVal_8 = *(int64_t *)(*pLong_1 + uVal_11);
  }
  uVal_7 = (uint64_t)(param_3 & 0x7ff);
  pU64_4 = *(uint **)(param_1 + 0x28);
  pLong_1 = (int64_t *)(param_1 + 0x20);
  lVal_9 = (int64_t)pU64_4 - *(int64_t *)(param_1 + 0x20) >> 2;
  ch_2 = *(char *)(param_1 + 0x40);
  if (ch_2 != '\0') {
    if (ch_2 == '\x02') {
      uVal_10 = *(uint *)(lVal_8 + uVal_7 * 4) & 0x3ffff;
      if ((uint64_t)uVal_10 == 0x3ffff) {
        if (pU64_4 == *(uint **)(param_1 + 0x30)) {
          func_0x18010b730(pLong_1,pU64_4,&local_4c);
          lVal_9 = *(int64_t *)(param_1 + 0x28);
          param_3 = local_4c;
        }
        else {
          *pU64_4 = param_3;
          lVal_9 = *(int64_t *)(param_1 + 0x28) + 4;
          *(int64_t *)(param_1 + 0x28) = lVal_9;
        }
        *(uint *)(lVal_8 + uVal_7 * 4) =
             param_3 & 0xfffc0000 | ((uint)((int)lVal_9 - *(int *)pLong_1) >> 2) - 1 & 0x3ffff;
      }
      else {
        *(uint *)(lVal_8 + uVal_7 * 4) = param_3 & 0xfffc0000 | uVal_10;
        *(uint *)(*pLong_1 + (uint64_t)uVal_10 * 4) = param_3;
      }
      lVal_6 = *(int64_t *)(param_1 + 0x48);
      *(int64_t *)(param_1 + 0x48) = lVal_6 + 1;
      uVal_5 = *(uint *)(lVal_8 + uVal_7 * 4) & 0x3ffff;
      uVal_7 = (uint64_t)uVal_5;
      lVal_8 = *(int64_t *)(param_1 + 0x20);
      uVal_10 = *(uint *)(lVal_8 + uVal_7 * 4);
      *(uint *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + (uint64_t)((uVal_10 & 0x3f800) >> 8)) +
               (uint64_t)(uVal_10 & 0x7ff) * 4) = uVal_10 & 0xfffc0000 | (uint)lVal_6 & 0x3ffff;
      uVal_10 = *(uint *)(lVal_8 + lVal_6 * 4);
      *(uint *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + (uint64_t)((uVal_10 & 0x3f800) >> 8)) +
               (uint64_t)(uVal_10 & 0x7ff) * 4) = uVal_10 & 0xfffc0000 | uVal_5;
      uVal_3 = *(uint32_t *)(lVal_8 + uVal_7 * 4);
      *(uint32_t *)(lVal_8 + uVal_7 * 4) = *(uint32_t *)(lVal_8 + lVal_6 * 4);
      *(uint32_t *)(lVal_8 + lVal_6 * 4) = uVal_3;
      goto LAB_18012c56b;
    }
    lVal_6 = lVal_9;
    if (ch_2 != '\x01') goto LAB_18012c56b;
    lVal_6 = *(int64_t *)(param_1 + 0x48);
    if ((param_4 | lVal_6 == 0x3ffff) == 0) {
      *(uint *)(lVal_8 + uVal_7 * 4) = param_3 & 0xfffc0000 | (uint)lVal_6 & 0x3ffff;
      uVal_10 = *(uint *)(*(int64_t *)(param_1 + 0x20) + lVal_6 * 4);
      *(uint *)(*(int64_t *)(param_1 + 0x20) + lVal_6 * 4) = param_3;
      *(uint64_t *)(param_1 + 0x48) = (uint64_t)(uVal_10 & 0x3ffff);
      goto LAB_18012c56b;
    }
  }
  if (pU64_4 == *(uint **)(param_1 + 0x30)) {
    func_0x18010b730(pLong_1,pU64_4,&local_4c);
    lVal_6 = *(int64_t *)(param_1 + 0x28);
    param_3 = local_4c;
  }
  else {
    *pU64_4 = param_3;
    lVal_6 = *(int64_t *)(param_1 + 0x28) + 4;
    *(int64_t *)(param_1 + 0x28) = lVal_6;
  }
  *(uint *)(lVal_8 + uVal_7 * 4) =
       param_3 & 0xfffc0000 | ((uint)((int)lVal_6 - *(int *)pLong_1) >> 2) - 1 & 0x3ffff;
  lVal_6 = lVal_9;
LAB_18012c56b:
  *param_2 = pLong_1;
  param_2[1] = (int64_t *)(lVal_6 + 1);
  return param_2;
}

// func_0x18012c590
void func_0x18012c590(uint64_t param_1,int64_t param_2)
{
  if (*(func_ptr_t *)(param_2 + 0x18) != (func_ptr_t )0x0) {
    (**(func_ptr_t *)(param_2 + 0x18))(param_2);
  }
  return;
}

// Unwind@18012c5c0
void Unwind_18012c5c0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18012c660
void func_0x18012c660(int64_t param_1)
{
  uint8_t (*pArr16_1)[16];
  uint *pU64_2;
  uint64_t uVal_3;
  func_ptr_t fnPtr_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  int64_t lVal_7;
  int64_t *pLong_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  uint8_t (*pArr16_11)[16];
  uint64_t uVal_12;
  int64_t *pLong_13;
  uint64_t uVal_14;
  int64_t *pLong_15;
  uint uVal_16;
  uint64_t uVal_17;
  int64_t lVal_18;
  uint *pU64_19;
  bool bFlag_20;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  int64_t *local_68;
  uint8_t (*local_60)[16];
  int64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  _local_78 = ZEXT816(0);
  local_68 = (int64_t *)0x0;
  uVal_10 = *(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8) >> 3;
  local_58 = param_1;
  local_50 = uVal_10;
  if (*(int64_t *)(param_1 + 0x10) != *(int64_t *)(param_1 + 8)) {
    if (uVal_10 >> 0x3d != 0) {
      func_0x18007c0d0();
      fnPtr_4 = (func_ptr_t )swi(3);
      (*fnPtr_4)();
      return;
    }
    func_0x18007fe80(local_78,&local_50);
  }
  lVal_9 = local_58;
  pArr16_11 = (uint8_t (*)[16])(local_58 + 8);
  pArr16_1 = (uint8_t (*)[16])(local_58 + 0x20);
  pU64_2 = *(uint **)(local_58 + 0x28);
  uVal_14 = 0;
  local_60 = pArr16_11;
  for (pU64_19 = *(uint **)(local_58 + 0x20); pU64_19 != pU64_2; pU64_19 = pU64_19 + 1) {
    if (*pU64_19 >> 0x12 < 0x3fff) {
      uVal_16 = *pU64_19 >> 0xb & 0x7f;
      uVal_17 = (uint64_t)uVal_16;
      lVal_18 = *(int64_t *)*pArr16_11;
      lVal_7 = *(int64_t *)(lVal_18 + uVal_17 * 8);
      if (lVal_7 != 0) {
        lVal_5 = (int64_t)uStack_70;
        uVal_12 = (int64_t)uStack_70 - (int64_t)local_78 >> 3;
        if (uVal_12 <= uVal_17) {
          local_50 = 0;
          if (uVal_17 < (uint64_t)((int64_t)local_68 - (int64_t)local_78 >> 3)) {
            lVal_18 = (uVal_17 + 1) - uVal_12;
            func_0x1806ab010(uStack_70,0,lVal_18 * 8);
            uStack_70 = (int64_t *)(lVal_5 + lVal_18 * 8);
          }
          else {
            func_0x18012ca10(local_78,uVal_17 + 1,&local_50);
          }
          lVal_18 = *(int64_t *)*local_60;
          lVal_7 = *(int64_t *)(lVal_18 + uVal_17 * 8);
        }
        uVal_17 = (uint64_t)(uVal_16 << 3);
        *(uint64_t *)(lVal_18 + uVal_17) = 0;
        *(int64_t *)((int64_t)local_78 + uVal_17) = lVal_7;
        uVal_14 = uVal_14 + 1;
        pArr16_11 = local_60;
        if (uVal_14 == uVal_10) break;
      }
    }
  }
  pLong_8 = *(int64_t **)(local_58 + 8);
  pLong_15 = *(int64_t **)(local_58 + 0x10);
  if (pLong_8 == pLong_15) {
    if (local_60 == (uint8_t (*)[16])local_78) goto LAB_18012c85b;
LAB_18012c7cb:
    uVal_3 = *(uint64_t *)(local_58 + 8);
    pLong_6 = uStack_70;
    *(uint32_t *)(local_58 + 8) = local_78._0_4_;
    *(uint32_t *)(local_58 + 0xc) = local_78._4_4_;
    *(uint32_t *)(local_58 + 0x10) = (uint32_t)uStack_70;
    *(uint32_t *)(local_58 + 0x14) = uStack_70._4_4_;
    uStack_70 = pLong_15;
    local_78 = (uint8_t  [8])uVal_3;
    pLong_8 = *(int64_t **)(local_58 + 0x18);
    *(int64_t **)(local_58 + 0x18) = local_68;
    bFlag_20 = pLong_6 != local_68;
    pLong_13 = local_68;
    pLong_15 = pLong_6;
    local_68 = pLong_8;
    if (bFlag_20) goto LAB_18012c868;
  }
  else {
    do {
      lVal_18 = *pLong_8;
      if (lVal_18 != 0) {
        if (0x1f < (uint64_t)((lVal_18 + -8) - *(int64_t *)(lVal_18 + -8))) goto LAB_18012c843;
        thunk_FUN_180695dd0(*(int64_t *)(lVal_18 + -8),0x2027);
        *pLong_8 = 0;
      }
      pLong_8 = pLong_8 + 1;
    } while (pLong_8 != pLong_15);
    pLong_15 = *(int64_t **)(local_58 + 0x10);
    if (local_60 != (uint8_t (*)[16])local_78) goto LAB_18012c7cb;
LAB_18012c85b:
    pLong_13 = *(int64_t **)(local_58 + 0x18);
    if (pLong_15 != pLong_13) {
LAB_18012c868:
      pArr16_11 = local_60;
      pLong_8 = *(int64_t **)*local_60;
      if (pLong_8 == pLong_15) {
        if (pLong_15 != (int64_t *)0x0) {
          uVal_10 = (int64_t)pLong_13 - (int64_t)pLong_15;
          if (0xfff < uVal_10) {
            pLong_8 = (int64_t *)pLong_8[-1];
            if (0x1f < (uint64_t)((int64_t)pLong_15 + (-8 - (int64_t)pLong_8))) goto LAB_18012c843;
            uVal_10 = uVal_10 + 0x27;
          }
          thunk_FUN_180695dd0(pLong_8,uVal_10);
          *pArr16_11 = ZEXT816(0);
          *(uint64_t *)pArr16_11[1] = 0;
        }
      }
      else {
        local_50 = (int64_t)pLong_15 - (int64_t)pLong_8 >> 3;
        func_0x18007fe80(local_60,&local_50);
      }
    }
  }
  lVal_18 = *(int64_t *)(local_58 + 0x28);
  if (lVal_18 != *(int64_t *)(local_58 + 0x30)) {
    lVal_7 = *(int64_t *)*pArr16_1;
    if (lVal_7 == lVal_18) {
      if (lVal_18 != 0) {
        uVal_10 = *(int64_t *)(local_58 + 0x30) - lVal_18;
        if (0xfff < uVal_10) {
          lVal_7 = *(int64_t *)(lVal_7 + -8);
          if (0x1f < (lVal_18 - lVal_7) - 8U) goto LAB_18012c843;
          uVal_10 = uVal_10 + 0x27;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_10);
        *pArr16_1 = ZEXT816(0);
        *(uint64_t *)(lVal_9 + 0x30) = 0;
      }
    }
    else {
      local_50 = lVal_18 - lVal_7 >> 2;
      func_0x1801034e0(pArr16_1,&local_50);
    }
  }
  if (local_78 != (uint8_t  [8])0x0) {
    uVal_10 = (int64_t)local_68 - (int64_t)local_78;
    lVal_9 = (int64_t)local_78;
    if (0xfff < uVal_10) {
      lVal_9 = *(int64_t *)((int64_t)local_78 + -8);
      if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_9)) {
LAB_18012c843:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_10 = uVal_10 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_9,uVal_10);
  }
  return;
}

// Unwind@18012c9a0
void Unwind_18012c9a0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x30);
  return;
}

// func_0x18012ca10
void func_0x18012ca10(uint64_t *param_1,uint64_t param_2,int64_t *param_3)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  bool bFlag_9;
  uint8_t auArr_10 [16];
  
  if (param_2 >> 0x3d == 0) {
    uVal_6 = *param_1;
    uVal_2 = (int64_t)(param_1[2] - uVal_6) >> 3;
    uVal_8 = (uVal_2 >> 1) + uVal_2;
    if (uVal_8 <= param_2) {
      uVal_8 = param_2;
    }
    if (0x1fffffffffffffff - (uVal_2 >> 1) < uVal_2) {
      uVal_8 = 0x1fffffffffffffff;
    }
    if (uVal_8 >> 0x3d == 0) {
      uVal_2 = param_1[1];
      if (uVal_8 == 0) {
        uVal_5 = 0;
      }
      else if (uVal_8 < 0x200) {
        uVal_5 = func_0x180672de0(uVal_8 * 8);
      }
      else {
        if (0x1ffffffffffffffb < uVal_8) goto LAB_18012cbc6;
        lVal_3 = func_0x180672de0(uVal_8 * 8 + 0x27);
        uVal_5 = lVal_3 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_5 - 8) = lVal_3;
      }
      lVal_7 = uVal_2 - uVal_6;
      lVal_3 = uVal_5 + lVal_7;
      uVal_6 = param_2 - (lVal_7 >> 3);
      lVal_1 = *param_3;
      if (lVal_1 == 0) {
        func_0x1806ab010(lVal_3,0,uVal_6 * 8);
      }
      else if (uVal_6 != 0) {
        if (3 < uVal_6) {
          uVal_2 = uVal_6 & 0xfffffffffffffffc;
          lVal_3 = lVal_3 + uVal_2 * 8;
          auArr_10._8_4_ = (int)lVal_1;
          auArr_10._0_8_ = lVal_1;
          auArr_10._12_4_ = (int)((uint64_t)lVal_1 >> 0x20);
          uVal_4 = 0;
          do {
            *(uint8_t (*)[16])(lVal_7 + uVal_5 + uVal_4 * 8) = auArr_10;
            *(uint8_t (*)[16])(lVal_7 + uVal_5 + 0x10 + uVal_4 * 8) = auArr_10;
            uVal_4 = uVal_4 + 4;
          } while (uVal_2 != uVal_4);
          bFlag_9 = uVal_6 == uVal_2;
          uVal_6 = (uint64_t)((uint)uVal_6 & 3);
          if (bFlag_9) goto LAB_18012cb5c;
        }
        uVal_2 = 0;
        do {
          *(int64_t *)(lVal_3 + uVal_2 * 8) = lVal_1;
          uVal_2 = uVal_2 + 1;
        } while (uVal_6 != uVal_2);
      }
LAB_18012cb5c:
      func_0x1806aa960(uVal_5,*param_1,param_1[1] - *param_1);
      uVal_6 = *param_1;
      if (uVal_6 != 0) {
        uVal_4 = param_1[2] - uVal_6;
        uVal_2 = uVal_6;
        if (0xfff < uVal_4) {
          uVal_2 = *(uint64_t *)(uVal_6 - 8);
          if (0x1f < (uVal_6 - 8) - uVal_2) goto LAB_18012cbd0;
          uVal_4 = uVal_4 + 0x27;
        }
        thunk_FUN_180695dd0(uVal_2,uVal_4);
      }
      *param_1 = uVal_5;
      param_1[1] = uVal_5 + param_2 * 8;
      param_1[2] = uVal_5 + uVal_8 * 8;
      return;
    }
LAB_18012cbc6:
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_18012cbd0:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18012cbe0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t ** func_0x18012cbe0(int64_t *param_1,int64_t **param_2,uint *param_3,int64_t *param_4)
{
  int *pInt_1;
  int64_t *pLong_2;
  uint8_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  float fVal_9;
  uint *local_30;
  int64_t *local_28;
  
  uVal_7 = (uint64_t)((int)((uint64_t)(param_1[1] - *param_1) >> 3) - 1U & *param_3);
  pLong_2 = (int64_t *)(*param_1 + uVal_7 * 8);
  lVal_4 = param_1[4];
  pLong_5 = pLong_2;
  do {
    if (*pLong_5 == -1) {
      pLong_5 = (int64_t *)param_1[5];
      goto LAB_18012cc34;
    }
    lVal_6 = *pLong_5 * 0x20;
    pLong_5 = (int64_t *)(lVal_4 + lVal_6);
  } while (*(uint *)(lVal_4 + 8 + lVal_6) != *param_3);
  pLong_8 = (int64_t *)(lVal_4 + lVal_6);
  pLong_5 = (int64_t *)param_1[5];
  if (pLong_5 == pLong_8) {
LAB_18012cc34:
    local_30 = param_3;
    local_28 = param_4;
    if (pLong_5 == (int64_t *)param_1[6]) {
      func_0x18012cd70(param_1 + 4,pLong_5,pLong_2,&DAT_1806b0a10,&local_30,&local_28);
      lVal_4 = param_1[5];
    }
    else {
      *pLong_5 = *pLong_2;
      *(uint *)(pLong_5 + 1) = *param_3;
      *(uint8_t (*)[16])(pLong_5 + 2) = ZEXT816(0);
      if (param_4[1] != 0) {
        LOCK();
        pInt_1 = (int *)(param_4[1] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      pLong_5[2] = *param_4;
      pLong_5[3] = param_4[1];
      lVal_4 = param_1[5] + 0x20;
      param_1[5] = lVal_4;
    }
    *(int64_t *)(*param_1 + uVal_7 * 8) = (lVal_4 - param_1[4] >> 5) + -1;
    lVal_4 = param_1[5];
    uVal_7 = param_1[1] - *param_1 >> 3;
    if ((int64_t)uVal_7 < 0) {
      fVal_9 = (float)((uint64_t)((uint)uVal_7 & 1) | uVal_7 >> 1);
      fVal_9 = fVal_9 + fVal_9;
    }
    else {
      fVal_9 = (float)uVal_7;
    }
    uVal_7 = (uint64_t)(fVal_9 * *(float *)(param_1 + 8));
    fVal_9 = fVal_9 * *(float *)(param_1 + 8) - _DAT_1806ae420;
    if (((int64_t)fVal_9 & (int64_t)uVal_7 >> 0x3f | uVal_7) < (uint64_t)(lVal_4 - param_1[4] >> 5))
    {
      func_0x18012d050(fVal_9,param_1[1] - *param_1 >> 2);
      lVal_4 = param_1[5];
    }
    pLong_8 = (int64_t *)(lVal_4 + -0x20);
    uVal_3 = 1;
  }
  else {
    uVal_3 = 0;
  }
  *param_2 = pLong_8;
  *(uint8_t *)(param_2 + 1) = uVal_3;
  return param_2;
}

// func_0x18012cd70
int64_t func_0x18012cd70(uint64_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4, uint64_t *param_5,int64_t *param_6)
{
  int *pInt_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  uint64_t *pU64_4;
  int64_t *pLong_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  int64_t lVal_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint64_t uVal_13;
  
  uVal_10 = *param_1;
  uVal_13 = ((int64_t)(param_1[1] - uVal_10) >> 5) + 1;
  uVal_12 = (int64_t)(param_1[2] - uVal_10) >> 5;
  uVal_6 = (uVal_12 >> 1) + uVal_12;
  if (uVal_6 <= uVal_13) {
    uVal_6 = uVal_13;
  }
  if (0x7ffffffffffffff - (uVal_12 >> 1) < uVal_12) {
    uVal_6 = 0x7ffffffffffffff;
  }
  if (uVal_6 >> 0x3b != 0) {
LAB_18012d041:
    func_0x18007ba90();
    goto LAB_18012d046;
  }
  lVal_11 = uVal_6 * 0x20;
  if (uVal_6 == 0) {
    uVal_6 = 0;
  }
  else if (uVal_6 < 0x80) {
    uVal_6 = func_0x180672de0(lVal_11);
  }
  else {
    if (uVal_6 == 0x7ffffffffffffff) goto LAB_18012d041;
    lVal_7 = func_0x180672de0(lVal_11 + 0x27);
    uVal_6 = lVal_7 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_6 - 8) = lVal_7;
  }
  lVal_8 = param_2 - uVal_10;
  lVal_7 = uVal_6 + lVal_8;
  *(uint64_t *)(uVal_6 + lVal_8) = *param_3;
  pU64_4 = (uint64_t *)*param_6;
  *(uint32_t *)(uVal_6 + 8 + lVal_8) = *(uint32_t *)*param_5;
  *(uint8_t (*)[16])(uVal_6 + 0x10 + lVal_8) = ZEXT816(0);
  if (pU64_4[1] != 0) {
    LOCK();
    pInt_1 = (int *)(pU64_4[1] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
  }
  *(uint64_t *)(lVal_7 + 0x10) = *pU64_4;
  *(uint64_t *)(lVal_7 + 0x18) = pU64_4[1];
  uVal_12 = *param_1;
  uVal_10 = param_1[1];
  if (param_2 == uVal_10) {
    if (uVal_12 != param_2) {
      lVal_8 = 0;
      do {
        *(uint64_t *)(uVal_6 + lVal_8) = *(uint64_t *)(uVal_12 + lVal_8);
        *(uint32_t *)(uVal_6 + 8 + lVal_8) = *(uint32_t *)(uVal_12 + 8 + lVal_8);
        *(uint8_t (*)[16])(uVal_6 + 0x10 + lVal_8) = ZEXT816(0);
        *(uint64_t *)(uVal_6 + 0x10 + lVal_8) = *(uint64_t *)(uVal_12 + 0x10 + lVal_8);
        *(uint64_t *)(uVal_6 + 0x18 + lVal_8) = *(uint64_t *)(uVal_12 + 0x18 + lVal_8);
        *(uint8_t (*)[16])(uVal_12 + 0x10 + lVal_8) = ZEXT816(0);
        lVal_9 = uVal_12 + lVal_8;
        lVal_8 = lVal_8 + 0x20;
      } while (lVal_9 + 0x20U != param_2);
      goto LAB_18012cf81;
    }
  }
  else {
    if (uVal_12 != param_2) {
      lVal_9 = 0;
      do {
        *(uint64_t *)(uVal_6 + lVal_9) = *(uint64_t *)(uVal_12 + lVal_9);
        *(uint32_t *)(uVal_6 + 8 + lVal_9) = *(uint32_t *)(uVal_12 + 8 + lVal_9);
        *(uint8_t (*)[16])(uVal_6 + 0x10 + lVal_9) = ZEXT816(0);
        *(uint64_t *)(uVal_6 + 0x10 + lVal_9) = *(uint64_t *)(uVal_12 + 0x10 + lVal_9);
        *(uint64_t *)(uVal_6 + 0x18 + lVal_9) = *(uint64_t *)(uVal_12 + 0x18 + lVal_9);
        *(uint8_t (*)[16])(uVal_12 + 0x10 + lVal_9) = ZEXT816(0);
        lVal_3 = uVal_12 + lVal_9;
        lVal_9 = lVal_9 + 0x20;
      } while (lVal_3 + 0x20U != param_2);
      uVal_10 = param_1[1];
    }
    if (param_2 != uVal_10) {
      lVal_8 = lVal_8 + uVal_6;
      lVal_9 = 0;
      do {
        *(uint64_t *)(lVal_8 + 0x20 + lVal_9) = *(uint64_t *)(param_2 + lVal_9);
        *(uint32_t *)(lVal_8 + 0x28 + lVal_9) = *(uint32_t *)(param_2 + 8 + lVal_9);
        *(uint8_t (*)[16])(lVal_8 + 0x30 + lVal_9) = ZEXT816(0);
        *(uint64_t *)(lVal_8 + 0x30 + lVal_9) = *(uint64_t *)(param_2 + 0x10 + lVal_9);
        *(uint64_t *)(lVal_8 + 0x38 + lVal_9) = *(uint64_t *)(param_2 + 0x18 + lVal_9);
        *(uint8_t (*)[16])(param_2 + 0x10 + lVal_9) = ZEXT816(0);
        lVal_3 = param_2 + lVal_9;
        lVal_9 = lVal_9 + 0x20;
      } while (lVal_3 + 0x20U != uVal_10);
    }
LAB_18012cf81:
    uVal_12 = *param_1;
  }
  if (uVal_12 != 0) {
    uVal_10 = param_1[1];
    if (uVal_12 == uVal_10) {
      uVal_10 = param_1[2] - uVal_12;
    }
    else {
      do {
        pLong_5 = *(int64_t **)(uVal_12 + 0x18);
        if (pLong_5 != (int64_t *)0x0) {
          LOCK();
          pLong_2 = pLong_5 + 1;
          *(int *)pLong_2 = *(int *)pLong_2 + -1;
          UNLOCK();
          if (*(int *)pLong_2 == 0) {
            (**(func_ptr_t *)*pLong_5)(pLong_5);
            LOCK();
            pInt_1 = (int *)((int64_t)pLong_5 + 0xc);
            *pInt_1 = *pInt_1 + -1;
            UNLOCK();
            if (*pInt_1 == 0) {
              (**(func_ptr_t *)(*pLong_5 + 8))(pLong_5);
            }
          }
        }
        uVal_12 = uVal_12 + 0x20;
      } while (uVal_12 != uVal_10);
      uVal_12 = *param_1;
      uVal_10 = param_1[2] - uVal_12;
    }
    if (0xfff < uVal_10) {
      if (0x1f < (uVal_12 - 8) - *(uint64_t *)(uVal_12 - 8)) {
LAB_18012d046:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_10 = uVal_10 + 0x27;
      uVal_12 = *(uint64_t *)(uVal_12 - 8);
    }
    thunk_FUN_180695dd0(uVal_12,uVal_10);
  }
  *param_1 = uVal_6;
  param_1[1] = uVal_13 * 0x20 + uVal_6;
  param_1[2] = lVal_11 + uVal_6;
  return lVal_7;
}

// func_0x18012d050
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18012d050(int64_t *param_1,uint64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  float fVal_9;
  uint8_t local_11;
  
  uVal_4 = param_1[5] - param_1[4] >> 5;
  if ((int64_t)uVal_4 < 0) {
    fVal_9 = (float)((uint64_t)((uint)uVal_4 & 1) | uVal_4 >> 1);
    fVal_9 = fVal_9 + fVal_9;
  }
  else {
    fVal_9 = (float)uVal_4;
  }
  uVal_4 = (uint64_t)(fVal_9 / *(float *)(param_1 + 8));
  uVal_4 = (int64_t)(fVal_9 / *(float *)(param_1 + 8) - _DAT_1806ae420) & (int64_t)uVal_4 >> 0x3f |
          uVal_4;
  if (uVal_4 < param_2) {
    uVal_4 = param_2;
  }
  uVal_8 = 8;
  if (8 < uVal_4) {
    uVal_8 = uVal_4;
  }
  uVal_4 = uVal_8 - 1 >> 1 | uVal_8 - 1;
  uVal_4 = uVal_4 >> 2 | uVal_4;
  uVal_4 = uVal_4 >> 4 | uVal_4;
  uVal_4 = uVal_4 >> 8 | uVal_4;
  uVal_4 = uVal_4 >> 0x10 | uVal_4;
  uVal_4 = (uVal_4 >> 0x20 | uVal_4) + 1;
  lVal_5 = *param_1;
  lVal_1 = param_1[1];
  uVal_8 = lVal_1 - lVal_5 >> 3;
  if (uVal_4 == uVal_8) {
    return;
  }
  if (uVal_4 < uVal_8) {
    lVal_6 = lVal_5 + uVal_4 * 8;
    param_1[1] = lVal_6;
    lVal_5 = *param_1;
    if (lVal_5 == lVal_6) goto LAB_18012d175;
  }
  else {
    lVal_7 = uVal_4 - uVal_8;
    lVal_6 = lVal_1;
    if (uVal_8 <= uVal_4 && lVal_7 != 0) {
      if (uVal_4 <= (uint64_t)(param_1[2] - lVal_5 >> 3)) {
        lVal_6 = lVal_1 + lVal_7 * 8;
        func_0x1806ab010(lVal_1,0,lVal_7 * 8);
        param_1[1] = lVal_6;
        lVal_5 = *param_1;
        if (lVal_5 == lVal_6) goto LAB_18012d175;
        goto LAB_18012d15f;
      }
      func_0x18007bf80(param_1,uVal_4,&local_11);
      lVal_6 = param_1[1];
    }
    lVal_5 = *param_1;
    if (lVal_5 == lVal_6) goto LAB_18012d175;
  }
LAB_18012d15f:
  func_0x1806ab010(lVal_5,0xff,((lVal_6 - lVal_5) - 8U & 0xfffffffffffffff8) + 8);
LAB_18012d175:
  lVal_5 = param_1[5];
  lVal_1 = param_1[4];
  if (lVal_5 - lVal_1 != 0) {
    lVal_6 = 0;
    lVal_7 = 0;
    do {
      lVal_2 = *param_1;
      uVal_4 = (uint64_t)
              ((int)((uint64_t)(param_1[1] - lVal_2) >> 3) - 1U & *(uint *)(param_1[4] + 8 + lVal_6))
      ;
      uVal_3 = *(uint64_t *)(lVal_2 + uVal_4 * 8);
      *(int64_t *)(lVal_2 + uVal_4 * 8) = lVal_7;
      *(uint64_t *)(param_1[4] + lVal_6) = uVal_3;
      lVal_7 = lVal_7 + 1;
      lVal_6 = lVal_6 + 0x20;
    } while (lVal_5 - lVal_1 >> 5 != lVal_7);
  }
  return;
}

// func_0x18012d2c0
void func_0x18012d2c0(int *param_1)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f758) {
    func_0x180672ec0(&DAT_18083f758);
    if (DAT_18083f758 == -1) {
      DAT_18083f754 = DAT_18083f31c;
      DAT_18083f31c = DAT_18083f31c + 1;
      _Init_thread_footer(&DAT_18083f758);
    }
  }
  *param_1 = DAT_18083f754;
  param_1[1] = -0x6780fb2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  return;
}

// func_0x18012d350
void func_0x18012d350(uint8_t (*param_1)[16],uint8_t (*param_2)[16])
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint8_t (*local_98)[16];
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint8_t *local_88;
  uint64_t local_80;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint64_t local_68;
  uint32_t local_58;
  
  local_88 = *(uint8_t **)param_1[1];
  *(uint64_t *)param_1[1] = 0;
  local_98 = *(uint8_t (**)[16])*param_1;
  uStack_90 = *(uint32_t *)(*param_1 + 8);
  uStack_8c = *(uint32_t *)(*param_1 + 0xc);
  *param_1 = ZEXT816(0);
  local_68 = *(uint64_t *)param_1[3];
  *(uint64_t *)param_1[3] = 0;
  local_78 = *(uint32_t *)param_1[2];
  uStack_74 = *(uint32_t *)(param_1[2] + 4);
  uStack_70 = *(uint32_t *)(param_1[2] + 8);
  uStack_6c = *(uint32_t *)(param_1[2] + 0xc);
  param_1[2] = ZEXT816(0);
  local_58 = *(uint32_t *)param_1[4];
  func_0x18012d800();
  func_0x18012d800(param_2,&local_98);
  func_0x18012d990(&local_98);
  local_88 = *(uint8_t **)(param_1[5] + 8);
  *(uint64_t *)(param_1[5] + 8) = 0;
  local_98 = *(uint8_t (**)[16])(param_1[4] + 8);
  uStack_90 = *(uint32_t *)param_1[5];
  uStack_8c = *(uint32_t *)(param_1[5] + 4);
  *(uint8_t (*)[16])(param_1[4] + 8) = ZEXT816(0);
  local_68 = *(uint64_t *)(param_1[7] + 8);
  *(uint64_t *)(param_1[7] + 8) = 0;
  local_78 = *(uint32_t *)(param_1[6] + 8);
  uStack_74 = *(uint32_t *)(param_1[6] + 0xc);
  uStack_70 = *(uint32_t *)param_1[7];
  uStack_6c = *(uint32_t *)(param_1[7] + 4);
  *(uint8_t (*)[16])(param_1[6] + 8) = ZEXT816(0);
  local_58 = *(uint32_t *)(param_1[8] + 8);
  func_0x18012dab0(param_1[4] + 8,param_2[4] + 8);
  func_0x18012dab0(param_2[4] + 8,&local_98);
  func_0x18012dc30(&local_98);
  local_88 = *(uint8_t **)param_1[10];
  *(uint64_t *)param_1[10] = 0;
  local_98 = *(uint8_t (**)[16])param_1[9];
  uStack_90 = *(uint32_t *)(param_1[9] + 8);
  uStack_8c = *(uint32_t *)(param_1[9] + 0xc);
  param_1[9] = ZEXT816(0);
  local_68 = *(uint64_t *)param_1[0xc];
  *(uint64_t *)param_1[0xc] = 0;
  local_78 = *(uint32_t *)param_1[0xb];
  uStack_74 = *(uint32_t *)(param_1[0xb] + 4);
  uStack_70 = *(uint32_t *)(param_1[0xb] + 8);
  uStack_6c = *(uint32_t *)(param_1[0xb] + 0xc);
  param_1[0xb] = ZEXT816(0);
  local_58 = *(uint32_t *)param_1[0xd];
  func_0x18012dab0(param_1 + 9,param_2 + 9);
  func_0x18012dab0(param_2 + 9,&local_98);
  func_0x18012dc30(&local_98);
  func_0x18012d610(param_1[0xd] + 8,param_2[0xd] + 8);
  local_88 = &LAB_18012d200;
  local_78 = 0xf987f04e;
  local_80 = 0;
  uStack_74 = CONCAT31(uStack_74._1_3_,3);
  local_98 = param_1;
  (**(func_ptr_t *)(*(int64_t *)(param_1[0xd] + 8) + 0x28))(param_1[0xd] + 8,&local_98);
  lVal_2 = *(int64_t *)(param_1[6] + 8);
  lVal_1 = *(int64_t *)param_1[7];
  if (lVal_2 != lVal_1) {
    do {
      local_88 = &LAB_18012d200;
      local_78 = 0xf987f04e;
      local_80 = 0;
      uStack_74 = CONCAT31(uStack_74._1_3_,3);
      local_98 = param_1;
      (**(func_ptr_t *)(**(int64_t **)(lVal_2 + 0x10) + 0x28))(*(int64_t **)(lVal_2 + 0x10),&local_98);
      lVal_2 = lVal_2 + 0x20;
    } while (lVal_2 != lVal_1);
  }
  local_88 = &LAB_18012d200;
  local_78 = 0xf987f04e;
  local_80 = 0;
  uStack_74 = CONCAT31(uStack_74._1_3_,3);
  local_98 = param_2;
  (**(func_ptr_t *)(*(int64_t *)(param_2[0xd] + 8) + 0x28))(param_2[0xd] + 8,&local_98);
  lVal_2 = *(int64_t *)(param_2[6] + 8);
  lVal_1 = *(int64_t *)param_2[7];
  if (lVal_2 != lVal_1) {
    do {
      local_88 = &LAB_18012d200;
      local_78 = 0xf987f04e;
      local_80 = 0;
      uStack_74 = CONCAT31(uStack_74._1_3_,3);
      local_98 = param_2;
      (**(func_ptr_t *)(**(int64_t **)(lVal_2 + 0x10) + 0x28))(*(int64_t **)(lVal_2 + 0x10),&local_98);
      lVal_2 = lVal_2 + 0x20;
    } while (lVal_2 != lVal_1);
  }
  return;
}

// func_0x18012d610
void func_0x18012d610(uint8_t ***param_1,uint8_t ***param_2)
{
  char ch_1;
  uint8_t uVal_2;
  uint8_t **ptr2_U64_3;
  uint8_t **ptr2_U64_4;
  uint8_t **ptr2_U64_5;
  uint8_t **ptr2_U64_6;
  uint8_t **ptr2_U64_7;
  uint8_t **ptr2_U64_8;
  uint8_t **ptr2_U64_9;
  uint8_t **ptr2_U64_10;
  func_ptr_t fnPtr_11;
  uint8_t **ptr2_U64_12;
  uint8_t auStack_c8 [40];
  uint8_t **local_a0;
  uint8_t **local_98;
  uint8_t **ppuStack_90;
  uint8_t **local_88;
  uint8_t **ppuStack_80;
  uint8_t **local_78;
  uint8_t **ppuStack_70;
  uint8_t **local_68;
  uint8_t local_60;
  uint8_t **local_58;
  uint8_t **local_50;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_c8;
  ptr2_U64_3 = param_1[3];
  ptr2_U64_4 = param_1[1];
  ptr2_U64_5 = param_1[2];
  ptr2_U64_6 = param_1[6];
  ptr2_U64_7 = param_1[4];
  ptr2_U64_8 = param_1[5];
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 3) = ZEXT816(0);
  ptr2_U64_9 = param_1[7];
  ch_1 = *(char *)(param_1 + 8);
  ptr2_U64_12 = (uint8_t **)0x3ffff;
  if (ch_1 == '\x02') {
    ptr2_U64_12 = (uint8_t **)0x0;
  }
  ptr2_U64_10 = param_1[9];
  param_1[9] = ptr2_U64_12;
  local_a0 = &PTR_FUN_1806b5a10;
  local_50 = param_1[10];
  param_1[10] = param_2[10];
  ptr2_U64_12 = ptr2_U64_9;
  if (param_1 != param_2) {
    param_1[1] = param_2[1];
    param_2[1] = (uint8_t **)0x0;
    ptr2_U64_12 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = ptr2_U64_12;
    ptr2_U64_12 = param_1[3];
    param_1[3] = param_2[3];
    param_2[3] = ptr2_U64_12;
    ptr2_U64_12 = param_1[4];
    param_1[4] = param_2[4];
    param_2[4] = ptr2_U64_12;
    ptr2_U64_12 = param_1[5];
    param_1[5] = param_2[5];
    param_2[5] = ptr2_U64_12;
    ptr2_U64_12 = param_1[6];
    param_1[6] = param_2[6];
    param_2[6] = ptr2_U64_12;
    ptr2_U64_12 = param_1[7];
  }
  param_1[7] = param_2[7];
  param_2[7] = ptr2_U64_12;
  uVal_2 = *(uint8_t *)(param_1 + 8);
  *(uint8_t *)(param_1 + 8) = *(uint8_t *)(param_2 + 8);
  *(uint8_t *)(param_2 + 8) = uVal_2;
  local_58 = param_1[9];
  param_1[9] = param_2[9];
  param_2[10] = local_50;
  local_98 = ptr2_U64_4;
  ppuStack_90 = ptr2_U64_5;
  local_88 = ptr2_U64_3;
  ppuStack_80 = ptr2_U64_7;
  local_78 = ptr2_U64_8;
  ppuStack_70 = ptr2_U64_6;
  if (param_2 != &local_a0) {
    local_98 = param_2[1];
    ppuStack_90 = param_2[2];
    param_2[1] = ptr2_U64_4;
    param_2[2] = ptr2_U64_5;
    local_88 = param_2[3];
    ppuStack_80 = param_2[4];
    param_2[3] = ptr2_U64_3;
    param_2[4] = ptr2_U64_7;
    local_78 = param_2[5];
    ppuStack_70 = param_2[6];
    param_2[5] = ptr2_U64_8;
    param_2[6] = ptr2_U64_6;
  }
  local_68 = param_2[7];
  param_2[7] = ptr2_U64_9;
  local_60 = *(uint8_t *)(param_2 + 8);
  *(char *)(param_2 + 8) = ch_1;
  param_2[9] = ptr2_U64_10;
  func_0x18012dd40();
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_c8)) {
    return;
  }
  func_0x180673080(local_48 ^ (uint64_t)auStack_c8);
  fnPtr_11 = (func_ptr_t )swi(3);
  (*fnPtr_11)();
  return;
}

// func_0x18012d800
uint8_t (*func_0x18012d800(uint8_t (*param_1)[16],uint8_t (*param_2)[16]))[16]
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  
  if (param_1 != param_2) {
    lVal_4 = *(int64_t *)*param_1;
    if (lVal_4 != 0) {
      uVal_2 = *(int64_t *)param_1[1] - lVal_4;
      lVal_1 = lVal_4;
      if (0xfff < uVal_2) {
        lVal_1 = *(int64_t *)(lVal_4 + -8);
        if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_1)) goto LAB_18012d968;
        uVal_2 = uVal_2 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_1,uVal_2);
      *param_1 = ZEXT816(0);
      *(uint64_t *)param_1[1] = 0;
    }
    *(uint64_t *)*param_1 = *(uint64_t *)*param_2;
    *(uint64_t *)(*param_1 + 8) = *(uint64_t *)(*param_2 + 8);
    *(uint64_t *)param_1[1] = *(uint64_t *)param_2[1];
    *param_2 = ZEXT816(0);
    *(uint64_t *)param_2[1] = 0;
    lVal_4 = *(int64_t *)param_1[2];
    if (lVal_4 != 0) {
      lVal_1 = *(int64_t *)(param_1[2] + 8);
      if (lVal_4 != lVal_1) {
        lVal_4 = lVal_4 + 0x10;
        do {
          if (*(func_ptr_t *)(lVal_4 + 0x10) != (func_ptr_t )0x0) {
            (**(func_ptr_t *)(lVal_4 + 0x10))(lVal_4);
          }
          lVal_3 = lVal_4 + 0x20;
          lVal_4 = lVal_4 + 0x30;
        } while (lVal_3 != lVal_1);
        lVal_4 = *(int64_t *)param_1[2];
      }
      uVal_2 = *(int64_t *)param_1[3] - lVal_4;
      lVal_1 = lVal_4;
      if (0xfff < uVal_2) {
        lVal_1 = *(int64_t *)(lVal_4 + -8);
        if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_1)) {
LAB_18012d968:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_2 = uVal_2 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_1,uVal_2);
      param_1[2] = ZEXT816(0);
      *(uint64_t *)param_1[3] = 0;
    }
    *(uint64_t *)param_1[2] = *(uint64_t *)param_2[2];
    *(uint64_t *)(param_1[2] + 8) = *(uint64_t *)(param_2[2] + 8);
    *(uint64_t *)param_1[3] = *(uint64_t *)param_2[3];
    param_2[2] = ZEXT816(0);
    *(uint64_t *)param_2[3] = 0;
  }
  *(uint32_t *)param_1[4] = *(uint32_t *)param_2[4];
  return param_1;
}

// Unwind@18012d970
void Unwind_18012d970(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18012d990
void func_0x18012d990(uint8_t (*param_1)[16])
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  
  lVal_4 = *(int64_t *)param_1[2];
  if (lVal_4 != 0) {
    lVal_1 = *(int64_t *)(param_1[2] + 8);
    if (lVal_4 != lVal_1) {
      lVal_4 = lVal_4 + 0x10;
      do {
        if (*(func_ptr_t *)(lVal_4 + 0x10) != (func_ptr_t )0x0) {
          (**(func_ptr_t *)(lVal_4 + 0x10))(lVal_4);
        }
        lVal_3 = lVal_4 + 0x20;
        lVal_4 = lVal_4 + 0x30;
      } while (lVal_3 != lVal_1);
      lVal_4 = *(int64_t *)param_1[2];
    }
    uVal_2 = *(int64_t *)param_1[3] - lVal_4;
    lVal_1 = lVal_4;
    if (0xfff < uVal_2) {
      lVal_1 = *(int64_t *)(lVal_4 + -8);
      if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_1)) goto LAB_18012da80;
      uVal_2 = uVal_2 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_1,uVal_2);
    param_1[2] = ZEXT816(0);
    *(uint64_t *)param_1[3] = 0;
  }
  lVal_4 = *(int64_t *)*param_1;
  if (lVal_4 != 0) {
    uVal_2 = *(int64_t *)param_1[1] - lVal_4;
    lVal_1 = lVal_4;
    if (0xfff < uVal_2) {
      lVal_1 = *(int64_t *)(lVal_4 + -8);
      if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_1)) {
LAB_18012da80:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = uVal_2 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_1,uVal_2);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// Unwind@18012da90
void Unwind_18012da90(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18012dab0
uint8_t (*func_0x18012dab0(uint8_t (*param_1)[16],uint8_t (*param_2)[16]))[16]
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  if (param_1 != param_2) {
    lVal_6 = *(int64_t *)*param_1;
    if (lVal_6 != 0) {
      uVal_5 = *(int64_t *)param_1[1] - lVal_6;
      lVal_4 = lVal_6;
      if (0xfff < uVal_5) {
        lVal_4 = *(int64_t *)(lVal_6 + -8);
        if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) goto LAB_18012dc2c;
        uVal_5 = uVal_5 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_4,uVal_5);
      *param_1 = ZEXT816(0);
      *(uint64_t *)param_1[1] = 0;
    }
    *(uint64_t *)*param_1 = *(uint64_t *)*param_2;
    *(uint64_t *)(*param_1 + 8) = *(uint64_t *)(*param_2 + 8);
    *(uint64_t *)param_1[1] = *(uint64_t *)param_2[1];
    *param_2 = ZEXT816(0);
    *(uint64_t *)param_2[1] = 0;
    lVal_6 = *(int64_t *)param_1[2];
    if (lVal_6 != 0) {
      lVal_4 = *(int64_t *)(param_1[2] + 8);
      if (lVal_6 == lVal_4) {
        uVal_5 = *(int64_t *)param_1[3] - lVal_6;
      }
      else {
        do {
          pLong_3 = *(int64_t **)(lVal_6 + 0x18);
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
          lVal_6 = lVal_6 + 0x20;
        } while (lVal_6 != lVal_4);
        lVal_6 = *(int64_t *)param_1[2];
        uVal_5 = *(int64_t *)param_1[3] - lVal_6;
      }
      if (0xfff < uVal_5) {
        if (0x1f < (uint64_t)((lVal_6 + -8) - *(int64_t *)(lVal_6 + -8))) {
LAB_18012dc2c:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_5 = uVal_5 + 0x27;
        lVal_6 = *(int64_t *)(lVal_6 + -8);
      }
      thunk_FUN_180695dd0(lVal_6,uVal_5);
      param_1[2] = ZEXT816(0);
      *(uint64_t *)param_1[3] = 0;
    }
    *(uint64_t *)param_1[2] = *(uint64_t *)param_2[2];
    *(uint64_t *)(param_1[2] + 8) = *(uint64_t *)(param_2[2] + 8);
    *(uint64_t *)param_1[3] = *(uint64_t *)param_2[3];
    param_2[2] = ZEXT816(0);
    *(uint64_t *)param_2[3] = 0;
  }
  *(uint32_t *)param_1[4] = *(uint32_t *)param_2[4];
  return param_1;
}

// func_0x18012dc30
void func_0x18012dc30(uint8_t (*param_1)[16])
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  lVal_6 = *(int64_t *)param_1[2];
  if (lVal_6 != 0) {
    lVal_4 = *(int64_t *)(param_1[2] + 8);
    if (lVal_6 == lVal_4) {
      uVal_5 = *(int64_t *)param_1[3] - lVal_6;
    }
    else {
      do {
        pLong_3 = *(int64_t **)(lVal_6 + 0x18);
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
        lVal_6 = lVal_6 + 0x20;
      } while (lVal_6 != lVal_4);
      lVal_6 = *(int64_t *)param_1[2];
      uVal_5 = *(int64_t *)param_1[3] - lVal_6;
    }
    if (0xfff < uVal_5) {
      if (0x1f < (uint64_t)((lVal_6 + -8) - *(int64_t *)(lVal_6 + -8))) goto LAB_18012dd32;
      uVal_5 = uVal_5 + 0x27;
      lVal_6 = *(int64_t *)(lVal_6 + -8);
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
    param_1[2] = ZEXT816(0);
    *(uint64_t *)param_1[3] = 0;
  }
  lVal_6 = *(int64_t *)*param_1;
  if (lVal_6 != 0) {
    uVal_5 = *(int64_t *)param_1[1] - lVal_6;
    lVal_4 = lVal_6;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_6 + -8);
      if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_4)) {
LAB_18012dd32:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// func_0x18012dd40
void func_0x18012dd40(uint64_t *param_1)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t *pLong_5;
  
  *param_1 = &PTR_FUN_1806b59c0;
  pLong_1 = (int64_t *)param_1[2];
  for (pLong_5 = (int64_t *)param_1[1]; pLong_5 != pLong_1; pLong_5 = pLong_5 + 1) {
    lVal_2 = *pLong_5;
    if (lVal_2 != 0) {
      if (0x1f < (uint64_t)((lVal_2 + -8) - *(int64_t *)(lVal_2 + -8))) goto LAB_18012de30;
      thunk_FUN_180695dd0(*(int64_t *)(lVal_2 + -8),0x2027);
      *pLong_5 = 0;
    }
  }
  lVal_2 = param_1[4];
  if (lVal_2 != 0) {
    uVal_4 = param_1[6] - lVal_2;
    lVal_3 = lVal_2;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) goto LAB_18012de30;
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
    param_1[6] = 0;
  }
  lVal_2 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 1);
  if (lVal_2 != 0) {
    uVal_4 = param_1[3] - lVal_2;
    lVal_3 = lVal_2;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) {
LAB_18012de30:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
    param_1[3] = 0;
  }
  return;
}

// func_0x18012dfb0
uint32_t * func_0x18012dfb0(int64_t param_1,uint32_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t *local_18;
  int64_t local_10;
  
  uVal_3 = (uint)param_3;
  lVal_4 = CONCAT71((int7)((uint64_t)param_4 >> 8),uVal_3 < 0xfffc0000);
  if (uVal_3 < 0xfffc0000 && (uVal_3 & 0x3ffff) != 0x3ffff) {
    uVal_5 = (uint64_t)((uVal_3 & 0x3ffff) >> 0xb);
    lVal_4 = *(int64_t *)(param_1 + 8);
    if (((((uint64_t)(*(int64_t *)(param_1 + 0x10) - lVal_4 >> 3) <= uVal_5) ||
         (lVal_2 = *(int64_t *)(lVal_4 + uVal_5 * 8), lVal_2 == 0)) ||
        (uVal_3 = *(uint *)(lVal_2 + (uint64_t)(uVal_3 & 0x7ff) * 4), 0x3ffe < uVal_3 >> 0x12)) ||
       (uVal_5 = *(uint64_t *)(param_1 + 0x48), uVal_5 <= (uVal_3 & 0x3ffff))) goto LAB_18012e0e8;
  }
  else {
    uVal_5 = *(uint64_t *)(param_1 + 0x48);
  }
  if (uVal_5 == *(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x20) >> 2) {
    uVal_3 = (uint)*(int64_t *)(param_1 + 0x50) & 0x3ffff;
    lVal_2 = (uint64_t)(uVal_3 != 0x3ffff) + *(int64_t *)(param_1 + 0x50);
    lVal_4 = *(int64_t *)(param_1 + 8);
    uVal_5 = *(int64_t *)(param_1 + 0x10) - lVal_4 >> 3;
    *(int64_t *)(param_1 + 0x50) = lVal_2;
    uVal_6 = (uint64_t)(uVal_3 >> 0xb);
    if (uVal_6 < uVal_5) {
      param_3 = (uint64_t)uVal_3;
      do {
        lVal_1 = *(int64_t *)(lVal_4 + uVal_6 * 8);
        if (((lVal_1 == 0) || ((int)param_3 == 0x3ffff)) ||
           (0xfffbffff < *(uint *)(lVal_1 + (uint64_t)(uVal_3 & 0x7ff) * 4))) break;
        uVal_3 = (uint)lVal_2 & 0x3ffff;
        lVal_2 = lVal_2 + (uint64_t)(uVal_3 != 0x3ffff);
        *(int64_t *)(param_1 + 0x50) = lVal_2;
        uVal_6 = (uint64_t)(uVal_3 >> 0xb);
        param_3 = (uint64_t)uVal_3;
      } while (uVal_6 < uVal_5);
    }
    else {
      param_3 = (uint64_t)uVal_3;
    }
  }
  else {
    param_3 = (uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x20) + uVal_5 * 4);
  }
LAB_18012e0e8:
  func_0x18012c2c0(param_1,&local_18,param_3,CONCAT71((int7)((uint64_t)lVal_4 >> 8),1),0);
  *param_2 = *(uint32_t *)(*local_18 + -4 + local_10 * 4);
  return param_2;
}

// func_0x18012e150
int64_t * func_0x18012e150(int64_t param_1,uint param_2)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int64_t *pLong_5;
  int64_t lVal_6;
  int64_t local_68 [2];
  uint8_t *local_58;
  uint64_t local_50;
  uint32_t local_48;
  uint8_t local_44;
  uint local_3c;
  uint8_t local_38 [16];
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  pLong_5 = (int64_t *)
           (*(int64_t *)(param_1 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(param_1 + 0x50) - *(int64_t *)(param_1 + 0x48)) >> 3) -
            1U & param_2) * 8);
  lVal_3 = *(int64_t *)(param_1 + 0x68);
  do {
    if (*pLong_5 == -1) goto LAB_18012e1b9;
    lVal_6 = *pLong_5 * 0x20;
    pLong_5 = (int64_t *)(lVal_3 + lVal_6);
  } while (*(uint *)(lVal_3 + 8 + lVal_6) != param_2);
  if (*(int64_t *)(param_1 + 0x70) == lVal_3 + lVal_6) {
LAB_18012e1b9:
    local_38 = ZEXT816(0);
    local_3c = param_2;
    pLong_5 = (int64_t *)func_0x180672de0(0x78);
    pLong_5[1] = 0x100000001;
    *pLong_5 = (int64_t)&PTR_FUN_1806b5a60;
    if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x1c39c) < DAT_18083f778) {
      func_0x180672ec0(&DAT_18083f778);
      if (DAT_18083f778 == -1) {
        func_0x18012e900(&DAT_18083f760);
        _Init_thread_footer(&DAT_18083f778);
      }
    }
    local_38._0_8_ = pLong_5 + 2;
    *(uint8_t (*)[16])(pLong_5 + 7) = ZEXT816(0);
    *(uint8_t (*)[16])(pLong_5 + 5) = ZEXT816(0);
    *(uint8_t (*)[16])(pLong_5 + 3) = ZEXT816(0);
    pLong_5[9] = (int64_t)&DAT_18083f760;
    *(uint8_t *)(pLong_5 + 10) = 1;
    pLong_5[0xb] = 0x3ffff;
    pLong_5[2] = (int64_t)&PTR_LAB_1806b5a80;
    *(uint8_t (*)[16])(pLong_5 + 0xc) = ZEXT816(0);
    pLong_5[0xe] = 0;
    local_38._8_8_ = pLong_5;
    func_0x18012cbe0(param_1 + 0x48,local_68,&local_3c,local_38);
    local_58 = &LAB_18012d200;
    local_48 = 0xf987f04e;
    local_50 = 0;
    local_44 = 3;
    local_68[0] = param_1;
    (**(func_ptr_t *)(*(int64_t *)local_38._0_8_ + 0x28))(local_38._0_8_,local_68);
    pLong_4 = (int64_t *)local_38._8_8_;
    pLong_5 = (int64_t *)local_38._0_8_;
    if ((int64_t *)local_38._8_8_ != (int64_t *)0x0) {
      LOCK();
      pLong_1 = (int64_t *)(local_38._8_8_ + 8);
      *(int *)pLong_1 = *(int *)pLong_1 + -1;
      UNLOCK();
      if (*(int *)pLong_1 == 0) {
        (***(func_ptr_t **)local_38._8_8_)(local_38._8_8_);
        LOCK();
        pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (*pInt_2 == 0) {
          (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
        }
      }
    }
  }
  else {
    pLong_5 = *(int64_t **)(lVal_3 + lVal_6 + 0x10);
  }
  return pLong_5;
}

// Unwind@18012e320
void Unwind_18012e320(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x50);
  return;
}

// func_0x18012e350
void func_0x18012e350(int64_t param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018012e35e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*(int64_t *)(param_1 + 0x10) + 0x30))(param_1 + 0x10,0);
  return;
}

// func_0x18012e370
void func_0x18012e370(int64_t *param_1)
{
  (**(func_ptr_t *)(*param_1 + 0x10))(param_1,0);
  thunk_FUN_180695dd0(param_1,0x78);
  return;
}

// Catch_All@18012e7e0
void Catch_All_18012e7e0(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  *(uint64_t *)(param_2 + 0x40) = *(uint64_t *)(param_2 + 0x60);
  *(int64_t *)(param_2 + 0x48) = *(int64_t *)(param_2 + 0x68) + -1;
  *(uint32_t *)(param_2 + 0x30) = *(uint32_t *)(param_2 + 0x60);
  *(uint32_t *)(param_2 + 0x34) = *(uint32_t *)(param_2 + 100);
  *(uint32_t *)(param_2 + 0x38) = *(uint32_t *)(param_2 + 0x68);
  *(uint32_t *)(param_2 + 0x3c) = *(uint32_t *)(param_2 + 0x6c);
  func_0x18012bf50(*(uint64_t *)(param_2 + 0x58),param_2 + 0x30,param_2 + 0x40);
  func_0x18067a120(0,0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18012e900
void func_0x18012e900(int *param_1)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f780) {
    func_0x180672ec0(&DAT_18083f780);
    if (DAT_18083f780 == -1) {
      DAT_18083f77c = DAT_18083f31c;
      DAT_18083f31c = DAT_18083f31c + 1;
      _Init_thread_footer(&DAT_18083f780);
    }
  }
  *param_1 = DAT_18083f77c;
  param_1[1] = 0x119e772b;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  return;
}

// func_0x18012e990
int64_t func_0x18012e990(int64_t param_1,uint64_t param_2)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t local_60;
  uint64_t local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVal_6 = param_2 >> 7;
  lVal_5 = *(int64_t *)(param_1 + 0x50);
  lVal_2 = *(int64_t *)(param_1 + 0x58);
  uVal_4 = lVal_2 - lVal_5 >> 3;
  if (uVal_4 <= uVal_6) {
    pLong_1 = (int64_t *)(param_1 + 0x50);
    local_60 = 0;
    if (uVal_6 < (uint64_t)(*(int64_t *)(param_1 + 0x60) - lVal_5 >> 3)) {
      lVal_5 = (uVal_6 + 1) - uVal_4;
      func_0x1806ab010(lVal_2,0,lVal_5 * 8);
      lVal_2 = lVal_2 + lVal_5 * 8;
      *(int64_t *)(param_1 + 0x58) = lVal_2;
    }
    else {
      func_0x18012ca10(pLong_1,uVal_6 + 1,&local_60);
      lVal_2 = *(int64_t *)(param_1 + 0x58);
    }
    lVal_5 = *pLong_1;
    uVal_3 = lVal_2 - lVal_5 >> 3;
    local_50 = pLong_1;
    if (uVal_4 < uVal_3) {
      do {
        local_58 = uVal_4;
        lVal_2 = func_0x180672de0(0x9027);
        uVal_4 = lVal_2 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_4 - 8) = lVal_2;
        *(uint64_t *)(*pLong_1 + local_58 * 8) = uVal_4;
        uVal_4 = local_58 + 1;
      } while (uVal_3 != uVal_4);
      lVal_5 = *pLong_1;
    }
  }
  return (uint64_t)(((uint)param_2 & 0x7f) * 0x120) + *(int64_t *)(lVal_5 + uVal_6 * 8);
}

// Catch_All@18012eaa0
void Catch_All_18012eaa0(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  func_0x18012ead0(*(uint64_t *)(param_2 + 0x38),*(uint64_t *)(param_2 + 0x30));
  func_0x18067a120(0,0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18012ead0
void func_0x18012ead0(int64_t *param_1,uint64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint8_t auStack_48 [47];
  uint8_t local_19;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  lVal_1 = *param_1;
  lVal_2 = param_1[1];
  uVal_5 = lVal_2 - lVal_1 >> 3;
  lVal_4 = param_2 - uVal_5;
  if (uVal_5 <= param_2) {
    if (uVal_5 <= param_2 && lVal_4 != 0) {
      if ((uint64_t)(param_1[2] - lVal_1 >> 3) < param_2) {
        func_0x18007bf80(param_1,param_2,&local_19);
      }
      else {
        func_0x1806ab010(lVal_2,0,lVal_4 * 8);
        param_1[1] = lVal_2 + lVal_4 * 8;
      }
    }
  }
  else {
    param_1[1] = lVal_1 + param_2 * 8;
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// func_0x18012eb70
void func_0x18012eb70(uint64_t *param_1,uint64_t *param_2)
{
  uint32_t uVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint32_t uVal_14;
  uint32_t uVal_15;
  uint32_t uVal_16;
  uint32_t uVal_17;
  uint32_t uVal_18;
  uint32_t uVal_19;
  uint32_t uVal_20;
  uint32_t uVal_21;
  uint32_t uVal_22;
  uint32_t uVal_23;
  uint64_t uVal_24;
  int64_t lVal_25;
  uint8_t local_148 [264];
  
  uVal_3 = *param_1;
  uVal_4 = param_1[1];
  uVal_13 = *(uint32_t *)(param_1 + 2);
  uVal_14 = *(uint32_t *)((int64_t)param_1 + 0x14);
  uVal_15 = *(uint32_t *)(param_1 + 3);
  uVal_16 = *(uint32_t *)((int64_t)param_1 + 0x1c);
  uVal_5 = param_1[4];
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(uint8_t *)(param_1 + 1) = 0;
  uVal_6 = param_1[5];
  *param_1 = 0;
  param_1[5] = 0;
  uVal_9 = *(uint32_t *)(param_1 + 6);
  uVal_10 = *(uint32_t *)((int64_t)param_1 + 0x34);
  uVal_11 = *(uint32_t *)(param_1 + 7);
  uVal_12 = *(uint32_t *)((int64_t)param_1 + 0x3c);
  uVal_2 = param_1[8];
  uVal_1 = *(uint32_t *)(param_1 + 9);
  func_0x1806aa960(local_148,(int64_t)param_1 + 0x4c,0xd0);
  *param_1 = *param_2;
  if (param_1 != param_2) {
    param_1[3] = 0;
    param_1[4] = 0xf;
    *(uint8_t *)(param_1 + 1) = 0;
    uVal_17 = *(uint32_t *)(param_2 + 1);
    uVal_18 = *(uint32_t *)((int64_t)param_2 + 0xc);
    uVal_19 = *(uint32_t *)(param_2 + 2);
    uVal_20 = *(uint32_t *)((int64_t)param_2 + 0x14);
    uVal_21 = *(uint32_t *)((int64_t)param_2 + 0x1c);
    uVal_22 = *(uint32_t *)(param_2 + 4);
    uVal_23 = *(uint32_t *)((int64_t)param_2 + 0x24);
    *(uint32_t *)(param_1 + 3) = *(uint32_t *)(param_2 + 3);
    *(uint32_t *)((int64_t)param_1 + 0x1c) = uVal_21;
    *(uint32_t *)(param_1 + 4) = uVal_22;
    *(uint32_t *)((int64_t)param_1 + 0x24) = uVal_23;
    *(uint32_t *)(param_1 + 1) = uVal_17;
    *(uint32_t *)((int64_t)param_1 + 0xc) = uVal_18;
    *(uint32_t *)(param_1 + 2) = uVal_19;
    *(uint32_t *)((int64_t)param_1 + 0x14) = uVal_20;
    param_2[3] = 0;
    param_2[4] = 0xf;
    *(uint8_t *)(param_2 + 1) = 0;
  }
  param_1[5] = param_2[5];
  param_2[5] = 0;
  uVal_17 = *(uint32_t *)((int64_t)param_2 + 0x34);
  uVal_18 = *(uint32_t *)(param_2 + 7);
  uVal_19 = *(uint32_t *)((int64_t)param_2 + 0x3c);
  *(uint32_t *)(param_1 + 6) = *(uint32_t *)(param_2 + 6);
  *(uint32_t *)((int64_t)param_1 + 0x34) = uVal_17;
  *(uint32_t *)(param_1 + 7) = uVal_18;
  *(uint32_t *)((int64_t)param_1 + 0x3c) = uVal_19;
  *(uint32_t *)(param_1 + 8) = *(uint32_t *)(param_2 + 8);
  *(uint32_t *)((int64_t)param_1 + 0x44) = *(uint32_t *)((int64_t)param_2 + 0x44);
  *(uint32_t *)(param_1 + 9) = *(uint32_t *)(param_2 + 9);
  func_0x1806aa960((int64_t)param_1 + 0x4c,(int64_t)param_2 + 0x4c,0xd0);
  *param_2 = uVal_3;
  uVal_7 = param_2[4];
  if (0xf < uVal_7) {
    lVal_8 = param_2[1];
    uVal_24 = uVal_7 + 1;
    lVal_25 = lVal_8;
    if (0xfff < uVal_24) {
      lVal_25 = *(int64_t *)(lVal_8 + -8);
      if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_25)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_24 = uVal_7 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_25,uVal_24);
  }
  param_2[1] = uVal_4;
  *(uint32_t *)(param_2 + 2) = uVal_13;
  *(uint32_t *)((int64_t)param_2 + 0x14) = uVal_14;
  *(uint32_t *)(param_2 + 3) = uVal_15;
  *(uint32_t *)((int64_t)param_2 + 0x1c) = uVal_16;
  param_2[4] = uVal_5;
  param_2[5] = uVal_6;
  *(uint32_t *)(param_2 + 6) = uVal_9;
  *(uint32_t *)((int64_t)param_2 + 0x34) = uVal_10;
  *(uint32_t *)(param_2 + 7) = uVal_11;
  *(uint32_t *)((int64_t)param_2 + 0x3c) = uVal_12;
  param_2[8] = uVal_2;
  *(uint32_t *)(param_2 + 9) = uVal_1;
  func_0x1806aa960((int64_t)param_2 + 0x4c,local_148,0xd0);
  return;
}

// func_0x18012ed50
uint64_t * func_0x18012ed50(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t *pU64_8;
  uint64_t *pU64_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  
  uVal_11 = 0xfffffffffffffffe;
  pU64_8 = (uint64_t *)*param_1;
  *pU64_8 = *param_2;
  *(uint8_t (*)[16])(pU64_8 + 1) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_8 + 3) = ZEXT816(0);
  uVal_1 = param_2[3];
  if ((uint64_t)param_2[4] < 0x10) {
    pU64_9 = param_2 + 1;
  }
  else {
    pU64_9 = (uint64_t *)param_2[1];
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      pU64_8[3] = uVal_1;
      pU64_8[4] = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_9 + 4);
      uVal_4 = *(uint32_t *)(pU64_9 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_9 + 0xc);
      *(uint32_t *)(pU64_8 + 1) = *(uint32_t *)pU64_9;
      *(uint32_t *)((int64_t)pU64_8 + 0xc) = uVal_3;
      *(uint32_t *)(pU64_8 + 2) = uVal_4;
      *(uint32_t *)((int64_t)pU64_8 + 0x14) = uVal_5;
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
      pU64_8[1] = uVal_6;
      pU64_8[3] = uVal_1;
      pU64_8[4] = uVal_10;
      func_0x1806aa960(uVal_6,pU64_9,uVal_1 + 1,param_4,uVal_11);
    }
    pU64_8[5] = 0;
    uVal_3 = *(uint32_t *)((int64_t)param_2 + 0x34);
    uVal_4 = *(uint32_t *)(param_2 + 7);
    uVal_5 = *(uint32_t *)((int64_t)param_2 + 0x3c);
    *(uint32_t *)(pU64_8 + 6) = *(uint32_t *)(param_2 + 6);
    *(uint32_t *)((int64_t)pU64_8 + 0x34) = uVal_3;
    *(uint32_t *)(pU64_8 + 7) = uVal_4;
    *(uint32_t *)((int64_t)pU64_8 + 0x3c) = uVal_5;
    *(uint32_t *)(pU64_8 + 8) = *(uint32_t *)(param_2 + 8);
    *(uint32_t *)((int64_t)pU64_8 + 0x44) = *(uint32_t *)((int64_t)param_2 + 0x44);
    *(uint32_t *)(pU64_8 + 9) = *(uint32_t *)(param_2 + 9);
    func_0x1806aa960((int64_t)pU64_8 + 0x4c,(int64_t)param_2 + 0x4c,0xd0,param_4,uVal_11);
    return pU64_8;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_8 = (uint64_t *)(*fnPtr_2)();
  return pU64_8;
}

// Unwind@18012ee80
void Unwind_18012ee80(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18012ef40
void Unwind_18012ef40(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18012ef60
void func_0x18012ef60(int64_t param_1,uint64_t param_2)
{
  uint8_t (*pArr16_1)[16];
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint8_t local_31;
  int64_t local_30;
  
  uVal_6 = *(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x20) >> 2;
  uVal_8 = param_2;
  if (param_2 < uVal_6) {
    do {
      if (*(uint *)(*(int64_t *)(param_1 + 0x20) + uVal_8 * 4) < 0xfffc0000) {
        lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x50) + (uVal_8 >> 7) * 8);
        uVal_9 = (uint64_t)(((uint)uVal_8 & 0x7f) * 0x120);
        lVal_3 = lVal_4 + uVal_9;
        uVal_9 = *(uint64_t *)(lVal_4 + 0x20 + uVal_9);
        if (0xf < uVal_9) {
          lVal_4 = *(int64_t *)(lVal_3 + 8);
          uVal_2 = uVal_9 + 1;
          lVal_7 = lVal_4;
          if (0xfff < uVal_2) {
            lVal_7 = *(int64_t *)(lVal_4 + -8);
            if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_18012f171;
            uVal_2 = uVal_9 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_7,uVal_2);
        }
        *(uint64_t *)(lVal_3 + 0x18) = 0;
        *(uint64_t *)(lVal_3 + 0x20) = 0xf;
        *(uint8_t *)(lVal_3 + 8) = 0;
      }
      uVal_8 = uVal_8 + 1;
    } while (uVal_6 != uVal_8);
  }
  uVal_6 = param_2 + 0x7f >> 7;
  pArr16_1 = (uint8_t (*)[16])(param_1 + 0x50);
  lVal_3 = *(int64_t *)(param_1 + 0x50);
  lVal_4 = *(int64_t *)(param_1 + 0x58);
  uVal_9 = lVal_4 - lVal_3 >> 3;
  uVal_8 = uVal_6;
  if (uVal_6 < uVal_9) {
    do {
      lVal_3 = *(int64_t *)(*(int64_t *)*pArr16_1 + uVal_8 * 8);
      lVal_4 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_4)) goto LAB_18012f171;
      thunk_FUN_180695dd0(lVal_4,0x9027);
      uVal_8 = uVal_8 + 1;
    } while (uVal_9 != uVal_8);
    lVal_3 = *(int64_t *)(param_1 + 0x50);
    lVal_4 = *(int64_t *)(param_1 + 0x58);
    uVal_9 = lVal_4 - lVal_3 >> 3;
  }
  lVal_7 = uVal_6 - uVal_9;
  if (uVal_9 <= uVal_6) {
    lVal_5 = lVal_4;
    if (uVal_9 <= uVal_6 && lVal_7 != 0) {
      if (uVal_6 <= (uint64_t)(*(int64_t *)(param_1 + 0x60) - lVal_3 >> 3)) {
        lVal_5 = lVal_4 + lVal_7 * 8;
        func_0x1806ab010(lVal_4,0,lVal_7 * 8);
        *(int64_t *)(param_1 + 0x58) = lVal_5;
        lVal_3 = *(int64_t *)(param_1 + 0x60);
        if (lVal_5 == lVal_3) {
          return;
        }
        goto LAB_18012f0e5;
      }
      func_0x18007bf80(pArr16_1,uVal_6,&local_31);
      lVal_5 = *(int64_t *)(param_1 + 0x58);
    }
    lVal_3 = *(int64_t *)(param_1 + 0x60);
    if (lVal_5 == lVal_3) {
      return;
    }
  }
  else {
    lVal_5 = lVal_3 + uVal_6 * 8;
    *(int64_t *)(param_1 + 0x58) = lVal_5;
    lVal_3 = *(int64_t *)(param_1 + 0x60);
    if (lVal_5 == lVal_3) {
      return;
    }
  }
LAB_18012f0e5:
  lVal_4 = *(int64_t *)*pArr16_1;
  if (lVal_4 == lVal_5) {
    if (lVal_5 != 0) {
      uVal_8 = lVal_3 - lVal_5;
      if (0xfff < uVal_8) {
        lVal_4 = *(int64_t *)(lVal_4 + -8);
        if (0x1f < (lVal_5 - lVal_4) - 8U) {
LAB_18012f171:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_8 = uVal_8 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_4,uVal_8);
      *pArr16_1 = ZEXT816(0);
      *(uint64_t *)(param_1 + 0x60) = 0;
    }
  }
  else {
    local_30 = lVal_5 - lVal_4 >> 3;
    func_0x18007fe80(pArr16_1,&local_30);
  }
  return;
}

// func_0x18012f1b0
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
int64_t ** func_0x18012f1b0(int64_t **param_1,int64_t **param_2,int64_t **param_3,uint64_t *param_4)
{
  char ch_1;
  char ch_2;
  int iVal_3;
  int64_t **ptr2_Long_4;
  bool bFlag_5;
  uint64_t *pU64_6;
  int64_t *pLong_7;
  int64_t *pLong_8;
  uint uVal_9;
  int64_t *pLong_10;
  int64_t *pLong_11;
  int64_t *pLong_12;
  int64_t **ptr2_Long_13;
  int64_t *pLong_14;
  int64_t **ptr2_Long_15;
  uint64_t local_58;
  uint64_t *local_50;
  
  pLong_14 = *param_1;
  if (*(char *)((int64_t)param_3 + 0x19) == '\0') {
    ptr2_Long_4 = (int64_t **)*pLong_14;
    pLong_11 = param_3[6];
    if (param_3[7] < (int64_t *)0x10) {
      ptr2_Long_13 = param_3 + 4;
    }
    else {
      ptr2_Long_13 = (int64_t **)param_3[4];
    }
    local_50 = (uint64_t *)*param_4;
    pLong_10 = (int64_t *)param_4[2];
    local_58 = param_4[3];
    pU64_6 = param_4;
    if (0xf < local_58) {
      pU64_6 = local_50;
    }
    pLong_7 = pLong_10;
    if (pLong_11 < pLong_10) {
      pLong_7 = pLong_11;
    }
    iVal_3 = memcmp(pU64_6,ptr2_Long_13,(size_t)pLong_7);
    bFlag_5 = pLong_10 < pLong_11;
    if (iVal_3 != 0) {
      bFlag_5 = iVal_3 < 0;
    }
    if (param_3 == ptr2_Long_4) {
      if (!bFlag_5) goto LAB_18012f484;
    }
    else {
      if (!bFlag_5) {
        iVal_3 = memcmp(ptr2_Long_13,pU64_6,(size_t)pLong_7);
        bFlag_5 = pLong_11 < pLong_10;
        if (iVal_3 != 0) {
          bFlag_5 = iVal_3 < 0;
        }
        if (!bFlag_5) {
          *param_2 = (int64_t *)param_3;
          *(uint32_t *)(param_2 + 1) = 0;
          *(uint8_t *)(param_2 + 2) = 1;
          return param_2;
        }
        ch_2 = *(char *)((int64_t)param_3[2] + 0x19);
        ptr2_Long_4 = (int64_t **)param_3[2];
        if (ch_2 == '\0') {
          do {
            ptr2_Long_13 = ptr2_Long_4;
            ptr2_Long_4 = (int64_t **)*ptr2_Long_13;
          } while (*(char *)((int64_t)*ptr2_Long_13 + 0x19) == '\0');
        }
        else {
          ch_1 = *(char *)((int64_t)param_3[1] + 0x19);
          ptr2_Long_15 = (int64_t **)param_3[1];
          ptr2_Long_4 = param_3;
          while (ptr2_Long_13 = ptr2_Long_15, ch_1 == '\0') {
            if (ptr2_Long_4 != (int64_t **)ptr2_Long_13[2]) {
              ch_1 = *(char *)((int64_t)ptr2_Long_13 + 0x19);
              goto joined_r0x00018012f58a;
            }
            ptr2_Long_15 = (int64_t **)ptr2_Long_13[1];
            ptr2_Long_4 = ptr2_Long_13;
            ch_1 = *(char *)((int64_t)ptr2_Long_13[1] + 0x19);
          }
        }
        ch_1 = *(char *)((int64_t)ptr2_Long_13 + 0x19);
joined_r0x00018012f58a:
        if (ch_1 == '\0') {
          pLong_11 = ptr2_Long_13[6];
          if (ptr2_Long_13[7] < (int64_t *)0x10) {
            ptr2_Long_4 = ptr2_Long_13 + 4;
          }
          else {
            ptr2_Long_4 = (int64_t **)ptr2_Long_13[4];
          }
          pLong_7 = pLong_10;
          if (pLong_11 < pLong_10) {
            pLong_7 = pLong_11;
          }
          iVal_3 = memcmp(pU64_6,ptr2_Long_4,(size_t)pLong_7);
          bFlag_5 = pLong_10 < pLong_11;
          if (iVal_3 != 0) {
            bFlag_5 = iVal_3 < 0;
          }
          if (!bFlag_5) goto LAB_18012f484;
        }
        if (ch_2 == '\0') {
          *param_2 = (int64_t *)ptr2_Long_13;
          *(uint32_t *)(param_2 + 1) = 1;
          goto LAB_18012f59f;
        }
        goto LAB_18012f595;
      }
      ptr2_Long_4 = (int64_t **)*param_3;
      if (*(char *)((int64_t)*param_3 + 0x19) == '\0') {
        do {
          ptr2_Long_13 = ptr2_Long_4;
          ptr2_Long_4 = (int64_t **)ptr2_Long_13[2];
        } while (*(char *)((int64_t)ptr2_Long_13[2] + 0x19) == '\0');
LAB_18012f2dd:
        pLong_11 = ptr2_Long_13[6];
        if (ptr2_Long_13[7] < (int64_t *)0x10) goto LAB_18012f400;
LAB_18012f2ec:
        ptr2_Long_4 = (int64_t **)ptr2_Long_13[4];
      }
      else {
        ptr2_Long_13 = (int64_t **)param_3[1];
        ptr2_Long_4 = param_3;
        if (*(char *)((int64_t)ptr2_Long_13 + 0x19) != '\0') goto LAB_18012f2dd;
        do {
          ptr2_Long_15 = ptr2_Long_13;
          if (ptr2_Long_4 != (int64_t **)*ptr2_Long_13) break;
          ptr2_Long_15 = (int64_t **)ptr2_Long_13[1];
          ptr2_Long_4 = ptr2_Long_13;
          ptr2_Long_13 = ptr2_Long_15;
        } while (*(char *)((int64_t)ptr2_Long_15 + 0x19) == '\0');
        ptr2_Long_13 = ptr2_Long_15;
        if (*(char *)((int64_t)ptr2_Long_4 + 0x19) != '\0') {
          ptr2_Long_13 = ptr2_Long_4;
        }
        pLong_11 = ptr2_Long_13[6];
        if (&DAT_0000000f < ptr2_Long_13[7]) goto LAB_18012f2ec;
LAB_18012f400:
        ptr2_Long_4 = ptr2_Long_13 + 4;
      }
      pLong_7 = pLong_11;
      if (pLong_10 < pLong_11) {
        pLong_7 = pLong_10;
      }
      iVal_3 = memcmp(ptr2_Long_4,pU64_6,(size_t)pLong_7);
      bFlag_5 = pLong_11 < pLong_10;
      if (iVal_3 != 0) {
        bFlag_5 = iVal_3 < 0;
      }
      if (!bFlag_5) goto LAB_18012f484;
      if (*(char *)((int64_t)ptr2_Long_13[2] + 0x19) != '\0') {
        *param_2 = (int64_t *)ptr2_Long_13;
        goto LAB_18012f598;
      }
    }
    *param_2 = (int64_t *)param_3;
    *(uint32_t *)(param_2 + 1) = 1;
  }
  else {
    param_3 = (int64_t **)pLong_14[2];
    if (*(char *)(pLong_14[1] + 0x19) == '\0') {
      local_50 = (uint64_t *)*param_4;
      local_58 = param_4[3];
      pU64_6 = param_4;
      if (0xf < local_58) {
        pU64_6 = local_50;
      }
      pLong_10 = (int64_t *)param_4[2];
      pLong_11 = param_3[6];
      if (param_3[7] < (int64_t *)0x10) {
        ptr2_Long_4 = param_3 + 4;
      }
      else {
        ptr2_Long_4 = (int64_t **)param_3[4];
      }
      pLong_7 = pLong_11;
      if (pLong_10 < pLong_11) {
        pLong_7 = pLong_10;
      }
      iVal_3 = memcmp(ptr2_Long_4,pU64_6,(size_t)pLong_7);
      bFlag_5 = pLong_11 < pLong_10;
      if (iVal_3 != 0) {
        bFlag_5 = iVal_3 < 0;
      }
      if (!bFlag_5) {
LAB_18012f484:
        pLong_11 = (int64_t *)pLong_14[1];
        uVal_9 = 0;
        if (*(char *)((int64_t)pLong_11 + 0x19) == '\0') {
          pLong_7 = pLong_11;
          pU64_6 = param_4;
          if (0xf < local_58) {
            pU64_6 = local_50;
          }
          do {
            pLong_11 = pLong_7;
            if ((uint64_t)pLong_11[7] < 0x10) {
              pLong_7 = pLong_11 + 4;
            }
            else {
              pLong_7 = (int64_t *)pLong_11[4];
            }
            pLong_8 = (int64_t *)pLong_11[6];
            pLong_12 = pLong_8;
            if (pLong_10 < pLong_8) {
              pLong_12 = pLong_10;
            }
            iVal_3 = memcmp(pLong_7,pU64_6,(size_t)pLong_12);
            bFlag_5 = pLong_8 < pLong_10;
            if (iVal_3 != 0) {
              bFlag_5 = iVal_3 < 0;
            }
            if (bFlag_5 == false) {
              pLong_14 = pLong_11;
            }
            pLong_7 = (int64_t *)pLong_11[(uint64_t)bFlag_5 * 2];
          } while (*(char *)((int64_t)(int64_t *)pLong_11[(uint64_t)bFlag_5 * 2] + 0x19) == '\0');
          uVal_9 = (uint)(bFlag_5 ^ 1);
          ch_2 = *(char *)((int64_t)pLong_14 + 0x19);
        }
        else {
          ch_2 = *(char *)((int64_t)pLong_14 + 0x19);
        }
        if (ch_2 == '\0') {
          pLong_7 = (int64_t *)pLong_14[6];
          if ((uint64_t)pLong_14[7] < 0x10) {
            pLong_8 = pLong_14 + 4;
          }
          else {
            pLong_8 = (int64_t *)pLong_14[4];
          }
          if (0xf < local_58) {
            param_4 = local_50;
          }
          pLong_12 = pLong_10;
          if (pLong_7 < pLong_10) {
            pLong_12 = pLong_7;
          }
          iVal_3 = memcmp(param_4,pLong_8,(size_t)pLong_12);
          bFlag_5 = pLong_7 <= pLong_10;
          if (iVal_3 != 0) {
            bFlag_5 = -1 < iVal_3;
          }
          if (bFlag_5) {
            *param_2 = pLong_14;
            *(uint32_t *)(param_2 + 1) = 2;
            *(uint8_t *)(param_2 + 2) = 1;
            return param_2;
          }
        }
        *param_2 = pLong_11;
        *(uint *)(param_2 + 1) = uVal_9;
        goto LAB_18012f59f;
      }
    }
LAB_18012f595:
    *param_2 = (int64_t *)param_3;
LAB_18012f598:
    *(uint32_t *)(param_2 + 1) = 0;
  }
LAB_18012f59f:
  *(uint8_t *)(param_2 + 2) = 0;
  return param_2;
}

// func_0x18012f5d0
void func_0x18012f5d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t *pU64_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t *pU64_9;
  uint64_t uVal_10;
  
  *param_1 = param_2;
  param_1[1] = 0;
  pU64_6 = (uint64_t *)func_0x180672de0(0x48);
  param_1[1] = pU64_6;
  *(uint8_t (*)[16])(pU64_6 + 6) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 4) = ZEXT816(0);
  uVal_1 = param_4[2];
  pU64_9 = param_4;
  if (0xf < (uint64_t)param_4[3]) {
    pU64_9 = (uint64_t *)*param_4;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      pU64_6[6] = uVal_1;
      pU64_6[7] = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_9 + 4);
      uVal_4 = *(uint32_t *)(pU64_9 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_9 + 0xc);
      *(uint32_t *)(pU64_6 + 4) = *(uint32_t *)pU64_9;
      *(uint32_t *)((int64_t)pU64_6 + 0x24) = uVal_3;
      *(uint32_t *)(pU64_6 + 5) = uVal_4;
      *(uint32_t *)((int64_t)pU64_6 + 0x2c) = uVal_5;
      pU64_9 = pU64_6;
    }
    else {
      uVal_7 = uVal_1 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_7) {
        uVal_10 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        uVal_7 = func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_10 + 0x28);
        uVal_7 = lVal_8 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_7 - 8) = lVal_8;
      }
      pU64_6[4] = uVal_7;
      pU64_6[6] = uVal_1;
      pU64_6[7] = uVal_10;
      func_0x1806aa960(uVal_7,pU64_9,uVal_1 + 1);
      pU64_9 = (uint64_t *)param_1[1];
    }
    *(uint32_t *)(pU64_6 + 8) = *(uint32_t *)(param_4 + 4);
    *pU64_9 = param_3;
    *(uint64_t *)(param_1[1] + 8) = param_3;
    *(uint64_t *)(param_1[1] + 0x10) = param_3;
    *(uint8_t *)(param_1[1] + 0x18) = 0;
    *(uint8_t *)(param_1[1] + 0x19) = 0;
    return;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// Unwind@18012f710
void Unwind_18012f710(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x20) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x48);
  }
  return;
}

// Unwind@18012f750
void Unwind_18012f750(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x20) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x48);
  }
  return;
}

// Unwind@1801303f0
void Unwind_1801303f0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  
  lVal_5 = 0x640;
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
    lVal_5 = lVal_5 + -0x28;
  } while (lVal_5 != -0x28);
  *(int64_t *)(param_2 + 0x698) = param_2 + 0x660;
  *(uint8_t *)(param_2 + 0x6a7) = 1;
  return;
}

// Unwind@1801304a0
void Unwind_1801304a0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  if (*(char *)(param_2 + 0x6a7) == '\0') {
    lVal_1 = *(int64_t *)(param_2 + 0x698);
    do {
      lVal_1 = lVal_1 + -0x28;
      func_0x180001e70(lVal_1);
    } while (lVal_1 != param_2 + 0x20);
  }
  return;
}

// func_0x180130570
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180130570(uint64_t *param_1)
{
  char *fnPtr_1;
  byte *pU8_2;
  uint *pU64_3;
  uint64_t *pU64_4;
  int *pInt_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint64_t *pU64_9;
  func_ptr_t fnPtr_10;
  int iVal_11;
  int iVal_12;
  int iVal_13;
  int iVal_14;
  int iVal_15;
  int iVal_16;
  int iVal_17;
  uint32_t uVal_18;
  int iVal_19;
  size_t sz_20;
  uint64_t uVal_21;
  uint64_t uVal_22;
  uint64_t uVal_23;
  int64_t lVal_24;
  int64_t lVal_25;
  uint64_t uVal_26;
  uint64_t *pU64_27;
  uint8_t *pU64_28;
  uint8_t *pU64_29;
  uint64_t uVal_30;
  uint64_t uVal_31;
  uint uVal_32;
  uint uVal_33;
  uint uVal_34;
  uint uVal_35;
  uint uVal_36;
  uint uVal_37;
  uint uVal_38;
  uint uVal_39;
  uint uVal_40;
  uint uVal_41;
  uint uVal_42;
  uint uVal_43;
  uint uVal_44;
  uint uVal_45;
  uint uVal_46;
  uint uVal_47;
  uint64_t in_stack_fffffffffffffd80;
  uint32_t uVal_48;
  uint8_t **local_258;
  uint64_t *local_250;
  uint8_t ***local_220;
  uint8_t **local_218;
  uint64_t *local_210;
  uint8_t ***local_1e0;
  uint8_t **local_1d8;
  uint64_t *local_1d0;
  uint8_t ***local_1a0;
  uint8_t local_198 [56];
  uint64_t local_160;
  uint8_t local_158 [56];
  uint64_t local_120;
  uint8_t local_118 [56];
  uint64_t local_e0;
  uint64_t local_d8;
  undefined7 uStack_d0;
  uint32_t uStack_c9;
  uint8_t uStack_c5;
  uint64_t local_b8;
  uint32_t local_ac;
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  undefined5 uStack_68;
  uint64_t *local_60;
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
  
  uVal_48 = (uint32_t)((uint64_t)in_stack_fffffffffffffd80 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  local_78 = _DAT_1806b8df0;
  uStack_74 = _UNK_1806b8df4;
  uStack_70 = _UNK_1806b8df8;
  local_88._8_8_ = _UNK_1806b8de8;
  local_88._0_8_ = _DAT_1806b8de0;
  uStack_6c = CONCAT31(0x7f22e8,(char)_UNK_1806b8dfc);
  uStack_68 = 0xc56c9ab7ae;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3ba4) == '\0') {
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_25 + 0x3ba4) = 1;
    func_0x1801b1390(lVal_25 + 0x3b7d,local_88);
    func_0x180673140(&LAB_1801b14a0);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3b7d);
  func_0x1801bc7e0(fnPtr_1);
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_88 = (uint8_t  [16])0x0;
  sz_20 = strlen(fnPtr_1);
  if ((int64_t)sz_20 < 0) {
    func_0x18007ba70();
LAB_18013202a:
    local_50 = 1;
    func_0x18007ba70();
LAB_180132037:
    local_4f = 1;
    func_0x18007ba70();
LAB_180132044:
    local_52 = 1;
    func_0x18007ba70();
LAB_180132051:
    local_51 = 1;
    func_0x18007ba70();
LAB_18013205e:
    local_54 = 1;
    func_0x18007ba70();
LAB_18013206b:
    local_53 = 1;
    func_0x18007ba70();
LAB_180132078:
    local_4c = 1;
    func_0x18007ba70();
LAB_180132085:
    local_49 = 1;
    func_0x18007ba70();
LAB_180132092:
    local_4d = 1;
    func_0x18007ba70();
LAB_18013209f:
    local_4a = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_20 < 0x10) {
      pU64_28 = local_88;
      uVal_31 = 0xf;
    }
    else {
      uVal_21 = sz_20 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_21) {
        uVal_31 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
      }
      else {
        lVal_25 = func_0x180672de0(uVal_31 + 0x28);
        pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_25;
      }
      local_88._0_8_ = pU64_28;
    }
    local_78 = (uint32_t)sz_20;
    uStack_74 = (uint32_t)(sz_20 >> 0x20);
    uStack_70 = (uint32_t)uVal_31;
    uStack_6c = (uint32_t)(uVal_31 >> 0x20);
    func_0x1806aa960(pU64_28,fnPtr_1,sz_20);
    pU64_28[sz_20] = 0;
    pU64_28 = local_88;
    func_0x1801c2ba0(param_1,0,4,pU64_28);
    uVal_31 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_31) {
      uVal_21 = uVal_31 + 1;
      lVal_25 = local_88._0_8_;
      if (0xfff < uVal_21) {
        lVal_25 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_25)) goto LAB_180132023;
        uVal_21 = uVal_31 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_21);
    }
    *param_1 = &PTR_LAB_1806b6a40;
    *(uint8_t (*)[16])(param_1 + 0x10) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(param_1 + 0x12) = (uint8_t  [16])0x0;
    param_1[0x14] = 0x100000000;
    *(uint8_t (*)[16])(param_1 + 0x15) = (uint8_t  [16])0x0;
    *(uint8_t *)(param_1 + 0xc) = 1;
    local_60 = param_1;
    uVal_22 = func_0x180129e40(DAT_180840a58);
    uVal_23 = func_0x18010ce60(uVal_22,0x2c1);
    iVal_19 = func_0x18010ce00();
    uVal_26 = 0;
    if (iVal_19 == 6) {
      uVal_26 = uVal_23;
    }
    local_60[0x13] = uVal_26;
    lVal_24 = func_0x18010ce60(uVal_22,0x27);
    iVal_19 = func_0x18010ce00(*(uint64_t *)(lVal_24 + 8));
    lVal_25 = 0;
    if (iVal_19 == 5) {
      lVal_25 = lVal_24;
    }
    local_60[0x10] = lVal_25;
    if (lVal_25 != 0) {
      local_258 = &PTR_LAB_1806ba880;
      local_250 = local_60;
      local_220 = &local_258;
      local_ac = *(uint32_t *)(lVal_24 + 0x10);
      uVal_6 = *(uint32_t *)(lVal_24 + 0x14);
      local_b8 = CONCAT44(local_b8._4_4_,*(uint32_t *)(lVal_25 + 0x18));
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3ba8) == '\0') {
        lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_24 + 0x3ba8) = 1;
        *(uint16_t *)(lVal_24 + 0x3ba5) = 0x11d;
        func_0x180673140(&LAB_1801b14d0);
      }
      lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU8_2 = (byte *)(lVal_24 + 0x3ba5);
      if (*(char *)(lVal_24 + 0x3ba6) == '\x01') {
        *pU8_2 = *pU8_2 ^ 0x1d;
        *(uint8_t *)(lVal_24 + 0x3ba6) = 0;
      }
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      local_88 = (uint8_t  [16])0x0;
      sz_20 = strlen((char *)pU8_2);
      if ((int64_t)sz_20 < 0) goto LAB_180132078;
      uVal_31 = 0xf;
      if (0xf < sz_20) {
        uVal_21 = sz_20 | 0xf;
        uVal_31 = 0x16;
        if (0x16 < uVal_21) {
          uVal_31 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          local_4c = 1;
          pU64_28 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
        }
        else {
          local_4c = 1;
          lVal_24 = func_0x180672de0(uVal_31 + 0x28);
          pU64_28 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_24;
        }
        local_88._0_8_ = pU64_28;
      }
      local_78 = (uint32_t)sz_20;
      uStack_74 = (uint32_t)(sz_20 >> 0x20);
      uStack_70 = (uint32_t)uVal_31;
      uStack_6c = (uint32_t)(uVal_31 >> 0x20);
      func_0x1806aa960(pU64_28,pU8_2,sz_20);
      pU64_28[sz_20] = 0;
      local_d8 = _DAT_1806b8e05;
      uStack_d0 = (undefined7)_UNK_1806b8e0d;
      uStack_c9._0_1_ = (uint8_t)((uint64_t)_UNK_1806b8e0d >> 0x38);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3bbc) == '\0') {
        lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_24 + 0x3bbc) = 1;
        func_0x18007d150(lVal_24 + 0x3ba9,&local_d8);
        func_0x180673140(&LAB_1801b14f0);
      }
      lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_3 = (uint *)(lVal_24 + 0x3ba9);
      if (*(char *)(lVal_24 + 0x3bb9) == '\x01') {
        uVal_36 = *(uint *)(lVal_24 + 0x3bad) ^ _UNK_1806b2d84;
        uVal_37 = *(uint *)(lVal_24 + 0x3bb1) ^ _UNK_1806b2d88;
        uVal_38 = *(uint *)(lVal_24 + 0x3bb5) ^ _UNK_1806b2d8c;
        *pU64_3 = *pU64_3 ^ _DAT_1806b2d80;
        *(uint *)(lVal_24 + 0x3bad) = uVal_36;
        *(uint *)(lVal_24 + 0x3bb1) = uVal_37;
        *(uint *)(lVal_24 + 0x3bb5) = uVal_38;
        *(uint8_t *)(lVal_24 + 0x3bb9) = 0;
      }
      local_98 = (uint8_t  [16])0x0;
      local_a8 = (uint8_t  [16])0x0;
      sz_20 = strlen((char *)pU64_3);
      if (-1 < (int64_t)sz_20) {
        if (sz_20 < 0x10) {
          pU64_28 = local_a8;
          uVal_31 = 0xf;
        }
        else {
          uVal_21 = sz_20 | 0xf;
          uVal_31 = 0x16;
          if (0x16 < uVal_21) {
            uVal_31 = uVal_21;
          }
          if (uVal_21 < 0xfff) {
            local_49 = 1;
            pU64_28 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
          }
          else {
            local_49 = 1;
            lVal_24 = func_0x180672de0(uVal_31 + 0x28);
            pU64_28 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_28 + -8) = lVal_24;
          }
          local_a8._0_8_ = pU64_28;
        }
        local_98._8_8_ = uVal_31;
        local_98._0_8_ = sz_20;
        func_0x1806aa960(pU64_28,pU64_3,sz_20);
        pU64_28[sz_20] = 0;
        uVal_26 = CONCAT44(uVal_48,uVal_6);
        func_0x1801ccff0(local_60,local_a8,local_88,lVal_25 + 0x18,(uint32_t)local_b8,uVal_26,local_ac,
                      &local_258,0);
        uVal_48 = (uint32_t)((uint64_t)uVal_26 >> 0x20);
        if (0xf < (uint64_t)local_98._8_8_) {
          uVal_31 = local_98._8_8_ + 1;
          lVal_25 = local_a8._0_8_;
          if (0xfff < uVal_31) {
            lVal_25 = *(int64_t *)(local_a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_25)) goto LAB_180132023;
            uVal_31 = local_98._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_25,uVal_31);
        }
        uVal_31 = CONCAT44(uStack_6c,uStack_70);
        if (0xf < uVal_31) {
          uVal_21 = uVal_31 + 1;
          lVal_25 = local_88._0_8_;
          if (0xfff < uVal_21) {
            lVal_25 = *(int64_t *)(local_88._0_8_ + -8);
            if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_25)) goto LAB_180132023;
            uVal_21 = uVal_31 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_25,uVal_21);
        }
        goto LAB_180130af4;
      }
      goto LAB_180132085;
    }
LAB_180130af4:
    lVal_24 = func_0x18010ce60(uVal_22,0x246);
    iVal_19 = func_0x18010ce00(*(uint64_t *)(lVal_24 + 8));
    uVal_36 = 0;
    lVal_25 = lVal_24;
    if (iVal_19 != 5) {
      lVal_25 = 0;
    }
    local_60[0x11] = lVal_25;
    if (lVal_25 != 0) {
      local_60[0x16] = 0x7fffffff;
      pU64_27 = *(uint64_t **)(lVal_24 + 0x28);
      pU64_9 = *(uint64_t **)(lVal_24 + 0x30);
      if (pU64_27 == pU64_9) {
        uVal_37 = 0x7fffffff;
      }
      else {
        uVal_31 = (int64_t)pU64_9 + (-4 - (int64_t)pU64_27);
        uVal_36 = 0;
        uVal_37 = 0x7fffffff;
        if ((0x4b < uVal_31) &&
           ((uint64_t *)((int64_t)pU64_27 + (uVal_31 & 0xfffffffffffffffc) + 4) <= local_60 + 0x16
            || local_60 + 0x17 <= pU64_27)) {
          uVal_31 = (uVal_31 >> 2) + 1;
          uVal_21 = uVal_31 & 0xfffffffffffffff8;
          uVal_32 = 0;
          uVal_33 = 0;
          uVal_34 = 0;
          uVal_35 = 0;
          uVal_30 = 0;
          uVal_40 = 0;
          uVal_41 = 0;
          uVal_42 = 0;
          uVal_43 = 0;
          uVal_36 = _DAT_1806b55f0;
          uVal_37 = _UNK_1806b55f4;
          uVal_38 = _UNK_1806b55f8;
          uVal_39 = _UNK_1806b55fc;
          uVal_44 = _DAT_1806b55f0;
          uVal_45 = _UNK_1806b55f4;
          uVal_46 = _UNK_1806b55f8;
          uVal_47 = _UNK_1806b55fc;
          do {
            pInt_5 = (int *)((int64_t)pU64_27 + uVal_30 * 4);
            iVal_19 = *pInt_5;
            iVal_11 = pInt_5[1];
            iVal_12 = pInt_5[2];
            iVal_13 = pInt_5[3];
            pInt_5 = (int *)((int64_t)pU64_27 + uVal_30 * 4 + 0x10);
            iVal_14 = *pInt_5;
            iVal_15 = pInt_5[1];
            iVal_16 = pInt_5[2];
            iVal_17 = pInt_5[3];
            uVal_36 = (uint)(iVal_19 < (int)uVal_36) * iVal_19 | (iVal_19 >= (int)uVal_36) * uVal_36;
            uVal_37 = (uint)(iVal_11 < (int)uVal_37) * iVal_11 | (iVal_11 >= (int)uVal_37) * uVal_37;
            uVal_38 = (uint)(iVal_12 < (int)uVal_38) * iVal_12 | (iVal_12 >= (int)uVal_38) * uVal_38;
            uVal_39 = (uint)(iVal_13 < (int)uVal_39) * iVal_13 | (iVal_13 >= (int)uVal_39) * uVal_39;
            uVal_44 = (uint)(iVal_14 < (int)uVal_44) * iVal_14 | (iVal_14 >= (int)uVal_44) * uVal_44;
            uVal_45 = (uint)(iVal_15 < (int)uVal_45) * iVal_15 | (iVal_15 >= (int)uVal_45) * uVal_45;
            uVal_46 = (uint)(iVal_16 < (int)uVal_46) * iVal_16 | (iVal_16 >= (int)uVal_46) * uVal_46;
            uVal_47 = (uint)(iVal_17 < (int)uVal_47) * iVal_17 | (iVal_17 >= (int)uVal_47) * uVal_47;
            uVal_32 = (uint)((int)uVal_32 < iVal_19) * iVal_19 | ((int)uVal_32 >= iVal_19) * uVal_32;
            uVal_33 = (uint)((int)uVal_33 < iVal_11) * iVal_11 | ((int)uVal_33 >= iVal_11) * uVal_33;
            uVal_34 = (uint)((int)uVal_34 < iVal_12) * iVal_12 | ((int)uVal_34 >= iVal_12) * uVal_34;
            uVal_35 = (uint)((int)uVal_35 < iVal_13) * iVal_13 | ((int)uVal_35 >= iVal_13) * uVal_35;
            uVal_40 = (uint)((int)uVal_40 < iVal_14) * iVal_14 | ((int)uVal_40 >= iVal_14) * uVal_40;
            uVal_41 = (uint)((int)uVal_41 < iVal_15) * iVal_15 | ((int)uVal_41 >= iVal_15) * uVal_41;
            uVal_42 = (uint)((int)uVal_42 < iVal_16) * iVal_16 | ((int)uVal_42 >= iVal_16) * uVal_42;
            uVal_43 = (uint)((int)uVal_43 < iVal_17) * iVal_17 | ((int)uVal_43 >= iVal_17) * uVal_43;
            uVal_30 = uVal_30 + 8;
          } while (uVal_21 != uVal_30);
          uVal_36 = ((int)uVal_44 < (int)uVal_36) * uVal_44 | ((int)uVal_44 >= (int)uVal_36) * uVal_36;
          uVal_37 = ((int)uVal_45 < (int)uVal_37) * uVal_45 | ((int)uVal_45 >= (int)uVal_37) * uVal_37;
          uVal_38 = ((int)uVal_46 < (int)uVal_38) * uVal_46 | ((int)uVal_46 >= (int)uVal_38) * uVal_38;
          uVal_39 = ((int)uVal_47 < (int)uVal_39) * uVal_47 | ((int)uVal_47 >= (int)uVal_39) * uVal_39;
          uVal_36 = ((int)uVal_36 < (int)uVal_38) * uVal_36 | ((int)uVal_36 >= (int)uVal_38) * uVal_38;
          uVal_37 = ((int)uVal_37 < (int)uVal_39) * uVal_37 | ((int)uVal_37 >= (int)uVal_39) * uVal_39;
          uVal_37 = ((int)uVal_36 < (int)uVal_37) * uVal_36 | ((int)uVal_36 >= (int)uVal_37) * uVal_37;
          uVal_36 = ((int)uVal_32 < (int)uVal_40) * uVal_40 | ((int)uVal_32 >= (int)uVal_40) * uVal_32;
          uVal_38 = ((int)uVal_33 < (int)uVal_41) * uVal_41 | ((int)uVal_33 >= (int)uVal_41) * uVal_33;
          uVal_39 = ((int)uVal_34 < (int)uVal_42) * uVal_42 | ((int)uVal_34 >= (int)uVal_42) * uVal_34;
          uVal_44 = ((int)uVal_35 < (int)uVal_43) * uVal_43 | ((int)uVal_35 >= (int)uVal_43) * uVal_35;
          uVal_36 = ((int)uVal_39 < (int)uVal_36) * uVal_36 | ((int)uVal_39 >= (int)uVal_36) * uVal_39;
          uVal_38 = ((int)uVal_44 < (int)uVal_38) * uVal_38 | ((int)uVal_44 >= (int)uVal_38) * uVal_44;
          uVal_36 = ((int)uVal_38 < (int)uVal_36) * uVal_36 | ((int)uVal_38 >= (int)uVal_36) * uVal_38;
          *(uint *)(local_60 + 0x16) = uVal_37;
          *(uint *)((int64_t)local_60 + 0xb4) = uVal_36;
          pU64_27 = (uint64_t *)((int64_t)pU64_27 + uVal_21 * 4);
          if (uVal_31 == uVal_21) goto LAB_180130c8b;
        }
        do {
          uVal_38 = *(uint *)pU64_27;
          if ((int)uVal_38 < (int)uVal_37) {
            uVal_37 = uVal_38;
          }
          if ((int)uVal_38 < (int)uVal_36) {
            uVal_38 = uVal_36;
          }
          uVal_36 = uVal_38;
          *(uint *)(local_60 + 0x16) = uVal_37;
          *(uint *)((int64_t)local_60 + 0xb4) = uVal_36;
          pU64_27 = (uint64_t *)((int64_t)pU64_27 + 4);
        } while (pU64_27 != pU64_9);
      }
LAB_180130c8b:
      local_218 = &PTR_LAB_1806ba8b0;
      local_210 = local_60;
      local_1e0 = &local_218;
      uVal_6 = *(uint32_t *)(lVal_25 + 0x18);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3bc0) == '\0') {
        lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_24 + 0x3bc0) = 1;
        *(uint16_t *)(lVal_24 + 0x3bbd) = 0x19f;
        func_0x180673140(&LAB_1801b1510);
      }
      lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU8_2 = (byte *)(lVal_24 + 0x3bbd);
      if (*(char *)(lVal_24 + 0x3bbe) == '\x01') {
        *pU8_2 = *pU8_2 ^ 0x9f;
        *(uint8_t *)(lVal_24 + 0x3bbe) = 0;
      }
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      local_88 = (uint8_t  [16])0x0;
      sz_20 = strlen((char *)pU8_2);
      if ((int64_t)sz_20 < 0) goto LAB_180132092;
      local_b8 = uVal_22;
      local_ac = uVal_6;
      if (sz_20 < 0x10) {
        pU64_28 = local_88;
        uVal_31 = 0xf;
      }
      else {
        uVal_21 = sz_20 | 0xf;
        uVal_31 = 0x16;
        if (0x16 < uVal_21) {
          uVal_31 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          local_4d = 1;
          pU64_28 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
        }
        else {
          local_4d = 1;
          lVal_24 = func_0x180672de0(uVal_31 + 0x28);
          pU64_28 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_24;
        }
        local_88._0_8_ = pU64_28;
      }
      local_78 = (uint32_t)sz_20;
      uStack_74 = (uint32_t)(sz_20 >> 0x20);
      uStack_70 = (uint32_t)uVal_31;
      uStack_6c = (uint32_t)(uVal_31 >> 0x20);
      func_0x1806aa960(pU64_28,pU8_2,sz_20);
      pU64_28[sz_20] = 0;
      local_d8 = _DAT_1806b8e15;
      uStack_d0 = (undefined7)_UNK_1806b8e1d;
      uStack_c9 = 0x4dd8fc77;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3bd8) == '\0') {
        lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_24 + 0x3bd8) = 1;
        func_0x18007cb80(lVal_24 + 0x3bc1,&local_d8);
        func_0x180673140(&LAB_1801b1530);
      }
      fnPtr_1 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3bc1)
      ;
      func_0x1801bc860(fnPtr_1);
      local_98 = (uint8_t  [16])0x0;
      local_a8 = (uint8_t  [16])0x0;
      sz_20 = strlen(fnPtr_1);
      if (-1 < (int64_t)sz_20) {
        if (sz_20 < 0x10) {
          pU64_28 = local_a8;
          uVal_31 = 0xf;
        }
        else {
          uVal_21 = sz_20 | 0xf;
          uVal_31 = 0x16;
          if (0x16 < uVal_21) {
            uVal_31 = uVal_21;
          }
          if (uVal_21 < 0xfff) {
            local_4a = 1;
            pU64_28 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
          }
          else {
            local_4a = 1;
            lVal_24 = func_0x180672de0(uVal_31 + 0x28);
            pU64_28 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_28 + -8) = lVal_24;
          }
          local_a8._0_8_ = pU64_28;
        }
        local_98._8_8_ = uVal_31;
        local_98._0_8_ = sz_20;
        func_0x1806aa960(pU64_28,fnPtr_1,sz_20);
        pU64_28[sz_20] = 0;
        uVal_26 = CONCAT44(uVal_48,uVal_37);
        func_0x1801ccff0(local_60,local_a8,local_88,lVal_25 + 0x18,local_ac,uVal_26,uVal_36,&local_218,0);
        uVal_22 = local_b8;
        uVal_48 = (uint32_t)((uint64_t)uVal_26 >> 0x20);
        if (0xf < (uint64_t)local_98._8_8_) {
          uVal_31 = local_98._8_8_ + 1;
          lVal_25 = local_a8._0_8_;
          if (0xfff < uVal_31) {
            lVal_25 = *(int64_t *)(local_a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_25)) goto LAB_180132023;
            uVal_31 = local_98._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_25,uVal_31);
        }
        uVal_31 = CONCAT44(uStack_6c,uStack_70);
        if (0xf < uVal_31) {
          uVal_21 = uVal_31 + 1;
          lVal_25 = local_88._0_8_;
          if (0xfff < uVal_21) {
            lVal_25 = *(int64_t *)(local_88._0_8_ + -8);
            if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_25)) goto LAB_180132023;
            uVal_21 = uVal_31 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_25,uVal_21);
        }
        goto LAB_180130f9c;
      }
      goto LAB_18013209f;
    }
LAB_180130f9c:
    lVal_24 = func_0x18010ce60(uVal_22,0x245);
    iVal_19 = func_0x18010ce00(*(uint64_t *)(lVal_24 + 8));
    lVal_25 = 0;
    if (iVal_19 == 5) {
      lVal_25 = lVal_24;
    }
    local_60[0x12] = lVal_25;
    pU64_27 = local_60;
    if (lVal_25 == 0) {
LAB_1801312ef:
      local_160 = 0;
      if (DAT_18083f7c0 != (uint64_t *)0x0) {
        local_160 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_198);
        pU64_27 = local_60;
      }
      uVal_6 = *(uint32_t *)((int64_t)pU64_27 + 0xa4);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3c50) == '\0') {
        lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_25 + 0x3c50) = 1;
        *(uint8_t *)(lVal_25 + 0x3c4c) = 1;
        uVal_18 = _UNK_1806b8e48;
        uVal_8 = _UNK_1806b8e44;
        uVal_7 = _UNK_1806b8e40;
        *(uint32_t *)(lVal_25 + 0x3bf5) = _DAT_1806b8e3c;
        *(uint32_t *)(lVal_25 + 0x3bf9) = uVal_7;
        *(uint32_t *)(lVal_25 + 0x3bfd) = uVal_8;
        *(uint32_t *)(lVal_25 + 0x3c01) = uVal_18;
        uVal_18 = _UNK_1806b8e58;
        uVal_8 = _UNK_1806b8e54;
        uVal_7 = _UNK_1806b8e50;
        *(uint32_t *)(lVal_25 + 0x3c05) = _DAT_1806b8e4c;
        *(uint32_t *)(lVal_25 + 0x3c09) = uVal_7;
        *(uint32_t *)(lVal_25 + 0x3c0d) = uVal_8;
        *(uint32_t *)(lVal_25 + 0x3c11) = uVal_18;
        uVal_18 = _UNK_1806b8e68;
        uVal_8 = _UNK_1806b8e64;
        uVal_7 = _UNK_1806b8e60;
        *(uint32_t *)(lVal_25 + 0x3c15) = _DAT_1806b8e5c;
        *(uint32_t *)(lVal_25 + 0x3c19) = uVal_7;
        *(uint32_t *)(lVal_25 + 0x3c1d) = uVal_8;
        *(uint32_t *)(lVal_25 + 0x3c21) = uVal_18;
        uVal_18 = _UNK_1806b8e78;
        uVal_8 = _UNK_1806b8e74;
        uVal_7 = _UNK_1806b8e70;
        *(uint32_t *)(lVal_25 + 0x3c25) = _DAT_1806b8e6c;
        *(uint32_t *)(lVal_25 + 0x3c29) = uVal_7;
        *(uint32_t *)(lVal_25 + 0x3c2d) = uVal_8;
        *(uint32_t *)(lVal_25 + 0x3c31) = uVal_18;
        uVal_22 = _UNK_1806b8e84;
        *(uint64_t *)(lVal_25 + 0x3c35) = _DAT_1806b8e7c;
        *(uint64_t *)(lVal_25 + 0x3c3d) = uVal_22;
        *(uint64_t *)(lVal_25 + 0x3c44) = 0x7b4ea1eb9801e7a;
        func_0x180673140(&LAB_1801b15b0);
      }
      uVal_39 = _UNK_1806b266c;
      uVal_38 = _UNK_1806b2668;
      uVal_37 = _UNK_1806b2664;
      uVal_36 = _DAT_1806b2660;
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_3 = (uint *)(lVal_25 + 0x3bf5);
      if (*(char *)(lVal_25 + 0x3c4c) == '\x01') {
        uVal_44 = *(uint *)(lVal_25 + 0x3bf9) ^ _UNK_1806b2664;
        uVal_45 = *(uint *)(lVal_25 + 0x3bfd) ^ _UNK_1806b2668;
        uVal_46 = *(uint *)(lVal_25 + 0x3c01) ^ _UNK_1806b266c;
        *pU64_3 = *pU64_3 ^ _DAT_1806b2660;
        *(uint *)(lVal_25 + 0x3bf9) = uVal_44;
        *(uint *)(lVal_25 + 0x3bfd) = uVal_45;
        *(uint *)(lVal_25 + 0x3c01) = uVal_46;
        *(uint *)(lVal_25 + 0x3c05) = *(uint *)(lVal_25 + 0x3c05) ^ uVal_36;
        *(uint *)(lVal_25 + 0x3c09) = *(uint *)(lVal_25 + 0x3c09) ^ uVal_37;
        *(uint *)(lVal_25 + 0x3c0d) = *(uint *)(lVal_25 + 0x3c0d) ^ uVal_38;
        *(uint *)(lVal_25 + 0x3c11) = *(uint *)(lVal_25 + 0x3c11) ^ uVal_39;
        *(uint *)(lVal_25 + 0x3c15) = *(uint *)(lVal_25 + 0x3c15) ^ uVal_36;
        *(uint *)(lVal_25 + 0x3c19) = *(uint *)(lVal_25 + 0x3c19) ^ uVal_37;
        *(uint *)(lVal_25 + 0x3c1d) = *(uint *)(lVal_25 + 0x3c1d) ^ uVal_38;
        *(uint *)(lVal_25 + 0x3c21) = *(uint *)(lVal_25 + 0x3c21) ^ uVal_39;
        *(uint *)(lVal_25 + 0x3c25) = *(uint *)(lVal_25 + 0x3c25) ^ uVal_36;
        *(uint *)(lVal_25 + 0x3c29) = *(uint *)(lVal_25 + 0x3c29) ^ uVal_37;
        *(uint *)(lVal_25 + 0x3c2d) = *(uint *)(lVal_25 + 0x3c2d) ^ uVal_38;
        *(uint *)(lVal_25 + 0x3c31) = *(uint *)(lVal_25 + 0x3c31) ^ uVal_39;
        *(uint *)(lVal_25 + 0x3c35) = *(uint *)(lVal_25 + 0x3c35) ^ uVal_36;
        *(uint *)(lVal_25 + 0x3c39) = *(uint *)(lVal_25 + 0x3c39) ^ uVal_37;
        *(uint *)(lVal_25 + 0x3c3d) = *(uint *)(lVal_25 + 0x3c3d) ^ uVal_38;
        *(uint *)(lVal_25 + 0x3c41) = *(uint *)(lVal_25 + 0x3c41) ^ uVal_39;
        *(uint *)(lVal_25 + 0x3c45) = *(uint *)(lVal_25 + 0x3c45) ^ 0x7599e56d;
        *(byte *)(lVal_25 + 0x3c49) = *(byte *)(lVal_25 + 0x3c49) ^ 0x8f;
        *(byte *)(lVal_25 + 0x3c4a) = *(byte *)(lVal_25 + 0x3c4a) ^ 0xcd;
        *(byte *)(lVal_25 + 0x3c4b) = *(byte *)(lVal_25 + 0x3c4b) ^ 7;
        *(uint8_t *)(lVal_25 + 0x3c4c) = 0;
      }
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      local_88 = (uint8_t  [16])0x0;
      sz_20 = strlen((char *)pU64_3);
      if ((int64_t)sz_20 < 0) goto LAB_18013202a;
      if (sz_20 < 0x10) {
        pU64_28 = local_88;
        uVal_31 = 0xf;
      }
      else {
        uVal_21 = sz_20 | 0xf;
        uVal_31 = 0x16;
        if (0x16 < uVal_21) {
          uVal_31 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          local_50 = 1;
          pU64_28 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
        }
        else {
          local_50 = 1;
          lVal_25 = func_0x180672de0(uVal_31 + 0x28);
          pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_25;
        }
        local_88._0_8_ = pU64_28;
      }
      local_78 = (uint32_t)sz_20;
      uStack_74 = (uint32_t)(sz_20 >> 0x20);
      uStack_70 = (uint32_t)uVal_31;
      uStack_6c = (uint32_t)(uVal_31 >> 0x20);
      func_0x1806aa960(pU64_28,pU64_3,sz_20);
      pU64_28[sz_20] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3c68) == '\0') {
        lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_25 + 0x3c68) = 1;
        *(uint8_t *)(lVal_25 + 0x3c66) = 1;
        *(uint64_t *)(lVal_25 + 0x3c58) = 0x7a27a8e81bf88d2e;
        *(uint32_t *)(lVal_25 + 0x3c60) = 0x1bec8a00;
        *(uint16_t *)(lVal_25 + 0x3c64) = 0xcdfb;
        func_0x180673140(&LAB_1801b1600);
      }
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_4 = (uint64_t *)(lVal_25 + 0x3c58);
      if (*(char *)(lVal_25 + 0x3c66) == '\x01') {
        *pU64_4 = *pU64_4 ^ 0x1b07cd8f7599e56d;
        *(uint *)(lVal_25 + 0x3c60) = *(uint *)(lVal_25 + 0x3c60) ^ 0x7599e56d;
        *(byte *)(lVal_25 + 0x3c64) = *(byte *)(lVal_25 + 0x3c64) ^ 0x8f;
        *(byte *)(lVal_25 + 0x3c65) = *(byte *)(lVal_25 + 0x3c65) ^ 0xcd;
        *(uint8_t *)(lVal_25 + 0x3c66) = 0;
      }
      local_98 = (uint8_t  [16])0x0;
      local_a8 = (uint8_t  [16])0x0;
      sz_20 = strlen((char *)pU64_4);
      if ((int64_t)sz_20 < 0) goto LAB_180132037;
      if (sz_20 < 0x10) {
        pU64_28 = local_a8;
        uVal_31 = 0xf;
      }
      else {
        uVal_21 = sz_20 | 0xf;
        uVal_31 = 0x16;
        if (0x16 < uVal_21) {
          uVal_31 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          local_4f = 1;
          pU64_28 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
        }
        else {
          local_4f = 1;
          lVal_25 = func_0x180672de0(uVal_31 + 0x28);
          pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_25;
        }
        local_a8._0_8_ = pU64_28;
      }
      local_98._8_8_ = uVal_31;
      local_98._0_8_ = sz_20;
      func_0x1806aa960(pU64_28,pU64_4,sz_20);
      pU64_28[sz_20] = 0;
      uVal_36 = 0;
      pU64_28 = local_a8;
      pU64_29 = local_88;
      func_0x1801ccff0(local_60,pU64_28,pU64_29,(uint32_t *)((int64_t)pU64_27 + 0xa4),uVal_6,
                    CONCAT44(uVal_48,1),10,local_198,0);
      if (0xf < (uint64_t)local_98._8_8_) {
        uVal_31 = local_98._8_8_ + 1;
        lVal_25 = local_a8._0_8_;
        if (0xfff < uVal_31) {
          lVal_25 = *(int64_t *)(local_a8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_25)) goto LAB_180132023;
          uVal_31 = local_98._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_25,uVal_31);
      }
      pU64_27 = local_60;
      uVal_31 = CONCAT44(uStack_6c,uStack_70);
      if (0xf < uVal_31) {
        uVal_21 = uVal_31 + 1;
        lVal_25 = local_88._0_8_;
        if (0xfff < uVal_21) {
          lVal_25 = *(int64_t *)(local_88._0_8_ + -8);
          if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_25)) goto LAB_180132023;
          uVal_21 = uVal_31 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_25,uVal_21);
      }
      local_120 = 0;
      if (DAT_18083f7c0 != (uint64_t *)0x0) {
        local_120 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_158);
        pU64_27 = local_60;
      }
      uVal_48 = *(uint32_t *)(pU64_27 + 0x15);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3c6c) == '\0') {
        lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_25 + 0x3c6c) = 1;
        *(uint16_t *)(lVal_25 + 0x3c69) = 0x1f9;
        func_0x180673140(&LAB_1801b1630);
      }
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU8_2 = (byte *)(lVal_25 + 0x3c69);
      if (*(char *)(lVal_25 + 0x3c6a) == '\x01') {
        *pU8_2 = *pU8_2 ^ 0xf9;
        *(uint8_t *)(lVal_25 + 0x3c6a) = 0;
      }
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      local_88 = (uint8_t  [16])0x0;
      sz_20 = strlen((char *)pU8_2);
      if ((int64_t)sz_20 < 0) goto LAB_180132044;
      uVal_31 = 0xf;
      if (0xf < sz_20) {
        uVal_21 = sz_20 | 0xf;
        uVal_31 = 0x16;
        if (0x16 < uVal_21) {
          uVal_31 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          local_52 = 1;
          pU64_29 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
        }
        else {
          local_52 = 1;
          lVal_25 = func_0x180672de0(uVal_31 + 0x28);
          pU64_29 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_29 + -8) = lVal_25;
        }
        local_88._0_8_ = pU64_29;
      }
      local_78 = (uint32_t)sz_20;
      uStack_74 = (uint32_t)(sz_20 >> 0x20);
      uStack_70 = (uint32_t)uVal_31;
      uStack_6c = (uint32_t)(uVal_31 >> 0x20);
      func_0x1806aa960(pU64_29,pU8_2,sz_20);
      pU64_29[sz_20] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3c80) == '\0') {
        lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_25 + 0x3c80) = 1;
        *(uint64_t *)(lVal_25 + 0x3c70) = 0x4c14525275bcf7b0;
        *(uint32_t *)(lVal_25 + 0x3c78) = 0x7ebaf2d9;
        *(uint16_t *)(lVal_25 + 0x3c7c) = 0x137;
        func_0x180673140(&LAB_1801b1650);
      }
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_4 = (uint64_t *)(lVal_25 + 0x3c70);
      if (*(char *)(lVal_25 + 0x3c7d) == '\x01') {
        *pU64_4 = *pU64_4 ^ 0x2967333707df99f9;
        *(uint *)(lVal_25 + 0x3c78) = *(uint *)(lVal_25 + 0x3c78) ^ 0x7df99f9;
        *(byte *)(lVal_25 + 0x3c7c) = *(byte *)(lVal_25 + 0x3c7c) ^ 0x37;
        *(uint8_t *)(lVal_25 + 0x3c7d) = 0;
      }
      local_98 = (uint8_t  [16])0x0;
      local_a8 = (uint8_t  [16])0x0;
      sz_20 = strlen((char *)pU64_4);
      if ((int64_t)sz_20 < 0) goto LAB_180132051;
      uVal_31 = 0xf;
      if (0xf < sz_20) {
        uVal_21 = sz_20 | 0xf;
        uVal_31 = 0x16;
        if (0x16 < uVal_21) {
          uVal_31 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          local_51 = 1;
          pU64_28 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
        }
        else {
          local_51 = 1;
          lVal_25 = func_0x180672de0(uVal_31 + 0x28);
          pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_25;
        }
        local_a8._0_8_ = pU64_28;
      }
      local_98._8_8_ = uVal_31;
      local_98._0_8_ = sz_20;
      func_0x1806aa960(pU64_28,pU64_4,sz_20);
      pU64_28[sz_20] = 0;
      uVal_36 = uVal_36 & 0xffffff00;
      pU64_28 = local_a8;
      pU64_29 = local_88;
      func_0x1801d3800(local_60,pU64_28,pU64_29,pU64_27 + 0x15,uVal_48,local_158,uVal_36);
      if (0xf < (uint64_t)local_98._8_8_) {
        uVal_31 = local_98._8_8_ + 1;
        lVal_25 = local_a8._0_8_;
        if (0xfff < uVal_31) {
          lVal_25 = *(int64_t *)(local_a8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_25)) goto LAB_180132023;
          uVal_31 = local_98._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_25,uVal_31);
      }
      pU64_27 = local_60;
      uVal_31 = CONCAT44(uStack_6c,uStack_70);
      if (0xf < uVal_31) {
        uVal_21 = uVal_31 + 1;
        lVal_25 = local_88._0_8_;
        if (0xfff < uVal_21) {
          lVal_25 = *(int64_t *)(local_88._0_8_ + -8);
          if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_25)) goto LAB_180132023;
          uVal_21 = uVal_31 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_25,uVal_21);
      }
      local_e0 = 0;
      if (DAT_18083f7c0 != (uint64_t *)0x0) {
        local_e0 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_118);
        pU64_27 = local_60;
      }
      uVal_48 = *(uint32_t *)((int64_t)pU64_27 + 0xac);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3c84) == '\0') {
        lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_25 + 0x3c84) = 1;
        *(uint16_t *)(lVal_25 + 0x3c81) = 0x1d3;
        func_0x180673140(&LAB_1801b1680);
      }
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU8_2 = (byte *)(lVal_25 + 0x3c81);
      if (*(char *)(lVal_25 + 0x3c82) == '\x01') {
        *pU8_2 = *pU8_2 ^ 0xd3;
        *(uint8_t *)(lVal_25 + 0x3c82) = 0;
      }
      local_88 = (uint8_t  [16])0x0;
      sz_20 = strlen((char *)pU8_2);
      if ((int64_t)sz_20 < 0) goto LAB_18013205e;
      uVal_31 = 0xf;
      if (0xf < sz_20) {
        uVal_21 = sz_20 | 0xf;
        uVal_31 = 0x16;
        if (0x16 < uVal_21) {
          uVal_31 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          local_54 = 1;
          pU64_29 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
        }
        else {
          local_54 = 1;
          lVal_25 = func_0x180672de0(uVal_31 + 0x28);
          pU64_29 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_29 + -8) = lVal_25;
        }
        local_88._0_8_ = pU64_29;
      }
      local_78 = (uint32_t)sz_20;
      uStack_74 = (uint32_t)(sz_20 >> 0x20);
      uStack_70 = (uint32_t)uVal_31;
      uStack_6c = (uint32_t)(uVal_31 >> 0x20);
      func_0x1806aa960(pU64_29,pU8_2,sz_20);
      pU64_29[sz_20] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3c98) == '\0') {
        lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_25 + 0x3c98) = 1;
        *(uint64_t *)(lVal_25 + 0x3c88) = 0x983c90d8d11e7a97;
        *(uint32_t *)(lVal_25 + 0x3c90) = 0xda1874f3;
        *(uint16_t *)(lVal_25 + 0x3c94) = 0x1bd;
        func_0x180673140(&LAB_1801b16a0);
      }
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_4 = (uint64_t *)(lVal_25 + 0x3c88);
      if (*(char *)(lVal_25 + 0x3c95) == '\x01') {
        *pU64_4 = *pU64_4 ^ 0xfd4ff1bda37d1fd3;
        *(uint *)(lVal_25 + 0x3c90) = *(uint *)(lVal_25 + 0x3c90) ^ 0xa37d1fd3;
        *(byte *)(lVal_25 + 0x3c94) = *(byte *)(lVal_25 + 0x3c94) ^ 0xbd;
        *(uint8_t *)(lVal_25 + 0x3c95) = 0;
      }
      local_a8 = (uint8_t  [16])0x0;
      sz_20 = strlen((char *)pU64_4);
      if (-1 < (int64_t)sz_20) {
        uVal_31 = 0xf;
        if (0xf < sz_20) {
          uVal_21 = sz_20 | 0xf;
          uVal_31 = 0x16;
          if (0x16 < uVal_21) {
            uVal_31 = uVal_21;
          }
          if (uVal_21 < 0xfff) {
            local_53 = 1;
            pU64_28 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
          }
          else {
            local_53 = 1;
            lVal_25 = func_0x180672de0(uVal_31 + 0x28);
            pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_28 + -8) = lVal_25;
          }
          local_a8._0_8_ = pU64_28;
        }
        local_98._0_8_ = sz_20;
        local_98._8_8_ = uVal_31;
        func_0x1806aa960(pU64_28,pU64_4,sz_20);
        pU64_28[sz_20] = 0;
        func_0x1801d3800(local_60,local_a8,local_88,(uint32_t *)((int64_t)pU64_27 + 0xac),uVal_48,
                      local_118,uVal_36 & 0xffffff00);
        if (0xf < (uint64_t)local_98._8_8_) {
          uVal_31 = local_98._8_8_ + 1;
          lVal_25 = local_a8._0_8_;
          if (0xfff < uVal_31) {
            lVal_25 = *(int64_t *)(local_a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_25)) goto LAB_180132023;
            uVal_31 = local_98._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_25,uVal_31);
        }
        pU64_27 = local_60;
        uVal_31 = CONCAT44(uStack_6c,uStack_70);
        if (0xf < uVal_31) {
          uVal_21 = uVal_31 + 1;
          lVal_25 = local_88._0_8_;
          if (0xfff < uVal_21) {
            lVal_25 = *(int64_t *)(local_88._0_8_ + -8);
            if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_25)) {
LAB_180132023:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_21 = uVal_31 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_25,uVal_21);
        }
        return pU64_27;
      }
      goto LAB_18013206b;
    }
    local_1d8 = &PTR_LAB_1806ba8e0;
    local_1d0 = local_60;
    local_1a0 = &local_1d8;
    uVal_6 = *(uint32_t *)(lVal_24 + 0x10);
    uVal_7 = *(uint32_t *)(lVal_24 + 0x14);
    uVal_8 = *(uint32_t *)(lVal_25 + 0x18);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3bdc) == '\0') {
      lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_24 + 0x3bdc) = 1;
      *(uint16_t *)(lVal_24 + 0x3bd9) = 0x15d;
      func_0x180673140(&LAB_1801b1560);
    }
    lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_24 + 0x3bd9);
    if (*(char *)(lVal_24 + 0x3bda) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x5d;
      *(uint8_t *)(lVal_24 + 0x3bda) = 0;
    }
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint8_t  [16])0x0;
    sz_20 = strlen((char *)pU8_2);
    if (-1 < (int64_t)sz_20) {
      local_ac = uVal_8;
      if (sz_20 < 0x10) {
        pU64_28 = local_88;
        uVal_31 = 0xf;
      }
      else {
        uVal_21 = sz_20 | 0xf;
        uVal_31 = 0x16;
        if (0x16 < uVal_21) {
          uVal_31 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          local_4e = 1;
          pU64_28 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
        }
        else {
          local_4e = 1;
          lVal_24 = func_0x180672de0(uVal_31 + 0x28);
          pU64_28 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_24;
        }
        local_88._0_8_ = pU64_28;
      }
      local_78 = (uint32_t)sz_20;
      uStack_74 = (uint32_t)(sz_20 >> 0x20);
      uStack_70 = (uint32_t)uVal_31;
      uStack_6c = (uint32_t)(uVal_31 >> 0x20);
      func_0x1806aa960(pU64_28,pU8_2,sz_20);
      pU64_28[sz_20] = 0;
      local_d8 = _DAT_1806b8e28;
      uStack_d0 = (undefined7)_UNK_1806b8e30;
      uStack_c9._0_1_ = (uint8_t)((uint64_t)_UNK_1806b8e30 >> 0x38);
      uStack_c9 = CONCAT31(0x4ac633,(uint8_t)uStack_c9);
      uStack_c5 = 0xdf;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3bf4) == '\0') {
        lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_24 + 0x3bf4) = 1;
        func_0x18007cfc0(lVal_24 + 0x3bdd,&local_d8);
        func_0x180673140(&LAB_1801b1580);
      }
      fnPtr_1 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3bdd)
      ;
      func_0x1801bc8e0(fnPtr_1);
      local_98 = (uint8_t  [16])0x0;
      local_a8 = (uint8_t  [16])0x0;
      sz_20 = strlen(fnPtr_1);
      if ((int64_t)sz_20 < 0) goto LAB_1801320b9;
      if (sz_20 < 0x10) {
        pU64_28 = local_a8;
        uVal_31 = 0xf;
      }
      else {
        uVal_21 = sz_20 | 0xf;
        uVal_31 = 0x16;
        if (0x16 < uVal_21) {
          uVal_31 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          local_4b = 1;
          pU64_28 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
        }
        else {
          local_4b = 1;
          lVal_24 = func_0x180672de0(uVal_31 + 0x28);
          pU64_28 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_24;
        }
        local_a8._0_8_ = pU64_28;
      }
      local_98._8_8_ = uVal_31;
      local_98._0_8_ = sz_20;
      func_0x1806aa960(pU64_28,fnPtr_1,sz_20);
      pU64_28[sz_20] = 0;
      uVal_22 = CONCAT44(uVal_48,uVal_7);
      func_0x1801ccff0(local_60,local_a8,local_88,lVal_25 + 0x18,local_ac,uVal_22,uVal_6,&local_1d8,0);
      uVal_48 = (uint32_t)((uint64_t)uVal_22 >> 0x20);
      if (0xf < (uint64_t)local_98._8_8_) {
        uVal_31 = local_98._8_8_ + 1;
        lVal_25 = local_a8._0_8_;
        if (0xfff < uVal_31) {
          lVal_25 = *(int64_t *)(local_a8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_25)) goto LAB_180132023;
          uVal_31 = local_98._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_25,uVal_31);
      }
      pU64_27 = local_60;
      uVal_31 = CONCAT44(uStack_6c,uStack_70);
      if (0xf < uVal_31) {
        uVal_21 = uVal_31 + 1;
        lVal_25 = local_88._0_8_;
        if (0xfff < uVal_21) {
          lVal_25 = *(int64_t *)(local_88._0_8_ + -8);
          if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_25)) goto LAB_180132023;
          uVal_21 = uVal_31 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_25,uVal_21);
      }
      goto LAB_1801312ef;
    }
  }
  local_4e = 1;
  func_0x18007ba70();
LAB_1801320b9:
  local_4b = 1;
  func_0x18007ba70();
  fnPtr_10 = (func_ptr_t )swi(3);
  pU64_27 = (uint64_t *)(*fnPtr_10)();
  return pU64_27;
}

// Unwind@1801320d0
void Unwind_1801320d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  return;
}

// Unwind@180132110
void Unwind_180132110(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x25f) = 0;
  return;
}

// Unwind@180132150
void Unwind_180132150(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x25f);
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x25c) = uVal_1;
  return;
}

// Unwind@1801321a0
void Unwind_1801321a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x25c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@180132200
void Unwind_180132200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x25e) = 0;
  return;
}

// Unwind@180132240
void Unwind_180132240(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x25e);
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x25b) = uVal_1;
  return;
}

// Unwind@180132290
void Unwind_180132290(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x25b) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1801322f0
void Unwind_1801322f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x25d) = 0;
  return;
}

// Unwind@180132330
void Unwind_180132330(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x25d);
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x25a) = uVal_1;
  return;
}

// Unwind@180132380
void Unwind_180132380(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x25a) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@1801323e0
void Unwind_1801323e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x148);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@180132440
void Unwind_180132440(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x188);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@1801324a0
void Unwind_1801324a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@180132500
void Unwind_180132500(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x259) = 0;
  return;
}

// Unwind@180132540
void Unwind_180132540(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x259);
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 600) = uVal_1;
  return;
}

// Unwind@180132590
void Unwind_180132590(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 600) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@1801325f0
void Unwind_1801325f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 599) = 0;
  return;
}

// Unwind@180132630
void Unwind_180132630(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 599);
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x256) = uVal_1;
  return;
}

// Unwind@180132680
void Unwind_180132680(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x256) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x188), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@1801326e0
void Unwind_1801326e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x255) = 0;
  return;
}

// Unwind@180132720
void Unwind_180132720(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x255);
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x254) = uVal_1;
  return;
}

// Unwind@180132770
void Unwind_180132770(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x254) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@1801327d0
void Unwind_1801327d0(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x248));
  return;
}

// Unwind@180132810
void Unwind_180132810(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3ba4) = 0;
  return;
}

// Unwind@180132860
void Unwind_180132860(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3bbc) = 0;
  *(uint8_t *)(param_2 + 0x25f) = 1;
  return;
}

// Unwind@1801328b0
void Unwind_1801328b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3bd8) = 0;
  *(uint8_t *)(param_2 + 0x25e) = 1;
  return;
}

// Unwind@180132900
void Unwind_180132900(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3bf4) = 0;
  *(uint8_t *)(param_2 + 0x25d) = 1;
  return;
}

// func_0x180132ee0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180132ee0(uint64_t *param_1)
{
  uint64_t *pU64_1;
  byte *pU8_2;
  char *fnPtr_3;
  uint8_t uVal_4;
  func_ptr_t fnPtr_5;
  size_t sz_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t ***ptr3_U64_10;
  uint64_t *pU64_11;
  uint8_t *pU64_12;
  uint8_t *pU64_13;
  uint64_t ****ptr4_U64_14;
  uint8_t *pU64_15;
  uint64_t uVal_16;
  uint8_t local_1b8 [56];
  uint64_t local_180;
  uint8_t local_178 [56];
  uint64_t local_140;
  uint8_t local_138 [56];
  uint64_t local_100;
  uint8_t local_f8 [16];
  uint8_t local_e8 [24];
  uint64_t *local_d0;
  uint64_t ****local_c8;
  undefined6 uStack_c0;
  uint16_t uStack_ba;
  uint32_t uStack_b8;
  uint16_t uStack_b4;
  uint16_t uStack_b2;
  uint64_t uStack_b0;
  uint8_t local_a8 [16];
  uint8_t local_98 [24];
  uint64_t *local_80;
  uint8_t local_78 [16];
  uint8_t local_68 [26];
  uint8_t local_4e;
  uint8_t local_4d;
  uint8_t local_4c;
  uint8_t local_4b;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  func_0x1801c2ba0();
  *param_1 = &PTR_FUN_1806b6b70;
  param_1[0x10] = DAT_1806b2890;
  *(uint16_t *)(param_1 + 0x11) = 0;
  *(uint8_t (*)[16])(param_1 + 0x14) = (uint8_t  [16])0x0;
  *(uint8_t (*)[16])(param_1 + 0x12) = (uint8_t  [16])0x0;
  *(uint32_t *)(param_1 + 0x15) = 0xffffffff;
  local_80 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3cc4) == '\0') {
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_8 + 0x3cc4) = 1;
    *(uint8_t *)(lVal_8 + 0x3cc0) = 1;
    *(uint64_t *)(lVal_8 + 0x3cb8) = 0x65041f274c3aba5b;
    func_0x180673140(&LAB_1801b1700);
  }
  lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_8 + 0x3cb8);
  if (*(char *)(lVal_8 + 0x3cc0) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0x656173452549d30d;
    *(uint8_t *)(lVal_8 + 0x3cc0) = 0;
  }
  local_d0 = local_80 + 0x12;
  local_68._0_16_ = (uint8_t  [16])0x0;
  local_78 = (uint8_t  [16])0x0;
  sz_6 = strlen((char *)pU64_1);
  if ((int64_t)sz_6 < 0) {
    func_0x18007ba70();
LAB_180134225:
    func_0x18007ba70();
LAB_18013422b:
    func_0x18007ba70();
LAB_180134231:
    func_0x18007ba70();
LAB_180134237:
    func_0x18007ba70();
LAB_18013423d:
    local_4c = 1;
    func_0x18007ba70();
LAB_18013424a:
    local_4b = 1;
    func_0x18007ba70();
LAB_180134257:
    local_4d = 1;
    func_0x18007ba70();
LAB_180134264:
    local_49 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_6 < 0x10) {
      pU64_12 = local_78;
      uVal_16 = 0xf;
    }
    else {
      uVal_7 = sz_6 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_7) {
        uVal_16 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_16 + 0x28);
        pU64_12 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_8;
      }
      local_78._0_8_ = pU64_12;
    }
    local_68._0_8_ = sz_6;
    local_68._8_8_ = uVal_16;
    func_0x1806aa960(pU64_12,pU64_1,sz_6);
    pU64_12[sz_6] = 0;
    pU64_12 = local_78;
    func_0x1801d4c30(local_80,pU64_12);
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_16 = local_68._8_8_ + 1;
      lVal_8 = local_78._0_8_;
      if (0xfff < uVal_16) {
        lVal_8 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_8)) goto LAB_18013421d;
        uVal_16 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_8,uVal_16);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3cd4) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x3cd4) = 1;
      *(uint64_t *)(lVal_8 + 0x3cc8) = 0x93d9684bf94d5e11;
      *(uint16_t *)(lVal_8 + 0x3cd0) = 0x145;
      func_0x180673140(&LAB_1801b1720);
    }
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_8 + 0x3cc8);
    if (*(char *)(lVal_8 + 0x3cd1) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xe7bf0d27d93d3145;
      *(byte *)(lVal_8 + 0x3cd0) = *(byte *)(lVal_8 + 0x3cd0) ^ 0x45;
      *(uint8_t *)(lVal_8 + 0x3cd1) = 0;
    }
    local_68._0_16_ = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [16])0x0;
    sz_6 = strlen((char *)pU64_1);
    if ((int64_t)sz_6 < 0) goto LAB_180134225;
    uVal_16 = 0xf;
    if (0xf < sz_6) {
      uVal_7 = sz_6 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_7) {
        uVal_16 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_16 + 0x28);
        pU64_12 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_8;
      }
      local_78._0_8_ = pU64_12;
    }
    local_68._8_8_ = uVal_16;
    local_68._0_8_ = sz_6;
    func_0x1806aa960(pU64_12,pU64_1,sz_6);
    pU64_12[sz_6] = 0;
    pU64_12 = local_78;
    uVal_9 = func_0x1801d3650(local_d0,pU64_12,0);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3ce4) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x3ce4) = 1;
      *(uint8_t *)(lVal_8 + 0x3ce2) = 1;
      *(uint64_t *)(lVal_8 + 0x3cd8) = 0xd3466acd2b3d1849;
      *(uint16_t *)(lVal_8 + 0x3ce0) = 0x7769;
      func_0x180673140(&LAB_1801b1750);
    }
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_8 + 0x3cd8);
    if (*(char *)(lVal_8 + 0x3ce2) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xbb2103bf0b4d771d;
      *(byte *)(lVal_8 + 0x3ce0) = *(byte *)(lVal_8 + 0x3ce0) ^ 0x1d;
      *(byte *)(lVal_8 + 0x3ce1) = *(byte *)(lVal_8 + 0x3ce1) ^ 0x77;
      *(uint8_t *)(lVal_8 + 0x3ce2) = 0;
    }
    local_98._0_16_ = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_6 = strlen((char *)pU64_1);
    if ((int64_t)sz_6 < 0) goto LAB_18013422b;
    if (sz_6 < 0x10) {
      pU64_13 = local_a8;
      uVal_16 = 0xf;
    }
    else {
      uVal_7 = sz_6 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_7) {
        uVal_16 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_16 + 0x28);
        pU64_13 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_8;
      }
      local_a8._0_8_ = pU64_13;
    }
    local_98._8_8_ = uVal_16;
    local_98._0_8_ = sz_6;
    func_0x1806aa960(pU64_13,pU64_1,sz_6);
    pU64_13[sz_6] = 0;
    pU64_13 = local_a8;
    uVal_9 = func_0x1801d3650(uVal_9,pU64_13,1);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3cf8) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x3cf8) = 1;
      *(uint8_t *)(lVal_8 + 0x3cf4) = 1;
      *(uint64_t *)(lVal_8 + 0x3ce8) = 0xb5b382d46dbb8c6f;
      *(uint32_t *)(lVal_8 + 0x3cf0) = 0x19bb8548;
      func_0x180673140(&LAB_1801b1780);
    }
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_8 + 0x3ce8);
    if (*(char *)(lVal_8 + 0x3cf4) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xd993efbb19cfe32d;
      *(uint *)(lVal_8 + 0x3cf0) = *(uint *)(lVal_8 + 0x3cf0) ^ 0x19cfe32d;
      *(uint8_t *)(lVal_8 + 0x3cf4) = 0;
    }
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b2 = 0;
    uStack_b0 = 0;
    local_c8 = (uint64_t ****)0x0;
    uStack_c0 = 0;
    uStack_ba = 0;
    sz_6 = strlen((char *)pU64_1);
    if ((int64_t)sz_6 < 0) goto LAB_180134231;
    if (sz_6 < 0x10) {
      ptr4_U64_14 = &local_c8;
      uVal_16 = 0xf;
    }
    else {
      uVal_7 = sz_6 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_7) {
        uVal_16 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        ptr4_U64_14 = (uint64_t ****)func_0x180672de0(uVal_16 + 1);
        local_c8 = ptr4_U64_14;
      }
      else {
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_16 + 0x28);
        ptr4_U64_14 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_14[-1] = ptr3_U64_10;
        local_c8 = ptr4_U64_14;
      }
    }
    uStack_b8 = (uint32_t)sz_6;
    uStack_b4 = (uint16_t)(sz_6 >> 0x20);
    uStack_b2 = (uint16_t)(sz_6 >> 0x30);
    uStack_b0 = uVal_16;
    func_0x1806aa960(ptr4_U64_14,pU64_1,sz_6);
    *(uint8_t *)((int64_t)ptr4_U64_14 + sz_6) = 0;
    uVal_9 = func_0x1801d3650(uVal_9,&local_c8,2);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3d10) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x3d10) = 1;
      *(uint64_t *)(lVal_8 + 0x3d00) = 0x2d49241ca7b3e607;
      *(uint32_t *)(lVal_8 + 0x3d08) = 0xa7afee2c;
      *(uint16_t *)(lVal_8 + 0x3d0c) = 0x173;
      func_0x180673140(&LAB_1801b17b0);
    }
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_8 + 0x3d00);
    if (*(char *)(lVal_8 + 0x3d0d) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x5f694973d3c78945;
      *(uint *)(lVal_8 + 0x3d08) = *(uint *)(lVal_8 + 0x3d08) ^ 0xd3c78945;
      *(byte *)(lVal_8 + 0x3d0c) = *(byte *)(lVal_8 + 0x3d0c) ^ 0x73;
      *(uint8_t *)(lVal_8 + 0x3d0d) = 0;
    }
    local_e8._0_16_ = (uint8_t  [16])0x0;
    local_f8 = (uint8_t  [16])0x0;
    sz_6 = strlen((char *)pU64_1);
    if ((int64_t)sz_6 < 0) goto LAB_180134237;
    if (sz_6 < 0x10) {
      pU64_15 = local_f8;
      uVal_16 = 0xf;
    }
    else {
      uVal_7 = sz_6 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_7) {
        uVal_16 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_8;
      }
      local_f8._0_8_ = pU64_15;
    }
    local_e8._8_8_ = uVal_16;
    local_e8._0_8_ = sz_6;
    func_0x1806aa960(pU64_15,pU64_1,sz_6);
    pU64_15[sz_6] = 0;
    func_0x1801d3650(uVal_9,local_f8,3);
    if (0xf < (uint64_t)local_e8._8_8_) {
      uVal_16 = local_e8._8_8_ + 1;
      lVal_8 = local_f8._0_8_;
      if (0xfff < uVal_16) {
        lVal_8 = *(int64_t *)(local_f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_8)) goto LAB_18013421d;
        uVal_16 = local_e8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_8,uVal_16);
    }
    if (0xf < uStack_b0) {
      uVal_16 = uStack_b0 + 1;
      ptr4_U64_14 = local_c8;
      if (0xfff < uVal_16) {
        ptr4_U64_14 = (uint64_t ****)local_c8[-1];
        if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18013421d;
        uVal_16 = uStack_b0 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_16);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_16 = local_98._8_8_ + 1;
      lVal_8 = local_a8._0_8_;
      if (0xfff < uVal_16) {
        lVal_8 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_8)) goto LAB_18013421d;
        uVal_16 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_8,uVal_16);
    }
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_16 = local_68._8_8_ + 1;
      lVal_8 = local_78._0_8_;
      if (0xfff < uVal_16) {
        lVal_8 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_8)) goto LAB_18013421d;
        uVal_16 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_8,uVal_16);
    }
    local_180 = 0;
    if (DAT_18083f800 != (uint64_t *)0x0) {
      local_180 = (**(func_ptr_t *)*DAT_18083f800)(DAT_18083f800,local_1b8);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3d14) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x3d14) = 1;
      *(uint16_t *)(lVal_8 + 0x3d11) = 0x137;
      func_0x180673140(&LAB_1801b17e0);
    }
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_8 + 0x3d11);
    if (*(char *)(lVal_8 + 0x3d12) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x37;
      *(uint8_t *)(lVal_8 + 0x3d12) = 0;
    }
    local_68._0_16_ = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [16])0x0;
    sz_6 = strlen((char *)pU8_2);
    if ((int64_t)sz_6 < 0) goto LAB_18013423d;
    uVal_16 = 0xf;
    if (0xf < sz_6) {
      uVal_7 = sz_6 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_7) {
        uVal_16 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        local_4c = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_4c = 1;
        lVal_8 = func_0x180672de0(uVal_16 + 0x28);
        pU64_12 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_8;
      }
      local_78._0_8_ = pU64_12;
    }
    local_68._8_8_ = uVal_16;
    local_68._0_8_ = sz_6;
    func_0x1806aa960(pU64_12,pU8_2,sz_6);
    pU64_12[sz_6] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3d20) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x3d20) = 1;
      *(uint64_t *)(lVal_8 + 0x3d18) = 0x127e90677909576;
      func_0x180673140(&LAB_1801b1800);
    }
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_8 + 0x3d18);
    if (*(char *)(lVal_8 + 0x3d1f) == '\x01') {
      *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_8 + 0x3d1d) << 8,*(uint32_t *)pU64_1) |
                (uint64_t)*(byte *)(lVal_8 + 0x3d1c) << 0x20) ^ SUB168(_DAT_1806b5af0,0);
    }
    local_98._0_16_ = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_6 = strlen((char *)pU64_1);
    if ((int64_t)sz_6 < 0) goto LAB_18013424a;
    uVal_16 = 0xf;
    if (0xf < sz_6) {
      uVal_7 = sz_6 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_7) {
        uVal_16 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        local_4b = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_4b = 1;
        lVal_8 = func_0x180672de0(uVal_16 + 0x28);
        pU64_13 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_8;
      }
      local_a8._0_8_ = pU64_13;
    }
    local_98._8_8_ = uVal_16;
    local_98._0_8_ = sz_6;
    func_0x1806aa960(pU64_13,pU64_1,sz_6);
    pU64_13[sz_6] = 0;
    pU64_12 = local_a8;
    pU64_13 = local_78;
    func_0x1801d3a80(local_80,pU64_12,pU64_13,local_d0,0,local_1b8,0);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_16 = local_98._8_8_ + 1;
      lVal_8 = local_a8._0_8_;
      if (0xfff < uVal_16) {
        lVal_8 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_8)) goto LAB_18013421d;
        uVal_16 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_8,uVal_16);
    }
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_16 = local_68._8_8_ + 1;
      lVal_8 = local_78._0_8_;
      if (0xfff < uVal_16) {
        lVal_8 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_8)) goto LAB_18013421d;
        uVal_16 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_8,uVal_16);
    }
    local_140 = 0;
    if (DAT_18083f800 != (uint64_t *)0x0) {
      local_140 = (**(func_ptr_t *)*DAT_18083f800)(DAT_18083f800,local_178);
    }
    pU64_11 = local_80 + 0x11;
    uVal_4 = *(uint8_t *)pU64_11;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3d24) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x3d24) = 1;
      *(uint16_t *)(lVal_8 + 0x3d21) = 0x135;
      func_0x180673140(&LAB_1801b1830);
    }
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_8 + 0x3d21);
    if (*(char *)(lVal_8 + 0x3d22) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x35;
      *(uint8_t *)(lVal_8 + 0x3d22) = 0;
    }
    local_68._0_16_ = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [16])0x0;
    sz_6 = strlen((char *)pU8_2);
    if ((int64_t)sz_6 < 0) goto LAB_180134257;
    uVal_16 = 0xf;
    if (0xf < sz_6) {
      uVal_7 = sz_6 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_7) {
        uVal_16 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        local_4d = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_4d = 1;
        lVal_8 = func_0x180672de0(uVal_16 + 0x28);
        pU64_13 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_8;
      }
      local_78._0_8_ = pU64_13;
    }
    local_68._8_8_ = uVal_16;
    local_68._0_8_ = sz_6;
    func_0x1806aa960(pU64_13,pU8_2,sz_6);
    pU64_13[sz_6] = 0;
    local_c8 = _DAT_1806b8e93;
    uStack_c0 = (undefined6)_UNK_1806b8e9b;
    uStack_ba = 0x9b3c;
    uStack_b8 = 0xf0b7441;
    uStack_b4 = 0xe51e;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3d3c) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x3d3c) = 1;
      func_0x18007cab0(lVal_8 + 0x3d25,&local_c8);
      func_0x180673140(&LAB_1801b1850);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x3d25);
    func_0x1801bc940(fnPtr_3);
    local_98._0_16_ = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_6 = strlen(fnPtr_3);
    if ((int64_t)sz_6 < 0) goto LAB_180134264;
    uVal_16 = 0xf;
    if (0xf < sz_6) {
      uVal_7 = sz_6 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_7) {
        uVal_16 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        local_49 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_49 = 1;
        lVal_8 = func_0x180672de0(uVal_16 + 0x28);
        pU64_12 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_8;
      }
      local_a8._0_8_ = pU64_12;
    }
    local_98._8_8_ = uVal_16;
    local_98._0_8_ = sz_6;
    func_0x1806aa960(pU64_12,fnPtr_3,sz_6);
    pU64_12[sz_6] = 0;
    pU64_12 = local_a8;
    pU64_13 = local_78;
    func_0x1801ccd70(local_80,pU64_12,pU64_13,pU64_11,uVal_4,local_178,0);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_16 = local_98._8_8_ + 1;
      lVal_8 = local_a8._0_8_;
      if (0xfff < uVal_16) {
        lVal_8 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_8)) goto LAB_18013421d;
        uVal_16 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_8,uVal_16);
    }
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_16 = local_68._8_8_ + 1;
      lVal_8 = local_78._0_8_;
      if (0xfff < uVal_16) {
        lVal_8 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_8)) goto LAB_18013421d;
        uVal_16 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_8,uVal_16);
    }
    local_100 = 0;
    if (DAT_18083f800 != (uint64_t *)0x0) {
      local_100 = (**(func_ptr_t *)*DAT_18083f800)(DAT_18083f800,local_138);
    }
    pU64_15 = (uint8_t *)((int64_t)local_80 + 0x89);
    uVal_4 = *pU64_15;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3d40) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x3d40) = 1;
      *(uint16_t *)(lVal_8 + 0x3d3d) = 0x199;
      func_0x180673140(&LAB_1801b1880);
    }
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_8 + 0x3d3d);
    if (*(char *)(lVal_8 + 0x3d3e) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x99;
      *(uint8_t *)(lVal_8 + 0x3d3e) = 0;
    }
    local_68._0_16_ = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [16])0x0;
    sz_6 = strlen((char *)pU8_2);
    if (-1 < (int64_t)sz_6) {
      uVal_16 = 0xf;
      if (0xf < sz_6) {
        uVal_7 = sz_6 | 0xf;
        uVal_16 = 0x16;
        if (0x16 < uVal_7) {
          uVal_16 = uVal_7;
        }
        if (uVal_7 < 0xfff) {
          local_4e = 1;
          pU64_13 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
        }
        else {
          local_4e = 1;
          lVal_8 = func_0x180672de0(uVal_16 + 0x28);
          pU64_13 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_13 + -8) = lVal_8;
        }
        local_78._0_8_ = pU64_13;
      }
      local_68._8_8_ = uVal_16;
      local_68._0_8_ = sz_6;
      func_0x1806aa960(pU64_13,pU8_2,sz_6);
      pU64_13[sz_6] = 0;
      local_c8 = _DAT_1806b8ea9;
      uStack_c0 = (undefined6)_UNK_1806b8eb1;
      uStack_ba = (uint16_t)((uint64_t)_UNK_1806b8eb1 >> 0x30);
      uStack_b8 = 0xc9f63ff5;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3d58) == '\0') {
        lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_8 + 0x3d58) = 1;
        func_0x18007cfc0(lVal_8 + 0x3d41,&local_c8);
        func_0x180673140(&LAB_1801b18a0);
      }
      fnPtr_3 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3d41)
      ;
      func_0x1801bc970(fnPtr_3);
      local_a8 = (uint8_t  [16])0x0;
      sz_6 = strlen(fnPtr_3);
      if (-1 < (int64_t)sz_6) {
        uVal_16 = 0xf;
        if (0xf < sz_6) {
          uVal_7 = sz_6 | 0xf;
          uVal_16 = 0x16;
          if (0x16 < uVal_7) {
            uVal_16 = uVal_7;
          }
          if (uVal_7 < 0xfff) {
            local_4a = 1;
            pU64_12 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
          }
          else {
            local_4a = 1;
            lVal_8 = func_0x180672de0(uVal_16 + 0x28);
            pU64_12 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_12 + -8) = lVal_8;
          }
          local_a8._0_8_ = pU64_12;
        }
        local_98._0_8_ = sz_6;
        local_98._8_8_ = uVal_16;
        func_0x1806aa960(pU64_12,fnPtr_3,sz_6);
        pU64_12[sz_6] = 0;
        func_0x1801ccd70(local_80,local_a8,local_78,pU64_15,uVal_4,local_138,0);
        if (0xf < (uint64_t)local_98._8_8_) {
          uVal_16 = local_98._8_8_ + 1;
          lVal_8 = local_a8._0_8_;
          if (0xfff < uVal_16) {
            lVal_8 = *(int64_t *)(local_a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_8)) goto LAB_18013421d;
            uVal_16 = local_98._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_8,uVal_16);
        }
        if (0xf < (uint64_t)local_68._8_8_) {
          uVal_16 = local_68._8_8_ + 1;
          lVal_8 = local_78._0_8_;
          if (0xfff < uVal_16) {
            lVal_8 = *(int64_t *)(local_78._0_8_ + -8);
            if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_8)) {
LAB_18013421d:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_16 = local_68._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_8,uVal_16);
        }
        return local_80;
      }
      goto LAB_18013427e;
    }
  }
  local_4e = 1;
  func_0x18007ba70();
LAB_18013427e:
  local_4a = 1;
  func_0x18007ba70();
  fnPtr_5 = (func_ptr_t )swi(3);
  pU64_11 = (uint64_t *)(*fnPtr_5)();
  return pU64_11;
}

// Unwind@180134290
void Unwind_180134290(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@1801342e0
void Unwind_1801342e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xb8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@180134330
void Unwind_180134330(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xf8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@180134380
void Unwind_180134380(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@1801343c0
void Unwind_1801343c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@180134400
void Unwind_180134400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180134440
void Unwind_180134440(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180134480
void Unwind_180134480(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@1801344c0
void Unwind_1801344c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x1ad) = 0;
  return;
}

// Unwind@180134500
void Unwind_180134500(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1ad);
  func_0x180001e70(param_2 + 0x180);
  *(uint8_t *)(param_2 + 0x1ac) = uVal_1;
  return;
}

// Unwind@180134550
void Unwind_180134550(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1ac) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@1801345b0
void Unwind_1801345b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x1af) = 0;
  return;
}

// Unwind@1801345f0
void Unwind_1801345f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1af);
  func_0x180001e70(param_2 + 0x180);
  *(uint8_t *)(param_2 + 0x1ab) = uVal_1;
  return;
}

// Unwind@180134640
void Unwind_180134640(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1ab) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@1801346a0
void Unwind_1801346a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x1ae) = 0;
  return;
}

// Unwind@1801346e0
void Unwind_1801346e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1ae);
  func_0x180001e70(param_2 + 0x180);
  *(uint8_t *)(param_2 + 0x1aa) = uVal_1;
  return;
}

// Unwind@180134730
void Unwind_180134730(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1aa) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@180134790
void Unwind_180134790(uint64_t param_1,int64_t param_2)
{
  func_0x1800822d0(*(uint64_t *)(param_2 + 0x128));
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x178));
  return;
}

// Unwind@1801347e0
void Unwind_1801347e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3d3c) = 0;
  *(uint8_t *)(param_2 + 0x1af) = 1;
  return;
}

// Unwind@180134830
void Unwind_180134830(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3d58) = 0;
  *(uint8_t *)(param_2 + 0x1ae) = 1;
  return;
}

// func_0x180134880
void func_0x180134880(int64_t param_1,uint64_t param_2)
{
  func_0x1801348a0(param_1,param_2,*(uint32_t *)(param_1 + 0x80),*(uint32_t *)(param_1 + 0x84));
  return;
}

// func_0x1801348a0
uint64_t * func_0x1801348a0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  char ch_1;
  int iVal_2;
  int64_t lVal_3;
  func_ptr_t fnPtr_4;
  uint64_t *pU64_5;
  uint32_t uVal_6;
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint32_t in_XMM2_Dc;
  uint32_t in_XMM2_Dd;
  uint32_t in_XMM3_Dc;
  uint32_t in_XMM3_Dd;
  uint8_t auStack_98 [40];
  uint8_t *local_70;
  float local_68;
  float fStack_64;
  uint64_t local_60;
  
  local_60 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  local_70 = &DAT_28d0f803f34a0611;
  lVal_3 = *(int64_t *)(DAT_180840a58 + 0x648);
  (**(func_ptr_t *)(*param_1 + 0x148))(param_1,&local_68);
  iVal_2 = *(int *)(param_1 + 0x15);
  auArr_7._8_4_ = in_XMM2_Dc;
  auArr_7._0_8_ = param_3;
  auArr_7._12_4_ = in_XMM2_Dd;
  auArr_8._8_4_ = in_XMM3_Dc;
  auArr_8._0_8_ = param_4;
  auArr_8._12_4_ = in_XMM3_Dd;
  auArr_8 = insertps(auArr_7,auArr_8,0x10);
  if (iVal_2 == 3) {
    *param_2 = CONCAT44(((float)((uint64_t)*(uint64_t *)(lVal_3 + 0x50) >> 0x20) - auArr_8._4_4_) -
                        fStack_64,((float)*(uint64_t *)(lVal_3 + 0x50) - auArr_8._0_4_) - local_68);
    ch_1 = *(char *)(param_1 + 0x11);
  }
  else if (iVal_2 == 2) {
    auArr_8 = insertps(auArr_8,ZEXT416((uint)((*(float *)(lVal_3 + 0x54) - (float)param_4) - fStack_64)
                                    ),0x10);
    *param_2 = auArr_8._0_8_;
    ch_1 = *(char *)(param_1 + 0x11);
  }
  else if (iVal_2 == 1) {
    auArr_8 = blendps(auArr_8,ZEXT416((uint)((*(float *)(lVal_3 + 0x50) - (float)param_3) - local_68)),
                     1);
    *param_2 = auArr_8._0_8_;
    ch_1 = *(char *)(param_1 + 0x11);
  }
  else {
    *param_2 = auArr_8._0_8_;
    ch_1 = *(char *)(param_1 + 0x11);
  }
  if (ch_1 == '\x01') {
    *(float *)((int64_t)param_2 + 4) =
         *(float *)(lVal_3 + 0x54) * DAT_1806aeae4 - DAT_1806aeae4 * fStack_64;
    ch_1 = *(char *)((int64_t)param_1 + 0x89);
  }
  else {
    ch_1 = *(char *)((int64_t)param_1 + 0x89);
  }
  if (ch_1 == '\x01') {
    *(float *)param_2 = *(float *)(lVal_3 + 0x50) * DAT_1806aeae4 - DAT_1806aeae4 * local_68;
  }
  local_70 = &DAT_28d0f803f34a0611;
  uVal_6 = func_0x180116d40(*(uint64_t *)(DAT_180840a58 + 0x648),*(uint32_t *)param_2);
  *(uint32_t *)param_2 = uVal_6;
  local_70 = &DAT_28d0f803f34a0611;
  uVal_6 = func_0x180116d40(*(uint64_t *)(DAT_180840a58 + 0x648),
                        *(uint32_t *)((int64_t)param_2 + 4));
  *(uint32_t *)((int64_t)param_2 + 4) = uVal_6;
  if (DAT_18083cf40 != (local_60 ^ (uint64_t)auStack_98)) {
    func_0x180673080(local_60 ^ (uint64_t)auStack_98);
    fnPtr_4 = (func_ptr_t )swi(3);
    pU64_5 = (uint64_t *)(*fnPtr_4)();
    return pU64_5;
  }
  return param_2;
}

// func_0x180134b20
uint64_t func_0x180134b20(void)
{
  char ch_1;
  uint64_t unaff_RSI;
  uint64_t uVal_2;
  undefined7 uVal_3;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f810) {
    func_0x180672ec0(&DAT_18083f810);
    if (DAT_18083f810 == -1) {
      DAT_18083f808 = func_0x180134bf0(&DAT_1808400a0);
      _Init_thread_footer(&DAT_18083f810);
    }
  }
  uVal_3 = (undefined7)((uint64_t)unaff_RSI >> 8);
  uVal_2 = CONCAT71(uVal_3,1);
  ch_1 = func_0x18045fc30();
  if (ch_1 == '\0') {
    if (*(char *)(DAT_18083f808 + 0x40) == '\x01') {
      ch_1 = func_0x1803d5ae0();
      uVal_2 = CONCAT71(uVal_3,ch_1 == '\x04');
    }
    else {
      uVal_2 = 0;
    }
  }
  return uVal_2 & 0xffffffff;
}

// Unwind@180134bc0
void Unwind_180134bc0(void)
{
  func_0x180672f60(&DAT_18083f810);
  return;
}

// func_0x180134bf0
uint64_t func_0x180134bf0(uint64_t param_1)
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
  func_0x180401850(param_1,&local_28,0x377269be);
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

// func_0x180134c70
uint64_t * func_0x180134c70(int64_t *param_1,uint64_t *param_2,int param_3,uint64_t *param_4)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  uint64_t *pU64_3;
  uint64_t uVal_4;
  uint8_t auArr_5 [16];
  uint8_t auStack_58 [40];
  uint64_t local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  local_30 = &DAT_28d0f803f34a0611;
  lVal_1 = *(int64_t *)(DAT_180840a58 + 0x648);
  (**(func_ptr_t *)(*param_1 + 0x148))(param_1,&local_30);
  if (param_3 == 3) {
    uVal_4 = CONCAT44(((float)((uint64_t)*(uint64_t *)(lVal_1 + 0x50) >> 0x20) -
                     (float)((uint64_t)*param_4 >> 0x20)) - local_30._4_4_,
                     ((float)*(uint64_t *)(lVal_1 + 0x50) - (float)*param_4) - (float)local_30);
  }
  else if (param_3 == 2) {
    auArr_5 = insertps(ZEXT416((uint)*(float *)param_4),
                      ZEXT416((uint)((*(float *)(lVal_1 + 0x54) - *(float *)((int64_t)param_4 + 4))
                                    - local_30._4_4_)),0x10);
    uVal_4 = auArr_5._0_8_;
  }
  else if (param_3 == 1) {
    auArr_5 = insertps(ZEXT416((uint)((*(float *)(lVal_1 + 0x50) - *(float *)param_4) -
                                    (float)local_30)),*(float *)((int64_t)param_4 + 4),0x10);
    uVal_4 = auArr_5._0_8_;
  }
  else {
    uVal_4 = *param_4;
  }
  *param_2 = uVal_4;
  if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_58)) {
    return param_2;
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_58);
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_3 = (uint64_t *)(*fnPtr_2)();
  return pU64_3;
}

// func_0x180134e50
void func_0x180134e50(int64_t *param_1)
{
  float fVal_1;
  float fVal_2;
  func_ptr_t fnPtr_3;
  char ch_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint8_t auStack_98 [40];
  uint8_t *local_70;
  float local_68;
  uint32_t local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  uint64_t local_50;
  
  local_50 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  (**(func_ptr_t *)(*param_1 + 0x148))(param_1,&local_58);
  if ((local_58 == 0.0) && (!NAN(local_58))) {
    if ((local_54 == 0.0) && (!NAN(local_54))) goto LAB_1801350a1;
  }
  func_0x1801348a0(param_1,&local_60,*(uint32_t *)(param_1 + 0x10),
                *(uint32_t *)((int64_t)param_1 + 0x84));
  uVal_5 = func_0x1800cf950();
  func_0x180107830(uVal_5,5,0,0);
  local_70 = &DAT_28d0f803f34a0611;
  fVal_1 = *(float *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x48);
  fVal_2 = *(float *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x50);
  ch_4 = (**(func_ptr_t *)(*param_1 + 0x150))
                    (param_1,((float)DAT_180840f68 / fVal_1) * fVal_2,
                     ((float)DAT_180840f6c / fVal_1) * fVal_2);
  fVal_1 = DAT_1806b26b4;
  local_68 = 0.0;
  if (ch_4 == '\0') {
    local_68 = DAT_1806b26b4;
  }
  local_70 = (uint8_t *)CONCAT44(local_68,0x3f800000);
  local_64 = 0x3f800000;
  func_0x180108220(uVal_5,&local_70);
  func_0x180107cc0(uVal_5,local_60,local_5c,0);
  func_0x180107cc0(uVal_5,local_60,local_54 + local_5c + fVal_1,0);
  func_0x180107cc0(uVal_5,local_58 + local_60 + fVal_1,local_54 + local_5c + fVal_1,0);
  func_0x180107cc0(uVal_5,local_58 + local_60 + fVal_1,local_5c,0);
  func_0x180107cc0(uVal_5,local_60,local_5c,0);
  uVal_5 = func_0x1800cf970();
  uVal_6 = func_0x1800cf950();
  uVal_7 = func_0x1800cf960();
  func_0x18011b260(uVal_7,uVal_6,uVal_5);
LAB_1801350a1:
  if (DAT_18083cf40 == (local_50 ^ (uint64_t)auStack_98)) {
    return;
  }
  func_0x180673080(local_50 ^ (uint64_t)auStack_98);
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// func_0x1801350e0
void func_0x1801350e0(int64_t param_1)
{
  uint8_t auArr_1 [16];
  
  auArr_1._8_8_ = 0;
  auArr_1._0_8_ = *(uint64_t *)(param_1 + 0x80);
  auArr_1 = maxps(ZEXT816(0),auArr_1);
  *(int64_t *)(param_1 + 0x80) = auArr_1._0_8_;
  return;
}

// Unwind@180135910
void Unwind_180135910(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180135940
void Unwind_180135940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180135970
void Unwind_180135970(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180135990
void Unwind_180135990(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x40);
  return;
}

// Unwind@1801359c0
void Unwind_1801359c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1801359f0
void Unwind_1801359f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180135a20
void Unwind_180135a20(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180135a40
void Unwind_180135a40(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x40);
  return;
}

// Unwind@180135a70
void Unwind_180135a70(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180135a90
void Unwind_180135a90(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x50);
  return;
}

// Unwind@180135ac0
void Unwind_180135ac0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180135ae0
void Unwind_180135ae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x180135b10
int64_t func_0x180135b10(char *param_1,uint64_t *param_2)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  uint8_t local_d0 [56];
  uint8_t local_98 [56];
  uint64_t local_60 [4];
  uint8_t local_40 [32];
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 == '\x01') {
    lVal_2 = func_0x1801bc990(*(uint64_t *)(param_1 + 8));
    if (lVal_2 != **(int64_t **)(param_1 + 8)) {
      return lVal_2 + 0x40;
    }
    func_0x180001060(local_60,*param_2);
    func_0x1800a5fb0(local_40,"key \'",local_60,"\' not found");
    func_0x18009f590(local_98,0x193,local_40,param_1);
    func_0x18067a120(local_98,&DAT_180768cf0);
  }
  else {
    local_60[0] = func_0x1800833d0(param_1);
    func_0x180083260(local_40,"cannot use at() with ",local_60);
    func_0x180082f00(local_d0,0x130,local_40,param_1);
    func_0x18067a120(local_d0,&DAT_180768700);
  }
  fnPtr_1 = (func_ptr_t )swi(3);
  lVal_2 = (*fnPtr_1)();
  return lVal_2;
}

// Unwind@180135c00
void Unwind_180135c00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb8);
  return;
}

// Unwind@180135c30
void Unwind_180135c30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb8);
  return;
}

// Unwind@180135c60
void Unwind_180135c60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x98);
  return;
}

// Unwind@180136740
void Unwind_180136740(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@180136780
void Unwind_180136780(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1801367c0
void Unwind_1801367c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@180136800
void Unwind_180136800(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@180136840
void Unwind_180136840(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@180136880
void Unwind_180136880(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1801368c0
void Unwind_1801368c0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0xa0);
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@180136900
void Unwind_180136900(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180136930
void Unwind_180136930(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180136960
byte ** func_0x180136960(byte *param_1,byte **param_2,uint64_t param_3,uint64_t param_4)
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
  func_0x1801bd0c0(pArr16_5,&local_60,param_3,param_4);
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

// Unwind@180136aa0
void Unwind_180136aa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// Unwind@180136ad0
void Unwind_180136ad0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x80),0x10);
  return;
}

// func_0x180136b00
byte ** func_0x180136b00(byte *param_1,byte **param_2,uint64_t param_3,uint64_t param_4)
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
  func_0x1801bd380(pArr16_5,&local_60,param_3,param_4);
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

// Unwind@180136c40
void Unwind_180136c40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// Unwind@180136c70
void Unwind_180136c70(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x80),0x10);
  return;
}

// func_0x180136cd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180136cd0(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  size_t sz_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint8_t *pU64_10;
  uint64_t uVal_11;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  size_t local_58;
  uint64_t local_50;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  uStack_48 = _UNK_1806b8edd;
  uStack_44 = _UNK_1806b8ee1;
  uStack_40 = _UNK_1806b8ee5;
  local_58 = CONCAT44(_UNK_1806b8ed1,_DAT_1806b8ecd);
  local_50 = CONCAT44(_DAT_1806b8ed9,_UNK_1806b8ed5);
  local_68._4_4_ = _UNK_1806b8ec1;
  local_68._0_4_ = _DAT_1806b8ebd;
  uStack_60._0_4_ = _UNK_1806b8ec5;
  uStack_60._4_4_ = _UNK_1806b8ec9;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3dd8) == '\0') {
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_9 + 0x3dd8) = 1;
    func_0x1801b1b20(lVal_9 + 0x3da9,local_68);
    func_0x180673140(&LAB_1801b1c60);
  }
  uVal_6 = _UNK_1806b5b0c;
  uVal_5 = _UNK_1806b5b08;
  uVal_4 = _UNK_1806b5b04;
  uVal_3 = _DAT_1806b5b00;
  lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_9 + 0x3da9);
  if (*(char *)(lVal_9 + 0x3dd5) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_9 + 0x3dad) ^ _UNK_1806b5b04;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b5b00;
    auArr_1._8_4_ = *(uint *)(lVal_9 + 0x3db1) ^ _UNK_1806b5b08;
    auArr_1._12_4_ = *(uint *)(lVal_9 + 0x3db5) ^ _UNK_1806b5b0c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_9 + 0x3dbd) ^ uVal_4;
    auArr_2._0_4_ = *(uint *)(lVal_9 + 0x3db9) ^ uVal_3;
    auArr_2._8_4_ = *(uint *)(lVal_9 + 0x3dc1) ^ uVal_5;
    auArr_2._12_4_ = *(uint *)(lVal_9 + 0x3dc5) ^ uVal_6;
    *(uint8_t (*)[16])(lVal_9 + 0x3db9) = auArr_2;
    *(uint64_t *)(lVal_9 + 0x3dc9) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_9 + 0x3dc9) >> 0x20) ^ _UNK_1806b5b14,
                  (uint)*(uint64_t *)(lVal_9 + 0x3dc9) ^ _DAT_1806b5b10);
    *(byte *)(lVal_9 + 0x3dd1) = *(byte *)(lVal_9 + 0x3dd1) ^ 0xdd;
    *(byte *)(lVal_9 + 0x3dd2) = *(byte *)(lVal_9 + 0x3dd2) ^ 0xd1;
    *(byte *)(lVal_9 + 0x3dd3) = *(byte *)(lVal_9 + 0x3dd3) ^ 0x69;
    *(byte *)(lVal_9 + 0x3dd4) = *(byte *)(lVal_9 + 0x3dd4) ^ 0xe5;
    *(uint8_t *)(lVal_9 + 0x3dd5) = 0;
  }
  _local_68 = ZEXT816(0);
  sz_7 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_7) {
    if (sz_7 < 0x10) {
      pU64_10 = local_68;
      uVal_11 = 0xf;
    }
    else {
      uVal_8 = sz_7 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_8) {
        uVal_11 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        pU64_10 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
      }
      else {
        lVal_9 = func_0x180672de0(uVal_11 + 0x28);
        pU64_10 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_10 + -8) = lVal_9;
      }
      local_68 = (uint8_t  [8])pU64_10;
    }
    local_58 = sz_7;
    local_50 = uVal_11;
    func_0x1806aa960(pU64_10,_Str,sz_7);
    pU64_10[sz_7] = 0;
    func_0x1801c2ba0(param_1,0,3,local_68);
    if (0xf < local_50) {
      uVal_11 = local_50 + 1;
      lVal_9 = (int64_t)local_68;
      if (0xfff < uVal_11) {
        lVal_9 = *(int64_t *)((int64_t)local_68 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_68 + -8) - lVal_9)) goto LAB_180136ec6;
        uVal_11 = local_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_11);
    }
    *param_1 = &PTR_LAB_1806b6cd0;
    return param_1;
  }
  func_0x18007ba70();
LAB_180136ec6:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180136ed0
void Unwind_180136ed0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180136f00
void Unwind_180136f00(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3dd8) = 0;
  return;
}

// Unwind@1801371f0
void Unwind_1801371f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3e00) = 0;
  return;
}

// Unwind@180137de0
void Unwind_180137de0(void)
{
  func_0x180672f60(&DAT_18083f820);
  return;
}

// Unwind@180137e20
void Unwind_180137e20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180137e60
void Unwind_180137e60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180137ea0
void Unwind_180137ea0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180137ee0
void Unwind_180137ee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180137f20
void Unwind_180137f20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180137f60
void Unwind_180137f60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x180137fa0
void func_0x180137fa0(int64_t param_1)
{
  int64_t lVal_1;
  
  lVal_1 = (**(func_ptr_t *)(**(int64_t **)(param_1 + 0x10) + 0xf8))();
  *(int64_t *)(param_1 + 0x18) = lVal_1;
  if (lVal_1 != 0) {
    return;
  }
  *(uint64_t *)(param_1 + 0x20) = 0;
  return;
}

// func_0x180138030
uint64_t func_0x180138030(uint64_t param_1)
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
  func_0x180401850(param_1,&local_28,0x6ab8a6d0);
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

// func_0x1801380b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801380b0(uint64_t *param_1)
{
  char *fnPtr_1;
  uint64_t *pU64_2;
  uint *pU64_3;
  byte *pU8_4;
  uint8_t (*_Str)[16];
  uint8_t uVal_5;
  uint32_t uVal_6;
  func_ptr_t fnPtr_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint32_t uVal_11;
  uint64_t *pU64_12;
  size_t sz_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  uint64_t ***ptr3_U64_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  uint64_t *pU64_19;
  uint64_t ****ptr4_U64_20;
  uint64_t ****ptr4_U64_21;
  uint8_t *pU64_22;
  uint8_t *pU64_23;
  uint8_t *pU64_24;
  uint64_t uVal_25;
  uint uVal_27;
  uint uVal_28;
  uint uVal_29;
  uint8_t auArr_26 [16];
  uint64_t in_stack_fffffffffffff808;
  uint32_t uVal_31;
  uint32_t *pU64_30;
  uint64_t in_stack_fffffffffffff810;
  uint32_t uVal_33;
  uint64_t uVal_32;
  uint uVal_34;
  uint uVal_35;
  uint8_t **local_7c8;
  uint64_t *local_7c0;
  uint8_t ***local_790;
  uint8_t **local_788;
  uint64_t *local_780;
  uint8_t ***local_750;
  uint8_t **local_748;
  uint64_t *local_740;
  uint8_t ***local_710;
  uint8_t **local_708;
  uint64_t *local_700;
  uint8_t ***local_6d0;
  uint32_t local_6c8;
  uint32_t uStack_6c4;
  uint32_t uStack_6c0;
  uint32_t uStack_6bc;
  uint32_t local_6b8;
  uint32_t uStack_6b4;
  uint32_t uStack_6b0;
  uint32_t uStack_6ac;
  uint32_t local_6a8;
  uint32_t uStack_6a4;
  uint32_t uStack_6a0;
  uint32_t uStack_69c;
  uint8_t local_690 [56];
  uint64_t local_658;
  uint8_t local_650 [56];
  uint64_t local_618;
  uint8_t local_610 [56];
  uint64_t local_5d8;
  uint8_t local_5d0 [56];
  uint64_t local_598;
  uint8_t local_590 [56];
  uint64_t local_558;
  uint8_t local_550 [56];
  uint64_t local_518;
  uint8_t local_510 [56];
  uint64_t local_4d8;
  uint8_t local_4d0 [56];
  uint64_t local_498;
  uint8_t local_490 [56];
  uint64_t local_458;
  uint8_t local_450 [56];
  uint64_t local_418;
  uint8_t local_410 [56];
  uint64_t local_3d8;
  uint8_t local_3d0 [56];
  uint64_t local_398;
  uint8_t local_390 [56];
  uint64_t local_358;
  uint8_t local_350 [56];
  uint64_t local_318;
  uint8_t local_310 [56];
  uint64_t local_2d8;
  uint8_t local_2d0 [56];
  uint64_t local_298;
  uint8_t local_290 [56];
  uint64_t local_258;
  uint8_t local_250 [56];
  uint64_t local_218;
  uint8_t local_210 [56];
  uint64_t local_1d8;
  uint8_t local_1d0 [56];
  uint64_t local_198;
  uint8_t local_190 [56];
  uint64_t local_158;
  uint64_t *local_150;
  uint64_t *local_148;
  uint64_t *local_140;
  uint64_t local_138;
  uint64_t uStack_130;
  uint16_t local_128;
  uint8_t local_118 [16];
  uint32_t local_108;
  uint32_t uStack_104;
  uint32_t uStack_100;
  uint32_t uStack_fc;
  uint8_t local_f8;
  uint8_t uStack_f7;
  uint16_t uStack_f6;
  uint32_t uStack_f4;
  uint8_t uStack_f0;
  uint16_t uStack_ef;
  uint8_t uStack_ed;
  uint8_t uStack_ec;
  uint16_t uStack_eb;
  uint32_t uStack_e9;
  uint32_t uStack_e5;
  uint8_t uStack_e1;
  uint8_t uStack_e0;
  uint16_t local_df;
  uint8_t uStack_dd;
  uint8_t uStack_dc;
  uint16_t uStack_db;
  uint8_t uStack_d9;
  uint8_t uStack_d8;
  uint32_t uStack_d7;
  uint16_t uStack_d3;
  uint8_t uStack_d1;
  uint8_t uStack_d0;
  uint8_t local_c2;
  uint8_t local_c1;
  uint8_t local_c0;
  uint8_t local_bf;
  uint8_t local_be;
  uint8_t local_bd;
  uint8_t local_bc;
  uint8_t local_bb;
  uint8_t local_ba;
  uint8_t local_b9;
  uint8_t local_b8;
  uint8_t local_b7;
  uint8_t local_b6;
  uint8_t local_b5;
  uint8_t local_b4;
  uint8_t local_b3;
  uint8_t local_b2;
  uint8_t local_b1;
  uint8_t local_b0;
  uint8_t local_af;
  uint8_t local_ae;
  uint8_t local_ad;
  uint8_t local_ac;
  uint8_t local_ab;
  uint8_t local_aa;
  uint8_t local_a9;
  uint8_t local_a8;
  uint8_t local_a7;
  uint8_t local_a6;
  uint8_t local_a5;
  uint8_t local_a4;
  uint8_t local_a3;
  uint8_t local_a2;
  uint8_t local_a1;
  uint8_t local_a0;
  uint8_t local_9f;
  uint8_t local_9e;
  uint8_t local_9d;
  uint8_t local_9c;
  uint8_t local_9b;
  uint8_t local_9a;
  uint8_t local_99;
  uint8_t local_98;
  uint8_t local_97;
  uint8_t local_96;
  uint8_t local_95;
  uint8_t local_94;
  uint8_t local_93;
  uint8_t local_92;
  uint8_t local_91;
  uint64_t *local_90;
  uint64_t ****local_88;
  uint8_t uStack_80;
  uint16_t uStack_7f;
  uint8_t uStack_7d;
  uint8_t uStack_7c;
  uint16_t uStack_7b;
  uint8_t uStack_79;
  uint8_t uStack_78;
  uint16_t uStack_77;
  uint8_t uStack_75;
  uint8_t uStack_74;
  uint16_t uStack_73;
  uint8_t uStack_71;
  uint8_t uStack_70;
  uint16_t uStack_6f;
  uint8_t uStack_6d;
  uint32_t uStack_6c;
  uint64_t local_60;
  
  uVal_35 = (uint)((uint64_t)in_stack_fffffffffffff810 >> 0x20);
  uVal_31 = (uint32_t)((uint64_t)in_stack_fffffffffffff808 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  local_108 = _DAT_1806b8f0a;
  uStack_104 = _UNK_1806b8f0e;
  uStack_100 = _UNK_1806b8f12;
  uStack_fc = _UNK_1806b8f16;
  local_118._8_8_ = _UNK_1806b8f02;
  local_118._0_8_ = _DAT_1806b8efa;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3e24) == '\0') {
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_15 + 0x3e24) = 1;
    func_0x18008f8e0(lVal_15 + 0x3e01,local_118);
    func_0x180673140(&LAB_1801b1ce0);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3e01);
  func_0x1801bd780(fnPtr_1);
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  local_118 = (uint8_t  [16])0x0;
  sz_13 = strlen(fnPtr_1);
  if ((int64_t)sz_13 < 0) {
    func_0x18007ba70();
LAB_18013ecaa:
    local_91 = 1;
    func_0x18007ba70();
LAB_18013ecb7:
    local_ab = 1;
    func_0x18007ba70();
LAB_18013ecc4:
    local_92 = 1;
    func_0x18007ba70();
LAB_18013ecd1:
    local_ac = 1;
    func_0x18007ba70();
LAB_18013ecde:
    local_93 = 1;
    func_0x18007ba70();
LAB_18013eceb:
    local_ad = 1;
    func_0x18007ba70();
LAB_18013ecf8:
    local_94 = 1;
    func_0x18007ba70();
LAB_18013ed05:
    local_ae = 1;
    func_0x18007ba70();
LAB_18013ed12:
    local_95 = 1;
    func_0x18007ba70();
LAB_18013ed1f:
    local_af = 1;
    func_0x18007ba70();
LAB_18013ed2c:
    local_96 = 1;
    func_0x18007ba70();
LAB_18013ed39:
    local_b0 = 1;
    func_0x18007ba70();
LAB_18013ed46:
    local_97 = 1;
    func_0x18007ba70();
LAB_18013ed53:
    local_b1 = 1;
    func_0x18007ba70();
LAB_18013ed60:
    local_98 = 1;
    func_0x18007ba70();
LAB_18013ed6d:
    local_b2 = 1;
    func_0x18007ba70();
LAB_18013ed7a:
    local_99 = 1;
    func_0x18007ba70();
LAB_18013ed87:
    local_b3 = 1;
    func_0x18007ba70();
LAB_18013ed94:
    local_9a = 1;
    func_0x18007ba70();
LAB_18013eda1:
    local_b4 = 1;
    func_0x18007ba70();
LAB_18013edae:
    local_9b = 1;
    func_0x18007ba70();
LAB_18013edbb:
    local_b5 = 1;
    func_0x18007ba70();
LAB_18013edc8:
    local_9d = 1;
    func_0x18007ba70();
LAB_18013edd5:
    local_9c = 1;
    func_0x18007ba70();
LAB_18013ede2:
    local_9f = 1;
    func_0x18007ba70();
LAB_18013edef:
    local_9e = 1;
    func_0x18007ba70();
LAB_18013edfc:
    local_a1 = 1;
    func_0x18007ba70();
LAB_18013ee09:
    local_a0 = 1;
    func_0x18007ba70();
LAB_18013ee16:
    local_a3 = 1;
    func_0x18007ba70();
LAB_18013ee23:
    local_a2 = 1;
    func_0x18007ba70();
LAB_18013ee30:
    local_a5 = 1;
    func_0x18007ba70();
LAB_18013ee3d:
    local_a4 = 1;
    func_0x18007ba70();
LAB_18013ee4a:
    local_a7 = 1;
    func_0x18007ba70();
LAB_18013ee57:
    local_a6 = 1;
    func_0x18007ba70();
LAB_18013ee64:
    local_a8 = 1;
    func_0x18007ba70();
LAB_18013ee71:
    local_b6 = 1;
    func_0x18007ba70();
LAB_18013ee7e:
    local_a9 = 1;
    func_0x18007ba70();
LAB_18013ee8b:
    local_b7 = 1;
    func_0x18007ba70();
LAB_18013ee98:
    local_aa = 1;
    func_0x18007ba70();
LAB_18013eea5:
    local_b8 = 1;
    func_0x18007ba70();
LAB_18013eeb2:
    local_ba = 1;
    func_0x18007ba70();
LAB_18013eebf:
    local_b9 = 1;
    func_0x18007ba70();
LAB_18013eecc:
    local_bc = 1;
    func_0x18007ba70();
LAB_18013eed9:
    local_bb = 1;
    func_0x18007ba70();
LAB_18013eee6:
    local_be = 1;
    func_0x18007ba70();
LAB_18013eef3:
    local_bd = 1;
    func_0x18007ba70();
LAB_18013ef00:
    local_c0 = 1;
    func_0x18007ba70();
LAB_18013ef0d:
    local_bf = 1;
    func_0x18007ba70();
LAB_18013ef1a:
    local_c2 = 1;
    func_0x18007ba70();
LAB_18013ef27:
    local_c1 = 1;
    func_0x18007ba70();
LAB_18013ef34:
    func_0x18007ba70();
LAB_18013ef3a:
    func_0x18007ba70();
LAB_18013ef40:
    func_0x18007ba70();
LAB_18013ef46:
    func_0x18007ba70();
  }
  else {
    local_90 = param_1;
    if (sz_13 < 0x10) {
      pU64_23 = local_118;
      uVal_25 = 0xf;
    }
    else {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_13);
    pU64_23[sz_13] = 0;
    pU64_19 = local_90;
    pU64_23 = local_118;
    func_0x1801c2ba0(local_90,0,0,pU64_23);
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    *pU64_19 = &PTR_LAB_1806b6e00;
    pU64_19[0x10] = 0x8000000080;
    *(uint32_t *)(pU64_19 + 0x11) = 0x1010101;
    *(uint16_t *)((int64_t)pU64_19 + 0x8c) = 0;
    uVal_11 = _UNK_1806b5b2c;
    uVal_6 = _UNK_1806b5b28;
    uVal_33 = _UNK_1806b5b24;
    *(uint32_t *)(pU64_19 + 0x12) = _DAT_1806b5b20;
    *(uint32_t *)((int64_t)pU64_19 + 0x94) = uVal_33;
    *(uint32_t *)(pU64_19 + 0x13) = uVal_6;
    *(uint32_t *)((int64_t)pU64_19 + 0x9c) = uVal_11;
    uVal_11 = _UNK_1806b5b3c;
    uVal_6 = _UNK_1806b5b38;
    uVal_33 = _UNK_1806b5b34;
    *(uint32_t *)(pU64_19 + 0x14) = _DAT_1806b5b30;
    *(uint32_t *)((int64_t)pU64_19 + 0xa4) = uVal_33;
    *(uint32_t *)(pU64_19 + 0x15) = uVal_6;
    *(uint32_t *)((int64_t)pU64_19 + 0xac) = uVal_11;
    uVal_18 = _UNK_1806b5b48;
    pU64_19[0x16] = _DAT_1806b5b40;
    pU64_19[0x17] = uVal_18;
    *(uint8_t *)(pU64_19 + 0x18) = 0;
    local_150 = pU64_19 + 0x19;
    *(uint8_t *)(pU64_19 + 0x20) = 0;
    *(uint16_t *)(pU64_19 + 0x21) = 0;
    *(uint8_t *)((int64_t)pU64_19 + 0x28c) = 0;
    *(uint8_t *)(pU64_19 + 0x6a) = 0;
    *(uint16_t *)(pU64_19 + 0x6b) = 0;
    *(uint8_t *)((int64_t)pU64_19 + 0x4dc) = 0;
    *(uint8_t (*)[16])(pU64_19 + 0x19) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x1b) = ZEXT816(0);
    pU64_19[0x1d] = 0;
    *(uint8_t (*)[16])(pU64_19 + 0x22) = ZEXT816(0);
    *(uint16_t *)(pU64_19 + 0x24) = 0;
    func_0x1806ab010(pU64_19 + 0x25,0,0x12e);
    *(uint8_t (*)[16])(pU64_19 + 0x4b) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x4d) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x4f) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x52) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x54) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x56) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x58) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x5a) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x5c) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_19 + 0x2ec) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x60) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x62) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 100) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x66) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x6c) = ZEXT816(0);
    *(uint16_t *)(pU64_19 + 0x6e) = 0;
    func_0x1806ab010(pU64_19 + 0x6f,0,0x12e);
    *(uint8_t (*)[16])(pU64_19 + 0x95) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x97) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x99) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x9c) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0x9e) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xa0) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xa2) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xa4) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xa6) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_19 + 0x53c) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xaa) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xac) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xae) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xb0) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xb2) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xb4) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xb6) = ZEXT816(0);
    pU64_19[0xb8] = 0;
    pU64_19[0xb0] = 0xf;
    *(uint8_t (*)[16])(pU64_19 + 0xb1) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xb3) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xb5) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_19 + 0x5b1) = ZEXT816(0);
    *(uint8_t *)(pU64_19 + 0xb9) = 0;
    local_148 = pU64_19 + 0xba;
    *(uint8_t (*)[16])(pU64_19 + 0xba) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xbc) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_19 + 0xbe) = ZEXT816(0);
    *(uint16_t *)(pU64_19 + 0xc0) = 0x100;
    *(uint8_t (*)[16])((int64_t)pU64_19 + 0x604) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_19 + 0x614) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_19 + 0x624) = ZEXT816(0);
    *(uint32_t *)((int64_t)pU64_19 + 0x634) = 0xffffffff;
    *(uint32_t *)(pU64_19 + 199) = 0xffffffff;
    *(uint32_t *)((int64_t)pU64_19 + 0x63c) = 0xffffffff;
    *(uint32_t *)(pU64_19 + 200) = 0xffffffff;
    *(uint64_t *)((int64_t)pU64_19 + 0x644) = 0xffffffffffffffff;
    *(uint16_t *)(pU64_19 + 0xd0) = 0;
    local_140 = pU64_19 + 0xd1;
    *(uint8_t (*)[16])(pU64_19 + 0xd1) = ZEXT816(0);
    pU64_19[0xd3] = 0;
    pU64_19[0xd4] = 0xf;
    *(uint8_t (*)[16])(pU64_19 + 0xd5) = ZEXT816(0);
    *(uint64_t *)((int64_t)pU64_19 + 0x6b5) = 0;
    local_658 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_658 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_690);
      pU64_19 = local_90;
    }
    uVal_33 = *(uint32_t *)(pU64_19 + 0x10);
    uStack_78 = (uint8_t)((uint)_UNK_1806b8f27 >> 0x18);
    uStack_77 = (uint16_t)_UNK_1806b8f2b;
    uStack_75 = (uint8_t)((uint)_UNK_1806b8f2b >> 0x10);
    uStack_74 = (uint8_t)((uint)_UNK_1806b8f2b >> 0x18);
    uStack_73 = (uint16_t)_UNK_1806b8f2f;
    uStack_71 = (uint8_t)((uint)_UNK_1806b8f2f >> 0x10);
    uStack_70 = (uint8_t)((uint)_UNK_1806b8f2f >> 0x18);
    local_88 = _DAT_1806b8f1a;
    uStack_80 = UNK_1806b8f22;
    uStack_7f = (uint16_t)_DAT_1806b8f23;
    uStack_7d = (uint8_t)((uint)_DAT_1806b8f23 >> 0x10);
    uStack_7c = (uint8_t)((uint)_DAT_1806b8f23 >> 0x18);
    uStack_7b = (uint16_t)_UNK_1806b8f27;
    uStack_79 = (uint8_t)((uint)_UNK_1806b8f27 >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3e40) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x3e40) = 1;
      func_0x1800904a0(lVal_15 + 0x3e25,&local_88);
      func_0x180673140(&LAB_1801b1d10);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x3e25);
    func_0x1801bd7b0(fnPtr_1);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ecaa;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_91 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_91 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_13);
    pU64_23[sz_13] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3e54) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x3e54) = 1;
      *(uint8_t *)(lVal_15 + 0x3e50) = 1;
      *(uint64_t *)(lVal_15 + 0x3e48) = 0xefbecbe8c2b4038a;
      func_0x180673140(&LAB_1801b1d40);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x3e48);
    if (*(char *)(lVal_15 + 0x3e50) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xefc7bf81a1d573c5;
      *(uint8_t *)(lVal_15 + 0x3e50) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013ecb7;
    if (sz_13 < 0x10) {
      ptr4_U64_21 = &local_88;
      uVal_25 = 0xf;
    }
    else {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_ab = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_ab = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU64_2,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_34 = 0;
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801ccff0(local_90,ptr4_U64_21,pU64_23,pU64_19 + 0x10,CONCAT44(uVal_31,uVal_33),
                  (uint64_t)uVal_35 << 0x20,0xff,local_690,0);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    local_618 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_618 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_650);
    }
    pU64_19 = local_90 + 0x11;
    uVal_5 = *(uint8_t *)pU64_19;
    uStack_d8 = UNK_1806b8f73;
    uStack_d7 = _UNK_1806b8f74;
    uStack_d3 = (uint16_t)_UNK_1806b8f78;
    uStack_d1 = (uint8_t)((uint)_UNK_1806b8f78 >> 0x10);
    uStack_d0 = (uint8_t)((uint)_UNK_1806b8f78 >> 0x18);
    uStack_e5._1_3_ = (undefined3)_UNK_1806b8f67;
    uStack_e5 = CONCAT31(uStack_e5._1_3_,(char)((uint)_DAT_1806b8f63 >> 0x18));
    uStack_e1 = (uint8_t)((uint)_UNK_1806b8f67 >> 0x18);
    uStack_e0 = (uint8_t)_UNK_1806b8f6b;
    local_df = (uint16_t)((uint)_UNK_1806b8f6b >> 8);
    uStack_dd = (uint8_t)((uint)_UNK_1806b8f6b >> 0x18);
    uStack_dc = (uint8_t)_UNK_1806b8f6f;
    uStack_db = (uint16_t)((uint)_UNK_1806b8f6f >> 8);
    uStack_d9 = (uint8_t)((uint)_UNK_1806b8f6f >> 0x18);
    local_f8 = (uint8_t)_DAT_1806b8f53;
    uStack_f7 = (uint8_t)((uint)_DAT_1806b8f53 >> 8);
    uStack_f6 = (uint16_t)((uint)_DAT_1806b8f53 >> 0x10);
    uStack_f4 = _UNK_1806b8f57;
    uStack_f0 = (uint8_t)_UNK_1806b8f5b;
    uStack_ef = (uint16_t)((uint)_UNK_1806b8f5b >> 8);
    uStack_ed = (uint8_t)((uint)_UNK_1806b8f5b >> 0x18);
    uStack_ec = (uint8_t)_UNK_1806b8f5f;
    uStack_eb = (uint16_t)((uint)_UNK_1806b8f5f >> 8);
    uStack_e9._0_1_ = (uint8_t)((uint)_UNK_1806b8f5f >> 0x18);
    uStack_e9 = CONCAT31((int3)_DAT_1806b8f63,(uint8_t)uStack_e9);
    local_108 = _DAT_1806b8f43;
    uStack_104 = _UNK_1806b8f47;
    uStack_100 = _UNK_1806b8f4b;
    uStack_fc = _UNK_1806b8f4f;
    local_118._8_8_ = _UNK_1806b8f3b;
    local_118._0_8_ = _DAT_1806b8f33;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3ea0) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x3ea0) = 1;
      func_0x1801b1d60(lVal_15 + 0x3e55,local_118);
      func_0x180673140(&LAB_1801b1f70);
    }
    uVal_10 = _UNK_1806b2cbc;
    uVal_9 = _UNK_1806b2cb8;
    uVal_8 = _UNK_1806b2cb4;
    uVal_35 = _DAT_1806b2cb0;
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_15 + 0x3e55);
    if (*(char *)(lVal_15 + 0x3e9e) == '\x01') {
      uVal_27 = *(uint *)(lVal_15 + 0x3e59) ^ _UNK_1806b2cb4;
      uVal_28 = *(uint *)(lVal_15 + 0x3e5d) ^ _UNK_1806b2cb8;
      uVal_29 = *(uint *)(lVal_15 + 0x3e61) ^ _UNK_1806b2cbc;
      *pU64_3 = *pU64_3 ^ _DAT_1806b2cb0;
      *(uint *)(lVal_15 + 0x3e59) = uVal_27;
      *(uint *)(lVal_15 + 0x3e5d) = uVal_28;
      *(uint *)(lVal_15 + 0x3e61) = uVal_29;
      *(uint *)(lVal_15 + 0x3e65) = *(uint *)(lVal_15 + 0x3e65) ^ uVal_35;
      *(uint *)(lVal_15 + 0x3e69) = *(uint *)(lVal_15 + 0x3e69) ^ uVal_8;
      *(uint *)(lVal_15 + 0x3e6d) = *(uint *)(lVal_15 + 0x3e6d) ^ uVal_9;
      *(uint *)(lVal_15 + 0x3e71) = *(uint *)(lVal_15 + 0x3e71) ^ uVal_10;
      *(uint *)(lVal_15 + 0x3e75) = *(uint *)(lVal_15 + 0x3e75) ^ uVal_35;
      *(uint *)(lVal_15 + 0x3e79) = *(uint *)(lVal_15 + 0x3e79) ^ uVal_8;
      *(uint *)(lVal_15 + 0x3e7d) = *(uint *)(lVal_15 + 0x3e7d) ^ uVal_9;
      *(uint *)(lVal_15 + 0x3e81) = *(uint *)(lVal_15 + 0x3e81) ^ uVal_10;
      *(uint *)(lVal_15 + 0x3e85) = *(uint *)(lVal_15 + 0x3e85) ^ uVal_35;
      *(uint *)(lVal_15 + 0x3e89) = *(uint *)(lVal_15 + 0x3e89) ^ uVal_8;
      *(uint *)(lVal_15 + 0x3e8d) = *(uint *)(lVal_15 + 0x3e8d) ^ uVal_9;
      *(uint *)(lVal_15 + 0x3e91) = *(uint *)(lVal_15 + 0x3e91) ^ uVal_10;
      *(uint64_t *)(lVal_15 + 0x3e95) = *(uint64_t *)(lVal_15 + 0x3e95) ^ SUB168(_DAT_1806b54e0,0);
      *(byte *)(lVal_15 + 0x3e9d) = *(byte *)(lVal_15 + 0x3e9d) ^ 0x35;
      *(uint8_t *)(lVal_15 + 0x3e9e) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU64_3);
    if ((int64_t)sz_13 < 0) goto LAB_18013ecc4;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_92 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_92 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU64_3,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3eac) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x3eac) = 1;
      *(uint8_t *)(lVal_15 + 0x3ea8) = 1;
      *(uint32_t *)(lVal_15 + 0x3ea4) = 0x45dbd874;
      func_0x180673140(&LAB_1801b1fb0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_15 + 0x3ea4);
    if (*(char *)(lVal_15 + 0x3ea8) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x45a9b135;
      *(uint8_t *)(lVal_15 + 0x3ea8) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_3);
    if ((int64_t)sz_13 < 0) goto LAB_18013ecd1;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_ac = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_ac = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU64_3,sz_13);
    pU64_23[sz_13] = 0;
    uVal_34 = uVal_34 & 0xffffff00;
    pU64_23 = local_118;
    ptr4_U64_21 = &local_88;
    func_0x1801ccd70(local_90,pU64_23,ptr4_U64_21,pU64_19,uVal_5,local_650,uVal_34);
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    local_7c8 = &PTR_LAB_1806ba910;
    local_7c0 = local_90;
    local_790 = &local_7c8;
    local_6c8 = *(uint32_t *)(local_90 + 0x12);
    uStack_6c4 = *(uint32_t *)((int64_t)local_90 + 0x94);
    uStack_6c0 = *(uint32_t *)(local_90 + 0x13);
    uStack_6bc = *(uint32_t *)((int64_t)local_90 + 0x9c);
    uStack_78 = (uint8_t)((uint)_UNK_1806b8f89 >> 0x18);
    uStack_77 = (uint16_t)_UNK_1806b8f8d;
    uStack_75 = (uint8_t)((uint)_UNK_1806b8f8d >> 0x10);
    uStack_74 = (uint8_t)((uint)_UNK_1806b8f8d >> 0x18);
    uStack_73 = (uint16_t)_UNK_1806b8f91;
    uStack_71 = (uint8_t)((uint)_UNK_1806b8f91 >> 0x10);
    uStack_70 = (uint8_t)((uint)_UNK_1806b8f91 >> 0x18);
    local_88 = _DAT_1806b8f7c;
    uStack_80 = UNK_1806b8f84;
    uStack_7f = (uint16_t)_DAT_1806b8f85;
    uStack_7d = (uint8_t)((uint)_DAT_1806b8f85 >> 0x10);
    uStack_7c = (uint8_t)((uint)_DAT_1806b8f85 >> 0x18);
    uStack_7b = (uint16_t)_UNK_1806b8f89;
    uStack_79 = (uint8_t)((uint)_UNK_1806b8f89 >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3ec8) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x3ec8) = 1;
      func_0x1800904a0(lVal_15 + 0x3ead,&local_88);
      func_0x180673140(&LAB_1801b1fd0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x3ead);
    func_0x1801bd7e0(fnPtr_1);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ecde;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_93 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_93 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_13);
    pU64_23[sz_13] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3edc) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x3edc) = 1;
      *(uint8_t *)(lVal_15 + 0x3eda) = 1;
      *(uint64_t *)(lVal_15 + 0x3ed0) = 0x88d36244f94f5804;
      *(uint16_t *)(lVal_15 + 0x3ed8) = 0x3137;
      func_0x180673140(&LAB_1801b2000);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x3ed0);
    if (*(char *)(lVal_15 + 0x3eda) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xe7bf0d27d93d3145;
      *(byte *)(lVal_15 + 0x3ed8) = *(byte *)(lVal_15 + 0x3ed8) ^ 0x45;
      *(byte *)(lVal_15 + 0x3ed9) = *(byte *)(lVal_15 + 0x3ed9) ^ 0x31;
      *(uint8_t *)(lVal_15 + 0x3eda) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013eceb;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_ad = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_ad = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    pU64_12 = local_90;
    pU64_19 = local_90 + 0x12;
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU64_2,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_34 = uVal_34 & 0xffffff00;
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801cd600(pU64_12,ptr4_U64_21,pU64_23,pU64_19,&local_6c8,&local_7c8,uVal_34);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    local_5d8 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_5d8 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_610);
    }
    pU64_24 = (uint8_t *)((int64_t)local_90 + 0x89);
    uVal_5 = *pU64_24;
    uStack_e5._1_3_ = (undefined3)_UNK_1806b8fc9;
    uStack_e5 = CONCAT31(uStack_e5._1_3_,(char)((uint)_DAT_1806b8fc5 >> 0x18));
    uStack_e1 = (uint8_t)((uint)_UNK_1806b8fc9 >> 0x18);
    uStack_e0 = (uint8_t)_UNK_1806b8fcd;
    local_df = (uint16_t)((uint)_UNK_1806b8fcd >> 8);
    uStack_dd = (uint8_t)((uint)_UNK_1806b8fcd >> 0x18);
    uStack_dc = (uint8_t)_UNK_1806b8fd1;
    uStack_db = (uint16_t)((uint)_UNK_1806b8fd1 >> 8);
    uStack_d9 = (uint8_t)((uint)_UNK_1806b8fd1 >> 0x18);
    local_f8 = (uint8_t)_DAT_1806b8fb5;
    uStack_f7 = (uint8_t)((uint)_DAT_1806b8fb5 >> 8);
    uStack_f6 = (uint16_t)((uint)_DAT_1806b8fb5 >> 0x10);
    uStack_f4 = _UNK_1806b8fb9;
    uStack_f0 = (uint8_t)_UNK_1806b8fbd;
    uStack_ef = (uint16_t)((uint)_UNK_1806b8fbd >> 8);
    uStack_ed = (uint8_t)((uint)_UNK_1806b8fbd >> 0x18);
    uStack_ec = (uint8_t)_UNK_1806b8fc1;
    uStack_eb = (uint16_t)((uint)_UNK_1806b8fc1 >> 8);
    uStack_e9._0_1_ = (uint8_t)((uint)_UNK_1806b8fc1 >> 0x18);
    uStack_e9 = CONCAT31((int3)_DAT_1806b8fc5,(uint8_t)uStack_e9);
    local_108 = _DAT_1806b8fa5;
    uStack_104 = _UNK_1806b8fa9;
    uStack_100 = _UNK_1806b8fad;
    uStack_fc = _UNK_1806b8fb1;
    local_118._8_8_ = _UNK_1806b8f9d;
    local_118._0_8_ = _DAT_1806b8f95;
    uStack_d8 = 0x6f;
    uStack_d7 = 0xde673d57;
    uStack_d3 = 0x4460;
    uStack_d1 = 0xbb;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3f28) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x3f28) = 1;
      func_0x1801b2030(lVal_15 + 0x3edd,local_118);
      func_0x180673140(&LAB_1801b2230);
    }
    uVal_10 = _UNK_1806b2d8c;
    uVal_9 = _UNK_1806b2d88;
    uVal_8 = _UNK_1806b2d84;
    uVal_35 = _DAT_1806b2d80;
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_15 + 0x3edd);
    if (*(char *)(lVal_15 + 0x3f25) == '\x01') {
      uVal_27 = *(uint *)(lVal_15 + 0x3ee1) ^ _UNK_1806b2d84;
      uVal_28 = *(uint *)(lVal_15 + 0x3ee5) ^ _UNK_1806b2d88;
      uVal_29 = *(uint *)(lVal_15 + 0x3ee9) ^ _UNK_1806b2d8c;
      *pU64_3 = *pU64_3 ^ _DAT_1806b2d80;
      *(uint *)(lVal_15 + 0x3ee1) = uVal_27;
      *(uint *)(lVal_15 + 0x3ee5) = uVal_28;
      *(uint *)(lVal_15 + 0x3ee9) = uVal_29;
      *(uint *)(lVal_15 + 0x3eed) = *(uint *)(lVal_15 + 0x3eed) ^ uVal_35;
      *(uint *)(lVal_15 + 0x3ef1) = *(uint *)(lVal_15 + 0x3ef1) ^ uVal_8;
      *(uint *)(lVal_15 + 0x3ef5) = *(uint *)(lVal_15 + 0x3ef5) ^ uVal_9;
      *(uint *)(lVal_15 + 0x3ef9) = *(uint *)(lVal_15 + 0x3ef9) ^ uVal_10;
      *(uint *)(lVal_15 + 0x3efd) = *(uint *)(lVal_15 + 0x3efd) ^ uVal_35;
      *(uint *)(lVal_15 + 0x3f01) = *(uint *)(lVal_15 + 0x3f01) ^ uVal_8;
      *(uint *)(lVal_15 + 0x3f05) = *(uint *)(lVal_15 + 0x3f05) ^ uVal_9;
      *(uint *)(lVal_15 + 0x3f09) = *(uint *)(lVal_15 + 0x3f09) ^ uVal_10;
      *(uint *)(lVal_15 + 0x3f0d) = *(uint *)(lVal_15 + 0x3f0d) ^ uVal_35;
      *(uint *)(lVal_15 + 0x3f11) = *(uint *)(lVal_15 + 0x3f11) ^ uVal_8;
      *(uint *)(lVal_15 + 0x3f15) = *(uint *)(lVal_15 + 0x3f15) ^ uVal_9;
      *(uint *)(lVal_15 + 0x3f19) = *(uint *)(lVal_15 + 0x3f19) ^ uVal_10;
      *(uint64_t *)(lVal_15 + 0x3f1d) = *(uint64_t *)(lVal_15 + 0x3f1d) ^ SUB168(_DAT_1806b5b50,0);
      *(uint8_t *)(lVal_15 + 0x3f25) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU64_3);
    if ((int64_t)sz_13 < 0) goto LAB_18013ecf8;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_94 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_94 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU64_3,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3f34) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x3f34) = 1;
      *(uint8_t *)(lVal_15 + 0x3f32) = 1;
      *(uint32_t *)(lVal_15 + 0x3f2c) = 0x6522054a;
      *(uint16_t *)(lVal_15 + 0x3f30) = 0x3d8;
      func_0x180673140(&LAB_1801b2270);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_15 + 0x3f2c);
    if (*(char *)(lVal_15 + 0x3f32) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xb4d771d;
      *(byte *)(lVal_15 + 0x3f30) = *(byte *)(lVal_15 + 0x3f30) ^ 0xbf;
      *(byte *)(lVal_15 + 0x3f31) = *(byte *)(lVal_15 + 0x3f31) ^ 3;
      *(uint8_t *)(lVal_15 + 0x3f32) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_3);
    if ((int64_t)sz_13 < 0) goto LAB_18013ed05;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_ae = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_ae = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU64_3,sz_13);
    pU64_23[sz_13] = 0;
    uVal_34 = uVal_34 & 0xffffff00;
    pU64_23 = local_118;
    ptr4_U64_21 = &local_88;
    func_0x1801ccd70(local_90,pU64_23,ptr4_U64_21,pU64_24,uVal_5,local_610,uVal_34);
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    local_788 = &PTR_LAB_1806ba940;
    local_780 = local_90;
    local_750 = &local_788;
    local_6b8 = *(uint32_t *)(local_90 + 0x14);
    uStack_6b4 = *(uint32_t *)((int64_t)local_90 + 0xa4);
    uStack_6b0 = *(uint32_t *)(local_90 + 0x15);
    uStack_6ac = *(uint32_t *)((int64_t)local_90 + 0xac);
    uStack_78 = (uint8_t)((uint)_UNK_1806b8fec >> 8);
    uStack_77 = (uint16_t)((uint)_UNK_1806b8fec >> 0x10);
    uStack_75 = (uint8_t)_UNK_1806b8ff0;
    uStack_74 = (uint8_t)((uint)_UNK_1806b8ff0 >> 8);
    uStack_73 = (uint16_t)((uint)_UNK_1806b8ff0 >> 0x10);
    uStack_71 = (uint8_t)_UNK_1806b8ff4;
    uStack_70 = (uint8_t)((uint)_UNK_1806b8ff4 >> 8);
    uStack_6f = (uint16_t)((uint)_UNK_1806b8ff4 >> 0x10);
    local_88 = _DAT_1806b8fdd;
    uStack_80 = (uint8_t)_UNK_1806b8fe5;
    uStack_7f = (uint16_t)((uint3)_UNK_1806b8fe5 >> 8);
    uStack_7d = (uint8_t)_DAT_1806b8fe8;
    uStack_7c = (uint8_t)((uint)_DAT_1806b8fe8 >> 8);
    uStack_7b = (uint16_t)((uint)_DAT_1806b8fe8 >> 0x10);
    uStack_79 = UNK_1806b8fec;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3f54) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x3f54) = 1;
      func_0x18007c9b0(lVal_15 + 0x3f35,&local_88);
      func_0x180673140(&LAB_1801b22a0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x3f35);
    func_0x1801bd840(fnPtr_1);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ed12;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_95 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_95 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_13);
    pU64_23[sz_13] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3f68) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x3f68) = 1;
      *(uint8_t *)(lVal_15 + 0x3f64) = 1;
      *(uint64_t *)(lVal_15 + 0x3f58) = 0xb6f0cfdc77a0917a;
      *(uint32_t *)(lVal_15 + 0x3f60) = 0x19bd8c41;
      func_0x180673140(&LAB_1801b22d0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x3f58);
    if (*(char *)(lVal_15 + 0x3f64) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xd993efbb19cfe32d;
      *(uint *)(lVal_15 + 0x3f60) = *(uint *)(lVal_15 + 0x3f60) ^ 0x19cfe32d;
      *(uint8_t *)(lVal_15 + 0x3f64) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013ed1f;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_af = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_af = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    pU64_12 = local_90;
    pU64_19 = local_90 + 0x14;
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU64_2,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_34 = uVal_34 & 0xffffff00;
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801cd600(pU64_12,ptr4_U64_21,pU64_23,pU64_19,&local_6b8,&local_788,uVal_34);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    pU64_19 = local_90;
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    local_748 = &PTR_LAB_1806ba940;
    local_740 = pU64_19;
    local_710 = &local_748;
    uVal_5 = *(uint8_t *)((int64_t)pU64_19 + 0x8d);
    local_f8 = UNK_1806b9018;
    uStack_f7 = (uint8_t)_UNK_1806b9019;
    uStack_f6 = (uint16_t)((uint)_UNK_1806b9019 >> 8);
    uStack_f4._1_3_ = (undefined3)_UNK_1806b901d;
    uStack_f4 = CONCAT31(uStack_f4._1_3_,(char)((uint)_UNK_1806b9019 >> 0x18));
    uStack_f0 = (uint8_t)((uint)_UNK_1806b901d >> 0x18);
    uStack_ef = (uint16_t)_UNK_1806b9021;
    uStack_ed = (uint8_t)((uint)_UNK_1806b9021 >> 0x10);
    uStack_ec = (uint8_t)((uint)_UNK_1806b9021 >> 0x18);
    local_108 = _DAT_1806b9008;
    uStack_104 = _UNK_1806b900c;
    uStack_100 = _UNK_1806b9010;
    uStack_fc = _UNK_1806b9014;
    local_118._8_8_ = _UNK_1806b9000;
    local_118._0_8_ = _DAT_1806b8ff8;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3f98) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x3f98) = 1;
      func_0x1801b2300(lVal_15 + 0x3f69,local_118);
      func_0x180673140(&LAB_1801b2450);
    }
    uVal_10 = _UNK_1806b560c;
    uVal_9 = _UNK_1806b5608;
    uVal_8 = _UNK_1806b5604;
    uVal_35 = _DAT_1806b5600;
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_15 + 0x3f69);
    if (*(char *)(lVal_15 + 0x3f96) == '\x01') {
      uVal_27 = *(uint *)(lVal_15 + 0x3f6d) ^ _UNK_1806b5604;
      uVal_28 = *(uint *)(lVal_15 + 0x3f71) ^ _UNK_1806b5608;
      uVal_29 = *(uint *)(lVal_15 + 0x3f75) ^ _UNK_1806b560c;
      *pU64_3 = *pU64_3 ^ _DAT_1806b5600;
      *(uint *)(lVal_15 + 0x3f6d) = uVal_27;
      *(uint *)(lVal_15 + 0x3f71) = uVal_28;
      *(uint *)(lVal_15 + 0x3f75) = uVal_29;
      *(uint *)(lVal_15 + 0x3f79) = *(uint *)(lVal_15 + 0x3f79) ^ uVal_35;
      *(uint *)(lVal_15 + 0x3f7d) = *(uint *)(lVal_15 + 0x3f7d) ^ uVal_8;
      *(uint *)(lVal_15 + 0x3f81) = *(uint *)(lVal_15 + 0x3f81) ^ uVal_9;
      *(uint *)(lVal_15 + 0x3f85) = *(uint *)(lVal_15 + 0x3f85) ^ uVal_10;
      *(uint64_t *)(lVal_15 + 0x3f89) = *(uint64_t *)(lVal_15 + 0x3f89) ^ SUB168(_DAT_1806b5b60,0);
      *(byte *)(lVal_15 + 0x3f91) = *(byte *)(lVal_15 + 0x3f91) ^ 0x45;
      *(byte *)(lVal_15 + 0x3f92) = *(byte *)(lVal_15 + 0x3f92) ^ 0x89;
      *(byte *)(lVal_15 + 0x3f93) = *(byte *)(lVal_15 + 0x3f93) ^ 199;
      *(byte *)(lVal_15 + 0x3f94) = *(byte *)(lVal_15 + 0x3f94) ^ 0xd3;
      *(byte *)(lVal_15 + 0x3f95) = *(byte *)(lVal_15 + 0x3f95) ^ 0x73;
      *(uint8_t *)(lVal_15 + 0x3f96) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU64_3);
    if ((int64_t)sz_13 < 0) goto LAB_18013ed2c;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_96 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_96 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU64_3,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3fac) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x3fac) = 1;
      *(uint64_t *)(lVal_15 + 0x3fa0) = 0x3e492c01bca9ee0c;
      *(uint32_t *)(lVal_15 + 0x3fa8) = 0x1c7fb2c;
      func_0x180673140(&LAB_1801b2480);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x3fa0);
    if (*(char *)(lVal_15 + 0x3fab) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x5f694973d3c78945;
      *(uint *)(lVal_15 + 0x3fa8) =
           (*(uint *)(lVal_15 + 0x3fa8) & 0xffff | (uint)*(byte *)(lVal_15 + 0x3faa) << 0x10) ^
           SUB164(_DAT_1806b26e0,0);
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013ed39;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_b0 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_b0 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    pU64_19 = local_90;
    lVal_15 = (int64_t)local_90 + 0x8d;
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU64_2,sz_13);
    pU64_23[sz_13] = 0;
    uVal_34 = uVal_34 & 0xffffff00;
    pU64_23 = local_118;
    ptr4_U64_21 = &local_88;
    func_0x1801ccd70(pU64_19,pU64_23,ptr4_U64_21,lVal_15,uVal_5,&local_748,uVal_34);
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    pU64_19 = local_90;
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    local_708 = &PTR_LAB_1806ba970;
    local_700 = pU64_19;
    local_6d0 = &local_708;
    local_6a8 = *(uint32_t *)(pU64_19 + 0x16);
    uStack_6a4 = *(uint32_t *)((int64_t)pU64_19 + 0xb4);
    uStack_6a0 = *(uint32_t *)(pU64_19 + 0x17);
    uStack_69c = *(uint32_t *)((int64_t)pU64_19 + 0xbc);
    uStack_e5._1_3_ = (undefined3)_UNK_1806b9059;
    uStack_e5 = CONCAT31(uStack_e5._1_3_,(char)((uint)_DAT_1806b9055 >> 0x18));
    uStack_e1 = (uint8_t)((uint)_UNK_1806b9059 >> 0x18);
    uStack_e0 = (uint8_t)_UNK_1806b905d;
    local_df = (uint16_t)((uint)_UNK_1806b905d >> 8);
    uStack_dd = (uint8_t)((uint)_UNK_1806b905d >> 0x18);
    uStack_dc = (uint8_t)_UNK_1806b9061;
    uStack_db = (uint16_t)((uint)_UNK_1806b9061 >> 8);
    local_f8 = (uint8_t)_DAT_1806b9045;
    uStack_f7 = (uint8_t)((uint)_DAT_1806b9045 >> 8);
    uStack_f6 = (uint16_t)((uint)_DAT_1806b9045 >> 0x10);
    uStack_f4 = _UNK_1806b9049;
    uStack_f0 = (uint8_t)_UNK_1806b904d;
    uStack_ef = (uint16_t)((uint)_UNK_1806b904d >> 8);
    uStack_ed = (uint8_t)((uint)_UNK_1806b904d >> 0x18);
    uStack_ec = (uint8_t)_UNK_1806b9051;
    uStack_eb = (uint16_t)((uint)_UNK_1806b9051 >> 8);
    uStack_e9._0_1_ = (uint8_t)((uint)_UNK_1806b9051 >> 0x18);
    uStack_e9 = CONCAT31((int3)_DAT_1806b9055,(uint8_t)uStack_e9);
    local_108 = _DAT_1806b9035;
    uStack_104 = _UNK_1806b9039;
    uStack_100 = _UNK_1806b903d;
    uStack_fc = _UNK_1806b9041;
    local_118._8_8_ = _UNK_1806b902d;
    local_118._0_8_ = _DAT_1806b9025;
    uStack_d9 = 0x9d;
    uStack_d8 = 0x15;
    uStack_d7 = 0x20b137a;
    uStack_d3 = 0x5397;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3ff8) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x3ff8) = 1;
      func_0x1801b24b0(lVal_15 + 0x3fad,local_118);
      func_0x180673140(&LAB_1801b26b0);
    }
    uVal_10 = _UNK_1806af24c;
    uVal_9 = _UNK_1806af248;
    uVal_8 = _UNK_1806af244;
    uVal_35 = _DAT_1806af240;
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_15 + 0x3fad);
    if (*(char *)(lVal_15 + 0x3ff4) == '\x01') {
      uVal_27 = *(uint *)(lVal_15 + 0x3fb1) ^ _UNK_1806af244;
      uVal_28 = *(uint *)(lVal_15 + 0x3fb5) ^ _UNK_1806af248;
      uVal_29 = *(uint *)(lVal_15 + 0x3fb9) ^ _UNK_1806af24c;
      *pU64_3 = *pU64_3 ^ _DAT_1806af240;
      *(uint *)(lVal_15 + 0x3fb1) = uVal_27;
      *(uint *)(lVal_15 + 0x3fb5) = uVal_28;
      *(uint *)(lVal_15 + 0x3fb9) = uVal_29;
      *(uint *)(lVal_15 + 0x3fbd) = *(uint *)(lVal_15 + 0x3fbd) ^ uVal_35;
      *(uint *)(lVal_15 + 0x3fc1) = *(uint *)(lVal_15 + 0x3fc1) ^ uVal_8;
      *(uint *)(lVal_15 + 0x3fc5) = *(uint *)(lVal_15 + 0x3fc5) ^ uVal_9;
      *(uint *)(lVal_15 + 0x3fc9) = *(uint *)(lVal_15 + 0x3fc9) ^ uVal_10;
      *(uint *)(lVal_15 + 0x3fcd) = *(uint *)(lVal_15 + 0x3fcd) ^ uVal_35;
      *(uint *)(lVal_15 + 0x3fd1) = *(uint *)(lVal_15 + 0x3fd1) ^ uVal_8;
      *(uint *)(lVal_15 + 0x3fd5) = *(uint *)(lVal_15 + 0x3fd5) ^ uVal_9;
      *(uint *)(lVal_15 + 0x3fd9) = *(uint *)(lVal_15 + 0x3fd9) ^ uVal_10;
      *(uint *)(lVal_15 + 0x3fdd) = *(uint *)(lVal_15 + 0x3fdd) ^ uVal_35;
      *(uint *)(lVal_15 + 0x3fe1) = *(uint *)(lVal_15 + 0x3fe1) ^ uVal_8;
      *(uint *)(lVal_15 + 0x3fe5) = *(uint *)(lVal_15 + 0x3fe5) ^ uVal_9;
      *(uint *)(lVal_15 + 0x3fe9) = *(uint *)(lVal_15 + 0x3fe9) ^ uVal_10;
      *(uint *)(lVal_15 + 0x3fed) = *(uint *)(lVal_15 + 0x3fed) ^ 0x63671535;
      *(byte *)(lVal_15 + 0x3ff1) = *(byte *)(lVal_15 + 0x3ff1) ^ 0x67;
      *(byte *)(lVal_15 + 0x3ff2) = *(byte *)(lVal_15 + 0x3ff2) ^ 0xe5;
      *(byte *)(lVal_15 + 0x3ff3) = *(byte *)(lVal_15 + 0x3ff3) ^ 0x53;
      *(uint8_t *)(lVal_15 + 0x3ff4) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU64_3);
    if ((int64_t)sz_13 < 0) goto LAB_18013ed46;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_97 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_97 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU64_3,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x400c) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x400c) = 1;
      *(uint8_t *)(lVal_15 + 0x400a) = 1;
      *(uint64_t *)(lVal_15 + 0x4000) = 0x9a3f8a04431f7c78;
      *(uint16_t *)(lVal_15 + 0x4008) = 0x1547;
      func_0x180673140(&LAB_1801b26f0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x4000);
    if (*(char *)(lVal_15 + 0x400a) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xf553e56763671535;
      *(byte *)(lVal_15 + 0x4008) = *(byte *)(lVal_15 + 0x4008) ^ 0x35;
      *(byte *)(lVal_15 + 0x4009) = *(byte *)(lVal_15 + 0x4009) ^ 0x15;
      *(uint8_t *)(lVal_15 + 0x400a) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013ed53;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_b1 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_b1 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    pU64_12 = local_90;
    pU64_19 = local_90 + 0x16;
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU64_2,sz_13);
    pU64_23[sz_13] = 0;
    pU64_30 = &local_6a8;
    uVal_34 = uVal_34 & 0xffffff00;
    pU64_23 = local_118;
    ptr4_U64_21 = &local_88;
    func_0x1801cd600(pU64_12,pU64_23,ptr4_U64_21,pU64_19,pU64_30,&local_708,uVal_34);
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    local_598 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_598 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_5d0);
    }
    pU64_24 = (uint8_t *)((int64_t)local_90 + 0x601);
    uVal_5 = *pU64_24;
    uStack_e5 = _UNK_1806b909f;
    uStack_e1 = (uint8_t)_UNK_1806b90a3;
    uStack_e0 = (uint8_t)((uint)_UNK_1806b90a3 >> 8);
    local_df = (uint16_t)((uint)_UNK_1806b90a3 >> 0x10);
    local_f8 = (uint8_t)_DAT_1806b908c;
    uStack_f7 = (uint8_t)((uint)_DAT_1806b908c >> 8);
    uStack_f6 = (uint16_t)((uint)_DAT_1806b908c >> 0x10);
    uStack_f4 = _UNK_1806b9090;
    uStack_f0 = (uint8_t)_UNK_1806b9094;
    uStack_ef = (uint16_t)((uint)_UNK_1806b9094 >> 8);
    uStack_ed = (uint8_t)((uint)_UNK_1806b9094 >> 0x18);
    uStack_ec = (uint8_t)_UNK_1806b9098;
    uStack_eb = (uint16_t)((uint)_UNK_1806b9098 >> 8);
    uStack_e9._0_1_ = (uint8_t)((uint)_UNK_1806b9098 >> 0x18);
    uStack_e9 = CONCAT31(_UNK_1806b909c,(uint8_t)uStack_e9);
    local_108 = _DAT_1806b907c;
    uStack_104 = _UNK_1806b9080;
    uStack_100 = _UNK_1806b9084;
    uStack_fc = _UNK_1806b9088;
    local_118._8_8_ = _UNK_1806b9074;
    local_118._0_8_ = _DAT_1806b906c;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x404c) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x404c) = 1;
      func_0x1801b2720(lVal_15 + 0x400d,local_118);
      func_0x180673140(&LAB_1801b28d0);
    }
    uVal_10 = _UNK_1806b4ebc;
    uVal_9 = _UNK_1806b4eb8;
    uVal_8 = _UNK_1806b4eb4;
    uVal_35 = _DAT_1806b4eb0;
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_15 + 0x400d);
    if (*(char *)(lVal_15 + 0x4048) == '\x01') {
      uVal_27 = *(uint *)(lVal_15 + 0x4011) ^ _UNK_1806b4eb4;
      uVal_28 = *(uint *)(lVal_15 + 0x4015) ^ _UNK_1806b4eb8;
      uVal_29 = *(uint *)(lVal_15 + 0x4019) ^ _UNK_1806b4ebc;
      *pU64_3 = *pU64_3 ^ _DAT_1806b4eb0;
      *(uint *)(lVal_15 + 0x4011) = uVal_27;
      *(uint *)(lVal_15 + 0x4015) = uVal_28;
      *(uint *)(lVal_15 + 0x4019) = uVal_29;
      *(uint *)(lVal_15 + 0x401d) = *(uint *)(lVal_15 + 0x401d) ^ uVal_35;
      *(uint *)(lVal_15 + 0x4021) = *(uint *)(lVal_15 + 0x4021) ^ uVal_8;
      *(uint *)(lVal_15 + 0x4025) = *(uint *)(lVal_15 + 0x4025) ^ uVal_9;
      *(uint *)(lVal_15 + 0x4029) = *(uint *)(lVal_15 + 0x4029) ^ uVal_10;
      *(uint *)(lVal_15 + 0x402d) = *(uint *)(lVal_15 + 0x402d) ^ uVal_35;
      *(uint *)(lVal_15 + 0x4031) = *(uint *)(lVal_15 + 0x4031) ^ uVal_8;
      *(uint *)(lVal_15 + 0x4035) = *(uint *)(lVal_15 + 0x4035) ^ uVal_9;
      *(uint *)(lVal_15 + 0x4039) = *(uint *)(lVal_15 + 0x4039) ^ uVal_10;
      *(uint64_t *)(lVal_15 + 0x403d) = *(uint64_t *)(lVal_15 + 0x403d) ^ SUB168(_DAT_1806b5b70,0);
      *(byte *)(lVal_15 + 0x4045) = *(byte *)(lVal_15 + 0x4045) ^ 0x99;
      *(byte *)(lVal_15 + 0x4046) = *(byte *)(lVal_15 + 0x4046) ^ 0x53;
      *(byte *)(lVal_15 + 0x4047) = *(byte *)(lVal_15 + 0x4047) ^ 0x8f;
      *(uint8_t *)(lVal_15 + 0x4048) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU64_3);
    if ((int64_t)sz_13 < 0) goto LAB_18013ed60;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_98 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_98 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU64_3,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4060) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4060) = 1;
      *(uint8_t *)(lVal_15 + 0x405e) = 1;
      *(uint64_t *)(lVal_15 + 0x4050) = 0x91acb7ffacfc36cb;
      *(uint32_t *)(lVal_15 + 0x4058) = 0xa8e03fb9;
      *(uint16_t *)(lVal_15 + 0x405c) = 0x97ef;
      func_0x180673140(&LAB_1801b2910);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x4050);
    if (*(char *)(lVal_15 + 0x405e) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xffc3978bc98f5399;
      *(uint *)(lVal_15 + 0x4058) = *(uint *)(lVal_15 + 0x4058) ^ 0xc98f5399;
      *(byte *)(lVal_15 + 0x405c) = *(byte *)(lVal_15 + 0x405c) ^ 0x8b;
      *(byte *)(lVal_15 + 0x405d) = *(byte *)(lVal_15 + 0x405d) ^ 0x97;
      *(uint8_t *)(lVal_15 + 0x405e) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013ed6d;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_b2 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_b2 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU64_2,sz_13);
    pU64_23[sz_13] = 0;
    pU64_23 = local_5d0;
    uVal_18 = CONCAT71((int7)((uint64_t)pU64_30 >> 8),uVal_5);
    pU64_22 = local_118;
    ptr4_U64_21 = &local_88;
    func_0x1801ccd70(local_90,pU64_22,ptr4_U64_21,pU64_24,uVal_18,pU64_23,uVal_34 & 0xffffff00);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    local_558 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_558 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_590);
    }
    pU64_30 = (uint32_t *)((int64_t)local_90 + 0x604);
    uVal_33 = *pU64_30;
    uStack_78 = (uint8_t)_UNK_1806b90b7;
    uStack_77 = (uint16_t)((uint)_UNK_1806b90b7 >> 8);
    uStack_75 = (uint8_t)((uint)_UNK_1806b90b7 >> 0x18);
    uStack_74 = (uint8_t)_UNK_1806b90bb;
    uStack_73 = (uint16_t)((uint)_UNK_1806b90bb >> 8);
    uStack_71 = (uint8_t)((uint)_UNK_1806b90bb >> 0x18);
    uStack_70 = (uint8_t)_UNK_1806b90bf;
    uStack_6f = (uint16_t)((uint)_UNK_1806b90bf >> 8);
    uStack_6d = (uint8_t)((uint)_UNK_1806b90bf >> 0x18);
    local_88 = _DAT_1806b90a7;
    uStack_80 = (uint8_t)_UNK_1806b90af;
    uStack_7f = (uint16_t)((uint)_UNK_1806b90af >> 8);
    uStack_7d = (uint8_t)((uint)_UNK_1806b90af >> 0x18);
    uStack_7c = (uint8_t)_DAT_1806b90b3;
    uStack_7b = (uint16_t)((uint)_DAT_1806b90b3 >> 8);
    uStack_79 = (uint8_t)((uint)_DAT_1806b90b3 >> 0x18);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4080) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4080) = 1;
      func_0x18008fba0(lVal_15 + 0x4061,&local_88);
      func_0x180673140(&LAB_1801b2940);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x4061);
    func_0x1801bd900(fnPtr_1);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ed7a;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_99 = 1;
        pU64_22 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_99 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_22 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_22 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_22;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_22,fnPtr_1,sz_13);
    pU64_22[sz_13] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4094) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4094) = 1;
      *(uint64_t *)(lVal_15 + 0x4088) = 0xc3f5e1caf67beda8;
      *(uint16_t *)(lVal_15 + 0x4090) = 0x1e7;
      func_0x180673140(&LAB_1801b2970);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x4088);
    if (*(char *)(lVal_15 + 0x4091) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x9bd595af851d8be7;
      *(byte *)(lVal_15 + 0x4090) = *(byte *)(lVal_15 + 0x4090) ^ 0xe7;
      *(uint8_t *)(lVal_15 + 0x4091) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013ed87;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_b3 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_b3 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU64_2,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_33);
    uVal_14 = (uint64_t)pU64_23 & 0xffffffff00000000;
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801ccff0(local_90,ptr4_U64_21,pU64_23,pU64_30,uVal_18,uVal_14,1,local_590,0);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_17 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_17) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_17 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_17);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_17 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_17) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_17 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_17);
    }
    local_518 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_518 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_550);
    }
    pU64_30 = (uint32_t *)((int64_t)local_90 + 0x60c);
    uVal_33 = *pU64_30;
    uStack_78 = (uint8_t)_UNK_1806b90d3;
    uStack_77 = (uint16_t)((uint)_UNK_1806b90d3 >> 8);
    uStack_75 = (uint8_t)((uint)_UNK_1806b90d3 >> 0x18);
    uStack_74 = (uint8_t)_UNK_1806b90d7;
    uStack_73 = (uint16_t)((uint)_UNK_1806b90d7 >> 8);
    uStack_71 = (uint8_t)((uint)_UNK_1806b90d7 >> 0x18);
    uStack_70 = (uint8_t)_UNK_1806b90db;
    uStack_6f = (uint16_t)((uint)_UNK_1806b90db >> 8);
    uStack_6d = (uint8_t)((uint)_UNK_1806b90db >> 0x18);
    local_88 = _DAT_1806b90c3;
    uStack_80 = (uint8_t)_UNK_1806b90cb;
    uStack_7f = (uint16_t)((uint)_UNK_1806b90cb >> 8);
    uStack_7d = (uint8_t)((uint)_UNK_1806b90cb >> 0x18);
    uStack_7c = (uint8_t)_DAT_1806b90cf;
    uStack_7b = (uint16_t)((uint)_DAT_1806b90cf >> 8);
    uStack_79 = (uint8_t)((uint)_DAT_1806b90cf >> 0x18);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x40b4) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x40b4) = 1;
      func_0x18008fba0(lVal_15 + 0x4095,&local_88);
      func_0x180673140(&LAB_1801b29a0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x4095);
    func_0x1801bd930(fnPtr_1);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ed94;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_17 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_17) {
        uVal_25 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_9a = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_9a = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_13);
    pU64_23[sz_13] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x40c4) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x40c4) = 1;
      *(uint64_t *)(lVal_15 + 0x40b8) = 0x60c3b5fec8f5353c;
      *(uint16_t *)(lVal_15 + 0x40c0) = 0x173;
      func_0x180673140(&LAB_1801b29d0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x40b8);
    if (*(char *)(lVal_15 + 0x40c1) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x39e3c19bbb935373;
      *(byte *)(lVal_15 + 0x40c0) = *(byte *)(lVal_15 + 0x40c0) ^ 0x73;
      *(uint8_t *)(lVal_15 + 0x40c1) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013eda1;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_17 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_17) {
        uVal_25 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_b4 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_b4 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU64_2,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_33);
    uVal_14 = uVal_14 & 0xffffffff00000000;
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801ccff0(local_90,ptr4_U64_21,pU64_23,pU64_30,uVal_18,uVal_14,1,local_550,0);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_17 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_17) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_17 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_17);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_17 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_17) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_17 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_17);
    }
    local_4d8 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_4d8 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_510);
    }
    pU64_30 = (uint32_t *)((int64_t)local_90 + 0x614);
    uVal_33 = *pU64_30;
    uStack_78 = (uint8_t)_UNK_1806b90ef;
    uStack_77 = (uint16_t)((uint)_UNK_1806b90ef >> 8);
    uStack_75 = (uint8_t)((uint)_UNK_1806b90ef >> 0x18);
    uStack_74 = (uint8_t)_UNK_1806b90f3;
    uStack_73 = (uint16_t)((uint)_UNK_1806b90f3 >> 8);
    uStack_71 = (uint8_t)((uint)_UNK_1806b90f3 >> 0x18);
    uStack_70 = (uint8_t)_UNK_1806b90f7;
    uStack_6f = (uint16_t)((uint)_UNK_1806b90f7 >> 8);
    uStack_6d = (uint8_t)((uint)_UNK_1806b90f7 >> 0x18);
    local_88 = _DAT_1806b90df;
    uStack_80 = (uint8_t)_UNK_1806b90e7;
    uStack_7f = (uint16_t)((uint)_UNK_1806b90e7 >> 8);
    uStack_7d = (uint8_t)((uint)_UNK_1806b90e7 >> 0x18);
    uStack_7c = (uint8_t)_DAT_1806b90eb;
    uStack_7b = (uint16_t)((uint)_DAT_1806b90eb >> 8);
    uStack_79 = (uint8_t)((uint)_DAT_1806b90eb >> 0x18);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x40e4) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x40e4) = 1;
      func_0x18008fba0(lVal_15 + 0x40c5,&local_88);
      func_0x180673140(&LAB_1801b2a00);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x40c5);
    func_0x1801bd960(fnPtr_1);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013edae;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_17 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_17) {
        uVal_25 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_9b = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_9b = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_13);
    pU64_23[sz_13] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x40f4) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x40f4) = 1;
      *(uint64_t *)(lVal_15 + 0x40e8) = 0xcd3935bc7e198178;
      *(uint16_t *)(lVal_15 + 0x40f0) = 0x137;
      func_0x180673140(&LAB_1801b2a30);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x40e8);
    if (*(char *)(lVal_15 + 0x40f1) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x971941d90d7fe737;
      *(byte *)(lVal_15 + 0x40f0) = *(byte *)(lVal_15 + 0x40f0) ^ 0x37;
      *(uint8_t *)(lVal_15 + 0x40f1) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013edbb;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_17 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_17) {
        uVal_25 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_b5 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_b5 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU64_2,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_33);
    uVal_35 = 0;
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801ccff0(local_90,ptr4_U64_21,pU64_23,pU64_30,uVal_18,uVal_14 & 0xffffffff00000000,1,local_510
                  ,0);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    local_498 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_498 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_4d0);
    }
    pU64_30 = (uint32_t *)((int64_t)local_90 + 0x61c);
    uVal_33 = *pU64_30;
    uStack_78 = (uint8_t)((uint)_DAT_1806b9108 >> 0x18);
    uStack_77 = (uint16_t)_UNK_1806b910c;
    uStack_75 = (uint8_t)((uint)_UNK_1806b910c >> 0x10);
    uStack_74 = (uint8_t)((uint)_UNK_1806b910c >> 0x18);
    uStack_73 = (uint16_t)_UNK_1806b9110;
    uStack_71 = (uint8_t)((uint)_UNK_1806b9110 >> 0x10);
    uStack_70 = (uint8_t)((uint)_UNK_1806b9110 >> 0x18);
    uStack_6f = (uint16_t)_UNK_1806b9114;
    uStack_6d = (uint8_t)((uint)_UNK_1806b9114 >> 0x10);
    uStack_6c._0_1_ = (uint8_t)((uint)_UNK_1806b9114 >> 0x18);
    local_88 = _DAT_1806b90fb;
    uStack_80 = (uint8_t)_UNK_1806b9103;
    uStack_7f = (uint16_t)((uint5)_UNK_1806b9103 >> 8);
    uStack_7d = (uint8_t)((uint5)_UNK_1806b9103 >> 0x18);
    uStack_7c = (uint8_t)((uint5)_UNK_1806b9103 >> 0x20);
    uStack_7b = (uint16_t)_DAT_1806b9108;
    uStack_79 = (uint8_t)((uint)_DAT_1806b9108 >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4114) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4114) = 1;
      func_0x18007cc40(lVal_15 + 0x40f5,&local_88);
      func_0x180673140(&LAB_1801b2a60);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x40f5);
    func_0x1801bd9b0(fnPtr_1);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013edc8;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_9d = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_9d = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_13);
    pU64_23[sz_13] = 0;
    local_138 = _DAT_1806b9118;
    uStack_130 = _UNK_1806b9120;
    local_128 = 0x47c1;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4128) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4128) = 1;
      func_0x18007c170(lVal_15 + 0x4115,&local_138);
      func_0x180673140(&LAB_1801b2a90);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x4115);
    func_0x1801bd990(fnPtr_1);
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013edd5;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_9c = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_9c = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,fnPtr_1,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_33);
    uVal_35 = uVal_35 & 0xffffff00;
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801d3800(local_90,ptr4_U64_21,pU64_23,pU64_30,uVal_18,local_4d0,uVal_35);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    local_458 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_458 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_490);
    }
    pU64_19 = local_90 + 0xc4;
    uVal_33 = *(uint32_t *)pU64_19;
    uStack_78 = (uint8_t)((uint)_DAT_1806b9137 >> 0x18);
    uStack_77 = (uint16_t)_UNK_1806b913b;
    uStack_75 = (uint8_t)((uint)_UNK_1806b913b >> 0x10);
    uStack_74 = (uint8_t)((uint)_UNK_1806b913b >> 0x18);
    uStack_73 = (uint16_t)_UNK_1806b913f;
    uStack_71 = (uint8_t)((uint)_UNK_1806b913f >> 0x10);
    uStack_70 = (uint8_t)((uint)_UNK_1806b913f >> 0x18);
    uStack_6f = (uint16_t)_UNK_1806b9143;
    uStack_6d = (uint8_t)((uint)_UNK_1806b9143 >> 0x10);
    uStack_6c._0_1_ = (uint8_t)((uint)_UNK_1806b9143 >> 0x18);
    local_88 = _DAT_1806b912a;
    uStack_80 = (uint8_t)_UNK_1806b9132;
    uStack_7f = (uint16_t)((uint5)_UNK_1806b9132 >> 8);
    uStack_7d = (uint8_t)((uint5)_UNK_1806b9132 >> 0x18);
    uStack_7c = (uint8_t)((uint5)_UNK_1806b9132 >> 0x20);
    uStack_7b = (uint16_t)_DAT_1806b9137;
    uStack_79 = (uint8_t)((uint)_DAT_1806b9137 >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4148) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4148) = 1;
      func_0x18007cc40(lVal_15 + 0x4129,&local_88);
      func_0x180673140(&LAB_1801b2ac0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x4129);
    func_0x1801bd9f0(fnPtr_1);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ede2;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_9f = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_9f = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_13);
    pU64_23[sz_13] = 0;
    local_138 = _DAT_1806b9147;
    uStack_130 = _UNK_1806b914f;
    local_128 = 0x3bdf;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x415c) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x415c) = 1;
      func_0x18007c170(lVal_15 + 0x4149,&local_138);
      func_0x180673140(&LAB_1801b2af0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x4149);
    func_0x18011d780(fnPtr_1);
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013edef;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_9e = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_9e = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,fnPtr_1,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_33);
    uVal_35 = uVal_35 & 0xffffff00;
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801d3800(local_90,ptr4_U64_21,pU64_23,pU64_19,uVal_18,local_490,uVal_35);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    local_418 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_418 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_450);
    }
    pU64_30 = (uint32_t *)((int64_t)local_90 + 0x624);
    uVal_33 = *pU64_30;
    uStack_78 = (uint8_t)((uint)_DAT_1806b9166 >> 0x18);
    uStack_77 = (uint16_t)_UNK_1806b916a;
    uStack_75 = (uint8_t)((uint)_UNK_1806b916a >> 0x10);
    uStack_74 = (uint8_t)((uint)_UNK_1806b916a >> 0x18);
    uStack_73 = (uint16_t)_UNK_1806b916e;
    uStack_71 = (uint8_t)((uint)_UNK_1806b916e >> 0x10);
    uStack_70 = (uint8_t)((uint)_UNK_1806b916e >> 0x18);
    uStack_6f = (uint16_t)_UNK_1806b9172;
    uStack_6d = (uint8_t)((uint)_UNK_1806b9172 >> 0x10);
    uStack_6c._0_1_ = (uint8_t)((uint)_UNK_1806b9172 >> 0x18);
    local_88 = _DAT_1806b9159;
    uStack_80 = (uint8_t)_UNK_1806b9161;
    uStack_7f = (uint16_t)((uint5)_UNK_1806b9161 >> 8);
    uStack_7d = (uint8_t)((uint5)_UNK_1806b9161 >> 0x18);
    uStack_7c = (uint8_t)((uint5)_UNK_1806b9161 >> 0x20);
    uStack_7b = (uint16_t)_DAT_1806b9166;
    uStack_79 = (uint8_t)((uint)_DAT_1806b9166 >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x417c) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x417c) = 1;
      func_0x18007cc40(lVal_15 + 0x415d,&local_88);
      func_0x180673140(&LAB_1801b2b20);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x415d);
    func_0x1801bda50(fnPtr_1);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013edfc;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_a1 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_a1 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_13);
    pU64_23[sz_13] = 0;
    local_138 = _DAT_1806b9176;
    uStack_130 = _UNK_1806b917e;
    local_128 = 0x6b84;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4190) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4190) = 1;
      func_0x18007c170(lVal_15 + 0x417d,&local_138);
      func_0x180673140(&LAB_1801b2b50);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x417d);
    func_0x1801bda30(fnPtr_1);
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ee09;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_a0 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_a0 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,fnPtr_1,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_33);
    uVal_35 = uVal_35 & 0xffffff00;
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801d3800(local_90,ptr4_U64_21,pU64_23,pU64_30,uVal_18,local_450,uVal_35);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    local_3d8 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_3d8 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_410);
    }
    pU64_19 = local_90 + 0xc5;
    uVal_33 = *(uint32_t *)pU64_19;
    uStack_78 = (uint8_t)((uint)_DAT_1806b9195 >> 0x18);
    uStack_77 = (uint16_t)_UNK_1806b9199;
    uStack_75 = (uint8_t)((uint)_UNK_1806b9199 >> 0x10);
    uStack_74 = (uint8_t)((uint)_UNK_1806b9199 >> 0x18);
    uStack_73 = (uint16_t)_UNK_1806b919d;
    uStack_71 = (uint8_t)((uint)_UNK_1806b919d >> 0x10);
    uStack_70 = (uint8_t)((uint)_UNK_1806b919d >> 0x18);
    uStack_6f = (uint16_t)_UNK_1806b91a1;
    uStack_6d = (uint8_t)((uint)_UNK_1806b91a1 >> 0x10);
    uStack_6c._0_1_ = (uint8_t)((uint)_UNK_1806b91a1 >> 0x18);
    local_88 = _DAT_1806b9188;
    uStack_80 = (uint8_t)_UNK_1806b9190;
    uStack_7f = (uint16_t)((uint5)_UNK_1806b9190 >> 8);
    uStack_7d = (uint8_t)((uint5)_UNK_1806b9190 >> 0x18);
    uStack_7c = (uint8_t)((uint5)_UNK_1806b9190 >> 0x20);
    uStack_7b = (uint16_t)_DAT_1806b9195;
    uStack_79 = (uint8_t)((uint)_DAT_1806b9195 >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x41b0) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x41b0) = 1;
      func_0x18007cc40(lVal_15 + 0x4191,&local_88);
      func_0x180673140(&LAB_1801b2b80);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x4191);
    func_0x1801bdab0(fnPtr_1);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ee16;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_a3 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_a3 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_13);
    pU64_23[sz_13] = 0;
    local_138 = _DAT_1806b91a5;
    uStack_130 = _UNK_1806b91ad;
    local_128 = 0xb5b6;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x41c4) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x41c4) = 1;
      func_0x18007c170(lVal_15 + 0x41b1,&local_138);
      func_0x180673140(&LAB_1801b2bb0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x41b1);
    func_0x1801bda90(fnPtr_1);
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ee23;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_a2 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_a2 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,fnPtr_1,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_33);
    uVal_35 = uVal_35 & 0xffffff00;
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801d3800(local_90,ptr4_U64_21,pU64_23,pU64_19,uVal_18,local_410,uVal_35);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    local_398 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_398 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_3d0);
    }
    pU64_30 = (uint32_t *)((int64_t)local_90 + 0x62c);
    uVal_33 = *pU64_30;
    uStack_78 = (uint8_t)((uint)_DAT_1806b91c4 >> 0x18);
    uStack_77 = (uint16_t)_UNK_1806b91c8;
    uStack_75 = (uint8_t)((uint)_UNK_1806b91c8 >> 0x10);
    uStack_74 = (uint8_t)((uint)_UNK_1806b91c8 >> 0x18);
    uStack_73 = (uint16_t)_UNK_1806b91cc;
    uStack_71 = (uint8_t)((uint)_UNK_1806b91cc >> 0x10);
    uStack_70 = (uint8_t)((uint)_UNK_1806b91cc >> 0x18);
    uStack_6f = (uint16_t)_UNK_1806b91d0;
    uStack_6d = (uint8_t)((uint)_UNK_1806b91d0 >> 0x10);
    uStack_6c._0_1_ = (uint8_t)((uint)_UNK_1806b91d0 >> 0x18);
    local_88 = _DAT_1806b91b7;
    uStack_80 = (uint8_t)_UNK_1806b91bf;
    uStack_7f = (uint16_t)((uint5)_UNK_1806b91bf >> 8);
    uStack_7d = (uint8_t)((uint5)_UNK_1806b91bf >> 0x18);
    uStack_7c = (uint8_t)((uint5)_UNK_1806b91bf >> 0x20);
    uStack_7b = (uint16_t)_DAT_1806b91c4;
    uStack_79 = (uint8_t)((uint)_DAT_1806b91c4 >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x41e4) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x41e4) = 1;
      func_0x18007cc40(lVal_15 + 0x41c5,&local_88);
      func_0x180673140(&LAB_1801b2be0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x41c5);
    func_0x1801bdb10(fnPtr_1);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ee30;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_a5 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_a5 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_13);
    pU64_23[sz_13] = 0;
    local_138 = _DAT_1806b91d4;
    uStack_130 = _UNK_1806b91dc;
    local_128 = 0x5bb7;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x41f8) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x41f8) = 1;
      func_0x18007c170(lVal_15 + 0x41e5,&local_138);
      func_0x180673140(&LAB_1801b2c10);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x41e5);
    func_0x1801bdaf0(fnPtr_1);
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ee3d;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_a4 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_a4 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,fnPtr_1,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_33);
    uVal_35 = uVal_35 & 0xffffff00;
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801d3800(local_90,ptr4_U64_21,pU64_23,pU64_30,uVal_18,local_3d0,uVal_35);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    local_358 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_358 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_390);
    }
    pU64_19 = local_90 + 0xc6;
    uVal_33 = *(uint32_t *)pU64_19;
    uStack_78 = (uint8_t)((uint)_DAT_1806b91f3 >> 0x18);
    uStack_77 = (uint16_t)_UNK_1806b91f7;
    uStack_75 = (uint8_t)((uint)_UNK_1806b91f7 >> 0x10);
    uStack_74 = (uint8_t)((uint)_UNK_1806b91f7 >> 0x18);
    uStack_73 = (uint16_t)_UNK_1806b91fb;
    uStack_71 = (uint8_t)((uint)_UNK_1806b91fb >> 0x10);
    uStack_70 = (uint8_t)((uint)_UNK_1806b91fb >> 0x18);
    uStack_6f = (uint16_t)_UNK_1806b91ff;
    uStack_6d = (uint8_t)((uint)_UNK_1806b91ff >> 0x10);
    uStack_6c._0_1_ = (uint8_t)((uint)_UNK_1806b91ff >> 0x18);
    local_88 = _DAT_1806b91e6;
    uStack_80 = (uint8_t)_UNK_1806b91ee;
    uStack_7f = (uint16_t)((uint5)_UNK_1806b91ee >> 8);
    uStack_7d = (uint8_t)((uint5)_UNK_1806b91ee >> 0x18);
    uStack_7c = (uint8_t)((uint5)_UNK_1806b91ee >> 0x20);
    uStack_7b = (uint16_t)_DAT_1806b91f3;
    uStack_79 = (uint8_t)((uint)_DAT_1806b91f3 >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4218) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4218) = 1;
      func_0x18007cc40(lVal_15 + 0x41f9,&local_88);
      func_0x180673140(&LAB_1801b2c40);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x41f9);
    func_0x1801bdb70(fnPtr_1);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ee4a;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_a7 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_a7 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_13);
    pU64_23[sz_13] = 0;
    local_138 = _DAT_1806b9203;
    uStack_130 = _UNK_1806b920b;
    local_128 = 0x9309;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x422c) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x422c) = 1;
      func_0x18007c170(lVal_15 + 0x4219,&local_138);
      func_0x180673140(&LAB_1801b2c70);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x4219);
    func_0x1801bdb50(fnPtr_1);
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ee57;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_a6 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_a6 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,fnPtr_1,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    pU64_23 = local_390;
    uVal_18 = CONCAT44(uVal_31,uVal_33);
    ptr4_U64_21 = &local_88;
    pU64_24 = local_118;
    func_0x1801d3800(local_90,ptr4_U64_21,pU64_24,pU64_19,uVal_18,pU64_23,uVal_35 & 0xffffff00);
    uVal_33 = (uint32_t)((uint64_t)pU64_23 >> 0x20);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    local_318 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_318 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_350);
    }
    pU64_30 = (uint32_t *)((int64_t)local_90 + 0x634);
    uVal_6 = *pU64_30;
    local_108 = _DAT_1806b9225;
    uStack_104 = _UNK_1806b9229;
    uStack_100 = _UNK_1806b922d;
    uStack_fc = _UNK_1806b9231;
    local_118._8_8_ = _UNK_1806b921d;
    local_118._0_8_ = _DAT_1806b9215;
    local_f8 = 0x9f;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4250) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4250) = 1;
      func_0x180086ce0(lVal_15 + 0x422d,local_118);
      func_0x180673140(&LAB_1801b2ca0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x422d);
    func_0x1801bdbb0(fnPtr_1);
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ee64;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_a8 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_a8 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,fnPtr_1,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4264) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4264) = 1;
      *(uint8_t *)(lVal_15 + 0x4262) = 1;
      *(uint64_t *)(lVal_15 + 0x4258) = 0x6d29d0babb35dcd2;
      *(uint16_t *)(lVal_15 + 0x4260) = 0xbdf7;
      func_0x180673140(&LAB_1801b2cd0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x4258);
    if (*(char *)(lVal_15 + 0x4262) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x194db9cd9b4dbd9f;
      *(byte *)(lVal_15 + 0x4260) = *(byte *)(lVal_15 + 0x4260) ^ 0x9f;
      *(byte *)(lVal_15 + 0x4261) = *(byte *)(lVal_15 + 0x4261) ^ 0xbd;
      *(uint8_t *)(lVal_15 + 0x4262) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013ee71;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_b6 = 1;
        pU64_24 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_b6 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_24 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_24 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_24;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_24,pU64_2,sz_13);
    pU64_24[sz_13] = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_6);
    uVal_32 = CONCAT44(uVal_33,1);
    pU64_23 = local_118;
    ptr4_U64_21 = &local_88;
    func_0x1801ccff0(local_90,pU64_23,ptr4_U64_21,pU64_30,uVal_18,uVal_32,1,local_350,0);
    uVal_33 = (uint32_t)((uint64_t)uVal_32 >> 0x20);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    local_2d8 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_2d8 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_310);
    }
    pU64_30 = (uint32_t *)((int64_t)local_90 + 0x63c);
    uVal_6 = *pU64_30;
    local_108 = _DAT_1806b9246;
    uStack_104 = _UNK_1806b924a;
    uStack_100 = _UNK_1806b924e;
    uStack_fc = _UNK_1806b9252;
    local_118._8_8_ = _UNK_1806b923e;
    local_118._0_8_ = _DAT_1806b9236;
    local_f8 = 0x5f;
    uStack_f7 = 0x43;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4288) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4288) = 1;
      func_0x1800f15f0(lVal_15 + 0x4265,local_118);
      func_0x180673140(&LAB_1801b2d00);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x4265);
    func_0x1801bdbe0(fnPtr_1);
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ee7e;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_a9 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_a9 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,fnPtr_1,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x429c) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x429c) = 1;
      *(uint64_t *)(lVal_15 + 0x4290) = 0xa600b6c92943227c;
      *(uint32_t *)(lVal_15 + 0x4298) = 0x13b3759;
      func_0x180673140(&LAB_1801b2d30);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x4290);
    if (*(char *)(lVal_15 + 0x429b) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xc169d3a1093b4331;
      *(uint *)(lVal_15 + 0x4298) =
           (*(uint *)(lVal_15 + 0x4298) & 0xffff | (uint)*(byte *)(lVal_15 + 0x429a) << 0x10) ^
           SUB164(_DAT_1806b5b80,0);
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013ee8b;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_b7 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_b7 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU64_2,sz_13);
    pU64_23[sz_13] = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_6);
    uVal_32 = CONCAT44(uVal_33,1);
    pU64_23 = local_118;
    ptr4_U64_21 = &local_88;
    func_0x1801ccff0(local_90,pU64_23,ptr4_U64_21,pU64_30,uVal_18,uVal_32,1,local_310,0);
    uVal_33 = (uint32_t)((uint64_t)uVal_32 >> 0x20);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    local_298 = 0;
    if (DAT_18083f7c0 != (uint64_t *)0x0) {
      local_298 = (**(func_ptr_t *)*DAT_18083f7c0)(DAT_18083f7c0,local_2d0);
    }
    pU64_30 = (uint32_t *)((int64_t)local_90 + 0x644);
    uVal_6 = *pU64_30;
    local_108 = _DAT_1806b9268;
    uStack_104 = _UNK_1806b926c;
    uStack_100 = _UNK_1806b9270;
    uStack_fc = _UNK_1806b9274;
    local_118._8_8_ = _UNK_1806b9260;
    local_118._0_8_ = _DAT_1806b9258;
    local_f8 = 199;
    uStack_f7 = 0xa9;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x42c0) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x42c0) = 1;
      func_0x1800f15f0(lVal_15 + 0x429d,local_118);
      func_0x180673140(&LAB_1801b2d60);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x429d);
    func_0x1801bdc10(fnPtr_1);
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen(fnPtr_1);
    if ((int64_t)sz_13 < 0) goto LAB_18013ee98;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_aa = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_aa = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,fnPtr_1,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x42d4) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x42d4) = 1;
      *(uint64_t *)(lVal_15 + 0x42c8) = 0x845ac196ba9c8e4;
      *(uint32_t *)(lVal_15 + 0x42d0) = 0x1d1c1dd;
      func_0x180673140(&LAB_1801b2d90);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x42c8);
    if (*(char *)(lVal_15 + 0x42d3) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x6f2bc9754bd1a9a9;
      *(uint *)(lVal_15 + 0x42d0) =
           (*(uint *)(lVal_15 + 0x42d0) & 0xffff | (uint)*(byte *)(lVal_15 + 0x42d2) << 0x10) ^
           SUB164(_DAT_1806b2770,0);
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013eea5;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_b8 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_b8 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU64_2,sz_13);
    pU64_23[sz_13] = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_6);
    uVal_32 = CONCAT44(uVal_33,1);
    pU64_23 = local_118;
    ptr4_U64_21 = &local_88;
    func_0x1801ccff0(local_90,pU64_23,ptr4_U64_21,pU64_30,uVal_18,uVal_32,1,local_2d0,0);
    uVal_33 = (uint32_t)((uint64_t)uVal_32 >> 0x20);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    local_258 = 0;
    if (DAT_18083f800 != (uint64_t *)0x0) {
      local_258 = (**(func_ptr_t *)*DAT_18083f800)(DAT_18083f800,local_290);
    }
    pU64_19 = local_90 + 0xd5;
    uVal_6 = *(uint32_t *)pU64_19;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x42d8) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x42d8) = 1;
      *(uint16_t *)(lVal_15 + 0x42d5) = 0x17d;
      func_0x180673140(&LAB_1801b2dc0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_15 + 0x42d5);
    if (*(char *)(lVal_15 + 0x42d6) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x7d;
      *(uint8_t *)(lVal_15 + 0x42d6) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU8_4);
    if ((int64_t)sz_13 < 0) goto LAB_18013eeb2;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_ba = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_ba = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU8_4,sz_13);
    pU64_23[sz_13] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x42e0) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x42e0) = 1;
      *(uint8_t *)(lVal_15 + 0x42dc) = 1;
      *(uint16_t *)(lVal_15 + 0x42da) = 0x9f25;
      func_0x180673140(&LAB_1801b2de0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_15 + 0x42da);
    if (*(char *)(lVal_15 + 0x42dc) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x7d;
      *(byte *)(lVal_15 + 0x42db) = *(byte *)(lVal_15 + 0x42db) ^ 0x9f;
      *(uint8_t *)(lVal_15 + 0x42dc) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU8_4);
    if ((int64_t)sz_13 < 0) goto LAB_18013eebf;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_b9 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_b9 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU8_4,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_6);
    uVal_32 = CONCAT44(uVal_33,0xfe363c80);
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801ccff0(local_90,ptr4_U64_21,pU64_23,pU64_19,uVal_18,uVal_32,30000000,local_290,0);
    uVal_33 = (uint32_t)((uint64_t)uVal_32 >> 0x20);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    local_218 = 0;
    if (DAT_18083f800 != (uint64_t *)0x0) {
      local_218 = (**(func_ptr_t *)*DAT_18083f800)(DAT_18083f800,local_250);
    }
    pU64_30 = (uint32_t *)((int64_t)local_90 + 0x6ac);
    uVal_6 = *pU64_30;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x42e4) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x42e4) = 1;
      *(uint16_t *)(lVal_15 + 0x42e1) = 0x10f;
      func_0x180673140(&LAB_1801b2e00);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_15 + 0x42e1);
    if (*(char *)(lVal_15 + 0x42e2) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0xf;
      *(uint8_t *)(lVal_15 + 0x42e2) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU8_4);
    if ((int64_t)sz_13 < 0) goto LAB_18013eecc;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_bc = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_bc = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU8_4,sz_13);
    pU64_23[sz_13] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x42ec) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x42ec) = 1;
      *(uint8_t *)(lVal_15 + 0x42e8) = 1;
      *(uint16_t *)(lVal_15 + 0x42e6) = 0x5956;
      func_0x180673140(&LAB_1801b2e20);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_15 + 0x42e6);
    if (*(char *)(lVal_15 + 0x42e8) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0xf;
      *(byte *)(lVal_15 + 0x42e7) = *(byte *)(lVal_15 + 0x42e7) ^ 0x59;
      *(uint8_t *)(lVal_15 + 0x42e8) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU8_4);
    if ((int64_t)sz_13 < 0) goto LAB_18013eed9;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_bb = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_bb = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU8_4,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_6);
    uVal_32 = CONCAT44(uVal_33,0xfe363c80);
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801ccff0(local_90,ptr4_U64_21,pU64_23,pU64_30,uVal_18,uVal_32,30000000,local_250,0);
    uVal_33 = (uint32_t)((uint64_t)uVal_32 >> 0x20);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    local_1d8 = 0;
    if (DAT_18083f800 != (uint64_t *)0x0) {
      local_1d8 = (**(func_ptr_t *)*DAT_18083f800)(DAT_18083f800,local_210);
    }
    pU64_19 = local_90 + 0xd6;
    uVal_6 = *(uint32_t *)pU64_19;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x42f0) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x42f0) = 1;
      *(uint16_t *)(lVal_15 + 0x42ed) = 0x17b;
      func_0x180673140(&LAB_1801b2e40);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_15 + 0x42ed);
    if (*(char *)(lVal_15 + 0x42ee) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x7b;
      *(uint8_t *)(lVal_15 + 0x42ee) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU8_4);
    if ((int64_t)sz_13 < 0) goto LAB_18013eee6;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_be = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_be = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU8_4,sz_13);
    pU64_23[sz_13] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x42f8) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x42f8) = 1;
      *(uint8_t *)(lVal_15 + 0x42f4) = 1;
      *(uint16_t *)(lVal_15 + 0x42f2) = 0x7b21;
      func_0x180673140(&LAB_1801b2e60);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_15 + 0x42f2);
    if (*(char *)(lVal_15 + 0x42f4) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x7b;
      *(byte *)(lVal_15 + 0x42f3) = *(byte *)(lVal_15 + 0x42f3) ^ 0x7b;
      *(uint8_t *)(lVal_15 + 0x42f4) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU8_4);
    if ((int64_t)sz_13 < 0) goto LAB_18013eef3;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_bd = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_bd = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU8_4,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_18 = CONCAT44(uVal_31,uVal_6);
    uVal_14 = CONCAT44(uVal_33,0xfe363c80);
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801ccff0(local_90,ptr4_U64_21,pU64_23,pU64_19,uVal_18,uVal_14,30000000,local_210,0);
    uVal_31 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_17 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_17) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_17 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_17);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_17 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_17) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_17 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_17);
    }
    local_198 = 0;
    if (DAT_18083f800 != (uint64_t *)0x0) {
      local_198 = (**(func_ptr_t *)*DAT_18083f800)(DAT_18083f800,local_1d0);
    }
    pU64_30 = (uint32_t *)((int64_t)local_90 + 0x6b4);
    uVal_33 = *pU64_30;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x42fc) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x42fc) = 1;
      *(uint16_t *)(lVal_15 + 0x42f9) = 0x1a9;
      func_0x180673140(&LAB_1801b2e80);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_15 + 0x42f9);
    if (*(char *)(lVal_15 + 0x42fa) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0xa9;
      *(uint8_t *)(lVal_15 + 0x42fa) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU8_4);
    if ((int64_t)sz_13 < 0) goto LAB_18013ef00;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_17 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_17) {
        uVal_25 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_c0 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_c0 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU8_4,sz_13);
    pU64_23[sz_13] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4308) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4308) = 1;
      *(uint8_t *)(lVal_15 + 0x4304) = 1;
      *(uint32_t *)(lVal_15 + 0x4300) = 0x7b116efb;
      func_0x180673140(&LAB_1801b2ea0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_15 + 0x4300);
    if (*(char *)(lVal_15 + 0x4304) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x7b6501a9;
      *(uint8_t *)(lVal_15 + 0x4304) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)pU64_3);
    if ((int64_t)sz_13 < 0) goto LAB_18013ef0d;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_17 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_17) {
        uVal_25 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_bf = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_bf = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,pU64_3,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    uVal_35 = 0x10e;
    ptr4_U64_21 = &local_88;
    pU64_23 = local_118;
    func_0x1801ccff0(local_90,ptr4_U64_21,pU64_23,pU64_30,CONCAT44(uVal_31,uVal_33),
                  uVal_14 & 0xffffffff00000000,0x10e,local_1d0,0);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_20 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_20 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_20)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_20,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    local_158 = 0;
    if (DAT_18083f800 != (uint64_t *)0x0) {
      local_158 = (**(func_ptr_t *)*DAT_18083f800)(DAT_18083f800,local_190);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x430c) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x430c) = 1;
      *(uint16_t *)(lVal_15 + 0x4309) = 0x15d;
      func_0x180673140(&LAB_1801b2ec0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_15 + 0x4309);
    if (*(char *)(lVal_15 + 0x430a) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x5d;
      *(uint8_t *)(lVal_15 + 0x430a) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU8_4);
    if ((int64_t)sz_13 < 0) goto LAB_18013ef1a;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_c2 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_c2 = 1;
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU8_4,sz_13);
    pU64_23[sz_13] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4320) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4320) = 1;
      uVal_18 = _UNK_1806b5b98;
      *(uint64_t *)(lVal_15 + 0x4310) = _DAT_1806b5b90;
      *(uint64_t *)(lVal_15 + 0x4318) = uVal_18;
      func_0x180673140(&LAB_1801b2ee0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_15 + 0x4310);
    if (*(char *)(lVal_15 + 0x431f) == '\x01') {
      uVal_31 = *(uint32_t *)(lVal_15 + 0x4318);
      auArr_26 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_31 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_31 >> 0x10),uVal_31)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_15 + 0x431d) >> 8)),
                                                 (char)((uint)uVal_31 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_15 + 0x431d),(char)uVal_31
                                                ))),_DAT_1806ae110);
      auArr_26._8_8_ =
           auArr_26._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_15 + 0x431c) << 0x20;
      auArr_26 = pblendw(auArr_26,*_Str,0xf);
      *_Str = auArr_26 ^ _DAT_1806b5ba0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_13 = strlen((char *)_Str);
    if ((int64_t)sz_13 < 0) goto LAB_18013ef27;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_c1 = 1;
        ptr4_U64_21 = (uint64_t ****)func_0x180672de0(uVal_25 + 1);
        local_88 = ptr4_U64_21;
      }
      else {
        local_c1 = 1;
        ptr3_U64_16 = (uint64_t ***)func_0x180672de0(uVal_25 + 0x28);
        ptr4_U64_21 = (uint64_t ****)((int64_t)ptr3_U64_16 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_21[-1] = ptr3_U64_16;
        local_88 = ptr4_U64_21;
      }
    }
    uStack_78 = (uint8_t)sz_13;
    uStack_77 = (uint16_t)(sz_13 >> 8);
    uStack_75 = (uint8_t)(sz_13 >> 0x18);
    uStack_74 = (uint8_t)(sz_13 >> 0x20);
    uStack_73 = (uint16_t)(sz_13 >> 0x28);
    uStack_71 = (uint8_t)(sz_13 >> 0x38);
    uStack_70 = (uint8_t)uVal_25;
    uStack_6f = (uint16_t)(uVal_25 >> 8);
    uStack_6d = (uint8_t)(uVal_25 >> 0x18);
    uStack_6c = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(ptr4_U64_21,_Str,sz_13);
    *(uint8_t *)((int64_t)ptr4_U64_21 + sz_13) = 0;
    pU64_23 = local_118;
    func_0x1801d3d60(local_90,&local_88,pU64_23,local_140,local_140,local_190,uVal_35 & 0xffffff00);
    uVal_25 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      ptr4_U64_21 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_21 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_21)))
        goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_21,uVal_14);
    }
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4334) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4334) = 1;
      *(uint64_t *)(lVal_15 + 0x4328) = 0xa9634d88e6994980;
      *(uint16_t *)(lVal_15 + 0x4330) = 0x1cf;
      func_0x180673140(&LAB_1801b2f10);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x4328);
    if (*(char *)(lVal_15 + 0x4331) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xf14339ed95ff2fcf;
      *(byte *)(lVal_15 + 0x4330) = *(byte *)(lVal_15 + 0x4330) ^ 0xcf;
      *(uint8_t *)(lVal_15 + 0x4331) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013ef34;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU64_2,sz_13);
    pU64_23[sz_13] = 0;
    pU64_19 = local_90;
    pU64_23 = local_118;
    uVal_18 = func_0x1801cf6b0(local_90,pU64_23);
    pU64_19[0xca] = uVal_18;
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4344) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4344) = 1;
      *(uint64_t *)(lVal_15 + 0x4338) = 0x4227b9ea06ff8322;
      *(uint16_t *)(lVal_15 + 0x4340) = 0x16d;
      func_0x180673140(&LAB_1801b2f40);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x4338);
    if (*(char *)(lVal_15 + 0x4341) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x1b07cd8f7599e56d;
      *(byte *)(lVal_15 + 0x4340) = *(byte *)(lVal_15 + 0x4340) ^ 0x6d;
      *(uint8_t *)(lVal_15 + 0x4341) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013ef3a;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU64_2,sz_13);
    pU64_23[sz_13] = 0;
    pU64_19 = local_90;
    pU64_23 = local_118;
    uVal_18 = func_0x1801cf6b0(local_90,pU64_23);
    pU64_19[0xcb] = uVal_18;
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4354) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4354) = 1;
      *(uint64_t *)(lVal_15 + 0x4348) = 0x7347475274b9ffb6;
      *(uint16_t *)(lVal_15 + 0x4350) = 0x1f9;
      func_0x180673140(&LAB_1801b2f70);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x4348);
    if (*(char *)(lVal_15 + 0x4351) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x2967333707df99f9;
      *(byte *)(lVal_15 + 0x4350) = *(byte *)(lVal_15 + 0x4350) ^ 0xf9;
      *(uint8_t *)(lVal_15 + 0x4351) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013ef40;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU64_2,sz_13);
    pU64_23[sz_13] = 0;
    pU64_19 = local_90;
    pU64_23 = local_118;
    uVal_18 = func_0x1801cf6b0(local_90,pU64_23);
    pU64_19[0xcc] = uVal_18;
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4364) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4364) = 1;
      *(uint8_t *)(lVal_15 + 0x4362) = 1;
      *(uint64_t *)(lVal_15 + 0x4358) = 0x892b98ca83057e9e;
      *(uint16_t *)(lVal_15 + 0x4360) = 0x1fbb;
      func_0x180673140(&LAB_1801b2fa0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x4358);
    if (*(char *)(lVal_15 + 0x4362) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xfd4ff1bda37d1fd3;
      *(byte *)(lVal_15 + 0x4360) = *(byte *)(lVal_15 + 0x4360) ^ 0xd3;
      *(byte *)(lVal_15 + 0x4361) = *(byte *)(lVal_15 + 0x4361) ^ 0x1f;
      *(uint8_t *)(lVal_15 + 0x4362) = 0;
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_2);
    if ((int64_t)sz_13 < 0) goto LAB_18013ef46;
    uVal_25 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_14) {
        uVal_25 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        lVal_15 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_15;
      }
      local_118._0_8_ = pU64_23;
    }
    local_108 = (uint32_t)sz_13;
    uStack_104 = (uint32_t)(sz_13 >> 0x20);
    uStack_100 = (uint32_t)uVal_25;
    uStack_fc = (uint32_t)(uVal_25 >> 0x20);
    func_0x1806aa960(pU64_23,pU64_2,sz_13);
    pU64_23[sz_13] = 0;
    pU64_19 = local_90;
    pU64_23 = local_118;
    uVal_18 = func_0x1801cf6b0(local_90,pU64_23);
    pU64_19[0xcd] = uVal_18;
    uVal_25 = CONCAT44(uStack_fc,uStack_100);
    if (0xf < uVal_25) {
      uVal_14 = uVal_25 + 1;
      lVal_15 = local_118._0_8_;
      if (0xfff < uVal_14) {
        lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
        uVal_14 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_14);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x4374) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x4374) = 1;
      *(uint64_t *)(lVal_15 + 0x4368) = 0xe6601c09af3b3880;
      *(uint32_t *)(lVal_15 + 0x4370) = 0x1432da5;
      func_0x180673140(&LAB_1801b2fd0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_15 + 0x4368);
    if (*(char *)(lVal_15 + 0x4373) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x810979618f4359cd;
      *(uint *)(lVal_15 + 0x4370) =
           (*(uint *)(lVal_15 + 0x4370) & 0xffff | (uint)*(byte *)(lVal_15 + 0x4372) << 0x10) ^
           SUB164(_DAT_1806b5bb0,0);
    }
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = (uint8_t  [16])0x0;
    sz_13 = strlen((char *)pU64_2);
    if (-1 < (int64_t)sz_13) {
      uVal_25 = 0xf;
      if (0xf < sz_13) {
        uVal_14 = sz_13 | 0xf;
        uVal_25 = 0x16;
        if (0x16 < uVal_14) {
          uVal_25 = uVal_14;
        }
        if (uVal_14 < 0xfff) {
          pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
        }
        else {
          lVal_15 = func_0x180672de0(uVal_25 + 0x28);
          pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_23 + -8) = lVal_15;
        }
        local_118._0_8_ = pU64_23;
      }
      local_108 = (uint32_t)sz_13;
      uStack_104 = (uint32_t)(sz_13 >> 0x20);
      uStack_100 = (uint32_t)uVal_25;
      uStack_fc = (uint32_t)(uVal_25 >> 0x20);
      func_0x1806aa960(pU64_23,pU64_2,sz_13);
      pU64_23[sz_13] = 0;
      pU64_19 = local_90;
      pU64_23 = local_118;
      uVal_18 = func_0x1801cf6b0(local_90,pU64_23);
      pU64_19[0xce] = uVal_18;
      uVal_25 = CONCAT44(uStack_fc,uStack_100);
      if (0xf < uVal_25) {
        uVal_14 = uVal_25 + 1;
        lVal_15 = local_118._0_8_;
        if (0xfff < uVal_14) {
          lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
          if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) goto LAB_18013eca3;
          uVal_14 = uVal_25 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_14);
      }
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x4384) == '\0') {
        lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_15 + 0x4384) = 1;
        *(uint64_t *)(lVal_15 + 0x4378) = 0x4651c0a925e3b658;
        *(uint32_t *)(lVal_15 + 0x4380) = 0x19bbf61;
        func_0x180673140(&LAB_1801b3000);
      }
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint64_t *)(lVal_15 + 0x4378);
      if (*(char *)(lVal_15 + 0x4383) == '\x01') {
        *pU64_2 = *pU64_2 ^ 0x213fa5c5059bd715;
        *(uint *)(lVal_15 + 0x4380) =
             (*(uint *)(lVal_15 + 0x4380) & 0xffff | (uint)*(byte *)(lVal_15 + 0x4382) << 0x10) ^
             SUB164(_DAT_1806b5bc0,0);
      }
      local_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      local_118 = (uint8_t  [16])0x0;
      sz_13 = strlen((char *)pU64_2);
      if (-1 < (int64_t)sz_13) {
        uVal_25 = 0xf;
        if (0xf < sz_13) {
          uVal_14 = sz_13 | 0xf;
          uVal_25 = 0x16;
          if (0x16 < uVal_14) {
            uVal_25 = uVal_14;
          }
          if (uVal_14 < 0xfff) {
            pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
          }
          else {
            lVal_15 = func_0x180672de0(uVal_25 + 0x28);
            pU64_23 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_23 + -8) = lVal_15;
          }
          local_118._0_8_ = pU64_23;
        }
        local_108 = (uint32_t)sz_13;
        uStack_104 = (uint32_t)(sz_13 >> 0x20);
        uStack_100 = (uint32_t)uVal_25;
        uStack_fc = (uint32_t)(uVal_25 >> 0x20);
        func_0x1806aa960(pU64_23,pU64_2,sz_13);
        pU64_23[sz_13] = 0;
        pU64_19 = local_90;
        uVal_18 = func_0x1801cf6b0(local_90,local_118);
        pU64_19[0xcf] = uVal_18;
        uVal_25 = CONCAT44(uStack_fc,uStack_100);
        if (0xf < uVal_25) {
          uVal_14 = uVal_25 + 1;
          lVal_15 = local_118._0_8_;
          if (0xfff < uVal_14) {
            lVal_15 = *(int64_t *)(local_118._0_8_ + -8);
            if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_15)) {
LAB_18013eca3:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_14 = uVal_25 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_15,uVal_14);
        }
        *(uint8_t *)(pU64_19[0xca] + 0x128) = 1;
        *(uint8_t *)(pU64_19[0xcb] + 0x128) = 1;
        *(uint8_t *)(pU64_19[0xcc] + 0x128) = 1;
        *(uint8_t *)(pU64_19[0xcd] + 0x128) = 1;
        *(uint8_t *)(pU64_19[0xce] + 0x128) = 1;
        *(uint8_t *)(pU64_19[0xcf] + 0x128) = 1;
        return pU64_19;
      }
      goto LAB_18013ef52;
    }
  }
  func_0x18007ba70();
LAB_18013ef52:
  func_0x18007ba70();
  fnPtr_7 = (func_ptr_t )swi(3);
  pU64_19 = (uint64_t *)(*fnPtr_7)();
  return pU64_19;
}

// Unwind@18013ef60
void Unwind_18013ef60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1c0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x188));
    *(uint64_t *)(param_2 + 0x1c0) = 0;
  }
  return;
}

// Unwind@18013efd0
void Unwind_18013efd0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3e40) = 0;
  *(uint8_t *)(param_2 + 0x787) = 1;
  return;
}

// Unwind@18013f030
void Unwind_18013f030(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x200);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c8));
    *(uint64_t *)(param_2 + 0x200) = 0;
  }
  return;
}

// Unwind@18013f0a0
void Unwind_18013f0a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3ea0) = 0;
  *(uint8_t *)(param_2 + 0x786) = 1;
  return;
}

// Unwind@18013f100
void Unwind_18013f100(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x240);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x208));
    *(uint64_t *)(param_2 + 0x240) = 0;
  }
  return;
}

// Unwind@18013f170
void Unwind_18013f170(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3f28) = 0;
  *(uint8_t *)(param_2 + 0x784) = 1;
  return;
}

// Unwind@18013f1d0
void Unwind_18013f1d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x280);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x248));
    *(uint64_t *)(param_2 + 0x280) = 0;
  }
  return;
}

// Unwind@18013f240
void Unwind_18013f240(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x404c) = 0;
  *(uint8_t *)(param_2 + 0x780) = 1;
  return;
}

// Unwind@18013f2a0
void Unwind_18013f2a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2c0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x288));
    *(uint64_t *)(param_2 + 0x2c0) = 0;
  }
  return;
}

// Unwind@18013f310
void Unwind_18013f310(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x4080) = 0;
  *(uint8_t *)(param_2 + 0x77f) = 1;
  return;
}

// Unwind@18013f370
void Unwind_18013f370(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x300);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2c8));
    *(uint64_t *)(param_2 + 0x300) = 0;
  }
  return;
}

// Unwind@18013f3e0
void Unwind_18013f3e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x40b4) = 0;
  *(uint8_t *)(param_2 + 0x77e) = 1;
  return;
}

// Unwind@18013f440
void Unwind_18013f440(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x340);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x308));
    *(uint64_t *)(param_2 + 0x340) = 0;
  }
  return;
}

// Unwind@18013f4b0
void Unwind_18013f4b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x40e4) = 0;
  *(uint8_t *)(param_2 + 0x77d) = 1;
  return;
}

// Unwind@18013f510
void Unwind_18013f510(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x380);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x348));
    *(uint64_t *)(param_2 + 0x380) = 0;
  }
  return;
}

// Unwind@18013f580
void Unwind_18013f580(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x4114) = 0;
  *(uint8_t *)(param_2 + 0x77b) = 1;
  return;
}

// Unwind@18013f5e0
void Unwind_18013f5e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x3c0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x388));
    *(uint64_t *)(param_2 + 0x3c0) = 0;
  }
  return;
}

// Unwind@18013f650
void Unwind_18013f650(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x4148) = 0;
  *(uint8_t *)(param_2 + 0x779) = 1;
  return;
}

// Unwind@18013f6b0
void Unwind_18013f6b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x400);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x3c8));
    *(uint64_t *)(param_2 + 0x400) = 0;
  }
  return;
}

// Unwind@18013f720
void Unwind_18013f720(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x417c) = 0;
  *(uint8_t *)(param_2 + 0x777) = 1;
  return;
}

// Unwind@18013f780
void Unwind_18013f780(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x440);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x408));
    *(uint64_t *)(param_2 + 0x440) = 0;
  }
  return;
}

// Unwind@18013f7f0
void Unwind_18013f7f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x41b0) = 0;
  *(uint8_t *)(param_2 + 0x775) = 1;
  return;
}

// Unwind@18013f850
void Unwind_18013f850(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x480);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x448));
    *(uint64_t *)(param_2 + 0x480) = 0;
  }
  return;
}

// Unwind@18013f8c0
void Unwind_18013f8c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x41e4) = 0;
  *(uint8_t *)(param_2 + 0x773) = 1;
  return;
}

// Unwind@18013f920
void Unwind_18013f920(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x4c0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x488));
    *(uint64_t *)(param_2 + 0x4c0) = 0;
  }
  return;
}

// Unwind@18013f990
void Unwind_18013f990(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x4218) = 0;
  *(uint8_t *)(param_2 + 0x771) = 1;
  return;
}

// Unwind@18013f9f0
void Unwind_18013f9f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x500);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x4c8));
    *(uint64_t *)(param_2 + 0x500) = 0;
  }
  return;
}

// Unwind@18013fa60
void Unwind_18013fa60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x4250) = 0;
  *(uint8_t *)(param_2 + 0x770) = 1;
  return;
}

// Unwind@18013fac0
void Unwind_18013fac0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x540);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x508));
    *(uint64_t *)(param_2 + 0x540) = 0;
  }
  return;
}

// Unwind@18013fb30
void Unwind_18013fb30(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x4288) = 0;
  *(uint8_t *)(param_2 + 0x76f) = 1;
  return;
}

// Unwind@18013fb90
void Unwind_18013fb90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x580);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x548));
    *(uint64_t *)(param_2 + 0x580) = 0;
  }
  return;
}

// Unwind@18013fc00
void Unwind_18013fc00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x42c0) = 0;
  *(uint8_t *)(param_2 + 0x76e) = 1;
  return;
}

// Unwind@18013fc60
void Unwind_18013fc60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x5c0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x588));
    *(uint64_t *)(param_2 + 0x5c0) = 0;
  }
  return;
}

// Unwind@18013fcd0
void Unwind_18013fcd0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x600);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x5c8));
    *(uint64_t *)(param_2 + 0x600) = 0;
  }
  return;
}

// Unwind@18013fd40
void Unwind_18013fd40(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x640);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x608));
    *(uint64_t *)(param_2 + 0x640) = 0;
  }
  return;
}

// Unwind@18013fdb0
void Unwind_18013fdb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x680);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x648));
    *(uint64_t *)(param_2 + 0x680) = 0;
  }
  return;
}

// Unwind@18013fe20
void Unwind_18013fe20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x6c0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x688));
    *(uint64_t *)(param_2 + 0x6c0) = 0;
  }
  return;
}

// Unwind@18013fe90
void Unwind_18013fe90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x700);
  return;
}

// Unwind@18013fee0
void Unwind_18013fee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x76d) = 0;
  return;
}

// Unwind@18013ff30
void Unwind_18013ff30(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x76d);
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x787) = uVal_1;
  return;
}

// Unwind@18013ff80
void Unwind_18013ff80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x787) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x188));
    *(uint64_t *)(param_2 + 0x1c0) = 0;
  }
  return;
}

// Unwind@18013fff0
void Unwind_18013fff0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x76c) = 0;
  return;
}

// Unwind@180140040
void Unwind_180140040(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x76c);
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x786) = uVal_1;
  return;
}

// Unwind@180140090
void Unwind_180140090(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x786) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c8));
    *(uint64_t *)(param_2 + 0x200) = 0;
  }
  return;
}

// Unwind@180140100
void Unwind_180140100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x76b) = 0;
  return;
}

// Unwind@180140150
void Unwind_180140150(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x76b);
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x785) = uVal_1;
  return;
}

// Unwind@1801401a0
void Unwind_1801401a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x785) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@180140210
void Unwind_180140210(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x76a) = 0;
  return;
}

// Unwind@180140260
void Unwind_180140260(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x76a);
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x784) = uVal_1;
  return;
}

// Unwind@1801402b0
void Unwind_1801402b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x784) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x240), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x208));
    *(uint64_t *)(param_2 + 0x240) = 0;
  }
  return;
}

// Unwind@180140320
void Unwind_180140320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x769) = 0;
  return;
}

// Unwind@180140370
void Unwind_180140370(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x769);
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x783) = uVal_1;
  return;
}

// Unwind@1801403c0
void Unwind_1801403c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x783) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@180140430
void Unwind_180140430(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x768) = 0;
  return;
}

// Unwind@180140480
void Unwind_180140480(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x768);
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x782) = uVal_1;
  return;
}

// Unwind@1801404d0
void Unwind_1801404d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x782) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@180140540
void Unwind_180140540(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x767) = 0;
  return;
}

// Unwind@180140590
void Unwind_180140590(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x767);
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x781) = uVal_1;
  return;
}

// Unwind@1801405e0
void Unwind_1801405e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x781) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@180140650
void Unwind_180140650(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x766) = 0;
  return;
}

// Unwind@1801406a0
void Unwind_1801406a0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x766);
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x780) = uVal_1;
  return;
}

// Unwind@1801406f0
void Unwind_1801406f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x780) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x280), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x248));
    *(uint64_t *)(param_2 + 0x280) = 0;
  }
  return;
}

// Unwind@180140760
void Unwind_180140760(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x765) = 0;
  return;
}

// Unwind@1801407b0
void Unwind_1801407b0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x765);
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x77f) = uVal_1;
  return;
}

// Unwind@180140800
void Unwind_180140800(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x77f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2c0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x288));
    *(uint64_t *)(param_2 + 0x2c0) = 0;
  }
  return;
}

// Unwind@180140870
void Unwind_180140870(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x764) = 0;
  return;
}

// Unwind@1801408c0
void Unwind_1801408c0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x764);
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x77e) = uVal_1;
  return;
}

// Unwind@180140910
void Unwind_180140910(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x77e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x300), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2c8));
    *(uint64_t *)(param_2 + 0x300) = 0;
  }
  return;
}

// Unwind@180140980
void Unwind_180140980(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x763) = 0;
  return;
}

// Unwind@1801409d0
void Unwind_1801409d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x763);
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x77d) = uVal_1;
  return;
}

// Unwind@180140a20
void Unwind_180140a20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x77d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x340), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x308));
    *(uint64_t *)(param_2 + 0x340) = 0;
  }
  return;
}

// Unwind@180140a90
void Unwind_180140a90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x77c) = 0;
  return;
}

// Unwind@180140ae0
void Unwind_180140ae0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x77c);
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x77b) = uVal_1;
  return;
}

// Unwind@180140b30
void Unwind_180140b30(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x77b) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x380), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x348));
    *(uint64_t *)(param_2 + 0x380) = 0;
  }
  return;
}

// Unwind@180140ba0
void Unwind_180140ba0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x77a) = 0;
  return;
}

// Unwind@180140bf0
void Unwind_180140bf0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x77a);
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x779) = uVal_1;
  return;
}

// Unwind@180140c40
void Unwind_180140c40(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x779) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x3c0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x388));
    *(uint64_t *)(param_2 + 0x3c0) = 0;
  }
  return;
}

// Unwind@180140cb0
void Unwind_180140cb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x778) = 0;
  return;
}

// Unwind@180140d00
void Unwind_180140d00(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x778);
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x777) = uVal_1;
  return;
}

// Unwind@180140d50
void Unwind_180140d50(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x777) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x400), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x3c8));
    *(uint64_t *)(param_2 + 0x400) = 0;
  }
  return;
}

// Unwind@180140dc0
void Unwind_180140dc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x776) = 0;
  return;
}

// Unwind@180140e10
void Unwind_180140e10(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x776);
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x775) = uVal_1;
  return;
}

// Unwind@180140e60
void Unwind_180140e60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x775) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x440), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x408));
    *(uint64_t *)(param_2 + 0x440) = 0;
  }
  return;
}

// Unwind@180140ed0
void Unwind_180140ed0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x774) = 0;
  return;
}

// Unwind@180140f20
void Unwind_180140f20(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x774);
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x773) = uVal_1;
  return;
}

// Unwind@180140f70
void Unwind_180140f70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x773) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x480), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x448));
    *(uint64_t *)(param_2 + 0x480) = 0;
  }
  return;
}

// Unwind@180140fe0
void Unwind_180140fe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x772) = 0;
  return;
}

// Unwind@180141030
void Unwind_180141030(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x772);
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x771) = uVal_1;
  return;
}

// Unwind@180141080
void Unwind_180141080(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x771) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x4c0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x488));
    *(uint64_t *)(param_2 + 0x4c0) = 0;
  }
  return;
}

// Unwind@1801410f0
void Unwind_1801410f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x762) = 0;
  return;
}

// Unwind@180141140
void Unwind_180141140(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x762);
  func_0x180001e70(param_2 + 0x790);
  *(uint8_t *)(param_2 + 0x770) = uVal_1;
  return;
}

// Unwind@180141190
void Unwind_180141190(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x770) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x500), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x4c8));
    *(uint64_t *)(param_2 + 0x500) = 0;
  }
  return;
}

// Unwind@180141200
void Unwind_180141200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x700);
  *(uint8_t *)(param_2 + 0x761) = 0;
  return;
}
