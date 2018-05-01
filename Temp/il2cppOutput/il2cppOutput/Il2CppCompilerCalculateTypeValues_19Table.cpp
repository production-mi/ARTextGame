#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.PostProcessing.PostProcessingContext
struct PostProcessingContext_t754893438;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.PostProcessing.ColorGradingCurve
struct ColorGradingCurve_t579276466;
// UnityEngine.PostProcessing.DitheringModel
struct DitheringModel_t866658367;
// UnityEngine.PostProcessing.EyeAdaptationModel
struct EyeAdaptationModel_t3960020221;
// UnityEngine.PostProcessing.FogModel
struct FogModel_t2165009903;
// UnityEngine.PostProcessing.AntialiasingModel
struct AntialiasingModel_t1954255545;
// UnityEngine.PostProcessing.GrainModel
struct GrainModel_t4022489702;
// UnityEngine.PostProcessing.MotionBlurModel
struct MotionBlurModel_t4023776514;
// UnityEngine.PostProcessing.ScreenSpaceReflectionModel
struct ScreenSpaceReflectionModel_t3280563098;
// UnityEngine.PostProcessing.UserLutModel
struct UserLutModel_t3648333993;
// UnityEngine.PostProcessing.VignetteModel
struct VignetteModel_t3181659143;
// UnityEngine.PostProcessing.DepthOfFieldModel
struct DepthOfFieldModel_t1382761555;
// System.Char[]
struct CharU5BU5D_t1328083999;
// UnityEngine.PostProcessing.AmbientOcclusionModel
struct AmbientOcclusionModel_t3674228804;
// UnityEngine.PostProcessing.BloomModel
struct BloomModel_t2147452278;
// UnityEngine.PostProcessing.BuiltinDebugViewsModel
struct BuiltinDebugViewsModel_t4050465903;
// UnityEngine.PostProcessing.ChromaticAberrationModel
struct ChromaticAberrationModel_t3898313384;
// UnityEngine.PostProcessing.ColorGradingModel
struct ColorGradingModel_t2152456580;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t32810763;
// UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings[]
struct FxaaQualitySettingsU5BU5D_t3374738791;
// UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings[]
struct FxaaConsoleSettingsU5BU5D_t3543327799;
// MenuObject
struct MenuObject_t3388784936;
// System.String
struct String_t;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t1137456562;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// UnityEngine.ComputeShader
struct ComputeShader_t3573922338;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t1827099467;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray
struct ArrowArray_t772926374;
// UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter
struct ReconstructionFilter_t1962748845;
// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter
struct FrameBlendingFilter_t4201983135;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2724090252;
// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame[]
struct FrameU5BU5D_t1512492648;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.RenderBuffer[]
struct RenderBufferU5BU5D_t1583539489;

