# Cheat / Hack Module Reference

Defensive reference for `Nevoy Client v26.32.dll`. Each section links the in-game module name to its decompiled constructor/function address and the strings it uses.

## Aimbot
**Inferred purpose:** Automatically aims at nearby players/mobs. Likely hooks mouse/camera input.

### `func_0x1800c1050_Aimbot` (`0x1800c1050`)
**Strings referenced:**
- `"Aimbot"`
- `"angleAmount"`
- `"hold"`
- `"lock"`
- `"range"`
- `"smoothness"`
- `"speed"`
- `"vertical"`

## AirJump
**Inferred purpose:** Allows jumping while in mid-air.

### `func_0x1800c1470_AirJump` (`0x1800c1470`)
**Strings referenced:**
- `"AirJump"`

## AirPlace
**Inferred purpose:** Places blocks in the air without support.

### `func_0x1800c1530_AirPlace` (`0x1800c1530`)
**Strings referenced:**
- `"AirPlace"`
- `"fillOpacity"`
- `"lineOpacity"`
- `"reach"`
- `"render"`

## Animations
**Inferred purpose:** Modifies player/item animations.

### `func_0x1800c1870_Animations` (`0x1800c1870`)
**Strings referenced:**
- `"Animations"`
- `"swingAngle"`

## AntiBot
**Inferred purpose:** Ignores server/NPC bots in combat modules.

### `func_0x1800c1a10_AntiBot` (`0x1800c1a10`)
**Strings referenced:**
- `"AntiBot"`
- `"mode"`

## AntiImmobile
**Inferred purpose:** Allows movement when the server sets the player immobile.

### `func_0x1800c1b80_AntiImmobile` (`0x1800c1b80`)
**Strings referenced:**
- `"AntiImmobile"`

## AntiKB
**Inferred purpose:** Prevents or reduces knockback.

### `func_0x1800c1c40_AntiKB` (`0x1800c1c40`)
**Strings referenced:**
- `"AntiKB"`
- `"horizontal"`
- `"vertical"`

## ArrayList
**Inferred purpose:** Cheat/hook component.

### `func_0x1800c1e30_ArrayList` (`0x1800c1e30`)
**Strings referenced:**
- `"ArrayList"`
- `"animMode"`
- `"mode"`
- `"opacity"`
- `"posX"`
- `"posY"`
- `"showModeName"`
- `"spacing"`

## AutoClicker
**Inferred purpose:** Automates left/right clicks at high speed.

### `func_0x1800c2290_AutoClicker` (`0x1800c2290`)
**Strings referenced:**
- `"AutoClicker"`
- `"hold"`
- `"maxCPS"`
- `"minCPS"`
- `"mode"`
- `"rightClick"`
- `"weapons"`

## AutoFishing
**Inferred purpose:** Automates fishing rod casting/reeling.

### `func_0x1800c26a0_AutoFishing` (`0x1800c26a0`)
**Strings referenced:**
- `"AutoFishing"`
- `"debugLog"`
- `"range"`
- `"recastDelay"`
- `"rotationMode"`
- `"splashRange"`
- `"swing"`
- `"timeout"`

## AutoTotem
**Inferred purpose:** Automatically places a totem in the off-hand.

### `func_0x1800c2c10_AutoTotem` (`0x1800c2c10`)
**Strings referenced:**
- `"AutoTotem"`
- `"delay"`
- `"onlyWhenEmpty"`
- `"packetMode"`

## Backtrack
**Inferred purpose:** Rubber-bands/rewinds player positions for easier hits.

### `func_0x1800c2e90_Backtrack` (`0x1800c2e90`)
**Strings referenced:**
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

## Baritone
**Inferred purpose:** Pathfinding/automation bot integration.

### `func_0x1800c3600_Baritone` (`0x1800c3600`)
**Strings referenced:**
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

## BlockESP
**Inferred purpose:** Highlights selected blocks through walls.

### `func_0x1800c44a0_BlockESP` (`0x1800c44a0`)
**Strings referenced:**
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

