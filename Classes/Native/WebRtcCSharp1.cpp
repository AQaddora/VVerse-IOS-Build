#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// WebRtcCSharp.DataBuffer
struct DataBuffer_t0A2DEC3990BD03F738A846B15A1DAF1E2510F402;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// WebRtcCSharp.LogCallback
struct LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// WebRtcCSharp.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tB0B31CC7DC3A878B5DBC1D206316B9D58A589A1E;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// WebRtcCSharp.SWIGTYPE_p_libyuv__RotationMode
struct SWIGTYPE_p_libyuv__RotationMode_tA02FF08CA003392BFFA0E9E01A4A31989E459ED6;
// WebRtcCSharp.SWIGTYPE_p_webrtc__I420Buffer
struct SWIGTYPE_p_webrtc__I420Buffer_tB28AD14902195B82BD9231F95171501B62A84ED5;
// WebRtcCSharp.SWIGTYPE_p_webrtc__IceCandidateInterface
struct SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F;
// WebRtcCSharp.SWIGTYPE_p_webrtc__SessionDescriptionInterface
struct SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660;
// WebRtcCSharp.SWIGTYPE_p_webrtc__VideoRotation
struct SWIGTYPE_p_webrtc__VideoRotation_t0DDA379EB55DFFE14612145C2D746047CF4E9EFA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WebRtcCSharp.WebRtcWrap
struct WebRtcWrap_t52183279BCC0C6293FE10BD074B82B54E45371EB;
// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6;
// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException
struct SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A;
// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t196818199DE190D2FBB989271425EC7D2343C661;
// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C;
// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95;
// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C;

IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t196818199DE190D2FBB989271425EC7D2343C661_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGTYPE_p_libyuv__RotationMode_tA02FF08CA003392BFFA0E9E01A4A31989E459ED6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m34EBF8A5064761FA3A1489B58F0FC88F22A91CD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m1A7F32CCCD497644F0D4F54AD803BC783B68531E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mA3831677B0C3CB59A79EAB9F63570D4FCAE5206F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB95333E5EEE5C6FFCF1A8B9EFEB60E7301498FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m8290EEE144C47E4E40A26518F15E4456E66428BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m79369FABDFC4B7A658FB90AA83A833582BA50B29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_mB3905F1943D8A52F63FF86D33C8B55F4D2BFE1BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0DDAA0B11C0577104A3C337CD95BCEB0474778CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m63B0AB9D01F05113151C6F5AEF564CA18A712C4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_mAD82A0B9BB052EE4E2C9494A5C06D29561CF350F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m1678867024287040EAEF9E1A6B603632E949C81C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_mE49ACFFEB5D1BDCA69BA5306BDC2BA5764FCA627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m941534271CDCF96CC46373C3D001D38B687A5AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_mA8895E77BEDB03935FAD2AF1684802D8B9CA66FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m38DA578E6839BE86909501F1021E85EC709E4F2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRtcWrap_ConvertRotationMode_m395D4D09333B58A9E4B0E57315EEDC4F5E1A5B45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRtcWrap_Copy_mAE68A337B1DFA6FFABE8BDD16880331DD499807D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRtcWrap_Copy_mB76C351A459CB3FC6686B4C761239D491A5397B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRtcWrap_IsIceCandidateJson_mA76DED218D9075539821780A7474B59560679CFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRtcWrap_IsSessionDescriptionJson_m14E8CD79F17587E760093F63804D05171D2602E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRtcWrap_Log_mB2A85CC6DC6D5074F6ECCB675070F22A97ECD572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRtcWrap_ParseJsonIceCandidate_m285C91F4A5622F604D0DEA423055387D578F45BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRtcWrap_ParseJsonSessionDescription_m221A084B998A892A033CEA6FA66601C83C17C8E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRtcWrap_SessionDescriptionToJson_mD3463D047AB9E0614A733ACD81996D230C7DC4CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6  : public RuntimeObject
{
};

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException
struct SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A  : public RuntimeObject
{
};

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t196818199DE190D2FBB989271425EC7D2343C661  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// WebRtcCSharp.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tB0B31CC7DC3A878B5DBC1D206316B9D58A589A1E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type WebRtcCSharp.MonoPInvokeCallbackAttribute::type
	Type_t* ___type_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// WebRtcCSharp.DataBuffer
struct DataBuffer_t0A2DEC3990BD03F738A846B15A1DAF1E2510F402  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef WebRtcCSharp.DataBuffer::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean WebRtcCSharp.DataBuffer::swigCMemOwn
	bool ___swigCMemOwn_1;
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

// WebRtcCSharp.SWIGTYPE_p_libyuv__RotationMode
struct SWIGTYPE_p_libyuv__RotationMode_tA02FF08CA003392BFFA0E9E01A4A31989E459ED6  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef WebRtcCSharp.SWIGTYPE_p_libyuv__RotationMode::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
};

// WebRtcCSharp.SWIGTYPE_p_webrtc__I420Buffer
struct SWIGTYPE_p_webrtc__I420Buffer_tB28AD14902195B82BD9231F95171501B62A84ED5  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef WebRtcCSharp.SWIGTYPE_p_webrtc__I420Buffer::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
};

// WebRtcCSharp.SWIGTYPE_p_webrtc__IceCandidateInterface
struct SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef WebRtcCSharp.SWIGTYPE_p_webrtc__IceCandidateInterface::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
};

// WebRtcCSharp.SWIGTYPE_p_webrtc__SessionDescriptionInterface
struct SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef WebRtcCSharp.SWIGTYPE_p_webrtc__SessionDescriptionInterface::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
};

// WebRtcCSharp.SWIGTYPE_p_webrtc__VideoRotation
struct SWIGTYPE_p_webrtc__VideoRotation_t0DDA379EB55DFFE14612145C2D746047CF4E9EFA  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef WebRtcCSharp.SWIGTYPE_p_webrtc__VideoRotation::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// WebRtcCSharp.WebRtcWrap
struct WebRtcWrap_t52183279BCC0C6293FE10BD074B82B54E45371EB  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef WebRtcCSharp.WebRtcWrap::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean WebRtcCSharp.WebRtcWrap::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// WebRtcCSharp.LogCallback
struct LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C  : public MulticastDelegate_t
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C  : public MulticastDelegate_t
{
};

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95  : public MulticastDelegate_t
{
};

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.Attribute

// System.Attribute

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields
{
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___applicationDelegate_0;
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___arithmeticDelegate_1;
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___divideByZeroDelegate_2;
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___indexOutOfRangeDelegate_3;
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___invalidCastDelegate_4;
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___invalidOperationDelegate_5;
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___ioDelegate_6;
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___nullReferenceDelegate_7;
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___outOfMemoryDelegate_8;
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___overflowDelegate_9;
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___systemDelegate_10;
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* ___argumentDelegate_11;
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* ___argumentNullDelegate_12;
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* ___argumentOutOfRangeDelegate_13;
};

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException
struct SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_StaticFields
{
	// System.Int32 WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
};

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException
struct SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_ThreadStaticFields
{
	// System.Exception WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException::pendingException
	Exception_t* ___pendingException_0;
};

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t196818199DE190D2FBB989271425EC7D2343C661_StaticFields
{
	// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* ___stringDelegate_0;
};

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// WebRtcCSharp.MonoPInvokeCallbackAttribute

// WebRtcCSharp.MonoPInvokeCallbackAttribute

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.HandleRef

// System.Runtime.InteropServices.HandleRef

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.ApplicationException

// System.ApplicationException

// WebRtcCSharp.DataBuffer

// WebRtcCSharp.DataBuffer

// System.MulticastDelegate

// System.MulticastDelegate

// WebRtcCSharp.SWIGTYPE_p_libyuv__RotationMode

// WebRtcCSharp.SWIGTYPE_p_libyuv__RotationMode

// WebRtcCSharp.SWIGTYPE_p_webrtc__I420Buffer

// WebRtcCSharp.SWIGTYPE_p_webrtc__I420Buffer

// WebRtcCSharp.SWIGTYPE_p_webrtc__IceCandidateInterface

// WebRtcCSharp.SWIGTYPE_p_webrtc__IceCandidateInterface

// WebRtcCSharp.SWIGTYPE_p_webrtc__SessionDescriptionInterface

// WebRtcCSharp.SWIGTYPE_p_webrtc__SessionDescriptionInterface

// WebRtcCSharp.SWIGTYPE_p_webrtc__VideoRotation

// WebRtcCSharp.SWIGTYPE_p_webrtc__VideoRotation

// System.SystemException

// System.SystemException

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

// WebRtcCSharp.WebRtcWrap

// WebRtcCSharp.WebRtcWrap

