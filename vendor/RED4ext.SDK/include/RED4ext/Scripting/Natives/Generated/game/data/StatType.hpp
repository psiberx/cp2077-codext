#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data { 
enum class StatType : uint32_t
{
    Acceleration = 0,
    Accuracy = 1,
    Adrenaline = 2,
    AimFOV = 3,
    AimInTime = 4,
    AimOffset = 5,
    AimOutTime = 6,
    AllowMovementInput = 7,
    AllowRotation = 8,
    AmmoPerQuickMelee = 9,
    Armor = 10,
    Assault = 11,
    AssaultMastery = 12,
    AssaultTrait01Stat = 13,
    Athletics = 14,
    AthleticsMastery = 15,
    AthleticsTrait01Stat = 16,
    AttackPenetration = 17,
    AttackSpeed = 18,
    AttackSpeedPercent = 19,
    AttacksNumber = 20,
    AttacksPerSecond = 21,
    AttacksPerSecondBase = 22,
    AudioLocomotionStimRangeMultiplier = 23,
    AudioStimRangeMultiplier = 24,
    AutoReveal = 25,
    AutocraftDuration = 26,
    AutomaticReplenishment = 27,
    AutomaticUploadPerk = 28,
    BaseChargeTime = 29,
    BaseDamage = 30,
    BaseDamageMax = 31,
    BaseDamageMin = 32,
    BaseKnockdownImpulse = 33,
    BerserkArmorBonus = 34,
    BerserkCooldownBase = 35,
    BerserkCooldownReduction = 36,
    BerserkDurationBase = 37,
    BerserkHealthRegenBonus = 38,
    BerserkMeleeDamageBonus = 39,
    BerserkRecoilReduction = 40,
    BerserkResistancesBonus = 41,
    BerserkShockwaveDamage = 42,
    BerserkShockwaveRangeBonus = 43,
    BerserkSwayReduction = 44,
    BleedingApplicationRate = 45,
    BleedingImmunity = 46,
    BlindImmunity = 47,
    BlindResistance = 48,
    BlockFactor = 49,
    BlockLocomotionWhenLeaningOutOfCover = 50,
    BlockReduction = 51,
    BonusCarryCapacity = 52,
    BonusChargeDamage = 53,
    BonusDPS = 54,
    BonusDamageAgainstBosses = 55,
    BonusDamageAgainstElites = 56,
    BonusDamageAgainstMechanicals = 57,
    BonusDamageAgainstRares = 58,
    BonusDamagePerHit = 59,
    BonusDmgVsRaresAndElites = 60,
    BonusHealth = 61,
    BonusMemory = 62,
    BonusQuickHackDamage = 63,
    BonusRecoilKick = 64,
    BonusRicochetDamage = 65,
    BonusSpreadChange = 66,
    BonusStamina = 67,
    Brake = 68,
    BrakeDot = 69,
    Brawling = 70,
    BrawlingMastery = 71,
    BrawlingTrait01Stat = 72,
    BufferSize = 73,
    BulletMagnetismDefaultAngle = 74,
    BulletMagnetismHighVelocityAngle = 75,
    BulletPseudoPierceHitVFxChance = 76,
    BulletSurroundingHitVFxChance = 77,
    BurningApplicationRate = 78,
    BurningImmunity = 79,
    BurningRegenStamina = 80,
    CPUPower = 81,
    CallReinforcement = 82,
    CameraShutdownExtension = 83,
    CanAerialTakedown = 84,
    CanAimWhileDodging = 85,
    CanAskToFollowOrder = 86,
    CanAskToHolsterWeapon = 87,
    CanAutomaticallyDisassembleJunk = 88,
    CanAutomaticallyRestoreKnives = 89,
    CanBleedingCriticallyHit = 90,
    CanBleedingSlowTarget = 91,
    CanBlindQuickHack = 92,
    CanBlock = 93,
    CanBreatheUnderwater = 94,
    CanBuffCamoQuickHack = 95,
    CanBuffMechanicalsOnTakeControl = 96,
    CanBuffSturdinessQuickHack = 97,
    CanBurningCriticallyHit = 98,
    CanCallDrones = 99,
    CanCallReinforcements = 100,
    CanCatchUp = 101,
    CanCatchUpDistance = 102,
    CanCharge = 103,
    CanChargedShoot = 104,
    CanCloseCombat = 105,
    CanCommsCallInQuickHack = 106,
    CanCommsCallOutQuickHack = 107,
    CanCommsNoiseQuickHack = 108,
    CanControlFullyChargedWeapon = 109,
    CanCraftEpicItems = 110,
    CanCraftFromInventory = 111,
    CanCraftLegendaryItems = 112,
    CanCraftRareItems = 113,
    CanCraftTechAmmunition = 114,
    CanCrouch = 115,
    CanCyberwareMalfunctionQuickHack = 116,
    CanDash = 117,
    CanDataMineQuickHack = 118,
    CanDealFullDamageToArmored = 119,
    CanDeathQuickHack = 120,
    CanDisassemble = 121,
    CanDisassembleConsumables = 122,
    CanDisassembleGadgets = 123,
    CanDropWeapon = 124,
    CanElectrocuteNullifyStats = 125,
    CanElectrocuteRoot = 126,
    CanExitWSOnSoundStimuli = 127,
    CanExplodeQuickHack = 128,
    CanFastTravelWhileEncumbered = 129,
    CanForceDismbember = 130,
    CanFullyChargeWeapon = 131,
    CanGrab = 132,
    CanGrappleAndroids = 133,
    CanGrappleSilently = 134,
    CanGrenadeLaunch = 135,
    CanGrenadeQuickHack = 136,
    CanGrenadesCriticallyHit = 137,
    CanGrenadesDealExternalDamage = 138,
    CanGuardBreak = 139,
    CanHeartattackQuickHack = 140,
    CanIgnoreArmorDamageReduction = 141,
    CanIgnoreStamina = 142,
    CanInstaKillNPCs = 143,
    CanInstallTechMods = 144,
    CanJamWeaponQuickHack = 145,
    CanJump = 146,
    CanLandSilently = 147,
    CanLegendaryCraftedWeaponsBeBoosted = 148,
    CanLegendaryCraftedWeaponsBeBoosted2 = 149,
    CanLocomotionMalfunctionQuickHack = 150,
    CanMadnessQuickHack = 151,
    CanMalfunctionQuickHack = 152,
    CanMeleeBerserk = 153,
    CanMeleeDash = 154,
    CanMeleeInfinitelyCombo = 155,
    CanMeleeLeap = 156,
    CanMeleeLeapTakedown = 157,
    CanOverchargeWeapon = 158,
    CanOverheatQuickHack = 159,
    CanOverloadQuickHack = 160,
    CanOverrideAttitudeQuickHack = 161,
    CanOverrideAuthorizationQuickHack = 162,
    CanParry = 163,
    CanPickUpBodyAfterTakedown = 164,
    CanPickUpWeapon = 165,
    CanPingQuickHack = 166,
    CanPlayerBoostConsumables = 167,
    CanPlayerBoostGrenades = 168,
    CanPlayerPiercePoisonImmunity = 169,
    CanPoisonLowerArmor = 170,
    CanPoisonSlow = 171,
    CanPreciseShoot = 172,
    CanPushBack = 173,
    CanPushFromGrapple = 174,
    CanQuickHackCriticallyHit = 175,
    CanQuickMeleeStagger = 176,
    CanQuickhack = 177,
    CanQuickhackHealPuppet = 178,
    CanQuickhackTransferBetweenEnemies = 179,
    CanRegenInCombat = 180,
    CanRemoveModsFromClothing = 181,
    CanRemoveModsFromWeapons = 182,
    CanResurrectAllies = 183,
    CanRetrieveModsFromDisassemble = 184,
    CanRunSilently = 185,
    CanSandevistanSprintHarass = 186,
    CanScrapPartsFromMechanicals = 187,
    CanSeeGrenadeRadius = 188,
    CanSeeRicochetVisuals = 189,
    CanSeeThroughWalls = 190,
    CanShareThreatsWithPlayer = 191,
    CanShootWhileCarryingBody = 192,
    CanShootWhileDodging = 193,
    CanShootWhileGrappling = 194,
    CanShootWhileMoving = 195,
    CanShootWhileVaulting = 196,
    CanSilentKill = 197,
    CanSmartShoot = 198,
    CanSprint = 199,
    CanSprintHarass = 200,
    CanSprintWhileCarryingBody = 201,
    CanSuicideQuickHack = 202,
    CanSwitchWeapon = 203,
    CanTakeControlQuickHack = 204,
    CanTakedownLethally = 205,
    CanTakedownSilently = 206,
    CanTaunt = 207,
    CanThrowWeapon = 208,
    CanUpgradeFromInventory = 209,
    CanUpgradeToLegendaryQuality = 210,
    CanUseAntiStun = 211,
    CanUseBiohazardGrenades = 212,
    CanUseCloseRing = 213,
    CanUseCombatStims = 214,
    CanUseConsumables = 215,
    CanUseCoolingSystem = 216,
    CanUseCovers = 217,
    CanUseCuttingGrenades = 218,
    CanUseEMPGrenades = 219,
    CanUseExtremeRing = 220,
    CanUseFarRing = 221,
    CanUseFlashbangGrenades = 222,
    CanUseFragGrenades = 223,
    CanUseGrenades = 224,
    CanUseHolographicCamo = 225,
    CanUseIncendiaryGrenades = 226,
    CanUseLeftHand = 227,
    CanUseLegs = 228,
    CanUseMantisBlades = 229,
    CanUseMediumRing = 230,
    CanUseMeleeRing = 231,
    CanUseOpticalCamo = 232,
    CanUsePainInhibitors = 233,
    CanUsePersonalSoundSilencer = 234,
    CanUsePhoneUnderWater = 235,
    CanUseProjectileLauncher = 236,
    CanUseReconGrenades = 237,
    CanUseRetractableShield = 238,
    CanUseRightHand = 239,
    CanUseShootingSpots = 240,
    CanUseStaticCamo = 241,
    CanUseStrongArms = 242,
    CanUseTakedowns = 243,
    CanUseTerrainCamo = 244,
    CanUseZoom = 245,
    CanWalkSilently = 246,
    CanWallStick = 247,
    CanWeaponBlock = 248,
    CanWeaponBlockAttack = 249,
    CanWeaponComboAttack = 250,
    CanWeaponCriticallyHit = 251,
    CanWeaponCrouchAttack = 252,
    CanWeaponDash = 253,
    CanWeaponDeflect = 254,
    CanWeaponIgnoreArmor = 255,
    CanWeaponInfinitlyCombo = 256,
    CanWeaponJumpAttack = 257,
    CanWeaponLeap = 258,
    CanWeaponMalfunctionQuickHack = 259,
    CanWeaponReduceArmor = 260,
    CanWeaponReload = 261,
    CanWeaponReloadWhileInactive = 262,
    CanWeaponReloadWhileSliding = 263,
    CanWeaponReloadWhileSprinting = 264,
    CanWeaponReloadWhileVaulting = 265,
    CanWeaponSafeAttack = 266,
    CanWeaponShoot = 267,
    CanWeaponShootWhileSliding = 268,
    CanWeaponShootWhileSprinting = 269,
    CanWeaponShootWhileVaulting = 270,
    CanWeaponSnapToLimbs = 271,
    CanWeaponSprintAttack = 272,
    CanWeaponStrongAttack = 273,
    CanWeaponTriggerHeadshot = 274,
    CannotBeDetectedWhileSubmerged = 275,
    CannotBeHealed = 276,
    CannotSprintHarass = 277,
    CarryCapacity = 278,
    CausingPanicReducesUltimateHacksCost = 279,
    Charge = 280,
    ChargeDischargeTime = 281,
    ChargeFullMultiplier = 282,
    ChargeMaxTimeInChargedState = 283,
    ChargeMultiplier = 284,
    ChargeReadyPercentage = 285,
    ChargeShouldFireWhenReady = 286,
    ChargeTime = 287,
    ChemicalDamage = 288,
    ChemicalDamageMax = 289,
    ChemicalDamageMin = 290,
    ChemicalDamagePercent = 291,
    ChemicalResistance = 292,
    ClimbSpeedModifier = 293,
    ClipTimesCycle = 294,
    ClipTimesCycleBase = 295,
    ClipTimesCyclePlusReload = 296,
    ClipTimesCyclePlusReloadBase = 297,
    CloudComputingTraps = 298,
    ColdBlood = 299,
    ColdBloodBuffBonus = 300,
    ColdBloodDurationReductor = 301,
    ColdBloodMastery = 302,
    ColdBloodMaxDuration = 303,
    ColdBloodMaxStacks = 304,
    ColdBloodTrait01 = 305,
    CombatHacking = 306,
    CombatHackingMastery = 307,
    CommsNoiseJamOnQuickhack = 308,
    ControlledRandomPower = 309,
    Cool = 310,
    CoolAlocated = 311,
    CoolAvailable = 312,
    Crafting = 313,
    CraftingBonusArmorValue = 314,
    CraftingBonusArmorValue2 = 315,
    CraftingBonusConsumableDuration = 316,
    CraftingBonusGrenadeDamage = 317,
    CraftingBonusWeaponDamage = 318,
    CraftingBonusWeaponDamage2 = 319,
    CraftingCostReduction = 320,
    CraftingItemLevelBoost = 321,
    CraftingMastery = 322,
    CraftingMaterialDropChance = 323,
    CraftingMaterialRandomGrantChance = 324,
    CraftingMaterialRetrieveChance = 325,
    CraftingTrait01 = 326,
    CritChance = 327,
    CritChanceTimeCritDamage = 328,
    CritDPSBonus = 329,
    CritDamage = 330,
    CyberwareCooldownReduction = 331,
    CycleTime = 332,
    CycleTimeAimBlockDuration = 333,
    CycleTimeAimBlockStart = 334,
    CycleTimeBase = 335,
    CycleTimeBonus = 336,
    CycleTimeShootingMult = 337,
    CycleTimeShootingMultPeriod = 338,
    CycleTime_Burst = 339,
    CycleTime_BurstMaxCharge = 340,
    CycleTime_BurstSecondary = 341,
    CycleTriggerModeTime = 342,
    DPS = 343,
    DamageFalloffDisabled = 344,
    DamageHackSpread = 345,
    DamagePerHit = 346,
    DamageReductionDamageOverTime = 347,
    DamageReductionExplosion = 348,
    DamageReductionMelee = 349,
    DamageReductionQuickhacks = 350,
    DashAttackStaminaCostReduction = 351,
    DataLeakTraps = 352,
    DealsChemicalDamage = 353,
    DealsElectricDamage = 354,
    DealsPhysicalDamage = 355,
    DealsThermalDamage = 356,
    Deceleration = 357,
    DefeatedHeadDamageThreshold = 358,
    DefeatedLArmDamageThreshold = 359,
    DefeatedLLegDamageThreshold = 360,
    DefeatedRArmDamageThreshold = 361,
    DefeatedRLegDamageThreshold = 362,
    DefeatingEnemiesReduceHacksCost = 363,
    Demolition = 364,
    DemolitionMastery = 365,
    DemolitionTrait01Stat = 366,
    Detection = 367,
    DeviceMemoryCostReduction = 368,
    DisableCyberwareOnBurning = 369,
    DisassemblingIngredientsDoubleBonus = 370,
    DisassemblingMaterialQualityObtainChance = 371,
    DismHeadDamageThreshold = 372,
    DismLArmDamageThreshold = 373,
    DismLLegDamageThreshold = 374,
    DismRArmDamageThreshold = 375,
    DismRLegDamageThreshold = 376,
    DoNotCheckFriendlyFireMadnessPassive = 377,
    DummyResistanceStat = 378,
    Durability = 379,
    DurationBonusBleeding = 380,
    DurationBonusBurning = 381,
    DurationBonusElectrified = 382,
    DurationBonusPoisoned = 383,
    DurationBonusQuickhack = 384,
    DurationBonusStun = 385,
    DurationReductionDot = 386,
    EMPImmunity = 387,
    EffectiveDPS = 388,
    EffectiveDamagePerHit = 389,
    EffectiveDamagePerHitMax = 390,
    EffectiveDamagePerHitMin = 391,
    EffectiveDamagePerHitTimesAttacksPerSecond = 392,
    EffectiveRange = 393,
    ElectricDamage = 394,
    ElectricDamageMax = 395,
    ElectricDamageMin = 396,
    ElectricDamagePercent = 397,
    ElectricResistance = 398,
    ElectrocuteImmunity = 399,
    ElectrocutedApplicationRate = 400,
    ElementalDamagePerHit = 401,
    ElementalResistanceMultiplier = 402,
    EmptyReloadTime = 403,
    Engineering = 404,
    EngineeringMastery = 405,
    EngineeringTrait01 = 406,
    EquipActionDuration_Corpo = 407,
    EquipActionDuration_Gang = 408,
    EquipAnimationDuration_Corpo = 409,
    EquipAnimationDuration_Gang = 410,
    EquipDuration = 411,
    EquipDuration_First = 412,
    EquipItemTime_Corpo = 413,
    EquipItemTime_Gang = 414,
    EvadeImpulse = 415,
    Evasion = 416,
    ExplosionKillsRecudeUltimateHacksCost = 417,
    FFInputLock = 418,
    FallDamageReduction = 419,
    FearOnQuickHackKill = 420,
    FullAutoOnFullCharge = 421,
    GenericStatPrereqValue = 422,
    Gunslinger = 423,
    GunslingerMastery = 424,
    GunslingerTrait01Stat = 425,
    HackedEnemiesGetDamagedByFriendlyFire = 426,
    HackedEnemyArmorReduction = 427,
    Hacking = 428,
    HackingMastery = 429,
    HackingPenetration = 430,
    HackingResistance = 431,
    HackingResistanceUltimate = 432,
    HasAdditionalSplinterSlot = 433,
    HasAheadTargeting = 434,
    HasAirHover = 435,
    HasAirThrusters = 436,
    HasAutoReloader = 437,
    HasAutomaticReplenishment = 438,
    HasAutomaticTagging = 439,
    HasBerserk = 440,
    HasBleedImmunity = 441,
    HasBlindImmunity = 442,
    HasBoostedCortex = 443,
    HasBurningBuffs = 444,
    HasCameraLinking = 445,
    HasChargeJump = 446,
    HasCritImmunity = 447,
    HasCyberdeck = 448,
    HasCybereye = 449,
    HasDodge = 450,
    HasDodgeAir = 451,
    HasDoubleJump = 452,
    HasElectricCoating = 453,
    HasElectroPlating = 454,
    HasExtendedHitReactionImmunity = 455,
    HasFireproofSkin = 456,
    HasGPS = 457,
    HasGlowingTattoos = 458,
    HasGraphiteTissue = 459,
    HasHackingInteractions = 460,
    HasHealingReapplication = 461,
    HasHealthMonitorBomb = 462,
    HasHostileHackImmunity = 463,
    HasICELevelBooster = 464,
    HasInfravision = 465,
    HasJuiceInjector = 466,
    HasKerenzikov = 467,
    HasKerenzikovSlide = 468,
    HasKers = 469,
    HasLinkToBountySystem = 470,
    HasLoweringPerception = 471,
    HasMadnessLvl4Passive = 472,
    HasMajorQuickhackResistance = 473,
    HasMechanicalControl = 474,
    HasMeleeImmunity = 475,
    HasMeleeTargeting = 476,
    HasMetabolicEnhancer = 477,
    HasMuzzleBrake = 478,
    HasPoisonHeal = 479,
    HasPoisonImmunity = 480,
    HasPowerGrip = 481,
    HasQuickhackResistance = 482,
    HasRemoteBotAccessPointBreach = 483,
    HasSandevistan = 484,
    HasSandevistanTier1 = 485,
    HasSandevistanTier2 = 486,
    HasSandevistanTier3 = 487,
    HasSecondHeart = 488,
    HasSelfHealingSkin = 489,
    HasSmartLink = 490,
    HasSpiderBotControl = 491,
    HasStunImmunity = 492,
    HasSubdermalArmor = 493,
    HasSuperheroFall = 494,
    HasThermovision = 495,
    HasTimedImmunity = 496,
    HasToxicCleanser = 497,
    HasWallRunSkill = 498,
    HeadshotDamageMultiplier = 499,
    HeadshotImmunity = 500,
    Health = 501,
    HealthInCombatRegenDelayOnChange = 502,
    HealthInCombatRegenEnabled = 503,
    HealthInCombatRegenEndThreshold = 504,
    HealthInCombatRegenRate = 505,
    HealthInCombatRegenRateAdd = 506,
    HealthInCombatRegenRateBase = 507,
    HealthInCombatRegenRateMult = 508,
    HealthInCombatRegenStartThreshold = 509,
    HealthInCombatStartDelay = 510,
    HealthMonitorCooldownDuration = 511,
    HealthOutOfCombatRegenDelayOnChange = 512,
    HealthOutOfCombatRegenEnabled = 513,
    HealthOutOfCombatRegenEndThreshold = 514,
    HealthOutOfCombatRegenRate = 515,
    HealthOutOfCombatRegenRateAdd = 516,
    HealthOutOfCombatRegenRateBase = 517,
    HealthOutOfCombatRegenRateMult = 518,
    HealthOutOfCombatRegenStartThreshold = 519,
    Hearing = 520,
    HeavyAttacksNumber = 521,
    HighlightAccessPoint = 522,
    HitDismembermentFactor = 523,
    HitReactionDamageHealthFactor = 524,
    HitReactionFactor = 525,
    HitShapeArmor = 526,
    HitTimerAfterDefeated = 527,
    HitTimerAfterImpact = 528,
    HitTimerAfterImpactMelee = 529,
    HitTimerAfterKnockdown = 530,
    HitTimerAfterPain = 531,
    HitTimerAfterStagger = 532,
    HitTimerAfterStaggerMelee = 533,
    HitWoundsFactor = 534,
    HoldDuration = 535,
    HoldEnterDuration = 536,
    HoldTimeoutDuration = 537,
    HolographicSkinCooldownDuration = 538,
    HolographicSkinDuration = 539,
    HousingBuffsDurationBonus = 540,
    IconicItemUpgraded = 541,
    ImpactDamageThreshold = 542,
    ImpactDamageThresholdImpulse = 543,
    ImpactDamageThresholdInCover = 544,
    Intelligence = 545,
    IntelligenceAlocated = 546,
    IntelligenceAvailable = 547,
    IntelligenceSkillcheckBonus = 548,
    IntrinsicQuickHackUploadBonus = 549,
    IntrinsicReloadTimeBonus = 550,
    IntrinsicZoomLevelBonus = 551,
    IsAggressive = 552,
    IsBalanced = 553,
    IsBlocking = 554,
    IsCautious = 555,
    IsCrowd = 556,
    IsDefensive = 557,
    IsDeflecting = 558,
    IsDodgeStaminaFree = 559,
    IsDodging = 560,
    IsFastMeleeArchetype = 561,
    IsFastRangedArchetype = 562,
    IsGenericMeleeArchetype = 563,
    IsGenericRangedArchetype = 564,
    IsHeavyRangedArchetype = 565,
    IsInvulnerable = 566,
    IsItemBroken = 567,
    IsItemCracked = 568,
    IsItemCrafted = 569,
    IsItemIconic = 570,
    IsItemUpgraded = 571,
    IsManBig = 572,
    IsManMassive = 573,
    IsMechanical = 574,
    IsNetrunnerArchetype = 575,
    IsNotSlowedDuringADS = 576,
    IsNotSlowedDuringBlock = 577,
    IsNotSlowedDuringReload = 578,
    IsReckless = 579,
    IsShotgunnerArchetype = 580,
    IsSniperArchetype = 581,
    IsSprintStaminaFree = 582,
    IsStrongMeleeArchetype = 583,
    IsTechieArchetype = 584,
    IsTier1Archetype = 585,
    IsTier2Archetype = 586,
    IsTier3Archetype = 587,
    IsTier4Archetype = 588,
    IsWeakspot = 589,
    IsWeaponLethal = 590,
    ItemArmor = 591,
    ItemLevel = 592,
    ItemRequiresElectroPlating = 593,
    ItemRequiresPowerGrip = 594,
    ItemRequiresSmartLink = 595,
    JumpHeight = 596,
    Kenjutsu = 597,
    KenjutsuMastery = 598,
    KenjutsuTrait01Stat = 599,
    KnockdownDamageThreshold = 600,
    KnockdownDamageThresholdImpulse = 601,
    KnockdownDamageThresholdInCover = 602,
    KnockdownImmunity = 603,
    KnockdownImpulse = 604,
    Level = 605,
    Liberty_Padre_BurningApplicationRate = 606,
    LimbHealth = 607,
    LinearDirectionUpdateMax = 608,
    LinearDirectionUpdateMaxADS = 609,
    LinearDirectionUpdateMin = 610,
    LinearDirectionUpdateMinADS = 611,
    LowerActiveCooldownOnDefeat = 612,
    LowerHackingResistanceOnHack = 613,
    MagazineCapacity = 614,
    MagazineCapacityBase = 615,
    MagazineCapacityBonus = 616,
    MaxDuration = 617,
    MaxPercentDamageTakenPerHit = 618,
    MaxSpeed = 619,
    MaxStacks = 620,
    MaxStacksBonusBleeding = 621,
    MaxStacksBonusBurning = 622,
    MaximumRange = 623,
    MechanicalsBuffDPSBonus = 624,
    MeleeAttackComboDuration = 625,
    MeleeAttackDuration = 626,
    Memory = 627,
    MemoryCostModifier = 628,
    MemoryCostReduction = 629,
    MemoryInCombatRegenDelayOnChange = 630,
    MemoryInCombatRegenEnabled = 631,
    MemoryInCombatRegenEndThreshold = 632,
    MemoryInCombatRegenRate = 633,
    MemoryInCombatRegenRateAdd = 634,
    MemoryInCombatRegenRateBase = 635,
    MemoryInCombatRegenRateMult = 636,
    MemoryInCombatRegenStartThreshold = 637,
    MemoryInCombatStartDelay = 638,
    MemoryOutOfCombatRegenDelayOnChange = 639,
    MemoryOutOfCombatRegenEnabled = 640,
    MemoryOutOfCombatRegenEndThreshold = 641,
    MemoryOutOfCombatRegenRate = 642,
    MemoryOutOfCombatRegenRateAdd = 643,
    MemoryOutOfCombatRegenRateBase = 644,
    MemoryOutOfCombatRegenRateMult = 645,
    MemoryOutOfCombatRegenStartThreshold = 646,
    MemoryOutOfCombatStartDelay = 647,
    MemoryTrackerCooldownDuration = 648,
    MemoryWipeImmunity = 649,
    MinSpeed = 650,
    MinigameBufferExtension = 651,
    MinigameMaterialsEarned = 652,
    MinigameMemoryRegenPerk = 653,
    MinigameMoneyMultiplier = 654,
    MinigameNextInstanceBufferExtensionPerk = 655,
    MinigameShardChanceMultiplier = 656,
    MinigameTimeLimitExtension = 657,
    MinigameTrapsPossibilityChance = 658,
    MitigationChance = 659,
    MitigationStrength = 660,
    MuzzleBreakRicochetBonus = 661,
    NPCAnimationTime = 662,
    NPCCorpoEquipItemDuration = 663,
    NPCCorpoUnequipItemDuration = 664,
    NPCDamage = 665,
    NPCEquipItemDuration = 666,
    NPCGangEquipItemDuration = 667,
    NPCGangUnequipItemDuration = 668,
    NPCLoopDuration = 669,
    NPCRecoverDuration = 670,
    NPCStartupDuration = 671,
    NPCUnequipItemDuration = 672,
    NPCUploadTime = 673,
    NoJam = 674,
    NumShotsInBurst = 675,
    NumShotsInBurstMaxCharge = 676,
    NumShotsInBurstSecondary = 677,
    NumShotsToFire = 678,
    NumberIgnoredTraps = 679,
    Overheat = 680,
    Oxygen = 681,
    PartArmor = 682,
    PenetrationHealth = 683,
    PersonalityAggressive = 684,
    PersonalityCuriosity = 685,
    PersonalityDisgust = 686,
    PersonalityFear = 687,
    PersonalityFunny = 688,
    PersonalityJoy = 689,
    PersonalitySad = 690,
    PersonalityShock = 691,
    PersonalitySurprise = 692,
    PhoneCallDuration = 693,
    PhysicalDamage = 694,
    PhysicalDamageMax = 695,
    PhysicalDamageMin = 696,
    PhysicalDamagePercent = 697,
    PhysicalImpulse = 698,
    PhysicalResistance = 699,
    PoisonImmunity = 700,
    PoisonRegenHealth = 701,
    PoisonedApplicationRate = 702,
    PostLexWilsonBuyPrice = 703,
    PostTutorialCyberwarePrice = 704,
    PowerLevel = 705,
    PreFireTime = 706,
    PrefersCovers = 707,
    PrefersShootingSpots = 708,
    Price = 709,
    ProjectilesPerShot = 710,
    ProjectilesPerShotBase = 711,
    ProjectilesPerShotBonus = 712,
    Quality = 713,
    Quantity = 714,
    QuickHackDuration = 715,
    QuickHackDurationExtension = 716,
    QuickHackImmunity = 717,
    QuickHackResistancesMod = 718,
    QuickHackSpreadDistance = 719,
    QuickHackSpreadNumber = 720,
    QuickHackSuddenDeathChance = 721,
    QuickHackUpload = 722,
    QuickhackExtraDamageMultiplier = 723,
    QuickhackShield = 724,
    QuickhacksCooldownReduction = 725,
    RandomCurveInput = 726,
    Range = 727,
    Recoil = 728,
    RecoilAllowSway = 729,
    RecoilAlternateDir = 730,
    RecoilAlternateDirADS = 731,
    RecoilAngle = 732,
    RecoilAngleADS = 733,
    RecoilAnimation = 734,
    RecoilChargeMult = 735,
    RecoilChargeMultADS = 736,
    RecoilCycleSize = 737,
    RecoilCycleSizeADS = 738,
    RecoilCycleTime = 739,
    RecoilCycleTimeADS = 740,
    RecoilDelay = 741,
    RecoilDir = 742,
    RecoilDirADS = 743,
    RecoilDirPlanCycleRandDir = 744,
    RecoilDirPlanCycleRandDirADS = 745,
    RecoilDirPlanCycleRandRangeDir = 746,
    RecoilDirPlanCycleRandRangeDirADS = 747,
    RecoilDirPlanSequence = 748,
    RecoilDirPlanSequenceADS = 749,
    RecoilDriftRandomRangeMax = 750,
    RecoilDriftRandomRangeMin = 751,
    RecoilEnableCycleX = 752,
    RecoilEnableCycleXADS = 753,
    RecoilEnableCycleY = 754,
    RecoilEnableCycleYADS = 755,
    RecoilEnableLinearX = 756,
    RecoilEnableLinearXADS = 757,
    RecoilEnableLinearY = 758,
    RecoilEnableLinearYADS = 759,
    RecoilEnableScaleX = 760,
    RecoilEnableScaleXADS = 761,
    RecoilEnableScaleY = 762,
    RecoilEnableScaleYADS = 763,
    RecoilFullChargeMult = 764,
    RecoilFullChargeMultADS = 765,
    RecoilHoldDuration = 766,
    RecoilHoldDurationADS = 767,
    RecoilKickMax = 768,
    RecoilKickMaxADS = 769,
    RecoilKickMin = 770,
    RecoilKickMinADS = 771,
    RecoilMagForFullDrift = 772,
    RecoilMaxLength = 773,
    RecoilMaxLengthADS = 774,
    RecoilRecoveryMinSpeed = 775,
    RecoilRecoveryMinSpeedADS = 776,
    RecoilRecoverySpeed = 777,
    RecoilRecoverySpeedADS = 778,
    RecoilRecoveryTime = 779,
    RecoilRecoveryTimeADS = 780,
    RecoilScaleMax = 781,
    RecoilScaleMaxADS = 782,
    RecoilScaleTime = 783,
    RecoilScaleTimeADS = 784,
    RecoilSpeed = 785,
    RecoilSpeedADS = 786,
    RecoilTime = 787,
    RecoilTimeADS = 788,
    RecoilUseDifferentStatsInADS = 789,
    Reflexes = 790,
    ReflexesAlocated = 791,
    ReflexesAvailable = 792,
    RefreshesPingOnQuickhack = 793,
    RegenerateHPMinigamePerk = 794,
    ReloadAmount = 795,
    ReloadEndTime = 796,
    ReloadTime = 797,
    ReloadTimeBase = 798,
    ReloadTimeBonus = 799,
    RemoveAllStacksWhenDurationEnds = 800,
    RemoveColdBloodStacksOneByOne = 801,
    RemoveSprintOnQuickhack = 802,
    ReprimandEscalation = 803,
    RestoreMemoryOnDefeat = 804,
    RevealNetrunnerWhenHacked = 805,
    RicochetChance = 806,
    RicochetCount = 807,
    RicochetMaxAngle = 808,
    RicochetMinAngle = 809,
    RicochetTargetSearchAngle = 810,
    SandevistanDashShoot = 811,
    ScanDepth = 812,
    ScanTimeReduction = 813,
    ScopeFOV = 814,
    ScopeOffset = 815,
    ScrapItemChance = 816,
    SharedCacheTraps = 817,
    ShootingOffsetAI = 818,
    ShortCircuitOnCriticalHit = 819,
    ShorterChains = 820,
    ShotDelay = 821,
    SimpleWeaponMod04 = 822,
    SlideWhenLeaningOutOfCover = 823,
    SmartGunAddSpiralTrajectory = 824,
    SmartGunAdsLockingAnglePitch = 825,
    SmartGunAdsLockingAngleYaw = 826,
    SmartGunAdsMaxLockedTargets = 827,
    SmartGunAdsTagLockAnglePitch = 828,
    SmartGunAdsTagLockAngleYaw = 829,
    SmartGunAdsTargetableAnglePitch = 830,
    SmartGunAdsTargetableAngleYaw = 831,
    SmartGunAdsTimeToLock = 832,
    SmartGunAdsTimeToUnlock = 833,
    SmartGunEvenDistributionPeriod = 834,
    SmartGunHipLockingAnglePitch = 835,
    SmartGunHipLockingAngleYaw = 836,
    SmartGunHipMaxLockedTargets = 837,
    SmartGunHipTagLockAnglePitch = 838,
    SmartGunHipTagLockAngleYaw = 839,
    SmartGunHipTargetableAnglePitch = 840,
    SmartGunHipTargetableAngleYaw = 841,
    SmartGunHipTimeToLock = 842,
    SmartGunHipTimeToUnlock = 843,
    SmartGunHitProbability = 844,
    SmartGunHitProbabilityMultiplier = 845,
    SmartGunMissDelay = 846,
    SmartGunMissRadius = 847,
    SmartGunNPCApplySpreadAtHitplane = 848,
    SmartGunNPCLockOnTime = 849,
    SmartGunNPCLockTimeout = 850,
    SmartGunNPCLockingAnglePitch = 851,
    SmartGunNPCLockingAngleYaw = 852,
    SmartGunNPCProjectileStartingOrientationAngleOffset = 853,
    SmartGunNPCProjectileVelocity = 854,
    SmartGunNPCShootProjectilesOnlyStraight = 855,
    SmartGunNPCSpreadMultiplier = 856,
    SmartGunNPCTrajectoryCurvatureMultiplier = 857,
    SmartGunPlayerProjectileVelocity = 858,
    SmartGunProjectileVelocityVariance = 859,
    SmartGunSpiralCycleTimeMax = 860,
    SmartGunSpiralCycleTimeMin = 861,
    SmartGunSpiralRadius = 862,
    SmartGunSpiralRampDistanceEnd = 863,
    SmartGunSpiralRampDistanceStart = 864,
    SmartGunSpiralRandomizeDirection = 865,
    SmartGunSpreadMultiplier = 866,
    SmartGunStartingAccuracy = 867,
    SmartGunTargetAcquisitionRange = 868,
    SmartGunTimeToMaxAccuracy = 869,
    SmartGunTimeToRemoveOccludedTarget = 870,
    SmartGunTrackAllBodyparts = 871,
    SmartGunTrackHeadComponents = 872,
    SmartGunTrackLegComponents = 873,
    SmartGunTrackMechanicalComponents = 874,
    SmartGunTrackMultipleEntitiesInADS = 875,
    SmartGunUseEvenDistributionTargeting = 876,
    SmartGunUseTagLockTargeting = 877,
    SmartGunUseTimeBasedAccuracy = 878,
    SmartTargetingDisruptionProbability = 879,
    SpecialDamage = 880,
    SpeedBoost = 881,
    SpeedBoostMaxSpeed = 882,
    Spread = 883,
    SpreadAdsChangePerShot = 884,
    SpreadAdsChargeMult = 885,
    SpreadAdsDefaultX = 886,
    SpreadAdsDefaultY = 887,
    SpreadAdsFastSpeedMax = 888,
    SpreadAdsFastSpeedMaxAdd = 889,
    SpreadAdsFastSpeedMin = 890,
    SpreadAdsFastSpeedMinAdd = 891,
    SpreadAdsFullChargeMult = 892,
    SpreadAdsMaxX = 893,
    SpreadAdsMaxY = 894,
    SpreadAdsMinX = 895,
    SpreadAdsMinY = 896,
    SpreadAnimation = 897,
    SpreadChangePerShot = 898,
    SpreadChargeMult = 899,
    SpreadCrouchDefaultMult = 900,
    SpreadCrouchMaxMult = 901,
    SpreadDefaultX = 902,
    SpreadDefaultY = 903,
    SpreadEvenDistributionJitterSize = 904,
    SpreadEvenDistributionRowCount = 905,
    SpreadFastSpeedMax = 906,
    SpreadFastSpeedMaxAdd = 907,
    SpreadFastSpeedMin = 908,
    SpreadFastSpeedMinAdd = 909,
    SpreadFullChargeMult = 910,
    SpreadMaxAI = 911,
    SpreadMaxX = 912,
    SpreadMaxY = 913,
    SpreadMinX = 914,
    SpreadMinY = 915,
    SpreadRandomizeOriginPoint = 916,
    SpreadResetSpeed = 917,
    SpreadResetTimeThreshold = 918,
    SpreadUseCircularSpread = 919,
    SpreadUseEvenDistribution = 920,
    SpreadUseInAds = 921,
    SpreadZeroOnFirstShot = 922,
    StaggerDamageThreshold = 923,
    StaggerDamageThresholdImpulse = 924,
    StaggerDamageThresholdInCover = 925,
    Stamina = 926,
    StaminaCostReduction = 927,
    StaminaCostToBlock = 928,
    StaminaDamage = 929,
    StaminaRegenDelayOnChange = 930,
    StaminaRegenEnabled = 931,
    StaminaRegenEndThrehold = 932,
    StaminaRegenRate = 933,
    StaminaRegenRateAdd = 934,
    StaminaRegenRateBase = 935,
    StaminaRegenRateMult = 936,
    StaminaRegenStartDelay = 937,
    StaminaRegenStartThreshold = 938,
    StaminaSprintDecayRate = 939,
    StatModifierGroupLimit = 940,
    Stealth = 941,
    StealthHacksCostReduction = 942,
    StealthHitDamageMultiplier = 943,
    StealthMastery = 944,
    StealthTrait01Stat = 945,
    StealthWeakspotDamageMultiplier = 946,
    StreetCred = 947,
    StreetCredXPBonusMultiplier = 948,
    Strength = 949,
    StrengthAlocated = 950,
    StrengthAvailable = 951,
    StrengthSkillcheckBonus = 952,
    StunImmunity = 953,
    StyleOverSubstanceCount = 954,
    Sway = 955,
    SwayCenterMaximumAngleOffset = 956,
    SwayCurvatureMaximumFactor = 957,
    SwayCurvatureMinimumFactor = 958,
    SwayInitialOffsetRandomFactor = 959,
    SwayResetOnAimStart = 960,
    SwaySideBottomAngleLimit = 961,
    SwaySideMaximumAngleDistance = 962,
    SwaySideMinimumAngleDistance = 963,
    SwaySideStepChangeMaximumFactor = 964,
    SwaySideStepChangeMinimumFactor = 965,
    SwaySideTopAngleLimit = 966,
    SwayStartBlendTime = 967,
    SwayStartDelay = 968,
    SwayTraversalTime = 969,
    SystemCollapseImmunity = 970,
    TBHsBaseCoefficient = 971,
    TBHsBaseSourceMultiplierCoefficient = 972,
    TBHsCoverTraceLoSIncreaseSpeed = 973,
    TBHsMinimumLineOfSightTime = 974,
    TBHsSensesTraceLoSIncreaseSpeed = 975,
    TBHsVisibilityCooldown = 976,
    TechBaseChargeThreshold = 977,
    TechMaxChargeThreshold = 978,
    TechOverChargeThreshold = 979,
    TechPierceChargeLevel = 980,
    TechPierceDamageFactor = 981,
    TechPierceEnabled = 982,
    TechPierceScanAngle = 983,
    TechnicalAbility = 984,
    TechnicalAbilityAlocated = 985,
    TechnicalAbilityAvailable = 986,
    TechnicalAbilitySkillcheckBonus = 987,
    ThermalDamage = 988,
    ThermalDamageMax = 989,
    ThermalDamageMin = 990,
    ThermalDamagePercent = 991,
    ThermalResistance = 992,
    ThreeOrMoreProgramsCooldownRedPerk = 993,
    ThreeOrMoreProgramsMemoryRegPerk = 994,
    TimeDilationGenericDuration = 995,
    TimeDilationGenericTimeScale = 996,
    TimeDilationKerenzikovDuration = 997,
    TimeDilationKerenzikovPlayerTimeScale = 998,
    TimeDilationKerenzikovTimeScale = 999,
    TimeDilationOnDodgesCooldownDuration = 1000,
    TimeDilationOnDodgesDuration = 1001,
    TimeDilationOnDodgesTimeScale = 1002,
    TimeDilationOnHealthDropCooldownDuration = 1003,
    TimeDilationOnHealthDropDuration = 1004,
    TimeDilationOnHealthDropTimeScale = 1005,
    TimeDilationSandevistanCooldownBase = 1006,
    TimeDilationSandevistanCooldownReduction = 1007,
    TimeDilationSandevistanDuration = 1008,
    TimeDilationSandevistanTimeScale = 1009,
    TimeDilationWhenEnteringCombatCooldownDuration = 1010,
    TimeDilationWhenEnteringCombatDuration = 1011,
    TimeDilationWhenEnteringCombatTimeScale = 1012,
    TranquilizerImmunity = 1013,
    TriggerDismembermentChance = 1014,
    TriggerWoundedChance = 1015,
    TurretFriendlyExtension = 1016,
    TurretShutdownExtension = 1017,
    UltimateHackSpread = 1018,
    UltimateHacksCostReduction = 1019,
    UltimateMemoryCostReduction = 1020,
    UnconsciousImmunity = 1021,
    UnequipAnimationDuration_Corpo = 1022,
    UnequipAnimationDuration_Gang = 1023,
    UnequipDuration = 1024,
    UnequipDuration_Corpo = 1025,
    UnequipDuration_Gang = 1026,
    UnequipItemTime_Corpo = 1027,
    UnequipItemTime_Gang = 1028,
    UnlockProgress = 1029,
    UpgradeCompensate = 1030,
    UpgradeCount = 1031,
    UpgradingCostReduction = 1032,
    UpgradingMaterialDropChance = 1033,
    UpgradingMaterialRandomGrantChance = 1034,
    UpgradingMaterialRetrieveChance = 1035,
    UploadQuickHackMod = 1036,
    VendorBuyPriceDiscount = 1037,
    VendorSellPriceDiscount = 1038,
    Visibility = 1039,
    VisualStimRangeMultiplier = 1040,
    VulnerabilityExtension = 1041,
    WallRunHorSpeedToEnterMin = 1042,
    WallRunStrafeAngleMax = 1043,
    WallRunTimeMax = 1044,
    WallRunVertSpeedToEnterMax = 1045,
    WasItemUpgraded = 1046,
    WasQuickHacked = 1047,
    WeakspotDamageMultiplier = 1048,
    WeaponHasAutoloader = 1049,
    WeaponNoise = 1050,
    WeaponPosAdsX = 1051,
    WeaponPosAdsY = 1052,
    WeaponPosAdsZ = 1053,
    WeaponPosX = 1054,
    WeaponPosY = 1055,
    WeaponPosZ = 1056,
    WeaponRotAdsX = 1057,
    WeaponRotAdsY = 1058,
    WeaponRotAdsZ = 1059,
    WeaponRotX = 1060,
    WeaponRotY = 1061,
    WeaponRotZ = 1062,
    Weight = 1063,
    WoundHeadDamageThreshold = 1064,
    WoundLArmDamageThreshold = 1065,
    WoundLLegDamageThreshold = 1066,
    WoundRArmDamageThreshold = 1067,
    WoundRLegDamageThreshold = 1068,
    XPbonusMultiplier = 1069,
    ZoomLevel = 1070,
    CPO_Armor = 1071,
    CPO_NPC_Importance = 1072,
    Count = 1073,
    Invalid = 1074,
};
} // namespace game::data
} // namespace RED4ext