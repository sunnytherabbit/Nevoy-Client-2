# Cheat / Hack Module Reference

This is a defensive reference for the `Nevoy Client v26.32.dll` cheat.

## ClickGUI sounds

### `func_0x1800044b0_assets_clickgui` (`0x1800044b0`)
- **Original name:** `function_1800044b0`
- **Inferred purpose:** UI on/off sound assets.
- **Strings referenced in decompiled body:**
  - `"assets/clickgui_off.wav"`
  - `"assets/clickgui_on.wav"`

## Client branding / init

### `func_0x1800153c0_Nevoy_Client` (`0x1800153c0`)
- **Original name:** `function_1800153c0`
- **Inferred purpose:** Client name string and initialization routines.
- **Strings referenced in decompiled body:**
  - `"Nevoy Client "`

### `func_0x18001b880_Nevoy_Client` (`0x18001b880`)
- **Original name:** `function_18001b880`
- **Inferred purpose:** Client name string and initialization routines.
- **Strings referenced in decompiled body:**
  - `"Nevoy Client "`

## PacketV2 logger/patcher

### `func_0x18004ee60_PacketV2` (`0x18004ee60`)
- **Original name:** `function_18004ee60`
- **Inferred purpose:** Packet send/receive hooking and logging.
- **Strings referenced in decompiled body:**
  - `"[PacketV2] Logger initialized"`
  - `"packetv2.log"`

### `func_0x180152350_PacketV2` (`0x180152350`)
- **Original name:** `function_180152350`
- **Inferred purpose:** Packet send/receive hooking and logging.
- **Strings referenced in decompiled body:**
  - `");
    function_1801535c0(&v25, L"`
  - `");
    int64_t v80; // bp-1312, 0x180152350
    int64_t v81; // bp-328, 0x180152350
    function_180158c00((int64_t)&v80, &v81);
    int64_t v82 = &v81; // 0x180152e7a
    int32_t v83 = MessageBoxW(NULL, (int16_t *)function_180031380(v82), L"`
  - `"); // 0x180152838
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
            int64_t v51 = function_1801535c0(&v25, L"`
  - `"); // 0x180152a36
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
        int64_t v62 = function_1801535c0(&v25, L"`
  - `"); // 0x180152bc2
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
    int64_t v70 = function_1801535c0(&v25, L"`
  - `"); // 0x180152cda
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
    function_1801535c0(&v25, L"`
  - `", 0x40014); // 0x180152eb4
    function_180032380(v82);
    if (v83 == 6) {
        // 0x180152ed7
        int64_t v84; // bp-72, 0x180152350
        int64_t v85 = function_18005bf20(&v84); // 0x180152edf
        int64_t v86; // bp-296, 0x180152350
        int64_t v87 = &v86; // 0x180152f17
        function_18002bac0(v87, v85);
        function_180032380((int64_t)&v84);
        ShellExecuteW(NULL, L"`
  - `"Exception: "`
  - `"PacketV2 has crashed!\\n\\n"`
  - `"[CrashHandler] Crash report saved to {}"`
  - `"packetv2.crash"`

### `func_0x180169750_PacketV2` (`0x180169750`)
- **Original name:** `function_180169750`
- **Inferred purpose:** Packet send/receive hooking and logging.
- **Strings referenced in decompiled body:**
  - `"2.0.0"`
  - `"3ebb649"`
  - `"MinecraftGame::cursorGrabbed"`
  - `"[PacketV2] Goodbye!"`
  - `"[PacketV2] Installing hooks..."`
  - `"[PacketV2] Loading signatures & offsets..."`
  - `"[PacketV2] MinHook OK"`
  - `"[PacketV2] MinecraftGame::cursorGrabbed offset resolved to {:#x}"`
  - `"[PacketV2] Phase 5 ready"`
  - `"[PacketV2] Starting v{} ({})"`
  - `"[PacketV2] Uninjecting..."`
  - `"[PacketV2] WARN: MinecraftGame::cursorGrabbed signature not found"`
  - `"assets/inject_off.wav"`
  - `"assets/inject_on.wav"`
  - `"message.client.goodbye"`
  - `"message.client.welcome"`

## Backtrack

### `func_0x18005ec20_Backtrack` (`0x18005ec20`)
- **Original name:** `function_18005ec20`
- **Inferred purpose:** Network/rubber-band exploit; cancels/replays player positions.
- **Strings referenced in decompiled body:**
  - `"[Backtrack] {} : handle() introuvable"`

