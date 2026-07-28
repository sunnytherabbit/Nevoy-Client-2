#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1801b0c80
void Unwind_1801b0c80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1801b0cc0
void Unwind_1801b0cc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1801b0d10
void Unwind_1801b0d10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1801b0d60
void Unwind_1801b0d60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x156) = 0;
  return;
}

// Unwind@1801b0db0
void Unwind_1801b0db0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x156);
  func_0x180001e70(param_2 + 0x130);
  *(uint8_t *)(param_2 + 0x155) = uVal_1;
  return;
}

// Unwind@1801b0e00
void Unwind_1801b0e00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x155) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1801b0e70
void Unwind_1801b0e70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  *(uint8_t *)(param_2 + 0x154) = 0;
  return;
}

// Unwind@1801b0ec0
void Unwind_1801b0ec0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x154);
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x157) = uVal_1;
  return;
}

// Unwind@1801b0f10
void Unwind_1801b0f10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x157) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1801b0f80
void Unwind_1801b0f80(uint64_t param_1,int64_t param_2)
{
  func_0x1800822d0(*(uint64_t *)(param_2 + 0xf8));
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x128));
  return;
}

// Unwind@1801b0fd0
void Unwind_1801b0fd0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6e3c) = 0;
  return;
}

// Unwind@1801b1030
void Unwind_1801b1030(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6e98) = 0;
  *(uint8_t *)(param_2 + 0x157) = 1;
  return;
}

// Unwind@1801b1350
void Unwind_1801b1350(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6edc) = 0;
  return;
}

// func_0x1801b1390
void func_0x1801b1390(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x25] = 1;
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
  return;
}

// func_0x1801b1910
void func_0x1801b1910(uint64_t param_1,uint8_t *param_2,float *param_3)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  float fVal_3;
  uint8_t local_80 [56];
  uint8_t local_48 [32];
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  switch(*param_2) {
  case 4:
    fVal_3 = (float)(int)(char)param_2[8];
    break;
  case 5:
    fVal_3 = (float)*(int64_t *)(param_2 + 8);
    break;
  case 6:
    uVal_1 = *(uint64_t *)(param_2 + 8);
    if ((int64_t)uVal_1 < 0) {
      fVal_3 = (float)((uint64_t)((uint)uVal_1 & 1) | uVal_1 >> 1);
      fVal_3 = fVal_3 + fVal_3;
    }
    else {
      fVal_3 = (float)uVal_1;
    }
    break;
  case 7:
    fVal_3 = (float)*(double *)(param_2 + 8);
    break;
  default:
    local_28 = func_0x1800833d0(param_2);
    func_0x180083260(local_48,"type must be number, but is ",&local_28);
    func_0x180082f00(local_80,0x12e,local_48,param_2);
    func_0x18067a120(local_80,&DAT_180768700);
    fnPtr_2 = (func_ptr_t )swi(3);
    (*fnPtr_2)();
    return;
  }
  *param_3 = fVal_3;
  return;
}

// Unwind@1801b19f0
void Unwind_1801b19f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x1801b1b20
void func_0x1801b1b20(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x2c] = 1;
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
  return;
}

// func_0x1801b1d60
void func_0x1801b1d60(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x49] = 1;
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
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = param_2[0x47];
  param_1[0x48] = param_2[0x48];
  return;
}

// func_0x1801b2030
void func_0x1801b2030(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x48] = 1;
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
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = param_2[0x47];
  return;
}

// func_0x1801b2300
void func_0x1801b2300(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x2d] = 1;
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
  return;
}

// func_0x1801b24b0
void func_0x1801b24b0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x47] = 1;
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
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x46] = param_2[0x46];
  return;
}

// func_0x1801b2720
void func_0x1801b2720(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x3b] = 1;
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
  return;
}

// func_0x1801b30c0
void func_0x1801b30c0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x23] = 1;
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
  return;
}

// func_0x1801b3250
void func_0x1801b3250(int64_t *param_1)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  switch(*(uint8_t *)(param_1 + 8)) {
  default:
    return;
  case 7:
    break;
  case 8:
    func_0x1800822d0();
    return;
  case 9:
    pLong_1 = (int64_t *)param_1[7];
    if (pLong_1 == (int64_t *)0x0) {
      return;
    }
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,CONCAT71(0x1806baf,pLong_1 != param_1));
    param_1[7] = 0;
    return;
  }
  uVal_2 = param_1[3];
  if (0xf < uVal_2) {
    lVal_3 = *param_1;
    uVal_4 = uVal_2 + 1;
    if (0xfff < uVal_4) {
      if (0x1f < (uint64_t)((lVal_3 + -8) - *(int64_t *)(lVal_3 + -8))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_2 + 0x28;
      lVal_3 = *(int64_t *)(lVal_3 + -8);
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(uint8_t *)param_1 = 0;
  return;
}

// func_0x1801b3340
int64_t func_0x1801b3340(uint64_t *param_1,uint64_t param_2,uint32_t *param_3)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  
  uVal_4 = *param_1;
  uVal_9 = ((int64_t)(param_1[1] - uVal_4) >> 2) * -0x5555555555555555 + 1;
  uVal_5 = ((int64_t)(param_1[2] - uVal_4) >> 2) * -0x5555555555555555;
  uVal_8 = 0x1555555555555555 - (uVal_5 >> 1);
  uVal_10 = (uVal_5 >> 1) + uVal_5;
  if (uVal_10 <= uVal_9) {
    uVal_10 = uVal_9;
  }
  if (uVal_8 <= uVal_5 && uVal_5 - uVal_8 != 0) {
    uVal_10 = 0x1555555555555555;
  }
  if (0x1555555555555555 < uVal_10) {
LAB_1801b357b:
    func_0x18007ba90();
    goto LAB_1801b3580;
  }
  if (uVal_10 == 0) {
    uVal_5 = 0;
  }
  else if (uVal_10 < 0x156) {
    uVal_5 = func_0x180672de0(uVal_10 * 0xc);
  }
  else {
    if (0x1555555555555552 < uVal_10) goto LAB_1801b357b;
    lVal_2 = func_0x180672de0(uVal_10 * 0xc + 0x27);
    uVal_5 = lVal_2 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_5 - 8) = lVal_2;
  }
  lVal_2 = param_2 - uVal_4;
  *(uint32_t *)(uVal_5 + lVal_2) = *param_3;
  *(uint32_t *)(uVal_5 + 4 + lVal_2) = param_3[1];
  *(uint32_t *)(uVal_5 + 8 + lVal_2) = param_3[2];
  uVal_8 = *param_1;
  uVal_4 = param_1[1];
  if (param_2 == uVal_4) {
    if (uVal_8 != param_2) {
      lVal_3 = 0;
      do {
        *(uint32_t *)(uVal_5 + lVal_3) = *(uint32_t *)(uVal_8 + lVal_3);
        *(uint32_t *)(uVal_5 + 4 + lVal_3) = *(uint32_t *)(uVal_8 + 4 + lVal_3);
        *(uint32_t *)(uVal_5 + 8 + lVal_3) = *(uint32_t *)(uVal_8 + 8 + lVal_3);
        lVal_6 = uVal_8 + lVal_3;
        lVal_3 = lVal_3 + 0xc;
      } while (lVal_6 + 0xcU != param_2);
      goto LAB_1801b3513;
    }
  }
  else {
    if (uVal_8 != param_2) {
      lVal_3 = 0;
      do {
        *(uint32_t *)(uVal_5 + lVal_3) = *(uint32_t *)(uVal_8 + lVal_3);
        *(uint32_t *)(uVal_5 + 4 + lVal_3) = *(uint32_t *)(uVal_8 + 4 + lVal_3);
        *(uint32_t *)(uVal_5 + 8 + lVal_3) = *(uint32_t *)(uVal_8 + 8 + lVal_3);
        lVal_6 = uVal_8 + lVal_3;
        lVal_3 = lVal_3 + 0xc;
      } while (lVal_6 + 0xcU != param_2);
      uVal_4 = param_1[1];
    }
    if (param_2 != uVal_4) {
      lVal_3 = lVal_2 + uVal_5;
      lVal_6 = 0;
      do {
        *(uint32_t *)(lVal_3 + 0xc + lVal_6) = *(uint32_t *)(param_2 + lVal_6);
        *(uint32_t *)(lVal_3 + 0x10 + lVal_6) = *(uint32_t *)(param_2 + 4 + lVal_6);
        *(uint32_t *)(lVal_3 + 0x14 + lVal_6) = *(uint32_t *)(param_2 + 8 + lVal_6);
        lVal_1 = param_2 + lVal_6;
        lVal_6 = lVal_6 + 0xc;
      } while (lVal_1 + 0xcU != uVal_4);
    }
LAB_1801b3513:
    uVal_8 = *param_1;
  }
  if (uVal_8 != 0) {
    uVal_7 = param_1[2] - uVal_8;
    uVal_4 = uVal_8;
    if (0xfff < uVal_7) {
      uVal_4 = *(uint64_t *)(uVal_8 - 8);
      if (0x1f < (uVal_8 - 8) - uVal_4) {
LAB_1801b3580:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
    }
    thunk_FUN_180695dd0(uVal_4,uVal_7);
  }
  *param_1 = uVal_5;
  param_1[1] = uVal_5 + uVal_9 * 0xc;
  param_1[2] = uVal_5 + uVal_10 * 0xc;
  return lVal_2 + uVal_5;
}

// func_0x1801b3590
int64_t func_0x1801b3590(uint64_t *param_1,uint64_t param_2,uint32_t *param_3)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  
  uVal_4 = *param_1;
  uVal_9 = ((int64_t)(param_1[1] - uVal_4) >> 2) * -0x5555555555555555 + 1;
  uVal_5 = ((int64_t)(param_1[2] - uVal_4) >> 2) * -0x5555555555555555;
  uVal_8 = 0x1555555555555555 - (uVal_5 >> 1);
  uVal_10 = (uVal_5 >> 1) + uVal_5;
  if (uVal_10 <= uVal_9) {
    uVal_10 = uVal_9;
  }
  if (uVal_8 <= uVal_5 && uVal_5 - uVal_8 != 0) {
    uVal_10 = 0x1555555555555555;
  }
  if (0x1555555555555555 < uVal_10) {
LAB_1801b379f:
    func_0x18007ba90();
    goto LAB_1801b37a4;
  }
  if (uVal_10 == 0) {
    uVal_5 = 0;
  }
  else if (uVal_10 < 0x156) {
    uVal_5 = func_0x180672de0(uVal_10 * 0xc);
  }
  else {
    if (0x1555555555555552 < uVal_10) goto LAB_1801b379f;
    lVal_2 = func_0x180672de0(uVal_10 * 0xc + 0x27);
    uVal_5 = lVal_2 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_5 - 8) = lVal_2;
  }
  lVal_2 = param_2 - uVal_4;
  *(uint32_t *)(uVal_5 + lVal_2) = *param_3;
  *(uint32_t *)(uVal_5 + 4 + lVal_2) = param_3[1];
  *(uint32_t *)(uVal_5 + 8 + lVal_2) = param_3[2];
  uVal_8 = *param_1;
  uVal_4 = param_1[1];
  if (param_2 == uVal_4) {
    if (uVal_8 != param_2) {
      lVal_3 = 0;
      do {
        *(uint32_t *)(uVal_5 + lVal_3) = *(uint32_t *)(uVal_8 + lVal_3);
        *(uint32_t *)(uVal_5 + 4 + lVal_3) = *(uint32_t *)(uVal_8 + 4 + lVal_3);
        *(uint32_t *)(uVal_5 + 8 + lVal_3) = *(uint32_t *)(uVal_8 + 8 + lVal_3);
        lVal_6 = uVal_8 + lVal_3;
        lVal_3 = lVal_3 + 0xc;
      } while (lVal_6 + 0xcU != param_2);
      goto LAB_1801b3737;
    }
  }
  else {
    if (uVal_8 != param_2) {
      lVal_3 = 0;
      do {
        *(uint32_t *)(uVal_5 + lVal_3) = *(uint32_t *)(uVal_8 + lVal_3);
        *(uint32_t *)(uVal_5 + 4 + lVal_3) = *(uint32_t *)(uVal_8 + 4 + lVal_3);
        *(uint32_t *)(uVal_5 + 8 + lVal_3) = *(uint32_t *)(uVal_8 + 8 + lVal_3);
        lVal_6 = uVal_8 + lVal_3;
        lVal_3 = lVal_3 + 0xc;
      } while (lVal_6 + 0xcU != param_2);
      uVal_4 = param_1[1];
    }
    if (param_2 != uVal_4) {
      lVal_3 = lVal_2 + uVal_5;
      lVal_6 = 0;
      do {
        *(uint32_t *)(lVal_3 + 0xc + lVal_6) = *(uint32_t *)(param_2 + lVal_6);
        *(uint32_t *)(lVal_3 + 0x10 + lVal_6) = *(uint32_t *)(param_2 + 4 + lVal_6);
        *(uint32_t *)(lVal_3 + 0x14 + lVal_6) = *(uint32_t *)(param_2 + 8 + lVal_6);
        lVal_1 = param_2 + lVal_6;
        lVal_6 = lVal_6 + 0xc;
      } while (lVal_1 + 0xcU != uVal_4);
    }
LAB_1801b3737:
    uVal_8 = *param_1;
  }
  if (uVal_8 != 0) {
    uVal_7 = param_1[2] - uVal_8;
    uVal_4 = uVal_8;
    if (0xfff < uVal_7) {
      uVal_4 = *(uint64_t *)(uVal_8 - 8);
      if (0x1f < (uVal_8 - 8) - uVal_4) {
LAB_1801b37a4:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
    }
    thunk_FUN_180695dd0(uVal_4,uVal_7);
  }
  *param_1 = uVal_5;
  param_1[1] = uVal_5 + uVal_9 * 0xc;
  param_1[2] = uVal_5 + uVal_10 * 0xc;
  return lVal_2 + uVal_5;
}

// func_0x1801b3830
void func_0x1801b3830(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x2b] = 1;
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
  return;
}

// func_0x1801b39d0
void func_0x1801b39d0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x28] = 1;
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
  return;
}

// func_0x1801b3bb0
void func_0x1801b3bb0(uint64_t param_1,uint64_t param_2,int64_t *param_3)
{
  char ch_1;
  int64_t *pLong_2;
  
  ch_1 = *(char *)((int64_t)param_3 + 0x19);
  while (ch_1 == '\0') {
    func_0x1801b3bb0(param_1,param_2,param_3[2]);
    pLong_2 = (int64_t *)*param_3;
    func_0x1801b3c10(param_2,param_3);
    param_3 = pLong_2;
    ch_1 = *(char *)((int64_t)pLong_2 + 0x19);
  }
  return;
}

// func_0x1801b3c10
void func_0x1801b3c10(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_2 + 0x58);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x40);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801b3ccc;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x50) = 0;
  *(uint64_t *)(param_2 + 0x58) = 0xf;
  *(uint8_t *)(param_2 + 0x40) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0x38);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x20);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_1801b3ccc:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x30) = 0;
  *(uint64_t *)(param_2 + 0x38) = 0xf;
  *(uint8_t *)(param_2 + 0x20) = 0;
  thunk_FUN_180695dd0(param_2,0x60);
  return;
}

// func_0x1801b3cd0
void func_0x1801b3cd0(int64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = param_1[7];
  if (0xf < uVal_1) {
    lVal_2 = param_1[4];
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801b3d7a;
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
LAB_1801b3d7a:
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

// func_0x1801b4030
void func_0x1801b4030(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x40] = 1;
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
  return;
}

// func_0x1801b4360
void func_0x1801b4360(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x33] = 1;
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
  return;
}

// func_0x1801b4680
void func_0x1801b4680(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x30] = 1;
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
  return;
}

// func_0x1801b4920
void func_0x1801b4920(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x3d] = 1;
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
  return;
}

// func_0x1801b52e0
void func_0x1801b52e0(int64_t *param_1)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  
  pU64_1 = (uint64_t *)*param_1;
  *(uint64_t *)pU64_1[1] = 0;
  pU64_1 = (uint64_t *)*pU64_1;
  while (pU64_1 != (uint64_t *)0x0) {
    pU64_2 = (uint64_t *)*pU64_1;
    thunk_FUN_180695dd0(pU64_1,0x28);
    pU64_1 = pU64_2;
  }
  thunk_FUN_180695dd0(*param_1,0x28);
  return;
}

// func_0x1801b53c0
int64_t func_0x1801b53c0(uint64_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t *param_4, uint64_t *param_5,uint64_t *param_6)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  
  uVal_1 = *param_1;
  uVal_5 = ((int64_t)(param_1[1] - uVal_1) >> 5) + 1;
  uVal_7 = (int64_t)(param_1[2] - uVal_1) >> 5;
  uVal_2 = (uVal_7 >> 1) + uVal_7;
  if (uVal_2 <= uVal_5) {
    uVal_2 = uVal_5;
  }
  if (0x7ffffffffffffff - (uVal_7 >> 1) < uVal_7) {
    uVal_2 = 0x7ffffffffffffff;
  }
  if (uVal_2 >> 0x3b == 0) {
    lVal_6 = uVal_2 * 0x20;
    if (uVal_2 == 0) {
      uVal_2 = 0;
    }
    else if (uVal_2 < 0x80) {
      uVal_2 = func_0x180672de0(lVal_6);
    }
    else {
      if (uVal_2 == 0x7ffffffffffffff) goto LAB_1801b5550;
      lVal_3 = func_0x180672de0(lVal_6 + 0x27);
      uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_2 - 8) = lVal_3;
    }
    lVal_3 = param_2 - uVal_1;
    *(uint64_t *)(uVal_2 + lVal_3) = *param_3;
    *(uint64_t *)(uVal_2 + 8 + lVal_3) = *param_4;
    *(uint64_t *)(uVal_2 + 0x10 + lVal_3) = *param_5;
    *(uint64_t *)(uVal_2 + 0x18 + lVal_3) = *param_6;
    if (param_2 == param_1[1]) {
      func_0x1806aa960(uVal_2,*param_1,param_2 - *param_1);
      uVal_1 = *param_1;
    }
    else {
      func_0x1806aa960(uVal_2,*param_1,param_2 - *param_1);
      func_0x1806aa960(uVal_2 + lVal_3 + 0x20,param_2,param_1[1] - param_2);
      uVal_1 = *param_1;
    }
    if (uVal_1 != 0) {
      uVal_4 = param_1[2] - uVal_1;
      uVal_7 = uVal_1;
      if (0xfff < uVal_4) {
        uVal_7 = *(uint64_t *)(uVal_1 - 8);
        if (0x1f < (uVal_1 - 8) - uVal_7) goto LAB_1801b5555;
        uVal_4 = uVal_4 + 0x27;
      }
      thunk_FUN_180695dd0(uVal_7,uVal_4);
    }
    *param_1 = uVal_2;
    param_1[1] = uVal_5 * 0x20 + uVal_2;
    param_1[2] = lVal_6 + uVal_2;
    return uVal_2 + lVal_3;
  }
LAB_1801b5550:
  func_0x18007ba90();
LAB_1801b5555:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x1801b5990
void func_0x1801b5990(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x36] = 1;
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
  return;
}

// func_0x1801b6270
uint64_t func_0x1801b6270(uint64_t *param_1,uint32_t *param_2)
{
  uint64_t uVal_1;
  uint32_t *pU64_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint32_t *pU64_11;
  int64_t lVal_12;
  uint64_t uVal_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  
  pU64_2 = (uint32_t *)param_1[1];
  if (pU64_2 != (uint32_t *)param_1[2]) {
    *pU64_2 = *param_2;
    *(uint8_t (*)[16])(pU64_2 + 2) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_2 + 6) = ZEXT816(0);
    uVal_9 = *(uint64_t *)(param_2 + 6);
    if (*(uint64_t *)(param_2 + 8) < 0x10) {
      pU64_11 = param_2 + 2;
    }
    else {
      pU64_11 = *(uint32_t **)(param_2 + 2);
    }
    if (-1 < (int64_t)uVal_9) {
      if (uVal_9 < 0x10) {
        *(uint64_t *)(pU64_2 + 6) = uVal_9;
        *(uint64_t *)(pU64_2 + 8) = 0xf;
        uVal_4 = pU64_11[1];
        uVal_5 = pU64_11[2];
        uVal_6 = pU64_11[3];
        pU64_2[2] = *pU64_11;
        pU64_2[3] = uVal_4;
        pU64_2[4] = uVal_5;
        pU64_2[5] = uVal_6;
      }
      else {
        uVal_7 = uVal_9 | 0xf;
        uVal_15 = 0x16;
        if (0x16 < uVal_7) {
          uVal_15 = uVal_7;
        }
        if (uVal_7 < 0xfff) {
          uVal_7 = func_0x180672de0(uVal_15 + 1);
        }
        else {
          lVal_8 = func_0x180672de0(uVal_15 + 0x28);
          uVal_7 = lVal_8 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_7 - 8) = lVal_8;
        }
        *(uint64_t *)(pU64_2 + 2) = uVal_7;
        *(uint64_t *)(pU64_2 + 6) = uVal_9;
        *(uint64_t *)(pU64_2 + 8) = uVal_15;
        func_0x1806aa960(uVal_7,pU64_11,uVal_9 + 1);
      }
      uVal_4 = param_2[0xb];
      uVal_5 = param_2[0xc];
      uVal_6 = param_2[0xd];
      pU64_2[10] = param_2[10];
      pU64_2[0xb] = uVal_4;
      pU64_2[0xc] = uVal_5;
      pU64_2[0xd] = uVal_6;
      uVal_9 = param_1[1];
      param_1[1] = uVal_9 + 0x38;
      return uVal_9;
    }
    func_0x18007ba70();
    fnPtr_3 = (func_ptr_t )swi(3);
    uVal_9 = (*fnPtr_3)();
    return uVal_9;
  }
  uVal_9 = *param_1;
  uVal_14 = ((int64_t)(param_1[1] - uVal_9) >> 3) * 0x6db6db6db6db6db7 + 1;
  uVal_7 = ((int64_t)(param_1[2] - uVal_9) >> 3) * 0x6db6db6db6db6db7;
  uVal_13 = 0x492492492492492 - (uVal_7 >> 1);
  uVal_15 = (uVal_7 >> 1) + uVal_7;
  if (uVal_15 <= uVal_14) {
    uVal_15 = uVal_14;
  }
  if (uVal_13 <= uVal_7 && uVal_7 - uVal_13 != 0) {
    uVal_15 = 0x492492492492492;
  }
  if (uVal_15 < 0x492492492492493) {
    if (uVal_15 == 0) {
      uVal_7 = 0;
    }
    else if (uVal_15 < 0x4a) {
      uVal_7 = func_0x180672de0();
    }
    else {
      if (uVal_15 == 0x492492492492492) goto LAB_1801b667b;
      lVal_8 = func_0x180672de0(uVal_15 * 0x38 + 0x27);
      uVal_7 = lVal_8 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_7 - 8) = lVal_8;
    }
    *(uint32_t *)((int64_t)pU64_2 + (uVal_7 - uVal_9)) = *param_2;
    *(uint8_t (*)[16])((int64_t)pU64_2 + ((uVal_7 + 8) - uVal_9)) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_2 + ((uVal_7 + 0x18) - uVal_9)) = ZEXT816(0);
    uVal_13 = *(uint64_t *)(param_2 + 6);
    if (*(uint64_t *)(param_2 + 8) < 0x10) {
      pU64_11 = param_2 + 2;
    }
    else {
      pU64_11 = *(uint32_t **)(param_2 + 2);
    }
    if (-1 < (int64_t)uVal_13) {
      uVal_1 = (int64_t)pU64_2 + (uVal_7 - uVal_9);
      if (uVal_13 < 0x10) {
        lVal_8 = uVal_7 - uVal_9;
        *(uint64_t *)(uVal_1 + 0x18) = uVal_13;
        *(uint64_t *)(uVal_1 + 0x20) = 0xf;
        uVal_4 = pU64_11[1];
        uVal_5 = pU64_11[2];
        uVal_6 = pU64_11[3];
        *(uint32_t *)((int64_t)pU64_2 + lVal_8 + 8) = *pU64_11;
        *(uint32_t *)((int64_t)pU64_2 + lVal_8 + 0xc) = uVal_4;
        *(uint32_t *)((int64_t)pU64_2 + lVal_8 + 0x10) = uVal_5;
        *(uint32_t *)((int64_t)pU64_2 + lVal_8 + 0x14) = uVal_6;
      }
      else {
        uVal_10 = uVal_13 | 0xf;
        uVal_16 = 0x16;
        if (0x16 < uVal_10) {
          uVal_16 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          uVal_10 = func_0x180672de0(uVal_16 + 1);
        }
        else {
          lVal_8 = func_0x180672de0(uVal_16 + 0x28);
          uVal_10 = lVal_8 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_10 - 8) = lVal_8;
        }
        *(uint64_t *)(uVal_1 + 8) = uVal_10;
        *(uint64_t *)(uVal_1 + 0x18) = uVal_13;
        *(uint64_t *)(uVal_1 + 0x20) = uVal_16;
        func_0x1806aa960(uVal_10,pU64_11,uVal_13 + 1);
      }
      uVal_4 = param_2[0xb];
      uVal_5 = param_2[0xc];
      uVal_6 = param_2[0xd];
      *(uint32_t *)(uVal_1 + 0x28) = param_2[10];
      *(uint32_t *)(uVal_1 + 0x2c) = uVal_4;
      *(uint32_t *)(uVal_1 + 0x30) = uVal_5;
      *(uint32_t *)(uVal_1 + 0x34) = uVal_6;
      if (pU64_2 == (uint32_t *)param_1[1]) {
        func_0x1801b66d0(*param_1,(uint32_t *)param_1[1],uVal_7,param_1);
      }
      else {
        func_0x1801b66d0(*param_1,pU64_2,uVal_7,param_1);
        func_0x1801b66d0(pU64_2,param_1[1],(int64_t)pU64_2 + (uVal_7 - uVal_9) + 0x38,param_1);
      }
      uVal_9 = *param_1;
      if (uVal_9 != 0) {
        uVal_13 = param_1[1];
        if (uVal_9 == uVal_13) {
          uVal_13 = param_1[2] - uVal_9;
        }
        else {
          do {
            uVal_16 = *(uint64_t *)(uVal_9 + 0x20);
            if (0xf < uVal_16) {
              lVal_8 = *(int64_t *)(uVal_9 + 8);
              uVal_10 = uVal_16 + 1;
              lVal_12 = lVal_8;
              if (0xfff < uVal_10) {
                lVal_12 = *(int64_t *)(lVal_8 + -8);
                if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_12)) goto LAB_1801b6619;
                uVal_10 = uVal_16 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_12,uVal_10);
            }
            *(uint64_t *)(uVal_9 + 0x18) = 0;
            *(uint64_t *)(uVal_9 + 0x20) = 0xf;
            *(uint8_t *)(uVal_9 + 8) = 0;
            uVal_9 = uVal_9 + 0x38;
          } while (uVal_9 != uVal_13);
          uVal_9 = *param_1;
          uVal_13 = param_1[2] - uVal_9;
        }
        if (0xfff < uVal_13) {
          if (0x1f < (uVal_9 - 8) - *(uint64_t *)(uVal_9 - 8)) {
LAB_1801b6619:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_13 = uVal_13 + 0x27;
          uVal_9 = *(uint64_t *)(uVal_9 - 8);
        }
        thunk_FUN_180695dd0(uVal_9,uVal_13);
      }
      *param_1 = uVal_7;
      param_1[1] = uVal_14 * 0x38 + uVal_7;
      param_1[2] = uVal_15 * 0x38 + uVal_7;
      return uVal_1;
    }
  }
  else {
LAB_1801b667b:
    func_0x18007ba90();
  }
  func_0x18007ba70();
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_9 = (*fnPtr_3)();
  return uVal_9;
}

// Unwind@1801b6690
void Unwind_1801b6690(uint64_t param_1,int64_t param_2)
{
  func_0x1801b6840(param_2 + 0x28);
  return;
}

// func_0x1801b66d0
uint32_t * func_0x1801b66d0(uint32_t *param_1,uint32_t *param_2,uint32_t *param_3)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint32_t *pU64_8;
  uint64_t uVal_9;
  
  while( true ) {
    if (param_1 == param_2) {
      return param_3;
    }
    *param_3 = *param_1;
    *(uint8_t (*)[16])(param_3 + 2) = ZEXT816(0);
    *(uint8_t (*)[16])(param_3 + 6) = ZEXT816(0);
    if (*(uint64_t *)(param_1 + 8) < 0x10) {
      pU64_8 = param_1 + 2;
    }
    else {
      pU64_8 = *(uint32_t **)(param_1 + 2);
    }
    uVal_1 = *(uint64_t *)(param_1 + 6);
    if ((int64_t)uVal_1 < 0) break;
    if (uVal_1 < 0x10) {
      *(uint64_t *)(param_3 + 6) = uVal_1;
      *(uint64_t *)(param_3 + 8) = 0xf;
      uVal_3 = pU64_8[1];
      uVal_4 = pU64_8[2];
      uVal_5 = pU64_8[3];
      param_3[2] = *pU64_8;
      param_3[3] = uVal_3;
      param_3[4] = uVal_4;
      param_3[5] = uVal_5;
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
      *(uint64_t *)(param_3 + 2) = uVal_6;
      *(uint64_t *)(param_3 + 6) = uVal_1;
      *(uint64_t *)(param_3 + 8) = uVal_9;
      func_0x1806aa960(uVal_6,pU64_8,uVal_1 + 1);
    }
    uVal_3 = param_1[0xb];
    uVal_4 = param_1[0xc];
    uVal_5 = param_1[0xd];
    param_3[10] = param_1[10];
    param_3[0xb] = uVal_3;
    param_3[0xc] = uVal_4;
    param_3[0xd] = uVal_5;
    param_3 = param_3 + 0xe;
    param_1 = param_1 + 0xe;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_8 = (uint32_t *)(*fnPtr_2)();
  return pU64_8;
}

