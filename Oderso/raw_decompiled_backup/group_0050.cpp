#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@180470690
void Unwind_180470690(void)
{
  func_0x180672f60(&DAT_180841710);
  return;
}

// Unwind@1804706c0
void Unwind_1804706c0(void)
{
  func_0x180672f60(&DAT_180841700);
  return;
}

// Unwind@1804706f0
void Unwind_1804706f0(void)
{
  func_0x180672f60(&DAT_1808416f0);
  return;
}

// Unwind@1804708a0
void Unwind_1804708a0(void)
{
  func_0x180672f60(&DAT_1808414d0);
  return;
}

// Unwind@180470b10
void Unwind_180470b10(void)
{
  func_0x180672f60(&DAT_1808414b0);
  return;
}

// Unwind@180470c90
void Unwind_180470c90(void)
{
  func_0x180672f60(&DAT_1808412a8);
  return;
}

// Unwind@180471160
void Unwind_180471160(void)
{
  func_0x180672f60(&DAT_180841520);
  return;
}

// Unwind@180471380
void Unwind_180471380(void)
{
  func_0x180672f60(&DAT_1808415c0);
  return;
}

// Unwind@180471650
void Unwind_180471650(void)
{
  func_0x180672f60(&DAT_180841560);
  return;
}

// Unwind@1804729b0
void Unwind_1804729b0(void)
{
  func_0x180672f60(&DAT_180841278);
  return;
}

// Unwind@180472a40
void Unwind_180472a40(void)
{
  func_0x180672f60(&DAT_180841268);
  return;
}

// Unwind@180472ad0
void Unwind_180472ad0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15f8c) = 0;
  return;
}

// Unwind@180472b70
void Unwind_180472b70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180472c00
void Unwind_180472c00(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x90);
  return;
}

// Unwind@180472c90
void Unwind_180472c90(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xc0);
  return;
}

// Unwind@180472d20
void Unwind_180472d20(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x48);
  return;
}

// Unwind@180472db0
void Unwind_180472db0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xc0);
  return;
}

// Unwind@180472e40
void Unwind_180472e40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180472ed0
void Unwind_180472ed0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180472f60
void Unwind_180472f60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180472ff0
void Unwind_180472ff0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180473d10
void Unwind_180473d10(void)
{
  func_0x180672f60(&DAT_180841358);
  return;
}

// Unwind@180473d60
void Unwind_180473d60(void)
{
  func_0x180672f60(&DAT_180841368);
  return;
}

// Unwind@180473db0
void Unwind_180473db0(void)
{
  func_0x180672f60(&DAT_180841378);
  return;
}

// Unwind@180473e00
void Unwind_180473e00(void)
{
  func_0x180672f60(&DAT_180841388);
  return;
}

// Unwind@180473e50
void Unwind_180473e50(void)
{
  func_0x180672f60(&DAT_180841398);
  return;
}

// Unwind@180473ea0
void Unwind_180473ea0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180473ee0
void Unwind_180473ee0(uint64_t param_1,int64_t param_2)
{
  int *pInt_1;
  int64_t *pLong_2;
  
  func_0x18001deb0(param_2 + 0x40);
  pLong_2 = *(int64_t **)(param_2 + 0x28);
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

// Unwind@180473f40
void Unwind_180473f40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180473f80
void Unwind_180473f80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1609c) = 0;
  return;
}

// Unwind@180473fe0
void Unwind_180473fe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180474020
void Unwind_180474020(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x160b4) = 0;
  return;
}

// Unwind@180474080
void Unwind_180474080(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1804740c0
void Unwind_1804740c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1804743b0
void Unwind_1804743b0(void)
{
  func_0x180672f60(&DAT_180841680);
  return;
}

// Unwind@180474c80
void Unwind_180474c80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15ba0) = 0;
  return;
}

// Unwind@180474cd0
void Unwind_180474cd0(void)
{
  func_0x180672f60(&DAT_18083f8f0);
  return;
}

// Unwind@180474d10
void Unwind_180474d10(uint64_t param_1,int64_t param_2)
{
  func_0x18018a6c0(param_2 + 0x50);
  func_0x18001deb0(param_2 + 0x40);
  return;
}

// Unwind@180475060
void Unwind_180475060(void)
{
  func_0x180672f60(&DAT_1808415a0);
  return;
}

// Unwind@180475330
void Unwind_180475330(void)
{
  func_0x180672f60(&DAT_180841550);
  return;
}

// Unwind@1804761a0
void Unwind_1804761a0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x170);
  return;
}

// Unwind@180476210
void Unwind_180476210(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180476280
void Unwind_180476280(uint64_t param_1,int64_t param_2)
{
  func_0x1800d1af0(param_2 + 0x40);
  return;
}

// Unwind@180476560
void Unwind_180476560(void)
{
  func_0x180672f60(&DAT_1808416d0);
  return;
}

// Unwind@1804768b0
void Unwind_1804768b0(void)
{
  func_0x180672f60(&DAT_1808413e8);
  return;
}

// Unwind@180476900
void Unwind_180476900(void)
{
  func_0x180672f60(&DAT_1808413f8);
  return;
}

// Unwind@180476950
void Unwind_180476950(void)
{
  func_0x180672f60(&DAT_180841418);
  return;
}

// Unwind@180476b90
void Unwind_180476b90(void)
{
  func_0x180672f60(&DAT_180841130);
  return;
}

// Unwind@180476bd0
void Unwind_180476bd0(void)
{
  func_0x180672f60(&DAT_180841140);
  return;
}

// Unwind@180476c10
void Unwind_180476c10(void)
{
  func_0x180672f60(&DAT_180841150);
  return;
}

// Unwind@180476df0
void Unwind_180476df0(void)
{
  func_0x180672f60(&DAT_180841170);
  return;
}

// Unwind@180476e30
void Unwind_180476e30(void)
{
  func_0x180672f60(&DAT_180841160);
  return;
}

// Unwind@180478280
void Unwind_180478280(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1804782b0
void Unwind_1804782b0(void)
{
  func_0x180672f60(&DAT_1808411d0);
  return;
}

// Unwind@180478300
void Unwind_180478300(void)
{
  func_0x180672f60(&DAT_1808411e0);
  return;
}

// Unwind@180478350
void Unwind_180478350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@180478390
void Unwind_180478390(void)
{
  func_0x180672f60(&DAT_180841208);
  return;
}

// Unwind@1804783e0
void Unwind_1804783e0(uint64_t param_1,int64_t param_2)
{
  func_0x1800c22f0(param_2 + 0x50);
  return;
}

// Unwind@180478420
void Unwind_180478420(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@180478460
void Unwind_180478460(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1804784b0
void Unwind_1804784b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800d5f50(param_2 + 0x50);
  return;
}

// Unwind@1804784f0
void Unwind_1804784f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@180478540
void Unwind_180478540(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  *(uint8_t *)(param_2 + 0x227) = 0;
  return;
}

// Unwind@180478590
void Unwind_180478590(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x227) == '\x01') {
    func_0x180001e70(param_2 + 0x160);
  }
  return;
}

// Unwind@180478890
void Unwind_180478890(void)
{
  func_0x180672f60(&DAT_1808412e8);
  return;
}

// Unwind@1804788d0
void Unwind_1804788d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@180478910
void Unwind_180478910(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15ff0) = 0;
  return;
}

// Unwind@180478d70
void Unwind_180478d70(void)
{
  func_0x180672f60(&DAT_180841438);
  return;
}

// Unwind@18047cdc0
void Unwind_18047cdc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  return;
}

// Unwind@18047ce10
void Unwind_18047ce10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  return;
}

// Unwind@18047ce60
void Unwind_18047ce60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 0x387) = 0;
  return;
}

// Unwind@18047ceb0
void Unwind_18047ceb0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x387) == '\x01') {
    func_0x180001e70(param_2 + 0x80);
  }
  return;
}

// Unwind@18047cf00
void Unwind_18047cf00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  return;
}

// Unwind@18047cf50
void Unwind_18047cf50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  return;
}

// Unwind@18047cfa0
void Unwind_18047cfa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  return;
}

// Unwind@18047cff0
void Unwind_18047cff0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  return;
}

// Unwind@18047d040
void Unwind_18047d040(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  return;
}

// Unwind@18047d090
void Unwind_18047d090(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 900) = 0;
  return;
}