### `func_0x1800c2e90_Backtrack` (`0x1800c2e90`)
- **Original name:** `function_1800c2e90`
- **Inferred purpose:** Network/rubber-band exploit; cancels/replays player positions.
- **Strings referenced in decompiled body:**
  - `"Backtrack"`
  - `"chance"`
  - `"delayMax"`
  - `"delayMin"`
  - `"esp"`
  - `"hurtTime"`
  - `"lastAttackTimeToWork"`
  - `"nextDelayMax"`
  - `"nextDelayMin"`
  - `"pauseOnHurtTime"`
  - `"rangeMax"`
  - `"rangeMin"`
  - `"targetMode"`
  - `"trackingBuffer"`

### `func_0x18016b7c0_Backtrack` (`0x18016b7c0`)
- **Original name:** `function_18016b7c0`
- **Inferred purpose:** Network/rubber-band exploit; cancels/replays player positions.
- **Strings referenced in decompiled body:**
  - `"Backtrack::receiveMovement"`

## Baritone automation

### `func_0x180063f90_Baritone` (`0x180063f90`)
- **Original name:** `function_180063f90`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"[PacketSend] Baritone command cancelled."`
  - `"[PacketSend] Command cancelled."`
  - `"[PacketSend] Text: '{}'"`

### `func_0x18006fb70_Baritone` (`0x18006fb70`)
- **Original name:** `function_18006fb70`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"[Baritone][TASK] fin de tache {} (stuckTicks={} stuckCycles={})"`

### `func_0x1800c3600_Baritone` (`0x1800c3600`)
- **Original name:** `function_1800c3600`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"Baritone"`
  - `"allowBreak"`
  - `"autoTool"`
  - `"debugLog"`
  - `"mineRangeH"`
  - `"mineRangeV"`
  - `"mineReach"`
  - `"pathLine"`
  - `"pickup"`
  - `"rotationMode"`
  - `"speed"`
  - `"swing"`

### `func_0x1800e02a0_Baritone` (`0x1800e02a0`)
- **Original name:** `function_1800e02a0`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"[Baritone][MINE] cible enterree ({},{},{}) : approche directe"`
  - `"minecraft:air"`

### `func_0x1800ed1d0_Baritone` (`0x1800ed1d0`)
- **Original name:** `function_1800ed1d0`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `";
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
        v49 = "`
  - `"; // bp-288, 0x1800edb71
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
        v35 = "`
  - `"[Baritone] ===== MATRIX ({}) pos=({},{},{}) feet=({:.2f},{:.2f},{:.2f}) marker=({},{},{}) task={} stuckTicks={} stuckCycles={} pathIdx={}/{} pathHasGoal={} stall={} digger={} ====="`
  - `"[Baritone] y{:+d} (Y={:4d}): "`

### `func_0x1800f0f50_Baritone` (`0x1800f0f50`)
- **Original name:** `function_1800f0f50`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"[Baritone][ARRIVE] cible ({:.1f},{:.1f}) atteinte, feet=({:.2f},{:.2f},{:.2f})"`

### `func_0x1800f3f60_Baritone` (`0x1800f3f60`)
- **Original name:** `function_1800f3f60`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"[Baritone] forceBreakMatrix: AUCUN candidat solide trouve dans la matrice locale"`
  - `"[Baritone] forceBreakMatrix: casse ({},{},{}) score={:.2f}"`
  - `"[Baritone] forceBreakMatrix: plafond (2e bloc) au-dessus de la tete -> casse forcee ({},{},{})"`
  - `"[Baritone] forceBreakMatrix: plafond au-dessus de la tete -> casse forcee ({},{},{})"`
  - `"anti-stuck matrice"`
  - `"anti-stuck plafond tete"`
  - `"anti-stuck plafond tete+1"`

### `func_0x1800fc5e0_Baritone` (`0x1800fc5e0`)
- **Original name:** `function_1800fc5e0`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"[Baritone][MINE] abandon cible ({},{},{}) (anti-stuck 3 cycles)"`
  - `"abandon"`
  - `"breakMatrix"`
  - `"jump"`
  - `"message.baritone.stuck_cancelled"`
  - `"plafond avant saut (anti-stuck)"`
  - `"replan"`

### `func_0x1801019c0_Baritone` (`0x1801019c0`)
- **Original name:** `function_1801019c0`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"[Baritone][SCAN] exploration vers ({:.0f},{:.0f})"`