struct RenderTargetIdentifier_t772440638 ;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef POSTPROCESSINGCOMPONENTBASE_T3868710427_H
#define POSTPROCESSINGCOMPONENTBASE_T3868710427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentBase
struct  PostProcessingComponentBase_t3868710427  : public RuntimeObject
{
public:
	// UnityEngine.PostProcessing.PostProcessingContext UnityEngine.PostProcessing.PostProcessingComponentBase::context
	PostProcessingContext_t754893438 * ___context_0;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(PostProcessingComponentBase_t3868710427, ___context_0)); }
	inline PostProcessingContext_t754893438 * get_context_0() const { return ___context_0; }
	inline PostProcessingContext_t754893438 ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(PostProcessingContext_t754893438 * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier((&___context_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTBASE_T3868710427_H
#ifndef UNIFORMS_T764444877_H
#define UNIFORMS_T764444877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.FogComponent/Uniforms
struct  Uniforms_t764444877  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t764444877_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_FogColor
	int32_t ____FogColor_0;
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_Density
	int32_t ____Density_1;
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_Start
	int32_t ____Start_2;
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_End
	int32_t ____End_3;
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_TempRT
	int32_t ____TempRT_4;

public:
	inline static int32_t get_offset_of__FogColor_0() { return static_cast<int32_t>(offsetof(Uniforms_t764444877_StaticFields, ____FogColor_0)); }
	inline int32_t get__FogColor_0() const { return ____FogColor_0; }
	inline int32_t* get_address_of__FogColor_0() { return &____FogColor_0; }
	inline void set__FogColor_0(int32_t value)
	{
		____FogColor_0 = value;
	}

	inline static int32_t get_offset_of__Density_1() { return static_cast<int32_t>(offsetof(Uniforms_t764444877_StaticFields, ____Density_1)); }
	inline int32_t get__Density_1() const { return ____Density_1; }
	inline int32_t* get_address_of__Density_1() { return &____Density_1; }
	inline void set__Density_1(int32_t value)
	{
		____Density_1 = value;
	}

	inline static int32_t get_offset_of__Start_2() { return static_cast<int32_t>(offsetof(Uniforms_t764444877_StaticFields, ____Start_2)); }
	inline int32_t get__Start_2() const { return ____Start_2; }
	inline int32_t* get_address_of__Start_2() { return &____Start_2; }
	inline void set__Start_2(int32_t value)
	{
		____Start_2 = value;
	}

	inline static int32_t get_offset_of__End_3() { return static_cast<int32_t>(offsetof(Uniforms_t764444877_StaticFields, ____End_3)); }
	inline int32_t get__End_3() const { return ____End_3; }
	inline int32_t* get_address_of__End_3() { return &____End_3; }
	inline void set__End_3(int32_t value)
	{
		____End_3 = value;
	}

	inline static int32_t get_offset_of__TempRT_4() { return static_cast<int32_t>(offsetof(Uniforms_t764444877_StaticFields, ____TempRT_4)); }
	inline int32_t get__TempRT_4() const { return ____TempRT_4; }
	inline int32_t* get_address_of__TempRT_4() { return &____TempRT_4; }
	inline void set__TempRT_4(int32_t value)
	{
		____TempRT_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T764444877_H
#ifndef UNIFORMS_T444490175_H
#define UNIFORMS_T444490175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms
struct  Uniforms_t444490175  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t444490175_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_Params
	int32_t ____Params_0;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_Speed
	int32_t ____Speed_1;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_ScaleOffsetRes
	int32_t ____ScaleOffsetRes_2;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_ExposureCompensation
	int32_t ____ExposureCompensation_3;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_AutoExposure
	int32_t ____AutoExposure_4;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_DebugWidth
	int32_t ____DebugWidth_5;

public:
	inline static int32_t get_offset_of__Params_0() { return static_cast<int32_t>(offsetof(Uniforms_t444490175_StaticFields, ____Params_0)); }
	inline int32_t get__Params_0() const { return ____Params_0; }
	inline int32_t* get_address_of__Params_0() { return &____Params_0; }
	inline void set__Params_0(int32_t value)
	{
		____Params_0 = value;
	}

	inline static int32_t get_offset_of__Speed_1() { return static_cast<int32_t>(offsetof(Uniforms_t444490175_StaticFields, ____Speed_1)); }
	inline int32_t get__Speed_1() const { return ____Speed_1; }
	inline int32_t* get_address_of__Speed_1() { return &____Speed_1; }
	inline void set__Speed_1(int32_t value)
	{
		____Speed_1 = value;
	}

	inline static int32_t get_offset_of__ScaleOffsetRes_2() { return static_cast<int32_t>(offsetof(Uniforms_t444490175_StaticFields, ____ScaleOffsetRes_2)); }
	inline int32_t get__ScaleOffsetRes_2() const { return ____ScaleOffsetRes_2; }
	inline int32_t* get_address_of__ScaleOffsetRes_2() { return &____ScaleOffsetRes_2; }
	inline void set__ScaleOffsetRes_2(int32_t value)
	{
		____ScaleOffsetRes_2 = value;
	}

	inline static int32_t get_offset_of__ExposureCompensation_3() { return static_cast<int32_t>(offsetof(Uniforms_t444490175_StaticFields, ____ExposureCompensation_3)); }
	inline int32_t get__ExposureCompensation_3() const { return ____ExposureCompensation_3; }
	inline int32_t* get_address_of__ExposureCompensation_3() { return &____ExposureCompensation_3; }
	inline void set__ExposureCompensation_3(int32_t value)
	{
		____ExposureCompensation_3 = value;
	}

	inline static int32_t get_offset_of__AutoExposure_4() { return static_cast<int32_t>(offsetof(Uniforms_t444490175_StaticFields, ____AutoExposure_4)); }
	inline int32_t get__AutoExposure_4() const { return ____AutoExposure_4; }
	inline int32_t* get_address_of__AutoExposure_4() { return &____AutoExposure_4; }
	inline void set__AutoExposure_4(int32_t value)
	{
		____AutoExposure_4 = value;
	}

	inline static int32_t get_offset_of__DebugWidth_5() { return static_cast<int32_t>(offsetof(Uniforms_t444490175_StaticFields, ____DebugWidth_5)); }
	inline int32_t get__DebugWidth_5() const { return ____DebugWidth_5; }
	inline int32_t* get_address_of__DebugWidth_5() { return &____DebugWidth_5; }
	inline void set__DebugWidth_5(int32_t value)
	{
		____DebugWidth_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T444490175_H
#ifndef UNIFORMS_T739270179_H
#define UNIFORMS_T739270179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.UserLutComponent/Uniforms
struct  Uniforms_t739270179  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t739270179_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.UserLutComponent/Uniforms::_UserLut
	int32_t ____UserLut_0;
	// System.Int32 UnityEngine.PostProcessing.UserLutComponent/Uniforms::_UserLut_Params
	int32_t ____UserLut_Params_1;

public:
	inline static int32_t get_offset_of__UserLut_0() { return static_cast<int32_t>(offsetof(Uniforms_t739270179_StaticFields, ____UserLut_0)); }
	inline int32_t get__UserLut_0() const { return ____UserLut_0; }
	inline int32_t* get_address_of__UserLut_0() { return &____UserLut_0; }
	inline void set__UserLut_0(int32_t value)
	{
		____UserLut_0 = value;
	}

	inline static int32_t get_offset_of__UserLut_Params_1() { return static_cast<int32_t>(offsetof(Uniforms_t739270179_StaticFields, ____UserLut_Params_1)); }
	inline int32_t get__UserLut_Params_1() const { return ____UserLut_Params_1; }
	inline int32_t* get_address_of__UserLut_Params_1() { return &____UserLut_Params_1; }
	inline void set__UserLut_Params_1(int32_t value)
	{
		____UserLut_Params_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T739270179_H
#ifndef UNIFORMS_T3319208237_H
#define UNIFORMS_T3319208237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DitheringComponent/Uniforms
struct  Uniforms_t3319208237  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3319208237_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.DitheringComponent/Uniforms::_DitheringTex
	int32_t ____DitheringTex_0;
	// System.Int32 UnityEngine.PostProcessing.DitheringComponent/Uniforms::_DitheringCoords
	int32_t ____DitheringCoords_1;

public:
	inline static int32_t get_offset_of__DitheringTex_0() { return static_cast<int32_t>(offsetof(Uniforms_t3319208237_StaticFields, ____DitheringTex_0)); }
	inline int32_t get__DitheringTex_0() const { return ____DitheringTex_0; }
	inline int32_t* get_address_of__DitheringTex_0() { return &____DitheringTex_0; }
	inline void set__DitheringTex_0(int32_t value)
	{
		____DitheringTex_0 = value;
	}

	inline static int32_t get_offset_of__DitheringCoords_1() { return static_cast<int32_t>(offsetof(Uniforms_t3319208237_StaticFields, ____DitheringCoords_1)); }
	inline int32_t get__DitheringCoords_1() const { return ____DitheringCoords_1; }
	inline int32_t* get_address_of__DitheringCoords_1() { return &____DitheringCoords_1; }
	inline void set__DitheringCoords_1(int32_t value)
	{
		____DitheringCoords_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3319208237_H
#ifndef UNIFORMS_T650965433_H
#define UNIFORMS_T650965433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms
struct  Uniforms_t650965433  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t650965433_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_DepthOfFieldTex
	int32_t ____DepthOfFieldTex_0;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_DepthOfFieldCoCTex
	int32_t ____DepthOfFieldCoCTex_1;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_Distance
	int32_t ____Distance_2;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_LensCoeff
	int32_t ____LensCoeff_3;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_MaxCoC
	int32_t ____MaxCoC_4;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_RcpMaxCoC
	int32_t ____RcpMaxCoC_5;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_RcpAspect
	int32_t ____RcpAspect_6;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_MainTex
	int32_t ____MainTex_7;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_CoCTex
	int32_t ____CoCTex_8;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_TaaParams
	int32_t ____TaaParams_9;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_DepthOfFieldParams
	int32_t ____DepthOfFieldParams_10;

public:
	inline static int32_t get_offset_of__DepthOfFieldTex_0() { return static_cast<int32_t>(offsetof(Uniforms_t650965433_StaticFields, ____DepthOfFieldTex_0)); }
	inline int32_t get__DepthOfFieldTex_0() const { return ____DepthOfFieldTex_0; }
	inline int32_t* get_address_of__DepthOfFieldTex_0() { return &____DepthOfFieldTex_0; }
	inline void set__DepthOfFieldTex_0(int32_t value)
	{
		____DepthOfFieldTex_0 = value;
	}

	inline static int32_t get_offset_of__DepthOfFieldCoCTex_1() { return static_cast<int32_t>(offsetof(Uniforms_t650965433_StaticFields, ____DepthOfFieldCoCTex_1)); }
	inline int32_t get__DepthOfFieldCoCTex_1() const { return ____DepthOfFieldCoCTex_1; }
	inline int32_t* get_address_of__DepthOfFieldCoCTex_1() { return &____DepthOfFieldCoCTex_1; }
	inline void set__DepthOfFieldCoCTex_1(int32_t value)
	{
		____DepthOfFieldCoCTex_1 = value;
	}

	inline static int32_t get_offset_of__Distance_2() { return static_cast<int32_t>(offsetof(Uniforms_t650965433_StaticFields, ____Distance_2)); }
	inline int32_t get__Distance_2() const { return ____Distance_2; }
	inline int32_t* get_address_of__Distance_2() { return &____Distance_2; }
	inline void set__Distance_2(int32_t value)
	{
		____Distance_2 = value;
	}

	inline static int32_t get_offset_of__LensCoeff_3() { return static_cast<int32_t>(offsetof(Uniforms_t650965433_StaticFields, ____LensCoeff_3)); }
	inline int32_t get__LensCoeff_3() const { return ____LensCoeff_3; }
	inline int32_t* get_address_of__LensCoeff_3() { return &____LensCoeff_3; }
	inline void set__LensCoeff_3(int32_t value)
	{
		____LensCoeff_3 = value;
	}

	inline static int32_t get_offset_of__MaxCoC_4() { return static_cast<int32_t>(offsetof(Uniforms_t650965433_StaticFields, ____MaxCoC_4)); }
	inline int32_t get__MaxCoC_4() const { return ____MaxCoC_4; }
	inline int32_t* get_address_of__MaxCoC_4() { return &____MaxCoC_4; }
	inline void set__MaxCoC_4(int32_t value)
	{
		____MaxCoC_4 = value;
	}

	inline static int32_t get_offset_of__RcpMaxCoC_5() { return static_cast<int32_t>(offsetof(Uniforms_t650965433_StaticFields, ____RcpMaxCoC_5)); }
	inline int32_t get__RcpMaxCoC_5() const { return ____RcpMaxCoC_5; }
	inline int32_t* get_address_of__RcpMaxCoC_5() { return &____RcpMaxCoC_5; }
	inline void set__RcpMaxCoC_5(int32_t value)
	{
		____RcpMaxCoC_5 = value;
	}

	inline static int32_t get_offset_of__RcpAspect_6() { return static_cast<int32_t>(offsetof(Uniforms_t650965433_StaticFields, ____RcpAspect_6)); }
	inline int32_t get__RcpAspect_6() const { return ____RcpAspect_6; }
	inline int32_t* get_address_of__RcpAspect_6() { return &____RcpAspect_6; }
	inline void set__RcpAspect_6(int32_t value)
	{
		____RcpAspect_6 = value;
	}

	inline static int32_t get_offset_of__MainTex_7() { return static_cast<int32_t>(offsetof(Uniforms_t650965433_StaticFields, ____MainTex_7)); }
	inline int32_t get__MainTex_7() const { return ____MainTex_7; }
	inline int32_t* get_address_of__MainTex_7() { return &____MainTex_7; }
	inline void set__MainTex_7(int32_t value)
	{
		____MainTex_7 = value;
	}

	inline static int32_t get_offset_of__CoCTex_8() { return static_cast<int32_t>(offsetof(Uniforms_t650965433_StaticFields, ____CoCTex_8)); }
	inline int32_t get__CoCTex_8() const { return ____CoCTex_8; }
	inline int32_t* get_address_of__CoCTex_8() { return &____CoCTex_8; }
	inline void set__CoCTex_8(int32_t value)
	{
		____CoCTex_8 = value;
	}

	inline static int32_t get_offset_of__TaaParams_9() { return static_cast<int32_t>(offsetof(Uniforms_t650965433_StaticFields, ____TaaParams_9)); }
	inline int32_t get__TaaParams_9() const { return ____TaaParams_9; }
	inline int32_t* get_address_of__TaaParams_9() { return &____TaaParams_9; }
	inline void set__TaaParams_9(int32_t value)
	{
		____TaaParams_9 = value;
	}

	inline static int32_t get_offset_of__DepthOfFieldParams_10() { return static_cast<int32_t>(offsetof(Uniforms_t650965433_StaticFields, ____DepthOfFieldParams_10)); }
	inline int32_t get__DepthOfFieldParams_10() const { return ____DepthOfFieldParams_10; }
	inline int32_t* get_address_of__DepthOfFieldParams_10() { return &____DepthOfFieldParams_10; }
	inline void set__DepthOfFieldParams_10(int32_t value)
	{
		____DepthOfFieldParams_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T650965433_H
#ifndef UNIFORMS_T1322699365_H
#define UNIFORMS_T1322699365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.VignetteComponent/Uniforms
struct  Uniforms_t1322699365  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t1322699365_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Color
	int32_t ____Vignette_Color_0;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Center
	int32_t ____Vignette_Center_1;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Settings
	int32_t ____Vignette_Settings_2;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Mask
	int32_t ____Vignette_Mask_3;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Opacity
	int32_t ____Vignette_Opacity_4;

public:
	inline static int32_t get_offset_of__Vignette_Color_0() { return static_cast<int32_t>(offsetof(Uniforms_t1322699365_StaticFields, ____Vignette_Color_0)); }
	inline int32_t get__Vignette_Color_0() const { return ____Vignette_Color_0; }
	inline int32_t* get_address_of__Vignette_Color_0() { return &____Vignette_Color_0; }
	inline void set__Vignette_Color_0(int32_t value)
	{
		____Vignette_Color_0 = value;
	}

	inline static int32_t get_offset_of__Vignette_Center_1() { return static_cast<int32_t>(offsetof(Uniforms_t1322699365_StaticFields, ____Vignette_Center_1)); }
	inline int32_t get__Vignette_Center_1() const { return ____Vignette_Center_1; }
	inline int32_t* get_address_of__Vignette_Center_1() { return &____Vignette_Center_1; }
	inline void set__Vignette_Center_1(int32_t value)
	{
		____Vignette_Center_1 = value;
	}

	inline static int32_t get_offset_of__Vignette_Settings_2() { return static_cast<int32_t>(offsetof(Uniforms_t1322699365_StaticFields, ____Vignette_Settings_2)); }
	inline int32_t get__Vignette_Settings_2() const { return ____Vignette_Settings_2; }
	inline int32_t* get_address_of__Vignette_Settings_2() { return &____Vignette_Settings_2; }
	inline void set__Vignette_Settings_2(int32_t value)
	{
		____Vignette_Settings_2 = value;
	}

	inline static int32_t get_offset_of__Vignette_Mask_3() { return static_cast<int32_t>(offsetof(Uniforms_t1322699365_StaticFields, ____Vignette_Mask_3)); }
	inline int32_t get__Vignette_Mask_3() const { return ____Vignette_Mask_3; }
	inline int32_t* get_address_of__Vignette_Mask_3() { return &____Vignette_Mask_3; }
	inline void set__Vignette_Mask_3(int32_t value)
	{
		____Vignette_Mask_3 = value;
	}

	inline static int32_t get_offset_of__Vignette_Opacity_4() { return static_cast<int32_t>(offsetof(Uniforms_t1322699365_StaticFields, ____Vignette_Opacity_4)); }
	inline int32_t get__Vignette_Opacity_4() const { return ____Vignette_Opacity_4; }
	inline int32_t* get_address_of__Vignette_Opacity_4() { return &____Vignette_Opacity_4; }
	inline void set__Vignette_Opacity_4(int32_t value)
	{
		____Vignette_Opacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T1322699365_H
#ifndef ATTRIBUTE_T542643598_H
#define ATTRIBUTE_T542643598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t542643598  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T542643598_H
#ifndef UNIFORMS_T3074170978_H
#define UNIFORMS_T3074170978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms
struct  Uniforms_t3074170978  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3074170978_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_RayStepSize
	int32_t ____RayStepSize_0;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_AdditiveReflection
	int32_t ____AdditiveReflection_1;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_BilateralUpsampling
	int32_t ____BilateralUpsampling_2;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_TreatBackfaceHitAsMiss
	int32_t ____TreatBackfaceHitAsMiss_3;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_AllowBackwardsRays
	int32_t ____AllowBackwardsRays_4;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_TraceBehindObjects
	int32_t ____TraceBehindObjects_5;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_MaxSteps
	int32_t ____MaxSteps_6;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FullResolutionFiltering
	int32_t ____FullResolutionFiltering_7;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_HalfResolution
	int32_t ____HalfResolution_8;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_HighlightSuppression
	int32_t ____HighlightSuppression_9;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_PixelsPerMeterAtOneMeter
	int32_t ____PixelsPerMeterAtOneMeter_10;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ScreenEdgeFading
	int32_t ____ScreenEdgeFading_11;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ReflectionBlur
	int32_t ____ReflectionBlur_12;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_MaxRayTraceDistance
	int32_t ____MaxRayTraceDistance_13;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FadeDistance
	int32_t ____FadeDistance_14;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_LayerThickness
	int32_t ____LayerThickness_15;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_SSRMultiplier
	int32_t ____SSRMultiplier_16;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FresnelFade
	int32_t ____FresnelFade_17;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FresnelFadePower
	int32_t ____FresnelFadePower_18;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ReflectionBufferSize
	int32_t ____ReflectionBufferSize_19;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ScreenSize
	int32_t ____ScreenSize_20;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_InvScreenSize
	int32_t ____InvScreenSize_21;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ProjInfo
	int32_t ____ProjInfo_22;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_CameraClipInfo
	int32_t ____CameraClipInfo_23;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ProjectToPixelMatrix
	int32_t ____ProjectToPixelMatrix_24;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_WorldToCameraMatrix
	int32_t ____WorldToCameraMatrix_25;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_CameraToWorldMatrix
	int32_t ____CameraToWorldMatrix_26;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_Axis
	int32_t ____Axis_27;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_CurrentMipLevel
	int32_t ____CurrentMipLevel_28;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_NormalAndRoughnessTexture
	int32_t ____NormalAndRoughnessTexture_29;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_HitPointTexture
	int32_t ____HitPointTexture_30;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_BlurTexture
	int32_t ____BlurTexture_31;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FilteredReflections
	int32_t ____FilteredReflections_32;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FinalReflectionTexture
	int32_t ____FinalReflectionTexture_33;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_TempTexture
	int32_t ____TempTexture_34;

public:
	inline static int32_t get_offset_of__RayStepSize_0() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____RayStepSize_0)); }
	inline int32_t get__RayStepSize_0() const { return ____RayStepSize_0; }
	inline int32_t* get_address_of__RayStepSize_0() { return &____RayStepSize_0; }
	inline void set__RayStepSize_0(int32_t value)
	{
		____RayStepSize_0 = value;
	}

	inline static int32_t get_offset_of__AdditiveReflection_1() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____AdditiveReflection_1)); }
	inline int32_t get__AdditiveReflection_1() const { return ____AdditiveReflection_1; }
	inline int32_t* get_address_of__AdditiveReflection_1() { return &____AdditiveReflection_1; }
	inline void set__AdditiveReflection_1(int32_t value)
	{
		____AdditiveReflection_1 = value;
	}

	inline static int32_t get_offset_of__BilateralUpsampling_2() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____BilateralUpsampling_2)); }
	inline int32_t get__BilateralUpsampling_2() const { return ____BilateralUpsampling_2; }
	inline int32_t* get_address_of__BilateralUpsampling_2() { return &____BilateralUpsampling_2; }
	inline void set__BilateralUpsampling_2(int32_t value)
	{
		____BilateralUpsampling_2 = value;
	}

	inline static int32_t get_offset_of__TreatBackfaceHitAsMiss_3() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____TreatBackfaceHitAsMiss_3)); }
	inline int32_t get__TreatBackfaceHitAsMiss_3() const { return ____TreatBackfaceHitAsMiss_3; }
	inline int32_t* get_address_of__TreatBackfaceHitAsMiss_3() { return &____TreatBackfaceHitAsMiss_3; }
	inline void set__TreatBackfaceHitAsMiss_3(int32_t value)
	{
		____TreatBackfaceHitAsMiss_3 = value;
	}

	inline static int32_t get_offset_of__AllowBackwardsRays_4() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____AllowBackwardsRays_4)); }
	inline int32_t get__AllowBackwardsRays_4() const { return ____AllowBackwardsRays_4; }
	inline int32_t* get_address_of__AllowBackwardsRays_4() { return &____AllowBackwardsRays_4; }
	inline void set__AllowBackwardsRays_4(int32_t value)
	{
		____AllowBackwardsRays_4 = value;
	}

	inline static int32_t get_offset_of__TraceBehindObjects_5() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____TraceBehindObjects_5)); }
	inline int32_t get__TraceBehindObjects_5() const { return ____TraceBehindObjects_5; }
	inline int32_t* get_address_of__TraceBehindObjects_5() { return &____TraceBehindObjects_5; }
	inline void set__TraceBehindObjects_5(int32_t value)
	{
		____TraceBehindObjects_5 = value;
	}

	inline static int32_t get_offset_of__MaxSteps_6() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____MaxSteps_6)); }
	inline int32_t get__MaxSteps_6() const { return ____MaxSteps_6; }
	inline int32_t* get_address_of__MaxSteps_6() { return &____MaxSteps_6; }
	inline void set__MaxSteps_6(int32_t value)
	{
		____MaxSteps_6 = value;
	}

	inline static int32_t get_offset_of__FullResolutionFiltering_7() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____FullResolutionFiltering_7)); }
	inline int32_t get__FullResolutionFiltering_7() const { return ____FullResolutionFiltering_7; }
	inline int32_t* get_address_of__FullResolutionFiltering_7() { return &____FullResolutionFiltering_7; }
	inline void set__FullResolutionFiltering_7(int32_t value)
	{
		____FullResolutionFiltering_7 = value;
	}

	inline static int32_t get_offset_of__HalfResolution_8() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____HalfResolution_8)); }
	inline int32_t get__HalfResolution_8() const { return ____HalfResolution_8; }
	inline int32_t* get_address_of__HalfResolution_8() { return &____HalfResolution_8; }
	inline void set__HalfResolution_8(int32_t value)
	{
		____HalfResolution_8 = value;
	}

	inline static int32_t get_offset_of__HighlightSuppression_9() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____HighlightSuppression_9)); }
	inline int32_t get__HighlightSuppression_9() const { return ____HighlightSuppression_9; }
	inline int32_t* get_address_of__HighlightSuppression_9() { return &____HighlightSuppression_9; }
	inline void set__HighlightSuppression_9(int32_t value)
	{
		____HighlightSuppression_9 = value;
	}

	inline static int32_t get_offset_of__PixelsPerMeterAtOneMeter_10() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____PixelsPerMeterAtOneMeter_10)); }
	inline int32_t get__PixelsPerMeterAtOneMeter_10() const { return ____PixelsPerMeterAtOneMeter_10; }
	inline int32_t* get_address_of__PixelsPerMeterAtOneMeter_10() { return &____PixelsPerMeterAtOneMeter_10; }
	inline void set__PixelsPerMeterAtOneMeter_10(int32_t value)
	{
		____PixelsPerMeterAtOneMeter_10 = value;
	}

	inline static int32_t get_offset_of__ScreenEdgeFading_11() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____ScreenEdgeFading_11)); }
	inline int32_t get__ScreenEdgeFading_11() const { return ____ScreenEdgeFading_11; }
	inline int32_t* get_address_of__ScreenEdgeFading_11() { return &____ScreenEdgeFading_11; }
	inline void set__ScreenEdgeFading_11(int32_t value)
	{
		____ScreenEdgeFading_11 = value;
	}

	inline static int32_t get_offset_of__ReflectionBlur_12() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____ReflectionBlur_12)); }
	inline int32_t get__ReflectionBlur_12() const { return ____ReflectionBlur_12; }
	inline int32_t* get_address_of__ReflectionBlur_12() { return &____ReflectionBlur_12; }
	inline void set__ReflectionBlur_12(int32_t value)
	{
		____ReflectionBlur_12 = value;
	}

	inline static int32_t get_offset_of__MaxRayTraceDistance_13() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____MaxRayTraceDistance_13)); }
	inline int32_t get__MaxRayTraceDistance_13() const { return ____MaxRayTraceDistance_13; }
	inline int32_t* get_address_of__MaxRayTraceDistance_13() { return &____MaxRayTraceDistance_13; }
	inline void set__MaxRayTraceDistance_13(int32_t value)
	{
		____MaxRayTraceDistance_13 = value;
	}

	inline static int32_t get_offset_of__FadeDistance_14() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____FadeDistance_14)); }
	inline int32_t get__FadeDistance_14() const { return ____FadeDistance_14; }
	inline int32_t* get_address_of__FadeDistance_14() { return &____FadeDistance_14; }
	inline void set__FadeDistance_14(int32_t value)
	{
		____FadeDistance_14 = value;
	}

	inline static int32_t get_offset_of__LayerThickness_15() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____LayerThickness_15)); }
	inline int32_t get__LayerThickness_15() const { return ____LayerThickness_15; }
	inline int32_t* get_address_of__LayerThickness_15() { return &____LayerThickness_15; }
	inline void set__LayerThickness_15(int32_t value)
	{
		____LayerThickness_15 = value;
	}

	inline static int32_t get_offset_of__SSRMultiplier_16() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____SSRMultiplier_16)); }
	inline int32_t get__SSRMultiplier_16() const { return ____SSRMultiplier_16; }
	inline int32_t* get_address_of__SSRMultiplier_16() { return &____SSRMultiplier_16; }
	inline void set__SSRMultiplier_16(int32_t value)
	{
		____SSRMultiplier_16 = value;
	}

	inline static int32_t get_offset_of__FresnelFade_17() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____FresnelFade_17)); }
	inline int32_t get__FresnelFade_17() const { return ____FresnelFade_17; }
	inline int32_t* get_address_of__FresnelFade_17() { return &____FresnelFade_17; }
	inline void set__FresnelFade_17(int32_t value)
	{
		____FresnelFade_17 = value;
	}

	inline static int32_t get_offset_of__FresnelFadePower_18() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____FresnelFadePower_18)); }
	inline int32_t get__FresnelFadePower_18() const { return ____FresnelFadePower_18; }
	inline int32_t* get_address_of__FresnelFadePower_18() { return &____FresnelFadePower_18; }
	inline void set__FresnelFadePower_18(int32_t value)
	{
		____FresnelFadePower_18 = value;
	}

	inline static int32_t get_offset_of__ReflectionBufferSize_19() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____ReflectionBufferSize_19)); }
	inline int32_t get__ReflectionBufferSize_19() const { return ____ReflectionBufferSize_19; }
	inline int32_t* get_address_of__ReflectionBufferSize_19() { return &____ReflectionBufferSize_19; }
	inline void set__ReflectionBufferSize_19(int32_t value)
	{
		____ReflectionBufferSize_19 = value;
	}

	inline static int32_t get_offset_of__ScreenSize_20() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____ScreenSize_20)); }
	inline int32_t get__ScreenSize_20() const { return ____ScreenSize_20; }
	inline int32_t* get_address_of__ScreenSize_20() { return &____ScreenSize_20; }
	inline void set__ScreenSize_20(int32_t value)
	{
		____ScreenSize_20 = value;
	}

	inline static int32_t get_offset_of__InvScreenSize_21() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____InvScreenSize_21)); }
	inline int32_t get__InvScreenSize_21() const { return ____InvScreenSize_21; }
	inline int32_t* get_address_of__InvScreenSize_21() { return &____InvScreenSize_21; }
	inline void set__InvScreenSize_21(int32_t value)
	{
		____InvScreenSize_21 = value;
	}

	inline static int32_t get_offset_of__ProjInfo_22() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____ProjInfo_22)); }
	inline int32_t get__ProjInfo_22() const { return ____ProjInfo_22; }
	inline int32_t* get_address_of__ProjInfo_22() { return &____ProjInfo_22; }
	inline void set__ProjInfo_22(int32_t value)
	{
		____ProjInfo_22 = value;
	}

	inline static int32_t get_offset_of__CameraClipInfo_23() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____CameraClipInfo_23)); }
	inline int32_t get__CameraClipInfo_23() const { return ____CameraClipInfo_23; }
	inline int32_t* get_address_of__CameraClipInfo_23() { return &____CameraClipInfo_23; }
	inline void set__CameraClipInfo_23(int32_t value)
	{
		____CameraClipInfo_23 = value;
	}

	inline static int32_t get_offset_of__ProjectToPixelMatrix_24() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____ProjectToPixelMatrix_24)); }
	inline int32_t get__ProjectToPixelMatrix_24() const { return ____ProjectToPixelMatrix_24; }
	inline int32_t* get_address_of__ProjectToPixelMatrix_24() { return &____ProjectToPixelMatrix_24; }
	inline void set__ProjectToPixelMatrix_24(int32_t value)
	{
		____ProjectToPixelMatrix_24 = value;
	}

	inline static int32_t get_offset_of__WorldToCameraMatrix_25() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____WorldToCameraMatrix_25)); }
	inline int32_t get__WorldToCameraMatrix_25() const { return ____WorldToCameraMatrix_25; }
	inline int32_t* get_address_of__WorldToCameraMatrix_25() { return &____WorldToCameraMatrix_25; }
	inline void set__WorldToCameraMatrix_25(int32_t value)
	{
		____WorldToCameraMatrix_25 = value;
	}

	inline static int32_t get_offset_of__CameraToWorldMatrix_26() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____CameraToWorldMatrix_26)); }
	inline int32_t get__CameraToWorldMatrix_26() const { return ____CameraToWorldMatrix_26; }
	inline int32_t* get_address_of__CameraToWorldMatrix_26() { return &____CameraToWorldMatrix_26; }
	inline void set__CameraToWorldMatrix_26(int32_t value)
	{
		____CameraToWorldMatrix_26 = value;
	}

	inline static int32_t get_offset_of__Axis_27() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____Axis_27)); }
	inline int32_t get__Axis_27() const { return ____Axis_27; }
	inline int32_t* get_address_of__Axis_27() { return &____Axis_27; }
	inline void set__Axis_27(int32_t value)
	{
		____Axis_27 = value;
	}

	inline static int32_t get_offset_of__CurrentMipLevel_28() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____CurrentMipLevel_28)); }
	inline int32_t get__CurrentMipLevel_28() const { return ____CurrentMipLevel_28; }
	inline int32_t* get_address_of__CurrentMipLevel_28() { return &____CurrentMipLevel_28; }
	inline void set__CurrentMipLevel_28(int32_t value)
	{
		____CurrentMipLevel_28 = value;
	}

	inline static int32_t get_offset_of__NormalAndRoughnessTexture_29() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____NormalAndRoughnessTexture_29)); }
	inline int32_t get__NormalAndRoughnessTexture_29() const { return ____NormalAndRoughnessTexture_29; }
	inline int32_t* get_address_of__NormalAndRoughnessTexture_29() { return &____NormalAndRoughnessTexture_29; }
	inline void set__NormalAndRoughnessTexture_29(int32_t value)
	{
		____NormalAndRoughnessTexture_29 = value;
	}

	inline static int32_t get_offset_of__HitPointTexture_30() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____HitPointTexture_30)); }
	inline int32_t get__HitPointTexture_30() const { return ____HitPointTexture_30; }
	inline int32_t* get_address_of__HitPointTexture_30() { return &____HitPointTexture_30; }
	inline void set__HitPointTexture_30(int32_t value)
	{
		____HitPointTexture_30 = value;
	}

	inline static int32_t get_offset_of__BlurTexture_31() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____BlurTexture_31)); }
	inline int32_t get__BlurTexture_31() const { return ____BlurTexture_31; }
	inline int32_t* get_address_of__BlurTexture_31() { return &____BlurTexture_31; }
	inline void set__BlurTexture_31(int32_t value)
	{
		____BlurTexture_31 = value;
	}

	inline static int32_t get_offset_of__FilteredReflections_32() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____FilteredReflections_32)); }
	inline int32_t get__FilteredReflections_32() const { return ____FilteredReflections_32; }
	inline int32_t* get_address_of__FilteredReflections_32() { return &____FilteredReflections_32; }
	inline void set__FilteredReflections_32(int32_t value)
	{
		____FilteredReflections_32 = value;
	}

	inline static int32_t get_offset_of__FinalReflectionTexture_33() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____FinalReflectionTexture_33)); }
	inline int32_t get__FinalReflectionTexture_33() const { return ____FinalReflectionTexture_33; }
	inline int32_t* get_address_of__FinalReflectionTexture_33() { return &____FinalReflectionTexture_33; }
	inline void set__FinalReflectionTexture_33(int32_t value)
	{
		____FinalReflectionTexture_33 = value;
	}

	inline static int32_t get_offset_of__TempTexture_34() { return static_cast<int32_t>(offsetof(Uniforms_t3074170978_StaticFields, ____TempTexture_34)); }
	inline int32_t get__TempTexture_34() const { return ____TempTexture_34; }
	inline int32_t* get_address_of__TempTexture_34() { return &____TempTexture_34; }
	inline void set__TempTexture_34(int32_t value)
	{
		____TempTexture_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3074170978_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef UNIFORMS_T3359537322_H
#define UNIFORMS_T3359537322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent/Uniforms
struct  Uniforms_t3359537322  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3359537322_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_VelocityScale
	int32_t ____VelocityScale_0;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_MaxBlurRadius
	int32_t ____MaxBlurRadius_1;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_RcpMaxBlurRadius
	int32_t ____RcpMaxBlurRadius_2;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_VelocityTex
	int32_t ____VelocityTex_3;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_MainTex
	int32_t ____MainTex_4;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_Tile2RT
	int32_t ____Tile2RT_5;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_Tile4RT
	int32_t ____Tile4RT_6;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_Tile8RT
	int32_t ____Tile8RT_7;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_TileMaxOffs
	int32_t ____TileMaxOffs_8;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_TileMaxLoop
	int32_t ____TileMaxLoop_9;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_TileVRT
	int32_t ____TileVRT_10;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_NeighborMaxTex
	int32_t ____NeighborMaxTex_11;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_LoopCount
	int32_t ____LoopCount_12;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_TempRT
	int32_t ____TempRT_13;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History1LumaTex
	int32_t ____History1LumaTex_14;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History2LumaTex
	int32_t ____History2LumaTex_15;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History3LumaTex
	int32_t ____History3LumaTex_16;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History4LumaTex
	int32_t ____History4LumaTex_17;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History1ChromaTex
	int32_t ____History1ChromaTex_18;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History2ChromaTex
	int32_t ____History2ChromaTex_19;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History3ChromaTex
	int32_t ____History3ChromaTex_20;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History4ChromaTex
	int32_t ____History4ChromaTex_21;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History1Weight
	int32_t ____History1Weight_22;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History2Weight
	int32_t ____History2Weight_23;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History3Weight
	int32_t ____History3Weight_24;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History4Weight
	int32_t ____History4Weight_25;

public:
	inline static int32_t get_offset_of__VelocityScale_0() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____VelocityScale_0)); }
	inline int32_t get__VelocityScale_0() const { return ____VelocityScale_0; }
	inline int32_t* get_address_of__VelocityScale_0() { return &____VelocityScale_0; }
	inline void set__VelocityScale_0(int32_t value)
	{
		____VelocityScale_0 = value;
	}

	inline static int32_t get_offset_of__MaxBlurRadius_1() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____MaxBlurRadius_1)); }
	inline int32_t get__MaxBlurRadius_1() const { return ____MaxBlurRadius_1; }
	inline int32_t* get_address_of__MaxBlurRadius_1() { return &____MaxBlurRadius_1; }
	inline void set__MaxBlurRadius_1(int32_t value)
	{
		____MaxBlurRadius_1 = value;
	}

	inline static int32_t get_offset_of__RcpMaxBlurRadius_2() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____RcpMaxBlurRadius_2)); }
	inline int32_t get__RcpMaxBlurRadius_2() const { return ____RcpMaxBlurRadius_2; }
	inline int32_t* get_address_of__RcpMaxBlurRadius_2() { return &____RcpMaxBlurRadius_2; }
	inline void set__RcpMaxBlurRadius_2(int32_t value)
	{
		____RcpMaxBlurRadius_2 = value;
	}

	inline static int32_t get_offset_of__VelocityTex_3() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____VelocityTex_3)); }
	inline int32_t get__VelocityTex_3() const { return ____VelocityTex_3; }
	inline int32_t* get_address_of__VelocityTex_3() { return &____VelocityTex_3; }
	inline void set__VelocityTex_3(int32_t value)
	{
		____VelocityTex_3 = value;
	}

	inline static int32_t get_offset_of__MainTex_4() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____MainTex_4)); }
	inline int32_t get__MainTex_4() const { return ____MainTex_4; }
	inline int32_t* get_address_of__MainTex_4() { return &____MainTex_4; }
	inline void set__MainTex_4(int32_t value)
	{
		____MainTex_4 = value;
	}

	inline static int32_t get_offset_of__Tile2RT_5() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____Tile2RT_5)); }
	inline int32_t get__Tile2RT_5() const { return ____Tile2RT_5; }
	inline int32_t* get_address_of__Tile2RT_5() { return &____Tile2RT_5; }
	inline void set__Tile2RT_5(int32_t value)
	{
		____Tile2RT_5 = value;
	}

	inline static int32_t get_offset_of__Tile4RT_6() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____Tile4RT_6)); }
	inline int32_t get__Tile4RT_6() const { return ____Tile4RT_6; }
	inline int32_t* get_address_of__Tile4RT_6() { return &____Tile4RT_6; }
	inline void set__Tile4RT_6(int32_t value)
	{
		____Tile4RT_6 = value;
	}

	inline static int32_t get_offset_of__Tile8RT_7() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____Tile8RT_7)); }
	inline int32_t get__Tile8RT_7() const { return ____Tile8RT_7; }
	inline int32_t* get_address_of__Tile8RT_7() { return &____Tile8RT_7; }
	inline void set__Tile8RT_7(int32_t value)
	{
		____Tile8RT_7 = value;
	}

	inline static int32_t get_offset_of__TileMaxOffs_8() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____TileMaxOffs_8)); }
	inline int32_t get__TileMaxOffs_8() const { return ____TileMaxOffs_8; }
	inline int32_t* get_address_of__TileMaxOffs_8() { return &____TileMaxOffs_8; }
	inline void set__TileMaxOffs_8(int32_t value)
	{
		____TileMaxOffs_8 = value;
	}

	inline static int32_t get_offset_of__TileMaxLoop_9() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____TileMaxLoop_9)); }
	inline int32_t get__TileMaxLoop_9() const { return ____TileMaxLoop_9; }
	inline int32_t* get_address_of__TileMaxLoop_9() { return &____TileMaxLoop_9; }
	inline void set__TileMaxLoop_9(int32_t value)
	{
		____TileMaxLoop_9 = value;
	}

	inline static int32_t get_offset_of__TileVRT_10() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____TileVRT_10)); }
	inline int32_t get__TileVRT_10() const { return ____TileVRT_10; }
	inline int32_t* get_address_of__TileVRT_10() { return &____TileVRT_10; }
	inline void set__TileVRT_10(int32_t value)
	{
		____TileVRT_10 = value;
	}

	inline static int32_t get_offset_of__NeighborMaxTex_11() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____NeighborMaxTex_11)); }
	inline int32_t get__NeighborMaxTex_11() const { return ____NeighborMaxTex_11; }
	inline int32_t* get_address_of__NeighborMaxTex_11() { return &____NeighborMaxTex_11; }
	inline void set__NeighborMaxTex_11(int32_t value)
	{
		____NeighborMaxTex_11 = value;
	}

	inline static int32_t get_offset_of__LoopCount_12() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____LoopCount_12)); }
	inline int32_t get__LoopCount_12() const { return ____LoopCount_12; }
	inline int32_t* get_address_of__LoopCount_12() { return &____LoopCount_12; }
	inline void set__LoopCount_12(int32_t value)
	{
		____LoopCount_12 = value;
	}

	inline static int32_t get_offset_of__TempRT_13() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____TempRT_13)); }
	inline int32_t get__TempRT_13() const { return ____TempRT_13; }
	inline int32_t* get_address_of__TempRT_13() { return &____TempRT_13; }
	inline void set__TempRT_13(int32_t value)
	{
		____TempRT_13 = value;
	}

	inline static int32_t get_offset_of__History1LumaTex_14() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____History1LumaTex_14)); }
	inline int32_t get__History1LumaTex_14() const { return ____History1LumaTex_14; }
	inline int32_t* get_address_of__History1LumaTex_14() { return &____History1LumaTex_14; }
	inline void set__History1LumaTex_14(int32_t value)
	{
		____History1LumaTex_14 = value;
	}

	inline static int32_t get_offset_of__History2LumaTex_15() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____History2LumaTex_15)); }
	inline int32_t get__History2LumaTex_15() const { return ____History2LumaTex_15; }
	inline int32_t* get_address_of__History2LumaTex_15() { return &____History2LumaTex_15; }
	inline void set__History2LumaTex_15(int32_t value)
	{
		____History2LumaTex_15 = value;
	}

	inline static int32_t get_offset_of__History3LumaTex_16() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____History3LumaTex_16)); }
	inline int32_t get__History3LumaTex_16() const { return ____History3LumaTex_16; }
	inline int32_t* get_address_of__History3LumaTex_16() { return &____History3LumaTex_16; }
	inline void set__History3LumaTex_16(int32_t value)
	{
		____History3LumaTex_16 = value;
	}

	inline static int32_t get_offset_of__History4LumaTex_17() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____History4LumaTex_17)); }
	inline int32_t get__History4LumaTex_17() const { return ____History4LumaTex_17; }
	inline int32_t* get_address_of__History4LumaTex_17() { return &____History4LumaTex_17; }
	inline void set__History4LumaTex_17(int32_t value)
	{
		____History4LumaTex_17 = value;
	}

	inline static int32_t get_offset_of__History1ChromaTex_18() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____History1ChromaTex_18)); }
	inline int32_t get__History1ChromaTex_18() const { return ____History1ChromaTex_18; }
	inline int32_t* get_address_of__History1ChromaTex_18() { return &____History1ChromaTex_18; }
	inline void set__History1ChromaTex_18(int32_t value)
	{
		____History1ChromaTex_18 = value;
	}

	inline static int32_t get_offset_of__History2ChromaTex_19() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____History2ChromaTex_19)); }
	inline int32_t get__History2ChromaTex_19() const { return ____History2ChromaTex_19; }
	inline int32_t* get_address_of__History2ChromaTex_19() { return &____History2ChromaTex_19; }
	inline void set__History2ChromaTex_19(int32_t value)
	{
		____History2ChromaTex_19 = value;
	}

	inline static int32_t get_offset_of__History3ChromaTex_20() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____History3ChromaTex_20)); }
	inline int32_t get__History3ChromaTex_20() const { return ____History3ChromaTex_20; }
	inline int32_t* get_address_of__History3ChromaTex_20() { return &____History3ChromaTex_20; }
	inline void set__History3ChromaTex_20(int32_t value)
	{
		____History3ChromaTex_20 = value;
	}

	inline static int32_t get_offset_of__History4ChromaTex_21() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____History4ChromaTex_21)); }
	inline int32_t get__History4ChromaTex_21() const { return ____History4ChromaTex_21; }
	inline int32_t* get_address_of__History4ChromaTex_21() { return &____History4ChromaTex_21; }
	inline void set__History4ChromaTex_21(int32_t value)
	{
		____History4ChromaTex_21 = value;
	}

	inline static int32_t get_offset_of__History1Weight_22() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____History1Weight_22)); }
	inline int32_t get__History1Weight_22() const { return ____History1Weight_22; }
	inline int32_t* get_address_of__History1Weight_22() { return &____History1Weight_22; }
	inline void set__History1Weight_22(int32_t value)
	{
		____History1Weight_22 = value;
	}

	inline static int32_t get_offset_of__History2Weight_23() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____History2Weight_23)); }
	inline int32_t get__History2Weight_23() const { return ____History2Weight_23; }
	inline int32_t* get_address_of__History2Weight_23() { return &____History2Weight_23; }
	inline void set__History2Weight_23(int32_t value)
	{
		____History2Weight_23 = value;
	}

	inline static int32_t get_offset_of__History3Weight_24() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____History3Weight_24)); }
	inline int32_t get__History3Weight_24() const { return ____History3Weight_24; }
	inline int32_t* get_address_of__History3Weight_24() { return &____History3Weight_24; }
	inline void set__History3Weight_24(int32_t value)
	{
		____History3Weight_24 = value;
	}

	inline static int32_t get_offset_of__History4Weight_25() { return static_cast<int32_t>(offsetof(Uniforms_t3359537322_StaticFields, ____History4Weight_25)); }
	inline int32_t get__History4Weight_25() const { return ____History4Weight_25; }
	inline int32_t* get_address_of__History4Weight_25() { return &____History4Weight_25; }
	inline void set__History4Weight_25(int32_t value)
	{
		____History4Weight_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3359537322_H
#ifndef POSTPROCESSINGMODEL_T2055598132_H
#define POSTPROCESSINGMODEL_T2055598132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingModel
struct  PostProcessingModel_t2055598132  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.PostProcessing.PostProcessingModel::m_Enabled
	bool ___m_Enabled_0;

public:
	inline static int32_t get_offset_of_m_Enabled_0() { return static_cast<int32_t>(offsetof(PostProcessingModel_t2055598132, ___m_Enabled_0)); }
	inline bool get_m_Enabled_0() const { return ___m_Enabled_0; }
	inline bool* get_address_of_m_Enabled_0() { return &___m_Enabled_0; }
	inline void set_m_Enabled_0(bool value)
	{
		___m_Enabled_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGMODEL_T2055598132_H
#ifndef UNIFORMS_T1175449390_H
#define UNIFORMS_T1175449390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.GrainComponent/Uniforms
struct  Uniforms_t1175449390  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t1175449390_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.GrainComponent/Uniforms::_Grain_Params1
	int32_t ____Grain_Params1_0;
	// System.Int32 UnityEngine.PostProcessing.GrainComponent/Uniforms::_Grain_Params2
	int32_t ____Grain_Params2_1;
	// System.Int32 UnityEngine.PostProcessing.GrainComponent/Uniforms::_GrainTex
	int32_t ____GrainTex_2;
	// System.Int32 UnityEngine.PostProcessing.GrainComponent/Uniforms::_Phase
	int32_t ____Phase_3;

public:
	inline static int32_t get_offset_of__Grain_Params1_0() { return static_cast<int32_t>(offsetof(Uniforms_t1175449390_StaticFields, ____Grain_Params1_0)); }
	inline int32_t get__Grain_Params1_0() const { return ____Grain_Params1_0; }
	inline int32_t* get_address_of__Grain_Params1_0() { return &____Grain_Params1_0; }
	inline void set__Grain_Params1_0(int32_t value)
	{
		____Grain_Params1_0 = value;
	}

	inline static int32_t get_offset_of__Grain_Params2_1() { return static_cast<int32_t>(offsetof(Uniforms_t1175449390_StaticFields, ____Grain_Params2_1)); }
	inline int32_t get__Grain_Params2_1() const { return ____Grain_Params2_1; }
	inline int32_t* get_address_of__Grain_Params2_1() { return &____Grain_Params2_1; }
	inline void set__Grain_Params2_1(int32_t value)
	{
		____Grain_Params2_1 = value;
	}

	inline static int32_t get_offset_of__GrainTex_2() { return static_cast<int32_t>(offsetof(Uniforms_t1175449390_StaticFields, ____GrainTex_2)); }
	inline int32_t get__GrainTex_2() const { return ____GrainTex_2; }
	inline int32_t* get_address_of__GrainTex_2() { return &____GrainTex_2; }
	inline void set__GrainTex_2(int32_t value)
	{
		____GrainTex_2 = value;
	}

	inline static int32_t get_offset_of__Phase_3() { return static_cast<int32_t>(offsetof(Uniforms_t1175449390_StaticFields, ____Phase_3)); }
	inline int32_t get__Phase_3() const { return ____Phase_3; }
	inline int32_t* get_address_of__Phase_3() { return &____Phase_3; }
	inline void set__Phase_3(int32_t value)
	{
		____Phase_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T1175449390_H
#ifndef UNIFORMS_T4015582351_H
#define UNIFORMS_T4015582351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.TaaComponent/Uniforms
struct  Uniforms_t4015582351  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t4015582351_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_Jitter
	int32_t ____Jitter_0;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_SharpenParameters
	int32_t ____SharpenParameters_1;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_FinalBlendParameters
	int32_t ____FinalBlendParameters_2;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_HistoryTex
	int32_t ____HistoryTex_3;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_MainTex
	int32_t ____MainTex_4;

public:
	inline static int32_t get_offset_of__Jitter_0() { return static_cast<int32_t>(offsetof(Uniforms_t4015582351_StaticFields, ____Jitter_0)); }
	inline int32_t get__Jitter_0() const { return ____Jitter_0; }
	inline int32_t* get_address_of__Jitter_0() { return &____Jitter_0; }
	inline void set__Jitter_0(int32_t value)
	{
		____Jitter_0 = value;
	}

	inline static int32_t get_offset_of__SharpenParameters_1() { return static_cast<int32_t>(offsetof(Uniforms_t4015582351_StaticFields, ____SharpenParameters_1)); }
	inline int32_t get__SharpenParameters_1() const { return ____SharpenParameters_1; }
	inline int32_t* get_address_of__SharpenParameters_1() { return &____SharpenParameters_1; }
	inline void set__SharpenParameters_1(int32_t value)
	{
		____SharpenParameters_1 = value;
	}

	inline static int32_t get_offset_of__FinalBlendParameters_2() { return static_cast<int32_t>(offsetof(Uniforms_t4015582351_StaticFields, ____FinalBlendParameters_2)); }
	inline int32_t get__FinalBlendParameters_2() const { return ____FinalBlendParameters_2; }
	inline int32_t* get_address_of__FinalBlendParameters_2() { return &____FinalBlendParameters_2; }
	inline void set__FinalBlendParameters_2(int32_t value)
	{
		____FinalBlendParameters_2 = value;
	}

	inline static int32_t get_offset_of__HistoryTex_3() { return static_cast<int32_t>(offsetof(Uniforms_t4015582351_StaticFields, ____HistoryTex_3)); }
	inline int32_t get__HistoryTex_3() const { return ____HistoryTex_3; }
	inline int32_t* get_address_of__HistoryTex_3() { return &____HistoryTex_3; }
	inline void set__HistoryTex_3(int32_t value)
	{
		____HistoryTex_3 = value;
	}

	inline static int32_t get_offset_of__MainTex_4() { return static_cast<int32_t>(offsetof(Uniforms_t4015582351_StaticFields, ____MainTex_4)); }
	inline int32_t get__MainTex_4() const { return ____MainTex_4; }
	inline int32_t* get_address_of__MainTex_4() { return &____MainTex_4; }
	inline void set__MainTex_4(int32_t value)
	{
		____MainTex_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T4015582351_H
#ifndef UNIFORMS_T3920373761_H
#define UNIFORMS_T3920373761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.FxaaComponent/Uniforms
struct  Uniforms_t3920373761  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3920373761_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.FxaaComponent/Uniforms::_QualitySettings
	int32_t ____QualitySettings_0;
	// System.Int32 UnityEngine.PostProcessing.FxaaComponent/Uniforms::_ConsoleSettings
	int32_t ____ConsoleSettings_1;

public:
	inline static int32_t get_offset_of__QualitySettings_0() { return static_cast<int32_t>(offsetof(Uniforms_t3920373761_StaticFields, ____QualitySettings_0)); }
	inline int32_t get__QualitySettings_0() const { return ____QualitySettings_0; }
	inline int32_t* get_address_of__QualitySettings_0() { return &____QualitySettings_0; }
	inline void set__QualitySettings_0(int32_t value)
	{
		____QualitySettings_0 = value;
	}

	inline static int32_t get_offset_of__ConsoleSettings_1() { return static_cast<int32_t>(offsetof(Uniforms_t3920373761_StaticFields, ____ConsoleSettings_1)); }
	inline int32_t get__ConsoleSettings_1() const { return ____ConsoleSettings_1; }
	inline int32_t* get_address_of__ConsoleSettings_1() { return &____ConsoleSettings_1; }
	inline void set__ConsoleSettings_1(int32_t value)
	{
		____ConsoleSettings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3920373761_H
#ifndef UNIFORMS_T3041071304_H
#define UNIFORMS_T3041071304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingComponent/Uniforms
struct  Uniforms_t3041071304  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3041071304_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_LutParams
	int32_t ____LutParams_0;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_NeutralTonemapperParams1
	int32_t ____NeutralTonemapperParams1_1;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_NeutralTonemapperParams2
	int32_t ____NeutralTonemapperParams2_2;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_HueShift
	int32_t ____HueShift_3;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Saturation
	int32_t ____Saturation_4;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Contrast
	int32_t ____Contrast_5;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Balance
	int32_t ____Balance_6;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Lift
	int32_t ____Lift_7;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_InvGamma
	int32_t ____InvGamma_8;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Gain
	int32_t ____Gain_9;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Slope
	int32_t ____Slope_10;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Power
	int32_t ____Power_11;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Offset
	int32_t ____Offset_12;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_ChannelMixerRed
	int32_t ____ChannelMixerRed_13;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_ChannelMixerGreen
	int32_t ____ChannelMixerGreen_14;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_ChannelMixerBlue
	int32_t ____ChannelMixerBlue_15;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Curves
	int32_t ____Curves_16;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_LogLut
	int32_t ____LogLut_17;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_LogLut_Params
	int32_t ____LogLut_Params_18;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_ExposureEV
	int32_t ____ExposureEV_19;

public:
	inline static int32_t get_offset_of__LutParams_0() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____LutParams_0)); }
	inline int32_t get__LutParams_0() const { return ____LutParams_0; }
	inline int32_t* get_address_of__LutParams_0() { return &____LutParams_0; }
	inline void set__LutParams_0(int32_t value)
	{
		____LutParams_0 = value;
	}

	inline static int32_t get_offset_of__NeutralTonemapperParams1_1() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____NeutralTonemapperParams1_1)); }
	inline int32_t get__NeutralTonemapperParams1_1() const { return ____NeutralTonemapperParams1_1; }
	inline int32_t* get_address_of__NeutralTonemapperParams1_1() { return &____NeutralTonemapperParams1_1; }
	inline void set__NeutralTonemapperParams1_1(int32_t value)
	{
		____NeutralTonemapperParams1_1 = value;
	}

	inline static int32_t get_offset_of__NeutralTonemapperParams2_2() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____NeutralTonemapperParams2_2)); }
	inline int32_t get__NeutralTonemapperParams2_2() const { return ____NeutralTonemapperParams2_2; }
	inline int32_t* get_address_of__NeutralTonemapperParams2_2() { return &____NeutralTonemapperParams2_2; }
	inline void set__NeutralTonemapperParams2_2(int32_t value)
	{
		____NeutralTonemapperParams2_2 = value;
	}

	inline static int32_t get_offset_of__HueShift_3() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____HueShift_3)); }
	inline int32_t get__HueShift_3() const { return ____HueShift_3; }
	inline int32_t* get_address_of__HueShift_3() { return &____HueShift_3; }
	inline void set__HueShift_3(int32_t value)
	{
		____HueShift_3 = value;
	}

	inline static int32_t get_offset_of__Saturation_4() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____Saturation_4)); }
	inline int32_t get__Saturation_4() const { return ____Saturation_4; }
	inline int32_t* get_address_of__Saturation_4() { return &____Saturation_4; }
	inline void set__Saturation_4(int32_t value)
	{
		____Saturation_4 = value;
	}

	inline static int32_t get_offset_of__Contrast_5() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____Contrast_5)); }
	inline int32_t get__Contrast_5() const { return ____Contrast_5; }
	inline int32_t* get_address_of__Contrast_5() { return &____Contrast_5; }
	inline void set__Contrast_5(int32_t value)
	{
		____Contrast_5 = value;
	}

	inline static int32_t get_offset_of__Balance_6() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____Balance_6)); }
	inline int32_t get__Balance_6() const { return ____Balance_6; }
	inline int32_t* get_address_of__Balance_6() { return &____Balance_6; }
	inline void set__Balance_6(int32_t value)
	{
		____Balance_6 = value;
	}

	inline static int32_t get_offset_of__Lift_7() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____Lift_7)); }
	inline int32_t get__Lift_7() const { return ____Lift_7; }
	inline int32_t* get_address_of__Lift_7() { return &____Lift_7; }
	inline void set__Lift_7(int32_t value)
	{
		____Lift_7 = value;
	}

	inline static int32_t get_offset_of__InvGamma_8() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____InvGamma_8)); }
	inline int32_t get__InvGamma_8() const { return ____InvGamma_8; }
	inline int32_t* get_address_of__InvGamma_8() { return &____InvGamma_8; }
	inline void set__InvGamma_8(int32_t value)
	{
		____InvGamma_8 = value;
	}

	inline static int32_t get_offset_of__Gain_9() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____Gain_9)); }
	inline int32_t get__Gain_9() const { return ____Gain_9; }
	inline int32_t* get_address_of__Gain_9() { return &____Gain_9; }
	inline void set__Gain_9(int32_t value)
	{
		____Gain_9 = value;
	}

	inline static int32_t get_offset_of__Slope_10() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____Slope_10)); }
	inline int32_t get__Slope_10() const { return ____Slope_10; }
	inline int32_t* get_address_of__Slope_10() { return &____Slope_10; }
	inline void set__Slope_10(int32_t value)
	{
		____Slope_10 = value;
	}

	inline static int32_t get_offset_of__Power_11() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____Power_11)); }
	inline int32_t get__Power_11() const { return ____Power_11; }
	inline int32_t* get_address_of__Power_11() { return &____Power_11; }
	inline void set__Power_11(int32_t value)
	{
		____Power_11 = value;
	}

	inline static int32_t get_offset_of__Offset_12() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____Offset_12)); }
	inline int32_t get__Offset_12() const { return ____Offset_12; }
	inline int32_t* get_address_of__Offset_12() { return &____Offset_12; }
	inline void set__Offset_12(int32_t value)
	{
		____Offset_12 = value;
	}

	inline static int32_t get_offset_of__ChannelMixerRed_13() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____ChannelMixerRed_13)); }
	inline int32_t get__ChannelMixerRed_13() const { return ____ChannelMixerRed_13; }
	inline int32_t* get_address_of__ChannelMixerRed_13() { return &____ChannelMixerRed_13; }
	inline void set__ChannelMixerRed_13(int32_t value)
	{
		____ChannelMixerRed_13 = value;
	}

	inline static int32_t get_offset_of__ChannelMixerGreen_14() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____ChannelMixerGreen_14)); }
	inline int32_t get__ChannelMixerGreen_14() const { return ____ChannelMixerGreen_14; }
	inline int32_t* get_address_of__ChannelMixerGreen_14() { return &____ChannelMixerGreen_14; }
	inline void set__ChannelMixerGreen_14(int32_t value)
	{
		____ChannelMixerGreen_14 = value;
	}

	inline static int32_t get_offset_of__ChannelMixerBlue_15() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____ChannelMixerBlue_15)); }
	inline int32_t get__ChannelMixerBlue_15() const { return ____ChannelMixerBlue_15; }
	inline int32_t* get_address_of__ChannelMixerBlue_15() { return &____ChannelMixerBlue_15; }
	inline void set__ChannelMixerBlue_15(int32_t value)
	{
		____ChannelMixerBlue_15 = value;
	}

	inline static int32_t get_offset_of__Curves_16() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____Curves_16)); }
	inline int32_t get__Curves_16() const { return ____Curves_16; }
	inline int32_t* get_address_of__Curves_16() { return &____Curves_16; }
	inline void set__Curves_16(int32_t value)
	{
		____Curves_16 = value;
	}

	inline static int32_t get_offset_of__LogLut_17() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____LogLut_17)); }
	inline int32_t get__LogLut_17() const { return ____LogLut_17; }
	inline int32_t* get_address_of__LogLut_17() { return &____LogLut_17; }
	inline void set__LogLut_17(int32_t value)
	{
		____LogLut_17 = value;
	}

	inline static int32_t get_offset_of__LogLut_Params_18() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____LogLut_Params_18)); }
	inline int32_t get__LogLut_Params_18() const { return ____LogLut_Params_18; }
	inline int32_t* get_address_of__LogLut_Params_18() { return &____LogLut_Params_18; }
	inline void set__LogLut_Params_18(int32_t value)
	{
		____LogLut_Params_18 = value;
	}

	inline static int32_t get_offset_of__ExposureEV_19() { return static_cast<int32_t>(offsetof(Uniforms_t3041071304_StaticFields, ____ExposureEV_19)); }
	inline int32_t get__ExposureEV_19() const { return ____ExposureEV_19; }
	inline int32_t* get_address_of__ExposureEV_19() { return &____ExposureEV_19; }
	inline void set__ExposureEV_19(int32_t value)
	{
		____ExposureEV_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3041071304_H
#ifndef UNIFORMS_T2344918952_H
#define UNIFORMS_T2344918952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms
struct  Uniforms_t2344918952  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t2344918952_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_Intensity
	int32_t ____Intensity_0;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_Radius
	int32_t ____Radius_1;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_FogParams
	int32_t ____FogParams_2;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_Downsample
	int32_t ____Downsample_3;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_SampleCount
	int32_t ____SampleCount_4;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_OcclusionTexture1
	int32_t ____OcclusionTexture1_5;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_OcclusionTexture2
	int32_t ____OcclusionTexture2_6;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_OcclusionTexture
	int32_t ____OcclusionTexture_7;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_MainTex
	int32_t ____MainTex_8;
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/Uniforms::_TempRT
	int32_t ____TempRT_9;

public:
	inline static int32_t get_offset_of__Intensity_0() { return static_cast<int32_t>(offsetof(Uniforms_t2344918952_StaticFields, ____Intensity_0)); }
	inline int32_t get__Intensity_0() const { return ____Intensity_0; }
	inline int32_t* get_address_of__Intensity_0() { return &____Intensity_0; }
	inline void set__Intensity_0(int32_t value)
	{
		____Intensity_0 = value;
	}

	inline static int32_t get_offset_of__Radius_1() { return static_cast<int32_t>(offsetof(Uniforms_t2344918952_StaticFields, ____Radius_1)); }
	inline int32_t get__Radius_1() const { return ____Radius_1; }
	inline int32_t* get_address_of__Radius_1() { return &____Radius_1; }
	inline void set__Radius_1(int32_t value)
	{
		____Radius_1 = value;
	}

	inline static int32_t get_offset_of__FogParams_2() { return static_cast<int32_t>(offsetof(Uniforms_t2344918952_StaticFields, ____FogParams_2)); }
	inline int32_t get__FogParams_2() const { return ____FogParams_2; }
	inline int32_t* get_address_of__FogParams_2() { return &____FogParams_2; }
	inline void set__FogParams_2(int32_t value)
	{
		____FogParams_2 = value;
	}

	inline static int32_t get_offset_of__Downsample_3() { return static_cast<int32_t>(offsetof(Uniforms_t2344918952_StaticFields, ____Downsample_3)); }
	inline int32_t get__Downsample_3() const { return ____Downsample_3; }
	inline int32_t* get_address_of__Downsample_3() { return &____Downsample_3; }
	inline void set__Downsample_3(int32_t value)
	{
		____Downsample_3 = value;
	}

	inline static int32_t get_offset_of__SampleCount_4() { return static_cast<int32_t>(offsetof(Uniforms_t2344918952_StaticFields, ____SampleCount_4)); }
	inline int32_t get__SampleCount_4() const { return ____SampleCount_4; }
	inline int32_t* get_address_of__SampleCount_4() { return &____SampleCount_4; }
	inline void set__SampleCount_4(int32_t value)
	{
		____SampleCount_4 = value;
	}

	inline static int32_t get_offset_of__OcclusionTexture1_5() { return static_cast<int32_t>(offsetof(Uniforms_t2344918952_StaticFields, ____OcclusionTexture1_5)); }
	inline int32_t get__OcclusionTexture1_5() const { return ____OcclusionTexture1_5; }
	inline int32_t* get_address_of__OcclusionTexture1_5() { return &____OcclusionTexture1_5; }
	inline void set__OcclusionTexture1_5(int32_t value)
	{
		____OcclusionTexture1_5 = value;
	}

	inline static int32_t get_offset_of__OcclusionTexture2_6() { return static_cast<int32_t>(offsetof(Uniforms_t2344918952_StaticFields, ____OcclusionTexture2_6)); }
	inline int32_t get__OcclusionTexture2_6() const { return ____OcclusionTexture2_6; }
	inline int32_t* get_address_of__OcclusionTexture2_6() { return &____OcclusionTexture2_6; }
	inline void set__OcclusionTexture2_6(int32_t value)
	{
		____OcclusionTexture2_6 = value;
	}

	inline static int32_t get_offset_of__OcclusionTexture_7() { return static_cast<int32_t>(offsetof(Uniforms_t2344918952_StaticFields, ____OcclusionTexture_7)); }
	inline int32_t get__OcclusionTexture_7() const { return ____OcclusionTexture_7; }
	inline int32_t* get_address_of__OcclusionTexture_7() { return &____OcclusionTexture_7; }
	inline void set__OcclusionTexture_7(int32_t value)
	{
		____OcclusionTexture_7 = value;
	}

	inline static int32_t get_offset_of__MainTex_8() { return static_cast<int32_t>(offsetof(Uniforms_t2344918952_StaticFields, ____MainTex_8)); }
	inline int32_t get__MainTex_8() const { return ____MainTex_8; }
	inline int32_t* get_address_of__MainTex_8() { return &____MainTex_8; }
	inline void set__MainTex_8(int32_t value)
	{
		____MainTex_8 = value;
	}

	inline static int32_t get_offset_of__TempRT_9() { return static_cast<int32_t>(offsetof(Uniforms_t2344918952_StaticFields, ____TempRT_9)); }
	inline int32_t get__TempRT_9() const { return ____TempRT_9; }
	inline int32_t* get_address_of__TempRT_9() { return &____TempRT_9; }
	inline void set__TempRT_9(int32_t value)
	{
		____TempRT_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T2344918952_H
#ifndef UNIFORMS_T3923242286_H
#define UNIFORMS_T3923242286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomComponent/Uniforms
struct  Uniforms_t3923242286  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3923242286_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_AutoExposure
	int32_t ____AutoExposure_0;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Threshold
	int32_t ____Threshold_1;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Curve
	int32_t ____Curve_2;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_PrefilterOffs
	int32_t ____PrefilterOffs_3;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_SampleScale
	int32_t ____SampleScale_4;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_BaseTex
	int32_t ____BaseTex_5;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_BloomTex
	int32_t ____BloomTex_6;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Bloom_Settings
	int32_t ____Bloom_Settings_7;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Bloom_DirtTex
	int32_t ____Bloom_DirtTex_8;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Bloom_DirtIntensity
	int32_t ____Bloom_DirtIntensity_9;

public:
	inline static int32_t get_offset_of__AutoExposure_0() { return static_cast<int32_t>(offsetof(Uniforms_t3923242286_StaticFields, ____AutoExposure_0)); }
	inline int32_t get__AutoExposure_0() const { return ____AutoExposure_0; }
	inline int32_t* get_address_of__AutoExposure_0() { return &____AutoExposure_0; }
	inline void set__AutoExposure_0(int32_t value)
	{
		____AutoExposure_0 = value;
	}

	inline static int32_t get_offset_of__Threshold_1() { return static_cast<int32_t>(offsetof(Uniforms_t3923242286_StaticFields, ____Threshold_1)); }
	inline int32_t get__Threshold_1() const { return ____Threshold_1; }
	inline int32_t* get_address_of__Threshold_1() { return &____Threshold_1; }
	inline void set__Threshold_1(int32_t value)
	{
		____Threshold_1 = value;
	}

	inline static int32_t get_offset_of__Curve_2() { return static_cast<int32_t>(offsetof(Uniforms_t3923242286_StaticFields, ____Curve_2)); }
	inline int32_t get__Curve_2() const { return ____Curve_2; }
	inline int32_t* get_address_of__Curve_2() { return &____Curve_2; }
	inline void set__Curve_2(int32_t value)
	{
		____Curve_2 = value;
	}

	inline static int32_t get_offset_of__PrefilterOffs_3() { return static_cast<int32_t>(offsetof(Uniforms_t3923242286_StaticFields, ____PrefilterOffs_3)); }
	inline int32_t get__PrefilterOffs_3() const { return ____PrefilterOffs_3; }
	inline int32_t* get_address_of__PrefilterOffs_3() { return &____PrefilterOffs_3; }
	inline void set__PrefilterOffs_3(int32_t value)
	{
		____PrefilterOffs_3 = value;
	}

	inline static int32_t get_offset_of__SampleScale_4() { return static_cast<int32_t>(offsetof(Uniforms_t3923242286_StaticFields, ____SampleScale_4)); }
	inline int32_t get__SampleScale_4() const { return ____SampleScale_4; }
	inline int32_t* get_address_of__SampleScale_4() { return &____SampleScale_4; }
	inline void set__SampleScale_4(int32_t value)
	{
		____SampleScale_4 = value;
	}

	inline static int32_t get_offset_of__BaseTex_5() { return static_cast<int32_t>(offsetof(Uniforms_t3923242286_StaticFields, ____BaseTex_5)); }
	inline int32_t get__BaseTex_5() const { return ____BaseTex_5; }
	inline int32_t* get_address_of__BaseTex_5() { return &____BaseTex_5; }
	inline void set__BaseTex_5(int32_t value)
	{
		____BaseTex_5 = value;
	}

	inline static int32_t get_offset_of__BloomTex_6() { return static_cast<int32_t>(offsetof(Uniforms_t3923242286_StaticFields, ____BloomTex_6)); }
	inline int32_t get__BloomTex_6() const { return ____BloomTex_6; }
	inline int32_t* get_address_of__BloomTex_6() { return &____BloomTex_6; }
	inline void set__BloomTex_6(int32_t value)
	{
		____BloomTex_6 = value;
	}

	inline static int32_t get_offset_of__Bloom_Settings_7() { return static_cast<int32_t>(offsetof(Uniforms_t3923242286_StaticFields, ____Bloom_Settings_7)); }
	inline int32_t get__Bloom_Settings_7() const { return ____Bloom_Settings_7; }
	inline int32_t* get_address_of__Bloom_Settings_7() { return &____Bloom_Settings_7; }
	inline void set__Bloom_Settings_7(int32_t value)
	{
		____Bloom_Settings_7 = value;
	}

	inline static int32_t get_offset_of__Bloom_DirtTex_8() { return static_cast<int32_t>(offsetof(Uniforms_t3923242286_StaticFields, ____Bloom_DirtTex_8)); }
	inline int32_t get__Bloom_DirtTex_8() const { return ____Bloom_DirtTex_8; }
	inline int32_t* get_address_of__Bloom_DirtTex_8() { return &____Bloom_DirtTex_8; }
	inline void set__Bloom_DirtTex_8(int32_t value)
	{
		____Bloom_DirtTex_8 = value;
	}

	inline static int32_t get_offset_of__Bloom_DirtIntensity_9() { return static_cast<int32_t>(offsetof(Uniforms_t3923242286_StaticFields, ____Bloom_DirtIntensity_9)); }
	inline int32_t get__Bloom_DirtIntensity_9() const { return ____Bloom_DirtIntensity_9; }
	inline int32_t* get_address_of__Bloom_DirtIntensity_9() { return &____Bloom_DirtIntensity_9; }
	inline void set__Bloom_DirtIntensity_9(int32_t value)
	{
		____Bloom_DirtIntensity_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3923242286_H
#ifndef UNIFORMS_T3230815181_H
#define UNIFORMS_T3230815181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms
struct  Uniforms_t3230815181  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3230815181_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_DepthScale
	int32_t ____DepthScale_0;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_TempRT
	int32_t ____TempRT_1;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_Opacity
	int32_t ____Opacity_2;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_MainTex
	int32_t ____MainTex_3;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_TempRT2
	int32_t ____TempRT2_4;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_Amplitude
	int32_t ____Amplitude_5;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_Scale
	int32_t ____Scale_6;

public:
	inline static int32_t get_offset_of__DepthScale_0() { return static_cast<int32_t>(offsetof(Uniforms_t3230815181_StaticFields, ____DepthScale_0)); }
	inline int32_t get__DepthScale_0() const { return ____DepthScale_0; }
	inline int32_t* get_address_of__DepthScale_0() { return &____DepthScale_0; }
	inline void set__DepthScale_0(int32_t value)
	{
		____DepthScale_0 = value;
	}

	inline static int32_t get_offset_of__TempRT_1() { return static_cast<int32_t>(offsetof(Uniforms_t3230815181_StaticFields, ____TempRT_1)); }
	inline int32_t get__TempRT_1() const { return ____TempRT_1; }
	inline int32_t* get_address_of__TempRT_1() { return &____TempRT_1; }
	inline void set__TempRT_1(int32_t value)
	{
		____TempRT_1 = value;
	}

	inline static int32_t get_offset_of__Opacity_2() { return static_cast<int32_t>(offsetof(Uniforms_t3230815181_StaticFields, ____Opacity_2)); }
	inline int32_t get__Opacity_2() const { return ____Opacity_2; }
	inline int32_t* get_address_of__Opacity_2() { return &____Opacity_2; }
	inline void set__Opacity_2(int32_t value)
	{
		____Opacity_2 = value;
	}

	inline static int32_t get_offset_of__MainTex_3() { return static_cast<int32_t>(offsetof(Uniforms_t3230815181_StaticFields, ____MainTex_3)); }
	inline int32_t get__MainTex_3() const { return ____MainTex_3; }
	inline int32_t* get_address_of__MainTex_3() { return &____MainTex_3; }
	inline void set__MainTex_3(int32_t value)
	{
		____MainTex_3 = value;
	}

	inline static int32_t get_offset_of__TempRT2_4() { return static_cast<int32_t>(offsetof(Uniforms_t3230815181_StaticFields, ____TempRT2_4)); }
	inline int32_t get__TempRT2_4() const { return ____TempRT2_4; }
	inline int32_t* get_address_of__TempRT2_4() { return &____TempRT2_4; }
	inline void set__TempRT2_4(int32_t value)
	{
		____TempRT2_4 = value;
	}

	inline static int32_t get_offset_of__Amplitude_5() { return static_cast<int32_t>(offsetof(Uniforms_t3230815181_StaticFields, ____Amplitude_5)); }
	inline int32_t get__Amplitude_5() const { return ____Amplitude_5; }
	inline int32_t* get_address_of__Amplitude_5() { return &____Amplitude_5; }
	inline void set__Amplitude_5(int32_t value)
	{
		____Amplitude_5 = value;
	}

	inline static int32_t get_offset_of__Scale_6() { return static_cast<int32_t>(offsetof(Uniforms_t3230815181_StaticFields, ____Scale_6)); }
	inline int32_t get__Scale_6() const { return ____Scale_6; }
	inline int32_t* get_address_of__Scale_6() { return &____Scale_6; }
	inline void set__Scale_6(int32_t value)
	{
		____Scale_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3230815181_H
#ifndef ARROWARRAY_T772926374_H
#define ARROWARRAY_T772926374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray
struct  ArrowArray_t772926374  : public RuntimeObject
{
public:
	// UnityEngine.Mesh UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::<mesh>k__BackingField
	Mesh_t1356156583 * ___U3CmeshU3Ek__BackingField_0;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::<columnCount>k__BackingField
	int32_t ___U3CcolumnCountU3Ek__BackingField_1;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::<rowCount>k__BackingField
	int32_t ___U3CrowCountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CmeshU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ArrowArray_t772926374, ___U3CmeshU3Ek__BackingField_0)); }
	inline Mesh_t1356156583 * get_U3CmeshU3Ek__BackingField_0() const { return ___U3CmeshU3Ek__BackingField_0; }
	inline Mesh_t1356156583 ** get_address_of_U3CmeshU3Ek__BackingField_0() { return &___U3CmeshU3Ek__BackingField_0; }
	inline void set_U3CmeshU3Ek__BackingField_0(Mesh_t1356156583 * value)
	{
		___U3CmeshU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmeshU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CcolumnCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ArrowArray_t772926374, ___U3CcolumnCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CcolumnCountU3Ek__BackingField_1() const { return ___U3CcolumnCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CcolumnCountU3Ek__BackingField_1() { return &___U3CcolumnCountU3Ek__BackingField_1; }
	inline void set_U3CcolumnCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CcolumnCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CrowCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ArrowArray_t772926374, ___U3CrowCountU3Ek__BackingField_2)); }
	inline int32_t get_U3CrowCountU3Ek__BackingField_2() const { return ___U3CrowCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CrowCountU3Ek__BackingField_2() { return &___U3CrowCountU3Ek__BackingField_2; }
	inline void set_U3CrowCountU3Ek__BackingField_2(int32_t value)
	{
		___U3CrowCountU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARROWARRAY_T772926374_H
#ifndef UNIFORMS_T3073488212_H
#define UNIFORMS_T3073488212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ChromaticAberrationComponent/Uniforms
struct  Uniforms_t3073488212  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3073488212_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.ChromaticAberrationComponent/Uniforms::_ChromaticAberration_Amount
	int32_t ____ChromaticAberration_Amount_0;
	// System.Int32 UnityEngine.PostProcessing.ChromaticAberrationComponent/Uniforms::_ChromaticAberration_Spectrum
	int32_t ____ChromaticAberration_Spectrum_1;

public:
	inline static int32_t get_offset_of__ChromaticAberration_Amount_0() { return static_cast<int32_t>(offsetof(Uniforms_t3073488212_StaticFields, ____ChromaticAberration_Amount_0)); }
	inline int32_t get__ChromaticAberration_Amount_0() const { return ____ChromaticAberration_Amount_0; }
	inline int32_t* get_address_of__ChromaticAberration_Amount_0() { return &____ChromaticAberration_Amount_0; }
	inline void set__ChromaticAberration_Amount_0(int32_t value)
	{
		____ChromaticAberration_Amount_0 = value;
	}

	inline static int32_t get_offset_of__ChromaticAberration_Spectrum_1() { return static_cast<int32_t>(offsetof(Uniforms_t3073488212_StaticFields, ____ChromaticAberration_Spectrum_1)); }
	inline int32_t get__ChromaticAberration_Spectrum_1() const { return ____ChromaticAberration_Spectrum_1; }
	inline int32_t* get_address_of__ChromaticAberration_Spectrum_1() { return &____ChromaticAberration_Spectrum_1; }
	inline void set__ChromaticAberration_Spectrum_1(int32_t value)
	{
		____ChromaticAberration_Spectrum_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3073488212_H
#ifndef SETTINGS_T1168376358_H
#define SETTINGS_T1168376358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
struct  Settings_t1168376358 
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.ChromaticAberrationModel/Settings::spectralTexture
	Texture2D_t3542995729 * ___spectralTexture_0;
	// System.Single UnityEngine.PostProcessing.ChromaticAberrationModel/Settings::intensity
	float ___intensity_1;

public:
	inline static int32_t get_offset_of_spectralTexture_0() { return static_cast<int32_t>(offsetof(Settings_t1168376358, ___spectralTexture_0)); }
	inline Texture2D_t3542995729 * get_spectralTexture_0() const { return ___spectralTexture_0; }
	inline Texture2D_t3542995729 ** get_address_of_spectralTexture_0() { return &___spectralTexture_0; }
	inline void set_spectralTexture_0(Texture2D_t3542995729 * value)
	{
		___spectralTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&___spectralTexture_0), value);
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(Settings_t1168376358, ___intensity_1)); }
	inline float get_intensity_1() const { return ___intensity_1; }
	inline float* get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(float value)
	{
		___intensity_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
struct Settings_t1168376358_marshaled_pinvoke
{
	Texture2D_t3542995729 * ___spectralTexture_0;
	float ___intensity_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
struct Settings_t1168376358_marshaled_com
{
	Texture2D_t3542995729 * ___spectralTexture_0;
	float ___intensity_1;
};
#endif // SETTINGS_T1168376358_H
#ifndef MOTIONVECTORSSETTINGS_T1700962583_H
#define MOTIONVECTORSSETTINGS_T1700962583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings
struct  MotionVectorsSettings_t1700962583 
{
public:
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::sourceOpacity
	float ___sourceOpacity_0;
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionImageOpacity
	float ___motionImageOpacity_1;
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionImageAmplitude
	float ___motionImageAmplitude_2;
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionVectorsOpacity
	float ___motionVectorsOpacity_3;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionVectorsResolution
	int32_t ___motionVectorsResolution_4;
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionVectorsAmplitude
	float ___motionVectorsAmplitude_5;

public:
	inline static int32_t get_offset_of_sourceOpacity_0() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t1700962583, ___sourceOpacity_0)); }
	inline float get_sourceOpacity_0() const { return ___sourceOpacity_0; }
	inline float* get_address_of_sourceOpacity_0() { return &___sourceOpacity_0; }
	inline void set_sourceOpacity_0(float value)
	{
		___sourceOpacity_0 = value;
	}

	inline static int32_t get_offset_of_motionImageOpacity_1() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t1700962583, ___motionImageOpacity_1)); }
	inline float get_motionImageOpacity_1() const { return ___motionImageOpacity_1; }
	inline float* get_address_of_motionImageOpacity_1() { return &___motionImageOpacity_1; }
	inline void set_motionImageOpacity_1(float value)
	{
		___motionImageOpacity_1 = value;
	}

	inline static int32_t get_offset_of_motionImageAmplitude_2() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t1700962583, ___motionImageAmplitude_2)); }
	inline float get_motionImageAmplitude_2() const { return ___motionImageAmplitude_2; }
	inline float* get_address_of_motionImageAmplitude_2() { return &___motionImageAmplitude_2; }
	inline void set_motionImageAmplitude_2(float value)
	{
		___motionImageAmplitude_2 = value;
	}

	inline static int32_t get_offset_of_motionVectorsOpacity_3() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t1700962583, ___motionVectorsOpacity_3)); }
	inline float get_motionVectorsOpacity_3() const { return ___motionVectorsOpacity_3; }
	inline float* get_address_of_motionVectorsOpacity_3() { return &___motionVectorsOpacity_3; }
	inline void set_motionVectorsOpacity_3(float value)
	{
		___motionVectorsOpacity_3 = value;
	}

	inline static int32_t get_offset_of_motionVectorsResolution_4() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t1700962583, ___motionVectorsResolution_4)); }
	inline int32_t get_motionVectorsResolution_4() const { return ___motionVectorsResolution_4; }
	inline int32_t* get_address_of_motionVectorsResolution_4() { return &___motionVectorsResolution_4; }
	inline void set_motionVectorsResolution_4(int32_t value)
	{
		___motionVectorsResolution_4 = value;
	}

	inline static int32_t get_offset_of_motionVectorsAmplitude_5() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t1700962583, ___motionVectorsAmplitude_5)); }
	inline float get_motionVectorsAmplitude_5() const { return ___motionVectorsAmplitude_5; }
	inline float* get_address_of_motionVectorsAmplitude_5() { return &___motionVectorsAmplitude_5; }
	inline void set_motionVectorsAmplitude_5(float value)
	{
		___motionVectorsAmplitude_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTIONVECTORSSETTINGS_T1700962583_H
#ifndef DEPTHSETTINGS_T587440522_H
#define DEPTHSETTINGS_T587440522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings
struct  DepthSettings_t587440522 
{
public:
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings::scale
	float ___scale_0;

public:
	inline static int32_t get_offset_of_scale_0() { return static_cast<int32_t>(offsetof(DepthSettings_t587440522, ___scale_0)); }
	inline float get_scale_0() const { return ___scale_0; }
	inline float* get_address_of_scale_0() { return &___scale_0; }
	inline void set_scale_0(float value)
	{
		___scale_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHSETTINGS_T587440522_H
#ifndef LENSDIRTSETTINGS_T3667174501_H
#define LENSDIRTSETTINGS_T3667174501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomModel/LensDirtSettings
struct  LensDirtSettings_t3667174501 
{
public:
	// UnityEngine.Texture UnityEngine.PostProcessing.BloomModel/LensDirtSettings::texture
	Texture_t2243626319 * ___texture_0;
	// System.Single UnityEngine.PostProcessing.BloomModel/LensDirtSettings::intensity
	float ___intensity_1;

public:
	inline static int32_t get_offset_of_texture_0() { return static_cast<int32_t>(offsetof(LensDirtSettings_t3667174501, ___texture_0)); }
	inline Texture_t2243626319 * get_texture_0() const { return ___texture_0; }
	inline Texture_t2243626319 ** get_address_of_texture_0() { return &___texture_0; }
	inline void set_texture_0(Texture_t2243626319 * value)
	{
		___texture_0 = value;
		Il2CppCodeGenWriteBarrier((&___texture_0), value);
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(LensDirtSettings_t3667174501, ___intensity_1)); }
	inline float get_intensity_1() const { return ___intensity_1; }
	inline float* get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(float value)
	{
		___intensity_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.BloomModel/LensDirtSettings
struct LensDirtSettings_t3667174501_marshaled_pinvoke
{
	Texture_t2243626319 * ___texture_0;
	float ___intensity_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.BloomModel/LensDirtSettings
struct LensDirtSettings_t3667174501_marshaled_com
{
	Texture_t2243626319 * ___texture_0;
	float ___intensity_1;
};
#endif // LENSDIRTSETTINGS_T3667174501_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
#ifndef BLOOMSETTINGS_T2155188677_H
#define BLOOMSETTINGS_T2155188677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomModel/BloomSettings
struct  BloomSettings_t2155188677 
{
public:
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::intensity
	float ___intensity_0;
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::threshold
	float ___threshold_1;
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::softKnee
	float ___softKnee_2;
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::radius
	float ___radius_3;
	// System.Boolean UnityEngine.PostProcessing.BloomModel/BloomSettings::antiFlicker
	bool ___antiFlicker_4;

public:
	inline static int32_t get_offset_of_intensity_0() { return static_cast<int32_t>(offsetof(BloomSettings_t2155188677, ___intensity_0)); }
	inline float get_intensity_0() const { return ___intensity_0; }
	inline float* get_address_of_intensity_0() { return &___intensity_0; }
	inline void set_intensity_0(float value)
	{
		___intensity_0 = value;
	}

	inline static int32_t get_offset_of_threshold_1() { return static_cast<int32_t>(offsetof(BloomSettings_t2155188677, ___threshold_1)); }
	inline float get_threshold_1() const { return ___threshold_1; }
	inline float* get_address_of_threshold_1() { return &___threshold_1; }
	inline void set_threshold_1(float value)
	{
		___threshold_1 = value;
	}

	inline static int32_t get_offset_of_softKnee_2() { return static_cast<int32_t>(offsetof(BloomSettings_t2155188677, ___softKnee_2)); }
	inline float get_softKnee_2() const { return ___softKnee_2; }
	inline float* get_address_of_softKnee_2() { return &___softKnee_2; }
	inline void set_softKnee_2(float value)
	{
		___softKnee_2 = value;
	}

	inline static int32_t get_offset_of_radius_3() { return static_cast<int32_t>(offsetof(BloomSettings_t2155188677, ___radius_3)); }
	inline float get_radius_3() const { return ___radius_3; }
	inline float* get_address_of_radius_3() { return &___radius_3; }
	inline void set_radius_3(float value)
	{
		___radius_3 = value;
	}

	inline static int32_t get_offset_of_antiFlicker_4() { return static_cast<int32_t>(offsetof(BloomSettings_t2155188677, ___antiFlicker_4)); }
	inline bool get_antiFlicker_4() const { return ___antiFlicker_4; }
	inline bool* get_address_of_antiFlicker_4() { return &___antiFlicker_4; }
	inline void set_antiFlicker_4(bool value)
	{
		___antiFlicker_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.BloomModel/BloomSettings
struct BloomSettings_t2155188677_marshaled_pinvoke
{
	float ___intensity_0;
	float ___threshold_1;
	float ___softKnee_2;
	float ___radius_3;
	int32_t ___antiFlicker_4;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.BloomModel/BloomSettings
struct BloomSettings_t2155188677_marshaled_com
{
	float ___intensity_0;
	float ___threshold_1;
	float ___softKnee_2;
	float ___radius_3;
	int32_t ___antiFlicker_4;
};
#endif // BLOOMSETTINGS_T2155188677_H
#ifndef SETTINGS_T2102522116_H
#define SETTINGS_T2102522116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurModel/Settings
struct  Settings_t2102522116 
{
public:
	// System.Single UnityEngine.PostProcessing.MotionBlurModel/Settings::shutterAngle
	float ___shutterAngle_0;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurModel/Settings::sampleCount
	int32_t ___sampleCount_1;
	// System.Single UnityEngine.PostProcessing.MotionBlurModel/Settings::frameBlending
	float ___frameBlending_2;

public:
	inline static int32_t get_offset_of_shutterAngle_0() { return static_cast<int32_t>(offsetof(Settings_t2102522116, ___shutterAngle_0)); }
	inline float get_shutterAngle_0() const { return ___shutterAngle_0; }
	inline float* get_address_of_shutterAngle_0() { return &___shutterAngle_0; }
	inline void set_shutterAngle_0(float value)
	{
		___shutterAngle_0 = value;
	}

	inline static int32_t get_offset_of_sampleCount_1() { return static_cast<int32_t>(offsetof(Settings_t2102522116, ___sampleCount_1)); }
	inline int32_t get_sampleCount_1() const { return ___sampleCount_1; }
	inline int32_t* get_address_of_sampleCount_1() { return &___sampleCount_1; }
	inline void set_sampleCount_1(int32_t value)
	{
		___sampleCount_1 = value;
	}

	inline static int32_t get_offset_of_frameBlending_2() { return static_cast<int32_t>(offsetof(Settings_t2102522116, ___frameBlending_2)); }
	inline float get_frameBlending_2() const { return ___frameBlending_2; }
	inline float* get_address_of_frameBlending_2() { return &___frameBlending_2; }
	inline void set_frameBlending_2(float value)
	{
		___frameBlending_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGS_T2102522116_H
#ifndef INTENSITYSETTINGS_T3320342945_H
#define INTENSITYSETTINGS_T3320342945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings
struct  IntensitySettings_t3320342945 
{
public:
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings::reflectionMultiplier
	float ___reflectionMultiplier_0;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings::fadeDistance
	float ___fadeDistance_1;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings::fresnelFade
	float ___fresnelFade_2;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings::fresnelFadePower
	float ___fresnelFadePower_3;

public:
	inline static int32_t get_offset_of_reflectionMultiplier_0() { return static_cast<int32_t>(offsetof(IntensitySettings_t3320342945, ___reflectionMultiplier_0)); }
	inline float get_reflectionMultiplier_0() const { return ___reflectionMultiplier_0; }
	inline float* get_address_of_reflectionMultiplier_0() { return &___reflectionMultiplier_0; }
	inline void set_reflectionMultiplier_0(float value)
	{
		___reflectionMultiplier_0 = value;
	}

	inline static int32_t get_offset_of_fadeDistance_1() { return static_cast<int32_t>(offsetof(IntensitySettings_t3320342945, ___fadeDistance_1)); }
	inline float get_fadeDistance_1() const { return ___fadeDistance_1; }
	inline float* get_address_of_fadeDistance_1() { return &___fadeDistance_1; }
	inline void set_fadeDistance_1(float value)
	{
		___fadeDistance_1 = value;
	}

	inline static int32_t get_offset_of_fresnelFade_2() { return static_cast<int32_t>(offsetof(IntensitySettings_t3320342945, ___fresnelFade_2)); }
	inline float get_fresnelFade_2() const { return ___fresnelFade_2; }
	inline float* get_address_of_fresnelFade_2() { return &___fresnelFade_2; }
	inline void set_fresnelFade_2(float value)
	{
		___fresnelFade_2 = value;
	}

	inline static int32_t get_offset_of_fresnelFadePower_3() { return static_cast<int32_t>(offsetof(IntensitySettings_t3320342945, ___fresnelFadePower_3)); }
	inline float get_fresnelFadePower_3() const { return ___fresnelFadePower_3; }
	inline float* get_address_of_fresnelFadePower_3() { return &___fresnelFadePower_3; }
	inline void set_fresnelFadePower_3(float value)
	{
		___fresnelFadePower_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTENSITYSETTINGS_T3320342945_H
#ifndef SETTINGS_T971704575_H
#define SETTINGS_T971704575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.FogModel/Settings
struct  Settings_t971704575 
{
public:
	// System.Boolean UnityEngine.PostProcessing.FogModel/Settings::excludeSkybox
	bool ___excludeSkybox_0;

public:
	inline static int32_t get_offset_of_excludeSkybox_0() { return static_cast<int32_t>(offsetof(Settings_t971704575, ___excludeSkybox_0)); }
	inline bool get_excludeSkybox_0() const { return ___excludeSkybox_0; }
	inline bool* get_address_of_excludeSkybox_0() { return &___excludeSkybox_0; }
	inline void set_excludeSkybox_0(bool value)
	{
		___excludeSkybox_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.FogModel/Settings
struct Settings_t971704575_marshaled_pinvoke
{
	int32_t ___excludeSkybox_0;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.FogModel/Settings
struct Settings_t971704575_marshaled_com
{
	int32_t ___excludeSkybox_0;
};
#endif // SETTINGS_T971704575_H
#ifndef SETTINGS_T184448608_H
#define SETTINGS_T184448608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.GrainModel/Settings
struct  Settings_t184448608 
{
public:
	// System.Boolean UnityEngine.PostProcessing.GrainModel/Settings::colored
	bool ___colored_0;
	// System.Single UnityEngine.PostProcessing.GrainModel/Settings::intensity
	float ___intensity_1;
	// System.Single UnityEngine.PostProcessing.GrainModel/Settings::size
	float ___size_2;
	// System.Single UnityEngine.PostProcessing.GrainModel/Settings::luminanceContribution
	float ___luminanceContribution_3;

public:
	inline static int32_t get_offset_of_colored_0() { return static_cast<int32_t>(offsetof(Settings_t184448608, ___colored_0)); }
	inline bool get_colored_0() const { return ___colored_0; }
	inline bool* get_address_of_colored_0() { return &___colored_0; }
	inline void set_colored_0(bool value)
	{
		___colored_0 = value;
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(Settings_t184448608, ___intensity_1)); }
	inline float get_intensity_1() const { return ___intensity_1; }
	inline float* get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(float value)
	{
		___intensity_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(Settings_t184448608, ___size_2)); }
	inline float get_size_2() const { return ___size_2; }
	inline float* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(float value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_luminanceContribution_3() { return static_cast<int32_t>(offsetof(Settings_t184448608, ___luminanceContribution_3)); }
	inline float get_luminanceContribution_3() const { return ___luminanceContribution_3; }
	inline float* get_address_of_luminanceContribution_3() { return &___luminanceContribution_3; }
	inline void set_luminanceContribution_3(float value)
	{
		___luminanceContribution_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.GrainModel/Settings
struct Settings_t184448608_marshaled_pinvoke
{
	int32_t ___colored_0;
	float ___intensity_1;
	float ___size_2;
	float ___luminanceContribution_3;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.GrainModel/Settings
struct Settings_t184448608_marshaled_com
{
	int32_t ___colored_0;
	float ___intensity_1;
	float ___size_2;
	float ___luminanceContribution_3;
};
#endif // SETTINGS_T184448608_H
#ifndef SCREENEDGEMASK_T2869591496_H
#define SCREENEDGEMASK_T2869591496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ScreenEdgeMask
struct  ScreenEdgeMask_t2869591496 
{
public:
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ScreenEdgeMask::intensity
	float ___intensity_0;

public:
	inline static int32_t get_offset_of_intensity_0() { return static_cast<int32_t>(offsetof(ScreenEdgeMask_t2869591496, ___intensity_0)); }
	inline float get_intensity_0() const { return ___intensity_0; }
	inline float* get_address_of_intensity_0() { return &___intensity_0; }
	inline void set_intensity_0(float value)
	{
		___intensity_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENEDGEMASK_T2869591496_H
#ifndef SETTINGS_T3263265019_H
#define SETTINGS_T3263265019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DitheringModel/Settings
struct  Settings_t3263265019 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Settings_t3263265019__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGS_T3263265019_H
#ifndef CURVESSETTINGS_T2104131702_H
#define CURVESSETTINGS_T2104131702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
struct  CurvesSettings_t2104131702 
{
public:
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::master
	ColorGradingCurve_t579276466 * ___master_0;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::red
	ColorGradingCurve_t579276466 * ___red_1;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::green
	ColorGradingCurve_t579276466 * ___green_2;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::blue
	ColorGradingCurve_t579276466 * ___blue_3;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::hueVShue
	ColorGradingCurve_t579276466 * ___hueVShue_4;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::hueVSsat
	ColorGradingCurve_t579276466 * ___hueVSsat_5;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::satVSsat
	ColorGradingCurve_t579276466 * ___satVSsat_6;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::lumVSsat
	ColorGradingCurve_t579276466 * ___lumVSsat_7;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurrentEditingCurve
	int32_t ___e_CurrentEditingCurve_8;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveY
	bool ___e_CurveY_9;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveR
	bool ___e_CurveR_10;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveG
	bool ___e_CurveG_11;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveB
	bool ___e_CurveB_12;

public:
	inline static int32_t get_offset_of_master_0() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___master_0)); }
	inline ColorGradingCurve_t579276466 * get_master_0() const { return ___master_0; }
	inline ColorGradingCurve_t579276466 ** get_address_of_master_0() { return &___master_0; }
	inline void set_master_0(ColorGradingCurve_t579276466 * value)
	{
		___master_0 = value;
		Il2CppCodeGenWriteBarrier((&___master_0), value);
	}

	inline static int32_t get_offset_of_red_1() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___red_1)); }
	inline ColorGradingCurve_t579276466 * get_red_1() const { return ___red_1; }
	inline ColorGradingCurve_t579276466 ** get_address_of_red_1() { return &___red_1; }
	inline void set_red_1(ColorGradingCurve_t579276466 * value)
	{
		___red_1 = value;
		Il2CppCodeGenWriteBarrier((&___red_1), value);
	}

	inline static int32_t get_offset_of_green_2() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___green_2)); }
	inline ColorGradingCurve_t579276466 * get_green_2() const { return ___green_2; }
	inline ColorGradingCurve_t579276466 ** get_address_of_green_2() { return &___green_2; }
	inline void set_green_2(ColorGradingCurve_t579276466 * value)
	{
		___green_2 = value;
		Il2CppCodeGenWriteBarrier((&___green_2), value);
	}

	inline static int32_t get_offset_of_blue_3() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___blue_3)); }
	inline ColorGradingCurve_t579276466 * get_blue_3() const { return ___blue_3; }
	inline ColorGradingCurve_t579276466 ** get_address_of_blue_3() { return &___blue_3; }
	inline void set_blue_3(ColorGradingCurve_t579276466 * value)
	{
		___blue_3 = value;
		Il2CppCodeGenWriteBarrier((&___blue_3), value);
	}

	inline static int32_t get_offset_of_hueVShue_4() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___hueVShue_4)); }
	inline ColorGradingCurve_t579276466 * get_hueVShue_4() const { return ___hueVShue_4; }
	inline ColorGradingCurve_t579276466 ** get_address_of_hueVShue_4() { return &___hueVShue_4; }
	inline void set_hueVShue_4(ColorGradingCurve_t579276466 * value)
	{
		___hueVShue_4 = value;
		Il2CppCodeGenWriteBarrier((&___hueVShue_4), value);
	}

	inline static int32_t get_offset_of_hueVSsat_5() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___hueVSsat_5)); }
	inline ColorGradingCurve_t579276466 * get_hueVSsat_5() const { return ___hueVSsat_5; }
	inline ColorGradingCurve_t579276466 ** get_address_of_hueVSsat_5() { return &___hueVSsat_5; }
	inline void set_hueVSsat_5(ColorGradingCurve_t579276466 * value)
	{
		___hueVSsat_5 = value;
		Il2CppCodeGenWriteBarrier((&___hueVSsat_5), value);
	}

	inline static int32_t get_offset_of_satVSsat_6() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___satVSsat_6)); }
	inline ColorGradingCurve_t579276466 * get_satVSsat_6() const { return ___satVSsat_6; }
	inline ColorGradingCurve_t579276466 ** get_address_of_satVSsat_6() { return &___satVSsat_6; }
	inline void set_satVSsat_6(ColorGradingCurve_t579276466 * value)
	{
		___satVSsat_6 = value;
		Il2CppCodeGenWriteBarrier((&___satVSsat_6), value);
	}

	inline static int32_t get_offset_of_lumVSsat_7() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___lumVSsat_7)); }
	inline ColorGradingCurve_t579276466 * get_lumVSsat_7() const { return ___lumVSsat_7; }
	inline ColorGradingCurve_t579276466 ** get_address_of_lumVSsat_7() { return &___lumVSsat_7; }
	inline void set_lumVSsat_7(ColorGradingCurve_t579276466 * value)
	{
		___lumVSsat_7 = value;
		Il2CppCodeGenWriteBarrier((&___lumVSsat_7), value);
	}

	inline static int32_t get_offset_of_e_CurrentEditingCurve_8() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___e_CurrentEditingCurve_8)); }
	inline int32_t get_e_CurrentEditingCurve_8() const { return ___e_CurrentEditingCurve_8; }
	inline int32_t* get_address_of_e_CurrentEditingCurve_8() { return &___e_CurrentEditingCurve_8; }
	inline void set_e_CurrentEditingCurve_8(int32_t value)
	{
		___e_CurrentEditingCurve_8 = value;
	}

	inline static int32_t get_offset_of_e_CurveY_9() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___e_CurveY_9)); }
	inline bool get_e_CurveY_9() const { return ___e_CurveY_9; }
	inline bool* get_address_of_e_CurveY_9() { return &___e_CurveY_9; }
	inline void set_e_CurveY_9(bool value)
	{
		___e_CurveY_9 = value;
	}

	inline static int32_t get_offset_of_e_CurveR_10() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___e_CurveR_10)); }
	inline bool get_e_CurveR_10() const { return ___e_CurveR_10; }
	inline bool* get_address_of_e_CurveR_10() { return &___e_CurveR_10; }
	inline void set_e_CurveR_10(bool value)
	{
		___e_CurveR_10 = value;
	}

	inline static int32_t get_offset_of_e_CurveG_11() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___e_CurveG_11)); }
	inline bool get_e_CurveG_11() const { return ___e_CurveG_11; }
	inline bool* get_address_of_e_CurveG_11() { return &___e_CurveG_11; }
	inline void set_e_CurveG_11(bool value)
	{
		___e_CurveG_11 = value;
	}

	inline static int32_t get_offset_of_e_CurveB_12() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___e_CurveB_12)); }
	inline bool get_e_CurveB_12() const { return ___e_CurveB_12; }
	inline bool* get_address_of_e_CurveB_12() { return &___e_CurveB_12; }
	inline void set_e_CurveB_12(bool value)
	{
		___e_CurveB_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
struct CurvesSettings_t2104131702_marshaled_pinvoke
{
	ColorGradingCurve_t579276466 * ___master_0;
	ColorGradingCurve_t579276466 * ___red_1;
	ColorGradingCurve_t579276466 * ___green_2;
	ColorGradingCurve_t579276466 * ___blue_3;
	ColorGradingCurve_t579276466 * ___hueVShue_4;
	ColorGradingCurve_t579276466 * ___hueVSsat_5;
	ColorGradingCurve_t579276466 * ___satVSsat_6;
	ColorGradingCurve_t579276466 * ___lumVSsat_7;
	int32_t ___e_CurrentEditingCurve_8;
	int32_t ___e_CurveY_9;
	int32_t ___e_CurveR_10;
	int32_t ___e_CurveG_11;
	int32_t ___e_CurveB_12;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
struct CurvesSettings_t2104131702_marshaled_com
{
	ColorGradingCurve_t579276466 * ___master_0;
	ColorGradingCurve_t579276466 * ___red_1;
	ColorGradingCurve_t579276466 * ___green_2;
	ColorGradingCurve_t579276466 * ___blue_3;
	ColorGradingCurve_t579276466 * ___hueVShue_4;
	ColorGradingCurve_t579276466 * ___hueVSsat_5;
	ColorGradingCurve_t579276466 * ___satVSsat_6;
	ColorGradingCurve_t579276466 * ___lumVSsat_7;
	int32_t ___e_CurrentEditingCurve_8;
	int32_t ___e_CurveY_9;
	int32_t ___e_CurveR_10;
	int32_t ___e_CurveG_11;
	int32_t ___e_CurveB_12;
};
#endif // CURVESSETTINGS_T2104131702_H
#ifndef BASICSETTINGS_T4041566386_H
#define BASICSETTINGS_T4041566386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/BasicSettings
struct  BasicSettings_t4041566386 
{
public:
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::postExposure
	float ___postExposure_0;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::temperature
	float ___temperature_1;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::tint
	float ___tint_2;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::hueShift
	float ___hueShift_3;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::saturation
	float ___saturation_4;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::contrast
	float ___contrast_5;

public:
	inline static int32_t get_offset_of_postExposure_0() { return static_cast<int32_t>(offsetof(BasicSettings_t4041566386, ___postExposure_0)); }
	inline float get_postExposure_0() const { return ___postExposure_0; }
	inline float* get_address_of_postExposure_0() { return &___postExposure_0; }
	inline void set_postExposure_0(float value)
	{
		___postExposure_0 = value;
	}

	inline static int32_t get_offset_of_temperature_1() { return static_cast<int32_t>(offsetof(BasicSettings_t4041566386, ___temperature_1)); }
	inline float get_temperature_1() const { return ___temperature_1; }
	inline float* get_address_of_temperature_1() { return &___temperature_1; }
	inline void set_temperature_1(float value)
	{
		___temperature_1 = value;
	}

	inline static int32_t get_offset_of_tint_2() { return static_cast<int32_t>(offsetof(BasicSettings_t4041566386, ___tint_2)); }
	inline float get_tint_2() const { return ___tint_2; }
	inline float* get_address_of_tint_2() { return &___tint_2; }
	inline void set_tint_2(float value)
	{
		___tint_2 = value;
	}

	inline static int32_t get_offset_of_hueShift_3() { return static_cast<int32_t>(offsetof(BasicSettings_t4041566386, ___hueShift_3)); }
	inline float get_hueShift_3() const { return ___hueShift_3; }
	inline float* get_address_of_hueShift_3() { return &___hueShift_3; }
	inline void set_hueShift_3(float value)
	{
		___hueShift_3 = value;
	}

	inline static int32_t get_offset_of_saturation_4() { return static_cast<int32_t>(offsetof(BasicSettings_t4041566386, ___saturation_4)); }
	inline float get_saturation_4() const { return ___saturation_4; }
	inline float* get_address_of_saturation_4() { return &___saturation_4; }
	inline void set_saturation_4(float value)
	{
		___saturation_4 = value;
	}

	inline static int32_t get_offset_of_contrast_5() { return static_cast<int32_t>(offsetof(BasicSettings_t4041566386, ___contrast_5)); }
	inline float get_contrast_5() const { return ___contrast_5; }
	inline float* get_address_of_contrast_5() { return &___contrast_5; }
	inline void set_contrast_5(float value)
	{
		___contrast_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICSETTINGS_T4041566386_H
#ifndef COLOR_T2020392075_H
#define COLOR_T2020392075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2020392075 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2020392075_H
#ifndef POSTPROCESSINGCOMPONENT_1_T2336514047_H
#define POSTPROCESSINGCOMPONENT_1_T2336514047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.DitheringModel>
struct  PostProcessingComponent_1_t2336514047  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	DitheringModel_t866658367 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t2336514047, ___U3CmodelU3Ek__BackingField_1)); }
	inline DitheringModel_t866658367 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline DitheringModel_t866658367 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(DitheringModel_t866658367 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T2336514047_H
#ifndef POSTPROCESSINGCOMPONENT_1_T1134908605_H
#define POSTPROCESSINGCOMPONENT_1_T1134908605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.EyeAdaptationModel>
struct  PostProcessingComponent_1_t1134908605  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	EyeAdaptationModel_t3960020221 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t1134908605, ___U3CmodelU3Ek__BackingField_1)); }
	inline EyeAdaptationModel_t3960020221 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline EyeAdaptationModel_t3960020221 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(EyeAdaptationModel_t3960020221 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T1134908605_H
#ifndef POSTPROCESSINGCOMPONENT_1_T3634865583_H
#define POSTPROCESSINGCOMPONENT_1_T3634865583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.FogModel>
struct  PostProcessingComponent_1_t3634865583  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	FogModel_t2165009903 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t3634865583, ___U3CmodelU3Ek__BackingField_1)); }
	inline FogModel_t2165009903 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline FogModel_t2165009903 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(FogModel_t2165009903 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T3634865583_H
#ifndef POSTPROCESSINGCOMPONENT_1_T3424111225_H
#define POSTPROCESSINGCOMPONENT_1_T3424111225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.AntialiasingModel>
struct  PostProcessingComponent_1_t3424111225  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	AntialiasingModel_t1954255545 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t3424111225, ___U3CmodelU3Ek__BackingField_1)); }
	inline AntialiasingModel_t1954255545 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline AntialiasingModel_t1954255545 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(AntialiasingModel_t1954255545 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T3424111225_H
#ifndef POSTPROCESSINGCOMPONENT_1_T1197378086_H
#define POSTPROCESSINGCOMPONENT_1_T1197378086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.GrainModel>
struct  PostProcessingComponent_1_t1197378086  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	GrainModel_t4022489702 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t1197378086, ___U3CmodelU3Ek__BackingField_1)); }
	inline GrainModel_t4022489702 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline GrainModel_t4022489702 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(GrainModel_t4022489702 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T1197378086_H
#ifndef POSTPROCESSINGCOMPONENT_1_T1198664898_H
#define POSTPROCESSINGCOMPONENT_1_T1198664898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.MotionBlurModel>
struct  PostProcessingComponent_1_t1198664898  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	MotionBlurModel_t4023776514 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t1198664898, ___U3CmodelU3Ek__BackingField_1)); }
	inline MotionBlurModel_t4023776514 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline MotionBlurModel_t4023776514 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(MotionBlurModel_t4023776514 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T1198664898_H
#ifndef POSTPROCESSINGCOMPONENT_1_T455451482_H
#define POSTPROCESSINGCOMPONENT_1_T455451482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.ScreenSpaceReflectionModel>
struct  PostProcessingComponent_1_t455451482  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	ScreenSpaceReflectionModel_t3280563098 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t455451482, ___U3CmodelU3Ek__BackingField_1)); }
	inline ScreenSpaceReflectionModel_t3280563098 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline ScreenSpaceReflectionModel_t3280563098 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(ScreenSpaceReflectionModel_t3280563098 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T455451482_H
#ifndef POSTPROCESSINGCOMPONENT_1_T823222377_H
#define POSTPROCESSINGCOMPONENT_1_T823222377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.UserLutModel>
struct  PostProcessingComponent_1_t823222377  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	UserLutModel_t3648333993 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t823222377, ___U3CmodelU3Ek__BackingField_1)); }
	inline UserLutModel_t3648333993 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline UserLutModel_t3648333993 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(UserLutModel_t3648333993 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T823222377_H
#ifndef POSTPROCESSINGCOMPONENT_1_T356547527_H
#define POSTPROCESSINGCOMPONENT_1_T356547527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.VignetteModel>
struct  PostProcessingComponent_1_t356547527  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	VignetteModel_t3181659143 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t356547527, ___U3CmodelU3Ek__BackingField_1)); }
	inline VignetteModel_t3181659143 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline VignetteModel_t3181659143 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(VignetteModel_t3181659143 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T356547527_H
#ifndef POSTPROCESSINGCOMPONENT_1_T2852617235_H
#define POSTPROCESSINGCOMPONENT_1_T2852617235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.DepthOfFieldModel>
struct  PostProcessingComponent_1_t2852617235  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	DepthOfFieldModel_t1382761555 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t2852617235, ___U3CmodelU3Ek__BackingField_1)); }
	inline DepthOfFieldModel_t1382761555 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline DepthOfFieldModel_t1382761555 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(DepthOfFieldModel_t1382761555 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T2852617235_H
#ifndef PROPERTYATTRIBUTE_T2606999759_H
#define PROPERTYATTRIBUTE_T2606999759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t2606999759  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T2606999759_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef SETTINGS_T4208629457_H
#define SETTINGS_T4208629457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.UserLutModel/Settings
struct  Settings_t4208629457 
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.UserLutModel/Settings::lut
	Texture2D_t3542995729 * ___lut_0;
	// System.Single UnityEngine.PostProcessing.UserLutModel/Settings::contribution
	float ___contribution_1;

public:
	inline static int32_t get_offset_of_lut_0() { return static_cast<int32_t>(offsetof(Settings_t4208629457, ___lut_0)); }
	inline Texture2D_t3542995729 * get_lut_0() const { return ___lut_0; }
	inline Texture2D_t3542995729 ** get_address_of_lut_0() { return &___lut_0; }
	inline void set_lut_0(Texture2D_t3542995729 * value)
	{
		___lut_0 = value;
		Il2CppCodeGenWriteBarrier((&___lut_0), value);
	}

	inline static int32_t get_offset_of_contribution_1() { return static_cast<int32_t>(offsetof(Settings_t4208629457, ___contribution_1)); }
	inline float get_contribution_1() const { return ___contribution_1; }
	inline float* get_address_of_contribution_1() { return &___contribution_1; }
	inline void set_contribution_1(float value)
	{
		___contribution_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.UserLutModel/Settings
struct Settings_t4208629457_marshaled_pinvoke
{
	Texture2D_t3542995729 * ___lut_0;
	float ___contribution_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.UserLutModel/Settings
struct Settings_t4208629457_marshaled_com
{
	Texture2D_t3542995729 * ___lut_0;
	float ___contribution_1;
};
#endif // SETTINGS_T4208629457_H
#ifndef POSTPROCESSINGCOMPONENT_1_T849117188_H
#define POSTPROCESSINGCOMPONENT_1_T849117188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.AmbientOcclusionModel>
struct  PostProcessingComponent_1_t849117188  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	AmbientOcclusionModel_t3674228804 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t849117188, ___U3CmodelU3Ek__BackingField_1)); }
	inline AmbientOcclusionModel_t3674228804 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline AmbientOcclusionModel_t3674228804 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(AmbientOcclusionModel_t3674228804 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T849117188_H
#ifndef POSTPROCESSINGCOMPONENT_1_T3617307958_H
#define POSTPROCESSINGCOMPONENT_1_T3617307958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.BloomModel>
struct  PostProcessingComponent_1_t3617307958  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	BloomModel_t2147452278 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t3617307958, ___U3CmodelU3Ek__BackingField_1)); }
	inline BloomModel_t2147452278 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline BloomModel_t2147452278 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(BloomModel_t2147452278 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T3617307958_H
#ifndef POSTPROCESSINGCOMPONENT_1_T1225354287_H
#define POSTPROCESSINGCOMPONENT_1_T1225354287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.BuiltinDebugViewsModel>
struct  PostProcessingComponent_1_t1225354287  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	BuiltinDebugViewsModel_t4050465903 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t1225354287, ___U3CmodelU3Ek__BackingField_1)); }
	inline BuiltinDebugViewsModel_t4050465903 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline BuiltinDebugViewsModel_t4050465903 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(BuiltinDebugViewsModel_t4050465903 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T1225354287_H
#ifndef POSTPROCESSINGCOMPONENT_1_T1073201768_H
#define POSTPROCESSINGCOMPONENT_1_T1073201768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.ChromaticAberrationModel>
struct  PostProcessingComponent_1_t1073201768  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	ChromaticAberrationModel_t3898313384 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t1073201768, ___U3CmodelU3Ek__BackingField_1)); }
	inline ChromaticAberrationModel_t3898313384 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline ChromaticAberrationModel_t3898313384 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(ChromaticAberrationModel_t3898313384 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T1073201768_H
#ifndef POSTPROCESSINGCOMPONENT_1_T3622312260_H
#define POSTPROCESSINGCOMPONENT_1_T3622312260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.ColorGradingModel>
struct  PostProcessingComponent_1_t3622312260  : public PostProcessingComponentBase_t3868710427
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	ColorGradingModel_t2152456580 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t3622312260, ___U3CmodelU3Ek__BackingField_1)); }
	inline ColorGradingModel_t2152456580 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline ColorGradingModel_t2152456580 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(ColorGradingModel_t2152456580 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T3622312260_H
#ifndef FRAME_T3543665253_H
#define FRAME_T3543665253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
struct  Frame_t3543665253 
{
public:
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::lumaTexture
	RenderTexture_t2666733923 * ___lumaTexture_0;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::chromaTexture
	RenderTexture_t2666733923 * ___chromaTexture_1;
	// System.Single UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::m_Time
	float ___m_Time_2;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::m_MRT
	RenderTargetIdentifierU5BU5D_t32810763* ___m_MRT_3;

public:
	inline static int32_t get_offset_of_lumaTexture_0() { return static_cast<int32_t>(offsetof(Frame_t3543665253, ___lumaTexture_0)); }
	inline RenderTexture_t2666733923 * get_lumaTexture_0() const { return ___lumaTexture_0; }
	inline RenderTexture_t2666733923 ** get_address_of_lumaTexture_0() { return &___lumaTexture_0; }
	inline void set_lumaTexture_0(RenderTexture_t2666733923 * value)
	{
		___lumaTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&___lumaTexture_0), value);
	}

	inline static int32_t get_offset_of_chromaTexture_1() { return static_cast<int32_t>(offsetof(Frame_t3543665253, ___chromaTexture_1)); }
	inline RenderTexture_t2666733923 * get_chromaTexture_1() const { return ___chromaTexture_1; }
	inline RenderTexture_t2666733923 ** get_address_of_chromaTexture_1() { return &___chromaTexture_1; }
	inline void set_chromaTexture_1(RenderTexture_t2666733923 * value)
	{
		___chromaTexture_1 = value;
		Il2CppCodeGenWriteBarrier((&___chromaTexture_1), value);
	}

	inline static int32_t get_offset_of_m_Time_2() { return static_cast<int32_t>(offsetof(Frame_t3543665253, ___m_Time_2)); }
	inline float get_m_Time_2() const { return ___m_Time_2; }
	inline float* get_address_of_m_Time_2() { return &___m_Time_2; }
	inline void set_m_Time_2(float value)
	{
		___m_Time_2 = value;
	}

	inline static int32_t get_offset_of_m_MRT_3() { return static_cast<int32_t>(offsetof(Frame_t3543665253, ___m_MRT_3)); }
	inline RenderTargetIdentifierU5BU5D_t32810763* get_m_MRT_3() const { return ___m_MRT_3; }
	inline RenderTargetIdentifierU5BU5D_t32810763** get_address_of_m_MRT_3() { return &___m_MRT_3; }
	inline void set_m_MRT_3(RenderTargetIdentifierU5BU5D_t32810763* value)
	{
		___m_MRT_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_MRT_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
struct Frame_t3543665253_marshaled_pinvoke
{
	RenderTexture_t2666733923 * ___lumaTexture_0;
	RenderTexture_t2666733923 * ___chromaTexture_1;
	float ___m_Time_2;
	RenderTargetIdentifier_t772440638 * ___m_MRT_3;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
struct Frame_t3543665253_marshaled_com
{
	RenderTexture_t2666733923 * ___lumaTexture_0;
	RenderTexture_t2666733923 * ___chromaTexture_1;
	float ___m_Time_2;
	RenderTargetIdentifier_t772440638 * ___m_MRT_3;
};
#endif // FRAME_T3543665253_H
#ifndef FXAAQUALITYSETTINGS_T2290945554_H
#define FXAAQUALITYSETTINGS_T2290945554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings
struct  FxaaQualitySettings_t2290945554 
{
public:
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::subpixelAliasingRemovalAmount
	float ___subpixelAliasingRemovalAmount_0;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::edgeDetectionThreshold
	float ___edgeDetectionThreshold_1;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::minimumRequiredLuminance
	float ___minimumRequiredLuminance_2;

public:
	inline static int32_t get_offset_of_subpixelAliasingRemovalAmount_0() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_t2290945554, ___subpixelAliasingRemovalAmount_0)); }
	inline float get_subpixelAliasingRemovalAmount_0() const { return ___subpixelAliasingRemovalAmount_0; }
	inline float* get_address_of_subpixelAliasingRemovalAmount_0() { return &___subpixelAliasingRemovalAmount_0; }
	inline void set_subpixelAliasingRemovalAmount_0(float value)
	{
		___subpixelAliasingRemovalAmount_0 = value;
	}

	inline static int32_t get_offset_of_edgeDetectionThreshold_1() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_t2290945554, ___edgeDetectionThreshold_1)); }
	inline float get_edgeDetectionThreshold_1() const { return ___edgeDetectionThreshold_1; }
	inline float* get_address_of_edgeDetectionThreshold_1() { return &___edgeDetectionThreshold_1; }
	inline void set_edgeDetectionThreshold_1(float value)
	{
		___edgeDetectionThreshold_1 = value;
	}

	inline static int32_t get_offset_of_minimumRequiredLuminance_2() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_t2290945554, ___minimumRequiredLuminance_2)); }
	inline float get_minimumRequiredLuminance_2() const { return ___minimumRequiredLuminance_2; }
	inline float* get_address_of_minimumRequiredLuminance_2() { return &___minimumRequiredLuminance_2; }
	inline void set_minimumRequiredLuminance_2(float value)
	{
		___minimumRequiredLuminance_2 = value;
	}
};