// Unwind@18047d0e0
void Unwind_18047d0e0(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 900);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0xc0);
  }
  *(char *)(param_2 + 899) = ch_1;
  return;
}

// Unwind@18047d140
void Unwind_18047d140(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 899) == '\x01') {
    func_0x180001e70(param_2 + 0xa0);
  }
  return;
}

// Unwind@18047d190
void Unwind_18047d190(void)
{
  func_0x180676070(&DAT_180840a98);
  return;
}

// Unwind@18047d1e0
void Unwind_18047d1e0(uint64_t param_1,int64_t param_2)
{
  func_0x180497e30(param_2 + 0x1d8);
  return;
}

// Unwind@18047d230
void Unwind_18047d230(void)
{
  func_0x180672f60(&DAT_1808413b8);
  return;
}

// Unwind@18047d280
void Unwind_18047d280(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  return;
}

// Unwind@18047d2d0
void Unwind_18047d2d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@18047d320
void Unwind_18047d320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  return;
}

// Unwind@18047d370
void Unwind_18047d370(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  return;
}

// Unwind@18047d3c0
void Unwind_18047d3c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  return;
}

// Unwind@18047d410
void Unwind_18047d410(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 0x382) = 0;
  return;
}

// Unwind@18047d460
void Unwind_18047d460(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x382);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x100);
  }
  *(char *)(param_2 + 0x381) = ch_1;
  return;
}

// Unwind@18047d4c0
void Unwind_18047d4c0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x381) == '\x01') {
    func_0x180001e70(param_2 + 0xe0);
  }
  return;
}

// Unwind@18047d510
void Unwind_18047d510(void)
{
  func_0x180676070(&DAT_180840a98);
  return;
}

// Unwind@18047d560
void Unwind_18047d560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  return;
}

// Unwind@18047d5b0
void Unwind_18047d5b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  return;
}

// Unwind@18047d600
void Unwind_18047d600(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  return;
}

// Unwind@18047d650
void Unwind_18047d650(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  return;
}

// Unwind@18047d6a0
void Unwind_18047d6a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 0x386) = 0;
  return;
}

// Unwind@18047d6f0
void Unwind_18047d6f0(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x386);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x140);
  }
  *(char *)(param_2 + 0x380) = ch_1;
  return;
}

// Unwind@18047d750
void Unwind_18047d750(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x380) == '\x01') {
    func_0x180001e70(param_2 + 0x120);
  }
  return;
}

// Unwind@18047d7a0
void Unwind_18047d7a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 0x385) = 0;
  return;
}

// Unwind@18047d7f0
void Unwind_18047d7f0(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x385);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x180);
  }
  *(char *)(param_2 + 0x37f) = ch_1;
  return;
}

// Unwind@18047d850
void Unwind_18047d850(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x37f) == '\x01') {
    func_0x180001e70(param_2 + 0x160);
  }
  return;
}

// Unwind@18047d8a0
void Unwind_18047d8a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  return;
}

// Unwind@18047d8f0
void Unwind_18047d8f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  return;
}

// Unwind@18047d940
void Unwind_18047d940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  return;
}

// Unwind@18047d990
void Unwind_18047d990(uint64_t param_1,int64_t param_2)
{
  func_0x180497e30(param_2 + 0x1d8);
  return;
}

// Unwind@18047d9e0
void Unwind_18047d9e0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x1d8);
  return;
}

// Unwind@18047da30
void Unwind_18047da30(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16150) = 0;
  *(uint8_t *)(param_2 + 0x387) = 1;
  return;
}

// Unwind@18047da90
void Unwind_18047da90(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16178) = 0;
  return;
}

// Unwind@18047daf0
void Unwind_18047daf0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16218) = 0;
  return;
}

// Unwind@18047db50
void Unwind_18047db50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16240) = 0;
  *(uint8_t *)(param_2 + 0x386) = 1;
  return;
}

// Unwind@18047dbb0
void Unwind_18047dbb0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16268) = 0;
  *(uint8_t *)(param_2 + 0x385) = 1;
  return;
}

// Unwind@18047dc10
void Unwind_18047dc10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  return;
}

// Unwind@18047ddb0
void Unwind_18047ddb0(void)
{
  func_0x180672f60(&DAT_180841448);
  return;
}

// Unwind@18047def0
void Unwind_18047def0(void)
{
  func_0x180672f60(&DAT_180841510);
  return;
}

// Unwind@18047e120
void Unwind_18047e120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18047e160
void Unwind_18047e160(void)
{
  func_0x180672f60(&DAT_180841238);
  return;
}

// Unwind@18047e4d0
void Unwind_18047e4d0(void)
{
  func_0x180672f60(&DAT_180841258);
  return;
}

// Unwind@18047e510
void Unwind_18047e510(void)
{
  func_0x180672f60(&DAT_180841248);
  return;
}

// Unwind@18047e7f0
void Unwind_18047e7f0(void)
{
  func_0x180672f60(&DAT_180841580);
  return;
}

// Unwind@18047ef80
void Unwind_18047ef80(void)
{
  func_0x180672f60(&DAT_1808413c8);
  return;
}

// Unwind@18047f170
void Unwind_18047f170(void)
{
  func_0x180672f60(&DAT_1808414c0);
  return;
}

// Unwind@18047f420
void Unwind_18047f420(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0xe8),1);
  return;
}

// Unwind@18047f470
void Unwind_18047f470(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  if (*(int *)(param_2 + 0xf8) == 0) {
    return;
  }
  func_0x18068d0ec();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18047f590
void Unwind_18047f590(void)
{
  func_0x180672f60(&DAT_180841458);
  return;
}

// Unwind@18047f970
void Unwind_18047f970(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18047f9b0
void Unwind_18047f9b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@18047f9f0
void Unwind_18047f9f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x16318) = 0;
  return;
}

// Unwind@180480380
void Unwind_180480380(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1804803c0
void Unwind_1804803c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180480400
void Unwind_180480400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180480440
void Unwind_180480440(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1633c) = 0;
  return;
}

// Unwind@180480550
void Unwind_180480550(void)
{
  func_0x180672f60(&DAT_1808411a0);
  return;
}

// Unwind@1804806a0
void Unwind_1804806a0(void)
{
  func_0x180672f60(&DAT_1808414f0);
  return;
}

// Unwind@180486010
void Unwind_180486010(void)
{
  func_0x180672f60(&DAT_180841028);
  return;
}

// Unwind@1804860f0
void Unwind_1804860f0(void)
{
  func_0x180672f60(&DAT_1808410a0);
  return;
}

// Unwind@1804861d0
void Unwind_1804861d0(void)
{
  func_0x180672f60(&DAT_1808410f0);
  return;
}

// Unwind@1804862b0
void Unwind_1804862b0(void)
{
  func_0x180672f60(&DAT_1808410b0);
  return;
}

// Unwind@180486390
void Unwind_180486390(void)
{
  func_0x180672f60(&DAT_180841010);
  return;
}

// Unwind@180486470
void Unwind_180486470(void)
{
  func_0x180672f60(&DAT_180841018);
  return;
}

// Unwind@180486550
void Unwind_180486550(void)
{
  func_0x180672f60(&DAT_180841000);
  return;
}

// Unwind@180486630
void Unwind_180486630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180486710
void Unwind_180486710(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@180486800
void Unwind_180486800(void)
{
  func_0x180672f60(&DAT_180841050);
  return;
}

// Unwind@1804868e0
void Unwind_1804868e0(void)
{
  func_0x180672f60(&DAT_180841078);
  return;
}

// Unwind@1804869d0
void Unwind_1804869d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15b58) = 0;
  return;
}

// Unwind@180486ac0
void Unwind_180486ac0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15acc) = 0;
  return;
}

// Unwind@180486bb0
void Unwind_180486bb0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15a28) = 0;
  return;
}

// Unwind@180486cb0
void Unwind_180486cb0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15a10) = 0;
  return;
}

// Unwind@180486db0
void Unwind_180486db0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15ab8) = 0;
  return;
}

// Unwind@180486ea0
void Unwind_180486ea0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@180486f80
void Unwind_180486f80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180487060
void Unwind_180487060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180487140
void Unwind_180487140(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 800);
  return;
}

// Unwind@180487220
void Unwind_180487220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180487300
void Unwind_180487300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@1804873e0
void Unwind_1804873e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  return;
}

// Unwind@1804874d0
void Unwind_1804874d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  return;
}