### `func_0x18010aa80_Baritone` (`0x18010aa80`)
- **Original name:** `function_18010aa80`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"[Baritone][PICKUP] fin ({},{},{}) : {} apres {} ticks"`
  - `"[Baritone][PICKUP] pas de stand pres de ({},{},{}) -> fallback colonne"`
  - `"arrive"`
  - `"timeout"`

### `func_0x180131ba0_Baritone` (`0x180131ba0`)
- **Original name:** `function_180131ba0`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"[Baritone][SCAN] tuile ({},{},{}) : {} cible(s)"`

### `func_0x180134080_Baritone` (`0x180134080`)
- **Original name:** `function_180134080`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"[Baritone][DIG] casse instant ({},{},{})"`
  - `"[Baritone][DIG] refuse '{}' ({},{},{}) why={} (vide/incassable)"`
  - `"[Baritone][DIG] start '{}' ({},{},{}) why={}"`
  - `"[Baritone][DIG] survie: {} ticks estimes (rate={:.4f})"`
  - `"[Baritone][PICKUP] start ({},{},{})"`

### `func_0x180134e50_Baritone` (`0x180134e50`)
- **Original name:** `function_180134e50`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"[Baritone][ARRIVE] cible ({:.1f},{:.1f}) atteinte, feet=({:.2f},{:.2f},{:.2f})"`

### `func_0x1801383e0_Baritone` (`0x1801383e0`)
- **Original name:** `function_1801383e0`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"[Baritone][DIG] casse '{}' ({},{},{}) apres {} ticks"`
  - `"[Baritone][DIG] casse ({},{},{}) confirmee air apres {} ticks (early)"`
  - `"[Baritone][PICKUP] start ({},{},{})"`
  - `"minecraft:air"`

### `func_0x18013a1c0_Baritone` (`0x18013a1c0`)
- **Original name:** `function_18013a1c0`
- **Inferred purpose:** Pathfinding/automation bot; references task state and packet sending.
- **Strings referenced in decompiled body:**
  - `"[Baritone][SCAN] rebuild: {} tuiles a scanner autour de ({},{},{})"`

## GuiData hooks

### `func_0x18006f0d0_GuiData` (`0x18006f0d0`)
- **Original name:** `function_18006f0d0`
- **Inferred purpose:** HUD / screen / display-message hooks.
- **Strings referenced in decompiled body:**
  - `"GuiData::displayClientMessage"`

### `func_0x18015df40_GuiData` (`0x18015df40`)
- **Original name:** `function_18015df40`
- **Inferred purpose:** HUD / screen / display-message hooks.
- **Strings referenced in decompiled body:**
  - `"GuiData::ScreenSize"`

### `func_0x18015dfd0_GuiData` (`0x18015dfd0`)
- **Original name:** `function_18015dfd0`
- **Inferred purpose:** HUD / screen / display-message hooks.
- **Strings referenced in decompiled body:**
  - `"GuiData::ScreenSizeScaled"`

### `func_0x18015e060_GuiData` (`0x18015e060`)
- **Original name:** `function_18015e060`
- **Inferred purpose:** HUD / screen / display-message hooks.
- **Strings referenced in decompiled body:**
  - `"GuiData::GuiScale"`

### `func_0x180168870_GuiData` (`0x180168870`)
- **Original name:** `function_180168870`
- **Inferred purpose:** HUD / screen / display-message hooks.
- **Strings referenced in decompiled body:**
  - `"55 56 53 48 81 EC 90 02 00 00 48 8D AC 24 80 00 00 00 48 C7 85 08 02 00 00 FE FF FF FF 44 88 CB 49 89 D1 48 89 CE 0F 57 C0"`
  - `"GuiData::displayClientMessage"`

## ClientInstance hooks

### `func_0x180070350_ClientInstance` (`0x180070350`)
- **Original name:** `function_180070350`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"ClientInstance::getBlockSource"`

### `func_0x180070630_ClientInstance` (`0x180070630`)
- **Original name:** `function_180070630`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"ClientInstance::guiData"`

### `func_0x1800706c0_ClientInstance` (`0x1800706c0`)
- **Original name:** `function_1800706c0`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"ClientInstance::getLocalPlayerIndex"`

