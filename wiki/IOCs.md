# IOCs

Strings and identifiers that can be used to detect this DLL in memory or on disk.

- `           MODULES CONFIG DUMP\n`
- `(modules not initialized yet)\n`
- `);
                function_180078370(function_1800371d0(v16, (int64_t *)(v14 + 64)), `
- `);
                function_18007f940(&v12);
                v14 = v12;
            }
        }
        // 0x18008f885
        function_180078370(v4, `
- `);
                v16 = function_180078370(function_1800371d0(v15, (int64_t *)(v14 + 32)), `
- `);
            function_180078370(function_1800371d0(v16, (int64_t *)(v14 + 64)), `
- `);
            function_18007f940(&v12);
            v14 = v12;
            while (*(char *)(v12 + 25) == 0) {
                // 0x18008f7be
                v15 = function_180078370(v4, `
- `);
            function_18007f940(&v12);
            v14 = v12;
        }
    }
    // 0x18008f885
    function_180078370(v4, `
- `);
            v16 = function_180078370(function_1800371d0(v15, (int64_t *)(v14 + 32)), `
- `);
        function_180078370(function_1800371d0(v10, (int64_t *)(*(int64_t *)v9 + 16)), `
- `);
        function_180078370(function_1800371d0(v16, (int64_t *)(v14 + 64)), `
- `);
        function_18007f940(&v12);
        v14 = v12;
        while (*(char *)(v12 + 25) == 0) {
            // 0x18008f7be
            v15 = function_180078370(v4, `
- `);
        v12 = *(int64_t *)v11;
        __asm_rep_stosb_memset((char *)&v13, 0, 1);
        v14 = v12;
        if (*(char *)(v12 + 25) == 0) {
            v15 = function_180078370(v4, `
- `);
        v16 = function_180078370(function_1800371d0(v15, (int64_t *)(v14 + 32)), `
- `);
    function_18007f0c0((int64_t)&v11);
    v9 += 8;
    while (v9 != v8) {
        // 0x18008f63d
        v10 = function_180078370(v4, `
- `);
    function_1801535c0(&v25, L`
- `);
    int64_t v11; // bp-280, 0x18008f410
    int64_t v12 = *(int64_t *)v11; // bp-552, 0x18008f755
    int64_t v13; // bp-600, 0x18008f410
    __asm_rep_stosb_memset((char *)&v13, 0, 1);
    int64_t v14 = v12; // 0x18008f7b8
    int64_t v15; // 0x18008f83c
    int64_t v16; // 0x18008f85b
    if (*(char *)(v12 + 25) == 0) {
        v15 = function_180078370(v4, `
- `);
    int64_t v80; // bp-1312, 0x180152350
    int64_t v81; // bp-328, 0x180152350
    function_180158c00((int64_t)&v80, &v81);
    int64_t v82 = &v81; // 0x180152e7a
    int32_t v83 = MessageBoxW(NULL, (int16_t *)function_180031380(v82), L`
- `); // 0x18008f659
    function_180078370(function_1800371d0(v10, (int64_t *)(*(int64_t *)v9 + 16)), `
- `); // 0x180152838
            int64_t v43; // bp-1352, 0x180152350
            int64_t v44 = *(int64_t *)(function_180269654((int64_t)&v43, 8) + 8); // 0x18015292b
            int64_t v45; // bp-2086, 0x180152350
            int64_t v46 = function_1800b8a00((int64_t)&v45, v44 & -256 | 48); // 0x180152960
            int32_t v47 = *(int32_t *)(*(int64_t *)v42 + 4); // 0x180152978
            *(char *)(v42 + 88 + (int64_t)v47) = *(char *)v46;
            function_180155b80(v42, v28);
            int64_t v48; // bp-520, 0x180152350
            int64_t v49 = &v48; // 0x180152a03
            int64_t v50; // bp-1056, 0x180152350
            function_1801376d0((int64_t)&v50, v49);
            int64_t v51 = function_1801535c0(&v25, L`