## Breaker
**Inferred purpose:** Automatically breaks blocks.

### `func_0x1800c4be0_Breaker` (`0x1800c4be0`)
**Strings referenced:**
- `"Breaker"`
- `"beds"`
- `"cakes"`
- `"diamonds"`
- `"eggs"`
- `"range"`
- `"swing"`

## ChestStealer
**Inferred purpose:** Auto-loots containers.

### `func_0x1800c4fa0_ChestStealer` (`0x1800c4fa0`)
**Strings referenced:**
- `"ChestStealer"`
- `"delay"`
- `"enhanced"`

## Criticals
**Inferred purpose:** Forces critical hits.

### `func_0x1800c58e0_Criticals` (`0x1800c58e0`)
**Strings referenced:**
- `"Criticals"`
- `"clientSide"`
- `"distance"`

## CrystalAura
**Inferred purpose:** Auto-places and detonates end crystals in PvP.

### `func_0x1800c5ae0_CrystalAura` (`0x1800c5ae0`)
**Strings referenced:**
- `"CrystalAura"`
- `"attackRange"`
- `"autoPlace"`
- `"autoSelect"`
- `"noPlayer"`
- `"placeRange"`
- `"playerRange"`

## DestroyProgress
**Inferred purpose:** Modifies block break progress/speed.

### `func_0x1800c5ea0_DestroyProgress` (`0x1800c5ea0`)
**Strings referenced:**
- `"DestroyProgress"`
- `"filled"`
- `"showText"`

## DeviceId
**Inferred purpose:** Cheat/hook component.

### `func_0x1800c6080_DeviceId` (`0x1800c6080`)
**Strings referenced:**
- `"DeviceId"`

## Disabler
**Inferred purpose:** Cancels/modifies outgoing packets to bypass anti-cheat.

### `func_0x1800c61e0_Disabler` (`0x1800c61e0`)
**Strings referenced:**
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

## ESP
**Inferred purpose:** General entity/players extra-sensory perception overlay.

### `func_0x1800c6740_ESP` (`0x1800c6740`)
**Strings referenced:**
- `"ESP"`
- `"filled"`
- `"maxDist"`
- `"showDist"`
- `"showItems"`
- `"showMobs"`
- `"showNames"`
- `"showPlayers"`

## FastEat
**Inferred purpose:** Speeds up eating/consumable use.

### `func_0x1800c6b30_FastEat` (`0x1800c6b30`)
**Strings referenced:**
- `"FastEat"`
- `"speed"`

## FastPlace
**Inferred purpose:** Removes block placement delay.

### `func_0x1800c6ca0_FastPlace` (`0x1800c6ca0`)
**Strings referenced:**
- `"FastPlace"`

## Flight
**Inferred purpose:** Allows the player to fly in survival/creative-like.

### `func_0x1800c6d60_Flight` (`0x1800c6d60`)
**Strings referenced:**
- `"Flight"`
- `"bdsMethod"`
- `"bdsRange"`
- `"boost"`
- `"duration"`
- `"mode"`
- `"speed"`
- `"value"`

## FlySpoof
**Inferred purpose:** Spoofs fly-related packets/flags.

### `func_0x1800c7290_FlySpoof` (`0x1800c7290`)
**Strings referenced:**
- `"FlySpoof"`
- `"range"`
- `"smooth"`
- `"smoothSpeed"`

## FreeCam
**Inferred purpose:** Detaches the camera to fly around freely.

### `func_0x1800c7580_FreeCam` (`0x1800c7580`)
**Strings referenced:**
- `"FreeCam"`
- `"cancelPackets"`
- `"spectator"`
- `"speed"`

## FreeLook
**Inferred purpose:** Looks around without turning the player.

### `func_0x1800c7840_FreeLook` (`0x1800c7840`)
**Strings referenced:**
- `"FreeLook"`

## FullBright
**Inferred purpose:** Maximum gamma / no darkness.