struct FxaaQualitySettings_t2290945554_StaticFields
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings[] UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::presets
	FxaaQualitySettingsU5BU5D_t3374738791* ___presets_3;

public:
	inline static int32_t get_offset_of_presets_3() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_t2290945554_StaticFields, ___presets_3)); }
	inline FxaaQualitySettingsU5BU5D_t3374738791* get_presets_3() const { return ___presets_3; }
	inline FxaaQualitySettingsU5BU5D_t3374738791** get_address_of_presets_3() { return &___presets_3; }
	inline void set_presets_3(FxaaQualitySettingsU5BU5D_t3374738791* value)
	{
		___presets_3 = value;
		Il2CppCodeGenWriteBarrier((&___presets_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FXAAQUALITYSETTINGS_T2290945554_H
#ifndef TAASETTINGS_T101510809_H
#define TAASETTINGS_T101510809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/TaaSettings
struct  TaaSettings_t101510809 
{
public:
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::jitterSpread
	float ___jitterSpread_0;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::sharpen
	float ___sharpen_1;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::stationaryBlending
	float ___stationaryBlending_2;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::motionBlending
	float ___motionBlending_3;

public:
	inline static int32_t get_offset_of_jitterSpread_0() { return static_cast<int32_t>(offsetof(TaaSettings_t101510809, ___jitterSpread_0)); }
	inline float get_jitterSpread_0() const { return ___jitterSpread_0; }
	inline float* get_address_of_jitterSpread_0() { return &___jitterSpread_0; }
	inline void set_jitterSpread_0(float value)
	{
		___jitterSpread_0 = value;
	}

	inline static int32_t get_offset_of_sharpen_1() { return static_cast<int32_t>(offsetof(TaaSettings_t101510809, ___sharpen_1)); }
	inline float get_sharpen_1() const { return ___sharpen_1; }
	inline float* get_address_of_sharpen_1() { return &___sharpen_1; }
	inline void set_sharpen_1(float value)
	{
		___sharpen_1 = value;
	}

	inline static int32_t get_offset_of_stationaryBlending_2() { return static_cast<int32_t>(offsetof(TaaSettings_t101510809, ___stationaryBlending_2)); }
	inline float get_stationaryBlending_2() const { return ___stationaryBlending_2; }
	inline float* get_address_of_stationaryBlending_2() { return &___stationaryBlending_2; }
	inline void set_stationaryBlending_2(float value)
	{
		___stationaryBlending_2 = value;
	}

	inline static int32_t get_offset_of_motionBlending_3() { return static_cast<int32_t>(offsetof(TaaSettings_t101510809, ___motionBlending_3)); }
	inline float get_motionBlending_3() const { return ___motionBlending_3; }
	inline float* get_address_of_motionBlending_3() { return &___motionBlending_3; }
	inline void set_motionBlending_3(float value)
	{
		___motionBlending_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAASETTINGS_T101510809_H
#ifndef FXAACONSOLESETTINGS_T1976361858_H
#define FXAACONSOLESETTINGS_T1976361858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings
struct  FxaaConsoleSettings_t1976361858 
{
public:
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::subpixelSpreadAmount
	float ___subpixelSpreadAmount_0;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::edgeSharpnessAmount
	float ___edgeSharpnessAmount_1;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::edgeDetectionThreshold
	float ___edgeDetectionThreshold_2;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::minimumRequiredLuminance
	float ___minimumRequiredLuminance_3;

public:
	inline static int32_t get_offset_of_subpixelSpreadAmount_0() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1976361858, ___subpixelSpreadAmount_0)); }
	inline float get_subpixelSpreadAmount_0() const { return ___subpixelSpreadAmount_0; }
	inline float* get_address_of_subpixelSpreadAmount_0() { return &___subpixelSpreadAmount_0; }
	inline void set_subpixelSpreadAmount_0(float value)
	{
		___subpixelSpreadAmount_0 = value;
	}

	inline static int32_t get_offset_of_edgeSharpnessAmount_1() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1976361858, ___edgeSharpnessAmount_1)); }
	inline float get_edgeSharpnessAmount_1() const { return ___edgeSharpnessAmount_1; }
	inline float* get_address_of_edgeSharpnessAmount_1() { return &___edgeSharpnessAmount_1; }
	inline void set_edgeSharpnessAmount_1(float value)
	{
		___edgeSharpnessAmount_1 = value;
	}

	inline static int32_t get_offset_of_edgeDetectionThreshold_2() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1976361858, ___edgeDetectionThreshold_2)); }
	inline float get_edgeDetectionThreshold_2() const { return ___edgeDetectionThreshold_2; }
	inline float* get_address_of_edgeDetectionThreshold_2() { return &___edgeDetectionThreshold_2; }
	inline void set_edgeDetectionThreshold_2(float value)
	{
		___edgeDetectionThreshold_2 = value;
	}

	inline static int32_t get_offset_of_minimumRequiredLuminance_3() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1976361858, ___minimumRequiredLuminance_3)); }
	inline float get_minimumRequiredLuminance_3() const { return ___minimumRequiredLuminance_3; }
	inline float* get_address_of_minimumRequiredLuminance_3() { return &___minimumRequiredLuminance_3; }
	inline void set_minimumRequiredLuminance_3(float value)
	{
		___minimumRequiredLuminance_3 = value;
	}
};

