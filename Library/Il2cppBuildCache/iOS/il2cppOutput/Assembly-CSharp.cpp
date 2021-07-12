#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// RandomGenerator
struct RandomGenerator_t2F6A5350DF204D9BBC3D52565DCE72375E72CBCE;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Scr_menuButton
struct Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// scr_button
struct scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039;
// scr_controller
struct scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16;
// scr_draw_score
struct scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC;
// scr_farmButton
struct scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204;
// scr_gameController
struct scr_gameController_t1443F1CDF99C220D3F3CB46FEBD800B58290CBB1;
// scr_point_icon
struct scr_point_icon_t8AD6F5A027CAC9C703E85105EC8593B5D64A731D;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral4915704528DF7558FBFB7D37692B8F18B5BCF2AE;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// RandomGenerator
struct RandomGenerator_t2F6A5350DF204D9BBC3D52565DCE72375E72CBCE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Random RandomGenerator::ran
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___ran_4;

public:
	inline static int32_t get_offset_of_ran_4() { return static_cast<int32_t>(offsetof(RandomGenerator_t2F6A5350DF204D9BBC3D52565DCE72375E72CBCE, ___ran_4)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_ran_4() const { return ___ran_4; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_ran_4() { return &___ran_4; }
	inline void set_ran_4(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___ran_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ran_4), (void*)value);
	}
};


// Scr_menuButton
struct Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer Scr_menuButton::spr
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spr_4;
	// UnityEngine.Sprite Scr_menuButton::butt_up
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___butt_up_5;
	// UnityEngine.Sprite Scr_menuButton::butt_down
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___butt_down_6;
	// UnityEngine.GameObject Scr_menuButton::controller
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___controller_7;
	// scr_controller Scr_menuButton::cont
	scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * ___cont_8;