### `func_0x1800c7900_FullBright` (`0x1800c7900`)
**Strings referenced:**
- `"FullBright"`
- `"gamma"`

## HitBox
**Inferred purpose:** Expands entity hitboxes.

### `func_0x1800c7a70_HitBox` (`0x1800c7a70`)
**Strings referenced:**
- `"HitBox"`
- `"height"`
- `"range"`
- `"width"`

## Interface
**Inferred purpose:** Cheat/hook component.

### `func_0x1800c7d20_Interface` (`0x1800c7d20`)
**Strings referenced:**
- `");\n    function_1800969b0(v5, &v11);\n    function_180032230(&v11);\n    int64_t v12; // bp-312, 0x1800c7d20\n    function_18002ab30(&v12, "`
- `");\n    function_1800969b0(v5, &v12);\n    function_180032230(&v12);\n    int64_t v13; // bp-264, 0x1800c7d20\n    function_18002ab30(&v13, "`
- `");\n    function_1800969b0(v5, &v13);\n    function_180032230(&v13);\n    int64_t v14; // bp-216, 0x1800c7d20\n    function_18002ab30(&v14, "`
- `");\n    function_1800969b0(v5, &v14);\n    function_180032230(&v14);\n    int64_t v15; // bp-168, 0x1800c7d20\n    function_18002ab30(&v15, "`
- `");\n    function_1800969b0(v5, &v15);\n    function_180032230(&v15);\n    int64_t v16; // bp-120, 0x1800c7d20\n    function_18002ab30(&v16, "`
- `");\n    function_1800969b0(v5, &v16);\n    function_180032230(&v16);\n    int64_t v17; // bp-72, 0x1800c7d20\n    function_18002ab30(&v17, "`
- `");\n    function_1800969b0(v5, &v17);\n    function_180032230(&v17);\n    function_18012ad00(a1, "`
- `"Interface"`
- `"colorMode"`
- `"saturation"`

## InvManager
**Inferred purpose:** Auto-sorts/throws inventory items.

### `func_0x1800c82d0_InvManager` (`0x1800c82d0`)
**Strings referenced:**
- `"InvManager"`
- `"autoArmor"`
- `"autoSort"`
- `"axeSlot"`
- `"blockSlot"`
- `"clean"`
- `"delay"`
- `"packetMode"`
- `"pickSlot"`
- `"swordSlot"`

## InvMove
**Inferred purpose:** Walk around while inventory screens are open.

### `func_0x1800c8790_InvMove` (`0x1800c8790`)
**Strings referenced:**
- `"InvMove"`

## Jesus
**Inferred purpose:** Walk on water.

### `func_0x1800c8860_Jesus` (`0x1800c8860`)
**Strings referenced:**
- `"Jesus"`
- `"height"`
- `"mode"`

## KillAura
**Inferred purpose:** Auto-attacks nearby players/mobs.

### `func_0x1800c8a50_KillAura` (`0x1800c8a50`)
**Strings referenced:**
- `"KillAura"`
- `"doRotate"`
- `"doSwing"`
- `"hitMobs"`
- `"hitPlayers"`
- `"hold"`
- `"maxAPS"`
- `"minAPS"`
- `"mode"`
- `"random"`
- `"range"`
- `"rotSpeed"`
- `"rotations"`
- `"smoothing"`
- `"useHurtTime"`

## MidClick
**Inferred purpose:** Bind/activate module on middle mouse click.

### `func_0x1800c9180_MidClick` (`0x1800c9180`)
**Strings referenced:**
- `"MidClick"`
- `"mode"`
- `"swing"`

## NameTags
**Inferred purpose:** Renders larger/always-visible name tags.

### `func_0x1800c9570_NameTags` (`0x1800c9570`)
**Strings referenced:**
- `"NameTags"`
- `"displayArmor"`
- `"fontScale"`
- `"headOffset"`
- `"maxDist"`
- `"opacity"`
- `"underline"`

## NoFall
**Inferred purpose:** Prevents fall damage.