// Unwind@1801b6800
void Unwind_1801b6800(uint64_t param_1,int64_t param_2)
{
  func_0x1801b6920(param_2 + 0x20);
  return;
}

// func_0x1801b6840
void func_0x1801b6840(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  lVal_4 = *(int64_t *)(param_1 + 8);
  if (lVal_4 == 0) {
    return;
  }
  lVal_6 = *(int64_t *)(param_1 + 0x18);
  lVal_1 = *(int64_t *)(param_1 + 0x20);
  if (lVal_6 == lVal_1) {
    lVal_6 = *(int64_t *)(param_1 + 0x10);
  }
  else {
    do {
      uVal_5 = *(uint64_t *)(lVal_6 + 0x20);
      if (0xf < uVal_5) {
        lVal_4 = *(int64_t *)(lVal_6 + 8);
        uVal_2 = uVal_5 + 1;
        lVal_3 = lVal_4;
        if (0xfff < uVal_2) {
          lVal_3 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_3)) goto LAB_1801b6918;
          uVal_2 = uVal_5 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_3,uVal_2);
      }
      *(uint64_t *)(lVal_6 + 0x18) = 0;
      *(uint64_t *)(lVal_6 + 0x20) = 0xf;
      *(uint8_t *)(lVal_6 + 8) = 0;
      lVal_6 = lVal_6 + 0x38;
    } while (lVal_6 != lVal_1);
    lVal_4 = *(int64_t *)(param_1 + 8);
    lVal_6 = *(int64_t *)(param_1 + 0x10);
  }
  uVal_5 = lVal_6 * 0x38;
  if (0xfff < uVal_5) {
    if (0x1f < (uint64_t)((lVal_4 + -8) - *(int64_t *)(lVal_4 + -8))) {
LAB_1801b6918:
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

// func_0x1801b6920
void func_0x1801b6920(int64_t *param_1)
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
    uVal_2 = *(uint64_t *)(lVal_6 + 0x20);
    if (0xf < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_6 + 8);
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
    *(uint64_t *)(lVal_6 + 0x18) = 0;
    *(uint64_t *)(lVal_6 + 0x20) = 0xf;
    *(uint8_t *)(lVal_6 + 8) = 0;
    lVal_6 = lVal_6 + 0x38;
  } while( true );
}

// func_0x1801b6ff0
void func_0x1801b6ff0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x3c] = 1;
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
  return;
}

// func_0x1801b72f0
void func_0x1801b72f0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x27] = 1;
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
  return;
}

// func_0x1801b7c70
void func_0x1801b7c70(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x3f] = 1;
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
  return;
}

// func_0x1801b8010
void func_0x1801b8010(uint8_t (*param_1)[16])
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  
  lVal_5 = *(int64_t *)*param_1;
  if (lVal_5 != 0) {
    lVal_6 = *(int64_t *)(*param_1 + 8);
    if (lVal_5 != lVal_6) {
      do {
        uVal_4 = *(uint64_t *)(lVal_5 + 0x80);
        if (0xf < uVal_4) {
          lVal_1 = *(int64_t *)(lVal_5 + 0x68);
          uVal_2 = uVal_4 + 1;
          lVal_3 = lVal_1;
          if (0xfff < uVal_2) {
            lVal_3 = *(int64_t *)(lVal_1 + -8);
            if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_1801b8148;
            uVal_2 = uVal_4 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_3,uVal_2);
        }
        *(uint64_t *)(lVal_5 + 0x78) = 0;
        *(uint64_t *)(lVal_5 + 0x80) = 0xf;
        *(uint8_t *)(lVal_5 + 0x68) = 0;
        lVal_1 = *(int64_t *)(lVal_5 + 0x50);
        if (lVal_1 != 0) {
          uVal_4 = *(int64_t *)(lVal_5 + 0x60) - lVal_1;
          lVal_3 = lVal_1;
          if (0xfff < uVal_4) {
            lVal_3 = *(int64_t *)(lVal_1 + -8);
            if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_1801b8148;
            uVal_4 = uVal_4 + 0x27;
          }
          thunk_FUN_180695dd0(lVal_3,uVal_4);
          *(uint8_t (*)[16])(lVal_5 + 0x50) = ZEXT816(0);
          *(uint64_t *)(lVal_5 + 0x60) = 0;
        }
        lVal_5 = lVal_5 + 0x88;
      } while (lVal_5 != lVal_6);
      lVal_5 = *(int64_t *)*param_1;
    }
    uVal_4 = *(int64_t *)param_1[1] - lVal_5;
    lVal_6 = lVal_5;
    if (0xfff < uVal_4) {
      lVal_6 = *(int64_t *)(lVal_5 + -8);
      if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_6)) {
LAB_1801b8148:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_6,uVal_4);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// func_0x1801b8150
int64_t func_0x1801b8150(uint64_t *param_1,uint64_t param_2,uint32_t *param_3)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
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
  uint64_t uVal_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  
  uVal_16 = *param_1;
  uVal_18 = ((int64_t)(param_1[1] - uVal_16) >> 3) * -0x30c30c30c30c30c3 + 1;
  uVal_13 = ((int64_t)(param_1[2] - uVal_16) >> 3) * -0x30c30c30c30c30c3;
  uVal_15 = 0x186186186186186 - (uVal_13 >> 1);
  uVal_17 = (uVal_13 >> 1) + uVal_13;
  if (uVal_17 <= uVal_18) {
    uVal_17 = uVal_18;
  }
  if (uVal_15 <= uVal_13 && uVal_13 - uVal_15 != 0) {
    uVal_17 = 0x186186186186186;
  }
  if (0x186186186186186 < uVal_17) {
LAB_1801b84ae:
    func_0x18007ba90();
    goto LAB_1801b84b3;
  }
  if (uVal_17 == 0) {
    uVal_13 = 0;
  }
  else if (uVal_17 < 0x19) {
    uVal_13 = func_0x180672de0();
  }
  else {
    if (uVal_17 == 0x186186186186186) goto LAB_1801b84ae;
    lVal_11 = func_0x180672de0(uVal_17 * 0xa8 + 0x27);
    uVal_13 = lVal_11 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_13 - 8) = lVal_11;
  }
  lVal_12 = param_2 - uVal_16;
  lVal_11 = uVal_13 + lVal_12;
  *(uint8_t (*)[16])(uVal_13 + 0x10 + lVal_12) = ZEXT816(0);
  *(uint8_t (*)[16])(uVal_13 + lVal_12) = ZEXT816(0);
  uVal_4 = *param_3;
  uVal_5 = param_3[1];
  uVal_6 = param_3[2];
  uVal_7 = param_3[3];
  uVal_8 = param_3[5];
  uVal_9 = param_3[6];
  uVal_10 = param_3[7];
  pU64_2 = (uint32_t *)(uVal_13 + 0x10 + lVal_12);
  *pU64_2 = param_3[4];
  pU64_2[1] = uVal_8;
  pU64_2[2] = uVal_9;
  pU64_2[3] = uVal_10;
  pU64_2 = (uint32_t *)(uVal_13 + lVal_12);
  *pU64_2 = uVal_4;
  pU64_2[1] = uVal_5;
  pU64_2[2] = uVal_6;
  pU64_2[3] = uVal_7;
  *(uint64_t *)(param_3 + 4) = 0;
  *(uint64_t *)(param_3 + 6) = 0xf;
  *(uint8_t *)param_3 = 0;
  func_0x180057700(uVal_13 + lVal_12 + 0x20,param_3 + 8);
  uVal_15 = *param_1;
  uVal_16 = param_1[1];
  if (param_2 == uVal_16) {
    if (uVal_15 != param_2) {
      lVal_12 = 0;
      do {
        func_0x1801b8710(uVal_13 + lVal_12,uVal_15 + lVal_12);
        lVal_1 = uVal_15 + lVal_12;
        lVal_12 = lVal_12 + 0xa8;
      } while (lVal_1 + 0xa8U != param_2);
      goto LAB_1801b8413;
    }
  }
  else {
    if (uVal_15 != param_2) {
      lVal_12 = 0;
      do {
        *(uint8_t (*)[16])(uVal_13 + 0x10 + lVal_12) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_13 + lVal_12) = ZEXT816(0);
        pU64_2 = (uint32_t *)(uVal_15 + lVal_12);
        uVal_4 = *pU64_2;
        uVal_5 = pU64_2[1];
        uVal_6 = pU64_2[2];
        uVal_7 = pU64_2[3];
        pU64_2 = (uint32_t *)(uVal_15 + 0x10 + lVal_12);
        uVal_8 = pU64_2[1];
        uVal_9 = pU64_2[2];
        uVal_10 = pU64_2[3];
        pU64_3 = (uint32_t *)(uVal_13 + 0x10 + lVal_12);
        *pU64_3 = *pU64_2;
        pU64_3[1] = uVal_8;
        pU64_3[2] = uVal_9;
        pU64_3[3] = uVal_10;
        pU64_2 = (uint32_t *)(uVal_13 + lVal_12);
        *pU64_2 = uVal_4;
        pU64_2[1] = uVal_5;
        pU64_2[2] = uVal_6;
        pU64_2[3] = uVal_7;
        *(uint64_t *)(uVal_15 + 0x10 + lVal_12) = 0;
        *(uint64_t *)(uVal_15 + 0x18 + lVal_12) = 0xf;
        *(uint8_t *)(uVal_15 + lVal_12) = 0;
        func_0x180057700(uVal_13 + 0x20 + lVal_12,uVal_15 + 0x20 + lVal_12);
        lVal_1 = uVal_15 + lVal_12;
        lVal_12 = lVal_12 + 0xa8;
      } while (lVal_1 + 0xa8U != param_2);
      uVal_16 = param_1[1];
    }
    if (param_2 != uVal_16) {
      lVal_12 = 0;
      do {
        *(uint8_t (*)[16])(lVal_11 + 0xb8 + lVal_12) = ZEXT816(0);
        *(uint8_t (*)[16])(lVal_11 + 0xa8 + lVal_12) = ZEXT816(0);
        pU64_2 = (uint32_t *)(param_2 + lVal_12);
        uVal_4 = *pU64_2;
        uVal_5 = pU64_2[1];
        uVal_6 = pU64_2[2];
        uVal_7 = pU64_2[3];
        pU64_2 = (uint32_t *)(param_2 + 0x10 + lVal_12);
        uVal_8 = pU64_2[1];
        uVal_9 = pU64_2[2];
        uVal_10 = pU64_2[3];
        pU64_3 = (uint32_t *)(lVal_11 + 0xb8 + lVal_12);
        *pU64_3 = *pU64_2;
        pU64_3[1] = uVal_8;
        pU64_3[2] = uVal_9;
        pU64_3[3] = uVal_10;
        pU64_2 = (uint32_t *)(lVal_11 + 0xa8 + lVal_12);
        *pU64_2 = uVal_4;
        pU64_2[1] = uVal_5;
        pU64_2[2] = uVal_6;
        pU64_2[3] = uVal_7;
        *(uint64_t *)(param_2 + 0x10 + lVal_12) = 0;
        *(uint64_t *)(param_2 + 0x18 + lVal_12) = 0xf;
        *(uint8_t *)(param_2 + lVal_12) = 0;
        func_0x180057700(lVal_12 + lVal_11 + 200,param_2 + lVal_12 + 0x20);
        lVal_1 = param_2 + lVal_12;
        lVal_12 = lVal_12 + 0xa8;
      } while (lVal_1 + 0xa8U != uVal_16);
    }
LAB_1801b8413:
    uVal_15 = *param_1;
  }
  if (uVal_15 != 0) {
    uVal_16 = param_1[1];
    if (uVal_15 != uVal_16) {
      do {
        func_0x180183400(uVal_15);
        uVal_15 = uVal_15 + 0xa8;
      } while (uVal_15 != uVal_16);
      uVal_15 = *param_1;
    }
    uVal_14 = param_1[2] - uVal_15;
    uVal_16 = uVal_15;
    if (0xfff < uVal_14) {
      uVal_16 = *(uint64_t *)(uVal_15 - 8);
      if (0x1f < (uVal_15 - 8) - uVal_16) {
LAB_1801b84b3:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_14 = uVal_14 + 0x27;
    }
    thunk_FUN_180695dd0(uVal_16,uVal_14);
  }
  *param_1 = uVal_13;
  param_1[1] = uVal_18 * 0xa8 + uVal_13;
  param_1[2] = uVal_17 * 0xa8 + uVal_13;
  return lVal_11;
}

// Unwind@1801b84c0
void Unwind_1801b84c0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  
  lVal_1 = *(int64_t *)(param_2 + 0x60);
  for (lVal_2 = *(int64_t *)(param_2 + 0x70); lVal_2 != 0; lVal_2 = lVal_2 + -0xa8) {
    func_0x180183400(lVal_1);
    lVal_1 = lVal_1 + 0xa8;
  }
  return;
}

// Unwind@1801b8520
void Unwind_1801b8520(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  
  lVal_1 = *(int64_t *)(param_2 + 0x60);
  lVal_2 = *(int64_t *)(param_2 + 0x70);
  func_0x180001e70(lVal_1 + lVal_2);
  for (; lVal_2 != 0; lVal_2 = lVal_2 + -0xa8) {
    func_0x180183400(lVal_1);
    lVal_1 = lVal_1 + 0xa8;
  }
  return;
}

// Unwind@1801b8590
void Unwind_1801b8590(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  lVal_1 = *(int64_t *)(param_2 + 0x70);
  func_0x180001e70(*(int64_t *)(param_2 + 0x68) + lVal_1 + 0xa8);
  lVal_2 = *(int64_t *)(param_2 + 0x58);
  if (lVal_1 != 0) {
    lVal_3 = 0;
    do {
      func_0x180183400(lVal_2 + lVal_3);
      lVal_3 = lVal_3 + 0xa8;
    } while (lVal_1 != lVal_3);
  }
  return;
}

// Unwind@1801b8610
void Unwind_1801b8610(uint64_t param_1,int64_t param_2)
{
  func_0x1801b8690(param_2 + 0x28);
  return;
}

// Unwind@1801b8650
void Unwind_1801b8650(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x68));
  return;
}

// func_0x1801b8690
void func_0x1801b8690(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  lVal_2 = *(int64_t *)(param_1 + 8);
  if (lVal_2 == 0) {
    return;
  }
  lVal_4 = *(int64_t *)(param_1 + 0x18);
  lVal_1 = *(int64_t *)(param_1 + 0x20);
  if (lVal_4 != lVal_1) {
    do {
      func_0x180183400(lVal_4);
      lVal_4 = lVal_4 + 0xa8;
    } while (lVal_4 != lVal_1);
    lVal_2 = *(int64_t *)(param_1 + 8);
  }
  uVal_3 = *(int64_t *)(param_1 + 0x10) * 0xa8;
  lVal_4 = lVal_2;
  if (0xfff < uVal_3) {
    lVal_4 = *(int64_t *)(lVal_2 + -8);
    if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_3 = uVal_3 + 0x27;
  }
  thunk_FUN_180695dd0(lVal_4,uVal_3);
  return;
}

// func_0x1801b8710
uint8_t (*func_0x1801b8710(uint8_t (*param_1)[16],uint64_t *param_2))[16]
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
  
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  uVal_1 = param_2[2];
  pU64_9 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    pU64_9 = (uint64_t *)*param_2;
  }
  if (-1 < (int64_t)uVal_1) {
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
    func_0x180057700(param_1 + 2,param_2 + 4);
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_8 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_8;
}

// Unwind@1801b8800
void Unwind_1801b8800(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x1801b8890
uint64_t func_0x1801b8890(int64_t *param_1,int64_t param_2,uint64_t param_3)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  int64_t *local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  int64_t *local_68;
  uint64_t local_60;
  uint64_t local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVal_8 = *param_1;
  local_78 = (param_1[1] - lVal_8 >> 3) * -0xf0f0f0f0f0f0f0f + 1;
  uVal_6 = (param_1[2] - lVal_8 >> 3) * -0xf0f0f0f0f0f0f0f;
  uVal_7 = 0x1e1e1e1e1e1e1e1 - (uVal_6 >> 1);
  uVal_5 = (uVal_6 >> 1) + uVal_6;
  if (uVal_5 <= local_78) {
    uVal_5 = local_78;
  }
  if (uVal_7 <= uVal_6 && uVal_6 - uVal_7 != 0) {
    uVal_5 = 0x1e1e1e1e1e1e1e1;
  }
  if (0x1e1e1e1e1e1e1e1 < uVal_5) {
    func_0x18007ba90();
    fnPtr_1 = (func_ptr_t )swi(3);
    uVal_5 = (*fnPtr_1)();
    return uVal_5;
  }
  local_68 = param_1;
  if (uVal_5 == 0) {
    uVal_6 = 0;
  }
  else if (uVal_5 < 0x1f) {
    uVal_6 = func_0x180672de0(uVal_5 * 0x88);
  }
  else {
    lVal_4 = func_0x180672de0(uVal_5 * 0x88 + 0x27);
    uVal_6 = lVal_4 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_6 - 8) = lVal_4;
  }
  pLong_3 = local_68;
  uVal_7 = uVal_6 + (param_2 - lVal_8);
  uVal_9 = uVal_6 + (param_2 - lVal_8) + 0x88;
  local_a0 = local_68;
  local_98 = uVal_6;
  local_90 = uVal_5;
  local_88 = uVal_9;
  local_80 = uVal_9;
  func_0x180057700(uVal_7,param_3);
  lVal_8 = *pLong_3;
  lVal_4 = pLong_3[1];
  local_88 = uVal_7;
  local_70 = uVal_7;
  uVal_2 = uVal_6;
  local_60 = uVal_6;
  local_50 = pLong_3;
  if (param_2 == lVal_4) {
    for (; local_58 = uVal_2, lVal_8 != param_2; lVal_8 = lVal_8 + 0x88) {
      func_0x180057700(uVal_2,lVal_8);
      uVal_2 = uVal_2 + 0x88;
    }
  }
  else {
    uVal_7 = uVal_6;
    if (lVal_8 != param_2) {
      do {
        local_58 = uVal_7;
        func_0x180057700(uVal_7,lVal_8);
        lVal_8 = lVal_8 + 0x88;
        uVal_7 = uVal_7 + 0x88;
      } while (lVal_8 != param_2);
      lVal_4 = local_68[1];
      local_50 = local_68;
    }
    uVal_7 = local_70;
    local_88 = uVal_6;
    local_60 = uVal_9;
    local_58 = uVal_9;
    if (param_2 != lVal_4) {
      do {
        local_58 = uVal_9;
        func_0x180057700(uVal_9,param_2);
        uVal_9 = uVal_9 + 0x88;
        param_2 = param_2 + 0x88;
        local_58 = uVal_9;
      } while (param_2 != lVal_4);
    }
  }
  local_98 = 0;
  func_0x1801b8bd0(local_68,uVal_6,local_78,uVal_5);
  func_0x1801b8d40(&local_a0);
  return uVal_7;
}

// Unwind@1801b8ad0
void Unwind_1801b8ad0(uint64_t param_1,int64_t param_2)
{
  func_0x1801b8d40(param_2 + 0x28);
  return;
}

// Unwind@1801b8b10
void Unwind_1801b8b10(uint64_t param_1,int64_t param_2)
{
  func_0x1801b8e90(param_2 + 0x68);
  return;
}

// Unwind@1801b8b50
void Unwind_1801b8b50(uint64_t param_1,int64_t param_2)
{
  func_0x1801b8e90(param_2 + 0x68);
  return;
}

// Unwind@1801b8b90
void Unwind_1801b8b90(uint64_t param_1,int64_t param_2)
{
  func_0x1801b8e90(param_2 + 0x68);
  return;
}

// func_0x1801b8bd0
void func_0x1801b8bd0(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  
  lVal_5 = *param_1;
  if (lVal_5 != 0) {
    lVal_6 = param_1[1];
    if (lVal_5 != lVal_6) {
      do {
        uVal_4 = *(uint64_t *)(lVal_5 + 0x80);
        if (0xf < uVal_4) {
          lVal_1 = *(int64_t *)(lVal_5 + 0x68);
          uVal_2 = uVal_4 + 1;
          lVal_3 = lVal_1;
          if (0xfff < uVal_2) {
            lVal_3 = *(int64_t *)(lVal_1 + -8);
            if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_1801b8d39;
            uVal_2 = uVal_4 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_3,uVal_2);
        }
        *(uint64_t *)(lVal_5 + 0x78) = 0;
        *(uint64_t *)(lVal_5 + 0x80) = 0xf;
        *(uint8_t *)(lVal_5 + 0x68) = 0;
        lVal_1 = *(int64_t *)(lVal_5 + 0x50);
        if (lVal_1 != 0) {
          uVal_4 = *(int64_t *)(lVal_5 + 0x60) - lVal_1;
          lVal_3 = lVal_1;
          if (0xfff < uVal_4) {
            lVal_3 = *(int64_t *)(lVal_1 + -8);
            if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_1801b8d39;
            uVal_4 = uVal_4 + 0x27;
          }
          thunk_FUN_180695dd0(lVal_3,uVal_4);
          *(uint8_t (*)[16])(lVal_5 + 0x50) = ZEXT816(0);
          *(uint64_t *)(lVal_5 + 0x60) = 0;
        }
        lVal_5 = lVal_5 + 0x88;
      } while (lVal_5 != lVal_6);
      lVal_5 = *param_1;
    }
    uVal_4 = param_1[2] - lVal_5;
    lVal_6 = lVal_5;
    if (0xfff < uVal_4) {
      lVal_6 = *(int64_t *)(lVal_5 + -8);
      if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_6)) {
LAB_1801b8d39:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_6,uVal_4);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x88 + param_2;
  param_1[2] = param_4 * 0x88 + param_2;
  return;
}

// func_0x1801b8d40
void func_0x1801b8d40(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  lVal_4 = *(int64_t *)(param_1 + 8);
  if (lVal_4 == 0) {
    return;
  }
  lVal_6 = *(int64_t *)(param_1 + 0x18);
  lVal_1 = *(int64_t *)(param_1 + 0x20);
  if (lVal_6 != lVal_1) {
    do {
      uVal_5 = *(uint64_t *)(lVal_6 + 0x80);
      if (0xf < uVal_5) {
        lVal_4 = *(int64_t *)(lVal_6 + 0x68);
        uVal_2 = uVal_5 + 1;
        lVal_3 = lVal_4;
        if (0xfff < uVal_2) {
          lVal_3 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_3)) goto LAB_1801b8e8e;
          uVal_2 = uVal_5 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_3,uVal_2);
      }
      *(uint64_t *)(lVal_6 + 0x78) = 0;
      *(uint64_t *)(lVal_6 + 0x80) = 0xf;
      *(uint8_t *)(lVal_6 + 0x68) = 0;
      lVal_4 = *(int64_t *)(lVal_6 + 0x50);
      if (lVal_4 != 0) {
        uVal_5 = *(int64_t *)(lVal_6 + 0x60) - lVal_4;
        lVal_3 = lVal_4;
        if (0xfff < uVal_5) {
          lVal_3 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_3)) goto LAB_1801b8e8e;
          uVal_5 = uVal_5 + 0x27;
        }
        thunk_FUN_180695dd0(lVal_3,uVal_5);
        *(uint8_t (*)[16])(lVal_6 + 0x50) = ZEXT816(0);
        *(uint64_t *)(lVal_6 + 0x60) = 0;
      }
      lVal_6 = lVal_6 + 0x88;
    } while (lVal_6 != lVal_1);
    lVal_4 = *(int64_t *)(param_1 + 8);
  }
  uVal_5 = *(int64_t *)(param_1 + 0x10) * 0x88;
  lVal_6 = lVal_4;
  if (0xfff < uVal_5) {
    lVal_6 = *(int64_t *)(lVal_4 + -8);
    if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_6)) {
LAB_1801b8e8e:
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_5 = uVal_5 + 0x27;
  }
  thunk_FUN_180695dd0(lVal_6,uVal_5);
  return;
}

// func_0x1801b8e90
void func_0x1801b8e90(int64_t *param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  lVal_6 = *param_1;
  lVal_1 = param_1[1];
  do {
    if (lVal_6 == lVal_1) {
      return;
    }
    uVal_5 = *(uint64_t *)(lVal_6 + 0x80);
    if (0xf < uVal_5) {
      lVal_2 = *(int64_t *)(lVal_6 + 0x68);
      uVal_3 = uVal_5 + 1;
      lVal_4 = lVal_2;
      if (0xfff < uVal_3) {
        lVal_4 = *(int64_t *)(lVal_2 + -8);
        if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_1801b8f80:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_3 = uVal_5 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_4,uVal_3);
    }
    *(uint64_t *)(lVal_6 + 0x78) = 0;
    *(uint64_t *)(lVal_6 + 0x80) = 0xf;
    *(uint8_t *)(lVal_6 + 0x68) = 0;
    lVal_2 = *(int64_t *)(lVal_6 + 0x50);
    if (lVal_2 != 0) {
      uVal_5 = *(int64_t *)(lVal_6 + 0x60) - lVal_2;
      lVal_4 = lVal_2;
      if (0xfff < uVal_5) {
        lVal_4 = *(int64_t *)(lVal_2 + -8);
        if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801b8f80;
        uVal_5 = uVal_5 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_4,uVal_5);
      *(uint8_t (*)[16])(lVal_6 + 0x50) = ZEXT816(0);
      *(uint64_t *)(lVal_6 + 0x60) = 0;
    }
    lVal_6 = lVal_6 + 0x88;
  } while( true );
}

// func_0x1801b94b0
void func_0x1801b94b0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x35] = 1;
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
  return;
}

// func_0x1801b9670
void func_0x1801b9670(int64_t *param_1)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  pU64_1 = (uint64_t *)*param_1;
  *(uint64_t *)pU64_1[1] = 0;
  pU64_1 = (uint64_t *)*pU64_1;
  do {
    if (pU64_1 == (uint64_t *)0x0) {
      thunk_FUN_180695dd0(*param_1,0x38);
      return;
    }
    pU64_2 = (uint64_t *)*pU64_1;
    uVal_3 = pU64_1[6];
    if (0xf < uVal_3) {
      lVal_4 = pU64_1[3];
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
    pU64_1[5] = 0;
    pU64_1[6] = 0xf;
    *(uint8_t *)(pU64_1 + 3) = 0;
    thunk_FUN_180695dd0(pU64_1,0x38);
    pU64_1 = pU64_2;
  } while( true );
}

// func_0x1801b9780
void func_0x1801b9780(uint64_t param_1,uint64_t param_2,uint8_t (*param_3)[16])
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint8_t *pU64_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint8_t *pU64_7;
  int64_t *pLong_8;
  
  if (1 < param_1) {
    if (param_1 == 3) {
      pLong_8 = *(int64_t **)*param_3;
      if (pLong_8 != (int64_t *)0x0) {
        pLong_1 = *(int64_t **)(*param_3 + 8);
        if (pLong_8 == pLong_1) {
          uVal_6 = *(int64_t *)param_3[1] - (int64_t)pLong_8;
        }
        else {
          do {
            uVal_6 = pLong_8[3];
            if (0xf < uVal_6) {
              lVal_2 = *pLong_8;
              uVal_4 = uVal_6 + 1;
              lVal_5 = lVal_2;
              if (0xfff < uVal_4) {
                lVal_5 = *(int64_t *)(lVal_2 + -8);
                if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_5)) goto LAB_1801b98c8;
                uVal_4 = uVal_6 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_5,uVal_4);
            }
            pLong_8[2] = 0;
            pLong_8[3] = 0xf;
            *(uint8_t *)pLong_8 = 0;
            pLong_8 = pLong_8 + 4;
          } while (pLong_8 != pLong_1);
          pLong_8 = *(int64_t **)*param_3;
          uVal_6 = *(int64_t *)param_3[1] - (int64_t)pLong_8;
        }
        if (0xfff < uVal_6) {
          if ((uint8_t *)0x1f <
              (uint8_t *)((int64_t)pLong_8 + (-8 - (int64_t)(int64_t *)pLong_8[-1]))) {
LAB_1801b98c8:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_6 = uVal_6 + 0x27;
          pLong_8 = (int64_t *)pLong_8[-1];
        }
        thunk_FUN_180695dd0(pLong_8,uVal_6);
        *param_3 = ZEXT816(0);
        *(uint64_t *)param_3[1] = 0;
      }
    }
    else {
      pU64_3 = *(uint8_t **)(param_3[1] + 8);
      if (&DAT_0000000f < pU64_3) {
        lVal_2 = *(int64_t *)*param_3;
        pU64_7 = pU64_3 + 1;
        lVal_5 = lVal_2;
        if ((uint8_t *)0xfff < pU64_7) {
          lVal_5 = *(int64_t *)(lVal_2 + -8);
          if (0x1f < (uint64_t)(lVal_2 + (-8 - lVal_5))) goto LAB_1801b98c8;
          pU64_7 = pU64_3 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,pU64_7);
      }
      *(uint64_t *)param_3[1] = 0;
      *(uint8_t **)(param_3[1] + 8) = &DAT_0000000f;
      (*param_3)[0] = 0;
    }
  }
  return;
}