struct FxaaConsoleSettings_t1976361858_StaticFields
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings[] UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::presets
	FxaaConsoleSettingsU5BU5D_t3543327799* ___presets_4;

public:
	inline static int32_t get_offset_of_presets_4() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1976361858_StaticFields, ___presets_4)); }
	inline FxaaConsoleSettingsU5BU5D_t3543327799* get_presets_4() const { return ___presets_4; }
	inline FxaaConsoleSettingsU5BU5D_t3543327799** get_address_of_presets_4() { return &___presets_4; }
	inline void set_presets_4(FxaaConsoleSettingsU5BU5D_t3543327799* value)
	{
		___presets_4 = value;
		Il2CppCodeGenWriteBarrier((&___presets_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FXAACONSOLESETTINGS_T1976361858_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2661371200_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2661371200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.UserLutModel>
struct  PostProcessingComponentRenderTexture_1_t2661371200  : public PostProcessingComponent_1_t823222377
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2661371200_H
#ifndef USERLUTMODEL_T3648333993_H
#define USERLUTMODEL_T3648333993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.UserLutModel
struct  UserLutModel_t3648333993  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.UserLutModel/Settings UnityEngine.PostProcessing.UserLutModel::m_Settings
	Settings_t4208629457  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(UserLutModel_t3648333993, ___m_Settings_1)); }
	inline Settings_t4208629457  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t4208629457 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t4208629457  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERLUTMODEL_T3648333993_H
#ifndef PASS_T618901406_H
#define PASS_T618901406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent/Pass
struct  Pass_t618901406 
{
public:
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Pass::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Pass_t618901406, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASS_T618901406_H
#ifndef PASSINDEX_T139541594_H
#define PASSINDEX_T139541594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/PassIndex
struct  PassIndex_t139541594 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/PassIndex::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PassIndex_t139541594, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSINDEX_T139541594_H
#ifndef POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T1631135537_H
#define POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T1631135537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<UnityEngine.PostProcessing.ScreenSpaceReflectionModel>
struct  PostProcessingComponentCommandBuffer_1_t1631135537  : public PostProcessingComponent_1_t455451482
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T1631135537_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2194696350_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2194696350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.VignetteModel>
struct  PostProcessingComponentRenderTexture_1_t2194696350  : public PostProcessingComponent_1_t356547527
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2194696350_H
#ifndef FOGMODEL_T2165009903_H
#define FOGMODEL_T2165009903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.FogModel
struct  FogModel_t2165009903  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.FogModel/Settings UnityEngine.PostProcessing.FogModel::m_Settings
	Settings_t971704575  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(FogModel_t2165009903, ___m_Settings_1)); }
	inline Settings_t971704575  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t971704575 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t971704575  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOGMODEL_T2165009903_H