// Unwind@1804875c0
void Unwind_1804875c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  return;
}

// Unwind@1804876b0
void Unwind_1804876b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@180487790
void Unwind_180487790(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180487810
void Unwind_180487810(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180487890
void Unwind_180487890(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180487970
void Unwind_180487970(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  return;
}

// Unwind@180487a50
void Unwind_180487a50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@180487b30
void Unwind_180487b30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  return;
}

// Unwind@180487c20
void Unwind_180487c20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2d0);
  return;
}

// Unwind@180487d00
void Unwind_180487d00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x356) = 0;
  return;
}

// Unwind@180487df0
void Unwind_180487df0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  func_0x180001e70(param_2 + 0x2f0);
  return;
}

// Unwind@180487ee0
void Unwind_180487ee0(uint64_t param_1,int64_t param_2)
{
  if (*(int *)(param_2 + 0x1b8) == 2) {
    func_0x180001e70(param_2 + 0x1c0);
  }
  *(uint8_t *)(param_2 + 0x357) = *(uint8_t *)(param_2 + 0x310);
  return;
}

// Unwind@180487fe0
void Unwind_180487fe0(uint64_t param_1,int64_t param_2)
{
  func_0x1800c22f0(param_2 + 0x80);
  return;
}

// Unwind@1804880c0
void Unwind_1804880c0(uint64_t param_1,int64_t param_2)
{
  func_0x1800c22f0(param_2 + 0x1c0);
  return;
}

// Unwind@1804881a0
void Unwind_1804881a0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x356) == '\x01') {
    func_0x180001e70(param_2 + 0x60);
  }
  return;
}

// Unwind@180488290
void Unwind_180488290(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2f0);
  return;
}

// Unwind@180488370
void Unwind_180488370(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 800);
  return;
}

// Unwind@180488450
void Unwind_180488450(void)
{
  return;
}

// Unwind@180488530
void Unwind_180488530(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180488610
void Unwind_180488610(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@1804886f0
void Unwind_1804886f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x2f0);
  return;
}

// Unwind@1804887e0
void Unwind_1804887e0(uint64_t param_1,int64_t param_2)
{
  func_0x180174420(param_2 + 800);
  return;
}

// Unwind@1804891c0
void Unwind_1804891c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@180489200
void Unwind_180489200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@180489240
void Unwind_180489240(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180489280
void Unwind_180489280(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x163b4) = 0;
  return;
}

// Unwind@180489790
void Unwind_180489790(void)
{
  func_0x180672f60(&DAT_1808415b0);
  return;
}

// Unwind@1804898f0
void Unwind_1804898f0(void)
{
  func_0x180672f60(&DAT_1808411b0);
  return;
}

// Unwind@180489920
void Unwind_180489920(void)
{
  func_0x180672f60(&DAT_1808411c0);
  return;
}

// Unwind@18048a100
void Unwind_18048a100(void)
{
  func_0x180672f60(&DAT_1808413a8);
  return;
}

// Unwind@18048a140
void Unwind_18048a140(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18048a180
void Unwind_18048a180(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  *(uint8_t *)(param_2 + 0x8f) = 0;
  return;
}

// Unwind@18048a1c0
void Unwind_18048a1c0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x8f) == '\x01') {
    func_0x180001e70(param_2 + 0x40);
  }
  return;
}

// Unwind@18048a200
void Unwind_18048a200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18048a4e0
void Unwind_18048a4e0(void)
{
  func_0x180672f60(&DAT_180841590);
  return;
}

// Unwind@18048a520
void Unwind_18048a520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@18048a600
void Unwind_18048a600(void)
{
  func_0x180672f60(&DAT_1808414e0);
  return;
}

// Unwind@18048a8e0
void Unwind_18048a8e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18048a930
void Unwind_18048a930(void)
{
  func_0x180672f60(&DAT_180841228);
  return;
}

// Unwind@18048b5f0
void Unwind_18048b5f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18048b640
void Unwind_18048b640(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18048b690
void Unwind_18048b690(uint64_t param_1,int64_t param_2)
{
  func_0x1804feb40(param_2 + 0xd0);
  return;
}

// Unwind@18048b6e0
void Unwind_18048b6e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18048b730
void Unwind_18048b730(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18048b780
void Unwind_18048b780(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x178d8) = 0;
  return;
}

// Unwind@18048b7e0
void Unwind_18048b7e0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x17908) = 0;
  return;
}

// Unwind@18048b900
void Unwind_18048b900(void)
{
  func_0x180672f60(&DAT_1808413d8);
  return;
}