### `func_0x1800c9930_NoFall` (`0x1800c9930`)
**Strings referenced:**
- `"NoFall"`

## NoJumpDelay
**Inferred purpose:** Removes jump cooldown.

### `func_0x1800c99f0_NoJumpDelay` (`0x1800c99f0`)
**Strings referenced:**
- `"NoJumpDelay"`

## NoSlow
**Inferred purpose:** Negates slowdown from blocking/soulsand/web.

### `func_0x1800c9ab0_NoSlow` (`0x1800c9ab0`)
**Strings referenced:**
- `"NoSlow"`

## Notifications
**Inferred purpose:** Shows on-screen module status popups.

### `func_0x1800c9b70_Notifications` (`0x1800c9b70`)
**Strings referenced:**
- `"Notifications"`
- `"opacity"`

## Nuker
**Inferred purpose:** Breaks a large area of blocks rapidly.

### `func_0x1800c9ce0_Nuker` (`0x1800c9ce0`)
**Strings referenced:**
- `"Nuker"`
- `"autoTool"`
- `"blocksPerTick"`
- `"depth"`
- `"instaBreak"`
- `"mode"`
- `"radius"`
- `"range"`
- `"sideDown"`
- `"sideLeft"`
- `"sideRight"`
- `"sideUp"`
- `"swing"`

## Phase
**Inferred purpose:** Walks through blocks.

### `func_0x1800ca3f0_Phase` (`0x1800ca3f0`)
**Strings referenced:**
- `"Phase"`
- `"vertical"`

## Reach
**Inferred purpose:** Extends attack/build reach distance.

### `func_0x1800ca560_Reach` (`0x1800ca560`)
**Strings referenced:**
- `"Reach"`
- `"reachValue"`

## Regen
**Inferred purpose:** Accelerates health regeneration.

### `func_0x1800ca730_Regen` (`0x1800ca730`)
**Strings referenced:**
- `"Regen"`
- `"autoTool"`
- `"range"`
- `"rebreakDelay"`
- `"rotate"`
- `"swing"`

## Scaffold
**Inferred purpose:** Auto-places blocks under the player while walking.

### `func_0x1800caba0_Scaffold` (`0x1800caba0`)
**Strings referenced:**
- `");\n    function_1800969b0(v4, &v33);\n    function_180032230(&v33);\n    int64_t v34; // bp-640, 0x1800caba0\n    function_18002ab30(&v34, "`
- `");\n    function_1800969b0(v4, &v34);\n    function_180032230(&v34);\n    int64_t v35; // bp-592, 0x1800caba0\n    function_18002ab30(&v35, "`
- `");\n    function_1800969b0(v4, &v35);\n    function_180032230(&v35);\n    int64_t v36; // bp-544, 0x1800caba0\n    function_18002ab30(&v36, "`
- `");\n    function_1800969b0(v4, &v36);\n    function_180032230(&v36);\n    int64_t v37; // bp-496, 0x1800caba0\n    function_18002ab30(&v37, "`
- `");\n    function_1800969b0(v4, &v37);\n    function_180032230(&v37);\n    int64_t v38; // bp-448, 0x1800caba0\n    function_18002ab30(&v38, "`
- `");\n    function_1800969b0(v4, &v38);\n    function_180032230(&v38);\n    int64_t v39; // bp-400, 0x1800caba0\n    function_18002ab30(&v39, "`
- `");\n    function_1800969b0(v4, &v39);\n    function_180032230(&v39);\n    int64_t v40; // bp-352, 0x1800caba0\n    function_18002ab30(&v40, "`
- `");\n    function_1800969b0(v4, &v40);\n    function_180032230(&v40);\n    int64_t v41; // bp-304, 0x1800caba0\n    function_18002ab30(&v41, "`
- `");\n    function_1800969b0(v4, &v41);\n    function_180032230(&v41);\n    int64_t v42; // bp-256, 0x1800caba0\n    function_18002ab30(&v42, "`
- `");\n    function_1800969b0(v4, &v42);\n    function_180032230(&v42);\n    int64_t v43; // bp-208, 0x1800caba0\n    function_18002ab30(&v43, "`
- `");\n    function_1800969b0(v4, &v43);\n    function_180032230(&v43);\n    int64_t v44; // bp-160, 0x1800caba0\n    function_18002ab30(&v44, "`
- `");\n    function_1800969b0(v4, &v44);\n    function_180032230(&v44);\n    int64_t v45; // bp-112, 0x1800caba0\n    function_18002ab30(&v45, "`
- `");\n    function_1800969b0(v4, &v45);\n    function_180032230(&v45);\n    int64_t v46; // bp-64, 0x1800caba0\n    function_18002ab30(&v46, "`
- `");\n    function_1800969b0(v4, &v46);\n    function_180032230(&v46);\n    function_18012ac70(a1, "`
- `", v11);\n    function_18012ad90(a1, "`
- ... and 11 more