- `); // 0x180152a36
            int64_t v52; // bp-1456, 0x180152350
            int64_t v53 = *(int64_t *)function_180059af0(v49, &v52); // 0x180152a75
            int64_t v54; // bp-1448, 0x180152350
            int64_t v55 = *(int64_t *)function_180059480(v49, &v54); // 0x180152aa5
            int64_t v56; // bp-168, 0x180152350
            int64_t v57; // bp-2084, 0x180152350
            int64_t v58 = function_1801533a0(&v56, v55, v53, (int64_t)&v57); // 0x180152ae0
            int64_t v59 = function_180153bb0(v51, (int64_t *)v58); // 0x180152b1d
            function_1801535c0((int64_t *)v59, (int16_t *)&g285);
            function_180032380((int64_t)&v56);
            function_180032230(&v48);
            int64_t v60; // bp-928, 0x180152350
            function_18007f520(&v60);
            function_18004fd50(&v60);
            function_180032380((int64_t)&v37);
            function_180032230(&v30);
            goto lab_0x180152c8f;
        }
    }
  lab_0x180152b90:
    // 0x180152b90
    if (g1184 != 0) {
        int64_t v61 = v26;
        int64_t v62 = function_1801535c0(&v25, L`
- `); // 0x180152bc2
        int64_t v63 = function_18029e0a0(v61); // 0x180152bf4
        int64_t v64; // bp-136, 0x180152350
        int64_t v65; // bp-2083, 0x180152350
        int64_t v66 = function_180153280(&v64, v61, v63 + v61, (int64_t)&v65); // 0x180152c2f
        int64_t v67 = function_180153bb0(v62, (int64_t *)v66); // 0x180152c6c
        function_1801535c0((int64_t *)v67, (int16_t *)&g286);
        function_180032380((int64_t)&v64);
    }
    goto lab_0x180152c8f;
  lab_0x180152c8f:;
    // 0x180152c8f
    int64_t v68; // bp-2082, 0x180152350
    int64_t v69; // bp-456, 0x180152350
    function_18007c420(v13, &v69, (int64_t)&v68);
    int64_t v70 = function_1801535c0(&v25, L`
- `); // 0x180152cda
    int64_t v71 = &v69; // 0x180152d0c
    int64_t v72; // bp-1440, 0x180152350
    int64_t v73 = *(int64_t *)function_180059af0(v71, &v72); // 0x180152d19
    int64_t v74; // bp-1432, 0x180152350
    int64_t v75 = *(int64_t *)function_180059480(v71, &v74); // 0x180152d49
    int64_t v76; // bp-104, 0x180152350
    int64_t v77; // bp-2081, 0x180152350
    int64_t v78 = function_1801533a0(&v76, v75, v73, (int64_t)&v77); // 0x180152d84
    int64_t v79 = function_180153bb0(v70, (int64_t *)v78); // 0x180152dc1
    function_1801535c0((int64_t *)v79, (int16_t *)&g287);
    function_180032380((int64_t)&v76);
    function_1801535c0(&v25, L`
- `, 0x40014); // 0x180152eb4
    function_180032380(v82);
    if (v83 == 6) {
        // 0x180152ed7
        int64_t v84; // bp-72, 0x180152350
        int64_t v85 = function_18005bf20(&v84); // 0x180152edf
        int64_t v86; // bp-296, 0x180152350
        int64_t v87 = &v86; // 0x180152f17
        function_18002bac0(v87, v85);
        function_180032380((int64_t)&v84);
        ShellExecuteW(NULL, L`