// Unwind@18048c2d0
void Unwind_18048c2d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@18048c310
void Unwind_18048c310(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@18048c350
void Unwind_18048c350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@18048c390
void Unwind_18048c390(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@18048c3d0
void Unwind_18048c3d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@18048c410
void Unwind_18048c410(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1653c) = 0;
  return;
}

// Unwind@18048c460
void Unwind_18048c460(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18048c570
void Unwind_18048c570(void)
{
  func_0x180672f60(&DAT_180841348);
  return;
}

// Unwind@18048c7f0
void Unwind_18048c7f0(void)
{
  func_0x180672f60(&DAT_180841660);
  return;
}

// Unwind@18048c830
void Unwind_18048c830(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x30);
  return;
}

// Unwind@18048cb10
void Unwind_18048cb10(void)
{
  func_0x180672f60(&DAT_180841570);
  return;
}

// Unwind@18048cf40
void Unwind_18048cf40(void)
{
  func_0x180672f60(&DAT_180841500);
  return;
}

// Unwind@18048d6b0
void Unwind_18048d6b0(void)
{
  func_0x180672f60(&DAT_180841670);
  return;
}

// Unwind@18048d6f0
void Unwind_18048d6f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@18048d730
void Unwind_18048d730(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@18048d770
void Unwind_18048d770(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@18048d7b0
void Unwind_18048d7b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18048d8c0
void Unwind_18048d8c0(void)
{
  func_0x180672f60(&DAT_180841530);
  return;
}

// Unwind@18048dbd0
void Unwind_18048dbd0(void)
{
  func_0x180672f60(&DAT_180841540);
  return;
}

// Unwind@18048de60
void Unwind_18048de60(void)
{
  func_0x180672f60(&DAT_180841190);
  return;
}

// Unwind@18048df30
void Unwind_18048df30(void)
{
  func_0x180672f60(&DAT_180841600);
  return;
}

// func_0x18048e000
void func_0x18048e000(void)
{
  int64_t lVal_1;
  
  func_0x18063eee0(0);
  lVal_1 = DAT_18083ea78;
  func_0x18008d7b0(&DAT_18083ea78,&DAT_18083ea78,*(uint64_t *)(DAT_18083ea78 + 8));
  *(int64_t *)(lVal_1 + 8) = lVal_1;
  *(int64_t *)lVal_1 = lVal_1;
  *(int64_t *)(lVal_1 + 0x10) = lVal_1;
  DAT_18083ea80 = 0;
  return;
}

// func_0x18048e050
void func_0x18048e050(void)
{
  func_0x18063ed10(0);
  return;
}

// func_0x18048e060
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18048e060(int64_t **param_1,uint64_t *param_2)
{
  char *_Str;
  uint64_t *pU64_1;
  int64_t **ptr2_Long_2;
  int64_t *pLong_3;
  uint64_t uVal_4;
  func_ptr_t fnPtr_5;
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint8_t uVal_11;
  int64_t **ptr2_Long_12;
  char ch_13;
  int iVal_14;
  uint8_t *pU64_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  uint64_t uVal_18;
  int64_t *pLong_19;
  int64_t **ptr2_Long_20;
  uint8_t (*pArr16_21)[16];
  size_t sz_22;
  int64_t **ptr2_Long_23;
  int64_t *pLong_24;
  int64_t *pLong_25;
  int64_t lVal_26;
  uint8_t *pU64_27;
  uint64_t uVal_28;
  uint64_t uVal_29;
  uint8_t *pU64_30;
  int64_t **ptr2_Long_31;
  uint64_t uVal_32;
  bool bFlag_33;
  uint32_t local_1e8;
  uint32_t uStack_1e4;
  uint32_t uStack_1e0;
  uint32_t uStack_1dc;
  uint32_t local_1d8;
  uint32_t uStack_1d4;
  uint32_t uStack_1d0;
  uint32_t uStack_1cc;
  uint32_t local_1c8;
  uint32_t uStack_1c4;
  uint32_t uStack_1c0;
  uint32_t uStack_1bc;
  uint32_t local_188;
  uint32_t uStack_184;
  uint32_t uStack_180;
  uint32_t uStack_17c;
  uint8_t local_178 [16];
  uint8_t local_168 [16];
  uint8_t local_158 [16];
  uint8_t local_148 [16];
  uint8_t local_138 [16];
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t local_108 [16];
  uint8_t local_f8 [16];
  uint8_t local_e8 [16];
  uint8_t local_d8 [16];
  uint8_t (*local_c8)[16];
  uint8_t local_b8 [16];
  uint64_t local_a8;
  uint64_t local_a0;
  int64_t **local_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint8_t local_63;
  uint8_t local_62;
  uint8_t local_61;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  uVal_32 = param_2[2];
  if (uVal_32 == 0) {
    return;
  }
  local_d8 = ZEXT816(0);
  local_c8 = (uint8_t (*)[16])0x0;
  local_b8 = ZEXT816(0);
  uVal_29 = uVal_32 - 1;
  if ((int64_t)uVal_29 < 0) {
LAB_18048f1e0:
    func_0x18007ba70();
LAB_18048f1e6:
    func_0x1800801d0();
LAB_18048f1ec:
    func_0x18007ba70();
LAB_18048f1f2:
    func_0x18007ba70();
LAB_18048f1f8:
    func_0x18007ba70();
LAB_18048f1fe:
    local_61 = 1;
    func_0x18007ba70();
LAB_18048f20b:
    local_63 = 1;
    func_0x18007ba70();
  }
  else {
    pU64_1 = (uint64_t *)*param_2;
    uVal_28 = param_2[3];
    local_90 = param_1;
    if (uVal_32 < 0x11) {
      pU64_27 = local_b8;
      uVal_32 = 0xf;
    }
    else {
      uVal_16 = uVal_29 | 0xf;
      uVal_32 = 0x16;
      if (0x16 < uVal_16) {
        uVal_32 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        pU64_27 = (uint8_t *)func_0x180672de0(uVal_32 + 1);
      }
      else {
        lVal_26 = func_0x180672de0(uVal_32 + 0x28);
        pU64_27 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_27 + -8) = lVal_26;
      }
      local_b8._0_8_ = pU64_27;
    }
    if (0xf < uVal_28) {
      param_2 = pU64_1;
    }
    local_a8 = uVal_29;
    local_a0 = uVal_32;
    func_0x1806aa960(pU64_27,(int64_t)param_2 + 1,uVal_29);
    pU64_27[uVal_29] = 0;
    if (local_a8 == 0) {
      lVal_26 = -1;
    }
    else {
      if (local_a0 < 0x10) {
        pU64_27 = local_b8;
      }
      else {
        pU64_27 = (uint8_t *)local_b8._0_8_;
      }
      pU64_30 = pU64_27 + local_a8;
      pU64_15 = (uint8_t *)thunk_FUN_180676460(pU64_27,pU64_30,0x20);
      lVal_26 = -1;
      if (pU64_15 != pU64_30) {
        lVal_26 = (int64_t)pU64_15 - (int64_t)pU64_27;
      }
    }
    uVal_32 = 0;
    while (uVal_29 = local_a0, pU64_27 = (uint8_t *)local_b8._0_8_, lVal_26 != -1) {
      _local_88 = ZEXT816(0);
      if (local_a8 < uVal_32) {
        func_0x1800801d0();
LAB_18048f1da:
        func_0x18007ba70();
        goto LAB_18048f1e0;
      }
      pU64_15 = (uint8_t *)(lVal_26 - uVal_32);
      if ((uint8_t *)(local_a8 - uVal_32) < (uint8_t *)(lVal_26 - uVal_32)) {
        pU64_15 = (uint8_t *)(local_a8 - uVal_32);
      }
      if ((int64_t)pU64_15 < 0) goto LAB_18048f1da;
      uVal_28 = 0xf;
      pU64_30 = local_88;
      if (&DAT_0000000f < pU64_15) {
        uVal_16 = (uint64_t)pU64_15 | 0xf;
        uVal_28 = uVal_16;
        if (uVal_16 < 0x17) {
          uVal_28 = 0x16;
        }
        if (uVal_16 < 0xfff) {
          pU64_30 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
        }
        else {
          lVal_17 = func_0x180672de0(uVal_28 + 0x28);
          pU64_30 = (uint8_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_30 + -8) = lVal_17;
        }
        local_88 = (uint8_t  [8])pU64_30;
      }
      if (uVal_29 < 0x10) {
        pU64_27 = local_b8;
      }
      local_78 = SUB84(pU64_15,0);
      uStack_74 = (uint32_t)((uint64_t)pU64_15 >> 0x20);
      uStack_70 = (uint32_t)uVal_28;
      uStack_6c = (uint32_t)(uVal_28 >> 0x20);
      func_0x1806aa960(pU64_30,pU64_27 + uVal_32,pU64_15);
      pU64_30[(int64_t)pU64_15] = 0;
      if ((uint8_t (*)[16])local_d8._8_8_ == local_c8) {
        func_0x180084390(local_d8,local_d8._8_8_,local_88);
        uVal_32 = CONCAT44(uStack_6c,uStack_70);
        if (0xf < uVal_32) {
          uVal_29 = uVal_32 + 1;
          lVal_17 = (int64_t)local_88;
          if (0xfff < uVal_29) {
            lVal_17 = *(int64_t *)((int64_t)local_88 + -8);
            if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - lVal_17))) goto LAB_18048ed76;
            uVal_29 = uVal_32 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_17,uVal_29);
        }
      }
      else {
        *(uint8_t (*)[16])(local_d8._8_8_ + 0x10) = ZEXT816(0);
        *(uint8_t (*)[16])local_d8._8_8_ = ZEXT816(0);
        *(uint32_t *)(uint8_t *)local_d8._8_8_ = local_88._0_4_;
        *(uint32_t *)((uint8_t *)local_d8._8_8_ + 4) = local_88._4_4_;
        *(uint32_t *)((uint8_t *)local_d8._8_8_ + 8) = (uint32_t)uStack_80;
        *(uint32_t *)((uint8_t *)local_d8._8_8_ + 0xc) = uStack_80._4_4_;
        *(uint32_t *)*(uint8_t (*)[16])(local_d8._8_8_ + 0x10) = local_78;
        *(uint32_t *)(*(uint8_t (*)[16])(local_d8._8_8_ + 0x10) + 4) = uStack_74;
        *(uint32_t *)(*(uint8_t (*)[16])(local_d8._8_8_ + 0x10) + 8) = uStack_70;
        *(uint32_t *)(*(uint8_t (*)[16])(local_d8._8_8_ + 0x10) + 0xc) = uStack_6c;
        local_d8._8_8_ = (uint8_t (*)[16])(local_d8._8_8_ + 0x20);
      }
      uVal_32 = lVal_26 + 1;
      lVal_26 = -1;
      if (uVal_32 < local_a8) {
        pU64_27 = local_b8;
        if (0xf < local_a0) {
          pU64_27 = (uint8_t *)local_b8._0_8_;
        }
        pU64_30 = pU64_27 + local_a8;
        pU64_15 = (uint8_t *)thunk_FUN_180676460(pU64_27 + uVal_32,pU64_30,0x20);
        if (pU64_15 != pU64_30) {
          lVal_26 = (int64_t)pU64_15 - (int64_t)pU64_27;
        }
      }
    }
    _local_88 = ZEXT816(0);
    uVal_28 = local_a8 - uVal_32;
    if (local_a8 < uVal_32) goto LAB_18048f1e6;
    uVal_16 = uVal_28 + 1;
    if (uVal_28 < uVal_28 + 1) {
      uVal_16 = uVal_28;
    }
    if ((int64_t)uVal_16 < 0) goto LAB_18048f1ec;
    if (uVal_16 < 0x10) {
      pU64_15 = local_88;
      uVal_28 = 0xf;
    }
    else {
      uVal_18 = uVal_16 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_18) {
        uVal_28 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
      }
      else {
        lVal_26 = func_0x180672de0(uVal_28 + 0x28);
        pU64_15 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_26;
      }
      local_88 = (uint8_t  [8])pU64_15;
    }
    pU64_30 = local_b8;
    if (0xf < uVal_29) {
      pU64_30 = pU64_27;
    }
    local_78 = (uint32_t)uVal_16;
    uStack_74 = (uint32_t)(uVal_16 >> 0x20);
    uStack_70 = (uint32_t)uVal_28;
    uStack_6c = (uint32_t)(uVal_28 >> 0x20);
    func_0x1806aa960(pU64_15,pU64_30 + uVal_32,uVal_16);
    pU64_15[uVal_16] = 0;
    if ((uint8_t (*)[16])local_d8._8_8_ == local_c8) {
      func_0x180084390(local_d8,local_d8._8_8_,local_88);
      uVal_32 = CONCAT44(uStack_6c,uStack_70);
      if (0xf < uVal_32) {
        uVal_29 = uVal_32 + 1;
        lVal_26 = (int64_t)local_88;
        if (0xfff < uVal_29) {
          lVal_26 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_26)) goto LAB_18048ed76;
          uVal_29 = uVal_32 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_26,uVal_29);
      }
    }
    else {
      *(uint8_t (*)[16])(local_d8._8_8_ + 0x10) = ZEXT816(0);
      *(uint8_t (*)[16])local_d8._8_8_ = ZEXT816(0);
      *(uint32_t *)(uint8_t *)local_d8._8_8_ = local_88._0_4_;
      *(uint32_t *)((uint8_t *)local_d8._8_8_ + 4) = local_88._4_4_;
      *(uint32_t *)((uint8_t *)local_d8._8_8_ + 8) = (uint32_t)uStack_80;
      *(uint32_t *)((uint8_t *)local_d8._8_8_ + 0xc) = uStack_80._4_4_;
      *(uint32_t *)*(uint8_t (*)[16])(local_d8._8_8_ + 0x10) = local_78;
      *(uint32_t *)(*(uint8_t (*)[16])(local_d8._8_8_ + 0x10) + 4) = uStack_74;
      *(uint32_t *)(*(uint8_t (*)[16])(local_d8._8_8_ + 0x10) + 8) = uStack_70;
      *(uint32_t *)(*(uint8_t (*)[16])(local_d8._8_8_ + 0x10) + 0xc) = uStack_6c;
      local_d8._8_8_ = (uint8_t (*)[16])(local_d8._8_8_ + 0x20);
    }
    local_118 = ZEXT816(0);
    local_108 = ZEXT816(0);
    uVal_32 = *(uint64_t *)*(uint8_t (*)[16])(local_d8._0_8_ + 0x10);
    pArr16_21 = (uint8_t (*)[16])local_d8._0_8_;
    if (0xf < *(uint64_t *)(*(uint8_t (*)[16])(local_d8._0_8_ + 0x10) + 8)) {
      pArr16_21 = *(uint8_t (**)[16])(uint8_t *)local_d8._0_8_;
    }
    if ((int64_t)uVal_32 < 0) goto LAB_18048f1f2;
    if (uVal_32 < 0x10) {
      local_108._8_8_ = 0xf;
      local_108._0_8_ = uVal_32;
      local_118 = *pArr16_21;
      if (uVal_32 != 0) {
        pU64_27 = local_118;
        goto LAB_18048e5b4;
      }
    }
    else {
      uVal_28 = uVal_32 | 0xf;
      uVal_29 = 0x16;
      if (0x16 < uVal_28) {
        uVal_29 = uVal_28;
      }
      if (uVal_28 < 0xfff) {
        pU64_27 = (uint8_t *)func_0x180672de0(uVal_29 + 1);
      }
      else {
        lVal_26 = func_0x180672de0(uVal_29 + 0x28);
        pU64_27 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_27 + -8) = lVal_26;
      }
      local_118._0_8_ = pU64_27;
      local_108._8_8_ = uVal_29;
      local_108._0_8_ = uVal_32;
      func_0x1806aa960(pU64_27,pArr16_21,uVal_32 + 1);