#ifndef GRAINMODEL_T4022489702_H
#define GRAINMODEL_T4022489702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.GrainModel
struct  GrainModel_t4022489702  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.GrainModel/Settings UnityEngine.PostProcessing.GrainModel::m_Settings
	Settings_t184448608  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(GrainModel_t4022489702, ___m_Settings_1)); }
	inline Settings_t184448608  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t184448608 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t184448608  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAINMODEL_T4022489702_H
#ifndef SAMPLECOUNT_T3581262252_H
#define SAMPLECOUNT_T3581262252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AmbientOcclusionModel/SampleCount
struct  SampleCount_t3581262252 
{
public:
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionModel/SampleCount::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SampleCount_t3581262252, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLECOUNT_T3581262252_H
#ifndef MOTIONBLURMODEL_T4023776514_H
#define MOTIONBLURMODEL_T4023776514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurModel
struct  MotionBlurModel_t4023776514  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.MotionBlurModel/Settings UnityEngine.PostProcessing.MotionBlurModel::m_Settings
	Settings_t2102522116  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(MotionBlurModel_t4023776514, ___m_Settings_1)); }
	inline Settings_t2102522116  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t2102522116 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t2102522116  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTIONBLURMODEL_T4023776514_H
#ifndef SSRRESOLUTION_T4146867_H
#define SSRRESOLUTION_T4146867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRResolution
struct  SSRResolution_t4146867 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRResolution::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SSRResolution_t4146867, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSRRESOLUTION_T4146867_H
#ifndef U3CONMOUSEDOWNU3EC__ITERATOR0_T737823634_H
#define U3CONMOUSEDOWNU3EC__ITERATOR0_T737823634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuObject/<OnMouseDown>c__Iterator0
struct  U3COnMouseDownU3Ec__Iterator0_t737823634  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 MenuObject/<OnMouseDown>c__Iterator0::<startPos>__0
	Vector3_t2243707580  ___U3CstartPosU3E__0_0;
	// UnityEngine.Vector3 MenuObject/<OnMouseDown>c__Iterator0::<endPos>__0
	Vector3_t2243707580  ___U3CendPosU3E__0_1;
	// UnityEngine.Color MenuObject/<OnMouseDown>c__Iterator0::<endColor>__0
	Color_t2020392075  ___U3CendColorU3E__0_2;
	// System.Single MenuObject/<OnMouseDown>c__Iterator0::<i>__1
	float ___U3CiU3E__1_3;
	// MenuObject MenuObject/<OnMouseDown>c__Iterator0::$this
	MenuObject_t3388784936 * ___U24this_4;
	// System.Object MenuObject/<OnMouseDown>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean MenuObject/<OnMouseDown>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 MenuObject/<OnMouseDown>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CstartPosU3E__0_0() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t737823634, ___U3CstartPosU3E__0_0)); }
	inline Vector3_t2243707580  get_U3CstartPosU3E__0_0() const { return ___U3CstartPosU3E__0_0; }
	inline Vector3_t2243707580 * get_address_of_U3CstartPosU3E__0_0() { return &___U3CstartPosU3E__0_0; }
	inline void set_U3CstartPosU3E__0_0(Vector3_t2243707580  value)
	{
		___U3CstartPosU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CendPosU3E__0_1() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t737823634, ___U3CendPosU3E__0_1)); }
	inline Vector3_t2243707580  get_U3CendPosU3E__0_1() const { return ___U3CendPosU3E__0_1; }
	inline Vector3_t2243707580 * get_address_of_U3CendPosU3E__0_1() { return &___U3CendPosU3E__0_1; }
	inline void set_U3CendPosU3E__0_1(Vector3_t2243707580  value)
	{
		___U3CendPosU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CendColorU3E__0_2() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t737823634, ___U3CendColorU3E__0_2)); }
	inline Color_t2020392075  get_U3CendColorU3E__0_2() const { return ___U3CendColorU3E__0_2; }
	inline Color_t2020392075 * get_address_of_U3CendColorU3E__0_2() { return &___U3CendColorU3E__0_2; }
	inline void set_U3CendColorU3E__0_2(Color_t2020392075  value)
	{
		___U3CendColorU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__1_3() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t737823634, ___U3CiU3E__1_3)); }
	inline float get_U3CiU3E__1_3() const { return ___U3CiU3E__1_3; }
	inline float* get_address_of_U3CiU3E__1_3() { return &___U3CiU3E__1_3; }
	inline void set_U3CiU3E__1_3(float value)
	{
		___U3CiU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t737823634, ___U24this_4)); }
	inline MenuObject_t3388784936 * get_U24this_4() const { return ___U24this_4; }
	inline MenuObject_t3388784936 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(MenuObject_t3388784936 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t737823634, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t737823634, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t737823634, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONMOUSEDOWNU3EC__ITERATOR0_T737823634_H
#ifndef SSRREFLECTIONBLENDTYPE_T952220883_H
#define SSRREFLECTIONBLENDTYPE_T952220883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRReflectionBlendType
struct  SSRReflectionBlendType_t952220883 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRReflectionBlendType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SSRReflectionBlendType_t952220883, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSRREFLECTIONBLENDTYPE_T952220883_H
#ifndef POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2374348953_H
#define POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2374348953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<UnityEngine.PostProcessing.MotionBlurModel>
struct  PostProcessingComponentCommandBuffer_1_t2374348953  : public PostProcessingComponent_1_t1198664898
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2374348953_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3035526909_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3035526909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.GrainModel>
struct  PostProcessingComponentRenderTexture_1_t3035526909  : public PostProcessingComponent_1_t1197378086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3035526909_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T967292752_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T967292752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.AntialiasingModel>
struct  PostProcessingComponentRenderTexture_1_t967292752  : public PostProcessingComponent_1_t3424111225
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T967292752_H
#ifndef POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T515582342_H
#define POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T515582342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<UnityEngine.PostProcessing.FogModel>
struct  PostProcessingComponentCommandBuffer_1_t515582342  : public PostProcessingComponent_1_t3634865583
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T515582342_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2973057428_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2973057428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.EyeAdaptationModel>
struct  PostProcessingComponentRenderTexture_1_t2973057428  : public PostProcessingComponent_1_t1134908605
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2973057428_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T4174662870_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T4174662870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.DitheringModel>
struct  PostProcessingComponentRenderTexture_1_t4174662870  : public PostProcessingComponent_1_t2336514047
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T4174662870_H
#ifndef POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2024801243_H
#define POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2024801243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<UnityEngine.PostProcessing.AmbientOcclusionModel>
struct  PostProcessingComponentCommandBuffer_1_t2024801243  : public PostProcessingComponent_1_t849117188
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2024801243_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T1160489485_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T1160489485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.BloomModel>
struct  PostProcessingComponentRenderTexture_1_t1160489485  : public PostProcessingComponent_1_t3617307958
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T1160489485_H
#ifndef POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2401038342_H
#define POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2401038342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<UnityEngine.PostProcessing.BuiltinDebugViewsModel>
struct  PostProcessingComponentCommandBuffer_1_t2401038342  : public PostProcessingComponent_1_t1225354287
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T2401038342_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2911350591_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2911350591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.ChromaticAberrationModel>
struct  PostProcessingComponentRenderTexture_1_t2911350591  : public PostProcessingComponent_1_t1073201768
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T2911350591_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T1165493787_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T1165493787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.ColorGradingModel>
struct  PostProcessingComponentRenderTexture_1_t1165493787  : public PostProcessingComponent_1_t3622312260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T1165493787_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T395798762_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T395798762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.DepthOfFieldModel>
struct  PostProcessingComponentRenderTexture_1_t395798762  : public PostProcessingComponent_1_t2852617235
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T395798762_H
#ifndef COLORWHEELMODE_T1793246490_H
#define COLORWHEELMODE_T1793246490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelMode
struct  ColorWheelMode_t1793246490 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/ColorWheelMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorWheelMode_t1793246490, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORWHEELMODE_T1793246490_H
#ifndef OCCLUSIONSOURCE_T3274603317_H
#define OCCLUSIONSOURCE_T3274603317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AmbientOcclusionComponent/OcclusionSource
struct  OcclusionSource_t3274603317 
{
public:
	// System.Int32 UnityEngine.PostProcessing.AmbientOcclusionComponent/OcclusionSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OcclusionSource_t3274603317, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OCCLUSIONSOURCE_T3274603317_H
#ifndef FXAAPRESET_T3774605447_H
#define FXAAPRESET_T3774605447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/FxaaPreset
struct  FxaaPreset_t3774605447 
{
public:
	// System.Int32 UnityEngine.PostProcessing.AntialiasingModel/FxaaPreset::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FxaaPreset_t3774605447, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FXAAPRESET_T3774605447_H
#ifndef CHANNELMIXERSETTINGS_T3706030562_H
#define CHANNELMIXERSETTINGS_T3706030562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings
struct  ChannelMixerSettings_t3706030562 
{
public:
	// UnityEngine.Vector3 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::red
	Vector3_t2243707580  ___red_0;
	// UnityEngine.Vector3 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::green
	Vector3_t2243707580  ___green_1;
	// UnityEngine.Vector3 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::blue
	Vector3_t2243707580  ___blue_2;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::currentEditingChannel
	int32_t ___currentEditingChannel_3;

public:
	inline static int32_t get_offset_of_red_0() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t3706030562, ___red_0)); }
	inline Vector3_t2243707580  get_red_0() const { return ___red_0; }
	inline Vector3_t2243707580 * get_address_of_red_0() { return &___red_0; }
	inline void set_red_0(Vector3_t2243707580  value)
	{
		___red_0 = value;
	}

	inline static int32_t get_offset_of_green_1() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t3706030562, ___green_1)); }
	inline Vector3_t2243707580  get_green_1() const { return ___green_1; }
	inline Vector3_t2243707580 * get_address_of_green_1() { return &___green_1; }
	inline void set_green_1(Vector3_t2243707580  value)
	{
		___green_1 = value;
	}

	inline static int32_t get_offset_of_blue_2() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t3706030562, ___blue_2)); }
	inline Vector3_t2243707580  get_blue_2() const { return ___blue_2; }
	inline Vector3_t2243707580 * get_address_of_blue_2() { return &___blue_2; }
	inline void set_blue_2(Vector3_t2243707580  value)
	{
		___blue_2 = value;
	}

	inline static int32_t get_offset_of_currentEditingChannel_3() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t3706030562, ___currentEditingChannel_3)); }
	inline int32_t get_currentEditingChannel_3() const { return ___currentEditingChannel_3; }
	inline int32_t* get_address_of_currentEditingChannel_3() { return &___currentEditingChannel_3; }
	inline void set_currentEditingChannel_3(int32_t value)
	{
		___currentEditingChannel_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELMIXERSETTINGS_T3706030562_H
#ifndef LOGWHEELSSETTINGS_T3976262534_H
#define LOGWHEELSSETTINGS_T3976262534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings
struct  LogWheelsSettings_t3976262534 
{
public:
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::slope
	Color_t2020392075  ___slope_0;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::power
	Color_t2020392075  ___power_1;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::offset
	Color_t2020392075  ___offset_2;

public:
	inline static int32_t get_offset_of_slope_0() { return static_cast<int32_t>(offsetof(LogWheelsSettings_t3976262534, ___slope_0)); }
	inline Color_t2020392075  get_slope_0() const { return ___slope_0; }
	inline Color_t2020392075 * get_address_of_slope_0() { return &___slope_0; }
	inline void set_slope_0(Color_t2020392075  value)
	{
		___slope_0 = value;
	}

	inline static int32_t get_offset_of_power_1() { return static_cast<int32_t>(offsetof(LogWheelsSettings_t3976262534, ___power_1)); }
	inline Color_t2020392075  get_power_1() const { return ___power_1; }
	inline Color_t2020392075 * get_address_of_power_1() { return &___power_1; }
	inline void set_power_1(Color_t2020392075  value)
	{
		___power_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(LogWheelsSettings_t3976262534, ___offset_2)); }
	inline Color_t2020392075  get_offset_2() const { return ___offset_2; }
	inline Color_t2020392075 * get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(Color_t2020392075  value)
	{
		___offset_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGWHEELSSETTINGS_T3976262534_H
#ifndef LINEARWHEELSSETTINGS_T1271932265_H
#define LINEARWHEELSSETTINGS_T1271932265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings
struct  LinearWheelsSettings_t1271932265 
{
public:
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::lift
	Color_t2020392075  ___lift_0;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::gamma
	Color_t2020392075  ___gamma_1;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::gain
	Color_t2020392075  ___gain_2;

public:
	inline static int32_t get_offset_of_lift_0() { return static_cast<int32_t>(offsetof(LinearWheelsSettings_t1271932265, ___lift_0)); }
	inline Color_t2020392075  get_lift_0() const { return ___lift_0; }
	inline Color_t2020392075 * get_address_of_lift_0() { return &___lift_0; }
	inline void set_lift_0(Color_t2020392075  value)
	{
		___lift_0 = value;
	}

	inline static int32_t get_offset_of_gamma_1() { return static_cast<int32_t>(offsetof(LinearWheelsSettings_t1271932265, ___gamma_1)); }
	inline Color_t2020392075  get_gamma_1() const { return ___gamma_1; }
	inline Color_t2020392075 * get_address_of_gamma_1() { return &___gamma_1; }
	inline void set_gamma_1(Color_t2020392075  value)
	{
		___gamma_1 = value;
	}

	inline static int32_t get_offset_of_gain_2() { return static_cast<int32_t>(offsetof(LinearWheelsSettings_t1271932265, ___gain_2)); }
	inline Color_t2020392075  get_gain_2() const { return ___gain_2; }
	inline Color_t2020392075 * get_address_of_gain_2() { return &___gain_2; }
	inline void set_gain_2(Color_t2020392075  value)
	{
		___gain_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINEARWHEELSSETTINGS_T1271932265_H
#ifndef RENDERTEXTUREFORMAT_T3360518468_H
#define RENDERTEXTUREFORMAT_T3360518468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t3360518468 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t3360518468, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREFORMAT_T3360518468_H
#ifndef TONEMAPPER_T2498069022_H
#define TONEMAPPER_T2498069022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/Tonemapper
struct  Tonemapper_t2498069022 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/Tonemapper::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Tonemapper_t2498069022, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TONEMAPPER_T2498069022_H
#ifndef GETSETATTRIBUTE_T3015625266_H
#define GETSETATTRIBUTE_T3015625266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.GetSetAttribute
struct  GetSetAttribute_t3015625266  : public PropertyAttribute_t2606999759
{
public:
	// System.String UnityEngine.PostProcessing.GetSetAttribute::name
	String_t* ___name_0;
	// System.Boolean UnityEngine.PostProcessing.GetSetAttribute::dirty
	bool ___dirty_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(GetSetAttribute_t3015625266, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_dirty_1() { return static_cast<int32_t>(offsetof(GetSetAttribute_t3015625266, ___dirty_1)); }
	inline bool get_dirty_1() const { return ___dirty_1; }
	inline bool* get_address_of_dirty_1() { return &___dirty_1; }
	inline void set_dirty_1(bool value)
	{
		___dirty_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETSETATTRIBUTE_T3015625266_H
#ifndef SETTINGS_T3570510944_H
#define SETTINGS_T3570510944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomModel/Settings
struct  Settings_t3570510944 
{
public:
	// UnityEngine.PostProcessing.BloomModel/BloomSettings UnityEngine.PostProcessing.BloomModel/Settings::bloom
	BloomSettings_t2155188677  ___bloom_0;
	// UnityEngine.PostProcessing.BloomModel/LensDirtSettings UnityEngine.PostProcessing.BloomModel/Settings::lensDirt
	LensDirtSettings_t3667174501  ___lensDirt_1;

public:
	inline static int32_t get_offset_of_bloom_0() { return static_cast<int32_t>(offsetof(Settings_t3570510944, ___bloom_0)); }
	inline BloomSettings_t2155188677  get_bloom_0() const { return ___bloom_0; }
	inline BloomSettings_t2155188677 * get_address_of_bloom_0() { return &___bloom_0; }
	inline void set_bloom_0(BloomSettings_t2155188677  value)
	{
		___bloom_0 = value;
	}

	inline static int32_t get_offset_of_lensDirt_1() { return static_cast<int32_t>(offsetof(Settings_t3570510944, ___lensDirt_1)); }
	inline LensDirtSettings_t3667174501  get_lensDirt_1() const { return ___lensDirt_1; }
	inline LensDirtSettings_t3667174501 * get_address_of_lensDirt_1() { return &___lensDirt_1; }
	inline void set_lensDirt_1(LensDirtSettings_t3667174501  value)
	{
		___lensDirt_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.BloomModel/Settings
struct Settings_t3570510944_marshaled_pinvoke
{
	BloomSettings_t2155188677_marshaled_pinvoke ___bloom_0;
	LensDirtSettings_t3667174501_marshaled_pinvoke ___lensDirt_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.BloomModel/Settings
struct Settings_t3570510944_marshaled_com
{
	BloomSettings_t2155188677_marshaled_com ___bloom_0;
	LensDirtSettings_t3667174501_marshaled_com ___lensDirt_1;
};
#endif // SETTINGS_T3570510944_H
#ifndef MINATTRIBUTE_T3304439890_H
#define MINATTRIBUTE_T3304439890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MinAttribute
struct  MinAttribute_t3304439890  : public PropertyAttribute_t2606999759
{
public:
	// System.Single UnityEngine.PostProcessing.MinAttribute::min
	float ___min_0;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(MinAttribute_t3304439890, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MINATTRIBUTE_T3304439890_H
#ifndef TRACKBALLATTRIBUTE_T1893175024_H
#define TRACKBALLATTRIBUTE_T1893175024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.TrackballAttribute
struct  TrackballAttribute_t1893175024  : public PropertyAttribute_t2606999759
{
public:
	// System.String UnityEngine.PostProcessing.TrackballAttribute::method
	String_t* ___method_0;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(TrackballAttribute_t1893175024, ___method_0)); }
	inline String_t* get_method_0() const { return ___method_0; }
	inline String_t** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(String_t* value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((&___method_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKBALLATTRIBUTE_T1893175024_H
#ifndef MODE_T986082665_H
#define MODE_T986082665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Mode
struct  Mode_t986082665 
{
public:
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsModel/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t986082665, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T986082665_H
#ifndef TRACKBALLGROUPATTRIBUTE_T3871609761_H
#define TRACKBALLGROUPATTRIBUTE_T3871609761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.TrackballGroupAttribute
struct  TrackballGroupAttribute_t3871609761  : public PropertyAttribute_t2606999759
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKBALLGROUPATTRIBUTE_T3871609761_H
#ifndef CHROMATICABERRATIONMODEL_T3898313384_H
#define CHROMATICABERRATIONMODEL_T3898313384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ChromaticAberrationModel
struct  ChromaticAberrationModel_t3898313384  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.ChromaticAberrationModel/Settings UnityEngine.PostProcessing.ChromaticAberrationModel::m_Settings
	Settings_t1168376358  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(ChromaticAberrationModel_t3898313384, ___m_Settings_1)); }
	inline Settings_t1168376358  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t1168376358 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t1168376358  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHROMATICABERRATIONMODEL_T3898313384_H
#ifndef METHOD_T3468018951_H
#define METHOD_T3468018951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/Method
struct  Method_t3468018951 
{
public:
	// System.Int32 UnityEngine.PostProcessing.AntialiasingModel/Method::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Method_t3468018951, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHOD_T3468018951_H
#ifndef EYEADAPTATIONTYPE_T3992474634_H
#define EYEADAPTATIONTYPE_T3992474634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.EyeAdaptationModel/EyeAdaptationType
struct  EyeAdaptationType_t3992474634 
{
public:
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationModel/EyeAdaptationType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EyeAdaptationType_t3992474634, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEADAPTATIONTYPE_T3992474634_H
#ifndef PASS_T1633317739_H
#define PASS_T1633317739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Pass
struct  Pass_t1633317739 
{
public:
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Pass::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Pass_t1633317739, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASS_T1633317739_H
#ifndef DITHERINGMODEL_T866658367_H
#define DITHERINGMODEL_T866658367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DitheringModel
struct  DitheringModel_t866658367  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.DitheringModel/Settings UnityEngine.PostProcessing.DitheringModel::m_Settings
	Settings_t3263265019  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(DitheringModel_t866658367, ___m_Settings_1)); }
	inline Settings_t3263265019  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t3263265019 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t3263265019  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DITHERINGMODEL_T866658367_H
#ifndef KERNELSIZE_T1986613730_H
#define KERNELSIZE_T1986613730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DepthOfFieldModel/KernelSize
struct  KernelSize_t1986613730 
{
public:
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldModel/KernelSize::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KernelSize_t1986613730, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNELSIZE_T1986613730_H
#ifndef BLOOMCOMPONENT_T1622424908_H
#define BLOOMCOMPONENT_T1622424908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomComponent
struct  BloomComponent_t1622424908  : public PostProcessingComponentRenderTexture_1_t1160489485
{
public:
	// UnityEngine.RenderTexture[] UnityEngine.PostProcessing.BloomComponent::m_BlurBuffer1
	RenderTextureU5BU5D_t1137456562* ___m_BlurBuffer1_3;
	// UnityEngine.RenderTexture[] UnityEngine.PostProcessing.BloomComponent::m_BlurBuffer2
	RenderTextureU5BU5D_t1137456562* ___m_BlurBuffer2_4;

public:
	inline static int32_t get_offset_of_m_BlurBuffer1_3() { return static_cast<int32_t>(offsetof(BloomComponent_t1622424908, ___m_BlurBuffer1_3)); }
	inline RenderTextureU5BU5D_t1137456562* get_m_BlurBuffer1_3() const { return ___m_BlurBuffer1_3; }
	inline RenderTextureU5BU5D_t1137456562** get_address_of_m_BlurBuffer1_3() { return &___m_BlurBuffer1_3; }
	inline void set_m_BlurBuffer1_3(RenderTextureU5BU5D_t1137456562* value)
	{
		___m_BlurBuffer1_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlurBuffer1_3), value);
	}

	inline static int32_t get_offset_of_m_BlurBuffer2_4() { return static_cast<int32_t>(offsetof(BloomComponent_t1622424908, ___m_BlurBuffer2_4)); }
	inline RenderTextureU5BU5D_t1137456562* get_m_BlurBuffer2_4() const { return ___m_BlurBuffer2_4; }
	inline RenderTextureU5BU5D_t1137456562** get_address_of_m_BlurBuffer2_4() { return &___m_BlurBuffer2_4; }
	inline void set_m_BlurBuffer2_4(RenderTextureU5BU5D_t1137456562* value)
	{
		___m_BlurBuffer2_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlurBuffer2_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOOMCOMPONENT_T1622424908_H
#ifndef FOGCOMPONENT_T3271020547_H
#define FOGCOMPONENT_T3271020547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.FogComponent
struct  FogComponent_t3271020547  : public PostProcessingComponentCommandBuffer_1_t515582342
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOGCOMPONENT_T3271020547_H
#ifndef COLORGRADINGCOMPONENT_T1809510370_H
#define COLORGRADINGCOMPONENT_T1809510370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingComponent
struct  ColorGradingComponent_t1809510370  : public PostProcessingComponentRenderTexture_1_t1165493787
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.ColorGradingComponent::m_GradingCurves
	Texture2D_t3542995729 * ___m_GradingCurves_5;
	// UnityEngine.Color[] UnityEngine.PostProcessing.ColorGradingComponent::m_pixels
	ColorU5BU5D_t672350442* ___m_pixels_6;

public:
	inline static int32_t get_offset_of_m_GradingCurves_5() { return static_cast<int32_t>(offsetof(ColorGradingComponent_t1809510370, ___m_GradingCurves_5)); }
	inline Texture2D_t3542995729 * get_m_GradingCurves_5() const { return ___m_GradingCurves_5; }
	inline Texture2D_t3542995729 ** get_address_of_m_GradingCurves_5() { return &___m_GradingCurves_5; }
	inline void set_m_GradingCurves_5(Texture2D_t3542995729 * value)
	{
		___m_GradingCurves_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_GradingCurves_5), value);
	}

	inline static int32_t get_offset_of_m_pixels_6() { return static_cast<int32_t>(offsetof(ColorGradingComponent_t1809510370, ___m_pixels_6)); }
	inline ColorU5BU5D_t672350442* get_m_pixels_6() const { return ___m_pixels_6; }
	inline ColorU5BU5D_t672350442** get_address_of_m_pixels_6() { return &___m_pixels_6; }
	inline void set_m_pixels_6(ColorU5BU5D_t672350442* value)
	{
		___m_pixels_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_pixels_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORGRADINGCOMPONENT_T1809510370_H
#ifndef DEPTHOFFIELDCOMPONENT_T2490301935_H
#define DEPTHOFFIELDCOMPONENT_T2490301935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DepthOfFieldComponent
struct  DepthOfFieldComponent_t2490301935  : public PostProcessingComponentRenderTexture_1_t395798762
{
public:
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.DepthOfFieldComponent::m_CoCHistory
	RenderTexture_t2666733923 * ___m_CoCHistory_3;

public:
	inline static int32_t get_offset_of_m_CoCHistory_3() { return static_cast<int32_t>(offsetof(DepthOfFieldComponent_t2490301935, ___m_CoCHistory_3)); }
	inline RenderTexture_t2666733923 * get_m_CoCHistory_3() const { return ___m_CoCHistory_3; }
	inline RenderTexture_t2666733923 ** get_address_of_m_CoCHistory_3() { return &___m_CoCHistory_3; }
	inline void set_m_CoCHistory_3(RenderTexture_t2666733923 * value)
	{
		___m_CoCHistory_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoCHistory_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHOFFIELDCOMPONENT_T2490301935_H
#ifndef EYEADAPTATIONCOMPONENT_T97759513_H
#define EYEADAPTATIONCOMPONENT_T97759513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.EyeAdaptationComponent
struct  EyeAdaptationComponent_t97759513  : public PostProcessingComponentRenderTexture_1_t2973057428
{
public:
	// UnityEngine.ComputeShader UnityEngine.PostProcessing.EyeAdaptationComponent::m_EyeCompute
	ComputeShader_t3573922338 * ___m_EyeCompute_2;
	// UnityEngine.ComputeBuffer UnityEngine.PostProcessing.EyeAdaptationComponent::m_HistogramBuffer
	ComputeBuffer_t1827099467 * ___m_HistogramBuffer_3;
	// UnityEngine.RenderTexture[] UnityEngine.PostProcessing.EyeAdaptationComponent::m_AutoExposurePool
	RenderTextureU5BU5D_t1137456562* ___m_AutoExposurePool_4;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent::m_AutoExposurePingPing
	int32_t ___m_AutoExposurePingPing_5;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.EyeAdaptationComponent::m_CurrentAutoExposure
	RenderTexture_t2666733923 * ___m_CurrentAutoExposure_6;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.EyeAdaptationComponent::m_DebugHistogram
	RenderTexture_t2666733923 * ___m_DebugHistogram_7;
	// System.Boolean UnityEngine.PostProcessing.EyeAdaptationComponent::m_FirstFrame
	bool ___m_FirstFrame_9;

public:
	inline static int32_t get_offset_of_m_EyeCompute_2() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_EyeCompute_2)); }
	inline ComputeShader_t3573922338 * get_m_EyeCompute_2() const { return ___m_EyeCompute_2; }
	inline ComputeShader_t3573922338 ** get_address_of_m_EyeCompute_2() { return &___m_EyeCompute_2; }
	inline void set_m_EyeCompute_2(ComputeShader_t3573922338 * value)
	{
		___m_EyeCompute_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_EyeCompute_2), value);
	}

	inline static int32_t get_offset_of_m_HistogramBuffer_3() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_HistogramBuffer_3)); }
	inline ComputeBuffer_t1827099467 * get_m_HistogramBuffer_3() const { return ___m_HistogramBuffer_3; }
	inline ComputeBuffer_t1827099467 ** get_address_of_m_HistogramBuffer_3() { return &___m_HistogramBuffer_3; }
	inline void set_m_HistogramBuffer_3(ComputeBuffer_t1827099467 * value)
	{
		___m_HistogramBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_HistogramBuffer_3), value);
	}

	inline static int32_t get_offset_of_m_AutoExposurePool_4() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_AutoExposurePool_4)); }
	inline RenderTextureU5BU5D_t1137456562* get_m_AutoExposurePool_4() const { return ___m_AutoExposurePool_4; }
	inline RenderTextureU5BU5D_t1137456562** get_address_of_m_AutoExposurePool_4() { return &___m_AutoExposurePool_4; }
	inline void set_m_AutoExposurePool_4(RenderTextureU5BU5D_t1137456562* value)
	{
		___m_AutoExposurePool_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_AutoExposurePool_4), value);
	}

	inline static int32_t get_offset_of_m_AutoExposurePingPing_5() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_AutoExposurePingPing_5)); }
	inline int32_t get_m_AutoExposurePingPing_5() const { return ___m_AutoExposurePingPing_5; }
	inline int32_t* get_address_of_m_AutoExposurePingPing_5() { return &___m_AutoExposurePingPing_5; }
	inline void set_m_AutoExposurePingPing_5(int32_t value)
	{
		___m_AutoExposurePingPing_5 = value;
	}

	inline static int32_t get_offset_of_m_CurrentAutoExposure_6() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_CurrentAutoExposure_6)); }
	inline RenderTexture_t2666733923 * get_m_CurrentAutoExposure_6() const { return ___m_CurrentAutoExposure_6; }
	inline RenderTexture_t2666733923 ** get_address_of_m_CurrentAutoExposure_6() { return &___m_CurrentAutoExposure_6; }
	inline void set_m_CurrentAutoExposure_6(RenderTexture_t2666733923 * value)
	{
		___m_CurrentAutoExposure_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentAutoExposure_6), value);
	}

	inline static int32_t get_offset_of_m_DebugHistogram_7() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_DebugHistogram_7)); }
	inline RenderTexture_t2666733923 * get_m_DebugHistogram_7() const { return ___m_DebugHistogram_7; }
	inline RenderTexture_t2666733923 ** get_address_of_m_DebugHistogram_7() { return &___m_DebugHistogram_7; }
	inline void set_m_DebugHistogram_7(RenderTexture_t2666733923 * value)
	{
		___m_DebugHistogram_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_DebugHistogram_7), value);
	}

	inline static int32_t get_offset_of_m_FirstFrame_9() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_FirstFrame_9)); }
	inline bool get_m_FirstFrame_9() const { return ___m_FirstFrame_9; }
	inline bool* get_address_of_m_FirstFrame_9() { return &___m_FirstFrame_9; }
	inline void set_m_FirstFrame_9(bool value)
	{
		___m_FirstFrame_9 = value;
	}
};