// func_0x1801ba020
void func_0x1801ba020(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x2e] = 1;
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
  return;
}

// func_0x1801bb2b0
void func_0x1801bb2b0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x2f] = 1;
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
  return;
}

// func_0x1801bb8d0
void func_0x1801bb8d0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x37] = 1;
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
  return;
}

// func_0x1801bbad0
void func_0x1801bbad0(uint64_t param_1,uint64_t param_2,int64_t *param_3)
{
  char ch_1;
  int64_t *pLong_2;
  
  ch_1 = *(char *)((int64_t)param_3 + 0x19);
  while (ch_1 == '\0') {
    func_0x1801bbad0(param_1,param_2,param_3[2]);
    pLong_2 = (int64_t *)*param_3;
    func_0x1801bbb30(param_2,param_3);
    param_3 = pLong_2;
    ch_1 = *(char *)((int64_t)pLong_2 + 0x19);
  }
  return;
}

// func_0x1801bbb30
void func_0x1801bbb30(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_2 + 0x78);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x60);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801bbbec;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x70) = 0;
  *(uint64_t *)(param_2 + 0x78) = 0xf;
  *(uint8_t *)(param_2 + 0x60) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0x38);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x20);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_1801bbbec:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x30) = 0;
  *(uint64_t *)(param_2 + 0x38) = 0xf;
  *(uint8_t *)(param_2 + 0x20) = 0;
  thunk_FUN_180695dd0(param_2,0x80);
  return;
}

// func_0x1801bbe70
uint8_t (*func_0x1801bbe70(uint8_t (*param_1)[16],float *param_2,float *param_3))[16]
{
  float fVal_1;
  float fVal_2;
  float fVal_3;
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  float fVal_8;
  float fVal_9;
  float fVal_10;
  float fVal_11;
  float fVal_12;
  float fVal_13;
  float fVal_14;
  float fVal_15;
  float fVal_16;
  float fVal_17;
  float fVal_18;
  float fVal_19;
  float fVal_20;
  float fVal_21;
  float fVal_22;
  float fVal_23;
  float fVal_24;
  float fVal_25;
  float fVal_26;
  float fVal_27;
  float fVal_28;
  float fVal_29;
  float fVal_30;
  float fVal_31;
  float fVal_32;
  float fVal_33;
  float fVal_34;
  float fVal_35;
  float fVal_36;
  
  fVal_8 = *param_3;
  fVal_9 = param_3[1];
  fVal_10 = param_3[2];
  fVal_11 = param_3[3];
  fVal_12 = param_3[4];
  fVal_13 = param_3[5];
  fVal_14 = param_3[6];
  fVal_15 = param_3[7];
  fVal_16 = param_3[8];
  fVal_17 = param_3[9];
  fVal_18 = param_3[10];
  fVal_19 = param_3[0xb];
  fVal_20 = param_3[0xc];
  fVal_21 = *param_2;
  fVal_22 = param_2[1];
  fVal_23 = param_2[2];
  fVal_24 = param_2[3];
  fVal_25 = param_2[4];
  fVal_26 = param_2[5];
  fVal_27 = param_2[6];
  fVal_28 = param_2[7];
  fVal_29 = param_2[8];
  fVal_30 = param_2[9];
  fVal_31 = param_2[10];
  fVal_32 = param_2[0xb];
  fVal_33 = param_2[0xc];
  fVal_34 = param_2[0xd];
  fVal_35 = param_2[0xe];
  fVal_36 = param_2[0xf];
  fVal_1 = param_3[0xd];
  fVal_2 = param_3[0xe];
  fVal_3 = param_3[0xf];
  auArr_4._4_4_ = fVal_11 * fVal_34 + fVal_10 * fVal_30 + fVal_9 * fVal_26 + fVal_8 * fVal_22;
  auArr_4._0_4_ = fVal_11 * fVal_33 + fVal_10 * fVal_29 + fVal_9 * fVal_25 + fVal_8 * fVal_21;
  auArr_4._8_4_ = fVal_11 * fVal_35 + fVal_10 * fVal_31 + fVal_9 * fVal_27 + fVal_8 * fVal_23;
  auArr_4._12_4_ = fVal_11 * fVal_36 + fVal_10 * fVal_32 + fVal_9 * fVal_28 + fVal_8 * fVal_24;
  *param_1 = auArr_4;
  auArr_7._4_4_ = fVal_15 * fVal_34 + fVal_14 * fVal_30 + fVal_13 * fVal_26 + fVal_12 * fVal_22;
  auArr_7._0_4_ = fVal_15 * fVal_33 + fVal_14 * fVal_29 + fVal_13 * fVal_25 + fVal_12 * fVal_21;
  auArr_7._8_4_ = fVal_15 * fVal_35 + fVal_14 * fVal_31 + fVal_13 * fVal_27 + fVal_12 * fVal_23;
  auArr_7._12_4_ = fVal_15 * fVal_36 + fVal_14 * fVal_32 + fVal_13 * fVal_28 + fVal_12 * fVal_24;
  param_1[1] = auArr_7;
  auArr_5._4_4_ = fVal_19 * fVal_34 + fVal_18 * fVal_30 + fVal_17 * fVal_26 + fVal_16 * fVal_22;
  auArr_5._0_4_ = fVal_19 * fVal_33 + fVal_18 * fVal_29 + fVal_17 * fVal_25 + fVal_16 * fVal_21;
  auArr_5._8_4_ = fVal_19 * fVal_35 + fVal_18 * fVal_31 + fVal_17 * fVal_27 + fVal_16 * fVal_23;
  auArr_5._12_4_ = fVal_19 * fVal_36 + fVal_18 * fVal_32 + fVal_17 * fVal_28 + fVal_16 * fVal_24;
  param_1[2] = auArr_5;
  auArr_6._4_4_ = fVal_3 * fVal_34 + fVal_2 * fVal_30 + fVal_1 * fVal_26 + fVal_20 * fVal_22;
  auArr_6._0_4_ = fVal_3 * fVal_33 + fVal_2 * fVal_29 + fVal_1 * fVal_25 + fVal_20 * fVal_21;
  auArr_6._8_4_ = fVal_3 * fVal_35 + fVal_2 * fVal_31 + fVal_1 * fVal_27 + fVal_20 * fVal_23;
  auArr_6._12_4_ = fVal_3 * fVal_36 + fVal_2 * fVal_32 + fVal_1 * fVal_28 + fVal_20 * fVal_24;
  param_1[3] = auArr_6;
  return param_1;
}

// func_0x1801bc7e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bc7e0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2c9c;
  uVal_9 = _UNK_1806b2c98;
  uVal_8 = _UNK_1806b2c94;
  uVal_7 = _DAT_1806b2c90;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2c9c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x9f9d9cf;
    param_1[2][4] = param_1[2][4] ^ 0xc5;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x1801bc860
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bc860(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2de4;
    uVal_2 = param_1[2] ^ _UNK_1806b2de8;
    uVal_3 = param_1[3] ^ _UNK_1806b2dec;
    *param_1 = *param_1 ^ _DAT_1806b2de0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b2760,0);
  }
  return;
}

// func_0x1801bc8e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bc8e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeaf4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeaf0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeaf8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeafc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xdf2fa55d;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1801bc940
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bc940(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af244;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af240;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af248;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af24c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x63671535;
    param_1[1][4] = param_1[1][4] ^ 0x67;
    param_1[1][5] = param_1[1][5] ^ 0xe5;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1801bc970
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bc970(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b4eb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b4eb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b4eb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b4ebc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xc98f5399;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1801bc990
int64_t func_0x1801bc990(int64_t *param_1,char **param_2)
{
  int64_t lVal_1;
  char *fnPtr_2;
  uint64_t uVal_3;
  int iVal_4;
  size_t sz_5;
  bool bFlag_6;
  void *pVoid_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  
  lVal_1 = *param_1;
  lVal_10 = *(int64_t *)(lVal_1 + 8);
  lVal_8 = lVal_1;
  if (*(char *)(lVal_10 + 0x19) == '\0') {
    fnPtr_2 = *param_2;
    sz_5 = strlen(fnPtr_2);
    do {
      if (*(uint64_t *)(lVal_10 + 0x38) < 0x10) {
        pVoid_7 = (void *)(lVal_10 + 0x20);
      }
      else {
        pVoid_7 = *(void **)(lVal_10 + 0x20);
      }
      uVal_3 = *(uint64_t *)(lVal_10 + 0x30);
      uVal_9 = uVal_3;
      if (sz_5 < uVal_3) {
        uVal_9 = sz_5;
      }
      iVal_4 = memcmp(pVoid_7,fnPtr_2,uVal_9);
      bFlag_6 = uVal_3 < sz_5;
      if (iVal_4 != 0) {
        bFlag_6 = iVal_4 < 0;
      }
      if (bFlag_6 == false) {
        lVal_8 = lVal_10;
      }
      lVal_10 = *(int64_t *)(lVal_10 + (uint64_t)bFlag_6 * 0x10);
    } while (*(char *)(lVal_10 + 0x19) == '\0');
  }
  if (*(char *)(lVal_8 + 0x19) == '\0') {
    fnPtr_2 = *param_2;
    sz_5 = strlen(fnPtr_2);
    uVal_3 = *(uint64_t *)(lVal_8 + 0x30);
    if (*(uint64_t *)(lVal_8 + 0x38) < 0x10) {
      pVoid_7 = (void *)(lVal_8 + 0x20);
    }
    else {
      pVoid_7 = *(void **)(lVal_8 + 0x20);
    }
    uVal_9 = uVal_3;
    if (sz_5 < uVal_3) {
      uVal_9 = sz_5;
    }
    iVal_4 = memcmp(pVoid_7,fnPtr_2,uVal_9);
    bFlag_6 = uVal_3 <= sz_5;
    if (iVal_4 != 0) {
      bFlag_6 = iVal_4 < 1;
    }
    if (bFlag_6) {
      return lVal_8;
    }
  }
  return lVal_1;
}

// func_0x1801bca90
void func_0x1801bca90(char *param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint8_t local_80 [56];
  uint8_t local_48 [32];
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 == '\x01') {
    uVal_1 = *(uint64_t *)(param_1 + 8);
    func_0x1801bcca0(uVal_1,local_48,param_2);
    func_0x1801bcb60(uVal_1,local_48);
    return;
  }
  local_28 = func_0x1800833d0();
  func_0x180083260(local_48,"cannot use erase() with ",&local_28);
  func_0x180082f00(local_80,0x133,local_48,param_1);
  func_0x18067a120(local_80,&DAT_180768700);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// Unwind@1801bcb30
void Unwind_1801bcb30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x1801bcb60
int64_t func_0x1801bcb60(uint64_t *param_1,int64_t **param_2)
{
  char ch_1;
  int64_t **ptr2_Long_2;
  int64_t **ptr2_Long_3;
  int64_t **ptr2_Long_4;
  int64_t **ptr2_Long_5;
  int64_t lVal_6;
  int64_t **ptr2_Long_7;
  bool bFlag_8;
  
  ptr2_Long_7 = (int64_t **)*param_2;
  ptr2_Long_2 = (int64_t **)param_2[1];
  lVal_6 = 0;
  ptr2_Long_4 = ptr2_Long_7;
  do {
    if (ptr2_Long_4 == ptr2_Long_2) {
      ptr2_Long_4 = (int64_t **)*param_1;
      if (((int64_t **)*ptr2_Long_4 == ptr2_Long_7) && (*(char *)((int64_t)ptr2_Long_2 + 0x19) != '\0')) {
        func_0x180085870(param_1,param_1,ptr2_Long_4[1]);
        ptr2_Long_4[1] = (int64_t *)ptr2_Long_4;
        *ptr2_Long_4 = (int64_t *)ptr2_Long_4;
        ptr2_Long_4[2] = (int64_t *)ptr2_Long_4;
        param_1[1] = 0;
      }
      else {
        while (ptr2_Long_7 != ptr2_Long_2) {
          ptr2_Long_4 = (int64_t **)ptr2_Long_7[2];
          if (*(char *)((int64_t)ptr2_Long_7[2] + 0x19) == '\0') {
            do {
              ptr2_Long_7 = ptr2_Long_4;
              ptr2_Long_4 = (int64_t **)*ptr2_Long_7;
            } while (*(char *)((int64_t)*ptr2_Long_7 + 0x19) == '\0');
          }
          else {
            ch_1 = *(char *)((int64_t)ptr2_Long_7[1] + 0x19);
            ptr2_Long_3 = (int64_t **)ptr2_Long_7[1];
            ptr2_Long_4 = ptr2_Long_7;
            while ((ptr2_Long_7 = ptr2_Long_3, ch_1 == '\0' && (ptr2_Long_4 == (int64_t **)ptr2_Long_7[2]))) {
              ch_1 = *(char *)((int64_t)ptr2_Long_7[1] + 0x19);
              ptr2_Long_3 = (int64_t **)ptr2_Long_7[1];
              ptr2_Long_4 = ptr2_Long_7;
            }
          }
          func_0x1800a0c60(param_1);
        }
      }
      return lVal_6;
    }
    ptr2_Long_3 = (int64_t **)ptr2_Long_4[2];
    if (*(char *)((int64_t)ptr2_Long_4[2] + 0x19) == '\0') {
      do {
        ptr2_Long_5 = ptr2_Long_3;
        ptr2_Long_3 = (int64_t **)*ptr2_Long_5;
      } while (*(char *)((int64_t)*ptr2_Long_5 + 0x19) == '\0');
    }
    else {
      do {
        ptr2_Long_5 = (int64_t **)ptr2_Long_4[1];
        if (*(char *)((int64_t)ptr2_Long_5 + 0x19) != '\0') break;
        bFlag_8 = ptr2_Long_4 == (int64_t **)ptr2_Long_5[2];
        ptr2_Long_4 = ptr2_Long_5;
      } while (bFlag_8);
    }
    lVal_6 = lVal_6 + 1;
    ptr2_Long_4 = ptr2_Long_5;
  } while( true );
}

// func_0x1801bcca0
int64_t ** func_0x1801bcca0(int64_t *param_1,int64_t **param_2,char **param_3)
{
  char *fnPtr_1;
  int64_t *pLong_2;
  int iVal_3;
  int64_t *pLong_4;
  bool bFlag_5;
  int64_t **ptr2_Long_6;
  int64_t **ptr2_Long_7;
  int64_t *pLong_8;
  int64_t **ptr2_Long_9;
  int64_t **ptr2_Long_10;
  int64_t **ptr2_Long_11;
  int64_t **ptr2_Long_12;
  
  ptr2_Long_9 = (int64_t **)*param_1;
  ptr2_Long_10 = ptr2_Long_9 + 1;
  ptr2_Long_6 = (int64_t **)ptr2_Long_9[1];
  ptr2_Long_12 = ptr2_Long_9;
  if (*(char *)((int64_t)ptr2_Long_6 + 0x19) == '\0') {
    fnPtr_1 = *param_3;
    pLong_4 = (int64_t *)strlen(fnPtr_1);
    do {
      while( true ) {
        ptr2_Long_7 = ptr2_Long_6;
        if (ptr2_Long_7[7] < (int64_t *)0x10) {
          ptr2_Long_6 = ptr2_Long_7 + 4;
        }
        else {
          ptr2_Long_6 = (int64_t **)ptr2_Long_7[4];
        }
        pLong_2 = ptr2_Long_7[6];
        pLong_8 = pLong_2;
        if (pLong_4 < pLong_2) {
          pLong_8 = pLong_4;
        }
        iVal_3 = memcmp(ptr2_Long_6,fnPtr_1,(size_t)pLong_8);
        bFlag_5 = pLong_2 < pLong_4;
        if (iVal_3 != 0) {
          bFlag_5 = iVal_3 < 0;
        }
        if (bFlag_5) break;
        ptr2_Long_11 = ptr2_Long_12;
        if (*(char *)((int64_t)ptr2_Long_12 + 0x19) != '\0') {
          bFlag_5 = 0 < iVal_3;
          if (iVal_3 == 0) {
            bFlag_5 = pLong_4 < pLong_2;
          }
          ptr2_Long_11 = ptr2_Long_7;
          if (!bFlag_5) {
            ptr2_Long_11 = ptr2_Long_12;
          }
        }
        ptr2_Long_6 = (int64_t **)*ptr2_Long_7;
        ptr2_Long_9 = ptr2_Long_7;
        ptr2_Long_12 = ptr2_Long_11;
        if (*(char *)((int64_t)*ptr2_Long_7 + 0x19) != '\0') goto LAB_1801bcd86;
      }
      ptr2_Long_6 = (int64_t **)ptr2_Long_7[2];
    } while (*(char *)((int64_t)ptr2_Long_7[2] + 0x19) == '\0');
  }
LAB_1801bcd86:
  if (*(char *)((int64_t)ptr2_Long_12 + 0x19) == '\0') {
    ptr2_Long_10 = ptr2_Long_12;
  }
  ptr2_Long_10 = (int64_t **)*ptr2_Long_10;
  if (*(char *)((int64_t)ptr2_Long_10 + 0x19) == '\0') {
    fnPtr_1 = *param_3;
    pLong_4 = (int64_t *)strlen(fnPtr_1);
    do {
      if (&DAT_0000000f < ptr2_Long_10[7]) {
        ptr2_Long_6 = (int64_t **)ptr2_Long_10[4];
      }
      else {
        ptr2_Long_6 = ptr2_Long_10 + 4;
      }
      pLong_2 = ptr2_Long_10[6];
      pLong_8 = pLong_2;
      if (pLong_4 < pLong_2) {
        pLong_8 = pLong_4;
      }
      iVal_3 = memcmp(ptr2_Long_6,fnPtr_1,(size_t)pLong_8);
      bFlag_5 = pLong_4 < pLong_2;
      if (iVal_3 != 0) {
        bFlag_5 = 0 < iVal_3;
      }
      if (bFlag_5 != false) {
        ptr2_Long_12 = ptr2_Long_10;
      }
      ptr2_Long_10 = (int64_t **)ptr2_Long_10[(uint64_t)(bFlag_5 ^ 1) * 2];
    } while (*(char *)((int64_t)ptr2_Long_10 + 0x19) == '\0');
  }
  *param_2 = (int64_t *)ptr2_Long_9;
  param_2[1] = (int64_t *)ptr2_Long_12;
  return param_2;
}

// func_0x1801bce30
void func_0x1801bce30(char *param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint8_t local_80 [56];
  uint8_t local_48 [32];
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 == '\x01') {
    uVal_1 = *(uint64_t *)(param_1 + 8);
    func_0x1801bcf00(uVal_1,local_48,param_2);
    func_0x1801bcb60(uVal_1,local_48);
    return;
  }
  local_28 = func_0x1800833d0();
  func_0x180083260(local_48,"cannot use erase() with ",&local_28);
  func_0x180082f00(local_80,0x133,local_48,param_1);
  func_0x18067a120(local_80,&DAT_180768700);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// Unwind@1801bced0
void Unwind_1801bced0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x1801bcf00
void func_0x1801bcf00(int64_t *param_1,int64_t **param_2,uint64_t *param_3)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int iVal_3;
  int64_t **ptr2_Long_4;
  bool bFlag_5;
  int64_t **ptr2_Long_6;
  uint64_t *pU64_7;
  int64_t **ptr2_Long_8;
  int64_t *pLong_9;
  int64_t **ptr2_Long_10;
  int64_t **ptr2_Long_11;
  int64_t **ptr2_Long_12;
  
  ptr2_Long_8 = (int64_t **)*param_1;
  ptr2_Long_4 = ptr2_Long_8 + 1;
  ptr2_Long_11 = ptr2_Long_8;
  if (*(char *)((int64_t)ptr2_Long_8[1] + 0x19) == '\0') {
    pU64_7 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_7 = (uint64_t *)*param_3;
    }
    pLong_1 = (int64_t *)param_3[2];
    ptr2_Long_6 = (int64_t **)ptr2_Long_8[1];
    do {
      while( true ) {
        if (ptr2_Long_6[7] < (int64_t *)0x10) {
          ptr2_Long_12 = ptr2_Long_6 + 4;
        }
        else {
          ptr2_Long_12 = (int64_t **)ptr2_Long_6[4];
        }
        pLong_2 = ptr2_Long_6[6];
        pLong_9 = pLong_2;
        if (pLong_1 < pLong_2) {
          pLong_9 = pLong_1;
        }
        iVal_3 = memcmp(ptr2_Long_12,pU64_7,(size_t)pLong_9);
        bFlag_5 = pLong_2 < pLong_1;
        if (iVal_3 != 0) {
          bFlag_5 = iVal_3 < 0;
        }
        if (bFlag_5) break;
        ptr2_Long_10 = ptr2_Long_11;
        if (*(char *)((int64_t)ptr2_Long_11 + 0x19) != '\0') {
          iVal_3 = memcmp(pU64_7,ptr2_Long_12,(size_t)pLong_9);
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
        if (*(char *)((int64_t)ptr2_Long_12 + 0x19) != '\0') goto LAB_1801bd010;
      }
      ptr2_Long_6 = (int64_t **)ptr2_Long_6[2];
    } while (*(char *)((int64_t)ptr2_Long_6 + 0x19) == '\0');
  }
LAB_1801bd010:
  if (*(char *)((int64_t)ptr2_Long_11 + 0x19) == '\0') {
    ptr2_Long_4 = ptr2_Long_11;
  }
  ptr2_Long_4 = (int64_t **)*ptr2_Long_4;
  if (*(char *)((int64_t)ptr2_Long_4 + 0x19) == '\0') {
    pU64_7 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_7 = (uint64_t *)*param_3;
    }
    pLong_1 = (int64_t *)param_3[2];
    do {
      if (&DAT_0000000f < ptr2_Long_4[7]) {
        ptr2_Long_6 = (int64_t **)ptr2_Long_4[4];
      }
      else {
        ptr2_Long_6 = ptr2_Long_4 + 4;
      }
      pLong_2 = ptr2_Long_4[6];
      pLong_9 = pLong_1;
      if (pLong_2 < pLong_1) {
        pLong_9 = pLong_2;
      }
      iVal_3 = memcmp(pU64_7,ptr2_Long_6,(size_t)pLong_9);
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

// func_0x1801bd0c0
int64_t * func_0x1801bd0c0(int64_t *param_1,int64_t *param_2,uint64_t *param_3,float *param_4)
{
  float fVal_1;
  char ch_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  func_ptr_t fnPtr_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint32_t uVal_14;
  bool bFlag_15;
  uint8_t uVal_16;
  int iVal_17;
  int64_t lVal_18;
  int64_t *pLong_19;
  int64_t lVal_20;
  void *pVoid_21;
  uint64_t *pU64_22;
  uint64_t uVal_23;
  uint uVal_24;
  int64_t local_50;
  uint local_48;
  
  lVal_3 = *param_1;
  lVal_18 = *(int64_t *)(lVal_3 + 8);
  uVal_24 = 0;
  lVal_20 = lVal_3;
  if (*(char *)(lVal_18 + 0x19) == '\0') {
    pU64_22 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_22 = (uint64_t *)*param_3;
    }
    uVal_5 = param_3[2];
    lVal_4 = lVal_18;
    do {
      lVal_18 = lVal_4;
      if (*(uint64_t *)(lVal_18 + 0x38) < 0x10) {
        pVoid_21 = (void *)(lVal_18 + 0x20);
      }
      else {
        pVoid_21 = *(void **)(lVal_18 + 0x20);
      }
      uVal_6 = *(uint64_t *)(lVal_18 + 0x30);
      uVal_23 = uVal_6;
      if (uVal_5 < uVal_6) {
        uVal_23 = uVal_5;
      }
      iVal_17 = memcmp(pVoid_21,pU64_22,uVal_23);
      bFlag_15 = uVal_6 < uVal_5;
      if (iVal_17 != 0) {
        bFlag_15 = iVal_17 < 0;
      }
      if (bFlag_15 == false) {
        lVal_20 = lVal_18;
      }
      lVal_4 = *(int64_t *)(lVal_18 + (uint64_t)bFlag_15 * 0x10);
    } while (*(char *)(lVal_4 + 0x19) == '\0');
    uVal_24 = (uint)(bFlag_15 ^ 1);
    ch_2 = *(char *)(lVal_20 + 0x19);
  }
  else {
    ch_2 = *(char *)(lVal_3 + 0x19);
  }
  if (ch_2 == '\0') {
    if (*(uint64_t *)(lVal_20 + 0x38) < 0x10) {
      pVoid_21 = (void *)(lVal_20 + 0x20);
    }
    else {
      pVoid_21 = *(void **)(lVal_20 + 0x20);
    }
    uVal_5 = *(uint64_t *)(lVal_20 + 0x30);
    uVal_6 = param_3[2];
    pU64_22 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_22 = (uint64_t *)*param_3;
    }
    uVal_23 = uVal_6;
    if (uVal_5 < uVal_6) {
      uVal_23 = uVal_5;
    }
    iVal_17 = memcmp(pU64_22,pVoid_21,uVal_23);
    bFlag_15 = uVal_5 <= uVal_6;
    if (iVal_17 != 0) {
      bFlag_15 = -1 < iVal_17;
    }
    if (bFlag_15) {
      uVal_16 = 0;
      goto LAB_1801bd285;
    }
  }
  if (param_1[1] == 0x333333333333333) {
    func_0x1800a17e0();
    fnPtr_7 = (func_ptr_t )swi(3);
    pLong_19 = (int64_t *)(*fnPtr_7)();
    return pLong_19;
  }
  pLong_19 = (int64_t *)func_0x180672de0(0x50);
  uVal_11 = *(uint32_t *)param_3;
  uVal_12 = *(uint32_t *)((int64_t)param_3 + 4);
  uVal_13 = *(uint32_t *)(param_3 + 1);
  uVal_14 = *(uint32_t *)((int64_t)param_3 + 0xc);
  uVal_8 = *(uint32_t *)((int64_t)param_3 + 0x14);
  uVal_9 = *(uint32_t *)(param_3 + 3);
  uVal_10 = *(uint32_t *)((int64_t)param_3 + 0x1c);
  *(uint32_t *)(pLong_19 + 6) = *(uint32_t *)(param_3 + 2);
  *(uint32_t *)((int64_t)pLong_19 + 0x34) = uVal_8;
  *(uint32_t *)(pLong_19 + 7) = uVal_9;
  *(uint32_t *)((int64_t)pLong_19 + 0x3c) = uVal_10;
  *(uint32_t *)(pLong_19 + 4) = uVal_11;
  *(uint32_t *)((int64_t)pLong_19 + 0x24) = uVal_12;
  *(uint32_t *)(pLong_19 + 5) = uVal_13;
  *(uint32_t *)((int64_t)pLong_19 + 0x2c) = uVal_14;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(uint8_t *)param_3 = 0;
  fVal_1 = *param_4;
  *(uint8_t *)(pLong_19 + 8) = 7;
  pLong_19[9] = (int64_t)(double)fVal_1;
  *pLong_19 = lVal_3;
  pLong_19[1] = lVal_3;
  pLong_19[2] = lVal_3;
  *(uint16_t *)(pLong_19 + 3) = 0;
  local_50 = lVal_18;
  local_48 = uVal_24;
  lVal_20 = func_0x1800a1550(param_1,&local_50,pLong_19);
  uVal_16 = 1;
LAB_1801bd285:
  *param_2 = lVal_20;
  *(uint8_t *)(param_2 + 1) = uVal_16;
  return param_2;
}

// func_0x1801bd2b0
void func_0x1801bd2b0(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  lVal_1 = *(int64_t *)(param_1 + 8);
  if (lVal_1 != 0) {
    func_0x180084c70(lVal_1 + 0x48,*(uint8_t *)(lVal_1 + 0x40));
    uVal_2 = *(uint64_t *)(lVal_1 + 0x38);
    if (0xf < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + 0x20);
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
    *(uint64_t *)(lVal_1 + 0x30) = 0;
    *(uint64_t *)(lVal_1 + 0x38) = 0xf;
    *(uint8_t *)(lVal_1 + 0x20) = 0;
    if (*(int64_t *)(param_1 + 8) != 0) {
      thunk_FUN_180695dd0(*(int64_t *)(param_1 + 8),0x50);
      return;
    }
  }
  return;
}

// Unwind@1801bd360
void Unwind_1801bd360(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1801bd380
int64_t * func_0x1801bd380(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int iVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  bool bFlag_7;
  void *pVoid_8;
  int64_t *pLong_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  uint uVal_12;
  int64_t *pLong_13;
  int64_t local_70;
  uint local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVal_6 = *param_1;
  local_58 = (int64_t *)func_0x180672de0(0x50);
  local_50 = local_58 + 4;
  func_0x1801bd670(local_50,param_3,param_4);
  *local_58 = lVal_6;
  local_58[1] = lVal_6;
  local_58[2] = lVal_6;
  *(uint16_t *)(local_58 + 3) = 0;
  lVal_6 = *param_1;
  lVal_10 = *(int64_t *)(lVal_6 + 8);
  uVal_12 = 0;
  if (*(char *)(lVal_10 + 0x19) == '\0') {
    pLong_13 = local_50;
    if (0xf < (uint64_t)local_58[7]) {
      pLong_13 = (int64_t *)local_58[4];
    }
    uVal_3 = local_58[6];
    lVal_2 = lVal_10;
    do {
      lVal_10 = lVal_2;
      if (*(uint64_t *)(lVal_10 + 0x38) < 0x10) {
        pVoid_8 = (void *)(lVal_10 + 0x20);
      }
      else {
        pVoid_8 = *(void **)(lVal_10 + 0x20);
      }
      uVal_5 = *(uint64_t *)(lVal_10 + 0x30);
      uVal_11 = uVal_5;
      if (uVal_3 < uVal_5) {
        uVal_11 = uVal_3;
      }
      iVal_4 = memcmp(pVoid_8,pLong_13,uVal_11);
      bFlag_7 = uVal_5 < uVal_3;
      if (iVal_4 != 0) {
        bFlag_7 = iVal_4 < 0;
      }
      if (bFlag_7 == false) {
        lVal_6 = lVal_10;
      }
      lVal_2 = *(int64_t *)(lVal_10 + (uint64_t)bFlag_7 * 0x10);
    } while (*(char *)(lVal_2 + 0x19) == '\0');
    uVal_12 = (uint)(bFlag_7 ^ 1);
    ch_1 = *(char *)(lVal_6 + 0x19);
    pLong_13 = local_58;
  }
  else {
    ch_1 = *(char *)(lVal_6 + 0x19);
    pLong_13 = local_58;
  }
  local_58 = pLong_13;
  if (ch_1 == '\0') {
    if (*(uint64_t *)(lVal_6 + 0x38) < 0x10) {
      pVoid_8 = (void *)(lVal_6 + 0x20);
    }
    else {
      pVoid_8 = *(void **)(lVal_6 + 0x20);
    }
    uVal_3 = *(uint64_t *)(lVal_6 + 0x30);
    uVal_5 = pLong_13[6];
    pLong_9 = local_50;
    if (0xf < (uint64_t)pLong_13[7]) {
      pLong_9 = (int64_t *)pLong_13[4];
    }
    uVal_11 = uVal_5;
    if (uVal_3 < uVal_5) {
      uVal_11 = uVal_3;
    }
    local_60 = param_2;
    iVal_4 = memcmp(pLong_9,pVoid_8,uVal_11);
    pLong_9 = local_60;
    bFlag_7 = uVal_3 <= uVal_5;
    if (iVal_4 != 0) {
      bFlag_7 = -1 < iVal_4;
    }
    param_2 = local_60;
    if (bFlag_7) {
      *local_60 = lVal_6;
      *(uint8_t *)(local_60 + 1) = 0;
      func_0x180084c70(pLong_13 + 9,*(uint8_t *)(pLong_13 + 8));
      uVal_3 = pLong_13[7];
      if (0xf < uVal_3) {
        lVal_6 = *local_50;
        uVal_5 = uVal_3 + 1;
        lVal_10 = lVal_6;
        if (0xfff < uVal_5) {
          lVal_10 = *(int64_t *)(lVal_6 + -8);
          if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_10)) goto LAB_1801bd5c2;
          uVal_5 = uVal_3 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_5);
      }
      pLong_13[6] = 0;
      pLong_13[7] = 0xf;
      *(uint8_t *)(pLong_13 + 4) = 0;
      thunk_FUN_180695dd0(pLong_13,0x50);
      return pLong_9;
    }
  }
  if (param_1[1] != 0x333333333333333) {
    local_70 = lVal_10;
    local_68 = uVal_12;
    lVal_6 = func_0x1800a1550(param_1,&local_70);
    *param_2 = lVal_6;
    *(uint8_t *)(param_2 + 1) = 1;
    return param_2;
  }
  func_0x1800a17e0();
LAB_1801bd5c2:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801bd5d0
void Unwind_1801bd5d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801bd5f0
void Unwind_1801bd5f0(uint64_t param_1,int64_t param_2)
{
  func_0x1801bd2b0(param_2 + 0x28);
  return;
}

// Unwind@1801bd630
void Unwind_1801bd630(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x50);
  return;
}