### `func_0x180074b10_ClientInstance` (`0x180074b10`)
- **Original name:** `function_180074b10`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"[Setup] ClientInstance @ {:#x}"`
  - `"[Setup] PacketSendHook re-init for LP @ {:#x}"`

### `func_0x1800f9470_ClientInstance` (`0x1800f9470`)
- **Original name:** `function_1800f9470`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"ClientInstance::minecraftGame"`

### `func_0x18015d400_ClientInstance` (`0x18015d400`)
- **Original name:** `function_18015d400`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"ClientInstance::level"`

### `func_0x18015d490_ClientInstance` (`0x18015d490`)
- **Original name:** `function_18015d490`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"ClientInstance::guiData"`

### `func_0x18015d520_ClientInstance` (`0x18015d520`)
- **Original name:** `function_18015d520`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"ClientInstance::viewMatrix"`

### `func_0x18015d5b0_ClientInstance` (`0x18015d5b0`)
- **Original name:** `function_18015d5b0`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"ClientInstance::getFovX"`

### `func_0x18015d640_ClientInstance` (`0x18015d640`)
- **Original name:** `function_18015d640`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"ClientInstance::getFovY"`

### `func_0x18015d6d0_ClientInstance` (`0x18015d6d0`)
- **Original name:** `function_18015d6d0`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"ClientInstance::getLevelRenderer"`

### `func_0x18015d760_ClientInstance` (`0x18015d760`)
- **Original name:** `function_18015d760`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"ClientInstance::getBlockSource"`

### `func_0x18015dd00_ClientInstance` (`0x18015dd00`)
- **Original name:** `function_18015dd00`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"ClientInstance::minecraftGame"`

### `func_0x180167fb0_ClientInstance` (`0x180167fb0`)
- **Original name:** `function_180167fb0`
- **Inferred purpose:** Core game-client structure hooks (local player, block source, guiData, level, viewMatrix, FOV).
- **Strings referenced in decompiled body:**
  - `"48 8B 8E ? ? ? ? 48 8B 01 48 8B 80 ? ? ? ? FF 15 ? ? ? ? 48 8D 0D ? ? ? ? 48 89 4D ? 48 89 45"`
  - `"ClientInstance::getLocalPlayerIndex"`

## ModuleManager

### `func_0x18008dbb0_module` (`0x18008dbb0`)
- **Original name:** `function_18008dbb0`
- **Inferred purpose:** Cheat-module loader / config dumper.
- **Strings referenced in decompiled body:**
  - `"[ModuleManager] Shutting down modules..."`

### `func_0x180246d40_module` (`0x180246d40`)
- **Original name:** `function_180246d40`
- **Inferred purpose:** Cheat-module loader / config dumper.
- **Strings referenced in decompiled body:**
  - `"D3D12SerializeRootSignature"`
  - `"d3d12.dll"`

### `func_0x18024b6f0_module` (`0x18024b6f0`)
- **Original name:** `function_18024b6f0`
- **Inferred purpose:** Cheat-module loader / config dumper.
- **Strings referenced in decompiled body:**
  - `"1.91.0"`
  - `"XInputGetCapabilities"`
  - `"XInputGetState"`
  - `"imgui_impl_win32"`

### `func_0x18024dcf0_module` (`0x18024dcf0`)
- **Original name:** `function_18024dcf0`
- **Inferred purpose:** Cheat-module loader / config dumper.
- **Strings referenced in decompiled body:**
  - `"RtlVerifyVersionInfo"`
  - `"ntdll.dll"`

## modules not initialized