LAB_18048e5b4:
      uVal_29 = 0;
      do {
        iVal_14 = tolower((int)(char)pU64_27[uVal_29]);
        pU64_27[uVal_29] = (char)iVal_14;
        uVal_29 = uVal_29 + 1;
      } while (uVal_32 != uVal_29);
    }
    ptr2_Long_2 = (int64_t **)*local_90;
    ptr2_Long_20 = (int64_t **)*ptr2_Long_2;
    pU64_27 = local_f8;
LAB_18048e5eb:
    if (ptr2_Long_20 != ptr2_Long_2) {
      pLong_19 = (int64_t *)(**(func_ptr_t *)(*ptr2_Long_20[5] + 0x10))();
      local_f8 = ZEXT816(0);
      auArr_7._8_8_ = 0;
      auArr_7._0_8_ = local_e8._8_8_;
      local_e8 = auArr_7 << 0x40;
      func_0x180085a50(pU64_27,pLong_19[1] - *pLong_19 >> 5,pLong_19,pLong_19 + 1);
      ptr2_Long_31 = (int64_t **)local_f8._0_8_;
      ptr2_Long_12 = (int64_t **)local_f8._8_8_;
      if (local_f8._0_8_ == local_f8._8_8_) {
        if ((int64_t **)local_f8._0_8_ != (int64_t **)0x0) {
          uVal_32 = local_e8._0_8_ - local_f8._0_8_;
          ptr2_Long_23 = ptr2_Long_20;
          goto joined_r0x00018048e696;
        }
LAB_18048e700:
        ptr2_Long_31 = (int64_t **)ptr2_Long_20[2];
        ptr2_Long_23 = ptr2_Long_20;
        if (*(char *)((int64_t)ptr2_Long_20[2] + 0x19) == '\0') goto LAB_18048e850;
LAB_18048e820:
        do {
          ptr2_Long_20 = (int64_t **)ptr2_Long_23[1];
          if (*(char *)((int64_t)ptr2_Long_20 + 0x19) != '\0') break;
          bFlag_33 = ptr2_Long_23 == (int64_t **)ptr2_Long_20[2];
          ptr2_Long_23 = ptr2_Long_20;
        } while (bFlag_33);
      }
      else {
        local_90 = ptr2_Long_20;
        pLong_19 = (int64_t *)local_108._0_8_;
        ptr2_Long_20 = (int64_t **)local_f8._0_8_;
        if ((uint64_t)local_108._8_8_ < 0x10) {
          pU64_15 = local_118;
          if ((int64_t *)local_108._0_8_ == (int64_t *)0x0) goto LAB_18048e6d0;
LAB_18048e73c:
          do {
            if (ptr2_Long_20[2] == pLong_19) {
              ptr2_Long_23 = ptr2_Long_20;
              if (&DAT_0000000f < ptr2_Long_20[3]) {
                ptr2_Long_23 = (int64_t **)*ptr2_Long_20;
              }
              iVal_14 = memcmp(ptr2_Long_23,pU64_15,(size_t)pLong_19);
              if (iVal_14 == 0) goto LAB_18048e861;
            }
            ptr2_Long_20 = ptr2_Long_20 + 4;
          } while (ptr2_Long_20 != ptr2_Long_12);
        }
        else {
          pU64_15 = (uint8_t *)local_118._0_8_;
          if ((int64_t *)local_108._0_8_ != (int64_t *)0x0) goto LAB_18048e73c;
LAB_18048e6d0:
          do {
            if (ptr2_Long_20[2] == (int64_t *)0x0) goto LAB_18048e861;
            ptr2_Long_20 = ptr2_Long_20 + 4;
          } while (ptr2_Long_20 != (int64_t **)local_f8._8_8_);
        }
        ptr2_Long_23 = local_90;
        ptr2_Long_20 = local_90;
        if (ptr2_Long_31 == (int64_t **)0x0) goto LAB_18048e700;
        do {
          pLong_19 = ptr2_Long_31[3];
          if (&DAT_0000000f < pLong_19) {
            pLong_3 = *ptr2_Long_31;
            pLong_25 = (int64_t *)((int64_t)pLong_19 + 1);
            pLong_24 = pLong_3;
            if ((int64_t *)0xfff < pLong_25) {
              pLong_24 = (int64_t *)pLong_3[-1];
              if (0x1f < (uint64_t)((int64_t)pLong_3 + (-8 - (int64_t)pLong_24)))
              goto LAB_18048ed76;
              pLong_25 = pLong_19 + 5;
            }
            thunk_FUN_180695dd0(pLong_24,pLong_25);
          }
          ptr2_Long_31[2] = (int64_t *)0x0;
          ptr2_Long_31[3] = (int64_t *)&DAT_0000000f;
          *(uint8_t *)ptr2_Long_31 = 0;
          ptr2_Long_31 = ptr2_Long_31 + 4;
        } while (ptr2_Long_31 != ptr2_Long_12);
        uVal_32 = local_e8._0_8_ - local_f8._0_8_;
joined_r0x00018048e696:
        ptr2_Long_20 = (int64_t **)local_f8._0_8_;
        if (0xfff < uVal_32) {
          ptr2_Long_20 = *(int64_t ***)(local_f8._0_8_ + -8);
          if (0x1f < (uint64_t)(local_f8._0_8_ + (-8 - (int64_t)ptr2_Long_20))) goto LAB_18048ed76;
          uVal_32 = uVal_32 + 0x27;
        }
        thunk_FUN_180695dd0(ptr2_Long_20,uVal_32);
        ptr2_Long_31 = (int64_t **)ptr2_Long_23[2];
        if (*(char *)((int64_t)ptr2_Long_23[2] + 0x19) != '\0') goto LAB_18048e820;
LAB_18048e850:
        do {
          ptr2_Long_20 = ptr2_Long_31;
          ptr2_Long_31 = (int64_t **)*ptr2_Long_20;
        } while (*(char *)((int64_t)*ptr2_Long_20 + 0x19) == '\0');
      }
      goto LAB_18048e5eb;
    }
    local_88 = (uint8_t  [8])&DAT_28d0f803f34a0611;
    uVal_4 = *(uint64_t *)(DAT_180840a58 + 0x648);
    local_128 = ZEXT816(0);
    local_138 = ZEXT816(0);
    uVal_32 = local_108._0_8_;
    if ((uint64_t)local_108._8_8_ < 0x10) {
      pArr16_21 = &local_118;
    }
    else {
      pArr16_21 = (uint8_t (*)[16])local_118._0_8_;
    }
    if (-1 < (int64_t)local_108._0_8_) {
      if ((uint64_t)local_108._0_8_ < 0x10) {
        local_128._8_8_ = 0xf;
        local_128._0_8_ = local_108._0_8_;
        local_138 = *pArr16_21;
      }
      else {
        uVal_28 = local_108._0_8_ | 0xf;
        uVal_29 = 0x16;
        if (0x16 < uVal_28) {
          uVal_29 = uVal_28;
        }
        if (uVal_28 < 0xfff) {
          uVal_28 = func_0x180672de0(uVal_29 + 1);
        }
        else {
          lVal_26 = func_0x180672de0(uVal_29 + 0x28);
          uVal_28 = lVal_26 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_28 - 8) = lVal_26;
        }
        local_138._0_8_ = uVal_28;
        local_128._8_8_ = uVal_29;
        local_128._0_8_ = uVal_32;
        func_0x1806aa960(uVal_28,pArr16_21,uVal_32 + 1);
      }
      local_188 = PTR_DAT_1806b6f30._0_4_;
      uStack_184 = PTR_DAT_1806b6f30._4_4_;
      uStack_180 = _UNK_1806b6f38;
      uStack_17c = _UNK_1806b6f3c;
      local_78 = _DAT_1806d4f96;
      uStack_74 = _UNK_1806d4f9a;
      uStack_70 = _UNK_1806d4f9e;
      local_88._4_4_ = _UNK_1806d4f8a;
      local_88._0_4_ = _DAT_1806d4f86;
      uStack_80._0_4_ = _UNK_1806d4f8e;
      uStack_80._4_4_ = _UNK_1806d4f92;
      uStack_6c = CONCAT13(0xb1,(int3)_UNK_1806d4fa2);
      uStack_68 = CONCAT13(uStack_68._3_1_,0x49dc8f);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x165d8) == '\0') {
        lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_26 + 0x165d8) = 1;
        func_0x1801b30c0(lVal_26 + 0x165b1,local_88);
        func_0x180673140(&LAB_1804fbb50);
      }
      _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x165b1);
      func_0x18061e890(_Str);
      local_e8 = ZEXT816(0);
      local_f8 = ZEXT816(0);
      sz_22 = strlen(_Str);
      if ((int64_t)sz_22 < 0) goto LAB_18048f21e;
      uVal_32 = 0xf;
      if (0xf < sz_22) {
        uVal_29 = sz_22 | 0xf;
        uVal_32 = 0x16;
        if (0x16 < uVal_29) {
          uVal_32 = uVal_29;
        }
        if (uVal_29 < 0xfff) {
          local_62 = 1;
          pU64_27 = (uint8_t *)func_0x180672de0(uVal_32 + 1);
        }
        else {
          local_62 = 1;
          lVal_26 = func_0x180672de0(uVal_32 + 0x28);
          pU64_27 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_27 + -8) = lVal_26;
        }
        local_f8._0_8_ = pU64_27;
      }
      local_e8._8_8_ = uVal_32;
      local_e8._0_8_ = sz_22;
      func_0x1806aa960(pU64_27,_Str,sz_22);
      pU64_27[sz_22] = 0;
      func_0x180143b90(uVal_4,local_f8,&local_188,local_138);
      if (0xf < (uint64_t)local_e8._8_8_) {
        uVal_32 = local_e8._8_8_ + 1;
        pLong_19 = (int64_t *)local_f8._0_8_;
        if (0xfff < uVal_32) {
          if ((uint8_t *)0x1f <
              (uint8_t *)(local_f8._0_8_ + (-8 - (int64_t)*(int64_t **)(local_f8._0_8_ + -8))))
          goto LAB_18048ed76;
          uVal_32 = local_e8._8_8_ + 0x28;
          pLong_19 = *(int64_t **)(local_f8._0_8_ + -8);
        }
        goto LAB_18048edad;
      }
      goto LAB_18048edb2;
    }
  }
  func_0x18007ba70();
