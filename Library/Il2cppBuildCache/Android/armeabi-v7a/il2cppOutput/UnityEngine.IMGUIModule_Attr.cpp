#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C;
// UnityEngine.ExecuteInEditMode
struct ExecuteInEditMode_tAA3B5DE8B7E207BC6CAAFDB1F2502350C0546173;
// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;
// UnityEngine.UnityEngineModuleAssembly
struct UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// UnityEngine.ExecuteInEditMode
struct  ExecuteInEditMode_tAA3B5DE8B7E207BC6CAAFDB1F2502350C0546173  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.FlagsAttribute
struct  FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct  InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};


// System.ObsoleteAttribute
struct  ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct  RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean UnityEngine.Scripting.RequiredByNativeCodeAttribute::<Optional>k__BackingField
	bool ___U3COptionalU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Scripting.RequiredByNativeCodeAttribute::<GenerateProxy>k__BackingField
	bool ___U3CGenerateProxyU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3COptionalU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20, ___U3COptionalU3Ek__BackingField_0)); }
	inline bool get_U3COptionalU3Ek__BackingField_0() const { return ___U3COptionalU3Ek__BackingField_0; }
	inline bool* get_address_of_U3COptionalU3Ek__BackingField_0() { return &___U3COptionalU3Ek__BackingField_0; }
	inline void set_U3COptionalU3Ek__BackingField_0(bool value)
	{
		___U3COptionalU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGenerateProxyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20, ___U3CGenerateProxyU3Ek__BackingField_1)); }
	inline bool get_U3CGenerateProxyU3Ek__BackingField_1() const { return ___U3CGenerateProxyU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CGenerateProxyU3Ek__BackingField_1() { return &___U3CGenerateProxyU3Ek__BackingField_1; }
	inline void set_U3CGenerateProxyU3Ek__BackingField_1(bool value)
	{
		___U3CGenerateProxyU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.SerializeField
struct  SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.UnityEngineModuleAssembly
struct  UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.AttributeTargets
struct  AttributeTargets_t5F71273DFE1D0CA9B8109F02A023A7DBA9BFC923 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t5F71273DFE1D0CA9B8109F02A023A7DBA9BFC923, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.AttributeUsageAttribute
struct  AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.AttributeTargets System.AttributeUsageAttribute::m_attributeTarget
	int32_t ___m_attributeTarget_0;
	// System.Boolean System.AttributeUsageAttribute::m_allowMultiple
	bool ___m_allowMultiple_1;
	// System.Boolean System.AttributeUsageAttribute::m_inherited
	bool ___m_inherited_2;

public:
	inline static int32_t get_offset_of_m_attributeTarget_0() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_attributeTarget_0)); }
	inline int32_t get_m_attributeTarget_0() const { return ___m_attributeTarget_0; }
	inline int32_t* get_address_of_m_attributeTarget_0() { return &___m_attributeTarget_0; }
	inline void set_m_attributeTarget_0(int32_t value)
	{
		___m_attributeTarget_0 = value;
	}

	inline static int32_t get_offset_of_m_allowMultiple_1() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_allowMultiple_1)); }
	inline bool get_m_allowMultiple_1() const { return ___m_allowMultiple_1; }
	inline bool* get_address_of_m_allowMultiple_1() { return &___m_allowMultiple_1; }
	inline void set_m_allowMultiple_1(bool value)
	{
		___m_allowMultiple_1 = value;
	}

	inline static int32_t get_offset_of_m_inherited_2() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_inherited_2)); }
	inline bool get_m_inherited_2() const { return ___m_inherited_2; }
	inline bool* get_address_of_m_inherited_2() { return &___m_inherited_2; }
	inline void set_m_inherited_2(bool value)
	{
		___m_inherited_2 = value;
	}
};