### `func_0x18008f410_modules_not_initialized` (`0x18008f410`)
- **Original name:** `function_18008f410`
- **Inferred purpose:** Cheat-related function.
- **Strings referenced in decompiled body:**
  - `"           MODULES CONFIG DUMP\\n"`
  - `"(modules not initialized yet)\\n"`
  - `");
                function_180078370(function_1800371d0(v16, (int64_t *)(v14 + 64)), "`
  - `");
                function_18007f940(&v12);
                v14 = v12;
            }
        }
        // 0x18008f885
        function_180078370(v4, "`
  - `");
                v16 = function_180078370(function_1800371d0(v15, (int64_t *)(v14 + 32)), "`
  - `");
            function_180078370(function_1800371d0(v16, (int64_t *)(v14 + 64)), "`
  - `");
            function_18007f940(&v12);
            v14 = v12;
            while (*(char *)(v12 + 25) == 0) {
                // 0x18008f7be
                v15 = function_180078370(v4, "`
  - `");
            function_18007f940(&v12);
            v14 = v12;
        }
    }
    // 0x18008f885
    function_180078370(v4, "`
  - `");
            v16 = function_180078370(function_1800371d0(v15, (int64_t *)(v14 + 32)), "`
  - `");
        function_180078370(function_1800371d0(v10, (int64_t *)(*(int64_t *)v9 + 16)), "`
  - `");
        function_180078370(function_1800371d0(v16, (int64_t *)(v14 + 64)), "`
  - `");
        function_18007f940(&v12);
        v14 = v12;
        while (*(char *)(v12 + 25) == 0) {
            // 0x18008f7be
            v15 = function_180078370(v4, "`
  - `");
        v12 = *(int64_t *)v11;
        __asm_rep_stosb_memset((char *)&v13, 0, 1);
        v14 = v12;
        if (*(char *)(v12 + 25) == 0) {
            v15 = function_180078370(v4, "`
  - `");
        v16 = function_180078370(function_1800371d0(v15, (int64_t *)(v14 + 32)), "`
  - `");
    function_18007f0c0((int64_t)&v11);
    v9 += 8;
    while (v9 != v8) {
        // 0x18008f63d
        v10 = function_180078370(v4, "`
  - `");
    int64_t v11; // bp-280, 0x18008f410
    int64_t v12 = *(int64_t *)v11; // bp-552, 0x18008f755
    int64_t v13; // bp-600, 0x18008f410
    __asm_rep_stosb_memset((char *)&v13, 0, 1);
    int64_t v14 = v12; // 0x18008f7b8
    int64_t v15; // 0x18008f83c
    int64_t v16; // 0x18008f85b
    if (*(char *)(v12 + 25) == 0) {
        v15 = function_180078370(v4, "`
  - `"); // 0x18008f659
    function_180078370(function_1800371d0(v10, (int64_t *)(*(int64_t *)v9 + 16)), "`
  - `"==================================================\\n"`

## Anti Knockback / Velocity

### `func_0x1800c1c40_AntiKB` (`0x1800c1c40`)
- **Original name:** `function_1800c1c40`
- **Inferred purpose:** Removes/reduces knockback/velocity effects.
- **Strings referenced in decompiled body:**
  - `"AntiKB"`
  - `"horizontal"`
  - `"vertical"`

## Block ESP

### `func_0x1800c44a0_BlockESP` (`0x1800c44a0`)
- **Original name:** `function_1800c44a0`
- **Inferred purpose:** Highlights specific blocks (ores/chests) through the world.
- **Strings referenced in decompiled body:**
  - `"BlockESP"`
  - `"cOre"`
  - `"dOre"`
  - `"debris"`
  - `"eOre"`
  - `"filled"`
  - `"gOre"`
  - `"iOre"`
  - `"rOre"`
  - `"range"`
  - `"spawner"`

### `func_0x1801052e0_BlockESP` (`0x1801052e0`)
- **Original name:** `function_1801052e0`
- **Inferred purpose:** Highlights specific blocks (ores/chests) through the world.
- **Strings referenced in decompiled body:**
  - `"[BlockESP] disabled"`

### `func_0x180106f90_BlockESP` (`0x180106f90`)
- **Original name:** `function_180106f90`
- **Inferred purpose:** Highlights specific blocks (ores/chests) through the world.
- **Strings referenced in decompiled body:**
  - `"[BlockESP] enabled (range={})"`

## Disabler

### `func_0x1800c61e0_Disabler` (`0x1800c61e0`)
- **Original name:** `function_1800c61e0`
- **Inferred purpose:** Cancels or modifies outgoing packets to bypass anti-cheat.
- **Strings referenced in decompiled body:**
  - `"Disabler"`
  - `"ccMode"`
  - `"ettFlush"`
  - `"hiveChestDelay"`
  - `"hiveKaHigh"`
  - `"hiveKaMaxHeight"`
  - `"hiveKaWait"`
  - `"hiveRegenPause"`
  - `"mode"`
  - `"multiplier"`
  - `"ticks"`

## Flight / Air movement

### `func_0x1800c6d60_Flight` (`0x1800c6d60`)
- **Original name:** `function_1800c6d60`
- **Inferred purpose:** Allows the player to fly or move in air.
- **Strings referenced in decompiled body:**
  - `"Flight"`
  - `"bdsMethod"`
  - `"bdsRange"`
  - `"boost"`
  - `"duration"`
  - `"mode"`
  - `"speed"`
  - `"value"`