- `1.91.0`
- `2.0.0`
- `3ebb649`
- `48 8B 8E ? ? ? ? 48 8B 01 48 8B 80 ? ? ? ? FF 15 ? ? ? ? 48 8D 0D ? ? ? ? 48 89 4D ? 48 89 45`
- `55 41 57 41 56 41 55 41 54 56 57 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 44 0F 29 AD ? ? 00 00 44 0F 29 A5 ? ? 00 00 44 0F 29 9D ? ? 00 00 44 0F 29 95 ? ? 00 00 44 0F 29 8D ? ? 00 00 44 0F 29 85 ? ? 00 00 0F 29 BD ? ? 00 00 0F 29 B5 ? ? 00 00 48 C7 85 ? ? 00 00 FE FF FF FF 4D 89 C6 48 89 D6 48 89 CB 48 8B 89 ? ? 00 00 48 8B 01 48 8B 80 80 02 00 00 FF 15`
- `55 56 53 48 81 EC 90 02 00 00 48 8D AC 24 80 00 00 00 48 C7 85 08 02 00 00 FE FF FF FF 44 88 CB 49 89 D1 48 89 CE 0F 57 C0`
- `;
        __asm_rep_movsb_memcpy((char *)&v36, (char *)&v35, 16);
        function_1800b0b50(&v32, (int128_t *)&v36, (int64_t *)&v29, (int64_t *)&v30);
        v37 = -5;
        v38 = v31;
        v39 = &v29;
        while (true) {
            // 0x1800ed67c
            v45 = -5;
            v42 = v38;
            v40 = v39;
            while (true) {
                // 0x1800ed68a
                v46 = v4 + v45;
                v47 = v11 + v37;
                if ((v45 || v37) == 0) {
                    // 0x1800ed6d8
                    v44 = 80;
                    if (v29 != 1) {
                        goto lab_0x1800ed6ec;
                    } else {
                        goto lab_0x1800ed9da;
                    }
                } else {
                    goto lab_0x1800ed6ec;
                }
            }
            // 0x1800edb48
            function_18005b630(v33, 32);
            v37++;
            v38 = v43;
            v39 = v41;
            if (v37 == 6) {
                // break -> 0x1800edb5d
                break;
            }
        }
        // 0x1800edb5d
        v48 = function_18005a470(v33, 32, v41, v43);
        v49 = `
- `; // bp-288, 0x1800edb71
    int64_t v50; // bp-200, 0x1800ed1d0
    __asm_rep_movsb_memcpy((char *)&v50, (char *)&v49, 16);
    int128_t v51; // bp-184, 0x1800ed1d0
    __asm_rep_movsb_memcpy((char *)&v51, (char *)&v50, 16);
    int128_t v52; // bp-168, 0x1800ed1d0
    __asm_movdqa(v52, __asm_movaps(0));
    int64_t v53; // bp-88, 0x1800ed1d0
    int64_t v54 = function_18004d450(&v53, &v52, v33); // 0x1800edbe8
    function_18005c850(v48, v54);
    function_180032230(&v53);
    function_180032230(&v32);
    v34 = v29 - 1;
    v29 = v34;
    while (v34 >= -2) {
        // 0x1800ed5bd
        v30 = v8 + v34;
        v35 = `