// func_0x1801bd670
uint8_t (*func_0x1801bd670(uint8_t (*param_1)[16],char **param_2,uint64_t param_3))[16]
{
  char *_Str;
  func_ptr_t fnPtr_1;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  
  _Str = *param_2;
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  sz_2 = strlen(_Str);
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
    func_0x18009ff70(param_1 + 2,param_3);
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_5 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_5;
}

// Unwind@1801bd750
void Unwind_1801bd750(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x20));
  return;
}

// func_0x1801bd780
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bd780(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b54cc;
  uVal_9 = _UNK_1806b54c8;
  uVal_8 = _UNK_1806b54c4;
  uVal_7 = _DAT_1806b54c0;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b54c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b54c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b54c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b54cc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = 0;
  }
  return;
}

// func_0x1801bd7b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bd7b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae4d4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae4d0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae4d8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae4dc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xefc7bf81a1d573c5;
    param_1[1][8] = param_1[1][8] ^ 0xc5;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x1801bd7e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bd7e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6494;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6490;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6498;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b649c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xe7bf0d27d93d3145;
    param_1[1][8] = param_1[1][8] ^ 0x45;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x1801bd840
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bd840(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2da4;
    uVal_2 = param_1[2] ^ _UNK_1806b2da8;
    uVal_3 = param_1[3] ^ _UNK_1806b2dac;
    *param_1 = *param_1 ^ _DAT_1806b2da0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0xd993efbb19cfe32d;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806b6880,0);
  }
  return;
}

// func_0x1801bd900
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bd900(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af254;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af250;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af258;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af25c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x9bd595af851d8be7;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x851d8be7;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x1801bd930
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bd930(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2db4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2db0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2db8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dbc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x39e3c19bbb935373;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xbb935373;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x1801bd960
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bd960(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6894;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6890;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6898;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b689c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x971941d90d7fe737;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xd7fe737;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x1801bd990
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bd990(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2dc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2dc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2dc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dcc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x99;
    param_1[1][1] = param_1[1][1] ^ 0x47;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1801bd9b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bd9b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2dc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2dc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2dc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dcc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xc77f77236bad4799;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x6bad4799;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x23;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1801bd9f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bd9f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2ccc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xc9771b45f9913b87;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xf9913b87;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x45;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1801bda30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bda30(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6164;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6160;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6168;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b616c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xdd;
    param_1[1][1] = param_1[1][1] ^ 0x6b;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1801bda50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bda50(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6164;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6160;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6168;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b616c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x7d0149afab056bdd;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xab056bdd;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xaf;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1801bda90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bda90(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2924;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2920;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2928;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b292c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xef;
    param_1[1][1] = param_1[1][1] ^ 0xb5;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1801bdab0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdab0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2924;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2920;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2928;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b292c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x8707dd23b1c9b5ef;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xb1c9b5ef;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x23;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1801bdaf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdaf0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2dd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2dd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2dd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2ddc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xed;
    param_1[1][1] = param_1[1][1] ^ 0x5b;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1801bdb10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdb10(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2dd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2dd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2dd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2ddc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x7fd3adb181e15bed;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x81e15bed;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xb1;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1801bdb50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdb50(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b68a4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b68a0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b68a8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b68ac;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x53;
    param_1[1][1] = param_1[1][1] ^ 0x93;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1801bdb70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdb70(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b68a4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b68a0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b68a8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b68ac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x8183fda96f799353;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x6f799353;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xa9;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1801bdbb0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdbb0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2dec;
  uVal_9 = _UNK_1806b2de8;
  uVal_8 = _UNK_1806b2de4;
  uVal_7 = _DAT_1806b2de0;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2de4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2de0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2de8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dec;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x9f;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x1801bdbe0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdbe0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b268c;
  uVal_9 = _UNK_1806b2688;
  uVal_8 = _UNK_1806b2684;
  uVal_7 = _DAT_1806b2680;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2684;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2680;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2688;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b268c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x31;
    param_1[2][1] = param_1[2][1] ^ 0x43;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x1801bdc10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdc10(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b68bc;
  uVal_9 = _UNK_1806b68b8;
  uVal_8 = _UNK_1806b68b4;
  uVal_7 = _DAT_1806b68b0;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b68b4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b68b0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b68b8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b68bc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0xa9;
    param_1[2][1] = param_1[2][1] ^ 0xa9;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x1801bdc40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdc40(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae544;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae540;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae548;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae54c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x43d5e9a7;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1801bdc60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdc60(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b68c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b68c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b68c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b68cc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xf6b2b971f8d9361;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x1f8d9361;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x97;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1801bdca0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdca0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2d4c;
  uVal_9 = _UNK_1806b2d48;
  uVal_8 = _UNK_1806b2d44;
  uVal_7 = _DAT_1806b2d40;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d44;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d40;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d48;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d4c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806b68d0,0);
  }
  return;
}

// func_0x1801bdcf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdcf0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b68e4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b68e0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b68e8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b68ec;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xd381b1bf7d99b1a9;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x7d99b1a9;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xbf;
    param_1[1][0xd] = param_1[1][0xd] ^ 0xb1;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x1801bdd30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdd30(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d6c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xd76bd737d54d5575;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1801bdd90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bdd90(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b54c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b54c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b54c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b54cc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x656173452549d30d;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x2549d30d;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x45;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1801bddf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bddf0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2664;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2660;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2668;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b266c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x1b07cd8f7599e56d;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1801bde20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bde20(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aed44;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aed40;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aed48;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aed4c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xcf;
    param_1[1][1] = param_1[1][1] ^ 0x19;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1801bde40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bde40(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae514;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae510;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae518;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae51c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x65f3d5f1;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1801bde60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bde60(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae514;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae510;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae518;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae51c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x1cdc31f65f3d5f1;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x65f3d5f1;
    param_1[1][0xc] = 0;
  }
  return;
}

// Unwind@1801be200
void Unwind_1801be200(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0x30);
  return;
}

// Unwind@1801be230
void Unwind_1801be230(uint64_t param_1,int64_t param_2)
{
  int *pInt_1;
  int64_t *pLong_2;
  
  func_0x18001deb0(param_2 + 0x70);
  pLong_2 = *(int64_t **)(param_2 + 0x88);
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

// Unwind@1801be270
void Unwind_1801be270(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0x30);
  return;
}

// Unwind@1801be2a0
void Unwind_1801be2a0(uint64_t param_1,int64_t param_2)
{
  int *pInt_1;
  int64_t *pLong_2;
  
  func_0x18001deb0(param_2 + 0x70);
  pLong_2 = *(int64_t **)(param_2 + 0x88);
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

// func_0x1801be2e0
int64_t * func_0x1801be2e0(int64_t *param_1,int64_t *param_2,uint64_t *param_3)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  func_ptr_t fnPtr_5;
  uint64_t uVal_6;
  uint uVal_7;
  uint8_t uVal_8;
  int iVal_9;
  int64_t lVal_10;
  int64_t *pLong_11;
  bool bFlag_12;
  void *pVoid_13;
  uint64_t *pU64_14;
  uint uVal_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  uint8_t auStack_98 [40];
  int64_t *local_70;
  int64_t local_68;
  uint local_60;
  uint8_t local_58 [8];
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  lVal_1 = *param_1;
  lVal_17 = *(int64_t *)(lVal_1 + 8);
  uVal_15 = 0;
  lVal_10 = lVal_1;
  if (*(char *)(lVal_17 + 0x19) == '\0') {
    pU64_14 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_14 = (uint64_t *)*param_3;
    }
    uVal_3 = param_3[2];
    lVal_2 = lVal_17;
    local_70 = param_2;
    do {
      lVal_17 = lVal_2;
      if (*(uint64_t *)(lVal_17 + 0x38) < 0x10) {
        pVoid_13 = (void *)(lVal_17 + 0x20);
      }
      else {
        pVoid_13 = *(void **)(lVal_17 + 0x20);
      }
      uVal_4 = *(uint64_t *)(lVal_17 + 0x30);
      uVal_16 = uVal_4;
      if (uVal_3 < uVal_4) {
        uVal_16 = uVal_3;
      }
      iVal_9 = memcmp(pVoid_13,pU64_14,uVal_16);
      bFlag_12 = uVal_4 < uVal_3;
      if (iVal_9 != 0) {
        bFlag_12 = iVal_9 < 0;
      }
      if (bFlag_12 == false) {
        lVal_10 = lVal_17;
      }
      lVal_2 = *(int64_t *)(lVal_17 + (uint64_t)bFlag_12 * 0x10);
    } while (*(char *)(lVal_2 + 0x19) == '\0');
    uVal_15 = (uint)(bFlag_12 ^ 1);
    param_2 = local_70;
    uVal_7 = uVal_15;
    if (*(char *)(lVal_10 + 0x19) == '\0') goto LAB_1801be3b5;
LAB_1801be40e:
    if (param_1[1] == 0x2aaaaaaaaaaaaaa) goto LAB_1801be4a7;
    func_0x1801be4b0(local_58,param_1,lVal_1,param_3);
    uVal_6 = local_50;
    local_50 = 0;
    func_0x1801be690(local_58);
    local_68 = lVal_17;
    local_60 = uVal_15;
    lVal_10 = func_0x1800a1550(param_1,&local_68,uVal_6);
    uVal_8 = 1;
  }
  else {
    uVal_7 = 0;
    if (*(char *)(lVal_1 + 0x19) != '\0') goto LAB_1801be40e;
LAB_1801be3b5:
    uVal_15 = uVal_7;
    if (*(uint64_t *)(lVal_10 + 0x38) < 0x10) {
      pVoid_13 = (void *)(lVal_10 + 0x20);
    }
    else {
      pVoid_13 = *(void **)(lVal_10 + 0x20);
    }
    uVal_3 = *(uint64_t *)(lVal_10 + 0x30);
    uVal_4 = param_3[2];
    pU64_14 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_14 = (uint64_t *)*param_3;
    }
    uVal_16 = uVal_4;
    if (uVal_3 < uVal_4) {
      uVal_16 = uVal_3;
    }
    local_70 = param_2;
    iVal_9 = memcmp(pU64_14,pVoid_13,uVal_16);
    bFlag_12 = uVal_3 <= uVal_4;
    if (iVal_9 != 0) {
      bFlag_12 = -1 < iVal_9;
    }
    param_2 = local_70;
    if (!bFlag_12) goto LAB_1801be40e;
    uVal_8 = 0;
  }
  *param_2 = lVal_10;
  *(uint8_t *)(param_2 + 1) = uVal_8;
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_98)) {
    return param_2;
  }
  func_0x180673080(local_48 ^ (uint64_t)auStack_98);
LAB_1801be4a7:
  func_0x1800a17e0();
  fnPtr_5 = (func_ptr_t )swi(3);
  pLong_11 = (int64_t *)(*fnPtr_5)();
  return pLong_11;
}

// func_0x1801be4b0
void func_0x1801be4b0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t uVal_13;
  uint64_t *pU64_14;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVal_10 = func_0x180672de0(0x60);
  param_1[1] = lVal_10;
  *(uint8_t (*)[16])(lVal_10 + 0x30) = ZEXT816(0);
  *(uint8_t (*)[16])(lVal_10 + 0x20) = ZEXT816(0);
  uVal_1 = param_4[2];
  pU64_14 = param_4;
  if (0xf < (uint64_t)param_4[3]) {
    pU64_14 = (uint64_t *)*param_4;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      *(uint64_t *)(lVal_10 + 0x30) = uVal_1;
      *(uint64_t *)(lVal_10 + 0x38) = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_14 + 4);
      uVal_4 = *(uint32_t *)(pU64_14 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_14 + 0xc);
      *(uint32_t *)(lVal_10 + 0x20) = *(uint32_t *)pU64_14;
      *(uint32_t *)(lVal_10 + 0x24) = uVal_3;
      *(uint32_t *)(lVal_10 + 0x28) = uVal_4;
      *(uint32_t *)(lVal_10 + 0x2c) = uVal_5;
    }
    else {
      uVal_11 = uVal_1 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_11) {
        uVal_13 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        uVal_11 = func_0x180672de0(uVal_13 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_13 + 0x28);
        uVal_11 = lVal_12 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_11 - 8) = lVal_12;
      }
      *(uint64_t *)(lVal_10 + 0x20) = uVal_11;
      *(uint64_t *)(lVal_10 + 0x30) = uVal_1;
      *(uint64_t *)(lVal_10 + 0x38) = uVal_13;
      func_0x1806aa960(uVal_11,pU64_14,uVal_1 + 1);
    }
    uVal_3 = *(uint32_t *)(param_4 + 4);
    uVal_4 = *(uint32_t *)((int64_t)param_4 + 0x24);
    uVal_5 = *(uint32_t *)(param_4 + 5);
    uVal_6 = *(uint32_t *)((int64_t)param_4 + 0x2c);
    uVal_7 = *(uint32_t *)((int64_t)param_4 + 0x34);
    uVal_8 = *(uint32_t *)(param_4 + 7);
    uVal_9 = *(uint32_t *)((int64_t)param_4 + 0x3c);
    *(uint32_t *)(lVal_10 + 0x50) = *(uint32_t *)(param_4 + 6);
    *(uint32_t *)(lVal_10 + 0x54) = uVal_7;
    *(uint32_t *)(lVal_10 + 0x58) = uVal_8;
    *(uint32_t *)(lVal_10 + 0x5c) = uVal_9;
    *(uint32_t *)(lVal_10 + 0x40) = uVal_3;
    *(uint32_t *)(lVal_10 + 0x44) = uVal_4;
    *(uint32_t *)(lVal_10 + 0x48) = uVal_5;
    *(uint32_t *)(lVal_10 + 0x4c) = uVal_6;
    param_4[6] = 0;
    param_4[7] = 0xf;
    *(uint8_t *)(param_4 + 4) = 0;
    *(uint64_t *)param_1[1] = param_3;
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

// Unwind@1801be610
void Unwind_1801be610(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x20) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x60);
  }
  return;
}

// Unwind@1801be650
void Unwind_1801be650(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x20) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x60);
  }
  return;
}

// func_0x1801be690
void func_0x1801be690(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  lVal_1 = *(int64_t *)(param_1 + 8);
  if (lVal_1 != 0) {
    uVal_2 = *(uint64_t *)(lVal_1 + 0x58);
    if (0xf < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + 0x40);
      uVal_4 = uVal_2 + 1;
      lVal_5 = lVal_3;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(lVal_3 + -8);
        if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) goto LAB_1801be768;
        uVal_4 = uVal_2 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    *(uint64_t *)(lVal_1 + 0x50) = 0;
    *(uint64_t *)(lVal_1 + 0x58) = 0xf;
    *(uint8_t *)(lVal_1 + 0x40) = 0;
    uVal_2 = *(uint64_t *)(lVal_1 + 0x38);
    if (0xf < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + 0x20);
      uVal_4 = uVal_2 + 1;
      lVal_5 = lVal_3;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(lVal_3 + -8);
        if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) {
LAB_1801be768:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_4 = uVal_2 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    *(uint64_t *)(lVal_1 + 0x30) = 0;
    *(uint64_t *)(lVal_1 + 0x38) = 0xf;
    *(uint8_t *)(lVal_1 + 0x20) = 0;
    if (*(int64_t *)(param_1 + 8) != 0) {
      thunk_FUN_180695dd0(*(int64_t *)(param_1 + 8),0x60);
      return;
    }
  }
  return;
}

// func_0x1801be770
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801be770(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2c94;
    uVal_2 = param_1[2] ^ _UNK_1806b2c98;
    uVal_3 = param_1[3] ^ _UNK_1806b2c9c;
    *param_1 = *param_1 ^ _DAT_1806b2c90;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b68f0,0);
  }
  return;
}

// func_0x1801be7b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801be7b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5b04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5b00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5b08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b5b0c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xdd;
    param_1[1][1] = param_1[1][1] ^ 0xd1;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1801be7d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801be7d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2914;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2910;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2918;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b291c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x1ff3fb37;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1801be7f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801be7f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af244;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af240;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af248;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af24c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xf553e56763671535;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1801be820
uint32_t * func_0x1801be820(uint32_t *param_1,uint32_t *param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  *param_1 = *param_2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  lVal_2 = func_0x180672de0(0x28);
  *(int64_t *)lVal_2 = lVal_2;
  *(int64_t *)(lVal_2 + 8) = lVal_2;
  *(int64_t *)(param_1 + 2) = lVal_2;
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  *(uint64_t *)(param_1 + 10) = 0;
  *(uint64_t *)(param_1 + 0xc) = 7;
  *(uint64_t *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  pLong_3 = (int64_t *)func_0x180672de0(0x80);
  lVal_1 = *(int64_t *)(param_1 + 6);
  uVal_5 = *(int64_t *)(param_1 + 10) - lVal_1;
  if (uVal_5 != 0) {
    lVal_4 = lVal_1;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
  }
  *(int64_t **)(param_1 + 6) = pLong_3;
  *(int64_t **)(param_1 + 8) = pLong_3 + 0x10;
  *(int64_t **)(param_1 + 10) = pLong_3 + 0x10;
  *pLong_3 = lVal_2;
  pLong_3[1] = lVal_2;
  pLong_3[2] = lVal_2;
  pLong_3[3] = lVal_2;
  pLong_3[4] = lVal_2;
  pLong_3[5] = lVal_2;
  pLong_3[6] = lVal_2;
  pLong_3[7] = lVal_2;
  pLong_3[8] = lVal_2;
  pLong_3[9] = lVal_2;
  pLong_3[10] = lVal_2;
  pLong_3[0xb] = lVal_2;
  pLong_3[0xc] = lVal_2;
  pLong_3[0xd] = lVal_2;
  pLong_3[0xe] = lVal_2;
  pLong_3[0xf] = lVal_2;
  return param_1;
}

// Unwind@1801be940
void Unwind_1801be940(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x30));
  func_0x1801b52e0(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x1801be980
void func_0x1801be980(int64_t param_1,uint64_t param_2)
{
  int64_t **ptr2_Long_1;
  int64_t **ptr2_Long_2;
  int64_t *pLong_3;
  int64_t **ptr2_Long_4;
  int64_t *pLong_5;
  int64_t *pLong_6;
  func_ptr_t fnPtr_7;
  int64_t **ptr2_Long_8;
  byte bFlag_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  int64_t lVal_12;
  int64_t **ptr2_Long_13;
  
  if (0x800000000000000 < param_2) {
    func_0x1806744c0("invalid hash bucket count");
    fnPtr_7 = (func_ptr_t )swi(3);
    (*fnPtr_7)();
    return;
  }
  uVal_10 = param_2 - 1 | 1;
  lVal_11 = 0x3f;
  if (uVal_10 != 0) {
    for (; uVal_10 >> lVal_11 == 0; lVal_11 = lVal_11 + -1) {
    }
  }
  bFlag_9 = -((byte)lVal_11 ^ 0x3f);
  lVal_11 = 1L << (bFlag_9 & 0x3f);
  ptr2_Long_1 = *(int64_t ***)(param_1 + 8);
  func_0x180095b10(param_1 + 0x18,2L << (bFlag_9 & 0x3f),ptr2_Long_1);
  *(int64_t *)(param_1 + 0x30) = lVal_11 + -1;
  *(int64_t *)(param_1 + 0x38) = lVal_11;
  ptr2_Long_8 = (int64_t **)**(uint64_t **)(param_1 + 8);
joined_r0x0001801be9ea:
  do {
    if (ptr2_Long_8 == ptr2_Long_1) {
      return;
    }
    ptr2_Long_2 = (int64_t **)*ptr2_Long_8;
    lVal_11 = *(int64_t *)(param_1 + 0x18);
    lVal_12 = (((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x17) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x16) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x15) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x14) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x13) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x12) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x11) ^
              ((uint64_t)*(byte *)(ptr2_Long_8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
              0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
              0x100000001b3) * 0x100000001b3 & *(uint64_t *)(param_1 + 0x30)) * 0x10;
    if (*(int64_t ***)(lVal_11 + lVal_12) == ptr2_Long_1) {
      *(int64_t ***)(lVal_11 + lVal_12) = ptr2_Long_8;
    }
    else {
      ptr2_Long_13 = *(int64_t ***)(lVal_11 + 8 + lVal_12);
      if (ptr2_Long_8[2] != ptr2_Long_13[2]) {
        do {
          if (*(int64_t ***)(lVal_11 + lVal_12) == ptr2_Long_13) {
            pLong_3 = ptr2_Long_8[1];
            *pLong_3 = (int64_t)ptr2_Long_2;
            ptr2_Long_4 = (int64_t **)ptr2_Long_2[1];
            *ptr2_Long_4 = (int64_t *)ptr2_Long_13;
            pLong_5 = ptr2_Long_13[1];
            *pLong_5 = (int64_t)ptr2_Long_8;
            ptr2_Long_13[1] = (int64_t *)ptr2_Long_4;
            ptr2_Long_2[1] = pLong_3;
            ptr2_Long_8[1] = pLong_5;
            *(int64_t ***)(lVal_11 + lVal_12) = ptr2_Long_8;
            ptr2_Long_8 = ptr2_Long_2;
            goto joined_r0x0001801be9ea;
          }
          ptr2_Long_13 = (int64_t **)ptr2_Long_13[1];
        } while (ptr2_Long_8[2] != ptr2_Long_13[2]);
        pLong_3 = *ptr2_Long_13;
        pLong_5 = ptr2_Long_8[1];
        *pLong_5 = (int64_t)ptr2_Long_2;
        ptr2_Long_13 = (int64_t **)ptr2_Long_2[1];
        *ptr2_Long_13 = pLong_3;
        pLong_6 = (int64_t *)pLong_3[1];
        *pLong_6 = (int64_t)ptr2_Long_8;
        pLong_3[1] = (int64_t)ptr2_Long_13;
        ptr2_Long_2[1] = pLong_5;
        ptr2_Long_8[1] = pLong_6;
        ptr2_Long_8 = ptr2_Long_2;
        goto joined_r0x0001801be9ea;
      }
      ptr2_Long_13 = (int64_t **)*ptr2_Long_13;
      if (ptr2_Long_13 != ptr2_Long_8) {
        pLong_3 = ptr2_Long_8[1];
        *pLong_3 = (int64_t)ptr2_Long_2;
        ptr2_Long_4 = (int64_t **)ptr2_Long_2[1];
        *ptr2_Long_4 = (int64_t *)ptr2_Long_13;
        pLong_5 = ptr2_Long_13[1];
        *pLong_5 = (int64_t)ptr2_Long_8;
        ptr2_Long_13[1] = (int64_t *)ptr2_Long_4;
        ptr2_Long_2[1] = pLong_3;
        ptr2_Long_8[1] = pLong_5;
      }
    }
    *(int64_t ***)(lVal_11 + 8 + lVal_12) = ptr2_Long_8;
    ptr2_Long_8 = ptr2_Long_2;
  } while( true );
}

// func_0x1801beb70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801beb70(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e44;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e40;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e48;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e4c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x5b;
    param_1[1][1] = param_1[1][1] ^ 0x35;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1801beb90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801beb90(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806aed8c;
  uVal_9 = _UNK_1806aed88;
  uVal_8 = _UNK_1806aed84;
  uVal_7 = _DAT_1806aed80;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aed84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aed80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aed88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aed8c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = 0;
  }
  return;
}

// func_0x1801bebf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bebf0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2eb4;
    uVal_2 = param_1[2] ^ _UNK_1806b2eb8;
    uVal_3 = param_1[3] ^ _UNK_1806b2ebc;
    *param_1 = *param_1 ^ _DAT_1806b2eb0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x7393dc74711e7eb;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806b2810,0);
  }
  return;
}