LAB_18048f21e:
  local_62 = 1;
  func_0x18007ba70();
  fnPtr_5 = (func_ptr_t )swi(3);
  (*fnPtr_5)();
  return;
LAB_18048e861:
  ch_13 = (**(func_ptr_t *)(*local_90[5] + 0x28))(local_90[5],local_d8);
  if (ch_13 == '\0') {
    local_88 = (uint8_t  [8])&DAT_28d0f803f34a0611;
    uVal_4 = *(uint64_t *)(DAT_180840a58 + 0x648);
    pArr16_21 = (uint8_t (*)[16])(**(func_ptr_t *)(*local_90[5] + 0x20))();
    local_168 = ZEXT816(0);
    local_178 = ZEXT816(0);
    uVal_32 = *(uint64_t *)pArr16_21[1];
    if (0xf < *(uint64_t *)(pArr16_21[1] + 8)) {
      pArr16_21 = *(uint8_t (**)[16])*pArr16_21;
    }
    if ((int64_t)uVal_32 < 0) goto LAB_18048f1f8;
    if (uVal_32 < 0x10) {
      local_168._8_8_ = 0xf;
      local_168._0_8_ = uVal_32;
      local_178 = *pArr16_21;
    }
    else {
      uVal_28 = uVal_32 | 0xf;
      uVal_29 = 0x16;
      if (0x16 < uVal_28) {
        uVal_29 = uVal_28;
      }
      if (uVal_28 < 0xfff) {
        uVal_28 = func_0x180672de0(uVal_29 + 1);
      }
      else {
        lVal_26 = func_0x180672de0(uVal_29 + 0x28);
        uVal_28 = lVal_26 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_28 - 8) = lVal_26;
      }
      local_178._0_8_ = uVal_28;
      local_168._8_8_ = uVal_29;
      local_168._0_8_ = uVal_32;
      func_0x1806aa960(uVal_28,pArr16_21,uVal_32 + 1);
    }
    local_61 = 1;
    pArr16_21 = (uint8_t (*)[16])(**(func_ptr_t *)(*local_90[5] + 8))();
    local_148 = ZEXT816(0);
    local_158 = ZEXT816(0);
    uVal_32 = *(uint64_t *)pArr16_21[1];
    if (0xf < *(uint64_t *)(pArr16_21[1] + 8)) {
      pArr16_21 = *(uint8_t (**)[16])*pArr16_21;
    }
    if ((int64_t)uVal_32 < 0) goto LAB_18048f1fe;
    if (uVal_32 < 0x10) {
      local_148._8_8_ = 0xf;
      local_148._0_8_ = uVal_32;
      local_158 = *pArr16_21;
    }
    else {
      uVal_28 = uVal_32 | 0xf;
      uVal_29 = 0x16;
      if (0x16 < uVal_28) {
        uVal_29 = uVal_28;
      }
      if (uVal_28 < 0xfff) {
        local_61 = 1;
        uVal_28 = func_0x180672de0(uVal_29 + 1);
      }
      else {
        local_61 = 1;
        lVal_26 = func_0x180672de0(uVal_29 + 0x28);
        uVal_28 = lVal_26 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_28 - 8) = lVal_26;
      }
      local_158._0_8_ = uVal_28;
      local_148._8_8_ = uVal_29;
      local_148._0_8_ = uVal_32;
      func_0x1806aa960(uVal_28,pArr16_21,uVal_32 + 1);
    }
    uVal_11 = DAT_180840fd0;
    local_1e8 = PTR_DAT_1806b2fe8._0_4_;
    uStack_1e4 = PTR_DAT_1806b2fe8._4_4_;
    uStack_1e0 = _UNK_1806b2ff0;
    uStack_1dc = _UNK_1806b2ff4;
    local_1d8 = PTR_DAT_1806c9868._0_4_;
    uStack_1d4 = PTR_DAT_1806c9868._4_4_;
    uStack_1d0 = _UNK_1806c9870;
    uStack_1cc = _UNK_1806c9874;
    local_1c8 = PTR_DAT_1806b6f30._0_4_;
    uStack_1c4 = PTR_DAT_1806b6f30._4_4_;
    uStack_1c0 = _UNK_1806b6f38;
    uStack_1bc = _UNK_1806b6f3c;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x16598) == '\0') {
      lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_26 + 0x16598) = 1;
      uVal_10 = _UNK_1806cf05c;
      uVal_9 = _UNK_1806cf058;
      uVal_8 = _UNK_1806cf054;
      *(uint32_t *)(lVal_26 + 0x16580) = _DAT_1806cf050;
      *(uint32_t *)(lVal_26 + 0x16584) = uVal_8;
      *(uint32_t *)(lVal_26 + 0x16588) = uVal_9;
      *(uint32_t *)(lVal_26 + 0x1658c) = uVal_10;
      *(uint32_t *)(lVal_26 + 0x16590) = 0x46caf538;
      *(uint16_t *)(lVal_26 + 0x16594) = 0x1af;
      func_0x180673140(&LAB_1804fbaf0);
    }
    lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_21 = (uint8_t (*)[16])(lVal_26 + 0x16580);
    if (*(char *)(lVal_26 + 0x16595) == '\x01') {
      auArr_6._4_4_ = *(uint *)(lVal_26 + 0x16584) ^ _UNK_1806cf064;
      auArr_6._0_4_ = *(uint *)*pArr16_21 ^ _DAT_1806cf060;
      auArr_6._8_4_ = *(uint *)(lVal_26 + 0x16588) ^ _UNK_1806cf068;
      auArr_6._12_4_ = *(uint *)(lVal_26 + 0x1658c) ^ _UNK_1806cf06c;
      *pArr16_21 = auArr_6;
      *(uint *)(lVal_26 + 0x16590) = *(uint *)(lVal_26 + 0x16590) ^ 0x3bb1d545;
      *(byte *)(lVal_26 + 0x16594) = *(byte *)(lVal_26 + 0x16594) ^ 0xaf;
      *(uint8_t *)(lVal_26 + 0x16595) = 0;
    }
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    _local_88 = ZEXT816(0);
    sz_22 = strlen((char *)pArr16_21);
    if ((int64_t)sz_22 < 0) goto LAB_18048f20b;
    if (sz_22 < 0x10) {
      pU64_27 = local_88;
      uVal_32 = 0xf;
    }
    else {
      uVal_29 = sz_22 | 0xf;
      uVal_32 = 0x16;
      if (0x16 < uVal_29) {
        uVal_32 = uVal_29;
      }
      if (uVal_29 < 0xfff) {
        local_63 = 1;
        pU64_27 = (uint8_t *)func_0x180672de0(uVal_32 + 1);
      }
      else {
        local_63 = 1;
        lVal_26 = func_0x180672de0(uVal_32 + 0x28);
        pU64_27 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_27 + -8) = lVal_26;
      }
      local_88 = (uint8_t  [8])pU64_27;
    }
    local_78 = (uint32_t)sz_22;
    uStack_74 = (uint32_t)(sz_22 >> 0x20);
    uStack_70 = (uint32_t)uVal_32;
    uStack_6c = (uint32_t)(uVal_32 >> 0x20);
    func_0x1806aa960(pU64_27,pArr16_21,sz_22);
    pU64_27[sz_22] = 0;
    func_0x1804c8fc0(uVal_4,local_88,&local_1c8,&local_1d8,&local_1e8,uVal_11,local_158,local_178);
    uVal_32 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_32) {
      uVal_29 = uVal_32 + 1;
      lVal_26 = (int64_t)local_88;
      if (0xfff < uVal_29) {
        lVal_26 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_26)) goto LAB_18048ed76;
        uVal_29 = uVal_32 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_26,uVal_29);
    }
  }
  if ((int64_t *)local_f8._0_8_ == (int64_t *)0x0) goto LAB_18048edb2;
  pLong_19 = (int64_t *)local_f8._8_8_;
  pLong_25 = (int64_t *)local_f8._0_8_;
  if (local_f8._0_8_ != local_f8._8_8_) goto LAB_18048ed4b;
  uVal_32 = local_e8._0_8_ - local_f8._0_8_;
  pLong_19 = (int64_t *)local_f8._0_8_;
  goto joined_r0x00018048ed90;