struct EyeAdaptationComponent_t97759513_StaticFields
{
public:
	// System.UInt32[] UnityEngine.PostProcessing.EyeAdaptationComponent::s_EmptyHistogramBuffer
	UInt32U5BU5D_t59386216* ___s_EmptyHistogramBuffer_8;

public:
	inline static int32_t get_offset_of_s_EmptyHistogramBuffer_8() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513_StaticFields, ___s_EmptyHistogramBuffer_8)); }
	inline UInt32U5BU5D_t59386216* get_s_EmptyHistogramBuffer_8() const { return ___s_EmptyHistogramBuffer_8; }
	inline UInt32U5BU5D_t59386216** get_address_of_s_EmptyHistogramBuffer_8() { return &___s_EmptyHistogramBuffer_8; }
	inline void set_s_EmptyHistogramBuffer_8(UInt32U5BU5D_t59386216* value)
	{
		___s_EmptyHistogramBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_EmptyHistogramBuffer_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEADAPTATIONCOMPONENT_T97759513_H
#ifndef FXAACOMPONENT_T2311902503_H
#define FXAACOMPONENT_T2311902503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.FxaaComponent
struct  FxaaComponent_t2311902503  : public PostProcessingComponentRenderTexture_1_t967292752
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FXAACOMPONENT_T2311902503_H
#ifndef BUILTINDEBUGVIEWSCOMPONENT_T4032585091_H
#define BUILTINDEBUGVIEWSCOMPONENT_T4032585091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsComponent
struct  BuiltinDebugViewsComponent_t4032585091  : public PostProcessingComponentCommandBuffer_1_t2401038342
{
public:
	// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray UnityEngine.PostProcessing.BuiltinDebugViewsComponent::m_Arrows
	ArrowArray_t772926374 * ___m_Arrows_3;

public:
	inline static int32_t get_offset_of_m_Arrows_3() { return static_cast<int32_t>(offsetof(BuiltinDebugViewsComponent_t4032585091, ___m_Arrows_3)); }
	inline ArrowArray_t772926374 * get_m_Arrows_3() const { return ___m_Arrows_3; }
	inline ArrowArray_t772926374 ** get_address_of_m_Arrows_3() { return &___m_Arrows_3; }
	inline void set_m_Arrows_3(ArrowArray_t772926374 * value)
	{
		___m_Arrows_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arrows_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINDEBUGVIEWSCOMPONENT_T4032585091_H
#ifndef MOTIONBLURCOMPONENT_T3753513360_H
#define MOTIONBLURCOMPONENT_T3753513360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent
struct  MotionBlurComponent_t3753513360  : public PostProcessingComponentCommandBuffer_1_t2374348953
{
public:
	// UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter UnityEngine.PostProcessing.MotionBlurComponent::m_ReconstructionFilter
	ReconstructionFilter_t1962748845 * ___m_ReconstructionFilter_2;
	// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter UnityEngine.PostProcessing.MotionBlurComponent::m_FrameBlendingFilter
	FrameBlendingFilter_t4201983135 * ___m_FrameBlendingFilter_3;
	// System.Boolean UnityEngine.PostProcessing.MotionBlurComponent::m_FirstFrame
	bool ___m_FirstFrame_4;

public:
	inline static int32_t get_offset_of_m_ReconstructionFilter_2() { return static_cast<int32_t>(offsetof(MotionBlurComponent_t3753513360, ___m_ReconstructionFilter_2)); }
	inline ReconstructionFilter_t1962748845 * get_m_ReconstructionFilter_2() const { return ___m_ReconstructionFilter_2; }
	inline ReconstructionFilter_t1962748845 ** get_address_of_m_ReconstructionFilter_2() { return &___m_ReconstructionFilter_2; }
	inline void set_m_ReconstructionFilter_2(ReconstructionFilter_t1962748845 * value)
	{
		___m_ReconstructionFilter_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ReconstructionFilter_2), value);
	}

	inline static int32_t get_offset_of_m_FrameBlendingFilter_3() { return static_cast<int32_t>(offsetof(MotionBlurComponent_t3753513360, ___m_FrameBlendingFilter_3)); }
	inline FrameBlendingFilter_t4201983135 * get_m_FrameBlendingFilter_3() const { return ___m_FrameBlendingFilter_3; }
	inline FrameBlendingFilter_t4201983135 ** get_address_of_m_FrameBlendingFilter_3() { return &___m_FrameBlendingFilter_3; }
	inline void set_m_FrameBlendingFilter_3(FrameBlendingFilter_t4201983135 * value)
	{
		___m_FrameBlendingFilter_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FrameBlendingFilter_3), value);
	}

	inline static int32_t get_offset_of_m_FirstFrame_4() { return static_cast<int32_t>(offsetof(MotionBlurComponent_t3753513360, ___m_FirstFrame_4)); }
	inline bool get_m_FirstFrame_4() const { return ___m_FirstFrame_4; }
	inline bool* get_address_of_m_FirstFrame_4() { return &___m_FirstFrame_4; }
	inline void set_m_FirstFrame_4(bool value)
	{
		___m_FirstFrame_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTIONBLURCOMPONENT_T3753513360_H
#ifndef RECONSTRUCTIONFILTER_T1962748845_H
#define RECONSTRUCTIONFILTER_T1962748845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter
struct  ReconstructionFilter_t1962748845  : public RuntimeObject
{
public:
	// UnityEngine.RenderTextureFormat UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter::m_VectorRTFormat
	int32_t ___m_VectorRTFormat_0;
	// UnityEngine.RenderTextureFormat UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter::m_PackedRTFormat
	int32_t ___m_PackedRTFormat_1;

public:
	inline static int32_t get_offset_of_m_VectorRTFormat_0() { return static_cast<int32_t>(offsetof(ReconstructionFilter_t1962748845, ___m_VectorRTFormat_0)); }
	inline int32_t get_m_VectorRTFormat_0() const { return ___m_VectorRTFormat_0; }
	inline int32_t* get_address_of_m_VectorRTFormat_0() { return &___m_VectorRTFormat_0; }
	inline void set_m_VectorRTFormat_0(int32_t value)
	{
		___m_VectorRTFormat_0 = value;
	}

	inline static int32_t get_offset_of_m_PackedRTFormat_1() { return static_cast<int32_t>(offsetof(ReconstructionFilter_t1962748845, ___m_PackedRTFormat_1)); }
	inline int32_t get_m_PackedRTFormat_1() const { return ___m_PackedRTFormat_1; }
	inline int32_t* get_address_of_m_PackedRTFormat_1() { return &___m_PackedRTFormat_1; }
	inline void set_m_PackedRTFormat_1(int32_t value)
	{
		___m_PackedRTFormat_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECONSTRUCTIONFILTER_T1962748845_H
#ifndef GRAINCOMPONENT_T448736540_H
#define GRAINCOMPONENT_T448736540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.GrainComponent
struct  GrainComponent_t448736540  : public PostProcessingComponentRenderTexture_1_t3035526909
{
public:
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.GrainComponent::m_GrainLookupRT
	RenderTexture_t2666733923 * ___m_GrainLookupRT_2;

public:
	inline static int32_t get_offset_of_m_GrainLookupRT_2() { return static_cast<int32_t>(offsetof(GrainComponent_t448736540, ___m_GrainLookupRT_2)); }
	inline RenderTexture_t2666733923 * get_m_GrainLookupRT_2() const { return ___m_GrainLookupRT_2; }
	inline RenderTexture_t2666733923 ** get_address_of_m_GrainLookupRT_2() { return &___m_GrainLookupRT_2; }
	inline void set_m_GrainLookupRT_2(RenderTexture_t2666733923 * value)
	{
		___m_GrainLookupRT_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_GrainLookupRT_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAINCOMPONENT_T448736540_H
#ifndef CHROMATICABERRATIONCOMPONENT_T1705178474_H
#define CHROMATICABERRATIONCOMPONENT_T1705178474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ChromaticAberrationComponent
struct  ChromaticAberrationComponent_t1705178474  : public PostProcessingComponentRenderTexture_1_t2911350591
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.ChromaticAberrationComponent::m_SpectrumLut
	Texture2D_t3542995729 * ___m_SpectrumLut_2;

public:
	inline static int32_t get_offset_of_m_SpectrumLut_2() { return static_cast<int32_t>(offsetof(ChromaticAberrationComponent_t1705178474, ___m_SpectrumLut_2)); }
	inline Texture2D_t3542995729 * get_m_SpectrumLut_2() const { return ___m_SpectrumLut_2; }
	inline Texture2D_t3542995729 ** get_address_of_m_SpectrumLut_2() { return &___m_SpectrumLut_2; }
	inline void set_m_SpectrumLut_2(Texture2D_t3542995729 * value)
	{
		___m_SpectrumLut_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SpectrumLut_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHROMATICABERRATIONCOMPONENT_T1705178474_H
#ifndef AMBIENTOCCLUSIONCOMPONENT_T3967716690_H
#define AMBIENTOCCLUSIONCOMPONENT_T3967716690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AmbientOcclusionComponent
struct  AmbientOcclusionComponent_t3967716690  : public PostProcessingComponentCommandBuffer_1_t2024801243
{
public:
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.PostProcessing.AmbientOcclusionComponent::m_MRT
	RenderTargetIdentifierU5BU5D_t32810763* ___m_MRT_4;

public:
	inline static int32_t get_offset_of_m_MRT_4() { return static_cast<int32_t>(offsetof(AmbientOcclusionComponent_t3967716690, ___m_MRT_4)); }
	inline RenderTargetIdentifierU5BU5D_t32810763* get_m_MRT_4() const { return ___m_MRT_4; }
	inline RenderTargetIdentifierU5BU5D_t32810763** get_address_of_m_MRT_4() { return &___m_MRT_4; }
	inline void set_m_MRT_4(RenderTargetIdentifierU5BU5D_t32810763* value)
	{
		___m_MRT_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_MRT_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIENTOCCLUSIONCOMPONENT_T3967716690_H
#ifndef DITHERINGCOMPONENT_T700371219_H
#define DITHERINGCOMPONENT_T700371219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DitheringComponent
struct  DitheringComponent_t700371219  : public PostProcessingComponentRenderTexture_1_t4174662870
{
public:
	// UnityEngine.Texture2D[] UnityEngine.PostProcessing.DitheringComponent::noiseTextures
	Texture2DU5BU5D_t2724090252* ___noiseTextures_2;
	// System.Int32 UnityEngine.PostProcessing.DitheringComponent::textureIndex
	int32_t ___textureIndex_3;

public:
	inline static int32_t get_offset_of_noiseTextures_2() { return static_cast<int32_t>(offsetof(DitheringComponent_t700371219, ___noiseTextures_2)); }
	inline Texture2DU5BU5D_t2724090252* get_noiseTextures_2() const { return ___noiseTextures_2; }
	inline Texture2DU5BU5D_t2724090252** get_address_of_noiseTextures_2() { return &___noiseTextures_2; }
	inline void set_noiseTextures_2(Texture2DU5BU5D_t2724090252* value)
	{
		___noiseTextures_2 = value;
		Il2CppCodeGenWriteBarrier((&___noiseTextures_2), value);
	}

	inline static int32_t get_offset_of_textureIndex_3() { return static_cast<int32_t>(offsetof(DitheringComponent_t700371219, ___textureIndex_3)); }
	inline int32_t get_textureIndex_3() const { return ___textureIndex_3; }
	inline int32_t* get_address_of_textureIndex_3() { return &___textureIndex_3; }
	inline void set_textureIndex_3(int32_t value)
	{
		___textureIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DITHERINGCOMPONENT_T700371219_H
#ifndef SETTINGS_T1855865858_H
#define SETTINGS_T1855865858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AmbientOcclusionModel/Settings
struct  Settings_t1855865858 
{
public:
	// System.Single UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::intensity
	float ___intensity_0;
	// System.Single UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::radius
	float ___radius_1;
	// UnityEngine.PostProcessing.AmbientOcclusionModel/SampleCount UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::sampleCount
	int32_t ___sampleCount_2;
	// System.Boolean UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::downsampling
	bool ___downsampling_3;
	// System.Boolean UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::forceForwardCompatibility
	bool ___forceForwardCompatibility_4;
	// System.Boolean UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::ambientOnly
	bool ___ambientOnly_5;
	// System.Boolean UnityEngine.PostProcessing.AmbientOcclusionModel/Settings::highPrecision
	bool ___highPrecision_6;

public:
	inline static int32_t get_offset_of_intensity_0() { return static_cast<int32_t>(offsetof(Settings_t1855865858, ___intensity_0)); }
	inline float get_intensity_0() const { return ___intensity_0; }
	inline float* get_address_of_intensity_0() { return &___intensity_0; }
	inline void set_intensity_0(float value)
	{
		___intensity_0 = value;
	}

	inline static int32_t get_offset_of_radius_1() { return static_cast<int32_t>(offsetof(Settings_t1855865858, ___radius_1)); }
	inline float get_radius_1() const { return ___radius_1; }
	inline float* get_address_of_radius_1() { return &___radius_1; }
	inline void set_radius_1(float value)
	{
		___radius_1 = value;
	}

	inline static int32_t get_offset_of_sampleCount_2() { return static_cast<int32_t>(offsetof(Settings_t1855865858, ___sampleCount_2)); }
	inline int32_t get_sampleCount_2() const { return ___sampleCount_2; }
	inline int32_t* get_address_of_sampleCount_2() { return &___sampleCount_2; }
	inline void set_sampleCount_2(int32_t value)
	{
		___sampleCount_2 = value;
	}

	inline static int32_t get_offset_of_downsampling_3() { return static_cast<int32_t>(offsetof(Settings_t1855865858, ___downsampling_3)); }
	inline bool get_downsampling_3() const { return ___downsampling_3; }
	inline bool* get_address_of_downsampling_3() { return &___downsampling_3; }
	inline void set_downsampling_3(bool value)
	{
		___downsampling_3 = value;
	}

	inline static int32_t get_offset_of_forceForwardCompatibility_4() { return static_cast<int32_t>(offsetof(Settings_t1855865858, ___forceForwardCompatibility_4)); }
	inline bool get_forceForwardCompatibility_4() const { return ___forceForwardCompatibility_4; }
	inline bool* get_address_of_forceForwardCompatibility_4() { return &___forceForwardCompatibility_4; }
	inline void set_forceForwardCompatibility_4(bool value)
	{
		___forceForwardCompatibility_4 = value;
	}

	inline static int32_t get_offset_of_ambientOnly_5() { return static_cast<int32_t>(offsetof(Settings_t1855865858, ___ambientOnly_5)); }
	inline bool get_ambientOnly_5() const { return ___ambientOnly_5; }
	inline bool* get_address_of_ambientOnly_5() { return &___ambientOnly_5; }
	inline void set_ambientOnly_5(bool value)
	{
		___ambientOnly_5 = value;
	}

	inline static int32_t get_offset_of_highPrecision_6() { return static_cast<int32_t>(offsetof(Settings_t1855865858, ___highPrecision_6)); }
	inline bool get_highPrecision_6() const { return ___highPrecision_6; }
	inline bool* get_address_of_highPrecision_6() { return &___highPrecision_6; }
	inline void set_highPrecision_6(bool value)
	{
		___highPrecision_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.AmbientOcclusionModel/Settings
struct Settings_t1855865858_marshaled_pinvoke
{
	float ___intensity_0;
	float ___radius_1;
	int32_t ___sampleCount_2;
	int32_t ___downsampling_3;
	int32_t ___forceForwardCompatibility_4;
	int32_t ___ambientOnly_5;
	int32_t ___highPrecision_6;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.AmbientOcclusionModel/Settings
struct Settings_t1855865858_marshaled_com
{
	float ___intensity_0;
	float ___radius_1;
	int32_t ___sampleCount_2;
	int32_t ___downsampling_3;
	int32_t ___forceForwardCompatibility_4;
	int32_t ___ambientOnly_5;
	int32_t ___highPrecision_6;
};
#endif // SETTINGS_T1855865858_H
#ifndef SETTINGS_T3414631057_H
#define SETTINGS_T3414631057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.EyeAdaptationModel/Settings
struct  Settings_t3414631057 
{
public:
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::lowPercent
	float ___lowPercent_0;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::highPercent
	float ___highPercent_1;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::minLuminance
	float ___minLuminance_2;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::maxLuminance
	float ___maxLuminance_3;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::keyValue
	float ___keyValue_4;
	// System.Boolean UnityEngine.PostProcessing.EyeAdaptationModel/Settings::dynamicKeyValue
	bool ___dynamicKeyValue_5;
	// UnityEngine.PostProcessing.EyeAdaptationModel/EyeAdaptationType UnityEngine.PostProcessing.EyeAdaptationModel/Settings::adaptationType
	int32_t ___adaptationType_6;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::speedUp
	float ___speedUp_7;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::speedDown
	float ___speedDown_8;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationModel/Settings::logMin
	int32_t ___logMin_9;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationModel/Settings::logMax
	int32_t ___logMax_10;

public:
	inline static int32_t get_offset_of_lowPercent_0() { return static_cast<int32_t>(offsetof(Settings_t3414631057, ___lowPercent_0)); }
	inline float get_lowPercent_0() const { return ___lowPercent_0; }
	inline float* get_address_of_lowPercent_0() { return &___lowPercent_0; }
	inline void set_lowPercent_0(float value)
	{
		___lowPercent_0 = value;
	}

	inline static int32_t get_offset_of_highPercent_1() { return static_cast<int32_t>(offsetof(Settings_t3414631057, ___highPercent_1)); }
	inline float get_highPercent_1() const { return ___highPercent_1; }
	inline float* get_address_of_highPercent_1() { return &___highPercent_1; }
	inline void set_highPercent_1(float value)
	{
		___highPercent_1 = value;
	}

	inline static int32_t get_offset_of_minLuminance_2() { return static_cast<int32_t>(offsetof(Settings_t3414631057, ___minLuminance_2)); }
	inline float get_minLuminance_2() const { return ___minLuminance_2; }
	inline float* get_address_of_minLuminance_2() { return &___minLuminance_2; }
	inline void set_minLuminance_2(float value)
	{
		___minLuminance_2 = value;
	}

	inline static int32_t get_offset_of_maxLuminance_3() { return static_cast<int32_t>(offsetof(Settings_t3414631057, ___maxLuminance_3)); }
	inline float get_maxLuminance_3() const { return ___maxLuminance_3; }
	inline float* get_address_of_maxLuminance_3() { return &___maxLuminance_3; }
	inline void set_maxLuminance_3(float value)
	{
		___maxLuminance_3 = value;
	}

	inline static int32_t get_offset_of_keyValue_4() { return static_cast<int32_t>(offsetof(Settings_t3414631057, ___keyValue_4)); }
	inline float get_keyValue_4() const { return ___keyValue_4; }
	inline float* get_address_of_keyValue_4() { return &___keyValue_4; }
	inline void set_keyValue_4(float value)
	{
		___keyValue_4 = value;
	}

	inline static int32_t get_offset_of_dynamicKeyValue_5() { return static_cast<int32_t>(offsetof(Settings_t3414631057, ___dynamicKeyValue_5)); }
	inline bool get_dynamicKeyValue_5() const { return ___dynamicKeyValue_5; }
	inline bool* get_address_of_dynamicKeyValue_5() { return &___dynamicKeyValue_5; }
	inline void set_dynamicKeyValue_5(bool value)
	{
		___dynamicKeyValue_5 = value;
	}

	inline static int32_t get_offset_of_adaptationType_6() { return static_cast<int32_t>(offsetof(Settings_t3414631057, ___adaptationType_6)); }
	inline int32_t get_adaptationType_6() const { return ___adaptationType_6; }
	inline int32_t* get_address_of_adaptationType_6() { return &___adaptationType_6; }
	inline void set_adaptationType_6(int32_t value)
	{
		___adaptationType_6 = value;
	}

	inline static int32_t get_offset_of_speedUp_7() { return static_cast<int32_t>(offsetof(Settings_t3414631057, ___speedUp_7)); }
	inline float get_speedUp_7() const { return ___speedUp_7; }
	inline float* get_address_of_speedUp_7() { return &___speedUp_7; }
	inline void set_speedUp_7(float value)
	{
		___speedUp_7 = value;
	}

	inline static int32_t get_offset_of_speedDown_8() { return static_cast<int32_t>(offsetof(Settings_t3414631057, ___speedDown_8)); }
	inline float get_speedDown_8() const { return ___speedDown_8; }
	inline float* get_address_of_speedDown_8() { return &___speedDown_8; }
	inline void set_speedDown_8(float value)
	{
		___speedDown_8 = value;
	}

	inline static int32_t get_offset_of_logMin_9() { return static_cast<int32_t>(offsetof(Settings_t3414631057, ___logMin_9)); }
	inline int32_t get_logMin_9() const { return ___logMin_9; }
	inline int32_t* get_address_of_logMin_9() { return &___logMin_9; }
	inline void set_logMin_9(int32_t value)
	{
		___logMin_9 = value;
	}

	inline static int32_t get_offset_of_logMax_10() { return static_cast<int32_t>(offsetof(Settings_t3414631057, ___logMax_10)); }
	inline int32_t get_logMax_10() const { return ___logMax_10; }
	inline int32_t* get_address_of_logMax_10() { return &___logMax_10; }
	inline void set_logMax_10(int32_t value)
	{
		___logMax_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.EyeAdaptationModel/Settings
struct Settings_t3414631057_marshaled_pinvoke
{
	float ___lowPercent_0;
	float ___highPercent_1;
	float ___minLuminance_2;
	float ___maxLuminance_3;
	float ___keyValue_4;
	int32_t ___dynamicKeyValue_5;
	int32_t ___adaptationType_6;
	float ___speedUp_7;
	float ___speedDown_8;
	int32_t ___logMin_9;
	int32_t ___logMax_10;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.EyeAdaptationModel/Settings
struct Settings_t3414631057_marshaled_com
{
	float ___lowPercent_0;
	float ___highPercent_1;
	float ___minLuminance_2;
	float ___maxLuminance_3;
	float ___keyValue_4;
	int32_t ___dynamicKeyValue_5;
	int32_t ___adaptationType_6;
	float ___speedUp_7;
	float ___speedDown_8;
	int32_t ___logMin_9;
	int32_t ___logMax_10;
};
#endif // SETTINGS_T3414631057_H
#ifndef FXAASETTINGS_T2562831787_H
#define FXAASETTINGS_T2562831787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings
struct  FxaaSettings_t2562831787 
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaPreset UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings::preset
	int32_t ___preset_0;

public:
	inline static int32_t get_offset_of_preset_0() { return static_cast<int32_t>(offsetof(FxaaSettings_t2562831787, ___preset_0)); }
	inline int32_t get_preset_0() const { return ___preset_0; }
	inline int32_t* get_address_of_preset_0() { return &___preset_0; }
	inline void set_preset_0(int32_t value)
	{
		___preset_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FXAASETTINGS_T2562831787_H
#ifndef SETTINGS_T3296188159_H
#define SETTINGS_T3296188159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings
struct  Settings_t3296188159 
{
public:
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Mode UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings::mode
	int32_t ___mode_0;
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings::depth
	DepthSettings_t587440522  ___depth_1;
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings::motionVectors
	MotionVectorsSettings_t1700962583  ___motionVectors_2;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(Settings_t3296188159, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_depth_1() { return static_cast<int32_t>(offsetof(Settings_t3296188159, ___depth_1)); }
	inline DepthSettings_t587440522  get_depth_1() const { return ___depth_1; }
	inline DepthSettings_t587440522 * get_address_of_depth_1() { return &___depth_1; }
	inline void set_depth_1(DepthSettings_t587440522  value)
	{
		___depth_1 = value;
	}

	inline static int32_t get_offset_of_motionVectors_2() { return static_cast<int32_t>(offsetof(Settings_t3296188159, ___motionVectors_2)); }
	inline MotionVectorsSettings_t1700962583  get_motionVectors_2() const { return ___motionVectors_2; }
	inline MotionVectorsSettings_t1700962583 * get_address_of_motionVectors_2() { return &___motionVectors_2; }
	inline void set_motionVectors_2(MotionVectorsSettings_t1700962583  value)
	{
		___motionVectors_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGS_T3296188159_H
#ifndef SETTINGS_T380900351_H
#define SETTINGS_T380900351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DepthOfFieldModel/Settings
struct  Settings_t380900351 
{
public:
	// System.Single UnityEngine.PostProcessing.DepthOfFieldModel/Settings::focusDistance
	float ___focusDistance_0;
	// System.Single UnityEngine.PostProcessing.DepthOfFieldModel/Settings::aperture
	float ___aperture_1;
	// System.Single UnityEngine.PostProcessing.DepthOfFieldModel/Settings::focalLength
	float ___focalLength_2;
	// System.Boolean UnityEngine.PostProcessing.DepthOfFieldModel/Settings::useCameraFov
	bool ___useCameraFov_3;
	// UnityEngine.PostProcessing.DepthOfFieldModel/KernelSize UnityEngine.PostProcessing.DepthOfFieldModel/Settings::kernelSize
	int32_t ___kernelSize_4;

public:
	inline static int32_t get_offset_of_focusDistance_0() { return static_cast<int32_t>(offsetof(Settings_t380900351, ___focusDistance_0)); }
	inline float get_focusDistance_0() const { return ___focusDistance_0; }
	inline float* get_address_of_focusDistance_0() { return &___focusDistance_0; }
	inline void set_focusDistance_0(float value)
	{
		___focusDistance_0 = value;
	}

	inline static int32_t get_offset_of_aperture_1() { return static_cast<int32_t>(offsetof(Settings_t380900351, ___aperture_1)); }
	inline float get_aperture_1() const { return ___aperture_1; }
	inline float* get_address_of_aperture_1() { return &___aperture_1; }
	inline void set_aperture_1(float value)
	{
		___aperture_1 = value;
	}

	inline static int32_t get_offset_of_focalLength_2() { return static_cast<int32_t>(offsetof(Settings_t380900351, ___focalLength_2)); }
	inline float get_focalLength_2() const { return ___focalLength_2; }
	inline float* get_address_of_focalLength_2() { return &___focalLength_2; }
	inline void set_focalLength_2(float value)
	{
		___focalLength_2 = value;
	}

	inline static int32_t get_offset_of_useCameraFov_3() { return static_cast<int32_t>(offsetof(Settings_t380900351, ___useCameraFov_3)); }
	inline bool get_useCameraFov_3() const { return ___useCameraFov_3; }
	inline bool* get_address_of_useCameraFov_3() { return &___useCameraFov_3; }
	inline void set_useCameraFov_3(bool value)
	{
		___useCameraFov_3 = value;
	}

	inline static int32_t get_offset_of_kernelSize_4() { return static_cast<int32_t>(offsetof(Settings_t380900351, ___kernelSize_4)); }
	inline int32_t get_kernelSize_4() const { return ___kernelSize_4; }
	inline int32_t* get_address_of_kernelSize_4() { return &___kernelSize_4; }
	inline void set_kernelSize_4(int32_t value)
	{
		___kernelSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.DepthOfFieldModel/Settings
struct Settings_t380900351_marshaled_pinvoke
{
	float ___focusDistance_0;
	float ___aperture_1;
	float ___focalLength_2;
	int32_t ___useCameraFov_3;
	int32_t ___kernelSize_4;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.DepthOfFieldModel/Settings
struct Settings_t380900351_marshaled_com
{
	float ___focusDistance_0;
	float ___aperture_1;
	float ___focalLength_2;
	int32_t ___useCameraFov_3;
	int32_t ___kernelSize_4;
};
#endif // SETTINGS_T380900351_H
#ifndef TONEMAPPINGSETTINGS_T1819353678_H
#define TONEMAPPINGSETTINGS_T1819353678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings
struct  TonemappingSettings_t1819353678 
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/Tonemapper UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::tonemapper
	int32_t ___tonemapper_0;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralBlackIn
	float ___neutralBlackIn_1;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralWhiteIn
	float ___neutralWhiteIn_2;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralBlackOut
	float ___neutralBlackOut_3;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralWhiteOut
	float ___neutralWhiteOut_4;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralWhiteLevel
	float ___neutralWhiteLevel_5;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralWhiteClip
	float ___neutralWhiteClip_6;

public:
	inline static int32_t get_offset_of_tonemapper_0() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1819353678, ___tonemapper_0)); }
	inline int32_t get_tonemapper_0() const { return ___tonemapper_0; }
	inline int32_t* get_address_of_tonemapper_0() { return &___tonemapper_0; }
	inline void set_tonemapper_0(int32_t value)
	{
		___tonemapper_0 = value;
	}

	inline static int32_t get_offset_of_neutralBlackIn_1() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1819353678, ___neutralBlackIn_1)); }
	inline float get_neutralBlackIn_1() const { return ___neutralBlackIn_1; }
	inline float* get_address_of_neutralBlackIn_1() { return &___neutralBlackIn_1; }
	inline void set_neutralBlackIn_1(float value)
	{
		___neutralBlackIn_1 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteIn_2() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1819353678, ___neutralWhiteIn_2)); }
	inline float get_neutralWhiteIn_2() const { return ___neutralWhiteIn_2; }
	inline float* get_address_of_neutralWhiteIn_2() { return &___neutralWhiteIn_2; }
	inline void set_neutralWhiteIn_2(float value)
	{
		___neutralWhiteIn_2 = value;
	}

	inline static int32_t get_offset_of_neutralBlackOut_3() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1819353678, ___neutralBlackOut_3)); }
	inline float get_neutralBlackOut_3() const { return ___neutralBlackOut_3; }
	inline float* get_address_of_neutralBlackOut_3() { return &___neutralBlackOut_3; }
	inline void set_neutralBlackOut_3(float value)
	{
		___neutralBlackOut_3 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteOut_4() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1819353678, ___neutralWhiteOut_4)); }
	inline float get_neutralWhiteOut_4() const { return ___neutralWhiteOut_4; }
	inline float* get_address_of_neutralWhiteOut_4() { return &___neutralWhiteOut_4; }
	inline void set_neutralWhiteOut_4(float value)
	{
		___neutralWhiteOut_4 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteLevel_5() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1819353678, ___neutralWhiteLevel_5)); }
	inline float get_neutralWhiteLevel_5() const { return ___neutralWhiteLevel_5; }
	inline float* get_address_of_neutralWhiteLevel_5() { return &___neutralWhiteLevel_5; }
	inline void set_neutralWhiteLevel_5(float value)
	{
		___neutralWhiteLevel_5 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteClip_6() { return static_cast<int32_t>(offsetof(TonemappingSettings_t1819353678, ___neutralWhiteClip_6)); }
	inline float get_neutralWhiteClip_6() const { return ___neutralWhiteClip_6; }
	inline float* get_address_of_neutralWhiteClip_6() { return &___neutralWhiteClip_6; }
	inline void set_neutralWhiteClip_6(float value)
	{
		___neutralWhiteClip_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TONEMAPPINGSETTINGS_T1819353678_H
#ifndef COLORWHEELSSETTINGS_T2818463061_H
#define COLORWHEELSSETTINGS_T2818463061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings
struct  ColorWheelsSettings_t2818463061 
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelMode UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::mode
	int32_t ___mode_0;
	// UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::log
	LogWheelsSettings_t3976262534  ___log_1;
	// UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::linear
	LinearWheelsSettings_t1271932265  ___linear_2;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_t2818463061, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_log_1() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_t2818463061, ___log_1)); }
	inline LogWheelsSettings_t3976262534  get_log_1() const { return ___log_1; }
	inline LogWheelsSettings_t3976262534 * get_address_of_log_1() { return &___log_1; }
	inline void set_log_1(LogWheelsSettings_t3976262534  value)
	{
		___log_1 = value;
	}

	inline static int32_t get_offset_of_linear_2() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_t2818463061, ___linear_2)); }
	inline LinearWheelsSettings_t1271932265  get_linear_2() const { return ___linear_2; }
	inline LinearWheelsSettings_t1271932265 * get_address_of_linear_2() { return &___linear_2; }
	inline void set_linear_2(LinearWheelsSettings_t1271932265  value)
	{
		___linear_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORWHEELSSETTINGS_T2818463061_H
#ifndef FRAMEBLENDINGFILTER_T4201983135_H
#define FRAMEBLENDINGFILTER_T4201983135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter
struct  FrameBlendingFilter_t4201983135  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_UseCompression
	bool ___m_UseCompression_0;
	// UnityEngine.RenderTextureFormat UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_RawTextureFormat
	int32_t ___m_RawTextureFormat_1;
	// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame[] UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_FrameList
	FrameU5BU5D_t1512492648* ___m_FrameList_2;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_LastFrameCount
	int32_t ___m_LastFrameCount_3;

public:
	inline static int32_t get_offset_of_m_UseCompression_0() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t4201983135, ___m_UseCompression_0)); }
	inline bool get_m_UseCompression_0() const { return ___m_UseCompression_0; }
	inline bool* get_address_of_m_UseCompression_0() { return &___m_UseCompression_0; }
	inline void set_m_UseCompression_0(bool value)
	{
		___m_UseCompression_0 = value;
	}

	inline static int32_t get_offset_of_m_RawTextureFormat_1() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t4201983135, ___m_RawTextureFormat_1)); }
	inline int32_t get_m_RawTextureFormat_1() const { return ___m_RawTextureFormat_1; }
	inline int32_t* get_address_of_m_RawTextureFormat_1() { return &___m_RawTextureFormat_1; }
	inline void set_m_RawTextureFormat_1(int32_t value)
	{
		___m_RawTextureFormat_1 = value;
	}

	inline static int32_t get_offset_of_m_FrameList_2() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t4201983135, ___m_FrameList_2)); }
	inline FrameU5BU5D_t1512492648* get_m_FrameList_2() const { return ___m_FrameList_2; }
	inline FrameU5BU5D_t1512492648** get_address_of_m_FrameList_2() { return &___m_FrameList_2; }
	inline void set_m_FrameList_2(FrameU5BU5D_t1512492648* value)
	{
		___m_FrameList_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_FrameList_2), value);
	}

	inline static int32_t get_offset_of_m_LastFrameCount_3() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t4201983135, ___m_LastFrameCount_3)); }
	inline int32_t get_m_LastFrameCount_3() const { return ___m_LastFrameCount_3; }
	inline int32_t* get_address_of_m_LastFrameCount_3() { return &___m_LastFrameCount_3; }
	inline void set_m_LastFrameCount_3(int32_t value)
	{
		___m_LastFrameCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEBLENDINGFILTER_T4201983135_H
#ifndef SCREENSPACEREFLECTIONCOMPONENT_T2571322632_H
#define SCREENSPACEREFLECTIONCOMPONENT_T2571322632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent
struct  ScreenSpaceReflectionComponent_t2571322632  : public PostProcessingComponentCommandBuffer_1_t1631135537
{
public:
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_HighlightSuppression
	bool ___k_HighlightSuppression_2;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_TraceBehindObjects
	bool ___k_TraceBehindObjects_3;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_TreatBackfaceHitAsMiss
	bool ___k_TreatBackfaceHitAsMiss_4;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_BilateralUpsample
	bool ___k_BilateralUpsample_5;
	// System.Int32[] UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::m_ReflectionTextures
	Int32U5BU5D_t3030399641* ___m_ReflectionTextures_6;

public:
	inline static int32_t get_offset_of_k_HighlightSuppression_2() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t2571322632, ___k_HighlightSuppression_2)); }
	inline bool get_k_HighlightSuppression_2() const { return ___k_HighlightSuppression_2; }
	inline bool* get_address_of_k_HighlightSuppression_2() { return &___k_HighlightSuppression_2; }
	inline void set_k_HighlightSuppression_2(bool value)
	{
		___k_HighlightSuppression_2 = value;
	}

	inline static int32_t get_offset_of_k_TraceBehindObjects_3() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t2571322632, ___k_TraceBehindObjects_3)); }
	inline bool get_k_TraceBehindObjects_3() const { return ___k_TraceBehindObjects_3; }
	inline bool* get_address_of_k_TraceBehindObjects_3() { return &___k_TraceBehindObjects_3; }
	inline void set_k_TraceBehindObjects_3(bool value)
	{
		___k_TraceBehindObjects_3 = value;
	}

	inline static int32_t get_offset_of_k_TreatBackfaceHitAsMiss_4() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t2571322632, ___k_TreatBackfaceHitAsMiss_4)); }
	inline bool get_k_TreatBackfaceHitAsMiss_4() const { return ___k_TreatBackfaceHitAsMiss_4; }
	inline bool* get_address_of_k_TreatBackfaceHitAsMiss_4() { return &___k_TreatBackfaceHitAsMiss_4; }
	inline void set_k_TreatBackfaceHitAsMiss_4(bool value)
	{
		___k_TreatBackfaceHitAsMiss_4 = value;
	}

	inline static int32_t get_offset_of_k_BilateralUpsample_5() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t2571322632, ___k_BilateralUpsample_5)); }
	inline bool get_k_BilateralUpsample_5() const { return ___k_BilateralUpsample_5; }
	inline bool* get_address_of_k_BilateralUpsample_5() { return &___k_BilateralUpsample_5; }
	inline void set_k_BilateralUpsample_5(bool value)
	{
		___k_BilateralUpsample_5 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionTextures_6() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t2571322632, ___m_ReflectionTextures_6)); }
	inline Int32U5BU5D_t3030399641* get_m_ReflectionTextures_6() const { return ___m_ReflectionTextures_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_ReflectionTextures_6() { return &___m_ReflectionTextures_6; }
	inline void set_m_ReflectionTextures_6(Int32U5BU5D_t3030399641* value)
	{
		___m_ReflectionTextures_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_ReflectionTextures_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEREFLECTIONCOMPONENT_T2571322632_H
#ifndef TAACOMPONENT_T3918545825_H
#define TAACOMPONENT_T3918545825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.TaaComponent
struct  TaaComponent_t3918545825  : public PostProcessingComponentRenderTexture_1_t967292752
{
public:
	// UnityEngine.RenderBuffer[] UnityEngine.PostProcessing.TaaComponent::m_MRT
	RenderBufferU5BU5D_t1583539489* ___m_MRT_4;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent::m_SampleIndex
	int32_t ___m_SampleIndex_5;
	// System.Boolean UnityEngine.PostProcessing.TaaComponent::m_ResetHistory
	bool ___m_ResetHistory_6;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.TaaComponent::m_HistoryTexture
	RenderTexture_t2666733923 * ___m_HistoryTexture_7;
	// UnityEngine.Vector2 UnityEngine.PostProcessing.TaaComponent::<jitterVector>k__BackingField
	Vector2_t2243707579  ___U3CjitterVectorU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_m_MRT_4() { return static_cast<int32_t>(offsetof(TaaComponent_t3918545825, ___m_MRT_4)); }
	inline RenderBufferU5BU5D_t1583539489* get_m_MRT_4() const { return ___m_MRT_4; }
	inline RenderBufferU5BU5D_t1583539489** get_address_of_m_MRT_4() { return &___m_MRT_4; }
	inline void set_m_MRT_4(RenderBufferU5BU5D_t1583539489* value)
	{
		___m_MRT_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_MRT_4), value);
	}

	inline static int32_t get_offset_of_m_SampleIndex_5() { return static_cast<int32_t>(offsetof(TaaComponent_t3918545825, ___m_SampleIndex_5)); }
	inline int32_t get_m_SampleIndex_5() const { return ___m_SampleIndex_5; }
	inline int32_t* get_address_of_m_SampleIndex_5() { return &___m_SampleIndex_5; }
	inline void set_m_SampleIndex_5(int32_t value)
	{
		___m_SampleIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_ResetHistory_6() { return static_cast<int32_t>(offsetof(TaaComponent_t3918545825, ___m_ResetHistory_6)); }
	inline bool get_m_ResetHistory_6() const { return ___m_ResetHistory_6; }
	inline bool* get_address_of_m_ResetHistory_6() { return &___m_ResetHistory_6; }
	inline void set_m_ResetHistory_6(bool value)
	{
		___m_ResetHistory_6 = value;
	}

	inline static int32_t get_offset_of_m_HistoryTexture_7() { return static_cast<int32_t>(offsetof(TaaComponent_t3918545825, ___m_HistoryTexture_7)); }
	inline RenderTexture_t2666733923 * get_m_HistoryTexture_7() const { return ___m_HistoryTexture_7; }
	inline RenderTexture_t2666733923 ** get_address_of_m_HistoryTexture_7() { return &___m_HistoryTexture_7; }
	inline void set_m_HistoryTexture_7(RenderTexture_t2666733923 * value)
	{
		___m_HistoryTexture_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_HistoryTexture_7), value);
	}

	inline static int32_t get_offset_of_U3CjitterVectorU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TaaComponent_t3918545825, ___U3CjitterVectorU3Ek__BackingField_8)); }
	inline Vector2_t2243707579  get_U3CjitterVectorU3Ek__BackingField_8() const { return ___U3CjitterVectorU3Ek__BackingField_8; }
	inline Vector2_t2243707579 * get_address_of_U3CjitterVectorU3Ek__BackingField_8() { return &___U3CjitterVectorU3Ek__BackingField_8; }
	inline void set_U3CjitterVectorU3Ek__BackingField_8(Vector2_t2243707579  value)
	{
		___U3CjitterVectorU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAACOMPONENT_T3918545825_H
#ifndef BLOOMMODEL_T2147452278_H
#define BLOOMMODEL_T2147452278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomModel
struct  BloomModel_t2147452278  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.BloomModel/Settings UnityEngine.PostProcessing.BloomModel::m_Settings
	Settings_t3570510944  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(BloomModel_t2147452278, ___m_Settings_1)); }
	inline Settings_t3570510944  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t3570510944 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t3570510944  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOOMMODEL_T2147452278_H