## FreeCam

### `func_0x1800c7580_FreeCam` (`0x1800c7580`)
- **Original name:** `function_1800c7580`
- **Inferred purpose:** Detaches the camera from the player for free-roam viewing.
- **Strings referenced in decompiled body:**
  - `"FreeCam"`
  - `"cancelPackets"`
  - `"spectator"`
  - `"speed"`

## Inventory Move

### `func_0x1800c8790_InvMove` (`0x1800c8790`)
- **Original name:** `function_1800c8790`
- **Inferred purpose:** Allows movement while in inventory screens.
- **Strings referenced in decompiled body:**
  - `"InvMove"`

### `func_0x180105a50_InvMove` (`0x180105a50`)
- **Original name:** `function_180105a50`
- **Inferred purpose:** Allows movement while in inventory screens.
- **Strings referenced in decompiled body:**
  - `"[InvMove] DISABLED"`

### `func_0x1801076e0_InvMove` (`0x1801076e0`)
- **Original name:** `function_1801076e0`
- **Inferred purpose:** Allows movement while in inventory screens.
- **Strings referenced in decompiled body:**
  - `"[InvMove] ENABLED"`

### `func_0x18010c470_InvMove` (`0x18010c470`)
- **Original name:** `function_18010c470`
- **Inferred purpose:** Allows movement while in inventory screens.
- **Strings referenced in decompiled body:**
  - `"MinecraftGame::cursorGrabbed"`
  - `"[InvMove] JUMP"`
  - `"[InvMove] MOVE vx={:.3f} vz={:.3f} yaw={:.1f}"`
  - `"[InvMove] mInputState    fwd={} back={} lft={} rgt={}"`
  - `"[InvMove] mMove x={:.3f} y={:.3f}"`
  - `"[InvMove] mRawInputState fwd={} back={} lft={} rgt={}"`
  - `"[InvMove] ptick={} mg={} grabOffset={:#x} grabbed={}"`
  - `"[InvMove] source=GetAsyncKeyState(AZERTY)"`
  - `"[InvMove] source=mRawInputState"`

## Storage ESP

### `func_0x1800ccb20_StorageESP` (`0x1800ccb20`)
- **Original name:** `function_1800ccb20`
- **Inferred purpose:** Highlights storage containers (chests, shulkers, etc.).
- **Strings referenced in decompiled body:**
  - `"StorageESP"`
  - `"barrel"`
  - `"chest"`
  - `"dispenserDropper"`
  - `"enderchest"`
  - `"filled"`
  - `"hopper"`
  - `"range"`
  - `"shulker"`

### `func_0x180106480_StorageESP` (`0x180106480`)
- **Original name:** `function_180106480`
- **Inferred purpose:** Highlights storage containers (chests, shulkers, etc.).
- **Strings referenced in decompiled body:**
  - `"[StorageESP] disabled"`

### `func_0x180107cc0_StorageESP` (`0x180107cc0`)
- **Original name:** `function_180107cc0`
- **Inferred purpose:** Highlights storage containers (chests, shulkers, etc.).
- **Strings referenced in decompiled body:**
  - `"[StorageESP] enabled (range={})"`

## X-Ray / Ore ESP

### `func_0x1800cdca0_lapis` (`0x1800cdca0`)
- **Original name:** `function_1800cdca0`
- **Inferred purpose:** References lapis_block and lapis_ore; part of BlockESP/ore highlighting.
- **Strings referenced in decompiled body:**
  - `"TpMine"`
  - `"ancient"`
  - `"antiBorder"`
  - `"antiGravel"`
  - `"antiLava"`
  - `"clusterSize"`
  - `"coal"`
  - `"dim"`
  - `"emerald"`
  - `"gold"`
  - `"iron"`
  - `"lapis"`
  - `"quartz"`
  - `"range"`
  - `"redstone"`
  - `"spawners"`
  - `"speed"`