struct AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C_StaticFields
{
public:
	// System.AttributeUsageAttribute System.AttributeUsageAttribute::Default
	AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * ___Default_3;

public:
	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C_StaticFields, ___Default_3)); }
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * get_Default_3() const { return ___Default_3; }
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_3), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.InternalsVisibleToAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9 (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * __this, String_t* ___assemblyName0, const RuntimeMethod* method);
// System.Void UnityEngine.UnityEngineModuleAssembly::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEngineModuleAssembly__ctor_m76C129AC6AA438BE601F5279EE9EB599BEF90AF9 (UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Scripting.RequiredByNativeCodeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5 (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * __this, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, bool ___error1, const RuntimeMethod* method);
// System.Void System.FlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229 (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Scripting.RequiredByNativeCodeAttribute::set_Optional(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute_set_Optional_mB223A17DB0A1E507A9C90AFA15A8FC5E01A5A57A_inline (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Scripting.RequiredByNativeCodeAttribute::set_GenerateProxy(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute_set_GenerateProxy_m4B70A962664BE60B0EC391D10CF328752AB59D56_inline (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ExecuteInEditMode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteInEditMode__ctor_m52849B67DB46F6CF090D45E523FAE97A10825C0A (ExecuteInEditMode_tAA3B5DE8B7E207BC6CAAFDB1F2502350C0546173 * __this, const RuntimeMethod* method);
// System.Void System.AttributeUsageAttribute::.ctor(System.AttributeTargets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeUsageAttribute__ctor_m5114E18826A49A025D48DC71904C430BD590656D (AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * __this, int32_t ___validOn0, const RuntimeMethod* method);
static void UnityEngine_IMGUIModule_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[0];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x47\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[1];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x4C\x6F\x63\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[2];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x53\x35\x56\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[3];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x4E\x65\x74\x77\x6F\x72\x6B\x69\x6E\x67"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[4];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x6C\x6F\x75\x64"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[5];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x6C\x6F\x75\x64\x2E\x53\x65\x72\x76\x69\x63\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[6];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x33"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[7];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x32"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[8];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x31"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[9];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x30"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[10];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x39"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[11];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x38"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[12];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x34"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[13];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x37"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[14];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x35"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[15];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x34"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[16];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x33"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[17];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x32"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[18];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x31"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[19];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x43\x6F\x72\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[20];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x36"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[21];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[22];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x61\x72\x74\x69\x63\x6C\x65\x53\x79\x73\x74\x65\x6D\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[23];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x68\x79\x73\x69\x63\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[24];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x68\x79\x73\x69\x63\x73\x32\x44\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[25];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x72\x6F\x66\x69\x6C\x65\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[26];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x75\x64\x69\x6F\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[27];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x6E\x69\x6D\x61\x74\x69\x6F\x6E\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[28];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x48\x6F\x74\x52\x65\x6C\x6F\x61\x64\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[29];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x6E\x64\x72\x6F\x69\x64\x4A\x4E\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[30];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[31];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x6F\x72\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[32];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x68\x61\x72\x65\x64\x49\x6E\x74\x65\x72\x6E\x61\x6C\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[33];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[34];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x63\x63\x65\x73\x73\x69\x62\x69\x6C\x69\x74\x79\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[35];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x49\x6D\x61\x67\x65\x43\x6F\x6E\x76\x65\x72\x73\x69\x6F\x6E\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[36];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x35"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[37];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x49\x6E\x70\x75\x74\x4C\x65\x67\x61\x63\x79\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[38];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x72\x72\x61\x69\x6E\x50\x68\x79\x73\x69\x63\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[39];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x72\x72\x61\x69\x6E\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[40];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x4C\x53\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[41];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x75\x62\x73\x79\x73\x74\x65\x6D\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[42];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x75\x62\x73\x74\x61\x6E\x63\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[43];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x74\x72\x65\x61\x6D\x69\x6E\x67\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[44];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x70\x72\x69\x74\x65\x53\x68\x61\x70\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[45];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x70\x72\x69\x74\x65\x4D\x61\x73\x6B\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[46];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x63\x72\x65\x65\x6E\x43\x61\x70\x74\x75\x72\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[47];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x52\x75\x6E\x74\x69\x6D\x65\x49\x6E\x69\x74\x69\x61\x6C\x69\x7A\x65\x4F\x6E\x4C\x6F\x61\x64\x4D\x61\x6E\x61\x67\x65\x72\x49\x6E\x69\x74\x69\x61\x6C\x69\x7A\x65\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[48];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x4A\x53\x4F\x4E\x53\x65\x72\x69\x61\x6C\x69\x7A\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[49];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x37"), NULL);
	}
	{
		UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF * tmp = (UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF *)cache->attributes[50];
		UnityEngineModuleAssembly__ctor_m76C129AC6AA438BE601F5279EE9EB599BEF90AF9(tmp, NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[51];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x53\x75\x62\x73\x79\x73\x74\x65\x6D\x2E\x52\x65\x67\x69\x73\x74\x72\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[52];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x75\x72\x63\x68\x61\x73\x69\x6E\x67"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[53];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x64\x76\x65\x72\x74\x69\x73\x65\x6D\x65\x6E\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[54];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x6E\x61\x6C\x79\x74\x69\x63\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[55];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x41\x6E\x61\x6C\x79\x74\x69\x63\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[56];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x42\x75\x72\x73\x74"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[57];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x73\x2E\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[58];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x50\x65\x72\x66\x6F\x72\x6D\x61\x6E\x63\x65\x54\x65\x73\x74\x73\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x52\x75\x6E\x6E\x65\x72\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[59];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x73\x2E\x41\x6C\x6C\x49\x6E\x31\x52\x75\x6E\x6E\x65\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[60];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x2E\x45\x64\x69\x74\x6F\x72\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[61];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[62];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x73\x74\x52\x75\x6E\x6E\x65\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[63];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x47\x61\x6D\x65\x4F\x62\x6A\x65\x63\x74\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[64];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x2E\x42\x75\x69\x6C\x64\x65\x72\x2E\x45\x64\x69\x74\x6F\x72\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[65];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x64\x69\x74\x6F\x72\x2E\x55\x49\x42\x75\x69\x6C\x64\x65\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[66];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x2E\x42\x75\x69\x6C\x64\x65\x72\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[67];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x32\x44\x2E\x53\x70\x72\x69\x74\x65\x2E\x45\x64\x69\x74\x6F\x72\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[68];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x32\x44\x2E\x53\x70\x72\x69\x74\x65\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[69];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x57\x69\x6E\x64\x6F\x77\x73\x4D\x52\x41\x75\x74\x6F\x6D\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[70];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x47\x6F\x6F\x67\x6C\x65\x41\x52\x2E\x55\x6E\x69\x74\x79\x4E\x61\x74\x69\x76\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[71];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x70\x61\x74\x69\x61\x6C\x54\x72\x61\x63\x6B\x69\x6E\x67"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[72];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x41\x73\x73\x65\x6D\x62\x6C\x79\x2D\x43\x53\x68\x61\x72\x70\x2D\x66\x69\x72\x73\x74\x70\x61\x73\x73\x2D\x74\x65\x73\x74\x61\x62\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[73];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x41\x73\x73\x65\x6D\x62\x6C\x79\x2D\x43\x53\x68\x61\x72\x70\x2D\x74\x65\x73\x74\x61\x62\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[74];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[75];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x44\x53\x50\x47\x72\x61\x70\x68\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[76];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x41\x75\x74\x6F\x6D\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[77];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x73\x2E\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[78];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x35"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[79];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x34"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[80];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x33"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[81];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x32"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[82];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x36"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[83];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x31"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[84];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x33"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[85];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x32"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[86];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x31"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[87];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x30"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[88];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x42\x75\x72\x73\x74\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[89];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x39"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[90];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x34"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[91];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x45\x6E\x74\x69\x74\x69\x65\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[92];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x75\x63\x67\x2E\x51\x6F\x53"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[93];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x4E\x65\x74\x77\x6F\x72\x6B\x69\x6E\x67\x2E\x54\x72\x61\x6E\x73\x70\x6F\x72\x74"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[94];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[95];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x67\x72\x61\x74\x69\x6F\x6E\x54\x65\x73\x74\x73\x2E\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[96];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x67\x72\x61\x74\x69\x6F\x6E\x54\x65\x73\x74\x73\x2E\x54\x69\x6D\x65\x6C\x69\x6E\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[97];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x67\x72\x61\x74\x69\x6F\x6E\x54\x65\x73\x74\x73\x2E\x55\x6E\x69\x74\x79\x41\x6E\x61\x6C\x79\x74\x69\x63\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[98];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x67\x72\x61\x74\x69\x6F\x6E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[99];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x44\x65\x70\x6C\x6F\x79\x6D\x65\x6E\x74\x54\x65\x73\x74\x73\x2E\x53\x65\x72\x76\x69\x63\x65\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[100];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x38"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[101];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x44\x69\x72\x65\x63\x74\x6F\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[102];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[103];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x47\x72\x69\x64\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[104];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x56\x65\x68\x69\x63\x6C\x65\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[105];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x43\x6F\x6E\x6E\x65\x63\x74\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[106];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x49\x4D\x47\x55\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[107];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x47\x61\x6D\x65\x43\x65\x6E\x74\x65\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[108];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x6C\x6F\x74\x68\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[109];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x73\x73\x65\x74\x42\x75\x6E\x64\x6C\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[110];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x57\x69\x6E\x64\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[111];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x56\x69\x64\x65\x6F\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[112];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x49\x6E\x70\x75\x74\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[113];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x56\x46\x58\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[114];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x54\x65\x78\x74\x75\x72\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[115];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x41\x75\x64\x69\x6F\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[116];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[117];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x54\x65\x73\x74\x50\x72\x6F\x74\x6F\x63\x6F\x6C\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[118];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x43\x75\x72\x6C\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[119];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x78\x74\x43\x6F\x72\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[120];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x4E\x61\x74\x69\x76\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[121];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x53\x35\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[122];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x57\x57\x57\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[123];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x78\x74\x52\x65\x6E\x64\x65\x72\x69\x6E\x67\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[124];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x69\x6C\x65\x6D\x61\x70\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[125];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[126];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6D\x62\x72\x61\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[127];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x4E\x45\x54\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[128];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x41\x6E\x61\x6C\x79\x74\x69\x63\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[129];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x41\x73\x73\x65\x74\x42\x75\x6E\x64\x6C\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[130];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x53\x34\x56\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[131];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x54\x69\x6D\x65\x6C\x69\x6E\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[132];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[133];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x72\x61\x73\x68\x52\x65\x70\x6F\x72\x74\x69\x6E\x67\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[134];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x65\x72\x66\x6F\x72\x6D\x61\x6E\x63\x65\x52\x65\x70\x6F\x72\x74\x69\x6E\x67\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[135];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[136];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x56\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[137];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x77\x69\x74\x63\x68\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[138];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x58\x62\x6F\x78\x4F\x6E\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[139];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x53\x34\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[140];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x58\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
}
static void Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_CustomAttributesCacheGenerator_Event_Internal_MakeMasterEventCurrent_m5719647ABFCB402AAC5E269BA2C4BB68C235CCD0(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_mouseDown(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x4D\x6F\x75\x73\x65\x44\x6F\x77\x6E\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x28\x55\x6E\x69\x74\x79\x55\x70\x67\x72\x61\x64\x61\x62\x6C\x65\x29\x20\x2D\x3E\x20\x4D\x6F\x75\x73\x65\x44\x6F\x77\x6E"), true, NULL);
	}
}
static void EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_mouseUp(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x4D\x6F\x75\x73\x65\x55\x70\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x28\x55\x6E\x69\x74\x79\x55\x70\x67\x72\x61\x64\x61\x62\x6C\x65\x29\x20\x2D\x3E\x20\x4D\x6F\x75\x73\x65\x55\x70"), true, NULL);
	}
}
static void EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_mouseMove(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x4D\x6F\x75\x73\x65\x4D\x6F\x76\x65\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x28\x55\x6E\x69\x74\x79\x55\x70\x67\x72\x61\x64\x61\x62\x6C\x65\x29\x20\x2D\x3E\x20\x4D\x6F\x75\x73\x65\x4D\x6F\x76\x65"), true, NULL);
	}
}
static void EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_mouseDrag(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x4D\x6F\x75\x73\x65\x44\x72\x61\x67\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x28\x55\x6E\x69\x74\x79\x55\x70\x67\x72\x61\x64\x61\x62\x6C\x65\x29\x20\x2D\x3E\x20\x4D\x6F\x75\x73\x65\x44\x72\x61\x67"), true, NULL);
	}
}
static void EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_keyDown(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x4B\x65\x79\x44\x6F\x77\x6E\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x28\x55\x6E\x69\x74\x79\x55\x70\x67\x72\x61\x64\x61\x62\x6C\x65\x29\x20\x2D\x3E\x20\x4B\x65\x79\x44\x6F\x77\x6E"), true, NULL);
	}
}
static void EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_keyUp(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x4B\x65\x79\x55\x70\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x28\x55\x6E\x69\x74\x79\x55\x70\x67\x72\x61\x64\x61\x62\x6C\x65\x29\x20\x2D\x3E\x20\x4B\x65\x79\x55\x70"), true, NULL);
	}
}
static void EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_scrollWheel(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x53\x63\x72\x6F\x6C\x6C\x57\x68\x65\x65\x6C\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x28\x55\x6E\x69\x74\x79\x55\x70\x67\x72\x61\x64\x61\x62\x6C\x65\x29\x20\x2D\x3E\x20\x53\x63\x72\x6F\x6C\x6C\x57\x68\x65\x65\x6C"), true, NULL);
	}
}
static void EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_repaint(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x52\x65\x70\x61\x69\x6E\x74\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x28\x55\x6E\x69\x74\x79\x55\x70\x67\x72\x61\x64\x61\x62\x6C\x65\x29\x20\x2D\x3E\x20\x52\x65\x70\x61\x69\x6E\x74"), true, NULL);
	}
}
static void EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_layout(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x4C\x61\x79\x6F\x75\x74\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x28\x55\x6E\x69\x74\x79\x55\x70\x67\x72\x61\x64\x61\x62\x6C\x65\x29\x20\x2D\x3E\x20\x4C\x61\x79\x6F\x75\x74"), true, NULL);
	}
}
static void EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_dragUpdated(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x44\x72\x61\x67\x55\x70\x64\x61\x74\x65\x64\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x28\x55\x6E\x69\x74\x79\x55\x70\x67\x72\x61\x64\x61\x62\x6C\x65\x29\x20\x2D\x3E\x20\x44\x72\x61\x67\x55\x70\x64\x61\x74\x65\x64"), true, NULL);
	}
}
static void EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_dragPerform(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x44\x72\x61\x67\x50\x65\x72\x66\x6F\x72\x6D\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x28\x55\x6E\x69\x74\x79\x55\x70\x67\x72\x61\x64\x61\x62\x6C\x65\x29\x20\x2D\x3E\x20\x44\x72\x61\x67\x50\x65\x72\x66\x6F\x72\x6D"), true, NULL);
	}
}
static void EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_ignore(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x49\x67\x6E\x6F\x72\x65\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x28\x55\x6E\x69\x74\x79\x55\x70\x67\x72\x61\x64\x61\x62\x6C\x65\x29\x20\x2D\x3E\x20\x49\x67\x6E\x6F\x72\x65"), true, NULL);
	}
}
static void EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_used(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x55\x73\x65\x64\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x28\x55\x6E\x69\x74\x79\x55\x70\x67\x72\x61\x64\x61\x62\x6C\x65\x29\x20\x2D\x3E\x20\x55\x73\x65\x64"), true, NULL);
	}
}
static void EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_CustomAttributesCacheGenerator_GUI_CallWindowDelegate_m06B357445D7356475C200AFC92ECA07AA59D1FBB(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
		RequiredByNativeCodeAttribute_set_Optional_mB223A17DB0A1E507A9C90AFA15A8FC5E01A5A57A_inline(tmp, true, NULL);
		RequiredByNativeCodeAttribute_set_GenerateProxy_m4B70A962664BE60B0EC391D10CF328752AB59D56_inline(tmp, true, NULL);
	}
}
static void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
	{
		ExecuteInEditMode_tAA3B5DE8B7E207BC6CAAFDB1F2502350C0546173 * tmp = (ExecuteInEditMode_tAA3B5DE8B7E207BC6CAAFDB1F2502350C0546173 *)cache->attributes[1];
		ExecuteInEditMode__ctor_m52849B67DB46F6CF090D45E523FAE97A10825C0A(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * tmp = (AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C *)cache->attributes[0];
		AttributeUsageAttribute__ctor_m5114E18826A49A025D48DC71904C430BD590656D(tmp, 64LL, NULL);
	}
}
static void GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C_CustomAttributesCacheGenerator_GUITargetAttribute_GetGUITargetAttrValue_mCC2254E894729E2DDFAB25D9FC26CD4913E8ADC2(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_MarkGUIChanged_m81ADFC648B63CFD4C6524BEA5268C4F0CAE07A61(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_TakeCapture_mB10E9D004B3C8B072634BB16C8D99DA9F6A4A006(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_RemoveCapture_m6FA86E68E9C40AB3153203644AB6020E5D85167C(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_ProcessEvent_m96FCE6AD81E6EEE66422C72FC61C633BDFB84B8F(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_BeginGUI_mC845F40D18A61ABC56B8428DD231030CDD312C05(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_EndGUI_mFB2C261AB2BA4AD1D79FE74258363B4B20D631C3(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_EndGUIFromException_mA815072F2FCEAAEA06BF7B23624251F58747E2AF(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_EndContainerGUIFromException_mA368DE91CD76071668ADB7DB87E579CF0D552E1A(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62_CustomAttributesCacheGenerator_GUIScrollGroup__ctor_mDD7A0FFABA651948BF9CECE7EC203BD054B63164(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void ScrollViewState_t6ACB5023B94B7CD6372697F35F84E8A798C31AF0_CustomAttributesCacheGenerator_ScrollViewState__ctor_m0D7C09E917B98DAE6CA669F180201B52F74A2C0E(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A_CustomAttributesCacheGenerator_SliderState__ctor_m52C1830A6B916BE4BD18799B3934E79665EE3EDE(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
static void TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_CustomAttributesCacheGenerator_TextEditor__ctor_m638747CE4AED20B2F497618337649E32D2ADA099(CustomAttributesCache* cache)
{
	{
		RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * tmp = (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 *)cache->attributes[0];
		RequiredByNativeCodeAttribute__ctor_m97C095D1EE6AAB2894AE7E8B2F07D9B47CB8F8B5(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_UnityEngine_IMGUIModule_AttributeGenerators[];
const CustomAttributesCacheGenerator g_UnityEngine_IMGUIModule_AttributeGenerators[65] = 
{
	EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA_CustomAttributesCacheGenerator,
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_CustomAttributesCacheGenerator,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator,
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_CustomAttributesCacheGenerator,
	GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C_CustomAttributesCacheGenerator,
	EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_mouseDown,
	EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_mouseUp,
	EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_mouseMove,
	EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_mouseDrag,
	EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_keyDown,
	EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_keyUp,
	EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_scrollWheel,
	EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_repaint,
	EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_layout,
	EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_dragUpdated,
	EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_dragPerform,
	EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_ignore,
	EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F_CustomAttributesCacheGenerator_used,
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_CustomAttributesCacheGenerator_m_Tooltip,
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_Font,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_box,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_button,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_label,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_textField,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_window,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_CustomAttributesCacheGenerator_m_Settings,
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_CustomAttributesCacheGenerator_Event_Internal_MakeMasterEventCurrent_m5719647ABFCB402AAC5E269BA2C4BB68C235CCD0,
	GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_CustomAttributesCacheGenerator_GUI_CallWindowDelegate_m06B357445D7356475C200AFC92ECA07AA59D1FBB,
	GUITargetAttribute_tFC89E3290401D51DDE92D1FA3F39134D87B9E73C_CustomAttributesCacheGenerator_GUITargetAttribute_GetGUITargetAttrValue_mCC2254E894729E2DDFAB25D9FC26CD4913E8ADC2,
	GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_MarkGUIChanged_m81ADFC648B63CFD4C6524BEA5268C4F0CAE07A61,
	GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_TakeCapture_mB10E9D004B3C8B072634BB16C8D99DA9F6A4A006,
	GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_RemoveCapture_m6FA86E68E9C40AB3153203644AB6020E5D85167C,
	GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_ProcessEvent_m96FCE6AD81E6EEE66422C72FC61C633BDFB84B8F,
	GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_BeginGUI_mC845F40D18A61ABC56B8428DD231030CDD312C05,
	GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_EndGUI_mFB2C261AB2BA4AD1D79FE74258363B4B20D631C3,
	GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_EndGUIFromException_mA815072F2FCEAAEA06BF7B23624251F58747E2AF,
	GUIUtility_t0730B6D76CF479611ACF80504321B06286D12DE5_CustomAttributesCacheGenerator_GUIUtility_EndContainerGUIFromException_mA368DE91CD76071668ADB7DB87E579CF0D552E1A,
	GUIScrollGroup_t97EEDCA0F5C488377EA0C6E9AA98A6C886532E62_CustomAttributesCacheGenerator_GUIScrollGroup__ctor_mDD7A0FFABA651948BF9CECE7EC203BD054B63164,
	ScrollViewState_t6ACB5023B94B7CD6372697F35F84E8A798C31AF0_CustomAttributesCacheGenerator_ScrollViewState__ctor_m0D7C09E917B98DAE6CA669F180201B52F74A2C0E,
	SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A_CustomAttributesCacheGenerator_SliderState__ctor_m52C1830A6B916BE4BD18799B3934E79665EE3EDE,
	TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B_CustomAttributesCacheGenerator_TextEditor__ctor_m638747CE4AED20B2F497618337649E32D2ADA099,
	UnityEngine_IMGUIModule_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute_set_Optional_mB223A17DB0A1E507A9C90AFA15A8FC5E01A5A57A_inline (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3COptionalU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute_set_GenerateProxy_m4B70A962664BE60B0EC391D10CF328752AB59D56_inline (RequiredByNativeCodeAttribute_t855401D3C2EF3B44F4F1C3EE2DCD361CFC358D20 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CGenerateProxyU3Ek__BackingField_1(L_0);
		return;
	}
}