#ifndef USERLUTCOMPONENT_T1046924005_H
#define USERLUTCOMPONENT_T1046924005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.UserLutComponent
struct  UserLutComponent_t1046924005  : public PostProcessingComponentRenderTexture_1_t2661371200
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERLUTCOMPONENT_T1046924005_H
#ifndef REFLECTIONSETTINGS_T1773490745_H
#define REFLECTIONSETTINGS_T1773490745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
struct  ReflectionSettings_t1773490745 
{
public:
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRReflectionBlendType UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::blendType
	int32_t ___blendType_0;
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRResolution UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::reflectionQuality
	int32_t ___reflectionQuality_1;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::maxDistance
	float ___maxDistance_2;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::iterationCount
	int32_t ___iterationCount_3;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::stepSize
	int32_t ___stepSize_4;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::widthModifier
	float ___widthModifier_5;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::reflectionBlur
	float ___reflectionBlur_6;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::reflectBackfaces
	bool ___reflectBackfaces_7;

public:
	inline static int32_t get_offset_of_blendType_0() { return static_cast<int32_t>(offsetof(ReflectionSettings_t1773490745, ___blendType_0)); }
	inline int32_t get_blendType_0() const { return ___blendType_0; }
	inline int32_t* get_address_of_blendType_0() { return &___blendType_0; }
	inline void set_blendType_0(int32_t value)
	{
		___blendType_0 = value;
	}

	inline static int32_t get_offset_of_reflectionQuality_1() { return static_cast<int32_t>(offsetof(ReflectionSettings_t1773490745, ___reflectionQuality_1)); }
	inline int32_t get_reflectionQuality_1() const { return ___reflectionQuality_1; }
	inline int32_t* get_address_of_reflectionQuality_1() { return &___reflectionQuality_1; }
	inline void set_reflectionQuality_1(int32_t value)
	{
		___reflectionQuality_1 = value;
	}

	inline static int32_t get_offset_of_maxDistance_2() { return static_cast<int32_t>(offsetof(ReflectionSettings_t1773490745, ___maxDistance_2)); }
	inline float get_maxDistance_2() const { return ___maxDistance_2; }
	inline float* get_address_of_maxDistance_2() { return &___maxDistance_2; }
	inline void set_maxDistance_2(float value)
	{
		___maxDistance_2 = value;
	}

	inline static int32_t get_offset_of_iterationCount_3() { return static_cast<int32_t>(offsetof(ReflectionSettings_t1773490745, ___iterationCount_3)); }
	inline int32_t get_iterationCount_3() const { return ___iterationCount_3; }
	inline int32_t* get_address_of_iterationCount_3() { return &___iterationCount_3; }
	inline void set_iterationCount_3(int32_t value)
	{
		___iterationCount_3 = value;
	}

	inline static int32_t get_offset_of_stepSize_4() { return static_cast<int32_t>(offsetof(ReflectionSettings_t1773490745, ___stepSize_4)); }
	inline int32_t get_stepSize_4() const { return ___stepSize_4; }
	inline int32_t* get_address_of_stepSize_4() { return &___stepSize_4; }
	inline void set_stepSize_4(int32_t value)
	{
		___stepSize_4 = value;
	}

	inline static int32_t get_offset_of_widthModifier_5() { return static_cast<int32_t>(offsetof(ReflectionSettings_t1773490745, ___widthModifier_5)); }
	inline float get_widthModifier_5() const { return ___widthModifier_5; }
	inline float* get_address_of_widthModifier_5() { return &___widthModifier_5; }
	inline void set_widthModifier_5(float value)
	{
		___widthModifier_5 = value;
	}

	inline static int32_t get_offset_of_reflectionBlur_6() { return static_cast<int32_t>(offsetof(ReflectionSettings_t1773490745, ___reflectionBlur_6)); }
	inline float get_reflectionBlur_6() const { return ___reflectionBlur_6; }
	inline float* get_address_of_reflectionBlur_6() { return &___reflectionBlur_6; }
	inline void set_reflectionBlur_6(float value)
	{
		___reflectionBlur_6 = value;
	}

	inline static int32_t get_offset_of_reflectBackfaces_7() { return static_cast<int32_t>(offsetof(ReflectionSettings_t1773490745, ___reflectBackfaces_7)); }
	inline bool get_reflectBackfaces_7() const { return ___reflectBackfaces_7; }
	inline bool* get_address_of_reflectBackfaces_7() { return &___reflectBackfaces_7; }
	inline void set_reflectBackfaces_7(bool value)
	{
		___reflectBackfaces_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
struct ReflectionSettings_t1773490745_marshaled_pinvoke
{
	int32_t ___blendType_0;
	int32_t ___reflectionQuality_1;
	float ___maxDistance_2;
	int32_t ___iterationCount_3;
	int32_t ___stepSize_4;
	float ___widthModifier_5;
	float ___reflectionBlur_6;
	int32_t ___reflectBackfaces_7;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
struct ReflectionSettings_t1773490745_marshaled_com
{
	int32_t ___blendType_0;
	int32_t ___reflectionQuality_1;
	float ___maxDistance_2;
	int32_t ___iterationCount_3;
	int32_t ___stepSize_4;
	float ___widthModifier_5;
	float ___reflectionBlur_6;
	int32_t ___reflectBackfaces_7;
};
#endif // REFLECTIONSETTINGS_T1773490745_H
#ifndef VIGNETTECOMPONENT_T625460043_H
#define VIGNETTECOMPONENT_T625460043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.VignetteComponent
struct  VignetteComponent_t625460043  : public PostProcessingComponentRenderTexture_1_t2194696350
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIGNETTECOMPONENT_T625460043_H
#ifndef BUILTINDEBUGVIEWSMODEL_T4050465903_H
#define BUILTINDEBUGVIEWSMODEL_T4050465903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsModel
struct  BuiltinDebugViewsModel_t4050465903  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings UnityEngine.PostProcessing.BuiltinDebugViewsModel::m_Settings
	Settings_t3296188159  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(BuiltinDebugViewsModel_t4050465903, ___m_Settings_1)); }
	inline Settings_t3296188159  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t3296188159 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t3296188159  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINDEBUGVIEWSMODEL_T4050465903_H
#ifndef SETTINGS_T4027465773_H
#define SETTINGS_T4027465773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/Settings
struct  Settings_t4027465773 
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/Method UnityEngine.PostProcessing.AntialiasingModel/Settings::method
	int32_t ___method_0;
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings UnityEngine.PostProcessing.AntialiasingModel/Settings::fxaaSettings
	FxaaSettings_t2562831787  ___fxaaSettings_1;
	// UnityEngine.PostProcessing.AntialiasingModel/TaaSettings UnityEngine.PostProcessing.AntialiasingModel/Settings::taaSettings
	TaaSettings_t101510809  ___taaSettings_2;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(Settings_t4027465773, ___method_0)); }
	inline int32_t get_method_0() const { return ___method_0; }
	inline int32_t* get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(int32_t value)
	{
		___method_0 = value;
	}

	inline static int32_t get_offset_of_fxaaSettings_1() { return static_cast<int32_t>(offsetof(Settings_t4027465773, ___fxaaSettings_1)); }
	inline FxaaSettings_t2562831787  get_fxaaSettings_1() const { return ___fxaaSettings_1; }
	inline FxaaSettings_t2562831787 * get_address_of_fxaaSettings_1() { return &___fxaaSettings_1; }
	inline void set_fxaaSettings_1(FxaaSettings_t2562831787  value)
	{
		___fxaaSettings_1 = value;
	}

	inline static int32_t get_offset_of_taaSettings_2() { return static_cast<int32_t>(offsetof(Settings_t4027465773, ___taaSettings_2)); }
	inline TaaSettings_t101510809  get_taaSettings_2() const { return ___taaSettings_2; }
	inline TaaSettings_t101510809 * get_address_of_taaSettings_2() { return &___taaSettings_2; }
	inline void set_taaSettings_2(TaaSettings_t101510809  value)
	{
		___taaSettings_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGS_T4027465773_H
#ifndef AMBIENTOCCLUSIONMODEL_T3674228804_H
#define AMBIENTOCCLUSIONMODEL_T3674228804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AmbientOcclusionModel
struct  AmbientOcclusionModel_t3674228804  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.AmbientOcclusionModel/Settings UnityEngine.PostProcessing.AmbientOcclusionModel::m_Settings
	Settings_t1855865858  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(AmbientOcclusionModel_t3674228804, ___m_Settings_1)); }
	inline Settings_t1855865858  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t1855865858 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t1855865858  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIENTOCCLUSIONMODEL_T3674228804_H
#ifndef EYEADAPTATIONMODEL_T3960020221_H
#define EYEADAPTATIONMODEL_T3960020221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.EyeAdaptationModel
struct  EyeAdaptationModel_t3960020221  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.EyeAdaptationModel/Settings UnityEngine.PostProcessing.EyeAdaptationModel::m_Settings
	Settings_t3414631057  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(EyeAdaptationModel_t3960020221, ___m_Settings_1)); }
	inline Settings_t3414631057  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t3414631057 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t3414631057  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEADAPTATIONMODEL_T3960020221_H
#ifndef SETTINGS_T2290238256_H
#define SETTINGS_T2290238256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
struct  Settings_t2290238256 
{
public:
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::reflection
	ReflectionSettings_t1773490745  ___reflection_0;
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::intensity
	IntensitySettings_t3320342945  ___intensity_1;
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ScreenEdgeMask UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::screenEdgeMask
	ScreenEdgeMask_t2869591496  ___screenEdgeMask_2;

public:
	inline static int32_t get_offset_of_reflection_0() { return static_cast<int32_t>(offsetof(Settings_t2290238256, ___reflection_0)); }
	inline ReflectionSettings_t1773490745  get_reflection_0() const { return ___reflection_0; }
	inline ReflectionSettings_t1773490745 * get_address_of_reflection_0() { return &___reflection_0; }
	inline void set_reflection_0(ReflectionSettings_t1773490745  value)
	{
		___reflection_0 = value;
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(Settings_t2290238256, ___intensity_1)); }
	inline IntensitySettings_t3320342945  get_intensity_1() const { return ___intensity_1; }
	inline IntensitySettings_t3320342945 * get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(IntensitySettings_t3320342945  value)
	{
		___intensity_1 = value;
	}

	inline static int32_t get_offset_of_screenEdgeMask_2() { return static_cast<int32_t>(offsetof(Settings_t2290238256, ___screenEdgeMask_2)); }
	inline ScreenEdgeMask_t2869591496  get_screenEdgeMask_2() const { return ___screenEdgeMask_2; }
	inline ScreenEdgeMask_t2869591496 * get_address_of_screenEdgeMask_2() { return &___screenEdgeMask_2; }
	inline void set_screenEdgeMask_2(ScreenEdgeMask_t2869591496  value)
	{
		___screenEdgeMask_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
struct Settings_t2290238256_marshaled_pinvoke
{
	ReflectionSettings_t1773490745_marshaled_pinvoke ___reflection_0;
	IntensitySettings_t3320342945  ___intensity_1;
	ScreenEdgeMask_t2869591496  ___screenEdgeMask_2;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
struct Settings_t2290238256_marshaled_com
{
	ReflectionSettings_t1773490745_marshaled_com ___reflection_0;
	IntensitySettings_t3320342945  ___intensity_1;
	ScreenEdgeMask_t2869591496  ___screenEdgeMask_2;
};
#endif // SETTINGS_T2290238256_H
#ifndef DEPTHOFFIELDMODEL_T1382761555_H
#define DEPTHOFFIELDMODEL_T1382761555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DepthOfFieldModel
struct  DepthOfFieldModel_t1382761555  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.DepthOfFieldModel/Settings UnityEngine.PostProcessing.DepthOfFieldModel::m_Settings
	Settings_t380900351  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(DepthOfFieldModel_t1382761555, ___m_Settings_1)); }
	inline Settings_t380900351  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t380900351 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t380900351  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHOFFIELDMODEL_T1382761555_H
#ifndef SETTINGS_T1594407042_H
#define SETTINGS_T1594407042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/Settings
struct  Settings_t1594407042 
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::tonemapping
	TonemappingSettings_t1819353678  ___tonemapping_0;
	// UnityEngine.PostProcessing.ColorGradingModel/BasicSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::basic
	BasicSettings_t4041566386  ___basic_1;
	// UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::channelMixer
	ChannelMixerSettings_t3706030562  ___channelMixer_2;
	// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::colorWheels
	ColorWheelsSettings_t2818463061  ___colorWheels_3;
	// UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::curves
	CurvesSettings_t2104131702  ___curves_4;

public:
	inline static int32_t get_offset_of_tonemapping_0() { return static_cast<int32_t>(offsetof(Settings_t1594407042, ___tonemapping_0)); }
	inline TonemappingSettings_t1819353678  get_tonemapping_0() const { return ___tonemapping_0; }
	inline TonemappingSettings_t1819353678 * get_address_of_tonemapping_0() { return &___tonemapping_0; }
	inline void set_tonemapping_0(TonemappingSettings_t1819353678  value)
	{
		___tonemapping_0 = value;
	}

	inline static int32_t get_offset_of_basic_1() { return static_cast<int32_t>(offsetof(Settings_t1594407042, ___basic_1)); }
	inline BasicSettings_t4041566386  get_basic_1() const { return ___basic_1; }
	inline BasicSettings_t4041566386 * get_address_of_basic_1() { return &___basic_1; }
	inline void set_basic_1(BasicSettings_t4041566386  value)
	{
		___basic_1 = value;
	}

	inline static int32_t get_offset_of_channelMixer_2() { return static_cast<int32_t>(offsetof(Settings_t1594407042, ___channelMixer_2)); }
	inline ChannelMixerSettings_t3706030562  get_channelMixer_2() const { return ___channelMixer_2; }
	inline ChannelMixerSettings_t3706030562 * get_address_of_channelMixer_2() { return &___channelMixer_2; }
	inline void set_channelMixer_2(ChannelMixerSettings_t3706030562  value)
	{
		___channelMixer_2 = value;
	}

	inline static int32_t get_offset_of_colorWheels_3() { return static_cast<int32_t>(offsetof(Settings_t1594407042, ___colorWheels_3)); }
	inline ColorWheelsSettings_t2818463061  get_colorWheels_3() const { return ___colorWheels_3; }
	inline ColorWheelsSettings_t2818463061 * get_address_of_colorWheels_3() { return &___colorWheels_3; }
	inline void set_colorWheels_3(ColorWheelsSettings_t2818463061  value)
	{
		___colorWheels_3 = value;
	}

	inline static int32_t get_offset_of_curves_4() { return static_cast<int32_t>(offsetof(Settings_t1594407042, ___curves_4)); }
	inline CurvesSettings_t2104131702  get_curves_4() const { return ___curves_4; }
	inline CurvesSettings_t2104131702 * get_address_of_curves_4() { return &___curves_4; }
	inline void set_curves_4(CurvesSettings_t2104131702  value)
	{
		___curves_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ColorGradingModel/Settings
struct Settings_t1594407042_marshaled_pinvoke
{
	TonemappingSettings_t1819353678  ___tonemapping_0;
	BasicSettings_t4041566386  ___basic_1;
	ChannelMixerSettings_t3706030562  ___channelMixer_2;
	ColorWheelsSettings_t2818463061  ___colorWheels_3;
	CurvesSettings_t2104131702_marshaled_pinvoke ___curves_4;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ColorGradingModel/Settings
struct Settings_t1594407042_marshaled_com
{
	TonemappingSettings_t1819353678  ___tonemapping_0;
	BasicSettings_t4041566386  ___basic_1;
	ChannelMixerSettings_t3706030562  ___channelMixer_2;
	ColorWheelsSettings_t2818463061  ___colorWheels_3;
	CurvesSettings_t2104131702_marshaled_com ___curves_4;
};
#endif // SETTINGS_T1594407042_H
#ifndef COLORGRADINGMODEL_T2152456580_H
#define COLORGRADINGMODEL_T2152456580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel
struct  ColorGradingModel_t2152456580  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/Settings UnityEngine.PostProcessing.ColorGradingModel::m_Settings
	Settings_t1594407042  ___m_Settings_1;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel::<isDirty>k__BackingField
	bool ___U3CisDirtyU3Ek__BackingField_2;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.ColorGradingModel::<bakedLut>k__BackingField
	RenderTexture_t2666733923 * ___U3CbakedLutU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(ColorGradingModel_t2152456580, ___m_Settings_1)); }
	inline Settings_t1594407042  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t1594407042 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t1594407042  value)
	{
		___m_Settings_1 = value;
	}

	inline static int32_t get_offset_of_U3CisDirtyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ColorGradingModel_t2152456580, ___U3CisDirtyU3Ek__BackingField_2)); }
	inline bool get_U3CisDirtyU3Ek__BackingField_2() const { return ___U3CisDirtyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CisDirtyU3Ek__BackingField_2() { return &___U3CisDirtyU3Ek__BackingField_2; }
	inline void set_U3CisDirtyU3Ek__BackingField_2(bool value)
	{
		___U3CisDirtyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CbakedLutU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ColorGradingModel_t2152456580, ___U3CbakedLutU3Ek__BackingField_3)); }
	inline RenderTexture_t2666733923 * get_U3CbakedLutU3Ek__BackingField_3() const { return ___U3CbakedLutU3Ek__BackingField_3; }
	inline RenderTexture_t2666733923 ** get_address_of_U3CbakedLutU3Ek__BackingField_3() { return &___U3CbakedLutU3Ek__BackingField_3; }
	inline void set_U3CbakedLutU3Ek__BackingField_3(RenderTexture_t2666733923 * value)
	{
		___U3CbakedLutU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CbakedLutU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORGRADINGMODEL_T2152456580_H
#ifndef SCREENSPACEREFLECTIONMODEL_T3280563098_H
#define SCREENSPACEREFLECTIONMODEL_T3280563098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel
struct  ScreenSpaceReflectionModel_t3280563098  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings UnityEngine.PostProcessing.ScreenSpaceReflectionModel::m_Settings
	Settings_t2290238256  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionModel_t3280563098, ___m_Settings_1)); }
	inline Settings_t2290238256  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t2290238256 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t2290238256  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEREFLECTIONMODEL_T3280563098_H
