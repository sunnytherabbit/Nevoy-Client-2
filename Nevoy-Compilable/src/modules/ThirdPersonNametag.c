// Module: ThirdPersonNametag
// Address range: 0x1800cda00 - 0x1800cdae4
int64_t func_0x1800cda00_ThirdPersonNametag(int64_t result) {
    // 0x1800cda00
    int64_t v1; // bp-48, 0x1800cda00
    int64_t v2 = function_18002ab30(&v1, "ThirdPersonNametag"); // 0x1800cda20
    int64_t * v3 = (int64_t *)result; // 0x1800cda36
    *v3 = (int64_t)&g126;
    *(char *)(result + 8) = 0;
    function_18002a920((int64_t *)(result + 16), v2);
    *(int32_t *)(result + 48) = 1;
    *(int32_t *)(result + 52) = 0;
    *(char *)(result + 56) = 0;
    function_18002bca0((int64_t *)(result + 64));
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g215;
    *(int64_t *)(result + 88) = 0;
    __asm_rep_stosb_memset((char *)(result + 96), 0, 2);
    function_180033ff0(result);
    return result;
}

// Address range: 0x180107fa0 - 0x1801080ad
int64_t func_0x180107fa0_ThirdPersonNametag(int64_t a1) {
    int32_t v1 = 0x1505; // 0x180107ff8
    char * v2 = "ThirdPersonNametag"; // 0x180107fd1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)84;
    char v3 = *v2; // 0x180107fc2
    while (v3 != 0) {
        // 0x180107fe8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x180108015
    int64_t * lpAddress = (int64_t *)(a1 + 88); // 0x18010801f
    *lpAddress = v4;
    int64_t result = a1; // 0x18010802d
    if (v4 != 0) {
        // 0x180108031
        int64_t v5; // 0x180107fa0
        function_18029d4e0(a1 + 96, v4, 2, v5);
        int32_t lpflOldProtect; // bp-32, 0x180107fa0
        VirtualProtect((int64_t *)*lpAddress, 2, 64, &lpflOldProtect);
        function_18029db80(*lpAddress, 144, 2, (int64_t)&lpflOldProtect);
        result = VirtualProtect((int64_t *)*lpAddress, 2, lpflOldProtect, &lpflOldProtect);
    }
    // 0x1801080a8
    return result;
}

// Address range: 0x1801694f0 - 0x18016957e
int64_t func_0x1801694f0_ThirdPersonNametag(int64_t * a1) {
    int64_t v1 = (int64_t)"ThirdPersonNametag" + 1; // 0x18016951e
    int32_t v2 = 0x1505; // 0x180169548
    v2 = 33 * v2 + 84;
    char v3 = *(char *)v1; // 0x180169512
    v1++;
    int32_t v4 = v3; // 0x18016952b
    while (v3 != 0) {
        // 0x180169538
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180169573
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "74 ? 48 8B 03 48 8B 80 ? ? ? ? 48 89 D9 FF 15 ? ? ? ? 84 C0 75 ? 48 8B 4B", "ThirdPersonNametag", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180169573
    return result;
}


