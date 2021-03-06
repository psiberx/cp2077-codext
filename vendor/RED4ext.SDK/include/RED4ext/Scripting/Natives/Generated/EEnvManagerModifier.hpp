#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
enum class EEnvManagerModifier : uint32_t
{
    EMM_None = 0,
    EMM_WireframeSolid = 1,
    EMM_WireframeSeethrough = 2,
    EMM_Overdraw = 3,
    EMM_OverdrawSeethrough = 4,
    EMM_ParticleOverdraw = 5,
    EMM_ParticleNumLights = 6,
    EMM_DecalOverdraw = 7,
    EMM_LightOverdraw = 8,
    EMM_SceneReferredColor = 9,
    EMM_DisplayReferredColor = 10,
    EMM_GlobalIllumination = 11,
    EMM_SurfaceMaterialID = 12,
    EMM_SurfaceObjectID = 13,
    EMM_SurfaceBaseColor = 14,
    EMM_SurfaceAlbedo = 15,
    EMM_SurfaceSpecularity = 16,
    EMM_SurfaceMetalness = 17,
    EMM_SurfaceRoughness = 18,
    EMM_SurfaceEmissive = 19,
    EMM_SurfaceTranslucency = 20,
    EMM_SurfaceNormalsWorldSpace = 21,
    EMM_SurfaceNormalsViewSpace = 22,
    EMM_SurfaceHairDirection = 23,
    EMM_SurfaceHairID = 24,
    EMM_SurfaceLightBlockerIntensity = 25,
    EMM_GBuffer1RGB = 26,
    EMM_GBuffer1A = 27,
    EMM_ConeAODir = 28,
    EMM_ConeAOAngle = 29,
    EMM_VelocityBuffer = 30,
    EMM_Depth = 31,
    EMM_UvDensity = 32,
    EMM_ToneMappingLuminance = 33,
    EMM_ToneMappingThresholds = 34,
    EMM_LuminanceSpotMeter = 35,
    EMM_IlluminanceMeter = 36,
    EMM_DiffuseLight = 37,
    EMM_SpecularLight = 38,
    EMM_ClayView = 39,
    EMM_PureGreyscaleView = 40,
    EMM_PureWhiteView = 41,
    EMM_PureReflectionView = 42,
    EMM_PureGreyReflectionView = 43,
    EMM_Cascades = 44,
    EMM_MaskShadow = 45,
    EMM_MaskSSAO = 46,
    EMM_MaskTXAA = 47,
    EMM_MaskDistortion = 48,
    EMM_SurfaceCacheID = 49,
    EMM_SurfaceCacheResolution = 50,
    EMM_LightChannels = 51,
    EMM_DebugHitProxies = 52,
    EMM_DebugShadowsMode = 53,
    EMM_RayTracingDebug = 54,
    EMM_SSRResults = 55,
    EMM_SSRFade = 56,
    EMM_DepthOfFieldCoC = 57,
    EMM_MultilayeredMode = 58,
    EMM_MultilayeredProxy = 59,
    EMM_MultilayeredUniqueMasks = 60,
    EMM_MultilayeredMaskWeight = 61,
    EMM_LocalShadowsVariance = 62,
    EMM_LocalShadowsRangesOverlapDynamicsOnly = 63,
    EMM_LocalShadowsRangesOverlapStaticsOnly = 64,
    EMM_LODColoring = 65,
    EMM_TodvisRuntimePreview = 66,
    EMM_TodvisBakePreview = 67,
    EMM_RainMask = 68,
    EMM_VolFogDensity = 69,
    EMM_PBRValidationBaseColor = 70,
    EMM_PBRValidationMetalness = 71,
    EMM_GreyPlayMode = 72,
};
} // namespace RED4ext