LAB_18048ed4b:
  do {
    uVal_32 = pLong_25[3];
    if (0xf < uVal_32) {
      lVal_26 = *pLong_25;
      uVal_29 = uVal_32 + 1;
      lVal_17 = lVal_26;
      if (0xfff < uVal_29) {
        lVal_17 = *(int64_t *)(lVal_26 + -8);
        if (0x1f < (uint64_t)((lVal_26 + -8) - lVal_17)) goto LAB_18048ed76;
        uVal_29 = uVal_32 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_29);
    }
    pLong_25[2] = 0;
    pLong_25[3] = 0xf;
    *(uint8_t *)pLong_25 = 0;
    pLong_25 = pLong_25 + 4;
  } while (pLong_25 != pLong_19);
  uVal_32 = local_e8._0_8_ - local_f8._0_8_;
  pLong_19 = (int64_t *)local_f8._0_8_;
joined_r0x00018048ed90:
  if (0xfff < uVal_32) {
    if ((uint8_t *)0x1f <
        (uint8_t *)((int64_t)pLong_19 + (-8 - (int64_t)(int64_t *)pLong_19[-1])))
    goto LAB_18048ed76;
    uVal_32 = uVal_32 + 0x27;
    pLong_19 = (int64_t *)pLong_19[-1];
  }
LAB_18048edad:
  thunk_FUN_180695dd0(pLong_19,uVal_32);
LAB_18048edb2:
  if (0xf < (uint64_t)local_108._8_8_) {
    uVal_32 = local_108._8_8_ + 1;
    lVal_26 = local_118._0_8_;
    if (0xfff < uVal_32) {
      lVal_26 = *(int64_t *)(local_118._0_8_ + -8);
      if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_26)) goto LAB_18048ed76;
      uVal_32 = local_108._8_8_ + 0x28;
    }
    thunk_FUN_180695dd0(lVal_26,uVal_32);
  }
  if (0xf < local_a0) {
    uVal_32 = local_a0 + 1;
    lVal_26 = local_b8._0_8_;
    if (0xfff < uVal_32) {
      lVal_26 = *(int64_t *)(local_b8._0_8_ + -8);
      if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_26)) goto LAB_18048ed76;
      uVal_32 = local_a0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_26,uVal_32);
  }
  if ((int64_t *)local_d8._0_8_ != (int64_t *)0x0) {
    pLong_19 = (int64_t *)local_d8._8_8_;
    pLong_25 = (int64_t *)local_d8._0_8_;
    if (local_d8._0_8_ == local_d8._8_8_) {
      uVal_32 = (int64_t)local_c8 - local_d8._0_8_;
      pLong_19 = (int64_t *)local_d8._0_8_;
    }
    else {
      do {
        uVal_32 = pLong_25[3];
        if (0xf < uVal_32) {
          lVal_26 = *pLong_25;
          uVal_29 = uVal_32 + 1;
          lVal_17 = lVal_26;
          if (0xfff < uVal_29) {
            lVal_17 = *(int64_t *)(lVal_26 + -8);
            if (0x1f < (uint64_t)((lVal_26 + -8) - lVal_17)) goto LAB_18048ed76;
            uVal_29 = uVal_32 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_17,uVal_29);
        }
        pLong_25[2] = 0;
        pLong_25[3] = 0xf;
        *(uint8_t *)pLong_25 = 0;
        pLong_25 = pLong_25 + 4;
      } while (pLong_25 != pLong_19);
      uVal_32 = (int64_t)local_c8 - local_d8._0_8_;
      pLong_19 = (int64_t *)local_d8._0_8_;
    }
    if (0xfff < uVal_32) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_19 + (-8 - (int64_t)(int64_t *)pLong_19[-1]))) {
LAB_18048ed76:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_32 = uVal_32 + 0x27;
      pLong_19 = (int64_t *)pLong_19[-1];
    }
    thunk_FUN_180695dd0(pLong_19,uVal_32);
  }
  return;
}