// System.ArgumentException

// System.ArgumentException

// System.ArithmeticException

// System.ArithmeticException

// System.AsyncCallback

// System.AsyncCallback

// System.IO.IOException

// System.IO.IOException

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// System.InvalidCastException

// System.InvalidCastException

// System.InvalidOperationException

// System.InvalidOperationException

// WebRtcCSharp.LogCallback

// WebRtcCSharp.LogCallback

// System.NullReferenceException

// System.NullReferenceException

// System.OutOfMemoryException

// System.OutOfMemoryException

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.DivideByZeroException

// System.DivideByZeroException

// System.OverflowException

// System.OverflowException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m34EBF8A5064761FA3A1489B58F0FC88F22A91CD7 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m8290EEE144C47E4E40A26518F15E4456E66428BB (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m79369FABDFC4B7A658FB90AA83A833582BA50B29 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0DDAA0B11C0577104A3C337CD95BCEB0474778CD (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m63B0AB9D01F05113151C6F5AEF564CA18A712C4C (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mAD82A0B9BB052EE4E2C9494A5C06D29561CF350F (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mB3905F1943D8A52F63FF86D33C8B55F4D2BFE1BC (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m1678867024287040EAEF9E1A6B603632E949C81C (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mE49ACFFEB5D1BDCA69BA5306BDC2BA5764FCA627 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m941534271CDCF96CC46373C3D001D38B687A5AAE (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mA8895E77BEDB03935FAD2AF1684802D8B9CA66FB (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m1A7F32CCCD497644F0D4F54AD803BC783B68531E (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mA3831677B0C3CB59A79EAB9F63570D4FCAE5206F (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB95333E5EEE5C6FFCF1A8B9EFEB60E7301498FDD (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Exception WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF (const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6 (Exception_t* ___0_e, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23 (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2 (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, Exception_t* ___2_innerException, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mDEB8E0006B6FBE8D17612D71B6AAEF18CA1F2BFB (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mE53DD4E636AFEFA860A74C66DBCD22EB2CA5FC2B (ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_WebRtcSwig(WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_WebRtcSwig_mE2674A81F559F4ABC42618A05A7820A7733F8712 (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___0_applicationDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___1_arithmeticDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___2_divideByZeroDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___3_indexOutOfRangeDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___4_invalidCastDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___5_invalidOperationDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___6_ioDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___7_nullReferenceDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___8_outOfMemoryDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___9_overflowDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___10_systemExceptionDelegate, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_WebRtcSwig(WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_WebRtcSwig_m574844BB23B961E8F451862FC98E559ABBC18E5C (ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* ___0_argumentDelegate, ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m38DA578E6839BE86909501F1021E85EC709E4F2A (String_t* ___0_cString, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m4F67F956CEAE329CC1AE313B1861A9EDB4275225 (SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_WebRtcSwig(WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_WebRtcSwig_m44538ACE045CF7A595A459FD2583ADBF50A1CF79 (SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* ___0_stringDelegate, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___0_wrapper, intptr_t ___1_handle, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE::delete_WebRtcWrap(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcSwigPINVOKE_delete_WebRtcWrap_mB60F38E6ED373AA4E27E1C05F674266D4C12DF9F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_kSessionDescriptionTypeName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcSwigPINVOKE_WebRtcWrap_kSessionDescriptionTypeName_get_m201B3A26512D71B59DF9524152E9B34329F1F1DF (const RuntimeMethod* method) ;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_kSessionDescriptionSdpName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcSwigPINVOKE_WebRtcWrap_kSessionDescriptionSdpName_get_mD063D22B1D4352F1927EBB1E898929070D97070C (const RuntimeMethod* method) ;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_kCandidateSdpMidName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcSwigPINVOKE_WebRtcWrap_kCandidateSdpMidName_get_mD32D4479D08704E3235406EBDC807A13DBC2F090 (const RuntimeMethod* method) ;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_kCandidateSdpMlineIndexName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcSwigPINVOKE_WebRtcWrap_kCandidateSdpMlineIndexName_get_m99E2A3D43103925BCE6AD06432B52B4E4B550039 (const RuntimeMethod* method) ;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_kCandidateSdpName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcSwigPINVOKE_WebRtcWrap_kCandidateSdpName_get_mBDA447387D98A414E7C16EE9292CED0730A0956D (const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_TestLog(WebRtcCSharp.LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcSwigPINVOKE_WebRtcWrap_TestLog_m92D3D005A66D977CE7838C3D4C253D296313BEFF (LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* ___0_jarg1, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_SetLogCallback(WebRtcCSharp.LogCallback,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcSwigPINVOKE_WebRtcWrap_SetLogCallback_mAE9482F5BA94C172FC7F32C0DFFE74A8BC91FA17 (LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* ___0_jarg1, int32_t ___1_jarg2, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_ResetLogCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcSwigPINVOKE_WebRtcWrap_ResetLogCallback_m394741C48341BB0F6F932F80C647EF97FF389E47 (const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_SetDebugLogLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcSwigPINVOKE_WebRtcWrap_SetDebugLogLevel_mAFE919ED3157A4FC1EA1E03D00767B0C3F1DD986 (int32_t ___0_jarg1, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_Log(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcSwigPINVOKE_WebRtcWrap_Log_m334DCD0EBCD0B247EE7459BEB296B54B565907C9 (String_t* ___0_jarg1, int32_t ___1_jarg2, const RuntimeMethod* method) ;
// System.Boolean WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m9D7C57725172B3859CC1753DA69B613817C79B54 (const RuntimeMethod* method) ;
// System.Boolean WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_IsSessionDescriptionJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcSwigPINVOKE_WebRtcWrap_IsSessionDescriptionJson_m51DB241403DEFDBA2ECB61D57DEE8F7B0BED2FA9 (String_t* ___0_jarg1, const RuntimeMethod* method) ;
// System.Boolean WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_IsIceCandidateJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcSwigPINVOKE_WebRtcWrap_IsIceCandidateJson_mCCEB75E5777AA64424C33DDBD569459254CB3EE1 (String_t* ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_ParseJsonSessionDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WebRtcSwigPINVOKE_WebRtcWrap_ParseJsonSessionDescription_mBF7D9087DDBD9103E28309BBA68B715346A9AE88 (String_t* ___0_jarg1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.SWIGTYPE_p_webrtc__SessionDescriptionInterface::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGTYPE_p_webrtc__SessionDescriptionInterface__ctor_m94E247126D623BC8EF75B631F348BF08E4096F37 (SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660* __this, intptr_t ___0_cPtr, bool ___1_futureUse, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef WebRtcCSharp.SWIGTYPE_p_webrtc__SessionDescriptionInterface::getCPtr(WebRtcCSharp.SWIGTYPE_p_webrtc__SessionDescriptionInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F SWIGTYPE_p_webrtc__SessionDescriptionInterface_getCPtr_m2BAF39254C361B11C7B342E4D36D721AC43B9F67 (SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660* ___0_obj, const RuntimeMethod* method) ;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_ToJson__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcSwigPINVOKE_WebRtcWrap_ToJson__SWIG_0_m7484787A2096F0EA03D2EA41AA1E02B0D01E65F9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_SessionDescriptionToJson(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcSwigPINVOKE_WebRtcWrap_SessionDescriptionToJson_mEB1EFE2681AD10AFC53B07C0BDE924C1BF4C5433 (String_t* ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) ;
// System.IntPtr WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_ParseJsonIceCandidate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WebRtcSwigPINVOKE_WebRtcWrap_ParseJsonIceCandidate_m077EA9E9D0473882FBF20675607F7FE0541629AE (String_t* ___0_jarg1, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.SWIGTYPE_p_webrtc__IceCandidateInterface::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGTYPE_p_webrtc__IceCandidateInterface__ctor_m7F65CADCBDE87D258E321EF3AA52D01574EA58EC (SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F* __this, intptr_t ___0_cPtr, bool ___1_futureUse, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef WebRtcCSharp.SWIGTYPE_p_webrtc__IceCandidateInterface::getCPtr(WebRtcCSharp.SWIGTYPE_p_webrtc__IceCandidateInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F SWIGTYPE_p_webrtc__IceCandidateInterface_getCPtr_m3784EBA98DE4E6038A64F55E5581FD1D026715A5 (SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F* ___0_obj, const RuntimeMethod* method) ;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_ToJson__SWIG_1(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcSwigPINVOKE_WebRtcWrap_ToJson__SWIG_1_mC64D320FC62B25B6E59C928D770E0ECE753D93E3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_IceCandidateToJson(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcSwigPINVOKE_WebRtcWrap_IceCandidateToJson_m9D3DDD16CB11D711DC8D25B684D43B5AEC600E50 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef WebRtcCSharp.DataBuffer::getCPtr(WebRtcCSharp.DataBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F DataBuffer_getCPtr_m79A560F93A90862B2787212B3722D569C4C904C4 (DataBuffer_t0A2DEC3990BD03F738A846B15A1DAF1E2510F402* ___0_obj, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_Copy__SWIG_0(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcSwigPINVOKE_WebRtcWrap_Copy__SWIG_0_mECCCF7F8DE66F13AC2858FA46FA65E86794C78DD (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_jarg2, uint32_t ___2_jarg3, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_Copy__SWIG_1(System.Byte[],System.UInt32,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcSwigPINVOKE_WebRtcWrap_Copy__SWIG_1_m089DB704EF0ADF660FA3F322D35D2D5C6A17A57D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_jarg1, uint32_t ___1_jarg2, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___2_jarg3, const RuntimeMethod* method) ;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_GetWebRtcVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcSwigPINVOKE_WebRtcWrap_GetWebRtcVersion_mA2DE4862174B94B63D049E6F8E57CFB20B7C7308 (const RuntimeMethod* method) ;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcSwigPINVOKE_WebRtcWrap_GetVersion_mF8C666FF1FC895C5B4C4B5636D72B89DC9CF1B9D (const RuntimeMethod* method) ;
// System.Boolean WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_IsDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcSwigPINVOKE_WebRtcWrap_IsDebugBuild_m061BE1C34499B1575F31D9851DC8028582ED4E95 (const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef WebRtcCSharp.SWIGTYPE_p_webrtc__VideoRotation::getCPtr(WebRtcCSharp.SWIGTYPE_p_webrtc__VideoRotation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F SWIGTYPE_p_webrtc__VideoRotation_getCPtr_m209C7EBCFC578DB74F97B98A32EB7F0000152538 (SWIGTYPE_p_webrtc__VideoRotation_t0DDA379EB55DFFE14612145C2D746047CF4E9EFA* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_ConvertRotationMode(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WebRtcSwigPINVOKE_WebRtcWrap_ConvertRotationMode_m1B4F85A9424C3E74AAB1389F062BA1B6C27017AF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void WebRtcCSharp.SWIGTYPE_p_libyuv__RotationMode::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGTYPE_p_libyuv__RotationMode__ctor_mCD6B67FC71971B2D934B22038016F13773246470 (SWIGTYPE_p_libyuv__RotationMode_tA02FF08CA003392BFFA0E9E01A4A31989E459ED6* __this, intptr_t ___0_cPtr, bool ___1_futureUse, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef WebRtcCSharp.SWIGTYPE_p_webrtc__I420Buffer::getCPtr(WebRtcCSharp.SWIGTYPE_p_webrtc__I420Buffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F SWIGTYPE_p_webrtc__I420Buffer_getCPtr_m575FF16E90C3E5E233CD6309573A5EFB7D03D8C1 (SWIGTYPE_p_webrtc__I420Buffer_tB28AD14902195B82BD9231F95171501B62A84ED5* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 WebRtcCSharp.WebRtcSwigPINVOKE::WebRtcWrap_ScaleToI420(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRtcSwigPINVOKE_WebRtcWrap_ScaleToI420_m97BC698CC964BF13F1FAE0E378702A62FAA20574 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_WebRtcSwig(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_WebRtcSwig(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_WebRtcSwig(Il2CppMethodPointer);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m34EBF8A5064761FA3A1489B58F0FC88F22A91CD7(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m34EBF8A5064761FA3A1489B58F0FC88F22A91CD7(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m8290EEE144C47E4E40A26518F15E4456E66428BB(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m8290EEE144C47E4E40A26518F15E4456E66428BB(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m79369FABDFC4B7A658FB90AA83A833582BA50B29(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m79369FABDFC4B7A658FB90AA83A833582BA50B29(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0DDAA0B11C0577104A3C337CD95BCEB0474778CD(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0DDAA0B11C0577104A3C337CD95BCEB0474778CD(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m63B0AB9D01F05113151C6F5AEF564CA18A712C4C(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m63B0AB9D01F05113151C6F5AEF564CA18A712C4C(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_mAD82A0B9BB052EE4E2C9494A5C06D29561CF350F(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_mAD82A0B9BB052EE4E2C9494A5C06D29561CF350F(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mB3905F1943D8A52F63FF86D33C8B55F4D2BFE1BC(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_mB3905F1943D8A52F63FF86D33C8B55F4D2BFE1BC(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m1678867024287040EAEF9E1A6B603632E949C81C(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m1678867024287040EAEF9E1A6B603632E949C81C(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mE49ACFFEB5D1BDCA69BA5306BDC2BA5764FCA627(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_mE49ACFFEB5D1BDCA69BA5306BDC2BA5764FCA627(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m941534271CDCF96CC46373C3D001D38B687A5AAE(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m941534271CDCF96CC46373C3D001D38B687A5AAE(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_mA8895E77BEDB03935FAD2AF1684802D8B9CA66FB(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_mA8895E77BEDB03935FAD2AF1684802D8B9CA66FB(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m1A7F32CCCD497644F0D4F54AD803BC783B68531E(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m1A7F32CCCD497644F0D4F54AD803BC783B68531E(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mA3831677B0C3CB59A79EAB9F63570D4FCAE5206F(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mA3831677B0C3CB59A79EAB9F63570D4FCAE5206F(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB95333E5EEE5C6FFCF1A8B9EFEB60E7301498FDD(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB95333E5EEE5C6FFCF1A8B9EFEB60E7301498FDD(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_WebRtcSwig(WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_WebRtcSwig_mE2674A81F559F4ABC42618A05A7820A7733F8712 (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___0_applicationDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___1_arithmeticDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___2_divideByZeroDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___3_indexOutOfRangeDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___4_invalidCastDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___5_invalidOperationDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___6_ioDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___7_nullReferenceDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___8_outOfMemoryDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___9_overflowDelegate, ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* ___10_systemExceptionDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___0_applicationDelegate' to native representation
	Il2CppMethodPointer ____0_applicationDelegate_marshaled = NULL;
	____0_applicationDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_applicationDelegate));

	// Marshaling of parameter '___1_arithmeticDelegate' to native representation
	Il2CppMethodPointer ____1_arithmeticDelegate_marshaled = NULL;
	____1_arithmeticDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_arithmeticDelegate));

	// Marshaling of parameter '___2_divideByZeroDelegate' to native representation
	Il2CppMethodPointer ____2_divideByZeroDelegate_marshaled = NULL;
	____2_divideByZeroDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_divideByZeroDelegate));

	// Marshaling of parameter '___3_indexOutOfRangeDelegate' to native representation
	Il2CppMethodPointer ____3_indexOutOfRangeDelegate_marshaled = NULL;
	____3_indexOutOfRangeDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___3_indexOutOfRangeDelegate));

	// Marshaling of parameter '___4_invalidCastDelegate' to native representation
	Il2CppMethodPointer ____4_invalidCastDelegate_marshaled = NULL;
	____4_invalidCastDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___4_invalidCastDelegate));

	// Marshaling of parameter '___5_invalidOperationDelegate' to native representation
	Il2CppMethodPointer ____5_invalidOperationDelegate_marshaled = NULL;
	____5_invalidOperationDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___5_invalidOperationDelegate));

	// Marshaling of parameter '___6_ioDelegate' to native representation
	Il2CppMethodPointer ____6_ioDelegate_marshaled = NULL;
	____6_ioDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___6_ioDelegate));

	// Marshaling of parameter '___7_nullReferenceDelegate' to native representation
	Il2CppMethodPointer ____7_nullReferenceDelegate_marshaled = NULL;
	____7_nullReferenceDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___7_nullReferenceDelegate));

	// Marshaling of parameter '___8_outOfMemoryDelegate' to native representation
	Il2CppMethodPointer ____8_outOfMemoryDelegate_marshaled = NULL;
	____8_outOfMemoryDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___8_outOfMemoryDelegate));

	// Marshaling of parameter '___9_overflowDelegate' to native representation
	Il2CppMethodPointer ____9_overflowDelegate_marshaled = NULL;
	____9_overflowDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___9_overflowDelegate));

	// Marshaling of parameter '___10_systemExceptionDelegate' to native representation
	Il2CppMethodPointer ____10_systemExceptionDelegate_marshaled = NULL;
	____10_systemExceptionDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___10_systemExceptionDelegate));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_WebRtcSwig)(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);

}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_WebRtcSwig(WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_WebRtcSwig_m574844BB23B961E8F451862FC98E559ABBC18E5C (ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* ___0_argumentDelegate, ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___0_argumentDelegate' to native representation
	Il2CppMethodPointer ____0_argumentDelegate_marshaled = NULL;
	____0_argumentDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_argumentDelegate));

	// Marshaling of parameter '___1_argumentNullDelegate' to native representation
	Il2CppMethodPointer ____1_argumentNullDelegate_marshaled = NULL;
	____1_argumentNullDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_argumentNullDelegate));

	// Marshaling of parameter '___2_argumentOutOfRangeDelegate' to native representation
	Il2CppMethodPointer ____2_argumentOutOfRangeDelegate_marshaled = NULL;
	____2_argumentOutOfRangeDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_argumentOutOfRangeDelegate));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_WebRtcSwig)(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);

}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m34EBF8A5064761FA3A1489B58F0FC88F22A91CD7 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_2 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_2, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m8290EEE144C47E4E40A26518F15E4456E66428BB (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_2 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_2, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m79369FABDFC4B7A658FB90AA83A833582BA50B29 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_2 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_2, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0DDAA0B11C0577104A3C337CD95BCEB0474778CD (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_2 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_2, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m63B0AB9D01F05113151C6F5AEF564CA18A712C4C (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_2, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mAD82A0B9BB052EE4E2C9494A5C06D29561CF350F (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_2, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mB3905F1943D8A52F63FF86D33C8B55F4D2BFE1BC (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_2, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m1678867024287040EAEF9E1A6B603632E949C81C (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_2, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mE49ACFFEB5D1BDCA69BA5306BDC2BA5764FCA627 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_2 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_2, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m941534271CDCF96CC46373C3D001D38B687A5AAE (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_2, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mA8895E77BEDB03935FAD2AF1684802D8B9CA66FB (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_2 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_2, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m1A7F32CCCD497644F0D4F54AD803BC783B68531E (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		String_t* L_1 = ___1_paramName;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0(L_3, L_0, L_1, L_2, NULL);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_3, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mA3831677B0C3CB59A79EAB9F63570D4FCAE5206F (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___0_message;
		Exception_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, NULL);
		___0_message = L_5;
	}

IL_001c:
	{
		String_t* L_6 = ___1_paramName;
		String_t* L_7 = ___0_message;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_8 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_8, L_6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_8, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB95333E5EEE5C6FFCF1A8B9EFEB60E7301498FDD (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___0_message;
		Exception_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, NULL);
		___0_message = L_5;
	}

IL_001c:
	{
		String_t* L_6 = ___1_paramName;
		String_t* L_7 = ___0_message;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_8, L_6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6(L_8, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m9A2AC49E5565D72585A7D5C39EC304CFB402DAD9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m34EBF8A5064761FA3A1489B58F0FC88F22A91CD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m1A7F32CCCD497644F0D4F54AD803BC783B68531E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_mA3831677B0C3CB59A79EAB9F63570D4FCAE5206F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB95333E5EEE5C6FFCF1A8B9EFEB60E7301498FDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m8290EEE144C47E4E40A26518F15E4456E66428BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m79369FABDFC4B7A658FB90AA83A833582BA50B29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_mB3905F1943D8A52F63FF86D33C8B55F4D2BFE1BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0DDAA0B11C0577104A3C337CD95BCEB0474778CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m63B0AB9D01F05113151C6F5AEF564CA18A712C4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_mAD82A0B9BB052EE4E2C9494A5C06D29561CF350F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m1678867024287040EAEF9E1A6B603632E949C81C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_mE49ACFFEB5D1BDCA69BA5306BDC2BA5764FCA627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_m941534271CDCF96CC46373C3D001D38B687A5AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_mA8895E77BEDB03935FAD2AF1684802D8B9CA66FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_0 = (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95*)il2cpp_codegen_object_new(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionDelegate__ctor_mDEB8E0006B6FBE8D17612D71B6AAEF18CA1F2BFB(L_0, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingApplicationException_m34EBF8A5064761FA3A1489B58F0FC88F22A91CD7_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___applicationDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___applicationDelegate_0), (void*)L_0);
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_1 = (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95*)il2cpp_codegen_object_new(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExceptionDelegate__ctor_mDEB8E0006B6FBE8D17612D71B6AAEF18CA1F2BFB(L_1, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArithmeticException_m8290EEE144C47E4E40A26518F15E4456E66428BB_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___arithmeticDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___arithmeticDelegate_1), (void*)L_1);
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_2 = (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95*)il2cpp_codegen_object_new(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ExceptionDelegate__ctor_mDEB8E0006B6FBE8D17612D71B6AAEF18CA1F2BFB(L_2, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingDivideByZeroException_m79369FABDFC4B7A658FB90AA83A833582BA50B29_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2), (void*)L_2);
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_3 = (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95*)il2cpp_codegen_object_new(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExceptionDelegate__ctor_mDEB8E0006B6FBE8D17612D71B6AAEF18CA1F2BFB(L_3, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m0DDAA0B11C0577104A3C337CD95BCEB0474778CD_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3), (void*)L_3);
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_4 = (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95*)il2cpp_codegen_object_new(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExceptionDelegate__ctor_mDEB8E0006B6FBE8D17612D71B6AAEF18CA1F2BFB(L_4, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidCastException_m63B0AB9D01F05113151C6F5AEF564CA18A712C4C_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___invalidCastDelegate_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___invalidCastDelegate_4), (void*)L_4);
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_5 = (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95*)il2cpp_codegen_object_new(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ExceptionDelegate__ctor_mDEB8E0006B6FBE8D17612D71B6AAEF18CA1F2BFB(L_5, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidOperationException_mAD82A0B9BB052EE4E2C9494A5C06D29561CF350F_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5), (void*)L_5);
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_6 = (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95*)il2cpp_codegen_object_new(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ExceptionDelegate__ctor_mDEB8E0006B6FBE8D17612D71B6AAEF18CA1F2BFB(L_6, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIOException_mB3905F1943D8A52F63FF86D33C8B55F4D2BFE1BC_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___ioDelegate_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___ioDelegate_6), (void*)L_6);
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_7 = (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95*)il2cpp_codegen_object_new(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ExceptionDelegate__ctor_mDEB8E0006B6FBE8D17612D71B6AAEF18CA1F2BFB(L_7, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingNullReferenceException_m1678867024287040EAEF9E1A6B603632E949C81C_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7), (void*)L_7);
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_8 = (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95*)il2cpp_codegen_object_new(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ExceptionDelegate__ctor_mDEB8E0006B6FBE8D17612D71B6AAEF18CA1F2BFB(L_8, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOutOfMemoryException_mE49ACFFEB5D1BDCA69BA5306BDC2BA5764FCA627_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8), (void*)L_8);
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_9 = (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95*)il2cpp_codegen_object_new(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ExceptionDelegate__ctor_mDEB8E0006B6FBE8D17612D71B6AAEF18CA1F2BFB(L_9, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOverflowException_m941534271CDCF96CC46373C3D001D38B687A5AAE_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___overflowDelegate_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___overflowDelegate_9), (void*)L_9);
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_10 = (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95*)il2cpp_codegen_object_new(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExceptionDelegate__ctor_mDEB8E0006B6FBE8D17612D71B6AAEF18CA1F2BFB(L_10, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingSystemException_mA8895E77BEDB03935FAD2AF1684802D8B9CA66FB_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___systemDelegate_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___systemDelegate_10), (void*)L_10);
		ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* L_11 = (ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ExceptionArgumentDelegate__ctor_mE53DD4E636AFEFA860A74C66DBCD22EB2CA5FC2B(L_11, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentException_m1A7F32CCCD497644F0D4F54AD803BC783B68531E_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___argumentDelegate_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___argumentDelegate_11), (void*)L_11);
		ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* L_12 = (ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ExceptionArgumentDelegate__ctor_mE53DD4E636AFEFA860A74C66DBCD22EB2CA5FC2B(L_12, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentNullException_mA3831677B0C3CB59A79EAB9F63570D4FCAE5206F_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___argumentNullDelegate_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___argumentNullDelegate_12), (void*)L_12);
		ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* L_13 = (ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ExceptionArgumentDelegate__ctor_mE53DD4E636AFEFA860A74C66DBCD22EB2CA5FC2B(L_13, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB95333E5EEE5C6FFCF1A8B9EFEB60E7301498FDD_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13), (void*)L_13);
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_14 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___applicationDelegate_0;
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_15 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___arithmeticDelegate_1;
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_16 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2;
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_17 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3;
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_18 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___invalidCastDelegate_4;
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_19 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5;
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_20 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___ioDelegate_6;
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_21 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7;
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_22 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8;
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_23 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___overflowDelegate_9;
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* L_24 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___systemDelegate_10;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_WebRtcSwig_mE2674A81F559F4ABC42618A05A7820A7733F8712(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* L_25 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___argumentDelegate_11;
		ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* L_26 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___argumentNullDelegate_12;
		ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* L_27 = ((SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_WebRtcSwig_m574844BB23B961E8F451862FC98E559ABBC18E5C(L_25, L_26, L_27, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_mD199EDDA31FF78BECA863CE55EC499D86FA7497F (SWIGExceptionHelper_t19BA582E7A5C5F6B7FDC052A9BA8BBBF850E35D6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void ExceptionDelegate_Invoke_m9EC896D2C89EA9FC2417AC879F54603DABF652A2_Multicast(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* currentDelegate = reinterpret_cast<ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionDelegate_Invoke_m9EC896D2C89EA9FC2417AC879F54603DABF652A2_OpenInst(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m9EC896D2C89EA9FC2417AC879F54603DABF652A2_OpenStatic(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m9EC896D2C89EA9FC2417AC879F54603DABF652A2_OpenStaticInvoker(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
void ExceptionDelegate_Invoke_m9EC896D2C89EA9FC2417AC879F54603DABF652A2_ClosedStaticInvoker(ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95 (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mDEB8E0006B6FBE8D17612D71B6AAEF18CA1F2BFB (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m9EC896D2C89EA9FC2417AC879F54603DABF652A2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m9EC896D2C89EA9FC2417AC879F54603DABF652A2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m9EC896D2C89EA9FC2417AC879F54603DABF652A2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m9EC896D2C89EA9FC2417AC879F54603DABF652A2_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionDelegate_Invoke_m9EC896D2C89EA9FC2417AC879F54603DABF652A2_Multicast;
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m9EC896D2C89EA9FC2417AC879F54603DABF652A2 (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_mBC8512D05FBC223B5734CFCEEEBC7893FAA63224 (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* __this, String_t* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_mC46EE8D0799B8DBA8A575913529835AD4A96AF33 (ExceptionDelegate_tC20A59D3442E03E328F79D0CBAE548D78069BD95* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void ExceptionArgumentDelegate_Invoke_m055EED3E5E1A9DFCD017E05642B433FA4999F430_Multicast(ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* currentDelegate = reinterpret_cast<ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionArgumentDelegate_Invoke_m055EED3E5E1A9DFCD017E05642B433FA4999F430_OpenInst(ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m055EED3E5E1A9DFCD017E05642B433FA4999F430_OpenStatic(ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m055EED3E5E1A9DFCD017E05642B433FA4999F430_OpenStaticInvoker(ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message, ___1_paramName);
}
void ExceptionArgumentDelegate_Invoke_m055EED3E5E1A9DFCD017E05642B433FA4999F430_ClosedStaticInvoker(ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message, ___1_paramName);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C (ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Marshaling of parameter '___1_paramName' to native representation
	char* ____1_paramName_marshaled = NULL;
	____1_paramName_marshaled = il2cpp_codegen_marshal_string(___1_paramName);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled, ____1_paramName_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_paramName' native representation
	il2cpp_codegen_marshal_free(____1_paramName_marshaled);
	____1_paramName_marshaled = NULL;

}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mE53DD4E636AFEFA860A74C66DBCD22EB2CA5FC2B (ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m055EED3E5E1A9DFCD017E05642B433FA4999F430_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m055EED3E5E1A9DFCD017E05642B433FA4999F430_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m055EED3E5E1A9DFCD017E05642B433FA4999F430_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m055EED3E5E1A9DFCD017E05642B433FA4999F430_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m055EED3E5E1A9DFCD017E05642B433FA4999F430_Multicast;
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m055EED3E5E1A9DFCD017E05642B433FA4999F430 (ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_mD001EECFE6F02BD79269A7C2934CF7C2043B5406 (ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* __this, String_t* ___0_message, String_t* ___1_paramName, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_message;
	__d_args[1] = ___1_paramName;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m42FA221703F90A30204917FE52946749339A8A2D (ExceptionArgumentDelegate_t17024A32C45D14267C94F03D526A199DF25AA59C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Boolean WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m9D7C57725172B3859CC1753DA69B613817C79B54 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_1 = ((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___pendingException_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0013:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6 (Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_0 = ((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___pendingException_0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var)));
		Exception_t* L_1 = ((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))))->___pendingException_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		Exception_t* L_4 = ___0_e;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_5 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_5, L_3, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m7E6B6622888484216F2A13456DF8E19D9903E0A6_RuntimeMethod_var)));
	}

IL_0027:
	{
		Exception_t* L_6 = ___0_e;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___pendingException_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___pendingException_0), (void*)L_6);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_0 = L_8;
		Type_t* L_9 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_9, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				Type_t* L_10 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_10, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
			int32_t L_11 = ((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			goto IL_0053;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		return;
	}
}
// System.Exception WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		V_0 = (Exception_t*)NULL;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_1 = ((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___pendingException_0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = L_2;
		((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_1 = L_4;
		Type_t* L_5 = V_1;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_5, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				Type_t* L_6 = V_1;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
			int32_t L_7 = ((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
			goto IL_0043;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		Exception_t* L_8 = V_0;
		return L_8;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__ctor_m46EE8F3F43A740DAE12CFC4B00E5B6C150C9B6CF (SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_m6C128E6FE4518D21F0A0F39B4D49DA209E22F693 (const RuntimeMethod* method) 
{
	{
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m38DA578E6839BE86909501F1021E85EC709E4F2A(char* ___0_cString)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_cString' to managed representation
	String_t* ____0_cString_unmarshaled = NULL;
	____0_cString_unmarshaled = il2cpp_codegen_marshal_string_result(___0_cString);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_m38DA578E6839BE86909501F1021E85EC709E4F2A(____0_cString_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_WebRtcSwig(WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_WebRtcSwig_m44538ACE045CF7A595A459FD2583ADBF50A1CF79 (SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* ___0_stringDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___0_stringDelegate' to native representation
	Il2CppMethodPointer ____0_stringDelegate_marshaled = NULL;
	____0_stringDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_stringDelegate));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_WebRtcSwig)(____0_stringDelegate_marshaled);

}
// System.String WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m38DA578E6839BE86909501F1021E85EC709E4F2A (String_t* ___0_cString, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_cString;
		return L_0;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m75FB3CD968CB6CDF765511BE3C035D53B2116ACF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_m38DA578E6839BE86909501F1021E85EC709E4F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t196818199DE190D2FBB989271425EC7D2343C661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* L_0 = (SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C*)il2cpp_codegen_object_new(SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGStringDelegate__ctor_m4F67F956CEAE329CC1AE313B1861A9EDB4275225(L_0, NULL, (intptr_t)((void*)SWIGStringHelper_CreateString_m38DA578E6839BE86909501F1021E85EC709E4F2A_RuntimeMethod_var), NULL);
		((SWIGStringHelper_t196818199DE190D2FBB989271425EC7D2343C661_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t196818199DE190D2FBB989271425EC7D2343C661_il2cpp_TypeInfo_var))->___stringDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGStringHelper_t196818199DE190D2FBB989271425EC7D2343C661_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t196818199DE190D2FBB989271425EC7D2343C661_il2cpp_TypeInfo_var))->___stringDelegate_0), (void*)L_0);
		SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* L_1 = ((SWIGStringHelper_t196818199DE190D2FBB989271425EC7D2343C661_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t196818199DE190D2FBB989271425EC7D2343C661_il2cpp_TypeInfo_var))->___stringDelegate_0;
		SWIGStringHelper_SWIGRegisterStringCallback_WebRtcSwig_m44538ACE045CF7A595A459FD2583ADBF50A1CF79(L_1, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m125BF570A9740D187730B13933B6874412DA2716 (SWIGStringHelper_t196818199DE190D2FBB989271425EC7D2343C661* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
String_t* SWIGStringDelegate_Invoke_mF041672ED7A1B6D26E8DEEAB938115B700D8A77F_Multicast(SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* currentDelegate = reinterpret_cast<SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* SWIGStringDelegate_Invoke_mF041672ED7A1B6D26E8DEEAB938115B700D8A77F_OpenInst(SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_mF041672ED7A1B6D26E8DEEAB938115B700D8A77F_OpenStatic(SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_mF041672ED7A1B6D26E8DEEAB938115B700D8A77F_OpenStaticInvoker(SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
String_t* SWIGStringDelegate_Invoke_mF041672ED7A1B6D26E8DEEAB938115B700D8A77F_ClosedStaticInvoker(SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< String_t*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C (SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m4F67F956CEAE329CC1AE313B1861A9EDB4275225 (SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_mF041672ED7A1B6D26E8DEEAB938115B700D8A77F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_mF041672ED7A1B6D26E8DEEAB938115B700D8A77F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_mF041672ED7A1B6D26E8DEEAB938115B700D8A77F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_mF041672ED7A1B6D26E8DEEAB938115B700D8A77F_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SWIGStringDelegate_Invoke_mF041672ED7A1B6D26E8DEEAB938115B700D8A77F_Multicast;
}
// System.String WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_mF041672ED7A1B6D26E8DEEAB938115B700D8A77F (SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_m5C38CE8D009CF1C7E4588B33ACCAB6CAA4068D1D (SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* __this, String_t* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.String WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m235E4339B54823E23FEB31FAAEE929982F5C6FA7 (SWIGStringDelegate_t3C186F551C3D947CD7415A16996C144DAC5C1F6C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (String_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebRtcCSharp.WebRtcWrap::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcWrap__ctor_m2E688E11B460A3C0DA503E291FFF3BC38ED2285A (WebRtcWrap_t52183279BCC0C6293FE10BD074B82B54E45371EB* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___1_cMemoryOwn;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef WebRtcCSharp.WebRtcWrap::getCPtr(WebRtcCSharp.WebRtcWrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F WebRtcWrap_getCPtr_m2EEC3DC1C693CB85B1BA7A1A52BFE134776987CC (WebRtcWrap_t52183279BCC0C6293FE10BD074B82B54E45371EB* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebRtcWrap_t52183279BCC0C6293FE10BD074B82B54E45371EB* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		WebRtcWrap_t52183279BCC0C6293FE10BD074B82B54E45371EB* L_1 = ___0_obj;
		NullCheck(L_1);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1->___swigCPtr_0;
		return L_2;
	}

IL_000a:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), NULL, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void WebRtcCSharp.WebRtcWrap::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcWrap_Finalize_mE071FF2AC77CB292EC0A73A818D3659B5A37D7B3 (WebRtcWrap_t52183279BCC0C6293FE10BD074B82B54E45371EB* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker0::Invoke(5 /* System.Void WebRtcCSharp.WebRtcWrap::Dispose() */, __this);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcWrap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcWrap_Dispose_m04DBCCBFB96F9A59DA028F08D8B48466640AC00C (WebRtcWrap_t52183279BCC0C6293FE10BD074B82B54E45371EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebRtcWrap_t52183279BCC0C6293FE10BD074B82B54E45371EB* V_0 = NULL;
	{
		V_0 = __this;
		WebRtcWrap_t52183279BCC0C6293FE10BD074B82B54E45371EB* L_0 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				WebRtcWrap_t52183279BCC0C6293FE10BD074B82B54E45371EB* L_1 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_2 = (&__this->___swigCPtr_0);
				intptr_t L_3;
				L_3 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_2, NULL);
				intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_5;
				L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
				if (!L_5)
				{
					goto IL_004a_1;
				}
			}
			{
				bool L_6 = __this->___swigCMemOwn_1;
				if (!L_6)
				{
					goto IL_0039_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
				WebRtcSwigPINVOKE_delete_WebRtcWrap_mB60F38E6ED373AA4E27E1C05F674266D4C12DF9F(L_7, NULL);
			}

IL_0039_1:
			{
				intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_9;
				memset((&L_9), 0, sizeof(L_9));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_9), NULL, L_8, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_9;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_004a_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0059;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
		return;
	}
}
// System.String WebRtcCSharp.WebRtcWrap::get_kSessionDescriptionTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcWrap_get_kSessionDescriptionTypeName_m6181E3AFDF49107811974C97FF32CA2144A1CBCC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = WebRtcSwigPINVOKE_WebRtcWrap_kSessionDescriptionTypeName_get_m201B3A26512D71B59DF9524152E9B34329F1F1DF(NULL);
		return L_0;
	}
}
// System.String WebRtcCSharp.WebRtcWrap::get_kSessionDescriptionSdpName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcWrap_get_kSessionDescriptionSdpName_m03F1FDDA9443C23D9E56E8855C2DCAFBAE0D9879 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = WebRtcSwigPINVOKE_WebRtcWrap_kSessionDescriptionSdpName_get_mD063D22B1D4352F1927EBB1E898929070D97070C(NULL);
		return L_0;
	}
}
// System.String WebRtcCSharp.WebRtcWrap::get_kCandidateSdpMidName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcWrap_get_kCandidateSdpMidName_m97726CB8D2D284DAB82679E4B728F90D8EF252ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = WebRtcSwigPINVOKE_WebRtcWrap_kCandidateSdpMidName_get_mD32D4479D08704E3235406EBDC807A13DBC2F090(NULL);
		return L_0;
	}
}
// System.String WebRtcCSharp.WebRtcWrap::get_kCandidateSdpMlineIndexName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcWrap_get_kCandidateSdpMlineIndexName_m308341DC8B4BDAF42008DCCF0326777FE3C67B7D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = WebRtcSwigPINVOKE_WebRtcWrap_kCandidateSdpMlineIndexName_get_m99E2A3D43103925BCE6AD06432B52B4E4B550039(NULL);
		return L_0;
	}
}
// System.String WebRtcCSharp.WebRtcWrap::get_kCandidateSdpName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcWrap_get_kCandidateSdpName_mC07EEC50A7221017DB4275730A8A1EE88A57D817 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = WebRtcSwigPINVOKE_WebRtcWrap_kCandidateSdpName_get_mBDA447387D98A414E7C16EE9292CED0730A0956D(NULL);
		return L_0;
	}
}
// System.Void WebRtcCSharp.WebRtcWrap::TestLog(WebRtcCSharp.LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcWrap_TestLog_m553448FB929A8AAC82003E22A4BE0E9C5F69260F (LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* L_0 = ___0_callback;
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		WebRtcSwigPINVOKE_WebRtcWrap_TestLog_m92D3D005A66D977CE7838C3D4C253D296313BEFF(L_0, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcWrap::SetLogCallback(WebRtcCSharp.LogCallback,WebRtcCSharp.LoggingSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcWrap_SetLogCallback_mA005255597F4FFD9AFB51234CCFB4CCFF4D8B2D3 (LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* ___0_stream, int32_t ___1_min_sev, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* L_0 = ___0_stream;
		int32_t L_1 = ___1_min_sev;
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		WebRtcSwigPINVOKE_WebRtcWrap_SetLogCallback_mAE9482F5BA94C172FC7F32C0DFFE74A8BC91FA17(L_0, L_1, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcWrap::ResetLogCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcWrap_ResetLogCallback_mF7D38F4FCAA67F8F55BDE1178896316970DCEB29 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		WebRtcSwigPINVOKE_WebRtcWrap_ResetLogCallback_m394741C48341BB0F6F932F80C647EF97FF389E47(NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcWrap::SetDebugLogLevel(WebRtcCSharp.LoggingSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcWrap_SetDebugLogLevel_mB114A6F43E604E30006C282F406BBFF4B85F9BFB (int32_t ___0_min_sev, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_min_sev;
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		WebRtcSwigPINVOKE_WebRtcWrap_SetDebugLogLevel_mAFE919ED3157A4FC1EA1E03D00767B0C3F1DD986(L_0, NULL);
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcWrap::Log(System.String,WebRtcCSharp.LoggingSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcWrap_Log_mB2A85CC6DC6D5074F6ECCB675070F22A97ECD572 (String_t* ___0_msg, int32_t ___1_sev, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_msg;
		int32_t L_1 = ___1_sev;
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		WebRtcSwigPINVOKE_WebRtcWrap_Log_m334DCD0EBCD0B247EE7459BEB296B54B565907C9(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m9D7C57725172B3859CC1753DA69B613817C79B54(NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRtcWrap_Log_mB2A85CC6DC6D5074F6ECCB675070F22A97ECD572_RuntimeMethod_var)));
	}

IL_0014:
	{
		return;
	}
}
// System.Boolean WebRtcCSharp.WebRtcWrap::IsSessionDescriptionJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcWrap_IsSessionDescriptionJson_m14E8CD79F17587E760093F63804D05171D2602E2 (String_t* ___0_jsonMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		String_t* L_0 = ___0_jsonMessage;
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = WebRtcSwigPINVOKE_WebRtcWrap_IsSessionDescriptionJson_m51DB241403DEFDBA2ECB61D57DEE8F7B0BED2FA9(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m9D7C57725172B3859CC1753DA69B613817C79B54(NULL);
		G_B1_0 = L_1;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRtcWrap_IsSessionDescriptionJson_m14E8CD79F17587E760093F63804D05171D2602E2_RuntimeMethod_var)));
	}

IL_0013:
	{
		return G_B2_0;
	}
}
// System.Boolean WebRtcCSharp.WebRtcWrap::IsIceCandidateJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcWrap_IsIceCandidateJson_mA76DED218D9075539821780A7474B59560679CFE (String_t* ___0_jsonMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		String_t* L_0 = ___0_jsonMessage;
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = WebRtcSwigPINVOKE_WebRtcWrap_IsIceCandidateJson_mCCEB75E5777AA64424C33DDBD569459254CB3EE1(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m9D7C57725172B3859CC1753DA69B613817C79B54(NULL);
		G_B1_0 = L_1;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRtcWrap_IsIceCandidateJson_mA76DED218D9075539821780A7474B59560679CFE_RuntimeMethod_var)));
	}

IL_0013:
	{
		return G_B2_0;
	}
}
// WebRtcCSharp.SWIGTYPE_p_webrtc__SessionDescriptionInterface WebRtcCSharp.WebRtcWrap::ParseJsonSessionDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660* WebRtcWrap_ParseJsonSessionDescription_m221A084B998A892A033CEA6FA66601C83C17C8E3 (String_t* ___0_jsonMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660* G_B3_0 = NULL;
	SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660* G_B5_0 = NULL;
	SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660* G_B4_0 = NULL;
	{
		String_t* L_0 = ___0_jsonMessage;
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = WebRtcSwigPINVOKE_WebRtcWrap_ParseJsonSessionDescription_mBF7D9087DDBD9103E28309BBA68B715346A9AE88(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		intptr_t L_5 = V_0;
		SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660* L_6 = (SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660*)il2cpp_codegen_object_new(SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SWIGTYPE_p_webrtc__SessionDescriptionInterface__ctor_m94E247126D623BC8EF75B631F348BF08E4096F37(L_6, L_5, (bool)1, NULL);
		G_B3_0 = L_6;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = ((SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660*)(NULL));
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SWIGPendingException_get_Pending_m9D7C57725172B3859CC1753DA69B613817C79B54(NULL);
		G_B4_0 = G_B3_0;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var)));
		Exception_t* L_8;
		L_8 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRtcWrap_ParseJsonSessionDescription_m221A084B998A892A033CEA6FA66601C83C17C8E3_RuntimeMethod_var)));
	}

IL_002b:
	{
		return G_B5_0;
	}
}
// System.String WebRtcCSharp.WebRtcWrap::ToJson(WebRtcCSharp.SWIGTYPE_p_webrtc__SessionDescriptionInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcWrap_ToJson_mEA45B4A01B1A3BEED3CD7F568EF5FC9637F3C7AA (SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660* ___0_arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGTYPE_p_webrtc__SessionDescriptionInterface_t3DD3C3EA6F1049200C9CE73207544911C88AC660* L_0 = ___0_arg0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = SWIGTYPE_p_webrtc__SessionDescriptionInterface_getCPtr_m2BAF39254C361B11C7B342E4D36D721AC43B9F67(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = WebRtcSwigPINVOKE_WebRtcWrap_ToJson__SWIG_0_m7484787A2096F0EA03D2EA41AA1E02B0D01E65F9(L_1, NULL);
		return L_2;
	}
}
// System.String WebRtcCSharp.WebRtcWrap::SessionDescriptionToJson(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcWrap_SessionDescriptionToJson_mD3463D047AB9E0614A733ACD81996D230C7DC4CA (String_t* ___0_lType, String_t* ___1_lSdp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_lType;
		String_t* L_1 = ___1_lSdp;
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = WebRtcSwigPINVOKE_WebRtcWrap_SessionDescriptionToJson_mEB1EFE2681AD10AFC53B07C0BDE924C1BF4C5433(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m9D7C57725172B3859CC1753DA69B613817C79B54(NULL);
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRtcWrap_SessionDescriptionToJson_mD3463D047AB9E0614A733ACD81996D230C7DC4CA_RuntimeMethod_var)));
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// WebRtcCSharp.SWIGTYPE_p_webrtc__IceCandidateInterface WebRtcCSharp.WebRtcWrap::ParseJsonIceCandidate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F* WebRtcWrap_ParseJsonIceCandidate_m285C91F4A5622F604D0DEA423055387D578F45BB (String_t* ___0_jsonMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F* G_B3_0 = NULL;
	SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F* G_B5_0 = NULL;
	SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F* G_B4_0 = NULL;
	{
		String_t* L_0 = ___0_jsonMessage;
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = WebRtcSwigPINVOKE_WebRtcWrap_ParseJsonIceCandidate_m077EA9E9D0473882FBF20675607F7FE0541629AE(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		intptr_t L_5 = V_0;
		SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F* L_6 = (SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F*)il2cpp_codegen_object_new(SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SWIGTYPE_p_webrtc__IceCandidateInterface__ctor_m7F65CADCBDE87D258E321EF3AA52D01574EA58EC(L_6, L_5, (bool)1, NULL);
		G_B3_0 = L_6;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = ((SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F*)(NULL));
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SWIGPendingException_get_Pending_m9D7C57725172B3859CC1753DA69B613817C79B54(NULL);
		G_B4_0 = G_B3_0;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var)));
		Exception_t* L_8;
		L_8 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRtcWrap_ParseJsonIceCandidate_m285C91F4A5622F604D0DEA423055387D578F45BB_RuntimeMethod_var)));
	}

IL_002b:
	{
		return G_B5_0;
	}
}
// System.String WebRtcCSharp.WebRtcWrap::ToJson(WebRtcCSharp.SWIGTYPE_p_webrtc__IceCandidateInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcWrap_ToJson_m27E4DADE20F546862877B4B0233D8CF1D6648327 (SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F* ___0_arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F* L_0 = ___0_arg0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = SWIGTYPE_p_webrtc__IceCandidateInterface_getCPtr_m3784EBA98DE4E6038A64F55E5581FD1D026715A5(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = WebRtcSwigPINVOKE_WebRtcWrap_ToJson__SWIG_1_mC64D320FC62B25B6E59C928D770E0ECE753D93E3(L_1, NULL);
		return L_2;
	}
}
// System.String WebRtcCSharp.WebRtcWrap::IceCandidateToJson(WebRtcCSharp.SWIGTYPE_p_webrtc__IceCandidateInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcWrap_IceCandidateToJson_m6EF874CE41C2D5C9D3D50637D423E560BD6A21F3 (SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F* ___0_arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGTYPE_p_webrtc__IceCandidateInterface_tDA23A2A34611F7199B7437A0192C55645B70915F* L_0 = ___0_arg0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = SWIGTYPE_p_webrtc__IceCandidateInterface_getCPtr_m3784EBA98DE4E6038A64F55E5581FD1D026715A5(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = WebRtcSwigPINVOKE_WebRtcWrap_IceCandidateToJson_m9D3DDD16CB11D711DC8D25B684D43B5AEC600E50(L_1, NULL);
		return L_2;
	}
}
// System.Void WebRtcCSharp.WebRtcWrap::Copy(WebRtcCSharp.DataBuffer,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcWrap_Copy_mAE68A337B1DFA6FFABE8BDD16880331DD499807D (DataBuffer_t0A2DEC3990BD03F738A846B15A1DAF1E2510F402* ___0_inputBuffer, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_outputBuffer, uint32_t ___2_outputLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataBuffer_t0A2DEC3990BD03F738A846B15A1DAF1E2510F402* L_0 = ___0_inputBuffer;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = DataBuffer_getCPtr_m79A560F93A90862B2787212B3722D569C4C904C4(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_outputBuffer;
		uint32_t L_3 = ___2_outputLength;
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		WebRtcSwigPINVOKE_WebRtcWrap_Copy__SWIG_0_mECCCF7F8DE66F13AC2858FA46FA65E86794C78DD(L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m9D7C57725172B3859CC1753DA69B613817C79B54(NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRtcWrap_Copy_mAE68A337B1DFA6FFABE8BDD16880331DD499807D_RuntimeMethod_var)));
	}

IL_001a:
	{
		return;
	}
}
// System.Void WebRtcCSharp.WebRtcWrap::Copy(System.Byte[],System.UInt32,WebRtcCSharp.DataBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcWrap_Copy_mB76C351A459CB3FC6686B4C761239D491A5397B5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inputBuffer, uint32_t ___1_inputLength, DataBuffer_t0A2DEC3990BD03F738A846B15A1DAF1E2510F402* ___2_outputBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inputBuffer;
		uint32_t L_1 = ___1_inputLength;
		DataBuffer_t0A2DEC3990BD03F738A846B15A1DAF1E2510F402* L_2 = ___2_outputBuffer;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_3;
		L_3 = DataBuffer_getCPtr_m79A560F93A90862B2787212B3722D569C4C904C4(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		WebRtcSwigPINVOKE_WebRtcWrap_Copy__SWIG_1_m089DB704EF0ADF660FA3F322D35D2D5C6A17A57D(L_0, L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m9D7C57725172B3859CC1753DA69B613817C79B54(NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRtcWrap_Copy_mB76C351A459CB3FC6686B4C761239D491A5397B5_RuntimeMethod_var)));
	}

IL_001a:
	{
		return;
	}
}
// System.String WebRtcCSharp.WebRtcWrap::GetWebRtcVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcWrap_GetWebRtcVersion_mD846FA2E6ED8B95BC6AE8C680A45CB55B383D083 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = WebRtcSwigPINVOKE_WebRtcWrap_GetWebRtcVersion_mA2DE4862174B94B63D049E6F8E57CFB20B7C7308(NULL);
		return L_0;
	}
}
// System.String WebRtcCSharp.WebRtcWrap::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRtcWrap_GetVersion_m423D2AD6306662056A3225BA50E8065ACDCC8E24 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = WebRtcSwigPINVOKE_WebRtcWrap_GetVersion_mF8C666FF1FC895C5B4C4B5636D72B89DC9CF1B9D(NULL);
		return L_0;
	}
}
// System.Boolean WebRtcCSharp.WebRtcWrap::IsDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcWrap_IsDebugBuild_mCEDD30DFEA4B9FBC1C7BA61C8A9290477B96A210 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = WebRtcSwigPINVOKE_WebRtcWrap_IsDebugBuild_m061BE1C34499B1575F31D9851DC8028582ED4E95(NULL);
		return L_0;
	}
}
// WebRtcCSharp.SWIGTYPE_p_libyuv__RotationMode WebRtcCSharp.WebRtcWrap::ConvertRotationMode(WebRtcCSharp.SWIGTYPE_p_webrtc__VideoRotation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SWIGTYPE_p_libyuv__RotationMode_tA02FF08CA003392BFFA0E9E01A4A31989E459ED6* WebRtcWrap_ConvertRotationMode_m395D4D09333B58A9E4B0E57315EEDC4F5E1A5B45 (SWIGTYPE_p_webrtc__VideoRotation_t0DDA379EB55DFFE14612145C2D746047CF4E9EFA* ___0_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGTYPE_p_libyuv__RotationMode_tA02FF08CA003392BFFA0E9E01A4A31989E459ED6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SWIGTYPE_p_libyuv__RotationMode_tA02FF08CA003392BFFA0E9E01A4A31989E459ED6* G_B2_0 = NULL;
	SWIGTYPE_p_libyuv__RotationMode_tA02FF08CA003392BFFA0E9E01A4A31989E459ED6* G_B1_0 = NULL;
	{
		SWIGTYPE_p_webrtc__VideoRotation_t0DDA379EB55DFFE14612145C2D746047CF4E9EFA* L_0 = ___0_rotation;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = SWIGTYPE_p_webrtc__VideoRotation_getCPtr_m209C7EBCFC578DB74F97B98A32EB7F0000152538(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = WebRtcSwigPINVOKE_WebRtcWrap_ConvertRotationMode_m1B4F85A9424C3E74AAB1389F062BA1B6C27017AF(L_1, NULL);
		SWIGTYPE_p_libyuv__RotationMode_tA02FF08CA003392BFFA0E9E01A4A31989E459ED6* L_3 = (SWIGTYPE_p_libyuv__RotationMode_tA02FF08CA003392BFFA0E9E01A4A31989E459ED6*)il2cpp_codegen_object_new(SWIGTYPE_p_libyuv__RotationMode_tA02FF08CA003392BFFA0E9E01A4A31989E459ED6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		SWIGTYPE_p_libyuv__RotationMode__ctor_mCD6B67FC71971B2D934B22038016F13773246470(L_3, L_2, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m9D7C57725172B3859CC1753DA69B613817C79B54(NULL);
		G_B1_0 = L_3;
		if (!L_4)
		{
			G_B2_0 = L_3;
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t66D430D5E87A7F3224CBA47FB29D22559F622C4A_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_mB7CB6383FAE280390ADE774FA195AB3A1CCA3FEF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRtcWrap_ConvertRotationMode_m395D4D09333B58A9E4B0E57315EEDC4F5E1A5B45_RuntimeMethod_var)));
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.Int32 WebRtcCSharp.WebRtcWrap::ScaleToI420(WebRtcCSharp.SWIGTYPE_p_webrtc__I420Buffer,WebRtcCSharp.SWIGTYPE_p_webrtc__I420Buffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRtcWrap_ScaleToI420_mF355B0898673FAB4A32511430DF436ED1E5A7A4C (SWIGTYPE_p_webrtc__I420Buffer_tB28AD14902195B82BD9231F95171501B62A84ED5* ___0_src_frame_scale, SWIGTYPE_p_webrtc__I420Buffer_tB28AD14902195B82BD9231F95171501B62A84ED5* ___1_dst_frame_scale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGTYPE_p_webrtc__I420Buffer_tB28AD14902195B82BD9231F95171501B62A84ED5* L_0 = ___0_src_frame_scale;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = SWIGTYPE_p_webrtc__I420Buffer_getCPtr_m575FF16E90C3E5E233CD6309573A5EFB7D03D8C1(L_0, NULL);
		SWIGTYPE_p_webrtc__I420Buffer_tB28AD14902195B82BD9231F95171501B62A84ED5* L_2 = ___1_dst_frame_scale;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_3;
		L_3 = SWIGTYPE_p_webrtc__I420Buffer_getCPtr_m575FF16E90C3E5E233CD6309573A5EFB7D03D8C1(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(WebRtcSwigPINVOKE_t2C4BBDA53471BC4DC84FEAAD833F2DB6DBC8CB86_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = WebRtcSwigPINVOKE_WebRtcWrap_ScaleToI420_m97BC698CC964BF13F1FAE0E378702A62FAA20574(L_1, L_3, NULL);
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
void LogCallback_Invoke_m61E228049482540E190905C702ED18297BBD1E98_Multicast(LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* __this, String_t* ___0_msg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* currentDelegate = reinterpret_cast<LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_msg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LogCallback_Invoke_m61E228049482540E190905C702ED18297BBD1E98_OpenInst(LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* __this, String_t* ___0_msg, const RuntimeMethod* method)
{
	NullCheck(___0_msg);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_msg, method);
}
void LogCallback_Invoke_m61E228049482540E190905C702ED18297BBD1E98_OpenStatic(LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* __this, String_t* ___0_msg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_msg, method);
}
void LogCallback_Invoke_m61E228049482540E190905C702ED18297BBD1E98_OpenStaticInvoker(LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* __this, String_t* ___0_msg, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_msg);
}
void LogCallback_Invoke_m61E228049482540E190905C702ED18297BBD1E98_ClosedStaticInvoker(LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* __this, String_t* ___0_msg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_msg);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C (LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* __this, String_t* ___0_msg, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_msg' to native representation
	char* ____0_msg_marshaled = NULL;
	____0_msg_marshaled = il2cpp_codegen_marshal_string(___0_msg);

	// Native function invocation
	il2cppPInvokeFunc(____0_msg_marshaled);

	// Marshaling cleanup of parameter '___0_msg' native representation
	il2cpp_codegen_marshal_free(____0_msg_marshaled);
	____0_msg_marshaled = NULL;

}
// System.Void WebRtcCSharp.LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m83C1FEEF2E89DB819BB2A2AC637C9A23CB0DED2E (LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogCallback_Invoke_m61E228049482540E190905C702ED18297BBD1E98_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LogCallback_Invoke_m61E228049482540E190905C702ED18297BBD1E98_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogCallback_Invoke_m61E228049482540E190905C702ED18297BBD1E98_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&LogCallback_Invoke_m61E228049482540E190905C702ED18297BBD1E98_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LogCallback_Invoke_m61E228049482540E190905C702ED18297BBD1E98_Multicast;
}
// System.Void WebRtcCSharp.LogCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback_Invoke_m61E228049482540E190905C702ED18297BBD1E98 (LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_msg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebRtcCSharp.LogCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallback_BeginInvoke_m3694A7F76024F31AAC49BC2CC0D1087AC0FBB00F (LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* __this, String_t* ___0_msg, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_msg;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void WebRtcCSharp.LogCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback_EndInvoke_mCAD7B91FD78CD1C02ACF419500D3A3B79BA9FCC0 (LogCallback_t9CFDDDDAEB347E784B904E94DBCD3BCB74CE2E0C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void WebRtcCSharp.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_mEF36AF2E79BE146D6DFBAE273374B93A24E37065 (MonoPInvokeCallbackAttribute_tB0B31CC7DC3A878B5DBC1D206316B9D58A589A1E* __this, Type_t* ___0_t, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___0_t;
		__this->___type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____handle_1;
		return L_0;
	}
}