// func_0x1801beca0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801beca0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeea4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeea0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeea8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeeac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x8d8f017d7d7f3d23;
    param_1[1][8] = param_1[1][8] ^ 0x23;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x1801becd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801becd0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b690c;
  uVal_9 = _UNK_1806b6908;
  uVal_8 = _UNK_1806b6904;
  uVal_7 = _DAT_1806b6900;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6904;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6900;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6908;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b690c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x6d5367e7;
    param_1[2][4] = param_1[2][4] ^ 0x21;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x1801bed10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bed10(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b54cc;
  uVal_9 = _UNK_1806b54c8;
  uVal_8 = _UNK_1806b54c4;
  uVal_7 = _DAT_1806b54c0;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b54c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b54c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b54c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b54cc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0xd;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x1801bed40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bed40(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b291c;
  uVal_9 = _UNK_1806b2918;
  uVal_8 = _UNK_1806b2914;
  uVal_7 = _DAT_1806b2910;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2914;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2910;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2918;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b291c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x1ff3fb37;
    param_1[2][4] = param_1[2][4] ^ 0x69;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x1801bed80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bed80(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b4eb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b4eb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b4eb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b4ebc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xc98f5399;
    param_1[1][4] = param_1[1][4] ^ 0x8b;
    param_1[1][5] = param_1[1][5] ^ 0x97;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1801bede0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bede0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6164;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6160;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6168;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b616c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xab056bdd;
    param_1[1][4] = param_1[1][4] ^ 0xaf;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1801bee40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bee40(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e1c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x7b6501a9;
    param_1[1][4] = param_1[1][4] ^ 0xed;
    param_1[1][5] = param_1[1][5] ^ 0x21;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1801bee70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bee70(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aed24;
    uVal_2 = param_1[2] ^ _UNK_1806aed28;
    uVal_3 = param_1[3] ^ _UNK_1806aed2c;
    *param_1 = *param_1 ^ _DAT_1806aed20;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0xf5578f1333032df5;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806b6910,0);
  }
  return;
}

// func_0x1801beec0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801beec0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b692c;
  uVal_9 = _UNK_1806b6928;
  uVal_8 = _UNK_1806b6924;
  uVal_7 = _DAT_1806b6920;
  if (param_1[2][4] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6924;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6920;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6928;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b692c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x85296fdf;
    param_1[2][4] = 0;
  }
  return;
}

// func_0x1801beef0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801beef0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b6934;
    uVal_2 = param_1[2] ^ _UNK_1806b6938;
    uVal_3 = param_1[3] ^ _UNK_1806b693c;
    *param_1 = *param_1 ^ _DAT_1806b6930;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x7fcb4991c961f7a9;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806ae8b0,0);
  }
  return;
}

// func_0x1801bef40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bef40(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b694c;
  uVal_9 = _UNK_1806b6948;
  uVal_8 = _UNK_1806b6944;
  uVal_7 = _DAT_1806b6940;
  if (param_1[2][4] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6944;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6940;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6948;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b694c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0x8b9d9be7;
    param_1[2][4] = 0;
  }
  return;
}

// func_0x1801bef70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bef70(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b690c;
  uVal_9 = _UNK_1806b6908;
  uVal_8 = _UNK_1806b6904;
  uVal_7 = _DAT_1806b6900;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6904;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6900;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6908;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b690c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = 0;
  }
  return;
}

// func_0x1801befa0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801befa0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b695c;
  uVal_9 = _UNK_1806b6958;
  uVal_8 = _UNK_1806b6954;
  uVal_7 = _DAT_1806b6950;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6954;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6950;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6958;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b695c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x55;
    param_1[2][1] = param_1[2][1] ^ 0x39;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x1801befd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801befd0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6964;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6960;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6968;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b696c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xdb3147b56f755dd1;
    param_1[1][8] = param_1[1][8] ^ 0xd1;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x1801bf000
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf000(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6974;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6970;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6978;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b697c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x51916f5bb5d189bd;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xb5d189bd;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x5b;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1801bf040
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf040(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b5b0c;
  uVal_9 = _UNK_1806b5b08;
  uVal_8 = _UNK_1806b5b04;
  uVal_7 = _DAT_1806b5b00;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5b04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5b00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5b08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b5b0c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0xdd;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x1801bf070
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf070(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d74;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d70;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d78;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d7c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x93a3c787;
    param_1[1][4] = param_1[1][4] ^ 0xa5;
    param_1[1][5] = param_1[1][5] ^ 0xcd;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1801bf0d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf0d0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806ae4d4;
    uVal_2 = param_1[2] ^ _UNK_1806ae4d8;
    uVal_3 = param_1[3] ^ _UNK_1806ae4dc;
    *param_1 = *param_1 ^ _DAT_1806ae4d0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806ae220,0);
  }
  return;
}

// func_0x1801bf150
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf150(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cbc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x45a9b135;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1801bf170
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf170(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6494;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6490;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6498;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b649c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xe7bf0d27d93d3145;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xd93d3145;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x1801bf1a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf1a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d8c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x1d;
    param_1[1][1] = param_1[1][1] ^ 0x77;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1801bf1c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf1c0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2d8c;
  uVal_9 = _UNK_1806b2d88;
  uVal_8 = _UNK_1806b2d84;
  uVal_7 = _DAT_1806b2d80;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d8c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = 0;
  }
  return;
}

// func_0x1801bf1f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf1f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2ccc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xf9913b87;
    param_1[1][4] = param_1[1][4] ^ 0x45;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1801bf220
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf220(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2da4;
    uVal_2 = param_1[2] ^ _UNK_1806b2da8;
    uVal_3 = param_1[3] ^ _UNK_1806b2dac;
    *param_1 = *param_1 ^ _DAT_1806b2da0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b6880,0);
  }
  return;
}

// func_0x1801bf260
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf260(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2db4;
    uVal_2 = param_1[2] ^ _UNK_1806b2db8;
    uVal_3 = param_1[3] ^ _UNK_1806b2dbc;
    *param_1 = *param_1 ^ _DAT_1806b2db0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x39e3c19bbb935373;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806b2710,0);
  }
  return;
}

// func_0x1801bf2b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf2b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ca4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ca0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ca8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xe9b5b3b1c77d4573;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xc77d4573;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xb1;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1801bf370
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf370(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2d14;
    uVal_2 = param_1[2] ^ _UNK_1806b2d18;
    uVal_3 = param_1[3] ^ _UNK_1806b2d1c;
    *param_1 = *param_1 ^ _DAT_1806b2d10;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x91219b1ff7f5f1d5;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806b5c40,0);
  }
  return;
}

// func_0x1801bf490
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf490(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d8c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xb4d771d;
    param_1[1][4] = param_1[1][4] ^ 0xbf;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1801bf4f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf4f0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2dac;
  uVal_9 = _UNK_1806b2da8;
  uVal_8 = _UNK_1806b2da4;
  uVal_7 = _DAT_1806b2da0;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2da4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2da0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2da8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dac;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = 0;
  }
  return;
}

// func_0x1801bf520
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf520(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5604;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5600;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5608;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b560c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x45;
    param_1[1][1] = param_1[1][1] ^ 0x89;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1801bf540
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf540(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b291c;
  uVal_9 = _UNK_1806b2918;
  uVal_8 = _UNK_1806b2914;
  uVal_7 = _DAT_1806b2910;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2914;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2910;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2918;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b291c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = 0;
  }
  return;
}

// func_0x1801bf570
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf570(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806af244;
    uVal_2 = param_1[2] ^ _UNK_1806af248;
    uVal_3 = param_1[3] ^ _UNK_1806af24c;
    *param_1 = *param_1 ^ _DAT_1806af240;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0xf553e56763671535;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806b6980,0);
  }
  return;
}

// func_0x1801bf5c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf5c0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b68a4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b68a0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b68a8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b68ac;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x6f799353;
    param_1[1][4] = param_1[1][4] ^ 0xa9;
    param_1[1][5] = param_1[1][5] ^ 0xfd;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1801bf730
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf730(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2df4;
    uVal_2 = param_1[2] ^ _UNK_1806b2df8;
    uVal_3 = param_1[3] ^ _UNK_1806b2dfc;
    *param_1 = *param_1 ^ _DAT_1806b2df0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b5d20,0);
  }
  return;
}

// func_0x1801bf770
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf770(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806b2c94;
    uVal_3 = param_1[2] ^ _UNK_1806b2c98;
    uVal_4 = param_1[3] ^ _UNK_1806b2c9c;
    *param_1 = *param_1 ^ _DAT_1806b2c90;
    param_1[1] = uVal_2;
    param_1[2] = uVal_3;
    param_1[3] = uVal_4;
    uVal_2 = param_1[6];
    auArr_1 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)(uVal_2 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVal_2 >> 0x10),uVal_2)) >> 0x20),
                                                  (char)((ushort)*(uint16_t *)
                                                                  ((int64_t)param_1 + 0x1d) >> 8)),
                                              (char)(uVal_2 >> 8)),
                                     CONCAT11((char)*(uint16_t *)((int64_t)param_1 + 0x1d),
                                              (char)uVal_2))),_DAT_1806ae110);
    auArr_1._8_8_ = auArr_1._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(param_1 + 7) << 0x20;
    auArr_1 = pblendw(auArr_1,*(uint8_t (*)[16])(param_1 + 4),0xf);
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806b6990;
  }
  return;
}

// func_0x1801bf7d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf7d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b4e84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b4e80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b4e88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b4e8c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x47910569a9f11975;
    param_1[1][8] = param_1[1][8] ^ 0x75;
    param_1[1][9] = param_1[1][9] ^ 0x19;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x1801bf800
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801bf800(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2d6c;
  uVal_9 = _UNK_1806b2d68;
  uVal_8 = _UNK_1806b2d64;
  uVal_7 = _DAT_1806b2d60;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d6c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xd54d5575;
    param_1[2][4] = param_1[2][4] ^ 0x37;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x1801bf8a0
uint32_t * func_0x1801bf8a0(uint32_t *param_1,uint32_t *param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  *param_1 = *param_2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  lVal_2 = func_0x180672de0(0x38);
  *(int64_t *)lVal_2 = lVal_2;
  *(int64_t *)(lVal_2 + 8) = lVal_2;
  *(int64_t *)(param_1 + 2) = lVal_2;
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  *(uint64_t *)(param_1 + 10) = 0;
  *(uint64_t *)(param_1 + 0xc) = 7;
  *(uint64_t *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  pLong_3 = (int64_t *)func_0x180672de0(0x80);
  lVal_1 = *(int64_t *)(param_1 + 6);
  uVal_5 = *(int64_t *)(param_1 + 10) - lVal_1;
  if (uVal_5 != 0) {
    lVal_4 = lVal_1;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
  }
  *(int64_t **)(param_1 + 6) = pLong_3;
  *(int64_t **)(param_1 + 8) = pLong_3 + 0x10;
  *(int64_t **)(param_1 + 10) = pLong_3 + 0x10;
  *pLong_3 = lVal_2;
  pLong_3[1] = lVal_2;
  pLong_3[2] = lVal_2;
  pLong_3[3] = lVal_2;
  pLong_3[4] = lVal_2;
  pLong_3[5] = lVal_2;
  pLong_3[6] = lVal_2;
  pLong_3[7] = lVal_2;
  pLong_3[8] = lVal_2;
  pLong_3[9] = lVal_2;
  pLong_3[10] = lVal_2;
  pLong_3[0xb] = lVal_2;
  pLong_3[0xc] = lVal_2;
  pLong_3[0xd] = lVal_2;
  pLong_3[0xe] = lVal_2;
  pLong_3[0xf] = lVal_2;
  return param_1;
}

// Unwind@1801bf9c0
void Unwind_1801bf9c0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x30));
  func_0x1801b9670(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x1801bfa00
int64_t ** func_0x1801bfa00(int64_t param_1,int64_t **param_2,int64_t **param_3)
{
  int64_t **ptr2_Long_1;
  int64_t lVal_2;
  int64_t **ptr2_Long_3;
  int64_t **ptr2_Long_4;
  int64_t *pLong_5;
  int64_t *pLong_6;
  int64_t **ptr2_Long_7;
  int64_t *pLong_8;
  int64_t *pLong_9;
  int64_t **ptr2_Long_10;
  int64_t **ptr2_Long_11;
  int64_t lVal_12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  ptr2_Long_1 = *(int64_t ***)(param_1 + 8);
  lVal_2 = *(int64_t *)(param_1 + 0x18);
  ptr2_Long_3 = (int64_t **)param_2[1];
  lVal_12 = (((uint64_t)*(byte *)((int64_t)param_2 + 0x13) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x12) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x11) ^
            ((uint64_t)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3) * 0x100000001b3 & *(uint64_t *)(param_1 + 0x30)) * 0x10
  ;
  ptr2_Long_4 = *(int64_t ***)(lVal_2 + lVal_12);
  ptr2_Long_7 = *(int64_t ***)(lVal_2 + 8 + lVal_12);
  ptr2_Long_11 = param_2;
  if (ptr2_Long_4 == param_2) {
    do {
      ptr2_Long_10 = (int64_t **)*ptr2_Long_11;
      pLong_5 = ptr2_Long_11[6];
      if (&DAT_0000000f < pLong_5) {
        pLong_6 = ptr2_Long_11[3];
        pLong_9 = (int64_t *)((int64_t)pLong_5 + 1);
        pLong_8 = pLong_6;
        if ((int64_t *)0xfff < pLong_9) {
          pLong_8 = (int64_t *)pLong_6[-1];
          if (0x1f < (uint64_t)((int64_t)pLong_6 + (-8 - (int64_t)pLong_8))) goto LAB_1801bfcc9;
          pLong_9 = pLong_5 + 5;
        }
        thunk_FUN_180695dd0(pLong_8,pLong_9);
      }
      ptr2_Long_11[5] = (int64_t *)0x0;
      ptr2_Long_11[6] = (int64_t *)&DAT_0000000f;
      *(uint8_t *)(ptr2_Long_11 + 3) = 0;
      thunk_FUN_180695dd0(ptr2_Long_11,0x38);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_11 == ptr2_Long_7) goto LAB_1801bfb99;
      ptr2_Long_11 = ptr2_Long_10;
    } while (ptr2_Long_10 != param_3);
    *(int64_t ***)(lVal_2 + lVal_12) = ptr2_Long_10;
  }
  else {
    do {
      ptr2_Long_10 = (int64_t **)*ptr2_Long_11;
      pLong_5 = ptr2_Long_11[6];
      if (&DAT_0000000f < pLong_5) {
        pLong_6 = ptr2_Long_11[3];
        pLong_9 = (int64_t *)((int64_t)pLong_5 + 1);
        pLong_8 = pLong_6;
        if ((int64_t *)0xfff < pLong_9) {
          pLong_8 = (int64_t *)pLong_6[-1];
          if (0x1f < (uint64_t)((int64_t)pLong_6 + (-8 - (int64_t)pLong_8))) {
LAB_1801bfcc9:
            do {
              invalidInstructionException();
            } while( true );
          }
          pLong_9 = pLong_5 + 5;
        }
        thunk_FUN_180695dd0(pLong_8,pLong_9);
      }
      ptr2_Long_11[5] = (int64_t *)0x0;
      ptr2_Long_11[6] = (int64_t *)&DAT_0000000f;
      *(uint8_t *)(ptr2_Long_11 + 3) = 0;
      thunk_FUN_180695dd0(ptr2_Long_11,0x38);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_11 == ptr2_Long_7) goto LAB_1801bfb99;
      ptr2_Long_11 = ptr2_Long_10;
    } while (ptr2_Long_10 != param_3);
  }
LAB_1801bfca9:
  *ptr2_Long_3 = (int64_t *)ptr2_Long_10;
  ptr2_Long_10[1] = (int64_t *)ptr2_Long_3;
  return param_3;
LAB_1801bfb99:
  ptr2_Long_7 = ptr2_Long_3;
  if (ptr2_Long_4 == param_2) {
    *(int64_t ***)(lVal_2 + lVal_12) = ptr2_Long_1;
    ptr2_Long_7 = ptr2_Long_1;
  }
  *(int64_t ***)(lVal_2 + 8 + lVal_12) = ptr2_Long_7;
  while (ptr2_Long_10 != param_3) {
    lVal_12 = (((uint64_t)*(byte *)((int64_t)ptr2_Long_10 + 0x13) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_10 + 0x12) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_10 + 0x11) ^
              ((uint64_t)*(byte *)(ptr2_Long_10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
              0x100000001b3) * 0x100000001b3) * 0x100000001b3 & *(uint64_t *)(param_1 + 0x30)) *
             0x10;
    ptr2_Long_4 = *(int64_t ***)(lVal_2 + 8 + lVal_12);
    ptr2_Long_7 = ptr2_Long_10;
    while( true ) {
      ptr2_Long_10 = (int64_t **)*ptr2_Long_7;
      pLong_5 = ptr2_Long_7[6];
      if (&DAT_0000000f < pLong_5) {
        pLong_6 = ptr2_Long_7[3];
        pLong_9 = (int64_t *)((int64_t)pLong_5 + 1);
        pLong_8 = pLong_6;
        if ((int64_t *)0xfff < pLong_9) {
          pLong_8 = (int64_t *)pLong_6[-1];
          if (0x1f < (uint64_t)((int64_t)pLong_6 + (-8 - (int64_t)pLong_8))) goto LAB_1801bfcc9;
          pLong_9 = pLong_5 + 5;
        }
        thunk_FUN_180695dd0(pLong_8,pLong_9);
      }
      ptr2_Long_7[5] = (int64_t *)0x0;
      ptr2_Long_7[6] = (int64_t *)&DAT_0000000f;
      *(uint8_t *)(ptr2_Long_7 + 3) = 0;
      thunk_FUN_180695dd0(ptr2_Long_7,0x38);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_7 == ptr2_Long_4) break;
      ptr2_Long_7 = ptr2_Long_10;
      if (ptr2_Long_10 == param_3) {
        *(int64_t ***)(lVal_2 + lVal_12) = ptr2_Long_10;
        goto LAB_1801bfca9;
      }
    }
    *(int64_t ***)(lVal_2 + lVal_12) = ptr2_Long_1;
    *(int64_t ***)(lVal_2 + 8 + lVal_12) = ptr2_Long_1;
  }
  goto LAB_1801bfca9;
}