## Sneak
**Inferred purpose:** Auto-sneak or modified sneak behavior.

### `func_0x1800cb950_Sneak` (`0x1800cb950`)
**Strings referenced:**
- `"Sneak"`

## SoundLocation
**Inferred purpose:** Cheat/hook component.

### `func_0x1800cba10_SoundLocation` (`0x1800cba10`)
**Strings referenced:**
- `"SoundLocation"`
- `"lifetime"`
- `"maxDist"`
- `"maxSounds"`
- `"showName"`

## Speed
**Inferred purpose:** Increases movement speed.

### `func_0x1800cbd30_Speed` (`0x1800cbd30`)
**Strings referenced:**
- `"Speed"`
- `"friction"`
- `"jumpHeight"`
- `"mode"`
- `"speed"`
- `"speedMax"`
- `"speedMin"`
- `"strafe"`

### `func_0x18012c9e0_Speed` (`0x18012c9e0`)
**Strings referenced:**
- `"Angle"`
- `"Hold"`
- `"Lock"`
- `"Range"`
- `"Smoothness"`
- `"Speed"`
- `"Vertical"`

### `func_0x18012f540_Speed` (`0x18012f540`)
**Strings referenced:**
- `"Instant"`
- `"Speed"`

### `func_0x18012f5a0_Speed` (`0x18012f5a0`)
**Strings referenced:**
- `"Speed"`

### `func_0x18012fb10_Speed` (`0x18012fb10`)
**Strings referenced:**
- `"AncientDebris"`
- `"AntiBorder"`
- `"AntiGravel"`
- `"AntiLava"`
- `"ClusterSize"`
- `"Coal"`
- `"Diamond"`
- `"Emerald"`
- `"Gold"`
- `"Iron"`
- `"Lapis"`
- `"Quartz"`
- `"Range"`
- `"Redstone"`
- `"Spawners"`
- ... and 1 more

## SpeedMine
**Inferred purpose:** Accelerates mining speed.

### `func_0x1800cc170_SpeedMine` (`0x1800cc170`)
**Strings referenced:**
- `"SpeedMine"`
- `"instant"`
- `"speed"`

## Spider
**Inferred purpose:** Climbs walls like a spider.

### `func_0x1800cc350_Spider` (`0x1800cc350`)
**Strings referenced:**
- `"Spider"`
- `"speed"`

## Sprint
**Inferred purpose:** Forces sprinting.

### `func_0x1800cc4c0_Sprint` (`0x1800cc4c0`)
**Strings referenced:**
- `"Sprint"`

## Statistics
**Inferred purpose:** Cheat/hook component.

### `func_0x1800cc580_Statistics` (`0x1800cc580`)
**Strings referenced:**
- `"Statistics"`
- `"deaths"`
- `"games"`
- `"kills"`
- `"mode"`
- `"opacity"`
- `"outline"`

### `func_0x18012c540_Statistics` (`0x18012c540`)
**Strings referenced:**
- `"Statistics"`

### `func_0x180130310_Statistics` (`0x180130310`)
**Strings referenced:**
- `"Statistics"`