// Unwind@18048f230
void Unwind_18048f230(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1e0);
  return;
}

// Unwind@18048f280
void Unwind_18048f280(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1e0);
  *(uint8_t *)(param_2 + 0x205) = 0;
  return;
}

// Unwind@18048f2d0
void Unwind_18048f2d0(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x205);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x110);
  }
  *(char *)(param_2 + 0x207) = ch_1;
  return;
}

// Unwind@18048f330
void Unwind_18048f330(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x207) == '\x01') {
    func_0x180001e70(param_2 + 0xf0);
  }
  return;
}

// Catch_All@18048f380
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t Catch_All_18048f380(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  int64_t lVal_6;
  uint8_t uVal_7;
  uint64_t uVal_8;
  
  lVal_6 = DAT_180840a58;
  *(uint8_t **)(param_2 + 0x1e0) = &DAT_28d0f803f34a0611;
  uVal_1 = *(uint64_t *)
           ((((*(uint64_t *)(param_2 + 0x1e0) ^ 0xd1631bc266) + 0x443450bf0 ^ 0x779d0cf4) /
             0x4179506e6 - 0x7a6de5f ^ 0x25297bc) + lVal_6);
  uVal_8 = (**(func_ptr_t *)(**(int64_t **)(*(int64_t *)(param_2 + 0x1d8) + 0x28) + 0x20))();
  func_0x1800ba170(param_2 + 0x40,uVal_8);
  fnPtr_2 = *(func_ptr_t *)(**(int64_t **)(*(int64_t *)(param_2 + 0x1d8) + 0x28) + 8);
  *(uint8_t *)(param_2 + 0x203) = 1;
  uVal_8 = (*fnPtr_2)();
  *(uint8_t *)(param_2 + 0x203) = 1;
  func_0x1800ba170(param_2 + 0x60,uVal_8);
  uVal_7 = DAT_180840fd0;
  uVal_5 = _UNK_1806b2ff4;
  uVal_4 = _UNK_1806b2ff0;
  uVal_3 = PTR_DAT_1806b2fe8._4_4_;
  *(uint32_t *)(param_2 + 0xb0) = PTR_DAT_1806b2fe8._0_4_;
  *(uint32_t *)(param_2 + 0xb4) = uVal_3;
  *(uint32_t *)(param_2 + 0xb8) = uVal_4;
  *(uint32_t *)(param_2 + 0xbc) = uVal_5;
  uVal_5 = _UNK_1806c9874;
  uVal_4 = _UNK_1806c9870;
  uVal_3 = PTR_DAT_1806c9868._4_4_;
  *(uint32_t *)(param_2 + 0xc0) = PTR_DAT_1806c9868._0_4_;
  *(uint32_t *)(param_2 + 0xc4) = uVal_3;
  *(uint32_t *)(param_2 + 200) = uVal_4;
  *(uint32_t *)(param_2 + 0xcc) = uVal_5;
  uVal_5 = _UNK_1806b6f3c;
  uVal_4 = _UNK_1806b6f38;
  uVal_3 = PTR_DAT_1806b6f30._4_4_;
  *(uint32_t *)(param_2 + 0xd0) = PTR_DAT_1806b6f30._0_4_;
  *(uint32_t *)(param_2 + 0xd4) = uVal_3;
  *(uint32_t *)(param_2 + 0xd8) = uVal_4;
  *(uint32_t *)(param_2 + 0xdc) = uVal_5;
  *(uint8_t *)(param_2 + 0x204) = 1;
  uVal_8 = func_0x1804c91e0();
  func_0x18061e860(uVal_8);
  *(uint8_t *)(param_2 + 0x204) = 1;
  func_0x180001060(param_2 + 0x1e0,uVal_8);
  func_0x1804c8fc0(uVal_1,param_2 + 0x1e0,param_2 + 0xd0,param_2 + 0xc0,param_2 + 0xb0,uVal_7,
                param_2 + 0x60,param_2 + 0x40);
  func_0x180001e70(param_2 + 0x1e0);
  return 0x18048ece1;
}

// Unwind@18048f510
void Unwind_18048f510(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1e0);
  *(uint8_t *)(param_2 + 0x204) = 0;
  return;
}

// Unwind@18048f560
void Unwind_18048f560(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x204);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x60);
  }
  *(char *)(param_2 + 0x203) = ch_1;
  return;
}

// Unwind@18048f5c0
void Unwind_18048f5c0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x203) == '\x01') {
    func_0x180001e70(param_2 + 0x40);
  }
  return;
}

// Unwind@18048f610
void Unwind_18048f610(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0x170);
  return;
}

// Unwind@18048f660
void Unwind_18048f660(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x206) = 0;
  return;
}

// Unwind@18048f6b0
void Unwind_18048f6b0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x206) == '\x01') {
    func_0x180001e70(param_2 + 0x130);
  }
  return;
}

// Unwind@18048f700
void Unwind_18048f700(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@18048f750
void Unwind_18048f750(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@18048f7a0
void Unwind_18048f7a0(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 400);
  return;
}

// Unwind@18048f7f0
void Unwind_18048f7f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1e0);
  return;
}

// Unwind@18048f840
void Unwind_18048f840(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x165d8) = 0;
  *(uint8_t *)(param_2 + 0x206) = 1;
  return;
}

// func_0x18048f8a0
uint64_t func_0x18048f8a0(uint64_t *param_1,void **param_2)
{
  int iVal_1;
  uint32_t extraout_var;
  
  if ((void *)param_1[2] < param_2[1]) {
    return 0;
  }
  if (0xf < (uint64_t)param_1[3]) {
    param_1 = (uint64_t *)*param_1;
  }
  iVal_1 = memcmp(param_1,*param_2,(size_t)param_2[1]);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVal_1) >> 8),iVal_1 == 0);
}

// func_0x18048f8e0
int64_t func_0x18048f8e0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15a64) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15a64) = 1;
    *(uint64_t *)(lVal_1 + 0x15a58) = 0x472d31b06b8f8cbe;
    *(uint32_t *)(lVal_1 + 0x15a60) = 0x1fd9db5;
    func_0x180673140(&LAB_1804f76c0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15a58;
}

// func_0x18048f970
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18048f970(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xb) == '\x01') {
    *param_1 = *param_1 ^ 0x330343d51dfde9cd;
    *(uint *)(param_1 + 1) =
         (*(uint *)(param_1 + 1) & 0xffff | (uint)*(byte *)((int64_t)param_1 + 10) << 0x10) ^
         SUB164(_DAT_1806cf070,0);
  }
  return;
}

// func_0x18048fa20
int64_t func_0x18048fa20(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x15a74) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x15a74) = 1;
    *(uint64_t *)(lVal_1 + 0x15a68) = 0xd713bb3faac67421;
    *(uint16_t *)(lVal_1 + 0x15a70) = 0x14f;
    func_0x180673140(&LAB_1804f76f0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x15a68;
}

// func_0x18048fab0
void func_0x18048fab0(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 9) == '\x01') {
    *param_1 = *param_1 ^ 0xa36bcf11cfab154f;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x4f;
    *(uint8_t *)((int64_t)param_1 + 9) = 0;
  }
  return;
}