// func_0x1801bfcd0
/* WARNING: Removing unreachable block (ram,0x0001801bff69) */
/* WARNING: Removing unreachable block (ram,0x0001801bff73) */
/* WARNING: Removing unreachable block (ram,0x0001801bff84) */
/* WARNING: Removing unreachable block (ram,0x0001801bff95) */
/* WARNING: Removing unreachable block (ram,0x0001801bff9f) */
/* WARNING: Removing unreachable block (ram,0x0001801bffa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x0001801bff69) */
/* WARNING: Removing unreachable block (ram,0x0001801bff73) */
/* WARNING: Removing unreachable block (ram,0x0001801bff84) */
/* WARNING: Removing unreachable block (ram,0x0001801bff95) */
/* WARNING: Removing unreachable block (ram,0x0001801bff9f) */
/* WARNING: Removing unreachable block (ram,0x0001801bffa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t * func_0x1801bfcd0(float *param_1,int64_t *param_2,int *param_3)
{
  int iVal_1;
  int iVal_2;
  int iVal_3;
  int iVal_4;
  int iVal_5;
  int iVal_6;
  int iVal_7;
  uint64_t *pU64_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t *pU64_12;
  int64_t lVal_13;
  uint64_t *pU64_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  float fVal_17;
  uint8_t auArr_18 [16];
  float fVal_19;
  
  uVal_15 = ((uint64_t)*(byte *)((int64_t)param_3 + 3) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 2) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 1) ^
           ((uint64_t)*(byte *)param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3;
  lVal_13 = (*(uint64_t *)(param_1 + 0xc) & uVal_15) * 0x10;
  pU64_8 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_13);
  pU64_14 = *(uint64_t **)(param_1 + 2);
  if (pU64_8 != *(uint64_t **)(param_1 + 2)) {
    if (*param_3 != *(int *)(pU64_8 + 2)) {
      do {
        pU64_14 = pU64_8;
        if (pU64_8 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_13)) goto LAB_1801bfd7d;
        pU64_8 = (uint64_t *)pU64_8[1];
      } while (*param_3 != *(int *)(pU64_8 + 2));
    }
    *param_2 = (int64_t)pU64_8;
    *(uint8_t *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1801bfd7d:
  if (*(int64_t *)(param_1 + 4) == 0x492492492492492) {
    func_0x1806744c0("unordered_map/set too long");
    do {
      invalidInstructionException();
    } while( true );
  }
  pU64_8 = (uint64_t *)func_0x180672de0(0x38);
  *(int *)(pU64_8 + 2) = *param_3;
  iVal_1 = param_3[3];
  iVal_2 = param_3[4];
  iVal_3 = param_3[5];
  iVal_4 = param_3[6];
  iVal_5 = param_3[7];
  iVal_6 = param_3[8];
  iVal_7 = param_3[9];
  *(int *)(pU64_8 + 3) = param_3[2];
  *(int *)((int64_t)pU64_8 + 0x1c) = iVal_1;
  *(int *)(pU64_8 + 4) = iVal_2;
  *(int *)((int64_t)pU64_8 + 0x24) = iVal_3;
  *(int *)(pU64_8 + 5) = iVal_4;
  *(int *)((int64_t)pU64_8 + 0x2c) = iVal_5;
  *(int *)(pU64_8 + 6) = iVal_6;
  *(int *)((int64_t)pU64_8 + 0x34) = iVal_7;
  *(uint64_t *)(param_3 + 6) = 0;
  *(uint64_t *)(param_3 + 8) = 0xf;
  *(byte *)(param_3 + 2) = 0;
  uVal_9 = *(int64_t *)(param_1 + 4) + 1;
  if ((int64_t)uVal_9 < 0) {
    fVal_17 = (float)((uint64_t)((uint)uVal_9 & 1) | uVal_9 >> 1);
    auArr_18 = ZEXT416((uint)(fVal_17 + fVal_17));
    fVal_17 = *param_1;
    uVal_9 = *(uint64_t *)(param_1 + 0xe);
    if ((int64_t)uVal_9 < 0) goto LAB_1801bfdf5;
LAB_1801bfe42:
    if (fVal_17 < auArr_18._0_4_ / (float)uVal_9) {
LAB_1801bfe57:
      auArr_18._0_4_ = auArr_18._0_4_ / fVal_17;
      auArr_18 = roundss(auArr_18,auArr_18,10);
      uVal_10 = (uint64_t)auArr_18._0_4_;
      uVal_10 = (int64_t)(auArr_18._0_4_ - _DAT_1806ae420) & (int64_t)uVal_10 >> 0x3f | uVal_10;
      uVal_11 = 8;
      if (8 < uVal_10) {
        uVal_11 = uVal_10;
      }
      uVal_10 = uVal_9;
      if (uVal_9 < uVal_11) {
        uVal_10 = uVal_9 * 8;
        if (uVal_10 < uVal_11 || uVal_10 - uVal_11 == 0) {
          uVal_10 = uVal_11;
        }
        if (0x1ff < uVal_9) {
          uVal_10 = uVal_11;
        }
      }
      func_0x1801c00b0(param_1,uVal_10);
      lVal_13 = (*(uint64_t *)(param_1 + 0xc) & uVal_15) * 0x10;
      pU64_12 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_13);
      pU64_14 = *(uint64_t **)(param_1 + 2);
      if (pU64_12 != *(uint64_t **)(param_1 + 2)) {
        if (*(int *)(pU64_8 + 2) != *(int *)(pU64_12 + 2)) {
          do {
            pU64_14 = pU64_12;
            if (pU64_12 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_13))
            goto LAB_1801bff06;
            pU64_12 = (uint64_t *)pU64_12[1];
          } while (*(int *)(pU64_8 + 2) != *(int *)(pU64_12 + 2));
        }
        pU64_14 = (uint64_t *)*pU64_12;
      }
    }
  }
  else {
    auArr_18 = ZEXT416((uint)(float)uVal_9);
    fVal_17 = *param_1;
    uVal_9 = *(uint64_t *)(param_1 + 0xe);
    if (-1 < (int64_t)uVal_9) goto LAB_1801bfe42;
LAB_1801bfdf5:
    fVal_19 = (float)((uint64_t)((uint)uVal_9 & 1) | uVal_9 >> 1);
    if (fVal_17 < auArr_18._0_4_ / (fVal_19 + fVal_19)) goto LAB_1801bfe57;
  }
LAB_1801bff06:
  pU64_12 = (uint64_t *)pU64_14[1];
  *(int64_t *)(param_1 + 4) = *(int64_t *)(param_1 + 4) + 1;
  *pU64_8 = pU64_14;
  pU64_8[1] = pU64_12;
  *pU64_12 = pU64_8;
  pU64_14[1] = pU64_8;
  lVal_13 = *(int64_t *)(param_1 + 6);
  lVal_16 = (uVal_15 & *(uint64_t *)(param_1 + 0xc)) * 0x10;
  if (*(uint64_t **)(lVal_13 + lVal_16) == *(uint64_t **)(param_1 + 2)) {
    *(uint64_t **)(lVal_13 + lVal_16) = pU64_8;
  }
  else {
    if (*(uint64_t **)(lVal_13 + lVal_16) == pU64_14) {
      *(uint64_t **)(lVal_13 + lVal_16) = pU64_8;
      goto LAB_1801bff59;
    }
    if (*(uint64_t **)(lVal_13 + 8 + lVal_16) != pU64_12) goto LAB_1801bff59;
  }
  *(uint64_t **)(lVal_13 + 8 + lVal_16) = pU64_8;
LAB_1801bff59:
  *param_2 = (int64_t)pU64_8;
  *(uint8_t *)(param_2 + 1) = 1;
  return param_2;
}

// Unwind@1801bfff0
void Unwind_1801bfff0(uint64_t param_1,int64_t param_2)
{
  func_0x1801c0020(param_2 + 0x28);
  return;
}

// func_0x1801c0020
void func_0x1801c0020(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  lVal_1 = *(int64_t *)(param_1 + 8);
  if (lVal_1 != 0) {
    uVal_2 = *(uint64_t *)(lVal_1 + 0x30);
    if (0xf < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + 0x18);
      uVal_4 = uVal_2 + 1;
      if (0xfff < uVal_4) {
        if (0x1f < (uint64_t)((lVal_3 + -8) - *(int64_t *)(lVal_3 + -8))) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_4 = uVal_2 + 0x28;
        lVal_3 = *(int64_t *)(lVal_3 + -8);
      }
      thunk_FUN_180695dd0(lVal_3,uVal_4);
    }
    *(uint64_t *)(lVal_1 + 0x28) = 0;
    *(uint64_t *)(lVal_1 + 0x30) = 0xf;
    *(uint8_t *)(lVal_1 + 0x18) = 0;
    if (*(int64_t *)(param_1 + 8) != 0) {
      thunk_FUN_180695dd0(*(int64_t *)(param_1 + 8),0x38);
      return;
    }
  }
  return;
}

// func_0x1801c00b0
void func_0x1801c00b0(int64_t param_1,uint64_t param_2)
{
  int64_t **ptr2_Long_1;
  int64_t **ptr2_Long_2;
  int64_t *pLong_3;
  int64_t **ptr2_Long_4;
  int64_t *pLong_5;
  int64_t *pLong_6;
  func_ptr_t fnPtr_7;
  int64_t **ptr2_Long_8;
  byte bFlag_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  int64_t lVal_12;
  int64_t **ptr2_Long_13;
  
  if (0x800000000000000 < param_2) {
    func_0x1806744c0("invalid hash bucket count");
    fnPtr_7 = (func_ptr_t )swi(3);
    (*fnPtr_7)();
    return;
  }
  uVal_10 = param_2 - 1 | 1;
  lVal_11 = 0x3f;
  if (uVal_10 != 0) {
    for (; uVal_10 >> lVal_11 == 0; lVal_11 = lVal_11 + -1) {
    }
  }
  bFlag_9 = -((byte)lVal_11 ^ 0x3f);
  lVal_11 = 1L << (bFlag_9 & 0x3f);
  ptr2_Long_1 = *(int64_t ***)(param_1 + 8);
  func_0x180095b10(param_1 + 0x18,2L << (bFlag_9 & 0x3f),ptr2_Long_1);
  *(int64_t *)(param_1 + 0x30) = lVal_11 + -1;
  *(int64_t *)(param_1 + 0x38) = lVal_11;
  ptr2_Long_8 = (int64_t **)**(uint64_t **)(param_1 + 8);
joined_r0x0001801c011b:
  do {
    if (ptr2_Long_8 == ptr2_Long_1) {
      return;
    }
    ptr2_Long_2 = (int64_t **)*ptr2_Long_8;
    lVal_11 = *(int64_t *)(param_1 + 0x18);
    lVal_12 = (((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x13) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x12) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x11) ^
              ((uint64_t)*(byte *)(ptr2_Long_8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
              0x100000001b3) * 0x100000001b3) * 0x100000001b3 & *(uint64_t *)(param_1 + 0x30)) *
             0x10;
    if (*(int64_t ***)(lVal_11 + lVal_12) == ptr2_Long_1) {
      *(int64_t ***)(lVal_11 + lVal_12) = ptr2_Long_8;
    }
    else {
      ptr2_Long_13 = *(int64_t ***)(lVal_11 + 8 + lVal_12);
      if (*(int *)(ptr2_Long_8 + 2) != *(int *)(ptr2_Long_13 + 2)) {
        do {
          if (*(int64_t ***)(lVal_11 + lVal_12) == ptr2_Long_13) {
            pLong_3 = ptr2_Long_8[1];
            *pLong_3 = (int64_t)ptr2_Long_2;
            ptr2_Long_4 = (int64_t **)ptr2_Long_2[1];
            *ptr2_Long_4 = (int64_t *)ptr2_Long_13;
            pLong_5 = ptr2_Long_13[1];
            *pLong_5 = (int64_t)ptr2_Long_8;
            ptr2_Long_13[1] = (int64_t *)ptr2_Long_4;
            ptr2_Long_2[1] = pLong_3;
            ptr2_Long_8[1] = pLong_5;
            *(int64_t ***)(lVal_11 + lVal_12) = ptr2_Long_8;
            ptr2_Long_8 = ptr2_Long_2;
            goto joined_r0x0001801c011b;
          }
          ptr2_Long_13 = (int64_t **)ptr2_Long_13[1];
        } while (*(int *)(ptr2_Long_8 + 2) != *(int *)(ptr2_Long_13 + 2));
        pLong_3 = *ptr2_Long_13;
        pLong_5 = ptr2_Long_8[1];
        *pLong_5 = (int64_t)ptr2_Long_2;
        ptr2_Long_13 = (int64_t **)ptr2_Long_2[1];
        *ptr2_Long_13 = pLong_3;
        pLong_6 = (int64_t *)pLong_3[1];
        *pLong_6 = (int64_t)ptr2_Long_8;
        pLong_3[1] = (int64_t)ptr2_Long_13;
        ptr2_Long_2[1] = pLong_5;
        ptr2_Long_8[1] = pLong_6;
        ptr2_Long_8 = ptr2_Long_2;
        goto joined_r0x0001801c011b;
      }
      ptr2_Long_13 = (int64_t **)*ptr2_Long_13;
      if (ptr2_Long_13 != ptr2_Long_8) {
        pLong_3 = ptr2_Long_8[1];
        *pLong_3 = (int64_t)ptr2_Long_2;
        ptr2_Long_4 = (int64_t **)ptr2_Long_2[1];
        *ptr2_Long_4 = (int64_t *)ptr2_Long_13;
        pLong_5 = ptr2_Long_13[1];
        *pLong_5 = (int64_t)ptr2_Long_8;
        ptr2_Long_13[1] = (int64_t *)ptr2_Long_4;
        ptr2_Long_2[1] = pLong_3;
        ptr2_Long_8[1] = pLong_5;
      }
    }
    *(int64_t ***)(lVal_11 + 8 + lVal_12) = ptr2_Long_8;
    ptr2_Long_8 = ptr2_Long_2;
  } while( true );
}

// func_0x1801c0260
int64_t * func_0x1801c0260(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int iVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  bool bFlag_7;
  void *pVoid_8;
  int64_t *pLong_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  uint uVal_12;
  int64_t *pLong_13;
  int64_t local_70;
  uint local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVal_6 = *param_1;
  local_58 = (int64_t *)func_0x180672de0(0x50);
  local_50 = local_58 + 4;
  func_0x1801c0550(local_50,param_3,param_4);
  *local_58 = lVal_6;
  local_58[1] = lVal_6;
  local_58[2] = lVal_6;
  *(uint16_t *)(local_58 + 3) = 0;
  lVal_6 = *param_1;
  lVal_10 = *(int64_t *)(lVal_6 + 8);
  uVal_12 = 0;
  if (*(char *)(lVal_10 + 0x19) == '\0') {
    pLong_13 = local_50;
    if (0xf < (uint64_t)local_58[7]) {
      pLong_13 = (int64_t *)local_58[4];
    }
    uVal_3 = local_58[6];
    lVal_2 = lVal_10;
    do {
      lVal_10 = lVal_2;
      if (*(uint64_t *)(lVal_10 + 0x38) < 0x10) {
        pVoid_8 = (void *)(lVal_10 + 0x20);
      }
      else {
        pVoid_8 = *(void **)(lVal_10 + 0x20);
      }
      uVal_5 = *(uint64_t *)(lVal_10 + 0x30);
      uVal_11 = uVal_5;
      if (uVal_3 < uVal_5) {
        uVal_11 = uVal_3;
      }
      iVal_4 = memcmp(pVoid_8,pLong_13,uVal_11);
      bFlag_7 = uVal_5 < uVal_3;
      if (iVal_4 != 0) {
        bFlag_7 = iVal_4 < 0;
      }
      if (bFlag_7 == false) {
        lVal_6 = lVal_10;
      }
      lVal_2 = *(int64_t *)(lVal_10 + (uint64_t)bFlag_7 * 0x10);
    } while (*(char *)(lVal_2 + 0x19) == '\0');
    uVal_12 = (uint)(bFlag_7 ^ 1);
    ch_1 = *(char *)(lVal_6 + 0x19);
    pLong_13 = local_58;
  }
  else {
    ch_1 = *(char *)(lVal_6 + 0x19);
    pLong_13 = local_58;
  }
  local_58 = pLong_13;
  if (ch_1 == '\0') {
    if (*(uint64_t *)(lVal_6 + 0x38) < 0x10) {
      pVoid_8 = (void *)(lVal_6 + 0x20);
    }
    else {
      pVoid_8 = *(void **)(lVal_6 + 0x20);
    }
    uVal_3 = *(uint64_t *)(lVal_6 + 0x30);
    uVal_5 = pLong_13[6];
    pLong_9 = local_50;
    if (0xf < (uint64_t)pLong_13[7]) {
      pLong_9 = (int64_t *)pLong_13[4];
    }
    uVal_11 = uVal_5;
    if (uVal_3 < uVal_5) {
      uVal_11 = uVal_3;
    }
    local_60 = param_2;
    iVal_4 = memcmp(pLong_9,pVoid_8,uVal_11);
    pLong_9 = local_60;
    bFlag_7 = uVal_3 <= uVal_5;
    if (iVal_4 != 0) {
      bFlag_7 = -1 < iVal_4;
    }
    param_2 = local_60;
    if (bFlag_7) {
      *local_60 = lVal_6;
      *(uint8_t *)(local_60 + 1) = 0;
      func_0x180084c70(pLong_13 + 9,*(uint8_t *)(pLong_13 + 8));
      uVal_3 = pLong_13[7];
      if (0xf < uVal_3) {
        lVal_6 = *local_50;
        uVal_5 = uVal_3 + 1;
        lVal_10 = lVal_6;
        if (0xfff < uVal_5) {
          lVal_10 = *(int64_t *)(lVal_6 + -8);
          if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_10)) goto LAB_1801c04a2;
          uVal_5 = uVal_3 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_5);
      }
      pLong_13[6] = 0;
      pLong_13[7] = 0xf;
      *(uint8_t *)(pLong_13 + 4) = 0;
      thunk_FUN_180695dd0(pLong_13,0x50);
      return pLong_9;
    }
  }
  if (param_1[1] != 0x333333333333333) {
    local_70 = lVal_10;
    local_68 = uVal_12;
    lVal_6 = func_0x1800a1550(param_1,&local_70);
    *param_2 = lVal_6;
    *(uint8_t *)(param_2 + 1) = 1;
    return param_2;
  }
  func_0x1800a17e0();
LAB_1801c04a2:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801c04b0
void Unwind_1801c04b0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801c04d0
void Unwind_1801c04d0(uint64_t param_1,int64_t param_2)
{
  func_0x1801bd2b0(param_2 + 0x28);
  return;
}

// Unwind@1801c0510
void Unwind_1801c0510(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x50);
  return;
}

// func_0x1801c0550
uint8_t (*func_0x1801c0550(uint8_t (*param_1)[16],char **param_2,uint64_t param_3))[16]
{
  char *_Str;
  func_ptr_t fnPtr_1;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint8_t (*pArr16_6)[16];
  uint64_t uVal_7;
  
  _Str = *param_2;
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  sz_2 = strlen(_Str);
  if (-1 < (int64_t)sz_2) {
    uVal_7 = 0xf;
    pArr16_6 = param_1;
    if (0xf < sz_2) {
      uVal_3 = sz_2 | 0xf;
      uVal_7 = 0x16;
      if (0x16 < uVal_3) {
        uVal_7 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        pArr16_6 = (uint8_t (*)[16])func_0x180672de0(uVal_7 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_7 + 0x28);
        pArr16_6 = (uint8_t (*)[16])(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_6[-1] + 8) = lVal_4;
      }
      *(uint8_t (**)[16])*param_1 = pArr16_6;
    }
    *(size_t *)param_1[1] = sz_2;
    *(uint64_t *)(param_1[1] + 8) = uVal_7;
    func_0x1806aa960(pArr16_6,_Str,sz_2);
    (*pArr16_6)[sz_2] = 0;
    *(uint64_t *)(param_1[2] + 8) = 0;
    param_1[2][0] = 3;
    uVal_5 = func_0x1801c0670(param_3);
    *(uint64_t *)(param_1[2] + 8) = uVal_5;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_6 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_6;
}

// Unwind@1801c0640
void Unwind_1801c0640(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x20));
  return;
}

// func_0x1801c0670
uint8_t (*func_0x1801c0670(char **param_1))[16]
{
  char *_Str;
  func_ptr_t fnPtr_1;
  uint8_t (*pArr16_2)[16];
  size_t sz_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t (*pArr16_6)[16];
  uint64_t uVal_7;
  
  pArr16_2 = (uint8_t (*)[16])func_0x180672de0(0x20);
  _Str = *param_1;
  *pArr16_2 = ZEXT816(0);
  pArr16_2[1] = ZEXT816(0);
  sz_3 = strlen(_Str);
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
    func_0x1806aa960(pArr16_6,_Str,sz_3);
    (*pArr16_6)[sz_3] = 0;
    return pArr16_2;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_2 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_2;
}

// Unwind@1801c0750
void Unwind_1801c0750(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x28),0x20);
  return;
}

// func_0x1801c0790
int64_t * func_0x1801c0790(int64_t *param_1,int64_t *param_2,uint64_t *param_3,uint64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  func_ptr_t fnPtr_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  bool bFlag_14;
  uint64_t uVal_15;
  uint8_t uVal_16;
  int iVal_17;
  int64_t lVal_18;
  int64_t lVal_19;
  int64_t *pLong_20;
  void *pVoid_21;
  uint64_t *pU64_22;
  int64_t *pLong_23;
  uint64_t uVal_24;
  uint64_t uVal_25;
  int64_t local_80;
  uint local_78;
  int64_t *local_70;
  int64_t *local_68;
  uint64_t local_60;
  int64_t *local_58;
  uint local_4c;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVal_2 = *param_1;
  lVal_18 = *(int64_t *)(lVal_2 + 8);
  lVal_19 = lVal_2;
  if (*(char *)(lVal_18 + 0x19) == '\0') {
    pU64_22 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_22 = (uint64_t *)*param_3;
    }
    uVal_4 = param_3[2];
    lVal_3 = lVal_18;
    local_68 = param_1;
    local_60 = param_4;
    local_58 = param_2;
    do {
      lVal_18 = lVal_3;
      if (*(uint64_t *)(lVal_18 + 0x38) < 0x10) {
        pVoid_21 = (void *)(lVal_18 + 0x20);
      }
      else {
        pVoid_21 = *(void **)(lVal_18 + 0x20);
      }
      uVal_5 = *(uint64_t *)(lVal_18 + 0x30);
      uVal_24 = uVal_5;
      if (uVal_4 < uVal_5) {
        uVal_24 = uVal_4;
      }
      iVal_17 = memcmp(pVoid_21,pU64_22,uVal_24);
      bFlag_14 = uVal_5 < uVal_4;
      if (iVal_17 != 0) {
        bFlag_14 = iVal_17 < 0;
      }
      if (bFlag_14 == false) {
        lVal_19 = lVal_18;
      }
      lVal_3 = *(int64_t *)(lVal_18 + (uint64_t)bFlag_14 * 0x10);
    } while (*(char *)(lVal_3 + 0x19) == '\0');
    local_4c = (uint)(bFlag_14 ^ 1);
    ch_1 = *(char *)(lVal_19 + 0x19);
    pLong_23 = local_68;
    pLong_20 = local_68;
    uVal_25 = local_60;
    uVal_15 = local_60;
    param_2 = local_58;
  }
  else {
    local_4c = 0;
    ch_1 = *(char *)(lVal_2 + 0x19);
    pLong_23 = param_1;
    pLong_20 = local_68;
    uVal_25 = param_4;
    uVal_15 = local_60;
  }
  local_60 = uVal_25;
  local_68 = pLong_23;
  pLong_23 = local_68;
  uVal_25 = local_60;
  if (ch_1 == '\0') {
    if (*(uint64_t *)(lVal_19 + 0x38) < 0x10) {
      pVoid_21 = (void *)(lVal_19 + 0x20);
    }
    else {
      pVoid_21 = *(void **)(lVal_19 + 0x20);
    }
    uVal_4 = *(uint64_t *)(lVal_19 + 0x30);
    uVal_5 = param_3[2];
    pU64_22 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_22 = (uint64_t *)*param_3;
    }
    uVal_24 = uVal_5;
    if (uVal_4 < uVal_5) {
      uVal_24 = uVal_4;
    }
    iVal_17 = memcmp(pU64_22,pVoid_21,uVal_24);
    bFlag_14 = uVal_4 <= uVal_5;
    if (iVal_17 != 0) {
      bFlag_14 = -1 < iVal_17;
    }
    pLong_23 = local_68;
    uVal_25 = local_60;
    pLong_20 = local_68;
    uVal_15 = local_60;
    if (bFlag_14) {
      uVal_16 = 0;
      goto LAB_1801c0973;
    }
  }
  local_60 = uVal_15;
  local_68 = pLong_20;
  if (pLong_23[1] == 0x333333333333333) {
    func_0x1800a17e0();
    fnPtr_6 = (func_ptr_t )swi(3);
    pLong_20 = (int64_t *)(*fnPtr_6)();
    return pLong_20;
  }
  local_58 = (int64_t *)func_0x180672de0(0x50);
  local_70 = local_58 + 4;
  uVal_7 = *(uint32_t *)param_3;
  uVal_8 = *(uint32_t *)((int64_t)param_3 + 4);
  uVal_9 = *(uint32_t *)(param_3 + 1);
  uVal_10 = *(uint32_t *)((int64_t)param_3 + 0xc);
  uVal_11 = *(uint32_t *)((int64_t)param_3 + 0x14);
  uVal_12 = *(uint32_t *)(param_3 + 3);
  uVal_13 = *(uint32_t *)((int64_t)param_3 + 0x1c);
  *(uint32_t *)(local_58 + 6) = *(uint32_t *)(param_3 + 2);
  *(uint32_t *)((int64_t)local_58 + 0x34) = uVal_11;
  *(uint32_t *)(local_58 + 7) = uVal_12;
  *(uint32_t *)((int64_t)local_58 + 0x3c) = uVal_13;
  *(uint32_t *)(local_58 + 4) = uVal_7;
  *(uint32_t *)((int64_t)local_58 + 0x24) = uVal_8;
  *(uint32_t *)(local_58 + 5) = uVal_9;
  *(uint32_t *)((int64_t)local_58 + 0x2c) = uVal_10;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(uint8_t *)param_3 = 0;
  func_0x18009ff70(local_58 + 8,uVal_25);
  *local_58 = lVal_2;
  local_58[1] = lVal_2;
  local_58[2] = lVal_2;
  *(uint16_t *)(local_58 + 3) = 0;
  local_78 = local_4c;
  local_80 = lVal_18;
  lVal_19 = func_0x1800a1550(pLong_23,&local_80);
  uVal_16 = 1;
LAB_1801c0973:
  *param_2 = lVal_19;
  *(uint8_t *)(param_2 + 1) = uVal_16;
  return param_2;
}

// Unwind@1801c09a0
void Unwind_1801c09a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x38));
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x50);
  return;
}

// func_0x1801c09f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c09f0(uint8_t (*param_1)[16])
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
  if (param_1[2][2] == '\x01') {
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
    param_1[2][1] = param_1[2][1] ^ 199;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x1801c0ad0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0ad0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6164;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6160;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6168;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b616c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x7d0149afab056bdd;
    param_1[1][8] = param_1[1][8] ^ 0xdd;
    param_1[1][9] = param_1[1][9] ^ 0x6b;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x1801c0b00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0b00(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2c94;
    uVal_2 = param_1[2] ^ _UNK_1806b2c98;
    uVal_3 = param_1[3] ^ _UNK_1806b2c9c;
    *param_1 = *param_1 ^ _DAT_1806b2c90;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806b69a0,0);
  }
  return;
}

// func_0x1801c0b50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0b50(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d6c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xd76bd737d54d5575;
    param_1[1][8] = param_1[1][8] ^ 0x75;
    param_1[1][9] = param_1[1][9] ^ 0x55;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x1801c0b80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0b80(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2ca4;
    uVal_2 = param_1[2] ^ _UNK_1806b2ca8;
    uVal_3 = param_1[3] ^ _UNK_1806b2cac;
    *param_1 = *param_1 ^ _DAT_1806b2ca0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b69b0,0);
  }
  return;
}

// func_0x1801c0c40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0c40(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2914;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2910;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2918;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b291c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x1ff3fb37;
    param_1[1][4] = param_1[1][4] ^ 0x69;
    param_1[1][5] = param_1[1][5] ^ 0x9b;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1801c0c70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0c70(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2d64;
    uVal_2 = param_1[2] ^ _UNK_1806b2d68;
    uVal_3 = param_1[3] ^ _UNK_1806b2d6c;
    *param_1 = *param_1 ^ _DAT_1806b2d60;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0xd76bd737d54d5575;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806b69c0,0);
  }
  return;
}

// func_0x1801c0cc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0cc0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae094;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae090;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae098;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae09c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x2545d7f1;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1801c0ce0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0ce0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b69d4;
    uVal_2 = param_1[2] ^ _UNK_1806b69d8;
    uVal_3 = param_1[3] ^ _UNK_1806b69dc;
    *param_1 = *param_1 ^ _DAT_1806b69d0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b69e0,0);
  }
  return;
}

// func_0x1801c0d20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0d20(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d6c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xd76bd737d54d5575;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xd54d5575;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x1801c0d50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0d50(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2da4;
    uVal_2 = param_1[2] ^ _UNK_1806b2da8;
    uVal_3 = param_1[3] ^ _UNK_1806b2dac;
    *param_1 = *param_1 ^ _DAT_1806b2da0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806ae240,0);
  }
  return;
}

// func_0x1801c0da0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0da0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2f14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2f10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2f18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2f1c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x1325072d;
    param_1[1][4] = param_1[1][4] ^ 0x85;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1801c0dd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0dd0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b65b4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b65b0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b65b8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b65bc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xb555f99b;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1801c0df0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0df0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2c9c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xb5181c509f9d9cf;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1801c0e20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0e20(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b4e8c;
  uVal_9 = _UNK_1806b4e88;
  uVal_8 = _UNK_1806b4e84;
  uVal_7 = _DAT_1806b4e80;
  if (param_1[2][4] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b4e84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b4e80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b4e88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b4e8c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xa9f11975;
    param_1[2][4] = 0;
  }
  return;
}

// func_0x1801c0e50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0e50(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af244;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af240;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af248;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af24c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x63671535;
    param_1[1][4] = param_1[1][4] ^ 0x67;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1801c0f60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0f60(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6a04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6a00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6a08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b6a0c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x59bd715;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1801c0f80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0f80(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b54c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b54c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b54c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b54cc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x2549d30d;
    param_1[1][4] = param_1[1][4] ^ 0x45;
    param_1[1][5] = param_1[1][5] ^ 0x73;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1801c0fb0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0fb0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aec04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aec00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aec08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aec0c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x695fdf51e51fa977;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xe51fa977;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x51;
    param_1[1][0xd] = param_1[1][0xd] ^ 0xdf;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x1801c0ff0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c0ff0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aec14;
    uVal_2 = param_1[2] ^ _UNK_1806aec18;
    uVal_3 = param_1[3] ^ _UNK_1806aec1c;
    *param_1 = *param_1 ^ _DAT_1806aec10;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b6a10,0);
  }
  return;
}

// func_0x1801c1030
int64_t * func_0x1801c1030(int64_t *param_1,int64_t *param_2,uint64_t *param_3,int64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  func_ptr_t fnPtr_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  bool bFlag_14;
  uint8_t uVal_15;
  int iVal_16;
  int64_t lVal_17;
  int64_t *pLong_18;
  int64_t lVal_19;
  void *pVoid_20;
  uint64_t *pU64_21;
  uint64_t uVal_22;
  uint uVal_23;
  int64_t local_50;
  uint local_48;
  
  lVal_2 = *param_1;
  lVal_17 = *(int64_t *)(lVal_2 + 8);
  uVal_23 = 0;
  lVal_19 = lVal_2;
  if (*(char *)(lVal_17 + 0x19) == '\0') {
    pU64_21 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_21 = (uint64_t *)*param_3;
    }
    uVal_4 = param_3[2];
    lVal_3 = lVal_17;
    do {
      lVal_17 = lVal_3;
      if (*(uint64_t *)(lVal_17 + 0x38) < 0x10) {
        pVoid_20 = (void *)(lVal_17 + 0x20);
      }
      else {
        pVoid_20 = *(void **)(lVal_17 + 0x20);
      }
      uVal_5 = *(uint64_t *)(lVal_17 + 0x30);
      uVal_22 = uVal_5;
      if (uVal_4 < uVal_5) {
        uVal_22 = uVal_4;
      }
      iVal_16 = memcmp(pVoid_20,pU64_21,uVal_22);
      bFlag_14 = uVal_5 < uVal_4;
      if (iVal_16 != 0) {
        bFlag_14 = iVal_16 < 0;
      }
      if (bFlag_14 == false) {
        lVal_19 = lVal_17;
      }
      lVal_3 = *(int64_t *)(lVal_17 + (uint64_t)bFlag_14 * 0x10);
    } while (*(char *)(lVal_3 + 0x19) == '\0');
    uVal_23 = (uint)(bFlag_14 ^ 1);
    ch_1 = *(char *)(lVal_19 + 0x19);
  }
  else {
    ch_1 = *(char *)(lVal_2 + 0x19);
  }
  if (ch_1 == '\0') {
    if (*(uint64_t *)(lVal_19 + 0x38) < 0x10) {
      pVoid_20 = (void *)(lVal_19 + 0x20);
    }
    else {
      pVoid_20 = *(void **)(lVal_19 + 0x20);
    }
    uVal_4 = *(uint64_t *)(lVal_19 + 0x30);
    uVal_5 = param_3[2];
    pU64_21 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_21 = (uint64_t *)*param_3;
    }
    uVal_22 = uVal_5;
    if (uVal_4 < uVal_5) {
      uVal_22 = uVal_4;
    }
    iVal_16 = memcmp(pU64_21,pVoid_20,uVal_22);
    bFlag_14 = uVal_4 <= uVal_5;
    if (iVal_16 != 0) {
      bFlag_14 = -1 < iVal_16;
    }
    if (bFlag_14) {
      uVal_15 = 0;
      goto LAB_1801c11fa;
    }
  }
  if (param_1[1] == 0x249249249249249) {
    func_0x1800a17e0();
    fnPtr_6 = (func_ptr_t )swi(3);
    pLong_18 = (int64_t *)(*fnPtr_6)();
    return pLong_18;
  }
  pLong_18 = (int64_t *)func_0x180672de0(0x70);
  uVal_7 = *(uint32_t *)param_3;
  uVal_8 = *(uint32_t *)((int64_t)param_3 + 4);
  uVal_9 = *(uint32_t *)(param_3 + 1);
  uVal_10 = *(uint32_t *)((int64_t)param_3 + 0xc);
  uVal_11 = *(uint32_t *)((int64_t)param_3 + 0x14);
  uVal_12 = *(uint32_t *)(param_3 + 3);
  uVal_13 = *(uint32_t *)((int64_t)param_3 + 0x1c);
  *(uint32_t *)(pLong_18 + 6) = *(uint32_t *)(param_3 + 2);
  *(uint32_t *)((int64_t)pLong_18 + 0x34) = uVal_11;
  *(uint32_t *)(pLong_18 + 7) = uVal_12;
  *(uint32_t *)((int64_t)pLong_18 + 0x3c) = uVal_13;
  *(uint32_t *)(pLong_18 + 4) = uVal_7;
  *(uint32_t *)((int64_t)pLong_18 + 0x24) = uVal_8;
  *(uint32_t *)(pLong_18 + 5) = uVal_9;
  *(uint32_t *)((int64_t)pLong_18 + 0x2c) = uVal_10;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(uint8_t *)param_3 = 0;
  pLong_18[8] = (int64_t)&PTR_FUN_1806b5040;
  *(uint8_t *)(pLong_18 + 9) = *(uint8_t *)(param_4 + 8);
  *(uint8_t *)(pLong_18 + 0xd) = 1;
  *pLong_18 = lVal_2;
  pLong_18[1] = lVal_2;
  pLong_18[2] = lVal_2;
  *(uint16_t *)(pLong_18 + 3) = 0;
  local_50 = lVal_17;
  local_48 = uVal_23;
  lVal_19 = func_0x1800a1550(param_1,&local_50,pLong_18);
  uVal_15 = 1;
LAB_1801c11fa:
  *param_2 = lVal_19;
  *(uint8_t *)(param_2 + 1) = uVal_15;
  return param_2;
}

// func_0x1801c1220
int64_t * func_0x1801c1220(int64_t *param_1,int64_t *param_2,uint64_t *param_3,int64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  func_ptr_t fnPtr_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  bool bFlag_14;
  uint8_t uVal_15;
  int iVal_16;
  int64_t lVal_17;
  int64_t *pLong_18;
  int64_t lVal_19;
  void *pVoid_20;
  uint64_t *pU64_21;
  uint64_t uVal_22;
  uint uVal_23;
  int64_t local_50;
  uint local_48;
  
  lVal_2 = *param_1;
  lVal_17 = *(int64_t *)(lVal_2 + 8);
  uVal_23 = 0;
  lVal_19 = lVal_2;
  if (*(char *)(lVal_17 + 0x19) == '\0') {
    pU64_21 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_21 = (uint64_t *)*param_3;
    }
    uVal_4 = param_3[2];
    lVal_3 = lVal_17;
    do {
      lVal_17 = lVal_3;
      if (*(uint64_t *)(lVal_17 + 0x38) < 0x10) {
        pVoid_20 = (void *)(lVal_17 + 0x20);
      }
      else {
        pVoid_20 = *(void **)(lVal_17 + 0x20);
      }
      uVal_5 = *(uint64_t *)(lVal_17 + 0x30);
      uVal_22 = uVal_5;
      if (uVal_4 < uVal_5) {
        uVal_22 = uVal_4;
      }
      iVal_16 = memcmp(pVoid_20,pU64_21,uVal_22);
      bFlag_14 = uVal_5 < uVal_4;
      if (iVal_16 != 0) {
        bFlag_14 = iVal_16 < 0;
      }
      if (bFlag_14 == false) {
        lVal_19 = lVal_17;
      }
      lVal_3 = *(int64_t *)(lVal_17 + (uint64_t)bFlag_14 * 0x10);
    } while (*(char *)(lVal_3 + 0x19) == '\0');
    uVal_23 = (uint)(bFlag_14 ^ 1);
    ch_1 = *(char *)(lVal_19 + 0x19);
  }
  else {
    ch_1 = *(char *)(lVal_2 + 0x19);
  }
  if (ch_1 == '\0') {
    if (*(uint64_t *)(lVal_19 + 0x38) < 0x10) {
      pVoid_20 = (void *)(lVal_19 + 0x20);
    }
    else {
      pVoid_20 = *(void **)(lVal_19 + 0x20);
    }
    uVal_4 = *(uint64_t *)(lVal_19 + 0x30);
    uVal_5 = param_3[2];
    pU64_21 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_21 = (uint64_t *)*param_3;
    }
    uVal_22 = uVal_5;
    if (uVal_4 < uVal_5) {
      uVal_22 = uVal_4;
    }
    iVal_16 = memcmp(pU64_21,pVoid_20,uVal_22);
    bFlag_14 = uVal_4 <= uVal_5;
    if (iVal_16 != 0) {
      bFlag_14 = -1 < iVal_16;
    }
    if (bFlag_14) {
      uVal_15 = 0;
      goto LAB_1801c13eb;
    }
  }
  if (param_1[1] == 0x249249249249249) {
    func_0x1800a17e0();
    fnPtr_6 = (func_ptr_t )swi(3);
    pLong_18 = (int64_t *)(*fnPtr_6)();
    return pLong_18;
  }
  pLong_18 = (int64_t *)func_0x180672de0(0x70);
  uVal_7 = *(uint32_t *)param_3;
  uVal_8 = *(uint32_t *)((int64_t)param_3 + 4);
  uVal_9 = *(uint32_t *)(param_3 + 1);
  uVal_10 = *(uint32_t *)((int64_t)param_3 + 0xc);
  uVal_11 = *(uint32_t *)((int64_t)param_3 + 0x14);
  uVal_12 = *(uint32_t *)(param_3 + 3);
  uVal_13 = *(uint32_t *)((int64_t)param_3 + 0x1c);
  *(uint32_t *)(pLong_18 + 6) = *(uint32_t *)(param_3 + 2);
  *(uint32_t *)((int64_t)pLong_18 + 0x34) = uVal_11;
  *(uint32_t *)(pLong_18 + 7) = uVal_12;
  *(uint32_t *)((int64_t)pLong_18 + 0x3c) = uVal_13;
  *(uint32_t *)(pLong_18 + 4) = uVal_7;
  *(uint32_t *)((int64_t)pLong_18 + 0x24) = uVal_8;
  *(uint32_t *)(pLong_18 + 5) = uVal_9;
  *(uint32_t *)((int64_t)pLong_18 + 0x2c) = uVal_10;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(uint8_t *)param_3 = 0;
  pLong_18[8] = (int64_t)&PTR_FUN_1806b50a0;
  *(uint16_t *)(pLong_18 + 9) = *(uint16_t *)(param_4 + 8);
  *(uint8_t *)(pLong_18 + 0xd) = 2;
  *pLong_18 = lVal_2;
  pLong_18[1] = lVal_2;
  pLong_18[2] = lVal_2;
  *(uint16_t *)(pLong_18 + 3) = 0;
  local_50 = lVal_17;
  local_48 = uVal_23;
  lVal_19 = func_0x1800a1550(param_1,&local_50,pLong_18);
  uVal_15 = 1;
LAB_1801c13eb:
  *param_2 = lVal_19;
  *(uint8_t *)(param_2 + 1) = uVal_15;
  return param_2;
}

// func_0x1801c1410
int64_t * func_0x1801c1410(int64_t *param_1,int64_t *param_2,uint64_t *param_3,uint64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  func_ptr_t fnPtr_6;
  bool bFlag_7;
  uint64_t uVal_8;
  uint8_t uVal_9;
  int iVal_10;
  int64_t lVal_11;
  int64_t lVal_12;
  int64_t *pLong_13;
  void *pVoid_14;
  uint64_t *pU64_15;
  int64_t *pLong_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  int64_t local_78;
  uint local_70;
  int64_t *local_68;
  uint64_t local_60;
  int64_t *local_58;
  uint local_4c;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVal_2 = *param_1;
  lVal_11 = *(int64_t *)(lVal_2 + 8);
  lVal_12 = lVal_2;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    pU64_15 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_15 = (uint64_t *)*param_3;
    }
    uVal_4 = param_3[2];
    lVal_3 = lVal_11;
    local_68 = param_1;
    local_60 = param_4;
    local_58 = param_2;
    do {
      lVal_11 = lVal_3;
      if (*(uint64_t *)(lVal_11 + 0x38) < 0x10) {
        pVoid_14 = (void *)(lVal_11 + 0x20);
      }
      else {
        pVoid_14 = *(void **)(lVal_11 + 0x20);
      }
      uVal_5 = *(uint64_t *)(lVal_11 + 0x30);
      uVal_17 = uVal_5;
      if (uVal_4 < uVal_5) {
        uVal_17 = uVal_4;
      }
      iVal_10 = memcmp(pVoid_14,pU64_15,uVal_17);
      bFlag_7 = uVal_5 < uVal_4;
      if (iVal_10 != 0) {
        bFlag_7 = iVal_10 < 0;
      }
      if (bFlag_7 == false) {
        lVal_12 = lVal_11;
      }
      lVal_3 = *(int64_t *)(lVal_11 + (uint64_t)bFlag_7 * 0x10);
    } while (*(char *)(lVal_3 + 0x19) == '\0');
    local_4c = (uint)(bFlag_7 ^ 1);
    ch_1 = *(char *)(lVal_12 + 0x19);
    pLong_16 = local_68;
    pLong_13 = local_68;
    uVal_18 = local_60;
    uVal_8 = local_60;
    param_2 = local_58;
  }
  else {
    local_4c = 0;
    ch_1 = *(char *)(lVal_2 + 0x19);
    pLong_16 = param_1;
    pLong_13 = local_68;
    uVal_18 = param_4;
    uVal_8 = local_60;
  }
  local_60 = uVal_18;
  local_68 = pLong_16;
  pLong_16 = local_68;
  uVal_18 = local_60;
  if (ch_1 == '\0') {
    if (*(uint64_t *)(lVal_12 + 0x38) < 0x10) {
      pVoid_14 = (void *)(lVal_12 + 0x20);
    }
    else {
      pVoid_14 = *(void **)(lVal_12 + 0x20);
    }
    uVal_4 = *(uint64_t *)(lVal_12 + 0x30);
    uVal_5 = param_3[2];
    pU64_15 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_15 = (uint64_t *)*param_3;
    }
    uVal_17 = uVal_5;
    if (uVal_4 < uVal_5) {
      uVal_17 = uVal_4;
    }
    iVal_10 = memcmp(pU64_15,pVoid_14,uVal_17);
    bFlag_7 = uVal_4 <= uVal_5;
    if (iVal_10 != 0) {
      bFlag_7 = -1 < iVal_10;
    }
    pLong_16 = local_68;
    uVal_18 = local_60;
    pLong_13 = local_68;
    uVal_8 = local_60;
    if (bFlag_7) {
      uVal_9 = 0;
      goto LAB_1801c15c2;
    }
  }
  local_60 = uVal_8;
  local_68 = pLong_13;
  if (pLong_16[1] == 0x249249249249249) {
    func_0x1800a17e0();
    fnPtr_6 = (func_ptr_t )swi(3);
    pLong_13 = (int64_t *)(*fnPtr_6)();
    return pLong_13;
  }
  local_58 = (int64_t *)func_0x180672de0(0x70);
  func_0x1801c1630(local_58 + 4,param_3,uVal_18);
  *local_58 = lVal_2;
  local_58[1] = lVal_2;
  local_58[2] = lVal_2;
  *(uint16_t *)(local_58 + 3) = 0;
  local_70 = local_4c;
  local_78 = lVal_11;
  lVal_12 = func_0x1800a1550(pLong_16,&local_78);
  uVal_9 = 1;
LAB_1801c15c2:
  *param_2 = lVal_12;
  *(uint8_t *)(param_2 + 1) = uVal_9;
  return param_2;
}

// Unwind@1801c15f0
void Unwind_1801c15f0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x40),0x70);
  return;
}

// func_0x1801c1630
uint8_t (*func_0x1801c1630(uint8_t (*param_1)[16],uint32_t *param_2,int64_t param_3,uint64_t param_4))[16]
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint8_t (*pArr16_12)[16];
  uint64_t uVal_13;
  uint32_t *pU64_14;
  uint64_t uVal_15;
  
  uVal_15 = 0xfffffffffffffffe;
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  uVal_3 = *param_2;
  uVal_4 = param_2[1];
  uVal_5 = param_2[2];
  uVal_6 = param_2[3];
  uVal_7 = param_2[5];
  uVal_8 = param_2[6];
  uVal_9 = param_2[7];
  *(uint32_t *)param_1[1] = param_2[4];
  *(uint32_t *)(param_1[1] + 4) = uVal_7;
  *(uint32_t *)(param_1[1] + 8) = uVal_8;
  *(uint32_t *)(param_1[1] + 0xc) = uVal_9;
  *(uint32_t *)*param_1 = uVal_3;
  *(uint32_t *)(*param_1 + 4) = uVal_4;
  *(uint32_t *)(*param_1 + 8) = uVal_5;
  *(uint32_t *)(*param_1 + 0xc) = uVal_6;
  *(uint64_t *)(param_2 + 4) = 0;
  *(uint64_t *)(param_2 + 6) = 0xf;
  *(uint8_t *)param_2 = 0;
  *(uint8_t ***)param_1[2] = &PTR_LAB_1806b5100;
  *(uint8_t (*)[16])(param_1[2] + 8) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1[3] + 8) = ZEXT816(0);
  uVal_1 = *(uint64_t *)(param_3 + 0x18);
  if (*(uint64_t *)(param_3 + 0x20) < 0x10) {
    pU64_14 = (uint32_t *)(param_3 + 8);
  }
  else {
    pU64_14 = *(uint32_t **)(param_3 + 8);
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      *(uint64_t *)(param_1[3] + 8) = uVal_1;
      *(uint64_t *)param_1[4] = 0xf;
      uVal_3 = pU64_14[1];
      uVal_4 = pU64_14[2];
      uVal_5 = pU64_14[3];
      *(uint32_t *)(param_1[2] + 8) = *pU64_14;
      *(uint32_t *)(param_1[2] + 0xc) = uVal_3;
      *(uint32_t *)param_1[3] = uVal_4;
      *(uint32_t *)(param_1[3] + 4) = uVal_5;
    }
    else {
      uVal_10 = uVal_1 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_10) {
        uVal_13 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        uVal_10 = func_0x180672de0(uVal_13 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_13 + 0x28);
        uVal_10 = lVal_11 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_10 - 8) = lVal_11;
      }
      *(uint64_t *)(param_1[2] + 8) = uVal_10;
      *(uint64_t *)(param_1[3] + 8) = uVal_1;
      *(uint64_t *)param_1[4] = uVal_13;
      func_0x1806aa960(uVal_10,pU64_14,uVal_1 + 1,param_4,param_1,uVal_15);
    }
    param_1[4][8] = 8;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_12 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_12;
}

// Unwind@1801c1750
void Unwind_1801c1750(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x20));
  return;
}

// func_0x1801c1780
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c1780(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b5b04;
    uVal_2 = param_1[2] ^ _UNK_1806b5b08;
    uVal_3 = param_1[3] ^ _UNK_1806b5b0c;
    *param_1 = *param_1 ^ _DAT_1806b5b00;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806b5230,0);
  }
  return;
}

// func_0x1801c17d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c17d0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806af244;
    uVal_2 = param_1[2] ^ _UNK_1806af248;
    uVal_3 = param_1[3] ^ _UNK_1806af24c;
    *param_1 = *param_1 ^ _DAT_1806af240;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b6980,0);
  }
  return;
}

// func_0x1801c1810
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c1810(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2d1c;
  uVal_9 = _UNK_1806b2d18;
  uVal_8 = _UNK_1806b2d14;
  uVal_7 = _DAT_1806b2d10;
  if (param_1[2][4] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d1c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xf7f5f1d5;
    param_1[2][4] = 0;
  }
  return;
}

// func_0x1801c1840
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c1840(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2cb4;
    uVal_2 = param_1[2] ^ _UNK_1806b2cb8;
    uVal_3 = param_1[3] ^ _UNK_1806b2cbc;
    *param_1 = *param_1 ^ _DAT_1806b2cb0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b26c0,0);
  }
  return;
}

// func_0x1801c1880
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c1880(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b6894;
    uVal_2 = param_1[2] ^ _UNK_1806b6898;
    uVal_3 = param_1[3] ^ _UNK_1806b689c;
    *param_1 = *param_1 ^ _DAT_1806b6890;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b2720,0);
  }
  return;
}

// func_0x1801c18c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c18c0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6a24;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6a20;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6a28;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b6a2c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x6bdffbd1bffb17b5;
    param_1[1][8] = param_1[1][8] ^ 0xb5;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x1801c18f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c18f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6a34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6a30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6a38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b6a3c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x752f016903dba913;
    param_1[1][8] = param_1[1][8] ^ 0x13;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x1801c1920
int64_t func_0x1801c1920(int64_t *param_1,char *param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int iVal_3;
  size_t sz_4;
  bool bFlag_5;
  void *pVoid_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  
  lVal_1 = *param_1;
  lVal_9 = *(int64_t *)(lVal_1 + 8);
  lVal_7 = lVal_1;
  if (*(char *)(lVal_9 + 0x19) == '\0') {
    sz_4 = strlen(param_2);
    do {
      if (*(uint64_t *)(lVal_9 + 0x38) < 0x10) {
        pVoid_6 = (void *)(lVal_9 + 0x20);
      }
      else {
        pVoid_6 = *(void **)(lVal_9 + 0x20);
      }
      uVal_2 = *(uint64_t *)(lVal_9 + 0x30);
      uVal_8 = uVal_2;
      if (sz_4 < uVal_2) {
        uVal_8 = sz_4;
      }
      iVal_3 = memcmp(pVoid_6,param_2,uVal_8);
      bFlag_5 = uVal_2 < sz_4;
      if (iVal_3 != 0) {
        bFlag_5 = iVal_3 < 0;
      }
      if (bFlag_5 == false) {
        lVal_7 = lVal_9;
      }
      lVal_9 = *(int64_t *)(lVal_9 + (uint64_t)bFlag_5 * 0x10);
    } while (*(char *)(lVal_9 + 0x19) == '\0');
  }
  if (*(char *)(lVal_7 + 0x19) == '\0') {
    sz_4 = strlen(param_2);
    uVal_2 = *(uint64_t *)(lVal_7 + 0x30);
    if (*(uint64_t *)(lVal_7 + 0x38) < 0x10) {
      pVoid_6 = (void *)(lVal_7 + 0x20);
    }
    else {
      pVoid_6 = *(void **)(lVal_7 + 0x20);
    }
    uVal_8 = uVal_2;
    if (sz_4 < uVal_2) {
      uVal_8 = sz_4;
    }
    iVal_3 = memcmp(pVoid_6,param_2,uVal_8);
    bFlag_5 = uVal_2 <= sz_4;
    if (iVal_3 != 0) {
      bFlag_5 = iVal_3 < 1;
    }
    if (bFlag_5) {
      return lVal_7;
    }
  }
  return lVal_1;
}

// func_0x1801c1a20
int64_t * func_0x1801c1a20(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  func_ptr_t fnPtr_5;
  bool bFlag_6;
  int iVal_7;
  int64_t lVal_8;
  int64_t lVal_9;
  int64_t *pLong_10;
  void *pVoid_11;
  int64_t *pLong_12;
  uint64_t uVal_13;
  uint uVal_14;
  int64_t *pLong_15;
  int64_t local_78;
  uint local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVal_9 = *param_1;
  local_68 = param_1;
  local_60 = (int64_t *)func_0x180672de0(0x80);
  pLong_10 = local_60 + 4;
  local_50 = local_60;
  func_0x1801c1d60(pLong_10,param_3,param_4);
  *local_50 = lVal_9;
  local_50[1] = lVal_9;
  local_50[2] = lVal_9;
  *(uint16_t *)(local_50 + 3) = 0;
  lVal_9 = *param_1;
  lVal_8 = *(int64_t *)(lVal_9 + 8);
  uVal_14 = 0;
  if (*(char *)(lVal_8 + 0x19) == '\0') {
    pLong_15 = pLong_10;
    if (0xf < (uint64_t)local_50[7]) {
      pLong_15 = (int64_t *)local_50[4];
    }
    uVal_3 = local_50[6];
    lVal_2 = lVal_8;
    local_58 = param_2;
    do {
      lVal_8 = lVal_2;
      if (*(uint64_t *)(lVal_8 + 0x38) < 0x10) {
        pVoid_11 = (void *)(lVal_8 + 0x20);
      }
      else {
        pVoid_11 = *(void **)(lVal_8 + 0x20);
      }
      uVal_4 = *(uint64_t *)(lVal_8 + 0x30);
      uVal_13 = uVal_4;
      if (uVal_3 < uVal_4) {
        uVal_13 = uVal_3;
      }
      iVal_7 = memcmp(pVoid_11,pLong_15,uVal_13);
      bFlag_6 = uVal_4 < uVal_3;
      if (iVal_7 != 0) {
        bFlag_6 = iVal_7 < 0;
      }
      if (!bFlag_6) {
        lVal_9 = lVal_8;
      }
      lVal_2 = *(int64_t *)(lVal_8 + (uint64_t)bFlag_6 * 0x10);
    } while (*(char *)(lVal_2 + 0x19) == '\0');
    uVal_14 = bFlag_6 ^ 1;
    ch_1 = *(char *)(lVal_9 + 0x19);
    pLong_12 = local_58;
    pLong_15 = local_58;
  }
  else {
    ch_1 = *(char *)(lVal_9 + 0x19);
    pLong_12 = param_2;
    pLong_15 = local_58;
  }
  local_58 = pLong_12;
  pLong_12 = local_58;
  if (ch_1 == '\0') {
    if (*(uint64_t *)(lVal_9 + 0x38) < 0x10) {
      pVoid_11 = (void *)(lVal_9 + 0x20);
    }
    else {
      pVoid_11 = *(void **)(lVal_9 + 0x20);
    }
    uVal_3 = *(uint64_t *)(lVal_9 + 0x30);
    uVal_4 = local_50[6];
    if (0xf < (uint64_t)local_50[7]) {
      pLong_10 = (int64_t *)local_50[4];
    }
    uVal_13 = uVal_4;
    if (uVal_3 < uVal_4) {
      uVal_13 = uVal_3;
    }
    iVal_7 = memcmp(pLong_10,pVoid_11,uVal_13);
    pLong_10 = local_58;
    bFlag_6 = uVal_3 <= uVal_4;
    if (iVal_7 != 0) {
      bFlag_6 = -1 < iVal_7;
    }
    pLong_12 = local_58;
    pLong_15 = local_58;
    if (bFlag_6) {
      *local_58 = lVal_9;
      *(uint8_t *)(local_58 + 1) = 0;
      func_0x1801c1c80(&local_68);
      return pLong_10;
    }
  }
  local_58 = pLong_15;
  if (param_1[1] != 0x1ffffffffffffff) {
    local_60 = (int64_t *)0x0;
    func_0x1801c1c80(&local_68);
    local_78 = lVal_8;
    local_70 = uVal_14;
    lVal_9 = func_0x1800a1550(param_1,&local_78,local_50);
    *pLong_12 = lVal_9;
    *(uint8_t *)(pLong_12 + 1) = 1;
    return pLong_12;
  }
  func_0x1800a17e0();
  fnPtr_5 = (func_ptr_t )swi(3);
  pLong_10 = (int64_t *)(*fnPtr_5)();
  return pLong_10;
}

// Unwind@1801c1c00
void Unwind_1801c1c00(uint64_t param_1,int64_t param_2)
{
  func_0x1801c1c80(param_2 + 0x30);
  return;
}

// Unwind@1801c1c40
void Unwind_1801c1c40(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x48),0x80);
  return;
}

// func_0x1801c1c80
void func_0x1801c1c80(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  lVal_1 = *(int64_t *)(param_1 + 8);
  if (lVal_1 != 0) {
    uVal_2 = *(uint64_t *)(lVal_1 + 0x78);
    if (0xf < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + 0x60);
      uVal_4 = uVal_2 + 1;
      lVal_5 = lVal_3;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(lVal_3 + -8);
        if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) goto LAB_1801c1d58;
        uVal_4 = uVal_2 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    *(uint64_t *)(lVal_1 + 0x70) = 0;
    *(uint64_t *)(lVal_1 + 0x78) = 0xf;
    *(uint8_t *)(lVal_1 + 0x60) = 0;
    uVal_2 = *(uint64_t *)(lVal_1 + 0x38);
    if (0xf < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + 0x20);
      uVal_4 = uVal_2 + 1;
      lVal_5 = lVal_3;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(lVal_3 + -8);
        if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) {
LAB_1801c1d58:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_4 = uVal_2 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    *(uint64_t *)(lVal_1 + 0x30) = 0;
    *(uint64_t *)(lVal_1 + 0x38) = 0xf;
    *(uint8_t *)(lVal_1 + 0x20) = 0;
    if (*(int64_t *)(param_1 + 8) != 0) {
      thunk_FUN_180695dd0(*(int64_t *)(param_1 + 8),0x80);
      return;
    }
  }
  return;
}

// func_0x1801c1d60
uint8_t (*func_0x1801c1d60(uint8_t (*param_1)[16],char **param_2,uint32_t *param_3))[16]
{
  char *_Str;
  func_ptr_t fnPtr_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint8_t (*pArr16_13)[16];
  
  _Str = *param_2;
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  sz_9 = strlen(_Str);
  if (-1 < (int64_t)sz_9) {
    uVal_12 = 0xf;
    pArr16_13 = param_1;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_12 = 0x16;
      if (0x16 < uVal_10) {
        uVal_12 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pArr16_13 = (uint8_t (*)[16])func_0x180672de0(uVal_12 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_12 + 0x28);
        pArr16_13 = (uint8_t (*)[16])(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_13[-1] + 8) = lVal_11;
      }
      *(uint8_t (**)[16])*param_1 = pArr16_13;
    }
    *(size_t *)param_1[1] = sz_9;
    *(uint64_t *)(param_1[1] + 8) = uVal_12;
    func_0x1806aa960(pArr16_13,_Str,sz_9);
    (*pArr16_13)[sz_9] = 0;
    *(uint32_t *)param_1[2] = *param_3;
    *(uint32_t *)(param_1[2] + 4) = param_3[1];
    *(uint32_t *)(param_1[2] + 8) = param_3[2];
    *(uint32_t *)(param_1[2] + 0xc) = param_3[3];
    *(uint32_t *)param_1[3] = param_3[4];
    *(uint32_t *)(param_1[3] + 4) = param_3[5];
    *(uint32_t *)(param_1[3] + 8) = param_3[6];
    *(uint32_t *)(param_1[3] + 0xc) = param_3[7];
    param_1[5] = ZEXT816(0);
    param_1[4] = ZEXT816(0);
    uVal_2 = param_3[9];
    uVal_3 = param_3[10];
    uVal_4 = param_3[0xb];
    uVal_5 = param_3[0xc];
    uVal_6 = param_3[0xd];
    uVal_7 = param_3[0xe];
    uVal_8 = param_3[0xf];
    *(uint32_t *)param_1[4] = param_3[8];
    *(uint32_t *)(param_1[4] + 4) = uVal_2;
    *(uint32_t *)(param_1[4] + 8) = uVal_3;
    *(uint32_t *)(param_1[4] + 0xc) = uVal_4;
    *(uint32_t *)param_1[5] = uVal_5;
    *(uint32_t *)(param_1[5] + 4) = uVal_6;
    *(uint32_t *)(param_1[5] + 8) = uVal_7;
    *(uint32_t *)(param_1[5] + 0xc) = uVal_8;
    *(uint64_t *)(param_3 + 0xc) = 0;
    *(uint64_t *)(param_3 + 0xe) = 0xf;
    *(uint8_t *)(param_3 + 8) = 0;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_13 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_13;
}

// func_0x1801c1ea0
int64_t * func_0x1801c1ea0(int64_t *param_1,int64_t *param_2,uint64_t *param_3,uint64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  func_ptr_t fnPtr_6;
  bool bFlag_7;
  uint64_t uVal_8;
  uint8_t uVal_9;
  int iVal_10;
  int64_t lVal_11;
  int64_t lVal_12;
  int64_t *pLong_13;
  void *pVoid_14;
  uint64_t *pU64_15;
  int64_t *pLong_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  int64_t local_78;
  uint local_70;
  int64_t *local_68;
  uint64_t local_60;
  int64_t *local_58;
  uint local_4c;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVal_2 = *param_1;
  lVal_11 = *(int64_t *)(lVal_2 + 8);
  lVal_12 = lVal_2;
  if (*(char *)(lVal_11 + 0x19) == '\0') {
    pU64_15 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_15 = (uint64_t *)*param_3;
    }
    uVal_4 = param_3[2];
    lVal_3 = lVal_11;
    local_68 = param_1;
    local_60 = param_4;
    local_58 = param_2;
    do {
      lVal_11 = lVal_3;
      if (*(uint64_t *)(lVal_11 + 0x38) < 0x10) {
        pVoid_14 = (void *)(lVal_11 + 0x20);
      }
      else {
        pVoid_14 = *(void **)(lVal_11 + 0x20);
      }
      uVal_5 = *(uint64_t *)(lVal_11 + 0x30);
      uVal_17 = uVal_5;
      if (uVal_4 < uVal_5) {
        uVal_17 = uVal_4;
      }
      iVal_10 = memcmp(pVoid_14,pU64_15,uVal_17);
      bFlag_7 = uVal_5 < uVal_4;
      if (iVal_10 != 0) {
        bFlag_7 = iVal_10 < 0;
      }
      if (bFlag_7 == false) {
        lVal_12 = lVal_11;
      }
      lVal_3 = *(int64_t *)(lVal_11 + (uint64_t)bFlag_7 * 0x10);
    } while (*(char *)(lVal_3 + 0x19) == '\0');
    local_4c = (uint)(bFlag_7 ^ 1);
    ch_1 = *(char *)(lVal_12 + 0x19);
    pLong_16 = local_68;
    pLong_13 = local_68;
    uVal_18 = local_60;
    uVal_8 = local_60;
    param_2 = local_58;
  }
  else {
    local_4c = 0;
    ch_1 = *(char *)(lVal_2 + 0x19);
    pLong_16 = param_1;
    pLong_13 = local_68;
    uVal_18 = param_4;
    uVal_8 = local_60;
  }
  local_60 = uVal_18;
  local_68 = pLong_16;
  pLong_16 = local_68;
  uVal_18 = local_60;
  if (ch_1 == '\0') {
    if (*(uint64_t *)(lVal_12 + 0x38) < 0x10) {
      pVoid_14 = (void *)(lVal_12 + 0x20);
    }
    else {
      pVoid_14 = *(void **)(lVal_12 + 0x20);
    }
    uVal_4 = *(uint64_t *)(lVal_12 + 0x30);
    uVal_5 = param_3[2];
    pU64_15 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_15 = (uint64_t *)*param_3;
    }
    uVal_17 = uVal_5;
    if (uVal_4 < uVal_5) {
      uVal_17 = uVal_4;
    }
    iVal_10 = memcmp(pU64_15,pVoid_14,uVal_17);
    bFlag_7 = uVal_4 <= uVal_5;
    if (iVal_10 != 0) {
      bFlag_7 = -1 < iVal_10;
    }
    pLong_16 = local_68;
    uVal_18 = local_60;
    pLong_13 = local_68;
    uVal_8 = local_60;
    if (bFlag_7) {
      uVal_9 = 0;
      goto LAB_1801c2052;
    }
  }
  local_60 = uVal_8;
  local_68 = pLong_13;
  if (pLong_16[1] == 0x333333333333333) {
    func_0x1800a17e0();
    fnPtr_6 = (func_ptr_t )swi(3);
    pLong_13 = (int64_t *)(*fnPtr_6)();
    return pLong_13;
  }
  local_58 = (int64_t *)func_0x180672de0(0x50);
  func_0x1801c20c0(local_58 + 4,param_3,uVal_18);
  *local_58 = lVal_2;
  local_58[1] = lVal_2;
  local_58[2] = lVal_2;
  *(uint16_t *)(local_58 + 3) = 0;
  local_70 = local_4c;
  local_78 = lVal_11;
  lVal_12 = func_0x1800a1550(pLong_16,&local_78);
  uVal_9 = 1;
LAB_1801c2052:
  *param_2 = lVal_12;
  *(uint8_t *)(param_2 + 1) = uVal_9;
  return param_2;
}

// Unwind@1801c2080
void Unwind_1801c2080(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x40),0x50);
  return;
}

// func_0x1801c20c0
uint8_t (*func_0x1801c20c0(uint8_t (*param_1)[16],uint64_t *param_2,uint64_t param_3))[16]
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
    func_0x18009ff70(param_1 + 2,param_3);
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_8 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_8;
}

// Unwind@1801c21a0
void Unwind_1801c21a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x1801c21d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c21d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2c9c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x9f9d9cf;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1801c21f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801c21f0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2cac;
  uVal_9 = _UNK_1806b2ca8;
  uVal_8 = _UNK_1806b2ca4;
  uVal_7 = _DAT_1806b2ca0;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ca4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ca0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ca8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cac;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = 0;
  }
  return;
}

// func_0x1801c2930
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801c2930(uint64_t *param_1)
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
  uint8_t local_78 [8];
  uint64_t uStack_70;
  size_t local_68;
  uint64_t uStack_60;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_58 = _DAT_1806bce98;
  uStack_54 = _UNK_1806bce9c;
  uStack_50 = _UNK_1806bcea0;
  local_68 = CONCAT44(_UNK_1806bce8c,_DAT_1806bce88);
  uStack_60 = CONCAT44(_UNK_1806bce94,_UNK_1806bce90);
  local_78._4_4_ = _UNK_1806bce7c;
  local_78._0_4_ = _DAT_1806bce78;
  uStack_70._0_4_ = _UNK_1806bce80;
  uStack_70._4_4_ = _UNK_1806bce84;
  uStack_4c = CONCAT13(0x62,(int3)_UNK_1806bcea4);
  uStack_48 = CONCAT13(uStack_48._3_1_,0xf9bca3);
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x6f14) == '\0') {
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_10 + 0x6f14) = 1;
    func_0x1801b4360(lVal_10 + 0x6edd,local_78);
    func_0x180673140(&LAB_18020e6a0);
  }
  uVal_7 = _UNK_1806b2c9c;
  uVal_6 = _UNK_1806b2c98;
  uVal_5 = _UNK_1806b2c94;
  uVal_4 = _DAT_1806b2c90;
  lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_10 + 0x6edd);
  if (*(char *)(lVal_10 + 0x6f10) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_10 + 0x6ee1) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(lVal_10 + 0x6ee5) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(lVal_10 + 0x6ee9) ^ _UNK_1806b2c9c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_10 + 0x6ef1) ^ uVal_5;
    auArr_2._0_4_ = *(uint *)(lVal_10 + 0x6eed) ^ uVal_4;
    auArr_2._8_4_ = *(uint *)(lVal_10 + 0x6ef5) ^ uVal_6;
    auArr_2._12_4_ = *(uint *)(lVal_10 + 0x6ef9) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_10 + 0x6eed) = auArr_2;
    auArr_3._4_4_ = *(uint *)(lVal_10 + 0x6f01) ^ uVal_5;
    auArr_3._0_4_ = *(uint *)(lVal_10 + 0x6efd) ^ uVal_4;
    auArr_3._8_4_ = *(uint *)(lVal_10 + 0x6f05) ^ uVal_6;
    auArr_3._12_4_ = *(uint *)(lVal_10 + 0x6f09) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_10 + 0x6efd) = auArr_3;
    *(ushort *)(lVal_10 + 0x6f0d) = *(ushort *)(lVal_10 + 0x6f0d) ^ 0xd9cf;
    *(byte *)(lVal_10 + 0x6f0f) = *(byte *)(lVal_10 + 0x6f0f) ^ 0xf9;
    *(uint8_t *)(lVal_10 + 0x6f10) = 0;
  }
  _local_78 = ZEXT816(0);
  sz_8 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_8) {
    if (sz_8 < 0x10) {
      pU64_11 = local_78;
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
      local_78 = (uint8_t  [8])pU64_11;
    }
    local_68 = sz_8;
    uStack_60 = uVal_12;
    func_0x1806aa960(pU64_11,_Str,sz_8);
    pU64_11[sz_8] = 0;
    func_0x1801c2ba0(param_1,0,3,local_78);
    if (0xf < uStack_60) {
      uVal_12 = uStack_60 + 1;
      lVal_10 = (int64_t)local_78;
      if (0xfff < uVal_12) {
        lVal_10 = *(int64_t *)((int64_t)local_78 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_10)) goto LAB_1801c2b22;
        uVal_12 = uStack_60 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_12);
    }
    *param_1 = &PTR_LAB_1806bb3c0;
    return param_1;
  }
  func_0x18007ba70();
LAB_1801c2b22:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801c2b30
void Unwind_1801c2b30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801c2b60
void Unwind_1801c2b60(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6f14) = 0;
  return;
}

// func_0x1801c2ba0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801c2ba0(uint64_t *param_1,uint32_t param_2,uint32_t param_3,uint64_t *param_4)
{
  byte *pU8_1;
  uint64_t *pU64_2;
  char *_Str;
  uint *pU64_3;
  uint8_t (*_Str_00)[16];
  uint32_t uVal_4;
  func_ptr_t fnPtr_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint64_t uVal_10;
  size_t sz_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t *pU64_14;
  uint8_t *pU64_15;
  uint8_t *pU64_16;
  uint64_t uVal_17;
  uint8_t auArr_18 [16];
  uint uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint64_t in_stack_fffffffffffffd68;
  uint32_t uVal_22;
  uint8_t local_280 [56];
  uint64_t local_248;
  uint8_t local_240 [56];
  uint64_t local_208;
  uint8_t local_200 [56];
  uint64_t local_1c8;
  uint8_t local_1c0 [56];
  uint64_t local_188;
  uint8_t local_180 [56];
  uint64_t local_148;
  uint64_t *local_140;
  uint64_t *local_138;
  uint64_t *local_130;
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t local_108 [16];
  uint8_t local_f8 [16];
  uint8_t local_e8 [16];
  uint8_t local_d8 [40];
  int64_t *local_b0;
  uint8_t local_a8 [16];
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint16_t uStack_7c;
  uint16_t uStack_7a;
  uint32_t uStack_78;
  uint16_t uStack_74;
  uint16_t uStack_72;
  uint32_t uStack_70;
  uint16_t uStack_6c;
  uint16_t uStack_6a;
  undefined6 uStack_68;
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
  *param_1 = &PTR_FUN_1806bb7a0;
  *(uint8_t *)((int64_t)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(uint16_t *)(param_1 + 3) = 1;
  local_140 = param_1 + 4;
  *(uint8_t (*)[16])(param_1 + 4) = (uint8_t  [16])0x0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(uint8_t *)(param_1 + 8) = 0;
  local_138 = param_1 + 9;
  local_130 = param_1 + 0xd;
  *(uint8_t (*)[16])(param_1 + 0xd) = (uint8_t  [16])0x0;
  param_1[0xf] = 0;
  *(uint8_t (*)[16])(param_1 + 9) = (uint8_t  [16])0x0;
  *(uint8_t (*)[16])((int64_t)param_1 + 0x51) = (uint8_t  [16])0x0;
  *(uint32_t *)(param_1 + 1) = param_2;
  *(uint32_t *)((int64_t)param_1 + 0x1c) = param_3;
  if (local_140 != param_4) {
    uVal_17 = param_4[2];
    if (0xf < (uint64_t)param_4[3]) {
      param_4 = (uint64_t *)*param_4;
    }
    if (uVal_17 < 0x10) {
      param_1[6] = uVal_17;
      func_0x1806aa960(param_1 + 4,param_4,uVal_17);
      *(uint8_t *)((int64_t)param_1 + uVal_17 + 0x20) = 0;
    }
    else {
      func_0x18007bba0(param_1 + 4,uVal_17);
    }
  }
  local_248 = 0;
  if (DAT_18083f980 != (uint64_t *)0x0) {
    local_248 = 0;
    local_248 = (**(func_ptr_t *)*DAT_18083f980)(DAT_18083f980,local_280);
  }
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x73cc) == '\0') {
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_13 + 0x73cc) = 1;
    *(uint16_t *)(lVal_13 + 0x73c9) = 0x123;
    func_0x180673140(&LAB_180210b70);
  }
  lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU8_1 = (byte *)(lVal_13 + 0x73c9);
  if (*(char *)(lVal_13 + 0x73ca) == '\x01') {
    *pU8_1 = *pU8_1 ^ 0x23;
    *(uint8_t *)(lVal_13 + 0x73ca) = 0;
  }
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_a8 = (uint8_t  [16])0x0;
  sz_11 = strlen((char *)pU8_1);
  if ((int64_t)sz_11 < 0) {
    local_4d = 1;
    func_0x18007ba70();
LAB_1801c40f0:
    local_4c = 1;
    func_0x18007ba70();
LAB_1801c40fd:
    local_4f = 1;
    func_0x18007ba70();
LAB_1801c410a:
    local_4e = 1;
    func_0x18007ba70();
LAB_1801c4117:
    local_49 = 1;
    func_0x18007ba70();
LAB_1801c4124:
    local_50 = 1;
    func_0x18007ba70();
LAB_1801c4131:
    local_4a = 1;
    func_0x18007ba70();
LAB_1801c413e:
    local_51 = 1;
    func_0x18007ba70();
LAB_1801c414b:
    local_53 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_11 < 0x10) {
      pU64_16 = local_a8;
      uVal_17 = 0xf;
    }
    else {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4d = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_4d = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_a8._0_8_ = pU64_16;
    }
    local_98 = (uint32_t)sz_11;
    uStack_94 = (uint32_t)(sz_11 >> 0x20);
    uStack_90 = (uint32_t)uVal_17;
    uStack_8c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_16,pU8_1,sz_11);
    pU64_16[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x73dc) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x73dc) = 1;
      *(uint8_t *)(lVal_13 + 0x73d8) = 1;
      *(uint64_t *)(lVal_13 + 0x73d0) = 0x8deb64111f1e5346;
      func_0x180673140(&LAB_180210b90);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0x73d0);
    if (*(char *)(lVal_13 + 0x73d8) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x8d8f017d7d7f3d23;
      *(uint8_t *)(lVal_13 + 0x73d8) = 0;
    }
    local_d8._0_16_ = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801c40f0;
    if (sz_11 < 0x10) {
      pU64_16 = local_e8;
      uVal_17 = 0xf;
    }
    else {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4c = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_4c = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_e8._0_8_ = pU64_16;
    }
    local_d8._8_8_ = uVal_17;
    local_d8._0_8_ = sz_11;
    func_0x1806aa960(pU64_16,pU64_2,sz_11);
    pU64_16[sz_11] = 0;
    in_stack_fffffffffffffd68 = in_stack_fffffffffffffd68 & 0xffffffffffffff00;
    pU64_16 = local_e8;
    pU64_15 = local_a8;
    func_0x1801ccd70(param_1,pU64_16,pU64_15,param_1 + 8,in_stack_fffffffffffffd68,local_280,0);
    if (0xf < (uint64_t)local_d8._8_8_) {
      uVal_17 = local_d8._8_8_ + 1;
      lVal_13 = local_e8._0_8_;
      if (0xfff < uVal_17) {
        lVal_13 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_13)) goto LAB_1801c40e1;
        uVal_17 = local_d8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_17);
    }
    uVal_17 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVal_17) {
      uVal_12 = uVal_17 + 1;
      lVal_13 = local_a8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801c40e1;
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    local_208 = 0;
    if (DAT_18083f980 != (uint64_t *)0x0) {
      local_208 = (**(func_ptr_t *)*DAT_18083f980)(DAT_18083f980,local_240);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x73e0) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x73e0) = 1;
      *(uint16_t *)(lVal_13 + 0x73dd) = 0x1cb;
      func_0x180673140(&LAB_180210bb0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_1 = (byte *)(lVal_13 + 0x73dd);
    if (*(char *)(lVal_13 + 0x73de) == '\x01') {
      *pU8_1 = *pU8_1 ^ 0xcb;
      *(uint8_t *)(lVal_13 + 0x73de) = 0;
    }
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU8_1);
    if ((int64_t)sz_11 < 0) goto LAB_1801c40fd;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4f = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_4f = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_a8._0_8_ = pU64_15;
    }
    local_98 = (uint32_t)sz_11;
    uStack_94 = (uint32_t)(sz_11 >> 0x20);
    uStack_90 = (uint32_t)uVal_17;
    uStack_8c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_15,pU8_1,sz_11);
    pU64_15[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x73f4) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x73f4) = 1;
      *(uint64_t *)(lVal_13 + 0x73e8) = 0xd45dce3d64590aad;
      *(uint16_t *)(lVal_13 + 0x73f0) = 0x1cb;
      func_0x180673140(&LAB_180210bd0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0x73e8);
    if (*(char *)(lVal_13 + 0x73f1) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xb129a74f0b2f6bcb;
      *(byte *)(lVal_13 + 0x73f0) = *(byte *)(lVal_13 + 0x73f0) ^ 0xcb;
      *(uint8_t *)(lVal_13 + 0x73f1) = 0;
    }
    local_d8._0_16_ = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801c410a;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4e = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_4e = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_e8._0_8_ = pU64_16;
    }
    local_d8._0_8_ = sz_11;
    local_d8._8_8_ = uVal_17;
    func_0x1806aa960(pU64_16,pU64_2,sz_11);
    pU64_16[sz_11] = 0;
    in_stack_fffffffffffffd68 = in_stack_fffffffffffffd68 & 0xffffffffffffff00;
    pU64_16 = local_e8;
    pU64_15 = local_a8;
    func_0x1801ccd70(param_1,pU64_16,pU64_15,(int64_t)param_1 + 0x19,in_stack_fffffffffffffd68,
                  local_240,0);
    uVal_22 = (uint32_t)(in_stack_fffffffffffffd68 >> 0x20);
    if (0xf < (uint64_t)local_d8._8_8_) {
      uVal_17 = local_d8._8_8_ + 1;
      lVal_13 = local_e8._0_8_;
      if (0xfff < uVal_17) {
        lVal_13 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_13)) goto LAB_1801c40e1;
        uVal_17 = local_d8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_17);
    }
    uVal_17 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVal_17) {
      uVal_12 = uVal_17 + 1;
      lVal_13 = local_a8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801c40e1;
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    local_1c8 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_1c8 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_200);
    }
    uVal_4 = *(uint32_t *)(param_1 + 1);
    local_98 = _DAT_1806bd211;
    uStack_94 = _UNK_1806bd215;
    uStack_90 = _UNK_1806bd219;
    local_a8._8_8_ = _UNK_1806bd209;
    local_a8._0_8_ = _DAT_1806bd201;
    uStack_8c = CONCAT13(0xa0,(int3)_UNK_1806bd21d);
    uStack_88 = CONCAT13(uStack_88._3_1_,0xa3d739);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x741c) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x741c) = 1;
      func_0x1801b30c0(lVal_13 + 0x73f5,local_a8);
      func_0x180673140(&LAB_180210c00);
    }
    _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x73f5);
    func_0x180215a50(_Str);
    local_d8._0_16_ = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_11 = strlen(_Str);
    if ((int64_t)sz_11 < 0) goto LAB_1801c4117;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_49 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_49 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_e8._0_8_ = pU64_16;
    }
    local_d8._8_8_ = uVal_17;
    local_d8._0_8_ = sz_11;
    func_0x1806aa960(pU64_16,_Str,sz_11);
    pU64_16[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7428) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x7428) = 1;
      *(uint8_t *)(lVal_13 + 0x7424) = 1;
      *(uint32_t *)(lVal_13 + 0x7420) = 0xb5dada06;
      func_0x180673140(&LAB_180210c30);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_13 + 0x7420);
    if (*(char *)(lVal_13 + 0x7424) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xb5a3bf4d;
      *(uint8_t *)(lVal_13 + 0x7424) = 0;
    }
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_3);
    if ((int64_t)sz_11 < 0) goto LAB_1801c4124;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_50 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_50 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_a8._0_8_ = pU64_15;
    }
    local_98 = (uint32_t)sz_11;
    uStack_94 = (uint32_t)(sz_11 >> 0x20);
    uStack_90 = (uint32_t)uVal_17;
    uStack_8c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_15,pU64_3,sz_11);
    pU64_15[sz_11] = 0;
    pU64_16 = local_a8;
    pU64_15 = local_e8;
    func_0x1801d3800(param_1,pU64_16,pU64_15,param_1 + 1,CONCAT44(uVal_22,uVal_4),local_200,0);
    uVal_17 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVal_17) {
      uVal_12 = uVal_17 + 1;
      lVal_13 = local_a8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801c40e1;
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < (uint64_t)local_d8._8_8_) {
      uVal_17 = local_d8._8_8_ + 1;
      lVal_13 = local_e8._0_8_;
      if (0xfff < uVal_17) {
        lVal_13 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_13)) goto LAB_1801c40e1;
        uVal_17 = local_d8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_17);
    }
    local_188 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_188 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_1c0);
    }
    uStack_88 = _DAT_1806bd244;
    uStack_84 = _UNK_1806bd248;
    uStack_80 = _UNK_1806bd24c;
    uStack_7c = (uint16_t)_UNK_1806bd250;
    local_98 = _DAT_1806bd234;
    uStack_94 = _UNK_1806bd238;
    uStack_90 = _UNK_1806bd23c;
    uStack_8c = _UNK_1806bd240;
    local_a8._8_8_ = _UNK_1806bd22c;
    local_a8._0_8_ = _DAT_1806bd224;
    uStack_7a = 0x6e21;
    uStack_78 = 0x684c53f4;
    uStack_74 = 0xe99f;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7460) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x7460) = 1;
      func_0x1801b5990(lVal_13 + 0x7429,local_a8);
      func_0x180673140(&LAB_180210c50);
    }
    uVal_9 = _UNK_1806b2d3c;
    uVal_8 = _UNK_1806b2d38;
    uVal_7 = _UNK_1806b2d34;
    uVal_6 = _DAT_1806b2d30;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_13 + 0x7429);
    if (*(char *)(lVal_13 + 0x745f) == '\x01') {
      uVal_19 = *(uint *)(lVal_13 + 0x742d) ^ _UNK_1806b2d34;
      uVal_20 = *(uint *)(lVal_13 + 0x7431) ^ _UNK_1806b2d38;
      uVal_21 = *(uint *)(lVal_13 + 0x7435) ^ _UNK_1806b2d3c;
      *pU64_3 = *pU64_3 ^ _DAT_1806b2d30;
      *(uint *)(lVal_13 + 0x742d) = uVal_19;
      *(uint *)(lVal_13 + 0x7431) = uVal_20;
      *(uint *)(lVal_13 + 0x7435) = uVal_21;
      *(uint *)(lVal_13 + 0x7439) = *(uint *)(lVal_13 + 0x7439) ^ uVal_6;
      *(uint *)(lVal_13 + 0x743d) = *(uint *)(lVal_13 + 0x743d) ^ uVal_7;
      *(uint *)(lVal_13 + 0x7441) = *(uint *)(lVal_13 + 0x7441) ^ uVal_8;
      *(uint *)(lVal_13 + 0x7445) = *(uint *)(lVal_13 + 0x7445) ^ uVal_9;
      *(uint *)(lVal_13 + 0x7449) = *(uint *)(lVal_13 + 0x7449) ^ uVal_6;
      *(uint *)(lVal_13 + 0x744d) = *(uint *)(lVal_13 + 0x744d) ^ uVal_7;
      *(uint *)(lVal_13 + 0x7451) = *(uint *)(lVal_13 + 0x7451) ^ uVal_8;
      *(uint *)(lVal_13 + 0x7455) = *(uint *)(lVal_13 + 0x7455) ^ uVal_9;
      *(uint *)(lVal_13 + 0x7459) = *(uint *)(lVal_13 + 0x7459) ^ 0x1b253f8d;
      *(byte *)(lVal_13 + 0x745d) = *(byte *)(lVal_13 + 0x745d) ^ 0xeb;
      *(byte *)(lVal_13 + 0x745e) = *(byte *)(lVal_13 + 0x745e) ^ 0xe9;
      *(uint8_t *)(lVal_13 + 0x745f) = 0;
    }
    local_d8._0_16_ = (uint8_t  [16])0x0;
    local_e8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_3);
    if ((int64_t)sz_11 < 0) goto LAB_1801c4131;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4a = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_4a = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_e8._0_8_ = pU64_15;
    }
    local_d8._8_8_ = uVal_17;
    local_d8._0_8_ = sz_11;
    func_0x1806aa960(pU64_15,pU64_3,sz_11);
    pU64_15[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7474) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x7474) = 1;
      *(uint8_t *)(lVal_13 + 0x7470) = 1;
      *(uint64_t *)(lVal_13 + 0x7468) = 0xf368589725656db;
      func_0x180673140(&LAB_180210c90);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_13 + 0x7468);
    if (*(char *)(lVal_13 + 0x7470) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xf53e9eb1b253f8d;
      *(uint8_t *)(lVal_13 + 0x7470) = 0;
    }
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801c413e;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_51 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_51 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_a8._0_8_ = pU64_16;
    }
    local_98 = (uint32_t)sz_11;
    uStack_94 = (uint32_t)(sz_11 >> 0x20);
    uStack_90 = (uint32_t)uVal_17;
    uStack_8c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_16,pU64_2,sz_11);
    pU64_16[sz_11] = 0;
    pU64_16 = local_a8;
    func_0x1801ccd70(param_1,pU64_16,local_e8,param_1 + 3,1,local_1c0,0);
    uVal_17 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVal_17) {
      uVal_12 = uVal_17 + 1;
      lVal_13 = local_a8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801c40e1;
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < (uint64_t)local_d8._8_8_) {
      uVal_17 = local_d8._8_8_ + 1;
      lVal_13 = local_e8._0_8_;
      if (0xfff < uVal_17) {
        lVal_13 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_13)) goto LAB_1801c40e1;
        uVal_17 = local_d8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_17);
    }
    local_148 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_148 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_180);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7480) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x7480) = 1;
      *(uint8_t *)(lVal_13 + 0x747e) = 1;
      *(uint32_t *)(lVal_13 + 0x7478) = 0xea987265;
      *(uint16_t *)(lVal_13 + 0x747c) = 0x3fc7;
      func_0x180673140(&LAB_180210cb0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_13 + 0x7478);
    if (*(char *)(lVal_13 + 0x747e) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x8feb1737;
      *(byte *)(lVal_13 + 0x747c) = *(byte *)(lVal_13 + 0x747c) ^ 0xb3;
      *(byte *)(lVal_13 + 0x747d) = *(byte *)(lVal_13 + 0x747d) ^ 0x3f;
      *(uint8_t *)(lVal_13 + 0x747e) = 0;
    }
    local_118 = (uint8_t  [16])0x0;
    local_128 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_3);
    if ((int64_t)sz_11 < 0) goto LAB_1801c414b;
    if (sz_11 < 0x10) {
      pU64_15 = local_128;
      uVal_17 = 0xf;
    }
    else {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_53 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_53 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_128._0_8_ = pU64_15;
    }
    local_118._8_8_ = uVal_17;
    local_118._0_8_ = sz_11;
    func_0x1806aa960(pU64_15,pU64_3,sz_11);
    pU64_15[sz_11] = 0;
    local_e8._8_8_ = param_1;
    local_e8._0_8_ = &PTR_LAB_1806be020;
    local_b0 = (int64_t *)local_e8;
    uStack_78 = _DAT_1806bd28a;
    uStack_74 = (uint16_t)_UNK_1806bd28e;
    uStack_72 = (uint16_t)((uint)_UNK_1806bd28e >> 0x10);
    uStack_70 = _UNK_1806bd292;
    uStack_6c = (uint16_t)_UNK_1806bd296;
    uStack_88 = _DAT_1806bd27a;
    uStack_84 = _UNK_1806bd27e;
    uStack_80 = _UNK_1806bd282;
    uStack_7c = (uint16_t)_UNK_1806bd286;
    uStack_7a = (uint16_t)((uint)_UNK_1806bd286 >> 0x10);
    local_98 = _DAT_1806bd26a;
    uStack_94 = _UNK_1806bd26e;
    uStack_90 = _UNK_1806bd272;
    uStack_8c = _UNK_1806bd276;
    local_a8._8_8_ = _UNK_1806bd262;
    local_a8._0_8_ = _DAT_1806bd25a;
    uStack_6a = 0x3be1;
    uStack_68 = 0x3fc0ea9e7b56;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x74c8) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x74c8) = 1;
      func_0x180210ce0(lVal_13 + 0x7481,local_a8);
      func_0x180673140(&LAB_180210ed0);
    }
    uVal_9 = _UNK_1806b2f0c;
    uVal_8 = _UNK_1806b2f08;
    uVal_7 = _UNK_1806b2f04;
    uVal_6 = _DAT_1806b2f00;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_13 + 0x7481);
    if (*(char *)(lVal_13 + 0x74c7) == '\x01') {
      uVal_19 = *(uint *)(lVal_13 + 0x7485) ^ _UNK_1806b2f04;
      uVal_20 = *(uint *)(lVal_13 + 0x7489) ^ _UNK_1806b2f08;
      uVal_21 = *(uint *)(lVal_13 + 0x748d) ^ _UNK_1806b2f0c;
      *pU64_3 = *pU64_3 ^ _DAT_1806b2f00;
      *(uint *)(lVal_13 + 0x7485) = uVal_19;
      *(uint *)(lVal_13 + 0x7489) = uVal_20;
      *(uint *)(lVal_13 + 0x748d) = uVal_21;
      *(uint *)(lVal_13 + 0x7491) = *(uint *)(lVal_13 + 0x7491) ^ uVal_6;
      *(uint *)(lVal_13 + 0x7495) = *(uint *)(lVal_13 + 0x7495) ^ uVal_7;
      *(uint *)(lVal_13 + 0x7499) = *(uint *)(lVal_13 + 0x7499) ^ uVal_8;
      *(uint *)(lVal_13 + 0x749d) = *(uint *)(lVal_13 + 0x749d) ^ uVal_9;
      *(uint *)(lVal_13 + 0x74a1) = *(uint *)(lVal_13 + 0x74a1) ^ uVal_6;
      *(uint *)(lVal_13 + 0x74a5) = *(uint *)(lVal_13 + 0x74a5) ^ uVal_7;
      *(uint *)(lVal_13 + 0x74a9) = *(uint *)(lVal_13 + 0x74a9) ^ uVal_8;
      *(uint *)(lVal_13 + 0x74ad) = *(uint *)(lVal_13 + 0x74ad) ^ uVal_9;
      *(uint *)(lVal_13 + 0x74b1) = *(uint *)(lVal_13 + 0x74b1) ^ uVal_6;
      *(uint *)(lVal_13 + 0x74b5) = *(uint *)(lVal_13 + 0x74b5) ^ uVal_7;
      *(uint *)(lVal_13 + 0x74b9) = *(uint *)(lVal_13 + 0x74b9) ^ uVal_8;
      *(uint *)(lVal_13 + 0x74bd) = *(uint *)(lVal_13 + 0x74bd) ^ uVal_9;
      *(uint *)(lVal_13 + 0x74c1) = *(uint *)(lVal_13 + 0x74c1) ^ 0x8feb1737;
      *(byte *)(lVal_13 + 0x74c5) = *(byte *)(lVal_13 + 0x74c5) ^ 0xb3;
      *(byte *)(lVal_13 + 0x74c6) = *(byte *)(lVal_13 + 0x74c6) ^ 0x3f;
      *(uint8_t *)(lVal_13 + 0x74c7) = 0;
    }
    local_f8 = (uint8_t  [16])0x0;
    local_108 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_3);
    if (-1 < (int64_t)sz_11) {
      if (sz_11 < 0x10) {
        pU64_15 = local_108;
        uVal_17 = 0xf;
      }
      else {
        uVal_12 = sz_11 | 0xf;
        uVal_17 = 0x16;
        if (0x16 < uVal_12) {
          uVal_17 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          local_4b = 1;
          pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
        }
        else {
          local_4b = 1;
          lVal_13 = func_0x180672de0(uVal_17 + 0x28);
          pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_15 + -8) = lVal_13;
        }
        local_108._0_8_ = pU64_15;
      }
      local_f8._8_8_ = uVal_17;
      local_f8._0_8_ = sz_11;
      func_0x1806aa960(pU64_15,pU64_3,sz_11);
      pU64_15[sz_11] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x74e0) == '\0') {
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_13 + 0x74e0) = 1;
        uVal_10 = _UNK_1806bafa8;
        *(uint64_t *)(lVal_13 + 0x74d0) = _DAT_1806bafa0;
        *(uint64_t *)(lVal_13 + 0x74d8) = uVal_10;
        func_0x180673140(&LAB_180210f10);
      }
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str_00 = (uint8_t (*)[16])(lVal_13 + 0x74d0);
      if (*(char *)(lVal_13 + 0x74df) == '\x01') {
        uVal_22 = *(uint32_t *)(lVal_13 + 0x74d8);
        auArr_18 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_22 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_22 >> 0x10),uVal_22)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_13 + 0x74dd) >> 8)),
                                                  (char)((uint)uVal_22 >> 8)),
                                          CONCAT11((char)*(uint16_t *)(lVal_13 + 0x74dd),
                                                   (char)uVal_22))),_DAT_1806ae110);
        auArr_18._8_8_ =
             auArr_18._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_13 + 0x74dc) << 0x20;
        auArr_18 = pblendw(auArr_18,*_Str_00,0xf);
        *_Str_00 = auArr_18 ^ _DAT_1806bafb0;
      }
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_a8 = (uint8_t  [16])0x0;
      sz_11 = strlen((char *)_Str_00);
      if (-1 < (int64_t)sz_11) {
        uVal_17 = 0xf;
        if (0xf < sz_11) {
          uVal_12 = sz_11 | 0xf;
          uVal_17 = 0x16;
          if (0x16 < uVal_12) {
            uVal_17 = uVal_12;
          }
          if (uVal_12 < 0xfff) {
            local_52 = 1;
            pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
          }
          else {
            local_52 = 1;
            lVal_13 = func_0x180672de0(uVal_17 + 0x28);
            pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_16 + -8) = lVal_13;
          }
          local_a8._0_8_ = pU64_16;
        }
        local_98 = (uint32_t)sz_11;
        uStack_94 = (uint32_t)(sz_11 >> 0x20);
        uStack_90 = (uint32_t)uVal_17;
        uStack_8c = (uint32_t)(uVal_17 >> 0x20);
        func_0x1806aa960(pU64_16,_Str_00,sz_11);
        pU64_16[sz_11] = 0;
        func_0x1801ccb00(param_1,local_a8,local_108,local_e8,local_128,local_180,0);
        uVal_17 = CONCAT44(uStack_8c,uStack_90);
        if (0xf < uVal_17) {
          uVal_12 = uVal_17 + 1;
          lVal_13 = local_a8._0_8_;
          if (0xfff < uVal_12) {
            lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801c40e1;
            uVal_12 = uVal_17 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_12);
        }
        if (0xf < (uint64_t)local_f8._8_8_) {
          uVal_17 = local_f8._8_8_ + 1;
          lVal_13 = local_108._0_8_;
          if (0xfff < uVal_17) {
            lVal_13 = *(int64_t *)(local_108._0_8_ + -8);
            if (0x1f < (uint64_t)((local_108._0_8_ + -8) - lVal_13)) goto LAB_1801c40e1;
            uVal_17 = local_f8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_17);
        }
        if (local_b0 != (int64_t *)0x0) {
          (**(func_ptr_t *)(*local_b0 + 0x20))(local_b0,local_b0 != (int64_t *)local_e8);
        }
        if (0xf < (uint64_t)local_118._8_8_) {
          uVal_17 = local_118._8_8_ + 1;
          lVal_13 = local_128._0_8_;
          if (0xfff < uVal_17) {
            lVal_13 = *(int64_t *)(local_128._0_8_ + -8);
            if (0x1f < (uint64_t)((local_128._0_8_ + -8) - lVal_13)) {
LAB_1801c40e1:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_17 = local_118._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_17);
        }
        param_1[2] = 0;
        return param_1;
      }
      goto LAB_1801c4165;
    }
  }
  local_4b = 1;
  func_0x18007ba70();
LAB_1801c4165:
  local_52 = 1;
  func_0x18007ba70();
  fnPtr_5 = (func_ptr_t )swi(3);
  pU64_14 = (uint64_t *)(*fnPtr_5)();
  return pU64_14;
}

// Unwind@1801c4180
void Unwind_1801c4180(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x70);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x38));
    *(uint64_t *)(param_2 + 0x70) = 0;
  }
  return;
}