## Step
**Inferred purpose:** Automatically steps up full blocks.

### `func_0x1800cc9b0_Step` (`0x1800cc9b0`)
**Strings referenced:**
- `"Step"`
- `"height"`

## StorageESP
**Inferred purpose:** Highlights chests/shulkers/barrels through walls.

### `func_0x1800ccb20_StorageESP` (`0x1800ccb20`)
**Strings referenced:**
- `"StorageESP"`
- `"barrel"`
- `"chest"`
- `"dispenserDropper"`
- `"enderchest"`
- `"filled"`
- `"hopper"`
- `"range"`
- `"shulker"`

## TargetHUD
**Inferred purpose:** Displays info about the current target.

### `func_0x1800cd0b0_TargetHUD` (`0x1800cd0b0`)
**Strings referenced:**
- `"TargetHUD"`
- `"animation"`
- `"mode"`
- `"opacity"`
- `"range"`
- `"showItems"`

## TargetStrafe
**Inferred purpose:** Strafes around the current target automatically.

### `func_0x1800cd4b0_TargetStrafe` (`0x1800cd4b0`)
**Strings referenced:**
- `"TargetStrafe"`
- `"controllable"`
- `"edgeCheck"`
- `"mode"`
- `"onKeyHeld"`
- `"radius"`
- `"range"`
- `"speed"`

## ThirdPersonNametag
**Inferred purpose:** Cheat/hook component.

### `func_0x1800cda00_ThirdPersonNametag` (`0x1800cda00`)
**Strings referenced:**
- `"ThirdPersonNametag"`

### `func_0x180107fa0_ThirdPersonNametag` (`0x180107fa0`)
**Strings referenced:**
- `"ThirdPersonNametag"`

### `func_0x1801694f0_ThirdPersonNametag` (`0x1801694f0`)
**Strings referenced:**
- `"74 ? 48 8B 03 48 8B 80 ? ? ? ? 48 89 D9 FF 15 ? ? ? ? 84 C0 75 ? 48 8B 4B"`
- `"ThirdPersonNametag"`

## Timer
**Inferred purpose:** Speeds up/slows down client tick rate.

### `func_0x1800cdaf0_Timer` (`0x1800cdaf0`)
**Strings referenced:**
- `"Timer"`
- `"timerSpeed"`

## TpMine
**Inferred purpose:** Teleports to mined blocks or packet mining.

### `func_0x1800cdca0_TpMine` (`0x1800cdca0`)
**Strings referenced:**
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
- ... and 2 more

## Tracers
**Inferred purpose:** Draws lines to entities.

### `func_0x1800ce4c0_Tracers` (`0x1800ce4c0`)
**Strings referenced:**
- `"Tracers"`
- `"centerPoint"`
- `"maxDist"`
- `"mode"`
- `"showMobs"`
- `"showPlayers"`
- `"thickness"`

## TriggerBot
**Inferred purpose:** Auto-attacks when crosshair is on an entity.

### `func_0x1800ce8e0_TriggerBot` (`0x1800ce8e0`)
**Strings referenced:**
- `"TriggerBot"`
- `"aps"`
- `"range"`

## Velocity
**Inferred purpose:** Modifies incoming velocity/knockback.

### `func_0x1800ceb10_Velocity` (`0x1800ceb10`)
**Strings referenced:**
- `"Velocity"`
- `"horizontal"`
- `"mode"`
- `"vertical"`

### `func_0x1800fa9e0_Velocity` (`0x1800fa9e0`)
**Strings referenced:**
- `"Normal"`
- `"Velocity"`

## Wallhack
**Inferred purpose:** See entities/blocks through walls.

### `func_0x1800ced70_Wallhack` (`0x1800ced70`)
**Strings referenced:**
- `"Wallhack"`

## Zoom
**Inferred purpose:** Hold-to-zoom camera.

### `func_0x1800cee30_Zoom` (`0x1800cee30`)
**Strings referenced:**
- `"Zoom"`
- `"isToggle"`
- `"strength"`