public:
	inline static int32_t get_offset_of_spr_4() { return static_cast<int32_t>(offsetof(Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C, ___spr_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spr_4() const { return ___spr_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spr_4() { return &___spr_4; }
	inline void set_spr_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spr_4), (void*)value);
	}

	inline static int32_t get_offset_of_butt_up_5() { return static_cast<int32_t>(offsetof(Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C, ___butt_up_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_butt_up_5() const { return ___butt_up_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_butt_up_5() { return &___butt_up_5; }
	inline void set_butt_up_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___butt_up_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___butt_up_5), (void*)value);
	}

	inline static int32_t get_offset_of_butt_down_6() { return static_cast<int32_t>(offsetof(Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C, ___butt_down_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_butt_down_6() const { return ___butt_down_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_butt_down_6() { return &___butt_down_6; }
	inline void set_butt_down_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___butt_down_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___butt_down_6), (void*)value);
	}

	inline static int32_t get_offset_of_controller_7() { return static_cast<int32_t>(offsetof(Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C, ___controller_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_controller_7() const { return ___controller_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_controller_7() { return &___controller_7; }
	inline void set_controller_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___controller_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_7), (void*)value);
	}

	inline static int32_t get_offset_of_cont_8() { return static_cast<int32_t>(offsetof(Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C, ___cont_8)); }
	inline scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * get_cont_8() const { return ___cont_8; }
	inline scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 ** get_address_of_cont_8() { return &___cont_8; }
	inline void set_cont_8(scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * value)
	{
		___cont_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cont_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// scr_button
struct scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer scr_button::spr
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spr_4;
	// UnityEngine.Sprite scr_button::butt_up
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___butt_up_5;
	// UnityEngine.Sprite scr_button::butt_down
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___butt_down_6;
	// UnityEngine.Sprite scr_button::critbutt_down
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___critbutt_down_7;
	// UnityEngine.Sprite scr_button::critbutt_up
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___critbutt_up_8;
	// UnityEngine.GameObject scr_button::controller
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___controller_9;
	// scr_controller scr_button::cont
	scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * ___cont_10;
	// System.Boolean scr_button::special
	bool ___special_11;
	// System.Int32 scr_button::ran_n
	int32_t ___ran_n_12;
	// System.Random scr_button::ran
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___ran_13;

public:
	inline static int32_t get_offset_of_spr_4() { return static_cast<int32_t>(offsetof(scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039, ___spr_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spr_4() const { return ___spr_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spr_4() { return &___spr_4; }
	inline void set_spr_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spr_4), (void*)value);
	}

	inline static int32_t get_offset_of_butt_up_5() { return static_cast<int32_t>(offsetof(scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039, ___butt_up_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_butt_up_5() const { return ___butt_up_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_butt_up_5() { return &___butt_up_5; }
	inline void set_butt_up_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___butt_up_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___butt_up_5), (void*)value);
	}

	inline static int32_t get_offset_of_butt_down_6() { return static_cast<int32_t>(offsetof(scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039, ___butt_down_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_butt_down_6() const { return ___butt_down_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_butt_down_6() { return &___butt_down_6; }
	inline void set_butt_down_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___butt_down_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___butt_down_6), (void*)value);
	}

	inline static int32_t get_offset_of_critbutt_down_7() { return static_cast<int32_t>(offsetof(scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039, ___critbutt_down_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_critbutt_down_7() const { return ___critbutt_down_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_critbutt_down_7() { return &___critbutt_down_7; }
	inline void set_critbutt_down_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___critbutt_down_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___critbutt_down_7), (void*)value);
	}

	inline static int32_t get_offset_of_critbutt_up_8() { return static_cast<int32_t>(offsetof(scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039, ___critbutt_up_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_critbutt_up_8() const { return ___critbutt_up_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_critbutt_up_8() { return &___critbutt_up_8; }
	inline void set_critbutt_up_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___critbutt_up_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___critbutt_up_8), (void*)value);
	}

	inline static int32_t get_offset_of_controller_9() { return static_cast<int32_t>(offsetof(scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039, ___controller_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_controller_9() const { return ___controller_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_controller_9() { return &___controller_9; }
	inline void set_controller_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___controller_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_9), (void*)value);
	}

	inline static int32_t get_offset_of_cont_10() { return static_cast<int32_t>(offsetof(scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039, ___cont_10)); }
	inline scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * get_cont_10() const { return ___cont_10; }
	inline scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 ** get_address_of_cont_10() { return &___cont_10; }
	inline void set_cont_10(scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * value)
	{
		___cont_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cont_10), (void*)value);
	}

	inline static int32_t get_offset_of_special_11() { return static_cast<int32_t>(offsetof(scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039, ___special_11)); }
	inline bool get_special_11() const { return ___special_11; }
	inline bool* get_address_of_special_11() { return &___special_11; }
	inline void set_special_11(bool value)
	{
		___special_11 = value;
	}

	inline static int32_t get_offset_of_ran_n_12() { return static_cast<int32_t>(offsetof(scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039, ___ran_n_12)); }
	inline int32_t get_ran_n_12() const { return ___ran_n_12; }
	inline int32_t* get_address_of_ran_n_12() { return &___ran_n_12; }
	inline void set_ran_n_12(int32_t value)
	{
		___ran_n_12 = value;
	}

	inline static int32_t get_offset_of_ran_13() { return static_cast<int32_t>(offsetof(scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039, ___ran_13)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_ran_13() const { return ___ran_13; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_ran_13() { return &___ran_13; }
	inline void set_ran_13(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___ran_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ran_13), (void*)value);
	}
};


// scr_controller
struct scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 scr_controller::score
	int32_t ___score_4;

public:
	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16, ___score_4)); }
	inline int32_t get_score_4() const { return ___score_4; }
	inline int32_t* get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(int32_t value)
	{
		___score_4 = value;
	}
};


// scr_draw_score
struct scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform scr_draw_score::t
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t_4;
	// UnityEngine.UI.Text scr_draw_score::txt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txt_5;
	// UnityEngine.GameObject scr_draw_score::controller
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___controller_6;
	// scr_controller scr_draw_score::cont
	scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * ___cont_7;
	// UnityEngine.GameObject scr_draw_score::icon
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___icon_8;
	// UnityEngine.Transform scr_draw_score::icon_t
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___icon_t_9;
	// System.Single scr_draw_score::ico_origX
	float ___ico_origX_10;
	// UnityEngine.Camera scr_draw_score::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_11;

public:
	inline static int32_t get_offset_of_t_4() { return static_cast<int32_t>(offsetof(scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC, ___t_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_t_4() const { return ___t_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_t_4() { return &___t_4; }
	inline void set_t_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___t_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_4), (void*)value);
	}

	inline static int32_t get_offset_of_txt_5() { return static_cast<int32_t>(offsetof(scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC, ___txt_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txt_5() const { return ___txt_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txt_5() { return &___txt_5; }
	inline void set_txt_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txt_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txt_5), (void*)value);
	}

	inline static int32_t get_offset_of_controller_6() { return static_cast<int32_t>(offsetof(scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC, ___controller_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_controller_6() const { return ___controller_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_controller_6() { return &___controller_6; }
	inline void set_controller_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___controller_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_6), (void*)value);
	}

	inline static int32_t get_offset_of_cont_7() { return static_cast<int32_t>(offsetof(scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC, ___cont_7)); }
	inline scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * get_cont_7() const { return ___cont_7; }
	inline scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 ** get_address_of_cont_7() { return &___cont_7; }
	inline void set_cont_7(scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * value)
	{
		___cont_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cont_7), (void*)value);
	}

	inline static int32_t get_offset_of_icon_8() { return static_cast<int32_t>(offsetof(scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC, ___icon_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_icon_8() const { return ___icon_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_icon_8() { return &___icon_8; }
	inline void set_icon_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___icon_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_8), (void*)value);
	}

	inline static int32_t get_offset_of_icon_t_9() { return static_cast<int32_t>(offsetof(scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC, ___icon_t_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_icon_t_9() const { return ___icon_t_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_icon_t_9() { return &___icon_t_9; }
	inline void set_icon_t_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___icon_t_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_t_9), (void*)value);
	}

	inline static int32_t get_offset_of_ico_origX_10() { return static_cast<int32_t>(offsetof(scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC, ___ico_origX_10)); }
	inline float get_ico_origX_10() const { return ___ico_origX_10; }
	inline float* get_address_of_ico_origX_10() { return &___ico_origX_10; }
	inline void set_ico_origX_10(float value)
	{
		___ico_origX_10 = value;
	}

	inline static int32_t get_offset_of_cam_11() { return static_cast<int32_t>(offsetof(scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC, ___cam_11)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_11() const { return ___cam_11; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_11() { return &___cam_11; }
	inline void set_cam_11(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_11), (void*)value);
	}
};


// scr_farmButton
struct scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer scr_farmButton::spr
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spr_4;
	// UnityEngine.Sprite scr_farmButton::buttUp
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___buttUp_5;
	// UnityEngine.Sprite scr_farmButton::buttDown
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___buttDown_6;
	// UnityEngine.GameObject scr_farmButton::controller
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___controller_7;
	// scr_controller scr_farmButton::cont
	scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * ___cont_8;

public:
	inline static int32_t get_offset_of_spr_4() { return static_cast<int32_t>(offsetof(scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204, ___spr_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spr_4() const { return ___spr_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spr_4() { return &___spr_4; }
	inline void set_spr_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spr_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttUp_5() { return static_cast<int32_t>(offsetof(scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204, ___buttUp_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_buttUp_5() const { return ___buttUp_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_buttUp_5() { return &___buttUp_5; }
	inline void set_buttUp_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___buttUp_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttUp_5), (void*)value);
	}

	inline static int32_t get_offset_of_buttDown_6() { return static_cast<int32_t>(offsetof(scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204, ___buttDown_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_buttDown_6() const { return ___buttDown_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_buttDown_6() { return &___buttDown_6; }
	inline void set_buttDown_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___buttDown_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttDown_6), (void*)value);
	}

	inline static int32_t get_offset_of_controller_7() { return static_cast<int32_t>(offsetof(scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204, ___controller_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_controller_7() const { return ___controller_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_controller_7() { return &___controller_7; }
	inline void set_controller_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___controller_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_7), (void*)value);
	}

	inline static int32_t get_offset_of_cont_8() { return static_cast<int32_t>(offsetof(scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204, ___cont_8)); }
	inline scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * get_cont_8() const { return ___cont_8; }
	inline scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 ** get_address_of_cont_8() { return &___cont_8; }
	inline void set_cont_8(scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * value)
	{
		___cont_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cont_8), (void*)value);
	}
};


// scr_gameController
struct scr_gameController_t1443F1CDF99C220D3F3CB46FEBD800B58290CBB1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// scr_point_icon
struct scr_point_icon_t8AD6F5A027CAC9C703E85105EC8593B5D64A731D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<scr_controller>()
inline scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m6B3C9B5DDE6CDE2A041D05C4F3BE4A3D3D745B70 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method);
// System.Int32 scr_button::RandomNumber(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t scr_button_RandomNumber_mE3299BCD1BEB28E7A25938DD813E6E74151A6CE6 (scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039 * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_UnloadSceneAsync_mF564BF92447F58313A518206EE15E5DEED0448EF (String_t* ___sceneName0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RandomGenerator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomGenerator_Awake_m6B3B72513154710A00F01C72D6BEB64929FECCB9 (RandomGenerator_t2F6A5350DF204D9BBC3D52565DCE72375E72CBCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(transform.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RandomGenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomGenerator_Start_m2A821DC49666F77A0B9831D32946FF34179EEA4A (RandomGenerator_t2F6A5350DF204D9BBC3D52565DCE72375E72CBCE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RandomGenerator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomGenerator_Update_m45C8B8ACFFB1F35F756F2AA88F062AADF0BB8F14 (RandomGenerator_t2F6A5350DF204D9BBC3D52565DCE72375E72CBCE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Int32 RandomGenerator::RandomNumber(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RandomGenerator_RandomNumber_mA56671A407EEC409AAC547B4512A4AA2A251948E (RandomGenerator_t2F6A5350DF204D9BBC3D52565DCE72375E72CBCE * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	{
		// return ran.Next(min, max);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = __this->get_ran_4();
		int32_t L_1 = ___min0;
		int32_t L_2 = ___max1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void RandomGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomGenerator__ctor_m6B3334D9DCC5A64572341AC30AC51B71B8DF957B (RandomGenerator_t2F6A5350DF204D9BBC3D52565DCE72375E72CBCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly System.Random ran = new System.Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		__this->set_ran_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Scr_menuButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scr_menuButton_Start_mE6240B1241FC49CAB263CEEB244ABD4B9FBF055D (Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cont = controller.GetComponent<scr_controller>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_controller_7();
		NullCheck(L_0);
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_1;
		L_1 = GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0(L_0, /*hidden argument*/GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0_RuntimeMethod_var);
		__this->set_cont_8(L_1);
		// }
		return;
	}
}
// System.Void Scr_menuButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scr_menuButton_Update_m02317731093AC58E6DCB0701CE88EC9914E46D5A (Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Scr_menuButton::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scr_menuButton_OnMouseDown_mA9176ABF6567689B929F99594AAC359628DB5B7C (Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C * __this, const RuntimeMethod* method)
{
	{
		// spr.sprite = butt_down;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_butt_down_6();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Scr_menuButton::OnTouchStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scr_menuButton_OnTouchStart_m5BDBCB10D09BD0510C26DBC5F9BC6A2D2C2F59CF (Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C * __this, const RuntimeMethod* method)
{
	{
		// spr.sprite = butt_down;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_butt_down_6();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Scr_menuButton::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scr_menuButton_OnMouseUp_m7736C1210B8ED689021B4F40E122E025BCBE4B85 (Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spr.sprite = butt_up;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_butt_up_5();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName:"Menu", LoadSceneMode.Single);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6B3C9B5DDE6CDE2A041D05C4F3BE4A3D3D745B70(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Scr_menuButton::OnTouchEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scr_menuButton_OnTouchEnd_m3535B6BCA990655158DF8CD60D783BE600C5C603 (Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spr.sprite = butt_up;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_butt_up_5();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName:"Menu", LoadSceneMode.Single);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6B3C9B5DDE6CDE2A041D05C4F3BE4A3D3D745B70(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Scr_menuButton::OnMouseExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scr_menuButton_OnMouseExit_mF2E37C6C75C286D936F4CE72B68F3238318EC5EA (Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spr.sprite = butt_up;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_butt_up_5();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName:"Menu", LoadSceneMode.Single);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6B3C9B5DDE6CDE2A041D05C4F3BE4A3D3D745B70(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Scr_menuButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scr_menuButton__ctor_m52FE830D2CC9CF3BA58DDF0FBA974B773A774115 (Scr_menuButton_t1DCE3112A56EFB78549F80E34D5450F99D82FA3C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scr_button::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_button_Start_m268FB82C8C763F1BC6418E51592F5A1DD8DF7DFF (scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cont = controller.GetComponent<scr_controller>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_controller_9();
		NullCheck(L_0);
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_1;
		L_1 = GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0(L_0, /*hidden argument*/GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0_RuntimeMethod_var);
		__this->set_cont_10(L_1);
		// special = false;
		__this->set_special_11((bool)0);
		// ran_n = 1000;
		__this->set_ran_n_12(((int32_t)1000));
		// }
		return;
	}
}
// System.Int32 scr_button::RandomNumber(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t scr_button_RandomNumber_mE3299BCD1BEB28E7A25938DD813E6E74151A6CE6 (scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039 * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	{
		// return ran.Next(min, max);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = __this->get_ran_13();
		int32_t L_1 = ___min0;
		int32_t L_2 = ___max1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void scr_button::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_button_Update_mDEFAD6E851EE7B303FC9D05ED05D3231271578B1 (scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039 * __this, const RuntimeMethod* method)
{
	{
		// if (RandomNumber(0,ran_n) == 0) {
		int32_t L_0 = __this->get_ran_n_12();
		int32_t L_1;
		L_1 = scr_button_RandomNumber_mE3299BCD1BEB28E7A25938DD813E6E74151A6CE6(__this, 0, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		// special = true;
		__this->set_special_11((bool)1);
		// spr.sprite = critbutt_up;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = __this->get_critbutt_up_8();
		NullCheck(L_2);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// if (special){
		bool L_4 = __this->get_special_11();
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// spr.sprite = critbutt_up;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = __this->get_critbutt_up_8();
		NullCheck(L_5);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void scr_button::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_button_OnMouseDown_mD997D753013E745BACC53867F934A7E9E6FF4067 (scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039 * __this, const RuntimeMethod* method)
{
	{
		// if (!special){
		bool L_0 = __this->get_special_11();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// spr.sprite = butt_down;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = __this->get_butt_down_6();
		NullCheck(L_1);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_1, L_2, /*hidden argument*/NULL);
		// cont.score++;
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_3 = __this->get_cont_10();
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_score_4();
		NullCheck(L_4);
		L_4->set_score_4(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
	}

IL_002c:
	{
		// if (special){
		bool L_6 = __this->get_special_11();
		if (!L_6)
		{
			goto IL_0099;
		}
	}
	{
		// spr.sprite = critbutt_down;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_7 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = __this->get_critbutt_down_7();
		NullCheck(L_7);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_7, L_8, /*hidden argument*/NULL);
		// if (cont.score<50){
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_9 = __this->get_cont_10();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_score_4();
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)50))))
		{
			goto IL_0069;
		}
	}
	{
		// cont.score+=5;
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_11 = __this->get_cont_10();
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_score_4();
		NullCheck(L_12);
		L_12->set_score_4(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)5)));
		// }
		goto IL_0092;
	}

IL_0069:
	{
		// cont.score+=(int)(cont.score*.1);
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_14 = __this->get_cont_10();
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_score_4();
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_17 = __this->get_cont_10();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_score_4();
		NullCheck(L_15);
		L_15->set_score_4(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply((double)((double)((double)L_18)), (double)(0.10000000000000001)))))));
	}

IL_0092:
	{
		// special = false;
		__this->set_special_11((bool)0);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void scr_button::OnTouchStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_button_OnTouchStart_mA830140562EF8E40F39FAE9DDFD460632F4DF915 (scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039 * __this, const RuntimeMethod* method)
{
	{
		// if (!special){
		bool L_0 = __this->get_special_11();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// spr.sprite = butt_down;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = __this->get_butt_down_6();
		NullCheck(L_1);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_1, L_2, /*hidden argument*/NULL);
		// cont.score++;
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_3 = __this->get_cont_10();
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_score_4();
		NullCheck(L_4);
		L_4->set_score_4(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
	}

IL_002c:
	{
		// if (special){
		bool L_6 = __this->get_special_11();
		if (!L_6)
		{
			goto IL_0099;
		}
	}
	{
		// spr.sprite = critbutt_down;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_7 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = __this->get_critbutt_down_7();
		NullCheck(L_7);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_7, L_8, /*hidden argument*/NULL);
		// if (cont.score<50){
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_9 = __this->get_cont_10();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_score_4();
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)50))))
		{
			goto IL_0069;
		}
	}
	{
		// cont.score+=5;
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_11 = __this->get_cont_10();
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_score_4();
		NullCheck(L_12);
		L_12->set_score_4(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)5)));
		// }
		goto IL_0092;
	}