### `func_0x1801080f0_lapis` (`0x1801080f0`)
- **Original name:** `function_1801080f0`
- **Inferred purpose:** References lapis_block and lapis_ore; part of BlockESP/ore highlighting.
- **Strings referenced in decompiled body:**
  - `"minecraft:ancient_debris"`
  - `"minecraft:coal_ore"`
  - `"minecraft:deepslate_coal_ore"`
  - `"minecraft:deepslate_diamond_ore"`
  - `"minecraft:deepslate_emerald_ore"`
  - `"minecraft:deepslate_gold_ore"`
  - `"minecraft:deepslate_iron_ore"`
  - `"minecraft:deepslate_lapis_ore"`
  - `"minecraft:deepslate_redstone_ore"`
  - `"minecraft:diamond_ore"`
  - `"minecraft:emerald_ore"`
  - `"minecraft:flowing_lava"`
  - `"minecraft:gold_ore"`
  - `"minecraft:gravel"`
  - `"minecraft:iron_ore"`
  - `"minecraft:lapis_ore"`
  - `"minecraft:lava"`
  - `"minecraft:lit_redstone_ore"`
  - `"minecraft:mob_spawner"`
  - `"minecraft:nether_gold_ore"`
  - ... and 2 more

## Wallhack / ESP

### `func_0x1800ced70_Wallhack` (`0x1800ced70`)
- **Original name:** `function_1800ced70`
- **Inferred purpose:** Renders entities or blocks through walls; references ClientInstance viewMatrix/Fov.
- **Strings referenced in decompiled body:**
  - `"Wallhack"`

## projMatrix

### `func_0x1800f9310_projMatrix` (`0x1800f9310`)
- **Original name:** `function_1800f9310`
- **Inferred purpose:** Cheat-related function.
- **Strings referenced in decompiled body:**
  - `"GameRenderer::projMatrix"`

### `func_0x18015dc70_projMatrix` (`0x18015dc70`)
- **Original name:** `function_18015dc70`
- **Inferred purpose:** Cheat-related function.
- **Strings referenced in decompiled body:**
  - `"LevelRendererPlayer::projMatrix"`

### `func_0x18015deb0_projMatrix` (`0x18015deb0`)
- **Original name:** `function_18015deb0`
- **Inferred purpose:** Cheat-related function.
- **Strings referenced in decompiled body:**
  - `"GameRenderer::projMatrix"`

## viewMatrix

### `func_0x1800f93c0_viewMatrix` (`0x1800f93c0`)
- **Original name:** `function_1800f93c0`
- **Inferred purpose:** Cheat-related function.
- **Strings referenced in decompiled body:**
  - `"GameRenderer::viewMatrix"`

### `func_0x18015dbe0_viewMatrix` (`0x18015dbe0`)
- **Original name:** `function_18015dbe0`
- **Inferred purpose:** Cheat-related function.
- **Strings referenced in decompiled body:**
  - `"LevelRendererPlayer::viewMatrix"`

### `func_0x18015de20_viewMatrix` (`0x18015de20`)
- **Original name:** `function_18015de20`
- **Inferred purpose:** Cheat-related function.
- **Strings referenced in decompiled body:**
  - `"GameRenderer::viewMatrix"`

## getLevelRenderer

### `func_0x18015dac0_getLevelRenderer` (`0x18015dac0`)
- **Original name:** `function_18015dac0`
- **Inferred purpose:** Cheat-related function.
- **Strings referenced in decompiled body:**
  - `"LevelRender::getLevelRendererPlayer"`

## cameraPos

### `func_0x18015db50_cameraPos` (`0x18015db50`)
- **Original name:** `function_18015db50`
- **Inferred purpose:** Cheat-related function.
- **Strings referenced in decompiled body:**
  - `"LevelRendererPlayer::cameraPos"`

## renderLevel

### `func_0x180168190_renderLevel` (`0x180168190`)
- **Original name:** `function_180168190`
- **Inferred purpose:** Cheat-related function.
- **Strings referenced in decompiled body:**
  - `"55 41 57 41 56 41 55 41 54 56 57 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 44 0F 29 AD ? ? 00 00 44 0F 29 A5 ? ? 00 00 44 0F 29 9D ? ? 00 00 44 0F 29 95 ? ? 00 00 44 0F 29 8D ? ? 00 00 44 0F 29 85 ? ? 00 00 0F 29 BD ? ? 00 00 0F 29 B5 ? ? 00 00 48 C7 85 ? ? 00 00 FE FF FF FF 4D 89 C6 48 89 D6 48 89 CB 48 8B 89 ? ? 00 00 48 8B 01 48 8B 80 80 02 00 00 FF 15"`
  - `"LevelRenderer::renderLevel"`