- `==================================================\n`
- `AntiKB`
- `Backtrack::receiveMovement`
- `Backtrack`
- `Baritone`
- `BlockESP`
- `ClientInstance::getBlockSource`
- `ClientInstance::getFovX`
- `ClientInstance::getFovY`
- `ClientInstance::getLevelRenderer`
- `ClientInstance::getLocalPlayerIndex`
- `ClientInstance::guiData`
- `ClientInstance::level`
- `ClientInstance::minecraftGame`
- `ClientInstance::viewMatrix`
- `D3D12SerializeRootSignature`
- `Disabler`
- `Exception: `
- `Flight`
- `FreeCam`
- `GameRenderer::projMatrix`
- `GameRenderer::viewMatrix`
- `GuiData::GuiScale`
- `GuiData::ScreenSizeScaled`
- `GuiData::ScreenSize`
- `GuiData::displayClientMessage`
- `InvMove`
- `LevelRender::getLevelRendererPlayer`
- `LevelRenderer::renderLevel`
- `LevelRendererPlayer::cameraPos`
- `LevelRendererPlayer::projMatrix`
- `LevelRendererPlayer::viewMatrix`
- `MinecraftGame::cursorGrabbed`
- `Nevoy Client `
- `PacketV2 has crashed!\n\n`
- `RtlVerifyVersionInfo`
- `StorageESP`
- `TpMine`
- `Wallhack`
- `XInputGetCapabilities`
- `XInputGetState`
- `[Backtrack] {} : handle() introuvable`
- `[Baritone] ===== MATRIX ({}) pos=({},{},{}) feet=({:.2f},{:.2f},{:.2f}) marker=({},{},{}) task={} stuckTicks={} stuckCycles={} pathIdx={}/{} pathHasGoal={} stall={} digger={} =====`
- `[Baritone] forceBreakMatrix: AUCUN candidat solide trouve dans la matrice locale`
- `[Baritone] forceBreakMatrix: casse ({},{},{}) score={:.2f}`
- `[Baritone] forceBreakMatrix: plafond (2e bloc) au-dessus de la tete -> casse forcee ({},{},{})`
- `[Baritone] forceBreakMatrix: plafond au-dessus de la tete -> casse forcee ({},{},{})`
- `[Baritone] y{:+d} (Y={:4d}): `
- `[Baritone][ARRIVE] cible ({:.1f},{:.1f}) atteinte, feet=({:.2f},{:.2f},{:.2f})`
- `[Baritone][DIG] casse '{}' ({},{},{}) apres {} ticks`
- `[Baritone][DIG] casse ({},{},{}) confirmee air apres {} ticks (early)`
- `[Baritone][DIG] casse instant ({},{},{})`
- `[Baritone][DIG] refuse '{}' ({},{},{}) why={} (vide/incassable)`
- `[Baritone][DIG] start '{}' ({},{},{}) why={}`
- `[Baritone][DIG] survie: {} ticks estimes (rate={:.4f})`
- `[Baritone][MINE] abandon cible ({},{},{}) (anti-stuck 3 cycles)`
- `[Baritone][MINE] cible enterree ({},{},{}) : approche directe`
- `[Baritone][PICKUP] fin ({},{},{}) : {} apres {} ticks`
- `[Baritone][PICKUP] pas de stand pres de ({},{},{}) -> fallback colonne`
- `[Baritone][PICKUP] start ({},{},{})`
- `[Baritone][SCAN] exploration vers ({:.0f},{:.0f})`
- `[Baritone][SCAN] rebuild: {} tuiles a scanner autour de ({},{},{})`
- `[Baritone][SCAN] tuile ({},{},{}) : {} cible(s)`
- `[Baritone][TASK] fin de tache {} (stuckTicks={} stuckCycles={})`
- `[BlockESP] disabled`
- `[BlockESP] enabled (range={})`
- `[CrashHandler] Crash report saved to {}`
- `[InvMove] DISABLED`
- `[InvMove] ENABLED`
- `[InvMove] JUMP`
- `[InvMove] MOVE vx={:.3f} vz={:.3f} yaw={:.1f}`
- `[InvMove] mInputState    fwd={} back={} lft={} rgt={}`
- `[InvMove] mMove x={:.3f} y={:.3f}`
- `[InvMove] mRawInputState fwd={} back={} lft={} rgt={}`
- `[InvMove] ptick={} mg={} grabOffset={:#x} grabbed={}`
- `[InvMove] source=GetAsyncKeyState(AZERTY)`
- `[InvMove] source=mRawInputState`
- `[ModuleManager] Shutting down modules...`
- `[PacketSend] Baritone command cancelled.`
- `[PacketSend] Command cancelled.`
- `[PacketSend] Text: '{}'`
- `[PacketV2] Goodbye!`
- `[PacketV2] Installing hooks...`
- `[PacketV2] Loading signatures & offsets...`
- `[PacketV2] Logger initialized`
- `[PacketV2] MinHook OK`
- `[PacketV2] MinecraftGame::cursorGrabbed offset resolved to {:#x}`
- `[PacketV2] Phase 5 ready`
- `[PacketV2] Starting v{} ({})`
- `[PacketV2] Uninjecting...`
- `[PacketV2] WARN: MinecraftGame::cursorGrabbed signature not found`
- `[Setup] ClientInstance @ {:#x}`
- `[Setup] PacketSendHook re-init for LP @ {:#x}`
- `[StorageESP] disabled`
- `[StorageESP] enabled (range={})`
- `abandon`
- `allowBreak`
- `ancient`
- `anti-stuck matrice`
- `anti-stuck plafond tete+1`
- `anti-stuck plafond tete`
- `antiBorder`
- `antiGravel`
- `antiLava`
- `arrive`
- `assets/clickgui_off.wav`
- `assets/clickgui_on.wav`
- `assets/inject_off.wav`
- `assets/inject_on.wav`
- `autoTool`
- `barrel`
- `bdsMethod`
- `bdsRange`
- `boost`
- `breakMatrix`
- `cOre`
- `cancelPackets`
- `ccMode`
- `chance`
- `chest`
- `clusterSize`
- `coal`
- `d3d12.dll`
- `dOre`
- `debris`
- `debugLog`
- `delayMax`
- `delayMin`
- `dim`
- `dispenserDropper`
- `duration`
- `eOre`
- `emerald`
- `enderchest`
- `esp`
- `ettFlush`
- `filled`
- `gOre`
- `gold`
- `hiveChestDelay`
- `hiveKaHigh`
- `hiveKaMaxHeight`
- `hiveKaWait`
- `hiveRegenPause`
- `hopper`
- `horizontal`
- `hurtTime`
- `iOre`
- `imgui_impl_win32`
- `iron`
- `jump`
- `lapis`
- `lastAttackTimeToWork`
- `message.baritone.stuck_cancelled`
- `message.client.goodbye`
- `message.client.welcome`
- `mineRangeH`
- `mineRangeV`
- `mineReach`
- `minecraft:air`
- `minecraft:ancient_debris`
- `minecraft:coal_ore`
- `minecraft:deepslate_coal_ore`
- `minecraft:deepslate_diamond_ore`
- `minecraft:deepslate_emerald_ore`
- `minecraft:deepslate_gold_ore`
- `minecraft:deepslate_iron_ore`
- `minecraft:deepslate_lapis_ore`
- `minecraft:deepslate_redstone_ore`
- `minecraft:diamond_ore`
- `minecraft:emerald_ore`
- `minecraft:flowing_lava`
- `minecraft:gold_ore`
- `minecraft:gravel`
- `minecraft:iron_ore`
- `minecraft:lapis_ore`
- `minecraft:lava`
- `minecraft:lit_redstone_ore`
- `minecraft:mob_spawner`
- `minecraft:nether_gold_ore`
- `minecraft:quartz_ore`
- `minecraft:redstone_ore`
- `mode`
- `multiplier`
- `nextDelayMax`
- `nextDelayMin`
- `ntdll.dll`
- `packetv2.crash`
- `packetv2.log`
- `pathLine`
- `pauseOnHurtTime`
- `pickup`
- `plafond avant saut (anti-stuck)`
- `quartz`
- `rOre`
- `rangeMax`
- `rangeMin`
- `range`
- `redstone`
- `replan`
- `rotationMode`
- `shulker`
- `spawner`
- `spawners`
- `spectator`
- `speed`
- `swing`
- `targetMode`
- `ticks`
- `timeout`
- `trackingBuffer`
- `value`
- `vertical`