IL_0069:
	{
		// cont.score+=(int)(cont.score*.1);
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_14 = __this->get_cont_10();
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_score_4();
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_17 = __this->get_cont_10();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_score_4();
		NullCheck(L_15);
		L_15->set_score_4(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply((double)((double)((double)L_18)), (double)(0.10000000000000001)))))));
	}

IL_0092:
	{
		// special = false;
		__this->set_special_11((bool)0);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void scr_button::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_button_OnMouseUp_m33E87318B81FB8E3DBF3B06AE342C61D4CDD7510 (scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039 * __this, const RuntimeMethod* method)
{
	{
		// spr.sprite = butt_up;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_butt_up_5();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void scr_button::OnTouchEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_button_OnTouchEnd_mC08D2A61E874B46F6E250F2DE1D76B938546E78A (scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039 * __this, const RuntimeMethod* method)
{
	{
		// spr.sprite = butt_up;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_butt_up_5();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void scr_button::OnMouseExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_button_OnMouseExit_mDAA81E48B1DF6B27C179482E4D2DE74D7C737007 (scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039 * __this, const RuntimeMethod* method)
{
	{
		// spr.sprite = butt_up;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_butt_up_5();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void scr_button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_button__ctor_mD65328207A599D2AFE26042CD541CEAF69DE900B (scr_button_tB8CED58A5A47D79557402B97C27CF1A195C1E039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly System.Random ran = new System.Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		__this->set_ran_13(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scr_controller::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_controller_Awake_m00361591A6693CC71FF10ABAC7789304A47CE05E (scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(transform.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void scr_controller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_controller_Start_m7564C2672B42788B140B5E241E82FFAAAAC7E562 (scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4915704528DF7558FBFB7D37692B8F18B5BCF2AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.UnloadSceneAsync(sceneName:"Menu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0;
		L_0 = SceneManager_UnloadSceneAsync_mF564BF92447F58313A518206EE15E5DEED0448EF(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, /*hidden argument*/NULL);
		// SceneManager.UnloadSceneAsync(sceneName:"Farm");
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_1;
		L_1 = SceneManager_UnloadSceneAsync_mF564BF92447F58313A518206EE15E5DEED0448EF(_stringLiteral4915704528DF7558FBFB7D37692B8F18B5BCF2AE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void scr_controller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_controller_Update_mA7FB69D98BBDF6EEB30022523F7DFC581D7A26D7 (scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void scr_controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_controller__ctor_m07006B38806B14147877A05AA3E89D181EE513CF (scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scr_draw_score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_draw_score_Start_m755EAD38716D930CB7839225596CFFD3BA86397D (scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cont = controller.GetComponent<scr_controller>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_controller_6();
		NullCheck(L_0);
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_1;
		L_1 = GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0(L_0, /*hidden argument*/GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0_RuntimeMethod_var);
		__this->set_cont_7(L_1);
		// icon_t = icon.GetComponent<Transform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_icon_8();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_2, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		__this->set_icon_t_9(L_3);
		// ico_origX = icon_t.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_icon_t_9();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		__this->set_ico_origX_10(L_6);
		// }
		return;
	}
}
// System.Void scr_draw_score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_draw_score_Update_m00E1F69F74DED78AAA36631F6DFCB8FFAA2E8F09 (scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int points = cont.score;
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_0 = __this->get_cont_7();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_score_4();
		V_0 = L_1;
		// txt.text = points.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_txt_5();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// float txt_w = txt.preferredWidth;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_txt_5();
		NullCheck(L_4);
		float L_5;
		L_5 = VirtFuncInvoker0< float >::Invoke(79 /* System.Single UnityEngine.UI.Text::get_preferredWidth() */, L_4);
		// }
		return;
	}
}
// System.Single scr_draw_score::pixelToWorld(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float scr_draw_score_pixelToWorld_mBE9B41C0CFAA0B0102352E931E80C6A9461F8C3A (scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC * __this, float ___len0, const RuntimeMethod* method)
{
	{
		// ret = cam.ScreenToWorldPoint(new Vector3((Screen.width / 2) + len, 0, 0)).x;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_cam_11();
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_2 = ___len0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), ((float)il2cpp_codegen_add((float)((float)((float)((int32_t)((int32_t)L_1/(int32_t)2)))), (float)L_2)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		// return ret;
		return L_5;
	}
}
// System.Single scr_draw_score::worldToPixel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float scr_draw_score_worldToPixel_m45F9C2BDD7A6322277C54C85E1E07BB06F44B9D1 (scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC * __this, float ___len0, const RuntimeMethod* method)
{
	{
		// ret = cam.WorldToScreenPoint(new Vector3((Screen.width / 2) + len, 0, 0)).x;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_cam_11();
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_2 = ___len0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), ((float)il2cpp_codegen_add((float)((float)((float)((int32_t)((int32_t)L_1/(int32_t)2)))), (float)L_2)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_0, L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		// return ret;
		return L_5;
	}
}
// System.Void scr_draw_score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_draw_score__ctor_m2117F93DB7BA3ECEE44E76B3865918F423585FC7 (scr_draw_score_t7D415355F262394B978B21962B0EB2EF1EC1DFEC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scr_farmButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_farmButton_Start_mC3D773715C07558FF284A2AEC96944C79208C5CF (scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cont = controller.GetComponent<scr_controller>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_controller_7();
		NullCheck(L_0);
		scr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16 * L_1;
		L_1 = GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0(L_0, /*hidden argument*/GameObject_GetComponent_Tisscr_controller_t93A49F2317ACB884C5EB4F884A9BC7E5F08F7B16_m4F3AA4F65333F9BC58199BB2972008F2B7A735E0_RuntimeMethod_var);
		__this->set_cont_8(L_1);
		// }
		return;
	}
}
// System.Void scr_farmButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_farmButton_Update_mAAE0F4A3C255A94D511452C1C9CB613E92930C7C (scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void scr_farmButton::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_farmButton_OnMouseDown_m3AEC0D01A42525BC0EDA4A69C9381D597EA936A6 (scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204 * __this, const RuntimeMethod* method)
{
	{
		// spr.sprite = buttDown;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_buttDown_6();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void scr_farmButton::OnTouchStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_farmButton_OnTouchStart_m4DD2C3EA38C3742653A53B64FD5EA121F0041BEA (scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204 * __this, const RuntimeMethod* method)
{
	{
		// spr.sprite = buttDown;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_buttDown_6();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void scr_farmButton::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_farmButton_OnMouseUp_m93E6297E0C15BA8ABCFF07B721B517E9371E1B66 (scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4915704528DF7558FBFB7D37692B8F18B5BCF2AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spr.sprite = buttUp;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_buttUp_5();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName:"Farm", LoadSceneMode.Single);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6B3C9B5DDE6CDE2A041D05C4F3BE4A3D3D745B70(_stringLiteral4915704528DF7558FBFB7D37692B8F18B5BCF2AE, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void scr_farmButton::OnTouchEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_farmButton_OnTouchEnd_m103D3B674B6754217AA02DA6E0B8A5A78E61A641 (scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4915704528DF7558FBFB7D37692B8F18B5BCF2AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spr.sprite = buttUp;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_buttUp_5();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName:"Farm", LoadSceneMode.Single);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6B3C9B5DDE6CDE2A041D05C4F3BE4A3D3D745B70(_stringLiteral4915704528DF7558FBFB7D37692B8F18B5BCF2AE, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void scr_farmButton::OnMouseExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_farmButton_OnMouseExit_m31F969185BEBA3EBB27C27818E082BF9BFC08A31 (scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4915704528DF7558FBFB7D37692B8F18B5BCF2AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spr.sprite = buttUp;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_buttUp_5();
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName:"Farm", LoadSceneMode.Single);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6B3C9B5DDE6CDE2A041D05C4F3BE4A3D3D745B70(_stringLiteral4915704528DF7558FBFB7D37692B8F18B5BCF2AE, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void scr_farmButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_farmButton__ctor_mAF9BFA861149A7AEB11CDCD4DEB835C97B63FC06 (scr_farmButton_t1660ED1224D3F2532B641BD8015A8C85BDA2A204 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scr_gameController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_gameController_Start_m641378B995B9D644D2DA1FB78B55F7E8D40C9C7A (scr_gameController_t1443F1CDF99C220D3F3CB46FEBD800B58290CBB1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void scr_gameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_gameController_Update_m5AF640BB58F1F3DE4AD1788BBD0D30765A020242 (scr_gameController_t1443F1CDF99C220D3F3CB46FEBD800B58290CBB1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void scr_gameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_gameController__ctor_mB80FEE3964EE0653655CF4A76DCEFC9348E3F475 (scr_gameController_t1443F1CDF99C220D3F3CB46FEBD800B58290CBB1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scr_point_icon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_point_icon_Start_mC24B7DFA305246FEC57371C8F47F7D6090C4E3B3 (scr_point_icon_t8AD6F5A027CAC9C703E85105EC8593B5D64A731D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void scr_point_icon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_point_icon_Update_m547F328E58576E86BA172829F1C8B9E109870325 (scr_point_icon_t8AD6F5A027CAC9C703E85105EC8593B5D64A731D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void scr_point_icon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scr_point_icon__ctor_mBF6CA21D48127757E062CC0633CBF0A9426455A5 (scr_point_icon_t8AD6F5A027CAC9C703E85105EC8593B5D64A731D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
