# Ghidra vs Nevoy-Compilable Comparison

This document compares the Ghidra headless decompilation (`ghidra_decompiled.c`)
with the `Nevoy-Compilable` source tree on the `NEGAGLIENT` branch.

## High-level statistics

- **Nevoy-Compilable functions:** 7627
- **Ghidra functions with addresses:** 6489
- **Common addresses:** 6413
- **Only in Nevoy-Compilable:** 1214
- **Only in Ghidra:** 76
- **Nevoy module files:** 83

## Coverage by address range

- Ghidra missed many of the small globals / initializer functions in the
  `0x180001000` region that Nevoy-Compilable captures.
- Nevoy-Compilable missed some functions that Ghidra recovered,
  mostly in the `0x18026xxxx` / runtime / exception-handling regions.

## Naming and style differences

| Aspect | Nevoy-Compilable | Ghidra |
|--------|------------------|--------|
| Function names | `function_180001000` or `func_0x1800c1050_Aimbot` | `func_0x1800c1050_Aimbot` or `FUN_180001000` |
| Local variables | `v1`, `v2`, `v3` ... | `local_28`, `uVar1`, `iVar2` ... |
| Globals | `g123`, `g456` | `DAT_180320300`, `PTR_1802a98f0` |
| Intrinsics | Custom `__asm_movss_31` helpers | Inline SSE intrinsic names (e.g. `__asm_movss`) |
| Module grouping | 83 module `.c` files + 43 core `.c` files | Single monolithic file |
| Type annotations | Mostly `int64_t` with manual casts | `undefined8`, `longlong`, pointers |

## Example: `0x18012f5a0` (Speed module)

### Nevoy-Compilable
```c
// Address range: 0x18012f5a0 - 0x18012f5e3
int64_t func_0x18012f5a0_Speed(int64_t a1) {
    // 0x18012f5a0
    __asm_movss_31(*(int32_t *)&g40);
    __asm_movss_31(*(int32_t *)&g35);
    return function_180004610((int64_t)"Speed", (int32_t *)(a1 + 88));
}
```

### Ghidra
```c
// Function: func_0x18012f5a0_Speed

void func_0x18012f5a0_Speed(longlong param_1)

{
  FUN_180004610("Speed",param_1 + 0x58,DAT_1802ac12c,DAT_1802ac180,&DAT_1802b617c);
  return;
}
```

## Addresses only in Nevoy-Compilable (first 50)

`180001000`, `180001010`, `180001020`, `180001140`, `180001170`, `1800011a0`, `1800011d0`, `180001200`, `180001210`, `180001484`, `1800014a4`, `1800014b0`, `1800014bc`, `1800014c8`, `18000201c`, `18000cbf5`, `18002bf00`, `18002c070`, `18002c0d0`, `180035930`, `18003d4ab`, `18003e2ff`, `18003e317`, `18003f160`, `18003f920`, `18004544f`, `1800457ab`, `18004f3e0`, `18004f4a0`, `18004fcf0`, `18004fe60`, `1800502f0`, `1800506e6`, `1800506eb`, `1800534e0`, `180054620`, `180056180`, `180059540`, `180059740`, `1800598a0`, `180059930`, `1800599c0`, `180059aa0`, `180059eee`, `180059f3a`, `180059f86`, `180059fda`, `18005a03a`, `18005a090`, `18005a0e6`

## Addresses only in Ghidra (first 50)

`18003d500`, `18003e350`, `18003f1b0`, `180090120`, `1800c01e0`, `180106cd0`, `18010bef0`, `18014fa30`, `18014fc30`, `18017bd90`, `18018dd80`, `180265cd8`, `180265fc4`, `180265fe4`, `18026602c`, `180266050`, `180266074`, `180266184`, `180266acc`, `1802696a0`, `1802696bc`, `1802697bc`, `180269cb4`, `18026a3b4`, `18026ad70`, `18026bec4`, `18026beec`, `18026c78c`, `18026d660`, `18026daf0`, `18026db58`, `18026e18c`, `180271490`, `180277784`, `1802790c8`, `180279120`, `18027ee90`, `18027f4ac`, `18027f780`, `18027f7f4`, `18027f8b4`, `18027fc4c`, `18027fec8`, `180283960`, `18028450c`, `180284540`, `180284c18`, `180287134`, `18028738c`, `18028782c`

## Conclusion

Both are automated decompilations of the same binary, so the core control flow is the same,
but they differ in recovery detail:

- **Nevoy-Compilable** is more complete for the early address ranges and is already organized
  into modules/cores with an attempt at a build system (`CMakeLists.txt`).
- **Ghidra** recovers additional functions in some ranges, uses its own variable naming,
  and produces one large pseudo-C file.

Neither is the original source, and neither can be recompiled back to the exact original DLL.
For patching, cross-referencing the two can help confirm which functions are real code vs.
decompiler artifacts.