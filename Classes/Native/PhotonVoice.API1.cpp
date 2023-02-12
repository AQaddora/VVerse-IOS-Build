#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Single[]>
struct Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`3<System.Int32,System.IntPtr,System.Int32>
struct Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.IOS.AudioInPusher>
struct Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Photon.Voice.IOS.AudioInPusher>
struct KeyCollection_t035516615BE953BE469CC38EAD7C28004988935A;
// Photon.Voice.ObjectFactory`2<System.Single[],System.Int32>
struct ObjectFactory_2_t9EEA813BF75BBD1954AB292E356F25756B84995D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Photon.Voice.IOS.AudioInPusher>
struct ValueCollection_tE32CB2D35DC798E7FC51F2C6F339C494FCABE352;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Photon.Voice.IOS.AudioInPusher>[]
struct EntryU5BU5D_t3872B4484DF407C25E666D2244B18504E6A4EB90;
// Photon.Voice.IOS.AudioSessionCategoryOption[]
struct AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// Photon.Voice.IOS.AudioInPusher
struct AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44;
// Photon.Voice.IOS.AudioInReader
struct AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Photon.Voice.ILogger
struct ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Photon.Voice.IOS.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t9962C0C8B021CDCB64A7876EB5FAD5DDF8AC7009;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t72E7AE5BA981EB32590B5928B12F4B83201B5261;
// Photon.Voice.IOS.AudioInPusher/CallbackDelegate
struct CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68;
// Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t350C93BC6ED05D9151E3BA915616B6FEF1229CDD;

IL2CPP_EXTERN_C RuntimeClass* Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSessionCategoryOption_tB65209ED5D05B821BF3DF03109C70597F97AAAF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSessionCategory_t1C36CB8E4F7F94A6DE2B1D509AD12AF9BA667969_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSessionMode_tF805910784023C190A8DD567B87F621B9EA11F7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectFactory_2_t9EEA813BF75BBD1954AB292E356F25756B84995D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t72E7AE5BA981EB32590B5928B12F4B83201B5261_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t350C93BC6ED05D9151E3BA915616B6FEF1229CDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DE61F00FE462AF97E2E045C11F49A16271CE4DA;
IL2CPP_EXTERN_C String_t* _stringLiteral17B18DAA2E5F590F3527988AF3B31BFB53EA0EC2;
IL2CPP_EXTERN_C String_t* _stringLiteral736977A8DC43E09C147CAFC8536005DA4284D6C8;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral8460AECBE820085F2A6606F461369091075CC52F;
IL2CPP_EXTERN_C String_t* _stringLiteral87611C547FCC3083E7DAFD5589BDA6DC1F2B9D53;
IL2CPP_EXTERN_C String_t* _stringLiteralBDAC475879A58A818246AC1E033EA3F1055B1B90;
IL2CPP_EXTERN_C String_t* _stringLiteralD12049269E84B94ADC67D8C867306BAEEB90416C;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioInPusher_nativePushCallback_m7ECC3ADC2CE641DA13D0E55B7BB57FC7BD56389A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m28A0A0C35B77AC1452D4E44B17CDD16113F5BE86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m465DF5327AEE535C99FA8D59A3154A82B7E6165F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mAECB7D54B0665F8A22C44936E0177359781A6D7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8C7E924E05C3DB1A058A2836C8EBCE2AC99C2731_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3C_ctorU3Eb__0_m22458B5B48FF0F67739FB5C7672500BA0095A103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3C_ctorU3Eb__0_mA595CC52903007ABCA41E49E3AD71D9971F49F25_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.IOS.AudioInPusher>
struct Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3872B4484DF407C25E666D2244B18504E6A4EB90* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t035516615BE953BE469CC38EAD7C28004988935A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE32CB2D35DC798E7FC51F2C6F339C494FCABE352* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Photon.Voice.Unity.UnityMicrophone
struct UnityMicrophone_t7A8A481EC80EBE15AE08AB01A6D1AC1208E560CF  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 
{
	// Photon.Voice.IOS.AudioSessionCategory Photon.Voice.IOS.AudioSessionParameters::Category
	int32_t ___Category_0;
	// Photon.Voice.IOS.AudioSessionMode Photon.Voice.IOS.AudioSessionParameters::Mode
	int32_t ___Mode_1;
	// Photon.Voice.IOS.AudioSessionCategoryOption[] Photon.Voice.IOS.AudioSessionParameters::CategoryOptions
	AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* ___CategoryOptions_2;
};
// Native definition for P/Invoke marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_pinvoke
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};
// Native definition for COM marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_com
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Photon.Voice.IOS.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t9962C0C8B021CDCB64A7876EB5FAD5DDF8AC7009  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type Photon.Voice.IOS.MonoPInvokeCallbackAttribute::type
	Type_t* ___type_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t53F4031000B73B9D47BF87B4C2CBDBF32ABDBCBB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t53F4031000B73B9D47BF87B4C2CBDBF32ABDBCBB__padding[16];
	};
};

// Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig
struct PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3 
{
	// System.Int32 Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::<Low>k__BackingField
	int32_t ___U3CLowU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::<High>k__BackingField
	int32_t ___U3CHighU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::<Max>k__BackingField
	int32_t ___U3CMaxU3Ek__BackingField_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tEC72908065E42AF62CFBD51BC5355E78406A8AA4  : public RuntimeObject
{
};

// Photon.Voice.IOS.AudioInPusher
struct AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44  : public RuntimeObject
{
	// System.Boolean Photon.Voice.IOS.AudioInPusher::initializationFinished
	bool ___initializationFinished_1;
	// System.IntPtr Photon.Voice.IOS.AudioInPusher::handle
	intptr_t ___handle_4;
	// System.Int32 Photon.Voice.IOS.AudioInPusher::instanceID
	int32_t ___instanceID_5;
	// System.Action`1<System.Single[]> Photon.Voice.IOS.AudioInPusher::pushCallback
	Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* ___pushCallback_6;
	// Photon.Voice.ObjectFactory`2<System.Single[],System.Int32> Photon.Voice.IOS.AudioInPusher::bufferFactory
	RuntimeObject* ___bufferFactory_7;
	// System.String Photon.Voice.IOS.AudioInPusher::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_8;
};

// Photon.Voice.IOS.AudioInReader
struct AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED  : public RuntimeObject
{
	// System.IntPtr Photon.Voice.IOS.AudioInReader::audioIn
	intptr_t ___audioIn_1;
	// System.Boolean Photon.Voice.IOS.AudioInReader::initializationFinished
	bool ___initializationFinished_2;
	// System.String Photon.Voice.IOS.AudioInReader::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_3;
};

// Photon.Voice.IOS.AudioSessionCategoryOption
struct AudioSessionCategoryOption_tB65209ED5D05B821BF3DF03109C70597F97AAAF3 
{
	// System.Int32 Photon.Voice.IOS.AudioSessionCategoryOption::value__
	int32_t ___value___2;
};

// Photon.Voice.IOS.AudioSessionParametersPresets
struct AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E  : public RuntimeObject
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t72E7AE5BA981EB32590B5928B12F4B83201B5261  : public RuntimeObject
{
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0::sessParam
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 ___sessParam_0;
	// Photon.Voice.IOS.AudioInPusher Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0::<>4__this
	AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* ___U3CU3E4__this_1;
	// Photon.Voice.ILogger Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0::logger
	RuntimeObject* ___logger_2;
};

// Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t350C93BC6ED05D9151E3BA915616B6FEF1229CDD  : public RuntimeObject
{
	// Photon.Voice.IOS.AudioInReader Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0::<>4__this
	AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* ___U3CU3E4__this_0;
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0::sessParam
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 ___sessParam_1;
	// Photon.Voice.ILogger Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0::logger
	RuntimeObject* ___logger_2;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Single[]>
struct Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`3<System.Int32,System.IntPtr,System.Int32>
struct Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};

// Photon.Voice.IOS.AudioInPusher/CallbackDelegate
struct CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.IOS.AudioInPusher>

// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.IOS.AudioInPusher>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Attribute

// System.Attribute

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Photon.Voice.Unity.UnityMicrophone

// Photon.Voice.Unity.UnityMicrophone

// System.ValueType

// System.ValueType

// Photon.Voice.IOS.AudioSessionParameters

// Photon.Voice.IOS.AudioSessionParameters

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Photon.Voice.IOS.MonoPInvokeCallbackAttribute

// Photon.Voice.IOS.MonoPInvokeCallbackAttribute

// System.Single

// System.Single

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig
struct PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3_StaticFields
{
	// Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::Default
	PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3 ___Default_3;
};

// Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tEC72908065E42AF62CFBD51BC5355E78406A8AA4_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1B643E546EE1E74A344BEFB0B9CA962B3ECDCF3EDC7072BBDA19525A9109FC94
	__StaticArrayInitTypeSizeU3D16_t53F4031000B73B9D47BF87B4C2CBDBF32ABDBCBB ___1B643E546EE1E74A344BEFB0B9CA962B3ECDCF3EDC7072BBDA19525A9109FC94_0;
};

// <PrivateImplementationDetails>

// Photon.Voice.IOS.AudioInPusher
struct AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields
{
	// System.Int32 Photon.Voice.IOS.AudioInPusher::instanceCnt
	int32_t ___instanceCnt_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.IOS.AudioInPusher> Photon.Voice.IOS.AudioInPusher::instancePerHandle
	Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* ___instancePerHandle_3;
};

// Photon.Voice.IOS.AudioInPusher

// Photon.Voice.IOS.AudioInReader

// Photon.Voice.IOS.AudioInReader

// Photon.Voice.IOS.AudioSessionCategoryOption

// Photon.Voice.IOS.AudioSessionCategoryOption

// Photon.Voice.IOS.AudioSessionParametersPresets
struct AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_StaticFields
{
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.IOS.AudioSessionParametersPresets::Game
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 ___Game_0;
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.IOS.AudioSessionParametersPresets::VoIP
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 ___VoIP_1;
};

// Photon.Voice.IOS.AudioSessionParametersPresets

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0

// Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0

// Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0

// Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// System.MulticastDelegate

// System.MulticastDelegate

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.Single[]>

// System.Action`1<System.Single[]>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`3<System.Int32,System.IntPtr,System.Int32>

// System.Action`3<System.Int32,System.IntPtr,System.Int32>

// System.AsyncCallback

// System.AsyncCallback

// System.Threading.ThreadStart

// System.Threading.ThreadStart

// Photon.Voice.IOS.AudioInPusher/CallbackDelegate

// Photon.Voice.IOS.AudioInPusher/CallbackDelegate
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Voice.IOS.AudioSessionCategoryOption[]
struct AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.IntPtr,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mBFCA39814E57ACF92B00660146991BFB608B87C8_gshared (Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;

// System.Int32 Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::get_Low()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_Low_mE975F153D5E9AD3A0F008160AA9BF4CCCACD7740_inline (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::set_Low(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_Low_m02ED145DE474B83E8F4334695EC7F1A9BB8833EB_inline (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::get_High()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_High_m33F84432D0C924DF39BBEA288D161787C8DF1F54_inline (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::set_High(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_High_mF8E8D49A7B8F7A7C715F5662C4F0D1B66B5A2D86_inline (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::get_Max()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_Max_m5482356506C9CCA2C6739B39D89320E4D0D3BE27_inline (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::set_Max(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_Max_mFF12504501810CFBC10C9BAC6103835EDE1DBFFA_inline (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String[] UnityEngine.Microphone::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mB368877FCC9EA1522914006671E637848A0F7CC6 (String_t* ___0_deviceName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_m8C443A4C8FDA86E23E2C5556C4E3AAA6FD181454 (String_t* ___0_deviceName, int32_t* ___1_minFreq, int32_t* ___2_maxFreq, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Microphone::GetPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetPosition_m13F4C8EBE8536893D9AD8388B0E5B46D62E6A459 (String_t* ___0_deviceName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m93CA54969E12BF2083326E43794D71F0FED5D653 (String_t* ___0_deviceName, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E (String_t* ___0_deviceName, bool ___1_loop, int32_t ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.IOS.AudioInPusher::nativePushCallback(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher_nativePushCallback_m7ECC3ADC2CE641DA13D0E55B7BB57FC7BD56389A (int32_t ___0_instanceID, intptr_t ___1_buf, int32_t ___2_len, const RuntimeMethod* method) ;
// System.Void Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m5F1595D8FF5B617EAAE77A58B3CA21713BEDF36E (U3CU3Ec__DisplayClass6_0_t72E7AE5BA981EB32590B5928B12F4B83201B5261* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___0_start, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Name_m53E2BA6E84C04A6393EA5E470E516703CB892E4A (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.IOS.AudioInPusher>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mAECB7D54B0665F8A22C44936E0177359781A6D7E (Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* __this, int32_t ___0_key, AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282*, int32_t, AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Photon.Voice.IOS.AudioInPusher::push(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher_push_m29EC3FD9DD31AE8754E04D8433E1A0295B08A6F3 (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, intptr_t ___0_buf, int32_t ___1_len, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775 (intptr_t ___0_source, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single[]>::Invoke(T)
inline void Action_1_Invoke_mBE0A0BDCAD5FEDE1C45EA97B02BFEB89E5AA3728_inline (Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Photon.Voice.IOS.AudioInPusher::Photon_Audio_In_Reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher_Photon_Audio_In_Reset_m8281A0FD02567DDAA01370CD2A88267E19126ED1 (intptr_t ___0_handler, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.IOS.AudioInPusher>::Remove(TKey)
inline bool Dictionary_2_Remove_m465DF5327AEE535C99FA8D59A3154A82B7E6165F (Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___0_key, method);
}
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___0_millisecondsTimeout, const RuntimeMethod* method) ;
// System.Void Photon.Voice.IOS.AudioInPusher::Photon_Audio_In_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher_Photon_Audio_In_Destroy_m05D5F1E03DFA05ACB07B36FDD03B0A95019B0B04 (intptr_t ___0_handler, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.IOS.AudioInPusher>::.ctor()
inline void Dictionary_2__ctor_m8C7E924E05C3DB1A058A2836C8EBCE2AC99C2731 (Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Action`3<System.Int32,System.IntPtr,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mBFCA39814E57ACF92B00660146991BFB608B87C8 (Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_mBFCA39814E57ACF92B00660146991BFB608B87C8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Int32 Photon.Voice.IOS.AudioSessionParameters::CategoryOptionsToInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSessionParameters_CategoryOptionsToInt_mE9ED527540A96EB5C1BB030E55DC861C230C3A28 (AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* __this, const RuntimeMethod* method) ;
// System.IntPtr Photon.Voice.IOS.AudioInPusher::Photon_Audio_In_CreatePusher(System.Int32,System.Action`3<System.Int32,System.IntPtr,System.Int32>,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioInPusher_Photon_Audio_In_CreatePusher_mDF02DB25358749AF51BD661B656EE438238628A3 (int32_t ___0_instanceID, Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312* ___1_pushCallback, int32_t ___2_sessionCategory, int32_t ___3_sessionMode, int32_t ___4_sessionCategoryOptions, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.IOS.AudioInPusher>::Add(TKey,TValue)
inline void Dictionary_2_Add_m28A0A0C35B77AC1452D4E44B17CDD16113F5BE86 (Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* __this, int32_t ___0_key, AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282*, int32_t, AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Photon.Voice.IOS.AudioInPusher::set_Error(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioInPusher_set_Error_m3ED820030B96BEE801EC05210BDCB1E614576E3F_inline (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Photon.Voice.IOS.AudioInPusher::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AudioInPusher_get_Error_mFA84923D071C4EE517FE40B5B355B6C9F04C9A5B_inline (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m8D76AD582B14CCE0DFA759829F3275C434B74244 (U3CU3Ec__DisplayClass7_0_t350C93BC6ED05D9151E3BA915616B6FEF1229CDD* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.IOS.AudioInReader::Photon_Audio_In_Reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInReader_Photon_Audio_In_Reset_m17031881C2DAA6876876A2FD28D5A02432B0746B (intptr_t ___0_handler, const RuntimeMethod* method) ;
// System.Void Photon.Voice.IOS.AudioInReader::Photon_Audio_In_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInReader_Photon_Audio_In_Destroy_mE9D63E1DF85461A4543362D496D733092B47F91F (intptr_t ___0_handler, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.IOS.AudioInReader::Photon_Audio_In_Read(System.IntPtr,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioInReader_Photon_Audio_In_Read_m345D1586CCA97F641CE3DF8096A3C8BAFC74D375 (intptr_t ___0_handle, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_buf, int32_t ___2_len, const RuntimeMethod* method) ;
// System.IntPtr Photon.Voice.IOS.AudioInReader::Photon_Audio_In_CreateReader(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioInReader_Photon_Audio_In_CreateReader_m16B7A933EA94F95051074DE48E7851B9E59B054C (int32_t ___0_sessionCategory, int32_t ___1_sessionMode, int32_t ___2_sessionCategoryOptions, const RuntimeMethod* method) ;
// System.Void Photon.Voice.IOS.AudioInReader::set_Error(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioInReader_set_Error_m96C7DDF9509BADE31E7676A8F033299AA9B34A9B_inline (AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Photon.Voice.IOS.AudioInReader::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AudioInReader_get_Error_mFA0D8B210B008508C767C10CC7AB9788CEAFA58D_inline (AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String Photon.Voice.IOS.AudioSessionParameters::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioSessionParameters_ToString_mEB3B038EDA3373B3B35BB0DF7CB7D0D66EAFEDC7 (AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Photon_Audio_In_CreatePusher(int32_t, Il2CppMethodPointer, int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Photon_Audio_In_Reset(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Photon_Audio_In_Destroy(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Photon_Audio_In_CreateReader(int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Photon_Audio_In_Read(intptr_t, float*, int32_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::get_Low()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_Low_mE975F153D5E9AD3A0F008160AA9BF4CCCACD7740 (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, const RuntimeMethod* method) 
{
	{
		// public int Low  { get; set; } // ms: Audio player tries to keep the delay above this value.
		int32_t L_0 = __this->___U3CLowU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t PlayDelayConfig_get_Low_mE975F153D5E9AD3A0F008160AA9BF4CCCACD7740_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayDelayConfig_get_Low_mE975F153D5E9AD3A0F008160AA9BF4CCCACD7740_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::set_Low(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayDelayConfig_set_Low_m02ED145DE474B83E8F4334695EC7F1A9BB8833EB (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Low  { get; set; } // ms: Audio player tries to keep the delay above this value.
		int32_t L_0 = ___0_value;
		__this->___U3CLowU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void PlayDelayConfig_set_Low_m02ED145DE474B83E8F4334695EC7F1A9BB8833EB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3*>(__this + _offset);
	PlayDelayConfig_set_Low_m02ED145DE474B83E8F4334695EC7F1A9BB8833EB_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::get_High()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_High_m33F84432D0C924DF39BBEA288D161787C8DF1F54 (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, const RuntimeMethod* method) 
{
	{
		// public int High { get; set; } // ms: Audio player tries to keep the delay below this value.
		int32_t L_0 = __this->___U3CHighU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t PlayDelayConfig_get_High_m33F84432D0C924DF39BBEA288D161787C8DF1F54_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayDelayConfig_get_High_m33F84432D0C924DF39BBEA288D161787C8DF1F54_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::set_High(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayDelayConfig_set_High_mF8E8D49A7B8F7A7C715F5662C4F0D1B66B5A2D86 (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int High { get; set; } // ms: Audio player tries to keep the delay below this value.
		int32_t L_0 = ___0_value;
		__this->___U3CHighU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void PlayDelayConfig_set_High_mF8E8D49A7B8F7A7C715F5662C4F0D1B66B5A2D86_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3*>(__this + _offset);
	PlayDelayConfig_set_High_mF8E8D49A7B8F7A7C715F5662C4F0D1B66B5A2D86_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::get_Max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_Max_m5482356506C9CCA2C6739B39D89320E4D0D3BE27 (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, const RuntimeMethod* method) 
{
	{
		// public int Max  { get; set; } // ms: Audio player guarantees that the delay never exceeds this value.
		int32_t L_0 = __this->___U3CMaxU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t PlayDelayConfig_get_Max_m5482356506C9CCA2C6739B39D89320E4D0D3BE27_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayDelayConfig_get_Max_m5482356506C9CCA2C6739B39D89320E4D0D3BE27_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::set_Max(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayDelayConfig_set_Max_mFF12504501810CFBC10C9BAC6103835EDE1DBFFA (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Max  { get; set; } // ms: Audio player guarantees that the delay never exceeds this value.
		int32_t L_0 = ___0_value;
		__this->___U3CMaxU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void PlayDelayConfig_set_Max_mFF12504501810CFBC10C9BAC6103835EDE1DBFFA_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3*>(__this + _offset);
	PlayDelayConfig_set_Max_mFF12504501810CFBC10C9BAC6103835EDE1DBFFA_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Photon.Voice.Unity.UnityAudioOut/PlayDelayConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayDelayConfig__cctor_m22DE30B7AB56CBED4597913491C55DCD999C9981 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static public PlayDelayConfig Default = new PlayDelayConfig { Low = 200, High = 400, Max = 1000 };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3));
		PlayDelayConfig_set_Low_m02ED145DE474B83E8F4334695EC7F1A9BB8833EB_inline((&V_0), ((int32_t)200), NULL);
		PlayDelayConfig_set_High_mF8E8D49A7B8F7A7C715F5662C4F0D1B66B5A2D86_inline((&V_0), ((int32_t)400), NULL);
		PlayDelayConfig_set_Max_mFF12504501810CFBC10C9BAC6103835EDE1DBFFA_inline((&V_0), ((int32_t)1000), NULL);
		PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3 L_0 = V_0;
		((PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3_StaticFields*)il2cpp_codegen_static_fields_for(PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3_il2cpp_TypeInfo_var))->___Default_3 = L_0;
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
// System.String[] Photon.Voice.Unity.UnityMicrophone::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* UnityMicrophone_get_devices_mDF8A614AA77A55929195712974FB191993B9EF5F (const RuntimeMethod* method) 
{
	{
		// return Microphone.devices;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D(NULL);
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.UnityMicrophone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMicrophone_End_m7ECA62ED3E3E43BA268CFEA21C862EF8532A36EB (String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	{
		// Microphone.End(deviceName);
		String_t* L_0 = ___0_deviceName;
		Microphone_End_mB368877FCC9EA1522914006671E637848A0F7CC6(L_0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.UnityMicrophone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMicrophone_GetDeviceCaps_m3F18339A6F63023F4CB82BE7834C223B65FDC7EE (String_t* ___0_deviceName, int32_t* ___1_minFreq, int32_t* ___2_maxFreq, const RuntimeMethod* method) 
{
	{
		// Microphone.GetDeviceCaps(deviceName, out minFreq, out maxFreq);
		String_t* L_0 = ___0_deviceName;
		int32_t* L_1 = ___1_minFreq;
		int32_t* L_2 = ___2_maxFreq;
		Microphone_GetDeviceCaps_m8C443A4C8FDA86E23E2C5556C4E3AAA6FD181454(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Int32 Photon.Voice.Unity.UnityMicrophone::GetPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMicrophone_GetPosition_m8878AC0720F6428C7C9F40EE5E785D05E20F7419 (String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	{
		// return Microphone.GetPosition(deviceName);
		String_t* L_0 = ___0_deviceName;
		int32_t L_1;
		L_1 = Microphone_GetPosition_m13F4C8EBE8536893D9AD8388B0E5B46D62E6A459(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Photon.Voice.Unity.UnityMicrophone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityMicrophone_IsRecording_m755508459CA4EC6D8BB21DB72C98DBEFECF63DAF (String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	{
		// return Microphone.IsRecording(deviceName);
		String_t* L_0 = ___0_deviceName;
		bool L_1;
		L_1 = Microphone_IsRecording_m93CA54969E12BF2083326E43794D71F0FED5D653(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.AudioClip Photon.Voice.Unity.UnityMicrophone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* UnityMicrophone_Start_m090FA09D48B01AD499E41C8DAAA0C291F27D2BE8 (String_t* ___0_deviceName, bool ___1_loop, int32_t ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) 
{
	{
		// return Microphone.Start(deviceName, loop, lengthSec, frequency);
		String_t* L_0 = ___0_deviceName;
		bool L_1 = ___1_loop;
		int32_t L_2 = ___2_lengthSec;
		int32_t L_3 = ___3_frequency;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4;
		L_4 = Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E(L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
// System.Void Photon.Voice.IOS.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m00188E228E7C27B99696AC3E6F01176F4B5E623A (MonoPInvokeCallbackAttribute_t9962C0C8B021CDCB64A7876EB5FAD5DDF8AC7009* __this, Type_t* ___0_t, const RuntimeMethod* method) 
{
	{
		// public MonoPInvokeCallbackAttribute(Type t) { type = t; }
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// public MonoPInvokeCallbackAttribute(Type t) { type = t; }
		Type_t* L_0 = ___0_t;
		__this->___type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_0), (void*)L_0);
		// public MonoPInvokeCallbackAttribute(Type t) { type = t; }
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AudioInPusher_nativePushCallback_m7ECC3ADC2CE641DA13D0E55B7BB57FC7BD56389A(int32_t ___0_instanceID, intptr_t ___1_buf, int32_t ___2_len)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	AudioInPusher_nativePushCallback_m7ECC3ADC2CE641DA13D0E55B7BB57FC7BD56389A(___0_instanceID, ___1_buf, ___2_len, NULL);

}
// System.IntPtr Photon.Voice.IOS.AudioInPusher::Photon_Audio_In_CreatePusher(System.Int32,System.Action`3<System.Int32,System.IntPtr,System.Int32>,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioInPusher_Photon_Audio_In_CreatePusher_mDF02DB25358749AF51BD661B656EE438238628A3 (int32_t ___0_instanceID, Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312* ___1_pushCallback, int32_t ___2_sessionCategory, int32_t ___3_sessionMode, int32_t ___4_sessionCategoryOptions, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t, Il2CppMethodPointer, int32_t, int32_t, int32_t);

	// Marshaling of parameter '___1_pushCallback' to native representation
	Il2CppMethodPointer ____1_pushCallback_marshaled = NULL;
	____1_pushCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_pushCallback));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Photon_Audio_In_CreatePusher)(___0_instanceID, ____1_pushCallback_marshaled, ___2_sessionCategory, ___3_sessionMode, ___4_sessionCategoryOptions);

	return returnValue;
}
// System.Void Photon.Voice.IOS.AudioInPusher::Photon_Audio_In_Reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher_Photon_Audio_In_Reset_m8281A0FD02567DDAA01370CD2A88267E19126ED1 (intptr_t ___0_handler, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Photon_Audio_In_Reset)(___0_handler);

}
// System.Void Photon.Voice.IOS.AudioInPusher::Photon_Audio_In_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher_Photon_Audio_In_Destroy_m05D5F1E03DFA05ACB07B36FDD03B0A95019B0B04 (intptr_t ___0_handler, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Photon_Audio_In_Destroy)(___0_handler);

}
// System.Void Photon.Voice.IOS.AudioInPusher::.ctor(Photon.Voice.IOS.AudioSessionParameters,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher__ctor_m349C1075D66899B3DB4ED72CBF02BE5E3CE549CD (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 ___0_sessParam, RuntimeObject* ___1_logger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3C_ctorU3Eb__0_m22458B5B48FF0F67739FB5C7672500BA0095A103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t72E7AE5BA981EB32590B5928B12F4B83201B5261_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DE61F00FE462AF97E2E045C11F49A16271CE4DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass6_0_t72E7AE5BA981EB32590B5928B12F4B83201B5261* L_0 = (U3CU3Ec__DisplayClass6_0_t72E7AE5BA981EB32590B5928B12F4B83201B5261*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t72E7AE5BA981EB32590B5928B12F4B83201B5261_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_m5F1595D8FF5B617EAAE77A58B3CA21713BEDF36E(L_0, NULL);
		U3CU3Ec__DisplayClass6_0_t72E7AE5BA981EB32590B5928B12F4B83201B5261* L_1 = L_0;
		AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 L_2 = ___0_sessParam;
		NullCheck(L_1);
		L_1->___sessParam_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___sessParam_0))->___CategoryOptions_2), (void*)NULL);
		U3CU3Ec__DisplayClass6_0_t72E7AE5BA981EB32590B5928B12F4B83201B5261* L_3 = L_1;
		RuntimeObject* L_4 = ___1_logger;
		NullCheck(L_3);
		L_3->___logger_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___logger_2), (void*)L_4);
		// public AudioInPusher(AudioSessionParameters sessParam, ILogger logger)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		U3CU3Ec__DisplayClass6_0_t72E7AE5BA981EB32590B5928B12F4B83201B5261* L_5 = L_3;
		NullCheck(L_5);
		L_5->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___U3CU3E4__this_1), (void*)__this);
		// var t = new Thread(() =>
		// {
		//     lock (instancePerHandle) // prevent concurrent initialization
		//     {
		//         try
		//         {
		//             var handle = Photon_Audio_In_CreatePusher(instanceCnt, nativePushCallback, (int)sessParam.Category, (int)sessParam.Mode, sessParam.CategoryOptionsToInt());
		//             this.handle = handle;
		//             this.instanceID = instanceCnt;
		//             instancePerHandle.Add(instanceCnt++, this);
		//         }
		//         catch (Exception e)
		//         {
		//             Error = e.ToString();
		//             if (Error == null) // should never happen but since Error used as validity flag, make sure that it's not null
		//             {
		//                 Error = "Exception in AudioInPusher constructor";
		//             }
		//             logger.LogError("[PV] AudioInPusher: " + Error);
		//         }
		//         finally
		//         {
		//             initializationFinished = true;
		//         }
		//     }
		// });
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_6 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3C_ctorU3Eb__0_m22458B5B48FF0F67739FB5C7672500BA0095A103_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_7 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_7, L_6, NULL);
		// t.Name = "IOS AudioInPusher ctr";
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_8 = L_7;
		NullCheck(L_8);
		Thread_set_Name_m53E2BA6E84C04A6393EA5E470E516703CB892E4A(L_8, _stringLiteral0DE61F00FE462AF97E2E045C11F49A16271CE4DA, NULL);
		// t.Start();
		NullCheck(L_8);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_8, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.IOS.AudioInPusher::nativePushCallback(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher_nativePushCallback_m7ECC3ADC2CE641DA13D0E55B7BB57FC7BD56389A (int32_t ___0_instanceID, intptr_t ___1_buf, int32_t ___2_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAECB7D54B0665F8A22C44936E0177359781A6D7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* V_0 = NULL;
	bool V_1 = false;
	Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (instancePerHandle)
		il2cpp_codegen_runtime_class_init_inline(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
		Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_0 = ((AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var))->___instancePerHandle_3;
		V_2 = L_0;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0020:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_3;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_2 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_3 = V_2;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_3), NULL);
			// ok = instancePerHandle.TryGetValue(instanceID, out instance);
			il2cpp_codegen_runtime_class_init_inline(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
			Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_4 = ((AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var))->___instancePerHandle_3;
			int32_t L_5 = ___0_instanceID;
			NullCheck(L_4);
			bool L_6;
			L_6 = Dictionary_2_TryGetValue_mAECB7D54B0665F8A22C44936E0177359781A6D7E(L_4, L_5, (&V_0), Dictionary_2_TryGetValue_mAECB7D54B0665F8A22C44936E0177359781A6D7E_RuntimeMethod_var);
			V_1 = L_6;
			// }
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// if (ok)
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// instance.push(buf, len);
		AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* L_8 = V_0;
		intptr_t L_9 = ___1_buf;
		int32_t L_10 = ___2_len;
		NullCheck(L_8);
		AudioInPusher_push_m29EC3FD9DD31AE8754E04D8433E1A0295B08A6F3(L_8, L_9, L_10, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.IOS.AudioInPusher::SetCallback(System.Action`1<System.Single[]>,Photon.Voice.ObjectFactory`2<System.Single[],System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher_SetCallback_mB4A08B83D82F278FF9E0CC76C7F6540F869ABE2D (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* ___0_callback, RuntimeObject* ___1_bufferFactory, const RuntimeMethod* method) 
{
	{
		// this.bufferFactory = bufferFactory;
		RuntimeObject* L_0 = ___1_bufferFactory;
		__this->___bufferFactory_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bufferFactory_7), (void*)L_0);
		// this.pushCallback = callback;
		Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* L_1 = ___0_callback;
		__this->___pushCallback_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pushCallback_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Photon.Voice.IOS.AudioInPusher::push(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher_push_m29EC3FD9DD31AE8754E04D8433E1A0295B08A6F3 (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, intptr_t ___0_buf, int32_t ___1_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectFactory_2_t9EEA813BF75BBD1954AB292E356F25756B84995D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// if (this.pushCallback != null)
		Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* L_0 = __this->___pushCallback_6;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// var bufManaged = bufferFactory.New(len);
		RuntimeObject* L_1 = __this->___bufferFactory_7;
		int32_t L_2 = ___1_len;
		NullCheck(L_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3;
		L_3 = InterfaceFuncInvoker1< SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t >::Invoke(2 /* TType Photon.Voice.ObjectFactory`2<System.Single[],System.Int32>::New(TInfo) */, ObjectFactory_2_t9EEA813BF75BBD1954AB292E356F25756B84995D_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		// Marshal.Copy(buf, bufManaged, 0, len);
		intptr_t L_4 = ___0_buf;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_0;
		int32_t L_6 = ___1_len;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_4, L_5, 0, L_6, NULL);
		// pushCallback(bufManaged);
		Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* L_7 = __this->___pushCallback_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = V_0;
		NullCheck(L_7);
		Action_1_Invoke_mBE0A0BDCAD5FEDE1C45EA97B02BFEB89E5AA3728_inline(L_7, L_8, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Int32 Photon.Voice.IOS.AudioInPusher::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioInPusher_get_Channels_m3E595A0BA2B7E8679315A502A6B1AB0330C68B2D (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, const RuntimeMethod* method) 
{
	{
		// public int Channels { get { return 1; } }
		return 1;
	}
}
// System.Int32 Photon.Voice.IOS.AudioInPusher::get_SamplingRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioInPusher_get_SamplingRate_m6D582727EE20605EFAF3A6B14FF9F15AEA175D2A (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, const RuntimeMethod* method) 
{
	{
		// public int SamplingRate { get { return 48000; } }
		return ((int32_t)48000);
	}
}
// System.String Photon.Voice.IOS.AudioInPusher::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioInPusher_get_Error_mFA84923D071C4EE517FE40B5B355B6C9F04C9A5B (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Photon.Voice.IOS.AudioInPusher::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher_set_Error_m3ED820030B96BEE801EC05210BDCB1E614576E3F (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CErrorU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Void Photon.Voice.IOS.AudioInPusher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher_Reset_m51A855C1FBC16E36644B8B0253AF060EE8F858C9 (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (instancePerHandle)
		il2cpp_codegen_runtime_class_init_inline(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
		Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_0 = ((AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var))->___instancePerHandle_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0038;
					}
				}
				{
					Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0038:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (handle != IntPtr.Zero)
				intptr_t L_4 = __this->___handle_4;
				intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_6;
				L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_002d_1;
				}
			}
			{
				// Photon_Audio_In_Reset(handle);
				intptr_t L_7 = __this->___handle_4;
				il2cpp_codegen_runtime_class_init_inline(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
				AudioInPusher_Photon_Audio_In_Reset_m8281A0FD02567DDAA01370CD2A88267E19126ED1(L_7, NULL);
			}

IL_002d_1:
			{
				// }
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.IOS.AudioInPusher::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher_Dispose_m13E80073ADD7582843A2EF2A6963E3305D1F9246 (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m465DF5327AEE535C99FA8D59A3154A82B7E6165F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (instancePerHandle)
		il2cpp_codegen_runtime_class_init_inline(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
		Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_0 = ((AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var))->___instancePerHandle_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0064;
					}
				}
				{
					Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0064:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// instancePerHandle.Remove(instanceID);
				il2cpp_codegen_runtime_class_init_inline(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
				Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_4 = ((AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var))->___instancePerHandle_3;
				int32_t L_5 = __this->___instanceID_5;
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_Remove_m465DF5327AEE535C99FA8D59A3154A82B7E6165F(L_4, L_5, Dictionary_2_Remove_m465DF5327AEE535C99FA8D59A3154A82B7E6165F_RuntimeMethod_var);
				goto IL_0029_1;
			}

IL_0023_1:
			{
				// Thread.Sleep(1);
				Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(1, NULL);
			}

IL_0029_1:
			{
				// while (!initializationFinished) // should never happen because of lock if the thread in constructor started before Dispose() call
				bool L_7 = __this->___initializationFinished_1;
				if (!L_7)
				{
					goto IL_0023_1;
				}
			}
			{
				// if (handle != IntPtr.Zero)
				intptr_t L_8 = __this->___handle_4;
				intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_10;
				L_10 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_8, L_9, NULL);
				if (!L_10)
				{
					goto IL_0059_1;
				}
			}
			{
				// Photon_Audio_In_Destroy(handle);
				intptr_t L_11 = __this->___handle_4;
				il2cpp_codegen_runtime_class_init_inline(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
				AudioInPusher_Photon_Audio_In_Destroy_m05D5F1E03DFA05ACB07B36FDD03B0A95019B0B04(L_11, NULL);
				// handle = IntPtr.Zero;
				intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				__this->___handle_4 = L_12;
			}

IL_0059_1:
			{
				// }
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.IOS.AudioInPusher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInPusher__cctor_m55154DC1A28491A73AAC80A77C67F2DB817F5ECB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8C7E924E05C3DB1A058A2836C8EBCE2AC99C2731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<int, AudioInPusher> instancePerHandle = new Dictionary<int, AudioInPusher>();
		Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_0 = (Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282*)il2cpp_codegen_object_new(Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m8C7E924E05C3DB1A058A2836C8EBCE2AC99C2731(L_0, Dictionary_2__ctor_m8C7E924E05C3DB1A058A2836C8EBCE2AC99C2731_RuntimeMethod_var);
		((AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var))->___instancePerHandle_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var))->___instancePerHandle_3), (void*)L_0);
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
void CallbackDelegate_Invoke_m058C18325A5BCC99EF593D6E22219392857AAA5A_Multicast(CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68* __this, int32_t ___0_instanceID, intptr_t ___1_buf, int32_t ___2_len, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68* currentDelegate = reinterpret_cast<CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_instanceID, ___1_buf, ___2_len, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CallbackDelegate_Invoke_m058C18325A5BCC99EF593D6E22219392857AAA5A_OpenInst(CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68* __this, int32_t ___0_instanceID, intptr_t ___1_buf, int32_t ___2_len, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceID, ___1_buf, ___2_len, method);
}
void CallbackDelegate_Invoke_m058C18325A5BCC99EF593D6E22219392857AAA5A_OpenStatic(CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68* __this, int32_t ___0_instanceID, intptr_t ___1_buf, int32_t ___2_len, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceID, ___1_buf, ___2_len, method);
}
void CallbackDelegate_Invoke_m058C18325A5BCC99EF593D6E22219392857AAA5A_OpenStaticInvoker(CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68* __this, int32_t ___0_instanceID, intptr_t ___1_buf, int32_t ___2_len, const RuntimeMethod* method)
{
	InvokerActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_instanceID, ___1_buf, ___2_len);
}
void CallbackDelegate_Invoke_m058C18325A5BCC99EF593D6E22219392857AAA5A_ClosedStaticInvoker(CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68* __this, int32_t ___0_instanceID, intptr_t ___1_buf, int32_t ___2_len, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, int32_t, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_instanceID, ___1_buf, ___2_len);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68 (CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68* __this, int32_t ___0_instanceID, intptr_t ___1_buf, int32_t ___2_len, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_instanceID, ___1_buf, ___2_len);

}
// System.Void Photon.Voice.IOS.AudioInPusher/CallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDelegate__ctor_mE81AC3DCA8A4F54C6663B6A1168535C04F1F8E1B (CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CallbackDelegate_Invoke_m058C18325A5BCC99EF593D6E22219392857AAA5A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CallbackDelegate_Invoke_m058C18325A5BCC99EF593D6E22219392857AAA5A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CallbackDelegate_Invoke_m058C18325A5BCC99EF593D6E22219392857AAA5A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CallbackDelegate_Invoke_m058C18325A5BCC99EF593D6E22219392857AAA5A_Multicast;
}
// System.Void Photon.Voice.IOS.AudioInPusher/CallbackDelegate::Invoke(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDelegate_Invoke_m058C18325A5BCC99EF593D6E22219392857AAA5A (CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68* __this, int32_t ___0_instanceID, intptr_t ___1_buf, int32_t ___2_len, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instanceID, ___1_buf, ___2_len, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Photon.Voice.IOS.AudioInPusher/CallbackDelegate::BeginInvoke(System.Int32,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackDelegate_BeginInvoke_m9389BF87B6E797EDD57FF6E05B92F9B131A22D48 (CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68* __this, int32_t ___0_instanceID, intptr_t ___1_buf, int32_t ___2_len, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_instanceID);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_buf);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_len);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Photon.Voice.IOS.AudioInPusher/CallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDelegate_EndInvoke_m0A690E18509C0AA4ADB2A12803B67D9B2CF60CBB (CallbackDelegate_t0D50045E5A7AB571465243948CA3A1AFA3596A68* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m5F1595D8FF5B617EAAE77A58B3CA21713BEDF36E (U3CU3Ec__DisplayClass6_0_t72E7AE5BA981EB32590B5928B12F4B83201B5261* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3C_ctorU3Eb__0_m22458B5B48FF0F67739FB5C7672500BA0095A103 (U3CU3Ec__DisplayClass6_0_t72E7AE5BA981EB32590B5928B12F4B83201B5261* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioInPusher_nativePushCallback_m7ECC3ADC2CE641DA13D0E55B7BB57FC7BD56389A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m28A0A0C35B77AC1452D4E44B17CDD16113F5BE86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* V_0 = NULL;
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// lock (instancePerHandle) // prevent concurrent initialization
		il2cpp_codegen_runtime_class_init_inline(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
		Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_0 = ((AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var))->___instancePerHandle_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e6:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00ef;
					}
				}
				{
					Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00ef:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00d9_1:
					{// begin finally (depth: 2)
						// initializationFinished = true;
						AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* L_4 = __this->___U3CU3E4__this_1;
						NullCheck(L_4);
						L_4->___initializationFinished_1 = (bool)1;
						// }
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					try
					{// begin try (depth: 3)
						// var handle = Photon_Audio_In_CreatePusher(instanceCnt, nativePushCallback, (int)sessParam.Category, (int)sessParam.Mode, sessParam.CategoryOptionsToInt());
						il2cpp_codegen_runtime_class_init_inline(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var);
						int32_t L_5 = ((AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var))->___instanceCnt_2;
						Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312* L_6 = (Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312*)il2cpp_codegen_object_new(Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312_il2cpp_TypeInfo_var);
						NullCheck(L_6);
						Action_3__ctor_mBFCA39814E57ACF92B00660146991BFB608B87C8(L_6, NULL, (intptr_t)((void*)AudioInPusher_nativePushCallback_m7ECC3ADC2CE641DA13D0E55B7BB57FC7BD56389A_RuntimeMethod_var), NULL);
						AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* L_7 = (&__this->___sessParam_0);
						int32_t L_8 = L_7->___Category_0;
						AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* L_9 = (&__this->___sessParam_0);
						int32_t L_10 = L_9->___Mode_1;
						AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* L_11 = (&__this->___sessParam_0);
						int32_t L_12;
						L_12 = AudioSessionParameters_CategoryOptionsToInt_mE9ED527540A96EB5C1BB030E55DC861C230C3A28(L_11, NULL);
						intptr_t L_13;
						L_13 = AudioInPusher_Photon_Audio_In_CreatePusher_mDF02DB25358749AF51BD661B656EE438238628A3(L_5, L_6, L_8, L_10, L_12, NULL);
						V_2 = L_13;
						// this.handle = handle;
						AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* L_14 = __this->___U3CU3E4__this_1;
						intptr_t L_15 = V_2;
						NullCheck(L_14);
						L_14->___handle_4 = L_15;
						// this.instanceID = instanceCnt;
						AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* L_16 = __this->___U3CU3E4__this_1;
						int32_t L_17 = ((AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var))->___instanceCnt_2;
						NullCheck(L_16);
						L_16->___instanceID_5 = L_17;
						// instancePerHandle.Add(instanceCnt++, this);
						Dictionary_2_t6612A5030C0206289C1D7286D4FFC97494DF1282* L_18 = ((AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var))->___instancePerHandle_3;
						int32_t L_19 = ((AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var))->___instanceCnt_2;
						int32_t L_20 = L_19;
						((AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44_il2cpp_TypeInfo_var))->___instanceCnt_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
						AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* L_21 = __this->___U3CU3E4__this_1;
						NullCheck(L_18);
						Dictionary_2_Add_m28A0A0C35B77AC1452D4E44B17CDD16113F5BE86(L_18, L_20, L_21, Dictionary_2_Add_m28A0A0C35B77AC1452D4E44B17CDD16113F5BE86_RuntimeMethod_var);
						// }
						goto IL_00f0;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
						{
							IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
							goto CATCH_0083_2;
						}
						throw e;
					}

CATCH_0083_2:
					{// begin catch(System.Exception)
						{
							// catch (Exception e)
							V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
							// Error = e.ToString();
							AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* L_22 = __this->___U3CU3E4__this_1;
							Exception_t* L_23 = V_3;
							NullCheck(L_23);
							String_t* L_24;
							L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
							NullCheck(L_22);
							AudioInPusher_set_Error_m3ED820030B96BEE801EC05210BDCB1E614576E3F_inline(L_22, L_24, NULL);
							// if (Error == null) // should never happen but since Error used as validity flag, make sure that it's not null
							AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* L_25 = __this->___U3CU3E4__this_1;
							NullCheck(L_25);
							String_t* L_26;
							L_26 = AudioInPusher_get_Error_mFA84923D071C4EE517FE40B5B355B6C9F04C9A5B_inline(L_25, NULL);
							if (L_26)
							{
								goto IL_00b2_2;
							}
						}
						{
							// Error = "Exception in AudioInPusher constructor";
							AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* L_27 = __this->___U3CU3E4__this_1;
							NullCheck(L_27);
							AudioInPusher_set_Error_m3ED820030B96BEE801EC05210BDCB1E614576E3F_inline(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87611C547FCC3083E7DAFD5589BDA6DC1F2B9D53)), NULL);
						}

IL_00b2_2:
						{
							// logger.LogError("[PV] AudioInPusher: " + Error);
							RuntimeObject* L_28 = __this->___logger_2;
							AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* L_29 = __this->___U3CU3E4__this_1;
							NullCheck(L_29);
							String_t* L_30;
							L_30 = AudioInPusher_get_Error_mFA84923D071C4EE517FE40B5B355B6C9F04C9A5B_inline(L_29, NULL);
							String_t* L_31;
							L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17B18DAA2E5F590F3527988AF3B31BFB53EA0EC2)), L_30, NULL);
							ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32;
							L_32 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
							NullCheck(L_28);
							InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var)), L_28, L_31, L_32);
							// }
							IL2CPP_POP_ACTIVE_EXCEPTION();
							goto IL_00f0;
						}
					}// end catch (depth: 3)
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f0:
	{
		// });
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
// System.IntPtr Photon.Voice.IOS.AudioInReader::Photon_Audio_In_CreateReader(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioInReader_Photon_Audio_In_CreateReader_m16B7A933EA94F95051074DE48E7851B9E59B054C (int32_t ___0_sessionCategory, int32_t ___1_sessionMode, int32_t ___2_sessionCategoryOptions, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Photon_Audio_In_CreateReader)(___0_sessionCategory, ___1_sessionMode, ___2_sessionCategoryOptions);

	return returnValue;
}
// System.Void Photon.Voice.IOS.AudioInReader::Photon_Audio_In_Reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInReader_Photon_Audio_In_Reset_m17031881C2DAA6876876A2FD28D5A02432B0746B (intptr_t ___0_handler, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Photon_Audio_In_Reset)(___0_handler);

}
// System.Void Photon.Voice.IOS.AudioInReader::Photon_Audio_In_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInReader_Photon_Audio_In_Destroy_mE9D63E1DF85461A4543362D496D733092B47F91F (intptr_t ___0_handler, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Photon_Audio_In_Destroy)(___0_handler);

}
// System.Boolean Photon.Voice.IOS.AudioInReader::Photon_Audio_In_Read(System.IntPtr,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioInReader_Photon_Audio_In_Read_m345D1586CCA97F641CE3DF8096A3C8BAFC74D375 (intptr_t ___0_handle, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_buf, int32_t ___2_len, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t);

	// Marshaling of parameter '___1_buf' to native representation
	float* ____1_buf_marshaled = NULL;
	if (___1_buf != NULL)
	{
		____1_buf_marshaled = reinterpret_cast<float*>((___1_buf)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Photon_Audio_In_Read)(___0_handle, ____1_buf_marshaled, ___2_len);

	return static_cast<bool>(returnValue);
}
// System.Void Photon.Voice.IOS.AudioInReader::.ctor(Photon.Voice.IOS.AudioSessionParameters,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInReader__ctor_mD6469D7A8ACFA4BCD18E173DE10753AD903C55E5 (AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* __this, AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 ___0_sessParam, RuntimeObject* ___1_logger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3C_ctorU3Eb__0_mA595CC52903007ABCA41E49E3AD71D9971F49F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t350C93BC6ED05D9151E3BA915616B6FEF1229CDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDAC475879A58A818246AC1E033EA3F1055B1B90);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass7_0_t350C93BC6ED05D9151E3BA915616B6FEF1229CDD* L_0 = (U3CU3Ec__DisplayClass7_0_t350C93BC6ED05D9151E3BA915616B6FEF1229CDD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t350C93BC6ED05D9151E3BA915616B6FEF1229CDD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_m8D76AD582B14CCE0DFA759829F3275C434B74244(L_0, NULL);
		U3CU3Ec__DisplayClass7_0_t350C93BC6ED05D9151E3BA915616B6FEF1229CDD* L_1 = L_0;
		AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 L_2 = ___0_sessParam;
		NullCheck(L_1);
		L_1->___sessParam_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___sessParam_1))->___CategoryOptions_2), (void*)NULL);
		U3CU3Ec__DisplayClass7_0_t350C93BC6ED05D9151E3BA915616B6FEF1229CDD* L_3 = L_1;
		RuntimeObject* L_4 = ___1_logger;
		NullCheck(L_3);
		L_3->___logger_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___logger_2), (void*)L_4);
		// public AudioInReader(AudioSessionParameters sessParam, ILogger logger)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		U3CU3Ec__DisplayClass7_0_t350C93BC6ED05D9151E3BA915616B6FEF1229CDD* L_5 = L_3;
		NullCheck(L_5);
		L_5->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___U3CU3E4__this_0), (void*)__this);
		// var t = new Thread(() =>
		// {
		//     lock (this)
		//     {
		//         try
		//         {
		//             var audioIn = Photon_Audio_In_CreateReader((int)sessParam.Category, (int)sessParam.Mode, sessParam.CategoryOptionsToInt());
		//             lock (this)
		//             {
		//                 this.audioIn = audioIn;
		//             }
		//         }
		//         catch (Exception e)
		//         {
		//             Error = e.ToString();
		//             if (Error == null) // should never happen but since Error used as validity flag, make sure that it's not null
		//             {
		//                 Error = "Exception in AudioInReader constructor";
		//             }
		//             logger.LogError("[PV] AudioInReader: " + Error);
		//         }
		//         finally
		//         {
		//             initializationFinished = true;
		//         }
		//     }
		// });
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_6 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3C_ctorU3Eb__0_mA595CC52903007ABCA41E49E3AD71D9971F49F25_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_7 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_7, L_6, NULL);
		// t.Name = "IOS AudioInReader ctr";
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_8 = L_7;
		NullCheck(L_8);
		Thread_set_Name_m53E2BA6E84C04A6393EA5E470E516703CB892E4A(L_8, _stringLiteralBDAC475879A58A818246AC1E033EA3F1055B1B90, NULL);
		// t.Start();
		NullCheck(L_8);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_8, NULL);
		// }
		return;
	}
}
// System.Int32 Photon.Voice.IOS.AudioInReader::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioInReader_get_Channels_m645473F5AA5E76D974E232386230B1112FE867DC (AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* __this, const RuntimeMethod* method) 
{
	{
		// public int Channels { get { return 1; } }
		return 1;
	}
}
// System.Int32 Photon.Voice.IOS.AudioInReader::get_SamplingRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioInReader_get_SamplingRate_mB6F4BDA5315A592541E930D663183B9D6E77CDEC (AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* __this, const RuntimeMethod* method) 
{
	{
		// public int SamplingRate { get { return 48000; } }
		return ((int32_t)48000);
	}
}
// System.String Photon.Voice.IOS.AudioInReader::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioInReader_get_Error_mFA0D8B210B008508C767C10CC7AB9788CEAFA58D (AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Photon.Voice.IOS.AudioInReader::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInReader_set_Error_m96C7DDF9509BADE31E7676A8F033299AA9B34A9B (AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CErrorU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Photon.Voice.IOS.AudioInReader::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInReader_Reset_m2AC53152EEB199389A416B92D8DE6132576CBBC3 (AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_0034;
					}
				}
				{
					AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_2 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
				// if (audioIn != IntPtr.Zero)
				intptr_t L_3 = __this->___audioIn_1;
				intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_5;
				L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
				if (!L_5)
				{
					goto IL_0029_1;
				}
			}
			{
				// Photon_Audio_In_Reset(audioIn);
				intptr_t L_6 = __this->___audioIn_1;
				AudioInReader_Photon_Audio_In_Reset_m17031881C2DAA6876876A2FD28D5A02432B0746B(L_6, NULL);
			}

IL_0029_1:
			{
				// }
				goto IL_0035;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.IOS.AudioInReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInReader_Dispose_m32BE35D5D18ACAC7FAC7FE0F1968E57DF2789B23 (AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_004f;
					}
				}
				{
					AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_004f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_2 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
				goto IL_0014_1;
			}

IL_000e_1:
			{
				// Thread.Sleep(1);
				Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(1, NULL);
			}

IL_0014_1:
			{
				// while (!initializationFinished) // should never happen because of lock if the thread in constructor started before Dispose() call
				bool L_3 = __this->___initializationFinished_2;
				if (!L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				// if (audioIn != IntPtr.Zero)
				intptr_t L_4 = __this->___audioIn_1;
				intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_6;
				L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_0044_1;
				}
			}
			{
				// Photon_Audio_In_Destroy(audioIn);
				intptr_t L_7 = __this->___audioIn_1;
				AudioInReader_Photon_Audio_In_Destroy_mE9D63E1DF85461A4543362D496D733092B47F91F(L_7, NULL);
				// audioIn = IntPtr.Zero;
				intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				__this->___audioIn_1 = L_8;
			}

IL_0044_1:
			{
				// }
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.IOS.AudioInReader::Read(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioInReader_Read_m6244B297A7D97187F74FCEC21950E2C1002CB45C (AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_buf, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return audioIn != IntPtr.Zero && Photon_Audio_In_Read(audioIn, buf, buf.Length);
		intptr_t L_0 = __this->___audioIn_1;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_3 = __this->___audioIn_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___0_buf;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___0_buf;
		NullCheck(L_5);
		bool L_6;
		L_6 = AudioInReader_Photon_Audio_In_Read_m345D1586CCA97F641CE3DF8096A3C8BAFC74D375(L_3, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		return L_6;
	}

IL_0022:
	{
		return (bool)0;
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
// System.Void Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m8D76AD582B14CCE0DFA759829F3275C434B74244 (U3CU3Ec__DisplayClass7_0_t350C93BC6ED05D9151E3BA915616B6FEF1229CDD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3C_ctorU3Eb__0_mA595CC52903007ABCA41E49E3AD71D9971F49F25 (U3CU3Ec__DisplayClass7_0_t350C93BC6ED05D9151E3BA915616B6FEF1229CDD* __this, const RuntimeMethod* method) 
{
	AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* V_0 = NULL;
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* V_3 = NULL;
	bool V_4 = false;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// lock (this)
		AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_0 = __this->___U3CU3E4__this_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ca:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00d3;
					}
				}
				{
					AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00d3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00bd_1:
					{// begin finally (depth: 2)
						// initializationFinished = true;
						AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_4 = __this->___U3CU3E4__this_0;
						NullCheck(L_4);
						L_4->___initializationFinished_2 = (bool)1;
						// }
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					try
					{// begin try (depth: 3)
						{
							// var audioIn = Photon_Audio_In_CreateReader((int)sessParam.Category, (int)sessParam.Mode, sessParam.CategoryOptionsToInt());
							AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* L_5 = (&__this->___sessParam_1);
							int32_t L_6 = L_5->___Category_0;
							AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* L_7 = (&__this->___sessParam_1);
							int32_t L_8 = L_7->___Mode_1;
							AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* L_9 = (&__this->___sessParam_1);
							int32_t L_10;
							L_10 = AudioSessionParameters_CategoryOptionsToInt_mE9ED527540A96EB5C1BB030E55DC861C230C3A28(L_9, NULL);
							intptr_t L_11;
							L_11 = AudioInReader_Photon_Audio_In_CreateReader_m16B7A933EA94F95051074DE48E7851B9E59B054C(L_6, L_8, L_10, NULL);
							V_2 = L_11;
							// lock (this)
							AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_12 = __this->___U3CU3E4__this_0;
							V_3 = L_12;
							V_4 = (bool)0;
						}
						{
							auto __finallyBlock = il2cpp::utils::Finally([&]
							{

FINALLY_0058_3:
								{// begin finally (depth: 4)
									{
										bool L_13 = V_4;
										if (!L_13)
										{
											goto IL_0062_3;
										}
									}
									{
										AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_14 = V_3;
										Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_14, NULL);
									}

IL_0062_3:
									{
										return;
									}
								}// end finally (depth: 4)
							});
							try
							{// begin try (depth: 4)
								AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_15 = V_3;
								Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_15, (&V_4), NULL);
								// this.audioIn = audioIn;
								AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_16 = __this->___U3CU3E4__this_0;
								intptr_t L_17 = V_2;
								NullCheck(L_16);
								L_16->___audioIn_1 = L_17;
								// }
								goto IL_0063_3;
							}// end try (depth: 4)
							catch(Il2CppExceptionWrapper& e)
							{
								__finallyBlock.StoreException(e.ex);
							}
						}

IL_0063_3:
						{
							// }
							goto IL_00d4;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
						{
							IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
							goto CATCH_0065_2;
						}
						throw e;
					}

CATCH_0065_2:
					{// begin catch(System.Exception)
						{
							// catch (Exception e)
							V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
							// Error = e.ToString();
							AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_18 = __this->___U3CU3E4__this_0;
							Exception_t* L_19 = V_5;
							NullCheck(L_19);
							String_t* L_20;
							L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
							NullCheck(L_18);
							AudioInReader_set_Error_m96C7DDF9509BADE31E7676A8F033299AA9B34A9B_inline(L_18, L_20, NULL);
							// if (Error == null) // should never happen but since Error used as validity flag, make sure that it's not null
							AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_21 = __this->___U3CU3E4__this_0;
							NullCheck(L_21);
							String_t* L_22;
							L_22 = AudioInReader_get_Error_mFA0D8B210B008508C767C10CC7AB9788CEAFA58D_inline(L_21, NULL);
							if (L_22)
							{
								goto IL_0096_2;
							}
						}
						{
							// Error = "Exception in AudioInReader constructor";
							AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_23 = __this->___U3CU3E4__this_0;
							NullCheck(L_23);
							AudioInReader_set_Error_m96C7DDF9509BADE31E7676A8F033299AA9B34A9B_inline(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral736977A8DC43E09C147CAFC8536005DA4284D6C8)), NULL);
						}

IL_0096_2:
						{
							// logger.LogError("[PV] AudioInReader: " + Error);
							RuntimeObject* L_24 = __this->___logger_2;
							AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* L_25 = __this->___U3CU3E4__this_0;
							NullCheck(L_25);
							String_t* L_26;
							L_26 = AudioInReader_get_Error_mFA0D8B210B008508C767C10CC7AB9788CEAFA58D_inline(L_25, NULL);
							String_t* L_27;
							L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD12049269E84B94ADC67D8C867306BAEEB90416C)), L_26, NULL);
							ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28;
							L_28 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
							NullCheck(L_24);
							InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var)), L_24, L_27, L_28);
							// }
							IL2CPP_POP_ACTIVE_EXCEPTION();
							goto IL_00d4;
						}
					}// end catch (depth: 3)
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d4:
	{
		// });
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
// Conversion methods for marshalling of: Photon.Voice.IOS.AudioSessionParameters
IL2CPP_EXTERN_C void AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshal_pinvoke(const AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37& unmarshaled, AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_pinvoke& marshaled)
{
	marshaled.___Category_0 = unmarshaled.___Category_0;
	marshaled.___Mode_1 = unmarshaled.___Mode_1;
	if (unmarshaled.___CategoryOptions_2 != NULL)
	{
		il2cpp_array_size_t _unmarshaledCategoryOptions_Length = (unmarshaled.___CategoryOptions_2)->max_length;
		marshaled.___CategoryOptions_2 = il2cpp_codegen_marshal_allocate_array<int32_t>(_unmarshaledCategoryOptions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledCategoryOptions_Length); i++)
		{
			(marshaled.___CategoryOptions_2)[i] = (unmarshaled.___CategoryOptions_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___CategoryOptions_2 = NULL;
	}
}
IL2CPP_EXTERN_C void AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshal_pinvoke_back(const AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_pinvoke& marshaled, AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledCategory_temp_0 = 0;
	unmarshaledCategory_temp_0 = marshaled.___Category_0;
	unmarshaled.___Category_0 = unmarshaledCategory_temp_0;
	int32_t unmarshaledMode_temp_1 = 0;
	unmarshaledMode_temp_1 = marshaled.___Mode_1;
	unmarshaled.___Mode_1 = unmarshaledMode_temp_1;
	if (marshaled.___CategoryOptions_2 != NULL)
	{
		if (unmarshaled.___CategoryOptions_2 == NULL)
		{
			unmarshaled.___CategoryOptions_2 = reinterpret_cast<AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*>((AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)SZArrayNew(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___CategoryOptions_2), (void*)reinterpret_cast<AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*>((AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)SZArrayNew(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___CategoryOptions_2)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___CategoryOptions_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___CategoryOptions_2)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: Photon.Voice.IOS.AudioSessionParameters
IL2CPP_EXTERN_C void AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshal_pinvoke_cleanup(AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_pinvoke& marshaled)
{
	if (marshaled.___CategoryOptions_2 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___CategoryOptions_2);
		marshaled.___CategoryOptions_2 = NULL;
	}
}
// Conversion methods for marshalling of: Photon.Voice.IOS.AudioSessionParameters
IL2CPP_EXTERN_C void AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshal_com(const AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37& unmarshaled, AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_com& marshaled)
{
	marshaled.___Category_0 = unmarshaled.___Category_0;
	marshaled.___Mode_1 = unmarshaled.___Mode_1;
	if (unmarshaled.___CategoryOptions_2 != NULL)
	{
		il2cpp_array_size_t _unmarshaledCategoryOptions_Length = (unmarshaled.___CategoryOptions_2)->max_length;
		marshaled.___CategoryOptions_2 = il2cpp_codegen_marshal_allocate_array<int32_t>(_unmarshaledCategoryOptions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledCategoryOptions_Length); i++)
		{
			(marshaled.___CategoryOptions_2)[i] = (unmarshaled.___CategoryOptions_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___CategoryOptions_2 = NULL;
	}
}
IL2CPP_EXTERN_C void AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshal_com_back(const AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_com& marshaled, AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledCategory_temp_0 = 0;
	unmarshaledCategory_temp_0 = marshaled.___Category_0;
	unmarshaled.___Category_0 = unmarshaledCategory_temp_0;
	int32_t unmarshaledMode_temp_1 = 0;
	unmarshaledMode_temp_1 = marshaled.___Mode_1;
	unmarshaled.___Mode_1 = unmarshaledMode_temp_1;
	if (marshaled.___CategoryOptions_2 != NULL)
	{
		if (unmarshaled.___CategoryOptions_2 == NULL)
		{
			unmarshaled.___CategoryOptions_2 = reinterpret_cast<AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*>((AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)SZArrayNew(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___CategoryOptions_2), (void*)reinterpret_cast<AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*>((AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)SZArrayNew(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___CategoryOptions_2)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___CategoryOptions_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___CategoryOptions_2)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: Photon.Voice.IOS.AudioSessionParameters
IL2CPP_EXTERN_C void AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshal_com_cleanup(AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_com& marshaled)
{
	if (marshaled.___CategoryOptions_2 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___CategoryOptions_2);
		marshaled.___CategoryOptions_2 = NULL;
	}
}
// System.Int32 Photon.Voice.IOS.AudioSessionParameters::CategoryOptionsToInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSessionParameters_CategoryOptionsToInt_mE9ED527540A96EB5C1BB030E55DC861C230C3A28 (AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int opt = 0;
		V_0 = 0;
		// if (CategoryOptions != null)
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_0 = __this->___CategoryOptions_2;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// for (int i = 0; i < CategoryOptions.Length; i++)
		V_1 = 0;
		goto IL_001d;
	}

IL_000e:
	{
		// opt |= (int)CategoryOptions[i];
		int32_t L_1 = V_0;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_2 = __this->___CategoryOptions_2;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (int32_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)(L_1|L_5));
		// for (int i = 0; i < CategoryOptions.Length; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001d:
	{
		// for (int i = 0; i < CategoryOptions.Length; i++)
		int32_t L_7 = V_1;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_8 = __this->___CategoryOptions_2;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000e;
		}
	}

IL_0028:
	{
		// return opt;
		int32_t L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t AudioSessionParameters_CategoryOptionsToInt_mE9ED527540A96EB5C1BB030E55DC861C230C3A28_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AudioSessionParameters_CategoryOptionsToInt_mE9ED527540A96EB5C1BB030E55DC861C230C3A28(_thisAdjusted, method);
	return _returnValue;
}
// System.String Photon.Voice.IOS.AudioSessionParameters::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioSessionParameters_ToString_mEB3B038EDA3373B3B35BB0DF7CB7D0D66EAFEDC7 (AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionCategoryOption_tB65209ED5D05B821BF3DF03109C70597F97AAAF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionCategory_t1C36CB8E4F7F94A6DE2B1D509AD12AF9BA667969_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionMode_tF805910784023C190A8DD567B87F621B9EA11F7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8460AECBE820085F2A6606F461369091075CC52F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var opt = "[";
		V_0 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
		// if (CategoryOptions != null)
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_0 = __this->___CategoryOptions_2;
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		// for (int i = 0; i < CategoryOptions.Length; i++)
		V_1 = 0;
		goto IL_004d;
	}

IL_0012:
	{
		// opt += CategoryOptions[i];
		String_t* L_1 = V_0;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_2 = __this->___CategoryOptions_2;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Il2CppFakeBox<int32_t> L_4(AudioSessionCategoryOption_tB65209ED5D05B821BF3DF03109C70597F97AAAF3_il2cpp_TypeInfo_var, ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))));
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, L_5, NULL);
		V_0 = L_6;
		// if (i != CategoryOptions.Length - 1)
		int32_t L_7 = V_1;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_8 = __this->___CategoryOptions_2;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1)))))
		{
			goto IL_0049;
		}
	}
	{
		// opt += ", ";
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		V_0 = L_10;
	}