#ifndef ANTIALIASINGMODEL_T1954255545_H
#define ANTIALIASINGMODEL_T1954255545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel
struct  AntialiasingModel_t1954255545  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/Settings UnityEngine.PostProcessing.AntialiasingModel::m_Settings
	Settings_t4027465773  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(AntialiasingModel_t1954255545, ___m_Settings_1)); }
	inline Settings_t4027465773  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t4027465773 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t4027465773  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANTIALIASINGMODEL_T1954255545_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (U3COnMouseDownU3Ec__Iterator0_t737823634), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1900[8] = 
{
	U3COnMouseDownU3Ec__Iterator0_t737823634::get_offset_of_U3CstartPosU3E__0_0(),
	U3COnMouseDownU3Ec__Iterator0_t737823634::get_offset_of_U3CendPosU3E__0_1(),
	U3COnMouseDownU3Ec__Iterator0_t737823634::get_offset_of_U3CendColorU3E__0_2(),
	U3COnMouseDownU3Ec__Iterator0_t737823634::get_offset_of_U3CiU3E__1_3(),
	U3COnMouseDownU3Ec__Iterator0_t737823634::get_offset_of_U24this_4(),
	U3COnMouseDownU3Ec__Iterator0_t737823634::get_offset_of_U24current_5(),
	U3COnMouseDownU3Ec__Iterator0_t737823634::get_offset_of_U24disposing_6(),
	U3COnMouseDownU3Ec__Iterator0_t737823634::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (GetSetAttribute_t3015625266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1901[2] = 
{
	GetSetAttribute_t3015625266::get_offset_of_name_0(),
	GetSetAttribute_t3015625266::get_offset_of_dirty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (MinAttribute_t3304439890), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1902[1] = 
{
	MinAttribute_t3304439890::get_offset_of_min_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (TrackballAttribute_t1893175024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1903[1] = 
{
	TrackballAttribute_t1893175024::get_offset_of_method_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (TrackballGroupAttribute_t3871609761), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (AmbientOcclusionComponent_t3967716690), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1905[3] = 
{
	0,
	0,
	AmbientOcclusionComponent_t3967716690::get_offset_of_m_MRT_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (Uniforms_t2344918952), -1, sizeof(Uniforms_t2344918952_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1906[10] = 
{
	Uniforms_t2344918952_StaticFields::get_offset_of__Intensity_0(),
	Uniforms_t2344918952_StaticFields::get_offset_of__Radius_1(),
	Uniforms_t2344918952_StaticFields::get_offset_of__FogParams_2(),
	Uniforms_t2344918952_StaticFields::get_offset_of__Downsample_3(),
	Uniforms_t2344918952_StaticFields::get_offset_of__SampleCount_4(),
	Uniforms_t2344918952_StaticFields::get_offset_of__OcclusionTexture1_5(),
	Uniforms_t2344918952_StaticFields::get_offset_of__OcclusionTexture2_6(),
	Uniforms_t2344918952_StaticFields::get_offset_of__OcclusionTexture_7(),
	Uniforms_t2344918952_StaticFields::get_offset_of__MainTex_8(),
	Uniforms_t2344918952_StaticFields::get_offset_of__TempRT_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (OcclusionSource_t3274603317)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1907[4] = 
{
	OcclusionSource_t3274603317::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (BloomComponent_t1622424908), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1908[3] = 
{
	0,
	BloomComponent_t1622424908::get_offset_of_m_BlurBuffer1_3(),
	BloomComponent_t1622424908::get_offset_of_m_BlurBuffer2_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (Uniforms_t3923242286), -1, sizeof(Uniforms_t3923242286_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1909[10] = 
{
	Uniforms_t3923242286_StaticFields::get_offset_of__AutoExposure_0(),
	Uniforms_t3923242286_StaticFields::get_offset_of__Threshold_1(),
	Uniforms_t3923242286_StaticFields::get_offset_of__Curve_2(),
	Uniforms_t3923242286_StaticFields::get_offset_of__PrefilterOffs_3(),
	Uniforms_t3923242286_StaticFields::get_offset_of__SampleScale_4(),
	Uniforms_t3923242286_StaticFields::get_offset_of__BaseTex_5(),
	Uniforms_t3923242286_StaticFields::get_offset_of__BloomTex_6(),
	Uniforms_t3923242286_StaticFields::get_offset_of__Bloom_Settings_7(),
	Uniforms_t3923242286_StaticFields::get_offset_of__Bloom_DirtTex_8(),
	Uniforms_t3923242286_StaticFields::get_offset_of__Bloom_DirtIntensity_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (BuiltinDebugViewsComponent_t4032585091), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1910[2] = 
{
	0,
	BuiltinDebugViewsComponent_t4032585091::get_offset_of_m_Arrows_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (Uniforms_t3230815181), -1, sizeof(Uniforms_t3230815181_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1911[7] = 
{
	Uniforms_t3230815181_StaticFields::get_offset_of__DepthScale_0(),
	Uniforms_t3230815181_StaticFields::get_offset_of__TempRT_1(),
	Uniforms_t3230815181_StaticFields::get_offset_of__Opacity_2(),
	Uniforms_t3230815181_StaticFields::get_offset_of__MainTex_3(),
	Uniforms_t3230815181_StaticFields::get_offset_of__TempRT2_4(),
	Uniforms_t3230815181_StaticFields::get_offset_of__Amplitude_5(),
	Uniforms_t3230815181_StaticFields::get_offset_of__Scale_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (Pass_t1633317739)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1912[6] = 
{
	Pass_t1633317739::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (ArrowArray_t772926374), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1913[3] = 
{
	ArrowArray_t772926374::get_offset_of_U3CmeshU3Ek__BackingField_0(),
	ArrowArray_t772926374::get_offset_of_U3CcolumnCountU3Ek__BackingField_1(),
	ArrowArray_t772926374::get_offset_of_U3CrowCountU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (ChromaticAberrationComponent_t1705178474), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1914[1] = 
{
	ChromaticAberrationComponent_t1705178474::get_offset_of_m_SpectrumLut_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (Uniforms_t3073488212), -1, sizeof(Uniforms_t3073488212_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1915[2] = 
{
	Uniforms_t3073488212_StaticFields::get_offset_of__ChromaticAberration_Amount_0(),
	Uniforms_t3073488212_StaticFields::get_offset_of__ChromaticAberration_Spectrum_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { sizeof (ColorGradingComponent_t1809510370), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1916[5] = 
{
	0,
	0,
	0,
	ColorGradingComponent_t1809510370::get_offset_of_m_GradingCurves_5(),
	ColorGradingComponent_t1809510370::get_offset_of_m_pixels_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (Uniforms_t3041071304), -1, sizeof(Uniforms_t3041071304_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1917[20] = 
{
	Uniforms_t3041071304_StaticFields::get_offset_of__LutParams_0(),
	Uniforms_t3041071304_StaticFields::get_offset_of__NeutralTonemapperParams1_1(),
	Uniforms_t3041071304_StaticFields::get_offset_of__NeutralTonemapperParams2_2(),
	Uniforms_t3041071304_StaticFields::get_offset_of__HueShift_3(),
	Uniforms_t3041071304_StaticFields::get_offset_of__Saturation_4(),
	Uniforms_t3041071304_StaticFields::get_offset_of__Contrast_5(),
	Uniforms_t3041071304_StaticFields::get_offset_of__Balance_6(),
	Uniforms_t3041071304_StaticFields::get_offset_of__Lift_7(),
	Uniforms_t3041071304_StaticFields::get_offset_of__InvGamma_8(),
	Uniforms_t3041071304_StaticFields::get_offset_of__Gain_9(),
	Uniforms_t3041071304_StaticFields::get_offset_of__Slope_10(),
	Uniforms_t3041071304_StaticFields::get_offset_of__Power_11(),
	Uniforms_t3041071304_StaticFields::get_offset_of__Offset_12(),
	Uniforms_t3041071304_StaticFields::get_offset_of__ChannelMixerRed_13(),
	Uniforms_t3041071304_StaticFields::get_offset_of__ChannelMixerGreen_14(),
	Uniforms_t3041071304_StaticFields::get_offset_of__ChannelMixerBlue_15(),
	Uniforms_t3041071304_StaticFields::get_offset_of__Curves_16(),
	Uniforms_t3041071304_StaticFields::get_offset_of__LogLut_17(),
	Uniforms_t3041071304_StaticFields::get_offset_of__LogLut_Params_18(),
	Uniforms_t3041071304_StaticFields::get_offset_of__ExposureEV_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1918 = { sizeof (DepthOfFieldComponent_t2490301935), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1918[3] = 
{
	0,
	DepthOfFieldComponent_t2490301935::get_offset_of_m_CoCHistory_3(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1919 = { sizeof (Uniforms_t650965433), -1, sizeof(Uniforms_t650965433_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1919[11] = 
{
	Uniforms_t650965433_StaticFields::get_offset_of__DepthOfFieldTex_0(),
	Uniforms_t650965433_StaticFields::get_offset_of__DepthOfFieldCoCTex_1(),
	Uniforms_t650965433_StaticFields::get_offset_of__Distance_2(),
	Uniforms_t650965433_StaticFields::get_offset_of__LensCoeff_3(),
	Uniforms_t650965433_StaticFields::get_offset_of__MaxCoC_4(),
	Uniforms_t650965433_StaticFields::get_offset_of__RcpMaxCoC_5(),
	Uniforms_t650965433_StaticFields::get_offset_of__RcpAspect_6(),
	Uniforms_t650965433_StaticFields::get_offset_of__MainTex_7(),
	Uniforms_t650965433_StaticFields::get_offset_of__CoCTex_8(),
	Uniforms_t650965433_StaticFields::get_offset_of__TaaParams_9(),
	Uniforms_t650965433_StaticFields::get_offset_of__DepthOfFieldParams_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1920 = { sizeof (DitheringComponent_t700371219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1920[3] = 
{
	DitheringComponent_t700371219::get_offset_of_noiseTextures_2(),
	DitheringComponent_t700371219::get_offset_of_textureIndex_3(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1921 = { sizeof (Uniforms_t3319208237), -1, sizeof(Uniforms_t3319208237_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1921[2] = 
{
	Uniforms_t3319208237_StaticFields::get_offset_of__DitheringTex_0(),
	Uniforms_t3319208237_StaticFields::get_offset_of__DitheringCoords_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1922 = { sizeof (EyeAdaptationComponent_t97759513), -1, sizeof(EyeAdaptationComponent_t97759513_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1922[11] = 
{
	EyeAdaptationComponent_t97759513::get_offset_of_m_EyeCompute_2(),
	EyeAdaptationComponent_t97759513::get_offset_of_m_HistogramBuffer_3(),
	EyeAdaptationComponent_t97759513::get_offset_of_m_AutoExposurePool_4(),
	EyeAdaptationComponent_t97759513::get_offset_of_m_AutoExposurePingPing_5(),
	EyeAdaptationComponent_t97759513::get_offset_of_m_CurrentAutoExposure_6(),
	EyeAdaptationComponent_t97759513::get_offset_of_m_DebugHistogram_7(),
	EyeAdaptationComponent_t97759513_StaticFields::get_offset_of_s_EmptyHistogramBuffer_8(),
	EyeAdaptationComponent_t97759513::get_offset_of_m_FirstFrame_9(),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1923 = { sizeof (Uniforms_t444490175), -1, sizeof(Uniforms_t444490175_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1923[6] = 
{
	Uniforms_t444490175_StaticFields::get_offset_of__Params_0(),
	Uniforms_t444490175_StaticFields::get_offset_of__Speed_1(),
	Uniforms_t444490175_StaticFields::get_offset_of__ScaleOffsetRes_2(),
	Uniforms_t444490175_StaticFields::get_offset_of__ExposureCompensation_3(),
	Uniforms_t444490175_StaticFields::get_offset_of__AutoExposure_4(),
	Uniforms_t444490175_StaticFields::get_offset_of__DebugWidth_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1924 = { sizeof (FogComponent_t3271020547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1924[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1925 = { sizeof (Uniforms_t764444877), -1, sizeof(Uniforms_t764444877_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1925[5] = 
{
	Uniforms_t764444877_StaticFields::get_offset_of__FogColor_0(),
	Uniforms_t764444877_StaticFields::get_offset_of__Density_1(),
	Uniforms_t764444877_StaticFields::get_offset_of__Start_2(),
	Uniforms_t764444877_StaticFields::get_offset_of__End_3(),
	Uniforms_t764444877_StaticFields::get_offset_of__TempRT_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1926 = { sizeof (FxaaComponent_t2311902503), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1927 = { sizeof (Uniforms_t3920373761), -1, sizeof(Uniforms_t3920373761_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1927[2] = 
{
	Uniforms_t3920373761_StaticFields::get_offset_of__QualitySettings_0(),
	Uniforms_t3920373761_StaticFields::get_offset_of__ConsoleSettings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1928 = { sizeof (GrainComponent_t448736540), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1928[1] = 
{
	GrainComponent_t448736540::get_offset_of_m_GrainLookupRT_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1929 = { sizeof (Uniforms_t1175449390), -1, sizeof(Uniforms_t1175449390_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1929[4] = 
{
	Uniforms_t1175449390_StaticFields::get_offset_of__Grain_Params1_0(),
	Uniforms_t1175449390_StaticFields::get_offset_of__Grain_Params2_1(),
	Uniforms_t1175449390_StaticFields::get_offset_of__GrainTex_2(),
	Uniforms_t1175449390_StaticFields::get_offset_of__Phase_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1930 = { sizeof (MotionBlurComponent_t3753513360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1930[3] = 
{
	MotionBlurComponent_t3753513360::get_offset_of_m_ReconstructionFilter_2(),
	MotionBlurComponent_t3753513360::get_offset_of_m_FrameBlendingFilter_3(),
	MotionBlurComponent_t3753513360::get_offset_of_m_FirstFrame_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1931 = { sizeof (Uniforms_t3359537322), -1, sizeof(Uniforms_t3359537322_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1931[26] = 
{
	Uniforms_t3359537322_StaticFields::get_offset_of__VelocityScale_0(),
	Uniforms_t3359537322_StaticFields::get_offset_of__MaxBlurRadius_1(),
	Uniforms_t3359537322_StaticFields::get_offset_of__RcpMaxBlurRadius_2(),
	Uniforms_t3359537322_StaticFields::get_offset_of__VelocityTex_3(),
	Uniforms_t3359537322_StaticFields::get_offset_of__MainTex_4(),
	Uniforms_t3359537322_StaticFields::get_offset_of__Tile2RT_5(),
	Uniforms_t3359537322_StaticFields::get_offset_of__Tile4RT_6(),
	Uniforms_t3359537322_StaticFields::get_offset_of__Tile8RT_7(),
	Uniforms_t3359537322_StaticFields::get_offset_of__TileMaxOffs_8(),
	Uniforms_t3359537322_StaticFields::get_offset_of__TileMaxLoop_9(),
	Uniforms_t3359537322_StaticFields::get_offset_of__TileVRT_10(),
	Uniforms_t3359537322_StaticFields::get_offset_of__NeighborMaxTex_11(),
	Uniforms_t3359537322_StaticFields::get_offset_of__LoopCount_12(),
	Uniforms_t3359537322_StaticFields::get_offset_of__TempRT_13(),
	Uniforms_t3359537322_StaticFields::get_offset_of__History1LumaTex_14(),
	Uniforms_t3359537322_StaticFields::get_offset_of__History2LumaTex_15(),
	Uniforms_t3359537322_StaticFields::get_offset_of__History3LumaTex_16(),
	Uniforms_t3359537322_StaticFields::get_offset_of__History4LumaTex_17(),
	Uniforms_t3359537322_StaticFields::get_offset_of__History1ChromaTex_18(),
	Uniforms_t3359537322_StaticFields::get_offset_of__History2ChromaTex_19(),
	Uniforms_t3359537322_StaticFields::get_offset_of__History3ChromaTex_20(),
	Uniforms_t3359537322_StaticFields::get_offset_of__History4ChromaTex_21(),
	Uniforms_t3359537322_StaticFields::get_offset_of__History1Weight_22(),
	Uniforms_t3359537322_StaticFields::get_offset_of__History2Weight_23(),
	Uniforms_t3359537322_StaticFields::get_offset_of__History3Weight_24(),
	Uniforms_t3359537322_StaticFields::get_offset_of__History4Weight_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1932 = { sizeof (Pass_t618901406)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1932[10] = 
{
	Pass_t618901406::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1933 = { sizeof (ReconstructionFilter_t1962748845), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1933[2] = 
{
	ReconstructionFilter_t1962748845::get_offset_of_m_VectorRTFormat_0(),
	ReconstructionFilter_t1962748845::get_offset_of_m_PackedRTFormat_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1934 = { sizeof (FrameBlendingFilter_t4201983135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1934[4] = 
{
	FrameBlendingFilter_t4201983135::get_offset_of_m_UseCompression_0(),
	FrameBlendingFilter_t4201983135::get_offset_of_m_RawTextureFormat_1(),
	FrameBlendingFilter_t4201983135::get_offset_of_m_FrameList_2(),
	FrameBlendingFilter_t4201983135::get_offset_of_m_LastFrameCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1935 = { sizeof (Frame_t3543665253)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1935[4] = 
{
	Frame_t3543665253::get_offset_of_lumaTexture_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Frame_t3543665253::get_offset_of_chromaTexture_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Frame_t3543665253::get_offset_of_m_Time_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Frame_t3543665253::get_offset_of_m_MRT_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1936 = { sizeof (ScreenSpaceReflectionComponent_t2571322632), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1936[5] = 
{
	ScreenSpaceReflectionComponent_t2571322632::get_offset_of_k_HighlightSuppression_2(),
	ScreenSpaceReflectionComponent_t2571322632::get_offset_of_k_TraceBehindObjects_3(),
	ScreenSpaceReflectionComponent_t2571322632::get_offset_of_k_TreatBackfaceHitAsMiss_4(),
	ScreenSpaceReflectionComponent_t2571322632::get_offset_of_k_BilateralUpsample_5(),
	ScreenSpaceReflectionComponent_t2571322632::get_offset_of_m_ReflectionTextures_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1937 = { sizeof (Uniforms_t3074170978), -1, sizeof(Uniforms_t3074170978_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1937[35] = 
{
	Uniforms_t3074170978_StaticFields::get_offset_of__RayStepSize_0(),
	Uniforms_t3074170978_StaticFields::get_offset_of__AdditiveReflection_1(),
	Uniforms_t3074170978_StaticFields::get_offset_of__BilateralUpsampling_2(),
	Uniforms_t3074170978_StaticFields::get_offset_of__TreatBackfaceHitAsMiss_3(),
	Uniforms_t3074170978_StaticFields::get_offset_of__AllowBackwardsRays_4(),
	Uniforms_t3074170978_StaticFields::get_offset_of__TraceBehindObjects_5(),
	Uniforms_t3074170978_StaticFields::get_offset_of__MaxSteps_6(),
	Uniforms_t3074170978_StaticFields::get_offset_of__FullResolutionFiltering_7(),
	Uniforms_t3074170978_StaticFields::get_offset_of__HalfResolution_8(),
	Uniforms_t3074170978_StaticFields::get_offset_of__HighlightSuppression_9(),
	Uniforms_t3074170978_StaticFields::get_offset_of__PixelsPerMeterAtOneMeter_10(),
	Uniforms_t3074170978_StaticFields::get_offset_of__ScreenEdgeFading_11(),
	Uniforms_t3074170978_StaticFields::get_offset_of__ReflectionBlur_12(),
	Uniforms_t3074170978_StaticFields::get_offset_of__MaxRayTraceDistance_13(),
	Uniforms_t3074170978_StaticFields::get_offset_of__FadeDistance_14(),
	Uniforms_t3074170978_StaticFields::get_offset_of__LayerThickness_15(),
	Uniforms_t3074170978_StaticFields::get_offset_of__SSRMultiplier_16(),
	Uniforms_t3074170978_StaticFields::get_offset_of__FresnelFade_17(),
	Uniforms_t3074170978_StaticFields::get_offset_of__FresnelFadePower_18(),
	Uniforms_t3074170978_StaticFields::get_offset_of__ReflectionBufferSize_19(),
	Uniforms_t3074170978_StaticFields::get_offset_of__ScreenSize_20(),
	Uniforms_t3074170978_StaticFields::get_offset_of__InvScreenSize_21(),
	Uniforms_t3074170978_StaticFields::get_offset_of__ProjInfo_22(),
	Uniforms_t3074170978_StaticFields::get_offset_of__CameraClipInfo_23(),
	Uniforms_t3074170978_StaticFields::get_offset_of__ProjectToPixelMatrix_24(),
	Uniforms_t3074170978_StaticFields::get_offset_of__WorldToCameraMatrix_25(),
	Uniforms_t3074170978_StaticFields::get_offset_of__CameraToWorldMatrix_26(),
	Uniforms_t3074170978_StaticFields::get_offset_of__Axis_27(),
	Uniforms_t3074170978_StaticFields::get_offset_of__CurrentMipLevel_28(),
	Uniforms_t3074170978_StaticFields::get_offset_of__NormalAndRoughnessTexture_29(),
	Uniforms_t3074170978_StaticFields::get_offset_of__HitPointTexture_30(),
	Uniforms_t3074170978_StaticFields::get_offset_of__BlurTexture_31(),
	Uniforms_t3074170978_StaticFields::get_offset_of__FilteredReflections_32(),
	Uniforms_t3074170978_StaticFields::get_offset_of__FinalReflectionTexture_33(),
	Uniforms_t3074170978_StaticFields::get_offset_of__TempTexture_34(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1938 = { sizeof (PassIndex_t139541594)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1938[10] = 
{
	PassIndex_t139541594::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1939 = { sizeof (TaaComponent_t3918545825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1939[7] = 
{
	0,
	0,
	TaaComponent_t3918545825::get_offset_of_m_MRT_4(),
	TaaComponent_t3918545825::get_offset_of_m_SampleIndex_5(),
	TaaComponent_t3918545825::get_offset_of_m_ResetHistory_6(),
	TaaComponent_t3918545825::get_offset_of_m_HistoryTexture_7(),
	TaaComponent_t3918545825::get_offset_of_U3CjitterVectorU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1940 = { sizeof (Uniforms_t4015582351), -1, sizeof(Uniforms_t4015582351_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1940[5] = 
{
	Uniforms_t4015582351_StaticFields::get_offset_of__Jitter_0(),
	Uniforms_t4015582351_StaticFields::get_offset_of__SharpenParameters_1(),
	Uniforms_t4015582351_StaticFields::get_offset_of__FinalBlendParameters_2(),
	Uniforms_t4015582351_StaticFields::get_offset_of__HistoryTex_3(),
	Uniforms_t4015582351_StaticFields::get_offset_of__MainTex_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1941 = { sizeof (UserLutComponent_t1046924005), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1942 = { sizeof (Uniforms_t739270179), -1, sizeof(Uniforms_t739270179_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1942[2] = 
{
	Uniforms_t739270179_StaticFields::get_offset_of__UserLut_0(),
	Uniforms_t739270179_StaticFields::get_offset_of__UserLut_Params_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1943 = { sizeof (VignetteComponent_t625460043), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1944 = { sizeof (Uniforms_t1322699365), -1, sizeof(Uniforms_t1322699365_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1944[5] = 
{
	Uniforms_t1322699365_StaticFields::get_offset_of__Vignette_Color_0(),
	Uniforms_t1322699365_StaticFields::get_offset_of__Vignette_Center_1(),
	Uniforms_t1322699365_StaticFields::get_offset_of__Vignette_Settings_2(),
	Uniforms_t1322699365_StaticFields::get_offset_of__Vignette_Mask_3(),
	Uniforms_t1322699365_StaticFields::get_offset_of__Vignette_Opacity_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1945 = { sizeof (AmbientOcclusionModel_t3674228804), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1945[1] = 
{
	AmbientOcclusionModel_t3674228804::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1946 = { sizeof (SampleCount_t3581262252)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1946[5] = 
{
	SampleCount_t3581262252::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1947 = { sizeof (Settings_t1855865858)+ sizeof (RuntimeObject), sizeof(Settings_t1855865858_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1947[7] = 
{
	Settings_t1855865858::get_offset_of_intensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1855865858::get_offset_of_radius_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1855865858::get_offset_of_sampleCount_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1855865858::get_offset_of_downsampling_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1855865858::get_offset_of_forceForwardCompatibility_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1855865858::get_offset_of_ambientOnly_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1855865858::get_offset_of_highPrecision_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1948 = { sizeof (AntialiasingModel_t1954255545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1948[1] = 
{
	AntialiasingModel_t1954255545::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1949 = { sizeof (Method_t3468018951)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1949[3] = 
{
	Method_t3468018951::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1950 = { sizeof (FxaaPreset_t3774605447)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1950[6] = 
{
	FxaaPreset_t3774605447::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1951 = { sizeof (FxaaQualitySettings_t2290945554)+ sizeof (RuntimeObject), sizeof(FxaaQualitySettings_t2290945554 ), sizeof(FxaaQualitySettings_t2290945554_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1951[4] = 
{
	FxaaQualitySettings_t2290945554::get_offset_of_subpixelAliasingRemovalAmount_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaQualitySettings_t2290945554::get_offset_of_edgeDetectionThreshold_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaQualitySettings_t2290945554::get_offset_of_minimumRequiredLuminance_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaQualitySettings_t2290945554_StaticFields::get_offset_of_presets_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1952 = { sizeof (FxaaConsoleSettings_t1976361858)+ sizeof (RuntimeObject), sizeof(FxaaConsoleSettings_t1976361858 ), sizeof(FxaaConsoleSettings_t1976361858_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1952[5] = 
{
	FxaaConsoleSettings_t1976361858::get_offset_of_subpixelSpreadAmount_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaConsoleSettings_t1976361858::get_offset_of_edgeSharpnessAmount_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaConsoleSettings_t1976361858::get_offset_of_edgeDetectionThreshold_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaConsoleSettings_t1976361858::get_offset_of_minimumRequiredLuminance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FxaaConsoleSettings_t1976361858_StaticFields::get_offset_of_presets_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1953 = { sizeof (FxaaSettings_t2562831787)+ sizeof (RuntimeObject), sizeof(FxaaSettings_t2562831787 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1953[1] = 
{
	FxaaSettings_t2562831787::get_offset_of_preset_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1954 = { sizeof (TaaSettings_t101510809)+ sizeof (RuntimeObject), sizeof(TaaSettings_t101510809 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1954[4] = 
{
	TaaSettings_t101510809::get_offset_of_jitterSpread_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TaaSettings_t101510809::get_offset_of_sharpen_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TaaSettings_t101510809::get_offset_of_stationaryBlending_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TaaSettings_t101510809::get_offset_of_motionBlending_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1955 = { sizeof (Settings_t4027465773)+ sizeof (RuntimeObject), sizeof(Settings_t4027465773 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1955[3] = 
{
	Settings_t4027465773::get_offset_of_method_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t4027465773::get_offset_of_fxaaSettings_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t4027465773::get_offset_of_taaSettings_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1956 = { sizeof (BloomModel_t2147452278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1956[1] = 
{
	BloomModel_t2147452278::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1957 = { sizeof (BloomSettings_t2155188677)+ sizeof (RuntimeObject), sizeof(BloomSettings_t2155188677_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1957[5] = 
{
	BloomSettings_t2155188677::get_offset_of_intensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BloomSettings_t2155188677::get_offset_of_threshold_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BloomSettings_t2155188677::get_offset_of_softKnee_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BloomSettings_t2155188677::get_offset_of_radius_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BloomSettings_t2155188677::get_offset_of_antiFlicker_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1958 = { sizeof (LensDirtSettings_t3667174501)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1958[2] = 
{
	LensDirtSettings_t3667174501::get_offset_of_texture_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LensDirtSettings_t3667174501::get_offset_of_intensity_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1959 = { sizeof (Settings_t3570510944)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1959[2] = 
{
	Settings_t3570510944::get_offset_of_bloom_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3570510944::get_offset_of_lensDirt_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1960 = { sizeof (BuiltinDebugViewsModel_t4050465903), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1960[1] = 
{
	BuiltinDebugViewsModel_t4050465903::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1961 = { sizeof (DepthSettings_t587440522)+ sizeof (RuntimeObject), sizeof(DepthSettings_t587440522 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1961[1] = 
{
	DepthSettings_t587440522::get_offset_of_scale_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1962 = { sizeof (MotionVectorsSettings_t1700962583)+ sizeof (RuntimeObject), sizeof(MotionVectorsSettings_t1700962583 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1962[6] = 
{
	MotionVectorsSettings_t1700962583::get_offset_of_sourceOpacity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MotionVectorsSettings_t1700962583::get_offset_of_motionImageOpacity_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MotionVectorsSettings_t1700962583::get_offset_of_motionImageAmplitude_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MotionVectorsSettings_t1700962583::get_offset_of_motionVectorsOpacity_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MotionVectorsSettings_t1700962583::get_offset_of_motionVectorsResolution_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MotionVectorsSettings_t1700962583::get_offset_of_motionVectorsAmplitude_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1963 = { sizeof (Mode_t986082665)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1963[11] = 
{
	Mode_t986082665::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1964 = { sizeof (Settings_t3296188159)+ sizeof (RuntimeObject), sizeof(Settings_t3296188159 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1964[3] = 
{
	Settings_t3296188159::get_offset_of_mode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3296188159::get_offset_of_depth_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3296188159::get_offset_of_motionVectors_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1965 = { sizeof (ChromaticAberrationModel_t3898313384), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1965[1] = 
{
	ChromaticAberrationModel_t3898313384::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1966 = { sizeof (Settings_t1168376358)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1966[2] = 
{
	Settings_t1168376358::get_offset_of_spectralTexture_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1168376358::get_offset_of_intensity_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1967 = { sizeof (ColorGradingModel_t2152456580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1967[3] = 
{
	ColorGradingModel_t2152456580::get_offset_of_m_Settings_1(),
	ColorGradingModel_t2152456580::get_offset_of_U3CisDirtyU3Ek__BackingField_2(),
	ColorGradingModel_t2152456580::get_offset_of_U3CbakedLutU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1968 = { sizeof (Tonemapper_t2498069022)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1968[4] = 
{
	Tonemapper_t2498069022::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1969 = { sizeof (TonemappingSettings_t1819353678)+ sizeof (RuntimeObject), sizeof(TonemappingSettings_t1819353678 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1969[7] = 
{
	TonemappingSettings_t1819353678::get_offset_of_tonemapper_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TonemappingSettings_t1819353678::get_offset_of_neutralBlackIn_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TonemappingSettings_t1819353678::get_offset_of_neutralWhiteIn_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TonemappingSettings_t1819353678::get_offset_of_neutralBlackOut_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TonemappingSettings_t1819353678::get_offset_of_neutralWhiteOut_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TonemappingSettings_t1819353678::get_offset_of_neutralWhiteLevel_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TonemappingSettings_t1819353678::get_offset_of_neutralWhiteClip_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1970 = { sizeof (BasicSettings_t4041566386)+ sizeof (RuntimeObject), sizeof(BasicSettings_t4041566386 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1970[6] = 
{
	BasicSettings_t4041566386::get_offset_of_postExposure_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BasicSettings_t4041566386::get_offset_of_temperature_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BasicSettings_t4041566386::get_offset_of_tint_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BasicSettings_t4041566386::get_offset_of_hueShift_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BasicSettings_t4041566386::get_offset_of_saturation_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BasicSettings_t4041566386::get_offset_of_contrast_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1971 = { sizeof (ChannelMixerSettings_t3706030562)+ sizeof (RuntimeObject), sizeof(ChannelMixerSettings_t3706030562 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1971[4] = 
{
	ChannelMixerSettings_t3706030562::get_offset_of_red_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ChannelMixerSettings_t3706030562::get_offset_of_green_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ChannelMixerSettings_t3706030562::get_offset_of_blue_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ChannelMixerSettings_t3706030562::get_offset_of_currentEditingChannel_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1972 = { sizeof (LogWheelsSettings_t3976262534)+ sizeof (RuntimeObject), sizeof(LogWheelsSettings_t3976262534 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1972[3] = 
{
	LogWheelsSettings_t3976262534::get_offset_of_slope_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LogWheelsSettings_t3976262534::get_offset_of_power_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LogWheelsSettings_t3976262534::get_offset_of_offset_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1973 = { sizeof (LinearWheelsSettings_t1271932265)+ sizeof (RuntimeObject), sizeof(LinearWheelsSettings_t1271932265 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1973[3] = 
{
	LinearWheelsSettings_t1271932265::get_offset_of_lift_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LinearWheelsSettings_t1271932265::get_offset_of_gamma_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LinearWheelsSettings_t1271932265::get_offset_of_gain_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1974 = { sizeof (ColorWheelMode_t1793246490)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1974[3] = 
{
	ColorWheelMode_t1793246490::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1975 = { sizeof (ColorWheelsSettings_t2818463061)+ sizeof (RuntimeObject), sizeof(ColorWheelsSettings_t2818463061 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1975[3] = 
{
	ColorWheelsSettings_t2818463061::get_offset_of_mode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ColorWheelsSettings_t2818463061::get_offset_of_log_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ColorWheelsSettings_t2818463061::get_offset_of_linear_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1976 = { sizeof (CurvesSettings_t2104131702)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1976[13] = 
{
	CurvesSettings_t2104131702::get_offset_of_master_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t2104131702::get_offset_of_red_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t2104131702::get_offset_of_green_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t2104131702::get_offset_of_blue_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t2104131702::get_offset_of_hueVShue_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t2104131702::get_offset_of_hueVSsat_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t2104131702::get_offset_of_satVSsat_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t2104131702::get_offset_of_lumVSsat_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t2104131702::get_offset_of_e_CurrentEditingCurve_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t2104131702::get_offset_of_e_CurveY_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t2104131702::get_offset_of_e_CurveR_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t2104131702::get_offset_of_e_CurveG_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CurvesSettings_t2104131702::get_offset_of_e_CurveB_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1977 = { sizeof (Settings_t1594407042)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1977[5] = 
{
	Settings_t1594407042::get_offset_of_tonemapping_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1594407042::get_offset_of_basic_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1594407042::get_offset_of_channelMixer_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1594407042::get_offset_of_colorWheels_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t1594407042::get_offset_of_curves_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1978 = { sizeof (DepthOfFieldModel_t1382761555), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1978[1] = 
{
	DepthOfFieldModel_t1382761555::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1979 = { sizeof (KernelSize_t1986613730)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1979[5] = 
{
	KernelSize_t1986613730::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1980 = { sizeof (Settings_t380900351)+ sizeof (RuntimeObject), sizeof(Settings_t380900351_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1980[5] = 
{
	Settings_t380900351::get_offset_of_focusDistance_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t380900351::get_offset_of_aperture_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t380900351::get_offset_of_focalLength_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t380900351::get_offset_of_useCameraFov_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t380900351::get_offset_of_kernelSize_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1981 = { sizeof (DitheringModel_t866658367), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1981[1] = 
{
	DitheringModel_t866658367::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1982 = { sizeof (Settings_t3263265019)+ sizeof (RuntimeObject), sizeof(Settings_t3263265019 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1983 = { sizeof (EyeAdaptationModel_t3960020221), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1983[1] = 
{
	EyeAdaptationModel_t3960020221::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1984 = { sizeof (EyeAdaptationType_t3992474634)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1984[3] = 
{
	EyeAdaptationType_t3992474634::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1985 = { sizeof (Settings_t3414631057)+ sizeof (RuntimeObject), sizeof(Settings_t3414631057_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1985[11] = 
{
	Settings_t3414631057::get_offset_of_lowPercent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3414631057::get_offset_of_highPercent_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3414631057::get_offset_of_minLuminance_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3414631057::get_offset_of_maxLuminance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3414631057::get_offset_of_keyValue_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3414631057::get_offset_of_dynamicKeyValue_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3414631057::get_offset_of_adaptationType_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3414631057::get_offset_of_speedUp_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3414631057::get_offset_of_speedDown_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3414631057::get_offset_of_logMin_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t3414631057::get_offset_of_logMax_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1986 = { sizeof (FogModel_t2165009903), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1986[1] = 
{
	FogModel_t2165009903::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1987 = { sizeof (Settings_t971704575)+ sizeof (RuntimeObject), sizeof(Settings_t971704575_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1987[1] = 
{
	Settings_t971704575::get_offset_of_excludeSkybox_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1988 = { sizeof (GrainModel_t4022489702), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1988[1] = 
{
	GrainModel_t4022489702::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1989 = { sizeof (Settings_t184448608)+ sizeof (RuntimeObject), sizeof(Settings_t184448608_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1989[4] = 
{
	Settings_t184448608::get_offset_of_colored_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t184448608::get_offset_of_intensity_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t184448608::get_offset_of_size_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t184448608::get_offset_of_luminanceContribution_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1990 = { sizeof (MotionBlurModel_t4023776514), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1990[1] = 
{
	MotionBlurModel_t4023776514::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1991 = { sizeof (Settings_t2102522116)+ sizeof (RuntimeObject), sizeof(Settings_t2102522116 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1991[3] = 
{
	Settings_t2102522116::get_offset_of_shutterAngle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t2102522116::get_offset_of_sampleCount_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t2102522116::get_offset_of_frameBlending_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1992 = { sizeof (ScreenSpaceReflectionModel_t3280563098), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1992[1] = 
{
	ScreenSpaceReflectionModel_t3280563098::get_offset_of_m_Settings_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1993 = { sizeof (SSRResolution_t4146867)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1993[3] = 
{
	SSRResolution_t4146867::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1994 = { sizeof (SSRReflectionBlendType_t952220883)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1994[3] = 
{
	SSRReflectionBlendType_t952220883::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1995 = { sizeof (IntensitySettings_t3320342945)+ sizeof (RuntimeObject), sizeof(IntensitySettings_t3320342945 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1995[4] = 
{
	IntensitySettings_t3320342945::get_offset_of_reflectionMultiplier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntensitySettings_t3320342945::get_offset_of_fadeDistance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntensitySettings_t3320342945::get_offset_of_fresnelFade_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntensitySettings_t3320342945::get_offset_of_fresnelFadePower_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1996 = { sizeof (ReflectionSettings_t1773490745)+ sizeof (RuntimeObject), sizeof(ReflectionSettings_t1773490745_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1996[8] = 
{
	ReflectionSettings_t1773490745::get_offset_of_blendType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ReflectionSettings_t1773490745::get_offset_of_reflectionQuality_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ReflectionSettings_t1773490745::get_offset_of_maxDistance_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ReflectionSettings_t1773490745::get_offset_of_iterationCount_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ReflectionSettings_t1773490745::get_offset_of_stepSize_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ReflectionSettings_t1773490745::get_offset_of_widthModifier_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ReflectionSettings_t1773490745::get_offset_of_reflectionBlur_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ReflectionSettings_t1773490745::get_offset_of_reflectBackfaces_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1997 = { sizeof (ScreenEdgeMask_t2869591496)+ sizeof (RuntimeObject), sizeof(ScreenEdgeMask_t2869591496 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1997[1] = 
{
	ScreenEdgeMask_t2869591496::get_offset_of_intensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1998 = { sizeof (Settings_t2290238256)+ sizeof (RuntimeObject), sizeof(Settings_t2290238256_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1998[3] = 
{
	Settings_t2290238256::get_offset_of_reflection_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t2290238256::get_offset_of_intensity_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Settings_t2290238256::get_offset_of_screenEdgeMask_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1999 = { sizeof (UserLutModel_t3648333993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1999[1] = 
{
	UserLutModel_t3648333993::get_offset_of_m_Settings_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