IL_0049:
	{
		// for (int i = 0; i < CategoryOptions.Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < CategoryOptions.Length; i++)
		int32_t L_12 = V_1;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_13 = __this->___CategoryOptions_2;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0012;
		}
	}

IL_0058:
	{
		// opt += "]";
		String_t* L_14 = V_0;
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_0 = L_15;
		// return string.Format("category = {0}, mode = {1}, options = {2}", Category, Mode, opt);
		int32_t L_16 = __this->___Category_0;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(AudioSessionCategory_t1C36CB8E4F7F94A6DE2B1D509AD12AF9BA667969_il2cpp_TypeInfo_var, &L_17);
		int32_t L_19 = __this->___Mode_1;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(AudioSessionMode_tF805910784023C190A8DD567B87F621B9EA11F7D_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = V_0;
		String_t* L_23;
		L_23 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral8460AECBE820085F2A6606F461369091075CC52F, L_18, L_21, L_22, NULL);
		return L_23;
	}
}
IL2CPP_EXTERN_C  String_t* AudioSessionParameters_ToString_mEB3B038EDA3373B3B35BB0DF7CB7D0D66EAFEDC7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AudioSessionParameters_ToString_mEB3B038EDA3373B3B35BB0DF7CB7D0D66EAFEDC7(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.IOS.AudioSessionParametersPresets::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSessionParametersPresets__cctor_mBB0B1694F7E614CEDDA3B549F375517DC6387266 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static AudioSessionParameters Game = new AudioSessionParameters()
		// {
		//     Category = AudioSessionCategory.PlayAndRecord,
		//     Mode = AudioSessionMode.Default,
		//     CategoryOptions = new AudioSessionCategoryOption[] { AudioSessionCategoryOption.DefaultToSpeaker, AudioSessionCategoryOption.AllowBluetooth }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37));
		(&V_0)->___Category_0 = 4;
		(&V_0)->___Mode_1 = 0;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_0 = (AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)SZArrayNew(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)8);
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)4);
		(&V_0)->___CategoryOptions_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___CategoryOptions_2), (void*)L_2);
		AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 L_3 = V_0;
		((AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_StaticFields*)il2cpp_codegen_static_fields_for(AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_il2cpp_TypeInfo_var))->___Game_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&((AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_StaticFields*)il2cpp_codegen_static_fields_for(AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_il2cpp_TypeInfo_var))->___Game_0))->___CategoryOptions_2), (void*)NULL);
		//  public static AudioSessionParameters VoIP = new AudioSessionParameters()
		//  {
		//      Category = AudioSessionCategory.PlayAndRecord,
		//      Mode = AudioSessionMode.VoiceChat,
		//      // VoiceChat should have the side effect of setting AVAudioSessionCategoryOptionAllowBluetooth according to doc
		//      // but tests don't confirm this
		//      CategoryOptions = new AudioSessionCategoryOption[] { AudioSessionCategoryOption.AllowBluetooth }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37));
		(&V_0)->___Category_0 = 4;
		(&V_0)->___Mode_1 = 1;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_4 = (AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)SZArrayNew(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var, (uint32_t)1);
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)4);
		(&V_0)->___CategoryOptions_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___CategoryOptions_2), (void*)L_5);
		AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 L_6 = V_0;
		((AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_StaticFields*)il2cpp_codegen_static_fields_for(AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_il2cpp_TypeInfo_var))->___VoIP_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&((AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_StaticFields*)il2cpp_codegen_static_fields_for(AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_il2cpp_TypeInfo_var))->___VoIP_1))->___CategoryOptions_2), (void*)NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_Low_mE975F153D5E9AD3A0F008160AA9BF4CCCACD7740_inline (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, const RuntimeMethod* method) 
{
	{
		// public int Low  { get; set; } // ms: Audio player tries to keep the delay above this value.
		int32_t L_0 = __this->___U3CLowU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_Low_m02ED145DE474B83E8F4334695EC7F1A9BB8833EB_inline (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Low  { get; set; } // ms: Audio player tries to keep the delay above this value.
		int32_t L_0 = ___0_value;
		__this->___U3CLowU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_High_m33F84432D0C924DF39BBEA288D161787C8DF1F54_inline (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, const RuntimeMethod* method) 
{
	{
		// public int High { get; set; } // ms: Audio player tries to keep the delay below this value.
		int32_t L_0 = __this->___U3CHighU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_High_mF8E8D49A7B8F7A7C715F5662C4F0D1B66B5A2D86_inline (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int High { get; set; } // ms: Audio player tries to keep the delay below this value.
		int32_t L_0 = ___0_value;
		__this->___U3CHighU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_Max_m5482356506C9CCA2C6739B39D89320E4D0D3BE27_inline (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, const RuntimeMethod* method) 
{
	{
		// public int Max  { get; set; } // ms: Audio player guarantees that the delay never exceeds this value.
		int32_t L_0 = __this->___U3CMaxU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_Max_mFF12504501810CFBC10C9BAC6103835EDE1DBFFA_inline (PlayDelayConfig_tC82442A62C77086AD9AF5886E1BB864DC63F93E3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Max  { get; set; } // ms: Audio player guarantees that the delay never exceeds this value.
		int32_t L_0 = ___0_value;
		__this->___U3CMaxU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioInPusher_set_Error_m3ED820030B96BEE801EC05210BDCB1E614576E3F_inline (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CErrorU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AudioInPusher_get_Error_mFA84923D071C4EE517FE40B5B355B6C9F04C9A5B_inline (AudioInPusher_t36D38F54740D5B67AF03B4BAA5CDA9EF15BB6A44* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioInReader_set_Error_m96C7DDF9509BADE31E7676A8F033299AA9B34A9B_inline (AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CErrorU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AudioInReader_get_Error_mFA0D8B210B008508C767C10CC7AB9788CEAFA58D_inline (AudioInReader_t8C283C0EA317BD583576BEE4985D824E1B6FF7ED* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
